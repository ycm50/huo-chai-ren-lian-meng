#!/usr/bin/env python
# ---------------------------------------------------------------------------
# Repairs a recurring jadx decompilation artefact in the reconstructed sources.
#
# When jadx coalesces try/catch/finally it loses the outer binding and emits
# code that assigns into undeclared synthetic variables:
#
#     } catch (Exception e3) {
#         e = e3;                     // `e` was never declared
#         e.printStackTrace();
#     }
#
# It simultaneously leaves no-op self-assignments inside same-named catch
# parameters:
#
#     } catch (Exception e) {
#         e = e;                      // meaningless
#     }
#
# The original bytecode is correct; only the decompiled text is malformed.
# Java forbids a catch parameter shadowing a local of the same name, so the
# repair is:
#
#   * declare the synthetic variable (`Exception e = null;`) at the top of the
#     enclosing method, for the cross-name assignments;
#   * rename every colliding catch parameter (`e` -> `__jc_e`) in such a method,
#     and drop its no-op self-assignment.
#
# The rule is keyed on the method, not on the presence of a missing declaration,
# so the script is safe to re-run and also repairs files that already received
# the declaration in an earlier pass.
#
# Usage: python tools/fix_jadx_catch_artifacts.py <file.java> [...]
# ---------------------------------------------------------------------------
import re
import sys

VARS = ('e', 'th')
DECLS = {'e': 'Exception e = null;', 'th': 'Throwable th = null;'}
# Renamed catch parameter for each synthetic variable. Chosen to be names the
# decompiled sources never use, so the rename cannot collide with an existing
# binding in the same method.
RENAMED = {'e': '__jc_e', 'th': '__jc_th'}

# No-op self-assignment: "e = e;" / "th = th;".
SELF_ASSIGN = {
    var: re.compile(r'^(?P<indent>\s*)%s\s*=\s*%s\s*;\s*$' % (var, var))
    for var in VARS
}

# A catch clause binding the synthetic name: "catch (Exception e) {".
# The exception type is matched loosely because jadx emits concrete types such
# as IOException too. A distinct name like `e3` is not matched: the pattern
# requires the closing paren right after the name.
CATCH_PARAM = {
    var: re.compile(r'(catch\s*\(\s*[\w$.]+\s+)%s(\s*\))' % var)
    for var in VARS
}

# Cross-name assignment into the synthetic variable: "e = e3;".
CROSS_ASSIGN = {
    var: re.compile(r'^\s*%s\s*=\s*%s\d+\s*;\s*$' % (var, var), re.M)
    for var in VARS
}

# A genuine local declaration, e.g. "Exception e = null;". A catch parameter
# (`catch (Exception e)`) does NOT count: its scope is the catch block itself.
DECL_RE = {
    var: re.compile(r'^\s*(?:final\s+)?[\w$.]+\s+%s\s*(?:=|;)' % var, re.M)
    for var in VARS
}

# A method/constructor signature line ending in '{'.
SIG_RE = re.compile(
    r'^(?P<indent>\s*)'
    r'(?:(?:public|private|protected|static|final|synchronized|native|abstract|default)\s+)*'
    r'(?:[\w$.<>\[\],?]+\s+)+'
    r'\w+\s*\([^;{}]*\)\s*'
    r'(?:throws\s+[\w$.,\s]+)?'
    r'\{\s*$'
)


def _strip(line):
    """Remove comments and string literals so their braces do not count."""
    line = re.sub(r'//.*$', '', line)
    line = re.sub(r'"(\\.|[^"\\])*"', '""', line)
    line = re.sub(r"'(\\.|[^'\\])*'", "''", line)
    return line


def _method_end(lines, start):
    """Index of the line closing the method body opened at `start`."""
    depth = 0
    started = False
    j = start
    while j < len(lines):
        stripped = _strip(lines[j])
        depth += stripped.count('{') - stripped.count('}')
        if stripped.count('{'):
            started = True
        if started and depth <= 0:
            return j
        j += 1
    return len(lines) - 1


def _catch_end(lines, start):
    """Index of the line closing the catch block whose clause is at `start`.

    The clause line carries the closing brace of the preceding try and the
    opening brace of the catch block, so its net brace count is zero. The catch
    block's own opening brace is therefore not represented in that net value
    and must be seeded explicitly; scanning then begins on the following line.
    Without the seed, a nested block such as `if (...) { ... }` whose closing
    brace restores the net count to zero would be mistaken for the end of the
    catch block.
    """
    depth = 1
    j = start + 1
    while j < len(lines):
        stripped = _strip(lines[j])
        depth += stripped.count('{') - stripped.count('}')
        if depth <= 0:
            return j
        j += 1
    return len(lines) - 1


def patch(path):
    with open(path, 'r', encoding='utf-8') as fh:
        lines = fh.read().split('\n')

    # --- pass 1: drop no-op self-assignments -------------------------------
    lines = [ln for ln in lines
             if not any(SELF_ASSIGN[v].match(ln) for v in VARS)]

    # --- pass 2: find methods that own a synthetic variable ----------------
    # A method owns one when it assigns across names (`e = e3;`) or already
    # carries the declaration. Both cases mean a catch parameter of the same
    # name would shadow it.
    owned = {}
    i = 0
    while i < len(lines):
        m = SIG_RE.match(lines[i])
        if not m:
            i += 1
            continue
        end = _method_end(lines, i)
        body = '\n'.join(lines[i + 1:end])
        vars_here = [
            v for v in VARS
            if CROSS_ASSIGN[v].search(body) or DECL_RE[v].search(body)
        ]
        if vars_here:
            owned[i] = (m.group('indent'), end, vars_here)
        i = end + 1

    # --- pass 3: rename every colliding catch parameter --------------------
    # Two shapes are handled, and one line may be either:
    #   * `catch (Exception e)` inside a method that owns the variable: rename
    #     the binding;
    #   * `catch (Exception __jc_e)` left behind by an earlier run: the binding
    #     is already renamed, but references in the body (notably `throw th;`)
    #     may still use the old name, so they are rewritten here.
    # In both cases the block body is rewritten with a word-boundary match, so
    # `th2` and `__jc_th` are left alone.
    renamed = 0
    for idx, line in enumerate(lines):
        for var in VARS:
            new = RENAMED[var]
            if re.search(r'catch\s*\(\s*[\w$.]+\s+%s\s*\)' % new, line):
                pass  # already renamed by a previous run
            elif CATCH_PARAM[var].search(line):
                if not any(s <= idx <= e and var in vs
                           for s, (_, e, vs) in owned.items()):
                    continue
                lines[idx] = CATCH_PARAM[var].sub(
                    lambda mo, n=new: mo.group(1) + n + mo.group(2), lines[idx]
                )
                renamed += 1
            else:
                continue
            close = _catch_end(lines, idx)
            for k in range(idx + 1, close + 1):
                lines[k] = re.sub(r'\b%s\b' % var, new, lines[k])
            break

    # --- pass 4: insert any missing synthetic declarations -----------------
    out = []
    declared = 0
    i = 0
    while i < len(lines):
        out.append(lines[i])
        m = SIG_RE.match(lines[i])
        if m:
            end = _method_end(lines, i)
            body = '\n'.join(lines[i + 1:end])
            for var in VARS:
                if CROSS_ASSIGN[var].search(body) and not DECL_RE[var].search(body):
                    out.append(m.group('indent') + '    ' + DECLS[var])
                    declared += 1
            for k in range(i + 1, end + 1):
                out.append(lines[k])
            i = end + 1
            continue
        i += 1

    with open(path, 'w', encoding='utf-8') as fh:
        fh.write('\n'.join(out))
    return declared, renamed


def main():
    tot_ins = tot_ren = 0
    for path in sys.argv[1:]:
        ins, ren = patch(path)
        if ins or ren:
            print('%s: declared %d variable(s), renamed %d catch parameter(s)'
                  % (path, ins, ren))
            tot_ins += ins
            tot_ren += ren
    print('total: declared %d, renamed %d' % (tot_ins, tot_ren))


if __name__ == '__main__':
    main()

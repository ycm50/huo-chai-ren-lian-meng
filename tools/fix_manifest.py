#!/usr/bin/env python
# ---------------------------------------------------------------------------
# Cleans up the AndroidManifest.xml decoded out of the original APK so it can
# be built by a modern Android Gradle Plugin.
#
# The original binary manifest carried duplicate <uses-permission> and
# <meta-data> entries (a side effect of the multi-channel SDK build), and
# declared its package via the legacy `package` attribute. AGP 8 rejects both.
#
# Usage: python tools/fix_manifest.py <AndroidManifest.xml>
# ---------------------------------------------------------------------------
import re
import sys
import xml.etree.ElementTree as ET

ANDROID_NS = 'http://schemas.android.com/apk/res/android'
ET.register_namespace('android', ANDROID_NS)

path = sys.argv[1]
tree = ET.parse(path)
root = tree.getroot()

# 1. Drop the legacy package attribute; the namespace is set in build.gradle.
pkg = root.get('package')
if pkg:
    del root.attrib['package']
    print('removed legacy package="%s" (namespace comes from build.gradle)' % pkg)

# Drop build-tool-only attributes AGP recomputes.
for attr in ('compileSdkVersion', 'compileSdkVersionCodename',
             'platformBuildVersionCode', 'platformBuildVersionName'):
    if root.get(attr) is not None:
        del root.attrib[attr]
        print('removed build attribute %s' % attr)


def key(elem):
    """Identity used to decide whether two child elements are 'the same'."""
    return (elem.tag, elem.get('{%s}name' % ANDROID_NS))


def dedupe(parent, label):
    """Removes later duplicates at this level, keeping the first occurrence."""
    seen = set()
    removed = 0
    for child in list(parent):
        k = key(child)
        # Only dedupe named elements; other tags (intent-filter, data, ...)
        # legitimately repeat within a component.
        if k[1] is None:
            continue
        if k in seen:
            parent.remove(child)
            removed += 1
    if removed:
        print('removed %d duplicate %s entr%s' % (removed, label, 'y' if removed == 1 else 'ies'))


# 2. <uses-permission> duplicates at manifest level. The original manifest
#    repeats these (and repeats some twice over) from its multi-channel build.
dedupe(root, 'uses-permission')
# Other manifest-level named entries can repeat the same way.
for tag in ('uses-feature', 'permission', 'uses-library'):
    dedupe(root, tag)

# 3. Per-<application>: duplicate <meta-data>, <activity>, <service>,
#    <receiver>, <provider>, <uses-library>.
app = root.find('application')
if app is not None:
    for tag in ('meta-data', 'activity', 'service', 'receiver', 'provider',
                'uses-library', 'activity-alias'):
        seen = set()
        for child in list(app):
            if child.tag != tag:
                continue
            k = key(child)
            if k in seen:
                app.remove(child)
                print('removed duplicate <%s android:name="%s">' % (tag, k[1]))
            else:
                seen.add(k)

# 4. AGP 8 / targetSdk 31+ requires an explicit android:exported on every
#    component that declares an <intent-filter>. The original manifest predates
#    that rule. Components with an intent-filter are reachable from outside the
#    app, so export them; everything else stays internal.
EXPORTED_TAGS = ('activity', 'activity-alias', 'service', 'receiver', 'provider')


def set_exported(app):
    added = 0
    for child in app:
        if child.tag not in EXPORTED_TAGS:
            continue
        if child.get('{%s}exported' % ANDROID_NS) is not None:
            continue
        if child.find('intent-filter') is not None:
            child.set('{%s}exported' % ANDROID_NS, 'true')
            added += 1
        elif child.tag in ('activity', 'activity-alias', 'service', 'receiver'):
            # No intent filter: not externally reachable.
            child.set('{%s}exported' % ANDROID_NS, 'false')
            added += 1
    if added:
        print('set android:exported on %d component(s)' % added)


if app is not None:
    set_exported(app)

tree.write(path, encoding='utf-8', xml_declaration=True)
print('rewrote %s' % path)

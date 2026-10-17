// ---------------------------------------------------------------------------
// junit.framework - compile stub
//
// The decompiled game code (com.DBGame.DiabloLOL.Util) imports junit's Assert
// for a single assertion:
//
//   Assert.assertTrue(path != null && !path.equals("") && height > 0 && width > 0);
//
// junit is not on the Android runtime classpath, so this minimal stub keeps the
// call site compiling with the same semantics.
//
// AUTO-GENERATED compile stub.
// ---------------------------------------------------------------------------

package junit.framework;

@SuppressWarnings({"unused", "WeakerAccess"})
public class Assert {

    protected Assert() { }

    public static void assertTrue(boolean condition) {
        if (!condition) {
            fail("assertTrue failed");
        }
    }

    public static void assertTrue(String message, boolean condition) {
        if (!condition) {
            fail(message);
        }
    }

    public static void assertFalse(boolean condition) {
        if (condition) {
            fail("assertFalse failed");
        }
    }

    public static void assertFalse(String message, boolean condition) {
        if (condition) {
            fail(message);
        }
    }

    public static void assertNotNull(Object object) {
        if (object == null) {
            fail("assertNotNull failed");
        }
    }

    public static void assertNull(Object object) {
        if (object != null) {
            fail("assertNull failed");
        }
    }

    public static void assertEquals(Object expected, Object actual) {
        if (expected == null ? actual != null : !expected.equals(actual)) {
            fail("expected:<" + expected + "> but was:<" + actual + ">");
        }
    }

    public static void fail(String message) {
        throw new AssertionFailedError(message);
    }

    public static void fail() {
        fail(null);
    }
}

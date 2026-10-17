// AUTO-GENERATED compile stub for the China Unicom (联通) SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package com.unicom.dcLoader;

import android.content.Context;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class Utils {

    /// Implemented anonymously in DiabloLOL (AnonymousClass13):
    ///   public void CommandResult(String resp)
    public interface UnipayCommandResultListener {
        void CommandResult(String resp);
    }

    /// Implemented anonymously in DiabloLOL:
    ///   public void PayResult(String orderId, int resultCode, int code, String msg)
    public interface UnipayPayResultListener {
        void PayResult(String orderId, int resultCode, int code, String msg);
    }

    public static void init(Context context) { }

    public static void pay(Context context, String orderId, UnipayPayResultListener listener) { }

    public static void exit(Context context) { }

    public static void update(Context context) { }
}

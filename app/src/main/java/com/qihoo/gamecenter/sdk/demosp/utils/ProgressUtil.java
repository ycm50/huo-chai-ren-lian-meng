// AUTO-GENERATED compile stub for the 360 game-center SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package com.qihoo.gamecenter.sdk.demosp.utils;

import android.content.Context;
import android.content.DialogInterface;
import android.app.ProgressDialog;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class ProgressUtil {

    /// DiabloLOL:
    ///   ProgressUtil.show(this, R.string.get_user_title, R.string.get_user_message,
    ///                     new DialogInterface.OnCancelListener() { ... })
    public static ProgressDialog show(Context context, int titleResId, int messageResId,
                                      DialogInterface.OnCancelListener cancelListener) {
        return new ProgressDialog(context);
    }

    public static ProgressDialog show(Context context, String title, String message,
                                      DialogInterface.OnCancelListener cancelListener) {
        return new ProgressDialog(context);
    }

    public static void dismiss(ProgressDialog dialog) {
        if (dialog != null) {
            dialog.dismiss();
        }
    }
}

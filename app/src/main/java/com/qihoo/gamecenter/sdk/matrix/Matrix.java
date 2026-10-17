// AUTO-GENERATED compile stub for the 360 game-center SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.
// See tools/gen_sdk_stubs.py.

package com.qihoo.gamecenter.sdk.matrix;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.qihoo.gamecenter.sdk.protocols.CPCallBackMgr;
import com.qihoo.gamecenter.sdk.common.IDispatcherCallback;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class Matrix {

    public static final String VIP = "vip";

    public static void initInApplication(android.app.Application app) { }

    /// DiabloLOL.init360(): Matrix.setActivity(this, this.mSDKCallback, false)
    public static void setActivity(Activity activity, CPCallBackMgr.MatrixCallBack callback, boolean isLandscape) { }

    /// DiabloLOL: Matrix.execute(this, intent, callback)
    public static void execute(Activity activity, Intent intent, IDispatcherCallback callback) { }

    /// DiabloLOL: Matrix.invokeActivity(this, intent, callback)
    public static void invokeActivity(Activity activity, Intent intent, IDispatcherCallback callback) { }

    /// DiabloLOL: Matrix.getAppKey(this)
    public static String getAppKey(Context context) { return ""; }

    /// DiabloLOL.onDestroy(): Matrix.destroy(this)
    public static void destroy(Activity activity) { }

    /// DiabloLOL: Matrix.onNewIntent(this, intent)
    public static void onNewIntent(Activity activity, Intent intent) { }

    public static void onPause(Activity activity) { }

    public static void onResume(Activity activity) { }

    public static void onStart(Activity activity) { }

    public static void onStop(Activity activity) { }

    public static void onRestart(Activity activity) { }

    public static void onActivityResult(Activity activity, int requestCode, int resultCode, Intent data) { }
}

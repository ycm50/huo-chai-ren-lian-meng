// AUTO-GENERATED compile stub for the 360 game-center SDK user-info task.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package com.qihoo.gamecenter.sdk.demosp.utils;

import android.content.Context;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class QihooUserInfoTask {

    /// DiabloLOL: QihooUserInfoTask.newInstance()
    public static QihooUserInfoTask newInstance() {
        return new QihooUserInfoTask();
    }

    /// DiabloLOL:
    ///   mUserInfoTask.doRequest(this, this.mAccessToken, Matrix.getAppKey(this), listener)
    public void doRequest(Context context, String accessToken, String appKey,
                          QihooUserInfoListener listener) { }

    /// DiabloLOL: mUserInfoTask.doCancel()
    public void doCancel() { }
}

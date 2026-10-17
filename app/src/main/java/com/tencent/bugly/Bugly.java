// ---------------------------------------------------------------------------
// com.tencent.bugly - compile stub
//
// The decompiled sources reference Bugly in two places:
//   com.DBGame.DiabloLOL.CmgameApplication -> CrashReport.initCrashReport(...)
//   org.json.alipay.c                      -> Bugly.SDK_IS_DEV
//
// CrashReport itself is stubbed under com/tencent/bugly/crashreport/. This
// stub supplies the sibling Bugly facade constant.
//
// AUTO-GENERATED compile stub.
// ---------------------------------------------------------------------------

package com.tencent.bugly;

@SuppressWarnings({"unused", "WeakerAccess"})
public class Bugly {

    /// Key looked up in the parsed JSON config to detect a dev build.
    public static final String SDK_IS_DEV = "false";

    public static final String SDK_VERSION = "3.0.0";

    public static final String SDK_USER_CONFIG = "sdk_user_config";

    public static int getSdkVersionInt() {
        return 0;
    }
}

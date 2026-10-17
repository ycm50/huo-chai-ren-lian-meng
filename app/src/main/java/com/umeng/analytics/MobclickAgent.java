// AUTO-GENERATED compile stub for the Umeng (友盟) analytics SDK.
//
// libcocos2dcpp.so resolves this class from JNI (umengJniHelper caches
// gClass_MobclickAgent) during System.loadLibrary("cocos2dcpp") in
// DiabloLOL.<clinit>; a missing class aborts the process with
// "ClassNotFoundException ... MobclickAgent". Only the entry points the
// native layer and the game actually reference are declared here.

package com.umeng.analytics;

import android.content.Context;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class MobclickAgent {

    public enum EScenarioType {
        E_UM_NORMAL, E_UM_GAME, E_UM_ANALYTICS_OEM, E_UM_GAME_OEM
    }

    public static class UMAnalyticsConfig {
        public UMAnalyticsConfig(Context context, String appkey, String channel, EScenarioType type) {
        }
    }

    public static void startWithConfigure(UMAnalyticsConfig config) {
    }

    public static void setDebugMode(boolean z) {
    }

    public static void setCheckDevice(boolean z) {
    }

    public static void setSessionContinueMillis(long j) {
    }

    public static void setLatencyWindow(long j) {
    }

    public static void enableEncrypt(boolean z) {
    }

    public static void onPageStart(String str) {
    }

    public static void onPageEnd(String str) {
    }

    public static void onProfileSignIn(String str) {
    }

    public static void onProfileSignIn(String str, String str2) {
    }

    public static void onProfileSignOff() {
    }

    public static void onResume(Context context) {
    }

    public static void onPause(Context context) {
    }

    public static void onKillProcess(Context context) {
    }
}

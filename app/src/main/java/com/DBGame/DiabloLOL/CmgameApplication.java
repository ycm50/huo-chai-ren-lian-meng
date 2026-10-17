package com.DBGame.DiabloLOL;

import android.app.ActivityManager;
import android.app.Application;
import android.content.Context;
import android.os.Process;
import android.util.Log;
import cn.wjdiankong.hookpms.ServiceManagerWraper;
import com.qihoo.gamecenter.sdk.matrix.Matrix;
import com.tencent.bugly.crashreport.CrashReport;

/* loaded from: classes.dex */
public class CmgameApplication extends Application {
    @Override // android.app.Application
    public void onCreate() {
        ServiceManagerWraper.hookPMS(this);
        super.onCreate();
        if (isMainProcess(this)) {
            Log.e("application", "------------------main");
            System.loadLibrary("megjb");
            Matrix.initInApplication(this);
        }
        CrashReport.initCrashReport(getApplicationContext(), "900057494", false);

        /* R285: attach the mod menu on the first resumed activity. Done here (and not in
           the obfuscated 43 KB main Activity) so the game code stays untouched, and fully
           wrapped in try/catch so a UI failure can never break the game. */
        try {
            ModMenuFiles.init(this);      /* R363: needed for getExternalFilesDir() */
            registerActivityLifecycleCallbacks(new ActivityLifecycleCallbacks() {
                @Override public void onActivityCreated(android.app.Activity a, android.os.Bundle b) { }
                @Override public void onActivityStarted(android.app.Activity a) { }
                @Override public void onActivityResumed(android.app.Activity a) {
                    try { ModMenu.attach(a); } catch (Throwable ignored) { }
                }
                @Override public void onActivityPaused(android.app.Activity a) { }
                @Override public void onActivityStopped(android.app.Activity a) { }
                @Override public void onActivitySaveInstanceState(android.app.Activity a, android.os.Bundle b) { }
                @Override public void onActivityDestroyed(android.app.Activity a) { }
            });
            Log.e("application", "mod menu callbacks registered");
        } catch (Throwable t) {
            Log.e("application", "mod menu attach failed: " + t);
        }
    }

    private boolean isMainProcess(Context context) {
        boolean ret = false;
        String processName = context.getPackageName();
        int pid = Process.myPid();
        ActivityManager mActivityManager = (ActivityManager) context.getSystemService("activity");
        if (mActivityManager == null) {
            return false;
        }
        for (ActivityManager.RunningAppProcessInfo appProcess : mActivityManager.getRunningAppProcesses()) {
            if (appProcess.pid == pid && appProcess.processName.equalsIgnoreCase(processName)) {
                ret = true;
            }
        }
        return ret;
    }
}

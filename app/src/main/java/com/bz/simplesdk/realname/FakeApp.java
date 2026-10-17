package com.bz.simplesdk.realname;

import android.app.Application;
import android.content.Context;
import com.DBGame.DiabloLOL.CmgameApplication;

/* loaded from: classes2.dex */
public class FakeApp extends CmgameApplication {
    public static void attachBaseContextInit(Context context) {
    }

    public static void onCreateInit(Application application) {
    }

    @Override // android.content.ContextWrapper
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        attachBaseContextInit(base);
    }

    @Override // com.DBGame.DiabloLOL.CmgameApplication, android.app.Application
    public void onCreate() {
        super.onCreate();
        onCreateInit(this);
    }
}

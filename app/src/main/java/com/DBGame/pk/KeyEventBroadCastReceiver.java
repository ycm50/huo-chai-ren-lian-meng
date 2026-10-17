package com.DBGame.pk;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

/* loaded from: classes.dex */
public class KeyEventBroadCastReceiver extends BroadcastReceiver {
    static final String SYSTEM_GLOBALACTIONS = "globalactions";
    static final String SYSTEM_HOME_KEY = "homekey";
    static final String SYSTEM_LOCK = "lock";
    static final String SYSTEM_REASON = "reason";
    static final String SYSTEM_RECENT_APPS = "recentapps";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        if (action.equals("android.intent.action.CLOSE_SYSTEM_DIALOGS")) {
            String reason = intent.getStringExtra(SYSTEM_REASON);
            System.out.println("reason：" + reason);
            if (reason != null) {
                if (reason.equals(SYSTEM_HOME_KEY) || reason.equals(SYSTEM_RECENT_APPS) || reason.equals(SYSTEM_LOCK) || reason.equals(SYSTEM_GLOBALACTIONS)) {
                    System.out.println("home key处理点");
                    MatchVSHelper.exitLobby();
                    MatchVSHelper.onDisconnect();
                }
            }
        }
    }
}

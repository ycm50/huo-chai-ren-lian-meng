package com.DBGame.pk;

import android.annotation.SuppressLint;
import android.content.IntentFilter;
import android.os.Handler;
import android.util.Log;
import android.widget.Toast;
import com.DBGame.DiabloLOL.DiabloLOL;
import com.example.bluetoothdemo.common.Bluetooth;

/* loaded from: classes.dex */
public class MatchVSHelper {
    public static boolean isPlaying;
    public static boolean mIsInLobby;
    private static KeyEventBroadCastReceiver receiver;
    private static DiabloLOL sContext;

    public static native void loginFail();

    public static native void loginSuccess();

    public static native void onDisconnect();

    public static native void onEnterLobby();

    public static native void onExitLobby();

    public static native void onFriendDisconnect();

    public static native void onGameReady();

    public static native void onGameStart(boolean z);

    public static native void receiveData(String str);

    public static native void setInfo(String str);

    public static void init(Handler handler, DiabloLOL context) {
        sContext = context;
        receiver = new KeyEventBroadCastReceiver();
        context.registerReceiver(receiver, new IntentFilter("android.intent.action.CLOSE_SYSTEM_DIALOGS"));
    }

    public static void testLogin(String str) {
        Log.d("", "testLogin：" + str);
    }

    public static void test() {
        Log.d("tets", "test");
    }

    public static void enterLobby() {
        Log.d("jni", "enterLobby");
    }

    public static void exitLobby() {
        Log.d("jni", "exitLobby");
        MatchVSManager.Ins().exitLobby();
    }

    public static void enterRoom() {
        Log.d("jni", "enterRoom");
        Bluetooth.getInstance().close();
        MatchVSManager.Ins().initLobbyRpc();
    }

    public static void onEnterRoom() {
    }

    public static void changeRoom() {
    }

    public static void exitRoom() {
        MatchVSManager.Ins().exitLobby();
    }

    public static void gameReady() {
    }

    public static void gameStart() {
    }

    public static void sendData(String str) {
        MatchVSManager.Ins().sendData(str);
    }

    public static void login() {
    }

    public static void gameFail() {
        MatchVSManager.Ins().reportResult(false);
    }

    public static void gameWin() {
        MatchVSManager.Ins().reportResult(true);
    }

    @SuppressLint({"ShowToast"})
    public static void toastMsg(String str) {
        Toast.makeText(sContext, str, 0);
    }

    public static void destory() {
        if (sContext != null && receiver != null) {
            sContext.unregisterReceiver(receiver);
        }
    }
}

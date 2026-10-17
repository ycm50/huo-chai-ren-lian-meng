package com.DBGame.pk;

import android.util.Log;
import com.moca.rpc.nano.KeyValuePair;
import com.moca.rpc.nano.RPC;
import com.moca.rpc.nano.RPCEventListener;
import java.io.InputStream;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public class RoomListener implements RPCEventListener {
    @Override // com.moca.rpc.nano.RPCEventListener
    public void onConnected(RPC arg0) {
        Log.e("RoomListener socket", "connect");
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onDisconnected(RPC arg0) {
        MatchVSManager.Ins().exitRoom();
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onError(RPC arg0, Throwable arg1) {
        MatchVSManager.Ins().exitRoom();
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onEstablished(RPC arg0) {
        Log.e("RoomListener socket", "onEstablished");
        MatchVSManager.Ins().gameReady();
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onPayload(RPC arg0, long arg1, InputStream arg2, boolean arg3) {
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onRequest(RPC arg0, long arg1, int arg2, KeyValuePair[] arg3, int arg4) {
        handleMsg(arg3);
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onResponse(RPC arg0, long arg1, int arg2, KeyValuePair[] arg3, int arg4) {
        handleMsg(arg3);
    }

    private void handleMsg(KeyValuePair[] arg3) {
        String msgCode = arg3[0].getKey();
        String data = arg3[0].getValue();
        Log.e("RoomListener msgCode", msgCode);
        Log.e("RoomListener data", data);
        try {
            JSONObject jsonObj = new JSONObject(data);
            if (msgCode.equals(PK_MSG_Code.GAME_START_REPLAY)) {
                MatchVSManager.Ins().gameStart(jsonObj);
            } else if (msgCode.equals(PK_MSG_Code.FIGHT)) {
                MatchVSManager.Ins().receiveData(data);
            } else if (msgCode.equals(PK_MSG_Code.GAME_END)) {
                MatchVSManager.Ins().gameEnd(data);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}

package com.DBGame.pk;

import android.util.Log;
import com.moca.rpc.nano.KeyValuePair;
import com.moca.rpc.nano.RPC;
import com.moca.rpc.nano.RPCEventListener;
import java.io.InputStream;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public class LobbyListener implements RPCEventListener {
    @Override // com.moca.rpc.nano.RPCEventListener
    public void onConnected(RPC arg0) {
        Log.e("socket", "connect");
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onDisconnected(RPC arg0) {
        Log.e("socket", "onDisconnected");
        MatchVSManager.Ins().exitLobby();
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onError(RPC arg0, Throwable arg1) {
        Log.e("socket", "onError");
        MatchVSManager.Ins().exitLobby();
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onEstablished(RPC arg0) {
        try {
            MatchVSManager.Ins().join();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onPayload(RPC arg0, long arg1, InputStream arg2, boolean arg3) {
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onRequest(RPC arg0, long arg1, int arg2, KeyValuePair[] arg3, int arg4) {
        Log.e("socket", "onRequest");
        try {
            handelMsg(arg3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.moca.rpc.nano.RPCEventListener
    public void onResponse(RPC arg0, long arg1, int arg2, KeyValuePair[] arg3, int arg4) {
        try {
            handelMsg(arg3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void handelMsg(KeyValuePair[] arg3) {
        String msgCode = arg3[0].getKey();
        Log.e("msgCode", msgCode);
        try {
            JSONObject jsonObj = new JSONObject(arg3[0].getValue());
            System.out.println(msgCode);
            System.out.println(arg3[0].getValue());
            if (msgCode.equals(PK_MSG_Code.JOIN_REPLAY)) {
                joinReplay(jsonObj);
            } else if (msgCode.equals(PK_MSG_Code.MATCHED_REPLAY)) {
                MatchVSManager.Ins().matched(jsonObj);
            } else if (msgCode.equals(PK_MSG_Code.NOT_START)) {
                MatchVSManager.Ins().toastError(jsonObj);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void joinReplay(JSONObject jsonObj) throws JSONException {
        if (jsonObj.getInt("status") == 1) {
            MatchVSHelper.setInfo("队列中，等待匹配");
        } else {
            MatchVSHelper.setInfo("加入队列失败，请重试");
        }
    }
}

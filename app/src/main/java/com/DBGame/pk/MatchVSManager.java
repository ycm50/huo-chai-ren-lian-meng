package com.DBGame.pk;

import com.DBGame.Common.BLHelper;
import com.alipay.sdk.packet.d;
import com.moca.rpc.nano.RPC;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public class MatchVSManager {
    private static String MATCHING_URL = "119.29.74.64:8080";
    private static String ROOM_URL = "119.29.78.169:8081";
    private static MatchVSManager instance;
    public static volatile boolean isLobbyRunning;
    public static volatile boolean isRoomRunning;
    private RPC lobbyRpc;
    private Thread lobbyT;
    public String roomId;
    public String roomOwnerid;
    private RPC roomRpc;
    private Thread roomT;
    public String userId;
    private ArrayList<String> sendDataList = new ArrayList<>();
    private ArrayList<String> receiveDataList = new ArrayList<>();

    public static MatchVSManager Ins() {
        if (instance == null) {
            instance = new MatchVSManager();
        }
        return instance;
    }

    public void initLobbyRpc() {
        if (isLobbyRunning || isRoomRunning) {
            MatchVSHelper.setInfo("正在加入游戏，请稍等");
            return;
        }
        isLobbyRunning = true;
        this.lobbyT = new Thread() { // from class: com.DBGame.pk.MatchVSManager.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                try {
                    MatchVSManager.this.lobbyRpc = RPC.builder().connect(MatchVSManager.MATCHING_URL).listener(new LobbyListener()).build();
                } catch (UnknownHostException e) {
                    e.printStackTrace();
                }
                while (MatchVSManager.isLobbyRunning) {
                    try {
                        MatchVSManager.this.lobbyRpc.loop();
                    } catch (Exception ex) {
                        ex.printStackTrace();
                    }
                }
                synchronized (MatchVSManager.this) {
                    MatchVSManager.this.lobbyRpc.close();
                    MatchVSManager.this.lobbyRpc = null;
                }
            }
        };
        this.lobbyT.setName("lobby");
        this.lobbyT.start();
    }

    public synchronized void initRoomRpc() {
        if (!isRoomRunning) {
            isRoomRunning = true;
            this.roomT = new Thread() { // from class: com.DBGame.pk.MatchVSManager.2
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    try {
                        MatchVSManager.this.roomRpc = RPC.builder().connect(MatchVSManager.ROOM_URL).listener(new RoomListener()).build();
                    } catch (UnknownHostException e) {
                        e.printStackTrace();
                    }
                    while (MatchVSManager.isRoomRunning) {
                        try {
                            MatchVSManager.this.roomRpc.loop();
                            if (!MatchVSManager.this.sendDataList.isEmpty()) {
                                String data = (String) MatchVSManager.this.sendDataList.remove(0);
                                Map<String, String> map = new HashMap<>();
                                map.put("uid", BLHelper.getDeviceID());
                                map.put("msgCode", PK_MSG_Code.FIGHT);
                                map.put(d.k, data);
                                MatchVSManager.this.roomRpc.request(0, map);
                            }
                            if (!MatchVSManager.this.receiveDataList.isEmpty()) {
                                MatchVSHelper.receiveData((String) MatchVSManager.this.receiveDataList.remove(0));
                            }
                        } catch (Exception ex) {
                            ex.printStackTrace();
                        }
                    }
                    synchronized (MatchVSManager.this) {
                        MatchVSManager.this.roomRpc.close();
                        MatchVSManager.this.roomRpc = null;
                        MatchVSManager.this.sendDataList.clear();
                        MatchVSManager.this.receiveDataList.clear();
                    }
                }
            };
            this.roomT.setName("room");
            this.roomT.start();
        }
    }

    public synchronized void join() {
        if (this.lobbyRpc != null) {
            Map<String, String> map = new HashMap<>();
            map.put("uid", BLHelper.getDeviceID());
            map.put("msgCode", PK_MSG_Code.JOIN);
            this.lobbyRpc.request(0, map);
        }
    }

    public synchronized void matched(JSONObject jsonObj) {
        exitLobby();
        try {
            ROOM_URL = jsonObj.getString("roomUrl");
        } catch (JSONException e) {
            e.printStackTrace();
        }
        initRoomRpc();
    }

    public synchronized void gameReady() {
        if (isRoomRunning && this.roomRpc != null) {
            Map<String, String> map = new HashMap<>();
            map.put("uid", BLHelper.getDeviceID());
            map.put("msgCode", PK_MSG_Code.GAME_READY);
            this.roomRpc.request(0, map);
        }
        MatchVSHelper.onGameReady();
    }

    public void gameStart(JSONObject jsonObj) throws JSONException {
        String isRoomOwner = jsonObj.getString("isRoomOwner");
        MatchVSHelper.onGameStart(isRoomOwner.equals("1"));
    }

    public synchronized void reportResult(boolean b2) {
        if (isRoomRunning && this.roomRpc != null) {
            Map<String, String> map = new HashMap<>();
            map.put("uid", BLHelper.getDeviceID());
            map.put("msgCode", PK_MSG_Code.GAME_RESULT);
            String isWin = b2 ? "1" : "0";
            map.put("isWin", isWin);
            this.roomRpc.request(0, map);
        }
    }

    public synchronized void sendData(String data) {
        if (isRoomRunning && this.roomRpc != null) {
            Map<String, String> map = new HashMap<>();
            map.put("uid", BLHelper.getDeviceID());
            map.put("msgCode", PK_MSG_Code.FIGHT);
            map.put(d.k, data);
            this.roomRpc.request(0, map);
        }
    }

    public synchronized void exitLobby() {
        isLobbyRunning = false;
        if (this.lobbyRpc != null) {
            this.lobbyRpc.breakLoop();
        }
        exitRoom();
    }

    public synchronized void exitRoom() {
        isRoomRunning = false;
        if (this.roomRpc != null) {
            this.roomRpc.breakLoop();
        }
    }

    public void receiveData(String data) {
        MatchVSHelper.receiveData(data);
    }

    public void toastError(JSONObject jsonObj) {
        try {
            try {
                String str = URLDecoder.decode(jsonObj.getString("info"), "UTF-8");
                System.out.println(str);
                MatchVSHelper.setInfo(str);
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        exitLobby();
    }

    public void gameEnd(String data) {
        System.out.print("gameEndgameEndgameEndgameEnd");
        MatchVSHelper.onFriendDisconnect();
        exitRoom();
    }
}

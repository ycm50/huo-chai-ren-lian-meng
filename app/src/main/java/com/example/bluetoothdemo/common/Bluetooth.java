// AUTO-GENERATED compile stub for com.example.bluetoothdemo.common.
// Signatures derived from the call sites in com.DBGame.Common.BLHelper,
// com.DBGame.DiabloLOL.DiabloLOL and com.DBGame.pk.MatchVSHelper:
//   Bluetooth.getInstance().init(this)
//   Bluetooth.getInstance().mBtAdapter.enable()
//   Bluetooth.getInstance().openServer()
//   Bluetooth.getInstance().sendMessage(str)
//   Bluetooth.getInstance().close()
//   Bluetooth.mActivity

package com.example.bluetoothdemo.common;

import android.app.Activity;
import android.bluetooth.BluetoothAdapter;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class Bluetooth {

    public static Activity mActivity;

    /// Raw adapter, enabled directly by the game's bluetooth path.
    public BluetoothAdapter mBtAdapter;

    private static Bluetooth sInstance;

    public static Bluetooth getInstance() {
        if (sInstance == null) {
            sInstance = new Bluetooth();
        }
        return sInstance;
    }

    public static void setActivity(Activity activity) {
        mActivity = activity;
    }

    /// Binds the demo to the hosting activity and grabs the adapter.
    public void init(Activity activity) {
        mActivity = activity;
    }

    /// Starts the bluetooth server socket.
    public void openServer() { }

    /// Starts the bluetooth client and connects out.
    public void openClient() { }

    /// Sends a payload to the connected peer.
    public void sendMessage(String message) { }

    /// Tears down sockets and streams.
    public void close() { }
}

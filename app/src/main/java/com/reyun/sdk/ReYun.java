// AUTO-GENERATED compile stub for the ReYun (热云) analytics SDK.
// Signatures derived from the call sites in com.DBGame.DiabloLOL.DiabloLOL.

package com.reyun.sdk;

import android.content.Context;

@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})
public class ReYun {

    public static void init(Context context, String appKey, String channelId) { }

    public static void initWithKeyAndChannelId(Context context, String appKey, String channelId) { }

    /// DiabloLOL:
    ///   ReYun.setPayment("unkown", sFromPay, "RMB", amount / 100.0f, 0.0f,
    ///                    PAY_NAME[idx], 0L, 0)
    public static void setPayment(String orderId, String paymentType, String currency,
                                  float amount, float virtualAmount, String productName,
                                  long timestamp, int level) { }

    public static void startHeartBeat(Context context) { }

    public static void exitSdk() { }

    /// DiabloLOL.onStop(): if (!ReYun.isAppOnForeground())
    public static boolean isAppOnForeground() { return true; }
}

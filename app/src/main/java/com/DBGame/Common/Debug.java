package com.DBGame.Common;

import android.util.Log;

/* loaded from: classes.dex */
public class Debug {
    public static String DEBUGTAG = "DiabloLOL";

    public static void print(String pMessage) {
        Log.e(DEBUGTAG, pMessage, null);
    }

    public static void print(boolean bPrint, String pClassName, String methodName, String pMessage) {
        if (bPrint) {
            if ("sendCanonRotationACK".equals(methodName) || "onCanonRotationACK".equals(methodName) || "sendShootREQ".equals(methodName) || "onShootACK".equals(methodName) || "sendExplodeREQ".equals(methodName) || "onExplodeACK".equals(methodName)) {
                Log.e(DEBUGTAG, "[" + pClassName + "]:    [" + methodName + "]:    " + pMessage, null);
            }
        }
    }

    public static void print(Object o, String methodName, String pMessage) {
        Log.e(DEBUGTAG, "[" + o.getClass().getName() + "]:    [" + methodName + "]:    " + pMessage, null);
    }
}

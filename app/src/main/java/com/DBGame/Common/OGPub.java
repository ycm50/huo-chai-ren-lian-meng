package com.DBGame.Common;

import android.app.AlertDialog;
import android.app.Dialog;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.CountDownTimer;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.Toast;
import com.DBGame.DiabloLOL.DiabloLOL;
import com.DBGame.DiabloLOL.R;

/* loaded from: classes.dex */
public class OGPub {
    public static final boolean DEBUG = true;
    private static OGPub instance;
    Dialog aDialog;
    public AlertDialog.Builder mBuilder;
    CountDownTimer mCountTime;

    private OGPub() {
    }

    public static OGPub Instance() {
        if (instance == null) {
            instance = new OGPub();
        }
        return instance;
    }

    public static boolean isNetworkAvailable() {
        ConnectivityManager conMan = (ConnectivityManager) DiabloLOL.instance.getSystemService("connectivity");
        NetworkInfo info = conMan.getActiveNetworkInfo();
        return info != null && info.isConnected();
    }

    /* JADX WARN: Type inference failed for: r0v10, types: [com.DBGame.Common.OGPub$1] */
    public void startLoad() {
        Instance().stopLoad();
        try {
            LayoutInflater inflater = DiabloLOL.instance.getLayoutInflater();
            View layout = inflater.inflate(R.layout.progress_dialog, (ViewGroup) DiabloLOL.instance.findViewById(R.id.progress_dialog_fl));
            this.aDialog = new Dialog(DiabloLOL.instance, R.style.MyDialog);
            this.aDialog.setCancelable(false);
            this.aDialog.setContentView(layout, new LinearLayout.LayoutParams(-1, -1));
            this.aDialog.show();
            long a1 = Math.round(60000.0d);
            this.mCountTime = new CountDownTimer(a1, a1) { // from class: com.DBGame.Common.OGPub.1
                @Override // android.os.CountDownTimer
                public void onTick(long millisUntilFinished) {
                }

                @Override // android.os.CountDownTimer
                public void onFinish() {
                    OGPub.Instance().stopLoad();
                }
            }.start();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void stopLoad() {
        try {
            if (this.aDialog != null && this.aDialog.isShowing()) {
                this.aDialog.cancel();
            }
            if (this.mCountTime != null) {
                this.aDialog.cancel();
                this.aDialog = null;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void closeLoad() {
        if (this.mBuilder == null) {
            Toast toast = Toast.makeText(DiabloLOL.instance, "网络不可用", 1);
            toast.show();
        }
    }
}

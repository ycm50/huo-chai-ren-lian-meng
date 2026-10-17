package com.DBGame.DiabloLOL;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.widget.TextView;
import com.DBGame.Common.BLHelper;

/* loaded from: classes.dex */
public class SplashActivity extends Activity {
    private TextView textPublished;
    private TextView textVersion;
    private final String published = "ISBN978-7-7979-0055-3";
    Handler handler = new Handler();

    @Override // android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.splash);
        this.textVersion = (TextView) findViewById(R.id.tipVerion);
        this.textPublished = (TextView) findViewById(R.id.tipPpublished);
        this.textPublished.setText("ISBN978-7-7979-0055-3");
        StringBuffer buf1 = new StringBuffer(getUMEchannel());
        buf1.append(" ");
        buf1.append(getVersion());
        this.textVersion.setText(buf1);
        LOLConstant.sCMCC_OPEN = BLHelper.getOpenCTCC("cmcc", this, false);
        turnToLoL();
    }

    private void turnToLoL() {
        Runnable runnable = new Runnable() { // from class: com.DBGame.DiabloLOL.SplashActivity.1
            @Override // java.lang.Runnable
            public void run() {
                Intent intent = new Intent();
                intent.setClass(SplashActivity.this, DiabloLOL.class);
                SplashActivity.this.startActivity(intent);
                SplashActivity.this.finish();
            }
        };
        this.handler.postDelayed(runnable, 2000L);
    }

    private void turnToLoading() {
        Runnable runnable = new Runnable() { // from class: com.DBGame.DiabloLOL.SplashActivity.2
            @Override // java.lang.Runnable
            public void run() {
                Intent intent = new Intent();
                intent.setClass(SplashActivity.this, LoadingActivity.class);
                SplashActivity.this.startActivity(intent);
                SplashActivity.this.finish();
            }
        };
        this.handler.postDelayed(runnable, 2000L);
    }

    public String getVersion() {
        String versionName = "";
        try {
            PackageManager pm = getPackageManager();
            PackageInfo pi = pm.getPackageInfo(getPackageName(), 0);
            versionName = pi.versionName;
            if (versionName == null) {
                return "1.0";
            }
        } catch (Exception e) {
            Log.e("VersionInfo", "Exception", e);
        }
        return versionName;
    }

    public String getUMEchannel() {
        try {
            System.out.println("call AppKey");
            Bundle bundle = getPackageManager().getApplicationInfo(getPackageName(), 128).metaData;
            return bundle.getString("UMENG_CHANNEL");
        } catch (PackageManager.NameNotFoundException e1) {
            e1.printStackTrace();
            return null;
        }
    }
}

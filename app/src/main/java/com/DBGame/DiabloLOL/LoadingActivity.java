package com.DBGame.DiabloLOL;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.view.KeyEvent;
import android.view.View;
import android.widget.ImageView;
import com.qihoopp.qcoinpay.d;

/* loaded from: classes.dex */
public class LoadingActivity extends Activity {
    public static final int LOAD_COMPLETED = 2002;
    public static final int LOAD_PROGRASS = 2001;
    boolean bSign360 = false;
    Handler handler = new Handler();

    @Override // android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.layout_login);
        ImageView btn_login = (ImageView) findViewById(R.id.btn_sign);
        btn_login.setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.LoadingActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View v) {
                LoadingActivity.this.bSign360 = true;
                Intent intent = new Intent();
                intent.putExtra(d.e, LoadingActivity.this.bSign360);
                intent.setClass(LoadingActivity.this, DiabloLOL.class);
                LoadingActivity.this.startActivity(intent);
                LoadingActivity.this.finish();
            }
        });
        ImageView btn_noSign = (ImageView) findViewById(R.id.btn_nosign);
        btn_noSign.setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.LoadingActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View v) {
                LoadingActivity.this.bSign360 = false;
                Intent intent = new Intent();
                intent.putExtra(d.e, LoadingActivity.this.bSign360);
                intent.setClass(LoadingActivity.this, DiabloLOL.class);
                LoadingActivity.this.startActivity(intent);
                LoadingActivity.this.finish();
            }
        });
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (keyCode == 4) {
            Intent intent = new Intent();
            intent.putExtra(d.e, this.bSign360);
            intent.setClass(this, DiabloLOL.class);
            startActivity(intent);
            finish();
        }
        return super.onKeyDown(keyCode, event);
    }
}

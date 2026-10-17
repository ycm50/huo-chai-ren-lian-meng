package com.bz.simplesdk.realname;

import android.app.Activity;
import android.os.Bundle;
import com.bz.simplesdk.commonlibrary.ActivityUtil;
import com.game.realname.sdk.RealNameSDKManager;
import com.game.realname.sdk.util.OnInitListener;

/* loaded from: classes2.dex */
public class RealNameActivity extends Activity {
    private final String TAG = RealNameActivity.class.getSimpleName();
    private RealNameSDKManager sdkmanager;

    @Override // android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        startGameActivity();
    }

    /* renamed from: com.bz.simplesdk.realname.RealNameActivity$1, reason: invalid class name */
    class AnonymousClass1 implements OnInitListener {
        AnonymousClass1() {
        }

        @Override // com.game.realname.sdk.util.OnInitListener
        public void initSuccess() {
            RealNameActivity.this.startGameActivity();
        }

        @Override // com.game.realname.sdk.util.OnInitListener
        public void initError() {
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        if (this.sdkmanager != null) {
            RealNameSDKManager.onPause(this);
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (this.sdkmanager != null) {
            RealNameSDKManager.onResume(this);
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.sdkmanager != null) {
            RealNameSDKManager.onDestroy(this);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startGameActivity() {
        try {
            if (new ActivityUtil(this).startMetaActivity("realnamenextactivity")) {
                finish();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

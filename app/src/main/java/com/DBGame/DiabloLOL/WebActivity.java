package com.DBGame.DiabloLOL;

import android.app.Activity;
import android.app.Dialog;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.alipay.sdk.packet.d;
import com.qihoo.gamecenter.sdk.protocols.ProtocolKeys;
import org.apache.http.util.EncodingUtils;

/* loaded from: classes.dex */
public class WebActivity extends Activity {
    private static final int FILECHOOSER_RESULTCODE = 1;
    private static final int MSG_DIALOG_CANCLE = 1000;
    private static final int MSG_DIALOG_DIS = 1002;
    private static final int MSG_DIALOG_SHOW = 1001;
    private Dialog dialog;
    private ValueCallback<Uri> mUploadMessage;
    private Handler splashHandle = new Handler() { // from class: com.DBGame.DiabloLOL.WebActivity.3
        @Override // android.os.Handler
        public void handleMessage(Message msg) {
            switch (msg.what) {
                case 1000:
                    if (WebActivity.this.dialog != null) {
                        WebActivity.this.dialog.cancel();
                        WebActivity.this.dialog = null;
                        break;
                    }
                    break;
                case 1001:
                    if (WebActivity.this.dialog == null) {
                        WebActivity.this.displayLoadingDlg();
                        break;
                    }
                    break;
                case 1002:
                    WebActivity.this.web.stopLoading();
                    WebActivity.this.finish();
                    break;
            }
        }
    };
    private WebView web;

    @Override // android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent intent) {
        if (requestCode == 1 && this.mUploadMessage != null) {
            Uri result = (intent == null || resultCode != -1) ? null : intent.getData();
            this.mUploadMessage.onReceiveValue(result);
            this.mUploadMessage = null;
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.myweb);
        Bundle extras = getIntent().getExtras();
        String sUrl = extras.getString(ProtocolKeys.URL);
        String postData = extras.getString(d.k);
        this.web = (WebView) findViewById(R.id.webview);
        this.web.getSettings().setJavaScriptEnabled(true);
        this.web.clearCache(true);
        this.web.getSettings().setSupportZoom(true);
        this.web.postUrl(sUrl, EncodingUtils.getBytes(postData, "BASE64"));
        this.web.setWebChromeClient(new WebChromeClient() { // from class: com.DBGame.DiabloLOL.WebActivity.1
            public void openFileChooser(ValueCallback<Uri> uploadMsg, String acceptType, String capture) {
                WebActivity.this.mUploadMessage = uploadMsg;
                Intent i = new Intent("android.intent.action.GET_CONTENT");
                i.addCategory("android.intent.category.OPENABLE");
                i.setType("image/*");
                WebActivity.this.startActivityForResult(Intent.createChooser(i, "File Chooser"), 1);
            }
        });
        this.web.setWebViewClient(new WebViewClient() { // from class: com.DBGame.DiabloLOL.WebActivity.2
            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView view, String url) {
                if (url.contains("http://easymobi_xiaosan/")) {
                    WebActivity.this.splashHandle.sendEmptyMessage(1002);
                    return false;
                }
                if (url.contains("http://easymobi_close/")) {
                    WebActivity.this.splashHandle.sendEmptyMessage(1002);
                    return false;
                }
                return super.shouldOverrideUrlLoading(view, url);
            }

            @Override // android.webkit.WebViewClient
            public void onReceivedError(WebView view, int errorCode, String description, String failingUrl) {
                view.getSettings().setDefaultTextEncodingName("UTF-8");
                view.loadDataWithBaseURL(null, "断网提示:\n请链接网络或更换更好的网络环境~~<a href='http://easymobi_xiaosan/'>返回</a>", "text/html", "UTF-8", null);
            }

            @Override // android.webkit.WebViewClient
            public void onPageStarted(WebView view, String url, Bitmap favicon) {
                super.onPageStarted(view, url, favicon);
                WebActivity.this.splashHandle.sendEmptyMessage(1001);
            }

            @Override // android.webkit.WebViewClient
            public void onLoadResource(WebView view, String url) {
            }

            @Override // android.webkit.WebViewClient
            public void onPageFinished(WebView webview, String url) {
                WebActivity.this.splashHandle.sendEmptyMessage(1000);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void displayLoadingDlg() {
        try {
            LayoutInflater inflater = LayoutInflater.from(this);
            View v = inflater.inflate(R.layout.loading_dialog, (ViewGroup) null);
            LinearLayout layout = (LinearLayout) v.findViewById(R.id.dialog_view);
            ImageView spaceshipImage = (ImageView) v.findViewById(R.id.img);
            TextView tipTextView = (TextView) v.findViewById(R.id.tipTextView);
            Animation hyperspaceJumpAnimation = AnimationUtils.loadAnimation(this, R.anim.loading_animation);
            spaceshipImage.startAnimation(hyperspaceJumpAnimation);
            tipTextView.setText("Please wait while loading...");
            this.dialog = new Dialog(this, R.style.loading_dialog);
            this.dialog.setContentView(layout, new LinearLayout.LayoutParams(-1, -1));
            this.dialog.setCancelable(true);
            this.dialog.show();
        } catch (Exception e) {
            this.dialog = null;
            finish();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        return super.onKeyDown(keyCode, event);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
    }
}

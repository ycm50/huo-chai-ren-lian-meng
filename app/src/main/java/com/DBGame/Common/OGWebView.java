package com.DBGame.Common;

import android.annotation.SuppressLint;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Message;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.ViewGroup;
import android.view.inputmethod.InputMethodManager;
import android.webkit.GeolocationPermissions;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.Toast;
import com.DBGame.DiabloLOL.DiabloLOL;
import com.DBGame.DiabloLOL.R;
import com.alipay.sdk.cons.MiniDefine;
import java.util.Timer;
import java.util.TimerTask;

@SuppressLint({"SetJavaScriptEnabled"})
/* loaded from: classes.dex */
public class OGWebView extends WebViewClient {
    public static final int WEBFILECHOOSER_RESULTCODE = 1;
    private Context mContext;
    private int mHeight;
    private FrameLayout mLayout;
    public String mName;
    private ViewGroup mParent;
    public ValueCallback<Uri> mUploadMessage;
    private WebView mWebView;
    private int mWidth;
    private String statlcurl;
    private Timer timer;
    private long timeout = 10000;
    private ProgressDialog mProgress = null;

    private native void OnshouldOverrideUrlLoading(String str);

    public static native boolean onRequestURL(String str);

    private native void quitWeb();

    public OGWebView(Context contex) {
        this.mContext = contex;
    }

    public void initView(ViewGroup parent, int x, int y, int width, int height, int visible, String url, String name) {
        this.mWidth = width;
        this.mHeight = height;
        Context contex = this.mContext;
        this.mLayout = new FrameLayout(contex);
        this.mLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        this.mParent = parent;
        this.mParent.addView(this.mLayout);
        FrameLayout.LayoutParams params = new FrameLayout.LayoutParams(-1, -1);
        DisplayMetrics metric = new DisplayMetrics();
        DiabloLOL.instance.getWindowManager().getDefaultDisplay().getMetrics(metric);
        float density = metric.density;
        Debug.print(this, "onCreate", "density " + density);
        float new_width = this.mContext.getResources().getDimension(R.dimen.web_width);
        float new_height = this.mContext.getResources().getDimension(R.dimen.web_height);
        this.mName = name;
        if (name.equals("campaign_question")) {
            new_width = this.mContext.getResources().getDimension(R.dimen.web_width1);
            new_height = this.mContext.getResources().getDimension(R.dimen.web_height1);
        }
        if (density == 3.0f) {
            params.width = (((int) new_width) * 9) / 8;
            params.height = (((int) new_height) * 9) / 8;
        } else if (density == 2.5f) {
            params.width = (((int) new_width) * 4) / 3;
            params.height = (((int) new_height) * 4) / 3;
        } else {
            params.width = (int) new_width;
            params.height = (int) new_height;
        }
        params.gravity = 17;
        this.statlcurl = url;
        Debug.print(this, "webview", MiniDefine.K + width + MiniDefine.B + height + "x" + x + "y" + y);
        this.mWebView = new WebView(contex);
        this.mWebView.setLayoutParams(params);
        this.mWebView.setBackgroundColor(0);
        this.mWebView.getSettings().setCacheMode(2);
        this.mWebView.getSettings().setJavaScriptEnabled(true);
        this.mWebView.addJavascriptInterface(this, "JSBridge");
        this.mWebView.getSettings().setJavaScriptEnabled(true);
        this.mWebView.setWebViewClient(this);
        this.mWebView.setFocusable(true);
        OGWebChromeClient chromeCLient = new OGWebChromeClient();
        this.mWebView.setWebChromeClient(chromeCLient);
        this.mWebView.setWebChromeClient(new WebChromeClient() { // from class: com.DBGame.Common.OGWebView.1
            public void openFileChooser(ValueCallback<Uri> uploadMsg, String acceptType, String capture) {
                Debug.print(this, "webviewlihy", "openFileChooser");
                OGWebView.this.mUploadMessage = uploadMsg;
                OGWebView.this.setwebresultcode();
            }

            @Override // android.webkit.WebChromeClient
            public void onGeolocationPermissionsHidePrompt() {
                super.onGeolocationPermissionsHidePrompt();
            }

            @Override // android.webkit.WebChromeClient
            public void onGeolocationPermissionsShowPrompt(String origin, GeolocationPermissions.Callback callback) {
                callback.invoke(origin, true, true);
                super.onGeolocationPermissionsShowPrompt(origin, callback);
            }
        });
        if (OGPub.isNetworkAvailable()) {
            this.mWebView.loadUrl(url);
        } else {
            Toast toast = Toast.makeText(DiabloLOL.instance, "网络不可用", 1);
            toast.show();
        }
        this.mLayout.addView(this.mWebView);
    }

    private Object getWindowManager() {
        return null;
    }

    public void closeView() {
        if (this.mLayout != null && this.mWebView != null) {
            this.mLayout.removeView(this.mWebView);
            this.mParent.removeView(this.mLayout);
        }
        if (this.mWebView != null) {
            this.mWebView.clearCache(true);
        }
        this.mWebView = null;
        this.mLayout = null;
    }

    public void reloadView() {
        if (this.mWebView != null) {
            this.mWebView.reload();
        }
    }

    public int getViewWidth() {
        return this.mWidth;
    }

    public int getViewHeight() {
        return this.mHeight;
    }

    public void reLoadUrl() {
        this.mWebView.loadUrl(this.statlcurl);
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView view, String url) {
        try {
            Debug.print(this, "webviewlihy shouldOverrideUrlLoading ", "shouldOverrideUrlLoading" + url);
            Log.e("qweqwe", "123123");
            InputMethodManager imm = (InputMethodManager) DiabloLOL.instance.getSystemService("input_method");
            boolean isOpen = imm.isActive();
            if (isOpen) {
                InputMethodManager inputMethodManager = (InputMethodManager) DiabloLOL.instance.getSystemService("input_method");
                inputMethodManager.hideSoftInputFromWindow(DiabloLOL.instance.getCurrentFocus().getWindowToken(), 2);
            }
            this.mWebView.loadUrl(url);
            OnshouldOverrideUrlLoading(url);
            return true;
        } catch (Exception e) {
            return true;
        }
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView view, int errorCode, String description, String failingUrl) {
        super.onReceivedError(view, errorCode, description, failingUrl);
        this.mWebView.stopLoading();
        ReLoadUrl();
        OGPub.Instance().stopLoad();
        stopTimer();
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView view, String url) {
        super.onPageFinished(view, url);
        stopTimer();
        OGPub.Instance().stopLoad();
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView view, String url, Bitmap favicon) {
        super.onPageStarted(view, url, favicon);
        startTimer();
        OGPub.Instance().startLoad();
    }

    private void startTimer() {
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.OGWebView.2
            @Override // java.lang.Runnable
            public void run() {
                OGWebView.this.timer = new Timer();
                TimerTask tt = new TimerTask() { // from class: com.DBGame.Common.OGWebView.2.1
                    @Override // java.util.TimerTask, java.lang.Runnable
                    public void run() {
                        if (OGWebView.this.mWebView != null && OGWebView.this.mWebView.getProgress() < 50) {
                            Debug.print(this, "webviewlihy getProgress", "50");
                            OGPub.Instance().stopLoad();
                            OGWebView.this.timer.cancel();
                            OGWebView.this.timer.purge();
                            OGWebView.this.mWebView.stopLoading();
                            OGWebView.this.ReLoadUrl();
                        }
                    }
                };
                OGWebView.this.timer.schedule(tt, OGWebView.this.timeout, 1L);
            }
        });
    }

    private void stopTimer() {
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.OGWebView.3
            @Override // java.lang.Runnable
            public void run() {
                OGWebView.this.timer.cancel();
                OGWebView.this.timer.purge();
            }
        });
    }

    public boolean isCanGoBackWeb() {
        return this.mWebView != null && this.mWebView.canGoBack();
    }

    public boolean onBackbuttonClick() {
        if (!isCanGoBackWeb()) {
            return false;
        }
        this.mWebView.goBack();
        return true;
    }

    public void quitwebview() {
        quitWeb();
    }

    public void onKeyDown() {
        if (DiabloLOL.instance.mWebView != null) {
            OGPub.Instance().stopLoad();
            DiabloLOL.instance.mWebView.quitwebview();
        }
    }

    public void ReLoadUrl() {
        Message msg = new Message();
        DiabloLOL diabloLOL = DiabloLOL.instance;
        msg.what = 102;
        DiabloLOL.instance.sendMessage(msg);
    }

    public void setwebresultcode() {
        Intent i = new Intent("android.intent.action.GET_CONTENT");
        i.addCategory("android.intent.category.OPENABLE");
        i.setType("image/*");
        DiabloLOL.instance.startActivityForResult(Intent.createChooser(i, "File Chooser"), 1);
    }

    public static void initWebViewParam(final float width, final float height, final float x, final float y, final int visible, final byte[] url, final byte[] webname) {
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.OGWebView.4
            @Override // java.lang.Runnable
            public void run() {
                Log.e("DiabloLOL.instance", "initView", null);
                int mWidth = (int) width;
                int mHeight = (int) height;
                int mX = (int) x;
                int mY = (int) y;
                String mUrl = null;
                String mWebName = null;
                try {
                    String mUrl2 = new String(url, "UTF-8");
                    try {
                        mWebName = new String(webname, "UTF-8");
                        mUrl = mUrl2;
                    } catch (Exception e) {
                        mUrl = mUrl2;
                    }
                } catch (Exception e2) {
                }
                if (DiabloLOL.instance.mWebView != null) {
                    DiabloLOL.instance.mWebView.closeView();
                    DiabloLOL.instance.mWebView = null;
                }
                DiabloLOL.instance.mWebView = new OGWebView(DiabloLOL.instance);
                OGWebView oGWebView = DiabloLOL.instance.mWebView;
                DiabloLOL diabloLOL = DiabloLOL.instance;
                oGWebView.initView(DiabloLOL.mFrameLayout, mX, mY, mWidth, mHeight, visible, mUrl, mWebName);
            }
        });
    }

    public static void setWebViewVisible(int visible, final byte[] webname) {
        Debug.print("setWebViewVisible == visible ==  " + visible);
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.OGWebView.5
            @Override // java.lang.Runnable
            public void run() {
                try {
                    new String(webname, "UTF-8");
                } catch (Exception e) {
                }
            }
        });
    }

    public static void onCloseWebView(byte[] webname) {
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.OGWebView.6
            @Override // java.lang.Runnable
            public void run() {
                Debug.print("webview", "onCloseWebView", "onCloseWebView");
                if (DiabloLOL.instance.mWebView != null) {
                    DiabloLOL.instance.mWebView.closeView();
                    InputMethodManager imm = (InputMethodManager) DiabloLOL.instance.getSystemService("input_method");
                    boolean isOpen = imm.isActive();
                    if (isOpen) {
                        InputMethodManager inputMethodManager = (InputMethodManager) DiabloLOL.instance.getSystemService("input_method");
                        inputMethodManager.hideSoftInputFromWindow(DiabloLOL.instance.getCurrentFocus().getWindowToken(), 2);
                    }
                }
                DiabloLOL.instance.mWebView = null;
            }
        });
    }
}

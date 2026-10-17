package com.DBGame.Common;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.graphics.Bitmap;
import android.os.Message;
import android.util.Log;
import android.view.KeyEvent;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.widget.EditText;

/* loaded from: classes.dex */
public class OGWebChromeClient extends WebChromeClient {
    @Override // android.webkit.WebChromeClient
    public void onCloseWindow(WebView window) {
        super.onCloseWindow(window);
    }

    @Override // android.webkit.WebChromeClient
    public boolean onCreateWindow(WebView view, boolean dialog, boolean userGesture, Message resultMsg) {
        return super.onCreateWindow(view, dialog, userGesture, resultMsg);
    }

    @Override // android.webkit.WebChromeClient
    public boolean onJsAlert(WebView view, String url, String message, JsResult result) {
        AlertDialog.Builder builder = new AlertDialog.Builder(view.getContext());
        builder.setTitle("确认框").setMessage(message).setPositiveButton("确定", (DialogInterface.OnClickListener) null);
        builder.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.DBGame.Common.OGWebChromeClient.1
            @Override // android.content.DialogInterface.OnKeyListener
            public boolean onKey(DialogInterface dialog, int keyCode, KeyEvent event) {
                Log.v("onJsAlert", "keyCode==" + keyCode + "event=" + event);
                return true;
            }
        });
        builder.setCancelable(false);
        AlertDialog dialog = builder.create();
        dialog.show();
        result.confirm();
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public boolean onJsBeforeUnload(WebView view, String url, String message, JsResult result) {
        return super.onJsBeforeUnload(view, url, message, result);
    }

    @Override // android.webkit.WebChromeClient
    public boolean onJsConfirm(WebView view, String url, String message, final JsResult result) {
        AlertDialog.Builder builder = new AlertDialog.Builder(view.getContext());
        builder.setTitle("确认框").setMessage(message).setPositiveButton("确定", new DialogInterface.OnClickListener() { // from class: com.DBGame.Common.OGWebChromeClient.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                result.confirm();
            }
        }).setNeutralButton("取消", new DialogInterface.OnClickListener() { // from class: com.DBGame.Common.OGWebChromeClient.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                result.cancel();
            }
        });
        builder.setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: com.DBGame.Common.OGWebChromeClient.4
            @Override // android.content.DialogInterface.OnCancelListener
            public void onCancel(DialogInterface dialog) {
                result.cancel();
            }
        });
        builder.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.DBGame.Common.OGWebChromeClient.5
            @Override // android.content.DialogInterface.OnKeyListener
            public boolean onKey(DialogInterface dialog, int keyCode, KeyEvent event) {
                Log.e("onJsConfirm", "keyCode==" + keyCode + "event=" + event);
                return true;
            }
        });
        AlertDialog dialog = builder.create();
        dialog.show();
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public boolean onJsPrompt(WebView view, String url, String message, String defaultValue, final JsPromptResult result) {
        AlertDialog.Builder builder = new AlertDialog.Builder(view.getContext());
        builder.setTitle("提示框").setMessage(message);
        final EditText et = new EditText(view.getContext());
        et.setSingleLine();
        et.setText(defaultValue);
        builder.setView(et);
        builder.setPositiveButton("确定", new DialogInterface.OnClickListener() { // from class: com.DBGame.Common.OGWebChromeClient.7
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                result.confirm(et.getText().toString());
            }
        }).setNeutralButton("取消", new DialogInterface.OnClickListener() { // from class: com.DBGame.Common.OGWebChromeClient.6
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                result.cancel();
            }
        });
        builder.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.DBGame.Common.OGWebChromeClient.8
            @Override // android.content.DialogInterface.OnKeyListener
            public boolean onKey(DialogInterface dialog, int keyCode, KeyEvent event) {
                Log.v("onJsPrompt", "keyCode==" + keyCode + "event=" + event);
                return true;
            }
        });
        AlertDialog dialog = builder.create();
        dialog.show();
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public void onProgressChanged(WebView view, int newProgress) {
        super.onProgressChanged(view, newProgress);
    }

    @Override // android.webkit.WebChromeClient
    public void onReceivedIcon(WebView view, Bitmap icon) {
        super.onReceivedIcon(view, icon);
    }

    @Override // android.webkit.WebChromeClient
    public void onReceivedTitle(WebView view, String title) {
        super.onReceivedTitle(view, title);
    }

    @Override // android.webkit.WebChromeClient
    public void onRequestFocus(WebView view) {
        super.onRequestFocus(view);
    }
}

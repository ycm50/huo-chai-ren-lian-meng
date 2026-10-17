package com.DBGame.DiabloLOL;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Handler;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.AbsListView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import java.io.File;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public class ShareLayout extends RelativeLayout {
    public static final String FACEBOOK_PKG = "com.facebook.katana";
    public static final String TWITTER_PKG = "com.twitter.android";
    public static final String WEIBO_PKG = "com.sina.weibo";
    public static final String WEIXIN_PKG = "com.tencent.mm";
    private static String mPicPath = "";
    private LinearLayout mAnimLayout;
    private Context mContext;
    private OnShareOperListener mOnOperListener;
    private String mSpecialContent;

    public interface OnShareOperListener {
        void onClose();
    }

    public ShareLayout(Context context) {
        super(context, null);
        this.mOnOperListener = null;
        this.mSpecialContent = "";
        this.mContext = context;
        LayoutInflater.from(context).inflate(R.layout.share_layout, this);
        initView();
        startInAnim();
    }

    public static void recyleSnapshow() {
        File file = new File(mPicPath);
        if (file.exists()) {
            file.delete();
        }
    }

    public void setSpecialContent(String content) {
        this.mSpecialContent = content;
    }

    public boolean isNeedShow(View snapView) {
        boolean canShare = false;
        if (Commons.isHasPackage(this.mContext, TWITTER_PKG)) {
            canShare = true;
            ImageView twitterView = (ImageView) findViewById(R.id.btn_twitter);
            twitterView.setVisibility(0);
            twitterView.setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.ShareLayout.1
                @Override // android.view.View.OnClickListener
                public void onClick(View v) {
                    String str;
                    Context context = ShareLayout.this.mContext;
                    String string = ShareLayout.this.mContext.getString(R.string.share_title);
                    if (!TextUtils.isEmpty(ShareLayout.this.mSpecialContent)) {
                        str = ShareLayout.this.mSpecialContent;
                    } else {
                        str = ShareLayout.this.mContext.getString(R.string.main_share_content);
                    }
                    ShareLayout.invokeShareApp(context, ShareLayout.TWITTER_PKG, string, str, ShareLayout.mPicPath);
                    ShareLayout.this.closeMySelf();
                }
            });
        }
        if (Commons.isHasPackage(this.mContext, WEIBO_PKG)) {
            canShare = true;
            View weiboView = findViewById(R.id.btn_weibo);
            weiboView.setVisibility(0);
            weiboView.setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.ShareLayout.2
                @Override // android.view.View.OnClickListener
                public void onClick(View v) {
                    String str;
                    Context context = ShareLayout.this.mContext;
                    String string = ShareLayout.this.mContext.getString(R.string.share_title);
                    if (!TextUtils.isEmpty(ShareLayout.this.mSpecialContent)) {
                        str = ShareLayout.this.mSpecialContent;
                    } else {
                        str = ShareLayout.this.mContext.getString(R.string.main_share_content);
                    }
                    ShareLayout.shareAppJustForSina(context, string, str, Uri.parse("file://" + ShareLayout.mPicPath));
                    ShareLayout.this.closeMySelf();
                }
            });
        }
        if (Commons.isHasPackage(this.mContext, FACEBOOK_PKG)) {
            canShare = true;
            View facebookView = findViewById(R.id.btn_facebook);
            facebookView.setVisibility(0);
            facebookView.setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.ShareLayout.3
                @Override // android.view.View.OnClickListener
                public void onClick(View v) {
                    String str;
                    Context context = ShareLayout.this.mContext;
                    String string = ShareLayout.this.mContext.getString(R.string.share_title);
                    if (!TextUtils.isEmpty(ShareLayout.this.mSpecialContent)) {
                        str = ShareLayout.this.mSpecialContent;
                    } else {
                        str = ShareLayout.this.mContext.getString(R.string.main_share_content);
                    }
                    ShareLayout.invokeShareApp(context, ShareLayout.FACEBOOK_PKG, string, str, ShareLayout.mPicPath);
                    ShareLayout.this.closeMySelf();
                }
            });
        }
        if (canShare) {
            Handler handler = ((DiabloLOL) this.mContext).aHandler;
            handler.sendEmptyMessage(DiabloLOL.HANDLER_SAVEPIC);
            mPicPath = "/sdcard/diabloLOLshare.png";
        }
        return canShare;
    }

    private static String getSnapPath() {
        return CameraUtils.getShareSnapPath(1001);
    }

    private void startInAnim() {
        Animation in = AnimationUtils.loadAnimation(this.mContext, R.anim.share_menu_in);
        this.mAnimLayout.startAnimation(in);
    }

    public ShareLayout(Context context, AttributeSet attrs) {
        super(context, attrs);
        this.mOnOperListener = null;
        this.mSpecialContent = "";
        this.mContext = context;
        LayoutInflater.from(context).inflate(R.layout.share_layout, this);
        initView();
    }

    private void initView() {
        this.mAnimLayout = (LinearLayout) findViewById(R.id.share_content_layout);
        findViewById(R.id.tv_cancel).setOnClickListener(new View.OnClickListener() { // from class: com.DBGame.DiabloLOL.ShareLayout.4
            @Override // android.view.View.OnClickListener
            public void onClick(View v) {
                ShareLayout.this.closeMySelf();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void closeMySelf() {
        if (this.mOnOperListener != null) {
            this.mOnOperListener.onClose();
        }
    }

    public void setOnOperListener(OnShareOperListener l) {
        this.mOnOperListener = l;
    }

    public void show() {
        if (getVisibility() != 0) {
            setLayoutParams(new AbsListView.LayoutParams(-1, -2));
            setVisibility(0);
        }
    }

    public void hide() {
        if (getVisibility() != 8) {
            setLayoutParams(new AbsListView.LayoutParams(-1, 1));
            setVisibility(8);
        }
    }

    public static boolean shareAppJustForSina(Context context, String title, String content, Uri picUri) {
        if (context == null) {
            return false;
        }
        boolean success = false;
        boolean hasPicture = false;
        if (picUri != null && !TextUtils.isEmpty(picUri.toString())) {
            hasPicture = true;
        }
        try {
            PackageManager pkgManager = context.getPackageManager();
            if (pkgManager.getLaunchIntentForPackage(WEIBO_PKG) == null) {
                return false;
            }
            Intent intent = new Intent("android.intent.action.SEND");
            if (hasPicture) {
                intent.setType("image/*");
            } else {
                intent.setType("text/plain");
            }
            List<ResolveInfo> list = pkgManager.queryIntentActivities(intent, 65536);
            ResolveInfo shareInfo = null;
            Iterator<ResolveInfo> it = list.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                ResolveInfo tmpInfo = it.next();
                if (tmpInfo.activityInfo.packageName.equalsIgnoreCase(WEIBO_PKG)) {
                    shareInfo = tmpInfo;
                    break;
                }
            }
            if (shareInfo == null) {
                return false;
            }
            ComponentName componentName = new ComponentName(shareInfo.activityInfo.packageName, shareInfo.activityInfo.name);
            intent.setComponent(componentName);
            intent.putExtra("android.intent.extra.SUBJECT", title);
            intent.putExtra("android.intent.extra.TEXT", content);
            intent.addFlags(268959744);
            if (hasPicture) {
                intent.putExtra("android.intent.extra.STREAM", picUri);
            }
            Commons.startActivity(context, intent);
            success = true;
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return success;
        }
    }

    public static void shareToTimeLine(Context context, String picPath, String content) {
        File file = Commons.checkFile("/sdcard/tmpshare.png");
        if (file != null) {
            Intent intent = new Intent();
            ComponentName comp = new ComponentName("com.tencent.mm", "com.tencent.mm.ui.tools.ShareToTimeLineUI");
            intent.setComponent(comp);
            intent.setAction("android.intent.action.SEND");
            intent.setType("image/*");
            intent.addFlags(268959744);
            intent.putExtra("android.intent.extra.STREAM", Uri.fromFile(file));
            intent.putExtra("android.intent.extra.TEXT", content);
            Commons.startActivity(context, intent);
        }
    }

    public static boolean invokeShareApp(Context context, String packageName, String title, String content, String picPath) {
        if (context == null || packageName == null) {
            return false;
        }
        boolean success = false;
        boolean hasPicture = false;
        File file = Commons.checkFile(picPath);
        if (file != null) {
            hasPicture = true;
        }
        try {
            PackageManager pkgManager = context.getPackageManager();
            if (pkgManager.getLaunchIntentForPackage(packageName) == null) {
                return false;
            }
            Intent intent = new Intent("android.intent.action.SEND");
            if (hasPicture) {
                intent.setType("image/*");
            } else {
                intent.setType("text/plain");
            }
            List<ResolveInfo> list = pkgManager.queryIntentActivities(intent, 65536);
            ResolveInfo shareInfo = null;
            Iterator<ResolveInfo> it = list.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                ResolveInfo tmpInfo = it.next();
                if (tmpInfo.activityInfo.packageName.equalsIgnoreCase(packageName)) {
                    shareInfo = tmpInfo;
                    break;
                }
            }
            if (shareInfo == null) {
                return false;
            }
            ComponentName componentName = new ComponentName(shareInfo.activityInfo.packageName, shareInfo.activityInfo.name);
            intent.setComponent(componentName);
            intent.putExtra("android.intent.extra.SUBJECT", title);
            intent.putExtra("android.intent.extra.TEXT", content);
            intent.addFlags(268959744);
            if (hasPicture) {
                intent.putExtra("android.intent.extra.STREAM", Uri.parse("file://" + picPath));
            }
            Commons.startActivity(context, intent);
            success = true;
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return success;
        }
    }
}

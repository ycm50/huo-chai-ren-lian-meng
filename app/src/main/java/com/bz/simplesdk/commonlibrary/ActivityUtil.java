package com.bz.simplesdk.commonlibrary;

import android.content.Context;
import android.content.Intent;

/* loaded from: classes2.dex */
public class ActivityUtil {
    private Context context;
    private AndroidManifestUtil manifestUtil;

    public ActivityUtil(Context context) {
        this.context = null;
        this.manifestUtil = null;
        if (context == null) {
            throw new RuntimeException("context is null!!");
        }
        this.context = context;
        this.manifestUtil = new AndroidManifestUtil(context);
    }

    public boolean startMetaActivity(String metaName) {
        try {
            String className = this.manifestUtil.getMetaData(metaName);
            return startActivity(className);
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean startActivity(String className) {
        try {
            Intent intent = new Intent();
            intent.setClassName(this.context.getPackageName(), className);
            intent.setAction("android.intent.action.MAIN");
            intent.addCategory("android.intent.category.LAUNCHER");
            intent.setFlags(268435456);
            this.context.startActivity(intent);
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}

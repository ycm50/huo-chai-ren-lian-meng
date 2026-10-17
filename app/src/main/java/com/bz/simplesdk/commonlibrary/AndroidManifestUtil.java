package com.bz.simplesdk.commonlibrary;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;

/* loaded from: classes2.dex */
public class AndroidManifestUtil {
    private Context context;

    public AndroidManifestUtil(Context context) {
        this.context = null;
        if (context == null) {
            throw new RuntimeException("context is null!!");
        }
        this.context = context;
    }

    public String getMetaData(String metaName) {
        try {
            PackageManager packageManager = this.context.getPackageManager();
            Bundle bundle = packageManager.getApplicationInfo(this.context.getPackageName(), 128).metaData;
            return bundle.getString(metaName);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}

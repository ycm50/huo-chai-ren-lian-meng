package com.DBGame.DiabloLOL;

import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.os.Environment;
import android.text.TextUtils;
import android.util.Log;
import java.io.File;

/* loaded from: classes.dex */
public class Commons {
    public static boolean isHasPackage(Context c, String packageName) {
        if (c == null || packageName == null) {
            return false;
        }
        try {
            c.getPackageManager().getPackageInfo(packageName, 256);
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public static String getSdcardTmpDir(Context context) {
        String extsdcard = getExternalStorageDirectoryx(context);
        if (extsdcard != null) {
            String tmpsdcard = extsdcard + "/tmp/";
            File f = new File(tmpsdcard);
            if (!f.exists() || f.isFile()) {
                f.delete();
                f.mkdir();
            }
            if (f.exists() && f.isDirectory()) {
                return tmpsdcard;
            }
        }
        return null;
    }

    public static String getExternalStorageDirectoryx(Context context) {
        File apkCacheFile = context.getExternalFilesDir(null);
        String apkCacheDir = null;
        if (apkCacheFile != null) {
            apkCacheDir = apkCacheFile.getAbsolutePath();
        }
        if (apkCacheDir == null) {
            apkCacheDir = new File(Environment.getExternalStorageDirectory(), "").getAbsolutePath();
        }
        try {
            new File(apkCacheDir + "/").mkdirs();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        return apkCacheDir;
    }

    public static File checkDir(String path) {
        if (TextUtils.isEmpty(path)) {
            return null;
        }
        File dir = new File(path);
        if (dir.exists() && dir.isDirectory()) {
            return dir;
        }
        return null;
    }

    public static File checkDirAndCreate(String path) {
        if (TextUtils.isEmpty(path)) {
            return null;
        }
        File dir = new File(path);
        if (!dir.exists() || !dir.isDirectory()) {
            dir.delete();
            dir.mkdirs();
            return dir;
        }
        return dir;
    }

    public static boolean checkFileAndDelete(String path) {
        if (TextUtils.isEmpty(path)) {
            return false;
        }
        File file = new File(path);
        if (file.exists()) {
            file.delete();
        }
        return true;
    }

    public static File checkFile(String path) {
        if (TextUtils.isEmpty(path)) {
            Log.i("info", "checkFile==null");
            return null;
        }
        File file = new File(path);
        if (file.exists() && file.isFile()) {
            return file;
        }
        return null;
    }

    public static boolean startActivity(Context context, Intent intent) {
        try {
            context.startActivity(intent);
            return true;
        } catch (ActivityNotFoundException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        } catch (SecurityException e3) {
            return false;
        }
    }
}

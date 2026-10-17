package com.DBGame.DiabloLOL;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.util.Log;
import android.view.View;
import java.io.File;
import java.io.FileOutputStream;

/* loaded from: classes.dex */
public class CameraUtils {
    public static final int GIFTBOX_LOTTERY_SHARE_TYPE = 1002;
    public static final int JUNK_CLEAN_SHARE_TYPE = 1001;
    private static final String JUNK_SHARE_FILE_NAME = "share.png";
    private static final String LOTTERY_SHARE_FILE_NAME = "lotteryshare.png";
    private static final int QUALITY_MIDDLE = 80;
    private static final String SHARE_FILE_NAME = "tzdfshare.png";
    private static String sdcardTmpDir = "/sdcard/tmp";

    public interface CreateMethod {
        Bitmap convertBitmap(Bitmap bitmap);
    }

    private static void createSnapShot(View view, String name, CreateMethod method) {
        if (view == null) {
            Log.i("info", "createSnapShot(View==null");
            return;
        }
        Log.i("info", "createSnapShot(View==!!!null");
        view.setDrawingCacheEnabled(true);
        Bitmap cache = view.getDrawingCache();
        Log.i("info", "createSnapShot(View==!!!null-----1");
        if (cache != null) {
            Log.i("info", "createSnapShot(View==!!!null-----2");
            if (method != null) {
                Log.i("info", "createSnapShot(View==!!!null-----3");
                Bitmap temp = method.convertBitmap(cache);
                if (temp == cache) {
                    Log.i("info", "createSnapShot(View==!!!null-----4");
                    throw new IllegalArgumentException("you can't return the original bitmap directly.");
                }
                Log.i("info", "createSnapShot(View==!!!null-----5");
                savePicture(temp, name);
                temp.recycle();
                Log.i("info", "createSnapShot(View==!!!null-----6");
            } else {
                Log.i("info", "createSnapShot(View==!!!null-----7");
                savePicture(cache, name);
                Log.i("info", "createSnapShot(View==!!!null-----8");
            }
            Log.i("info", "createSnapShot(View==!!!null-----9");
        }
        view.setDrawingCacheEnabled(false);
        view.destroyDrawingCache();
    }

    public static void initSdCardTmp(Context context) {
        sdcardTmpDir = Commons.getSdcardTmpDir(context);
    }

    public static class SaveThread extends Thread {
        private Bitmap mBitmap;
        private String mName;

        public SaveThread(Bitmap bitmap, String name) {
            this.mBitmap = bitmap;
            this.mName = name;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            File dir = Commons.checkDirAndCreate(CameraUtils.sdcardTmpDir);
            if (dir == null) {
                return;
            }
            boolean delete = Commons.checkFileAndDelete(CameraUtils.sdcardTmpDir + this.mName);
            if (delete) {
                FileOutputStream fos = null;
                try {
                    fos = new FileOutputStream(CameraUtils.sdcardTmpDir + this.mName);
                    this.mBitmap.compress(Bitmap.CompressFormat.PNG, 80, fos);
                    fos.flush();
                } catch (Exception e) {
                    e.printStackTrace();
                } finally {
                    if (fos != null) {
                        try {
                            fos.close();
                        } catch (Exception e2) {
                            e2.printStackTrace();
                        }
                    }
                }
                this.mBitmap.recycle();
                this.mBitmap = null;
            }
        }
    }

    private static boolean onlySavePicture(Bitmap bitmap, String name) {
        SaveThread thread = new SaveThread(bitmap, name);
        thread.start();
        return true;
    }

    public static boolean savePicture(Bitmap bitmap, String name) {
        Log.i("info", "savePictureB--1");
        if (name == null) {
            return false;
        }
        Log.i("info", "savePictureB--2");
        long now = System.currentTimeMillis();
        boolean bRet = false;
        Bitmap newBitmap = Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight(), (Matrix) null, true);
        Log.i("info", "savePictureB--3");
        if (newBitmap != null) {
            Log.i("info", "savePictureB--4");
            bRet = onlySavePicture(newBitmap, name);
        }
        Log.i("info", "savePictureB--5");
        Log.e("bbc", "system " + (System.currentTimeMillis() - now));
        return bRet;
    }

    public static Bitmap loadPicture(String name) {
        File file;
        if (name == null) {
            return null;
        }
        File dir = Commons.checkDir(sdcardTmpDir);
        if (dir == null || (file = Commons.checkFile(sdcardTmpDir + name)) == null) {
            return null;
        }
        return BitmapFactory.decodeFile(file.getAbsolutePath());
    }

    public static Bitmap getSnapShot(View view, CreateMethod method) {
        if (view == null) {
            return null;
        }
        view.setDrawingCacheEnabled(true);
        Bitmap temp = null;
        Bitmap cache = view.getDrawingCache();
        if (cache != null) {
            if (method != null) {
                temp = method.convertBitmap(cache);
                if (temp == cache) {
                    throw new IllegalArgumentException("you can't return the original bitmap directly.");
                }
            } else {
                temp = Bitmap.createBitmap(cache);
            }
        }
        view.setDrawingCacheEnabled(false);
        view.destroyDrawingCache();
        return temp;
    }

    public static void snapShare(View view, CreateMethod method) {
        createSnapShot(view, SHARE_FILE_NAME, method);
    }

    public static Bitmap getShareSnap() {
        return loadPicture(SHARE_FILE_NAME);
    }

    public static String getShareSnapPath() {
        return sdcardTmpDir + SHARE_FILE_NAME;
    }

    public static void snapShare(View view, int shareType, CreateMethod method) {
        createSnapShot(view, getSaveFileName(shareType), method);
    }

    public static Bitmap getShareSnap(int shareType) {
        return loadPicture(getSaveFileName(shareType));
    }

    public static String getShareSnapPath(int shareType) {
        return sdcardTmpDir + getSaveFileName(shareType);
    }

    private static String getSaveFileName(int shareType) {
        return JUNK_SHARE_FILE_NAME;
    }
}

package com.DBGame.DiabloLOL;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.os.ParcelFormatException;
import android.util.Log;
import com.qihoo.safepay.keyboard.util.MD5;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.math.BigInteger;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.security.MessageDigest;
import org.apache.http.Header;
import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.ParseException;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

/* loaded from: classes.dex */
public class VersionUtil {
    public static Context sContext;
    private static Handler sHandler;
    private static Message msg = new Message();
    public static String soUrl = "/data/data/com.DBGame.DiabloLOL/app_libs/libcocos2dcpp.so";
    private static String soHttpUrl = "http://res.huo.hoolaigames.com/files/libcocos2dcpp.so";

    public static String getMd5ByFile(File file) throws FileNotFoundException {
        String value = null;
        FileInputStream in = new FileInputStream(file);
        try {
            try {
                MappedByteBuffer byteBuffer = in.getChannel().map(FileChannel.MapMode.READ_ONLY, 0L, file.length());
                MessageDigest md5 = MessageDigest.getInstance(MD5.TAG);
                md5.update(byteBuffer);
                BigInteger bi = new BigInteger(1, md5.digest());
                value = bi.toString(16);
                if (in != null) {
                    try {
                        in.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
                if (in != null) {
                    try {
                        in.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
            }
            return value;
        } catch (Throwable __jc_th) {
            if (in != null) {
                try {
                    in.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            throw __jc_th;
        }
    }

    public static void UpdateSoToLatest(Handler handler) throws ParcelFormatException, IOException {
        sHandler = handler;
        loadSo();
    }

    private static void loadSo() {
        new Thread(new Runnable() { // from class: com.DBGame.DiabloLOL.VersionUtil.1
            @Override // java.lang.Runnable
            public void run() {
                File soFile = VersionUtil.downloadHttpFileToLib(VersionUtil.sContext, VersionUtil.soHttpUrl, "libcocos2dcpp.so");
                if (soFile != null) {
                }
            }
        }).start();
    }

    public static File downloadHttpFileToLib(Context context, String url, String fileName) {
        Exception e = null;
        Throwable th = null;
        File soFile = null;
        long start = System.currentTimeMillis();
        FileOutputStream outStream = null;
        InputStream is = null;
        try {
                HttpClient client = new DefaultHttpClient();
                HttpGet get = new HttpGet(url);
                HttpResponse response = client.execute(get);
                HttpEntity entity = response.getEntity();
                File dir = context.getDir("libs", 0);
                soFile = new File(dir, fileName);
                try {
                    FileOutputStream outStream2 = new FileOutputStream(soFile);
                    try {
                        is = entity.getContent();
                        Header h = response.getFirstHeader("Content-Length");
                        int total = Integer.valueOf(h.getValue()).intValue();
                        int prograssed = 0;
                        long sendTime = System.currentTimeMillis();
                        if (is != null) {
                            byte[] buf = new byte[1024];
                            while (true) {
                                int ch = is.read(buf);
                                if (ch <= 0) {
                                    break;
                                }
                                outStream2.write(buf, 0, ch);
                                prograssed += ch;
                                if (System.currentTimeMillis() - sendTime > 500) {
                                    msg.what = LoadingActivity.LOAD_PROGRASS;
                                    msg.arg1 = prograssed;
                                    msg.arg2 = total;
                                    sHandler.sendMessage(msg);
                                    sendTime = System.currentTimeMillis();
                                }
                                Log.d(">>>httpDownloadFile:", prograssed + ":" + total);
                            }
                        }
                        outStream2.flush();
                        long end = System.currentTimeMillis();
                        Log.d(">>>httpDownloadFile cost time:", ((end - start) / 1000) + "s");
                        Log.d(">>>httpDownloadFile:", "download success");
                        msg.what = LoadingActivity.LOAD_COMPLETED;
                        msg.arg1 = prograssed;
                        msg.arg2 = total;
                        sHandler.sendMessage(msg);
                        if (outStream2 != null) {
                            try {
                                outStream2.close();
                            } catch (IOException __jc_e) {
                                __jc_e.printStackTrace();
                            }
                        }
                        if (is != null) {
                            try {
                                is.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                        }
                        outStream = outStream2;
                    } catch (IOException e3) {
                        e = e3;
                        outStream = outStream2;
                        Log.d(">>>httpDownloadFile:", "download failed" + e.toString());
                        soFile = null;
                        if (outStream != null) {
                            try {
                                outStream.close();
                            } catch (IOException e4) {
                                e4.printStackTrace();
                            }
                        }
                        if (is != null) {
                            try {
                                is.close();
                            } catch (IOException e5) {
                                e5.printStackTrace();
                            }
                        }
                        return soFile;
                    } catch (Throwable __jc_th) {
                        outStream = outStream2;
                        if (outStream != null) {
                            try {
                                outStream.close();
                            } catch (IOException e6) {
                                e6.printStackTrace();
                            }
                        }
                        if (is != null) {
                            try {
                                is.close();
                            } catch (IOException e7) {
                                e7.printStackTrace();
                            }
                        }
                        throw __jc_th;
                    }
                } catch (IOException e8) {
                    e = e8;
                } catch (Throwable th2) {
                    th = th2;
                }
        } catch (IOException e9) {
            e = e9;
        }
        return soFile;
    }

    public static boolean hasNewSo() throws ParseException, IOException {
        return false;
    }
}

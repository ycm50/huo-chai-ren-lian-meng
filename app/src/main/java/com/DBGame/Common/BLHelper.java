package com.DBGame.Common;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.util.Log;
import android.widget.Toast;
import cn.mycompany.addblackname.utils.utils;
import com.DBGame.DiabloLOL.DiabloLOL;
import com.DBGame.DiabloLOL.HttpRequest;
import com.DBGame.DiabloLOL.WebActivity;
import com.alipay.mobilesecuritysdk.constant.ConfigConstant;
import com.alipay.sdk.cons.MiniDefine;
import com.alipay.sdk.packet.d;
import com.example.bluetoothdemo.activity.DiviceListActivity;
import com.example.bluetoothdemo.common.Bluetooth;
import com.example.bluetoothdemo.common.RequestResult;
import com.qihoo.gamecenter.sdk.protocols.ProtocolKeys;
import com.qihoo.safepay.keyboard.util.MD5;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Iterator;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.params.BasicHttpParams;
import org.json.JSONException;
import org.json.JSONObject;
import u.aly.dl;
import u.aly.x;

/* loaded from: classes.dex */
public class BLHelper {
    private static final int PAY_DUANXIN_LIMIT = 3000;
    public static final int PAY_INDUANXIN = 1;
    public static final int PAY_INTHIRDWAY = 2;
    private static DiabloLOL sContext;
    public static int IPAYTAYPE = 3;
    public static String copyString = "";
    private static String[] adTags = {"pause", "fail", "buycancle", MiniDefine.X, "win"};
    private static final char[] hexDigits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    public static native void buyComplete(String str, int i);

    public static native void buyFailed();

    public static native void buySucess(int i);

    public static native void closeShieldLayer();

    public static native void connectSuccess();

    public static native void exitGame();

    public static String getDeviceID() {
        String str;
        try {
            str = ((TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE)).getDeviceId();
        } catch (Throwable th) {
            str = null;
        }
        return str != null ? str : "StickGame";
    }

    public static String getDeviceID(Context context) {
        String str;
        try {
            str = ((TelephonyManager) context.getSystemService(ProtocolKeys.PHONE)).getDeviceId();
        } catch (Throwable th) {
            str = null;
        }
        return str != null ? str : "StickGame";
    }

    private static String getICCID() {
        try {
            return safeGetSimSerial();
        } catch (Throwable th) {
            return "";
        }
    }

    public static native void onMonthlyContractPurchased(boolean z);

    public static native void receiveData(String str);

    public static String safeGetSimSerial() {
        try {
            return ((TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE)).getSimSerialNumber();
        } catch (Throwable th) {
            return "";
        }
    }

    public static native void savePicture();

    public static native void setSoundEffectStatue(boolean z);

    public static native void showShieldLayer(String str);

    public static native void toastMsg(String str);

    public static native void webout();

    public static void showShieldLayer() {
        showShieldLayer("");
    }

    public static void init(Handler handler, DiabloLOL context) {
        sContext = context;
    }

    public static String getVersion() {
        String versionName = "";
        try {
            PackageManager pm = sContext.getPackageManager();
            PackageInfo pi = pm.getPackageInfo(sContext.getPackageName(), 0);
            versionName = pi.versionName;
            if (versionName == null) {
                return "1.0";
            }
            return versionName;
        } catch (Exception e) {
            Log.e("VersionInfo", "Exception", e);
            return versionName;
        }
    }

    public static String getVersion(Context con) {
        String versionName = "";
        try {
            PackageManager pm = con.getPackageManager();
            PackageInfo pi = pm.getPackageInfo(con.getPackageName(), 0);
            versionName = pi.versionName;
            if (versionName == null) {
                return "1.0";
            }
        } catch (Exception e) {
            Log.e("VersionInfo", "Exception", e);
        }
        return versionName;
    }

    public static String ConvertStringFromUTF8ToURL(String str) {
        String sDest = URLEncoder.encode(str);
        return sDest;
    }

    public static void copyCode(String str) {
        Message msg = new Message();
        DiabloLOL diabloLOL = sContext;
        msg.what = 11;
        sContext.sendMessage(msg);
        copyString = str;
    }

    public static boolean isHaveSim() {
        TelephonyManager telManager = (TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE);
        return telManager.getSimState() != 1;
    }

    public static String getUMChannel() {
        ApplicationInfo applicationInfo;
        if (sContext == null || TextUtils.isEmpty("UMENG_CHANNEL")) {
            return null;
        }
        try {
            PackageManager packageManager = sContext.getPackageManager();
            if (packageManager == null || (applicationInfo = packageManager.getApplicationInfo(sContext.getPackageName(), 128)) == null || applicationInfo.metaData == null) {
                return null;
            }
            String resData = applicationInfo.metaData.getString("UMENG_CHANNEL");
            return resData;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getEmChannel() {
        ApplicationInfo applicationInfo;
        if (sContext == null || TextUtils.isEmpty("EMChannel")) {
            return null;
        }
        try {
            PackageManager packageManager = sContext.getPackageManager();
            if (packageManager == null || (applicationInfo = packageManager.getApplicationInfo(sContext.getPackageName(), 128)) == null || applicationInfo.metaData == null) {
                return null;
            }
            String resData = applicationInfo.metaData.getString("EMChannel");
            return resData;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getEmChannel(Context con) {
        ApplicationInfo applicationInfo;
        try {
            PackageManager packageManager = con.getPackageManager();
            if (packageManager == null || (applicationInfo = packageManager.getApplicationInfo(con.getPackageName(), 128)) == null || applicationInfo.metaData == null) {
                return null;
            }
            String resData = applicationInfo.metaData.getString("EMChannel");
            return resData;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getVersionRelease() {
        String currentapiVersion = Build.VERSION.RELEASE;
        return currentapiVersion;
    }

    public static void purchase(String str) {
        IPAYTAYPE = 3;
        sContext.order(str);
    }

    public static void purchasepay(String str, int iPayType) {
        IPAYTAYPE = iPayType;
        sContext.order(str);
    }

    public static void purchaseComplete(String strID, int iPayType) {
        buyComplete(strID, iPayType);
    }

    public static void purchaseSucess(int iPay) {
        buySucess(iPay);
    }

    public static void savePic() {
        savePicture();
    }

    public static String getMacID() {
        WifiManager wifi = (WifiManager) sContext.getSystemService(ConfigConstant.JSON_SECTION_WIFI);
        WifiInfo info = wifi.getConnectionInfo();
        String str = info.getMacAddress();
        if (str == null) {
            Log.e("获取android mac地址失败", "0000000");
        }
        Log.e("获取android mac地址 " + str, "00000000");
        return str;
    }

    public static boolean getIsCrack() {
        boolean isCrack = false;
        ActivityManager mActivityManager = (ActivityManager) sContext.getSystemService("activity");
        List<ActivityManager.RunningAppProcessInfo> appProcessList = mActivityManager.getRunningAppProcesses();
        List<String> szCrack = new ArrayList<>();
        szCrack.add("GameKiller");
        szCrack.add("GamePlayer");
        szCrack.add("GameMaster");
        szCrack.add("sbstools");
        szCrack.add("SBSTools");
        szCrack.add("iapfree");
        szCrack.add("iGameGuardian");
        for (ActivityManager.RunningAppProcessInfo appProcessInfo : appProcessList) {
            String processName = appProcessInfo.processName;
            Iterator<String> it = szCrack.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                String strCrack = it.next();
                if (strCrack == processName) {
                    isCrack = true;
                    break;
                }
            }
            if (isCrack) {
                break;
            }
        }
        return isCrack;
    }

    public static void backButtonPrompt() {
        Message msg = new Message();
        DiabloLOL diabloLOL = sContext;
        msg.what = 10;
        sContext.sendMessage(msg);
    }

    public static void reYunExit() {
        Message msg = new Message();
        DiabloLOL diabloLOL = sContext;
        msg.what = 400;
        sContext.sendMessage(msg);
    }

    public static void showInterAD(String tag) {
        Log.w("ad", "----- showInterAD --" + tag);
        int index = 0;
        int i = 0;
        while (true) {
            if (i >= adTags.length) {
                break;
            }
            if (!adTags[i].equals(tag)) {
                i++;
            } else {
                index = i;
                break;
            }
        }
        Message msg = new Message();
        msg.what = DiabloLOL.HANDLER_SHOW_INTER_AD;
        msg.arg1 = index;
        sContext.sendMessage(msg);
    }

    public static void showBanner(String tag) {
        Message msg = new Message();
        msg.what = 200;
        sContext.sendMessage(msg);
    }

    public static void hideBanner() {
        Message msg = new Message();
        msg.what = DiabloLOL.HANDLER_HIDEBANNER;
        sContext.sendMessage(msg);
    }

    public static String getAppKey() {
        try {
            System.out.println("call AppKey");
            Bundle bundle = sContext.getPackageManager().getApplicationInfo(sContext.getPackageName(), 128).metaData;
            return bundle.getString("appKey");
        } catch (PackageManager.NameNotFoundException e1) {
            e1.printStackTrace();
            return null;
        }
    }

    public static void openHuaWeiShop(String str) {
        Intent intent = new Intent(sContext, (Class<?>) WebActivity.class);
        intent.putExtra(ProtocolKeys.URL, str);
        intent.putExtra(d.k, "");
        sContext.startActivity(intent);
    }

    public static void openUrlFanKui(int iTop) {
        String uuId = getDeviceID();
        String appKey = getAppKey();
        getVersion();
        TelephonyManager tm = (TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE);
        DisplayMetrics metrics = new DisplayMetrics();
        String ch = getEmChannel();
        sContext.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        String str = metrics.widthPixels + "x" + metrics.heightPixels;
        String strSimOperator = tm.getSimOperator();
        if (strSimOperator.equals("") || strSimOperator == null) {
        }
        String responseUrl = "http://res.huo.hoolaigames.com/stickmanb/app/customer.html?uid=" + uuId + "&appkey=" + appKey + "&ch=" + ch;
        Intent intent = new Intent(sContext, (Class<?>) WebActivity.class);
        intent.putExtra(ProtocolKeys.URL, responseUrl);
        intent.putExtra(d.k, "");
        sContext.startActivity(intent);
    }

    public static void openUrlHuoJiang() {
        String uuId = getDeviceID();
        String appKey = getAppKey();
        String versionCode = getVersion();
        String emchanel = getEmChannel();
        TelephonyManager tm = (TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE);
        DisplayMetrics metrics = new DisplayMetrics();
        sContext.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        String str = metrics.widthPixels + "x" + metrics.heightPixels;
        String strSimOperator = tm.getSimOperator();
        if (strSimOperator.equals("") || strSimOperator == null) {
        }
        String responseUrl = "http://119.29.20.199:80/stickman/api/web/rewardList?did=" + uuId + "&appkey=" + appKey + "&ver=" + versionCode + "&ch=" + emchanel;
        Intent intent = new Intent(sContext, (Class<?>) WebActivity.class);
        intent.putExtra(ProtocolKeys.URL, responseUrl);
        intent.putExtra(d.k, "");
        sContext.startActivity(intent);
    }

    public static void opensumbiturl(final byte[] url) {
        DiabloLOL.instance.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.BLHelper.1
            @Override // java.lang.Runnable
            public void run() {
                String murl = null;
                try {
                    String murl2 = new String(url, "UTF-8");
                    murl = murl2;
                } catch (Exception e) {
                }
                Intent intent = new Intent();
                intent.setAction("android.intent.action.VIEW");
                Uri content_url = Uri.parse(murl);
                intent.setData(content_url);
                DiabloLOL.instance.startActivity(intent);
            }
        });
    }

    public static void onBluetoothHost() {
        Bluetooth.getInstance();
        Bluetooth.mActivity.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.BLHelper.2
            @Override // java.lang.Runnable
            public void run() {
                Bluetooth.getInstance().mBtAdapter.enable();
                Bluetooth.getInstance().openServer();
            }
        });
    }

    public static void onBluetoothClient() {
        Bluetooth.getInstance();
        Bluetooth.mActivity.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.BLHelper.3
            @Override // java.lang.Runnable
            public void run() {
                Bluetooth.getInstance().mBtAdapter.enable();
                Bluetooth.getInstance();
                Intent intent = new Intent(Bluetooth.mActivity, (Class<?>) DiviceListActivity.class);
                Bluetooth.getInstance();
                Bluetooth.mActivity.startActivityForResult(intent, RequestResult.REQUEST_MAIN);
            }
        });
    }

    public static void closeInterAD() {
    }

    public static void sendData(String str) {
        Bluetooth.getInstance().sendMessage(str);
    }

    public static void onBluetoothDisconnect() {
        Bluetooth.getInstance();
        Bluetooth.mActivity.runOnUiThread(new Runnable() { // from class: com.DBGame.Common.BLHelper.4
            @Override // java.lang.Runnable
            public void run() {
                Bluetooth.getInstance().close();
            }
        });
    }

    public static String getAPPSecretString() {
        String pkgname = sContext.getPackageName();
        try {
            PackageInfo mPackageInfo = sContext.getPackageManager().getPackageInfo(pkgname, 64);
            Signature[] signatureArr = mPackageInfo.signatures;
            byte[] arrayOfByte = mPackageInfo.signatures[0].toByteArray();
            String backString = digest(arrayOfByte);
            return backString;
        } catch (PackageManager.NameNotFoundException e1) {
            e1.printStackTrace();
            return "";
        }
    }

    public static final String digest(byte[] strTemp) {
        try {
            MessageDigest mdTemp = MessageDigest.getInstance(MD5.TAG);
            mdTemp.update(strTemp);
            byte[] md = mdTemp.digest();
            int j = md.length;
            char[] str = new char[j * 2];
            int k = 0;
            for (byte byte0 : md) {
                int k2 = k + 1;
                str[k] = hexDigits[(byte0 >>> 4) & 15];
                k = k2 + 1;
                str[k2] = hexDigits[byte0 & dl.m];
            }
            return new String(str);
        } catch (Exception e) {
            return null;
        }
    }

    public static String getMD5(String message) {
        try {
            byte[] strTemp = message.getBytes();
            MessageDigest mdTemp = MessageDigest.getInstance(MD5.TAG);
            mdTemp.update(strTemp);
            byte[] md = mdTemp.digest();
            int j = md.length;
            char[] str = new char[j * 2];
            int k = 0;
            for (byte byte0 : md) {
                int k2 = k + 1;
                str[k] = hexDigits[(byte0 >>> 4) & 15];
                k = k2 + 1;
                str[k2] = hexDigits[byte0 & dl.m];
            }
            return new String(str);
        } catch (Exception e) {
            return null;
        }
    }

    public static int CheckNetWork() {
        ConnectivityManager connectivityManager = (ConnectivityManager) sContext.getSystemService("connectivity");
        NetworkInfo info = connectivityManager.getActiveNetworkInfo();
        return (info == null || !info.isAvailable()) ? 0 : 1;
    }

    public static int GetUniCom() {
        return DiabloLOL.instance.iFromPay;
    }

    public static boolean isHaveSpecialCharacters(String chstr) {
        Pattern p = Pattern.compile("[^0-9a-zA-Z一-龥]");
        Matcher m = p.matcher(chstr);
        return !m.find();
    }

    public static void doShare() {
        Message msg = new Message();
        DiabloLOL diabloLOL = sContext;
        msg.what = DiabloLOL.HANDLER_SHOWSHARE;
        sContext.sendMessage(msg);
    }

    public static void doExchangePay() {
        Message msg = new Message();
        DiabloLOL diabloLOL = sContext;
        msg.what = 480;
        sContext.sendMessage(msg);
    }

    public static int getPayWay(int cast) {
        try {
            int payway = checkMyPayable();
            if (1 == payway && cast > 3000) {
                return 2;
            }
            return payway;
        } catch (JSONException e) {
            e.printStackTrace();
            return 1;
        }
    }

    public static int checkMyPayable() throws JSONException {
        int iRet;
        TelephonyManager tm = (TelephonyManager) sContext.getSystemService(ProtocolKeys.PHONE);
        String sOperator = tm.getSimOperator();
        if ((sOperator != null && sOperator.trim().equals("46001")) || sOperator.trim().equals("50501")) {
            iRet = 2;
        } else if (sOperator != null && sOperator.trim().equals("46003")) {
            iRet = 1;
        } else {
            iRet = 0;
        }
        if (tm.getSimState() != 5) {
            return 2;
        }
        String ICCID = safeGetSimSerial();
        String url = "http://api.huo.hoolaigames.com/stickman/api/v1/pay/getPayWay?op=" + iRet + "&id=" + ICCID + "";
        HttpGet getMethod = new HttpGet(url);
        try {
            DefaultHttpClient client = new DefaultHttpClient(new BasicHttpParams());
            HttpResponse httpResponse = client.execute(getMethod);
            int statusCode = httpResponse.getStatusLine().getStatusCode();
            if (statusCode != 200) {
                return 1;
            }
            String result = retrieveInputStream(httpResponse.getEntity());
            getMethod.abort();
            JSONObject mJsonObject = new JSONObject(result);
            return Integer.parseInt(mJsonObject.getString("payway"));
        } catch (Exception e) {
            return 1;
        } finally {
            getMethod.abort();
        }
    }

    private static String retrieveInputStream(HttpEntity entity) {
        int length = (int) entity.getContentLength();
        if (length < 0) {
            length = 10000;
        }
        StringBuffer stringBuffer = new StringBuffer(length);
        try {
            InputStreamReader inputStreamReader = new InputStreamReader(entity.getContent(), "UTF-8");
            char[] buffer = new char[length];
            while (true) {
                int count = inputStreamReader.read(buffer, 0, length - 1);
                if (count <= 0) {
                    break;
                }
                stringBuffer.append(buffer, 0, count);
            }
        } catch (UnsupportedEncodingException e) {
        } catch (IOException e2) {
        } catch (IllegalStateException e3) {
        }
        return stringBuffer.toString();
    }

    private static void getTrainState() throws JSONException {
        showShieldLayer();
        JSONObject mJsonObject = new JSONObject();
        mJsonObject.put("ip", "12.12.12.12");
        mJsonObject.put("pass", "1");
        String result = HttpRequest.sendPost("http://ria.luokuang.com:8888/rw/service/accesswan.html", "requestapp={'ip':'12.12.12.12','pass':'1'}");
        JSONObject mJsonObject1 = new JSONObject(result);
        String status = String.valueOf(mJsonObject1.getString("status"));
        closeShieldLayer();
        sContext.payTrain(status);
    }

    /*  JADX ERROR: NullPointerException in pass: BlockProcessor
        java.lang.NullPointerException: Cannot invoke "jadx.core.dex.nodes.BlockNode.getPredecessors()" because "to" is null
        	at jadx.core.dex.visitors.blocks.BlockSplitter.removeConnection(BlockSplitter.java:165)
        	at jadx.core.dex.visitors.blocks.BlockExceptionHandler.removeExcHandler(BlockExceptionHandler.java:324)
        	at jadx.core.dex.visitors.blocks.BlockExceptionHandler.lambda$prepareTryBlocks$2(BlockExceptionHandler.java:207)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1511)
        	at jadx.core.dex.visitors.blocks.BlockExceptionHandler.prepareTryBlocks(BlockExceptionHandler.java:207)
        	at jadx.core.dex.visitors.blocks.BlockExceptionHandler.process(BlockExceptionHandler.java:60)
        	at jadx.core.dex.visitors.blocks.BlockProcessor.independentBlockTreeMod(BlockProcessor.java:372)
        	at jadx.core.dex.visitors.blocks.BlockProcessor.processBlocksTree(BlockProcessor.java:56)
        	at jadx.core.dex.visitors.blocks.BlockProcessor.visit(BlockProcessor.java:49)
        */
    /**
     * Reconstructed from the shipped bytecode
     * (work/apktool_out/smali/com/DBGame/Common/BLHelper.smali, .method getOpenCTCC).
     *
     * The shipped APK returns 0 straight away: the original CMCC gift-switch
     * lookup that follows that early return is unreachable dead code, which is
     * exactly why jadx reported "Unreachable blocks removed: 39" and emitted a
     * "Method not decompiled" stub here. Behaviour is kept identical to the
     * shipped binary.
     */
    public static int getOpenCTCC(java.lang.String paramKey, android.content.Context context, boolean showShield) {
        return 0;
    }

    private static void getOrderNumber(int iPayNum) throws JSONException {
        showShieldLayer();
        long startTime = System.currentTimeMillis();
        String url = "http://api.huo.hoolaigames.com/stickman/api/v1/pay/" + getDeviceID() + "?amount=" + iPayNum + "";
        HttpGet getMethod = new HttpGet(url);
        addHeader(getMethod, sContext);
        try {
            DefaultHttpClient client = new DefaultHttpClient(new BasicHttpParams());
            HttpResponse httpResponse = client.execute(getMethod);
            int statusCode = httpResponse.getStatusLine().getStatusCode();
            if (statusCode == 200) {
                String result = retrieveInputStream(httpResponse.getEntity());
                JSONObject mJsonObject = new JSONObject(result);
                String strorderNum = String.valueOf(mJsonObject.getString("orderId"));
                sContext.payThird(strorderNum);
                long endTime = System.currentTimeMillis();
                System.out.println("网络请求时间:" + (endTime - startTime));
                closeShieldLayer();
            } else {
                Toast.makeText(sContext, "网络异常，请稍后再试", 1).show();
                sContext.resetPayIndex();
                closeShieldLayer();
            }
        } catch (Exception e) {
            sContext.resetPayIndex();
            Toast.makeText(sContext, "网络异常，请稍后再试", 1).show();
        } finally {
            getMethod.abort();
        }
    }

    public static void getStrOrderNum(int iPayNum) {
        try {
            getOrderNumber(iPayNum);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void getTrainWifi() {
        try {
            getTrainState();
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private static void addHeader(HttpGet get, Context context) {
        try {
            Calendar now = Calendar.getInstance();
            long ltime = now.getTimeInMillis();
            String sSecret = utils.getAPPSecretString(context);
            String szhengshu = String.format("%s", sSecret);
            String sVersion = String.format("%s", "1.0");
            String sMethod = String.format("%s", "SNSH");
            String seed = String.format("" + ltime, new Object[0]);
            String qianming = String.format("%s%s%s%s%s", "1.0", sSecret, String.format("" + ltime, new Object[0]), "SNSH", "HOoLaIGaMeS2015");
            String sSignature = String.format("%s", utils.getMD5(qianming));
            String sUID = utils.getDeviceID(context);
            String sPID = utils.getMacID(context);
            String sAppKey = utils.getAppKey(context);
            String channel = getEmChannel(context);
            String version = getVersion(context);
            get.addHeader("uid", sUID);
            get.addHeader("pid", sPID);
            get.addHeader("appkey", sAppKey);
            get.addHeader("X-Em-Apk-Certifiction", szhengshu);
            get.addHeader("X-Em-Api-Version", sVersion);
            get.addHeader("X-Em-Sign-Method", sMethod);
            get.addHeader("X-Em-Seed", seed);
            get.addHeader("X-Em-Signature", sSignature);
            get.addHeader(x.f5160b, channel);
            get.addHeader("version", version);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String testLogin() {
        return "fan_xue_liu_chen_niu_0123_MMH_T";
    }

    public static Object getJavaActivity() {
        return sContext;
    }

    public static void purchaseMonthlyContract(int command) {
        Message msg = new Message();
        msg.what = DiabloLOL.HANDLER_MONTHCONTRA;
        msg.arg1 = command;
        sContext.sendMessage(msg);
    }

    public static int getOpenBOL() {
        int open = 0;
        String ICCID = safeGetSimSerial();
        String url = "http://119.29.78.169/stickman/api/v1/benzhen/getBenzhenSwitch?iccid=" + ICCID;
        HttpGet getMethod = new HttpGet(url);
        addHeader(getMethod, sContext);
        try {
            DefaultHttpClient client = new DefaultHttpClient(new BasicHttpParams());
            HttpResponse httpResponse = client.execute(getMethod);
            int statusCode = httpResponse.getStatusLine().getStatusCode();
            if (statusCode == 200) {
                String result = retrieveInputStream(httpResponse.getEntity());
                Log.e("getOpenBOL", result);
                JSONObject mJsonObject = new JSONObject(result);
                if (mJsonObject.has("benzhen")) {
                    open = Integer.valueOf(mJsonObject.getInt("benzhen")).intValue();
                }
            } else {
                open = 0;
            }
        } catch (Exception e) {
            e.printStackTrace();
            open = 0;
        } finally {
            getMethod.abort();
        }
        Log.e("open ==", "" + open);
        return open;
    }
}

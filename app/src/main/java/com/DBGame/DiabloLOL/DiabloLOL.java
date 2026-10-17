package com.DBGame.DiabloLOL;

import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Message;
import android.preference.PreferenceManager;
import android.support.graphics.drawable.PathInterpolatorCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import android.view.KeyEvent;
import android.webkit.ValueCallback;
import android.widget.Toast;
import cn.cmgame.billing.api.GameInterface;
import cn.egame.terminal.paysdk.EgamePay;
import cn.egame.terminal.paysdk.EgamePayListener;
import cn.mycompany.addblackname.AddBlackName;
import cn.play.egamemanager.GameManager;
import cn.play.egamemanager.SDKInitCallback;
import com.DBGame.Common.BLHelper;
import com.DBGame.Common.OGPub;
import com.DBGame.Common.OGWebView;
import com.DBGame.pk.MatchVSHelper;
import com.alipay.sdk.cons.MiniDefine;
import com.example.bluetoothdemo.common.Bluetooth;
import com.example.bluetoothdemo.common.RequestResult;
import com.heepay.plugin.constant.a;
import com.qihoo.gamecenter.sdk.activity.ContainerActivity;
import com.qihoo.gamecenter.sdk.common.IDispatcherCallback;
import com.qihoo.gamecenter.sdk.demosp.payment.Constants;
import com.qihoo.gamecenter.sdk.demosp.payment.QihooPayInfo;
import com.qihoo.gamecenter.sdk.demosp.utils.ProgressUtil;
import com.qihoo.gamecenter.sdk.demosp.utils.QihooUserInfo;
import com.qihoo.gamecenter.sdk.demosp.utils.QihooUserInfoListener;
import com.qihoo.gamecenter.sdk.demosp.utils.QihooUserInfoTask;
import com.qihoo.gamecenter.sdk.matrix.Matrix;
import com.qihoo.gamecenter.sdk.protocols.CPCallBackMgr;
import com.qihoo.gamecenter.sdk.protocols.ProtocolConfigs;
import com.qihoo.gamecenter.sdk.protocols.ProtocolKeys;
import com.qihoopp.qcoinpay.common.ResultConfigs;
import com.qihoopp.qcoinpay.d;
import com.qihoopp.qcoinpay.main.PayAct;
import com.reyun.sdk.ReYun;
import com.umeng.analytics.mobclick.game.MobClickCppHelper;
import com.unicom.dcLoader.Utils;
import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;
import org.json.JSONException;
import org.json.JSONObject;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public class DiabloLOL extends Cocos2dxActivity {
    private static final String APP_ID = "wxb11bc078fab98de2";
    public static final int HANDLER_CLOSEWEB = 102;
    public static final int HANDLER_COPY_CODE = 11;
    public static final int HANDLER_EXCHANGEPAY = 480;
    public static final int HANDLER_GETORDERNUM = 481;
    public static final int HANDLER_HIDEBANNER = 210;
    public static final int HANDLER_HIDEWEBDATA = 998;
    public static final int HANDLER_MONTHCONTRA = 470;
    public static final int HANDLER_RECHARGE = 30;
    public static final int HANDLER_REYUN_EXIT = 400;
    public static final int HANDLER_SAVEPIC = 450;
    public static final int HANDLER_SHOWBANNER = 200;
    public static final int HANDLER_SHOWSHARE = 420;
    public static final int HANDLER_SHOW_BACKPROMPT_DIALOG = 10;
    public static final int HANDLER_SHOW_INTER_AD = 211;
    public static final int HANDLER_WEIXIN = 460;
    public static final int WEBFILECHOOSER_RESULTCODE = 1;
    private static String accessToken;
    public static DiabloLOL instance;
    private static String userId;
    Dialog aDialog;
    private Context context;
    GameManager gameManager;
    Cocos2dxGLSurfaceView glView;
    AlertDialog.Builder mBuilder;
    CountDownTimer mCountTime;
    protected QihooUserInfo mQihooUserInfo;
    public ValueCallback<Uri> mUploadMessage;
    public OGWebView mWebView;
    public static String HS_Appid = "3586803e59cba52af3ca4eaad8293ce5";
    public static final String LOG_TAG = DiabloLOL.class.getSimpleName();
    public static int sCMCC_OPEN = 1;
    private static String RECHARGE_CHANNELS = "rc_210";
    private static final String TelephonyManager = null;
    public static int mChannelIndex = -1;
    private static boolean isLogin = false;
    protected static boolean isAccessTokenValid = true;
    protected static boolean isQTValid = true;
    private CmPopupWindow mShareWindow = null;
    private List<PurchaseItemData> purchaseItems = null;
    private PurchaseItemData purchaseItem = null;
    public String[] PAY_NAME = {"20钻石", "45钻石", "96钻石", "155钻石", "400钻石", "2万铜币", "4.5万铜币", "9.6万铜币", "15万铜币", "40万铜币", "紫装礼包", "新手礼包", "解锁剑圣", "超值礼包", "剑圣大礼包", "2星紫装礼包", "3星紫装礼包", "4星紫装礼包", "5星紫装礼包", "2元购买复活", Matrix.VIP, "畅玩礼包", "月卡", "每日限购礼包", "每周限购礼包", "1星橙装礼包", "2星橙装礼包", "3星橙装礼包", "4星橙装礼包", "5星橙装礼包", "神秘火柴盒", "解锁双天赋", "基金", "皮肤礼包", "限时英雄礼包", "140万铜币", "1400钻石", "340万铜币", "3400钻石", "630万铜币", "6300钻石", "1500万铜币", "15000钻石"};
    public String[] PRO_ID_Str = {"COM_LOL_2_2", "COM_LOL_4_2", "COM_LOL_8_2", "COM_LOL_12_2", "COM_LOL_30_2", "COM_LOL_2_1", "COM_LOL_4_1", "COM_LOL_8_1", "COM_LOL_12_1", "COM_LOL_30_1", "COM_LOL_GIFT_EQUIP", "COM_LOL_GIFT_NEW", "COM_LOL_HERO_YI", "COM_LOL_GIFT_DIAMOND", "COM_LOL_GIFT_JS", "COM_LOL_GIFT_EQUIP_2", "COM_LOL_GIFT_EQUIP_3", "COM_LOL_GIFT_EQUIP_4", "COM_LOL_GIFT_EQUIP_5", "COM_LOL_RELIFE", "COM_LOL_VIP", "COM_LOL_ONE_COINE", "COM_LOL_CARD", "COM_LOL_GIFT_DAY", "COM_LOL_GIFT_WEEK", "COM_LOL_GIFT_ORANGEEQUIP1", "COM_LOL_GIFT_ORANGEEQUIP2", "COM_LOL_GIFT_ORANGEEQUIP3", "COM_LOL_GIFT_ORANGEEQUIP4", "COM_LOL_GIFT_ORANGEEQUIP5", "COM_LOL_GIFT_SMHCH", "COM_LOL_TALENT_LIMIT", "COM_LOL_GIFT_FUND", "COM_LOL_GIFT_JIANSHENGSKIN", "COM_LOL_GIFT_HERO", "COM_LOL_98_1", "COM_LOL_98_2", "COM_LOL_198_1", "COM_LOL_198_2", "COM_LOL_328_1", "COM_LOL_328_2", "COM_LOL_648_1", "COM_LOL_648_2"};
    public int[] PAY_RMB = {200, 400, ResultConfigs.NO_PWD, ResultConfigs.CREATE_ORDER_FAIL, PathInterpolatorCompat.MAX_NUM_POINTS, 200, 400, ResultConfigs.NO_PWD, ResultConfigs.CREATE_ORDER_FAIL, PathInterpolatorCompat.MAX_NUM_POINTS, 600, 1000, ResultConfigs.BIND_MOBILE_EXIST, 200, 2500, ResultConfigs.CREATE_ORDER_FAIL, ResultConfigs.BIND_MOBILE_EXIST, 2400, 2900, 200, 2900, 10, 1000, ResultConfigs.SET_PWD_FAIL, PathInterpolatorCompat.MAX_NUM_POINTS, 600, ResultConfigs.CREATE_ORDER_FAIL, ResultConfigs.BIND_MOBILE_EXIST, 2400, 2900, 100, ResultConfigs.NO_PWD, 2500, 1500, 2500, 9800, 9800, 19800, 19800, 32800, 32800, 64800, 64800};
    public String[] PAY_CODE_MM = {"001", "002", "004", "006", "007", "008", "009", "011", "013", "014", "016", "017", "019", "021", "023", "024", "025", "026", "027", "040", "041", "037", "029", "030", "031", "032", "033", "034", "035", "036", "038", "039", "042", "043", "044", "101", "102", "103", "104", "105", "106", "107", "108"};
    public String[] PAY_CODE_UNICOM = {"001", "002", "003", "004", "005", "006", "007", "008", "009", "010", "011", "012", "013", "014", "015", "016", "017", "018", "019", "020", "021", "030", "022", "023", "024", "025", "026", "027", "028", "029", "031", "036", "037", "038", "039", "101", "102", "103", "104", "105", "106", "107", "108"};
    public String[] PAY_CODE_SMS = {"TOOL1", "TOOL2", "TOOL3", "TOOL4", "TOOL5", "TOOL6", "TOOL7", "TOOL8", "TOOL9", "TOOL10", "TOOL11", "TOOL12", "TOOL13", "TOOL14", "TOOL15", "TOOL16", "TOOL17", "TOOL18", "TOOL19", "TOOL20", "TOOL21", "TOOL30", "TOOL22", "TOOL23", "TOOL24", "TOOL25", "TOOL26", "TOOL27", "TOOL28", "TOOL29", "TOOL31", "TOOL32", "TOOL33", "TOOL34", "TOOL35", "101", "102", "103", "104", "105", "106", "107", "108"};
    public int[] PAY_CODE_BENZHEN = {1, 2, 3, 21, 22, 6, 7, 8, 24, 25, 27, 16, 26, 14, 18, 28, 29, 30, 31, 32, 17, 19, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 101, 102, 103, 104, 105, 106, 107, 108, 23, 9, 10, 20, 4, 5};
    public String[] CHANNEL = {"a10022", "a10095", "a10032", "a10054", "a10039", "a10084", "a10085", "a10086", "a10077", "a10037", "a10031", "a10055", "a10075", "a20066"};
    public String[] MM_CHANNEL = {"2200196424", "2200163860", "2200018292", "2200127261", "2200126245", "2200131164", "2200131784", "2200127422", "2200123366", "2200145619", "2200112411", "2200109612", "2200126383", "2200157780"};
    private int payType = 0;
    private int mPayIndex = -1;
    boolean isActive = true;
    public int iFromPay = 0;
    private boolean bSign360 = false;
    protected String mAccessToken = null;
    protected CPCallBackMgr.MatrixCallBack mSDKCallback = new CPCallBackMgr.MatrixCallBack() { // from class: com.DBGame.DiabloLOL.DiabloLOL.1
        @Override // com.qihoo.gamecenter.sdk.protocols.CPCallBackMgr.MatrixCallBack
        public void execute(Context context, int functionCode, String functionParams) {
            if (functionCode == 258) {
                DiabloLOL.this.doSdkSwitchAccount(true);
            }
        }
    };
    private IDispatcherCallback mLoginCallback = new IDispatcherCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.2
        @Override // com.qihoo.gamecenter.sdk.common.IDispatcherCallback
        public void onFinished(String data) {
            Log.i("jw", "login callback data:" + data);
            if (!DiabloLOL.this.isCancelLogin(data)) {
                DiabloLOL.this.mQihooUserInfo = null;
                DiabloLOL.this.mAccessToken = DiabloLOL.this.parseAccessTokenFromLoginResult(data);
                if (TextUtils.isEmpty(DiabloLOL.this.mAccessToken)) {
                    Toast.makeText(DiabloLOL.this, "get access_token failed!", 1).show();
                }
            }
        }
    };
    private IDispatcherCallback mAccountSwitchCallback = new IDispatcherCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.3
        @Override // com.qihoo.gamecenter.sdk.common.IDispatcherCallback
        public void onFinished(String data) {
            if (!DiabloLOL.this.isCancelLogin(data)) {
                DiabloLOL.this.mAccessToken = DiabloLOL.this.parseAccessTokenFromLoginResult(data);
                if (!TextUtils.isEmpty(DiabloLOL.this.mAccessToken)) {
                    DiabloLOL.this.getUserInfo();
                } else {
                    Toast.makeText(DiabloLOL.this, "get access_token failed!", 1).show();
                }
            }
        }
    };
    public Handler aHandler = new Handler() { // from class: com.DBGame.DiabloLOL.DiabloLOL.7
        @Override // android.os.Handler
        public void handleMessage(Message msg) {
            switch (msg.what) {
                case 10:
                    DiabloLOL.this.exitGame();
                    break;
                case 11:
                    ClipboardManager myClipboard = (ClipboardManager) DiabloLOL.getContext().getSystemService("clipboard");
                    ClipData myDate = ClipData.newPlainText(MiniDefine.ax, BLHelper.copyString);
                    myClipboard.setPrimaryClip(myDate);
                    Toast.makeText(DiabloLOL.this, "拷贝成功！", 0).show();
                    break;
                case 30:
                    if (BLHelper.IPAYTAYPE == 2) {
                        new Thread(DiabloLOL.this.runnable).start();
                        break;
                    } else if (BLHelper.IPAYTAYPE == 1) {
                        DiabloLOL.this.payInDuanXin();
                        break;
                    } else {
                        int payway = BLHelper.getPayWay(DiabloLOL.this.PAY_RMB[DiabloLOL.this.mPayIndex]);
                        if (payway == 1) {
                            DiabloLOL.this.payInDuanXin();
                            break;
                        } else if (payway == 2) {
                            new Thread(DiabloLOL.this.runnable).start();
                            break;
                        }
                    }
                    break;
                case 102:
                    OGPub.Instance().closeLoad();
                    break;
                case 200:
                    DiabloLOL.this.showBanner();
                    break;
                case DiabloLOL.HANDLER_HIDEBANNER /* 210 */:
                    DiabloLOL.this.hideBanner();
                    break;
                case DiabloLOL.HANDLER_SHOW_INTER_AD /* 211 */:
                    DiabloLOL.this.showInterAd(msg.arg1);
                    break;
                case 400:
                    ReYun.exitSdk();
                    break;
                case DiabloLOL.HANDLER_SHOWSHARE /* 420 */:
                    DiabloLOL.this.showShareDialog();
                    break;
                case DiabloLOL.HANDLER_SAVEPIC /* 450 */:
                    BLHelper.savePic();
                    break;
                case DiabloLOL.HANDLER_MONTHCONTRA /* 470 */:
                    DiabloLOL.this.purchaseMonthlyContract(msg.arg1);
                    break;
                case DiabloLOL.HANDLER_GETORDERNUM /* 481 */:
                    BLHelper.getStrOrderNum(DiabloLOL.this.PAY_RMB[DiabloLOL.this.mPayIndex]);
                    break;
                case DiabloLOL.HANDLER_HIDEWEBDATA /* 998 */:
                    BLHelper.webout();
                    break;
            }
        }
    };
    Runnable runnable = new Runnable() { // from class: com.DBGame.DiabloLOL.DiabloLOL.8
        @Override // java.lang.Runnable
        public void run() {
            Message msg = new Message();
            msg.what = DiabloLOL.HANDLER_GETORDERNUM;
            DiabloLOL.this.aHandler.sendMessage(msg);
        }
    };
    GameInterface.IPayCallback payCallback = new GameInterface.IPayCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.10
        public void onResult(int resultCode, String billingIndex, Object obj) {
            String str = "购买道具：[" + DiabloLOL.this.PAY_NAME[DiabloLOL.this.mPayIndex] + "] 成功！";
            BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
            if (DiabloLOL.this.mPayIndex >= 0 && DiabloLOL.this.mPayIndex < DiabloLOL.this.PRO_ID_Str.length) {
                switch (resultCode) {
                    case 1:
                        if (!a.f590a.equals(obj.toString())) {
                            String str2 = "购买道具：[" + DiabloLOL.this.PAY_NAME[DiabloLOL.this.mPayIndex] + "] 成功！";
                            BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
                        }
                        DiabloLOL.this.mPayIndex = -1;
                        break;
                    case 2:
                        String str3 = "购买道具：[" + DiabloLOL.this.PAY_NAME[DiabloLOL.this.mPayIndex] + "] 成功！";
                        BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
                        break;
                    default:
                        String str4 = "购买道具：[" + DiabloLOL.this.PAY_NAME[DiabloLOL.this.mPayIndex] + "] 取消！";
                        DiabloLOL.this.mPayIndex = -1;
                        break;
                }
            }
            BLHelper.closeShieldLayer();
        }
    };
    private int iOpen = -1;
    protected IDispatcherCallback mPayCallback = new IDispatcherCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.12
        @Override // com.qihoo.gamecenter.sdk.common.IDispatcherCallback
        public void onFinished(String data) {
            if (!TextUtils.isEmpty(data)) {
                boolean isCallbackParseOk = false;
                try {
                    JSONObject jsonRes = new JSONObject(data);
                    int errorCode = jsonRes.optInt("error_code");
                    Log.e("qq", errorCode + "================= ");
                    isCallbackParseOk = true;
                    switch (errorCode) {
                        case -2:
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        case -1:
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        case 0:
                            BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 2);
                            BLHelper.purchaseSucess(DiabloLOL.this.PAY_RMB[DiabloLOL.this.mPayIndex]);
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        case 1:
                            BLHelper.closeShieldLayer();
                            System.out.println("计费失败。。");
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        case 4009911:
                            DiabloLOL.isQTValid = false;
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        case 4010201:
                            DiabloLOL.isAccessTokenValid = false;
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                        default:
                            BLHelper.closeShieldLayer();
                            DiabloLOL.this.mPayIndex = -1;
                            break;
                    }
                } catch (JSONException e) {
                    Log.e("360sdk", "解析json data失败,data:" + data, e);
                    e.printStackTrace();
                    DiabloLOL.this.mPayIndex = -1;
                }
                if (!isCallbackParseOk) {
                    Log.d("360sdk", "数据格式异常");
                }
            }
        }
    };
    private IDispatcherCallback mQuitCallback = new IDispatcherCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.14
        @Override // com.qihoo.gamecenter.sdk.common.IDispatcherCallback
        public void onFinished(String data) {
            try {
                JSONObject json = new JSONObject(data);
                int which = json.optInt("which", -1);
                switch (which) {
                    case 0:
                        return;
                    default:
                        GameInterface.exit(DiabloLOL.this, new GameInterface.GameExitCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.14.1
                            public void onConfirmExit() {
                                BLHelper.exitGame();
                            }

                            public void onCancelExit() {
                            }
                        });
                        return;
                }
            } catch (Exception e) {
                e.printStackTrace();
                BLHelper.exitGame();
            }
        }
    };
    public Handler payHandler = new Handler() { // from class: com.DBGame.DiabloLOL.DiabloLOL.15
        @Override // android.os.Handler
        public void handleMessage(Message msg) {
            Log.e("计费结果", "计费结果==" + msg.arg1);
            switch (msg.arg1) {
                case 0:
                    BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
                    DiabloLOL.this.mPayIndex = -1;
                    BLHelper.closeShieldLayer();
                    break;
                case 1:
                    DiabloLOL.this.mPayIndex = -1;
                    BLHelper.closeShieldLayer();
                    break;
                case 2:
                    DiabloLOL.this.mPayIndex = -1;
                    BLHelper.closeShieldLayer();
                    break;
                case 3:
                    DiabloLOL.this.mPayIndex = -1;
                    BLHelper.closeShieldLayer();
                    break;
            }
        }
    };

    private void payInUnicom() {
    }

    private native void quitWeb();

    public void purchaseMonthlyContract(int index) {
    }

    static {
        System.loadLibrary("patch");   /* hybrid patch: loaded BEFORE cocos2dcpp so our few verified functions win */
        System.loadLibrary("cocos2dcpp");
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        init();
        Bluetooth.getInstance().init(this);
        BLHelper.init(this.aHandler, this);
        MobClickCppHelper.init(this, "5506905ffd98c5ae1b0000de", BLHelper.getUMChannel());
        isLogin = false;
        Intent intent = getIntent();
        this.bSign360 = intent.getBooleanExtra(d.e, false);
        try {
            ReYun.initWithKeyAndChannelId(this, "a4d2f6135f92a14d5d86da48f095e823", BLHelper.getEmChannel());
        } catch (Exception e) {
            e.printStackTrace();
        }
        new AddBlackName(this);
        AddBlackName.Check();
        this.context = this;
        instance = this;
        this.iFromPay = getSimType();
        initSMS();
        MatchVSHelper.init(this.aHandler, this);
        init360();
    }

    private int getSimType() {
        int type = 0;
        TelephonyManager tm = (TelephonyManager) getSystemService(ProtocolKeys.PHONE);
        String sOperator = tm.getSimOperator().trim();
        if (sOperator == null || sOperator.equals("")) {
            return 0;
        }
        int sCode = Integer.valueOf(sOperator).intValue();
        switch (sCode) {
            case 46000:
            case 46002:
            case 46007:
            case 46020:
                type = 0;
                break;
            case 46001:
            case 46006:
                type = 2;
                break;
            case 46003:
            case 46005:
            case 46011:
                type = 1;
                break;
        }
        return type;
    }

    protected boolean getLandscape(Context context) {
        return context != null && getResources().getConfiguration().orientation == 2;
    }

    void init360() {
        Matrix.setActivity(this, this.mSDKCallback, false);
    }

    protected void doSdkLogin(boolean isLandScape) {
        Intent intent = getLoginIntent(isLandScape, false);
        IDispatcherCallback callback = this.mLoginCallback;
        Matrix.execute(this, intent, callback);
    }

    private Intent getLoginIntent(boolean isLandScape, boolean isSlient) {
        Intent intent = new Intent(this, (Class<?>) ContainerActivity.class);
        intent.putExtra(ProtocolKeys.IS_SCREEN_ORIENTATION_LANDSCAPE, isLandScape);
        intent.putExtra(ProtocolKeys.FUNCTION_CODE, 257);
        intent.putExtra(ProtocolKeys.IS_LOGIN_SHOW_CLOSE_ICON, true);
        intent.putExtra(ProtocolKeys.IS_SHOW_AUTOLOGIN_SWITCH, true);
        return intent;
    }

    protected void doSdkSwitchAccount(boolean isLandScape) {
        Intent intent = getSwitchAccountIntent(isLandScape);
        IDispatcherCallback callback = this.mAccountSwitchCallback;
        Matrix.invokeActivity(this, intent, callback);
    }

    private Intent getSwitchAccountIntent(boolean isLandScape) {
        Intent intent = new Intent(this, (Class<?>) ContainerActivity.class);
        intent.putExtra(ProtocolKeys.IS_SCREEN_ORIENTATION_LANDSCAPE, isLandScape);
        intent.putExtra(ProtocolKeys.FUNCTION_CODE, ProtocolConfigs.FUNC_CODE_SWITCH_ACCOUNT);
        intent.putExtra(ProtocolKeys.IS_LOGIN_SHOW_CLOSE_ICON, true);
        return intent;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isCancelLogin(String data) {
        try {
            JSONObject joData = new JSONObject(data);
            int errno = joData.optInt("errno", -1);
            if (-1 == errno) {
                Toast.makeText(this, data, 1).show();
                return true;
            }
        } catch (Exception e) {
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String parseAccessTokenFromLoginResult(String loginRes) {
        try {
            JSONObject joRes = new JSONObject(loginRes);
            JSONObject joData = joRes.getJSONObject(com.alipay.sdk.packet.d.k);
            return joData.getString(ProtocolKeys.ACCESS_TOKEN);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getUserInfo() {
        isAccessTokenValid = true;
        isQTValid = true;
        final QihooUserInfoTask mUserInfoTask = QihooUserInfoTask.newInstance();
        final ProgressDialog progress = ProgressUtil.show(this, R.string.get_user_title, R.string.get_user_message, new DialogInterface.OnCancelListener() { // from class: com.DBGame.DiabloLOL.DiabloLOL.4
            @Override // android.content.DialogInterface.OnCancelListener
            public void onCancel(DialogInterface dialog) {
                if (mUserInfoTask != null) {
                    mUserInfoTask.doCancel();
                }
            }
        });
        mUserInfoTask.doRequest(this, this.mAccessToken, Matrix.getAppKey(this), new QihooUserInfoListener() { // from class: com.DBGame.DiabloLOL.DiabloLOL.5
            @Override // com.qihoo.gamecenter.sdk.demosp.utils.QihooUserInfoListener
            public void onGotUserInfo(QihooUserInfo userInfo) {
                progress.dismiss();
                if (userInfo != null && userInfo.isValid()) {
                    DiabloLOL.this.onGotUserInfo(userInfo);
                }
            }
        });
    }

    public void onGotUserInfo(QihooUserInfo userInfo) {
    }

    private void showFiles() {
    }

    private void deleteFile() {
    }

    private void initSMS() {
        if (this.iFromPay == 1) {
            EgamePay.init(this);
            SharedPreferences defPreference = PreferenceManager.getDefaultSharedPreferences(this);
            defPreference.edit().putBoolean("IC", true).commit();
            this.gameManager = GameManager.getInstantce();
            this.gameManager.init(this, new SDKInitCallback() { // from class: com.DBGame.DiabloLOL.DiabloLOL.6
                @Override // cn.play.egamemanager.SDKInitCallback
                public void InitSucceed() {
                    Log.e("qq", "电信初始化成功");
                }

                @Override // cn.play.egamemanager.SDKInitCallback
                public void InitFailed(int arg0) {
                    Log.e("qq", "电信初始化失败");
                }
            });
        }
        GameInterface.initializeApp(this, (String) null, (GameInterface.ILoginCallback) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showBanner() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hideBanner() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showInterAd(int index) {
    }

    private void parserPurchaseXml() throws XmlPullParserException, IOException {
    }

    public String getParchaseKeyById(String id) {
        for (int i = 0; i < this.purchaseItems.size(); i++) {
            PurchaseItemData item = this.purchaseItems.get(i);
            if (item.getPurchaseId().equals(id)) {
                return item.getPurchaseKey();
            }
        }
        return null;
    }

    public String getParchaseIdByKey(String key) {
        for (int i = 0; i < this.purchaseItems.size(); i++) {
            PurchaseItemData item = this.purchaseItems.get(i);
            if (item.getPurchaseKey().equals(key)) {
                return item.getPurchaseId();
            }
        }
        return null;
    }

    public void parchaseMsgDebug() {
        for (int i = 0; i < this.purchaseItems.size(); i++) {
            PurchaseItemData item = this.purchaseItems.get(i);
            System.out.println("####" + item.getPurchaseKey() + "###" + item.getPurchaseId() + "###");
        }
        if (this.purchaseItems.size() == 0) {
            System.out.println("####计费点信息为空#####");
        }
    }

    public void order(String id) {
        if (this.mPayIndex == -1) {
            System.out.println("order id:" + id);
            for (int i = 0; i < this.PRO_ID_Str.length; i++) {
                if (id.equals(this.PRO_ID_Str[i])) {
                    this.mPayIndex = i;
                }
            }
            if (this.mPayIndex == -1) {
                System.out.println("没有找到计费点");
                return;
            }
            BLHelper.purchaseComplete(this.PRO_ID_Str[this.mPayIndex], 1);
            BLHelper.closeShieldLayer();
            this.mPayIndex = -1;
        }
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity
    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView glSurfaceView = new Cocos2dxGLSurfaceView(this);
        glSurfaceView.setEGLConfigChooser(5, 6, 5, 0, 16, 8);
        this.glView = glSurfaceView;
        return glSurfaceView;
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        Matrix.onStart(this);
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        if (!this.isActive) {
            ReYun.startHeartBeat(this);
            this.isActive = true;
        }
        Matrix.onResume(this);
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onPause() {
        super.onPause();
        Matrix.onPause(this);
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        if (!ReYun.isAppOnForeground()) {
            this.isActive = false;
        }
        Matrix.onStop(this);
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        Matrix.onRestart(this);
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        Matrix.onNewIntent(this, intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void exitGame() {
        doSdkQuit(true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setPayment() {
        String sFromPay = null;
        switch (this.iFromPay) {
            case 0:
                sFromPay = "yidong";
                break;
            case 1:
                sFromPay = "dianxin";
                break;
            case 2:
                sFromPay = "liantong";
                break;
        }
        ReYun.setPayment("unkown", sFromPay, "RMB", this.PAY_RMB[this.mPayIndex] / 100.0f, 0.0f, this.PAY_NAME[this.mPayIndex], 0L, 0);
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (keyCode == 4) {
            if (instance.mWebView != null) {
                if (instance.mWebView.mName.equals("campaign_question")) {
                    instance.mGLSurfaceView.onKeyDown(keyCode, event);
                } else {
                    OGPub.Instance().stopLoad();
                    instance.mWebView.quitwebview();
                }
            }
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    private void buyWithoutPay() {
        setPayment();
        BLHelper.purchaseComplete(this.PRO_ID_Str[this.mPayIndex], 1);
        BLHelper.closeShieldLayer();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void payInDuanXin() {
        if (RECHARGE_CHANNELS.indexOf(String.valueOf(this.iFromPay)) != -1) {
            showFiles();
            if (this.iFromPay == 2) {
                payInUnicom();
            } else if (this.iFromPay == 0) {
                payInYidong();
            } else if (this.iFromPay == 1) {
                payInEgame();
            }
        }
    }

    /* renamed from: com.DBGame.DiabloLOL.DiabloLOL$9, reason: invalid class name */
    class AnonymousClass9 implements Utils.UnipayPayResultListener {
        AnonymousClass9() {
        }

        public void PayResult(String arg0, int arg1, int arg2, String arg3) {
            switch (arg1) {
                case 1:
                    DiabloLOL.this.setPayment();
                    BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
                    BLHelper.closeShieldLayer();
                    DiabloLOL.this.mPayIndex = -1;
                    Log.e("qq", "Unicom支付成功");
                    break;
                case 2:
                    BLHelper.closeShieldLayer();
                    DiabloLOL.this.mPayIndex = -1;
                    Log.e("qq", "Unicom支付Fail");
                    break;
                case 3:
                    BLHelper.closeShieldLayer();
                    DiabloLOL.this.mPayIndex = -1;
                    Log.e("qq", "Unicom支付cancel");
                    break;
                default:
                    DiabloLOL.this.mPayIndex = -1;
                    Log.e("qq", "Unicom支付Default");
                    break;
            }
        }
    }

    private void payInYidong() {
        GameInterface.doBilling(this, true, true, this.PAY_CODE_MM[this.mPayIndex], (String) null, this.payCallback);
    }

    public void payInEgame() {
        HashMap<String, String> payParams = new HashMap<>();
        payParams.put(EgamePay.PAY_PARAMS_KEY_TOOLS_ALIAS, this.PAY_CODE_SMS[this.mPayIndex]);
        if (this.iOpen == -1) {
            this.iOpen = BLHelper.getOpenCTCC("ctcc", this, true);
        }
        Log.e("qq", "iOpen=" + this.iOpen);
        if (this.iOpen == 1) {
            this.gameManager.gameConfig.PaySdkUIForCP = 1;
        } else {
            this.gameManager.gameConfig.PaySdkUIForCP = 0;
        }
        this.gameManager.EGamePay(payParams, new EgamePayListener() { // from class: com.DBGame.DiabloLOL.DiabloLOL.11
            @Override // cn.egame.terminal.paysdk.EgamePayListener
            public void paySuccess(Map<String, String> arg0) {
                DiabloLOL.this.setPayment();
                BLHelper.purchaseComplete(DiabloLOL.this.PRO_ID_Str[DiabloLOL.this.mPayIndex], 1);
                BLHelper.closeShieldLayer();
                Log.e("qq", "Egame支付成功");
                DiabloLOL.this.mPayIndex = -1;
            }

            @Override // cn.egame.terminal.paysdk.EgamePayListener
            public void payFailed(Map<String, String> arg0, int arg1) {
                BLHelper.closeShieldLayer();
                Log.e("qq", "Egame支付Fail==" + arg1);
                DiabloLOL.this.mPayIndex = -1;
            }

            @Override // cn.egame.terminal.paysdk.EgamePayListener
            public void payCancel(Map<String, String> arg0) {
                BLHelper.closeShieldLayer();
                Log.e("qq", "Egame支付Cancel");
                DiabloLOL.this.mPayIndex = -1;
            }
        });
    }

    public void showShareDialog() {
    }

    private static String buildTransaction(String type) {
        return type == null ? String.valueOf(System.currentTimeMillis()) : type + System.currentTimeMillis();
    }

    public void sendMessage(Message msg) {
        this.aHandler.sendMessage(msg);
    }

    @Override // android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        OGWebView oGWebView = instance.mWebView;
        if (requestCode == 1 && instance.mWebView != null) {
            if (instance.mWebView.mUploadMessage != null) {
                Uri result = (data == null || resultCode != -1) ? null : data.getData();
                instance.mWebView.mUploadMessage.onReceiveValue(result);
                instance.mWebView.mUploadMessage = null;
            } else {
                return;
            }
        }
        super.onActivityResult(requestCode, resultCode, data);
        if (resultCode == RequestResult.RESULT_SELECTED_DRIVICE) {
            Bluetooth.getInstance().openClient();
        }
        Matrix.onActivityResult(this, requestCode, resultCode, data);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Bluetooth.getInstance().close();
        MatchVSHelper.destory();
        super.onDestroy();
        Matrix.destroy(this);
    }

    public void payThird(String strorderNum) {
        Log.e("qq", "订单号===" + strorderNum);
        doSdkPay(this.mQihooUserInfo, true, 1025, strorderNum);
    }

    protected void doSdkPay(QihooUserInfo usrinfo, boolean isLandScape, int functionCode, String orderNum) {
        QihooPayInfo payInfo = getQihooPayInfo(functionCode, orderNum);
        Intent intent = getPayIntent(isLandScape, payInfo, functionCode);
        intent.putExtra(ProtocolKeys.FUNCTION_CODE, functionCode);
        Matrix.invokeActivity(this, intent, this.mPayCallback);
    }

    protected void doSdkSwitchPayType(QihooUserInfo usrinfo, boolean isLandScape, int functionCode) {
        Intent intent = getSwitchPayTypeIntent(usrinfo, isLandScape, functionCode);
        Matrix.invokeActivity(this, intent, null);
        Toast.makeText(this.context, "切换成功，请您回到360支付栏！", 1).show();
    }

    private Intent getSwitchPayTypeIntent(QihooUserInfo usrinfo, boolean isLandScape, int functionCode) {
        Bundle bundle = new Bundle();
        bundle.putInt(ProtocolKeys.FUNCTION_CODE, functionCode);
        bundle.putBoolean(ProtocolKeys.IS_SCREEN_ORIENTATION_LANDSCAPE, isLandScape);
        bundle.putString(ProtocolKeys.QIHOO_USER_ID, null);
        Intent intent = new Intent(this, (Class<?>) ContainerActivity.class);
        intent.putExtras(bundle);
        return intent;
    }

    protected QihooPayInfo getQihooPayInfo(int functionCode, String orderNum) {
        QihooPayInfo payInfo = getQihooPay(String.valueOf(this.PAY_RMB[this.mPayIndex]), orderNum);
        return payInfo;
    }

    private QihooPayInfo getQihooPay(String moneyAmount, String orderNum) {
        String qihooUserId = this.mQihooUserInfo != null ? this.mQihooUserInfo.getId() : null;
        QihooPayInfo qihooPay = new QihooPayInfo();
        qihooPay.setQihooUserId(qihooUserId);
        qihooPay.setMoneyAmount(moneyAmount);
        qihooPay.setExchangeRate("1");
        qihooPay.setProductName(this.PAY_NAME[this.mPayIndex]);
        qihooPay.setProductId("100");
        qihooPay.setNotifyUri(Constants.DEMO_APP_SERVER_NOTIFY_URI);
        qihooPay.setAppName(getString(R.string.app_name));
        qihooPay.setAppUserName(BLHelper.getDeviceID());
        qihooPay.setAppUserId(BLHelper.getDeviceID());
        qihooPay.setAppOrderId(orderNum);
        return qihooPay;
    }

    protected Intent getPayIntent(boolean isLandScape, QihooPayInfo pay, int functionCode) {
        Bundle bundle = new Bundle();
        bundle.putBoolean(ProtocolKeys.IS_SCREEN_ORIENTATION_LANDSCAPE, isLandScape);
        bundle.putString(ProtocolKeys.AMOUNT, pay.getMoneyAmount());
        bundle.putString(ProtocolKeys.PRODUCT_NAME, pay.getProductName());
        bundle.putString(ProtocolKeys.PRODUCT_ID, pay.getProductId());
        bundle.putString(ProtocolKeys.NOTIFY_URI, pay.getNotifyUri());
        bundle.putString(ProtocolKeys.APP_NAME, pay.getAppName());
        bundle.putString(ProtocolKeys.APP_USER_NAME, pay.getAppUserName());
        bundle.putString(ProtocolKeys.APP_USER_ID, pay.getAppUserId());
        bundle.putString(ProtocolKeys.APP_ORDER_ID, pay.getAppOrderId());
        bundle.putInt(ProtocolKeys.FUNCTION_CODE, functionCode);
        Intent intent = new Intent(this, (Class<?>) ContainerActivity.class);
        intent.putExtras(bundle);
        return intent;
    }

    public void resetPayIndex() {
        this.mPayIndex = -1;
    }

    /* renamed from: com.DBGame.DiabloLOL.DiabloLOL$13, reason: invalid class name */
    class AnonymousClass13 implements Utils.UnipayCommandResultListener {
        AnonymousClass13() {
        }

        public void CommandResult(String resp) {
            Log.d(DiabloLOL.LOG_TAG, "purchaseMonthlyContract>>>respond is " + resp);
            try {
                JSONObject resultObject = new JSONObject(resp);
                String result = resultObject.optString("result");
                resultObject.optString("resultCode");
                if ("1".equals(result)) {
                    BLHelper.onMonthlyContractPurchased(true);
                } else if (!PayAct.c.f4509b.equals(result) && PayAct.c.c.equals(result)) {
                    BLHelper.onMonthlyContractPurchased(false);
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    public void payTrain(String status) {
        if (status.equals("0")) {
            payInDuanXin();
            return;
        }
        if (status.equals("138000")) {
            Toast.makeText(this.context, "客户端参数问题", 1).show();
            return;
        }
        if (status.equals("138100")) {
            Toast.makeText(this.context, "客户端参数类型问题", 1).show();
        } else if (status.equals("138101")) {
            Toast.makeText(this.context, " 客户端参数有空值", 1).show();
        } else if (status.equals("200000")) {
            Toast.makeText(this.context, "服务器问题", 1).show();
        }
    }

    protected void doSdkQuit(boolean isLandScape) {
        Bundle bundle = new Bundle();
        bundle.putBoolean(ProtocolKeys.IS_SCREEN_ORIENTATION_LANDSCAPE, isLandScape);
        bundle.putInt(ProtocolKeys.FUNCTION_CODE, 2050);
        bundle.putString(ProtocolKeys.UI_BACKGROUND_PICTRUE, "");
        Intent intent = new Intent(this, (Class<?>) ContainerActivity.class);
        intent.putExtras(bundle);
        Matrix.invokeActivity(this, intent, this.mQuitCallback);
    }

    private void initBenZhen() {
    }

    public Boolean getMMChannel() {
        mChannelIndex = -1;
        String mChannel = BLHelper.getEmChannel();
        for (int i = 0; i < this.CHANNEL.length; i++) {
            if (mChannel.equals(this.CHANNEL[i])) {
                mChannelIndex = i;
            }
        }
        if (mChannelIndex != -1) {
            return true;
        }
        System.out.println("没有找到MM渠道");
        return false;
    }
}

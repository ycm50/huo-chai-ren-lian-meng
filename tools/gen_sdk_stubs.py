#!/usr/bin/env python
# ---------------------------------------------------------------------------
# Generates compile-time stubs for the third-party SDKs the decompiled game
# code references. Signatures are derived from the actual usage sites in
# app/src/main/java/com/DBGame (see the project README, section "SDK stubs").
#
# The stubs exist only so the reconstructed game code compiles; they perform
# no work. Replace them with the real AARs to get a functional build.
#
# Usage: python tools/gen_sdk_stubs.py <out_java_root>
# ---------------------------------------------------------------------------
import os
import sys

OUT = sys.argv[1] if len(sys.argv) > 1 else 'app/src/main/java'

# package -> {class -> [(kind, decl)]}
STUBS = {
    'cn.cmgame.billing.api': {
        'GameInterface': [
            ('interface', 'ILoginCallback'),
            ('interface', 'IPayCallback'),
            ('interface', 'GameExitCallback'),
            ('static-import', 'android.content.Context'),
            ('static-import', 'android.os.Handler'),
            ('method', 'public static void initializeApp(android.app.Activity activity, GameInterface.ILoginCallback loginCallback)'),
            ('method', 'public static void doBilling(android.app.Activity activity, java.util.HashMap<String, String> payParams, boolean isPayOnce, GameInterface.IPayCallback payCallback)'),
            ('method', 'public static void exit(android.app.Activity activity, GameInterface.GameExitCallback exitCallback)'),
        ],
    },
    'cn.egame.terminal.paysdk': {
        'EgamePay': [
            ('field', 'public static final String PAY_PARAMS_KEY_TOOLS_ALIAS = "PAY_PARAMS_KEY_TOOLS_ALIAS"'),
            ('method', 'public static void init(android.content.Context context)'),
        ],
        'EgamePayListener': [
            ('method', 'public void paySuccess(java.util.HashMap<String, String> params)'),
            ('method', 'public void payCancel(java.util.HashMap<String, String> params)'),
            ('method', 'public void payFailed(java.util.HashMap<String, String> params)'),
        ],
    },
    'cn.mycompany.addblackname': {
        'AddBlackName': [
            ('method', 'public static void Check(android.content.Context context)'),
        ],
    },
    'cn.mycompany.addblackname.utils': {
        'utils': [
            ('method', 'public static String getAppKey()'),
            ('method', 'public static String getAPPSecretString()'),
            ('method', 'public static String getDeviceID(android.content.Context context)'),
            ('method', 'public static String getMacID(android.content.Context context)'),
            ('method', 'public static String getMD5(String str)'),
        ],
    },
    'cn.play.egamemanager': {
        'GameManager': [
            ('method', 'public static GameManager getInstantce()'),
            ('method', 'public void init(android.app.Activity activity, SDKInitCallback callback)'),
        ],
        'SDKInitCallback': [
            ('method', 'public void onSuccess()'),
            ('method', 'public void onFail(int code, String msg)'),
        ],
    },
    'cn.wjdiankong.hookpms': {
        'ServiceManagerWraper': [
            ('method', 'public static void hookPMS(android.content.Context context)'),
        ],
    },
    'com.alipay.mobilesecuritysdk.constant': {
        'ConfigConstant': [
            ('field', 'public static final String JSON_SECTION_WIFI = "wifi"'),
        ],
    },
    'com.alipay.sdk.cons': {
        'MiniDefine': [
            ('field', 'public static final String B = "b"'),
            ('field', 'public static final String K = "k"'),
            ('field', 'public static final String X = "x"'),
            ('field', 'public static final String ax = "ax"'),
        ],
    },
    'com.alipay.sdk.packet': {
        'd': [
            ('method', 'public static String k(String str)'),
        ],
    },
    'com.example.bluetoothdemo.activity': {
        'DiviceListActivity': [
            ('method', 'public static void start(android.content.Context context, int requestCode)'),
        ],
    },
    'com.example.bluetoothdemo.common': {
        'Bluetooth': [
            ('field', 'public static android.app.Activity mActivity'),
            ('method', 'public static Bluetooth getInstance()'),
            ('method', 'public void setActivity(android.app.Activity activity)'),
        ],
        'RequestResult': [
            ('field', 'public static final int REQUEST_MAIN = 1001'),
            ('field', 'public static final int RESULT_SELECTED_DRIVICE = 1002'),
        ],
    },
    'com.heepay.plugin.constant': {
        'a': [
            ('field', 'public static final String a = ""'),
        ],
    },
    'com.moca.rpc.nano': {
        'RPC': [
            ('method', 'public void onPayload(RPC rpc, long len, java.io.InputStream is, boolean flag)'),
        ],
        'RPCEventListener': [
            ('method', 'public void onPayload(RPC arg0, long arg1, java.io.InputStream arg2, boolean arg3)'),
        ],
        'KeyValuePair': [
            ('field', 'public String key'),
            ('field', 'public String value'),
        ],
    },
    'com.qihoo.gamecenter.sdk.activity': {
        'ContainerActivity': [
            ('method', 'public static void invokeActivity(android.app.Activity activity, int funcCode, java.util.HashMap<String, String> params)'),
        ],
    },
    'com.qihoo.gamecenter.sdk.common': {
        'IDispatcherCallback': [
            ('method', 'public void onFinished(String data)'),
        ],
    },
    'com.qihoo.gamecenter.sdk.demosp.payment': {
        'Constants': [
            ('field', 'public static final String DEMO_APP_SERVER_NOTIFY_URI = ""'),
        ],
        'QihooPayInfo': [
            ('field', 'public String money'),
            ('method', 'public void setMoney(String money)'),
        ],
    },
    'com.qihoo.gamecenter.sdk.demosp.utils': {
        'ProgressUtil': [
            ('method', 'public static void show(android.content.Context context)'),
        ],
        'QihooUserInfo': [
            ('field', 'public String id'),
            ('field', 'public String name'),
        ],
        'QihooUserInfoListener': [
            ('method', 'public void onGotUserInfo(QihooUserInfo userInfo)'),
        ],
        'QihooUserInfoTask': [
            ('method', 'public static QihooUserInfoTask newInstance(android.content.Context context, String appKey, String accessToken)'),
            ('method', 'public void gotUserInfo(QihooUserInfoListener listener)'),
        ],
    },
    'com.qihoo.gamecenter.sdk.matrix': {
        'Matrix': [
            ('field', 'public static final int VIP = 1'),
            ('method', 'public static void initInApplication(android.app.Application app)'),
            ('method', 'public static void setActivity(android.app.Activity activity)'),
            ('method', 'public static void execute(android.app.Activity activity, int funcCode, java.util.HashMap<String, String> params, IDispatcherCallback callback)'),
            ('method', 'public static void invokeActivity(android.app.Activity activity, int funcCode, java.util.HashMap<String, String> params)'),
            ('method', 'public static String getAppKey()'),
            ('method', 'public static void destroy()'),
            ('method', 'public static void onPause(android.app.Activity activity)'),
            ('method', 'public static void onResume(android.app.Activity activity)'),
            ('method', 'public static void onStart(android.app.Activity activity)'),
            ('method', 'public static void onStop(android.app.Activity activity)'),
            ('method', 'public static void onRestart(android.app.Activity activity)'),
            ('method', 'public static void onNewIntent(android.content.Intent intent)'),
            ('method', 'public static void onActivityResult(android.app.Activity activity, int requestCode, int resultCode, android.content.Intent data)'),
        ],
    },
    'com.qihoo.gamecenter.sdk.protocols': {
        'CPCallBackMgr': [
            ('interface', 'MatrixCallBack'),
        ],
        'ProtocolConfigs': [
            ('field', 'public static final int FUNC_CODE_SWITCH_ACCOUNT = 1'),
        ],
        'ProtocolKeys': [
            ('field', 'public static final String ACCESS_TOKEN = "access_token"'),
            ('field', 'public static final String AMOUNT = "amount"'),
            ('field', 'public static final String APP_NAME = "app_name"'),
            ('field', 'public static final String APP_ORDER_ID = "app_order_id"'),
            ('field', 'public static final String APP_USER_ID = "app_user_id"'),
            ('field', 'public static final String APP_USER_NAME = "app_user_name"'),
            ('field', 'public static final String FUNCTION_CODE = "function_code"'),
            ('field', 'public static final String IS_LOGIN_SHOW_CLOSE_ICON = "is_login_show_close_icon"'),
            ('field', 'public static final String IS_SCREEN_ORIENTATION_LANDSCAPE = "is_screen_orientation_landscape"'),
            ('field', 'public static final String IS_SHOW_AUTOLOGIN_SWITCH = "is_show_autologin_switch"'),
            ('field', 'public static final String NOTIFY_URI = "notify_uri"'),
            ('field', 'public static final String PHONE = "phone"'),
            ('field', 'public static final String PRODUCT_ID = "product_id"'),
            ('field', 'public static final String PRODUCT_NAME = "product_name"'),
            ('field', 'public static final String QIHOO_USER_ID = "qihoo_user_id"'),
            ('field', 'public static final String UI_BACKGROUND_PICTRUE = "ui_background_pictrue"'),
            ('field', 'public static final String URL = "url"'),
        ],
    },
    'com.qihoo.safepay.keyboard.util': {
        'MD5': [
            ('field', 'public static final String TAG = "MD5"'),
            ('method', 'public static String getMD5(String str)'),
        ],
    },
    'com.qihoopp.qcoinpay.common': {
        'ResultConfigs': [
            ('field', 'public static final int BIND_MOBILE_EXIST = 1'),
            ('field', 'public static final int CREATE_ORDER_FAIL = 2'),
            ('field', 'public static final int NO_PWD = 3'),
            ('field', 'public static final int SET_PWD_FAIL = 4'),
        ],
    },
    'com.qihoopp.qcoinpay': {
        'd': [
            ('field', 'public static final int c = 0'),
        ],
    },
    'com.qihoopp.qcoinpay.main': {
        'PayAct': [
            ('field', 'public static final int c = 0'),
        ],
    },
    'com.reyun.sdk': {
        'ReYun': [
            ('method', 'public static void init(android.content.Context context, String appKey, String channelId)'),
            ('method', 'public static void initWithKeyAndChannelId(android.content.Context context, String appKey, String channelId)'),
            ('method', 'public static void setPayment(String orderId, String currency, float amount, String paymentType)'),
            ('method', 'public static void startHeartBeat(android.content.Context context)'),
            ('method', 'public static void exitSdk()'),
            ('method', 'public static boolean isAppOnForeground(android.content.Context context)'),
        ],
    },
    'com.tencent.bugly.crashreport': {
        'CrashReport': [
            ('method', 'public static void initCrashReport(android.content.Context context, String appId, boolean isDebug)'),
        ],
    },
    'com.umeng.analytics.mobclick.game': {
        'MobClickCppHelper': [
            ('method', 'public static void init(android.content.Context context)'),
        ],
    },
    'com.unicom.dcLoader': {
        'Utils': [
            ('interface', 'UnipayPayResultListener'),
            ('interface', 'UnipayCommandResultListener'),
            ('method', 'public static void init(android.content.Context context)'),
        ],
    },
    'u.aly': {
        'dl': [
            ('method', 'public static void a(String str)'),
        ],
        'x': [
            ('method', 'public static void a(String str)'),
        ],
    },
}


def render(pkg, cls, entries, nested):
    lines = []
    lines.append('package %s;' % pkg)
    lines.append('')
    lines.append('// AUTO-GENERATED compile stub - see tools/gen_sdk_stubs.py')
    lines.append('@SuppressWarnings({"unused", "WeakerAccess", "SameParameterValue"})')
    for kind, name in entries:
        if kind == 'interface':
            nested.append(name)
        elif kind == 'static-import':
            pass
    lines.append('public class %s {' % cls)
    lines.append('')
    for kind, value in entries:
        if kind == 'field':
            lines.append('    %s;' % value)
        elif kind == 'method':
            # Interface methods must have no body.
            lines.append('    %s { }' % value)
        elif kind == 'interface':
            pass
    # Nested callback interfaces.
    for name in nested:
        if name in INTERFACE_BODIES:
            lines.append('')
            lines.append('    public interface %s {' % name)
            for m in INTERFACE_BODIES[name]:
                lines.append('        %s;' % m)
            lines.append('    }')
        else:
            lines.append('')
            lines.append('    public interface %s { }' % name)
    lines.append('}')
    return '\n'.join(lines)


# Bodies for the callback interfaces the game code implements.
INTERFACE_BODIES = {
    'ILoginCallback': ['void onSuccess(String arg0)', 'void onFail(int arg0, String arg1)'],
    'IPayCallback': ['void onSuccess(String arg0)', 'void onFail(int arg0, String arg1)'],
    'GameExitCallback': ['void onExit()'],
    'MatrixCallBack': ['void onCallback(int arg0, java.util.HashMap<String, String> arg1)'],
    'UnipayPayResultListener': ['void PayResult(String arg0, int arg1, int arg2, String arg3)'],
    'UnipayCommandResultListener': ['void onResult(String arg0, int arg1, int arg2, Object arg3)'],
}


def main():
    count = 0
    for pkg, classes in STUBS.items():
        pkg_dir = os.path.join(OUT, *pkg.split('.'))
        os.makedirs(pkg_dir, exist_ok=True)
        for cls, entries in classes.items():
            nested = []
            src = render(pkg, cls, entries, nested)
            path = os.path.join(pkg_dir, cls + '.java')
            with open(path, 'w', encoding='utf-8') as fh:
                fh.write(src + '\n')
            count += 1
    print('generated %d SDK stub source files under %s' % (count, OUT))


if __name__ == '__main__':
    main()

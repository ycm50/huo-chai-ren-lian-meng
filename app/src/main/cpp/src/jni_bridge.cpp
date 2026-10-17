// ---------------------------------------------------------------------------
// JNI bridge for DiabloLOL (火柴人联盟)
//
// Reconstructed from the 45 `Java_*` symbols exported by the original
// libcocos2dcpp.so (Cocos2d-x 2.2.2, armeabi). Signatures are taken verbatim
// from the decompiled Java layer:
//
//   com/DBGame/Common/BLHelper.java        (14 natives)
//   com/DBGame/Common/OGWebView.java        ( 3 natives)
//   com/DBGame/pk/MatchVSHelper.java        (10 natives)
//   org/cocos2dx/lib/*.java                 (16 natives + JNI_OnLoad)
//
// The original bodies were compiled from the game's own C++ classes (770
// BL*/manager types under Classes/). Those are not recoverable from a stripped
// binary, so each entry point here forwards into the reconstructed engine
// surface (see include/) and is a faithful, ABI-correct stand-in: the Java
// side binds exactly as it did before.
// ---------------------------------------------------------------------------

#include <jni.h>
#include <android/log.h>
#include <cstring>
#include <string>

#include "Cocos2dxHelper.h"
#include "Cocos2dxRenderer.h"
#include "Cocos2dxAccelerometer.h"
#include "Cocos2dxBitmap.h"
#include "Cocos2dxETCLoader.h"
#include "BLGameScene.h"
#include "PlatformHelp.h"

#define LOG_TAG "cocos2dcpp"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,  LOG_TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,  LOG_TAG, __VA_ARGS__)

// ===========================================================================
// org.cocos2dx.lib.Cocos2dxHelper
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetApkPath(JNIEnv* env, jclass clazz, jstring apkPath)
{
    if (apkPath == nullptr) {
        LOGW("nativeSetApkPath: null path");
        return;
    }
    const char* path = env->GetStringUTFChars(apkPath, nullptr);
    if (path != nullptr) {
        cocos2d::Cocos2dxHelper::setApkPath(path);
        LOGI("nativeSetApkPath: %s", path);
        env->ReleaseStringUTFChars(apkPath, path);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetEditTextDialogResult(JNIEnv* env, jclass clazz, jbyteArray text)
{
    if (text == nullptr) {
        return;
    }
    jsize len = env->GetArrayLength(text);
    // The Java side passes UTF-8 bytes with a trailing NUL.
    if (len <= 0) {
        return;
    }
    std::string buffer(static_cast<size_t>(len), '\0');
    env->GetByteArrayRegion(text, 0, len, reinterpret_cast<jbyte*>(&buffer[0]));
    if (!buffer.empty() && buffer[buffer.size() - 1] == '\0') {
        buffer.resize(buffer.size() - 1);
    }
    cocos2d::Cocos2dxHelper::setEditTextDialogResult(buffer);
}

// ===========================================================================
// org.cocos2dx.lib.Cocos2dxRenderer
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(JNIEnv* env, jclass clazz, jint w, jint h)
{
    cocos2d::Cocos2dxRenderer::nativeInit(w, h);
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnPause(JNIEnv* env, jclass clazz)
{
    cocos2d::Cocos2dxRenderer::nativeOnPause();
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnResume(JNIEnv* env, jclass clazz)
{
    cocos2d::Cocos2dxRenderer::nativeOnResume();
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeRender(JNIEnv* env, jclass clazz)
{
    cocos2d::Cocos2dxRenderer::nativeRender();
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesBegin(JNIEnv* env, jclass clazz,
                                                          jint id, jfloat x, jfloat y)
{
    cocos2d::Cocos2dxRenderer::nativeTouchesBegin(id, x, y);
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesEnd(JNIEnv* env, jclass clazz,
                                                        jint id, jfloat x, jfloat y)
{
    cocos2d::Cocos2dxRenderer::nativeTouchesEnd(id, x, y);
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesMove(JNIEnv* env, jclass clazz,
                                                         jintArray ids, jfloatArray xs, jfloatArray ys)
{
    if (ids == nullptr || xs == nullptr || ys == nullptr) {
        return;
    }
    jsize n = env->GetArrayLength(ids);
    if (n <= 0) {
        return;
    }
    jint idsBuf[64];
    jfloat xsBuf[64];
    jfloat ysBuf[64];
    jsize count = n > 64 ? 64 : n;
    env->GetIntArrayRegion(ids, 0, count, idsBuf);
    env->GetFloatArrayRegion(xs, 0, count, xsBuf);
    env->GetFloatArrayRegion(ys, 0, count, ysBuf);
    for (jsize i = 0; i < count; ++i) {
        cocos2d::Cocos2dxRenderer::nativeTouchesMove(idsBuf[i], xsBuf[i], ysBuf[i]);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesCancel(JNIEnv* env, jclass clazz,
                                                           jintArray ids, jfloatArray xs, jfloatArray ys)
{
    if (ids == nullptr || xs == nullptr || ys == nullptr) {
        return;
    }
    jsize n = env->GetArrayLength(ids);
    if (n <= 0) {
        return;
    }
    jint idsBuf[64];
    jfloat xsBuf[64];
    jfloat ysBuf[64];
    jsize count = n > 64 ? 64 : n;
    env->GetIntArrayRegion(ids, 0, count, idsBuf);
    env->GetFloatArrayRegion(xs, 0, count, xsBuf);
    env->GetFloatArrayRegion(ys, 0, count, ysBuf);
    for (jsize i = 0; i < count; ++i) {
        cocos2d::Cocos2dxRenderer::nativeTouchesCancel(idsBuf[i], xsBuf[i], ysBuf[i]);
    }
}

extern "C" JNIEXPORT jboolean JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeKeyDown(JNIEnv* env, jclass clazz, jint keyCode)
{
    return cocos2d::Cocos2dxRenderer::nativeKeyDown(keyCode) ? JNI_TRUE : JNI_FALSE;
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInsertText(JNIEnv* env, jclass clazz, jstring text)
{
    const char* utf = (text != nullptr) ? env->GetStringUTFChars(text, nullptr) : nullptr;
    cocos2d::Cocos2dxRenderer::nativeInsertText(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(text, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeDeleteBackward(JNIEnv* env, jclass clazz)
{
    cocos2d::Cocos2dxRenderer::nativeDeleteBackward();
}

extern "C" JNIEXPORT jstring JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeGetContentText(JNIEnv* env, jclass clazz)
{
    return env->NewStringUTF(cocos2d::Cocos2dxRenderer::nativeGetContentText().c_str());
}

// ===========================================================================
// org.cocos2dx.lib.Cocos2dxAccelerometer
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxAccelerometer_onSensorChanged(JNIEnv* env, jclass clazz,
                                                            jfloat x, jfloat y, jfloat z, jlong timestamp)
{
    cocos2d::Cocos2dxAccelerometer::onSensorChanged(x, y, z, timestamp);
}

// ===========================================================================
// org.cocos2dx.lib.Cocos2dxBitmap
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxBitmap_nativeInitBitmapDC(JNIEnv* env, jclass clazz,
                                                        jint width, jint height, jbyteArray pixels)
{
    if (pixels == nullptr) {
        return;
    }
    jsize len = env->GetArrayLength(pixels);
    if (len <= 0) {
        return;
    }
    std::string buffer(static_cast<size_t>(len), '\0');
    env->GetByteArrayRegion(pixels, 0, len, reinterpret_cast<jbyte*>(&buffer[0]));
    cocos2d::Cocos2dxBitmap::nativeInitBitmapDC(width, height, buffer);
}

// ===========================================================================
// org.cocos2dx.lib.Cocos2dxETCLoader
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxETCLoader_nativeSetTextureInfo(JNIEnv* env, jclass clazz,
                                                             jint width, jint height,
                                                             jbyteArray data, jint length)
{
    if (data == nullptr) {
        return;
    }
    jsize len = env->GetArrayLength(data);
    if (len <= 0) {
        return;
    }
    std::string buffer(static_cast<size_t>(len), '\0');
    env->GetByteArrayRegion(data, 0, len, reinterpret_cast<jbyte*>(&buffer[0]));
    cocos2d::Cocos2dxETCLoader::nativeSetTextureInfo(width, height, buffer, length);
}

// ===========================================================================
// com.DBGame.Common.BLHelper   (game <-> native game logic)
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_buyComplete(JNIEnv* env, jclass clazz, jstring orderId, jint amount)
{
    const char* utf = (orderId != nullptr) ? env->GetStringUTFChars(orderId, nullptr) : nullptr;
    BLHelper_buyComplete(utf != nullptr ? utf : "", amount);
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(orderId, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_buyFailed(JNIEnv* env, jclass clazz)
{
    BLHelper_buyFailed();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_buySucess(JNIEnv* env, jclass clazz, jint amount)
{
    BLHelper_buySucess(amount);
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_closeShieldLayer(JNIEnv* env, jclass clazz)
{
    BLHelper_closeShieldLayer();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_connectSuccess(JNIEnv* env, jclass clazz)
{
    BLHelper_connectSuccess();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_exitGame(JNIEnv* env, jclass clazz)
{
    BLHelper_exitGame();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_onMonthlyContractPurchased(JNIEnv* env, jclass clazz, jboolean purchased)
{
    BLHelper_onMonthlyContractPurchased(purchased == JNI_TRUE);
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_receiveData(JNIEnv* env, jclass clazz, jstring data)
{
    const char* utf = (data != nullptr) ? env->GetStringUTFChars(data, nullptr) : nullptr;
    BLHelper_receiveData(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(data, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_savePicture(JNIEnv* env, jclass clazz)
{
    BLHelper_savePicture();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_setSoundEffectStatue(JNIEnv* env, jclass clazz, jboolean on)
{
    BLHelper_setSoundEffectStatue(on == JNI_TRUE);
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_showShieldLayer(JNIEnv* env, jclass clazz, jstring msg)
{
    const char* utf = (msg != nullptr) ? env->GetStringUTFChars(msg, nullptr) : nullptr;
    BLHelper_showShieldLayer(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(msg, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_toastMsg(JNIEnv* env, jclass clazz, jstring msg)
{
    const char* utf = (msg != nullptr) ? env->GetStringUTFChars(msg, nullptr) : nullptr;
    BLHelper_toastMsg(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(msg, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_webout(JNIEnv* env, jclass clazz)
{
    BLHelper_webout();
}

// Note: Java_com_DBGame_Common_BLHelper_sendReward is exported by the original
// .so but has no matching Java declaration in the reconstructed sources; it is
// kept for parity with the original binary.
extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_BLHelper_sendReward(JNIEnv* env, jclass clazz)
{
    BLHelper_sendReward();
}

// ===========================================================================
// com.DBGame.Common.OGWebView  (game web view bridge)
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_OGWebView_OnshouldOverrideUrlLoading(JNIEnv* env, jobject thiz, jstring url)
{
    const char* utf = (url != nullptr) ? env->GetStringUTFChars(url, nullptr) : nullptr;
    OGWebView_OnshouldOverrideUrlLoading(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(url, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_Common_OGWebView_quitWeb(JNIEnv* env, jobject thiz)
{
    OGWebView_quitWeb();
}

extern "C" JNIEXPORT jboolean JNICALL
Java_com_DBGame_Common_OGWebView_onRequestURL(JNIEnv* env, jclass clazz, jstring url)
{
    const char* utf = (url != nullptr) ? env->GetStringUTFChars(url, nullptr) : nullptr;
    bool handled = OGWebView_onRequestURL(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(url, utf);
    }
    return handled ? JNI_TRUE : JNI_FALSE;
}

// ===========================================================================
// com.DBGame.pk.MatchVSHelper  (match/VS networking bridge)
// ===========================================================================

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_loginFail(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_loginFail();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_loginSuccess(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_loginSuccess();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onDisconnect(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_onDisconnect();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onEnterLobby(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_onEnterLobby();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onExitLobby(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_onExitLobby();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onFriendDisconnect(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_onFriendDisconnect();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onGameReady(JNIEnv* env, jclass clazz)
{
    MatchVSHelper_onGameReady();
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_onGameStart(JNIEnv* env, jclass clazz, jboolean started)
{
    MatchVSHelper_onGameStart(started == JNI_TRUE);
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_receiveData(JNIEnv* env, jclass clazz, jstring data)
{
    const char* utf = (data != nullptr) ? env->GetStringUTFChars(data, nullptr) : nullptr;
    MatchVSHelper_receiveData(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(data, utf);
    }
}

extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_pk_MatchVSHelper_setInfo(JNIEnv* env, jclass clazz, jstring info)
{
    const char* utf = (info != nullptr) ? env->GetStringUTFChars(info, nullptr) : nullptr;
    MatchVSHelper_setInfo(utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(info, utf);
    }
}

// ===========================================================================
// Misc exports present in the original binary
// ===========================================================================

// Legacy bluetooth bridge (com.DBGame.bluetoothUtil.receive) - kept for parity.
extern "C" JNIEXPORT void JNICALL
Java_com_DBGame_bluetoothUtil_receive(JNIEnv* env, jclass clazz, jstring data)
{
    const char* utf = (data != nullptr) ? env->GetStringUTFChars(data, nullptr) : nullptr;
    LOGD("bluetoothUtil.receive: %s", utf != nullptr ? utf : "");
    if (utf != nullptr) {
        env->ReleaseStringUTFChars(data, utf);
    }
}

// Leftover symbol from the engine vendor's earlier title (infinitestairs);
// still exported by the original libcocos2dcpp.so.
extern "C" JNIEXPORT void JNICALL
Java_cn_easymobi_game_infinitestairs_Tzdf_getCLog(JNIEnv* env, jclass clazz)
{
    LOGD("Tzdf.getCLog");
}

// ===========================================================================
// Library entry point
// ===========================================================================

extern "C" jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env = nullptr;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_4) != JNI_OK) {
        LOGW("JNI_OnLoad: GetEnv failed");
        return JNI_ERR;
    }
    LOGI("JNI_OnLoad: cocos2dcpp reconstructed bridge loaded");
    return JNI_VERSION_1_4;
}

extern "C" void JNI_OnUnload(JavaVM* vm, void* reserved)
{
    LOGI("JNI_OnUnload");
}

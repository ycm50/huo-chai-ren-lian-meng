// ---------------------------------------------------------------------------
// Reconstructed native implementation for DiabloLOL (火柴人联盟)
//
// This file provides the state and behaviour behind the JNI bridge. Every
// entry point the original libcocos2dcpp.so exported is present, with the
// bookkeeping the engine layer needs. The game's own scene/gameplay logic
// (770 BL*/manager types such as BLGameScene, BLMapScene, BLRole) lived in the
// original Classes/ tree and cannot be recovered from a stripped binary; what
// is reconstructed here is the platform/engine boundary those classes sat on.
// ---------------------------------------------------------------------------

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

// ===========================================================================
// cocos2d::Cocos2dxHelper
// ===========================================================================

namespace cocos2d {

std::string Cocos2dxHelper::s_apkPath;
std::string Cocos2dxHelper::s_editTextDialogResult;

void Cocos2dxHelper::setApkPath(const std::string& apkPath)
{
    s_apkPath = apkPath;
    // The engine opens assets relative to the APK when running unpackaged.
    LOGI("Cocos2dxHelper::setApkPath -> %s", apkPath.c_str());
}

void Cocos2dxHelper::setEditTextDialogResult(const std::string& text)
{
    s_editTextDialogResult = text;
    LOGD("Cocos2dxHelper::setEditTextDialogResult -> %s", text.c_str());
}

const std::string& Cocos2dxHelper::getApkPath()
{
    return s_apkPath;
}

const std::string& Cocos2dxHelper::getEditTextDialogResult()
{
    return s_editTextDialogResult;
}

} // namespace cocos2d

// ===========================================================================
// cocos2d::Cocos2dxRenderer
// ===========================================================================

namespace cocos2d {

int Cocos2dxRenderer::s_screenWidth = 0;
int Cocos2dxRenderer::s_screenHeight = 0;
std::string Cocos2dxRenderer::s_contentText;

void Cocos2dxRenderer::nativeInit(int width, int height)
{
    s_screenWidth = width;
    s_screenHeight = height;
    LOGI("Cocos2dxRenderer::nativeInit %dx%d", width, height);
}

void Cocos2dxRenderer::nativeOnPause()
{
    LOGD("Cocos2dxRenderer::nativeOnPause");
}

void Cocos2dxRenderer::nativeOnResume()
{
    LOGD("Cocos2dxRenderer::nativeOnResume");
}

void Cocos2dxRenderer::nativeRender()
{
    // The original drove CCEGLView::swapBuffers via CCDirector::drawScene.
}

void Cocos2dxRenderer::nativeTouchesBegin(int id, float x, float y)
{
    LOGD("touch begin id=%d (%.1f, %.1f)", id, x, y);
}

void Cocos2dxRenderer::nativeTouchesEnd(int id, float x, float y)
{
    LOGD("touch end id=%d (%.1f, %.1f)", id, x, y);
}

void Cocos2dxRenderer::nativeTouchesMove(int id, float x, float y)
{
    LOGD("touch move id=%d (%.1f, %.1f)", id, x, y);
}

void Cocos2dxRenderer::nativeTouchesCancel(int id, float x, float y)
{
    LOGD("touch cancel id=%d (%.1f, %.1f)", id, x, y);
}

bool Cocos2dxRenderer::nativeKeyDown(int keyCode)
{
    LOGD("key down %d", keyCode);
    // The engine consumed volume/back keys; report unhandled by default.
    return false;
}

void Cocos2dxRenderer::nativeInsertText(const std::string& text)
{
    s_contentText += text;
}

void Cocos2dxRenderer::nativeDeleteBackward()
{
    if (!s_contentText.empty()) {
        s_contentText.resize(s_contentText.size() - 1);
    }
}

std::string Cocos2dxRenderer::nativeGetContentText()
{
    return s_contentText;
}

int Cocos2dxRenderer::getScreenWidth()
{
    return s_screenWidth;
}

int Cocos2dxRenderer::getScreenHeight()
{
    return s_screenHeight;
}

} // namespace cocos2d

// ===========================================================================
// cocos2d::Cocos2dxAccelerometer
// ===========================================================================

namespace cocos2d {

void Cocos2dxAccelerometer::onSensorChanged(float x, float y, float z, long long timestamp)
{
    (void)x; (void)y; (void)z; (void)timestamp;
    // The original queued these and dispatched CCAcceleration to the delegate
    // on the GL thread (nativeSetAccelerometerInterval / CCAccelerometer).
}

} // namespace cocos2d

// ===========================================================================
// cocos2d::Cocos2dxBitmap
// ===========================================================================

namespace cocos2d {

bool Cocos2dxBitmap::s_hasBitmap = false;
int Cocos2dxBitmap::s_width = 0;
int Cocos2dxBitmap::s_height = 0;

void Cocos2dxBitmap::nativeInitBitmapDC(int width, int height, const std::string& pixels)
{
    s_width = width;
    s_height = height;
    s_hasBitmap = true;
    LOGD("Cocos2dxBitmap::nativeInitBitmapDC %dx%d (%u bytes)",
         width, height, static_cast<unsigned>(pixels.size()));
}

bool Cocos2dxBitmap::hasBitmap()
{
    return s_hasBitmap;
}

} // namespace cocos2d

// ===========================================================================
// cocos2d::Cocos2dxETCLoader
// ===========================================================================

namespace cocos2d {

void Cocos2dxETCLoader::nativeSetTextureInfo(int width, int height,
                                             const std::string& data, int length)
{
    LOGD("Cocos2dxETCLoader::nativeSetTextureInfo %dx%d len=%d (payload %u)",
         width, height, length, static_cast<unsigned>(data.size()));
    // The original registered the decoded RGBA block with CCTextureCache via
    // CCTextureETC::initWithImageData (source: CCTextureETC.cpp).
}

} // namespace cocos2d

// ===========================================================================
// platform::PlatformHelp
// ===========================================================================

namespace platform {

namespace {
    std::string g_shieldMessage;
    std::string g_lastOrderId;
    bool g_soundEffectEnabled = true;
    bool g_connected = false;
    bool g_monthlyContract = false;
}

const char* PlatformHelp::platformName()
{
    // The shipped build targeted the 融合 (merged) channel; see
    // assets/CHANNEL/channel.xml in the original APK.
    return "RongHe";
}

void PlatformHelp::setShieldMessage(const std::string& msg) { g_shieldMessage = msg; }

const std::string& PlatformHelp::getShieldMessage() { return g_shieldMessage; }

void PlatformHelp::setSoundEffectEnabled(bool on) { g_soundEffectEnabled = on; }

bool PlatformHelp::isSoundEffectEnabled() { return g_soundEffectEnabled; }

bool PlatformHelp::isConnected() { return g_connected; }

void PlatformHelp::setConnected(bool connected) { g_connected = connected; }

bool PlatformHelp::hasMonthlyContract() { return g_monthlyContract; }

void PlatformHelp::setMonthlyContract(bool active) { g_monthlyContract = active; }

const std::string& PlatformHelp::lastOrderId() { return g_lastOrderId; }

void PlatformHelp::setLastOrderId(const std::string& orderId) { g_lastOrderId = orderId; }

void PlatformHelp::dispatchData(const std::string& data)
{
    LOGD("PlatformHelp::dispatchData (%u bytes)", static_cast<unsigned>(data.size()));
}

} // namespace platform

// ===========================================================================
// com.DBGame.Common.BLHelper
// ===========================================================================

void BLHelper_buyComplete(const std::string& orderId, int amount)
{
    platform::PlatformHelp::setLastOrderId(orderId);
    LOGI("BLHelper.buyComplete order=%s amount=%d", orderId.c_str(), amount);
}

void BLHelper_buyFailed()
{
    LOGI("BLHelper.buyFailed");
}

void BLHelper_buySucess(int amount)
{
    LOGI("BLHelper.buySucess amount=%d", amount);
}

void BLHelper_closeShieldLayer()
{
    platform::PlatformHelp::setShieldMessage("");
}

void BLHelper_connectSuccess()
{
    platform::PlatformHelp::setConnected(true);
    LOGI("BLHelper.connectSuccess");
}

void BLHelper_exitGame()
{
    LOGI("BLHelper.exitGame");
}

void BLHelper_onMonthlyContractPurchased(bool purchased)
{
    platform::PlatformHelp::setMonthlyContract(purchased);
    LOGI("BLHelper.onMonthlyContractPurchased=%d", purchased ? 1 : 0);
}

void BLHelper_receiveData(const std::string& data)
{
    platform::PlatformHelp::dispatchData(data);
}

void BLHelper_savePicture()
{
    LOGI("BLHelper.savePicture");
}

void BLHelper_setSoundEffectStatue(bool on)
{
    platform::PlatformHelp::setSoundEffectEnabled(on);
}

void BLHelper_showShieldLayer(const std::string& msg)
{
    platform::PlatformHelp::setShieldMessage(msg);
    LOGD("BLHelper.showShieldLayer '%s'", msg.c_str());
}

void BLHelper_toastMsg(const std::string& msg)
{
    LOGD("BLHelper.toastMsg '%s'", msg.c_str());
}

void BLHelper_webout()
{
    LOGD("BLHelper.webout");
}

void BLHelper_sendReward()
{
    LOGD("BLHelper.sendReward");
}

// ===========================================================================
// com.DBGame.Common.OGWebView
// ===========================================================================

void OGWebView_OnshouldOverrideUrlLoading(const std::string& url)
{
    LOGD("OGWebView.OnshouldOverrideUrlLoading '%s'", url.c_str());
}

void OGWebView_quitWeb()
{
    LOGD("OGWebView.quitWeb");
}

bool OGWebView_onRequestURL(const std::string& url)
{
    LOGD("OGWebView.onRequestURL '%s'", url.c_str());
    // The original let the game intercept its own scheme; decline by default.
    return false;
}

// ===========================================================================
// com.DBGame.pk.MatchVSHelper
// ===========================================================================

void MatchVSHelper_loginFail()          { LOGD("MatchVSHelper.loginFail"); }
void MatchVSHelper_loginSuccess()       { LOGD("MatchVSHelper.loginSuccess"); }
void MatchVSHelper_onDisconnect()       { LOGD("MatchVSHelper.onDisconnect"); }
void MatchVSHelper_onEnterLobby()       { LOGD("MatchVSHelper.onEnterLobby"); }
void MatchVSHelper_onExitLobby()        { LOGD("MatchVSHelper.onExitLobby"); }
void MatchVSHelper_onFriendDisconnect() { LOGD("MatchVSHelper.onFriendDisconnect"); }
void MatchVSHelper_onGameReady()        { LOGD("MatchVSHelper.onGameReady"); }

void MatchVSHelper_onGameStart(bool started)
{
    LOGD("MatchVSHelper.onGameStart=%d", started ? 1 : 0);
}

void MatchVSHelper_receiveData(const std::string& data)
{
    LOGD("MatchVSHelper.receiveData (%u bytes)", static_cast<unsigned>(data.size()));
}

void MatchVSHelper_setInfo(const std::string& info)
{
    LOGD("MatchVSHelper.setInfo '%s'", info.c_str());
}

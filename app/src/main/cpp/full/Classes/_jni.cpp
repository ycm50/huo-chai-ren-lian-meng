// 自动生成：缺失的 JNI 入口（引擎未提供的）
// 函数体为占位；原反编译体见 work/full-src/jni_decompiled.cpp
#include <jni.h>
#include "JniHelper.h"
#include "cocos2d.h"
#include "AppDelegate.h"
#include "CCEGLView.h"

using namespace cocos2d;

// ===================================================================
// 2026-10-15: 补上缺失的 JNI_OnLoad
//
// 原版 .so: 0x41391d  JNI_OnLoad  (Thumb, 24 字节)
//   push {r4,lr}; mov r4,r0; bl setJavaVM; mov r0,r4; bl setJavaVM
//   ldr r0,=0x00010004; pop {r4,pc}       ← 返回 JNI_VERSION_1_4
//
// 缺失后果（实测 tombstone_03，com.DBGame.DiabloLOL pid 25412）:
//   Java org.cocos2dx.lib.Cocos2dxHelper.init
//     -> nativeSetApkPath
//     -> cocos2d::JniHelper::jstring2string
//     -> getEnv()  ← m_psJavaVM 横为 NULL，在 NULL 上取 GetEnv()
//     -> signal 11 (SIGSEGV), fault addr 0x00000000
//
// setJavaVM 定义在
//   cocos2d/cocos2dx/platform/android/jni/JniHelper.cpp:201
// 它被 -O2 内联掉，所以 .so 里看不到该符号，但行为正确。
// ===================================================================
extern "C" jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    (void)reserved;
    cocos2d::JniHelper::setJavaVM(vm);
    return JNI_VERSION_1_4;
}

extern "C" void Java_com_DBGame_Common_BLHelper_exitGame(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_sendReward(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_setSoundEffectStatue(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_buyFailed(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_closeShieldLayer(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_showShieldLayer(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_webout(...) { }
// ===================================================================
// 2026-10-15: nativeInit 原为空桩 → 从原版反汇编复原
//
// 原版 .so: 0x413999  Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit
//   (在 0x41xxxx 游戏代码区, 非引擎区 —— 标准 cocos2d-x
//    游戏侧 main.cpp, 所以引擎里未提供, 生成时被漏掉)
//
// 反汇编行为:
//   if (!CCDirector::sharedDirector()->getOpenGLView()) {
//       CCEGLView *view = CCEGLView::sharedOpenGLView();
//       view->setFrameSize(w, h);        // virtual, 转 float
//       new AppDelegate();
//       CCApplication::sharedApplication()->run();
//   } else {
//       ccGLInvalidateStateCache();
//       CCShaderCache::sharedShaderCache()->reloadDefaultShaders();
//       ccDrawInit();
//       CCTextureCache::reloadAllTextures();
//       CCNotificationCenter::sharedNotificationCenter()
//           ->postNotification(EVENT_COME_TO_FOREGROUND, NULL);
//       CCDirector::sharedDirector()->setGLDefaultValues();
//   }
//
// 空桩后果: GLView 永远不创建, AppDelegate 永远不 run
//   → 黑屏 / Activity top resumed state loss timeout
// ===================================================================
extern "C" JNIEXPORT void JNICALL
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(JNIEnv* env, jobject thiz, jint w, jint h)
{
    (void)env; (void)thiz;
    if (!CCDirector::sharedDirector()->getOpenGLView())
    {
        CCEGLView *view = CCEGLView::sharedOpenGLView();
        view->setFrameSize((float)w, (float)h);

        AppDelegate *pAppDelegate = new AppDelegate();
        CCApplication::sharedApplication()->run();
        (void)pAppDelegate;
    }
    else
    {
        ccGLInvalidateStateCache();
        CCShaderCache::sharedShaderCache()->reloadDefaultShaders();
        ccDrawInit();
        CCTextureCache::reloadAllTextures();
        CCNotificationCenter::sharedNotificationCenter()
            ->postNotification(EVENT_COME_TO_FOREGROUND, NULL);
        CCDirector::sharedDirector()->setGLDefaultValues();
    }
}
extern "C" void Java_com_DBGame_bluetoothUtil_receive(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_connectSuccess(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_receiveData(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_toastMsg(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_savePicture(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_loginSuccess(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_loginFail(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onEnterLobby(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onExitLobby(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onGameReady(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onFriendDisconnect(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onDisconnect(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_onGameStart(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_receiveData(...) { }
extern "C" void Java_com_DBGame_pk_MatchVSHelper_setInfo(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_onMonthlyContractPurchased(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_buyComplete(...) { }
extern "C" void Java_com_DBGame_Common_BLHelper_buySucess(...) { }
extern "C" void Java_com_DBGame_Common_OGWebView_quitWeb(...) { }
extern "C" void Java_com_DBGame_Common_OGWebView_OnshouldOverrideUrlLoading(...) { }
extern "C" void Java_cn_easymobi_game_infinitestairs_Tzdf_getCLog(...) { }

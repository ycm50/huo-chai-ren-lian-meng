#include "BLMainQuiteSaveDataPresenter.h"
#include "ADManager.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainQuiteSaveDataView.h"
#include "BLUpAndDownUtils.h"
#include "CCJson.h"
#include "DebugLocalSys.h"
#include "MainPauseCheckData.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f39b0;
extern "C" unsigned long UNK_005f39d0;
extern "C" unsigned long UNK_005f3a14;
extern "C" unsigned long UNK_005f3a3c;
extern "C" unsigned long UNK_005f3a50;
extern "C" unsigned long UNK_005f3a6c;
extern "C" unsigned long UNK_005f3aba;
extern "C" unsigned long UNK_005f3b24;
extern "C" unsigned long UNK_005f3b48;
extern "C" unsigned long UNK_005f3b5e;
extern "C" unsigned long UNK_005f3b92;
extern "C" unsigned long UNK_005f3c2e;
extern "C" unsigned long UNK_005f3c4e;
extern "C" unsigned long UNK_005f3c6c;
extern "C" unsigned long UNK_005f3c9a;
extern "C" unsigned long UNK_005f3cb8;
extern "C" unsigned long UNK_005f3cde;
extern "C" unsigned long UNK_005f3d08;
extern "C" unsigned long UNK_005f3d4c;
extern "C" unsigned long UNK_005f3d7a;
extern "C" unsigned long UNK_005f3d84;
extern "C" unsigned long UNK_005f3d90;
extern "C" unsigned long UNK_005f3dbe;
extern "C" unsigned long UNK_005f3dd8;
extern "C" unsigned long UNK_005f3df2;
extern "C" unsigned long UNK_005f3e4c;
extern "C" unsigned long UNK_005f3e88;
extern "C" unsigned long UNK_005f3ed2;
extern "C" unsigned long UNK_005f3f30;
extern "C" unsigned long UNK_005f3f3e;
extern "C" unsigned long UNK_005f3f4e;
extern "C" unsigned long UNK_005f4000;
extern "C" unsigned long UNK_005f4042;
extern "C" unsigned long UNK_005f40b6;
extern "C" unsigned long UNK_005f412c;
extern "C" unsigned long UNK_005f4150;
extern "C" unsigned long UNK_005f4190;
extern "C" unsigned long UNK_005f419c;
extern "C" unsigned long UNK_005f41ae;
extern "C" unsigned long UNK_005f41c0;
extern "C" unsigned long UNK_005f41d2;
extern "C" unsigned long UNK_005f41dc;
extern "C" unsigned long UNK_005f41f0;
extern "C" unsigned long UNK_005f4230;
extern "C" unsigned long UNK_005f4268;
extern "C" unsigned long UNK_005f42c4;
extern "C" unsigned long UNK_005f42d4;
extern "C" unsigned long UNK_005f42e2;
extern "C" unsigned long UNK_005f42f8;
extern "C" unsigned long UNK_005f4350;
extern "C" unsigned long UNK_005f438c;
extern "C" unsigned long UNK_005f43da;
extern "C" unsigned long UNK_005f43f8;
extern "C" unsigned long UNK_005f4406;
extern "C" unsigned long UNK_005f4416;
extern "C" unsigned long UNK_005f4426;
extern "C" unsigned long UNK_005f44de;
extern "C" unsigned long UNK_005f44e2;
extern "C" unsigned long UNK_005f44e8;
extern "C" unsigned long UNK_005f4510;
extern "C" unsigned long UNK_005f46a0;
extern "C" unsigned long UNK_005f46e8;
extern "C" unsigned long UNK_005f46f8;
extern "C" unsigned long _UNK_005f3a00;
extern "C" unsigned long _UNK_005f3a04;
extern "C" unsigned long _UNK_005f3a18;
extern "C" unsigned long _UNK_005f3a40;
extern "C" unsigned long _UNK_005f3a60;
extern "C" unsigned long _UNK_005f3b10;
extern "C" unsigned long _UNK_005f3b14;
extern "C" unsigned long _UNK_005f3b28;
extern "C" unsigned long _UNK_005f3b4c;
extern "C" unsigned long _UNK_005f3bbc;
extern "C" unsigned long _UNK_005f3bc0;
extern "C" unsigned long _UNK_005f3c80;
extern "C" unsigned long _UNK_005f3c84;
extern "C" unsigned long _UNK_005f3c88;
extern "C" unsigned long _UNK_005f3f94;
extern "C" unsigned long _UNK_005f3f98;
extern "C" unsigned long _UNK_005f3f9c;
extern "C" unsigned long _UNK_005f3fa0;
extern "C" unsigned long _UNK_005f3fa4;
extern "C" unsigned long _UNK_005f3fa8;
extern "C" unsigned long _UNK_005f3fac;
extern "C" unsigned long _UNK_005f3fb0;
extern "C" unsigned long _UNK_005f3fb4;
extern "C" unsigned long _UNK_005f3fb8;
extern "C" unsigned long _UNK_005f3fbc;
extern "C" unsigned long _UNK_005f3fc0;
extern "C" unsigned long _UNK_005f3fc4;
extern "C" unsigned long _UNK_005f3fc8;
extern "C" unsigned long _UNK_005f3fcc;
extern "C" unsigned long _UNK_005f3fd0;
extern "C" unsigned long _UNK_005f3fd4;
extern "C" unsigned long _UNK_005f3fd8;
extern "C" unsigned long _UNK_005f3fdc;
extern "C" unsigned long _UNK_005f3fe0;
extern "C" unsigned long _UNK_005f3fe4;
extern "C" unsigned long _UNK_005f3fe8;
extern "C" unsigned long _UNK_005f3fec;
extern "C" unsigned long _UNK_005f4114;
extern "C" unsigned long _UNK_005f4118;
extern "C" unsigned long _UNK_005f411c;
extern "C" unsigned long _UNK_005f4434;
extern "C" unsigned long _UNK_005f4438;
extern "C" unsigned long _UNK_005f443c;
extern "C" unsigned long _UNK_005f4440;
extern "C" unsigned long _UNK_005f4444;
extern "C" unsigned long _UNK_005f4448;
extern "C" unsigned long _UNK_005f444c;
extern "C" unsigned long _UNK_005f4450;
extern "C" unsigned long _UNK_005f4454;
extern "C" unsigned long _UNK_005f4458;
extern "C" unsigned long _UNK_005f445c;
extern "C" unsigned long _UNK_005f4460;
extern "C" unsigned long _UNK_005f4464;
extern "C" unsigned long _UNK_005f4468;
extern "C" unsigned long _UNK_005f446c;
extern "C" unsigned long _UNK_005f4470;
extern "C" unsigned long _UNK_005f4474;
extern "C" unsigned long _UNK_005f4478;
extern "C" unsigned long _UNK_005f447c;
extern "C" unsigned long _UNK_005f4480;
extern "C" unsigned long _UNK_005f4484;
extern "C" unsigned long _UNK_005f4488;
extern "C" unsigned long _UNK_005f448c;
extern "C" unsigned long _UNK_005f4490;
extern "C" unsigned long _UNK_005f4494;
extern "C" unsigned long _UNK_005f4498;
extern "C" unsigned long _UNK_005f449c;
extern "C" unsigned long _UNK_005f44a0;
extern "C" unsigned long _UNK_005f4680;
extern "C" unsigned long _UNK_005f4684;
extern "C" unsigned long _UNK_005f4688;
extern "C" unsigned long _UNK_005f468c;
extern "C" unsigned long _UNK_005f4690;
extern "C" unsigned long _UNK_005f4758;
extern "C" unsigned long _UNK_005f475c;
extern "C" unsigned long _UNK_005f4760;
extern "C" unsigned long g_005f39b0;
extern "C" unsigned long g_005f39d0;
extern "C" unsigned long g_005f3a00;
extern "C" unsigned long g_005f3a04;
extern "C" unsigned long g_005f3a14;
extern "C" unsigned long g_005f3a18;
extern "C" unsigned long g_005f3a3c;
extern "C" unsigned long g_005f3a40;
extern "C" unsigned long g_005f3a50;
extern "C" unsigned long g_005f3a60;
extern "C" unsigned long g_005f3a6c;
extern "C" unsigned long g_005f3aba;
extern "C" unsigned long g_005f3b10;
extern "C" unsigned long g_005f3b14;
extern "C" unsigned long g_005f3b24;
extern "C" unsigned long g_005f3b28;
extern "C" unsigned long g_005f3b48;
extern "C" unsigned long g_005f3b4c;
extern "C" unsigned long g_005f3b5e;
extern "C" unsigned long g_005f3b92;
extern "C" unsigned long g_005f3bbc;
extern "C" unsigned long g_005f3bc0;
extern "C" unsigned long g_005f3c2e;
extern "C" unsigned long g_005f3c4e;
extern "C" unsigned long g_005f3c6c;
extern "C" unsigned long g_005f3c80;
extern "C" unsigned long g_005f3c84;
extern "C" unsigned long g_005f3c88;
extern "C" unsigned long g_005f3c9a;
extern "C" unsigned long g_005f3cb8;
extern "C" unsigned long g_005f3cde;
extern "C" unsigned long g_005f3d08;
extern "C" unsigned long g_005f3d4c;
extern "C" unsigned long g_005f3d7a;
extern "C" unsigned long g_005f3d84;
extern "C" unsigned long g_005f3d90;
extern "C" unsigned long g_005f3dbe;
extern "C" unsigned long g_005f3dd8;
extern "C" unsigned long g_005f3df2;
extern "C" unsigned long g_005f3e4c;
extern "C" unsigned long g_005f3e88;
extern "C" unsigned long g_005f3ed2;
extern "C" unsigned long g_005f3f30;
extern "C" unsigned long g_005f3f3e;
extern "C" unsigned long g_005f3f4e;
extern "C" unsigned long g_005f3f94;
extern "C" unsigned long g_005f3f98;
extern "C" unsigned long g_005f3f9c;
extern "C" unsigned long g_005f3fa0;
extern "C" unsigned long g_005f3fa4;
extern "C" unsigned long g_005f3fa8;
extern "C" unsigned long g_005f3fac;
extern "C" unsigned long g_005f3fb0;
extern "C" unsigned long g_005f3fb4;
extern "C" unsigned long g_005f3fb8;
extern "C" unsigned long g_005f3fbc;
extern "C" unsigned long g_005f3fc0;
extern "C" unsigned long g_005f3fc4;
extern "C" unsigned long g_005f3fc8;
extern "C" unsigned long g_005f3fcc;
extern "C" unsigned long g_005f3fd0;
extern "C" unsigned long g_005f3fd4;
extern "C" unsigned long g_005f3fd8;
extern "C" unsigned long g_005f3fdc;
extern "C" unsigned long g_005f3fe0;
extern "C" unsigned long g_005f3fe4;
extern "C" unsigned long g_005f3fe8;
extern "C" unsigned long g_005f3fec;
extern "C" unsigned long g_005f4000;
extern "C" unsigned long g_005f4042;
extern "C" unsigned long g_005f40b6;
extern "C" unsigned long g_005f4114;
extern "C" unsigned long g_005f4118;
extern "C" unsigned long g_005f411c;
extern "C" unsigned long g_005f412c;
extern "C" unsigned long g_005f4150;
extern "C" unsigned long g_005f4190;
extern "C" unsigned long g_005f419c;
extern "C" unsigned long g_005f41ae;
extern "C" unsigned long g_005f41c0;
extern "C" unsigned long g_005f41d2;
extern "C" unsigned long g_005f41dc;
extern "C" unsigned long g_005f41f0;
extern "C" unsigned long g_005f4230;
extern "C" unsigned long g_005f4268;
extern "C" unsigned long g_005f42c4;
extern "C" unsigned long g_005f42d4;
extern "C" unsigned long g_005f42e2;
extern "C" unsigned long g_005f42f8;
extern "C" unsigned long g_005f4350;
extern "C" unsigned long g_005f438c;
extern "C" unsigned long g_005f43da;
extern "C" unsigned long g_005f43f8;
extern "C" unsigned long g_005f4406;
extern "C" unsigned long g_005f4416;
extern "C" unsigned long g_005f4426;
extern "C" unsigned long g_005f4434;
extern "C" unsigned long g_005f4438;
extern "C" unsigned long g_005f443c;
extern "C" unsigned long g_005f4440;
extern "C" unsigned long g_005f4444;
extern "C" unsigned long g_005f4448;
extern "C" unsigned long g_005f444c;
extern "C" unsigned long g_005f4450;
extern "C" unsigned long g_005f4454;
extern "C" unsigned long g_005f4458;
extern "C" unsigned long g_005f445c;
extern "C" unsigned long g_005f4460;
extern "C" unsigned long g_005f4464;
extern "C" unsigned long g_005f4468;
extern "C" unsigned long g_005f446c;
extern "C" unsigned long g_005f4470;
extern "C" unsigned long g_005f4474;
extern "C" unsigned long g_005f4478;
extern "C" unsigned long g_005f447c;
extern "C" unsigned long g_005f4480;
extern "C" unsigned long g_005f4484;
extern "C" unsigned long g_005f4488;
extern "C" unsigned long g_005f448c;
extern "C" unsigned long g_005f4490;
extern "C" unsigned long g_005f4494;
extern "C" unsigned long g_005f4498;
extern "C" unsigned long g_005f449c;
extern "C" unsigned long g_005f44a0;
extern "C" unsigned long g_005f44de;
extern "C" unsigned long g_005f44e2;
extern "C" unsigned long g_005f44e8;
extern "C" unsigned long g_005f4510;
extern "C" unsigned long g_005f4680;
extern "C" unsigned long g_005f4684;
extern "C" unsigned long g_005f4688;
extern "C" unsigned long g_005f468c;
extern "C" unsigned long g_005f4690;
extern "C" unsigned long g_005f46a0;
extern "C" unsigned long g_005f46e8;
extern "C" unsigned long g_005f46f8;
extern "C" unsigned long g_005f4758;
extern "C" unsigned long g_005f475c;
extern "C" unsigned long g_005f4760;
bool BLMainQuiteSaveDataPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainQuiteSaveDataPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainQuiteSaveDataPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainQuiteSaveDataPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainQuiteSaveDataPresenter::tick(float p1)
{
  return;
}

BLMainQuiteSaveDataPresenter::~BLMainQuiteSaveDataPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f39b0 + g_005f3a00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x74;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f39d0 + g_005f3a04,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainQuiteSaveDataPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005f3a50 + g_005f3a60);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8f);
  return;
}


void BLMainQuiteSaveDataPresenter::onCheckFailed(MainPauseCheckData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x5b);
  return;
}

BLMainQuiteSaveDataPresenter::BLMainQuiteSaveDataPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005f3b5e + g_005f3bbc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x74;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f3b92 + g_005f3bc0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainQuiteSaveDataPresenter::create(BLMainQuiteSaveDataView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainQuiteSaveDataPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainQuiteSaveDataPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((ADManager *)this)->getInstance());
  ((ADManager *)uVar1)->checkLenovoAD(4);
  return;
}

void BLMainQuiteSaveDataPresenter::updateInfo()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLMainQuiteSaveDataPresenter::onCheckSuccess(MainPauseCheckData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainQuiteSaveDataPresenter::initWithView(BLMainQuiteSaveDataView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainQuiteSaveDataView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005f3c2e + g_005f3c80),0,0x20);
  piVar1 = (int *)((BLMainQuiteSaveDataView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005f3c4e + g_005f3c84),0,0x20);
  piVar1 = (int *)((BLMainQuiteSaveDataView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnCancel();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005f3c6c + g_005f3c88),0,0x20);
  BLMainQuiteSaveDataPresenter::updateInfo();
  return;
}

void BLMainQuiteSaveDataPresenter::onCallBackZhuCe(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainQuiteSaveDataPresenter::onOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainQuiteSaveDataPresenter::onZhuCeXinxiCallBack(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainQuiteSaveDataPresenter::onCancel(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

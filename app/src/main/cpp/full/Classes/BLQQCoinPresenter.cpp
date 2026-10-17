#include "BLQQCoinPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLQQCoinView.h"
#include "DataManager.h"
#include "InputBox.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079ec14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004de074;
extern "C" unsigned long UNK_004de08c;
extern "C" unsigned long UNK_004de0a4;
extern "C" unsigned long UNK_004de0bc;
extern "C" unsigned long UNK_004de118;
extern "C" unsigned long UNK_004de13c;
extern "C" unsigned long UNK_004de180;
extern "C" unsigned long UNK_004de1a8;
extern "C" unsigned long UNK_004de1b8;
extern "C" unsigned long UNK_004de1f8;
extern "C" unsigned long UNK_004de260;
extern "C" unsigned long UNK_004de26e;
extern "C" unsigned long UNK_004de2d2;
extern "C" unsigned long UNK_004de2e8;
extern "C" unsigned long UNK_004de302;
extern "C" unsigned long UNK_004de338;
extern "C" unsigned long UNK_004de3a0;
extern "C" unsigned long UNK_004de3e6;
extern "C" unsigned long UNK_004de43c;
extern "C" unsigned long UNK_004de44c;
extern "C" unsigned long UNK_004de46a;
extern "C" unsigned long UNK_004de486;
extern "C" unsigned long UNK_004de4c0;
extern "C" unsigned long UNK_004de4d0;
extern "C" unsigned long UNK_004de4e4;
extern "C" unsigned long UNK_004de4e8;
extern "C" unsigned long UNK_004de50e;
extern "C" unsigned long _UNK_004de078;
extern "C" unsigned long _UNK_004de090;
extern "C" unsigned long _UNK_004de0a8;
extern "C" unsigned long _UNK_004de0c0;
extern "C" unsigned long _UNK_004de16c;
extern "C" unsigned long _UNK_004de170;
extern "C" unsigned long _UNK_004de184;
extern "C" unsigned long _UNK_004de1ac;
extern "C" unsigned long _UNK_004de1c8;
extern "C" unsigned long _UNK_004de270;
extern "C" unsigned long _UNK_004de274;
extern "C" unsigned long _UNK_004de278;
extern "C" unsigned long _UNK_004de2ec;
extern "C" unsigned long _UNK_004de2f0;
extern "C" unsigned long _UNK_004de364;
extern "C" unsigned long _UNK_004de368;
extern "C" unsigned long _UNK_004de3c0;
extern "C" unsigned long _UNK_004de51c;
extern "C" unsigned long _UNK_004de520;
extern "C" unsigned long _UNK_004de524;
extern "C" unsigned long _UNK_004de528;
extern "C" unsigned long _UNK_004de52c;
extern "C" unsigned long _UNK_004de530;
extern "C" unsigned long _UNK_004de534;
extern "C" unsigned long _UNK_004de538;
extern "C" unsigned long _UNK_004de53c;
extern "C" unsigned long _UNK_004de540;
extern "C" unsigned long g_004de074;
extern "C" unsigned long g_004de078;
extern "C" unsigned long g_004de08c;
extern "C" unsigned long g_004de090;
extern "C" unsigned long g_004de0a4;
extern "C" unsigned long g_004de0a8;
extern "C" unsigned long g_004de0bc;
extern "C" unsigned long g_004de0c0;
extern "C" unsigned long g_004de118;
extern "C" unsigned long g_004de13c;
extern "C" unsigned long g_004de16c;
extern "C" unsigned long g_004de170;
extern "C" unsigned long g_004de180;
extern "C" unsigned long g_004de184;
extern "C" unsigned long g_004de1a8;
extern "C" unsigned long g_004de1ac;
extern "C" unsigned long g_004de1b8;
extern "C" unsigned long g_004de1c8;
extern "C" unsigned long g_004de1f8;
extern "C" unsigned long g_004de260;
extern "C" unsigned long g_004de26e;
extern "C" unsigned long g_004de270;
extern "C" unsigned long g_004de274;
extern "C" unsigned long g_004de278;
extern "C" unsigned long g_004de2d2;
extern "C" unsigned long g_004de2e8;
extern "C" unsigned long g_004de2ec;
extern "C" unsigned long g_004de2f0;
extern "C" unsigned long g_004de302;
extern "C" unsigned long g_004de338;
extern "C" unsigned long g_004de364;
extern "C" unsigned long g_004de368;
extern "C" unsigned long g_004de3a0;
extern "C" unsigned long g_004de3c0;
extern "C" unsigned long g_004de3e6;
extern "C" unsigned long g_004de43c;
extern "C" unsigned long g_004de44c;
extern "C" unsigned long g_004de46a;
extern "C" unsigned long g_004de486;
extern "C" unsigned long g_004de4c0;
extern "C" unsigned long g_004de4d0;
extern "C" unsigned long g_004de4e4;
extern "C" unsigned long g_004de4e8;
extern "C" unsigned long g_004de50e;
extern "C" unsigned long g_004de51c;
extern "C" unsigned long g_004de520;
extern "C" unsigned long g_004de524;
extern "C" unsigned long g_004de528;
extern "C" unsigned long g_004de52c;
extern "C" unsigned long g_004de530;
extern "C" unsigned long g_004de534;
extern "C" unsigned long g_004de538;
extern "C" unsigned long g_004de53c;
extern "C" unsigned long g_004de540;
bool BLQQCoinPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLQQCoinPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLQQCoinPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLQQCoinPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLQQCoinPresenter::tick(float p1)
{
  return;
}

BLQQCoinPresenter::~BLQQCoinPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004de118 + g_004de16c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004de13c + g_004de170,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLQQCoinPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x192);
  return;
}


void BLQQCoinPresenter::onGoToMission(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x192);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(10);
  return;
}

void BLQQCoinPresenter::onrequestUploadQQCoin(cocos2d::CCObject* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 0x178))();
  if (iVar2 == 0) {
    piVar1 = (int *)((BLQQCoinView *)*(undefined4 *)(((int)this) + 0x18))->getBtnObtain();
    (**(code **)(*piVar1 + 0x234))(piVar1,0);
    piVar1 = (int *)((BLQQCoinView *)*(undefined4 *)(((int)this) + 0x18))->getObtainLabel();
    (**(code **)(*piVar1 + 0x234))(piVar1,&g_004de2d2 + g_004de2ec);
    piVar1 = (int *)((BLQQCoinView *)*(undefined4 *)(((int)this) + 0x18))->getObtainLabel();
    (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_004de2e8 + g_004de2f0);
  }
  return;
}

BLQQCoinPresenter::BLQQCoinPresenter()
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
  iVar3 = *(int *)(&g_004de302 + g_004de364);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004de338 + g_004de368,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLQQCoinPresenter::create(BLQQCoinView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLQQCoinPresenter::onEnter()
{
  return;
}

void BLQQCoinPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004de3a0 + g_004de3c0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLQQCoinPresenter::onObtain(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  uint uVar5;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_10 = (undefined4)(p2);
  ((BLQQCoinView *)(*(undefined4 *)(((int)this) + 0x18)))->getInputBox();
  uVar1 = ((void)(((InputBox *)this)->GetText()),(undefined4)0);
  func_0079e45c(&iStack_14,uVar1,&iStack_18);
  if ((*(uint *)(iStack_14 + -0xc) < 5) ||
     (iVar2 = func_0079e4bc(&iStack_14,(unsigned char *)((char *)&g_004de1f8 + (intptr_t)(g_004de270))), iVar2 == 0)) {
    ((BLQQCoinView *)(*(undefined4 *)(((int)this) + 0x18)))->getInputBox();
    iVar2 = (undefined4)(intptr_t)(((InputBox *)this)->GetInput());
    if (0 < iVar2) {
      uVar1 = (undefined4)(((Toast *)this)->sharedToast());
      puVar4 = (unsigned char *)((char *)&g_004de260 + (intptr_t)(g_004de274));
code_r0x004de25e:
      ((Toast *)(uVar1))->showToast((char const*)puVar4);
    }
  }
  else {
    for (uVar5 = 0; uVar5 < *(uint *)(iStack_14 + -0xc); uVar5 = uVar5 + 1) {
      pbVar3 = (byte *)func_0079ec14(&iStack_14,uVar5);
      if (*pbVar3 < 0x30) {
code_r0x004de264:
        uVar1 = (undefined4)(((Toast *)this)->sharedToast());
        puVar4 = (unsigned char *)((char *)&g_004de26e + (intptr_t)(g_004de278));
        goto code_r0x004de25e;
      }
      pbVar3 = (byte *)func_0079ec14(&iStack_14,uVar5);
      if (0x39 < *pbVar3) goto code_r0x004de264;
    }
    uVar1 = (undefined4)(((BLGameScene *)this)->shareGameScene());
    ((BLGameScene *)(uVar1))->requestGetQQCoin(*(std::string const*)&iStack_14);
  }
  func_0079e2bc(&iStack_14);
  return;
}

undefined4 BLQQCoinPresenter::initWithView(BLQQCoinView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

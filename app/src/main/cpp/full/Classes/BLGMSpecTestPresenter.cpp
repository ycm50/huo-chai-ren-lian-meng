#include "BLGMSpecTestPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLGMSpecTestView.h"
#include "BLLeakUtils.h"
#include "GMSpecData.h"
#include "InputBox.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT17(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0055bdb8;
extern "C" unsigned long UNK_0055bdd0;
extern "C" unsigned long UNK_0055bde8;
extern "C" unsigned long UNK_0055bea8;
extern "C" unsigned long UNK_0055bf04;
extern "C" unsigned long UNK_0055bf2a;
extern "C" unsigned long UNK_0055bf70;
extern "C" unsigned long UNK_0055bf98;
extern "C" unsigned long UNK_0055bfa8;
extern "C" unsigned long UNK_0055bfbc;
extern "C" unsigned long UNK_0055c01e;
extern "C" unsigned long UNK_0055c058;
extern "C" unsigned long UNK_0055c0d8;
extern "C" unsigned long UNK_0055c0ec;
extern "C" unsigned long UNK_0055c12e;
extern "C" unsigned long UNK_0055c170;
extern "C" unsigned long UNK_0055c1b2;
extern "C" unsigned long UNK_0055c1f4;
extern "C" unsigned long UNK_0055c236;
extern "C" unsigned long UNK_0055c2a8;
extern "C" unsigned long UNK_0055c2c0;
extern "C" unsigned long UNK_0055c3f0;
extern "C" unsigned long UNK_0055c40a;
extern "C" unsigned long UNK_0055c42e;
extern "C" unsigned long UNK_0055c456;
extern "C" unsigned long UNK_0055c47e;
extern "C" unsigned long UNK_0055c4b4;
extern "C" unsigned long UNK_0055c5ac;
extern "C" unsigned long UNK_0055c610;
extern "C" unsigned long UNK_0055c674;
extern "C" unsigned long UNK_0055c6d8;
extern "C" unsigned long UNK_0055c73c;
extern "C" unsigned long UNK_0055c7a0;
extern "C" unsigned long _UNK_0055bdbc;
extern "C" unsigned long _UNK_0055bdd4;
extern "C" unsigned long _UNK_0055bdec;
extern "C" unsigned long _UNK_0055beac;
extern "C" unsigned long _UNK_0055bf5c;
extern "C" unsigned long _UNK_0055bf60;
extern "C" unsigned long _UNK_0055bf74;
extern "C" unsigned long _UNK_0055bf9c;
extern "C" unsigned long _UNK_0055bfac;
extern "C" unsigned long _UNK_0055bfc0;
extern "C" unsigned long _UNK_0055c084;
extern "C" unsigned long _UNK_0055c088;
extern "C" unsigned long _UNK_0055c280;
extern "C" unsigned long _UNK_0055c284;
extern "C" unsigned long _UNK_0055c288;
extern "C" unsigned long _UNK_0055c28c;
extern "C" unsigned long _UNK_0055c290;
extern "C" unsigned long _UNK_0055c294;
extern "C" unsigned long _UNK_0055c298;
extern "C" unsigned long _UNK_0055c2ac;
extern "C" unsigned long _UNK_0055c3c4;
extern "C" unsigned long _UNK_0055c3c8;
extern "C" unsigned long _UNK_0055c3cc;
extern "C" unsigned long _UNK_0055c3d0;
extern "C" unsigned long _UNK_0055c3e4;
extern "C" unsigned long _UNK_0055c3fc;
extern "C" unsigned long _UNK_0055c420;
extern "C" unsigned long _UNK_0055c444;
extern "C" unsigned long _UNK_0055c448;
extern "C" unsigned long _UNK_0055c46c;
extern "C" unsigned long _UNK_0055c470;
extern "C" unsigned long _UNK_0055c494;
extern "C" unsigned long _UNK_0055c498;
extern "C" unsigned long _UNK_0055c80c;
extern "C" unsigned long _UNK_0055c810;
extern "C" unsigned long _UNK_0055c814;
extern "C" unsigned long _UNK_0055c818;
extern "C" unsigned long _UNK_0055c81c;
extern "C" unsigned long _UNK_0055c820;
extern "C" unsigned long _UNK_0055c824;
extern "C" unsigned long _UNK_0055c828;
extern "C" unsigned long _UNK_0055c82c;
extern "C" unsigned long _UNK_0055c830;
extern "C" unsigned long _UNK_0055c834;
extern "C" unsigned long _UNK_0055c838;
extern "C" unsigned long _UNK_0055c83c;
extern "C" unsigned long _UNK_0055c840;
extern "C" unsigned long _UNK_0055c844;
extern "C" unsigned long _UNK_0055c848;
extern "C" unsigned long _UNK_0055c84c;
extern "C" unsigned long _UNK_0055c850;
extern "C" unsigned long g_0055bdb8;
extern "C" unsigned long g_0055bdbc;
extern "C" unsigned long g_0055bdd0;
extern "C" unsigned long g_0055bdd4;
extern "C" unsigned long g_0055bde8;
extern "C" unsigned long g_0055bdec;
extern "C" unsigned long g_0055bea8;
extern "C" unsigned long g_0055beac;
extern "C" unsigned long g_0055bf04;
extern "C" unsigned long g_0055bf2a;
extern "C" unsigned long g_0055bf5c;
extern "C" unsigned long g_0055bf60;
extern "C" unsigned long g_0055bf70;
extern "C" unsigned long g_0055bf74;
extern "C" unsigned long g_0055bf98;
extern "C" unsigned long g_0055bf9c;
extern "C" unsigned long g_0055bfa8;
extern "C" unsigned long g_0055bfac;
extern "C" unsigned long g_0055bfbc;
extern "C" unsigned long g_0055bfc0;
extern "C" unsigned long g_0055c01e;
extern "C" unsigned long g_0055c058;
extern "C" unsigned long g_0055c084;
extern "C" unsigned long g_0055c088;
extern "C" unsigned long g_0055c0d8;
extern "C" unsigned long g_0055c0ec;
extern "C" unsigned long g_0055c12e;
extern "C" unsigned long g_0055c170;
extern "C" unsigned long g_0055c1b2;
extern "C" unsigned long g_0055c1f4;
extern "C" unsigned long g_0055c236;
extern "C" unsigned long g_0055c280;
extern "C" unsigned long g_0055c284;
extern "C" unsigned long g_0055c288;
extern "C" unsigned long g_0055c28c;
extern "C" unsigned long g_0055c290;
extern "C" unsigned long g_0055c294;
extern "C" unsigned long g_0055c298;
extern "C" unsigned long g_0055c2a8;
extern "C" unsigned long g_0055c2ac;
extern "C" unsigned long g_0055c2c0;
extern "C" unsigned long g_0055c3c4;
extern "C" unsigned long g_0055c3c8;
extern "C" unsigned long g_0055c3cc;
extern "C" unsigned long g_0055c3d0;
extern "C" unsigned long g_0055c3e4;
extern "C" unsigned long g_0055c3f0;
extern "C" unsigned long g_0055c3fc;
extern "C" unsigned long g_0055c40a;
extern "C" unsigned long g_0055c420;
extern "C" unsigned long g_0055c42e;
extern "C" unsigned long g_0055c444;
extern "C" unsigned long g_0055c448;
extern "C" unsigned long g_0055c456;
extern "C" unsigned long g_0055c46c;
extern "C" unsigned long g_0055c470;
extern "C" unsigned long g_0055c47e;
extern "C" unsigned long g_0055c494;
extern "C" unsigned long g_0055c498;
extern "C" unsigned long g_0055c4b4;
extern "C" unsigned long g_0055c5ac;
extern "C" unsigned long g_0055c610;
extern "C" unsigned long g_0055c674;
extern "C" unsigned long g_0055c6d8;
extern "C" unsigned long g_0055c73c;
extern "C" unsigned long g_0055c7a0;
extern "C" unsigned long g_0055c80c;
extern "C" unsigned long g_0055c810;
extern "C" unsigned long g_0055c814;
extern "C" unsigned long g_0055c818;
extern "C" unsigned long g_0055c81c;
extern "C" unsigned long g_0055c820;
extern "C" unsigned long g_0055c824;
extern "C" unsigned long g_0055c828;
extern "C" unsigned long g_0055c82c;
extern "C" unsigned long g_0055c830;
extern "C" unsigned long g_0055c834;
extern "C" unsigned long g_0055c838;
extern "C" unsigned long g_0055c83c;
extern "C" unsigned long g_0055c840;
extern "C" unsigned long g_0055c844;
extern "C" unsigned long g_0055c848;
extern "C" unsigned long g_0055c84c;
extern "C" unsigned long g_0055c850;
bool BLGMSpecTestPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGMSpecTestPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGMSpecTestPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGMSpecTestPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}


void BLGMSpecTestPresenter::tick(float p1)
{
  return;
}

BLGMSpecTestPresenter::~BLGMSpecTestPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055bf04 + g_0055bf5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055bf2a + g_0055bf60,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGMSpecTestPresenter::onTextChanged(InputBox* p1)
{
  0 /* ctorZero */;
  return;
}

void BLGMSpecTestPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa5);
  return;
}

BLGMSpecTestPresenter::BLGMSpecTestPresenter()
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
  iVar3 = *(int *)(&g_0055c01e + g_0055c084);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x88;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055c058 + g_0055c088,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGMSpecTestPresenter::create(BLGMSpecTestView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x3c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGMSpecTestPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLGMSpecTestPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLGMSpecTestPresenter::onUpdateBtn(GMSpecData* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  
  uStack_1c = (undefined1) (undefined4)(intptr_t)p1;
  uStack_1b = (undefined1)((uint)p1 >> 8);
  uStack_1a = (undefined1)((uint)p1 >> 0x10);
  uStack_19 = (undefined1)((uint)p1 >> 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  bVar4 = *(int *)(p1 + 0x10) != 1000;
  uStack_18 = (undefined4)(p3);
  if (bVar4) {
    (**(code **)(*piVar1 + 0x234))(piVar1,1);
    uVar3 = 0xff;
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0xff;
    (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
    pcVar2 = *(code **)(*piVar1 + 0x234);
  }
  else {
    (**(code **)(*piVar1 + 0x234))(piVar1,0);
    uVar3 = 100;
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
    uStack_1c = 100;
    uStack_1b = 100;
    uStack_1a = 100;
    (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
    pcVar2 = *(code **)(*piVar1 + 0x234);
  }
  (*pcVar2)(piVar1,bVar4);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  uStack_1c = uVar3;
  uStack_1b = uVar3;
  uStack_1a = uVar3;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
  return;
}

void BLGMSpecTestPresenter::onTextDidEnd(InputBox* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar4 = (undefined4)(intptr_t)(p1 + 0x120);
  uStack_20 = (undefined4)((int *)((int)this));
  iStack_1c = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c0ec + (intptr_t)(g_0055c284))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput1((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c12e + (intptr_t)(g_0055c288))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput2((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c170 + (intptr_t)(g_0055c28c))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput1((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c1b2 + (intptr_t)(g_0055c290))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput2((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c1f4 + (intptr_t)(g_0055c294))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput1((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  func_0079e53c(&iStack_1c,iVar4);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055c236 + (intptr_t)(g_0055c298))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
    uVar3 = ((void)(((InputBox *)(p1))->GetText()),(undefined4)0);
    func_0079e45c(&iStack_1c,uVar3,&uStack_20);
    ((GMSpecData *)(uVar2))->Setinput2((std::string)(char*)iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  return;
}

void BLGMSpecTestPresenter::showSceneByStatus()
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = (undefined4)(intptr_t)(g_0055c3c4);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd8))());
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(**(int **)(((int)this) + 0x20) + 0xd8))(), **(int **)(iVar2 + 0x14) != 0)) {
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd8))());
    piVar8 = *(int **)(*(int *)(iVar2 + 0x14) + 8);
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd8))());
    iVar6 = (undefined4)(intptr_t)(*(int *)(*(int *)(iVar2 + 0x14) + 8));
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd8))());
    iVar2 = (undefined4)(intptr_t)(**(int **)(iVar2 + 0x14) + g_0055c3c8);
    for (; (piVar8 <= (int *)(iVar6 + iVar2 * 4) && (iVar7 = (undefined4)(intptr_t)(*piVar8, iVar7 != 0)));
        piVar8 = piVar8 + 1) {
      uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c2c0 + (intptr_t)(g_0055c3cc)) + iVar1));
      iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar7,uVar5,*(undefined4 *)((unsigned char *)((char *)&g_0055c2c0 + (intptr_t)(g_0055c3d0)) + iVar1),0));
      if (((iVar3 == 0) &&
          (((iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0 &&
            (iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0)) &&
           (iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0)))) &&
         ((iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0 &&
          (piVar4 = (int *)func_0079e55c(iVar7,uVar5,
                                           *(undefined4 *)((unsigned char *)((char *)&g_0055c2c0 + (intptr_t)(g_0055c3e4)) + iVar1),0)
          , piVar4 != (int *)0x0)))) {
        iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x118)))());
        iVar3 = (undefined4)(intptr_t)(((sir::singleton<GMSpecData, 0> *)this)->instance());
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,iVar7 == *(int *)(iVar3 + 0x10));
      }
    }
  }
  return;
}

void BLGMSpecTestPresenter::onCommit(cocos2d::CCObject* p1, unsigned int p2)
{
  0 /* ctorZero */;
  ((sir::singleton<GMSpecData, 0> *)this)->instance();
  ((GMSpecData *)this)->Handle();
  return;
}

void BLGMSpecTestPresenter::onMain(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  ((GMSpecData *)uVar1)->Setgmscene((GMSPEC_SCENESTATUS)1000);
  BLGMSpecTestPresenter::showSceneByStatus();
  return;
}

void BLGMSpecTestPresenter::getBtnDownMission(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  ((GMSpecData *)uVar1)->Setgmscene((GMSPEC_SCENESTATUS)g_0055c448);
  BLGMSpecTestPresenter::showSceneByStatus();
  return;
}

void BLGMSpecTestPresenter::getBtnModifyMission(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  ((GMSpecData *)uVar1)->Setgmscene((GMSPEC_SCENESTATUS)g_0055c470);
  BLGMSpecTestPresenter::showSceneByStatus();
  return;
}

void BLGMSpecTestPresenter::getBtnUpMission(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  ((GMSpecData *)uVar1)->Setgmscene((GMSPEC_SCENESTATUS)g_0055c498);
  BLGMSpecTestPresenter::showSceneByStatus();
  return;
}

undefined4 BLGMSpecTestPresenter::initWithView(BLGMSpecTestView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  iVar4 = (undefined4)(intptr_t)(g_0055c80c);
  uStack_48 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c810)) + g_0055c80c));
  uStack_44 = (undefined4)(0);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),uStack_48,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c814)) + iVar4));
  uStack_3c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_40,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c818)) + iVar4));
  uStack_34 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_38,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c81c)) + iVar4));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c820)) + iVar4));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055c4b4 + (intptr_t)(g_0055c824)) + iVar4));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x18);
  *(undefined4 *)(((int)this) + 0x24) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x24);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x24));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c5ac + (intptr_t)(g_0055c82c)),auStack_54);
  func_0079e52c(iVar5 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x24))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c830);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x24),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x28) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x28);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x28));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c610 + (intptr_t)(g_0055c838)),auStack_54);
  func_0079e52c(iVar5 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x28))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c830);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x28),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x2c);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c674 + (intptr_t)(g_0055c83c)),auStack_54);
  func_0079e52c(iVar5 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x2c))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c840);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x2c),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x30) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x30);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x30));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c6d8 + (intptr_t)(g_0055c844)),auStack_54);
  func_0079e52c(iVar5 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x30))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c840);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x30),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x34) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x34);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x34));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c73c + (intptr_t)(g_0055c848)),auStack_54);
  func_0079e52c(iVar5 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x34))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c84c);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x34),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x38) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x38);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_50);
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x38));
  func_0079e45c(auStack_50,(unsigned char *)((char *)&g_0055c7a0 + (intptr_t)(g_0055c850)),auStack_54);
  func_0079e52c(iVar4 + 0x120,auStack_50);
  func_0079e2bc(auStack_50);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x38))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                            (*(int **)(((int)this) + 0x20),g_0055c84c);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x38),100);
  iVar4 = (undefined4)(intptr_t)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  *(int *)(iVar4 + 0x14) = ((int)this) + 0x1c;
  uVar2 = (undefined4)(((sir::singleton<GMSpecData, 0> *)this)->instance());
  ((GMSpecData *)uVar2)->Setgmscene((GMSPEC_SCENESTATUS)1000);
  BLGMSpecTestPresenter::showSceneByStatus();
  return 1;
}

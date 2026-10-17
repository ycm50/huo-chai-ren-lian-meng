#include "BLMinePresenter.h"
#include "BLLeakUtils.h"
#include "BLMineView.h"
#include "MineData.h"
#include "MineitemData.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a05f4;
extern "C" unsigned long UNK_005a060c;
extern "C" unsigned long UNK_005a0624;
extern "C" unsigned long UNK_005a063c;
extern "C" unsigned long UNK_005a0698;
extern "C" unsigned long UNK_005a06b8;
extern "C" unsigned long UNK_005a06fc;
extern "C" unsigned long UNK_005a0724;
extern "C" unsigned long UNK_005a0752;
extern "C" unsigned long UNK_005a078c;
extern "C" unsigned long UNK_005a0828;
extern "C" unsigned long UNK_005a083e;
extern "C" unsigned long UNK_005a087a;
extern "C" unsigned long UNK_005a0906;
extern "C" unsigned long UNK_005a0908;
extern "C" unsigned long UNK_005a093a;
extern "C" unsigned long UNK_005a097e;
extern "C" unsigned long UNK_005a0a36;
extern "C" unsigned long UNK_005a0a56;
extern "C" unsigned long UNK_005a0a98;
extern "C" unsigned long UNK_005a0a9b;
extern "C" unsigned long UNK_005a0b0a;
extern "C" unsigned long UNK_005a0b1a;
extern "C" unsigned long UNK_005a0b4c;
extern "C" unsigned long UNK_005a0bc0;
extern "C" unsigned long UNK_005a0bc3;
extern "C" unsigned long UNK_005a0c34;
extern "C" unsigned long UNK_005a0c37;
extern "C" unsigned long UNK_005a0ca6;
extern "C" unsigned long UNK_005a0cb6;
extern "C" unsigned long UNK_005a0cea;
extern "C" unsigned long UNK_005a0d16;
extern "C" unsigned long UNK_005a0d19;
extern "C" unsigned long _UNK_005a05f8;
extern "C" unsigned long _UNK_005a0610;
extern "C" unsigned long _UNK_005a0628;
extern "C" unsigned long _UNK_005a0640;
extern "C" unsigned long _UNK_005a06e8;
extern "C" unsigned long _UNK_005a06ec;
extern "C" unsigned long _UNK_005a0700;
extern "C" unsigned long _UNK_005a0728;
extern "C" unsigned long _UNK_005a0814;
extern "C" unsigned long _UNK_005a0818;
extern "C" unsigned long _UNK_005a082c;
extern "C" unsigned long _UNK_005a08a4;
extern "C" unsigned long _UNK_005a08a8;
extern "C" unsigned long _UNK_005a0a08;
extern "C" unsigned long _UNK_005a0a0c;
extern "C" unsigned long _UNK_005a0a10;
extern "C" unsigned long _UNK_005a0a14;
extern "C" unsigned long _UNK_005a0a78;
extern "C" unsigned long _UNK_005a0a7c;
extern "C" unsigned long _UNK_005a0b8c;
extern "C" unsigned long _UNK_005a0b90;
extern "C" unsigned long _UNK_005a0b94;
extern "C" unsigned long _UNK_005a0b98;
extern "C" unsigned long _UNK_005a0c14;
extern "C" unsigned long _UNK_005a0d94;
extern "C" unsigned long _UNK_005a0d98;
extern "C" unsigned long _UNK_005a0d9c;
extern "C" unsigned long _UNK_005a0da0;
extern "C" unsigned long _UNK_005a0da4;
extern "C" unsigned long g_005a05f4;
extern "C" unsigned long g_005a05f8;
extern "C" unsigned long g_005a060c;
extern "C" unsigned long g_005a0610;
extern "C" unsigned long g_005a0624;
extern "C" unsigned long g_005a0628;
extern "C" unsigned long g_005a063c;
extern "C" unsigned long g_005a0640;
extern "C" unsigned long g_005a0698;
extern "C" unsigned long g_005a06b8;
extern "C" unsigned long g_005a06e8;
extern "C" unsigned long g_005a06ec;
extern "C" unsigned long g_005a06fc;
extern "C" unsigned long g_005a0700;
extern "C" unsigned long g_005a0724;
extern "C" unsigned long g_005a0728;
extern "C" unsigned long g_005a0752;
extern "C" unsigned long g_005a078c;
extern "C" unsigned long g_005a0814;
extern "C" unsigned long g_005a0818;
extern "C" unsigned long g_005a0828;
extern "C" unsigned long g_005a082c;
extern "C" unsigned long g_005a083e;
extern "C" unsigned long g_005a087a;
extern "C" unsigned long g_005a08a4;
extern "C" unsigned long g_005a08a8;
extern "C" unsigned long g_005a0906;
extern "C" unsigned long g_005a0908;
extern "C" unsigned long g_005a093a;
extern "C" unsigned long g_005a097e;
extern "C" unsigned long g_005a0a08;
extern "C" unsigned long g_005a0a0c;
extern "C" unsigned long g_005a0a10;
extern "C" unsigned long g_005a0a14;
extern "C" unsigned long g_005a0a36;
extern "C" unsigned long g_005a0a56;
extern "C" unsigned long g_005a0a78;
extern "C" unsigned long g_005a0a7c;
extern "C" unsigned long g_005a0a98;
extern "C" unsigned long g_005a0a9b;
extern "C" unsigned long g_005a0b0a;
extern "C" unsigned long g_005a0b1a;
extern "C" unsigned long g_005a0b4c;
extern "C" unsigned long g_005a0b8c;
extern "C" unsigned long g_005a0b90;
extern "C" unsigned long g_005a0b94;
extern "C" unsigned long g_005a0b98;
extern "C" unsigned long g_005a0bc0;
extern "C" unsigned long g_005a0bc3;
extern "C" unsigned long g_005a0c14;
extern "C" unsigned long g_005a0c34;
extern "C" unsigned long g_005a0c37;
extern "C" unsigned long g_005a0ca6;
extern "C" unsigned long g_005a0cb6;
extern "C" unsigned long g_005a0cea;
extern "C" unsigned long g_005a0d16;
extern "C" unsigned long g_005a0d19;
extern "C" unsigned long g_005a0d94;
extern "C" unsigned long g_005a0d98;
extern "C" unsigned long g_005a0d9c;
extern "C" unsigned long g_005a0da0;
extern "C" unsigned long g_005a0da4;
bool BLMinePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMinePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinePresenter::tick(float p1)
{
  return;
}

BLMinePresenter::~BLMinePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a0698 + g_005a06e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x70;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a06b8 + g_005a06ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMinePresenter::onUpdateMineBg(MineData* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (*(int *)(p1 + 0x98) == 0) {
    piVar1 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    pcVar4 = *(code **)(*piVar1 + 0x22c);
    func_0079e45c(auStack_20,&g_005a0752 + g_005a0814,auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x214))());
    (*pcVar4)(piVar1,uVar3);
  }
  else {
    if (*(int *)(p1 + 0x98) != 1) {
      return;
    }
    piVar1 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    pcVar4 = *(code **)(*piVar1 + 0x22c);
    func_0079e45c(auStack_20,&g_005a078c + g_005a0818,auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x214))());
    (*pcVar4)(piVar1,uVar3);
  }
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
  pcVar4 = *(code **)(*piVar1 + 0x1d4);
  uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_30 = ((cocos2d::CCDirector *)uVar3)->getWinSize();
  uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar3)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_20);
  piVar1 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
  (**(code **)(*piVar1 + 0x40))(piVar1,0x3f800000);
  return;
}

BLMinePresenter::BLMinePresenter()
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
  iVar3 = *(int *)(&g_005a083e + g_005a08a4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x70;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a087a + g_005a08a8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMinePresenter::create(BLMineView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMinePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMinePresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMinePresenter::changeBgSpView(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if ((int)(intptr_t)p1 == 0) {
                    /* WARNING: Does not return;
    (*pcVar5)();
  }
  iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_005a0906 + g_005a0a0c),
                          *(undefined4 *)(&g_005a0908 + g_005a0a08),0);
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar1 = ((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    if (iVar1 == 0) {
      return;
    }
    piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    pcVar5 = *(code **)(*piVar2 + 0x22c);
    func_0079e45c(auStack_20,&g_005a093a + g_005a0a10,auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
    (*pcVar5)(piVar2,uVar4);
  }
  else {
    if (*(int *)(iVar1 + 0x14) != 1) {
      return;
    }
    iVar1 = ((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    if (iVar1 == 0) {
      return;
    }
    piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
    pcVar5 = *(code **)(*piVar2 + 0x22c);
    func_0079e45c(auStack_20,&g_005a097e + g_005a0a14,auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
    (*pcVar5)(piVar2,uVar4);
  }
  func_0079e2bc(auStack_20);
  piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
  pcVar5 = *(code **)(*piVar2 + 0x1d4);
  uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_30 = ((cocos2d::CCDirector *)uVar4)->getWinSize();
  uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar4)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
  0 /* ctorZero */;
  (*pcVar5)(piVar2,auStack_20);
  piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getSpBg();
  (**(code **)(*piVar2 + 0x40))(piVar2,0x3f800000);
  return;
}

undefined4 BLMinePresenter::initWithView(BLMineView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMineView *)p1)->getBtnZhengDuo();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a0a36 + (intptr_t)(g_005a0a78))),0,0x20);
  piVar1 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnCaiJi();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a0a56 + (intptr_t)(g_005a0a7c))),0,0x20);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  *(int *)(iVar2 + 0x94) = ((int)this) + 0x18;
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  return 1;
}

void BLMinePresenter::onCaiJi(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMinePresenter::onZhengDuo(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)uVar1)->GetDataFromNet(8, 0, 2);
  piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getLabelCaiJi();
  puVar4 = (unsigned char *)((char *)&g_005a0bc0 + (intptr_t)(g_005a0c14));
  (**(code **)(*piVar2 + 0x1b4))(piVar2,(unsigned char *)((char *)&g_005a0bc3 + (intptr_t)(g_005a0c14)));
  piVar2 = (int *)((BLMineView *)*(undefined4 *)(((int)this) + 0x1c))->getLabelZhengDuo();
  (**(code **)(*piVar2 + 0x1b4))(piVar2,puVar4);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x90))(piVar2,1);
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x10c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
  }
  uVar1 = (undefined4)(cocos2d::CCInteger::create(0));
  BLMinePresenter::changeBgSpView((cocos2d::CCObject*)uVar1);
  iVar3 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  *(undefined4 *)(iVar3 + 0x9c) = 1;
  return;
}

void BLMinePresenter::showUI(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

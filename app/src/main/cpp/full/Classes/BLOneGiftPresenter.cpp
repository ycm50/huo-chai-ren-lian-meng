#include "BLOneGiftPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOneGiftView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005484b4;
extern "C" unsigned long UNK_005484cc;
extern "C" unsigned long UNK_005484e4;
extern "C" unsigned long UNK_005484fc;
extern "C" unsigned long UNK_00548558;
extern "C" unsigned long UNK_00548572;
extern "C" unsigned long UNK_005485b8;
extern "C" unsigned long UNK_005485e0;
extern "C" unsigned long UNK_00548600;
extern "C" unsigned long UNK_0054861e;
extern "C" unsigned long UNK_00548628;
extern "C" unsigned long UNK_0054865a;
extern "C" unsigned long UNK_00548672;
extern "C" unsigned long UNK_005486ea;
extern "C" unsigned long UNK_0054871e;
extern "C" unsigned long UNK_00548720;
extern "C" unsigned long UNK_00548752;
extern "C" unsigned long UNK_00548772;
extern "C" unsigned long UNK_00548792;
extern "C" unsigned long UNK_0054882e;
extern "C" unsigned long UNK_00548922;
extern "C" unsigned long UNK_00548923;
extern "C" unsigned long UNK_00548924;
extern "C" unsigned long UNK_0054894a;
extern "C" unsigned long UNK_0054897c;
extern "C" unsigned long UNK_00548a2e;
extern "C" unsigned long UNK_00548b1c;
extern "C" unsigned long _UNK_005484b8;
extern "C" unsigned long _UNK_005484d0;
extern "C" unsigned long _UNK_005484e8;
extern "C" unsigned long _UNK_00548500;
extern "C" unsigned long _UNK_005485a4;
extern "C" unsigned long _UNK_005485a8;
extern "C" unsigned long _UNK_005485bc;
extern "C" unsigned long _UNK_005485e4;
extern "C" unsigned long _UNK_00548610;
extern "C" unsigned long _UNK_00548644;
extern "C" unsigned long _UNK_00548648;
extern "C" unsigned long _UNK_0054869c;
extern "C" unsigned long _UNK_005486a0;
extern "C" unsigned long _UNK_005486f0;
extern "C" unsigned long _UNK_0054872c;
extern "C" unsigned long _UNK_00548730;
extern "C" unsigned long _UNK_005487f4;
extern "C" unsigned long _UNK_005487f8;
extern "C" unsigned long _UNK_005487fc;
extern "C" unsigned long _UNK_00548800;
extern "C" unsigned long _UNK_00548ba8;
extern "C" unsigned long _UNK_00548bac;
extern "C" unsigned long _UNK_00548bb0;
extern "C" unsigned long _UNK_00548bb4;
extern "C" unsigned long _UNK_00548bb8;
extern "C" unsigned long _UNK_00548bbc;
extern "C" unsigned long g_005484b4;
extern "C" unsigned long g_005484b8;
extern "C" unsigned long g_005484cc;
extern "C" unsigned long g_005484d0;
extern "C" unsigned long g_005484e4;
extern "C" unsigned long g_005484e8;
extern "C" unsigned long g_005484fc;
extern "C" unsigned long g_00548500;
extern "C" unsigned long g_00548558;
extern "C" unsigned long g_00548572;
extern "C" unsigned long g_005485a4;
extern "C" unsigned long g_005485a8;
extern "C" unsigned long g_005485b8;
extern "C" unsigned long g_005485bc;
extern "C" unsigned long g_005485e0;
extern "C" unsigned long g_005485e4;
extern "C" unsigned long g_00548600;
extern "C" unsigned long g_00548610;
extern "C" unsigned long g_0054861e;
extern "C" unsigned long g_00548628;
extern "C" unsigned long g_00548644;
extern "C" unsigned long g_00548648;
extern "C" unsigned long g_0054865a;
extern "C" unsigned long g_00548672;
extern "C" unsigned long g_0054869c;
extern "C" unsigned long g_005486a0;
extern "C" unsigned long g_005486ea;
extern "C" unsigned long g_005486f0;
extern "C" unsigned long g_0054871e;
extern "C" unsigned long g_00548720;
extern "C" unsigned long g_0054872c;
extern "C" unsigned long g_00548730;
extern "C" unsigned long g_00548752;
extern "C" unsigned long g_00548772;
extern "C" unsigned long g_00548792;
extern "C" unsigned long g_005487f4;
extern "C" unsigned long g_005487f8;
extern "C" unsigned long g_005487fc;
extern "C" unsigned long g_00548800;
extern "C" unsigned long g_0054882e;
extern "C" unsigned long g_00548922;
extern "C" unsigned long g_00548923;
extern "C" unsigned long g_00548924;
extern "C" unsigned long g_0054894a;
extern "C" unsigned long g_0054897c;
extern "C" unsigned long g_00548a2e;
extern "C" unsigned long g_00548b1c;
extern "C" unsigned long g_00548ba8;
extern "C" unsigned long g_00548bac;
extern "C" unsigned long g_00548bb0;
extern "C" unsigned long g_00548bb4;
extern "C" unsigned long g_00548bb8;
extern "C" unsigned long g_00548bbc;
bool BLOneGiftPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLOneGiftPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOneGiftPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOneGiftPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOneGiftPresenter::tick(float p1)
{
  return;
}

BLOneGiftPresenter::~BLOneGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00548558 + g_005485a4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00548572 + g_005485a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLOneGiftPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x91);
  return;
}

void BLOneGiftPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x91);
  return;
}

void BLOneGiftPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (undefined4)((int *)((int)this));
  uStack_c = (undefined4)(p1);
  0 /* ctorZero */;
  func_0079e45c(&uStack_c,&g_00548628 + g_00548648,&uStack_10);
  ((PlatformHelp *)this)->charge((std::string)(char*)uStack_c);
  func_0079e2bc(&uStack_c);
  return;
}

BLOneGiftPresenter::BLOneGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0054865a + g_0054869c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00548672 + g_005486a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLOneGiftPresenter::create(BLOneGiftView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLOneGiftPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005486ea + g_005486f0);
  return;
}

void BLOneGiftPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLOneGiftPresenter::initWithView(BLOneGiftView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLOneGiftView *)p1)->getBtnClose();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_00548752 + g_005487f4));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGet();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_00548772 + g_005487f8));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabTitle();
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_00548792 + g_005487fc);
  piVar1 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_00548800)))));
  (*pcVar4)(piVar1,uVar3);
  piVar1 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLOneGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_30,piVar2);
  (*pcVar4)(piVar1,auStack_30);
  return 1;
}

void BLOneGiftPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

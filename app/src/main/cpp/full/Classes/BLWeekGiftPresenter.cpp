#include "BLWeekGiftPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLWeekGiftView.h"
#include "DailyGiftData.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"
#include "umeng_builtin.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054cea0;
extern "C" unsigned long UNK_0054ceb8;
extern "C" unsigned long UNK_0054ced0;
extern "C" unsigned long UNK_0054cee8;
extern "C" unsigned long UNK_0054cf44;
extern "C" unsigned long UNK_0054cf5e;
extern "C" unsigned long UNK_0054cfa4;
extern "C" unsigned long UNK_0054cfcc;
extern "C" unsigned long UNK_0054cff6;
extern "C" unsigned long UNK_0054d026;
extern "C" unsigned long UNK_0054d03e;
extern "C" unsigned long UNK_0054d0b6;
extern "C" unsigned long UNK_0054d0ec;
extern "C" unsigned long UNK_0054d0ee;
extern "C" unsigned long UNK_0054d106;
extern "C" unsigned long UNK_0054d108;
extern "C" unsigned long UNK_0054d146;
extern "C" unsigned long UNK_0054d166;
extern "C" unsigned long UNK_0054d186;
extern "C" unsigned long UNK_0054d23e;
extern "C" unsigned long UNK_0054d252;
extern "C" unsigned long UNK_0054d260;
extern "C" unsigned long UNK_0054d288;
extern "C" unsigned long UNK_0054d2f2;
extern "C" unsigned long UNK_0054d326;
extern "C" unsigned long UNK_0054d334;
extern "C" unsigned long UNK_0054d35c;
extern "C" unsigned long UNK_0054d3be;
extern "C" unsigned long UNK_0054d3dc;
extern "C" unsigned long _UNK_0054cea4;
extern "C" unsigned long _UNK_0054cebc;
extern "C" unsigned long _UNK_0054ced4;
extern "C" unsigned long _UNK_0054ceec;
extern "C" unsigned long _UNK_0054cf90;
extern "C" unsigned long _UNK_0054cf94;
extern "C" unsigned long _UNK_0054cfa8;
extern "C" unsigned long _UNK_0054cfd0;
extern "C" unsigned long _UNK_0054d008;
extern "C" unsigned long _UNK_0054d00c;
extern "C" unsigned long _UNK_0054d010;
extern "C" unsigned long _UNK_0054d068;
extern "C" unsigned long _UNK_0054d06c;
extern "C" unsigned long _UNK_0054d0bc;
extern "C" unsigned long _UNK_0054d118;
extern "C" unsigned long _UNK_0054d11c;
extern "C" unsigned long _UNK_0054d120;
extern "C" unsigned long _UNK_0054d124;
extern "C" unsigned long _UNK_0054d1e8;
extern "C" unsigned long _UNK_0054d1ec;
extern "C" unsigned long _UNK_0054d1f0;
extern "C" unsigned long _UNK_0054d1f4;
extern "C" unsigned long _UNK_0054d404;
extern "C" unsigned long _UNK_0054d408;
extern "C" unsigned long _UNK_0054d40c;
extern "C" unsigned long _UNK_0054d410;
extern "C" unsigned long _UNK_0054d414;
extern "C" unsigned long _UNK_0054d418;
extern "C" unsigned long _UNK_0054d41c;
extern "C" unsigned long _UNK_0054d420;
extern "C" unsigned long _UNK_0054d424;
extern "C" unsigned long _UNK_0054d428;
extern "C" unsigned long _UNK_0054d42c;
extern "C" unsigned long _UNK_0054d430;
extern "C" unsigned long _UNK_0054d434;
extern "C" unsigned long _UNK_0054d438;
extern "C" unsigned long _UNK_0054d43c;
extern "C" unsigned long g_0054cea0;
extern "C" unsigned long g_0054cea4;
extern "C" unsigned long g_0054ceb8;
extern "C" unsigned long g_0054cebc;
extern "C" unsigned long g_0054ced0;
extern "C" unsigned long g_0054ced4;
extern "C" unsigned long g_0054cee8;
extern "C" unsigned long g_0054ceec;
extern "C" unsigned long g_0054cf44;
extern "C" unsigned long g_0054cf5e;
extern "C" unsigned long g_0054cf90;
extern "C" unsigned long g_0054cf94;
extern "C" unsigned long g_0054cfa4;
extern "C" unsigned long g_0054cfa8;
extern "C" unsigned long g_0054cfcc;
extern "C" unsigned long g_0054cfd0;
extern "C" unsigned long g_0054cff6;
extern "C" unsigned long g_0054d008;
extern "C" unsigned long g_0054d00c;
extern "C" unsigned long g_0054d010;
extern "C" unsigned long g_0054d026;
extern "C" unsigned long g_0054d03e;
extern "C" unsigned long g_0054d068;
extern "C" unsigned long g_0054d06c;
extern "C" unsigned long g_0054d0b6;
extern "C" unsigned long g_0054d0bc;
extern "C" unsigned long g_0054d0ec;
extern "C" unsigned long g_0054d0ee;
extern "C" unsigned long g_0054d106;
extern "C" unsigned long g_0054d108;
extern "C" unsigned long g_0054d118;
extern "C" unsigned long g_0054d11c;
extern "C" unsigned long g_0054d120;
extern "C" unsigned long g_0054d124;
extern "C" unsigned long g_0054d146;
extern "C" unsigned long g_0054d166;
extern "C" unsigned long g_0054d186;
extern "C" unsigned long g_0054d1e8;
extern "C" unsigned long g_0054d1ec;
extern "C" unsigned long g_0054d1f0;
extern "C" unsigned long g_0054d1f4;
extern "C" unsigned long g_0054d23e;
extern "C" unsigned long g_0054d252;
extern "C" unsigned long g_0054d260;
extern "C" unsigned long g_0054d288;
extern "C" unsigned long g_0054d2f2;
extern "C" unsigned long g_0054d326;
extern "C" unsigned long g_0054d334;
extern "C" unsigned long g_0054d35c;
extern "C" unsigned long g_0054d3be;
extern "C" unsigned long g_0054d3dc;
extern "C" unsigned long g_0054d404;
extern "C" unsigned long g_0054d408;
extern "C" unsigned long g_0054d40c;
extern "C" unsigned long g_0054d410;
extern "C" unsigned long g_0054d414;
extern "C" unsigned long g_0054d418;
extern "C" unsigned long g_0054d41c;
extern "C" unsigned long g_0054d420;
extern "C" unsigned long g_0054d424;
extern "C" unsigned long g_0054d428;
extern "C" unsigned long g_0054d42c;
extern "C" unsigned long g_0054d430;
extern "C" unsigned long g_0054d434;
extern "C" unsigned long g_0054d438;
extern "C" unsigned long g_0054d43c;
bool BLWeekGiftPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLWeekGiftPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWeekGiftPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWeekGiftPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWeekGiftPresenter::tick(float p1)
{
  return;
}

BLWeekGiftPresenter::~BLWeekGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054cf44 + g_0054cf90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054cf5e + g_0054cf94,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLWeekGiftPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xf7);
  return;
}


BLWeekGiftPresenter::BLWeekGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0054d026 + g_0054d068);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054d03e + g_0054d06c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLWeekGiftPresenter::create(BLWeekGiftView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLWeekGiftPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0054d0b6 + g_0054d0bc);
  return;
}


undefined4 BLWeekGiftPresenter::initWithView(BLWeekGiftView* p1)
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
  piVar1 = (int *)((BLWeekGiftView *)p1)->getBtnClose();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_0054d146 + g_0054d1e8));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGet();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_0054d166 + g_0054d1ec));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabTitle();
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_0054d186 + g_0054d1f0);
  piVar1 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0054d1f4)))));
  (*pcVar4)(piVar1,uVar3);
  piVar1 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLWeekGiftView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_30,piVar2);
  (*pcVar4)(piVar1,auStack_30);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLWeekGiftPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  undefined4 in_r3;
  
  ((umeng::MobClickCpp *)(1))->buy((char const*)g_0054d008, g_0054d00c, in_r3);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0xf7);
  return;
}

void BLWeekGiftPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0054d0ee + (intptr_t)(g_0054d118))), 0, (char const*)(unsigned char *)((char *)&g_0054d0ec + (intptr_t)(g_0054d11c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0054d106 + (intptr_t)(g_0054d120))), 0, (char const*)(unsigned char *)((char *)&g_0054d108 + (intptr_t)(g_0054d124)), 0);
  return;
}

void BLWeekGiftPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((sir::singleton<DailyGiftData, 0> *)this)->instance());
  ((DailyGiftData *)uVar1)->GetDataFromNet(1, 1);
  return;
}

void BLWeekGiftPresenter::onWeekPack(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLLuckyDrawPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLuckyDrawView.h"
#include "BLLuckyDrawItemView.h"
#include "BLTableView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LuckyDrawData.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
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
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00586bfc;
extern "C" unsigned long UNK_00586c14;
extern "C" unsigned long UNK_00586c2c;
extern "C" unsigned long UNK_00586cbc;
extern "C" unsigned long UNK_00586ce8;
extern "C" unsigned long UNK_00586d10;
extern "C" unsigned long UNK_00586d4a;
extern "C" unsigned long UNK_00586d9c;
extern "C" unsigned long UNK_00586ee2;
extern "C" unsigned long UNK_00586f54;
extern "C" unsigned long UNK_00586f56;
extern "C" unsigned long UNK_00586fca;
extern "C" unsigned long UNK_00586fcb;
extern "C" unsigned long UNK_00586fcc;
extern "C" unsigned long UNK_0058700e;
extern "C" unsigned long UNK_00587012;
extern "C" unsigned long UNK_005870f4;
extern "C" unsigned long UNK_005871f4;
extern "C" unsigned long UNK_00587250;
extern "C" unsigned long UNK_00587350;
extern "C" unsigned long UNK_005873ac;
extern "C" unsigned long UNK_005873d0;
extern "C" unsigned long UNK_005873e8;
extern "C" unsigned long UNK_005876c4;
extern "C" unsigned long UNK_00587776;
extern "C" unsigned long UNK_00587778;
extern "C" unsigned long UNK_00587826;
extern "C" unsigned long UNK_00587868;
extern "C" unsigned long UNK_005878ba;
extern "C" unsigned long UNK_005878bc;
extern "C" unsigned long UNK_005878d1;
extern "C" unsigned long UNK_005878e4;
extern "C" unsigned long UNK_00587914;
extern "C" unsigned long UNK_0058793a;
extern "C" unsigned long UNK_00587968;
extern "C" unsigned long UNK_00587996;
extern "C" unsigned long UNK_005879ca;
extern "C" unsigned long UNK_005879cc;
extern "C" unsigned long UNK_005879df;
extern "C" unsigned long UNK_005879f4;
extern "C" unsigned long UNK_00587a18;
extern "C" unsigned long UNK_00587a20;
extern "C" unsigned long UNK_00587a46;
extern "C" unsigned long UNK_00587a74;
extern "C" unsigned long UNK_00587b3a;
extern "C" unsigned long UNK_00587b5e;
extern "C" unsigned long UNK_00587c04;
extern "C" unsigned long UNK_00587ca8;
extern "C" unsigned long UNK_00587d1e;
extern "C" unsigned long UNK_00587d98;
extern "C" unsigned long UNK_00587e60;
extern "C" unsigned long UNK_00587eaa;
extern "C" unsigned long UNK_00588020;
extern "C" unsigned long UNK_0058804c;
extern "C" unsigned long _UNK_00586c00;
extern "C" unsigned long _UNK_00586c18;
extern "C" unsigned long _UNK_00586c30;
extern "C" unsigned long _UNK_00586cd8;
extern "C" unsigned long _UNK_00586cec;
extern "C" unsigned long _UNK_00586d14;
extern "C" unsigned long _UNK_00586d50;
extern "C" unsigned long _UNK_00586d8c;
extern "C" unsigned long _UNK_00586da0;
extern "C" unsigned long _UNK_00586eb0;
extern "C" unsigned long _UNK_00586eb4;
extern "C" unsigned long _UNK_00586ed0;
extern "C" unsigned long _UNK_00586f38;
extern "C" unsigned long _UNK_00586f3c;
extern "C" unsigned long _UNK_00586f60;
extern "C" unsigned long _UNK_00586f64;
extern "C" unsigned long _UNK_00586ff8;
extern "C" unsigned long _UNK_00587030;
extern "C" unsigned long _UNK_00587034;
extern "C" unsigned long _UNK_005872cc;
extern "C" unsigned long _UNK_005872d0;
extern "C" unsigned long _UNK_005872d4;
extern "C" unsigned long _UNK_005872d8;
extern "C" unsigned long _UNK_005872dc;
extern "C" unsigned long _UNK_005872e0;
extern "C" unsigned long _UNK_005872e4;
extern "C" unsigned long _UNK_005872e8;
extern "C" unsigned long _UNK_005872ec;
extern "C" unsigned long _UNK_0058749c;
extern "C" unsigned long _UNK_005874a0;
extern "C" unsigned long _UNK_005874a4;
extern "C" unsigned long _UNK_005874a8;
extern "C" unsigned long _UNK_0058767c;
extern "C" unsigned long _UNK_00587680;
extern "C" unsigned long _UNK_00587684;
extern "C" unsigned long _UNK_00587688;
extern "C" unsigned long _UNK_0058768c;
extern "C" unsigned long _UNK_005876c8;
extern "C" unsigned long _UNK_00587aa0;
extern "C" unsigned long _UNK_00587aa4;
extern "C" unsigned long _UNK_00587aa8;
extern "C" unsigned long _UNK_00587aac;
extern "C" unsigned long _UNK_00587ab0;
extern "C" unsigned long _UNK_00587ab4;
extern "C" unsigned long _UNK_00587ab8;
extern "C" unsigned long _UNK_00587abc;
extern "C" unsigned long _UNK_00587ac0;
extern "C" unsigned long _UNK_00587ac4;
extern "C" unsigned long _UNK_00587ac8;
extern "C" unsigned long _UNK_00587acc;
extern "C" unsigned long _UNK_00587ad0;
extern "C" unsigned long _UNK_00587ad4;
extern "C" unsigned long _UNK_00587ad8;
extern "C" unsigned long _UNK_00587adc;
extern "C" unsigned long _UNK_00587ae0;
extern "C" unsigned long _UNK_00587ae4;
extern "C" unsigned long _UNK_00587ae8;
extern "C" unsigned long _UNK_00587aec;
extern "C" unsigned long _UNK_00587af0;
extern "C" unsigned long _UNK_00587af4;
extern "C" unsigned long _UNK_00587af8;
extern "C" unsigned long _UNK_00587bd8;
extern "C" unsigned long _UNK_00587bdc;
extern "C" unsigned long _UNK_00587c7c;
extern "C" unsigned long _UNK_00587d64;
extern "C" unsigned long _UNK_00587d68;
extern "C" unsigned long _UNK_00587e70;
extern "C" unsigned long _UNK_00587e74;
extern "C" unsigned long _UNK_00587e78;
extern "C" unsigned long _UNK_00588054;
extern "C" unsigned long _UNK_00588058;
extern "C" unsigned long _UNK_0058805c;
extern "C" unsigned long _UNK_00588060;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_00586bfc;
extern "C" unsigned long g_00586c00;
extern "C" unsigned long g_00586c14;
extern "C" unsigned long g_00586c18;
extern "C" unsigned long g_00586c2c;
extern "C" unsigned long g_00586c30;
extern "C" unsigned long g_00586cbc;
extern "C" unsigned long g_00586cd8;
extern "C" unsigned long g_00586ce8;
extern "C" unsigned long g_00586cec;
extern "C" unsigned long g_00586d10;
extern "C" unsigned long g_00586d14;
extern "C" unsigned long g_00586d4a;
extern "C" unsigned long g_00586d50;
extern "C" unsigned long g_00586d8c;
extern "C" unsigned long g_00586d9c;
extern "C" unsigned long g_00586da0;
extern "C" unsigned long g_00586eb0;
extern "C" unsigned long g_00586eb4;
extern "C" unsigned long g_00586ed0;
extern "C" unsigned long g_00586ee2;
extern "C" unsigned long g_00586f38;
extern "C" unsigned long g_00586f3c;
extern "C" unsigned long g_00586f54;
extern "C" unsigned long g_00586f56;
extern "C" unsigned long g_00586f60;
extern "C" unsigned long g_00586f64;
extern "C" unsigned long g_00586fca;
extern "C" unsigned long g_00586fcb;
extern "C" unsigned long g_00586fcc;
extern "C" unsigned long g_00586ff8;
extern "C" unsigned long g_0058700e;
extern "C" unsigned long g_00587012;
extern "C" unsigned long g_00587030;
extern "C" unsigned long g_00587034;
extern "C" unsigned long g_005870f4;
extern "C" unsigned long g_005871f4;
extern "C" unsigned long g_00587250;
extern "C" unsigned long g_005872cc;
extern "C" unsigned long g_005872d0;
extern "C" unsigned long g_005872d4;
extern "C" unsigned long g_005872d8;
extern "C" unsigned long g_005872dc;
extern "C" unsigned long g_005872e0;
extern "C" unsigned long g_005872e4;
extern "C" unsigned long g_005872e8;
extern "C" unsigned long g_005872ec;
extern "C" unsigned long g_00587350;
extern "C" unsigned long g_005873ac;
extern "C" unsigned long g_005873d0;
extern "C" unsigned long g_005873e8;
extern "C" unsigned long g_0058749c;
extern "C" unsigned long g_005874a0;
extern "C" unsigned long g_005874a4;
extern "C" unsigned long g_005874a8;
extern "C" unsigned long g_0058767c;
extern "C" unsigned long g_00587680;
extern "C" unsigned long g_00587684;
extern "C" unsigned long g_00587688;
extern "C" unsigned long g_0058768c;
extern "C" unsigned long g_005876c4;
extern "C" unsigned long g_005876c8;
extern "C" unsigned long g_00587776;
extern "C" unsigned long g_00587778;
extern "C" unsigned long g_00587826;
extern "C" unsigned long g_00587868;
extern "C" unsigned long g_005878ba;
extern "C" unsigned long g_005878bc;
extern "C" unsigned long g_005878d1;
extern "C" unsigned long g_005878e4;
extern "C" unsigned long g_00587914;
extern "C" unsigned long g_0058793a;
extern "C" unsigned long g_00587968;
extern "C" unsigned long g_00587996;
extern "C" unsigned long g_005879ca;
extern "C" unsigned long g_005879cc;
extern "C" unsigned long g_005879df;
extern "C" unsigned long g_005879f4;
extern "C" unsigned long g_00587a18;
extern "C" unsigned long g_00587a20;
extern "C" unsigned long g_00587a46;
extern "C" unsigned long g_00587a74;
extern "C" unsigned long g_00587aa0;
extern "C" unsigned long g_00587aa4;
extern "C" unsigned long g_00587aa8;
extern "C" unsigned long g_00587aac;
extern "C" unsigned long g_00587ab0;
extern "C" unsigned long g_00587ab4;
extern "C" unsigned long g_00587ab8;
extern "C" unsigned long g_00587abc;
extern "C" unsigned long g_00587ac0;
extern "C" unsigned long g_00587ac4;
extern "C" unsigned long g_00587ac8;
extern "C" unsigned long g_00587acc;
extern "C" unsigned long g_00587ad0;
extern "C" unsigned long g_00587ad4;
extern "C" unsigned long g_00587ad8;
extern "C" unsigned long g_00587adc;
extern "C" unsigned long g_00587ae0;
extern "C" unsigned long g_00587ae4;
extern "C" unsigned long g_00587ae8;
extern "C" unsigned long g_00587aec;
extern "C" unsigned long g_00587af0;
extern "C" unsigned long g_00587af4;
extern "C" unsigned long g_00587af8;
extern "C" unsigned long g_00587b3a;
extern "C" unsigned long g_00587b5e;
extern "C" unsigned long g_00587bd8;
extern "C" unsigned long g_00587bdc;
extern "C" unsigned long g_00587c04;
extern "C" unsigned long g_00587c7c;
extern "C" unsigned long g_00587ca8;
extern "C" unsigned long g_00587d1e;
extern "C" unsigned long g_00587d64;
extern "C" unsigned long g_00587d68;
extern "C" unsigned long g_00587d98;
extern "C" unsigned long g_00587e60;
extern "C" unsigned long g_00587e70;
extern "C" unsigned long g_00587e74;
extern "C" unsigned long g_00587e78;
extern "C" unsigned long g_00587eaa;
extern "C" unsigned long g_00588020;
extern "C" unsigned long g_0058804c;
extern "C" unsigned long g_00588054;
extern "C" unsigned long g_00588058;
extern "C" unsigned long g_0058805c;
extern "C" unsigned long g_00588060;
bool BLLuckyDrawPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckyDrawPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLLuckyDrawPresenter::~BLLuckyDrawPresenter()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00586cbc + g_00586cd8);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(6)) = iVar1 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar1 + 0x8c;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLLuckyDrawPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  cocos2d::CCLog((char const*)&g_00586d4a + g_00586d50, p3, p2, p3, p3);
  return;
}

void BLLuckyDrawPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x25c);
  return;
}

undefined4 BLLuckyDrawPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLLuckyDrawPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  if (*(char *)(((int)this) + 0x28) == '\0') {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(g_00586ed0);
  }
  return;
}

BLLuckyDrawPresenter::BLLuckyDrawPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_00586ee2 + g_00586f38);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(undefined1 *)(((int)this) + 10) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = g_00586f3c;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  return;
}


void BLLuckyDrawPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

ulonglong BLLuckyDrawPresenter::reloadRecords()
{
  undefined4 p2 = 0;

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  uStack_1c = (undefined1)p2;
  uStack_1b = (undefined1)((uint)p2 >> 8);
  uStack_1a = (undefined1)((uint)p2 >> 0x10);
  iVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(((int)this) + 0x20) + (iVar3 + 0x4e) * 4;
    if (iVar3 == *(int *)(((int)this) + 0x24)) {
      piVar1 = *(int **)(iVar2 + 4);
      uStack_1c = 0xff;
      uStack_1b = 0xd0;
      uStack_1a = 0;
      (**(code **)(*piVar1 + 0x2e4))(piVar1,0xd0ff,1);
    }
    else {
      piVar1 = *(int **)(iVar2 + 4);
      (**(code **)(*piVar1 + 0x2e4))
                (piVar1,(uint)(byte)(&g_00586fcc)[g_00586ff8] << 0x10 |
                        (uint)(byte)(&g_00586fcb)[g_00586ff8] * 0x100 |
                        (uint)(byte)(&g_00586fca)[g_00586ff8],1);
    }
    if (iVar3 == 1) break;
    iVar3 = 1;
  }
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x144))->reloadData(0, 1);
  return (ulonglong)ghidra_CONCAT16(uStack_1a,ghidra_CONCAT15(uStack_1b,ghidra_CONCAT14(uStack_1c,((int)this))));
}

void BLLuckyDrawPresenter::onRecorsPage(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  if ((p1 != 0) &&
     (piVar1 = (int *)func_0079e55c(p1,*(undefined4 *)(&g_0058700e + g_00587030),
                                      *(undefined4 *)(&g_00587012 + g_00587034),0),
     piVar1 != (int *)0x0)) {
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x118))());
    *(undefined4 *)(((int)this) + 0x24) = uVar2;
  }
  BLLuckyDrawPresenter::reloadRecords();
  return;
}


undefined4 BLLuckyDrawPresenter::create(BLLuckyDrawView* p1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x44))));
  0 /* ctorZero */;
  iVar2 = ((BLLuckyDrawPresenter *)uVar1)->initWithView((BLLuckyDrawView*)((int)this));
  if (iVar2 == 0) {
    ((cocos2d::CCObject *)uVar1)->release();
    uVar1 = (undefined4)(0);
  }
  else {
    ((cocos2d::CCObject *)this)->autorelease();
  }
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLLuckyDrawPresenter::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckyDrawPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLLuckyDrawPresenter::initWithView(BLLuckyDrawView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLLuckyDrawPresenter::requestLuckyDrawOp(ENUM_LUCKYDRAW_OP_TYPE p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckyDrawPresenter::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar5;
  code *pcVar6;
  
  if (0 < *(int *)(((int)this) + 0x2c)) {
    uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(((int)this) + 0x3c)));
    *(undefined4 *)(((int)this) + 0x3c) = uVar1;
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x40))))));
    *(undefined4 *)(((int)this) + 0x40) = uVar1;
    iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar1),(int)(*(undefined4 *)(((int)this) + 0x38))))));
    if (iVar2 != 0) {
      func_0079e964(*(int *)(((int)this) + 0x30) + 1,0x12);
      *(int *)(((int)this) + 0x30) = extraout_r1;
      piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
      piVar3 = (int *)(**(code **)(*piVar3 + 0xd4))(piVar3,extraout_r1 + 1000);
      if (piVar3 != (int *)0x0) {
        piVar5 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
        pcVar6 = *(code **)(*piVar5 + 0x4c);
        uVar1 = (undefined4)((**(code **)(*piVar3 + 0x50))());
        (*pcVar6)(piVar5,uVar1);
      }
      *(undefined4 *)(((int)this) + 0x40) = 0;
      if ((*(int *)(((int)this) + 0x2c) == 1) &&
         (iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(*(undefined4 *)(((int)this) + 0x3c)),(int)(g_0058767c)))), iVar2 != 0)) {
        iVar2 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
        if ((uint)(g_00587680 * (*(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x44) >> 2)) < 2) {
          *(undefined4 *)(((int)this) + 0x2c) = 2;
        }
        else {
          *(undefined1 *)(((int)this) + 0x28) = 0;
          uVar1 = (undefined4)(((UIManager *)this)->shareManager());
          ((UIManager *)uVar1)->showUIById(g_00587684);
          uVar1 = (undefined4)(g_00587688);
          *(undefined4 *)(((int)this) + 0x2c) = 0;
          *(undefined4 *)(((int)this) + 0x30) = 0;
          *(undefined4 *)(((int)this) + 0x38) = uVar1;
          *(undefined4 *)(((int)this) + 0x34) = 0;
          *(undefined4 *)(((int)this) + 0x3c) = 0;
          *(undefined4 *)(((int)this) + 0x40) = 0;
          piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
          (**(code **)(*piVar3 + 0x90))(piVar3,0);
        }
      }
      if (*(int *)(((int)this) + 0x2c) == 2) {
        func_0079e964((*(int *)(((int)this) + 0x34) - *(int *)(((int)this) + 0x30)) + 0x12,0x12);
        if (extraout_r1_00 == 5) {
          *(undefined4 *)(((int)this) + 0x2c) = 3;
        }
      }
      else if (*(int *)(((int)this) + 0x2c) == 3) {
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x38)),(int)(g_00587688)))));
        uVar1 = (undefined4)(g_0058768c);
        *(undefined4 *)(((int)this) + 0x38) = uVar4;
        iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar4),(int)(uVar1)))));
        if (iVar2 != 0) {
          *(undefined1 *)(((int)this) + 0x28) = 0;
          uVar1 = (undefined4)(((UIManager *)this)->shareManager());
          ((UIManager *)uVar1)->showUIById(g_00587684);
          uVar1 = (undefined4)(g_00587688);
          *(undefined4 *)(((int)this) + 0x2c) = 0;
          *(undefined4 *)(((int)this) + 0x30) = 0;
          *(undefined4 *)(((int)this) + 0x38) = uVar1;
          *(undefined4 *)(((int)this) + 0x34) = 0;
          *(undefined4 *)(((int)this) + 0x3c) = 0;
          *(undefined4 *)(((int)this) + 0x40) = 0;
          piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
          (**(code **)(*piVar3 + 0x90))(piVar3,0);
        }
      }
    }
  }
  return;
}

int BLLuckyDrawPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  int iVar2;
  
  if (*(int *)(((int)this) + 0x24) == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x38));
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x34));
  }
  else {
    if (*(int *)(((int)this) + 0x24) != 1) {
      return 0;
    }
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)0)->instance());
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x2c));
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x28));
  }
  return iVar2 - iVar1 >> 2;
}

void BLLuckyDrawPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

ulonglong BLLuckyDrawPresenter::onTurnOnce(cocos2d::CCObject* p1, unsigned int p2)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00587b3a + (intptr_t)(g_00587bd8)));
  pcVar7 = (char *)(((int)this) + 0x28);
  cVar1 = (int)*(int *)&(*pcVar7);
  if (cVar1 == '\0') {
    iVar2 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
    if (*(int *)(iVar2 + 4) < 1) {
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar3))->showToast((char const*)(unsigned char *)((char *)&g_00587b5e + (intptr_t)(g_00587bdc)));
    }
    else {
      piVar4 = (int *)((DataManager *)this)->shareDataManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x28)))());
      uVar8 = (undefined4)(intptr_t)(((UserData *)(uVar3))->getVirNumber(2));
      iVar2 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
      iVar5 = (undefined4)(intptr_t)(func_0079e8c4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20)));
      if (iVar5 < *(int *)(iVar2 + 0x10)) {
        iVar2 = (undefined4)((void)(((PlatformHelp *)this)->isCrack()),(intptr_t)0);
        if (iVar2 == 0) {
          uVar3 = (undefined4)(((UIManager *)this)->shareManager());
          iVar2 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x46)),(intptr_t)0);
          if (iVar2 != 0) goto code_r0x00587bd4;
          uVar3 = (undefined4)(((UIManager *)this)->shareManager());
          uVar6 = (undefined4)(0x46);
        }
        else {
          uVar3 = (undefined4)(((UIManager *)this)->shareManager());
          uVar6 = (undefined4)(0x53);
        }
        ((UIManager *)(uVar3))->showUIById(uVar6);
      }
      else {
        *(undefined4 *)(((int)this) + 0x2c) = 1;
        piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,1);
        ((BLLuckyDrawPresenter *)(((int)this)))->requestLuckyDrawOp(0);
        *pcVar7 = '\x01';
      }
    }
  }
code_r0x00587bd4:
  return (ulonglong)ghidra_CONCAT14(cVar1,pcVar7);
}

undefined8 BLLuckyDrawPresenter::onTurnFive(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = (char *)(((int)this) + 0x28);
  if (*pcVar6 == '\0') {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
    if (*(int *)(iVar1 + 4) < 5) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_00587c04 + (intptr_t)(g_00587c7c)));
    }
    else {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
      uVar7 = (undefined4)(intptr_t)(((UserData *)(uVar2))->getVirNumber(2));
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
      iVar4 = (undefined4)(intptr_t)(func_0079e8c4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20)));
      if (iVar4 < *(int *)(iVar1 + 0x14)) {
        iVar1 = (undefined4)((void)(((PlatformHelp *)this)->isCrack()),(intptr_t)0);
        if (iVar1 == 0) {
          uVar2 = (undefined4)(((UIManager *)this)->shareManager());
          iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x46)),(intptr_t)0);
          if (iVar1 != 0) goto code_r0x00587c7a;
          uVar2 = (undefined4)(((UIManager *)this)->shareManager());
          uVar5 = (undefined4)(0x46);
        }
        else {
          uVar2 = (undefined4)(((UIManager *)this)->shareManager());
          uVar5 = (undefined4)(0x53);
        }
        ((UIManager *)(uVar2))->showUIById(uVar5);
      }
      else {
        *(undefined4 *)(((int)this) + 0x2c) = 1;
        piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,1);
        ((BLLuckyDrawPresenter *)(((int)this)))->requestLuckyDrawOp((ENUM_LUCKYDRAW_OP_TYPE)1);
        *pcVar6 = '\x01';
      }
    }
  }
code_r0x00587c7a:
  return ghidra_CONCAT44(pcVar6,((int)this));
}

undefined8 BLLuckyDrawPresenter::resetUI()
{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined *puVar5;
  code *pcVar6;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<LuckyDrawData, 0> *)this)->instance());
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 0xc))))));
  puVar5 = (unsigned char *)((char *)&g_00587ca8 + (intptr_t)(g_00587d64));
  (**(code **)(*piVar4 + 0x274))(piVar4,uVar2);
  cocos2d::CCString::createWithFormat((char const*)puVar5, *(undefined4 *)(iVar1 + 0xc));
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x124);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  cocos2d::CCString::createWithFormat((char const*)puVar5, *(undefined4 *)(iVar1 + 0x10));
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  cocos2d::CCString::createWithFormat((char const*)puVar5, *(undefined4 *)(iVar1 + 0x14));
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00587d1e + (intptr_t)(g_00587d68)), *(undefined4 *)(iVar1 + 4), *(undefined4 *)(iVar1 + 8));
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x128);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  cocos2d::CCString::createWithFormat((char const*)puVar5, *(undefined4 *)(iVar1 + 0x18));
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x14c);
  pcVar6 = *(code **)(*piVar4 + 0x1a4);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar4,uVar2);
  BLLuckyDrawPresenter::reloadRecords();
  return ghidra_CONCAT44(pcVar3,((int)this));
}

void BLLuckyDrawPresenter::onHttpRespondInfo(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckyDrawPresenter::onHttpRespondResult(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

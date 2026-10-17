#include "BLImmortalsComposeView.h"
#include "BLImmortalsComposePresenter.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0056fe6a(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056f1fc;
extern "C" unsigned long UNK_0056f22e;
extern "C" unsigned long UNK_0056f274;
extern "C" unsigned long UNK_0056f29c;
extern "C" unsigned long UNK_0056f2b4;
extern "C" unsigned long UNK_0056f312;
extern "C" unsigned long UNK_0056f404;
extern "C" unsigned long UNK_0056f45e;
extern "C" unsigned long UNK_0056f4b0;
extern "C" unsigned long UNK_0056f502;
extern "C" unsigned long UNK_0056f554;
extern "C" unsigned long UNK_0056f5a4;
extern "C" unsigned long UNK_0056f67e;
extern "C" unsigned long UNK_0056f6d6;
extern "C" unsigned long UNK_0056f78e;
extern "C" unsigned long UNK_0056f78f;
extern "C" unsigned long UNK_0056f790;
extern "C" unsigned long UNK_0056f7ec;
extern "C" unsigned long UNK_0056f898;
extern "C" unsigned long UNK_0056f8f4;
extern "C" unsigned long UNK_0056f990;
extern "C" unsigned long UNK_0056f99a;
extern "C" unsigned long UNK_0056f9ab;
extern "C" unsigned long UNK_0056f9ae;
extern "C" unsigned long UNK_0056f9b8;
extern "C" unsigned long UNK_0056fa00;
extern "C" unsigned long UNK_0056fa6a;
extern "C" unsigned long UNK_0056fa76;
extern "C" unsigned long UNK_0056fa88;
extern "C" unsigned long UNK_0056fa9a;
extern "C" unsigned long UNK_0056fb0c;
extern "C" unsigned long UNK_0056fb0e;
extern "C" unsigned long UNK_0056fb24;
extern "C" unsigned long UNK_0056fb3e;
extern "C" unsigned long UNK_0056fb6a;
extern "C" unsigned long UNK_0056fb6c;
extern "C" unsigned long UNK_0056fb82;
extern "C" unsigned long UNK_0056fb9c;
extern "C" unsigned long UNK_0056fbf0;
extern "C" unsigned long UNK_0056fc08;
extern "C" unsigned long UNK_0056fc28;
extern "C" unsigned long UNK_0056fc54;
extern "C" unsigned long UNK_0056fc56;
extern "C" unsigned long UNK_0056fc72;
extern "C" unsigned long UNK_0056fc86;
extern "C" unsigned long UNK_0056fcc2;
extern "C" unsigned long UNK_0056fcdc;
extern "C" unsigned long UNK_0056fcfa;
extern "C" unsigned long UNK_0056fd2e;
extern "C" unsigned long UNK_0056fd30;
extern "C" unsigned long UNK_0056fd46;
extern "C" unsigned long UNK_0056fd60;
extern "C" unsigned long UNK_0056fd96;
extern "C" unsigned long UNK_0056fd98;
extern "C" unsigned long UNK_0056fdb0;
extern "C" unsigned long UNK_0056fdc8;
extern "C" unsigned long _UNK_0056f260;
extern "C" unsigned long _UNK_0056f264;
extern "C" unsigned long _UNK_0056f278;
extern "C" unsigned long _UNK_0056f2a0;
extern "C" unsigned long _UNK_0056f33c;
extern "C" unsigned long _UNK_0056f340;
extern "C" unsigned long _UNK_0056f6fc;
extern "C" unsigned long _UNK_0056f700;
extern "C" unsigned long _UNK_0056f704;
extern "C" unsigned long _UNK_0056f708;
extern "C" unsigned long _UNK_0056f70c;
extern "C" unsigned long _UNK_0056f710;
extern "C" unsigned long _UNK_0056f714;
extern "C" unsigned long _UNK_0056f718;
extern "C" unsigned long _UNK_0056f71c;
extern "C" unsigned long _UNK_0056f720;
extern "C" unsigned long _UNK_0056f724;
extern "C" unsigned long _UNK_0056f728;
extern "C" unsigned long _UNK_0056f72c;
extern "C" unsigned long _UNK_0056f730;
extern "C" unsigned long _UNK_0056f734;
extern "C" unsigned long _UNK_0056f738;
extern "C" unsigned long _UNK_0056f73c;
extern "C" unsigned long _UNK_0056f740;
extern "C" unsigned long _UNK_0056f744;
extern "C" unsigned long _UNK_0056f748;
extern "C" unsigned long _UNK_0056f74c;
extern "C" unsigned long _UNK_0056f750;
extern "C" unsigned long _UNK_0056f754;
extern "C" unsigned long _UNK_0056f758;
extern "C" unsigned long _UNK_0056f75c;
extern "C" unsigned long _UNK_0056f760;
extern "C" unsigned long _UNK_0056f764;
extern "C" unsigned long _UNK_0056f768;
extern "C" unsigned long _UNK_0056f76c;
extern "C" unsigned long _UNK_0056f770;
extern "C" unsigned long _UNK_0056f774;
extern "C" unsigned long _UNK_0056faa4;
extern "C" unsigned long _UNK_0056faa8;
extern "C" unsigned long _UNK_0056faac;
extern "C" unsigned long _UNK_0056fab0;
extern "C" unsigned long _UNK_0056fab4;
extern "C" unsigned long _UNK_0056fab8;
extern "C" unsigned long _UNK_0056fabc;
extern "C" unsigned long _UNK_0056fac0;
extern "C" unsigned long _UNK_0056fac4;
extern "C" unsigned long _UNK_0056fac8;
extern "C" unsigned long _UNK_0056facc;
extern "C" unsigned long _UNK_0056fad0;
extern "C" unsigned long _UNK_0056fad4;
extern "C" unsigned long _UNK_0056fad8;
extern "C" unsigned long _UNK_0056fadc;
extern "C" unsigned long _UNK_0056fae0;
extern "C" unsigned long _UNK_0056fae4;
extern "C" unsigned long _UNK_0056fae8;
extern "C" unsigned long _UNK_0056faec;
extern "C" unsigned long _UNK_0056faf0;
extern "C" unsigned long _UNK_0056faf4;
extern "C" unsigned long _UNK_0056faf8;
extern "C" unsigned long _UNK_0056fe78;
extern "C" unsigned long _UNK_0056fe7c;
extern "C" unsigned long _UNK_0056fe80;
extern "C" unsigned long _UNK_0056fe84;
extern "C" unsigned long _UNK_0056fe88;
extern "C" unsigned long _UNK_0056fe8c;
extern "C" unsigned long _UNK_0056fe90;
extern "C" unsigned long _UNK_0056fe94;
extern "C" unsigned long _UNK_0056fe98;
extern "C" unsigned long _UNK_0056fe9c;
extern "C" unsigned long _UNK_0056fea0;
extern "C" unsigned long _UNK_0056fea4;
extern "C" unsigned long _UNK_0056fea8;
extern "C" unsigned long _UNK_0056feac;
extern "C" unsigned long _UNK_0056feb0;
extern "C" unsigned long _UNK_0056feb4;
extern "C" unsigned long _UNK_0056feb8;
extern "C" unsigned long _UNK_0056febc;
extern "C" unsigned long _UNK_0056fec0;
extern "C" unsigned long _UNK_0056fec4;
extern "C" unsigned long _UNK_0056fec8;
extern "C" unsigned long _UNK_0056fecc;
extern "C" unsigned long _UNK_0056fed0;
extern "C" unsigned long _UNK_0056fed4;
extern "C" unsigned long _UNK_0056fed8;
extern "C" unsigned long _UNK_0056fedc;
extern "C" unsigned long _UNK_0056fee0;
extern "C" unsigned long _UNK_0056fee4;
extern "C" unsigned long _UNK_0056fee8;
extern "C" unsigned long _UNK_0056feec;
extern "C" unsigned long _UNK_0056fef0;
extern "C" unsigned long _UNK_0056fef4;
extern "C" unsigned long _UNK_0056fef8;
extern "C" unsigned long _UNK_0056fefc;
extern "C" unsigned long _UNK_0056ff00;
extern "C" unsigned long _UNK_0056ff04;
extern "C" unsigned long _UNK_0056ff08;
extern "C" unsigned long g_0056f1fc;
extern "C" unsigned long g_0056f22e;
extern "C" unsigned long g_0056f260;
extern "C" unsigned long g_0056f264;
extern "C" unsigned long g_0056f274;
extern "C" unsigned long g_0056f278;
extern "C" unsigned long g_0056f29c;
extern "C" unsigned long g_0056f2a0;
extern "C" unsigned long g_0056f2b4;
extern "C" unsigned long g_0056f312;
extern "C" unsigned long g_0056f33c;
extern "C" unsigned long g_0056f340;
extern "C" unsigned long g_0056f404;
extern "C" unsigned long g_0056f45e;
extern "C" unsigned long g_0056f4b0;
extern "C" unsigned long g_0056f502;
extern "C" unsigned long g_0056f554;
extern "C" unsigned long g_0056f5a4;
extern "C" unsigned long g_0056f67e;
extern "C" unsigned long g_0056f6d6;
extern "C" unsigned long g_0056f6fc;
extern "C" unsigned long g_0056f700;
extern "C" unsigned long g_0056f704;
extern "C" unsigned long g_0056f708;
extern "C" unsigned long g_0056f70c;
extern "C" unsigned long g_0056f710;
extern "C" unsigned long g_0056f714;
extern "C" unsigned long g_0056f718;
extern "C" unsigned long g_0056f71c;
extern "C" unsigned long g_0056f720;
extern "C" unsigned long g_0056f724;
extern "C" unsigned long g_0056f728;
extern "C" unsigned long g_0056f72c;
extern "C" unsigned long g_0056f730;
extern "C" unsigned long g_0056f734;
extern "C" unsigned long g_0056f738;
extern "C" unsigned long g_0056f73c;
extern "C" unsigned long g_0056f740;
extern "C" unsigned long g_0056f744;
extern "C" unsigned long g_0056f748;
extern "C" unsigned long g_0056f74c;
extern "C" unsigned long g_0056f750;
extern "C" unsigned long g_0056f754;
extern "C" unsigned long g_0056f758;
extern "C" unsigned long g_0056f75c;
extern "C" unsigned long g_0056f760;
extern "C" unsigned long g_0056f764;
extern "C" unsigned long g_0056f768;
extern "C" unsigned long g_0056f76c;
extern "C" unsigned long g_0056f770;
extern "C" unsigned long g_0056f774;
extern "C" unsigned long g_0056f78e;
extern "C" unsigned long g_0056f78f;
extern "C" unsigned long g_0056f790;
extern "C" unsigned long g_0056f7ec;
extern "C" unsigned long g_0056f898;
extern "C" unsigned long g_0056f8f4;
extern "C" unsigned long g_0056f990;
extern "C" unsigned long g_0056f99a;
extern "C" unsigned long g_0056f9ab;
extern "C" unsigned long g_0056f9ae;
extern "C" unsigned long g_0056f9b8;
extern "C" unsigned long g_0056fa00;
extern "C" unsigned long g_0056fa6a;
extern "C" unsigned long g_0056fa76;
extern "C" unsigned long g_0056fa88;
extern "C" unsigned long g_0056fa9a;
extern "C" unsigned long g_0056faa4;
extern "C" unsigned long g_0056faa8;
extern "C" unsigned long g_0056faac;
extern "C" unsigned long g_0056fab0;
extern "C" unsigned long g_0056fab4;
extern "C" unsigned long g_0056fab8;
extern "C" unsigned long g_0056fabc;
extern "C" unsigned long g_0056fac0;
extern "C" unsigned long g_0056fac4;
extern "C" unsigned long g_0056fac8;
extern "C" unsigned long g_0056facc;
extern "C" unsigned long g_0056fad0;
extern "C" unsigned long g_0056fad4;
extern "C" unsigned long g_0056fad8;
extern "C" unsigned long g_0056fadc;
extern "C" unsigned long g_0056fae0;
extern "C" unsigned long g_0056fae4;
extern "C" unsigned long g_0056fae8;
extern "C" unsigned long g_0056faec;
extern "C" unsigned long g_0056faf0;
extern "C" unsigned long g_0056faf4;
extern "C" unsigned long g_0056faf8;
extern "C" unsigned long g_0056fb0c;
extern "C" unsigned long g_0056fb0e;
extern "C" unsigned long g_0056fb24;
extern "C" unsigned long g_0056fb3e;
extern "C" unsigned long g_0056fb6a;
extern "C" unsigned long g_0056fb6c;
extern "C" unsigned long g_0056fb82;
extern "C" unsigned long g_0056fb9c;
extern "C" unsigned long g_0056fbf0;
extern "C" unsigned long g_0056fc08;
extern "C" unsigned long g_0056fc28;
extern "C" unsigned long g_0056fc54;
extern "C" unsigned long g_0056fc56;
extern "C" unsigned long g_0056fc72;
extern "C" unsigned long g_0056fc86;
extern "C" unsigned long g_0056fcc2;
extern "C" unsigned long g_0056fcdc;
extern "C" unsigned long g_0056fcfa;
extern "C" unsigned long g_0056fd2e;
extern "C" unsigned long g_0056fd30;
extern "C" unsigned long g_0056fd46;
extern "C" unsigned long g_0056fd60;
extern "C" unsigned long g_0056fd96;
extern "C" unsigned long g_0056fd98;
extern "C" unsigned long g_0056fdb0;
extern "C" unsigned long g_0056fdc8;
extern "C" unsigned long g_0056fe78;
extern "C" unsigned long g_0056fe7c;
extern "C" unsigned long g_0056fe80;
extern "C" unsigned long g_0056fe84;
extern "C" unsigned long g_0056fe88;
extern "C" unsigned long g_0056fe8c;
extern "C" unsigned long g_0056fe90;
extern "C" unsigned long g_0056fe94;
extern "C" unsigned long g_0056fe98;
extern "C" unsigned long g_0056fe9c;
extern "C" unsigned long g_0056fea0;
extern "C" unsigned long g_0056fea4;
extern "C" unsigned long g_0056fea8;
extern "C" unsigned long g_0056feac;
extern "C" unsigned long g_0056feb0;
extern "C" unsigned long g_0056feb4;
extern "C" unsigned long g_0056feb8;
extern "C" unsigned long g_0056febc;
extern "C" unsigned long g_0056fec0;
extern "C" unsigned long g_0056fec4;
extern "C" unsigned long g_0056fec8;
extern "C" unsigned long g_0056fecc;
extern "C" unsigned long g_0056fed0;
extern "C" unsigned long g_0056fed4;
extern "C" unsigned long g_0056fed8;
extern "C" unsigned long g_0056fedc;
extern "C" unsigned long g_0056fee0;
extern "C" unsigned long g_0056fee4;
extern "C" unsigned long g_0056fee8;
extern "C" unsigned long g_0056feec;
extern "C" unsigned long g_0056fef0;
extern "C" unsigned long g_0056fef4;
extern "C" unsigned long g_0056fef8;
extern "C" unsigned long g_0056fefc;
extern "C" unsigned long g_0056ff00;
extern "C" unsigned long g_0056ff04;
extern "C" unsigned long g_0056ff08;
BLImmortalsComposeView::~BLImmortalsComposeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056f1fc + g_0056f260);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056f22e + g_0056f264,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsComposeView::BLImmortalsComposeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0056f2b4 + g_0056f33c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4e)) = 0;
  *(int *)((int)this + 4*(0x4f)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  *(int *)((int)this + 4*(0x50)) = 0;
  *(int *)((int)this + 4*(0x54)) = 0;
  *(int *)((int)this + 4*(0x51)) = 0;
  *(int *)((int)this + 4*(0x55)) = 0;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x56)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056f312 + g_0056f340,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLImmortalsComposeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x15c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLImmortalsComposeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLImmortalsComposeView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLImmortalsComposePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void BLImmortalsComposeView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLImmortalsComposePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLImmortalsComposeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

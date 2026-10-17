#include "BLImmortalsRefineView.h"
#include "BLImmortalsRefinePresenter.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00572330;
extern "C" unsigned long UNK_00572362;
extern "C" unsigned long UNK_005723bc;
extern "C" unsigned long UNK_005723e4;
extern "C" unsigned long UNK_00572d70;
extern "C" unsigned long UNK_00572d9e;
extern "C" unsigned long UNK_00572df4;
extern "C" unsigned long UNK_00572e02;
extern "C" unsigned long UNK_00572e2a;
extern "C" unsigned long UNK_00572e3a;
extern "C" unsigned long UNK_00572e48;
extern "C" unsigned long UNK_00572e56;
extern "C" unsigned long UNK_0057322e;
extern "C" unsigned long UNK_005732f0;
extern "C" unsigned long UNK_005732f2;
extern "C" unsigned long UNK_00573305;
extern "C" unsigned long UNK_0057344a;
extern "C" unsigned long UNK_005734d6;
extern "C" unsigned long UNK_005734dc;
extern "C" unsigned long UNK_00573592;
extern "C" unsigned long _UNK_005723a8;
extern "C" unsigned long _UNK_005723ac;
extern "C" unsigned long _UNK_005723c0;
extern "C" unsigned long _UNK_005723e8;
extern "C" unsigned long _UNK_00572dc8;
extern "C" unsigned long _UNK_00572dcc;
extern "C" unsigned long _UNK_00572f28;
extern "C" unsigned long _UNK_00572f2c;
extern "C" unsigned long _UNK_00572f30;
extern "C" unsigned long _UNK_00572f34;
extern "C" unsigned long _UNK_00572f38;
extern "C" unsigned long _UNK_00572f3c;
extern "C" unsigned long _UNK_0057307c;
extern "C" unsigned long _UNK_00573080;
extern "C" unsigned long _UNK_00573084;
extern "C" unsigned long _UNK_00573088;
extern "C" unsigned long _UNK_005734e4;
extern "C" unsigned long _UNK_005734e8;
extern "C" unsigned long _UNK_005734ec;
extern "C" unsigned long _UNK_005734f0;
extern "C" unsigned long _UNK_005734f4;
extern "C" unsigned long _UNK_005734f8;
extern "C" unsigned long _UNK_005734fc;
extern "C" unsigned long _UNK_00573500;
extern "C" unsigned long _UNK_00573504;
extern "C" unsigned long _UNK_00573508;
extern "C" unsigned long _UNK_0057350c;
extern "C" unsigned long _UNK_00573510;
extern "C" unsigned long _UNK_00573514;
extern "C" unsigned long _UNK_00573630;
extern "C" unsigned long _UNK_00573634;
extern "C" unsigned long g_00572330;
extern "C" unsigned long g_00572362;
extern "C" unsigned long g_005723a8;
extern "C" unsigned long g_005723ac;
extern "C" unsigned long g_005723bc;
extern "C" unsigned long g_005723c0;
extern "C" unsigned long g_005723e4;
extern "C" unsigned long g_005723e8;
extern "C" unsigned long g_00572d70;
extern "C" unsigned long g_00572d9e;
extern "C" unsigned long g_00572dc8;
extern "C" unsigned long g_00572dcc;
extern "C" unsigned long g_00572df4;
extern "C" unsigned long g_00572e02;
extern "C" unsigned long g_00572e2a;
extern "C" unsigned long g_00572e3a;
extern "C" unsigned long g_00572e48;
extern "C" unsigned long g_00572e56;
extern "C" unsigned long g_00572f28;
extern "C" unsigned long g_00572f2c;
extern "C" unsigned long g_00572f30;
extern "C" unsigned long g_00572f34;
extern "C" unsigned long g_00572f38;
extern "C" unsigned long g_00572f3c;
extern "C" unsigned long g_0057307c;
extern "C" unsigned long g_00573080;
extern "C" unsigned long g_00573084;
extern "C" unsigned long g_00573088;
extern "C" unsigned long g_0057322e;
extern "C" unsigned long g_005732f0;
extern "C" unsigned long g_005732f2;
extern "C" unsigned long g_00573305;
extern "C" unsigned long g_0057344a;
extern "C" unsigned long g_005734d6;
extern "C" unsigned long g_005734dc;
extern "C" unsigned long g_005734e4;
extern "C" unsigned long g_005734e8;
extern "C" unsigned long g_005734ec;
extern "C" unsigned long g_005734f0;
extern "C" unsigned long g_005734f4;
extern "C" unsigned long g_005734f8;
extern "C" unsigned long g_005734fc;
extern "C" unsigned long g_00573500;
extern "C" unsigned long g_00573504;
extern "C" unsigned long g_00573508;
extern "C" unsigned long g_0057350c;
extern "C" unsigned long g_00573510;
extern "C" unsigned long g_00573514;
extern "C" unsigned long g_00573592;
extern "C" unsigned long g_00573630;
extern "C" unsigned long g_00573634;
BLImmortalsRefineView::~BLImmortalsRefineView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00572330 + g_005723a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00572362 + g_005723ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLImmortalsRefineView::onEnter()
{
  ((BLImmortalsRefinePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsRefineView::onExit()
{
  ((BLImmortalsRefinePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLImmortalsRefineView::BLImmortalsRefineView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00572d70 + g_00572dc8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00572d9e + g_00572dcc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLImmortalsRefineView::getArrText()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [8];
  int aiStack_28 [2];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  aiStack_28[0] = 1;
  aiStack_28[1] = 3;
  func_0079e45c(auStack_20,&g_00572df4 + g_00572f28,auStack_30);
  func_0079e45c(auStack_1c,&g_00572e02 + g_00572f2c,auStack_30);
  auStack_30[0] = 0xff;
  auStack_30[1] = 0xff;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[4] = 0;
  auStack_30[5] = 0;
  iVar5 = 0;
  while( true ) {
    piVar2 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    *piVar2 = *(int *)(&g_00572e2a + g_00572f30) + 8;
    iVar4 = g_00572f38;
    iVar3 = *(int *)(&g_00572e3a + g_00572f34);
    piVar2[6] = iVar3 + 0xc;
    piVar2[7] = iVar3 + 0xc;
    piVar2[5] = 1;
    func_0079e2dc(piVar2 + 6,&g_00572e48 + iVar4);
    func_0079e2dc(piVar2 + 7,&g_00572e56 + g_00572f3c);
    piVar2[10] = 0x14;
    piVar2[8] = 0;
    *(undefined1 *)(piVar2 + 9) = 0xff;
    *(undefined1 *)((int)piVar2 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar2 + 0x26) = 0xff;
    piVar2[0xb] = 0x3f800000;
    piVar2[0xd] = 0;
    piVar2[0xc] = 0;
    *(undefined1 *)(piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0x39) = 0;
    ((cocos2d::CCObject *)piVar2)->autorelease();
    piVar2[5] = aiStack_28[iVar5];
    func_0079e52c(piVar2 + 6,auStack_20 + iVar5 * 4);
    iVar4 = iVar5 * 3;
    *(undefined1 *)(piVar2 + 9) = auStack_30[iVar4];
    *(undefined1 *)((int)piVar2 + 0x25) = auStack_30[iVar4 + 1];
    *(undefined1 *)((int)piVar2 + 0x26) = auStack_30[iVar4 + 2];
    piVar2[10] = 0x14;
    ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar2);
    if (iVar5 == 1) break;
    iVar5 = 1;
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return uVar1;
}


bool BLImmortalsRefineView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsRefinePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsRefineView::initView();
    ((BLImmortalsRefinePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsRefineView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsRefineView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

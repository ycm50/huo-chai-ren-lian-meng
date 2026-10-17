#include "BLMissionMoneyTreeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionMoneyTreePresenter.h"
#include "BLTreeRoleItemView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005d43be(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d2a2c;
extern "C" unsigned long UNK_005d2a62;
extern "C" unsigned long UNK_005d2ad0;
extern "C" unsigned long UNK_005d2af8;
extern "C" unsigned long UNK_005d35a6;
extern "C" unsigned long UNK_005d35e6;
extern "C" unsigned long UNK_005d365e;
extern "C" unsigned long UNK_005d3662;
extern "C" unsigned long UNK_005d3690;
extern "C" unsigned long UNK_005d36f2;
extern "C" unsigned long UNK_005d3802;
extern "C" unsigned long UNK_005d3803;
extern "C" unsigned long UNK_005d3804;
extern "C" unsigned long UNK_005d3862;
extern "C" unsigned long UNK_005d395c;
extern "C" unsigned long UNK_005d3b9a;
extern "C" unsigned long UNK_005d3bb2;
extern "C" unsigned long UNK_005d3bf1;
extern "C" unsigned long UNK_005d3c6a;
extern "C" unsigned long UNK_005d3c6e;
extern "C" unsigned long UNK_005d3e28;
extern "C" unsigned long UNK_005d3e2e;
extern "C" unsigned long UNK_005d3e73;
extern "C" unsigned long UNK_005d3e76;
extern "C" unsigned long UNK_005d3ec0;
extern "C" unsigned long UNK_005d3f90;
extern "C" unsigned long UNK_005d3ffe;
extern "C" unsigned long UNK_005d4000;
extern "C" unsigned long UNK_005d4014;
extern "C" unsigned long UNK_005d4078;
extern "C" unsigned long UNK_005d4142;
extern "C" unsigned long UNK_005d4146;
extern "C" unsigned long UNK_005d4154;
extern "C" unsigned long UNK_005d415a;
extern "C" unsigned long UNK_005d420a;
extern "C" unsigned long UNK_005d427e;
extern "C" unsigned long UNK_005d42fc;
extern "C" unsigned long _DAT_005d3420;
extern "C" unsigned long _DAT_005d3424;
extern "C" unsigned long _UNK_005d2abc;
extern "C" unsigned long _UNK_005d2ac0;
extern "C" unsigned long _UNK_005d2ad4;
extern "C" unsigned long _UNK_005d2afc;
extern "C" unsigned long _UNK_005d38f0;
extern "C" unsigned long _UNK_005d38f4;
extern "C" unsigned long _UNK_005d38f8;
extern "C" unsigned long _UNK_005d38fc;
extern "C" unsigned long _UNK_005d3900;
extern "C" unsigned long _UNK_005d3904;
extern "C" unsigned long _UNK_005d3908;
extern "C" unsigned long _UNK_005d390c;
extern "C" unsigned long _UNK_005d3910;
extern "C" unsigned long _UNK_005d3914;
extern "C" unsigned long _UNK_005d3918;
extern "C" unsigned long _UNK_005d391c;
extern "C" unsigned long _UNK_005d3920;
extern "C" unsigned long _UNK_005d3924;
extern "C" unsigned long _UNK_005d3928;
extern "C" unsigned long _UNK_005d392c;
extern "C" unsigned long _UNK_005d3970;
extern "C" unsigned long _UNK_005d3974;
extern "C" unsigned long _UNK_005d3dd4;
extern "C" unsigned long _UNK_005d3dd8;
extern "C" unsigned long _UNK_005d3ddc;
extern "C" unsigned long _UNK_005d3de0;
extern "C" unsigned long _UNK_005d3de4;
extern "C" unsigned long _UNK_005d3de8;
extern "C" unsigned long _UNK_005d3dec;
extern "C" unsigned long _UNK_005d3df0;
extern "C" unsigned long _UNK_005d3df4;
extern "C" unsigned long _UNK_005d3df8;
extern "C" unsigned long _UNK_005d3dfc;
extern "C" unsigned long _UNK_005d3e00;
extern "C" unsigned long _UNK_005d3e04;
extern "C" unsigned long _UNK_005d3e08;
extern "C" unsigned long _UNK_005d3e0c;
extern "C" unsigned long _UNK_005d4090;
extern "C" unsigned long _UNK_005d4094;
extern "C" unsigned long _UNK_005d4098;
extern "C" unsigned long _UNK_005d409c;
extern "C" unsigned long _UNK_005d40a0;
extern "C" unsigned long _UNK_005d40a4;
extern "C" unsigned long _UNK_005d40a8;
extern "C" unsigned long _UNK_005d40ac;
extern "C" unsigned long _UNK_005d40b0;
extern "C" unsigned long _UNK_005d40b4;
extern "C" unsigned long _UNK_005d40b8;
extern "C" unsigned long _UNK_005d40bc;
extern "C" unsigned long _UNK_005d40c0;
extern "C" unsigned long _UNK_005d40c4;
extern "C" unsigned long _UNK_005d40c8;
extern "C" unsigned long _UNK_005d40cc;
extern "C" unsigned long _UNK_005d43d8;
extern "C" unsigned long _UNK_005d43dc;
extern "C" unsigned long _UNK_005d43e0;
extern "C" unsigned long _UNK_005d43e4;
extern "C" unsigned long _UNK_005d43e8;
extern "C" unsigned long _UNK_005d43ec;
extern "C" unsigned long _UNK_005d43f0;
extern "C" unsigned long _UNK_005d43f4;
extern "C" unsigned long _UNK_005d43f8;
extern "C" unsigned long _UNK_005d43fc;
extern "C" unsigned long _UNK_005d4400;
extern "C" unsigned long g_005d2a2c;
extern "C" unsigned long g_005d2a62;
extern "C" unsigned long g_005d2abc;
extern "C" unsigned long g_005d2ac0;
extern "C" unsigned long g_005d2ad0;
extern "C" unsigned long g_005d2ad4;
extern "C" unsigned long g_005d2af8;
extern "C" unsigned long g_005d2afc;
extern "C" unsigned long g_005d3420;
extern "C" unsigned long g_005d3424;
extern "C" unsigned long g_005d35a6;
extern "C" unsigned long g_005d35e6;
extern "C" unsigned long g_005d365e;
extern "C" unsigned long g_005d3662;
extern "C" unsigned long g_005d3690;
extern "C" unsigned long g_005d36f2;
extern "C" unsigned long g_005d3802;
extern "C" unsigned long g_005d3803;
extern "C" unsigned long g_005d3804;
extern "C" unsigned long g_005d3862;
extern "C" unsigned long g_005d38f0;
extern "C" unsigned long g_005d38f4;
extern "C" unsigned long g_005d38f8;
extern "C" unsigned long g_005d38fc;
extern "C" unsigned long g_005d3900;
extern "C" unsigned long g_005d3904;
extern "C" unsigned long g_005d3908;
extern "C" unsigned long g_005d390c;
extern "C" unsigned long g_005d3910;
extern "C" unsigned long g_005d3914;
extern "C" unsigned long g_005d3918;
extern "C" unsigned long g_005d391c;
extern "C" unsigned long g_005d3920;
extern "C" unsigned long g_005d3924;
extern "C" unsigned long g_005d3928;
extern "C" unsigned long g_005d392c;
extern "C" unsigned long g_005d395c;
extern "C" unsigned long g_005d3970;
extern "C" unsigned long g_005d3974;
extern "C" unsigned long g_005d3b9a;
extern "C" unsigned long g_005d3bb2;
extern "C" unsigned long g_005d3bf1;
extern "C" unsigned long g_005d3c6a;
extern "C" unsigned long g_005d3c6e;
extern "C" unsigned long g_005d3dd4;
extern "C" unsigned long g_005d3dd8;
extern "C" unsigned long g_005d3ddc;
extern "C" unsigned long g_005d3de0;
extern "C" unsigned long g_005d3de4;
extern "C" unsigned long g_005d3de8;
extern "C" unsigned long g_005d3dec;
extern "C" unsigned long g_005d3df0;
extern "C" unsigned long g_005d3df4;
extern "C" unsigned long g_005d3df8;
extern "C" unsigned long g_005d3dfc;
extern "C" unsigned long g_005d3e00;
extern "C" unsigned long g_005d3e04;
extern "C" unsigned long g_005d3e08;
extern "C" unsigned long g_005d3e0c;
extern "C" unsigned long g_005d3e28;
extern "C" unsigned long g_005d3e2e;
extern "C" unsigned long g_005d3e73;
extern "C" unsigned long g_005d3e76;
extern "C" unsigned long g_005d3ec0;
extern "C" unsigned long g_005d3f90;
extern "C" unsigned long g_005d3ffe;
extern "C" unsigned long g_005d4000;
extern "C" unsigned long g_005d4014;
extern "C" unsigned long g_005d4078;
extern "C" unsigned long g_005d4090;
extern "C" unsigned long g_005d4094;
extern "C" unsigned long g_005d4098;
extern "C" unsigned long g_005d409c;
extern "C" unsigned long g_005d40a0;
extern "C" unsigned long g_005d40a4;
extern "C" unsigned long g_005d40a8;
extern "C" unsigned long g_005d40ac;
extern "C" unsigned long g_005d40b0;
extern "C" unsigned long g_005d40b4;
extern "C" unsigned long g_005d40b8;
extern "C" unsigned long g_005d40bc;
extern "C" unsigned long g_005d40c0;
extern "C" unsigned long g_005d40c4;
extern "C" unsigned long g_005d40c8;
extern "C" unsigned long g_005d40cc;
extern "C" unsigned long g_005d4142;
extern "C" unsigned long g_005d4146;
extern "C" unsigned long g_005d4154;
extern "C" unsigned long g_005d415a;
extern "C" unsigned long g_005d420a;
extern "C" unsigned long g_005d427e;
extern "C" unsigned long g_005d42fc;
extern "C" unsigned long g_005d43d8;
extern "C" unsigned long g_005d43dc;
extern "C" unsigned long g_005d43e0;
extern "C" unsigned long g_005d43e4;
extern "C" unsigned long g_005d43e8;
extern "C" unsigned long g_005d43ec;
extern "C" unsigned long g_005d43f0;
extern "C" unsigned long g_005d43f4;
extern "C" unsigned long g_005d43f8;
extern "C" unsigned long g_005d43fc;
extern "C" unsigned long g_005d4400;
BLMissionMoneyTreeView::~BLMissionMoneyTreeView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005d2a2c + g_005d2abc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005d2a62 + g_005d2ac0,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x52)) = *(int *)((int)this + 4*(0x51));
  if (*(int *)((int)this + 4*(0x51)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x51)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMoneyTreeView::BLMissionMoneyTreeView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)("PƮ");
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x51)) = 0;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMissionMoneyTreeView"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x52)) = *(int *)((int)this + 4*(0x51));
  return;
}


bool BLMissionMoneyTreeView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionMoneyTreePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionMoneyTreeView::initView();
    ((BLMissionMoneyTreePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionMoneyTreeView*)((int)this));
  }
  return iVar1;
}

void BLMissionMoneyTreeView::onEnter()
{
  ((BLMissionMoneyTreePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionMoneyTreeView::onExit()
{
  ((BLMissionMoneyTreePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionMoneyTreeView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

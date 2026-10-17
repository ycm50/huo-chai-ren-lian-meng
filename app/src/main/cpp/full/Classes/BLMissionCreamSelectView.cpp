#include "BLMissionCreamSelectView.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamSelectPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e794(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c4a24;
extern "C" unsigned long UNK_005c4a68;
extern "C" unsigned long UNK_005c4aac;
extern "C" unsigned long UNK_005c4ad4;
extern "C" unsigned long UNK_005c4d32;
extern "C" unsigned long UNK_005c4e0e;
extern "C" unsigned long UNK_005c4f08;
extern "C" unsigned long UNK_005c4f42;
extern "C" unsigned long UNK_005c50fe;
extern "C" unsigned long UNK_005c5100;
extern "C" unsigned long UNK_005c5248;
extern "C" unsigned long UNK_005c5278;
extern "C" unsigned long UNK_005c535c;
extern "C" unsigned long UNK_005c5384;
extern "C" unsigned long UNK_005c5466;
extern "C" unsigned long UNK_005c5492;
extern "C" unsigned long UNK_005c5526;
extern "C" unsigned long UNK_005c552a;
extern "C" unsigned long UNK_005c5610;
extern "C" unsigned long UNK_005c5632;
extern "C" unsigned long UNK_005c56ec;
extern "C" unsigned long UNK_005c571a;
extern "C" unsigned long UNK_005c57b0;
extern "C" unsigned long UNK_005c57b4;
extern "C" unsigned long UNK_005c5852;
extern "C" unsigned long UNK_005c5855;
extern "C" unsigned long UNK_005c5874;
extern "C" unsigned long UNK_005c5912;
extern "C" unsigned long UNK_005c5a20;
extern "C" unsigned long UNK_005c5b2c;
extern "C" unsigned long UNK_005c5b58;
extern "C" unsigned long UNK_005c5bf2;
extern "C" unsigned long UNK_005c5bf6;
extern "C" unsigned long UNK_005c5c94;
extern "C" unsigned long UNK_005c5c97;
extern "C" unsigned long UNK_005c5cb6;
extern "C" unsigned long UNK_005c5d54;
extern "C" unsigned long UNK_005c5e64;
extern "C" unsigned long UNK_005c5f70;
extern "C" unsigned long UNK_005c5f9c;
extern "C" unsigned long UNK_005c6036;
extern "C" unsigned long UNK_005c603a;
extern "C" unsigned long UNK_005c60d8;
extern "C" unsigned long UNK_005c60db;
extern "C" unsigned long UNK_005c60fa;
extern "C" unsigned long UNK_005c6198;
extern "C" unsigned long UNK_005c62a8;
extern "C" unsigned long UNK_005c63b4;
extern "C" unsigned long UNK_005c63e0;
extern "C" unsigned long UNK_005c647a;
extern "C" unsigned long UNK_005c647e;
extern "C" unsigned long UNK_005c651c;
extern "C" unsigned long UNK_005c651f;
extern "C" unsigned long UNK_005c653e;
extern "C" unsigned long UNK_005c65dc;
extern "C" unsigned long UNK_005c66ee;
extern "C" unsigned long UNK_005c684e;
extern "C" unsigned long UNK_005c68dc;
extern "C" unsigned long _DAT_005c4b74;
extern "C" unsigned long _DAT_005c4b78;
extern "C" unsigned long _UNK_005c4a98;
extern "C" unsigned long _UNK_005c4a9c;
extern "C" unsigned long _UNK_005c4ab0;
extern "C" unsigned long _UNK_005c4ad8;
extern "C" unsigned long _UNK_005c5118;
extern "C" unsigned long _UNK_005c511c;
extern "C" unsigned long _UNK_005c5120;
extern "C" unsigned long _UNK_005c5124;
extern "C" unsigned long _UNK_005c5128;
extern "C" unsigned long _UNK_005c512c;
extern "C" unsigned long _UNK_005c5130;
extern "C" unsigned long _UNK_005c5134;
extern "C" unsigned long _UNK_005c5138;
extern "C" unsigned long _UNK_005c513c;
extern "C" unsigned long _UNK_005c5140;
extern "C" unsigned long _UNK_005c5144;
extern "C" unsigned long _UNK_005c5148;
extern "C" unsigned long _UNK_005c514c;
extern "C" unsigned long _UNK_005c5150;
extern "C" unsigned long _UNK_005c5570;
extern "C" unsigned long _UNK_005c5574;
extern "C" unsigned long _UNK_005c5578;
extern "C" unsigned long _UNK_005c557c;
extern "C" unsigned long _UNK_005c5580;
extern "C" unsigned long _UNK_005c5584;
extern "C" unsigned long _UNK_005c5588;
extern "C" unsigned long _UNK_005c558c;
extern "C" unsigned long _UNK_005c5590;
extern "C" unsigned long _UNK_005c5594;
extern "C" unsigned long _UNK_005c5598;
extern "C" unsigned long _UNK_005c559c;
extern "C" unsigned long _UNK_005c55a0;
extern "C" unsigned long _UNK_005c55a4;
extern "C" unsigned long _UNK_005c55a8;
extern "C" unsigned long _UNK_005c55ac;
extern "C" unsigned long _UNK_005c55b0;
extern "C" unsigned long _UNK_005c55b4;
extern "C" unsigned long _UNK_005c59b0;
extern "C" unsigned long _UNK_005c59b4;
extern "C" unsigned long _UNK_005c59b8;
extern "C" unsigned long _UNK_005c59bc;
extern "C" unsigned long _UNK_005c59c0;
extern "C" unsigned long _UNK_005c59c4;
extern "C" unsigned long _UNK_005c59c8;
extern "C" unsigned long _UNK_005c59cc;
extern "C" unsigned long _UNK_005c59d0;
extern "C" unsigned long _UNK_005c59d4;
extern "C" unsigned long _UNK_005c59d8;
extern "C" unsigned long _UNK_005c59dc;
extern "C" unsigned long _UNK_005c59e0;
extern "C" unsigned long _UNK_005c59e4;
extern "C" unsigned long _UNK_005c59e8;
extern "C" unsigned long _UNK_005c59ec;
extern "C" unsigned long _UNK_005c5e04;
extern "C" unsigned long _UNK_005c5e08;
extern "C" unsigned long _UNK_005c5e0c;
extern "C" unsigned long _UNK_005c5e10;
extern "C" unsigned long _UNK_005c5e14;
extern "C" unsigned long _UNK_005c5e18;
extern "C" unsigned long _UNK_005c5e1c;
extern "C" unsigned long _UNK_005c5e20;
extern "C" unsigned long _UNK_005c5e24;
extern "C" unsigned long _UNK_005c5e28;
extern "C" unsigned long _UNK_005c5e2c;
extern "C" unsigned long _UNK_005c5e30;
extern "C" unsigned long _UNK_005c5e34;
extern "C" unsigned long _UNK_005c5e38;
extern "C" unsigned long _UNK_005c5e3c;
extern "C" unsigned long _UNK_005c5e40;
extern "C" unsigned long _UNK_005c6248;
extern "C" unsigned long _UNK_005c624c;
extern "C" unsigned long _UNK_005c6250;
extern "C" unsigned long _UNK_005c6254;
extern "C" unsigned long _UNK_005c6258;
extern "C" unsigned long _UNK_005c625c;
extern "C" unsigned long _UNK_005c6260;
extern "C" unsigned long _UNK_005c6264;
extern "C" unsigned long _UNK_005c6268;
extern "C" unsigned long _UNK_005c626c;
extern "C" unsigned long _UNK_005c6270;
extern "C" unsigned long _UNK_005c6274;
extern "C" unsigned long _UNK_005c6278;
extern "C" unsigned long _UNK_005c627c;
extern "C" unsigned long _UNK_005c6280;
extern "C" unsigned long _UNK_005c6284;
extern "C" unsigned long _UNK_005c668c;
extern "C" unsigned long _UNK_005c6690;
extern "C" unsigned long _UNK_005c6694;
extern "C" unsigned long _UNK_005c6698;
extern "C" unsigned long _UNK_005c669c;
extern "C" unsigned long _UNK_005c66a0;
extern "C" unsigned long _UNK_005c66a4;
extern "C" unsigned long _UNK_005c66a8;
extern "C" unsigned long _UNK_005c66ac;
extern "C" unsigned long _UNK_005c66b0;
extern "C" unsigned long _UNK_005c66b4;
extern "C" unsigned long _UNK_005c66b8;
extern "C" unsigned long _UNK_005c66bc;
extern "C" unsigned long _UNK_005c66c0;
extern "C" unsigned long _UNK_005c66c4;
extern "C" unsigned long _UNK_005c66c8;
extern "C" unsigned long _UNK_005c6a08;
extern "C" unsigned long _UNK_005c6a0c;
extern "C" unsigned long _UNK_005c6a10;
extern "C" unsigned long _UNK_005c6a14;
extern "C" unsigned long _UNK_005c6a18;
extern "C" unsigned long _UNK_005c6a1c;
extern "C" unsigned long _UNK_005c6a20;
extern "C" unsigned long _UNK_005c6a24;
extern "C" unsigned long _UNK_005c6a28;
extern "C" unsigned long _UNK_005c6a2c;
extern "C" unsigned long _UNK_005c6a30;
extern "C" unsigned long _UNK_005c6a34;
extern "C" unsigned long _UNK_005c6a38;
extern "C" unsigned long _UNK_005c6a3c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005c4a24;
extern "C" unsigned long g_005c4a68;
extern "C" unsigned long g_005c4a98;
extern "C" unsigned long g_005c4a9c;
extern "C" unsigned long g_005c4aac;
extern "C" unsigned long g_005c4ab0;
extern "C" unsigned long g_005c4ad4;
extern "C" unsigned long g_005c4ad8;
extern "C" unsigned long g_005c4b74;
extern "C" unsigned long g_005c4b78;
extern "C" unsigned long g_005c4d32;
extern "C" unsigned long g_005c4e0e;
extern "C" unsigned long g_005c4f08;
extern "C" unsigned long g_005c4f42;
extern "C" unsigned long g_005c50fe;
extern "C" unsigned long g_005c5100;
extern "C" unsigned long g_005c5118;
extern "C" unsigned long g_005c511c;
extern "C" unsigned long g_005c5120;
extern "C" unsigned long g_005c5124;
extern "C" unsigned long g_005c5128;
extern "C" unsigned long g_005c512c;
extern "C" unsigned long g_005c5130;
extern "C" unsigned long g_005c5134;
extern "C" unsigned long g_005c5138;
extern "C" unsigned long g_005c513c;
extern "C" unsigned long g_005c5140;
extern "C" unsigned long g_005c5144;
extern "C" unsigned long g_005c5148;
extern "C" unsigned long g_005c514c;
extern "C" unsigned long g_005c5150;
extern "C" unsigned long g_005c5248;
extern "C" unsigned long g_005c5278;
extern "C" unsigned long g_005c535c;
extern "C" unsigned long g_005c5384;
extern "C" unsigned long g_005c5466;
extern "C" unsigned long g_005c5492;
extern "C" unsigned long g_005c5526;
extern "C" unsigned long g_005c552a;
extern "C" unsigned long g_005c5570;
extern "C" unsigned long g_005c5574;
extern "C" unsigned long g_005c5578;
extern "C" unsigned long g_005c557c;
extern "C" unsigned long g_005c5580;
extern "C" unsigned long g_005c5584;
extern "C" unsigned long g_005c5588;
extern "C" unsigned long g_005c558c;
extern "C" unsigned long g_005c5590;
extern "C" unsigned long g_005c5594;
extern "C" unsigned long g_005c5598;
extern "C" unsigned long g_005c559c;
extern "C" unsigned long g_005c55a0;
extern "C" unsigned long g_005c55a4;
extern "C" unsigned long g_005c55a8;
extern "C" unsigned long g_005c55ac;
extern "C" unsigned long g_005c55b0;
extern "C" unsigned long g_005c55b4;
extern "C" unsigned long g_005c5610;
extern "C" unsigned long g_005c5632;
extern "C" unsigned long g_005c56ec;
extern "C" unsigned long g_005c571a;
extern "C" unsigned long g_005c57b0;
extern "C" unsigned long g_005c57b4;
extern "C" unsigned long g_005c5852;
extern "C" unsigned long g_005c5855;
extern "C" unsigned long g_005c5874;
extern "C" unsigned long g_005c5912;
extern "C" unsigned long g_005c59b0;
extern "C" unsigned long g_005c59b4;
extern "C" unsigned long g_005c59b8;
extern "C" unsigned long g_005c59bc;
extern "C" unsigned long g_005c59c0;
extern "C" unsigned long g_005c59c4;
extern "C" unsigned long g_005c59c8;
extern "C" unsigned long g_005c59cc;
extern "C" unsigned long g_005c59d0;
extern "C" unsigned long g_005c59d4;
extern "C" unsigned long g_005c59d8;
extern "C" unsigned long g_005c59dc;
extern "C" unsigned long g_005c59e0;
extern "C" unsigned long g_005c59e4;
extern "C" unsigned long g_005c59e8;
extern "C" unsigned long g_005c59ec;
extern "C" unsigned long g_005c5a20;
extern "C" unsigned long g_005c5b2c;
extern "C" unsigned long g_005c5b58;
extern "C" unsigned long g_005c5bf2;
extern "C" unsigned long g_005c5bf6;
extern "C" unsigned long g_005c5c94;
extern "C" unsigned long g_005c5c97;
extern "C" unsigned long g_005c5cb6;
extern "C" unsigned long g_005c5d54;
extern "C" unsigned long g_005c5e04;
extern "C" unsigned long g_005c5e08;
extern "C" unsigned long g_005c5e0c;
extern "C" unsigned long g_005c5e10;
extern "C" unsigned long g_005c5e14;
extern "C" unsigned long g_005c5e18;
extern "C" unsigned long g_005c5e1c;
extern "C" unsigned long g_005c5e20;
extern "C" unsigned long g_005c5e24;
extern "C" unsigned long g_005c5e28;
extern "C" unsigned long g_005c5e2c;
extern "C" unsigned long g_005c5e30;
extern "C" unsigned long g_005c5e34;
extern "C" unsigned long g_005c5e38;
extern "C" unsigned long g_005c5e3c;
extern "C" unsigned long g_005c5e40;
extern "C" unsigned long g_005c5e64;
extern "C" unsigned long g_005c5f70;
extern "C" unsigned long g_005c5f9c;
extern "C" unsigned long g_005c6036;
extern "C" unsigned long g_005c603a;
extern "C" unsigned long g_005c60d8;
extern "C" unsigned long g_005c60db;
extern "C" unsigned long g_005c60fa;
extern "C" unsigned long g_005c6198;
extern "C" unsigned long g_005c6248;
extern "C" unsigned long g_005c624c;
extern "C" unsigned long g_005c6250;
extern "C" unsigned long g_005c6254;
extern "C" unsigned long g_005c6258;
extern "C" unsigned long g_005c625c;
extern "C" unsigned long g_005c6260;
extern "C" unsigned long g_005c6264;
extern "C" unsigned long g_005c6268;
extern "C" unsigned long g_005c626c;
extern "C" unsigned long g_005c6270;
extern "C" unsigned long g_005c6274;
extern "C" unsigned long g_005c6278;
extern "C" unsigned long g_005c627c;
extern "C" unsigned long g_005c6280;
extern "C" unsigned long g_005c6284;
extern "C" unsigned long g_005c62a8;
extern "C" unsigned long g_005c63b4;
extern "C" unsigned long g_005c63e0;
extern "C" unsigned long g_005c647a;
extern "C" unsigned long g_005c647e;
extern "C" unsigned long g_005c651c;
extern "C" unsigned long g_005c651f;
extern "C" unsigned long g_005c653e;
extern "C" unsigned long g_005c65dc;
extern "C" unsigned long g_005c668c;
extern "C" unsigned long g_005c6690;
extern "C" unsigned long g_005c6694;
extern "C" unsigned long g_005c6698;
extern "C" unsigned long g_005c669c;
extern "C" unsigned long g_005c66a0;
extern "C" unsigned long g_005c66a4;
extern "C" unsigned long g_005c66a8;
extern "C" unsigned long g_005c66ac;
extern "C" unsigned long g_005c66b0;
extern "C" unsigned long g_005c66b4;
extern "C" unsigned long g_005c66b8;
extern "C" unsigned long g_005c66bc;
extern "C" unsigned long g_005c66c0;
extern "C" unsigned long g_005c66c4;
extern "C" unsigned long g_005c66c8;
extern "C" unsigned long g_005c66ee;
extern "C" unsigned long g_005c684e;
extern "C" unsigned long g_005c68dc;
extern "C" unsigned long g_005c6a08;
extern "C" unsigned long g_005c6a0c;
extern "C" unsigned long g_005c6a10;
extern "C" unsigned long g_005c6a14;
extern "C" unsigned long g_005c6a18;
extern "C" unsigned long g_005c6a1c;
extern "C" unsigned long g_005c6a20;
extern "C" unsigned long g_005c6a24;
extern "C" unsigned long g_005c6a28;
extern "C" unsigned long g_005c6a2c;
extern "C" unsigned long g_005c6a30;
extern "C" unsigned long g_005c6a34;
extern "C" unsigned long g_005c6a38;
extern "C" unsigned long g_005c6a3c;
BLMissionCreamSelectView::~BLMissionCreamSelectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c4a24 + g_005c4a98);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c4a68 + g_005c4a9c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionCreamSelectView::BLMissionCreamSelectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005c4b74 + 0x5c4b1c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionCreamSelectView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionCreamSelectView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x14c)));
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

undefined4 BLMissionCreamSelectView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMissionCreamSelectView::onEnter()
{
  ((BLMissionCreamSelectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionCreamSelectView::onExit()
{
  ((BLMissionCreamSelectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionCreamSelectView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "BLPlayerTuPoView.h"
#include "BLLeakUtils.h"
#include "BLPlayerTuPoPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b33d0;
extern "C" unsigned long UNK_006b3402;
extern "C" unsigned long UNK_006b345c;
extern "C" unsigned long UNK_006b3484;
extern "C" unsigned long UNK_006b3546;
extern "C" unsigned long UNK_006b361e;
extern "C" unsigned long UNK_006b36f6;
extern "C" unsigned long UNK_006b37a0;
extern "C" unsigned long UNK_006b37a2;
extern "C" unsigned long UNK_006b3862;
extern "C" unsigned long UNK_006b399e;
extern "C" unsigned long UNK_006b39ca;
extern "C" unsigned long UNK_006b3aa8;
extern "C" unsigned long UNK_006b3aaa;
extern "C" unsigned long UNK_006b3b5a;
extern "C" unsigned long UNK_006b3b82;
extern "C" unsigned long UNK_006b3c58;
extern "C" unsigned long UNK_006b3c80;
extern "C" unsigned long UNK_006b3d56;
extern "C" unsigned long UNK_006b3dc4;
extern "C" unsigned long UNK_006b3e9e;
extern "C" unsigned long UNK_006b3ea2;
extern "C" unsigned long UNK_006b3f5a;
extern "C" unsigned long UNK_006b400a;
extern "C" unsigned long UNK_006b40ba;
extern "C" unsigned long UNK_006b4158;
extern "C" unsigned long _DAT_006b3524;
extern "C" unsigned long _DAT_006b3528;
extern "C" unsigned long _UNK_006b3448;
extern "C" unsigned long _UNK_006b344c;
extern "C" unsigned long _UNK_006b3460;
extern "C" unsigned long _UNK_006b3488;
extern "C" unsigned long _UNK_006b391c;
extern "C" unsigned long _UNK_006b3920;
extern "C" unsigned long _UNK_006b3924;
extern "C" unsigned long _UNK_006b3928;
extern "C" unsigned long _UNK_006b392c;
extern "C" unsigned long _UNK_006b3930;
extern "C" unsigned long _UNK_006b3934;
extern "C" unsigned long _UNK_006b3938;
extern "C" unsigned long _UNK_006b393c;
extern "C" unsigned long _UNK_006b3940;
extern "C" unsigned long _UNK_006b3944;
extern "C" unsigned long _UNK_006b3948;
extern "C" unsigned long _UNK_006b394c;
extern "C" unsigned long _UNK_006b3950;
extern "C" unsigned long _UNK_006b3954;
extern "C" unsigned long _UNK_006b3d78;
extern "C" unsigned long _UNK_006b3d7c;
extern "C" unsigned long _UNK_006b3d80;
extern "C" unsigned long _UNK_006b3d84;
extern "C" unsigned long _UNK_006b3d88;
extern "C" unsigned long _UNK_006b3d8c;
extern "C" unsigned long _UNK_006b3d90;
extern "C" unsigned long _UNK_006b3d94;
extern "C" unsigned long _UNK_006b3d98;
extern "C" unsigned long _UNK_006b3d9c;
extern "C" unsigned long _UNK_006b3da0;
extern "C" unsigned long _UNK_006b3da4;
extern "C" unsigned long _UNK_006b3da8;
extern "C" unsigned long _UNK_006b3dac;
extern "C" unsigned long _UNK_006b3db0;
extern "C" unsigned long _UNK_006b3db4;
extern "C" unsigned long _UNK_006b3db8;
extern "C" unsigned long _UNK_006b41a8;
extern "C" unsigned long _UNK_006b41ac;
extern "C" unsigned long _UNK_006b41b0;
extern "C" unsigned long _UNK_006b41b4;
extern "C" unsigned long _UNK_006b41b8;
extern "C" unsigned long _UNK_006b41bc;
extern "C" unsigned long _UNK_006b41c0;
extern "C" unsigned long _UNK_006b41c4;
extern "C" unsigned long _UNK_006b41c8;
extern "C" unsigned long _UNK_006b41cc;
extern "C" unsigned long _UNK_006b41d0;
extern "C" unsigned long _UNK_006b41d4;
extern "C" unsigned long _UNK_006b41d8;
extern "C" unsigned long _UNK_006b41dc;
extern "C" unsigned long _UNK_006b41e0;
extern "C" unsigned long _UNK_006b41e4;
extern "C" unsigned long _UNK_006b41e8;
extern "C" unsigned long _UNK_006b41ec;
extern "C" unsigned long _UNK_006b41f0;
extern "C" unsigned long _UNK_006b41f4;
extern "C" unsigned long _UNK_006b42b8;
extern "C" unsigned long g_006b33d0;
extern "C" unsigned long g_006b3402;
extern "C" unsigned long g_006b3448;
extern "C" unsigned long g_006b344c;
extern "C" unsigned long g_006b345c;
extern "C" unsigned long g_006b3460;
extern "C" unsigned long g_006b3484;
extern "C" unsigned long g_006b3488;
extern "C" unsigned long g_006b3524;
extern "C" unsigned long g_006b3528;
extern "C" unsigned long g_006b3546;
extern "C" unsigned long g_006b361e;
extern "C" unsigned long g_006b36f6;
extern "C" unsigned long g_006b37a0;
extern "C" unsigned long g_006b37a2;
extern "C" unsigned long g_006b3862;
extern "C" unsigned long g_006b391c;
extern "C" unsigned long g_006b3920;
extern "C" unsigned long g_006b3924;
extern "C" unsigned long g_006b3928;
extern "C" unsigned long g_006b392c;
extern "C" unsigned long g_006b3930;
extern "C" unsigned long g_006b3934;
extern "C" unsigned long g_006b3938;
extern "C" unsigned long g_006b393c;
extern "C" unsigned long g_006b3940;
extern "C" unsigned long g_006b3944;
extern "C" unsigned long g_006b3948;
extern "C" unsigned long g_006b394c;
extern "C" unsigned long g_006b3950;
extern "C" unsigned long g_006b3954;
extern "C" unsigned long g_006b399e;
extern "C" unsigned long g_006b39ca;
extern "C" unsigned long g_006b3aa8;
extern "C" unsigned long g_006b3aaa;
extern "C" unsigned long g_006b3b5a;
extern "C" unsigned long g_006b3b82;
extern "C" unsigned long g_006b3c58;
extern "C" unsigned long g_006b3c80;
extern "C" unsigned long g_006b3d56;
extern "C" unsigned long g_006b3d78;
extern "C" unsigned long g_006b3d7c;
extern "C" unsigned long g_006b3d80;
extern "C" unsigned long g_006b3d84;
extern "C" unsigned long g_006b3d88;
extern "C" unsigned long g_006b3d8c;
extern "C" unsigned long g_006b3d90;
extern "C" unsigned long g_006b3d94;
extern "C" unsigned long g_006b3d98;
extern "C" unsigned long g_006b3d9c;
extern "C" unsigned long g_006b3da0;
extern "C" unsigned long g_006b3da4;
extern "C" unsigned long g_006b3da8;
extern "C" unsigned long g_006b3dac;
extern "C" unsigned long g_006b3db0;
extern "C" unsigned long g_006b3db4;
extern "C" unsigned long g_006b3db8;
extern "C" unsigned long g_006b3dc4;
extern "C" unsigned long g_006b3e9e;
extern "C" unsigned long g_006b3ea2;
extern "C" unsigned long g_006b3f5a;
extern "C" unsigned long g_006b400a;
extern "C" unsigned long g_006b40ba;
extern "C" unsigned long g_006b4158;
extern "C" unsigned long g_006b41a8;
extern "C" unsigned long g_006b41ac;
extern "C" unsigned long g_006b41b0;
extern "C" unsigned long g_006b41b4;
extern "C" unsigned long g_006b41b8;
extern "C" unsigned long g_006b41bc;
extern "C" unsigned long g_006b41c0;
extern "C" unsigned long g_006b41c4;
extern "C" unsigned long g_006b41c8;
extern "C" unsigned long g_006b41cc;
extern "C" unsigned long g_006b41d0;
extern "C" unsigned long g_006b41d4;
extern "C" unsigned long g_006b41d8;
extern "C" unsigned long g_006b41dc;
extern "C" unsigned long g_006b41e0;
extern "C" unsigned long g_006b41e4;
extern "C" unsigned long g_006b41e8;
extern "C" unsigned long g_006b41ec;
extern "C" unsigned long g_006b41f0;
extern "C" unsigned long g_006b41f4;
extern "C" unsigned long g_006b42b8;
BLPlayerTuPoView::~BLPlayerTuPoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b33d0 + g_006b3448);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b3402 + g_006b344c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPlayerTuPoView::BLPlayerTuPoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b3524 + 0x6b34cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPlayerTuPoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPlayerTuPoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLPlayerTuPoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLPlayerTuPoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLPlayerTuPoView::initView();
    ((BLPlayerTuPoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLPlayerTuPoView*)((int)this));
  }
  return iVar1;
}

void BLPlayerTuPoView::onEnter()
{
  ((BLPlayerTuPoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPlayerTuPoView::onExit()
{
  ((BLPlayerTuPoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

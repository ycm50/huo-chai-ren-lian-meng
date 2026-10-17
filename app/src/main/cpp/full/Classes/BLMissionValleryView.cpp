#include "BLMissionValleryView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLMissionValleryPresenter.h"
#include "BLRoleItemView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005e4f26(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e37cc;
extern "C" unsigned long UNK_005e3802;
extern "C" unsigned long UNK_005e3870;
extern "C" unsigned long UNK_005e3898;
extern "C" unsigned long UNK_005e4344;
extern "C" unsigned long UNK_005e4388;
extern "C" unsigned long UNK_005e43f8;
extern "C" unsigned long UNK_005e43fc;
extern "C" unsigned long UNK_005e442a;
extern "C" unsigned long UNK_005e448c;
extern "C" unsigned long UNK_005e45aa;
extern "C" unsigned long UNK_005e45ab;
extern "C" unsigned long UNK_005e45ac;
extern "C" unsigned long UNK_005e4600;
extern "C" unsigned long UNK_005e4670;
extern "C" unsigned long UNK_005e468c;
extern "C" unsigned long UNK_005e46b0;
extern "C" unsigned long UNK_005e46ce;
extern "C" unsigned long UNK_005e46ea;
extern "C" unsigned long UNK_005e488a;
extern "C" unsigned long UNK_005e48f0;
extern "C" unsigned long UNK_005e495a;
extern "C" unsigned long UNK_005e49de;
extern "C" unsigned long UNK_005e4aa2;
extern "C" unsigned long UNK_005e4cfe;
extern "C" unsigned long UNK_005e4d1c;
extern "C" unsigned long UNK_005e4d53;
extern "C" unsigned long UNK_005e4dcc;
extern "C" unsigned long UNK_005e4dd0;
extern "C" unsigned long UNK_005e4dff;
extern "C" unsigned long UNK_005e5020;
extern "C" unsigned long UNK_005e5024;
extern "C" unsigned long UNK_005e506d;
extern "C" unsigned long UNK_005e50b8;
extern "C" unsigned long UNK_005e50bc;
extern "C" unsigned long UNK_005e50f2;
extern "C" unsigned long UNK_005e5172;
extern "C" unsigned long UNK_005e51f2;
extern "C" unsigned long UNK_005e51f4;
extern "C" unsigned long UNK_005e5208;
extern "C" unsigned long UNK_005e526e;
extern "C" unsigned long UNK_005e52ec;
extern "C" unsigned long UNK_005e52ee;
extern "C" unsigned long UNK_005e5304;
extern "C" unsigned long UNK_005e540e;
extern "C" unsigned long UNK_005e5412;
extern "C" unsigned long UNK_005e543e;
extern "C" unsigned long UNK_005e5486;
extern "C" unsigned long UNK_005e548a;
extern "C" unsigned long UNK_005e54c0;
extern "C" unsigned long UNK_005e5510;
extern "C" unsigned long _DAT_005e41c0;
extern "C" unsigned long _DAT_005e41c4;
extern "C" unsigned long _UNK_005e385c;
extern "C" unsigned long _UNK_005e3860;
extern "C" unsigned long _UNK_005e3874;
extern "C" unsigned long _UNK_005e389c;
extern "C" unsigned long _UNK_005e4614;
extern "C" unsigned long _UNK_005e4618;
extern "C" unsigned long _UNK_005e461c;
extern "C" unsigned long _UNK_005e4620;
extern "C" unsigned long _UNK_005e4624;
extern "C" unsigned long _UNK_005e4628;
extern "C" unsigned long _UNK_005e462c;
extern "C" unsigned long _UNK_005e4630;
extern "C" unsigned long _UNK_005e4634;
extern "C" unsigned long _UNK_005e4638;
extern "C" unsigned long _UNK_005e463c;
extern "C" unsigned long _UNK_005e4640;
extern "C" unsigned long _UNK_005e4644;
extern "C" unsigned long _UNK_005e4648;
extern "C" unsigned long _UNK_005e464c;
extern "C" unsigned long _UNK_005e4650;
extern "C" unsigned long _UNK_005e4654;
extern "C" unsigned long _UNK_005e47ac;
extern "C" unsigned long _UNK_005e47b0;
extern "C" unsigned long _UNK_005e47b4;
extern "C" unsigned long _UNK_005e47b8;
extern "C" unsigned long _UNK_005e47bc;
extern "C" unsigned long _UNK_005e47c0;
extern "C" unsigned long _UNK_005e47c4;
extern "C" unsigned long _UNK_005e47c8;
extern "C" unsigned long _UNK_005e4c24;
extern "C" unsigned long _UNK_005e4c28;
extern "C" unsigned long _UNK_005e4c2c;
extern "C" unsigned long _UNK_005e4c30;
extern "C" unsigned long _UNK_005e4c34;
extern "C" unsigned long _UNK_005e4c38;
extern "C" unsigned long _UNK_005e4c3c;
extern "C" unsigned long _UNK_005e4c40;
extern "C" unsigned long _UNK_005e4c44;
extern "C" unsigned long _UNK_005e4c48;
extern "C" unsigned long _UNK_005e4c4c;
extern "C" unsigned long _UNK_005e4c50;
extern "C" unsigned long _UNK_005e4c54;
extern "C" unsigned long _UNK_005e4f34;
extern "C" unsigned long _UNK_005e4f38;
extern "C" unsigned long _UNK_005e4f3c;
extern "C" unsigned long _UNK_005e4f40;
extern "C" unsigned long _UNK_005e4f44;
extern "C" unsigned long _UNK_005e4f48;
extern "C" unsigned long _UNK_005e4f4c;
extern "C" unsigned long _UNK_005e4f50;
extern "C" unsigned long _UNK_005e4f54;
extern "C" unsigned long _UNK_005e4f58;
extern "C" unsigned long _UNK_005e4f5c;
extern "C" unsigned long _UNK_005e5370;
extern "C" unsigned long _UNK_005e5374;
extern "C" unsigned long _UNK_005e5378;
extern "C" unsigned long _UNK_005e537c;
extern "C" unsigned long _UNK_005e5380;
extern "C" unsigned long _UNK_005e5384;
extern "C" unsigned long _UNK_005e5388;
extern "C" unsigned long _UNK_005e538c;
extern "C" unsigned long _UNK_005e5390;
extern "C" unsigned long _UNK_005e5394;
extern "C" unsigned long _UNK_005e5398;
extern "C" unsigned long _UNK_005e539c;
extern "C" unsigned long _UNK_005e53a0;
extern "C" unsigned long _UNK_005e53a4;
extern "C" unsigned long _UNK_005e53a8;
extern "C" unsigned long _UNK_005e53ac;
extern "C" unsigned long _UNK_005e53b0;
extern "C" unsigned long _UNK_005e53b4;
extern "C" unsigned long _UNK_005e53b8;
extern "C" unsigned long _UNK_005e53bc;
extern "C" unsigned long _UNK_005e53c0;
extern "C" unsigned long _UNK_005e53c4;
extern "C" unsigned long _UNK_005e53c8;
extern "C" unsigned long _UNK_005e53cc;
extern "C" unsigned long _UNK_005e55e0;
extern "C" unsigned long _UNK_005e55e4;
extern "C" unsigned long _UNK_005e55e8;
extern "C" unsigned long _UNK_005e55ec;
extern "C" unsigned long _UNK_005e55f0;
extern "C" unsigned long _UNK_005e55f4;
extern "C" unsigned long _UNK_005e55f8;
extern "C" unsigned long _UNK_005e55fc;
extern "C" unsigned long _UNK_005e5600;
extern "C" unsigned long g_005e37cc;
extern "C" unsigned long g_005e3802;
extern "C" unsigned long g_005e385c;
extern "C" unsigned long g_005e3860;
extern "C" unsigned long g_005e3870;
extern "C" unsigned long g_005e3874;
extern "C" unsigned long g_005e3898;
extern "C" unsigned long g_005e389c;
extern "C" unsigned long g_005e41c0;
extern "C" unsigned long g_005e41c4;
extern "C" unsigned long g_005e4344;
extern "C" unsigned long g_005e4388;
extern "C" unsigned long g_005e43f8;
extern "C" unsigned long g_005e43fc;
extern "C" unsigned long g_005e442a;
extern "C" unsigned long g_005e448c;
extern "C" unsigned long g_005e45aa;
extern "C" unsigned long g_005e45ab;
extern "C" unsigned long g_005e45ac;
extern "C" unsigned long g_005e4600;
extern "C" unsigned long g_005e4614;
extern "C" unsigned long g_005e4618;
extern "C" unsigned long g_005e461c;
extern "C" unsigned long g_005e4620;
extern "C" unsigned long g_005e4624;
extern "C" unsigned long g_005e4628;
extern "C" unsigned long g_005e462c;
extern "C" unsigned long g_005e4630;
extern "C" unsigned long g_005e4634;
extern "C" unsigned long g_005e4638;
extern "C" unsigned long g_005e463c;
extern "C" unsigned long g_005e4640;
extern "C" unsigned long g_005e4644;
extern "C" unsigned long g_005e4648;
extern "C" unsigned long g_005e464c;
extern "C" unsigned long g_005e4650;
extern "C" unsigned long g_005e4654;
extern "C" unsigned long g_005e4670;
extern "C" unsigned long g_005e468c;
extern "C" unsigned long g_005e46b0;
extern "C" unsigned long g_005e46ce;
extern "C" unsigned long g_005e46ea;
extern "C" unsigned long g_005e47ac;
extern "C" unsigned long g_005e47b0;
extern "C" unsigned long g_005e47b4;
extern "C" unsigned long g_005e47b8;
extern "C" unsigned long g_005e47bc;
extern "C" unsigned long g_005e47c0;
extern "C" unsigned long g_005e47c4;
extern "C" unsigned long g_005e47c8;
extern "C" unsigned long g_005e488a;
extern "C" unsigned long g_005e48f0;
extern "C" unsigned long g_005e495a;
extern "C" unsigned long g_005e49de;
extern "C" unsigned long g_005e4aa2;
extern "C" unsigned long g_005e4c24;
extern "C" unsigned long g_005e4c28;
extern "C" unsigned long g_005e4c2c;
extern "C" unsigned long g_005e4c30;
extern "C" unsigned long g_005e4c34;
extern "C" unsigned long g_005e4c38;
extern "C" unsigned long g_005e4c3c;
extern "C" unsigned long g_005e4c40;
extern "C" unsigned long g_005e4c44;
extern "C" unsigned long g_005e4c48;
extern "C" unsigned long g_005e4c4c;
extern "C" unsigned long g_005e4c50;
extern "C" unsigned long g_005e4c54;
extern "C" unsigned long g_005e4cfe;
extern "C" unsigned long g_005e4d1c;
extern "C" unsigned long g_005e4d53;
extern "C" unsigned long g_005e4dcc;
extern "C" unsigned long g_005e4dd0;
extern "C" unsigned long g_005e4dff;
extern "C" unsigned long g_005e4f34;
extern "C" unsigned long g_005e4f38;
extern "C" unsigned long g_005e4f3c;
extern "C" unsigned long g_005e4f40;
extern "C" unsigned long g_005e4f44;
extern "C" unsigned long g_005e4f48;
extern "C" unsigned long g_005e4f4c;
extern "C" unsigned long g_005e4f50;
extern "C" unsigned long g_005e4f54;
extern "C" unsigned long g_005e4f58;
extern "C" unsigned long g_005e4f5c;
extern "C" unsigned long g_005e5020;
extern "C" unsigned long g_005e5024;
extern "C" unsigned long g_005e506d;
extern "C" unsigned long g_005e50b8;
extern "C" unsigned long g_005e50bc;
extern "C" unsigned long g_005e50f2;
extern "C" unsigned long g_005e5172;
extern "C" unsigned long g_005e51f2;
extern "C" unsigned long g_005e51f4;
extern "C" unsigned long g_005e5208;
extern "C" unsigned long g_005e526e;
extern "C" unsigned long g_005e52ec;
extern "C" unsigned long g_005e52ee;
extern "C" unsigned long g_005e5304;
extern "C" unsigned long g_005e5370;
extern "C" unsigned long g_005e5374;
extern "C" unsigned long g_005e5378;
extern "C" unsigned long g_005e537c;
extern "C" unsigned long g_005e5380;
extern "C" unsigned long g_005e5384;
extern "C" unsigned long g_005e5388;
extern "C" unsigned long g_005e538c;
extern "C" unsigned long g_005e5390;
extern "C" unsigned long g_005e5394;
extern "C" unsigned long g_005e5398;
extern "C" unsigned long g_005e539c;
extern "C" unsigned long g_005e53a0;
extern "C" unsigned long g_005e53a4;
extern "C" unsigned long g_005e53a8;
extern "C" unsigned long g_005e53ac;
extern "C" unsigned long g_005e53b0;
extern "C" unsigned long g_005e53b4;
extern "C" unsigned long g_005e53b8;
extern "C" unsigned long g_005e53bc;
extern "C" unsigned long g_005e53c0;
extern "C" unsigned long g_005e53c4;
extern "C" unsigned long g_005e53c8;
extern "C" unsigned long g_005e53cc;
extern "C" unsigned long g_005e540e;
extern "C" unsigned long g_005e5412;
extern "C" unsigned long g_005e543e;
extern "C" unsigned long g_005e5486;
extern "C" unsigned long g_005e548a;
extern "C" unsigned long g_005e54c0;
extern "C" unsigned long g_005e5510;
extern "C" unsigned long g_005e55e0;
extern "C" unsigned long g_005e55e4;
extern "C" unsigned long g_005e55e8;
extern "C" unsigned long g_005e55ec;
extern "C" unsigned long g_005e55f0;
extern "C" unsigned long g_005e55f4;
extern "C" unsigned long g_005e55f8;
extern "C" unsigned long g_005e55fc;
extern "C" unsigned long g_005e5600;
BLMissionValleryView::~BLMissionValleryView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005e37cc + g_005e385c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005e3802 + g_005e3860,&piStack_20);
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

BLMissionValleryView::BLMissionValleryView()
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
  iVar2 = *(int *)(g_005e41c0 + 0x5e4148);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x51)) = 0;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMissionValleryView"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x52)) = *(int *)((int)this + 4*(0x51));
  return;
}


bool BLMissionValleryView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionValleryPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionValleryView::initView();
    ((BLMissionValleryPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionValleryView*)((int)this));
  }
  return iVar1;
}

void BLMissionValleryView::onEnter()
{
  ((BLMissionValleryPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionValleryView::onExit()
{
  ((BLMissionValleryPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionValleryView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

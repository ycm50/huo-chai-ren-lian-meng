#include "BLCampaignInfoItemView.h"
#include "BLCampaignInfoItemPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00501948;
extern "C" unsigned long UNK_0050198c;
extern "C" unsigned long UNK_005019d0;
extern "C" unsigned long UNK_005019f8;
extern "C" unsigned long UNK_00501a10;
extern "C" unsigned long UNK_00501a3e;
extern "C" unsigned long UNK_00501aea;
extern "C" unsigned long UNK_00501bdc;
extern "C" unsigned long UNK_00501be0;
extern "C" unsigned long UNK_00501c20;
extern "C" unsigned long UNK_00501d7e;
extern "C" unsigned long UNK_00501dac;
extern "C" unsigned long UNK_00501ebe;
extern "C" unsigned long UNK_00501ec2;
extern "C" unsigned long UNK_00501f1a;
extern "C" unsigned long UNK_00501f5c;
extern "C" unsigned long _UNK_005019bc;
extern "C" unsigned long _UNK_005019c0;
extern "C" unsigned long _UNK_005019d4;
extern "C" unsigned long _UNK_005019fc;
extern "C" unsigned long _UNK_00501a68;
extern "C" unsigned long _UNK_00501a6c;
extern "C" unsigned long _UNK_00501ec8;
extern "C" unsigned long _UNK_00501ecc;
extern "C" unsigned long _UNK_00501ed0;
extern "C" unsigned long _UNK_00501ed4;
extern "C" unsigned long _UNK_00501ed8;
extern "C" unsigned long _UNK_00501edc;
extern "C" unsigned long _UNK_00501ee0;
extern "C" unsigned long _UNK_00501ee4;
extern "C" unsigned long _UNK_00501ee8;
extern "C" unsigned long _UNK_00501eec;
extern "C" unsigned long _UNK_00501ef0;
extern "C" unsigned long _UNK_00501ef4;
extern "C" unsigned long _UNK_00501ef8;
extern "C" unsigned long _UNK_00501efc;
extern "C" unsigned long _UNK_00501f00;
extern "C" unsigned long _UNK_00501f04;
extern "C" unsigned long _UNK_00501f08;
extern "C" unsigned long _UNK_00501fc8;
extern "C" unsigned long _UNK_00501fcc;
extern "C" unsigned long g_00501948;
extern "C" unsigned long g_0050198c;
extern "C" unsigned long g_005019bc;
extern "C" unsigned long g_005019c0;
extern "C" unsigned long g_005019d0;
extern "C" unsigned long g_005019d4;
extern "C" unsigned long g_005019f8;
extern "C" unsigned long g_005019fc;
extern "C" unsigned long g_00501a10;
extern "C" unsigned long g_00501a3e;
extern "C" unsigned long g_00501a68;
extern "C" unsigned long g_00501a6c;
extern "C" unsigned long g_00501aea;
extern "C" unsigned long g_00501bdc;
extern "C" unsigned long g_00501be0;
extern "C" unsigned long g_00501c20;
extern "C" unsigned long g_00501d7e;
extern "C" unsigned long g_00501dac;
extern "C" unsigned long g_00501ebe;
extern "C" unsigned long g_00501ec2;
extern "C" unsigned long g_00501ec8;
extern "C" unsigned long g_00501ecc;
extern "C" unsigned long g_00501ed0;
extern "C" unsigned long g_00501ed4;
extern "C" unsigned long g_00501ed8;
extern "C" unsigned long g_00501edc;
extern "C" unsigned long g_00501ee0;
extern "C" unsigned long g_00501ee4;
extern "C" unsigned long g_00501ee8;
extern "C" unsigned long g_00501eec;
extern "C" unsigned long g_00501ef0;
extern "C" unsigned long g_00501ef4;
extern "C" unsigned long g_00501ef8;
extern "C" unsigned long g_00501efc;
extern "C" unsigned long g_00501f00;
extern "C" unsigned long g_00501f04;
extern "C" unsigned long g_00501f08;
extern "C" unsigned long g_00501f1a;
extern "C" unsigned long g_00501f5c;
extern "C" unsigned long g_00501fc8;
extern "C" unsigned long g_00501fcc;
BLCampaignInfoItemView::~BLCampaignInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00501948 + g_005019bc);
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
  func_0079e45c(&uStack_14,&g_0050198c + g_005019c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignInfoItemView::BLCampaignInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00501a10 + g_00501a68);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00501a3e + g_00501a6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCampaignInfoItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLCampaignInfoItemView::getLabIntroduce()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCampaignInfoItemView::getRewardView()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCampaignInfoItemView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLCampaignInfoItemView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLCampaignInfoItemView::getLabRate()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLCampaignInfoItemView::onEnter()
{
  ((BLCampaignInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCampaignInfoItemView::onExit()
{
  ((BLCampaignInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLCampaignInfoItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

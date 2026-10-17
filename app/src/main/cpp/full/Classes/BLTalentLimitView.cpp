#include "BLTalentLimitView.h"
#include "CCNotificationCenter.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCScale9Sprite.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLSkillControlButton.h"
#include "CampaignData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "TalentUserData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a316c;
extern "C" unsigned long UNK_006a3196;
extern "C" unsigned long UNK_006a31f4;
extern "C" unsigned long UNK_006a321a;
extern "C" unsigned long UNK_006a328e;
extern "C" unsigned long UNK_006a32ae;
extern "C" unsigned long UNK_006a330a;
extern "C" unsigned long UNK_006a332a;
extern "C" unsigned long UNK_006a3356;
extern "C" unsigned long UNK_006a33a4;
extern "C" unsigned long UNK_006a33b2;
extern "C" unsigned long UNK_006a33c0;
extern "C" unsigned long UNK_006a33ce;
extern "C" unsigned long UNK_006a33f6;
extern "C" unsigned long UNK_006a341a;
extern "C" unsigned long UNK_006a341c;
extern "C" unsigned long UNK_006a3436;
extern "C" unsigned long UNK_006a3438;
extern "C" unsigned long UNK_006a3450;
extern "C" unsigned long UNK_006a34f0;
extern "C" unsigned long UNK_006a3510;
extern "C" unsigned long UNK_006a3534;
extern "C" unsigned long UNK_006a35b0;
extern "C" unsigned long UNK_006a35b2;
extern "C" unsigned long UNK_006a35d8;
extern "C" unsigned long UNK_006a3602;
extern "C" unsigned long UNK_006a36b4;
extern "C" unsigned long UNK_006a36c6;
extern "C" unsigned long UNK_006a378e;
extern "C" unsigned long UNK_006a37e4;
extern "C" unsigned long UNK_006a37e6;
extern "C" unsigned long UNK_006a380d;
extern "C" unsigned long UNK_006a386a;
extern "C" unsigned long UNK_006a389e;
extern "C" unsigned long UNK_006a391e;
extern "C" unsigned long UNK_006a3954;
extern "C" unsigned long UNK_006a39a6;
extern "C" unsigned long UNK_006a3a00;
extern "C" unsigned long UNK_006a3a10;
extern "C" unsigned long UNK_006a3a12;
extern "C" unsigned long UNK_006a3a25;
extern "C" unsigned long _UNK_006a31c8;
extern "C" unsigned long _UNK_006a31cc;
extern "C" unsigned long _UNK_006a3244;
extern "C" unsigned long _UNK_006a3248;
extern "C" unsigned long _UNK_006a3368;
extern "C" unsigned long _UNK_006a336c;
extern "C" unsigned long _UNK_006a3370;
extern "C" unsigned long _UNK_006a3374;
extern "C" unsigned long _UNK_006a3378;
extern "C" unsigned long _UNK_006a3480;
extern "C" unsigned long _UNK_006a3484;
extern "C" unsigned long _UNK_006a3488;
extern "C" unsigned long _UNK_006a348c;
extern "C" unsigned long _UNK_006a3490;
extern "C" unsigned long _UNK_006a3494;
extern "C" unsigned long _UNK_006a3498;
extern "C" unsigned long _UNK_006a349c;
extern "C" unsigned long _UNK_006a34a0;
extern "C" unsigned long _UNK_006a34a4;
extern "C" unsigned long _UNK_006a34a8;
extern "C" unsigned long _UNK_006a358c;
extern "C" unsigned long _UNK_006a3590;
extern "C" unsigned long _UNK_006a3594;
extern "C" unsigned long _UNK_006a35bc;
extern "C" unsigned long _UNK_006a35c0;
extern "C" unsigned long _UNK_006a35dc;
extern "C" unsigned long _UNK_006a3748;
extern "C" unsigned long _UNK_006a374c;
extern "C" unsigned long _UNK_006a3750;
extern "C" unsigned long _UNK_006a3754;
extern "C" unsigned long _UNK_006a3758;
extern "C" unsigned long _UNK_006a375c;
extern "C" unsigned long _UNK_006a3760;
extern "C" unsigned long _UNK_006a3764;
extern "C" unsigned long _UNK_006a3ad8;
extern "C" unsigned long _UNK_006a3adc;
extern "C" unsigned long _UNK_006a3ae0;
extern "C" unsigned long _UNK_006a3ae4;
extern "C" unsigned long _UNK_006a3ae8;
extern "C" unsigned long _UNK_006a3aec;
extern "C" unsigned long _UNK_006a3af0;
extern "C" unsigned long _UNK_006a3af4;
extern "C" unsigned long _UNK_006a3af8;
extern "C" unsigned long _UNK_006a3afc;
extern "C" unsigned long _UNK_006a3b00;
extern "C" unsigned long _UNK_006a3b04;
extern "C" unsigned long _UNK_006a3b08;
extern "C" unsigned long _UNK_006a3b0c;
extern "C" unsigned long _UNK_006a3b10;
extern "C" unsigned long _UNK_006a3b14;
extern "C" unsigned long _UNK_006a3b18;
extern "C" unsigned long _UNK_006a3b1c;
extern "C" unsigned long _UNK_006a3b20;
extern "C" unsigned long _UNK_006a3b24;
extern "C" unsigned long _UNK_006a3b28;
extern "C" unsigned long _UNK_006a3b2c;
extern "C" unsigned long _UNK_006a3b30;
extern "C" unsigned long _UNK_006a3b34;
extern "C" unsigned long g_006a316c;
extern "C" unsigned long g_006a3196;
extern "C" unsigned long g_006a31c8;
extern "C" unsigned long g_006a31cc;
extern "C" unsigned long g_006a31f4;
extern "C" unsigned long g_006a321a;
extern "C" unsigned long g_006a3244;
extern "C" unsigned long g_006a3248;
extern "C" unsigned long g_006a328e;
extern "C" unsigned long g_006a32ae;
extern "C" unsigned long g_006a330a;
extern "C" unsigned long g_006a332a;
extern "C" unsigned long g_006a3356;
extern "C" unsigned long g_006a3368;
extern "C" unsigned long g_006a336c;
extern "C" unsigned long g_006a3370;
extern "C" unsigned long g_006a3374;
extern "C" unsigned long g_006a3378;
extern "C" unsigned long g_006a33a4;
extern "C" unsigned long g_006a33b2;
extern "C" unsigned long g_006a33c0;
extern "C" unsigned long g_006a33ce;
extern "C" unsigned long g_006a33f6;
extern "C" unsigned long g_006a341a;
extern "C" unsigned long g_006a341c;
extern "C" unsigned long g_006a3436;
extern "C" unsigned long g_006a3438;
extern "C" unsigned long g_006a3450;
extern "C" unsigned long g_006a3480;
extern "C" unsigned long g_006a3484;
extern "C" unsigned long g_006a3488;
extern "C" unsigned long g_006a348c;
extern "C" unsigned long g_006a3490;
extern "C" unsigned long g_006a3494;
extern "C" unsigned long g_006a3498;
extern "C" unsigned long g_006a349c;
extern "C" unsigned long g_006a34a0;
extern "C" unsigned long g_006a34a4;
extern "C" unsigned long g_006a34a8;
extern "C" unsigned long g_006a34f0;
extern "C" unsigned long g_006a3510;
extern "C" unsigned long g_006a3534;
extern "C" unsigned long g_006a358c;
extern "C" unsigned long g_006a3590;
extern "C" unsigned long g_006a3594;
extern "C" unsigned long g_006a35b0;
extern "C" unsigned long g_006a35b2;
extern "C" unsigned long g_006a35bc;
extern "C" unsigned long g_006a35c0;
extern "C" unsigned long g_006a35d8;
extern "C" unsigned long g_006a35dc;
extern "C" unsigned long g_006a3602;
extern "C" unsigned long g_006a36b4;
extern "C" unsigned long g_006a36c6;
extern "C" unsigned long g_006a3748;
extern "C" unsigned long g_006a374c;
extern "C" unsigned long g_006a3750;
extern "C" unsigned long g_006a3754;
extern "C" unsigned long g_006a3758;
extern "C" unsigned long g_006a375c;
extern "C" unsigned long g_006a3760;
extern "C" unsigned long g_006a3764;
extern "C" unsigned long g_006a378e;
extern "C" unsigned long g_006a37e4;
extern "C" unsigned long g_006a37e6;
extern "C" unsigned long g_006a380d;
extern "C" unsigned long g_006a386a;
extern "C" unsigned long g_006a389e;
extern "C" unsigned long g_006a391e;
extern "C" unsigned long g_006a3954;
extern "C" unsigned long g_006a39a6;
extern "C" unsigned long g_006a3a00;
extern "C" unsigned long g_006a3a10;
extern "C" unsigned long g_006a3a12;
extern "C" unsigned long g_006a3a25;
extern "C" unsigned long g_006a3ad8;
extern "C" unsigned long g_006a3adc;
extern "C" unsigned long g_006a3ae0;
extern "C" unsigned long g_006a3ae4;
extern "C" unsigned long g_006a3ae8;
extern "C" unsigned long g_006a3aec;
extern "C" unsigned long g_006a3af0;
extern "C" unsigned long g_006a3af4;
extern "C" unsigned long g_006a3af8;
extern "C" unsigned long g_006a3afc;
extern "C" unsigned long g_006a3b00;
extern "C" unsigned long g_006a3b04;
extern "C" unsigned long g_006a3b08;
extern "C" unsigned long g_006a3b0c;
extern "C" unsigned long g_006a3b10;
extern "C" unsigned long g_006a3b14;
extern "C" unsigned long g_006a3b18;
extern "C" unsigned long g_006a3b1c;
extern "C" unsigned long g_006a3b20;
extern "C" unsigned long g_006a3b24;
extern "C" unsigned long g_006a3b28;
extern "C" unsigned long g_006a3b2c;
extern "C" unsigned long g_006a3b30;
extern "C" unsigned long g_006a3b34;
cocos2d::extension::CCScale9Sprite* BLTalentLimitView::getSpriteBg() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

cocos2d::CCLabelTTF* BLTalentLimitView::getLabeTitle() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1b8));
}

void BLTalentLimitView::setLabeTitle(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  return;
}

BLTalentLimitView::~BLTalentLimitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a316c + g_006a31c8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a3196 + g_006a31cc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentLimitView::BLTalentLimitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a31f4 + g_006a3244);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a321a + g_006a3248,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}





void BLTalentLimitView::onExit()
{
  undefined4 uVar1;
  
  ((cocos2d::CCNode *)this)->onExit();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006a35d8 + g_006a35dc);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLTalentLimitView::setSpriteBg(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

undefined8 BLTalentLimitView::refresh()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLTalentLimitView::openLimit(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentLimitView::onBuyComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentLimitView::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLTalentLimitView::newBtn(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool BLTalentLimitView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

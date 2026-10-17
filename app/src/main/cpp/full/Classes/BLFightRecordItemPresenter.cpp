#include "BLFightRecordItemPresenter.h"
#include "ArenaPlayerData.h"
#include "BLFightRecordItemView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLVideoPlayer.h"
#include "CircusData.h"
#include "CircusLocalZip.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
#include "RoleInfoData.h"
#include "Toast.h"
#include "UIManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004bf78c;
extern "C" unsigned long UNK_004bf7a6;
extern "C" unsigned long UNK_004bf7ec;
extern "C" unsigned long UNK_004bf814;
extern "C" unsigned long UNK_004bf8ce;
extern "C" unsigned long UNK_004bf90a;
extern "C" unsigned long UNK_004bf954;
extern "C" unsigned long UNK_004bf95e;
extern "C" unsigned long UNK_004bf972;
extern "C" unsigned long UNK_004bf9ce;
extern "C" unsigned long UNK_004bfaba;
extern "C" unsigned long UNK_004bfae8;
extern "C" unsigned long UNK_004bfb76;
extern "C" unsigned long UNK_004bfb96;
extern "C" unsigned long UNK_004bfbb8;
extern "C" unsigned long UNK_004bfc86;
extern "C" unsigned long UNK_004bfcde;
extern "C" unsigned long UNK_004bfd16;
extern "C" unsigned long UNK_004bfd6f;
extern "C" unsigned long UNK_004bfdba;
extern "C" unsigned long UNK_004bfde8;
extern "C" unsigned long UNK_004bfe40;
extern "C" unsigned long UNK_004bfea6;
extern "C" unsigned long UNK_004bff20;
extern "C" unsigned long UNK_004bff6c;
extern "C" unsigned long UNK_004bffb2;
extern "C" unsigned long UNK_004c00ce;
extern "C" unsigned long UNK_004c0154;
extern "C" unsigned long UNK_004c017e;
extern "C" unsigned long UNK_004c01b0;
extern "C" unsigned long UNK_004c01ee;
extern "C" unsigned long _UNK_004bf7d8;
extern "C" unsigned long _UNK_004bf7dc;
extern "C" unsigned long _UNK_004bf7f0;
extern "C" unsigned long _UNK_004bf818;
extern "C" unsigned long _UNK_004bfa94;
extern "C" unsigned long _UNK_004bfa98;
extern "C" unsigned long _UNK_004bfa9c;
extern "C" unsigned long _UNK_004bfaa0;
extern "C" unsigned long _UNK_004bfaa4;
extern "C" unsigned long _UNK_004bfaa8;
extern "C" unsigned long _UNK_004bfb14;
extern "C" unsigned long _UNK_004bfb18;
extern "C" unsigned long _UNK_004bfba4;
extern "C" unsigned long _UNK_004bfba8;
extern "C" unsigned long _UNK_004bfe58;
extern "C" unsigned long _UNK_004bfe5c;
extern "C" unsigned long _UNK_004bfe60;
extern "C" unsigned long _UNK_004bfe64;
extern "C" unsigned long _UNK_004bfe68;
extern "C" unsigned long _UNK_004bfe6c;
extern "C" unsigned long _UNK_004bfe70;
extern "C" unsigned long _UNK_004bfe74;
extern "C" unsigned long _UNK_004bfe78;
extern "C" unsigned long _UNK_004c0228;
extern "C" unsigned long _UNK_004c022c;
extern "C" unsigned long _UNK_004c0230;
extern "C" unsigned long _UNK_004c0234;
extern "C" unsigned long _UNK_004c0238;
extern "C" unsigned long _UNK_004c023c;
extern "C" unsigned long _UNK_004c0240;
extern "C" unsigned long _UNK_004c0244;
extern "C" unsigned long _UNK_004c0248;
extern "C" unsigned long _UNK_004c024c;
extern "C" unsigned long _UNK_004c0250;
extern "C" unsigned long g_004bf78c;
extern "C" unsigned long g_004bf7a6;
extern "C" unsigned long g_004bf7d8;
extern "C" unsigned long g_004bf7dc;
extern "C" unsigned long g_004bf7ec;
extern "C" unsigned long g_004bf7f0;
extern "C" unsigned long g_004bf814;
extern "C" unsigned long g_004bf818;
extern "C" unsigned long g_004bf8ce;
extern "C" unsigned long g_004bf90a;
extern "C" unsigned long g_004bf954;
extern "C" unsigned long g_004bf95e;
extern "C" unsigned long g_004bf972;
extern "C" unsigned long g_004bf9ce;
extern "C" unsigned long g_004bfa94;
extern "C" unsigned long g_004bfa98;
extern "C" unsigned long g_004bfa9c;
extern "C" unsigned long g_004bfaa0;
extern "C" unsigned long g_004bfaa4;
extern "C" unsigned long g_004bfaa8;
extern "C" unsigned long g_004bfaba;
extern "C" unsigned long g_004bfae8;
extern "C" unsigned long g_004bfb14;
extern "C" unsigned long g_004bfb18;
extern "C" unsigned long g_004bfb76;
extern "C" unsigned long g_004bfb96;
extern "C" unsigned long g_004bfba4;
extern "C" unsigned long g_004bfba8;
extern "C" unsigned long g_004bfbb8;
extern "C" unsigned long g_004bfc86;
extern "C" unsigned long g_004bfcde;
extern "C" unsigned long g_004bfd16;
extern "C" unsigned long g_004bfd6f;
extern "C" unsigned long g_004bfdba;
extern "C" unsigned long g_004bfde8;
extern "C" unsigned long g_004bfe40;
extern "C" unsigned long g_004bfe58;
extern "C" unsigned long g_004bfe5c;
extern "C" unsigned long g_004bfe60;
extern "C" unsigned long g_004bfe64;
extern "C" unsigned long g_004bfe68;
extern "C" unsigned long g_004bfe6c;
extern "C" unsigned long g_004bfe70;
extern "C" unsigned long g_004bfe74;
extern "C" unsigned long g_004bfe78;
extern "C" unsigned long g_004bfea6;
extern "C" unsigned long g_004bff20;
extern "C" unsigned long g_004bff6c;
extern "C" unsigned long g_004bffb2;
extern "C" unsigned long g_004c00ce;
extern "C" unsigned long g_004c0154;
extern "C" unsigned long g_004c017e;
extern "C" unsigned long g_004c01b0;
extern "C" unsigned long g_004c01ee;
extern "C" unsigned long g_004c0228;
extern "C" unsigned long g_004c022c;
extern "C" unsigned long g_004c0230;
extern "C" unsigned long g_004c0234;
extern "C" unsigned long g_004c0238;
extern "C" unsigned long g_004c023c;
extern "C" unsigned long g_004c0240;
extern "C" unsigned long g_004c0244;
extern "C" unsigned long g_004c0248;
extern "C" unsigned long g_004c024c;
extern "C" unsigned long g_004c0250;
int BLFightRecordItemPresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLFightRecordItemPresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool BLFightRecordItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFightRecordItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordItemPresenter::tick(float p1)
{
  return;
}

BLFightRecordItemPresenter::~BLFightRecordItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004bf78c + g_004bf7d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004bf7a6 + g_004bf7dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLFightRecordItemPresenter::BLFightRecordItemPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_004bfaba + g_004bfb14);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004bfae8 + g_004bfb18,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLFightRecordItemPresenter::onEnter()
{
  return;
}

void BLFightRecordItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLFightRecordItemPresenter::create(BLFightRecordItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLFightRecordItemPresenter::onVideo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFightRecordItemPresenter::initWithView(BLFightRecordItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLFightRecordItemView *)p1)->getBtnVideo();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004bfb76 + g_004bfba4),0,0x20);
  piVar1 = (int *)((BLFightRecordItemView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnFuChou();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004bfb96 + g_004bfba8),0,0x20);
  return;
}

void BLFightRecordItemPresenter::initWith(pvpSimplePlayerinfo const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFightRecordItemPresenter::onFuChou(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

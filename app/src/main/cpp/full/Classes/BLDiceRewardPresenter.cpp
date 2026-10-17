#include "BLDiceRewardPresenter.h"
#include "BLDiceRewardView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "Toast.h"
#include "TreasureDataManager.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00622ff8;
extern "C" unsigned long UNK_00623010;
extern "C" unsigned long UNK_00623028;
extern "C" unsigned long UNK_00623098;
extern "C" unsigned long UNK_006230b2;
extern "C" unsigned long UNK_006230f8;
extern "C" unsigned long UNK_00623120;
extern "C" unsigned long UNK_00623184;
extern "C" unsigned long UNK_0062319c;
extern "C" unsigned long UNK_006231b2;
extern "C" unsigned long UNK_006231fa;
extern "C" unsigned long UNK_00623230;
extern "C" unsigned long UNK_006232c6;
extern "C" unsigned long UNK_006232e6;
extern "C" unsigned long UNK_00623320;
extern "C" unsigned long UNK_00623350;
extern "C" unsigned long UNK_00623412;
extern "C" unsigned long _UNK_00622ffc;
extern "C" unsigned long _UNK_00623014;
extern "C" unsigned long _UNK_0062302c;
extern "C" unsigned long _UNK_006230e4;
extern "C" unsigned long _UNK_006230e8;
extern "C" unsigned long _UNK_006230fc;
extern "C" unsigned long _UNK_00623124;
extern "C" unsigned long _UNK_00623154;
extern "C" unsigned long _UNK_006231dc;
extern "C" unsigned long _UNK_006231e0;
extern "C" unsigned long _UNK_006231e4;
extern "C" unsigned long _UNK_006231e8;
extern "C" unsigned long _UNK_0062325c;
extern "C" unsigned long _UNK_00623260;
extern "C" unsigned long _UNK_00623334;
extern "C" unsigned long _UNK_00623338;
extern "C" unsigned long _UNK_0062333c;
extern "C" unsigned long _UNK_00623570;
extern "C" unsigned long _UNK_00623574;
extern "C" unsigned long _UNK_00623578;
extern "C" unsigned long _UNK_0062357c;
extern "C" unsigned long _UNK_00623580;
extern "C" unsigned long _UNK_00623584;
extern "C" unsigned long _UNK_00623588;
extern "C" unsigned long _UNK_0062358c;
extern "C" unsigned long _UNK_00623590;
extern "C" unsigned long _UNK_00623594;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00622ff8;
extern "C" unsigned long g_00622ffc;
extern "C" unsigned long g_00623010;
extern "C" unsigned long g_00623014;
extern "C" unsigned long g_00623028;
extern "C" unsigned long g_0062302c;
extern "C" unsigned long g_00623098;
extern "C" unsigned long g_006230b2;
extern "C" unsigned long g_006230e4;
extern "C" unsigned long g_006230e8;
extern "C" unsigned long g_006230f8;
extern "C" unsigned long g_006230fc;
extern "C" unsigned long g_00623120;
extern "C" unsigned long g_00623124;
extern "C" unsigned long g_00623154;
extern "C" unsigned long g_00623184;
extern "C" unsigned long g_0062319c;
extern "C" unsigned long g_006231b2;
extern "C" unsigned long g_006231dc;
extern "C" unsigned long g_006231e0;
extern "C" unsigned long g_006231e4;
extern "C" unsigned long g_006231e8;
extern "C" unsigned long g_006231fa;
extern "C" unsigned long g_00623230;
extern "C" unsigned long g_0062325c;
extern "C" unsigned long g_00623260;
extern "C" unsigned long g_006232c6;
extern "C" unsigned long g_006232e6;
extern "C" unsigned long g_00623320;
extern "C" unsigned long g_00623334;
extern "C" unsigned long g_00623338;
extern "C" unsigned long g_0062333c;
extern "C" unsigned long g_00623350;
extern "C" unsigned long g_00623412;
extern "C" unsigned long g_00623570;
extern "C" unsigned long g_00623574;
extern "C" unsigned long g_00623578;
extern "C" unsigned long g_0062357c;
extern "C" unsigned long g_00623580;
extern "C" unsigned long g_00623584;
extern "C" unsigned long g_00623588;
extern "C" unsigned long g_0062358c;
extern "C" unsigned long g_00623590;
extern "C" unsigned long g_00623594;
void BLDiceRewardPresenter::tick(float p1)
{
  return;
}

bool BLDiceRewardPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDiceRewardPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRewardPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRewardPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLDiceRewardPresenter::~BLDiceRewardPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00623098 + g_006230e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006230b2 + g_006230e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDiceRewardPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00623154);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}


BLDiceRewardPresenter::BLDiceRewardPresenter()
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
  iVar3 = *(int *)(&g_006231fa + g_0062325c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00623230 + g_00623260,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLDiceRewardPresenter::onEnter()
{
  return;
}

void BLDiceRewardPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLDiceRewardPresenter::create(BLDiceRewardView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLDiceRewardPresenter::initHeroIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLDiceRewardPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int extraout_r3;
  
  iVar1 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
  if (**(int **)(iVar1 + 0x6c) == 100) {
    ((TreasureDataManager *)this)->getInstance();
    piVar2 = (int *)((TreasureDataManager *)this)->getMapItemDatas();
    iVar1 = (int)*(int *)&(*piVar2);
    if ((uint)(piVar2[1] - iVar1 >> 2) < 100) {
      func_0079e784((unsigned char *)((char *)&g_00623184 + (intptr_t)(g_006231dc)),99);
      iVar1 = (undefined4)(intptr_t)(extraout_r3);
    }
    if (*(char *)(*(int *)(iVar1 + 0x18c) + 0x18) == '\0') {
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)uVar3)->showUIById(0xc5);
      return;
    }
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    puVar4 = (unsigned char *)((char *)&g_0062319c + (intptr_t)(g_006231e0));
  }
  else {
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    puVar4 = (unsigned char *)((char *)&g_006231b2 + (intptr_t)(g_006231e4));
  }
  ((Toast *)uVar3)->showToast((char const*)puVar4);
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(g_006231e8);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLDiceRewardPresenter::initWithView(BLDiceRewardView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDiceRewardView *)p1)->getBtnClose();
  iVar2 = 0;
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006232c6 + g_00623334),0,0x20);
  piVar1 = (int *)((BLDiceRewardView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006232e6 + g_00623338),0,0x20);
  do {
    piVar1 = (int *)((BLDiceRewardView *)*(undefined4 *)(((int)this) + 0x1c))->getSPBackGround();
    piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,iVar2);
    piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,1);
    iVar2 = iVar2 + 1;
    (**(code **)(*piVar1 + 0x254))
              (piVar1,((int)this),*(undefined4 *)(&g_00623320 + g_0062333c),0,0x20);
  } while (iVar2 != 5);
  return;
}

void BLDiceRewardPresenter::onItemClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

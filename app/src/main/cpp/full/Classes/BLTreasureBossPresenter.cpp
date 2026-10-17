#include "BLTreasureBossPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLMonsterGroupData.h"
#include "BLTreasureBossView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "TreasureMissionData.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7f4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005dc8fc;
extern "C" unsigned long UNK_005dc914;
extern "C" unsigned long UNK_005dc92c;
extern "C" unsigned long UNK_005dc9a0;
extern "C" unsigned long UNK_005dc9ba;
extern "C" unsigned long UNK_005dca00;
extern "C" unsigned long UNK_005dca28;
extern "C" unsigned long UNK_005dca5e;
extern "C" unsigned long UNK_005dca76;
extern "C" unsigned long UNK_005dca8e;
extern "C" unsigned long UNK_005dcacc;
extern "C" unsigned long UNK_005dcaf6;
extern "C" unsigned long UNK_005dcb24;
extern "C" unsigned long UNK_005dcbc0;
extern "C" unsigned long UNK_005dcbfe;
extern "C" unsigned long UNK_005dcc50;
extern "C" unsigned long UNK_005dcc8e;
extern "C" unsigned long UNK_005dcd0a;
extern "C" unsigned long UNK_005dcdc6;
extern "C" unsigned long UNK_005dd0ec;
extern "C" unsigned long UNK_005dd0fa;
extern "C" unsigned long UNK_005dd110;
extern "C" unsigned long UNK_005dd200;
extern "C" unsigned long UNK_005dd3c4;
extern "C" unsigned long UNK_005dd3c6;
extern "C" unsigned long UNK_005dd440;
extern "C" unsigned long UNK_005dd500;
extern "C" unsigned long UNK_005dd51e;
extern "C" unsigned long UNK_005dd5c6;
extern "C" unsigned long UNK_005dd5e4;
extern "C" unsigned long UNK_005dd65e;
extern "C" unsigned long UNK_005dd702;
extern "C" unsigned long _UNK_005dc900;
extern "C" unsigned long _UNK_005dc918;
extern "C" unsigned long _UNK_005dc930;
extern "C" unsigned long _UNK_005dc9ec;
extern "C" unsigned long _UNK_005dc9f0;
extern "C" unsigned long _UNK_005dca04;
extern "C" unsigned long _UNK_005dca2c;
extern "C" unsigned long _UNK_005dcad0;
extern "C" unsigned long _UNK_005dcad4;
extern "C" unsigned long _UNK_005dcad8;
extern "C" unsigned long _UNK_005dcadc;
extern "C" unsigned long _UNK_005dcae0;
extern "C" unsigned long _UNK_005dcae4;
extern "C" unsigned long _UNK_005dcb50;
extern "C" unsigned long _UNK_005dcb54;
extern "C" unsigned long _UNK_005dcc18;
extern "C" unsigned long _UNK_005dcc1c;
extern "C" unsigned long _UNK_005dcc20;
extern "C" unsigned long _UNK_005dcc24;
extern "C" unsigned long _UNK_005dcca8;
extern "C" unsigned long _UNK_005dccac;
extern "C" unsigned long _UNK_005dccb0;
extern "C" unsigned long _UNK_005dccb4;
extern "C" unsigned long _UNK_005dcf6c;
extern "C" unsigned long _UNK_005dcf70;
extern "C" unsigned long _UNK_005dcf74;
extern "C" unsigned long _UNK_005dd334;
extern "C" unsigned long _UNK_005dd338;
extern "C" unsigned long _UNK_005dd33c;
extern "C" unsigned long _UNK_005dd340;
extern "C" unsigned long _UNK_005dd618;
extern "C" unsigned long _UNK_005dd61c;
extern "C" unsigned long _UNK_005dd620;
extern "C" unsigned long _UNK_005dd624;
extern "C" unsigned long _UNK_005dd628;
extern "C" unsigned long _UNK_005dd62c;
extern "C" unsigned long _UNK_005dd630;
extern "C" unsigned long _UNK_005dd634;
extern "C" unsigned long _UNK_005dd638;
extern "C" unsigned long _UNK_005dd72c;
extern "C" unsigned long _UNK_005dd730;
extern "C" unsigned long _UNK_005dd734;
extern "C" unsigned long _UNK_005dd738;
extern "C" unsigned long _UNK_005dd73c;
extern "C" unsigned long _UNK_005dd740;
extern "C" unsigned long _UNK_005dd744;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005dc8fc;
extern "C" unsigned long g_005dc900;
extern "C" unsigned long g_005dc914;
extern "C" unsigned long g_005dc918;
extern "C" unsigned long g_005dc92c;
extern "C" unsigned long g_005dc930;
extern "C" unsigned long g_005dc9a0;
extern "C" unsigned long g_005dc9ba;
extern "C" unsigned long g_005dc9ec;
extern "C" unsigned long g_005dc9f0;
extern "C" unsigned long g_005dca00;
extern "C" unsigned long g_005dca04;
extern "C" unsigned long g_005dca28;
extern "C" unsigned long g_005dca2c;
extern "C" unsigned long g_005dca5e;
extern "C" unsigned long g_005dca76;
extern "C" unsigned long g_005dca8e;
extern "C" unsigned long g_005dcacc;
extern "C" unsigned long g_005dcad0;
extern "C" unsigned long g_005dcad4;
extern "C" unsigned long g_005dcad8;
extern "C" unsigned long g_005dcadc;
extern "C" unsigned long g_005dcae0;
extern "C" unsigned long g_005dcae4;
extern "C" unsigned long g_005dcaf6;
extern "C" unsigned long g_005dcb24;
extern "C" unsigned long g_005dcb50;
extern "C" unsigned long g_005dcb54;
extern "C" unsigned long g_005dcbc0;
extern "C" unsigned long g_005dcbfe;
extern "C" unsigned long g_005dcc18;
extern "C" unsigned long g_005dcc1c;
extern "C" unsigned long g_005dcc20;
extern "C" unsigned long g_005dcc24;
extern "C" unsigned long g_005dcc50;
extern "C" unsigned long g_005dcc8e;
extern "C" unsigned long g_005dcca8;
extern "C" unsigned long g_005dccac;
extern "C" unsigned long g_005dccb0;
extern "C" unsigned long g_005dccb4;
extern "C" unsigned long g_005dcd0a;
extern "C" unsigned long g_005dcdc6;
extern "C" unsigned long g_005dcf6c;
extern "C" unsigned long g_005dcf70;
extern "C" unsigned long g_005dcf74;
extern "C" unsigned long g_005dd0ec;
extern "C" unsigned long g_005dd0fa;
extern "C" unsigned long g_005dd110;
extern "C" unsigned long g_005dd200;
extern "C" unsigned long g_005dd334;
extern "C" unsigned long g_005dd338;
extern "C" unsigned long g_005dd33c;
extern "C" unsigned long g_005dd340;
extern "C" unsigned long g_005dd3c4;
extern "C" unsigned long g_005dd3c6;
extern "C" unsigned long g_005dd440;
extern "C" unsigned long g_005dd500;
extern "C" unsigned long g_005dd51e;
extern "C" unsigned long g_005dd5c6;
extern "C" unsigned long g_005dd5e4;
extern "C" unsigned long g_005dd618;
extern "C" unsigned long g_005dd61c;
extern "C" unsigned long g_005dd620;
extern "C" unsigned long g_005dd624;
extern "C" unsigned long g_005dd628;
extern "C" unsigned long g_005dd62c;
extern "C" unsigned long g_005dd630;
extern "C" unsigned long g_005dd634;
extern "C" unsigned long g_005dd638;
extern "C" unsigned long g_005dd65e;
extern "C" unsigned long g_005dd702;
extern "C" unsigned long g_005dd72c;
extern "C" unsigned long g_005dd730;
extern "C" unsigned long g_005dd734;
extern "C" unsigned long g_005dd738;
extern "C" unsigned long g_005dd73c;
extern "C" unsigned long g_005dd740;
extern "C" unsigned long g_005dd744;
bool BLTreasureBossPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureBossPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureBossPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureBossPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureBossPresenter::tick(float p1)
{
  return;
}

BLTreasureBossPresenter::~BLTreasureBossPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005dc9a0 + g_005dc9ec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005dc9ba + g_005dc9f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureBossPresenter::onClose(cocos2d::CCObject* p1, unsigned int* p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xc5);
  return;
}


BLTreasureBossPresenter::BLTreasureBossPresenter()
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
  iVar3 = *(int *)(&g_005dcaf6 + g_005dcb50);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005dcb24 + g_005dcb54,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureBossPresenter::onEnter()
{
  return;
}

void BLTreasureBossPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLTreasureBossPresenter::create(BLTreasureBossView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTreasureBossPresenter::onRefresh(cocos2d::CCObject* p1, unsigned int* p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int extraout_r3;
  undefined4 uStack_10;
  
  ((TreasureDataManager *)this)->getInstance();
  piVar1 = (int *)((TreasureDataManager *)this)->getMapItemDatas();
  iVar4 = (int)*(int *)&(*piVar1);
  if ((uint)(piVar1[1] - iVar4 >> 2) < 100) {
    func_0079e784((unsigned char *)((char *)&g_005dca5e + (intptr_t)(g_005dcad8)),99);
    iVar4 = (undefined4)(intptr_t)(extraout_r3);
  }
  uStack_10 = (undefined4)((int *)((int)this));
  if (*(char *)(*(int *)(iVar4 + 0x18c) + 0x18) == '\0') {
    iVar4 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
    iVar4 = (undefined4)(intptr_t)(((TreasureHeroData *)(*(undefined4 *)(iVar4 + 0x70)))->checkModifyHeroData());
    if (iVar4 == 0) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      puVar3 = (unsigned char *)((char *)&g_005dca8e + (intptr_t)(g_005dcae0));
    }
    else {
      uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
      iVar4 = (undefined4)(intptr_t)(((DataManager *)(uVar2))->isEnoughVirNumber(2, 0x14, 1));
      if (iVar4 == 0) goto code_r0x005dcace;
      iVar4 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
      ((TreasureHeroData *)(*(undefined4 *)(iVar4 + 0x70)))->checkAddedHeroData();
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
      uStack_10 = (undefined4)(1);
      ((UserData *)(uVar2))->subVirNumber(2, g_005dcad0, g_005dcad4);
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      puVar3 = (unsigned char *)((char *)&g_005dcacc + (intptr_t)(g_005dcae4));
    }
  }
  else {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    puVar3 = (unsigned char *)((char *)&g_005dca76 + (intptr_t)(g_005dcadc));
  }
  ((Toast *)(uVar2))->showToast((char const*)puVar3);
code_r0x005dcace:
  return;
}

void BLTreasureBossPresenter::onRelease(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureBossPresenter::onReLife(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureBossPresenter::onPaly(cocos2d::CCObject* p1, unsigned int* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureBossPresenter::initboss()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureBossPresenter::initWithView(BLTreasureBossView* p1)
{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureBossView *)p1)->getBtnClose();
  iVar2 = (undefined4)(intptr_t)(g_005dd72c);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005dd65e + (intptr_t)(g_005dd730)) + g_005dd72c));
  uStack_3c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_40,0,0x20);
  piVar1 = (int *)((BLTreasureBossView *)*(undefined4 *)(((int)this) + 0x18))->getBtnPlay();
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005dd65e + (intptr_t)(g_005dd734)) + iVar2));
  uStack_34 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_38,0,0x20);
  piVar1 = (int *)((BLTreasureBossView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRelease();
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005dd65e + (intptr_t)(g_005dd738)) + iVar2));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLTreasureBossView *)*(undefined4 *)(((int)this) + 0x18))->getBtnReLife();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005dd65e + (intptr_t)(g_005dd73c)) + iVar2));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLTreasureBossView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRefresh();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005dd65e + (intptr_t)(g_005dd740)) + iVar2),0,0x20);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<TreasureMissionData, 0> *)this)->instance());
  func_0079e45c(auStack_44,(unsigned char *)((char *)&g_005dd702 + (intptr_t)(g_005dd744)),auStack_48);
  func_0079e52c(iVar2 + 0x3c,auStack_44);
  func_0079e2bc(auStack_44);
  BLTreasureBossPresenter::initboss();
  return;
}

#include "BLJianShengSkinPresenter.h"
#include "BLJianShengSkinView.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "PlayerData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054749c;
extern "C" unsigned long UNK_005474b6;
extern "C" unsigned long UNK_005474fc;
extern "C" unsigned long UNK_00547524;
extern "C" unsigned long UNK_00547570;
extern "C" unsigned long UNK_00547590;
extern "C" unsigned long UNK_005475b4;
extern "C" unsigned long UNK_005475f2;
extern "C" unsigned long UNK_005475fe;
extern "C" unsigned long UNK_0054760e;
extern "C" unsigned long UNK_00547634;
extern "C" unsigned long UNK_0054769e;
extern "C" unsigned long UNK_005476cc;
extern "C" unsigned long UNK_00547746;
extern "C" unsigned long UNK_00547764;
extern "C" unsigned long UNK_00547766;
extern "C" unsigned long UNK_00547796;
extern "C" unsigned long UNK_005477b6;
extern "C" unsigned long UNK_005477d6;
extern "C" unsigned long UNK_00547830;
extern "C" unsigned long UNK_00547840;
extern "C" unsigned long UNK_00547868;
extern "C" unsigned long UNK_0054788c;
extern "C" unsigned long UNK_0054788e;
extern "C" unsigned long UNK_005478a8;
extern "C" unsigned long UNK_005478aa;
extern "C" unsigned long UNK_005478c2;
extern "C" unsigned long _UNK_005474e8;
extern "C" unsigned long _UNK_005474ec;
extern "C" unsigned long _UNK_00547500;
extern "C" unsigned long _UNK_00547528;
extern "C" unsigned long _UNK_00547668;
extern "C" unsigned long _UNK_0054766c;
extern "C" unsigned long _UNK_00547670;
extern "C" unsigned long _UNK_00547674;
extern "C" unsigned long _UNK_00547678;
extern "C" unsigned long _UNK_0054767c;
extern "C" unsigned long _UNK_00547680;
extern "C" unsigned long _UNK_00547684;
extern "C" unsigned long _UNK_00547688;
extern "C" unsigned long _UNK_005476f8;
extern "C" unsigned long _UNK_005476fc;
extern "C" unsigned long _UNK_0054774c;
extern "C" unsigned long _UNK_00547770;
extern "C" unsigned long _UNK_00547774;
extern "C" unsigned long _UNK_00547814;
extern "C" unsigned long _UNK_00547818;
extern "C" unsigned long _UNK_0054781c;
extern "C" unsigned long _UNK_005478f0;
extern "C" unsigned long _UNK_005478f4;
extern "C" unsigned long _UNK_005478f8;
extern "C" unsigned long _UNK_005478fc;
extern "C" unsigned long _UNK_00547900;
extern "C" unsigned long _UNK_00547904;
extern "C" unsigned long _UNK_00547908;
extern "C" unsigned long _UNK_0054790c;
extern "C" unsigned long _UNK_00547910;
extern "C" unsigned long g_0054749c;
extern "C" unsigned long g_005474b6;
extern "C" unsigned long g_005474e8;
extern "C" unsigned long g_005474ec;
extern "C" unsigned long g_005474fc;
extern "C" unsigned long g_00547500;
extern "C" unsigned long g_00547524;
extern "C" unsigned long g_00547528;
extern "C" unsigned long g_00547570;
extern "C" unsigned long g_00547590;
extern "C" unsigned long g_005475b4;
extern "C" unsigned long g_005475f2;
extern "C" unsigned long g_005475fe;
extern "C" unsigned long g_0054760e;
extern "C" unsigned long g_00547634;
extern "C" unsigned long g_00547668;
extern "C" unsigned long g_0054766c;
extern "C" unsigned long g_00547670;
extern "C" unsigned long g_00547674;
extern "C" unsigned long g_00547678;
extern "C" unsigned long g_0054767c;
extern "C" unsigned long g_00547680;
extern "C" unsigned long g_00547684;
extern "C" unsigned long g_00547688;
extern "C" unsigned long g_0054769e;
extern "C" unsigned long g_005476cc;
extern "C" unsigned long g_005476f8;
extern "C" unsigned long g_005476fc;
extern "C" unsigned long g_00547746;
extern "C" unsigned long g_0054774c;
extern "C" unsigned long g_00547764;
extern "C" unsigned long g_00547766;
extern "C" unsigned long g_00547770;
extern "C" unsigned long g_00547774;
extern "C" unsigned long g_00547796;
extern "C" unsigned long g_005477b6;
extern "C" unsigned long g_005477d6;
extern "C" unsigned long g_00547814;
extern "C" unsigned long g_00547818;
extern "C" unsigned long g_0054781c;
extern "C" unsigned long g_00547830;
extern "C" unsigned long g_00547840;
extern "C" unsigned long g_00547868;
extern "C" unsigned long g_0054788c;
extern "C" unsigned long g_0054788e;
extern "C" unsigned long g_005478a8;
extern "C" unsigned long g_005478aa;
extern "C" unsigned long g_005478c2;
extern "C" unsigned long g_005478f0;
extern "C" unsigned long g_005478f4;
extern "C" unsigned long g_005478f8;
extern "C" unsigned long g_005478fc;
extern "C" unsigned long g_00547900;
extern "C" unsigned long g_00547904;
extern "C" unsigned long g_00547908;
extern "C" unsigned long g_0054790c;
extern "C" unsigned long g_00547910;
bool BLJianShengSkinPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLJianShengSkinPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJianShengSkinPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJianShengSkinPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJianShengSkinPresenter::tick(float p1)
{
  return;
}

BLJianShengSkinPresenter::~BLJianShengSkinPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054749c + g_005474e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005474b6 + g_005474ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLJianShengSkinPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb8);
  return;
}

void BLJianShengSkinPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLJianShengSkinPresenter::BLJianShengSkinPresenter()
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
  iVar3 = *(int *)(&g_0054769e + g_005476f8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005476cc + g_005476fc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLJianShengSkinPresenter::create(BLJianShengSkinView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLJianShengSkinPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00547746 + g_0054774c);
  return;
}

void BLJianShengSkinPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJianShengSkinPresenter::initWithView(BLJianShengSkinView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLJianShengSkinView *)p1)->getBtnClose();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_00547796 + g_00547814));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLJianShengSkinView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGet();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005477b6 + g_00547818));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLJianShengSkinView *)*(undefined4 *)(((int)this) + 0x18))->getLabTitle();
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_005477d6 + g_0054781c);
  piVar1 = (int *)((BLJianShengSkinView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLJianShengSkinView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_30,piVar2);
  (*pcVar3)(piVar1,auStack_30);
  return;
}

void BLJianShengSkinPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

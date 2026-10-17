#include "BLMineSnatchHeroPresenter.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchHeroItemPresenter.h"
#include "BLMineSnatchHeroItemView.h"
#include "BLMineSnatchHeroView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PlatformHelp.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a820c;
extern "C" unsigned long UNK_005a8240;
extern "C" unsigned long UNK_005a8284;
extern "C" unsigned long UNK_005a82ac;
extern "C" unsigned long UNK_005a82cc;
extern "C" unsigned long UNK_005a8314;
extern "C" unsigned long UNK_005a8316;
extern "C" unsigned long UNK_005a833c;
extern "C" unsigned long UNK_005a833e;
extern "C" unsigned long UNK_005a83ac;
extern "C" unsigned long UNK_005a83d2;
extern "C" unsigned long UNK_005a83d6;
extern "C" unsigned long UNK_005a8416;
extern "C" unsigned long UNK_005a8464;
extern "C" unsigned long UNK_005a848e;
extern "C" unsigned long UNK_005a8506;
extern "C" unsigned long UNK_005a8508;
extern "C" unsigned long UNK_005a853e;
extern "C" unsigned long UNK_005a8562;
extern "C" unsigned long UNK_005a85b4;
extern "C" unsigned long UNK_005a85ec;
extern "C" unsigned long UNK_005a86f0;
extern "C" unsigned long UNK_005a871e;
extern "C" unsigned long UNK_005a873a;
extern "C" unsigned long UNK_005a875c;
extern "C" unsigned long UNK_005a8878;
extern "C" unsigned long UNK_005a887a;
extern "C" unsigned long _UNK_005a8270;
extern "C" unsigned long _UNK_005a8274;
extern "C" unsigned long _UNK_005a8288;
extern "C" unsigned long _UNK_005a82b0;
extern "C" unsigned long _UNK_005a82d0;
extern "C" unsigned long _UNK_005a82e4;
extern "C" unsigned long _UNK_005a82e8;
extern "C" unsigned long _UNK_005a8358;
extern "C" unsigned long _UNK_005a835c;
extern "C" unsigned long _UNK_005a8360;
extern "C" unsigned long _UNK_005a8364;
extern "C" unsigned long _UNK_005a844c;
extern "C" unsigned long _UNK_005a8450;
extern "C" unsigned long _UNK_005a8454;
extern "C" unsigned long _UNK_005a8458;
extern "C" unsigned long _UNK_005a8468;
extern "C" unsigned long _UNK_005a84a0;
extern "C" unsigned long _UNK_005a8520;
extern "C" unsigned long _UNK_005a8524;
extern "C" unsigned long _UNK_005a86c0;
extern "C" unsigned long _UNK_005a86c4;
extern "C" unsigned long _UNK_005a86c8;
extern "C" unsigned long _UNK_005a86cc;
extern "C" unsigned long _UNK_005a8808;
extern "C" unsigned long _UNK_005a880c;
extern "C" unsigned long _UNK_005a8810;
extern "C" unsigned long _UNK_005a8814;
extern "C" unsigned long _UNK_005a89cc;
extern "C" unsigned long _UNK_005a89d0;
extern "C" unsigned long _UNK_005a89d4;
extern "C" unsigned long g_005a820c;
extern "C" unsigned long g_005a8240;
extern "C" unsigned long g_005a8270;
extern "C" unsigned long g_005a8274;
extern "C" unsigned long g_005a8284;
extern "C" unsigned long g_005a8288;
extern "C" unsigned long g_005a82ac;
extern "C" unsigned long g_005a82b0;
extern "C" unsigned long g_005a82cc;
extern "C" unsigned long g_005a82d0;
extern "C" unsigned long g_005a82e4;
extern "C" unsigned long g_005a82e8;
extern "C" unsigned long g_005a8314;
extern "C" unsigned long g_005a8316;
extern "C" unsigned long g_005a833c;
extern "C" unsigned long g_005a833e;
extern "C" unsigned long g_005a8358;
extern "C" unsigned long g_005a835c;
extern "C" unsigned long g_005a8360;
extern "C" unsigned long g_005a8364;
extern "C" unsigned long g_005a83ac;
extern "C" unsigned long g_005a83d2;
extern "C" unsigned long g_005a83d6;
extern "C" unsigned long g_005a8416;
extern "C" unsigned long g_005a844c;
extern "C" unsigned long g_005a8450;
extern "C" unsigned long g_005a8454;
extern "C" unsigned long g_005a8458;
extern "C" unsigned long g_005a8464;
extern "C" unsigned long g_005a8468;
extern "C" unsigned long g_005a848e;
extern "C" unsigned long g_005a84a0;
extern "C" unsigned long g_005a8506;
extern "C" unsigned long g_005a8508;
extern "C" unsigned long g_005a8520;
extern "C" unsigned long g_005a8524;
extern "C" unsigned long g_005a853e;
extern "C" unsigned long g_005a8562;
extern "C" unsigned long g_005a85b4;
extern "C" unsigned long g_005a85ec;
extern "C" unsigned long g_005a86c0;
extern "C" unsigned long g_005a86c4;
extern "C" unsigned long g_005a86c8;
extern "C" unsigned long g_005a86cc;
extern "C" unsigned long g_005a86f0;
extern "C" unsigned long g_005a871e;
extern "C" unsigned long g_005a873a;
extern "C" unsigned long g_005a875c;
extern "C" unsigned long g_005a8808;
extern "C" unsigned long g_005a880c;
extern "C" unsigned long g_005a8810;
extern "C" unsigned long g_005a8814;
extern "C" unsigned long g_005a8878;
extern "C" unsigned long g_005a887a;
extern "C" unsigned long g_005a89cc;
extern "C" unsigned long g_005a89d0;
extern "C" unsigned long g_005a89d4;
bool BLMineSnatchHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineSnatchHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchHeroPresenter::tick(float p1)
{
  return;
}

void BLMineSnatchHeroPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLMineSnatchHeroPresenter::~BLMineSnatchHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a820c + g_005a8270);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a8240 + g_005a8274,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineSnatchHeroPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLMineSnatchHeroPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLMineSnatchHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x108);
  return;
}

void BLMineSnatchHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x108);
  return;
}


void BLMineSnatchHeroPresenter::onEnter()
{
  ((PlatformHelp *)this)->showLenovoBanner((char const*)&g_005a8464 + g_005a8468);
  return;
}

void BLMineSnatchHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a848e + g_005a84a0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

undefined4 BLMineSnatchHeroPresenter::create(BLMineSnatchHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}





void BLMineSnatchHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  BLMineSnatchHeroPresenter::updateSelecetData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x108);
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLMineSnatchHeroPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005a8314 + (intptr_t)(g_005a8358))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005a8316 + (intptr_t)(g_005a835c))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLMineSnatchHeroItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005a833c + (intptr_t)(g_005a8360))),
                            *(undefined4 *)((unsigned char *)((char *)&g_005a833e + (intptr_t)(g_005a8364))),0);
  }
  uVar4 = (undefined4)(((BLMineSnatchHeroItemView *)iVar1)->getPresenter());
  ((BLMineSnatchHeroItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

BLMineSnatchHeroPresenter::BLMineSnatchHeroPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005a83ac + (intptr_t)(g_005a844c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a83d2 + (intptr_t)(g_005a8450))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_005a83d6 + (intptr_t)(g_005a8454)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005a8416 + (intptr_t)(g_005a8458)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLMineSnatchHeroPresenter::initRolesData()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_005a8506 + (intptr_t)(g_005a8520))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005a8508 + (intptr_t)(g_005a8524))),0), iVar4 != 0)) {
      ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x24));
    }
  }
  return;
}

void BLMineSnatchHeroPresenter::updateData(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_fc [4];
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_f4,(unsigned char *)((char *)&g_005a853e + (intptr_t)(g_005a86c0)),auStack_fc);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_f0);
  func_0079e53c(auStack_ec,auStack_f0);
  func_0079e854(auStack_ec,(unsigned char *)((char *)&g_005a8562 + (intptr_t)(g_005a86c4)));
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x40)))();
  (**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar1 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
  ConvertToString<unsigned int>((unsigned int)auStack_e8, uVar1, 0);
  func_0079e53c(auStack_e4,auStack_ec);
  func_0079e5dc(auStack_e4,auStack_e8);
  func_0079e53c(auStack_e0,auStack_e4);
  func_0079e854(auStack_e0,(unsigned char *)((char *)&g_005a85b4 + (intptr_t)(g_005a86c8)));
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x38)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0xa8)))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar1);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005a85ec + (intptr_t)(g_005a86cc)),auStack_dc);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  func_0079e53c(&uStack_f8,auStack_e0);
  func_0079e5dc(&uStack_f8,auStack_dc);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  func_0079e2bc(auStack_e4);
  func_0079e2bc(auStack_e8);
  func_0079e2bc(auStack_ec);
  func_0079e2bc(auStack_f0);
  func_0079e2bc(auStack_f4);
  piVar2 = (int *)((BLMineSnatchHeroView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRoleLimit();
  (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,uStack_f8);
  func_0079e2bc(&uStack_f8);
  return;
}

void BLMineSnatchHeroPresenter::initWithView(BLMineSnatchHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMineSnatchHeroView *)p1)->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(&uStack_20,&g_005a86f0 + g_005a8808,&uStack_28);
  (*pcVar4)(piVar1,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_005a871e + g_005a880c));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnCancle();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005a873a + g_005a8810));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnSure();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005a875c + g_005a8814));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_38,piVar2);
  (*pcVar4)(piVar1,auStack_38);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  BLMineSnatchHeroPresenter::initRolesData();
  uVar3 = (undefined4)(((BLMineSnatchHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar3)->reloadData(0, 1);
  BLMineSnatchHeroPresenter::updateData(0);
  return;
}

void BLMineSnatchHeroPresenter::updateSelecetData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLImmortalsInfoPresenter.h"
#include "BLImmortalsInfoItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRoleAttribute.h"
#include "BLTableView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsAttr.h"
#include "ImmortalsRoleData.h"
#include "ImmortalsRoleItemData.h"
#include "ItemData.h"
#include "PlayerData.h"
#include "UIManager.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056ae0c;
extern "C" unsigned long UNK_0056ae2c;
extern "C" unsigned long UNK_0056aeac;
extern "C" unsigned long UNK_0056af8c;
extern "C" unsigned long UNK_0056afb0;
extern "C" unsigned long UNK_0056b04e;
extern "C" unsigned long UNK_0056b072;
extern "C" unsigned long UNK_0056b0ba;
extern "C" unsigned long UNK_0056b0bc;
extern "C" unsigned long UNK_0056b0d4;
extern "C" unsigned long UNK_0056b0d6;
extern "C" unsigned long UNK_0056b1ac;
extern "C" unsigned long UNK_0056b1d8;
extern "C" unsigned long UNK_0056b232;
extern "C" unsigned long UNK_0056b25c;
extern "C" unsigned long UNK_0056b2a0;
extern "C" unsigned long UNK_0056b2a2;
extern "C" unsigned long UNK_0056b2cc;
extern "C" unsigned long UNK_0056b312;
extern "C" unsigned long UNK_0056b330;
extern "C" unsigned long UNK_0056b34e;
extern "C" unsigned long UNK_0056b382;
extern "C" unsigned long UNK_0056b430;
extern "C" unsigned long UNK_0056b440;
extern "C" unsigned long UNK_0056b45c;
extern "C" unsigned long UNK_0056b46c;
extern "C" unsigned long UNK_0056b488;
extern "C" unsigned long UNK_0056b498;
extern "C" unsigned long UNK_0056b4ce;
extern "C" unsigned long UNK_0056b536;
extern "C" unsigned long UNK_0056b786;
extern "C" unsigned long UNK_0056b788;
extern "C" unsigned long UNK_0056b806;
extern "C" unsigned long UNK_0056b826;
extern "C" unsigned long UNK_0056b93e;
extern "C" unsigned long UNK_0056b940;
extern "C" unsigned long UNK_0056b96e;
extern "C" unsigned long UNK_0056ba80;
extern "C" unsigned long UNK_0056ba90;
extern "C" unsigned long UNK_0056ba92;
extern "C" unsigned long UNK_0056baa6;
extern "C" unsigned long UNK_0056bb2e;
extern "C" unsigned long UNK_0056bb32;
extern "C" unsigned long UNK_0056bcd8;
extern "C" unsigned long UNK_0056bcf2;
extern "C" unsigned long _UNK_0056ae5c;
extern "C" unsigned long _UNK_0056ae60;
extern "C" unsigned long _UNK_0056aeb0;
extern "C" unsigned long _UNK_0056aec4;
extern "C" unsigned long _UNK_0056aec8;
extern "C" unsigned long _UNK_0056b020;
extern "C" unsigned long _UNK_0056b024;
extern "C" unsigned long _UNK_0056b028;
extern "C" unsigned long _UNK_0056b09c;
extern "C" unsigned long _UNK_0056b0a0;
extern "C" unsigned long _UNK_0056b0e4;
extern "C" unsigned long _UNK_0056b0e8;
extern "C" unsigned long _UNK_0056b0ec;
extern "C" unsigned long _UNK_0056b0f0;
extern "C" unsigned long _UNK_0056b4d8;
extern "C" unsigned long _UNK_0056b4dc;
extern "C" unsigned long _UNK_0056b4e0;
extern "C" unsigned long _UNK_0056b4e4;
extern "C" unsigned long _UNK_0056b4e8;
extern "C" unsigned long _UNK_0056b4ec;
extern "C" unsigned long _UNK_0056b4f0;
extern "C" unsigned long _UNK_0056b4f4;
extern "C" unsigned long _UNK_0056b4f8;
extern "C" unsigned long _UNK_0056b4fc;
extern "C" unsigned long _UNK_0056b500;
extern "C" unsigned long _UNK_0056b504;
extern "C" unsigned long _UNK_0056b508;
extern "C" unsigned long _UNK_0056b50c;
extern "C" unsigned long _UNK_0056b510;
extern "C" unsigned long _UNK_0056b514;
extern "C" unsigned long _UNK_0056b518;
extern "C" unsigned long _UNK_0056b51c;
extern "C" unsigned long _UNK_0056b520;
extern "C" unsigned long _UNK_0056b524;
extern "C" unsigned long _UNK_0056b528;
extern "C" unsigned long _UNK_0056b52c;
extern "C" unsigned long _UNK_0056b870;
extern "C" unsigned long _UNK_0056b874;
extern "C" unsigned long _UNK_0056b878;
extern "C" unsigned long _UNK_0056b87c;
extern "C" unsigned long _UNK_0056b880;
extern "C" unsigned long _UNK_0056b884;
extern "C" unsigned long _UNK_0056b888;
extern "C" unsigned long _UNK_0056b88c;
extern "C" unsigned long _UNK_0056b890;
extern "C" unsigned long _UNK_0056b894;
extern "C" unsigned long _UNK_0056b898;
extern "C" unsigned long _UNK_0056b954;
extern "C" unsigned long _UNK_0056b958;
extern "C" unsigned long _UNK_0056ba14;
extern "C" unsigned long _UNK_0056baf8;
extern "C" unsigned long _UNK_0056bafc;
extern "C" unsigned long _UNK_0056bb00;
extern "C" unsigned long _UNK_0056bb04;
extern "C" unsigned long _UNK_0056bd50;
extern "C" unsigned long _UNK_0056bd54;
extern "C" unsigned long _UNK_0056bd58;
extern "C" unsigned long _UNK_0056bd5c;
extern "C" unsigned long _UNK_0056bd60;
extern "C" unsigned long _UNK_0056bd64;
extern "C" unsigned long _UNK_0056bd68;
extern "C" unsigned long _UNK_0056bd6c;
extern "C" unsigned long _UNK_0056bd70;
extern "C" unsigned long _UNK_0056bd74;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0056ae0c;
extern "C" unsigned long g_0056ae2c;
extern "C" unsigned long g_0056ae5c;
extern "C" unsigned long g_0056ae60;
extern "C" unsigned long g_0056aeac;
extern "C" unsigned long g_0056aeb0;
extern "C" unsigned long g_0056aec4;
extern "C" unsigned long g_0056aec8;
extern "C" unsigned long g_0056af8c;
extern "C" unsigned long g_0056afb0;
extern "C" unsigned long g_0056b020;
extern "C" unsigned long g_0056b024;
extern "C" unsigned long g_0056b028;
extern "C" unsigned long g_0056b04e;
extern "C" unsigned long g_0056b072;
extern "C" unsigned long g_0056b09c;
extern "C" unsigned long g_0056b0a0;
extern "C" unsigned long g_0056b0ba;
extern "C" unsigned long g_0056b0bc;
extern "C" unsigned long g_0056b0d4;
extern "C" unsigned long g_0056b0d6;
extern "C" unsigned long g_0056b0e4;
extern "C" unsigned long g_0056b0e8;
extern "C" unsigned long g_0056b0ec;
extern "C" unsigned long g_0056b0f0;
extern "C" unsigned long g_0056b1ac;
extern "C" unsigned long g_0056b1d8;
extern "C" unsigned long g_0056b232;
extern "C" unsigned long g_0056b25c;
extern "C" unsigned long g_0056b2a0;
extern "C" unsigned long g_0056b2a2;
extern "C" unsigned long g_0056b2cc;
extern "C" unsigned long g_0056b312;
extern "C" unsigned long g_0056b330;
extern "C" unsigned long g_0056b34e;
extern "C" unsigned long g_0056b382;
extern "C" unsigned long g_0056b430;
extern "C" unsigned long g_0056b440;
extern "C" unsigned long g_0056b45c;
extern "C" unsigned long g_0056b46c;
extern "C" unsigned long g_0056b488;
extern "C" unsigned long g_0056b498;
extern "C" unsigned long g_0056b4ce;
extern "C" unsigned long g_0056b4d8;
extern "C" unsigned long g_0056b4dc;
extern "C" unsigned long g_0056b4e0;
extern "C" unsigned long g_0056b4e4;
extern "C" unsigned long g_0056b4e8;
extern "C" unsigned long g_0056b4ec;
extern "C" unsigned long g_0056b4f0;
extern "C" unsigned long g_0056b4f4;
extern "C" unsigned long g_0056b4f8;
extern "C" unsigned long g_0056b4fc;
extern "C" unsigned long g_0056b500;
extern "C" unsigned long g_0056b504;
extern "C" unsigned long g_0056b508;
extern "C" unsigned long g_0056b50c;
extern "C" unsigned long g_0056b510;
extern "C" unsigned long g_0056b514;
extern "C" unsigned long g_0056b518;
extern "C" unsigned long g_0056b51c;
extern "C" unsigned long g_0056b520;
extern "C" unsigned long g_0056b524;
extern "C" unsigned long g_0056b528;
extern "C" unsigned long g_0056b52c;
extern "C" unsigned long g_0056b536;
extern "C" unsigned long g_0056b786;
extern "C" unsigned long g_0056b788;
extern "C" unsigned long g_0056b806;
extern "C" unsigned long g_0056b826;
extern "C" unsigned long g_0056b870;
extern "C" unsigned long g_0056b874;
extern "C" unsigned long g_0056b878;
extern "C" unsigned long g_0056b87c;
extern "C" unsigned long g_0056b880;
extern "C" unsigned long g_0056b884;
extern "C" unsigned long g_0056b888;
extern "C" unsigned long g_0056b88c;
extern "C" unsigned long g_0056b890;
extern "C" unsigned long g_0056b894;
extern "C" unsigned long g_0056b898;
extern "C" unsigned long g_0056b93e;
extern "C" unsigned long g_0056b940;
extern "C" unsigned long g_0056b954;
extern "C" unsigned long g_0056b958;
extern "C" unsigned long g_0056b96e;
extern "C" unsigned long g_0056ba14;
extern "C" unsigned long g_0056ba80;
extern "C" unsigned long g_0056ba90;
extern "C" unsigned long g_0056ba92;
extern "C" unsigned long g_0056baa6;
extern "C" unsigned long g_0056baf8;
extern "C" unsigned long g_0056bafc;
extern "C" unsigned long g_0056bb00;
extern "C" unsigned long g_0056bb04;
extern "C" unsigned long g_0056bb2e;
extern "C" unsigned long g_0056bb32;
extern "C" unsigned long g_0056bcd8;
extern "C" unsigned long g_0056bcf2;
extern "C" unsigned long g_0056bd50;
extern "C" unsigned long g_0056bd54;
extern "C" unsigned long g_0056bd58;
extern "C" unsigned long g_0056bd5c;
extern "C" unsigned long g_0056bd60;
extern "C" unsigned long g_0056bd64;
extern "C" unsigned long g_0056bd68;
extern "C" unsigned long g_0056bd6c;
extern "C" unsigned long g_0056bd70;
extern "C" unsigned long g_0056bd74;
void BLImmortalsInfoPresenter::tick(float p1)
{
  return;
}

void BLImmortalsInfoPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLImmortalsInfoPresenter::~BLImmortalsInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056ae0c + g_0056ae5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056ae2c + g_0056ae60,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int BLImmortalsInfoPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(((int)this) + 0x20) != 0) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
    (**(code **)(*piVar1 + 0x180))();
    piVar1 = (int *)((ImmortalsRoleData *)this)->sortItems();
    iVar2 = piVar1[1] - *piVar1 >> 2;
  }
  return iVar2;
}

undefined4 BLImmortalsInfoPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


BLImmortalsInfoPresenter::BLImmortalsInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0056b04e + g_0056b09c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056b072 + g_0056b0a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLImmortalsInfoPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLImmortalsInfoPresenter::setPlayer(PlayerData* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  BLImmortalsInfoPresenter::resetUI();
  return;
}




void BLImmortalsInfoPresenter::onRefreshUI(cocos2d::CCObject* p1)
{
  BLImmortalsInfoPresenter::resetUI();
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x164))->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLImmortalsInfoPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsInfoPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsInfoPresenter::resetUI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsInfoPresenter::initWithViewRole(BLImmortalsInfoView* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsInfoPresenter::createWithRole(BLImmortalsInfoView* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLImmortalsInfoPresenter::onRoleSelect(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLImmortalsInfoPresenter::onEquipClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

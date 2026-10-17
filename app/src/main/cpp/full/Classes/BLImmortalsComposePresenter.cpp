#include "BLImmortalsComposePresenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCString.h"
#include "BLImmortalsComposeView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsAttr.h"
#include "ImmortalsInfoItemData.h"
#include "ItemData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00569418;
extern "C" unsigned long UNK_00569438;
extern "C" unsigned long UNK_005694a8;
extern "C" unsigned long UNK_00569584;
extern "C" unsigned long UNK_005695ae;
extern "C" unsigned long UNK_005695c4;
extern "C" unsigned long UNK_00569600;
extern "C" unsigned long UNK_00569676;
extern "C" unsigned long UNK_00569762;
extern "C" unsigned long UNK_00569786;
extern "C" unsigned long UNK_005698e0;
extern "C" unsigned long UNK_0056991a;
extern "C" unsigned long UNK_00569956;
extern "C" unsigned long UNK_0056995b;
extern "C" unsigned long UNK_00569974;
extern "C" unsigned long UNK_005699a2;
extern "C" unsigned long UNK_005699bc;
extern "C" unsigned long UNK_00569a0a;
extern "C" unsigned long UNK_00569a84;
extern "C" unsigned long UNK_00569b7a;
extern "C" unsigned long UNK_00569b96;
extern "C" unsigned long UNK_00569c66;
extern "C" unsigned long UNK_00569e1c;
extern "C" unsigned long UNK_00569e30;
extern "C" unsigned long UNK_00569e54;
extern "C" unsigned long UNK_00569e56;
extern "C" unsigned long UNK_00569f38;
extern "C" unsigned long UNK_00569fd0;
extern "C" unsigned long UNK_00569fea;
extern "C" unsigned long UNK_0056a13c;
extern "C" unsigned long _UNK_00569468;
extern "C" unsigned long _UNK_0056946c;
extern "C" unsigned long _UNK_005694ac;
extern "C" unsigned long _UNK_005694c0;
extern "C" unsigned long _UNK_005694c4;
extern "C" unsigned long _UNK_00569704;
extern "C" unsigned long _UNK_00569708;
extern "C" unsigned long _UNK_0056970c;
extern "C" unsigned long _UNK_00569710;
extern "C" unsigned long _UNK_00569714;
extern "C" unsigned long _UNK_00569718;
extern "C" unsigned long _UNK_0056971c;
extern "C" unsigned long _UNK_00569720;
extern "C" unsigned long _UNK_005697b0;
extern "C" unsigned long _UNK_005697b4;
extern "C" unsigned long _UNK_00569af0;
extern "C" unsigned long _UNK_00569af4;
extern "C" unsigned long _UNK_00569af8;
extern "C" unsigned long _UNK_00569afc;
extern "C" unsigned long _UNK_00569b00;
extern "C" unsigned long _UNK_00569b04;
extern "C" unsigned long _UNK_00569b08;
extern "C" unsigned long _UNK_00569b0c;
extern "C" unsigned long _UNK_00569b10;
extern "C" unsigned long _UNK_00569b14;
extern "C" unsigned long _UNK_00569b18;
extern "C" unsigned long _UNK_00569b1c;
extern "C" unsigned long _UNK_00569b20;
extern "C" unsigned long _UNK_00569bdc;
extern "C" unsigned long _UNK_00569be0;
extern "C" unsigned long _UNK_00569e38;
extern "C" unsigned long _UNK_00569e3c;
extern "C" unsigned long _UNK_00569e40;
extern "C" unsigned long _UNK_0056a188;
extern "C" unsigned long _UNK_0056a18c;
extern "C" unsigned long _UNK_0056a190;
extern "C" unsigned long _UNK_0056a194;
extern "C" unsigned long _UNK_0056a198;
extern "C" unsigned long _UNK_0056a19c;
extern "C" unsigned long _UNK_0056a1a0;
extern "C" unsigned long _UNK_0056a1a4;
extern "C" unsigned long _UNK_0056a1a8;
extern "C" unsigned long _UNK_0056a1ac;
extern "C" unsigned long _UNK_0056a1b0;
extern "C" unsigned long _UNK_0056a1b4;
extern "C" unsigned long _UNK_0056a1b8;
extern "C" unsigned long _UNK_0056a1bc;
extern "C" unsigned long _UNK_0056a1c0;
extern "C" unsigned long _UNK_0056a234;
extern "C" unsigned long _UNK_0056a238;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00569418;
extern "C" unsigned long g_00569438;
extern "C" unsigned long g_00569468;
extern "C" unsigned long g_0056946c;
extern "C" unsigned long g_005694a8;
extern "C" unsigned long g_005694ac;
extern "C" unsigned long g_005694c0;
extern "C" unsigned long g_005694c4;
extern "C" unsigned long g_00569584;
extern "C" unsigned long g_005695ae;
extern "C" unsigned long g_005695c4;
extern "C" unsigned long g_00569600;
extern "C" unsigned long g_00569676;
extern "C" unsigned long g_00569704;
extern "C" unsigned long g_00569708;
extern "C" unsigned long g_0056970c;
extern "C" unsigned long g_00569710;
extern "C" unsigned long g_00569714;
extern "C" unsigned long g_00569718;
extern "C" unsigned long g_0056971c;
extern "C" unsigned long g_00569720;
extern "C" unsigned long g_00569762;
extern "C" unsigned long g_00569786;
extern "C" unsigned long g_005697b0;
extern "C" unsigned long g_005697b4;
extern "C" unsigned long g_005698e0;
extern "C" unsigned long g_0056991a;
extern "C" unsigned long g_00569956;
extern "C" unsigned long g_0056995b;
extern "C" unsigned long g_00569974;
extern "C" unsigned long g_005699a2;
extern "C" unsigned long g_005699bc;
extern "C" unsigned long g_00569a0a;
extern "C" unsigned long g_00569a84;
extern "C" unsigned long g_00569af0;
extern "C" unsigned long g_00569af4;
extern "C" unsigned long g_00569af8;
extern "C" unsigned long g_00569afc;
extern "C" unsigned long g_00569b00;
extern "C" unsigned long g_00569b04;
extern "C" unsigned long g_00569b08;
extern "C" unsigned long g_00569b0c;
extern "C" unsigned long g_00569b10;
extern "C" unsigned long g_00569b14;
extern "C" unsigned long g_00569b18;
extern "C" unsigned long g_00569b1c;
extern "C" unsigned long g_00569b20;
extern "C" unsigned long g_00569b7a;
extern "C" unsigned long g_00569b96;
extern "C" unsigned long g_00569bdc;
extern "C" unsigned long g_00569be0;
extern "C" unsigned long g_00569c66;
extern "C" unsigned long g_00569e1c;
extern "C" unsigned long g_00569e30;
extern "C" unsigned long g_00569e38;
extern "C" unsigned long g_00569e3c;
extern "C" unsigned long g_00569e40;
extern "C" unsigned long g_00569e54;
extern "C" unsigned long g_00569e56;
extern "C" unsigned long g_00569f38;
extern "C" unsigned long g_00569fd0;
extern "C" unsigned long g_00569fea;
extern "C" unsigned long g_0056a13c;
extern "C" unsigned long g_0056a188;
extern "C" unsigned long g_0056a18c;
extern "C" unsigned long g_0056a190;
extern "C" unsigned long g_0056a194;
extern "C" unsigned long g_0056a198;
extern "C" unsigned long g_0056a19c;
extern "C" unsigned long g_0056a1a0;
extern "C" unsigned long g_0056a1a4;
extern "C" unsigned long g_0056a1a8;
extern "C" unsigned long g_0056a1ac;
extern "C" unsigned long g_0056a1b0;
extern "C" unsigned long g_0056a1b4;
extern "C" unsigned long g_0056a1b8;
extern "C" unsigned long g_0056a1bc;
extern "C" unsigned long g_0056a1c0;
extern "C" unsigned long g_0056a234;
extern "C" unsigned long g_0056a238;
void BLImmortalsComposePresenter::tick(float p1)
{
  return;
}

BLImmortalsComposePresenter::~BLImmortalsComposePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00569418 + g_00569468);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00569438 + g_0056946c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int BLImmortalsComposePresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0xf0))();
  return piVar1[1] - *piVar1 >> 2;
}

undefined4 BLImmortalsComposePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


BLImmortalsComposePresenter::BLImmortalsComposePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00569762 + g_005697b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00569786 + g_005697b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLImmortalsComposePresenter::onEnter()
{
  return;
}

void BLImmortalsComposePresenter::onExit()
{
  return;
}




void BLImmortalsComposePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  if (*(int *)(((int)this) + 0x20) != p3) {
    *(int *)(((int)this) + 0x20) = p3;
    BLImmortalsComposePresenter::resetUI();
    ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x10c))->reloadData(0, 1);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLImmortalsComposePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsComposePresenter::resetUI()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uStack_38;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xf0)))();
  puVar6 = *(undefined4 **)(*(int *)(((int)this) + 0x20) * 4 + *piVar1);
  piVar1 = (int *)((ItemData *)this)->create();
  ((ItemData *)(piVar1))->initWith(*puVar6);
  piVar9 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  pcVar7 = *(code **)(*piVar9 + 0x30c);
  (**(code **)(*(int *)(piVar1) + (0x58)))(auStack_1c,piVar1);
  uVar2 = (undefined4)(0 /* ctorZero */);
  (*pcVar7)(piVar9,uVar2,1);
  func_0079e2bc(auStack_1c);
  uStack_38 = (undefined4)(0);
  do {
    if (uStack_38 < (uint)((int)(puVar6[3] - puVar6[2]) >> 2)) {
      puVar10 = *(undefined4 **)(puVar6[2] + uStack_38 * 4);
      piVar1 = (int *)((ItemData *)this)->create();
      ((ItemData *)(piVar1))->initWith(*puVar10);
      piVar9 = *(int **)((uStack_38 + 0x46) * 4 + *(int *)(((int)this) + 0x1c));
      pcVar7 = *(code **)(*piVar9 + 0x30c);
      (**(code **)(*(int *)(piVar1) + (0x58)))(auStack_1c,piVar1);
      uVar2 = (undefined4)(0 /* ctorZero */);
      (*pcVar7)(piVar9,uVar2,1);
      func_0079e2bc(auStack_1c);
      if (**(int **)(puVar6[2] + uStack_38 * 4) < 100) {
        piVar1 = (int *)((DataManager *)this)->shareDataManager();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
        ((UserData *)(uVar2))->getVirNumber(1);
        iVar3 = (undefined4)(intptr_t)(func_0079e8c4());
      }
      else {
        uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
        iVar3 = (undefined4)((void)(((DataManager *)(uVar2))->getBackPackItemNum(*puVar10)),(intptr_t)0);
      }
      piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + (uStack_38 + 0x48) * 4 + 4);
      pcVar7 = *(code **)(*piVar1 + 0x234);
      0 /* ctorZero */;
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005698e0 + (intptr_t)(g_00569b00)), auStack_1c[0]);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar7)(piVar1,uVar2);
      func_0079e2bc(auStack_1c);
      piVar1 = *(int **)((uStack_38 + 0x4c) * 4 + *(int *)(((int)this) + 0x1c));
      pcVar7 = *(code **)(*piVar1 + 0x234);
      0 /* ctorZero */;
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0056991a + (intptr_t)(g_00569b04)), auStack_1c[0]);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar7)(piVar1,uVar2);
      func_0079e2bc(auStack_1c);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + (uStack_38 + 0x48) * 4 + 4);
      pcVar7 = *(code **)(*piVar1 + 0x1b4);
      if (iVar3 < (int)puVar10[1]) {
        puVar5 = (unsigned char *)((char *)&g_0056995b + (intptr_t)(g_00569b0c));
      }
      else {
        puVar5 = (unsigned char *)((char *)&g_00569956 + (intptr_t)(g_00569b08));
      }
    }
    else {
      piVar1 = *(int **)((uStack_38 + 0x46) * 4 + *(int *)(((int)this) + 0x1c));
      pcVar7 = *(code **)(*piVar1 + 0x30c);
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00569974 + (intptr_t)(g_00569b10)),auStack_20);
      uVar2 = (undefined4)(0 /* ctorZero */);
      (*pcVar7)(piVar1,uVar2,1);
      func_0079e2bc(auStack_1c);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + (uStack_38 + 0x48) * 4 + 4);
      (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,(unsigned char *)((char *)&g_005699a2 + (intptr_t)(g_00569b14)));
      piVar1 = *(int **)((uStack_38 + 0x4c) * 4 + *(int *)(((int)this) + 0x1c));
      puVar5 = (unsigned char *)((char *)&g_005699bc + (intptr_t)(g_00569b18));
      pcVar7 = *(code **)(*piVar1 + 0x234);
    }
    (*pcVar7)(piVar1,puVar5);
    uStack_38 = (undefined4)(uStack_38 + 1);
  } while (uStack_38 != 3);
  iVar3 = 0;
  do {
    uVar2 = (undefined4)(((ImmortalsInfoItemData *)(puVar6))->getAttr(0));
    uVar4 = (undefined4)(((ImmortalsInfoItemData *)(puVar6))->getRefineLimit(0));
    iVar8 = (undefined4)(intptr_t)(g_00569b20);
    if (iVar3 == 3) {
      piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x148);
      pcVar7 = *(code **)(*piVar1 + 0x234);
      ((ImmortalsAttr *)(uVar2))->getAttrByType(3);
      uVar11 = (undefined4)(intptr_t)(func_0079e734());
      uVar11 = func_0079e63c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_00569af0,
                               g_00569af4);
      uVar11 = func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_00569af8,
                               g_00569afc);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)&g_00569a84 + iVar8, uVar2, (int)uVar11, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar7)(piVar1,uVar2);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x158);
      pcVar7 = *(code **)(*piVar1 + 0x234);
      ((ImmortalsAttr *)(uVar4))->getAttrByType(3);
      uVar11 = (undefined4)(intptr_t)(func_0079e734());
      uVar11 = func_0079e63c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_00569af0,
                               g_00569af4);
      uVar11 = func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_00569af8,
                               g_00569afc);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)&g_00569a84 + iVar8, uVar2, (int)uVar11, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar7)(piVar1,uVar2);
      return;
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + (iVar3 + 0x4e) * 4 + 4);
    pcVar7 = *(code **)(*piVar1 + 0x234);
    uVar2 = (undefined4)(((ImmortalsAttr *)(uVar2))->getAttrByType(iVar3));
    puVar5 = (unsigned char *)((char *)&g_00569a0a + (intptr_t)(g_00569b1c));
    cocos2d::CCString::createWithFormat((char const*)puVar5, uVar2);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar7)(piVar1,uVar2);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + (iVar3 + 0x52) * 4 + 4);
    iVar8 = (undefined4)(intptr_t)(iVar3 + 1);
    pcVar7 = *(code **)(*piVar1 + 0x234);
    uVar2 = (undefined4)(((ImmortalsAttr *)(uVar4))->getAttrByType(iVar3));
    cocos2d::CCString::createWithFormat((char const*)puVar5, uVar2);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar7)(piVar1,uVar2);
    iVar3 = (undefined4)(intptr_t)(iVar8);
  } while (iVar8 != 4);
  return;
}

void BLImmortalsComposePresenter::initWithView(BLImmortalsComposeView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x21c))(*(int **)(p1 + 0x10c),((int)this) + 0x14);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x10c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x18);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x10c))->reloadData(0, 1);
  iVar2 = 0;
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00569b7a + (intptr_t)(g_00569bdc))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00569b96 + (intptr_t)(g_00569be0))));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar3,0,0x20);
  do {
    piVar1 = *(int **)((iVar2 + 0x46) * 4 + *(int *)(((int)this) + 0x1c));
    iVar2 = (undefined4)(intptr_t)(iVar2 + 1);
    (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar3,0,0x20);
  } while (iVar2 != 3);
  BLImmortalsComposePresenter::resetUI();
  return;
}

int * BLImmortalsComposePresenter::create(BLImmortalsComposeView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x24);
  ::new ((void *)piVar1) BLImmortalsComposePresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLImmortalsComposePresenter *)(piVar1))->initWithView((BLImmortalsComposeView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}

void BLImmortalsComposePresenter::onComposeClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsComposePresenter::onItemClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

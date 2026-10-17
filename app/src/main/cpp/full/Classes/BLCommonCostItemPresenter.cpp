#include "BLCommonCostItemPresenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCActionInterval.h"
#include "ItemData.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "CCString.h"
#include "BLCommonCostItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLSuitItemDataInfoPresenter.h"
#include "BLSuitItemDataInfoView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006086b0;
extern "C" unsigned long UNK_006086c4;
extern "C" unsigned long UNK_0060871c;
extern "C" unsigned long UNK_00608a26;
extern "C" unsigned long UNK_00608a3e;
extern "C" unsigned long UNK_00608ab6;
extern "C" unsigned long UNK_00608ae4;
extern "C" unsigned long UNK_00608b34;
extern "C" unsigned long UNK_00608bd2;
extern "C" unsigned long UNK_00608bfe;
extern "C" unsigned long UNK_00608c0c;
extern "C" unsigned long UNK_00608c0e;
extern "C" unsigned long UNK_00608c2c;
extern "C" unsigned long UNK_00608e3a;
extern "C" unsigned long UNK_00608ee6;
extern "C" unsigned long UNK_00608f1c;
extern "C" unsigned long UNK_00608f40;
extern "C" unsigned long UNK_00608f5c;
extern "C" unsigned long UNK_00608f82;
extern "C" unsigned long _UNK_006086f4;
extern "C" unsigned long _UNK_006086f8;
extern "C" unsigned long _UNK_006089f4;
extern "C" unsigned long _UNK_006089f8;
extern "C" unsigned long _UNK_006089fc;
extern "C" unsigned long _UNK_00608a00;
extern "C" unsigned long _UNK_00608a04;
extern "C" unsigned long _UNK_00608a08;
extern "C" unsigned long _UNK_00608a0c;
extern "C" unsigned long _UNK_00608a10;
extern "C" unsigned long _UNK_00608a14;
extern "C" unsigned long _UNK_00608a68;
extern "C" unsigned long _UNK_00608a6c;
extern "C" unsigned long _UNK_00608ac0;
extern "C" unsigned long _UNK_00608b80;
extern "C" unsigned long _UNK_00608b84;
extern "C" unsigned long _UNK_00608b88;
extern "C" unsigned long _UNK_00608d14;
extern "C" unsigned long _UNK_00608d18;
extern "C" unsigned long _UNK_00608d1c;
extern "C" unsigned long _UNK_00608d20;
extern "C" unsigned long _UNK_00608d24;
extern "C" unsigned long _UNK_00608d28;
extern "C" unsigned long _UNK_00608e28;
extern "C" unsigned long _UNK_00609028;
extern "C" unsigned long _UNK_0060902c;
extern "C" unsigned long _UNK_00609030;
extern "C" unsigned long _UNK_00609034;
extern "C" unsigned long _UNK_00609038;
extern "C" unsigned long _UNK_0060903c;
extern "C" unsigned long _UNK_00609040;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_006086b0;
extern "C" unsigned long g_006086c4;
extern "C" unsigned long g_006086f4;
extern "C" unsigned long g_006086f8;
extern "C" unsigned long g_0060871c;
extern "C" unsigned long g_006089f4;
extern "C" unsigned long g_006089f8;
extern "C" unsigned long g_006089fc;
extern "C" unsigned long g_00608a00;
extern "C" unsigned long g_00608a04;
extern "C" unsigned long g_00608a08;
extern "C" unsigned long g_00608a0c;
extern "C" unsigned long g_00608a10;
extern "C" unsigned long g_00608a14;
extern "C" unsigned long g_00608a26;
extern "C" unsigned long g_00608a3e;
extern "C" unsigned long g_00608a68;
extern "C" unsigned long g_00608a6c;
extern "C" unsigned long g_00608ab6;
extern "C" unsigned long g_00608ac0;
extern "C" unsigned long g_00608ae4;
extern "C" unsigned long g_00608b34;
extern "C" unsigned long g_00608b80;
extern "C" unsigned long g_00608b84;
extern "C" unsigned long g_00608b88;
extern "C" unsigned long g_00608bd2;
extern "C" unsigned long g_00608bfe;
extern "C" unsigned long g_00608c0c;
extern "C" unsigned long g_00608c0e;
extern "C" unsigned long g_00608c2c;
extern "C" unsigned long g_00608d14;
extern "C" unsigned long g_00608d18;
extern "C" unsigned long g_00608d1c;
extern "C" unsigned long g_00608d20;
extern "C" unsigned long g_00608d24;
extern "C" unsigned long g_00608d28;
extern "C" unsigned long g_00608e28;
extern "C" unsigned long g_00608e3a;
extern "C" unsigned long g_00608ee6;
extern "C" unsigned long g_00608f1c;
extern "C" unsigned long g_00608f40;
extern "C" unsigned long g_00608f5c;
extern "C" unsigned long g_00608f82;
extern "C" unsigned long g_00609028;
extern "C" unsigned long g_0060902c;
extern "C" unsigned long g_00609030;
extern "C" unsigned long g_00609034;
extern "C" unsigned long g_00609038;
extern "C" unsigned long g_0060903c;
extern "C" unsigned long g_00609040;
BLCommonCostItemPresenter::~BLCommonCostItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006086c4 + g_006086f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLCommonCostItemPresenter::BLCommonCostItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00608a3e + g_00608a6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCommonCostItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLCommonCostItemPresenter::onEnter()
{
  return;
}

void BLCommonCostItemPresenter::onExit()
{
  return;
}

void BLCommonCostItemPresenter::updateItemNum(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined4 auStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  if ((uint)(*(int *)(((int)this) + 0x18) + g_00608b80) < 3) {
    cocos2d::CCString::createWithFormat((char const*)&g_00608ae4 + g_00608b84);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e45c(auStack_d4,uVar1,auStack_d8);
    piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
    (**(code **)(*piVar2 + 0x234))(piVar2,auStack_d4[0]);
    puVar3 = auStack_d4;
  }
  else {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
    pcVar4 = *(code **)(*piVar2 + 0x234);
    func_0079e43c(auStack_d4,0x18);
    func_0079e44c(auStack_cc,p1);
    puVar3 = &uStack_dc;
    func_0079e45c(auStack_d8,&g_00608b34 + g_00608b88,puVar3);
    func_0079e46c(puVar3,auStack_c8);
    func_0079e2bc(auStack_d8);
    func_0079e47c(auStack_d4);
    (*pcVar4)(piVar2,uStack_dc);
  }
  func_0079e2bc(puVar3);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLCommonCostItemPresenter::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  iVar11 = (undefined4)(intptr_t)(g_006089f4);
  uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar4 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(*(undefined4 *)(((int)this) + 0x18)),(int *)0);
  if (piVar4 == 0) {
    return;
  }
  piVar5 = (int *)((DataManager *)this)->shareDataManager();
  piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x50)))());
  piVar5 = (int *)((BackPackData *)(uVar3))->getItemData((ItemData*)piVar4);
  bVar2 = (undefined4)(intptr_t)(true);
  if (piVar5 == 0) {
    piVar5 = (int *)::operator new(0x30);
    ::new ((void *)piVar5) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar6 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar5))->init());
    if (iVar6 == 0) {
      (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
      goto code_r0x006089ee;
    }
    ((cocos2d::CCObject *)(piVar5))->autorelease();
    (**(code **)(*(int *)(piVar5) + (0x24)))(piVar5,*(undefined4 *)(((int)this) + 0x18));
    (**(code **)(*(int *)(piVar5) + (0x2c)))(piVar5,1);
    bVar2 = (undefined4)(intptr_t)(false);
  }
  iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x30)))(piVar4));
  uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_006089f8)) + iVar11));
  if (iVar6 == 8) {
    uVar8 = (undefined4)(((UIManager *)this)->shareManager());
    iVar6 = (undefined4)((void)(((UIManager *)(uVar8))->getUIObject(0x1f)),(intptr_t)0);
    if (iVar6 != 0) {
      uVar8 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar8))->removeUIByID(0x1f);
    }
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar4) + (0xb0)))());
    uVar8 = (undefined4)(((SuitEquipEquipData *)(uVar8))->getItemById(*(undefined4 *)(((int)this) + 0x18)));
    ((SuitEquipEquipItemData *)(uVar8))->updateAttr(0);
    uVar9 = (undefined4)(((UIManager *)this)->shareManager());
    iVar6 = (undefined4)((void)(((UIManager *)(uVar9))->getUIObject(0x20)),(intptr_t)0);
    uVar9 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_006089fc)) + iVar11));
    if ((iVar6 == 0) || (piVar4 = (int *)func_0079e55c(iVar6,uVar3,uVar9,0), piVar4 == 0)
       ) {
      uVar7 = (undefined4)(((UIManager *)this)->shareManager());
      iVar6 = (undefined4)(intptr_t)(((UIManager *)(uVar7))->showUIById(0x20));
      if (iVar6 == 0) goto code_r0x006089ee;
      piVar4 = (int *)func_0079e55c(iVar6,uVar3,uVar9,0);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))());
      piVar10 = (int *)(**(code **)(*(int *)(piVar4) + (0x20)))(piVar4);
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x50)))());
      0 /* ctorZero */;
      piVar10 = (int *)(**(code **)(*(int *)piVar4[9] + 0x8c))();
      uVar9 = (undefined4)(func_0079e4fc(*piVar10 + -0x80000000,0x3f000000));
      uVar9 = (undefined4)(func_0079e57c(uVar9,g_00608a00));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)auStack_28);
      uVar9 = (undefined4)(cocos2d::CCMoveTo::create(g_00608a04, *(const CCPoint *)(void *)auStack_20));
      ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar9);
    }
    if ((piVar4[9] == 0) ||
       (iVar11 = func_0079e55c(piVar4[9],*(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_00608a08)) + iVar11),
                                 *(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_00608a0c)) + iVar11),0),
       iVar11 == 0)) goto code_r0x006089d2;
    uVar3 = (undefined4)(((BLSuitItemDataInfoView *)this)->getPresenter());
    ((BLSuitItemDataInfoPresenter *)(uVar3))->initPackItemData((SuitEquipEquipItemData*)uVar8, (BackPackItemData*)piVar5);
    piVar4 = (int *)((BLSuitItemDataInfoView *)(iVar11))->OtherItemInfoDown();
  }
  else {
    uVar8 = (undefined4)(((UIManager *)this)->shareManager());
    iVar6 = (undefined4)((void)(((UIManager *)(uVar8))->getUIObject(0x20)),(intptr_t)0);
    if (iVar6 != 0) {
      uVar8 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar8))->removeUIByID(0x20);
    }
    uVar8 = (undefined4)(((UIManager *)this)->shareManager());
    iVar6 = (undefined4)((void)(((UIManager *)(uVar8))->getUIObject(0x1f)),(intptr_t)0);
    uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_00608a10)) + iVar11));
    if ((iVar6 == 0) || (piVar4 = (int *)func_0079e55c(iVar6,uVar3,uVar8,0), piVar4 == 0)
       ) {
      uVar9 = (undefined4)(((UIManager *)this)->shareManager());
      iVar6 = (undefined4)(intptr_t)(((UIManager *)(uVar9))->showUIById(0x1f));
      if (iVar6 == 0) {
code_r0x006089ee:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x6089ee);
        (*pcVar1)();
      }
      piVar4 = (int *)func_0079e55c(iVar6,uVar3,uVar8,0);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))());
      piVar10 = (int *)(**(code **)(*(int *)(piVar4) + (0x20)))(piVar4);
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x50)))());
      0 /* ctorZero */;
      piVar10 = (int *)(**(code **)(*(int *)piVar4[9] + 0x8c))();
      uVar8 = (undefined4)(func_0079e4fc(*piVar10 + -0x80000000,0x3f000000));
      uVar8 = (undefined4)(func_0079e57c(uVar8,g_00608a00));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)auStack_28);
      uVar8 = (undefined4)(cocos2d::CCMoveTo::create(g_00608a04, *(const CCPoint *)(void *)auStack_20));
      ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar8);
    }
    if ((piVar4[9] == 0) ||
       (iVar11 = func_0079e55c(piVar4[9],*(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_00608a08)) + iVar11),
                                 *(undefined4 *)((unsigned char *)((char *)&g_0060871c + (intptr_t)(g_00608a14)) + iVar11),0),
       iVar11 == 0)) goto code_r0x006089d2;
    uVar3 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
    ((BLItemDataInfoPresenter *)(uVar3))->initPackItemData((BackPackItemData*)piVar5);
    piVar4 = (int *)((BLItemDataInfoView *)(iVar11))->OtherItemInfoDown();
    (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
    piVar4 = (int *)((BLItemDataInfoView *)(iVar11))->DebrisItemInfoDown();
    (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
    piVar4 = (int *)((BLItemDataInfoView *)(iVar11))->ItemInfoDown();
  }
  (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
code_r0x006089d2:
  if (!bVar2) {
    ((cocos2d::CCObject *)(piVar5))->release();
  }
  return;
}

void BLCommonCostItemPresenter::initWithView(BLCommonCostItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00608ab6 + (intptr_t)(g_00608ac0))),0,
             0x20);
  return;
}

void BLCommonCostItemPresenter::createNumText(int p1, int p2)
{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar3 = (undefined4)(cocos2d::CCArray::create());
  auStack_30[4] = 0xa1;
  auStack_30[0] = 0;
  auStack_30[1] = 0xff;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0x1b;
  auStack_30[6] = 0;
  auStack_30[7] = 0;
  auStack_30[8] = 0;
  if (p2 < p1) {
    auStack_30[0] = 0xff;
    auStack_30[1] = 0;
  }
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00608bd2 + (intptr_t)(g_00608d14)),auStack_34);
  0 /* ctorZero */;
  iVar8 = 0;
  do {
    piVar4 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    iVar7 = (undefined4)(intptr_t)(g_00608d1c);
    *piVar4 = *(int *)((unsigned char *)((char *)&g_00608bfe + (intptr_t)(g_00608d18))) + 8;
    iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00608c0e + (intptr_t)(g_00608d20))));
    piVar4[6] = iVar6 + 0xc;
    piVar4[7] = iVar6 + 0xc;
    piVar4[5] = 1;
    func_0079e2dc(piVar4 + 6,&g_00608c0c + iVar7);
    func_0079e2dc(piVar4 + 7,(unsigned char *)((char *)&g_00608c2c + (intptr_t)(g_00608d24)));
    piVar4[10] = 0x14;
    piVar4[8] = 0;
    *(undefined1 *)(piVar4 + 9) = 0xff;
    *(undefined1 *)((int)piVar4 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar4 + 0x26) = 0xff;
    piVar4[0xb] = 0x3f800000;
    piVar4[0xd] = 0;
    piVar4[0xc] = 0;
    *(undefined1 *)(piVar4 + 0xe) = 0;
    *(undefined1 *)((int)piVar4 + 0x39) = 0;
    ((cocos2d::CCObject *)piVar4)->autorelease();
    piVar4[5] = 1;
    func_0079e52c(piVar4 + 6,auStack_24 + iVar8 * 4);
    iVar7 = (undefined4)(intptr_t)(iVar8 * 3);
    uVar1 = (undefined4)(intptr_t)(auStack_30[iVar7 + 1]);
    uVar2 = (undefined4)(intptr_t)(auStack_30[iVar7 + 2]);
    *(undefined1 *)(piVar4 + 9) = auStack_30[iVar7];
    *(undefined1 *)((int)piVar4 + 0x25) = uVar1;
    *(undefined1 *)((int)piVar4 + 0x26) = uVar2;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00608d28),(int)(uVar5)))));
    iVar7 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00608d28),(int)(uVar5)))))))));
    piVar4[10] = iVar7;
    ((cocos2d::CCArray *)uVar3)->addObject((cocos2d::CCObject*)piVar4);
    iVar8 = (undefined4)(intptr_t)(iVar8 + 1);
  } while (iVar8 != 3);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  return;
}

void BLCommonCostItemPresenter::updateNum(int p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x14) + 0xd4))(*(int **)(((int)this) + 0x14),100));
  if (iVar1 != 0) {
    (**(code **)(**(int **)(((int)this) + 0x14) + 0xfc))(*(int **)(((int)this) + 0x14),100,1);
  }
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  uVar2 = ((void)(((DataManager *)(uVar2))->getBackPackItemNum(*(undefined4 *)(((int)this) + 0x18))),(undefined4)0);
  uVar2 = ((void)(((BLCommonCostItemPresenter *)(((int)this)))->createNumText(p1, uVar2)),(undefined4)0);
  0 /* ctorZero */;
  uVar3 = (undefined4)(func_0079e5fc(auStack_20[0]));
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  func_0079e4dc(0x41800000,uVar4);
  uVar4 = (undefined4)(func_0079e5fc());
  piVar5 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)uVar2, uVar3, uVar4),(int *)0);
  (**(code **)(*(int *)(piVar5) + (0x11c)))(piVar5,100);
  pcVar6 = *(code **)(*piVar5 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar5,auStack_20);
  pcVar6 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  uVar2 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,0x40000000));
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar3));
  0 /* ctorZero */;
  (*pcVar6)(piVar5,auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),piVar5);
  return;
}

void BLCommonCostItemPresenter::updateWithId(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

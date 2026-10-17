#include "BLSuitUpGraceItemPresenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCActionInterval.h"
#include "ItemData.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLSuitUpGraceItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
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

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006906f8;
extern "C" unsigned long UNK_0069070c;
extern "C" unsigned long UNK_006909ce;
extern "C" unsigned long UNK_006909e0;
extern "C" unsigned long UNK_00690a66;
extern "C" unsigned long UNK_00690aae;
extern "C" unsigned long UNK_00690ab0;
extern "C" unsigned long UNK_00690ad4;
extern "C" unsigned long UNK_00690ae4;
extern "C" unsigned long UNK_00690b58;
extern "C" unsigned long UNK_00690e4a;
extern "C" unsigned long UNK_00690e5a;
extern "C" unsigned long UNK_0069162e;
extern "C" unsigned long UNK_00691650;
extern "C" unsigned long UNK_0069168a;
extern "C" unsigned long UNK_0069168c;
extern "C" unsigned long UNK_006917e0;
extern "C" unsigned long UNK_006917f8;
extern "C" unsigned long _UNK_0069073c;
extern "C" unsigned long _UNK_00690740;
extern "C" unsigned long _UNK_00690a18;
extern "C" unsigned long _UNK_00690a1c;
extern "C" unsigned long _UNK_00690a70;
extern "C" unsigned long _UNK_00690b1c;
extern "C" unsigned long _UNK_00690b20;
extern "C" unsigned long _UNK_00690b24;
extern "C" unsigned long _UNK_00690b28;
extern "C" unsigned long _UNK_00690b2c;
extern "C" unsigned long _UNK_00690df8;
extern "C" unsigned long _UNK_00690dfc;
extern "C" unsigned long _UNK_00690e00;
extern "C" unsigned long _UNK_00690e04;
extern "C" unsigned long _UNK_00690e08;
extern "C" unsigned long _UNK_00690e0c;
extern "C" unsigned long _UNK_00690e10;
extern "C" unsigned long _UNK_00690e14;
extern "C" unsigned long _UNK_00690e18;
extern "C" unsigned long _UNK_00690e88;
extern "C" unsigned long _UNK_00690e8c;
extern "C" unsigned long _UNK_00691854;
extern "C" unsigned long _UNK_00691858;
extern "C" unsigned long _UNK_0069185c;
extern "C" unsigned long _UNK_00691860;
extern "C" unsigned long _UNK_00691864;
extern "C" unsigned long _UNK_00691868;
extern "C" unsigned long _UNK_0069186c;
extern "C" unsigned long g_006906f8;
extern "C" unsigned long g_0069070c;
extern "C" unsigned long g_0069073c;
extern "C" unsigned long g_00690740;
extern "C" unsigned long g_006909ce;
extern "C" unsigned long g_006909e0;
extern "C" unsigned long g_00690a18;
extern "C" unsigned long g_00690a1c;
extern "C" unsigned long g_00690a66;
extern "C" unsigned long g_00690a70;
extern "C" unsigned long g_00690aae;
extern "C" unsigned long g_00690ab0;
extern "C" unsigned long g_00690ad4;
extern "C" unsigned long g_00690ae4;
extern "C" unsigned long g_00690b1c;
extern "C" unsigned long g_00690b20;
extern "C" unsigned long g_00690b24;
extern "C" unsigned long g_00690b28;
extern "C" unsigned long g_00690b2c;
extern "C" unsigned long g_00690b58;
extern "C" unsigned long g_00690df8;
extern "C" unsigned long g_00690dfc;
extern "C" unsigned long g_00690e00;
extern "C" unsigned long g_00690e04;
extern "C" unsigned long g_00690e08;
extern "C" unsigned long g_00690e0c;
extern "C" unsigned long g_00690e10;
extern "C" unsigned long g_00690e14;
extern "C" unsigned long g_00690e18;
extern "C" unsigned long g_00690e4a;
extern "C" unsigned long g_00690e5a;
extern "C" unsigned long g_00690e88;
extern "C" unsigned long g_00690e8c;
extern "C" unsigned long g_0069162e;
extern "C" unsigned long g_00691650;
extern "C" unsigned long g_0069168a;
extern "C" unsigned long g_0069168c;
extern "C" unsigned long g_006917e0;
extern "C" unsigned long g_006917f8;
extern "C" unsigned long g_00691854;
extern "C" unsigned long g_00691858;
extern "C" unsigned long g_0069185c;
extern "C" unsigned long g_00691860;
extern "C" unsigned long g_00691864;
extern "C" unsigned long g_00691868;
extern "C" unsigned long g_0069186c;
bool BLSuitUpGraceItemPresenter::getClickable() const
{
  return *(undefined1 *)(((int)this) + 0x1c);
}

void BLSuitUpGraceItemPresenter::setClickable(bool p1)
{
  *(undefined1 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLSuitUpGraceItemPresenter::getType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLSuitUpGraceItemPresenter::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BLSuitUpGraceItemPresenter::getPart() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLSuitUpGraceItemPresenter::setPart(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int BLSuitUpGraceItemPresenter::getLv() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLSuitUpGraceItemPresenter::setLv(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

BLSuitUpGraceItemPresenter::~BLSuitUpGraceItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069070c + g_00690740,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceItemPresenter::BLSuitUpGraceItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006909e0 + g_00690a1c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(undefined1 *)(((int)this) + 7) = 1;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  return;
}

undefined4 BLSuitUpGraceItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLSuitUpGraceItemPresenter::onEnter()
{
  return;
}

void BLSuitUpGraceItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLSuitUpGraceItemPresenter::initWithView(BLSuitUpGraceItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00690a66 + (intptr_t)(g_00690a70))),0,
             0x20);
  return;
}

void BLSuitUpGraceItemPresenter::initWithPartId(SuitEquipPartType * p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int *piStack_14;
  
  piStack_14 = p1;
  (**(code **)(**(int **)(((int)this) + 0x14) + 0xfc))(*(int **)(((int)this) + 0x14),2,1);
  0 /* ctorZero */;
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x14) + 0xd4))(*(int **)(((int)this) + 0x14),1);
  piVar4 = piStack_14;
  if ((iVar1 == 0) ||
     (piVar2 = (int *)func_0079e55c(iVar1,*(undefined4 *)(&g_00690aae + g_00690b1c),
                                      *(undefined4 *)(&g_00690ab0 + g_00690b20),0),
     piVar2 == 0)) {
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00690b24),(int)(uVar3)))));
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)piVar4, (char const*)&g_00690ad4 + g_00690b28, uVar3);
    (**(code **)(*piVar4 + 0x1b4))(piVar4,&g_00690ae4 + g_00690b2c);
    (**(code **)(*piVar4 + 0x11c))(piVar4,1);
    piVar2 = *(int **)(((int)this) + 0x14);
    pcVar5 = *(code **)(*piVar2 + 200);
  }
  else {
    pcVar5 = *(code **)(*piVar2 + 0x234);
  }
  (*pcVar5)(piVar2,piVar4);
  func_0079e2bc(&piStack_14);
  return;
}

void BLSuitUpGraceItemPresenter::showInfo()
{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(*(undefined4 *)(((int)this) + 0x18)),(int *)0);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar10 = (undefined4)(intptr_t)(g_00690df8);
  piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
  piVar4 = (int *)((BackPackData *)(uVar2))->getItemData((ItemData*)piVar3);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
  uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690dfc)) + iVar10));
  if (iVar5 == 8) {
    piVar3 = (int *)((BackPackItemData *)this)->create();
    (**(code **)(*(int *)(piVar3) + (0x24)))(piVar3,*(undefined4 *)(((int)this) + 0x18));
    (**(code **)(*(int *)(piVar3) + (0x2c)))(piVar3,1);
    (**(code **)(*(int *)(piVar3) + (0x34)))(piVar3,*(undefined4 *)(((int)this) + 0x28));
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x1f)),(intptr_t)0);
    if (iVar5 != 0) {
      uVar7 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar7))->removeUIByID(0x1f);
    }
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar4) + (0xb0)))());
    uVar7 = (undefined4)(((SuitEquipEquipData *)(uVar7))->getItemById(*(undefined4 *)(((int)this) + 0x18)));
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
    ((SuitEquipEquipItemData *)(uVar7))->updateAttr(uVar8);
    uVar8 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar8))->getUIObject(0x20)),(intptr_t)0);
    uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e00)) + iVar10));
    if ((iVar5 == 0) || (piVar4 = (int *)func_0079e55c(iVar5,uVar2,uVar8,0), piVar4 == 0)
       ) {
      uVar6 = (undefined4)(((UIManager *)this)->shareManager());
      iVar5 = (undefined4)(intptr_t)(((UIManager *)(uVar6))->showUIById(0x20));
      if (iVar5 == 0) goto code_r0x00690dee;
      piVar4 = (int *)func_0079e55c(iVar5,uVar2,uVar8,0);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))());
      piVar9 = (int *)(**(code **)(*(int *)(piVar4) + (0x20)))(piVar4);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x50)))());
      0 /* ctorZero */;
      piVar9 = (int *)(**(code **)(*(int *)piVar4[9] + 0x8c))();
      uVar8 = (undefined4)(func_0079e4fc(*piVar9 + -0x80000000,0x3f000000));
      uVar8 = (undefined4)(func_0079e57c(uVar8,g_00690e04));
      puVar11 = auStack_28;
      0 /* ctorZero */;
      puVar12 = auStack_20;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)puVar11);
      uVar8 = (undefined4)(cocos2d::CCMoveTo::create(g_00690e08, *(const CCPoint *)(void *)puVar12));
      ((cocos2d::CCNode *)(uVar2))->runAction((cocos2d::CCAction*)uVar8);
    }
    if (piVar4[9] == 0) {
      return;
    }
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e0c)) + iVar10));
    uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e10)) + iVar10));
    iVar10 = (undefined4)(intptr_t)(func_0079e55c(piVar4[9],uVar2,uVar8,0,uVar2,uVar7,uVar8));
    if (iVar10 == 0) {
      return;
    }
    uVar2 = (undefined4)(((BLSuitItemDataInfoView *)this)->getPresenter());
    ((BLSuitItemDataInfoPresenter *)(uVar2))->initPackItemData((SuitEquipEquipItemData*)uVar7, (BackPackItemData*)piVar3);
    piVar3 = (int *)((BLSuitItemDataInfoView *)(iVar10))->OtherItemInfoDown();
  }
  else {
    if (piVar4 == 0) {
      piVar4 = (int *)((BackPackItemData *)this)->create();
      (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,*(undefined4 *)(((int)this) + 0x18));
      (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,1);
    }
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x20)),(intptr_t)0);
    if (iVar5 != 0) {
      uVar7 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar7))->removeUIByID(0x20);
    }
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x1f)),(intptr_t)0);
    uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e14)) + iVar10));
    if ((iVar5 == 0) || (piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar7,0), piVar3 == 0)
       ) {
      uVar8 = (undefined4)(((UIManager *)this)->shareManager());
      iVar5 = (undefined4)(intptr_t)(((UIManager *)(uVar8))->showUIById(0x1f));
      if (iVar5 == 0) {
code_r0x00690dee:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x690df0);
        (*pcVar1)();
      }
      piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar7,0);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))());
      piVar9 = (int *)(**(code **)(*(int *)(piVar3) + (0x20)))(piVar3);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x50)))());
      0 /* ctorZero */;
      piVar9 = (int *)(**(code **)(*(int *)piVar3[9] + 0x8c))();
      uVar7 = (undefined4)(func_0079e4fc(*piVar9 + -0x80000000,0x3f000000));
      uVar7 = (undefined4)(func_0079e57c(uVar7,g_00690e04));
      puVar11 = auStack_28;
      0 /* ctorZero */;
      puVar12 = auStack_20;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)puVar11);
      uVar7 = (undefined4)(cocos2d::CCMoveTo::create(g_00690e08, *(const CCPoint *)(void *)puVar12));
      ((cocos2d::CCNode *)(uVar2))->runAction((cocos2d::CCAction*)uVar7);
    }
    if (piVar3[9] == 0) {
      return;
    }
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e0c)) + iVar10));
    uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690b58 + (intptr_t)(g_00690e18)) + iVar10));
    iVar10 = (undefined4)(intptr_t)(func_0079e55c(piVar3[9],uVar2,uVar7,0,uVar2,uVar7));
    if (iVar10 == 0) {
      return;
    }
    uVar2 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
    ((BLItemDataInfoPresenter *)(uVar2))->initPackItemData((BackPackItemData*)piVar4);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar10))->OtherItemInfoDown();
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar10))->DebrisItemInfoDown();
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar10))->ItemInfoDown();
  }
  (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
  return;
}

void BLSuitUpGraceItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(((int)this) + 0x1c) != '\0') {
    if (*(int *)(((int)this) + 0x20) == 0) {
      uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x24));
      piVar2 = (int *)func_0079e2fc(0x18);
      0 /* ctorZero */;
      iVar3 = (undefined4)(intptr_t)(g_00690e88);
      piVar2[5] = iVar4;
      *piVar2 = *(int *)(&g_00690e4a + iVar3) + 8;
      ((cocos2d::CCObject *)(piVar2))->autorelease();
      ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_00690e5a + (intptr_t)(g_00690e8c)), (cocos2d::CCObject*)piVar2);
    }
    else if (*(int *)(((int)this) + 0x20) - 1U < 2) {
      uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar3 = (undefined4)((void)(((DataCacheManager *)(uVar1))->getItemDataByID(*(undefined4 *)(((int)this) + 0x18))),(intptr_t)0);
      if (iVar3 != 0) {
        ((BLSuitUpGraceItemPresenter *)(((int)this)))->showInfo();
      }
    }
  }
  return;
}

void BLSuitUpGraceItemPresenter::initWithId(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  *(int *)(((int)this) + 0x18) = p1;
  func_0079e45c(&uStack_54,(unsigned char *)((char *)&g_0069162e + (intptr_t)(g_00691854)),aiStack_20);
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  if ((p1 == -1) || (piVar2 == 0)) {
    func_0079e2dc(&uStack_54,(unsigned char *)((char *)&g_00691650 + (intptr_t)(g_00691858)));
  }
  else {
    (**(code **)(*(int *)(piVar2) + (0x58)))(auStack_50,piVar2);
    func_0079e52c(&uStack_54,auStack_50);
    func_0079e2bc(auStack_50);
  }
  iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x14) + 0xd4))(*(int **)(((int)this) + 0x14),2));
  if ((iVar3 == 0) ||
     (piVar2 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0069168a + (intptr_t)(g_0069185c))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0069168c + (intptr_t)(g_00691860))),0),
     piVar2 == 0)) {
    func_0079e45c(auStack_4c,uStack_54,aiStack_20);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_4c);
    (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,2);
    (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar2,2);
  }
  else {
    pcVar6 = *(code **)(*piVar2 + 0x22c);
    func_0079e45c(auStack_48,uStack_54,aiStack_20);
    piVar4 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
    (*pcVar6)(piVar2,uVar1);
    func_0079e2bc(auStack_48);
  }
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_38,piVar2);
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(func_0079e4ec(auStack_38[0],aiStack_20[0]));
  if (iVar3 != 0) {
    (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_30,piVar2);
    0 /* ctorZero */;
    iVar3 = (undefined4)(intptr_t)(func_0079e4ec(uStack_2c,uStack_24));
    if (iVar3 != 0) {
      0 /* ctorZero */;
      goto code_r0x00691782;
    }
  }
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_40,piVar2);
code_r0x00691782:
  pcVar6 = *(code **)(*piVar2 + 0x1d4);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(aiStack_20,piVar2);
  (*pcVar6)(piVar2,aiStack_20);
  if (*(int *)(((int)this) + 0x20) != 2) {
    iVar3 = (undefined4)(intptr_t)((*(int *)(((int)this) + 0x28) >> 0x1f) - *(int *)(((int)this) + 0x28));
    iVar5 = (undefined4)(intptr_t)(-(iVar3 >> 0x1f));
    piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,iVar5);
    piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,iVar5);
    if (iVar3 < 0) {
      ConvertToString<int>(&iStack_44, *(undefined4 *)(((int)this) + 0x28), 0);
      aiStack_20[0] = *(int *)((unsigned char *)((char *)&g_006917e0 + (intptr_t)(g_00691868))) + 0xc;
      func_0079e934(aiStack_20,*(int *)(iStack_44 + -0xc) + 1);
      func_0079e944(aiStack_20,(unsigned char *)((char *)&g_006917f8 + (intptr_t)(g_0069186c)),1);
      func_0079e5dc(aiStack_20,&iStack_44);
      func_0079e2bc(&iStack_44);
      piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
      (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,aiStack_20[0]);
      func_0079e2bc(aiStack_20);
    }
  }
  func_0079e2bc(&uStack_54);
  return;
}

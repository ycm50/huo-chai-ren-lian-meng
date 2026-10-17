#include "BLSuitUpgraceCostPresenter.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLSuitUpgraceCostView.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLSuitUpGraceItemPresenter.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipUpGraceData.h"
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
extern "C" long long software_udf(...);

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00690858;
extern "C" unsigned long UNK_0069086c;
extern "C" unsigned long UNK_00691196;
extern "C" unsigned long UNK_006911b2;
extern "C" unsigned long UNK_0069122a;
extern "C" unsigned long UNK_0069136c;
extern "C" unsigned long UNK_0069137c;
extern "C" unsigned long UNK_00691394;
extern "C" unsigned long UNK_00691476;
extern "C" unsigned long UNK_00691488;
extern "C" unsigned long UNK_00691494;
extern "C" unsigned long UNK_006914a0;
extern "C" unsigned long UNK_006914aa;
extern "C" unsigned long UNK_006914b6;
extern "C" unsigned long UNK_006918b8;
extern "C" unsigned long UNK_006918e6;
extern "C" unsigned long UNK_006918f4;
extern "C" unsigned long UNK_006918f6;
extern "C" unsigned long UNK_00691914;
extern "C" unsigned long UNK_006923da;
extern "C" unsigned long _UNK_0069089c;
extern "C" unsigned long _UNK_006908a0;
extern "C" unsigned long _UNK_006911dc;
extern "C" unsigned long _UNK_006911e0;
extern "C" unsigned long _UNK_00691234;
extern "C" unsigned long _UNK_006914ec;
extern "C" unsigned long _UNK_006914f0;
extern "C" unsigned long _UNK_006914f4;
extern "C" unsigned long _UNK_006914f8;
extern "C" unsigned long _UNK_006914fc;
extern "C" unsigned long _UNK_00691500;
extern "C" unsigned long _UNK_00691504;
extern "C" unsigned long _UNK_00691508;
extern "C" unsigned long _UNK_0069150c;
extern "C" unsigned long _UNK_00691510;
extern "C" unsigned long _UNK_006919fc;
extern "C" unsigned long _UNK_00691a00;
extern "C" unsigned long _UNK_00691a04;
extern "C" unsigned long _UNK_00691a08;
extern "C" unsigned long _UNK_00691a0c;
extern "C" unsigned long _UNK_00691a10;
extern "C" unsigned long _UNK_00692460;
extern "C" unsigned long _UNK_00692464;
extern "C" unsigned long _UNK_00692468;
extern "C" unsigned long _UNK_0069246c;
extern "C" unsigned long _UNK_00692470;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00690858;
extern "C" unsigned long g_0069086c;
extern "C" unsigned long g_0069089c;
extern "C" unsigned long g_006908a0;
extern "C" unsigned long g_00691196;
extern "C" unsigned long g_006911b2;
extern "C" unsigned long g_006911dc;
extern "C" unsigned long g_006911e0;
extern "C" unsigned long g_0069122a;
extern "C" unsigned long g_00691234;
extern "C" unsigned long g_0069136c;
extern "C" unsigned long g_0069137c;
extern "C" unsigned long g_00691394;
extern "C" unsigned long g_00691476;
extern "C" unsigned long g_00691488;
extern "C" unsigned long g_00691494;
extern "C" unsigned long g_006914a0;
extern "C" unsigned long g_006914aa;
extern "C" unsigned long g_006914b6;
extern "C" unsigned long g_006914ec;
extern "C" unsigned long g_006914f0;
extern "C" unsigned long g_006914f4;
extern "C" unsigned long g_006914f8;
extern "C" unsigned long g_006914fc;
extern "C" unsigned long g_00691500;
extern "C" unsigned long g_00691504;
extern "C" unsigned long g_00691508;
extern "C" unsigned long g_0069150c;
extern "C" unsigned long g_00691510;
extern "C" unsigned long g_006918b8;
extern "C" unsigned long g_006918e6;
extern "C" unsigned long g_006918f4;
extern "C" unsigned long g_006918f6;
extern "C" unsigned long g_00691914;
extern "C" unsigned long g_006919fc;
extern "C" unsigned long g_00691a00;
extern "C" unsigned long g_00691a04;
extern "C" unsigned long g_00691a08;
extern "C" unsigned long g_00691a0c;
extern "C" unsigned long g_00691a10;
extern "C" unsigned long g_006923da;
extern "C" unsigned long g_00692460;
extern "C" unsigned long g_00692464;
extern "C" unsigned long g_00692468;
extern "C" unsigned long g_0069246c;
extern "C" unsigned long g_00692470;
void BLSuitUpgraceCostPresenter::onResetClick()
{
  *(undefined1 *)(((int)this) + 0x1a) = 1;
  return;
}

BLSuitUpgraceCostPresenter::~BLSuitUpgraceCostPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069086c + g_006908a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpgraceCostPresenter::BLSuitUpgraceCostPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(7)) = 0;
  *(undefined1 *)(((int)this) + 6) = 0;
  *(undefined1 *)((int)((int)this) + 0x1a) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006911b2 + g_006911e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitUpgraceCostPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLSuitUpgraceCostPresenter::onEnter()
{
  return;
}

void BLSuitUpgraceCostPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLSuitUpgraceCostPresenter::initWithView(BLSuitUpgraceCostView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x128) + 0x254))
            (*(int **)(p1 + 0x128),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0069122a + (intptr_t)(g_00691234))),0,
             0x20);
  return;
}

void BLSuitUpgraceCostPresenter::removeItem(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar1 = ((void)(((DataCacheManager *)(uVar1))->getItemDataByID(p1)),(undefined4)0);
  piVar2 = (int *)::operator new(0x7c);
  ::new ((void *)piVar2) ItemData();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? ItemData */
  iVar3 = (undefined4)(intptr_t)(((ItemData *)(piVar2))->init());
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)(piVar2))->autorelease();
    ((ItemData *)(piVar2))->initWith((ItemData*)uVar1);
    (**(code **)(*(int *)(piVar2) + (0x9c)))(piVar2,p2);
    piVar4 = (int *)((DataManager *)this)->shareDataManager();
    piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
    piVar2 = (int *)((BackPackData *)(uVar1))->getItemDataForCost((ItemData*)piVar2);
    piVar4 = (int *)((BackPackItemData *)this)->create();
    pcVar5 = *(code **)(*piVar4 + 0x1c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    (*pcVar5)(piVar4,uVar1);
    (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,p1);
    (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,p2);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
    ((BackPackData *)(uVar1))->removeItem((BackPackItemData*)piVar4);
    return;
  }
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
  ((ItemData *)(0))->initWith((ItemData*)uVar1);
                    /* WARNING: Does not return */
  pcVar5 = (code *)software_udf(0xff,0x6912f6);
  (*pcVar5)();
}

void BLSuitUpgraceCostPresenter::onUpGrace(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitUpgraceCostPresenter::initNumData(int p1, int p2)
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
  auStack_30[0] = 0;
  auStack_30[1] = 0xff;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[4] = 0;
  auStack_30[5] = 0;
  auStack_30[6] = 0;
  auStack_30[7] = 0;
  auStack_30[8] = 0;
  if (p1 < p2) {
    auStack_30[0] = 0xff;
    auStack_30[1] = 0;
    *(undefined1 *)(((int)this) + 0x18) = 0;
  }
  ConvertToString<int>(auStack_24, p1, 0);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006918b8 + (intptr_t)(g_006919fc)),auStack_34);
  ConvertToString<int>(auStack_1c, p2, 0);
  iVar8 = 0;
  do {
    piVar4 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    iVar7 = (undefined4)(intptr_t)(g_00691a04);
    *piVar4 = *(int *)((unsigned char *)((char *)&g_006918e6 + (intptr_t)(g_00691a00))) + 8;
    iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006918f6 + (intptr_t)(g_00691a08))));
    piVar4[6] = iVar6 + 0xc;
    piVar4[7] = iVar6 + 0xc;
    piVar4[5] = 1;
    func_0079e2dc(piVar4 + 6,&g_006918f4 + iVar7);
    func_0079e2dc(piVar4 + 7,(unsigned char *)((char *)&g_00691914 + (intptr_t)(g_00691a0c)));
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
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00691a10),(int)(uVar5)))));
    iVar7 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00691a10),(int)(uVar5)))))))));
    piVar4[10] = iVar7;
    ((cocos2d::CCArray *)uVar3)->addObject((cocos2d::CCObject*)piVar4);
    iVar8 = (undefined4)(intptr_t)(iVar8 + 1);
  } while (iVar8 != 3);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  return uVar3;
}

void BLSuitUpgraceCostPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitUpgraceCostPresenter::updateValue()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

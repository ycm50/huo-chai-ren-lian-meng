#include "BLFurnaceItemInSlot.h"
#include "CCGeometry.h"
#include "CCDictionary.h"
#include "CCNode.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCString.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" unsigned long UNK_00534f8e;
extern "C" unsigned long UNK_0053500c;
extern "C" unsigned long UNK_0053500e;
extern "C" unsigned long UNK_00535026;
extern "C" unsigned long UNK_00535036;
extern "C" unsigned long UNK_00535096;
extern "C" unsigned long UNK_005350b8;
extern "C" unsigned long UNK_005350e6;
extern "C" unsigned long UNK_005350fb;
extern "C" unsigned long UNK_005351d8;
extern "C" unsigned long UNK_00535240;
extern "C" unsigned long UNK_0053529e;
extern "C" unsigned long UNK_005352a2;
extern "C" unsigned long UNK_005352b6;
extern "C" unsigned long UNK_005352ba;
extern "C" unsigned long UNK_005352d4;
extern "C" unsigned long UNK_005352e0;
extern "C" unsigned long UNK_00535314;
extern "C" unsigned long UNK_00535318;
extern "C" unsigned long UNK_0053540c;
extern "C" unsigned long UNK_0053542e;
extern "C" unsigned long UNK_00535430;
extern "C" unsigned long UNK_00535452;
extern "C" unsigned long UNK_00535455;
extern "C" unsigned long UNK_005354be;
extern "C" unsigned long UNK_0053550c;
extern "C" unsigned long UNK_0053550e;
extern "C" unsigned long UNK_00535530;
extern "C" unsigned long UNK_00535533;
extern "C" unsigned long _UNK_00534f9c;
extern "C" unsigned long _UNK_00535184;
extern "C" unsigned long _UNK_00535188;
extern "C" unsigned long _UNK_0053518c;
extern "C" unsigned long _UNK_00535190;
extern "C" unsigned long _UNK_00535194;
extern "C" unsigned long _UNK_00535198;
extern "C" unsigned long _UNK_0053519c;
extern "C" unsigned long _UNK_005351a0;
extern "C" unsigned long _UNK_005351a4;
extern "C" unsigned long _UNK_005351a8;
extern "C" unsigned long _UNK_005351ac;
extern "C" unsigned long _UNK_005351b0;
extern "C" unsigned long _UNK_0053520c;
extern "C" unsigned long _UNK_00535250;
extern "C" unsigned long _UNK_00535590;
extern "C" unsigned long _UNK_00535594;
extern "C" unsigned long _UNK_00535598;
extern "C" unsigned long _UNK_0053559c;
extern "C" unsigned long _UNK_005355a0;
extern "C" unsigned long _UNK_005355a4;
extern "C" unsigned long _UNK_005355a8;
extern "C" unsigned long _UNK_005355ac;
extern "C" unsigned long _UNK_005355b0;
extern "C" unsigned long _UNK_005355b4;
extern "C" unsigned long _UNK_005355b8;
extern "C" unsigned long _UNK_005355bc;
extern "C" unsigned long _UNK_005355c0;
extern "C" unsigned long _UNK_005355c4;
extern "C" unsigned long _UNK_005355c8;
extern "C" unsigned long _UNK_005355cc;
extern "C" unsigned long _UNK_005355d0;
extern "C" unsigned long _UNK_005355d8;
extern "C" unsigned long _UNK_005355dc;
extern "C" unsigned long _UNK_005355e0;
extern "C" unsigned long g_00534f8e;
extern "C" unsigned long g_00534f9c;
extern "C" unsigned long g_0053500c;
extern "C" unsigned long g_0053500e;
extern "C" unsigned long g_00535026;
extern "C" unsigned long g_00535036;
extern "C" unsigned long g_00535096;
extern "C" unsigned long g_005350b8;
extern "C" unsigned long g_005350e6;
extern "C" unsigned long g_005350fb;
extern "C" unsigned long g_00535184;
extern "C" unsigned long g_00535188;
extern "C" unsigned long g_0053518c;
extern "C" unsigned long g_00535190;
extern "C" unsigned long g_00535194;
extern "C" unsigned long g_00535198;
extern "C" unsigned long g_0053519c;
extern "C" unsigned long g_005351a0;
extern "C" unsigned long g_005351a4;
extern "C" unsigned long g_005351a8;
extern "C" unsigned long g_005351ac;
extern "C" unsigned long g_005351b0;
extern "C" unsigned long g_005351d8;
extern "C" unsigned long g_0053520c;
extern "C" unsigned long g_00535240;
extern "C" unsigned long g_00535250;
extern "C" unsigned long g_0053529e;
extern "C" unsigned long g_005352a2;
extern "C" unsigned long g_005352b6;
extern "C" unsigned long g_005352ba;
extern "C" unsigned long g_005352d4;
extern "C" unsigned long g_005352e0;
extern "C" unsigned long g_00535314;
extern "C" unsigned long g_00535318;
extern "C" unsigned long g_0053540c;
extern "C" unsigned long g_0053542e;
extern "C" unsigned long g_00535430;
extern "C" unsigned long g_00535452;
extern "C" unsigned long g_00535455;
extern "C" unsigned long g_005354be;
extern "C" unsigned long g_0053550c;
extern "C" unsigned long g_0053550e;
extern "C" unsigned long g_00535530;
extern "C" unsigned long g_00535533;
extern "C" unsigned long g_00535590;
extern "C" unsigned long g_00535594;
extern "C" unsigned long g_00535598;
extern "C" unsigned long g_0053559c;
extern "C" unsigned long g_005355a0;
extern "C" unsigned long g_005355a4;
extern "C" unsigned long g_005355a8;
extern "C" unsigned long g_005355ac;
extern "C" unsigned long g_005355b0;
extern "C" unsigned long g_005355b4;
extern "C" unsigned long g_005355b8;
extern "C" unsigned long g_005355bc;
extern "C" unsigned long g_005355c0;
extern "C" unsigned long g_005355c4;
extern "C" unsigned long g_005355c8;
extern "C" unsigned long g_005355cc;
extern "C" unsigned long g_005355d0;
extern "C" unsigned long g_005355d8;
extern "C" unsigned long g_005355dc;
extern "C" unsigned long g_005355e0;
BackPackItemData* BLFurnaceItemInSlot::getPackItem() const
{
  return (BackPackItemData*)(*(undefined4 *)(((int)this) + 0xe4));
}

void BLFurnaceItemInSlot::setPackItem(BackPackItemData* p1)
{
  *(undefined4 *)(((int)this) + 0xe4) = (undefined4)(intptr_t)p1;
  return;
}

undefined4 BLFurnaceItemInSlot::getTableIndex() const
{
  return *(undefined4 *)(((int)this) + 0xe8);
}

BLFurnaceItemInSlot::~BLFurnaceItemInSlot()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



void BLFurnaceItemInSlot::setCount(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(((int)this) + 0xec);
  (**(code **)(*piVar1 + 0x90))(piVar1,1 < p1);
  *(int *)(((int)this) + 0xf0) = p1;
  piVar1 = *(int **)(((int)this) + 0xec);
  pcVar3 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_00535240 + g_00535250, p1);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar1,uVar2);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLFurnaceItemInSlot::initWithData(BackPackItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLFurnaceItemInSlot::create(BackPackItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLFurnaceItemInSlot::showStar()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if ((char)*(int *)((int)this + 4*(0x3d)) == '\0') {
    *(char *)(((int)this) + 0x3d) = '\x01';
    piVar1 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x39)) + 0x20))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(uVar3));
    if (iVar4 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0053529e + (intptr_t)(g_005355a0))));
      piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_005352a2 + (intptr_t)(g_005355a4))),0);
      iVar4 = (undefined4)(intptr_t)(g_005355a8);
      if (piVar1 != (int *)0x0) {
        if (((*(uint *)((unsigned char *)((char *)&g_005352b6 + (intptr_t)(g_005355a8))) & 1) == 0) &&
           (iVar5 = func_0079e33c((unsigned char *)((char *)&g_005352b6 + (intptr_t)(g_005355a8))), iVar5 != 0)) {
          0 /* ctorZero */;
          func_0079e38c((unsigned char *)((char *)&g_005352d4 + (intptr_t)(g_005355b0)));
        }
        func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005352e0 + (intptr_t)(g_005355b4)),auStack_28);
        piVar6 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_20);
        pcVar11 = *(code **)(*piVar6 + 0x7c);
        0 /* ctorZero */;
        (*pcVar11)(piVar6,auStack_20);
        iVar4 = (undefined4)(intptr_t)(g_005355b8);
        pcVar11 = *(code **)(*piVar6 + 0x4c);
        uVar12 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)((unsigned char *)((char *)&g_00535314 + (intptr_t)(g_005355b8)))));
        uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535590,
                                 g_00535594);
        func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535598,g_0053559c);
        uVar3 = (undefined4)(func_0079e7e4());
        uVar12 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(&g_00535318 + iVar4)));
        uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535590,
                                 g_00535594);
        func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535598,g_0053559c);
        uVar7 = (undefined4)(func_0079e7e4());
        0 /* ctorZero */;
        cocos2d::CCDirector::sharedDirector();
        uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
        uVar3 = (undefined4)(func_0079e4dc(auStack_30[0],uVar3));
        puVar13 = auStack_28;
        uVar12 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(&g_00535314 + iVar4)));
        uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535590,
                                 g_00535594);
        func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535598,g_0053559c);
        uVar7 = (undefined4)(func_0079e7e4());
        uVar12 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(&g_00535318 + iVar4)));
        uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535590,
                                 g_00535594);
        func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00535598,g_0053559c);
        uVar8 = (undefined4)(func_0079e7e4());
        0 /* ctorZero */;
        uVar8 = (undefined4)(*(undefined4 *)(puVar13 + 4));
        cocos2d::CCDirector::sharedDirector();
        uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
        uVar7 = (undefined4)(func_0079e4dc(uVar8,uVar7));
        0 /* ctorZero */;
        (*pcVar11)(piVar6,auStack_20);
        (**(code **)(*(int *)this + 0xcc))(((int)this),piVar6,0xb);
        piVar9 = (int *)((DataCacheManager *)this)->shareManager();
        uVar3 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(uVar7));
        if (iVar4 == 0) {
          cocos2d::CCDirector::sharedDirector();
          uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
          uVar2 = (undefined4)(func_0079e4dc(g_005355c0,uVar2));
          piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053550e + (intptr_t)(g_005355dc)), (char const*)(unsigned char *)((char *)&g_0053550c + (intptr_t)(g_005355d8)), uVar2);
          pcVar11 = *(code **)(*piVar1 + 0x7c);
          0 /* ctorZero */;
          (*pcVar11)(piVar1,auStack_20);
          iVar4 = (undefined4)(intptr_t)(g_005355e0);
          ((cocos2d::CCLabelTTF *)(piVar1))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00535530 + (intptr_t)(g_005355e0)), 0x3f800000, 1);
          (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&g_00535533 + iVar4);
          pcVar11 = *(code **)(*piVar1 + 0x4c);
          uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
          puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6);
          uVar3 = (undefined4)(func_0079e59c(*puVar10,0x40000000));
          0 /* ctorZero */;
          ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)puVar13);
          (*pcVar11)(piVar1,auStack_20);
                    /* WARNING: Does not return */
          pcVar11 = (code *)software_udf(0xff,0x535586);
          (*pcVar11)();
        }
        piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0053540c + (intptr_t)(g_005355bc))),0
                                        ,puVar13,((int)this),iVar4);
        cocos2d::CCDirector::sharedDirector();
        uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
        uVar2 = (undefined4)(func_0079e4dc(g_005355c0,uVar2));
        piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00535430 + (intptr_t)(g_005355c8)), (char const*)(unsigned char *)((char *)&g_0053542e + (intptr_t)(g_005355c4)), uVar2);
        pcVar11 = *(code **)(*piVar9 + 0x7c);
        0 /* ctorZero */;
        (*pcVar11)(piVar9,auStack_20);
        iVar4 = (undefined4)(intptr_t)(g_005355cc);
        ((cocos2d::CCLabelTTF *)(piVar9))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00535452 + (intptr_t)(g_005355cc)), 0x3f800000, 1);
        (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,&g_00535455 + iVar4);
        pcVar11 = *(code **)(*piVar9 + 0x4c);
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
        puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6);
        uVar3 = (undefined4)(func_0079e59c(*puVar10,0x40000000));
        0 /* ctorZero */;
        ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)puVar13);
        (*pcVar11)(piVar9,auStack_20);
        pcVar11 = *(code **)(*piVar9 + 0x234);
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))(piVar1));
        cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005354be + (intptr_t)(g_005355d0)), uVar2);
        uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        (*pcVar11)(piVar9,uVar2);
        pcVar11 = *(code **)(*(int *)this + 0xcc);
        (*pcVar11)(((int)this),piVar9,2,pcVar11,*(int *)this);
      }
    }
  }
  return;
}

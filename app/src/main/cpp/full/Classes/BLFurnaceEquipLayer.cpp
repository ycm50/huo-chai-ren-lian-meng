#include "BLFurnaceEquipLayer.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLGridView.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" unsigned long UNK_00533040;
extern "C" unsigned long UNK_0053307c;
extern "C" unsigned long UNK_005330a4;
extern "C" unsigned long UNK_005330d0;
extern "C" unsigned long UNK_0053318c;
extern "C" unsigned long UNK_005331c2;
extern "C" unsigned long UNK_00533208;
extern "C" unsigned long UNK_0053320a;
extern "C" unsigned long UNK_00533238;
extern "C" unsigned long UNK_005333a2;
extern "C" unsigned long _UNK_0053306c;
extern "C" unsigned long _UNK_00533080;
extern "C" unsigned long _UNK_005330a8;
extern "C" unsigned long _UNK_00533124;
extern "C" unsigned long _UNK_005334e0;
extern "C" unsigned long _UNK_005334e4;
extern "C" unsigned long _UNK_005334e8;
extern "C" unsigned long _UNK_005334ec;
extern "C" unsigned long _UNK_005334f0;
extern "C" unsigned long _UNK_005334f4;
extern "C" unsigned long _UNK_005334f8;
extern "C" unsigned long _UNK_005334fc;
extern "C" unsigned long _UNK_00533500;
extern "C" unsigned long _UNK_00533504;
extern "C" unsigned long _UNK_00533508;
extern "C" unsigned long _UNK_0053350c;
extern "C" unsigned long _UNK_00533510;
extern "C" unsigned long _UNK_00533514;
extern "C" unsigned long _UNK_00533518;
extern "C" unsigned long _UNK_0053351c;
extern "C" unsigned long _UNK_00533520;
extern "C" unsigned long g_00533040;
extern "C" unsigned long g_0053306c;
extern "C" unsigned long g_0053307c;
extern "C" unsigned long g_00533080;
extern "C" unsigned long g_005330a4;
extern "C" unsigned long g_005330a8;
extern "C" unsigned long g_005330d0;
extern "C" unsigned long g_00533124;
extern "C" unsigned long g_0053318c;
extern "C" unsigned long g_005331c2;
extern "C" unsigned long g_00533208;
extern "C" unsigned long g_0053320a;
extern "C" unsigned long g_00533238;
extern "C" unsigned long g_005333a2;
extern "C" unsigned long g_005334e0;
extern "C" unsigned long g_005334e4;
extern "C" unsigned long g_005334e8;
extern "C" unsigned long g_005334ec;
extern "C" unsigned long g_005334f0;
extern "C" unsigned long g_005334f4;
extern "C" unsigned long g_005334f8;
extern "C" unsigned long g_005334fc;
extern "C" unsigned long g_00533500;
extern "C" unsigned long g_00533504;
extern "C" unsigned long g_00533508;
extern "C" unsigned long g_0053350c;
extern "C" unsigned long g_00533510;
extern "C" unsigned long g_00533514;
extern "C" unsigned long g_00533518;
extern "C" unsigned long g_0053351c;
extern "C" unsigned long g_00533520;
BLFurnaceEquipLayer::~BLFurnaceEquipLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00533040 + g_0053306c);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLFurnaceEquipLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x114))));
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005330d0 + g_00533124);
  *piVar1 = iVar2 + 8;
  piVar1[0x39] = iVar2 + 0x208;
  piVar1[0x3a] = iVar2 + 0x238;
  piVar1[0x3b] = iVar2 + 0x244;
  iVar2 = ((BLFurnaceEquipLayer *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLFurnaceEquipLayer::updateScroll(cocos2d::CCSize const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLFurnaceEquipLayer::init()
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0053318c + (intptr_t)(g_005334f0)),auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar10 = *(code **)(*piVar2 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar10)(piVar2,auStack_20);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005331c2 + (intptr_t)(g_005334fc)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar10 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar10)(piVar3,auStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_00533504,uVar4));
    piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053320a + (intptr_t)(g_0053350c)), (char const*)(unsigned char *)((char *)&g_00533208 + (intptr_t)(g_00533508)), uVar4);
    pcVar10 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar10)(piVar5,auStack_20);
    (**(code **)(*(int *)(piVar5) + (0x1b4)))(piVar5,(unsigned char *)((char *)&g_00533238 + (intptr_t)(g_00533510)));
    pcVar10 = *(code **)(*piVar5 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar7));
    0 /* ctorZero */;
    (*pcVar10)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar5);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    (**(code **)(*(int *)this + 200))(((int)this),piVar3);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar8 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00533518));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar8 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00533518));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar7));
    0 /* ctorZero */;
    (*pcVar10)(piVar3,auStack_20);
    0 /* ctorZero */;
    iVar8 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create(*(cocos2d::CCSize *)(void *)&auStack_20, 0));
    *(int *)((int)this + 4*(0x44)) = iVar8;
    uVar4 = (undefined4)(cocos2d::CCNode::create());
    ((cocos2d::extension::CCScrollView *)(iVar8))->setContainer((cocos2d::CCNode*)uVar4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x7c))((int *)*(int *)((int)this + 4*(0x44)),(unsigned char *)((char *)&g_005333a2 + (intptr_t)(g_00533520)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1fc))((int *)*(int *)((int)this + 4*(0x44)),1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar3 + 0x4c);
    puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar4 = (undefined4)(func_0079e4fc(*puVar9,0xbf000000));
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar11 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar8 + 4)));
    uVar11 = func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_005334e0,
                             g_005334e4);
    func_0079e744((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_005334e8,g_005334ec);
    uVar6 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(auStack_30[0],uVar4));
    puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar6 = (undefined4)(func_0079e4fc(*puVar9,0xbf000000));
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar11 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar8 + 4)));
    uVar11 = func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_005334e0,
                             g_005334e4);
    func_0079e744((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_005334e8,g_005334ec);
    uVar7 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uStack_24,uVar6));
    0 /* ctorZero */;
    (*pcVar10)(piVar3,auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar2 + 0x88);
    0 /* ctorZero */;
    (*pcVar10)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    piVar2 = (int *)func_0079e2fc(300);
    0 /* ctorZero */;
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar8 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar2))->autorelease();
    }
    *(int *)((int)this + 4*(0x43)) = (int)piVar2;
    uVar4 = (undefined4)(cocos2d::CCNode::create());
    ((BLGridView *)(piVar2))->setItemPartner((cocos2d::CCNode*)uVar4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 200))((int *)*(int *)((int)this + 4*(0x44)),*(int *)((int)this + 4*(0x43)));
  }
  return iVar1;
}

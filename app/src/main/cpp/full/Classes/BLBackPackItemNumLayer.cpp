#include "BLBackPackItemNumLayer.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCLabelTTF.h"
#include "BLPageControl.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" unsigned long UNK_004f53b8;
extern "C" unsigned long UNK_004f53f4;
extern "C" unsigned long UNK_004f541c;
extern "C" unsigned long UNK_004f5434;
extern "C" unsigned long UNK_004f5478;
extern "C" unsigned long UNK_004f54bc;
extern "C" unsigned long UNK_004f54de;
extern "C" unsigned long UNK_004f550c;
extern "C" unsigned long UNK_004f5698;
extern "C" unsigned long UNK_004f56b6;
extern "C" unsigned long UNK_004f56ba;
extern "C" unsigned long UNK_004f5748;
extern "C" unsigned long UNK_004f575a;
extern "C" unsigned long UNK_004f57ce;
extern "C" unsigned long UNK_004f57fa;
extern "C" unsigned long UNK_004f5902;
extern "C" unsigned long UNK_004f5905;
extern "C" unsigned long UNK_004f594a;
extern "C" unsigned long UNK_004f594c;
extern "C" unsigned long _UNK_004f53e4;
extern "C" unsigned long _UNK_004f53f8;
extern "C" unsigned long _UNK_004f5420;
extern "C" unsigned long _UNK_004f5464;
extern "C" unsigned long _UNK_004f5660;
extern "C" unsigned long _UNK_004f5664;
extern "C" unsigned long _UNK_004f5668;
extern "C" unsigned long _UNK_004f566c;
extern "C" unsigned long _UNK_004f5670;
extern "C" unsigned long _UNK_004f5674;
extern "C" unsigned long _UNK_004f5678;
extern "C" unsigned long _UNK_004f5a40;
extern "C" unsigned long _UNK_004f5a44;
extern "C" unsigned long _UNK_004f5a48;
extern "C" unsigned long _UNK_004f5a4c;
extern "C" unsigned long _UNK_004f5a50;
extern "C" unsigned long _UNK_004f5a54;
extern "C" unsigned long _UNK_004f5a58;
extern "C" unsigned long _UNK_004f5a5c;
extern "C" unsigned long _UNK_004f5a60;
extern "C" unsigned long _UNK_004f5a64;
extern "C" unsigned long _UNK_004f5a68;
extern "C" unsigned long _UNK_004f5a6c;
extern "C" unsigned long _UNK_004f5a70;
extern "C" unsigned long _UNK_004f5a74;
extern "C" unsigned long _UNK_004f5a78;
extern "C" unsigned long _UNK_004f5a7c;
extern "C" unsigned long _UNK_004f5a80;
extern "C" unsigned long g_004f53b8;
extern "C" unsigned long g_004f53e4;
extern "C" unsigned long g_004f53f4;
extern "C" unsigned long g_004f53f8;
extern "C" unsigned long g_004f541c;
extern "C" unsigned long g_004f5420;
extern "C" unsigned long g_004f5434;
extern "C" unsigned long g_004f5464;
extern "C" unsigned long g_004f5478;
extern "C" unsigned long g_004f54bc;
extern "C" unsigned long g_004f54de;
extern "C" unsigned long g_004f550c;
extern "C" unsigned long g_004f5660;
extern "C" unsigned long g_004f5664;
extern "C" unsigned long g_004f5668;
extern "C" unsigned long g_004f566c;
extern "C" unsigned long g_004f5670;
extern "C" unsigned long g_004f5674;
extern "C" unsigned long g_004f5678;
extern "C" unsigned long g_004f5698;
extern "C" unsigned long g_004f56b6;
extern "C" unsigned long g_004f56ba;
extern "C" unsigned long g_004f5748;
extern "C" unsigned long g_004f575a;
extern "C" unsigned long g_004f57ce;
extern "C" unsigned long g_004f57fa;
extern "C" unsigned long g_004f5902;
extern "C" unsigned long g_004f5905;
extern "C" unsigned long g_004f594a;
extern "C" unsigned long g_004f594c;
extern "C" unsigned long g_004f5a40;
extern "C" unsigned long g_004f5a44;
extern "C" unsigned long g_004f5a48;
extern "C" unsigned long g_004f5a4c;
extern "C" unsigned long g_004f5a50;
extern "C" unsigned long g_004f5a54;
extern "C" unsigned long g_004f5a58;
extern "C" unsigned long g_004f5a5c;
extern "C" unsigned long g_004f5a60;
extern "C" unsigned long g_004f5a64;
extern "C" unsigned long g_004f5a68;
extern "C" unsigned long g_004f5a6c;
extern "C" unsigned long g_004f5a70;
extern "C" unsigned long g_004f5a74;
extern "C" unsigned long g_004f5a78;
extern "C" unsigned long g_004f5a7c;
extern "C" unsigned long g_004f5a80;
cocos2d::CCLabelTTF* BLBackPackItemNumLayer::getLabNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x108));
}

void BLBackPackItemNumLayer::setLabNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLBackPackItemNumLayer::getLabUpgrace() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x10c));
}

cocos2d::CCLayerColor* BLBackPackItemNumLayer::getLayerColor() const
{
  return (cocos2d::CCLayerColor*)(*(undefined4 *)(((int)this) + 0x110));
}

BLPageControl* BLBackPackItemNumLayer::getPageControl() const
{
  return (BLPageControl*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLBackPackItemNumLayer::setPageControl(BLPageControl* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLBackPackItemNumLayer::getLabStar() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x118));
}

void BLBackPackItemNumLayer::setLabStar(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

BLBackPackItemNumLayer::~BLBackPackItemNumLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_004f53b8 + g_004f53e4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x230;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x260;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x26c;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBackPackItemNumLayer::BLBackPackItemNumLayer()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_004f5434 + g_004f5464);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x230;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x260;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x26c;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  return;
}



void BLBackPackItemNumLayer::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLBackPackItemNumLayer::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLBackPackItemNumLayer::setLabUpgrace(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLBackPackItemNumLayer::setLayerColor(cocos2d::CCLayerColor* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLBackPackItemNumLayer::setUpgraceLV(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLBackPackItemNumLayer::init()
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  code *pcVar13;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004f5698 + (intptr_t)(g_004f5a40)),auStack_24);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    puVar10 = (unsigned char *)((char *)&g_004f56b6 + (intptr_t)(g_004f5a44));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004f56ba + (intptr_t)(g_004f5a48)), (char const*)puVar10, g_004f5a4c);
    *(int *)((int)this + 4*(0x42)) = (int)piVar3;
    pcVar13 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x42)));
    piVar3 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar13 = *(code **)(*piVar3 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar5 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,0x40800000));
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar7 = (undefined4)(func_0079e4fc(*(int *)(iVar6 + 4) + -0x80000000,0x3f000000));
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    puVar11 = (unsigned char *)((char *)&g_004f5748 + (intptr_t)(g_004f5a50));
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x42))))->enableStroke(*(const ccColor3B *)(void *)puVar11, 0x3f800000, 1);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004f575a + (intptr_t)(g_004f5a54)), (char const*)puVar10, g_004f5a58);
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    pcVar13 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x46))))->enableStroke(*(const ccColor3B *)(void *)puVar11, 0x3f800000, 1);
    piVar3 = (int *)func_0079e2fc(300);
    0 /* ctorZero */;
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
    if (iVar6 == 0) {
      (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
      piVar3 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar3))->autorelease();
    }
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
    pcVar13 = *(code **)(*piVar3 + 0x1fc);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004f57ce + (intptr_t)(g_004f5a5c)),auStack_24);
    (*pcVar13)(piVar3,auStack_20);
    func_0079e2bc(auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar13 = *(code **)(*piVar3 + 0x204);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004f57fa + (intptr_t)(g_004f5a60)),auStack_24);
    (*pcVar13)(piVar3,auStack_20);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x20c))((int *)*(int *)((int)this + 4*(0x45)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x21c))((int *)*(int *)((int)this + 4*(0x45)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x214))((int *)*(int *)((int)this + 4*(0x45)),0);
    ((BLPageControl *)(*(int *)((int)this + 4*(0x45))))->reload();
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    piVar12 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar13 = *(code **)(*piVar12 + 0x54);
    piVar3 = (int *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar5 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,0x40800000));
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar7 = (undefined4)(func_0079e4fc(*(int *)(iVar6 + 4) + -0x80000000,0x3f000000));
    uVar7 = (undefined4)(func_0079e59c(uVar7,g_004f5a64));
    (*pcVar13)(piVar12,uVar5,uVar7);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar13 = *(code **)(*piVar3 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x60))());
    uVar7 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x68))());
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004f5a68));
    uVar7 = (undefined4)(func_0079e57c(uVar7,0x3f800000));
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    piVar3 = (int *)cocos2d::CCLayerColor::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
    iVar6 = (undefined4)(intptr_t)(g_004f5a6c);
    (**(code **)(*(int *)(piVar3) + (0x218)))(piVar3,(unsigned char *)((char *)&g_004f5902 + (intptr_t)(g_004f5a6c)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x200))((int *)*(int *)((int)this + 4*(0x44)),0xff);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar13 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    iVar8 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004f594a + (intptr_t)(g_004f5a70)), (char const*)(unsigned char *)((char *)&g_004f594c + (intptr_t)(g_004f5a74)), g_004f5a4c));
    *(int *)((int)this + 4*(0x43)) = iVar8;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 200))((int *)*(int *)((int)this + 4*(0x44)),iVar8);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),&g_004f5905 + iVar6);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar13 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    pcVar13 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x4c);
    piVar3 = (int *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar5 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
    uVar7 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar7));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004f5a7c));
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar9 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
    uVar7 = (undefined4)(func_0079e57c(uVar7,uVar9));
    uVar7 = (undefined4)(func_0079e57c(uVar7,g_004f5a7c));
    0 /* ctorZero */;
    (*pcVar13)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x98))((int *)*(int *)((int)this + 4*(0x44)),g_004f5a80);
  }
  return iVar1;
}

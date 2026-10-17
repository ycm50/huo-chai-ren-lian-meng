#include "BLResiteLevelPresenter.h"
#include "CCGeometry.h"
#include "BLResiteLevelView.h"
#include "CCObject.h"
#include "CCSprite.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "CCLabelTTF.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b484c;
extern "C" unsigned long UNK_006b4860;
extern "C" unsigned long UNK_006b48d6;
extern "C" unsigned long UNK_006b48d8;
extern "C" unsigned long UNK_006b4938;
extern "C" unsigned long UNK_006b4960;
extern "C" unsigned long UNK_006b4976;
extern "C" unsigned long UNK_006b4998;
extern "C" unsigned long UNK_006b49c0;
extern "C" unsigned long UNK_006b4a40;
extern "C" unsigned long UNK_006b4a54;
extern "C" unsigned long UNK_006b4a62;
extern "C" unsigned long UNK_006b4ae6;
extern "C" unsigned long UNK_006b4af8;
extern "C" unsigned long UNK_006b4b74;
extern "C" unsigned long UNK_006b4b84;
extern "C" unsigned long UNK_006b4b86;
extern "C" unsigned long UNK_006b4b98;
extern "C" unsigned long UNK_006b4c0e;
extern "C" unsigned long UNK_006b4c1e;
extern "C" unsigned long UNK_006b4c30;
extern "C" unsigned long UNK_006b4c42;
extern "C" unsigned long UNK_006b4c50;
extern "C" unsigned long UNK_006b4c54;
extern "C" unsigned long UNK_006b4c58;
extern "C" unsigned long UNK_006b4c5c;
extern "C" unsigned long UNK_006b4cae;
extern "C" unsigned long UNK_006b4cfe;
extern "C" unsigned long UNK_006b4d02;
extern "C" unsigned long UNK_006b4d38;
extern "C" unsigned long UNK_006b4d68;
extern "C" unsigned long UNK_006b4e66;
extern "C" unsigned long UNK_006b4e76;
extern "C" unsigned long UNK_006b4e78;
extern "C" unsigned long UNK_006b4ed3;
extern "C" unsigned long UNK_006b4ef2;
extern "C" unsigned long UNK_006b4f14;
extern "C" unsigned long UNK_006b4f3e;
extern "C" unsigned long UNK_006b4f8c;
extern "C" unsigned long _UNK_006b4890;
extern "C" unsigned long _UNK_006b4894;
extern "C" unsigned long _UNK_006b48bc;
extern "C" unsigned long _UNK_006b4a90;
extern "C" unsigned long _UNK_006b4a94;
extern "C" unsigned long _UNK_006b4a98;
extern "C" unsigned long _UNK_006b4a9c;
extern "C" unsigned long _UNK_006b4aa0;
extern "C" unsigned long _UNK_006b4aa4;
extern "C" unsigned long _UNK_006b4aa8;
extern "C" unsigned long _UNK_006b4aac;
extern "C" unsigned long _UNK_006b4ab0;
extern "C" unsigned long _UNK_006b4ab4;
extern "C" unsigned long _UNK_006b4ab8;
extern "C" unsigned long _UNK_006b4abc;
extern "C" unsigned long _UNK_006b4ac0;
extern "C" unsigned long _UNK_006b4ac4;
extern "C" unsigned long _UNK_006b4ac8;
extern "C" unsigned long _UNK_006b4acc;
extern "C" unsigned long _UNK_006b4ad0;
extern "C" unsigned long _UNK_006b4ad4;
extern "C" unsigned long _UNK_006b4b24;
extern "C" unsigned long _UNK_006b4b28;
extern "C" unsigned long _UNK_006b4c5c;
extern "C" unsigned long _UNK_006b4c60;
extern "C" unsigned long _UNK_006b4c64;
extern "C" unsigned long _UNK_006b4c68;
extern "C" unsigned long _UNK_006b4c6c;
extern "C" unsigned long _UNK_006b4c70;
extern "C" unsigned long _UNK_006b4c74;
extern "C" unsigned long _UNK_006b4c78;
extern "C" unsigned long _UNK_006b4c7c;
extern "C" unsigned long _UNK_006b4c80;
extern "C" unsigned long _UNK_006b4c84;
extern "C" unsigned long _UNK_006b4c88;
extern "C" unsigned long _UNK_006b507c;
extern "C" unsigned long _UNK_006b5080;
extern "C" unsigned long _UNK_006b5084;
extern "C" unsigned long _UNK_006b5088;
extern "C" unsigned long _UNK_006b508c;
extern "C" unsigned long _UNK_006b5090;
extern "C" unsigned long _UNK_006b5094;
extern "C" unsigned long _UNK_006b5098;
extern "C" unsigned long _UNK_006b509c;
extern "C" unsigned long _UNK_006b50a0;
extern "C" unsigned long _UNK_006b50a4;
extern "C" unsigned long _UNK_006b50a8;
extern "C" unsigned long _UNK_006b50ac;
extern "C" unsigned long _UNK_006b50b0;
extern "C" unsigned long _UNK_006b50b4;
extern "C" unsigned long _UNK_006b50b8;
extern "C" unsigned long _UNK_006b50bc;
extern "C" unsigned long _UNK_006b50c0;
extern "C" unsigned long _UNK_006b50c4;
extern "C" unsigned long _UNK_006b50c8;
extern "C" unsigned long _UNK_006b50cc;
extern "C" unsigned long _UNK_006b50d0;
extern "C" unsigned long _UNK_006b50d4;
extern "C" unsigned long _UNK_006b50d8;
extern "C" unsigned long g_006b484c;
extern "C" unsigned long g_006b4860;
extern "C" unsigned long g_006b4890;
extern "C" unsigned long g_006b4894;
extern "C" unsigned long g_006b48bc;
extern "C" unsigned long g_006b48d6;
extern "C" unsigned long g_006b48d8;
extern "C" unsigned long g_006b4938;
extern "C" unsigned long g_006b4960;
extern "C" unsigned long g_006b4976;
extern "C" unsigned long g_006b4998;
extern "C" unsigned long g_006b49c0;
extern "C" unsigned long g_006b4a40;
extern "C" unsigned long g_006b4a54;
extern "C" unsigned long g_006b4a62;
extern "C" unsigned long g_006b4a90;
extern "C" unsigned long g_006b4a94;
extern "C" unsigned long g_006b4a98;
extern "C" unsigned long g_006b4a9c;
extern "C" unsigned long g_006b4aa0;
extern "C" unsigned long g_006b4aa4;
extern "C" unsigned long g_006b4aa8;
extern "C" unsigned long g_006b4aac;
extern "C" unsigned long g_006b4ab0;
extern "C" unsigned long g_006b4ab4;
extern "C" unsigned long g_006b4ab8;
extern "C" unsigned long g_006b4abc;
extern "C" unsigned long g_006b4ac0;
extern "C" unsigned long g_006b4ac4;
extern "C" unsigned long g_006b4ac8;
extern "C" unsigned long g_006b4acc;
extern "C" unsigned long g_006b4ad0;
extern "C" unsigned long g_006b4ad4;
extern "C" unsigned long g_006b4ae6;
extern "C" unsigned long g_006b4af8;
extern "C" unsigned long g_006b4b24;
extern "C" unsigned long g_006b4b28;
extern "C" unsigned long g_006b4b74;
extern "C" unsigned long g_006b4b84;
extern "C" unsigned long g_006b4b86;
extern "C" unsigned long g_006b4b98;
extern "C" unsigned long g_006b4c0e;
extern "C" unsigned long g_006b4c1e;
extern "C" unsigned long g_006b4c30;
extern "C" unsigned long g_006b4c42;
extern "C" unsigned long g_006b4c50;
extern "C" unsigned long g_006b4c54;
extern "C" unsigned long g_006b4c58;
extern "C" unsigned long g_006b4c5c;
extern "C" unsigned long g_006b4c60;
extern "C" unsigned long g_006b4c64;
extern "C" unsigned long g_006b4c68;
extern "C" unsigned long g_006b4c6c;
extern "C" unsigned long g_006b4c70;
extern "C" unsigned long g_006b4c74;
extern "C" unsigned long g_006b4c78;
extern "C" unsigned long g_006b4c7c;
extern "C" unsigned long g_006b4c80;
extern "C" unsigned long g_006b4c84;
extern "C" unsigned long g_006b4c88;
extern "C" unsigned long g_006b4cae;
extern "C" unsigned long g_006b4cfe;
extern "C" unsigned long g_006b4d02;
extern "C" unsigned long g_006b4d38;
extern "C" unsigned long g_006b4d68;
extern "C" unsigned long g_006b4e66;
extern "C" unsigned long g_006b4e76;
extern "C" unsigned long g_006b4e78;
extern "C" unsigned long g_006b4ed3;
extern "C" unsigned long g_006b4ef2;
extern "C" unsigned long g_006b4f14;
extern "C" unsigned long g_006b4f3e;
extern "C" unsigned long g_006b4f8c;
extern "C" unsigned long g_006b507c;
extern "C" unsigned long g_006b5080;
extern "C" unsigned long g_006b5084;
extern "C" unsigned long g_006b5088;
extern "C" unsigned long g_006b508c;
extern "C" unsigned long g_006b5090;
extern "C" unsigned long g_006b5094;
extern "C" unsigned long g_006b5098;
extern "C" unsigned long g_006b509c;
extern "C" unsigned long g_006b50a0;
extern "C" unsigned long g_006b50a4;
extern "C" unsigned long g_006b50a8;
extern "C" unsigned long g_006b50ac;
extern "C" unsigned long g_006b50b0;
extern "C" unsigned long g_006b50b4;
extern "C" unsigned long g_006b50b8;
extern "C" unsigned long g_006b50bc;
extern "C" unsigned long g_006b50c0;
extern "C" unsigned long g_006b50c4;
extern "C" unsigned long g_006b50c8;
extern "C" unsigned long g_006b50cc;
extern "C" unsigned long g_006b50d0;
extern "C" unsigned long g_006b50d4;
extern "C" unsigned long g_006b50d8;
BLResiteLevelPresenter::~BLResiteLevelPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b4860 + g_006b4894,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLResiteLevelPresenter::onCloseClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006b48bc);
  return;
}


BLResiteLevelPresenter::BLResiteLevelPresenter()
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
  func_0079e45c(&uStack_14,&g_006b4af8 + g_006b4b28,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLResiteLevelPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLResiteLevelPresenter::onExit()
{
  return;
}

void BLResiteLevelPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLResiteLevelPresenter::onLevelClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLResiteLevelPresenter::initWithView(BLResiteLevelView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  int iStack_138;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined4 auStack_114 [2];
  undefined1 auStack_10c [4];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined4 auStack_e4 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_100 = (undefined4)(0);
  uStack_104 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006b4b74 + (intptr_t)(g_006b4c5c))));
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),uStack_104,0,0x20);
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006b4b84 + (intptr_t)(g_006b4c60)), (char const*)(unsigned char *)((char *)&g_006b4b86 + (intptr_t)(g_006b4c64)), g_006b4c68);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_006b4b98 + (intptr_t)(g_006b4c6c)));
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_f4,uVar2));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(auStack_e4[1],uVar3));
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar1,2);
  func_0079e45c(&uStack_f4,(unsigned char *)((char *)&g_006b4c0e + (intptr_t)(g_006b4c78)),auStack_d4);
  func_0079e45c(auStack_f0,(unsigned char *)((char *)&g_006b4c1e + (intptr_t)(g_006b4c7c)),auStack_d4);
  func_0079e45c(auStack_ec,(unsigned char *)((char *)&g_006b4c30 + (intptr_t)(g_006b4c80)),auStack_d4);
  func_0079e45c(auStack_e8,(unsigned char *)((char *)&g_006b4c42 + (intptr_t)(g_006b4c84)),auStack_d4);
  auStack_e4[0] = (undefined4)(intptr_t)(*(undefined4 *)((unsigned char *)((char *)&g_006b4c50 + (intptr_t)(g_006b4c88))));
  auStack_e4[1] = (undefined4)(intptr_t)(*(undefined4 *)((unsigned char *)((char *)&g_006b4c54 + (intptr_t)(g_006b4c88))));
  auStack_e4[2] = (undefined4)(intptr_t)(*(undefined4 *)((unsigned char *)((char *)&g_006b4c58 + (intptr_t)(g_006b4c88))));
  auStack_e4[3] = (undefined4)(intptr_t)(*(undefined4 *)((unsigned char *)((char *)&g_006b4c5c + (intptr_t)(g_006b4c88))));
  iStack_138 = 0;
  do {
    while( true ) {
      uVar3 = (undefined4)(func_0079e2ec(iStack_138 * -0x50 + 100));
      piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)*(undefined4 *)(auStack_f0 + iStack_138 * 4 + -4), (char const*)(unsigned char *)((char *)&g_006b4cae + (intptr_t)(g_006b507c)), g_006b5080);
      pcVar7 = *(code **)(*piVar1 + 0x7c);
      0 /* ctorZero */;
      (*pcVar7)(piVar1,auStack_d4);
      pcVar7 = *(code **)(*piVar1 + 0x4c);
      0 /* ctorZero */;
      (*pcVar7)(piVar1,auStack_d4);
      (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_006b4d02 + (intptr_t)(g_006b5088)));
      ((cocos2d::CCLabelTTF *)(piVar1))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_006b4cfe + (intptr_t)(g_006b508c)), 0x3f800000, 1);
      (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar1,2);
      iVar8 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x14));
      uVar2 = (undefined4)(cocos2d::extension::CCControlButton::create());
      *(undefined4 *)(iVar8 + 0x110) = uVar2;
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,0);
      func_0079e45c(auStack_11c,(unsigned char *)((char *)&g_006b4d38 + (intptr_t)(g_006b5090)),auStack_d4);
      uVar2 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_11c);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x30c)))(piVar1,uVar2,1);
      func_0079e45c(auStack_118,(unsigned char *)((char *)&g_006b4d68 + (intptr_t)(g_006b5094)),auStack_d4);
      uVar2 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_118);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x30c)))(piVar1,uVar2,2);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      pcVar7 = *(code **)(*piVar1 + 0x28c);
      0 /* ctorZero */;
      (*pcVar7)(piVar1,auStack_d4);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x30)))(piVar1,0x3f800000);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x38)))(piVar1,0x3f800000);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      pcVar7 = *(code **)(*piVar1 + 0x4c);
      0 /* ctorZero */;
      uVar2 = (undefined4)(auStack_114[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
      0 /* ctorZero */;
      uVar2 = (undefined4)(uStack_108);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar3));
      0 /* ctorZero */;
      (*pcVar7)(piVar1,auStack_d4);
      piVar1 = *(int **)(((int)this) + 0x14);
      (**(code **)(*(int *)(piVar1) + (0xcc)))(piVar1,piVar1[0x44],2);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      (**(code **)(*(int *)(piVar1) + (0x11c)))(piVar1,iStack_138 + 100);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
      uStack_f8 = (undefined4)(0);
      uStack_fc = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006b4e66 + (intptr_t)(g_006b50a4))));
      (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_fc,0,0x20);
      piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006b4e76 + (intptr_t)(g_006b50a8)), (char const*)(unsigned char *)((char *)&g_006b4e78 + (intptr_t)(g_006b50ac)), g_006b50b0);
      pcVar7 = *(code **)(*piVar1 + 0x4c);
      uVar2 = (undefined4)((**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x110) + 0x50))());
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_10c);
      (*pcVar7)(piVar1,auStack_d4);
      (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_006b4ed3 + (intptr_t)(g_006b50b8)));
      (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar1,2);
      uVar2 = (undefined4)(auStack_e4[iStack_138]);
      func_0079e43c(auStack_d4,0x18);
      func_0079e44c(auStack_cc,uVar2);
      func_0079e45c(auStack_10c,(unsigned char *)((char *)&g_006b4ef2 + (intptr_t)(g_006b50bc)),auStack_114);
      func_0079e46c(auStack_114,auStack_c8);
      func_0079e2bc(auStack_10c);
      func_0079e47c(auStack_d4);
      piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_114[0], (char const*)(unsigned char *)((char *)&g_006b4f14 + (intptr_t)(g_006b50c0)), g_006b50b0);
      func_0079e2bc(auStack_114);
      (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_006b4f3e + (intptr_t)(g_006b50c4)));
      pcVar7 = *(code **)(*piVar1 + 0x7c);
      0 /* ctorZero */;
      (*pcVar7)(piVar1,auStack_d4);
      pcVar7 = *(code **)(*piVar1 + 0x4c);
      uVar2 = (undefined4)((**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x110) + 0x50))());
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_10c);
      (*pcVar7)(piVar1,auStack_d4);
      (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar1,2);
      piVar5 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_006b4f8c + (intptr_t)(g_006b50d0)));
      pcVar7 = *(code **)(*piVar5 + 0x4c);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
      puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
      uVar4 = (undefined4)(*puVar6);
      puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5);
      uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
      uVar3 = (undefined4)(func_0079e59c(uVar4,uVar3));
      uVar3 = (undefined4)(func_0079e57c(uVar3,g_006b50d4));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_10c);
      (*pcVar7)(piVar5,auStack_d4);
      (**(code **)(**(int **)(((int)this) + 0x14) + 0xcc))(*(int **)(((int)this) + 0x14),piVar5,2);
      if (iStack_138 != 0) break;
      pcVar7 = *(code **)(*piVar1 + 0x4c);
      uVar2 = (undefined4)((**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x110) + 0x50))());
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_10c);
      (*pcVar7)(piVar1,auStack_d4);
      pcVar7 = *(code **)(*piVar5 + 0x4c);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
      puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
      uVar4 = (undefined4)(*puVar6);
      puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5);
      uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
      uVar3 = (undefined4)(func_0079e59c(uVar4,uVar3));
      uVar3 = (undefined4)(func_0079e57c(uVar3,g_006b50d4));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_10c);
      (*pcVar7)(piVar5,auStack_d4);
      iStack_138 = 1;
    }
    iStack_138 = (undefined4)(intptr_t)(iStack_138 + 1);
  } while (iStack_138 != 4);
  func_0079e2bc(auStack_e8);
  func_0079e2bc(auStack_ec);
  func_0079e2bc(auStack_f0);
  func_0079e2bc(&uStack_f4);
  return;
}

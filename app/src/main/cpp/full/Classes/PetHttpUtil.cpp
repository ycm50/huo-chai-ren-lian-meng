#include "PetHttpUtil.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "Toast.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00607ba0;
extern "C" unsigned long UNK_00607bec;
extern "C" unsigned long UNK_00607c10;
extern "C" unsigned long UNK_00607c54;
extern "C" unsigned long UNK_00607c62;
extern "C" unsigned long UNK_00607c72;
extern "C" unsigned long UNK_00607cc4;
extern "C" unsigned long UNK_00607cd2;
extern "C" unsigned long UNK_00607ce2;
extern "C" unsigned long UNK_00607d34;
extern "C" unsigned long UNK_00607d42;
extern "C" unsigned long UNK_00607d52;
extern "C" unsigned long UNK_00607da4;
extern "C" unsigned long UNK_00607db2;
extern "C" unsigned long UNK_00607dc2;
extern "C" unsigned long UNK_00607f9e;
extern "C" unsigned long UNK_00607fde;
extern "C" unsigned long UNK_0060802c;
extern "C" unsigned long UNK_0060803e;
extern "C" unsigned long UNK_0060804e;
extern "C" unsigned long UNK_00608060;
extern "C" unsigned long UNK_00608090;
extern "C" unsigned long UNK_006080a2;
extern "C" unsigned long UNK_006080c0;
extern "C" unsigned long UNK_006080f8;
extern "C" unsigned long UNK_00608130;
extern "C" unsigned long UNK_006081ba;
extern "C" unsigned long UNK_00608208;
extern "C" unsigned long UNK_0060821a;
extern "C" unsigned long UNK_0060822a;
extern "C" unsigned long UNK_0060823c;
extern "C" unsigned long UNK_0060826c;
extern "C" unsigned long UNK_0060827e;
extern "C" unsigned long UNK_006082a2;
extern "C" unsigned long UNK_006082da;
extern "C" unsigned long UNK_00608312;
extern "C" unsigned long UNK_0060839a;
extern "C" unsigned long UNK_006083e6;
extern "C" unsigned long UNK_006083f8;
extern "C" unsigned long UNK_00608408;
extern "C" unsigned long UNK_0060841a;
extern "C" unsigned long UNK_00608436;
extern "C" unsigned long UNK_0060844e;
extern "C" unsigned long UNK_00608486;
extern "C" unsigned long UNK_00608504;
extern "C" unsigned long UNK_00608550;
extern "C" unsigned long UNK_00608562;
extern "C" unsigned long UNK_00608572;
extern "C" unsigned long UNK_00608584;
extern "C" unsigned long UNK_0060859c;
extern "C" unsigned long UNK_006085a8;
extern "C" unsigned long UNK_006085ba;
extern "C" unsigned long UNK_006085ce;
extern "C" unsigned long UNK_00608606;
extern "C" unsigned long _UNK_00607bc4;
extern "C" unsigned long _UNK_00607c04;
extern "C" unsigned long _UNK_00607c38;
extern "C" unsigned long _UNK_00607ca0;
extern "C" unsigned long _UNK_00607ca4;
extern "C" unsigned long _UNK_00607ca8;
extern "C" unsigned long _UNK_00607d10;
extern "C" unsigned long _UNK_00607d14;
extern "C" unsigned long _UNK_00607d18;
extern "C" unsigned long _UNK_00607d80;
extern "C" unsigned long _UNK_00607d84;
extern "C" unsigned long _UNK_00607d88;
extern "C" unsigned long _UNK_00607df0;
extern "C" unsigned long _UNK_00607df4;
extern "C" unsigned long _UNK_00607df8;
extern "C" unsigned long _UNK_00607fac;
extern "C" unsigned long _UNK_00608164;
extern "C" unsigned long _UNK_00608168;
extern "C" unsigned long _UNK_0060816c;
extern "C" unsigned long _UNK_00608170;
extern "C" unsigned long _UNK_00608174;
extern "C" unsigned long _UNK_00608178;
extern "C" unsigned long _UNK_0060817c;
extern "C" unsigned long _UNK_00608180;
extern "C" unsigned long _UNK_00608184;
extern "C" unsigned long _UNK_00608188;
extern "C" unsigned long _UNK_00608348;
extern "C" unsigned long _UNK_0060834c;
extern "C" unsigned long _UNK_00608350;
extern "C" unsigned long _UNK_00608354;
extern "C" unsigned long _UNK_00608358;
extern "C" unsigned long _UNK_0060835c;
extern "C" unsigned long _UNK_00608360;
extern "C" unsigned long _UNK_00608364;
extern "C" unsigned long _UNK_00608368;
extern "C" unsigned long _UNK_0060836c;
extern "C" unsigned long _UNK_006084b8;
extern "C" unsigned long _UNK_006084bc;
extern "C" unsigned long _UNK_006084c0;
extern "C" unsigned long _UNK_006084c4;
extern "C" unsigned long _UNK_006084c8;
extern "C" unsigned long _UNK_006084cc;
extern "C" unsigned long _UNK_006084d0;
extern "C" unsigned long _UNK_006084d4;
extern "C" unsigned long _UNK_00608638;
extern "C" unsigned long _UNK_0060863c;
extern "C" unsigned long _UNK_00608640;
extern "C" unsigned long _UNK_00608644;
extern "C" unsigned long _UNK_00608648;
extern "C" unsigned long _UNK_0060864c;
extern "C" unsigned long _UNK_00608650;
extern "C" unsigned long _UNK_00608654;
extern "C" unsigned long _UNK_00608658;
extern "C" unsigned long _UNK_0060865c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00607ba0;
extern "C" unsigned long g_00607bc4;
extern "C" unsigned long g_00607bec;
extern "C" unsigned long g_00607c04;
extern "C" unsigned long g_00607c10;
extern "C" unsigned long g_00607c38;
extern "C" unsigned long g_00607c54;
extern "C" unsigned long g_00607c62;
extern "C" unsigned long g_00607c72;
extern "C" unsigned long g_00607ca0;
extern "C" unsigned long g_00607ca4;
extern "C" unsigned long g_00607ca8;
extern "C" unsigned long g_00607cc4;
extern "C" unsigned long g_00607cd2;
extern "C" unsigned long g_00607ce2;
extern "C" unsigned long g_00607d10;
extern "C" unsigned long g_00607d14;
extern "C" unsigned long g_00607d18;
extern "C" unsigned long g_00607d34;
extern "C" unsigned long g_00607d42;
extern "C" unsigned long g_00607d52;
extern "C" unsigned long g_00607d80;
extern "C" unsigned long g_00607d84;
extern "C" unsigned long g_00607d88;
extern "C" unsigned long g_00607da4;
extern "C" unsigned long g_00607db2;
extern "C" unsigned long g_00607dc2;
extern "C" unsigned long g_00607df0;
extern "C" unsigned long g_00607df4;
extern "C" unsigned long g_00607df8;
extern "C" unsigned long g_00607f9e;
extern "C" unsigned long g_00607fac;
extern "C" unsigned long g_00607fde;
extern "C" unsigned long g_0060802c;
extern "C" unsigned long g_0060803e;
extern "C" unsigned long g_0060804e;
extern "C" unsigned long g_00608060;
extern "C" unsigned long g_00608090;
extern "C" unsigned long g_006080a2;
extern "C" unsigned long g_006080c0;
extern "C" unsigned long g_006080f8;
extern "C" unsigned long g_00608130;
extern "C" unsigned long g_00608164;
extern "C" unsigned long g_00608168;
extern "C" unsigned long g_0060816c;
extern "C" unsigned long g_00608170;
extern "C" unsigned long g_00608174;
extern "C" unsigned long g_00608178;
extern "C" unsigned long g_0060817c;
extern "C" unsigned long g_00608180;
extern "C" unsigned long g_00608184;
extern "C" unsigned long g_00608188;
extern "C" unsigned long g_006081ba;
extern "C" unsigned long g_00608208;
extern "C" unsigned long g_0060821a;
extern "C" unsigned long g_0060822a;
extern "C" unsigned long g_0060823c;
extern "C" unsigned long g_0060826c;
extern "C" unsigned long g_0060827e;
extern "C" unsigned long g_006082a2;
extern "C" unsigned long g_006082da;
extern "C" unsigned long g_00608312;
extern "C" unsigned long g_00608348;
extern "C" unsigned long g_0060834c;
extern "C" unsigned long g_00608350;
extern "C" unsigned long g_00608354;
extern "C" unsigned long g_00608358;
extern "C" unsigned long g_0060835c;
extern "C" unsigned long g_00608360;
extern "C" unsigned long g_00608364;
extern "C" unsigned long g_00608368;
extern "C" unsigned long g_0060836c;
extern "C" unsigned long g_0060839a;
extern "C" unsigned long g_006083e6;
extern "C" unsigned long g_006083f8;
extern "C" unsigned long g_00608408;
extern "C" unsigned long g_0060841a;
extern "C" unsigned long g_00608436;
extern "C" unsigned long g_0060844e;
extern "C" unsigned long g_00608486;
extern "C" unsigned long g_006084b8;
extern "C" unsigned long g_006084bc;
extern "C" unsigned long g_006084c0;
extern "C" unsigned long g_006084c4;
extern "C" unsigned long g_006084c8;
extern "C" unsigned long g_006084cc;
extern "C" unsigned long g_006084d0;
extern "C" unsigned long g_006084d4;
extern "C" unsigned long g_00608504;
extern "C" unsigned long g_00608550;
extern "C" unsigned long g_00608562;
extern "C" unsigned long g_00608572;
extern "C" unsigned long g_00608584;
extern "C" unsigned long g_0060859c;
extern "C" unsigned long g_006085a8;
extern "C" unsigned long g_006085ba;
extern "C" unsigned long g_006085ce;
extern "C" unsigned long g_00608606;
extern "C" unsigned long g_00608638;
extern "C" unsigned long g_0060863c;
extern "C" unsigned long g_00608640;
extern "C" unsigned long g_00608644;
extern "C" unsigned long g_00608648;
extern "C" unsigned long g_0060864c;
extern "C" unsigned long g_00608650;
extern "C" unsigned long g_00608654;
extern "C" unsigned long g_00608658;
extern "C" unsigned long g_0060865c;
PetHttpUtil::~PetHttpUtil()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(8)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(8)))));
  }
  if (*(int *)((int)this + 4*(5)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(5)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetHttpUtil::PetHttpUtil()
{
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  return;
}

int PetHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(&g_00607c10 + g_00607c38);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void PetHttpUtil::getSkillWashDate()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,&g_00607c54 + g_00607ca0,auStack_30);
  func_0079e45c(auStack_24,&g_00607c62 + g_00607ca4,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void PetHttpUtil::getSkillRefreshData()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,&g_00607cc4 + g_00607d10,auStack_30);
  func_0079e45c(auStack_24,&g_00607cd2 + g_00607d14,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void PetHttpUtil::getTrainPetDate()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,&g_00607d34 + g_00607d80,auStack_30);
  func_0079e45c(auStack_24,&g_00607d42 + g_00607d84,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void PetHttpUtil::putTrainPetDate()
{
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_20,&g_00607da4 + g_00607df0,auStack_28);
  func_0079e45c(auStack_1c,&g_00607db2 + g_00607df4,auStack_24);
  0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}


void PetHttpUtil::setFirstSkillId(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

void PetHttpUtil::setSecondSkillId(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
int PetHttpUtil::getTotalValue(std::vector<int, std::allocator<int>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PetHttpUtil::getIndexInVector(std::vector<int, std::allocator<int>>& p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::getIndexById(std::vector<int, std::allocator<int>>& p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::setSkillId()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::onSkillUnlockCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::onSkillRefreshCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::onPetTrainGetCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetHttpUtil::onPetTrainPutCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

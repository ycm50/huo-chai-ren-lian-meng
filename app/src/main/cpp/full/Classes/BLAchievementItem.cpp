#include "BLAchievementItem.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long UNK_004ec5ee;
extern "C" unsigned long _DAT_004ec73c;
extern "C" unsigned long _DAT_004ec740;
extern "C" unsigned long _DAT_004ec744;
extern "C" unsigned long _UNK_004ec604;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004ec5ee;
extern "C" unsigned long g_004ec604;
extern "C" unsigned long g_004ec73c;
extern "C" unsigned long g_004ec740;
extern "C" unsigned long g_004ec744;
long BLAchievementItem::getValue() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLAchievementItem::setValue(long p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

void BLAchievementItem::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

BLAchievementItem::~BLAchievementItem()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLAchievementItem::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

int * BLAchievementItem::create()
{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r2;
  undefined4 in_r3;
  int iVar3;
  
  piVar2 = (int *)((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  iVar1 = g_004ec740;
  *piVar2 = *(int *)(g_004ec73c + 0x4ec6fe) + 8;
  iVar3 = *(int *)(g_004ec744 + 0x4ec70c) + 0xc;
  piVar2[5] = iVar3;
  func_0079e2dc(piVar2 + 5,iVar1 + 0x4ec70a,extraout_r2,iVar3,in_r3);
  piVar2[6] = 0;
  ((cocos2d::CCObject *)piVar2)->autorelease();
  return (int *)(piVar2);
}

#include "BLLanguageItem.h"
#include "CCObject.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long UNK_006c8cb6;
extern "C" unsigned long UNK_006c8dc4;
extern "C" unsigned long UNK_006c8dce;
extern "C" unsigned long _UNK_006c8cdc;
extern "C" unsigned long _UNK_006c8dd8;
extern "C" unsigned long _UNK_006c8ddc;
extern "C" unsigned long g_006c8cb6;
extern "C" unsigned long g_006c8cdc;
extern "C" unsigned long g_006c8dc4;
extern "C" unsigned long g_006c8dce;
extern "C" unsigned long g_006c8dd8;
extern "C" unsigned long g_006c8ddc;
void BLLanguageItem::setEN(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void BLLanguageItem::setCN(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLLanguageItem::setKey(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

BLLanguageItem::~BLLanguageItem()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLLanguageItem::getKey() const
{ return *(std::string *)(((int)this) + 0x14); }

std::string BLLanguageItem::getCN() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLLanguageItem::getEN() const
{ return *(std::string *)(((int)this) + 0x1c); }

BLLanguageItem::BLLanguageItem()
{
  int iVar1;
  
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  iVar1 = *(int *)(&g_006c8dce + g_006c8ddc) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar1;
  *(int *)((int)this + 4*(6)) = iVar1;
  *(int *)((int)this + 4*(7)) = iVar1;
  return;
}

bool BLLanguageItem::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLanguageItem::initWith(char** p1, int& p2)
{
  int iVar1;
  
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e2dc(((int)this) + 0x18,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e2dc(((int)this) + 0x1c,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}

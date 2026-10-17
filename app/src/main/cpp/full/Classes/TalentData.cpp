#include "TalentData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" unsigned long _DAT_004ae8e4;
extern "C" unsigned long _DAT_004ae8e8;
extern "C" unsigned long _DAT_004ae8ec;
extern "C" unsigned long _DAT_004ae8f0;
extern "C" unsigned long _DAT_004ae8f4;
extern "C" unsigned long _DAT_004ae8f8;
extern "C" unsigned long _DAT_004ae8fc;
extern "C" unsigned long _DAT_004aeaf0;
extern "C" unsigned long _DAT_004aeaf4;
extern "C" unsigned long _DAT_004aeaf8;
extern "C" unsigned long _DAT_004aeafc;
extern "C" unsigned long _DAT_004aeb00;
extern "C" unsigned long _DAT_004aeb04;
extern "C" unsigned long _DAT_004aeb08;
extern "C" unsigned long _DAT_004aeb0c;
extern "C" unsigned long _DAT_004aebfc;
extern "C" unsigned long _DAT_004aec00;
extern "C" unsigned long _DAT_004af2d8;
extern "C" unsigned long _DAT_004af2dc;
extern "C" unsigned long _DAT_004af2e0;
extern "C" unsigned long _DAT_004af2e4;
extern "C" unsigned long _DAT_004af2e8;
extern "C" unsigned long _DAT_004af2ec;
extern "C" unsigned long _DAT_004af2f0;
extern "C" unsigned long g_004ae8e4;
extern "C" unsigned long g_004ae8e8;
extern "C" unsigned long g_004ae8ec;
extern "C" unsigned long g_004ae8f0;
extern "C" unsigned long g_004ae8f4;
extern "C" unsigned long g_004ae8f8;
extern "C" unsigned long g_004ae8fc;
extern "C" unsigned long g_004aeaf0;
extern "C" unsigned long g_004aeaf4;
extern "C" unsigned long g_004aeaf8;
extern "C" unsigned long g_004aeafc;
extern "C" unsigned long g_004aeb00;
extern "C" unsigned long g_004aeb04;
extern "C" unsigned long g_004aeb08;
extern "C" unsigned long g_004aeb0c;
extern "C" unsigned long g_004aebfc;
extern "C" unsigned long g_004aec00;
extern "C" unsigned long g_004af2d8;
extern "C" unsigned long g_004af2dc;
extern "C" unsigned long g_004af2e0;
extern "C" unsigned long g_004af2e4;
extern "C" unsigned long g_004af2e8;
extern "C" unsigned long g_004af2ec;
extern "C" unsigned long g_004af2f0;
int TalentData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void TalentData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

void TalentData::setDesc(std::string p1)
{
  func_0079e52c(((int)this) + 0x2c);
  return;
}

void TalentData::setConsume(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void TalentData::setAnimation(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void TalentData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void TalentData::setAttributiva(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void TalentData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

std::string TalentData::getDesc() const
{ return *(std::string *)(((int)this) + 0x2c); }

std::string TalentData::getConsume() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string TalentData::getAnimation() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string TalentData::getIcon() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string TalentData::getAttributiva() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string TalentData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

bool TalentData::init()
{
  return 1;
}



void TalentData::getAttributivaByLv(int p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p1 + 0x30);
  if ((uint)(*(int *)(p1 + 0x34) - iVar2 >> 3) < p3 - 1U) {
    *(int *)this = 0;
    *(int *)((int)this + 4*(1)) = 0;
  }
  else {
    iVar1 = (p3 - 1U) * 8;
    *(int *)this = *(undefined4 *)(iVar1 + iVar2);
    *(int *)((int)this + 4*(1)) = *(undefined4 *)(iVar2 + iVar1 + 4);
  }
  return;
}

int TalentData::getMaxLv()
{
  return *(int *)(((int)this) + 0x34) - *(int *)(((int)this) + 0x30) >> 3;
}

TalentData::TalentData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

TalentData::~TalentData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void TalentData::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TalentData::getDebrisInfo(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TalentData::initAttrs()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

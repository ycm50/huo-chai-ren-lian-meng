#include "GuideData.h"
#include "CCDictionary.h"
#include "CCObject.h"
#include "CCArray.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_0045ac80;
extern "C" unsigned long _DAT_0056205c;
extern "C" unsigned long _DAT_00562060;
extern "C" unsigned long g_0045ac80;
extern "C" unsigned long g_0056205c;
extern "C" unsigned long g_00562060;
int GuideData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void GuideData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int GuideData::getCompletIndex() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void GuideData::setCompletIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int GuideData::getTriggerType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void GuideData::setTriggerType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int GuideData::getTriggerValue() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void GuideData::setTriggerValue(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

cocos2d::CCArray* GuideData::getStep() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x24));
}

void GuideData::setStep(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  return;
}

bool GuideData::getISMainUI() const
{
  return *(undefined1 *)(((int)this) + 0x28);
}

void GuideData::setISMainUI(bool p1)
{
  *(undefined1 *)(((int)this) + 0x28) = p1;
  return;
}

bool GuideData::getISCloseAllUI() const
{
  return *(undefined1 *)(((int)this) + 0x29);
}

void GuideData::setISCloseAllUI(bool p1)
{
  *(undefined1 *)(((int)this) + 0x29) = p1;
  return;
}

GuideData::~GuideData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void GuideData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x20) = uVar1;
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(char *)(((int)this) + 0x28) = '\x01' - (iVar4 == 0);
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(char *)(((int)this) + 0x29) = '\x01' - (iVar4 == 0);
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar4 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar4 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar4 + 1;
  func_0079e45c(auStack_28,*(undefined4 *)((iVar4 + 1) * 4 + p1),auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  *(int *)p2 = *(int *)p2 + 1;
  uVar5 = (undefined4)(0);
  while( true ) {
    if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar5) break;
    piVar2 = (int *)((DataCacheManager *)this)->shareManager();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x98)))());
    puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)(&iStack_24))->at((unsigned int)uVar5);
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar1))->objectForKey(*puVar3));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(g_0056205c + 0x56202a),
                                *(undefined4 *)(g_00562060 + 0x56202c),0), iVar4 != 0)) {
      ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x24));
    }
    uVar5 = (undefined4)(uVar5 + 1);
  }
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
  return;
}

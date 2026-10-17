#include "MirrorMissionItemData.h"
#include "CCString.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_0049432c;
extern "C" unsigned long g_00494328;
extern "C" unsigned long g_00494330;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004943ac;
extern "C" unsigned long g_004943ac;
MirrorMissionItemData::~MirrorMissionItemData()
{
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this));
  return;
}


undefined8 MirrorMissionItemData::getKey()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iStack_c;
  
  iStack_c = p2;
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%s,%d"), *(undefined4 *)(p2 + 4), *(undefined4 *)(p2 + 8));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,&iStack_c);
  return ghidra_CONCAT44(((int)this),((int)this));
}

// ===== 修复: 补回被误删的函数占位 (2) =====
MirrorMissionItemData::MirrorMissionItemData()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  
  iVar1 = (undefined4)(intptr_t)(g_0049432c + 0x4942f8);
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00494328 + 0x4942f4) + 0xc);
  *(int *)this = iVar2;
  *(int *)((int)this + 4*(1)) = iVar2;
  func_0079e2dc(((int)this),iVar1,p3,iVar2,p4);
  func_0079e2dc(((int)this) + 1,g_00494330 + 0x49430a);
  *(int *)((int)this + 4*(2)) = -1;
  return;
}

void MirrorMissionItemData::initWithData(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this),*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 4,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 8) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}

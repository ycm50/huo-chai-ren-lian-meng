#include "MirrorRoleItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e844(...);
extern "C" unsigned long _DAT_004946a4;
extern "C" unsigned long _DAT_004946a8;
extern "C" unsigned long g_004946a4;
extern "C" unsigned long g_004946a8;
MirrorRoleItemData::MirrorRoleItemData()
{
  int iVar1;
  
  iVar1 = g_004946a8 + 0x49468c;
  *(int *)this = *(int *)(g_004946a4 + 0x494688) + 0xc;
  func_0079e844(((int)this),iVar1);
  *(undefined1 *)(((int)this) + 1) = 0;
  return;
}

MirrorRoleItemData::~MirrorRoleItemData()
{
  func_0079e2bc();
  return;
}

#include "CircusPlayerinfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" unsigned long _DAT_00470ea0;
extern "C" unsigned long _DAT_0047172c;
extern "C" unsigned long _DAT_00471730;
extern "C" unsigned long _DAT_00471734;
extern "C" unsigned long g_00470ea0;
extern "C" unsigned long g_0047172c;
extern "C" unsigned long g_00471730;
extern "C" unsigned long g_00471734;
CircusPlayerinfo::CircusPlayerinfo()
{
  int iVar1;
  
  func_0079e53c();
  *(undefined4 *)(((int)this) + 8) = 0;
  *(undefined4 *)(((int)this) + 0xc) = 0;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  iVar1 = *(int *)(g_00470ea0 + 0x470e90);
  *(undefined4 *)(((int)this) + 0x34) = 0;
  *(undefined4 *)(((int)this) + 0x38) = 0;
  iVar1 = iVar1 + 0xc;
  *(int *)(((int)this) + 0x30) = iVar1;
  *(undefined4 *)(((int)this) + 0x3c) = 0;
  *(int *)(((int)this) + 0x40) = iVar1;
  return;
}

int CircusPlayerinfo::operator=(int P2)
{
  undefined4 p2 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0079e52c();
  *(undefined4 *)(((int)this) + 4) = *(undefined4 *)(p2 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(p2 + 0xc));
  *(undefined4 *)(((int)this) + 8) = *(undefined4 *)(p2 + 8);
  *(undefined4 *)(((int)this) + 0xc) = uVar1;
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(p2 + 0x10);
  *(undefined4 *)(((int)this) + 0x14) = *(undefined4 *)(p2 + 0x14);
  uVar1 = (undefined4)(*(undefined4 *)(p2 + 0x1c));
  *(undefined4 *)(((int)this) + 0x18) = *(undefined4 *)(p2 + 0x18);
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  *(undefined4 *)(((int)this) + 0x20) = *(undefined4 *)(p2 + 0x20);
  uVar1 = (undefined4)(*(undefined4 *)(p2 + 0x28));
  uVar2 = (undefined4)(*(undefined4 *)(p2 + 0x2c));
  *(undefined4 *)(((int)this) + 0x28) = uVar1;
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  func_0079e52c(((int)this) + 0x30,p2 + 0x30,uVar1,uVar2,p4);
  *(std::vector<int> *)(((int)this) + 0x34) = *(std::vector<int> *)(p2 + 0x34);
  func_0079e52c(((int)this) + 0x40,p2 + 0x40);
  *(undefined4 *)(((int)this) + 0x44) = *(undefined4 *)(p2 + 0x44);
  *(undefined4 *)(((int)this) + 0x48) = *(undefined4 *)(p2 + 0x48);
  *(undefined4 *)(((int)this) + 0x4c) = *(undefined4 *)(p2 + 0x4c);
  *(undefined4 *)(((int)this) + 0x50) = *(undefined4 *)(p2 + 0x50);
  return ((int)this);
}

CircusPlayerinfo::~CircusPlayerinfo()
{
  func_0079e2bc(((int)this) + 0x40);
  ((std::vector<int> *)(((int)this) + 0x34))->~vector();
  func_0079e2bc(((int)this) + 0x30);
  func_0079e2bc(((int)this));
  return;
}

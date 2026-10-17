#include "HEROGIFTITEM.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
HEROGIFTITEM::~HEROGIFTITEM()
{
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this));
  return;
}

HEROGIFTITEM::HEROGIFTITEM()
{
  undefined4 p2 = 0;

  func_0079e53c();
  func_0079e53c(((int)this) + 4,p2 + 4);
  func_0079e53c(((int)this) + 8,p2 + 8);
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(p2 + 0xc);
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(p2 + 0x10);
  return;
}

int HEROGIFTITEM::operator=(int P2)
{
  undefined4 p2 = 0;

  func_0079e52c();
  func_0079e52c(((int)this) + 4,p2 + 4);
  func_0079e52c(((int)this) + 8,p2 + 8);
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(p2 + 0xc);
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(p2 + 0x10);
  return ((int)this);
}

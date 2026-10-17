#include "CircusResultinfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e53c(...);
CircusResultinfo::~CircusResultinfo()
{
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this));
  return;
}

CircusResultinfo::CircusResultinfo()
{
  undefined4 p2 = 0;

  func_0079e53c();
  func_0079e53c(((int)this) + 4,p2 + 4);
  func_0079e53c(((int)this) + 8,p2 + 8);
  func_0079e53c(((int)this) + 0xc,p2 + 0xc);
  return;
}

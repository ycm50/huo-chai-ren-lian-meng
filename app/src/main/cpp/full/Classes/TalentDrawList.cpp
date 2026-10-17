#include "TalentDrawList.h"
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
extern "C" long long func_0079e53c(...);
TalentDrawList::~TalentDrawList()
{
  func_0079e2bc(((int)this) + 8);
  if (*(int *)((int)this + 4*(3)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(3)))));
  }
  if (*(int *)this != 0) {
    (void)(::operator delete((void *)(*(int *)this)));
  }
  return;
}

TalentDrawList::TalentDrawList()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

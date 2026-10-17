#include "FeedBackData.h"
#include "FeedBackDataGet.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2fc(...);
extern "C" unsigned long _DAT_00479c44;
extern "C" unsigned long g_00479c44;
void FeedBackData::GetDataFromNet(bool p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar2 = g_00479c44;
  *(undefined1 *)(piVar1 + 5) = p1;
  *piVar1 = *(int *)(iVar2 + 0x479c1a) + 8;
  iVar2 = ((FeedBackDataGet *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return;
}

#include "MissionEndLessCopyAboutUI.h"
#include "BLMissionEndLessCopyAboutView.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" unsigned long UNK_005c8722;
extern "C" unsigned long UNK_005c8828;
extern "C" unsigned long UNK_005c882a;
extern "C" unsigned long _DAT_004e60cc;
extern "C" unsigned long _DAT_004e60d0;
extern "C" unsigned long _UNK_005c8730;
extern "C" unsigned long _UNK_005c8844;
extern "C" unsigned long _UNK_005c8848;
extern "C" unsigned long g_004e60cc;
extern "C" unsigned long g_004e60d0;
extern "C" unsigned long g_005c8722;
extern "C" unsigned long g_005c8730;
extern "C" unsigned long g_005c8828;
extern "C" unsigned long g_005c882a;
extern "C" unsigned long g_005c8844;
extern "C" unsigned long g_005c8848;
int * MissionEndLessCopyAboutUI::create()
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004e60cc + 0x4e6046) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar2)->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  piVar3 = (int *)((BLMissionEndLessCopyAboutView *)this)->create();
  piVar1[9] = (int)piVar3;
  iVar5 = (int)*(int *)&(*piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_004e60d0)))));
  (**(code **)(iVar5 + 0x54))(piVar3,uVar2,uVar4);
  (**(code **)(*(int *)piVar1[6] + 200))((int *)piVar1[6],piVar1[9]);
  iVar5 = (**(code **)(*piVar1 + 0x38))(piVar1);
  if (iVar5 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

MissionEndLessCopyAboutUI::~MissionEndLessCopyAboutUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void MissionEndLessCopyAboutUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005c8828 + g_005c8848),
                              *(undefined4 *)(&g_005c882a + g_005c8844),0), iVar1 != 0)) {
    piVar2 = (int *)((BLMissionEndLessCopyAboutView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}

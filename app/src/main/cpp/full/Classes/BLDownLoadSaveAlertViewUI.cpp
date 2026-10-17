#include "BLDownLoadSaveAlertViewUI.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLDownLoadSaveAlertView.h"
#include "UIManager.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_004e1f56;
extern "C" unsigned long UNK_005f8584;
extern "C" unsigned long UNK_005f8586;
extern "C" unsigned long _DAT_004e96bc;
extern "C" unsigned long _UNK_004e1f64;
extern "C" unsigned long _UNK_005f85ac;
extern "C" unsigned long _UNK_005f85b0;
extern "C" unsigned long g_004e1f56;
extern "C" unsigned long g_004e1f64;
extern "C" unsigned long g_004e96bc;
extern "C" unsigned long g_005f8584;
extern "C" unsigned long g_005f8586;
extern "C" unsigned long g_005f85ac;
extern "C" unsigned long g_005f85b0;
void BLDownLoadSaveAlertViewUI::tick(float p1)
{
  return;
}

BLDownLoadSaveAlertViewUI::~BLDownLoadSaveAlertViewUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLDownLoadSaveAlertViewUI::create()
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
  *piVar1 = *(int *)(g_004e96bc + 0x4e963e) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_20 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
  piVar3 = (int *)((BLDownLoadSaveAlertView *)this)->create();
  piVar1[9] = (int)piVar3;
  iVar5 = (int)*(int *)&(*piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
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

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLDownLoadSaveAlertViewUI::Show()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x12d)),(intptr_t)0);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005f8584 + (intptr_t)(g_005f85ac))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005f8586 + (intptr_t)(g_005f85b0))),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x12d);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->showUIById(0x12d);
  return;
}

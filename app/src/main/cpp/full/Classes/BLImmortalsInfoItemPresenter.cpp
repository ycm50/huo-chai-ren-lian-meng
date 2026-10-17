#include "BLImmortalsInfoItemPresenter.h"
#include "CCObject.h"
#include "BLImmortalsInfoItemView.h"
#include "DataManager.h"
#include "ImmortalsRoleData.h"
#include "PlayerData.h"
#include "Toast.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long UNK_0056a9ca;
extern "C" unsigned long UNK_0056aa00;
extern "C" unsigned long UNK_0056aa32;
extern "C" unsigned long UNK_0056ac1c;
extern "C" unsigned long UNK_0056ac4e;
extern "C" unsigned long UNK_0056acc0;
extern "C" unsigned long UNK_0056ad60;
extern "C" unsigned long UNK_0056ad6a;
extern "C" unsigned long _UNK_0056a9d8;
extern "C" unsigned long _UNK_0056aa0c;
extern "C" unsigned long _UNK_0056aa3c;
extern "C" unsigned long _UNK_0056ad90;
extern "C" unsigned long _UNK_0056ad94;
extern "C" unsigned long _UNK_0056ad98;
extern "C" unsigned long _UNK_0056ad9c;
extern "C" unsigned long _UNK_0056ada0;
extern "C" unsigned long g_0056a9ca;
extern "C" unsigned long g_0056a9d8;
extern "C" unsigned long g_0056aa00;
extern "C" unsigned long g_0056aa0c;
extern "C" unsigned long g_0056aa32;
extern "C" unsigned long g_0056aa3c;
extern "C" unsigned long g_0056ac1c;
extern "C" unsigned long g_0056ac4e;
extern "C" unsigned long g_0056acc0;
extern "C" unsigned long g_0056ad60;
extern "C" unsigned long g_0056ad6a;
extern "C" unsigned long g_0056ad90;
extern "C" unsigned long g_0056ad94;
extern "C" unsigned long g_0056ad98;
extern "C" unsigned long g_0056ad9c;
extern "C" unsigned long g_0056ada0;
BLImmortalsInfoItemPresenter::~BLImmortalsInfoItemPresenter()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsInfoItemPresenter::BLImmortalsInfoItemPresenter()
{
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(5)) = 0;
  return;
}



void BLImmortalsInfoItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLImmortalsInfoItemPresenter::initWithView(BLImmortalsInfoItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0056aa32 + (intptr_t)(g_0056aa3c))),0,
             0x20);
  return;
}

int * BLImmortalsInfoItemPresenter::create(BLImmortalsInfoItemView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x18);
  ::new ((void *)piVar1) BLImmortalsInfoItemPresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLImmortalsInfoItemPresenter *)(piVar1))->initWithView((BLImmortalsInfoItemView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}

void BLImmortalsInfoItemPresenter::onEquipItem(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

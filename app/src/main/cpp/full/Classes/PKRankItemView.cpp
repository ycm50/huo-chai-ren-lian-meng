#include "PKRankItemView.h"
#include "BLLeakUtils.h"
#include "PKData.h"
#include "PKRankItemPresenter.h"
#include "TipView.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061e6b0;
extern "C" unsigned long UNK_0061e6f4;
extern "C" unsigned long UNK_0061e738;
extern "C" unsigned long UNK_0061e760;
extern "C" unsigned long UNK_0061e7e0;
extern "C" unsigned long UNK_0061e80e;
extern "C" unsigned long UNK_0061e8b2;
extern "C" unsigned long UNK_0061e8bc;
extern "C" unsigned long UNK_0061e950;
extern "C" unsigned long UNK_0061e96c;
extern "C" unsigned long UNK_0061e980;
extern "C" unsigned long UNK_0061e9f2;
extern "C" unsigned long UNK_0061ea1e;
extern "C" unsigned long UNK_0061ea2a;
extern "C" unsigned long UNK_0061eadc;
extern "C" unsigned long UNK_0061ebc2;
extern "C" unsigned long UNK_0061ec62;
extern "C" unsigned long UNK_0061ec66;
extern "C" unsigned long UNK_0061ece8;
extern "C" unsigned long UNK_0061ed12;
extern "C" unsigned long UNK_0061ef5c;
extern "C" unsigned long UNK_0061f020;
extern "C" unsigned long UNK_0061f022;
extern "C" unsigned long UNK_0061f032;
extern "C" unsigned long _UNK_0061e724;
extern "C" unsigned long _UNK_0061e728;
extern "C" unsigned long _UNK_0061e73c;
extern "C" unsigned long _UNK_0061e764;
extern "C" unsigned long _UNK_0061e838;
extern "C" unsigned long _UNK_0061e83c;
extern "C" unsigned long _UNK_0061ea54;
extern "C" unsigned long _UNK_0061ea58;
extern "C" unsigned long _UNK_0061ea5c;
extern "C" unsigned long _UNK_0061ea60;
extern "C" unsigned long _UNK_0061ea64;
extern "C" unsigned long _UNK_0061ea68;
extern "C" unsigned long _UNK_0061ea6c;
extern "C" unsigned long _UNK_0061ea70;
extern "C" unsigned long _UNK_0061ea74;
extern "C" unsigned long _UNK_0061ea78;
extern "C" unsigned long _UNK_0061ea7c;
extern "C" unsigned long _UNK_0061eebc;
extern "C" unsigned long _UNK_0061eec0;
extern "C" unsigned long _UNK_0061eec4;
extern "C" unsigned long _UNK_0061eec8;
extern "C" unsigned long _UNK_0061eecc;
extern "C" unsigned long _UNK_0061eed0;
extern "C" unsigned long _UNK_0061eed4;
extern "C" unsigned long _UNK_0061eed8;
extern "C" unsigned long _UNK_0061eedc;
extern "C" unsigned long _UNK_0061eee0;
extern "C" unsigned long _UNK_0061eee4;
extern "C" unsigned long _UNK_0061eee8;
extern "C" unsigned long _UNK_0061eeec;
extern "C" unsigned long _UNK_0061eef0;
extern "C" unsigned long _UNK_0061f104;
extern "C" unsigned long _UNK_0061f108;
extern "C" unsigned long _UNK_0061f10c;
extern "C" unsigned long _UNK_0061f110;
extern "C" unsigned long _UNK_0061f114;
extern "C" unsigned long _UNK_0061f118;
extern "C" unsigned long _UNK_0061f11c;
extern "C" unsigned long _UNK_0061f120;
extern "C" unsigned long _UNK_0061f124;
extern "C" unsigned long _UNK_0061f128;
extern "C" unsigned long g_0061e6b0;
extern "C" unsigned long g_0061e6f4;
extern "C" unsigned long g_0061e724;
extern "C" unsigned long g_0061e728;
extern "C" unsigned long g_0061e738;
extern "C" unsigned long g_0061e73c;
extern "C" unsigned long g_0061e760;
extern "C" unsigned long g_0061e764;
extern "C" unsigned long g_0061e7e0;
extern "C" unsigned long g_0061e80e;
extern "C" unsigned long g_0061e838;
extern "C" unsigned long g_0061e83c;
extern "C" unsigned long g_0061e8b2;
extern "C" unsigned long g_0061e8bc;
extern "C" unsigned long g_0061e950;
extern "C" unsigned long g_0061e96c;
extern "C" unsigned long g_0061e980;
extern "C" unsigned long g_0061e9f2;
extern "C" unsigned long g_0061ea1e;
extern "C" unsigned long g_0061ea2a;
extern "C" unsigned long g_0061ea54;
extern "C" unsigned long g_0061ea58;
extern "C" unsigned long g_0061ea5c;
extern "C" unsigned long g_0061ea60;
extern "C" unsigned long g_0061ea64;
extern "C" unsigned long g_0061ea68;
extern "C" unsigned long g_0061ea6c;
extern "C" unsigned long g_0061ea70;
extern "C" unsigned long g_0061ea74;
extern "C" unsigned long g_0061ea78;
extern "C" unsigned long g_0061ea7c;
extern "C" unsigned long g_0061eadc;
extern "C" unsigned long g_0061ebc2;
extern "C" unsigned long g_0061ec62;
extern "C" unsigned long g_0061ec66;
extern "C" unsigned long g_0061ece8;
extern "C" unsigned long g_0061ed12;
extern "C" unsigned long g_0061eebc;
extern "C" unsigned long g_0061eec0;
extern "C" unsigned long g_0061eec4;
extern "C" unsigned long g_0061eec8;
extern "C" unsigned long g_0061eecc;
extern "C" unsigned long g_0061eed0;
extern "C" unsigned long g_0061eed4;
extern "C" unsigned long g_0061eed8;
extern "C" unsigned long g_0061eedc;
extern "C" unsigned long g_0061eee0;
extern "C" unsigned long g_0061eee4;
extern "C" unsigned long g_0061eee8;
extern "C" unsigned long g_0061eeec;
extern "C" unsigned long g_0061eef0;
extern "C" unsigned long g_0061ef5c;
extern "C" unsigned long g_0061f020;
extern "C" unsigned long g_0061f022;
extern "C" unsigned long g_0061f032;
extern "C" unsigned long g_0061f104;
extern "C" unsigned long g_0061f108;
extern "C" unsigned long g_0061f10c;
extern "C" unsigned long g_0061f110;
extern "C" unsigned long g_0061f114;
extern "C" unsigned long g_0061f118;
extern "C" unsigned long g_0061f11c;
extern "C" unsigned long g_0061f120;
extern "C" unsigned long g_0061f124;
extern "C" unsigned long g_0061f128;
int PKRankItemView::getIndex() const
{
  return *(undefined4 *)(((int)this) + 300);
}

void PKRankItemView::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 300) = p1;
  return;
}

PKRankItemView::~PKRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061e6b0 + g_0061e724);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061e6f4 + g_0061e728,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKRankItemView::PKRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0061e7e0 + g_0061e838);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061e80e + g_0061e83c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PKRankItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}


void PKRankItemView::onEnter()
{
  ((PKRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKRankItemView::onExit()
{
  ((PKRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void PKRankItemView::refreshData(PKAwardData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool PKRankItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "BLSweepReadyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSweepReadyPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005db8bc;
extern "C" unsigned long UNK_005db900;
extern "C" unsigned long UNK_005db944;
extern "C" unsigned long UNK_005db96c;
extern "C" unsigned long UNK_005dbaee;
extern "C" unsigned long UNK_005dbbea;
extern "C" unsigned long UNK_005dbc22;
extern "C" unsigned long UNK_005dbcfe;
extern "C" unsigned long UNK_005dbd00;
extern "C" unsigned long UNK_005dbdbc;
extern "C" unsigned long UNK_005dbdf4;
extern "C" unsigned long UNK_005dbec4;
extern "C" unsigned long UNK_005dbec6;
extern "C" unsigned long UNK_005dbf8a;
extern "C" unsigned long UNK_005dbfb6;
extern "C" unsigned long UNK_005dc086;
extern "C" unsigned long UNK_005dc088;
extern "C" unsigned long UNK_005dc0e4;
extern "C" unsigned long UNK_005dc186;
extern "C" unsigned long UNK_005dc1b2;
extern "C" unsigned long UNK_005dc266;
extern "C" unsigned long UNK_005dc290;
extern "C" unsigned long UNK_005dc39e;
extern "C" unsigned long UNK_005dc3c8;
extern "C" unsigned long UNK_005dc47c;
extern "C" unsigned long UNK_005dc4a6;
extern "C" unsigned long UNK_005dc566;
extern "C" unsigned long UNK_005dc590;
extern "C" unsigned long UNK_005dc640;
extern "C" unsigned long UNK_005dc722;
extern "C" unsigned long _DAT_005dba0c;
extern "C" unsigned long _DAT_005dba10;
extern "C" unsigned long _UNK_005db930;
extern "C" unsigned long _UNK_005db934;
extern "C" unsigned long _UNK_005db948;
extern "C" unsigned long _UNK_005db970;
extern "C" unsigned long _UNK_005dbecc;
extern "C" unsigned long _UNK_005dbed0;
extern "C" unsigned long _UNK_005dbed4;
extern "C" unsigned long _UNK_005dbed8;
extern "C" unsigned long _UNK_005dbedc;
extern "C" unsigned long _UNK_005dbee0;
extern "C" unsigned long _UNK_005dbee4;
extern "C" unsigned long _UNK_005dbee8;
extern "C" unsigned long _UNK_005dbeec;
extern "C" unsigned long _UNK_005dbef0;
extern "C" unsigned long _UNK_005dbef4;
extern "C" unsigned long _UNK_005dbef8;
extern "C" unsigned long _UNK_005dbefc;
extern "C" unsigned long _UNK_005dbf00;
extern "C" unsigned long _UNK_005dbf04;
extern "C" unsigned long _UNK_005dbf08;
extern "C" unsigned long _UNK_005dbf0c;
extern "C" unsigned long _UNK_005dbf10;
extern "C" unsigned long _UNK_005dbf14;
extern "C" unsigned long _UNK_005dc330;
extern "C" unsigned long _UNK_005dc334;
extern "C" unsigned long _UNK_005dc338;
extern "C" unsigned long _UNK_005dc33c;
extern "C" unsigned long _UNK_005dc340;
extern "C" unsigned long _UNK_005dc344;
extern "C" unsigned long _UNK_005dc348;
extern "C" unsigned long _UNK_005dc34c;
extern "C" unsigned long _UNK_005dc350;
extern "C" unsigned long _UNK_005dc354;
extern "C" unsigned long _UNK_005dc358;
extern "C" unsigned long _UNK_005dc35c;
extern "C" unsigned long _UNK_005dc360;
extern "C" unsigned long _UNK_005dc364;
extern "C" unsigned long _UNK_005dc368;
extern "C" unsigned long _UNK_005dc36c;
extern "C" unsigned long _UNK_005dc370;
extern "C" unsigned long _UNK_005dc374;
extern "C" unsigned long _UNK_005dc378;
extern "C" unsigned long _UNK_005dc780;
extern "C" unsigned long _UNK_005dc784;
extern "C" unsigned long _UNK_005dc788;
extern "C" unsigned long _UNK_005dc78c;
extern "C" unsigned long _UNK_005dc790;
extern "C" unsigned long _UNK_005dc794;
extern "C" unsigned long _UNK_005dc798;
extern "C" unsigned long _UNK_005dc79c;
extern "C" unsigned long _UNK_005dc7a0;
extern "C" unsigned long _UNK_005dc7a4;
extern "C" unsigned long _UNK_005dc7a8;
extern "C" unsigned long _UNK_005dc7ac;
extern "C" unsigned long _UNK_005dc7b0;
extern "C" unsigned long _UNK_005dc7b4;
extern "C" unsigned long _UNK_005dc8e0;
extern "C" unsigned long _UNK_005dc8e4;
extern "C" unsigned long _UNK_005dc8e8;
extern "C" unsigned long g_005db8bc;
extern "C" unsigned long g_005db900;
extern "C" unsigned long g_005db930;
extern "C" unsigned long g_005db934;
extern "C" unsigned long g_005db944;
extern "C" unsigned long g_005db948;
extern "C" unsigned long g_005db96c;
extern "C" unsigned long g_005db970;
extern "C" unsigned long g_005dba0c;
extern "C" unsigned long g_005dba10;
extern "C" unsigned long g_005dbaee;
extern "C" unsigned long g_005dbbea;
extern "C" unsigned long g_005dbc22;
extern "C" unsigned long g_005dbcfe;
extern "C" unsigned long g_005dbd00;
extern "C" unsigned long g_005dbdbc;
extern "C" unsigned long g_005dbdf4;
extern "C" unsigned long g_005dbec4;
extern "C" unsigned long g_005dbec6;
extern "C" unsigned long g_005dbecc;
extern "C" unsigned long g_005dbed0;
extern "C" unsigned long g_005dbed4;
extern "C" unsigned long g_005dbed8;
extern "C" unsigned long g_005dbedc;
extern "C" unsigned long g_005dbee0;
extern "C" unsigned long g_005dbee4;
extern "C" unsigned long g_005dbee8;
extern "C" unsigned long g_005dbeec;
extern "C" unsigned long g_005dbef0;
extern "C" unsigned long g_005dbef4;
extern "C" unsigned long g_005dbef8;
extern "C" unsigned long g_005dbefc;
extern "C" unsigned long g_005dbf00;
extern "C" unsigned long g_005dbf04;
extern "C" unsigned long g_005dbf08;
extern "C" unsigned long g_005dbf0c;
extern "C" unsigned long g_005dbf10;
extern "C" unsigned long g_005dbf14;
extern "C" unsigned long g_005dbf8a;
extern "C" unsigned long g_005dbfb6;
extern "C" unsigned long g_005dc086;
extern "C" unsigned long g_005dc088;
extern "C" unsigned long g_005dc0e4;
extern "C" unsigned long g_005dc186;
extern "C" unsigned long g_005dc1b2;
extern "C" unsigned long g_005dc266;
extern "C" unsigned long g_005dc290;
extern "C" unsigned long g_005dc330;
extern "C" unsigned long g_005dc334;
extern "C" unsigned long g_005dc338;
extern "C" unsigned long g_005dc33c;
extern "C" unsigned long g_005dc340;
extern "C" unsigned long g_005dc344;
extern "C" unsigned long g_005dc348;
extern "C" unsigned long g_005dc34c;
extern "C" unsigned long g_005dc350;
extern "C" unsigned long g_005dc354;
extern "C" unsigned long g_005dc358;
extern "C" unsigned long g_005dc35c;
extern "C" unsigned long g_005dc360;
extern "C" unsigned long g_005dc364;
extern "C" unsigned long g_005dc368;
extern "C" unsigned long g_005dc36c;
extern "C" unsigned long g_005dc370;
extern "C" unsigned long g_005dc374;
extern "C" unsigned long g_005dc378;
extern "C" unsigned long g_005dc39e;
extern "C" unsigned long g_005dc3c8;
extern "C" unsigned long g_005dc47c;
extern "C" unsigned long g_005dc4a6;
extern "C" unsigned long g_005dc566;
extern "C" unsigned long g_005dc590;
extern "C" unsigned long g_005dc640;
extern "C" unsigned long g_005dc722;
extern "C" unsigned long g_005dc780;
extern "C" unsigned long g_005dc784;
extern "C" unsigned long g_005dc788;
extern "C" unsigned long g_005dc78c;
extern "C" unsigned long g_005dc790;
extern "C" unsigned long g_005dc794;
extern "C" unsigned long g_005dc798;
extern "C" unsigned long g_005dc79c;
extern "C" unsigned long g_005dc7a0;
extern "C" unsigned long g_005dc7a4;
extern "C" unsigned long g_005dc7a8;
extern "C" unsigned long g_005dc7ac;
extern "C" unsigned long g_005dc7b0;
extern "C" unsigned long g_005dc7b4;
extern "C" unsigned long g_005dc8e0;
extern "C" unsigned long g_005dc8e4;
extern "C" unsigned long g_005dc8e8;
BLSweepReadyView::~BLSweepReadyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005db8bc + g_005db930);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005db900 + g_005db934,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSweepReadyView::BLSweepReadyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005dba0c + 0x5db9b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSweepReadyView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSweepReadyView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLSweepReadyView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLSweepReadyView::onEnter()
{
  ((BLSweepReadyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepReadyView::onExit()
{
  ((BLSweepReadyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSweepReadyView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

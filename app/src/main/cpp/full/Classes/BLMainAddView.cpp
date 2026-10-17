#include "BLMainAddView.h"
#include "BLLeakUtils.h"
#include "BLMainAddPresenter.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00601fc4;
extern "C" unsigned long UNK_00602008;
extern "C" unsigned long UNK_0060204c;
extern "C" unsigned long UNK_00602074;
extern "C" unsigned long UNK_006021d4;
extern "C" unsigned long UNK_00602256;
extern "C" unsigned long UNK_006022fc;
extern "C" unsigned long UNK_006022fe;
extern "C" unsigned long UNK_0060238c;
extern "C" unsigned long UNK_00602434;
extern "C" unsigned long UNK_006024b2;
extern "C" unsigned long UNK_0060255e;
extern "C" unsigned long UNK_0060256e;
extern "C" unsigned long UNK_0060258a;
extern "C" unsigned long UNK_00602628;
extern "C" unsigned long UNK_006026f2;
extern "C" unsigned long UNK_0060271c;
extern "C" unsigned long UNK_0060272c;
extern "C" unsigned long UNK_00602748;
extern "C" unsigned long UNK_00602770;
extern "C" unsigned long UNK_00602792;
extern "C" unsigned long UNK_006027d6;
extern "C" unsigned long _DAT_00602114;
extern "C" unsigned long _DAT_00602118;
extern "C" unsigned long _UNK_00602038;
extern "C" unsigned long _UNK_0060203c;
extern "C" unsigned long _UNK_00602050;
extern "C" unsigned long _UNK_00602078;
extern "C" unsigned long _UNK_006023b0;
extern "C" unsigned long _UNK_006023b4;
extern "C" unsigned long _UNK_006023b8;
extern "C" unsigned long _UNK_006023bc;
extern "C" unsigned long _UNK_006023c0;
extern "C" unsigned long _UNK_006023c4;
extern "C" unsigned long _UNK_006023c8;
extern "C" unsigned long _UNK_006023cc;
extern "C" unsigned long _UNK_006023d0;
extern "C" unsigned long _UNK_006023d4;
extern "C" unsigned long _UNK_006023d8;
extern "C" unsigned long _UNK_006023dc;
extern "C" unsigned long _UNK_00602660;
extern "C" unsigned long _UNK_00602664;
extern "C" unsigned long _UNK_00602668;
extern "C" unsigned long _UNK_0060266c;
extern "C" unsigned long _UNK_00602670;
extern "C" unsigned long _UNK_00602674;
extern "C" unsigned long _UNK_00602678;
extern "C" unsigned long _UNK_0060267c;
extern "C" unsigned long _UNK_00602680;
extern "C" unsigned long _UNK_00602684;
extern "C" unsigned long _UNK_00602688;
extern "C" unsigned long _UNK_0060268c;
extern "C" unsigned long _UNK_00602690;
extern "C" unsigned long _UNK_006027e4;
extern "C" unsigned long _UNK_006027e8;
extern "C" unsigned long _UNK_006027ec;
extern "C" unsigned long _UNK_006027f0;
extern "C" unsigned long _UNK_006027f4;
extern "C" unsigned long _UNK_006027f8;
extern "C" unsigned long _UNK_006027fc;
extern "C" unsigned long g_00601fc4;
extern "C" unsigned long g_00602008;
extern "C" unsigned long g_00602038;
extern "C" unsigned long g_0060203c;
extern "C" unsigned long g_0060204c;
extern "C" unsigned long g_00602050;
extern "C" unsigned long g_00602074;
extern "C" unsigned long g_00602078;
extern "C" unsigned long g_00602114;
extern "C" unsigned long g_00602118;
extern "C" unsigned long g_006021d4;
extern "C" unsigned long g_00602256;
extern "C" unsigned long g_006022fc;
extern "C" unsigned long g_006022fe;
extern "C" unsigned long g_0060238c;
extern "C" unsigned long g_006023b0;
extern "C" unsigned long g_006023b4;
extern "C" unsigned long g_006023b8;
extern "C" unsigned long g_006023bc;
extern "C" unsigned long g_006023c0;
extern "C" unsigned long g_006023c4;
extern "C" unsigned long g_006023c8;
extern "C" unsigned long g_006023cc;
extern "C" unsigned long g_006023d0;
extern "C" unsigned long g_006023d4;
extern "C" unsigned long g_006023d8;
extern "C" unsigned long g_006023dc;
extern "C" unsigned long g_00602434;
extern "C" unsigned long g_006024b2;
extern "C" unsigned long g_0060255e;
extern "C" unsigned long g_0060256e;
extern "C" unsigned long g_0060258a;
extern "C" unsigned long g_00602628;
extern "C" unsigned long g_00602660;
extern "C" unsigned long g_00602664;
extern "C" unsigned long g_00602668;
extern "C" unsigned long g_0060266c;
extern "C" unsigned long g_00602670;
extern "C" unsigned long g_00602674;
extern "C" unsigned long g_00602678;
extern "C" unsigned long g_0060267c;
extern "C" unsigned long g_00602680;
extern "C" unsigned long g_00602684;
extern "C" unsigned long g_00602688;
extern "C" unsigned long g_0060268c;
extern "C" unsigned long g_00602690;
extern "C" unsigned long g_006026f2;
extern "C" unsigned long g_0060271c;
extern "C" unsigned long g_0060272c;
extern "C" unsigned long g_00602748;
extern "C" unsigned long g_00602770;
extern "C" unsigned long g_00602792;
extern "C" unsigned long g_006027d6;
extern "C" unsigned long g_006027e4;
extern "C" unsigned long g_006027e8;
extern "C" unsigned long g_006027ec;
extern "C" unsigned long g_006027f0;
extern "C" unsigned long g_006027f4;
extern "C" unsigned long g_006027f8;
extern "C" unsigned long g_006027fc;
BLMainAddView::~BLMainAddView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00601fc4 + g_00602038);
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
  func_0079e45c(&uStack_14,&g_00602008 + g_0060203c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainAddView::BLMainAddView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00602114 + 0x6020bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAddView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMainAddView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLMainAddView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}


undefined4 BLMainAddView::getBtnChangwan()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAddView::getBtnZhuanshu()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainAddView::getLayer_zsgift()
{
  return *(undefined4 *)(((int)this) + 0x114);
}


void BLMainAddView::onEnter()
{
  ((BLMainAddPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAddView::onExit()
{
  ((BLMainAddPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMainAddView::initGiftChangWan()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAddView::initGiftZhuanShu()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainAddView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

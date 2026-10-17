#include "PetInfoView.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "PetInfoPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060f4c4;
extern "C" unsigned long UNK_0060f508;
extern "C" unsigned long UNK_0060f54c;
extern "C" unsigned long UNK_0060f574;
extern "C" unsigned long UNK_0060f58c;
extern "C" unsigned long UNK_0060f5ba;
extern "C" unsigned long UNK_0060f662;
extern "C" unsigned long UNK_0060f73c;
extern "C" unsigned long UNK_0060f8a2;
extern "C" unsigned long UNK_0060f978;
extern "C" unsigned long UNK_0060f97a;
extern "C" unsigned long UNK_0060fa06;
extern "C" unsigned long UNK_0060fb72;
extern "C" unsigned long UNK_0060fc6a;
extern "C" unsigned long UNK_0060fc6e;
extern "C" unsigned long UNK_0060fd22;
extern "C" unsigned long UNK_0060fdc4;
extern "C" unsigned long UNK_0060fe02;
extern "C" unsigned long UNK_0060fedc;
extern "C" unsigned long UNK_0060ffbe;
extern "C" unsigned long UNK_0061011e;
extern "C" unsigned long UNK_00610120;
extern "C" unsigned long UNK_006101d2;
extern "C" unsigned long UNK_006101fc;
extern "C" unsigned long UNK_00610290;
extern "C" unsigned long UNK_00610294;
extern "C" unsigned long UNK_0061039c;
extern "C" unsigned long UNK_0061046a;
extern "C" unsigned long _UNK_0060f538;
extern "C" unsigned long _UNK_0060f53c;
extern "C" unsigned long _UNK_0060f550;
extern "C" unsigned long _UNK_0060f578;
extern "C" unsigned long _UNK_0060f5e4;
extern "C" unsigned long _UNK_0060f5e8;
extern "C" unsigned long _UNK_0060fa44;
extern "C" unsigned long _UNK_0060fa48;
extern "C" unsigned long _UNK_0060fa4c;
extern "C" unsigned long _UNK_0060fa50;
extern "C" unsigned long _UNK_0060fa54;
extern "C" unsigned long _UNK_0060fa58;
extern "C" unsigned long _UNK_0060fa5c;
extern "C" unsigned long _UNK_0060fa60;
extern "C" unsigned long _UNK_0060fa64;
extern "C" unsigned long _UNK_0060fa68;
extern "C" unsigned long _UNK_0060fa6c;
extern "C" unsigned long _UNK_0060fa70;
extern "C" unsigned long _UNK_0060fa74;
extern "C" unsigned long _UNK_0060fa78;
extern "C" unsigned long _UNK_0060fa7c;
extern "C" unsigned long _UNK_0060fa80;
extern "C" unsigned long _UNK_0060fa84;
extern "C" unsigned long _UNK_0060fa88;
extern "C" unsigned long _UNK_0060fe90;
extern "C" unsigned long _UNK_0060fe94;
extern "C" unsigned long _UNK_0060fe98;
extern "C" unsigned long _UNK_0060fe9c;
extern "C" unsigned long _UNK_0060fea0;
extern "C" unsigned long _UNK_0060fea4;
extern "C" unsigned long _UNK_0060fea8;
extern "C" unsigned long _UNK_0060feac;
extern "C" unsigned long _UNK_0060feb0;
extern "C" unsigned long _UNK_0060feb4;
extern "C" unsigned long _UNK_0060feb8;
extern "C" unsigned long _UNK_0060febc;
extern "C" unsigned long _UNK_0060fec0;
extern "C" unsigned long _UNK_0060fec4;
extern "C" unsigned long _UNK_0060fec8;
extern "C" unsigned long _UNK_0060fecc;
extern "C" unsigned long _UNK_0060fed0;
extern "C" unsigned long _UNK_006102bc;
extern "C" unsigned long _UNK_006102c0;
extern "C" unsigned long _UNK_006102c4;
extern "C" unsigned long _UNK_006102c8;
extern "C" unsigned long _UNK_006102cc;
extern "C" unsigned long _UNK_006102d0;
extern "C" unsigned long _UNK_006102d4;
extern "C" unsigned long _UNK_006102d8;
extern "C" unsigned long _UNK_006102dc;
extern "C" unsigned long _UNK_006102e0;
extern "C" unsigned long _UNK_006102e4;
extern "C" unsigned long _UNK_006102e8;
extern "C" unsigned long _UNK_006102ec;
extern "C" unsigned long _UNK_006102f0;
extern "C" unsigned long _UNK_006102f4;
extern "C" unsigned long _UNK_006102f8;
extern "C" unsigned long _UNK_00610608;
extern "C" unsigned long _UNK_0061060c;
extern "C" unsigned long _UNK_00610610;
extern "C" unsigned long _UNK_00610614;
extern "C" unsigned long _UNK_00610618;
extern "C" unsigned long _UNK_0061061c;
extern "C" unsigned long _UNK_00610620;
extern "C" unsigned long _UNK_00610624;
extern "C" unsigned long _UNK_00610628;
extern "C" unsigned long _UNK_0061062c;
extern "C" unsigned long _UNK_00610630;
extern "C" unsigned long _UNK_00610634;
extern "C" unsigned long g_0060f4c4;
extern "C" unsigned long g_0060f508;
extern "C" unsigned long g_0060f538;
extern "C" unsigned long g_0060f53c;
extern "C" unsigned long g_0060f54c;
extern "C" unsigned long g_0060f550;
extern "C" unsigned long g_0060f574;
extern "C" unsigned long g_0060f578;
extern "C" unsigned long g_0060f58c;
extern "C" unsigned long g_0060f5ba;
extern "C" unsigned long g_0060f5e4;
extern "C" unsigned long g_0060f5e8;
extern "C" unsigned long g_0060f662;
extern "C" unsigned long g_0060f73c;
extern "C" unsigned long g_0060f8a2;
extern "C" unsigned long g_0060f978;
extern "C" unsigned long g_0060f97a;
extern "C" unsigned long g_0060fa06;
extern "C" unsigned long g_0060fa44;
extern "C" unsigned long g_0060fa48;
extern "C" unsigned long g_0060fa4c;
extern "C" unsigned long g_0060fa50;
extern "C" unsigned long g_0060fa54;
extern "C" unsigned long g_0060fa58;
extern "C" unsigned long g_0060fa5c;
extern "C" unsigned long g_0060fa60;
extern "C" unsigned long g_0060fa64;
extern "C" unsigned long g_0060fa68;
extern "C" unsigned long g_0060fa6c;
extern "C" unsigned long g_0060fa70;
extern "C" unsigned long g_0060fa74;
extern "C" unsigned long g_0060fa78;
extern "C" unsigned long g_0060fa7c;
extern "C" unsigned long g_0060fa80;
extern "C" unsigned long g_0060fa84;
extern "C" unsigned long g_0060fa88;
extern "C" unsigned long g_0060fb72;
extern "C" unsigned long g_0060fc6a;
extern "C" unsigned long g_0060fc6e;
extern "C" unsigned long g_0060fd22;
extern "C" unsigned long g_0060fdc4;
extern "C" unsigned long g_0060fe02;
extern "C" unsigned long g_0060fe90;
extern "C" unsigned long g_0060fe94;
extern "C" unsigned long g_0060fe98;
extern "C" unsigned long g_0060fe9c;
extern "C" unsigned long g_0060fea0;
extern "C" unsigned long g_0060fea4;
extern "C" unsigned long g_0060fea8;
extern "C" unsigned long g_0060feac;
extern "C" unsigned long g_0060feb0;
extern "C" unsigned long g_0060feb4;
extern "C" unsigned long g_0060feb8;
extern "C" unsigned long g_0060febc;
extern "C" unsigned long g_0060fec0;
extern "C" unsigned long g_0060fec4;
extern "C" unsigned long g_0060fec8;
extern "C" unsigned long g_0060fecc;
extern "C" unsigned long g_0060fed0;
extern "C" unsigned long g_0060fedc;
extern "C" unsigned long g_0060ffbe;
extern "C" unsigned long g_0061011e;
extern "C" unsigned long g_00610120;
extern "C" unsigned long g_006101d2;
extern "C" unsigned long g_006101fc;
extern "C" unsigned long g_00610290;
extern "C" unsigned long g_00610294;
extern "C" unsigned long g_006102bc;
extern "C" unsigned long g_006102c0;
extern "C" unsigned long g_006102c4;
extern "C" unsigned long g_006102c8;
extern "C" unsigned long g_006102cc;
extern "C" unsigned long g_006102d0;
extern "C" unsigned long g_006102d4;
extern "C" unsigned long g_006102d8;
extern "C" unsigned long g_006102dc;
extern "C" unsigned long g_006102e0;
extern "C" unsigned long g_006102e4;
extern "C" unsigned long g_006102e8;
extern "C" unsigned long g_006102ec;
extern "C" unsigned long g_006102f0;
extern "C" unsigned long g_006102f4;
extern "C" unsigned long g_006102f8;
extern "C" unsigned long g_0061039c;
extern "C" unsigned long g_0061046a;
extern "C" unsigned long g_00610608;
extern "C" unsigned long g_0061060c;
extern "C" unsigned long g_00610610;
extern "C" unsigned long g_00610614;
extern "C" unsigned long g_00610618;
extern "C" unsigned long g_0061061c;
extern "C" unsigned long g_00610620;
extern "C" unsigned long g_00610624;
extern "C" unsigned long g_00610628;
extern "C" unsigned long g_0061062c;
extern "C" unsigned long g_00610630;
extern "C" unsigned long g_00610634;
PetInfoView::~PetInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060f4c4 + g_0060f538);
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
  func_0079e45c(&uStack_14,&g_0060f508 + g_0060f53c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetInfoView::PetInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060f58c + g_0060f5e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060f5ba + g_0060f5e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PetInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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


void PetInfoView::onEnter()
{
  ((PetInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PetInfoView::onExit()
{
  ((PetInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PetInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

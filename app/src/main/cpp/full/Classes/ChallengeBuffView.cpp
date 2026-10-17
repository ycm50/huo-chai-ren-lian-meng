#include "ChallengeBuffView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "ChallengeBuffPresenter.h"
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
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050b980;
extern "C" unsigned long UNK_0050b9c4;
extern "C" unsigned long UNK_0050ba08;
extern "C" unsigned long UNK_0050ba30;
extern "C" unsigned long UNK_0050ba48;
extern "C" unsigned long UNK_0050ba76;
extern "C" unsigned long UNK_0050bb1a;
extern "C" unsigned long UNK_0050bbf4;
extern "C" unsigned long UNK_0050bc9a;
extern "C" unsigned long UNK_0050bd80;
extern "C" unsigned long UNK_0050bdaa;
extern "C" unsigned long UNK_0050be66;
extern "C" unsigned long UNK_0050be98;
extern "C" unsigned long UNK_0050bf6c;
extern "C" unsigned long UNK_0050bf9c;
extern "C" unsigned long UNK_0050c09c;
extern "C" unsigned long UNK_0050c0c8;
extern "C" unsigned long UNK_0050c0fe;
extern "C" unsigned long UNK_0050c16a;
extern "C" unsigned long UNK_0050c192;
extern "C" unsigned long UNK_0050c252;
extern "C" unsigned long UNK_0050c27a;
extern "C" unsigned long UNK_0050c39c;
extern "C" unsigned long UNK_0050c3ca;
extern "C" unsigned long UNK_0050c482;
extern "C" unsigned long UNK_0050c4ac;
extern "C" unsigned long UNK_0050c582;
extern "C" unsigned long UNK_0050c5aa;
extern "C" unsigned long UNK_0050c678;
extern "C" unsigned long UNK_0050c6a0;
extern "C" unsigned long UNK_0050c7b8;
extern "C" unsigned long UNK_0050c7de;
extern "C" unsigned long UNK_0050c8bc;
extern "C" unsigned long UNK_0050c8ea;
extern "C" unsigned long UNK_0050c9c6;
extern "C" unsigned long UNK_0050c9ee;
extern "C" unsigned long _UNK_0050b9f4;
extern "C" unsigned long _UNK_0050b9f8;
extern "C" unsigned long _UNK_0050ba0c;
extern "C" unsigned long _UNK_0050ba34;
extern "C" unsigned long _UNK_0050baa0;
extern "C" unsigned long _UNK_0050baa4;
extern "C" unsigned long _UNK_0050bef4;
extern "C" unsigned long _UNK_0050bef8;
extern "C" unsigned long _UNK_0050befc;
extern "C" unsigned long _UNK_0050bf00;
extern "C" unsigned long _UNK_0050bf04;
extern "C" unsigned long _UNK_0050bf08;
extern "C" unsigned long _UNK_0050bf0c;
extern "C" unsigned long _UNK_0050bf10;
extern "C" unsigned long _UNK_0050bf14;
extern "C" unsigned long _UNK_0050bf18;
extern "C" unsigned long _UNK_0050bf1c;
extern "C" unsigned long _UNK_0050bf20;
extern "C" unsigned long _UNK_0050bf24;
extern "C" unsigned long _UNK_0050c2f8;
extern "C" unsigned long _UNK_0050c2fc;
extern "C" unsigned long _UNK_0050c300;
extern "C" unsigned long _UNK_0050c304;
extern "C" unsigned long _UNK_0050c308;
extern "C" unsigned long _UNK_0050c30c;
extern "C" unsigned long _UNK_0050c310;
extern "C" unsigned long _UNK_0050c314;
extern "C" unsigned long _UNK_0050c318;
extern "C" unsigned long _UNK_0050c31c;
extern "C" unsigned long _UNK_0050c320;
extern "C" unsigned long _UNK_0050c324;
extern "C" unsigned long _UNK_0050c328;
extern "C" unsigned long _UNK_0050c32c;
extern "C" unsigned long _UNK_0050c330;
extern "C" unsigned long _UNK_0050c334;
extern "C" unsigned long _UNK_0050c338;
extern "C" unsigned long _UNK_0050c33c;
extern "C" unsigned long _UNK_0050c340;
extern "C" unsigned long _UNK_0050c344;
extern "C" unsigned long _UNK_0050c348;
extern "C" unsigned long _UNK_0050c34c;
extern "C" unsigned long _UNK_0050c350;
extern "C" unsigned long _UNK_0050c768;
extern "C" unsigned long _UNK_0050c76c;
extern "C" unsigned long _UNK_0050c770;
extern "C" unsigned long _UNK_0050c774;
extern "C" unsigned long _UNK_0050c778;
extern "C" unsigned long _UNK_0050c77c;
extern "C" unsigned long _UNK_0050c780;
extern "C" unsigned long _UNK_0050c784;
extern "C" unsigned long _UNK_0050c788;
extern "C" unsigned long _UNK_0050c78c;
extern "C" unsigned long _UNK_0050c790;
extern "C" unsigned long _UNK_0050c794;
extern "C" unsigned long _UNK_0050c798;
extern "C" unsigned long _UNK_0050c79c;
extern "C" unsigned long _UNK_0050c7a0;
extern "C" unsigned long _UNK_0050cb2c;
extern "C" unsigned long _UNK_0050cb30;
extern "C" unsigned long _UNK_0050cb34;
extern "C" unsigned long _UNK_0050cb38;
extern "C" unsigned long _UNK_0050cb3c;
extern "C" unsigned long _UNK_0050cb40;
extern "C" unsigned long _UNK_0050cb44;
extern "C" unsigned long _UNK_0050cb48;
extern "C" unsigned long g_0050b980;
extern "C" unsigned long g_0050b9c4;
extern "C" unsigned long g_0050b9f4;
extern "C" unsigned long g_0050b9f8;
extern "C" unsigned long g_0050ba08;
extern "C" unsigned long g_0050ba0c;
extern "C" unsigned long g_0050ba30;
extern "C" unsigned long g_0050ba34;
extern "C" unsigned long g_0050ba48;
extern "C" unsigned long g_0050ba76;
extern "C" unsigned long g_0050baa0;
extern "C" unsigned long g_0050baa4;
extern "C" unsigned long g_0050bb1a;
extern "C" unsigned long g_0050bbf4;
extern "C" unsigned long g_0050bc9a;
extern "C" unsigned long g_0050bd80;
extern "C" unsigned long g_0050bdaa;
extern "C" unsigned long g_0050be66;
extern "C" unsigned long g_0050be98;
extern "C" unsigned long g_0050bef4;
extern "C" unsigned long g_0050bef8;
extern "C" unsigned long g_0050befc;
extern "C" unsigned long g_0050bf00;
extern "C" unsigned long g_0050bf04;
extern "C" unsigned long g_0050bf08;
extern "C" unsigned long g_0050bf0c;
extern "C" unsigned long g_0050bf10;
extern "C" unsigned long g_0050bf14;
extern "C" unsigned long g_0050bf18;
extern "C" unsigned long g_0050bf1c;
extern "C" unsigned long g_0050bf20;
extern "C" unsigned long g_0050bf24;
extern "C" unsigned long g_0050bf6c;
extern "C" unsigned long g_0050bf9c;
extern "C" unsigned long g_0050c09c;
extern "C" unsigned long g_0050c0c8;
extern "C" unsigned long g_0050c0fe;
extern "C" unsigned long g_0050c16a;
extern "C" unsigned long g_0050c192;
extern "C" unsigned long g_0050c252;
extern "C" unsigned long g_0050c27a;
extern "C" unsigned long g_0050c2f8;
extern "C" unsigned long g_0050c2fc;
extern "C" unsigned long g_0050c300;
extern "C" unsigned long g_0050c304;
extern "C" unsigned long g_0050c308;
extern "C" unsigned long g_0050c30c;
extern "C" unsigned long g_0050c310;
extern "C" unsigned long g_0050c314;
extern "C" unsigned long g_0050c318;
extern "C" unsigned long g_0050c31c;
extern "C" unsigned long g_0050c320;
extern "C" unsigned long g_0050c324;
extern "C" unsigned long g_0050c328;
extern "C" unsigned long g_0050c32c;
extern "C" unsigned long g_0050c330;
extern "C" unsigned long g_0050c334;
extern "C" unsigned long g_0050c338;
extern "C" unsigned long g_0050c33c;
extern "C" unsigned long g_0050c340;
extern "C" unsigned long g_0050c344;
extern "C" unsigned long g_0050c348;
extern "C" unsigned long g_0050c34c;
extern "C" unsigned long g_0050c350;
extern "C" unsigned long g_0050c39c;
extern "C" unsigned long g_0050c3ca;
extern "C" unsigned long g_0050c482;
extern "C" unsigned long g_0050c4ac;
extern "C" unsigned long g_0050c582;
extern "C" unsigned long g_0050c5aa;
extern "C" unsigned long g_0050c678;
extern "C" unsigned long g_0050c6a0;
extern "C" unsigned long g_0050c768;
extern "C" unsigned long g_0050c76c;
extern "C" unsigned long g_0050c770;
extern "C" unsigned long g_0050c774;
extern "C" unsigned long g_0050c778;
extern "C" unsigned long g_0050c77c;
extern "C" unsigned long g_0050c780;
extern "C" unsigned long g_0050c784;
extern "C" unsigned long g_0050c788;
extern "C" unsigned long g_0050c78c;
extern "C" unsigned long g_0050c790;
extern "C" unsigned long g_0050c794;
extern "C" unsigned long g_0050c798;
extern "C" unsigned long g_0050c79c;
extern "C" unsigned long g_0050c7a0;
extern "C" unsigned long g_0050c7b8;
extern "C" unsigned long g_0050c7de;
extern "C" unsigned long g_0050c8bc;
extern "C" unsigned long g_0050c8ea;
extern "C" unsigned long g_0050c9c6;
extern "C" unsigned long g_0050c9ee;
extern "C" unsigned long g_0050cb2c;
extern "C" unsigned long g_0050cb30;
extern "C" unsigned long g_0050cb34;
extern "C" unsigned long g_0050cb38;
extern "C" unsigned long g_0050cb3c;
extern "C" unsigned long g_0050cb40;
extern "C" unsigned long g_0050cb44;
extern "C" unsigned long g_0050cb48;
ChallengeBuffView::~ChallengeBuffView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050b980 + g_0050b9f4);
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
  func_0079e45c(&uStack_14,&g_0050b9c4 + g_0050b9f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeBuffView::ChallengeBuffView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0050ba48 + g_0050baa0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050ba76 + g_0050baa4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeBuffView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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


void ChallengeBuffView::onEnter()
{
  ((ChallengeBuffPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeBuffView::onExit()
{
  ((ChallengeBuffPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool ChallengeBuffView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "BLImmortalsUpgracePropertyView.h"
#include "BLImmortalsUpgracePropertyPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057485c;
extern "C" unsigned long UNK_00574890;
extern "C" unsigned long UNK_00574914;
extern "C" unsigned long UNK_0057493c;
extern "C" unsigned long UNK_00574a80;
extern "C" unsigned long UNK_00574abc;
extern "C" unsigned long UNK_0057541e;
extern "C" unsigned long UNK_00575420;
extern "C" unsigned long UNK_0057544a;
extern "C" unsigned long UNK_005754c6;
extern "C" unsigned long UNK_005754e6;
extern "C" unsigned long UNK_0057551c;
extern "C" unsigned long UNK_00575574;
extern "C" unsigned long UNK_00575578;
extern "C" unsigned long UNK_005755da;
extern "C" unsigned long UNK_005755dc;
extern "C" unsigned long UNK_0057560a;
extern "C" unsigned long _UNK_00574900;
extern "C" unsigned long _UNK_00574904;
extern "C" unsigned long _UNK_00574918;
extern "C" unsigned long _UNK_00574940;
extern "C" unsigned long _UNK_00574af8;
extern "C" unsigned long _UNK_00574afc;
extern "C" unsigned long _UNK_00575694;
extern "C" unsigned long _UNK_00575698;
extern "C" unsigned long _UNK_0057569c;
extern "C" unsigned long _UNK_005756a0;
extern "C" unsigned long _UNK_005756a4;
extern "C" unsigned long _UNK_005756a8;
extern "C" unsigned long _UNK_005756ac;
extern "C" unsigned long _UNK_005756b0;
extern "C" unsigned long _UNK_005756b4;
extern "C" unsigned long _UNK_005756b8;
extern "C" unsigned long _UNK_005756bc;
extern "C" unsigned long _UNK_005756c0;
extern "C" unsigned long _UNK_005756c4;
extern "C" unsigned long _UNK_005756c8;
extern "C" unsigned long _UNK_005756cc;
extern "C" unsigned long _UNK_005756d0;
extern "C" unsigned long g_0057485c;
extern "C" unsigned long g_00574890;
extern "C" unsigned long g_00574900;
extern "C" unsigned long g_00574904;
extern "C" unsigned long g_00574914;
extern "C" unsigned long g_00574918;
extern "C" unsigned long g_0057493c;
extern "C" unsigned long g_00574940;
extern "C" unsigned long g_00574a80;
extern "C" unsigned long g_00574abc;
extern "C" unsigned long g_00574af8;
extern "C" unsigned long g_00574afc;
extern "C" unsigned long g_0057541e;
extern "C" unsigned long g_00575420;
extern "C" unsigned long g_0057544a;
extern "C" unsigned long g_005754c6;
extern "C" unsigned long g_005754e6;
extern "C" unsigned long g_0057551c;
extern "C" unsigned long g_00575574;
extern "C" unsigned long g_00575578;
extern "C" unsigned long g_005755da;
extern "C" unsigned long g_005755dc;
extern "C" unsigned long g_0057560a;
extern "C" unsigned long g_00575694;
extern "C" unsigned long g_00575698;
extern "C" unsigned long g_0057569c;
extern "C" unsigned long g_005756a0;
extern "C" unsigned long g_005756a4;
extern "C" unsigned long g_005756a8;
extern "C" unsigned long g_005756ac;
extern "C" unsigned long g_005756b0;
extern "C" unsigned long g_005756b4;
extern "C" unsigned long g_005756b8;
extern "C" unsigned long g_005756bc;
extern "C" unsigned long g_005756c0;
extern "C" unsigned long g_005756c4;
extern "C" unsigned long g_005756c8;
extern "C" unsigned long g_005756cc;
extern "C" unsigned long g_005756d0;
BLImmortalsUpgracePropertyView::~BLImmortalsUpgracePropertyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057485c + g_00574900);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00574890 + g_00574904,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  for (puVar3 = (undefined4 *)*(int *)((int)this + 4*(0x46)); puVar3 != (undefined4 *)*(int *)((int)this + 4*(0x47));
      puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x46)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgracePropertyView::BLImmortalsUpgracePropertyView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00574a80 + g_00574af8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00574abc + g_00574afc,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  return;
}

int * BLImmortalsUpgracePropertyView::create()
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


bool BLImmortalsUpgracePropertyView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsUpgracePropertyPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsUpgracePropertyView::initView();
    ((BLImmortalsUpgracePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsUpgracePropertyView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsUpgracePropertyView::onEnter()
{
  ((BLImmortalsUpgracePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsUpgracePropertyView::onExit()
{
  ((BLImmortalsUpgracePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsUpgracePropertyView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

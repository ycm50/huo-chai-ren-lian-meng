#include "BLRenascenceMainView.h"
#include "BLLeakUtils.h"
#include "BLRenascenceMainPresenter.h"
#include "BLRenascencePropertyPresenter.h"
#include "BLRenascencePropertyView.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064f554;
extern "C" unsigned long UNK_0064f586;
extern "C" unsigned long UNK_0064f5e0;
extern "C" unsigned long UNK_0064f608;
extern "C" unsigned long UNK_0064f65c;
extern "C" unsigned long UNK_0064f68a;
extern "C" unsigned long UNK_0064f718;
extern "C" unsigned long UNK_0064f758;
extern "C" unsigned long UNK_0064f7c2;
extern "C" unsigned long UNK_0064f7c4;
extern "C" unsigned long UNK_0064f83a;
extern "C" unsigned long UNK_0064f856;
extern "C" unsigned long UNK_0064f93c;
extern "C" unsigned long UNK_0064fcae;
extern "C" unsigned long UNK_0064fcdc;
extern "C" unsigned long UNK_0064fdea;
extern "C" unsigned long UNK_0064fdec;
extern "C" unsigned long UNK_0064fe32;
extern "C" unsigned long UNK_0064fec8;
extern "C" unsigned long UNK_0064feca;
extern "C" unsigned long UNK_0064ff11;
extern "C" unsigned long _UNK_0064f5cc;
extern "C" unsigned long _UNK_0064f5d0;
extern "C" unsigned long _UNK_0064f5e4;
extern "C" unsigned long _UNK_0064f60c;
extern "C" unsigned long _UNK_0064f6b4;
extern "C" unsigned long _UNK_0064f6b8;
extern "C" unsigned long _UNK_0064fa20;
extern "C" unsigned long _UNK_0064fa24;
extern "C" unsigned long _UNK_0064fa28;
extern "C" unsigned long _UNK_0064fa2c;
extern "C" unsigned long _UNK_0064fa30;
extern "C" unsigned long _UNK_0064fa34;
extern "C" unsigned long _UNK_0064fa38;
extern "C" unsigned long _UNK_0064fa3c;
extern "C" unsigned long _UNK_0064fa40;
extern "C" unsigned long _UNK_0064fa44;
extern "C" unsigned long _UNK_0064fa48;
extern "C" unsigned long _UNK_0064fa4c;
extern "C" unsigned long _UNK_0064fcf4;
extern "C" unsigned long _UNK_0064fcf8;
extern "C" unsigned long _UNK_0064fcfc;
extern "C" unsigned long _UNK_0064fd00;
extern "C" unsigned long _UNK_0064fd04;
extern "C" unsigned long _UNK_0064ff74;
extern "C" unsigned long _UNK_0064ff78;
extern "C" unsigned long _UNK_0064ff7c;
extern "C" unsigned long _UNK_0064ff80;
extern "C" unsigned long _UNK_0064ff84;
extern "C" unsigned long _UNK_0064ff88;
extern "C" unsigned long _UNK_0064ff8c;
extern "C" unsigned long _UNK_0064ff90;
extern "C" unsigned long _UNK_0064ff94;
extern "C" unsigned long _UNK_0064ff98;
extern "C" unsigned long g_0064f554;
extern "C" unsigned long g_0064f586;
extern "C" unsigned long g_0064f5cc;
extern "C" unsigned long g_0064f5d0;
extern "C" unsigned long g_0064f5e0;
extern "C" unsigned long g_0064f5e4;
extern "C" unsigned long g_0064f608;
extern "C" unsigned long g_0064f60c;
extern "C" unsigned long g_0064f65c;
extern "C" unsigned long g_0064f68a;
extern "C" unsigned long g_0064f6b4;
extern "C" unsigned long g_0064f6b8;
extern "C" unsigned long g_0064f718;
extern "C" unsigned long g_0064f758;
extern "C" unsigned long g_0064f7c2;
extern "C" unsigned long g_0064f7c4;
extern "C" unsigned long g_0064f83a;
extern "C" unsigned long g_0064f856;
extern "C" unsigned long g_0064f93c;
extern "C" unsigned long g_0064fa20;
extern "C" unsigned long g_0064fa24;
extern "C" unsigned long g_0064fa28;
extern "C" unsigned long g_0064fa2c;
extern "C" unsigned long g_0064fa30;
extern "C" unsigned long g_0064fa34;
extern "C" unsigned long g_0064fa38;
extern "C" unsigned long g_0064fa3c;
extern "C" unsigned long g_0064fa40;
extern "C" unsigned long g_0064fa44;
extern "C" unsigned long g_0064fa48;
extern "C" unsigned long g_0064fa4c;
extern "C" unsigned long g_0064fcae;
extern "C" unsigned long g_0064fcdc;
extern "C" unsigned long g_0064fcf4;
extern "C" unsigned long g_0064fcf8;
extern "C" unsigned long g_0064fcfc;
extern "C" unsigned long g_0064fd00;
extern "C" unsigned long g_0064fd04;
extern "C" unsigned long g_0064fdea;
extern "C" unsigned long g_0064fdec;
extern "C" unsigned long g_0064fe32;
extern "C" unsigned long g_0064fec8;
extern "C" unsigned long g_0064feca;
extern "C" unsigned long g_0064ff11;
extern "C" unsigned long g_0064ff74;
extern "C" unsigned long g_0064ff78;
extern "C" unsigned long g_0064ff7c;
extern "C" unsigned long g_0064ff80;
extern "C" unsigned long g_0064ff84;
extern "C" unsigned long g_0064ff88;
extern "C" unsigned long g_0064ff8c;
extern "C" unsigned long g_0064ff90;
extern "C" unsigned long g_0064ff94;
extern "C" unsigned long g_0064ff98;
BLRenascenceMainView::~BLRenascenceMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064f554 + g_0064f5cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064f586 + g_0064f5d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceMainView::BLRenascenceMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0064f65c + g_0064f6b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064f68a + g_0064f6b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLRenascenceMainView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascenceMainPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceMainView::initView();
    ((BLRenascenceMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceMainView*)((int)this));
  }
  return iVar1;
}

void BLRenascenceMainView::onEnter()
{
  ((BLRenascenceMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRenascenceMainView::onExit()
{
  ((BLRenascenceMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRenascenceMainView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

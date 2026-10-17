#include "BLOnSaleView.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLOnSalePresenter.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e910c;
extern "C" unsigned long UNK_005e913e;
extern "C" unsigned long UNK_005e9198;
extern "C" unsigned long UNK_005e91c0;
extern "C" unsigned long UNK_005e9278;
extern "C" unsigned long UNK_005e92a0;
extern "C" unsigned long UNK_005e937c;
extern "C" unsigned long UNK_005e945e;
extern "C" unsigned long UNK_005e9480;
extern "C" unsigned long UNK_005e974c;
extern "C" unsigned long UNK_005e975e;
extern "C" unsigned long UNK_005e9770;
extern "C" unsigned long UNK_005e9782;
extern "C" unsigned long UNK_005e9794;
extern "C" unsigned long UNK_005e97d2;
extern "C" unsigned long UNK_005e97ee;
extern "C" unsigned long UNK_005e9844;
extern "C" unsigned long UNK_005e9845;
extern "C" unsigned long UNK_005e9846;
extern "C" unsigned long UNK_005e986b;
extern "C" unsigned long UNK_005e986c;
extern "C" unsigned long UNK_005e986d;
extern "C" unsigned long _DAT_005e9260;
extern "C" unsigned long _DAT_005e9264;
extern "C" unsigned long _UNK_005e9184;
extern "C" unsigned long _UNK_005e9188;
extern "C" unsigned long _UNK_005e919c;
extern "C" unsigned long _UNK_005e91c4;
extern "C" unsigned long _UNK_005e956c;
extern "C" unsigned long _UNK_005e9570;
extern "C" unsigned long _UNK_005e9574;
extern "C" unsigned long _UNK_005e9578;
extern "C" unsigned long _UNK_005e957c;
extern "C" unsigned long _UNK_005e9580;
extern "C" unsigned long _UNK_005e9584;
extern "C" unsigned long _UNK_005e9588;
extern "C" unsigned long _UNK_005e958c;
extern "C" unsigned long _UNK_005e9590;
extern "C" unsigned long _UNK_005e9594;
extern "C" unsigned long _UNK_005e9598;
extern "C" unsigned long _UNK_005e96d0;
extern "C" unsigned long _UNK_005e96d4;
extern "C" unsigned long _UNK_005e96d8;
extern "C" unsigned long _UNK_005e96dc;
extern "C" unsigned long _UNK_005e96e0;
extern "C" unsigned long _UNK_005e96e4;
extern "C" unsigned long _UNK_005e9a64;
extern "C" unsigned long _UNK_005e9a68;
extern "C" unsigned long _UNK_005e9a6c;
extern "C" unsigned long _UNK_005e9a70;
extern "C" unsigned long _UNK_005e9a74;
extern "C" unsigned long _UNK_005e9a78;
extern "C" unsigned long _UNK_005e9a7c;
extern "C" unsigned long _UNK_005e9a80;
extern "C" unsigned long _UNK_005e9a84;
extern "C" unsigned long _UNK_005e9a88;
extern "C" unsigned long _UNK_005e9a8c;
extern "C" unsigned long _UNK_005e9a90;
extern "C" unsigned long _UNK_005e9a94;
extern "C" unsigned long _UNK_005e9a98;
extern "C" unsigned long g_005e910c;
extern "C" unsigned long g_005e913e;
extern "C" unsigned long g_005e9184;
extern "C" unsigned long g_005e9188;
extern "C" unsigned long g_005e9198;
extern "C" unsigned long g_005e919c;
extern "C" unsigned long g_005e91c0;
extern "C" unsigned long g_005e91c4;
extern "C" unsigned long g_005e9260;
extern "C" unsigned long g_005e9264;
extern "C" unsigned long g_005e9278;
extern "C" unsigned long g_005e92a0;
extern "C" unsigned long g_005e937c;
extern "C" unsigned long g_005e945e;
extern "C" unsigned long g_005e9480;
extern "C" unsigned long g_005e956c;
extern "C" unsigned long g_005e9570;
extern "C" unsigned long g_005e9574;
extern "C" unsigned long g_005e9578;
extern "C" unsigned long g_005e957c;
extern "C" unsigned long g_005e9580;
extern "C" unsigned long g_005e9584;
extern "C" unsigned long g_005e9588;
extern "C" unsigned long g_005e958c;
extern "C" unsigned long g_005e9590;
extern "C" unsigned long g_005e9594;
extern "C" unsigned long g_005e9598;
extern "C" unsigned long g_005e96d0;
extern "C" unsigned long g_005e96d4;
extern "C" unsigned long g_005e96d8;
extern "C" unsigned long g_005e96dc;
extern "C" unsigned long g_005e96e0;
extern "C" unsigned long g_005e96e4;
extern "C" unsigned long g_005e974c;
extern "C" unsigned long g_005e975e;
extern "C" unsigned long g_005e9770;
extern "C" unsigned long g_005e9782;
extern "C" unsigned long g_005e9794;
extern "C" unsigned long g_005e97d2;
extern "C" unsigned long g_005e97ee;
extern "C" unsigned long g_005e9844;
extern "C" unsigned long g_005e9845;
extern "C" unsigned long g_005e9846;
extern "C" unsigned long g_005e986b;
extern "C" unsigned long g_005e986c;
extern "C" unsigned long g_005e986d;
extern "C" unsigned long g_005e9a64;
extern "C" unsigned long g_005e9a68;
extern "C" unsigned long g_005e9a6c;
extern "C" unsigned long g_005e9a70;
extern "C" unsigned long g_005e9a74;
extern "C" unsigned long g_005e9a78;
extern "C" unsigned long g_005e9a7c;
extern "C" unsigned long g_005e9a80;
extern "C" unsigned long g_005e9a84;
extern "C" unsigned long g_005e9a88;
extern "C" unsigned long g_005e9a8c;
extern "C" unsigned long g_005e9a90;
extern "C" unsigned long g_005e9a94;
extern "C" unsigned long g_005e9a98;
BLOnSaleView::~BLOnSaleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e910c + g_005e9184);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e913e + g_005e9188,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOnSaleView::BLOnSaleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005e9260 + 0x5e9208);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLOnSaleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLOnSaleView::initUI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLOnSaleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLOnSaleView::getListButton()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLOnSaleView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLOnSaleView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLOnSaleView::initListButton(std::vector<EnumOnSaleType, std::allocator<EnumOnSaleType>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLOnSaleView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    BLOnSaleView::initUI();
    uVar2 = (undefined4)(((BLOnSalePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    ((BLOnSalePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLOnSaleView*)((int)this));
  }
  return iVar1;
}

void BLOnSaleView::onEnter()
{
  ((BLOnSalePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLOnSaleView::onExit()
{
  ((BLOnSalePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

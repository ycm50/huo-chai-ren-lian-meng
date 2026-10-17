#include "BLReChargePresenter.h"
#include "BLLeakUtils.h"
#include "BLReChargeItemPresenter.h"
#include "BLReChargeItemView.h"
#include "BLReChargeView.h"
#include "BLTableView.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "ReChargeData.h"
#include "UIManager.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e714(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT17(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00644878;
extern "C" unsigned long UNK_00644890;
extern "C" unsigned long UNK_006448a8;
extern "C" unsigned long UNK_006448c0;
extern "C" unsigned long UNK_006448d8;
extern "C" unsigned long UNK_00644934;
extern "C" unsigned long UNK_00644968;
extern "C" unsigned long UNK_006449ac;
extern "C" unsigned long UNK_006449d4;
extern "C" unsigned long UNK_00644a46;
extern "C" unsigned long UNK_00644aa2;
extern "C" unsigned long UNK_00644aec;
extern "C" unsigned long UNK_00644b02;
extern "C" unsigned long UNK_00644b28;
extern "C" unsigned long UNK_00644b4e;
extern "C" unsigned long UNK_00644c5c;
extern "C" unsigned long UNK_00644c70;
extern "C" unsigned long UNK_00644c82;
extern "C" unsigned long UNK_00644cae;
extern "C" unsigned long UNK_00644cca;
extern "C" unsigned long UNK_00644cea;
extern "C" unsigned long UNK_00644d0a;
extern "C" unsigned long UNK_00644dfc;
extern "C" unsigned long UNK_00644e0c;
extern "C" unsigned long UNK_00644e36;
extern "C" unsigned long UNK_00644e92;
extern "C" unsigned long UNK_00644f0c;
extern "C" unsigned long UNK_00644f22;
extern "C" unsigned long UNK_00644f5e;
extern "C" unsigned long UNK_00644f6e;
extern "C" unsigned long UNK_00644f9c;
extern "C" unsigned long _UNK_0064487c;
extern "C" unsigned long _UNK_00644894;
extern "C" unsigned long _UNK_006448ac;
extern "C" unsigned long _UNK_006448c4;
extern "C" unsigned long _UNK_006448dc;
extern "C" unsigned long _UNK_00644998;
extern "C" unsigned long _UNK_0064499c;
extern "C" unsigned long _UNK_006449b0;
extern "C" unsigned long _UNK_006449d8;
extern "C" unsigned long _UNK_00644a58;
extern "C" unsigned long _UNK_00644ab4;
extern "C" unsigned long _UNK_00644ad8;
extern "C" unsigned long _UNK_00644adc;
extern "C" unsigned long _UNK_00644af0;
extern "C" unsigned long _UNK_00644b84;
extern "C" unsigned long _UNK_00644b88;
extern "C" unsigned long _UNK_00644b8c;
extern "C" unsigned long _UNK_00644dcc;
extern "C" unsigned long _UNK_00644dd0;
extern "C" unsigned long _UNK_00644dd4;
extern "C" unsigned long _UNK_00644dd8;
extern "C" unsigned long _UNK_00644ddc;
extern "C" unsigned long _UNK_00644de0;
extern "C" unsigned long _UNK_00644de4;
extern "C" unsigned long _UNK_00644ee8;
extern "C" unsigned long _UNK_00644eec;
extern "C" unsigned long _UNK_00644ef0;
extern "C" unsigned long _UNK_00644ef4;
extern "C" unsigned long _UNK_00644ef8;
extern "C" unsigned long _UNK_00644efc;
extern "C" unsigned long _UNK_00644f10;
extern "C" unsigned long _UNK_006451b0;
extern "C" unsigned long _UNK_006451b4;
extern "C" unsigned long _UNK_006451b8;
extern "C" unsigned long _UNK_006451bc;
extern "C" unsigned long _UNK_006451c0;
extern "C" unsigned long _UNK_006451c4;
extern "C" unsigned long _UNK_006451c8;
extern "C" unsigned long _UNK_006451cc;
extern "C" unsigned long g_00644878;
extern "C" unsigned long g_0064487c;
extern "C" unsigned long g_00644890;
extern "C" unsigned long g_00644894;
extern "C" unsigned long g_006448a8;
extern "C" unsigned long g_006448ac;
extern "C" unsigned long g_006448c0;
extern "C" unsigned long g_006448c4;
extern "C" unsigned long g_006448d8;
extern "C" unsigned long g_006448dc;
extern "C" unsigned long g_00644934;
extern "C" unsigned long g_00644968;
extern "C" unsigned long g_00644998;
extern "C" unsigned long g_0064499c;
extern "C" unsigned long g_006449ac;
extern "C" unsigned long g_006449b0;
extern "C" unsigned long g_006449d4;
extern "C" unsigned long g_006449d8;
extern "C" unsigned long g_00644a46;
extern "C" unsigned long g_00644a58;
extern "C" unsigned long g_00644aa2;
extern "C" unsigned long g_00644ab4;
extern "C" unsigned long g_00644ad8;
extern "C" unsigned long g_00644adc;
extern "C" unsigned long g_00644aec;
extern "C" unsigned long g_00644af0;
extern "C" unsigned long g_00644b02;
extern "C" unsigned long g_00644b28;
extern "C" unsigned long g_00644b4e;
extern "C" unsigned long g_00644b84;
extern "C" unsigned long g_00644b88;
extern "C" unsigned long g_00644b8c;
extern "C" unsigned long g_00644c5c;
extern "C" unsigned long g_00644c70;
extern "C" unsigned long g_00644c82;
extern "C" unsigned long g_00644cae;
extern "C" unsigned long g_00644cca;
extern "C" unsigned long g_00644cea;
extern "C" unsigned long g_00644d0a;
extern "C" unsigned long g_00644dcc;
extern "C" unsigned long g_00644dd0;
extern "C" unsigned long g_00644dd4;
extern "C" unsigned long g_00644dd8;
extern "C" unsigned long g_00644ddc;
extern "C" unsigned long g_00644de0;
extern "C" unsigned long g_00644de4;
extern "C" unsigned long g_00644dfc;
extern "C" unsigned long g_00644e0c;
extern "C" unsigned long g_00644e36;
extern "C" unsigned long g_00644e92;
extern "C" unsigned long g_00644ee8;
extern "C" unsigned long g_00644eec;
extern "C" unsigned long g_00644ef0;
extern "C" unsigned long g_00644ef4;
extern "C" unsigned long g_00644ef8;
extern "C" unsigned long g_00644efc;
extern "C" unsigned long g_00644f0c;
extern "C" unsigned long g_00644f10;
extern "C" unsigned long g_00644f22;
extern "C" unsigned long g_00644f5e;
extern "C" unsigned long g_00644f6e;
extern "C" unsigned long g_00644f9c;
extern "C" unsigned long g_006451b0;
extern "C" unsigned long g_006451b4;
extern "C" unsigned long g_006451b8;
extern "C" unsigned long g_006451bc;
extern "C" unsigned long g_006451c0;
extern "C" unsigned long g_006451c4;
extern "C" unsigned long g_006451c8;
extern "C" unsigned long g_006451cc;
ReChargeData* BLReChargePresenter::getReChargeData() const
{
  return (ReChargeData*)(*(undefined4 *)(((int)this) + 0x28));
}

bool BLReChargePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLReChargePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLReChargePresenter::tick(float p1)
{
  return;
}

BLReChargePresenter::~BLReChargePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00644934 + g_00644998);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x54;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x84;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x94;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00644968 + g_0064499c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLReChargePresenter::setReChargeData(ReChargeData* p1)
{
  if (*(int *)(((int)this) + 0x28) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x28) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  }
  return;
}

undefined8 BLReChargePresenter::onDuanPay(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_14 = (undefined1) (undefined4)(intptr_t)p1;
  uStack_13 = (undefined1)((uint)p1 >> 8);
  uStack_12 = (undefined1)((uint)p1 >> 0x10);
  uStack_11 = (undefined1)((uint)p1 >> 0x18);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtbSanPay();
  uStack_14 = 100;
  uStack_13 = 100;
  uStack_12 = 100;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_14);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtnDuanPay();
  uStack_14 = 0xff;
  uStack_13 = 0xff;
  uStack_12 = 0xff;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_14);
  *(undefined4 *)(((int)this) + 0x24) = 1;
  uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar2)->setIntegerForKey((char const*)&g_00644a46 + g_00644a58, 1);
  uVar2 = (undefined4)(((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewReCharge());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return ghidra_CONCAT17(uStack_11,ghidra_CONCAT16(uStack_12,ghidra_CONCAT15(uStack_13,ghidra_CONCAT14(uStack_14,((int)this)))));
}


void BLReChargePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x46);
  return;
}

undefined4 BLReChargePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

BLReChargePresenter::BLReChargePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_00644b02 + g_00644b84);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x54;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x94;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x84;
  *(int *)((int)this + 4*(9)) = 1;
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar1)->setIntegerForKey((char const*)&g_00644b28 + g_00644b88, 1);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00644b4e + g_00644b8c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(10)) = 0;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLReChargePresenter::create(BLReChargeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLReChargePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLReChargePresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLReChargePresenter::onOtherPay(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_14 = (undefined1) (undefined4)(intptr_t)p1;
  uStack_13 = (undefined1)((uint)p1 >> 8);
  uStack_12 = (undefined1)((uint)p1 >> 0x10);
  uStack_11 = (undefined1)((uint)p1 >> 0x18);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtnDuanPay();
  uStack_14 = 100;
  uStack_13 = 100;
  uStack_12 = 100;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_14);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtbSanPay();
  uStack_14 = 0xff;
  uStack_13 = 0xff;
  uStack_12 = 0xff;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_14);
  *(undefined4 *)(((int)this) + 0x24) = 2;
  uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar2)->setIntegerForKey((char const*)&g_00644aa2 + g_00644ab4, 2);
  uVar2 = (undefined4)(((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewReCharge());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}

void BLReChargePresenter::onExchange(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  
  uStack_1c = (undefined1) (undefined4)(intptr_t)p1;
  uStack_1b = (undefined1)((uint)p1 >> 8);
  uStack_1a = (undefined1)((uint)p1 >> 0x10);
  uStack_19 = (undefined1)((uint)p1 >> 0x18);
  uStack_18 = (undefined4)(p2);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtnDuanPay();
  uStack_1c = 100;
  uStack_1b = 100;
  uStack_1a = 100;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
  piVar1 = (int *)((BLReChargeView *)*(undefined4 *)(((int)this) + 0x20))->getBtbSanPay();
  uStack_1c = 100;
  uStack_1b = 100;
  uStack_1a = 100;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
  ((PlatformHelp *)this)->getExchangePay();
  return;
}

undefined4 BLReChargePresenter::initWithView(BLReChargeView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 BLReChargePresenter::numOfCellItem(BLTableView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLReChargePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLPack4399Presenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLTableView.h"
#include "BLPack4399View.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPack4399ItemView.h"
#include "CCJson.h"
#include "Pack4399Data.h"
#include "StringJsonManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00548eac;
extern "C" unsigned long UNK_00548ec4;
extern "C" unsigned long UNK_00548edc;
extern "C" unsigned long UNK_00548ef4;
extern "C" unsigned long UNK_00548f0c;
extern "C" unsigned long UNK_00548f64;
extern "C" unsigned long UNK_00548f8a;
extern "C" unsigned long UNK_00548fd0;
extern "C" unsigned long UNK_00548ff8;
extern "C" unsigned long UNK_00549024;
extern "C" unsigned long UNK_0054904a;
extern "C" unsigned long UNK_00549084;
extern "C" unsigned long UNK_005490cc;
extern "C" unsigned long UNK_005490ce;
extern "C" unsigned long UNK_00549132;
extern "C" unsigned long UNK_00549160;
extern "C" unsigned long UNK_00549192;
extern "C" unsigned long UNK_005491f6;
extern "C" unsigned long UNK_00549236;
extern "C" unsigned long UNK_00549290;
extern "C" unsigned long UNK_005492cc;
extern "C" unsigned long UNK_0054931e;
extern "C" unsigned long UNK_005493a0;
extern "C" unsigned long UNK_005493ea;
extern "C" unsigned long UNK_005494e6;
extern "C" unsigned long UNK_00549534;
extern "C" unsigned long UNK_005495d0;
extern "C" unsigned long UNK_0054963a;
extern "C" unsigned long UNK_0054965a;
extern "C" unsigned long UNK_00549706;
extern "C" unsigned long UNK_00549714;
extern "C" unsigned long UNK_00549756;
extern "C" unsigned long UNK_005497c0;
extern "C" unsigned long UNK_005497e6;
extern "C" unsigned long _UNK_00548eb0;
extern "C" unsigned long _UNK_00548ec8;
extern "C" unsigned long _UNK_00548ee0;
extern "C" unsigned long _UNK_00548ef8;
extern "C" unsigned long _UNK_00548f10;
extern "C" unsigned long _UNK_00548fbc;
extern "C" unsigned long _UNK_00548fc0;
extern "C" unsigned long _UNK_00548fd4;
extern "C" unsigned long _UNK_00548ffc;
extern "C" unsigned long _UNK_00549010;
extern "C" unsigned long _UNK_00549014;
extern "C" unsigned long _UNK_00549028;
extern "C" unsigned long _UNK_005490b0;
extern "C" unsigned long _UNK_005490b4;
extern "C" unsigned long _UNK_005490d8;
extern "C" unsigned long _UNK_005490dc;
extern "C" unsigned long _UNK_00549458;
extern "C" unsigned long _UNK_0054945c;
extern "C" unsigned long _UNK_00549460;
extern "C" unsigned long _UNK_00549464;
extern "C" unsigned long _UNK_00549468;
extern "C" unsigned long _UNK_0054946c;
extern "C" unsigned long _UNK_00549470;
extern "C" unsigned long _UNK_00549474;
extern "C" unsigned long _UNK_00549478;
extern "C" unsigned long _UNK_0054947c;
extern "C" unsigned long _UNK_00549480;
extern "C" unsigned long _UNK_00549484;
extern "C" unsigned long _UNK_00549488;
extern "C" unsigned long _UNK_0054948c;
extern "C" unsigned long _UNK_00549490;
extern "C" unsigned long _UNK_00549494;
extern "C" unsigned long _UNK_00549498;
extern "C" unsigned long _UNK_0054949c;
extern "C" unsigned long _UNK_0054959c;
extern "C" unsigned long _UNK_005495a0;
extern "C" unsigned long _UNK_005495a4;
extern "C" unsigned long _UNK_005495a8;
extern "C" unsigned long _UNK_005495c0;
extern "C" unsigned long _UNK_005495d4;
extern "C" unsigned long _UNK_005496a4;
extern "C" unsigned long _UNK_005496a8;
extern "C" unsigned long _UNK_005498a0;
extern "C" unsigned long _UNK_005498a4;
extern "C" unsigned long _UNK_005498a8;
extern "C" unsigned long _UNK_005498ac;
extern "C" unsigned long _UNK_005498b0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00548eac;
extern "C" unsigned long g_00548eb0;
extern "C" unsigned long g_00548ec4;
extern "C" unsigned long g_00548ec8;
extern "C" unsigned long g_00548edc;
extern "C" unsigned long g_00548ee0;
extern "C" unsigned long g_00548ef4;
extern "C" unsigned long g_00548ef8;
extern "C" unsigned long g_00548f0c;
extern "C" unsigned long g_00548f10;
extern "C" unsigned long g_00548f64;
extern "C" unsigned long g_00548f8a;
extern "C" unsigned long g_00548fbc;
extern "C" unsigned long g_00548fc0;
extern "C" unsigned long g_00548fd0;
extern "C" unsigned long g_00548fd4;
extern "C" unsigned long g_00548ff8;
extern "C" unsigned long g_00548ffc;
extern "C" unsigned long g_00549010;
extern "C" unsigned long g_00549014;
extern "C" unsigned long g_00549024;
extern "C" unsigned long g_00549028;
extern "C" unsigned long g_0054904a;
extern "C" unsigned long g_00549084;
extern "C" unsigned long g_005490b0;
extern "C" unsigned long g_005490b4;
extern "C" unsigned long g_005490cc;
extern "C" unsigned long g_005490ce;
extern "C" unsigned long g_005490d8;
extern "C" unsigned long g_005490dc;
extern "C" unsigned long g_00549132;
extern "C" unsigned long g_00549160;
extern "C" unsigned long g_00549192;
extern "C" unsigned long g_005491f6;
extern "C" unsigned long g_00549236;
extern "C" unsigned long g_00549290;
extern "C" unsigned long g_005492cc;
extern "C" unsigned long g_0054931e;
extern "C" unsigned long g_005493a0;
extern "C" unsigned long g_005493ea;
extern "C" unsigned long g_00549458;
extern "C" unsigned long g_0054945c;
extern "C" unsigned long g_00549460;
extern "C" unsigned long g_00549464;
extern "C" unsigned long g_00549468;
extern "C" unsigned long g_0054946c;
extern "C" unsigned long g_00549470;
extern "C" unsigned long g_00549474;
extern "C" unsigned long g_00549478;
extern "C" unsigned long g_0054947c;
extern "C" unsigned long g_00549480;
extern "C" unsigned long g_00549484;
extern "C" unsigned long g_00549488;
extern "C" unsigned long g_0054948c;
extern "C" unsigned long g_00549490;
extern "C" unsigned long g_00549494;
extern "C" unsigned long g_00549498;
extern "C" unsigned long g_0054949c;
extern "C" unsigned long g_005494e6;
extern "C" unsigned long g_00549534;
extern "C" unsigned long g_0054959c;
extern "C" unsigned long g_005495a0;
extern "C" unsigned long g_005495a4;
extern "C" unsigned long g_005495a8;
extern "C" unsigned long g_005495c0;
extern "C" unsigned long g_005495d0;
extern "C" unsigned long g_005495d4;
extern "C" unsigned long g_0054963a;
extern "C" unsigned long g_0054965a;
extern "C" unsigned long g_005496a4;
extern "C" unsigned long g_005496a8;
extern "C" unsigned long g_00549706;
extern "C" unsigned long g_00549714;
extern "C" unsigned long g_00549756;
extern "C" unsigned long g_005497c0;
extern "C" unsigned long g_005497e6;
extern "C" unsigned long g_005498a0;
extern "C" unsigned long g_005498a4;
extern "C" unsigned long g_005498a8;
extern "C" unsigned long g_005498ac;
extern "C" unsigned long g_005498b0;
bool BLPack4399Presenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPack4399Presenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPack4399Presenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPack4399Presenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPack4399Presenter::tick(float p1)
{
  return;
}

void BLPack4399Presenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLPack4399Presenter::~BLPack4399Presenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00548f64 + g_00548fbc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00548f8a + g_00548fc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLPack4399Presenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLPack4399Presenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x294);
  return;
}

BLPack4399Presenter::BLPack4399Presenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0054904a + g_005490b0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00549084 + g_005490b4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLPack4399Presenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLPack4399Presenter::onServerInfo(cocos2d::CCObject* p1)
{
  BLPack4399Presenter::resetUI();
  return;
}





int * BLPack4399Presenter::create(BLPack4399View* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar2 = ((BLPack4399Presenter *)piVar1)->initWithView((BLPack4399View*)((int)this));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLPack4399Presenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPack4399Presenter::resetUI()
{
  undefined4 p4 = 0;

  ((BLTableView *)this)->reloadData(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x120), 0);
  return;
}

void BLPack4399Presenter::onRequestComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLPack4399Presenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<Pack4399Data, 0> *)this)->instance());
  return g_005495c0 * (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2);
}

void BLPack4399Presenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPack4399Presenter::initWithView(BLPack4399View* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0054963a + (intptr_t)(g_005496a4))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0054965a + (intptr_t)(g_005496a8))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  BLPack4399Presenter::resetUI();
  ((sir::singleton<Pack4399Data, 0> *)this)->instance();
  ((Pack4399Data *)this)->getDataFromServer();
  return 1;
}

void BLPack4399Presenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

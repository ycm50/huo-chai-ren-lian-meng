#include "BLLuckShopDataInfoPresenter.h"
#include "BLFileUtils.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopDataInfoView.h"
#include "DataCacheManager.h"
#include "LuckShopData.h"
#include "LuckShopItem.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00582108;
extern "C" unsigned long UNK_00582126;
extern "C" unsigned long UNK_00582178;
extern "C" unsigned long UNK_005821a0;
extern "C" unsigned long UNK_005821b6;
extern "C" unsigned long UNK_005821c6;
extern "C" unsigned long UNK_00582202;
extern "C" unsigned long UNK_0058229a;
extern "C" unsigned long UNK_005822ba;
extern "C" unsigned long UNK_005822e2;
extern "C" unsigned long UNK_005823b6;
extern "C" unsigned long UNK_00582416;
extern "C" unsigned long UNK_005825b0;
extern "C" unsigned long UNK_005825b2;
extern "C" unsigned long UNK_005825e6;
extern "C" unsigned long UNK_005826c6;
extern "C" unsigned long UNK_00582702;
extern "C" unsigned long UNK_00582746;
extern "C" unsigned long UNK_00582758;
extern "C" unsigned long _UNK_00582164;
extern "C" unsigned long _UNK_00582168;
extern "C" unsigned long _UNK_0058217c;
extern "C" unsigned long _UNK_005821a4;
extern "C" unsigned long _UNK_00582234;
extern "C" unsigned long _UNK_00582238;
extern "C" unsigned long _UNK_0058223c;
extern "C" unsigned long _UNK_005822c8;
extern "C" unsigned long _UNK_005822cc;
extern "C" unsigned long _UNK_00582678;
extern "C" unsigned long _UNK_0058267c;
extern "C" unsigned long _UNK_00582680;
extern "C" unsigned long _UNK_00582684;
extern "C" unsigned long _UNK_00582688;
extern "C" unsigned long _UNK_0058268c;
extern "C" unsigned long _UNK_0058278c;
extern "C" unsigned long _UNK_00582790;
extern "C" unsigned long _UNK_00582794;
extern "C" unsigned long _UNK_00582798;
extern "C" unsigned long g_00582108;
extern "C" unsigned long g_00582126;
extern "C" unsigned long g_00582164;
extern "C" unsigned long g_00582168;
extern "C" unsigned long g_00582178;
extern "C" unsigned long g_0058217c;
extern "C" unsigned long g_005821a0;
extern "C" unsigned long g_005821a4;
extern "C" unsigned long g_005821b6;
extern "C" unsigned long g_005821c6;
extern "C" unsigned long g_00582202;
extern "C" unsigned long g_00582234;
extern "C" unsigned long g_00582238;
extern "C" unsigned long g_0058223c;
extern "C" unsigned long g_0058229a;
extern "C" unsigned long g_005822ba;
extern "C" unsigned long g_005822c8;
extern "C" unsigned long g_005822cc;
extern "C" unsigned long g_005822e2;
extern "C" unsigned long g_005823b6;
extern "C" unsigned long g_00582416;
extern "C" unsigned long g_005825b0;
extern "C" unsigned long g_005825b2;
extern "C" unsigned long g_005825e6;
extern "C" unsigned long g_00582678;
extern "C" unsigned long g_0058267c;
extern "C" unsigned long g_00582680;
extern "C" unsigned long g_00582684;
extern "C" unsigned long g_00582688;
extern "C" unsigned long g_0058268c;
extern "C" unsigned long g_005826c6;
extern "C" unsigned long g_00582702;
extern "C" unsigned long g_00582746;
extern "C" unsigned long g_00582758;
extern "C" unsigned long g_0058278c;
extern "C" unsigned long g_00582790;
extern "C" unsigned long g_00582794;
extern "C" unsigned long g_00582798;
bool BLLuckShopDataInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckShopDataInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckShopDataInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckShopDataInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckShopDataInfoPresenter::tick(float p1)
{
  return;
}

void BLLuckShopDataInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb4);
  return;
}

BLLuckShopDataInfoPresenter::~BLLuckShopDataInfoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00582108 + g_00582164);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00582126 + g_00582168,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((LuckShopItem *)((int)this) + 7)->~LuckShopItem();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckShopDataInfoPresenter::BLLuckShopDataInfoPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005821b6 + g_00582234);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  iVar4 = g_00582238;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_005821c6 + iVar4) + 0xc;
  *(int *)((int)this + 4*(9)) = iVar4;
  *(int *)((int)this + 4*(10)) = iVar4;
  *(int *)((int)this + 4*(0xb)) = iVar4;
  *(int *)((int)this + 4*(0xc)) = iVar4;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(7)) = -1;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00582202 + g_0058223c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLLuckShopDataInfoPresenter::create(BLLuckShopDataInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLLuckShopDataInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLLuckShopDataInfoPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLLuckShopDataInfoPresenter::initWithView(BLLuckShopDataInfoView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLLuckShopDataInfoView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058229a + g_005822c8),0,0x20);
  piVar1 = (int *)((BLLuckShopDataInfoView *)*(undefined4 *)(((int)this) + 0x18))->getBtnBuy();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005822ba + g_005822cc),0,0x20);
  return;
}

void BLLuckShopDataInfoPresenter::initWithItemData(LuckShopItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopDataInfoPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

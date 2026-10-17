#include "BLMineGainsPresenter.h"
#include "BLLeakUtils.h"
#include "BLMineGainsView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MineData.h"
#include "MineitemData.h"
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
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00626a30;
extern "C" unsigned long UNK_00626a48;
extern "C" unsigned long UNK_00626a60;
extern "C" unsigned long UNK_00626ad0;
extern "C" unsigned long UNK_00626aea;
extern "C" unsigned long UNK_00626b30;
extern "C" unsigned long UNK_00626b58;
extern "C" unsigned long UNK_00626b6e;
extern "C" unsigned long UNK_00626ba4;
extern "C" unsigned long UNK_00626db2;
extern "C" unsigned long UNK_00626ed8;
extern "C" unsigned long UNK_00626fa0;
extern "C" unsigned long UNK_00626fbe;
extern "C" unsigned long UNK_00626ff0;
extern "C" unsigned long _UNK_00626a34;
extern "C" unsigned long _UNK_00626a4c;
extern "C" unsigned long _UNK_00626a64;
extern "C" unsigned long _UNK_00626b1c;
extern "C" unsigned long _UNK_00626b20;
extern "C" unsigned long _UNK_00626b34;
extern "C" unsigned long _UNK_00626b5c;
extern "C" unsigned long _UNK_00626bd0;
extern "C" unsigned long _UNK_00626bd4;
extern "C" unsigned long _UNK_00626f7c;
extern "C" unsigned long _UNK_00626f80;
extern "C" unsigned long _UNK_00626f84;
extern "C" unsigned long _UNK_00626f88;
extern "C" unsigned long _UNK_00626f8c;
extern "C" unsigned long _UNK_00626fcc;
extern "C" unsigned long _UNK_00626fd0;
extern "C" unsigned long _UNK_00627000;
extern "C" unsigned long _UNK_00627004;
extern "C" unsigned long g_00626a30;
extern "C" unsigned long g_00626a34;
extern "C" unsigned long g_00626a48;
extern "C" unsigned long g_00626a4c;
extern "C" unsigned long g_00626a60;
extern "C" unsigned long g_00626a64;
extern "C" unsigned long g_00626ad0;
extern "C" unsigned long g_00626aea;
extern "C" unsigned long g_00626b1c;
extern "C" unsigned long g_00626b20;
extern "C" unsigned long g_00626b30;
extern "C" unsigned long g_00626b34;
extern "C" unsigned long g_00626b58;
extern "C" unsigned long g_00626b5c;
extern "C" unsigned long g_00626b6e;
extern "C" unsigned long g_00626ba4;
extern "C" unsigned long g_00626bd0;
extern "C" unsigned long g_00626bd4;
extern "C" unsigned long g_00626db2;
extern "C" unsigned long g_00626ed8;
extern "C" unsigned long g_00626f7c;
extern "C" unsigned long g_00626f80;
extern "C" unsigned long g_00626f84;
extern "C" unsigned long g_00626f88;
extern "C" unsigned long g_00626f8c;
extern "C" unsigned long g_00626fa0;
extern "C" unsigned long g_00626fbe;
extern "C" unsigned long g_00626fcc;
extern "C" unsigned long g_00626fd0;
extern "C" unsigned long g_00626ff0;
extern "C" unsigned long g_00627000;
extern "C" unsigned long g_00627004;
void BLMineGainsPresenter::tick(float p1)
{
  return;
}

bool BLMineGainsPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineGainsPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineGainsPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineGainsPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLMineGainsPresenter::~BLMineGainsPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00626ad0 + g_00626b1c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00626aea + g_00626b20,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineGainsPresenter::BLMineGainsPresenter()
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
  iVar3 = *(int *)(&g_00626b6e + g_00626bd0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00626ba4 + g_00626bd4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMineGainsPresenter::onEnter()
{
  return;
}

void BLMineGainsPresenter::onExit()
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

undefined4 BLMineGainsPresenter::create(BLMineGainsView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMineGainsPresenter::getRewardDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineGainsPresenter::initWithView(BLMineGainsView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineGainsPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  uVar3 = (undefined4)(*(undefined4 *)(iVar1 + 0x40));
  uVar2 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)uVar2)->ClearOneMinebyid(uVar3);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_00626ff0 + (intptr_t)(g_00627000)));
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(g_00627004);
  return;
}

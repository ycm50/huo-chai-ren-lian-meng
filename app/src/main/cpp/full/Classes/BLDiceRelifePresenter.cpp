#include "BLDiceRelifePresenter.h"
#include "BLDiceRelifeView.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062279c;
extern "C" unsigned long UNK_006227b4;
extern "C" unsigned long UNK_006227cc;
extern "C" unsigned long UNK_0062283c;
extern "C" unsigned long UNK_00622856;
extern "C" unsigned long UNK_0062289c;
extern "C" unsigned long UNK_006228c4;
extern "C" unsigned long UNK_006228ec;
extern "C" unsigned long UNK_00622902;
extern "C" unsigned long UNK_00622938;
extern "C" unsigned long UNK_006229de;
extern "C" unsigned long UNK_006229fe;
extern "C" unsigned long UNK_00622a1c;
extern "C" unsigned long UNK_00622a3a;
extern "C" unsigned long UNK_00622aa6;
extern "C" unsigned long UNK_00622ad8;
extern "C" unsigned long UNK_00622b04;
extern "C" unsigned long UNK_00622b24;
extern "C" unsigned long UNK_00622b56;
extern "C" unsigned long UNK_00622b82;
extern "C" unsigned long UNK_00622c08;
extern "C" unsigned long UNK_00622c4a;
extern "C" unsigned long UNK_00622c54;
extern "C" unsigned long UNK_00622cb8;
extern "C" unsigned long UNK_00622cfa;
extern "C" unsigned long UNK_00622d04;
extern "C" unsigned long _UNK_006227a0;
extern "C" unsigned long _UNK_006227b8;
extern "C" unsigned long _UNK_006227d0;
extern "C" unsigned long _UNK_00622888;
extern "C" unsigned long _UNK_0062288c;
extern "C" unsigned long _UNK_006228a0;
extern "C" unsigned long _UNK_006228c8;
extern "C" unsigned long _UNK_006228dc;
extern "C" unsigned long _UNK_006228f0;
extern "C" unsigned long _UNK_00622964;
extern "C" unsigned long _UNK_00622968;
extern "C" unsigned long _UNK_00622bb8;
extern "C" unsigned long _UNK_00622bbc;
extern "C" unsigned long _UNK_00622bc0;
extern "C" unsigned long _UNK_00622bc4;
extern "C" unsigned long _UNK_00622bc8;
extern "C" unsigned long _UNK_00622bcc;
extern "C" unsigned long _UNK_00622bd0;
extern "C" unsigned long _UNK_00622bd4;
extern "C" unsigned long _UNK_00622bd8;
extern "C" unsigned long _UNK_00622bdc;
extern "C" unsigned long _UNK_00622c78;
extern "C" unsigned long _UNK_00622c7c;
extern "C" unsigned long _UNK_00622c80;
extern "C" unsigned long _UNK_00622c84;
extern "C" unsigned long _UNK_00622c88;
extern "C" unsigned long _UNK_00622c8c;
extern "C" unsigned long _UNK_00622d28;
extern "C" unsigned long _UNK_00622d2c;
extern "C" unsigned long _UNK_00622d30;
extern "C" unsigned long _UNK_00622d34;
extern "C" unsigned long _UNK_00622d38;
extern "C" unsigned long _UNK_00622d3c;
extern "C" unsigned long g_0062279c;
extern "C" unsigned long g_006227a0;
extern "C" unsigned long g_006227b4;
extern "C" unsigned long g_006227b8;
extern "C" unsigned long g_006227cc;
extern "C" unsigned long g_006227d0;
extern "C" unsigned long g_0062283c;
extern "C" unsigned long g_00622856;
extern "C" unsigned long g_00622888;
extern "C" unsigned long g_0062288c;
extern "C" unsigned long g_0062289c;
extern "C" unsigned long g_006228a0;
extern "C" unsigned long g_006228c4;
extern "C" unsigned long g_006228c8;
extern "C" unsigned long g_006228dc;
extern "C" unsigned long g_006228ec;
extern "C" unsigned long g_006228f0;
extern "C" unsigned long g_00622902;
extern "C" unsigned long g_00622938;
extern "C" unsigned long g_00622964;
extern "C" unsigned long g_00622968;
extern "C" unsigned long g_006229de;
extern "C" unsigned long g_006229fe;
extern "C" unsigned long g_00622a1c;
extern "C" unsigned long g_00622a3a;
extern "C" unsigned long g_00622aa6;
extern "C" unsigned long g_00622ad8;
extern "C" unsigned long g_00622b04;
extern "C" unsigned long g_00622b24;
extern "C" unsigned long g_00622b56;
extern "C" unsigned long g_00622b82;
extern "C" unsigned long g_00622bb8;
extern "C" unsigned long g_00622bbc;
extern "C" unsigned long g_00622bc0;
extern "C" unsigned long g_00622bc4;
extern "C" unsigned long g_00622bc8;
extern "C" unsigned long g_00622bcc;
extern "C" unsigned long g_00622bd0;
extern "C" unsigned long g_00622bd4;
extern "C" unsigned long g_00622bd8;
extern "C" unsigned long g_00622bdc;
extern "C" unsigned long g_00622c08;
extern "C" unsigned long g_00622c4a;
extern "C" unsigned long g_00622c54;
extern "C" unsigned long g_00622c78;
extern "C" unsigned long g_00622c7c;
extern "C" unsigned long g_00622c80;
extern "C" unsigned long g_00622c84;
extern "C" unsigned long g_00622c88;
extern "C" unsigned long g_00622c8c;
extern "C" unsigned long g_00622cb8;
extern "C" unsigned long g_00622cfa;
extern "C" unsigned long g_00622d04;
extern "C" unsigned long g_00622d28;
extern "C" unsigned long g_00622d2c;
extern "C" unsigned long g_00622d30;
extern "C" unsigned long g_00622d34;
extern "C" unsigned long g_00622d38;
extern "C" unsigned long g_00622d3c;
void BLDiceRelifePresenter::tick(float p1)
{
  return;
}

bool BLDiceRelifePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDiceRelifePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRelifePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRelifePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLDiceRelifePresenter::~BLDiceRelifePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062283c + g_00622888);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00622856 + g_0062288c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDiceRelifePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006228dc);
  return;
}

void BLDiceRelifePresenter::onBtnRestar(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006228ec + g_006228f0);
  return;
}

BLDiceRelifePresenter::BLDiceRelifePresenter()
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
  iVar3 = *(int *)(&g_00622902 + g_00622964);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00622938 + g_00622968,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLDiceRelifePresenter::onEnter()
{
  return;
}

void BLDiceRelifePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLDiceRelifePresenter::create(BLDiceRelifeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLDiceRelifePresenter::initWithView(BLDiceRelifeView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDiceRelifePresenter::onBtnRelease(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDiceRelifePresenter::onBtnRelife(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

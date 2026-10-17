#include "BLSignedItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSignedItemView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "SignedData.h"
#include "Toast.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006876d8;
extern "C" unsigned long UNK_006876f0;
extern "C" unsigned long UNK_00687708;
extern "C" unsigned long UNK_0068777c;
extern "C" unsigned long UNK_00687796;
extern "C" unsigned long UNK_006877dc;
extern "C" unsigned long UNK_00687804;
extern "C" unsigned long UNK_0068781a;
extern "C" unsigned long UNK_0068783a;
extern "C" unsigned long UNK_006878ca;
extern "C" unsigned long UNK_006878fc;
extern "C" unsigned long UNK_006879ee;
extern "C" unsigned long UNK_00687acc;
extern "C" unsigned long UNK_00687acd;
extern "C" unsigned long UNK_00687ace;
extern "C" unsigned long UNK_00687aec;
extern "C" unsigned long UNK_00687b94;
extern "C" unsigned long UNK_00687d12;
extern "C" unsigned long UNK_00687d26;
extern "C" unsigned long UNK_00687d32;
extern "C" unsigned long UNK_00687dc2;
extern "C" unsigned long UNK_00687dc6;
extern "C" unsigned long UNK_00687de4;
extern "C" unsigned long UNK_00687e30;
extern "C" unsigned long UNK_00687ec8;
extern "C" unsigned long UNK_00687fdc;
extern "C" unsigned long UNK_00687fde;
extern "C" unsigned long UNK_00687ff6;
extern "C" unsigned long UNK_00688084;
extern "C" unsigned long UNK_006881ec;
extern "C" unsigned long UNK_00688206;
extern "C" unsigned long UNK_00688262;
extern "C" unsigned long UNK_00688264;
extern "C" unsigned long UNK_00688394;
extern "C" unsigned long _UNK_006876dc;
extern "C" unsigned long _UNK_006876f4;
extern "C" unsigned long _UNK_0068770c;
extern "C" unsigned long _UNK_006877c8;
extern "C" unsigned long _UNK_006877cc;
extern "C" unsigned long _UNK_006877e0;
extern "C" unsigned long _UNK_00687808;
extern "C" unsigned long _UNK_0068787c;
extern "C" unsigned long _UNK_00687880;
extern "C" unsigned long _UNK_006878d0;
extern "C" unsigned long _UNK_00687904;
extern "C" unsigned long _UNK_00687cf4;
extern "C" unsigned long _UNK_00687cf8;
extern "C" unsigned long _UNK_00687cfc;
extern "C" unsigned long _UNK_00687d00;
extern "C" unsigned long _UNK_00688044;
extern "C" unsigned long _UNK_00688048;
extern "C" unsigned long _UNK_0068804c;
extern "C" unsigned long _UNK_00688050;
extern "C" unsigned long _UNK_00688054;
extern "C" unsigned long _UNK_00688058;
extern "C" unsigned long _UNK_0068805c;
extern "C" unsigned long _UNK_00688060;
extern "C" unsigned long _UNK_00688064;
extern "C" unsigned long _UNK_00688068;
extern "C" unsigned long _UNK_0068806c;
extern "C" unsigned long _UNK_006881cc;
extern "C" unsigned long _UNK_006881d0;
extern "C" unsigned long _UNK_006881d4;
extern "C" unsigned long _UNK_006881d8;
extern "C" unsigned long _UNK_006881dc;
extern "C" unsigned long _UNK_006883d8;
extern "C" unsigned long _UNK_006883dc;
extern "C" unsigned long _UNK_006883e0;
extern "C" unsigned long _UNK_006883e4;
extern "C" unsigned long _UNK_006883e8;
extern "C" unsigned long _UNK_006883ec;
extern "C" unsigned long g_006876d8;
extern "C" unsigned long g_006876dc;
extern "C" unsigned long g_006876f0;
extern "C" unsigned long g_006876f4;
extern "C" unsigned long g_00687708;
extern "C" unsigned long g_0068770c;
extern "C" unsigned long g_0068777c;
extern "C" unsigned long g_00687796;
extern "C" unsigned long g_006877c8;
extern "C" unsigned long g_006877cc;
extern "C" unsigned long g_006877dc;
extern "C" unsigned long g_006877e0;
extern "C" unsigned long g_00687804;
extern "C" unsigned long g_00687808;
extern "C" unsigned long g_0068781a;
extern "C" unsigned long g_0068783a;
extern "C" unsigned long g_0068787c;
extern "C" unsigned long g_00687880;
extern "C" unsigned long g_006878ca;
extern "C" unsigned long g_006878d0;
extern "C" unsigned long g_006878fc;
extern "C" unsigned long g_00687904;
extern "C" unsigned long g_006879ee;
extern "C" unsigned long g_00687acc;
extern "C" unsigned long g_00687acd;
extern "C" unsigned long g_00687ace;
extern "C" unsigned long g_00687aec;
extern "C" unsigned long g_00687b94;
extern "C" unsigned long g_00687cf4;
extern "C" unsigned long g_00687cf8;
extern "C" unsigned long g_00687cfc;
extern "C" unsigned long g_00687d00;
extern "C" unsigned long g_00687d12;
extern "C" unsigned long g_00687d26;
extern "C" unsigned long g_00687d32;
extern "C" unsigned long g_00687dc2;
extern "C" unsigned long g_00687dc6;
extern "C" unsigned long g_00687de4;
extern "C" unsigned long g_00687e30;
extern "C" unsigned long g_00687ec8;
extern "C" unsigned long g_00687fdc;
extern "C" unsigned long g_00687fde;
extern "C" unsigned long g_00687ff6;
extern "C" unsigned long g_00688044;
extern "C" unsigned long g_00688048;
extern "C" unsigned long g_0068804c;
extern "C" unsigned long g_00688050;
extern "C" unsigned long g_00688054;
extern "C" unsigned long g_00688058;
extern "C" unsigned long g_0068805c;
extern "C" unsigned long g_00688060;
extern "C" unsigned long g_00688064;
extern "C" unsigned long g_00688068;
extern "C" unsigned long g_0068806c;
extern "C" unsigned long g_00688084;
extern "C" unsigned long g_006881cc;
extern "C" unsigned long g_006881d0;
extern "C" unsigned long g_006881d4;
extern "C" unsigned long g_006881d8;
extern "C" unsigned long g_006881dc;
extern "C" unsigned long g_006881ec;
extern "C" unsigned long g_00688206;
extern "C" unsigned long g_00688262;
extern "C" unsigned long g_00688264;
extern "C" unsigned long g_00688394;
extern "C" unsigned long g_006883d8;
extern "C" unsigned long g_006883dc;
extern "C" unsigned long g_006883e0;
extern "C" unsigned long g_006883e4;
extern "C" unsigned long g_006883e8;
extern "C" unsigned long g_006883ec;
int BLSignedItemPresenter::getItemState() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}


bool BLSignedItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSignedItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedItemPresenter::tick(float p1)
{
  return;
}

BLSignedItemPresenter::~BLSignedItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068777c + g_006877c8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00687796 + g_006877cc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSignedItemPresenter::BLSignedItemPresenter()
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
  iVar3 = *(int *)(&g_0068781a + g_0068787c);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  *(int *)((int)this + 4*(7)) = 2;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(8)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068783a + g_00687880,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLSignedItemPresenter::create(BLSignedItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSignedItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006878ca + g_006878d0);
  return;
}

void BLSignedItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLSignedItemPresenter::setItemState(BLSignedItemPresenter::SignedState * p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

void BLSignedItemPresenter::initWithView(BLSignedItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSignedItemView *)p1)->getIconBtn();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006878fc + g_00687904),0,0x20);
  return;
}

void BLSignedItemPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSignedItemPresenter::initWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSignedItemPresenter::onIconBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSignedItemPresenter::onSignedSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

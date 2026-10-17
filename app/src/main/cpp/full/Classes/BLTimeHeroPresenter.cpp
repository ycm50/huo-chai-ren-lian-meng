#include "BLTimeHeroPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLTimeHeroItemPresenter.h"
#include "BLTimeHeroItemView.h"
#include "BLTimeHeroView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "GiftItemData.h"
#include "HEROGIFTITEM.h"
#include "ItemData.h"
#include "PagedScrollView.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079eac4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054a5c0;
extern "C" unsigned long UNK_0054a5d8;
extern "C" unsigned long UNK_0054a5f0;
extern "C" unsigned long UNK_0054a608;
extern "C" unsigned long UNK_0054a664;
extern "C" unsigned long UNK_0054a67e;
extern "C" unsigned long UNK_0054a6c4;
extern "C" unsigned long UNK_0054a6ec;
extern "C" unsigned long UNK_0054a77e;
extern "C" unsigned long UNK_0054a7ac;
extern "C" unsigned long UNK_0054a826;
extern "C" unsigned long UNK_0054a844;
extern "C" unsigned long UNK_0054a846;
extern "C" unsigned long UNK_0054ac4a;
extern "C" unsigned long UNK_0054ad28;
extern "C" unsigned long UNK_0054ad29;
extern "C" unsigned long UNK_0054ad2a;
extern "C" unsigned long UNK_0054ad48;
extern "C" unsigned long UNK_0054adf0;
extern "C" unsigned long UNK_0054af0c;
extern "C" unsigned long UNK_0054b08c;
extern "C" unsigned long UNK_0054b0a0;
extern "C" unsigned long UNK_0054b0ac;
extern "C" unsigned long UNK_0054b2e4;
extern "C" unsigned long UNK_0054b2f4;
extern "C" unsigned long UNK_0054b320;
extern "C" unsigned long UNK_0054b3f2;
extern "C" unsigned long UNK_0054b40a;
extern "C" unsigned long UNK_0054b41a;
extern "C" unsigned long UNK_0054b428;
extern "C" unsigned long UNK_0054b434;
extern "C" unsigned long UNK_0054b44c;
extern "C" unsigned long UNK_0054b45c;
extern "C" unsigned long UNK_0054b46a;
extern "C" unsigned long UNK_0054b480;
extern "C" unsigned long UNK_0054b536;
extern "C" unsigned long UNK_0054b556;
extern "C" unsigned long UNK_0054b598;
extern "C" unsigned long UNK_0054b6c8;
extern "C" unsigned long UNK_0054b6d8;
extern "C" unsigned long UNK_0054b700;
extern "C" unsigned long UNK_0054b724;
extern "C" unsigned long UNK_0054b726;
extern "C" unsigned long UNK_0054b740;
extern "C" unsigned long UNK_0054b742;
extern "C" unsigned long UNK_0054b75a;
extern "C" unsigned long _UNK_0054a5c4;
extern "C" unsigned long _UNK_0054a5dc;
extern "C" unsigned long _UNK_0054a5f4;
extern "C" unsigned long _UNK_0054a60c;
extern "C" unsigned long _UNK_0054a6b0;
extern "C" unsigned long _UNK_0054a6b4;
extern "C" unsigned long _UNK_0054a6c8;
extern "C" unsigned long _UNK_0054a6f0;
extern "C" unsigned long _UNK_0054a76c;
extern "C" unsigned long _UNK_0054a7d8;
extern "C" unsigned long _UNK_0054a7dc;
extern "C" unsigned long _UNK_0054a82c;
extern "C" unsigned long _UNK_0054a850;
extern "C" unsigned long _UNK_0054a854;
extern "C" unsigned long _UNK_0054af64;
extern "C" unsigned long _UNK_0054af68;
extern "C" unsigned long _UNK_0054af6c;
extern "C" unsigned long _UNK_0054af70;
extern "C" unsigned long _UNK_0054af74;
extern "C" unsigned long _UNK_0054af78;
extern "C" unsigned long _UNK_0054b340;
extern "C" unsigned long _UNK_0054b344;
extern "C" unsigned long _UNK_0054b348;
extern "C" unsigned long _UNK_0054b34c;
extern "C" unsigned long _UNK_0054b350;
extern "C" unsigned long _UNK_0054b354;
extern "C" unsigned long _UNK_0054b358;
extern "C" unsigned long _UNK_0054b35c;
extern "C" unsigned long _UNK_0054b360;
extern "C" unsigned long _UNK_0054b364;
extern "C" unsigned long _UNK_0054b368;
extern "C" unsigned long _UNK_0054b36c;
extern "C" unsigned long _UNK_0054b4e4;
extern "C" unsigned long _UNK_0054b4e8;
extern "C" unsigned long _UNK_0054b4ec;
extern "C" unsigned long _UNK_0054b4f0;
extern "C" unsigned long _UNK_0054b4f4;
extern "C" unsigned long _UNK_0054b4f8;
extern "C" unsigned long _UNK_0054b4fc;
extern "C" unsigned long _UNK_0054b500;
extern "C" unsigned long _UNK_0054b504;
extern "C" unsigned long _UNK_0054b508;
extern "C" unsigned long _UNK_0054b50c;
extern "C" unsigned long _UNK_0054b510;
extern "C" unsigned long _UNK_0054b514;
extern "C" unsigned long _UNK_0054b570;
extern "C" unsigned long _UNK_0054b574;
extern "C" unsigned long _UNK_0054b6b0;
extern "C" unsigned long _UNK_0054b6b4;
extern "C" unsigned long _UNK_0054b788;
extern "C" unsigned long _UNK_0054b78c;
extern "C" unsigned long _UNK_0054b790;
extern "C" unsigned long _UNK_0054b794;
extern "C" unsigned long _UNK_0054b798;
extern "C" unsigned long _UNK_0054b79c;
extern "C" unsigned long _UNK_0054b7a0;
extern "C" unsigned long _UNK_0054b7a4;
extern "C" unsigned long _UNK_0054b7a8;
extern "C" unsigned long g_0054a5c0;
extern "C" unsigned long g_0054a5c4;
extern "C" unsigned long g_0054a5d8;
extern "C" unsigned long g_0054a5dc;
extern "C" unsigned long g_0054a5f0;
extern "C" unsigned long g_0054a5f4;
extern "C" unsigned long g_0054a608;
extern "C" unsigned long g_0054a60c;
extern "C" unsigned long g_0054a664;
extern "C" unsigned long g_0054a67e;
extern "C" unsigned long g_0054a6b0;
extern "C" unsigned long g_0054a6b4;
extern "C" unsigned long g_0054a6c4;
extern "C" unsigned long g_0054a6c8;
extern "C" unsigned long g_0054a6ec;
extern "C" unsigned long g_0054a6f0;
extern "C" unsigned long g_0054a76c;
extern "C" unsigned long g_0054a77e;
extern "C" unsigned long g_0054a7ac;
extern "C" unsigned long g_0054a7d8;
extern "C" unsigned long g_0054a7dc;
extern "C" unsigned long g_0054a826;
extern "C" unsigned long g_0054a82c;
extern "C" unsigned long g_0054a844;
extern "C" unsigned long g_0054a846;
extern "C" unsigned long g_0054a850;
extern "C" unsigned long g_0054a854;
extern "C" unsigned long g_0054ac4a;
extern "C" unsigned long g_0054ad28;
extern "C" unsigned long g_0054ad29;
extern "C" unsigned long g_0054ad2a;
extern "C" unsigned long g_0054ad48;
extern "C" unsigned long g_0054adf0;
extern "C" unsigned long g_0054af0c;
extern "C" unsigned long g_0054af64;
extern "C" unsigned long g_0054af68;
extern "C" unsigned long g_0054af6c;
extern "C" unsigned long g_0054af70;
extern "C" unsigned long g_0054af74;
extern "C" unsigned long g_0054af78;
extern "C" unsigned long g_0054b08c;
extern "C" unsigned long g_0054b0a0;
extern "C" unsigned long g_0054b0ac;
extern "C" unsigned long g_0054b2e4;
extern "C" unsigned long g_0054b2f4;
extern "C" unsigned long g_0054b320;
extern "C" unsigned long g_0054b340;
extern "C" unsigned long g_0054b344;
extern "C" unsigned long g_0054b348;
extern "C" unsigned long g_0054b34c;
extern "C" unsigned long g_0054b350;
extern "C" unsigned long g_0054b354;
extern "C" unsigned long g_0054b358;
extern "C" unsigned long g_0054b35c;
extern "C" unsigned long g_0054b360;
extern "C" unsigned long g_0054b364;
extern "C" unsigned long g_0054b368;
extern "C" unsigned long g_0054b36c;
extern "C" unsigned long g_0054b3f2;
extern "C" unsigned long g_0054b40a;
extern "C" unsigned long g_0054b41a;
extern "C" unsigned long g_0054b428;
extern "C" unsigned long g_0054b434;
extern "C" unsigned long g_0054b44c;
extern "C" unsigned long g_0054b45c;
extern "C" unsigned long g_0054b46a;
extern "C" unsigned long g_0054b480;
extern "C" unsigned long g_0054b4e4;
extern "C" unsigned long g_0054b4e8;
extern "C" unsigned long g_0054b4ec;
extern "C" unsigned long g_0054b4f0;
extern "C" unsigned long g_0054b4f4;
extern "C" unsigned long g_0054b4f8;
extern "C" unsigned long g_0054b4fc;
extern "C" unsigned long g_0054b500;
extern "C" unsigned long g_0054b504;
extern "C" unsigned long g_0054b508;
extern "C" unsigned long g_0054b50c;
extern "C" unsigned long g_0054b510;
extern "C" unsigned long g_0054b514;
extern "C" unsigned long g_0054b536;
extern "C" unsigned long g_0054b556;
extern "C" unsigned long g_0054b570;
extern "C" unsigned long g_0054b574;
extern "C" unsigned long g_0054b598;
extern "C" unsigned long g_0054b6b0;
extern "C" unsigned long g_0054b6b4;
extern "C" unsigned long g_0054b6c8;
extern "C" unsigned long g_0054b6d8;
extern "C" unsigned long g_0054b700;
extern "C" unsigned long g_0054b724;
extern "C" unsigned long g_0054b726;
extern "C" unsigned long g_0054b740;
extern "C" unsigned long g_0054b742;
extern "C" unsigned long g_0054b75a;
extern "C" unsigned long g_0054b788;
extern "C" unsigned long g_0054b78c;
extern "C" unsigned long g_0054b790;
extern "C" unsigned long g_0054b794;
extern "C" unsigned long g_0054b798;
extern "C" unsigned long g_0054b79c;
extern "C" unsigned long g_0054b7a0;
extern "C" unsigned long g_0054b7a4;
extern "C" unsigned long g_0054b7a8;
bool BLTimeHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTimeHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeHeroPresenter::tick(float p1)
{
  return;
}

BLTimeHeroPresenter::~BLTimeHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054a664 + g_0054a6b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054a67e + g_0054a6b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTimeHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0054a76c);
  return;
}

BLTimeHeroPresenter::BLTimeHeroPresenter()
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
  iVar3 = *(int *)(&g_0054a77e + g_0054a7d8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054a7ac + g_0054a7dc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTimeHeroPresenter::create(BLTimeHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTimeHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0054a826 + g_0054a82c);
  return;
}


void BLTimeHeroPresenter::onChangeView(cocos2d::CCObject* p1)
{
  return;
}




undefined4 BLTimeHeroPresenter::initWithView(BLTimeHeroView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTimeHeroView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0054b536 + g_0054b570),0,0x20);
  piVar1 = (int *)((BLTimeHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnPay();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0054b556 + g_0054b574),0,0x20);
  BLTimeHeroPresenter::showTime();
  BLTimeHeroPresenter::showView();
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTimeHeroPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeHeroPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeHeroPresenter::showView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeHeroPresenter::showTime()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeHeroPresenter::onChargeComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeHeroPresenter::onPay(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

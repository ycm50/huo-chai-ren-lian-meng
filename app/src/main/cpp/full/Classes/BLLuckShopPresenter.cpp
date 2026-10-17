#include "BLLuckShopPresenter.h"
#include "RedPackData.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "BLListButton.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCScrollView.h"
#include "CCDirector.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopDataInfoPresenter.h"
#include "BLLuckShopDataInfoView.h"
#include "BLLuckShopItemPresenter.h"
#include "BLLuckShopItemView.h"
#include "BLLuckShopView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "LuckShopData.h"
#include "LuckShopItem.h"
#include "PetUserData.h"
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
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00583100;
extern "C" unsigned long UNK_00583118;
extern "C" unsigned long UNK_00583130;
extern "C" unsigned long UNK_00583148;
extern "C" unsigned long UNK_005831a4;
extern "C" unsigned long UNK_005831d6;
extern "C" unsigned long UNK_0058321c;
extern "C" unsigned long UNK_00583230;
extern "C" unsigned long UNK_00583258;
extern "C" unsigned long UNK_0058326c;
extern "C" unsigned long UNK_00583286;
extern "C" unsigned long UNK_00583288;
extern "C" unsigned long UNK_005832c8;
extern "C" unsigned long UNK_005832ea;
extern "C" unsigned long UNK_005832ec;
extern "C" unsigned long UNK_0058333a;
extern "C" unsigned long UNK_00583382;
extern "C" unsigned long UNK_005833a6;
extern "C" unsigned long UNK_005833c2;
extern "C" unsigned long UNK_005833de;
extern "C" unsigned long UNK_00583404;
extern "C" unsigned long UNK_00583578;
extern "C" unsigned long UNK_00583624;
extern "C" unsigned long UNK_0058362e;
extern "C" unsigned long UNK_00583656;
extern "C" unsigned long UNK_00583752;
extern "C" unsigned long UNK_00583753;
extern "C" unsigned long UNK_00583754;
extern "C" unsigned long UNK_00583772;
extern "C" unsigned long UNK_005837a4;
extern "C" unsigned long UNK_00583856;
extern "C" unsigned long UNK_00583944;
extern "C" unsigned long UNK_00583a20;
extern "C" unsigned long UNK_00583a38;
extern "C" unsigned long UNK_00583a3c;
extern "C" unsigned long UNK_00583a7e;
extern "C" unsigned long UNK_00583a88;
extern "C" unsigned long UNK_00583aa6;
extern "C" unsigned long UNK_00583afe;
extern "C" unsigned long UNK_00583b3a;
extern "C" unsigned long UNK_00583c74;
extern "C" unsigned long UNK_00583ce4;
extern "C" unsigned long UNK_00583cfa;
extern "C" unsigned long UNK_00583eac;
extern "C" unsigned long UNK_00584052;
extern "C" unsigned long _UNK_00583104;
extern "C" unsigned long _UNK_0058311c;
extern "C" unsigned long _UNK_00583134;
extern "C" unsigned long _UNK_0058314c;
extern "C" unsigned long _UNK_00583208;
extern "C" unsigned long _UNK_0058320c;
extern "C" unsigned long _UNK_00583220;
extern "C" unsigned long _UNK_00583234;
extern "C" unsigned long _UNK_0058325c;
extern "C" unsigned long _UNK_00583270;
extern "C" unsigned long _UNK_0058329c;
extern "C" unsigned long _UNK_005832a0;
extern "C" unsigned long _UNK_005832b4;
extern "C" unsigned long _UNK_005832b8;
extern "C" unsigned long _UNK_005832cc;
extern "C" unsigned long _UNK_0058330c;
extern "C" unsigned long _UNK_00583310;
extern "C" unsigned long _UNK_00583428;
extern "C" unsigned long _UNK_0058342c;
extern "C" unsigned long _UNK_00583430;
extern "C" unsigned long _UNK_00583434;
extern "C" unsigned long _UNK_00583438;
extern "C" unsigned long _UNK_0058343c;
extern "C" unsigned long _UNK_00583440;
extern "C" unsigned long _UNK_00583444;
extern "C" unsigned long _UNK_00583448;
extern "C" unsigned long _UNK_0058344c;
extern "C" unsigned long _UNK_00583450;
extern "C" unsigned long _UNK_005835e4;
extern "C" unsigned long _UNK_00583614;
extern "C" unsigned long _UNK_00583628;
extern "C" unsigned long _UNK_005839d0;
extern "C" unsigned long _UNK_005839d4;
extern "C" unsigned long _UNK_005839d8;
extern "C" unsigned long _UNK_005839dc;
extern "C" unsigned long _UNK_005839e0;
extern "C" unsigned long _UNK_005839e4;
extern "C" unsigned long _UNK_00583ab8;
extern "C" unsigned long _UNK_00583abc;
extern "C" unsigned long _UNK_00583ac0;
extern "C" unsigned long _UNK_00583ac4;
extern "C" unsigned long _UNK_00583ac8;
extern "C" unsigned long _UNK_00583acc;
extern "C" unsigned long _UNK_00583ad0;
extern "C" unsigned long _UNK_00583ad4;
extern "C" unsigned long _UNK_00583ad8;
extern "C" unsigned long _UNK_00583c4c;
extern "C" unsigned long _UNK_00583c50;
extern "C" unsigned long _UNK_00583c54;
extern "C" unsigned long _UNK_00583c58;
extern "C" unsigned long _UNK_00583c5c;
extern "C" unsigned long _UNK_00583c60;
extern "C" unsigned long _UNK_00583c64;
extern "C" unsigned long _UNK_00583c78;
extern "C" unsigned long _UNK_00583cc8;
extern "C" unsigned long _UNK_00583ccc;
extern "C" unsigned long _UNK_00583cd0;
extern "C" unsigned long _UNK_00583ce8;
extern "C" unsigned long _UNK_00584074;
extern "C" unsigned long _UNK_00584078;
extern "C" unsigned long _UNK_0058407c;
extern "C" unsigned long _UNK_00584080;
extern "C" unsigned long _UNK_00584084;
extern "C" unsigned long _UNK_00584088;
extern "C" unsigned long _UNK_0058408c;
extern "C" unsigned long _UNK_00584090;
extern "C" unsigned long _UNK_00584094;
extern "C" unsigned long _UNK_00584098;
extern "C" unsigned long _UNK_00584290;
extern "C" unsigned long _UNK_00584294;
extern "C" unsigned long _UNK_00584298;
extern "C" unsigned long _UNK_0058429c;
extern "C" unsigned long _UNK_00584398;
extern "C" unsigned long g_00583100;
extern "C" unsigned long g_00583104;
extern "C" unsigned long g_00583118;
extern "C" unsigned long g_0058311c;
extern "C" unsigned long g_00583130;
extern "C" unsigned long g_00583134;
extern "C" unsigned long g_00583148;
extern "C" unsigned long g_0058314c;
extern "C" unsigned long g_005831a4;
extern "C" unsigned long g_005831d6;
extern "C" unsigned long g_00583208;
extern "C" unsigned long g_0058320c;
extern "C" unsigned long g_0058321c;
extern "C" unsigned long g_00583220;
extern "C" unsigned long g_00583230;
extern "C" unsigned long g_00583234;
extern "C" unsigned long g_00583258;
extern "C" unsigned long g_0058325c;
extern "C" unsigned long g_0058326c;
extern "C" unsigned long g_00583270;
extern "C" unsigned long g_00583286;
extern "C" unsigned long g_00583288;
extern "C" unsigned long g_0058329c;
extern "C" unsigned long g_005832a0;
extern "C" unsigned long g_005832b4;
extern "C" unsigned long g_005832b8;
extern "C" unsigned long g_005832c8;
extern "C" unsigned long g_005832cc;
extern "C" unsigned long g_005832ea;
extern "C" unsigned long g_005832ec;
extern "C" unsigned long g_0058330c;
extern "C" unsigned long g_00583310;
extern "C" unsigned long g_0058333a;
extern "C" unsigned long g_00583382;
extern "C" unsigned long g_005833a6;
extern "C" unsigned long g_005833c2;
extern "C" unsigned long g_005833de;
extern "C" unsigned long g_00583404;
extern "C" unsigned long g_00583428;
extern "C" unsigned long g_0058342c;
extern "C" unsigned long g_00583430;
extern "C" unsigned long g_00583434;
extern "C" unsigned long g_00583438;
extern "C" unsigned long g_0058343c;
extern "C" unsigned long g_00583440;
extern "C" unsigned long g_00583444;
extern "C" unsigned long g_00583448;
extern "C" unsigned long g_0058344c;
extern "C" unsigned long g_00583450;
extern "C" unsigned long g_00583578;
extern "C" unsigned long g_005835e4;
extern "C" unsigned long g_00583614;
extern "C" unsigned long g_00583624;
extern "C" unsigned long g_00583628;
extern "C" unsigned long g_0058362e;
extern "C" unsigned long g_00583656;
extern "C" unsigned long g_00583752;
extern "C" unsigned long g_00583753;
extern "C" unsigned long g_00583754;
extern "C" unsigned long g_00583772;
extern "C" unsigned long g_005837a4;
extern "C" unsigned long g_00583856;
extern "C" unsigned long g_00583944;
extern "C" unsigned long g_005839d0;
extern "C" unsigned long g_005839d4;
extern "C" unsigned long g_005839d8;
extern "C" unsigned long g_005839dc;
extern "C" unsigned long g_005839e0;
extern "C" unsigned long g_005839e4;
extern "C" unsigned long g_00583a20;
extern "C" unsigned long g_00583a38;
extern "C" unsigned long g_00583a3c;
extern "C" unsigned long g_00583a7e;
extern "C" unsigned long g_00583a88;
extern "C" unsigned long g_00583aa6;
extern "C" unsigned long g_00583ab8;
extern "C" unsigned long g_00583abc;
extern "C" unsigned long g_00583ac0;
extern "C" unsigned long g_00583ac4;
extern "C" unsigned long g_00583ac8;
extern "C" unsigned long g_00583acc;
extern "C" unsigned long g_00583ad0;
extern "C" unsigned long g_00583ad4;
extern "C" unsigned long g_00583ad8;
extern "C" unsigned long g_00583afe;
extern "C" unsigned long g_00583b3a;
extern "C" unsigned long g_00583c4c;
extern "C" unsigned long g_00583c50;
extern "C" unsigned long g_00583c54;
extern "C" unsigned long g_00583c58;
extern "C" unsigned long g_00583c5c;
extern "C" unsigned long g_00583c60;
extern "C" unsigned long g_00583c64;
extern "C" unsigned long g_00583c74;
extern "C" unsigned long g_00583c78;
extern "C" unsigned long g_00583cc8;
extern "C" unsigned long g_00583ccc;
extern "C" unsigned long g_00583cd0;
extern "C" unsigned long g_00583ce4;
extern "C" unsigned long g_00583ce8;
extern "C" unsigned long g_00583cfa;
extern "C" unsigned long g_00583eac;
extern "C" unsigned long g_00584052;
extern "C" unsigned long g_00584074;
extern "C" unsigned long g_00584078;
extern "C" unsigned long g_0058407c;
extern "C" unsigned long g_00584080;
extern "C" unsigned long g_00584084;
extern "C" unsigned long g_00584088;
extern "C" unsigned long g_0058408c;
extern "C" unsigned long g_00584090;
extern "C" unsigned long g_00584094;
extern "C" unsigned long g_00584098;
extern "C" unsigned long g_00584290;
extern "C" unsigned long g_00584294;
extern "C" unsigned long g_00584298;
extern "C" unsigned long g_0058429c;
extern "C" unsigned long g_00584398;
void BLLuckShopPresenter::scrollViewDidZoom(cocos2d::extension::CCScrollView* p1)
{
  return;
}

bool BLLuckShopPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckShopPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckShopPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLLuckShopPresenter::numOfRow(BLGridView* p1)
{
  return 2;
}

void BLLuckShopPresenter::tick(float p1)
{
  return;
}

BLLuckShopPresenter::~BLLuckShopPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005831a4 + g_00583208);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  *(int *)((int)this + 4*(8)) = iVar2 + 0xb0;
  *(int *)((int)this + 4*(9)) = iVar2 + 0xbc;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005831d6 + g_0058320c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLLuckShopPresenter::onListenBuyId(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_00583286 + g_005832a0),
                              *(undefined4 *)(&g_00583288 + g_0058329c),0), iVar1 != 0)) {
    *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

undefined4 BLLuckShopPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLLuckShopPresenter::onRefreshImg()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  return;
}


void BLLuckShopPresenter::onEnter()
{
  return;
}

void BLLuckShopPresenter::onExit()
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

undefined4 BLLuckShopPresenter::create(BLLuckShopView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLLuckShopPresenter::sortLuckShopData()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  uVar1 = (undefined4)(((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  uVar1 = (undefined4)(((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  piVar2 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*puVar3)))));
  piVar2 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  (**(code **)(*piVar2 + 0x1f8))(auStack_20,piVar2);
  uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1)))));
  iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar4),(int)(auStack_20[0]))));
  if (iVar5 != 0) {
    piVar2 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
    uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*puVar3)))));
  }
  piVar2 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  pcVar7 = *(code **)(*piVar2 + 0x88);
  piVar6 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  (**(code **)(*piVar6 + 0x1f8))(auStack_28,piVar6);
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar2,auStack_20);
  return;
}

undefined4 BLLuckShopPresenter::initWithView(BLLuckShopView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLLuckShopView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00583578 + g_005835e4),0,0x20);
  iVar2 = ((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  *(int *)(iVar2 + 0x128) = ((int)this) + 0x24;
  piVar1 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  BLLuckShopPresenter::sortLuckShopData();
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLLuckShopPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x92)),(intptr_t)0);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005832ea + (intptr_t)(g_0058330c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005832ec + (intptr_t)(g_00583310))),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x92);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x9f);
  return;
}

BLLuckShopPresenter::BLLuckShopPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopPresenter::addItems(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopPresenter::onUpdateLuckFen(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_28 [20];
  int iStack_14;
  
  piVar6 = *(int **)((unsigned char *)((char *)&g_00583a20 + (intptr_t)(g_00583ac0)));
  iStack_14 = (int)*(int *)&(*piVar6);
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_00583a38 + (intptr_t)(g_00583ac4))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00583a3c + (intptr_t)(g_00583ac8))),0), iVar1 != 0)) {
    (void)(((long long)::memset((void *)(auStack_28),(int)(0),(size_t)(0x14))));
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<RedPackData, 0> *)this)->instance());
    iVar7 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x74));
    uVar5 = (undefined4)(*(uint *)(iVar1 + 0x70));
    uVar8 = (undefined4)(intptr_t)(*(undefined8 *)(iVar1 + 0x70));
    if ((iVar7 < 1) && ((iVar7 != 0 || (uVar5 <= g_00583acc)))) {
      puVar4 = (unsigned char *)((char *)&g_00583a88 + (intptr_t)(g_00583ad4));
    }
    else {
      uVar8 = (undefined4)(intptr_t)(func_0079e774(uVar5,iVar7,g_00583ab8,g_00583abc));
      puVar4 = (unsigned char *)((char *)&g_00583a7e + (intptr_t)(g_00583ad0));
    }
    (void)(((long long)::sprintf((char *)(auStack_28),(char const *)(puVar4),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20))));
    piVar2 = (int *)((BLLuckShopView *)*(undefined4 *)(((int)this) + 0x28))->getlabLuckfen();
    (**(code **)(*piVar2 + 0x234))(piVar2,auStack_28);
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)(unsigned char *)((char *)&g_00583aa6 + (intptr_t)(g_00583ad8)));
  }
  if (iStack_14 != *piVar6) {
    func_0079e914();
  }
  return;
}

void BLLuckShopPresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLLuckShopPresenter::numOfColumn(BLGridView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLLuckShopPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopPresenter::scrollViewDidScroll(cocos2d::extension::CCScrollView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopPresenter::onBuySuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

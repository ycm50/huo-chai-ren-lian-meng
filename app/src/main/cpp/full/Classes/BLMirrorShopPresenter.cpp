#include "BLMirrorShopPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLMirrorShopView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMirrorShopItemPresenter.h"
#include "BLMirrorShopItemView.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MirrorShopData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ca71c;
extern "C" unsigned long UNK_005ca810;
extern "C" unsigned long UNK_005ca836;
extern "C" unsigned long UNK_005ca87c;
extern "C" unsigned long UNK_005ca8a4;
extern "C" unsigned long UNK_005ca8be;
extern "C" unsigned long UNK_005ca8c0;
extern "C" unsigned long UNK_005caa18;
extern "C" unsigned long UNK_005caa8c;
extern "C" unsigned long UNK_005caeb4;
extern "C" unsigned long UNK_005caf4e;
extern "C" unsigned long UNK_005cb2e2;
extern "C" unsigned long UNK_005cb306;
extern "C" unsigned long UNK_005cb3a4;
extern "C" unsigned long UNK_005cb3fa;
extern "C" unsigned long UNK_005cb3fc;
extern "C" unsigned long UNK_005cb414;
extern "C" unsigned long UNK_005cb416;
extern "C" unsigned long UNK_005cb42e;
extern "C" unsigned long UNK_005cb430;
extern "C" unsigned long UNK_005cb49e;
extern "C" unsigned long UNK_005cb4a0;
extern "C" unsigned long UNK_005cb4e0;
extern "C" unsigned long UNK_005cb61c;
extern "C" unsigned long _UNK_005ca720;
extern "C" unsigned long _UNK_005ca868;
extern "C" unsigned long _UNK_005ca86c;
extern "C" unsigned long _UNK_005ca880;
extern "C" unsigned long _UNK_005ca8a8;
extern "C" unsigned long _UNK_005ca8d4;
extern "C" unsigned long _UNK_005ca8d8;
extern "C" unsigned long _UNK_005caa1c;
extern "C" unsigned long _UNK_005caa78;
extern "C" unsigned long _UNK_005caa7c;
extern "C" unsigned long _UNK_005caa90;
extern "C" unsigned long _UNK_005caaa4;
extern "C" unsigned long _UNK_005cab2c;
extern "C" unsigned long _UNK_005caf64;
extern "C" unsigned long _UNK_005caf68;
extern "C" unsigned long _UNK_005cb354;
extern "C" unsigned long _UNK_005cb358;
extern "C" unsigned long _UNK_005cb3e0;
extern "C" unsigned long _UNK_005cb444;
extern "C" unsigned long _UNK_005cb448;
extern "C" unsigned long _UNK_005cb44c;
extern "C" unsigned long _UNK_005cb450;
extern "C" unsigned long _UNK_005cb454;
extern "C" unsigned long _UNK_005cb458;
extern "C" unsigned long _UNK_005cb65c;
extern "C" unsigned long _UNK_005cb660;
extern "C" unsigned long _UNK_005cb664;
extern "C" unsigned long _UNK_005cb668;
extern "C" unsigned long _UNK_005cb66c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005ca71c;
extern "C" unsigned long g_005ca720;
extern "C" unsigned long g_005ca810;
extern "C" unsigned long g_005ca836;
extern "C" unsigned long g_005ca868;
extern "C" unsigned long g_005ca86c;
extern "C" unsigned long g_005ca87c;
extern "C" unsigned long g_005ca880;
extern "C" unsigned long g_005ca8a4;
extern "C" unsigned long g_005ca8a8;
extern "C" unsigned long g_005ca8be;
extern "C" unsigned long g_005ca8c0;
extern "C" unsigned long g_005ca8d4;
extern "C" unsigned long g_005ca8d8;
extern "C" unsigned long g_005caa18;
extern "C" unsigned long g_005caa1c;
extern "C" unsigned long g_005caa78;
extern "C" unsigned long g_005caa7c;
extern "C" unsigned long g_005caa8c;
extern "C" unsigned long g_005caa90;
extern "C" unsigned long g_005caaa4;
extern "C" unsigned long g_005cab2c;
extern "C" unsigned long g_005caeb4;
extern "C" unsigned long g_005caf4e;
extern "C" unsigned long g_005caf64;
extern "C" unsigned long g_005caf68;
extern "C" unsigned long g_005cb2e2;
extern "C" unsigned long g_005cb306;
extern "C" unsigned long g_005cb354;
extern "C" unsigned long g_005cb358;
extern "C" unsigned long g_005cb3a4;
extern "C" unsigned long g_005cb3e0;
extern "C" unsigned long g_005cb3fa;
extern "C" unsigned long g_005cb3fc;
extern "C" unsigned long g_005cb414;
extern "C" unsigned long g_005cb416;
extern "C" unsigned long g_005cb42e;
extern "C" unsigned long g_005cb430;
extern "C" unsigned long g_005cb444;
extern "C" unsigned long g_005cb448;
extern "C" unsigned long g_005cb44c;
extern "C" unsigned long g_005cb450;
extern "C" unsigned long g_005cb454;
extern "C" unsigned long g_005cb458;
extern "C" unsigned long g_005cb49e;
extern "C" unsigned long g_005cb4a0;
extern "C" unsigned long g_005cb4e0;
extern "C" unsigned long g_005cb61c;
extern "C" unsigned long g_005cb65c;
extern "C" unsigned long g_005cb660;
extern "C" unsigned long g_005cb664;
extern "C" unsigned long g_005cb668;
extern "C" unsigned long g_005cb66c;
bool BLMirrorShopPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMirrorShopPresenter::~BLMirrorShopPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ca810 + g_005ca868);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ca836 + g_005ca86c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMirrorShopPresenter::onSelectItem(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_005ca8be + g_005ca8d8),
                              *(undefined4 *)(&g_005ca8c0 + g_005ca8d4),0), iVar1 != 0)) {
    *(int *)(((int)this) + 0x24) = iVar1;
  }
  return;
}

int BLMirrorShopPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  (**(code **)(*piVar1 + 0xe8))();
  piVar1 = (int *)((MirrorShopData *)this)->getItemDatas();
  return ((piVar1[1] - *piVar1 >> 2) + 1) / 2;
}

undefined4 BLMirrorShopPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(g_005caa7c);
  uVar3 = (undefined4)(g_005caa78);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  return ((int)this);
}

void BLMirrorShopPresenter::onClickClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_005caaa4);
  return;
}



BLMirrorShopPresenter::BLMirrorShopPresenter()
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
  iVar3 = *(int *)(&g_005cb2e2 + g_005cb354);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x7c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cb306 + g_005cb358,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLMirrorShopPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLMirrorShopPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
undefined8 BLMirrorShopPresenter::onUpdateCostNum()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar1 = ((void)(((DataCacheManager *)(uVar1))->getItemDataByID(g_005cab2c)),(undefined4)0);
  uVar2 = (undefined4)(func_0079e2fc(0x7c));
  0 /* ctorZero */;
  ((ItemData *)(uVar2))->initWith((ItemData*)uVar1);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
  piVar3 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*(int *)(piVar3) + (0x28)))();
  }
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  uVar5 = (undefined4)(intptr_t)(func_0079e734());
  uVar1 = (undefined4)((undefined4)((ulonglong)uVar5 >> 0x20));
  0 /* ctorZero */;
  (*pcVar4)(piVar3,uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void BLMirrorShopPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMirrorShopPresenter::initWithView(BLMirrorShopView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  uVar2 = (undefined4)(0x20);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005cb3a4 + (intptr_t)(g_005cb3e0))),0,
             0x20,p1,*(undefined4 *)((unsigned char *)((char *)&g_005cb3a4 + (intptr_t)(g_005cb3e0))),0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x114))->reloadData(0, 1);
  return ghidra_CONCAT44(p1,uVar2);
}

void BLMirrorShopPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005cb3fc + (intptr_t)(g_005cb444))), 0, (char const*)(unsigned char *)((char *)&g_005cb3fa + (intptr_t)(g_005cb448)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005cb416 + (intptr_t)(g_005cb44c))), 0, (char const*)(unsigned char *)((char *)&g_005cb414 + (intptr_t)(g_005cb450)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005cb430 + (intptr_t)(g_005cb454))), 0, (char const*)(unsigned char *)((char *)&g_005cb42e + (intptr_t)(g_005cb458)), 0);
  ((BLMirrorShopPresenter *)(((int)this)))->onUpdateCostNum();
  return;
}

void BLMirrorShopPresenter::onBuyCallback(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLSevenDayEquipGiftPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLabelTTF.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "BLEquipGiftItemPresenter.h"
#include "BLEquipGiftItemView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSevenDayEquipGiftView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "ItemData.h"
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
#include <ctime>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
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
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079e974(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00549924;
extern "C" unsigned long UNK_0054993c;
extern "C" unsigned long UNK_00549998;
extern "C" unsigned long UNK_005499be;
extern "C" unsigned long UNK_00549a14;
extern "C" unsigned long UNK_00549a3c;
extern "C" unsigned long UNK_00549a8e;
extern "C" unsigned long UNK_00549ac8;
extern "C" unsigned long UNK_00549b74;
extern "C" unsigned long UNK_00549bda;
extern "C" unsigned long UNK_00549cde;
extern "C" unsigned long UNK_00549cf2;
extern "C" unsigned long UNK_00549d1c;
extern "C" unsigned long UNK_00549d7a;
extern "C" unsigned long UNK_00549da4;
extern "C" unsigned long UNK_00549e42;
extern "C" unsigned long UNK_00549e6e;
extern "C" unsigned long UNK_00549e8e;
extern "C" unsigned long UNK_00549ec4;
extern "C" unsigned long UNK_00549f5c;
extern "C" unsigned long UNK_00549f94;
extern "C" unsigned long UNK_00549fb5;
extern "C" unsigned long UNK_0054a246;
extern "C" unsigned long UNK_0054a344;
extern "C" unsigned long UNK_0054a345;
extern "C" unsigned long UNK_0054a346;
extern "C" unsigned long UNK_0054a360;
extern "C" unsigned long UNK_0054a39e;
extern "C" unsigned long UNK_0054a4dc;
extern "C" unsigned long _UNK_00549928;
extern "C" unsigned long _UNK_00549940;
extern "C" unsigned long _UNK_00549a00;
extern "C" unsigned long _UNK_00549a04;
extern "C" unsigned long _UNK_00549a18;
extern "C" unsigned long _UNK_00549a40;
extern "C" unsigned long _UNK_00549a64;
extern "C" unsigned long _UNK_00549a68;
extern "C" unsigned long _UNK_00549af8;
extern "C" unsigned long _UNK_00549afc;
extern "C" unsigned long _UNK_00549bb4;
extern "C" unsigned long _UNK_00549c78;
extern "C" unsigned long _UNK_00549e10;
extern "C" unsigned long _UNK_00549e14;
extern "C" unsigned long _UNK_00549e18;
extern "C" unsigned long _UNK_00549e1c;
extern "C" unsigned long _UNK_00549e20;
extern "C" unsigned long _UNK_00549e24;
extern "C" unsigned long _UNK_00549e28;
extern "C" unsigned long _UNK_00549e2c;
extern "C" unsigned long _UNK_00549ea8;
extern "C" unsigned long _UNK_00549eac;
extern "C" unsigned long _UNK_00549eb0;
extern "C" unsigned long _UNK_00549eb4;
extern "C" unsigned long _UNK_0054a0bc;
extern "C" unsigned long _UNK_0054a0c0;
extern "C" unsigned long _UNK_0054a0c4;
extern "C" unsigned long _UNK_0054a0c8;
extern "C" unsigned long _UNK_0054a0cc;
extern "C" unsigned long _UNK_0054a0d0;
extern "C" unsigned long _UNK_0054a0d4;
extern "C" unsigned long _UNK_0054a574;
extern "C" unsigned long _UNK_0054a578;
extern "C" unsigned long _UNK_0054a57c;
extern "C" unsigned long _UNK_0054a580;
extern "C" unsigned long _UNK_0054a584;
extern "C" unsigned long _UNK_0054a588;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_00549924;
extern "C" unsigned long g_00549928;
extern "C" unsigned long g_0054993c;
extern "C" unsigned long g_00549940;
extern "C" unsigned long g_00549998;
extern "C" unsigned long g_005499be;
extern "C" unsigned long g_00549a00;
extern "C" unsigned long g_00549a04;
extern "C" unsigned long g_00549a14;
extern "C" unsigned long g_00549a18;
extern "C" unsigned long g_00549a3c;
extern "C" unsigned long g_00549a40;
extern "C" unsigned long g_00549a64;
extern "C" unsigned long g_00549a68;
extern "C" unsigned long g_00549a8e;
extern "C" unsigned long g_00549ac8;
extern "C" unsigned long g_00549af8;
extern "C" unsigned long g_00549afc;
extern "C" unsigned long g_00549b74;
extern "C" unsigned long g_00549bb4;
extern "C" unsigned long g_00549bda;
extern "C" unsigned long g_00549c78;
extern "C" unsigned long g_00549cde;
extern "C" unsigned long g_00549cf2;
extern "C" unsigned long g_00549d1c;
extern "C" unsigned long g_00549d7a;
extern "C" unsigned long g_00549da4;
extern "C" unsigned long g_00549e10;
extern "C" unsigned long g_00549e14;
extern "C" unsigned long g_00549e18;
extern "C" unsigned long g_00549e1c;
extern "C" unsigned long g_00549e20;
extern "C" unsigned long g_00549e24;
extern "C" unsigned long g_00549e28;
extern "C" unsigned long g_00549e2c;
extern "C" unsigned long g_00549e42;
extern "C" unsigned long g_00549e6e;
extern "C" unsigned long g_00549e8e;
extern "C" unsigned long g_00549ea8;
extern "C" unsigned long g_00549eac;
extern "C" unsigned long g_00549eb0;
extern "C" unsigned long g_00549eb4;
extern "C" unsigned long g_00549ec4;
extern "C" unsigned long g_00549f5c;
extern "C" unsigned long g_00549f94;
extern "C" unsigned long g_00549fb5;
extern "C" unsigned long g_0054a0bc;
extern "C" unsigned long g_0054a0c0;
extern "C" unsigned long g_0054a0c4;
extern "C" unsigned long g_0054a0c8;
extern "C" unsigned long g_0054a0cc;
extern "C" unsigned long g_0054a0d0;
extern "C" unsigned long g_0054a0d4;
extern "C" unsigned long g_0054a246;
extern "C" unsigned long g_0054a344;
extern "C" unsigned long g_0054a345;
extern "C" unsigned long g_0054a346;
extern "C" unsigned long g_0054a360;
extern "C" unsigned long g_0054a39e;
extern "C" unsigned long g_0054a4dc;
extern "C" unsigned long g_0054a574;
extern "C" unsigned long g_0054a578;
extern "C" unsigned long g_0054a57c;
extern "C" unsigned long g_0054a580;
extern "C" unsigned long g_0054a584;
extern "C" unsigned long g_0054a588;
bool BLSevenDayEquipGiftPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSevenDayEquipGiftPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSevenDayEquipGiftPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSevenDayEquipGiftPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLSevenDayEquipGiftPresenter::numOfColumn(BLGridView* p1)
{
  return 7;
}

undefined4 BLSevenDayEquipGiftPresenter::numOfRow(BLGridView* p1)
{
  return 1;
}

void BLSevenDayEquipGiftPresenter::tick(float p1)
{
  return;
}

BLSevenDayEquipGiftPresenter::~BLSevenDayEquipGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00549998 + g_00549a00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x90;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005499be + g_00549a04,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSevenDayEquipGiftPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x66);
  return;
}

undefined4 BLSevenDayEquipGiftPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

BLSevenDayEquipGiftPresenter::BLSevenDayEquipGiftPresenter()
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
  iVar3 = *(int *)(&g_00549a8e + g_00549af8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x90;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00549ac8 + g_00549afc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLSevenDayEquipGiftPresenter::create(BLSevenDayEquipGiftView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSevenDayEquipGiftPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSevenDayEquipGiftPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLSevenDayEquipGiftPresenter::initSeventDayGiftData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSevenDayEquipGiftPresenter::initWithView(BLSevenDayEquipGiftView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSevenDayEquipGiftView *)p1)->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_00549bda + g_00549c78));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar5 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_28,piVar2);
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  uVar3 = (undefined4)(((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList());
  uVar4 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar3)->setItemPartner((cocos2d::CCNode*)uVar4);
  BLSevenDayEquipGiftPresenter::initSeventDayGiftData();
  uVar3 = (undefined4)(((BLSevenDayEquipGiftView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList());
  ((BLGridView *)uVar3)->reloadData(0, 1);
  return;
}

void BLSevenDayEquipGiftPresenter::hasGetGiftToday()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  (void)(((long long)::time((time_t *)(void *)(&uStack_c))));
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  iVar4 = *(int *)(iVar1 + 0x14);
  iVar1 = *(int *)(iVar1 + 0x1c);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  iVar3 = (**(code **)(*piVar2 + 0x30))();
  return;
}

int * BLSevenDayEquipGiftPresenter::createGetBtn()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLSevenDayEquipGiftPresenter::createHasGetLbl()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(&uStack_18,(unsigned char *)((char *)&g_00549e42 + (intptr_t)(g_00549ea8)),&uStack_1c);
  ((BLLanguage *)(uVar1))->getString((std::string)(char*)uStack_18);
  uVar1 = (undefined4)(uStack_14);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_00549eac,uVar2));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)uVar1, (char const*)(unsigned char *)((char *)&g_00549e6e + (intptr_t)(g_00549eb0)), uVar2);
  func_0079e2bc(&uStack_14);
  func_0079e2bc(&uStack_18);
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,(unsigned char *)((char *)&g_00549e8e + (intptr_t)(g_00549eb4)));
  return;
}

void BLSevenDayEquipGiftPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSevenDayEquipGiftPresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_24;
  int iStack_20;
  
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_24);
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
  if (p3 < (uint)(iStack_20 - iStack_24 >> 2)) {
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_24);
    puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)(&iStack_24))->at((unsigned int)p3);
    uVar5 = (undefined4)(*puVar1);
    ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
    uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(uVar5),(int *)0);
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))());
    if ((iVar4 == 1) || (iVar4 = (**(code **)(*(int *)(piVar3) + (0x30)))(piVar3), iVar4 == 4)) {
      uVar2 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar2))->showItemDataInfo((ItemData*)piVar3);
    }
  }
  return;
}

void BLSevenDayEquipGiftPresenter::onGetGift(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

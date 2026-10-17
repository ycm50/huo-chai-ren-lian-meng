#include "JingJiShopPresenter.h"
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
#include "BLJJSDataInfoPresenter.h"
#include "BLJJSDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "CircusShopData.h"
#include "CircusShopItem.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "JingJiShopItemPresenter.h"
#include "JingJiShopItemView.h"
#include "JingJiShopView.h"
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
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
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
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00576bcc;
extern "C" unsigned long UNK_00576be4;
extern "C" unsigned long UNK_00576bfc;
extern "C" unsigned long UNK_00576c14;
extern "C" unsigned long UNK_00576c6c;
extern "C" unsigned long UNK_00576c9e;
extern "C" unsigned long UNK_00576ce4;
extern "C" unsigned long UNK_00576cf8;
extern "C" unsigned long UNK_00576d20;
extern "C" unsigned long UNK_00576d34;
extern "C" unsigned long UNK_00576d4e;
extern "C" unsigned long UNK_00576d50;
extern "C" unsigned long UNK_00576d90;
extern "C" unsigned long UNK_00576db2;
extern "C" unsigned long UNK_00576db4;
extern "C" unsigned long UNK_00576dfc;
extern "C" unsigned long UNK_00576e62;
extern "C" unsigned long UNK_00576ea4;
extern "C" unsigned long UNK_00576eae;
extern "C" unsigned long UNK_00576ece;
extern "C" unsigned long UNK_00576f32;
extern "C" unsigned long UNK_00576f7a;
extern "C" unsigned long UNK_00576f9e;
extern "C" unsigned long UNK_00576fba;
extern "C" unsigned long UNK_00576fd6;
extern "C" unsigned long UNK_00576ffc;
extern "C" unsigned long UNK_00577170;
extern "C" unsigned long UNK_00577230;
extern "C" unsigned long UNK_0057723a;
extern "C" unsigned long UNK_00577266;
extern "C" unsigned long UNK_00577362;
extern "C" unsigned long UNK_00577363;
extern "C" unsigned long UNK_00577364;
extern "C" unsigned long UNK_00577382;
extern "C" unsigned long UNK_005773b4;
extern "C" unsigned long UNK_00577466;
extern "C" unsigned long UNK_00577554;
extern "C" unsigned long UNK_00577646;
extern "C" unsigned long UNK_00577682;
extern "C" unsigned long UNK_005777b8;
extern "C" unsigned long UNK_0057781c;
extern "C" unsigned long UNK_00577832;
extern "C" unsigned long UNK_00577ac8;
extern "C" unsigned long _UNK_00576bd0;
extern "C" unsigned long _UNK_00576be8;
extern "C" unsigned long _UNK_00576c00;
extern "C" unsigned long _UNK_00576c18;
extern "C" unsigned long _UNK_00576cd0;
extern "C" unsigned long _UNK_00576cd4;
extern "C" unsigned long _UNK_00576ce8;
extern "C" unsigned long _UNK_00576cfc;
extern "C" unsigned long _UNK_00576d24;
extern "C" unsigned long _UNK_00576d38;
extern "C" unsigned long _UNK_00576d64;
extern "C" unsigned long _UNK_00576d68;
extern "C" unsigned long _UNK_00576d7c;
extern "C" unsigned long _UNK_00576d80;
extern "C" unsigned long _UNK_00576d94;
extern "C" unsigned long _UNK_00576dd4;
extern "C" unsigned long _UNK_00576dd8;
extern "C" unsigned long _UNK_00576ee8;
extern "C" unsigned long _UNK_00576eec;
extern "C" unsigned long _UNK_00576ef0;
extern "C" unsigned long _UNK_00576ef4;
extern "C" unsigned long _UNK_00576ef8;
extern "C" unsigned long _UNK_00576efc;
extern "C" unsigned long _UNK_00576f00;
extern "C" unsigned long _UNK_00576f04;
extern "C" unsigned long _UNK_00576f08;
extern "C" unsigned long _UNK_00576f0c;
extern "C" unsigned long _UNK_00576f10;
extern "C" unsigned long _UNK_00576f14;
extern "C" unsigned long _UNK_00576f18;
extern "C" unsigned long _UNK_00576f1c;
extern "C" unsigned long _UNK_00577020;
extern "C" unsigned long _UNK_00577024;
extern "C" unsigned long _UNK_00577028;
extern "C" unsigned long _UNK_0057702c;
extern "C" unsigned long _UNK_00577030;
extern "C" unsigned long _UNK_00577034;
extern "C" unsigned long _UNK_00577038;
extern "C" unsigned long _UNK_0057703c;
extern "C" unsigned long _UNK_00577040;
extern "C" unsigned long _UNK_00577044;
extern "C" unsigned long _UNK_00577048;
extern "C" unsigned long _UNK_005771f0;
extern "C" unsigned long _UNK_00577220;
extern "C" unsigned long _UNK_00577234;
extern "C" unsigned long _UNK_005775e0;
extern "C" unsigned long _UNK_005775e4;
extern "C" unsigned long _UNK_005775e8;
extern "C" unsigned long _UNK_005775ec;
extern "C" unsigned long _UNK_005775f0;
extern "C" unsigned long _UNK_005775f4;
extern "C" unsigned long _UNK_00577794;
extern "C" unsigned long _UNK_00577798;
extern "C" unsigned long _UNK_0057779c;
extern "C" unsigned long _UNK_005777a0;
extern "C" unsigned long _UNK_005777a4;
extern "C" unsigned long _UNK_005777a8;
extern "C" unsigned long _UNK_005777bc;
extern "C" unsigned long _UNK_00577808;
extern "C" unsigned long _UNK_0057780c;
extern "C" unsigned long _UNK_00577820;
extern "C" unsigned long _UNK_00577b18;
extern "C" unsigned long _UNK_00577b1c;
extern "C" unsigned long _UNK_00577b20;
extern "C" unsigned long _UNK_00577b24;
extern "C" unsigned long _UNK_00577b28;
extern "C" unsigned long _UNK_00577b2c;
extern "C" unsigned long _UNK_00577ce8;
extern "C" unsigned long _UNK_00577cec;
extern "C" unsigned long _UNK_00577cf0;
extern "C" unsigned long _UNK_00577cf4;
extern "C" unsigned long _UNK_00577df0;
extern "C" unsigned long g_00576bcc;
extern "C" unsigned long g_00576bd0;
extern "C" unsigned long g_00576be4;
extern "C" unsigned long g_00576be8;
extern "C" unsigned long g_00576bfc;
extern "C" unsigned long g_00576c00;
extern "C" unsigned long g_00576c14;
extern "C" unsigned long g_00576c18;
extern "C" unsigned long g_00576c6c;
extern "C" unsigned long g_00576c9e;
extern "C" unsigned long g_00576cd0;
extern "C" unsigned long g_00576cd4;
extern "C" unsigned long g_00576ce4;
extern "C" unsigned long g_00576ce8;
extern "C" unsigned long g_00576cf8;
extern "C" unsigned long g_00576cfc;
extern "C" unsigned long g_00576d20;
extern "C" unsigned long g_00576d24;
extern "C" unsigned long g_00576d34;
extern "C" unsigned long g_00576d38;
extern "C" unsigned long g_00576d4e;
extern "C" unsigned long g_00576d50;
extern "C" unsigned long g_00576d64;
extern "C" unsigned long g_00576d68;
extern "C" unsigned long g_00576d7c;
extern "C" unsigned long g_00576d80;
extern "C" unsigned long g_00576d90;
extern "C" unsigned long g_00576d94;
extern "C" unsigned long g_00576db2;
extern "C" unsigned long g_00576db4;
extern "C" unsigned long g_00576dd4;
extern "C" unsigned long g_00576dd8;
extern "C" unsigned long g_00576dfc;
extern "C" unsigned long g_00576e62;
extern "C" unsigned long g_00576ea4;
extern "C" unsigned long g_00576eae;
extern "C" unsigned long g_00576ece;
extern "C" unsigned long g_00576ee8;
extern "C" unsigned long g_00576eec;
extern "C" unsigned long g_00576ef0;
extern "C" unsigned long g_00576ef4;
extern "C" unsigned long g_00576ef8;
extern "C" unsigned long g_00576efc;
extern "C" unsigned long g_00576f00;
extern "C" unsigned long g_00576f04;
extern "C" unsigned long g_00576f08;
extern "C" unsigned long g_00576f0c;
extern "C" unsigned long g_00576f10;
extern "C" unsigned long g_00576f14;
extern "C" unsigned long g_00576f18;
extern "C" unsigned long g_00576f1c;
extern "C" unsigned long g_00576f32;
extern "C" unsigned long g_00576f7a;
extern "C" unsigned long g_00576f9e;
extern "C" unsigned long g_00576fba;
extern "C" unsigned long g_00576fd6;
extern "C" unsigned long g_00576ffc;
extern "C" unsigned long g_00577020;
extern "C" unsigned long g_00577024;
extern "C" unsigned long g_00577028;
extern "C" unsigned long g_0057702c;
extern "C" unsigned long g_00577030;
extern "C" unsigned long g_00577034;
extern "C" unsigned long g_00577038;
extern "C" unsigned long g_0057703c;
extern "C" unsigned long g_00577040;
extern "C" unsigned long g_00577044;
extern "C" unsigned long g_00577048;
extern "C" unsigned long g_00577170;
extern "C" unsigned long g_005771f0;
extern "C" unsigned long g_00577220;
extern "C" unsigned long g_00577230;
extern "C" unsigned long g_00577234;
extern "C" unsigned long g_0057723a;
extern "C" unsigned long g_00577266;
extern "C" unsigned long g_00577362;
extern "C" unsigned long g_00577363;
extern "C" unsigned long g_00577364;
extern "C" unsigned long g_00577382;
extern "C" unsigned long g_005773b4;
extern "C" unsigned long g_00577466;
extern "C" unsigned long g_00577554;
extern "C" unsigned long g_005775e0;
extern "C" unsigned long g_005775e4;
extern "C" unsigned long g_005775e8;
extern "C" unsigned long g_005775ec;
extern "C" unsigned long g_005775f0;
extern "C" unsigned long g_005775f4;
extern "C" unsigned long g_00577646;
extern "C" unsigned long g_00577682;
extern "C" unsigned long g_00577794;
extern "C" unsigned long g_00577798;
extern "C" unsigned long g_0057779c;
extern "C" unsigned long g_005777a0;
extern "C" unsigned long g_005777a4;
extern "C" unsigned long g_005777a8;
extern "C" unsigned long g_005777b8;
extern "C" unsigned long g_005777bc;
extern "C" unsigned long g_00577808;
extern "C" unsigned long g_0057780c;
extern "C" unsigned long g_0057781c;
extern "C" unsigned long g_00577820;
extern "C" unsigned long g_00577832;
extern "C" unsigned long g_00577ac8;
extern "C" unsigned long g_00577b18;
extern "C" unsigned long g_00577b1c;
extern "C" unsigned long g_00577b20;
extern "C" unsigned long g_00577b24;
extern "C" unsigned long g_00577b28;
extern "C" unsigned long g_00577b2c;
extern "C" unsigned long g_00577ce8;
extern "C" unsigned long g_00577cec;
extern "C" unsigned long g_00577cf0;
extern "C" unsigned long g_00577cf4;
extern "C" unsigned long g_00577df0;
void JingJiShopPresenter::scrollViewDidZoom(cocos2d::extension::CCScrollView* p1)
{
  return;
}

bool JingJiShopPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void JingJiShopPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void JingJiShopPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 JingJiShopPresenter::numOfRow(BLGridView* p1)
{
  return 2;
}

JingJiShopPresenter::~JingJiShopPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00576c6c + g_00576cd0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x54;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x84;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x94;
  *(int *)((int)this + 4*(8)) = iVar2 + 0xac;
  *(int *)((int)this + 4*(9)) = iVar2 + 0xb8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00576c9e + g_00576cd4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void JingJiShopPresenter::onListenBuyId(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_00576d4e + g_00576d68),
                              *(undefined4 *)(&g_00576d50 + g_00576d64),0), iVar1 != 0)) {
    *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

undefined4 JingJiShopPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void JingJiShopPresenter::onRefreshImg()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  return;
}



void JingJiShopPresenter::onEnter()
{
  return;
}

void JingJiShopPresenter::onExit()
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

undefined4 JingJiShopPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void JingJiShopPresenter::sortJingJiShopData()
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
  
  uVar1 = (undefined4)(((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  uVar1 = (undefined4)(((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  piVar2 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*puVar3)))));
  piVar2 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  (**(code **)(*piVar2 + 0x1f8))(auStack_20,piVar2);
  uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1)))));
  iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar4),(int)(auStack_20[0]))));
  if (iVar5 != 0) {
    piVar2 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
    uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*puVar3)))));
  }
  piVar2 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  pcVar7 = *(code **)(*piVar2 + 0x88);
  piVar6 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  (**(code **)(*piVar6 + 0x1f8))(auStack_28,piVar6);
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar2,auStack_20);
  return;
}

undefined4 JingJiShopPresenter::initWithView(JingJiShopView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((JingJiShopView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00577170 + g_005771f0),0,0x20);
  piVar1 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getListButton();
  (**(code **)(*piVar1 + 0x24c))(piVar1,((int)this) + 0x20);
  iVar2 = ((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getScrollView();
  *(int *)(iVar2 + 0x128) = ((int)this) + 0x24;
  piVar1 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewItem();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getGridViewNum();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  JingJiShopPresenter::sortJingJiShopData();
  return 1;
}


void JingJiShopPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void JingJiShopPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x92)),(intptr_t)0);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_00576db2 + (intptr_t)(g_00576dd4))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00576db4 + (intptr_t)(g_00576dd8))),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x92);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x90);
  return;
}

void JingJiShopPresenter::onUpdateJiFen(cocos2d::CCObject* p1)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  iVar9 = (undefined4)(intptr_t)(g_00576ef0);
  piVar6 = *(int **)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576ef4)) + g_00576ef0);
  iStack_1c = (int)*(int *)&(*piVar6);
  if (((int)(intptr_t)p1 != 0) &&
     (uVar7 = *(undefined4 *)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576ef8)) + g_00576ef0),
     uVar8 = *(undefined4 *)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576efc)) + g_00576ef0),
     iVar1 = func_0079e55c(p1,uVar7,uVar8,0,uVar7,((int)this),uVar8), iVar1 != 0)) {
    (void)(((long long)::memset((void *)(auStack_30),(int)(0),(size_t)(0x14))));
    piVar10 = *(int **)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576f00)) + iVar9);
    iVar11 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576f04)) + iVar9));
    if ((-1 < *piVar10 << 0x1f) && (iVar2 = func_0079e33c(piVar10), iVar2 != 0)) {
      0 /* ctorZero */;
      func_0079e38c(piVar10);
      uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00576dfc + (intptr_t)(g_00576f08)) + iVar9));
      func_0079e39c(iVar11,uVar7,(unsigned char *)((char *)&g_00576e62 + (intptr_t)(g_00576f0c)),uVar7,uVar7);
    }
    uVar3 = (undefined4)(*(uint *)(iVar1 + 0x14));
    uVar5 = (undefined4)(uVar3 + *(uint *)(iVar11 + 0x78));
    iVar9 = ((int)uVar3 >> 0x1f) + *(int *)(iVar11 + 0x7c) +
            (uint)ghidra_CARRY4(uVar3,*(uint *)(iVar11 + 0x78));
    uVar12 = (undefined4)(intptr_t)(ghidra_CONCAT44(iVar9,uVar5));
    if ((iVar9 < 1) && ((iVar9 != 0 || (uVar5 <= g_00576f10)))) {
      puVar4 = (unsigned char *)((char *)&g_00576eae + (intptr_t)(g_00576f18));
    }
    else {
      uVar12 = (undefined4)(intptr_t)(func_0079e774(uVar5,iVar9,g_00576ee8,g_00576eec));
      puVar4 = (unsigned char *)((char *)&g_00576ea4 + (intptr_t)(g_00576f14));
    }
    (void)(((long long)::sprintf((char *)(auStack_30),(char const *)(puVar4),(int)uVar12,(int)((ulonglong)uVar12 >> 0x20))));
    piVar10 = (int *)((JingJiShopView *)*(undefined4 *)(((int)this) + 0x28))->getLabJifen();
    (**(code **)(*piVar10 + 0x234))(piVar10,auStack_30);
    uVar7 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar7)->postNotification((char const*)(unsigned char *)((char *)&g_00576ece + (intptr_t)(g_00576f1c)));
  }
  if (iStack_1c != *piVar6) {
    func_0079e914();
  }
  return;
}

JingJiShopPresenter::JingJiShopPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopPresenter::addItems(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopPresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 JingJiShopPresenter::numOfColumn(BLGridView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void JingJiShopPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopPresenter::scrollViewDidScroll(cocos2d::extension::CCScrollView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopPresenter::onBuySuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

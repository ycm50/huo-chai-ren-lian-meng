#include "MainCityUI.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCScrollView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMap.h"
#include "BluetoothHelper.h"
#include "CircusData.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "MineData.h"
#include "MissionCreamSelectData.h"
#include "PracticeData.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004dd204;
extern "C" unsigned long UNK_004dd21c;
extern "C" unsigned long UNK_004dd234;
extern "C" unsigned long UNK_004dd24c;
extern "C" unsigned long UNK_004dd264;
extern "C" unsigned long UNK_004dd2d4;
extern "C" unsigned long UNK_004dd30e;
extern "C" unsigned long UNK_004dd354;
extern "C" unsigned long UNK_004dd368;
extern "C" unsigned long UNK_004dd390;
extern "C" unsigned long UNK_004dd3a4;
extern "C" unsigned long UNK_004dd3f0;
extern "C" unsigned long UNK_004dd470;
extern "C" unsigned long UNK_004dd548;
extern "C" unsigned long UNK_004dd54a;
extern "C" unsigned long UNK_004dd5a8;
extern "C" unsigned long UNK_004dd5aa;
extern "C" unsigned long UNK_004dd5ee;
extern "C" unsigned long UNK_004dd63e;
extern "C" unsigned long UNK_004dd66c;
extern "C" unsigned long UNK_004dd6b0;
extern "C" unsigned long UNK_004dd6fc;
extern "C" unsigned long UNK_004dd7a4;
extern "C" unsigned long UNK_004dd7cc;
extern "C" unsigned long UNK_004dd808;
extern "C" unsigned long UNK_004dd852;
extern "C" unsigned long UNK_004dd88a;
extern "C" unsigned long UNK_004dd8ce;
extern "C" unsigned long UNK_004dd904;
extern "C" unsigned long UNK_004dd9aa;
extern "C" unsigned long UNK_004dd9e2;
extern "C" unsigned long UNK_004dd9f8;
extern "C" unsigned long UNK_004dda26;
extern "C" unsigned long UNK_004ddab2;
extern "C" unsigned long UNK_004ddac0;
extern "C" unsigned long UNK_004ddb1a;
extern "C" unsigned long UNK_004ddc12;
extern "C" unsigned long UNK_004ddc14;
extern "C" unsigned long UNK_004ddc46;
extern "C" unsigned long UNK_004ddc82;
extern "C" unsigned long UNK_004ddca2;
extern "C" unsigned long UNK_004ddce0;
extern "C" unsigned long UNK_004ddd2a;
extern "C" unsigned long UNK_004ddd6e;
extern "C" unsigned long UNK_004dddb2;
extern "C" unsigned long UNK_004ddf44;
extern "C" unsigned long UNK_004ddf68;
extern "C" unsigned long UNK_004ddf76;
extern "C" unsigned long UNK_004ddf92;
extern "C" unsigned long UNK_004ddfae;
extern "C" unsigned long UNK_004ddfca;
extern "C" unsigned long UNK_004ddfdc;
extern "C" unsigned long UNK_004ddffc;
extern "C" unsigned long _DAT_004dd508;
extern "C" unsigned long _DAT_004dd50c;
extern "C" unsigned long _UNK_004dd208;
extern "C" unsigned long _UNK_004dd220;
extern "C" unsigned long _UNK_004dd238;
extern "C" unsigned long _UNK_004dd250;
extern "C" unsigned long _UNK_004dd268;
extern "C" unsigned long _UNK_004dd340;
extern "C" unsigned long _UNK_004dd344;
extern "C" unsigned long _UNK_004dd358;
extern "C" unsigned long _UNK_004dd36c;
extern "C" unsigned long _UNK_004dd394;
extern "C" unsigned long _UNK_004dd3a8;
extern "C" unsigned long _UNK_004dd3cc;
extern "C" unsigned long _UNK_004dd3f4;
extern "C" unsigned long _UNK_004dd474;
extern "C" unsigned long _UNK_004dd568;
extern "C" unsigned long _UNK_004dd56c;
extern "C" unsigned long _UNK_004dd5d8;
extern "C" unsigned long _UNK_004dd5dc;
extern "C" unsigned long _UNK_004dd94c;
extern "C" unsigned long _UNK_004dd950;
extern "C" unsigned long _UNK_004dd954;
extern "C" unsigned long _UNK_004dd958;
extern "C" unsigned long _UNK_004dd95c;
extern "C" unsigned long _UNK_004dd960;
extern "C" unsigned long _UNK_004dd964;
extern "C" unsigned long _UNK_004dd968;
extern "C" unsigned long _UNK_004dd96c;
extern "C" unsigned long _UNK_004dd970;
extern "C" unsigned long _UNK_004dd974;
extern "C" unsigned long _UNK_004dd978;
extern "C" unsigned long _UNK_004dd97c;
extern "C" unsigned long _UNK_004dd980;
extern "C" unsigned long _UNK_004dd984;
extern "C" unsigned long _UNK_004dd988;
extern "C" unsigned long _UNK_004dd98c;
extern "C" unsigned long _UNK_004dd990;
extern "C" unsigned long _UNK_004dd994;
extern "C" unsigned long _UNK_004ddb4c;
extern "C" unsigned long _UNK_004ddb50;
extern "C" unsigned long _UNK_004ddb54;
extern "C" unsigned long _UNK_004ddb58;
extern "C" unsigned long _UNK_004ddb5c;
extern "C" unsigned long _UNK_004ddb60;
extern "C" unsigned long _UNK_004ddb64;
extern "C" unsigned long _UNK_004ddb68;
extern "C" unsigned long _UNK_004dde14;
extern "C" unsigned long _UNK_004dde18;
extern "C" unsigned long _UNK_004dde1c;
extern "C" unsigned long _UNK_004dde20;
extern "C" unsigned long _UNK_004dde24;
extern "C" unsigned long _UNK_004dde28;
extern "C" unsigned long _UNK_004dde2c;
extern "C" unsigned long _UNK_004dde30;
extern "C" unsigned long _UNK_004dde34;
extern "C" unsigned long _UNK_004dde38;
extern "C" unsigned long _UNK_004ddf4c;
extern "C" unsigned long _UNK_004ddf50;
extern "C" unsigned long _UNK_004de00c;
extern "C" unsigned long _UNK_004de010;
extern "C" unsigned long _UNK_004de014;
extern "C" unsigned long _UNK_004de018;
extern "C" unsigned long _UNK_004de01c;
extern "C" unsigned long _UNK_004de020;
extern "C" unsigned long _UNK_004de024;
extern "C" unsigned long _UNK_004de028;
extern "C" unsigned long _UNK_004de02c;
extern "C" unsigned long _UNK_004de030;
extern "C" unsigned long _UNK_004de034;
extern "C" unsigned long _UNK_004de038;
extern "C" unsigned long g_004dd204;
extern "C" unsigned long g_004dd208;
extern "C" unsigned long g_004dd21c;
extern "C" unsigned long g_004dd220;
extern "C" unsigned long g_004dd234;
extern "C" unsigned long g_004dd238;
extern "C" unsigned long g_004dd24c;
extern "C" unsigned long g_004dd250;
extern "C" unsigned long g_004dd264;
extern "C" unsigned long g_004dd268;
extern "C" unsigned long g_004dd2d4;
extern "C" unsigned long g_004dd30e;
extern "C" unsigned long g_004dd340;
extern "C" unsigned long g_004dd344;
extern "C" unsigned long g_004dd354;
extern "C" unsigned long g_004dd358;
extern "C" unsigned long g_004dd368;
extern "C" unsigned long g_004dd36c;
extern "C" unsigned long g_004dd390;
extern "C" unsigned long g_004dd394;
extern "C" unsigned long g_004dd3a4;
extern "C" unsigned long g_004dd3a8;
extern "C" unsigned long g_004dd3cc;
extern "C" unsigned long g_004dd3f0;
extern "C" unsigned long g_004dd3f4;
extern "C" unsigned long g_004dd470;
extern "C" unsigned long g_004dd474;
extern "C" unsigned long g_004dd508;
extern "C" unsigned long g_004dd50c;
extern "C" unsigned long g_004dd548;
extern "C" unsigned long g_004dd54a;
extern "C" unsigned long g_004dd568;
extern "C" unsigned long g_004dd56c;
extern "C" unsigned long g_004dd5a8;
extern "C" unsigned long g_004dd5aa;
extern "C" unsigned long g_004dd5d8;
extern "C" unsigned long g_004dd5dc;
extern "C" unsigned long g_004dd5ee;
extern "C" unsigned long g_004dd63e;
extern "C" unsigned long g_004dd66c;
extern "C" unsigned long g_004dd6b0;
extern "C" unsigned long g_004dd6fc;
extern "C" unsigned long g_004dd7a4;
extern "C" unsigned long g_004dd7cc;
extern "C" unsigned long g_004dd808;
extern "C" unsigned long g_004dd852;
extern "C" unsigned long g_004dd88a;
extern "C" unsigned long g_004dd8ce;
extern "C" unsigned long g_004dd904;
extern "C" unsigned long g_004dd94c;
extern "C" unsigned long g_004dd950;
extern "C" unsigned long g_004dd954;
extern "C" unsigned long g_004dd958;
extern "C" unsigned long g_004dd95c;
extern "C" unsigned long g_004dd960;
extern "C" unsigned long g_004dd964;
extern "C" unsigned long g_004dd968;
extern "C" unsigned long g_004dd96c;
extern "C" unsigned long g_004dd970;
extern "C" unsigned long g_004dd974;
extern "C" unsigned long g_004dd978;
extern "C" unsigned long g_004dd97c;
extern "C" unsigned long g_004dd980;
extern "C" unsigned long g_004dd984;
extern "C" unsigned long g_004dd988;
extern "C" unsigned long g_004dd98c;
extern "C" unsigned long g_004dd990;
extern "C" unsigned long g_004dd994;
extern "C" unsigned long g_004dd9aa;
extern "C" unsigned long g_004dd9e2;
extern "C" unsigned long g_004dd9f8;
extern "C" unsigned long g_004dda26;
extern "C" unsigned long g_004ddab2;
extern "C" unsigned long g_004ddac0;
extern "C" unsigned long g_004ddb1a;
extern "C" unsigned long g_004ddb4c;
extern "C" unsigned long g_004ddb50;
extern "C" unsigned long g_004ddb54;
extern "C" unsigned long g_004ddb58;
extern "C" unsigned long g_004ddb5c;
extern "C" unsigned long g_004ddb60;
extern "C" unsigned long g_004ddb64;
extern "C" unsigned long g_004ddb68;
extern "C" unsigned long g_004ddc12;
extern "C" unsigned long g_004ddc14;
extern "C" unsigned long g_004ddc46;
extern "C" unsigned long g_004ddc82;
extern "C" unsigned long g_004ddca2;
extern "C" unsigned long g_004ddce0;
extern "C" unsigned long g_004ddd2a;
extern "C" unsigned long g_004ddd6e;
extern "C" unsigned long g_004dddb2;
extern "C" unsigned long g_004dde14;
extern "C" unsigned long g_004dde18;
extern "C" unsigned long g_004dde1c;
extern "C" unsigned long g_004dde20;
extern "C" unsigned long g_004dde24;
extern "C" unsigned long g_004dde28;
extern "C" unsigned long g_004dde2c;
extern "C" unsigned long g_004dde30;
extern "C" unsigned long g_004dde34;
extern "C" unsigned long g_004dde38;
extern "C" unsigned long g_004ddf44;
extern "C" unsigned long g_004ddf4c;
extern "C" unsigned long g_004ddf50;
extern "C" unsigned long g_004ddf68;
extern "C" unsigned long g_004ddf76;
extern "C" unsigned long g_004ddf92;
extern "C" unsigned long g_004ddfae;
extern "C" unsigned long g_004ddfca;
extern "C" unsigned long g_004ddfdc;
extern "C" unsigned long g_004ddffc;
extern "C" unsigned long g_004de00c;
extern "C" unsigned long g_004de010;
extern "C" unsigned long g_004de014;
extern "C" unsigned long g_004de018;
extern "C" unsigned long g_004de01c;
extern "C" unsigned long g_004de020;
extern "C" unsigned long g_004de024;
extern "C" unsigned long g_004de028;
extern "C" unsigned long g_004de02c;
extern "C" unsigned long g_004de030;
extern "C" unsigned long g_004de034;
extern "C" unsigned long g_004de038;
bool MainCityUI::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void MainCityUI::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void MainCityUI::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void MainCityUI::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void MainCityUI::scrollViewDidZoom(cocos2d::extension::CCScrollView* p1)
{
  return;
}

void MainCityUI::tick(float p1)
{
  if (*(int **)(((int)this) + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(((int)this) + 0x10c) + 0x234))();
  }
  return;
}

MainCityUI::~MainCityUI()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004dd2d4 + g_004dd340);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x214;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x250;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x260;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004dd30e + g_004dd344,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void MainCityUI::onArea(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x7a);
  return;
}

void MainCityUI::onToJiTan()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_004dd3cc);
  return;
}



MainCityUI::MainCityUI()
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
  iVar3 = *(int *)(g_004dd508 + 0x4dd488);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x214;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x244;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x250;
  *(int *)((int)this + 4*(0x42)) = iVar3 + 0x260;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"MainCityUI"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}





void MainCityUI::onPlayerLvUp(cocos2d::CCObject* p1)
{
  MainCityUI::setEntrancesStatus();
  return;
}



void MainCityUI::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void MainCityUI::onMine()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xb1)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xb1);
  }
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_004dd3f0 + (intptr_t)(g_004dd3f4)));
  return;
}

void MainCityUI::scrollViewDidScroll(cocos2d::extension::CCScrollView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int MainCityUI::getHeroCount()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_004dd548 + (intptr_t)(g_004dd568))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_004dd54a + (intptr_t)(g_004dd56c))),0),
       piVar1 != (int *)0x0)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x38))());
      iVar6 = (undefined4)(intptr_t)(iVar6 + (uint)(iVar4 != 0));
    }
  }
  return iVar6;
}

int MainCityUI::getMaxHeroLv()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar5 = 0;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar6 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar6 < uVar3); uVar6 = uVar6 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    if ((((iVar4 != 0) &&
         (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_004dd5a8 + (intptr_t)(g_004dd5d8))),
                                          *(undefined4 *)((unsigned char *)((char *)&g_004dd5aa + (intptr_t)(g_004dd5dc))),0),
         piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 0x38))(), iVar4 != 0)) &&
       (iVar4 = (**(code **)(*piVar1 + 0x20))(piVar1), iVar5 < iVar4)) {
      iVar5 = (undefined4)(intptr_t)(iVar4);
    }
  }
  return iVar5;
}

void MainCityUI::onRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MainCityUI::setEntrancesStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool MainCityUI::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar2))->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
    piVar3 = (int *)::operator new(0x1e8);
    ::new ((void *)piVar3) BLMap();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? BLMap */
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
    if (iVar4 == 0) {
      (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
      piVar3 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar3))->autorelease();
    }
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    ((BLMap *)(piVar3))->initWith(g_004ddf4c);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    0 /* ctorZero */;
    piVar3 = (int *)cocos2d::extension::CCScrollView::create(*(cocos2d::CCSize *)(void *)&auStack_20, 0)
    ;
    (**(code **)(*(int *)this + 200))(((int)this),piVar3);
    pcVar5 = *(code **)(*piVar3 + 0x88);
    uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x260))());
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    (**(code **)(*(int *)(piVar3) + (0x1fc)))(piVar3,0);
    uVar2 = (undefined4)(cocos2d::CCNode::create());
    (**(code **)(*(int *)(piVar3) + (200)))(piVar3,uVar2);
    iVar4 = (undefined4)(intptr_t)(g_004ddf50);
    piVar3[0x4a] = (int)(((int)this) + 0x42);
    0 /* ctorZero */;
    ((cocos2d::extension::CCScrollView *)(piVar3))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
    ((MainCityUI *)(((int)this)))->setEntrancesStatus();
  }
  return iVar1;
}

void MainCityUI::onEnter()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)(intptr_t)(g_004de00c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004ddf68 + (intptr_t)(g_004de010)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004ddf76 + (intptr_t)(g_004de014)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004ddf68 + (intptr_t)(g_004de018)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004ddf92 + (intptr_t)(g_004de01c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004ddf68 + (intptr_t)(g_004de020)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004ddfae + (intptr_t)(g_004de024)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ddf68 + (intptr_t)(g_004de028)) + iVar1));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_004ddfca + (intptr_t)(g_004de02c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_004ddfdc + (intptr_t)(g_004de030)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004ddf68 + (intptr_t)(g_004de034)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004ddffc + (intptr_t)(g_004de038)), 0);
  ((cocos2d::CCLayer *)(((int)this)))->onEnter();
  return;
}

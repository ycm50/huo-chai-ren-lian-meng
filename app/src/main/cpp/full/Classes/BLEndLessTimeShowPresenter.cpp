#include "BLEndLessTimeShowPresenter.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "BLEndLessTimeShowView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BackPackData.h"
#include "BluetoothHelper.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MissionEndLessData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052af40;
extern "C" unsigned long UNK_0052af5a;
extern "C" unsigned long UNK_0052afa0;
extern "C" unsigned long UNK_0052afc8;
extern "C" unsigned long UNK_0052afdc;
extern "C" unsigned long UNK_0052b024;
extern "C" unsigned long UNK_0052b0b6;
extern "C" unsigned long UNK_0052b0d2;
extern "C" unsigned long UNK_0052b13c;
extern "C" unsigned long UNK_0052b13e;
extern "C" unsigned long UNK_0052b160;
extern "C" unsigned long UNK_0052b1d4;
extern "C" unsigned long UNK_0052b27c;
extern "C" unsigned long UNK_0052b2ea;
extern "C" unsigned long UNK_0052b3de;
extern "C" unsigned long UNK_0052b3df;
extern "C" unsigned long UNK_0052b3e0;
extern "C" unsigned long UNK_0052b406;
extern "C" unsigned long UNK_0052b438;
extern "C" unsigned long UNK_0052b4ea;
extern "C" unsigned long UNK_0052b5d8;
extern "C" unsigned long UNK_0052b70a;
extern "C" unsigned long UNK_0052b818;
extern "C" unsigned long UNK_0052b89e;
extern "C" unsigned long UNK_0052b924;
extern "C" unsigned long UNK_0052ba1c;
extern "C" unsigned long UNK_0052bbaa;
extern "C" unsigned long UNK_0052bbca;
extern "C" unsigned long UNK_0052bbfc;
extern "C" unsigned long UNK_0052bbfe;
extern "C" unsigned long _UNK_0052af8c;
extern "C" unsigned long _UNK_0052af90;
extern "C" unsigned long _UNK_0052afa4;
extern "C" unsigned long _UNK_0052afcc;
extern "C" unsigned long _UNK_0052b070;
extern "C" unsigned long _UNK_0052b074;
extern "C" unsigned long _UNK_0052b078;
extern "C" unsigned long _UNK_0052b0fc;
extern "C" unsigned long _UNK_0052b100;
extern "C" unsigned long _UNK_0052b148;
extern "C" unsigned long _UNK_0052b14c;
extern "C" unsigned long _UNK_0052b164;
extern "C" unsigned long _UNK_0052b1fc;
extern "C" unsigned long _UNK_0052b200;
extern "C" unsigned long _UNK_0052b2a4;
extern "C" unsigned long _UNK_0052b2a8;
extern "C" unsigned long _UNK_0052b664;
extern "C" unsigned long _UNK_0052b668;
extern "C" unsigned long _UNK_0052b66c;
extern "C" unsigned long _UNK_0052b670;
extern "C" unsigned long _UNK_0052b674;
extern "C" unsigned long _UNK_0052b678;
extern "C" unsigned long _UNK_0052ba80;
extern "C" unsigned long _UNK_0052ba84;
extern "C" unsigned long _UNK_0052ba88;
extern "C" unsigned long _UNK_0052ba8c;
extern "C" unsigned long _UNK_0052ba90;
extern "C" unsigned long _UNK_0052bbe0;
extern "C" unsigned long _UNK_0052bbe4;
extern "C" unsigned long _UNK_0052bd2c;
extern "C" unsigned long _UNK_0052bd30;
extern "C" unsigned long _UNK_0052bd34;
extern "C" unsigned long g_0052af40;
extern "C" unsigned long g_0052af5a;
extern "C" unsigned long g_0052af8c;
extern "C" unsigned long g_0052af90;
extern "C" unsigned long g_0052afa0;
extern "C" unsigned long g_0052afa4;
extern "C" unsigned long g_0052afc8;
extern "C" unsigned long g_0052afcc;
extern "C" unsigned long g_0052afdc;
extern "C" unsigned long g_0052b024;
extern "C" unsigned long g_0052b070;
extern "C" unsigned long g_0052b074;
extern "C" unsigned long g_0052b078;
extern "C" unsigned long g_0052b0b6;
extern "C" unsigned long g_0052b0d2;
extern "C" unsigned long g_0052b0fc;
extern "C" unsigned long g_0052b100;
extern "C" unsigned long g_0052b13c;
extern "C" unsigned long g_0052b13e;
extern "C" unsigned long g_0052b148;
extern "C" unsigned long g_0052b14c;
extern "C" unsigned long g_0052b160;
extern "C" unsigned long g_0052b164;
extern "C" unsigned long g_0052b1d4;
extern "C" unsigned long g_0052b1fc;
extern "C" unsigned long g_0052b200;
extern "C" unsigned long g_0052b27c;
extern "C" unsigned long g_0052b2a4;
extern "C" unsigned long g_0052b2a8;
extern "C" unsigned long g_0052b2ea;
extern "C" unsigned long g_0052b3de;
extern "C" unsigned long g_0052b3df;
extern "C" unsigned long g_0052b3e0;
extern "C" unsigned long g_0052b406;
extern "C" unsigned long g_0052b438;
extern "C" unsigned long g_0052b4ea;
extern "C" unsigned long g_0052b5d8;
extern "C" unsigned long g_0052b664;
extern "C" unsigned long g_0052b668;
extern "C" unsigned long g_0052b66c;
extern "C" unsigned long g_0052b670;
extern "C" unsigned long g_0052b674;
extern "C" unsigned long g_0052b678;
extern "C" unsigned long g_0052b70a;
extern "C" unsigned long g_0052b818;
extern "C" unsigned long g_0052b89e;
extern "C" unsigned long g_0052b924;
extern "C" unsigned long g_0052ba1c;
extern "C" unsigned long g_0052ba80;
extern "C" unsigned long g_0052ba84;
extern "C" unsigned long g_0052ba88;
extern "C" unsigned long g_0052ba8c;
extern "C" unsigned long g_0052ba90;
extern "C" unsigned long g_0052bbaa;
extern "C" unsigned long g_0052bbca;
extern "C" unsigned long g_0052bbe0;
extern "C" unsigned long g_0052bbe4;
extern "C" unsigned long g_0052bbfc;
extern "C" unsigned long g_0052bbfe;
extern "C" unsigned long g_0052bd2c;
extern "C" unsigned long g_0052bd30;
extern "C" unsigned long g_0052bd34;
bool BLEndLessTimeShowPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEndLessTimeShowPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessTimeShowPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessTimeShowPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessTimeShowPresenter::tick(float p1)
{
  return;
}

BLEndLessTimeShowPresenter::~BLEndLessTimeShowPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052af40 + g_0052af8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052af5a + g_0052af90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLEndLessTimeShowPresenter::onBack(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 != 0) {
      ((BluetoothHelper *)this)->share();
      ((BluetoothHelper *)this)->enterMainCity();
    }
  }
  return;
}

BLEndLessTimeShowPresenter::BLEndLessTimeShowPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0052b0b6 + g_0052b0fc);
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)this = iVar2 + 8;
  *(undefined1 *)(((int)this) + 7) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052b0d2 + g_0052b100,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLEndLessTimeShowPresenter::create(BLEndLessTimeShowView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLEndLessTimeShowPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0052b160 + g_0052b164);
  return;
}



void BLEndLessTimeShowPresenter::onZheDie(cocos2d::CCObject* p1, unsigned int p2)
{
  if (*(char *)(((int)this) + 0x1c) == '\0') {
    BLEndLessTimeShowPresenter::funHide();
  }
  else {
    BLEndLessTimeShowPresenter::funShow();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLEndLessTimeShowPresenter::updateBtnZheDieShow()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  int *piVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0052afdc + (intptr_t)(g_0052b070)),&iStack_20);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_1c);
  if (*(char *)(((int)this) + 0x1c) == '\0') {
    (**(code **)(*(int *)(piVar1) + (0x98)))(piVar1,g_0052b074);
  }
  piVar2 = (int *)((BLEndLessTimeShowView *)*(undefined4 *)(((int)this) + 0x18))->getBtnZheDie();
  (**(code **)(*(int *)(piVar2) + (0x30c)))(piVar2,piVar1,1);
  func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0052b024 + (intptr_t)(g_0052b078)),&iStack_20);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_1c);
  if (*(char *)(((int)this) + 0x1c) == '\0') {
    (**(code **)(*(int *)(piVar1) + (0x98)))(piVar1,g_0052b074);
  }
  piVar2 = (int *)((BLEndLessTimeShowView *)*(undefined4 *)(((int)this) + 0x18))->getBtnZheDie();
  (**(code **)(*(int *)(piVar2) + (0x30c)))(piVar2,piVar1,2);
  *(byte *)(((int)this) + 0x1c) = *(byte *)(((int)this) + 0x1c) ^ 1;
  return;
}

void BLEndLessTimeShowPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimeShowPresenter::funHide()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimeShowPresenter::funShow()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimeShowPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimeShowPresenter::updateReward(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimeShowPresenter::initWithView(BLEndLessTimeShowView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEndLessTimeShowView *)p1)->getBtnZheDie();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0052bbaa + g_0052bbe0),0,0x20);
  piVar1 = (int *)((BLEndLessTimeShowView *)*(undefined4 *)(((int)this) + 0x18))->getBtnBack();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0052bbca + g_0052bbe4),0,0x20);
  BLEndLessTimeShowPresenter::updateReward(1);
  return;
}

void BLEndLessTimeShowPresenter::showUpdateEndlessInfo(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

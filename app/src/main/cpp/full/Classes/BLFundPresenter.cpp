#include "BLFundPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLFundItem.h"
#include "BLFundView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
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
extern "C" long long software_udf(...);

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052ec5c;
extern "C" unsigned long UNK_0052ec74;
extern "C" unsigned long UNK_0052ec8c;
extern "C" unsigned long UNK_0052eca4;
extern "C" unsigned long UNK_0052ecbc;
extern "C" unsigned long UNK_0052ecd4;
extern "C" unsigned long UNK_0052ed30;
extern "C" unsigned long UNK_0052ed60;
extern "C" unsigned long UNK_0052eda4;
extern "C" unsigned long UNK_0052edcc;
extern "C" unsigned long UNK_0052eddc;
extern "C" unsigned long UNK_0052ee5c;
extern "C" unsigned long UNK_0052ee96;
extern "C" unsigned long UNK_0052ef1c;
extern "C" unsigned long UNK_0052ef34;
extern "C" unsigned long UNK_0052ef4c;
extern "C" unsigned long UNK_0052ef64;
extern "C" unsigned long UNK_0052ef9e;
extern "C" unsigned long UNK_0052f002;
extern "C" unsigned long UNK_0052f048;
extern "C" unsigned long UNK_0052f0c2;
extern "C" unsigned long UNK_0052f100;
extern "C" unsigned long UNK_0052f116;
extern "C" unsigned long UNK_0052f12a;
extern "C" unsigned long UNK_0052f16c;
extern "C" unsigned long UNK_0052f16e;
extern "C" unsigned long UNK_0052f1e4;
extern "C" unsigned long UNK_0052f1e6;
extern "C" unsigned long UNK_0052f24e;
extern "C" unsigned long UNK_0052f264;
extern "C" unsigned long UNK_0052f2b6;
extern "C" unsigned long UNK_0052f34c;
extern "C" unsigned long UNK_0052f34d;
extern "C" unsigned long UNK_0052f34e;
extern "C" unsigned long UNK_0052f36c;
extern "C" unsigned long UNK_0052f444;
extern "C" unsigned long UNK_0052f448;
extern "C" unsigned long UNK_0052f470;
extern "C" unsigned long UNK_0052f4c0;
extern "C" unsigned long UNK_0052f512;
extern "C" unsigned long UNK_0052f64e;
extern "C" unsigned long UNK_0052f64f;
extern "C" unsigned long UNK_0052f650;
extern "C" unsigned long UNK_0052f66e;
extern "C" unsigned long UNK_0052f744;
extern "C" unsigned long UNK_0052f752;
extern "C" unsigned long UNK_0052f760;
extern "C" unsigned long UNK_0052f788;
extern "C" unsigned long UNK_0052f7ac;
extern "C" unsigned long UNK_0052f7ae;
extern "C" unsigned long UNK_0052f7c8;
extern "C" unsigned long UNK_0052f7ca;
extern "C" unsigned long UNK_0052f7e2;
extern "C" unsigned long _UNK_0052ec60;
extern "C" unsigned long _UNK_0052ec78;
extern "C" unsigned long _UNK_0052ec90;
extern "C" unsigned long _UNK_0052eca8;
extern "C" unsigned long _UNK_0052ecc0;
extern "C" unsigned long _UNK_0052ecd8;
extern "C" unsigned long _UNK_0052ed90;
extern "C" unsigned long _UNK_0052ed94;
extern "C" unsigned long _UNK_0052eda8;
extern "C" unsigned long _UNK_0052edd0;
extern "C" unsigned long _UNK_0052edec;
extern "C" unsigned long _UNK_0052ee48;
extern "C" unsigned long _UNK_0052ee4c;
extern "C" unsigned long _UNK_0052ee60;
extern "C" unsigned long _UNK_0052efc8;
extern "C" unsigned long _UNK_0052efcc;
extern "C" unsigned long _UNK_0052efd0;
extern "C" unsigned long _UNK_0052efd4;
extern "C" unsigned long _UNK_0052efd8;
extern "C" unsigned long _UNK_0052efdc;
extern "C" unsigned long _UNK_0052f074;
extern "C" unsigned long _UNK_0052f078;
extern "C" unsigned long _UNK_0052f1b8;
extern "C" unsigned long _UNK_0052f1bc;
extern "C" unsigned long _UNK_0052f1c0;
extern "C" unsigned long _UNK_0052f1c4;
extern "C" unsigned long _UNK_0052f1c8;
extern "C" unsigned long _UNK_0052f1cc;
extern "C" unsigned long _UNK_0052f1f0;
extern "C" unsigned long _UNK_0052f1f4;
extern "C" unsigned long _UNK_0052f410;
extern "C" unsigned long _UNK_0052f414;
extern "C" unsigned long _UNK_0052f418;
extern "C" unsigned long _UNK_0052f41c;
extern "C" unsigned long _UNK_0052f420;
extern "C" unsigned long _UNK_0052f424;
extern "C" unsigned long _UNK_0052f428;
extern "C" unsigned long _UNK_0052f71c;
extern "C" unsigned long _UNK_0052f720;
extern "C" unsigned long _UNK_0052f724;
extern "C" unsigned long _UNK_0052f728;
extern "C" unsigned long _UNK_0052f72c;
extern "C" unsigned long _UNK_0052f730;
extern "C" unsigned long _UNK_0052f734;
extern "C" unsigned long _UNK_0052f810;
extern "C" unsigned long _UNK_0052f814;
extern "C" unsigned long _UNK_0052f818;
extern "C" unsigned long _UNK_0052f81c;
extern "C" unsigned long _UNK_0052f820;
extern "C" unsigned long _UNK_0052f824;
extern "C" unsigned long _UNK_0052f828;
extern "C" unsigned long _UNK_0052f82c;
extern "C" unsigned long _UNK_0052f830;
extern "C" unsigned long _UNK_0052f834;
extern "C" unsigned long g_0052ec5c;
extern "C" unsigned long g_0052ec60;
extern "C" unsigned long g_0052ec74;
extern "C" unsigned long g_0052ec78;
extern "C" unsigned long g_0052ec8c;
extern "C" unsigned long g_0052ec90;
extern "C" unsigned long g_0052eca4;
extern "C" unsigned long g_0052eca8;
extern "C" unsigned long g_0052ecbc;
extern "C" unsigned long g_0052ecc0;
extern "C" unsigned long g_0052ecd4;
extern "C" unsigned long g_0052ecd8;
extern "C" unsigned long g_0052ed30;
extern "C" unsigned long g_0052ed60;
extern "C" unsigned long g_0052ed90;
extern "C" unsigned long g_0052ed94;
extern "C" unsigned long g_0052eda4;
extern "C" unsigned long g_0052eda8;
extern "C" unsigned long g_0052edcc;
extern "C" unsigned long g_0052edd0;
extern "C" unsigned long g_0052eddc;
extern "C" unsigned long g_0052edec;
extern "C" unsigned long g_0052ee48;
extern "C" unsigned long g_0052ee4c;
extern "C" unsigned long g_0052ee5c;
extern "C" unsigned long g_0052ee60;
extern "C" unsigned long g_0052ee96;
extern "C" unsigned long g_0052ef1c;
extern "C" unsigned long g_0052ef34;
extern "C" unsigned long g_0052ef4c;
extern "C" unsigned long g_0052ef64;
extern "C" unsigned long g_0052ef9e;
extern "C" unsigned long g_0052efc8;
extern "C" unsigned long g_0052efcc;
extern "C" unsigned long g_0052efd0;
extern "C" unsigned long g_0052efd4;
extern "C" unsigned long g_0052efd8;
extern "C" unsigned long g_0052efdc;
extern "C" unsigned long g_0052f002;
extern "C" unsigned long g_0052f048;
extern "C" unsigned long g_0052f074;
extern "C" unsigned long g_0052f078;
extern "C" unsigned long g_0052f0c2;
extern "C" unsigned long g_0052f100;
extern "C" unsigned long g_0052f116;
extern "C" unsigned long g_0052f12a;
extern "C" unsigned long g_0052f16c;
extern "C" unsigned long g_0052f16e;
extern "C" unsigned long g_0052f1b8;
extern "C" unsigned long g_0052f1bc;
extern "C" unsigned long g_0052f1c0;
extern "C" unsigned long g_0052f1c4;
extern "C" unsigned long g_0052f1c8;
extern "C" unsigned long g_0052f1cc;
extern "C" unsigned long g_0052f1e4;
extern "C" unsigned long g_0052f1e6;
extern "C" unsigned long g_0052f1f0;
extern "C" unsigned long g_0052f1f4;
extern "C" unsigned long g_0052f24e;
extern "C" unsigned long g_0052f264;
extern "C" unsigned long g_0052f2b6;
extern "C" unsigned long g_0052f34c;
extern "C" unsigned long g_0052f34d;
extern "C" unsigned long g_0052f34e;
extern "C" unsigned long g_0052f36c;
extern "C" unsigned long g_0052f410;
extern "C" unsigned long g_0052f414;
extern "C" unsigned long g_0052f418;
extern "C" unsigned long g_0052f41c;
extern "C" unsigned long g_0052f420;
extern "C" unsigned long g_0052f424;
extern "C" unsigned long g_0052f428;
extern "C" unsigned long g_0052f444;
extern "C" unsigned long g_0052f448;
extern "C" unsigned long g_0052f470;
extern "C" unsigned long g_0052f4c0;
extern "C" unsigned long g_0052f512;
extern "C" unsigned long g_0052f64e;
extern "C" unsigned long g_0052f64f;
extern "C" unsigned long g_0052f650;
extern "C" unsigned long g_0052f66e;
extern "C" unsigned long g_0052f71c;
extern "C" unsigned long g_0052f720;
extern "C" unsigned long g_0052f724;
extern "C" unsigned long g_0052f728;
extern "C" unsigned long g_0052f72c;
extern "C" unsigned long g_0052f730;
extern "C" unsigned long g_0052f734;
extern "C" unsigned long g_0052f744;
extern "C" unsigned long g_0052f752;
extern "C" unsigned long g_0052f760;
extern "C" unsigned long g_0052f788;
extern "C" unsigned long g_0052f7ac;
extern "C" unsigned long g_0052f7ae;
extern "C" unsigned long g_0052f7c8;
extern "C" unsigned long g_0052f7ca;
extern "C" unsigned long g_0052f7e2;
extern "C" unsigned long g_0052f810;
extern "C" unsigned long g_0052f814;
extern "C" unsigned long g_0052f818;
extern "C" unsigned long g_0052f81c;
extern "C" unsigned long g_0052f820;
extern "C" unsigned long g_0052f824;
extern "C" unsigned long g_0052f828;
extern "C" unsigned long g_0052f82c;
extern "C" unsigned long g_0052f830;
extern "C" unsigned long g_0052f834;
bool BLFundPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFundPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFundPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFundPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLFundPresenter::numOfCellItem(BLTableView* p1)
{
  return 0xb;
}

void BLFundPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLFundPresenter::tick(float p1)
{
  return;
}

BLFundPresenter::~BLFundPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052ed30 + g_0052ed90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052ed60 + g_0052ed94,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFundPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x191);
  return;
}

undefined4 BLFundPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(g_0052ee4c);
  uVar3 = (undefined4)(g_0052ee48);
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


BLFundPresenter::BLFundPresenter()
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
  iVar3 = *(int *)(&g_0052f002 + g_0052f074);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(9)) = 0;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052f048 + g_0052f078,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFundPresenter::create(BLFundView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLFundPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLFundPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLFundPresenter::initWithView(BLFundView* p1)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLFundView *)(p1))->getBtnclose();
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0052f0c2 + (intptr_t)(g_0052f1b8))),0,0x20);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar2) + (0x28)))();
  iVar3 = (undefined4)(intptr_t)(((UserData *)this)->isFundBought());
  if (iVar3 == 0) {
    piVar2 = (int *)((BLFundView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnBuy();
    (**(code **)(*(int *)(piVar2) + (0x254)))
              (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0052f12a + (intptr_t)(g_0052f1c4))),0,0x20);
  }
  else {
    piVar2 = (int *)((BLFundView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnBuy();
    (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,0);
    piVar2 = (int *)((BLFundView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelBuy();
    (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,(unsigned char *)((char *)&g_0052f100 + (intptr_t)(g_0052f1bc)));
    piVar2 = (int *)((BLFundView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelBuy();
    (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,(unsigned char *)((char *)&g_0052f116 + (intptr_t)(g_0052f1c0)));
  }
  iVar7 = 0;
  *(undefined4 *)(((int)this) + 0x24) = 0;
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
  while( true ) {
    if (iVar3 <= iVar7) {
      uVar4 = (undefined4)(((BLFundView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView());
      ((BLTableView *)(uVar4))->reloadData(0, 1);
      return 1;
    }
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)iVar7));
    if (iVar5 == 0) break;
    piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_0052f16c + (intptr_t)(g_0052f1c8))),
                                    *(undefined4 *)((unsigned char *)((char *)&g_0052f16e + (intptr_t)(g_0052f1cc))),0);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x38)))());
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(piVar2) + (0x20)))(piVar2), *(int *)(((int)this) + 0x24) < iVar5)) {
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
      *(undefined4 *)(((int)this) + 0x24) = uVar6;
    }
    iVar7 = (undefined4)(intptr_t)(iVar7 + 1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x52f1a0);
  (*pcVar1)();
}

void BLFundPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFundPresenter::onChargeComplete(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((BLFundView *)*(undefined4 *)(((int)this) + 0x20))->getBtnBuy();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,0);
  piVar1 = (int *)((BLFundView *)*(undefined4 *)(((int)this) + 0x20))->getLabelBuy();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,(unsigned char *)((char *)&g_0052f24e + (intptr_t)(g_0052f418)));
  piVar1 = (int *)((BLFundView *)*(undefined4 *)(((int)this) + 0x20))->getLabelBuy();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_0052f264 + (intptr_t)(g_0052f41c)));
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)this)->addVirNumber(uVar2, 2, g_0052f410);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x28)))();
  ((UserData *)this)->setFundBought();
  uVar2 = (undefined4)(((BLFundView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(1, 0);
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  iVar3 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
  *(undefined4 *)(iVar3 + 0x14) = 1;
  uVar4 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0052f2b6 + (intptr_t)(g_0052f420)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  func_0079e52c(iVar3 + 0x18,auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)iVar3);
  piVar1 = (int *)((ItemData *)this)->create();
  ((ItemData *)piVar1)->initWith(2);
  (**(code **)(*(int *)(piVar1) + (0x9c)))(piVar1,300);
  iVar3 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
  *(undefined4 *)(iVar3 + 0x14) = 1;
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
  iVar5 = (undefined4)(intptr_t)(g_0052f424 + iVar5 * 3);
  *(undefined *)(iVar3 + 0x24) = (&g_0052f34c)[iVar5];
  *(undefined *)(iVar3 + 0x25) = (&g_0052f34d)[iVar5];
  *(undefined *)(iVar3 + 0x26) = (&g_0052f34e)[iVar5];
  uVar4 = (undefined4)(((BLLanguage *)this)->share());
  (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_2c,piVar1);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
  func_0079e53c(auStack_24,auStack_28);
  func_0079e854(auStack_24,(unsigned char *)((char *)&g_0052f36c + (intptr_t)(g_0052f428)));
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x98)))(piVar1));
  ConvertToString<int>(auStack_20, uVar4, 0);
  func_0079e53c(auStack_1c,auStack_24);
  func_0079e5dc(auStack_1c,auStack_20);
  func_0079e52c(iVar3 + 0x18,auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)iVar3);
  uVar4 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar4)->showRichText((cocos2d::CCArray*)uVar2);
  return;
}

void BLFundPresenter::onGetFund(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFundPresenter::onFundBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

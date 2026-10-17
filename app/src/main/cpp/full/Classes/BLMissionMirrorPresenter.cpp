#include "BLMissionMirrorPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "BLMissionMirrorView.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCString.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamBuyPresenter.h"
#include "BLMissionCreamBuyView.h"
#include "BLMissionMirrorBtnPresenter.h"
#include "BLMissionMirrorRoleItemPresenter.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "MirrorDataManager.h"
#include "MirrorRoleItemData.h"
#include "MissionSelectHeroData.h"
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

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079ea84(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005cb6b8;
extern "C" unsigned long UNK_005cb804;
extern "C" unsigned long UNK_005cb858;
extern "C" unsigned long UNK_005cb86e;
extern "C" unsigned long UNK_005cb908;
extern "C" unsigned long UNK_005cb96c;
extern "C" unsigned long UNK_005cb96e;
extern "C" unsigned long UNK_005cb98e;
extern "C" unsigned long UNK_005cb9ec;
extern "C" unsigned long UNK_005cb9ee;
extern "C" unsigned long UNK_005cba04;
extern "C" unsigned long UNK_005cba06;
extern "C" unsigned long UNK_005cba28;
extern "C" unsigned long UNK_005cba66;
extern "C" unsigned long UNK_005cbb14;
extern "C" unsigned long UNK_005cbb4e;
extern "C" unsigned long UNK_005cbb8c;
extern "C" unsigned long UNK_005cbb8e;
extern "C" unsigned long UNK_005cbba4;
extern "C" unsigned long UNK_005cbba6;
extern "C" unsigned long UNK_005cbc84;
extern "C" unsigned long UNK_005cbc9a;
extern "C" unsigned long UNK_005cbcb0;
extern "C" unsigned long UNK_005cbcd6;
extern "C" unsigned long UNK_005cbd64;
extern "C" unsigned long UNK_005cbd8c;
extern "C" unsigned long UNK_005cbec0;
extern "C" unsigned long UNK_005cbee6;
extern "C" unsigned long UNK_005cbef8;
extern "C" unsigned long UNK_005cbf20;
extern "C" unsigned long UNK_005cbfaa;
extern "C" unsigned long UNK_005cbfbc;
extern "C" unsigned long UNK_005cbfdc;
extern "C" unsigned long UNK_005cbffc;
extern "C" unsigned long UNK_005cc01c;
extern "C" unsigned long UNK_005cc03c;
extern "C" unsigned long UNK_005cc068;
extern "C" unsigned long UNK_005cc08e;
extern "C" unsigned long UNK_005cc6e8;
extern "C" unsigned long UNK_005cc8d6;
extern "C" unsigned long UNK_005ccb32;
extern "C" unsigned long UNK_005ccb36;
extern "C" unsigned long UNK_005ccbb8;
extern "C" unsigned long UNK_005ccc0a;
extern "C" unsigned long _UNK_005cb6bc;
extern "C" unsigned long _UNK_005cb7c8;
extern "C" unsigned long _UNK_005cb7cc;
extern "C" unsigned long _UNK_005cb834;
extern "C" unsigned long _UNK_005cb8d8;
extern "C" unsigned long _UNK_005cb8dc;
extern "C" unsigned long _UNK_005cb918;
extern "C" unsigned long _UNK_005cb99c;
extern "C" unsigned long _UNK_005cb9a0;
extern "C" unsigned long _UNK_005cb9a4;
extern "C" unsigned long _UNK_005cb9cc;
extern "C" unsigned long _UNK_005cbab8;
extern "C" unsigned long _UNK_005cbabc;
extern "C" unsigned long _UNK_005cbac0;
extern "C" unsigned long _UNK_005cbac4;
extern "C" unsigned long _UNK_005cbac8;
extern "C" unsigned long _UNK_005cbacc;
extern "C" unsigned long _UNK_005cbad0;
extern "C" unsigned long _UNK_005cbae4;
extern "C" unsigned long _UNK_005cbc00;
extern "C" unsigned long _UNK_005cbc04;
extern "C" unsigned long _UNK_005cbc08;
extern "C" unsigned long _UNK_005cbc0c;
extern "C" unsigned long _UNK_005cbc10;
extern "C" unsigned long _UNK_005cbc14;
extern "C" unsigned long _UNK_005cbca0;
extern "C" unsigned long _UNK_005cbca4;
extern "C" unsigned long _UNK_005cbd50;
extern "C" unsigned long _UNK_005cbd54;
extern "C" unsigned long _UNK_005cbd68;
extern "C" unsigned long _UNK_005cbd90;
extern "C" unsigned long _UNK_005cbf4c;
extern "C" unsigned long _UNK_005cbf50;
extern "C" unsigned long _UNK_005cbf54;
extern "C" unsigned long _UNK_005cbf58;
extern "C" unsigned long _UNK_005cc0b0;
extern "C" unsigned long _UNK_005cc0b4;
extern "C" unsigned long _UNK_005cc0b8;
extern "C" unsigned long _UNK_005cc0bc;
extern "C" unsigned long _UNK_005cc0c0;
extern "C" unsigned long _UNK_005cc0c4;
extern "C" unsigned long _UNK_005cc0c8;
extern "C" unsigned long _UNK_005cc0cc;
extern "C" unsigned long _UNK_005cc0d0;
extern "C" unsigned long _UNK_005cc0d4;
extern "C" unsigned long _UNK_005cc0d8;
extern "C" unsigned long _UNK_005cc0dc;
extern "C" unsigned long _UNK_005cc0e0;
extern "C" unsigned long _UNK_005cc958;
extern "C" unsigned long _UNK_005cc95c;
extern "C" unsigned long _UNK_005cc960;
extern "C" unsigned long _UNK_005cc964;
extern "C" unsigned long _UNK_005cc968;
extern "C" unsigned long _UNK_005cc96c;
extern "C" unsigned long _UNK_005cc970;
extern "C" unsigned long _UNK_005cc974;
extern "C" unsigned long _UNK_005cc978;
extern "C" unsigned long _UNK_005ccb84;
extern "C" unsigned long _UNK_005ccb88;
extern "C" unsigned long _UNK_005ccd4c;
extern "C" unsigned long _UNK_005ccd50;
extern "C" unsigned long _UNK_005ccd54;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005cb6b8;
extern "C" unsigned long g_005cb6bc;
extern "C" unsigned long g_005cb7c8;
extern "C" unsigned long g_005cb7cc;
extern "C" unsigned long g_005cb804;
extern "C" unsigned long g_005cb834;
extern "C" unsigned long g_005cb858;
extern "C" unsigned long g_005cb86e;
extern "C" unsigned long g_005cb8d8;
extern "C" unsigned long g_005cb8dc;
extern "C" unsigned long g_005cb908;
extern "C" unsigned long g_005cb918;
extern "C" unsigned long g_005cb96c;
extern "C" unsigned long g_005cb96e;
extern "C" unsigned long g_005cb98e;
extern "C" unsigned long g_005cb99c;
extern "C" unsigned long g_005cb9a0;
extern "C" unsigned long g_005cb9a4;
extern "C" unsigned long g_005cb9cc;
extern "C" unsigned long g_005cb9ec;
extern "C" unsigned long g_005cb9ee;
extern "C" unsigned long g_005cba04;
extern "C" unsigned long g_005cba06;
extern "C" unsigned long g_005cba28;
extern "C" unsigned long g_005cba66;
extern "C" unsigned long g_005cbab8;
extern "C" unsigned long g_005cbabc;
extern "C" unsigned long g_005cbac0;
extern "C" unsigned long g_005cbac4;
extern "C" unsigned long g_005cbac8;
extern "C" unsigned long g_005cbacc;
extern "C" unsigned long g_005cbad0;
extern "C" unsigned long g_005cbae4;
extern "C" unsigned long g_005cbb14;
extern "C" unsigned long g_005cbb4e;
extern "C" unsigned long g_005cbb8c;
extern "C" unsigned long g_005cbb8e;
extern "C" unsigned long g_005cbba4;
extern "C" unsigned long g_005cbba6;
extern "C" unsigned long g_005cbc00;
extern "C" unsigned long g_005cbc04;
extern "C" unsigned long g_005cbc08;
extern "C" unsigned long g_005cbc0c;
extern "C" unsigned long g_005cbc10;
extern "C" unsigned long g_005cbc14;
extern "C" unsigned long g_005cbc84;
extern "C" unsigned long g_005cbc9a;
extern "C" unsigned long g_005cbca0;
extern "C" unsigned long g_005cbca4;
extern "C" unsigned long g_005cbcb0;
extern "C" unsigned long g_005cbcd6;
extern "C" unsigned long g_005cbd50;
extern "C" unsigned long g_005cbd54;
extern "C" unsigned long g_005cbd64;
extern "C" unsigned long g_005cbd68;
extern "C" unsigned long g_005cbd8c;
extern "C" unsigned long g_005cbd90;
extern "C" unsigned long g_005cbec0;
extern "C" unsigned long g_005cbee6;
extern "C" unsigned long g_005cbef8;
extern "C" unsigned long g_005cbf20;
extern "C" unsigned long g_005cbf4c;
extern "C" unsigned long g_005cbf50;
extern "C" unsigned long g_005cbf54;
extern "C" unsigned long g_005cbf58;
extern "C" unsigned long g_005cbfaa;
extern "C" unsigned long g_005cbfbc;
extern "C" unsigned long g_005cbfdc;
extern "C" unsigned long g_005cbffc;
extern "C" unsigned long g_005cc01c;
extern "C" unsigned long g_005cc03c;
extern "C" unsigned long g_005cc068;
extern "C" unsigned long g_005cc08e;
extern "C" unsigned long g_005cc0b0;
extern "C" unsigned long g_005cc0b4;
extern "C" unsigned long g_005cc0b8;
extern "C" unsigned long g_005cc0bc;
extern "C" unsigned long g_005cc0c0;
extern "C" unsigned long g_005cc0c4;
extern "C" unsigned long g_005cc0c8;
extern "C" unsigned long g_005cc0cc;
extern "C" unsigned long g_005cc0d0;
extern "C" unsigned long g_005cc0d4;
extern "C" unsigned long g_005cc0d8;
extern "C" unsigned long g_005cc0dc;
extern "C" unsigned long g_005cc0e0;
extern "C" unsigned long g_005cc6e8;
extern "C" unsigned long g_005cc8d6;
extern "C" unsigned long g_005cc958;
extern "C" unsigned long g_005cc95c;
extern "C" unsigned long g_005cc960;
extern "C" unsigned long g_005cc964;
extern "C" unsigned long g_005cc968;
extern "C" unsigned long g_005cc96c;
extern "C" unsigned long g_005cc970;
extern "C" unsigned long g_005cc974;
extern "C" unsigned long g_005cc978;
extern "C" unsigned long g_005ccb32;
extern "C" unsigned long g_005ccb36;
extern "C" unsigned long g_005ccb84;
extern "C" unsigned long g_005ccb88;
extern "C" unsigned long g_005ccbb8;
extern "C" unsigned long g_005ccc0a;
extern "C" unsigned long g_005ccd4c;
extern "C" unsigned long g_005ccd50;
extern "C" unsigned long g_005ccd54;
bool BLMissionMirrorPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLMissionMirrorPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2;
}

void BLMissionMirrorPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

undefined4 BLMissionMirrorPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

undefined8 BLMissionMirrorPresenter::onCancleRole()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  func_0079e2dc(((int)this) + 0x30,&g_005cb804 + g_005cb834);
  iVar1 = ((MirrorDataManager *)this)->getInstance();
  func_0079e53c(&uStack_14,((int)this) + 0x30);
  func_0079e52c(iVar1 + 0x14,&uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,((int)this));
}


void BLMissionMirrorPresenter::onUpdateNum()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  iVar1 = ((MirrorDataManager *)this)->getInstance();
  uVar5 = (undefined4)(*(undefined4 *)(iVar1 + 0x1c));
  ((MirrorDataManager *)this)->getInstance();
  uVar2 = (undefined4)(((MirrorDataManager *)this)->getTotalNum());
  cocos2d::CCString::createWithFormat((char const*)&g_005cb908 + g_005cb918, uVar5, uVar2);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  return;
}


void BLMissionMirrorPresenter::onShop(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_005cb9cc);
  return;
}


void BLMissionMirrorPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_005cbae4);
  return;
}


undefined8 BLMissionMirrorPresenter::onPurchaseSuccess()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = (undefined4)(((MirrorDataManager *)this)->getInstance());
  iVar2 = ((MirrorDataManager *)this)->getInstance();
  uVar1 = (undefined4)(((MirrorDataManager *)uVar1)->getPurchasePrice(*(int *)(iVar2 + 0x24) + 1));
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*piVar3 + 0x28))());
  uVar6 = ((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar1))));
  ((UserData *)uVar4)->subVirNumber(2, (int)uVar6, (int)((ulonglong)uVar6 >> 0x20));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x10);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
  pcVar5 = *(code **)(*piVar3 + 0x234);
  iVar2 = ((MirrorDataManager *)this)->getInstance();
  uVar4 = (undefined4)(*(undefined4 *)(iVar2 + 0x1c));
  ((MirrorDataManager *)this)->getInstance();
  uVar1 = (undefined4)(((MirrorDataManager *)this)->getTotalNum());
  cocos2d::CCString::createWithFormat((char const*)&g_005cbc84 + g_005cbca0, uVar4, uVar1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar5)(piVar3,uVar1);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005cbc9a + g_005cbca4);
  return ghidra_CONCAT44(p2,1);
}

BLMissionMirrorPresenter::~BLMissionMirrorPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005cbcb0 + g_005cbd50);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x80;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cbcd6 + g_005cbd54,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  for (piVar3 = (int *)*(int *)((int)this + 4*(9)); piVar3 != (int *)*(int *)((int)this + 4*(10)); piVar3 = piVar3 + 1) {
    iVar2 = (int)*(int *)&(*piVar3);
    if (iVar2 != 0) {
      ((MirrorRoleItemData *)iVar2)->~MirrorRoleItemData();
      (void)(::operator delete((void *)(iVar2)));
    }
  }
  *(int *)((int)this + 4*(10)) = *(int *)((int)this + 4*(9));
  func_0079e2bc(((int)this) + 0xc);
  if (*(int *)((int)this + 4*(9)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(9)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMirrorPresenter::BLMissionMirrorPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005cbec0 + g_005cbf4c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  iVar1 = g_005cbf50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x6c;
  *(int *)((int)this + 4*(0xc)) = *(int *)(&g_005cbee6 + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005cbef8 + g_005cbf54,&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(10)) = *(int *)((int)this + 4*(9));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  func_0079e2dc(((int)this) + 0xc,&g_005cbf20 + g_005cbf58);
  *(int *)((int)this + 4*(0xd)) = 1;
  return;
}

undefined4 BLMissionMirrorPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMissionMirrorPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLMissionMirrorPresenter::onSweep(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::onAddNum(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar2 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
  iVar6 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x1c));
  ((MirrorDataManager *)this)->getInstance();
  iVar2 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getTotalNum());
  if (iVar6 < iVar2) {
    iVar2 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
    if (0 < *(int *)(iVar2 + 0x24)) {
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      iVar2 = (undefined4)(intptr_t)(((UIManager *)(uVar3))->showUIById(0x10));
      if (iVar2 != 0) {
        iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005cbb8c + (intptr_t)(g_005cbc08))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005cbb8e + (intptr_t)(g_005cbc0c))),0);
        uVar3 = (undefined4)(0);
        if (*(int *)(iVar2 + 0x24) != 0) {
          uVar3 = func_0079e55c(*(int *)(iVar2 + 0x24),
                                  *(undefined4 *)((unsigned char *)((char *)&g_005cbba4 + (intptr_t)(g_005cbc10))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_005cbba6 + (intptr_t)(g_005cbc14))),0);
        }
        piVar5 = (int *)((BLMissionCreamBuyView *)(uVar3))->getPresenter();
        (**(code **)(*(int *)(piVar5) + (0x30)))(piVar5,1);
        uVar3 = (undefined4)(((BLMissionCreamBuyView *)(uVar3))->getPresenter());
        uVar4 = (undefined4)(((MirrorDataManager *)this)->getInstance());
        iVar2 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
        uVar4 = (undefined4)(((MirrorDataManager *)(uVar4))->getPurchasePrice(*(undefined4 *)(iVar2 + 0x24)));
        ((BLMissionCreamBuyPresenter *)(uVar3))->updateWithData(uVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x5cbbf8);
      (*pcVar1)();
    }
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005cbb4e + (intptr_t)(g_005cbc04)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar3))->showToast((char const*)auStack_1c[0]);
  }
  else {
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005cbb14 + (intptr_t)(g_005cbc00)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar3))->showToast((char const*)auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void BLMissionMirrorPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::initWithView(BLMissionMirrorView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::onUpdateSweepBtn()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorPresenter::onSelectRole(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_1c = (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_005ccb32 + (intptr_t)(g_005ccb84))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005ccb36 + (intptr_t)(g_005ccb88))),0), iVar1 != 0)) {
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x30,uVar2);
    iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
    func_0079e53c(&iStack_1c,((int)this) + 0x30);
    func_0079e52c(iVar1 + 0x14,&iStack_1c);
    func_0079e2bc(&iStack_1c);
  }
  BLMissionMirrorPresenter::onUpdateSweepBtn();
  return;
}

void BLMissionMirrorPresenter::onChallengeSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

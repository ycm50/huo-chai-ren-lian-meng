#include "BLMissionMoneyTreePresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCUserDefault.h"
#include "CCDirector.h"
#include "BLMissionMoneyTreeView.h"
#include "BLListButton.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamBuyPresenter.h"
#include "BLMissionCreamBuyView.h"
#include "BLMissionData.h"
#include "BLTableView.h"
#include "BLTreeItemPresenter.h"
#include "BLTreeRoleItemPresenter.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PlayerData.h"
#include "RoleData.h"
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
#include "BLTreeItemView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079ea04(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d12e4;
extern "C" unsigned long UNK_005d1304;
extern "C" unsigned long UNK_005d14ce;
extern "C" unsigned long UNK_005d14d0;
extern "C" unsigned long UNK_005d14e6;
extern "C" unsigned long UNK_005d14e8;
extern "C" unsigned long UNK_005d14fc;
extern "C" unsigned long UNK_005d151a;
extern "C" unsigned long UNK_005d1586;
extern "C" unsigned long UNK_005d15a2;
extern "C" unsigned long UNK_005d15be;
extern "C" unsigned long UNK_005d15e0;
extern "C" unsigned long UNK_005d15fc;
extern "C" unsigned long UNK_005d163c;
extern "C" unsigned long UNK_005d1888;
extern "C" unsigned long UNK_005d188c;
extern "C" unsigned long UNK_005d18de;
extern "C" unsigned long UNK_005d1946;
extern "C" unsigned long UNK_005d1948;
extern "C" unsigned long UNK_005d1998;
extern "C" unsigned long UNK_005d1aba;
extern "C" unsigned long UNK_005d1ac4;
extern "C" unsigned long UNK_005d1e0e;
extern "C" unsigned long UNK_005d1e1e;
extern "C" unsigned long UNK_005d1e2a;
extern "C" unsigned long UNK_005d1e4a;
extern "C" unsigned long UNK_005d1e58;
extern "C" unsigned long UNK_005d1e70;
extern "C" unsigned long UNK_005d1ebc;
extern "C" unsigned long UNK_005d1ebe;
extern "C" unsigned long UNK_005d1f62;
extern "C" unsigned long UNK_005d201a;
extern "C" unsigned long UNK_005d201c;
extern "C" unsigned long UNK_005d208e;
extern "C" unsigned long UNK_005d20c8;
extern "C" unsigned long UNK_005d20fe;
extern "C" unsigned long UNK_005d2160;
extern "C" unsigned long UNK_005d2188;
extern "C" unsigned long UNK_005d219e;
extern "C" unsigned long UNK_005d21c0;
extern "C" unsigned long UNK_005d21da;
extern "C" unsigned long UNK_005d22c4;
extern "C" unsigned long UNK_005d2568;
extern "C" unsigned long UNK_005d257e;
extern "C" unsigned long UNK_005d25c0;
extern "C" unsigned long UNK_005d25fa;
extern "C" unsigned long UNK_005d2606;
extern "C" unsigned long UNK_005d2626;
extern "C" unsigned long UNK_005d266e;
extern "C" unsigned long UNK_005d268a;
extern "C" unsigned long UNK_005d2872;
extern "C" unsigned long UNK_005d2882;
extern "C" unsigned long _UNK_005d12e8;
extern "C" unsigned long _UNK_005d1308;
extern "C" unsigned long _UNK_005d1430;
extern "C" unsigned long _UNK_005d1434;
extern "C" unsigned long _UNK_005d1558;
extern "C" unsigned long _UNK_005d155c;
extern "C" unsigned long _UNK_005d1560;
extern "C" unsigned long _UNK_005d1564;
extern "C" unsigned long _UNK_005d1568;
extern "C" unsigned long _UNK_005d156c;
extern "C" unsigned long _UNK_005d1570;
extern "C" unsigned long _UNK_005d16c0;
extern "C" unsigned long _UNK_005d16c4;
extern "C" unsigned long _UNK_005d16c8;
extern "C" unsigned long _UNK_005d16cc;
extern "C" unsigned long _UNK_005d16d0;
extern "C" unsigned long _UNK_005d16d4;
extern "C" unsigned long _UNK_005d16d8;
extern "C" unsigned long _UNK_005d16dc;
extern "C" unsigned long _UNK_005d16e0;
extern "C" unsigned long _UNK_005d16e4;
extern "C" unsigned long _UNK_005d16e8;
extern "C" unsigned long _UNK_005d18fc;
extern "C" unsigned long _UNK_005d1900;
extern "C" unsigned long _UNK_005d1904;
extern "C" unsigned long _UNK_005d1954;
extern "C" unsigned long _UNK_005d1958;
extern "C" unsigned long _UNK_005d1a78;
extern "C" unsigned long _UNK_005d1ad4;
extern "C" unsigned long _UNK_005d1ad8;
extern "C" unsigned long _UNK_005d1fbc;
extern "C" unsigned long _UNK_005d1fc0;
extern "C" unsigned long _UNK_005d1fc4;
extern "C" unsigned long _UNK_005d1fc8;
extern "C" unsigned long _UNK_005d1fcc;
extern "C" unsigned long _UNK_005d1fd0;
extern "C" unsigned long _UNK_005d1fd4;
extern "C" unsigned long _UNK_005d1fd8;
extern "C" unsigned long _UNK_005d1fdc;
extern "C" unsigned long _UNK_005d20b4;
extern "C" unsigned long _UNK_005d20b8;
extern "C" unsigned long _UNK_005d20bc;
extern "C" unsigned long _UNK_005d214c;
extern "C" unsigned long _UNK_005d2150;
extern "C" unsigned long _UNK_005d2164;
extern "C" unsigned long _UNK_005d218c;
extern "C" unsigned long _UNK_005d2220;
extern "C" unsigned long _UNK_005d2224;
extern "C" unsigned long _UNK_005d2228;
extern "C" unsigned long _UNK_005d22a0;
extern "C" unsigned long _UNK_005d22a4;
extern "C" unsigned long _UNK_005d22a8;
extern "C" unsigned long _UNK_005d23e4;
extern "C" unsigned long _UNK_005d23e8;
extern "C" unsigned long _UNK_005d23ec;
extern "C" unsigned long _UNK_005d23f0;
extern "C" unsigned long _UNK_005d23f4;
extern "C" unsigned long _UNK_005d23f8;
extern "C" unsigned long _UNK_005d282c;
extern "C" unsigned long _UNK_005d2830;
extern "C" unsigned long _UNK_005d2834;
extern "C" unsigned long _UNK_005d2838;
extern "C" unsigned long _UNK_005d283c;
extern "C" unsigned long _UNK_005d2840;
extern "C" unsigned long _UNK_005d2844;
extern "C" unsigned long _UNK_005d2848;
extern "C" unsigned long _UNK_005d2890;
extern "C" unsigned long _UNK_005d2894;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_005d12e4;
extern "C" unsigned long g_005d12e8;
extern "C" unsigned long g_005d1304;
extern "C" unsigned long g_005d1308;
extern "C" unsigned long g_005d1430;
extern "C" unsigned long g_005d1434;
extern "C" unsigned long g_005d14ce;
extern "C" unsigned long g_005d14d0;
extern "C" unsigned long g_005d14e6;
extern "C" unsigned long g_005d14e8;
extern "C" unsigned long g_005d14fc;
extern "C" unsigned long g_005d151a;
extern "C" unsigned long g_005d1558;
extern "C" unsigned long g_005d155c;
extern "C" unsigned long g_005d1560;
extern "C" unsigned long g_005d1564;
extern "C" unsigned long g_005d1568;
extern "C" unsigned long g_005d156c;
extern "C" unsigned long g_005d1570;
extern "C" unsigned long g_005d1586;
extern "C" unsigned long g_005d15a2;
extern "C" unsigned long g_005d15be;
extern "C" unsigned long g_005d15e0;
extern "C" unsigned long g_005d15fc;
extern "C" unsigned long g_005d163c;
extern "C" unsigned long g_005d16c0;
extern "C" unsigned long g_005d16c4;
extern "C" unsigned long g_005d16c8;
extern "C" unsigned long g_005d16cc;
extern "C" unsigned long g_005d16d0;
extern "C" unsigned long g_005d16d4;
extern "C" unsigned long g_005d16d8;
extern "C" unsigned long g_005d16dc;
extern "C" unsigned long g_005d16e0;
extern "C" unsigned long g_005d16e4;
extern "C" unsigned long g_005d16e8;
extern "C" unsigned long g_005d1888;
extern "C" unsigned long g_005d188c;
extern "C" unsigned long g_005d18de;
extern "C" unsigned long g_005d18fc;
extern "C" unsigned long g_005d1900;
extern "C" unsigned long g_005d1904;
extern "C" unsigned long g_005d1946;
extern "C" unsigned long g_005d1948;
extern "C" unsigned long g_005d1954;
extern "C" unsigned long g_005d1958;
extern "C" unsigned long g_005d1998;
extern "C" unsigned long g_005d1a78;
extern "C" unsigned long g_005d1aba;
extern "C" unsigned long g_005d1ac4;
extern "C" unsigned long g_005d1ad4;
extern "C" unsigned long g_005d1ad8;
extern "C" unsigned long g_005d1e0e;
extern "C" unsigned long g_005d1e1e;
extern "C" unsigned long g_005d1e2a;
extern "C" unsigned long g_005d1e4a;
extern "C" unsigned long g_005d1e58;
extern "C" unsigned long g_005d1e70;
extern "C" unsigned long g_005d1ebc;
extern "C" unsigned long g_005d1ebe;
extern "C" unsigned long g_005d1f62;
extern "C" unsigned long g_005d1fbc;
extern "C" unsigned long g_005d1fc0;
extern "C" unsigned long g_005d1fc4;
extern "C" unsigned long g_005d1fc8;
extern "C" unsigned long g_005d1fcc;
extern "C" unsigned long g_005d1fd0;
extern "C" unsigned long g_005d1fd4;
extern "C" unsigned long g_005d1fd8;
extern "C" unsigned long g_005d1fdc;
extern "C" unsigned long g_005d201a;
extern "C" unsigned long g_005d201c;
extern "C" unsigned long g_005d208e;
extern "C" unsigned long g_005d20b4;
extern "C" unsigned long g_005d20b8;
extern "C" unsigned long g_005d20bc;
extern "C" unsigned long g_005d20c8;
extern "C" unsigned long g_005d20fe;
extern "C" unsigned long g_005d214c;
extern "C" unsigned long g_005d2150;
extern "C" unsigned long g_005d2160;
extern "C" unsigned long g_005d2164;
extern "C" unsigned long g_005d2188;
extern "C" unsigned long g_005d218c;
extern "C" unsigned long g_005d219e;
extern "C" unsigned long g_005d21c0;
extern "C" unsigned long g_005d21da;
extern "C" unsigned long g_005d2220;
extern "C" unsigned long g_005d2224;
extern "C" unsigned long g_005d2228;
extern "C" unsigned long g_005d22a0;
extern "C" unsigned long g_005d22a4;
extern "C" unsigned long g_005d22a8;
extern "C" unsigned long g_005d22c4;
extern "C" unsigned long g_005d23e4;
extern "C" unsigned long g_005d23e8;
extern "C" unsigned long g_005d23ec;
extern "C" unsigned long g_005d23f0;
extern "C" unsigned long g_005d23f4;
extern "C" unsigned long g_005d23f8;
extern "C" unsigned long g_005d2568;
extern "C" unsigned long g_005d257e;
extern "C" unsigned long g_005d25c0;
extern "C" unsigned long g_005d25fa;
extern "C" unsigned long g_005d2606;
extern "C" unsigned long g_005d2626;
extern "C" unsigned long g_005d266e;
extern "C" unsigned long g_005d268a;
extern "C" unsigned long g_005d282c;
extern "C" unsigned long g_005d2830;
extern "C" unsigned long g_005d2834;
extern "C" unsigned long g_005d2838;
extern "C" unsigned long g_005d283c;
extern "C" unsigned long g_005d2840;
extern "C" unsigned long g_005d2844;
extern "C" unsigned long g_005d2848;
extern "C" unsigned long g_005d2872;
extern "C" unsigned long g_005d2882;
extern "C" unsigned long g_005d2890;
extern "C" unsigned long g_005d2894;
bool BLMissionMoneyTreePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionMoneyTreePresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  return;
}

int BLMissionMoneyTreePresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x30) - *(int *)(((int)this) + 0x2c) >> 2;
}

undefined4 BLMissionMoneyTreePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}







void BLMissionMoneyTreePresenter::onExit()
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


void BLMissionMoneyTreePresenter::initHeroData()
{
  int *piVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x40))();
  ((MissionSelectHeroData *)this)->updateData();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x11c))(piVar1,0xe,extraout_r2,*(code **)(*piVar1 + 0x11c),in_r3);
  return;
}

void BLMissionMoneyTreePresenter::updateRecommand()
{
  return;
}

void BLMissionMoneyTreePresenter::updateChallengeTime()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x130);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  uVar1 = (undefined4)(((cocos2d::CCUserDefault *)uVar1)->getIntegerForKey((char const*)&g_005d1aba + g_005d1ad4));
  cocos2d::CCString::createWithFormat((char const*)&g_005d1ac4 + g_005d1ad8, uVar1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar2,uVar1);
  return;
}

void BLMissionMoneyTreePresenter::onMoneyTreeTimeBuySuccess()
{
  BLMissionMoneyTreePresenter::updateChallengeTime();
  return;
}

void BLMissionMoneyTreePresenter::updateBtnStatus()
{
  return;
}

void BLMissionMoneyTreePresenter::updateBtnClickStatus(int p1)
{
  return;
}

void BLMissionMoneyTreePresenter::checkModeChallengable(int p1, bool p2)
{
  return;
}



BLMissionMoneyTreePresenter::~BLMissionMoneyTreePresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005d20c8 + (intptr_t)(g_005d214c))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(8)) = iVar2 + 0x8c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005d20fe + (intptr_t)(g_005d2150)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0xc)) = *(int *)((int)this + 4*(0xb));
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xb)->~vector();
  func_0079e2bc(((int)this) + 9);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMoneyTreePresenter::BLMissionMoneyTreePresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005d219e + g_005d2220);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x6c;
  *(int *)((int)this + 4*(8)) = iVar3 + 0x8c;
  iVar1 = g_005d2224;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x78;
  *(int *)((int)this + 4*(9)) = *(int *)(&g_005d21c0 + iVar1) + 0xc;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d21da + g_005d2228,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  *(int *)((int)this + 4*(0xc)) = *(int *)((int)this + 4*(0xb));
  return;
}

undefined4 BLMissionMoneyTreePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
void BLMissionMoneyTreePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x2a0);
  return;
}

void BLMissionMoneyTreePresenter::onAdjust(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->showUIById(0xb);
  return;
}

void BLMissionMoneyTreePresenter::onInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::onAddTime(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005d188c + (intptr_t)(g_005d1900))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005d1888 + (intptr_t)(g_005d18fc))),0),
     piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x118);
    ::new ((void *)piVar2) BLTreeItemView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x005d18e0;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x30) - *(int *)(((int)this) + 0x2c) >> 2)) {
    ((BLTreeItemPresenter *)(piVar2[0x42]))->updateWithData(*(undefined4 *)(p3 * 4 + *(int *)(((int)this) + 0x2c)));
    return;
  }
  func_0079e784((unsigned char *)((char *)&g_005d18de + (intptr_t)(g_005d1904)),p3);
code_r0x005d18e0:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x5d18ec);
  (*pcVar1)();
}

void BLMissionMoneyTreePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::updateMissionData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::updateHeroView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::onUpdateHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::updateReward()
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 0x2c);
  *(undefined4 *)(((int)this) + 0x30) = *(undefined4 *)(((int)this) + 0x2c);
  uStack_1c = (undefined4)(g_005d22a0);
  uStack_18 = (undefined4)(p3);
  ((std::vector<int, std::allocator<int>> *)(iVar1))->push_back(*(int const*)&uStack_1c);
  uStack_1c = (undefined4)(g_005d22a4);
  ((std::vector<int, std::allocator<int>> *)(iVar1))->push_back(*(int const*)&uStack_1c);
  uStack_1c = (undefined4)(g_005d22a8);
  ((std::vector<int, std::allocator<int>> *)(iVar1))->push_back(*(int const*)&uStack_1c);
  uStack_1c = (undefined4)(1);
  ((std::vector<int, std::allocator<int>> *)(iVar1))->push_back(*(int const*)&uStack_1c);
  ((BLTableView *)(*(undefined4 *)(*(int *)(((int)this) + 0x28) + 0x118)))->reloadData(0, 1);
  return;
}

void BLMissionMoneyTreePresenter::initWithView(BLMissionMoneyTreeView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(int *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  iVar1 = (undefined4)(intptr_t)(g_005d23e4);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_005d22c4 + (intptr_t)(g_005d23e8)) + g_005d23e4),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d22c4 + (intptr_t)(g_005d23ec)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x120);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d22c4 + (intptr_t)(g_005d23f0)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x128);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d22c4 + (intptr_t)(g_005d23f4)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x134);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d22c4 + (intptr_t)(g_005d23f8)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
  (**(code **)(*piVar2 + 0x24c))(piVar2,((int)this) + 0x18);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x118);
  (**(code **)(*piVar2 + 0x214))(piVar2,((int)this) + 0x1c);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x28) + 0x118);
  (**(code **)(*piVar2 + 0x21c))(piVar2,((int)this) + 0x20);
  BLMissionMoneyTreePresenter::updateReward();
  BLMissionMoneyTreePresenter::updateRecommand();
  BLMissionMoneyTreePresenter::updateMissionData();
  BLMissionMoneyTreePresenter::updateChallengeTime();
  BLMissionMoneyTreePresenter::updateBtnStatus();
  BLMissionMoneyTreePresenter::initHeroData();
  BLMissionMoneyTreePresenter::updateHeroView();
  BLMissionMoneyTreePresenter::updateBtnClickStatus(0);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar2 + 0x11c))(piVar2,0xe);
  return;
}

void BLMissionMoneyTreePresenter::onBeginChallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMoneyTreePresenter::onChallenge(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  iVar2 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x24,(unsigned char *)((char *)&g_005d2872 + (intptr_t)(g_005d2890))));
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_005d2882 + (intptr_t)(g_005d2894)));
  }
  else {
    ((BLMissionMoneyTreePresenter *)(((int)this)))->onBeginChallenge();
  }
  return;
}

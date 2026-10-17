#include "BLMineCollectDefensePresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMineCollectDefenseView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCUserDefault.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLRoleAttribute.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessUserData.h"
#include "MineData.h"
#include "MineitemData.h"
#include "PlayerData.h"
#include "RoleData.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a22e4;
extern "C" unsigned long UNK_005a22fe;
extern "C" unsigned long UNK_005a2344;
extern "C" unsigned long UNK_005a236c;
extern "C" unsigned long UNK_005a2394;
extern "C" unsigned long UNK_005a23ae;
extern "C" unsigned long UNK_005a23b2;
extern "C" unsigned long UNK_005a23cc;
extern "C" unsigned long UNK_005a23d0;
extern "C" unsigned long UNK_005a2406;
extern "C" unsigned long UNK_005a2472;
extern "C" unsigned long UNK_005a2480;
extern "C" unsigned long UNK_005a2592;
extern "C" unsigned long UNK_005a2882;
extern "C" unsigned long UNK_005a28ba;
extern "C" unsigned long UNK_005a28f4;
extern "C" unsigned long UNK_005a2938;
extern "C" unsigned long UNK_005a2968;
extern "C" unsigned long UNK_005a29ce;
extern "C" unsigned long UNK_005a29de;
extern "C" unsigned long UNK_005a2ac0;
extern "C" unsigned long UNK_005a2be2;
extern "C" unsigned long UNK_005a2c9a;
extern "C" unsigned long UNK_005a2cba;
extern "C" unsigned long UNK_005a2d08;
extern "C" unsigned long UNK_005a2d5e;
extern "C" unsigned long UNK_005a2dd6;
extern "C" unsigned long UNK_005a2de0;
extern "C" unsigned long UNK_005a2ea6;
extern "C" unsigned long UNK_005a2ec6;
extern "C" unsigned long UNK_005a2f16;
extern "C" unsigned long UNK_005a2f6a;
extern "C" unsigned long UNK_005a2fdc;
extern "C" unsigned long UNK_005a2fe6;
extern "C" unsigned long UNK_005a30b6;
extern "C" unsigned long UNK_005a30f4;
extern "C" unsigned long UNK_005a3192;
extern "C" unsigned long UNK_005a31de;
extern "C" unsigned long UNK_005a31f6;
extern "C" unsigned long UNK_005a3272;
extern "C" unsigned long _UNK_005a2330;
extern "C" unsigned long _UNK_005a2334;
extern "C" unsigned long _UNK_005a2348;
extern "C" unsigned long _UNK_005a2370;
extern "C" unsigned long _UNK_005a2434;
extern "C" unsigned long _UNK_005a2438;
extern "C" unsigned long _UNK_005a243c;
extern "C" unsigned long _UNK_005a2440;
extern "C" unsigned long _UNK_005a2444;
extern "C" unsigned long _UNK_005a2448;
extern "C" unsigned long _UNK_005a248c;
extern "C" unsigned long _UNK_005a2490;
extern "C" unsigned long _UNK_005a28bc;
extern "C" unsigned long _UNK_005a28c0;
extern "C" unsigned long _UNK_005a28c4;
extern "C" unsigned long _UNK_005a28c8;
extern "C" unsigned long _UNK_005a28cc;
extern "C" unsigned long _UNK_005a28d0;
extern "C" unsigned long _UNK_005a28d4;
extern "C" unsigned long _UNK_005a28d8;
extern "C" unsigned long _UNK_005a29ac;
extern "C" unsigned long _UNK_005a29b0;
extern "C" unsigned long _UNK_005a29b4;
extern "C" unsigned long _UNK_005a2a0c;
extern "C" unsigned long _UNK_005a2a10;
extern "C" unsigned long _UNK_005a2e18;
extern "C" unsigned long _UNK_005a2e1c;
extern "C" unsigned long _UNK_005a2e20;
extern "C" unsigned long _UNK_005a2e24;
extern "C" unsigned long _UNK_005a2e28;
extern "C" unsigned long _UNK_005a2e2c;
extern "C" unsigned long _UNK_005a2e30;
extern "C" unsigned long _UNK_005a2e34;
extern "C" unsigned long _UNK_005a2e38;
extern "C" unsigned long _UNK_005a2e3c;
extern "C" unsigned long _UNK_005a3040;
extern "C" unsigned long _UNK_005a3044;
extern "C" unsigned long _UNK_005a3048;
extern "C" unsigned long _UNK_005a304c;
extern "C" unsigned long _UNK_005a3050;
extern "C" unsigned long _UNK_005a3054;
extern "C" unsigned long _UNK_005a3058;
extern "C" unsigned long _UNK_005a305c;
extern "C" unsigned long _UNK_005a32ac;
extern "C" unsigned long _UNK_005a32b0;
extern "C" unsigned long _UNK_005a32b4;
extern "C" unsigned long _UNK_005a32b8;
extern "C" unsigned long _UNK_005a32bc;
extern "C" unsigned long _UNK_005a32c0;
extern "C" unsigned long _UNK_005a32c4;
extern "C" unsigned long _UNK_005a32c8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long extraout_r3_01;
extern "C" unsigned long unaff_r5;
extern "C" unsigned long g_005a22e4;
extern "C" unsigned long g_005a22fe;
extern "C" unsigned long g_005a2330;
extern "C" unsigned long g_005a2334;
extern "C" unsigned long g_005a2344;
extern "C" unsigned long g_005a2348;
extern "C" unsigned long g_005a236c;
extern "C" unsigned long g_005a2370;
extern "C" unsigned long g_005a2394;
extern "C" unsigned long g_005a23ae;
extern "C" unsigned long g_005a23b2;
extern "C" unsigned long g_005a23cc;
extern "C" unsigned long g_005a23d0;
extern "C" unsigned long g_005a2406;
extern "C" unsigned long g_005a2434;
extern "C" unsigned long g_005a2438;
extern "C" unsigned long g_005a243c;
extern "C" unsigned long g_005a2440;
extern "C" unsigned long g_005a2444;
extern "C" unsigned long g_005a2448;
extern "C" unsigned long g_005a2472;
extern "C" unsigned long g_005a2480;
extern "C" unsigned long g_005a248c;
extern "C" unsigned long g_005a2490;
extern "C" unsigned long g_005a2592;
extern "C" unsigned long g_005a2882;
extern "C" unsigned long g_005a28ba;
extern "C" unsigned long g_005a28bc;
extern "C" unsigned long g_005a28c0;
extern "C" unsigned long g_005a28c4;
extern "C" unsigned long g_005a28c8;
extern "C" unsigned long g_005a28cc;
extern "C" unsigned long g_005a28d0;
extern "C" unsigned long g_005a28d4;
extern "C" unsigned long g_005a28d8;
extern "C" unsigned long g_005a28f4;
extern "C" unsigned long g_005a2938;
extern "C" unsigned long g_005a2968;
extern "C" unsigned long g_005a29ac;
extern "C" unsigned long g_005a29b0;
extern "C" unsigned long g_005a29b4;
extern "C" unsigned long g_005a29ce;
extern "C" unsigned long g_005a29de;
extern "C" unsigned long g_005a2a0c;
extern "C" unsigned long g_005a2a10;
extern "C" unsigned long g_005a2ac0;
extern "C" unsigned long g_005a2be2;
extern "C" unsigned long g_005a2c9a;
extern "C" unsigned long g_005a2cba;
extern "C" unsigned long g_005a2d08;
extern "C" unsigned long g_005a2d5e;
extern "C" unsigned long g_005a2dd6;
extern "C" unsigned long g_005a2de0;
extern "C" unsigned long g_005a2e18;
extern "C" unsigned long g_005a2e1c;
extern "C" unsigned long g_005a2e20;
extern "C" unsigned long g_005a2e24;
extern "C" unsigned long g_005a2e28;
extern "C" unsigned long g_005a2e2c;
extern "C" unsigned long g_005a2e30;
extern "C" unsigned long g_005a2e34;
extern "C" unsigned long g_005a2e38;
extern "C" unsigned long g_005a2e3c;
extern "C" unsigned long g_005a2ea6;
extern "C" unsigned long g_005a2ec6;
extern "C" unsigned long g_005a2f16;
extern "C" unsigned long g_005a2f6a;
extern "C" unsigned long g_005a2fdc;
extern "C" unsigned long g_005a2fe6;
extern "C" unsigned long g_005a3040;
extern "C" unsigned long g_005a3044;
extern "C" unsigned long g_005a3048;
extern "C" unsigned long g_005a304c;
extern "C" unsigned long g_005a3050;
extern "C" unsigned long g_005a3054;
extern "C" unsigned long g_005a3058;
extern "C" unsigned long g_005a305c;
extern "C" unsigned long g_005a30b6;
extern "C" unsigned long g_005a30f4;
extern "C" unsigned long g_005a3192;
extern "C" unsigned long g_005a31de;
extern "C" unsigned long g_005a31f6;
extern "C" unsigned long g_005a3272;
extern "C" unsigned long g_005a32ac;
extern "C" unsigned long g_005a32b0;
extern "C" unsigned long g_005a32b4;
extern "C" unsigned long g_005a32b8;
extern "C" unsigned long g_005a32bc;
extern "C" unsigned long g_005a32c0;
extern "C" unsigned long g_005a32c4;
extern "C" unsigned long g_005a32c8;
bool BLMineCollectDefensePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineCollectDefensePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectDefensePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectDefensePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectDefensePresenter::tick(float p1)
{
  return;
}

BLMineCollectDefensePresenter::~BLMineCollectDefensePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a22e4 + g_005a2330);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a22fe + g_005a2334,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineCollectDefensePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x104);
  return;
}


void BLMineCollectDefensePresenter::onEnter()
{
  return;
}

void BLMineCollectDefensePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a2472 + g_005a248c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a2480 + g_005a2490);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLMineCollectDefensePresenter::create(BLMineCollectDefenseView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
BLMineCollectDefensePresenter::BLMineCollectDefensePresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::initWithView(BLMineCollectDefenseView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::updateMineData(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a29ce + (intptr_t)(g_005a2a0c)), *(undefined4 *)(iVar2 + 0x40));
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005a29de + (intptr_t)(g_005a2a10)),&uStack_18);
  ((cocos2d::CCUserDefault *)(uVar1))->setStringForKey((char const*)uVar3, *(std::string const*)&uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x104);
  return;
}

void BLMineCollectDefensePresenter::onAdd1(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::onAdd2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::onModify(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::updateRoleData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectDefensePresenter::onStart(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

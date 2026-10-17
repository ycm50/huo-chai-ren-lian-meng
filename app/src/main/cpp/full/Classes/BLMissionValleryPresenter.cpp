#include "BLMissionValleryPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLMissionValleryView.h"
#include "BLListButton.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLGameScene.h"
#include "BLItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamBuyPresenter.h"
#include "BLMissionCreamBuyView.h"
#include "BLMissionData.h"
#include "BLRoleItemPresenter.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "DragonCanyonData.h"
#include "MissionSelectHeroData.h"
#include "MissionValleryData.h"
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
#include "BLItemView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e1c28;
extern "C" unsigned long UNK_005e1df2;
extern "C" unsigned long UNK_005e1df4;
extern "C" unsigned long UNK_005e1e0a;
extern "C" unsigned long UNK_005e1e0c;
extern "C" unsigned long UNK_005e1e20;
extern "C" unsigned long UNK_005e1e3e;
extern "C" unsigned long UNK_005e1eaa;
extern "C" unsigned long UNK_005e1edc;
extern "C" unsigned long UNK_005e1f1c;
extern "C" unsigned long UNK_005e1fee;
extern "C" unsigned long UNK_005e219c;
extern "C" unsigned long UNK_005e21a0;
extern "C" unsigned long UNK_005e21f2;
extern "C" unsigned long UNK_005e225c;
extern "C" unsigned long UNK_005e225e;
extern "C" unsigned long UNK_005e2276;
extern "C" unsigned long UNK_005e2278;
extern "C" unsigned long UNK_005e2454;
extern "C" unsigned long UNK_005e24d2;
extern "C" unsigned long UNK_005e24e0;
extern "C" unsigned long UNK_005e24f6;
extern "C" unsigned long UNK_005e250a;
extern "C" unsigned long UNK_005e257c;
extern "C" unsigned long UNK_005e29e4;
extern "C" unsigned long UNK_005e2a14;
extern "C" unsigned long UNK_005e2a68;
extern "C" unsigned long UNK_005e2a90;
extern "C" unsigned long UNK_005e2aa6;
extern "C" unsigned long UNK_005e2ad8;
extern "C" unsigned long UNK_005e2b5e;
extern "C" unsigned long UNK_005e2b62;
extern "C" unsigned long UNK_005e2b66;
extern "C" unsigned long UNK_005e2b6a;
extern "C" unsigned long UNK_005e2b6e;
extern "C" unsigned long UNK_005e2b72;
extern "C" unsigned long UNK_005e2b76;
extern "C" unsigned long UNK_005e2b7a;
extern "C" unsigned long UNK_005e2b7e;
extern "C" unsigned long UNK_005e2b82;
extern "C" unsigned long UNK_005e2b86;
extern "C" unsigned long UNK_005e2b8a;
extern "C" unsigned long UNK_005e2d88;
extern "C" unsigned long UNK_005e2d8a;
extern "C" unsigned long UNK_005e2fc2;
extern "C" unsigned long UNK_005e309c;
extern "C" unsigned long UNK_005e3118;
extern "C" unsigned long UNK_005e311a;
extern "C" unsigned long UNK_005e321c;
extern "C" unsigned long UNK_005e3398;
extern "C" unsigned long UNK_005e339a;
extern "C" unsigned long UNK_005e34a6;
extern "C" unsigned long _UNK_005e1c2c;
extern "C" unsigned long _UNK_005e1da4;
extern "C" unsigned long _UNK_005e1da8;
extern "C" unsigned long _UNK_005e1e7c;
extern "C" unsigned long _UNK_005e1e80;
extern "C" unsigned long _UNK_005e1e84;
extern "C" unsigned long _UNK_005e1e88;
extern "C" unsigned long _UNK_005e1e8c;
extern "C" unsigned long _UNK_005e1e90;
extern "C" unsigned long _UNK_005e1e94;
extern "C" unsigned long _UNK_005e1f9c;
extern "C" unsigned long _UNK_005e1fa0;
extern "C" unsigned long _UNK_005e1fa4;
extern "C" unsigned long _UNK_005e1fa8;
extern "C" unsigned long _UNK_005e1fac;
extern "C" unsigned long _UNK_005e1fb0;
extern "C" unsigned long _UNK_005e1fb4;
extern "C" unsigned long _UNK_005e1fb8;
extern "C" unsigned long _UNK_005e1ffc;
extern "C" unsigned long _UNK_005e2210;
extern "C" unsigned long _UNK_005e2214;
extern "C" unsigned long _UNK_005e2218;
extern "C" unsigned long _UNK_005e2288;
extern "C" unsigned long _UNK_005e228c;
extern "C" unsigned long _UNK_005e2290;
extern "C" unsigned long _UNK_005e2294;
extern "C" unsigned long _UNK_005e242c;
extern "C" unsigned long _UNK_005e2430;
extern "C" unsigned long _UNK_005e2434;
extern "C" unsigned long _UNK_005e2464;
extern "C" unsigned long _UNK_005e2498;
extern "C" unsigned long _UNK_005e249c;
extern "C" unsigned long _UNK_005e2610;
extern "C" unsigned long _UNK_005e2614;
extern "C" unsigned long _UNK_005e2618;
extern "C" unsigned long _UNK_005e261c;
extern "C" unsigned long _UNK_005e2620;
extern "C" unsigned long _UNK_005e2a54;
extern "C" unsigned long _UNK_005e2a58;
extern "C" unsigned long _UNK_005e2a6c;
extern "C" unsigned long _UNK_005e2a94;
extern "C" unsigned long _UNK_005e2b18;
extern "C" unsigned long _UNK_005e2b1c;
extern "C" unsigned long _UNK_005e2b94;
extern "C" unsigned long _UNK_005e2e1c;
extern "C" unsigned long _UNK_005e2e20;
extern "C" unsigned long _UNK_005e3034;
extern "C" unsigned long _UNK_005e30a0;
extern "C" unsigned long _UNK_005e31fc;
extern "C" unsigned long _UNK_005e3200;
extern "C" unsigned long _UNK_005e3334;
extern "C" unsigned long _UNK_005e3338;
extern "C" unsigned long _UNK_005e333c;
extern "C" unsigned long _UNK_005e3340;
extern "C" unsigned long _UNK_005e3344;
extern "C" unsigned long _UNK_005e3348;
extern "C" unsigned long _UNK_005e3424;
extern "C" unsigned long _UNK_005e3428;
extern "C" unsigned long _UNK_005e3634;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005e1c28;
extern "C" unsigned long g_005e1c2c;
extern "C" unsigned long g_005e1da4;
extern "C" unsigned long g_005e1da8;
extern "C" unsigned long g_005e1df2;
extern "C" unsigned long g_005e1df4;
extern "C" unsigned long g_005e1e0a;
extern "C" unsigned long g_005e1e0c;
extern "C" unsigned long g_005e1e20;
extern "C" unsigned long g_005e1e3e;
extern "C" unsigned long g_005e1e7c;
extern "C" unsigned long g_005e1e80;
extern "C" unsigned long g_005e1e84;
extern "C" unsigned long g_005e1e88;
extern "C" unsigned long g_005e1e8c;
extern "C" unsigned long g_005e1e90;
extern "C" unsigned long g_005e1e94;
extern "C" unsigned long g_005e1eaa;
extern "C" unsigned long g_005e1edc;
extern "C" unsigned long g_005e1f1c;
extern "C" unsigned long g_005e1f9c;
extern "C" unsigned long g_005e1fa0;
extern "C" unsigned long g_005e1fa4;
extern "C" unsigned long g_005e1fa8;
extern "C" unsigned long g_005e1fac;
extern "C" unsigned long g_005e1fb0;
extern "C" unsigned long g_005e1fb4;
extern "C" unsigned long g_005e1fb8;
extern "C" unsigned long g_005e1fee;
extern "C" unsigned long g_005e1ffc;
extern "C" unsigned long g_005e219c;
extern "C" unsigned long g_005e21a0;
extern "C" unsigned long g_005e21f2;
extern "C" unsigned long g_005e2210;
extern "C" unsigned long g_005e2214;
extern "C" unsigned long g_005e2218;
extern "C" unsigned long g_005e225c;
extern "C" unsigned long g_005e225e;
extern "C" unsigned long g_005e2276;
extern "C" unsigned long g_005e2278;
extern "C" unsigned long g_005e2288;
extern "C" unsigned long g_005e228c;
extern "C" unsigned long g_005e2290;
extern "C" unsigned long g_005e2294;
extern "C" unsigned long g_005e242c;
extern "C" unsigned long g_005e2430;
extern "C" unsigned long g_005e2434;
extern "C" unsigned long g_005e2454;
extern "C" unsigned long g_005e2464;
extern "C" unsigned long g_005e2498;
extern "C" unsigned long g_005e249c;
extern "C" unsigned long g_005e24d2;
extern "C" unsigned long g_005e24e0;
extern "C" unsigned long g_005e24f6;
extern "C" unsigned long g_005e250a;
extern "C" unsigned long g_005e257c;
extern "C" unsigned long g_005e2610;
extern "C" unsigned long g_005e2614;
extern "C" unsigned long g_005e2618;
extern "C" unsigned long g_005e261c;
extern "C" unsigned long g_005e2620;
extern "C" unsigned long g_005e29e4;
extern "C" unsigned long g_005e2a14;
extern "C" unsigned long g_005e2a54;
extern "C" unsigned long g_005e2a58;
extern "C" unsigned long g_005e2a68;
extern "C" unsigned long g_005e2a6c;
extern "C" unsigned long g_005e2a90;
extern "C" unsigned long g_005e2a94;
extern "C" unsigned long g_005e2aa6;
extern "C" unsigned long g_005e2ad8;
extern "C" unsigned long g_005e2b18;
extern "C" unsigned long g_005e2b1c;
extern "C" unsigned long g_005e2b5e;
extern "C" unsigned long g_005e2b62;
extern "C" unsigned long g_005e2b66;
extern "C" unsigned long g_005e2b6a;
extern "C" unsigned long g_005e2b6e;
extern "C" unsigned long g_005e2b72;
extern "C" unsigned long g_005e2b76;
extern "C" unsigned long g_005e2b7a;
extern "C" unsigned long g_005e2b7e;
extern "C" unsigned long g_005e2b82;
extern "C" unsigned long g_005e2b86;
extern "C" unsigned long g_005e2b8a;
extern "C" unsigned long g_005e2b94;
extern "C" unsigned long g_005e2d88;
extern "C" unsigned long g_005e2d8a;
extern "C" unsigned long g_005e2e1c;
extern "C" unsigned long g_005e2e20;
extern "C" unsigned long g_005e2fc2;
extern "C" unsigned long g_005e3034;
extern "C" unsigned long g_005e309c;
extern "C" unsigned long g_005e30a0;
extern "C" unsigned long g_005e3118;
extern "C" unsigned long g_005e311a;
extern "C" unsigned long g_005e31fc;
extern "C" unsigned long g_005e3200;
extern "C" unsigned long g_005e321c;
extern "C" unsigned long g_005e3334;
extern "C" unsigned long g_005e3338;
extern "C" unsigned long g_005e333c;
extern "C" unsigned long g_005e3340;
extern "C" unsigned long g_005e3344;
extern "C" unsigned long g_005e3348;
extern "C" unsigned long g_005e3398;
extern "C" unsigned long g_005e339a;
extern "C" unsigned long g_005e3424;
extern "C" unsigned long g_005e3428;
extern "C" unsigned long g_005e34a6;
extern "C" unsigned long g_005e3634;
bool BLMissionValleryPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLMissionValleryPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x2c) - *(int *)(((int)this) + 0x28) >> 2;
}



undefined4 BLMissionValleryPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}






void BLMissionValleryPresenter::onExit()
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



void BLMissionValleryPresenter::updateChallengeTime()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x24) + 0x130);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  iVar1 = ((MissionValleryData *)this)->getInstance();
  cocos2d::CCString::createWithFormat((char const*)&g_005e2454 + g_005e2464, *(undefined4 *)(iVar1 + 0x24));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  return;
}




BLMissionValleryPresenter::~BLMissionValleryPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005e29e4 + (intptr_t)(g_005e2a54))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(8)) = iVar2 + 0x8c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_005e2a14 + (intptr_t)(g_005e2a58)),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0xb)) = *(int *)((int)this + 4*(10));
  ((std::vector<int, std::allocator<int>> *)((int)this) + 10)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionValleryPresenter::BLMissionValleryPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005e2aa6 + g_005e2b18);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(8)) = iVar2 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e2ad8 + g_005e2b1c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  *(int *)((int)this + 4*(0xb)) = *(int *)((int)this + 4*(10));
  return;
}

undefined4 BLMissionValleryPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionValleryPresenter::updateReward()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(((int)this) + 0x28);
  iVar1 = ((MissionValleryData *)this)->getInstance();
  iVar3 = *(int *)(iVar1 + 0x14);
  uStack_48 = (undefined4)(*(undefined4 *)(&g_005e2b5e + g_005e2b94));
  uStack_44 = (undefined4)(*(undefined4 *)(&g_005e2b62 + g_005e2b94));
  uStack_40 = (undefined4)(*(undefined4 *)(&g_005e2b66 + g_005e2b94));
  uStack_3c = (undefined4)(*(undefined4 *)(&g_005e2b6a + g_005e2b94));
  uStack_38 = (undefined4)(*(undefined4 *)(&g_005e2b6e + g_005e2b94));
  uStack_34 = (undefined4)(*(undefined4 *)(&g_005e2b72 + g_005e2b94));
  uStack_30 = (undefined4)(*(undefined4 *)(&g_005e2b76 + g_005e2b94));
  uStack_2c = (undefined4)(*(undefined4 *)(&g_005e2b7a + g_005e2b94));
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005e2b7e + g_005e2b94));
  uStack_24 = (undefined4)(*(undefined4 *)(&g_005e2b82 + g_005e2b94));
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005e2b86 + g_005e2b94));
  uStack_1c = (undefined4)(*(undefined4 *)(&g_005e2b8a + g_005e2b94));
  iVar1 = 0;
  do {
    iVar2 = iVar1 + iVar3 * 0x10;
    iVar1 = iVar1 + 4;
    ((std::vector<int, std::allocator<int>> *)((int)this) + 0x28)->push_back((int)&uStack_48 + iVar2);
  } while (iVar1 != 0x10);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x24) + 0x118))->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (19) =====
void BLMissionValleryPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
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
  ((UIManager *)(uVar1))->removeUIByID(0x284);
  return;
}

void BLMissionValleryPresenter::onAdjust(cocos2d::CCObject* p1, unsigned int p2)
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

void BLMissionValleryPresenter::onInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::onAddTime(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::onChallenge(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  iVar2 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  if (*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2 == 0) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_005e1fee + (intptr_t)(g_005e1ffc)));
  }
  else {
    ((MissionValleryData *)this)->getInstance();
    ((MissionValleryData *)this)->checkChallenge();
  }
  return;
}

void BLMissionValleryPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005e21a0 + (intptr_t)(g_005e2214))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005e219c + (intptr_t)(g_005e2210))),0),
     piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x118);
    ::new ((void *)piVar2) BLItemView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x005e21f4;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x2c) - *(int *)(((int)this) + 0x28) >> 2)) {
    ((BLItemPresenter *)(piVar2[0x42]))->updateWithData(*(undefined4 *)(p3 * 4 + *(int *)(((int)this) + 0x28)));
    return;
  }
  func_0079e784((unsigned char *)((char *)&g_005e21f2 + (intptr_t)(g_005e2218)),p3);
code_r0x005e21f4:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x5e2200);
  (*pcVar1)();
}

void BLMissionValleryPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::updateMissionData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::updateRecommand()
{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  iVar1 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x14));
  auStack_24[0] = g_005e242c;
  auStack_24[1] = g_005e2430;
  auStack_24[2] = g_005e2434;
  piVar4 = *(int **)(*(int *)(((int)this) + 0x24) + 0x11c);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  0 /* ctorZero */;
  ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_28);
  (*pcVar3)(piVar4,uStack_28);
  func_0079e2bc(&uStack_28);
  func_0079e2bc(auStack_2c);
  return;
}

void BLMissionValleryPresenter::onValleryTimeBuySuccess()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x28))());
  ((UserData *)uVar2)->subVirNumber(2, g_005e2498, g_005e249c);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x10);
  BLMissionValleryPresenter::updateChallengeTime();
  return;
}

void BLMissionValleryPresenter::checkModeChallengable(int p1, bool p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (0 < p1) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    iVar3 = (undefined4)(intptr_t)(((UserData *)(uVar2))->checkValleryModePass(p1 + -1));
    if (iVar3 == 0) {
      if (p2 == 0) {
        return;
      }
      func_0079e45c(&uStack_24,(unsigned char *)((char *)&g_005e24d2 + (intptr_t)(g_005e2610)),&uStack_28);
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005e24e0 + (intptr_t)(g_005e2614)),&uStack_28);
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005e24f6 + (intptr_t)(g_005e2618)),&uStack_28);
      uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005e250a + (intptr_t)(g_005e261c)), (&uStack_24)[p1 + -1]));
      uVar4 = (undefined4)(((Toast *)this)->sharedToast());
      uVar5 = (undefined4)(((BLLanguage *)this)->share());
      uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
      func_0079e45c(auStack_2c,uVar2,auStack_30);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_28);
      ((Toast *)(uVar4))->showToast((char const*)uStack_28);
      func_0079e2bc(&uStack_28);
      func_0079e2bc(auStack_2c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      func_0079e2bc(&uStack_24);
      return;
    }
  }
  uVar2 = (undefined4)(0 /* ctorZero */);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  if (iVar3 == 0) {
    if (p2 == 0) {
      return;
    }
    uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005e257c + (intptr_t)(g_005e2620)), uVar2));
    uVar4 = (undefined4)(((Toast *)this)->sharedToast());
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
    func_0079e45c(&uStack_28,uVar2,auStack_2c);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_24);
    ((Toast *)(uVar4))->showToast((char const*)uStack_24);
    func_0079e2bc(&uStack_24);
    func_0079e2bc(&uStack_28);
    return;
  }
  return;
}

void BLMissionValleryPresenter::updateBtnStatus()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar1 = (undefined4)((void)(((BLMissionValleryPresenter *)(((int)this)))->checkModeChallengable(1, 0)),(intptr_t)0);
  if (iVar1 == 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x154);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
    iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x24));
  }
  else {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x154);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    iVar3 = (undefined4)((void)(((BLMissionValleryPresenter *)(((int)this)))->checkModeChallengable(2, 0)),(intptr_t)0);
    iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x24));
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar1 + 0x158);
      uVar4 = (undefined4)(0);
      pcVar5 = *(code **)(*piVar2 + 0x90);
      goto code_r0x005e267c;
    }
  }
  uVar4 = (undefined4)(1);
  piVar2 = *(int **)(iVar1 + 0x158);
  pcVar5 = *(code **)(*piVar2 + 0x90);
code_r0x005e267c:
  (*pcVar5)(piVar2,uVar4);
  return;
}

void BLMissionValleryPresenter::updateHeroView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::updateBtnClickStatus(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  iVar2 = (undefined4)((void)(((BLMissionValleryPresenter *)(((int)this)))->checkModeChallengable(p2, 1)),(intptr_t)0);
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
    if (p2 != *(int *)(iVar2 + 0x14)) {
      iVar2 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
      *(int *)(iVar2 + 0x14) = p2;
      ((BLMissionValleryPresenter *)(((int)this)))->updateBtnClickStatus(p2);
      ((BLMissionValleryPresenter *)(((int)this)))->updateRecommand();
      ((BLMissionValleryPresenter *)(((int)this)))->updateReward();
      ((BLMissionValleryPresenter *)(((int)this)))->updateMissionData();
    }
  }
  return;
}

void BLMissionValleryPresenter::initHeroData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::initWithView(BLMissionValleryView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  iVar2 = (undefined4)(intptr_t)(g_005e3334);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_005e321c + (intptr_t)(g_005e3338)) + g_005e3334),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005e321c + (intptr_t)(g_005e333c)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x120);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005e321c + (intptr_t)(g_005e3340)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x128);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005e321c + (intptr_t)(g_005e3344)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x134);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005e321c + (intptr_t)(g_005e3348)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
  (**(code **)(*piVar1 + 0x24c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x20);
  iVar2 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  *(undefined4 *)(iVar2 + 0x14) = 0;
  BLMissionValleryPresenter::updateReward();
  BLMissionValleryPresenter::updateRecommand();
  BLMissionValleryPresenter::updateMissionData();
  BLMissionValleryPresenter::updateChallengeTime();
  BLMissionValleryPresenter::updateBtnStatus();
  BLMissionValleryPresenter::initHeroData();
  BLMissionValleryPresenter::updateHeroView();
  BLMissionValleryPresenter::updateBtnClickStatus(0);
  return;
}

void BLMissionValleryPresenter::onUpdateHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionValleryPresenter::onBeginChallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

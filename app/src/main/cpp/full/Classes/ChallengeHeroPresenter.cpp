#include "ChallengeHeroPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "ChallengeHeroView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "DataManager.h"
#include "PlayerData.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005084c0;
extern "C" unsigned long UNK_00508518;
extern "C" unsigned long UNK_00508532;
extern "C" unsigned long UNK_00508578;
extern "C" unsigned long UNK_005085a0;
extern "C" unsigned long UNK_005085b6;
extern "C" unsigned long UNK_005085ce;
extern "C" unsigned long UNK_00508664;
extern "C" unsigned long UNK_005086d6;
extern "C" unsigned long UNK_005086d8;
extern "C" unsigned long UNK_00508776;
extern "C" unsigned long UNK_00508804;
extern "C" unsigned long UNK_0050880e;
extern "C" unsigned long UNK_00508822;
extern "C" unsigned long _UNK_005084c4;
extern "C" unsigned long _UNK_00508564;
extern "C" unsigned long _UNK_00508568;
extern "C" unsigned long _UNK_0050857c;
extern "C" unsigned long _UNK_005085a4;
extern "C" unsigned long _UNK_005085fc;
extern "C" unsigned long _UNK_00508600;
extern "C" unsigned long _UNK_00508858;
extern "C" unsigned long _UNK_0050885c;
extern "C" unsigned long _UNK_00508860;
extern "C" unsigned long _UNK_00508864;
extern "C" unsigned long _UNK_00508868;
extern "C" unsigned long _UNK_0050886c;
extern "C" unsigned long _UNK_00508870;
extern "C" unsigned long _UNK_00508874;
extern "C" unsigned long _UNK_00508878;
extern "C" unsigned long g_005084c0;
extern "C" unsigned long g_005084c4;
extern "C" unsigned long g_00508518;
extern "C" unsigned long g_00508532;
extern "C" unsigned long g_00508564;
extern "C" unsigned long g_00508568;
extern "C" unsigned long g_00508578;
extern "C" unsigned long g_0050857c;
extern "C" unsigned long g_005085a0;
extern "C" unsigned long g_005085a4;
extern "C" unsigned long g_005085b6;
extern "C" unsigned long g_005085ce;
extern "C" unsigned long g_005085fc;
extern "C" unsigned long g_00508600;
extern "C" unsigned long g_00508664;
extern "C" unsigned long g_005086d6;
extern "C" unsigned long g_005086d8;
extern "C" unsigned long g_00508776;
extern "C" unsigned long g_00508804;
extern "C" unsigned long g_0050880e;
extern "C" unsigned long g_00508822;
extern "C" unsigned long g_00508858;
extern "C" unsigned long g_0050885c;
extern "C" unsigned long g_00508860;
extern "C" unsigned long g_00508864;
extern "C" unsigned long g_00508868;
extern "C" unsigned long g_0050886c;
extern "C" unsigned long g_00508870;
extern "C" unsigned long g_00508874;
extern "C" unsigned long g_00508878;
void ChallengeHeroPresenter::tick(float p1)
{
  return;
}

bool ChallengeHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

ChallengeHeroPresenter::~ChallengeHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00508518 + g_00508564);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00508532 + g_00508568,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeHeroPresenter::ChallengeHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005085b6 + g_005085fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005085ce + g_00508600,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void ChallengeHeroPresenter::onEnter()
{
  return;
}

void ChallengeHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeHeroPresenter::create(ChallengeHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void ChallengeHeroPresenter::initWithView(ChallengeHeroView* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  iVar1 = (undefined4)(intptr_t)(**(int **)(p1 + 0x114));
  pcVar2 = *(code **)(iVar1 + 0x21c);
  (*pcVar2)(*(int **)(p1 + 0x114),1,iVar1,pcVar2,p4);
  return;
}

void ChallengeHeroPresenter::initwithRoleID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

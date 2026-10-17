#include "BLBlueMissionManager.h"
#include "CCDictionary.h"
#include "CCString.h"
#include "CCNotificationCenter.h"
#include "CCGeometry.h"
#include "CCArray.h"
#include "BLHit.h"
#include "CCObject.h"
#include "BLLeakUtils.h"
#include "BLMapScene.h"
#include "BLMissionManager.h"
#include "BLPKResultPresenter.h"
#include "BLPKResultView.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLRoleBase.h"
#include "BLSprite.h"
#include "BLWinPresenter.h"
#include "BLWinView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "FightControlLayer.h"
#include "ItemData.h"
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
extern "C" unsigned long LAB_0043686a;

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004365d0;
extern "C" unsigned long _DAT_004365d4;
extern "C" unsigned long _DAT_0043670c;
extern "C" unsigned long _DAT_00436710;
extern "C" unsigned long _DAT_00436714;
extern "C" unsigned long _DAT_00436718;
extern "C" unsigned long _DAT_0043671c;
extern "C" unsigned long _DAT_00436720;
extern "C" unsigned long _DAT_00436724;
extern "C" unsigned long _DAT_00436728;
extern "C" unsigned long _DAT_0043686c;
extern "C" unsigned long _DAT_004368dc;
extern "C" unsigned long _DAT_004368e0;
extern "C" unsigned long _DAT_004368e4;
extern "C" unsigned long _DAT_00436a8c;
extern "C" unsigned long _DAT_00436a90;
extern "C" unsigned long _DAT_00436a94;
extern "C" unsigned long _DAT_00436da4;
extern "C" unsigned long _DAT_00436da8;
extern "C" unsigned long _DAT_00436dac;
extern "C" unsigned long _DAT_00436db0;
extern "C" unsigned long _DAT_00436db4;
extern "C" unsigned long _DAT_00436ec4;
extern "C" unsigned long _DAT_00436ec8;
extern "C" unsigned long _DAT_00436f00;
extern "C" unsigned long _DAT_00436f04;
extern "C" unsigned long _DAT_004371e0;
extern "C" unsigned long _DAT_004371e4;
extern "C" unsigned long _DAT_004371e8;
extern "C" unsigned long _DAT_004371ec;
extern "C" unsigned long _DAT_004371f0;
extern "C" unsigned long _DAT_004371f4;
extern "C" unsigned long _DAT_004371f8;
extern "C" unsigned long _DAT_004371fc;
extern "C" unsigned long _DAT_00437200;
extern "C" unsigned long _DAT_00437204;
extern "C" unsigned long _DAT_00437208;
extern "C" unsigned long _DAT_0043720c;
extern "C" unsigned long _DAT_00437210;
extern "C" unsigned long _DAT_00437214;
extern "C" unsigned long _DAT_00437218;
extern "C" unsigned long _DAT_0043721c;
extern "C" unsigned long _DAT_00437220;
extern "C" unsigned long _DAT_00437224;
extern "C" unsigned long _DAT_00437228;
extern "C" unsigned long _DAT_0043722c;
extern "C" unsigned long _DAT_00437230;
extern "C" unsigned long _DAT_00437234;
extern "C" unsigned long _DAT_00437238;
extern "C" unsigned long _DAT_0043723c;
extern "C" unsigned long _DAT_00437240;
extern "C" unsigned long _DAT_00437244;
extern "C" unsigned long _DAT_00437248;
extern "C" unsigned long _DAT_0043724c;
extern "C" unsigned long _DAT_00437250;
extern "C" unsigned long _DAT_00437254;
extern "C" unsigned long _DAT_00437258;
extern "C" unsigned long _DAT_0043751c;
extern "C" unsigned long _DAT_00437520;
extern "C" unsigned long _DAT_00437524;
extern "C" unsigned long _DAT_00437528;
extern "C" unsigned long _DAT_0043752c;
extern "C" unsigned long _DAT_00437530;
extern "C" unsigned long _DAT_00437534;
extern "C" unsigned long _DAT_00437538;
extern "C" unsigned long _DAT_0043753c;
extern "C" unsigned long _DAT_0043789c;
extern "C" unsigned long _DAT_004378a0;
extern "C" unsigned long _DAT_004378a4;
extern "C" unsigned long _DAT_004378a8;
extern "C" unsigned long _DAT_004378ac;
extern "C" unsigned long g_004365d0;
extern "C" unsigned long g_004365d4;
extern "C" unsigned long g_0043670c;
extern "C" unsigned long g_00436710;
extern "C" unsigned long g_00436714;
extern "C" unsigned long g_00436718;
extern "C" unsigned long g_0043671c;
extern "C" unsigned long g_00436720;
extern "C" unsigned long g_00436724;
extern "C" unsigned long g_00436728;
extern "C" unsigned long g_0043686c;
extern "C" unsigned long g_004368dc;
extern "C" unsigned long g_004368e0;
extern "C" unsigned long g_004368e4;
extern "C" unsigned long g_00436a8c;
extern "C" unsigned long g_00436a90;
extern "C" unsigned long g_00436a94;
extern "C" unsigned long g_00436da4;
extern "C" unsigned long g_00436da8;
extern "C" unsigned long g_00436dac;
extern "C" unsigned long g_00436db0;
extern "C" unsigned long g_00436db4;
extern "C" unsigned long g_00436ec4;
extern "C" unsigned long g_00436ec8;
extern "C" unsigned long g_00436f00;
extern "C" unsigned long g_00436f04;
extern "C" unsigned long g_004371e0;
extern "C" unsigned long g_004371e4;
extern "C" unsigned long g_004371e8;
extern "C" unsigned long g_004371ec;
extern "C" unsigned long g_004371f0;
extern "C" unsigned long g_004371f4;
extern "C" unsigned long g_004371f8;
extern "C" unsigned long g_004371fc;
extern "C" unsigned long g_00437200;
extern "C" unsigned long g_00437204;
extern "C" unsigned long g_00437208;
extern "C" unsigned long g_0043720c;
extern "C" unsigned long g_00437210;
extern "C" unsigned long g_00437214;
extern "C" unsigned long g_00437218;
extern "C" unsigned long g_0043721c;
extern "C" unsigned long g_00437220;
extern "C" unsigned long g_00437224;
extern "C" unsigned long g_00437228;
extern "C" unsigned long g_0043722c;
extern "C" unsigned long g_00437230;
extern "C" unsigned long g_00437234;
extern "C" unsigned long g_00437238;
extern "C" unsigned long g_0043723c;
extern "C" unsigned long g_00437240;
extern "C" unsigned long g_00437244;
extern "C" unsigned long g_00437248;
extern "C" unsigned long g_0043724c;
extern "C" unsigned long g_00437250;
extern "C" unsigned long g_00437254;
extern "C" unsigned long g_00437258;
extern "C" unsigned long g_0043751c;
extern "C" unsigned long g_00437520;
extern "C" unsigned long g_00437524;
extern "C" unsigned long g_00437528;
extern "C" unsigned long g_0043752c;
extern "C" unsigned long g_00437530;
extern "C" unsigned long g_00437534;
extern "C" unsigned long g_00437538;
extern "C" unsigned long g_0043753c;
extern "C" unsigned long g_0043789c;
extern "C" unsigned long g_004378a0;
extern "C" unsigned long g_004378a4;
extern "C" unsigned long g_004378a8;
extern "C" unsigned long g_004378ac;
BLBlueMissionManager::~BLBlueMissionManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x35)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x35)) = 0;
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLBlueMissionManager"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLMissionManager::~BLMissionManager();
  return;
}









void BLBlueMissionManager::blueClientSwitchHero(cocos2d::CCObject* p1)
{
  BLMissionManager::switchEnemy();
  return;
}

void BLBlueMissionManager::bluePKFaile()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)("Xԫ"),
                              *(undefined4 *)(g_00436ec8 + 0x436eac),0,in_r3), iVar2 != 0)) {
    uVar1 = (undefined4)(((BLPKResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLPKResultPresenter *)uVar1)->initWith(0);
  }
  return;
}

void BLBlueMissionManager::bluePKWin()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)("Xԫ"),
                              *(undefined4 *)(g_00436f04 + 0x436ee8),0,in_r3), iVar2 != 0)) {
    uVar1 = (undefined4)(((BLPKResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLPKResultPresenter *)uVar1)->initWith(1);
  }
  return;
}



bool BLBlueMissionManager::init()
{
  return 1;
}

undefined4 BLBlueMissionManager::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xd8))));
  0 /* ctorZero */;
  ((BLBlueMissionManager *)uVar1)->init();
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (15) =====
void BLBlueMissionManager::blueLockWidth(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  
  iVar1 = (undefined4)(intptr_t)(**(int **)(((int)this) + 0x5c));
  pcVar2 = *(code **)(iVar1 + 0x274);
  (*pcVar2)(*(int **)(((int)this) + 0x5c),*(undefined4 *)(p1 + 0x14),iVar1,pcVar2,p4);
  return;
}

undefined8 BLBlueMissionManager::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLBlueMissionManager::bludeSetHero(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  int iStack_14;
  
  iVar3 = (undefined4)(intptr_t)(g_0043670c + 0x436664);
  piStack_18 = (int *)((int)this);
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    piStack_18 = *(int **)(iVar3 + g_00436710);
    iStack_14 = (undefined4)(intptr_t)(*(int *)(iVar3 + g_00436714));
    iVar1 = (undefined4)(intptr_t)(func_0079e55c(p1,piStack_18,iStack_14,0));
    if (iVar1 != 0) {
      iVar1 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x35)));
      ((cocos2d::CCString *)this)->getCString();
      uVar2 = (undefined4)(func_0079e6c0());
      iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey(uVar2));
      if (iVar1 != 0) {
        iStack_14 = (undefined4)(intptr_t)(*(int *)(iVar3 + g_00436718));
        iVar1 = (undefined4)(intptr_t)(func_0079e55c(iVar1,piStack_18,iStack_14,0));
        if (iVar1 != 0) {
          (**(code **)(*(int *)this + 0x9c))(((int)this));
        }
      }
      uVar2 = (undefined4)(((UIManager *)this)->shareManager());
      iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0)),(intptr_t)0);
      if (iVar1 != 0) {
        piStack_18 = *(int **)(iVar3 + g_0043671c);
        iStack_14 = (undefined4)(intptr_t)(*(int *)(iVar3 + g_00436720));
        iVar1 = (undefined4)(intptr_t)(func_0079e55c(iVar1,piStack_18,iStack_14,0));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
          piStack_18 = *(int **)(iVar3 + g_00436724);
          iStack_14 = (undefined4)(intptr_t)(*(int *)(iVar3 + g_00436728));
          iVar3 = (undefined4)(intptr_t)(func_0079e55c(*(int *)(iVar1 + 0x24),piStack_18,iStack_14,0));
          if (iVar3 != 0) {
            ((FightControlLayer *)this)->updateSkillInfo();
          }
        }
      }
    }
  }
  return ghidra_CONCAT44(iStack_14,piStack_18);
}

void BLBlueMissionManager::blueChangeRoleFlipX(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueAddAnimate(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueChangeRolePos(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  iStack_1c = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(*(undefined4 *)(((int)this) + 0xd4)))->objectForKey(*(undefined4 *)(p1 + 0x14)));
  if (iVar1 == 0) goto LAB_0043686a;
  piVar2 = (int *)((cocos2d::CCDictionary *)(*(undefined4 *)(((int)this) + 0xd4)))->objectForKey(*(undefined4 *)(p1 + 0x14));
  uVar4 = (undefined4)(*(undefined4 *)(p1 + 0x18));
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  func_0079e57c(uVar4,uVar3);
  uVar3 = (undefined4)(func_0079e8e4());
  iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,g_0043686c));
  if (iVar1 == 0) {
    uVar4 = (undefined4)(*(undefined4 *)(p1 + 0x1c));
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))(piVar2));
    func_0079e57c(uVar4,uVar3);
    uVar3 = (undefined4)(func_0079e8e4());
    iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,g_0043686c));
    if (iVar1 != 0) goto LAB_00436854;
  }
  else {
LAB_00436854:
    pcVar5 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    (*pcVar5)(piVar2,&iStack_20);
  }
  (**(code **)(*(int *)(piVar2) + (700)))(piVar2,*(undefined4 *)(p1 + 0x20));
  (**(code **)(*(int *)(piVar2) + (0x2c4)))(piVar2,*(undefined4 *)(p1 + 0x24));
  (**(code **)(*(int *)(piVar2) + (0x2ec)))(piVar2,*(undefined4 *)(p1 + 0x28));
LAB_0043686a:
  return;
}

void BLBlueMissionManager::blueChangeRoleLife(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueRoleAIMove(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueChangeRoleStatus(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::hit(BLRoleBase* p1, BLHit* p2, bool& p3, cocos2d::CCArray* p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueChangeGameEffect(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piStack_18;
  int iStack_14;
  
  piStack_18 = (int *)((int)this);
  iStack_14 = (undefined4)(intptr_t)p1;
  if (*(int *)(p1 + 0x14) == 1) {
    iVar1 = (**(code **)(*(int *)this + 0x98))();
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(int *)this + 0x10c);
      piVar2 = (int *)(**(code **)(*(int *)this + 0x98))(((int)this));
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x50))());
      0 /* ctorZero */;
      (*pcVar4)(((int)this),&piStack_18);
    }
    BLMissionManager::onWinEffect();
  }
  else {
    BLMissionManager::onFailedEffect();
  }
  return;
}

BLBlueMissionManager::BLBlueMissionManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueGameDrop(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::addMonster(std::string * p1, int p2, int p3, cocos2d::CCPoint * p4, int p5, int p6, bool p7)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBlueMissionManager::blueAddRole(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLTalentDownInfoItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "TalentData.h"
#include "TalentUserData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e884(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069e914;
extern "C" unsigned long UNK_0069e92e;
extern "C" unsigned long UNK_0069e974;
extern "C" unsigned long UNK_0069e99c;
extern "C" unsigned long UNK_0069ea50;
extern "C" unsigned long UNK_0069ea66;
extern "C" unsigned long UNK_0069ea7e;
extern "C" unsigned long UNK_0069eb66;
extern "C" unsigned long UNK_0069eb74;
extern "C" unsigned long UNK_0069eb76;
extern "C" unsigned long UNK_0069eb94;
extern "C" unsigned long UNK_0069ed76;
extern "C" unsigned long UNK_0069ed78;
extern "C" unsigned long UNK_0069edfe;
extern "C" unsigned long UNK_0069ee2e;
extern "C" unsigned long UNK_0069ee60;
extern "C" unsigned long UNK_0069ee74;
extern "C" unsigned long UNK_0069ee80;
extern "C" unsigned long UNK_0069ee92;
extern "C" unsigned long UNK_0069eece;
extern "C" unsigned long UNK_0069eeee;
extern "C" unsigned long UNK_0069efb0;
extern "C" unsigned long UNK_0069efee;
extern "C" unsigned long UNK_0069f038;
extern "C" unsigned long UNK_0069f076;
extern "C" unsigned long _UNK_0069e960;
extern "C" unsigned long _UNK_0069e964;
extern "C" unsigned long _UNK_0069e978;
extern "C" unsigned long _UNK_0069e9a0;
extern "C" unsigned long _UNK_0069ea54;
extern "C" unsigned long _UNK_0069eaa8;
extern "C" unsigned long _UNK_0069eaac;
extern "C" unsigned long _UNK_0069ec9c;
extern "C" unsigned long _UNK_0069eca0;
extern "C" unsigned long _UNK_0069eca4;
extern "C" unsigned long _UNK_0069eca8;
extern "C" unsigned long _UNK_0069ecac;
extern "C" unsigned long _UNK_0069f0e4;
extern "C" unsigned long _UNK_0069f0e8;
extern "C" unsigned long _UNK_0069f0ec;
extern "C" unsigned long _UNK_0069f0f0;
extern "C" unsigned long _UNK_0069f0f4;
extern "C" unsigned long _UNK_0069f0f8;
extern "C" unsigned long _UNK_0069f0fc;
extern "C" unsigned long _UNK_0069f100;
extern "C" unsigned long _UNK_0069f104;
extern "C" unsigned long _UNK_0069f108;
extern "C" unsigned long _UNK_0069f10c;
extern "C" unsigned long _UNK_0069f110;
extern "C" unsigned long _UNK_0069f114;
extern "C" unsigned long _UNK_0069f118;
extern "C" unsigned long g_0069e914;
extern "C" unsigned long g_0069e92e;
extern "C" unsigned long g_0069e960;
extern "C" unsigned long g_0069e964;
extern "C" unsigned long g_0069e974;
extern "C" unsigned long g_0069e978;
extern "C" unsigned long g_0069e99c;
extern "C" unsigned long g_0069e9a0;
extern "C" unsigned long g_0069ea50;
extern "C" unsigned long g_0069ea54;
extern "C" unsigned long g_0069ea66;
extern "C" unsigned long g_0069ea7e;
extern "C" unsigned long g_0069eaa8;
extern "C" unsigned long g_0069eaac;
extern "C" unsigned long g_0069eb66;
extern "C" unsigned long g_0069eb74;
extern "C" unsigned long g_0069eb76;
extern "C" unsigned long g_0069eb94;
extern "C" unsigned long g_0069ec9c;
extern "C" unsigned long g_0069eca0;
extern "C" unsigned long g_0069eca4;
extern "C" unsigned long g_0069eca8;
extern "C" unsigned long g_0069ecac;
extern "C" unsigned long g_0069ed76;
extern "C" unsigned long g_0069ed78;
extern "C" unsigned long g_0069edfe;
extern "C" unsigned long g_0069ee2e;
extern "C" unsigned long g_0069ee60;
extern "C" unsigned long g_0069ee74;
extern "C" unsigned long g_0069ee80;
extern "C" unsigned long g_0069ee92;
extern "C" unsigned long g_0069eece;
extern "C" unsigned long g_0069eeee;
extern "C" unsigned long g_0069efb0;
extern "C" unsigned long g_0069efee;
extern "C" unsigned long g_0069f038;
extern "C" unsigned long g_0069f076;
extern "C" unsigned long g_0069f0e4;
extern "C" unsigned long g_0069f0e8;
extern "C" unsigned long g_0069f0ec;
extern "C" unsigned long g_0069f0f0;
extern "C" unsigned long g_0069f0f4;
extern "C" unsigned long g_0069f0f8;
extern "C" unsigned long g_0069f0fc;
extern "C" unsigned long g_0069f100;
extern "C" unsigned long g_0069f104;
extern "C" unsigned long g_0069f108;
extern "C" unsigned long g_0069f10c;
extern "C" unsigned long g_0069f110;
extern "C" unsigned long g_0069f114;
extern "C" unsigned long g_0069f118;
bool BLTalentDownInfoItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentDownInfoItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentDownInfoItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTalentDownInfoItemPresenter::~BLTalentDownInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069e914 + g_0069e960);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069e92e + g_0069e964,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTalentDownInfoItemPresenter::onUpgrace(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_0069ea50 + g_0069ea54);
  return;
}

BLTalentDownInfoItemPresenter::BLTalentDownInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069ea66 + g_0069eaa8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069ea7e + g_0069eaac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentDownInfoItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentDownInfoItemPresenter::onEnter()
{
  return;
}

void BLTalentDownInfoItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====

void BLTalentDownInfoItemPresenter::updateRichText(cocos2d::CCNode* p1, std::vector<std::string, std::allocator<std::string>> * p2)
{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [16];
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  iVar8 = 0;
  auStack_24[0] = 0;
  auStack_24[1] = 0;
  auStack_24[2] = 0;
  auStack_24[3] = 0x11;
  auStack_24[4] = 0xab;
  auStack_24[5] = 0;
  auStack_24[6] = 0;
  auStack_24[7] = 0;
  auStack_24[8] = 0;
  auStack_24[9] = 0x11;
  auStack_24[10] = 0xab;
  auStack_24[0xb] = 0;
  do {
    piVar3 = (int *)func_0079e2fc(0x3c);
    0 /* ctorZero */;
    iVar4 = (undefined4)(intptr_t)(g_0069eca0);
    *piVar3 = *(int *)((unsigned char *)((char *)&g_0069eb66 + (intptr_t)(g_0069ec9c))) + 8;
    iVar7 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0069eb76 + (intptr_t)(g_0069eca4))));
    piVar3[6] = iVar7 + 0xc;
    piVar3[7] = iVar7 + 0xc;
    piVar3[5] = 1;
    func_0079e2dc(piVar3 + 6,&g_0069eb74 + iVar4);
    func_0079e2dc(piVar3 + 7,(unsigned char *)((char *)&g_0069eb94 + (intptr_t)(g_0069eca8)));
    piVar3[10] = 0x14;
    piVar3[8] = 0;
    *(undefined1 *)(piVar3 + 9) = 0xff;
    *(undefined1 *)((int)piVar3 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar3 + 0x26) = 0xff;
    piVar3[0xb] = 0x3f800000;
    piVar3[0xd] = 0;
    piVar3[0xc] = 0;
    *(undefined1 *)(piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0x39) = 0;
    ((cocos2d::CCObject *)(piVar3))->autorelease();
    piVar3[5] = 1;
    func_0079e52c(piVar3 + 6,*(int *)p2 + iVar8 * 4);
    iVar4 = (undefined4)(intptr_t)(iVar8 * 3);
    iVar8 = (undefined4)(intptr_t)(iVar8 + 1);
    *(undefined1 *)(piVar3 + 9) = auStack_24[iVar4];
    uVar1 = (undefined4)(intptr_t)(auStack_24[iVar4 + 2]);
    *(undefined1 *)((int)piVar3 + 0x25) = auStack_24[iVar4 + 1];
    *(undefined1 *)((int)piVar3 + 0x26) = uVar1;
    piVar3[10] = 0x10;
    ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)piVar3);
  } while (iVar8 != 4);
  (**(code **)(*(int *)(p1) + (0x104)))(p1,1);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x18) + 0x8c))();
  func_0079e57c(*puVar5,g_0069ecac);
  uVar6 = (undefined4)(func_0079e5fc());
  piVar3 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)uVar2, uVar6, 1),(int *)0);
  pcVar9 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,auStack_2c);
  pcVar9 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,auStack_2c);
  (**(code **)(*(int *)(p1) + (200)))(p1,piVar3);
  return;
}

void BLTalentDownInfoItemPresenter::initWithData(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

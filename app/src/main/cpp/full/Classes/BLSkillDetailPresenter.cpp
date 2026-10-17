#include "BLSkillDetailPresenter.h"
#include "BLAttackHurtData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSkillDetailView.h"
#include "DataManager.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e814(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00674e88;
extern "C" unsigned long UNK_00674ea0;
extern "C" unsigned long UNK_00674eb8;
extern "C" unsigned long UNK_00674f2c;
extern "C" unsigned long UNK_00674f46;
extern "C" unsigned long UNK_00674f8c;
extern "C" unsigned long UNK_00674fb4;
extern "C" unsigned long UNK_00674fca;
extern "C" unsigned long UNK_00674ff8;
extern "C" unsigned long UNK_006750b4;
extern "C" unsigned long UNK_006750d0;
extern "C" unsigned long UNK_006750ec;
extern "C" unsigned long UNK_00675108;
extern "C" unsigned long UNK_00675144;
extern "C" unsigned long UNK_00675164;
extern "C" unsigned long UNK_006751aa;
extern "C" unsigned long UNK_0067524e;
extern "C" unsigned long UNK_0067526e;
extern "C" unsigned long UNK_006752ba;
extern "C" unsigned long UNK_00675364;
extern "C" unsigned long UNK_00675394;
extern "C" unsigned long UNK_006753f8;
extern "C" unsigned long UNK_00675416;
extern "C" unsigned long UNK_0067545a;
extern "C" unsigned long UNK_00675514;
extern "C" unsigned long UNK_00675532;
extern "C" unsigned long UNK_00675576;
extern "C" unsigned long UNK_00675670;
extern "C" unsigned long UNK_0067568e;
extern "C" unsigned long UNK_0067573a;
extern "C" unsigned long UNK_00675758;
extern "C" unsigned long UNK_00675802;
extern "C" unsigned long UNK_00675822;
extern "C" unsigned long UNK_00675854;
extern "C" unsigned long UNK_00675862;
extern "C" unsigned long UNK_00675876;
extern "C" unsigned long UNK_00675910;
extern "C" unsigned long UNK_00675930;
extern "C" unsigned long UNK_006759b6;
extern "C" unsigned long UNK_006759c4;
extern "C" unsigned long UNK_006759d8;
extern "C" unsigned long _UNK_00674e8c;
extern "C" unsigned long _UNK_00674ea4;
extern "C" unsigned long _UNK_00674ebc;
extern "C" unsigned long _UNK_00674f78;
extern "C" unsigned long _UNK_00674f7c;
extern "C" unsigned long _UNK_00674f90;
extern "C" unsigned long _UNK_00674fb8;
extern "C" unsigned long _UNK_00675024;
extern "C" unsigned long _UNK_00675028;
extern "C" unsigned long _UNK_00675398;
extern "C" unsigned long _UNK_0067539c;
extern "C" unsigned long _UNK_006753a0;
extern "C" unsigned long _UNK_006753a4;
extern "C" unsigned long _UNK_006753a8;
extern "C" unsigned long _UNK_006753ac;
extern "C" unsigned long _UNK_006753b0;
extern "C" unsigned long _UNK_006753b4;
extern "C" unsigned long _UNK_006753b8;
extern "C" unsigned long _UNK_006753bc;
extern "C" unsigned long _UNK_006753c0;
extern "C" unsigned long _UNK_006753c4;
extern "C" unsigned long _UNK_006753c8;
extern "C" unsigned long _UNK_006755ac;
extern "C" unsigned long _UNK_006755b0;
extern "C" unsigned long _UNK_006755b4;
extern "C" unsigned long _UNK_006755b8;
extern "C" unsigned long _UNK_006755bc;
extern "C" unsigned long _UNK_006755c0;
extern "C" unsigned long _UNK_00675a00;
extern "C" unsigned long _UNK_00675a04;
extern "C" unsigned long _UNK_00675a08;
extern "C" unsigned long _UNK_00675a0c;
extern "C" unsigned long _UNK_00675a10;
extern "C" unsigned long _UNK_00675a14;
extern "C" unsigned long _UNK_00675a18;
extern "C" unsigned long _UNK_00675a1c;
extern "C" unsigned long _UNK_00675a20;
extern "C" unsigned long _UNK_00675a24;
extern "C" unsigned long _UNK_00675a28;
extern "C" unsigned long _UNK_00675a2c;
extern "C" unsigned long _UNK_00675a30;
extern "C" unsigned long _UNK_00675a34;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r12;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00674e88;
extern "C" unsigned long g_00674e8c;
extern "C" unsigned long g_00674ea0;
extern "C" unsigned long g_00674ea4;
extern "C" unsigned long g_00674eb8;
extern "C" unsigned long g_00674ebc;
extern "C" unsigned long g_00674f2c;
extern "C" unsigned long g_00674f46;
extern "C" unsigned long g_00674f78;
extern "C" unsigned long g_00674f7c;
extern "C" unsigned long g_00674f8c;
extern "C" unsigned long g_00674f90;
extern "C" unsigned long g_00674fb4;
extern "C" unsigned long g_00674fb8;
extern "C" unsigned long g_00674fca;
extern "C" unsigned long g_00674ff8;
extern "C" unsigned long g_00675024;
extern "C" unsigned long g_00675028;
extern "C" unsigned long g_006750b4;
extern "C" unsigned long g_006750d0;
extern "C" unsigned long g_006750ec;
extern "C" unsigned long g_00675108;
extern "C" unsigned long g_00675144;
extern "C" unsigned long g_00675164;
extern "C" unsigned long g_006751aa;
extern "C" unsigned long g_0067524e;
extern "C" unsigned long g_0067526e;
extern "C" unsigned long g_006752ba;
extern "C" unsigned long g_00675364;
extern "C" unsigned long g_00675394;
extern "C" unsigned long g_00675398;
extern "C" unsigned long g_0067539c;
extern "C" unsigned long g_006753a0;
extern "C" unsigned long g_006753a4;
extern "C" unsigned long g_006753a8;
extern "C" unsigned long g_006753ac;
extern "C" unsigned long g_006753b0;
extern "C" unsigned long g_006753b4;
extern "C" unsigned long g_006753b8;
extern "C" unsigned long g_006753bc;
extern "C" unsigned long g_006753c0;
extern "C" unsigned long g_006753c4;
extern "C" unsigned long g_006753c8;
extern "C" unsigned long g_006753f8;
extern "C" unsigned long g_00675416;
extern "C" unsigned long g_0067545a;
extern "C" unsigned long g_00675514;
extern "C" unsigned long g_00675532;
extern "C" unsigned long g_00675576;
extern "C" unsigned long g_006755ac;
extern "C" unsigned long g_006755b0;
extern "C" unsigned long g_006755b4;
extern "C" unsigned long g_006755b8;
extern "C" unsigned long g_006755bc;
extern "C" unsigned long g_006755c0;
extern "C" unsigned long g_00675670;
extern "C" unsigned long g_0067568e;
extern "C" unsigned long g_0067573a;
extern "C" unsigned long g_00675758;
extern "C" unsigned long g_00675802;
extern "C" unsigned long g_00675822;
extern "C" unsigned long g_00675854;
extern "C" unsigned long g_00675862;
extern "C" unsigned long g_00675876;
extern "C" unsigned long g_00675910;
extern "C" unsigned long g_00675930;
extern "C" unsigned long g_006759b6;
extern "C" unsigned long g_006759c4;
extern "C" unsigned long g_006759d8;
extern "C" unsigned long g_00675a00;
extern "C" unsigned long g_00675a04;
extern "C" unsigned long g_00675a08;
extern "C" unsigned long g_00675a0c;
extern "C" unsigned long g_00675a10;
extern "C" unsigned long g_00675a14;
extern "C" unsigned long g_00675a18;
extern "C" unsigned long g_00675a1c;
extern "C" unsigned long g_00675a20;
extern "C" unsigned long g_00675a24;
extern "C" unsigned long g_00675a28;
extern "C" unsigned long g_00675a2c;
extern "C" unsigned long g_00675a30;
extern "C" unsigned long g_00675a34;
bool BLSkillDetailPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSkillDetailPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSkillDetailPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSkillDetailPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSkillDetailPresenter::tick(float p1)
{
  return;
}

BLSkillDetailPresenter::~BLSkillDetailPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00674f2c + g_00674f78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00674f46 + g_00674f7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSkillDetailPresenter::BLSkillDetailPresenter()
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
  iVar3 = *(int *)(&g_00674fca + g_00675024);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00674ff8 + g_00675028,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSkillDetailPresenter::create(BLSkillDetailView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSkillDetailPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSkillDetailPresenter::onEnter()
{
  return;
}

void BLSkillDetailPresenter::initWithView(BLSkillDetailView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSkillDetailPresenter::initWith(BLAttackHurtData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

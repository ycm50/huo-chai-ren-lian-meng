#include "BLSkillItemPresenter.h"
#include "BLAttackHurtData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSkillDetailPresenter.h"
#include "BLSkillDetailView.h"
#include "BLSkillItemView.h"
#include "BLUpgraceButtonView.h"
#include "BLUpgraceMAXButtonView.h"
#include "DataManager.h"
#include "LivenessUserData.h"
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
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e884(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00675bcc;
extern "C" unsigned long UNK_00675c40;
extern "C" unsigned long UNK_00675c5a;
extern "C" unsigned long UNK_00675ca0;
extern "C" unsigned long UNK_00675cc8;
extern "C" unsigned long UNK_00675cf0;
extern "C" unsigned long UNK_00675d22;
extern "C" unsigned long UNK_00675d24;
extern "C" unsigned long UNK_00675d3e;
extern "C" unsigned long UNK_00675d40;
extern "C" unsigned long UNK_00675f12;
extern "C" unsigned long UNK_00675f4c;
extern "C" unsigned long UNK_00675f62;
extern "C" unsigned long UNK_00675f90;
extern "C" unsigned long UNK_0067601a;
extern "C" unsigned long UNK_00676042;
extern "C" unsigned long UNK_00676134;
extern "C" unsigned long UNK_00676150;
extern "C" unsigned long UNK_0067616c;
extern "C" unsigned long UNK_00676188;
extern "C" unsigned long UNK_006761b8;
extern "C" unsigned long UNK_006761de;
extern "C" unsigned long UNK_006761e0;
extern "C" unsigned long UNK_0067625c;
extern "C" unsigned long UNK_00676404;
extern "C" unsigned long UNK_00676414;
extern "C" unsigned long UNK_00676514;
extern "C" unsigned long UNK_00676530;
extern "C" unsigned long UNK_0067654e;
extern "C" unsigned long UNK_006765d0;
extern "C" unsigned long UNK_0067660a;
extern "C" unsigned long UNK_0067662e;
extern "C" unsigned long UNK_00676650;
extern "C" unsigned long UNK_006766c6;
extern "C" unsigned long UNK_006766e4;
extern "C" unsigned long UNK_00676726;
extern "C" unsigned long UNK_006768ae;
extern "C" unsigned long UNK_00676912;
extern "C" unsigned long UNK_0067692e;
extern "C" unsigned long UNK_0067694a;
extern "C" unsigned long UNK_00676966;
extern "C" unsigned long UNK_006769a4;
extern "C" unsigned long UNK_006769ec;
extern "C" unsigned long UNK_00676a14;
extern "C" unsigned long UNK_00676a18;
extern "C" unsigned long UNK_00676a28;
extern "C" unsigned long UNK_00676a44;
extern "C" unsigned long UNK_00676a62;
extern "C" unsigned long UNK_00676a7e;
extern "C" unsigned long UNK_00676b3e;
extern "C" unsigned long UNK_00676bee;
extern "C" unsigned long UNK_00676c60;
extern "C" unsigned long UNK_00676c7c;
extern "C" unsigned long UNK_00676c98;
extern "C" unsigned long UNK_00676cb4;
extern "C" unsigned long UNK_00676cf8;
extern "C" unsigned long UNK_00676d40;
extern "C" unsigned long UNK_00676d64;
extern "C" unsigned long UNK_00676d68;
extern "C" unsigned long UNK_00676d7a;
extern "C" unsigned long UNK_00676d96;
extern "C" unsigned long UNK_00676db2;
extern "C" unsigned long UNK_00676dce;
extern "C" unsigned long UNK_00676e98;
extern "C" unsigned long _UNK_00675bd0;
extern "C" unsigned long _UNK_00675c8c;
extern "C" unsigned long _UNK_00675c90;
extern "C" unsigned long _UNK_00675ca4;
extern "C" unsigned long _UNK_00675ccc;
extern "C" unsigned long _UNK_00675cf4;
extern "C" unsigned long _UNK_00675e2c;
extern "C" unsigned long _UNK_00675e30;
extern "C" unsigned long _UNK_00675e34;
extern "C" unsigned long _UNK_00675e38;
extern "C" unsigned long _UNK_00675e3c;
extern "C" unsigned long _UNK_00675e40;
extern "C" unsigned long _UNK_00675f38;
extern "C" unsigned long _UNK_00675f3c;
extern "C" unsigned long _UNK_00675f50;
extern "C" unsigned long _UNK_00675fc8;
extern "C" unsigned long _UNK_00675fcc;
extern "C" unsigned long _UNK_006760a4;
extern "C" unsigned long _UNK_006760a8;
extern "C" unsigned long _UNK_00676348;
extern "C" unsigned long _UNK_0067634c;
extern "C" unsigned long _UNK_00676350;
extern "C" unsigned long _UNK_00676354;
extern "C" unsigned long _UNK_00676358;
extern "C" unsigned long _UNK_0067635c;
extern "C" unsigned long _UNK_00676360;
extern "C" unsigned long _UNK_00676364;
extern "C" unsigned long _UNK_00676368;
extern "C" unsigned long _UNK_006767b0;
extern "C" unsigned long _UNK_006767b4;
extern "C" unsigned long _UNK_006767b8;
extern "C" unsigned long _UNK_006767bc;
extern "C" unsigned long _UNK_006767c0;
extern "C" unsigned long _UNK_006767c4;
extern "C" unsigned long _UNK_006767c8;
extern "C" unsigned long _UNK_006767cc;
extern "C" unsigned long _UNK_006767d0;
extern "C" unsigned long _UNK_006767d4;
extern "C" unsigned long _UNK_006767d8;
extern "C" unsigned long _UNK_006767dc;
extern "C" unsigned long _UNK_006767e0;
extern "C" unsigned long _UNK_00676ba0;
extern "C" unsigned long _UNK_00676ba4;
extern "C" unsigned long _UNK_00676ba8;
extern "C" unsigned long _UNK_00676bac;
extern "C" unsigned long _UNK_00676bb0;
extern "C" unsigned long _UNK_00676bb4;
extern "C" unsigned long _UNK_00676bb8;
extern "C" unsigned long _UNK_00676bbc;
extern "C" unsigned long _UNK_00676bc0;
extern "C" unsigned long _UNK_00676bc4;
extern "C" unsigned long _UNK_00676bc8;
extern "C" unsigned long _UNK_00676bcc;
extern "C" unsigned long _UNK_00676bd0;
extern "C" unsigned long _UNK_00676bd4;
extern "C" unsigned long _UNK_00676bd8;
extern "C" unsigned long _UNK_00676efc;
extern "C" unsigned long _UNK_00676f00;
extern "C" unsigned long _UNK_00676f04;
extern "C" unsigned long _UNK_00676f08;
extern "C" unsigned long _UNK_00676f0c;
extern "C" unsigned long _UNK_00676f10;
extern "C" unsigned long _UNK_00676f14;
extern "C" unsigned long _UNK_00676f18;
extern "C" unsigned long _UNK_00676f1c;
extern "C" unsigned long _UNK_00676f20;
extern "C" unsigned long _UNK_00676f24;
extern "C" unsigned long _UNK_00676f28;
extern "C" unsigned long _UNK_00676f2c;
extern "C" unsigned long _UNK_00676f30;
extern "C" unsigned long _UNK_00676f34;
extern "C" unsigned long g_00675bcc;
extern "C" unsigned long g_00675bd0;
extern "C" unsigned long g_00675c40;
extern "C" unsigned long g_00675c5a;
extern "C" unsigned long g_00675c8c;
extern "C" unsigned long g_00675c90;
extern "C" unsigned long g_00675ca0;
extern "C" unsigned long g_00675ca4;
extern "C" unsigned long g_00675cc8;
extern "C" unsigned long g_00675ccc;
extern "C" unsigned long g_00675cf0;
extern "C" unsigned long g_00675cf4;
extern "C" unsigned long g_00675d22;
extern "C" unsigned long g_00675d24;
extern "C" unsigned long g_00675d3e;
extern "C" unsigned long g_00675d40;
extern "C" unsigned long g_00675e2c;
extern "C" unsigned long g_00675e30;
extern "C" unsigned long g_00675e34;
extern "C" unsigned long g_00675e38;
extern "C" unsigned long g_00675e3c;
extern "C" unsigned long g_00675e40;
extern "C" unsigned long g_00675f12;
extern "C" unsigned long g_00675f38;
extern "C" unsigned long g_00675f3c;
extern "C" unsigned long g_00675f4c;
extern "C" unsigned long g_00675f50;
extern "C" unsigned long g_00675f62;
extern "C" unsigned long g_00675f90;
extern "C" unsigned long g_00675fc8;
extern "C" unsigned long g_00675fcc;
extern "C" unsigned long g_0067601a;
extern "C" unsigned long g_00676042;
extern "C" unsigned long g_006760a4;
extern "C" unsigned long g_006760a8;
extern "C" unsigned long g_00676134;
extern "C" unsigned long g_00676150;
extern "C" unsigned long g_0067616c;
extern "C" unsigned long g_00676188;
extern "C" unsigned long g_006761b8;
extern "C" unsigned long g_006761de;
extern "C" unsigned long g_006761e0;
extern "C" unsigned long g_0067625c;
extern "C" unsigned long g_00676348;
extern "C" unsigned long g_0067634c;
extern "C" unsigned long g_00676350;
extern "C" unsigned long g_00676354;
extern "C" unsigned long g_00676358;
extern "C" unsigned long g_0067635c;
extern "C" unsigned long g_00676360;
extern "C" unsigned long g_00676364;
extern "C" unsigned long g_00676368;
extern "C" unsigned long g_00676404;
extern "C" unsigned long g_00676414;
extern "C" unsigned long g_00676514;
extern "C" unsigned long g_00676530;
extern "C" unsigned long g_0067654e;
extern "C" unsigned long g_006765d0;
extern "C" unsigned long g_0067660a;
extern "C" unsigned long g_0067662e;
extern "C" unsigned long g_00676650;
extern "C" unsigned long g_006766c6;
extern "C" unsigned long g_006766e4;
extern "C" unsigned long g_00676726;
extern "C" unsigned long g_006767b0;
extern "C" unsigned long g_006767b4;
extern "C" unsigned long g_006767b8;
extern "C" unsigned long g_006767bc;
extern "C" unsigned long g_006767c0;
extern "C" unsigned long g_006767c4;
extern "C" unsigned long g_006767c8;
extern "C" unsigned long g_006767cc;
extern "C" unsigned long g_006767d0;
extern "C" unsigned long g_006767d4;
extern "C" unsigned long g_006767d8;
extern "C" unsigned long g_006767dc;
extern "C" unsigned long g_006767e0;
extern "C" unsigned long g_006768ae;
extern "C" unsigned long g_00676912;
extern "C" unsigned long g_0067692e;
extern "C" unsigned long g_0067694a;
extern "C" unsigned long g_00676966;
extern "C" unsigned long g_006769a4;
extern "C" unsigned long g_006769ec;
extern "C" unsigned long g_00676a14;
extern "C" unsigned long g_00676a18;
extern "C" unsigned long g_00676a28;
extern "C" unsigned long g_00676a44;
extern "C" unsigned long g_00676a62;
extern "C" unsigned long g_00676a7e;
extern "C" unsigned long g_00676b3e;
extern "C" unsigned long g_00676ba0;
extern "C" unsigned long g_00676ba4;
extern "C" unsigned long g_00676ba8;
extern "C" unsigned long g_00676bac;
extern "C" unsigned long g_00676bb0;
extern "C" unsigned long g_00676bb4;
extern "C" unsigned long g_00676bb8;
extern "C" unsigned long g_00676bbc;
extern "C" unsigned long g_00676bc0;
extern "C" unsigned long g_00676bc4;
extern "C" unsigned long g_00676bc8;
extern "C" unsigned long g_00676bcc;
extern "C" unsigned long g_00676bd0;
extern "C" unsigned long g_00676bd4;
extern "C" unsigned long g_00676bd8;
extern "C" unsigned long g_00676bee;
extern "C" unsigned long g_00676c60;
extern "C" unsigned long g_00676c7c;
extern "C" unsigned long g_00676c98;
extern "C" unsigned long g_00676cb4;
extern "C" unsigned long g_00676cf8;
extern "C" unsigned long g_00676d40;
extern "C" unsigned long g_00676d64;
extern "C" unsigned long g_00676d68;
extern "C" unsigned long g_00676d7a;
extern "C" unsigned long g_00676d96;
extern "C" unsigned long g_00676db2;
extern "C" unsigned long g_00676dce;
extern "C" unsigned long g_00676e98;
extern "C" unsigned long g_00676efc;
extern "C" unsigned long g_00676f00;
extern "C" unsigned long g_00676f04;
extern "C" unsigned long g_00676f08;
extern "C" unsigned long g_00676f0c;
extern "C" unsigned long g_00676f10;
extern "C" unsigned long g_00676f14;
extern "C" unsigned long g_00676f18;
extern "C" unsigned long g_00676f1c;
extern "C" unsigned long g_00676f20;
extern "C" unsigned long g_00676f24;
extern "C" unsigned long g_00676f28;
extern "C" unsigned long g_00676f2c;
extern "C" unsigned long g_00676f30;
extern "C" unsigned long g_00676f34;
void BLSkillItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x20) = 1;
  return;
}

void BLSkillItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSkillItemPresenter::tick(float p1)
{
  return;
}

BLSkillItemPresenter::~BLSkillItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00675c40 + g_00675c8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00675c5a + g_00675c90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSkillItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  
  ((cocos2d::CCNode *)*(undefined4 *)(((int)this) + 0x18))->stopAllActions();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x33);
  return;
}



BLSkillItemPresenter::BLSkillItemPresenter()
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
  iVar3 = *(int *)(&g_00675f62 + g_00675fc8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00675f90 + g_00675fcc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(undefined1 *)((int)((int)this) + 0x21) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  return;
}

undefined4 BLSkillItemPresenter::create(BLSkillItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSkillItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSkillItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLSkillItemPresenter::showDetail()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLSkillItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSkillItemPresenter::initWithView(BLSkillItemView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSkillItemPresenter::updateData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSkillItemPresenter::initWithData(BLAttackHurtData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSkillItemPresenter::onUpgrace(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSkillItemPresenter::onUpgraceMAX(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

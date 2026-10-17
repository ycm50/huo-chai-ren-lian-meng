#include "BLTreasureRoleItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLTreasureRoleItemView.h"
#include "RoleInfoData.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ab7a8;
extern "C" unsigned long UNK_006ab7de;
extern "C" unsigned long UNK_006ab824;
extern "C" unsigned long UNK_006ab84c;
extern "C" unsigned long UNK_006ab8aa;
extern "C" unsigned long UNK_006ab8d8;
extern "C" unsigned long UNK_006ab970;
extern "C" unsigned long UNK_006aba16;
extern "C" unsigned long UNK_006aba54;
extern "C" unsigned long UNK_006aba9c;
extern "C" unsigned long UNK_006abad6;
extern "C" unsigned long UNK_006abb8a;
extern "C" unsigned long UNK_006abbca;
extern "C" unsigned long UNK_006abce4;
extern "C" unsigned long UNK_006abcf0;
extern "C" unsigned long _UNK_006ab810;
extern "C" unsigned long _UNK_006ab814;
extern "C" unsigned long _UNK_006ab828;
extern "C" unsigned long _UNK_006ab850;
extern "C" unsigned long _UNK_006ab908;
extern "C" unsigned long _UNK_006ab90c;
extern "C" unsigned long _UNK_006aba38;
extern "C" unsigned long _UNK_006aba3c;
extern "C" unsigned long _UNK_006aba40;
extern "C" unsigned long _UNK_006aba44;
extern "C" unsigned long _UNK_006abd6c;
extern "C" unsigned long _UNK_006abd70;
extern "C" unsigned long _UNK_006abd74;
extern "C" unsigned long _UNK_006abd78;
extern "C" unsigned long _UNK_006abd7c;
extern "C" unsigned long _UNK_006abd80;
extern "C" unsigned long _UNK_006abd84;
extern "C" unsigned long _UNK_006abd88;
extern "C" unsigned long _UNK_006abd8c;
extern "C" unsigned long g_006ab7a8;
extern "C" unsigned long g_006ab7de;
extern "C" unsigned long g_006ab810;
extern "C" unsigned long g_006ab814;
extern "C" unsigned long g_006ab824;
extern "C" unsigned long g_006ab828;
extern "C" unsigned long g_006ab84c;
extern "C" unsigned long g_006ab850;
extern "C" unsigned long g_006ab8aa;
extern "C" unsigned long g_006ab8d8;
extern "C" unsigned long g_006ab908;
extern "C" unsigned long g_006ab90c;
extern "C" unsigned long g_006ab970;
extern "C" unsigned long g_006aba16;
extern "C" unsigned long g_006aba38;
extern "C" unsigned long g_006aba3c;
extern "C" unsigned long g_006aba40;
extern "C" unsigned long g_006aba44;
extern "C" unsigned long g_006aba54;
extern "C" unsigned long g_006aba9c;
extern "C" unsigned long g_006abad6;
extern "C" unsigned long g_006abb8a;
extern "C" unsigned long g_006abbca;
extern "C" unsigned long g_006abce4;
extern "C" unsigned long g_006abcf0;
extern "C" unsigned long g_006abd6c;
extern "C" unsigned long g_006abd70;
extern "C" unsigned long g_006abd74;
extern "C" unsigned long g_006abd78;
extern "C" unsigned long g_006abd7c;
extern "C" unsigned long g_006abd80;
extern "C" unsigned long g_006abd84;
extern "C" unsigned long g_006abd88;
extern "C" unsigned long g_006abd8c;
bool BLTreasureRoleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureRoleItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureRoleItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureRoleItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLTreasureRoleItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLTreasureRoleItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLTreasureRoleItemPresenter::tick(float p1)
{
  return;
}

void BLTreasureRoleItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLTreasureRoleItemPresenter::~BLTreasureRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006ab7a8 + g_006ab810);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ab7de + g_006ab814,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureRoleItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLTreasureRoleItemPresenter::setRoleData(RoleData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLTreasureRoleItemPresenter::BLTreasureRoleItemPresenter()
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
  iVar3 = *(int *)(&g_006ab8aa + g_006ab908);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ab8d8 + g_006ab90c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

void BLTreasureRoleItemPresenter::onEnter()
{
  return;
}

void BLTreasureRoleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLTreasureRoleItemPresenter::create(BLTreasureRoleItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLTreasureRoleItemPresenter::initWithView(BLTreasureRoleItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureRoleItemView *)p1)->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_006ab970 + g_006aba38));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlStars();
  (**(code **)(*piVar1 + 0x21c))(piVar1,1);
  piVar1 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_28);
  piVar1 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  pcVar6 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  piVar2 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  iVar4 = (**(code **)(*piVar2 + 0x8c))();
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar4 + 4)),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006aba3c)))));
  (*pcVar6)(piVar1,uVar3);
  piVar1 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  (**(code **)(*piVar1 + 0x40))(piVar1,g_006aba40);
  piVar1 = (int *)((BLTreasureRoleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRole();
  pcVar6 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,&g_006aba16 + g_006aba44,auStack_2c);
  (*pcVar6)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLTreasureRoleItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureRoleItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "PKHeroDetailPresenter.h"
#include "BLHeroSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKHeroDetailView.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00614248;
extern "C" unsigned long UNK_00614260;
extern "C" unsigned long UNK_00614278;
extern "C" unsigned long UNK_006142ec;
extern "C" unsigned long UNK_00614306;
extern "C" unsigned long UNK_0061434c;
extern "C" unsigned long UNK_00614374;
extern "C" unsigned long UNK_0061439e;
extern "C" unsigned long UNK_006143cc;
extern "C" unsigned long UNK_00614460;
extern "C" unsigned long UNK_006144e4;
extern "C" unsigned long UNK_00614512;
extern "C" unsigned long UNK_006145b2;
extern "C" unsigned long UNK_006146ca;
extern "C" unsigned long UNK_0061473e;
extern "C" unsigned long _UNK_0061424c;
extern "C" unsigned long _UNK_00614264;
extern "C" unsigned long _UNK_0061427c;
extern "C" unsigned long _UNK_00614338;
extern "C" unsigned long _UNK_0061433c;
extern "C" unsigned long _UNK_00614350;
extern "C" unsigned long _UNK_00614378;
extern "C" unsigned long _UNK_0061438c;
extern "C" unsigned long _UNK_006143f8;
extern "C" unsigned long _UNK_006143fc;
extern "C" unsigned long _UNK_00614468;
extern "C" unsigned long _UNK_006147d8;
extern "C" unsigned long _UNK_006147dc;
extern "C" unsigned long _UNK_006147e0;
extern "C" unsigned long _UNK_006147e4;
extern "C" unsigned long _UNK_006147e8;
extern "C" unsigned long _UNK_006147ec;
extern "C" unsigned long _UNK_006147f0;
extern "C" unsigned long _UNK_006147f4;
extern "C" unsigned long g_00614248;
extern "C" unsigned long g_0061424c;
extern "C" unsigned long g_00614260;
extern "C" unsigned long g_00614264;
extern "C" unsigned long g_00614278;
extern "C" unsigned long g_0061427c;
extern "C" unsigned long g_006142ec;
extern "C" unsigned long g_00614306;
extern "C" unsigned long g_00614338;
extern "C" unsigned long g_0061433c;
extern "C" unsigned long g_0061434c;
extern "C" unsigned long g_00614350;
extern "C" unsigned long g_00614374;
extern "C" unsigned long g_00614378;
extern "C" unsigned long g_0061438c;
extern "C" unsigned long g_0061439e;
extern "C" unsigned long g_006143cc;
extern "C" unsigned long g_006143f8;
extern "C" unsigned long g_006143fc;
extern "C" unsigned long g_00614460;
extern "C" unsigned long g_00614468;
extern "C" unsigned long g_006144e4;
extern "C" unsigned long g_00614512;
extern "C" unsigned long g_006145b2;
extern "C" unsigned long g_006146ca;
extern "C" unsigned long g_0061473e;
extern "C" unsigned long g_006147d8;
extern "C" unsigned long g_006147dc;
extern "C" unsigned long g_006147e0;
extern "C" unsigned long g_006147e4;
extern "C" unsigned long g_006147e8;
extern "C" unsigned long g_006147ec;
extern "C" unsigned long g_006147f0;
extern "C" unsigned long g_006147f4;
bool PKHeroDetailPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKHeroDetailPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroDetailPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroDetailPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroDetailPresenter::tick(float p1)
{
  return;
}

PKHeroDetailPresenter::~PKHeroDetailPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006142ec + g_00614338);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00614306 + g_0061433c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKHeroDetailPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0061438c);
  return;
}

PKHeroDetailPresenter::PKHeroDetailPresenter()
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
  iVar3 = *(int *)(&g_0061439e + g_006143f8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006143cc + g_006143fc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 PKHeroDetailPresenter::create(PKHeroDetailView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PKHeroDetailPresenter::onEnter()
{
  return;
}

void PKHeroDetailPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void PKHeroDetailPresenter::initWithView(PKHeroDetailView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKHeroDetailView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00614460 + g_00614468),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void PKHeroDetailPresenter::initWith(RankPlayerData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

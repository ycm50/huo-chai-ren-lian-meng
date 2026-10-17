#include "GuideLayer.h"
#include "CCGeometry.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "GuideStep.h"
#include "BLLanguage.h"
#include "BLRoleBase.h"
#include "GuideManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00562ea4(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00562284;
extern "C" unsigned long UNK_0056229c;
extern "C" unsigned long UNK_005622f4;
extern "C" unsigned long UNK_00562330;
extern "C" unsigned long UNK_00562358;
extern "C" unsigned long UNK_005623c4;
extern "C" unsigned long UNK_0056240a;
extern "C" unsigned long UNK_00562432;
extern "C" unsigned long UNK_00562450;
extern "C" unsigned long UNK_00562488;
extern "C" unsigned long UNK_005624d0;
extern "C" unsigned long UNK_00562526;
extern "C" unsigned long UNK_0056257c;
extern "C" unsigned long UNK_005625d4;
extern "C" unsigned long UNK_00562e76;
extern "C" unsigned long UNK_00563006;
extern "C" unsigned long UNK_00563032;
extern "C" unsigned long UNK_0056307e;
extern "C" unsigned long UNK_00563098;
extern "C" unsigned long UNK_0056309a;
extern "C" unsigned long UNK_005630fa;
extern "C" unsigned long UNK_00563160;
extern "C" unsigned long UNK_00563162;
extern "C" unsigned long UNK_0056319e;
extern "C" unsigned long _UNK_00562288;
extern "C" unsigned long _UNK_005622a0;
extern "C" unsigned long _UNK_00562320;
extern "C" unsigned long _UNK_00562334;
extern "C" unsigned long _UNK_0056235c;
extern "C" unsigned long _UNK_005623c8;
extern "C" unsigned long _UNK_0056243c;
extern "C" unsigned long _UNK_00562440;
extern "C" unsigned long _UNK_00562454;
extern "C" unsigned long _UNK_00562508;
extern "C" unsigned long _UNK_0056250c;
extern "C" unsigned long _UNK_00562568;
extern "C" unsigned long _UNK_005625c4;
extern "C" unsigned long _UNK_0056294c;
extern "C" unsigned long _UNK_00562950;
extern "C" unsigned long _UNK_00562954;
extern "C" unsigned long _UNK_00562958;
extern "C" unsigned long _UNK_0056295c;
extern "C" unsigned long _UNK_00562960;
extern "C" unsigned long _UNK_00562c30;
extern "C" unsigned long _UNK_00562c34;
extern "C" unsigned long _UNK_00562f6c;
extern "C" unsigned long _UNK_00562f70;
extern "C" unsigned long _UNK_00562f74;
extern "C" unsigned long _UNK_00562f78;
extern "C" unsigned long _UNK_00563110;
extern "C" unsigned long _UNK_00563114;
extern "C" unsigned long _UNK_00563118;
extern "C" unsigned long _UNK_0056311c;
extern "C" unsigned long _UNK_00563120;
extern "C" unsigned long _UNK_00563124;
extern "C" unsigned long _UNK_00563128;
extern "C" unsigned long _UNK_0056312c;
extern "C" unsigned long _UNK_00563130;
extern "C" unsigned long _UNK_00563174;
extern "C" unsigned long _UNK_00563178;
extern "C" unsigned long _UNK_005631a8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00562284;
extern "C" unsigned long g_00562288;
extern "C" unsigned long g_0056229c;
extern "C" unsigned long g_005622a0;
extern "C" unsigned long g_005622f4;
extern "C" unsigned long g_00562320;
extern "C" unsigned long g_00562330;
extern "C" unsigned long g_00562334;
extern "C" unsigned long g_00562358;
extern "C" unsigned long g_0056235c;
extern "C" unsigned long g_005623c4;
extern "C" unsigned long g_005623c8;
extern "C" unsigned long g_0056240a;
extern "C" unsigned long g_00562432;
extern "C" unsigned long g_0056243c;
extern "C" unsigned long g_00562440;
extern "C" unsigned long g_00562450;
extern "C" unsigned long g_00562454;
extern "C" unsigned long g_00562488;
extern "C" unsigned long g_005624d0;
extern "C" unsigned long g_00562508;
extern "C" unsigned long g_0056250c;
extern "C" unsigned long g_00562526;
extern "C" unsigned long g_00562568;
extern "C" unsigned long g_0056257c;
extern "C" unsigned long g_005625c4;
extern "C" unsigned long g_005625d4;
extern "C" unsigned long g_0056294c;
extern "C" unsigned long g_00562950;
extern "C" unsigned long g_00562954;
extern "C" unsigned long g_00562958;
extern "C" unsigned long g_0056295c;
extern "C" unsigned long g_00562960;
extern "C" unsigned long g_00562c30;
extern "C" unsigned long g_00562c34;
extern "C" unsigned long g_00562e76;
extern "C" unsigned long g_00562f6c;
extern "C" unsigned long g_00562f70;
extern "C" unsigned long g_00562f74;
extern "C" unsigned long g_00562f78;
extern "C" unsigned long g_00563006;
extern "C" unsigned long g_00563032;
extern "C" unsigned long g_0056307e;
extern "C" unsigned long g_00563098;
extern "C" unsigned long g_0056309a;
extern "C" unsigned long g_005630fa;
extern "C" unsigned long g_00563110;
extern "C" unsigned long g_00563114;
extern "C" unsigned long g_00563118;
extern "C" unsigned long g_0056311c;
extern "C" unsigned long g_00563120;
extern "C" unsigned long g_00563124;
extern "C" unsigned long g_00563128;
extern "C" unsigned long g_0056312c;
extern "C" unsigned long g_00563130;
extern "C" unsigned long g_00563160;
extern "C" unsigned long g_00563162;
extern "C" unsigned long g_00563174;
extern "C" unsigned long g_00563178;
extern "C" unsigned long g_0056319e;
extern "C" unsigned long g_005631a8;
GuideStep* GuideLayer::getStep() const
{
  return (GuideStep*)(*(undefined4 *)(((int)this) + 0x108));
}

bool GuideLayer::getActioning() const
{
  return *(undefined1 *)(((int)this) + 0x10c);
}

void GuideLayer::setActioning(bool p1)
{
  *(undefined1 *)(((int)this) + 0x10c) = p1;
  return;
}

bool GuideLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 300) = 0;
  return 1;
}

void GuideLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

GuideLayer::~GuideLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_005622f4 + g_00562320);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x254;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void GuideLayer::registerWithTouchDispatcher()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 0xffffff7f, 1);
  return;
}



void GuideLayer::setStep(GuideStep* p1)
{
  if (*(int *)(((int)this) + 0x108) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x108) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  }
  return;
}



GuideLayer::GuideLayer()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_0056257c + g_005625c4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x254;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(undefined1 *)(((int)this) + 0x43) = 0;
  return;
}


bool GuideLayer::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    func_0079e45c(auStack_20,&g_00563006 + g_00563110,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(auStack_20,&g_00563032 + g_00563114,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x7c))((int *)*(int *)((int)this + 4*(0x45)),&g_0056307e + g_00563118);
    piVar5 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar4 = *(code **)(*piVar5 + 0x1d4);
    (**(code **)(*piVar5 + 0x1cc))(auStack_28,piVar5);
    0 /* ctorZero */;
    (*pcVar4)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00563098 + g_00563120, (char const*)&g_0056309a + g_00563124, g_00563128);
    *(int *)((int)this + 4*(0x46)) = (int)piVar5;
    pcVar4 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar4)(piVar5,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 200))((int *)*(int *)((int)this + 4*(0x45)),*(int *)((int)this + 4*(0x46)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar4 = *(code **)(*piVar5 + 0x4c);
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    (*pcVar4)(piVar5,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x46)),&g_005630fa + g_00563130)
    ;
  }
  return iVar1;
}


void GuideLayer::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0056319e + g_005631a8);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

int * GuideLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void GuideLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  int iVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  ((cocos2d::CCTouch *)(&piStack_18))->getLocation();
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCRect *)(((int)this) + 0x47))->containsPoint(*(cocos2d::CCPoint const*)&piStack_18));
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 0x94))(((int)this)), iVar1 != 0)) {
    *(undefined1 *)(((int)this) + 0x4b) = 1;
  }
  return;
}

void GuideLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideLayer::onTouchClick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 GuideLayer::onBtnClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void GuideLayer::refreshStep(GuideStep* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideLayer::startAction(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 0x110);
  if ((piVar1 != (int *)0x0) && (*(int *)(((int)this) + 0x108) != 0)) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0,p3,*(code **)(*piVar1 + 0x90),p4);
  }
  piVar1 = *(int **)(((int)this) + 0x114);
  if ((piVar1 != (int *)0x0) && (*(int *)(((int)this) + 0x108) != 0)) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  *(undefined1 *)(((int)this) + 0x10c) = 1;
  return;
}

void GuideLayer::actionEnd()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1,p3,*(code **)(*piVar1 + 0x90),p4);
  }
  piVar1 = *(int **)(((int)this) + 0x114);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  *(undefined1 *)(((int)this) + 0x10c) = 0;
  return;
}

void GuideLayer::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

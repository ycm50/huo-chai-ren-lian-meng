#include "GuideMaskSprite.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "GuideStep.h"
#include "GuideLayer.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005646ea;
extern "C" unsigned long UNK_00564754;
extern "C" unsigned long UNK_0056477c;
extern "C" unsigned long UNK_00564a80;
extern "C" unsigned long UNK_00564ef8;
extern "C" unsigned long UNK_00565070;
extern "C" unsigned long UNK_005653b8;
extern "C" unsigned long UNK_005654b0;
extern "C" unsigned long UNK_005654d2;
extern "C" unsigned long UNK_00565510;
extern "C" unsigned long UNK_00565562;
extern "C" unsigned long UNK_00565592;
extern "C" unsigned long UNK_0056559a;
extern "C" unsigned long UNK_005655d8;
extern "C" unsigned long UNK_0056561c;
extern "C" unsigned long UNK_00565658;
extern "C" unsigned long UNK_00565714;
extern "C" unsigned long UNK_0056575e;
extern "C" unsigned long UNK_005657b4;
extern "C" unsigned long UNK_005657f4;
extern "C" unsigned long _UNK_00564744;
extern "C" unsigned long _UNK_00564758;
extern "C" unsigned long _UNK_00564780;
extern "C" unsigned long _UNK_00564b90;
extern "C" unsigned long _UNK_00564b94;
extern "C" unsigned long _UNK_00564f58;
extern "C" unsigned long _UNK_00565094;
extern "C" unsigned long _UNK_00565520;
extern "C" unsigned long _UNK_00565524;
extern "C" unsigned long _UNK_00565528;
extern "C" unsigned long _UNK_0056552c;
extern "C" unsigned long _UNK_00565530;
extern "C" unsigned long _UNK_00565534;
extern "C" unsigned long _UNK_0056585c;
extern "C" unsigned long _UNK_00565860;
extern "C" unsigned long _UNK_00565864;
extern "C" unsigned long _UNK_00565868;
extern "C" unsigned long _UNK_0056586c;
extern "C" unsigned long _UNK_00565870;
extern "C" unsigned long _UNK_00565874;
extern "C" unsigned long _UNK_00565878;
extern "C" unsigned long _UNK_0056587c;
extern "C" unsigned long _UNK_00565880;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005646ea;
extern "C" unsigned long g_00564744;
extern "C" unsigned long g_00564754;
extern "C" unsigned long g_00564758;
extern "C" unsigned long g_0056477c;
extern "C" unsigned long g_00564780;
extern "C" unsigned long g_00564a80;
extern "C" unsigned long g_00564b90;
extern "C" unsigned long g_00564b94;
extern "C" unsigned long g_00564ef8;
extern "C" unsigned long g_00564f58;
extern "C" unsigned long g_00565070;
extern "C" unsigned long g_00565094;
extern "C" unsigned long g_005653b8;
extern "C" unsigned long g_005654b0;
extern "C" unsigned long g_005654d2;
extern "C" unsigned long g_00565510;
extern "C" unsigned long g_00565520;
extern "C" unsigned long g_00565524;
extern "C" unsigned long g_00565528;
extern "C" unsigned long g_0056552c;
extern "C" unsigned long g_00565530;
extern "C" unsigned long g_00565534;
extern "C" unsigned long g_00565562;
extern "C" unsigned long g_00565592;
extern "C" unsigned long g_0056559a;
extern "C" unsigned long g_005655d8;
extern "C" unsigned long g_0056561c;
extern "C" unsigned long g_00565658;
extern "C" unsigned long g_00565714;
extern "C" unsigned long g_0056575e;
extern "C" unsigned long g_005657b4;
extern "C" unsigned long g_005657f4;
extern "C" unsigned long g_0056585c;
extern "C" unsigned long g_00565860;
extern "C" unsigned long g_00565864;
extern "C" unsigned long g_00565868;
extern "C" unsigned long g_0056586c;
extern "C" unsigned long g_00565870;
extern "C" unsigned long g_00565874;
extern "C" unsigned long g_00565878;
extern "C" unsigned long g_0056587c;
extern "C" unsigned long g_00565880;
GuideLayer* GuideMaskSprite::getGuideLayer() const
{
  return (GuideLayer*)(*(undefined4 *)(((int)this) + 0x108));
}

GuideStep* GuideMaskSprite::getStep() const
{
  return (GuideStep*)(*(undefined4 *)(((int)this) + 0x10c));
}

int GuideMaskSprite::getAnchorType() const
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void GuideMaskSprite::setAnchorType(int p1)
{
  *(undefined4 *)(((int)this) + 0x110) = p1;
  return;
}

GuideMaskSprite::~GuideMaskSprite()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_005646ea + g_00564744);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x25c;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



void GuideMaskSprite::setStep(GuideStep* p1)
{
  if (*(int *)(((int)this) + 0x10c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x10c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void GuideMaskSprite::setGuideLayer(GuideLayer* p1)
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

GuideMaskSprite::GuideMaskSprite()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_00564ef8 + g_00564f58);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x25c;
  0 /* ctorZero */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  return;
}





bool GuideMaskSprite::init()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)&uStack_28 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
    func_0079e45c(auStack_20,&g_00565562 + g_0056585c,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x49)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x49)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x7c))((int *)*(int *)((int)this + 4*(0x49)),&g_00565592 + g_00565860);
    func_0079e45c(auStack_20,&g_0056559a + g_00565864,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x45)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    func_0079e45c(auStack_20,&g_005655d8 + g_00565868,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x46)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    func_0079e45c(auStack_20,&g_0056561c + g_0056586c,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x47)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    func_0079e45c(auStack_20,&g_00565658 + g_00565870,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x48)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    piVar5 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar5 + 0x38);
    iVar3 = (**(code **)(*piVar5 + 0x8c))(piVar5);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(*(undefined4 *)(iVar3 + 4))))));
    (*pcVar6)(piVar5,uVar2);
    piVar5 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar5 + 0x30);
    puVar4 = (undefined4 *)(**(code **)(*piVar5 + 0x8c))(piVar5);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(*puVar4)))));
    (*pcVar6)(piVar5,uVar2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x40))((int *)*(int *)((int)this + 4*(0x46)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x40))((int *)*(int *)((int)this + 4*(0x47)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x40))((int *)*(int *)((int)this + 4*(0x48)),0);
    func_0079e45c(auStack_20,&g_00565714 + g_00565874,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x4a)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4a)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    ((cocos2d::CCSprite *)*(int *)((int)this + 4*(0x4a)))->setFlipX(1);
    func_0079e45c(auStack_20,&g_0056575e + g_00565878,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x4b)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4b)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    ((cocos2d::CCSprite *)*(int *)((int)this + 4*(0x4b)))->setFlipX(1);
    ((cocos2d::CCSprite *)*(int *)((int)this + 4*(0x4b)))->setFlipY(1);
    func_0079e45c(auStack_20,&g_005657b4 + g_0056587c,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x4c)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4c)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x4c));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    func_0079e45c(auStack_20,&g_005657f4 + g_00565880,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x4d)) = iVar3;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4d)));
    piVar5 = (int *)*(int *)((int)this + 4*(0x4d));
    pcVar6 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    ((cocos2d::CCSprite *)*(int *)((int)this + 4*(0x4d)))->setFlipY(1);
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void GuideMaskSprite::updateSpriteByScale(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideMaskSprite::updateSprite(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideMaskSprite::resetMidSprPosition(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 GuideMaskSprite::onScaleMinEnd()
{
  undefined4 p2 = 0;

  ((cocos2d::CCNode *)(*(undefined4 *)((unsigned char *)((char *)&g_00565070 + (intptr_t)(g_00565094)))))->unschedule(0);
  if (*(int *)(((int)this) + 0x108) != 0) {
    ((GuideLayer *)this)->actionEnd();
  }
  ((GuideMaskSprite *)(((int)this)))->updateSpriteByScale(0);
  ((GuideMaskSprite *)(((int)this)))->resetMidSprPosition(2);
  return ghidra_CONCAT44(p2,((int)this));
}

void GuideMaskSprite::onScaleMaxEnd()
{
  undefined4 extraout_r3;
  
  if (*(uint *)(((int)this) + 0x110) < 4) {
    func_0079e6d0();
    ((GuideMaskSprite *)(1))->resetMidSprPosition(0);
  }
  return;
}

void GuideMaskSprite::resetRect(cocos2d::CCRect p1, GuideStep* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

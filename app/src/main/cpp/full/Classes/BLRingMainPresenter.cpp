#include "BLRingMainPresenter.h"
#include "CCUserDefault.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCString.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "ArenaPlayerData.h"
#include "BLGameScene.h"
#include "BLHeroSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRingItemPresenter.h"
#include "BLRingItemView.h"
#include "BLRingMainView.h"
#include "BLTableView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "CircusShopData.h"
#include "DataManager.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ea54(...);
extern "C" long long func_0079ea94(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c31c0;
extern "C" unsigned long UNK_004c31d8;
extern "C" unsigned long UNK_004c31f0;
extern "C" unsigned long UNK_004c3208;
extern "C" unsigned long UNK_004c3260;
extern "C" unsigned long UNK_004c3294;
extern "C" unsigned long UNK_004c32d8;
extern "C" unsigned long UNK_004c3300;
extern "C" unsigned long UNK_004c3414;
extern "C" unsigned long UNK_004c3470;
extern "C" unsigned long UNK_004c3492;
extern "C" unsigned long UNK_004c3526;
extern "C" unsigned long UNK_004c3534;
extern "C" unsigned long UNK_004c3576;
extern "C" unsigned long UNK_004c35c0;
extern "C" unsigned long UNK_004c35d8;
extern "C" unsigned long UNK_004c35dc;
extern "C" unsigned long UNK_004c3628;
extern "C" unsigned long UNK_004c3632;
extern "C" unsigned long UNK_004c3650;
extern "C" unsigned long UNK_004c36ca;
extern "C" unsigned long UNK_004c36d8;
extern "C" unsigned long UNK_004c377e;
extern "C" unsigned long UNK_004c380c;
extern "C" unsigned long UNK_004c388e;
extern "C" unsigned long UNK_004c3892;
extern "C" unsigned long UNK_004c3ac0;
extern "C" unsigned long UNK_004c3bb0;
extern "C" unsigned long UNK_004c3ca8;
extern "C" unsigned long UNK_004c3cd8;
extern "C" unsigned long UNK_004c3cda;
extern "C" unsigned long UNK_004c3d3e;
extern "C" unsigned long UNK_004c3d82;
extern "C" unsigned long UNK_004c3d9e;
extern "C" unsigned long UNK_004c3dba;
extern "C" unsigned long UNK_004c3dd6;
extern "C" unsigned long UNK_004c3df2;
extern "C" unsigned long UNK_004c3e0e;
extern "C" unsigned long UNK_004c3e2a;
extern "C" unsigned long UNK_004c3e46;
extern "C" unsigned long UNK_004c3e62;
extern "C" unsigned long UNK_004c3e7e;
extern "C" unsigned long UNK_004c3e9a;
extern "C" unsigned long UNK_004c3eb6;
extern "C" unsigned long UNK_004c3ed0;
extern "C" unsigned long UNK_004c3fc4;
extern "C" unsigned long UNK_004c41a2;
extern "C" unsigned long UNK_004c41f6;
extern "C" unsigned long UNK_004c4200;
extern "C" unsigned long UNK_004c42b0;
extern "C" unsigned long UNK_004c4358;
extern "C" unsigned long UNK_004c438c;
extern "C" unsigned long UNK_004c43de;
extern "C" unsigned long UNK_004c446c;
extern "C" unsigned long UNK_004c45c4;
extern "C" unsigned long UNK_004c4788;
extern "C" unsigned long UNK_004c4798;
extern "C" unsigned long UNK_004c4860;
extern "C" unsigned long UNK_004c489a;
extern "C" unsigned long UNK_004c4940;
extern "C" unsigned long UNK_004c495a;
extern "C" unsigned long UNK_004c495c;
extern "C" unsigned long UNK_004c49b0;
extern "C" unsigned long UNK_004c49e6;
extern "C" unsigned long UNK_004c4a90;
extern "C" unsigned long UNK_004c4b2c;
extern "C" unsigned long UNK_004c4b7c;
extern "C" unsigned long UNK_004c4c1a;
extern "C" unsigned long UNK_004c4ca2;
extern "C" unsigned long UNK_004c4ccc;
extern "C" unsigned long UNK_004c4cfe;
extern "C" unsigned long UNK_004c4d3c;
extern "C" unsigned long _UNK_004c31c4;
extern "C" unsigned long _UNK_004c31dc;
extern "C" unsigned long _UNK_004c31f4;
extern "C" unsigned long _UNK_004c320c;
extern "C" unsigned long _UNK_004c32c4;
extern "C" unsigned long _UNK_004c32c8;
extern "C" unsigned long _UNK_004c32dc;
extern "C" unsigned long _UNK_004c3304;
extern "C" unsigned long _UNK_004c3328;
extern "C" unsigned long _UNK_004c333c;
extern "C" unsigned long _UNK_004c3400;
extern "C" unsigned long _UNK_004c3404;
extern "C" unsigned long _UNK_004c3418;
extern "C" unsigned long _UNK_004c34e8;
extern "C" unsigned long _UNK_004c34ec;
extern "C" unsigned long _UNK_004c34f0;
extern "C" unsigned long _UNK_004c35a0;
extern "C" unsigned long _UNK_004c35a4;
extern "C" unsigned long _UNK_004c35a8;
extern "C" unsigned long _UNK_004c35ac;
extern "C" unsigned long _UNK_004c35b0;
extern "C" unsigned long _UNK_004c35b4;
extern "C" unsigned long _UNK_004c3668;
extern "C" unsigned long _UNK_004c366c;
extern "C" unsigned long _UNK_004c3670;
extern "C" unsigned long _UNK_004c3674;
extern "C" unsigned long _UNK_004c3678;
extern "C" unsigned long _UNK_004c367c;
extern "C" unsigned long _UNK_004c3680;
extern "C" unsigned long _UNK_004c3684;
extern "C" unsigned long _UNK_004c3688;
extern "C" unsigned long _UNK_004c3740;
extern "C" unsigned long _UNK_004c3744;
extern "C" unsigned long _UNK_004c3748;
extern "C" unsigned long _UNK_004c374c;
extern "C" unsigned long _UNK_004c3750;
extern "C" unsigned long _UNK_004c37e0;
extern "C" unsigned long _UNK_004c37e4;
extern "C" unsigned long _UNK_004c3874;
extern "C" unsigned long _UNK_004c3878;
extern "C" unsigned long _UNK_004c3900;
extern "C" unsigned long _UNK_004c3904;
extern "C" unsigned long _UNK_004c3d00;
extern "C" unsigned long _UNK_004c3d04;
extern "C" unsigned long _UNK_004c3d08;
extern "C" unsigned long _UNK_004c3d0c;
extern "C" unsigned long _UNK_004c3d10;
extern "C" unsigned long _UNK_004c3d14;
extern "C" unsigned long _UNK_004c3d18;
extern "C" unsigned long _UNK_004c3d1c;
extern "C" unsigned long _UNK_004c3d20;
extern "C" unsigned long _UNK_004c3d24;
extern "C" unsigned long _UNK_004c3d28;
extern "C" unsigned long _UNK_004c3efc;
extern "C" unsigned long _UNK_004c3f00;
extern "C" unsigned long _UNK_004c3f04;
extern "C" unsigned long _UNK_004c3f08;
extern "C" unsigned long _UNK_004c3f0c;
extern "C" unsigned long _UNK_004c3f10;
extern "C" unsigned long _UNK_004c3f14;
extern "C" unsigned long _UNK_004c3f18;
extern "C" unsigned long _UNK_004c3f1c;
extern "C" unsigned long _UNK_004c3f20;
extern "C" unsigned long _UNK_004c3f24;
extern "C" unsigned long _UNK_004c3f28;
extern "C" unsigned long _UNK_004c3f2c;
extern "C" unsigned long _UNK_004c3f30;
extern "C" unsigned long _UNK_004c3f34;
extern "C" unsigned long _UNK_004c3f38;
extern "C" unsigned long _UNK_004c3f3c;
extern "C" unsigned long _UNK_004c3f40;
extern "C" unsigned long _UNK_004c3f44;
extern "C" unsigned long _UNK_004c3f48;
extern "C" unsigned long _UNK_004c3f4c;
extern "C" unsigned long _UNK_004c3f50;
extern "C" unsigned long _UNK_004c3f54;
extern "C" unsigned long _UNK_004c3f58;
extern "C" unsigned long _UNK_004c3f5c;
extern "C" unsigned long _UNK_004c3f60;
extern "C" unsigned long _UNK_004c3f64;
extern "C" unsigned long _UNK_004c42d8;
extern "C" unsigned long _UNK_004c42dc;
extern "C" unsigned long _UNK_004c42e0;
extern "C" unsigned long _UNK_004c42e4;
extern "C" unsigned long _UNK_004c42e8;
extern "C" unsigned long _UNK_004c42ec;
extern "C" unsigned long _UNK_004c42f0;
extern "C" unsigned long _UNK_004c42f4;
extern "C" unsigned long _UNK_004c42f8;
extern "C" unsigned long _UNK_004c42fc;
extern "C" unsigned long _UNK_004c4300;
extern "C" unsigned long _UNK_004c4304;
extern "C" unsigned long _UNK_004c4308;
extern "C" unsigned long _UNK_004c430c;
extern "C" unsigned long _UNK_004c4310;
extern "C" unsigned long _UNK_004c4314;
extern "C" unsigned long _UNK_004c4318;
extern "C" unsigned long _UNK_004c431c;
extern "C" unsigned long _UNK_004c4320;
extern "C" unsigned long _UNK_004c4324;
extern "C" unsigned long _UNK_004c4328;
extern "C" unsigned long _UNK_004c432c;
extern "C" unsigned long _UNK_004c4330;
extern "C" unsigned long _UNK_004c4334;
extern "C" unsigned long _UNK_004c4338;
extern "C" unsigned long _UNK_004c433c;
extern "C" unsigned long _UNK_004c46f8;
extern "C" unsigned long _UNK_004c46fc;
extern "C" unsigned long _UNK_004c4700;
extern "C" unsigned long _UNK_004c4704;
extern "C" unsigned long _UNK_004c4708;
extern "C" unsigned long _UNK_004c470c;
extern "C" unsigned long _UNK_004c4710;
extern "C" unsigned long _UNK_004c4714;
extern "C" unsigned long _UNK_004c4718;
extern "C" unsigned long _UNK_004c471c;
extern "C" unsigned long _UNK_004c4720;
extern "C" unsigned long _UNK_004c4724;
extern "C" unsigned long _UNK_004c47f0;
extern "C" unsigned long _UNK_004c47f4;
extern "C" unsigned long _UNK_004c4878;
extern "C" unsigned long _UNK_004c491c;
extern "C" unsigned long _UNK_004c4920;
extern "C" unsigned long _UNK_004c4924;
extern "C" unsigned long _UNK_004c4944;
extern "C" unsigned long _UNK_004c4974;
extern "C" unsigned long _UNK_004c4978;
extern "C" unsigned long _UNK_004c49b4;
extern "C" unsigned long _UNK_004c4d80;
extern "C" unsigned long _UNK_004c4d84;
extern "C" unsigned long _UNK_004c4d88;
extern "C" unsigned long _UNK_004c4d8c;
extern "C" unsigned long _UNK_004c4d90;
extern "C" unsigned long _UNK_004c4d94;
extern "C" unsigned long _UNK_004c4d98;
extern "C" unsigned long _UNK_004c4d9c;
extern "C" unsigned long _UNK_004c4da0;
extern "C" unsigned long _UNK_004c4da4;
extern "C" unsigned long _UNK_004c4da8;
extern "C" unsigned long _UNK_004c4dac;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004c31c0;
extern "C" unsigned long g_004c31c4;
extern "C" unsigned long g_004c31d8;
extern "C" unsigned long g_004c31dc;
extern "C" unsigned long g_004c31f0;
extern "C" unsigned long g_004c31f4;
extern "C" unsigned long g_004c3208;
extern "C" unsigned long g_004c320c;
extern "C" unsigned long g_004c3260;
extern "C" unsigned long g_004c3294;
extern "C" unsigned long g_004c32c4;
extern "C" unsigned long g_004c32c8;
extern "C" unsigned long g_004c32d8;
extern "C" unsigned long g_004c32dc;
extern "C" unsigned long g_004c3300;
extern "C" unsigned long g_004c3304;
extern "C" unsigned long g_004c3328;
extern "C" unsigned long g_004c333c;
extern "C" unsigned long g_004c3400;
extern "C" unsigned long g_004c3404;
extern "C" unsigned long g_004c3414;
extern "C" unsigned long g_004c3418;
extern "C" unsigned long g_004c3470;
extern "C" unsigned long g_004c3492;
extern "C" unsigned long g_004c34e8;
extern "C" unsigned long g_004c34ec;
extern "C" unsigned long g_004c34f0;
extern "C" unsigned long g_004c3526;
extern "C" unsigned long g_004c3534;
extern "C" unsigned long g_004c3576;
extern "C" unsigned long g_004c35a0;
extern "C" unsigned long g_004c35a4;
extern "C" unsigned long g_004c35a8;
extern "C" unsigned long g_004c35ac;
extern "C" unsigned long g_004c35b0;
extern "C" unsigned long g_004c35b4;
extern "C" unsigned long g_004c35c0;
extern "C" unsigned long g_004c35d8;
extern "C" unsigned long g_004c35dc;
extern "C" unsigned long g_004c3628;
extern "C" unsigned long g_004c3632;
extern "C" unsigned long g_004c3650;
extern "C" unsigned long g_004c3668;
extern "C" unsigned long g_004c366c;
extern "C" unsigned long g_004c3670;
extern "C" unsigned long g_004c3674;
extern "C" unsigned long g_004c3678;
extern "C" unsigned long g_004c367c;
extern "C" unsigned long g_004c3680;
extern "C" unsigned long g_004c3684;
extern "C" unsigned long g_004c3688;
extern "C" unsigned long g_004c36ca;
extern "C" unsigned long g_004c36d8;
extern "C" unsigned long g_004c3740;
extern "C" unsigned long g_004c3744;
extern "C" unsigned long g_004c3748;
extern "C" unsigned long g_004c374c;
extern "C" unsigned long g_004c3750;
extern "C" unsigned long g_004c377e;
extern "C" unsigned long g_004c37e0;
extern "C" unsigned long g_004c37e4;
extern "C" unsigned long g_004c380c;
extern "C" unsigned long g_004c3874;
extern "C" unsigned long g_004c3878;
extern "C" unsigned long g_004c388e;
extern "C" unsigned long g_004c3892;
extern "C" unsigned long g_004c3900;
extern "C" unsigned long g_004c3904;
extern "C" unsigned long g_004c3ac0;
extern "C" unsigned long g_004c3bb0;
extern "C" unsigned long g_004c3ca8;
extern "C" unsigned long g_004c3cd8;
extern "C" unsigned long g_004c3cda;
extern "C" unsigned long g_004c3d00;
extern "C" unsigned long g_004c3d04;
extern "C" unsigned long g_004c3d08;
extern "C" unsigned long g_004c3d0c;
extern "C" unsigned long g_004c3d10;
extern "C" unsigned long g_004c3d14;
extern "C" unsigned long g_004c3d18;
extern "C" unsigned long g_004c3d1c;
extern "C" unsigned long g_004c3d20;
extern "C" unsigned long g_004c3d24;
extern "C" unsigned long g_004c3d28;
extern "C" unsigned long g_004c3d3e;
extern "C" unsigned long g_004c3d82;
extern "C" unsigned long g_004c3d9e;
extern "C" unsigned long g_004c3dba;
extern "C" unsigned long g_004c3dd6;
extern "C" unsigned long g_004c3df2;
extern "C" unsigned long g_004c3e0e;
extern "C" unsigned long g_004c3e2a;
extern "C" unsigned long g_004c3e46;
extern "C" unsigned long g_004c3e62;
extern "C" unsigned long g_004c3e7e;
extern "C" unsigned long g_004c3e9a;
extern "C" unsigned long g_004c3eb6;
extern "C" unsigned long g_004c3ed0;
extern "C" unsigned long g_004c3efc;
extern "C" unsigned long g_004c3f00;
extern "C" unsigned long g_004c3f04;
extern "C" unsigned long g_004c3f08;
extern "C" unsigned long g_004c3f0c;
extern "C" unsigned long g_004c3f10;
extern "C" unsigned long g_004c3f14;
extern "C" unsigned long g_004c3f18;
extern "C" unsigned long g_004c3f1c;
extern "C" unsigned long g_004c3f20;
extern "C" unsigned long g_004c3f24;
extern "C" unsigned long g_004c3f28;
extern "C" unsigned long g_004c3f2c;
extern "C" unsigned long g_004c3f30;
extern "C" unsigned long g_004c3f34;
extern "C" unsigned long g_004c3f38;
extern "C" unsigned long g_004c3f3c;
extern "C" unsigned long g_004c3f40;
extern "C" unsigned long g_004c3f44;
extern "C" unsigned long g_004c3f48;
extern "C" unsigned long g_004c3f4c;
extern "C" unsigned long g_004c3f50;
extern "C" unsigned long g_004c3f54;
extern "C" unsigned long g_004c3f58;
extern "C" unsigned long g_004c3f5c;
extern "C" unsigned long g_004c3f60;
extern "C" unsigned long g_004c3f64;
extern "C" unsigned long g_004c3fc4;
extern "C" unsigned long g_004c41a2;
extern "C" unsigned long g_004c41f6;
extern "C" unsigned long g_004c4200;
extern "C" unsigned long g_004c42b0;
extern "C" unsigned long g_004c42d8;
extern "C" unsigned long g_004c42dc;
extern "C" unsigned long g_004c42e0;
extern "C" unsigned long g_004c42e4;
extern "C" unsigned long g_004c42e8;
extern "C" unsigned long g_004c42ec;
extern "C" unsigned long g_004c42f0;
extern "C" unsigned long g_004c42f4;
extern "C" unsigned long g_004c42f8;
extern "C" unsigned long g_004c42fc;
extern "C" unsigned long g_004c4300;
extern "C" unsigned long g_004c4304;
extern "C" unsigned long g_004c4308;
extern "C" unsigned long g_004c430c;
extern "C" unsigned long g_004c4310;
extern "C" unsigned long g_004c4314;
extern "C" unsigned long g_004c4318;
extern "C" unsigned long g_004c431c;
extern "C" unsigned long g_004c4320;
extern "C" unsigned long g_004c4324;
extern "C" unsigned long g_004c4328;
extern "C" unsigned long g_004c432c;
extern "C" unsigned long g_004c4330;
extern "C" unsigned long g_004c4334;
extern "C" unsigned long g_004c4338;
extern "C" unsigned long g_004c433c;
extern "C" unsigned long g_004c4358;
extern "C" unsigned long g_004c438c;
extern "C" unsigned long g_004c43de;
extern "C" unsigned long g_004c446c;
extern "C" unsigned long g_004c45c4;
extern "C" unsigned long g_004c46f8;
extern "C" unsigned long g_004c46fc;
extern "C" unsigned long g_004c4700;
extern "C" unsigned long g_004c4704;
extern "C" unsigned long g_004c4708;
extern "C" unsigned long g_004c470c;
extern "C" unsigned long g_004c4710;
extern "C" unsigned long g_004c4714;
extern "C" unsigned long g_004c4718;
extern "C" unsigned long g_004c471c;
extern "C" unsigned long g_004c4720;
extern "C" unsigned long g_004c4724;
extern "C" unsigned long g_004c4788;
extern "C" unsigned long g_004c4798;
extern "C" unsigned long g_004c47f0;
extern "C" unsigned long g_004c47f4;
extern "C" unsigned long g_004c4860;
extern "C" unsigned long g_004c4878;
extern "C" unsigned long g_004c489a;
extern "C" unsigned long g_004c491c;
extern "C" unsigned long g_004c4920;
extern "C" unsigned long g_004c4924;
extern "C" unsigned long g_004c4940;
extern "C" unsigned long g_004c4944;
extern "C" unsigned long g_004c495a;
extern "C" unsigned long g_004c495c;
extern "C" unsigned long g_004c4974;
extern "C" unsigned long g_004c4978;
extern "C" unsigned long g_004c49b0;
extern "C" unsigned long g_004c49b4;
extern "C" unsigned long g_004c49e6;
extern "C" unsigned long g_004c4a90;
extern "C" unsigned long g_004c4b2c;
extern "C" unsigned long g_004c4b7c;
extern "C" unsigned long g_004c4c1a;
extern "C" unsigned long g_004c4ca2;
extern "C" unsigned long g_004c4ccc;
extern "C" unsigned long g_004c4cfe;
extern "C" unsigned long g_004c4d3c;
extern "C" unsigned long g_004c4d80;
extern "C" unsigned long g_004c4d84;
extern "C" unsigned long g_004c4d88;
extern "C" unsigned long g_004c4d8c;
extern "C" unsigned long g_004c4d90;
extern "C" unsigned long g_004c4d94;
extern "C" unsigned long g_004c4d98;
extern "C" unsigned long g_004c4d9c;
extern "C" unsigned long g_004c4da0;
extern "C" unsigned long g_004c4da4;
extern "C" unsigned long g_004c4da8;
extern "C" unsigned long g_004c4dac;
int BLRingMainPresenter::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLRingMainPresenter::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

cocos2d::CCArray* BLRingMainPresenter::getArrayHero() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x28));
}

void BLRingMainPresenter::setArrayHero(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  return;
}

bool BLRingMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRingMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRingMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRingMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLRingMainPresenter::~BLRingMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c3260 + g_004c32c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x5c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x9c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c3294 + g_004c32c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRingMainPresenter::goToHeroRank()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x93);
  return;
}

void BLRingMainPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_004c3328);
  return;
}

void BLRingMainPresenter::onUser(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_004c333c);
  return;
}

void BLRingMainPresenter::onChangeHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x95);
  return;
}

void BLRingMainPresenter::onShare(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xf5);
  return;
}

void BLRingMainPresenter::onRecordInfo()
{
  undefined4 uVar1;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xc9);
  return;
}

void BLRingMainPresenter::onGetShopInfoSuccess()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x90);
  return;
}

void BLRingMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x7b);
  return;
}


undefined4 BLRingMainPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



void BLRingMainPresenter::onHeroRank(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((CircusData *)this)->getMe());
  ((CircusData *)uVar1)->GetDataFromNet(4, 1);
  return;
}

void BLRingMainPresenter::onRecord(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((CircusData *)this)->getMe());
  ((CircusData *)uVar1)->GetDataFromNet(3, 1);
  return;
}



void BLRingMainPresenter::onReward(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = ((CircusData *)this)->getMe();
  if (*(int *)(iVar1 + 0x14c) == *(int *)(iVar1 + 0x150)) {
    uVar2 = (undefined4)(((CircusData *)this)->getMe());
    uVar3 = (undefined4)(7);
  }
  else {
    uVar2 = (undefined4)(((CircusData *)this)->getMe());
    uVar3 = (undefined4)(9);
  }
  ((CircusData *)uVar2)->GetDataFromNet(uVar3, 1);
  return;
}




void BLRingMainPresenter::reNameFail(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [44];
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_004c388e + g_004c3900),
                              *(undefined4 *)(&g_004c3892 + g_004c3904),0), iVar1 != 0)) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((cocos2d::CCString *)iVar1)->getCString());
    ((Toast *)uVar2)->showToast((char const*)uVar3);
  }
  iVar1 = ((CircusData *)this)->getMe();
  0 /* ctorZero */;
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar4 + 0x168))(auStack_6c,piVar4);
  func_0079e52c(auStack_38,auStack_6c);
  func_0079e2bc(auStack_6c);
  ((CircusPlayerinfo *)auStack_68)->~CircusPlayerinfo();
  return;
}




undefined4 BLRingMainPresenter::create(BLRingMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRingMainPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}




void BLRingMainPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  BLRingMainPresenter::initRefresh();
  return;
}





void BLRingMainPresenter::onUpdateSelect(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_004c495a + g_004c4978),
                              *(undefined4 *)(&g_004c495c + g_004c4974),0), iVar1 != 0)) {
    BLRingMainPresenter::updateSelect(*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (21) =====
undefined8 BLRingMainPresenter::updateDimandCount()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRingMainPresenter::goToReward()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xdc)),(intptr_t)0);
  if (iVar2 == 0) {
    ((UIManager *)this)->shareManager();
    ((UIManager *)this)->pushCurScrollViewUnEnable();
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xdc);
  }
  return;
}

void BLRingMainPresenter::onRefreshInfo()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(0 /* ctorZero */);
  uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  func_0079e43c(auStack_d4,0x18);
  func_0079ea94(auStack_cc,uVar1);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_004c3470 + (intptr_t)(g_004c34e8)),auStack_dc);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  ((cocos2d::CCUserDefault *)(uVar2))->setStringForKey((char const*)(unsigned char *)((char *)&g_004c3492 + (intptr_t)(g_004c34ec)), *(const std::string *)(void *)auStack_dc);
  func_0079e2bc(auStack_dc);
  (**(code **)(**(int **)(((int)this) + 0x20) + 0x1f8))();
  ((cocos2d::CCArray *)this)->removeAllObjects();
  *(undefined1 *)(((int)this) + 0x30) = 1;
  uVar1 = (undefined4)(g_004c34f0);
  *(undefined4 *)(((int)this) + 0x24) = 0;
  *(undefined4 *)(((int)this) + 0x2c) = uVar1;
  uVar1 = (undefined4)(((BLRingMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView());
  ((BLTableView *)(uVar1))->reloadData(0, 1);
  return;
}

undefined8 BLRingMainPresenter::updateCiShu()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRingMainPresenter::onUpdateJiFen(cocos2d::CCObject* p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar8 = *(int **)((unsigned char *)((char *)&g_004c35c0 + (intptr_t)(g_004c3670)));
  iStack_1c = (int)*(int *)&(*piVar8);
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004c35d8 + (intptr_t)(g_004c3674))),
                              *(undefined4 *)((unsigned char *)((char *)&g_004c35dc + (intptr_t)(g_004c3678))),0), iVar1 != 0)) {
    (void)(((long long)::memset((void *)(auStack_30),(int)(0),(size_t)(0x14))));
    iVar2 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
    uVar5 = (undefined4)(*(uint *)(iVar1 + 0x14));
    uVar7 = (undefined4)(uVar5 + *(uint *)(iVar2 + 0x78));
    iVar1 = ((int)uVar5 >> 0x1f) + *(int *)(iVar2 + 0x7c) +
            (uint)ghidra_CARRY4(uVar5,*(uint *)(iVar2 + 0x78));
    uVar9 = (undefined4)(intptr_t)(ghidra_CONCAT44(iVar1,uVar7));
    if ((iVar1 < 1) && ((iVar1 != 0 || (uVar7 <= g_004c367c)))) {
      puVar6 = (unsigned char *)((char *)&g_004c3632 + (intptr_t)(g_004c3684));
    }
    else {
      uVar9 = (undefined4)(intptr_t)(func_0079e774(uVar7,iVar1,g_004c3668,g_004c366c));
      puVar6 = (unsigned char *)((char *)&g_004c3628 + (intptr_t)(g_004c3680));
    }
    (void)(((long long)::sprintf((char *)(auStack_30),(char const *)(puVar6),(int)uVar9,(int)((ulonglong)uVar9 >> 0x20))));
    piVar3 = (int *)((BLRingMainView *)*(undefined4 *)(((int)this) + 0x20))->getLabVs();
    (**(code **)(*piVar3 + 0x234))(piVar3,auStack_30);
    uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)(unsigned char *)((char *)&g_004c3650 + (intptr_t)(g_004c3688)));
  }
  if (iStack_1c != *piVar8) {
    func_0079e914();
  }
  return;
}

void BLRingMainPresenter::reName()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::onAddCiShu(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::onRefresh(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::onChangeHeroLineUp()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRingMainPresenter::BLRingMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::initWithView(BLRingMainView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->removeUIByID(0x7b);
  }
  return;
}

void BLRingMainPresenter::initRefresh()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRingMainPresenter::updateRefresh(float p1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_r1;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)(func_0079e57c(*(undefined4 *)(((int)this) + 0x2c)));
  *(undefined4 *)(((int)this) + 0x2c) = uVar1;
  iVar2 = (undefined4)(intptr_t)(func_0079e51c(uVar1,0));
  if (iVar2 != 0) {
    *(undefined1 *)(((int)this) + 0x30) = 0;
    *(undefined4 *)(((int)this) + 0x2c) = 0;
  }
  uVar1 = (undefined4)(func_0079e5fc(*(undefined4 *)(((int)this) + 0x2c)));
  uVar3 = (undefined4)(func_0079e4ac(uVar1,0x3c));
  func_0079e964(uVar1,0x3c);
  func_0079e904(&iStack_18,(unsigned char *)((char *)&g_004c4860 + (intptr_t)(g_004c4878)),uVar3,extraout_r1);
  piVar4 = (int *)((BLRingMainView *)*(undefined4 *)(((int)this) + 0x20))->getLabRefresh();
  (**(code **)(*(int *)(piVar4) + (0x234)))(piVar4,&iStack_18);
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

void BLRingMainPresenter::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRingMainPresenter::updateSelect(int p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (undefined4)(intptr_t)(g_004c491c);
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  iVar6 = (undefined4)(intptr_t)(p1);
  if (*(int *)(((int)this) + 0x24) != p1) {
    uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x20) + 0x1f8))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
    if (iVar2 != 0) {
      iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c489a + (intptr_t)(g_004c4920)) + iVar4));
      iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c489a + (intptr_t)(g_004c4924)) + iVar4));
      iVar2 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,iVar6,0,iVar5,iVar6,p3));
      if (iVar2 != 0) {
        piVar3 = (int *)((BLRingItemView *)this)->getSprSel();
        (**(code **)(*piVar3 + 0x90))(piVar3,0);
      }
    }
    *(int *)(((int)this) + 0x24) = p1;
    uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x20) + 0x1f8))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
    if (iVar2 != 0) {
      iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c489a + (intptr_t)(g_004c4920)) + iVar4));
      iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c489a + (intptr_t)(g_004c4924)) + iVar4));
      iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,iVar6,0));
      if (iVar4 != 0) {
        piVar3 = (int *)((BLRingItemView *)this)->getSprSel();
        (**(code **)(*piVar3 + 0x90))(piVar3,1);
      }
    }
  }
  return ghidra_CONCAT44(iVar6,iVar5);
}

void BLRingMainPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLRingMainPresenter::numOfCellItem(BLTableView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRingMainPresenter::onStart(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingMainPresenter::onShop(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLVideoPlayer.h"
#include "CCScheduler.h"
#include "CCDirector.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BluetoothHelper.h"
#include "CCJson.h"
#include "CircusLocalZip.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042f1a0;
extern "C" unsigned long _DAT_0042f1a4;
extern "C" unsigned long _DAT_0042f288;
extern "C" unsigned long _DAT_0042f28c;
extern "C" unsigned long _DAT_0042f290;
extern "C" unsigned long _DAT_0042f35c;
extern "C" unsigned long _DAT_0042f360;
extern "C" unsigned long _DAT_0042f3a0;
extern "C" unsigned long _DAT_0042f3a4;
extern "C" unsigned long _DAT_0042f3a8;
extern "C" unsigned long _DAT_0042f3d0;
extern "C" unsigned long _DAT_0042f3d4;
extern "C" unsigned long _DAT_0042f3f8;
extern "C" unsigned long _DAT_0042f624;
extern "C" unsigned long _DAT_0042f628;
extern "C" unsigned long _DAT_0042f62c;
extern "C" unsigned long _DAT_0042f630;
extern "C" unsigned long _DAT_0042f634;
extern "C" unsigned long _DAT_0042f638;
extern "C" unsigned long _DAT_0042f734;
extern "C" unsigned long _DAT_0042f738;
extern "C" unsigned long g_0042f1a0;
extern "C" unsigned long g_0042f1a4;
extern "C" unsigned long g_0042f288;
extern "C" unsigned long g_0042f28c;
extern "C" unsigned long g_0042f290;
extern "C" unsigned long g_0042f35c;
extern "C" unsigned long g_0042f360;
extern "C" unsigned long g_0042f3a0;
extern "C" unsigned long g_0042f3a4;
extern "C" unsigned long g_0042f3a8;
extern "C" unsigned long g_0042f3d0;
extern "C" unsigned long g_0042f3d4;
extern "C" unsigned long g_0042f3f8;
extern "C" unsigned long g_0042f624;
extern "C" unsigned long g_0042f628;
extern "C" unsigned long g_0042f62c;
extern "C" unsigned long g_0042f630;
extern "C" unsigned long g_0042f634;
extern "C" unsigned long g_0042f638;
extern "C" unsigned long g_0042f734;
extern "C" unsigned long g_0042f738;
cocos2d::CCArray* BLVideoPlayer::getArrayFrameDatas() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x24));
}

void BLVideoPlayer::setArrayFrameDatas(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLVideoPlayer::getDicVideoData() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x28));
}

void BLVideoPlayer::setDicVideoData(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  return;
}

BLVideoPlayer::~BLVideoPlayer()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLVideoPlayer"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLVideoPlayer::BLVideoPlayer()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLVideoPlayer"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLVideoPlayer::init()
{
  return 1;
}

undefined4 BLVideoPlayer::share()
{
  undefined4 uVar1;
  
  if (*(int *)(((intptr_t)") 4.4.3")) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
    0 /* ctorZero */;
    *(undefined4 *)(((intptr_t)") 4.4.3")) = uVar1;
    ((BLVideoPlayer *)uVar1)->init();
  }
  return *(undefined4 *)(((intptr_t)") 4.4.3"));
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLVideoPlayer::tick(float p1)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  while (uVar5 = *(uint *)(((int)this) + 0x20),
        uVar1 = ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->count(), uVar5 < uVar1) {
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x20)));
    if (iVar2 != 0) {
      uVar7 = (undefined4)(*(undefined4 *)(g_0042f288 + 0x42f1e4));
      uVar6 = (undefined4)(*(undefined4 *)(g_0042f28c + 0x42f1e6));
      iVar2 = (undefined4)(intptr_t)(func_0079e55c(iVar2,uVar7,uVar6,0));
      if (iVar2 != 0) {
        ((cocos2d::CCString *)this)->getCString();
        iVar3 = (undefined4)((void)(((CCJson *)this)->JSONObjectWithString((char const*)0)),(intptr_t)0);
        if (iVar3 != 0) {
          func_0079e45c(auStack_1c,"FI_K",auStack_20);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar7,uVar6,0));
          }
          func_0079e2bc(auStack_1c);
          if (iVar3 != 0) {
            ((cocos2d::CCString *)(iVar3))->getCString();
            uVar1 = (undefined4)(func_0079e6c0());
            if ((*(int *)(((int)this) + 0x1c) < (int)uVar1 >> 0x1f) ||
               ((*(int *)(((int)this) + 0x1c) == (int)uVar1 >> 0x1f &&
                (*(uint *)(((int)this) + 0x18) < uVar1)))) break;
            uVar6 = (undefined4)(((BluetoothHelper *)this)->share());
            uVar7 = (undefined4)(((cocos2d::CCString *)(iVar2))->getCString());
            ((BluetoothHelper *)(uVar6))->receiveBluetoothData((char const*)uVar7);
            *(int *)(((int)this) + 0x20) = *(int *)(((int)this) + 0x20) + 1;
          }
        }
      }
    }
  }
  uVar1 = (undefined4)(*(uint *)(((int)this) + 0x18));
  *(uint *)(((int)this) + 0x18) = uVar1 + 1;
  *(uint *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + (uint)(0xfffffffe < uVar1);
  return;
}

void BLVideoPlayer::startPlay()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLVideoPlayer::stopPlay()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  ((cocos2d::CCScheduler *)(*(undefined4 *)(g_0042f3f8 + 0x42f3ee)))->unscheduleSelector(0, (cocos2d::CCObject*)((int)this));
  return ghidra_CONCAT44(p2,((int)this));
}

void BLVideoPlayer::initWithName(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVideoPlayer::writeRecord(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

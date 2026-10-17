#include "BLArenaGetHttpDataManager.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "Toast.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e844(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eaa4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004be5d8;
extern "C" unsigned long UNK_004be5f4;
extern "C" unsigned long UNK_004be60c;
extern "C" unsigned long UNK_004be618;
extern "C" unsigned long UNK_004be626;
extern "C" unsigned long UNK_004be630;
extern "C" unsigned long UNK_004be63c;
extern "C" unsigned long UNK_004be64a;
extern "C" unsigned long UNK_004be658;
extern "C" unsigned long UNK_004be684;
extern "C" unsigned long UNK_004be69a;
extern "C" unsigned long UNK_004be6fa;
extern "C" unsigned long UNK_004be71a;
extern "C" unsigned long UNK_004be776;
extern "C" unsigned long UNK_004be796;
extern "C" unsigned long UNK_004be7d4;
extern "C" unsigned long UNK_004be7ec;
extern "C" unsigned long UNK_004be7f6;
extern "C" unsigned long UNK_004be836;
extern "C" unsigned long UNK_004be842;
extern "C" unsigned long _UNK_004be6c4;
extern "C" unsigned long _UNK_004be6c8;
extern "C" unsigned long _UNK_004be6cc;
extern "C" unsigned long _UNK_004be6d0;
extern "C" unsigned long _UNK_004be6d4;
extern "C" unsigned long _UNK_004be6d8;
extern "C" unsigned long _UNK_004be6dc;
extern "C" unsigned long _UNK_004be6e0;
extern "C" unsigned long _UNK_004be6e4;
extern "C" unsigned long _UNK_004be6e8;
extern "C" unsigned long _UNK_004be6ec;
extern "C" unsigned long _UNK_004be74c;
extern "C" unsigned long _UNK_004be750;
extern "C" unsigned long _UNK_004be7c0;
extern "C" unsigned long _UNK_004be7c4;
extern "C" unsigned long _UNK_004be804;
extern "C" unsigned long _UNK_004be808;
extern "C" unsigned long _UNK_004be80c;
extern "C" unsigned long _UNK_004be884;
extern "C" unsigned long _UNK_004be888;
extern "C" unsigned long g_004be5d8;
extern "C" unsigned long g_004be5f4;
extern "C" unsigned long g_004be60c;
extern "C" unsigned long g_004be618;
extern "C" unsigned long g_004be626;
extern "C" unsigned long g_004be630;
extern "C" unsigned long g_004be63c;
extern "C" unsigned long g_004be64a;
extern "C" unsigned long g_004be658;
extern "C" unsigned long g_004be684;
extern "C" unsigned long g_004be69a;
extern "C" unsigned long g_004be6c4;
extern "C" unsigned long g_004be6c8;
extern "C" unsigned long g_004be6cc;
extern "C" unsigned long g_004be6d0;
extern "C" unsigned long g_004be6d4;
extern "C" unsigned long g_004be6d8;
extern "C" unsigned long g_004be6dc;
extern "C" unsigned long g_004be6e0;
extern "C" unsigned long g_004be6e4;
extern "C" unsigned long g_004be6e8;
extern "C" unsigned long g_004be6ec;
extern "C" unsigned long g_004be6fa;
extern "C" unsigned long g_004be71a;
extern "C" unsigned long g_004be74c;
extern "C" unsigned long g_004be750;
extern "C" unsigned long g_004be776;
extern "C" unsigned long g_004be796;
extern "C" unsigned long g_004be7c0;
extern "C" unsigned long g_004be7c4;
extern "C" unsigned long g_004be7d4;
extern "C" unsigned long g_004be7ec;
extern "C" unsigned long g_004be7f6;
extern "C" unsigned long g_004be804;
extern "C" unsigned long g_004be808;
extern "C" unsigned long g_004be80c;
extern "C" unsigned long g_004be836;
extern "C" unsigned long g_004be842;
extern "C" unsigned long g_004be884;
extern "C" unsigned long g_004be888;
cocos2d::CCArray* BLArenaGetHttpDataManager::getContents() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void BLArenaGetHttpDataManager::setContents(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}


BLArenaGetHttpDataManager::~BLArenaGetHttpDataManager()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004be71a + g_004be750,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool BLArenaGetHttpDataManager::init()
{
  return 1;
}

undefined4 BLArenaGetHttpDataManager::share()
{
  undefined4 uVar1;
  
  if (*(int *)(&g_004be7d4 + g_004be804) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
    0 /* ctorZero */;
    *(undefined4 *)(&g_004be7ec + g_004be808) = uVar1;
    ((BLArenaGetHttpDataManager *)uVar1)->init();
  }
  return *(undefined4 *)(&g_004be7f6 + g_004be80c);
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLArenaGetHttpDataManager::onHttpRequestCompleted(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLArenaGetHttpDataManager::BLArenaGetHttpDataManager()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_004be776 + (intptr_t)(g_004be7c0))) + 8;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_004be796 + (intptr_t)(g_004be7c4)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined8 BLArenaGetHttpDataManager::getHttpDataByTag(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

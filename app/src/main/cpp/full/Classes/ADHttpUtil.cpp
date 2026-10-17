#include "ADHttpUtil.h"
#include "BLGameScene.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f2fd4;
extern "C" unsigned long UNK_004f3018;
extern "C" unsigned long UNK_004f3034;
extern "C" unsigned long UNK_004f31ae;
extern "C" unsigned long UNK_004f31ec;
extern "C" unsigned long UNK_004f326a;
extern "C" unsigned long UNK_004f32a8;
extern "C" unsigned long UNK_004f331e;
extern "C" unsigned long UNK_004f332a;
extern "C" unsigned long UNK_004f337c;
extern "C" unsigned long UNK_004f338e;
extern "C" unsigned long UNK_004f339a;
extern "C" unsigned long UNK_004f33aa;
extern "C" unsigned long UNK_004f33bc;
extern "C" unsigned long UNK_004f33c8;
extern "C" unsigned long UNK_004f33e0;
extern "C" unsigned long UNK_004f33f2;
extern "C" unsigned long UNK_004f3402;
extern "C" unsigned long UNK_004f340e;
extern "C" unsigned long UNK_004f3490;
extern "C" unsigned long UNK_004f34b4;
extern "C" unsigned long UNK_004f34f6;
extern "C" unsigned long UNK_004f34fe;
extern "C" unsigned long UNK_004f3510;
extern "C" unsigned long UNK_004f3528;
extern "C" unsigned long UNK_004f3530;
extern "C" unsigned long UNK_004f3542;
extern "C" unsigned long UNK_004f3560;
extern "C" unsigned long UNK_004f357a;
extern "C" unsigned long UNK_004f35ba;
extern "C" unsigned long UNK_004f35e4;
extern "C" unsigned long UNK_004f35f4;
extern "C" unsigned long UNK_004f3602;
extern "C" unsigned long UNK_004f36c2;
extern "C" unsigned long _UNK_004f2ff0;
extern "C" unsigned long _UNK_004f3028;
extern "C" unsigned long _UNK_004f305c;
extern "C" unsigned long _UNK_004f3128;
extern "C" unsigned long _UNK_004f312c;
extern "C" unsigned long _UNK_004f317c;
extern "C" unsigned long _UNK_004f3180;
extern "C" unsigned long _UNK_004f3238;
extern "C" unsigned long _UNK_004f323c;
extern "C" unsigned long _UNK_004f32f4;
extern "C" unsigned long _UNK_004f32f8;
extern "C" unsigned long _UNK_004f343c;
extern "C" unsigned long _UNK_004f3440;
extern "C" unsigned long _UNK_004f3444;
extern "C" unsigned long _UNK_004f3448;
extern "C" unsigned long _UNK_004f344c;
extern "C" unsigned long _UNK_004f3450;
extern "C" unsigned long _UNK_004f3454;
extern "C" unsigned long _UNK_004f3458;
extern "C" unsigned long _UNK_004f345c;
extern "C" unsigned long _UNK_004f3460;
extern "C" unsigned long _UNK_004f3464;
extern "C" unsigned long _UNK_004f3468;
extern "C" unsigned long _UNK_004f36cc;
extern "C" unsigned long _UNK_004f36d0;
extern "C" unsigned long _UNK_004f36d4;
extern "C" unsigned long _UNK_004f36d8;
extern "C" unsigned long _UNK_004f36dc;
extern "C" unsigned long _UNK_004f36e0;
extern "C" unsigned long _UNK_004f36e4;
extern "C" unsigned long _UNK_004f36e8;
extern "C" unsigned long _UNK_004f36ec;
extern "C" unsigned long _UNK_004f36f0;
extern "C" unsigned long _UNK_004f36f4;
extern "C" unsigned long _UNK_004f36f8;
extern "C" unsigned long _UNK_004f36fc;
extern "C" unsigned long _UNK_004f3700;
extern "C" unsigned long _UNK_004f3704;
extern "C" unsigned long _UNK_004f3708;
extern "C" unsigned long _UNK_004f370c;
extern "C" unsigned long g_004f2fd4;
extern "C" unsigned long g_004f2ff0;
extern "C" unsigned long g_004f3018;
extern "C" unsigned long g_004f3028;
extern "C" unsigned long g_004f3034;
extern "C" unsigned long g_004f305c;
extern "C" unsigned long g_004f3128;
extern "C" unsigned long g_004f312c;
extern "C" unsigned long g_004f317c;
extern "C" unsigned long g_004f3180;
extern "C" unsigned long g_004f31ae;
extern "C" unsigned long g_004f31ec;
extern "C" unsigned long g_004f3238;
extern "C" unsigned long g_004f323c;
extern "C" unsigned long g_004f326a;
extern "C" unsigned long g_004f32a8;
extern "C" unsigned long g_004f32f4;
extern "C" unsigned long g_004f32f8;
extern "C" unsigned long g_004f331e;
extern "C" unsigned long g_004f332a;
extern "C" unsigned long g_004f337c;
extern "C" unsigned long g_004f338e;
extern "C" unsigned long g_004f339a;
extern "C" unsigned long g_004f33aa;
extern "C" unsigned long g_004f33bc;
extern "C" unsigned long g_004f33c8;
extern "C" unsigned long g_004f33e0;
extern "C" unsigned long g_004f33f2;
extern "C" unsigned long g_004f3402;
extern "C" unsigned long g_004f340e;
extern "C" unsigned long g_004f343c;
extern "C" unsigned long g_004f3440;
extern "C" unsigned long g_004f3444;
extern "C" unsigned long g_004f3448;
extern "C" unsigned long g_004f344c;
extern "C" unsigned long g_004f3450;
extern "C" unsigned long g_004f3454;
extern "C" unsigned long g_004f3458;
extern "C" unsigned long g_004f345c;
extern "C" unsigned long g_004f3460;
extern "C" unsigned long g_004f3464;
extern "C" unsigned long g_004f3468;
extern "C" unsigned long g_004f3490;
extern "C" unsigned long g_004f34b4;
extern "C" unsigned long g_004f34f6;
extern "C" unsigned long g_004f34fe;
extern "C" unsigned long g_004f3510;
extern "C" unsigned long g_004f3528;
extern "C" unsigned long g_004f3530;
extern "C" unsigned long g_004f3542;
extern "C" unsigned long g_004f3560;
extern "C" unsigned long g_004f357a;
extern "C" unsigned long g_004f35ba;
extern "C" unsigned long g_004f35e4;
extern "C" unsigned long g_004f35f4;
extern "C" unsigned long g_004f3602;
extern "C" unsigned long g_004f36c2;
extern "C" unsigned long g_004f36cc;
extern "C" unsigned long g_004f36d0;
extern "C" unsigned long g_004f36d4;
extern "C" unsigned long g_004f36d8;
extern "C" unsigned long g_004f36dc;
extern "C" unsigned long g_004f36e0;
extern "C" unsigned long g_004f36e4;
extern "C" unsigned long g_004f36e8;
extern "C" unsigned long g_004f36ec;
extern "C" unsigned long g_004f36f0;
extern "C" unsigned long g_004f36f4;
extern "C" unsigned long g_004f36f8;
extern "C" unsigned long g_004f36fc;
extern "C" unsigned long g_004f3700;
extern "C" unsigned long g_004f3704;
extern "C" unsigned long g_004f3708;
extern "C" unsigned long g_004f370c;
int ADHttpUtil::getRewardNumber() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ADHttpUtil::setRewardNumber(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

ADHttpUtil::~ADHttpUtil()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(6)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(6)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ADHttpUtil::ADHttpUtil()
{
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

int ADHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(&g_004f3034 + g_004f305c);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x24)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
undefined8 ADHttpUtil::setRewardDate(std::vector<ADDate, std::allocator<ADDate>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int ADHttpUtil::getRewardDate() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ADHttpUtil::getADDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ADHttpUtil::saveUserADDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ADHttpUtil::onSaveUserADDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ADHttpUtil::onGetADDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

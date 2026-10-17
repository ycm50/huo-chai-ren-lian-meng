#include "NetTimeSyn.h"
#include "BLLeakUtils.h"
// 兜底声明
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_006ccc96;
extern "C" unsigned long g_006cccd8;
extern "C" unsigned long g_006ccca8;
extern "C" unsigned long g_006cccdc;
extern "C" unsigned long g_006ccd02;
extern "C" unsigned long g_006ccd40;
extern "C" unsigned long g_006ccd14;
extern "C" unsigned long g_006ccd44;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

NetTimeSyn::~NetTimeSyn()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(int *)this = *(int *)((unsigned char *)((char *)&g_006ccc96 + (intptr_t)(g_006cccd8))) + 8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006ccca8 + (intptr_t)(g_006cccdc)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

NetTimeSyn::NetTimeSyn()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_006ccd02 + (intptr_t)(g_006ccd40))) + 8;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006ccd14 + (intptr_t)(g_006ccd44)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool NetTimeSyn::init()
{
  return 1;
}

void NetTimeSyn::synLocalTimeByNet(cocos2d::CCObject* p1, void (cocos2d::CCObject::*p2)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*))
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

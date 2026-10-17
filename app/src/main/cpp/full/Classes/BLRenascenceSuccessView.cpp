#include "BLRenascenceSuccessView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRenascenceSuccessPresenter.h"
#include "BLRenascenceSuccessRoleView.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00650e7c;
extern "C" unsigned long UNK_00650e88;
extern "C" unsigned long UNK_00650e94;
extern "C" unsigned long UNK_00650e96;
extern "C" unsigned long UNK_00650e98;
extern "C" unsigned long UNK_00650eb6;
extern "C" unsigned long UNK_00650ee8;
extern "C" unsigned long UNK_00650f00;
extern "C" unsigned long UNK_00650f02;
extern "C" unsigned long UNK_00650f04;
extern "C" unsigned long UNK_00650f06;
extern "C" unsigned long UNK_00650f24;
extern "C" unsigned long UNK_00650ffc;
extern "C" unsigned long UNK_0065103c;
extern "C" unsigned long UNK_006510c0;
extern "C" unsigned long UNK_006510e8;
extern "C" unsigned long UNK_00651158;
extern "C" unsigned long UNK_00651198;
extern "C" unsigned long UNK_0065123c;
extern "C" unsigned long UNK_0065128e;
extern "C" unsigned long UNK_00651338;
extern "C" unsigned long UNK_006514ac;
extern "C" unsigned long UNK_006514d0;
extern "C" unsigned long UNK_006515c4;
extern "C" unsigned long UNK_00651658;
extern "C" unsigned long UNK_006516e8;
extern "C" unsigned long UNK_0065177a;
extern "C" unsigned long UNK_0065180a;
extern "C" unsigned long UNK_00651892;
extern "C" unsigned long UNK_0065193e;
extern "C" unsigned long UNK_00651a42;
extern "C" unsigned long _DAT_00650fec;
extern "C" unsigned long _DAT_00650ff0;
extern "C" unsigned long _UNK_00650ec0;
extern "C" unsigned long _UNK_00650ec4;
extern "C" unsigned long _UNK_00650ec8;
extern "C" unsigned long _UNK_00650ecc;
extern "C" unsigned long _UNK_00650ed0;
extern "C" unsigned long _UNK_00650ed4;
extern "C" unsigned long _UNK_00650f2c;
extern "C" unsigned long _UNK_00650f30;
extern "C" unsigned long _UNK_00650f34;
extern "C" unsigned long _UNK_00650f38;
extern "C" unsigned long _UNK_00650f3c;
extern "C" unsigned long _UNK_00650f40;
extern "C" unsigned long _UNK_006510ac;
extern "C" unsigned long _UNK_006510b0;
extern "C" unsigned long _UNK_006510c4;
extern "C" unsigned long _UNK_006510ec;
extern "C" unsigned long _UNK_006514f0;
extern "C" unsigned long _UNK_006514f4;
extern "C" unsigned long _UNK_006514f8;
extern "C" unsigned long _UNK_006514fc;
extern "C" unsigned long _UNK_00651500;
extern "C" unsigned long _UNK_00651504;
extern "C" unsigned long _UNK_00651508;
extern "C" unsigned long _UNK_0065150c;
extern "C" unsigned long _UNK_00651510;
extern "C" unsigned long _UNK_00651514;
extern "C" unsigned long _UNK_00651518;
extern "C" unsigned long _UNK_0065151c;
extern "C" unsigned long _UNK_00651520;
extern "C" unsigned long _UNK_00651524;
extern "C" unsigned long _UNK_00651528;
extern "C" unsigned long _UNK_0065152c;
extern "C" unsigned long _UNK_00651968;
extern "C" unsigned long _UNK_0065196c;
extern "C" unsigned long _UNK_00651970;
extern "C" unsigned long _UNK_00651974;
extern "C" unsigned long _UNK_00651978;
extern "C" unsigned long _UNK_0065197c;
extern "C" unsigned long _UNK_00651980;
extern "C" unsigned long _UNK_00651984;
extern "C" unsigned long _UNK_00651988;
extern "C" unsigned long _UNK_00651b1c;
extern "C" unsigned long _UNK_00651b20;
extern "C" unsigned long _UNK_00651b24;
extern "C" unsigned long _UNK_00651b28;
extern "C" unsigned long _UNK_00651b2c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00650e7c;
extern "C" unsigned long g_00650e88;
extern "C" unsigned long g_00650e94;
extern "C" unsigned long g_00650e96;
extern "C" unsigned long g_00650e98;
extern "C" unsigned long g_00650eb6;
extern "C" unsigned long g_00650ec0;
extern "C" unsigned long g_00650ec4;
extern "C" unsigned long g_00650ec8;
extern "C" unsigned long g_00650ecc;
extern "C" unsigned long g_00650ed0;
extern "C" unsigned long g_00650ed4;
extern "C" unsigned long g_00650ee8;
extern "C" unsigned long g_00650f00;
extern "C" unsigned long g_00650f02;
extern "C" unsigned long g_00650f04;
extern "C" unsigned long g_00650f06;
extern "C" unsigned long g_00650f24;
extern "C" unsigned long g_00650f2c;
extern "C" unsigned long g_00650f30;
extern "C" unsigned long g_00650f34;
extern "C" unsigned long g_00650f38;
extern "C" unsigned long g_00650f3c;
extern "C" unsigned long g_00650f40;
extern "C" unsigned long g_00650fec;
extern "C" unsigned long g_00650ff0;
extern "C" unsigned long g_00650ffc;
extern "C" unsigned long g_0065103c;
extern "C" unsigned long g_006510ac;
extern "C" unsigned long g_006510b0;
extern "C" unsigned long g_006510c0;
extern "C" unsigned long g_006510c4;
extern "C" unsigned long g_006510e8;
extern "C" unsigned long g_006510ec;
extern "C" unsigned long g_00651158;
extern "C" unsigned long g_00651198;
extern "C" unsigned long g_0065123c;
extern "C" unsigned long g_0065128e;
extern "C" unsigned long g_00651338;
extern "C" unsigned long g_006514ac;
extern "C" unsigned long g_006514d0;
extern "C" unsigned long g_006514f0;
extern "C" unsigned long g_006514f4;
extern "C" unsigned long g_006514f8;
extern "C" unsigned long g_006514fc;
extern "C" unsigned long g_00651500;
extern "C" unsigned long g_00651504;
extern "C" unsigned long g_00651508;
extern "C" unsigned long g_0065150c;
extern "C" unsigned long g_00651510;
extern "C" unsigned long g_00651514;
extern "C" unsigned long g_00651518;
extern "C" unsigned long g_0065151c;
extern "C" unsigned long g_00651520;
extern "C" unsigned long g_00651524;
extern "C" unsigned long g_00651528;
extern "C" unsigned long g_0065152c;
extern "C" unsigned long g_006515c4;
extern "C" unsigned long g_00651658;
extern "C" unsigned long g_006516e8;
extern "C" unsigned long g_0065177a;
extern "C" unsigned long g_0065180a;
extern "C" unsigned long g_00651892;
extern "C" unsigned long g_0065193e;
extern "C" unsigned long g_00651968;
extern "C" unsigned long g_0065196c;
extern "C" unsigned long g_00651970;
extern "C" unsigned long g_00651974;
extern "C" unsigned long g_00651978;
extern "C" unsigned long g_0065197c;
extern "C" unsigned long g_00651980;
extern "C" unsigned long g_00651984;
extern "C" unsigned long g_00651988;
extern "C" unsigned long g_00651a42;
extern "C" unsigned long g_00651b1c;
extern "C" unsigned long g_00651b20;
extern "C" unsigned long g_00651b24;
extern "C" unsigned long g_00651b28;
extern "C" unsigned long g_00651b2c;
void BLRenascenceSuccessView::onEnter()
{
  ((BLRenascenceSuccessPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRenascenceSuccessView::onExit()
{
  ((BLRenascenceSuccessPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}



BLRenascenceSuccessView::BLRenascenceSuccessView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00650fec + 0x650f56);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLRenascenceSuccessView"),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x49)) = *(int *)((int)this + 4*(0x48));
  *(int *)((int)this + 4*(0x4c)) = *(int *)((int)this + 4*(0x4b));
  return;
}

BLRenascenceSuccessView::~BLRenascenceSuccessView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00650ffc + (intptr_t)(g_006510ac))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0065103c + (intptr_t)(g_006510b0)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x49)) = *(int *)((int)this + 4*(0x48));
  *(int *)((int)this + 4*(0x4c)) = *(int *)((int)this + 4*(0x4b));
  ((std::vector<cocos2d::CCLabelTTF*, std::allocator<cocos2d::CCLabelTTF*>> *)((int)this) + 0x4b)->~vector();
  ((std::vector<cocos2d::CCLabelTTF*, std::allocator<cocos2d::CCLabelTTF*>> *)((int)this) + 0x48)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool BLRenascenceSuccessView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascenceSuccessPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceSuccessView::initView();
    ((BLRenascenceSuccessPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceSuccessView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
undefined8 BLRenascenceSuccessView::getLabTit(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLRenascenceSuccessView::getLabValue(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRenascenceSuccessView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

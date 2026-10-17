#include "BLDataAnimate.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e714(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7c4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e7f4(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042cbd8;
extern "C" unsigned long _DAT_0042cbdc;
extern "C" unsigned long _DAT_0042cbe0;
extern "C" unsigned long _DAT_0042cd24;
extern "C" unsigned long _DAT_0042cd2c;
extern "C" unsigned long _DAT_0042cd30;
extern "C" unsigned long _DAT_0042cf78;
extern "C" unsigned long _DAT_0042cf7c;
extern "C" unsigned long _DAT_0042cf80;
extern "C" unsigned long _DAT_0042cf84;
extern "C" unsigned long _DAT_0042cf88;
extern "C" unsigned long _DAT_0042d178;
extern "C" unsigned long _DAT_0042d17c;
extern "C" unsigned long _DAT_0042d180;
extern "C" unsigned long _DAT_0042d184;
extern "C" unsigned long _DAT_0042d188;
extern "C" unsigned long _DAT_0042d18c;
extern "C" unsigned long _DAT_0042d534;
extern "C" unsigned long _DAT_0042d538;
extern "C" unsigned long _DAT_0042d53c;
extern "C" unsigned long _DAT_0042d540;
extern "C" unsigned long _DAT_0042d638;
extern "C" unsigned long _DAT_0042d63c;
extern "C" unsigned long _DAT_0042d640;
extern "C" unsigned long _DAT_0042d644;
extern "C" unsigned long _DAT_0042d738;
extern "C" unsigned long _DAT_0042d73c;
extern "C" unsigned long _DAT_0042d740;
extern "C" unsigned long _DAT_0042d744;
extern "C" unsigned long _DAT_0042d748;
extern "C" unsigned long _DAT_0042d74c;
extern "C" unsigned long _DAT_0042d750;
extern "C" unsigned long _DAT_0042d754;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0042cbd8;
extern "C" unsigned long g_0042cbdc;
extern "C" unsigned long g_0042cbe0;
extern "C" unsigned long g_0042cd24;
extern "C" unsigned long g_0042cd2c;
extern "C" unsigned long g_0042cd30;
extern "C" unsigned long g_0042cf78;
extern "C" unsigned long g_0042cf7c;
extern "C" unsigned long g_0042cf80;
extern "C" unsigned long g_0042cf84;
extern "C" unsigned long g_0042cf88;
extern "C" unsigned long g_0042d178;
extern "C" unsigned long g_0042d17c;
extern "C" unsigned long g_0042d180;
extern "C" unsigned long g_0042d184;
extern "C" unsigned long g_0042d188;
extern "C" unsigned long g_0042d18c;
extern "C" unsigned long g_0042d534;
extern "C" unsigned long g_0042d538;
extern "C" unsigned long g_0042d53c;
extern "C" unsigned long g_0042d540;
extern "C" unsigned long g_0042d638;
extern "C" unsigned long g_0042d63c;
extern "C" unsigned long g_0042d640;
extern "C" unsigned long g_0042d644;
extern "C" unsigned long g_0042d738;
extern "C" unsigned long g_0042d73c;
extern "C" unsigned long g_0042d740;
extern "C" unsigned long g_0042d744;
extern "C" unsigned long g_0042d748;
extern "C" unsigned long g_0042d74c;
extern "C" unsigned long g_0042d750;
extern "C" unsigned long g_0042d754;
int BLDataAnimate::getType() const
{
  return *(undefined4 *)(((int)this) + 0x58);
}

void BLDataAnimate::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x58) = p1;
  return;
}

float BLDataAnimate::getBaseScale() const
{
  return *(undefined4 *)(((int)this) + 0x5c);
}

void BLDataAnimate::setBaseScale(float p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = p1;
  return;
}

cocos2d::extension::CCInvocation* BLDataAnimate::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x60));
}




BLDataAnimate::~BLDataAnimate()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_0042cbdc + 0x42cb44);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x18)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x18)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDataAnimate"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x11)))));
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0xe)))));
  }
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0xb)))));
  }
  *(int *)this = iVar2 + 8;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCAction(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDataAnimate::setInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x60) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x60) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x60) = (undefined4)(intptr_t)p1;
  }
  return;
}

bool BLDataAnimate::isDone()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0079e50c(*(undefined4 *)(((int)this) + 0x24),*(undefined4 *)(((int)this) + 0x20),p3,
                          p4,p4);
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(1);
    if (*(int *)(((int)this) + 0x60) != 0) {
      ((cocos2d::extension::CCInvocation *)*(int *)(((int)this) + 0x60))->invoke((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x18));
    }
  }
  return uVar2;
}


bool BLDataAnimate::init()
{
  return 1;
}













int * BLDataAnimate::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(100)));
  0 /* ctorZero */;
  iVar2 = ((BLDataAnimate *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (15) =====
void BLDataAnimate::step(float p1)
{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((char)*(int *)((int)this + 4*(10)) == '\0') {
    iVar1 = func_0079e59c(*(int *)((int)this + 4*(9)));
    *(int *)((int)this + 4*(9)) = iVar1;
  }
  else {
    *(char *)(((int)this) + 10) = '\0';
    *(int *)((int)this + 4*(9)) = 0;
  }
  iVar4 = *(int *)((int)this + 4*(8));
  pcVar3 = *(code **)(*(int *)this + 0x14);
  iVar5 = *(int *)((int)this + 4*(9));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(iVar4),(int)(0x34000000))));
  bVar6 = iVar1 != 0;
  iVar1 = iVar4;
  if (bVar6) {
    iVar1 = 0x34000000;
  }
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar5),(int)(iVar1)))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(0x3f800000))));
  if (iVar1 != 0) {
    iVar1 = iVar4;
    if (bVar6) {
      iVar1 = 0x34000000;
    }
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar5),(int)(iVar1)))));
    iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar2),(int)(0))));
    uVar2 = (undefined4)(0);
    if (iVar1 == 0) goto LAB_0042cb12;
  }
  iVar1 = iVar4;
  if (bVar6) {
    iVar1 = 0x34000000;
  }
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar5),(int)(iVar1)))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(0x3f800000))));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(0x3f800000);
  }
  else {
    if (bVar6) {
      iVar4 = 0x34000000;
    }
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar5),(int)(iVar4)))));
  }
LAB_0042cb12:
  (*pcVar3)(((int)this),uVar2);
  return;
}

cocos2d::CCPoint BLDataAnimate::getTargetPosition() const
{ return cocos2d::CCPoint(); }

void BLDataAnimate::setTargetPosition(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLDataAnimate::BLDataAnimate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLDataAnimate::getAlpha() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLDataAnimate::setAlpha(std::vector<float, std::allocator<float>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::update(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::initAlphaData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLDataAnimate::getScalePos() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLDataAnimate::getSharkPos() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLDataAnimate::initWith(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::setScalePos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::setSharkPos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::initScaleData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDataAnimate::initSpeedData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

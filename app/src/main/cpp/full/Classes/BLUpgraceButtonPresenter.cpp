#include "BLUpgraceButtonPresenter.h"
#include "CCLabelTTF.h"
#include "CCScheduler.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BackPackItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCInvocation.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpgraceButtonView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "LivenessUserData.h"
#include "Toast.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e754(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00677008;
extern "C" unsigned long UNK_00677022;
extern "C" unsigned long UNK_00677078;
extern "C" unsigned long UNK_006770a0;
extern "C" unsigned long UNK_006770da;
extern "C" unsigned long UNK_00677108;
extern "C" unsigned long UNK_006771e6;
extern "C" unsigned long UNK_00677204;
extern "C" unsigned long UNK_0067721e;
extern "C" unsigned long UNK_0067724e;
extern "C" unsigned long UNK_0067739a;
extern "C" unsigned long UNK_006773c6;
extern "C" unsigned long UNK_006773c8;
extern "C" unsigned long UNK_00677402;
extern "C" unsigned long UNK_0067749e;
extern "C" unsigned long _UNK_00677064;
extern "C" unsigned long _UNK_00677068;
extern "C" unsigned long _UNK_0067707c;
extern "C" unsigned long _UNK_006770a4;
extern "C" unsigned long _UNK_00677144;
extern "C" unsigned long _UNK_00677148;
extern "C" unsigned long _UNK_006771c0;
extern "C" unsigned long _UNK_00677270;
extern "C" unsigned long _UNK_00677274;
extern "C" unsigned long _UNK_00677278;
extern "C" unsigned long _UNK_0067727c;
extern "C" unsigned long _UNK_006774d4;
extern "C" unsigned long _UNK_006774d8;
extern "C" unsigned long _UNK_006774dc;
extern "C" unsigned long _UNK_006774e0;
extern "C" unsigned long _UNK_006774e4;
extern "C" unsigned long _UNK_00677548;
extern "C" unsigned long _UNK_0067754c;
extern "C" unsigned long g_00677008;
extern "C" unsigned long g_00677022;
extern "C" unsigned long g_00677064;
extern "C" unsigned long g_00677068;
extern "C" unsigned long g_00677078;
extern "C" unsigned long g_0067707c;
extern "C" unsigned long g_006770a0;
extern "C" unsigned long g_006770a4;
extern "C" unsigned long g_006770da;
extern "C" unsigned long g_00677108;
extern "C" unsigned long g_00677144;
extern "C" unsigned long g_00677148;
extern "C" unsigned long g_006771c0;
extern "C" unsigned long g_006771e6;
extern "C" unsigned long g_00677204;
extern "C" unsigned long g_0067721e;
extern "C" unsigned long g_0067724e;
extern "C" unsigned long g_00677270;
extern "C" unsigned long g_00677274;
extern "C" unsigned long g_00677278;
extern "C" unsigned long g_0067727c;
extern "C" unsigned long g_0067739a;
extern "C" unsigned long g_006773c6;
extern "C" unsigned long g_006773c8;
extern "C" unsigned long g_00677402;
extern "C" unsigned long g_0067749e;
extern "C" unsigned long g_006774d4;
extern "C" unsigned long g_006774d8;
extern "C" unsigned long g_006774dc;
extern "C" unsigned long g_006774e0;
extern "C" unsigned long g_006774e4;
extern "C" unsigned long g_00677548;
extern "C" unsigned long g_0067754c;
cocos2d::extension::CCInvocation* BLUpgraceButtonPresenter::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x24));
}

bool BLUpgraceButtonPresenter::getISTouchDown() const
{
  return *(undefined1 *)(((int)this) + 0x28);
}

void BLUpgraceButtonPresenter::setISTouchDown(bool p1)
{
  *(undefined1 *)(((int)this) + 0x28) = p1;
  return;
}

bool BLUpgraceButtonPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLUpgraceButtonPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceButtonPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceButtonPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceButtonPresenter::onUpgraceTouchDown(cocos2d::CCObject* p1, unsigned int p2)
{
  *(undefined1 *)(((int)this) + 0x28) = 1;
  *(undefined4 *)(((int)this) + 0x2c) = 0;
  return;
}

BLUpgraceButtonPresenter::~BLUpgraceButtonPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00677008 + g_00677064);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00677022 + g_00677068,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLUpgraceButtonPresenter::setInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLUpgraceButtonPresenter::BLUpgraceButtonPresenter()
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
  iVar3 = *(int *)(&g_006770da + g_00677144);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00677108 + g_00677148,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(undefined1 *)(((int)this) + 10) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  return;
}

undefined4 BLUpgraceButtonPresenter::create(BLUpgraceButtonView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}






void BLUpgraceButtonPresenter::onUpgrace(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(*(undefined4 *)(((int)this) + 0x2c)),(int)(0x3f000000))));
  if (iVar1 != 0) {
    BLUpgraceButtonPresenter::upgrace();
  }
  *(undefined4 *)(((int)this) + 0x2c) = 0;
  *(undefined1 *)(((int)this) + 0x28) = 0;
  return;
}

void BLUpgraceButtonPresenter::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(char *)(((int)this) + 0x28) != '\0') {
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2c))))));
    *(undefined4 *)(((int)this) + 0x2c) = uVar1;
    uVar3 = func_0079e62c();
    iVar2 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);return ((_x >= _y)?1:0);}((((long long)(unsigned)((int)uVar3))|(((long long)(unsigned)((int)((ulonglong)uVar3 >> 0x20)))<<32)),(((long long)(unsigned)(g_00677548))|(((long long)(unsigned)(g_0067754c))<<32)))));
    if (iVar2 != 0) {
      BLUpgraceButtonPresenter::upgrace();
      *(undefined4 *)(((int)this) + 0x2c) = 0x3f000000;
    }
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLUpgraceButtonPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  ((cocos2d::CCScheduler *)(0x18))->unscheduleSelector(0 /*memptr*/, (cocos2d::CCObject*)((int)this));
  return;
}

void BLUpgraceButtonPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpgraceButtonPresenter::initWithView(BLUpgraceButtonView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLUpgraceButtonView *)(p1))->getBtnUpgrace();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006771e6 + (intptr_t)(g_00677270))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLUpgraceButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUpgrace();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00677204 + (intptr_t)(g_00677274))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,1);
  uVar2 = (undefined4)(((BLUpgraceButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPrice());
  puVar3 = (unsigned char *)((char *)&g_0067721e + (intptr_t)(g_00677278));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLUpgraceButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  piVar1 = (int *)((BLUpgraceButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUpgrace();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0067724e + (intptr_t)(g_0067727c)),auStack_30);
  (*pcVar4)(piVar1,auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLUpgraceButtonPresenter::updateData(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)((long long)::operator new((size_t)(0x84)));
  0 /* ctorZero */;
  iVar2 = ((EquipData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))());
  ((EquipData *)piVar1)->initWithID(uVar3);
  piVar4 = (int *)(**(code **)(*piVar1 + 0xc0))(piVar1);
  uVar3 = (undefined4)((**(code **)(*piVar4 + 0x58))());
  piVar4 = (int *)(**(code **)(*piVar1 + 0xc0))(piVar1);
  uVar5 = (undefined4)((**(code **)(*piVar4 + 0x50))());
  uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  piVar1 = (int *)(**(code **)(*piVar1 + 0xc0))(piVar1);
  iVar2 = (**(code **)(*piVar1 + 0x58))();
  iVar6 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x30))();
  iVar7 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x30))();
  (void)(((long long)((int)(iVar6 * iVar2 * iVar7) / (int)(5))));
  uVar5 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)((int)(iVar6 * iVar2 * iVar7) / (int)(5))))))));
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))))))));
  *(undefined4 *)(((int)this) + 0x20) = uVar3;
  piVar1 = (int *)((BLUpgraceButtonView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  pcVar8 = *(code **)(*piVar1 + 0x234);
  uVar9 = ((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(((int)this) + 0x20)))));
  uVar3 = (undefined4)((undefined4)((ulonglong)uVar9 >> 0x20));
  0 /* ctorZero */;
  (*pcVar8)(piVar1,uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void BLUpgraceButtonPresenter::upgrace()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpgraceButtonPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

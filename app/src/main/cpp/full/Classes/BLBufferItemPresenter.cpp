#include "BLBufferItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLBufferItemView.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "DataManager.h"
#include "DateJsonManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00529c8c;
extern "C" unsigned long UNK_00529ca4;
extern "C" unsigned long UNK_00529cbc;
extern "C" unsigned long UNK_00529d2c;
extern "C" unsigned long UNK_00529d46;
extern "C" unsigned long UNK_00529d8c;
extern "C" unsigned long UNK_00529db4;
extern "C" unsigned long UNK_00529dd8;
extern "C" unsigned long UNK_00529e3a;
extern "C" unsigned long UNK_00529eb8;
extern "C" unsigned long UNK_00529f34;
extern "C" unsigned long UNK_00529f6e;
extern "C" unsigned long UNK_00529f9c;
extern "C" unsigned long UNK_0052a004;
extern "C" unsigned long UNK_0052a034;
extern "C" unsigned long UNK_0052a036;
extern "C" unsigned long UNK_0052a066;
extern "C" unsigned long UNK_0052a086;
extern "C" unsigned long UNK_0052a0a4;
extern "C" unsigned long UNK_0052a0bc;
extern "C" unsigned long UNK_0052a0fc;
extern "C" unsigned long UNK_0052a214;
extern "C" unsigned long UNK_0052a216;
extern "C" unsigned long UNK_0052a24a;
extern "C" unsigned long UNK_0052a26e;
extern "C" unsigned long UNK_0052a2e0;
extern "C" unsigned long UNK_0052a2e2;
extern "C" unsigned long UNK_0052a316;
extern "C" unsigned long UNK_0052a33a;
extern "C" unsigned long UNK_0052a3ac;
extern "C" unsigned long UNK_0052a3ae;
extern "C" unsigned long UNK_0052a3e2;
extern "C" unsigned long UNK_0052a406;
extern "C" unsigned long _UNK_00529c90;
extern "C" unsigned long _UNK_00529ca8;
extern "C" unsigned long _UNK_00529cc0;
extern "C" unsigned long _UNK_00529d78;
extern "C" unsigned long _UNK_00529d7c;
extern "C" unsigned long _UNK_00529d90;
extern "C" unsigned long _UNK_00529db8;
extern "C" unsigned long _UNK_00529f44;
extern "C" unsigned long _UNK_00529f48;
extern "C" unsigned long _UNK_00529f4c;
extern "C" unsigned long _UNK_00529f50;
extern "C" unsigned long _UNK_00529f54;
extern "C" unsigned long _UNK_00529f58;
extern "C" unsigned long _UNK_00529f5c;
extern "C" unsigned long _UNK_00529fc8;
extern "C" unsigned long _UNK_00529fcc;
extern "C" unsigned long _UNK_0052a01c;
extern "C" unsigned long _UNK_0052a040;
extern "C" unsigned long _UNK_0052a044;
extern "C" unsigned long _UNK_0052a160;
extern "C" unsigned long _UNK_0052a164;
extern "C" unsigned long _UNK_0052a168;
extern "C" unsigned long _UNK_0052a16c;
extern "C" unsigned long _UNK_0052a170;
extern "C" unsigned long _UNK_0052a2a0;
extern "C" unsigned long _UNK_0052a2a4;
extern "C" unsigned long _UNK_0052a2a8;
extern "C" unsigned long _UNK_0052a2ac;
extern "C" unsigned long _UNK_0052a2b0;
extern "C" unsigned long _UNK_0052a36c;
extern "C" unsigned long _UNK_0052a370;
extern "C" unsigned long _UNK_0052a374;
extern "C" unsigned long _UNK_0052a378;
extern "C" unsigned long _UNK_0052a37c;
extern "C" unsigned long _UNK_0052a438;
extern "C" unsigned long _UNK_0052a43c;
extern "C" unsigned long _UNK_0052a440;
extern "C" unsigned long _UNK_0052a444;
extern "C" unsigned long _UNK_0052a448;
extern "C" unsigned long g_00529c8c;
extern "C" unsigned long g_00529c90;
extern "C" unsigned long g_00529ca4;
extern "C" unsigned long g_00529ca8;
extern "C" unsigned long g_00529cbc;
extern "C" unsigned long g_00529cc0;
extern "C" unsigned long g_00529d2c;
extern "C" unsigned long g_00529d46;
extern "C" unsigned long g_00529d78;
extern "C" unsigned long g_00529d7c;
extern "C" unsigned long g_00529d8c;
extern "C" unsigned long g_00529d90;
extern "C" unsigned long g_00529db4;
extern "C" unsigned long g_00529db8;
extern "C" unsigned long g_00529dd8;
extern "C" unsigned long g_00529e3a;
extern "C" unsigned long g_00529eb8;
extern "C" unsigned long g_00529f34;
extern "C" unsigned long g_00529f44;
extern "C" unsigned long g_00529f48;
extern "C" unsigned long g_00529f4c;
extern "C" unsigned long g_00529f50;
extern "C" unsigned long g_00529f54;
extern "C" unsigned long g_00529f58;
extern "C" unsigned long g_00529f5c;
extern "C" unsigned long g_00529f6e;
extern "C" unsigned long g_00529f9c;
extern "C" unsigned long g_00529fc8;
extern "C" unsigned long g_00529fcc;
extern "C" unsigned long g_0052a004;
extern "C" unsigned long g_0052a01c;
extern "C" unsigned long g_0052a034;
extern "C" unsigned long g_0052a036;
extern "C" unsigned long g_0052a040;
extern "C" unsigned long g_0052a044;
extern "C" unsigned long g_0052a066;
extern "C" unsigned long g_0052a086;
extern "C" unsigned long g_0052a0a4;
extern "C" unsigned long g_0052a0bc;
extern "C" unsigned long g_0052a0fc;
extern "C" unsigned long g_0052a160;
extern "C" unsigned long g_0052a164;
extern "C" unsigned long g_0052a168;
extern "C" unsigned long g_0052a16c;
extern "C" unsigned long g_0052a170;
extern "C" unsigned long g_0052a214;
extern "C" unsigned long g_0052a216;
extern "C" unsigned long g_0052a24a;
extern "C" unsigned long g_0052a26e;
extern "C" unsigned long g_0052a2a0;
extern "C" unsigned long g_0052a2a4;
extern "C" unsigned long g_0052a2a8;
extern "C" unsigned long g_0052a2ac;
extern "C" unsigned long g_0052a2b0;
extern "C" unsigned long g_0052a2e0;
extern "C" unsigned long g_0052a2e2;
extern "C" unsigned long g_0052a316;
extern "C" unsigned long g_0052a33a;
extern "C" unsigned long g_0052a36c;
extern "C" unsigned long g_0052a370;
extern "C" unsigned long g_0052a374;
extern "C" unsigned long g_0052a378;
extern "C" unsigned long g_0052a37c;
extern "C" unsigned long g_0052a3ac;
extern "C" unsigned long g_0052a3ae;
extern "C" unsigned long g_0052a3e2;
extern "C" unsigned long g_0052a406;
extern "C" unsigned long g_0052a438;
extern "C" unsigned long g_0052a43c;
extern "C" unsigned long g_0052a440;
extern "C" unsigned long g_0052a444;
extern "C" unsigned long g_0052a448;
bool BLBufferItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBufferItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBufferItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBufferItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLBufferItemPresenter::~BLBufferItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00529d2c + g_00529d78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00529d46 + g_00529d7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLBufferItemPresenter::BLBufferItemPresenter()
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
  iVar3 = *(int *)(&g_00529f6e + g_00529fc8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00529f9c + g_00529fcc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBufferItemPresenter::create(BLBufferItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBufferItemPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0052a004 + g_0052a01c);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLBufferItemPresenter::onUpdateBuffLayer(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)((BLMission *)this)->currentMission();
  iVar4 = (undefined4)(intptr_t)(g_00529f44);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x110))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(0));
  if (iVar3 != 0) {
    iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f48)) + iVar4),
                            *(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f4c)) + iVar4),0);
    if (iVar3 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      uVar6 = (undefined4)(intptr_t)(func_0079e824(uVar2,0));
      piVar1 = (int *)((BLBufferItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabAttack();
      pcVar5 = *(code **)(*piVar1 + 0x234);
      uVar2 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32))))));
      (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))));
      uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))))))));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00529e3a + (intptr_t)(g_00529f54)), uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar5)(piVar1,uVar2);
    }
  }
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x110))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(2));
  if (iVar3 != 0) {
    iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f48)) + iVar4),
                            *(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f4c)) + iVar4),0);
    if (iVar3 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      uVar6 = (undefined4)(intptr_t)(func_0079e824(uVar2,0));
      piVar1 = (int *)((BLBufferItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabLife();
      pcVar5 = *(code **)(*piVar1 + 0x234);
      uVar2 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32))))));
      (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))));
      uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))))))));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00529eb8 + (intptr_t)(g_00529f58)), uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar5)(piVar1,uVar2);
    }
  }
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x110))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(1));
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f48)) + iVar4),
                            *(undefined4 *)((unsigned char *)((char *)&g_00529dd8 + (intptr_t)(g_00529f4c)) + iVar4),0);
    if (iVar4 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      uVar6 = (undefined4)(intptr_t)(func_0079e824(uVar2,0));
      piVar1 = (int *)((BLBufferItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabDefense();
      pcVar5 = *(code **)(*piVar1 + 0x234);
      uVar2 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32))))));
      (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))));
      uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00529f50)))))))));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00529f34 + (intptr_t)(g_00529f5c)), uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar5)(piVar1,uVar2);
    }
  }
  return;
}

void BLBufferItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBufferItemPresenter::initWithView(BLBufferItemView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined *puVar4;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBufferItemView *)(p1))->getBtnAttack();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0052a066 + (intptr_t)(g_0052a160))),0,0x20);
  piVar1 = (int *)((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnDefense();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0052a086 + (intptr_t)(g_0052a164))),0,0x20);
  piVar1 = (int *)((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnLife();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0052a0a4 + (intptr_t)(g_0052a168))),0,0x20);
  puVar4 = (unsigned char *)((char *)&g_0052a0bc + (intptr_t)(g_0052a16c));
  uVar2 = (undefined4)(((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabAttack());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDefense());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabLife());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabAttack();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  puVar4 = (unsigned char *)((char *)&g_0052a0fc + (intptr_t)(g_0052a170));
  cocos2d::CCString::createWithFormat((char const*)puVar4, 0);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar1,uVar2);
  piVar1 = (int *)((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabLife();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)puVar4, 0);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar1,uVar2);
  piVar1 = (int *)((BLBufferItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDefense();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)puVar4, 0);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar1,uVar2);
  return;
}

void BLBufferItemPresenter::onAttrack(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(0));
  if ((iVar3 != 0) &&
     (iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0052a214 + (intptr_t)(g_0052a2a0))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0052a216 + (intptr_t)(g_0052a2a4))),0), iVar3 != 0)) {
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e824(uVar2,0);
    uVar2 = (undefined4)(func_0079e7e4());
    func_0079e4fc(uVar2,g_0052a2a8);
    iVar3 = (undefined4)(intptr_t)(func_0079e5fc());
    uVar2 = (undefined4)(((sir::singleton<DateJsonManager, 0> *)this)->instance());
    func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0052a24a + (intptr_t)(g_0052a2ac)),&uStack_18);
    iVar4 = (undefined4)((void)(((DateJsonManager *)(uVar2))->getIntGameDateWithKey(*(std::string const*)&uStack_14, 0x96)),(intptr_t)0);
    func_0079e2bc(&uStack_14);
    if (iVar4 <= iVar3) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0052a26e + (intptr_t)(g_0052a2b0)));
      goto code_r0x0052a29c;
    }
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  (**(code **)(*(int *)(piVar1) + (0x15c)))(piVar1,1);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar2))->showUIById(0x97);
code_r0x0052a29c:
  return;
}

void BLBufferItemPresenter::onDefense(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(1));
  if ((iVar3 != 0) &&
     (iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0052a2e0 + (intptr_t)(g_0052a36c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0052a2e2 + (intptr_t)(g_0052a370))),0), iVar3 != 0)) {
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e824(uVar2,0);
    uVar2 = (undefined4)(func_0079e7e4());
    func_0079e4fc(uVar2,g_0052a374);
    iVar3 = (undefined4)(intptr_t)(func_0079e5fc());
    uVar2 = (undefined4)(((sir::singleton<DateJsonManager, 0> *)this)->instance());
    func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0052a316 + (intptr_t)(g_0052a378)),&uStack_18);
    iVar4 = (undefined4)((void)(((DateJsonManager *)(uVar2))->getIntGameDateWithKey(*(std::string const*)&uStack_14, 0x96)),(intptr_t)0);
    func_0079e2bc(&uStack_14);
    if (iVar4 <= iVar3) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0052a33a + (intptr_t)(g_0052a37c)));
      goto code_r0x0052a368;
    }
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  (**(code **)(*(int *)(piVar1) + (0x15c)))(piVar1,2);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar2))->showUIById(0x97);
code_r0x0052a368:
  return;
}

void BLBufferItemPresenter::onLife(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(2));
  if ((iVar3 != 0) &&
     (iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0052a3ac + (intptr_t)(g_0052a438))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0052a3ae + (intptr_t)(g_0052a43c))),0), iVar3 != 0)) {
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e824(uVar2,0);
    uVar2 = (undefined4)(func_0079e7e4());
    func_0079e4fc(uVar2,g_0052a440);
    iVar3 = (undefined4)(intptr_t)(func_0079e5fc());
    uVar2 = (undefined4)(((sir::singleton<DateJsonManager, 0> *)this)->instance());
    func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0052a3e2 + (intptr_t)(g_0052a444)),&uStack_18);
    iVar4 = (undefined4)((void)(((DateJsonManager *)(uVar2))->getIntGameDateWithKey(*(std::string const*)&uStack_14, 0x96)),(intptr_t)0);
    func_0079e2bc(&uStack_14);
    if (iVar4 <= iVar3) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0052a406 + (intptr_t)(g_0052a448)));
      goto code_r0x0052a434;
    }
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  (**(code **)(*(int *)(piVar1) + (0x15c)))(piVar1,3);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar2))->showUIById(0x97);
code_r0x0052a434:
  return;
}

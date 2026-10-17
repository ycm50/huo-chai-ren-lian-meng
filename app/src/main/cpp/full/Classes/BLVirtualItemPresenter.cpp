#include "BLVirtualItemPresenter.h"
#include "CCDictionary.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLVirtualItemView.h"
#include "DataCacheManager.h"
#include "PlatformHelp.h"
#include "UIManager.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f60f8;
extern "C" unsigned long UNK_005f6110;
extern "C" unsigned long UNK_005f6128;
extern "C" unsigned long UNK_005f619c;
extern "C" unsigned long UNK_005f61b6;
extern "C" unsigned long UNK_005f61fc;
extern "C" unsigned long UNK_005f6224;
extern "C" unsigned long UNK_005f6266;
extern "C" unsigned long UNK_005f6294;
extern "C" unsigned long UNK_005f6328;
extern "C" unsigned long UNK_005f6464;
extern "C" unsigned long UNK_005f6592;
extern "C" unsigned long UNK_005f6594;
extern "C" unsigned long _UNK_005f60fc;
extern "C" unsigned long _UNK_005f6114;
extern "C" unsigned long _UNK_005f612c;
extern "C" unsigned long _UNK_005f61e8;
extern "C" unsigned long _UNK_005f61ec;
extern "C" unsigned long _UNK_005f6200;
extern "C" unsigned long _UNK_005f6228;
extern "C" unsigned long _UNK_005f62c0;
extern "C" unsigned long _UNK_005f62c4;
extern "C" unsigned long _UNK_005f6434;
extern "C" unsigned long _UNK_005f6438;
extern "C" unsigned long _UNK_005f655c;
extern "C" unsigned long _UNK_005f6560;
extern "C" unsigned long _UNK_005f6564;
extern "C" unsigned long _UNK_005f6568;
extern "C" unsigned long _UNK_005f6600;
extern "C" unsigned long _UNK_005f6604;
extern "C" unsigned long g_005f60f8;
extern "C" unsigned long g_005f60fc;
extern "C" unsigned long g_005f6110;
extern "C" unsigned long g_005f6114;
extern "C" unsigned long g_005f6128;
extern "C" unsigned long g_005f612c;
extern "C" unsigned long g_005f619c;
extern "C" unsigned long g_005f61b6;
extern "C" unsigned long g_005f61e8;
extern "C" unsigned long g_005f61ec;
extern "C" unsigned long g_005f61fc;
extern "C" unsigned long g_005f6200;
extern "C" unsigned long g_005f6224;
extern "C" unsigned long g_005f6228;
extern "C" unsigned long g_005f6266;
extern "C" unsigned long g_005f6294;
extern "C" unsigned long g_005f62c0;
extern "C" unsigned long g_005f62c4;
extern "C" unsigned long g_005f6328;
extern "C" unsigned long g_005f6434;
extern "C" unsigned long g_005f6438;
extern "C" unsigned long g_005f6464;
extern "C" unsigned long g_005f655c;
extern "C" unsigned long g_005f6560;
extern "C" unsigned long g_005f6564;
extern "C" unsigned long g_005f6568;
extern "C" unsigned long g_005f6592;
extern "C" unsigned long g_005f6594;
extern "C" unsigned long g_005f6600;
extern "C" unsigned long g_005f6604;
bool BLVirtualItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLVirtualItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVirtualItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVirtualItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVirtualItemPresenter::tick(float p1)
{
  return;
}

BLVirtualItemPresenter::~BLVirtualItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f619c + g_005f61e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f61b6 + g_005f61ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLVirtualItemPresenter::BLVirtualItemPresenter()
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
  iVar3 = *(int *)(&g_005f6266 + g_005f62c0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f6294 + g_005f62c4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLVirtualItemPresenter::create(BLVirtualItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLVirtualItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLVirtualItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLVirtualItemPresenter::onAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)((void)(((PlatformHelp *)this)->isCrack()),(intptr_t)0);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x46)),(intptr_t)0);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    uVar3 = (undefined4)(0x46);
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    uVar3 = (undefined4)(0x53);
  }
  ((UIManager *)(uVar2))->showUIById(uVar3);
  return;
}

void BLVirtualItemPresenter::initWithView(BLVirtualItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLVirtualItemView *)p1)->getBtnAdd();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005f6328 + g_005f6434));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = *(int **)(((int)this) + 0x18);
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAdd();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprIcon();
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAdd();
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
  (**(code **)(*piVar1 + 0x5c))(piVar1,g_005f6438);
  piVar1 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
  piVar2 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(*puVar4)))));
  (*pcVar5)(piVar1,uVar3);
  return;
}

void BLVirtualItemPresenter::setItemNum(std::string * p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(func_0079e6c0(*(int *)p1));
  if (g_005f655c < iVar1) {
    uVar2 = (undefined4)(func_0079e6c0(*(int *)p1));
    uVar2 = (undefined4)(func_0079e4ac(uVar2,g_005f6560));
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005f6464 + (intptr_t)(g_005f6564)), uVar2);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(p1,uVar2);
  }
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  (**(code **)(*(int *)(piVar3) + (0x234)))(piVar3,*(int *)p1);
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprIcon();
  pcVar6 = *(code **)(*piVar3 + 0x5c);
  piVar4 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  piVar4 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  (*pcVar6)(piVar3,uVar2);
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar2 = (undefined4)(*puVar5);
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabNum();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_005f6568));
  piVar3 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAdd();
  pcVar6 = *(code **)(*piVar3 + 0x28c);
  piVar4 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAdd();
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))());
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  piVar4 = *(int **)(((int)this) + 0x18);
  pcVar6 = *(code **)(*piVar4 + 0x88);
  piVar3 = (int *)((BLVirtualItemView *)piVar4)->getBtnAdd();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  (*pcVar6)(piVar4,uVar2);
  return;
}

void BLVirtualItemPresenter::setVirtualType(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(p1));
  if ((iVar3 != 0) &&
     (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_005f6592 + (intptr_t)(g_005f6600))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005f6594 + (intptr_t)(g_005f6604))),0),
     piVar1 != (int *)0x0)) {
    piVar4 = (int *)((BLVirtualItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprIcon();
    pcVar5 = *(code **)(*piVar4 + 0x20c);
    (**(code **)(*piVar1 + 0x60))(&uStack_20,piVar1);
    func_0079e45c(auStack_1c,uStack_20,auStack_24);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar5)(piVar4,uVar2);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
  }
  return;
}

#include "BLUpgraceTitlePresenter.h"
#include "BLLeakUtils.h"
#include "BLUpgraceTitleView.h"
#include "DataCacheManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00677b28;
extern "C" unsigned long UNK_00677b40;
extern "C" unsigned long UNK_00677b58;
extern "C" unsigned long UNK_00677bcc;
extern "C" unsigned long UNK_00677be6;
extern "C" unsigned long UNK_00677c2c;
extern "C" unsigned long UNK_00677c54;
extern "C" unsigned long UNK_00677c6a;
extern "C" unsigned long UNK_00677c98;
extern "C" unsigned long UNK_00677d74;
extern "C" unsigned long UNK_00677d76;
extern "C" unsigned long UNK_00677db4;
extern "C" unsigned long UNK_00677dd4;
extern "C" unsigned long UNK_00677dfe;
extern "C" unsigned long _UNK_00677b2c;
extern "C" unsigned long _UNK_00677b44;
extern "C" unsigned long _UNK_00677b5c;
extern "C" unsigned long _UNK_00677c18;
extern "C" unsigned long _UNK_00677c1c;
extern "C" unsigned long _UNK_00677c30;
extern "C" unsigned long _UNK_00677c58;
extern "C" unsigned long _UNK_00677cc4;
extern "C" unsigned long _UNK_00677cc8;
extern "C" unsigned long _UNK_00677f50;
extern "C" unsigned long _UNK_00677f54;
extern "C" unsigned long _UNK_00677f58;
extern "C" unsigned long _UNK_00677f5c;
extern "C" unsigned long _UNK_00677f60;
extern "C" unsigned long _UNK_00677f64;
extern "C" unsigned long g_00677b28;
extern "C" unsigned long g_00677b2c;
extern "C" unsigned long g_00677b40;
extern "C" unsigned long g_00677b44;
extern "C" unsigned long g_00677b58;
extern "C" unsigned long g_00677b5c;
extern "C" unsigned long g_00677bcc;
extern "C" unsigned long g_00677be6;
extern "C" unsigned long g_00677c18;
extern "C" unsigned long g_00677c1c;
extern "C" unsigned long g_00677c2c;
extern "C" unsigned long g_00677c30;
extern "C" unsigned long g_00677c54;
extern "C" unsigned long g_00677c58;
extern "C" unsigned long g_00677c6a;
extern "C" unsigned long g_00677c98;
extern "C" unsigned long g_00677cc4;
extern "C" unsigned long g_00677cc8;
extern "C" unsigned long g_00677d74;
extern "C" unsigned long g_00677d76;
extern "C" unsigned long g_00677db4;
extern "C" unsigned long g_00677dd4;
extern "C" unsigned long g_00677dfe;
extern "C" unsigned long g_00677f50;
extern "C" unsigned long g_00677f54;
extern "C" unsigned long g_00677f58;
extern "C" unsigned long g_00677f5c;
extern "C" unsigned long g_00677f60;
extern "C" unsigned long g_00677f64;
bool BLUpgraceTitlePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLUpgraceTitlePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceTitlePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceTitlePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceTitlePresenter::tick(float p1)
{
  return;
}

BLUpgraceTitlePresenter::~BLUpgraceTitlePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00677bcc + g_00677c18);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00677be6 + g_00677c1c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLUpgraceTitlePresenter::BLUpgraceTitlePresenter()
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
  iVar3 = *(int *)(&g_00677c6a + g_00677cc4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00677c98 + g_00677cc8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLUpgraceTitlePresenter::create(BLUpgraceTitleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLUpgraceTitlePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLUpgraceTitlePresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLUpgraceTitlePresenter::initWithView(BLUpgraceTitleView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLUpgraceTitlePresenter::updateData(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int aiStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLv();
  pcVar8 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x30))());
  ConvertToString<int>(aiStack_d4, uVar2, 0);
  (*pcVar8)(piVar1,aiStack_d4[0]);
  func_0079e2bc(aiStack_d4);
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(uVar3));
  if ((iVar4 != 0) &&
     (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_00677d74 + (intptr_t)(g_00677f50))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_00677d76 + (intptr_t)(g_00677f54))),0),
     piVar1 != (int *)0x0)) {
    piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvMax();
    pcVar8 = *(code **)(*piVar5 + 0x234);
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x38))(piVar1));
    func_0079e43c(aiStack_d4,0x18);
    func_0079e44c(auStack_cc,uVar2);
    func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_00677db4 + (intptr_t)(g_00677f58)),&iStack_dc);
    func_0079e46c(&iStack_dc,auStack_c8);
    func_0079e2bc(auStack_d8);
    func_0079e47c(aiStack_d4);
    aiStack_d4[0] = *(int *)((unsigned char *)((char *)&g_00677dd4 + (intptr_t)(g_00677f5c))) + 0xc;
    func_0079e934(aiStack_d4,*(int *)(iStack_dc + -0xc) + 1);
    func_0079e944(aiStack_d4,(unsigned char *)((char *)&g_00677dfe + (intptr_t)(g_00677f60)),1);
    func_0079e5dc(aiStack_d4,&iStack_dc);
    (*pcVar8)(piVar5,aiStack_d4[0]);
    func_0079e2bc(aiStack_d4);
    func_0079e2bc(&iStack_dc);
  }
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvTitle();
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))();
  uVar2 = (undefined4)(*puVar6);
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvMax();
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*puVar6)))));
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLv();
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))();
  iVar4 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*puVar6)))));
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getBG();
  pcVar8 = *(code **)(*piVar1 + 0x1d4);
  piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getBG();
  iVar7 = (undefined4)(intptr_t)((**(code **)(*piVar5 + 0x8c))());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar4),(int)(g_00677f64)))));
  0 /* ctorZero */;
  (*pcVar8)(piVar1,aiStack_d4);
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvTitle();
  iVar7 = (int)*(int *)&(*piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar4 + -0x80000000),(int)(0x3f000000)))));
  (**(code **)(iVar7 + 0x5c))(piVar1,uVar2);
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLv();
  pcVar8 = *(code **)(*piVar1 + 0x5c);
  piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvTitle();
  uVar2 = (undefined4)((**(code **)(*piVar5 + 0x60))());
  piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvTitle();
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x8c))();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*puVar6)))));
  (*pcVar8)(piVar1,uVar2);
  piVar1 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLvMax();
  pcVar8 = *(code **)(*piVar1 + 0x5c);
  piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLv();
  uVar2 = (undefined4)((**(code **)(*piVar5 + 0x60))());
  piVar5 = (int *)((BLUpgraceTitleView *)*(undefined4 *)(((int)this) + 0x18))->getLabLv();
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x8c))();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*puVar6)))));
  (*pcVar8)(piVar1,uVar2);
  return;
}

void BLUpgraceTitlePresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

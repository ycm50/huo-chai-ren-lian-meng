#include "BLSharePresenter.h"
#include "BLLeakUtils.h"
#include "BLShareView.h"
#include "CircusData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079ebb4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068634c;
extern "C" unsigned long UNK_00686364;
extern "C" unsigned long UNK_0068637c;
extern "C" unsigned long UNK_00686394;
extern "C" unsigned long UNK_006863ec;
extern "C" unsigned long UNK_00686406;
extern "C" unsigned long UNK_0068644c;
extern "C" unsigned long UNK_00686474;
extern "C" unsigned long UNK_006864ba;
extern "C" unsigned long UNK_006864e8;
extern "C" unsigned long UNK_00686550;
extern "C" unsigned long UNK_0068656c;
extern "C" unsigned long UNK_0068658e;
extern "C" unsigned long UNK_006865b6;
extern "C" unsigned long UNK_006865fa;
extern "C" unsigned long UNK_006866d4;
extern "C" unsigned long UNK_00686738;
extern "C" unsigned long _UNK_00686350;
extern "C" unsigned long _UNK_00686368;
extern "C" unsigned long _UNK_00686380;
extern "C" unsigned long _UNK_00686398;
extern "C" unsigned long _UNK_00686438;
extern "C" unsigned long _UNK_0068643c;
extern "C" unsigned long _UNK_00686450;
extern "C" unsigned long _UNK_00686478;
extern "C" unsigned long _UNK_00686514;
extern "C" unsigned long _UNK_00686518;
extern "C" unsigned long _UNK_00686648;
extern "C" unsigned long _UNK_0068664c;
extern "C" unsigned long _UNK_00686650;
extern "C" unsigned long _UNK_00686654;
extern "C" unsigned long _UNK_00686658;
extern "C" unsigned long _UNK_0068665c;
extern "C" unsigned long _UNK_006866e4;
extern "C" unsigned long _UNK_00686770;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0068634c;
extern "C" unsigned long g_00686350;
extern "C" unsigned long g_00686364;
extern "C" unsigned long g_00686368;
extern "C" unsigned long g_0068637c;
extern "C" unsigned long g_00686380;
extern "C" unsigned long g_00686394;
extern "C" unsigned long g_00686398;
extern "C" unsigned long g_006863ec;
extern "C" unsigned long g_00686406;
extern "C" unsigned long g_00686438;
extern "C" unsigned long g_0068643c;
extern "C" unsigned long g_0068644c;
extern "C" unsigned long g_00686450;
extern "C" unsigned long g_00686474;
extern "C" unsigned long g_00686478;
extern "C" unsigned long g_006864ba;
extern "C" unsigned long g_006864e8;
extern "C" unsigned long g_00686514;
extern "C" unsigned long g_00686518;
extern "C" unsigned long g_00686550;
extern "C" unsigned long g_0068656c;
extern "C" unsigned long g_0068658e;
extern "C" unsigned long g_006865b6;
extern "C" unsigned long g_006865fa;
extern "C" unsigned long g_00686648;
extern "C" unsigned long g_0068664c;
extern "C" unsigned long g_00686650;
extern "C" unsigned long g_00686654;
extern "C" unsigned long g_00686658;
extern "C" unsigned long g_0068665c;
extern "C" unsigned long g_006866d4;
extern "C" unsigned long g_006866e4;
extern "C" unsigned long g_00686738;
extern "C" unsigned long g_00686770;
bool BLSharePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSharePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSharePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSharePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLSharePresenter::~BLSharePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006863ec + g_00686438);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00686406 + g_0068643c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSharePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xf5);
  return;
}

void BLSharePresenter::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(((int)this) + 0x1c) == '\0') {
    uVar1 = (undefined4)(func_0079e57c(*(undefined4 *)(((int)this) + 0x20)));
    *(undefined4 *)(((int)this) + 0x20) = uVar1;
    iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar1),(int)(0))));
    if (iVar2 != 0) {
      *(undefined1 *)(((int)this) + 0x1c) = 1;
    }
  }
  return;
}

BLSharePresenter::BLSharePresenter()
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
  iVar3 = *(int *)(&g_006864ba + g_00686514);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006864e8 + g_00686518,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int BLSharePresenter::create(BLShareView* p1)
{
  int iVar1;
  
  iVar1 = ((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  ((cocos2d::CCObject *)iVar1)->autorelease();
  return iVar1;
}

void BLSharePresenter::initWithView(BLShareView* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar4 = *(int **)(&g_00686550 + g_00686648);
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  iStack_1c = (int)*(int *)&(*piVar4);
  piVar1 = (int *)((BLShareView *)p1)->getBtnClose();
  uStack_54 = (undefined4)(*(undefined4 *)(&g_0068656c + g_0068664c));
  uStack_50 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_54,0,0x20);
  piVar1 = (int *)((BLShareView *)*(undefined4 *)(((int)this) + 0x18))->getBtnShare();
  uStack_48 = (undefined4)(0);
  uStack_4c = (undefined4)(*(undefined4 *)(&g_0068658e + g_00686650));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_4c,0,0x20);
  (void)(((long long)::memset((void *)(auStack_44),(int)(0),(size_t)(0x14))));
  iVar2 = ((CircusData *)this)->getMe();
  (void)(((long long)::sprintf((char *)(auStack_44),(char const *)(&g_006865b6 + g_00686654),*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x8c))));
  piVar1 = (int *)((BLShareView *)*(undefined4 *)(((int)this) + 0x18))->getLabForce();
  (**(code **)(*piVar1 + 0x234))(piVar1,auStack_44);
  auStack_58[0] = 0;
  iVar2 = ((CircusData *)this)->getMe();
  iVar2 = *(int *)(iVar2 + 0x84);
  if ((iVar2 < 1) || (g_00686658 < iVar2)) {
    iVar2 = g_00686658;
  }
  iVar3 = ((CircusData *)this)->getMe();
  (void)(((long long)::sprintf((char *)(auStack_58),(char const *)(&g_006865fa + g_0068665c),iVar2,*(undefined4 *)(iVar3 + 0x74))));
  piVar1 = (int *)((BLShareView *)*(undefined4 *)(((int)this) + 0x18))->getLabRank();
  (**(code **)(*piVar1 + 0x234))(piVar1,auStack_58);
  (void)(((long long)::memset((void *)(auStack_30),(int)(0),(size_t)(0x14))));
  iVar2 = ((CircusData *)this)->getMe();
  func_0079ebb4(auStack_30,*(undefined4 *)(iVar2 + 0xa0));
  piVar1 = (int *)((BLShareView *)*(undefined4 *)(((int)this) + 0x18))->getLabName();
  (**(code **)(*piVar1 + 0x234))(piVar1,auStack_30);
  if (iStack_1c != *piVar4) {
    func_0079e914(1);
  }
  return;
}

void BLSharePresenter::onEnter()
{
  return;
}

void BLSharePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
undefined8 BLSharePresenter::savePicture()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSharePresenter::onShare(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

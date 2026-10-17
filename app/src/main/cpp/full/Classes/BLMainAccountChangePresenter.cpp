#include "BLMainAccountChangePresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountChangeView.h"
#include "BLUpAndDownUtils.h"
#include "CCJson.h"
#include "MainFindPasswordData.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "UIObject.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058a09c;
extern "C" unsigned long UNK_0058a0fe;
extern "C" unsigned long UNK_0058a11c;
extern "C" unsigned long UNK_0058a134;
extern "C" unsigned long UNK_0058a142;
extern "C" unsigned long UNK_0058a166;
extern "C" unsigned long UNK_0058a1a4;
extern "C" unsigned long UNK_0058a1b0;
extern "C" unsigned long UNK_0058a1ba;
extern "C" unsigned long UNK_0058a1c6;
extern "C" unsigned long UNK_0058a1f4;
extern "C" unsigned long UNK_0058a21c;
extern "C" unsigned long UNK_0058a2c0;
extern "C" unsigned long UNK_0058a2fc;
extern "C" unsigned long UNK_0058a346;
extern "C" unsigned long UNK_0058a374;
extern "C" unsigned long UNK_0058a38a;
extern "C" unsigned long UNK_0058a3c2;
extern "C" unsigned long UNK_0058a494;
extern "C" unsigned long UNK_0058a4e4;
extern "C" unsigned long UNK_0058a504;
extern "C" unsigned long UNK_0058a548;
extern "C" unsigned long UNK_0058a570;
extern "C" unsigned long UNK_0058a586;
extern "C" unsigned long UNK_0058a5ba;
extern "C" unsigned long UNK_0058a674;
extern "C" unsigned long UNK_0058a6fe;
extern "C" unsigned long UNK_0058a728;
extern "C" unsigned long UNK_0058a73e;
extern "C" unsigned long UNK_0058a74e;
extern "C" unsigned long UNK_0058a78e;
extern "C" unsigned long UNK_0058a7ae;
extern "C" unsigned long UNK_0058a7e0;
extern "C" unsigned long UNK_0058a81e;
extern "C" unsigned long UNK_0058a848;
extern "C" unsigned long UNK_0058a856;
extern "C" unsigned long UNK_0058a8a0;
extern "C" unsigned long UNK_0058a97a;
extern "C" unsigned long UNK_0058aa20;
extern "C" unsigned long _UNK_0058a0a0;
extern "C" unsigned long _UNK_0058a424;
extern "C" unsigned long _UNK_0058a428;
extern "C" unsigned long _UNK_0058a42c;
extern "C" unsigned long _UNK_0058a430;
extern "C" unsigned long _UNK_0058a434;
extern "C" unsigned long _UNK_0058a438;
extern "C" unsigned long _UNK_0058a43c;
extern "C" unsigned long _UNK_0058a440;
extern "C" unsigned long _UNK_0058a444;
extern "C" unsigned long _UNK_0058a448;
extern "C" unsigned long _UNK_0058a44c;
extern "C" unsigned long _UNK_0058a450;
extern "C" unsigned long _UNK_0058a454;
extern "C" unsigned long _UNK_0058a458;
extern "C" unsigned long _UNK_0058a45c;
extern "C" unsigned long _UNK_0058a460;
extern "C" unsigned long _UNK_0058a464;
extern "C" unsigned long _UNK_0058a468;
extern "C" unsigned long _UNK_0058a46c;
extern "C" unsigned long _UNK_0058a470;
extern "C" unsigned long _UNK_0058a474;
extern "C" unsigned long _UNK_0058a478;
extern "C" unsigned long _UNK_0058a47c;
extern "C" unsigned long _UNK_0058a480;
extern "C" unsigned long _UNK_0058a4c8;
extern "C" unsigned long _UNK_0058a534;
extern "C" unsigned long _UNK_0058a538;
extern "C" unsigned long _UNK_0058a54c;
extern "C" unsigned long _UNK_0058a574;
extern "C" unsigned long _UNK_0058a5e4;
extern "C" unsigned long _UNK_0058a5e8;
extern "C" unsigned long _UNK_0058a6b8;
extern "C" unsigned long _UNK_0058a760;
extern "C" unsigned long _UNK_0058a764;
extern "C" unsigned long _UNK_0058a768;
extern "C" unsigned long _UNK_0058a76c;
extern "C" unsigned long _UNK_0058a7c8;
extern "C" unsigned long _UNK_0058a7cc;
extern "C" unsigned long _UNK_0058a9fc;
extern "C" unsigned long _UNK_0058aa00;
extern "C" unsigned long _UNK_0058aa04;
extern "C" unsigned long _UNK_0058aa08;
extern "C" unsigned long _UNK_0058aa0c;
extern "C" unsigned long _UNK_0058aa10;
extern "C" unsigned long _UNK_0058aa24;
extern "C" unsigned long g_0058a09c;
extern "C" unsigned long g_0058a0a0;
extern "C" unsigned long g_0058a0fe;
extern "C" unsigned long g_0058a11c;
extern "C" unsigned long g_0058a134;
extern "C" unsigned long g_0058a142;
extern "C" unsigned long g_0058a166;
extern "C" unsigned long g_0058a1a4;
extern "C" unsigned long g_0058a1b0;
extern "C" unsigned long g_0058a1ba;
extern "C" unsigned long g_0058a1c6;
extern "C" unsigned long g_0058a1f4;
extern "C" unsigned long g_0058a21c;
extern "C" unsigned long g_0058a2c0;
extern "C" unsigned long g_0058a2fc;
extern "C" unsigned long g_0058a346;
extern "C" unsigned long g_0058a374;
extern "C" unsigned long g_0058a38a;
extern "C" unsigned long g_0058a3c2;
extern "C" unsigned long g_0058a424;
extern "C" unsigned long g_0058a428;
extern "C" unsigned long g_0058a42c;
extern "C" unsigned long g_0058a430;
extern "C" unsigned long g_0058a434;
extern "C" unsigned long g_0058a438;
extern "C" unsigned long g_0058a43c;
extern "C" unsigned long g_0058a440;
extern "C" unsigned long g_0058a444;
extern "C" unsigned long g_0058a448;
extern "C" unsigned long g_0058a44c;
extern "C" unsigned long g_0058a450;
extern "C" unsigned long g_0058a454;
extern "C" unsigned long g_0058a458;
extern "C" unsigned long g_0058a45c;
extern "C" unsigned long g_0058a460;
extern "C" unsigned long g_0058a464;
extern "C" unsigned long g_0058a468;
extern "C" unsigned long g_0058a46c;
extern "C" unsigned long g_0058a470;
extern "C" unsigned long g_0058a474;
extern "C" unsigned long g_0058a478;
extern "C" unsigned long g_0058a47c;
extern "C" unsigned long g_0058a480;
extern "C" unsigned long g_0058a494;
extern "C" unsigned long g_0058a4c8;
extern "C" unsigned long g_0058a4e4;
extern "C" unsigned long g_0058a504;
extern "C" unsigned long g_0058a534;
extern "C" unsigned long g_0058a538;
extern "C" unsigned long g_0058a548;
extern "C" unsigned long g_0058a54c;
extern "C" unsigned long g_0058a570;
extern "C" unsigned long g_0058a574;
extern "C" unsigned long g_0058a586;
extern "C" unsigned long g_0058a5ba;
extern "C" unsigned long g_0058a5e4;
extern "C" unsigned long g_0058a5e8;
extern "C" unsigned long g_0058a674;
extern "C" unsigned long g_0058a6b8;
extern "C" unsigned long g_0058a6fe;
extern "C" unsigned long g_0058a728;
extern "C" unsigned long g_0058a73e;
extern "C" unsigned long g_0058a74e;
extern "C" unsigned long g_0058a760;
extern "C" unsigned long g_0058a764;
extern "C" unsigned long g_0058a768;
extern "C" unsigned long g_0058a76c;
extern "C" unsigned long g_0058a78e;
extern "C" unsigned long g_0058a7ae;
extern "C" unsigned long g_0058a7c8;
extern "C" unsigned long g_0058a7cc;
extern "C" unsigned long g_0058a7e0;
extern "C" unsigned long g_0058a81e;
extern "C" unsigned long g_0058a848;
extern "C" unsigned long g_0058a856;
extern "C" unsigned long g_0058a8a0;
extern "C" unsigned long g_0058a97a;
extern "C" unsigned long g_0058a9fc;
extern "C" unsigned long g_0058aa00;
extern "C" unsigned long g_0058aa04;
extern "C" unsigned long g_0058aa08;
extern "C" unsigned long g_0058aa0c;
extern "C" unsigned long g_0058aa10;
extern "C" unsigned long g_0058aa20;
extern "C" unsigned long g_0058aa24;
bool BLMainAccountChangePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountChangePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountChangePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountChangePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountChangePresenter::onCheckSuccess(MainFindPasswordData* p1)
{
  return;
}

void BLMainAccountChangePresenter::tick(float p1)
{
  return;
}


void BLMainAccountChangePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x9b);
  return;
}

BLMainAccountChangePresenter::~BLMainAccountChangePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058a4e4 + g_0058a534);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(9)) = iVar2 + 0x70;
  *(int *)((int)this + 4*(10)) = iVar2 + 0xa0;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058a504 + g_0058a538,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  UIObject::~UIObject();
  return;
}

BLMainAccountChangePresenter::BLMainAccountChangePresenter()
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
  iVar3 = *(int *)(&g_0058a586 + g_0058a5e4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(9)) = iVar3 + 0x70;
  *(int *)((int)this + 4*(10)) = iVar3 + 0xa0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 9, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058a5ba + g_0058a5e8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccountChangePresenter::create(BLMainAccountChangeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountChangePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x24));
  return;
}

void BLMainAccountChangePresenter::onEnter()
{
  return;
}


void BLMainAccountChangePresenter::onQuite(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x9b);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMainAccountChangePresenter::onCallBackLogin(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainAccountChangePresenter::IsValidPass(std::string * p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  func_0079e53c(auStack_1c);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  func_0079e2bc(auStack_1c);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0058a674 + (intptr_t)(g_0058a6b8)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    bVar4 = (undefined4)(intptr_t)(false);
  }
  else {
    bVar4 = (undefined4)(intptr_t)(false);
    if (5 < *(uint *)(*(int *)p1 + -0xc)) {
      bVar4 = (undefined4)(intptr_t)(*(uint *)(*(int *)p1 + -0xc) < 0xd);
    }
  }
  return bVar4;
}

void BLMainAccountChangePresenter::resetUserPassword()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAccountChangePresenter::initWithView(BLMainAccountChangeView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x2c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccountChangeView *)(p1))->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0058a78e + (intptr_t)(g_0058a7c8))),0,0x20);
  piVar1 = (int *)((BLMainAccountChangeView *)(*(undefined4 *)(((int)this) + 0x2c)))->getBtnLogin();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0058a7ae + (intptr_t)(g_0058a7cc))),0,0x20);
  uVar2 = (undefined4)(((sir::singleton<MainFindPasswordData, 0> *)this)->instance());
  ((MainFindPasswordData *)(uVar2))->setCheckDelegate((CEMainFindPasswordDataDelegate*)((int)this + 0x28));
  return;
}

void BLMainAccountChangePresenter::onRePassWord(MainFindPasswordData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

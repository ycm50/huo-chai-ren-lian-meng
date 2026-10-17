#include "BLMainAccountZhuCePresenter.h"
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
#include "BLMainAccountZhuCeView.h"
#include "CCJson.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058b78c;
extern "C" unsigned long UNK_0058b7a6;
extern "C" unsigned long UNK_0058b7ec;
extern "C" unsigned long UNK_0058b814;
extern "C" unsigned long UNK_0058b83a;
extern "C" unsigned long UNK_0058b858;
extern "C" unsigned long UNK_0058b872;
extern "C" unsigned long UNK_0058b89c;
extern "C" unsigned long UNK_0058b8e0;
extern "C" unsigned long UNK_0058b90e;
extern "C" unsigned long UNK_0058b918;
extern "C" unsigned long UNK_0058b924;
extern "C" unsigned long UNK_0058b952;
extern "C" unsigned long UNK_0058b96c;
extern "C" unsigned long UNK_0058b984;
extern "C" unsigned long UNK_0058ba34;
extern "C" unsigned long UNK_0058ba70;
extern "C" unsigned long UNK_0058babc;
extern "C" unsigned long UNK_0058bae4;
extern "C" unsigned long UNK_0058bafa;
extern "C" unsigned long UNK_0058bb08;
extern "C" unsigned long UNK_0058bb1c;
extern "C" unsigned long UNK_0058bb28;
extern "C" unsigned long UNK_0058bbae;
extern "C" unsigned long UNK_0058bc3e;
extern "C" unsigned long UNK_0058bc6c;
extern "C" unsigned long UNK_0058bcfe;
extern "C" unsigned long UNK_0058bd1e;
extern "C" unsigned long UNK_0058bdfa;
extern "C" unsigned long UNK_0058be06;
extern "C" unsigned long UNK_0058be6c;
extern "C" unsigned long UNK_0058bee4;
extern "C" unsigned long UNK_0058bef4;
extern "C" unsigned long UNK_0058bf22;
extern "C" unsigned long UNK_0058bf4c;
extern "C" unsigned long UNK_0058bf62;
extern "C" unsigned long UNK_0058bf72;
extern "C" unsigned long UNK_0058bf9a;
extern "C" unsigned long UNK_0058bfc8;
extern "C" unsigned long UNK_0058bfee;
extern "C" unsigned long UNK_0058c02e;
extern "C" unsigned long UNK_0058c050;
extern "C" unsigned long UNK_0058c060;
extern "C" unsigned long UNK_0058c0a8;
extern "C" unsigned long UNK_0058c180;
extern "C" unsigned long _UNK_0058b7d8;
extern "C" unsigned long _UNK_0058b7dc;
extern "C" unsigned long _UNK_0058b7f0;
extern "C" unsigned long _UNK_0058b818;
extern "C" unsigned long _UNK_0058bb40;
extern "C" unsigned long _UNK_0058bb44;
extern "C" unsigned long _UNK_0058bb48;
extern "C" unsigned long _UNK_0058bb4c;
extern "C" unsigned long _UNK_0058bb50;
extern "C" unsigned long _UNK_0058bb54;
extern "C" unsigned long _UNK_0058bb58;
extern "C" unsigned long _UNK_0058bb5c;
extern "C" unsigned long _UNK_0058bb60;
extern "C" unsigned long _UNK_0058bb64;
extern "C" unsigned long _UNK_0058bb68;
extern "C" unsigned long _UNK_0058bb6c;
extern "C" unsigned long _UNK_0058bb70;
extern "C" unsigned long _UNK_0058bb74;
extern "C" unsigned long _UNK_0058bb78;
extern "C" unsigned long _UNK_0058bb7c;
extern "C" unsigned long _UNK_0058bb80;
extern "C" unsigned long _UNK_0058bb84;
extern "C" unsigned long _UNK_0058bb88;
extern "C" unsigned long _UNK_0058bb8c;
extern "C" unsigned long _UNK_0058bb90;
extern "C" unsigned long _UNK_0058bb94;
extern "C" unsigned long _UNK_0058bb98;
extern "C" unsigned long _UNK_0058bb9c;
extern "C" unsigned long _UNK_0058bba0;
extern "C" unsigned long _UNK_0058bc24;
extern "C" unsigned long _UNK_0058bc28;
extern "C" unsigned long _UNK_0058bc2c;
extern "C" unsigned long _UNK_0058bc98;
extern "C" unsigned long _UNK_0058bc9c;
extern "C" unsigned long _UNK_0058bd34;
extern "C" unsigned long _UNK_0058bd38;
extern "C" unsigned long _UNK_0058be18;
extern "C" unsigned long _UNK_0058be1c;
extern "C" unsigned long _UNK_0058beb0;
extern "C" unsigned long _UNK_0058c214;
extern "C" unsigned long _UNK_0058c218;
extern "C" unsigned long _UNK_0058c21c;
extern "C" unsigned long _UNK_0058c220;
extern "C" unsigned long _UNK_0058c224;
extern "C" unsigned long _UNK_0058c228;
extern "C" unsigned long _UNK_0058c22c;
extern "C" unsigned long _UNK_0058c230;
extern "C" unsigned long _UNK_0058c234;
extern "C" unsigned long _UNK_0058c238;
extern "C" unsigned long _UNK_0058c23c;
extern "C" unsigned long _UNK_0058c240;
extern "C" unsigned long _UNK_0058c244;
extern "C" unsigned long _UNK_0058c248;
extern "C" unsigned long g_0058b78c;
extern "C" unsigned long g_0058b7a6;
extern "C" unsigned long g_0058b7d8;
extern "C" unsigned long g_0058b7dc;
extern "C" unsigned long g_0058b7ec;
extern "C" unsigned long g_0058b7f0;
extern "C" unsigned long g_0058b814;
extern "C" unsigned long g_0058b818;
extern "C" unsigned long g_0058b83a;
extern "C" unsigned long g_0058b858;
extern "C" unsigned long g_0058b872;
extern "C" unsigned long g_0058b89c;
extern "C" unsigned long g_0058b8e0;
extern "C" unsigned long g_0058b90e;
extern "C" unsigned long g_0058b918;
extern "C" unsigned long g_0058b924;
extern "C" unsigned long g_0058b952;
extern "C" unsigned long g_0058b96c;
extern "C" unsigned long g_0058b984;
extern "C" unsigned long g_0058ba34;
extern "C" unsigned long g_0058ba70;
extern "C" unsigned long g_0058babc;
extern "C" unsigned long g_0058bae4;
extern "C" unsigned long g_0058bafa;
extern "C" unsigned long g_0058bb08;
extern "C" unsigned long g_0058bb1c;
extern "C" unsigned long g_0058bb28;
extern "C" unsigned long g_0058bb40;
extern "C" unsigned long g_0058bb44;
extern "C" unsigned long g_0058bb48;
extern "C" unsigned long g_0058bb4c;
extern "C" unsigned long g_0058bb50;
extern "C" unsigned long g_0058bb54;
extern "C" unsigned long g_0058bb58;
extern "C" unsigned long g_0058bb5c;
extern "C" unsigned long g_0058bb60;
extern "C" unsigned long g_0058bb64;
extern "C" unsigned long g_0058bb68;
extern "C" unsigned long g_0058bb6c;
extern "C" unsigned long g_0058bb70;
extern "C" unsigned long g_0058bb74;
extern "C" unsigned long g_0058bb78;
extern "C" unsigned long g_0058bb7c;
extern "C" unsigned long g_0058bb80;
extern "C" unsigned long g_0058bb84;
extern "C" unsigned long g_0058bb88;
extern "C" unsigned long g_0058bb8c;
extern "C" unsigned long g_0058bb90;
extern "C" unsigned long g_0058bb94;
extern "C" unsigned long g_0058bb98;
extern "C" unsigned long g_0058bb9c;
extern "C" unsigned long g_0058bba0;
extern "C" unsigned long g_0058bbae;
extern "C" unsigned long g_0058bc24;
extern "C" unsigned long g_0058bc28;
extern "C" unsigned long g_0058bc2c;
extern "C" unsigned long g_0058bc3e;
extern "C" unsigned long g_0058bc6c;
extern "C" unsigned long g_0058bc98;
extern "C" unsigned long g_0058bc9c;
extern "C" unsigned long g_0058bcfe;
extern "C" unsigned long g_0058bd1e;
extern "C" unsigned long g_0058bd34;
extern "C" unsigned long g_0058bd38;
extern "C" unsigned long g_0058bdfa;
extern "C" unsigned long g_0058be06;
extern "C" unsigned long g_0058be18;
extern "C" unsigned long g_0058be1c;
extern "C" unsigned long g_0058be6c;
extern "C" unsigned long g_0058beb0;
extern "C" unsigned long g_0058bee4;
extern "C" unsigned long g_0058bef4;
extern "C" unsigned long g_0058bf22;
extern "C" unsigned long g_0058bf4c;
extern "C" unsigned long g_0058bf62;
extern "C" unsigned long g_0058bf72;
extern "C" unsigned long g_0058bf9a;
extern "C" unsigned long g_0058bfc8;
extern "C" unsigned long g_0058bfee;
extern "C" unsigned long g_0058c02e;
extern "C" unsigned long g_0058c050;
extern "C" unsigned long g_0058c060;
extern "C" unsigned long g_0058c0a8;
extern "C" unsigned long g_0058c180;
extern "C" unsigned long g_0058c214;
extern "C" unsigned long g_0058c218;
extern "C" unsigned long g_0058c21c;
extern "C" unsigned long g_0058c220;
extern "C" unsigned long g_0058c224;
extern "C" unsigned long g_0058c228;
extern "C" unsigned long g_0058c22c;
extern "C" unsigned long g_0058c230;
extern "C" unsigned long g_0058c234;
extern "C" unsigned long g_0058c238;
extern "C" unsigned long g_0058c23c;
extern "C" unsigned long g_0058c240;
extern "C" unsigned long g_0058c244;
extern "C" unsigned long g_0058c248;
bool BLMainAccountZhuCePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountZhuCePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountZhuCePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountZhuCePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountZhuCePresenter::tick(float p1)
{
  return;
}

BLMainAccountZhuCePresenter::~BLMainAccountZhuCePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058b78c + g_0058b7d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058b7a6 + g_0058b7dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccountZhuCePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x58);
  return;
}


BLMainAccountZhuCePresenter::BLMainAccountZhuCePresenter()
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
  iVar3 = *(int *)(&g_0058bc3e + g_0058bc98);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058bc6c + g_0058bc9c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccountZhuCePresenter::create(BLMainAccountZhuCeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountZhuCePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainAccountZhuCePresenter::onEnter()
{
  return;
}

void BLMainAccountZhuCePresenter::updateInfo()
{
  return;
}


bool BLMainAccountZhuCePresenter::IsValidChar(char p1)
{
  bool bVar1;
  
  bVar1 = true;
  if ((((0x19 < (p1 & 0xffffffdf) - 0x41) && (9 < p1 - 0x30)) && (p1 != 0x5f)) &&
     (1 < p1 - 0x2d)) {
    bVar1 = p1 == 0x40;
  }
  return bVar1;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMainAccountZhuCePresenter::onCallBackZhuCe(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAccountZhuCePresenter::initWithView(BLMainAccountZhuCeView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccountZhuCeView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058bcfe + g_0058bd34),0,0x20);
  piVar1 = (int *)((BLMainAccountZhuCeView *)*(undefined4 *)(((int)this) + 0x18))->getBtnZhuCe();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058bd1e + g_0058bd38),0,0x20);
  BLMainAccountZhuCePresenter::updateInfo();
  return;
}

undefined8 BLMainAccountZhuCePresenter::IsValidEmail(std::string * p1)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_20;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  if (4 < *(uint *)(*(int *)p1 + -0xc)) {
    func_0079e66c(p1);
    uVar1 = (undefined4)((uint)*(byte *)*(int *)p1);
    if (((uVar1 & 0xffffffdf) - 0x41 < 0x1a) || (uVar1 - 0x30 < 10)) {
      iVar3 = 0;
      iStack_20 = 0;
      for (uVar4 = 1; uVar4 < *(uint *)(*(int *)p1 + -0xc); uVar4 = uVar4 + 1) {
        func_0079e66c(p1);
        uVar1 = (undefined4)((uint)*(byte *)(*(int *)p1 + uVar4));
        iVar2 = (undefined4)(intptr_t)(((BLMainAccountZhuCePresenter *)(((int)this)))->IsValidChar(uVar1));
        if (iVar2 == 0) goto code_r0x0058bd74;
        if (uVar1 == 0x40) {
          iStack_20 = (undefined4)(intptr_t)(iStack_20 + 1);
        }
        else if (iStack_20 != 0) {
          iVar3 = (undefined4)(intptr_t)(iVar3 + (uint)(uVar1 == 0x2e));
        }
      }
      if ((((uVar1 != 0x2e) && (iStack_20 == 1)) && (iVar3 != 0)) && (iVar3 < 4)) {
        iVar3 = (undefined4)(intptr_t)(func_0079e804(p1,(unsigned char *)((char *)&g_0058bdfa + (intptr_t)(g_0058be18)),0));
        uVar1 = (undefined4)(func_0079e804(p1,(unsigned char *)((char *)&g_0058be06 + (intptr_t)(g_0058be1c)),0));
        if (iVar3 < 1) {
          uVar1 = (undefined4)((uVar1 | uVar1 - 1) >> 0x1f);
          goto code_r0x0058be16;
        }
      }
    }
  }
code_r0x0058bd74:
  uVar1 = (undefined4)(0);
code_r0x0058be16:
  return ghidra_CONCAT44(iStack_20,uVar1);
}

bool BLMainAccountZhuCePresenter::IsValidPass(std::string * p1)
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
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0058be6c + (intptr_t)(g_0058beb0)),auStack_24);
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

void BLMainAccountZhuCePresenter::onZhuCe(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

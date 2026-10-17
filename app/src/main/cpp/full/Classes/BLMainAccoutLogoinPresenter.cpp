#include "BLMainAccoutLogoinPresenter.h"
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
#include "BLMainAccoutLogoinView.h"
#include "BLUpAndDownUtils.h"
#include "CCJson.h"
#include "MainFindPasswordData.h"
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
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
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
extern "C" unsigned long UNK_0058c644;
extern "C" unsigned long UNK_0058c6a0;
extern "C" unsigned long UNK_0058c6c0;
extern "C" unsigned long UNK_0058c704;
extern "C" unsigned long UNK_0058c72c;
extern "C" unsigned long UNK_0058c758;
extern "C" unsigned long UNK_0058c77e;
extern "C" unsigned long UNK_0058c79c;
extern "C" unsigned long UNK_0058c7b4;
extern "C" unsigned long UNK_0058c7c2;
extern "C" unsigned long UNK_0058c7e6;
extern "C" unsigned long UNK_0058c824;
extern "C" unsigned long UNK_0058c830;
extern "C" unsigned long UNK_0058c83a;
extern "C" unsigned long UNK_0058c846;
extern "C" unsigned long UNK_0058c874;
extern "C" unsigned long UNK_0058c8a0;
extern "C" unsigned long UNK_0058c8fc;
extern "C" unsigned long UNK_0058c938;
extern "C" unsigned long UNK_0058c99e;
extern "C" unsigned long UNK_0058c9de;
extern "C" unsigned long UNK_0058ca3a;
extern "C" unsigned long UNK_0058cb36;
extern "C" unsigned long UNK_0058cb6a;
extern "C" unsigned long UNK_0058cbfa;
extern "C" unsigned long UNK_0058cc1a;
extern "C" unsigned long UNK_0058cc38;
extern "C" unsigned long UNK_0058cd16;
extern "C" unsigned long UNK_0058cd22;
extern "C" unsigned long UNK_0058cd88;
extern "C" unsigned long UNK_0058cdf0;
extern "C" unsigned long UNK_0058ce0a;
extern "C" unsigned long UNK_0058ce4a;
extern "C" unsigned long UNK_0058ce74;
extern "C" unsigned long UNK_0058ce84;
extern "C" unsigned long UNK_0058cecc;
extern "C" unsigned long UNK_0058cfa8;
extern "C" unsigned long UNK_0058d05a;
extern "C" unsigned long UNK_0058d05c;
extern "C" unsigned long _UNK_0058c648;
extern "C" unsigned long _UNK_0058c6f0;
extern "C" unsigned long _UNK_0058c6f4;
extern "C" unsigned long _UNK_0058c708;
extern "C" unsigned long _UNK_0058c730;
extern "C" unsigned long _UNK_0058c75c;
extern "C" unsigned long _UNK_0058cab8;
extern "C" unsigned long _UNK_0058cabc;
extern "C" unsigned long _UNK_0058cac0;
extern "C" unsigned long _UNK_0058cac4;
extern "C" unsigned long _UNK_0058cac8;
extern "C" unsigned long _UNK_0058cacc;
extern "C" unsigned long _UNK_0058cad0;
extern "C" unsigned long _UNK_0058cad4;
extern "C" unsigned long _UNK_0058cad8;
extern "C" unsigned long _UNK_0058cadc;
extern "C" unsigned long _UNK_0058cae0;
extern "C" unsigned long _UNK_0058cae4;
extern "C" unsigned long _UNK_0058cae8;
extern "C" unsigned long _UNK_0058caec;
extern "C" unsigned long _UNK_0058caf0;
extern "C" unsigned long _UNK_0058caf4;
extern "C" unsigned long _UNK_0058caf8;
extern "C" unsigned long _UNK_0058cafc;
extern "C" unsigned long _UNK_0058cb00;
extern "C" unsigned long _UNK_0058cb04;
extern "C" unsigned long _UNK_0058cb08;
extern "C" unsigned long _UNK_0058cb0c;
extern "C" unsigned long _UNK_0058cb10;
extern "C" unsigned long _UNK_0058cb94;
extern "C" unsigned long _UNK_0058cb98;
extern "C" unsigned long _UNK_0058cc4c;
extern "C" unsigned long _UNK_0058cc50;
extern "C" unsigned long _UNK_0058cc54;
extern "C" unsigned long _UNK_0058cd34;
extern "C" unsigned long _UNK_0058cd38;
extern "C" unsigned long _UNK_0058cdcc;
extern "C" unsigned long _UNK_0058d02c;
extern "C" unsigned long _UNK_0058d030;
extern "C" unsigned long _UNK_0058d034;
extern "C" unsigned long _UNK_0058d038;
extern "C" unsigned long _UNK_0058d03c;
extern "C" unsigned long _UNK_0058d040;
extern "C" unsigned long _UNK_0058d044;
extern "C" unsigned long _UNK_0058d06c;
extern "C" unsigned long _UNK_0058d070;
extern "C" unsigned long g_0058c644;
extern "C" unsigned long g_0058c648;
extern "C" unsigned long g_0058c6a0;
extern "C" unsigned long g_0058c6c0;
extern "C" unsigned long g_0058c6f0;
extern "C" unsigned long g_0058c6f4;
extern "C" unsigned long g_0058c704;
extern "C" unsigned long g_0058c708;
extern "C" unsigned long g_0058c72c;
extern "C" unsigned long g_0058c730;
extern "C" unsigned long g_0058c758;
extern "C" unsigned long g_0058c75c;
extern "C" unsigned long g_0058c77e;
extern "C" unsigned long g_0058c79c;
extern "C" unsigned long g_0058c7b4;
extern "C" unsigned long g_0058c7c2;
extern "C" unsigned long g_0058c7e6;
extern "C" unsigned long g_0058c824;
extern "C" unsigned long g_0058c830;
extern "C" unsigned long g_0058c83a;
extern "C" unsigned long g_0058c846;
extern "C" unsigned long g_0058c874;
extern "C" unsigned long g_0058c8a0;
extern "C" unsigned long g_0058c8fc;
extern "C" unsigned long g_0058c938;
extern "C" unsigned long g_0058c99e;
extern "C" unsigned long g_0058c9de;
extern "C" unsigned long g_0058ca3a;
extern "C" unsigned long g_0058cab8;
extern "C" unsigned long g_0058cabc;
extern "C" unsigned long g_0058cac0;
extern "C" unsigned long g_0058cac4;
extern "C" unsigned long g_0058cac8;
extern "C" unsigned long g_0058cacc;
extern "C" unsigned long g_0058cad0;
extern "C" unsigned long g_0058cad4;
extern "C" unsigned long g_0058cad8;
extern "C" unsigned long g_0058cadc;
extern "C" unsigned long g_0058cae0;
extern "C" unsigned long g_0058cae4;
extern "C" unsigned long g_0058cae8;
extern "C" unsigned long g_0058caec;
extern "C" unsigned long g_0058caf0;
extern "C" unsigned long g_0058caf4;
extern "C" unsigned long g_0058caf8;
extern "C" unsigned long g_0058cafc;
extern "C" unsigned long g_0058cb00;
extern "C" unsigned long g_0058cb04;
extern "C" unsigned long g_0058cb08;
extern "C" unsigned long g_0058cb0c;
extern "C" unsigned long g_0058cb10;
extern "C" unsigned long g_0058cb36;
extern "C" unsigned long g_0058cb6a;
extern "C" unsigned long g_0058cb94;
extern "C" unsigned long g_0058cb98;
extern "C" unsigned long g_0058cbfa;
extern "C" unsigned long g_0058cc1a;
extern "C" unsigned long g_0058cc38;
extern "C" unsigned long g_0058cc4c;
extern "C" unsigned long g_0058cc50;
extern "C" unsigned long g_0058cc54;
extern "C" unsigned long g_0058cd16;
extern "C" unsigned long g_0058cd22;
extern "C" unsigned long g_0058cd34;
extern "C" unsigned long g_0058cd38;
extern "C" unsigned long g_0058cd88;
extern "C" unsigned long g_0058cdcc;
extern "C" unsigned long g_0058cdf0;
extern "C" unsigned long g_0058ce0a;
extern "C" unsigned long g_0058ce4a;
extern "C" unsigned long g_0058ce74;
extern "C" unsigned long g_0058ce84;
extern "C" unsigned long g_0058cecc;
extern "C" unsigned long g_0058cfa8;
extern "C" unsigned long g_0058d02c;
extern "C" unsigned long g_0058d030;
extern "C" unsigned long g_0058d034;
extern "C" unsigned long g_0058d038;
extern "C" unsigned long g_0058d03c;
extern "C" unsigned long g_0058d040;
extern "C" unsigned long g_0058d044;
extern "C" unsigned long g_0058d05a;
extern "C" unsigned long g_0058d05c;
extern "C" unsigned long g_0058d06c;
extern "C" unsigned long g_0058d070;
bool BLMainAccoutLogoinPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccoutLogoinPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutLogoinPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutLogoinPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutLogoinPresenter::onRePassWord(MainFindPasswordData* p1)
{
  return;
}

void BLMainAccoutLogoinPresenter::tick(float p1)
{
  return;
}

BLMainAccoutLogoinPresenter::~BLMainAccoutLogoinPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058c6a0 + g_0058c6f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x74;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058c6c0 + g_0058c6f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccoutLogoinPresenter::onCheckSuccess(MainFindPasswordData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x9b);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x59);
  return;
}

void BLMainAccoutLogoinPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x59);
  return;
}


BLMainAccoutLogoinPresenter::BLMainAccoutLogoinPresenter()
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
  iVar3 = *(int *)(&g_0058cb36 + g_0058cb94);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x74;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058cb6a + g_0058cb98,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccoutLogoinPresenter::create(BLMainAccoutLogoinView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccoutLogoinPresenter::onEnter()
{
  return;
}

void BLMainAccoutLogoinPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  return;
}

void BLMainAccoutLogoinPresenter::onFindPassword(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMainAccoutLogoinPresenter::updateInfo()
{
  return;
}


bool BLMainAccoutLogoinPresenter::IsValidChar(char p1)
{
  bool bVar1;
  
  bVar1 = true;
  if ((((0x19 < (p1 & 0xffffffdf) - 0x41) && (9 < p1 - 0x30)) && (p1 != 0x5f)) &&
     (1 < p1 - 0x2d)) {
    bVar1 = p1 == 0x40;
  }
  return bVar1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLMainAccoutLogoinPresenter::onCallBackLogin(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAccoutLogoinPresenter::initWithView(BLMainAccoutLogoinView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccoutLogoinView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058cbfa + g_0058cc4c),0,0x20);
  piVar1 = (int *)((BLMainAccoutLogoinView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnLogin();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058cc1a + g_0058cc50),0,0x20);
  piVar1 = (int *)((BLMainAccoutLogoinView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnFindPassword()
  ;
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058cc38 + g_0058cc54),0,0x20);
  BLMainAccoutLogoinPresenter::updateInfo();
  return;
}

undefined8 BLMainAccoutLogoinPresenter::IsValidEmail(std::string * p1)
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
        iVar2 = (undefined4)(intptr_t)(((BLMainAccoutLogoinPresenter *)(((int)this)))->IsValidChar(uVar1));
        if (iVar2 == 0) goto code_r0x0058cc90;
        if (uVar1 == 0x40) {
          iStack_20 = (undefined4)(intptr_t)(iStack_20 + 1);
        }
        else if (iStack_20 != 0) {
          iVar3 = (undefined4)(intptr_t)(iVar3 + (uint)(uVar1 == 0x2e));
        }
      }
      if ((((uVar1 != 0x2e) && (iStack_20 == 1)) && (iVar3 != 0)) && (iVar3 < 4)) {
        iVar3 = (undefined4)(intptr_t)(func_0079e804(p1,(unsigned char *)((char *)&g_0058cd16 + (intptr_t)(g_0058cd34)),0));
        uVar1 = (undefined4)(func_0079e804(p1,(unsigned char *)((char *)&g_0058cd22 + (intptr_t)(g_0058cd38)),0));
        if (iVar3 < 1) {
          uVar1 = (undefined4)((uVar1 | uVar1 - 1) >> 0x1f);
          goto code_r0x0058cd32;
        }
      }
    }
  }
code_r0x0058cc90:
  uVar1 = (undefined4)(0);
code_r0x0058cd32:
  return ghidra_CONCAT44(iStack_20,uVar1);
}

bool BLMainAccoutLogoinPresenter::IsValidPass(std::string * p1)
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
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0058cd88 + (intptr_t)(g_0058cdcc)),auStack_24);
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

void BLMainAccoutLogoinPresenter::onLogin(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAccoutLogoinPresenter::changeAccount(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((sir::singleton<MainFindPasswordData, 0> *)this)->instance());
  ((MainFindPasswordData *)(uVar1))->GetDataFromNet((char const*)(unsigned char *)((char *)&g_0058d05c + (intptr_t)(g_0058d06c)), (char const*)(unsigned char *)((char *)&g_0058d05a + (intptr_t)(g_0058d070)), 1);
  uVar1 = (undefined4)(((sir::singleton<MainFindPasswordData, 0> *)this)->instance());
  ((MainFindPasswordData *)(uVar1))->setCheckDelegate((CEMainFindPasswordDataDelegate*)((int)this + 0x18));
  return;
}

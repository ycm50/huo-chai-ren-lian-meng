#include "PKRankRewardItemPresenter.h"
#include "CCDictionary.h"
#include "BLForwards.h"
#include "CCNode.h"
#include "CCNotificationCenter.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "HttpUtil.h"
#include "PKData.h"
#include "PKRankRewardItemNumItem.h"
#include "PKRankRewardItemView.h"
#include "PKRankRewardResultPresenter.h"
#include "PKRankRewardResultView.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006206c8;
extern "C" unsigned long UNK_006206dc;
extern "C" unsigned long UNK_0062076e;
extern "C" unsigned long UNK_00620770;
extern "C" unsigned long UNK_0062078e;
extern "C" unsigned long UNK_006207a4;
extern "C" unsigned long UNK_006207de;
extern "C" unsigned long UNK_006207fa;
extern "C" unsigned long UNK_0062081e;
extern "C" unsigned long UNK_00620822;
extern "C" unsigned long UNK_006208a0;
extern "C" unsigned long UNK_006208ba;
extern "C" unsigned long UNK_00620912;
extern "C" unsigned long UNK_00620948;
extern "C" unsigned long UNK_00620980;
extern "C" unsigned long UNK_006209c8;
extern "C" unsigned long UNK_00620a04;
extern "C" unsigned long UNK_00620a8a;
extern "C" unsigned long UNK_00620ae4;
extern "C" unsigned long UNK_00620b44;
extern "C" unsigned long UNK_00620c92;
extern "C" unsigned long UNK_00620cde;
extern "C" unsigned long UNK_00620cfc;
extern "C" unsigned long UNK_00620d18;
extern "C" unsigned long UNK_00620d96;
extern "C" unsigned long UNK_00620db6;
extern "C" unsigned long UNK_00620db8;
extern "C" unsigned long UNK_00620dec;
extern "C" unsigned long UNK_00620e06;
extern "C" unsigned long UNK_00620e1a;
extern "C" unsigned long UNK_00620e50;
extern "C" unsigned long UNK_00620e84;
extern "C" unsigned long UNK_00620e92;
extern "C" unsigned long _UNK_00620718;
extern "C" unsigned long _UNK_0062071c;
extern "C" unsigned long _UNK_006207b8;
extern "C" unsigned long _UNK_006207bc;
extern "C" unsigned long _UNK_006207c0;
extern "C" unsigned long _UNK_006207c4;
extern "C" unsigned long _UNK_006207c8;
extern "C" unsigned long _UNK_00620844;
extern "C" unsigned long _UNK_00620848;
extern "C" unsigned long _UNK_0062084c;
extern "C" unsigned long _UNK_00620850;
extern "C" unsigned long _UNK_006208a8;
extern "C" unsigned long _UNK_00620be8;
extern "C" unsigned long _UNK_00620bec;
extern "C" unsigned long _UNK_00620bf0;
extern "C" unsigned long _UNK_00620bf4;
extern "C" unsigned long _UNK_00620bf8;
extern "C" unsigned long _UNK_00620bfc;
extern "C" unsigned long _UNK_00620c00;
extern "C" unsigned long _UNK_00620c04;
extern "C" unsigned long _UNK_00620c08;
extern "C" unsigned long _UNK_00620ccc;
extern "C" unsigned long _UNK_00620d5c;
extern "C" unsigned long _UNK_00620d60;
extern "C" unsigned long _UNK_00620d64;
extern "C" unsigned long _UNK_00620ec0;
extern "C" unsigned long _UNK_00620ec4;
extern "C" unsigned long _UNK_00620ec8;
extern "C" unsigned long _UNK_00620ecc;
extern "C" unsigned long _UNK_00620ed0;
extern "C" unsigned long _UNK_00620ed4;
extern "C" unsigned long _UNK_00620ed8;
extern "C" unsigned long _UNK_00620edc;
extern "C" unsigned long _UNK_00620ee0;
extern "C" unsigned long g_006206c8;
extern "C" unsigned long g_006206dc;
extern "C" unsigned long g_00620718;
extern "C" unsigned long g_0062071c;
extern "C" unsigned long g_0062076e;
extern "C" unsigned long g_00620770;
extern "C" unsigned long g_0062078e;
extern "C" unsigned long g_006207a4;
extern "C" unsigned long g_006207b8;
extern "C" unsigned long g_006207bc;
extern "C" unsigned long g_006207c0;
extern "C" unsigned long g_006207c4;
extern "C" unsigned long g_006207c8;
extern "C" unsigned long g_006207de;
extern "C" unsigned long g_006207fa;
extern "C" unsigned long g_0062081e;
extern "C" unsigned long g_00620822;
extern "C" unsigned long g_00620844;
extern "C" unsigned long g_00620848;
extern "C" unsigned long g_0062084c;
extern "C" unsigned long g_00620850;
extern "C" unsigned long g_006208a0;
extern "C" unsigned long g_006208a8;
extern "C" unsigned long g_006208ba;
extern "C" unsigned long g_00620912;
extern "C" unsigned long g_00620948;
extern "C" unsigned long g_00620980;
extern "C" unsigned long g_006209c8;
extern "C" unsigned long g_00620a04;
extern "C" unsigned long g_00620a8a;
extern "C" unsigned long g_00620ae4;
extern "C" unsigned long g_00620b44;
extern "C" unsigned long g_00620be8;
extern "C" unsigned long g_00620bec;
extern "C" unsigned long g_00620bf0;
extern "C" unsigned long g_00620bf4;
extern "C" unsigned long g_00620bf8;
extern "C" unsigned long g_00620bfc;
extern "C" unsigned long g_00620c00;
extern "C" unsigned long g_00620c04;
extern "C" unsigned long g_00620c08;
extern "C" unsigned long g_00620c92;
extern "C" unsigned long g_00620ccc;
extern "C" unsigned long g_00620cde;
extern "C" unsigned long g_00620cfc;
extern "C" unsigned long g_00620d18;
extern "C" unsigned long g_00620d5c;
extern "C" unsigned long g_00620d60;
extern "C" unsigned long g_00620d64;
extern "C" unsigned long g_00620d96;
extern "C" unsigned long g_00620db6;
extern "C" unsigned long g_00620db8;
extern "C" unsigned long g_00620dec;
extern "C" unsigned long g_00620e06;
extern "C" unsigned long g_00620e1a;
extern "C" unsigned long g_00620e50;
extern "C" unsigned long g_00620e84;
extern "C" unsigned long g_00620e92;
extern "C" unsigned long g_00620ec0;
extern "C" unsigned long g_00620ec4;
extern "C" unsigned long g_00620ec8;
extern "C" unsigned long g_00620ecc;
extern "C" unsigned long g_00620ed0;
extern "C" unsigned long g_00620ed4;
extern "C" unsigned long g_00620ed8;
extern "C" unsigned long g_00620edc;
extern "C" unsigned long g_00620ee0;
void PKRankRewardItemPresenter::onEnter()
{
  return;
}

void PKRankRewardItemPresenter::onExit()
{
  return;
}

void PKRankRewardItemPresenter::tick(float p1)
{
  return;
}

PKRankRewardItemPresenter::~PKRankRewardItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006206dc + g_0062071c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



undefined4 PKRankRewardItemPresenter::create(PKRankRewardItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x108))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void PKRankRewardItemPresenter::onGetReward()
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(((int)this) + 0xf8) != '\0') {
    piVar2 = (int *)((PKRankRewardItemView *)*(undefined4 *)(((int)this) + 0xe4))->getBtnGet();
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    iVar4 = (undefined4)(intptr_t)(((UIManager *)uVar3)->showUIById(g_006207b8));
    if (iVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x6207b4);
      (*pcVar1)();
    }
    iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0062076e + (intptr_t)(g_006207bc))),
                            *(undefined4 *)((unsigned char *)((char *)&g_00620770 + (intptr_t)(g_006207c0))),0);
    uVar3 = (undefined4)(((PKRankRewardResultView *)*(undefined4 *)(iVar4 + 0x24))->getPresenter());
    ((PKRankRewardResultPresenter *)uVar3)->initWith(*(undefined4 *)(((int)this) + 0xfc), *(undefined4 *)(((int)this) + 0x100));
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar3)->showToast((char const*)(unsigned char *)((char *)&g_0062078e + (intptr_t)(g_006207c4)));
    piVar2 = (int *)((PKRankRewardItemView *)*(undefined4 *)(((int)this) + 0xe4))->getLabGet();
    (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,(unsigned char *)((char *)&g_006207a4 + (intptr_t)(g_006207c8)));
    iVar4 = (undefined4)(intptr_t)(((PKData *)this)->getIns());
    *(undefined4 *)(iVar4 + 100) = 2;
    *(char *)(((int)this) + 0xf8) = '\0';
  }
  return;
}

PKRankRewardItemPresenter::PKRankRewardItemPresenter()
{
  undefined4 uVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_006207de + (intptr_t)(g_00620844))) + 8;
  *(undefined1 *)(((int)this) + 0x3a) = 0;
  *(undefined1 *)(((int)this) + 0x3e) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006207fa + (intptr_t)(g_00620848)),&uStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0062081e + (intptr_t)(g_0062084c))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00620822 + (intptr_t)(g_00620850)), 0);
  return;
}

void PKRankRewardItemPresenter::initWithView(PKRankRewardItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0xe4) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKRankRewardItemView *)p1)->getBtnGet();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006208a0 + (intptr_t)(g_006208a8))),0,0x20);
  return;
}

void PKRankRewardItemPresenter::initWith(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKRankRewardItemPresenter::onGetRewardFail()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  puVar4 = (undefined4 *)(((int)this) + 0xe4);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getBtnGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getLabGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getLabReward();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getSprIcon();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getLabNext();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  piVar1 = (int *)((PKRankRewardItemView *)*puVar4)->getLabTime();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  *(undefined1 *)(((int)this) + 0xe8) = 1;
  uVar2 = (undefined4)(((Toast *)this)->sharedToast());
  uVar3 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00620c92 + (intptr_t)(g_00620ccc)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  ((Toast *)uVar2)->showToast((char const*)auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void PKRankRewardItemPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKRankRewardItemPresenter::onHttpReward(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  ((HttpUtil *)(uVar2))->onResponse((cocos2d::extension::CCHttpResponse*)p2);
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  iVar3 = (undefined4)((void)(((HttpUtil *)(uVar2))->getBodyDic((cocos2d::extension::CCHttpResponse*)p2)),(intptr_t)0);
  if (iVar3 != 0) {
    func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00620d96 + (intptr_t)(g_00620ec0)),auStack_20);
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
    if (iVar4 == 0) {
      func_0079e2bc(auStack_1c);
code_r0x00620eb8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x620eb8);
      (*pcVar1)();
    }
    uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00620db6 + (intptr_t)(g_00620ec4))));
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00620db8 + (intptr_t)(g_00620ec8))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar8,uVar2,0));
    func_0079e2bc(auStack_1c);
    iVar5 = (undefined4)(intptr_t)(func_0079e5ec(*(undefined4 *)(iVar4 + 0x14),0x3f800000));
    iVar4 = (undefined4)(intptr_t)(g_00620ecc);
    if (iVar5 == 0) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_00620e92 + (intptr_t)(g_00620ee0)));
    }
    else {
      *(undefined1 *)(((int)this) + 0xf8) = 1;
      func_0079e45c(auStack_1c,&g_00620dec + iVar4,auStack_20);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
      uVar6 = (undefined4)(0);
      if (iVar3 != 0) {
        uVar6 = (undefined4)(func_0079e55c(iVar3,uVar8,*(undefined4 *)((unsigned char *)((char *)&g_00620e06 + (intptr_t)(g_00620ed0))),0));
      }
      func_0079e2bc(auStack_1c);
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00620e1a + (intptr_t)(g_00620ed4)),auStack_20);
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey((char const *)auStack_1c));
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar8,uVar2,0));
      }
      func_0079e2bc(auStack_1c);
      uVar7 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar3 + 0x14)));
      iVar3 = (undefined4)(intptr_t)(g_00620ed8);
      *(undefined4 *)(((int)this) + 0xfc) = uVar7;
      func_0079e45c(auStack_1c,&g_00620e50 + iVar3,auStack_20);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey((char const *)auStack_1c));
      if (iVar3 == 0) {
        func_0079e2bc(auStack_1c);
        goto code_r0x00620eb8;
      }
      iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uVar8,uVar2,0));
      func_0079e2bc(auStack_1c);
      uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar3 + 0x14)));
      *(undefined4 *)(((int)this) + 0x100) = uVar2;
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_00620e84 + (intptr_t)(g_00620edc)));
    }
  }
  return;
}

#include "PKRankItemPresenter.h"
#include "CCDictionary.h"
#include "CCString.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "HttpUtil.h"
#include "PKAwardData.h"
#include "PKRankItemView.h"
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
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061af44;
extern "C" unsigned long UNK_0061af60;
extern "C" unsigned long UNK_0061af7c;
extern "C" unsigned long UNK_0061af94;
extern "C" unsigned long UNK_0061aff8;
extern "C" unsigned long UNK_0061affa;
extern "C" unsigned long UNK_0061b020;
extern "C" unsigned long UNK_0061b0b2;
extern "C" unsigned long UNK_0061b0cc;
extern "C" unsigned long UNK_0061b106;
extern "C" unsigned long UNK_0061b122;
extern "C" unsigned long UNK_0061b140;
extern "C" unsigned long UNK_0061b1be;
extern "C" unsigned long UNK_0061b1e0;
extern "C" unsigned long UNK_0061b1e2;
extern "C" unsigned long UNK_0061b21c;
extern "C" unsigned long UNK_0061b236;
extern "C" unsigned long UNK_0061b24a;
extern "C" unsigned long UNK_0061b27c;
extern "C" unsigned long UNK_0061b2b0;
extern "C" unsigned long UNK_0061b2ba;
extern "C" unsigned long UNK_0061b2c6;
extern "C" unsigned long UNK_0061b2d6;
extern "C" unsigned long UNK_0061b2e4;
extern "C" unsigned long UNK_0061b2f2;
extern "C" unsigned long UNK_0061b364;
extern "C" unsigned long UNK_0061b374;
extern "C" unsigned long UNK_0061b3b0;
extern "C" unsigned long UNK_0061b3d4;
extern "C" unsigned long UNK_0061b3d8;
extern "C" unsigned long UNK_0061b444;
extern "C" unsigned long UNK_0061b462;
extern "C" unsigned long UNK_0061b4c0;
extern "C" unsigned long UNK_0061b4e8;
extern "C" unsigned long UNK_0061b502;
extern "C" unsigned long UNK_0061b506;
extern "C" unsigned long UNK_0061b520;
extern "C" unsigned long UNK_0061b566;
extern "C" unsigned long UNK_0061b568;
extern "C" unsigned long _UNK_0061af48;
extern "C" unsigned long _UNK_0061af64;
extern "C" unsigned long _UNK_0061af80;
extern "C" unsigned long _UNK_0061af98;
extern "C" unsigned long _UNK_0061b06c;
extern "C" unsigned long _UNK_0061b070;
extern "C" unsigned long _UNK_0061b074;
extern "C" unsigned long _UNK_0061b0e0;
extern "C" unsigned long _UNK_0061b0e4;
extern "C" unsigned long _UNK_0061b184;
extern "C" unsigned long _UNK_0061b188;
extern "C" unsigned long _UNK_0061b18c;
extern "C" unsigned long _UNK_0061b320;
extern "C" unsigned long _UNK_0061b324;
extern "C" unsigned long _UNK_0061b328;
extern "C" unsigned long _UNK_0061b32c;
extern "C" unsigned long _UNK_0061b330;
extern "C" unsigned long _UNK_0061b334;
extern "C" unsigned long _UNK_0061b338;
extern "C" unsigned long _UNK_0061b33c;
extern "C" unsigned long _UNK_0061b340;
extern "C" unsigned long _UNK_0061b344;
extern "C" unsigned long _UNK_0061b348;
extern "C" unsigned long _UNK_0061b34c;
extern "C" unsigned long _UNK_0061b350;
extern "C" unsigned long _UNK_0061b404;
extern "C" unsigned long _UNK_0061b408;
extern "C" unsigned long _UNK_0061b40c;
extern "C" unsigned long _UNK_0061b410;
extern "C" unsigned long _UNK_0061b414;
extern "C" unsigned long _UNK_0061b4ac;
extern "C" unsigned long _UNK_0061b4b0;
extern "C" unsigned long _UNK_0061b4c4;
extern "C" unsigned long _UNK_0061b4ec;
extern "C" unsigned long _UNK_0061b590;
extern "C" unsigned long _UNK_0061b594;
extern "C" unsigned long _UNK_0061b598;
extern "C" unsigned long _UNK_0061b59c;
extern "C" unsigned long _UNK_0061b5a0;
extern "C" unsigned long _UNK_0061b5a4;
extern "C" unsigned long g_0061af44;
extern "C" unsigned long g_0061af48;
extern "C" unsigned long g_0061af60;
extern "C" unsigned long g_0061af64;
extern "C" unsigned long g_0061af7c;
extern "C" unsigned long g_0061af80;
extern "C" unsigned long g_0061af94;
extern "C" unsigned long g_0061af98;
extern "C" unsigned long g_0061aff8;
extern "C" unsigned long g_0061affa;
extern "C" unsigned long g_0061b020;
extern "C" unsigned long g_0061b06c;
extern "C" unsigned long g_0061b070;
extern "C" unsigned long g_0061b074;
extern "C" unsigned long g_0061b0b2;
extern "C" unsigned long g_0061b0cc;
extern "C" unsigned long g_0061b0e0;
extern "C" unsigned long g_0061b0e4;
extern "C" unsigned long g_0061b106;
extern "C" unsigned long g_0061b122;
extern "C" unsigned long g_0061b140;
extern "C" unsigned long g_0061b184;
extern "C" unsigned long g_0061b188;
extern "C" unsigned long g_0061b18c;
extern "C" unsigned long g_0061b1be;
extern "C" unsigned long g_0061b1e0;
extern "C" unsigned long g_0061b1e2;
extern "C" unsigned long g_0061b21c;
extern "C" unsigned long g_0061b236;
extern "C" unsigned long g_0061b24a;
extern "C" unsigned long g_0061b27c;
extern "C" unsigned long g_0061b2b0;
extern "C" unsigned long g_0061b2ba;
extern "C" unsigned long g_0061b2c6;
extern "C" unsigned long g_0061b2d6;
extern "C" unsigned long g_0061b2e4;
extern "C" unsigned long g_0061b2f2;
extern "C" unsigned long g_0061b320;
extern "C" unsigned long g_0061b324;
extern "C" unsigned long g_0061b328;
extern "C" unsigned long g_0061b32c;
extern "C" unsigned long g_0061b330;
extern "C" unsigned long g_0061b334;
extern "C" unsigned long g_0061b338;
extern "C" unsigned long g_0061b33c;
extern "C" unsigned long g_0061b340;
extern "C" unsigned long g_0061b344;
extern "C" unsigned long g_0061b348;
extern "C" unsigned long g_0061b34c;
extern "C" unsigned long g_0061b350;
extern "C" unsigned long g_0061b364;
extern "C" unsigned long g_0061b374;
extern "C" unsigned long g_0061b3b0;
extern "C" unsigned long g_0061b3d4;
extern "C" unsigned long g_0061b3d8;
extern "C" unsigned long g_0061b404;
extern "C" unsigned long g_0061b408;
extern "C" unsigned long g_0061b40c;
extern "C" unsigned long g_0061b410;
extern "C" unsigned long g_0061b414;
extern "C" unsigned long g_0061b444;
extern "C" unsigned long g_0061b462;
extern "C" unsigned long g_0061b4ac;
extern "C" unsigned long g_0061b4b0;
extern "C" unsigned long g_0061b4c0;
extern "C" unsigned long g_0061b4c4;
extern "C" unsigned long g_0061b4e8;
extern "C" unsigned long g_0061b4ec;
extern "C" unsigned long g_0061b502;
extern "C" unsigned long g_0061b506;
extern "C" unsigned long g_0061b520;
extern "C" unsigned long g_0061b566;
extern "C" unsigned long g_0061b568;
extern "C" unsigned long g_0061b590;
extern "C" unsigned long g_0061b594;
extern "C" unsigned long g_0061b598;
extern "C" unsigned long g_0061b59c;
extern "C" unsigned long g_0061b5a0;
extern "C" unsigned long g_0061b5a4;

void PKRankItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x40) = 1;
  return;
}

void PKRankItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x40) = 0;
  return;
}

void PKRankItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankItemPresenter::tick(float p1)
{
  return;
}

void PKRankItemPresenter::onTip(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  
  cocos2d::CCLog((char const*)&g_0061aff8 + g_0061b070, &g_0061affa + g_0061b06c);
  pbVar3 = (byte *)(((int)this) + 0x42);
  *pbVar3 = *pbVar3 ^ 1;
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x120) + 0x90))();
  uVar4 = (undefined4)(*(undefined4 *)(&g_0061b020 + g_0061b074));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x128);
  if (*pbVar3 == 0) {
    iVar5 = 600;
    pcVar2 = *(code **)(*piVar1 + 600);
  }
  else {
    iVar5 = 0x254;
    pcVar2 = *(code **)(*piVar1 + 0x254);
  }
  (*pcVar2)(piVar1,((int)this),uVar4,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x128);
  (**(code **)(*piVar1 + iVar5))(piVar1,((int)this),uVar4,0,0x40);
  return;
}

void PKRankItemPresenter::onEnter()
{
  return;
}

void PKRankItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 PKRankItemPresenter::initWithView(PKRankItemView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)(&g_0061b0b2 + g_0061b0e0),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x128);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),*(undefined4 *)(&g_0061b0cc + g_0061b0e4),0,1);
  return 1;
}

void PKRankItemPresenter::updateData()
{
  return;
}



PKRankItemPresenter::PKRankItemPresenter()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0061b364 + (intptr_t)(g_0061b404))));
  *(int *)((int)this + 4*(5)) = iVar4 + 0x3c;
  iVar1 = (undefined4)(intptr_t)(g_0061b408);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(0xc)) = *(int *)(&g_0061b374 + iVar1) + 0xc;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(undefined1 *)(((int)this) + 0x10) = 0;
  *(undefined1 *)((int)((int)this) + 0x41) = 0;
  *(undefined1 *)((int)((int)this) + 0x42) = 0;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar3))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_0061b3b0 + (intptr_t)(g_0061b40c)),&uStack_20);
  ((BLLeakUtils *)(uVar3))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0061b3d4 + (intptr_t)(g_0061b410))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0061b3d8 + (intptr_t)(g_0061b414)), 0);
  return;
}

undefined4 PKRankItemPresenter::create(PKRankItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x44))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

PKRankItemPresenter::~PKRankItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0061b444 + g_0061b4ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0061b462 + g_0061b4b0,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((PKAwardData *)((int)this) + 7)->~PKAwardData();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
bool PKRankItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PKRankItemPresenter::onDraw(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKRankItemPresenter::onHttpDraw(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  ((HttpUtil *)(uVar2))->onResponse((cocos2d::extension::CCHttpResponse*)p2);
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  iVar3 = (undefined4)((void)(((HttpUtil *)(uVar2))->getBodyDic((cocos2d::extension::CCHttpResponse*)p2)),(intptr_t)0);
  if (iVar3 != 0) {
    puVar8 = auStack_20;
    func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0061b1be + (intptr_t)(g_0061b320)),puVar8);
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
    if (iVar4 == 0) {
      func_0079e2bc(auStack_1c);
code_r0x0061b31a:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x61b31a);
      (*pcVar1)();
    }
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0061b1e0 + (intptr_t)(g_0061b324))));
    uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0061b1e2 + (intptr_t)(g_0061b328))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar2,uVar7,0,puVar8,iVar3,iVar4));
    func_0079e2bc(auStack_1c);
    iVar4 = (undefined4)(intptr_t)(func_0079e5ec(*(undefined4 *)(iVar4 + 0x14),0x3f800000));
    if (iVar4 == 0) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0061b2f2 + (intptr_t)(g_0061b350)));
    }
    else {
      *(undefined1 *)(((int)this) + 0x41) = 1;
      iVar4 = (undefined4)(intptr_t)(g_0061b32c);
      *(undefined4 *)(((int)this) + 0x20) = 2;
      func_0079e45c(auStack_1c,&g_0061b21c + iVar4,puVar8);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
      uVar5 = (undefined4)(0);
      if (iVar3 != 0) {
        uVar5 = (undefined4)(func_0079e55c(iVar3,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0061b236 + (intptr_t)(g_0061b330))),0));
      }
      func_0079e2bc(auStack_1c);
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0061b24a + (intptr_t)(g_0061b334)),puVar8);
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar5))->objectForKey((char const *)auStack_1c));
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar2,uVar7,0));
      }
      func_0079e2bc(auStack_1c);
      uVar6 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar3 + 0x14)));
      iVar3 = (undefined4)(intptr_t)(g_0061b338);
      *(undefined4 *)(((int)this) + 0x38) = uVar6;
      func_0079e45c(auStack_1c,&g_0061b27c + iVar3,puVar8);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar5))->objectForKey((char const *)auStack_1c));
      if (iVar3 == 0) {
        func_0079e2bc(auStack_1c);
        goto code_r0x0061b31a;
      }
      iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uVar2,uVar7,0));
      func_0079e2bc(auStack_1c);
      uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar3 + 0x14)));
      *(undefined4 *)(((int)this) + 0x3c) = uVar2;
      cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0061b2b0 + (intptr_t)(g_0061b33c)), *(undefined4 *)(((int)this) + 0x38), uVar2);
      uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0061b2ba + (intptr_t)(g_0061b340)), *(undefined4 *)(((int)this) + 0x34)));
      cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0061b2c6 + (intptr_t)(g_0061b344)), *(undefined4 *)(((int)this) + 0x34));
      uVar7 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
      cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0061b2d6 + (intptr_t)(g_0061b348)), uVar7);
      uVar7 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar7))->postNotification((char const*)(unsigned char *)((char *)&g_0061b2e4 + (intptr_t)(g_0061b34c)), (cocos2d::CCObject*)uVar2);
    }
  }
  return;
}

void PKRankItemPresenter::refreshDrawStatus(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKRankItemPresenter::initWith(PKAwardData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

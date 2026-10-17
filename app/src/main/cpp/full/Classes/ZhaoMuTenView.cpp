#include "ZhaoMuTenView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "BLJiTanMainView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "Toast.h"
#include "UserData.h"
#include "ZhaoMuHttpUtil.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" unsigned long UNK_006c7528;
extern "C" unsigned long UNK_006c7564;
extern "C" unsigned long UNK_006c758c;
extern "C" unsigned long UNK_006c75ae;
extern "C" unsigned long UNK_006c75b0;
extern "C" unsigned long UNK_006c75ec;
extern "C" unsigned long UNK_006c7606;
extern "C" unsigned long UNK_006c7608;
extern "C" unsigned long UNK_006c7640;
extern "C" unsigned long UNK_006c767e;
extern "C" unsigned long UNK_006c7680;
extern "C" unsigned long UNK_006c7698;
extern "C" unsigned long UNK_006c769a;
extern "C" unsigned long UNK_006c7706;
extern "C" unsigned long UNK_006c7708;
extern "C" unsigned long UNK_006c7742;
extern "C" unsigned long UNK_006c77ce;
extern "C" unsigned long UNK_006c78a8;
extern "C" unsigned long UNK_006c7942;
extern "C" unsigned long UNK_006c798e;
extern "C" unsigned long UNK_006c7a0a;
extern "C" unsigned long UNK_006c7a1c;
extern "C" unsigned long UNK_006c7ae0;
extern "C" unsigned long UNK_006c7ca0;
extern "C" unsigned long UNK_006c7cc4;
extern "C" unsigned long UNK_006c7dc0;
extern "C" unsigned long UNK_006c7e9a;
extern "C" unsigned long UNK_006c7f8c;
extern "C" unsigned long UNK_006c7f8e;
extern "C" unsigned long UNK_006c807a;
extern "C" unsigned long UNK_006c810a;
extern "C" unsigned long UNK_006c812c;
extern "C" unsigned long UNK_006c812e;
extern "C" unsigned long UNK_006c813e;
extern "C" unsigned long UNK_006c824a;
extern "C" unsigned long UNK_006c82dc;
extern "C" unsigned long UNK_006c82ee;
extern "C" unsigned long UNK_006c83a6;
extern "C" unsigned long UNK_006c83a8;
extern "C" unsigned long UNK_006c83b8;
extern "C" unsigned long _UNK_006c7554;
extern "C" unsigned long _UNK_006c7568;
extern "C" unsigned long _UNK_006c7590;
extern "C" unsigned long _UNK_006c75cc;
extern "C" unsigned long _UNK_006c75d0;
extern "C" unsigned long _UNK_006c7624;
extern "C" unsigned long _UNK_006c7628;
extern "C" unsigned long _UNK_006c762c;
extern "C" unsigned long _UNK_006c7664;
extern "C" unsigned long _UNK_006c76b4;
extern "C" unsigned long _UNK_006c76b8;
extern "C" unsigned long _UNK_006c76bc;
extern "C" unsigned long _UNK_006c76c0;
extern "C" unsigned long _UNK_006c7754;
extern "C" unsigned long _UNK_006c7758;
extern "C" unsigned long _UNK_006c775c;
extern "C" unsigned long _UNK_006c78c0;
extern "C" unsigned long _UNK_006c78c4;
extern "C" unsigned long _UNK_006c78c8;
extern "C" unsigned long _UNK_006c7aac;
extern "C" unsigned long _UNK_006c7ab0;
extern "C" unsigned long _UNK_006c7ab4;
extern "C" unsigned long _UNK_006c7ab8;
extern "C" unsigned long _UNK_006c7abc;
extern "C" unsigned long _UNK_006c7ac0;
extern "C" unsigned long _UNK_006c7ac4;
extern "C" unsigned long _UNK_006c7ac8;
extern "C" unsigned long _UNK_006c7acc;
extern "C" unsigned long _UNK_006c7ad0;
extern "C" unsigned long _UNK_006c7ad4;
extern "C" unsigned long _UNK_006c7d88;
extern "C" unsigned long _UNK_006c7d8c;
extern "C" unsigned long _UNK_006c7d90;
extern "C" unsigned long _UNK_006c7d94;
extern "C" unsigned long _UNK_006c7d98;
extern "C" unsigned long _UNK_006c7d9c;
extern "C" unsigned long _UNK_006c7da0;
extern "C" unsigned long _UNK_006c81a0;
extern "C" unsigned long _UNK_006c81a4;
extern "C" unsigned long _UNK_006c81a8;
extern "C" unsigned long _UNK_006c81ac;
extern "C" unsigned long _UNK_006c81b0;
extern "C" unsigned long _UNK_006c81b4;
extern "C" unsigned long _UNK_006c81b8;
extern "C" unsigned long _UNK_006c81bc;
extern "C" unsigned long _UNK_006c81c0;
extern "C" unsigned long _UNK_006c81c4;
extern "C" unsigned long _UNK_006c81c8;
extern "C" unsigned long _UNK_006c81cc;
extern "C" unsigned long _UNK_006c81d0;
extern "C" unsigned long _UNK_006c81d4;
extern "C" unsigned long _UNK_006c81d8;
extern "C" unsigned long _UNK_006c81dc;
extern "C" unsigned long _UNK_006c81e0;
extern "C" unsigned long _UNK_006c84bc;
extern "C" unsigned long _UNK_006c84c0;
extern "C" unsigned long _UNK_006c84c4;
extern "C" unsigned long _UNK_006c84c8;
extern "C" unsigned long _UNK_006c84cc;
extern "C" unsigned long _UNK_006c84d0;
extern "C" unsigned long _UNK_006c84d4;
extern "C" unsigned long _UNK_006c84d8;
extern "C" unsigned long _UNK_006c84dc;
extern "C" unsigned long _UNK_006c84e0;
extern "C" unsigned long _UNK_006c84e4;
extern "C" unsigned long _UNK_006c84e8;
extern "C" unsigned long _UNK_006c84ec;
extern "C" unsigned long _UNK_006c84f0;
extern "C" unsigned long _UNK_006c84f4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long g_006c7528;
extern "C" unsigned long g_006c7554;
extern "C" unsigned long g_006c7564;
extern "C" unsigned long g_006c7568;
extern "C" unsigned long g_006c758c;
extern "C" unsigned long g_006c7590;
extern "C" unsigned long g_006c75ae;
extern "C" unsigned long g_006c75b0;
extern "C" unsigned long g_006c75cc;
extern "C" unsigned long g_006c75d0;
extern "C" unsigned long g_006c75ec;
extern "C" unsigned long g_006c7606;
extern "C" unsigned long g_006c7608;
extern "C" unsigned long g_006c7624;
extern "C" unsigned long g_006c7628;
extern "C" unsigned long g_006c762c;
extern "C" unsigned long g_006c7640;
extern "C" unsigned long g_006c7664;
extern "C" unsigned long g_006c767e;
extern "C" unsigned long g_006c7680;
extern "C" unsigned long g_006c7698;
extern "C" unsigned long g_006c769a;
extern "C" unsigned long g_006c76b4;
extern "C" unsigned long g_006c76b8;
extern "C" unsigned long g_006c76bc;
extern "C" unsigned long g_006c76c0;
extern "C" unsigned long g_006c7706;
extern "C" unsigned long g_006c7708;
extern "C" unsigned long g_006c7742;
extern "C" unsigned long g_006c7754;
extern "C" unsigned long g_006c7758;
extern "C" unsigned long g_006c775c;
extern "C" unsigned long g_006c77ce;
extern "C" unsigned long g_006c78a8;
extern "C" unsigned long g_006c78c0;
extern "C" unsigned long g_006c78c4;
extern "C" unsigned long g_006c78c8;
extern "C" unsigned long g_006c7942;
extern "C" unsigned long g_006c798e;
extern "C" unsigned long g_006c7a0a;
extern "C" unsigned long g_006c7a1c;
extern "C" unsigned long g_006c7aac;
extern "C" unsigned long g_006c7ab0;
extern "C" unsigned long g_006c7ab4;
extern "C" unsigned long g_006c7ab8;
extern "C" unsigned long g_006c7abc;
extern "C" unsigned long g_006c7ac0;
extern "C" unsigned long g_006c7ac4;
extern "C" unsigned long g_006c7ac8;
extern "C" unsigned long g_006c7acc;
extern "C" unsigned long g_006c7ad0;
extern "C" unsigned long g_006c7ad4;
extern "C" unsigned long g_006c7ae0;
extern "C" unsigned long g_006c7ca0;
extern "C" unsigned long g_006c7cc4;
extern "C" unsigned long g_006c7d88;
extern "C" unsigned long g_006c7d8c;
extern "C" unsigned long g_006c7d90;
extern "C" unsigned long g_006c7d94;
extern "C" unsigned long g_006c7d98;
extern "C" unsigned long g_006c7d9c;
extern "C" unsigned long g_006c7da0;
extern "C" unsigned long g_006c7dc0;
extern "C" unsigned long g_006c7e9a;
extern "C" unsigned long g_006c7f8c;
extern "C" unsigned long g_006c7f8e;
extern "C" unsigned long g_006c807a;
extern "C" unsigned long g_006c810a;
extern "C" unsigned long g_006c812c;
extern "C" unsigned long g_006c812e;
extern "C" unsigned long g_006c813e;
extern "C" unsigned long g_006c81a0;
extern "C" unsigned long g_006c81a4;
extern "C" unsigned long g_006c81a8;
extern "C" unsigned long g_006c81ac;
extern "C" unsigned long g_006c81b0;
extern "C" unsigned long g_006c81b4;
extern "C" unsigned long g_006c81b8;
extern "C" unsigned long g_006c81bc;
extern "C" unsigned long g_006c81c0;
extern "C" unsigned long g_006c81c4;
extern "C" unsigned long g_006c81c8;
extern "C" unsigned long g_006c81cc;
extern "C" unsigned long g_006c81d0;
extern "C" unsigned long g_006c81d4;
extern "C" unsigned long g_006c81d8;
extern "C" unsigned long g_006c81dc;
extern "C" unsigned long g_006c81e0;
extern "C" unsigned long g_006c824a;
extern "C" unsigned long g_006c82dc;
extern "C" unsigned long g_006c82ee;
extern "C" unsigned long g_006c83a6;
extern "C" unsigned long g_006c83a8;
extern "C" unsigned long g_006c83b8;
extern "C" unsigned long g_006c84bc;
extern "C" unsigned long g_006c84c0;
extern "C" unsigned long g_006c84c4;
extern "C" unsigned long g_006c84c8;
extern "C" unsigned long g_006c84cc;
extern "C" unsigned long g_006c84d0;
extern "C" unsigned long g_006c84d4;
extern "C" unsigned long g_006c84d8;
extern "C" unsigned long g_006c84dc;
extern "C" unsigned long g_006c84e0;
extern "C" unsigned long g_006c84e4;
extern "C" unsigned long g_006c84e8;
extern "C" unsigned long g_006c84ec;
extern "C" unsigned long g_006c84f0;
extern "C" unsigned long g_006c84f4;
ZhaoMuTenView::~ZhaoMuTenView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_006c7528 + g_006c7554);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ZhaoMuTenView::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xe4))();
  if (iVar1 != 0) {
    func_0079e55c(iVar1,*(undefined4 *)(&g_006c75ae + g_006c75cc),
                    *(undefined4 *)(&g_006c75b0 + g_006c75d0),0);
  }
  iVar1 = ((BLJiTanMainView *)this)->getPresenter();
  *(undefined1 *)(iVar1 + 0x24) = 1;
  (**(code **)(*(int *)this + 0xec))(((int)this));
  return;
}

void ZhaoMuTenView::onGetDataFinal()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)&g_006c75ec + g_006c7624);
  iVar2 = (**(code **)(*(int *)this + 0xe4))(((int)this));
  if (iVar2 != 0) {
    func_0079e55c(iVar2,*(undefined4 *)(&g_006c7606 + g_006c7628),
                    *(undefined4 *)(&g_006c7608 + g_006c762c),0);
  }
  iVar2 = ((BLJiTanMainView *)this)->getPresenter();
  *(undefined1 *)(iVar2 + 0x24) = 1;
  (**(code **)(*(int *)this + 0xec))(((int)this));
  return;
}

ZhaoMuTenView::ZhaoMuTenView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006c7640 + g_006c7664);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  return;
}


void ZhaoMuTenView::onNextOnce(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x50))();
  iVar2 = (**(code **)(*piVar1 + 0x18))();
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    iVar4 = iVar2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x110);
    }
    iVar5 = 0;
    while (iVar2 != 0) {
      if (((*(int *)(iVar2 + 0x104) != 0) &&
          (piVar1 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),
                                           *(undefined4 *)(&g_006c7706 + g_006c7754),
                                           *(undefined4 *)(&g_006c7708 + g_006c7758),0),
          piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 100)) {
        iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
        iVar5 = iVar5 + iVar2;
      }
      iVar2 = iVar4;
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 0x110);
      }
    }
    if (9 < iVar5) {
      ZhaoMuTenView::getRewardData();
      return;
    }
  }
  uVar3 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar3)->showToast((char const*)&g_006c7742 + g_006c775c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ZhaoMuTenView::getRewardData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006c7680 + (intptr_t)(g_006c76b4))), 0, (char const*)(unsigned char *)((char *)&g_006c767e + (intptr_t)(g_006c76b8)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006c769a + (intptr_t)(g_006c76bc))), 0, (char const*)(unsigned char *)((char *)&g_006c7698 + (intptr_t)(g_006c76c0)), 0);
  uVar1 = (undefined4)(((ZhaoMuHttpUtil *)this)->getInstance());
  ((ZhaoMuHttpUtil *)(uVar1))->getItemByType(2);
  return;
}

void ZhaoMuTenView::addItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhaoMuTenView::initWiew()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool ZhaoMuTenView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "ZhaoMuOnceView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "BLJiTanMainView.h"
#include "BLLanguage.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UserData.h"
#include "ZhaoMuHttpUtil.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" unsigned long UNK_006c615c;
extern "C" unsigned long UNK_006c6198;
extern "C" unsigned long UNK_006c61c0;
extern "C" unsigned long UNK_006c61e2;
extern "C" unsigned long UNK_006c61e4;
extern "C" unsigned long UNK_006c6220;
extern "C" unsigned long UNK_006c623a;
extern "C" unsigned long UNK_006c623c;
extern "C" unsigned long UNK_006c6274;
extern "C" unsigned long UNK_006c62b4;
extern "C" unsigned long UNK_006c62b6;
extern "C" unsigned long UNK_006c62ce;
extern "C" unsigned long UNK_006c62d0;
extern "C" unsigned long UNK_006c633a;
extern "C" unsigned long UNK_006c633c;
extern "C" unsigned long UNK_006c6378;
extern "C" unsigned long UNK_006c63bc;
extern "C" unsigned long UNK_006c6442;
extern "C" unsigned long UNK_006c64ca;
extern "C" unsigned long UNK_006c64cb;
extern "C" unsigned long UNK_006c64cc;
extern "C" unsigned long UNK_006c64ea;
extern "C" unsigned long UNK_006c651a;
extern "C" unsigned long UNK_006c66dc;
extern "C" unsigned long UNK_006c6732;
extern "C" unsigned long UNK_006c6766;
extern "C" unsigned long UNK_006c6786;
extern "C" unsigned long UNK_006c6800;
extern "C" unsigned long UNK_006c6822;
extern "C" unsigned long UNK_006c682e;
extern "C" unsigned long UNK_006c687a;
extern "C" unsigned long UNK_006c68ae;
extern "C" unsigned long UNK_006c68c0;
extern "C" unsigned long UNK_006c6a12;
extern "C" unsigned long UNK_006c6a34;
extern "C" unsigned long UNK_006c6aa4;
extern "C" unsigned long UNK_006c6af2;
extern "C" unsigned long UNK_006c6c44;
extern "C" unsigned long UNK_006c6c66;
extern "C" unsigned long UNK_006c6dac;
extern "C" unsigned long UNK_006c6e86;
extern "C" unsigned long UNK_006c6f78;
extern "C" unsigned long UNK_006c6f7a;
extern "C" unsigned long UNK_006c7066;
extern "C" unsigned long UNK_006c70f6;
extern "C" unsigned long UNK_006c7118;
extern "C" unsigned long UNK_006c711a;
extern "C" unsigned long UNK_006c712a;
extern "C" unsigned long UNK_006c7230;
extern "C" unsigned long UNK_006c72c2;
extern "C" unsigned long UNK_006c72d4;
extern "C" unsigned long UNK_006c738c;
extern "C" unsigned long UNK_006c738e;
extern "C" unsigned long UNK_006c739e;
extern "C" unsigned long _UNK_006c6188;
extern "C" unsigned long _UNK_006c619c;
extern "C" unsigned long _UNK_006c61c4;
extern "C" unsigned long _UNK_006c6200;
extern "C" unsigned long _UNK_006c6204;
extern "C" unsigned long _UNK_006c6258;
extern "C" unsigned long _UNK_006c625c;
extern "C" unsigned long _UNK_006c6260;
extern "C" unsigned long _UNK_006c6298;
extern "C" unsigned long _UNK_006c62e8;
extern "C" unsigned long _UNK_006c62ec;
extern "C" unsigned long _UNK_006c62f0;
extern "C" unsigned long _UNK_006c62f4;
extern "C" unsigned long _UNK_006c638c;
extern "C" unsigned long _UNK_006c6390;
extern "C" unsigned long _UNK_006c6394;
extern "C" unsigned long _UNK_006c667c;
extern "C" unsigned long _UNK_006c6680;
extern "C" unsigned long _UNK_006c6684;
extern "C" unsigned long _UNK_006c6688;
extern "C" unsigned long _UNK_006c668c;
extern "C" unsigned long _UNK_006c6690;
extern "C" unsigned long _UNK_006c6a38;
extern "C" unsigned long _UNK_006c6a3c;
extern "C" unsigned long _UNK_006c6a40;
extern "C" unsigned long _UNK_006c6a44;
extern "C" unsigned long _UNK_006c6a48;
extern "C" unsigned long _UNK_006c6a4c;
extern "C" unsigned long _UNK_006c6a50;
extern "C" unsigned long _UNK_006c6a54;
extern "C" unsigned long _UNK_006c6a58;
extern "C" unsigned long _UNK_006c6a5c;
extern "C" unsigned long _UNK_006c6a60;
extern "C" unsigned long _UNK_006c6a64;
extern "C" unsigned long _UNK_006c6a68;
extern "C" unsigned long _UNK_006c6a6c;
extern "C" unsigned long _UNK_006c6a70;
extern "C" unsigned long _UNK_006c6a74;
extern "C" unsigned long _UNK_006c6a78;
extern "C" unsigned long _UNK_006c6a7c;
extern "C" unsigned long _UNK_006c6a80;
extern "C" unsigned long _UNK_006c6a84;
extern "C" unsigned long _UNK_006c6a88;
extern "C" unsigned long _UNK_006c6a8c;
extern "C" unsigned long _UNK_006c6a90;
extern "C" unsigned long _UNK_006c6a94;
extern "C" unsigned long _UNK_006c6a98;
extern "C" unsigned long _UNK_006c6d38;
extern "C" unsigned long _UNK_006c6d3c;
extern "C" unsigned long _UNK_006c6d40;
extern "C" unsigned long _UNK_006c6d44;
extern "C" unsigned long _UNK_006c6d48;
extern "C" unsigned long _UNK_006c6d4c;
extern "C" unsigned long _UNK_006c6d50;
extern "C" unsigned long _UNK_006c6d54;
extern "C" unsigned long _UNK_006c6d58;
extern "C" unsigned long _UNK_006c6d5c;
extern "C" unsigned long _UNK_006c6d60;
extern "C" unsigned long _UNK_006c6d64;
extern "C" unsigned long _UNK_006c6d68;
extern "C" unsigned long _UNK_006c718c;
extern "C" unsigned long _UNK_006c7190;
extern "C" unsigned long _UNK_006c7194;
extern "C" unsigned long _UNK_006c7198;
extern "C" unsigned long _UNK_006c719c;
extern "C" unsigned long _UNK_006c71a0;
extern "C" unsigned long _UNK_006c71a4;
extern "C" unsigned long _UNK_006c71a8;
extern "C" unsigned long _UNK_006c71ac;
extern "C" unsigned long _UNK_006c71b0;
extern "C" unsigned long _UNK_006c71b4;
extern "C" unsigned long _UNK_006c71b8;
extern "C" unsigned long _UNK_006c71bc;
extern "C" unsigned long _UNK_006c71c0;
extern "C" unsigned long _UNK_006c71c4;
extern "C" unsigned long _UNK_006c71c8;
extern "C" unsigned long _UNK_006c749c;
extern "C" unsigned long _UNK_006c74a0;
extern "C" unsigned long _UNK_006c74a4;
extern "C" unsigned long _UNK_006c74a8;
extern "C" unsigned long _UNK_006c74ac;
extern "C" unsigned long _UNK_006c74b0;
extern "C" unsigned long _UNK_006c74b4;
extern "C" unsigned long _UNK_006c74b8;
extern "C" unsigned long _UNK_006c74bc;
extern "C" unsigned long _UNK_006c74c0;
extern "C" unsigned long _UNK_006c74c4;
extern "C" unsigned long _UNK_006c74c8;
extern "C" unsigned long _UNK_006c74cc;
extern "C" unsigned long _UNK_006c74d0;
extern "C" unsigned long _UNK_006c74d4;
extern "C" unsigned long g_006c615c;
extern "C" unsigned long g_006c6188;
extern "C" unsigned long g_006c6198;
extern "C" unsigned long g_006c619c;
extern "C" unsigned long g_006c61c0;
extern "C" unsigned long g_006c61c4;
extern "C" unsigned long g_006c61e2;
extern "C" unsigned long g_006c61e4;
extern "C" unsigned long g_006c6200;
extern "C" unsigned long g_006c6204;
extern "C" unsigned long g_006c6220;
extern "C" unsigned long g_006c623a;
extern "C" unsigned long g_006c623c;
extern "C" unsigned long g_006c6258;
extern "C" unsigned long g_006c625c;
extern "C" unsigned long g_006c6260;
extern "C" unsigned long g_006c6274;
extern "C" unsigned long g_006c6298;
extern "C" unsigned long g_006c62b4;
extern "C" unsigned long g_006c62b6;
extern "C" unsigned long g_006c62ce;
extern "C" unsigned long g_006c62d0;
extern "C" unsigned long g_006c62e8;
extern "C" unsigned long g_006c62ec;
extern "C" unsigned long g_006c62f0;
extern "C" unsigned long g_006c62f4;
extern "C" unsigned long g_006c633a;
extern "C" unsigned long g_006c633c;
extern "C" unsigned long g_006c6378;
extern "C" unsigned long g_006c638c;
extern "C" unsigned long g_006c6390;
extern "C" unsigned long g_006c6394;
extern "C" unsigned long g_006c63bc;
extern "C" unsigned long g_006c6442;
extern "C" unsigned long g_006c64ca;
extern "C" unsigned long g_006c64cb;
extern "C" unsigned long g_006c64cc;
extern "C" unsigned long g_006c64ea;
extern "C" unsigned long g_006c651a;
extern "C" unsigned long g_006c667c;
extern "C" unsigned long g_006c6680;
extern "C" unsigned long g_006c6684;
extern "C" unsigned long g_006c6688;
extern "C" unsigned long g_006c668c;
extern "C" unsigned long g_006c6690;
extern "C" unsigned long g_006c66dc;
extern "C" unsigned long g_006c6732;
extern "C" unsigned long g_006c6766;
extern "C" unsigned long g_006c6786;
extern "C" unsigned long g_006c6800;
extern "C" unsigned long g_006c6822;
extern "C" unsigned long g_006c682e;
extern "C" unsigned long g_006c687a;
extern "C" unsigned long g_006c68ae;
extern "C" unsigned long g_006c68c0;
extern "C" unsigned long g_006c6a12;
extern "C" unsigned long g_006c6a34;
extern "C" unsigned long g_006c6a38;
extern "C" unsigned long g_006c6a3c;
extern "C" unsigned long g_006c6a40;
extern "C" unsigned long g_006c6a44;
extern "C" unsigned long g_006c6a48;
extern "C" unsigned long g_006c6a4c;
extern "C" unsigned long g_006c6a50;
extern "C" unsigned long g_006c6a54;
extern "C" unsigned long g_006c6a58;
extern "C" unsigned long g_006c6a5c;
extern "C" unsigned long g_006c6a60;
extern "C" unsigned long g_006c6a64;
extern "C" unsigned long g_006c6a68;
extern "C" unsigned long g_006c6a6c;
extern "C" unsigned long g_006c6a70;
extern "C" unsigned long g_006c6a74;
extern "C" unsigned long g_006c6a78;
extern "C" unsigned long g_006c6a7c;
extern "C" unsigned long g_006c6a80;
extern "C" unsigned long g_006c6a84;
extern "C" unsigned long g_006c6a88;
extern "C" unsigned long g_006c6a8c;
extern "C" unsigned long g_006c6a90;
extern "C" unsigned long g_006c6a94;
extern "C" unsigned long g_006c6a98;
extern "C" unsigned long g_006c6aa4;
extern "C" unsigned long g_006c6af2;
extern "C" unsigned long g_006c6c44;
extern "C" unsigned long g_006c6c66;
extern "C" unsigned long g_006c6d38;
extern "C" unsigned long g_006c6d3c;
extern "C" unsigned long g_006c6d40;
extern "C" unsigned long g_006c6d44;
extern "C" unsigned long g_006c6d48;
extern "C" unsigned long g_006c6d4c;
extern "C" unsigned long g_006c6d50;
extern "C" unsigned long g_006c6d54;
extern "C" unsigned long g_006c6d58;
extern "C" unsigned long g_006c6d5c;
extern "C" unsigned long g_006c6d60;
extern "C" unsigned long g_006c6d64;
extern "C" unsigned long g_006c6d68;
extern "C" unsigned long g_006c6dac;
extern "C" unsigned long g_006c6e86;
extern "C" unsigned long g_006c6f78;
extern "C" unsigned long g_006c6f7a;
extern "C" unsigned long g_006c7066;
extern "C" unsigned long g_006c70f6;
extern "C" unsigned long g_006c7118;
extern "C" unsigned long g_006c711a;
extern "C" unsigned long g_006c712a;
extern "C" unsigned long g_006c718c;
extern "C" unsigned long g_006c7190;
extern "C" unsigned long g_006c7194;
extern "C" unsigned long g_006c7198;
extern "C" unsigned long g_006c719c;
extern "C" unsigned long g_006c71a0;
extern "C" unsigned long g_006c71a4;
extern "C" unsigned long g_006c71a8;
extern "C" unsigned long g_006c71ac;
extern "C" unsigned long g_006c71b0;
extern "C" unsigned long g_006c71b4;
extern "C" unsigned long g_006c71b8;
extern "C" unsigned long g_006c71bc;
extern "C" unsigned long g_006c71c0;
extern "C" unsigned long g_006c71c4;
extern "C" unsigned long g_006c71c8;
extern "C" unsigned long g_006c7230;
extern "C" unsigned long g_006c72c2;
extern "C" unsigned long g_006c72d4;
extern "C" unsigned long g_006c738c;
extern "C" unsigned long g_006c738e;
extern "C" unsigned long g_006c739e;
extern "C" unsigned long g_006c749c;
extern "C" unsigned long g_006c74a0;
extern "C" unsigned long g_006c74a4;
extern "C" unsigned long g_006c74a8;
extern "C" unsigned long g_006c74ac;
extern "C" unsigned long g_006c74b0;
extern "C" unsigned long g_006c74b4;
extern "C" unsigned long g_006c74b8;
extern "C" unsigned long g_006c74bc;
extern "C" unsigned long g_006c74c0;
extern "C" unsigned long g_006c74c4;
extern "C" unsigned long g_006c74c8;
extern "C" unsigned long g_006c74cc;
extern "C" unsigned long g_006c74d0;
extern "C" unsigned long g_006c74d4;
int * ZhaoMuOnceView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x10c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

ZhaoMuOnceView::~ZhaoMuOnceView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_006c615c + g_006c6188);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ZhaoMuOnceView::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xe4))();
  if (iVar1 != 0) {
    func_0079e55c(iVar1,*(undefined4 *)(&g_006c61e2 + g_006c6200),
                    *(undefined4 *)(&g_006c61e4 + g_006c6204),0);
  }
  iVar1 = ((BLJiTanMainView *)this)->getPresenter();
  *(undefined1 *)(iVar1 + 0x24) = 1;
  (**(code **)(*(int *)this + 0xec))(((int)this));
  return;
}

void ZhaoMuOnceView::onGetDataFinal()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)&g_006c6220 + g_006c6258);
  iVar2 = (**(code **)(*(int *)this + 0xe4))(((int)this));
  if (iVar2 != 0) {
    func_0079e55c(iVar2,*(undefined4 *)(&g_006c623a + g_006c625c),
                    *(undefined4 *)(&g_006c623c + g_006c6260),0);
  }
  iVar2 = ((BLJiTanMainView *)this)->getPresenter();
  *(undefined1 *)(iVar2 + 0x24) = 1;
  (**(code **)(*(int *)this + 0xec))(((int)this));
  return;
}

ZhaoMuOnceView::ZhaoMuOnceView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006c6274 + g_006c6298);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  return;
}


void ZhaoMuOnceView::onNextOnce(cocos2d::CCObject* p1, unsigned int p2)
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
                                           *(undefined4 *)(&g_006c633a + g_006c638c),
                                           *(undefined4 *)(&g_006c633c + g_006c6390),0),
          piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 100)) {
        iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
        iVar5 = iVar5 + iVar2;
      }
      iVar2 = iVar4;
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 0x110);
      }
    }
    if (0 < iVar5) {
      ZhaoMuOnceView::getRewardData(1);
      return;
    }
  }
  uVar3 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar3)->showToast((char const*)&g_006c6378 + g_006c6394);
  return;
}



void ZhaoMuOnceView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void ZhaoMuOnceView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ZhaoMuOnceView::getRewardData(int p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006c62b6 + (intptr_t)(g_006c62e8))), 0, (char const*)(unsigned char *)((char *)&g_006c62b4 + (intptr_t)(g_006c62ec)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006c62d0 + (intptr_t)(g_006c62f0))), 0, (char const*)(unsigned char *)((char *)&g_006c62ce + (intptr_t)(g_006c62f4)), 0);
  uVar1 = (undefined4)(((ZhaoMuHttpUtil *)this)->getInstance());
  ((ZhaoMuHttpUtil *)(uVar1))->getItemByType(p1);
  return;
}

void ZhaoMuOnceView::addItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhaoMuOnceView::initWiew()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool ZhaoMuOnceView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "BLCampaignItemRewardPresenter.h"
#include "BLCampaignItemRewardView.h"
#include "CCObject.h"
#include "BackPackItemData.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004ffa0c;
extern "C" unsigned long UNK_004ffa20;
extern "C" unsigned long UNK_004ffa76;
extern "C" unsigned long UNK_004ffbde;
extern "C" unsigned long UNK_004ffbf0;
extern "C" unsigned long UNK_004ffc5c;
extern "C" unsigned long UNK_004ffc9e;
extern "C" unsigned long UNK_004ffcac;
extern "C" unsigned long UNK_004ffe06;
extern "C" unsigned long UNK_004ffe2e;
extern "C" unsigned long UNK_004ffeba;
extern "C" unsigned long UNK_004ffedc;
extern "C" unsigned long UNK_00500014;
extern "C" unsigned long _UNK_004ffa50;
extern "C" unsigned long _UNK_004ffa54;
extern "C" unsigned long _UNK_004ffbb0;
extern "C" unsigned long _UNK_004ffbb4;
extern "C" unsigned long _UNK_004ffbb8;
extern "C" unsigned long _UNK_004ffbbc;
extern "C" unsigned long _UNK_004ffbc0;
extern "C" unsigned long _UNK_004ffbc4;
extern "C" unsigned long _UNK_004ffbc8;
extern "C" unsigned long _UNK_004ffbcc;
extern "C" unsigned long _UNK_004ffc1c;
extern "C" unsigned long _UNK_004ffc20;
extern "C" unsigned long _UNK_004fffc4;
extern "C" unsigned long _UNK_004fffc8;
extern "C" unsigned long _UNK_004fffcc;
extern "C" unsigned long _UNK_004fffd0;
extern "C" unsigned long _UNK_004fffd4;
extern "C" unsigned long _UNK_004fffd8;
extern "C" unsigned long _UNK_004fffdc;
extern "C" unsigned long _UNK_004fffe0;
extern "C" unsigned long _UNK_004fffe4;
extern "C" unsigned long _UNK_004fffe8;
extern "C" unsigned long _UNK_004fffec;
extern "C" unsigned long _UNK_004ffff0;
extern "C" unsigned long _UNK_004ffff4;
extern "C" unsigned long _UNK_005000c8;
extern "C" unsigned long _UNK_005000cc;
extern "C" unsigned long g_004ffa0c;
extern "C" unsigned long g_004ffa20;
extern "C" unsigned long g_004ffa50;
extern "C" unsigned long g_004ffa54;
extern "C" unsigned long g_004ffa76;
extern "C" unsigned long g_004ffbb0;
extern "C" unsigned long g_004ffbb4;
extern "C" unsigned long g_004ffbb8;
extern "C" unsigned long g_004ffbbc;
extern "C" unsigned long g_004ffbc0;
extern "C" unsigned long g_004ffbc4;
extern "C" unsigned long g_004ffbc8;
extern "C" unsigned long g_004ffbcc;
extern "C" unsigned long g_004ffbde;
extern "C" unsigned long g_004ffbf0;
extern "C" unsigned long g_004ffc1c;
extern "C" unsigned long g_004ffc20;
extern "C" unsigned long g_004ffc5c;
extern "C" unsigned long g_004ffc9e;
extern "C" unsigned long g_004ffcac;
extern "C" unsigned long g_004ffe06;
extern "C" unsigned long g_004ffe2e;
extern "C" unsigned long g_004ffeba;
extern "C" unsigned long g_004ffedc;
extern "C" unsigned long g_004fffc4;
extern "C" unsigned long g_004fffc8;
extern "C" unsigned long g_004fffcc;
extern "C" unsigned long g_004fffd0;
extern "C" unsigned long g_004fffd4;
extern "C" unsigned long g_004fffd8;
extern "C" unsigned long g_004fffdc;
extern "C" unsigned long g_004fffe0;
extern "C" unsigned long g_004fffe4;
extern "C" unsigned long g_004fffe8;
extern "C" unsigned long g_004fffec;
extern "C" unsigned long g_004ffff0;
extern "C" unsigned long g_004ffff4;
extern "C" unsigned long g_00500014;
extern "C" unsigned long g_005000c8;
extern "C" unsigned long g_005000cc;
BLCampaignItemRewardPresenter::~BLCampaignItemRewardPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ffa20 + g_004ffa54,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLCampaignItemRewardPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = g_004ffbb0;
  if ((int)(intptr_t)p1 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)(&g_004ffa76 + g_004ffbb4 + g_004ffbb0));
    piVar2 = (int *)func_0079e55c(p1,uVar7,
                                    *(undefined4 *)(&g_004ffa76 + g_004ffbb8 + g_004ffbb0),0
                                   );
    if (piVar2 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
      iVar4 = (**(code **)(*piVar2 + 0x128))(piVar2);
      if (iVar4 == 0) {
                    /* WARNING: Does not return;
        (*pcVar1)();
      }
      iVar4 = func_0079e55c(iVar4,uVar7,*(undefined4 *)(&g_004ffa76 + g_004ffbbc + iVar6),0);
      uVar8 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
      uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar4 = ((DataCacheManager *)uVar7)->getItemDataByID(uVar3);
      if (iVar4 != 0) {
        uVar7 = (undefined4)(((UIManager *)this)->shareManager());
        iVar4 = ((UIManager *)uVar7)->getUIObject(0x1f);
        if ((iVar4 == 0) ||
           (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(&g_004ffa76 + g_004ffbc0 + iVar6),
                                    *(undefined4 *)(&g_004ffa76 + g_004ffbc4 + iVar6),0),
           iVar4 == 0)) {
          uVar7 = (undefined4)(((UIManager *)this)->shareManager());
          iVar5 = ((UIManager *)uVar7)->showUIById(0x1f);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = func_0079e55c(iVar5,*(undefined4 *)(&g_004ffa76 + g_004ffbc0 + iVar6),
                                    *(undefined4 *)(&g_004ffa76 + g_004ffbc4 + iVar6),0);
          }
        }
        piVar2 = (int *)::operator new(0x30);
        ::new ((void *)piVar2) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
        (**(code **)(*piVar2 + 0x2c))(piVar2,uVar8);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                    *(undefined4 *)(&g_004ffa76 + g_004ffbc8 + iVar6),
                                    *(undefined4 *)(&g_004ffa76 + g_004ffbcc + iVar6),0),
           iVar6 != 0)) {
          uVar7 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
          ((BLItemDataInfoPresenter *)uVar7)->initPackItemData((BackPackItemData*)piVar2);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->DebrisItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->ItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->OtherItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
        }
      }
    }
  }
  return;
}

BLCampaignItemRewardPresenter::BLCampaignItemRewardPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ffbf0 + g_004ffc20,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCampaignItemRewardPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLCampaignItemRewardPresenter::onEnter()
{
  return;
}

void BLCampaignItemRewardPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLCampaignItemRewardPresenter::initWithView(BLCampaignItemRewardView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLCampaignItemRewardPresenter::addImg(std::vector<RewardItemInfo, std::allocator<RewardItemInfo>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

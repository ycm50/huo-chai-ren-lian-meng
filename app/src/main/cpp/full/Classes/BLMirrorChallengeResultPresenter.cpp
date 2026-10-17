#include "BLMirrorChallengeResultPresenter.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMirrorChallengeResultView.h"
#include "BLResultManager.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "MirrorDataManager.h"
#include "MirrorRewardData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00658fe0;
extern "C" unsigned long UNK_00658ffa;
extern "C" unsigned long UNK_00659040;
extern "C" unsigned long UNK_00659068;
extern "C" unsigned long UNK_00659086;
extern "C" unsigned long UNK_006591ee;
extern "C" unsigned long UNK_0065921c;
extern "C" unsigned long UNK_00659288;
extern "C" unsigned long UNK_0065928a;
extern "C" unsigned long UNK_006592fe;
extern "C" unsigned long UNK_006593f2;
extern "C" unsigned long UNK_006593f3;
extern "C" unsigned long UNK_006593f4;
extern "C" unsigned long UNK_00659418;
extern "C" unsigned long UNK_006594b8;
extern "C" unsigned long UNK_00659658;
extern "C" unsigned long UNK_0065966c;
extern "C" unsigned long UNK_006596d8;
extern "C" unsigned long UNK_006597b2;
extern "C" unsigned long UNK_006597c0;
extern "C" unsigned long UNK_006597d0;
extern "C" unsigned long UNK_00659858;
extern "C" unsigned long UNK_00659860;
extern "C" unsigned long UNK_00659868;
extern "C" unsigned long UNK_00659a56;
extern "C" unsigned long UNK_00659c3a;
extern "C" unsigned long UNK_00659cec;
extern "C" unsigned long UNK_00659d9a;
extern "C" unsigned long _UNK_0065902c;
extern "C" unsigned long _UNK_00659030;
extern "C" unsigned long _UNK_00659044;
extern "C" unsigned long _UNK_0065906c;
extern "C" unsigned long _UNK_006591c0;
extern "C" unsigned long _UNK_006591c4;
extern "C" unsigned long _UNK_006591c8;
extern "C" unsigned long _UNK_006591cc;
extern "C" unsigned long _UNK_006591d0;
extern "C" unsigned long _UNK_006591d4;
extern "C" unsigned long _UNK_006591d8;
extern "C" unsigned long _UNK_006591dc;
extern "C" unsigned long _UNK_00659248;
extern "C" unsigned long _UNK_0065924c;
extern "C" unsigned long _UNK_00659294;
extern "C" unsigned long _UNK_00659298;
extern "C" unsigned long _UNK_00659624;
extern "C" unsigned long _UNK_00659628;
extern "C" unsigned long _UNK_0065962c;
extern "C" unsigned long _UNK_00659630;
extern "C" unsigned long _UNK_006596c4;
extern "C" unsigned long _UNK_006596c8;
extern "C" unsigned long _UNK_00659944;
extern "C" unsigned long _UNK_00659948;
extern "C" unsigned long _UNK_0065994c;
extern "C" unsigned long _UNK_00659950;
extern "C" unsigned long _UNK_00659954;
extern "C" unsigned long _UNK_00659958;
extern "C" unsigned long _UNK_0065995c;
extern "C" unsigned long _UNK_00659960;
extern "C" unsigned long _UNK_00659964;
extern "C" unsigned long _UNK_00659df0;
extern "C" unsigned long _UNK_00659df4;
extern "C" unsigned long _UNK_00659df8;
extern "C" unsigned long _UNK_00659dfc;
extern "C" unsigned long _UNK_00659e00;
extern "C" unsigned long _UNK_00659e04;
extern "C" unsigned long _UNK_00659e08;
extern "C" unsigned long _UNK_00659e0c;
extern "C" unsigned long _UNK_00659e10;
extern "C" unsigned long _UNK_00659e14;
extern "C" unsigned long _UNK_00659e18;
extern "C" unsigned long _UNK_00659ee8;
extern "C" unsigned long g_00658fe0;
extern "C" unsigned long g_00658ffa;
extern "C" unsigned long g_0065902c;
extern "C" unsigned long g_00659030;
extern "C" unsigned long g_00659040;
extern "C" unsigned long g_00659044;
extern "C" unsigned long g_00659068;
extern "C" unsigned long g_0065906c;
extern "C" unsigned long g_00659086;
extern "C" unsigned long g_006591c0;
extern "C" unsigned long g_006591c4;
extern "C" unsigned long g_006591c8;
extern "C" unsigned long g_006591cc;
extern "C" unsigned long g_006591d0;
extern "C" unsigned long g_006591d4;
extern "C" unsigned long g_006591d8;
extern "C" unsigned long g_006591dc;
extern "C" unsigned long g_006591ee;
extern "C" unsigned long g_0065921c;
extern "C" unsigned long g_00659248;
extern "C" unsigned long g_0065924c;
extern "C" unsigned long g_00659288;
extern "C" unsigned long g_0065928a;
extern "C" unsigned long g_00659294;
extern "C" unsigned long g_00659298;
extern "C" unsigned long g_006592fe;
extern "C" unsigned long g_006593f2;
extern "C" unsigned long g_006593f3;
extern "C" unsigned long g_006593f4;
extern "C" unsigned long g_00659418;
extern "C" unsigned long g_006594b8;
extern "C" unsigned long g_00659624;
extern "C" unsigned long g_00659628;
extern "C" unsigned long g_0065962c;
extern "C" unsigned long g_00659630;
extern "C" unsigned long g_00659658;
extern "C" unsigned long g_0065966c;
extern "C" unsigned long g_006596c4;
extern "C" unsigned long g_006596c8;
extern "C" unsigned long g_006596d8;
extern "C" unsigned long g_006597b2;
extern "C" unsigned long g_006597c0;
extern "C" unsigned long g_006597d0;
extern "C" unsigned long g_00659858;
extern "C" unsigned long g_00659860;
extern "C" unsigned long g_00659868;
extern "C" unsigned long g_00659944;
extern "C" unsigned long g_00659948;
extern "C" unsigned long g_0065994c;
extern "C" unsigned long g_00659950;
extern "C" unsigned long g_00659954;
extern "C" unsigned long g_00659958;
extern "C" unsigned long g_0065995c;
extern "C" unsigned long g_00659960;
extern "C" unsigned long g_00659964;
extern "C" unsigned long g_00659a56;
extern "C" unsigned long g_00659c3a;
extern "C" unsigned long g_00659cec;
extern "C" unsigned long g_00659d9a;
extern "C" unsigned long g_00659df0;
extern "C" unsigned long g_00659df4;
extern "C" unsigned long g_00659df8;
extern "C" unsigned long g_00659dfc;
extern "C" unsigned long g_00659e00;
extern "C" unsigned long g_00659e04;
extern "C" unsigned long g_00659e08;
extern "C" unsigned long g_00659e0c;
extern "C" unsigned long g_00659e10;
extern "C" unsigned long g_00659e14;
extern "C" unsigned long g_00659e18;
extern "C" unsigned long g_00659ee8;
bool BLMirrorChallengeResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMirrorChallengeResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMirrorChallengeResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMirrorChallengeResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMirrorChallengeResultPresenter::tick(float p1)
{
  return;
}

BLMirrorChallengeResultPresenter::~BLMirrorChallengeResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00658fe0 + g_0065902c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00658ffa + g_00659030,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMirrorChallengeResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}


BLMirrorChallengeResultPresenter::BLMirrorChallengeResultPresenter()
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
  iVar3 = *(int *)(&g_006591ee + g_00659248);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065921c + g_0065924c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMirrorChallengeResultPresenter::create(BLMirrorChallengeResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMirrorChallengeResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLMirrorChallengeResultPresenter::initWith(bool p1)
{
  undefined4 uVar1;
  
  if (p1 != 0) {
    uVar1 = (undefined4)(((MirrorDataManager *)this)->getInstance());
    ((MirrorDataManager *)uVar1)->getMirrorData(2, 1);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMirrorChallengeResultPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = g_006591c0;
  if ((int)(intptr_t)p1 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)(&g_00659086 + g_006591c4 + g_006591c0));
    piVar2 = (int *)func_0079e55c(p1,uVar7,
                                    *(undefined4 *)(&g_00659086 + g_006591c8 + g_006591c0),0
                                   );
    if (piVar2 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
      iVar4 = (**(code **)(*piVar2 + 0x128))(piVar2);
      if (iVar4 == 0) {
                    /* WARNING: Does not return;
        (*pcVar1)();
      }
      iVar4 = func_0079e55c(iVar4,uVar7,*(undefined4 *)(&g_00659086 + g_006591cc + iVar6),0);
      uVar8 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
      uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar4 = ((DataCacheManager *)uVar7)->getItemDataByID(uVar3);
      if (iVar4 != 0) {
        uVar7 = (undefined4)(((UIManager *)this)->shareManager());
        iVar4 = ((UIManager *)uVar7)->getUIObject(0x1f);
        if ((iVar4 == 0) ||
           (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(&g_00659086 + g_006591d0 + iVar6),
                                    *(undefined4 *)(&g_00659086 + g_006591d4 + iVar6),0),
           iVar4 == 0)) {
          uVar7 = (undefined4)(((UIManager *)this)->shareManager());
          iVar5 = ((UIManager *)uVar7)->showUIById(0x1f);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = func_0079e55c(iVar5,*(undefined4 *)(&g_00659086 + g_006591d0 + iVar6),
                                    *(undefined4 *)(&g_00659086 + g_006591d4 + iVar6),0);
          }
        }
        piVar2 = (int *)::operator new(0x30);
        ::new ((void *)piVar2) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
        (**(code **)(*piVar2 + 0x2c))(piVar2,uVar8);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                    *(undefined4 *)(&g_00659086 + g_006591d8 + iVar6),
                                    *(undefined4 *)(&g_00659086 + g_006591dc + iVar6),0),
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

void BLMirrorChallengeResultPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMirrorChallengeResultPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMirrorChallengeResultPresenter::initWithView(BLMirrorChallengeResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMirrorChallengeResultPresenter::onChallengeSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

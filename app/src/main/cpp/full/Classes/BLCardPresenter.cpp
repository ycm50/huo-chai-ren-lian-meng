#include "BLCardPresenter.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLCardView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BackPackData.h"
#include "CampaignData.h"
#include "CardData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "PagedScrollView.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050394c;
extern "C" unsigned long UNK_00503964;
extern "C" unsigned long UNK_0050397c;
extern "C" unsigned long UNK_00503994;
extern "C" unsigned long UNK_005039f0;
extern "C" unsigned long UNK_00503a0a;
extern "C" unsigned long UNK_00503a50;
extern "C" unsigned long UNK_00503a78;
extern "C" unsigned long UNK_00503ad4;
extern "C" unsigned long UNK_00503af6;
extern "C" unsigned long UNK_00503b24;
extern "C" unsigned long UNK_00503b92;
extern "C" unsigned long UNK_00503b94;
extern "C" unsigned long UNK_00503bac;
extern "C" unsigned long UNK_00503bae;
extern "C" unsigned long UNK_00503c02;
extern "C" unsigned long UNK_00503cae;
extern "C" unsigned long UNK_00503d16;
extern "C" unsigned long UNK_00503e0c;
extern "C" unsigned long UNK_00503e0d;
extern "C" unsigned long UNK_00503e0e;
extern "C" unsigned long UNK_00503e36;
extern "C" unsigned long UNK_00503ede;
extern "C" unsigned long UNK_00504092;
extern "C" unsigned long UNK_005040b2;
extern "C" unsigned long UNK_00504148;
extern "C" unsigned long UNK_0050418a;
extern "C" unsigned long UNK_005041c8;
extern "C" unsigned long UNK_00504278;
extern "C" unsigned long UNK_005042ba;
extern "C" unsigned long UNK_005042f8;
extern "C" unsigned long UNK_00504334;
extern "C" unsigned long UNK_0050437a;
extern "C" unsigned long UNK_0050438a;
extern "C" unsigned long UNK_005043c4;
extern "C" unsigned long UNK_00504426;
extern "C" unsigned long UNK_0050454c;
extern "C" unsigned long UNK_00504568;
extern "C" unsigned long UNK_0050459c;
extern "C" unsigned long UNK_005045a8;
extern "C" unsigned long UNK_005045ce;
extern "C" unsigned long UNK_005045fc;
extern "C" unsigned long UNK_0050462c;
extern "C" unsigned long _UNK_00503950;
extern "C" unsigned long _UNK_00503968;
extern "C" unsigned long _UNK_00503980;
extern "C" unsigned long _UNK_00503998;
extern "C" unsigned long _UNK_00503a3c;
extern "C" unsigned long _UNK_00503a40;
extern "C" unsigned long _UNK_00503a54;
extern "C" unsigned long _UNK_00503a7c;
extern "C" unsigned long _UNK_00503ae4;
extern "C" unsigned long _UNK_00503b50;
extern "C" unsigned long _UNK_00503b54;
extern "C" unsigned long _UNK_00503bbc;
extern "C" unsigned long _UNK_00503bc0;
extern "C" unsigned long _UNK_00503bc4;
extern "C" unsigned long _UNK_00503bc8;
extern "C" unsigned long _UNK_00503cd0;
extern "C" unsigned long _UNK_00503cd4;
extern "C" unsigned long _UNK_00503cd8;
extern "C" unsigned long _UNK_00503cdc;
extern "C" unsigned long _UNK_00503ce0;
extern "C" unsigned long _UNK_00503ce4;
extern "C" unsigned long _UNK_00503ce8;
extern "C" unsigned long _UNK_00504048;
extern "C" unsigned long _UNK_0050404c;
extern "C" unsigned long _UNK_00504050;
extern "C" unsigned long _UNK_00504054;
extern "C" unsigned long _UNK_00504224;
extern "C" unsigned long _UNK_00504228;
extern "C" unsigned long _UNK_0050422c;
extern "C" unsigned long _UNK_00504230;
extern "C" unsigned long _UNK_00504234;
extern "C" unsigned long _UNK_00504238;
extern "C" unsigned long _UNK_0050423c;
extern "C" unsigned long _UNK_0050431c;
extern "C" unsigned long _UNK_00504320;
extern "C" unsigned long _UNK_00504324;
extern "C" unsigned long _UNK_00504458;
extern "C" unsigned long _UNK_0050445c;
extern "C" unsigned long _UNK_00504460;
extern "C" unsigned long _UNK_00504464;
extern "C" unsigned long _UNK_00504468;
extern "C" unsigned long _UNK_0050446c;
extern "C" unsigned long _UNK_00504470;
extern "C" unsigned long _UNK_00504474;
extern "C" unsigned long _UNK_00504478;
extern "C" unsigned long _UNK_0050447c;
extern "C" unsigned long _UNK_00504480;
extern "C" unsigned long _UNK_00504730;
extern "C" unsigned long _UNK_00504734;
extern "C" unsigned long _UNK_00504738;
extern "C" unsigned long _UNK_0050473c;
extern "C" unsigned long _UNK_00504740;
extern "C" unsigned long _UNK_00504744;
extern "C" unsigned long _UNK_00504748;
extern "C" unsigned long _UNK_0050474c;
extern "C" unsigned long _UNK_00504750;
extern "C" unsigned long _UNK_00504754;
extern "C" unsigned long _UNK_00504758;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0050394c;
extern "C" unsigned long g_00503950;
extern "C" unsigned long g_00503964;
extern "C" unsigned long g_00503968;
extern "C" unsigned long g_0050397c;
extern "C" unsigned long g_00503980;
extern "C" unsigned long g_00503994;
extern "C" unsigned long g_00503998;
extern "C" unsigned long g_005039f0;
extern "C" unsigned long g_00503a0a;
extern "C" unsigned long g_00503a3c;
extern "C" unsigned long g_00503a40;
extern "C" unsigned long g_00503a50;
extern "C" unsigned long g_00503a54;
extern "C" unsigned long g_00503a78;
extern "C" unsigned long g_00503a7c;
extern "C" unsigned long g_00503ad4;
extern "C" unsigned long g_00503ae4;
extern "C" unsigned long g_00503af6;
extern "C" unsigned long g_00503b24;
extern "C" unsigned long g_00503b50;
extern "C" unsigned long g_00503b54;
extern "C" unsigned long g_00503b92;
extern "C" unsigned long g_00503b94;
extern "C" unsigned long g_00503bac;
extern "C" unsigned long g_00503bae;
extern "C" unsigned long g_00503bbc;
extern "C" unsigned long g_00503bc0;
extern "C" unsigned long g_00503bc4;
extern "C" unsigned long g_00503bc8;
extern "C" unsigned long g_00503c02;
extern "C" unsigned long g_00503cae;
extern "C" unsigned long g_00503cd0;
extern "C" unsigned long g_00503cd4;
extern "C" unsigned long g_00503cd8;
extern "C" unsigned long g_00503cdc;
extern "C" unsigned long g_00503ce0;
extern "C" unsigned long g_00503ce4;
extern "C" unsigned long g_00503ce8;
extern "C" unsigned long g_00503d16;
extern "C" unsigned long g_00503e0c;
extern "C" unsigned long g_00503e0d;
extern "C" unsigned long g_00503e0e;
extern "C" unsigned long g_00503e36;
extern "C" unsigned long g_00503ede;
extern "C" unsigned long g_00504048;
extern "C" unsigned long g_0050404c;
extern "C" unsigned long g_00504050;
extern "C" unsigned long g_00504054;
extern "C" unsigned long g_00504092;
extern "C" unsigned long g_005040b2;
extern "C" unsigned long g_00504148;
extern "C" unsigned long g_0050418a;
extern "C" unsigned long g_005041c8;
extern "C" unsigned long g_00504224;
extern "C" unsigned long g_00504228;
extern "C" unsigned long g_0050422c;
extern "C" unsigned long g_00504230;
extern "C" unsigned long g_00504234;
extern "C" unsigned long g_00504238;
extern "C" unsigned long g_0050423c;
extern "C" unsigned long g_00504278;
extern "C" unsigned long g_005042ba;
extern "C" unsigned long g_005042f8;
extern "C" unsigned long g_0050431c;
extern "C" unsigned long g_00504320;
extern "C" unsigned long g_00504324;
extern "C" unsigned long g_00504334;
extern "C" unsigned long g_0050437a;
extern "C" unsigned long g_0050438a;
extern "C" unsigned long g_005043c4;
extern "C" unsigned long g_00504426;
extern "C" unsigned long g_00504458;
extern "C" unsigned long g_0050445c;
extern "C" unsigned long g_00504460;
extern "C" unsigned long g_00504464;
extern "C" unsigned long g_00504468;
extern "C" unsigned long g_0050446c;
extern "C" unsigned long g_00504470;
extern "C" unsigned long g_00504474;
extern "C" unsigned long g_00504478;
extern "C" unsigned long g_0050447c;
extern "C" unsigned long g_00504480;
extern "C" unsigned long g_0050454c;
extern "C" unsigned long g_00504568;
extern "C" unsigned long g_0050459c;
extern "C" unsigned long g_005045a8;
extern "C" unsigned long g_005045ce;
extern "C" unsigned long g_005045fc;
extern "C" unsigned long g_0050462c;
extern "C" unsigned long g_00504730;
extern "C" unsigned long g_00504734;
extern "C" unsigned long g_00504738;
extern "C" unsigned long g_0050473c;
extern "C" unsigned long g_00504740;
extern "C" unsigned long g_00504744;
extern "C" unsigned long g_00504748;
extern "C" unsigned long g_0050474c;
extern "C" unsigned long g_00504750;
extern "C" unsigned long g_00504754;
extern "C" unsigned long g_00504758;
bool BLCardPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCardPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCardPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCardPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCardPresenter::tick(float p1)
{
  return;
}

BLCardPresenter::~BLCardPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005039f0 + g_00503a3c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00503a0a + g_00503a40,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLCardPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = ((BLMission *)this)->currentMission();
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMission *)this)->currentMission();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
    iVar1 = (**(code **)(*piVar2 + 0xf8))();
    if (iVar1 != 0) {
      piVar2 = (int *)((BLMission *)this)->currentMission();
      (**(code **)(*piVar2 + 0x1fc))(piVar2,0);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
      iVar1 = (**(code **)(*piVar2 + 0xc0))();
      if (iVar1 != 0) {
        uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_00503ad4 + g_00503ae4)
        ;
      }
    }
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(199);
  return;
}

BLCardPresenter::BLCardPresenter()
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
  iVar3 = *(int *)(&g_00503af6 + g_00503b50);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00503b24 + g_00503b54,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCardPresenter::create(BLCardView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLCardPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLCardPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCardPresenter::showView()
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar5 = 0;
  do {
    iVar5 = (undefined4)(intptr_t)(iVar5 + 1);
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00503c02 + (intptr_t)(g_00503cd0)), iVar5);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e45c(auStack_20,uVar1,auStack_24);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar4 = *(code **)(*piVar2 + 0x88);
    0 /* ctorZero */;
    (*pcVar4)(piVar2,auStack_20);
    pcVar4 = *(code **)(*piVar2 + 0x4c);
    uVar1 = (undefined4)(func_0079e2ec(iVar5 * g_00503cdc + -0x113));
    0 /* ctorZero */;
    (*pcVar4)(piVar2,auStack_20);
    ((BLCardView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
    piVar3 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
    (**(code **)(*(int *)(piVar3) + (200)))(piVar3,piVar2);
  } while (iVar5 != 3);
  ((BLCardView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  pcVar4 = *(code **)(*piVar2 + 0x88);
  0 /* ctorZero */;
  (*pcVar4)(piVar2,auStack_20);
  uVar1 = (undefined4)(((BLCardView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00503cae + (intptr_t)(g_00503ce8)),auStack_24);
  (((PagedScrollView *)(uVar1)))->enablejiantou(*(std::string *)auStack_20);
  func_0079e2bc(auStack_20);
  return;
}

void BLCardPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLCardPresenter::initWithView(BLCardView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLCardPresenter::onChangeView(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCardPresenter::onJiHuo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCardPresenter::onChargeComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

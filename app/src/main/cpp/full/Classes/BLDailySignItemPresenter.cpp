#include "BLDailySignItemPresenter.h"
#include "CCNotificationCenter.h"
#include "HttpResponse.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "DailySignItemData.h"
#include "BLDailySignItemView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "CCJson.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00523750;
extern "C" unsigned long UNK_0052376a;
extern "C" unsigned long UNK_005237b0;
extern "C" unsigned long UNK_005237d8;
extern "C" unsigned long UNK_00523852;
extern "C" unsigned long UNK_0052386a;
extern "C" unsigned long UNK_005238d8;
extern "C" unsigned long UNK_005238e6;
extern "C" unsigned long UNK_00523916;
extern "C" unsigned long UNK_00523936;
extern "C" unsigned long UNK_005239ec;
extern "C" unsigned long UNK_00523a28;
extern "C" unsigned long UNK_00523a8e;
extern "C" unsigned long UNK_00523ae0;
extern "C" unsigned long UNK_00523b08;
extern "C" unsigned long UNK_00523b86;
extern "C" unsigned long UNK_00523c00;
extern "C" unsigned long UNK_00523c02;
extern "C" unsigned long UNK_00523cea;
extern "C" unsigned long UNK_00523d88;
extern "C" unsigned long UNK_00523d89;
extern "C" unsigned long UNK_00523d8a;
extern "C" unsigned long UNK_00523da8;
extern "C" unsigned long UNK_00523dd6;
extern "C" unsigned long UNK_00523e5c;
extern "C" unsigned long UNK_00523ed6;
extern "C" unsigned long UNK_00523f1a;
extern "C" unsigned long UNK_00523f4c;
extern "C" unsigned long UNK_00523fa6;
extern "C" unsigned long UNK_00523fe6;
extern "C" unsigned long UNK_00523ffe;
extern "C" unsigned long UNK_00524048;
extern "C" unsigned long UNK_00524096;
extern "C" unsigned long UNK_005240d2;
extern "C" unsigned long UNK_00524152;
extern "C" unsigned long UNK_005241d2;
extern "C" unsigned long UNK_0052426a;
extern "C" unsigned long UNK_00524278;
extern "C" unsigned long UNK_005242ae;
extern "C" unsigned long UNK_005242ce;
extern "C" unsigned long UNK_005242e4;
extern "C" unsigned long UNK_005243c6;
extern "C" unsigned long UNK_0052443a;
extern "C" unsigned long _UNK_0052379c;
extern "C" unsigned long _UNK_005237a0;
extern "C" unsigned long _UNK_005237b4;
extern "C" unsigned long _UNK_005237dc;
extern "C" unsigned long _UNK_0052389c;
extern "C" unsigned long _UNK_005238a0;
extern "C" unsigned long _UNK_005238ec;
extern "C" unsigned long _UNK_005238f0;
extern "C" unsigned long _UNK_00523944;
extern "C" unsigned long _UNK_00523948;
extern "C" unsigned long _UNK_00523b44;
extern "C" unsigned long _UNK_00523b48;
extern "C" unsigned long _UNK_00523b4c;
extern "C" unsigned long _UNK_00523b50;
extern "C" unsigned long _UNK_00523b54;
extern "C" unsigned long _UNK_00523b58;
extern "C" unsigned long _UNK_00523ea4;
extern "C" unsigned long _UNK_00523ea8;
extern "C" unsigned long _UNK_00523eac;
extern "C" unsigned long _UNK_00523eb0;
extern "C" unsigned long _UNK_00523eb4;
extern "C" unsigned long _UNK_00523eb8;
extern "C" unsigned long _UNK_00523ebc;
extern "C" unsigned long _UNK_00523ec0;
extern "C" unsigned long _UNK_00524208;
extern "C" unsigned long _UNK_0052420c;
extern "C" unsigned long _UNK_00524210;
extern "C" unsigned long _UNK_00524214;
extern "C" unsigned long _UNK_00524218;
extern "C" unsigned long _UNK_0052421c;
extern "C" unsigned long _UNK_00524220;
extern "C" unsigned long _UNK_00524224;
extern "C" unsigned long _UNK_00524228;
extern "C" unsigned long _UNK_0052422c;
extern "C" unsigned long _UNK_00524230;
extern "C" unsigned long _UNK_00524234;
extern "C" unsigned long _UNK_00524238;
extern "C" unsigned long _UNK_0052423c;
extern "C" unsigned long _UNK_00524240;
extern "C" unsigned long _UNK_00524244;
extern "C" unsigned long _UNK_00524248;
extern "C" unsigned long _UNK_0052424c;
extern "C" unsigned long _UNK_00524418;
extern "C" unsigned long _UNK_0052441c;
extern "C" unsigned long _UNK_00524420;
extern "C" unsigned long _UNK_00524424;
extern "C" unsigned long _UNK_00524428;
extern "C" unsigned long _UNK_0052442c;
extern "C" unsigned long _UNK_00524458;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00523750;
extern "C" unsigned long g_0052376a;
extern "C" unsigned long g_0052379c;
extern "C" unsigned long g_005237a0;
extern "C" unsigned long g_005237b0;
extern "C" unsigned long g_005237b4;
extern "C" unsigned long g_005237d8;
extern "C" unsigned long g_005237dc;
extern "C" unsigned long g_00523852;
extern "C" unsigned long g_0052386a;
extern "C" unsigned long g_0052389c;
extern "C" unsigned long g_005238a0;
extern "C" unsigned long g_005238d8;
extern "C" unsigned long g_005238e6;
extern "C" unsigned long g_005238ec;
extern "C" unsigned long g_005238f0;
extern "C" unsigned long g_00523916;
extern "C" unsigned long g_00523936;
extern "C" unsigned long g_00523944;
extern "C" unsigned long g_00523948;
extern "C" unsigned long g_005239ec;
extern "C" unsigned long g_00523a28;
extern "C" unsigned long g_00523a8e;
extern "C" unsigned long g_00523ae0;
extern "C" unsigned long g_00523b08;
extern "C" unsigned long g_00523b44;
extern "C" unsigned long g_00523b48;
extern "C" unsigned long g_00523b4c;
extern "C" unsigned long g_00523b50;
extern "C" unsigned long g_00523b54;
extern "C" unsigned long g_00523b58;
extern "C" unsigned long g_00523b86;
extern "C" unsigned long g_00523c00;
extern "C" unsigned long g_00523c02;
extern "C" unsigned long g_00523cea;
extern "C" unsigned long g_00523d88;
extern "C" unsigned long g_00523d89;
extern "C" unsigned long g_00523d8a;
extern "C" unsigned long g_00523da8;
extern "C" unsigned long g_00523dd6;
extern "C" unsigned long g_00523e5c;
extern "C" unsigned long g_00523ea4;
extern "C" unsigned long g_00523ea8;
extern "C" unsigned long g_00523eac;
extern "C" unsigned long g_00523eb0;
extern "C" unsigned long g_00523eb4;
extern "C" unsigned long g_00523eb8;
extern "C" unsigned long g_00523ebc;
extern "C" unsigned long g_00523ec0;
extern "C" unsigned long g_00523ed6;
extern "C" unsigned long g_00523f1a;
extern "C" unsigned long g_00523f4c;
extern "C" unsigned long g_00523fa6;
extern "C" unsigned long g_00523fe6;
extern "C" unsigned long g_00523ffe;
extern "C" unsigned long g_00524048;
extern "C" unsigned long g_00524096;
extern "C" unsigned long g_005240d2;
extern "C" unsigned long g_00524152;
extern "C" unsigned long g_005241d2;
extern "C" unsigned long g_00524208;
extern "C" unsigned long g_0052420c;
extern "C" unsigned long g_00524210;
extern "C" unsigned long g_00524214;
extern "C" unsigned long g_00524218;
extern "C" unsigned long g_0052421c;
extern "C" unsigned long g_00524220;
extern "C" unsigned long g_00524224;
extern "C" unsigned long g_00524228;
extern "C" unsigned long g_0052422c;
extern "C" unsigned long g_00524230;
extern "C" unsigned long g_00524234;
extern "C" unsigned long g_00524238;
extern "C" unsigned long g_0052423c;
extern "C" unsigned long g_00524240;
extern "C" unsigned long g_00524244;
extern "C" unsigned long g_00524248;
extern "C" unsigned long g_0052424c;
extern "C" unsigned long g_0052426a;
extern "C" unsigned long g_00524278;
extern "C" unsigned long g_005242ae;
extern "C" unsigned long g_005242ce;
extern "C" unsigned long g_005242e4;
extern "C" unsigned long g_005243c6;
extern "C" unsigned long g_00524418;
extern "C" unsigned long g_0052441c;
extern "C" unsigned long g_00524420;
extern "C" unsigned long g_00524424;
extern "C" unsigned long g_00524428;
extern "C" unsigned long g_0052442c;
extern "C" unsigned long g_0052443a;
extern "C" unsigned long g_00524458;
DailySignItemData* BLDailySignItemPresenter::getItemInfoData() const
{
  return (DailySignItemData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLDailySignItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDailySignItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDailySignItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDailySignItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDailySignItemPresenter::tick(float p1)
{
  return;
}

BLDailySignItemPresenter::~BLDailySignItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00523750 + g_0052379c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052376a + g_005237a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLDailySignItemPresenter::setItemInfoData(DailySignItemData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLDailySignItemPresenter::BLDailySignItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00523852 + g_0052389c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052386a + g_005238a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

undefined4 BLDailySignItemPresenter::create(BLDailySignItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLDailySignItemPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005238d8 + g_005238ec);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005238e6 + g_005238f0);
  return;
}

void BLDailySignItemPresenter::onEnter()
{
  return;
}






void BLDailySignItemPresenter::onBtnGet(cocos2d::CCObject* p1, unsigned int p2)
{
  cocos2d::CCLog((char const*)&g_0052443a + g_00524458);
  if (*(char *)(((int)this) + 0x20) == '\0') {
    *(undefined1 *)(((int)this) + 0x20) = 1;
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    BLDailySignItemPresenter::sendGetRewardRequest();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLDailySignItemPresenter::onIconBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))());
  piVar3 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(uVar2),(int *)0);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))());
  if ((iVar4 == 1) || (iVar4 = (**(code **)(*(int *)(piVar3) + (0x30)))(piVar3), iVar4 == 4)) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showItemDataInfo((ItemData*)piVar3);
  }
  return;
}

void BLDailySignItemPresenter::initWithView(BLDailySignItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDailySignItemView *)p1)->getBtnget();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00523916 + g_00523944),0,0x20);
  piVar1 = (int *)((BLDailySignItemView *)*(undefined4 *)(((int)this) + 0x18))->getIconBtn();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00523936 + g_00523948),0,0x20);
  return;
}

void BLDailySignItemPresenter::initWithItemData(DailySignItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDailySignItemPresenter::onGetRewardCompleted()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDailySignItemPresenter::onHttpRequestCompleted(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDailySignItemPresenter::sendGetRewardRequest()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

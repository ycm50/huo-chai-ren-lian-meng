#include "BLTreasureHeroPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLTreasureHeroView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLMonsterGroupData.h"
#include "BLPageControl.h"
#include "BLRichText.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "RichTextData.h"
#include "RoleData.h"
#include "RoleInfoData.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "TreasureMissionData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" unsigned long g_005dda34;
extern "C" unsigned long g_005dd9c8;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005dd758;
extern "C" unsigned long UNK_005dd770;
extern "C" unsigned long UNK_005dd788;
extern "C" unsigned long UNK_005dd7f8;
extern "C" unsigned long UNK_005dd81c;
extern "C" unsigned long UNK_005dd87c;
extern "C" unsigned long UNK_005dd8a4;
extern "C" unsigned long UNK_005dd8c2;
extern "C" unsigned long UNK_005dd8e6;
extern "C" unsigned long UNK_005dd8f6;
extern "C" unsigned long UNK_005dd928;
extern "C" unsigned long UNK_005ddb88;
extern "C" unsigned long UNK_005ddc4c;
extern "C" unsigned long UNK_005ddcb2;
extern "C" unsigned long UNK_005ddcde;
extern "C" unsigned long UNK_005dddfc;
extern "C" unsigned long UNK_005dde32;
extern "C" unsigned long UNK_005ddf0a;
extern "C" unsigned long UNK_005ddf3e;
extern "C" unsigned long UNK_005ddf70;
extern "C" unsigned long UNK_005ddfa8;
extern "C" unsigned long UNK_005ddfca;
extern "C" unsigned long UNK_005ddfd7;
extern "C" unsigned long UNK_005ddfe0;
extern "C" unsigned long UNK_005de006;
extern "C" unsigned long UNK_005de1dc;
extern "C" unsigned long UNK_005de20c;
extern "C" unsigned long UNK_005de23c;
extern "C" unsigned long UNK_005de352;
extern "C" unsigned long UNK_005de388;
extern "C" unsigned long UNK_005de460;
extern "C" unsigned long UNK_005de46c;
extern "C" unsigned long UNK_005de4a2;
extern "C" unsigned long UNK_005de4da;
extern "C" unsigned long UNK_005de4fc;
extern "C" unsigned long UNK_005de509;
extern "C" unsigned long UNK_005de512;
extern "C" unsigned long UNK_005de538;
extern "C" unsigned long UNK_005de63e;
extern "C" unsigned long UNK_005de66a;
extern "C" unsigned long UNK_005de6b2;
extern "C" unsigned long UNK_005de81e;
extern "C" unsigned long UNK_005de98e;
extern "C" unsigned long UNK_005de9e6;
extern "C" unsigned long UNK_005deb90;
extern "C" unsigned long UNK_005deb92;
extern "C" unsigned long UNK_005debf8;
extern "C" unsigned long UNK_005dec36;
extern "C" unsigned long UNK_005dede6;
extern "C" unsigned long UNK_005dee1e;
extern "C" unsigned long UNK_005dee3e;
extern "C" unsigned long _UNK_005dd75c;
extern "C" unsigned long _UNK_005dd774;
extern "C" unsigned long _UNK_005dd78c;
extern "C" unsigned long _UNK_005dd868;
extern "C" unsigned long _UNK_005dd86c;
extern "C" unsigned long _UNK_005dd880;
extern "C" unsigned long _UNK_005dd8a8;
extern "C" unsigned long _UNK_005dd8d4;
extern "C" unsigned long _UNK_005dd964;
extern "C" unsigned long _UNK_005dd968;
extern "C" unsigned long _UNK_005dd96c;
extern "C" unsigned long _UNK_005ddf0c;
extern "C" unsigned long _UNK_005ddf10;
extern "C" unsigned long _UNK_005ddf14;
extern "C" unsigned long _UNK_005ddf18;
extern "C" unsigned long _UNK_005ddf1c;
extern "C" unsigned long _UNK_005ddf20;
extern "C" unsigned long _UNK_005ddf24;
extern "C" unsigned long _UNK_005ddf28;
extern "C" unsigned long _UNK_005ddf2c;
extern "C" unsigned long _UNK_005ddf30;
extern "C" unsigned long _UNK_005de148;
extern "C" unsigned long _UNK_005de14c;
extern "C" unsigned long _UNK_005de150;
extern "C" unsigned long _UNK_005de154;
extern "C" unsigned long _UNK_005de158;
extern "C" unsigned long _UNK_005de15c;
extern "C" unsigned long _UNK_005de160;
extern "C" unsigned long _UNK_005de164;
extern "C" unsigned long _UNK_005de168;
extern "C" unsigned long _UNK_005de16c;
extern "C" unsigned long _UNK_005de53c;
extern "C" unsigned long _UNK_005de540;
extern "C" unsigned long _UNK_005de544;
extern "C" unsigned long _UNK_005de548;
extern "C" unsigned long _UNK_005de54c;
extern "C" unsigned long _UNK_005de550;
extern "C" unsigned long _UNK_005de554;
extern "C" unsigned long _UNK_005de558;
extern "C" unsigned long _UNK_005de55c;
extern "C" unsigned long _UNK_005de560;
extern "C" unsigned long _UNK_005de564;
extern "C" unsigned long _UNK_005de568;
extern "C" unsigned long _UNK_005de56c;
extern "C" unsigned long _UNK_005de570;
extern "C" unsigned long _UNK_005de574;
extern "C" unsigned long _UNK_005de578;
extern "C" unsigned long _UNK_005de778;
extern "C" unsigned long _UNK_005de77c;
extern "C" unsigned long _UNK_005de780;
extern "C" unsigned long _UNK_005de784;
extern "C" unsigned long _UNK_005de788;
extern "C" unsigned long _UNK_005de78c;
extern "C" unsigned long _UNK_005de838;
extern "C" unsigned long _UNK_005ded18;
extern "C" unsigned long _UNK_005ded1c;
extern "C" unsigned long _UNK_005ded20;
extern "C" unsigned long _UNK_005ded24;
extern "C" unsigned long _UNK_005ded28;
extern "C" unsigned long _UNK_005ded2c;
extern "C" unsigned long _UNK_005ded30;
extern "C" unsigned long _UNK_005ded8c;
extern "C" unsigned long _UNK_005ded90;
extern "C" unsigned long _UNK_005dee00;
extern "C" unsigned long _UNK_005dee68;
extern "C" unsigned long _UNK_005dee6c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_005dd758;
extern "C" unsigned long g_005dd75c;
extern "C" unsigned long g_005dd770;
extern "C" unsigned long g_005dd774;
extern "C" unsigned long g_005dd788;
extern "C" unsigned long g_005dd78c;
extern "C" unsigned long g_005dd7f8;
extern "C" unsigned long g_005dd81c;
extern "C" unsigned long g_005dd868;
extern "C" unsigned long g_005dd86c;
extern "C" unsigned long g_005dd87c;
extern "C" unsigned long g_005dd880;
extern "C" unsigned long g_005dd8a4;
extern "C" unsigned long g_005dd8a8;
extern "C" unsigned long g_005dd8c2;
extern "C" unsigned long g_005dd8d4;
extern "C" unsigned long g_005dd8e6;
extern "C" unsigned long g_005dd8f6;
extern "C" unsigned long g_005dd928;
extern "C" unsigned long g_005dd964;
extern "C" unsigned long g_005dd968;
extern "C" unsigned long g_005dd96c;
extern "C" unsigned long g_005ddb88;
extern "C" unsigned long g_005ddc4c;
extern "C" unsigned long g_005ddcb2;
extern "C" unsigned long g_005ddcde;
extern "C" unsigned long g_005dddfc;
extern "C" unsigned long g_005dde32;
extern "C" unsigned long g_005ddf0a;
extern "C" unsigned long g_005ddf0c;
extern "C" unsigned long g_005ddf10;
extern "C" unsigned long g_005ddf14;
extern "C" unsigned long g_005ddf18;
extern "C" unsigned long g_005ddf1c;
extern "C" unsigned long g_005ddf20;
extern "C" unsigned long g_005ddf24;
extern "C" unsigned long g_005ddf28;
extern "C" unsigned long g_005ddf2c;
extern "C" unsigned long g_005ddf30;
extern "C" unsigned long g_005ddf3e;
extern "C" unsigned long g_005ddf70;
extern "C" unsigned long g_005ddfa8;
extern "C" unsigned long g_005ddfca;
extern "C" unsigned long g_005ddfd7;
extern "C" unsigned long g_005ddfe0;
extern "C" unsigned long g_005de006;
extern "C" unsigned long g_005de148;
extern "C" unsigned long g_005de14c;
extern "C" unsigned long g_005de150;
extern "C" unsigned long g_005de154;
extern "C" unsigned long g_005de158;
extern "C" unsigned long g_005de15c;
extern "C" unsigned long g_005de160;
extern "C" unsigned long g_005de164;
extern "C" unsigned long g_005de168;
extern "C" unsigned long g_005de16c;
extern "C" unsigned long g_005de1dc;
extern "C" unsigned long g_005de20c;
extern "C" unsigned long g_005de23c;
extern "C" unsigned long g_005de352;
extern "C" unsigned long g_005de388;
extern "C" unsigned long g_005de460;
extern "C" unsigned long g_005de46c;
extern "C" unsigned long g_005de4a2;
extern "C" unsigned long g_005de4da;
extern "C" unsigned long g_005de4fc;
extern "C" unsigned long g_005de509;
extern "C" unsigned long g_005de512;
extern "C" unsigned long g_005de538;
extern "C" unsigned long g_005de53c;
extern "C" unsigned long g_005de540;
extern "C" unsigned long g_005de544;
extern "C" unsigned long g_005de548;
extern "C" unsigned long g_005de54c;
extern "C" unsigned long g_005de550;
extern "C" unsigned long g_005de554;
extern "C" unsigned long g_005de558;
extern "C" unsigned long g_005de55c;
extern "C" unsigned long g_005de560;
extern "C" unsigned long g_005de564;
extern "C" unsigned long g_005de568;
extern "C" unsigned long g_005de56c;
extern "C" unsigned long g_005de570;
extern "C" unsigned long g_005de574;
extern "C" unsigned long g_005de578;
extern "C" unsigned long g_005de63e;
extern "C" unsigned long g_005de66a;
extern "C" unsigned long g_005de6b2;
extern "C" unsigned long g_005de778;
extern "C" unsigned long g_005de77c;
extern "C" unsigned long g_005de780;
extern "C" unsigned long g_005de784;
extern "C" unsigned long g_005de788;
extern "C" unsigned long g_005de78c;
extern "C" unsigned long g_005de81e;
extern "C" unsigned long g_005de838;
extern "C" unsigned long g_005de98e;
extern "C" unsigned long g_005de9e6;
extern "C" unsigned long g_005deb90;
extern "C" unsigned long g_005deb92;
extern "C" unsigned long g_005debf8;
extern "C" unsigned long g_005dec36;
extern "C" unsigned long g_005ded18;
extern "C" unsigned long g_005ded1c;
extern "C" unsigned long g_005ded20;
extern "C" unsigned long g_005ded24;
extern "C" unsigned long g_005ded28;
extern "C" unsigned long g_005ded2c;
extern "C" unsigned long g_005ded30;
extern "C" unsigned long g_005ded8c;
extern "C" unsigned long g_005ded90;
extern "C" unsigned long g_005dede6;
extern "C" unsigned long g_005dee00;
extern "C" unsigned long g_005dee1e;
extern "C" unsigned long g_005dee3e;
extern "C" unsigned long g_005dee68;
extern "C" unsigned long g_005dee6c;
bool BLTreasureHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTreasureHeroPresenter::~BLTreasureHeroPresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_005dd7f8 + g_005dd868);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_005dd81c + g_005dd86c,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 9);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureHeroPresenter::tick(float p1)
{
  undefined4 uVar1;
  
  if (*(char *)(((int)this) + 0x1c) != '\0') {
    *(undefined1 *)(((int)this) + 0x1c) = 0;
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar1)->showToast((char const*)&g_005dd8c2 + g_005dd8d4);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x1f5);
  }
  return;
}

BLTreasureHeroPresenter::BLTreasureHeroPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005dd8e6 + g_005dd964);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  iVar4 = g_005dd968;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_005dd8f6 + iVar4);
  *(int *)((int)this + 4*(9)) = iVar4 + 0xc;
  *(int *)((int)this + 4*(10)) = iVar4 + 0xc;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005dd928 + g_005dd96c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureHeroPresenter::onEnter()
{
  return;
}

void BLTreasureHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLTreasureHeroPresenter::create(BLTreasureHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLTreasureHeroPresenter::initdata()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  
  iVar1 = (undefined4)(intptr_t)(g_005dda34);
  *(undefined1 *)(((int)this) + 0x1d) = 1;
  *(undefined1 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  func_0079e2dc(((int)this) + 0x24,&g_005dd9c8 + iVar1,p3,1,p4);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x120);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x130);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x13c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  return;
}

void BLTreasureHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::initrole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::getrandomroleid()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::onModifyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::initboss()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureHeroPresenter::initother()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTreasureHeroPresenter::initWithView(BLTreasureHeroView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005dee1e + (intptr_t)(g_005dee68))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005dee3e + (intptr_t)(g_005dee6c))),0,0x20);
  BLTreasureHeroPresenter::initdata();
  BLTreasureHeroPresenter::initrole();
  BLTreasureHeroPresenter::initboss();
  BLTreasureHeroPresenter::initother();
  return 1;
}

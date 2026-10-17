#include "BLTalentUpInfoPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLTalentUpDebrisItemPresenter.h"
#include "BLTalentUpDebrisItemView.h"
#include "BLTalentUpInfoView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "TalentData.h"
#include "TalentUserData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a02a4;
extern "C" unsigned long UNK_006a02bc;
extern "C" unsigned long UNK_006a02d4;
extern "C" unsigned long UNK_006a03c8;
extern "C" unsigned long UNK_006a03e2;
extern "C" unsigned long UNK_006a0428;
extern "C" unsigned long UNK_006a0450;
extern "C" unsigned long UNK_006a06d2;
extern "C" unsigned long UNK_006a06ea;
extern "C" unsigned long UNK_006a0764;
extern "C" unsigned long UNK_006a0798;
extern "C" unsigned long UNK_006a07c4;
extern "C" unsigned long UNK_006a0850;
extern "C" unsigned long _UNK_006a02a8;
extern "C" unsigned long _UNK_006a02c0;
extern "C" unsigned long _UNK_006a02d8;
extern "C" unsigned long _UNK_006a0414;
extern "C" unsigned long _UNK_006a0418;
extern "C" unsigned long _UNK_006a042c;
extern "C" unsigned long _UNK_006a0454;
extern "C" unsigned long _UNK_006a0714;
extern "C" unsigned long _UNK_006a0718;
extern "C" unsigned long _UNK_006a076c;
extern "C" unsigned long _UNK_006a08e8;
extern "C" unsigned long _UNK_006a08ec;
extern "C" unsigned long _UNK_006a08f0;
extern "C" unsigned long g_006a02a4;
extern "C" unsigned long g_006a02a8;
extern "C" unsigned long g_006a02bc;
extern "C" unsigned long g_006a02c0;
extern "C" unsigned long g_006a02d4;
extern "C" unsigned long g_006a02d8;
extern "C" unsigned long g_006a03c8;
extern "C" unsigned long g_006a03e2;
extern "C" unsigned long g_006a0414;
extern "C" unsigned long g_006a0418;
extern "C" unsigned long g_006a0428;
extern "C" unsigned long g_006a042c;
extern "C" unsigned long g_006a0450;
extern "C" unsigned long g_006a0454;
extern "C" unsigned long g_006a06d2;
extern "C" unsigned long g_006a06ea;
extern "C" unsigned long g_006a0714;
extern "C" unsigned long g_006a0718;
extern "C" unsigned long g_006a0764;
extern "C" unsigned long g_006a076c;
extern "C" unsigned long g_006a0798;
extern "C" unsigned long g_006a07c4;
extern "C" unsigned long g_006a0850;
extern "C" unsigned long g_006a08e8;
extern "C" unsigned long g_006a08ec;
extern "C" unsigned long g_006a08f0;
bool BLTalentUpInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentUpInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentUpInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentUpInfoPresenter::onBtnIcon(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLTalentUpInfoPresenter::~BLTalentUpInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a03c8 + g_006a0414);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a03e2 + g_006a0418,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentUpInfoPresenter::BLTalentUpInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a06d2 + g_006a0714);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a06ea + g_006a0718,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentUpInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentUpInfoPresenter::initWithView(BLTalentUpInfoView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTalentUpInfoView *)p1)->getBtnIcon();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006a0764 + g_006a076c),0,0x20);
  return;
}

void BLTalentUpInfoPresenter::onEnter()
{
  return;
}

void BLTalentUpInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTalentUpInfoPresenter::initWithID(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int aiStack_5c [3];
  int aiStack_50 [3];
  undefined1 auStack_44 [40];
  int iStack_1c;
  
  piVar8 = *(int **)((unsigned char *)((char *)&g_006a0798 + (intptr_t)(g_006a08e8)));
  iStack_1c = (int)*(int *)&(*piVar8);
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getTalentDataById(p1),(int *)0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x30)))(aiStack_50,piVar2);
    uVar1 = (undefined4)(intptr_t)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006a07c4 + (intptr_t)(g_006a08ec)), aiStack_50[0]));
    func_0079e2bc(aiStack_50);
    uVar1 = (undefined4)(((cocos2d::CCString *)(uVar1))->getCString());
    func_0079e45c(aiStack_50,uVar1,aiStack_5c);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(aiStack_50);
    piVar4 = (int *)((BLTalentUpInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getSpIcon();
    pcVar5 = *(code **)(*piVar4 + 0x22c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))(piVar3));
    (*pcVar5)(piVar4,uVar1);
    func_0079e34c(auStack_44,0,0x28);
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    uVar10 = (undefined4)(1);
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x168)))());
    piVar3 = (int *)((TalentUserData *)(uVar1))->getItemDataById(p1);
    if (piVar3 != (int *)0x0) {
      uVar10 = (undefined4)((**(code **)(*(int *)(piVar3) + (8)))());
    }
    func_0079e904(auStack_44,(unsigned char *)((char *)&g_006a0850 + (intptr_t)(g_006a08f0)),uVar10);
    piVar3 = (int *)((BLTalentUpInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabLV();
    (**(code **)(*(int *)(piVar3) + (0x234)))(piVar3,auStack_44);
    ((TalentData *)(piVar2))->getDebrisInfo(uVar10);
    ((BLTalentUpInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getDebrisItemView();
    iVar7 = 0;
    do {
      puVar6 = (undefined4 *)(aiStack_5c[0] + iVar7 * 2);
      uVar10 = (undefined4)(*puVar6);
      uVar9 = (undefined4)(puVar6[1]);
      uVar1 = (undefined4)(((BLTalentUpDebrisItemView *)(*(undefined4 *)(aiStack_50[0] + iVar7)))->getPresenter());
      ((BLTalentUpDebrisItemPresenter *)(uVar1))->initWithData(uVar10, uVar9);
      iVar7 = (undefined4)(intptr_t)(iVar7 + 4);
    } while (iVar7 != 0x18);
    if (aiStack_50[0] != 0) {
      func_0079e2cc();
    }
    if (aiStack_5c[0] != 0) {
      func_0079e2cc();
    }
  }
  if (iStack_1c != *piVar8) {
    func_0079e914();
  }
  return;
}

void BLTalentUpInfoPresenter::checkIsEnough()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_14 = p2;
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  ((BLTalentUpInfoView *)this)->getDebrisItemView();
  iVar2 = 0;
  do {
    ((BLTalentUpDebrisItemView *)*(undefined4 *)(iStack_14 + iVar2))->getPresenter();
    iVar1 = (undefined4)(intptr_t)(((BLTalentUpDebrisItemPresenter *)this)->getIsEnough());
    if (iVar1 == 0) {
      uVar3 = (undefined4)(0);
      goto code_r0x006a091c;
    }
    iVar2 = (undefined4)(intptr_t)(iVar2 + 4);
  } while (iVar2 != 0x18);
  uVar3 = (undefined4)(1);
code_r0x006a091c:
  if (iStack_14 != 0) {
    func_0079e2cc();
  }
  return;
}

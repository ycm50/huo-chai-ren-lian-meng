#include "BLMissionMirrorRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionMirrorRoleItemPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005cf320;
extern "C" unsigned long UNK_005cf352;
extern "C" unsigned long UNK_005cf3ac;
extern "C" unsigned long UNK_005cf3d4;
extern "C" unsigned long UNK_005cf3ec;
extern "C" unsigned long UNK_005cf41a;
extern "C" unsigned long UNK_005cf45c;
extern "C" unsigned long UNK_005cf486;
extern "C" unsigned long UNK_005cf520;
extern "C" unsigned long UNK_005cf5be;
extern "C" unsigned long UNK_005cf668;
extern "C" unsigned long UNK_005cf692;
extern "C" unsigned long UNK_005cf754;
extern "C" unsigned long UNK_005cf788;
extern "C" unsigned long UNK_005cf886;
extern "C" unsigned long UNK_005cf8c2;
extern "C" unsigned long UNK_005cf942;
extern "C" unsigned long UNK_005cf944;
extern "C" unsigned long UNK_005cf954;
extern "C" unsigned long _UNK_005cf398;
extern "C" unsigned long _UNK_005cf39c;
extern "C" unsigned long _UNK_005cf3b0;
extern "C" unsigned long _UNK_005cf3d8;
extern "C" unsigned long _UNK_005cf444;
extern "C" unsigned long _UNK_005cf448;
extern "C" unsigned long _UNK_005cf838;
extern "C" unsigned long _UNK_005cf83c;
extern "C" unsigned long _UNK_005cf840;
extern "C" unsigned long _UNK_005cf844;
extern "C" unsigned long _UNK_005cf848;
extern "C" unsigned long _UNK_005cf84c;
extern "C" unsigned long _UNK_005cf850;
extern "C" unsigned long _UNK_005cf854;
extern "C" unsigned long _UNK_005cf858;
extern "C" unsigned long _UNK_005cf85c;
extern "C" unsigned long _UNK_005cf860;
extern "C" unsigned long _UNK_005cf864;
extern "C" unsigned long _UNK_005cf868;
extern "C" unsigned long _UNK_005cf86c;
extern "C" unsigned long _UNK_005cf870;
extern "C" unsigned long _UNK_005cf874;
extern "C" unsigned long _UNK_005cf9f8;
extern "C" unsigned long _UNK_005cf9fc;
extern "C" unsigned long _UNK_005cfa00;
extern "C" unsigned long _UNK_005cfa04;
extern "C" unsigned long _UNK_005cfa08;
extern "C" unsigned long _UNK_005cfa0c;
extern "C" unsigned long _UNK_005cfa10;
extern "C" unsigned long g_005cf320;
extern "C" unsigned long g_005cf352;
extern "C" unsigned long g_005cf398;
extern "C" unsigned long g_005cf39c;
extern "C" unsigned long g_005cf3ac;
extern "C" unsigned long g_005cf3b0;
extern "C" unsigned long g_005cf3d4;
extern "C" unsigned long g_005cf3d8;
extern "C" unsigned long g_005cf3ec;
extern "C" unsigned long g_005cf41a;
extern "C" unsigned long g_005cf444;
extern "C" unsigned long g_005cf448;
extern "C" unsigned long g_005cf45c;
extern "C" unsigned long g_005cf486;
extern "C" unsigned long g_005cf520;
extern "C" unsigned long g_005cf5be;
extern "C" unsigned long g_005cf668;
extern "C" unsigned long g_005cf692;
extern "C" unsigned long g_005cf754;
extern "C" unsigned long g_005cf788;
extern "C" unsigned long g_005cf838;
extern "C" unsigned long g_005cf83c;
extern "C" unsigned long g_005cf840;
extern "C" unsigned long g_005cf844;
extern "C" unsigned long g_005cf848;
extern "C" unsigned long g_005cf84c;
extern "C" unsigned long g_005cf850;
extern "C" unsigned long g_005cf854;
extern "C" unsigned long g_005cf858;
extern "C" unsigned long g_005cf85c;
extern "C" unsigned long g_005cf860;
extern "C" unsigned long g_005cf864;
extern "C" unsigned long g_005cf868;
extern "C" unsigned long g_005cf86c;
extern "C" unsigned long g_005cf870;
extern "C" unsigned long g_005cf874;
extern "C" unsigned long g_005cf886;
extern "C" unsigned long g_005cf8c2;
extern "C" unsigned long g_005cf942;
extern "C" unsigned long g_005cf944;
extern "C" unsigned long g_005cf954;
extern "C" unsigned long g_005cf9f8;
extern "C" unsigned long g_005cf9fc;
extern "C" unsigned long g_005cfa00;
extern "C" unsigned long g_005cfa04;
extern "C" unsigned long g_005cfa08;
extern "C" unsigned long g_005cfa0c;
extern "C" unsigned long g_005cfa10;
BLMissionMirrorRoleItemView::~BLMissionMirrorRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005cf320 + g_005cf398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cf352 + g_005cf39c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMirrorRoleItemView::BLMissionMirrorRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005cf3ec + g_005cf444);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cf41a + g_005cf448,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLMissionMirrorRoleItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionMirrorRoleItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionMirrorRoleItemView::initView();
    ((BLMissionMirrorRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionMirrorRoleItemView*)((int)this));
  }
  return iVar1;
}

void BLMissionMirrorRoleItemView::onEnter()
{
  ((BLMissionMirrorRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionMirrorRoleItemView::onExit()
{
  ((BLMissionMirrorRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionMirrorRoleItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

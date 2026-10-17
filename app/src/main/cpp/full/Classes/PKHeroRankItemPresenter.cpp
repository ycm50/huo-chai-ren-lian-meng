#include "PKHeroRankItemPresenter.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKHeroDetailPresenter.h"
#include "PKHeroDetailView.h"
#include "PKHeroRankItemView.h"
#include "RankPlayerData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061480c;
extern "C" unsigned long UNK_00614828;
extern "C" unsigned long UNK_00614844;
extern "C" unsigned long UNK_006148d8;
extern "C" unsigned long UNK_006148f6;
extern "C" unsigned long UNK_00614948;
extern "C" unsigned long UNK_00614970;
extern "C" unsigned long UNK_00614986;
extern "C" unsigned long UNK_00614996;
extern "C" unsigned long UNK_006149ca;
extern "C" unsigned long UNK_00614a68;
extern "C" unsigned long UNK_00614a80;
extern "C" unsigned long UNK_00614ab0;
extern "C" unsigned long UNK_00614b0a;
extern "C" unsigned long UNK_00614b50;
extern "C" unsigned long UNK_00614ba6;
extern "C" unsigned long UNK_00614cf0;
extern "C" unsigned long UNK_0061501c;
extern "C" unsigned long UNK_0061501e;
extern "C" unsigned long UNK_00615038;
extern "C" unsigned long UNK_0061503a;
extern "C" unsigned long _UNK_00614810;
extern "C" unsigned long _UNK_0061482c;
extern "C" unsigned long _UNK_00614848;
extern "C" unsigned long _UNK_00614934;
extern "C" unsigned long _UNK_00614938;
extern "C" unsigned long _UNK_0061494c;
extern "C" unsigned long _UNK_00614974;
extern "C" unsigned long _UNK_006149fc;
extern "C" unsigned long _UNK_00614a00;
extern "C" unsigned long _UNK_00614a04;
extern "C" unsigned long _UNK_00614a70;
extern "C" unsigned long _UNK_00614ccc;
extern "C" unsigned long _UNK_00614cd0;
extern "C" unsigned long _UNK_00614cd4;
extern "C" unsigned long _UNK_00614cd8;
extern "C" unsigned long _UNK_00614cdc;
extern "C" unsigned long _UNK_00614ef4;
extern "C" unsigned long _UNK_00614ff0;
extern "C" unsigned long _UNK_00614ff4;
extern "C" unsigned long _UNK_006150e4;
extern "C" unsigned long _UNK_006150e8;
extern "C" unsigned long _UNK_006150ec;
extern "C" unsigned long _UNK_006150f0;
extern "C" unsigned long _UNK_006150f4;
extern "C" unsigned long _UNK_006150f8;
extern "C" unsigned long _UNK_006150fc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0061480c;
extern "C" unsigned long g_00614810;
extern "C" unsigned long g_00614828;
extern "C" unsigned long g_0061482c;
extern "C" unsigned long g_00614844;
extern "C" unsigned long g_00614848;
extern "C" unsigned long g_006148d8;
extern "C" unsigned long g_006148f6;
extern "C" unsigned long g_00614934;
extern "C" unsigned long g_00614938;
extern "C" unsigned long g_00614948;
extern "C" unsigned long g_0061494c;
extern "C" unsigned long g_00614970;
extern "C" unsigned long g_00614974;
extern "C" unsigned long g_00614986;
extern "C" unsigned long g_00614996;
extern "C" unsigned long g_006149ca;
extern "C" unsigned long g_006149fc;
extern "C" unsigned long g_00614a00;
extern "C" unsigned long g_00614a04;
extern "C" unsigned long g_00614a68;
extern "C" unsigned long g_00614a70;
extern "C" unsigned long g_00614a80;
extern "C" unsigned long g_00614ab0;
extern "C" unsigned long g_00614b0a;
extern "C" unsigned long g_00614b50;
extern "C" unsigned long g_00614ba6;
extern "C" unsigned long g_00614ccc;
extern "C" unsigned long g_00614cd0;
extern "C" unsigned long g_00614cd4;
extern "C" unsigned long g_00614cd8;
extern "C" unsigned long g_00614cdc;
extern "C" unsigned long g_00614cf0;
extern "C" unsigned long g_00614ef4;
extern "C" unsigned long g_00614ff0;
extern "C" unsigned long g_00614ff4;
extern "C" unsigned long g_0061501c;
extern "C" unsigned long g_0061501e;
extern "C" unsigned long g_00615038;
extern "C" unsigned long g_0061503a;
extern "C" unsigned long g_006150e4;
extern "C" unsigned long g_006150e8;
extern "C" unsigned long g_006150ec;
extern "C" unsigned long g_006150f0;
extern "C" unsigned long g_006150f4;
extern "C" unsigned long g_006150f8;
extern "C" unsigned long g_006150fc;
bool PKHeroRankItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 1;
  return 1;
}

void PKHeroRankItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 1;
  return;
}

void PKHeroRankItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 0;
  return;
}

void PKHeroRankItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroRankItemPresenter::tick(float p1)
{
  return;
}

PKHeroRankItemPresenter::~PKHeroRankItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_006148d8 + g_00614934);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006148f6 + g_00614938,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((RankPlayerData *)((int)this) + 8)->~RankPlayerData();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKHeroRankItemPresenter::PKHeroRankItemPresenter()
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
  iVar3 = *(int *)(&g_00614986 + g_006149fc);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  iVar4 = g_00614a00;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_00614996 + iVar4);
  *(int *)((int)this + 4*(9)) = iVar4 + 0xc;
  *(int *)((int)this + 4*(10)) = iVar4 + 0xc;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(undefined1 *)(((int)this) + 7) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006149ca + g_00614a04,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 PKHeroRankItemPresenter::create(PKHeroRankItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x40))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PKHeroRankItemPresenter::onEnter()
{
  return;
}

void PKHeroRankItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void PKHeroRankItemPresenter::initWithView(PKHeroRankItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKHeroRankItemView *)p1)->getBtnShowDes();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00614a68 + g_00614a70),0,0x20);
  return;
}

void PKHeroRankItemPresenter::updateData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  code *pcVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined4 auStack_44 [2];
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  piVar9 = *(int **)((unsigned char *)((char *)&g_00614a80 + (intptr_t)(g_00614ccc)));
  iStack_1c = (int)*(int *)&(*piVar9);
  piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLblName();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,*(undefined4 *)(((int)this) + 0x28));
  func_0079e34c(auStack_3c,0,0x1e);
  func_0079e904(auStack_3c,(unsigned char *)((char *)&g_00614ab0 + (intptr_t)(g_00614cd0)),*(undefined4 *)(((int)this) + 0x2c));
  piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLblZhanLi();
  pcVar8 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_4c,auStack_3c,auStack_50);
  ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_4c);
  (*pcVar8)(piVar1,auStack_44[0]);
  func_0079e2bc(auStack_44);
  func_0079e2bc(auStack_4c);
  iVar11 = (undefined4)(intptr_t)(p1 + 1);
  if (p1 < 3) {
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00614b0a + (intptr_t)(g_00614cd4)), iVar11);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
    pcVar8 = *(code **)(*piVar1 + 0x20c);
    func_0079e45c(auStack_44,uVar2,auStack_4c);
    piVar3 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
    (*pcVar8)(piVar1,uVar2);
  }
  else {
    if (8 < p1) {
      if (p1 < 99) {
        uVar2 = (undefined4)(func_0079e4ac(iVar11,10));
        puVar10 = (unsigned char *)((char *)&g_00614ba6 + (intptr_t)(g_00614cdc));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar2);
        uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,10);
        cocos2d::CCString::createWithFormat((char const*)puVar10);
        uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(auStack_44,uVar2,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
        (*pcVar8)(piVar1,uVar2);
        func_0079e2bc(auStack_44);
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x5c);
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
        uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
        (*pcVar8)(piVar1,uVar2);
        func_0079e45c(auStack_44,uVar4,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_44);
        pcVar8 = *(code **)(*piVar3 + 0x4c);
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
        uVar4 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
        uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
        0 /* ctorZero */;
        ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_4c);
        (*pcVar8)(piVar3,auStack_44);
        piVar1 = *(int **)(((int)this) + 0x18);
        pcVar8 = *(code **)(*piVar1 + 0xcc);
      }
      else {
        uVar2 = (undefined4)(func_0079e4ac(iVar11,100));
        puVar10 = (unsigned char *)((char *)&g_00614cf0 + (intptr_t)(g_00614ef4));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar2);
        uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,100);
        uVar4 = (undefined4)(func_0079e4ac(extraout_r1,10));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar4);
        uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,10);
        cocos2d::CCString::createWithFormat((char const*)puVar10);
        uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(auStack_44,uVar2,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
        (*pcVar8)(piVar1,uVar2);
        func_0079e2bc(auStack_44);
        piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x5c);
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
        uVar2 = (undefined4)(func_0079e57c(uVar2,*puVar6));
        (*pcVar8)(piVar1,uVar2);
        func_0079e45c(auStack_44,uVar4,auStack_4c);
        piVar1 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_44);
        pcVar8 = *(code **)(*piVar1 + 0x4c);
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
        piVar3 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
        uVar4 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
        uVar7 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        uVar4 = (undefined4)(func_0079e59c(uVar4,uVar7));
        0 /* ctorZero */;
        ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_4c);
        (*pcVar8)(piVar1,auStack_44);
        (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar1,1);
        func_0079e45c(auStack_44,uVar5,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_44);
        pcVar8 = *(code **)(*piVar3 + 0x4c);
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
        uVar4 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
        uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
        0 /* ctorZero */;
        ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_4c);
        (*pcVar8)(piVar3,auStack_44);
        piVar1 = *(int **)(((int)this) + 0x18);
        pcVar8 = *(code **)(*piVar1 + 0xcc);
      }
      (*pcVar8)(piVar1,piVar3,1);
      goto code_r0x00614ee2;
    }
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00614b50 + (intptr_t)(g_00614cd8)), iVar11);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((PKHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
    pcVar8 = *(code **)(*piVar1 + 0x20c);
    func_0079e45c(auStack_44,uVar2,auStack_4c);
    piVar3 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
    (*pcVar8)(piVar1,uVar2);
  }
  func_0079e2bc(auStack_44);
code_r0x00614ee2:
  if (iStack_1c != *piVar9) {
    func_0079e914();
  }
  return;
}

void PKHeroRankItemPresenter::initwith(RankPlayerData * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHeroRankItemPresenter::onGetInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLHeroRankItemPresenter.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLHeroDetailPresenter.h"
#include "BLHeroDetailView.h"
#include "BLHeroRankItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CircusPlayerinfo.h"
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
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00566554;
extern "C" unsigned long UNK_00566570;
extern "C" unsigned long UNK_0056658c;
extern "C" unsigned long UNK_0056661a;
extern "C" unsigned long UNK_0056661c;
extern "C" unsigned long UNK_00566636;
extern "C" unsigned long UNK_00566638;
extern "C" unsigned long UNK_00566668;
extern "C" unsigned long UNK_00566686;
extern "C" unsigned long UNK_005666d8;
extern "C" unsigned long UNK_00566700;
extern "C" unsigned long UNK_0056671c;
extern "C" unsigned long UNK_00566732;
extern "C" unsigned long UNK_00566758;
extern "C" unsigned long UNK_0056678a;
extern "C" unsigned long UNK_00566838;
extern "C" unsigned long UNK_00566850;
extern "C" unsigned long UNK_005668b8;
extern "C" unsigned long UNK_0056690c;
extern "C" unsigned long UNK_00566954;
extern "C" unsigned long UNK_005669ac;
extern "C" unsigned long UNK_00566af8;
extern "C" unsigned long _UNK_00566558;
extern "C" unsigned long _UNK_00566574;
extern "C" unsigned long _UNK_00566590;
extern "C" unsigned long _UNK_00566650;
extern "C" unsigned long _UNK_00566654;
extern "C" unsigned long _UNK_00566658;
extern "C" unsigned long _UNK_0056665c;
extern "C" unsigned long _UNK_005666c4;
extern "C" unsigned long _UNK_005666c8;
extern "C" unsigned long _UNK_005666dc;
extern "C" unsigned long _UNK_00566704;
extern "C" unsigned long _UNK_005667c8;
extern "C" unsigned long _UNK_005667cc;
extern "C" unsigned long _UNK_005667d0;
extern "C" unsigned long _UNK_005667d4;
extern "C" unsigned long _UNK_00566840;
extern "C" unsigned long _UNK_00566ad4;
extern "C" unsigned long _UNK_00566ad8;
extern "C" unsigned long _UNK_00566adc;
extern "C" unsigned long _UNK_00566ae0;
extern "C" unsigned long _UNK_00566ae4;
extern "C" unsigned long _UNK_00566d08;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00566554;
extern "C" unsigned long g_00566558;
extern "C" unsigned long g_00566570;
extern "C" unsigned long g_00566574;
extern "C" unsigned long g_0056658c;
extern "C" unsigned long g_00566590;
extern "C" unsigned long g_0056661a;
extern "C" unsigned long g_0056661c;
extern "C" unsigned long g_00566636;
extern "C" unsigned long g_00566638;
extern "C" unsigned long g_00566650;
extern "C" unsigned long g_00566654;
extern "C" unsigned long g_00566658;
extern "C" unsigned long g_0056665c;
extern "C" unsigned long g_00566668;
extern "C" unsigned long g_00566686;
extern "C" unsigned long g_005666c4;
extern "C" unsigned long g_005666c8;
extern "C" unsigned long g_005666d8;
extern "C" unsigned long g_005666dc;
extern "C" unsigned long g_00566700;
extern "C" unsigned long g_00566704;
extern "C" unsigned long g_0056671c;
extern "C" unsigned long g_00566732;
extern "C" unsigned long g_00566758;
extern "C" unsigned long g_0056678a;
extern "C" unsigned long g_005667c8;
extern "C" unsigned long g_005667cc;
extern "C" unsigned long g_005667d0;
extern "C" unsigned long g_005667d4;
extern "C" unsigned long g_00566838;
extern "C" unsigned long g_00566840;
extern "C" unsigned long g_00566850;
extern "C" unsigned long g_005668b8;
extern "C" unsigned long g_0056690c;
extern "C" unsigned long g_00566954;
extern "C" unsigned long g_005669ac;
extern "C" unsigned long g_00566ad4;
extern "C" unsigned long g_00566ad8;
extern "C" unsigned long g_00566adc;
extern "C" unsigned long g_00566ae0;
extern "C" unsigned long g_00566ae4;
extern "C" unsigned long g_00566af8;
extern "C" unsigned long g_00566d08;
bool BLHeroRankItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 1;
  return 1;
}

void BLHeroRankItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 1;
  return;
}

void BLHeroRankItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x1c) = 0;
  return;
}

void BLHeroRankItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroRankItemPresenter::tick(float p1)
{
  return;
}

void BLHeroRankItemPresenter::onGetInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLHeroRankItemPresenter::~BLHeroRankItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00566668 + g_005666c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00566686 + g_005666c8,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((CircusPlayerinfo *)((int)this) + 8)->~CircusPlayerinfo();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroRankItemPresenter::BLHeroRankItemPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar4 = g_005667cc;
  iVar3 = *(int *)(&g_0056671c + g_005667c8);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  func_0079e45c(auStack_20,&g_00566732 + iVar4,auStack_1c);
  func_0079e53c(((int)this) + 8,auStack_20);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  iVar4 = g_005667d0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  iVar4 = *(int *)(&g_00566758 + iVar4);
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x14)) = iVar4 + 0xc;
  *(int *)((int)this + 4*(0x18)) = iVar4 + 0xc;
  func_0079e2bc(auStack_20);
  *(undefined1 *)(((int)this) + 7) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_0056678a + g_005667d4,auStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}


void BLHeroRankItemPresenter::onEnter()
{
  return;
}

void BLHeroRankItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLHeroRankItemPresenter::initWithView(BLHeroRankItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLHeroRankItemView *)p1)->getBtnShowDes();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00566838 + g_00566840),0,0x20);
  return;
}

void BLHeroRankItemPresenter::updateData(int p1)
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
  
  piVar9 = *(int **)((unsigned char *)((char *)&g_00566850 + (intptr_t)(g_00566ad4)));
  iStack_1c = (int)*(int *)&(*piVar9);
  piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLblName();
  pcVar8 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_4c,*(undefined4 *)(((int)this) + 0x50),auStack_50);
  ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_4c);
  (*pcVar8)(piVar1,auStack_44[0]);
  func_0079e2bc(auStack_44);
  func_0079e2bc(auStack_4c);
  func_0079e34c(auStack_3c,0,0x1e);
  func_0079e904(auStack_3c,(unsigned char *)((char *)&g_005668b8 + (intptr_t)(g_00566ad8)),*(undefined4 *)(((int)this) + 0x38),
                  *(undefined4 *)(((int)this) + 0x3c));
  piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLblZhanLi();
  pcVar8 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_4c,auStack_3c,auStack_50);
  ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_4c);
  (*pcVar8)(piVar1,auStack_44[0]);
  func_0079e2bc(auStack_44);
  func_0079e2bc(auStack_4c);
  iVar11 = (undefined4)(intptr_t)(p1 + 1);
  if (p1 < 3) {
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0056690c + (intptr_t)(g_00566adc)), iVar11);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
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
        puVar10 = (unsigned char *)((char *)&g_005669ac + (intptr_t)(g_00566ae4));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar2);
        uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,10);
        cocos2d::CCString::createWithFormat((char const*)puVar10);
        uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(auStack_44,uVar2,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
        (*pcVar8)(piVar1,uVar2);
        func_0079e2bc(auStack_44);
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x5c);
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
        uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
        uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
        (*pcVar8)(piVar1,uVar2);
        func_0079e45c(auStack_44,uVar4,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_44);
        pcVar8 = *(code **)(*piVar3 + 0x4c);
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
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
        puVar10 = (unsigned char *)((char *)&g_00566af8 + (intptr_t)(g_00566d08));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar2);
        uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,100);
        uVar4 = (undefined4)(func_0079e4ac(extraout_r1,10));
        cocos2d::CCString::createWithFormat((char const*)puVar10, uVar4);
        uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e964(iVar11,10);
        cocos2d::CCString::createWithFormat((char const*)puVar10);
        uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(auStack_44,uVar2,auStack_4c);
        piVar3 = (int *)0 /* ctorZero */;
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
        (*pcVar8)(piVar1,uVar2);
        func_0079e2bc(auStack_44);
        piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        pcVar8 = *(code **)(*piVar1 + 0x5c);
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
        uVar2 = (undefined4)(func_0079e57c(uVar2,*puVar6));
        (*pcVar8)(piVar1,uVar2);
        func_0079e45c(auStack_44,uVar4,auStack_4c);
        piVar1 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_44);
        pcVar8 = *(code **)(*piVar1 + 0x4c);
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
        piVar3 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
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
      goto code_r0x00566cf4;
    }
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00566954 + (intptr_t)(g_00566ae0)), iVar11);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((BLHeroRankItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprimg_icon();
    pcVar8 = *(code **)(*piVar1 + 0x20c);
    func_0079e45c(auStack_44,uVar2,auStack_4c);
    piVar3 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))());
    (*pcVar8)(piVar1,uVar2);
  }
  func_0079e2bc(auStack_44);
code_r0x00566cf4:
  if (iStack_1c != *piVar9) {
    func_0079e914();
  }
  return;
}

void BLHeroRankItemPresenter::initwith(CircusPlayerinfo const& p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLHeroRankItemPresenter::create(BLHeroRankItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x78))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

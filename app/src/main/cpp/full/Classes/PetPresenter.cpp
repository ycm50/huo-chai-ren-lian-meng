#include "PetPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLListButton.h"
#include "PetView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "PetUserItemData.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLLeakUtils.h"
#include "BLPetListPresenter.h"
#include "BLPetRefreshSkillPresenter.h"
#include "DataManager.h"
#include "PetInfoPresenter.h"
#include "PetSkillUPPresenter.h"
#include "PetSkillUPView.h"
#include "PetUserData.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLPetRefreshSkillView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060bbd0;
extern "C" unsigned long UNK_0060bc28;
extern "C" unsigned long UNK_0060bc4c;
extern "C" unsigned long UNK_0060bc9c;
extern "C" unsigned long UNK_0060bcc4;
extern "C" unsigned long UNK_0060bea4;
extern "C" unsigned long UNK_0060bec6;
extern "C" unsigned long UNK_0060bec8;
extern "C" unsigned long UNK_0060bede;
extern "C" unsigned long UNK_0060bee0;
extern "C" unsigned long UNK_0060bef4;
extern "C" unsigned long UNK_0060bf12;
extern "C" unsigned long UNK_0060bfa2;
extern "C" unsigned long UNK_0060bfa4;
extern "C" unsigned long UNK_0060bfea;
extern "C" unsigned long UNK_0060bfee;
extern "C" unsigned long UNK_0060c052;
extern "C" unsigned long UNK_0060c068;
extern "C" unsigned long UNK_0060c090;
extern "C" unsigned long UNK_0060c0ea;
extern "C" unsigned long UNK_0060c0ec;
extern "C" unsigned long UNK_0060c104;
extern "C" unsigned long UNK_0060c106;
extern "C" unsigned long UNK_0060c182;
extern "C" unsigned long UNK_0060c1a2;
extern "C" unsigned long UNK_0060c212;
extern "C" unsigned long _UNK_0060bbd4;
extern "C" unsigned long _UNK_0060bc88;
extern "C" unsigned long _UNK_0060bc8c;
extern "C" unsigned long _UNK_0060bca0;
extern "C" unsigned long _UNK_0060bcc8;
extern "C" unsigned long _UNK_0060bcdc;
extern "C" unsigned long _UNK_0060bea8;
extern "C" unsigned long _UNK_0060bf50;
extern "C" unsigned long _UNK_0060bf54;
extern "C" unsigned long _UNK_0060bf58;
extern "C" unsigned long _UNK_0060bf5c;
extern "C" unsigned long _UNK_0060bf60;
extern "C" unsigned long _UNK_0060bf64;
extern "C" unsigned long _UNK_0060bf68;
extern "C" unsigned long _UNK_0060bfcc;
extern "C" unsigned long _UNK_0060bfd0;
extern "C" unsigned long _UNK_0060c03c;
extern "C" unsigned long _UNK_0060c040;
extern "C" unsigned long _UNK_0060c0c8;
extern "C" unsigned long _UNK_0060c0cc;
extern "C" unsigned long _UNK_0060c0d0;
extern "C" unsigned long _UNK_0060c114;
extern "C" unsigned long _UNK_0060c118;
extern "C" unsigned long _UNK_0060c11c;
extern "C" unsigned long _UNK_0060c120;
extern "C" unsigned long _UNK_0060c26c;
extern "C" unsigned long _UNK_0060c270;
extern "C" unsigned long _UNK_0060c274;
extern "C" unsigned long _UNK_0060c278;
extern "C" unsigned long g_0060bbd0;
extern "C" unsigned long g_0060bbd4;
extern "C" unsigned long g_0060bc28;
extern "C" unsigned long g_0060bc4c;
extern "C" unsigned long g_0060bc88;
extern "C" unsigned long g_0060bc8c;
extern "C" unsigned long g_0060bc9c;
extern "C" unsigned long g_0060bca0;
extern "C" unsigned long g_0060bcc4;
extern "C" unsigned long g_0060bcc8;
extern "C" unsigned long g_0060bcdc;
extern "C" unsigned long g_0060bea4;
extern "C" unsigned long g_0060bea8;
extern "C" unsigned long g_0060bec6;
extern "C" unsigned long g_0060bec8;
extern "C" unsigned long g_0060bede;
extern "C" unsigned long g_0060bee0;
extern "C" unsigned long g_0060bef4;
extern "C" unsigned long g_0060bf12;
extern "C" unsigned long g_0060bf50;
extern "C" unsigned long g_0060bf54;
extern "C" unsigned long g_0060bf58;
extern "C" unsigned long g_0060bf5c;
extern "C" unsigned long g_0060bf60;
extern "C" unsigned long g_0060bf64;
extern "C" unsigned long g_0060bf68;
extern "C" unsigned long g_0060bfa2;
extern "C" unsigned long g_0060bfa4;
extern "C" unsigned long g_0060bfcc;
extern "C" unsigned long g_0060bfd0;
extern "C" unsigned long g_0060bfea;
extern "C" unsigned long g_0060bfee;
extern "C" unsigned long g_0060c03c;
extern "C" unsigned long g_0060c040;
extern "C" unsigned long g_0060c052;
extern "C" unsigned long g_0060c068;
extern "C" unsigned long g_0060c090;
extern "C" unsigned long g_0060c0c8;
extern "C" unsigned long g_0060c0cc;
extern "C" unsigned long g_0060c0d0;
extern "C" unsigned long g_0060c0ea;
extern "C" unsigned long g_0060c0ec;
extern "C" unsigned long g_0060c104;
extern "C" unsigned long g_0060c106;
extern "C" unsigned long g_0060c114;
extern "C" unsigned long g_0060c118;
extern "C" unsigned long g_0060c11c;
extern "C" unsigned long g_0060c120;
extern "C" unsigned long g_0060c182;
extern "C" unsigned long g_0060c1a2;
extern "C" unsigned long g_0060c212;
extern "C" unsigned long g_0060c26c;
extern "C" unsigned long g_0060c270;
extern "C" unsigned long g_0060c274;
extern "C" unsigned long g_0060c278;
void PetPresenter::tick(float p1)
{
  return;
}

bool PetPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

PetPresenter::~PetPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0060bc28 + g_0060bc88);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(6)) = iVar2 + 100;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0060bc4c + g_0060bc8c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PetPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0060bcdc);
  return;
}



void PetPresenter::onUpdatePetList()
{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x11c) + 0xd4))(*(int **)(*(int *)((int)this + 4*(8)) + 0x11c),100);
  if ((iVar1 == 0) ||
     ((iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x11c) + 0xd4))
                         (*(int **)(*(int *)((int)this + 4*(8)) + 0x11c),100), iVar1 != 0 &&
      (iVar1 = func_0079e55c(iVar1,*(undefined4 *)(&g_0060bfa2 + g_0060bfcc),
                               *(undefined4 *)(&g_0060bfa4 + g_0060bfd0),0), iVar1 != 0)))) {
    (**(code **)(*(int *)this + 0x20))(((int)this),0,0);
  }
  ((BLPetListPresenter *)*(undefined4 *)(*(int *)(*(int *)((int)this + 4*(8)) + 0x118) + 0x108))->updateView();
  return;
}


PetPresenter::PetPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_0060c052 + g_0060c0c8);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(6)) = iVar4 + 100;
  iVar1 = g_0060c0cc;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x34;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_0060c068 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060c090 + g_0060c0d0,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = -1;
  return;
}


void PetPresenter::onExit()
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

undefined4 PetPresenter::create(PetView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void PetPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 auStack_20 [12];
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x104)))(piVar1,1);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar3 != 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->removeUIByID(0x1f);
  }
  if (p2 == 0) {
    piVar1 = (int *)((PetSkillUPView *)this)->create();
    (**(code **)(*(int *)(piVar1) + (0x11c)))(piVar1,100);
    pcVar7 = *(code **)(*piVar1 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x8c))();
    uVar2 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
    iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar7)(piVar1,auStack_20);
    iVar3 = (undefined4)(intptr_t)(piVar1[0x42]);
    func_0079e53c(auStack_20,((int)this) + 0x1c);
    func_0079e52c(iVar3 + 0x1c,auStack_20);
    ((PetSkillUPPresenter *)(iVar3))->updateView();
    func_0079e2bc(auStack_20);
    piVar6 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
    (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar1);
  }
  else if (p2 == 1) {
    piVar1 = (int *)::operator new(0x120);
    ::new ((void *)piVar1) BLPetRefreshSkillView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
    if (iVar3 == 0) {
      (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar1))->autorelease();
    }
    (**(code **)(*(int *)(piVar1) + (0x11c)))(piVar1,100);
    pcVar7 = *(code **)(*piVar1 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x8c))();
    uVar2 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
    iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar7)(piVar1,auStack_20);
    piVar6 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
    (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar1);
    piVar6 = (int *)((DataManager *)this)->shareDataManager();
    piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x28)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x188)))());
    func_0079e53c(auStack_20,((int)this) + 0x1c);
    uVar2 = (undefined4)(((PetUserData *)(uVar2))->getItemData((std::string)(char*)auStack_20));
    func_0079e2bc(auStack_20);
    ((BLPetRefreshSkillPresenter *)(piVar1[0x42]))->updateWithData((PetUserItemData*)uVar2);
  }
  return;
}

void PetPresenter::onBtnAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetPresenter::onUpdateRoleData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0060c0ec + (intptr_t)(g_0060c114))), 0, (char const*)(unsigned char *)((char *)&g_0060c0ea + (intptr_t)(g_0060c118)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0060c104 + (intptr_t)(g_0060c11c))), 0, (char const*)(unsigned char *)((char *)&g_0060c106 + (intptr_t)(g_0060c120)), 0);
  return;
}

undefined4 PetPresenter::initWithView(PetView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "ChallengeBuffPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "ChallengeBuffView.h"
#include "BLLeakUtils.h"
#include "ChallengeUserData.h"
#include "DataManager.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00506638;
extern "C" unsigned long UNK_00506690;
extern "C" unsigned long UNK_005066aa;
extern "C" unsigned long UNK_005066f0;
extern "C" unsigned long UNK_00506718;
extern "C" unsigned long UNK_00506736;
extern "C" unsigned long UNK_00506738;
extern "C" unsigned long UNK_00506748;
extern "C" unsigned long UNK_00506776;
extern "C" unsigned long UNK_00506782;
extern "C" unsigned long UNK_005067f2;
extern "C" unsigned long UNK_00506820;
extern "C" unsigned long UNK_005068ba;
extern "C" unsigned long UNK_005068d2;
extern "C" unsigned long UNK_005068f0;
extern "C" unsigned long UNK_00506910;
extern "C" unsigned long UNK_00506996;
extern "C" unsigned long UNK_00506a8c;
extern "C" unsigned long UNK_00506aa8;
extern "C" unsigned long UNK_00506ada;
extern "C" unsigned long UNK_00506b04;
extern "C" unsigned long UNK_00506b2c;
extern "C" unsigned long UNK_00506b88;
extern "C" unsigned long UNK_00506c5c;
extern "C" unsigned long UNK_00506c6c;
extern "C" unsigned long UNK_00506c6e;
extern "C" unsigned long UNK_00506cb4;
extern "C" unsigned long UNK_00506ce8;
extern "C" unsigned long UNK_00506cf6;
extern "C" unsigned long UNK_00506dec;
extern "C" unsigned long UNK_00506e00;
extern "C" unsigned long UNK_00506e02;
extern "C" unsigned long UNK_00506e12;
extern "C" unsigned long UNK_00506e40;
extern "C" unsigned long UNK_00506e4c;
extern "C" unsigned long UNK_00506f48;
extern "C" unsigned long UNK_00506f5c;
extern "C" unsigned long UNK_00506f5e;
extern "C" unsigned long UNK_00506f6e;
extern "C" unsigned long UNK_00506f9c;
extern "C" unsigned long UNK_00506fa8;
extern "C" unsigned long UNK_005070a4;
extern "C" unsigned long UNK_005070b8;
extern "C" unsigned long UNK_005070ba;
extern "C" unsigned long UNK_005070ca;
extern "C" unsigned long UNK_005070f8;
extern "C" unsigned long UNK_00507104;
extern "C" unsigned long UNK_0050718a;
extern "C" unsigned long UNK_0050719a;
extern "C" unsigned long UNK_0050719c;
extern "C" unsigned long UNK_0050721a;
extern "C" unsigned long _UNK_0050663c;
extern "C" unsigned long _UNK_005066dc;
extern "C" unsigned long _UNK_005066e0;
extern "C" unsigned long _UNK_005066f4;
extern "C" unsigned long _UNK_0050671c;
extern "C" unsigned long _UNK_005067d0;
extern "C" unsigned long _UNK_005067d4;
extern "C" unsigned long _UNK_005067d8;
extern "C" unsigned long _UNK_005067dc;
extern "C" unsigned long _UNK_005067e0;
extern "C" unsigned long _UNK_00506850;
extern "C" unsigned long _UNK_00506854;
extern "C" unsigned long _UNK_00506974;
extern "C" unsigned long _UNK_00506978;
extern "C" unsigned long _UNK_0050697c;
extern "C" unsigned long _UNK_00506980;
extern "C" unsigned long _UNK_005069b0;
extern "C" unsigned long _UNK_00506b58;
extern "C" unsigned long _UNK_00506b5c;
extern "C" unsigned long _UNK_00506b60;
extern "C" unsigned long _UNK_00506b64;
extern "C" unsigned long _UNK_00506b68;
extern "C" unsigned long _UNK_00506b6c;
extern "C" unsigned long _UNK_00506c30;
extern "C" unsigned long _UNK_00506c34;
extern "C" unsigned long _UNK_00506c38;
extern "C" unsigned long _UNK_00506c3c;
extern "C" unsigned long _UNK_00506c40;
extern "C" unsigned long _UNK_00506c44;
extern "C" unsigned long _UNK_00506d40;
extern "C" unsigned long _UNK_00506d44;
extern "C" unsigned long _UNK_00506d48;
extern "C" unsigned long _UNK_00506d4c;
extern "C" unsigned long _UNK_00506d50;
extern "C" unsigned long _UNK_00506d54;
extern "C" unsigned long _UNK_00506d58;
extern "C" unsigned long _UNK_00506d5c;
extern "C" unsigned long _UNK_00506ea4;
extern "C" unsigned long _UNK_00506ea8;
extern "C" unsigned long _UNK_00506eac;
extern "C" unsigned long _UNK_00506eb0;
extern "C" unsigned long _UNK_00506eb4;
extern "C" unsigned long _UNK_00506eb8;
extern "C" unsigned long _UNK_00507000;
extern "C" unsigned long _UNK_00507004;
extern "C" unsigned long _UNK_00507008;
extern "C" unsigned long _UNK_0050700c;
extern "C" unsigned long _UNK_00507010;
extern "C" unsigned long _UNK_00507014;
extern "C" unsigned long _UNK_0050715c;
extern "C" unsigned long _UNK_00507160;
extern "C" unsigned long _UNK_00507164;
extern "C" unsigned long _UNK_00507168;
extern "C" unsigned long _UNK_0050716c;
extern "C" unsigned long _UNK_00507170;
extern "C" unsigned long _UNK_00507228;
extern "C" unsigned long _UNK_0050722c;
extern "C" unsigned long _UNK_00507230;
extern "C" unsigned long _UNK_00507234;
extern "C" unsigned long _UNK_00507238;
extern "C" unsigned long _UNK_0050723c;
extern "C" unsigned long g_00506638;
extern "C" unsigned long g_0050663c;
extern "C" unsigned long g_00506690;
extern "C" unsigned long g_005066aa;
extern "C" unsigned long g_005066dc;
extern "C" unsigned long g_005066e0;
extern "C" unsigned long g_005066f0;
extern "C" unsigned long g_005066f4;
extern "C" unsigned long g_00506718;
extern "C" unsigned long g_0050671c;
extern "C" unsigned long g_00506736;
extern "C" unsigned long g_00506738;
extern "C" unsigned long g_00506748;
extern "C" unsigned long g_00506776;
extern "C" unsigned long g_00506782;
extern "C" unsigned long g_005067d0;
extern "C" unsigned long g_005067d4;
extern "C" unsigned long g_005067d8;
extern "C" unsigned long g_005067dc;
extern "C" unsigned long g_005067e0;
extern "C" unsigned long g_005067f2;
extern "C" unsigned long g_00506820;
extern "C" unsigned long g_00506850;
extern "C" unsigned long g_00506854;
extern "C" unsigned long g_005068ba;
extern "C" unsigned long g_005068d2;
extern "C" unsigned long g_005068f0;
extern "C" unsigned long g_00506910;
extern "C" unsigned long g_00506974;
extern "C" unsigned long g_00506978;
extern "C" unsigned long g_0050697c;
extern "C" unsigned long g_00506980;
extern "C" unsigned long g_00506996;
extern "C" unsigned long g_005069b0;
extern "C" unsigned long g_00506a8c;
extern "C" unsigned long g_00506aa8;
extern "C" unsigned long g_00506ada;
extern "C" unsigned long g_00506b04;
extern "C" unsigned long g_00506b2c;
extern "C" unsigned long g_00506b58;
extern "C" unsigned long g_00506b5c;
extern "C" unsigned long g_00506b60;
extern "C" unsigned long g_00506b64;
extern "C" unsigned long g_00506b68;
extern "C" unsigned long g_00506b6c;
extern "C" unsigned long g_00506b88;
extern "C" unsigned long g_00506c30;
extern "C" unsigned long g_00506c34;
extern "C" unsigned long g_00506c38;
extern "C" unsigned long g_00506c3c;
extern "C" unsigned long g_00506c40;
extern "C" unsigned long g_00506c44;
extern "C" unsigned long g_00506c5c;
extern "C" unsigned long g_00506c6c;
extern "C" unsigned long g_00506c6e;
extern "C" unsigned long g_00506cb4;
extern "C" unsigned long g_00506ce8;
extern "C" unsigned long g_00506cf6;
extern "C" unsigned long g_00506d40;
extern "C" unsigned long g_00506d44;
extern "C" unsigned long g_00506d48;
extern "C" unsigned long g_00506d4c;
extern "C" unsigned long g_00506d50;
extern "C" unsigned long g_00506d54;
extern "C" unsigned long g_00506d58;
extern "C" unsigned long g_00506d5c;
extern "C" unsigned long g_00506dec;
extern "C" unsigned long g_00506e00;
extern "C" unsigned long g_00506e02;
extern "C" unsigned long g_00506e12;
extern "C" unsigned long g_00506e40;
extern "C" unsigned long g_00506e4c;
extern "C" unsigned long g_00506ea4;
extern "C" unsigned long g_00506ea8;
extern "C" unsigned long g_00506eac;
extern "C" unsigned long g_00506eb0;
extern "C" unsigned long g_00506eb4;
extern "C" unsigned long g_00506eb8;
extern "C" unsigned long g_00506f48;
extern "C" unsigned long g_00506f5c;
extern "C" unsigned long g_00506f5e;
extern "C" unsigned long g_00506f6e;
extern "C" unsigned long g_00506f9c;
extern "C" unsigned long g_00506fa8;
extern "C" unsigned long g_00507000;
extern "C" unsigned long g_00507004;
extern "C" unsigned long g_00507008;
extern "C" unsigned long g_0050700c;
extern "C" unsigned long g_00507010;
extern "C" unsigned long g_00507014;
extern "C" unsigned long g_005070a4;
extern "C" unsigned long g_005070b8;
extern "C" unsigned long g_005070ba;
extern "C" unsigned long g_005070ca;
extern "C" unsigned long g_005070f8;
extern "C" unsigned long g_00507104;
extern "C" unsigned long g_0050715c;
extern "C" unsigned long g_00507160;
extern "C" unsigned long g_00507164;
extern "C" unsigned long g_00507168;
extern "C" unsigned long g_0050716c;
extern "C" unsigned long g_00507170;
extern "C" unsigned long g_0050718a;
extern "C" unsigned long g_0050719a;
extern "C" unsigned long g_0050719c;
extern "C" unsigned long g_0050721a;
extern "C" unsigned long g_00507228;
extern "C" unsigned long g_0050722c;
extern "C" unsigned long g_00507230;
extern "C" unsigned long g_00507234;
extern "C" unsigned long g_00507238;
extern "C" unsigned long g_0050723c;
void ChallengeBuffPresenter::tick(float p1)
{
  return;
}

bool ChallengeBuffPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

ChallengeBuffPresenter::~ChallengeBuffPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00506690 + g_005066dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005066aa + g_005066e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


ChallengeBuffPresenter::ChallengeBuffPresenter()
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
  iVar3 = *(int *)(&g_005067f2 + g_00506850);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00506820 + g_00506854,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void ChallengeBuffPresenter::onEnter()
{
  return;
}

void ChallengeBuffPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeBuffPresenter::create(ChallengeBuffView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void ChallengeBuffPresenter::onCloseClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  ChallengeBuffPresenter::updateDB();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_00506996 + g_005069b0);
  piVar2 = (int *)(**(code **)(**(int **)(((int)this) + 0x18) + 0xe4))();
  (**(code **)(*piVar2 + 0xf8))(piVar2,0x65);
  return;
}

void ChallengeBuffPresenter::initWithIndex()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 400))();
  iVar6 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10);
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  if (iVar6 >> 2 == 0) {
    iVar3 = 0;
  }
  else {
    if (g_00506b58 < (uint)(iVar6 >> 2)) {
      func_0079e5bc();
    }
    iVar3 = ((long long)::operator new((size_t)(iVar6)));
  }
  iStack_1c = iVar3 + iVar6;
  iVar6 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10);
  iStack_24 = iVar3;
  if (iVar6 >> 2 != 0) {
    iStack_20 = iVar3;
    (void)(((long long)::memmove((void *)(iVar3),(const void *)(*(int *)(iVar2 + 0x10)),(size_t)(iVar6))));
  }
  iStack_20 = iVar3 + iVar6;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 400))();
  iVar7 = *(int *)(iVar2 + 0x28);
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at(0);
  iVar2 = ((long long)((int)(*puVar4) / (int)(10)));
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at((unsigned int)1);
  iVar6 = ((long long)((int)(*puVar4) / (int)(10)));
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at((unsigned int)2);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
  pcVar8 = *(code **)(*piVar1 + 0x234);
  iVar3 = ((long long)((int)(*puVar4) / (int)(10)));
  cocos2d::CCString::createWithFormat((char const*)&g_00506a8c + g_00506b5c, (iVar7 + 5) - (iVar2 + iVar6 + iVar3));
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar1,uVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x130);
  pcVar8 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_00506aa8 + g_00506b60, 10 - iVar7);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar1,uVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x120);
  pcVar8 = *(code **)(*piVar1 + 0x234);
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at(0);
  cocos2d::CCString::createWithFormat((char const*)&g_00506ada + g_00506b64, *puVar4);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar1,uVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  pcVar8 = *(code **)(*piVar1 + 0x234);
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at((unsigned int)1);
  cocos2d::CCString::createWithFormat((char const*)&g_00506b04 + g_00506b68, *puVar4);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar1,uVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x128);
  pcVar8 = *(code **)(*piVar1 + 0x234);
  puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at((unsigned int)2);
  cocos2d::CCString::createWithFormat((char const*)&g_00506b2c + g_00506b6c, *puVar4);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar1,uVar5);
  if (iStack_24 != 0) {
    (void)(::operator delete((void *)(iStack_24)));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void ChallengeBuffPresenter::onResetClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeBuffPresenter::updateDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 ChallengeBuffPresenter::initWithView(ChallengeBuffView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  iVar1 = (undefined4)(intptr_t)(g_00506c30);
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_00506b88 + (intptr_t)(g_00506c34)) + g_00506c30),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00506b88 + (intptr_t)(g_00506c38)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00506b88 + (intptr_t)(g_00506c3c)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00506b88 + (intptr_t)(g_00506c40)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00506b88 + (intptr_t)(g_00506c44)) + iVar1),0,0x20);
  ChallengeBuffPresenter::initWithIndex();
  return 1;
}

void ChallengeBuffPresenter::buyBuffNum(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeBuffPresenter::onAddAClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeBuffPresenter::onAddDClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeBuffPresenter::onAddFlick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeBuffPresenter::resetBuff(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = (undefined4)((int *)((int)this));
  iVar7 = (undefined4)(intptr_t)(p1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_0050718a + (intptr_t)(g_00507230)));
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    iVar3 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_0050719a + (intptr_t)(g_00507234))),
                            *(undefined4 *)((unsigned char *)((char *)&g_0050719c + (intptr_t)(g_00507238))),0,uVar6,iVar7,p3);
    if (*(int *)(iVar3 + 0x14) != 0) {
      uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
      iVar3 = (undefined4)(intptr_t)(((DataManager *)uVar2)->isEnoughVirNumber(2, 0x32, 1));
      if (iVar3 != 0) {
        piVar4 = (int *)((DataManager *)this)->shareDataManager();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x28)))());
        uVar6 = (undefined4)(1);
        ((UserData *)uVar2)->subVirNumber(2, g_00507228, g_0050722c);
        piVar4 = (int *)((DataManager *)this)->shareDataManager();
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (400)))());
        iVar3 = (undefined4)(intptr_t)(iVar3 + 0x10);
        puVar5 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar3)->at(0);
        *puVar5 = 0;
        puVar5 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar3)->at((unsigned int)1);
        *puVar5 = 0;
        puVar5 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar3)->at((unsigned int)2);
        *puVar5 = 0;
        ChallengeBuffPresenter::initWithIndex();
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)uVar2)->showToast((char const*)(unsigned char *)((char *)&g_0050721a + (intptr_t)(g_0050723c)));
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x507220);
  (*pcVar1)();
}

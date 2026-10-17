#include "BLRolePhotoPresenter.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "BLRolePhotoView.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRoleStarPresenter.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064e7c4;
extern "C" unsigned long UNK_0064e8c4;
extern "C" unsigned long UNK_0064e8de;
extern "C" unsigned long UNK_0064e924;
extern "C" unsigned long UNK_0064e970;
extern "C" unsigned long UNK_0064eb2a;
extern "C" unsigned long UNK_0064eb42;
extern "C" unsigned long UNK_0064ec12;
extern "C" unsigned long UNK_0064ec14;
extern "C" unsigned long UNK_0064ecdc;
extern "C" unsigned long UNK_0064ed74;
extern "C" unsigned long UNK_0064ed80;
extern "C" unsigned long UNK_0064ed8a;
extern "C" unsigned long UNK_0064ed8c;
extern "C" unsigned long UNK_0064ed8e;
extern "C" unsigned long _UNK_0064e7c8;
extern "C" unsigned long _UNK_0064e910;
extern "C" unsigned long _UNK_0064e914;
extern "C" unsigned long _UNK_0064e928;
extern "C" unsigned long _UNK_0064e974;
extern "C" unsigned long _UNK_0064eb84;
extern "C" unsigned long _UNK_0064eb88;
extern "C" unsigned long _UNK_0064ed9c;
extern "C" unsigned long _UNK_0064eda0;
extern "C" unsigned long _UNK_0064eda4;
extern "C" unsigned long _UNK_0064eda8;
extern "C" unsigned long _UNK_0064edac;
extern "C" unsigned long _UNK_0064edb0;
extern "C" unsigned long _UNK_0064edb4;
extern "C" unsigned long _UNK_0064edb8;
extern "C" unsigned long g_0064e7c4;
extern "C" unsigned long g_0064e7c8;
extern "C" unsigned long g_0064e8c4;
extern "C" unsigned long g_0064e8de;
extern "C" unsigned long g_0064e910;
extern "C" unsigned long g_0064e914;
extern "C" unsigned long g_0064e924;
extern "C" unsigned long g_0064e928;
extern "C" unsigned long g_0064e970;
extern "C" unsigned long g_0064e974;
extern "C" unsigned long g_0064eb2a;
extern "C" unsigned long g_0064eb42;
extern "C" unsigned long g_0064eb84;
extern "C" unsigned long g_0064eb88;
extern "C" unsigned long g_0064ec12;
extern "C" unsigned long g_0064ec14;
extern "C" unsigned long g_0064ecdc;
extern "C" unsigned long g_0064ed74;
extern "C" unsigned long g_0064ed80;
extern "C" unsigned long g_0064ed8a;
extern "C" unsigned long g_0064ed8c;
extern "C" unsigned long g_0064ed8e;
extern "C" unsigned long g_0064ed9c;
extern "C" unsigned long g_0064eda0;
extern "C" unsigned long g_0064eda4;
extern "C" unsigned long g_0064eda8;
extern "C" unsigned long g_0064edac;
extern "C" unsigned long g_0064edb0;
extern "C" unsigned long g_0064edb4;
extern "C" unsigned long g_0064edb8;
bool BLRolePhotoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRolePhotoPresenter::~BLRolePhotoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064e8c4 + g_0064e910);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064e8de + g_0064e914,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRolePhotoPresenter::BLRolePhotoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0064eb2a + g_0064eb84);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064eb42 + g_0064eb88,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLRolePhotoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRolePhotoPresenter::initWithView(BLRolePhotoView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLRolePhotoPresenter::onEnter()
{
  return;
}

void BLRolePhotoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRolePhotoPresenter::updateWithRoleId(std::string * p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
  iVar7 = 0;
  while( true ) {
    if (iVar3 <= iVar7) {
      return;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)iVar7));
    if ((iVar4 == 0) ||
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0064ec12 + (intptr_t)(g_0064ed9c))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_0064ec14 + (intptr_t)(g_0064eda0))),0),
       piVar1 == (int *)0x0)) break;
    piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))();
    (**(code **)(*(int *)(piVar5) + (0x18)))(aiStack_1c,piVar5);
    bVar9 = (undefined4)(intptr_t)(false);
    if (*(int *)(aiStack_1c[0] + -0xc) == *(int *)(*(int *)p1 + -0xc)) {
      iVar4 = (undefined4)(intptr_t)(func_0079e60c());
      bVar9 = (undefined4)(intptr_t)(iVar4 == 0);
    }
    func_0079e2bc(aiStack_1c);
    if (bVar9) {
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))());
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x68)))());
      uVar6 = (undefined4)(((BLLanguage *)this)->share());
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      (**(code **)(*(int *)(piVar5) + (0x20)))(aiStack_1c,piVar5);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_24);
      func_0079e2bc(aiStack_1c);
      func_0079e53c(&uStack_20,&uStack_24);
      if (0 < iVar3) {
        cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064ecdc + (intptr_t)(g_0064eda4)), uStack_24, iVar3);
        uVar6 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e2dc(&uStack_20,uVar6);
      }
      piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      (**(code **)(*(int *)(piVar5) + (0x234)))(piVar5,uStack_20);
      piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
      pcVar8 = *(code **)(*piVar5 + 0x20c);
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      (**(code **)(*(int *)(piVar1) + (0x30)))(aiStack_1c,piVar1);
      piVar1 = (int *)0 /* ctorZero */;
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
      (*pcVar8)(piVar5,uVar6);
      func_0079e2bc(aiStack_1c);
      ((BLRoleStarPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x110) + 0x108)))->updateWithData(uVar2);
      func_0079e2bc(&uStack_20);
      func_0079e2bc(&uStack_24);
      return;
    }
    iVar7 = (undefined4)(intptr_t)(iVar7 + 1);
  }
  0 /* ctorZero */;
  func_0079e864(6,(unsigned char *)((char *)&g_0064ed8a + (intptr_t)(g_0064edb0)),(unsigned char *)((char *)&g_0064ed8c + (intptr_t)(g_0064edb4)),
                  (unsigned char *)((char *)&g_0064ed8e + (intptr_t)(g_0064edb8)),(unsigned char *)((char *)&g_0064ed80 + (intptr_t)(g_0064edac)),0x98);
                    /* WARNING: Does not return */
  pcVar8 = (code *)software_udf(0xff,0x64ed96);
  (*pcVar8)();
}

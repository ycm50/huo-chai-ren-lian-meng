#include "BLUpgraceMAXButtonPresenter.h"
#include "CCDictionary.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BackPackItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCInvocation.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpgraceMAXButtonView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "LivenessUserData.h"
#include "Toast.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006775fc;
extern "C" unsigned long UNK_00677616;
extern "C" unsigned long UNK_0067766c;
extern "C" unsigned long UNK_00677694;
extern "C" unsigned long UNK_006776ce;
extern "C" unsigned long UNK_006776e6;
extern "C" unsigned long UNK_00677794;
extern "C" unsigned long UNK_006777ac;
extern "C" unsigned long UNK_006777da;
extern "C" unsigned long UNK_0067786a;
extern "C" unsigned long UNK_0067786c;
extern "C" unsigned long UNK_006779ba;
extern "C" unsigned long UNK_006779e6;
extern "C" unsigned long UNK_006779e8;
extern "C" unsigned long UNK_00677a1c;
extern "C" unsigned long UNK_00677ace;
extern "C" unsigned long _UNK_00677658;
extern "C" unsigned long _UNK_0067765c;
extern "C" unsigned long _UNK_00677670;
extern "C" unsigned long _UNK_00677698;
extern "C" unsigned long _UNK_0067772c;
extern "C" unsigned long _UNK_00677730;
extern "C" unsigned long _UNK_006777fc;
extern "C" unsigned long _UNK_00677800;
extern "C" unsigned long _UNK_00677804;
extern "C" unsigned long _UNK_00677980;
extern "C" unsigned long _UNK_00677984;
extern "C" unsigned long _UNK_00677b04;
extern "C" unsigned long _UNK_00677b08;
extern "C" unsigned long _UNK_00677b0c;
extern "C" unsigned long _UNK_00677b10;
extern "C" unsigned long _UNK_00677b14;
extern "C" unsigned long g_006775fc;
extern "C" unsigned long g_00677616;
extern "C" unsigned long g_00677658;
extern "C" unsigned long g_0067765c;
extern "C" unsigned long g_0067766c;
extern "C" unsigned long g_00677670;
extern "C" unsigned long g_00677694;
extern "C" unsigned long g_00677698;
extern "C" unsigned long g_006776ce;
extern "C" unsigned long g_006776e6;
extern "C" unsigned long g_0067772c;
extern "C" unsigned long g_00677730;
extern "C" unsigned long g_00677794;
extern "C" unsigned long g_006777ac;
extern "C" unsigned long g_006777da;
extern "C" unsigned long g_006777fc;
extern "C" unsigned long g_00677800;
extern "C" unsigned long g_00677804;
extern "C" unsigned long g_0067786a;
extern "C" unsigned long g_0067786c;
extern "C" unsigned long g_00677980;
extern "C" unsigned long g_00677984;
extern "C" unsigned long g_006779ba;
extern "C" unsigned long g_006779e6;
extern "C" unsigned long g_006779e8;
extern "C" unsigned long g_00677a1c;
extern "C" unsigned long g_00677ace;
extern "C" unsigned long g_00677b04;
extern "C" unsigned long g_00677b08;
extern "C" unsigned long g_00677b0c;
extern "C" unsigned long g_00677b10;
extern "C" unsigned long g_00677b14;
cocos2d::extension::CCInvocation* BLUpgraceMAXButtonPresenter::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLUpgraceMAXButtonPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLUpgraceMAXButtonPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceMAXButtonPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpgraceMAXButtonPresenter::tick(float p1)
{
  return;
}

BLUpgraceMAXButtonPresenter::~BLUpgraceMAXButtonPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006775fc + g_00677658);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00677616 + g_0067765c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLUpgraceMAXButtonPresenter::setInvocation(cocos2d::extension::CCInvocation* p1)
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

BLUpgraceMAXButtonPresenter::BLUpgraceMAXButtonPresenter()
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
  iVar3 = *(int *)(&g_006776ce + g_0067772c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006776e6 + g_00677730,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void BLUpgraceMAXButtonPresenter::onEnter()
{
  return;
}

void BLUpgraceMAXButtonPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLUpgraceMAXButtonPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLUpgraceMAXButtonPresenter::initWithView(BLUpgraceMAXButtonView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLUpgraceMAXButtonView *)(p1))->getBtnUpgrace();
  uStack_14 = (undefined4)(0);
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00677794 + (intptr_t)(g_006777fc))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_18,0,0x20);
  uVar2 = (undefined4)(((BLUpgraceMAXButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPrice());
  puVar3 = (unsigned char *)((char *)&g_006777ac + (intptr_t)(g_00677800));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLUpgraceMAXButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  piVar1 = (int *)((BLUpgraceMAXButtonView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUpgrace();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006777da + (intptr_t)(g_00677804)),auStack_20);
  (*pcVar4)(piVar1,auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLUpgraceMAXButtonPresenter::updateData(cocos2d::CCObject* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)::operator new(0x84);
  ::new ((void *)piVar1) EquipData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 EquipData 的构造函数 -> vptr 垃圾 */
  iVar2 = (undefined4)(intptr_t)(((EquipData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x20) + 0x20))());
  ((EquipData *)piVar1)->initWithID(uVar3);
  piVar4 = (int *)((DataCacheManager *)this)->shareManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x20) + 0x20))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(uVar5));
  iVar11 = (int)*(int *)&(*piVar1);
  if (iVar2 == 0) {
    piVar4 = (int *)(**(code **)(iVar11 + 0xc0))(piVar1);
    (**(code **)(*(int *)(piVar4) + (0x58)))();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1);
    (**(code **)(*(int *)(piVar1) + (0x50)))();
    (**(code **)(**(int **)(((int)this) + 0x20) + 0x30))();
                    /* WARNING: Does not return */
    pcVar13 = (code *)software_udf(0xff,0x67797c);
    (*pcVar13)();
  }
  piVar4 = (int *)func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0067786a + (intptr_t)(g_00677980))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_0067786c + (intptr_t)(g_00677984))),0);
  piVar6 = (int *)(**(code **)(iVar11 + 0xc0))(piVar1);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x58)))());
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1);
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
  iVar11 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0x30))());
  iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x38)))(piVar4));
  iVar10 = (undefined4)(intptr_t)(iVar2 * iVar11);
  *(undefined4 *)(((int)this) + 0x24) = 0;
  iVar12 = 0;
  while( true ) {
    iVar12 = (undefined4)(intptr_t)(iVar12 + iVar2);
    if (iVar7 < iVar11) break;
    uVar5 = (undefined4)(func_0079e2ec(*(undefined4 *)(((int)this) + 0x24)));
    uVar8 = (undefined4)(func_0079e2ec(iVar2));
    uVar8 = (undefined4)(func_0079e4fc(uVar8,uVar3));
    func_0079e4ac(iVar11 * ((iVar10 - iVar2) + iVar12),5);
    uVar9 = (undefined4)(func_0079e2ec());
    uVar8 = (undefined4)(func_0079e59c(uVar8,uVar9));
    func_0079e59c(uVar5,uVar8);
    uVar5 = (undefined4)(func_0079e5fc());
    iVar11 = (undefined4)(intptr_t)(iVar11 + 1);
    *(undefined4 *)(((int)this) + 0x24) = uVar5;
  }
  piVar1 = (int *)((BLUpgraceMAXButtonView *)*(undefined4 *)(((int)this) + 0x18))->getLabPrice();
  pcVar13 = *(code **)(*piVar1 + 0x234);
  uVar14 = (undefined4)(intptr_t)(func_0079e734(*(undefined4 *)(((int)this) + 0x24)));
  uVar3 = (undefined4)((undefined4)((ulonglong)uVar14 >> 0x20));
  0 /* ctorZero */;
  (*pcVar13)(piVar1,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  return;
}

void BLUpgraceMAXButtonPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpgraceMAXButtonPresenter::onUpgrace(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

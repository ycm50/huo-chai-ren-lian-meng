#include "BLDragonCanyonResultPresenter.h"
#include "BLDragonCanyonResultView.h"
#include "BLGridView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLItemDataView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionRewardData.h"
#include "BLResultManager.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "BluetoothHelper.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "DragonCanyonData.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "MissionValleryData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006561ac;
extern "C" unsigned long UNK_00656204;
extern "C" unsigned long UNK_00656238;
extern "C" unsigned long UNK_0065627c;
extern "C" unsigned long UNK_006562a4;
extern "C" unsigned long UNK_006562f4;
extern "C" unsigned long UNK_00656344;
extern "C" unsigned long UNK_0065635c;
extern "C" unsigned long UNK_00656398;
extern "C" unsigned long UNK_0065639a;
extern "C" unsigned long UNK_006563ba;
extern "C" unsigned long UNK_00656446;
extern "C" unsigned long UNK_006564e4;
extern "C" unsigned long UNK_0065651e;
extern "C" unsigned long UNK_0065657e;
extern "C" unsigned long UNK_00656580;
extern "C" unsigned long UNK_00656598;
extern "C" unsigned long UNK_006565ac;
extern "C" unsigned long UNK_006565cc;
extern "C" unsigned long UNK_006565d6;
extern "C" unsigned long UNK_0065666a;
extern "C" unsigned long UNK_006567ae;
extern "C" unsigned long UNK_0065693c;
extern "C" unsigned long UNK_006569ec;
extern "C" unsigned long UNK_00656a50;
extern "C" unsigned long UNK_00656b8a;
extern "C" unsigned long UNK_00656c90;
extern "C" unsigned long UNK_00656c91;
extern "C" unsigned long UNK_00656c92;
extern "C" unsigned long UNK_00656caa;
extern "C" unsigned long UNK_00656d52;
extern "C" unsigned long UNK_00656f0c;
extern "C" unsigned long UNK_00656f18;
extern "C" unsigned long UNK_00656f60;
extern "C" unsigned long UNK_00656fa4;
extern "C" unsigned long UNK_00656fd2;
extern "C" unsigned long _UNK_006561b0;
extern "C" unsigned long _UNK_00656268;
extern "C" unsigned long _UNK_0065626c;
extern "C" unsigned long _UNK_00656280;
extern "C" unsigned long _UNK_006562a8;
extern "C" unsigned long _UNK_006562e0;
extern "C" unsigned long _UNK_006562e4;
extern "C" unsigned long _UNK_006562f8;
extern "C" unsigned long _UNK_0065630c;
extern "C" unsigned long _UNK_00656348;
extern "C" unsigned long _UNK_006563f0;
extern "C" unsigned long _UNK_006563f4;
extern "C" unsigned long _UNK_006563f8;
extern "C" unsigned long _UNK_006563fc;
extern "C" unsigned long _UNK_0065644c;
extern "C" unsigned long _UNK_00656780;
extern "C" unsigned long _UNK_00656784;
extern "C" unsigned long _UNK_00656788;
extern "C" unsigned long _UNK_0065678c;
extern "C" unsigned long _UNK_00656790;
extern "C" unsigned long _UNK_00656794;
extern "C" unsigned long _UNK_00656798;
extern "C" unsigned long _UNK_0065679c;
extern "C" unsigned long _UNK_006567a0;
extern "C" unsigned long _UNK_006568e8;
extern "C" unsigned long _UNK_006568ec;
extern "C" unsigned long _UNK_006568f0;
extern "C" unsigned long _UNK_006568f4;
extern "C" unsigned long _UNK_006568f8;
extern "C" unsigned long _UNK_006568fc;
extern "C" unsigned long _UNK_00656900;
extern "C" unsigned long _UNK_00656904;
extern "C" unsigned long _UNK_00656b24;
extern "C" unsigned long _UNK_00656b28;
extern "C" unsigned long _UNK_00656b2c;
extern "C" unsigned long _UNK_00656b30;
extern "C" unsigned long _UNK_00656b34;
extern "C" unsigned long _UNK_00656b38;
extern "C" unsigned long _UNK_00656b3c;
extern "C" unsigned long _UNK_00656b40;
extern "C" unsigned long _UNK_00656b44;
extern "C" unsigned long _UNK_00656b48;
extern "C" unsigned long _UNK_00656ebc;
extern "C" unsigned long _UNK_00656ec0;
extern "C" unsigned long _UNK_00656ec4;
extern "C" unsigned long _UNK_00656ec8;
extern "C" unsigned long _UNK_00657044;
extern "C" unsigned long _UNK_00657048;
extern "C" unsigned long _UNK_0065704c;
extern "C" unsigned long _UNK_00657050;
extern "C" unsigned long _UNK_00657054;
extern "C" unsigned long _UNK_00657058;
extern "C" unsigned long _UNK_00657228;
extern "C" unsigned long g_006561ac;
extern "C" unsigned long g_006561b0;
extern "C" unsigned long g_00656204;
extern "C" unsigned long g_00656238;
extern "C" unsigned long g_00656268;
extern "C" unsigned long g_0065626c;
extern "C" unsigned long g_0065627c;
extern "C" unsigned long g_00656280;
extern "C" unsigned long g_006562a4;
extern "C" unsigned long g_006562a8;
extern "C" unsigned long g_006562e0;
extern "C" unsigned long g_006562e4;
extern "C" unsigned long g_006562f4;
extern "C" unsigned long g_006562f8;
extern "C" unsigned long g_0065630c;
extern "C" unsigned long g_00656344;
extern "C" unsigned long g_00656348;
extern "C" unsigned long g_0065635c;
extern "C" unsigned long g_00656398;
extern "C" unsigned long g_0065639a;
extern "C" unsigned long g_006563ba;
extern "C" unsigned long g_006563f0;
extern "C" unsigned long g_006563f4;
extern "C" unsigned long g_006563f8;
extern "C" unsigned long g_006563fc;
extern "C" unsigned long g_00656446;
extern "C" unsigned long g_0065644c;
extern "C" unsigned long g_006564e4;
extern "C" unsigned long g_0065651e;
extern "C" unsigned long g_0065657e;
extern "C" unsigned long g_00656580;
extern "C" unsigned long g_00656598;
extern "C" unsigned long g_006565ac;
extern "C" unsigned long g_006565cc;
extern "C" unsigned long g_006565d6;
extern "C" unsigned long g_0065666a;
extern "C" unsigned long g_00656780;
extern "C" unsigned long g_00656784;
extern "C" unsigned long g_00656788;
extern "C" unsigned long g_0065678c;
extern "C" unsigned long g_00656790;
extern "C" unsigned long g_00656794;
extern "C" unsigned long g_00656798;
extern "C" unsigned long g_0065679c;
extern "C" unsigned long g_006567a0;
extern "C" unsigned long g_006567ae;
extern "C" unsigned long g_006568e8;
extern "C" unsigned long g_006568ec;
extern "C" unsigned long g_006568f0;
extern "C" unsigned long g_006568f4;
extern "C" unsigned long g_006568f8;
extern "C" unsigned long g_006568fc;
extern "C" unsigned long g_00656900;
extern "C" unsigned long g_00656904;
extern "C" unsigned long g_0065693c;
extern "C" unsigned long g_006569ec;
extern "C" unsigned long g_00656a50;
extern "C" unsigned long g_00656b24;
extern "C" unsigned long g_00656b28;
extern "C" unsigned long g_00656b2c;
extern "C" unsigned long g_00656b30;
extern "C" unsigned long g_00656b34;
extern "C" unsigned long g_00656b38;
extern "C" unsigned long g_00656b3c;
extern "C" unsigned long g_00656b40;
extern "C" unsigned long g_00656b44;
extern "C" unsigned long g_00656b48;
extern "C" unsigned long g_00656b8a;
extern "C" unsigned long g_00656c90;
extern "C" unsigned long g_00656c91;
extern "C" unsigned long g_00656c92;
extern "C" unsigned long g_00656caa;
extern "C" unsigned long g_00656d52;
extern "C" unsigned long g_00656ebc;
extern "C" unsigned long g_00656ec0;
extern "C" unsigned long g_00656ec4;
extern "C" unsigned long g_00656ec8;
extern "C" unsigned long g_00656f0c;
extern "C" unsigned long g_00656f18;
extern "C" unsigned long g_00656f60;
extern "C" unsigned long g_00656fa4;
extern "C" unsigned long g_00656fd2;
extern "C" unsigned long g_00657044;
extern "C" unsigned long g_00657048;
extern "C" unsigned long g_0065704c;
extern "C" unsigned long g_00657050;
extern "C" unsigned long g_00657054;
extern "C" unsigned long g_00657058;
extern "C" unsigned long g_00657228;
bool BLDragonCanyonResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDragonCanyonResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDragonCanyonResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDragonCanyonResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDragonCanyonResultPresenter::tick(float p1)
{
  return;
}

undefined4 BLDragonCanyonResultPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLDragonCanyonResultPresenter::~BLDragonCanyonResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00656204 + g_00656268);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00656238 + g_0065626c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDragonCanyonResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}

void BLDragonCanyonResultPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  uVar1 = func_0079e734();
  func_0079e724((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_006562e0,g_006562e4,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

undefined4 BLDragonCanyonResultPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLDragonCanyonResultPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x24) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_00656344 + g_00656348, p2);
  }
  return;
}


undefined4 BLDragonCanyonResultPresenter::create(BLDragonCanyonResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLDragonCanyonResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00656446 + g_0065644c);
  return;
}

void BLDragonCanyonResultPresenter::onEnter()
{
  return;
}

void BLDragonCanyonResultPresenter::initWith(bool p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
BLDragonCanyonResultPresenter::BLDragonCanyonResultPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::initData()
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)((long long)::operator new((size_t)(300)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)piVar2)->autorelease();
    *(int **)(((int)this) + 0x24) = piVar2;
    (**(code **)(*piVar2 + 0x1fc))(piVar2,((int)this) + 0x18);
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x204))(*(int **)(((int)this) + 0x24),((int)this) + 0x1c);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x24));
    uVar4 = (undefined4)(cocos2d::CCNode::create());
    ((BLGridView *)uVar5)->setItemPartner((cocos2d::CCNode*)uVar4);
    piVar2 = (int *)((BLDragonCanyonResultView *)*(undefined4 *)(((int)this) + 0x20))->ScrollviewItems();
    (**(code **)(*piVar2 + 200))(piVar2,*(undefined4 *)(((int)this) + 0x24));
    ((MissionValleryData *)this)->getInstance();
    ((MissionValleryData *)this)->saveData();
    return;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  *(undefined4 *)(((int)this) + 0x24) = 0;
                    /* WARNING: Does not return;
  (*pcVar1)();
}

void BLDragonCanyonResultPresenter::sortBackPackData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = g_006568e8;
  if ((int)(intptr_t)p1 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)(&g_006567ae + g_006568ec + g_006568e8));
    piVar2 = (int *)func_0079e55c(p1,uVar7,
                                    *(undefined4 *)(&g_006567ae + g_006568f0 + g_006568e8),0
                                   );
    if (piVar2 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
      iVar4 = (**(code **)(*piVar2 + 0x128))(piVar2);
      if (iVar4 == 0) {
                    /* WARNING: Does not return;
        (*pcVar1)();
      }
      iVar4 = func_0079e55c(iVar4,uVar7,*(undefined4 *)(&g_006567ae + g_006568f4 + iVar6),0);
      uVar8 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
      uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar4 = ((DataCacheManager *)uVar7)->getItemDataByID(uVar3);
      if (iVar4 != 0) {
        uVar7 = (undefined4)(((UIManager *)this)->shareManager());
        iVar4 = ((UIManager *)uVar7)->getUIObject(0x1f);
        if ((iVar4 == 0) ||
           (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(&g_006567ae + g_006568f8 + iVar6),
                                    *(undefined4 *)(&g_006567ae + g_006568fc + iVar6),0),
           iVar4 == 0)) {
          uVar7 = (undefined4)(((UIManager *)this)->shareManager());
          iVar5 = ((UIManager *)uVar7)->showUIById(0x1f);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = func_0079e55c(iVar5,*(undefined4 *)(&g_006567ae + g_006568f8 + iVar6),
                                    *(undefined4 *)(&g_006567ae + g_006568fc + iVar6),0);
          }
        }
        piVar2 = (int *)::operator new(0x30);
        ::new ((void *)piVar2) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
        (**(code **)(*piVar2 + 0x2c))(piVar2,uVar8);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                    *(undefined4 *)(&g_006567ae + g_00656900 + iVar6),
                                    *(undefined4 *)(&g_006567ae + g_00656904 + iVar6),0),
           iVar6 != 0)) {
          uVar7 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
          ((BLItemDataInfoPresenter *)uVar7)->initPackItemData((BackPackItemData*)piVar2);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->DebrisItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->ItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->OtherItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
        }
      }
    }
  }
  return;
}

void BLDragonCanyonResultPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::initWithView(BLDragonCanyonResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::onSuccessRewards()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDragonCanyonResultPresenter::netcallbacksave()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

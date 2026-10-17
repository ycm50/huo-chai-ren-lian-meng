#include "BLChestTenTimePresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLChestRewardItemPresenter.h"
#include "BLChestRewardItemView.h"
#include "BLChestTenTimeView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "CampaignData.h"
#include "ChestData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ItemData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005178f4;
extern "C" unsigned long UNK_0051790c;
extern "C" unsigned long UNK_00517924;
extern "C" unsigned long UNK_00517954;
extern "C" unsigned long UNK_0051796c;
extern "C" unsigned long UNK_00517a04;
extern "C" unsigned long UNK_00517a2a;
extern "C" unsigned long UNK_00517a8c;
extern "C" unsigned long UNK_00517ab4;
extern "C" unsigned long UNK_00517b0c;
extern "C" unsigned long UNK_00517b10;
extern "C" unsigned long UNK_00517b58;
extern "C" unsigned long UNK_00517b5a;
extern "C" unsigned long UNK_00517baa;
extern "C" unsigned long UNK_00517be4;
extern "C" unsigned long UNK_00517ca2;
extern "C" unsigned long UNK_00517cc2;
extern "C" unsigned long UNK_00517d22;
extern "C" unsigned long UNK_00517dde;
extern "C" unsigned long UNK_00517de2;
extern "C" unsigned long UNK_00517de6;
extern "C" unsigned long UNK_00517dea;
extern "C" unsigned long UNK_00517dee;
extern "C" unsigned long UNK_00517df2;
extern "C" unsigned long UNK_00517df6;
extern "C" unsigned long UNK_00517dfa;
extern "C" unsigned long UNK_00517dfe;
extern "C" unsigned long UNK_00517e02;
extern "C" unsigned long UNK_00517eb8;
extern "C" unsigned long UNK_00517ebc;
extern "C" unsigned long UNK_00517ec0;
extern "C" unsigned long UNK_00517ec4;
extern "C" unsigned long UNK_00517ec8;
extern "C" unsigned long UNK_00517ecc;
extern "C" unsigned long UNK_00517ed0;
extern "C" unsigned long UNK_00517ed4;
extern "C" unsigned long UNK_00517ed8;
extern "C" unsigned long UNK_00517edc;
extern "C" unsigned long UNK_00517ee0;
extern "C" unsigned long UNK_00517ee4;
extern "C" unsigned long UNK_00517ee8;
extern "C" unsigned long UNK_00517eec;
extern "C" unsigned long UNK_00517ef0;
extern "C" unsigned long UNK_00517ef4;
extern "C" unsigned long UNK_00517ef8;
extern "C" unsigned long UNK_00517efc;
extern "C" unsigned long UNK_00517f00;
extern "C" unsigned long UNK_00517f04;
extern "C" unsigned long UNK_00517fe8;
extern "C" unsigned long UNK_0051802c;
extern "C" unsigned long UNK_005180a0;
extern "C" unsigned long UNK_00518160;
extern "C" unsigned long UNK_00518176;
extern "C" unsigned long UNK_005182b2;
extern "C" unsigned long UNK_005182b4;
extern "C" unsigned long UNK_0051834c;
extern "C" unsigned long UNK_005183bc;
extern "C" unsigned long _UNK_005178f8;
extern "C" unsigned long _UNK_00517910;
extern "C" unsigned long _UNK_00517928;
extern "C" unsigned long _UNK_00517958;
extern "C" unsigned long _UNK_00517970;
extern "C" unsigned long _UNK_00517a78;
extern "C" unsigned long _UNK_00517a7c;
extern "C" unsigned long _UNK_00517a90;
extern "C" unsigned long _UNK_00517ab8;
extern "C" unsigned long _UNK_00517adc;
extern "C" unsigned long _UNK_00517ae0;
extern "C" unsigned long _UNK_00517b78;
extern "C" unsigned long _UNK_00517b7c;
extern "C" unsigned long _UNK_00517b80;
extern "C" unsigned long _UNK_00517b84;
extern "C" unsigned long _UNK_00517c2c;
extern "C" unsigned long _UNK_00517c30;
extern "C" unsigned long _UNK_00517d44;
extern "C" unsigned long _UNK_00517d48;
extern "C" unsigned long _UNK_00517d4c;
extern "C" unsigned long _UNK_00517f70;
extern "C" unsigned long _UNK_00517f74;
extern "C" unsigned long _UNK_00518250;
extern "C" unsigned long _UNK_00518254;
extern "C" unsigned long _UNK_00518258;
extern "C" unsigned long _UNK_0051825c;
extern "C" unsigned long _UNK_00518260;
extern "C" unsigned long _UNK_005182fc;
extern "C" unsigned long _UNK_00518300;
extern "C" unsigned long _UNK_005183c8;
extern "C" unsigned long _UNK_005183cc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_005178f4;
extern "C" unsigned long g_005178f8;
extern "C" unsigned long g_0051790c;
extern "C" unsigned long g_00517910;
extern "C" unsigned long g_00517924;
extern "C" unsigned long g_00517928;
extern "C" unsigned long g_00517954;
extern "C" unsigned long g_00517958;
extern "C" unsigned long g_0051796c;
extern "C" unsigned long g_00517970;
extern "C" unsigned long g_00517a04;
extern "C" unsigned long g_00517a2a;
extern "C" unsigned long g_00517a78;
extern "C" unsigned long g_00517a7c;
extern "C" unsigned long g_00517a8c;
extern "C" unsigned long g_00517a90;
extern "C" unsigned long g_00517ab4;
extern "C" unsigned long g_00517ab8;
extern "C" unsigned long g_00517adc;
extern "C" unsigned long g_00517ae0;
extern "C" unsigned long g_00517b0c;
extern "C" unsigned long g_00517b10;
extern "C" unsigned long g_00517b58;
extern "C" unsigned long g_00517b5a;
extern "C" unsigned long g_00517b78;
extern "C" unsigned long g_00517b7c;
extern "C" unsigned long g_00517b80;
extern "C" unsigned long g_00517b84;
extern "C" unsigned long g_00517baa;
extern "C" unsigned long g_00517be4;
extern "C" unsigned long g_00517c2c;
extern "C" unsigned long g_00517c30;
extern "C" unsigned long g_00517ca2;
extern "C" unsigned long g_00517cc2;
extern "C" unsigned long g_00517d22;
extern "C" unsigned long g_00517d44;
extern "C" unsigned long g_00517d48;
extern "C" unsigned long g_00517d4c;
extern "C" unsigned long g_00517dde;
extern "C" unsigned long g_00517de2;
extern "C" unsigned long g_00517de6;
extern "C" unsigned long g_00517dea;
extern "C" unsigned long g_00517dee;
extern "C" unsigned long g_00517df2;
extern "C" unsigned long g_00517df6;
extern "C" unsigned long g_00517dfa;
extern "C" unsigned long g_00517dfe;
extern "C" unsigned long g_00517e02;
extern "C" unsigned long g_00517eb8;
extern "C" unsigned long g_00517ebc;
extern "C" unsigned long g_00517ec0;
extern "C" unsigned long g_00517ec4;
extern "C" unsigned long g_00517ec8;
extern "C" unsigned long g_00517ecc;
extern "C" unsigned long g_00517ed0;
extern "C" unsigned long g_00517ed4;
extern "C" unsigned long g_00517ed8;
extern "C" unsigned long g_00517edc;
extern "C" unsigned long g_00517ee0;
extern "C" unsigned long g_00517ee4;
extern "C" unsigned long g_00517ee8;
extern "C" unsigned long g_00517eec;
extern "C" unsigned long g_00517ef0;
extern "C" unsigned long g_00517ef4;
extern "C" unsigned long g_00517ef8;
extern "C" unsigned long g_00517efc;
extern "C" unsigned long g_00517f00;
extern "C" unsigned long g_00517f04;
extern "C" unsigned long g_00517f70;
extern "C" unsigned long g_00517f74;
extern "C" unsigned long g_00517fe8;
extern "C" unsigned long g_0051802c;
extern "C" unsigned long g_005180a0;
extern "C" unsigned long g_00518160;
extern "C" unsigned long g_00518176;
extern "C" unsigned long g_00518250;
extern "C" unsigned long g_00518254;
extern "C" unsigned long g_00518258;
extern "C" unsigned long g_0051825c;
extern "C" unsigned long g_00518260;
extern "C" unsigned long g_005182b2;
extern "C" unsigned long g_005182b4;
extern "C" unsigned long g_005182fc;
extern "C" unsigned long g_00518300;
extern "C" unsigned long g_0051834c;
extern "C" unsigned long g_005183bc;
extern "C" unsigned long g_005183c8;
extern "C" unsigned long g_005183cc;
ChestData* BLChestTenTimePresenter::getChestData() const
{
  return (ChestData*)(*(undefined4 *)(((int)this) + 0x24));
}

cocos2d::CCArray* BLChestTenTimePresenter::getArrayEquips() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x28));
}

bool BLChestTenTimePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestTenTimePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestTenTimePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestTenTimePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLChestTenTimePresenter::numOfColumn(BLGridView* p1)
{
  return 5;
}

undefined4 BLChestTenTimePresenter::numOfRow(BLGridView* p1)
{
  return 2;
}

void BLChestTenTimePresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLChestTenTimePresenter::tick(float p1)
{
  return;
}

void BLChestTenTimePresenter::setChestData(ChestData* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLChestTenTimePresenter::~BLChestTenTimePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00517a04 + g_00517a78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar2 + 0xa0;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00517a2a + g_00517a7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestTenTimePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x3e);
  return;
}

undefined4 BLChestTenTimePresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLChestTenTimePresenter::create(BLChestTenTimeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestTenTimePresenter::onExit()
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

void BLChestTenTimePresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}


undefined4 BLChestTenTimePresenter::randomReward(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(((ChestData *)*(undefined4 *)(((int)this) + 0x24))->getTotalProbabilityTen());
  uVar2 = (undefined4)(((long long)::arc4random()));
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x24));
  (void)(((long long)((unsigned)(uVar2) / (unsigned)(uVar1))));
  uVar1 = (undefined4)(((ChestData *)this)->getTenIDbyRandom(uVar3));
  uVar2 = (undefined4)(((EquipData *)this)->create());
  ((ItemData *)uVar2)->initWith(uVar1);
  return uVar2;
}

void BLChestTenTimePresenter::buyAgain()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_r1;
  int iVar7;
  int iStack_70;
  int aiStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_40 [11];
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->removeAllObjects();
  iVar7 = 0;
  *(undefined1 *)(((int)this) + 0x2d) = 0;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (((iVar2 == 1) && (iVar2 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x38))(), iVar2 == 2)) &&
     (iVar2 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x50))(), iVar2 == 1)) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
    (**(code **)(*piVar1 + 0x7c))(piVar1,0);
    aiStack_40[0] = *(int *)(&g_00517dde + g_00517f70);
    aiStack_40[1] = *(int *)(&g_00517de2 + g_00517f70);
    aiStack_40[2] = *(int *)(&g_00517de6 + g_00517f70);
    aiStack_40[3] = *(int *)(&g_00517dea + g_00517f70);
    aiStack_40[4] = *(int *)(&g_00517dee + g_00517f70);
    aiStack_40[5] = *(int *)(&g_00517df2 + g_00517f70);
    aiStack_40[6] = *(int *)(&g_00517df6 + g_00517f70);
    aiStack_40[7] = *(int *)(&g_00517dfa + g_00517f70);
    aiStack_40[8] = *(int *)(&g_00517dfe + g_00517f70);
    aiStack_40[9] = *(int *)(&g_00517e02 + g_00517f70);
    do {
      piVar1 = (int *)((EquipData *)this)->create();
      ((EquipData *)piVar1)->initWithID(*(undefined4 *)((int)aiStack_40 + iVar7));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x9c))(piVar1,1);
        piVar6 = (int *)((DataManager *)this)->shareDataManager();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x28))();
        uVar4 = (undefined4)((**(code **)(*piVar6 + 0x50))());
        ((BackPackData *)uVar4)->addItemData((ItemData*)piVar1, 1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->addObject((cocos2d::CCObject*)piVar1);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0x28);
  }
  else {
    aiStack_68[0] = *(int *)(&g_00517eb8 + g_00517f74);
    aiStack_68[1] = *(int *)(&g_00517ebc + g_00517f74);
    aiStack_68[2] = *(int *)(&g_00517ec0 + g_00517f74);
    aiStack_68[3] = *(int *)(&g_00517ec4 + g_00517f74);
    uStack_58 = (undefined4)(*(undefined4 *)(&g_00517ec8 + g_00517f74));
    uStack_54 = (undefined4)(*(undefined4 *)(&g_00517ecc + g_00517f74));
    uStack_50 = (undefined4)(*(undefined4 *)(&g_00517ed0 + g_00517f74));
    uStack_4c = (undefined4)(*(undefined4 *)(&g_00517ed4 + g_00517f74));
    uStack_48 = (undefined4)(*(undefined4 *)(&g_00517ed8 + g_00517f74));
    uStack_44 = (undefined4)(*(undefined4 *)(&g_00517edc + g_00517f74));
    iVar2 = 0;
    aiStack_40[0] = *(int *)(&g_00517ee0 + g_00517f74);
    aiStack_40[1] = *(int *)(&g_00517ee4 + g_00517f74);
    aiStack_40[2] = *(int *)(&g_00517ee8 + g_00517f74);
    aiStack_40[3] = *(int *)(&g_00517eec + g_00517f74);
    aiStack_40[4] = *(int *)(&g_00517ef0 + g_00517f74);
    aiStack_40[5] = *(int *)(&g_00517ef4 + g_00517f74);
    aiStack_40[6] = *(int *)(&g_00517ef8 + g_00517f74);
    aiStack_40[7] = *(int *)(&g_00517efc + g_00517f74);
    aiStack_40[8] = *(int *)(&g_00517f00 + g_00517f74);
    aiStack_40[9] = *(int *)(&g_00517f04 + g_00517f74);
    iVar7 = 0;
    iStack_70 = 0;
code_r0x00517e5a:
    if (iVar2 < 10) {
      do {
        piVar1 = (int *)BLChestTenTimePresenter::randomReward(iVar2);
        if (piVar1 == (int *)0x0) goto code_r0x00517e5a;
        iVar3 = (**(code **)(*piVar1 + 0x50))();
      } while (((iVar3 != 4) && (iVar2 == 9)) &&
              ((iVar7 == 0 &&
               (iVar3 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x38))(), iVar3 == 2))));
      iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
      if (iVar3 == 3) {
        iVar3 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x38))();
        iVar5 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x50))();
        if (aiStack_68[(iVar3 + -1) * 5 + iVar5 + -1] <= iStack_70) goto code_r0x00517f22;
        iStack_70 = iStack_70 + 1;
      }
      else {
code_r0x00517f22:
        iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
        if (iVar3 == 4) {
          iVar3 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x38))();
          iVar5 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x50))();
          if (iVar7 < aiStack_40[(iVar3 + -1) * 5 + iVar5 + -1]) {
            iVar7 = iVar7 + 1;
            goto code_r0x00517efe;
          }
        }
        iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
        if (2 < iVar3) goto code_r0x00517e5a;
      }
code_r0x00517efe:
      piVar6 = (int *)((DataManager *)this)->shareDataManager();
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x28))();
      uVar4 = (undefined4)((**(code **)(*piVar6 + 0x50))());
      ((BackPackData *)uVar4)->addItemData((ItemData*)piVar1, 1);
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->addObject((cocos2d::CCObject*)piVar1);
      goto code_r0x00517e5a;
    }
  }
  uVar4 = (undefined4)(((long long)::arc4random()));
  (void)(((long long)((unsigned)(uVar4) / (unsigned)(9))));
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->exchangeObjectAtIndex((unsigned int)9, (unsigned int)extraout_r1);
  uVar4 = (undefined4)(((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList());
  ((BLGridView *)uVar4)->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLChestTenTimePresenter::setArrayEquips(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLChestTenTimePresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLChestTenTimePresenter::BLChestTenTimePresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00517baa + (intptr_t)(g_00517c2c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar3 + 0xa0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00517be4 + (intptr_t)(g_00517c30)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(undefined1 *)((int)((int)this) + 0x2d) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

void BLChestTenTimePresenter::initWithView(BLChestTenTimeView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLChestTenTimeView *)p1)->getBtnBuyAgain();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00517ca2 + (intptr_t)(g_00517d44))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00517cc2 + (intptr_t)(g_00517d48))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  uVar2 = (undefined4)(((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList());
  uVar3 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar2)->setItemPartner((cocos2d::CCNode*)uVar3);
  piVar1 = (int *)((BLChestTenTimeView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_00517d22 + (intptr_t)(g_00517d4c)),auStack_30);
  (*pcVar4)(piVar1,auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLChestTenTimePresenter::initWith(ChestData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined4 auStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  (**(code **)(*(int *)this + 0x44))();
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabTitle();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  (**(code **)(*(int *)(p1) + (0x20)))(auStack_d8,p1);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_d4);
  (*pcVar7)(piVar1,auStack_d4[0]);
  func_0079e2bc(auStack_d4);
  func_0079e2bc(auStack_d8);
  uStack_e8 = 0xff;
  uStack_e7 = 0xb4;
  uStack_e6 = 0;
  func_0079e45c(auStack_e4,(unsigned char *)((char *)&g_00517fe8 + (intptr_t)(g_00518250)),auStack_d4);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(9)) + 0x38))());
  if (iVar3 == 2) {
    uStack_e8 = 0x2d;
    uStack_e7 = 0xff;
    uStack_e6 = 200;
    func_0079e2dc(auStack_e4,(unsigned char *)((char *)&g_0051802c + (intptr_t)(g_00518254)));
  }
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x20c);
  func_0079e53c(auStack_e0,auStack_e4);
  piVar4 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
  (*pcVar7)(piVar1,uVar2);
  func_0079e2bc(auStack_e0);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_e8);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabAgainTitle();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_e8);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(9)) + 0x48))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005180a0 + (intptr_t)(g_00518258)),&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar7)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  uVar2 = (undefined4)(((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00518160 + (intptr_t)(g_0051825c)), 0x3f800000, 1);
  uVar2 = (undefined4)(((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabAgainTitle());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00518176 + (intptr_t)(g_00518260)), 0x3f800000, 1);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(*puVar5);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x40000000));
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getBtnBuyAgain();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar6,uVar2));
  piVar4 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  piVar4 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getSprCopperIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  piVar4 = (int *)((BLChestTenTimeView *)(*(int *)((int)this + 4*(8))))->getLabCopper();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  ((BLChestTenTimePresenter *)(((int)this)))->buyAgain();
  func_0079e2bc(auStack_e4);
  return;
}

void BLChestTenTimePresenter::getEquipByStarAndQuity(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (undefined4)(intptr_t)(p2);
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x68))());
  if (iVar3 != 0) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
    iVar6 = (undefined4)(intptr_t)(iVar3);
    if (iVar3 != 0) {
      iVar6 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
    }
    while (iVar3 != 0) {
      if (((*(int *)(iVar3 + 0x104) != 0) &&
          (piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),
                                           *(undefined4 *)((unsigned char *)((char *)&g_005182b2 + (intptr_t)(g_005182fc))),
                                           *(undefined4 *)((unsigned char *)((char *)&g_005182b4 + (intptr_t)(g_00518300))),0,p1,
                                           p2,iVar7), piVar2 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x30))(), iVar3 == p1)) {
        piVar4 = (int *)((EquipData *)this)->create();
        uVar5 = (undefined4)((**(code **)(*piVar2 + 0x20))(piVar2));
        ((EquipData *)piVar4)->initWithID(uVar5);
        iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0x50))(piVar4));
        if (iVar3 == p2) {
          ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar4);
        }
      }
      iVar3 = (undefined4)(intptr_t)(iVar6);
      if (iVar6 != 0) {
        iVar6 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x110));
      }
    }
  }
  return;
}

void BLChestTenTimePresenter::onBuyAgain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

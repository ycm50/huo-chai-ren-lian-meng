#include "BLSweepResultPresenter.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLSweepResultView.h"
#include "BLGridView.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "CampaignData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MirrorDataManager.h"
#include "MirrorRewardData.h"
#include "MissionEndLessData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065c5d4;
extern "C" unsigned long UNK_0065c5ec;
extern "C" unsigned long UNK_0065c604;
extern "C" unsigned long UNK_0065c638;
extern "C" unsigned long UNK_0065c690;
extern "C" unsigned long UNK_0065c6c4;
extern "C" unsigned long UNK_0065c708;
extern "C" unsigned long UNK_0065c730;
extern "C" unsigned long UNK_0065c758;
extern "C" unsigned long UNK_0065c7b4;
extern "C" unsigned long UNK_0065c7dc;
extern "C" unsigned long UNK_0065c7f4;
extern "C" unsigned long UNK_0065c89c;
extern "C" unsigned long UNK_0065c90c;
extern "C" unsigned long UNK_0065c974;
extern "C" unsigned long UNK_0065ca6e;
extern "C" unsigned long UNK_0065ca9c;
extern "C" unsigned long UNK_0065cb80;
extern "C" unsigned long UNK_0065ccf0;
extern "C" unsigned long UNK_0065ccf2;
extern "C" unsigned long UNK_0065cd16;
extern "C" unsigned long UNK_0065cdea;
extern "C" unsigned long UNK_0065ce4a;
extern "C" unsigned long UNK_0065ce6c;
extern "C" unsigned long UNK_0065ce9a;
extern "C" unsigned long UNK_0065ceec;
extern "C" unsigned long UNK_0065cf0c;
extern "C" unsigned long UNK_0065cf10;
extern "C" unsigned long UNK_0065cf14;
extern "C" unsigned long UNK_0065cf18;
extern "C" unsigned long UNK_0065cf1c;
extern "C" unsigned long UNK_0065cf20;
extern "C" unsigned long UNK_0065cf24;
extern "C" unsigned long UNK_0065d196;
extern "C" unsigned long UNK_0065d2ea;
extern "C" unsigned long UNK_0065d320;
extern "C" unsigned long UNK_0065d456;
extern "C" unsigned long _UNK_0065c5d8;
extern "C" unsigned long _UNK_0065c5f0;
extern "C" unsigned long _UNK_0065c608;
extern "C" unsigned long _UNK_0065c63c;
extern "C" unsigned long _UNK_0065c6f4;
extern "C" unsigned long _UNK_0065c6f8;
extern "C" unsigned long _UNK_0065c70c;
extern "C" unsigned long _UNK_0065c734;
extern "C" unsigned long _UNK_0065c748;
extern "C" unsigned long _UNK_0065c75c;
extern "C" unsigned long _UNK_0065c7a0;
extern "C" unsigned long _UNK_0065c7a4;
extern "C" unsigned long _UNK_0065c7b8;
extern "C" unsigned long _UNK_0065c7e0;
extern "C" unsigned long _UNK_0065ca20;
extern "C" unsigned long _UNK_0065ca24;
extern "C" unsigned long _UNK_0065ca28;
extern "C" unsigned long _UNK_0065ca2c;
extern "C" unsigned long _UNK_0065ca30;
extern "C" unsigned long _UNK_0065ca34;
extern "C" unsigned long _UNK_0065ca38;
extern "C" unsigned long _UNK_0065ca3c;
extern "C" unsigned long _UNK_0065ca40;
extern "C" unsigned long _UNK_0065ca44;
extern "C" unsigned long _UNK_0065ca48;
extern "C" unsigned long _UNK_0065cad0;
extern "C" unsigned long _UNK_0065cad4;
extern "C" unsigned long _UNK_0065cc3c;
extern "C" unsigned long _UNK_0065cda0;
extern "C" unsigned long _UNK_0065cda4;
extern "C" unsigned long _UNK_0065cda8;
extern "C" unsigned long _UNK_0065d14c;
extern "C" unsigned long _UNK_0065d150;
extern "C" unsigned long _UNK_0065d154;
extern "C" unsigned long _UNK_0065d158;
extern "C" unsigned long _UNK_0065d15c;
extern "C" unsigned long _UNK_0065d160;
extern "C" unsigned long _UNK_0065d164;
extern "C" unsigned long _UNK_0065d168;
extern "C" unsigned long _UNK_0065d16c;
extern "C" unsigned long _UNK_0065d428;
extern "C" unsigned long _UNK_0065d42c;
extern "C" unsigned long _UNK_0065d430;
extern "C" unsigned long _UNK_0065d464;
extern "C" unsigned long g_0065c5d4;
extern "C" unsigned long g_0065c5d8;
extern "C" unsigned long g_0065c5ec;
extern "C" unsigned long g_0065c5f0;
extern "C" unsigned long g_0065c604;
extern "C" unsigned long g_0065c608;
extern "C" unsigned long g_0065c638;
extern "C" unsigned long g_0065c63c;
extern "C" unsigned long g_0065c690;
extern "C" unsigned long g_0065c6c4;
extern "C" unsigned long g_0065c6f4;
extern "C" unsigned long g_0065c6f8;
extern "C" unsigned long g_0065c708;
extern "C" unsigned long g_0065c70c;
extern "C" unsigned long g_0065c730;
extern "C" unsigned long g_0065c734;
extern "C" unsigned long g_0065c748;
extern "C" unsigned long g_0065c758;
extern "C" unsigned long g_0065c75c;
extern "C" unsigned long g_0065c7a0;
extern "C" unsigned long g_0065c7a4;
extern "C" unsigned long g_0065c7b4;
extern "C" unsigned long g_0065c7b8;
extern "C" unsigned long g_0065c7dc;
extern "C" unsigned long g_0065c7e0;
extern "C" unsigned long g_0065c7f4;
extern "C" unsigned long g_0065c89c;
extern "C" unsigned long g_0065c90c;
extern "C" unsigned long g_0065c974;
extern "C" unsigned long g_0065ca20;
extern "C" unsigned long g_0065ca24;
extern "C" unsigned long g_0065ca28;
extern "C" unsigned long g_0065ca2c;
extern "C" unsigned long g_0065ca30;
extern "C" unsigned long g_0065ca34;
extern "C" unsigned long g_0065ca38;
extern "C" unsigned long g_0065ca3c;
extern "C" unsigned long g_0065ca40;
extern "C" unsigned long g_0065ca44;
extern "C" unsigned long g_0065ca48;
extern "C" unsigned long g_0065ca6e;
extern "C" unsigned long g_0065ca9c;
extern "C" unsigned long g_0065cad0;
extern "C" unsigned long g_0065cad4;
extern "C" unsigned long g_0065cb80;
extern "C" unsigned long g_0065cc3c;
extern "C" unsigned long g_0065ccf0;
extern "C" unsigned long g_0065ccf2;
extern "C" unsigned long g_0065cd16;
extern "C" unsigned long g_0065cda0;
extern "C" unsigned long g_0065cda4;
extern "C" unsigned long g_0065cda8;
extern "C" unsigned long g_0065cdea;
extern "C" unsigned long g_0065ce4a;
extern "C" unsigned long g_0065ce6c;
extern "C" unsigned long g_0065ce9a;
extern "C" unsigned long g_0065ceec;
extern "C" unsigned long g_0065cf0c;
extern "C" unsigned long g_0065cf10;
extern "C" unsigned long g_0065cf14;
extern "C" unsigned long g_0065cf18;
extern "C" unsigned long g_0065cf1c;
extern "C" unsigned long g_0065cf20;
extern "C" unsigned long g_0065cf24;
extern "C" unsigned long g_0065d14c;
extern "C" unsigned long g_0065d150;
extern "C" unsigned long g_0065d154;
extern "C" unsigned long g_0065d158;
extern "C" unsigned long g_0065d15c;
extern "C" unsigned long g_0065d160;
extern "C" unsigned long g_0065d164;
extern "C" unsigned long g_0065d168;
extern "C" unsigned long g_0065d16c;
extern "C" unsigned long g_0065d196;
extern "C" unsigned long g_0065d2ea;
extern "C" unsigned long g_0065d320;
extern "C" unsigned long g_0065d428;
extern "C" unsigned long g_0065d42c;
extern "C" unsigned long g_0065d430;
extern "C" unsigned long g_0065d456;
extern "C" unsigned long g_0065d464;
bool BLSweepResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSweepResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepResultPresenter::tick(float p1)
{
  return;
}

undefined4 BLSweepResultPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLSweepResultPresenter::~BLSweepResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065c690 + g_0065c6f4);
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
  func_0079e45c(&uStack_14,&g_0065c6c4 + g_0065c6f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLSweepResultPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLSweepResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x18);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x17);
  return;
}

void BLSweepResultPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  uVar1 = func_0079e734();
  func_0079e63c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_0065c7a0,g_0065c7a4,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLSweepResultPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x24) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_0065c7dc + g_0065c7e0, p2);
  }
  return;
}


BLSweepResultPresenter::BLSweepResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0065ca6e + (intptr_t)(g_0065cad0))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0065ca9c + (intptr_t)(g_0065cad4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSweepResultPresenter::create(BLSweepResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSweepResultPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLSweepResultPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepResultPresenter::sortPackData(cocos2d::CCArray* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->removeAllObjects();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->addObjectsFromArray((cocos2d::CCArray*)p1);
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x24)))->reloadData(0, 1);
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x4c))
            (*(int **)(((int)this) + 0x24),(unsigned char *)((char *)&g_0065cb80 + (intptr_t)(g_0065cc3c)));
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x24) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x114) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(uStack_1c);
  uVar3 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uVar4));
  if (iVar1 == 0) {
    uVar4 = (undefined4)(0);
    piVar7 = *(int **)(((int)this) + 0x24);
    pcVar6 = *(code **)(*piVar7 + 100);
  }
  else {
    (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x114) + 0x1f8))(auStack_20);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
    piVar7 = *(int **)(((int)this) + 0x24);
    pcVar6 = *(code **)(*piVar7 + 100);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e2ec(uVar2));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
  }
  (*pcVar6)(piVar7,uVar4);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  pcVar6 = *(code **)(*piVar7 + 0x88);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x8c))();
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*(int *)(piVar7) + (0x1f8)))(auStack_28,piVar7);
  uVar4 = (undefined4)(func_0079e57c(uStack_24,uVar4));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(piVar7))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLSweepResultPresenter::inititems(cocos2d::CCArray* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)piVar1)->autorelease();
    *(int **)(((int)this) + 0x24) = piVar1;
    pcVar4 = *(code **)(*piVar1 + 0x1fc);
    (*pcVar4)(piVar1,((int)this) + 0x18,*piVar1,pcVar4,p4);
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x204))(*(int **)(((int)this) + 0x24),((int)this) + 0x1c);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x24));
    uVar3 = (undefined4)(cocos2d::CCNode::create());
    ((BLGridView *)uVar5)->setItemPartner((cocos2d::CCNode*)uVar3);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
    (**(code **)(*piVar1 + 200))(piVar1,*(undefined4 *)(((int)this) + 0x24));
    BLSweepResultPresenter::sortPackData((cocos2d::CCArray*)p1);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(((int)this) + 0x24) = 0;
                    /* WARNING: Does not return;
  (*pcVar4)();
}

void BLSweepResultPresenter::addItems(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepResultPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepResultPresenter::updateview()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSweepResultPresenter::initWithView(BLSweepResultView* p1)
{
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0065d456 + (intptr_t)(g_0065d464))),0,
             0x20);
  BLSweepResultPresenter::updateview();
  return 1;
}

#include "BLSuitComposeListPresenter.h"
#include "SuitEquipListItemData.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "BLSuitComposeListView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeListItemPresenter.h"
#include "BLTableView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipData.h"
#include "SuitEquipEquipData.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" unsigned long UNK_0068c390;
extern "C" unsigned long UNK_0068c420;
extern "C" unsigned long UNK_0068c422;
extern "C" unsigned long UNK_0068c4b6;
extern "C" unsigned long UNK_0068c508;
extern "C" unsigned long UNK_0068c5b8;
extern "C" unsigned long UNK_0068c5ee;
extern "C" unsigned long UNK_0068c690;
extern "C" unsigned long UNK_0068c6b8;
extern "C" unsigned long UNK_0068c86a;
extern "C" unsigned long UNK_0068c86e;
extern "C" unsigned long UNK_0068cb6c;
extern "C" unsigned long UNK_0068cc5c;
extern "C" unsigned long UNK_0068cdbe;
extern "C" unsigned long UNK_0068cdc0;
extern "C" unsigned long UNK_0068cdfa;
extern "C" unsigned long UNK_0068ce12;
extern "C" unsigned long _UNK_0068c394;
extern "C" unsigned long _UNK_0068c3f0;
extern "C" unsigned long _UNK_0068c3f4;
extern "C" unsigned long _UNK_0068c42c;
extern "C" unsigned long _UNK_0068c430;
extern "C" unsigned long _UNK_0068c584;
extern "C" unsigned long _UNK_0068c588;
extern "C" unsigned long _UNK_0068c67c;
extern "C" unsigned long _UNK_0068c680;
extern "C" unsigned long _UNK_0068c694;
extern "C" unsigned long _UNK_0068c6bc;
extern "C" unsigned long _UNK_0068c834;
extern "C" unsigned long _UNK_0068c918;
extern "C" unsigned long _UNK_0068c91c;
extern "C" unsigned long _UNK_0068cbd0;
extern "C" unsigned long _UNK_0068cbd4;
extern "C" unsigned long _UNK_0068ccec;
extern "C" unsigned long _UNK_0068ce24;
extern "C" unsigned long _UNK_0068ce28;
extern "C" unsigned long _UNK_0068ce2c;
extern "C" unsigned long _UNK_0068ce30;
extern "C" unsigned long g_0068c390;
extern "C" unsigned long g_0068c394;
extern "C" unsigned long g_0068c3f0;
extern "C" unsigned long g_0068c3f4;
extern "C" unsigned long g_0068c420;
extern "C" unsigned long g_0068c422;
extern "C" unsigned long g_0068c42c;
extern "C" unsigned long g_0068c430;
extern "C" unsigned long g_0068c4b6;
extern "C" unsigned long g_0068c508;
extern "C" unsigned long g_0068c584;
extern "C" unsigned long g_0068c588;
extern "C" unsigned long g_0068c5b8;
extern "C" unsigned long g_0068c5ee;
extern "C" unsigned long g_0068c67c;
extern "C" unsigned long g_0068c680;
extern "C" unsigned long g_0068c690;
extern "C" unsigned long g_0068c694;
extern "C" unsigned long g_0068c6b8;
extern "C" unsigned long g_0068c6bc;
extern "C" unsigned long g_0068c834;
extern "C" unsigned long g_0068c86a;
extern "C" unsigned long g_0068c86e;
extern "C" unsigned long g_0068c918;
extern "C" unsigned long g_0068c91c;
extern "C" unsigned long g_0068cb6c;
extern "C" unsigned long g_0068cbd0;
extern "C" unsigned long g_0068cbd4;
extern "C" unsigned long g_0068cc5c;
extern "C" unsigned long g_0068ccec;
extern "C" unsigned long g_0068cdbe;
extern "C" unsigned long g_0068cdc0;
extern "C" unsigned long g_0068cdfa;
extern "C" unsigned long g_0068ce12;
extern "C" unsigned long g_0068ce24;
extern "C" unsigned long g_0068ce28;
extern "C" unsigned long g_0068ce2c;
extern "C" unsigned long g_0068ce30;
bool BLSuitComposeListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLSuitComposeListPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x34) - *(int *)(((int)this) + 0x30) >> 4;
}

undefined4 BLSuitComposeListPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLSuitComposeListPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

BLSuitComposeListPresenter::BLSuitComposeListPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitComposeListPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLSuitComposeListPresenter::~BLSuitComposeListPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}








void BLSuitComposeListPresenter::updateLists()
{
  BLSuitComposeListPresenter::initNumData();
  BLSuitComposeListPresenter::initAllItemData();
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLSuitComposeListPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeListPresenter::initNumData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitComposeListPresenter::getDefaultId()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSuitComposeListPresenter::initSuitData()
{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  (**(code **)(*(int *)(piVar1) + (0xa8)))();
  piVar1 = (int *)((SuitEquipData *)this)->getAllIds();
  uVar5 = (undefined4)(piVar1[1] - *piVar1 >> 2);
  puVar2 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    if (g_0068cbd0 < uVar5) {
      func_0079e5bc();
    }
    puVar2 = (undefined4 *)func_0079e2fc();
  }
  iVar6 = (undefined4)(intptr_t)(piVar1[1] - *piVar1);
  if (iVar6 >> 2 != 0) {
    func_0079e68c(puVar2,*piVar1,iVar6);
  }
  for (puVar7 = puVar2; puVar7 != (undefined4 *)((int)puVar2 + iVar6); puVar7 = puVar7 + 1) {
    iStack_28 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0068cb6c + (intptr_t)(g_0068cbd4))) + 0xc);
    piVar1 = (int *)((DataCacheManager *)this)->shareManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xa8)))());
    iVar4 = (undefined4)(intptr_t)(((SuitEquipData *)(uVar3))->getItemBySuitId(*puVar7));
    func_0079e52c(&iStack_28,iVar4 + 4);
    uStack_24 = 0;
    uStack_23 = 1;
    uStack_20 = (undefined4)(*puVar7);
    uStack_1c = (undefined4)(0);
    ((std::vector<SuitEquipListItemData, std::allocator<SuitEquipListItemData>> *)(((int)this) + 0x24))->push_back(*(SuitEquipListItemData const*)&iStack_28);
    func_0079e2bc(&iStack_28);
  }
  if (puVar2 != (undefined4 *)0x0) {
    func_0079e2cc(puVar2);
  }
  return;
}

void BLSuitComposeListPresenter::initAllItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeListPresenter::initWithView(BLSuitComposeListView* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  BLSuitComposeListPresenter::initSuitData();
  BLSuitComposeListPresenter::initNumData();
  BLSuitComposeListPresenter::initAllItemData();
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  iVar2 = (undefined4)(intptr_t)(**(int **)(p1 + 0x10c));
  pcVar3 = *(code **)(iVar2 + 0x214);
  (*pcVar3)(*(int **)(p1 + 0x10c),((int)this) + 0x18,iVar2,pcVar3,p4);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x14);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  return;
}

void BLSuitComposeListPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

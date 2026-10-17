#include "BLTableView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCGeometry.h"
#include "BLTableViewDelegate.h"
#include "BLGridView.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00522cb0;
extern "C" unsigned long UNK_00522cc8;
extern "C" unsigned long UNK_00522ce0;
extern "C" unsigned long UNK_00522cf8;
extern "C" unsigned long UNK_00522d10;
extern "C" unsigned long UNK_00522d3c;
extern "C" unsigned long UNK_00522d60;
extern "C" unsigned long UNK_00522d88;
extern "C" unsigned long UNK_00522e00;
extern "C" unsigned long UNK_00522e12;
extern "C" unsigned long UNK_00522e52;
extern "C" unsigned long UNK_00522e98;
extern "C" unsigned long UNK_00522ec0;
extern "C" unsigned long UNK_00522ef0;
extern "C" unsigned long UNK_00522fa6;
extern "C" unsigned long UNK_00523004;
extern "C" unsigned long UNK_005230c4;
extern "C" unsigned long _UNK_00522cb4;
extern "C" unsigned long _UNK_00522ccc;
extern "C" unsigned long _UNK_00522ce4;
extern "C" unsigned long _UNK_00522cfc;
extern "C" unsigned long _UNK_00522d14;
extern "C" unsigned long _UNK_00522d40;
extern "C" unsigned long _UNK_00522d64;
extern "C" unsigned long _UNK_00522d8c;
extern "C" unsigned long _UNK_00522e04;
extern "C" unsigned long _UNK_00522e84;
extern "C" unsigned long _UNK_00522e88;
extern "C" unsigned long _UNK_00522e9c;
extern "C" unsigned long _UNK_00522ec4;
extern "C" unsigned long _UNK_00522ef4;
extern "C" unsigned long _UNK_00523030;
extern "C" unsigned long _UNK_00523034;
extern "C" unsigned long _UNK_005231e8;
extern "C" unsigned long g_00522cb0;
extern "C" unsigned long g_00522cb4;
extern "C" unsigned long g_00522cc8;
extern "C" unsigned long g_00522ccc;
extern "C" unsigned long g_00522ce0;
extern "C" unsigned long g_00522ce4;
extern "C" unsigned long g_00522cf8;
extern "C" unsigned long g_00522cfc;
extern "C" unsigned long g_00522d10;
extern "C" unsigned long g_00522d14;
extern "C" unsigned long g_00522d3c;
extern "C" unsigned long g_00522d40;
extern "C" unsigned long g_00522d60;
extern "C" unsigned long g_00522d64;
extern "C" unsigned long g_00522d88;
extern "C" unsigned long g_00522d8c;
extern "C" unsigned long g_00522e00;
extern "C" unsigned long g_00522e04;
extern "C" unsigned long g_00522e12;
extern "C" unsigned long g_00522e52;
extern "C" unsigned long g_00522e84;
extern "C" unsigned long g_00522e88;
extern "C" unsigned long g_00522e98;
extern "C" unsigned long g_00522e9c;
extern "C" unsigned long g_00522ec0;
extern "C" unsigned long g_00522ec4;
extern "C" unsigned long g_00522ef0;
extern "C" unsigned long g_00522ef4;
extern "C" unsigned long g_00522fa6;
extern "C" unsigned long g_00523004;
extern "C" unsigned long g_00523030;
extern "C" unsigned long g_00523034;
extern "C" unsigned long g_005230c4;
extern "C" unsigned long g_005231e8;
int * BLTableView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

BLTableViewDataSource* BLTableView::getDataSource() const
{
  return (BLTableViewDataSource*)(*(undefined4 *)(((int)this) + 0x110));
}

void BLTableView::setDataSource(BLTableViewDataSource* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  return;
}

BLTableViewDelegate* BLTableView::getDelegate() const
{
  return (BLTableViewDelegate*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLTableView::setDelegate(BLTableViewDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

bool BLTableView::getISNewPos() const
{
  return *(undefined1 *)(((int)this) + 0x118);
}

void BLTableView::setISNewPos(bool p1)
{
  *(undefined1 *)(((int)this) + 0x118) = p1;
  return;
}

bool BLTableView::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTableView::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTableView::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTableView::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLTableView::sizeOfGridItem(BLGridView* p1)
{
  (**(code **)(**(int **)(p1 + 0x110) + 4))(((int)this),*(int **)(p1 + 0x110),p1);
  return ((int)this);
}

void BLTableView::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  (**(code **)(**(int **)(((int)this) + 0x110) + 8))(*(int **)(((int)this) + 0x110),((int)this));
  return;
}

void BLTableView::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(((int)this) + 0x114);
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this));
  }
  return;
}

int BLTableView::getType()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

cocos2d::CCSize BLTableView::getViewSize()
{ return cocos2d::CCSize(); }


void BLTableView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

void BLTableView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

BLTableView::~BLTableView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(&g_00522e12 + g_00522e84);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x278;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x284;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x43)) = iVar2 + 0x2ac;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00522e52 + g_00522e88,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLTableView::BLTableView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00522fa6 + g_00523030);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x278;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x284;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x43)) = iVar2 + 0x2ac;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(undefined1 *)(((int)this) + 0x46) = 1;
  *(int *)((int)this + 4*(0x4c)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00523004 + g_00523034,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLTableView::isScrollMin()
{
  int iVar1;
  undefined4 auStack_30 [2];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  if (*(int *)(((int)this) + 0x11c) == 0) {
    *(CCPoint *)auStack_30 = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->getContentOffset();
    *(CCPoint *)auStack_28 = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->maxContainerOffset();
  }
  else {
    { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->getContentOffset(); __builtin_memcpy(&auStack_20, &_ws.x, 4); uStack_1c = hw_fbits(_ws.y); }
    { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->maxContainerOffset(); __builtin_memcpy(&auStack_18, &_ws.x, 4); uStack_14 = hw_fbits(_ws.y); }
    auStack_30[0] = uStack_1c;
    auStack_28[0] = uStack_14;
  }
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x == _y)?1:0);}((int)(auStack_30[0]),(int)(auStack_28[0]))));
  return iVar1 != 0;
}

bool BLTableView::isScrollMax()
{
  int iVar1;
  undefined4 auStack_30 [2];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  if (*(int *)(((int)this) + 0x11c) == 0) {
    *(CCPoint *)auStack_30 = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->getContentOffset();
    *(CCPoint *)auStack_28 = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->minContainerOffset();
  }
  else {
    { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->getContentOffset(); __builtin_memcpy(&auStack_20, &_ws.x, 4); uStack_1c = hw_fbits(_ws.y); }
    { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 300))->minContainerOffset(); __builtin_memcpy(&auStack_18, &_ws.x, 4); uStack_14 = hw_fbits(_ws.y); }
    auStack_30[0] = uStack_1c;
    auStack_28[0] = uStack_14;
  }
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x == _y)?1:0);}((int)(auStack_30[0]),(int)(auStack_28[0]))));
  return iVar1 != 0;
}


int BLTableView::getCurrentIndex()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLTableView::initComplete(BLGridView* p1)
{
                    /* WARNING: Could not recover jumptable at 0x00522d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_00522d88 + g_00522d8c))(((int)this) + -0x10c);
  return;
}

void BLTableView::numOfColumn(BLGridView* p1)
{
                    /* WARNING: Could not recover jumptable at 0x00522ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_00522ec0 + g_00522ec4))(((int)this) + -0x108);
  return;
}

void BLTableView::numOfRow(BLGridView* p1)
{
                    /* WARNING: Could not recover jumptable at 0x00522ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_00522ef0 + g_00522ef4))(((int)this) + -0x108);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLTableView::setViewSize(cocos2d::CCSize p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTableView::setType(EnumTableViewType p1)
{
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  
  *(int *)(((int)this) + 0x11c) = p1;
  iVar1 = (undefined4)(intptr_t)(**(int **)(((int)this) + 300));
  pcVar2 = *(code **)(iVar1 + 0x1fc);
  (*pcVar2)(*(int **)(((int)this) + 300),p1 != 0,iVar1,pcVar2,p4);
  return;
}

bool BLTableView::init()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create());
    *(int *)((int)this + 4*(0x4b)) = iVar2;
    (**(code **)(*(int *)this + 200))(((int)this),iVar2);
    piVar3 = (int *)((BLGridView *)this)->create();
    *(int *)((int)this + 4*(0x4a)) = (int)piVar3;
    pcVar5 = *(code **)(*piVar3 + 0x1fc);
    (*pcVar5)(piVar3,((int)this) + 0x42,*piVar3,pcVar5,p4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x204))((int *)*(int *)((int)this + 4*(0x4a)),((int)this) + 0x43);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 200))((int *)*(int *)((int)this + 4*(0x4b)),*(int *)((int)this + 4*(0x4a)));
    iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x4a)));
    uVar4 = (undefined4)(cocos2d::CCNode::create());
    ((BLGridView *)iVar2)->setItemPartner((cocos2d::CCNode*)uVar4);
  }
  return iVar1 != 0;
}

void BLTableView::reloadData(bool p1, bool p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (p1 == 0) {
    (**(code **)(**(int **)(((int)this) + 300) + 0x1f8))(auStack_68);
    iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 300) + 0x200))());
    uVar2 = (undefined4)(func_0079e57c(uStack_64,*(undefined4 *)(iVar1 + 4)));
    { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)(*(undefined4 *)(((int)this) + 300)))->getContentOffset(); __builtin_memcpy(&auStack_60, &_ws.x, 4); uStack_5c = hw_fbits(_ws.y); }
    iVar1 = (undefined4)(intptr_t)(func_0079e5ec(uVar2,uStack_5c));
    if (iVar1 == 0) goto code_r0x0052308e;
  }
  *(undefined1 *)(((int)this) + 0x118) = 1;
code_r0x0052308e:
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x128)))->reloadData(p1, p2);
  piVar6 = *(int **)(((int)this) + 300);
  pcVar7 = *(code **)(*piVar6 + 0x88);
  uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x128) + 0x8c))());
  (*pcVar7)(piVar6,uVar2);
  if (*(int *)(((int)this) + 0x11c) == 0) {
    piVar6 = *(int **)(((int)this) + 300);
    0 /* ctorZero */;
    puVar5 = auStack_58;
  }
  else {
    iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x128) + 0x8c))());
    uVar3 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
    (**(code **)(**(int **)(((int)this) + 300) + 0x1f8))(auStack_50);
    uVar2 = (undefined4)(func_0079e2ec(uVar3));
    iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar2,uStack_4c));
    if (iVar1 == 0) {
      piVar6 = *(int **)(((int)this) + 0x128);
      uVar2 = (undefined4)(0);
      pcVar7 = *(code **)(*piVar6 + 100);
    }
    else {
      (**(code **)(**(int **)(((int)this) + 300) + 0x1f8))(auStack_48);
      uVar3 = (undefined4)(func_0079e5fc(uStack_44));
      piVar6 = *(int **)(((int)this) + 0x128);
      pcVar7 = *(code **)(*piVar6 + 100);
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
      uVar2 = (undefined4)(func_0079e2ec(uVar3));
      uVar2 = (undefined4)(func_0079e57c(uVar2,*(undefined4 *)(iVar1 + 4)));
    }
    (*pcVar7)(piVar6,uVar2);
    piVar6 = *(int **)(((int)this) + 300);
    pcVar7 = *(code **)(*piVar6 + 0x88);
    puVar4 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x128) + 0x8c))();
    uVar2 = (undefined4)(func_0079e2ec(uVar3));
    0 /* ctorZero */;
    (*pcVar7)(piVar6,auStack_40);
    if (*(char *)(((int)this) + 0x118) == '\0') {
      { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)(*(undefined4 *)(((int)this) + 300)))->getContentOffset(); __builtin_memcpy(&auStack_38, &_ws.x, 4); uStack_34 = hw_fbits(_ws.y); }
      (**(code **)(**(int **)(((int)this) + 300) + 0x1f8))(auStack_30);
      uVar3 = (undefined4)(func_0079e57c(uStack_2c,uVar2));
      iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uStack_34,uVar3));
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined1 *)(((int)this) + 0x118) = 0;
    piVar6 = *(int **)(((int)this) + 300);
    (**(code **)(*(int *)(piVar6) + (0x1f8)))(auStack_28,piVar6);
    uVar2 = (undefined4)(func_0079e57c(uStack_24,uVar2));
    0 /* ctorZero */;
    puVar5 = auStack_20;
  }
  ((cocos2d::extension::CCScrollView *)(piVar6))->setContentOffset(*(cocos2d::CCPoint *)(void *)&puVar5, 0);
  return;
}

void BLTableView::setCurrentIndex(int p1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  (**(code **)(*(int *)this + 0x200))(&uStack_60,((int)this),*(int *)((int)this + 4*(0x4a)));
  if (*(int *)((int)this + 4*(0x47)) == 0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x200))();
    uVar6 = (undefined4)(*puVar1);
    (**(code **)(*(int *)this + 0x230))(auStack_58,((int)this));
    func_0079e57c(uVar6,auStack_58[0]);
    iVar2 = (undefined4)(intptr_t)(func_0079e5fc());
    uVar6 = (undefined4)(func_0079e2ec(p1));
    uVar6 = (undefined4)(func_0079e4fc(uVar6,uStack_60));
    uVar3 = (undefined4)(func_0079e2ec(iVar2));
    iVar4 = (undefined4)(intptr_t)(func_0079e50c(uVar3,uVar6));
    if (iVar4 != 0) {
      iVar2 = (undefined4)(intptr_t)(func_0079e5fc(uVar6));
    }
    piVar7 = (int *)*(int *)((int)this + 4*(0x4b));
    uVar6 = (undefined4)(func_0079e2ec(-iVar2));
    0 /* ctorZero */;
    puVar5 = auStack_50;
  }
  else {
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar2 + 4)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x1f8))(auStack_48);
    uVar3 = (undefined4)(func_0079e2ec(uVar6));
    iVar2 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uStack_44));
    if (iVar2 != 0) {
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x1f8))(auStack_40);
      uVar6 = (undefined4)(func_0079e5fc(uStack_3c));
    }
    if ((char)*(int *)((int)this + 4*(0x46)) == '\0') {
      { cocos2d::CCPoint _ws = ((cocos2d::extension::CCScrollView *)(*(int *)((int)this + 4*(0x4b))))->getContentOffset(); __builtin_memcpy(&auStack_38, &_ws.x, 4); uStack_34 = hw_fbits(_ws.y); }
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x1f8))(auStack_30);
      uVar3 = (undefined4)(func_0079e2ec(uVar6));
      uVar3 = (undefined4)(func_0079e57c(uStack_2c,uVar3));
      iVar2 = (undefined4)(intptr_t)(func_0079e7b4(uStack_34,uVar3));
      if (iVar2 == 0) goto code_r0x005233d0;
    }
    *(undefined1 *)(((int)this) + 0x46) = 0;
    piVar7 = (int *)*(int *)((int)this + 4*(0x4b));
    (**(code **)(*(int *)(piVar7) + (0x1f8)))(auStack_28,piVar7);
    uVar6 = (undefined4)(func_0079e2ec(uVar6));
    uVar6 = (undefined4)(func_0079e57c(uStack_24,uVar6));
    uVar3 = (undefined4)(func_0079e2ec(p1));
    uVar3 = (undefined4)(func_0079e4fc(uVar3,uStack_5c));
    uVar6 = (undefined4)(func_0079e59c(uVar6,uVar3));
    0 /* ctorZero */;
    puVar5 = auStack_20;
  }
  ((cocos2d::extension::CCScrollView *)(piVar7))->setContentOffset(*(cocos2d::CCPoint *)(void *)&puVar5, 0);
code_r0x005233d0:
  *(int *)((int)this + 4*(0x4c)) = p1;
  return;
}

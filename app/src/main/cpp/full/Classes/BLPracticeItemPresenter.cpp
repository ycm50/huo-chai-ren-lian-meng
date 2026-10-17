#include "BLPracticeItemPresenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "BLPracticeItemView.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "PlayerData.h"
#include "PracDataItem.h"
#include "PracticeData.h"
#include "PracticeTime.h"
#include "RoleData.h"
#include "RoleInfoData.h"
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
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e924(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006399e0;
extern "C" unsigned long UNK_006399f8;
extern "C" unsigned long UNK_00639a10;
extern "C" unsigned long UNK_00639a80;
extern "C" unsigned long UNK_00639a9a;
extern "C" unsigned long UNK_00639ae0;
extern "C" unsigned long UNK_00639b08;
extern "C" unsigned long UNK_00639b1e;
extern "C" unsigned long UNK_00639b3a;
extern "C" unsigned long UNK_00639ba6;
extern "C" unsigned long UNK_00639bce;
extern "C" unsigned long UNK_00639bee;
extern "C" unsigned long UNK_00639c0c;
extern "C" unsigned long UNK_00639e72;
extern "C" unsigned long UNK_00639f2c;
extern "C" unsigned long UNK_00639fce;
extern "C" unsigned long UNK_0063a1ba;
extern "C" unsigned long UNK_0063a1de;
extern "C" unsigned long UNK_0063a22a;
extern "C" unsigned long UNK_0063a280;
extern "C" unsigned long UNK_0063a2d6;
extern "C" unsigned long UNK_0063a3ca;
extern "C" unsigned long UNK_0063a452;
extern "C" unsigned long UNK_0063a69e;
extern "C" unsigned long UNK_0063a720;
extern "C" unsigned long UNK_0063a7cc;
extern "C" unsigned long UNK_0063a814;
extern "C" unsigned long _UNK_006399e4;
extern "C" unsigned long _UNK_006399fc;
extern "C" unsigned long _UNK_00639a14;
extern "C" unsigned long _UNK_00639acc;
extern "C" unsigned long _UNK_00639ad0;
extern "C" unsigned long _UNK_00639ae4;
extern "C" unsigned long _UNK_00639b0c;
extern "C" unsigned long _UNK_00639b64;
extern "C" unsigned long _UNK_00639b68;
extern "C" unsigned long _UNK_00639bb0;
extern "C" unsigned long _UNK_00639c1c;
extern "C" unsigned long _UNK_00639c20;
extern "C" unsigned long _UNK_00639c24;
extern "C" unsigned long _UNK_00639ea4;
extern "C" unsigned long _UNK_0063a174;
extern "C" unsigned long _UNK_0063a178;
extern "C" unsigned long _UNK_0063a460;
extern "C" unsigned long _UNK_0063a464;
extern "C" unsigned long _UNK_0063a468;
extern "C" unsigned long _UNK_0063a46c;
extern "C" unsigned long _UNK_0063a470;
extern "C" unsigned long _UNK_0063a474;
extern "C" unsigned long _UNK_0063a478;
extern "C" unsigned long _UNK_0063a750;
extern "C" unsigned long _UNK_0063a754;
extern "C" unsigned long _UNK_0063a758;
extern "C" unsigned long _UNK_0063a75c;
extern "C" unsigned long _UNK_0063a844;
extern "C" unsigned long _UNK_0063a848;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006399e0;
extern "C" unsigned long g_006399e4;
extern "C" unsigned long g_006399f8;
extern "C" unsigned long g_006399fc;
extern "C" unsigned long g_00639a10;
extern "C" unsigned long g_00639a14;
extern "C" unsigned long g_00639a80;
extern "C" unsigned long g_00639a9a;
extern "C" unsigned long g_00639acc;
extern "C" unsigned long g_00639ad0;
extern "C" unsigned long g_00639ae0;
extern "C" unsigned long g_00639ae4;
extern "C" unsigned long g_00639b08;
extern "C" unsigned long g_00639b0c;
extern "C" unsigned long g_00639b1e;
extern "C" unsigned long g_00639b3a;
extern "C" unsigned long g_00639b64;
extern "C" unsigned long g_00639b68;
extern "C" unsigned long g_00639ba6;
extern "C" unsigned long g_00639bb0;
extern "C" unsigned long g_00639bce;
extern "C" unsigned long g_00639bee;
extern "C" unsigned long g_00639c0c;
extern "C" unsigned long g_00639c1c;
extern "C" unsigned long g_00639c20;
extern "C" unsigned long g_00639c24;
extern "C" unsigned long g_00639e72;
extern "C" unsigned long g_00639ea4;
extern "C" unsigned long g_00639f2c;
extern "C" unsigned long g_00639fce;
extern "C" unsigned long g_0063a174;
extern "C" unsigned long g_0063a178;
extern "C" unsigned long g_0063a1ba;
extern "C" unsigned long g_0063a1de;
extern "C" unsigned long g_0063a22a;
extern "C" unsigned long g_0063a280;
extern "C" unsigned long g_0063a2d6;
extern "C" unsigned long g_0063a3ca;
extern "C" unsigned long g_0063a452;
extern "C" unsigned long g_0063a460;
extern "C" unsigned long g_0063a464;
extern "C" unsigned long g_0063a468;
extern "C" unsigned long g_0063a46c;
extern "C" unsigned long g_0063a470;
extern "C" unsigned long g_0063a474;
extern "C" unsigned long g_0063a478;
extern "C" unsigned long g_0063a69e;
extern "C" unsigned long g_0063a720;
extern "C" unsigned long g_0063a750;
extern "C" unsigned long g_0063a754;
extern "C" unsigned long g_0063a758;
extern "C" unsigned long g_0063a75c;
extern "C" unsigned long g_0063a7cc;
extern "C" unsigned long g_0063a814;
extern "C" unsigned long g_0063a844;
extern "C" unsigned long g_0063a848;
bool BLPracticeItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLPracticeItemPresenter::~BLPracticeItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00639a80 + g_00639acc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00639a9a + g_00639ad0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeItemPresenter::BLPracticeItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00639b1e + g_00639b64);
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(9)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00639b3a + g_00639b68,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPracticeItemPresenter::create(BLPracticeItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPracticeItemPresenter::onEnter()
{
  return;
}



void BLPracticeItemPresenter::setviewaddinfo()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLPracticeItemPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPracticeItemPresenter::initWithView(BLPracticeItemView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x128) + 0x254))
            (*(int **)(p1 + 0x128),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00639bce + (intptr_t)(g_00639c1c))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x13c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00639bee + (intptr_t)(g_00639c20))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00639c0c + (intptr_t)(g_00639c24))),0,0x20);
  return 1;
}

void BLPracticeItemPresenter::onAddHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xc0)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((sir::singleton<PracticeData, 0> *)this)->instance());
    ((PracticeData *)(uVar1))->Setotheritem(0, *(undefined4 *)(((int)this) + 0x1c));
    uVar1 = (undefined4)(((sir::singleton<PracticeData, 0> *)this)->instance());
    ((PracticeData *)(uVar1))->Setotheritem(1, 0);
    uVar1 = (undefined4)(((sir::singleton<PracticeData, 0> *)this)->instance());
    ((PracticeData *)(uVar1))->Setotheritem(2, 0);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xe7);
  }
  return;
}

void BLPracticeItemPresenter::onOpenHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xc0)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((sir::singleton<PracticeData, 0> *)this)->instance());
    ((PracticeData *)(uVar1))->Setotheritem(0, *(undefined4 *)(((int)this) + 0x24));
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xe9);
  }
  return;
}

void BLPracticeItemPresenter::setviewnullinfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeItemPresenter::onComplete(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeItemPresenter::setviewgooninfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeItemPresenter::setviewshow()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeItemPresenter::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeItemPresenter::setitemid(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

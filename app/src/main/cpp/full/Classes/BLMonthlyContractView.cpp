#include "BLMonthlyContractView.h"
#include "BLEquipGiftItemPresenter.h"
#include "BLEquipGiftItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLMonthlyContractPresenter.h"
#include "ItemData.h"
#include "MonthlyContractData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005549b2(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00552d40;
extern "C" unsigned long UNK_00552d88;
extern "C" unsigned long UNK_00552de4;
extern "C" unsigned long UNK_00552e0c;
extern "C" unsigned long UNK_00552f8c;
extern "C" unsigned long UNK_00552f9e;
extern "C" unsigned long UNK_00552fb0;
extern "C" unsigned long UNK_005530a6;
extern "C" unsigned long UNK_00553158;
extern "C" unsigned long UNK_0055316a;
extern "C" unsigned long UNK_00553572;
extern "C" unsigned long UNK_0055357e;
extern "C" unsigned long UNK_0055358e;
extern "C" unsigned long UNK_0055359a;
extern "C" unsigned long UNK_005535aa;
extern "C" unsigned long UNK_005535b6;
extern "C" unsigned long UNK_005535da;
extern "C" unsigned long UNK_005535fa;
extern "C" unsigned long UNK_00553604;
extern "C" unsigned long UNK_00553612;
extern "C" unsigned long UNK_00553634;
extern "C" unsigned long UNK_00553644;
extern "C" unsigned long UNK_00553664;
extern "C" unsigned long UNK_0055366e;
extern "C" unsigned long UNK_00553690;
extern "C" unsigned long UNK_005536a0;
extern "C" unsigned long UNK_005536c0;
extern "C" unsigned long UNK_005536ca;
extern "C" unsigned long UNK_00553a26;
extern "C" unsigned long UNK_00553bb4;
extern "C" unsigned long UNK_00553c6a;
extern "C" unsigned long UNK_00553c96;
extern "C" unsigned long UNK_00553d7a;
extern "C" unsigned long UNK_00553d7c;
extern "C" unsigned long UNK_00553da5;
extern "C" unsigned long UNK_00553e56;
extern "C" unsigned long UNK_00553e86;
extern "C" unsigned long UNK_00553eb2;
extern "C" unsigned long UNK_00553f20;
extern "C" unsigned long UNK_00553f22;
extern "C" unsigned long UNK_00553f36;
extern "C" unsigned long UNK_00553f62;
extern "C" unsigned long UNK_00553fca;
extern "C" unsigned long UNK_00553fe0;
extern "C" unsigned long UNK_00554004;
extern "C" unsigned long UNK_00554062;
extern "C" unsigned long UNK_00554064;
extern "C" unsigned long UNK_00554114;
extern "C" unsigned long UNK_005541c8;
extern "C" unsigned long UNK_0055420e;
extern "C" unsigned long UNK_0055425c;
extern "C" unsigned long UNK_0055428e;
extern "C" unsigned long UNK_005542e5;
extern "C" unsigned long UNK_005542e6;
extern "C" unsigned long UNK_005542e7;
extern "C" unsigned long UNK_005544a0;
extern "C" unsigned long UNK_005544a2;
extern "C" unsigned long UNK_0055451a;
extern "C" unsigned long UNK_0055451c;
extern "C" unsigned long UNK_00554584;
extern "C" unsigned long UNK_00554586;
extern "C" unsigned long UNK_0055460e;
extern "C" unsigned long UNK_00554610;
extern "C" unsigned long UNK_0055462e;
extern "C" unsigned long UNK_00554690;
extern "C" unsigned long UNK_005546be;
extern "C" unsigned long UNK_005547a4;
extern "C" unsigned long UNK_005547ce;
extern "C" unsigned long UNK_0062ff00;
extern "C" unsigned long _DAT_00552ed8;
extern "C" unsigned long _DAT_00552edc;
extern "C" unsigned long _UNK_00552dd0;
extern "C" unsigned long _UNK_00552dd4;
extern "C" unsigned long _UNK_00552de8;
extern "C" unsigned long _UNK_00552e10;
extern "C" unsigned long _UNK_00553040;
extern "C" unsigned long _UNK_00553044;
extern "C" unsigned long _UNK_00553048;
extern "C" unsigned long _UNK_0055304c;
extern "C" unsigned long _UNK_005531ec;
extern "C" unsigned long _UNK_005531f0;
extern "C" unsigned long _UNK_005531f4;
extern "C" unsigned long _UNK_005531f8;
extern "C" unsigned long _UNK_005531fc;
extern "C" unsigned long _UNK_00553200;
extern "C" unsigned long _UNK_00553204;
extern "C" unsigned long _UNK_00553208;
extern "C" unsigned long _UNK_00553470;
extern "C" unsigned long _UNK_00553474;
extern "C" unsigned long _UNK_00553478;
extern "C" unsigned long _UNK_0055347c;
extern "C" unsigned long _UNK_00553534;
extern "C" unsigned long _UNK_00553538;
extern "C" unsigned long _UNK_0055353c;
extern "C" unsigned long _UNK_00553540;
extern "C" unsigned long _UNK_00553544;
extern "C" unsigned long _UNK_005536cc;
extern "C" unsigned long _UNK_005536d0;
extern "C" unsigned long _UNK_005536d4;
extern "C" unsigned long _UNK_005536d8;
extern "C" unsigned long _UNK_005536dc;
extern "C" unsigned long _UNK_005536e0;
extern "C" unsigned long _UNK_005536e4;
extern "C" unsigned long _UNK_005536e8;
extern "C" unsigned long _UNK_005536ec;
extern "C" unsigned long _UNK_005536f0;
extern "C" unsigned long _UNK_005536f4;
extern "C" unsigned long _UNK_005536f8;
extern "C" unsigned long _UNK_005536fc;
extern "C" unsigned long _UNK_00553700;
extern "C" unsigned long _UNK_00553704;
extern "C" unsigned long _UNK_00553708;
extern "C" unsigned long _UNK_0055370c;
extern "C" unsigned long _UNK_00553710;
extern "C" unsigned long _UNK_005538d0;
extern "C" unsigned long _UNK_005538d4;
extern "C" unsigned long _UNK_005538d8;
extern "C" unsigned long _UNK_005538dc;
extern "C" unsigned long _UNK_005538e0;
extern "C" unsigned long _UNK_00553e08;
extern "C" unsigned long _UNK_00553e0c;
extern "C" unsigned long _UNK_00553e10;
extern "C" unsigned long _UNK_00553e14;
extern "C" unsigned long _UNK_00553e18;
extern "C" unsigned long _UNK_00553e1c;
extern "C" unsigned long _UNK_00553e20;
extern "C" unsigned long _UNK_00553e24;
extern "C" unsigned long _UNK_00553e28;
extern "C" unsigned long _UNK_00553e2c;
extern "C" unsigned long _UNK_00553e30;
extern "C" unsigned long _UNK_00553e34;
extern "C" unsigned long _UNK_00554128;
extern "C" unsigned long _UNK_0055412c;
extern "C" unsigned long _UNK_00554130;
extern "C" unsigned long _UNK_00554134;
extern "C" unsigned long _UNK_00554138;
extern "C" unsigned long _UNK_0055413c;
extern "C" unsigned long _UNK_00554140;
extern "C" unsigned long _UNK_00554144;
extern "C" unsigned long _UNK_00554148;
extern "C" unsigned long _UNK_0055414c;
extern "C" unsigned long _UNK_00554150;
extern "C" unsigned long _UNK_00554154;
extern "C" unsigned long _UNK_00554158;
extern "C" unsigned long _UNK_0055415c;
extern "C" unsigned long _UNK_00554160;
extern "C" unsigned long _UNK_00554164;
extern "C" unsigned long _UNK_00554168;
extern "C" unsigned long _UNK_0055416c;
extern "C" unsigned long _UNK_00554170;
extern "C" unsigned long _UNK_00554174;
extern "C" unsigned long _UNK_00554178;
extern "C" unsigned long _UNK_0055417c;
extern "C" unsigned long _UNK_00554180;
extern "C" unsigned long _UNK_00554184;
extern "C" unsigned long _UNK_005543dc;
extern "C" unsigned long _UNK_005543e0;
extern "C" unsigned long _UNK_005543e4;
extern "C" unsigned long _UNK_005543e8;
extern "C" unsigned long _UNK_005543ec;
extern "C" unsigned long _UNK_005543f0;
extern "C" unsigned long _UNK_005543f4;
extern "C" unsigned long _UNK_005543f8;
extern "C" unsigned long _UNK_005543fc;
extern "C" unsigned long _UNK_00554850;
extern "C" unsigned long _UNK_00554854;
extern "C" unsigned long _UNK_00554858;
extern "C" unsigned long _UNK_0055485c;
extern "C" unsigned long _UNK_00554860;
extern "C" unsigned long _UNK_00554864;
extern "C" unsigned long _UNK_00554868;
extern "C" unsigned long _UNK_0055486c;
extern "C" unsigned long _UNK_00554870;
extern "C" unsigned long _UNK_00554874;
extern "C" unsigned long _UNK_00554878;
extern "C" unsigned long _UNK_0055487c;
extern "C" unsigned long _UNK_00554880;
extern "C" unsigned long _UNK_00554884;
extern "C" unsigned long _UNK_00554888;
extern "C" unsigned long _UNK_0055488c;
extern "C" unsigned long _UNK_00554890;
extern "C" unsigned long _UNK_00554894;
extern "C" unsigned long _UNK_00554898;
extern "C" unsigned long _UNK_0055489c;
extern "C" unsigned long _UNK_005548a0;
extern "C" unsigned long _UNK_005548a4;
extern "C" unsigned long _UNK_005548a8;
extern "C" unsigned long _UNK_005548ac;
extern "C" unsigned long _UNK_005548b0;
extern "C" unsigned long _UNK_005548b4;
extern "C" unsigned long _UNK_005548b8;
extern "C" unsigned long g_00552d40;
extern "C" unsigned long g_00552d88;
extern "C" unsigned long g_00552dd0;
extern "C" unsigned long g_00552dd4;
extern "C" unsigned long g_00552de4;
extern "C" unsigned long g_00552de8;
extern "C" unsigned long g_00552e0c;
extern "C" unsigned long g_00552e10;
extern "C" unsigned long g_00552ed8;
extern "C" unsigned long g_00552edc;
extern "C" unsigned long g_00552f8c;
extern "C" unsigned long g_00552f9e;
extern "C" unsigned long g_00552fb0;
extern "C" unsigned long g_00553040;
extern "C" unsigned long g_00553044;
extern "C" unsigned long g_00553048;
extern "C" unsigned long g_0055304c;
extern "C" unsigned long g_005530a6;
extern "C" unsigned long g_00553158;
extern "C" unsigned long g_0055316a;
extern "C" unsigned long g_005531ec;
extern "C" unsigned long g_005531f0;
extern "C" unsigned long g_005531f4;
extern "C" unsigned long g_005531f8;
extern "C" unsigned long g_005531fc;
extern "C" unsigned long g_00553200;
extern "C" unsigned long g_00553204;
extern "C" unsigned long g_00553208;
extern "C" unsigned long g_00553470;
extern "C" unsigned long g_00553474;
extern "C" unsigned long g_00553478;
extern "C" unsigned long g_0055347c;
extern "C" unsigned long g_00553534;
extern "C" unsigned long g_00553538;
extern "C" unsigned long g_0055353c;
extern "C" unsigned long g_00553540;
extern "C" unsigned long g_00553544;
extern "C" unsigned long g_00553572;
extern "C" unsigned long g_0055357e;
extern "C" unsigned long g_0055358e;
extern "C" unsigned long g_0055359a;
extern "C" unsigned long g_005535aa;
extern "C" unsigned long g_005535b6;
extern "C" unsigned long g_005535da;
extern "C" unsigned long g_005535fa;
extern "C" unsigned long g_00553604;
extern "C" unsigned long g_00553612;
extern "C" unsigned long g_00553634;
extern "C" unsigned long g_00553644;
extern "C" unsigned long g_00553664;
extern "C" unsigned long g_0055366e;
extern "C" unsigned long g_00553690;
extern "C" unsigned long g_005536a0;
extern "C" unsigned long g_005536c0;
extern "C" unsigned long g_005536ca;
extern "C" unsigned long g_005536cc;
extern "C" unsigned long g_005536d0;
extern "C" unsigned long g_005536d4;
extern "C" unsigned long g_005536d8;
extern "C" unsigned long g_005536dc;
extern "C" unsigned long g_005536e0;
extern "C" unsigned long g_005536e4;
extern "C" unsigned long g_005536e8;
extern "C" unsigned long g_005536ec;
extern "C" unsigned long g_005536f0;
extern "C" unsigned long g_005536f4;
extern "C" unsigned long g_005536f8;
extern "C" unsigned long g_005536fc;
extern "C" unsigned long g_00553700;
extern "C" unsigned long g_00553704;
extern "C" unsigned long g_00553708;
extern "C" unsigned long g_0055370c;
extern "C" unsigned long g_00553710;
extern "C" unsigned long g_005538d0;
extern "C" unsigned long g_005538d4;
extern "C" unsigned long g_005538d8;
extern "C" unsigned long g_005538dc;
extern "C" unsigned long g_005538e0;
extern "C" unsigned long g_00553a26;
extern "C" unsigned long g_00553bb4;
extern "C" unsigned long g_00553c6a;
extern "C" unsigned long g_00553c96;
extern "C" unsigned long g_00553d7a;
extern "C" unsigned long g_00553d7c;
extern "C" unsigned long g_00553da5;
extern "C" unsigned long g_00553e08;
extern "C" unsigned long g_00553e0c;
extern "C" unsigned long g_00553e10;
extern "C" unsigned long g_00553e14;
extern "C" unsigned long g_00553e18;
extern "C" unsigned long g_00553e1c;
extern "C" unsigned long g_00553e20;
extern "C" unsigned long g_00553e24;
extern "C" unsigned long g_00553e28;
extern "C" unsigned long g_00553e2c;
extern "C" unsigned long g_00553e30;
extern "C" unsigned long g_00553e34;
extern "C" unsigned long g_00553e56;
extern "C" unsigned long g_00553e86;
extern "C" unsigned long g_00553eb2;
extern "C" unsigned long g_00553f20;
extern "C" unsigned long g_00553f22;
extern "C" unsigned long g_00553f36;
extern "C" unsigned long g_00553f62;
extern "C" unsigned long g_00553fca;
extern "C" unsigned long g_00553fe0;
extern "C" unsigned long g_00554004;
extern "C" unsigned long g_00554062;
extern "C" unsigned long g_00554064;
extern "C" unsigned long g_00554114;
extern "C" unsigned long g_00554128;
extern "C" unsigned long g_0055412c;
extern "C" unsigned long g_00554130;
extern "C" unsigned long g_00554134;
extern "C" unsigned long g_00554138;
extern "C" unsigned long g_0055413c;
extern "C" unsigned long g_00554140;
extern "C" unsigned long g_00554144;
extern "C" unsigned long g_00554148;
extern "C" unsigned long g_0055414c;
extern "C" unsigned long g_00554150;
extern "C" unsigned long g_00554154;
extern "C" unsigned long g_00554158;
extern "C" unsigned long g_0055415c;
extern "C" unsigned long g_00554160;
extern "C" unsigned long g_00554164;
extern "C" unsigned long g_00554168;
extern "C" unsigned long g_0055416c;
extern "C" unsigned long g_00554170;
extern "C" unsigned long g_00554174;
extern "C" unsigned long g_00554178;
extern "C" unsigned long g_0055417c;
extern "C" unsigned long g_00554180;
extern "C" unsigned long g_00554184;
extern "C" unsigned long g_005541c8;
extern "C" unsigned long g_0055420e;
extern "C" unsigned long g_0055425c;
extern "C" unsigned long g_0055428e;
extern "C" unsigned long g_005542e5;
extern "C" unsigned long g_005542e6;
extern "C" unsigned long g_005542e7;
extern "C" unsigned long g_005543dc;
extern "C" unsigned long g_005543e0;
extern "C" unsigned long g_005543e4;
extern "C" unsigned long g_005543e8;
extern "C" unsigned long g_005543ec;
extern "C" unsigned long g_005543f0;
extern "C" unsigned long g_005543f4;
extern "C" unsigned long g_005543f8;
extern "C" unsigned long g_005543fc;
extern "C" unsigned long g_005544a0;
extern "C" unsigned long g_005544a2;
extern "C" unsigned long g_0055451a;
extern "C" unsigned long g_0055451c;
extern "C" unsigned long g_00554584;
extern "C" unsigned long g_00554586;
extern "C" unsigned long g_0055460e;
extern "C" unsigned long g_00554610;
extern "C" unsigned long g_0055462e;
extern "C" unsigned long g_00554690;
extern "C" unsigned long g_005546be;
extern "C" unsigned long g_005547a4;
extern "C" unsigned long g_005547ce;
extern "C" unsigned long g_00554850;
extern "C" unsigned long g_00554854;
extern "C" unsigned long g_00554858;
extern "C" unsigned long g_0055485c;
extern "C" unsigned long g_00554860;
extern "C" unsigned long g_00554864;
extern "C" unsigned long g_00554868;
extern "C" unsigned long g_0055486c;
extern "C" unsigned long g_00554870;
extern "C" unsigned long g_00554874;
extern "C" unsigned long g_00554878;
extern "C" unsigned long g_0055487c;
extern "C" unsigned long g_00554880;
extern "C" unsigned long g_00554884;
extern "C" unsigned long g_00554888;
extern "C" unsigned long g_0055488c;
extern "C" unsigned long g_00554890;
extern "C" unsigned long g_00554894;
extern "C" unsigned long g_00554898;
extern "C" unsigned long g_0055489c;
extern "C" unsigned long g_005548a0;
extern "C" unsigned long g_005548a4;
extern "C" unsigned long g_005548a8;
extern "C" unsigned long g_005548ac;
extern "C" unsigned long g_005548b0;
extern "C" unsigned long g_005548b4;
extern "C" unsigned long g_005548b8;
extern "C" unsigned long g_0062ff00;
BLMonthlyContractView::~BLMonthlyContractView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00552d40 + g_00552dd0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00552d88 + g_00552dd4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x45)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMonthlyContractView::BLMonthlyContractView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00552ed8 + 0x552e54);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMonthlyContractView"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

int * BLMonthlyContractView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x168)));
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

undefined4 BLMonthlyContractView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x120);
}


void BLMonthlyContractView::clearRewards()
{
  while (*(int *)((int)this + 4*(0x46)) - *(int *)((int)this + 4*(0x45)) >> 2 != 0) {
    (**(code **)(*(int *)this + 0xf0))(((int)this),*(undefined4 *)(*(int *)((int)this + 4*(0x46)) + -4));
    *(int *)((int)this + 4*(0x46)) = *(int *)((int)this + 4*(0x46)) + -4;
  }
  return;
}







void BLMonthlyContractView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMonthlyContractPresenter *)*(undefined4 *)(((int)this) + 0x120))->onEnter();
  return;
}

void BLMonthlyContractView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLMonthlyContractPresenter *)*(undefined4 *)(((int)this) + 0x120))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLMonthlyContractView::refreshBg()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLMonthlyContractView::newBtn(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLMonthlyContractView::refreshDay(std::vector<ItemData, std::allocator<ItemData>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonthlyContractView::refreshMonth(std::vector<ItemData, std::allocator<ItemData>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonthlyContractView::refreshLabMain()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x108));
  if (iVar3 == 0) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x10c));
    if (iVar3 == 1) {
      pcVar4 = *(code **)(**(int **)(((int)this) + 0x134) + 0x234);
      (*pcVar4)(*(int **)(((int)this) + 0x134),(unsigned char *)((char *)&g_005535aa + (intptr_t)(g_005536dc)),p3,pcVar4,p4);
      piVar1 = *(int **)(((int)this) + 0x158);
      puVar2 = (unsigned char *)((char *)&g_005535b6 + (intptr_t)(g_005536e0));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else if (iVar3 == 2) {
      (**(code **)(**(int **)(((int)this) + 0x134) + 0x234))
                (*(int **)(((int)this) + 0x134),(unsigned char *)((char *)&g_0055358e + (intptr_t)(g_005536d4)));
      piVar1 = *(int **)(((int)this) + 0x158);
      puVar2 = (unsigned char *)((char *)&g_0055359a + (intptr_t)(g_005536d8));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else {
      if (iVar3 != 0) {
        return;
      }
      (**(code **)(**(int **)(((int)this) + 0x134) + 0x234))
                (*(int **)(((int)this) + 0x134),(unsigned char *)((char *)&g_00553572 + (intptr_t)(g_005536cc)));
      piVar1 = *(int **)(((int)this) + 0x158);
      puVar2 = (unsigned char *)((char *)&g_0055357e + (intptr_t)(g_005536d0));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
  }
  else if (iVar3 == 1) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x10c));
    if (iVar3 == 1) {
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_00553612 + (intptr_t)(g_005536f0));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else if (iVar3 == 2) {
      ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
      iVar3 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
      piVar1 = *(int **)(((int)this) + 0x134);
      if (iVar3 == 0) {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_00553604 + (intptr_t)(g_005536ec));
      }
      else {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_005535fa + (intptr_t)(g_005536e8));
      }
    }
    else {
      if (iVar3 != 0) {
        return;
      }
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_005535da + (intptr_t)(g_005536e4));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
  }
  else if (iVar3 == 2) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x10c));
    if (iVar3 == 1) {
      ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
      iVar3 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
      piVar1 = *(int **)(((int)this) + 0x134);
      if (iVar3 == 0) {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_0055366e + (intptr_t)(g_00553700));
      }
      else {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_00553664 + (intptr_t)(g_005536fc));
      }
    }
    else if (iVar3 == 2) {
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_00553644 + (intptr_t)(g_005536f8));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else {
      if (iVar3 != 0) {
        return;
      }
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_00553634 + (intptr_t)(g_005536f4));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
  }
  else {
    if (iVar3 != 3) {
      return;
    }
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x10c));
    if (iVar3 == 1) {
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_005536a0 + (intptr_t)(g_00553708));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else if (iVar3 == 2) {
      piVar1 = *(int **)(((int)this) + 0x134);
      puVar2 = (unsigned char *)((char *)&g_00553690 + (intptr_t)(g_00553704));
      pcVar4 = *(code **)(*piVar1 + 0x234);
    }
    else {
      if (iVar3 != 0) {
        return;
      }
      ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
      iVar3 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
      piVar1 = *(int **)(((int)this) + 0x134);
      if (iVar3 == 0) {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_005536ca + (intptr_t)(g_00553710));
      }
      else {
        pcVar4 = *(code **)(*piVar1 + 0x234);
        puVar2 = (unsigned char *)((char *)&g_005536c0 + (intptr_t)(g_0055370c));
      }
    }
  }
  (*pcVar4)(piVar1,puVar2);
  return;
}

void BLMonthlyContractView::refreshNow(std::vector<ItemData, std::allocator<ItemData>> * p1, std::vector<ItemData, std::allocator<ItemData>> * p2, int p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonthlyContractView::refresh(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMonthlyContractView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

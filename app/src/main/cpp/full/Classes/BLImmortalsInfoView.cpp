#include "BLImmortalsInfoView.h"
#include "BLImmortalsInfoPresenter.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005710b8;
extern "C" unsigned long UNK_005710ea;
extern "C" unsigned long UNK_00571130;
extern "C" unsigned long UNK_00571158;
extern "C" unsigned long UNK_00571170;
extern "C" unsigned long UNK_005711da;
extern "C" unsigned long UNK_0057126e;
extern "C" unsigned long UNK_005712b2;
extern "C" unsigned long UNK_00571304;
extern "C" unsigned long UNK_00571358;
extern "C" unsigned long UNK_0057135a;
extern "C" unsigned long UNK_005713b6;
extern "C" unsigned long UNK_005713e6;
extern "C" unsigned long UNK_0057145e;
extern "C" unsigned long UNK_0057146c;
extern "C" unsigned long UNK_00571480;
extern "C" unsigned long UNK_00571492;
extern "C" unsigned long UNK_005714a4;
extern "C" unsigned long UNK_00571588;
extern "C" unsigned long UNK_005715c8;
extern "C" unsigned long UNK_00571674;
extern "C" unsigned long UNK_00571686;
extern "C" unsigned long UNK_005716dc;
extern "C" unsigned long UNK_0057172e;
extern "C" unsigned long UNK_0057173c;
extern "C" unsigned long UNK_0057174e;
extern "C" unsigned long UNK_00571760;
extern "C" unsigned long UNK_00571772;
extern "C" unsigned long UNK_00571784;
extern "C" unsigned long UNK_00571796;
extern "C" unsigned long UNK_00571826;
extern "C" unsigned long UNK_00571838;
extern "C" unsigned long UNK_0057186c;
extern "C" unsigned long UNK_0057186e;
extern "C" unsigned long UNK_00571880;
extern "C" unsigned long UNK_00571896;
extern "C" unsigned long UNK_00571916;
extern "C" unsigned long UNK_00571918;
extern "C" unsigned long UNK_0057192f;
extern "C" unsigned long UNK_0057193a;
extern "C" unsigned long UNK_00571940;
extern "C" unsigned long UNK_0057198a;
extern "C" unsigned long UNK_0057198c;
extern "C" unsigned long UNK_005719a0;
extern "C" unsigned long UNK_005719b4;
extern "C" unsigned long UNK_005719e4;
extern "C" unsigned long UNK_005719f2;
extern "C" unsigned long UNK_00571a04;
extern "C" unsigned long UNK_00571a16;
extern "C" unsigned long UNK_00571a2c;
extern "C" unsigned long UNK_00571a3e;
extern "C" unsigned long UNK_00571a72;
extern "C" unsigned long UNK_00571a74;
extern "C" unsigned long UNK_00571a86;
extern "C" unsigned long UNK_00571a9c;
extern "C" unsigned long UNK_00571afa;
extern "C" unsigned long _UNK_0057111c;
extern "C" unsigned long _UNK_00571120;
extern "C" unsigned long _UNK_00571134;
extern "C" unsigned long _UNK_0057115c;
extern "C" unsigned long _UNK_00571204;
extern "C" unsigned long _UNK_00571208;
extern "C" unsigned long _UNK_005714b8;
extern "C" unsigned long _UNK_005714bc;
extern "C" unsigned long _UNK_005714c0;
extern "C" unsigned long _UNK_005714c4;
extern "C" unsigned long _UNK_005714c8;
extern "C" unsigned long _UNK_005714cc;
extern "C" unsigned long _UNK_005714d0;
extern "C" unsigned long _UNK_005714d4;
extern "C" unsigned long _UNK_005714d8;
extern "C" unsigned long _UNK_005714dc;
extern "C" unsigned long _UNK_005714e0;
extern "C" unsigned long _UNK_005714e4;
extern "C" unsigned long _UNK_005714e8;
extern "C" unsigned long _UNK_005714ec;
extern "C" unsigned long _UNK_005714f0;
extern "C" unsigned long _UNK_005714f4;
extern "C" unsigned long _UNK_005714f8;
extern "C" unsigned long _UNK_005714fc;
extern "C" unsigned long _UNK_00571500;
extern "C" unsigned long _UNK_00571504;
extern "C" unsigned long _UNK_00571508;
extern "C" unsigned long _UNK_0057150c;
extern "C" unsigned long _UNK_00571510;
extern "C" unsigned long _UNK_00571514;
extern "C" unsigned long _UNK_00571518;
extern "C" unsigned long _UNK_0057151c;
extern "C" unsigned long _UNK_00571520;
extern "C" unsigned long _UNK_00571524;
extern "C" unsigned long _UNK_00571528;
extern "C" unsigned long _UNK_0057152c;
extern "C" unsigned long _UNK_00571530;
extern "C" unsigned long _UNK_005717a8;
extern "C" unsigned long _UNK_005717ac;
extern "C" unsigned long _UNK_005717b0;
extern "C" unsigned long _UNK_005717b4;
extern "C" unsigned long _UNK_005717b8;
extern "C" unsigned long _UNK_005717bc;
extern "C" unsigned long _UNK_005717c0;
extern "C" unsigned long _UNK_005717c4;
extern "C" unsigned long _UNK_005717c8;
extern "C" unsigned long _UNK_005717cc;
extern "C" unsigned long _UNK_005717d0;
extern "C" unsigned long _UNK_005717d4;
extern "C" unsigned long _UNK_005717d8;
extern "C" unsigned long _UNK_005717dc;
extern "C" unsigned long _UNK_005717e0;
extern "C" unsigned long _UNK_005717e4;
extern "C" unsigned long _UNK_005717e8;
extern "C" unsigned long _UNK_005717ec;
extern "C" unsigned long _UNK_005717f0;
extern "C" unsigned long _UNK_005717f4;
extern "C" unsigned long _UNK_005717f8;
extern "C" unsigned long _UNK_00571ba0;
extern "C" unsigned long _UNK_00571ba4;
extern "C" unsigned long _UNK_00571ba8;
extern "C" unsigned long _UNK_00571bac;
extern "C" unsigned long _UNK_00571bb0;
extern "C" unsigned long _UNK_00571bb4;
extern "C" unsigned long _UNK_00571bb8;
extern "C" unsigned long _UNK_00571bbc;
extern "C" unsigned long _UNK_00571bc0;
extern "C" unsigned long _UNK_00571bc4;
extern "C" unsigned long _UNK_00571bc8;
extern "C" unsigned long _UNK_00571bcc;
extern "C" unsigned long _UNK_00571bd0;
extern "C" unsigned long _UNK_00571bd4;
extern "C" unsigned long _UNK_00571bd8;
extern "C" unsigned long _UNK_00571bdc;
extern "C" unsigned long _UNK_00571be0;
extern "C" unsigned long _UNK_00571be4;
extern "C" unsigned long _UNK_00571be8;
extern "C" unsigned long _UNK_00571bec;
extern "C" unsigned long _UNK_00571bf0;
extern "C" unsigned long _UNK_00571bf4;
extern "C" unsigned long _UNK_00571bf8;
extern "C" unsigned long _UNK_00571bfc;
extern "C" unsigned long _UNK_00571c00;
extern "C" unsigned long _UNK_00571c04;
extern "C" unsigned long _UNK_00571c08;
extern "C" unsigned long _UNK_00571c0c;
extern "C" unsigned long _UNK_00571c10;
extern "C" unsigned long _UNK_00571c14;
extern "C" unsigned long _UNK_00571c18;
extern "C" unsigned long _UNK_00571c1c;
extern "C" unsigned long _UNK_00571c20;
extern "C" unsigned long _UNK_00571c24;
extern "C" unsigned long _UNK_00571c28;
extern "C" unsigned long _UNK_00571c2c;
extern "C" unsigned long _UNK_00571c30;
extern "C" unsigned long _UNK_00571c34;
extern "C" unsigned long _UNK_00571c38;
extern "C" unsigned long _UNK_00571d9c;
extern "C" unsigned long _UNK_00571da0;
extern "C" unsigned long _UNK_00571da4;
extern "C" unsigned long _UNK_00571da8;
extern "C" unsigned long g_005710b8;
extern "C" unsigned long g_005710ea;
extern "C" unsigned long g_0057111c;
extern "C" unsigned long g_00571120;
extern "C" unsigned long g_00571130;
extern "C" unsigned long g_00571134;
extern "C" unsigned long g_00571158;
extern "C" unsigned long g_0057115c;
extern "C" unsigned long g_00571170;
extern "C" unsigned long g_005711da;
extern "C" unsigned long g_00571204;
extern "C" unsigned long g_00571208;
extern "C" unsigned long g_0057126e;
extern "C" unsigned long g_005712b2;
extern "C" unsigned long g_00571304;
extern "C" unsigned long g_00571358;
extern "C" unsigned long g_0057135a;
extern "C" unsigned long g_005713b6;
extern "C" unsigned long g_005713e6;
extern "C" unsigned long g_0057145e;
extern "C" unsigned long g_0057146c;
extern "C" unsigned long g_00571480;
extern "C" unsigned long g_00571492;
extern "C" unsigned long g_005714a4;
extern "C" unsigned long g_005714b8;
extern "C" unsigned long g_005714bc;
extern "C" unsigned long g_005714c0;
extern "C" unsigned long g_005714c4;
extern "C" unsigned long g_005714c8;
extern "C" unsigned long g_005714cc;
extern "C" unsigned long g_005714d0;
extern "C" unsigned long g_005714d4;
extern "C" unsigned long g_005714d8;
extern "C" unsigned long g_005714dc;
extern "C" unsigned long g_005714e0;
extern "C" unsigned long g_005714e4;
extern "C" unsigned long g_005714e8;
extern "C" unsigned long g_005714ec;
extern "C" unsigned long g_005714f0;
extern "C" unsigned long g_005714f4;
extern "C" unsigned long g_005714f8;
extern "C" unsigned long g_005714fc;
extern "C" unsigned long g_00571500;
extern "C" unsigned long g_00571504;
extern "C" unsigned long g_00571508;
extern "C" unsigned long g_0057150c;
extern "C" unsigned long g_00571510;
extern "C" unsigned long g_00571514;
extern "C" unsigned long g_00571518;
extern "C" unsigned long g_0057151c;
extern "C" unsigned long g_00571520;
extern "C" unsigned long g_00571524;
extern "C" unsigned long g_00571528;
extern "C" unsigned long g_0057152c;
extern "C" unsigned long g_00571530;
extern "C" unsigned long g_00571588;
extern "C" unsigned long g_005715c8;
extern "C" unsigned long g_00571674;
extern "C" unsigned long g_00571686;
extern "C" unsigned long g_005716dc;
extern "C" unsigned long g_0057172e;
extern "C" unsigned long g_0057173c;
extern "C" unsigned long g_0057174e;
extern "C" unsigned long g_00571760;
extern "C" unsigned long g_00571772;
extern "C" unsigned long g_00571784;
extern "C" unsigned long g_00571796;
extern "C" unsigned long g_005717a8;
extern "C" unsigned long g_005717ac;
extern "C" unsigned long g_005717b0;
extern "C" unsigned long g_005717b4;
extern "C" unsigned long g_005717b8;
extern "C" unsigned long g_005717bc;
extern "C" unsigned long g_005717c0;
extern "C" unsigned long g_005717c4;
extern "C" unsigned long g_005717c8;
extern "C" unsigned long g_005717cc;
extern "C" unsigned long g_005717d0;
extern "C" unsigned long g_005717d4;
extern "C" unsigned long g_005717d8;
extern "C" unsigned long g_005717dc;
extern "C" unsigned long g_005717e0;
extern "C" unsigned long g_005717e4;
extern "C" unsigned long g_005717e8;
extern "C" unsigned long g_005717ec;
extern "C" unsigned long g_005717f0;
extern "C" unsigned long g_005717f4;
extern "C" unsigned long g_005717f8;
extern "C" unsigned long g_00571826;
extern "C" unsigned long g_00571838;
extern "C" unsigned long g_0057186c;
extern "C" unsigned long g_0057186e;
extern "C" unsigned long g_00571880;
extern "C" unsigned long g_00571896;
extern "C" unsigned long g_00571916;
extern "C" unsigned long g_00571918;
extern "C" unsigned long g_0057192f;
extern "C" unsigned long g_0057193a;
extern "C" unsigned long g_00571940;
extern "C" unsigned long g_0057198a;
extern "C" unsigned long g_0057198c;
extern "C" unsigned long g_005719a0;
extern "C" unsigned long g_005719b4;
extern "C" unsigned long g_005719e4;
extern "C" unsigned long g_005719f2;
extern "C" unsigned long g_00571a04;
extern "C" unsigned long g_00571a16;
extern "C" unsigned long g_00571a2c;
extern "C" unsigned long g_00571a3e;
extern "C" unsigned long g_00571a72;
extern "C" unsigned long g_00571a74;
extern "C" unsigned long g_00571a86;
extern "C" unsigned long g_00571a9c;
extern "C" unsigned long g_00571afa;
extern "C" unsigned long g_00571ba0;
extern "C" unsigned long g_00571ba4;
extern "C" unsigned long g_00571ba8;
extern "C" unsigned long g_00571bac;
extern "C" unsigned long g_00571bb0;
extern "C" unsigned long g_00571bb4;
extern "C" unsigned long g_00571bb8;
extern "C" unsigned long g_00571bbc;
extern "C" unsigned long g_00571bc0;
extern "C" unsigned long g_00571bc4;
extern "C" unsigned long g_00571bc8;
extern "C" unsigned long g_00571bcc;
extern "C" unsigned long g_00571bd0;
extern "C" unsigned long g_00571bd4;
extern "C" unsigned long g_00571bd8;
extern "C" unsigned long g_00571bdc;
extern "C" unsigned long g_00571be0;
extern "C" unsigned long g_00571be4;
extern "C" unsigned long g_00571be8;
extern "C" unsigned long g_00571bec;
extern "C" unsigned long g_00571bf0;
extern "C" unsigned long g_00571bf4;
extern "C" unsigned long g_00571bf8;
extern "C" unsigned long g_00571bfc;
extern "C" unsigned long g_00571c00;
extern "C" unsigned long g_00571c04;
extern "C" unsigned long g_00571c08;
extern "C" unsigned long g_00571c0c;
extern "C" unsigned long g_00571c10;
extern "C" unsigned long g_00571c14;
extern "C" unsigned long g_00571c18;
extern "C" unsigned long g_00571c1c;
extern "C" unsigned long g_00571c20;
extern "C" unsigned long g_00571c24;
extern "C" unsigned long g_00571c28;
extern "C" unsigned long g_00571c2c;
extern "C" unsigned long g_00571c30;
extern "C" unsigned long g_00571c34;
extern "C" unsigned long g_00571c38;
extern "C" unsigned long g_00571d9c;
extern "C" unsigned long g_00571da0;
extern "C" unsigned long g_00571da4;
extern "C" unsigned long g_00571da8;
BLImmortalsInfoView::~BLImmortalsInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005710b8 + g_0057111c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005710ea + g_00571120,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined4 BLImmortalsInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}



void BLImmortalsInfoView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLImmortalsInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void BLImmortalsInfoView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLImmortalsInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLImmortalsInfoView::BLImmortalsInfoView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLImmortalsInfoView::initWithRole(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLImmortalsInfoView::createWithRole(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

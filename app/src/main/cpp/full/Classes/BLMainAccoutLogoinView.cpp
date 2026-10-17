#include "BLMainAccoutLogoinView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccoutLogoinPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0059511c;
extern "C" unsigned long UNK_00595176;
extern "C" unsigned long UNK_005951bc;
extern "C" unsigned long UNK_005951d0;
extern "C" unsigned long UNK_005951f8;
extern "C" unsigned long UNK_0059520c;
extern "C" unsigned long UNK_00595256;
extern "C" unsigned long UNK_0059526e;
extern "C" unsigned long UNK_005952be;
extern "C" unsigned long UNK_005952d8;
extern "C" unsigned long UNK_00595338;
extern "C" unsigned long UNK_005955a6;
extern "C" unsigned long UNK_0059568a;
extern "C" unsigned long UNK_00595778;
extern "C" unsigned long UNK_005957a2;
extern "C" unsigned long UNK_0059586a;
extern "C" unsigned long UNK_005958a2;
extern "C" unsigned long UNK_00595974;
extern "C" unsigned long UNK_005959e6;
extern "C" unsigned long UNK_00595a90;
extern "C" unsigned long UNK_00595b6e;
extern "C" unsigned long UNK_00595b8e;
extern "C" unsigned long UNK_00595b90;
extern "C" unsigned long UNK_00595c30;
extern "C" unsigned long UNK_00595c64;
extern "C" unsigned long UNK_00595d0e;
extern "C" unsigned long UNK_00595e34;
extern "C" unsigned long UNK_00595e54;
extern "C" unsigned long UNK_00595e56;
extern "C" unsigned long UNK_00595ef8;
extern "C" unsigned long UNK_00595f22;
extern "C" unsigned long UNK_00595fe8;
extern "C" unsigned long UNK_00596012;
extern "C" unsigned long UNK_005960bc;
extern "C" unsigned long UNK_005960ea;
extern "C" unsigned long UNK_005961b0;
extern "C" unsigned long UNK_005961da;
extern "C" unsigned long _DAT_005953f8;
extern "C" unsigned long _DAT_005953fc;
extern "C" unsigned long _UNK_005951a8;
extern "C" unsigned long _UNK_005951ac;
extern "C" unsigned long _UNK_005951c0;
extern "C" unsigned long _UNK_005951d4;
extern "C" unsigned long _UNK_005951fc;
extern "C" unsigned long _UNK_00595210;
extern "C" unsigned long _UNK_0059531c;
extern "C" unsigned long _UNK_00595320;
extern "C" unsigned long _UNK_00595324;
extern "C" unsigned long _UNK_00595328;
extern "C" unsigned long _UNK_0059533c;
extern "C" unsigned long _UNK_00595988;
extern "C" unsigned long _UNK_0059598c;
extern "C" unsigned long _UNK_00595990;
extern "C" unsigned long _UNK_00595994;
extern "C" unsigned long _UNK_00595998;
extern "C" unsigned long _UNK_0059599c;
extern "C" unsigned long _UNK_005959a0;
extern "C" unsigned long _UNK_005959a4;
extern "C" unsigned long _UNK_005959a8;
extern "C" unsigned long _UNK_005959ac;
extern "C" unsigned long _UNK_005959b0;
extern "C" unsigned long _UNK_005959b4;
extern "C" unsigned long _UNK_005959b8;
extern "C" unsigned long _UNK_005959bc;
extern "C" unsigned long _UNK_005959c0;
extern "C" unsigned long _UNK_00595dc0;
extern "C" unsigned long _UNK_00595dc4;
extern "C" unsigned long _UNK_00595dc8;
extern "C" unsigned long _UNK_00595dcc;
extern "C" unsigned long _UNK_00595dd0;
extern "C" unsigned long _UNK_00595dd4;
extern "C" unsigned long _UNK_00595dd8;
extern "C" unsigned long _UNK_00595ddc;
extern "C" unsigned long _UNK_00595de0;
extern "C" unsigned long _UNK_00595de4;
extern "C" unsigned long _UNK_00595de8;
extern "C" unsigned long _UNK_00595dec;
extern "C" unsigned long _UNK_00595df0;
extern "C" unsigned long _UNK_00595df4;
extern "C" unsigned long _UNK_00595df8;
extern "C" unsigned long _UNK_00595dfc;
extern "C" unsigned long _UNK_00595e00;
extern "C" unsigned long _UNK_00595e04;
extern "C" unsigned long _UNK_00596210;
extern "C" unsigned long _UNK_00596214;
extern "C" unsigned long _UNK_00596218;
extern "C" unsigned long _UNK_0059621c;
extern "C" unsigned long _UNK_00596220;
extern "C" unsigned long _UNK_00596224;
extern "C" unsigned long _UNK_00596228;
extern "C" unsigned long _UNK_0059622c;
extern "C" unsigned long _UNK_00596230;
extern "C" unsigned long _UNK_00596234;
extern "C" unsigned long _UNK_00596238;
extern "C" unsigned long _UNK_0059623c;
extern "C" unsigned long _UNK_00596240;
extern "C" unsigned long _UNK_00596244;
extern "C" unsigned long _UNK_00596248;
extern "C" unsigned long _UNK_0059624c;
extern "C" unsigned long _UNK_00596250;
extern "C" unsigned long _UNK_0059636c;
extern "C" unsigned long _UNK_00596370;
extern "C" unsigned long _UNK_00596374;
extern "C" unsigned long g_0059511c;
extern "C" unsigned long g_00595176;
extern "C" unsigned long g_005951a8;
extern "C" unsigned long g_005951ac;
extern "C" unsigned long g_005951bc;
extern "C" unsigned long g_005951c0;
extern "C" unsigned long g_005951d0;
extern "C" unsigned long g_005951d4;
extern "C" unsigned long g_005951f8;
extern "C" unsigned long g_005951fc;
extern "C" unsigned long g_0059520c;
extern "C" unsigned long g_00595210;
extern "C" unsigned long g_00595256;
extern "C" unsigned long g_0059526e;
extern "C" unsigned long g_005952be;
extern "C" unsigned long g_005952d8;
extern "C" unsigned long g_0059531c;
extern "C" unsigned long g_00595320;
extern "C" unsigned long g_00595324;
extern "C" unsigned long g_00595328;
extern "C" unsigned long g_00595338;
extern "C" unsigned long g_0059533c;
extern "C" unsigned long g_005953f8;
extern "C" unsigned long g_005953fc;
extern "C" unsigned long g_005955a6;
extern "C" unsigned long g_0059568a;
extern "C" unsigned long g_00595778;
extern "C" unsigned long g_005957a2;
extern "C" unsigned long g_0059586a;
extern "C" unsigned long g_005958a2;
extern "C" unsigned long g_00595974;
extern "C" unsigned long g_00595988;
extern "C" unsigned long g_0059598c;
extern "C" unsigned long g_00595990;
extern "C" unsigned long g_00595994;
extern "C" unsigned long g_00595998;
extern "C" unsigned long g_0059599c;
extern "C" unsigned long g_005959a0;
extern "C" unsigned long g_005959a4;
extern "C" unsigned long g_005959a8;
extern "C" unsigned long g_005959ac;
extern "C" unsigned long g_005959b0;
extern "C" unsigned long g_005959b4;
extern "C" unsigned long g_005959b8;
extern "C" unsigned long g_005959bc;
extern "C" unsigned long g_005959c0;
extern "C" unsigned long g_005959e6;
extern "C" unsigned long g_00595a90;
extern "C" unsigned long g_00595b6e;
extern "C" unsigned long g_00595b8e;
extern "C" unsigned long g_00595b90;
extern "C" unsigned long g_00595c30;
extern "C" unsigned long g_00595c64;
extern "C" unsigned long g_00595d0e;
extern "C" unsigned long g_00595dc0;
extern "C" unsigned long g_00595dc4;
extern "C" unsigned long g_00595dc8;
extern "C" unsigned long g_00595dcc;
extern "C" unsigned long g_00595dd0;
extern "C" unsigned long g_00595dd4;
extern "C" unsigned long g_00595dd8;
extern "C" unsigned long g_00595ddc;
extern "C" unsigned long g_00595de0;
extern "C" unsigned long g_00595de4;
extern "C" unsigned long g_00595de8;
extern "C" unsigned long g_00595dec;
extern "C" unsigned long g_00595df0;
extern "C" unsigned long g_00595df4;
extern "C" unsigned long g_00595df8;
extern "C" unsigned long g_00595dfc;
extern "C" unsigned long g_00595e00;
extern "C" unsigned long g_00595e04;
extern "C" unsigned long g_00595e34;
extern "C" unsigned long g_00595e54;
extern "C" unsigned long g_00595e56;
extern "C" unsigned long g_00595ef8;
extern "C" unsigned long g_00595f22;
extern "C" unsigned long g_00595fe8;
extern "C" unsigned long g_00596012;
extern "C" unsigned long g_005960bc;
extern "C" unsigned long g_005960ea;
extern "C" unsigned long g_005961b0;
extern "C" unsigned long g_005961da;
extern "C" unsigned long g_00596210;
extern "C" unsigned long g_00596214;
extern "C" unsigned long g_00596218;
extern "C" unsigned long g_0059621c;
extern "C" unsigned long g_00596220;
extern "C" unsigned long g_00596224;
extern "C" unsigned long g_00596228;
extern "C" unsigned long g_0059622c;
extern "C" unsigned long g_00596230;
extern "C" unsigned long g_00596234;
extern "C" unsigned long g_00596238;
extern "C" unsigned long g_0059623c;
extern "C" unsigned long g_00596240;
extern "C" unsigned long g_00596244;
extern "C" unsigned long g_00596248;
extern "C" unsigned long g_0059624c;
extern "C" unsigned long g_00596250;
extern "C" unsigned long g_0059636c;
extern "C" unsigned long g_00596370;
extern "C" unsigned long g_00596374;
void BLMainAccoutLogoinView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccoutLogoinView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccoutLogoinView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  return;
}

BLMainAccoutLogoinView::~BLMainAccoutLogoinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0059511c + g_005951a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00595176 + g_005951ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



int * BLMainAccoutLogoinView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x14c)));
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

undefined4 BLMainAccoutLogoinView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}


undefined4 BLMainAccoutLogoinView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainAccoutLogoinView::getBtnLogin()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainAccoutLogoinView::getBtnFindPassword()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMainAccoutLogoinView::getEditEmail()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainAccoutLogoinView::getEditPass()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMainAccoutLogoinView::onEnter()
{
  ((BLMainAccoutLogoinPresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccoutLogoinView::onExit()
{
  ((BLMainAccoutLogoinPresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMainAccoutLogoinView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMainAccoutLogoinView::BLMainAccoutLogoinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005953f8 + 0x595380));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x43)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccoutLogoinView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMainAccoutLogoinView::addEditBox(cocos2d::extension::CCEditBox* p1, cocos2d::CCPoint * p2, char const* p3, bool p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainAccoutLogoinView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

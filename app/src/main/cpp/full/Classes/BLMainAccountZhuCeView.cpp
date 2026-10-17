#include "BLMainAccountZhuCeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountZhuCePresenter.h"
#include "Toast.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00592bb4;
extern "C" unsigned long UNK_00592c0e;
extern "C" unsigned long UNK_00592c54;
extern "C" unsigned long UNK_00592c68;
extern "C" unsigned long UNK_00592c90;
extern "C" unsigned long UNK_00592ca4;
extern "C" unsigned long UNK_00592d00;
extern "C" unsigned long UNK_00592d2c;
extern "C" unsigned long UNK_00592da0;
extern "C" unsigned long UNK_00592dcc;
extern "C" unsigned long UNK_00592e2a;
extern "C" unsigned long UNK_00592e3a;
extern "C" unsigned long UNK_00592e4a;
extern "C" unsigned long UNK_00592e6a;
extern "C" unsigned long UNK_00592e92;
extern "C" unsigned long UNK_00592eb4;
extern "C" unsigned long UNK_00592ede;
extern "C" unsigned long UNK_00592f1a;
extern "C" unsigned long UNK_00592f7e;
extern "C" unsigned long UNK_00592f80;
extern "C" unsigned long UNK_00592fa8;
extern "C" unsigned long UNK_00592fd6;
extern "C" unsigned long UNK_0059303a;
extern "C" unsigned long UNK_00593046;
extern "C" unsigned long UNK_005930ae;
extern "C" unsigned long UNK_005930d4;
extern "C" unsigned long UNK_005930de;
extern "C" unsigned long UNK_005930f8;
extern "C" unsigned long UNK_00593120;
extern "C" unsigned long UNK_005931bc;
extern "C" unsigned long UNK_0059342e;
extern "C" unsigned long UNK_00593512;
extern "C" unsigned long UNK_00593600;
extern "C" unsigned long UNK_0059362a;
extern "C" unsigned long UNK_005936f2;
extern "C" unsigned long UNK_0059372a;
extern "C" unsigned long UNK_005937fc;
extern "C" unsigned long UNK_0059386e;
extern "C" unsigned long UNK_0059391a;
extern "C" unsigned long UNK_00593a06;
extern "C" unsigned long UNK_00593a26;
extern "C" unsigned long UNK_00593a28;
extern "C" unsigned long UNK_00593ac8;
extern "C" unsigned long UNK_00593afc;
extern "C" unsigned long UNK_00593ba6;
extern "C" unsigned long UNK_00593cce;
extern "C" unsigned long UNK_00593cf2;
extern "C" unsigned long UNK_00593d96;
extern "C" unsigned long UNK_00593dc0;
extern "C" unsigned long UNK_00593e6a;
extern "C" unsigned long UNK_00593f4e;
extern "C" unsigned long UNK_00593f6e;
extern "C" unsigned long UNK_00593f70;
extern "C" unsigned long UNK_0059400a;
extern "C" unsigned long UNK_00594034;
extern "C" unsigned long UNK_00594130;
extern "C" unsigned long UNK_00594208;
extern "C" unsigned long UNK_0059422c;
extern "C" unsigned long UNK_005942d0;
extern "C" unsigned long UNK_005942f8;
extern "C" unsigned long UNK_005943be;
extern "C" unsigned long UNK_005943e8;
extern "C" unsigned long _DAT_0059327c;
extern "C" unsigned long _DAT_00593280;
extern "C" unsigned long _UNK_00592c40;
extern "C" unsigned long _UNK_00592c44;
extern "C" unsigned long _UNK_00592c58;
extern "C" unsigned long _UNK_00592c6c;
extern "C" unsigned long _UNK_00592c94;
extern "C" unsigned long _UNK_00592ca8;
extern "C" unsigned long _UNK_00593050;
extern "C" unsigned long _UNK_00593054;
extern "C" unsigned long _UNK_00593058;
extern "C" unsigned long _UNK_0059305c;
extern "C" unsigned long _UNK_00593060;
extern "C" unsigned long _UNK_00593064;
extern "C" unsigned long _UNK_00593068;
extern "C" unsigned long _UNK_0059306c;
extern "C" unsigned long _UNK_00593070;
extern "C" unsigned long _UNK_00593074;
extern "C" unsigned long _UNK_00593078;
extern "C" unsigned long _UNK_0059307c;
extern "C" unsigned long _UNK_00593080;
extern "C" unsigned long _UNK_00593084;
extern "C" unsigned long _UNK_00593088;
extern "C" unsigned long _UNK_0059308c;
extern "C" unsigned long _UNK_00593090;
extern "C" unsigned long _UNK_00593094;
extern "C" unsigned long _UNK_0059319c;
extern "C" unsigned long _UNK_005931a0;
extern "C" unsigned long _UNK_005931a4;
extern "C" unsigned long _UNK_005931a8;
extern "C" unsigned long _UNK_005931ac;
extern "C" unsigned long _UNK_005931c0;
extern "C" unsigned long _UNK_00593810;
extern "C" unsigned long _UNK_00593814;
extern "C" unsigned long _UNK_00593818;
extern "C" unsigned long _UNK_0059381c;
extern "C" unsigned long _UNK_00593820;
extern "C" unsigned long _UNK_00593824;
extern "C" unsigned long _UNK_00593828;
extern "C" unsigned long _UNK_0059382c;
extern "C" unsigned long _UNK_00593830;
extern "C" unsigned long _UNK_00593834;
extern "C" unsigned long _UNK_00593838;
extern "C" unsigned long _UNK_0059383c;
extern "C" unsigned long _UNK_00593840;
extern "C" unsigned long _UNK_00593844;
extern "C" unsigned long _UNK_00593848;
extern "C" unsigned long _UNK_00593c44;
extern "C" unsigned long _UNK_00593c48;
extern "C" unsigned long _UNK_00593c4c;
extern "C" unsigned long _UNK_00593c50;
extern "C" unsigned long _UNK_00593c54;
extern "C" unsigned long _UNK_00593c58;
extern "C" unsigned long _UNK_00593c5c;
extern "C" unsigned long _UNK_00593c60;
extern "C" unsigned long _UNK_00593c64;
extern "C" unsigned long _UNK_00593c68;
extern "C" unsigned long _UNK_00593c6c;
extern "C" unsigned long _UNK_00593c70;
extern "C" unsigned long _UNK_00593c74;
extern "C" unsigned long _UNK_00593c78;
extern "C" unsigned long _UNK_00593c7c;
extern "C" unsigned long _UNK_00593c80;
extern "C" unsigned long _UNK_00593c84;
extern "C" unsigned long _UNK_00593c88;
extern "C" unsigned long _UNK_00593c8c;
extern "C" unsigned long _UNK_00594074;
extern "C" unsigned long _UNK_00594078;
extern "C" unsigned long _UNK_0059407c;
extern "C" unsigned long _UNK_00594080;
extern "C" unsigned long _UNK_00594084;
extern "C" unsigned long _UNK_00594088;
extern "C" unsigned long _UNK_0059408c;
extern "C" unsigned long _UNK_00594090;
extern "C" unsigned long _UNK_00594094;
extern "C" unsigned long _UNK_00594098;
extern "C" unsigned long _UNK_0059409c;
extern "C" unsigned long _UNK_005940a0;
extern "C" unsigned long _UNK_005940a4;
extern "C" unsigned long _UNK_005940a8;
extern "C" unsigned long _UNK_005940ac;
extern "C" unsigned long _UNK_005940b0;
extern "C" unsigned long _UNK_005940b4;
extern "C" unsigned long _UNK_005940b8;
extern "C" unsigned long _UNK_005940bc;
extern "C" unsigned long _UNK_005940c0;
extern "C" unsigned long _UNK_005944b0;
extern "C" unsigned long _UNK_005944b4;
extern "C" unsigned long _UNK_005944b8;
extern "C" unsigned long _UNK_005944bc;
extern "C" unsigned long _UNK_005944c0;
extern "C" unsigned long _UNK_005944c4;
extern "C" unsigned long _UNK_005944c8;
extern "C" unsigned long _UNK_005944cc;
extern "C" unsigned long _UNK_005944d0;
extern "C" unsigned long _UNK_005944d4;
extern "C" unsigned long _UNK_005944d8;
extern "C" unsigned long _UNK_005944dc;
extern "C" unsigned long _UNK_005944e0;
extern "C" unsigned long _UNK_005944e4;
extern "C" unsigned long _UNK_005944e8;
extern "C" unsigned long _UNK_005944ec;
extern "C" unsigned long _UNK_005944f0;
extern "C" unsigned long _UNK_005944f4;
extern "C" unsigned long _UNK_005944f8;
extern "C" unsigned long _UNK_005944fc;
extern "C" unsigned long _UNK_00594500;
extern "C" unsigned long _UNK_00594504;
extern "C" unsigned long g_00592bb4;
extern "C" unsigned long g_00592c0e;
extern "C" unsigned long g_00592c40;
extern "C" unsigned long g_00592c44;
extern "C" unsigned long g_00592c54;
extern "C" unsigned long g_00592c58;
extern "C" unsigned long g_00592c68;
extern "C" unsigned long g_00592c6c;
extern "C" unsigned long g_00592c90;
extern "C" unsigned long g_00592c94;
extern "C" unsigned long g_00592ca4;
extern "C" unsigned long g_00592ca8;
extern "C" unsigned long g_00592d00;
extern "C" unsigned long g_00592d2c;
extern "C" unsigned long g_00592da0;
extern "C" unsigned long g_00592dcc;
extern "C" unsigned long g_00592e2a;
extern "C" unsigned long g_00592e3a;
extern "C" unsigned long g_00592e4a;
extern "C" unsigned long g_00592e6a;
extern "C" unsigned long g_00592e92;
extern "C" unsigned long g_00592eb4;
extern "C" unsigned long g_00592ede;
extern "C" unsigned long g_00592f1a;
extern "C" unsigned long g_00592f7e;
extern "C" unsigned long g_00592f80;
extern "C" unsigned long g_00592fa8;
extern "C" unsigned long g_00592fd6;
extern "C" unsigned long g_0059303a;
extern "C" unsigned long g_00593046;
extern "C" unsigned long g_00593050;
extern "C" unsigned long g_00593054;
extern "C" unsigned long g_00593058;
extern "C" unsigned long g_0059305c;
extern "C" unsigned long g_00593060;
extern "C" unsigned long g_00593064;
extern "C" unsigned long g_00593068;
extern "C" unsigned long g_0059306c;
extern "C" unsigned long g_00593070;
extern "C" unsigned long g_00593074;
extern "C" unsigned long g_00593078;
extern "C" unsigned long g_0059307c;
extern "C" unsigned long g_00593080;
extern "C" unsigned long g_00593084;
extern "C" unsigned long g_00593088;
extern "C" unsigned long g_0059308c;
extern "C" unsigned long g_00593090;
extern "C" unsigned long g_00593094;
extern "C" unsigned long g_005930ae;
extern "C" unsigned long g_005930d4;
extern "C" unsigned long g_005930de;
extern "C" unsigned long g_005930f8;
extern "C" unsigned long g_00593120;
extern "C" unsigned long g_0059319c;
extern "C" unsigned long g_005931a0;
extern "C" unsigned long g_005931a4;
extern "C" unsigned long g_005931a8;
extern "C" unsigned long g_005931ac;
extern "C" unsigned long g_005931bc;
extern "C" unsigned long g_005931c0;
extern "C" unsigned long g_0059327c;
extern "C" unsigned long g_00593280;
extern "C" unsigned long g_0059342e;
extern "C" unsigned long g_00593512;
extern "C" unsigned long g_00593600;
extern "C" unsigned long g_0059362a;
extern "C" unsigned long g_005936f2;
extern "C" unsigned long g_0059372a;
extern "C" unsigned long g_005937fc;
extern "C" unsigned long g_00593810;
extern "C" unsigned long g_00593814;
extern "C" unsigned long g_00593818;
extern "C" unsigned long g_0059381c;
extern "C" unsigned long g_00593820;
extern "C" unsigned long g_00593824;
extern "C" unsigned long g_00593828;
extern "C" unsigned long g_0059382c;
extern "C" unsigned long g_00593830;
extern "C" unsigned long g_00593834;
extern "C" unsigned long g_00593838;
extern "C" unsigned long g_0059383c;
extern "C" unsigned long g_00593840;
extern "C" unsigned long g_00593844;
extern "C" unsigned long g_00593848;
extern "C" unsigned long g_0059386e;
extern "C" unsigned long g_0059391a;
extern "C" unsigned long g_00593a06;
extern "C" unsigned long g_00593a26;
extern "C" unsigned long g_00593a28;
extern "C" unsigned long g_00593ac8;
extern "C" unsigned long g_00593afc;
extern "C" unsigned long g_00593ba6;
extern "C" unsigned long g_00593c44;
extern "C" unsigned long g_00593c48;
extern "C" unsigned long g_00593c4c;
extern "C" unsigned long g_00593c50;
extern "C" unsigned long g_00593c54;
extern "C" unsigned long g_00593c58;
extern "C" unsigned long g_00593c5c;
extern "C" unsigned long g_00593c60;
extern "C" unsigned long g_00593c64;
extern "C" unsigned long g_00593c68;
extern "C" unsigned long g_00593c6c;
extern "C" unsigned long g_00593c70;
extern "C" unsigned long g_00593c74;
extern "C" unsigned long g_00593c78;
extern "C" unsigned long g_00593c7c;
extern "C" unsigned long g_00593c80;
extern "C" unsigned long g_00593c84;
extern "C" unsigned long g_00593c88;
extern "C" unsigned long g_00593c8c;
extern "C" unsigned long g_00593cce;
extern "C" unsigned long g_00593cf2;
extern "C" unsigned long g_00593d96;
extern "C" unsigned long g_00593dc0;
extern "C" unsigned long g_00593e6a;
extern "C" unsigned long g_00593f4e;
extern "C" unsigned long g_00593f6e;
extern "C" unsigned long g_00593f70;
extern "C" unsigned long g_0059400a;
extern "C" unsigned long g_00594034;
extern "C" unsigned long g_00594074;
extern "C" unsigned long g_00594078;
extern "C" unsigned long g_0059407c;
extern "C" unsigned long g_00594080;
extern "C" unsigned long g_00594084;
extern "C" unsigned long g_00594088;
extern "C" unsigned long g_0059408c;
extern "C" unsigned long g_00594090;
extern "C" unsigned long g_00594094;
extern "C" unsigned long g_00594098;
extern "C" unsigned long g_0059409c;
extern "C" unsigned long g_005940a0;
extern "C" unsigned long g_005940a4;
extern "C" unsigned long g_005940a8;
extern "C" unsigned long g_005940ac;
extern "C" unsigned long g_005940b0;
extern "C" unsigned long g_005940b4;
extern "C" unsigned long g_005940b8;
extern "C" unsigned long g_005940bc;
extern "C" unsigned long g_005940c0;
extern "C" unsigned long g_00594130;
extern "C" unsigned long g_00594208;
extern "C" unsigned long g_0059422c;
extern "C" unsigned long g_005942d0;
extern "C" unsigned long g_005942f8;
extern "C" unsigned long g_005943be;
extern "C" unsigned long g_005943e8;
extern "C" unsigned long g_005944b0;
extern "C" unsigned long g_005944b4;
extern "C" unsigned long g_005944b8;
extern "C" unsigned long g_005944bc;
extern "C" unsigned long g_005944c0;
extern "C" unsigned long g_005944c4;
extern "C" unsigned long g_005944c8;
extern "C" unsigned long g_005944cc;
extern "C" unsigned long g_005944d0;
extern "C" unsigned long g_005944d4;
extern "C" unsigned long g_005944d8;
extern "C" unsigned long g_005944dc;
extern "C" unsigned long g_005944e0;
extern "C" unsigned long g_005944e4;
extern "C" unsigned long g_005944e8;
extern "C" unsigned long g_005944ec;
extern "C" unsigned long g_005944f0;
extern "C" unsigned long g_005944f4;
extern "C" unsigned long g_005944f8;
extern "C" unsigned long g_005944fc;
extern "C" unsigned long g_00594500;
extern "C" unsigned long g_00594504;
void BLMainAccountZhuCeView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccountZhuCeView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccountZhuCeView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  return;
}

BLMainAccountZhuCeView::~BLMainAccountZhuCeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00592bb4 + g_00592c40);
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
  func_0079e45c(&uStack_14,&g_00592c0e + g_00592c44,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



int * BLMainAccountZhuCeView::create()
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

undefined4 BLMainAccountZhuCeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}


undefined4 BLMainAccountZhuCeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMainAccountZhuCeView::getBtnZhuCe()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainAccountZhuCeView::getEditEmail()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainAccountZhuCeView::getEditEmail2()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainAccountZhuCeView::getEditPass()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainAccountZhuCeView::getEditPass2()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLMainAccountZhuCeView::onEnter()
{
  ((BLMainAccountZhuCePresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccountZhuCeView::onExit()
{
  ((BLMainAccountZhuCePresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMainAccountZhuCeView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMainAccountZhuCeView::BLMainAccountZhuCeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0059327c + 0x593204));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountZhuCeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMainAccountZhuCeView::addEditBox(cocos2d::extension::CCEditBox* p1, cocos2d::CCPoint * p2, char const* p3, bool p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainAccountZhuCeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

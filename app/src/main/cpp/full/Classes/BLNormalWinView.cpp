#include "BLNormalWinView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLNormalWinPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006670ac;
extern "C" unsigned long UNK_006670de;
extern "C" unsigned long UNK_00667138;
extern "C" unsigned long UNK_00667160;
extern "C" unsigned long UNK_00667296;
extern "C" unsigned long UNK_00667390;
extern "C" unsigned long UNK_006673be;
extern "C" unsigned long UNK_00667490;
extern "C" unsigned long UNK_006674c4;
extern "C" unsigned long UNK_0066757a;
extern "C" unsigned long UNK_0066766c;
extern "C" unsigned long UNK_00667694;
extern "C" unsigned long UNK_0066776e;
extern "C" unsigned long UNK_00667796;
extern "C" unsigned long UNK_00667868;
extern "C" unsigned long UNK_00667892;
extern "C" unsigned long UNK_00667956;
extern "C" unsigned long UNK_00667980;
extern "C" unsigned long UNK_00667a44;
extern "C" unsigned long UNK_00667ab0;
extern "C" unsigned long UNK_00667b64;
extern "C" unsigned long UNK_00667c06;
extern "C" unsigned long UNK_00667cee;
extern "C" unsigned long UNK_00667dde;
extern "C" unsigned long UNK_00667e08;
extern "C" unsigned long UNK_00667f0c;
extern "C" unsigned long UNK_00667f36;
extern "C" unsigned long UNK_00667fee;
extern "C" unsigned long UNK_0066808c;
extern "C" unsigned long UNK_00668128;
extern "C" unsigned long UNK_006681c2;
extern "C" unsigned long UNK_0066825c;
extern "C" unsigned long UNK_00668340;
extern "C" unsigned long UNK_006683de;
extern "C" unsigned long UNK_0066849a;
extern "C" unsigned long UNK_00668516;
extern "C" unsigned long UNK_00668562;
extern "C" unsigned long UNK_00668564;
extern "C" unsigned long UNK_00668576;
extern "C" unsigned long UNK_006685f4;
extern "C" unsigned long UNK_0066863a;
extern "C" unsigned long UNK_00668692;
extern "C" unsigned long UNK_00668694;
extern "C" unsigned long UNK_006686a4;
extern "C" unsigned long UNK_00668774;
extern "C" unsigned long UNK_006687b4;
extern "C" unsigned long UNK_0066880c;
extern "C" unsigned long UNK_0066880e;
extern "C" unsigned long UNK_0066881e;
extern "C" unsigned long UNK_0066889c;
extern "C" unsigned long UNK_00668912;
extern "C" unsigned long UNK_0066893e;
extern "C" unsigned long UNK_006689fa;
extern "C" unsigned long UNK_00668a70;
extern "C" unsigned long UNK_00668a9e;
extern "C" unsigned long UNK_00668ba2;
extern "C" unsigned long UNK_00668bcc;
extern "C" unsigned long UNK_00668c60;
extern "C" unsigned long UNK_00668d76;
extern "C" unsigned long _DAT_00667238;
extern "C" unsigned long _DAT_0066723c;
extern "C" unsigned long _UNK_00667124;
extern "C" unsigned long _UNK_00667128;
extern "C" unsigned long _UNK_0066713c;
extern "C" unsigned long _UNK_00667164;
extern "C" unsigned long _UNK_0066762c;
extern "C" unsigned long _UNK_00667630;
extern "C" unsigned long _UNK_00667634;
extern "C" unsigned long _UNK_00667638;
extern "C" unsigned long _UNK_0066763c;
extern "C" unsigned long _UNK_00667640;
extern "C" unsigned long _UNK_00667644;
extern "C" unsigned long _UNK_00667648;
extern "C" unsigned long _UNK_0066764c;
extern "C" unsigned long _UNK_00667650;
extern "C" unsigned long _UNK_00667654;
extern "C" unsigned long _UNK_00667658;
extern "C" unsigned long _UNK_0066765c;
extern "C" unsigned long _UNK_00667660;
extern "C" unsigned long _UNK_00667a48;
extern "C" unsigned long _UNK_00667a4c;
extern "C" unsigned long _UNK_00667a50;
extern "C" unsigned long _UNK_00667a54;
extern "C" unsigned long _UNK_00667a58;
extern "C" unsigned long _UNK_00667a5c;
extern "C" unsigned long _UNK_00667a60;
extern "C" unsigned long _UNK_00667a64;
extern "C" unsigned long _UNK_00667a68;
extern "C" unsigned long _UNK_00667a6c;
extern "C" unsigned long _UNK_00667a70;
extern "C" unsigned long _UNK_00667a74;
extern "C" unsigned long _UNK_00667a78;
extern "C" unsigned long _UNK_00667a7c;
extern "C" unsigned long _UNK_00667a80;
extern "C" unsigned long _UNK_00667a84;
extern "C" unsigned long _UNK_00667e8c;
extern "C" unsigned long _UNK_00667e90;
extern "C" unsigned long _UNK_00667e94;
extern "C" unsigned long _UNK_00667e98;
extern "C" unsigned long _UNK_00667e9c;
extern "C" unsigned long _UNK_00667ea0;
extern "C" unsigned long _UNK_00667ea4;
extern "C" unsigned long _UNK_00667ea8;
extern "C" unsigned long _UNK_00667eac;
extern "C" unsigned long _UNK_00667eb0;
extern "C" unsigned long _UNK_00667eb4;
extern "C" unsigned long _UNK_00667eb8;
extern "C" unsigned long _UNK_00667ebc;
extern "C" unsigned long _UNK_00667ec0;
extern "C" unsigned long _UNK_00667ec4;
extern "C" unsigned long _UNK_00667ec8;
extern "C" unsigned long _UNK_00667ecc;
extern "C" unsigned long _UNK_006682ec;
extern "C" unsigned long _UNK_006682f0;
extern "C" unsigned long _UNK_006682f4;
extern "C" unsigned long _UNK_006682f8;
extern "C" unsigned long _UNK_006682fc;
extern "C" unsigned long _UNK_00668300;
extern "C" unsigned long _UNK_00668304;
extern "C" unsigned long _UNK_00668308;
extern "C" unsigned long _UNK_0066830c;
extern "C" unsigned long _UNK_00668310;
extern "C" unsigned long _UNK_00668314;
extern "C" unsigned long _UNK_00668318;
extern "C" unsigned long _UNK_0066831c;
extern "C" unsigned long _UNK_00668320;
extern "C" unsigned long _UNK_00668324;
extern "C" unsigned long _UNK_00668328;
extern "C" unsigned long _UNK_00668714;
extern "C" unsigned long _UNK_00668718;
extern "C" unsigned long _UNK_0066871c;
extern "C" unsigned long _UNK_00668720;
extern "C" unsigned long _UNK_00668724;
extern "C" unsigned long _UNK_00668728;
extern "C" unsigned long _UNK_0066872c;
extern "C" unsigned long _UNK_00668730;
extern "C" unsigned long _UNK_00668734;
extern "C" unsigned long _UNK_00668738;
extern "C" unsigned long _UNK_0066873c;
extern "C" unsigned long _UNK_00668740;
extern "C" unsigned long _UNK_00668744;
extern "C" unsigned long _UNK_00668748;
extern "C" unsigned long _UNK_0066874c;
extern "C" unsigned long _UNK_00668750;
extern "C" unsigned long _UNK_00668754;
extern "C" unsigned long _UNK_00668758;
extern "C" unsigned long _UNK_0066875c;
extern "C" unsigned long _UNK_00668760;
extern "C" unsigned long _UNK_00668b40;
extern "C" unsigned long _UNK_00668b44;
extern "C" unsigned long _UNK_00668b48;
extern "C" unsigned long _UNK_00668b4c;
extern "C" unsigned long _UNK_00668b50;
extern "C" unsigned long _UNK_00668b54;
extern "C" unsigned long _UNK_00668b58;
extern "C" unsigned long _UNK_00668b5c;
extern "C" unsigned long _UNK_00668b60;
extern "C" unsigned long _UNK_00668b64;
extern "C" unsigned long _UNK_00668b68;
extern "C" unsigned long _UNK_00668b6c;
extern "C" unsigned long _UNK_00668b70;
extern "C" unsigned long _UNK_00668b74;
extern "C" unsigned long _UNK_00668b78;
extern "C" unsigned long _UNK_00668b7c;
extern "C" unsigned long _UNK_00668b80;
extern "C" unsigned long _UNK_00668e94;
extern "C" unsigned long _UNK_00668e98;
extern "C" unsigned long _UNK_00668e9c;
extern "C" unsigned long _UNK_00668ea0;
extern "C" unsigned long _UNK_00668ea4;
extern "C" unsigned long _UNK_00668ea8;
extern "C" unsigned long _UNK_00668eac;
extern "C" unsigned long _UNK_00668eb0;
extern "C" unsigned long _UNK_00668eb4;
extern "C" unsigned long _UNK_00668eb8;
extern "C" unsigned long _UNK_00668ebc;
extern "C" unsigned long g_006670ac;
extern "C" unsigned long g_006670de;
extern "C" unsigned long g_00667124;
extern "C" unsigned long g_00667128;
extern "C" unsigned long g_00667138;
extern "C" unsigned long g_0066713c;
extern "C" unsigned long g_00667160;
extern "C" unsigned long g_00667164;
extern "C" unsigned long g_00667238;
extern "C" unsigned long g_0066723c;
extern "C" unsigned long g_00667296;
extern "C" unsigned long g_00667390;
extern "C" unsigned long g_006673be;
extern "C" unsigned long g_00667490;
extern "C" unsigned long g_006674c4;
extern "C" unsigned long g_0066757a;
extern "C" unsigned long g_0066762c;
extern "C" unsigned long g_00667630;
extern "C" unsigned long g_00667634;
extern "C" unsigned long g_00667638;
extern "C" unsigned long g_0066763c;
extern "C" unsigned long g_00667640;
extern "C" unsigned long g_00667644;
extern "C" unsigned long g_00667648;
extern "C" unsigned long g_0066764c;
extern "C" unsigned long g_00667650;
extern "C" unsigned long g_00667654;
extern "C" unsigned long g_00667658;
extern "C" unsigned long g_0066765c;
extern "C" unsigned long g_00667660;
extern "C" unsigned long g_0066766c;
extern "C" unsigned long g_00667694;
extern "C" unsigned long g_0066776e;
extern "C" unsigned long g_00667796;
extern "C" unsigned long g_00667868;
extern "C" unsigned long g_00667892;
extern "C" unsigned long g_00667956;
extern "C" unsigned long g_00667980;
extern "C" unsigned long g_00667a44;
extern "C" unsigned long g_00667a48;
extern "C" unsigned long g_00667a4c;
extern "C" unsigned long g_00667a50;
extern "C" unsigned long g_00667a54;
extern "C" unsigned long g_00667a58;
extern "C" unsigned long g_00667a5c;
extern "C" unsigned long g_00667a60;
extern "C" unsigned long g_00667a64;
extern "C" unsigned long g_00667a68;
extern "C" unsigned long g_00667a6c;
extern "C" unsigned long g_00667a70;
extern "C" unsigned long g_00667a74;
extern "C" unsigned long g_00667a78;
extern "C" unsigned long g_00667a7c;
extern "C" unsigned long g_00667a80;
extern "C" unsigned long g_00667a84;
extern "C" unsigned long g_00667ab0;
extern "C" unsigned long g_00667b64;
extern "C" unsigned long g_00667c06;
extern "C" unsigned long g_00667cee;
extern "C" unsigned long g_00667dde;
extern "C" unsigned long g_00667e08;
extern "C" unsigned long g_00667e8c;
extern "C" unsigned long g_00667e90;
extern "C" unsigned long g_00667e94;
extern "C" unsigned long g_00667e98;
extern "C" unsigned long g_00667e9c;
extern "C" unsigned long g_00667ea0;
extern "C" unsigned long g_00667ea4;
extern "C" unsigned long g_00667ea8;
extern "C" unsigned long g_00667eac;
extern "C" unsigned long g_00667eb0;
extern "C" unsigned long g_00667eb4;
extern "C" unsigned long g_00667eb8;
extern "C" unsigned long g_00667ebc;
extern "C" unsigned long g_00667ec0;
extern "C" unsigned long g_00667ec4;
extern "C" unsigned long g_00667ec8;
extern "C" unsigned long g_00667ecc;
extern "C" unsigned long g_00667f0c;
extern "C" unsigned long g_00667f36;
extern "C" unsigned long g_00667fee;
extern "C" unsigned long g_0066808c;
extern "C" unsigned long g_00668128;
extern "C" unsigned long g_006681c2;
extern "C" unsigned long g_0066825c;
extern "C" unsigned long g_006682ec;
extern "C" unsigned long g_006682f0;
extern "C" unsigned long g_006682f4;
extern "C" unsigned long g_006682f8;
extern "C" unsigned long g_006682fc;
extern "C" unsigned long g_00668300;
extern "C" unsigned long g_00668304;
extern "C" unsigned long g_00668308;
extern "C" unsigned long g_0066830c;
extern "C" unsigned long g_00668310;
extern "C" unsigned long g_00668314;
extern "C" unsigned long g_00668318;
extern "C" unsigned long g_0066831c;
extern "C" unsigned long g_00668320;
extern "C" unsigned long g_00668324;
extern "C" unsigned long g_00668328;
extern "C" unsigned long g_00668340;
extern "C" unsigned long g_006683de;
extern "C" unsigned long g_0066849a;
extern "C" unsigned long g_00668516;
extern "C" unsigned long g_00668562;
extern "C" unsigned long g_00668564;
extern "C" unsigned long g_00668576;
extern "C" unsigned long g_006685f4;
extern "C" unsigned long g_0066863a;
extern "C" unsigned long g_00668692;
extern "C" unsigned long g_00668694;
extern "C" unsigned long g_006686a4;
extern "C" unsigned long g_00668714;
extern "C" unsigned long g_00668718;
extern "C" unsigned long g_0066871c;
extern "C" unsigned long g_00668720;
extern "C" unsigned long g_00668724;
extern "C" unsigned long g_00668728;
extern "C" unsigned long g_0066872c;
extern "C" unsigned long g_00668730;
extern "C" unsigned long g_00668734;
extern "C" unsigned long g_00668738;
extern "C" unsigned long g_0066873c;
extern "C" unsigned long g_00668740;
extern "C" unsigned long g_00668744;
extern "C" unsigned long g_00668748;
extern "C" unsigned long g_0066874c;
extern "C" unsigned long g_00668750;
extern "C" unsigned long g_00668754;
extern "C" unsigned long g_00668758;
extern "C" unsigned long g_0066875c;
extern "C" unsigned long g_00668760;
extern "C" unsigned long g_00668774;
extern "C" unsigned long g_006687b4;
extern "C" unsigned long g_0066880c;
extern "C" unsigned long g_0066880e;
extern "C" unsigned long g_0066881e;
extern "C" unsigned long g_0066889c;
extern "C" unsigned long g_00668912;
extern "C" unsigned long g_0066893e;
extern "C" unsigned long g_006689fa;
extern "C" unsigned long g_00668a70;
extern "C" unsigned long g_00668a9e;
extern "C" unsigned long g_00668b40;
extern "C" unsigned long g_00668b44;
extern "C" unsigned long g_00668b48;
extern "C" unsigned long g_00668b4c;
extern "C" unsigned long g_00668b50;
extern "C" unsigned long g_00668b54;
extern "C" unsigned long g_00668b58;
extern "C" unsigned long g_00668b5c;
extern "C" unsigned long g_00668b60;
extern "C" unsigned long g_00668b64;
extern "C" unsigned long g_00668b68;
extern "C" unsigned long g_00668b6c;
extern "C" unsigned long g_00668b70;
extern "C" unsigned long g_00668b74;
extern "C" unsigned long g_00668b78;
extern "C" unsigned long g_00668b7c;
extern "C" unsigned long g_00668b80;
extern "C" unsigned long g_00668ba2;
extern "C" unsigned long g_00668bcc;
extern "C" unsigned long g_00668c60;
extern "C" unsigned long g_00668d76;
extern "C" unsigned long g_00668e94;
extern "C" unsigned long g_00668e98;
extern "C" unsigned long g_00668e9c;
extern "C" unsigned long g_00668ea0;
extern "C" unsigned long g_00668ea4;
extern "C" unsigned long g_00668ea8;
extern "C" unsigned long g_00668eac;
extern "C" unsigned long g_00668eb0;
extern "C" unsigned long g_00668eb4;
extern "C" unsigned long g_00668eb8;
extern "C" unsigned long g_00668ebc;
BLNormalWinView::~BLNormalWinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006670ac + g_00667124);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006670de + g_00667128,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLNormalWinView::BLNormalWinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00667238 + 0x6671e0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLNormalWinView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLNormalWinView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLNormalWinPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLNormalWinView::initView();
    ((BLNormalWinPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLNormalWinView*)((int)this));
  }
  return iVar1;
}

void BLNormalWinView::onEnter()
{
  ((BLNormalWinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLNormalWinView::onExit()
{
  ((BLNormalWinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLNormalWinView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

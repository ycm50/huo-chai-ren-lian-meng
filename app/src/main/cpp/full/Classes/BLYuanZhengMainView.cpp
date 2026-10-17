#include "BLYuanZhengMainView.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "BLYuanZhengMainPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b83b4;
extern "C" unsigned long UNK_006b83e6;
extern "C" unsigned long UNK_006b842c;
extern "C" unsigned long UNK_006b8454;
extern "C" unsigned long UNK_006b8724;
extern "C" unsigned long UNK_006b881a;
extern "C" unsigned long UNK_006b891c;
extern "C" unsigned long UNK_006b8952;
extern "C" unsigned long UNK_006b8a6a;
extern "C" unsigned long UNK_006b8abc;
extern "C" unsigned long UNK_006b8b50;
extern "C" unsigned long UNK_006b8b7e;
extern "C" unsigned long UNK_006b8c54;
extern "C" unsigned long UNK_006b8db0;
extern "C" unsigned long UNK_006b8e54;
extern "C" unsigned long UNK_006b8e86;
extern "C" unsigned long UNK_006b8faa;
extern "C" unsigned long UNK_006b90e4;
extern "C" unsigned long UNK_006b912a;
extern "C" unsigned long UNK_006b91f0;
extern "C" unsigned long UNK_006b9292;
extern "C" unsigned long UNK_006b9294;
extern "C" unsigned long UNK_006b92a5;
extern "C" unsigned long UNK_006b939a;
extern "C" unsigned long UNK_006b9474;
extern "C" unsigned long UNK_006b9476;
extern "C" unsigned long UNK_006b9490;
extern "C" unsigned long UNK_006b94f8;
extern "C" unsigned long UNK_006b959e;
extern "C" unsigned long UNK_006b95a2;
extern "C" unsigned long UNK_006b95bc;
extern "C" unsigned long UNK_006b9624;
extern "C" unsigned long UNK_006b96d8;
extern "C" unsigned long UNK_006b9748;
extern "C" unsigned long UNK_006b9812;
extern "C" unsigned long UNK_006b9882;
extern "C" unsigned long UNK_006b999e;
extern "C" unsigned long UNK_006b9a42;
extern "C" unsigned long UNK_006b9aae;
extern "C" unsigned long UNK_006b9ab2;
extern "C" unsigned long UNK_006b9ac4;
extern "C" unsigned long UNK_006b9ac7;
extern "C" unsigned long UNK_006b9aca;
extern "C" unsigned long UNK_006b9b76;
extern "C" unsigned long UNK_006b9d1c;
extern "C" unsigned long UNK_006b9dd4;
extern "C" unsigned long UNK_006b9e66;
extern "C" unsigned long UNK_006b9ef8;
extern "C" unsigned long UNK_006b9f7c;
extern "C" unsigned long UNK_006ba0ee;
extern "C" unsigned long UNK_006ba21e;
extern "C" unsigned long UNK_006ba34a;
extern "C" unsigned long UNK_006ba476;
extern "C" unsigned long UNK_006ba53e;
extern "C" unsigned long UNK_006ba568;
extern "C" unsigned long UNK_006ba6c0;
extern "C" unsigned long UNK_006ba6c2;
extern "C" unsigned long UNK_006ba6ce;
extern "C" unsigned long UNK_006ba6d1;
extern "C" unsigned long UNK_006ba7de;
extern "C" unsigned long UNK_006ba8a4;
extern "C" unsigned long UNK_006ba99e;
extern "C" unsigned long UNK_006ba9a0;
extern "C" unsigned long UNK_006baa00;
extern "C" unsigned long UNK_006baa26;
extern "C" unsigned long UNK_006bab24;
extern "C" unsigned long UNK_006bab26;
extern "C" unsigned long UNK_006bab37;
extern "C" unsigned long UNK_006bab76;
extern "C" unsigned long UNK_006bab9e;
extern "C" unsigned long UNK_006bacac;
extern "C" unsigned long UNK_006bacae;
extern "C" unsigned long UNK_006bacbf;
extern "C" unsigned long UNK_006bacfe;
extern "C" unsigned long UNK_006bad26;
extern "C" unsigned long UNK_006bae48;
extern "C" unsigned long UNK_006bae4a;
extern "C" unsigned long UNK_006bae5d;
extern "C" unsigned long _DAT_006b84f4;
extern "C" unsigned long _DAT_006b84f8;
extern "C" unsigned long _UNK_006b8418;
extern "C" unsigned long _UNK_006b841c;
extern "C" unsigned long _UNK_006b8430;
extern "C" unsigned long _UNK_006b8458;
extern "C" unsigned long _UNK_006b8a88;
extern "C" unsigned long _UNK_006b8a8c;
extern "C" unsigned long _UNK_006b8a90;
extern "C" unsigned long _UNK_006b8a94;
extern "C" unsigned long _UNK_006b8a98;
extern "C" unsigned long _UNK_006b8a9c;
extern "C" unsigned long _UNK_006b8aa0;
extern "C" unsigned long _UNK_006b8aa4;
extern "C" unsigned long _UNK_006b8aa8;
extern "C" unsigned long _UNK_006b8aac;
extern "C" unsigned long _UNK_006b8ab0;
extern "C" unsigned long _UNK_006b8ab4;
extern "C" unsigned long _UNK_006b8eec;
extern "C" unsigned long _UNK_006b8ef0;
extern "C" unsigned long _UNK_006b8ef4;
extern "C" unsigned long _UNK_006b8ef8;
extern "C" unsigned long _UNK_006b8efc;
extern "C" unsigned long _UNK_006b8f00;
extern "C" unsigned long _UNK_006b8f04;
extern "C" unsigned long _UNK_006b8f08;
extern "C" unsigned long _UNK_006b8f0c;
extern "C" unsigned long _UNK_006b8f10;
extern "C" unsigned long _UNK_006b8f14;
extern "C" unsigned long _UNK_006b8f18;
extern "C" unsigned long _UNK_006b8f1c;
extern "C" unsigned long _UNK_006b8f20;
extern "C" unsigned long _UNK_006b9328;
extern "C" unsigned long _UNK_006b932c;
extern "C" unsigned long _UNK_006b9330;
extern "C" unsigned long _UNK_006b9334;
extern "C" unsigned long _UNK_006b9338;
extern "C" unsigned long _UNK_006b933c;
extern "C" unsigned long _UNK_006b9340;
extern "C" unsigned long _UNK_006b9344;
extern "C" unsigned long _UNK_006b9348;
extern "C" unsigned long _UNK_006b934c;
extern "C" unsigned long _UNK_006b9350;
extern "C" unsigned long _UNK_006b9354;
extern "C" unsigned long _UNK_006b9358;
extern "C" unsigned long _UNK_006b935c;
extern "C" unsigned long _UNK_006b9360;
extern "C" unsigned long _UNK_006b9364;
extern "C" unsigned long _UNK_006b9368;
extern "C" unsigned long _UNK_006b9774;
extern "C" unsigned long _UNK_006b9778;
extern "C" unsigned long _UNK_006b977c;
extern "C" unsigned long _UNK_006b9780;
extern "C" unsigned long _UNK_006b9784;
extern "C" unsigned long _UNK_006b9788;
extern "C" unsigned long _UNK_006b978c;
extern "C" unsigned long _UNK_006b9790;
extern "C" unsigned long _UNK_006b9794;
extern "C" unsigned long _UNK_006b9798;
extern "C" unsigned long _UNK_006b979c;
extern "C" unsigned long _UNK_006b97a0;
extern "C" unsigned long _UNK_006b97a4;
extern "C" unsigned long _UNK_006b97a8;
extern "C" unsigned long _UNK_006b97ac;
extern "C" unsigned long _UNK_006b97b0;
extern "C" unsigned long _UNK_006b97b4;
extern "C" unsigned long _UNK_006b97b8;
extern "C" unsigned long _UNK_006b97bc;
extern "C" unsigned long _UNK_006b97c0;
extern "C" unsigned long _UNK_006b97c4;
extern "C" unsigned long _UNK_006b97c8;
extern "C" unsigned long _UNK_006b9bc4;
extern "C" unsigned long _UNK_006b9bc8;
extern "C" unsigned long _UNK_006b9bcc;
extern "C" unsigned long _UNK_006b9bd0;
extern "C" unsigned long _UNK_006b9bd4;
extern "C" unsigned long _UNK_006b9bd8;
extern "C" unsigned long _UNK_006b9bdc;
extern "C" unsigned long _UNK_006b9be0;
extern "C" unsigned long _UNK_006b9be4;
extern "C" unsigned long _UNK_006b9be8;
extern "C" unsigned long _UNK_006b9bec;
extern "C" unsigned long _UNK_006b9bf0;
extern "C" unsigned long _UNK_006b9bf4;
extern "C" unsigned long _UNK_006b9bf8;
extern "C" unsigned long _UNK_006ba06c;
extern "C" unsigned long _UNK_006ba070;
extern "C" unsigned long _UNK_006ba074;
extern "C" unsigned long _UNK_006ba078;
extern "C" unsigned long _UNK_006ba07c;
extern "C" unsigned long _UNK_006ba080;
extern "C" unsigned long _UNK_006ba084;
extern "C" unsigned long _UNK_006ba088;
extern "C" unsigned long _UNK_006ba08c;
extern "C" unsigned long _UNK_006ba090;
extern "C" unsigned long _UNK_006ba094;
extern "C" unsigned long _UNK_006ba098;
extern "C" unsigned long _UNK_006ba09c;
extern "C" unsigned long _UNK_006ba0a0;
extern "C" unsigned long _UNK_006ba0a4;
extern "C" unsigned long _UNK_006ba4d4;
extern "C" unsigned long _UNK_006ba4d8;
extern "C" unsigned long _UNK_006ba4dc;
extern "C" unsigned long _UNK_006ba4e0;
extern "C" unsigned long _UNK_006ba4e4;
extern "C" unsigned long _UNK_006ba4e8;
extern "C" unsigned long _UNK_006ba8d8;
extern "C" unsigned long _UNK_006ba8dc;
extern "C" unsigned long _UNK_006ba8e0;
extern "C" unsigned long _UNK_006ba8e4;
extern "C" unsigned long _UNK_006ba8e8;
extern "C" unsigned long _UNK_006ba8ec;
extern "C" unsigned long _UNK_006ba8f0;
extern "C" unsigned long _UNK_006ba8f4;
extern "C" unsigned long _UNK_006ba8f8;
extern "C" unsigned long _UNK_006ba8fc;
extern "C" unsigned long _UNK_006ba900;
extern "C" unsigned long _UNK_006ba904;
extern "C" unsigned long _UNK_006ba908;
extern "C" unsigned long _UNK_006ba90c;
extern "C" unsigned long _UNK_006ba910;
extern "C" unsigned long _UNK_006ba914;
extern "C" unsigned long _UNK_006ba918;
extern "C" unsigned long _UNK_006ba91c;
extern "C" unsigned long _UNK_006bad38;
extern "C" unsigned long _UNK_006bad3c;
extern "C" unsigned long _UNK_006bad40;
extern "C" unsigned long _UNK_006bad44;
extern "C" unsigned long _UNK_006bad48;
extern "C" unsigned long _UNK_006bad4c;
extern "C" unsigned long _UNK_006bad50;
extern "C" unsigned long _UNK_006bad54;
extern "C" unsigned long _UNK_006bad58;
extern "C" unsigned long _UNK_006bad5c;
extern "C" unsigned long _UNK_006bad60;
extern "C" unsigned long _UNK_006bad64;
extern "C" unsigned long _UNK_006bad68;
extern "C" unsigned long _UNK_006bad6c;
extern "C" unsigned long _UNK_006bad70;
extern "C" unsigned long _UNK_006bad74;
extern "C" unsigned long _UNK_006bad78;
extern "C" unsigned long _UNK_006bad7c;
extern "C" unsigned long _UNK_006bad80;
extern "C" unsigned long _UNK_006bad84;
extern "C" unsigned long _UNK_006bad88;
extern "C" unsigned long _UNK_006bad8c;
extern "C" unsigned long _UNK_006bad90;
extern "C" unsigned long _UNK_006bad94;
extern "C" unsigned long _UNK_006bad98;
extern "C" unsigned long _UNK_006bb034;
extern "C" unsigned long _UNK_006bb038;
extern "C" unsigned long _UNK_006bb03c;
extern "C" unsigned long _UNK_006bb040;
extern "C" unsigned long _UNK_006bb044;
extern "C" unsigned long _UNK_006bb048;
extern "C" unsigned long _UNK_006bb04c;
extern "C" unsigned long _UNK_006bb050;
extern "C" unsigned long _UNK_006bb054;
extern "C" unsigned long _UNK_006bb058;
extern "C" unsigned long _UNK_006bb05c;
extern "C" unsigned long g_006b83b4;
extern "C" unsigned long g_006b83e6;
extern "C" unsigned long g_006b8418;
extern "C" unsigned long g_006b841c;
extern "C" unsigned long g_006b842c;
extern "C" unsigned long g_006b8430;
extern "C" unsigned long g_006b8454;
extern "C" unsigned long g_006b8458;
extern "C" unsigned long g_006b84f4;
extern "C" unsigned long g_006b84f8;
extern "C" unsigned long g_006b8724;
extern "C" unsigned long g_006b881a;
extern "C" unsigned long g_006b891c;
extern "C" unsigned long g_006b8952;
extern "C" unsigned long g_006b8a6a;
extern "C" unsigned long g_006b8a88;
extern "C" unsigned long g_006b8a8c;
extern "C" unsigned long g_006b8a90;
extern "C" unsigned long g_006b8a94;
extern "C" unsigned long g_006b8a98;
extern "C" unsigned long g_006b8a9c;
extern "C" unsigned long g_006b8aa0;
extern "C" unsigned long g_006b8aa4;
extern "C" unsigned long g_006b8aa8;
extern "C" unsigned long g_006b8aac;
extern "C" unsigned long g_006b8ab0;
extern "C" unsigned long g_006b8ab4;
extern "C" unsigned long g_006b8abc;
extern "C" unsigned long g_006b8b50;
extern "C" unsigned long g_006b8b7e;
extern "C" unsigned long g_006b8c54;
extern "C" unsigned long g_006b8db0;
extern "C" unsigned long g_006b8e54;
extern "C" unsigned long g_006b8e86;
extern "C" unsigned long g_006b8eec;
extern "C" unsigned long g_006b8ef0;
extern "C" unsigned long g_006b8ef4;
extern "C" unsigned long g_006b8ef8;
extern "C" unsigned long g_006b8efc;
extern "C" unsigned long g_006b8f00;
extern "C" unsigned long g_006b8f04;
extern "C" unsigned long g_006b8f08;
extern "C" unsigned long g_006b8f0c;
extern "C" unsigned long g_006b8f10;
extern "C" unsigned long g_006b8f14;
extern "C" unsigned long g_006b8f18;
extern "C" unsigned long g_006b8f1c;
extern "C" unsigned long g_006b8f20;
extern "C" unsigned long g_006b8faa;
extern "C" unsigned long g_006b90e4;
extern "C" unsigned long g_006b912a;
extern "C" unsigned long g_006b91f0;
extern "C" unsigned long g_006b9292;
extern "C" unsigned long g_006b9294;
extern "C" unsigned long g_006b92a5;
extern "C" unsigned long g_006b9328;
extern "C" unsigned long g_006b932c;
extern "C" unsigned long g_006b9330;
extern "C" unsigned long g_006b9334;
extern "C" unsigned long g_006b9338;
extern "C" unsigned long g_006b933c;
extern "C" unsigned long g_006b9340;
extern "C" unsigned long g_006b9344;
extern "C" unsigned long g_006b9348;
extern "C" unsigned long g_006b934c;
extern "C" unsigned long g_006b9350;
extern "C" unsigned long g_006b9354;
extern "C" unsigned long g_006b9358;
extern "C" unsigned long g_006b935c;
extern "C" unsigned long g_006b9360;
extern "C" unsigned long g_006b9364;
extern "C" unsigned long g_006b9368;
extern "C" unsigned long g_006b939a;
extern "C" unsigned long g_006b9474;
extern "C" unsigned long g_006b9476;
extern "C" unsigned long g_006b9490;
extern "C" unsigned long g_006b94f8;
extern "C" unsigned long g_006b959e;
extern "C" unsigned long g_006b95a2;
extern "C" unsigned long g_006b95bc;
extern "C" unsigned long g_006b9624;
extern "C" unsigned long g_006b96d8;
extern "C" unsigned long g_006b9748;
extern "C" unsigned long g_006b9774;
extern "C" unsigned long g_006b9778;
extern "C" unsigned long g_006b977c;
extern "C" unsigned long g_006b9780;
extern "C" unsigned long g_006b9784;
extern "C" unsigned long g_006b9788;
extern "C" unsigned long g_006b978c;
extern "C" unsigned long g_006b9790;
extern "C" unsigned long g_006b9794;
extern "C" unsigned long g_006b9798;
extern "C" unsigned long g_006b979c;
extern "C" unsigned long g_006b97a0;
extern "C" unsigned long g_006b97a4;
extern "C" unsigned long g_006b97a8;
extern "C" unsigned long g_006b97ac;
extern "C" unsigned long g_006b97b0;
extern "C" unsigned long g_006b97b4;
extern "C" unsigned long g_006b97b8;
extern "C" unsigned long g_006b97bc;
extern "C" unsigned long g_006b97c0;
extern "C" unsigned long g_006b97c4;
extern "C" unsigned long g_006b97c8;
extern "C" unsigned long g_006b9812;
extern "C" unsigned long g_006b9882;
extern "C" unsigned long g_006b999e;
extern "C" unsigned long g_006b9a42;
extern "C" unsigned long g_006b9aae;
extern "C" unsigned long g_006b9ab2;
extern "C" unsigned long g_006b9ac4;
extern "C" unsigned long g_006b9ac7;
extern "C" unsigned long g_006b9aca;
extern "C" unsigned long g_006b9b76;
extern "C" unsigned long g_006b9bc4;
extern "C" unsigned long g_006b9bc8;
extern "C" unsigned long g_006b9bcc;
extern "C" unsigned long g_006b9bd0;
extern "C" unsigned long g_006b9bd4;
extern "C" unsigned long g_006b9bd8;
extern "C" unsigned long g_006b9bdc;
extern "C" unsigned long g_006b9be0;
extern "C" unsigned long g_006b9be4;
extern "C" unsigned long g_006b9be8;
extern "C" unsigned long g_006b9bec;
extern "C" unsigned long g_006b9bf0;
extern "C" unsigned long g_006b9bf4;
extern "C" unsigned long g_006b9bf8;
extern "C" unsigned long g_006b9d1c;
extern "C" unsigned long g_006b9dd4;
extern "C" unsigned long g_006b9e66;
extern "C" unsigned long g_006b9ef8;
extern "C" unsigned long g_006b9f7c;
extern "C" unsigned long g_006ba06c;
extern "C" unsigned long g_006ba070;
extern "C" unsigned long g_006ba074;
extern "C" unsigned long g_006ba078;
extern "C" unsigned long g_006ba07c;
extern "C" unsigned long g_006ba080;
extern "C" unsigned long g_006ba084;
extern "C" unsigned long g_006ba088;
extern "C" unsigned long g_006ba08c;
extern "C" unsigned long g_006ba090;
extern "C" unsigned long g_006ba094;
extern "C" unsigned long g_006ba098;
extern "C" unsigned long g_006ba09c;
extern "C" unsigned long g_006ba0a0;
extern "C" unsigned long g_006ba0a4;
extern "C" unsigned long g_006ba0ee;
extern "C" unsigned long g_006ba21e;
extern "C" unsigned long g_006ba34a;
extern "C" unsigned long g_006ba476;
extern "C" unsigned long g_006ba4d4;
extern "C" unsigned long g_006ba4d8;
extern "C" unsigned long g_006ba4dc;
extern "C" unsigned long g_006ba4e0;
extern "C" unsigned long g_006ba4e4;
extern "C" unsigned long g_006ba4e8;
extern "C" unsigned long g_006ba53e;
extern "C" unsigned long g_006ba568;
extern "C" unsigned long g_006ba6c0;
extern "C" unsigned long g_006ba6c2;
extern "C" unsigned long g_006ba6ce;
extern "C" unsigned long g_006ba6d1;
extern "C" unsigned long g_006ba7de;
extern "C" unsigned long g_006ba8a4;
extern "C" unsigned long g_006ba8d8;
extern "C" unsigned long g_006ba8dc;
extern "C" unsigned long g_006ba8e0;
extern "C" unsigned long g_006ba8e4;
extern "C" unsigned long g_006ba8e8;
extern "C" unsigned long g_006ba8ec;
extern "C" unsigned long g_006ba8f0;
extern "C" unsigned long g_006ba8f4;
extern "C" unsigned long g_006ba8f8;
extern "C" unsigned long g_006ba8fc;
extern "C" unsigned long g_006ba900;
extern "C" unsigned long g_006ba904;
extern "C" unsigned long g_006ba908;
extern "C" unsigned long g_006ba90c;
extern "C" unsigned long g_006ba910;
extern "C" unsigned long g_006ba914;
extern "C" unsigned long g_006ba918;
extern "C" unsigned long g_006ba91c;
extern "C" unsigned long g_006ba99e;
extern "C" unsigned long g_006ba9a0;
extern "C" unsigned long g_006baa00;
extern "C" unsigned long g_006baa26;
extern "C" unsigned long g_006bab24;
extern "C" unsigned long g_006bab26;
extern "C" unsigned long g_006bab37;
extern "C" unsigned long g_006bab76;
extern "C" unsigned long g_006bab9e;
extern "C" unsigned long g_006bacac;
extern "C" unsigned long g_006bacae;
extern "C" unsigned long g_006bacbf;
extern "C" unsigned long g_006bacfe;
extern "C" unsigned long g_006bad26;
extern "C" unsigned long g_006bad38;
extern "C" unsigned long g_006bad3c;
extern "C" unsigned long g_006bad40;
extern "C" unsigned long g_006bad44;
extern "C" unsigned long g_006bad48;
extern "C" unsigned long g_006bad4c;
extern "C" unsigned long g_006bad50;
extern "C" unsigned long g_006bad54;
extern "C" unsigned long g_006bad58;
extern "C" unsigned long g_006bad5c;
extern "C" unsigned long g_006bad60;
extern "C" unsigned long g_006bad64;
extern "C" unsigned long g_006bad68;
extern "C" unsigned long g_006bad6c;
extern "C" unsigned long g_006bad70;
extern "C" unsigned long g_006bad74;
extern "C" unsigned long g_006bad78;
extern "C" unsigned long g_006bad7c;
extern "C" unsigned long g_006bad80;
extern "C" unsigned long g_006bad84;
extern "C" unsigned long g_006bad88;
extern "C" unsigned long g_006bad8c;
extern "C" unsigned long g_006bad90;
extern "C" unsigned long g_006bad94;
extern "C" unsigned long g_006bad98;
extern "C" unsigned long g_006bae48;
extern "C" unsigned long g_006bae4a;
extern "C" unsigned long g_006bae5d;
extern "C" unsigned long g_006bb034;
extern "C" unsigned long g_006bb038;
extern "C" unsigned long g_006bb03c;
extern "C" unsigned long g_006bb040;
extern "C" unsigned long g_006bb044;
extern "C" unsigned long g_006bb048;
extern "C" unsigned long g_006bb04c;
extern "C" unsigned long g_006bb050;
extern "C" unsigned long g_006bb054;
extern "C" unsigned long g_006bb058;
extern "C" unsigned long g_006bb05c;
cocos2d::CCSprite* BLYuanZhengMainView::getSpPaoChe() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x108));
}

void BLYuanZhengMainView::setSpPaoChe(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLYuanZhengMainView::getSpPaoCheTX() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x10c));
}

void BLYuanZhengMainView::setSpPaoCheTX(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

BLVirtualItemView* BLYuanZhengMainView::getVirtualItemDiamond() const
{
  return (BLVirtualItemView*)(*(undefined4 *)(((int)this) + 400));
}

BLYuanZhengMainView::~BLYuanZhengMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b83b4 + g_006b8418);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x25c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b83e6 + g_006b841c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengMainView::BLYuanZhengMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b84f4 + 0x6b849c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x25c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLYuanZhengMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLYuanZhengMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x194)));
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

undefined4 BLYuanZhengMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLYuanZhengMainView::getBtnAddCount()
{
  return *(undefined4 *)(((int)this) + 0x16c);
}

undefined4 BLYuanZhengMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLYuanZhengMainView::getBtnRest()
{
  return *(undefined4 *)(((int)this) + 0x168);
}

undefined4 BLYuanZhengMainView::getBtnSearch()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLYuanZhengMainView::getBtnXiJi()
{
  return *(undefined4 *)(((int)this) + 0x15c);
}

undefined4 BLYuanZhengMainView::getBtnZhanChe()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLYuanZhengMainView::getBtnZhanChePeiZhi()
{
  return *(undefined4 *)(((int)this) + 0x164);
}

undefined4 BLYuanZhengMainView::getLabelAddCounter()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLYuanZhengMainView::getLabelattrack()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLYuanZhengMainView::getLabelblood()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLYuanZhengMainView::getLabeldefence()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLYuanZhengMainView::getLabelHeroBattle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLYuanZhengMainView::getLabelMonsterattrack()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLYuanZhengMainView::getLabelMonsterBattle()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLYuanZhengMainView::getLabelMonsterdefence()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLYuanZhengMainView::getLabelMonsterDrop()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLYuanZhengMainView::getLabelMonsterlevel()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLYuanZhengMainView::getLabelMonsterspeed()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLYuanZhengMainView::getLabelRank()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLYuanZhengMainView::getLabelspeed()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLYuanZhengMainView::getLabelTip()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLYuanZhengMainView::getLabelMonsterblood()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLYuanZhengMainView::getLabelName()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLYuanZhengMainView::getSpMonster()
{
  return *(undefined4 *)(((int)this) + 0x170);
}

undefined4 BLYuanZhengMainView::getBtnAbout()
{
  return *(undefined4 *)(((int)this) + 0x178);
}

undefined4 BLYuanZhengMainView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x17c);
}

undefined4 BLYuanZhengMainView::getSpsearchBg()
{
  return *(undefined4 *)(((int)this) + 0x184);
}

undefined4 BLYuanZhengMainView::getSpxijitbg()
{
  return *(undefined4 *)(((int)this) + 0x180);
}

undefined4 BLYuanZhengMainView::getSpserach()
{
  return *(undefined4 *)(((int)this) + 0x188);
}

undefined4 BLYuanZhengMainView::getSpZhanChe()
{
  return *(undefined4 *)(((int)this) + 0x18c);
}

void BLYuanZhengMainView::onEnter()
{
  ((BLYuanZhengMainPresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLYuanZhengMainView::onExit()
{
  ((BLYuanZhengMainPresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLYuanZhengMainView::setVirtualItemDiamond(BLVirtualItemView* p1)
{
  *(undefined4 *)(((int)this) + 400) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool BLYuanZhengMainView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

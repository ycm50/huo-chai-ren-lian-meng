#include "BLFurnacePresenter.h"
#include "CCGeometry.h"
#include "CCSprite.h"
#include "CCDictionary.h"
#include "rapidjson.h"
#include "document.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "HttpResponse.h"
#include "CCArray.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLFurnaceBreakLayer.h"
#include "BLFurnaceEquipLayer.h"
#include "BLFurnaceExchangeItemButton.h"
#include "BLFurnaceExchangeLayer.h"
#include "BLFurnaceItemInSlot.h"
#include "BLFurnaceSelectPresenter.h"
#include "BLFurnaceSelectView.h"
#include "BLFurnaceView.h"
#include "BLGameScene.h"
#include "BLGridView.h"
#include "BLItemDataInfoDownPresenter.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "ItemInfo_.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
#include "StringJsonManager.h"
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
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e754(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005355f8;
extern "C" unsigned long UNK_00535610;
extern "C" unsigned long UNK_00535628;
extern "C" unsigned long UNK_00535640;
extern "C" unsigned long UNK_00535668;
extern "C" unsigned long UNK_00535680;
extern "C" unsigned long UNK_0053572c;
extern "C" unsigned long UNK_0053573e;
extern "C" unsigned long UNK_00535746;
extern "C" unsigned long UNK_00535774;
extern "C" unsigned long UNK_0053583c;
extern "C" unsigned long UNK_00535846;
extern "C" unsigned long UNK_00535848;
extern "C" unsigned long UNK_0053584a;
extern "C" unsigned long UNK_005358c6;
extern "C" unsigned long UNK_005358dc;
extern "C" unsigned long UNK_00535900;
extern "C" unsigned long UNK_00535928;
extern "C" unsigned long UNK_0053593d;
extern "C" unsigned long UNK_00535b34;
extern "C" unsigned long UNK_00535b36;
extern "C" unsigned long UNK_00535b60;
extern "C" unsigned long UNK_00535b75;
extern "C" unsigned long UNK_00535bda;
extern "C" unsigned long UNK_00535c14;
extern "C" unsigned long UNK_00535c22;
extern "C" unsigned long UNK_00535c38;
extern "C" unsigned long UNK_00535c8e;
extern "C" unsigned long UNK_00535d60;
extern "C" unsigned long UNK_00535d9a;
extern "C" unsigned long UNK_00535e66;
extern "C" unsigned long UNK_00535e68;
extern "C" unsigned long UNK_00535ec2;
extern "C" unsigned long UNK_00535ed2;
extern "C" unsigned long UNK_00535ed6;
extern "C" unsigned long UNK_00535eec;
extern "C" unsigned long UNK_00535f1a;
extern "C" unsigned long UNK_00535f26;
extern "C" unsigned long UNK_00535f78;
extern "C" unsigned long UNK_0053601a;
extern "C" unsigned long UNK_005360e4;
extern "C" unsigned long UNK_005361ee;
extern "C" unsigned long UNK_00536374;
extern "C" unsigned long UNK_0053638c;
extern "C" unsigned long UNK_005363c0;
extern "C" unsigned long UNK_00536564;
extern "C" unsigned long UNK_0053676c;
extern "C" unsigned long UNK_0053676e;
extern "C" unsigned long UNK_0053682c;
extern "C" unsigned long UNK_0053697a;
extern "C" unsigned long UNK_00536a88;
extern "C" unsigned long UNK_00536a8c;
extern "C" unsigned long UNK_00536c0e;
extern "C" unsigned long UNK_00536c10;
extern "C" unsigned long UNK_00536c76;
extern "C" unsigned long UNK_00536caa;
extern "C" unsigned long UNK_00536cac;
extern "C" unsigned long UNK_00536ccb;
extern "C" unsigned long UNK_00536d0e;
extern "C" unsigned long UNK_00536d10;
extern "C" unsigned long UNK_00536d29;
extern "C" unsigned long UNK_00536d80;
extern "C" unsigned long UNK_00536d82;
extern "C" unsigned long UNK_00536db2;
extern "C" unsigned long UNK_00536db4;
extern "C" unsigned long UNK_00536dca;
extern "C" unsigned long UNK_00536dcc;
extern "C" unsigned long UNK_00536e8c;
extern "C" unsigned long UNK_00536ef4;
extern "C" unsigned long UNK_00536f5c;
extern "C" unsigned long UNK_00536f86;
extern "C" unsigned long UNK_00536fe4;
extern "C" unsigned long UNK_0053700c;
extern "C" unsigned long UNK_0053701e;
extern "C" unsigned long UNK_0053704e;
extern "C" unsigned long UNK_0053713c;
extern "C" unsigned long UNK_0053713d;
extern "C" unsigned long UNK_0053713e;
extern "C" unsigned long UNK_00537154;
extern "C" unsigned long UNK_0053729a;
extern "C" unsigned long UNK_0053729b;
extern "C" unsigned long UNK_0053729c;
extern "C" unsigned long UNK_005372c2;
extern "C" unsigned long UNK_005373c8;
extern "C" unsigned long UNK_005373cc;
extern "C" unsigned long UNK_00537402;
extern "C" unsigned long UNK_0053743a;
extern "C" unsigned long UNK_0053747c;
extern "C" unsigned long UNK_00537552;
extern "C" unsigned long UNK_00537554;
extern "C" unsigned long UNK_00537666;
extern "C" unsigned long UNK_005376de;
extern "C" unsigned long UNK_005376e0;
extern "C" unsigned long UNK_00537814;
extern "C" unsigned long UNK_00537816;
extern "C" unsigned long UNK_00537a2c;
extern "C" unsigned long UNK_00537aca;
extern "C" unsigned long UNK_00537ace;
extern "C" unsigned long UNK_00537b04;
extern "C" unsigned long UNK_00537b50;
extern "C" unsigned long UNK_00537b54;
extern "C" unsigned long UNK_00537b6c;
extern "C" unsigned long UNK_00537b7c;
extern "C" unsigned long UNK_00537b8a;
extern "C" unsigned long UNK_00537c0e;
extern "C" unsigned long UNK_00537c16;
extern "C" unsigned long UNK_00537c26;
extern "C" unsigned long UNK_00537c28;
extern "C" unsigned long UNK_00537c9c;
extern "C" unsigned long UNK_00537d22;
extern "C" unsigned long UNK_00537de0;
extern "C" unsigned long UNK_00537e28;
extern "C" unsigned long UNK_00537e5a;
extern "C" unsigned long UNK_00537e88;
extern "C" unsigned long UNK_00537f54;
extern "C" unsigned long UNK_00537f9c;
extern "C" unsigned long UNK_00537fdc;
extern "C" unsigned long UNK_0053800a;
extern "C" unsigned long UNK_005380f4;
extern "C" unsigned long UNK_005380f8;
extern "C" unsigned long UNK_0053810c;
extern "C" unsigned long UNK_00538138;
extern "C" unsigned long UNK_00538144;
extern "C" unsigned long UNK_00538196;
extern "C" unsigned long UNK_00538230;
extern "C" unsigned long UNK_005382cc;
extern "C" unsigned long UNK_005382da;
extern "C" unsigned long UNK_005382ea;
extern "C" unsigned long UNK_005382ec;
extern "C" unsigned long UNK_0053832a;
extern "C" unsigned long UNK_0053833c;
extern "C" unsigned long UNK_00538344;
extern "C" unsigned long UNK_005383a6;
extern "C" unsigned long UNK_005383d6;
extern "C" unsigned long UNK_005383f4;
extern "C" unsigned long UNK_00538468;
extern "C" unsigned long UNK_005384d0;
extern "C" unsigned long UNK_0053869c;
extern "C" unsigned long UNK_0053869d;
extern "C" unsigned long UNK_0053869e;
extern "C" unsigned long UNK_005386b2;
extern "C" unsigned long UNK_005389a0;
extern "C" unsigned long UNK_00538a0e;
extern "C" unsigned long UNK_00538a22;
extern "C" unsigned long UNK_00538a32;
extern "C" unsigned long UNK_00538a76;
extern "C" unsigned long UNK_00538a82;
extern "C" unsigned long UNK_00538a90;
extern "C" unsigned long UNK_00538ab0;
extern "C" unsigned long UNK_00538b56;
extern "C" unsigned long UNK_00538b78;
extern "C" unsigned long UNK_00538c86;
extern "C" unsigned long UNK_00538c90;
extern "C" unsigned long UNK_00538d90;
extern "C" unsigned long UNK_00538d9a;
extern "C" unsigned long _UNK_005355fc;
extern "C" unsigned long _UNK_00535614;
extern "C" unsigned long _UNK_0053562c;
extern "C" unsigned long _UNK_00535644;
extern "C" unsigned long _UNK_0053566c;
extern "C" unsigned long _UNK_00535684;
extern "C" unsigned long _UNK_005356f0;
extern "C" unsigned long _UNK_00535704;
extern "C" unsigned long _UNK_0053571c;
extern "C" unsigned long _UNK_00535730;
extern "C" unsigned long _UNK_005359d4;
extern "C" unsigned long _UNK_005359d8;
extern "C" unsigned long _UNK_005359dc;
extern "C" unsigned long _UNK_005359e0;
extern "C" unsigned long _UNK_005359e4;
extern "C" unsigned long _UNK_005359e8;
extern "C" unsigned long _UNK_005359ec;
extern "C" unsigned long _UNK_005359f0;
extern "C" unsigned long _UNK_005359f4;
extern "C" unsigned long _UNK_005359f8;
extern "C" unsigned long _UNK_005359fc;
extern "C" unsigned long _UNK_00535a00;
extern "C" unsigned long _UNK_00535a04;
extern "C" unsigned long _UNK_00535a08;
extern "C" unsigned long _UNK_00535a0c;
extern "C" unsigned long _UNK_00535a10;
extern "C" unsigned long _UNK_00535dd0;
extern "C" unsigned long _UNK_00535dd4;
extern "C" unsigned long _UNK_00535dd8;
extern "C" unsigned long _UNK_00535ddc;
extern "C" unsigned long _UNK_00535de0;
extern "C" unsigned long _UNK_00535de4;
extern "C" unsigned long _UNK_00535de8;
extern "C" unsigned long _UNK_00535dec;
extern "C" unsigned long _UNK_00535df0;
extern "C" unsigned long _UNK_00535df4;
extern "C" unsigned long _UNK_00535df8;
extern "C" unsigned long _UNK_00535dfc;
extern "C" unsigned long _UNK_00535e00;
extern "C" unsigned long _UNK_00535e04;
extern "C" unsigned long _UNK_00535e08;
extern "C" unsigned long _UNK_00535e0c;
extern "C" unsigned long _UNK_00535e10;
extern "C" unsigned long _UNK_00535e14;
extern "C" unsigned long _UNK_00535e18;
extern "C" unsigned long _UNK_00535e1c;
extern "C" unsigned long _UNK_00535e20;
extern "C" unsigned long _UNK_00535e24;
extern "C" unsigned long _UNK_00535e28;
extern "C" unsigned long _UNK_00535fe4;
extern "C" unsigned long _UNK_00535fe8;
extern "C" unsigned long _UNK_00535fec;
extern "C" unsigned long _UNK_00535ff0;
extern "C" unsigned long _UNK_00535ff4;
extern "C" unsigned long _UNK_00535ff8;
extern "C" unsigned long _UNK_00535ffc;
extern "C" unsigned long _UNK_00536000;
extern "C" unsigned long _UNK_00536004;
extern "C" unsigned long _UNK_00536008;
extern "C" unsigned long _UNK_0053633c;
extern "C" unsigned long _UNK_00536340;
extern "C" unsigned long _UNK_00536344;
extern "C" unsigned long _UNK_00536348;
extern "C" unsigned long _UNK_0053634c;
extern "C" unsigned long _UNK_00536350;
extern "C" unsigned long _UNK_00536354;
extern "C" unsigned long _UNK_00536358;
extern "C" unsigned long _UNK_0053635c;
extern "C" unsigned long _UNK_00536360;
extern "C" unsigned long _UNK_00536364;
extern "C" unsigned long _UNK_00536378;
extern "C" unsigned long _UNK_005363ac;
extern "C" unsigned long _UNK_00536548;
extern "C" unsigned long _UNK_0053654c;
extern "C" unsigned long _UNK_00536550;
extern "C" unsigned long _UNK_00536554;
extern "C" unsigned long _UNK_00536708;
extern "C" unsigned long _UNK_0053670c;
extern "C" unsigned long _UNK_00536710;
extern "C" unsigned long _UNK_00536714;
extern "C" unsigned long _UNK_00536818;
extern "C" unsigned long _UNK_0053681c;
extern "C" unsigned long _UNK_00536b54;
extern "C" unsigned long _UNK_00536b58;
extern "C" unsigned long _UNK_00536b5c;
extern "C" unsigned long _UNK_00536b60;
extern "C" unsigned long _UNK_00536b64;
extern "C" unsigned long _UNK_00536b68;
extern "C" unsigned long _UNK_00536b6c;
extern "C" unsigned long _UNK_00536b70;
extern "C" unsigned long _UNK_00536b74;
extern "C" unsigned long _UNK_00536b78;
extern "C" unsigned long _UNK_00536b7c;
extern "C" unsigned long _UNK_00536b80;
extern "C" unsigned long _UNK_00536b84;
extern "C" unsigned long _UNK_00536b88;
extern "C" unsigned long _UNK_00536b8c;
extern "C" unsigned long _UNK_00536bd8;
extern "C" unsigned long _UNK_00536c50;
extern "C" unsigned long _UNK_00536c54;
extern "C" unsigned long _UNK_00536cc8;
extern "C" unsigned long _UNK_00536ccc;
extern "C" unsigned long _UNK_00536cd0;
extern "C" unsigned long _UNK_00536cd4;
extern "C" unsigned long _UNK_00536cd8;
extern "C" unsigned long _UNK_00536cdc;
extern "C" unsigned long _UNK_00536d2c;
extern "C" unsigned long _UNK_00536d30;
extern "C" unsigned long _UNK_00536d34;
extern "C" unsigned long _UNK_00536d38;
extern "C" unsigned long _UNK_00536d3c;
extern "C" unsigned long _UNK_00536d8c;
extern "C" unsigned long _UNK_00536d90;
extern "C" unsigned long _UNK_00536e30;
extern "C" unsigned long _UNK_00536e34;
extern "C" unsigned long _UNK_00536e38;
extern "C" unsigned long _UNK_00536e3c;
extern "C" unsigned long _UNK_00536f28;
extern "C" unsigned long _UNK_00536f2c;
extern "C" unsigned long _UNK_00536fd0;
extern "C" unsigned long _UNK_00536fd4;
extern "C" unsigned long _UNK_00536fe8;
extern "C" unsigned long _UNK_00537010;
extern "C" unsigned long _UNK_00537310;
extern "C" unsigned long _UNK_00537314;
extern "C" unsigned long _UNK_00537318;
extern "C" unsigned long _UNK_0053731c;
extern "C" unsigned long _UNK_00537320;
extern "C" unsigned long _UNK_00537324;
extern "C" unsigned long _UNK_00537328;
extern "C" unsigned long _UNK_0053732c;
extern "C" unsigned long _UNK_00537330;
extern "C" unsigned long _UNK_00537334;
extern "C" unsigned long _UNK_00537528;
extern "C" unsigned long _UNK_0053752c;
extern "C" unsigned long _UNK_00537530;
extern "C" unsigned long _UNK_00537534;
extern "C" unsigned long _UNK_00537538;
extern "C" unsigned long _UNK_0053753c;
extern "C" unsigned long _UNK_005375a8;
extern "C" unsigned long _UNK_005375ac;
extern "C" unsigned long _UNK_0053777c;
extern "C" unsigned long _UNK_00537780;
extern "C" unsigned long _UNK_00537784;
extern "C" unsigned long _UNK_0053796c;
extern "C" unsigned long _UNK_00537970;
extern "C" unsigned long _UNK_00537bd8;
extern "C" unsigned long _UNK_00537bdc;
extern "C" unsigned long _UNK_00537be0;
extern "C" unsigned long _UNK_00537be4;
extern "C" unsigned long _UNK_00537be8;
extern "C" unsigned long _UNK_00537bec;
extern "C" unsigned long _UNK_00537bf0;
extern "C" unsigned long _UNK_00537bf4;
extern "C" unsigned long _UNK_00537bf8;
extern "C" unsigned long _UNK_00537c44;
extern "C" unsigned long _UNK_00537c48;
extern "C" unsigned long _UNK_00537c4c;
extern "C" unsigned long _UNK_00537c50;
extern "C" unsigned long _UNK_00537db8;
extern "C" unsigned long _UNK_00537dbc;
extern "C" unsigned long _UNK_00537dc0;
extern "C" unsigned long _UNK_00537dc4;
extern "C" unsigned long _UNK_00537f04;
extern "C" unsigned long _UNK_00537f08;
extern "C" unsigned long _UNK_00537f0c;
extern "C" unsigned long _UNK_00537f10;
extern "C" unsigned long _UNK_00537f38;
extern "C" unsigned long _UNK_00538088;
extern "C" unsigned long _UNK_0053808c;
extern "C" unsigned long _UNK_00538090;
extern "C" unsigned long _UNK_00538094;
extern "C" unsigned long _UNK_00538098;
extern "C" unsigned long _UNK_0053809c;
extern "C" unsigned long _UNK_005382a4;
extern "C" unsigned long _UNK_005382a8;
extern "C" unsigned long _UNK_005382ac;
extern "C" unsigned long _UNK_005382b0;
extern "C" unsigned long _UNK_005382b4;
extern "C" unsigned long _UNK_005382b8;
extern "C" unsigned long _UNK_005382bc;
extern "C" unsigned long _UNK_0053830c;
extern "C" unsigned long _UNK_00538310;
extern "C" unsigned long _UNK_00538314;
extern "C" unsigned long _UNK_00538318;
extern "C" unsigned long _UNK_005386b8;
extern "C" unsigned long _UNK_005386bc;
extern "C" unsigned long _UNK_005386c0;
extern "C" unsigned long _UNK_005386c4;
extern "C" unsigned long _UNK_005386c8;
extern "C" unsigned long _UNK_005386cc;
extern "C" unsigned long _UNK_005386d0;
extern "C" unsigned long _UNK_005386d4;
extern "C" unsigned long _UNK_005386d8;
extern "C" unsigned long _UNK_005386dc;
extern "C" unsigned long _UNK_005386e0;
extern "C" unsigned long _UNK_005386e4;
extern "C" unsigned long _UNK_005386e8;
extern "C" unsigned long _UNK_005386ec;
extern "C" unsigned long _UNK_005386f0;
extern "C" unsigned long _UNK_005386f4;
extern "C" unsigned long _UNK_00538bf8;
extern "C" unsigned long _UNK_00538bfc;
extern "C" unsigned long _UNK_00538c00;
extern "C" unsigned long _UNK_00538c04;
extern "C" unsigned long _UNK_00538c08;
extern "C" unsigned long _UNK_00538c0c;
extern "C" unsigned long _UNK_00538c10;
extern "C" unsigned long _UNK_00538c14;
extern "C" unsigned long _UNK_00538c18;
extern "C" unsigned long _UNK_00538c1c;
extern "C" unsigned long _UNK_00538c20;
extern "C" unsigned long _UNK_00538cd0;
extern "C" unsigned long _UNK_00538cd4;
extern "C" unsigned long _UNK_00538ddc;
extern "C" unsigned long _UNK_00538de0;
extern "C" unsigned long g_005355f8;
extern "C" unsigned long g_005355fc;
extern "C" unsigned long g_00535610;
extern "C" unsigned long g_00535614;
extern "C" unsigned long g_00535628;
extern "C" unsigned long g_0053562c;
extern "C" unsigned long g_00535640;
extern "C" unsigned long g_00535644;
extern "C" unsigned long g_00535668;
extern "C" unsigned long g_0053566c;
extern "C" unsigned long g_00535680;
extern "C" unsigned long g_00535684;
extern "C" unsigned long g_005356f0;
extern "C" unsigned long g_00535704;
extern "C" unsigned long g_0053571c;
extern "C" unsigned long g_0053572c;
extern "C" unsigned long g_00535730;
extern "C" unsigned long g_0053573e;
extern "C" unsigned long g_00535746;
extern "C" unsigned long g_00535774;
extern "C" unsigned long g_0053583c;
extern "C" unsigned long g_00535846;
extern "C" unsigned long g_00535848;
extern "C" unsigned long g_0053584a;
extern "C" unsigned long g_005358c6;
extern "C" unsigned long g_005358dc;
extern "C" unsigned long g_00535900;
extern "C" unsigned long g_00535928;
extern "C" unsigned long g_0053593d;
extern "C" unsigned long g_005359d4;
extern "C" unsigned long g_005359d8;
extern "C" unsigned long g_005359dc;
extern "C" unsigned long g_005359e0;
extern "C" unsigned long g_005359e4;
extern "C" unsigned long g_005359e8;
extern "C" unsigned long g_005359ec;
extern "C" unsigned long g_005359f0;
extern "C" unsigned long g_005359f4;
extern "C" unsigned long g_005359f8;
extern "C" unsigned long g_005359fc;
extern "C" unsigned long g_00535a00;
extern "C" unsigned long g_00535a04;
extern "C" unsigned long g_00535a08;
extern "C" unsigned long g_00535a0c;
extern "C" unsigned long g_00535a10;
extern "C" unsigned long g_00535b34;
extern "C" unsigned long g_00535b36;
extern "C" unsigned long g_00535b60;
extern "C" unsigned long g_00535b75;
extern "C" unsigned long g_00535bda;
extern "C" unsigned long g_00535c14;
extern "C" unsigned long g_00535c22;
extern "C" unsigned long g_00535c38;
extern "C" unsigned long g_00535c8e;
extern "C" unsigned long g_00535d60;
extern "C" unsigned long g_00535d9a;
extern "C" unsigned long g_00535dd0;
extern "C" unsigned long g_00535dd4;
extern "C" unsigned long g_00535dd8;
extern "C" unsigned long g_00535ddc;
extern "C" unsigned long g_00535de0;
extern "C" unsigned long g_00535de4;
extern "C" unsigned long g_00535de8;
extern "C" unsigned long g_00535dec;
extern "C" unsigned long g_00535df0;
extern "C" unsigned long g_00535df4;
extern "C" unsigned long g_00535df8;
extern "C" unsigned long g_00535dfc;
extern "C" unsigned long g_00535e00;
extern "C" unsigned long g_00535e04;
extern "C" unsigned long g_00535e08;
extern "C" unsigned long g_00535e0c;
extern "C" unsigned long g_00535e10;
extern "C" unsigned long g_00535e14;
extern "C" unsigned long g_00535e18;
extern "C" unsigned long g_00535e1c;
extern "C" unsigned long g_00535e20;
extern "C" unsigned long g_00535e24;
extern "C" unsigned long g_00535e28;
extern "C" unsigned long g_00535e66;
extern "C" unsigned long g_00535e68;
extern "C" unsigned long g_00535ec2;
extern "C" unsigned long g_00535ed2;
extern "C" unsigned long g_00535ed6;
extern "C" unsigned long g_00535eec;
extern "C" unsigned long g_00535f1a;
extern "C" unsigned long g_00535f26;
extern "C" unsigned long g_00535f78;
extern "C" unsigned long g_00535fe4;
extern "C" unsigned long g_00535fe8;
extern "C" unsigned long g_00535fec;
extern "C" unsigned long g_00535ff0;
extern "C" unsigned long g_00535ff4;
extern "C" unsigned long g_00535ff8;
extern "C" unsigned long g_00535ffc;
extern "C" unsigned long g_00536000;
extern "C" unsigned long g_00536004;
extern "C" unsigned long g_00536008;
extern "C" unsigned long g_0053601a;
extern "C" unsigned long g_005360e4;
extern "C" unsigned long g_005361ee;
extern "C" unsigned long g_0053633c;
extern "C" unsigned long g_00536340;
extern "C" unsigned long g_00536344;
extern "C" unsigned long g_00536348;
extern "C" unsigned long g_0053634c;
extern "C" unsigned long g_00536350;
extern "C" unsigned long g_00536354;
extern "C" unsigned long g_00536358;
extern "C" unsigned long g_0053635c;
extern "C" unsigned long g_00536360;
extern "C" unsigned long g_00536364;
extern "C" unsigned long g_00536374;
extern "C" unsigned long g_00536378;
extern "C" unsigned long g_0053638c;
extern "C" unsigned long g_005363ac;
extern "C" unsigned long g_005363c0;
extern "C" unsigned long g_00536548;
extern "C" unsigned long g_0053654c;
extern "C" unsigned long g_00536550;
extern "C" unsigned long g_00536554;
extern "C" unsigned long g_00536564;
extern "C" unsigned long g_00536708;
extern "C" unsigned long g_0053670c;
extern "C" unsigned long g_00536710;
extern "C" unsigned long g_00536714;
extern "C" unsigned long g_0053676c;
extern "C" unsigned long g_0053676e;
extern "C" unsigned long g_00536818;
extern "C" unsigned long g_0053681c;
extern "C" unsigned long g_0053682c;
extern "C" unsigned long g_0053697a;
extern "C" unsigned long g_00536a88;
extern "C" unsigned long g_00536a8c;
extern "C" unsigned long g_00536b54;
extern "C" unsigned long g_00536b58;
extern "C" unsigned long g_00536b5c;
extern "C" unsigned long g_00536b60;
extern "C" unsigned long g_00536b64;
extern "C" unsigned long g_00536b68;
extern "C" unsigned long g_00536b6c;
extern "C" unsigned long g_00536b70;
extern "C" unsigned long g_00536b74;
extern "C" unsigned long g_00536b78;
extern "C" unsigned long g_00536b7c;
extern "C" unsigned long g_00536b80;
extern "C" unsigned long g_00536b84;
extern "C" unsigned long g_00536b88;
extern "C" unsigned long g_00536b8c;
extern "C" unsigned long g_00536bd8;
extern "C" unsigned long g_00536c0e;
extern "C" unsigned long g_00536c10;
extern "C" unsigned long g_00536c50;
extern "C" unsigned long g_00536c54;
extern "C" unsigned long g_00536c76;
extern "C" unsigned long g_00536caa;
extern "C" unsigned long g_00536cac;
extern "C" unsigned long g_00536cc8;
extern "C" unsigned long g_00536ccb;
extern "C" unsigned long g_00536ccc;
extern "C" unsigned long g_00536cd0;
extern "C" unsigned long g_00536cd4;
extern "C" unsigned long g_00536cd8;
extern "C" unsigned long g_00536cdc;
extern "C" unsigned long g_00536d0e;
extern "C" unsigned long g_00536d10;
extern "C" unsigned long g_00536d29;
extern "C" unsigned long g_00536d2c;
extern "C" unsigned long g_00536d30;
extern "C" unsigned long g_00536d34;
extern "C" unsigned long g_00536d38;
extern "C" unsigned long g_00536d3c;
extern "C" unsigned long g_00536d80;
extern "C" unsigned long g_00536d82;
extern "C" unsigned long g_00536d8c;
extern "C" unsigned long g_00536d90;
extern "C" unsigned long g_00536db2;
extern "C" unsigned long g_00536db4;
extern "C" unsigned long g_00536dca;
extern "C" unsigned long g_00536dcc;
extern "C" unsigned long g_00536e30;
extern "C" unsigned long g_00536e34;
extern "C" unsigned long g_00536e38;
extern "C" unsigned long g_00536e3c;
extern "C" unsigned long g_00536e8c;
extern "C" unsigned long g_00536ef4;
extern "C" unsigned long g_00536f28;
extern "C" unsigned long g_00536f2c;
extern "C" unsigned long g_00536f5c;
extern "C" unsigned long g_00536f86;
extern "C" unsigned long g_00536fd0;
extern "C" unsigned long g_00536fd4;
extern "C" unsigned long g_00536fe4;
extern "C" unsigned long g_00536fe8;
extern "C" unsigned long g_0053700c;
extern "C" unsigned long g_00537010;
extern "C" unsigned long g_0053701e;
extern "C" unsigned long g_0053704e;
extern "C" unsigned long g_0053713c;
extern "C" unsigned long g_0053713d;
extern "C" unsigned long g_0053713e;
extern "C" unsigned long g_00537154;
extern "C" unsigned long g_0053729a;
extern "C" unsigned long g_0053729b;
extern "C" unsigned long g_0053729c;
extern "C" unsigned long g_005372c2;
extern "C" unsigned long g_00537310;
extern "C" unsigned long g_00537314;
extern "C" unsigned long g_00537318;
extern "C" unsigned long g_0053731c;
extern "C" unsigned long g_00537320;
extern "C" unsigned long g_00537324;
extern "C" unsigned long g_00537328;
extern "C" unsigned long g_0053732c;
extern "C" unsigned long g_00537330;
extern "C" unsigned long g_00537334;
extern "C" unsigned long g_005373c8;
extern "C" unsigned long g_005373cc;
extern "C" unsigned long g_00537402;
extern "C" unsigned long g_0053743a;
extern "C" unsigned long g_0053747c;
extern "C" unsigned long g_00537528;
extern "C" unsigned long g_0053752c;
extern "C" unsigned long g_00537530;
extern "C" unsigned long g_00537534;
extern "C" unsigned long g_00537538;
extern "C" unsigned long g_0053753c;
extern "C" unsigned long g_00537552;
extern "C" unsigned long g_00537554;
extern "C" unsigned long g_005375a8;
extern "C" unsigned long g_005375ac;
extern "C" unsigned long g_00537666;
extern "C" unsigned long g_005376de;
extern "C" unsigned long g_005376e0;
extern "C" unsigned long g_0053777c;
extern "C" unsigned long g_00537780;
extern "C" unsigned long g_00537784;
extern "C" unsigned long g_00537814;
extern "C" unsigned long g_00537816;
extern "C" unsigned long g_0053796c;
extern "C" unsigned long g_00537970;
extern "C" unsigned long g_00537a2c;
extern "C" unsigned long g_00537aca;
extern "C" unsigned long g_00537ace;
extern "C" unsigned long g_00537b04;
extern "C" unsigned long g_00537b50;
extern "C" unsigned long g_00537b54;
extern "C" unsigned long g_00537b6c;
extern "C" unsigned long g_00537b7c;
extern "C" unsigned long g_00537b8a;
extern "C" unsigned long g_00537bd8;
extern "C" unsigned long g_00537bdc;
extern "C" unsigned long g_00537be0;
extern "C" unsigned long g_00537be4;
extern "C" unsigned long g_00537be8;
extern "C" unsigned long g_00537bec;
extern "C" unsigned long g_00537bf0;
extern "C" unsigned long g_00537bf4;
extern "C" unsigned long g_00537bf8;
extern "C" unsigned long g_00537c0e;
extern "C" unsigned long g_00537c16;
extern "C" unsigned long g_00537c26;
extern "C" unsigned long g_00537c28;
extern "C" unsigned long g_00537c44;
extern "C" unsigned long g_00537c48;
extern "C" unsigned long g_00537c4c;
extern "C" unsigned long g_00537c50;
extern "C" unsigned long g_00537c9c;
extern "C" unsigned long g_00537d22;
extern "C" unsigned long g_00537db8;
extern "C" unsigned long g_00537dbc;
extern "C" unsigned long g_00537dc0;
extern "C" unsigned long g_00537dc4;
extern "C" unsigned long g_00537de0;
extern "C" unsigned long g_00537e28;
extern "C" unsigned long g_00537e5a;
extern "C" unsigned long g_00537e88;
extern "C" unsigned long g_00537f04;
extern "C" unsigned long g_00537f08;
extern "C" unsigned long g_00537f0c;
extern "C" unsigned long g_00537f10;
extern "C" unsigned long g_00537f38;
extern "C" unsigned long g_00537f54;
extern "C" unsigned long g_00537f9c;
extern "C" unsigned long g_00537fdc;
extern "C" unsigned long g_0053800a;
extern "C" unsigned long g_00538088;
extern "C" unsigned long g_0053808c;
extern "C" unsigned long g_00538090;
extern "C" unsigned long g_00538094;
extern "C" unsigned long g_00538098;
extern "C" unsigned long g_0053809c;
extern "C" unsigned long g_005380f4;
extern "C" unsigned long g_005380f8;
extern "C" unsigned long g_0053810c;
extern "C" unsigned long g_00538138;
extern "C" unsigned long g_00538144;
extern "C" unsigned long g_00538196;
extern "C" unsigned long g_00538230;
extern "C" unsigned long g_005382a4;
extern "C" unsigned long g_005382a8;
extern "C" unsigned long g_005382ac;
extern "C" unsigned long g_005382b0;
extern "C" unsigned long g_005382b4;
extern "C" unsigned long g_005382b8;
extern "C" unsigned long g_005382bc;
extern "C" unsigned long g_005382cc;
extern "C" unsigned long g_005382da;
extern "C" unsigned long g_005382ea;
extern "C" unsigned long g_005382ec;
extern "C" unsigned long g_0053830c;
extern "C" unsigned long g_00538310;
extern "C" unsigned long g_00538314;
extern "C" unsigned long g_00538318;
extern "C" unsigned long g_0053832a;
extern "C" unsigned long g_0053833c;
extern "C" unsigned long g_00538344;
extern "C" unsigned long g_005383a6;
extern "C" unsigned long g_005383d6;
extern "C" unsigned long g_005383f4;
extern "C" unsigned long g_00538468;
extern "C" unsigned long g_005384d0;
extern "C" unsigned long g_0053869c;
extern "C" unsigned long g_0053869d;
extern "C" unsigned long g_0053869e;
extern "C" unsigned long g_005386b2;
extern "C" unsigned long g_005386b8;
extern "C" unsigned long g_005386bc;
extern "C" unsigned long g_005386c0;
extern "C" unsigned long g_005386c4;
extern "C" unsigned long g_005386c8;
extern "C" unsigned long g_005386cc;
extern "C" unsigned long g_005386d0;
extern "C" unsigned long g_005386d4;
extern "C" unsigned long g_005386d8;
extern "C" unsigned long g_005386dc;
extern "C" unsigned long g_005386e0;
extern "C" unsigned long g_005386e4;
extern "C" unsigned long g_005386e8;
extern "C" unsigned long g_005386ec;
extern "C" unsigned long g_005386f0;
extern "C" unsigned long g_005386f4;
extern "C" unsigned long g_005389a0;
extern "C" unsigned long g_00538a0e;
extern "C" unsigned long g_00538a22;
extern "C" unsigned long g_00538a32;
extern "C" unsigned long g_00538a76;
extern "C" unsigned long g_00538a82;
extern "C" unsigned long g_00538a90;
extern "C" unsigned long g_00538ab0;
extern "C" unsigned long g_00538b56;
extern "C" unsigned long g_00538b78;
extern "C" unsigned long g_00538bf8;
extern "C" unsigned long g_00538bfc;
extern "C" unsigned long g_00538c00;
extern "C" unsigned long g_00538c04;
extern "C" unsigned long g_00538c08;
extern "C" unsigned long g_00538c0c;
extern "C" unsigned long g_00538c10;
extern "C" unsigned long g_00538c14;
extern "C" unsigned long g_00538c18;
extern "C" unsigned long g_00538c1c;
extern "C" unsigned long g_00538c20;
extern "C" unsigned long g_00538c86;
extern "C" unsigned long g_00538c90;
extern "C" unsigned long g_00538cd0;
extern "C" unsigned long g_00538cd4;
extern "C" unsigned long g_00538d90;
extern "C" unsigned long g_00538d9a;
extern "C" unsigned long g_00538ddc;
extern "C" unsigned long g_00538de0;
bool BLFurnacePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFurnacePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnacePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnacePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnacePresenter::onCloseSelect(cocos2d::CCObject* p1, unsigned int p2)
{
  *(undefined1 *)(((int)this) + 0x38) = 1;
  *(undefined4 *)(((int)this) + 0x54) = 0;
  return;
}

undefined4 BLFurnacePresenter::numOfColumn(BLGridView* p1)
{
  return *(undefined4 *)(((int)this) + 0x30);
}

undefined4 BLFurnacePresenter::numOfRow(BLGridView* p1)
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLFurnacePresenter::tick(float p1)
{
  return;
}

void BLFurnacePresenter::onGotoBreak(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLFurnaceView *)*(undefined4 *)(((int)this) + 0x20))->showBreakNode();
  return;
}

void BLFurnacePresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_005356f0);
  return;
}

void BLFurnacePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00535704);
  return;
}

undefined4 BLFurnacePresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}




void BLFurnacePresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0053638c + g_005363ac);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLFurnacePresenter::onEnter()
{
  return;
}










BLFurnacePresenter::BLFurnacePresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_00536e8c + g_00536f28);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x90;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(undefined1 *)((int)((int)this) + 0x45) = 0;
  *(undefined1 *)(((int)this) + 0x11) = 0;
  *(undefined1 *)(((int)this) + 10) = 0;
  *(int *)((int)this + 4*(0x10)) = -1;
  *(undefined1 *)(((int)this) + 0xe) = 1;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00536ef4 + g_00536f2c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFurnacePresenter::create(BLFurnaceView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x58))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLFurnacePresenter::~BLFurnacePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00536f5c + g_00536fd0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x90;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00536f86 + g_00536fd4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  ((std::vector<ItemInfo_, std::allocator<ItemInfo_>> *)((int)this + 0x12))->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}






void BLFurnacePresenter::onOneKeyAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  BLFurnacePresenter::oneKeyAddSlotItem();
  return;
}




void BLFurnacePresenter::onSureBreak(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00537c0e + g_00537c44);
  cocos2d::CCLog((char const*)&g_00537c16 + g_00537c48);
  if (((p1 != 0) &&
      (iVar2 = func_0079e55c(p1,*(undefined4 *)(&g_00537c26 + g_00537c4c),
                               *(undefined4 *)(&g_00537c28 + g_00537c50),0,p4), iVar2 != 0
      )) && (*(int *)(iVar2 + 0x14) == 1)) {
    BLFurnacePresenter::doBreak();
  }
  return;
}



void BLFurnacePresenter::onGotoExchange(cocos2d::CCObject* p1, unsigned int p2)
{
  if (g_00537f38 * (*(int *)(((int)this) + 0x4c) - *(int *)(((int)this) + 0x48) >> 3) == 0) {
    BLFurnacePresenter::requestExchangeList();
  }
  else {
    ((BLFurnaceView *)*(undefined4 *)(((int)this) + 0x20))->showExchangeNode();
  }
  return;
}



void BLFurnacePresenter::onSureRefresh(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  cocos2d::CCLog((char const*)&g_005382cc + g_0053830c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005382da + g_00538310);
  if (((p1 != 0) &&
      (iVar2 = func_0079e55c(p1,*(undefined4 *)(&g_005382ea + g_00538314),
                               *(undefined4 *)(&g_005382ec + g_00538318),0,p4), iVar2 != 0
      )) && (*(int *)(iVar2 + 0x14) == 1)) {
    *(undefined1 *)(((int)this) + 0x45) = 1;
    BLFurnacePresenter::requestRefreshList();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (28) =====
void BLFurnacePresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::onTouchExchangItem(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::sortByStar(cocos2d::CCArray* p1)
{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_34;
  uint uStack_2c;
  int *piStack_28;
  
  iVar2 = (undefined4)(intptr_t)(g_00536548);
  uVar3 = (undefined4)(cocos2d::CCArray::create());
  uVar4 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_2c = (undefined4)(0);
  if (1 < uVar4) {
    for (; iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count(), uStack_2c < iVar5 - 1U);
        uStack_2c = uStack_2c + 1) {
      uStack_34 = (undefined4)(0);
      while (iVar5 = ((cocos2d::CCArray *)(p1))->count(), uStack_34 < iVar5 + ~uStack_2c) {
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_34));
        if (iVar5 == 0) {
code_r0x0053652c:
          piVar13 = (int *)((DataCacheManager *)this)->shareManager();
          (**(code **)(*(int *)(piVar13) + (0x68)))();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x536538);
          (*pcVar1)();
        }
        uVar14 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005363c0 + (intptr_t)(g_0053654c)) + iVar2));
        uVar15 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005363c0 + (intptr_t)(g_00536550)) + iVar2));
        piVar13 = (int *)func_0079e55c(iVar5,uVar14,uVar15,0);
        piVar6 = (int *)((DataCacheManager *)this)->shareManager();
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x20)))(piVar13));
        piStack_28 = (int *)((cocos2d::CCDictionary *)(uVar7))->objectForKey(uVar8);
        if (piStack_28 != 0) {
          piStack_28 = (int *)func_0079e55c(piStack_28,uVar14,
                                              *(undefined4 *)((unsigned char *)((char *)&g_005363c0 + (intptr_t)(g_00536554)) + iVar2)
                                              ,0);
        }
        uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x20)))(piVar13));
        piVar6 = ((void)((DataCacheManager *)(uVar7))->getItemDataByID(uVar8),(int *)0);
        uStack_34 = (undefined4)(uStack_34 + 1);
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_34));
        if (iVar5 == 0) goto code_r0x0053652c;
        piVar9 = (int *)func_0079e55c(iVar5,uVar14,uVar15,0);
        piVar10 = (int *)((DataCacheManager *)this)->shareManager();
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar10) + (0x68)))());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar7))->objectForKey(uVar8));
        piVar10 = (int *)0x0;
        if (iVar5 != 0) {
          piVar10 = (int *)func_0079e55c(iVar5,uVar14,
                                           *(undefined4 *)((unsigned char *)((char *)&g_005363c0 + (intptr_t)(g_00536554)) + iVar2),0)
          ;
        }
        uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        piVar11 = ((void)((DataCacheManager *)(uVar7))->getItemDataByID(uVar8),(int *)0);
        iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
        iVar12 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x50)))(piVar11));
        if (iVar5 == iVar12) {
          iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piStack_28) + (0x30)))(piStack_28));
          iVar12 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x30)))(piVar10));
          if (iVar12 < iVar5) {
            ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar13, (cocos2d::CCObject*)piVar9);
          }
        }
      }
    }
  }
  ((cocos2d::CCArray *)(uVar3))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return;
}

void BLFurnacePresenter::sortByLv(cocos2d::CCArray* p1)
{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_38;
  uint uStack_30;
  int *piStack_2c;
  
  iVar2 = (undefined4)(intptr_t)(g_00536708);
  uVar3 = (undefined4)(cocos2d::CCArray::create());
  uVar4 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_30 = (undefined4)(0);
  if (1 < uVar4) {
    for (; iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count(), uStack_30 < iVar5 - 1U);
        uStack_30 = uStack_30 + 1) {
      uStack_38 = (undefined4)(0);
      while (iVar5 = ((cocos2d::CCArray *)(p1))->count(), uStack_38 < iVar5 + ~uStack_30) {
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_38));
        if (iVar5 == 0) {
          ((DataCacheManager *)this)->shareManager();
code_r0x005366f8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x5366f8);
          (*pcVar1)();
        }
        uVar14 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00536564 + (intptr_t)(g_0053670c)) + iVar2));
        uVar15 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00536564 + (intptr_t)(g_00536710)) + iVar2));
        piVar6 = (int *)func_0079e55c(iVar5,uVar14,uVar15,0);
        uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x20)))(piVar6));
        piVar9 = ((void)((DataCacheManager *)(uVar7))->getItemDataByID(uVar8),(int *)0);
        piVar10 = (int *)((DataCacheManager *)this)->shareManager();
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar10) + (0x68)))());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x20)))(piVar6));
        piStack_2c = (int *)((cocos2d::CCDictionary *)(uVar7))->objectForKey(uVar8);
        if (piStack_2c != 0) {
          piStack_2c = (int *)func_0079e55c(piStack_2c,uVar14,
                                              *(undefined4 *)((unsigned char *)((char *)&g_00536564 + (intptr_t)(g_00536714)) + iVar2)
                                              ,0);
        }
        uStack_38 = (undefined4)(uStack_38 + 1);
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_38));
        if (iVar5 == 0) {
          ((DataCacheManager *)this)->shareManager();
          goto code_r0x005366f8;
        }
        piVar11 = (int *)func_0079e55c(iVar5,uVar14,uVar15,0);
        uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar11) + (0x20)))(piVar11));
        piVar12 = ((void)((DataCacheManager *)(uVar7))->getItemDataByID(uVar8),(int *)0);
        piVar10 = (int *)((DataCacheManager *)this)->shareManager();
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar10) + (0x68)))());
        uVar8 = (undefined4)((**(code **)(*(int *)(piVar11) + (0x20)))(piVar11));
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar7))->objectForKey(uVar8));
        piVar10 = (int *)0x0;
        if (iVar5 != 0) {
          piVar10 = (int *)func_0079e55c(iVar5,uVar14,
                                           *(undefined4 *)((unsigned char *)((char *)&g_00536564 + (intptr_t)(g_00536714)) + iVar2),0)
          ;
        }
        iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x50)))(piVar9));
        iVar13 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar12) + (0x50)))(piVar12));
        if (iVar5 == iVar13) {
          iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piStack_2c) + (0x30)))(piStack_2c));
          iVar13 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x30)))(piVar10));
          if (iVar5 == iVar13) {
            iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))(piVar6));
            iVar13 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x30)))(piVar11));
            if (iVar13 < iVar5) {
              ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar6, (cocos2d::CCObject*)piVar11);
            }
          }
        }
      }
    }
  }
  ((cocos2d::CCArray *)(uVar3))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return;
}

void BLFurnacePresenter::sortByQuity(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_2c;
  uint uStack_28;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_28 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
      if (iVar4 - 1U <= uStack_28) break;
      uStack_2c = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
        if (iVar4 + ~uStack_28 <= uStack_2c) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
code_r0x00536806:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x536806);
          (*pcVar1)();
        }
        uVar13 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0053676c + (intptr_t)(g_00536818))));
        uVar12 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0053676e + (intptr_t)(g_0053681c))));
        piVar5 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
        piVar8 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        uStack_2c = (undefined4)(uStack_2c + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
          goto code_r0x00536806;
        }
        piVar9 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        piVar10 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
        iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x50)))(piVar10));
        if (iVar11 < iVar4) {
          ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar9);
        }
      }
      uStack_28 = (undefined4)(uStack_28 + 1);
    }
  }
  ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return;
}

undefined4 BLFurnacePresenter::initWithView(BLFurnaceView* p1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(g_00536b54);
  *(undefined4 *)(((int)this) + 0x24) = g_00536b58;
  *(undefined1 *)(((int)this) + 0x28) = 1;
  *(undefined4 *)(((int)this) + 0x3c) = 0;
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x50)))();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))());
  uVar4 = (undefined4)(cocos2d::CCArray::create());
  *(undefined4 *)(((int)this) + 0x34) = uVar4;
  if (iVar3 != 0) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
    iVar8 = (undefined4)(intptr_t)(iVar3);
    if (iVar3 != 0) {
      iVar8 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
    }
    while (iVar3 != 0) {
      if ((*(int *)(iVar3 + 0x104) != 0) &&
         (piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),
                                          *(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b5c)) + iVar1),
                                          *(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b60)) + iVar1),0),
         piVar2 != 0)) {
        (**(code **)(*(int *)(piVar2) + (0x38)))(aiStack_20,piVar2);
        uVar5 = (undefined4)(*(uint *)(aiStack_20[0] + -0xc));
        func_0079e2bc(aiStack_20);
        if (uVar5 < 2) {
          uVar4 = (undefined4)(((DataCacheManager *)this)->shareManager());
          uVar7 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
          piVar6 = ((void)((DataCacheManager *)(uVar4))->getItemDataByID(uVar7),(int *)0);
          if ((piVar6 != 0) && (iVar3 = (**(code **)(*(int *)(piVar6) + (0x30)))(), iVar3 == 1)) {
            ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x34)))->addObject((cocos2d::CCObject*)piVar2);
          }
        }
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
        if (iVar3 == g_00536b64) {
          iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x28)))(piVar2));
          *(int *)(((int)this) + 0x3c) = *(int *)(((int)this) + 0x3c) + iVar3;
        }
      }
      iVar3 = (undefined4)(intptr_t)(iVar8);
      if (iVar8 != 0) {
        iVar8 = (undefined4)(intptr_t)(*(int *)(iVar8 + 0x110));
      }
    }
  }
  uVar4 = ((void)(((BLFurnacePresenter *)(((int)this)))->sortByQuity((cocos2d::CCArray*)*(undefined4 *)(((int)this) + 0x34))),(undefined4)0);
  *(undefined4 *)(((int)this) + 0x34) = uVar4;
  uVar4 = ((void)(((BLFurnacePresenter *)(((int)this)))->sortByStar((cocos2d::CCArray*)uVar4)),(undefined4)0);
  *(undefined4 *)(((int)this) + 0x34) = uVar4;
  uVar4 = ((void)(((BLFurnacePresenter *)(((int)this)))->sortByLv((cocos2d::CCArray*)uVar4)),(undefined4)0);
  *(undefined4 *)(((int)this) + 0x34) = uVar4;
  ((cocos2d::CCObject *)this)->retain();
  *(undefined4 *)(((int)this) + 0x30) = 4;
  uVar5 = (undefined4)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x34)))->count());
  uVar5 = (undefined4)((uVar5 >> 2) + 1);
  if (uVar5 < 6) {
    *(undefined4 *)(((int)this) + 0x2c) = 5;
  }
  else {
    *(uint *)(((int)this) + 0x2c) = uVar5;
  }
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLFurnaceView *)(p1))->getBtnClose();
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b68)) + iVar1),0,0x20);
  piVar2 = (int *)((BLFurnaceView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnClose();
  pcVar9 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(aiStack_20,(unsigned char *)((char *)&g_0053697a + (intptr_t)(g_00536b6c)),&uStack_28);
  (*pcVar9)(piVar2,aiStack_20);
  func_0079e2bc(aiStack_20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b70)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x14c);
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b74)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x150);
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b78)) + iVar1),0,0x20);
  iVar3 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x20) + 0x140));
  piVar2 = *(int **)(iVar3 + 0x128);
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b7c)) + iVar1),0,0x20);
  piVar2 = *(int **)(iVar3 + 300);
  (**(code **)(*(int *)(piVar2) + (0x254)))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b80)) + iVar1),0,0x20);
  iVar3 = (undefined4)(intptr_t)(g_00536b84);
  iVar8 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x20) + 0x144));
  (**(code **)(**(int **)(iVar8 + 0x10c) + 0x1fc))(*(int **)(iVar8 + 0x10c),((int)this) + 0x1c);
  (**(code **)(**(int **)(iVar8 + 0x10c) + 0x204))(*(int **)(iVar8 + 0x10c),((int)this) + 0x18);
  uVar4 = (undefined4)(func_0079e2ec(*(undefined4 *)(((int)this) + 0x30)));
  uVar4 = (undefined4)(func_0079e4fc(uVar4,*(undefined4 *)(&g_00536a88 + iVar3)));
  uVar7 = (undefined4)(func_0079e2ec(*(undefined4 *)(((int)this) + 0x2c)));
  uVar7 = (undefined4)(func_0079e4fc(uVar7,*(undefined4 *)(&g_00536a8c + iVar3)));
  0 /* ctorZero */;
  ((BLFurnaceEquipLayer *)(iVar8))->updateScroll(*(const cocos2d::CCSize *)(void *)aiStack_20);
  ((BLGridView *)(*(undefined4 *)(iVar8 + 0x10c)))->reloadData(0, 1);
  ((BLFurnaceView *)(*(undefined4 *)(((int)this) + 0x20)))->showBreakNode();
  iVar3 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x20) + 0x140));
  for (uVar5 = 0; iVar8 = *(int *)(iVar3 + 0x108),
      uVar5 < (uint)(*(int *)(iVar3 + 0x10c) - iVar8 >> 2); uVar5 = uVar5 + 1) {
    piVar2 = *(int **)(iVar8 + uVar5 * 4);
    (**(code **)(*(int *)(piVar2) + (0x254)))
              (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b88)) + iVar1),0,0x20);
  }
  iVar3 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x20) + 0x148));
  for (uVar5 = 0; iVar8 = *(int *)(iVar3 + 0x108),
      uVar5 < (uint)(*(int *)(iVar3 + 0x10c) - iVar8 >> 2); uVar5 = uVar5 + 1) {
    piVar2 = *(int **)(iVar8 + uVar5 * 4);
    uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536b8c)) + iVar1));
    uStack_24 = (undefined4)(0);
    (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_28,0,0x20);
  }
  piVar2 = *(int **)(*(int *)(*(int *)(((int)this) + 0x20) + 0x148) + 0x11c);
  aiStack_20[0] = *(int *)((unsigned char *)((char *)&g_0053682c + (intptr_t)(g_00536bd8)) + iVar1);
  aiStack_20[1] = 0;
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),aiStack_20[0],0,0x20);
  ((BLFurnaceExchangeLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x148)))->updateEssenceCount(*(undefined4 *)(((int)this) + 0x3c));
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateEssenceCount(*(undefined4 *)(((int)this) + 0x3c));
  return 1;
}

void BLFurnacePresenter::removeItemFromTable(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::addBreakFlag(cocos2d::CCNode* p1)
{
  int iVar1;
  int *piVar2;
  
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(p1) + (0xd4)))(p1,g_00536cc8), iVar1 == 0)) {
    piVar2 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_00536c76 + (intptr_t)(g_00536ccc)));
    (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,g_00536cc8);
    (**(code **)(*(int *)(p1) + (200)))(p1,piVar2);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0xd4)))(p1,g_00536cd0));
    if ((iVar1 != 0) &&
       (piVar2 = (int *)func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_00536caa + (intptr_t)(g_00536cd4))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_00536cac + (intptr_t)(g_00536cd8))),0),
       piVar2 != 0)) {
      (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,(unsigned char *)((char *)&g_00536ccb + (intptr_t)(g_00536cdc)));
    }
  }
  return;
}

void BLFurnacePresenter::removeBreakFlag(cocos2d::CCNode* p1)
{
  int iVar1;
  int *piVar2;
  
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    (**(code **)(*(int *)(p1) + (0xf8)))(p1,g_00536d2c);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0xd4)))(p1,g_00536d30));
    if ((iVar1 != 0) &&
       (piVar2 = (int *)func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_00536d0e + (intptr_t)(g_00536d34))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_00536d10 + (intptr_t)(g_00536d38))),0),
       piVar2 != 0)) {
      (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,(unsigned char *)((char *)&g_00536d29 + (intptr_t)(g_00536d3c)));
    }
  }
  return;
}

void BLFurnacePresenter::getTableItem(int p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(*(int *)(*(int *)(((int)this) + 0x20) + 0x144) + 0x10c) + 0x208))());
  if (((int)p1 < 0) || (uVar2 = ((cocos2d::CCArray *)this)->count(), uVar2 <= p1)) {
    uVar1 = (undefined4)(0);
  }
  else {
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)p1));
    uVar1 = (undefined4)(0);
    if (iVar3 != 0) {
      uVar1 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00536d80 + (intptr_t)(g_00536d8c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00536d82 + (intptr_t)(g_00536d90))),0,p4);
    }
  }
  return;
}

void BLFurnacePresenter::onUseToBreak(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x193)),(intptr_t)0);
  if (iVar3 != 0) {
    iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00536db2 + (intptr_t)(g_00536e30))),
                            *(undefined4 *)((unsigned char *)((char *)&g_00536db4 + (intptr_t)(g_00536e34))),0,p4);
    if ((*(int *)(iVar3 + 0x24) != 0) &&
       (iVar3 = func_0079e55c(*(int *)(iVar3 + 0x24),
                                *(undefined4 *)((unsigned char *)((char *)&g_00536dca + (intptr_t)(g_00536e38))),
                                *(undefined4 *)((unsigned char *)((char *)&g_00536dcc + (intptr_t)(g_00536e3c))),0,p4),
       iVar3 != 0)) {
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x54));
      ((BLFurnaceSelectView *)this)->ItemInfoDown();
      piVar4 = (int *)((BLItemDataInfoDownView *)this)->getPresenter();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x2c)))());
      ((BLFurnaceItemInSlot *)(uVar5))->setCount(uVar2);
    }
    (**(code **)(**(int **)(((int)this) + 0x54) + 0x90))(*(int **)(((int)this) + 0x54),1);
    ((cocos2d::CCNode *)(*(undefined4 *)(((int)this) + 0x54)))->resumeSchedulerAndActions();
    uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x54) + 0x19c))());
    uVar2 = ((void)(((BLFurnacePresenter *)(((int)this)))->getTableItem(uVar2)),(undefined4)0);
    ((BLFurnacePresenter *)(((int)this)))->addBreakFlag((cocos2d::CCNode*)uVar2);
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->removeUIByID(0x193);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x536e2c);
  (*pcVar1)();
}

void BLFurnacePresenter::addToBackpackOnBreak(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::caculateEssenceValue(int& p1, int& p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  uint uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_24;
  int iStack_20;
  
  *(int *)p1 = 0;
  *(int *)p2 = 0;
  ((BLFurnaceBreakLayer *)this)->getSlotItems();
  if (iStack_20 - iStack_24 >> 2 != 0) {
    iStack_38 = 0;
    uStack_3c = (undefined4)(0);
    for (uStack_40 = 0; uStack_40 < (uint)(iStack_20 - iStack_24 >> 2); uStack_40 = uStack_40 + 1) {
      piVar9 = *(int **)(uStack_40 * 4 + iStack_24);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
      piVar1 = (int *)(**(code **)(*(int *)(piVar9) + (0x194)))(piVar9);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))());
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(uVar3));
      if (iVar4 != 0) {
        uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005373c8 + (intptr_t)(g_00537528))));
        piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_005373cc + (intptr_t)(g_0053752c))),0
                                       );
        if (piVar1 != (int *)0x0) {
          piVar5 = (int *)((DataCacheManager *)this)->shareManager();
          uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))());
          uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(uVar6));
          if ((iVar4 != 0) &&
             (piVar5 = (int *)func_0079e55c(iVar4,uVar2,
                                              *(undefined4 *)((unsigned char *)((char *)&g_00537402 + (intptr_t)(g_00537530))),0),
             piVar5 != (int *)0x0)) {
            iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
            if (iVar4 < 5) {
              iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
            }
            else {
              iVar4 = 5;
            }
            uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0053743a + (intptr_t)(g_00537534)) + (iVar4 + -1) * 4));
            iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x30)))(piVar5));
            if (iVar4 < 5) {
              iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x30)))(piVar5));
            }
            else {
              iVar4 = 5;
            }
            uVar3 = (undefined4)(func_0079e2ec(uStack_3c));
            uVar2 = func_0079e4fc(uVar2,*(undefined4 *)
                                           ((unsigned char *)((char *)&g_0053747c + (intptr_t)(g_00537538)) + (iVar4 + -1) * 4));
            uVar2 = (undefined4)(func_0079e4fc(uVar2,g_0053753c));
            uVar6 = (undefined4)(func_0079e2ec(piVar9[0x3c]));
            uVar2 = (undefined4)(func_0079e4fc(uVar2,uVar6));
            func_0079e59c(uVar3,uVar2);
            uStack_3c = (undefined4)(func_0079e5fc());
            piVar7 = (int *)((BackPackItemData *)this)->create();
            pcVar8 = *(code **)(*piVar7 + 0x24);
            uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
            (*pcVar8)(piVar7,uVar2);
            pcVar8 = *(code **)(*piVar7 + 0x1c);
            uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x18)))(piVar5));
            (*pcVar8)(piVar7,uVar2);
            pcVar8 = *(code **)(*piVar7 + 0x34);
            piVar1 = (int *)(**(code **)(*(int *)(piVar9) + (0x194)))(piVar9);
            uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
            (*pcVar8)(piVar7,uVar2);
            (**(code **)(*(int *)(piVar7) + (0x2c)))(piVar7,1);
            uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
            iVar4 = (undefined4)((void)(((DataManager *)(uVar2))->getSellPrice((BackPackItemData*)piVar7)),(intptr_t)0);
            iStack_38 = (undefined4)(intptr_t)(iStack_38 + piVar9[0x3c] * iVar4);
          }
        }
      }
    }
    *(int *)p1 = uStack_3c;
    *(int *)p2 = iStack_38;
  }
  ((std::vector<BLFurnaceItemInSlot*, std::allocator<BLFurnaceItemInSlot*>> *)(&iStack_24))->~vector();
  return;
}

void BLFurnacePresenter::onTouchSlot(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLFurnacePresenter::onItemMoveActionEnd()
{
  undefined4 p2 = 0;

  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  
  *(undefined1 *)(((int)this) + 0x38) = 1;
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  iVar1 = (undefined4)(intptr_t)(((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->addSlotItem((BLFurnaceItemInSlot*)*(undefined4 *)(((int)this) + 0x54)));
  if (iVar1 == 0) {
    (**(code **)(**(int **)(((int)this) + 0x54) + 0xec))(*(int **)(((int)this) + 0x54),1);
    *(undefined4 *)(((int)this) + 0x54) = 0;
  }
  else {
    ((BLFurnaceItemInSlot *)this)->showStar();
    *(undefined4 *)(((int)this) + 0x54) = 0;
  }
  iStack_18 = 0;
  uStack_14 = (undefined4)(0);
  ((BLFurnacePresenter *)(((int)this)))->caculateEssenceValue(*(int*)&iStack_18, *(int*)&uStack_14);
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateEssenceObtainCount(iStack_18);
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateBreakCoinCount(uStack_14);
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

void BLFurnacePresenter::oneKeyAddSlotItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::removeItemFromBackpack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::doBreak()
{
  undefined4 p3 = 0;

  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iStack_18 = 0;
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(p3);
  ((BLFurnacePresenter *)(((int)this)))->caculateEssenceValue(*(int*)&iStack_18, *(int*)&uStack_14);
  ((BLFurnacePresenter *)(((int)this)))->addToBackpackOnBreak(iStack_18, uStack_14);
  *(int *)(((int)this) + 0x3c) = *(int *)(((int)this) + 0x3c) + iStack_18;
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateEssenceObtainCount(0);
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateBreakCoinCount(0);
  ((BLFurnaceExchangeLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x148)))->updateEssenceCount(*(undefined4 *)(((int)this) + 0x3c));
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->updateEssenceCount(*(undefined4 *)(((int)this) + 0x3c));
  ((BLFurnacePresenter *)(((int)this)))->removeItemFromBackpack();
  ((BLFurnaceBreakLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140)))->cleanSlotItems();
  ((BLGridView *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x20) + 0x144) + 0x10c)))->reloadData(0, 1);
  return;
}

void BLFurnacePresenter::onBreak(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::updateExchangeItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::requestExchangeList()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::requestRefreshList()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::onTouchRefresh(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::onSureExchange(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::processBodyData(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::onRequestExchangeListCompleted(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnacePresenter::onRequestRefreshListCompleted(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

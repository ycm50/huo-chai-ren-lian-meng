#include "BLItemDataInfoPresenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCActionInterval.h"
#include "CCDirector.h"
#include "CCLabelTTF.h"
#include "CCObject.h"
#include "BackPackItemData.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "BLDebrisItemDataInfoDownPresenter.h"
#include "BLDebrisItemDataInfoDownView.h"
#include "BLItemDataInfoDownPresenter.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoUpPresenter.h"
#include "BLItemDataInfoUpView.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownPresenter.h"
#include "BLOtherItemDataInfoDownView.h"
#include "BLRichText.h"
#include "BackPackData.h"
#include "CommonUseData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipBaseData.h"
#include "ImmortalsRoleData.h"
#include "ItemData.h"
#include "RichTextData.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_005ef2fc(...);
extern "C" long long func_005efd86(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005edfe8;
extern "C" unsigned long UNK_005ee000;
extern "C" unsigned long UNK_005ee018;
extern "C" unsigned long UNK_005ee096;
extern "C" unsigned long UNK_005ee10c;
extern "C" unsigned long UNK_005ee126;
extern "C" unsigned long UNK_005ee18c;
extern "C" unsigned long UNK_005ee1b4;
extern "C" unsigned long UNK_005ee1e2;
extern "C" unsigned long UNK_005ee2e4;
extern "C" unsigned long UNK_005ee33c;
extern "C" unsigned long UNK_005ee3ae;
extern "C" unsigned long UNK_005ee4ac;
extern "C" unsigned long UNK_005ee4c8;
extern "C" unsigned long UNK_005ee4ca;
extern "C" unsigned long UNK_005ee574;
extern "C" unsigned long UNK_005ee642;
extern "C" unsigned long UNK_005ee6a8;
extern "C" unsigned long UNK_005ee6d0;
extern "C" unsigned long UNK_005ee754;
extern "C" unsigned long UNK_005ee77a;
extern "C" unsigned long UNK_005ee7f0;
extern "C" unsigned long UNK_005ee874;
extern "C" unsigned long UNK_005ee8a2;
extern "C" unsigned long UNK_005ee934;
extern "C" unsigned long UNK_005ee94b;
extern "C" unsigned long UNK_005eed5e;
extern "C" unsigned long UNK_005eed90;
extern "C" unsigned long UNK_005eedfa;
extern "C" unsigned long UNK_005eee1c;
extern "C" unsigned long UNK_005eeeac;
extern "C" unsigned long UNK_005eeedc;
extern "C" unsigned long UNK_005eef6c;
extern "C" unsigned long UNK_005eef85;
extern "C" unsigned long UNK_005eeff4;
extern "C" unsigned long UNK_005ef0ac;
extern "C" unsigned long UNK_005ef0dc;
extern "C" unsigned long UNK_005ef146;
extern "C" unsigned long UNK_005ef218;
extern "C" unsigned long UNK_005ef21c;
extern "C" unsigned long UNK_005ef2eb;
extern "C" unsigned long UNK_005ef344;
extern "C" unsigned long UNK_005ef35c;
extern "C" unsigned long UNK_005ef35e;
extern "C" unsigned long UNK_005ef43a;
extern "C" unsigned long UNK_005ef4cc;
extern "C" unsigned long UNK_005ef50a;
extern "C" unsigned long UNK_005ef52c;
extern "C" unsigned long UNK_005ef588;
extern "C" unsigned long UNK_005ef5ac;
extern "C" unsigned long UNK_005ef628;
extern "C" unsigned long UNK_005ef87e;
extern "C" unsigned long UNK_005ef8b4;
extern "C" unsigned long UNK_005ef8e6;
extern "C" unsigned long UNK_005ef918;
extern "C" unsigned long UNK_005ef982;
extern "C" unsigned long UNK_005ef9a2;
extern "C" unsigned long UNK_005ef9d0;
extern "C" unsigned long UNK_005efa62;
extern "C" unsigned long UNK_005efa79;
extern "C" unsigned long UNK_005efaf4;
extern "C" unsigned long UNK_005efba8;
extern "C" unsigned long UNK_005efbd8;
extern "C" unsigned long UNK_005efc68;
extern "C" unsigned long UNK_005efc81;
extern "C" unsigned long UNK_005efcc6;
extern "C" unsigned long UNK_005efcf6;
extern "C" unsigned long UNK_005efd5e;
extern "C" unsigned long UNK_005eff74;
extern "C" unsigned long UNK_005effa4;
extern "C" unsigned long UNK_005f000e;
extern "C" unsigned long UNK_005f00e0;
extern "C" unsigned long UNK_005f00e4;
extern "C" unsigned long UNK_005f0106;
extern "C" unsigned long UNK_005f0122;
extern "C" unsigned long UNK_005f0124;
extern "C" unsigned long UNK_005f01ce;
extern "C" unsigned long UNK_005f03d6;
extern "C" unsigned long UNK_005f0416;
extern "C" unsigned long UNK_005f0438;
extern "C" unsigned long UNK_005f0496;
extern "C" unsigned long UNK_005f04ba;
extern "C" unsigned long UNK_005f0534;
extern "C" unsigned long UNK_005f056c;
extern "C" unsigned long UNK_005f05a2;
extern "C" unsigned long UNK_005f05d4;
extern "C" unsigned long UNK_005f0606;
extern "C" unsigned long UNK_005f0670;
extern "C" unsigned long UNK_005f06ea;
extern "C" unsigned long UNK_005f0718;
extern "C" unsigned long UNK_005f07ac;
extern "C" unsigned long UNK_005f07c3;
extern "C" unsigned long UNK_005f0850;
extern "C" unsigned long UNK_005f087e;
extern "C" unsigned long UNK_005f0912;
extern "C" unsigned long UNK_005f092b;
extern "C" unsigned long UNK_005f0986;
extern "C" unsigned long UNK_005f0b64;
extern "C" unsigned long UNK_005f0bea;
extern "C" unsigned long UNK_005f0c1a;
extern "C" unsigned long UNK_005f0c84;
extern "C" unsigned long UNK_005f0cc8;
extern "C" unsigned long UNK_005f0cf8;
extern "C" unsigned long UNK_005f0d66;
extern "C" unsigned long _UNK_005edfec;
extern "C" unsigned long _UNK_005ee004;
extern "C" unsigned long _UNK_005ee01c;
extern "C" unsigned long _UNK_005ee100;
extern "C" unsigned long _UNK_005ee178;
extern "C" unsigned long _UNK_005ee17c;
extern "C" unsigned long _UNK_005ee190;
extern "C" unsigned long _UNK_005ee1b8;
extern "C" unsigned long _UNK_005ee288;
extern "C" unsigned long _UNK_005ee28c;
extern "C" unsigned long _UNK_005ee290;
extern "C" unsigned long _UNK_005ee294;
extern "C" unsigned long _UNK_005ee298;
extern "C" unsigned long _UNK_005ee29c;
extern "C" unsigned long _UNK_005ee33c;
extern "C" unsigned long _UNK_005ee340;
extern "C" unsigned long _UNK_005ee590;
extern "C" unsigned long _UNK_005ee594;
extern "C" unsigned long _UNK_005ee598;
extern "C" unsigned long _UNK_005ee59c;
extern "C" unsigned long _UNK_005ee5a0;
extern "C" unsigned long _UNK_005ee5a4;
extern "C" unsigned long _UNK_005ee5a8;
extern "C" unsigned long _UNK_005ee5ac;
extern "C" unsigned long _UNK_005ee5b0;
extern "C" unsigned long _UNK_005ee5b4;
extern "C" unsigned long _UNK_005ee7f0;
extern "C" unsigned long _UNK_005ee7f4;
extern "C" unsigned long _UNK_005ee7f8;
extern "C" unsigned long _UNK_005ee7fc;
extern "C" unsigned long _UNK_005ee800;
extern "C" unsigned long _UNK_005ee804;
extern "C" unsigned long _UNK_005ee808;
extern "C" unsigned long _UNK_005ee80c;
extern "C" unsigned long _UNK_005ee810;
extern "C" unsigned long _UNK_005ee814;
extern "C" unsigned long _UNK_005ee818;
extern "C" unsigned long _UNK_005ee81c;
extern "C" unsigned long _UNK_005ee820;
extern "C" unsigned long _UNK_005ee824;
extern "C" unsigned long _UNK_005ee828;
extern "C" unsigned long _UNK_005eeb54;
extern "C" unsigned long _UNK_005eeb58;
extern "C" unsigned long _UNK_005eeb5c;
extern "C" unsigned long _UNK_005eeb60;
extern "C" unsigned long _UNK_005eeb64;
extern "C" unsigned long _UNK_005eeb68;
extern "C" unsigned long _UNK_005eeb6c;
extern "C" unsigned long _UNK_005eeb70;
extern "C" unsigned long _UNK_005eeb74;
extern "C" unsigned long _UNK_005ef050;
extern "C" unsigned long _UNK_005ef054;
extern "C" unsigned long _UNK_005ef058;
extern "C" unsigned long _UNK_005ef05c;
extern "C" unsigned long _UNK_005ef060;
extern "C" unsigned long _UNK_005ef064;
extern "C" unsigned long _UNK_005ef068;
extern "C" unsigned long _UNK_005ef06c;
extern "C" unsigned long _UNK_005ef070;
extern "C" unsigned long _UNK_005ef074;
extern "C" unsigned long _UNK_005ef078;
extern "C" unsigned long _UNK_005ef07c;
extern "C" unsigned long _UNK_005ef080;
extern "C" unsigned long _UNK_005ef160;
extern "C" unsigned long _UNK_005ef164;
extern "C" unsigned long _UNK_005ef168;
extern "C" unsigned long _UNK_005ef16c;
extern "C" unsigned long _UNK_005ef468;
extern "C" unsigned long _UNK_005ef46c;
extern "C" unsigned long _UNK_005ef470;
extern "C" unsigned long _UNK_005ef474;
extern "C" unsigned long _UNK_005ef478;
extern "C" unsigned long _UNK_005ef47c;
extern "C" unsigned long _UNK_005ef480;
extern "C" unsigned long _UNK_005ef484;
extern "C" unsigned long _UNK_005ef488;
extern "C" unsigned long _UNK_005ef48c;
extern "C" unsigned long _UNK_005ef828;
extern "C" unsigned long _UNK_005ef82c;
extern "C" unsigned long _UNK_005ef830;
extern "C" unsigned long _UNK_005ef834;
extern "C" unsigned long _UNK_005ef838;
extern "C" unsigned long _UNK_005ef83c;
extern "C" unsigned long _UNK_005ef840;
extern "C" unsigned long _UNK_005ef844;
extern "C" unsigned long _UNK_005ef848;
extern "C" unsigned long _UNK_005ef84c;
extern "C" unsigned long _UNK_005ef850;
extern "C" unsigned long _UNK_005ef854;
extern "C" unsigned long _UNK_005ef858;
extern "C" unsigned long _UNK_005efb50;
extern "C" unsigned long _UNK_005efb54;
extern "C" unsigned long _UNK_005efb58;
extern "C" unsigned long _UNK_005efb5c;
extern "C" unsigned long _UNK_005efb60;
extern "C" unsigned long _UNK_005efb64;
extern "C" unsigned long _UNK_005efb68;
extern "C" unsigned long _UNK_005efb6c;
extern "C" unsigned long _UNK_005efb70;
extern "C" unsigned long _UNK_005efb74;
extern "C" unsigned long _UNK_005efb78;
extern "C" unsigned long _UNK_005efb7c;
extern "C" unsigned long _UNK_005efb80;
extern "C" unsigned long _UNK_005efb84;
extern "C" unsigned long _UNK_005eff2c;
extern "C" unsigned long _UNK_005eff30;
extern "C" unsigned long _UNK_005eff34;
extern "C" unsigned long _UNK_005eff38;
extern "C" unsigned long _UNK_005eff3c;
extern "C" unsigned long _UNK_005eff40;
extern "C" unsigned long _UNK_005eff44;
extern "C" unsigned long _UNK_005eff48;
extern "C" unsigned long _UNK_005eff50;
extern "C" unsigned long _UNK_005f0030;
extern "C" unsigned long _UNK_005f0034;
extern "C" unsigned long _UNK_005f0038;
extern "C" unsigned long _UNK_005f003c;
extern "C" unsigned long _UNK_005f0364;
extern "C" unsigned long _UNK_005f0368;
extern "C" unsigned long _UNK_005f036c;
extern "C" unsigned long _UNK_005f0370;
extern "C" unsigned long _UNK_005f0374;
extern "C" unsigned long _UNK_005f0378;
extern "C" unsigned long _UNK_005f037c;
extern "C" unsigned long _UNK_005f0380;
extern "C" unsigned long _UNK_005f0384;
extern "C" unsigned long _UNK_005f0388;
extern "C" unsigned long _UNK_005f038c;
extern "C" unsigned long _UNK_005f0390;
extern "C" unsigned long _UNK_005f0670;
extern "C" unsigned long _UNK_005f0674;
extern "C" unsigned long _UNK_005f0678;
extern "C" unsigned long _UNK_005f067c;
extern "C" unsigned long _UNK_005f0680;
extern "C" unsigned long _UNK_005f0684;
extern "C" unsigned long _UNK_005f0688;
extern "C" unsigned long _UNK_005f068c;
extern "C" unsigned long _UNK_005f0690;
extern "C" unsigned long _UNK_005f0694;
extern "C" unsigned long _UNK_005f0698;
extern "C" unsigned long _UNK_005f069c;
extern "C" unsigned long _UNK_005f06a0;
extern "C" unsigned long _UNK_005f06a4;
extern "C" unsigned long _UNK_005f06a8;
extern "C" unsigned long _UNK_005f06ac;
extern "C" unsigned long _UNK_005f06b0;
extern "C" unsigned long _UNK_005f09f4;
extern "C" unsigned long _UNK_005f09f8;
extern "C" unsigned long _UNK_005f09fc;
extern "C" unsigned long _UNK_005f0a00;
extern "C" unsigned long _UNK_005f0a04;
extern "C" unsigned long _UNK_005f0a08;
extern "C" unsigned long _UNK_005f0a0c;
extern "C" unsigned long _UNK_005f0a10;
extern "C" unsigned long _UNK_005f0a14;
extern "C" unsigned long _UNK_005f0a18;
extern "C" unsigned long _UNK_005f0a1c;
extern "C" unsigned long _UNK_005f0a20;
extern "C" unsigned long _UNK_005f0a24;
extern "C" unsigned long _UNK_005f0c9c;
extern "C" unsigned long _UNK_005f0ca0;
extern "C" unsigned long _UNK_005f0ca4;
extern "C" unsigned long _UNK_005f0ca8;
extern "C" unsigned long _UNK_005f0cac;
extern "C" unsigned long _UNK_005f0cb0;
extern "C" unsigned long _UNK_005f0db4;
extern "C" unsigned long _UNK_005f0db8;
extern "C" unsigned long _UNK_005f0dbc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_005edfe8;
extern "C" unsigned long g_005edfec;
extern "C" unsigned long g_005ee000;
extern "C" unsigned long g_005ee004;
extern "C" unsigned long g_005ee018;
extern "C" unsigned long g_005ee01c;
extern "C" unsigned long g_005ee096;
extern "C" unsigned long g_005ee100;
extern "C" unsigned long g_005ee10c;
extern "C" unsigned long g_005ee126;
extern "C" unsigned long g_005ee178;
extern "C" unsigned long g_005ee17c;
extern "C" unsigned long g_005ee18c;
extern "C" unsigned long g_005ee190;
extern "C" unsigned long g_005ee1b4;
extern "C" unsigned long g_005ee1b8;
extern "C" unsigned long g_005ee1e2;
extern "C" unsigned long g_005ee288;
extern "C" unsigned long g_005ee28c;
extern "C" unsigned long g_005ee290;
extern "C" unsigned long g_005ee294;
extern "C" unsigned long g_005ee298;
extern "C" unsigned long g_005ee29c;
extern "C" unsigned long g_005ee2e4;
extern "C" unsigned long g_005ee33c;
extern "C" unsigned long g_005ee340;
extern "C" unsigned long g_005ee3ae;
extern "C" unsigned long g_005ee4ac;
extern "C" unsigned long g_005ee4c8;
extern "C" unsigned long g_005ee4ca;
extern "C" unsigned long g_005ee574;
extern "C" unsigned long g_005ee590;
extern "C" unsigned long g_005ee594;
extern "C" unsigned long g_005ee598;
extern "C" unsigned long g_005ee59c;
extern "C" unsigned long g_005ee5a0;
extern "C" unsigned long g_005ee5a4;
extern "C" unsigned long g_005ee5a8;
extern "C" unsigned long g_005ee5ac;
extern "C" unsigned long g_005ee5b0;
extern "C" unsigned long g_005ee5b4;
extern "C" unsigned long g_005ee642;
extern "C" unsigned long g_005ee6a8;
extern "C" unsigned long g_005ee6d0;
extern "C" unsigned long g_005ee754;
extern "C" unsigned long g_005ee77a;
extern "C" unsigned long g_005ee7f0;
extern "C" unsigned long g_005ee7f4;
extern "C" unsigned long g_005ee7f8;
extern "C" unsigned long g_005ee7fc;
extern "C" unsigned long g_005ee800;
extern "C" unsigned long g_005ee804;
extern "C" unsigned long g_005ee808;
extern "C" unsigned long g_005ee80c;
extern "C" unsigned long g_005ee810;
extern "C" unsigned long g_005ee814;
extern "C" unsigned long g_005ee818;
extern "C" unsigned long g_005ee81c;
extern "C" unsigned long g_005ee820;
extern "C" unsigned long g_005ee824;
extern "C" unsigned long g_005ee828;
extern "C" unsigned long g_005ee874;
extern "C" unsigned long g_005ee8a2;
extern "C" unsigned long g_005ee934;
extern "C" unsigned long g_005ee94b;
extern "C" unsigned long g_005eeb54;
extern "C" unsigned long g_005eeb58;
extern "C" unsigned long g_005eeb5c;
extern "C" unsigned long g_005eeb60;
extern "C" unsigned long g_005eeb64;
extern "C" unsigned long g_005eeb68;
extern "C" unsigned long g_005eeb6c;
extern "C" unsigned long g_005eeb70;
extern "C" unsigned long g_005eeb74;
extern "C" unsigned long g_005eed5e;
extern "C" unsigned long g_005eed90;
extern "C" unsigned long g_005eedfa;
extern "C" unsigned long g_005eee1c;
extern "C" unsigned long g_005eeeac;
extern "C" unsigned long g_005eeedc;
extern "C" unsigned long g_005eef6c;
extern "C" unsigned long g_005eef85;
extern "C" unsigned long g_005eeff4;
extern "C" unsigned long g_005ef050;
extern "C" unsigned long g_005ef054;
extern "C" unsigned long g_005ef058;
extern "C" unsigned long g_005ef05c;
extern "C" unsigned long g_005ef060;
extern "C" unsigned long g_005ef064;
extern "C" unsigned long g_005ef068;
extern "C" unsigned long g_005ef06c;
extern "C" unsigned long g_005ef070;
extern "C" unsigned long g_005ef074;
extern "C" unsigned long g_005ef078;
extern "C" unsigned long g_005ef07c;
extern "C" unsigned long g_005ef080;
extern "C" unsigned long g_005ef0ac;
extern "C" unsigned long g_005ef0dc;
extern "C" unsigned long g_005ef146;
extern "C" unsigned long g_005ef160;
extern "C" unsigned long g_005ef164;
extern "C" unsigned long g_005ef168;
extern "C" unsigned long g_005ef16c;
extern "C" unsigned long g_005ef218;
extern "C" unsigned long g_005ef21c;
extern "C" unsigned long g_005ef2eb;
extern "C" unsigned long g_005ef344;
extern "C" unsigned long g_005ef35c;
extern "C" unsigned long g_005ef35e;
extern "C" unsigned long g_005ef43a;
extern "C" unsigned long g_005ef468;
extern "C" unsigned long g_005ef46c;
extern "C" unsigned long g_005ef470;
extern "C" unsigned long g_005ef474;
extern "C" unsigned long g_005ef478;
extern "C" unsigned long g_005ef47c;
extern "C" unsigned long g_005ef480;
extern "C" unsigned long g_005ef484;
extern "C" unsigned long g_005ef488;
extern "C" unsigned long g_005ef48c;
extern "C" unsigned long g_005ef4cc;
extern "C" unsigned long g_005ef50a;
extern "C" unsigned long g_005ef52c;
extern "C" unsigned long g_005ef588;
extern "C" unsigned long g_005ef5ac;
extern "C" unsigned long g_005ef628;
extern "C" unsigned long g_005ef828;
extern "C" unsigned long g_005ef82c;
extern "C" unsigned long g_005ef830;
extern "C" unsigned long g_005ef834;
extern "C" unsigned long g_005ef838;
extern "C" unsigned long g_005ef83c;
extern "C" unsigned long g_005ef840;
extern "C" unsigned long g_005ef844;
extern "C" unsigned long g_005ef848;
extern "C" unsigned long g_005ef84c;
extern "C" unsigned long g_005ef850;
extern "C" unsigned long g_005ef854;
extern "C" unsigned long g_005ef858;
extern "C" unsigned long g_005ef87e;
extern "C" unsigned long g_005ef8b4;
extern "C" unsigned long g_005ef8e6;
extern "C" unsigned long g_005ef918;
extern "C" unsigned long g_005ef982;
extern "C" unsigned long g_005ef9a2;
extern "C" unsigned long g_005ef9d0;
extern "C" unsigned long g_005efa62;
extern "C" unsigned long g_005efa79;
extern "C" unsigned long g_005efaf4;
extern "C" unsigned long g_005efb50;
extern "C" unsigned long g_005efb54;
extern "C" unsigned long g_005efb58;
extern "C" unsigned long g_005efb5c;
extern "C" unsigned long g_005efb60;
extern "C" unsigned long g_005efb64;
extern "C" unsigned long g_005efb68;
extern "C" unsigned long g_005efb6c;
extern "C" unsigned long g_005efb70;
extern "C" unsigned long g_005efb74;
extern "C" unsigned long g_005efb78;
extern "C" unsigned long g_005efb7c;
extern "C" unsigned long g_005efb80;
extern "C" unsigned long g_005efb84;
extern "C" unsigned long g_005efba8;
extern "C" unsigned long g_005efbd8;
extern "C" unsigned long g_005efc68;
extern "C" unsigned long g_005efc81;
extern "C" unsigned long g_005efcc6;
extern "C" unsigned long g_005efcf6;
extern "C" unsigned long g_005efd5e;
extern "C" unsigned long g_005eff2c;
extern "C" unsigned long g_005eff30;
extern "C" unsigned long g_005eff34;
extern "C" unsigned long g_005eff38;
extern "C" unsigned long g_005eff3c;
extern "C" unsigned long g_005eff40;
extern "C" unsigned long g_005eff44;
extern "C" unsigned long g_005eff48;
extern "C" unsigned long g_005eff50;
extern "C" unsigned long g_005eff74;
extern "C" unsigned long g_005effa4;
extern "C" unsigned long g_005f000e;
extern "C" unsigned long g_005f0030;
extern "C" unsigned long g_005f0034;
extern "C" unsigned long g_005f0038;
extern "C" unsigned long g_005f003c;
extern "C" unsigned long g_005f00e0;
extern "C" unsigned long g_005f00e4;
extern "C" unsigned long g_005f0106;
extern "C" unsigned long g_005f0122;
extern "C" unsigned long g_005f0124;
extern "C" unsigned long g_005f01ce;
extern "C" unsigned long g_005f0364;
extern "C" unsigned long g_005f0368;
extern "C" unsigned long g_005f036c;
extern "C" unsigned long g_005f0370;
extern "C" unsigned long g_005f0374;
extern "C" unsigned long g_005f0378;
extern "C" unsigned long g_005f037c;
extern "C" unsigned long g_005f0380;
extern "C" unsigned long g_005f0384;
extern "C" unsigned long g_005f0388;
extern "C" unsigned long g_005f038c;
extern "C" unsigned long g_005f0390;
extern "C" unsigned long g_005f03d6;
extern "C" unsigned long g_005f0416;
extern "C" unsigned long g_005f0438;
extern "C" unsigned long g_005f0496;
extern "C" unsigned long g_005f04ba;
extern "C" unsigned long g_005f0534;
extern "C" unsigned long g_005f056c;
extern "C" unsigned long g_005f05a2;
extern "C" unsigned long g_005f05d4;
extern "C" unsigned long g_005f0606;
extern "C" unsigned long g_005f0670;
extern "C" unsigned long g_005f0674;
extern "C" unsigned long g_005f0678;
extern "C" unsigned long g_005f067c;
extern "C" unsigned long g_005f0680;
extern "C" unsigned long g_005f0684;
extern "C" unsigned long g_005f0688;
extern "C" unsigned long g_005f068c;
extern "C" unsigned long g_005f0690;
extern "C" unsigned long g_005f0694;
extern "C" unsigned long g_005f0698;
extern "C" unsigned long g_005f069c;
extern "C" unsigned long g_005f06a0;
extern "C" unsigned long g_005f06a4;
extern "C" unsigned long g_005f06a8;
extern "C" unsigned long g_005f06ac;
extern "C" unsigned long g_005f06b0;
extern "C" unsigned long g_005f06ea;
extern "C" unsigned long g_005f0718;
extern "C" unsigned long g_005f07ac;
extern "C" unsigned long g_005f07c3;
extern "C" unsigned long g_005f0850;
extern "C" unsigned long g_005f087e;
extern "C" unsigned long g_005f0912;
extern "C" unsigned long g_005f092b;
extern "C" unsigned long g_005f0986;
extern "C" unsigned long g_005f09f4;
extern "C" unsigned long g_005f09f8;
extern "C" unsigned long g_005f09fc;
extern "C" unsigned long g_005f0a00;
extern "C" unsigned long g_005f0a04;
extern "C" unsigned long g_005f0a08;
extern "C" unsigned long g_005f0a0c;
extern "C" unsigned long g_005f0a10;
extern "C" unsigned long g_005f0a14;
extern "C" unsigned long g_005f0a18;
extern "C" unsigned long g_005f0a1c;
extern "C" unsigned long g_005f0a20;
extern "C" unsigned long g_005f0a24;
extern "C" unsigned long g_005f0b64;
extern "C" unsigned long g_005f0bea;
extern "C" unsigned long g_005f0c1a;
extern "C" unsigned long g_005f0c84;
extern "C" unsigned long g_005f0c9c;
extern "C" unsigned long g_005f0ca0;
extern "C" unsigned long g_005f0ca4;
extern "C" unsigned long g_005f0ca8;
extern "C" unsigned long g_005f0cac;
extern "C" unsigned long g_005f0cb0;
extern "C" unsigned long g_005f0cc8;
extern "C" unsigned long g_005f0cf8;
extern "C" unsigned long g_005f0d66;
extern "C" unsigned long g_005f0db4;
extern "C" unsigned long g_005f0db8;
extern "C" unsigned long g_005f0dbc;
bool BLItemDataInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLItemDataInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoPresenter::tick(float p1)
{
  return;
}


BLItemDataInfoPresenter::~BLItemDataInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ee10c + g_005ee178);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ee126 + g_005ee17c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  iVar2 = *(int *)((int)this + 4*(8));
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x18);
    if (*(int *)(iVar2 + 0x18) != 0) {
      (void)(::operator delete((void *)(*(int *)(iVar2 + 0x18))));
    }
    func_0079e2bc(iVar2 + 8);
    (void)(::operator delete((void *)(iVar2)));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLItemDataInfoPresenter::onEnter()
{
  return;
}


void BLItemDataInfoPresenter::initEquipData(BackPackItemData* p1)
{
  return;
}



void BLItemDataInfoPresenter::initPackItemData(BackPackItemData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0 /* ctorZero */);
  BLItemDataInfoPresenter::initWithCommonData((CommonUseData*)uVar1);
  return;
}

BLItemDataInfoPresenter::BLItemDataInfoPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLItemDataInfoPresenter::create(BLItemDataInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLItemDataInfoPresenter::onUnEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((*(int *)(((int)this) + 0x20) != 0) &&
     (iVar1 = func_0079e4bc(*(int *)(((int)this) + 0x20) + 8,(unsigned char *)((char *)&g_005ee096 + (intptr_t)(g_005ee100)),p2,
                              p4,p4), iVar1 != 0)) {
    uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(**(undefined4 **)(((int)this) + 0x20)),(int *)0);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))());
    if ((iVar1 == 0xd) && (iVar1 = (**(code **)(*(int *)(piVar3) + (0x38)))(piVar3), iVar1 == 1)) {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x180)))());
      ((ImmortalsRoleData *)(uVar2))->unEquip((CommonUseData*)*(undefined4 *)(((int)this) + 0x20));
    }
    else {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
      ((BackPackData *)(uVar2))->unEquip((CommonUseData*)*(undefined4 *)(((int)this) + 0x20));
    }
  }
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar2))->removeUIByID(0x1f);
  return;
}

void BLItemDataInfoPresenter::onExit()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  iVar1 = (undefined4)(intptr_t)(g_005ee288);
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar3))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x20)),(intptr_t)0);
  iVar5 = 0;
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee28c)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee290)) + iVar1));
    iVar5 = (undefined4)(intptr_t)(func_0079e55c(iVar4,iStack_20,uStack_1c,0));
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x1e)),(intptr_t)0);
  piVar2 = (int *)0x0;
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee28c)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee294)) + iVar1));
    piVar2 = (int *)func_0079e55c(iVar4,iStack_20,uStack_1c,0);
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar6 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0xb5)),(intptr_t)0);
  iVar4 = 0;
  if (iVar6 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee28c)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ee1e2 + (intptr_t)(g_005ee298)) + iVar1));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar6,iStack_20,uStack_1c,0));
  }
  if (((iVar5 == 0) && (piVar2 != (int *)0x0)) && (iVar4 == 0)) {
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x20)))(piVar2);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))());
    0 /* ctorZero */;
    uVar7 = (undefined4)(cocos2d::CCMoveTo::create(g_005ee29c, *(cocos2d::CCPoint const*)&uStack_18));
    ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar7);
  }
  return;
}

void BLItemDataInfoPresenter::initWithView(BLItemDataInfoView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
  if (iVar2 != 1) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
    if (iVar2 != 2) {
      piVar1 = (int *)((BLItemDataInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUnequip();
      (**(code **)(*(int *)(piVar1) + (0x254)))
                (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005ee2e4 + (intptr_t)(g_005ee33c))),0,0x20);
      goto code_r0x005ee30c;
    }
  }
  piVar1 = (int *)((BLItemDataInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLItemDataInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
code_r0x005ee30c:
  uVar3 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x24) = uVar3;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),uVar3,99);
  uVar3 = (undefined4)(((BLItemDataInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005ee33c + (intptr_t)(g_005ee340)), 0x3f800000, 1);
  return;
}

void BLItemDataInfoPresenter::initWithItemData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoPresenter::initWithCommonData(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

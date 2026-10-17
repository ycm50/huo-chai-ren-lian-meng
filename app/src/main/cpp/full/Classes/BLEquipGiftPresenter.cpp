#include "BLEquipGiftPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "CCUserDefault.h"
#include "GiftItemData.h"
#include "BLEquipGiftItemPresenter.h"
#include "BLEquipGiftItemView.h"
#include "BLEquipGiftView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BackPackData.h"
#include "ChargePointData.h"
#include "DailyGiftData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>   // ghost_fix.js 自动补齐
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e714(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079ea54(...);
extern "C" long long func_0079eac4(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005415c8;
extern "C" unsigned long UNK_005415e0;
extern "C" unsigned long UNK_005415f8;
extern "C" unsigned long UNK_00541628;
extern "C" unsigned long UNK_00541680;
extern "C" unsigned long UNK_005416b4;
extern "C" unsigned long UNK_005416f8;
extern "C" unsigned long UNK_00541720;
extern "C" unsigned long UNK_0054176c;
extern "C" unsigned long UNK_00541776;
extern "C" unsigned long UNK_005417a8;
extern "C" unsigned long UNK_005417e2;
extern "C" unsigned long UNK_0054180e;
extern "C" unsigned long UNK_005418b0;
extern "C" unsigned long UNK_005418b2;
extern "C" unsigned long UNK_005418ca;
extern "C" unsigned long UNK_005418cc;
extern "C" unsigned long UNK_005418e4;
extern "C" unsigned long UNK_005418e6;
extern "C" unsigned long UNK_005418fe;
extern "C" unsigned long UNK_00541900;
extern "C" unsigned long UNK_0054194e;
extern "C" unsigned long UNK_0054196e;
extern "C" unsigned long UNK_005419ca;
extern "C" unsigned long UNK_00541a02;
extern "C" unsigned long UNK_00541a2e;
extern "C" unsigned long UNK_00541a82;
extern "C" unsigned long UNK_00541a96;
extern "C" unsigned long UNK_00541aa8;
extern "C" unsigned long UNK_00541ae6;
extern "C" unsigned long UNK_00541b1c;
extern "C" unsigned long UNK_00541b3a;
extern "C" unsigned long UNK_00541b4a;
extern "C" unsigned long UNK_00541b84;
extern "C" unsigned long UNK_00541cc2;
extern "C" unsigned long UNK_00541cf0;
extern "C" unsigned long UNK_00541d44;
extern "C" unsigned long UNK_00541d58;
extern "C" unsigned long UNK_00541d6a;
extern "C" unsigned long UNK_00541da8;
extern "C" unsigned long UNK_00541dec;
extern "C" unsigned long UNK_00541e32;
extern "C" unsigned long UNK_00541e50;
extern "C" unsigned long UNK_00541e60;
extern "C" unsigned long UNK_00541e9a;
extern "C" unsigned long UNK_00541ee6;
extern "C" unsigned long UNK_00541f08;
extern "C" unsigned long UNK_00541f22;
extern "C" unsigned long UNK_00541f44;
extern "C" unsigned long UNK_00541f66;
extern "C" unsigned long UNK_00541f88;
extern "C" unsigned long UNK_00541fa4;
extern "C" unsigned long UNK_00541fc6;
extern "C" unsigned long UNK_00541fe0;
extern "C" unsigned long UNK_00542002;
extern "C" unsigned long UNK_0054207c;
extern "C" unsigned long UNK_0054209e;
extern "C" unsigned long UNK_005420b8;
extern "C" unsigned long UNK_005420da;
extern "C" unsigned long UNK_005420f4;
extern "C" unsigned long UNK_00542116;
extern "C" unsigned long UNK_00542130;
extern "C" unsigned long UNK_00542152;
extern "C" unsigned long UNK_0054216c;
extern "C" unsigned long UNK_0054218e;
extern "C" unsigned long UNK_005421a8;
extern "C" unsigned long UNK_005421ca;
extern "C" unsigned long UNK_005421e4;
extern "C" unsigned long UNK_00542206;
extern "C" unsigned long UNK_00542220;
extern "C" unsigned long UNK_00542242;
extern "C" unsigned long UNK_0054225c;
extern "C" unsigned long UNK_0054227e;
extern "C" unsigned long UNK_00542298;
extern "C" unsigned long UNK_005422ba;
extern "C" unsigned long UNK_005422d4;
extern "C" unsigned long UNK_005422f6;
extern "C" unsigned long UNK_00542310;
extern "C" unsigned long UNK_00542332;
extern "C" unsigned long UNK_0054234c;
extern "C" unsigned long UNK_0054236e;
extern "C" unsigned long UNK_005423f0;
extern "C" unsigned long UNK_00542412;
extern "C" unsigned long UNK_005424d4;
extern "C" unsigned long UNK_0054263c;
extern "C" unsigned long UNK_0054266e;
extern "C" unsigned long UNK_00542792;
extern "C" unsigned long UNK_00542793;
extern "C" unsigned long UNK_00542794;
extern "C" unsigned long UNK_005427a6;
extern "C" unsigned long UNK_0054285c;
extern "C" unsigned long UNK_00542a2a;
extern "C" unsigned long UNK_00542a76;
extern "C" unsigned long UNK_00542a86;
extern "C" unsigned long UNK_00542aa0;
extern "C" unsigned long UNK_00542b8e;
extern "C" unsigned long UNK_00542b90;
extern "C" unsigned long UNK_00542be2;
extern "C" unsigned long UNK_00542bfa;
extern "C" unsigned long UNK_00542c0c;
extern "C" unsigned long UNK_00542c24;
extern "C" unsigned long UNK_00542c3a;
extern "C" unsigned long UNK_00542c96;
extern "C" unsigned long UNK_00542cb6;
extern "C" unsigned long UNK_00542ce4;
extern "C" unsigned long UNK_00542d10;
extern "C" unsigned long UNK_00542d2a;
extern "C" unsigned long UNK_00542d78;
extern "C" unsigned long UNK_00542db2;
extern "C" unsigned long UNK_00542dc8;
extern "C" unsigned long UNK_00542df6;
extern "C" unsigned long UNK_00542e02;
extern "C" unsigned long UNK_00542e0e;
extern "C" unsigned long UNK_00542ec2;
extern "C" unsigned long UNK_00542eec;
extern "C" unsigned long UNK_00542f16;
extern "C" unsigned long UNK_00542f44;
extern "C" unsigned long UNK_00542f72;
extern "C" unsigned long UNK_00542f80;
extern "C" unsigned long UNK_00542fca;
extern "C" unsigned long UNK_00542fcc;
extern "C" unsigned long UNK_00542fe6;
extern "C" unsigned long UNK_00542fe8;
extern "C" unsigned long UNK_00543070;
extern "C" unsigned long UNK_005430a0;
extern "C" unsigned long UNK_005430d6;
extern "C" unsigned long UNK_005430e4;
extern "C" unsigned long UNK_00543200;
extern "C" unsigned long UNK_00543214;
extern "C" unsigned long UNK_00543222;
extern "C" unsigned long UNK_005432e6;
extern "C" unsigned long UNK_005432f4;
extern "C" unsigned long UNK_0054339a;
extern "C" unsigned long UNK_00543426;
extern "C" unsigned long UNK_00543446;
extern "C" unsigned long UNK_0054345c;
extern "C" unsigned long UNK_005434a2;
extern "C" unsigned long UNK_005434ae;
extern "C" unsigned long UNK_005434d6;
extern "C" unsigned long UNK_00543540;
extern "C" unsigned long UNK_00543574;
extern "C" unsigned long UNK_00543582;
extern "C" unsigned long UNK_005435aa;
extern "C" unsigned long UNK_0054360c;
extern "C" unsigned long UNK_0054362a;
extern "C" unsigned long _DAT_00543904;
extern "C" unsigned long _DAT_00543908;
extern "C" unsigned long _DAT_0054390c;
extern "C" unsigned long _DAT_00543910;
extern "C" unsigned long _DAT_00543914;
extern "C" unsigned long _DAT_00543918;
extern "C" unsigned long _DAT_0054391c;
extern "C" unsigned long _DAT_00543920;
extern "C" unsigned long _DAT_00543924;
extern "C" unsigned long _DAT_00543928;
extern "C" unsigned long _DAT_00543b68;
extern "C" unsigned long _DAT_00543b6c;
extern "C" unsigned long _DAT_00543b70;
extern "C" unsigned long _DAT_00543b74;
extern "C" unsigned long _DAT_00543b78;
extern "C" unsigned long _DAT_00543b7c;
extern "C" unsigned long _DAT_00543b80;
extern "C" unsigned long _DAT_00543b84;
extern "C" unsigned long _DAT_00543b88;
extern "C" unsigned long _DAT_00543b8c;
extern "C" unsigned long _DAT_00543b90;
extern "C" unsigned long _DAT_00543b94;
extern "C" unsigned long _DAT_00543b98;
extern "C" unsigned long _DAT_00543b9c;
extern "C" unsigned long _UNK_005415cc;
extern "C" unsigned long _UNK_005415e4;
extern "C" unsigned long _UNK_005415fc;
extern "C" unsigned long _UNK_0054162c;
extern "C" unsigned long _UNK_005416e4;
extern "C" unsigned long _UNK_005416e8;
extern "C" unsigned long _UNK_005416fc;
extern "C" unsigned long _UNK_00541724;
extern "C" unsigned long _UNK_0054177c;
extern "C" unsigned long _UNK_00541780;
extern "C" unsigned long _UNK_00541794;
extern "C" unsigned long _UNK_00541798;
extern "C" unsigned long _UNK_005417ac;
extern "C" unsigned long _UNK_00541838;
extern "C" unsigned long _UNK_0054183c;
extern "C" unsigned long _UNK_00541910;
extern "C" unsigned long _UNK_00541914;
extern "C" unsigned long _UNK_00541918;
extern "C" unsigned long _UNK_0054191c;
extern "C" unsigned long _UNK_00541920;
extern "C" unsigned long _UNK_00541924;
extern "C" unsigned long _UNK_00541928;
extern "C" unsigned long _UNK_0054192c;
extern "C" unsigned long _UNK_00541c50;
extern "C" unsigned long _UNK_00541c54;
extern "C" unsigned long _UNK_00541c58;
extern "C" unsigned long _UNK_00541c5c;
extern "C" unsigned long _UNK_00541c60;
extern "C" unsigned long _UNK_00541c64;
extern "C" unsigned long _UNK_00541c68;
extern "C" unsigned long _UNK_00541c6c;
extern "C" unsigned long _UNK_00541c70;
extern "C" unsigned long _UNK_00541c74;
extern "C" unsigned long _UNK_00541c78;
extern "C" unsigned long _UNK_00541c7c;
extern "C" unsigned long _UNK_00541c80;
extern "C" unsigned long _UNK_00541c84;
extern "C" unsigned long _UNK_00541c88;
extern "C" unsigned long _UNK_00541c8c;
extern "C" unsigned long _UNK_00542008;
extern "C" unsigned long _UNK_0054200c;
extern "C" unsigned long _UNK_00542010;
extern "C" unsigned long _UNK_00542014;
extern "C" unsigned long _UNK_00542018;
extern "C" unsigned long _UNK_0054201c;
extern "C" unsigned long _UNK_00542020;
extern "C" unsigned long _UNK_00542024;
extern "C" unsigned long _UNK_00542028;
extern "C" unsigned long _UNK_0054202c;
extern "C" unsigned long _UNK_00542030;
extern "C" unsigned long _UNK_00542034;
extern "C" unsigned long _UNK_00542038;
extern "C" unsigned long _UNK_0054203c;
extern "C" unsigned long _UNK_00542040;
extern "C" unsigned long _UNK_00542044;
extern "C" unsigned long _UNK_00542048;
extern "C" unsigned long _UNK_0054204c;
extern "C" unsigned long _UNK_00542050;
extern "C" unsigned long _UNK_00542054;
extern "C" unsigned long _UNK_00542058;
extern "C" unsigned long _UNK_0054205c;
extern "C" unsigned long _UNK_00542060;
extern "C" unsigned long _UNK_00542370;
extern "C" unsigned long _UNK_00542374;
extern "C" unsigned long _UNK_00542378;
extern "C" unsigned long _UNK_0054237c;
extern "C" unsigned long _UNK_00542380;
extern "C" unsigned long _UNK_00542384;
extern "C" unsigned long _UNK_00542388;
extern "C" unsigned long _UNK_0054238c;
extern "C" unsigned long _UNK_00542390;
extern "C" unsigned long _UNK_00542394;
extern "C" unsigned long _UNK_00542398;
extern "C" unsigned long _UNK_0054239c;
extern "C" unsigned long _UNK_005423a0;
extern "C" unsigned long _UNK_005423a4;
extern "C" unsigned long _UNK_005423a8;
extern "C" unsigned long _UNK_005423ac;
extern "C" unsigned long _UNK_005423b0;
extern "C" unsigned long _UNK_005423b4;
extern "C" unsigned long _UNK_005423b8;
extern "C" unsigned long _UNK_005423bc;
extern "C" unsigned long _UNK_005423c0;
extern "C" unsigned long _UNK_005423c4;
extern "C" unsigned long _UNK_005423c8;
extern "C" unsigned long _UNK_005423cc;
extern "C" unsigned long _UNK_005423d0;
extern "C" unsigned long _UNK_005423d4;
extern "C" unsigned long _UNK_00542478;
extern "C" unsigned long _UNK_0054247c;
extern "C" unsigned long _UNK_005424c0;
extern "C" unsigned long _UNK_005424c4;
extern "C" unsigned long _UNK_005424d8;
extern "C" unsigned long _UNK_00542640;
extern "C" unsigned long _UNK_005429d8;
extern "C" unsigned long _UNK_005429dc;
extern "C" unsigned long _UNK_005429e0;
extern "C" unsigned long _UNK_005429e4;
extern "C" unsigned long _UNK_005429e8;
extern "C" unsigned long _UNK_00542b64;
extern "C" unsigned long _UNK_00542b68;
extern "C" unsigned long _UNK_00542b6c;
extern "C" unsigned long _UNK_00542b70;
extern "C" unsigned long _UNK_00542e58;
extern "C" unsigned long _UNK_00542e5c;
extern "C" unsigned long _UNK_00542e60;
extern "C" unsigned long _UNK_00542e64;
extern "C" unsigned long _UNK_00542e68;
extern "C" unsigned long _UNK_00542e6c;
extern "C" unsigned long _UNK_00542e70;
extern "C" unsigned long _UNK_00542e74;
extern "C" unsigned long _UNK_00542e78;
extern "C" unsigned long _UNK_00542e7c;
extern "C" unsigned long _UNK_00542e80;
extern "C" unsigned long _UNK_00542e84;
extern "C" unsigned long _UNK_00542e88;
extern "C" unsigned long _UNK_00542e8c;
extern "C" unsigned long _UNK_00542e90;
extern "C" unsigned long _UNK_00542e94;
extern "C" unsigned long _UNK_00542e98;
extern "C" unsigned long _UNK_00542e9c;
extern "C" unsigned long _UNK_00542ea0;
extern "C" unsigned long _UNK_00542ea4;
extern "C" unsigned long _UNK_00543038;
extern "C" unsigned long _UNK_0054303c;
extern "C" unsigned long _UNK_00543040;
extern "C" unsigned long _UNK_00543044;
extern "C" unsigned long _UNK_00543048;
extern "C" unsigned long _UNK_0054304c;
extern "C" unsigned long _UNK_00543050;
extern "C" unsigned long _UNK_00543054;
extern "C" unsigned long _UNK_00543058;
extern "C" unsigned long _UNK_0054305c;
extern "C" unsigned long _UNK_00543060;
extern "C" unsigned long _UNK_0054319c;
extern "C" unsigned long _UNK_005431a0;
extern "C" unsigned long _UNK_005431a4;
extern "C" unsigned long _UNK_005431a8;
extern "C" unsigned long _UNK_005431ac;
extern "C" unsigned long _UNK_005431b0;
extern "C" unsigned long _UNK_005431b4;
extern "C" unsigned long _UNK_005431b8;
extern "C" unsigned long _UNK_005431bc;
extern "C" unsigned long _UNK_005431c0;
extern "C" unsigned long _UNK_005431c4;
extern "C" unsigned long _UNK_005433c4;
extern "C" unsigned long _UNK_005433c8;
extern "C" unsigned long _UNK_005433cc;
extern "C" unsigned long _UNK_005433d0;
extern "C" unsigned long _UNK_005433d4;
extern "C" unsigned long _UNK_005433d8;
extern "C" unsigned long _UNK_005433dc;
extern "C" unsigned long _UNK_005433e0;
extern "C" unsigned long _UNK_005433e4;
extern "C" unsigned long _UNK_005433e8;
extern "C" unsigned long _UNK_005433ec;
extern "C" unsigned long _UNK_00543660;
extern "C" unsigned long _UNK_00543664;
extern "C" unsigned long _UNK_00543668;
extern "C" unsigned long _UNK_0054366c;
extern "C" unsigned long _UNK_00543670;
extern "C" unsigned long _UNK_00543674;
extern "C" unsigned long _UNK_00543678;
extern "C" unsigned long _UNK_0054367c;
extern "C" unsigned long _UNK_00543680;
extern "C" unsigned long _UNK_00543684;
extern "C" unsigned long _UNK_00543688;
extern "C" unsigned long _UNK_0054368c;
extern "C" unsigned long _UNK_00543690;
extern "C" unsigned long _UNK_00543694;
extern "C" unsigned long _UNK_00543698;
extern "C" unsigned long _UNK_0054369c;
extern "C" unsigned long _UNK_005436a0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_005415c8;
extern "C" unsigned long g_005415cc;
extern "C" unsigned long g_005415e0;
extern "C" unsigned long g_005415e4;
extern "C" unsigned long g_005415f8;
extern "C" unsigned long g_005415fc;
extern "C" unsigned long g_00541628;
extern "C" unsigned long g_0054162c;
extern "C" unsigned long g_00541680;
extern "C" unsigned long g_005416b4;
extern "C" unsigned long g_005416e4;
extern "C" unsigned long g_005416e8;
extern "C" unsigned long g_005416f8;
extern "C" unsigned long g_005416fc;
extern "C" unsigned long g_00541720;
extern "C" unsigned long g_00541724;
extern "C" unsigned long g_0054176c;
extern "C" unsigned long g_00541776;
extern "C" unsigned long g_0054177c;
extern "C" unsigned long g_00541780;
extern "C" unsigned long g_00541794;
extern "C" unsigned long g_00541798;
extern "C" unsigned long g_005417a8;
extern "C" unsigned long g_005417ac;
extern "C" unsigned long g_005417e2;
extern "C" unsigned long g_0054180e;
extern "C" unsigned long g_00541838;
extern "C" unsigned long g_0054183c;
extern "C" unsigned long g_005418b0;
extern "C" unsigned long g_005418b2;
extern "C" unsigned long g_005418ca;
extern "C" unsigned long g_005418cc;
extern "C" unsigned long g_005418e4;
extern "C" unsigned long g_005418e6;
extern "C" unsigned long g_005418fe;
extern "C" unsigned long g_00541900;
extern "C" unsigned long g_00541910;
extern "C" unsigned long g_00541914;
extern "C" unsigned long g_00541918;
extern "C" unsigned long g_0054191c;
extern "C" unsigned long g_00541920;
extern "C" unsigned long g_00541924;
extern "C" unsigned long g_00541928;
extern "C" unsigned long g_0054192c;
extern "C" unsigned long g_0054194e;
extern "C" unsigned long g_0054196e;
extern "C" unsigned long g_005419ca;
extern "C" unsigned long g_00541a02;
extern "C" unsigned long g_00541a2e;
extern "C" unsigned long g_00541a82;
extern "C" unsigned long g_00541a96;
extern "C" unsigned long g_00541aa8;
extern "C" unsigned long g_00541ae6;
extern "C" unsigned long g_00541b1c;
extern "C" unsigned long g_00541b3a;
extern "C" unsigned long g_00541b4a;
extern "C" unsigned long g_00541b84;
extern "C" unsigned long g_00541c50;
extern "C" unsigned long g_00541c54;
extern "C" unsigned long g_00541c58;
extern "C" unsigned long g_00541c5c;
extern "C" unsigned long g_00541c60;
extern "C" unsigned long g_00541c64;
extern "C" unsigned long g_00541c68;
extern "C" unsigned long g_00541c6c;
extern "C" unsigned long g_00541c70;
extern "C" unsigned long g_00541c74;
extern "C" unsigned long g_00541c78;
extern "C" unsigned long g_00541c7c;
extern "C" unsigned long g_00541c80;
extern "C" unsigned long g_00541c84;
extern "C" unsigned long g_00541c88;
extern "C" unsigned long g_00541c8c;
extern "C" unsigned long g_00541cc2;
extern "C" unsigned long g_00541cf0;
extern "C" unsigned long g_00541d44;
extern "C" unsigned long g_00541d58;
extern "C" unsigned long g_00541d6a;
extern "C" unsigned long g_00541da8;
extern "C" unsigned long g_00541dec;
extern "C" unsigned long g_00541e32;
extern "C" unsigned long g_00541e50;
extern "C" unsigned long g_00541e60;
extern "C" unsigned long g_00541e9a;
extern "C" unsigned long g_00541ee6;
extern "C" unsigned long g_00541f08;
extern "C" unsigned long g_00541f22;
extern "C" unsigned long g_00541f44;
extern "C" unsigned long g_00541f66;
extern "C" unsigned long g_00541f88;
extern "C" unsigned long g_00541fa4;
extern "C" unsigned long g_00541fc6;
extern "C" unsigned long g_00541fe0;
extern "C" unsigned long g_00542002;
extern "C" unsigned long g_00542008;
extern "C" unsigned long g_0054200c;
extern "C" unsigned long g_00542010;
extern "C" unsigned long g_00542014;
extern "C" unsigned long g_00542018;
extern "C" unsigned long g_0054201c;
extern "C" unsigned long g_00542020;
extern "C" unsigned long g_00542024;
extern "C" unsigned long g_00542028;
extern "C" unsigned long g_0054202c;
extern "C" unsigned long g_00542030;
extern "C" unsigned long g_00542034;
extern "C" unsigned long g_00542038;
extern "C" unsigned long g_0054203c;
extern "C" unsigned long g_00542040;
extern "C" unsigned long g_00542044;
extern "C" unsigned long g_00542048;
extern "C" unsigned long g_0054204c;
extern "C" unsigned long g_00542050;
extern "C" unsigned long g_00542054;
extern "C" unsigned long g_00542058;
extern "C" unsigned long g_0054205c;
extern "C" unsigned long g_00542060;
extern "C" unsigned long g_0054207c;
extern "C" unsigned long g_0054209e;
extern "C" unsigned long g_005420b8;
extern "C" unsigned long g_005420da;
extern "C" unsigned long g_005420f4;
extern "C" unsigned long g_00542116;
extern "C" unsigned long g_00542130;
extern "C" unsigned long g_00542152;
extern "C" unsigned long g_0054216c;
extern "C" unsigned long g_0054218e;
extern "C" unsigned long g_005421a8;
extern "C" unsigned long g_005421ca;
extern "C" unsigned long g_005421e4;
extern "C" unsigned long g_00542206;
extern "C" unsigned long g_00542220;
extern "C" unsigned long g_00542242;
extern "C" unsigned long g_0054225c;
extern "C" unsigned long g_0054227e;
extern "C" unsigned long g_00542298;
extern "C" unsigned long g_005422ba;
extern "C" unsigned long g_005422d4;
extern "C" unsigned long g_005422f6;
extern "C" unsigned long g_00542310;
extern "C" unsigned long g_00542332;
extern "C" unsigned long g_0054234c;
extern "C" unsigned long g_0054236e;
extern "C" unsigned long g_00542370;
extern "C" unsigned long g_00542374;
extern "C" unsigned long g_00542378;
extern "C" unsigned long g_0054237c;
extern "C" unsigned long g_00542380;
extern "C" unsigned long g_00542384;
extern "C" unsigned long g_00542388;
extern "C" unsigned long g_0054238c;
extern "C" unsigned long g_00542390;
extern "C" unsigned long g_00542394;
extern "C" unsigned long g_00542398;
extern "C" unsigned long g_0054239c;
extern "C" unsigned long g_005423a0;
extern "C" unsigned long g_005423a4;
extern "C" unsigned long g_005423a8;
extern "C" unsigned long g_005423ac;
extern "C" unsigned long g_005423b0;
extern "C" unsigned long g_005423b4;
extern "C" unsigned long g_005423b8;
extern "C" unsigned long g_005423bc;
extern "C" unsigned long g_005423c0;
extern "C" unsigned long g_005423c4;
extern "C" unsigned long g_005423c8;
extern "C" unsigned long g_005423cc;
extern "C" unsigned long g_005423d0;
extern "C" unsigned long g_005423d4;
extern "C" unsigned long g_005423f0;
extern "C" unsigned long g_00542412;
extern "C" unsigned long g_00542478;
extern "C" unsigned long g_0054247c;
extern "C" unsigned long g_005424c0;
extern "C" unsigned long g_005424c4;
extern "C" unsigned long g_005424d4;
extern "C" unsigned long g_005424d8;
extern "C" unsigned long g_0054263c;
extern "C" unsigned long g_00542640;
extern "C" unsigned long g_0054266e;
extern "C" unsigned long g_00542792;
extern "C" unsigned long g_00542793;
extern "C" unsigned long g_00542794;
extern "C" unsigned long g_005427a6;
extern "C" unsigned long g_0054285c;
extern "C" unsigned long g_005429d8;
extern "C" unsigned long g_005429dc;
extern "C" unsigned long g_005429e0;
extern "C" unsigned long g_005429e4;
extern "C" unsigned long g_005429e8;
extern "C" unsigned long g_00542a2a;
extern "C" unsigned long g_00542a76;
extern "C" unsigned long g_00542a86;
extern "C" unsigned long g_00542aa0;
extern "C" unsigned long g_00542b64;
extern "C" unsigned long g_00542b68;
extern "C" unsigned long g_00542b6c;
extern "C" unsigned long g_00542b70;
extern "C" unsigned long g_00542b8e;
extern "C" unsigned long g_00542b90;
extern "C" unsigned long g_00542be2;
extern "C" unsigned long g_00542bfa;
extern "C" unsigned long g_00542c0c;
extern "C" unsigned long g_00542c24;
extern "C" unsigned long g_00542c3a;
extern "C" unsigned long g_00542c96;
extern "C" unsigned long g_00542cb6;
extern "C" unsigned long g_00542ce4;
extern "C" unsigned long g_00542d10;
extern "C" unsigned long g_00542d2a;
extern "C" unsigned long g_00542d78;
extern "C" unsigned long g_00542db2;
extern "C" unsigned long g_00542dc8;
extern "C" unsigned long g_00542df6;
extern "C" unsigned long g_00542e02;
extern "C" unsigned long g_00542e0e;
extern "C" unsigned long g_00542e58;
extern "C" unsigned long g_00542e5c;
extern "C" unsigned long g_00542e60;
extern "C" unsigned long g_00542e64;
extern "C" unsigned long g_00542e68;
extern "C" unsigned long g_00542e6c;
extern "C" unsigned long g_00542e70;
extern "C" unsigned long g_00542e74;
extern "C" unsigned long g_00542e78;
extern "C" unsigned long g_00542e7c;
extern "C" unsigned long g_00542e80;
extern "C" unsigned long g_00542e84;
extern "C" unsigned long g_00542e88;
extern "C" unsigned long g_00542e8c;
extern "C" unsigned long g_00542e90;
extern "C" unsigned long g_00542e94;
extern "C" unsigned long g_00542e98;
extern "C" unsigned long g_00542e9c;
extern "C" unsigned long g_00542ea0;
extern "C" unsigned long g_00542ea4;
extern "C" unsigned long g_00542ec2;
extern "C" unsigned long g_00542eec;
extern "C" unsigned long g_00542f16;
extern "C" unsigned long g_00542f44;
extern "C" unsigned long g_00542f72;
extern "C" unsigned long g_00542f80;
extern "C" unsigned long g_00542fca;
extern "C" unsigned long g_00542fcc;
extern "C" unsigned long g_00542fe6;
extern "C" unsigned long g_00542fe8;
extern "C" unsigned long g_00543038;
extern "C" unsigned long g_0054303c;
extern "C" unsigned long g_00543040;
extern "C" unsigned long g_00543044;
extern "C" unsigned long g_00543048;
extern "C" unsigned long g_0054304c;
extern "C" unsigned long g_00543050;
extern "C" unsigned long g_00543054;
extern "C" unsigned long g_00543058;
extern "C" unsigned long g_0054305c;
extern "C" unsigned long g_00543060;
extern "C" unsigned long g_00543070;
extern "C" unsigned long g_005430a0;
extern "C" unsigned long g_005430d6;
extern "C" unsigned long g_005430e4;
extern "C" unsigned long g_0054319c;
extern "C" unsigned long g_005431a0;
extern "C" unsigned long g_005431a4;
extern "C" unsigned long g_005431a8;
extern "C" unsigned long g_005431ac;
extern "C" unsigned long g_005431b0;
extern "C" unsigned long g_005431b4;
extern "C" unsigned long g_005431b8;
extern "C" unsigned long g_005431bc;
extern "C" unsigned long g_005431c0;
extern "C" unsigned long g_005431c4;
extern "C" unsigned long g_00543200;
extern "C" unsigned long g_00543214;
extern "C" unsigned long g_00543222;
extern "C" unsigned long g_005432e6;
extern "C" unsigned long g_005432f4;
extern "C" unsigned long g_0054339a;
extern "C" unsigned long g_005433c4;
extern "C" unsigned long g_005433c8;
extern "C" unsigned long g_005433cc;
extern "C" unsigned long g_005433d0;
extern "C" unsigned long g_005433d4;
extern "C" unsigned long g_005433d8;
extern "C" unsigned long g_005433dc;
extern "C" unsigned long g_005433e0;
extern "C" unsigned long g_005433e4;
extern "C" unsigned long g_005433e8;
extern "C" unsigned long g_005433ec;
extern "C" unsigned long g_00543426;
extern "C" unsigned long g_00543446;
extern "C" unsigned long g_0054345c;
extern "C" unsigned long g_005434a2;
extern "C" unsigned long g_005434ae;
extern "C" unsigned long g_005434d6;
extern "C" unsigned long g_00543540;
extern "C" unsigned long g_00543574;
extern "C" unsigned long g_00543582;
extern "C" unsigned long g_005435aa;
extern "C" unsigned long g_0054360c;
extern "C" unsigned long g_0054362a;
extern "C" unsigned long g_00543660;
extern "C" unsigned long g_00543664;
extern "C" unsigned long g_00543668;
extern "C" unsigned long g_0054366c;
extern "C" unsigned long g_00543670;
extern "C" unsigned long g_00543674;
extern "C" unsigned long g_00543678;
extern "C" unsigned long g_0054367c;
extern "C" unsigned long g_00543680;
extern "C" unsigned long g_00543684;
extern "C" unsigned long g_00543688;
extern "C" unsigned long g_0054368c;
extern "C" unsigned long g_00543690;
extern "C" unsigned long g_00543694;
extern "C" unsigned long g_00543698;
extern "C" unsigned long g_0054369c;
extern "C" unsigned long g_005436a0;
extern "C" unsigned long g_00543904;
extern "C" unsigned long g_00543908;
extern "C" unsigned long g_0054390c;
extern "C" unsigned long g_00543910;
extern "C" unsigned long g_00543914;
extern "C" unsigned long g_00543918;
extern "C" unsigned long g_0054391c;
extern "C" unsigned long g_00543920;
extern "C" unsigned long g_00543924;
extern "C" unsigned long g_00543928;
extern "C" unsigned long g_00543b68;
extern "C" unsigned long g_00543b6c;
extern "C" unsigned long g_00543b70;
extern "C" unsigned long g_00543b74;
extern "C" unsigned long g_00543b78;
extern "C" unsigned long g_00543b7c;
extern "C" unsigned long g_00543b80;
extern "C" unsigned long g_00543b84;
extern "C" unsigned long g_00543b88;
extern "C" unsigned long g_00543b8c;
extern "C" unsigned long g_00543b90;
extern "C" unsigned long g_00543b94;
extern "C" unsigned long g_00543b98;
extern "C" unsigned long g_00543b9c;
GiftItemData* BLEquipGiftPresenter::getGiftItemData() const
{
  return (GiftItemData*)(*(undefined4 *)(((int)this) + 0x24));
}

bool BLEquipGiftPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipGiftPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipGiftPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipGiftPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLEquipGiftPresenter::numOfColumn(BLGridView* p1)
{
  return 3;
}

BLEquipGiftPresenter::~BLEquipGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00541680 + g_005416e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005416b4 + g_005416e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined8 BLEquipGiftPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x18))();
  if ((10 < iVar1) && (iVar1 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x18))(), iVar1 < 0x10)) {
    (void)(((long long)::time((time_t *)(void *)(&uStack_c))));
    uVar2 = (undefined4)(((long long)((int)(uStack_c) / (int)(0x3c))));
    uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    ((cocos2d::CCUserDefault *)uVar3)->setIntegerForKey((char const*)&g_0054176c + g_0054177c, uVar2);
    cocos2d::CCLog((char const*)&g_00541776 + g_00541780, uVar2);
  }
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(100);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

undefined4 BLEquipGiftPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLEquipGiftPresenter::setGiftItemData(GiftItemData* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLEquipGiftPresenter::BLEquipGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005417e2 + g_00541838);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(9)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054180e + g_0054183c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLEquipGiftPresenter::create(BLEquipGiftView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipGiftPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
void BLEquipGiftPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::initWithView(BLEquipGiftView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLEquipGiftPresenter::numOfRow(BLGridView* p1)
{
  undefined4 uVar1;
  undefined8 uVar2;
  int iStack_1c;
  int iStack_18;
  
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_1c);
  uVar2 = (undefined4)(intptr_t)(func_0079e714(iStack_18 - iStack_1c >> 2));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005424c0))|(((long long)(unsigned)(g_005424c4))<<32))))));
  (void)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005424c0))|(((long long)(unsigned)(g_005424c4))<<32))))))))));
  (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=::ceilf(_f);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005424c0))|(((long long)(unsigned)(g_005424c4))<<32))))))))))))));
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=::ceilf(_f);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005424c0))|(((long long)(unsigned)(g_005424c4))<<32))))))))))))))))));
  ((std::vector<int, std::allocator<int>> *)&iStack_1c)->~vector();
  return uVar1;
}

void BLEquipGiftPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [12];
  int iStack_24;
  int iStack_20;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x24) + 0x18))());
  if ((iVar1 < 0xb) || (iVar1 = (**(code **)(**(int **)(((int)this) + 0x24) + 0x18))(), 0xf < iVar1)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(1);
  }
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_24);
  ((std::vector<int, std::allocator<int>> *)&iStack_24)->~vector();
  if (p3 < (uint)(iStack_20 - iStack_24 >> 2)) {
    uVar2 = (undefined4)(((BLEquipGiftItemView *)this)->create());
    uVar3 = (undefined4)(((BLEquipGiftItemView *)this)->getPresenter());
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(auStack_30);
    puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)auStack_30)->at((unsigned int)p3);
    uVar6 = (undefined4)(*puVar4);
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x28))(&iStack_24);
    puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)&iStack_24)->at((unsigned int)p3);
    ((BLEquipGiftItemPresenter *)uVar3)->initWith(uVar6, *puVar4, uVar5);
    ((std::vector<int, std::allocator<int>> *)&iStack_24)->~vector();
    ((std::vector<int, std::allocator<int>> *)auStack_30)->~vector();
  }
  else {
    uVar2 = (undefined4)(cocos2d::CCNode::create());
  }
  return;
}

void BLEquipGiftPresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_24;
  int iStack_20;
  
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_24);
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
  if (p3 < (uint)(iStack_20 - iStack_24 >> 2)) {
    (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))(&iStack_24);
    puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)(&iStack_24))->at((unsigned int)p3);
    uVar5 = (undefined4)(*puVar1);
    ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
    uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(uVar5),(int *)0);
    (**(code **)(*(int *)(piVar3) + (0x30)))();
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
    if (iVar4 == 1) {
      (**(code **)(*(int *)(piVar3) + (0x9c)))(piVar3);
    }
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->showItemDataInfo((ItemData*)piVar3);
  }
  return;
}

void BLEquipGiftPresenter::addItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::onSMHCHCallback(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::onDialyPack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::onWeekPack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipGiftPresenter::initWithData(GiftItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

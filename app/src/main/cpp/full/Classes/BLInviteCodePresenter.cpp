#include "BLInviteCodePresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLInviteCodeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreeRewardInfoPresenter.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062381c;
extern "C" unsigned long UNK_00623834;
extern "C" unsigned long UNK_0062384c;
extern "C" unsigned long UNK_006238c0;
extern "C" unsigned long UNK_00623908;
extern "C" unsigned long UNK_00623920;
extern "C" unsigned long UNK_00623948;
extern "C" unsigned long UNK_0062399c;
extern "C" unsigned long UNK_006239d2;
extern "C" unsigned long UNK_00623a90;
extern "C" unsigned long UNK_00623ab8;
extern "C" unsigned long UNK_00623ad4;
extern "C" unsigned long UNK_00623ad8;
extern "C" unsigned long UNK_00623b1a;
extern "C" unsigned long UNK_00623b6a;
extern "C" unsigned long UNK_00623c3e;
extern "C" unsigned long UNK_00623c5c;
extern "C" unsigned long UNK_00623c78;
extern "C" unsigned long UNK_00623c92;
extern "C" unsigned long UNK_00623da2;
extern "C" unsigned long UNK_00623dfe;
extern "C" unsigned long UNK_00623e9e;
extern "C" unsigned long UNK_00623fcc;
extern "C" unsigned long UNK_00623fee;
extern "C" unsigned long UNK_0062406e;
extern "C" unsigned long UNK_0062408a;
extern "C" unsigned long UNK_006240ca;
extern "C" unsigned long UNK_006240cc;
extern "C" unsigned long UNK_0062411e;
extern "C" unsigned long UNK_00624120;
extern "C" unsigned long UNK_0062415c;
extern "C" unsigned long UNK_006241a0;
extern "C" unsigned long UNK_00624248;
extern "C" unsigned long UNK_00624274;
extern "C" unsigned long UNK_00624276;
extern "C" unsigned long UNK_00624290;
extern "C" unsigned long UNK_006242be;
extern "C" unsigned long UNK_006242c0;
extern "C" unsigned long UNK_00624334;
extern "C" unsigned long UNK_00624362;
extern "C" unsigned long UNK_00624364;
extern "C" unsigned long UNK_0062450c;
extern "C" unsigned long UNK_006245a8;
extern "C" unsigned long UNK_006245bc;
extern "C" unsigned long UNK_006245e0;
extern "C" unsigned long UNK_00624600;
extern "C" unsigned long UNK_00624624;
extern "C" unsigned long UNK_00624632;
extern "C" unsigned long UNK_00624646;
extern "C" unsigned long UNK_0062466e;
extern "C" unsigned long UNK_00624698;
extern "C" unsigned long UNK_006246cc;
extern "C" unsigned long UNK_006246f0;
extern "C" unsigned long UNK_006246fe;
extern "C" unsigned long UNK_00624722;
extern "C" unsigned long UNK_0062474a;
extern "C" unsigned long UNK_00624774;
extern "C" unsigned long UNK_006247a8;
extern "C" unsigned long UNK_006247b4;
extern "C" unsigned long UNK_006247ce;
extern "C" unsigned long UNK_006248a8;
extern "C" unsigned long UNK_006248b6;
extern "C" unsigned long UNK_00624926;
extern "C" unsigned long UNK_0062494a;
extern "C" unsigned long UNK_00624958;
extern "C" unsigned long UNK_00624a84;
extern "C" unsigned long UNK_00624aa2;
extern "C" unsigned long UNK_00624ba0;
extern "C" unsigned long UNK_00624ba4;
extern "C" unsigned long UNK_00624ba8;
extern "C" unsigned long UNK_00624bac;
extern "C" unsigned long UNK_00624bb0;
extern "C" unsigned long UNK_00624bb4;
extern "C" unsigned long UNK_00624bb8;
extern "C" unsigned long UNK_00624bbc;
extern "C" unsigned long UNK_00624bc0;
extern "C" unsigned long UNK_00624bc4;
extern "C" unsigned long UNK_00624bc8;
extern "C" unsigned long UNK_00624bcc;
extern "C" unsigned long UNK_00624bd0;
extern "C" unsigned long UNK_00624bd4;
extern "C" unsigned long UNK_00624bd8;
extern "C" unsigned long UNK_00624bdc;
extern "C" unsigned long UNK_00624be0;
extern "C" unsigned long UNK_00624be4;
extern "C" unsigned long UNK_00624be8;
extern "C" unsigned long UNK_00624bec;
extern "C" unsigned long UNK_00624bf0;
extern "C" unsigned long UNK_00624bf4;
extern "C" unsigned long UNK_00624bf8;
extern "C" unsigned long UNK_00624bfc;
extern "C" unsigned long UNK_00624cea;
extern "C" unsigned long UNK_00624cee;
extern "C" unsigned long UNK_00624dc4;
extern "C" unsigned long UNK_00624dc6;
extern "C" unsigned long UNK_00624de0;
extern "C" unsigned long UNK_00624de2;
extern "C" unsigned long UNK_00624eda;
extern "C" unsigned long UNK_00624ef0;
extern "C" unsigned long UNK_00624f1a;
extern "C" unsigned long UNK_00624f5e;
extern "C" unsigned long UNK_00624f70;
extern "C" unsigned long UNK_00624f80;
extern "C" unsigned long UNK_00624f92;
extern "C" unsigned long UNK_00625016;
extern "C" unsigned long UNK_006250c0;
extern "C" unsigned long UNK_00625186;
extern "C" unsigned long UNK_00625187;
extern "C" unsigned long UNK_00625188;
extern "C" unsigned long UNK_006251a2;
extern "C" unsigned long UNK_006251c6;
extern "C" unsigned long UNK_006252c2;
extern "C" unsigned long UNK_006253a2;
extern "C" unsigned long UNK_00625472;
extern "C" unsigned long UNK_006254ae;
extern "C" unsigned long UNK_006254be;
extern "C" unsigned long UNK_006254fe;
extern "C" unsigned long UNK_0062551a;
extern "C" unsigned long UNK_00625536;
extern "C" unsigned long UNK_00625552;
extern "C" unsigned long UNK_0062556e;
extern "C" unsigned long UNK_0062558a;
extern "C" unsigned long UNK_006255a8;
extern "C" unsigned long UNK_00625616;
extern "C" unsigned long UNK_0062562c;
extern "C" unsigned long UNK_0062563c;
extern "C" unsigned long UNK_00625664;
extern "C" unsigned long UNK_006256e8;
extern "C" unsigned long UNK_006256fc;
extern "C" unsigned long UNK_00625726;
extern "C" unsigned long UNK_00625764;
extern "C" unsigned long UNK_00625776;
extern "C" unsigned long UNK_00625786;
extern "C" unsigned long UNK_00625798;
extern "C" unsigned long UNK_006257b4;
extern "C" unsigned long UNK_006257d4;
extern "C" unsigned long UNK_006257ee;
extern "C" unsigned long _UNK_00623820;
extern "C" unsigned long _UNK_00623838;
extern "C" unsigned long _UNK_00623850;
extern "C" unsigned long _UNK_006238d4;
extern "C" unsigned long _UNK_0062390c;
extern "C" unsigned long _UNK_00623910;
extern "C" unsigned long _UNK_00623958;
extern "C" unsigned long _UNK_0062395c;
extern "C" unsigned long _UNK_00623a7c;
extern "C" unsigned long _UNK_00623a80;
extern "C" unsigned long _UNK_00623a94;
extern "C" unsigned long _UNK_00623abc;
extern "C" unsigned long _UNK_00623bdc;
extern "C" unsigned long _UNK_00623be0;
extern "C" unsigned long _UNK_00623be4;
extern "C" unsigned long _UNK_00623be8;
extern "C" unsigned long _UNK_00623ffc;
extern "C" unsigned long _UNK_00624000;
extern "C" unsigned long _UNK_00624004;
extern "C" unsigned long _UNK_00624008;
extern "C" unsigned long _UNK_0062400c;
extern "C" unsigned long _UNK_00624010;
extern "C" unsigned long _UNK_00624014;
extern "C" unsigned long _UNK_00624018;
extern "C" unsigned long _UNK_0062401c;
extern "C" unsigned long _UNK_00624020;
extern "C" unsigned long _UNK_00624024;
extern "C" unsigned long _UNK_00624028;
extern "C" unsigned long _UNK_0062402c;
extern "C" unsigned long _UNK_00624030;
extern "C" unsigned long _UNK_00624034;
extern "C" unsigned long _UNK_00624038;
extern "C" unsigned long _UNK_0062403c;
extern "C" unsigned long _UNK_00624040;
extern "C" unsigned long _UNK_00624044;
extern "C" unsigned long _UNK_00624048;
extern "C" unsigned long _UNK_0062404c;
extern "C" unsigned long _UNK_00624050;
extern "C" unsigned long _UNK_006242e0;
extern "C" unsigned long _UNK_006242e4;
extern "C" unsigned long _UNK_006242e8;
extern "C" unsigned long _UNK_006242ec;
extern "C" unsigned long _UNK_006242f0;
extern "C" unsigned long _UNK_006242f4;
extern "C" unsigned long _UNK_006242f8;
extern "C" unsigned long _UNK_006242fc;
extern "C" unsigned long _UNK_00624300;
extern "C" unsigned long _UNK_00624304;
extern "C" unsigned long _UNK_00624308;
extern "C" unsigned long _UNK_0062430c;
extern "C" unsigned long _UNK_00624310;
extern "C" unsigned long _UNK_00624314;
extern "C" unsigned long _UNK_00624318;
extern "C" unsigned long _UNK_0062431c;
extern "C" unsigned long _UNK_00624320;
extern "C" unsigned long _UNK_00624324;
extern "C" unsigned long _UNK_00624328;
extern "C" unsigned long _UNK_00624584;
extern "C" unsigned long _UNK_00624588;
extern "C" unsigned long _UNK_0062458c;
extern "C" unsigned long _UNK_00624590;
extern "C" unsigned long _UNK_00624594;
extern "C" unsigned long _UNK_00624598;
extern "C" unsigned long _UNK_0062459c;
extern "C" unsigned long _UNK_0062482c;
extern "C" unsigned long _UNK_00624830;
extern "C" unsigned long _UNK_00624834;
extern "C" unsigned long _UNK_00624838;
extern "C" unsigned long _UNK_0062483c;
extern "C" unsigned long _UNK_00624840;
extern "C" unsigned long _UNK_00624844;
extern "C" unsigned long _UNK_00624848;
extern "C" unsigned long _UNK_0062484c;
extern "C" unsigned long _UNK_00624850;
extern "C" unsigned long _UNK_00624854;
extern "C" unsigned long _UNK_00624858;
extern "C" unsigned long _UNK_0062485c;
extern "C" unsigned long _UNK_00624860;
extern "C" unsigned long _UNK_00624864;
extern "C" unsigned long _UNK_00624868;
extern "C" unsigned long _UNK_0062486c;
extern "C" unsigned long _UNK_00624870;
extern "C" unsigned long _UNK_00624a3c;
extern "C" unsigned long _UNK_00624a40;
extern "C" unsigned long _UNK_00624a44;
extern "C" unsigned long _UNK_00624a48;
extern "C" unsigned long _UNK_00624a4c;
extern "C" unsigned long _UNK_00624ac8;
extern "C" unsigned long _UNK_00624acc;
extern "C" unsigned long _UNK_00624d00;
extern "C" unsigned long _UNK_00624d04;
extern "C" unsigned long _UNK_00624d08;
extern "C" unsigned long _UNK_00624e90;
extern "C" unsigned long _UNK_00624e94;
extern "C" unsigned long _UNK_00624e98;
extern "C" unsigned long _UNK_00624e9c;
extern "C" unsigned long _UNK_00624ea0;
extern "C" unsigned long _UNK_006251f8;
extern "C" unsigned long _UNK_006251fc;
extern "C" unsigned long _UNK_00625200;
extern "C" unsigned long _UNK_00625204;
extern "C" unsigned long _UNK_00625208;
extern "C" unsigned long _UNK_0062520c;
extern "C" unsigned long _UNK_00625210;
extern "C" unsigned long _UNK_00625214;
extern "C" unsigned long _UNK_00625218;
extern "C" unsigned long _UNK_0062521c;
extern "C" unsigned long _UNK_00625220;
extern "C" unsigned long _UNK_00625224;
extern "C" unsigned long _UNK_00625228;
extern "C" unsigned long _UNK_00625438;
extern "C" unsigned long _UNK_0062543c;
extern "C" unsigned long _UNK_00625680;
extern "C" unsigned long _UNK_00625684;
extern "C" unsigned long _UNK_00625688;
extern "C" unsigned long _UNK_0062568c;
extern "C" unsigned long _UNK_00625690;
extern "C" unsigned long _UNK_00625694;
extern "C" unsigned long _UNK_00625698;
extern "C" unsigned long _UNK_0062569c;
extern "C" unsigned long _UNK_006256a0;
extern "C" unsigned long _UNK_006256a4;
extern "C" unsigned long _UNK_006256a8;
extern "C" unsigned long _UNK_006256ac;
extern "C" unsigned long _UNK_006256b0;
extern "C" unsigned long _UNK_006256b4;
extern "C" unsigned long _UNK_0062582c;
extern "C" unsigned long _UNK_00625830;
extern "C" unsigned long _UNK_00625834;
extern "C" unsigned long _UNK_00625838;
extern "C" unsigned long _UNK_0062583c;
extern "C" unsigned long _UNK_00625840;
extern "C" unsigned long _UNK_00625844;
extern "C" unsigned long _UNK_00625848;
extern "C" unsigned long _UNK_0062584c;
extern "C" unsigned long _UNK_00625850;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0062381c;
extern "C" unsigned long g_00623820;
extern "C" unsigned long g_00623834;
extern "C" unsigned long g_00623838;
extern "C" unsigned long g_0062384c;
extern "C" unsigned long g_00623850;
extern "C" unsigned long g_006238c0;
extern "C" unsigned long g_006238d4;
extern "C" unsigned long g_00623908;
extern "C" unsigned long g_0062390c;
extern "C" unsigned long g_00623910;
extern "C" unsigned long g_00623920;
extern "C" unsigned long g_00623948;
extern "C" unsigned long g_00623958;
extern "C" unsigned long g_0062395c;
extern "C" unsigned long g_0062399c;
extern "C" unsigned long g_006239d2;
extern "C" unsigned long g_00623a7c;
extern "C" unsigned long g_00623a80;
extern "C" unsigned long g_00623a90;
extern "C" unsigned long g_00623a94;
extern "C" unsigned long g_00623ab8;
extern "C" unsigned long g_00623abc;
extern "C" unsigned long g_00623ad4;
extern "C" unsigned long g_00623ad8;
extern "C" unsigned long g_00623b1a;
extern "C" unsigned long g_00623b6a;
extern "C" unsigned long g_00623bdc;
extern "C" unsigned long g_00623be0;
extern "C" unsigned long g_00623be4;
extern "C" unsigned long g_00623be8;
extern "C" unsigned long g_00623c3e;
extern "C" unsigned long g_00623c5c;
extern "C" unsigned long g_00623c78;
extern "C" unsigned long g_00623c92;
extern "C" unsigned long g_00623da2;
extern "C" unsigned long g_00623dfe;
extern "C" unsigned long g_00623e9e;
extern "C" unsigned long g_00623fcc;
extern "C" unsigned long g_00623fee;
extern "C" unsigned long g_00623ffc;
extern "C" unsigned long g_00624000;
extern "C" unsigned long g_00624004;
extern "C" unsigned long g_00624008;
extern "C" unsigned long g_0062400c;
extern "C" unsigned long g_00624010;
extern "C" unsigned long g_00624014;
extern "C" unsigned long g_00624018;
extern "C" unsigned long g_0062401c;
extern "C" unsigned long g_00624020;
extern "C" unsigned long g_00624024;
extern "C" unsigned long g_00624028;
extern "C" unsigned long g_0062402c;
extern "C" unsigned long g_00624030;
extern "C" unsigned long g_00624034;
extern "C" unsigned long g_00624038;
extern "C" unsigned long g_0062403c;
extern "C" unsigned long g_00624040;
extern "C" unsigned long g_00624044;
extern "C" unsigned long g_00624048;
extern "C" unsigned long g_0062404c;
extern "C" unsigned long g_00624050;
extern "C" unsigned long g_0062406e;
extern "C" unsigned long g_0062408a;
extern "C" unsigned long g_006240ca;
extern "C" unsigned long g_006240cc;
extern "C" unsigned long g_0062411e;
extern "C" unsigned long g_00624120;
extern "C" unsigned long g_0062415c;
extern "C" unsigned long g_006241a0;
extern "C" unsigned long g_00624248;
extern "C" unsigned long g_00624274;
extern "C" unsigned long g_00624276;
extern "C" unsigned long g_00624290;
extern "C" unsigned long g_006242be;
extern "C" unsigned long g_006242c0;
extern "C" unsigned long g_006242e0;
extern "C" unsigned long g_006242e4;
extern "C" unsigned long g_006242e8;
extern "C" unsigned long g_006242ec;
extern "C" unsigned long g_006242f0;
extern "C" unsigned long g_006242f4;
extern "C" unsigned long g_006242f8;
extern "C" unsigned long g_006242fc;
extern "C" unsigned long g_00624300;
extern "C" unsigned long g_00624304;
extern "C" unsigned long g_00624308;
extern "C" unsigned long g_0062430c;
extern "C" unsigned long g_00624310;
extern "C" unsigned long g_00624314;
extern "C" unsigned long g_00624318;
extern "C" unsigned long g_0062431c;
extern "C" unsigned long g_00624320;
extern "C" unsigned long g_00624324;
extern "C" unsigned long g_00624328;
extern "C" unsigned long g_00624334;
extern "C" unsigned long g_00624362;
extern "C" unsigned long g_00624364;
extern "C" unsigned long g_0062450c;
extern "C" unsigned long g_00624584;
extern "C" unsigned long g_00624588;
extern "C" unsigned long g_0062458c;
extern "C" unsigned long g_00624590;
extern "C" unsigned long g_00624594;
extern "C" unsigned long g_00624598;
extern "C" unsigned long g_0062459c;
extern "C" unsigned long g_006245a8;
extern "C" unsigned long g_006245bc;
extern "C" unsigned long g_006245e0;
extern "C" unsigned long g_00624600;
extern "C" unsigned long g_00624624;
extern "C" unsigned long g_00624632;
extern "C" unsigned long g_00624646;
extern "C" unsigned long g_0062466e;
extern "C" unsigned long g_00624698;
extern "C" unsigned long g_006246cc;
extern "C" unsigned long g_006246f0;
extern "C" unsigned long g_006246fe;
extern "C" unsigned long g_00624722;
extern "C" unsigned long g_0062474a;
extern "C" unsigned long g_00624774;
extern "C" unsigned long g_006247a8;
extern "C" unsigned long g_006247b4;
extern "C" unsigned long g_006247ce;
extern "C" unsigned long g_0062482c;
extern "C" unsigned long g_00624830;
extern "C" unsigned long g_00624834;
extern "C" unsigned long g_00624838;
extern "C" unsigned long g_0062483c;
extern "C" unsigned long g_00624840;
extern "C" unsigned long g_00624844;
extern "C" unsigned long g_00624848;
extern "C" unsigned long g_0062484c;
extern "C" unsigned long g_00624850;
extern "C" unsigned long g_00624854;
extern "C" unsigned long g_00624858;
extern "C" unsigned long g_0062485c;
extern "C" unsigned long g_00624860;
extern "C" unsigned long g_00624864;
extern "C" unsigned long g_00624868;
extern "C" unsigned long g_0062486c;
extern "C" unsigned long g_00624870;
extern "C" unsigned long g_006248a8;
extern "C" unsigned long g_006248b6;
extern "C" unsigned long g_00624926;
extern "C" unsigned long g_0062494a;
extern "C" unsigned long g_00624958;
extern "C" unsigned long g_00624a3c;
extern "C" unsigned long g_00624a40;
extern "C" unsigned long g_00624a44;
extern "C" unsigned long g_00624a48;
extern "C" unsigned long g_00624a4c;
extern "C" unsigned long g_00624a84;
extern "C" unsigned long g_00624aa2;
extern "C" unsigned long g_00624ac8;
extern "C" unsigned long g_00624acc;
extern "C" unsigned long g_00624ba0;
extern "C" unsigned long g_00624ba4;
extern "C" unsigned long g_00624ba8;
extern "C" unsigned long g_00624bac;
extern "C" unsigned long g_00624bb0;
extern "C" unsigned long g_00624bb4;
extern "C" unsigned long g_00624bb8;
extern "C" unsigned long g_00624bbc;
extern "C" unsigned long g_00624bc0;
extern "C" unsigned long g_00624bc4;
extern "C" unsigned long g_00624bc8;
extern "C" unsigned long g_00624bcc;
extern "C" unsigned long g_00624bd0;
extern "C" unsigned long g_00624bd4;
extern "C" unsigned long g_00624bd8;
extern "C" unsigned long g_00624bdc;
extern "C" unsigned long g_00624be0;
extern "C" unsigned long g_00624be4;
extern "C" unsigned long g_00624be8;
extern "C" unsigned long g_00624bec;
extern "C" unsigned long g_00624bf0;
extern "C" unsigned long g_00624bf4;
extern "C" unsigned long g_00624bf8;
extern "C" unsigned long g_00624bfc;
extern "C" unsigned long g_00624cea;
extern "C" unsigned long g_00624cee;
extern "C" unsigned long g_00624d00;
extern "C" unsigned long g_00624d04;
extern "C" unsigned long g_00624d08;
extern "C" unsigned long g_00624dc4;
extern "C" unsigned long g_00624dc6;
extern "C" unsigned long g_00624de0;
extern "C" unsigned long g_00624de2;
extern "C" unsigned long g_00624e90;
extern "C" unsigned long g_00624e94;
extern "C" unsigned long g_00624e98;
extern "C" unsigned long g_00624e9c;
extern "C" unsigned long g_00624ea0;
extern "C" unsigned long g_00624eda;
extern "C" unsigned long g_00624ef0;
extern "C" unsigned long g_00624f1a;
extern "C" unsigned long g_00624f5e;
extern "C" unsigned long g_00624f70;
extern "C" unsigned long g_00624f80;
extern "C" unsigned long g_00624f92;
extern "C" unsigned long g_00625016;
extern "C" unsigned long g_006250c0;
extern "C" unsigned long g_00625186;
extern "C" unsigned long g_00625187;
extern "C" unsigned long g_00625188;
extern "C" unsigned long g_006251a2;
extern "C" unsigned long g_006251c6;
extern "C" unsigned long g_006251f8;
extern "C" unsigned long g_006251fc;
extern "C" unsigned long g_00625200;
extern "C" unsigned long g_00625204;
extern "C" unsigned long g_00625208;
extern "C" unsigned long g_0062520c;
extern "C" unsigned long g_00625210;
extern "C" unsigned long g_00625214;
extern "C" unsigned long g_00625218;
extern "C" unsigned long g_0062521c;
extern "C" unsigned long g_00625220;
extern "C" unsigned long g_00625224;
extern "C" unsigned long g_00625228;
extern "C" unsigned long g_006252c2;
extern "C" unsigned long g_006253a2;
extern "C" unsigned long g_00625438;
extern "C" unsigned long g_0062543c;
extern "C" unsigned long g_00625472;
extern "C" unsigned long g_006254ae;
extern "C" unsigned long g_006254be;
extern "C" unsigned long g_006254fe;
extern "C" unsigned long g_0062551a;
extern "C" unsigned long g_00625536;
extern "C" unsigned long g_00625552;
extern "C" unsigned long g_0062556e;
extern "C" unsigned long g_0062558a;
extern "C" unsigned long g_006255a8;
extern "C" unsigned long g_00625616;
extern "C" unsigned long g_0062562c;
extern "C" unsigned long g_0062563c;
extern "C" unsigned long g_00625664;
extern "C" unsigned long g_00625680;
extern "C" unsigned long g_00625684;
extern "C" unsigned long g_00625688;
extern "C" unsigned long g_0062568c;
extern "C" unsigned long g_00625690;
extern "C" unsigned long g_00625694;
extern "C" unsigned long g_00625698;
extern "C" unsigned long g_0062569c;
extern "C" unsigned long g_006256a0;
extern "C" unsigned long g_006256a4;
extern "C" unsigned long g_006256a8;
extern "C" unsigned long g_006256ac;
extern "C" unsigned long g_006256b0;
extern "C" unsigned long g_006256b4;
extern "C" unsigned long g_006256e8;
extern "C" unsigned long g_006256fc;
extern "C" unsigned long g_00625726;
extern "C" unsigned long g_00625764;
extern "C" unsigned long g_00625776;
extern "C" unsigned long g_00625786;
extern "C" unsigned long g_00625798;
extern "C" unsigned long g_006257b4;
extern "C" unsigned long g_006257d4;
extern "C" unsigned long g_006257ee;
extern "C" unsigned long g_0062582c;
extern "C" unsigned long g_00625830;
extern "C" unsigned long g_00625834;
extern "C" unsigned long g_00625838;
extern "C" unsigned long g_0062583c;
extern "C" unsigned long g_00625840;
extern "C" unsigned long g_00625844;
extern "C" unsigned long g_00625848;
extern "C" unsigned long g_0062584c;
extern "C" unsigned long g_00625850;
void BLInviteCodePresenter::tick(float p1)
{
  return;
}

bool BLInviteCodePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLInviteCodePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteCodePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteCodePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteCodePresenter::setGuize(char const* p1)
{
  int *piVar1;
  
  cocos2d::CCLog((char const*)&g_006238c0 + g_006238d4);
  piVar1 = (int *)((BLInviteCodeView *)*(undefined4 *)(((int)this) + 0x90))->getBtnFillInCode();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  return;
}

void BLInviteCodePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xcf0);
  return;
}



void BLInviteCodePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

BLInviteCodePresenter::~BLInviteCodePresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0062399c + (intptr_t)(g_00623a7c))));
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)this = iVar2 + 8;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006239d2 + (intptr_t)(g_00623a80)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x22);
  func_0079e2bc(((int)this) + 0x19);
  func_0079e2bc(((int)this) + 0x18);
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 0x15)->~vector();
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 0x12)->~vector();
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 0xf)->~vector();
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 0xc)->~vector();
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 9)->~vector();
  ((std::vector<RewardItemData*, std::allocator<RewardItemData*>> *)((int)this) + 6)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLInviteCodePresenter::BLInviteCodePresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_00623ad4 + g_00623bdc);
  iVar5 = *(int *)(&g_00623ad8 + g_00623be0);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x3c;
  iVar4 = g_00623be4;
  iVar3 = iVar5 + 0xc;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x18)) = iVar3;
  *(int *)((int)this + 4*(0x19)) = iVar3;
  func_0079e2dc(((int)this) + 0x19,&g_00623b1a + iVar4);
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x1c)) = 0;
  *(int *)((int)this + 4*(0x1d)) = 0;
  *(int *)((int)this + 4*(0x1e)) = 0;
  *(int *)((int)this + 4*(0x1f)) = 0;
  *(int *)((int)this + 4*(0x20)) = 0;
  *(int *)((int)this + 4*(0x21)) = 0;
  *(int *)((int)this + 4*(0x22)) = iVar5 + 0xc;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_00623b6a + g_00623be8,auStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

undefined4 BLInviteCodePresenter::create(BLInviteCodeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x94))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
void BLInviteCodePresenter::onFillInCode(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)((void)(((PlatformHelp *)this)->getSimData()),(intptr_t)0);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_00623908 + (intptr_t)(g_00623910)));
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->showUIById(g_0062390c);
  }
  return;
}

void BLInviteCodePresenter::onCopy(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  iVar1 = func_0079e4bc(((int)this) + 100,&g_00623920 + g_00623958);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar2)->showToast((char const*)&g_00623948 + g_0062395c);
  }
  else {
    func_0079e53c(&uStack_14,((int)this) + 100);
    ((PlatformHelp *)this)->copyCode((std::string)(char*)uStack_14);
    func_0079e2bc(&uStack_14);
  }
  return;
}

void BLInviteCodePresenter::initScroView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLInviteCodePresenter::getMineHttpUpData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLInviteCodePresenter::httpUtils(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::getUserInvitaCode()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::initWithView(BLInviteCodeView* p1)
{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(((int)this) + 0x90);
  *puVar2 = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLInviteCodeView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00624a84 + g_00624ac8),0,0x20);
  piVar1 = (int *)((BLInviteCodeView *)*puVar2)->getBtnCopy();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00624aa2 + g_00624acc),0,0x20);
  piVar1 = (int *)((BLInviteCodeView *)*puVar2)->getBtnFillInCode();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  BLInviteCodePresenter::getUserInvitaCode();
  return;
}

void BLInviteCodePresenter::onGetReward(cocos2d::CCObject* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  *(undefined4 *)(((int)this) + 0x8c) = uVar1;
  BLInviteCodePresenter::httpUtils(2);
  return;
}

void BLInviteCodePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::onGiftInfo(cocos2d::CCObject* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::onPostRewardData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::onGetUserData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteCodePresenter::onPostCodeData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

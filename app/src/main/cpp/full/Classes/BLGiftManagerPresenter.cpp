#include "BLGiftManagerPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLAchievementManager.h"
#include "BLGiftManagerView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "GiftData.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "TimeLimitedHeroData.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079ea54(...);
extern "C" long long ghidra_CONCAT11(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00544d18;
extern "C" unsigned long UNK_00544d30;
extern "C" unsigned long UNK_00544d48;
extern "C" unsigned long UNK_00544dbc;
extern "C" unsigned long UNK_00544de4;
extern "C" unsigned long UNK_00544e28;
extern "C" unsigned long UNK_00544e50;
extern "C" unsigned long UNK_00544e74;
extern "C" unsigned long UNK_00544ed4;
extern "C" unsigned long UNK_00544ed6;
extern "C" unsigned long UNK_00544f1a;
extern "C" unsigned long UNK_00544f28;
extern "C" unsigned long UNK_00544f90;
extern "C" unsigned long UNK_00545096;
extern "C" unsigned long UNK_005450da;
extern "C" unsigned long UNK_0054512a;
extern "C" unsigned long UNK_0054512c;
extern "C" unsigned long UNK_00545144;
extern "C" unsigned long UNK_00545146;
extern "C" unsigned long UNK_0054515e;
extern "C" unsigned long UNK_00545160;
extern "C" unsigned long UNK_00545178;
extern "C" unsigned long UNK_0054517a;
extern "C" unsigned long UNK_00545290;
extern "C" unsigned long UNK_00545292;
extern "C" unsigned long UNK_0054534a;
extern "C" unsigned long UNK_0054534c;
extern "C" unsigned long UNK_005455da;
extern "C" unsigned long UNK_0054560c;
extern "C" unsigned long UNK_00545628;
extern "C" unsigned long UNK_005456ba;
extern "C" unsigned long UNK_005456d6;
extern "C" unsigned long UNK_00545714;
extern "C" unsigned long UNK_00545730;
extern "C" unsigned long UNK_0054574c;
extern "C" unsigned long UNK_00545768;
extern "C" unsigned long UNK_005457ac;
extern "C" unsigned long UNK_005457c8;
extern "C" unsigned long UNK_005458ba;
extern "C" unsigned long UNK_005458d6;
extern "C" unsigned long UNK_005458f2;
extern "C" unsigned long UNK_0054590e;
extern "C" unsigned long UNK_00545a3e;
extern "C" unsigned long UNK_00545a40;
extern "C" unsigned long UNK_00545ac6;
extern "C" unsigned long UNK_00545adc;
extern "C" unsigned long UNK_00545b08;
extern "C" unsigned long UNK_00545b5a;
extern "C" unsigned long UNK_00545b74;
extern "C" unsigned long UNK_00545c96;
extern "C" unsigned long UNK_00545cc4;
extern "C" unsigned long UNK_00545cd8;
extern "C" unsigned long UNK_00545d0a;
extern "C" unsigned long UNK_00545d3c;
extern "C" unsigned long UNK_00545d6e;
extern "C" unsigned long UNK_00545d96;
extern "C" unsigned long UNK_00545de8;
extern "C" unsigned long UNK_00545e02;
extern "C" unsigned long UNK_00545eae;
extern "C" unsigned long UNK_00545ef8;
extern "C" unsigned long UNK_00545f46;
extern "C" unsigned long UNK_00545f60;
extern "C" unsigned long UNK_005460c6;
extern "C" unsigned long UNK_00546112;
extern "C" unsigned long UNK_00546122;
extern "C" unsigned long UNK_0054616c;
extern "C" unsigned long UNK_005461ac;
extern "C" unsigned long UNK_005461ba;
extern "C" unsigned long UNK_005461f4;
extern "C" unsigned long UNK_00546206;
extern "C" unsigned long UNK_00546240;
extern "C" unsigned long UNK_0054633e;
extern "C" unsigned long UNK_0054635e;
extern "C" unsigned long UNK_0054637a;
extern "C" unsigned long UNK_00546396;
extern "C" unsigned long UNK_005463b2;
extern "C" unsigned long UNK_005464a0;
extern "C" unsigned long UNK_005464b0;
extern "C" unsigned long UNK_005464e6;
extern "C" unsigned long UNK_00546640;
extern "C" unsigned long UNK_005466de;
extern "C" unsigned long UNK_005466e0;
extern "C" unsigned long UNK_00546794;
extern "C" unsigned long UNK_005467b0;
extern "C" unsigned long UNK_005467dc;
extern "C" unsigned long UNK_005467ec;
extern "C" unsigned long UNK_0054680c;
extern "C" unsigned long UNK_0054681e;
extern "C" unsigned long UNK_005468ae;
extern "C" unsigned long UNK_005468b0;
extern "C" unsigned long UNK_00546934;
extern "C" unsigned long UNK_005469f0;
extern "C" unsigned long UNK_00546a00;
extern "C" unsigned long UNK_00546a1c;
extern "C" unsigned long UNK_00546a80;
extern "C" unsigned long UNK_00546b84;
extern "C" unsigned long UNK_00546b86;
extern "C" unsigned long UNK_00546ba4;
extern "C" unsigned long UNK_00546bb0;
extern "C" unsigned long UNK_00546c48;
extern "C" unsigned long UNK_00546d88;
extern "C" unsigned long UNK_00546e48;
extern "C" unsigned long UNK_00546f52;
extern "C" unsigned long UNK_00546f54;
extern "C" unsigned long UNK_00546fc0;
extern "C" unsigned long UNK_00546fe1;
extern "C" unsigned long UNK_00547030;
extern "C" unsigned long UNK_00547078;
extern "C" unsigned long _UNK_00544d1c;
extern "C" unsigned long _UNK_00544d34;
extern "C" unsigned long _UNK_00544d4c;
extern "C" unsigned long _UNK_00544e14;
extern "C" unsigned long _UNK_00544e18;
extern "C" unsigned long _UNK_00544e2c;
extern "C" unsigned long _UNK_00544e54;
extern "C" unsigned long _UNK_00544f58;
extern "C" unsigned long _UNK_00544f5c;
extern "C" unsigned long _UNK_00544f60;
extern "C" unsigned long _UNK_00544f64;
extern "C" unsigned long _UNK_00544f68;
extern "C" unsigned long _UNK_00544f7c;
extern "C" unsigned long _UNK_00545038;
extern "C" unsigned long _UNK_0054503c;
extern "C" unsigned long _UNK_00545040;
extern "C" unsigned long _UNK_00545044;
extern "C" unsigned long _UNK_00545048;
extern "C" unsigned long _UNK_0054504c;
extern "C" unsigned long _UNK_0054510c;
extern "C" unsigned long _UNK_00545110;
extern "C" unsigned long _UNK_00545188;
extern "C" unsigned long _UNK_0054518c;
extern "C" unsigned long _UNK_00545190;
extern "C" unsigned long _UNK_00545194;
extern "C" unsigned long _UNK_00545198;
extern "C" unsigned long _UNK_0054519c;
extern "C" unsigned long _UNK_005451a0;
extern "C" unsigned long _UNK_005451a4;
extern "C" unsigned long _UNK_005452d4;
extern "C" unsigned long _UNK_005452d8;
extern "C" unsigned long _UNK_00545384;
extern "C" unsigned long _UNK_00545388;
extern "C" unsigned long _UNK_00545844;
extern "C" unsigned long _UNK_00545848;
extern "C" unsigned long _UNK_0054584c;
extern "C" unsigned long _UNK_00545850;
extern "C" unsigned long _UNK_00545854;
extern "C" unsigned long _UNK_00545858;
extern "C" unsigned long _UNK_0054585c;
extern "C" unsigned long _UNK_00545860;
extern "C" unsigned long _UNK_00545864;
extern "C" unsigned long _UNK_00545868;
extern "C" unsigned long _UNK_0054586c;
extern "C" unsigned long _UNK_00545870;
extern "C" unsigned long _UNK_00545874;
extern "C" unsigned long _UNK_00545878;
extern "C" unsigned long _UNK_0054587c;
extern "C" unsigned long _UNK_00545880;
extern "C" unsigned long _UNK_00545884;
extern "C" unsigned long _UNK_00545c40;
extern "C" unsigned long _UNK_00545c44;
extern "C" unsigned long _UNK_00545c48;
extern "C" unsigned long _UNK_00545c4c;
extern "C" unsigned long _UNK_00545c50;
extern "C" unsigned long _UNK_00545c54;
extern "C" unsigned long _UNK_00545c58;
extern "C" unsigned long _UNK_00545c5c;
extern "C" unsigned long _UNK_00545c60;
extern "C" unsigned long _UNK_00545c64;
extern "C" unsigned long _UNK_00545c68;
extern "C" unsigned long _UNK_00545c6c;
extern "C" unsigned long _UNK_00545c70;
extern "C" unsigned long _UNK_00545c74;
extern "C" unsigned long _UNK_00545c78;
extern "C" unsigned long _UNK_00545c7c;
extern "C" unsigned long _UNK_00545c80;
extern "C" unsigned long _UNK_00545c84;
extern "C" unsigned long _UNK_00546020;
extern "C" unsigned long _UNK_00546024;
extern "C" unsigned long _UNK_00546028;
extern "C" unsigned long _UNK_0054602c;
extern "C" unsigned long _UNK_00546030;
extern "C" unsigned long _UNK_00546034;
extern "C" unsigned long _UNK_00546038;
extern "C" unsigned long _UNK_0054603c;
extern "C" unsigned long _UNK_00546040;
extern "C" unsigned long _UNK_00546044;
extern "C" unsigned long _UNK_00546048;
extern "C" unsigned long _UNK_0054604c;
extern "C" unsigned long _UNK_00546050;
extern "C" unsigned long _UNK_00546054;
extern "C" unsigned long _UNK_00546058;
extern "C" unsigned long _UNK_0054605c;
extern "C" unsigned long _UNK_00546300;
extern "C" unsigned long _UNK_00546304;
extern "C" unsigned long _UNK_00546308;
extern "C" unsigned long _UNK_0054630c;
extern "C" unsigned long _UNK_00546310;
extern "C" unsigned long _UNK_00546314;
extern "C" unsigned long _UNK_00546318;
extern "C" unsigned long _UNK_0054631c;
extern "C" unsigned long _UNK_00546320;
extern "C" unsigned long _UNK_00546324;
extern "C" unsigned long _UNK_00546328;
extern "C" unsigned long _UNK_0054650c;
extern "C" unsigned long _UNK_00546510;
extern "C" unsigned long _UNK_00546514;
extern "C" unsigned long _UNK_00546518;
extern "C" unsigned long _UNK_0054651c;
extern "C" unsigned long _UNK_00546520;
extern "C" unsigned long _UNK_00546524;
extern "C" unsigned long _UNK_00546528;
extern "C" unsigned long _UNK_00546868;
extern "C" unsigned long _UNK_0054686c;
extern "C" unsigned long _UNK_00546870;
extern "C" unsigned long _UNK_00546874;
extern "C" unsigned long _UNK_00546878;
extern "C" unsigned long _UNK_0054687c;
extern "C" unsigned long _UNK_00546880;
extern "C" unsigned long _UNK_00546884;
extern "C" unsigned long _UNK_00546888;
extern "C" unsigned long _UNK_0054688c;
extern "C" unsigned long _UNK_00546890;
extern "C" unsigned long _UNK_00546894;
extern "C" unsigned long _UNK_00546898;
extern "C" unsigned long _UNK_0054689c;
extern "C" unsigned long _UNK_005468a0;
extern "C" unsigned long _UNK_00546a3c;
extern "C" unsigned long _UNK_00546a40;
extern "C" unsigned long _UNK_00546a44;
extern "C" unsigned long _UNK_00546a48;
extern "C" unsigned long _UNK_00546a4c;
extern "C" unsigned long _UNK_00546a50;
extern "C" unsigned long _UNK_00546a54;
extern "C" unsigned long _UNK_00546a58;
extern "C" unsigned long _UNK_00546a5c;
extern "C" unsigned long _UNK_00546df4;
extern "C" unsigned long _UNK_00546df8;
extern "C" unsigned long _UNK_00546dfc;
extern "C" unsigned long _UNK_00546e00;
extern "C" unsigned long _UNK_00546e04;
extern "C" unsigned long _UNK_00546e08;
extern "C" unsigned long _UNK_00546e0c;
extern "C" unsigned long _UNK_00546e10;
extern "C" unsigned long _UNK_00546e14;
extern "C" unsigned long _UNK_00546e18;
extern "C" unsigned long _UNK_00546e1c;
extern "C" unsigned long _UNK_00546e20;
extern "C" unsigned long _UNK_00546fe8;
extern "C" unsigned long _UNK_00546fec;
extern "C" unsigned long _UNK_00546ff0;
extern "C" unsigned long _UNK_00546ff4;
extern "C" unsigned long _UNK_00546ff8;
extern "C" unsigned long _UNK_00546ffc;
extern "C" unsigned long _UNK_00547000;
extern "C" unsigned long _UNK_00547004;
extern "C" unsigned long _UNK_00547008;
extern "C" unsigned long _UNK_00547080;
extern "C" unsigned long _UNK_00547084;
extern "C" unsigned long _UNK_005473b8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_00544d18;
extern "C" unsigned long g_00544d1c;
extern "C" unsigned long g_00544d30;
extern "C" unsigned long g_00544d34;
extern "C" unsigned long g_00544d48;
extern "C" unsigned long g_00544d4c;
extern "C" unsigned long g_00544dbc;
extern "C" unsigned long g_00544de4;
extern "C" unsigned long g_00544e14;
extern "C" unsigned long g_00544e18;
extern "C" unsigned long g_00544e28;
extern "C" unsigned long g_00544e2c;
extern "C" unsigned long g_00544e50;
extern "C" unsigned long g_00544e54;
extern "C" unsigned long g_00544e74;
extern "C" unsigned long g_00544ed4;
extern "C" unsigned long g_00544ed6;
extern "C" unsigned long g_00544f1a;
extern "C" unsigned long g_00544f28;
extern "C" unsigned long g_00544f58;
extern "C" unsigned long g_00544f5c;
extern "C" unsigned long g_00544f60;
extern "C" unsigned long g_00544f64;
extern "C" unsigned long g_00544f68;
extern "C" unsigned long g_00544f7c;
extern "C" unsigned long g_00544f90;
extern "C" unsigned long g_00545038;
extern "C" unsigned long g_0054503c;
extern "C" unsigned long g_00545040;
extern "C" unsigned long g_00545044;
extern "C" unsigned long g_00545048;
extern "C" unsigned long g_0054504c;
extern "C" unsigned long g_00545096;
extern "C" unsigned long g_005450da;
extern "C" unsigned long g_0054510c;
extern "C" unsigned long g_00545110;
extern "C" unsigned long g_0054512a;
extern "C" unsigned long g_0054512c;
extern "C" unsigned long g_00545144;
extern "C" unsigned long g_00545146;
extern "C" unsigned long g_0054515e;
extern "C" unsigned long g_00545160;
extern "C" unsigned long g_00545178;
extern "C" unsigned long g_0054517a;
extern "C" unsigned long g_00545188;
extern "C" unsigned long g_0054518c;
extern "C" unsigned long g_00545190;
extern "C" unsigned long g_00545194;
extern "C" unsigned long g_00545198;
extern "C" unsigned long g_0054519c;
extern "C" unsigned long g_005451a0;
extern "C" unsigned long g_005451a4;
extern "C" unsigned long g_00545290;
extern "C" unsigned long g_00545292;
extern "C" unsigned long g_005452d4;
extern "C" unsigned long g_005452d8;
extern "C" unsigned long g_0054534a;
extern "C" unsigned long g_0054534c;
extern "C" unsigned long g_00545384;
extern "C" unsigned long g_00545388;
extern "C" unsigned long g_005455da;
extern "C" unsigned long g_0054560c;
extern "C" unsigned long g_00545628;
extern "C" unsigned long g_005456ba;
extern "C" unsigned long g_005456d6;
extern "C" unsigned long g_00545714;
extern "C" unsigned long g_00545730;
extern "C" unsigned long g_0054574c;
extern "C" unsigned long g_00545768;
extern "C" unsigned long g_005457ac;
extern "C" unsigned long g_005457c8;
extern "C" unsigned long g_00545844;
extern "C" unsigned long g_00545848;
extern "C" unsigned long g_0054584c;
extern "C" unsigned long g_00545850;
extern "C" unsigned long g_00545854;
extern "C" unsigned long g_00545858;
extern "C" unsigned long g_0054585c;
extern "C" unsigned long g_00545860;
extern "C" unsigned long g_00545864;
extern "C" unsigned long g_00545868;
extern "C" unsigned long g_0054586c;
extern "C" unsigned long g_00545870;
extern "C" unsigned long g_00545874;
extern "C" unsigned long g_00545878;
extern "C" unsigned long g_0054587c;
extern "C" unsigned long g_00545880;
extern "C" unsigned long g_00545884;
extern "C" unsigned long g_005458ba;
extern "C" unsigned long g_005458d6;
extern "C" unsigned long g_005458f2;
extern "C" unsigned long g_0054590e;
extern "C" unsigned long g_00545a3e;
extern "C" unsigned long g_00545a40;
extern "C" unsigned long g_00545ac6;
extern "C" unsigned long g_00545adc;
extern "C" unsigned long g_00545b08;
extern "C" unsigned long g_00545b5a;
extern "C" unsigned long g_00545b74;
extern "C" unsigned long g_00545c40;
extern "C" unsigned long g_00545c44;
extern "C" unsigned long g_00545c48;
extern "C" unsigned long g_00545c4c;
extern "C" unsigned long g_00545c50;
extern "C" unsigned long g_00545c54;
extern "C" unsigned long g_00545c58;
extern "C" unsigned long g_00545c5c;
extern "C" unsigned long g_00545c60;
extern "C" unsigned long g_00545c64;
extern "C" unsigned long g_00545c68;
extern "C" unsigned long g_00545c6c;
extern "C" unsigned long g_00545c70;
extern "C" unsigned long g_00545c74;
extern "C" unsigned long g_00545c78;
extern "C" unsigned long g_00545c7c;
extern "C" unsigned long g_00545c80;
extern "C" unsigned long g_00545c84;
extern "C" unsigned long g_00545c96;
extern "C" unsigned long g_00545cc4;
extern "C" unsigned long g_00545cd8;
extern "C" unsigned long g_00545d0a;
extern "C" unsigned long g_00545d3c;
extern "C" unsigned long g_00545d6e;
extern "C" unsigned long g_00545d96;
extern "C" unsigned long g_00545de8;
extern "C" unsigned long g_00545e02;
extern "C" unsigned long g_00545eae;
extern "C" unsigned long g_00545ef8;
extern "C" unsigned long g_00545f46;
extern "C" unsigned long g_00545f60;
extern "C" unsigned long g_00546020;
extern "C" unsigned long g_00546024;
extern "C" unsigned long g_00546028;
extern "C" unsigned long g_0054602c;
extern "C" unsigned long g_00546030;
extern "C" unsigned long g_00546034;
extern "C" unsigned long g_00546038;
extern "C" unsigned long g_0054603c;
extern "C" unsigned long g_00546040;
extern "C" unsigned long g_00546044;
extern "C" unsigned long g_00546048;
extern "C" unsigned long g_0054604c;
extern "C" unsigned long g_00546050;
extern "C" unsigned long g_00546054;
extern "C" unsigned long g_00546058;
extern "C" unsigned long g_0054605c;
extern "C" unsigned long g_005460c6;
extern "C" unsigned long g_00546112;
extern "C" unsigned long g_00546122;
extern "C" unsigned long g_0054616c;
extern "C" unsigned long g_005461ac;
extern "C" unsigned long g_005461ba;
extern "C" unsigned long g_005461f4;
extern "C" unsigned long g_00546206;
extern "C" unsigned long g_00546240;
extern "C" unsigned long g_00546300;
extern "C" unsigned long g_00546304;
extern "C" unsigned long g_00546308;
extern "C" unsigned long g_0054630c;
extern "C" unsigned long g_00546310;
extern "C" unsigned long g_00546314;
extern "C" unsigned long g_00546318;
extern "C" unsigned long g_0054631c;
extern "C" unsigned long g_00546320;
extern "C" unsigned long g_00546324;
extern "C" unsigned long g_00546328;
extern "C" unsigned long g_0054633e;
extern "C" unsigned long g_0054635e;
extern "C" unsigned long g_0054637a;
extern "C" unsigned long g_00546396;
extern "C" unsigned long g_005463b2;
extern "C" unsigned long g_005464a0;
extern "C" unsigned long g_005464b0;
extern "C" unsigned long g_005464e6;
extern "C" unsigned long g_0054650c;
extern "C" unsigned long g_00546510;
extern "C" unsigned long g_00546514;
extern "C" unsigned long g_00546518;
extern "C" unsigned long g_0054651c;
extern "C" unsigned long g_00546520;
extern "C" unsigned long g_00546524;
extern "C" unsigned long g_00546528;
extern "C" unsigned long g_00546640;
extern "C" unsigned long g_005466de;
extern "C" unsigned long g_005466e0;
extern "C" unsigned long g_00546794;
extern "C" unsigned long g_005467b0;
extern "C" unsigned long g_005467dc;
extern "C" unsigned long g_005467ec;
extern "C" unsigned long g_0054680c;
extern "C" unsigned long g_0054681e;
extern "C" unsigned long g_00546868;
extern "C" unsigned long g_0054686c;
extern "C" unsigned long g_00546870;
extern "C" unsigned long g_00546874;
extern "C" unsigned long g_00546878;
extern "C" unsigned long g_0054687c;
extern "C" unsigned long g_00546880;
extern "C" unsigned long g_00546884;
extern "C" unsigned long g_00546888;
extern "C" unsigned long g_0054688c;
extern "C" unsigned long g_00546890;
extern "C" unsigned long g_00546894;
extern "C" unsigned long g_00546898;
extern "C" unsigned long g_0054689c;
extern "C" unsigned long g_005468a0;
extern "C" unsigned long g_005468ae;
extern "C" unsigned long g_005468b0;
extern "C" unsigned long g_00546934;
extern "C" unsigned long g_005469f0;
extern "C" unsigned long g_00546a00;
extern "C" unsigned long g_00546a1c;
extern "C" unsigned long g_00546a3c;
extern "C" unsigned long g_00546a40;
extern "C" unsigned long g_00546a44;
extern "C" unsigned long g_00546a48;
extern "C" unsigned long g_00546a4c;
extern "C" unsigned long g_00546a50;
extern "C" unsigned long g_00546a54;
extern "C" unsigned long g_00546a58;
extern "C" unsigned long g_00546a5c;
extern "C" unsigned long g_00546a80;
extern "C" unsigned long g_00546b84;
extern "C" unsigned long g_00546b86;
extern "C" unsigned long g_00546ba4;
extern "C" unsigned long g_00546bb0;
extern "C" unsigned long g_00546c48;
extern "C" unsigned long g_00546d88;
extern "C" unsigned long g_00546df4;
extern "C" unsigned long g_00546df8;
extern "C" unsigned long g_00546dfc;
extern "C" unsigned long g_00546e00;
extern "C" unsigned long g_00546e04;
extern "C" unsigned long g_00546e08;
extern "C" unsigned long g_00546e0c;
extern "C" unsigned long g_00546e10;
extern "C" unsigned long g_00546e14;
extern "C" unsigned long g_00546e18;
extern "C" unsigned long g_00546e1c;
extern "C" unsigned long g_00546e20;
extern "C" unsigned long g_00546e48;
extern "C" unsigned long g_00546f52;
extern "C" unsigned long g_00546f54;
extern "C" unsigned long g_00546fc0;
extern "C" unsigned long g_00546fe1;
extern "C" unsigned long g_00546fe8;
extern "C" unsigned long g_00546fec;
extern "C" unsigned long g_00546ff0;
extern "C" unsigned long g_00546ff4;
extern "C" unsigned long g_00546ff8;
extern "C" unsigned long g_00546ffc;
extern "C" unsigned long g_00547000;
extern "C" unsigned long g_00547004;
extern "C" unsigned long g_00547008;
extern "C" unsigned long g_00547030;
extern "C" unsigned long g_00547078;
extern "C" unsigned long g_00547080;
extern "C" unsigned long g_00547084;
extern "C" unsigned long g_005473b8;
bool BLGiftManagerPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGiftManagerPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGiftManagerPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGiftManagerPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGiftManagerPresenter::onUpdateDrawTips()
{
  return;
}

BLGiftManagerPresenter::~BLGiftManagerPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00544dbc + g_00544e14);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00544de4 + g_00544e18,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLGiftManagerPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00544f7c);
  return;
}


BLGiftManagerPresenter::BLGiftManagerPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00545096 + (intptr_t)(g_0054510c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(8)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(9)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005450da + (intptr_t)(g_00545110)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLGiftManagerPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLGiftManagerPresenter::create(BLGiftManagerView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLGiftManagerPresenter::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLGiftManagerPresenter::onGift(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = (undefined4)(intptr_t)(g_00545038);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x7a)),(intptr_t)0);
  uStack_18 = (undefined4)((int *)((int)this));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if (iVar3 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x7b)),(intptr_t)0);
    if ((iVar3 == 0) && ((int)(intptr_t)(int)(intptr_t)p1 != 0)) {
      uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00544f90 + (intptr_t)(g_0054503c)) + iVar1));
      iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00544f90 + (intptr_t)(g_00545040)) + iVar1));
      piVar4 = (int *)func_0079e55c(p1,uStack_18,iStack_14,0);
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*(int *)(piVar4) + (0x128)))(), iVar3 != 0)) {
        iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00544f90 + (intptr_t)(g_00545044)) + iVar1));
        iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uStack_18,iStack_14,0));
        if (iVar3 != 0) {
          uVar2 = (undefined4)(((UIManager *)this)->shareManager());
          iVar3 = (undefined4)(intptr_t)(((UIManager *)(uVar2))->showUIById(100));
          if (iVar3 != 0) {
            uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00544f90 + (intptr_t)(g_00545048)) + iVar1));
            iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00544f90 + (intptr_t)(g_0054504c)) + iVar1));
            func_0079e55c(iVar3,uStack_18,iStack_14,0);
          }
        }
      }
    }
  }
  return ghidra_CONCAT44(iStack_14,uStack_18);
}

void BLGiftManagerPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0054512c + (intptr_t)(g_00545188))), 0, (char const*)(unsigned char *)((char *)&g_0054512a + (intptr_t)(g_0054518c)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00545146 + (intptr_t)(g_00545190))), 0, (char const*)(unsigned char *)((char *)&g_00545144 + (intptr_t)(g_00545194)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00545160 + (intptr_t)(g_00545198))), 0, (char const*)(unsigned char *)((char *)&g_0054515e + (intptr_t)(g_0054519c)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00545178 + (intptr_t)(g_005451a0))), 0, (char const*)(unsigned char *)((char *)&g_0054517a + (intptr_t)(g_005451a4)), 0);
  return;
}

undefined8 BLGiftManagerPresenter::onUpdateAchievementTips()
{
  undefined4 p2 = 0;

  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x1c) + 0xd4))(*(int **)(((int)this) + 0x1c),0xcd);
  if (piVar1 != (int *)0x0) {
    ((BLAchievementManager *)this)->share();
    ((BLAchievementManager *)this)->updateAchievement();
    piVar2 = (int *)((BLAchievementManager *)this)->share();
    iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x40))());
    iVar3 = (undefined4)(intptr_t)((iVar3 >> 0x1f) - iVar3);
    piVar2 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,0xfa);
    (**(code **)(*piVar2 + 0x90))(piVar2,-(iVar3 >> 0x1f));
    if (iVar3 < 0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,0xfa);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0xd4))(piVar1,0xfa));
      if ((iVar3 != 0) &&
         (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00545290 + (intptr_t)(g_005452d4))),
                                          *(undefined4 *)((unsigned char *)((char *)&g_00545292 + (intptr_t)(g_005452d8))),0),
         piVar1 != (int *)0x0)) {
        pcVar5 = *(code **)(*piVar1 + 0x234);
        piVar2 = (int *)((BLAchievementManager *)this)->share();
        uVar4 = (undefined4)((**(code **)(*piVar2 + 0x40))());
        ConvertToString<int>(&uStack_14, uVar4, 0);
        (*pcVar5)(piVar1,uStack_14);
        func_0079e2bc(&uStack_14);
      }
    }
  }
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void BLGiftManagerPresenter::onUpdateLivenessTips()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x1c) + 0xd4))(*(int **)(((int)this) + 0x1c),0xd1);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
    (**(code **)(*piVar2 + 0x170))();
    iVar3 = (undefined4)(intptr_t)(((LivenessUserData *)this)->getReceivableCount());
    iVar4 = (undefined4)(intptr_t)((iVar3 >> 0x1f) - iVar3);
    piVar2 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,0xfa);
    (**(code **)(*piVar2 + 0x90))(piVar2,-(iVar4 >> 0x1f));
    if (iVar4 < 0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,0xfa);
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0xd4))(piVar1,0xfa));
      piVar1 = (int *)0x0;
      if (iVar4 != 0) {
        piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0054534a + (intptr_t)(g_00545384))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_0054534c + (intptr_t)(g_00545388))),0);
      }
      pcVar5 = *(code **)(*piVar1 + 0x234);
      ConvertToString<int>(&uStack_1c, iVar3, 0);
      (*pcVar5)(piVar1,uStack_1c);
      func_0079e2bc(&uStack_1c);
    }
  }
  return;
}

void BLGiftManagerPresenter::initWithView(BLGiftManagerView* p1)
{
  int *piVar1;
  code *pcVar2;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLGiftManagerView *)p1)->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_00547030 + g_00547080));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)cocos2d::CCLayer::create();
  *(int **)(((int)this) + 0x1c) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar2)(piVar1,auStack_28);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x11c))(*(int **)(((int)this) + 0x1c),1000);
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))
            (*(int **)(((int)this) + 0x18),*(undefined4 *)(((int)this) + 0x1c),10);
  BLGiftManagerPresenter::setGuize((char const*)&g_00547078 + g_00547084);
  return;
}

void BLGiftManagerPresenter::onFund(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  if (iVar1 - 200U < 10) {
    func_0079e6ac();
    uVar2 = (undefined4)(intptr_t)(((UIManager *)(extraout_r1 << 5,extraout_r1 << 3,extraout_r1,extraout_r1))->shareManager());
    ((UIManager *)(uVar2))->showUIById(g_005473b8);
  }
  return;
}

void BLGiftManagerPresenter::setGuize(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

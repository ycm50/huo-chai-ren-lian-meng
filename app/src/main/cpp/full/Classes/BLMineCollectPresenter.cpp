#include "BLMineCollectPresenter.h"
#include "CCString.h"
#include "CCUserDefault.h"
#include "CCLayer.h"
#include "CCScale9Sprite.h"
#include "CCLabelTTF.h"
#include "CCInteger.h"
#include "CCControlButton.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCScheduler.h"
#include "CCDirector.h"
#include "CCNotificationCenter.h"
#include "CCScrollView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "BLForwards.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectView.h"
#include "BLRichText.h"
#include "BLUpAndDownUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MineData.h"
#include "MineUtils.h"
#include "MineitemData.h"
#include "PagedScrollView.h"
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
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_00442068(...);
extern "C" long long func_0059dc98(...);
extern "C" long long func_0059dcc8(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e754(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ea44(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0059ada0;
extern "C" unsigned long UNK_0059adb8;
extern "C" unsigned long UNK_0059add0;
extern "C" unsigned long UNK_0059ae48;
extern "C" unsigned long UNK_0059ae62;
extern "C" unsigned long UNK_0059aea8;
extern "C" unsigned long UNK_0059aed0;
extern "C" unsigned long UNK_0059af0a;
extern "C" unsigned long UNK_0059b004;
extern "C" unsigned long UNK_0059b048;
extern "C" unsigned long UNK_0059b094;
extern "C" unsigned long UNK_0059b100;
extern "C" unsigned long UNK_0059b112;
extern "C" unsigned long UNK_0059b132;
extern "C" unsigned long UNK_0059b152;
extern "C" unsigned long UNK_0059b172;
extern "C" unsigned long UNK_0059b192;
extern "C" unsigned long UNK_0059b1b2;
extern "C" unsigned long UNK_0059b1d2;
extern "C" unsigned long UNK_0059b1f2;
extern "C" unsigned long UNK_0059b212;
extern "C" unsigned long UNK_0059b2a8;
extern "C" unsigned long UNK_0059b8ca;
extern "C" unsigned long UNK_0059b9ac;
extern "C" unsigned long UNK_0059b9c2;
extern "C" unsigned long UNK_0059b9dc;
extern "C" unsigned long UNK_0059b9de;
extern "C" unsigned long UNK_0059b9ee;
extern "C" unsigned long UNK_0059b9fd;
extern "C" unsigned long UNK_0059baa8;
extern "C" unsigned long UNK_0059bb80;
extern "C" unsigned long UNK_0059bb84;
extern "C" unsigned long UNK_0059bbaa;
extern "C" unsigned long UNK_0059bbdc;
extern "C" unsigned long UNK_0059bc14;
extern "C" unsigned long UNK_0059bc3c;
extern "C" unsigned long UNK_0059bc5e;
extern "C" unsigned long UNK_0059bc84;
extern "C" unsigned long UNK_0059bc90;
extern "C" unsigned long UNK_0059bccc;
extern "C" unsigned long UNK_0059bcd0;
extern "C" unsigned long UNK_0059bcec;
extern "C" unsigned long UNK_0059bdd0;
extern "C" unsigned long UNK_0059bdfa;
extern "C" unsigned long UNK_0059be22;
extern "C" unsigned long UNK_0059be36;
extern "C" unsigned long UNK_0059be50;
extern "C" unsigned long UNK_0059bfc0;
extern "C" unsigned long UNK_0059bfd0;
extern "C" unsigned long UNK_0059c008;
extern "C" unsigned long UNK_0059c0a4;
extern "C" unsigned long UNK_0059c286;
extern "C" unsigned long UNK_0059c2d5;
extern "C" unsigned long UNK_0059c3ce;
extern "C" unsigned long UNK_0059c3d0;
extern "C" unsigned long UNK_0059c3e0;
extern "C" unsigned long UNK_0059c3ef;
extern "C" unsigned long UNK_0059c4ca;
extern "C" unsigned long UNK_0059c4ec;
extern "C" unsigned long UNK_0059c7c2;
extern "C" unsigned long UNK_0059c7ed;
extern "C" unsigned long UNK_0059c884;
extern "C" unsigned long UNK_0059c95a;
extern "C" unsigned long UNK_0059c95c;
extern "C" unsigned long UNK_0059c97f;
extern "C" unsigned long UNK_0059ca62;
extern "C" unsigned long UNK_0059ca70;
extern "C" unsigned long UNK_0059ca9b;
extern "C" unsigned long UNK_0059cb2a;
extern "C" unsigned long UNK_0059cb2c;
extern "C" unsigned long UNK_0059cb4f;
extern "C" unsigned long UNK_0059cc30;
extern "C" unsigned long UNK_0059cc63;
extern "C" unsigned long UNK_0059ccf4;
extern "C" unsigned long UNK_0059ccf6;
extern "C" unsigned long UNK_0059cd1f;
extern "C" unsigned long UNK_0059cda2;
extern "C" unsigned long UNK_0059cdb0;
extern "C" unsigned long UNK_0059cdd5;
extern "C" unsigned long UNK_0059ce66;
extern "C" unsigned long UNK_0059ce68;
extern "C" unsigned long UNK_0059ce8b;
extern "C" unsigned long UNK_0059cf5e;
extern "C" unsigned long UNK_0059cf6c;
extern "C" unsigned long UNK_0059cf93;
extern "C" unsigned long UNK_0059d086;
extern "C" unsigned long UNK_0059d0d8;
extern "C" unsigned long UNK_0059d104;
extern "C" unsigned long UNK_0059d130;
extern "C" unsigned long UNK_0059d21a;
extern "C" unsigned long UNK_0059d322;
extern "C" unsigned long UNK_0059d324;
extern "C" unsigned long UNK_0059d36a;
extern "C" unsigned long UNK_0059d4c4;
extern "C" unsigned long UNK_0059d4c6;
extern "C" unsigned long UNK_0059d526;
extern "C" unsigned long UNK_0059d58a;
extern "C" unsigned long UNK_0059d58c;
extern "C" unsigned long UNK_0059d62a;
extern "C" unsigned long UNK_0059d62c;
extern "C" unsigned long UNK_0059d6e2;
extern "C" unsigned long UNK_0059d6e4;
extern "C" unsigned long UNK_0059d872;
extern "C" unsigned long UNK_0059d976;
extern "C" unsigned long UNK_0059d978;
extern "C" unsigned long UNK_0059d9c4;
extern "C" unsigned long UNK_0059d9c6;
extern "C" unsigned long UNK_0059da62;
extern "C" unsigned long UNK_0059da64;
extern "C" unsigned long UNK_0059db26;
extern "C" unsigned long UNK_0059db3e;
extern "C" unsigned long UNK_0059dbda;
extern "C" unsigned long UNK_0059dd9c;
extern "C" unsigned long UNK_0059ddb4;
extern "C" unsigned long UNK_0059dea0;
extern "C" unsigned long UNK_0059dec0;
extern "C" unsigned long UNK_0059df0a;
extern "C" unsigned long UNK_0059dfe6;
extern "C" unsigned long UNK_0059dfe8;
extern "C" unsigned long UNK_0059e066;
extern "C" unsigned long UNK_0059e0de;
extern "C" unsigned long UNK_0059e0e0;
extern "C" unsigned long UNK_0059e15c;
extern "C" unsigned long UNK_0059e224;
extern "C" unsigned long UNK_0059e236;
extern "C" unsigned long UNK_0059e238;
extern "C" unsigned long UNK_0059e2b6;
extern "C" unsigned long UNK_0059e37c;
extern "C" unsigned long UNK_0059e37e;
extern "C" unsigned long UNK_0059e3fa;
extern "C" unsigned long UNK_0059e3fc;
extern "C" unsigned long UNK_0059e47b;
extern "C" unsigned long UNK_0059e4bc;
extern "C" unsigned long UNK_0059e4d6;
extern "C" unsigned long UNK_0059e590;
extern "C" unsigned long UNK_0059e5a6;
extern "C" unsigned long UNK_0059e643;
extern "C" unsigned long UNK_0059e652;
extern "C" unsigned long UNK_0059e654;
extern "C" unsigned long UNK_0059e6e9;
extern "C" unsigned long UNK_0059e7b6;
extern "C" unsigned long UNK_0059e7e8;
extern "C" unsigned long UNK_0059e7fa;
extern "C" unsigned long UNK_0059e826;
extern "C" unsigned long UNK_0059e85c;
extern "C" unsigned long UNK_0059e8e8;
extern "C" unsigned long UNK_0059e914;
extern "C" unsigned long UNK_0059e918;
extern "C" unsigned long UNK_0059e99a;
extern "C" unsigned long UNK_0059e9a8;
extern "C" unsigned long UNK_0059e9ee;
extern "C" unsigned long UNK_0059e9f2;
extern "C" unsigned long UNK_0059ea44;
extern "C" unsigned long UNK_0059ea9a;
extern "C" unsigned long UNK_0059ead8;
extern "C" unsigned long UNK_0059eae6;
extern "C" unsigned long UNK_0059eb34;
extern "C" unsigned long UNK_0059ebc6;
extern "C" unsigned long UNK_0059ebc8;
extern "C" unsigned long UNK_0059ebd6;
extern "C" unsigned long UNK_0059ebd9;
extern "C" unsigned long UNK_0059ece6;
extern "C" unsigned long UNK_0059edf0;
extern "C" unsigned long UNK_0059eede;
extern "C" unsigned long UNK_0059eee0;
extern "C" unsigned long UNK_0059ef58;
extern "C" unsigned long UNK_0059f022;
extern "C" unsigned long UNK_0059f024;
extern "C" unsigned long UNK_0059f09c;
extern "C" unsigned long UNK_0059f184;
extern "C" unsigned long UNK_0059f186;
extern "C" unsigned long UNK_0059f1fe;
extern "C" unsigned long UNK_0059f274;
extern "C" unsigned long UNK_0059f278;
extern "C" unsigned long UNK_0059f2f6;
extern "C" unsigned long UNK_0059f387;
extern "C" unsigned long UNK_0059f472;
extern "C" unsigned long UNK_0059f4d2;
extern "C" unsigned long UNK_0059f4d4;
extern "C" unsigned long UNK_0059f4e2;
extern "C" unsigned long UNK_0059f4e5;
extern "C" unsigned long UNK_0059f62e;
extern "C" unsigned long UNK_0059f68c;
extern "C" unsigned long UNK_0059f77a;
extern "C" unsigned long UNK_0059f8c4;
extern "C" unsigned long UNK_0059fba0;
extern "C" unsigned long UNK_0059fbb4;
extern "C" unsigned long UNK_0059fbc6;
extern "C" unsigned long UNK_0059fbe4;
extern "C" unsigned long UNK_0059fc70;
extern "C" unsigned long UNK_0059fc82;
extern "C" unsigned long UNK_0059fc94;
extern "C" unsigned long UNK_0059fce8;
extern "C" unsigned long UNK_0059fe0c;
extern "C" unsigned long UNK_0059fe74;
extern "C" unsigned long UNK_0059fe78;
extern "C" unsigned long UNK_0059fe9e;
extern "C" unsigned long UNK_0059fece;
extern "C" unsigned long UNK_0059ff3e;
extern "C" unsigned long UNK_0059ff4e;
extern "C" unsigned long UNK_0059ff8a;
extern "C" unsigned long UNK_0059ffea;
extern "C" unsigned long UNK_005a001e;
extern "C" unsigned long UNK_005a0058;
extern "C" unsigned long UNK_005a00ca;
extern "C" unsigned long UNK_005a0104;
extern "C" unsigned long UNK_005a014e;
extern "C" unsigned long UNK_005a017a;
extern "C" unsigned long UNK_005a0190;
extern "C" unsigned long UNK_005a019e;
extern "C" unsigned long UNK_005a020c;
extern "C" unsigned long UNK_005a022c;
extern "C" unsigned long UNK_005a0238;
extern "C" unsigned long UNK_005a0272;
extern "C" unsigned long UNK_005a0276;
extern "C" unsigned long _UNK_0059ada4;
extern "C" unsigned long _UNK_0059adbc;
extern "C" unsigned long _UNK_0059add4;
extern "C" unsigned long _UNK_0059ae94;
extern "C" unsigned long _UNK_0059ae98;
extern "C" unsigned long _UNK_0059aeac;
extern "C" unsigned long _UNK_0059aed4;
extern "C" unsigned long _UNK_0059afb8;
extern "C" unsigned long _UNK_0059afbc;
extern "C" unsigned long _UNK_0059afc0;
extern "C" unsigned long _UNK_0059afc4;
extern "C" unsigned long _UNK_0059afc8;
extern "C" unsigned long _UNK_0059afcc;
extern "C" unsigned long _UNK_0059afe0;
extern "C" unsigned long _UNK_0059aff4;
extern "C" unsigned long _UNK_0059b028;
extern "C" unsigned long _UNK_0059b0c0;
extern "C" unsigned long _UNK_0059b0c4;
extern "C" unsigned long _UNK_0059b23c;
extern "C" unsigned long _UNK_0059b240;
extern "C" unsigned long _UNK_0059b244;
extern "C" unsigned long _UNK_0059b248;
extern "C" unsigned long _UNK_0059b24c;
extern "C" unsigned long _UNK_0059b250;
extern "C" unsigned long _UNK_0059b254;
extern "C" unsigned long _UNK_0059b258;
extern "C" unsigned long _UNK_0059b25c;
extern "C" unsigned long _UNK_0059b260;
extern "C" unsigned long _UNK_0059b264;
extern "C" unsigned long _UNK_0059b268;
extern "C" unsigned long _UNK_0059b26c;
extern "C" unsigned long _UNK_0059b270;
extern "C" unsigned long _UNK_0059b274;
extern "C" unsigned long _UNK_0059b278;
extern "C" unsigned long _UNK_0059b27c;
extern "C" unsigned long _UNK_0059b280;
extern "C" unsigned long _UNK_0059b284;
extern "C" unsigned long _UNK_0059b288;
extern "C" unsigned long _UNK_0059b28c;
extern "C" unsigned long _UNK_0059b2d0;
extern "C" unsigned long _UNK_0059bb38;
extern "C" unsigned long _UNK_0059bb3c;
extern "C" unsigned long _UNK_0059bb40;
extern "C" unsigned long _UNK_0059bb44;
extern "C" unsigned long _UNK_0059bb48;
extern "C" unsigned long _UNK_0059bb4c;
extern "C" unsigned long _UNK_0059bb50;
extern "C" unsigned long _UNK_0059bb54;
extern "C" unsigned long _UNK_0059bb58;
extern "C" unsigned long _UNK_0059bb5c;
extern "C" unsigned long _UNK_0059bb60;
extern "C" unsigned long _UNK_0059bb64;
extern "C" unsigned long _UNK_0059bb68;
extern "C" unsigned long _UNK_0059bd98;
extern "C" unsigned long _UNK_0059bd9c;
extern "C" unsigned long _UNK_0059bda0;
extern "C" unsigned long _UNK_0059bda4;
extern "C" unsigned long _UNK_0059bda8;
extern "C" unsigned long _UNK_0059bdac;
extern "C" unsigned long _UNK_0059bdb0;
extern "C" unsigned long _UNK_0059bdb4;
extern "C" unsigned long _UNK_0059bdb8;
extern "C" unsigned long _UNK_0059bdbc;
extern "C" unsigned long _UNK_0059bdc0;
extern "C" unsigned long _UNK_0059bdc4;
extern "C" unsigned long _UNK_0059bdec;
extern "C" unsigned long _UNK_0059c064;
extern "C" unsigned long _UNK_0059c068;
extern "C" unsigned long _UNK_0059c06c;
extern "C" unsigned long _UNK_0059c070;
extern "C" unsigned long _UNK_0059c074;
extern "C" unsigned long _UNK_0059c078;
extern "C" unsigned long _UNK_0059c07c;
extern "C" unsigned long _UNK_0059c080;
extern "C" unsigned long _UNK_0059c084;
extern "C" unsigned long _UNK_0059c088;
extern "C" unsigned long _UNK_0059c08c;
extern "C" unsigned long _UNK_0059c090;
extern "C" unsigned long _UNK_0059c094;
extern "C" unsigned long _UNK_0059c394;
extern "C" unsigned long _UNK_0059c398;
extern "C" unsigned long _UNK_0059c39c;
extern "C" unsigned long _UNK_0059c3a0;
extern "C" unsigned long _UNK_0059c3a4;
extern "C" unsigned long _UNK_0059c3a8;
extern "C" unsigned long _UNK_0059c3ac;
extern "C" unsigned long _UNK_0059c3b0;
extern "C" unsigned long _UNK_0059c3b4;
extern "C" unsigned long _UNK_0059c3b8;
extern "C" unsigned long _UNK_0059c3bc;
extern "C" unsigned long _UNK_0059c3c0;
extern "C" unsigned long _UNK_0059c4a8;
extern "C" unsigned long _UNK_0059c4ac;
extern "C" unsigned long _UNK_0059c4b0;
extern "C" unsigned long _UNK_0059c4b4;
extern "C" unsigned long _UNK_0059c4b8;
extern "C" unsigned long _UNK_0059c4bc;
extern "C" unsigned long _UNK_0059c4d8;
extern "C" unsigned long _UNK_0059c718;
extern "C" unsigned long _UNK_0059c71c;
extern "C" unsigned long _UNK_0059c720;
extern "C" unsigned long _UNK_0059c724;
extern "C" unsigned long _UNK_0059c728;
extern "C" unsigned long _UNK_0059cb98;
extern "C" unsigned long _UNK_0059cb9c;
extern "C" unsigned long _UNK_0059cba0;
extern "C" unsigned long _UNK_0059cba4;
extern "C" unsigned long _UNK_0059cba8;
extern "C" unsigned long _UNK_0059cbac;
extern "C" unsigned long _UNK_0059cbb0;
extern "C" unsigned long _UNK_0059cbb4;
extern "C" unsigned long _UNK_0059cbb8;
extern "C" unsigned long _UNK_0059cbbc;
extern "C" unsigned long _UNK_0059cbc0;
extern "C" unsigned long _UNK_0059cbc4;
extern "C" unsigned long _UNK_0059cbc8;
extern "C" unsigned long _UNK_0059cbcc;
extern "C" unsigned long _UNK_0059cbd0;
extern "C" unsigned long _UNK_0059cbd4;
extern "C" unsigned long _UNK_0059cbd8;
extern "C" unsigned long _UNK_0059cbdc;
extern "C" unsigned long _UNK_0059cbe0;
extern "C" unsigned long _UNK_0059cbe4;
extern "C" unsigned long _UNK_0059cfb8;
extern "C" unsigned long _UNK_0059cfbc;
extern "C" unsigned long _UNK_0059cfc0;
extern "C" unsigned long _UNK_0059cfc4;
extern "C" unsigned long _UNK_0059cfc8;
extern "C" unsigned long _UNK_0059cfcc;
extern "C" unsigned long _UNK_0059cfd0;
extern "C" unsigned long _UNK_0059cfd4;
extern "C" unsigned long _UNK_0059cfd8;
extern "C" unsigned long _UNK_0059cfdc;
extern "C" unsigned long _UNK_0059cfe0;
extern "C" unsigned long _UNK_0059cfe4;
extern "C" unsigned long _UNK_0059cfe8;
extern "C" unsigned long _UNK_0059cfec;
extern "C" unsigned long _UNK_0059cff0;
extern "C" unsigned long _UNK_0059cff4;
extern "C" unsigned long _UNK_0059cff8;
extern "C" unsigned long _UNK_0059cffc;
extern "C" unsigned long _UNK_0059d460;
extern "C" unsigned long _UNK_0059d464;
extern "C" unsigned long _UNK_0059d468;
extern "C" unsigned long _UNK_0059d46c;
extern "C" unsigned long _UNK_0059d470;
extern "C" unsigned long _UNK_0059d474;
extern "C" unsigned long _UNK_0059d478;
extern "C" unsigned long _UNK_0059d47c;
extern "C" unsigned long _UNK_0059d480;
extern "C" unsigned long _UNK_0059d484;
extern "C" unsigned long _UNK_0059d488;
extern "C" unsigned long _UNK_0059d48c;
extern "C" unsigned long _UNK_0059d490;
extern "C" unsigned long _UNK_0059d494;
extern "C" unsigned long _UNK_0059d498;
extern "C" unsigned long _UNK_0059d49c;
extern "C" unsigned long _UNK_0059d804;
extern "C" unsigned long _UNK_0059d808;
extern "C" unsigned long _UNK_0059d80c;
extern "C" unsigned long _UNK_0059d810;
extern "C" unsigned long _UNK_0059d814;
extern "C" unsigned long _UNK_0059d818;
extern "C" unsigned long _UNK_0059d81c;
extern "C" unsigned long _UNK_0059d820;
extern "C" unsigned long _UNK_0059d824;
extern "C" unsigned long _UNK_0059d828;
extern "C" unsigned long _UNK_0059d82c;
extern "C" unsigned long _UNK_0059d830;
extern "C" unsigned long _UNK_0059d834;
extern "C" unsigned long _UNK_0059d838;
extern "C" unsigned long _UNK_0059d83c;
extern "C" unsigned long _UNK_0059d840;
extern "C" unsigned long _UNK_0059d844;
extern "C" unsigned long _UNK_0059d848;
extern "C" unsigned long _UNK_0059dc00;
extern "C" unsigned long _UNK_0059dc04;
extern "C" unsigned long _UNK_0059dc08;
extern "C" unsigned long _UNK_0059dc0c;
extern "C" unsigned long _UNK_0059dc10;
extern "C" unsigned long _UNK_0059dc14;
extern "C" unsigned long _UNK_0059dc18;
extern "C" unsigned long _UNK_0059dc1c;
extern "C" unsigned long _UNK_0059dc20;
extern "C" unsigned long _UNK_0059dc24;
extern "C" unsigned long _UNK_0059dc28;
extern "C" unsigned long _UNK_0059dc2c;
extern "C" unsigned long _UNK_0059dc30;
extern "C" unsigned long _UNK_0059dc34;
extern "C" unsigned long _UNK_0059dc38;
extern "C" unsigned long _UNK_0059dc3c;
extern "C" unsigned long _UNK_0059dc40;
extern "C" unsigned long _UNK_0059dc44;
extern "C" unsigned long _UNK_0059deec;
extern "C" unsigned long _UNK_0059def0;
extern "C" unsigned long _UNK_0059def4;
extern "C" unsigned long _UNK_0059def8;
extern "C" unsigned long _UNK_0059defc;
extern "C" unsigned long _UNK_0059e2e4;
extern "C" unsigned long _UNK_0059e2e8;
extern "C" unsigned long _UNK_0059e2ec;
extern "C" unsigned long _UNK_0059e2f0;
extern "C" unsigned long _UNK_0059e2f4;
extern "C" unsigned long _UNK_0059e2f8;
extern "C" unsigned long _UNK_0059e2fc;
extern "C" unsigned long _UNK_0059e300;
extern "C" unsigned long _UNK_0059e304;
extern "C" unsigned long _UNK_0059e308;
extern "C" unsigned long _UNK_0059e30c;
extern "C" unsigned long _UNK_0059e310;
extern "C" unsigned long _UNK_0059e314;
extern "C" unsigned long _UNK_0059e318;
extern "C" unsigned long _UNK_0059e31c;
extern "C" unsigned long _UNK_0059e320;
extern "C" unsigned long _UNK_0059e324;
extern "C" unsigned long _UNK_0059e328;
extern "C" unsigned long _UNK_0059e32c;
extern "C" unsigned long _UNK_0059e484;
extern "C" unsigned long _UNK_0059e488;
extern "C" unsigned long _UNK_0059e48c;
extern "C" unsigned long _UNK_0059e490;
extern "C" unsigned long _UNK_0059e494;
extern "C" unsigned long _UNK_0059e498;
extern "C" unsigned long _UNK_0059e49c;
extern "C" unsigned long _UNK_0059e4a0;
extern "C" unsigned long _UNK_0059e4a4;
extern "C" unsigned long _UNK_0059e4a8;
extern "C" unsigned long _UNK_0059e870;
extern "C" unsigned long _UNK_0059e874;
extern "C" unsigned long _UNK_0059e878;
extern "C" unsigned long _UNK_0059e87c;
extern "C" unsigned long _UNK_0059e880;
extern "C" unsigned long _UNK_0059e884;
extern "C" unsigned long _UNK_0059e888;
extern "C" unsigned long _UNK_0059e88c;
extern "C" unsigned long _UNK_0059e890;
extern "C" unsigned long _UNK_0059e894;
extern "C" unsigned long _UNK_0059e898;
extern "C" unsigned long _UNK_0059e89c;
extern "C" unsigned long _UNK_0059e8a0;
extern "C" unsigned long _UNK_0059e8a4;
extern "C" unsigned long _UNK_0059e8a8;
extern "C" unsigned long _UNK_0059e8ac;
extern "C" unsigned long _UNK_0059e8b0;
extern "C" unsigned long _UNK_0059e8b4;
extern "C" unsigned long _UNK_0059e8b8;
extern "C" unsigned long _UNK_0059e8f8;
extern "C" unsigned long _UNK_0059e9c0;
extern "C" unsigned long _UNK_0059e9c4;
extern "C" unsigned long _UNK_0059e9c8;
extern "C" unsigned long _UNK_0059e9cc;
extern "C" unsigned long _UNK_0059e9d0;
extern "C" unsigned long _UNK_0059e9d4;
extern "C" unsigned long _UNK_0059eb10;
extern "C" unsigned long _UNK_0059eb14;
extern "C" unsigned long _UNK_0059eb18;
extern "C" unsigned long _UNK_0059eb1c;
extern "C" unsigned long _UNK_0059eb20;
extern "C" unsigned long _UNK_0059eb24;
extern "C" unsigned long _UNK_0059ebac;
extern "C" unsigned long _UNK_0059ebb0;
extern "C" unsigned long _UNK_0059ebb4;
extern "C" unsigned long _UNK_0059ebb8;
extern "C" unsigned long _UNK_0059ef9c;
extern "C" unsigned long _UNK_0059efa0;
extern "C" unsigned long _UNK_0059efa4;
extern "C" unsigned long _UNK_0059efa8;
extern "C" unsigned long _UNK_0059efac;
extern "C" unsigned long _UNK_0059efb0;
extern "C" unsigned long _UNK_0059efb4;
extern "C" unsigned long _UNK_0059efb8;
extern "C" unsigned long _UNK_0059efbc;
extern "C" unsigned long _UNK_0059efc0;
extern "C" unsigned long _UNK_0059efc4;
extern "C" unsigned long _UNK_0059efc8;
extern "C" unsigned long _UNK_0059efcc;
extern "C" unsigned long _UNK_0059efd0;
extern "C" unsigned long _UNK_0059efd4;
extern "C" unsigned long _UNK_0059efd8;
extern "C" unsigned long _UNK_0059efdc;
extern "C" unsigned long _UNK_0059efe0;
extern "C" unsigned long _UNK_0059efe4;
extern "C" unsigned long _UNK_0059efe8;
extern "C" unsigned long _UNK_0059f3c8;
extern "C" unsigned long _UNK_0059f3cc;
extern "C" unsigned long _UNK_0059f3d0;
extern "C" unsigned long _UNK_0059f3d4;
extern "C" unsigned long _UNK_0059f3d8;
extern "C" unsigned long _UNK_0059f3dc;
extern "C" unsigned long _UNK_0059f3e0;
extern "C" unsigned long _UNK_0059f3e4;
extern "C" unsigned long _UNK_0059f3e8;
extern "C" unsigned long _UNK_0059f3ec;
extern "C" unsigned long _UNK_0059f3f0;
extern "C" unsigned long _UNK_0059f3f4;
extern "C" unsigned long _UNK_0059f3f8;
extern "C" unsigned long _UNK_0059f3fc;
extern "C" unsigned long _UNK_0059f400;
extern "C" unsigned long _UNK_0059f404;
extern "C" unsigned long _UNK_0059f408;
extern "C" unsigned long _UNK_0059f40c;
extern "C" unsigned long _UNK_0059f410;
extern "C" unsigned long _UNK_0059f414;
extern "C" unsigned long _UNK_0059f418;
extern "C" unsigned long _UNK_0059f41c;
extern "C" unsigned long _UNK_0059f5f4;
extern "C" unsigned long _UNK_0059f5f8;
extern "C" unsigned long _UNK_0059f5fc;
extern "C" unsigned long _UNK_0059f600;
extern "C" unsigned long _UNK_0059f604;
extern "C" unsigned long _UNK_0059f608;
extern "C" unsigned long _UNK_0059f60c;
extern "C" unsigned long _UNK_0059f610;
extern "C" unsigned long _UNK_0059f614;
extern "C" unsigned long _UNK_0059f618;
extern "C" unsigned long _UNK_0059f66c;
extern "C" unsigned long _UNK_0059f900;
extern "C" unsigned long _UNK_0059f904;
extern "C" unsigned long _UNK_0059f908;
extern "C" unsigned long _UNK_0059f90c;
extern "C" unsigned long _UNK_0059f910;
extern "C" unsigned long _UNK_0059f914;
extern "C" unsigned long _UNK_0059f918;
extern "C" unsigned long _UNK_0059f91c;
extern "C" unsigned long _UNK_0059f920;
extern "C" unsigned long _UNK_0059fc4c;
extern "C" unsigned long _UNK_0059fc50;
extern "C" unsigned long _UNK_0059fc54;
extern "C" unsigned long _UNK_0059fc58;
extern "C" unsigned long _UNK_0059fc5c;
extern "C" unsigned long _UNK_0059fc60;
extern "C" unsigned long _UNK_0059fe48;
extern "C" unsigned long _UNK_0059fe4c;
extern "C" unsigned long _UNK_0059fe50;
extern "C" unsigned long _UNK_0059fe54;
extern "C" unsigned long _UNK_0059fe58;
extern "C" unsigned long _UNK_005a01a8;
extern "C" unsigned long _UNK_005a01ac;
extern "C" unsigned long _UNK_005a01b0;
extern "C" unsigned long _UNK_005a01b4;
extern "C" unsigned long _UNK_005a01b8;
extern "C" unsigned long _UNK_005a01bc;
extern "C" unsigned long _UNK_005a01c0;
extern "C" unsigned long _UNK_005a01c4;
extern "C" unsigned long _UNK_005a01c8;
extern "C" unsigned long _UNK_005a01cc;
extern "C" unsigned long _UNK_005a01d0;
extern "C" unsigned long _UNK_005a01d4;
extern "C" unsigned long _UNK_005a01d8;
extern "C" unsigned long _UNK_005a01dc;
extern "C" unsigned long _UNK_005a01e0;
extern "C" unsigned long _UNK_005a01e4;
extern "C" unsigned long _UNK_005a01e8;
extern "C" unsigned long _UNK_005a01ec;
extern "C" unsigned long _UNK_005a01f0;
extern "C" unsigned long _UNK_005a01f4;
extern "C" unsigned long _UNK_005a01f8;
extern "C" unsigned long _UNK_005a01fc;
extern "C" unsigned long _UNK_005a02cc;
extern "C" unsigned long _UNK_005a02d0;
extern "C" unsigned long _UNK_005a02d4;
extern "C" unsigned long _UNK_005a02d8;
extern "C" unsigned long _UNK_005a02dc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0059ada0;
extern "C" unsigned long g_0059ada4;
extern "C" unsigned long g_0059adb8;
extern "C" unsigned long g_0059adbc;
extern "C" unsigned long g_0059add0;
extern "C" unsigned long g_0059add4;
extern "C" unsigned long g_0059ae48;
extern "C" unsigned long g_0059ae62;
extern "C" unsigned long g_0059ae94;
extern "C" unsigned long g_0059ae98;
extern "C" unsigned long g_0059aea8;
extern "C" unsigned long g_0059aeac;
extern "C" unsigned long g_0059aed0;
extern "C" unsigned long g_0059aed4;
extern "C" unsigned long g_0059af0a;
extern "C" unsigned long g_0059afb8;
extern "C" unsigned long g_0059afbc;
extern "C" unsigned long g_0059afc0;
extern "C" unsigned long g_0059afc4;
extern "C" unsigned long g_0059afc8;
extern "C" unsigned long g_0059afcc;
extern "C" unsigned long g_0059afe0;
extern "C" unsigned long g_0059aff4;
extern "C" unsigned long g_0059b004;
extern "C" unsigned long g_0059b028;
extern "C" unsigned long g_0059b048;
extern "C" unsigned long g_0059b094;
extern "C" unsigned long g_0059b0c0;
extern "C" unsigned long g_0059b0c4;
extern "C" unsigned long g_0059b100;
extern "C" unsigned long g_0059b112;
extern "C" unsigned long g_0059b132;
extern "C" unsigned long g_0059b152;
extern "C" unsigned long g_0059b172;
extern "C" unsigned long g_0059b192;
extern "C" unsigned long g_0059b1b2;
extern "C" unsigned long g_0059b1d2;
extern "C" unsigned long g_0059b1f2;
extern "C" unsigned long g_0059b212;
extern "C" unsigned long g_0059b23c;
extern "C" unsigned long g_0059b240;
extern "C" unsigned long g_0059b244;
extern "C" unsigned long g_0059b248;
extern "C" unsigned long g_0059b24c;
extern "C" unsigned long g_0059b250;
extern "C" unsigned long g_0059b254;
extern "C" unsigned long g_0059b258;
extern "C" unsigned long g_0059b25c;
extern "C" unsigned long g_0059b260;
extern "C" unsigned long g_0059b264;
extern "C" unsigned long g_0059b268;
extern "C" unsigned long g_0059b26c;
extern "C" unsigned long g_0059b270;
extern "C" unsigned long g_0059b274;
extern "C" unsigned long g_0059b278;
extern "C" unsigned long g_0059b27c;
extern "C" unsigned long g_0059b280;
extern "C" unsigned long g_0059b284;
extern "C" unsigned long g_0059b288;
extern "C" unsigned long g_0059b28c;
extern "C" unsigned long g_0059b2a8;
extern "C" unsigned long g_0059b2d0;
extern "C" unsigned long g_0059b8ca;
extern "C" unsigned long g_0059b9ac;
extern "C" unsigned long g_0059b9c2;
extern "C" unsigned long g_0059b9dc;
extern "C" unsigned long g_0059b9de;
extern "C" unsigned long g_0059b9ee;
extern "C" unsigned long g_0059b9fd;
extern "C" unsigned long g_0059baa8;
extern "C" unsigned long g_0059bb38;
extern "C" unsigned long g_0059bb3c;
extern "C" unsigned long g_0059bb40;
extern "C" unsigned long g_0059bb44;
extern "C" unsigned long g_0059bb48;
extern "C" unsigned long g_0059bb4c;
extern "C" unsigned long g_0059bb50;
extern "C" unsigned long g_0059bb54;
extern "C" unsigned long g_0059bb58;
extern "C" unsigned long g_0059bb5c;
extern "C" unsigned long g_0059bb60;
extern "C" unsigned long g_0059bb64;
extern "C" unsigned long g_0059bb68;
extern "C" unsigned long g_0059bb80;
extern "C" unsigned long g_0059bb84;
extern "C" unsigned long g_0059bbaa;
extern "C" unsigned long g_0059bbdc;
extern "C" unsigned long g_0059bc14;
extern "C" unsigned long g_0059bc3c;
extern "C" unsigned long g_0059bc5e;
extern "C" unsigned long g_0059bc84;
extern "C" unsigned long g_0059bc90;
extern "C" unsigned long g_0059bccc;
extern "C" unsigned long g_0059bcd0;
extern "C" unsigned long g_0059bcec;
extern "C" unsigned long g_0059bd98;
extern "C" unsigned long g_0059bd9c;
extern "C" unsigned long g_0059bda0;
extern "C" unsigned long g_0059bda4;
extern "C" unsigned long g_0059bda8;
extern "C" unsigned long g_0059bdac;
extern "C" unsigned long g_0059bdb0;
extern "C" unsigned long g_0059bdb4;
extern "C" unsigned long g_0059bdb8;
extern "C" unsigned long g_0059bdbc;
extern "C" unsigned long g_0059bdc0;
extern "C" unsigned long g_0059bdc4;
extern "C" unsigned long g_0059bdd0;
extern "C" unsigned long g_0059bdec;
extern "C" unsigned long g_0059bdfa;
extern "C" unsigned long g_0059be22;
extern "C" unsigned long g_0059be36;
extern "C" unsigned long g_0059be50;
extern "C" unsigned long g_0059bfc0;
extern "C" unsigned long g_0059bfd0;
extern "C" unsigned long g_0059c008;
extern "C" unsigned long g_0059c064;
extern "C" unsigned long g_0059c068;
extern "C" unsigned long g_0059c06c;
extern "C" unsigned long g_0059c070;
extern "C" unsigned long g_0059c074;
extern "C" unsigned long g_0059c078;
extern "C" unsigned long g_0059c07c;
extern "C" unsigned long g_0059c080;
extern "C" unsigned long g_0059c084;
extern "C" unsigned long g_0059c088;
extern "C" unsigned long g_0059c08c;
extern "C" unsigned long g_0059c090;
extern "C" unsigned long g_0059c094;
extern "C" unsigned long g_0059c0a4;
extern "C" unsigned long g_0059c286;
extern "C" unsigned long g_0059c2d5;
extern "C" unsigned long g_0059c394;
extern "C" unsigned long g_0059c398;
extern "C" unsigned long g_0059c39c;
extern "C" unsigned long g_0059c3a0;
extern "C" unsigned long g_0059c3a4;
extern "C" unsigned long g_0059c3a8;
extern "C" unsigned long g_0059c3ac;
extern "C" unsigned long g_0059c3b0;
extern "C" unsigned long g_0059c3b4;
extern "C" unsigned long g_0059c3b8;
extern "C" unsigned long g_0059c3bc;
extern "C" unsigned long g_0059c3c0;
extern "C" unsigned long g_0059c3ce;
extern "C" unsigned long g_0059c3d0;
extern "C" unsigned long g_0059c3e0;
extern "C" unsigned long g_0059c3ef;
extern "C" unsigned long g_0059c4a8;
extern "C" unsigned long g_0059c4ac;
extern "C" unsigned long g_0059c4b0;
extern "C" unsigned long g_0059c4b4;
extern "C" unsigned long g_0059c4b8;
extern "C" unsigned long g_0059c4bc;
extern "C" unsigned long g_0059c4ca;
extern "C" unsigned long g_0059c4d8;
extern "C" unsigned long g_0059c4ec;
extern "C" unsigned long g_0059c718;
extern "C" unsigned long g_0059c71c;
extern "C" unsigned long g_0059c720;
extern "C" unsigned long g_0059c724;
extern "C" unsigned long g_0059c728;
extern "C" unsigned long g_0059c7c2;
extern "C" unsigned long g_0059c7ed;
extern "C" unsigned long g_0059c884;
extern "C" unsigned long g_0059c95a;
extern "C" unsigned long g_0059c95c;
extern "C" unsigned long g_0059c97f;
extern "C" unsigned long g_0059ca62;
extern "C" unsigned long g_0059ca70;
extern "C" unsigned long g_0059ca9b;
extern "C" unsigned long g_0059cb2a;
extern "C" unsigned long g_0059cb2c;
extern "C" unsigned long g_0059cb4f;
extern "C" unsigned long g_0059cb98;
extern "C" unsigned long g_0059cb9c;
extern "C" unsigned long g_0059cba0;
extern "C" unsigned long g_0059cba4;
extern "C" unsigned long g_0059cba8;
extern "C" unsigned long g_0059cbac;
extern "C" unsigned long g_0059cbb0;
extern "C" unsigned long g_0059cbb4;
extern "C" unsigned long g_0059cbb8;
extern "C" unsigned long g_0059cbbc;
extern "C" unsigned long g_0059cbc0;
extern "C" unsigned long g_0059cbc4;
extern "C" unsigned long g_0059cbc8;
extern "C" unsigned long g_0059cbcc;
extern "C" unsigned long g_0059cbd0;
extern "C" unsigned long g_0059cbd4;
extern "C" unsigned long g_0059cbd8;
extern "C" unsigned long g_0059cbdc;
extern "C" unsigned long g_0059cbe0;
extern "C" unsigned long g_0059cbe4;
extern "C" unsigned long g_0059cc30;
extern "C" unsigned long g_0059cc63;
extern "C" unsigned long g_0059ccf4;
extern "C" unsigned long g_0059ccf6;
extern "C" unsigned long g_0059cd1f;
extern "C" unsigned long g_0059cda2;
extern "C" unsigned long g_0059cdb0;
extern "C" unsigned long g_0059cdd5;
extern "C" unsigned long g_0059ce66;
extern "C" unsigned long g_0059ce68;
extern "C" unsigned long g_0059ce8b;
extern "C" unsigned long g_0059cf5e;
extern "C" unsigned long g_0059cf6c;
extern "C" unsigned long g_0059cf93;
extern "C" unsigned long g_0059cfb8;
extern "C" unsigned long g_0059cfbc;
extern "C" unsigned long g_0059cfc0;
extern "C" unsigned long g_0059cfc4;
extern "C" unsigned long g_0059cfc8;
extern "C" unsigned long g_0059cfcc;
extern "C" unsigned long g_0059cfd0;
extern "C" unsigned long g_0059cfd4;
extern "C" unsigned long g_0059cfd8;
extern "C" unsigned long g_0059cfdc;
extern "C" unsigned long g_0059cfe0;
extern "C" unsigned long g_0059cfe4;
extern "C" unsigned long g_0059cfe8;
extern "C" unsigned long g_0059cfec;
extern "C" unsigned long g_0059cff0;
extern "C" unsigned long g_0059cff4;
extern "C" unsigned long g_0059cff8;
extern "C" unsigned long g_0059cffc;
extern "C" unsigned long g_0059d086;
extern "C" unsigned long g_0059d0d8;
extern "C" unsigned long g_0059d104;
extern "C" unsigned long g_0059d130;
extern "C" unsigned long g_0059d21a;
extern "C" unsigned long g_0059d322;
extern "C" unsigned long g_0059d324;
extern "C" unsigned long g_0059d36a;
extern "C" unsigned long g_0059d460;
extern "C" unsigned long g_0059d464;
extern "C" unsigned long g_0059d468;
extern "C" unsigned long g_0059d46c;
extern "C" unsigned long g_0059d470;
extern "C" unsigned long g_0059d474;
extern "C" unsigned long g_0059d478;
extern "C" unsigned long g_0059d47c;
extern "C" unsigned long g_0059d480;
extern "C" unsigned long g_0059d484;
extern "C" unsigned long g_0059d488;
extern "C" unsigned long g_0059d48c;
extern "C" unsigned long g_0059d490;
extern "C" unsigned long g_0059d494;
extern "C" unsigned long g_0059d498;
extern "C" unsigned long g_0059d49c;
extern "C" unsigned long g_0059d4c4;
extern "C" unsigned long g_0059d4c6;
extern "C" unsigned long g_0059d526;
extern "C" unsigned long g_0059d58a;
extern "C" unsigned long g_0059d58c;
extern "C" unsigned long g_0059d62a;
extern "C" unsigned long g_0059d62c;
extern "C" unsigned long g_0059d6e2;
extern "C" unsigned long g_0059d6e4;
extern "C" unsigned long g_0059d804;
extern "C" unsigned long g_0059d808;
extern "C" unsigned long g_0059d80c;
extern "C" unsigned long g_0059d810;
extern "C" unsigned long g_0059d814;
extern "C" unsigned long g_0059d818;
extern "C" unsigned long g_0059d81c;
extern "C" unsigned long g_0059d820;
extern "C" unsigned long g_0059d824;
extern "C" unsigned long g_0059d828;
extern "C" unsigned long g_0059d82c;
extern "C" unsigned long g_0059d830;
extern "C" unsigned long g_0059d834;
extern "C" unsigned long g_0059d838;
extern "C" unsigned long g_0059d83c;
extern "C" unsigned long g_0059d840;
extern "C" unsigned long g_0059d844;
extern "C" unsigned long g_0059d848;
extern "C" unsigned long g_0059d872;
extern "C" unsigned long g_0059d976;
extern "C" unsigned long g_0059d978;
extern "C" unsigned long g_0059d9c4;
extern "C" unsigned long g_0059d9c6;
extern "C" unsigned long g_0059da62;
extern "C" unsigned long g_0059da64;
extern "C" unsigned long g_0059db26;
extern "C" unsigned long g_0059db3e;
extern "C" unsigned long g_0059dbda;
extern "C" unsigned long g_0059dc00;
extern "C" unsigned long g_0059dc04;
extern "C" unsigned long g_0059dc08;
extern "C" unsigned long g_0059dc0c;
extern "C" unsigned long g_0059dc10;
extern "C" unsigned long g_0059dc14;
extern "C" unsigned long g_0059dc18;
extern "C" unsigned long g_0059dc1c;
extern "C" unsigned long g_0059dc20;
extern "C" unsigned long g_0059dc24;
extern "C" unsigned long g_0059dc28;
extern "C" unsigned long g_0059dc2c;
extern "C" unsigned long g_0059dc30;
extern "C" unsigned long g_0059dc34;
extern "C" unsigned long g_0059dc38;
extern "C" unsigned long g_0059dc3c;
extern "C" unsigned long g_0059dc40;
extern "C" unsigned long g_0059dc44;
extern "C" unsigned long g_0059dd9c;
extern "C" unsigned long g_0059ddb4;
extern "C" unsigned long g_0059dea0;
extern "C" unsigned long g_0059dec0;
extern "C" unsigned long g_0059deec;
extern "C" unsigned long g_0059def0;
extern "C" unsigned long g_0059def4;
extern "C" unsigned long g_0059def8;
extern "C" unsigned long g_0059defc;
extern "C" unsigned long g_0059df0a;
extern "C" unsigned long g_0059dfe6;
extern "C" unsigned long g_0059dfe8;
extern "C" unsigned long g_0059e066;
extern "C" unsigned long g_0059e0de;
extern "C" unsigned long g_0059e0e0;
extern "C" unsigned long g_0059e15c;
extern "C" unsigned long g_0059e224;
extern "C" unsigned long g_0059e236;
extern "C" unsigned long g_0059e238;
extern "C" unsigned long g_0059e2b6;
extern "C" unsigned long g_0059e2e4;
extern "C" unsigned long g_0059e2e8;
extern "C" unsigned long g_0059e2ec;
extern "C" unsigned long g_0059e2f0;
extern "C" unsigned long g_0059e2f4;
extern "C" unsigned long g_0059e2f8;
extern "C" unsigned long g_0059e2fc;
extern "C" unsigned long g_0059e300;
extern "C" unsigned long g_0059e304;
extern "C" unsigned long g_0059e308;
extern "C" unsigned long g_0059e30c;
extern "C" unsigned long g_0059e310;
extern "C" unsigned long g_0059e314;
extern "C" unsigned long g_0059e318;
extern "C" unsigned long g_0059e31c;
extern "C" unsigned long g_0059e320;
extern "C" unsigned long g_0059e324;
extern "C" unsigned long g_0059e328;
extern "C" unsigned long g_0059e32c;
extern "C" unsigned long g_0059e37c;
extern "C" unsigned long g_0059e37e;
extern "C" unsigned long g_0059e3fa;
extern "C" unsigned long g_0059e3fc;
extern "C" unsigned long g_0059e47b;
extern "C" unsigned long g_0059e484;
extern "C" unsigned long g_0059e488;
extern "C" unsigned long g_0059e48c;
extern "C" unsigned long g_0059e490;
extern "C" unsigned long g_0059e494;
extern "C" unsigned long g_0059e498;
extern "C" unsigned long g_0059e49c;
extern "C" unsigned long g_0059e4a0;
extern "C" unsigned long g_0059e4a4;
extern "C" unsigned long g_0059e4a8;
extern "C" unsigned long g_0059e4bc;
extern "C" unsigned long g_0059e4d6;
extern "C" unsigned long g_0059e590;
extern "C" unsigned long g_0059e5a6;
extern "C" unsigned long g_0059e643;
extern "C" unsigned long g_0059e652;
extern "C" unsigned long g_0059e654;
extern "C" unsigned long g_0059e6e9;
extern "C" unsigned long g_0059e7b6;
extern "C" unsigned long g_0059e7e8;
extern "C" unsigned long g_0059e7fa;
extern "C" unsigned long g_0059e826;
extern "C" unsigned long g_0059e85c;
extern "C" unsigned long g_0059e870;
extern "C" unsigned long g_0059e874;
extern "C" unsigned long g_0059e878;
extern "C" unsigned long g_0059e87c;
extern "C" unsigned long g_0059e880;
extern "C" unsigned long g_0059e884;
extern "C" unsigned long g_0059e888;
extern "C" unsigned long g_0059e88c;
extern "C" unsigned long g_0059e890;
extern "C" unsigned long g_0059e894;
extern "C" unsigned long g_0059e898;
extern "C" unsigned long g_0059e89c;
extern "C" unsigned long g_0059e8a0;
extern "C" unsigned long g_0059e8a4;
extern "C" unsigned long g_0059e8a8;
extern "C" unsigned long g_0059e8ac;
extern "C" unsigned long g_0059e8b0;
extern "C" unsigned long g_0059e8b4;
extern "C" unsigned long g_0059e8b8;
extern "C" unsigned long g_0059e8e8;
extern "C" unsigned long g_0059e8f8;
extern "C" unsigned long g_0059e914;
extern "C" unsigned long g_0059e918;
extern "C" unsigned long g_0059e99a;
extern "C" unsigned long g_0059e9a8;
extern "C" unsigned long g_0059e9c0;
extern "C" unsigned long g_0059e9c4;
extern "C" unsigned long g_0059e9c8;
extern "C" unsigned long g_0059e9cc;
extern "C" unsigned long g_0059e9d0;
extern "C" unsigned long g_0059e9d4;
extern "C" unsigned long g_0059e9ee;
extern "C" unsigned long g_0059e9f2;
extern "C" unsigned long g_0059ea44;
extern "C" unsigned long g_0059ea9a;
extern "C" unsigned long g_0059ead8;
extern "C" unsigned long g_0059eae6;
extern "C" unsigned long g_0059eb10;
extern "C" unsigned long g_0059eb14;
extern "C" unsigned long g_0059eb18;
extern "C" unsigned long g_0059eb1c;
extern "C" unsigned long g_0059eb20;
extern "C" unsigned long g_0059eb24;
extern "C" unsigned long g_0059eb34;
extern "C" unsigned long g_0059ebac;
extern "C" unsigned long g_0059ebb0;
extern "C" unsigned long g_0059ebb4;
extern "C" unsigned long g_0059ebb8;
extern "C" unsigned long g_0059ebc6;
extern "C" unsigned long g_0059ebc8;
extern "C" unsigned long g_0059ebd6;
extern "C" unsigned long g_0059ebd9;
extern "C" unsigned long g_0059ece6;
extern "C" unsigned long g_0059edf0;
extern "C" unsigned long g_0059eede;
extern "C" unsigned long g_0059eee0;
extern "C" unsigned long g_0059ef58;
extern "C" unsigned long g_0059ef9c;
extern "C" unsigned long g_0059efa0;
extern "C" unsigned long g_0059efa4;
extern "C" unsigned long g_0059efa8;
extern "C" unsigned long g_0059efac;
extern "C" unsigned long g_0059efb0;
extern "C" unsigned long g_0059efb4;
extern "C" unsigned long g_0059efb8;
extern "C" unsigned long g_0059efbc;
extern "C" unsigned long g_0059efc0;
extern "C" unsigned long g_0059efc4;
extern "C" unsigned long g_0059efc8;
extern "C" unsigned long g_0059efcc;
extern "C" unsigned long g_0059efd0;
extern "C" unsigned long g_0059efd4;
extern "C" unsigned long g_0059efd8;
extern "C" unsigned long g_0059efdc;
extern "C" unsigned long g_0059efe0;
extern "C" unsigned long g_0059efe4;
extern "C" unsigned long g_0059efe8;
extern "C" unsigned long g_0059f022;
extern "C" unsigned long g_0059f024;
extern "C" unsigned long g_0059f09c;
extern "C" unsigned long g_0059f184;
extern "C" unsigned long g_0059f186;
extern "C" unsigned long g_0059f1fe;
extern "C" unsigned long g_0059f274;
extern "C" unsigned long g_0059f278;
extern "C" unsigned long g_0059f2f6;
extern "C" unsigned long g_0059f387;
extern "C" unsigned long g_0059f3c8;
extern "C" unsigned long g_0059f3cc;
extern "C" unsigned long g_0059f3d0;
extern "C" unsigned long g_0059f3d4;
extern "C" unsigned long g_0059f3d8;
extern "C" unsigned long g_0059f3dc;
extern "C" unsigned long g_0059f3e0;
extern "C" unsigned long g_0059f3e4;
extern "C" unsigned long g_0059f3e8;
extern "C" unsigned long g_0059f3ec;
extern "C" unsigned long g_0059f3f0;
extern "C" unsigned long g_0059f3f4;
extern "C" unsigned long g_0059f3f8;
extern "C" unsigned long g_0059f3fc;
extern "C" unsigned long g_0059f400;
extern "C" unsigned long g_0059f404;
extern "C" unsigned long g_0059f408;
extern "C" unsigned long g_0059f40c;
extern "C" unsigned long g_0059f410;
extern "C" unsigned long g_0059f414;
extern "C" unsigned long g_0059f418;
extern "C" unsigned long g_0059f41c;
extern "C" unsigned long g_0059f472;
extern "C" unsigned long g_0059f4d2;
extern "C" unsigned long g_0059f4d4;
extern "C" unsigned long g_0059f4e2;
extern "C" unsigned long g_0059f4e5;
extern "C" unsigned long g_0059f5f4;
extern "C" unsigned long g_0059f5f8;
extern "C" unsigned long g_0059f5fc;
extern "C" unsigned long g_0059f600;
extern "C" unsigned long g_0059f604;
extern "C" unsigned long g_0059f608;
extern "C" unsigned long g_0059f60c;
extern "C" unsigned long g_0059f610;
extern "C" unsigned long g_0059f614;
extern "C" unsigned long g_0059f618;
extern "C" unsigned long g_0059f62e;
extern "C" unsigned long g_0059f66c;
extern "C" unsigned long g_0059f68c;
extern "C" unsigned long g_0059f77a;
extern "C" unsigned long g_0059f8c4;
extern "C" unsigned long g_0059f900;
extern "C" unsigned long g_0059f904;
extern "C" unsigned long g_0059f908;
extern "C" unsigned long g_0059f90c;
extern "C" unsigned long g_0059f910;
extern "C" unsigned long g_0059f914;
extern "C" unsigned long g_0059f918;
extern "C" unsigned long g_0059f91c;
extern "C" unsigned long g_0059f920;
extern "C" unsigned long g_0059fba0;
extern "C" unsigned long g_0059fbb4;
extern "C" unsigned long g_0059fbc6;
extern "C" unsigned long g_0059fbe4;
extern "C" unsigned long g_0059fc4c;
extern "C" unsigned long g_0059fc50;
extern "C" unsigned long g_0059fc54;
extern "C" unsigned long g_0059fc58;
extern "C" unsigned long g_0059fc5c;
extern "C" unsigned long g_0059fc60;
extern "C" unsigned long g_0059fc70;
extern "C" unsigned long g_0059fc82;
extern "C" unsigned long g_0059fc94;
extern "C" unsigned long g_0059fce8;
extern "C" unsigned long g_0059fe0c;
extern "C" unsigned long g_0059fe48;
extern "C" unsigned long g_0059fe4c;
extern "C" unsigned long g_0059fe50;
extern "C" unsigned long g_0059fe54;
extern "C" unsigned long g_0059fe58;
extern "C" unsigned long g_0059fe74;
extern "C" unsigned long g_0059fe78;
extern "C" unsigned long g_0059fe9e;
extern "C" unsigned long g_0059fece;
extern "C" unsigned long g_0059ff3e;
extern "C" unsigned long g_0059ff4e;
extern "C" unsigned long g_0059ff8a;
extern "C" unsigned long g_0059ffea;
extern "C" unsigned long g_005a001e;
extern "C" unsigned long g_005a0058;
extern "C" unsigned long g_005a00ca;
extern "C" unsigned long g_005a0104;
extern "C" unsigned long g_005a014e;
extern "C" unsigned long g_005a017a;
extern "C" unsigned long g_005a0190;
extern "C" unsigned long g_005a019e;
extern "C" unsigned long g_005a01a8;
extern "C" unsigned long g_005a01ac;
extern "C" unsigned long g_005a01b0;
extern "C" unsigned long g_005a01b4;
extern "C" unsigned long g_005a01b8;
extern "C" unsigned long g_005a01bc;
extern "C" unsigned long g_005a01c0;
extern "C" unsigned long g_005a01c4;
extern "C" unsigned long g_005a01c8;
extern "C" unsigned long g_005a01cc;
extern "C" unsigned long g_005a01d0;
extern "C" unsigned long g_005a01d4;
extern "C" unsigned long g_005a01d8;
extern "C" unsigned long g_005a01dc;
extern "C" unsigned long g_005a01e0;
extern "C" unsigned long g_005a01e4;
extern "C" unsigned long g_005a01e8;
extern "C" unsigned long g_005a01ec;
extern "C" unsigned long g_005a01f0;
extern "C" unsigned long g_005a01f4;
extern "C" unsigned long g_005a01f8;
extern "C" unsigned long g_005a01fc;
extern "C" unsigned long g_005a020c;
extern "C" unsigned long g_005a022c;
extern "C" unsigned long g_005a0238;
extern "C" unsigned long g_005a0272;
extern "C" unsigned long g_005a0276;
extern "C" unsigned long g_005a02cc;
extern "C" unsigned long g_005a02d0;
extern "C" unsigned long g_005a02d4;
extern "C" unsigned long g_005a02d8;
extern "C" unsigned long g_005a02dc;
bool BLMineCollectPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineCollectPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectPresenter::onChangebDoBtn()
{
  *(undefined1 *)(((int)this) + 0x48) = 1;
  return;
}

BLMineCollectPresenter::~BLMineCollectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0059ae48 + g_0059ae94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0059ae62 + g_0059ae98,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLMineCollectPresenter::showDefence()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_0059afe0);
  return;
}

void BLMineCollectPresenter::showReward()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_0059aff4);
  return;
}



undefined4 BLMineCollectPresenter::create(BLMineCollectView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x4c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLMineCollectPresenter::rewardFail()
{
  return;
}

void BLMineCollectPresenter::changeMainBg()
{
  return;
}






void BLMineCollectPresenter::onFreshChangeView(cocos2d::CCObject* p1)
{
  0 /* ctorZero */;
  BLMineCollectPresenter::onChangeView(*(undefined4 *)(((int)this) + 0x1c));
  return;
}

// ===== 修复: 补回被误删的函数占位 (21) =====
void BLMineCollectPresenter::onProtectSuss()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  iVar1 = (undefined4)(intptr_t)(g_0059afc0);
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  ((UserData *)this)->subVirNumber(uVar3, 2, g_0059afb8);
  ((BLMineCollectView *)*(undefined4 *)(((int)this) + 0x18))->getScrollView();
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,*(undefined4 *)(((int)this) + 0x1c)));
  if (iVar4 != 0) {
    uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059af0a + (intptr_t)(g_0059afc4)) + iVar1));
    uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059af0a + (intptr_t)(g_0059afc8)) + iVar1));
    piVar2 = (int *)func_0079e55c(iVar4,uVar3,uVar6,0);
    if (((piVar2 != 0) &&
        (iVar4 = (**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,*(int *)(((int)this) + 0x1c) + 800), iVar4 != 0))
       && (piVar2 = (int *)func_0079e55c(iVar4,uVar3,uVar6,0), piVar2 != 0)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,*(int *)(((int)this) + 0x1c) + 200));
      piVar5 = (int *)0x0;
      if (iVar4 != 0) {
        piVar5 = (int *)func_0079e55c(iVar4,uVar3,
                                        *(undefined4 *)((unsigned char *)((char *)&g_0059af0a + (intptr_t)(g_0059afcc)) + iVar1),0);
      }
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,*(int *)(((int)this) + 0x1c) + 0xd2));
      piVar2 = (int *)0x0;
      if (iVar4 != 0) {
        piVar2 = (int *)func_0079e55c(iVar4,uVar3,
                                        *(undefined4 *)((unsigned char *)((char *)&g_0059af0a + (intptr_t)(g_0059afcc)) + iVar1),0);
      }
      if (piVar5 != 0) {
        (**(code **)(*(int *)(piVar5) + (0x90)))(piVar5,1);
        (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
      }
    }
  }
  return;
}

undefined8 BLMineCollectPresenter::onChangeDoBtn()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

BLMineCollectPresenter::BLMineCollectPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::onEnter()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (undefined4)(intptr_t)(g_0059b23c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b240)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b112 + (intptr_t)(g_0059b244)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b248)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b132 + (intptr_t)(g_0059b24c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b250)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b152 + (intptr_t)(g_0059b254)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b258)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b172 + (intptr_t)(g_0059b25c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b260)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b192 + (intptr_t)(g_0059b264)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b268)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b1b2 + (intptr_t)(g_0059b26c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b270)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b1d2 + (intptr_t)(g_0059b274)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b278)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b1f2 + (intptr_t)(g_0059b27c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b280)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0059b212 + (intptr_t)(g_0059b284)), 0);
  piVar3 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x30)))());
  ((cocos2d::CCScheduler *)(*(undefined4 *)((unsigned char *)((char *)&g_0059b100 + (intptr_t)(g_0059b288)) + iVar1)))->scheduleSelector(0, (cocos2d::CCObject*)((int)this), g_0059b28c, 0)
  ;
  return;
}

void BLMineCollectPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  (**(code **)(*(int *)(piVar1) + (0x30)))();
  uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059b2a8 + (intptr_t)(g_0059b2d0))));
  ((cocos2d::CCScheduler *)this)->unscheduleSelector(0 /*memptr*/, (cocos2d::CCObject*)0);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLMineCollectPresenter::showDownBtn()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int iStack_c8;
  undefined4 auStack_b0 [2];
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  int iStack_84;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); __builtin_memcpy(&auStack_98, &_ws.width, 4); uStack_94 = hw_fbits(_ws.height); }
  uVar1 = (undefined4)(func_0079e4fc(uStack_94,0x3f000000));
  iVar2 = (undefined4)(intptr_t)(func_0079e57c(uVar1,g_0059bb38));
  iStack_c8 = 0;
  do {
    uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
    uVar1 = (undefined4)(((MineData *)(uVar1))->getownminedatabypos(iStack_c8));
    0 /* ctorZero */;
    func_0079e45c(auStack_b0,(unsigned char *)((char *)&g_0059b8ca + (intptr_t)(g_0059bb3c)),auStack_a8);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_b0);
    piVar4 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar3);
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    uVar1 = (undefined4)(func_0079e2ec(iStack_c8 + -2));
    (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_b0,piVar3);
    uVar5 = (undefined4)(func_0079e59c(auStack_b0[0],g_0059bb40));
    uVar1 = (undefined4)(func_0079e4fc(uVar1,uVar5));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,auStack_a8);
    pcVar11 = *(code **)(*piVar4 + 0x28c);
    (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_b0,piVar3);
    ((cocos2d::CCSize *)(auStack_b0))->operator*(g_0059bb44);
    (*pcVar11)(piVar4,auStack_a8);
    (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3f800000);
    (**(code **)(*(int *)(piVar4) + (0x11c)))(piVar4,iStack_c8 + 300);
    (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar4,1);
    pcVar11 = *(code **)(*piVar4 + 300);
    uVar1 = (undefined4)(cocos2d::CCInteger::create(iStack_c8 + 300));
    (*pcVar11)(piVar4,uVar1);
    uStack_9c = (undefined4)(0);
    uStack_a0 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059b9ac + (intptr_t)(g_0059bb48))));
    (**(code **)(*(int *)(piVar4) + (0x254)))(piVar4,((int)this),uStack_a0,0,0x20);
    if (iStack_84 == 0) {
      iVar6 = (undefined4)(intptr_t)(func_0079e4bc(auStack_98,(unsigned char *)((char *)&g_0059b9c2 + (intptr_t)(g_0059bb4c))));
      if (iVar6 == 0) {
        piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059b9dc + (intptr_t)(g_0059bb50)), (char const*)(unsigned char *)((char *)&g_0059b9de + (intptr_t)(g_0059bb54)), g_0059bb58);
        (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7,(unsigned char *)((char *)&g_0059b9ee + (intptr_t)(g_0059bb5c)));
        ((cocos2d::CCLabelTTF *)(piVar7))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059b9fd + (intptr_t)(g_0059bb60)), 0x3f800000, 1);
        pcVar11 = *(code **)(*piVar7 + 0x4c);
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
        puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
        uVar5 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
        uVar5 = (undefined4)(func_0079e4fc(uVar5,g_0059bb64));
        uVar5 = (undefined4)(func_0079e4fc(uVar5,0x3e800000));
        iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
        uVar9 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
        uVar9 = (undefined4)(func_0079e4fc(uVar9,g_0059bb64));
        uVar9 = (undefined4)(func_0079e4fc(uVar9,0x3e800000));
        0 /* ctorZero */;
        ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_b0);
        (*pcVar11)(piVar7,auStack_a8);
        (**(code **)(*(int *)(piVar7) + (0x11c)))(piVar7,iStack_c8 + 0x140);
        piVar10 = *(int **)(((int)this) + 0x18);
        uVar1 = (undefined4)(2);
        pcVar11 = *(code **)(*piVar10 + 0xcc);
code_r0x0059baea:
        (*pcVar11)(piVar10,piVar7,uVar1);
      }
    }
    else if (iStack_84 == 1) {
      func_0079e45c(auStack_a8,(unsigned char *)((char *)&g_0059baa8 + (intptr_t)(g_0059bb68)),auStack_b0);
      piVar7 = (int *)0 /* ctorZero */;
      func_0079e2bc(auStack_a8);
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
      (*pcVar11)(piVar7,uVar1);
      (**(code **)(*(int *)(piVar7) + (0x11c)))(piVar7,iStack_c8 + 0x136);
      uVar1 = (undefined4)(1);
      piVar10 = *(int **)(((int)this) + 0x18);
      pcVar11 = *(code **)(*piVar10 + 0xcc);
      goto code_r0x0059baea;
    }
    if (iStack_c8 == 0) {
      pcVar11 = *(code **)(*piVar4 + 0x28c);
      (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_a8,piVar3);
      (*pcVar11)(piVar4,auStack_a8);
    }
    ((MineitemData *)(auStack_98))->~MineitemData();
    iStack_c8 = (undefined4)(intptr_t)(iStack_c8 + 1);
    if (iStack_c8 == 5) {
      return;
    }
  } while( true );
}

void BLMineCollectPresenter::onDoButton(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::changeBgSpView(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::changeDownBtn(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::onChangeView(int p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  code *pcVar13;
  int iStack_60;
  undefined1 auStack_3c [8];
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar9 = (undefined4)(intptr_t)(g_0059c394);
  ((BLMineCollectPresenter *)(((int)this)))->changeBgSpView(0);
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  *(int *)(iVar1 + 0x40) = p1;
  ((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,p1));
  if (iVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)software_udf(0xff,0x59c4a6);
    (*pcVar13)();
  }
  uVar11 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c398)) + iVar9));
  piVar3 = (int *)func_0079e55c(iVar1,uVar11,
                                  *(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c39c)) + iVar9),0);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0xd4)))(piVar3,p1));
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0079e55c(iVar1,uVar11,
                                    *(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c3a0)) + iVar9),0);
    if (piVar2 != 0) {
      (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    }
  }
  uVar4 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)(uVar4))->getrefreshminedata();
  iStack_60 = (undefined4)(intptr_t)(iStack_24);
  iVar1 = (undefined4)(intptr_t)(p1 * 0x14 + 0x19a);
  while( true ) {
    if (iStack_60 == iStack_20) break;
    iVar12 = (undefined4)(intptr_t)(iVar1 + -10);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0xd4)))(piVar3,iVar12));
    if (iVar5 != 0) {
      piVar6 = (int *)func_0079e55c(iVar5,uVar11,
                                      *(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c3a0)) + iVar9),0);
      if (piVar6 != 0) {
        (**(code **)(*(int *)(piVar6) + (0xec)))(piVar6,1);
      }
    }
    func_0079e53c(&uStack_34,iStack_60 + 0x10);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_34);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar6);
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    pcVar13 = *(code **)(*piVar7 + 0x28c);
    (**(code **)(*(int *)(piVar6) + (0x1cc)))(&uStack_34,piVar6);
    (*pcVar13)(piVar7,&uStack_34);
    pcVar13 = *(code **)(*piVar7 + 300);
    uVar4 = (undefined4)(cocos2d::CCInteger::create(iVar12));
    (*pcVar13)(piVar7,uVar4);
    (**(code **)(*(int *)(piVar7) + (0x11c)))(piVar7,iVar12);
    uStack_2c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c3a4)) + iVar9));
    uStack_28 = (undefined4)(0);
    (**(code **)(*(int *)(piVar7) + (0x254)))(piVar7,((int)this),uStack_2c,0,0x20);
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
    uVar10 = (undefined4)(func_0079e2ec(iVar1 + p1 * -0x14 + -0x19c));
    uVar10 = (undefined4)(func_0079e4fc(uVar10,g_0059c3a8));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_3c);
    (*pcVar13)(piVar7,&uStack_34);
    (**(code **)(*(int *)(piVar3) + (0xcc)))(piVar3,piVar7,1);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0xd4)))(piVar3,iVar1));
    if (iVar5 != 0) {
      piVar6 = (int *)func_0079e55c(iVar5,uVar11,
                                      *(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c3b4)) + iVar9),0);
      if (piVar6 != 0) {
        (**(code **)(*(int *)(piVar6) + (0xec)))(piVar6,1);
      }
    }
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)*(undefined4 *)(iStack_60 + 8), (char const*)(unsigned char *)((char *)&g_0059c286 + (intptr_t)(g_0059c3ac)), g_0059c3b0);
    uStack_34 = 0xff;
    uStack_33 = 0xff;
    uStack_32 = 0;
    (**(code **)(*(int *)(piVar6) + (0x1b4)))();
    ((cocos2d::CCLabelTTF *)(piVar6))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059c2d5 + (intptr_t)(g_0059c3b8)), 0x3f800000, 1);
    pcVar13 = *(code **)(*piVar6 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
    uVar10 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar5 + 4),0x3f000000));
    uVar10 = (undefined4)(func_0079e59c(uVar10,g_0059c3bc));
    uVar10 = (undefined4)(func_0079e59c(uVar10,g_0059c3c0));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_3c);
    (*pcVar13)(piVar6,&uStack_34);
    (**(code **)(*(int *)(piVar3) + (0xcc)))(piVar3,piVar6,1);
    (**(code **)(*(int *)(piVar6) + (0x11c)))(piVar6,iVar1);
    iStack_60 = (undefined4)(intptr_t)(iStack_60 + 0x80);
    iVar1 = (undefined4)(intptr_t)(iVar1 + 1);
  }
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x18) + 0xd4))
                    (*(int **)(((int)this) + 0x18),p1 + 0x140);
  if (iVar1 != 0) {
    piVar3 = (int *)func_0079e55c(iVar1,uVar11,
                                    *(undefined4 *)((unsigned char *)((char *)&g_0059c0a4 + (intptr_t)(g_0059c3b4)) + iVar9),0);
    if (piVar3 != 0) {
      pcVar13 = *(code **)(*piVar3 + 0x90);
      goto code_r0x0059c386;
    }
  }
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059c3ce + (intptr_t)(g_0059c4a8)), (char const*)(unsigned char *)((char *)&g_0059c3d0 + (intptr_t)(g_0059c4ac)), g_0059c4b0);
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,(unsigned char *)((char *)&g_0059c3e0 + (intptr_t)(g_0059c4b4)));
  ((cocos2d::CCLabelTTF *)(piVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059c3ef + (intptr_t)(g_0059c4b8)), 0x3f800000, 1);
  pcVar13 = *(code **)(*piVar3 + 0x4c);
  uVar11 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar4 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
  uVar4 = (undefined4)(func_0079e4fc(uVar4,g_0059c4bc));
  uVar4 = (undefined4)(func_0079e4fc(uVar4,0x3e800000));
  iVar9 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar10 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar9 + 4),0x3f000000));
  uVar10 = (undefined4)(func_0079e4fc(uVar10,g_0059c4bc));
  uVar10 = (undefined4)(func_0079e4fc(uVar10,0x3e800000));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar11))->operator+(*(const CCPoint *)(void *)auStack_3c);
  (*pcVar13)(piVar3,&uStack_34);
  (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,p1 + 0x140);
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar3,2);
  pcVar13 = *(code **)(*piVar3 + 0x90);
code_r0x0059c386:
  (*pcVar13)(piVar3,0);
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(&iStack_24))->~vector();
  return;
}

void BLMineCollectPresenter::showSerachView(int p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  int iStack_100;
  int *piStack_f8;
  undefined4 *puStack_f4;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined4 auStack_d0 [2];
  undefined4 auStack_c8 [2];
  char *pcStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [20];
  int iStack_84;
  
  puStack_f4 = (undefined4 *)(((int)this) + 0x34);
  iStack_100 = 0;
  do {
    piVar1 = (int *)cocos2d::CCLayer::create();
    (**(code **)(*(int *)(piVar1) + (0x11c)))(piVar1,iStack_100);
    ((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
    (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar1);
    pcVar11 = *(code **)(*piVar1 + 0x88);
    ((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x8c)))());
    (*pcVar11)(piVar1,uVar3);
    pcVar11 = *(code **)(*piVar1 + 0x4c);
    ((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
    (*pcVar11)(piVar1,uVar3);
    uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
    uVar3 = (undefined4)(((MineData *)(uVar3))->getownminedatabypos(iStack_100));
    0 /* ctorZero */;
    if (iStack_84 == 0) {
      puVar12 = auStack_dc;
      func_0079e45c(puVar12,(unsigned char *)((char *)&g_0059dd9c + (intptr_t)(g_0059deec)),&uStack_b8);
      piStack_f8 = (int *)0 /* ctorZero */;
code_r0x0059ddbc:
      func_0079e2bc(puVar12);
    }
    else if (iStack_84 == 1) {
      puVar12 = auStack_d8;
      func_0079e45c(puVar12,(unsigned char *)((char *)&g_0059ddb4 + (intptr_t)(g_0059def0)),&uStack_b8);
      piStack_f8 = (int *)0 /* ctorZero */;
      goto code_r0x0059ddbc;
    }
    piVar2 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piStack_f8)
    ;
    pcVar11 = *(code **)(*piVar2 + 0x28c);
    (**(code **)(*(int *)(piStack_f8) + (0x1cc)))(&uStack_b8,piStack_f8);
    (*pcVar11)(piVar2,&uStack_b8);
    pcVar11 = *(code **)(*piVar2 + 0x4c);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_d0) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(func_0079e2ec(iStack_100));
    uVar4 = (undefined4)(func_0079e4fc(uVar3,auStack_d0[0]));
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_c8) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
    uVar5 = (undefined4)(func_0079e4fc(auStack_c8[0],0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar5))->getWinSize(); __builtin_memcpy(&pcStack_c0, &_ws.width, 4); uStack_bc = hw_fbits(_ws.height); }
    uVar5 = (undefined4)(func_0079e57c(uStack_bc,g_0059def4));
    uVar5 = (undefined4)(func_0079e4fc(uVar5,0x3f000000));
    0 /* ctorZero */;
    (*pcVar11)(piVar2,&uStack_b8);
    pcVar11 = *(code **)(*piVar2 + 300);
    uVar4 = (undefined4)(cocos2d::CCInteger::create(iStack_100));
    (*pcVar11)(piVar2,uVar4);
    (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,iStack_100);
    (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar2);
    uVar4 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059dea0 + (intptr_t)(g_0059def8))));
    uStack_ac = (undefined4)(0);
    uStack_b0 = (undefined4)(uVar4);
    (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uVar4,0,0x20);
    if ((iStack_84 == 0) &&
       (iVar6 = func_0079e4bc(auStack_98,(unsigned char *)((char *)&g_0059dec0 + (intptr_t)(g_0059defc))), iVar6 == 0)) {
      func_0079e45c(auStack_d4,(unsigned char *)((char *)&g_0059df0a + (intptr_t)(g_0059e2e4)),&uStack_b8);
      uVar5 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_d4);
      piVar2 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)uVar5);
      pcVar11 = *(code **)(*piVar2 + 0x28c);
      0 /* ctorZero */;
      (*pcVar11)(piVar2,&uStack_b8);
      pcVar11 = *(code **)(*piVar2 + 0x4c);
      uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      *(CCSize *)(auStack_c8) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
      uVar5 = (undefined4)(func_0079e4fc(uVar3,auStack_c8[0]));
      uVar9 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar9))->getWinSize(); __builtin_memcpy(&pcStack_c0, &_ws.width, 4); uStack_bc = hw_fbits(_ws.height); }
      uVar9 = (undefined4)(func_0079e4fc(pcStack_c0,0x3f000000));
      uVar5 = (undefined4)(func_0079e59c(uVar5,uVar9));
      uVar5 = (undefined4)(func_0079e57c(uVar5,g_0059e2f0));
      0 /* ctorZero */;
      (*pcVar11)(piVar2,&uStack_b8);
      pcVar11 = *(code **)(*piVar2 + 300);
      uVar5 = (undefined4)(cocos2d::CCInteger::create(iStack_100 + 100));
      (*pcVar11)(piVar2,uVar5);
      (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,iStack_100 + 100);
      (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar2);
      uStack_a4 = (undefined4)(0);
      uStack_a8 = (undefined4)(uVar4);
      (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uVar4,0,0x20);
      piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059dfe6 + (intptr_t)(g_0059e2f8)), (char const*)(unsigned char *)((char *)&g_0059dfe8 + (intptr_t)(g_0059e2fc)), g_0059e300);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar7);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7);
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uVar4 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
      uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar5 = (undefined4)(func_0079e59c(uVar5,0x41800000));
      0 /* ctorZero */;
      (*pcVar11)(piVar7,&uStack_b8);
      func_0079e45c(auStack_d0,(unsigned char *)((char *)&g_0059e066 + (intptr_t)(g_0059e304)),&uStack_b8);
      piVar7 = (int *)0 /* ctorZero */;
      func_0079e2bc(auStack_d0);
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uVar4 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(uVar4,g_0059e308));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
      uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar5 = (undefined4)(func_0079e57c(uVar5,g_0059e30c));
      0 /* ctorZero */;
      (*pcVar11)(piVar7,&uStack_b8);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar7);
      piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059e0de + (intptr_t)(g_0059e310)), (char const*)(unsigned char *)((char *)&g_0059e0e0 + (intptr_t)(g_0059e314)), g_0059e300);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar8);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8);
      pcVar11 = *(code **)(*piVar8 + 0x4c);
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
      uVar5 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      uVar5 = (undefined4)(func_0079e59c(uVar5,g_0059e318));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar4))->operator+(*(cocos2d::CCPoint const*)&pcStack_c0);
      (*pcVar11)(piVar8,&uStack_b8);
      func_0079e45c(auStack_c8,(unsigned char *)((char *)&g_0059e15c + (intptr_t)(g_0059e31c)),&uStack_b8);
      piStack_f8 = (int *)0 /* ctorZero */;
      func_0079e2bc(auStack_c8);
      piVar2 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piStack_f8);
      pcVar11 = *(code **)(*piVar2 + 0x28c);
      0 /* ctorZero */;
      (*pcVar11)(piVar2,&uStack_b8);
      pcVar11 = *(code **)(*piVar2 + 0x4c);
      uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      *(CCSize *)(auStack_c8) = ((cocos2d::CCDirector *)(uVar4))->getWinSize();
      uVar3 = (undefined4)(func_0079e4fc(uVar3,auStack_c8[0]));
      uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar4))->getWinSize(); __builtin_memcpy(&pcStack_c0, &_ws.width, 4); uStack_bc = hw_fbits(_ws.height); }
      uVar4 = (undefined4)(func_0079e4fc(pcStack_c0,0x3f000000));
      uVar3 = (undefined4)(func_0079e59c(uVar3,uVar4));
      uVar3 = (undefined4)(func_0079e59c(uVar3,g_0059e2f0));
      0 /* ctorZero */;
      (*pcVar11)(piVar2,&uStack_b8);
      pcVar11 = *(code **)(*piVar2 + 300);
      uVar3 = (undefined4)(cocos2d::CCInteger::create(iStack_100 + 200));
      (*pcVar11)(piVar2,uVar3);
      (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,iStack_100 + 200);
      (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar2);
      uStack_9c = (undefined4)(0);
      uStack_a0 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059e224 + (intptr_t)(g_0059e320))));
      (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_a0,0,0x20);
      piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059e236 + (intptr_t)(g_0059e324)), (char const*)(unsigned char *)((char *)&g_0059e238 + (intptr_t)(g_0059e328)), g_0059e300);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar1);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1);
      pcVar11 = *(code **)(*piVar1 + 0x4c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uVar3 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
      uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e59c(uVar4,0x41800000));
      0 /* ctorZero */;
      (*pcVar11)(piVar1,&uStack_b8);
      func_0079e45c(&pcStack_c0,(unsigned char *)((char *)&g_0059e2b6 + (intptr_t)(g_0059e32c)),&uStack_b8);
      piVar1 = (int *)0 /* ctorZero */;
      func_0079e2bc(&pcStack_c0);
      pcVar11 = *(code **)(*piVar1 + 0x4c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uVar3 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      uVar3 = (undefined4)(func_0079e57c(uVar3,g_0059e484));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
      uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(uVar4,g_0059e488));
      0 /* ctorZero */;
      (*pcVar11)(piVar1,&uStack_b8);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar1);
      piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059e37c + (intptr_t)(g_0059e48c)), (char const*)(unsigned char *)((char *)&g_0059e37e + (intptr_t)(g_0059e490)), g_0059e494);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar7);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7);
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
      uVar4 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      uVar4 = (undefined4)(func_0079e59c(uVar4,g_0059e498));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar3))->operator+(*(cocos2d::CCPoint const*)&pcStack_c0);
      (*pcVar11)(piVar7,&uStack_b8);
      piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059e3fa + (intptr_t)(g_0059e49c)), (char const*)(unsigned char *)((char *)&g_0059e3fc + (intptr_t)(g_0059e4a0)), g_0059e494);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar1) + (0x1b4)))();
      pcVar11 = *(code **)(*piVar1 + 0x4c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uVar3 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1));
      uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(g_0059e4a4,uVar4));
      0 /* ctorZero */;
      (*pcVar11)(piVar1,&uStack_b8);
      (**(code **)(*(int *)(piVar2) + (200)))(piVar2,piVar1);
      ((cocos2d::CCLabelTTF *)(piVar1))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059e47b + (intptr_t)(g_0059e4a8)), 0x3f800000, 1);
    }
    else if ((iStack_84 == 0) &&
            (iVar6 = func_0079e4bc(auStack_98,(unsigned char *)((char *)&g_0059e4bc + (intptr_t)(g_0059e870))), iVar6 != 0)) {
      ((BLMineCollectPresenter *)(((int)this)))->showKaiCai(iStack_100);
    }
    else if (iStack_84 == 1) {
      func_0079e45c(&uStack_b8,(unsigned char *)((char *)&g_0059e4d6 + (intptr_t)(g_0059e874)),&pcStack_c0);
      piVar7 = (int *)0 /* ctorZero */;
      func_0079e2bc(&uStack_b8);
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
      piVar8 = (int *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
      uVar4 = (undefined4)(func_0079e4fc(*piVar8 + -0x80000000,0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(uVar4,g_0059e878));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
      uVar5 = (undefined4)(func_0079e4fc(*(int *)(iVar6 + 4) + -0x80000000,0x3f000000));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
      uVar9 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar5 = (undefined4)(func_0079e57c(uVar5,uVar9));
      uVar5 = (undefined4)(func_0079e57c(uVar5,g_0059e87c));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar3))->operator+(*(cocos2d::CCPoint const*)&pcStack_c0);
      (*pcVar11)(piVar7,&uStack_b8);
      (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar7);
      func_0079e45c(auStack_c8,(unsigned char *)((char *)&g_0059e590 + (intptr_t)(g_0059e880)),&uStack_b8);
      if (iStack_100 == 4) {
        func_0079e2dc(auStack_c8,(unsigned char *)((char *)&g_0059e85c + (intptr_t)(g_0059e8b8)));
      }
      piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_c8[0], (char const*)(unsigned char *)((char *)&g_0059e5a6 + (intptr_t)(g_0059e884)), g_0059e888);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar8) + (0x1b4)))();
      pcVar11 = *(code **)(*piVar8 + 0x4c);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
      uVar4 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      puVar10 = (undefined4 *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
      uVar5 = (undefined4)(func_0079e4fc(*puVar10,0x3f000000));
      uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
      uVar4 = (undefined4)(func_0079e59c(uVar4,g_0059e88c));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(uVar3))->operator+(*(cocos2d::CCPoint const*)&pcStack_c0);
      (*pcVar11)(piVar8,&uStack_b8);
      (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar8);
      ((cocos2d::CCLabelTTF *)(piVar8))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059e643 + (intptr_t)(g_0059e890)), 0x3f800000, 1);
      piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0059e652 + (intptr_t)(g_0059e894)), (char const*)(unsigned char *)((char *)&g_0059e654 + (intptr_t)(g_0059e898)), g_0059e888);
      uStack_b8 = 0xff;
      uStack_b7 = 0xff;
      uStack_b6 = 0;
      (**(code **)(*(int *)(piVar7) + (0x1b4)))();
      pcVar11 = *(code **)(*piVar7 + 0x4c);
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))(piVar2));
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
      uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
      iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
      uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar6 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
      uVar4 = (undefined4)(func_0079e57c(uVar4,g_0059e87c));
      0 /* ctorZero */;
      (*pcVar11)(piVar7,&uStack_b8);
      ((cocos2d::CCLabelTTF *)(piVar7))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0059e6e9 + (intptr_t)(g_0059e89c)), 0x3f800000, 1);
      (**(code **)(*(int *)(piVar1) + (200)))(piVar1,piVar7);
      func_0079e2bc(auStack_c8);
    }
    uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
    iVar6 = (undefined4)(intptr_t)(((MineData *)(uVar3))->getownminedatabypos(iStack_100));
    uVar3 = (undefined4)(func_0079ea24(*(undefined4 *)(iVar6 + 0x30),*(undefined4 *)(iVar6 + 0x34)));
    puStack_f4[-5] = uVar3;
    uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
    iVar6 = (undefined4)(intptr_t)(((MineData *)(uVar3))->getownminedatabypos(iStack_100));
    uVar3 = (undefined4)(func_0079ea24(*(undefined4 *)(iVar6 + 0x38),*(undefined4 *)(iVar6 + 0x3c)));
    *puStack_f4 = uVar3;
    puStack_f4 = puStack_f4 + 1;
    ((MineitemData *)(auStack_98))->~MineitemData();
    iStack_100 = (undefined4)(intptr_t)(iStack_100 + 1);
    if (iStack_100 == 5) {
      ((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
      piVar1 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
      pcVar11 = *(code **)(*piVar1 + 0x88);
      uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); __builtin_memcpy(&pcStack_c0, &_ws.width, 4); uStack_bc = hw_fbits(_ws.height); }
      uVar3 = (undefined4)(func_0079e4fc(pcStack_c0,g_0059e8a0));
      uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar4))->getWinSize(); __builtin_memcpy(&uStack_b8, &_ws.width, 4); uStack_b4 = hw_fbits(_ws.height); }
      uVar4 = (undefined4)(func_0079e57c(uStack_b4,g_0059e8a4));
      0 /* ctorZero */;
      (*pcVar11)(piVar1,auStack_98);
      uVar3 = (undefined4)(((BLMineCollectView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView());
      func_0079e45c(auStack_98,(unsigned char *)((char *)&g_0059e7b6 + (intptr_t)(g_0059e8a8)),&uStack_b8);
      (((PagedScrollView *)(uVar3)))->enablejiantou(*(std::string *)auStack_98);
      func_0079e2bc(auStack_98);
      uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
      uVar3 = (undefined4)(((MineData *)(uVar3))->getownminedatabypos(0));
      0 /* ctorZero */;
      uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0059e7e8 + (intptr_t)(g_0059e8ac)), 0);
      uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e45c(&uStack_b8,(unsigned char *)((char *)&g_0059e7fa + (intptr_t)(g_0059e8b0)),auStack_c8);
      *(std::string *)(&pcStack_c0) = ((cocos2d::CCUserDefault *)(uVar3))->getStringForKey((char const*)uVar4, *(std::string const*)&uStack_b8);
      func_0079e2bc(&uStack_b8);
      if (((iStack_84 == 0) &&
          (iVar6 = func_0079e4bc(auStack_98,(unsigned char *)((char *)&g_0059e826 + (intptr_t)(g_0059e8b4))), iVar6 != 0)) ||
         (*pcStack_c0 != '\0')) {
        uVar3 = (undefined4)(0);
      }
      else {
        uVar3 = (undefined4)(1);
      }
      ((BLMineCollectPresenter *)(((int)this)))->changeBgSpView(uVar3);
      func_0079e2bc(&pcStack_c0);
      ((MineitemData *)(auStack_98))->~MineitemData();
      return;
    }
  } while( true );
}

void BLMineCollectPresenter::recoverSuccess(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  BLMineCollectPresenter::showKaiCai(*(undefined4 *)(iVar1 + 0x40));
  return;
}

void BLMineCollectPresenter::onProectMine(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [132];
  
  if ((((int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_0059e914 + (intptr_t)(g_0059e9c8))),
                               *(undefined4 *)((unsigned char *)((char *)&g_0059e918 + (intptr_t)(g_0059e9cc))),0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14) == 1)) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x28))());
    uVar4 = (undefined4)(intptr_t)(((UserData *)uVar3)->getVirNumber(2));
    iVar1 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);return ((_x >= _y)?1:0);}((((long long)(unsigned)((int)uVar4))|(((long long)(unsigned)((int)((ulonglong)uVar4 >> 0x20)))<<32)),(((long long)(unsigned)(g_0059e9c0))|(((long long)(unsigned)(g_0059e9c4))<<32))))));
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)uVar3)->showToast((char const*)(unsigned char *)((char *)&g_0059e99a + (intptr_t)(g_0059e9d0)));
    }
    else {
      uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
      uVar3 = (undefined4)(((MineData *)uVar3)->getownminedatabypos(*(undefined4 *)(((int)this) + 0x1c)));
      0 /* ctorZero */;
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
      func_0079e53c(auStack_9c,auStack_98);
      func_0079e52c(iVar1 + 0x3c,auStack_9c);
      func_0079e2bc(auStack_9c);
      uVar3 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
      ((MineData *)uVar3)->GetDataFromNet(6, 1, 0);
      ((MineitemData *)auStack_98)->~MineitemData();
    }
  }
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_0059e9a8 + (intptr_t)(g_0059e9d4)));
  return;
}

void BLMineCollectPresenter::onBuyKaiFeng(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::showKongKuang()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMineCollectPresenter::onKaiFengEnd()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  uVar4 = (undefined4)(200);
  0 /* ctorZero */;
  BLMineCollectPresenter::changeBgSpView(1);
  if (*(int *)(((int)this) + 0x1c) == 4) {
    uVar4 = (undefined4)(500);
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x28))());
  uVar5 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar4)))));
  ((UserData *)uVar3)->subVirNumber(2, (int)uVar5, (int)((ulonglong)uVar5 >> 0x20));
  BLMineCollectPresenter::showKongKuang();
  return ghidra_CONCAT44(p2,1);
}

void BLMineCollectPresenter::updateShowTime(float p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 auStack_1c [2];
  
  iVar1 = (undefined4)(intptr_t)(g_0059f904);
  puStack_40 = (undefined4 *)(((int)this) + 0x34);
  puVar11 = (undefined4 *)(((int)this) + 0x20);
  iStack_44 = g_0059f900;
  do {
    uVar10 = (undefined4)(*puVar11);
    iVar6 = (undefined4)(intptr_t)(iStack_44 + g_0059f908);
    iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar10),(int)(0)))));
    if (iVar2 != 0) {
      uVar10 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar10),(int)(p1)))));
      *puVar11 = uVar10;
      ((BLMineCollectView *)*(undefined4 *)(((int)this) + 0x18))->getScrollView();
      piVar4 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0xd4))(piVar4,iVar6));
      if (iVar2 != 0) {
        uVar10 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f90c)) + iVar1));
        uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f910)) + iVar1));
        piVar4 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0);
        if ((((piVar4 != 0) &&
             (iVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4,iStack_44 + 0xbe), iVar2 != 0)) &&
            (piVar3 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0), piVar3 != 0)) &&
           ((iVar2 = (**(code **)(*piVar3 + 0xd4))(piVar3,iStack_44 + -0x19a), iVar2 != 0 &&
            (piVar3 = (int *)func_0079e55c(iVar2,uVar10,
                                             *(undefined4 *)((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f914)) + iVar1),
                                             0), piVar3 != 0)))) {
          uVar7 = (undefined4)(*puVar11);
          iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar7),(int)(0)))));
          if (iVar2 == 0) {
            *puVar11 = 0;
            (**(code **)(*piVar3 + 0x234))(piVar3,(unsigned char *)((char *)&g_0059f77a + (intptr_t)(g_0059f918)));
            iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0xd4))(piVar4,iStack_44 + -10));
            piVar3 = (int *)0x0;
            if (iVar2 != 0) {
              piVar3 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0);
            }
            iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0xd4))(piVar4,iStack_44));
            if (((iVar2 != 0) &&
                (piVar4 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0), piVar3 != 0)) &&
               (piVar4 != 0)) {
              (**(code **)(*piVar3 + 0x90))(piVar3,0);
              (**(code **)(*piVar4 + 0x90))(piVar4,1);
            }
          }
          else {
            pcVar9 = *(code **)(*piVar3 + 0x234);
            uVar12 = (undefined4)(intptr_t)(func_0079ea44(uVar7));
            uVar10 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
            0 /* ctorZero */;
            (*pcVar9)(piVar3,auStack_1c[0]);
            func_0079e2bc(auStack_1c);
          }
        }
      }
    }
    iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x == _y)?1:0);}((int)(*puVar11),(int)(0)))));
    if (iVar2 != 0) {
      uVar10 = (undefined4)(*puStack_40);
      iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar10),(int)(0)))));
      if (iVar2 != 0) {
        uVar10 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar10),(int)(p1)))));
        *puStack_40 = uVar10;
        ((BLMineCollectView *)*(undefined4 *)(((int)this) + 0x18))->getScrollView();
        piVar4 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
        iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0xd4))(piVar4,iVar6));
        if (iVar2 != 0) {
          uVar10 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f90c)) + iVar1));
          uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f910)) + iVar1));
          piVar4 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0);
          if ((((piVar4 != 0) &&
               (iVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4,iStack_44), iVar2 != 0)) &&
              (piVar4 = (int *)func_0079e55c(iVar2,uVar10,uVar8,0), piVar4 != 0)) &&
             ((iVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4,iStack_44 + -500), iVar2 != 0 &&
              (piVar4 = (int *)func_0079e55c(iVar2,uVar10,
                                               *(undefined4 *)
                                                ((unsigned char *)((char *)&g_0059f68c + (intptr_t)(g_0059f914)) + iVar1),0),
              piVar4 != 0)))) {
            uVar10 = (undefined4)(*puStack_40);
            iVar5 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar10),(int)(0)))));
            iVar2 = (undefined4)(intptr_t)(g_0059f91c);
            if (iVar5 == 0) {
              *puStack_40 = 0;
              (**(code **)(*piVar4 + 0x234))(piVar4,&g_0059f8c4 + iVar2);
              uVar10 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
              ((MineData *)uVar10)->ClearOneMinebyid(iVar6);
              BLMineCollectPresenter::showKongKuang();
            }
            else {
              pcVar9 = *(code **)(*piVar4 + 0x234);
              uVar12 = (undefined4)(intptr_t)(func_0079ea44(uVar10));
              uVar10 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
              0 /* ctorZero */;
              (*pcVar9)(piVar4,auStack_1c[0]);
              func_0079e2bc(auStack_1c);
            }
          }
        }
      }
    }
    puVar11 = puVar11 + 1;
    puStack_40 = puStack_40 + 1;
    iStack_44 = iStack_44 + 1;
  } while (iStack_44 != g_0059f920);
  return;
}

void BLMineCollectPresenter::initWithView(BLMineCollectView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::getOneMineInfo(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::onDoBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectPresenter::showKaiCai(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

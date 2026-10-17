#include "BluetoothHelper.h"
#include "CCNotificationCenter.h"
#include "CCString.h"
#include "CCArray.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "ArenaPlayerData.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionData.h"
#include "BLResultManager.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLVideoPlayer.h"
#include "CCJson.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PKOnlineManager.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long software_udf(...);
extern "C" unsigned long LAB_00431efe;

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042fae4;
extern "C" unsigned long _DAT_0042fae8;
extern "C" unsigned long _DAT_0042fbb0;
extern "C" unsigned long _DAT_0042fbb4;
extern "C" unsigned long _DAT_0042fc64;
extern "C" unsigned long _DAT_0042fc68;
extern "C" unsigned long _DAT_0042ff7c;
extern "C" unsigned long _DAT_0042ff80;
extern "C" unsigned long _DAT_0042ff84;
extern "C" unsigned long _DAT_0042ff88;
extern "C" unsigned long _DAT_0042ff8c;
extern "C" unsigned long _DAT_0042ff90;
extern "C" unsigned long _DAT_0042ff94;
extern "C" unsigned long _DAT_0042ff98;
extern "C" unsigned long _DAT_0042ff9c;
extern "C" unsigned long _DAT_0042ffa0;
extern "C" unsigned long _DAT_0042ffa4;
extern "C" unsigned long _DAT_0043004c;
extern "C" unsigned long _DAT_00430050;
extern "C" unsigned long _DAT_00430054;
extern "C" unsigned long _DAT_00430058;
extern "C" unsigned long _DAT_0043005c;
extern "C" unsigned long _DAT_00430338;
extern "C" unsigned long _DAT_0043033c;
extern "C" unsigned long _DAT_00430340;
extern "C" unsigned long _DAT_00430344;
extern "C" unsigned long _DAT_00430348;
extern "C" unsigned long _DAT_0043034c;
extern "C" unsigned long _DAT_00430350;
extern "C" unsigned long _DAT_00430354;
extern "C" unsigned long _DAT_00430358;
extern "C" unsigned long _DAT_0043035c;
extern "C" unsigned long _DAT_00430360;
extern "C" unsigned long _DAT_00430364;
extern "C" unsigned long _DAT_00430368;
extern "C" unsigned long _DAT_0043036c;
extern "C" unsigned long _DAT_00430664;
extern "C" unsigned long _DAT_00430668;
extern "C" unsigned long _DAT_0043066c;
extern "C" unsigned long _DAT_00430670;
extern "C" unsigned long _DAT_00430674;
extern "C" unsigned long _DAT_00430678;
extern "C" unsigned long _DAT_0043067c;
extern "C" unsigned long _DAT_00430680;
extern "C" unsigned long _DAT_00430684;
extern "C" unsigned long _DAT_00430688;
extern "C" unsigned long _DAT_0043068c;
extern "C" unsigned long _DAT_00430690;
extern "C" unsigned long _DAT_00430694;
extern "C" unsigned long _DAT_00430698;
extern "C" unsigned long _DAT_0043069c;
extern "C" unsigned long _DAT_004308b0;
extern "C" unsigned long _DAT_004308b4;
extern "C" unsigned long _DAT_004308b8;
extern "C" unsigned long _DAT_004308bc;
extern "C" unsigned long _DAT_004308c0;
extern "C" unsigned long _DAT_004308c4;
extern "C" unsigned long _DAT_004308c8;
extern "C" unsigned long _DAT_004308cc;
extern "C" unsigned long _DAT_004308d0;
extern "C" unsigned long _DAT_004308d4;
extern "C" unsigned long _DAT_004308d8;
extern "C" unsigned long _DAT_004309b8;
extern "C" unsigned long _DAT_004309bc;
extern "C" unsigned long _DAT_004309c0;
extern "C" unsigned long _DAT_004309c4;
extern "C" unsigned long _DAT_004309c8;
extern "C" unsigned long _DAT_004309cc;
extern "C" unsigned long _DAT_004309d0;
extern "C" unsigned long _DAT_00430a60;
extern "C" unsigned long _DAT_00430a64;
extern "C" unsigned long _DAT_00430a68;
extern "C" unsigned long _DAT_00430a6c;
extern "C" unsigned long _DAT_00430a70;
extern "C" unsigned long _DAT_00430af8;
extern "C" unsigned long _DAT_00430afc;
extern "C" unsigned long _DAT_00430b00;
extern "C" unsigned long _DAT_00430b04;
extern "C" unsigned long _DAT_00430b08;
extern "C" unsigned long _DAT_00430d08;
extern "C" unsigned long _DAT_00430d0c;
extern "C" unsigned long _DAT_00430d10;
extern "C" unsigned long _DAT_00430d14;
extern "C" unsigned long _DAT_00430d18;
extern "C" unsigned long _DAT_00430d1c;
extern "C" unsigned long _DAT_00430d20;
extern "C" unsigned long _DAT_00430d24;
extern "C" unsigned long _DAT_00430d28;
extern "C" unsigned long _DAT_00430d2c;
extern "C" unsigned long _DAT_00430d30;
extern "C" unsigned long _DAT_00430e64;
extern "C" unsigned long _DAT_00430e68;
extern "C" unsigned long _DAT_00430e6c;
extern "C" unsigned long _DAT_00430e70;
extern "C" unsigned long _DAT_00430e74;
extern "C" unsigned long _DAT_00430e78;
extern "C" unsigned long _DAT_00430e7c;
extern "C" unsigned long _DAT_00430e80;
extern "C" unsigned long _DAT_00430e84;
extern "C" unsigned long _DAT_00430f60;
extern "C" unsigned long _DAT_00430f64;
extern "C" unsigned long _DAT_00430f68;
extern "C" unsigned long _DAT_00430f6c;
extern "C" unsigned long _DAT_00430f70;
extern "C" unsigned long _DAT_00430f74;
extern "C" unsigned long _DAT_00430f78;
extern "C" unsigned long _DAT_00430f7c;
extern "C" unsigned long _DAT_00430fe0;
extern "C" unsigned long _DAT_00430fe4;
extern "C" unsigned long _DAT_00430fe8;
extern "C" unsigned long _DAT_00430fec;
extern "C" unsigned long _DAT_00431008;
extern "C" unsigned long _DAT_00431124;
extern "C" unsigned long _DAT_00431128;
extern "C" unsigned long _DAT_0043112c;
extern "C" unsigned long _DAT_00431130;
extern "C" unsigned long _DAT_00431134;
extern "C" unsigned long _DAT_00431138;
extern "C" unsigned long _DAT_0043113c;
extern "C" unsigned long _DAT_00431140;
extern "C" unsigned long _DAT_004311bc;
extern "C" unsigned long _DAT_004311c0;
extern "C" unsigned long _DAT_004311c4;
extern "C" unsigned long _DAT_004312b4;
extern "C" unsigned long _DAT_004312b8;
extern "C" unsigned long _DAT_004312bc;
extern "C" unsigned long _DAT_004312c0;
extern "C" unsigned long _DAT_00431370;
extern "C" unsigned long _DAT_00431374;
extern "C" unsigned long _DAT_00431378;
extern "C" unsigned long _DAT_00431428;
extern "C" unsigned long _DAT_0043142c;
extern "C" unsigned long _DAT_00431430;
extern "C" unsigned long _DAT_004314f8;
extern "C" unsigned long _DAT_004314fc;
extern "C" unsigned long _DAT_004315a4;
extern "C" unsigned long _DAT_004315a8;
extern "C" unsigned long _DAT_004315ac;
extern "C" unsigned long _DAT_00431630;
extern "C" unsigned long _DAT_00431634;
extern "C" unsigned long _DAT_00431684;
extern "C" unsigned long _DAT_00431744;
extern "C" unsigned long _DAT_00431748;
extern "C" unsigned long _DAT_0043174c;
extern "C" unsigned long _DAT_00431750;
extern "C" unsigned long _DAT_004319a4;
extern "C" unsigned long _DAT_004319a8;
extern "C" unsigned long _DAT_004319ac;
extern "C" unsigned long _DAT_004319b0;
extern "C" unsigned long _DAT_004319b4;
extern "C" unsigned long _DAT_004319b8;
extern "C" unsigned long _DAT_004319bc;
extern "C" unsigned long _DAT_004319c0;
extern "C" unsigned long _DAT_00431b10;
extern "C" unsigned long _DAT_00431b14;
extern "C" unsigned long _DAT_00431b18;
extern "C" unsigned long _DAT_00431b1c;
extern "C" unsigned long _DAT_00431b20;
extern "C" unsigned long _DAT_00431b24;
extern "C" unsigned long _DAT_00431bd0;
extern "C" unsigned long _DAT_00431bd4;
extern "C" unsigned long _DAT_00431cd4;
extern "C" unsigned long _DAT_00431cd8;
extern "C" unsigned long _DAT_00431cdc;
extern "C" unsigned long _DAT_00431ce0;
extern "C" unsigned long _DAT_00431da8;
extern "C" unsigned long _DAT_00431dac;
extern "C" unsigned long _DAT_00431db0;
extern "C" unsigned long _DAT_00431f0c;
extern "C" unsigned long _DAT_00431f10;
extern "C" unsigned long _DAT_00431f14;
extern "C" unsigned long _DAT_00431f18;
extern "C" unsigned long _DAT_00431f1c;
extern "C" unsigned long _DAT_00432164;
extern "C" unsigned long _DAT_00432168;
extern "C" unsigned long _DAT_0043216c;
extern "C" unsigned long _DAT_00432170;
extern "C" unsigned long _DAT_00432174;
extern "C" unsigned long _DAT_00432178;
extern "C" unsigned long _DAT_0043217c;
extern "C" unsigned long _DAT_00432180;
extern "C" unsigned long _DAT_004324d0;
extern "C" unsigned long _DAT_004324d4;
extern "C" unsigned long _DAT_004324d8;
extern "C" unsigned long _DAT_004324dc;
extern "C" unsigned long _DAT_004324e0;
extern "C" unsigned long _DAT_004324e4;
extern "C" unsigned long _DAT_004324e8;
extern "C" unsigned long _DAT_004324ec;
extern "C" unsigned long _DAT_004324f0;
extern "C" unsigned long _DAT_004324f4;
extern "C" unsigned long _DAT_004324f8;
extern "C" unsigned long _DAT_004324fc;
extern "C" unsigned long _DAT_00432720;
extern "C" unsigned long _DAT_00432724;
extern "C" unsigned long _DAT_00432728;
extern "C" unsigned long _DAT_0043272c;
extern "C" unsigned long _DAT_00432730;
extern "C" unsigned long _DAT_00432734;
extern "C" unsigned long _DAT_00432738;
extern "C" unsigned long _DAT_0043273c;
extern "C" unsigned long _DAT_00432740;
extern "C" unsigned long _DAT_00432744;
extern "C" unsigned long _DAT_004327f0;
extern "C" unsigned long _DAT_004327f4;
extern "C" unsigned long _DAT_00432964;
extern "C" unsigned long _DAT_00432968;
extern "C" unsigned long _DAT_0043296c;
extern "C" unsigned long _DAT_00432970;
extern "C" unsigned long _DAT_00432974;
extern "C" unsigned long _DAT_00432cf0;
extern "C" unsigned long _DAT_00432cf4;
extern "C" unsigned long _DAT_00432cf8;
extern "C" unsigned long _DAT_00432cfc;
extern "C" unsigned long _DAT_00432d00;
extern "C" unsigned long _DAT_00432d04;
extern "C" unsigned long _DAT_00432d08;
extern "C" unsigned long _DAT_00432d0c;
extern "C" unsigned long _DAT_00432d10;
extern "C" unsigned long _DAT_00432d14;
extern "C" unsigned long _DAT_00432d18;
extern "C" unsigned long _DAT_00432d1c;
extern "C" unsigned long _DAT_00432d20;
extern "C" unsigned long _DAT_00432e48;
extern "C" unsigned long _DAT_00432e4c;
extern "C" unsigned long _DAT_00432e50;
extern "C" unsigned long _DAT_00432e54;
extern "C" unsigned long _DAT_00432e58;
extern "C" unsigned long _DAT_00433088;
extern "C" unsigned long _DAT_0043308c;
extern "C" unsigned long _DAT_00433090;
extern "C" unsigned long _DAT_00433094;
extern "C" unsigned long _DAT_00433098;
extern "C" unsigned long _DAT_0043309c;
extern "C" unsigned long _DAT_004330a0;
extern "C" unsigned long _DAT_004330a4;
extern "C" unsigned long _DAT_00433168;
extern "C" unsigned long _DAT_0043316c;
extern "C" unsigned long _DAT_0043325c;
extern "C" unsigned long _DAT_00433260;
extern "C" unsigned long _DAT_00433264;
extern "C" unsigned long _DAT_00433268;
extern "C" unsigned long _DAT_0043326c;
extern "C" unsigned long _DAT_004332a8;
extern "C" unsigned long _DAT_004332ac;
extern "C" unsigned long _DAT_004332b0;
extern "C" unsigned long _DAT_00433424;
extern "C" unsigned long _DAT_00433428;
extern "C" unsigned long _DAT_0043342c;
extern "C" unsigned long _DAT_00433430;
extern "C" unsigned long _DAT_00433434;
extern "C" unsigned long _DAT_00433438;
extern "C" unsigned long _DAT_00433510;
extern "C" unsigned long _DAT_00433514;
extern "C" unsigned long _DAT_00433614;
extern "C" unsigned long _DAT_00433618;
extern "C" unsigned long _DAT_0043361c;
extern "C" unsigned long _DAT_00433810;
extern "C" unsigned long _DAT_00433814;
extern "C" unsigned long _DAT_00433818;
extern "C" unsigned long _DAT_0043381c;
extern "C" unsigned long _DAT_00433820;
extern "C" unsigned long _DAT_00433824;
extern "C" unsigned long _DAT_00433828;
extern "C" unsigned long _DAT_0043382c;
extern "C" unsigned long _DAT_00433aa4;
extern "C" unsigned long _DAT_00433aa8;
extern "C" unsigned long _DAT_00433aac;
extern "C" unsigned long _DAT_00433ab0;
extern "C" unsigned long _DAT_00433ab4;
extern "C" unsigned long _DAT_00433ab8;
extern "C" unsigned long _DAT_00433abc;
extern "C" unsigned long _DAT_00433ac0;
extern "C" unsigned long _DAT_00433ac4;
extern "C" unsigned long _DAT_00433ac8;
extern "C" unsigned long _DAT_00433acc;
extern "C" unsigned long _DAT_00433da0;
extern "C" unsigned long _DAT_00433da4;
extern "C" unsigned long _DAT_00433da8;
extern "C" unsigned long _DAT_00433dac;
extern "C" unsigned long _DAT_00433db0;
extern "C" unsigned long _DAT_00433db4;
extern "C" unsigned long _DAT_00433db8;
extern "C" unsigned long _DAT_00433dbc;
extern "C" unsigned long _DAT_00433dc0;
extern "C" unsigned long _DAT_00433dc4;
extern "C" unsigned long _DAT_00433dc8;
extern "C" unsigned long _DAT_00433dcc;
extern "C" unsigned long _DAT_00433eac;
extern "C" unsigned long _DAT_00433eb0;
extern "C" unsigned long _DAT_00434028;
extern "C" unsigned long _DAT_0043402c;
extern "C" unsigned long _DAT_00434030;
extern "C" unsigned long _DAT_004343ac;
extern "C" unsigned long _DAT_004343b0;
extern "C" unsigned long _DAT_004343b4;
extern "C" unsigned long _DAT_004343b8;
extern "C" unsigned long _DAT_004343bc;
extern "C" unsigned long _DAT_004343c0;
extern "C" unsigned long _DAT_004343c4;
extern "C" unsigned long _DAT_004343c8;
extern "C" unsigned long _DAT_004343cc;
extern "C" unsigned long _DAT_004343d0;
extern "C" unsigned long _DAT_004343d4;
extern "C" unsigned long _DAT_004343d8;
extern "C" unsigned long _DAT_004343dc;
extern "C" unsigned long _DAT_004343e0;
extern "C" unsigned long _DAT_004343e4;
extern "C" unsigned long _DAT_004343e8;
extern "C" unsigned long _DAT_004343ec;
extern "C" unsigned long _DAT_004343f0;
extern "C" unsigned long _DAT_004343f4;
extern "C" unsigned long _DAT_004343f8;
extern "C" unsigned long _DAT_004343fc;
extern "C" unsigned long _DAT_00434400;
extern "C" unsigned long _DAT_00434404;
extern "C" unsigned long _DAT_004345e8;
extern "C" unsigned long _DAT_004345ec;
extern "C" unsigned long _DAT_004345f0;
extern "C" unsigned long _DAT_004345f4;
extern "C" unsigned long _DAT_004345f8;
extern "C" unsigned long _DAT_004345fc;
extern "C" unsigned long _DAT_00434600;
extern "C" unsigned long _DAT_00434604;
extern "C" unsigned long _DAT_00434608;
extern "C" unsigned long _DAT_0043460c;
extern "C" unsigned long _DAT_00434610;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0042fae4;
extern "C" unsigned long g_0042fae8;
extern "C" unsigned long g_0042fbb0;
extern "C" unsigned long g_0042fbb4;
extern "C" unsigned long g_0042fc64;
extern "C" unsigned long g_0042fc68;
extern "C" unsigned long g_0042ff7c;
extern "C" unsigned long g_0042ff80;
extern "C" unsigned long g_0042ff84;
extern "C" unsigned long g_0042ff88;
extern "C" unsigned long g_0042ff8c;
extern "C" unsigned long g_0042ff90;
extern "C" unsigned long g_0042ff94;
extern "C" unsigned long g_0042ff98;
extern "C" unsigned long g_0042ff9c;
extern "C" unsigned long g_0042ffa0;
extern "C" unsigned long g_0042ffa4;
extern "C" unsigned long g_0043004c;
extern "C" unsigned long g_00430050;
extern "C" unsigned long g_00430054;
extern "C" unsigned long g_00430058;
extern "C" unsigned long g_0043005c;
extern "C" unsigned long g_00430338;
extern "C" unsigned long g_0043033c;
extern "C" unsigned long g_00430340;
extern "C" unsigned long g_00430344;
extern "C" unsigned long g_00430348;
extern "C" unsigned long g_0043034c;
extern "C" unsigned long g_00430350;
extern "C" unsigned long g_00430354;
extern "C" unsigned long g_00430358;
extern "C" unsigned long g_0043035c;
extern "C" unsigned long g_00430360;
extern "C" unsigned long g_00430364;
extern "C" unsigned long g_00430368;
extern "C" unsigned long g_0043036c;
extern "C" unsigned long g_00430664;
extern "C" unsigned long g_00430668;
extern "C" unsigned long g_0043066c;
extern "C" unsigned long g_00430670;
extern "C" unsigned long g_00430674;
extern "C" unsigned long g_00430678;
extern "C" unsigned long g_0043067c;
extern "C" unsigned long g_00430680;
extern "C" unsigned long g_00430684;
extern "C" unsigned long g_00430688;
extern "C" unsigned long g_0043068c;
extern "C" unsigned long g_00430690;
extern "C" unsigned long g_00430694;
extern "C" unsigned long g_00430698;
extern "C" unsigned long g_0043069c;
extern "C" unsigned long g_004308b0;
extern "C" unsigned long g_004308b4;
extern "C" unsigned long g_004308b8;
extern "C" unsigned long g_004308bc;
extern "C" unsigned long g_004308c0;
extern "C" unsigned long g_004308c4;
extern "C" unsigned long g_004308c8;
extern "C" unsigned long g_004308cc;
extern "C" unsigned long g_004308d0;
extern "C" unsigned long g_004308d4;
extern "C" unsigned long g_004308d8;
extern "C" unsigned long g_004309b8;
extern "C" unsigned long g_004309bc;
extern "C" unsigned long g_004309c0;
extern "C" unsigned long g_004309c4;
extern "C" unsigned long g_004309c8;
extern "C" unsigned long g_004309cc;
extern "C" unsigned long g_004309d0;
extern "C" unsigned long g_00430a60;
extern "C" unsigned long g_00430a64;
extern "C" unsigned long g_00430a68;
extern "C" unsigned long g_00430a6c;
extern "C" unsigned long g_00430a70;
extern "C" unsigned long g_00430af8;
extern "C" unsigned long g_00430afc;
extern "C" unsigned long g_00430b00;
extern "C" unsigned long g_00430b04;
extern "C" unsigned long g_00430b08;
extern "C" unsigned long g_00430d08;
extern "C" unsigned long g_00430d0c;
extern "C" unsigned long g_00430d10;
extern "C" unsigned long g_00430d14;
extern "C" unsigned long g_00430d18;
extern "C" unsigned long g_00430d1c;
extern "C" unsigned long g_00430d20;
extern "C" unsigned long g_00430d24;
extern "C" unsigned long g_00430d28;
extern "C" unsigned long g_00430d2c;
extern "C" unsigned long g_00430d30;
extern "C" unsigned long g_00430e64;
extern "C" unsigned long g_00430e68;
extern "C" unsigned long g_00430e6c;
extern "C" unsigned long g_00430e70;
extern "C" unsigned long g_00430e74;
extern "C" unsigned long g_00430e78;
extern "C" unsigned long g_00430e7c;
extern "C" unsigned long g_00430e80;
extern "C" unsigned long g_00430e84;
extern "C" unsigned long g_00430f60;
extern "C" unsigned long g_00430f64;
extern "C" unsigned long g_00430f68;
extern "C" unsigned long g_00430f6c;
extern "C" unsigned long g_00430f70;
extern "C" unsigned long g_00430f74;
extern "C" unsigned long g_00430f78;
extern "C" unsigned long g_00430f7c;
extern "C" unsigned long g_00430fe0;
extern "C" unsigned long g_00430fe4;
extern "C" unsigned long g_00430fe8;
extern "C" unsigned long g_00430fec;
extern "C" unsigned long g_00431008;
extern "C" unsigned long g_00431124;
extern "C" unsigned long g_00431128;
extern "C" unsigned long g_0043112c;
extern "C" unsigned long g_00431130;
extern "C" unsigned long g_00431134;
extern "C" unsigned long g_00431138;
extern "C" unsigned long g_0043113c;
extern "C" unsigned long g_00431140;
extern "C" unsigned long g_004311bc;
extern "C" unsigned long g_004311c0;
extern "C" unsigned long g_004311c4;
extern "C" unsigned long g_004312b4;
extern "C" unsigned long g_004312b8;
extern "C" unsigned long g_004312bc;
extern "C" unsigned long g_004312c0;
extern "C" unsigned long g_00431370;
extern "C" unsigned long g_00431374;
extern "C" unsigned long g_00431378;
extern "C" unsigned long g_00431428;
extern "C" unsigned long g_0043142c;
extern "C" unsigned long g_00431430;
extern "C" unsigned long g_004314f8;
extern "C" unsigned long g_004314fc;
extern "C" unsigned long g_004315a4;
extern "C" unsigned long g_004315a8;
extern "C" unsigned long g_004315ac;
extern "C" unsigned long g_00431630;
extern "C" unsigned long g_00431634;
extern "C" unsigned long g_00431684;
extern "C" unsigned long g_00431744;
extern "C" unsigned long g_00431748;
extern "C" unsigned long g_0043174c;
extern "C" unsigned long g_00431750;
extern "C" unsigned long g_004319a4;
extern "C" unsigned long g_004319a8;
extern "C" unsigned long g_004319ac;
extern "C" unsigned long g_004319b0;
extern "C" unsigned long g_004319b4;
extern "C" unsigned long g_004319b8;
extern "C" unsigned long g_004319bc;
extern "C" unsigned long g_004319c0;
extern "C" unsigned long g_00431b10;
extern "C" unsigned long g_00431b14;
extern "C" unsigned long g_00431b18;
extern "C" unsigned long g_00431b1c;
extern "C" unsigned long g_00431b20;
extern "C" unsigned long g_00431b24;
extern "C" unsigned long g_00431bd0;
extern "C" unsigned long g_00431bd4;
extern "C" unsigned long g_00431cd4;
extern "C" unsigned long g_00431cd8;
extern "C" unsigned long g_00431cdc;
extern "C" unsigned long g_00431ce0;
extern "C" unsigned long g_00431da8;
extern "C" unsigned long g_00431dac;
extern "C" unsigned long g_00431db0;
extern "C" unsigned long g_00431f0c;
extern "C" unsigned long g_00431f10;
extern "C" unsigned long g_00431f14;
extern "C" unsigned long g_00431f18;
extern "C" unsigned long g_00431f1c;
extern "C" unsigned long g_00432164;
extern "C" unsigned long g_00432168;
extern "C" unsigned long g_0043216c;
extern "C" unsigned long g_00432170;
extern "C" unsigned long g_00432174;
extern "C" unsigned long g_00432178;
extern "C" unsigned long g_0043217c;
extern "C" unsigned long g_00432180;
extern "C" unsigned long g_004324d0;
extern "C" unsigned long g_004324d4;
extern "C" unsigned long g_004324d8;
extern "C" unsigned long g_004324dc;
extern "C" unsigned long g_004324e0;
extern "C" unsigned long g_004324e4;
extern "C" unsigned long g_004324e8;
extern "C" unsigned long g_004324ec;
extern "C" unsigned long g_004324f0;
extern "C" unsigned long g_004324f4;
extern "C" unsigned long g_004324f8;
extern "C" unsigned long g_004324fc;
extern "C" unsigned long g_00432720;
extern "C" unsigned long g_00432724;
extern "C" unsigned long g_00432728;
extern "C" unsigned long g_0043272c;
extern "C" unsigned long g_00432730;
extern "C" unsigned long g_00432734;
extern "C" unsigned long g_00432738;
extern "C" unsigned long g_0043273c;
extern "C" unsigned long g_00432740;
extern "C" unsigned long g_00432744;
extern "C" unsigned long g_004327f0;
extern "C" unsigned long g_004327f4;
extern "C" unsigned long g_00432964;
extern "C" unsigned long g_00432968;
extern "C" unsigned long g_0043296c;
extern "C" unsigned long g_00432970;
extern "C" unsigned long g_00432974;
extern "C" unsigned long g_00432cf0;
extern "C" unsigned long g_00432cf4;
extern "C" unsigned long g_00432cf8;
extern "C" unsigned long g_00432cfc;
extern "C" unsigned long g_00432d00;
extern "C" unsigned long g_00432d04;
extern "C" unsigned long g_00432d08;
extern "C" unsigned long g_00432d0c;
extern "C" unsigned long g_00432d10;
extern "C" unsigned long g_00432d14;
extern "C" unsigned long g_00432d18;
extern "C" unsigned long g_00432d1c;
extern "C" unsigned long g_00432d20;
extern "C" unsigned long g_00432e48;
extern "C" unsigned long g_00432e4c;
extern "C" unsigned long g_00432e50;
extern "C" unsigned long g_00432e54;
extern "C" unsigned long g_00432e58;
extern "C" unsigned long g_00433088;
extern "C" unsigned long g_0043308c;
extern "C" unsigned long g_00433090;
extern "C" unsigned long g_00433094;
extern "C" unsigned long g_00433098;
extern "C" unsigned long g_0043309c;
extern "C" unsigned long g_004330a0;
extern "C" unsigned long g_004330a4;
extern "C" unsigned long g_00433168;
extern "C" unsigned long g_0043316c;
extern "C" unsigned long g_0043325c;
extern "C" unsigned long g_00433260;
extern "C" unsigned long g_00433264;
extern "C" unsigned long g_00433268;
extern "C" unsigned long g_0043326c;
extern "C" unsigned long g_004332a8;
extern "C" unsigned long g_004332ac;
extern "C" unsigned long g_004332b0;
extern "C" unsigned long g_00433424;
extern "C" unsigned long g_00433428;
extern "C" unsigned long g_0043342c;
extern "C" unsigned long g_00433430;
extern "C" unsigned long g_00433434;
extern "C" unsigned long g_00433438;
extern "C" unsigned long g_00433510;
extern "C" unsigned long g_00433514;
extern "C" unsigned long g_00433614;
extern "C" unsigned long g_00433618;
extern "C" unsigned long g_0043361c;
extern "C" unsigned long g_00433810;
extern "C" unsigned long g_00433814;
extern "C" unsigned long g_00433818;
extern "C" unsigned long g_0043381c;
extern "C" unsigned long g_00433820;
extern "C" unsigned long g_00433824;
extern "C" unsigned long g_00433828;
extern "C" unsigned long g_0043382c;
extern "C" unsigned long g_00433aa4;
extern "C" unsigned long g_00433aa8;
extern "C" unsigned long g_00433aac;
extern "C" unsigned long g_00433ab0;
extern "C" unsigned long g_00433ab4;
extern "C" unsigned long g_00433ab8;
extern "C" unsigned long g_00433abc;
extern "C" unsigned long g_00433ac0;
extern "C" unsigned long g_00433ac4;
extern "C" unsigned long g_00433ac8;
extern "C" unsigned long g_00433acc;
extern "C" unsigned long g_00433da0;
extern "C" unsigned long g_00433da4;
extern "C" unsigned long g_00433da8;
extern "C" unsigned long g_00433dac;
extern "C" unsigned long g_00433db0;
extern "C" unsigned long g_00433db4;
extern "C" unsigned long g_00433db8;
extern "C" unsigned long g_00433dbc;
extern "C" unsigned long g_00433dc0;
extern "C" unsigned long g_00433dc4;
extern "C" unsigned long g_00433dc8;
extern "C" unsigned long g_00433dcc;
extern "C" unsigned long g_00433eac;
extern "C" unsigned long g_00433eb0;
extern "C" unsigned long g_00434028;
extern "C" unsigned long g_0043402c;
extern "C" unsigned long g_00434030;
extern "C" unsigned long g_004343ac;
extern "C" unsigned long g_004343b0;
extern "C" unsigned long g_004343b4;
extern "C" unsigned long g_004343b8;
extern "C" unsigned long g_004343bc;
extern "C" unsigned long g_004343c0;
extern "C" unsigned long g_004343c4;
extern "C" unsigned long g_004343c8;
extern "C" unsigned long g_004343cc;
extern "C" unsigned long g_004343d0;
extern "C" unsigned long g_004343d4;
extern "C" unsigned long g_004343d8;
extern "C" unsigned long g_004343dc;
extern "C" unsigned long g_004343e0;
extern "C" unsigned long g_004343e4;
extern "C" unsigned long g_004343e8;
extern "C" unsigned long g_004343ec;
extern "C" unsigned long g_004343f0;
extern "C" unsigned long g_004343f4;
extern "C" unsigned long g_004343f8;
extern "C" unsigned long g_004343fc;
extern "C" unsigned long g_00434400;
extern "C" unsigned long g_00434404;
extern "C" unsigned long g_004345e8;
extern "C" unsigned long g_004345ec;
extern "C" unsigned long g_004345f0;
extern "C" unsigned long g_004345f4;
extern "C" unsigned long g_004345f8;
extern "C" unsigned long g_004345fc;
extern "C" unsigned long g_00434600;
extern "C" unsigned long g_00434604;
extern "C" unsigned long g_00434608;
extern "C" unsigned long g_0043460c;
extern "C" unsigned long g_00434610;
bool BluetoothHelper::getCltSelCmp() const
{
  return *(undefined1 *)(((int)this) + 0x14);
}

void BluetoothHelper::setCltSelCmp(bool p1)
{
  *(undefined1 *)(((int)this) + 0x14) = p1;
  return;
}

bool BluetoothHelper::getHostSelCmp() const
{
  return *(undefined1 *)(((int)this) + 0x15);
}

void BluetoothHelper::setHostSelCmp(bool p1)
{
  *(undefined1 *)(((int)this) + 0x15) = p1;
  return;
}

int BluetoothHelper::getWaitTime() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BluetoothHelper::setWaitTime(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int BluetoothHelper::getLife() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BluetoothHelper::setLife(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BluetoothHelper::getCrit() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BluetoothHelper::setCrit(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BluetoothHelper::getAttack() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BluetoothHelper::setAttack(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int BluetoothHelper::getDefence() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BluetoothHelper::setDefence(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

bool BluetoothHelper::getClientStart() const
{
  return *(undefined1 *)(((int)this) + 0x2c);
}

void BluetoothHelper::setClientStart(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2c) = p1;
  return;
}

bool BluetoothHelper::getBlueHostLoadComplete() const
{
  return *(undefined1 *)(((int)this) + 0x2d);
}

void BluetoothHelper::setBlueHostLoadComplete(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2d) = p1;
  return;
}

int BluetoothHelper::getBlueMissionType() const
{
  return *(undefined4 *)(((int)this) + 0x4c);
}

void BluetoothHelper::setBlueMissionType(int p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = p1;
  return;
}

bool BluetoothHelper::getISRecord() const
{
  return *(undefined1 *)(((int)this) + 0x50);
}

void BluetoothHelper::setISRecord(bool p1)
{
  *(undefined1 *)(((int)this) + 0x50) = p1;
  return;
}

bool BluetoothHelper::getISPause() const
{
  return *(undefined1 *)(((int)this) + 0x51);
}

void BluetoothHelper::setISPause(bool p1)
{
  *(undefined1 *)(((int)this) + 0x51) = p1;
  return;
}

bool BluetoothHelper::getISVideo() const
{
  return *(undefined1 *)(((int)this) + 0x52);
}

void BluetoothHelper::setISVideo(bool p1)
{
  *(undefined1 *)(((int)this) + 0x52) = p1;
  return;
}

bool BluetoothHelper::getISPKOnlineStart() const
{
  return *(undefined1 *)(((int)this) + 0x53);
}

void BluetoothHelper::setISPKOnlineStart(bool p1)
{
  *(undefined1 *)(((int)this) + 0x53) = p1;
  return;
}

bool BluetoothHelper::getISOnline() const
{
  return *(undefined1 *)(((int)this) + 0x54);
}

void BluetoothHelper::setISOnline(bool p1)
{
  *(undefined1 *)(((int)this) + 0x54) = p1;
  return;
}


void BluetoothHelper::setStopGame(bool p1)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = ((BLMission *)this)->currentMission();
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMission *)this)->currentMission();
    (**(code **)(*piVar2 + 0x1fc))(piVar2,p1);
  }
  return;
}



void BluetoothHelper::resetRecord()
{
  *(undefined4 *)(((int)this) + 0x58) = 0;
  *(undefined4 *)(((int)this) + 0x5c) = 0;
  *(undefined4 *)(((int)this) + 0x68) = 0;
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 100))->removeAllObjects();
  return;
}

void BluetoothHelper::bluetoothLink()
{
  *(undefined1 *)(((int)this) + 0x2e) = 0;
  ((PlatformHelp *)this)->bluetoothLink();
  return;
}

void BluetoothHelper::bluetoothHost()
{
  *(undefined1 *)(((int)this) + 0x2e) = 1;
  ((PlatformHelp *)this)->bluetoothHost();
  return;
}

void BluetoothHelper::bluetoothDisconnect()
{
  ((PlatformHelp *)this)->bluetoothDisconnect();
  return;
}

undefined1 BluetoothHelper::isHost()
{
  return *(undefined1 *)(((int)this) + 0x2e);
}

undefined1 BluetoothHelper::isBlueFight()
{
  return *(undefined1 *)(((int)this) + 0x2f);
}

void BluetoothHelper::setIsHost(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2e) = p1;
  return;
}

void BluetoothHelper::setIsBlueFight(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2f) = p1;
  return;
}
















void BluetoothHelper::postClientSwitchHero(cocos2d::CCDictionary* p1)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((BLMission *)this)->currentMission();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_CLIENT_SWITCH_HERO"));
  }
  return;
}

























BluetoothHelper::~BluetoothHelper()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  if (*(int *)((int)this + 4*(0x19)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x19)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BluetoothHelper"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x18);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x10)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xd)->~vector();
  func_0079e2bc(((int)this) + 0xc);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BluetoothHelper::BluetoothHelper()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BluetoothHelper::share()
{
  undefined4 uVar1;
  
  if (*(int *)(((intptr_t)"CC: (GNU) 4.4.3")) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x70))));
    0 /* ctorZero */;
    *(undefined4 *)(((intptr_t)"CC: (GNU) 4.4.3")) = uVar1;
    ((BluetoothHelper *)uVar1)->init();
  }
  return *(undefined4 *)(((intptr_t)"CC: (GNU) 4.4.3"));
}






void BluetoothHelper::checkViceReady()
{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x18))();
  if (iVar1 != 0) {
    BluetoothHelper::hostGame();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (53) =====
bool BluetoothHelper::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * BluetoothHelper::clientGetPlayerData()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar8 = (undefined4)(0);
  piVar2 = (int *)(**(code **)(*(int *)(piVar1) + (0x40)))();
  piVar1 = (int *)0x0;
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  while( true ) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    (**(code **)(*(int *)(piVar2) + (0x68)))();
    uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar4 <= uVar8) break;
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar5)->objectAtIndex((unsigned int)uVar8));
    if ((iVar6 != 0) &&
       (piVar2 = (int *)func_0079e55c(iVar6,*(undefined4 *)(g_0042fbb0 + 0x42fb62),
                                        *(undefined4 *)(g_0042fbb4 + 0x42fb64),0),
       piVar2 != (int *)0x0)) {
      piVar7 = (int *)(**(code **)(*(int *)(piVar2) + (0x18)))();
      (**(code **)(*(int *)(piVar7) + (0x18)))(auStack_1c,piVar7);
      iVar6 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey((char const *)auStack_1c));
      func_0079e2bc(auStack_1c);
      if (iVar6 != 0) {
        piVar1 = piVar2;
      }
    }
    uVar8 = (undefined4)(uVar8 + 1);
  }
  return (int *)(piVar1);
}

undefined4 BluetoothHelper::getclientGetPlayerData()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar8 = (undefined4)(0);
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x40)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  while( true ) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    (**(code **)(*(int *)(piVar2) + (0x68)))();
    uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar4 <= uVar8) break;
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar5)->objectAtIndex((unsigned int)uVar8));
    if ((iVar6 != 0) &&
       (piVar2 = (int *)func_0079e55c(iVar6,*(undefined4 *)(g_0042fc64 + 0x42fc12),
                                        *(undefined4 *)(g_0042fc68 + 0x42fc14),0),
       piVar2 != (int *)0x0)) {
      piVar7 = (int *)(**(code **)(*(int *)(piVar2) + (0x18)))();
      (**(code **)(*(int *)(piVar7) + (0x18)))(auStack_1c,piVar7);
      iVar6 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey((char const *)auStack_1c));
      func_0079e2bc(auStack_1c);
      if (iVar6 != 0) {
        ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar2);
      }
    }
    uVar8 = (undefined4)(uVar8 + 1);
  }
  return uVar1;
}

void BluetoothHelper::postPauseGame(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::postResumeGame(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::postClientstartedGame(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar8 = (undefined4)(intptr_t)(g_0042ff7c);
  (**(code **)(*(int *)(piVar1) + (0x138)))();
  ((cocos2d::CCArray *)this)->removeAllObjects();
  func_0079e45c(auStack_1c,((intptr_t)"STARTG"),auStack_20);
  iVar8 = (undefined4)(intptr_t)(iVar8 + 0x42fd04);
  iStack_2c = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_2c != 0) {
    iStack_2c = func_0079e55c(iStack_2c,*(undefined4 *)(iVar8 + g_0042ff84),
                                *(undefined4 *)(iVar8 + g_0042ff88),0,
                                *(undefined4 *)(iVar8 + g_0042ff84),
                                *(undefined4 *)(iVar8 + g_0042ff88));
  }
  func_0079e2bc(auStack_1c);
  uStack_30 = (undefined4)(0);
  if (iStack_2c != 0) {
    for (; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iStack_2c)->count(), uStack_30 < uVar3);
        uStack_30 = uStack_30 + 1) {
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iStack_2c)->objectAtIndex((unsigned int)uStack_30));
      if (iVar2 != 0) {
        uVar6 = (undefined4)(*(undefined4 *)(iVar8 + g_0042ff84));
        iVar2 = func_0079e55c(iVar2,uVar6,*(undefined4 *)(iVar8 + g_0042ff8c),0,
                                *(undefined4 *)(iVar8 + g_0042ff8c));
        if (iVar2 != 0) {
          func_0079e45c(auStack_1c,((intptr_t)"RID"),auStack_20);
          iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          if (iStack_28 != 0) {
            iStack_28 = (undefined4)(intptr_t)(func_0079e55c(iStack_28,uVar6,*(undefined4 *)(iVar8 + g_0042ff94),0));
          }
          func_0079e2bc(auStack_1c);
          piVar1 = (int *)((ArenaPlayerData *)this)->create();
          pcVar7 = *(code **)(*piVar1 + 0x1c);
          uVar4 = (undefined4)(((cocos2d::CCString *)iStack_28)->getCString());
          func_0079e45c(auStack_1c,uVar4,auStack_20);
          (*pcVar7)(piVar1,auStack_1c);
          func_0079e2bc(auStack_1c);
          func_0079e45c(auStack_1c,g_0042ff98 + 0x42fdf8,auStack_20);
          iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          if (iStack_28 != 0) {
            iStack_28 = (undefined4)(intptr_t)(func_0079e55c(iStack_28,uVar6,*(undefined4 *)(iVar8 + g_0042ff94),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar7 = *(code **)(*piVar1 + 0x34);
          ((cocos2d::CCString *)iStack_28)->getCString();
          uVar4 = (undefined4)(func_0079e6c0());
          (*pcVar7)(piVar1,uVar4);
          func_0079e45c(auStack_1c,g_0042ff9c + 0x42fe44,auStack_20);
          iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          if (iStack_28 != 0) {
            iStack_28 = (undefined4)(intptr_t)(func_0079e55c(iStack_28,uVar6,*(undefined4 *)(iVar8 + g_0042ff94),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar7 = *(code **)(*piVar1 + 0x3c);
          ((cocos2d::CCString *)iStack_28)->getCString();
          uVar4 = (undefined4)(func_0079e6c0());
          (*pcVar7)(piVar1,uVar4);
          func_0079e45c(auStack_1c,g_0042ffa0 + 0x42fe90,auStack_20);
          iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          if (iStack_28 != 0) {
            iStack_28 = (undefined4)(intptr_t)(func_0079e55c(iStack_28,uVar6,*(undefined4 *)(iVar8 + g_0042ff94),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar7 = *(code **)(*piVar1 + 0x24);
          ((cocos2d::CCString *)iStack_28)->getCString();
          uVar4 = (undefined4)(func_0079e6c0());
          (*pcVar7)(piVar1,uVar4);
          func_0079e45c(auStack_1c,g_0042ffa4 + 0x42fedc,auStack_20);
          iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar4 = (undefined4)(0);
          if (iVar2 != 0) {
            uVar4 = func_0079e55c(iVar2,uVar6,*(undefined4 *)(iVar8 + g_0042ff94),0,
                                    *(undefined4 *)(iVar8 + g_0042ff94));
          }
          func_0079e2bc(auStack_1c);
          pcVar7 = *(code **)(*piVar1 + 0x2c);
          ((cocos2d::CCString *)uVar4)->getCString();
          uVar6 = (undefined4)(func_0079e6c0());
          (*pcVar7)(piVar1,uVar6);
          piVar5 = (int *)((DataManager *)this)->shareDataManager();
          uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x138)))());
          ((cocos2d::CCArray *)uVar6)->addObject((cocos2d::CCObject*)piVar1);
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x1c))(((int)this),1);
  (**(code **)(*(int *)this + 0x54))(((int)this),1);
  if (*(int *)((int)this + 4*(0x13)) == 1) {
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x58))(((int)this)));
    if (iVar8 == 0) {
      return;
    }
    ((BLMission *)this)->currentMission();
    ((BLMission *)this)->startMission();
  }
  else {
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x58))(((int)this)));
    if (iVar8 == 0) {
      return;
    }
    ((BLMission *)this)->currentMission();
    ((BLMission *)this)->startOnlineArenaMission();
  }
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUi();
  return;
}

void BluetoothHelper::postEnterMainCity(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::postUserAction(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(&uStack_14,"TAPS",&uStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_00430050 + 0x42fff0),
                            *(undefined4 *)(g_00430054 + 0x42fff2),0);
  }
  func_0079e2bc(&uStack_14);
  ((cocos2d::CCString *)(uVar2))->getCString();
  iVar3 = (undefined4)(intptr_t)(func_0079e6c0());
  piVar4 = (int *)func_0079e2fc(0x18);
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(g_00430058);
  piVar4[5] = iVar3;
  *piVar4 = *(int *)(iVar1 + 0x430022) + 8;
  ((cocos2d::CCObject *)(piVar4))->autorelease();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_BLUETOOTH_GET_ACTION", (cocos2d::CCObject*)piVar4);
  return;
}

void BluetoothHelper::postAddRole(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)func_0079e2fc(0x38);
  iVar5 = (undefined4)(intptr_t)(g_00430338 + 0x430074);
  0 /* ctorZero */;
  piVar6 = piVar1 + 0xd;
  *piVar1 = *(int *)(iVar5 + g_0043033c) + 8;
  piVar1[0xc] = 0;
  *(undefined1 *)piVar6 = 0;
  ((cocos2d::CCObject *)(piVar1))->autorelease();
  func_0079e45c(auStack_1c,"ID",auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCString *)(uVar3))->getCString());
  iVar2 = (undefined4)(intptr_t)(g_0043034c);
  piVar1[5] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4300e2,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430350);
  piVar1[6] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430124,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430354);
  piVar1[7] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430166,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430358);
  piVar1[8] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4301a8,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)(uVar3))->getCString());
  func_0079e824(uVar3,0);
  iVar4 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar2 = (undefined4)(intptr_t)(g_0043035c);
  piVar1[9] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4301f0,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)(uVar3))->getCString());
  func_0079e824(uVar3,0);
  iVar4 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar2 = (undefined4)(intptr_t)(g_00430360);
  piVar1[10] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430238,auStack_20);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430364);
  *(char *)(piVar1 + 0xb) = '\x01' - (iVar4 == 0);
  func_0079e45c(auStack_1c,iVar2 + 0x430280,auStack_20);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = func_0079e55c(iVar4,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)(iVar2))->getCString();
    iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
    piVar1[0xc] = iVar2;
  }
  func_0079e45c(auStack_1c,"PI",auStack_20);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = func_0079e55c(iVar4,*(undefined4 *)(iVar5 + g_00430344),
                            *(undefined4 *)(iVar5 + g_00430348),0,
                            *(undefined4 *)(iVar5 + g_00430344),piVar6,
                            *(undefined4 *)(iVar5 + g_00430348));
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)(iVar2))->getCString();
    iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
    *(bool *)piVar6 = iVar2 != 0;
  }
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)"EVENT_BLUETOOTH_ADDROLE_ACTION", (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postRoleStatus(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)func_0079e2fc(0x38);
  iVar5 = (undefined4)(intptr_t)(g_00430664 + 0x430384);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_00430668) + 8;
  piVar1[6] = 0;
  ((cocos2d::CCObject *)(piVar1))->autorelease();
  puVar6 = auStack_20;
  func_0079e45c(auStack_1c,"ACTNAME",puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    func_0079e45c(auStack_1c,"ACTNAME",puVar6);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
    uVar3 = (undefined4)(0);
    if (iVar2 != 0) {
      uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                              *(undefined4 *)(iVar5 + g_00430678),0);
    }
    func_0079e2bc(auStack_1c);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCString *)(uVar3))->getCString());
    piVar1[6] = iVar2;
  }
  func_0079e45c(auStack_1c,g_0043067c + 0x430410,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCString *)(uVar3))->getCString());
  iVar2 = (undefined4)(intptr_t)(g_00430680);
  piVar1[5] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x43044e,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430684);
  piVar1[7] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430490,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_00430688);
  piVar1[8] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4304d2,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar2 = (undefined4)(intptr_t)(g_0043068c);
  *(char *)(piVar1 + 9) = '\x01' - (iVar4 == 0);
  func_0079e45c(auStack_1c,iVar2 + 0x430518,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)(uVar3))->getCString());
  func_0079e824(uVar3,0);
  iVar4 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar2 = (undefined4)(intptr_t)(g_00430690);
  piVar1[10] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430562,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)(uVar3))->getCString());
  func_0079e824(uVar3,0);
  iVar4 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar2 = (undefined4)(intptr_t)(g_00430694);
  piVar1[0xb] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4305aa,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)(uVar3))->getCString());
  func_0079e824(uVar3,0);
  iVar4 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar2 = (undefined4)(intptr_t)(g_00430698);
  piVar1[0xd] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x4305f2,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678),0,
                            *(undefined4 *)(iVar5 + g_00430674),
                            *(undefined4 *)(iVar5 + g_00430678));
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar3))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  *(bool *)(piVar1 + 0xc) = iVar2 != 0;
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)"EVENT_BLUETOOTH_ROLESTATUS_ACTION", (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postRolePos(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)func_0079e2fc(0x2c);
  iVar5 = (undefined4)(intptr_t)(g_004308b0 + 0x4306b4);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_004308b4) + 8;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  func_0079e45c(auStack_1c,((intptr_t)"UID"),auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_004308bc),
                                *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)iStack_28)->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar4 = (undefined4)(intptr_t)(g_004308c4);
  piVar1[5] = iVar2;
  func_0079e45c(auStack_1c,iVar4 + 0x430720,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_004308bc),
                                *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)iStack_28)->getCString());
  func_0079e824(uVar3,0);
  iVar2 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar4 = (undefined4)(intptr_t)(g_004308c8);
  piVar1[6] = iVar2;
  func_0079e45c(auStack_1c,iVar4 + 0x43076a,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_004308bc),
                                *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)iStack_28)->getCString());
  func_0079e824(uVar3,0);
  iVar2 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar4 = (undefined4)(intptr_t)(g_004308cc);
  piVar1[7] = iVar2;
  func_0079e45c(auStack_1c,iVar4 + 0x4307b4,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_004308bc),
                                *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)iStack_28)->getCString());
  func_0079e824(uVar3,0);
  iVar2 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar4 = (undefined4)(intptr_t)(g_004308d0);
  piVar1[8] = iVar2;
  func_0079e45c(auStack_1c,iVar4 + 0x4307fe,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_004308bc),
                                *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)iStack_28)->getCString());
  func_0079e824(uVar3,0);
  iVar2 = (undefined4)(intptr_t)(func_0079e7e4());
  iVar4 = (undefined4)(intptr_t)(g_004308d4);
  piVar1[9] = iVar2;
  func_0079e45c(auStack_1c,iVar4 + 0x430848,auStack_20);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar4 != 0) {
    uVar3 = func_0079e55c(iVar4,*(undefined4 *)(iVar5 + g_004308bc),
                            *(undefined4 *)(iVar5 + g_004308c0),0);
  }
  func_0079e2bc(auStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)uVar3)->getCString());
  func_0079e824(uVar3,0);
  iVar5 = (undefined4)(intptr_t)(func_0079e7e4());
  piVar1[10] = iVar5;
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_ROLEPOS_ACTION"), (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postRoleFlipX(cocos2d::CCDictionary* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar5 = (undefined4)(intptr_t)(g_004309bc);
  puVar6 = auStack_20;
  func_0079e45c(auStack_1c,"UID",puVar6);
  iVar5 = (undefined4)(intptr_t)(iVar5 + 0x4308fe);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_004309c0),
                            *(undefined4 *)(iVar5 + g_004309c4),0);
  }
  func_0079e2bc(auStack_1c);
  piVar3 = (int *)func_0079e2fc(0x1c);
  0 /* ctorZero */;
  *piVar3 = *(int *)(iVar5 + g_004309c8) + 8;
  ((cocos2d::CCObject *)(piVar3))->autorelease();
  ((cocos2d::CCString *)(uVar2))->getCString();
  iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar1 = (undefined4)(intptr_t)(g_004309cc);
  piVar3[5] = iVar4;
  func_0079e45c(auStack_1c,iVar1 + 0x430952,puVar6);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_004309c0),
                            *(undefined4 *)(iVar5 + g_004309c4),0,
                            *(undefined4 *)(iVar5 + g_004309c0),
                            *(undefined4 *)(iVar5 + g_004309c4));
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar2))->getCString();
  iVar5 = (undefined4)(intptr_t)(func_0079e6c0());
  *(char *)(piVar3 + 6) = '\x01' - (iVar5 == 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_BLUETOOTH_ROLEFLIPX_ACTION", (cocos2d::CCObject*)piVar3);
  return;
}

void BluetoothHelper::postLockWidth(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(&uStack_14,"LW",&uStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_00430a64 + 0x4309fc),
                            *(undefined4 *)(g_00430a68 + 0x4309fe),0);
  }
  func_0079e2bc(&uStack_14);
  uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
  func_0079e824(uVar2,0);
  iVar3 = (undefined4)(intptr_t)(func_0079e7e4());
  piVar4 = (int *)func_0079e2fc(0x18);
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(g_00430a6c);
  piVar4[5] = iVar3;
  *piVar4 = *(int *)(iVar1 + 0x430a34) + 8;
  ((cocos2d::CCObject *)(piVar4))->autorelease();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_BLUETOOTH_LOCKWIDTH_ACTION", (cocos2d::CCObject*)piVar4);
  return;
}

void BluetoothHelper::postGameEffect(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(&uStack_14,"GE",&uStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    uVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_00430afc + 0x430a9c),
                            *(undefined4 *)(g_00430b00 + 0x430a9e),0);
  }
  func_0079e2bc(&uStack_14);
  piVar3 = (int *)func_0079e2fc(0x18);
  0 /* ctorZero */;
  *piVar3 = *(int *)(g_00430b04 + 0x430ac0) + 8;
  ((cocos2d::CCObject *)(piVar3))->autorelease();
  ((cocos2d::CCString *)(uVar2))->getCString();
  iVar1 = (undefined4)(intptr_t)(func_0079e6c0());
  piVar3[5] = iVar1;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_BLUETOOTH_GAMEEFFECT_ACTION", (cocos2d::CCObject*)piVar3);
  return;
}

void BluetoothHelper::postRoleLife(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)func_0079e2fc(0x28);
  iVar5 = (undefined4)(intptr_t)(g_00430d08 + 0x430b20);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_00430d0c) + 8;
  ((cocos2d::CCObject *)(piVar1))->autorelease();
  func_0079e45c(auStack_1c,"UID",auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430d14),
                                *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(iStack_28))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430d1c);
  piVar1[5] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430b8c,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430d14),
                                *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(iStack_28))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430d20);
  piVar1[6] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430bd0,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430d14),
                                *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(iStack_28))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430d24);
  piVar1[7] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430c14,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430d14),
                                *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(iStack_28))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430d28);
  piVar1[8] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430c58,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430d14),
                                *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(iStack_28))->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430d2c);
  *(char *)(piVar1 + 9) = '\x01' - (iVar2 == 0);
  func_0079e45c(auStack_1c,iVar3 + 0x430ca0,auStack_20);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
  uVar4 = (undefined4)(0);
  if (iVar3 != 0) {
    uVar4 = func_0079e55c(iVar3,*(undefined4 *)(iVar5 + g_00430d14),
                            *(undefined4 *)(iVar5 + g_00430d18),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)(uVar4))->getCString();
  iVar5 = (undefined4)(intptr_t)(func_0079e6c0());
  *(bool *)((int)piVar1 + 0x25) = iVar5 != 0;
  uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar4))->postNotification((char const*)"EVENT_BLUETOOTH_ROLELIFE_ACTION", (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postRoleAIMoveTo(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  cocos2d::CCLog((char const*)g_00430e64 + 0x430d40);
  piVar1 = (int *)func_0079e2fc(0x20);
  iVar5 = (undefined4)(intptr_t)(g_00430e68 + 0x430d50);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_00430e6c) + 8;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  func_0079e45c(auStack_1c,((intptr_t)"UID"),auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430e74),
                                *(undefined4 *)(iVar5 + g_00430e78),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)iStack_28)->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00430e7c);
  piVar1[5] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430dbc,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00430e74),
                                *(undefined4 *)(iVar5 + g_00430e78),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)iStack_28)->getCString();
  func_0079e6c0();
  iVar2 = (undefined4)(intptr_t)(func_0079e2ec());
  iVar3 = (undefined4)(intptr_t)(g_00430e80);
  piVar1[6] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x430e04,auStack_20);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  uVar4 = (undefined4)(0);
  if (iVar3 != 0) {
    uVar4 = func_0079e55c(iVar3,*(undefined4 *)(iVar5 + g_00430e74),
                            *(undefined4 *)(iVar5 + g_00430e78),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)uVar4)->getCString();
  func_0079e6c0();
  iVar5 = (undefined4)(intptr_t)(func_0079e2ec());
  piVar1[7] = iVar5;
  uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_ROLEAIMOVE_ACTION"), (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postGameDrop(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  cocos2d::CCLog((char const*)((intptr_t)"10"));
  piVar1 = (int *)func_0079e2fc(0x1c);
  iVar5 = (undefined4)(intptr_t)(g_00430f64 + 0x430ea4);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_00430f68) + 8;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  puVar6 = auStack_20;
  func_0079e45c(auStack_1c,((intptr_t)"UID"),puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430f70),
                            *(undefined4 *)(iVar5 + g_00430f74),0);
  }
  func_0079e2bc(auStack_1c);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCString *)uVar3)->getCString());
  iVar2 = (undefined4)(intptr_t)(g_00430f78);
  piVar1[5] = iVar4;
  func_0079e45c(auStack_1c,iVar2 + 0x430f0c,puVar6);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_00430f70),
                            *(undefined4 *)(iVar5 + g_00430f74),0,
                            *(undefined4 *)(iVar5 + g_00430f70),
                            *(undefined4 *)(iVar5 + g_00430f74));
  }
  func_0079e2bc(auStack_1c);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCString *)uVar3)->getCString());
  piVar1[6] = iVar2;
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_GAMEDROP_ACTION"), (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postSetHero(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  iVar1 = (undefined4)(intptr_t)(((BLMission *)this)->currentMission());
  if (iVar1 != 0) {
    func_0079e45c(&uStack_14,"SH_K",&uStack_18);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = func_0079e55c(iVar2,*(undefined4 *)(g_00430fe4 + 0x430fb0),
                              *(undefined4 *)(g_00430fe8 + 0x430fb2),0);
    }
    func_0079e2bc(&uStack_14);
    if (iVar1 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)"EVENT_BLUETOOTH_SET_HERO", (cocos2d::CCObject*)iVar1);
    }
  }
  return;
}

void BluetoothHelper::postAddRoleAnimate(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)func_0079e2fc(0x20);
  iVar5 = (undefined4)(intptr_t)(g_00431124 + 0x431020);
  0 /* ctorZero */;
  *piVar1 = *(int *)(iVar5 + g_00431128) + 8;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  func_0079e45c(auStack_1c,((intptr_t)"UID"),auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00431130),
                                *(undefined4 *)(iVar5 + g_00431134),0);
  }
  func_0079e2bc(auStack_1c);
  ((cocos2d::CCString *)iStack_28)->getCString();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
  iVar3 = (undefined4)(intptr_t)(g_00431138);
  piVar1[5] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x43108c,auStack_20);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar5 + g_00431130),
                                *(undefined4 *)(iVar5 + g_00431134),0);
  }
  func_0079e2bc(auStack_1c);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCString *)iStack_28)->getCString());
  iVar3 = (undefined4)(intptr_t)(g_0043113c);
  piVar1[6] = iVar2;
  func_0079e45c(auStack_1c,iVar3 + 0x4310cc,auStack_20);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  uVar4 = (undefined4)(0);
  if (iVar3 != 0) {
    uVar4 = func_0079e55c(iVar3,*(undefined4 *)(iVar5 + g_00431130),
                            *(undefined4 *)(iVar5 + g_00431134),0);
  }
  func_0079e2bc(auStack_1c);
  iVar5 = (undefined4)(intptr_t)(((cocos2d::CCString *)uVar4)->getCString());
  piVar1[7] = iVar5;
  uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_ADDANIMATE_ACTION"), (cocos2d::CCObject*)piVar1);
  return;
}

void BluetoothHelper::postShowResult(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  (**(code **)(*(int *)this + 0x1c))(((int)this),0);
  (**(code **)(*(int *)this + 0x24))(((int)this),0);
  func_0079e45c(&uStack_14,"OL_RE",&piStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_004311c0 + 0x431180),
                            *(undefined4 *)(g_004311c4 + 0x431182),0);
  }
  func_0079e2bc(&uStack_14);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)(iVar2))->getCString();
    iVar2 = (undefined4)(intptr_t)(func_0079e6c0());
    if (iVar2 == 1) {
      ((PKOnlineManager *)this)->gameWin();
    }
    else {
      ((PKOnlineManager *)this)->gameFail();
    }
  }
  return;
}

void BluetoothHelper::sendBluetoothData(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::pauseGame()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isHost());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isBlueFight(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00431370 + 0x4312ea,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"PAUSG",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00431378 + 0x431338,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    *(undefined1 *)(((int)this) + 0x51) = 1;
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::resumeGame()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isHost());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isBlueFight(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00431428 + 0x4313a2,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"RSMG",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00431430 + 0x4313f0,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    *(undefined1 *)(((int)this) + 0x51) = 0;
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::enterSelectRole()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  (**(code **)(*(int *)this + 0x1c))(((int)this),0);
  (**(code **)(*(int *)this + 0x24))(((int)this),0);
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentMission();
  func_0079e45c(&uStack_20,uStack_24,auStack_2c);
  uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
  func_0079e45c(auStack_1c,"ESG",auStack_28);
  ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e45c(&uStack_20,g_004314fc + 0x4314a6,auStack_1c);
  ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  func_0079e52c(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
  func_0079e2bc(&uStack_20);
  return;
}

void BluetoothHelper::enterMainCity()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  (**(code **)(*(int *)this + 0x1c))(((int)this),0);
  (**(code **)(*(int *)this + 0x24))(((int)this),0);
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  func_0079e45c(&uStack_20,g_004315a4 + 0x431526,auStack_28);
  uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
  func_0079e45c(auStack_1c,"EMCG",auStack_24);
  ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e45c(&uStack_20,g_004315ac + 0x431560,auStack_1c);
  ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  func_0079e52c(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
  func_0079e2bc(&uStack_20);
  return;
}

void BluetoothHelper::setHero(std::string p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  uVar2 = (undefined4)(cocos2d::CCString::create(p1));
  func_0079e45c(auStack_1c,((intptr_t)"SH_K"),&uStack_20);
  ((cocos2d::CCDictionary *)uVar1)->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e45c(&uStack_20,g_00431634 + 0x4315ee,auStack_1c);
  ((CCJson *)auStack_1c)->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  func_0079e52c(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  BluetoothHelper::sendBluetoothData((char const*)uStack_20);
  func_0079e2bc(&uStack_20);
  return;
}

undefined8 BluetoothHelper::makeViceSendCMPAgain()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  func_0079e45c(&uStack_14,"OL_RE_CMP",&uStack_18);
  ((cocos2d::CCDictionary *)(uVar1))->setObject(0, *(std::string const*)&uStack_14);
  func_0079e2bc(&uStack_14);
  ((CCJson *)(&uStack_14))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,uStack_18);
}

void BluetoothHelper::onBluetoothAction(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if (iVar1 != 0) {
    uVar3 = (undefined4)(0);
    if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
      iVar1 = func_0079e55c(p1,*(undefined4 *)(g_00431744 + 0x4316a6),
                              *(undefined4 *)(g_00431748 + 0x4316a8),0);
      uVar3 = (undefined4)(0);
      if (iVar1 != 0) {
        uVar3 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
      }
    }
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    ConvertToString<int>(&uStack_20, uVar3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"TAPS",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00431750 + 0x4316fe,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::clientstartedGame()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BluetoothHelper *)(((int)this)))->getclientGetPlayerData());
    uVar3 = (undefined4)(cocos2d::CCArray::create());
    for (uVar12 = 0; uVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar12 < uVar4);
        uVar12 = uVar12 + 1) {
      iVar1 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar12));
      piVar5 = (int *)0x0;
      if (iVar1 != 0) {
        piVar5 = (int *)func_0079e55c(iVar1,*(undefined4 *)(g_004319a4 + 0x431796),
                                        *(undefined4 *)(g_004319a8 + 0x431798),0);
      }
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
      uVar6 = (undefined4)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(2));
      uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
      uVar7 = (undefined4)(((BLRoleAttribute *)(uVar7))->getFightAttrValueByType(3));
      uVar8 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
      uVar8 = (undefined4)(((BLRoleAttribute *)(uVar8))->getFightAttrValueByType(0));
      uVar9 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
      uVar9 = (undefined4)(((BLRoleAttribute *)(uVar9))->getFightAttrValueByType(1));
      uVar10 = (undefined4)(cocos2d::CCDictionary::create());
      piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x18)))(piVar5);
      (**(code **)(*(int *)(piVar5) + (0x18)))(&uStack_24,piVar5);
      func_0079e45c(auStack_20,uStack_24,auStack_2c);
      uVar11 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
      func_0079e45c(auStack_1c,"RID",auStack_28);
      ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar11, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      func_0079e2bc(&uStack_24);
      ConvertToString<int>(auStack_20, uVar6, 0);
      uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
      func_0079e45c(auStack_1c,g_004319b0 + 0x431856,&uStack_24);
      ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      ConvertToString<int>(auStack_20, uVar7, 0);
      uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
      func_0079e45c(auStack_1c,g_004319b4 + 0x431890,&uStack_24);
      ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      ConvertToString<int>(auStack_20, uVar8, 0);
      uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
      func_0079e45c(auStack_1c,g_004319b8 + 0x4318c8,&uStack_24);
      ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      ConvertToString<int>(auStack_20, uVar9, 0);
      uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
      func_0079e45c(auStack_1c,g_004319bc + 0x431902,&uStack_24);
      ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      ((cocos2d::CCArray *)(uVar3))->addObject((cocos2d::CCObject*)uVar10);
    }
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(auStack_1c,"STARTG",auStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)auStack_1c[0]);
    func_0079e2bc(auStack_1c);
  }
  return;
}

void BluetoothHelper::addRoleAnimate(int p1, std::string * p2, std::string p3)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00431b10 + 0x4319f4,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"ARA",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"UID",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)p2));
    func_0079e45c(auStack_1c,"ActionName",&uStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    uVar3 = (undefined4)(cocos2d::CCString::create(p3));
    func_0079e45c(auStack_1c,"BeAttackName",&uStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e45c(&uStack_20,g_00431b24 + 0x431ac8,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::setGameEffect(int p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"GE",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00431bd4 + 0x431b9c,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::setGameDrop(std::string p1, std::string * p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    ConvertToString<int>(&uStack_20, 1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"GD",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    uVar3 = (undefined4)(cocos2d::CCString::create(p1));
    func_0079e45c(auStack_1c,"UID",&uStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)p2));
    func_0079e45c(auStack_1c,"UNUM",&uStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e45c(&uStack_20,g_00431ce0 + 0x431c98,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::showOnlineResult(bool p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(g_00431da8);
  (**(code **)(*(int *)this + 0x1c))(((int)this),0);
  (**(code **)(*(int *)this + 0x24))(((int)this),0);
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  ConvertToString<int>(&uStack_20, p1 ^ 1, 0);
  uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
  func_0079e45c(auStack_1c,"OL_RE",auStack_24);
  ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e45c(&uStack_20,g_00431db0 + 0x431d54,auStack_1c);
  ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  func_0079e52c(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
  if (p1 == 0) {
    ((PKOnlineManager *)this)->gameFail();
  }
  else {
    ((PKOnlineManager *)this)->gameWin();
  }
  func_0079e2bc(&uStack_20);
  return;
}

void BluetoothHelper::arbitrationOnLineResult(float p1)
{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  
  iVar10 = (undefined4)(intptr_t)(g_00431f0c);
  ((PKOnlineManager *)this)->checkConnection(0x3f800000);
  iVar10 = (undefined4)(intptr_t)(iVar10 + 0x431dcc);
  iVar2 = (undefined4)(intptr_t)(((BluetoothHelper *)(((int)this)))->isHost());
  if (iVar2 != 0) {
    piVar3 = (int *)((BLMission *)this)->currentMission();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x208)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))());
    iStack_38 = 1;
    iStack_34 = 1;
    for (uVar11 = 0; uVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->count(), uVar11 < uVar5);
        uVar11 = uVar11 + 1) {
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)uVar11));
      if (iVar2 == 0) goto LAB_00431efe;
      iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar10 + g_00431f10),
                              *(undefined4 *)(iVar10 + g_00431f14),0);
      iVar6 = (undefined4)(intptr_t)(((BLRoleAttribute *)(iVar2 + 0x1c4))->getLife());
      iStack_34 = (undefined4)(intptr_t)(iStack_34 + iVar6);
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(iVar2 + 0x1c4) + 0x38))(iVar2 + 0x1c4));
      iStack_38 = (undefined4)(intptr_t)(iStack_38 + iVar2);
    }
    cocos2d::CCLog((char const*)"主机血量：%d:%d", iStack_34, iStack_38);
    iVar2 = 1;
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x38)))(piVar3));
    iVar6 = 1;
    for (uStack_30 = 0; uVar11 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->count(), uStack_30 < uVar11);
        uStack_30 = uStack_30 + 1) {
      iVar7 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)uStack_30));
      if (iVar7 == 0) {
LAB_00431efe:
        ((BLRoleAttribute *)(0x1c4))->getLife();
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x431f06);
        (*pcVar1)();
      }
      iVar7 = func_0079e55c(iVar7,*(undefined4 *)(iVar10 + g_00431f10),
                              *(undefined4 *)(iVar10 + g_00431f14),0);
      iVar8 = (undefined4)(intptr_t)(((BLRoleAttribute *)(iVar7 + 0x1c4))->getLife());
      iVar6 = (undefined4)(intptr_t)(iVar6 + iVar8);
      iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(iVar7 + 0x1c4) + 0x38))(iVar7 + 0x1c4));
      iVar2 = (undefined4)(intptr_t)(iVar2 + iVar7);
    }
    cocos2d::CCLog((char const*)"副机血量：%d:%d", iVar6, iVar2);
    iVar10 = (undefined4)(intptr_t)(func_0079e51c(p1,0));
    if (iVar10 == 0) {
      if (1 < iStack_34) {
        return;
      }
      bVar9 = (undefined4)(intptr_t)(false);
      if (iStack_38 < 2) {
        return;
      }
    }
    else {
      bVar9 = (undefined4)(intptr_t)(iVar2 * iStack_34 - iVar6 * iStack_38 != 0 && iVar6 * iStack_38 <= iVar2 * iStack_34);
    }
    ((BluetoothHelper *)(((int)this)))->showOnlineResult(bVar9);
  }
  return;
}

void BluetoothHelper::setHeroRoleAttr()
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  uVar1 = (undefined4)(BluetoothHelper::getclientGetPlayerData());
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  for (uVar12 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->count(), uVar12 < uVar3); uVar12 = uVar12 + 1)
  {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar12));
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00432164 + 0x431f56),
                                      *(undefined4 *)(g_00432168 + 0x431f58),0);
    }
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
    uVar6 = (undefined4)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(2));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
    uVar7 = (undefined4)(((BLRoleAttribute *)(uVar7))->getFightAttrValueByType(3));
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
    uVar8 = (undefined4)(((BLRoleAttribute *)(uVar8))->getFightAttrValueByType(0));
    uVar9 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x40)))(piVar5));
    uVar9 = (undefined4)(((BLRoleAttribute *)(uVar9))->getFightAttrValueByType(1));
    uVar10 = (undefined4)(cocos2d::CCDictionary::create());
    piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x18)))(piVar5);
    (**(code **)(*(int *)(piVar5) + (0x18)))(&uStack_24,piVar5);
    func_0079e45c(auStack_20,uStack_24,auStack_2c);
    uVar11 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
    func_0079e45c(auStack_1c,"RID",auStack_28);
    ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar11, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    func_0079e2bc(&uStack_24);
    ConvertToString<int>(auStack_20, uVar6, 0);
    uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
    func_0079e45c(auStack_1c,g_00432170 + 0x432016,&uStack_24);
    ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    ConvertToString<int>(auStack_20, uVar7, 0);
    uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
    func_0079e45c(auStack_1c,g_00432174 + 0x432050,&uStack_24);
    ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    ConvertToString<int>(auStack_20, uVar8, 0);
    uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
    func_0079e45c(auStack_1c,g_00432178 + 0x432088,&uStack_24);
    ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    ConvertToString<int>(auStack_20, uVar9, 0);
    uVar6 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_20));
    func_0079e45c(auStack_1c,g_0043217c + 0x4320c2,&uStack_24);
    ((cocos2d::CCDictionary *)(uVar10))->setObject((cocos2d::CCObject*)uVar6, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)uVar10);
  }
  uVar1 = (undefined4)(cocos2d::CCDictionary::create());
  func_0079e45c(auStack_1c,"SLTR",auStack_20);
  ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
  ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  return;
}

void BluetoothHelper::addRole(std::string p1, int p2, int p3, int p4, cocos2d::CCPoint * p5, int p6, int p7, bool p8)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_004324d0 + 0x43224a,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"AR",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    uVar3 = (undefined4)(cocos2d::CCString::create(p1));
    func_0079e45c(auStack_1c,"ID",&uStack_20);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    ConvertToString<int>(&uStack_20, p2, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"UID",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_004324e0 + 0x4322f4,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p4, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_004324e4 + 0x43232a,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    uVar3 = (undefined4)(*(int *)p5);
    ConvertToString<float>(&uStack_20, uVar3, 0, uVar3, ((int)this), uVar3);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_004324e8 + 0x432366,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p5[1], 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_004324ec + 0x43239c,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p7, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"WP",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p8, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_004324f4 + 0x43240a,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p6, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"PI",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_004324fc + 0x43245e,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::rolePos(int p1, cocos2d::CCPoint * p2, float p3, float p4, float p5)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  cocos2d::CCLog((char const*)"asdfasdfasdfa");
  iVar1 = (undefined4)(intptr_t)(((BluetoothHelper *)(((int)this)))->isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00432724 + 0x43253a,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"RP",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"UID",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, *(int *)p2, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432730 + 0x4325d6,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p2[1], 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432734 + 0x43260c,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"SX",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p4, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"SY",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p5, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"MX",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00432744 + 0x4326cc,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::setLockWidth(float p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    ConvertToString<float>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"LW",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_004327f4 + 0x4327bc,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::setRoleAIMoveTo(int p1, float p2, float p3)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    ConvertToString<int>(&uStack_20, 1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"ROLEAIMOVE",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"UID",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p2, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_0043296c + 0x4328c0,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432970 + 0x4328f4,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00432974 + 0x43291a,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::roleChangeStatus(int p1, std::string * p2, int p3, bool p4, cocos2d::CCPoint * p5, bool p6, float p7, char const* p8)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(BluetoothHelper::isBlueFight());
  uVar2 = (undefined4)(((BluetoothHelper *)(((int)this)))->isHost());
  cocos2d::CCLog((char const*)" %d, %d ", uVar1, uVar2);
  iVar3 = (undefined4)(intptr_t)(((BluetoothHelper *)(((int)this)))->isBlueFight());
  if ((iVar3 != 0) && (iVar3 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar3 != 0)) {
    uVar1 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00432cf4 + 0x432a60,auStack_28);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"RS",auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)p2));
    func_0079e45c(auStack_1c,g_00432cfc + 0x432ab4,&uStack_20);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    ConvertToString<int>(&uStack_20, p3, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d00 + 0x432ae2,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d04 + 0x432b1a,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<bool>(&uStack_20, p4, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d08 + 0x432b50,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, *(int *)p5, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d0c + 0x432b86,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p5[1], 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d10 + 0x432bba,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<float>(&uStack_20, p7, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"MX",auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<bool>(&uStack_20, p6, 0);
    uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432d18 + 0x432c24,auStack_24);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    if ((int)(intptr_t)(int)(intptr_t)p8 != 0) {
      func_0079e45c(&uStack_20,p8,auStack_28);
      uVar2 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
      func_0079e45c(auStack_1c,"ACTNAME",auStack_24);
      ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_20);
    }
    func_0079e45c(&uStack_20,g_00432d20 + 0x432c84,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar1);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::roleisFlipX(int p1, bool p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BluetoothHelper::isBlueFight());
  if ((iVar1 != 0) && (iVar1 = ((BluetoothHelper *)(((int)this)))->isHost(), iVar1 != 0)) {
    uVar2 = (undefined4)(cocos2d::CCDictionary::create());
    func_0079e45c(&uStack_20,g_00432e48 + 0x432d52,auStack_28);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"RF",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<int>(&uStack_20, p1, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,"UID",auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    ConvertToString<bool>(&uStack_20, p2, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_20));
    func_0079e45c(auStack_1c,g_00432e54 + 0x432de2,auStack_24);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,g_00432e58 + 0x432e06,auStack_1c);
    ((CCJson *)(auStack_1c))->JSONStringWithDictionary((cocos2d::CCDictionary*)uVar2);
    func_0079e52c(&uStack_20,auStack_1c);
    func_0079e2bc(auStack_1c);
    ((BluetoothHelper *)(((int)this)))->sendBluetoothData((char const*)uStack_20);
    func_0079e2bc(&uStack_20);
  }
  return;
}

void BluetoothHelper::setRoleLife(int p1, int p2, int p3, int p4, bool p5, bool p6)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::clientEnterGame(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::selectArenaHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::blueConnetScuess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::hostGame()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::postHeroRoleAttr(cocos2d::CCDictionary* p1)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  uint uStack_2c;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar9 = (undefined4)(intptr_t)(g_00433aa4);
  (**(code **)(*(int *)(piVar1) + (0x138)))();
  ((cocos2d::CCArray *)this)->removeAllObjects();
  func_0079e45c(auStack_1c,((intptr_t)"SLTR"),auStack_20);
  iVar9 = (undefined4)(intptr_t)(iVar9 + 0x433860);
  iStack_28 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_1c));
  if (iStack_28 != 0) {
    iStack_28 = func_0079e55c(iStack_28,*(undefined4 *)(iVar9 + g_00433aac),
                                *(undefined4 *)(iVar9 + g_00433ab0),0,
                                *(undefined4 *)(iVar9 + g_00433aac),((int)this),
                                *(undefined4 *)(iVar9 + g_00433ab0));
  }
  func_0079e2bc(auStack_1c);
  uStack_2c = (undefined4)(0);
  if (iStack_28 != 0) {
    for (; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iStack_28)->count(), uStack_2c < uVar3);
        uStack_2c = uStack_2c + 1) {
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iStack_28)->objectAtIndex((unsigned int)uStack_2c));
      if (iVar2 != 0) {
        uVar7 = (undefined4)(*(undefined4 *)(iVar9 + g_00433aac));
        iVar2 = func_0079e55c(iVar2,uVar7,*(undefined4 *)(iVar9 + g_00433ab4),0,
                                *(undefined4 *)(iVar9 + g_00433ab4));
        if (iVar2 != 0) {
          func_0079e45c(auStack_1c,((intptr_t)"RID"),auStack_20);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar5 = (undefined4)(0);
          if (iVar4 != 0) {
            uVar5 = (undefined4)(func_0079e55c(iVar4,uVar7,*(undefined4 *)(iVar9 + g_00433abc),0));
          }
          func_0079e2bc(auStack_1c);
          piVar1 = (int *)((ArenaPlayerData *)this)->create();
          pcVar8 = *(code **)(*piVar1 + 0x1c);
          uVar5 = (undefined4)(((cocos2d::CCString *)uVar5)->getCString());
          func_0079e45c(auStack_1c,uVar5,auStack_20);
          (*pcVar8)(piVar1,auStack_1c);
          func_0079e2bc(auStack_1c);
          func_0079e45c(auStack_1c,g_00433ac0 + 0x433956,auStack_20);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar5 = (undefined4)(0);
          if (iVar4 != 0) {
            uVar5 = (undefined4)(func_0079e55c(iVar4,uVar7,*(undefined4 *)(iVar9 + g_00433abc),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar8 = *(code **)(*piVar1 + 0x34);
          ((cocos2d::CCString *)uVar5)->getCString();
          uVar5 = (undefined4)(func_0079e6c0());
          (*pcVar8)(piVar1,uVar5);
          func_0079e45c(auStack_1c,g_00433ac4 + 0x4339a0,auStack_20);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar5 = (undefined4)(0);
          if (iVar4 != 0) {
            uVar5 = (undefined4)(func_0079e55c(iVar4,uVar7,*(undefined4 *)(iVar9 + g_00433abc),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar8 = *(code **)(*piVar1 + 0x3c);
          ((cocos2d::CCString *)uVar5)->getCString();
          uVar5 = (undefined4)(func_0079e6c0());
          (*pcVar8)(piVar1,uVar5);
          func_0079e45c(auStack_1c,g_00433ac8 + 0x4339ea,auStack_20);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar5 = (undefined4)(0);
          if (iVar4 != 0) {
            uVar5 = (undefined4)(func_0079e55c(iVar4,uVar7,*(undefined4 *)(iVar9 + g_00433abc),0));
          }
          func_0079e2bc(auStack_1c);
          pcVar8 = *(code **)(*piVar1 + 0x24);
          ((cocos2d::CCString *)uVar5)->getCString();
          uVar5 = (undefined4)(func_0079e6c0());
          (*pcVar8)(piVar1,uVar5);
          func_0079e45c(auStack_1c,g_00433acc + 0x433a34,auStack_20);
          iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar2)->objectForKey((char const *)auStack_1c));
          uVar5 = (undefined4)(0);
          if (iVar2 != 0) {
            uVar5 = func_0079e55c(iVar2,uVar7,*(undefined4 *)(iVar9 + g_00433abc),0,
                                    *(undefined4 *)(iVar9 + g_00433abc));
          }
          func_0079e2bc(auStack_1c);
          pcVar8 = *(code **)(*piVar1 + 0x2c);
          ((cocos2d::CCString *)uVar5)->getCString();
          uVar7 = (undefined4)(func_0079e6c0());
          (*pcVar8)(piVar1,uVar7);
          piVar6 = (int *)((DataManager *)this)->shareDataManager();
          uVar7 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x138)))());
          ((cocos2d::CCArray *)uVar7)->addObject((cocos2d::CCObject*)piVar1);
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x1c))(((int)this),1);
  iVar9 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x20))(((int)this)));
  if (iVar9 != 0) {
    BluetoothHelper::hostGame();
  }
  return;
}

void BluetoothHelper::writeVideoRecord()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::disConnetScuess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::clientCreateMissionData(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BluetoothHelper::postEnterSelectRole(cocos2d::CCDictionary* p1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  func_0079e45c(&uStack_14,"ESG",&uStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey(*(std::string const*)&uStack_14));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_0043402c + 0x433ff6),
                            *(undefined4 *)(g_00434030 + 0x433ff8),0);
  }
  func_0079e2bc(&uStack_14);
  if (iVar2 != 0) {
    uVar3 = (undefined4)(((cocos2d::CCString *)(iVar2))->getCString());
    ((BluetoothHelper *)(((int)this)))->clientCreateMissionData((char const*)uVar3);
  }
  return;
}

void BluetoothHelper::receiveBluetoothData(char const* p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar7 = (undefined4)(intptr_t)(g_004343ac + 0x434040);
  iVar1 = (undefined4)((void)(((CCJson *)this)->JSONObjectWithString((char const*)p1)),(intptr_t)0);
  if (iVar1 != 0) {
    func_0079e45c(auStack_1c,"TAPS",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postUserAction((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"SLTR",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postHeroRoleAttr((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"LW",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postLockWidth((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"AR",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postAddRole((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"RS",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postRoleStatus((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"RP",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postRolePos((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"RF",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postRoleFlipX((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"GE",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postGameEffect((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"ROLELIFE",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postRoleLife((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"ROLEAIMOVE",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postRoleAIMoveTo((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"ENTERG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->clientEnterGame((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"GD",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postGameDrop((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"EMCG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postEnterMainCity((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"ESG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postEnterSelectRole((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"PAUSG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postPauseGame((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"RSMG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postResumeGame((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"STARTG",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postClientstartedGame((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"SH_K",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postSetHero((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"ARA",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postAddRoleAnimate((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"OL_RE",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->postShowResult((cocos2d::CCDictionary*)iVar1);
    }
    func_0079e45c(auStack_1c,"OL_RE_CMP",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BluetoothHelper *)(((int)this)))->setHeroRoleAttr();
    }
    func_0079e45c(auStack_1c,"VEG_K",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      ((BLVideoPlayer *)this)->share();
      ((BLVideoPlayer *)this)->stopPlay();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar6))->postNotification((char const*)"EVENT_VIDEO_PLAY_END");
      piVar3 = (int *)((BLMission *)this)->currentMission();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x208)))();
      uVar8 = (undefined4)(0);
      while( true ) {
        (**(code **)(*(int *)(piVar3) + (0x28)))(piVar3);
        uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
        if (uVar4 <= uVar8) break;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))(piVar3));
        iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar6))->objectAtIndex((unsigned int)uVar8));
        if ((iVar2 != 0) &&
           (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar7 + g_004345f0),
                                    *(undefined4 *)(iVar7 + g_004345f4),0), iVar2 != 0)) {
          ((BLRole *)(iVar2))->standOn(0);
        }
        uVar8 = (undefined4)(uVar8 + 1);
      }
      uVar8 = (undefined4)(0);
      while( true ) {
        (**(code **)(*(int *)(piVar3) + (0x38)))(piVar3);
        uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
        if (uVar4 <= uVar8) break;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x38)))(piVar3));
        iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar6))->objectAtIndex((unsigned int)uVar8));
        if ((iVar2 != 0) &&
           (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar7 + g_004345f0),
                                    *(undefined4 *)(iVar7 + g_004345f4),0), iVar2 != 0)) {
          ((BLRole *)(iVar2))->standOn(0);
        }
        uVar8 = (undefined4)(uVar8 + 1);
      }
    }
    func_0079e45c(auStack_1c,"ULGK",auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar2 != 0) {
      func_0079e45c(auStack_1c,"ULGK",auStack_20);
      iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = func_0079e55c(iVar5,*(undefined4 *)(iVar7 + g_004345f0),
                                *(undefined4 *)(iVar7 + g_004345fc),0,
                                *(undefined4 *)(iVar7 + g_004345f0),
                                *(undefined4 *)(iVar7 + g_004345fc));
      }
      func_0079e2bc(auStack_1c);
      if (iVar2 != 0) {
        uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        ((cocos2d::CCNotificationCenter *)(uVar6))->postNotification((char const*)"EVENT_UPDATE_LIFE", (cocos2d::CCObject*)iVar2);
      }
    }
    func_0079e45c(auStack_1c,"PK_FAIL",auStack_20);
    iVar7 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar7 != 0) {
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar6))->postNotification((char const*)"TAP_PK_FAILED");
    }
    func_0079e45c(auStack_1c,"PK_WIN",auStack_20);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
    func_0079e2bc(auStack_1c);
    if (iVar1 != 0) {
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar6))->postNotification((char const*)"TAP_PK_WIN");
    }
  }
  return;
}

undefined8 BluetoothHelper::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

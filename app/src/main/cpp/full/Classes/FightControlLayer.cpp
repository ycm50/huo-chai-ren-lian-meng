#include "FightControlLayer.h"
#include "CCDictionary.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCScale9Sprite.h"
#include "CCDirector.h"
#include "CCInteger.h"
#include "CCGeometry.h"
#include "UIObject.h"
#include "BLAttackCommob.h"
#include "BLBufferItemView.h"
#include "BLControlButton.h"
#include "BLEndLessTimeShowView.h"
#include "BLEndLessTimeView.h"
#include "BLGameScene.h"
#include "BLHero.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionData.h"
#include "BLMissionManager.h"
#include "BLMonsterData.h"
#include "BLProgressBar.h"
#include "BLResultManager.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLRoleBase.h"
#include "BLSkillControlButton.h"
#include "BLVideoPlayer.h"
#include "BluetoothHelper.h"
#include "CCJson.h"
#include "CardData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "TalentUserData.h"
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
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0042f3fc(...);
extern "C" long long func_004dbd60(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004d834c;
extern "C" unsigned long UNK_004d8364;
extern "C" unsigned long UNK_004d837c;
extern "C" unsigned long UNK_004d8394;
extern "C" unsigned long UNK_004d83f0;
extern "C" unsigned long UNK_004d8422;
extern "C" unsigned long UNK_004d8468;
extern "C" unsigned long UNK_004d8490;
extern "C" unsigned long UNK_004d850e;
extern "C" unsigned long UNK_004d8510;
extern "C" unsigned long UNK_004d852c;
extern "C" unsigned long UNK_004d853c;
extern "C" unsigned long UNK_004d86e6;
extern "C" unsigned long UNK_004d8782;
extern "C" unsigned long UNK_004d8944;
extern "C" unsigned long UNK_004d899e;
extern "C" unsigned long UNK_004d89c4;
extern "C" unsigned long UNK_004d89fc;
extern "C" unsigned long UNK_004d8a80;
extern "C" unsigned long UNK_004d8a82;
extern "C" unsigned long UNK_004d8bc8;
extern "C" unsigned long UNK_004d8c28;
extern "C" unsigned long UNK_004d8c88;
extern "C" unsigned long UNK_004d8ce8;
extern "C" unsigned long UNK_004d8d48;
extern "C" unsigned long UNK_004d8da8;
extern "C" unsigned long UNK_004d8dc6;
extern "C" unsigned long UNK_004d8dc8;
extern "C" unsigned long UNK_004d8e28;
extern "C" unsigned long UNK_004d9276;
extern "C" unsigned long UNK_004d9292;
extern "C" unsigned long UNK_004d9294;
extern "C" unsigned long UNK_004d930c;
extern "C" unsigned long UNK_004d9346;
extern "C" unsigned long UNK_004d93ca;
extern "C" unsigned long UNK_004d95ce;
extern "C" unsigned long UNK_004d963c;
extern "C" unsigned long UNK_004d968e;
extern "C" unsigned long UNK_004d96c8;
extern "C" unsigned long UNK_004d9702;
extern "C" unsigned long UNK_004d97a6;
extern "C" unsigned long UNK_004d97fa;
extern "C" unsigned long UNK_004d9844;
extern "C" unsigned long UNK_004d9908;
extern "C" unsigned long UNK_004d994c;
extern "C" unsigned long UNK_004d9abc;
extern "C" unsigned long UNK_004d9ae2;
extern "C" unsigned long UNK_004d9b1f;
extern "C" unsigned long UNK_004d9b22;
extern "C" unsigned long UNK_004d9b4e;
extern "C" unsigned long UNK_004d9bc6;
extern "C" unsigned long UNK_004d9c80;
extern "C" unsigned long UNK_004d9c84;
extern "C" unsigned long UNK_004d9ce6;
extern "C" unsigned long UNK_004d9cec;
extern "C" unsigned long UNK_004d9df5;
extern "C" unsigned long UNK_004d9df8;
extern "C" unsigned long UNK_004d9e24;
extern "C" unsigned long UNK_004d9efa;
extern "C" unsigned long UNK_004d9fbc;
extern "C" unsigned long UNK_004d9fbe;
extern "C" unsigned long UNK_004da00e;
extern "C" unsigned long UNK_004da01e;
extern "C" unsigned long UNK_004da034;
extern "C" unsigned long UNK_004da05c;
extern "C" unsigned long UNK_004da08c;
extern "C" unsigned long UNK_004da0b4;
extern "C" unsigned long UNK_004da198;
extern "C" unsigned long UNK_004da250;
extern "C" unsigned long UNK_004da276;
extern "C" unsigned long UNK_004da2f4;
extern "C" unsigned long UNK_004da2f6;
extern "C" unsigned long UNK_004da314;
extern "C" unsigned long UNK_004da324;
extern "C" unsigned long UNK_004da374;
extern "C" unsigned long UNK_004da3f0;
extern "C" unsigned long UNK_004da40a;
extern "C" unsigned long UNK_004da4a8;
extern "C" unsigned long UNK_004da500;
extern "C" unsigned long UNK_004da56e;
extern "C" unsigned long UNK_004da58a;
extern "C" unsigned long UNK_004da74e;
extern "C" unsigned long UNK_004da7e8;
extern "C" unsigned long UNK_004da86e;
extern "C" unsigned long UNK_004da90e;
extern "C" unsigned long UNK_004da960;
extern "C" unsigned long UNK_004daa28;
extern "C" unsigned long UNK_004daac8;
extern "C" unsigned long UNK_004daae6;
extern "C" unsigned long UNK_004dac10;
extern "C" unsigned long UNK_004dacac;
extern "C" unsigned long UNK_004dacca;
extern "C" unsigned long UNK_004dad6c;
extern "C" unsigned long UNK_004dae08;
extern "C" unsigned long UNK_004dae26;
extern "C" unsigned long UNK_004daec2;
extern "C" unsigned long UNK_004daf5e;
extern "C" unsigned long UNK_004dafc2;
extern "C" unsigned long UNK_004db05e;
extern "C" unsigned long UNK_004db0fa;
extern "C" unsigned long UNK_004db118;
extern "C" unsigned long UNK_004db1b4;
extern "C" unsigned long UNK_004db250;
extern "C" unsigned long UNK_004db26e;
extern "C" unsigned long UNK_004db30a;
extern "C" unsigned long UNK_004db3de;
extern "C" unsigned long UNK_004db3fc;
extern "C" unsigned long UNK_004db498;
extern "C" unsigned long UNK_004db50a;
extern "C" unsigned long UNK_004db51a;
extern "C" unsigned long UNK_004db59e;
extern "C" unsigned long UNK_004db5a0;
extern "C" unsigned long UNK_004db606;
extern "C" unsigned long UNK_004db6be;
extern "C" unsigned long UNK_004db6f6;
extern "C" unsigned long UNK_004db720;
extern "C" unsigned long UNK_004db766;
extern "C" unsigned long UNK_004db848;
extern "C" unsigned long UNK_004db880;
extern "C" unsigned long UNK_004db8aa;
extern "C" unsigned long UNK_004db8f0;
extern "C" unsigned long UNK_004db99a;
extern "C" unsigned long UNK_004dbab6;
extern "C" unsigned long UNK_004dbad2;
extern "C" unsigned long UNK_004dbade;
extern "C" unsigned long UNK_004dbdac;
extern "C" unsigned long UNK_004dbdba;
extern "C" unsigned long UNK_004dbdd6;
extern "C" unsigned long UNK_004dbdf2;
extern "C" unsigned long UNK_004dbe0e;
extern "C" unsigned long UNK_004dbe2a;
extern "C" unsigned long UNK_004dbe46;
extern "C" unsigned long UNK_004dbe62;
extern "C" unsigned long _DAT_004d8678;
extern "C" unsigned long _DAT_004d867c;
extern "C" unsigned long _DAT_004d8680;
extern "C" unsigned long _DAT_004d88d8;
extern "C" unsigned long _DAT_004d88dc;
extern "C" unsigned long _DAT_004d914c;
extern "C" unsigned long _DAT_004d9150;
extern "C" unsigned long _DAT_004d9154;
extern "C" unsigned long _DAT_004d9158;
extern "C" unsigned long _DAT_004d915c;
extern "C" unsigned long _DAT_004d9160;
extern "C" unsigned long _UNK_004d8350;
extern "C" unsigned long _UNK_004d8368;
extern "C" unsigned long _UNK_004d8380;
extern "C" unsigned long _UNK_004d8398;
extern "C" unsigned long _UNK_004d8454;
extern "C" unsigned long _UNK_004d8458;
extern "C" unsigned long _UNK_004d846c;
extern "C" unsigned long _UNK_004d8494;
extern "C" unsigned long _UNK_004d8568;
extern "C" unsigned long _UNK_004d856c;
extern "C" unsigned long _UNK_004d8570;
extern "C" unsigned long _UNK_004d8574;
extern "C" unsigned long _UNK_004d8578;
extern "C" unsigned long _UNK_004d8720;
extern "C" unsigned long _UNK_004d8788;
extern "C" unsigned long _UNK_004d8a5c;
extern "C" unsigned long _UNK_004d8a60;
extern "C" unsigned long _UNK_004d8a64;
extern "C" unsigned long _UNK_004d8a68;
extern "C" unsigned long _UNK_004d8b6c;
extern "C" unsigned long _UNK_004d8b70;
extern "C" unsigned long _UNK_004d8bd0;
extern "C" unsigned long _UNK_004d8c30;
extern "C" unsigned long _UNK_004d8c90;
extern "C" unsigned long _UNK_004d8cf0;
extern "C" unsigned long _UNK_004d8d50;
extern "C" unsigned long _UNK_004d8db0;
extern "C" unsigned long _UNK_004d8e80;
extern "C" unsigned long _UNK_004d8e84;
extern "C" unsigned long _UNK_004d8e88;
extern "C" unsigned long _UNK_004d9444;
extern "C" unsigned long _UNK_004d9448;
extern "C" unsigned long _UNK_004d944c;
extern "C" unsigned long _UNK_004d9450;
extern "C" unsigned long _UNK_004d9454;
extern "C" unsigned long _UNK_004d9458;
extern "C" unsigned long _UNK_004d945c;
extern "C" unsigned long _UNK_004d9460;
extern "C" unsigned long _UNK_004d9464;
extern "C" unsigned long _UNK_004d94e4;
extern "C" unsigned long _UNK_004d959c;
extern "C" unsigned long _UNK_004d9860;
extern "C" unsigned long _UNK_004d9864;
extern "C" unsigned long _UNK_004d9868;
extern "C" unsigned long _UNK_004d986c;
extern "C" unsigned long _UNK_004d9870;
extern "C" unsigned long _UNK_004d9874;
extern "C" unsigned long _UNK_004d9878;
extern "C" unsigned long _UNK_004d987c;
extern "C" unsigned long _UNK_004d9880;
extern "C" unsigned long _UNK_004d9884;
extern "C" unsigned long _UNK_004d9888;
extern "C" unsigned long _UNK_004d9a10;
extern "C" unsigned long _UNK_004d9a14;
extern "C" unsigned long _UNK_004d9a18;
extern "C" unsigned long _UNK_004d9a1c;
extern "C" unsigned long _UNK_004d9a20;
extern "C" unsigned long _UNK_004d9e4c;
extern "C" unsigned long _UNK_004d9e50;
extern "C" unsigned long _UNK_004d9e54;
extern "C" unsigned long _UNK_004d9e58;
extern "C" unsigned long _UNK_004d9e5c;
extern "C" unsigned long _UNK_004d9e60;
extern "C" unsigned long _UNK_004d9e64;
extern "C" unsigned long _UNK_004d9e68;
extern "C" unsigned long _UNK_004d9e6c;
extern "C" unsigned long _UNK_004d9e70;
extern "C" unsigned long _UNK_004d9e74;
extern "C" unsigned long _UNK_004d9e78;
extern "C" unsigned long _UNK_004d9e7c;
extern "C" unsigned long _UNK_004d9e80;
extern "C" unsigned long _UNK_004d9e84;
extern "C" unsigned long _UNK_004d9e88;
extern "C" unsigned long _UNK_004d9e8c;
extern "C" unsigned long _UNK_004da1f4;
extern "C" unsigned long _UNK_004da1f8;
extern "C" unsigned long _UNK_004da1fc;
extern "C" unsigned long _UNK_004da200;
extern "C" unsigned long _UNK_004da204;
extern "C" unsigned long _UNK_004da208;
extern "C" unsigned long _UNK_004da20c;
extern "C" unsigned long _UNK_004da210;
extern "C" unsigned long _UNK_004da214;
extern "C" unsigned long _UNK_004da218;
extern "C" unsigned long _UNK_004da21c;
extern "C" unsigned long _UNK_004da220;
extern "C" unsigned long _UNK_004da224;
extern "C" unsigned long _UNK_004da228;
extern "C" unsigned long _UNK_004da22c;
extern "C" unsigned long _UNK_004da350;
extern "C" unsigned long _UNK_004da354;
extern "C" unsigned long _UNK_004da358;
extern "C" unsigned long _UNK_004da35c;
extern "C" unsigned long _UNK_004da360;
extern "C" unsigned long _UNK_004da364;
extern "C" unsigned long _UNK_004da650;
extern "C" unsigned long _UNK_004da654;
extern "C" unsigned long _UNK_004da658;
extern "C" unsigned long _UNK_004da65c;
extern "C" unsigned long _UNK_004da660;
extern "C" unsigned long _UNK_004da664;
extern "C" unsigned long _UNK_004da668;
extern "C" unsigned long _UNK_004da66c;
extern "C" unsigned long _UNK_004da670;
extern "C" unsigned long _UNK_004da674;
extern "C" unsigned long _UNK_004da678;
extern "C" unsigned long _UNK_004da67c;
extern "C" unsigned long _UNK_004da680;
extern "C" unsigned long _UNK_004da684;
extern "C" unsigned long _UNK_004daae8;
extern "C" unsigned long _UNK_004daaec;
extern "C" unsigned long _UNK_004daaf0;
extern "C" unsigned long _UNK_004daaf4;
extern "C" unsigned long _UNK_004daaf8;
extern "C" unsigned long _UNK_004daafc;
extern "C" unsigned long _UNK_004dab00;
extern "C" unsigned long _UNK_004dab04;
extern "C" unsigned long _UNK_004dab08;
extern "C" unsigned long _UNK_004dab0c;
extern "C" unsigned long _UNK_004dab10;
extern "C" unsigned long _UNK_004dab14;
extern "C" unsigned long _UNK_004dab18;
extern "C" unsigned long _UNK_004dab1c;
extern "C" unsigned long _UNK_004dab20;
extern "C" unsigned long _UNK_004dab24;
extern "C" unsigned long _UNK_004daf60;
extern "C" unsigned long _UNK_004daf64;
extern "C" unsigned long _UNK_004daf68;
extern "C" unsigned long _UNK_004daf6c;
extern "C" unsigned long _UNK_004daf70;
extern "C" unsigned long _UNK_004daf74;
extern "C" unsigned long _UNK_004daf78;
extern "C" unsigned long _UNK_004daf7c;
extern "C" unsigned long _UNK_004daf80;
extern "C" unsigned long _UNK_004daf84;
extern "C" unsigned long _UNK_004daf88;
extern "C" unsigned long _UNK_004daf8c;
extern "C" unsigned long _UNK_004daf90;
extern "C" unsigned long _UNK_004daf94;
extern "C" unsigned long _UNK_004daf98;
extern "C" unsigned long _UNK_004daf9c;
extern "C" unsigned long _UNK_004dafa0;
extern "C" unsigned long _UNK_004db3a0;
extern "C" unsigned long _UNK_004db3a4;
extern "C" unsigned long _UNK_004db3a8;
extern "C" unsigned long _UNK_004db3ac;
extern "C" unsigned long _UNK_004db3b0;
extern "C" unsigned long _UNK_004db3b4;
extern "C" unsigned long _UNK_004db3b8;
extern "C" unsigned long _UNK_004db3bc;
extern "C" unsigned long _UNK_004db3c0;
extern "C" unsigned long _UNK_004db3c4;
extern "C" unsigned long _UNK_004db3c8;
extern "C" unsigned long _UNK_004db3cc;
extern "C" unsigned long _UNK_004db3d0;
extern "C" unsigned long _UNK_004db678;
extern "C" unsigned long _UNK_004db67c;
extern "C" unsigned long _UNK_004db680;
extern "C" unsigned long _UNK_004db684;
extern "C" unsigned long _UNK_004db688;
extern "C" unsigned long _UNK_004db68c;
extern "C" unsigned long _UNK_004db690;
extern "C" unsigned long _UNK_004db694;
extern "C" unsigned long _UNK_004db698;
extern "C" unsigned long _UNK_004db69c;
extern "C" unsigned long _UNK_004db6a0;
extern "C" unsigned long _UNK_004db6a4;
extern "C" unsigned long _UNK_004db6a8;
extern "C" unsigned long _UNK_004dba68;
extern "C" unsigned long _UNK_004dba6c;
extern "C" unsigned long _UNK_004dba70;
extern "C" unsigned long _UNK_004dba74;
extern "C" unsigned long _UNK_004dba78;
extern "C" unsigned long _UNK_004dba7c;
extern "C" unsigned long _UNK_004dba80;
extern "C" unsigned long _UNK_004dba84;
extern "C" unsigned long _UNK_004dba88;
extern "C" unsigned long _UNK_004dba8c;
extern "C" unsigned long _UNK_004dbd88;
extern "C" unsigned long _UNK_004dbd8c;
extern "C" unsigned long _UNK_004dbd90;
extern "C" unsigned long _UNK_004dbe74;
extern "C" unsigned long _UNK_004dbe78;
extern "C" unsigned long _UNK_004dbe7c;
extern "C" unsigned long _UNK_004dbe80;
extern "C" unsigned long _UNK_004dbe84;
extern "C" unsigned long _UNK_004dbe88;
extern "C" unsigned long _UNK_004dbe8c;
extern "C" unsigned long _UNK_004dbe90;
extern "C" unsigned long _UNK_004dbe94;
extern "C" unsigned long _UNK_004dbe98;
extern "C" unsigned long _UNK_004dbe9c;
extern "C" unsigned long _UNK_004dbea0;
extern "C" unsigned long _UNK_004dbea4;
extern "C" unsigned long _UNK_004dbea8;
extern "C" unsigned long _UNK_004dbeac;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r12;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004d834c;
extern "C" unsigned long g_004d8350;
extern "C" unsigned long g_004d8364;
extern "C" unsigned long g_004d8368;
extern "C" unsigned long g_004d837c;
extern "C" unsigned long g_004d8380;
extern "C" unsigned long g_004d8394;
extern "C" unsigned long g_004d8398;
extern "C" unsigned long g_004d83f0;
extern "C" unsigned long g_004d8422;
extern "C" unsigned long g_004d8454;
extern "C" unsigned long g_004d8458;
extern "C" unsigned long g_004d8468;
extern "C" unsigned long g_004d846c;
extern "C" unsigned long g_004d8490;
extern "C" unsigned long g_004d8494;
extern "C" unsigned long g_004d850e;
extern "C" unsigned long g_004d8510;
extern "C" unsigned long g_004d852c;
extern "C" unsigned long g_004d853c;
extern "C" unsigned long g_004d8568;
extern "C" unsigned long g_004d856c;
extern "C" unsigned long g_004d8570;
extern "C" unsigned long g_004d8574;
extern "C" unsigned long g_004d8578;
extern "C" unsigned long g_004d8678;
extern "C" unsigned long g_004d867c;
extern "C" unsigned long g_004d8680;
extern "C" unsigned long g_004d86e6;
extern "C" unsigned long g_004d8720;
extern "C" unsigned long g_004d8782;
extern "C" unsigned long g_004d8788;
extern "C" unsigned long g_004d88d8;
extern "C" unsigned long g_004d88dc;
extern "C" unsigned long g_004d8944;
extern "C" unsigned long g_004d899e;
extern "C" unsigned long g_004d89c4;
extern "C" unsigned long g_004d89fc;
extern "C" unsigned long g_004d8a5c;
extern "C" unsigned long g_004d8a60;
extern "C" unsigned long g_004d8a64;
extern "C" unsigned long g_004d8a68;
extern "C" unsigned long g_004d8a80;
extern "C" unsigned long g_004d8a82;
extern "C" unsigned long g_004d8b6c;
extern "C" unsigned long g_004d8b70;
extern "C" unsigned long g_004d8bc8;
extern "C" unsigned long g_004d8bd0;
extern "C" unsigned long g_004d8c28;
extern "C" unsigned long g_004d8c30;
extern "C" unsigned long g_004d8c88;
extern "C" unsigned long g_004d8c90;
extern "C" unsigned long g_004d8ce8;
extern "C" unsigned long g_004d8cf0;
extern "C" unsigned long g_004d8d48;
extern "C" unsigned long g_004d8d50;
extern "C" unsigned long g_004d8da8;
extern "C" unsigned long g_004d8db0;
extern "C" unsigned long g_004d8dc6;
extern "C" unsigned long g_004d8dc8;
extern "C" unsigned long g_004d8e28;
extern "C" unsigned long g_004d8e80;
extern "C" unsigned long g_004d8e84;
extern "C" unsigned long g_004d8e88;
extern "C" unsigned long g_004d914c;
extern "C" unsigned long g_004d9150;
extern "C" unsigned long g_004d9154;
extern "C" unsigned long g_004d9158;
extern "C" unsigned long g_004d915c;
extern "C" unsigned long g_004d9160;
extern "C" unsigned long g_004d9276;
extern "C" unsigned long g_004d9292;
extern "C" unsigned long g_004d9294;
extern "C" unsigned long g_004d930c;
extern "C" unsigned long g_004d9346;
extern "C" unsigned long g_004d93ca;
extern "C" unsigned long g_004d9444;
extern "C" unsigned long g_004d9448;
extern "C" unsigned long g_004d944c;
extern "C" unsigned long g_004d9450;
extern "C" unsigned long g_004d9454;
extern "C" unsigned long g_004d9458;
extern "C" unsigned long g_004d945c;
extern "C" unsigned long g_004d9460;
extern "C" unsigned long g_004d9464;
extern "C" unsigned long g_004d94e4;
extern "C" unsigned long g_004d959c;
extern "C" unsigned long g_004d95ce;
extern "C" unsigned long g_004d963c;
extern "C" unsigned long g_004d968e;
extern "C" unsigned long g_004d96c8;
extern "C" unsigned long g_004d9702;
extern "C" unsigned long g_004d97a6;
extern "C" unsigned long g_004d97fa;
extern "C" unsigned long g_004d9844;
extern "C" unsigned long g_004d9860;
extern "C" unsigned long g_004d9864;
extern "C" unsigned long g_004d9868;
extern "C" unsigned long g_004d986c;
extern "C" unsigned long g_004d9870;
extern "C" unsigned long g_004d9874;
extern "C" unsigned long g_004d9878;
extern "C" unsigned long g_004d987c;
extern "C" unsigned long g_004d9880;
extern "C" unsigned long g_004d9884;
extern "C" unsigned long g_004d9888;
extern "C" unsigned long g_004d9908;
extern "C" unsigned long g_004d994c;
extern "C" unsigned long g_004d9a10;
extern "C" unsigned long g_004d9a14;
extern "C" unsigned long g_004d9a18;
extern "C" unsigned long g_004d9a1c;
extern "C" unsigned long g_004d9a20;
extern "C" unsigned long g_004d9abc;
extern "C" unsigned long g_004d9ae2;
extern "C" unsigned long g_004d9b1f;
extern "C" unsigned long g_004d9b22;
extern "C" unsigned long g_004d9b4e;
extern "C" unsigned long g_004d9bc6;
extern "C" unsigned long g_004d9c80;
extern "C" unsigned long g_004d9c84;
extern "C" unsigned long g_004d9ce6;
extern "C" unsigned long g_004d9cec;
extern "C" unsigned long g_004d9df5;
extern "C" unsigned long g_004d9df8;
extern "C" unsigned long g_004d9e24;
extern "C" unsigned long g_004d9e4c;
extern "C" unsigned long g_004d9e50;
extern "C" unsigned long g_004d9e54;
extern "C" unsigned long g_004d9e58;
extern "C" unsigned long g_004d9e5c;
extern "C" unsigned long g_004d9e60;
extern "C" unsigned long g_004d9e64;
extern "C" unsigned long g_004d9e68;
extern "C" unsigned long g_004d9e6c;
extern "C" unsigned long g_004d9e70;
extern "C" unsigned long g_004d9e74;
extern "C" unsigned long g_004d9e78;
extern "C" unsigned long g_004d9e7c;
extern "C" unsigned long g_004d9e80;
extern "C" unsigned long g_004d9e84;
extern "C" unsigned long g_004d9e88;
extern "C" unsigned long g_004d9e8c;
extern "C" unsigned long g_004d9efa;
extern "C" unsigned long g_004d9fbc;
extern "C" unsigned long g_004d9fbe;
extern "C" unsigned long g_004da00e;
extern "C" unsigned long g_004da01e;
extern "C" unsigned long g_004da034;
extern "C" unsigned long g_004da05c;
extern "C" unsigned long g_004da08c;
extern "C" unsigned long g_004da0b4;
extern "C" unsigned long g_004da198;
extern "C" unsigned long g_004da1f4;
extern "C" unsigned long g_004da1f8;
extern "C" unsigned long g_004da1fc;
extern "C" unsigned long g_004da200;
extern "C" unsigned long g_004da204;
extern "C" unsigned long g_004da208;
extern "C" unsigned long g_004da20c;
extern "C" unsigned long g_004da210;
extern "C" unsigned long g_004da214;
extern "C" unsigned long g_004da218;
extern "C" unsigned long g_004da21c;
extern "C" unsigned long g_004da220;
extern "C" unsigned long g_004da224;
extern "C" unsigned long g_004da228;
extern "C" unsigned long g_004da22c;
extern "C" unsigned long g_004da250;
extern "C" unsigned long g_004da276;
extern "C" unsigned long g_004da2f4;
extern "C" unsigned long g_004da2f6;
extern "C" unsigned long g_004da314;
extern "C" unsigned long g_004da324;
extern "C" unsigned long g_004da350;
extern "C" unsigned long g_004da354;
extern "C" unsigned long g_004da358;
extern "C" unsigned long g_004da35c;
extern "C" unsigned long g_004da360;
extern "C" unsigned long g_004da364;
extern "C" unsigned long g_004da374;
extern "C" unsigned long g_004da3f0;
extern "C" unsigned long g_004da40a;
extern "C" unsigned long g_004da4a8;
extern "C" unsigned long g_004da500;
extern "C" unsigned long g_004da56e;
extern "C" unsigned long g_004da58a;
extern "C" unsigned long g_004da650;
extern "C" unsigned long g_004da654;
extern "C" unsigned long g_004da658;
extern "C" unsigned long g_004da65c;
extern "C" unsigned long g_004da660;
extern "C" unsigned long g_004da664;
extern "C" unsigned long g_004da668;
extern "C" unsigned long g_004da66c;
extern "C" unsigned long g_004da670;
extern "C" unsigned long g_004da674;
extern "C" unsigned long g_004da678;
extern "C" unsigned long g_004da67c;
extern "C" unsigned long g_004da680;
extern "C" unsigned long g_004da684;
extern "C" unsigned long g_004da74e;
extern "C" unsigned long g_004da7e8;
extern "C" unsigned long g_004da86e;
extern "C" unsigned long g_004da90e;
extern "C" unsigned long g_004da960;
extern "C" unsigned long g_004daa28;
extern "C" unsigned long g_004daac8;
extern "C" unsigned long g_004daae6;
extern "C" unsigned long g_004daae8;
extern "C" unsigned long g_004daaec;
extern "C" unsigned long g_004daaf0;
extern "C" unsigned long g_004daaf4;
extern "C" unsigned long g_004daaf8;
extern "C" unsigned long g_004daafc;
extern "C" unsigned long g_004dab00;
extern "C" unsigned long g_004dab04;
extern "C" unsigned long g_004dab08;
extern "C" unsigned long g_004dab0c;
extern "C" unsigned long g_004dab10;
extern "C" unsigned long g_004dab14;
extern "C" unsigned long g_004dab18;
extern "C" unsigned long g_004dab1c;
extern "C" unsigned long g_004dab20;
extern "C" unsigned long g_004dab24;
extern "C" unsigned long g_004dac10;
extern "C" unsigned long g_004dacac;
extern "C" unsigned long g_004dacca;
extern "C" unsigned long g_004dad6c;
extern "C" unsigned long g_004dae08;
extern "C" unsigned long g_004dae26;
extern "C" unsigned long g_004daec2;
extern "C" unsigned long g_004daf5e;
extern "C" unsigned long g_004daf60;
extern "C" unsigned long g_004daf64;
extern "C" unsigned long g_004daf68;
extern "C" unsigned long g_004daf6c;
extern "C" unsigned long g_004daf70;
extern "C" unsigned long g_004daf74;
extern "C" unsigned long g_004daf78;
extern "C" unsigned long g_004daf7c;
extern "C" unsigned long g_004daf80;
extern "C" unsigned long g_004daf84;
extern "C" unsigned long g_004daf88;
extern "C" unsigned long g_004daf8c;
extern "C" unsigned long g_004daf90;
extern "C" unsigned long g_004daf94;
extern "C" unsigned long g_004daf98;
extern "C" unsigned long g_004daf9c;
extern "C" unsigned long g_004dafa0;
extern "C" unsigned long g_004dafc2;
extern "C" unsigned long g_004db05e;
extern "C" unsigned long g_004db0fa;
extern "C" unsigned long g_004db118;
extern "C" unsigned long g_004db1b4;
extern "C" unsigned long g_004db250;
extern "C" unsigned long g_004db26e;
extern "C" unsigned long g_004db30a;
extern "C" unsigned long g_004db3a0;
extern "C" unsigned long g_004db3a4;
extern "C" unsigned long g_004db3a8;
extern "C" unsigned long g_004db3ac;
extern "C" unsigned long g_004db3b0;
extern "C" unsigned long g_004db3b4;
extern "C" unsigned long g_004db3b8;
extern "C" unsigned long g_004db3bc;
extern "C" unsigned long g_004db3c0;
extern "C" unsigned long g_004db3c4;
extern "C" unsigned long g_004db3c8;
extern "C" unsigned long g_004db3cc;
extern "C" unsigned long g_004db3d0;
extern "C" unsigned long g_004db3de;
extern "C" unsigned long g_004db3fc;
extern "C" unsigned long g_004db498;
extern "C" unsigned long g_004db50a;
extern "C" unsigned long g_004db51a;
extern "C" unsigned long g_004db59e;
extern "C" unsigned long g_004db5a0;
extern "C" unsigned long g_004db606;
extern "C" unsigned long g_004db678;
extern "C" unsigned long g_004db67c;
extern "C" unsigned long g_004db680;
extern "C" unsigned long g_004db684;
extern "C" unsigned long g_004db688;
extern "C" unsigned long g_004db68c;
extern "C" unsigned long g_004db690;
extern "C" unsigned long g_004db694;
extern "C" unsigned long g_004db698;
extern "C" unsigned long g_004db69c;
extern "C" unsigned long g_004db6a0;
extern "C" unsigned long g_004db6a4;
extern "C" unsigned long g_004db6a8;
extern "C" unsigned long g_004db6be;
extern "C" unsigned long g_004db6f6;
extern "C" unsigned long g_004db720;
extern "C" unsigned long g_004db766;
extern "C" unsigned long g_004db848;
extern "C" unsigned long g_004db880;
extern "C" unsigned long g_004db8aa;
extern "C" unsigned long g_004db8f0;
extern "C" unsigned long g_004db99a;
extern "C" unsigned long g_004dba68;
extern "C" unsigned long g_004dba6c;
extern "C" unsigned long g_004dba70;
extern "C" unsigned long g_004dba74;
extern "C" unsigned long g_004dba78;
extern "C" unsigned long g_004dba7c;
extern "C" unsigned long g_004dba80;
extern "C" unsigned long g_004dba84;
extern "C" unsigned long g_004dba88;
extern "C" unsigned long g_004dba8c;
extern "C" unsigned long g_004dbab6;
extern "C" unsigned long g_004dbad2;
extern "C" unsigned long g_004dbade;
extern "C" unsigned long g_004dbd88;
extern "C" unsigned long g_004dbd8c;
extern "C" unsigned long g_004dbd90;
extern "C" unsigned long g_004dbdac;
extern "C" unsigned long g_004dbdba;
extern "C" unsigned long g_004dbdd6;
extern "C" unsigned long g_004dbdf2;
extern "C" unsigned long g_004dbe0e;
extern "C" unsigned long g_004dbe2a;
extern "C" unsigned long g_004dbe46;
extern "C" unsigned long g_004dbe62;
extern "C" unsigned long g_004dbe74;
extern "C" unsigned long g_004dbe78;
extern "C" unsigned long g_004dbe7c;
extern "C" unsigned long g_004dbe80;
extern "C" unsigned long g_004dbe84;
extern "C" unsigned long g_004dbe88;
extern "C" unsigned long g_004dbe8c;
extern "C" unsigned long g_004dbe90;
extern "C" unsigned long g_004dbe94;
extern "C" unsigned long g_004dbe98;
extern "C" unsigned long g_004dbe9c;
extern "C" unsigned long g_004dbea0;
extern "C" unsigned long g_004dbea4;
extern "C" unsigned long g_004dbea8;
extern "C" unsigned long g_004dbeac;
bool FightControlLayer::getISVideoEnd() const
{
  return *(undefined1 *)(((int)this) + 0x160);
}

void FightControlLayer::setISVideoEnd(bool p1)
{
  *(undefined1 *)(((int)this) + 0x160) = p1;
  return;
}

bool FightControlLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void FightControlLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void FightControlLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void FightControlLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void FightControlLayer::updateAttackCount(cocos2d::CCObject* p1)
{
  return;
}

FightControlLayer::~FightControlLayer()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004d83f0 + g_004d8454);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004d8422 + g_004d8458,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void FightControlLayer::onPauseCallBack(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x50);
  return;
}


void FightControlLayer::onVideoCallBack(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  ((BLVideoPlayer *)this)->share();
  ((BLVideoPlayer *)this)->stopPlay();
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  uVar1 = (undefined4)(((UIManager *)uVar1)->createUi(0x7a));
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->pushUi((UIObject*)uVar1);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  uVar1 = (undefined4)(((UIManager *)uVar1)->createUi(0x7b));
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->pushUi((UIObject*)uVar1);
  return;
}



void FightControlLayer::onSwitchHero(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(200));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8782 + g_004d8788, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*piVar2 + 0x208))();
  ((BLMissionManager *)this)->switchHero();
  return;
}

FightControlLayer::FightControlLayer()
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
  iVar3 = *(int *)(g_004d88d8 + 0x4d884c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x24c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x4f)) = 0;
  *(int *)((int)this + 4*(0x50)) = 0;
  *(int *)((int)this + 4*(0x51)) = 0;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  *(int *)((int)this + 4*(0x54)) = 0;
  *(int *)((int)this + 4*(0x55)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"FightControlLayer"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void FightControlLayer::initExpBar()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_34 [4];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x4a)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x1c);
  uVar3 = (undefined4)((**(code **)(*(int *)this + 0x24))(((int)this)));
  (*pcVar6)(piVar1,uVar3);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x50)) + 200))((int *)*(int *)((int)this + 4*(0x50)),*(int *)((int)this + 4*(0x4a)));
  uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_30 = ((cocos2d::CCDirector *)uVar3)->getWinSize();
  func_0079e45c(auStack_34,&g_004d8944 + g_004d8a5c,auStack_20);
  func_0079e53c(auStack_20,auStack_34);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*piVar1 + 0x7c))(piVar1,&g_004d899e + g_004d8a60);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0);
  uVar3 = (undefined4)(auStack_30[0]);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  (**(code **)(*piVar1 + 0x1cc))(auStack_28,piVar1);
  uVar4 = (undefined4)(func_0079e59c(uStack_24));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar5 = (int *)cocos2d::extension::CCScale9Sprite::create((char const*)&g_004d89c4 + g_004d8a64);
  (**(code **)(*piVar5 + 0x7c))(piVar5,&g_004d89fc + g_004d8a68);
  (**(code **)(*piVar5 + 0x1c))(piVar5,1);
  uVar3 = (undefined4)(auStack_30[0]);
  pcVar6 = *(code **)(*piVar5 + 0x1d4);
  (**(code **)(*piVar5 + 0x1cc))(auStack_28,piVar5);
  uVar4 = (undefined4)(func_0079e59c(uStack_24));
  0 /* ctorZero */;
  (*pcVar6)(piVar5,auStack_20);
  ((BLProgressBar *)*(int *)((int)this + 4*(0x4a)))->setProgressAndWidth((cocos2d::extension::CCScale9Sprite*)piVar1, (cocos2d::extension::CCScale9Sprite*)piVar5, auStack_30[0]);
  ((BLProgressBar *)*(int *)((int)this + 4*(0x4a)))->setPercentage(0);
  FightControlLayer::onUpdateExp(0);
  func_0079e2bc(auStack_34);
  return;
}


void FightControlLayer::onLeftDown(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(3));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8bc8 + g_004d8bd0, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 3, 0);
  return;
}

void FightControlLayer::onRightDown(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(1));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8c28 + g_004d8c30, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 1, 0);
  return;
}

void FightControlLayer::onLeftUp(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(4));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8c88 + g_004d8c90, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 4, 0);
  return;
}

void FightControlLayer::onRightUp(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(2));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8ce8 + g_004d8cf0, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 2, 0);
  return;
}

void FightControlLayer::onAttackDown(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(5));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8d48 + g_004d8d50, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 5, 0);
  return;
}

void FightControlLayer::onAttackUp(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)(cocos2d::CCInteger::create(6));
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_004d8da8 + g_004d8db0, (cocos2d::CCObject*)uVar4);
      return;
    }
  }
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x98))());
  FightControlLayer::playerAction((BLRole*)uVar3, 6, 0);
  return;
}





void FightControlLayer::tick(float p1)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  piVar3 = (int *)((BLGameScene *)this)->shareGameScene();
  iVar4 = (**(code **)(*piVar3 + 0x208))();
  if (iVar4 != 6) {
    piVar3 = (int *)((BLGameScene *)this)->shareGameScene();
    iVar4 = (**(code **)(*piVar3 + 0x208))();
    if (iVar4 != 5) {
      piVar3 = (int *)((BLGameScene *)this)->shareGameScene();
      iVar4 = (**(code **)(*piVar3 + 0x208))();
      if (iVar4 != 10) {
        piVar3 = (int *)((BLGameScene *)this)->shareGameScene();
        iVar4 = (**(code **)(*piVar3 + 0x208))();
        bVar7 = iVar4 != 0xd;
        goto code_r0x004d91fc;
      }
    }
  }
  bVar7 = false;
code_r0x004d91fc:
  uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x108));
  if ((bVar7) && (iVar4 = (**(code **)(*piVar2 + 0xf8))(piVar2), iVar4 == 0)) {
    bVar1 = (**(code **)(*piVar2 + 0x100))(piVar2);
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  ((BLRole *)uVar6)->setRoleVisable(bVar1);
  iVar4 = (**(code **)(*piVar2 + 0x98))(piVar2);
  if ((iVar4 == 0) || (iVar5 = ((BLRoleAttribute *)iVar4 + 0x1c4)->getLife(), 0 < iVar5)) {
    FightControlLayer::skillCDTick(p1, (BLRole*)iVar4);
  }
  return;
}




void FightControlLayer::onAddBlood(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}






void FightControlLayer::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (17) =====
void FightControlLayer::onChangeBtnAuto()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*(int *)(piVar1) + (0x208)))();
  ((BLMissionManager *)this)->changeAutoState();
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x130)))());
  iVar3 = (**(code **)(**(int **)(((int)this) + 0x140) + 0xd4))
                    (*(int **)(((int)this) + 0x140),g_004d8568);
  piVar1 = (int *)0x0;
  if (iVar3 != 0) {
    piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_004d850e + (intptr_t)(g_004d856c))),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004d8510 + (intptr_t)(g_004d8570))),0);
  }
  if (iVar2 == 0) {
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_004d853c + (intptr_t)(g_004d8578)),&iStack_20);
    uVar4 = (undefined4)(0 /* ctorZero */);
  }
  else {
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_004d852c + (intptr_t)(g_004d8574)),&iStack_20);
    uVar4 = (undefined4)(0 /* ctorZero */);
  }
  func_0079e2bc(&uStack_1c);
  (**(code **)(*(int *)(piVar1) + (0x30c)))(piVar1,uVar4,1);
  return;
}

void FightControlLayer::onUpdateExp(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::onVideoPlayEnd(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::onShowCardView()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(199)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(199);
  }
  return;
}

void FightControlLayer::playerAction(BLRole* p1, int p2, int p3)
{
  int *piVar1;
  int iVar2;
  
  if ((int)(intptr_t)p1 == 0) {
    return;
  }
  piVar1 = (int *)func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004d8a80 + (intptr_t)(g_004d8b6c))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_004d8a82 + (intptr_t)(g_004d8b70))),0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (p2 == 6) {
    (**(code **)(*piVar1 + 0x3f4))(piVar1,0);
    return;
  }
  if (6 < p2) {
    if (0x6a < p2) {
      if (p2 != 200) {
        return;
      }
      piVar1 = (int *)((BLMission *)this)->currentMission();
      (**(code **)(*piVar1 + 0x208))();
      ((BLMissionManager *)this)->switchEnemy();
      return;
    }
    if (0x68 < p2) {
      ((BLRole *)piVar1)->onTalentSkill(p3, p2);
      return;
    }
    if (3 < p2 - 100U) {
      return;
    }
    iVar2 = (undefined4)(intptr_t)(((BLRole *)piVar1)->skillAttack(p2));
    if (iVar2 != 0) {
      return;
    }
    iVar2 = (undefined4)(intptr_t)(((BLAttackCommob *)this)->create());
    *(int *)(iVar2 + 0x14) = p2;
code_r0x004d8b58:
    *(undefined4 *)(iVar2 + 0x18) = 0;
    (**(code **)(*piVar1 + 0x3fc))(piVar1);
    return;
  }
  if (p2 == 3) {
    (**(code **)(*piVar1 + 0x3e4))(piVar1,1);
code_r0x004d8b08:
    iVar2 = 0xfb;
  }
  else {
    if (p2 < 4) {
      if (p2 != 1) {
        if (p2 != 2) {
          return;
        }
        goto code_r0x004d8b08;
      }
      (**(code **)(*piVar1 + 0x3ec))(piVar1,1);
    }
    else if (p2 != 4) {
      if (p2 != 5) {
        return;
      }
      (**(code **)(*piVar1 + 0x3f4))(piVar1,1);
      iVar2 = (undefined4)(intptr_t)(((BLRole *)piVar1)->attack());
      if (iVar2 != 0) {
        return;
      }
      iVar2 = (undefined4)(intptr_t)(((BLAttackCommob *)this)->create());
      *(undefined4 *)(iVar2 + 0x14) = 0x68;
      goto code_r0x004d8b58;
    }
    iVar2 = 0xf9;
  }
  (**(code **)(*piVar1 + iVar2 * 4))(piVar1,0);
  ((BLHero *)piVar1)->playerActionMove();
  return;
}

void FightControlLayer::onSkillCallBack(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if ((int)(intptr_t)(int)(intptr_t)p1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x4d8e7a);
    (*pcVar1)();
  }
  piVar2 = (int *)func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004d8dc6 + (intptr_t)(g_004d8e84))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_004d8dc8 + (intptr_t)(g_004d8e80))),0,p4);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x118)))());
  ((BluetoothHelper *)this)->share();
  iVar4 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  if (iVar4 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar4 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isHost());
    if (iVar4 == 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x168)))());
      iVar4 = (undefined4)(intptr_t)(((TalentUserData *)uVar5)->getActiveTalentId(iVar3));
      if (0x68 < iVar3) {
        iVar3 = (undefined4)(intptr_t)(iVar3 + iVar4);
      }
      uVar5 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar6 = (undefined4)(cocos2d::CCInteger::create(iVar3));
      ((cocos2d::CCNotificationCenter *)uVar5)->postNotification((char const*)(unsigned char *)((char *)&g_004d8e28 + (intptr_t)(g_004d8e88)), (cocos2d::CCObject*)uVar6);
      return;
    }
  }
  piVar7 = (int *)((DataManager *)this)->shareDataManager();
  piVar7 = (int *)(**(code **)(*(int *)(piVar7) + (0x28)))();
  uVar5 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x168)))());
  uVar5 = (undefined4)(((TalentUserData *)uVar5)->getActiveTalentId(iVar3));
  piVar7 = (int *)((BLMission *)this)->currentMission();
  piVar7 = (int *)(**(code **)(*(int *)(piVar7) + (0x208)))();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x98)))());
  uVar8 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x118)))(piVar2));
  FightControlLayer::playerAction((BLRole*)uVar6, uVar8, uVar5);
  return;
}

void FightControlLayer::receiveBluetooth(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::updateSkillInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::skillCDTick(float p1, BLRole* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::initGoGoGo()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004d9276 + (intptr_t)(g_004d9444)),&uStack_30);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey((char const *)auStack_28));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_004d9292 + (intptr_t)(g_004d9448))),
                            *(undefined4 *)((unsigned char *)((char *)&g_004d9294 + (intptr_t)(g_004d944c))),0);
  }
  func_0079e2bc(auStack_28);
  if (iVar4 != 0) {
    piVar1 = (int *)::operator new(0x378);
    ::new ((void *)piVar1) BLRole();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? BLRole */
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
    if (iVar4 == 0) {
      (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar1))->autorelease();
    }
    (**(code **)(*(int *)(piVar1) + (0x3d4)))(piVar1,0);
    piVar5 = (int *)::operator new(0x4c);
    ::new ((void *)piVar5) BLMonsterData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar4 = (undefined4)(intptr_t)(((BLMonsterData *)(piVar5))->init());
    if (iVar4 == 0) {
      (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
      piVar5 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar5))->autorelease();
    }
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004d930c + (intptr_t)(g_004d9450)),&uStack_30);
    ((BLMonsterData *)(piVar5))->initWith((std::string)(char*)auStack_28, 1);
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)(piVar1) + (0x37c)))(piVar1,piVar5);
    pcVar6 = *(code **)(*piVar1 + 0x238);
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004d9346 + (intptr_t)(g_004d9454)),&uStack_30);
    (*pcVar6)(piVar1,auStack_28);
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,1);
    (**(code **)(*(int *)(piVar1) + (0x344)))(piVar1,0x3f800000);
    (**(code **)(*(int *)(piVar1) + (600)))(piVar1,((int)this),0);
    (**(code **)(*(int *)(piVar1) + (0x29c)))(piVar1,100);
    pcVar6 = *(code **)(*piVar1 + 0x5c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x60))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x50)) + 0xcc))((int *)*(int *)((int)this + 4*(0x50)),piVar1,g_004d9458);
    ((BLRoleBase *)(piVar1))->runNewAction((char const*)(unsigned char *)((char *)&g_004d93ca + (intptr_t)(g_004d945c)), 0, 1)
    ;
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar2))->getWinSize(); uStack_30 = hw_fbits(_ws.width); uStack_2c = hw_fbits(_ws.height); }
    iVar4 = (int)*(int *)&(*piVar1);
    uVar2 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
    uVar2 = (undefined4)(func_0079e59c(uVar2,g_004d9460));
    (**(code **)(iVar4 + 100))(piVar1,uVar2);
    pcVar6 = *(code **)(*piVar1 + 0x5c);
    ((BLRoleBase *)this)->getFirstFrameBody();
    uVar2 = (undefined4)(func_0079e57c(uStack_30,uStack_20));
    uVar2 = (undefined4)(func_0079e57c(uVar2,g_004d9464));
    (*pcVar6)(piVar1,uVar2);
    *(int *)((int)this + 4*(0x42)) = (int)piVar1;
  }
  return;
}

void FightControlLayer::initBuffLayer()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&piStack_20, &_ws.width, 4); uStack_1c = hw_fbits(_ws.height); }
  iVar2 = (undefined4)(intptr_t)(((BLBufferItemView *)this)->create());
  *(int *)((int)this + 4*(0x4c)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  piVar5 = (int *)*(int *)((int)this + 4*(0x4c));
  pcVar6 = *(code **)(*piVar5 + 0x5c);
  puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x8c))(piVar5);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_004d94e4)))));
  (*pcVar6)(piVar5,uVar1);
  uVar1 = (undefined4)(uStack_1c);
  piVar5 = (int *)*(int *)((int)this + 4*(0x4c));
  pcVar6 = *(code **)(*piVar5 + 100);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar5 + 0x8c))(piVar5));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar4)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_004d94e4)))));
  (*pcVar6)(piVar5,uVar1);
  return;
}

void FightControlLayer::initEndLessTimeLayer()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  iVar2 = (undefined4)(intptr_t)(((BLEndLessTimeView *)this)->create());
  *(int *)((int)this + 4*(0x4d)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  piVar5 = (int *)*(int *)((int)this + 4*(0x4d));
  iVar2 = (int)*(int *)&(*piVar5);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  (**(code **)(iVar2 + 0x5c))(piVar5,uVar1);
  uVar1 = (undefined4)(uStack_1c);
  piVar5 = (int *)*(int *)((int)this + 4*(0x4d));
  pcVar4 = *(code **)(*piVar5 + 100);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar5 + 0x8c))(piVar5));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar3)))));
  (*pcVar4)(piVar5,uVar1);
  iVar2 = (undefined4)(intptr_t)(((BLEndLessTimeShowView *)this)->create());
  *(int *)((int)this + 4*(0x4e)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  iVar2 = (undefined4)(intptr_t)(((BLEndLessTimeShowView *)*(int *)((int)this + 4*(0x4e)))->getPresenter());
  piVar5 = (int *)((BLEndLessTimeShowView *)*(undefined4 *)(iVar2 + 0x18))->getBtnBack();
  iVar2 = (int)*(int *)&(*piVar5);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(g_004d959c)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(g_004d959c)))));
  (**(code **)(iVar2 + 0x54))(piVar5,uVar1,uVar3);
  return;
}

void FightControlLayer::updatePlayersInfo(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::initPlayersInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FightControlLayer::onAuto(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool FightControlLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void FightControlLayer::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

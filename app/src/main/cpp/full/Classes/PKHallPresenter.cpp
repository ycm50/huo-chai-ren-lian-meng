#include "PKHallPresenter.h"
#include "HttpRequest.h"
#include "CCDictionary.h"
#include "BLForwards.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCString.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "PlayerData.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLJingJiGuiZePresenter.h"
#include "BLJingJiGuiZeView.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLTableView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "BluetoothHelper.h"
#include "CCJson.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
#include "HttpUtil.h"
#include "MissionSelectHeroData.h"
#include "PKAwardData.h"
#include "PKData.h"
#include "PKHallView.h"
#include "PKOnlineManager.h"
#include "PKRankItemPresenter.h"
#include "PKRankItemView.h"
#include "PlatformHelp.h"
#include "RankPlayerData.h"
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
#include "umeng_builtin.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eaa4(...);
extern "C" long long func_0079ec14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00618404;
extern "C" unsigned long UNK_0061841c;
extern "C" unsigned long UNK_00618434;
extern "C" unsigned long UNK_0061844c;
extern "C" unsigned long UNK_00618464;
extern "C" unsigned long UNK_006184bc;
extern "C" unsigned long UNK_006184e2;
extern "C" unsigned long UNK_00618528;
extern "C" unsigned long UNK_00618550;
extern "C" unsigned long UNK_00618564;
extern "C" unsigned long UNK_006185b6;
extern "C" unsigned long UNK_006185ce;
extern "C" unsigned long UNK_00618600;
extern "C" unsigned long UNK_0061860c;
extern "C" unsigned long UNK_0061861c;
extern "C" unsigned long UNK_00618656;
extern "C" unsigned long UNK_006186f8;
extern "C" unsigned long UNK_00618730;
extern "C" unsigned long UNK_006187b6;
extern "C" unsigned long UNK_006187e6;
extern "C" unsigned long UNK_00618836;
extern "C" unsigned long UNK_006188ea;
extern "C" unsigned long UNK_00618906;
extern "C" unsigned long UNK_00618914;
extern "C" unsigned long UNK_00618946;
extern "C" unsigned long UNK_0061894a;
extern "C" unsigned long UNK_00618960;
extern "C" unsigned long UNK_006189cc;
extern "C" unsigned long UNK_006189fc;
extern "C" unsigned long UNK_00618a1a;
extern "C" unsigned long UNK_00618a28;
extern "C" unsigned long UNK_00618aba;
extern "C" unsigned long UNK_00618abe;
extern "C" unsigned long UNK_00618c5a;
extern "C" unsigned long UNK_00618c96;
extern "C" unsigned long UNK_00618cc2;
extern "C" unsigned long UNK_00618cde;
extern "C" unsigned long UNK_00618cfa;
extern "C" unsigned long UNK_00618d16;
extern "C" unsigned long UNK_00618d32;
extern "C" unsigned long UNK_00618d4e;
extern "C" unsigned long UNK_00618d6a;
extern "C" unsigned long UNK_00618e40;
extern "C" unsigned long UNK_00618ff4;
extern "C" unsigned long UNK_00619088;
extern "C" unsigned long UNK_00619092;
extern "C" unsigned long UNK_00619286;
extern "C" unsigned long UNK_0061929c;
extern "C" unsigned long UNK_006192d6;
extern "C" unsigned long UNK_006193a6;
extern "C" unsigned long UNK_006193b6;
extern "C" unsigned long UNK_006193c4;
extern "C" unsigned long UNK_00619470;
extern "C" unsigned long UNK_00619488;
extern "C" unsigned long UNK_006194b8;
extern "C" unsigned long UNK_00619500;
extern "C" unsigned long UNK_0061950e;
extern "C" unsigned long UNK_00619540;
extern "C" unsigned long UNK_006195ba;
extern "C" unsigned long UNK_006195d2;
extern "C" unsigned long UNK_006195f6;
extern "C" unsigned long UNK_00619606;
extern "C" unsigned long UNK_00619618;
extern "C" unsigned long UNK_00619634;
extern "C" unsigned long UNK_006196f4;
extern "C" unsigned long UNK_00619704;
extern "C" unsigned long UNK_00619712;
extern "C" unsigned long UNK_006197a4;
extern "C" unsigned long UNK_006197c2;
extern "C" unsigned long UNK_006197c6;
extern "C" unsigned long UNK_006197ea;
extern "C" unsigned long UNK_00619818;
extern "C" unsigned long UNK_00619830;
extern "C" unsigned long UNK_0061989c;
extern "C" unsigned long UNK_006198ac;
extern "C" unsigned long UNK_006198ae;
extern "C" unsigned long UNK_006198de;
extern "C" unsigned long UNK_00619904;
extern "C" unsigned long UNK_0061991e;
extern "C" unsigned long UNK_006199b6;
extern "C" unsigned long UNK_006199d4;
extern "C" unsigned long UNK_006199d6;
extern "C" unsigned long UNK_00619a06;
extern "C" unsigned long UNK_00619a7e;
extern "C" unsigned long UNK_00619ac4;
extern "C" unsigned long UNK_00619ad4;
extern "C" unsigned long UNK_00619ae6;
extern "C" unsigned long UNK_00619e96;
extern "C" unsigned long UNK_00619eba;
extern "C" unsigned long UNK_00619f08;
extern "C" unsigned long UNK_00619fa0;
extern "C" unsigned long UNK_00619fe6;
extern "C" unsigned long UNK_0061a02a;
extern "C" unsigned long UNK_0061a068;
extern "C" unsigned long UNK_0061a0a8;
extern "C" unsigned long UNK_0061a0ea;
extern "C" unsigned long UNK_0061a178;
extern "C" unsigned long UNK_0061a1b0;
extern "C" unsigned long UNK_0061a1e4;
extern "C" unsigned long UNK_0061a218;
extern "C" unsigned long UNK_0061a24c;
extern "C" unsigned long UNK_0061a2ca;
extern "C" unsigned long UNK_0061a302;
extern "C" unsigned long UNK_0061a3a6;
extern "C" unsigned long UNK_0061a532;
extern "C" unsigned long UNK_0061a91a;
extern "C" unsigned long UNK_0061a99e;
extern "C" unsigned long UNK_0061a9dc;
extern "C" unsigned long UNK_0061aa98;
extern "C" unsigned long UNK_0061aac0;
extern "C" unsigned long UNK_0061aade;
extern "C" unsigned long UNK_0061ab26;
extern "C" unsigned long UNK_0061ab70;
extern "C" unsigned long UNK_0061abba;
extern "C" unsigned long UNK_0061ac04;
extern "C" unsigned long UNK_0061ac4e;
extern "C" unsigned long UNK_0061ac98;
extern "C" unsigned long UNK_0061acde;
extern "C" unsigned long UNK_0061ad28;
extern "C" unsigned long UNK_0061adaa;
extern "C" unsigned long UNK_0061add8;
extern "C" unsigned long UNK_0061ae6e;
extern "C" unsigned long UNK_0061ae92;
extern "C" unsigned long UNK_0061aee0;
extern "C" unsigned long _UNK_00618408;
extern "C" unsigned long _UNK_00618420;
extern "C" unsigned long _UNK_00618438;
extern "C" unsigned long _UNK_00618450;
extern "C" unsigned long _UNK_00618468;
extern "C" unsigned long _UNK_00618514;
extern "C" unsigned long _UNK_00618518;
extern "C" unsigned long _UNK_0061852c;
extern "C" unsigned long _UNK_00618554;
extern "C" unsigned long _UNK_00618660;
extern "C" unsigned long _UNK_00618664;
extern "C" unsigned long _UNK_00618668;
extern "C" unsigned long _UNK_0061866c;
extern "C" unsigned long _UNK_00618670;
extern "C" unsigned long _UNK_00618674;
extern "C" unsigned long _UNK_00618678;
extern "C" unsigned long _UNK_00618690;
extern "C" unsigned long _UNK_006186b4;
extern "C" unsigned long _UNK_006186c8;
extern "C" unsigned long _UNK_006186dc;
extern "C" unsigned long _UNK_00618700;
extern "C" unsigned long _UNK_00618704;
extern "C" unsigned long _UNK_00618770;
extern "C" unsigned long _UNK_00618774;
extern "C" unsigned long _UNK_00618778;
extern "C" unsigned long _UNK_00618890;
extern "C" unsigned long _UNK_00618894;
extern "C" unsigned long _UNK_00618898;
extern "C" unsigned long _UNK_0061889c;
extern "C" unsigned long _UNK_006188a0;
extern "C" unsigned long _UNK_00618988;
extern "C" unsigned long _UNK_0061898c;
extern "C" unsigned long _UNK_00618990;
extern "C" unsigned long _UNK_00618994;
extern "C" unsigned long _UNK_00618998;
extern "C" unsigned long _UNK_0061899c;
extern "C" unsigned long _UNK_006189a0;
extern "C" unsigned long _UNK_006189a4;
extern "C" unsigned long _UNK_006189b8;
extern "C" unsigned long _UNK_006189bc;
extern "C" unsigned long _UNK_006189d0;
extern "C" unsigned long _UNK_00618a00;
extern "C" unsigned long _UNK_00618a90;
extern "C" unsigned long _UNK_00618a94;
extern "C" unsigned long _UNK_00618a98;
extern "C" unsigned long _UNK_00618a9c;
extern "C" unsigned long _UNK_00618aa0;
extern "C" unsigned long _UNK_00618c34;
extern "C" unsigned long _UNK_00618c38;
extern "C" unsigned long _UNK_00618c3c;
extern "C" unsigned long _UNK_00618c40;
extern "C" unsigned long _UNK_00618c44;
extern "C" unsigned long _UNK_00618d94;
extern "C" unsigned long _UNK_00618d98;
extern "C" unsigned long _UNK_00618d9c;
extern "C" unsigned long _UNK_00618da0;
extern "C" unsigned long _UNK_00618da4;
extern "C" unsigned long _UNK_00618da8;
extern "C" unsigned long _UNK_00618dac;
extern "C" unsigned long _UNK_00618db0;
extern "C" unsigned long _UNK_00618db4;
extern "C" unsigned long _UNK_00618db8;
extern "C" unsigned long _UNK_00618dbc;
extern "C" unsigned long _UNK_00618dc0;
extern "C" unsigned long _UNK_00618dc4;
extern "C" unsigned long _UNK_00618dc8;
extern "C" unsigned long _UNK_00618dcc;
extern "C" unsigned long _UNK_00618dd0;
extern "C" unsigned long _UNK_00618dd4;
extern "C" unsigned long _UNK_00618fc4;
extern "C" unsigned long _UNK_00618fc8;
extern "C" unsigned long _UNK_00618fcc;
extern "C" unsigned long _UNK_00618fd0;
extern "C" unsigned long _UNK_00618fd4;
extern "C" unsigned long _UNK_00618fd8;
extern "C" unsigned long _UNK_00618fdc;
extern "C" unsigned long _UNK_00618fe0;
extern "C" unsigned long _UNK_00618fe4;
extern "C" unsigned long _UNK_00619010;
extern "C" unsigned long _UNK_00619154;
extern "C" unsigned long _UNK_00619158;
extern "C" unsigned long _UNK_00619170;
extern "C" unsigned long _UNK_00619450;
extern "C" unsigned long _UNK_00619454;
extern "C" unsigned long _UNK_00619458;
extern "C" unsigned long _UNK_0061945c;
extern "C" unsigned long _UNK_00619460;
extern "C" unsigned long _UNK_00619464;
extern "C" unsigned long _UNK_006196b0;
extern "C" unsigned long _UNK_006196b4;
extern "C" unsigned long _UNK_006196b8;
extern "C" unsigned long _UNK_006196bc;
extern "C" unsigned long _UNK_006196c0;
extern "C" unsigned long _UNK_006196c4;
extern "C" unsigned long _UNK_006196c8;
extern "C" unsigned long _UNK_006196cc;
extern "C" unsigned long _UNK_006196d0;
extern "C" unsigned long _UNK_006196d4;
extern "C" unsigned long _UNK_006196d8;
extern "C" unsigned long _UNK_006196dc;
extern "C" unsigned long _UNK_0061976c;
extern "C" unsigned long _UNK_00619770;
extern "C" unsigned long _UNK_00619774;
extern "C" unsigned long _UNK_00619870;
extern "C" unsigned long _UNK_00619874;
extern "C" unsigned long _UNK_00619878;
extern "C" unsigned long _UNK_0061987c;
extern "C" unsigned long _UNK_00619880;
extern "C" unsigned long _UNK_00619884;
extern "C" unsigned long _UNK_00619974;
extern "C" unsigned long _UNK_00619978;
extern "C" unsigned long _UNK_0061997c;
extern "C" unsigned long _UNK_00619980;
extern "C" unsigned long _UNK_00619984;
extern "C" unsigned long _UNK_00619988;
extern "C" unsigned long _UNK_00619a9c;
extern "C" unsigned long _UNK_00619aa0;
extern "C" unsigned long _UNK_00619aa4;
extern "C" unsigned long _UNK_00619aa8;
extern "C" unsigned long _UNK_00619aac;
extern "C" unsigned long _UNK_00619b14;
extern "C" unsigned long _UNK_00619b18;
extern "C" unsigned long _UNK_00619b1c;
extern "C" unsigned long _UNK_00619eec;
extern "C" unsigned long _UNK_00619ef0;
extern "C" unsigned long _UNK_0061a260;
extern "C" unsigned long _UNK_0061a264;
extern "C" unsigned long _UNK_0061a268;
extern "C" unsigned long _UNK_0061a26c;
extern "C" unsigned long _UNK_0061a270;
extern "C" unsigned long _UNK_0061a274;
extern "C" unsigned long _UNK_0061a278;
extern "C" unsigned long _UNK_0061a27c;
extern "C" unsigned long _UNK_0061a280;
extern "C" unsigned long _UNK_0061a284;
extern "C" unsigned long _UNK_0061a288;
extern "C" unsigned long _UNK_0061a28c;
extern "C" unsigned long _UNK_0061a290;
extern "C" unsigned long _UNK_0061a294;
extern "C" unsigned long _UNK_0061a298;
extern "C" unsigned long _UNK_0061a29c;
extern "C" unsigned long _UNK_0061a2a0;
extern "C" unsigned long _UNK_0061a2a4;
extern "C" unsigned long _UNK_0061a3f0;
extern "C" unsigned long _UNK_0061a3f4;
extern "C" unsigned long _UNK_0061a3f8;
extern "C" unsigned long _UNK_0061a5b8;
extern "C" unsigned long _UNK_0061a5bc;
extern "C" unsigned long _UNK_0061aa60;
extern "C" unsigned long _UNK_0061aa64;
extern "C" unsigned long _UNK_0061aa68;
extern "C" unsigned long _UNK_0061aa6c;
extern "C" unsigned long _UNK_0061aa70;
extern "C" unsigned long _UNK_0061aa74;
extern "C" unsigned long _UNK_0061aa78;
extern "C" unsigned long _UNK_0061aa7c;
extern "C" unsigned long _UNK_0061aa80;
extern "C" unsigned long _UNK_0061ade4;
extern "C" unsigned long _UNK_0061ade8;
extern "C" unsigned long _UNK_0061adec;
extern "C" unsigned long _UNK_0061adf0;
extern "C" unsigned long _UNK_0061adf4;
extern "C" unsigned long _UNK_0061adf8;
extern "C" unsigned long _UNK_0061adfc;
extern "C" unsigned long _UNK_0061ae00;
extern "C" unsigned long _UNK_0061ae04;
extern "C" unsigned long _UNK_0061ae08;
extern "C" unsigned long _UNK_0061ae0c;
extern "C" unsigned long _UNK_0061ae10;
extern "C" unsigned long _UNK_0061ae14;
extern "C" unsigned long _UNK_0061ae18;
extern "C" unsigned long _UNK_0061ae1c;
extern "C" unsigned long _UNK_0061ae20;
extern "C" unsigned long _UNK_0061ae24;
extern "C" unsigned long _UNK_0061af14;
extern "C" unsigned long _UNK_0061af18;
extern "C" unsigned long _UNK_0061af1c;
extern "C" unsigned long _UNK_0061af20;
extern "C" unsigned long _UNK_0061af24;
extern "C" unsigned long _UNK_0061af28;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_00618404;
extern "C" unsigned long g_00618408;
extern "C" unsigned long g_0061841c;
extern "C" unsigned long g_00618420;
extern "C" unsigned long g_00618434;
extern "C" unsigned long g_00618438;
extern "C" unsigned long g_0061844c;
extern "C" unsigned long g_00618450;
extern "C" unsigned long g_00618464;
extern "C" unsigned long g_00618468;
extern "C" unsigned long g_006184bc;
extern "C" unsigned long g_006184e2;
extern "C" unsigned long g_00618514;
extern "C" unsigned long g_00618518;
extern "C" unsigned long g_00618528;
extern "C" unsigned long g_0061852c;
extern "C" unsigned long g_00618550;
extern "C" unsigned long g_00618554;
extern "C" unsigned long g_00618564;
extern "C" unsigned long g_006185b6;
extern "C" unsigned long g_006185ce;
extern "C" unsigned long g_00618600;
extern "C" unsigned long g_0061860c;
extern "C" unsigned long g_0061861c;
extern "C" unsigned long g_00618656;
extern "C" unsigned long g_00618660;
extern "C" unsigned long g_00618664;
extern "C" unsigned long g_00618668;
extern "C" unsigned long g_0061866c;
extern "C" unsigned long g_00618670;
extern "C" unsigned long g_00618674;
extern "C" unsigned long g_00618678;
extern "C" unsigned long g_00618690;
extern "C" unsigned long g_006186b4;
extern "C" unsigned long g_006186c8;
extern "C" unsigned long g_006186dc;
extern "C" unsigned long g_006186f8;
extern "C" unsigned long g_00618700;
extern "C" unsigned long g_00618704;
extern "C" unsigned long g_00618730;
extern "C" unsigned long g_00618770;
extern "C" unsigned long g_00618774;
extern "C" unsigned long g_00618778;
extern "C" unsigned long g_006187b6;
extern "C" unsigned long g_006187e6;
extern "C" unsigned long g_00618836;
extern "C" unsigned long g_00618890;
extern "C" unsigned long g_00618894;
extern "C" unsigned long g_00618898;
extern "C" unsigned long g_0061889c;
extern "C" unsigned long g_006188a0;
extern "C" unsigned long g_006188ea;
extern "C" unsigned long g_00618906;
extern "C" unsigned long g_00618914;
extern "C" unsigned long g_00618946;
extern "C" unsigned long g_0061894a;
extern "C" unsigned long g_00618960;
extern "C" unsigned long g_00618988;
extern "C" unsigned long g_0061898c;
extern "C" unsigned long g_00618990;
extern "C" unsigned long g_00618994;
extern "C" unsigned long g_00618998;
extern "C" unsigned long g_0061899c;
extern "C" unsigned long g_006189a0;
extern "C" unsigned long g_006189a4;
extern "C" unsigned long g_006189b8;
extern "C" unsigned long g_006189bc;
extern "C" unsigned long g_006189cc;
extern "C" unsigned long g_006189d0;
extern "C" unsigned long g_006189fc;
extern "C" unsigned long g_00618a00;
extern "C" unsigned long g_00618a1a;
extern "C" unsigned long g_00618a28;
extern "C" unsigned long g_00618a90;
extern "C" unsigned long g_00618a94;
extern "C" unsigned long g_00618a98;
extern "C" unsigned long g_00618a9c;
extern "C" unsigned long g_00618aa0;
extern "C" unsigned long g_00618aba;
extern "C" unsigned long g_00618abe;
extern "C" unsigned long g_00618c34;
extern "C" unsigned long g_00618c38;
extern "C" unsigned long g_00618c3c;
extern "C" unsigned long g_00618c40;
extern "C" unsigned long g_00618c44;
extern "C" unsigned long g_00618c5a;
extern "C" unsigned long g_00618c96;
extern "C" unsigned long g_00618cc2;
extern "C" unsigned long g_00618cde;
extern "C" unsigned long g_00618cfa;
extern "C" unsigned long g_00618d16;
extern "C" unsigned long g_00618d32;
extern "C" unsigned long g_00618d4e;
extern "C" unsigned long g_00618d6a;
extern "C" unsigned long g_00618d94;
extern "C" unsigned long g_00618d98;
extern "C" unsigned long g_00618d9c;
extern "C" unsigned long g_00618da0;
extern "C" unsigned long g_00618da4;
extern "C" unsigned long g_00618da8;
extern "C" unsigned long g_00618dac;
extern "C" unsigned long g_00618db0;
extern "C" unsigned long g_00618db4;
extern "C" unsigned long g_00618db8;
extern "C" unsigned long g_00618dbc;
extern "C" unsigned long g_00618dc0;
extern "C" unsigned long g_00618dc4;
extern "C" unsigned long g_00618dc8;
extern "C" unsigned long g_00618dcc;
extern "C" unsigned long g_00618dd0;
extern "C" unsigned long g_00618dd4;
extern "C" unsigned long g_00618e40;
extern "C" unsigned long g_00618fc4;
extern "C" unsigned long g_00618fc8;
extern "C" unsigned long g_00618fcc;
extern "C" unsigned long g_00618fd0;
extern "C" unsigned long g_00618fd4;
extern "C" unsigned long g_00618fd8;
extern "C" unsigned long g_00618fdc;
extern "C" unsigned long g_00618fe0;
extern "C" unsigned long g_00618fe4;
extern "C" unsigned long g_00618ff4;
extern "C" unsigned long g_00619010;
extern "C" unsigned long g_00619088;
extern "C" unsigned long g_00619092;
extern "C" unsigned long g_00619154;
extern "C" unsigned long g_00619158;
extern "C" unsigned long g_00619170;
extern "C" unsigned long g_00619286;
extern "C" unsigned long g_0061929c;
extern "C" unsigned long g_006192d6;
extern "C" unsigned long g_006193a6;
extern "C" unsigned long g_006193b6;
extern "C" unsigned long g_006193c4;
extern "C" unsigned long g_00619450;
extern "C" unsigned long g_00619454;
extern "C" unsigned long g_00619458;
extern "C" unsigned long g_0061945c;
extern "C" unsigned long g_00619460;
extern "C" unsigned long g_00619464;
extern "C" unsigned long g_00619470;
extern "C" unsigned long g_00619488;
extern "C" unsigned long g_006194b8;
extern "C" unsigned long g_00619500;
extern "C" unsigned long g_0061950e;
extern "C" unsigned long g_00619540;
extern "C" unsigned long g_006195ba;
extern "C" unsigned long g_006195d2;
extern "C" unsigned long g_006195f6;
extern "C" unsigned long g_00619606;
extern "C" unsigned long g_00619618;
extern "C" unsigned long g_00619634;
extern "C" unsigned long g_006196b0;
extern "C" unsigned long g_006196b4;
extern "C" unsigned long g_006196b8;
extern "C" unsigned long g_006196bc;
extern "C" unsigned long g_006196c0;
extern "C" unsigned long g_006196c4;
extern "C" unsigned long g_006196c8;
extern "C" unsigned long g_006196cc;
extern "C" unsigned long g_006196d0;
extern "C" unsigned long g_006196d4;
extern "C" unsigned long g_006196d8;
extern "C" unsigned long g_006196dc;
extern "C" unsigned long g_006196f4;
extern "C" unsigned long g_00619704;
extern "C" unsigned long g_00619712;
extern "C" unsigned long g_0061976c;
extern "C" unsigned long g_00619770;
extern "C" unsigned long g_00619774;
extern "C" unsigned long g_006197a4;
extern "C" unsigned long g_006197c2;
extern "C" unsigned long g_006197c6;
extern "C" unsigned long g_006197ea;
extern "C" unsigned long g_00619818;
extern "C" unsigned long g_00619830;
extern "C" unsigned long g_00619870;
extern "C" unsigned long g_00619874;
extern "C" unsigned long g_00619878;
extern "C" unsigned long g_0061987c;
extern "C" unsigned long g_00619880;
extern "C" unsigned long g_00619884;
extern "C" unsigned long g_0061989c;
extern "C" unsigned long g_006198ac;
extern "C" unsigned long g_006198ae;
extern "C" unsigned long g_006198de;
extern "C" unsigned long g_00619904;
extern "C" unsigned long g_0061991e;
extern "C" unsigned long g_00619974;
extern "C" unsigned long g_00619978;
extern "C" unsigned long g_0061997c;
extern "C" unsigned long g_00619980;
extern "C" unsigned long g_00619984;
extern "C" unsigned long g_00619988;
extern "C" unsigned long g_006199b6;
extern "C" unsigned long g_006199d4;
extern "C" unsigned long g_006199d6;
extern "C" unsigned long g_00619a06;
extern "C" unsigned long g_00619a7e;
extern "C" unsigned long g_00619a9c;
extern "C" unsigned long g_00619aa0;
extern "C" unsigned long g_00619aa4;
extern "C" unsigned long g_00619aa8;
extern "C" unsigned long g_00619aac;
extern "C" unsigned long g_00619ac4;
extern "C" unsigned long g_00619ad4;
extern "C" unsigned long g_00619ae6;
extern "C" unsigned long g_00619b14;
extern "C" unsigned long g_00619b18;
extern "C" unsigned long g_00619b1c;
extern "C" unsigned long g_00619e96;
extern "C" unsigned long g_00619eba;
extern "C" unsigned long g_00619eec;
extern "C" unsigned long g_00619ef0;
extern "C" unsigned long g_00619f08;
extern "C" unsigned long g_00619fa0;
extern "C" unsigned long g_00619fe6;
extern "C" unsigned long g_0061a02a;
extern "C" unsigned long g_0061a068;
extern "C" unsigned long g_0061a0a8;
extern "C" unsigned long g_0061a0ea;
extern "C" unsigned long g_0061a178;
extern "C" unsigned long g_0061a1b0;
extern "C" unsigned long g_0061a1e4;
extern "C" unsigned long g_0061a218;
extern "C" unsigned long g_0061a24c;
extern "C" unsigned long g_0061a260;
extern "C" unsigned long g_0061a264;
extern "C" unsigned long g_0061a268;
extern "C" unsigned long g_0061a26c;
extern "C" unsigned long g_0061a270;
extern "C" unsigned long g_0061a274;
extern "C" unsigned long g_0061a278;
extern "C" unsigned long g_0061a27c;
extern "C" unsigned long g_0061a280;
extern "C" unsigned long g_0061a284;
extern "C" unsigned long g_0061a288;
extern "C" unsigned long g_0061a28c;
extern "C" unsigned long g_0061a290;
extern "C" unsigned long g_0061a294;
extern "C" unsigned long g_0061a298;
extern "C" unsigned long g_0061a29c;
extern "C" unsigned long g_0061a2a0;
extern "C" unsigned long g_0061a2a4;
extern "C" unsigned long g_0061a2ca;
extern "C" unsigned long g_0061a302;
extern "C" unsigned long g_0061a3a6;
extern "C" unsigned long g_0061a3f0;
extern "C" unsigned long g_0061a3f4;
extern "C" unsigned long g_0061a3f8;
extern "C" unsigned long g_0061a532;
extern "C" unsigned long g_0061a5b8;
extern "C" unsigned long g_0061a5bc;
extern "C" unsigned long g_0061a91a;
extern "C" unsigned long g_0061a99e;
extern "C" unsigned long g_0061a9dc;
extern "C" unsigned long g_0061aa60;
extern "C" unsigned long g_0061aa64;
extern "C" unsigned long g_0061aa68;
extern "C" unsigned long g_0061aa6c;
extern "C" unsigned long g_0061aa70;
extern "C" unsigned long g_0061aa74;
extern "C" unsigned long g_0061aa78;
extern "C" unsigned long g_0061aa7c;
extern "C" unsigned long g_0061aa80;
extern "C" unsigned long g_0061aa98;
extern "C" unsigned long g_0061aac0;
extern "C" unsigned long g_0061aade;
extern "C" unsigned long g_0061ab26;
extern "C" unsigned long g_0061ab70;
extern "C" unsigned long g_0061abba;
extern "C" unsigned long g_0061ac04;
extern "C" unsigned long g_0061ac4e;
extern "C" unsigned long g_0061ac98;
extern "C" unsigned long g_0061acde;
extern "C" unsigned long g_0061ad28;
extern "C" unsigned long g_0061adaa;
extern "C" unsigned long g_0061add8;
extern "C" unsigned long g_0061ade4;
extern "C" unsigned long g_0061ade8;
extern "C" unsigned long g_0061adec;
extern "C" unsigned long g_0061adf0;
extern "C" unsigned long g_0061adf4;
extern "C" unsigned long g_0061adf8;
extern "C" unsigned long g_0061adfc;
extern "C" unsigned long g_0061ae00;
extern "C" unsigned long g_0061ae04;
extern "C" unsigned long g_0061ae08;
extern "C" unsigned long g_0061ae0c;
extern "C" unsigned long g_0061ae10;
extern "C" unsigned long g_0061ae14;
extern "C" unsigned long g_0061ae18;
extern "C" unsigned long g_0061ae1c;
extern "C" unsigned long g_0061ae20;
extern "C" unsigned long g_0061ae24;
extern "C" unsigned long g_0061ae6e;
extern "C" unsigned long g_0061ae92;
extern "C" unsigned long g_0061aee0;
extern "C" unsigned long g_0061af14;
extern "C" unsigned long g_0061af18;
extern "C" unsigned long g_0061af1c;
extern "C" unsigned long g_0061af20;
extern "C" unsigned long g_0061af24;
extern "C" unsigned long g_0061af28;
bool PKHallPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKHallPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHallPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHallPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHallPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

PKHallPresenter::~PKHallPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006184bc + g_00618514);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006184e2 + g_00618518,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKHallPresenter::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 auStack_1c [2];
  
  puVar3 = *(undefined4 **)(&g_00618564 + g_00618660);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*puVar3)))));
  iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar1),(int)(0x3f800000))));
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(0x3f800000)))));
    *puVar3 = uVar1;
    iVar2 = ((PKData *)this)->getIns();
    if ((*(char *)(iVar2 + 0x14) == '\0') ||
       (iVar2 = ((PKData *)this)->getIns(), *(int *)(iVar2 + 0x2c) < 1)) {
      piVar4 = *(int **)(*(int *)(((int)this) + 0x24) + 0x150);
      (**(code **)(*piVar4 + 0x234))(piVar4,&g_00618656 + g_00618678);
    }
    else {
      uVar6 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(p1))));
      uVar1 = (undefined4)((undefined4)((ulonglong)uVar6 >> 0x20));
      cocos2d::CCLog((char const*)&g_006185b6 + g_00618664, uVar1, (int)uVar6, uVar1);
      iVar2 = ((PKData *)this)->getIns();
      *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + -1;
      iVar2 = ((PKData *)this)->getIns();
      cocos2d::CCLog((char const*)&g_006185ce + g_00618668, *(undefined4 *)(iVar2 + 0x2c));
      piVar4 = *(int **)(*(int *)(((int)this) + 0x24) + 0x150);
      pcVar5 = *(code **)(*piVar4 + 0x234);
      iVar2 = ((PKData *)this)->getIns();
      0 /* ctorZero */;
      (*pcVar5)(piVar4,auStack_1c[0]);
      func_0079e2bc(auStack_1c);
    }
    iVar2 = g_00618674;
    if ((**(char **)(&g_00618600 + g_0061866c) != '\0') &&
       (**(char **)(&g_0061860c + g_00618670) != '\0')) {
      **(char **)(&g_00618600 + g_0061866c) = '\0';
      ((PKOnlineManager *)this)->setInfo((char const*)&g_0061861c + iVar2);
      piVar4 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      (**(code **)(*piVar4 + 0x90))(piVar4,0);
      piVar4 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
      (**(code **)(*piVar4 + 0x90))(piVar4,1);
    }
    return;
  }
  *puVar3 = uVar1;
  return;
}

void PKHallPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  ((PKOnlineManager *)this)->exitLobby();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00618690);
  return;
}

void PKHallPresenter::openSelectUI(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xb);
  return;
}

void PKHallPresenter::onUser(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006186b4);
  return;
}

void PKHallPresenter::onReward(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006186c8);
  return;
}

void PKHallPresenter::openRankUI()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006186dc);
  return;
}





undefined4 PKHallPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

undefined4 PKHallPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((PKData *)this)->getIns();
  uVar2 = (undefined4)(4);
  if (*(char *)(iVar1 + 0x14) != '\0') {
    iVar1 = ((PKData *)4)->getIns();
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(iVar1 + 0x50) + -0xc));
  }
  return uVar2;
}


void PKHallPresenter::reNameFail(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_88;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_00618aba + g_00618c34),
                              *(undefined4 *)(&g_00618abe + g_00618c38),0), iVar1 != 0)) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((cocos2d::CCString *)iVar1)->getCString());
    ((Toast *)uVar2)->showToast((char const*)uVar3);
  }
  iVar1 = ((CircusData *)this)->getMe();
  func_0079e53c(auStack_70,iVar1 + 0x70);
  uStack_6c = (undefined4)(*(undefined4 *)(iVar1 + 0x74));
  uStack_68 = (undefined4)(*(undefined4 *)(iVar1 + 0x78));
  uStack_64 = (undefined4)(*(undefined4 *)(iVar1 + 0x7c));
  uStack_60 = (undefined4)(*(undefined4 *)(iVar1 + 0x80));
  uStack_5c = (undefined4)(*(undefined4 *)(iVar1 + 0x84));
  uStack_58 = (undefined4)(*(undefined4 *)(iVar1 + 0x88));
  uStack_54 = (undefined4)(*(undefined4 *)(iVar1 + 0x8c));
  uStack_50 = (undefined4)(*(undefined4 *)(iVar1 + 0x90));
  uStack_48 = (undefined4)(*(undefined4 *)(iVar1 + 0x98));
  uStack_44 = (undefined4)(*(undefined4 *)(iVar1 + 0x9c));
  func_0079e53c(auStack_40,iVar1 + 0xa0);
  iVar8 = *(int *)(iVar1 + 0xa8) - *(int *)(iVar1 + 0xa4);
  uVar5 = (undefined4)(g_00618c3c * (iVar8 >> 4));
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  if (uVar5 == 0) {
    iStack_88 = 0;
  }
  else {
    if (g_00618c40 <= uVar5 && uVar5 - g_00618c40 != 0) {
      func_0079e5bc();
    }
    iStack_88 = ((long long)::operator new((size_t)(iVar8)));
  }
  iStack_34 = iStack_88 + iVar8;
  iStack_3c = iStack_88;
  iStack_38 = iStack_88;
  iVar6 = *(int *)(iVar1 + 0xa8);
  iVar7 = *(int *)(iVar1 + 0xa4);
  iVar9 = iStack_88;
  for (iVar8 = iVar7; iVar8 != iVar6; iVar8 = iVar8 + 0x30) {
    if (iVar9 != 0) {
      (void)(((long long)::memcpy((void *)(iVar9),(const void *)(iVar8),(size_t)(0x30))));
    }
    iVar9 = iVar9 + 0x30;
  }
  iStack_38 = iStack_88 + (((uint)(iVar8 - iVar7) >> 4) * g_00618c44 & 0xfffffff) * 0x30;
  func_0079e53c(auStack_30,iVar1 + 0xb0);
  uStack_2c = (undefined4)(*(undefined4 *)(iVar1 + 0xb4));
  uStack_28 = (undefined4)(*(undefined4 *)(iVar1 + 0xb8));
  uStack_24 = (undefined4)(*(undefined4 *)(iVar1 + 0xbc));
  uStack_20 = (undefined4)(*(undefined4 *)(iVar1 + 0xc0));
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar4 + 0x168))(auStack_74,piVar4);
  func_0079e52c(auStack_40,auStack_74);
  func_0079e2bc(auStack_74);
  ((CircusPlayerinfo *)auStack_70)->~CircusPlayerinfo();
  return;
}


void PKHallPresenter::onExit()
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

undefined4 PKHallPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

bool PKHallPresenter::init()
{
  return 1;
}

undefined4 PKHallPresenter::initWithView(PKHallView* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  iVar1 = g_00618fc4;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),
             *(undefined4 *)(&g_00618e40 + g_00618fc8 + g_00618fc4),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
  uVar3 = (undefined4)(*(undefined4 *)(&g_00618e40 + g_00618fcc + iVar1));
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uVar3,0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uVar3,0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
  (**(code **)(*piVar2 + 0x90))(piVar2,0);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x124);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fd0 + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x128);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fd4 + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x130);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fd8 + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 300);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fdc + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x134);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fe0 + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x138);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_00618e40 + g_00618fe4 + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x15c);
  (**(code **)(*piVar2 + 0x21c))(piVar2,((int)this) + 0x18);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x15c);
  (**(code **)(*piVar2 + 0x214))(piVar2,((int)this) + 0x1c);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x15c);
  (**(code **)(*piVar2 + 0x22c))(piVar2,1);
  return 1;
}

undefined8 PKHallPresenter::login(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (undefined4)((int *)((int)this));
  uStack_c = (undefined4)(p1);
  func_0079e45c(&uStack_c,&g_00618ff4 + g_00619010,&uStack_10);
  ((PKOnlineManager *)this)->testLogin((char const*)uStack_c);
  func_0079e2bc(&uStack_c);
  return ghidra_CONCAT44(uStack_c,uStack_10);
}

void PKHallPresenter::enterLobby(cocos2d::CCObject* p1, unsigned int p2)
{
  ((PKOnlineManager *)this)->enterLobby();
  return;
}

void PKHallPresenter::exitRoom(cocos2d::CCObject* p1, unsigned int p2)
{
  ((PKOnlineManager *)this)->exitRoom();
  return;
}

void PKHallPresenter::sendData(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 0x1c))(piVar1,1,extraout_r2,*(code **)(*piVar1 + 0x1c),in_r3);
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->setHeroRoleAttr();
  return;
}

void PKHallPresenter::setLabInfo(char const* p1)
{
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x24) + 0x13c) + 0x234))();
  return;
}

void PKHallPresenter::updatePKHall(char const* p1)
{
  return;
}



void PKHallPresenter::openReward()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_00619170);
  return;
}


void PKHallPresenter::onChangeHeroLineUp()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((MissionSelectHeroData *)this)->create());
  ((MissionSelectHeroData *)uVar1)->initWithMissionType(5);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar2 + 0x44))(piVar2,uVar1);
  PKHallPresenter::refreshUpLine();
  return;
}

// ===== 修复: 补回被误删的函数占位 (21) =====
void PKHallPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 PKHallPresenter::refreshCdInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 PKHallPresenter::refreshInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PKHallPresenter::onCDBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::reName()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 auStack_14 [2];
  
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_00618a1a + (intptr_t)(g_00618a98)));
  ((umeng::MobClickCpp *)((unsigned char *)((char *)&g_00618a28 + (intptr_t)(g_00618a9c))))->buy((char const*)1, g_00618a90, g_00618a94);
  iVar2 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
  func_0079e53c(auStack_14,iVar2 + 0xa0);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x24) + 0x14c);
  (**(code **)(*(int *)(piVar3) + (0x234)))(piVar3,auStack_14[0]);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
  ((UserData *)(2))->subVirNumber(g_00618a90, g_00618a94, 1);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_00618aa0)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_00618aa0);
  }
  func_0079e2bc(auStack_14);
  return;
}

PKHallPresenter::PKHallPresenter()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_54 [52];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(g_00618d94);
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618d98)) + iVar1));
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar4 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar4 + 0x8c;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar3))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_54,(unsigned char *)((char *)&g_00618c96 + (intptr_t)(g_00618d9c)),&uStack_20);
  ((BLLeakUtils *)(uVar3))->addClass((std::string)(char*)auStack_54);
  func_0079e2bc(auStack_54);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618da0)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618cc2 + (intptr_t)(g_00618da4)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618da8)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618cde + (intptr_t)(g_00618dac)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618db0)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618cfa + (intptr_t)(g_00618db4)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618db8)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618d16 + (intptr_t)(g_00618dbc)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618dc0)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618d32 + (intptr_t)(g_00618dc4)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618dc8)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_00618d4e + (intptr_t)(g_00618dcc)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00618c5a + (intptr_t)(g_00618dd0)) + iVar1));
  uStack_1c = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00618d6a + (intptr_t)(g_00618dd4)), 0);
  return;
}

void PKHallPresenter::goToReward()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xdc)),(intptr_t)0);
  if (iVar2 == 0) {
    ((UIManager *)this)->shareManager();
    ((UIManager *)this)->pushCurScrollViewUnEnable();
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xdc);
  }
  return;
}

int * PKHallPresenter::getHeroJson(PlayerData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void PKHallPresenter::onGetReward(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  return;
}

void PKHallPresenter::refreshUpLine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::enterRoom(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::onHeroRank(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_006196f4 + (intptr_t)(g_0061976c)),auStack_34);
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_00619704 + (intptr_t)(g_00619770)),auStack_30);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00619712 + (intptr_t)(g_00619774))));
  uStack_1c = (undefined4)(0);
  ((PlatformHelp *)(&uStack_2c))->getDeviceID();
  ((HttpUtil *)(auStack_28))->request((std::string)(char*)auStack_24, 0, (cocos2d::extension::CCHttpRequest::HttpRequestType)((int)this), (cocos2d::CCObject*)uStack_20, 0 /*memptr*/, uStack_2c);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void PKHallPresenter::onUpLined(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  ((HttpUtil *)(uVar2))->onResponse((cocos2d::extension::CCHttpResponse*)p2);
  uVar2 = (undefined4)(((sir::singleton<HttpUtil, 0> *)this)->instance());
  iVar3 = (undefined4)((void)(((HttpUtil *)(uVar2))->getBodyDic((cocos2d::extension::CCHttpResponse*)p2)),(intptr_t)0);
  if (iVar3 != 0) {
    func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006197a4 + (intptr_t)(g_00619870)),auStack_20);
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
    if (iVar4 == 0) {
      func_0079e2bc(auStack_1c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x619868);
      (*pcVar1)();
    }
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006197c2 + (intptr_t)(g_00619874))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_006197c6 + (intptr_t)(g_00619878))),0));
    func_0079e2bc(auStack_1c);
    iVar4 = (undefined4)(intptr_t)(func_0079e5ec(*(undefined4 *)(iVar4 + 0x14),0x3f800000));
    if (iVar4 == 0) {
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00619818 + (intptr_t)(g_00619880)),auStack_20);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar3))->objectForKey((char const *)auStack_1c));
      uVar6 = (undefined4)(0);
      if (iVar3 != 0) {
        uVar6 = (undefined4)(func_0079e55c(iVar3,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_00619830 + (intptr_t)(g_00619884))),0));
      }
      func_0079e2bc(auStack_1c);
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar6 = (undefined4)(((cocos2d::CCString *)(uVar6))->getCString());
      ((Toast *)(uVar2))->showToast((char const*)uVar6);
    }
    else {
      **(undefined1 **)((unsigned char *)((char *)&g_006197ea + (intptr_t)(g_0061987c))) = 1;
      (**(code **)(**(int **)(*(int *)(((int)this) + 0x24) + 0x118) + 0x90))();
      piVar5 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
      (**(code **)(*(int *)(piVar5) + (0x90)))(piVar5,0);
      ((PKOnlineManager *)this)->enterRoom();
    }
  }
  return;
}

void PKHallPresenter::onAlertSure(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::onReduceCD(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::openRank()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::onGetRank(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::initRankRewards(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKHallPresenter::onInitData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

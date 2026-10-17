#include "UIManager.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "CCString.h"
#include "ItemData.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCLayer.h"
#include "CCInteger.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "UIObject.h"
#include "BLBackPackLayerUI.h"
#include "BLDailySignUI.h"
#include "BLFurnaceUI.h"
#include "BLGameAlertView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLuckyDrawResultUI.h"
#include "BLMainUIMenuUI.h"
#include "BLReChargeDialogUI.h"
#include "BLRebirthChestView.h"
#include "BLTestBeAttackLayerUI.h"
#include "BLUpdatePublishUI.h"
#include "BackPackArrangeUI.h"
#include "BackPackItemData.h"
#include "BuyRoleAlertUI.h"
#include "CallBackViewUI.h"
#include "CardUI.h"
#include "ChallengeFailedResultUI.h"
#include "ChestFestivalUI.h"
#include "ChestItemInfoUI.h"
#include "ChestOneTimeUI.h"
#include "ChestTenTimeUI.h"
#include "ChestUI.h"
#include "EndLessResultUI.h"
#include "EquipGiftUI.h"
#include "EquipUI.h"
#include "ExchangeGiftUI.h"
#include "ExpDanUI.h"
#include "FailedUI.h"
#include "FurnaceSelectUI.h"
#include "GMTestUI.h"
#include "GameAlertUI.h"
#include "GameCrackAlertUI.h"
#include "GamePauseUI.h"
#include "GuideFunctionUI.h"
#include "HeroLineUpUI.h"
#include "ItemDataInfoUI.h"
#include "JianShengSkinUI.h"
#include "LivenessDegreeRewardInfoUI.h"
#include "LoadingLayerUI.h"
#include "MainCityUIUI.h"
#include "MineCollectDefenseUI.h"
#include "MineCollectHeroUI.h"
#include "MineSnatchDefenseUI.h"
#include "MineSnatchHeroUI.h"
#include "MissionBuyRoleUI.h"
#include "MissionCreamSelectUI.h"
#include "MissionMainUI.h"
#include "MissionMirrorUI.h"
#include "MissionSelectRoleUI.h"
#include "MoneyTreeWinResultUI.h"
#include "NormalWinUi.h"
#include "OnSaleUI.h"
#include "PKHeroRankUI.h"
#include "PKOnLineResultUI.h"
#include "PetSkillInfoUI.h"
#include "PracticeHeroUI.h"
#include "QQCoinViewUI.h"
#include "ReChargeUI.h"
#include "RenascenceUI.h"
#include "SignedUI.h"
#include "SkillDetailUI.h"
#include "SuitItemDataInfoUI.h"
#include "SuitUI.h"
#include "SweepHeroUI.h"
#include "TalentChestUI.h"
#include "TalentDrawViewUI.h"
#include "TreasureHeroUI.h"
#include "TreasureItemListUI.h"
#include "TreasureResultUI.h"
#include "WinUI.h"
#include "YuanZhengFailedResultUI.h"
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

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_004ea5f6(...);
extern "C" long long func_004ea60a(...);
extern "C" long long func_004ea678(...);
extern "C" long long func_004ea682(...);
extern "C" long long func_004ea6aa(...);
extern "C" long long func_004ea6b4(...);
extern "C" long long func_004ea6c8(...);
extern "C" long long func_004ea6e6(...);
extern "C" long long func_004ea6fa(...);
extern "C" long long func_004ea756(...);
extern "C" long long func_004ea780(...);
extern "C" long long func_004ea7aa(...);
extern "C" long long func_004ea7d4(...);
extern "C" long long func_004ea7fe(...);
extern "C" long long func_004ea828(...);
extern "C" long long func_004ea852(...);
extern "C" long long func_004ea87c(...);
extern "C" long long func_004ea8a6(...);
extern "C" long long func_004ea8d0(...);
extern "C" long long func_004ea8fa(...);
extern "C" long long func_004ea940(...);
extern "C" long long func_004ea96a(...);
extern "C" long long func_004ea994(...);
extern "C" long long func_004ea9be(...);
extern "C" long long func_004ea9e8(...);
extern "C" long long func_004eaa12(...);
extern "C" long long func_004eaa3c(...);
extern "C" long long func_004eaa66(...);
extern "C" long long func_004eaa90(...);
extern "C" long long func_004eaaba(...);
extern "C" long long func_004eaae0(...);
extern "C" long long func_004eab06(...);
extern "C" long long func_004eab2c(...);
extern "C" long long func_004eab52(...);
extern "C" long long func_004eab78(...);
extern "C" long long func_004eaca8(...);
extern "C" long long func_004eacce(...);
extern "C" long long func_004eacf4(...);
extern "C" long long func_004ead1a(...);
extern "C" long long func_004ead40(...);
extern "C" long long func_004ead66(...);
extern "C" long long func_004ead8c(...);
extern "C" long long func_004eadb2(...);
extern "C" long long func_004eadba(...);
extern "C" long long func_004eade0(...);
extern "C" long long func_004eae06(...);
extern "C" long long func_004eae2c(...);
extern "C" long long func_004eae52(...);
extern "C" long long func_004eae78(...);
extern "C" long long func_004eae9e(...);
extern "C" long long func_004eaec4(...);
extern "C" long long func_004eaeea(...);
extern "C" long long func_004eaf10(...);
extern "C" long long func_004eaf38(...);
extern "C" long long func_004eaf60(...);
extern "C" long long func_004eaf88(...);
extern "C" long long func_004eafb0(...);
extern "C" long long func_004eafb8(...);
extern "C" long long func_004eafc0(...);
extern "C" long long func_004eafc8(...);
extern "C" long long func_004eafd0(...);
extern "C" long long func_004eafd8(...);
extern "C" long long func_004eafe0(...);
extern "C" long long func_004eafe8(...);
extern "C" long long func_004eaff0(...);
extern "C" long long func_004eaff8(...);
extern "C" long long func_004eb000(...);
extern "C" long long func_004eb008(...);
extern "C" long long func_004eb010(...);
extern "C" long long func_004eb018(...);
extern "C" long long func_004eb020(...);
extern "C" long long func_004eb028(...);
extern "C" long long func_004eb030(...);
extern "C" long long func_004eb038(...);
extern "C" long long func_004eb040(...);
extern "C" long long func_004eb048(...);
extern "C" long long func_004eb050(...);
extern "C" long long func_004eb058(...);
extern "C" long long func_004eb060(...);
extern "C" long long func_004eb068(...);
extern "C" long long func_004eb070(...);
extern "C" long long func_004eb078(...);
extern "C" long long func_004eb080(...);
extern "C" long long func_004eb088(...);
extern "C" long long func_004eb090(...);
extern "C" long long func_004eb098(...);
extern "C" long long func_004eb0a0(...);
extern "C" long long func_004eb0a8(...);
extern "C" long long func_004eb0b0(...);
extern "C" long long func_004eb0b8(...);
extern "C" long long func_004eb0c0(...);
extern "C" long long func_004eb0c8(...);
extern "C" long long func_004eb0d0(...);
extern "C" long long func_004eb0d8(...);
extern "C" long long func_004eb0e0(...);
extern "C" long long func_004eb0e8(...);
extern "C" long long func_004eb0f0(...);
extern "C" long long func_004eb0f8(...);
extern "C" long long func_004eb100(...);
extern "C" long long func_004eb108(...);
extern "C" long long func_004eb110(...);
extern "C" long long func_004eb118(...);
extern "C" long long func_004eb120(...);
extern "C" long long func_004eb128(...);
extern "C" long long func_004eb130(...);
extern "C" long long func_004eb138(...);
extern "C" long long func_004eb140(...);
extern "C" long long func_004eb148(...);
extern "C" long long func_004eb150(...);
extern "C" long long func_004eb158(...);
extern "C" long long func_004eb160(...);
extern "C" long long func_004eb168(...);
extern "C" long long func_004eb170(...);
extern "C" long long func_004eb178(...);
extern "C" long long func_004eb180(...);
extern "C" long long func_004eb188(...);
extern "C" long long func_004eb190(...);
extern "C" long long func_004eb198(...);
extern "C" long long func_004eb1a0(...);
extern "C" long long func_004eb1a8(...);
extern "C" long long func_004eb1b0(...);
extern "C" long long func_004eb1b8(...);
extern "C" long long func_004eb1c0(...);
extern "C" long long func_004eb1c8(...);
extern "C" long long func_004eb1d0(...);
extern "C" long long func_004eb1d8(...);
extern "C" long long func_004eb1e0(...);
extern "C" long long func_004eb206(...);
extern "C" long long func_004eb22c(...);
extern "C" long long func_004eb252(...);
extern "C" long long func_004eb278(...);
extern "C" long long func_004eb29e(...);
extern "C" long long func_004eb2bc(...);
extern "C" long long func_004eb2dc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" long long ghidra_SBORROW4(...);
extern "C" unsigned long DAT_004eb9a0;
extern "C" unsigned long UNK_004e1bcc;
extern "C" unsigned long UNK_004ec074;
extern "C" unsigned long UNK_004ec076;
extern "C" unsigned long UNK_004ec0b2;
extern "C" unsigned long UNK_004ec0b4;
extern "C" unsigned long UNK_004ec1a6;
extern "C" unsigned long UNK_004ec1a8;
extern "C" unsigned long UNK_004ec1e4;
extern "C" unsigned long UNK_004ec1e6;
extern "C" unsigned long UNK_004ec3e2;
extern "C" unsigned long UNK_004ec4a0;
extern "C" unsigned long UNK_004ec4a2;
extern "C" unsigned long UNK_004ec4b8;
extern "C" unsigned long UNK_004ec4ba;
extern "C" unsigned long _DAT_004e9b68;
extern "C" unsigned long _DAT_004e9bb0;
extern "C" unsigned long _DAT_004ea924;
extern "C" unsigned long _DAT_004ea928;
extern "C" unsigned long _DAT_004ea92c;
extern "C" unsigned long _DAT_004ea930;
extern "C" unsigned long _DAT_004ea934;
extern "C" unsigned long _DAT_004ea938;
extern "C" unsigned long _DAT_004ea93c;
extern "C" unsigned long _DAT_004eb470;
extern "C" unsigned long _DAT_004eb474;
extern "C" unsigned long _DAT_004eb478;
extern "C" unsigned long _DAT_004eb47c;
extern "C" unsigned long _DAT_004eb52c;
extern "C" unsigned long _DAT_004eb6ec;
extern "C" unsigned long _DAT_004eb6f0;
extern "C" unsigned long _DAT_004eb6f4;
extern "C" unsigned long _DAT_004eb6f8;
extern "C" unsigned long _DAT_004eb6fc;
extern "C" unsigned long _DAT_004eb898;
extern "C" unsigned long _DAT_004eb89c;
extern "C" unsigned long _DAT_004eb8a0;
extern "C" unsigned long _DAT_004eb8a4;
extern "C" unsigned long _DAT_004eb8a8;
extern "C" unsigned long _DAT_004eb960;
extern "C" unsigned long _DAT_004eb99c;
extern "C" unsigned long _DAT_004eb9a0;
extern "C" unsigned long _DAT_004eb9a4;
extern "C" unsigned long _DAT_004ebc30;
extern "C" unsigned long _DAT_004ebca4;
extern "C" unsigned long _DAT_004ebec4;
extern "C" unsigned long _DAT_004ebec8;
extern "C" unsigned long _DAT_004ebecc;
extern "C" unsigned long _DAT_004ebed0;
extern "C" unsigned long _DAT_004ec048;
extern "C" unsigned long _DAT_004ec04c;
extern "C" unsigned long _DAT_004ec050;
extern "C" unsigned long _DAT_004ec054;
extern "C" unsigned long _DAT_004ec300;
extern "C" unsigned long _UNK_004e1c68;
extern "C" unsigned long _UNK_004eb3c8;
extern "C" unsigned long _UNK_004ec180;
extern "C" unsigned long _UNK_004ec184;
extern "C" unsigned long _UNK_004ec188;
extern "C" unsigned long _UNK_004ec18c;
extern "C" unsigned long _UNK_004ec268;
extern "C" unsigned long _UNK_004ec26c;
extern "C" unsigned long _UNK_004ec270;
extern "C" unsigned long _UNK_004ec274;
extern "C" unsigned long _UNK_004ec35c;
extern "C" unsigned long _UNK_004ec404;
extern "C" unsigned long _UNK_004ec540;
extern "C" unsigned long _UNK_004ec544;
extern "C" unsigned long _UNK_004ec548;
extern "C" unsigned long _UNK_004ec54c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long extraout_r1_03;
extern "C" unsigned long extraout_r1_04;
extern "C" unsigned long extraout_r1_05;
extern "C" unsigned long extraout_r1_06;
extern "C" unsigned long extraout_r1_07;
extern "C" unsigned long extraout_r1_08;
extern "C" unsigned long extraout_r1_09;
extern "C" unsigned long extraout_r1_10;
extern "C" unsigned long extraout_r1_11;
extern "C" unsigned long extraout_r1_12;
extern "C" unsigned long extraout_r1_13;
extern "C" unsigned long extraout_r1_14;
extern "C" unsigned long extraout_r1_15;
extern "C" unsigned long extraout_r1_16;
extern "C" unsigned long extraout_r1_17;
extern "C" unsigned long extraout_r1_18;
extern "C" unsigned long extraout_r1_19;
extern "C" unsigned long extraout_r1_20;
extern "C" unsigned long extraout_r1_21;
extern "C" unsigned long extraout_r1_22;
extern "C" unsigned long extraout_r1_23;
extern "C" unsigned long extraout_r1_24;
extern "C" unsigned long extraout_r1_25;
extern "C" unsigned long extraout_r1_26;
extern "C" unsigned long extraout_r1_27;
extern "C" unsigned long extraout_r1_28;
extern "C" unsigned long extraout_r1_29;
extern "C" unsigned long extraout_r1_30;
extern "C" unsigned long extraout_r1_31;
extern "C" unsigned long extraout_r1_32;
extern "C" unsigned long extraout_r1_33;
extern "C" unsigned long extraout_r1_34;
extern "C" unsigned long extraout_r1_35;
extern "C" unsigned long extraout_r1_36;
extern "C" unsigned long extraout_r1_37;
extern "C" unsigned long extraout_r1_38;
extern "C" unsigned long extraout_r1_39;
extern "C" unsigned long extraout_r1_40;
extern "C" unsigned long extraout_r1_41;
extern "C" unsigned long extraout_r1_42;
extern "C" unsigned long extraout_r1_43;
extern "C" unsigned long extraout_r1_44;
extern "C" unsigned long extraout_r1_45;
extern "C" unsigned long extraout_r1_46;
extern "C" unsigned long extraout_r1_47;
extern "C" unsigned long extraout_r1_48;
extern "C" unsigned long extraout_r1_49;
extern "C" unsigned long extraout_r1_50;
extern "C" unsigned long extraout_r1_51;
extern "C" unsigned long extraout_r1_52;
extern "C" unsigned long extraout_r1_53;
extern "C" unsigned long extraout_r1_54;
extern "C" unsigned long extraout_r1_55;
extern "C" unsigned long extraout_r1_56;
extern "C" unsigned long extraout_r1_57;
extern "C" unsigned long extraout_r1_58;
extern "C" unsigned long extraout_r1_59;
extern "C" unsigned long extraout_r1_60;
extern "C" unsigned long extraout_r1_61;
extern "C" unsigned long extraout_r1_62;
extern "C" unsigned long extraout_r1_63;
extern "C" unsigned long extraout_r1_64;
extern "C" unsigned long extraout_r1_65;
extern "C" unsigned long extraout_r1_66;
extern "C" unsigned long extraout_r1_67;
extern "C" unsigned long extraout_r1_68;
extern "C" unsigned long extraout_r1_69;
extern "C" unsigned long extraout_r1_70;
extern "C" unsigned long extraout_r1_71;
extern "C" unsigned long extraout_r1_72;
extern "C" unsigned long extraout_r1_73;
extern "C" unsigned long extraout_r1_74;
extern "C" unsigned long extraout_r1_75;
extern "C" unsigned long extraout_r1_76;
extern "C" unsigned long extraout_r1_77;
extern "C" unsigned long extraout_r1_78;
extern "C" unsigned long extraout_r1_79;
extern "C" unsigned long extraout_r1_80;
extern "C" unsigned long extraout_r1_81;
extern "C" unsigned long extraout_r1_82;
extern "C" unsigned long extraout_r1_83;
extern "C" unsigned long extraout_r1_84;
extern "C" unsigned long extraout_r1_85;
extern "C" unsigned long extraout_r1_86;
extern "C" unsigned long extraout_r1_87;
extern "C" unsigned long extraout_r1_88;
extern "C" unsigned long extraout_r1_89;
extern "C" unsigned long extraout_r1_90;
extern "C" unsigned long extraout_r1_91;
extern "C" unsigned long extraout_r1_92;
extern "C" unsigned long extraout_r1_93;
extern "C" unsigned long extraout_r1_94;
extern "C" unsigned long extraout_r1_95;
extern "C" unsigned long extraout_r1_96;
extern "C" unsigned long extraout_r1_97;
extern "C" unsigned long extraout_r1_98;
extern "C" unsigned long extraout_r1_99;
extern "C" unsigned long extraout_r1_x00100;
extern "C" unsigned long extraout_r1_x00101;
extern "C" unsigned long extraout_r1_x00102;
extern "C" unsigned long extraout_r1_x00103;
extern "C" unsigned long extraout_r1_x00104;
extern "C" unsigned long extraout_r1_x00105;
extern "C" unsigned long extraout_r1_x00106;
extern "C" unsigned long extraout_r1_x00107;
extern "C" unsigned long extraout_r1_x00108;
extern "C" unsigned long extraout_r1_x00109;
extern "C" unsigned long extraout_r1_x00110;
extern "C" unsigned long extraout_r1_x00111;
extern "C" unsigned long extraout_r1_x00112;
extern "C" unsigned long extraout_r1_x00113;
extern "C" unsigned long extraout_r1_x00114;
extern "C" unsigned long extraout_r1_x00115;
extern "C" unsigned long extraout_r1_x00116;
extern "C" unsigned long extraout_r1_x00117;
extern "C" unsigned long extraout_r1_x00118;
extern "C" unsigned long extraout_r1_x00119;
extern "C" unsigned long extraout_r1_x00120;
extern "C" unsigned long extraout_r1_x00121;
extern "C" unsigned long extraout_r1_x00122;
extern "C" unsigned long extraout_r1_x00123;
extern "C" unsigned long extraout_r1_x00124;
extern "C" unsigned long extraout_r1_x00125;
extern "C" unsigned long extraout_r1_x00126;
extern "C" unsigned long extraout_r1_x00127;
extern "C" unsigned long extraout_r1_x00128;
extern "C" unsigned long extraout_r1_x00129;
extern "C" unsigned long extraout_r1_x00130;
extern "C" unsigned long extraout_r1_x00131;
extern "C" unsigned long extraout_r1_x00132;
extern "C" unsigned long extraout_r1_x00133;
extern "C" unsigned long extraout_r1_x00134;
extern "C" unsigned long extraout_r1_x00135;
extern "C" unsigned long extraout_r1_x00136;
extern "C" unsigned long extraout_r1_x00137;
extern "C" unsigned long extraout_r1_x00138;
extern "C" unsigned long extraout_r1_x00139;
extern "C" unsigned long extraout_r1_x00140;
extern "C" unsigned long extraout_r1_x00141;
extern "C" unsigned long extraout_r1_x00142;
extern "C" unsigned long extraout_r1_x00143;
extern "C" unsigned long extraout_r1_x00144;
extern "C" unsigned long extraout_r1_x00145;
extern "C" unsigned long extraout_r1_x00146;
extern "C" unsigned long extraout_r1_x00147;
extern "C" unsigned long extraout_r1_x00148;
extern "C" unsigned long extraout_r1_x00149;
extern "C" unsigned long extraout_r1_x00150;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_004e1bcc;
extern "C" unsigned long g_004e1c68;
extern "C" unsigned long g_004e9b68;
extern "C" unsigned long g_004e9bb0;
extern "C" unsigned long g_004ea924;
extern "C" unsigned long g_004ea928;
extern "C" unsigned long g_004ea92c;
extern "C" unsigned long g_004ea930;
extern "C" unsigned long g_004ea934;
extern "C" unsigned long g_004ea938;
extern "C" unsigned long g_004ea93c;
extern "C" unsigned long g_004eb3c8;
extern "C" unsigned long g_004eb470;
extern "C" unsigned long g_004eb474;
extern "C" unsigned long g_004eb478;
extern "C" unsigned long g_004eb47c;
extern "C" unsigned long g_004eb52c;
extern "C" unsigned long g_004eb6ec;
extern "C" unsigned long g_004eb6f0;
extern "C" unsigned long g_004eb6f4;
extern "C" unsigned long g_004eb6f8;
extern "C" unsigned long g_004eb6fc;
extern "C" unsigned long g_004eb898;
extern "C" unsigned long g_004eb89c;
extern "C" unsigned long g_004eb8a0;
extern "C" unsigned long g_004eb8a4;
extern "C" unsigned long g_004eb8a8;
extern "C" unsigned long g_004eb960;
extern "C" unsigned long g_004eb99c;
extern "C" unsigned long g_004eb9a0;
extern "C" unsigned long g_004eb9a4;
extern "C" unsigned long g_004ebc30;
extern "C" unsigned long g_004ebca4;
extern "C" unsigned long g_004ebec4;
extern "C" unsigned long g_004ebec8;
extern "C" unsigned long g_004ebecc;
extern "C" unsigned long g_004ebed0;
extern "C" unsigned long g_004ec048;
extern "C" unsigned long g_004ec04c;
extern "C" unsigned long g_004ec050;
extern "C" unsigned long g_004ec054;
extern "C" unsigned long g_004ec074;
extern "C" unsigned long g_004ec076;
extern "C" unsigned long g_004ec0b2;
extern "C" unsigned long g_004ec0b4;
extern "C" unsigned long g_004ec180;
extern "C" unsigned long g_004ec184;
extern "C" unsigned long g_004ec188;
extern "C" unsigned long g_004ec18c;
extern "C" unsigned long g_004ec1a6;
extern "C" unsigned long g_004ec1a8;
extern "C" unsigned long g_004ec1e4;
extern "C" unsigned long g_004ec1e6;
extern "C" unsigned long g_004ec268;
extern "C" unsigned long g_004ec26c;
extern "C" unsigned long g_004ec270;
extern "C" unsigned long g_004ec274;
extern "C" unsigned long g_004ec300;
extern "C" unsigned long g_004ec35c;
extern "C" unsigned long g_004ec3e2;
extern "C" unsigned long g_004ec404;
extern "C" unsigned long g_004ec4a0;
extern "C" unsigned long g_004ec4a2;
extern "C" unsigned long g_004ec4b8;
extern "C" unsigned long g_004ec4ba;
extern "C" unsigned long g_004ec540;
extern "C" unsigned long g_004ec544;
extern "C" unsigned long g_004ec548;
extern "C" unsigned long g_004ec54c;
int UIManager::getCurUIId() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void UIManager::setCurUIId(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int UIManager::getLastUIId() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void UIManager::setLastUIId(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

cocos2d::CCLayer* UIManager::getRootLayer() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x1c));
}

void UIManager::setRootLayer(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

UIManager::~UIManager()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  if (*(int *)((int)this + 4*(0xf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xf)) = 0;
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xe)) = 0;
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x11)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}




UIObject *UIManager::getUIObject(int p1)
{
  /* SIG_FIX (R207). Original @0x4db2e4: ldr r0,[r0,#0x20] ; bl CCDictionary::objectForKey(int) ; pop {r3,pc}
     -- i.e. look the id up in the UI dictionary (this+0x20) and RETURN the object (was declared void). */
  cocos2d::CCDictionary *pDict = *(cocos2d::CCDictionary **)((int)this + 0x20);
  if (pDict == 0) { return 0; }
  return (UIObject *)pDict->objectForKey(p1);
}


void UIManager::removeAllUIObjects()
{
  (**(code **)(**(int **)(((int)this) + 0x2c) + 0x104))(*(int **)(((int)this) + 0x2c),1);
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x20))->removeAllObjects();
  return;
}

void UIManager::pushUnEnableScrollView(cocos2d::CCArray* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)p1);
  UIManager::pushUnEnableScrollView((cocos2d::CCArray*)uVar1);
  return;
}


void UIManager::clearUnEnableScrollviewPool()
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x34))->removeAllObjects();
  return;
}


undefined4 UIManager::getCurAllScrollView()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  UIManager::getAllScrollViewChild((cocos2d::CCNode*)*(undefined4 *)(((int)this) + 0x1c), (cocos2d::CCArray*)uVar1);
  return uVar1;
}

void UIManager::pushCurScrollViewUnEnable()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(UIManager::getCurAllScrollView());
  UIManager::pushUnEnableScrollView((cocos2d::CCArray*)uVar1);
  return;
}

void UIManager::pushUi(UIObject* p1)
{
  ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x38));
  return;
}

void UIManager::removeAllPopUi()
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x38))->removeAllObjects();
  return;
}


void UIManager::getGongGaoArrayItem(int p1)
{
  ((cocos2d::CCArray *)this)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x44));
  ((cocos2d::CCString *)this)->getCString();
  return;
}

void UIManager::getGongGaoPngNum()
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x44))->count();
  return;
}

void UIManager::removeGongGaoArrayItem()
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x44))->removeAllObjects();
  return;
}




undefined4 UIManager::shareManager()
{
  /* IMPL_FIX (R219). The old body did operator new(0x48) followed by a ctorZero placeholder, i.e. the
     object was ALLOCATED BUT NEVER CONSTRUCTED, so this+0x20 (the UI dictionary set up by UIManager()
     per R210) was garbage and getUIObject()->objectForKey() crashed (R208/209).
     Fix: file-static instance, run the real constructor, then call init() exactly like the original did. */
  static UIManager *s_pInstance = 0;
  if (s_pInstance == 0)
  {
    s_pInstance = new UIManager();
    CCLog("DIAG_R219 shareManager new instance=%p", (void *)s_pInstance);
    if (s_pInstance != 0) { s_pInstance->init(); }
    CCLog("DIAG_R219 shareManager after init, dict(this+0x20)=%p", (void *)(intptr_t)(*(int *)((int)s_pInstance + 0x20)));
  }
  return (undefined4)(intptr_t)s_pInstance;
}



void UIManager::removeUIByID(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  (**(code **)(**(int **)(((int)this) + 0x2c) + 0xfc))(*(int **)(((int)this) + 0x2c),p1,1);
  piVar1 = (int *)((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x20))->objectForKey(p1)
  ;
  if (piVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
    UIManager::unHideMutexUi((UIObject*)piVar1);
    ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x20))->removeObjectForKey(p1);
    (**(code **)(*piVar1 + 0x40))(piVar1);
    uVar2 = (undefined4)(((cocos2d::CCObject *)piVar1)->retainCount());
    cocos2d::CCLog((char const*)((intptr_t)" uiObject->retainCount() = %d "), uVar2);
    ((cocos2d::CCObject *)piVar1)->release();
  }
  (**(code **)(**(int **)(((int)this) + 0x30) + 0xec))(*(int **)(((int)this) + 0x30),1);
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x2c) + 0xdc))());
  if (1 < uVar3) {
    (**(code **)(**(int **)(((int)this) + 0x2c) + 0xd8))();
    piVar1 = (int *)((cocos2d::CCArray *)this)->lastObject();
    if (piVar1 != 0) {
      iVar4 = (**(code **)(*piVar1 + 0x24))();
      (**(code **)(**(int **)(((int)this) + 0x2c) + 0xcc))
                (*(int **)(((int)this) + 0x2c),*(undefined4 *)(((int)this) + 0x30),iVar4 + -1);
    }
  }
  return;
}







void UIManager::popTopUi()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x38) != 0) {
    uVar1 = (undefined4)(((cocos2d::CCArray *)this)->lastObject());
    UIManager::addUiObject((UIObject*)uVar1);
    ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x38))->removeAllObjects();
  }
  return;
}

void UIManager::popUi()
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(((int)this) + 0x38) != 0) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x38) + 0x14);
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)piVar1[2];
      puVar3 = puVar4 + iVar2 + g_004ec300;
      for (; (puVar4 <= puVar3 && (piVar1 = (int *)*puVar4, piVar1 != 0));
          puVar4 = puVar4 + 1) {
        (**(code **)(*piVar1 + 0x44))(piVar1);
        UIManager::addUiObject((UIObject*)piVar1);
      }
    }
    ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x38))->removeAllObjects();
  }
  return;
}

undefined8 UIManager::popUI(int p1)
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(((int)this) + 0x38) != 0) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x38) + 0x14);
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)piVar1[2];
      puVar3 = puVar4 + iVar2 + g_004ec35c;
      while( true ) {
        if ((puVar3 < puVar4) || (piVar1 = (int *)*puVar4, piVar1 == 0))
        goto code_r0x004ec35a;
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
        if (iVar2 == p1) break;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(*piVar1 + 0x44))(piVar1);
      UIManager::addUiObject((UIObject*)piVar1);
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x38))->removeObject((cocos2d::CCObject*)piVar1, 1);
    }
  }
code_r0x004ec35a:
  return ghidra_CONCAT44(p1,((int)this));
}

// ===== 修复: 补回被误删的函数占位 (21) =====
UIManager::UIManager()
{
  int iVar1;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(8)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xf)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x10)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xe)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x11)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  return;
}

void UIManager::tick(float p1)
{
  /* IMPL_FIX (R184). Original UIManager::tick @0x4d9b6c:
       ldr r0,[r0,#0x20]        ; this+0x20 = CCDictionary (UI table)
       bl CCDictionary::allKeys()
       loop: objectForKey(key) ; ldr r3,[r0] ; ldr r3,[r3,#0x3c] ; blx r3  (slot 0x3c with dt)
     NOTE: our UIManager body is replaced by _hw_pad[72] (R94 size pad), so the dictionary has
     no named member -- reach it by raw offset. Slot 0x3c is invoked BY SLOT (not by name) to stay
     exactly equivalent to the original. */
  cocos2d::CCDictionary *pDict = *(cocos2d::CCDictionary **)((int)this + 0x20);
  if (pDict == 0) { return; }
  cocos2d::CCArray *pKeys = pDict->allKeys();
  if (pKeys == 0) { return; }
  unsigned int n = pKeys->count();
  for (unsigned int i = 0; i < n; ++i)
  {
    cocos2d::CCObject *pKey = (cocos2d::CCObject *)pKeys->objectAtIndex(i);
    if (pKey == 0) { continue; }
    int hwKey = *(int *)((int)pKey + 0x14);
    void *pObj = (void *)pDict->objectForKey(hwKey);
    if (pObj == 0) { continue; }
    typedef void (*hw_ui_tick_t)(void *, float);
    hw_ui_tick_t pfn = *(hw_ui_tick_t *)(*(int *)pObj + 0x3c);
    if (pfn != 0) { pfn(pObj, p1); }
  }
}

int * UIManager::createUi(int p1)
{
  /* DIAG (R189): behaviour-preserving instrumentation -- log which UI ids the boot flow requests,
     so the real createUi branches can be implemented in the right order (see PROGRESS R188). */
  CCLog("DIAG_R189 UIManager::createUi id=%d", p1);
  /* TODO(reverse-placeholder): original body is a balanced id-bisection over ~5.4KB -- not rebuilt yet. */
  return nullptr;
}

bool UIManager::hasUIObject(int p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x20)));
  return iVar1 != 0;
}

void UIManager::popUnEnableScrollView()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x34))->count());
  if (iVar1 != 0) {
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x34))->objectAtIndex(0));
    if (iVar1 != 0) {
      iVar3 = (undefined4)(intptr_t)(**(int **)(iVar1 + 0x14));
      if (iVar3 != 0) {
        piVar5 = (int *)(*(int **)(iVar1 + 0x14))[2];
        piVar4 = piVar5 + iVar3 + g_004eb3c8;
        for (; (piVar5 <= piVar4 && (piVar2 = (int *)*piVar5, piVar2 != 0));
            piVar5 = piVar5 + 1) {
          (**(code **)(*piVar2 + 0x1c8))(piVar2,1);
        }
      }
    }
    ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x34))->removeObjectAtIndex(0, 1);
  }
  return;
}

void UIManager::getAllScrollViewChild(cocos2d::CCNode* p1, cocos2d::CCArray* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 UIManager::addGongGaoArrayItem(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UIManager::initHideMutexUi()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_54;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = (undefined4)(intptr_t)(g_004eb6ec + 0x4eb560);
  iStack_54 = 0;
  do {
    uVar4 = (undefined4)(*(undefined4 *)(iStack_54 + g_004eb6f0 + 0x4eb57e));
    ConvertToString<int>(&uStack_38, uVar4, 0);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
    func_0079e45c(auStack_34,uStack_38,auStack_1c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey((char const *)auStack_34));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar3 + g_004eb6f4),
                              *(undefined4 *)(iVar3 + g_004eb6f8),0);
    }
    func_0079e2bc(auStack_34);
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
      func_0079e45c(auStack_30,uStack_38,auStack_1c);
      ((cocos2d::CCDictionary *)uVar5)->setObject((cocos2d::CCObject*)iVar2, (char const *)auStack_30);
      func_0079e2bc(auStack_30);
    }
    uVar6 = (undefined4)(*(undefined4 *)(g_004eb6fc + iStack_54 + 0x4eb5fa));
    uVar5 = (undefined4)(cocos2d::CCInteger::create(uVar6));
    ConvertToString<int>(auStack_2c, uVar6, 0);
    ((cocos2d::CCDictionary *)iVar2)->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_2c);
    func_0079e2bc(auStack_2c);
    ConvertToString<int>(auStack_28, uVar6, 0);
    func_0079e52c(&uStack_38,auStack_28);
    func_0079e2bc(auStack_28);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
    func_0079e45c(auStack_24,uStack_38,auStack_1c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey((char const *)auStack_24));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar3 + g_004eb6f4),
                              *(undefined4 *)(iVar3 + g_004eb6f8),0);
    }
    func_0079e2bc(auStack_24);
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
      func_0079e45c(auStack_20,uStack_38,auStack_1c);
      ((cocos2d::CCDictionary *)uVar5)->setObject((cocos2d::CCObject*)iVar2, (char const *)auStack_20);
      func_0079e2bc(auStack_20);
    }
    uVar5 = (undefined4)(cocos2d::CCInteger::create(uVar4));
    ConvertToString<int>(auStack_1c, uVar4, 0);
    ((cocos2d::CCDictionary *)iVar2)->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_38);
    iStack_54 = (undefined4)(intptr_t)(iStack_54 + 8);
  } while (iStack_54 != 0x30);
  return;
}

void UIManager::initCloseMutexUi()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_54;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = (undefined4)(intptr_t)(g_004eb898 + 0x4eb70c);
  iStack_54 = 0;
  do {
    uVar4 = (undefined4)(*(undefined4 *)(iStack_54 + g_004eb89c + 0x4eb75a));
    ConvertToString<int>(&uStack_38, uVar4, 0);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
    func_0079e45c(auStack_34,uStack_38,auStack_1c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey((char const *)auStack_34));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar3 + g_004eb8a0),
                              *(undefined4 *)(iVar3 + g_004eb8a4),0);
    }
    func_0079e2bc(auStack_34);
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
      func_0079e45c(auStack_30,uStack_38,auStack_1c);
      ((cocos2d::CCDictionary *)uVar5)->setObject((cocos2d::CCObject*)iVar2, (char const *)auStack_30);
      func_0079e2bc(auStack_30);
    }
    uVar6 = (undefined4)(*(undefined4 *)(g_004eb8a8 + iStack_54 + 0x4eb7d6));
    uVar5 = (undefined4)(cocos2d::CCInteger::create(uVar6));
    ConvertToString<int>(auStack_2c, uVar6, 0);
    ((cocos2d::CCDictionary *)iVar2)->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_2c);
    func_0079e2bc(auStack_2c);
    ConvertToString<int>(auStack_28, uVar6, 0);
    func_0079e52c(&uStack_38,auStack_28);
    func_0079e2bc(auStack_28);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
    func_0079e45c(auStack_24,uStack_38,auStack_1c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey((char const *)auStack_24));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar3 + g_004eb8a0),
                              *(undefined4 *)(iVar3 + g_004eb8a4),0);
    }
    func_0079e2bc(auStack_24);
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
      func_0079e45c(auStack_20,uStack_38,auStack_1c);
      ((cocos2d::CCDictionary *)uVar5)->setObject((cocos2d::CCObject*)iVar2, (char const *)auStack_20);
      func_0079e2bc(auStack_20);
    }
    uVar5 = (undefined4)(cocos2d::CCInteger::create(uVar4));
    ConvertToString<int>(auStack_1c, uVar4, 0);
    ((cocos2d::CCDictionary *)iVar2)->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_38);
    iStack_54 = (undefined4)(intptr_t)(iStack_54 + 8);
  } while (iStack_54 != 0x10);
  return;
}

bool UIManager::init()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)cocos2d::CCLayerColor::create();
  *(int **)(((int)this) + 0x30) = piVar1;
  (**(code **)(*(int *)(piVar1) + (0x218)))(piVar1,g_004eb960 + 0x4eb90e);
  (**(code **)(**(int **)(((int)this) + 0x30) + 0x200))(*(int **)(((int)this) + 0x30),0);
  piVar1 = *(int **)(((int)this) + 0x30);
  pcVar4 = *(code **)(*piVar1 + 0x88);
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(&iStack_20) = ((cocos2d::CCDirector *)(uVar2))->getWinSize();
  (*pcVar4)(piVar1,&iStack_20);
  if (*(int *)(((int)this) + 0x30) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
  *(int *)(((int)this) + 0x1c) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  uVar2 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x28) = uVar2;
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0xd0))
            (*(int **)(((int)this) + 0x1c),*(undefined4 *)(((int)this) + 0x2c),1,1);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0xd0))
            (*(int **)(((int)this) + 0x1c),*(undefined4 *)(((int)this) + 0x28),2,2);
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)(((int)this) + 0x24) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)(((int)this) + 0x34) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  ((UIManager *)(((int)this)))->initHideMutexUi();
  ((UIManager *)(((int)this)))->initCloseMutexUi();
  return ghidra_CONCAT44(iStack_20,1);
}

void UIManager::hideMutexUi(UIObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x18)))(p1));
  ConvertToString<unsigned int>((unsigned int)&uStack_20, uVar1, 0);
  func_0079e45c(auStack_1c,uStack_20,auStack_24);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey((char const *)auStack_1c));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar4 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    while (iVar2 != 0) {
      iVar5 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x104));
      iVar2 = (undefined4)(intptr_t)(((UIManager *)(((int)this)))->hasUIObject(*(undefined4 *)(iVar5 + 0x14)));
      if (iVar2 != 0) {
        iVar2 = (undefined4)((void)(((UIManager *)(((int)this)))->getUIObject(*(undefined4 *)(iVar5 + 0x14))),(intptr_t)0);
        piVar3 = *(int **)(iVar2 + 0x18);
        if (piVar3 != 0) {
          *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
          (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
        }
      }
      iVar2 = (undefined4)(intptr_t)(iVar4);
      if (iVar4 != 0) {
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0x110));
      }
    }
  }
  return;
}

void UIManager::unHideMutexUi(UIObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x18)))(p1));
  ConvertToString<unsigned int>((unsigned int)&uStack_20, uVar1, 0);
  func_0079e45c(auStack_1c,uStack_20,auStack_24);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey((char const *)auStack_1c));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar4 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    while (iVar2 != 0) {
      iVar5 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x104));
      iVar2 = (undefined4)(intptr_t)(((UIManager *)(((int)this)))->hasUIObject(*(undefined4 *)(iVar5 + 0x14)));
      if (iVar2 != 0) {
        iVar2 = (undefined4)((void)(((UIManager *)(((int)this)))->getUIObject(*(undefined4 *)(iVar5 + 0x14))),(intptr_t)0);
        piVar3 = *(int **)(iVar2 + 0x18);
        if (piVar3 != 0) {
          iVar5 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x1c) + -1);
          if (iVar5 < 1) {
            *(undefined4 *)(iVar2 + 0x1c) = 0;
            (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,1);
          }
          else {
            *(int *)(iVar2 + 0x1c) = iVar5;
          }
        }
      }
      iVar2 = (undefined4)(intptr_t)(iVar4);
      if (iVar4 != 0) {
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0x110));
      }
    }
  }
  return;
}

undefined8 UIManager::removeAllUIWithOut(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UIManager::closeMutexUi(UIObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x18)))(p1));
  ConvertToString<unsigned int>((unsigned int)&uStack_20, uVar1, 0);
  func_0079e45c(auStack_1c,uStack_20,auStack_24);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey((char const *)auStack_1c));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar3 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    while (iVar2 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x104));
      iVar2 = (undefined4)(intptr_t)(UIManager::hasUIObject(*(undefined4 *)(iVar4 + 0x14)));
      if (iVar2 != 0) {
        UIManager::removeUIByID(*(undefined4 *)(iVar4 + 0x14));
      }
      iVar2 = (undefined4)(intptr_t)(iVar3);
      if (iVar3 != 0) {
        iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
      }
    }
  }
  return;
}

undefined8 UIManager::addUiObject(UIObject* p1)
{
  /* IMPL_FIX (R185). Original UIManager::addUiObject @0x4dbd3c:
       4dbd3e: cmp r1,#0 ; null -> tail
       4dbd44: ldr r3,[r1] ; ldr r3,[r3,#0x18] ; blx r3   ; key = p1-><slot 0x18>() (the UI id)
       4dbd46: ldr r6,[r0,#0x20]                          ; this+0x20 = the UI CCDictionary
       4dbd56: bl CCDictionary::objectForKey(int)
       4dbd5c: bne -> already present, skip insert
       4dbd6e: bl CCDictionary::setObject(CCObject*, int) ; insert {id -> object}
     (tail of the original also registers via this+0x2c / this+0x30 -- NOT implemented yet)
     NOTE: this class body is _hw_pad[72] (R94) so members are reached by raw offset; slot 0x18 is
     called BY SLOT to stay equivalent to the original. */
  if (p1 == 0) { return 0; }
  cocos2d::CCDictionary *pDict = *(cocos2d::CCDictionary **)((int)this + 0x20);
  if (pDict == 0) { return 0; }
  typedef int (*hw_ui_id_t)(void *);
  hw_ui_id_t pfnId = *(hw_ui_id_t *)(*(int *)p1 + 0x18);
  int hwId = (pfnId != 0) ? pfnId((void *)p1) : 0;
  if (pDict->objectForKey(hwId) == 0)
  {
    pDict->setObject((cocos2d::CCObject *)p1, hwId);
  }
  return 0;
}

undefined4 UIManager::showUIById(int p1)
{
  /* DIAG (R191): behaviour-preserving probe on the REAL entry point (see PROGRESS R190 -- the game
     side opens UIs via showUIById, which in turn calls createUi). Log the requested id so the
     createUi branches can be implemented in the order the boot flow actually needs them. */
  CCLog("DIAG_R191 UIManager::showUIById id=%d", p1);
  /* REVERTED-BODY (R187): p = createUi(id); if (p) addUiObject(p); return p;
     -- re-land only AFTER the requested createUi branch exists (ordering constraint R177/R187). */
  return 0;
}

void UIManager::showAlert(std::string * p1, std::string p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UIManager::showItemDataInfo(ItemData* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  uVar1 = (undefined4)(UIManager::shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ec1a6 + (intptr_t)(g_004ec268))));
  uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ec1a8 + (intptr_t)(g_004ec26c))));
  if ((iVar2 == 0) || (iVar2 = func_0079e55c(iVar2,uVar6,uVar1,0,p4), iVar2 == 0)) {
    uVar3 = (undefined4)(UIManager::shareManager());
    iVar2 = (undefined4)(intptr_t)(((UIManager *)(uVar3))->showUIById(0x1f));
    if (iVar2 == 0) goto code_r0x004ec262;
    iVar2 = (undefined4)(intptr_t)(func_0079e55c(iVar2,uVar6,uVar1,0));
  }
  if ((*(int *)(iVar2 + 0x24) != 0) &&
     (iVar2 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_004ec1e4 + (intptr_t)(g_004ec270))),
                              *(undefined4 *)((unsigned char *)((char *)&g_004ec1e6 + (intptr_t)(g_004ec274))),0,p4), iVar2 != 0)
     ) {
    piVar4 = (int *)::operator new(0x30);
    ::new ((void *)piVar4) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar5 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar4))->init());
    if (iVar5 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
code_r0x004ec262:
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x4ec262);
      (*pcVar7)();
    }
    ((cocos2d::CCObject *)(piVar4))->autorelease();
    pcVar7 = *(code **)(*piVar4 + 0x24);
    uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x18)))(p1));
    (*pcVar7)(piVar4,uVar1);
    pcVar7 = *(code **)(*piVar4 + 0x2c);
    uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x98)))(p1));
    (*pcVar7)(piVar4,uVar1);
    (**(code **)(*(int *)(piVar4) + (0x34)))(piVar4,0);
    uVar1 = (undefined4)(((BLItemDataInfoView *)(iVar2))->getPresenter());
    ((BLItemDataInfoPresenter *)(uVar1))->initWithItemData((BackPackItemData*)piVar4);
  }
  return;
}

undefined8 UIManager::addUiObjectForTreasureHero(UIObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 UIManager::showUIByIdForTreasureHero(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UIManager::showChestItemSelectView(std::string * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLRingMainView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRingMainPresenter.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004ca838;
extern "C" unsigned long UNK_004ca890;
extern "C" unsigned long UNK_004ca8fc;
extern "C" unsigned long UNK_004ca940;
extern "C" unsigned long UNK_004ca968;
extern "C" unsigned long UNK_004cadf2;
extern "C" unsigned long UNK_004caee4;
extern "C" unsigned long UNK_004cafc8;
extern "C" unsigned long UNK_004cb08e;
extern "C" unsigned long UNK_004cb0ba;
extern "C" unsigned long UNK_004cb22c;
extern "C" unsigned long UNK_004cb25a;
extern "C" unsigned long UNK_004cb374;
extern "C" unsigned long UNK_004cb376;
extern "C" unsigned long UNK_004cb386;
extern "C" unsigned long UNK_004cb3c4;
extern "C" unsigned long UNK_004cb3ee;
extern "C" unsigned long UNK_004cb508;
extern "C" unsigned long UNK_004cb50a;
extern "C" unsigned long UNK_004cb51b;
extern "C" unsigned long UNK_004cb558;
extern "C" unsigned long UNK_004cb582;
extern "C" unsigned long UNK_004cb6ec;
extern "C" unsigned long UNK_004cb6ee;
extern "C" unsigned long UNK_004cb6fe;
extern "C" unsigned long UNK_004cb73c;
extern "C" unsigned long UNK_004cb766;
extern "C" unsigned long UNK_004cb88a;
extern "C" unsigned long UNK_004cb88c;
extern "C" unsigned long UNK_004cb89d;
extern "C" unsigned long UNK_004cb8de;
extern "C" unsigned long UNK_004cb908;
extern "C" unsigned long UNK_004cba6c;
extern "C" unsigned long UNK_004cba6e;
extern "C" unsigned long UNK_004cba7c;
extern "C" unsigned long UNK_004cbb1a;
extern "C" unsigned long UNK_004cbb42;
extern "C" unsigned long UNK_004cbc66;
extern "C" unsigned long UNK_004cbc7c;
extern "C" unsigned long UNK_004cbd44;
extern "C" unsigned long UNK_004cbdae;
extern "C" unsigned long UNK_004cbe96;
extern "C" unsigned long UNK_004cbec2;
extern "C" unsigned long UNK_004cbf64;
extern "C" unsigned long UNK_004cbf86;
extern "C" unsigned long UNK_004cc01c;
extern "C" unsigned long UNK_004cc084;
extern "C" unsigned long UNK_004cc086;
extern "C" unsigned long UNK_004cc0f2;
extern "C" unsigned long UNK_004cc174;
extern "C" unsigned long UNK_004cc344;
extern "C" unsigned long UNK_004cc370;
extern "C" unsigned long UNK_004cc3ee;
extern "C" unsigned long UNK_004cc4fa;
extern "C" unsigned long UNK_004cc50c;
extern "C" unsigned long UNK_004cc560;
extern "C" unsigned long UNK_004cc58a;
extern "C" unsigned long UNK_004cc6fa;
extern "C" unsigned long UNK_004cc756;
extern "C" unsigned long UNK_004cc768;
extern "C" unsigned long UNK_004cc7b8;
extern "C" unsigned long UNK_004cc7da;
extern "C" unsigned long UNK_004cc88a;
extern "C" unsigned long UNK_004cc8bc;
extern "C" unsigned long UNK_004cc95c;
extern "C" unsigned long UNK_004cc98e;
extern "C" unsigned long UNK_004cca46;
extern "C" unsigned long UNK_004cca4a;
extern "C" unsigned long UNK_004ccaa6;
extern "C" unsigned long UNK_004ccad2;
extern "C" unsigned long UNK_004ccc02;
extern "C" unsigned long UNK_004ccc2c;
extern "C" unsigned long UNK_004ccc8e;
extern "C" unsigned long UNK_004cccb8;
extern "C" unsigned long UNK_004ccce0;
extern "C" unsigned long UNK_004ccd92;
extern "C" unsigned long UNK_004ccdbc;
extern "C" unsigned long UNK_004cce1c;
extern "C" unsigned long UNK_004cce48;
extern "C" unsigned long UNK_004cce72;
extern "C" unsigned long UNK_004ccf24;
extern "C" unsigned long UNK_004ccf96;
extern "C" unsigned long UNK_004ccff6;
extern "C" unsigned long UNK_004cd012;
extern "C" unsigned long UNK_004cd0ea;
extern "C" unsigned long UNK_004cd24e;
extern "C" unsigned long UNK_004cd250;
extern "C" unsigned long UNK_004cd261;
extern "C" unsigned long _DAT_004cabe0;
extern "C" unsigned long _DAT_004cabe4;
extern "C" unsigned long _DAT_004cabe8;
extern "C" unsigned long _DAT_004cabec;
extern "C" unsigned long _UNK_004ca83c;
extern "C" unsigned long _UNK_004ca92c;
extern "C" unsigned long _UNK_004ca930;
extern "C" unsigned long _UNK_004ca944;
extern "C" unsigned long _UNK_004ca96c;
extern "C" unsigned long _UNK_004caae8;
extern "C" unsigned long _UNK_004caaec;
extern "C" unsigned long _UNK_004caaf0;
extern "C" unsigned long _UNK_004caaf4;
extern "C" unsigned long _UNK_004caaf8;
extern "C" unsigned long _UNK_004caafc;
extern "C" unsigned long _UNK_004cb160;
extern "C" unsigned long _UNK_004cb164;
extern "C" unsigned long _UNK_004cb168;
extern "C" unsigned long _UNK_004cb16c;
extern "C" unsigned long _UNK_004cb170;
extern "C" unsigned long _UNK_004cb174;
extern "C" unsigned long _UNK_004cb178;
extern "C" unsigned long _UNK_004cb17c;
extern "C" unsigned long _UNK_004cb180;
extern "C" unsigned long _UNK_004cb184;
extern "C" unsigned long _UNK_004cb188;
extern "C" unsigned long _UNK_004cb18c;
extern "C" unsigned long _UNK_004cb190;
extern "C" unsigned long _UNK_004cb594;
extern "C" unsigned long _UNK_004cb598;
extern "C" unsigned long _UNK_004cb59c;
extern "C" unsigned long _UNK_004cb5a0;
extern "C" unsigned long _UNK_004cb5a4;
extern "C" unsigned long _UNK_004cb5a8;
extern "C" unsigned long _UNK_004cb5ac;
extern "C" unsigned long _UNK_004cb5b0;
extern "C" unsigned long _UNK_004cb5b4;
extern "C" unsigned long _UNK_004cb5b8;
extern "C" unsigned long _UNK_004cb5bc;
extern "C" unsigned long _UNK_004cb5c0;
extern "C" unsigned long _UNK_004cb5c4;
extern "C" unsigned long _UNK_004cb5c8;
extern "C" unsigned long _UNK_004cb5cc;
extern "C" unsigned long _UNK_004cb5d0;
extern "C" unsigned long _UNK_004cb5d4;
extern "C" unsigned long _UNK_004cb5d8;
extern "C" unsigned long _UNK_004cb5dc;
extern "C" unsigned long _UNK_004cb9e0;
extern "C" unsigned long _UNK_004cb9e4;
extern "C" unsigned long _UNK_004cb9e8;
extern "C" unsigned long _UNK_004cb9ec;
extern "C" unsigned long _UNK_004cb9f0;
extern "C" unsigned long _UNK_004cb9f4;
extern "C" unsigned long _UNK_004cb9f8;
extern "C" unsigned long _UNK_004cb9fc;
extern "C" unsigned long _UNK_004cba00;
extern "C" unsigned long _UNK_004cba04;
extern "C" unsigned long _UNK_004cba08;
extern "C" unsigned long _UNK_004cba0c;
extern "C" unsigned long _UNK_004cba10;
extern "C" unsigned long _UNK_004cba14;
extern "C" unsigned long _UNK_004cba18;
extern "C" unsigned long _UNK_004cba1c;
extern "C" unsigned long _UNK_004cba20;
extern "C" unsigned long _UNK_004cba24;
extern "C" unsigned long _UNK_004cbe44;
extern "C" unsigned long _UNK_004cbe48;
extern "C" unsigned long _UNK_004cbe4c;
extern "C" unsigned long _UNK_004cbe50;
extern "C" unsigned long _UNK_004cbe54;
extern "C" unsigned long _UNK_004cbe58;
extern "C" unsigned long _UNK_004cbe5c;
extern "C" unsigned long _UNK_004cbe60;
extern "C" unsigned long _UNK_004cbe64;
extern "C" unsigned long _UNK_004cbe68;
extern "C" unsigned long _UNK_004cbe6c;
extern "C" unsigned long _UNK_004cbe70;
extern "C" unsigned long _UNK_004cbe74;
extern "C" unsigned long _UNK_004cbe78;
extern "C" unsigned long _UNK_004cbe7c;
extern "C" unsigned long _UNK_004cbe80;
extern "C" unsigned long _UNK_004cbe84;
extern "C" unsigned long _UNK_004cbe88;
extern "C" unsigned long _UNK_004cc274;
extern "C" unsigned long _UNK_004cc278;
extern "C" unsigned long _UNK_004cc27c;
extern "C" unsigned long _UNK_004cc280;
extern "C" unsigned long _UNK_004cc284;
extern "C" unsigned long _UNK_004cc288;
extern "C" unsigned long _UNK_004cc28c;
extern "C" unsigned long _UNK_004cc290;
extern "C" unsigned long _UNK_004cc294;
extern "C" unsigned long _UNK_004cc298;
extern "C" unsigned long _UNK_004cc29c;
extern "C" unsigned long _UNK_004cc2a0;
extern "C" unsigned long _UNK_004cc2a4;
extern "C" unsigned long _UNK_004cc2a8;
extern "C" unsigned long _UNK_004cc2ac;
extern "C" unsigned long _UNK_004cc2b0;
extern "C" unsigned long _UNK_004cc2b4;
extern "C" unsigned long _UNK_004cc2b8;
extern "C" unsigned long _UNK_004cc2bc;
extern "C" unsigned long _UNK_004cc6ac;
extern "C" unsigned long _UNK_004cc6b0;
extern "C" unsigned long _UNK_004cc6b4;
extern "C" unsigned long _UNK_004cc6b8;
extern "C" unsigned long _UNK_004cc6bc;
extern "C" unsigned long _UNK_004cc6c0;
extern "C" unsigned long _UNK_004cc6c4;
extern "C" unsigned long _UNK_004cc6c8;
extern "C" unsigned long _UNK_004cc6cc;
extern "C" unsigned long _UNK_004cc6d0;
extern "C" unsigned long _UNK_004cc6d4;
extern "C" unsigned long _UNK_004cc6d8;
extern "C" unsigned long _UNK_004cc6dc;
extern "C" unsigned long _UNK_004cc6e0;
extern "C" unsigned long _UNK_004cc6e4;
extern "C" unsigned long _UNK_004cc6e8;
extern "C" unsigned long _UNK_004cc6ec;
extern "C" unsigned long _UNK_004ccad4;
extern "C" unsigned long _UNK_004ccad8;
extern "C" unsigned long _UNK_004ccadc;
extern "C" unsigned long _UNK_004ccae0;
extern "C" unsigned long _UNK_004ccae4;
extern "C" unsigned long _UNK_004ccae8;
extern "C" unsigned long _UNK_004ccaec;
extern "C" unsigned long _UNK_004ccaf0;
extern "C" unsigned long _UNK_004ccaf4;
extern "C" unsigned long _UNK_004ccaf8;
extern "C" unsigned long _UNK_004ccafc;
extern "C" unsigned long _UNK_004ccb00;
extern "C" unsigned long _UNK_004ccb04;
extern "C" unsigned long _UNK_004ccb08;
extern "C" unsigned long _UNK_004ccb0c;
extern "C" unsigned long _UNK_004ccb10;
extern "C" unsigned long _UNK_004ccb14;
extern "C" unsigned long _UNK_004ccb18;
extern "C" unsigned long _UNK_004ccb1c;
extern "C" unsigned long _UNK_004ccb20;
extern "C" unsigned long _UNK_004ccb24;
extern "C" unsigned long _UNK_004ccb28;
extern "C" unsigned long _UNK_004ccb2c;
extern "C" unsigned long _UNK_004ccb30;
extern "C" unsigned long _UNK_004ccb34;
extern "C" unsigned long _UNK_004ccb38;
extern "C" unsigned long _UNK_004ccf48;
extern "C" unsigned long _UNK_004ccf4c;
extern "C" unsigned long _UNK_004ccf50;
extern "C" unsigned long _UNK_004ccf54;
extern "C" unsigned long _UNK_004ccf58;
extern "C" unsigned long _UNK_004ccf5c;
extern "C" unsigned long _UNK_004ccf60;
extern "C" unsigned long _UNK_004ccf64;
extern "C" unsigned long _UNK_004ccf68;
extern "C" unsigned long _UNK_004ccf6c;
extern "C" unsigned long _UNK_004ccf70;
extern "C" unsigned long _UNK_004ccf74;
extern "C" unsigned long _UNK_004ccf78;
extern "C" unsigned long _UNK_004ccf7c;
extern "C" unsigned long _UNK_004ccf80;
extern "C" unsigned long _UNK_004ccf84;
extern "C" unsigned long _UNK_004ccf88;
extern "C" unsigned long _UNK_004cd378;
extern "C" unsigned long _UNK_004cd37c;
extern "C" unsigned long _UNK_004cd380;
extern "C" unsigned long _UNK_004cd384;
extern "C" unsigned long _UNK_004cd388;
extern "C" unsigned long _UNK_004cd38c;
extern "C" unsigned long _UNK_004cd390;
extern "C" unsigned long _UNK_004cd394;
extern "C" unsigned long _UNK_004cd398;
extern "C" unsigned long _UNK_004cd39c;
extern "C" unsigned long _UNK_004cd3a0;
extern "C" unsigned long _UNK_004cd3a4;
extern "C" unsigned long _UNK_004cd3a8;
extern "C" unsigned long _UNK_004cd3ac;
extern "C" unsigned long g_004ca838;
extern "C" unsigned long g_004ca83c;
extern "C" unsigned long g_004ca890;
extern "C" unsigned long g_004ca8fc;
extern "C" unsigned long g_004ca92c;
extern "C" unsigned long g_004ca930;
extern "C" unsigned long g_004ca940;
extern "C" unsigned long g_004ca944;
extern "C" unsigned long g_004ca968;
extern "C" unsigned long g_004ca96c;
extern "C" unsigned long g_004caae8;
extern "C" unsigned long g_004caaec;
extern "C" unsigned long g_004caaf0;
extern "C" unsigned long g_004caaf4;
extern "C" unsigned long g_004caaf8;
extern "C" unsigned long g_004caafc;
extern "C" unsigned long g_004cabe0;
extern "C" unsigned long g_004cabe4;
extern "C" unsigned long g_004cabe8;
extern "C" unsigned long g_004cabec;
extern "C" unsigned long g_004cadf2;
extern "C" unsigned long g_004caee4;
extern "C" unsigned long g_004cafc8;
extern "C" unsigned long g_004cb08e;
extern "C" unsigned long g_004cb0ba;
extern "C" unsigned long g_004cb160;
extern "C" unsigned long g_004cb164;
extern "C" unsigned long g_004cb168;
extern "C" unsigned long g_004cb16c;
extern "C" unsigned long g_004cb170;
extern "C" unsigned long g_004cb174;
extern "C" unsigned long g_004cb178;
extern "C" unsigned long g_004cb17c;
extern "C" unsigned long g_004cb180;
extern "C" unsigned long g_004cb184;
extern "C" unsigned long g_004cb188;
extern "C" unsigned long g_004cb18c;
extern "C" unsigned long g_004cb190;
extern "C" unsigned long g_004cb22c;
extern "C" unsigned long g_004cb25a;
extern "C" unsigned long g_004cb374;
extern "C" unsigned long g_004cb376;
extern "C" unsigned long g_004cb386;
extern "C" unsigned long g_004cb3c4;
extern "C" unsigned long g_004cb3ee;
extern "C" unsigned long g_004cb508;
extern "C" unsigned long g_004cb50a;
extern "C" unsigned long g_004cb51b;
extern "C" unsigned long g_004cb558;
extern "C" unsigned long g_004cb582;
extern "C" unsigned long g_004cb594;
extern "C" unsigned long g_004cb598;
extern "C" unsigned long g_004cb59c;
extern "C" unsigned long g_004cb5a0;
extern "C" unsigned long g_004cb5a4;
extern "C" unsigned long g_004cb5a8;
extern "C" unsigned long g_004cb5ac;
extern "C" unsigned long g_004cb5b0;
extern "C" unsigned long g_004cb5b4;
extern "C" unsigned long g_004cb5b8;
extern "C" unsigned long g_004cb5bc;
extern "C" unsigned long g_004cb5c0;
extern "C" unsigned long g_004cb5c4;
extern "C" unsigned long g_004cb5c8;
extern "C" unsigned long g_004cb5cc;
extern "C" unsigned long g_004cb5d0;
extern "C" unsigned long g_004cb5d4;
extern "C" unsigned long g_004cb5d8;
extern "C" unsigned long g_004cb5dc;
extern "C" unsigned long g_004cb6ec;
extern "C" unsigned long g_004cb6ee;
extern "C" unsigned long g_004cb6fe;
extern "C" unsigned long g_004cb73c;
extern "C" unsigned long g_004cb766;
extern "C" unsigned long g_004cb88a;
extern "C" unsigned long g_004cb88c;
extern "C" unsigned long g_004cb89d;
extern "C" unsigned long g_004cb8de;
extern "C" unsigned long g_004cb908;
extern "C" unsigned long g_004cb9e0;
extern "C" unsigned long g_004cb9e4;
extern "C" unsigned long g_004cb9e8;
extern "C" unsigned long g_004cb9ec;
extern "C" unsigned long g_004cb9f0;
extern "C" unsigned long g_004cb9f4;
extern "C" unsigned long g_004cb9f8;
extern "C" unsigned long g_004cb9fc;
extern "C" unsigned long g_004cba00;
extern "C" unsigned long g_004cba04;
extern "C" unsigned long g_004cba08;
extern "C" unsigned long g_004cba0c;
extern "C" unsigned long g_004cba10;
extern "C" unsigned long g_004cba14;
extern "C" unsigned long g_004cba18;
extern "C" unsigned long g_004cba1c;
extern "C" unsigned long g_004cba20;
extern "C" unsigned long g_004cba24;
extern "C" unsigned long g_004cba6c;
extern "C" unsigned long g_004cba6e;
extern "C" unsigned long g_004cba7c;
extern "C" unsigned long g_004cbb1a;
extern "C" unsigned long g_004cbb42;
extern "C" unsigned long g_004cbc66;
extern "C" unsigned long g_004cbc7c;
extern "C" unsigned long g_004cbd44;
extern "C" unsigned long g_004cbdae;
extern "C" unsigned long g_004cbe44;
extern "C" unsigned long g_004cbe48;
extern "C" unsigned long g_004cbe4c;
extern "C" unsigned long g_004cbe50;
extern "C" unsigned long g_004cbe54;
extern "C" unsigned long g_004cbe58;
extern "C" unsigned long g_004cbe5c;
extern "C" unsigned long g_004cbe60;
extern "C" unsigned long g_004cbe64;
extern "C" unsigned long g_004cbe68;
extern "C" unsigned long g_004cbe6c;
extern "C" unsigned long g_004cbe70;
extern "C" unsigned long g_004cbe74;
extern "C" unsigned long g_004cbe78;
extern "C" unsigned long g_004cbe7c;
extern "C" unsigned long g_004cbe80;
extern "C" unsigned long g_004cbe84;
extern "C" unsigned long g_004cbe88;
extern "C" unsigned long g_004cbe96;
extern "C" unsigned long g_004cbec2;
extern "C" unsigned long g_004cbf64;
extern "C" unsigned long g_004cbf86;
extern "C" unsigned long g_004cc01c;
extern "C" unsigned long g_004cc084;
extern "C" unsigned long g_004cc086;
extern "C" unsigned long g_004cc0f2;
extern "C" unsigned long g_004cc174;
extern "C" unsigned long g_004cc274;
extern "C" unsigned long g_004cc278;
extern "C" unsigned long g_004cc27c;
extern "C" unsigned long g_004cc280;
extern "C" unsigned long g_004cc284;
extern "C" unsigned long g_004cc288;
extern "C" unsigned long g_004cc28c;
extern "C" unsigned long g_004cc290;
extern "C" unsigned long g_004cc294;
extern "C" unsigned long g_004cc298;
extern "C" unsigned long g_004cc29c;
extern "C" unsigned long g_004cc2a0;
extern "C" unsigned long g_004cc2a4;
extern "C" unsigned long g_004cc2a8;
extern "C" unsigned long g_004cc2ac;
extern "C" unsigned long g_004cc2b0;
extern "C" unsigned long g_004cc2b4;
extern "C" unsigned long g_004cc2b8;
extern "C" unsigned long g_004cc2bc;
extern "C" unsigned long g_004cc344;
extern "C" unsigned long g_004cc370;
extern "C" unsigned long g_004cc3ee;
extern "C" unsigned long g_004cc4fa;
extern "C" unsigned long g_004cc50c;
extern "C" unsigned long g_004cc560;
extern "C" unsigned long g_004cc58a;
extern "C" unsigned long g_004cc6ac;
extern "C" unsigned long g_004cc6b0;
extern "C" unsigned long g_004cc6b4;
extern "C" unsigned long g_004cc6b8;
extern "C" unsigned long g_004cc6bc;
extern "C" unsigned long g_004cc6c0;
extern "C" unsigned long g_004cc6c4;
extern "C" unsigned long g_004cc6c8;
extern "C" unsigned long g_004cc6cc;
extern "C" unsigned long g_004cc6d0;
extern "C" unsigned long g_004cc6d4;
extern "C" unsigned long g_004cc6d8;
extern "C" unsigned long g_004cc6dc;
extern "C" unsigned long g_004cc6e0;
extern "C" unsigned long g_004cc6e4;
extern "C" unsigned long g_004cc6e8;
extern "C" unsigned long g_004cc6ec;
extern "C" unsigned long g_004cc6fa;
extern "C" unsigned long g_004cc756;
extern "C" unsigned long g_004cc768;
extern "C" unsigned long g_004cc7b8;
extern "C" unsigned long g_004cc7da;
extern "C" unsigned long g_004cc88a;
extern "C" unsigned long g_004cc8bc;
extern "C" unsigned long g_004cc95c;
extern "C" unsigned long g_004cc98e;
extern "C" unsigned long g_004cca46;
extern "C" unsigned long g_004cca4a;
extern "C" unsigned long g_004ccaa6;
extern "C" unsigned long g_004ccad2;
extern "C" unsigned long g_004ccad4;
extern "C" unsigned long g_004ccad8;
extern "C" unsigned long g_004ccadc;
extern "C" unsigned long g_004ccae0;
extern "C" unsigned long g_004ccae4;
extern "C" unsigned long g_004ccae8;
extern "C" unsigned long g_004ccaec;
extern "C" unsigned long g_004ccaf0;
extern "C" unsigned long g_004ccaf4;
extern "C" unsigned long g_004ccaf8;
extern "C" unsigned long g_004ccafc;
extern "C" unsigned long g_004ccb00;
extern "C" unsigned long g_004ccb04;
extern "C" unsigned long g_004ccb08;
extern "C" unsigned long g_004ccb0c;
extern "C" unsigned long g_004ccb10;
extern "C" unsigned long g_004ccb14;
extern "C" unsigned long g_004ccb18;
extern "C" unsigned long g_004ccb1c;
extern "C" unsigned long g_004ccb20;
extern "C" unsigned long g_004ccb24;
extern "C" unsigned long g_004ccb28;
extern "C" unsigned long g_004ccb2c;
extern "C" unsigned long g_004ccb30;
extern "C" unsigned long g_004ccb34;
extern "C" unsigned long g_004ccb38;
extern "C" unsigned long g_004ccc02;
extern "C" unsigned long g_004ccc2c;
extern "C" unsigned long g_004ccc8e;
extern "C" unsigned long g_004cccb8;
extern "C" unsigned long g_004ccce0;
extern "C" unsigned long g_004ccd92;
extern "C" unsigned long g_004ccdbc;
extern "C" unsigned long g_004cce1c;
extern "C" unsigned long g_004cce48;
extern "C" unsigned long g_004cce72;
extern "C" unsigned long g_004ccf24;
extern "C" unsigned long g_004ccf48;
extern "C" unsigned long g_004ccf4c;
extern "C" unsigned long g_004ccf50;
extern "C" unsigned long g_004ccf54;
extern "C" unsigned long g_004ccf58;
extern "C" unsigned long g_004ccf5c;
extern "C" unsigned long g_004ccf60;
extern "C" unsigned long g_004ccf64;
extern "C" unsigned long g_004ccf68;
extern "C" unsigned long g_004ccf6c;
extern "C" unsigned long g_004ccf70;
extern "C" unsigned long g_004ccf74;
extern "C" unsigned long g_004ccf78;
extern "C" unsigned long g_004ccf7c;
extern "C" unsigned long g_004ccf80;
extern "C" unsigned long g_004ccf84;
extern "C" unsigned long g_004ccf88;
extern "C" unsigned long g_004ccf96;
extern "C" unsigned long g_004ccff6;
extern "C" unsigned long g_004cd012;
extern "C" unsigned long g_004cd0ea;
extern "C" unsigned long g_004cd24e;
extern "C" unsigned long g_004cd250;
extern "C" unsigned long g_004cd261;
extern "C" unsigned long g_004cd378;
extern "C" unsigned long g_004cd37c;
extern "C" unsigned long g_004cd380;
extern "C" unsigned long g_004cd384;
extern "C" unsigned long g_004cd388;
extern "C" unsigned long g_004cd38c;
extern "C" unsigned long g_004cd390;
extern "C" unsigned long g_004cd394;
extern "C" unsigned long g_004cd398;
extern "C" unsigned long g_004cd39c;
extern "C" unsigned long g_004cd3a0;
extern "C" unsigned long g_004cd3a4;
extern "C" unsigned long g_004cd3a8;
extern "C" unsigned long g_004cd3ac;
cocos2d::CCArray* BLRingMainView::getArraySel() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x184));
}

void BLRingMainView::setArraySel(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x184) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLRingMainView::getArrayItem() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x188));
}

void BLRingMainView::setArrayItem(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x188) = (undefined4)(intptr_t)p1;
  return;
}

void BLRingMainView::keyBackClicked()
{
  return;
}

BLRingMainView::~BLRingMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004ca890 + g_004ca92c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x62)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x62)) = 0;
  }
  if (*(int *)((int)this + 4*(0x61)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x61)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ca8fc + g_004ca930,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



int * BLRingMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLRingMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLRingMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLRingMainView::getBtnHelp()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLRingMainView::getLabVs()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLRingMainView::getLabRefresh()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLRingMainView::getBtnShare()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLRingMainView::getBtnChangeHero()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLRingMainView::getBtnRecords()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLRingMainView::getBtnStart()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLRingMainView::getBtnRefresh()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLRingMainView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x180);
}

undefined4 BLRingMainView::getBtnUser()
{
  return *(undefined4 *)(((int)this) + 0x170);
}

undefined4 BLRingMainView::getBtnReward()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLRingMainView::getBtnHeroRank()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLRingMainView::getBtnShop()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLRingMainView::getLabeUserName()
{
  return *(undefined4 *)(((int)this) + 0x174);
}

undefined4 BLRingMainView::getLabeForce()
{
  return *(undefined4 *)(((int)this) + 0x16c);
}

undefined4 BLRingMainView::getLabelBMRank()
{
  return *(undefined4 *)(((int)this) + 0x168);
}

undefined4 BLRingMainView::getbgJiFen()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLRingMainView::getLabeAre()
{
  return *(undefined4 *)(((int)this) + 0x164);
}

undefined4 BLRingMainView::getBtnAddCiShu()
{
  return *(undefined4 *)(((int)this) + 0x178);
}

undefined4 BLRingMainView::getLabeCount()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLRingMainView::getSpJifen()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLRingMainView::getLabRecommand()
{
  return *(undefined4 *)(((int)this) + 0x17c);
}

undefined4 BLRingMainView::getVirtualItemDiamond()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void BLRingMainView::onEnter()
{
  ((BLRingMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRingMainView::onExit()
{
  undefined4 uVar1;
  
  ((BLRingMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRingMainView::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRingMainView::BLRingMainView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004cabe0 + 0x4cab42));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x62)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x61)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)(g_004cabe4 + 0x4cab9a), 0, (char const*)"EVENT_VIRTUAL_UPDATE", 0);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,"BLRingMainView",auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

bool BLRingMainView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

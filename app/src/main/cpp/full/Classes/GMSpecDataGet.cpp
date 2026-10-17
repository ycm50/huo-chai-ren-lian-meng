#include "GMSpecDataGet.h"
#include "BLDebug.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "CCJson.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "GuideManager.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" unsigned long _DAT_0047eaf8;
extern "C" unsigned long _DAT_0047ed4c;
extern "C" unsigned long _DAT_0047ed50;
extern "C" unsigned long _DAT_0047ed54;
extern "C" unsigned long _DAT_0047ed58;
extern "C" unsigned long _DAT_0047ed5c;
extern "C" unsigned long _DAT_0047ed60;
extern "C" unsigned long _DAT_0047ed64;
extern "C" unsigned long _DAT_0047ed68;
extern "C" unsigned long _DAT_0047ed6c;
extern "C" unsigned long _DAT_0047ed70;
extern "C" unsigned long _DAT_0047ed74;
extern "C" unsigned long _DAT_0047ed78;
extern "C" unsigned long _DAT_0047ed7c;
extern "C" unsigned long _DAT_0047ed80;
extern "C" unsigned long _DAT_0047ed84;
extern "C" unsigned long _DAT_0047ed88;
extern "C" unsigned long _DAT_0047f06c;
extern "C" unsigned long _DAT_0047f070;
extern "C" unsigned long _DAT_0047f074;
extern "C" unsigned long _DAT_0047f078;
extern "C" unsigned long _DAT_0047f07c;
extern "C" unsigned long _DAT_0047f080;
extern "C" unsigned long _DAT_0047f084;
extern "C" unsigned long _DAT_0047f088;
extern "C" unsigned long _DAT_0047f08c;
extern "C" unsigned long _DAT_0047f090;
extern "C" unsigned long _DAT_0047f094;
extern "C" unsigned long _DAT_0047f154;
extern "C" unsigned long _DAT_0047f158;
extern "C" unsigned long _DAT_0047f330;
extern "C" unsigned long _DAT_0047f334;
extern "C" unsigned long _DAT_0047f338;
extern "C" unsigned long _DAT_0047f33c;
extern "C" unsigned long _DAT_0047f340;
extern "C" unsigned long _DAT_0047f344;
extern "C" unsigned long _DAT_0047f348;
extern "C" unsigned long _DAT_0047f34c;
extern "C" unsigned long _DAT_0047f4d4;
extern "C" unsigned long _DAT_0047f4d8;
extern "C" unsigned long _DAT_0047f4dc;
extern "C" unsigned long _DAT_0047f4e0;
extern "C" unsigned long _DAT_0047f4e4;
extern "C" unsigned long _DAT_0047f4e8;
extern "C" unsigned long _DAT_0047f4ec;
extern "C" unsigned long _DAT_0047f4f0;
extern "C" unsigned long _DAT_0047f4f4;
extern "C" unsigned long _DAT_0047f4f8;
extern "C" unsigned long _DAT_0047f4fc;
extern "C" unsigned long _DAT_0047f918;
extern "C" unsigned long _DAT_0047f91c;
extern "C" unsigned long _DAT_0047f920;
extern "C" unsigned long _DAT_0047f924;
extern "C" unsigned long _DAT_0047f928;
extern "C" unsigned long _DAT_0047f92c;
extern "C" unsigned long _DAT_0047f930;
extern "C" unsigned long _DAT_0047f934;
extern "C" unsigned long _DAT_0047f938;
extern "C" unsigned long _DAT_0047f93c;
extern "C" unsigned long _DAT_0047f940;
extern "C" unsigned long _DAT_0047f944;
extern "C" unsigned long _DAT_0047f948;
extern "C" unsigned long _DAT_0047f94c;
extern "C" unsigned long _DAT_0047f950;
extern "C" unsigned long _DAT_0047f954;
extern "C" unsigned long _DAT_0047f958;
extern "C" unsigned long _DAT_0047f95c;
extern "C" unsigned long _DAT_0047f960;
extern "C" unsigned long _DAT_0047fc08;
extern "C" unsigned long _DAT_0047fc0c;
extern "C" unsigned long _DAT_0047fc10;
extern "C" unsigned long _DAT_0047fc14;
extern "C" unsigned long _DAT_0047fc18;
extern "C" unsigned long _DAT_0047fc1c;
extern "C" unsigned long _DAT_0047fc20;
extern "C" unsigned long _DAT_0047fc24;
extern "C" unsigned long _DAT_0047fc28;
extern "C" unsigned long _DAT_0047fc2c;
extern "C" unsigned long _DAT_0047fc30;
extern "C" unsigned long _DAT_0047fc34;
extern "C" unsigned long _DAT_0047fc38;
extern "C" unsigned long _DAT_0047fc3c;
extern "C" unsigned long _DAT_0047fc40;
extern "C" unsigned long _DAT_0047fc44;
extern "C" unsigned long _DAT_0047fc48;
extern "C" unsigned long _DAT_0047ffd8;
extern "C" unsigned long _DAT_0047ffdc;
extern "C" unsigned long _DAT_0047ffe0;
extern "C" unsigned long _DAT_0047ffe4;
extern "C" unsigned long _DAT_0047ffe8;
extern "C" unsigned long _DAT_0047ffec;
extern "C" unsigned long _DAT_0047fff0;
extern "C" unsigned long _DAT_0047fff4;
extern "C" unsigned long _DAT_0047fff8;
extern "C" unsigned long _DAT_0047fffc;
extern "C" unsigned long _DAT_00480000;
extern "C" unsigned long _DAT_00480004;
extern "C" unsigned long _DAT_00480008;
extern "C" unsigned long _DAT_0048000c;
extern "C" unsigned long _DAT_00480010;
extern "C" unsigned long _DAT_00480014;
extern "C" unsigned long _DAT_00480018;
extern "C" unsigned long _DAT_0048001c;
extern "C" unsigned long _DAT_004801c4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0047eaf8;
extern "C" unsigned long g_0047ed4c;
extern "C" unsigned long g_0047ed50;
extern "C" unsigned long g_0047ed54;
extern "C" unsigned long g_0047ed58;
extern "C" unsigned long g_0047ed5c;
extern "C" unsigned long g_0047ed60;
extern "C" unsigned long g_0047ed64;
extern "C" unsigned long g_0047ed68;
extern "C" unsigned long g_0047ed6c;
extern "C" unsigned long g_0047ed70;
extern "C" unsigned long g_0047ed74;
extern "C" unsigned long g_0047ed78;
extern "C" unsigned long g_0047ed7c;
extern "C" unsigned long g_0047ed80;
extern "C" unsigned long g_0047ed84;
extern "C" unsigned long g_0047ed88;
extern "C" unsigned long g_0047f06c;
extern "C" unsigned long g_0047f070;
extern "C" unsigned long g_0047f074;
extern "C" unsigned long g_0047f078;
extern "C" unsigned long g_0047f07c;
extern "C" unsigned long g_0047f080;
extern "C" unsigned long g_0047f084;
extern "C" unsigned long g_0047f088;
extern "C" unsigned long g_0047f08c;
extern "C" unsigned long g_0047f090;
extern "C" unsigned long g_0047f094;
extern "C" unsigned long g_0047f154;
extern "C" unsigned long g_0047f158;
extern "C" unsigned long g_0047f330;
extern "C" unsigned long g_0047f334;
extern "C" unsigned long g_0047f338;
extern "C" unsigned long g_0047f33c;
extern "C" unsigned long g_0047f340;
extern "C" unsigned long g_0047f344;
extern "C" unsigned long g_0047f348;
extern "C" unsigned long g_0047f34c;
extern "C" unsigned long g_0047f4d4;
extern "C" unsigned long g_0047f4d8;
extern "C" unsigned long g_0047f4dc;
extern "C" unsigned long g_0047f4e0;
extern "C" unsigned long g_0047f4e4;
extern "C" unsigned long g_0047f4e8;
extern "C" unsigned long g_0047f4ec;
extern "C" unsigned long g_0047f4f0;
extern "C" unsigned long g_0047f4f4;
extern "C" unsigned long g_0047f4f8;
extern "C" unsigned long g_0047f4fc;
extern "C" unsigned long g_0047f918;
extern "C" unsigned long g_0047f91c;
extern "C" unsigned long g_0047f920;
extern "C" unsigned long g_0047f924;
extern "C" unsigned long g_0047f928;
extern "C" unsigned long g_0047f92c;
extern "C" unsigned long g_0047f930;
extern "C" unsigned long g_0047f934;
extern "C" unsigned long g_0047f938;
extern "C" unsigned long g_0047f93c;
extern "C" unsigned long g_0047f940;
extern "C" unsigned long g_0047f944;
extern "C" unsigned long g_0047f948;
extern "C" unsigned long g_0047f94c;
extern "C" unsigned long g_0047f950;
extern "C" unsigned long g_0047f954;
extern "C" unsigned long g_0047f958;
extern "C" unsigned long g_0047f95c;
extern "C" unsigned long g_0047f960;
extern "C" unsigned long g_0047fc08;
extern "C" unsigned long g_0047fc0c;
extern "C" unsigned long g_0047fc10;
extern "C" unsigned long g_0047fc14;
extern "C" unsigned long g_0047fc18;
extern "C" unsigned long g_0047fc1c;
extern "C" unsigned long g_0047fc20;
extern "C" unsigned long g_0047fc24;
extern "C" unsigned long g_0047fc28;
extern "C" unsigned long g_0047fc2c;
extern "C" unsigned long g_0047fc30;
extern "C" unsigned long g_0047fc34;
extern "C" unsigned long g_0047fc38;
extern "C" unsigned long g_0047fc3c;
extern "C" unsigned long g_0047fc40;
extern "C" unsigned long g_0047fc44;
extern "C" unsigned long g_0047fc48;
extern "C" unsigned long g_0047ffd8;
extern "C" unsigned long g_0047ffdc;
extern "C" unsigned long g_0047ffe0;
extern "C" unsigned long g_0047ffe4;
extern "C" unsigned long g_0047ffe8;
extern "C" unsigned long g_0047ffec;
extern "C" unsigned long g_0047fff0;
extern "C" unsigned long g_0047fff4;
extern "C" unsigned long g_0047fff8;
extern "C" unsigned long g_0047fffc;
extern "C" unsigned long g_00480000;
extern "C" unsigned long g_00480004;
extern "C" unsigned long g_00480008;
extern "C" unsigned long g_0048000c;
extern "C" unsigned long g_00480010;
extern "C" unsigned long g_00480014;
extern "C" unsigned long g_00480018;
extern "C" unsigned long g_0048001c;
extern "C" unsigned long g_004801c4;
GMSpecDataGet::~GMSpecDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void GMSpecDataGet::onUpData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GMSpecDataGet::importTableData(sqlite3* p1, sqlite3* p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GMSpecDataGet::importDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GMSpecDataGet::updateDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GMSpecDataGet::onSpecGMData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 * GMSpecDataGet::getGMHeaders()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

undefined4 * GMSpecDataGet::getFileGMHeaders()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool GMSpecDataGet::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

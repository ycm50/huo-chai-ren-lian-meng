#include "MineHttp.h"
#include "BLGameScene.h"
#include "DefenseMineInfo.h"
#include "MineData.h"
#include "MineUtils.h"
#include "MineitemData.h"
#include "StringEx.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT31(...);
extern "C" unsigned long _DAT_0048ef54;
extern "C" unsigned long _DAT_00490e18;
extern "C" unsigned long _DAT_00490e1c;
extern "C" unsigned long _DAT_00490e20;
extern "C" unsigned long _DAT_00490e24;
extern "C" unsigned long _DAT_00490e28;
extern "C" unsigned long _DAT_00490e2c;
extern "C" unsigned long _DAT_00490e30;
extern "C" unsigned long _DAT_00490e34;
extern "C" unsigned long _DAT_00490e38;
extern "C" unsigned long _DAT_00490e3c;
extern "C" unsigned long _DAT_00490e40;
extern "C" unsigned long _DAT_00490e44;
extern "C" unsigned long _DAT_00490e48;
extern "C" unsigned long _DAT_00490e4c;
extern "C" unsigned long _DAT_00490e50;
extern "C" unsigned long _DAT_00490e54;
extern "C" unsigned long _DAT_00490e58;
extern "C" unsigned long _DAT_00490e5c;
extern "C" unsigned long _DAT_00490e60;
extern "C" unsigned long _DAT_00490e64;
extern "C" unsigned long _DAT_00491040;
extern "C" unsigned long _DAT_00491044;
extern "C" unsigned long _DAT_00491048;
extern "C" unsigned long _DAT_0049104c;
extern "C" unsigned long _DAT_00491050;
extern "C" unsigned long _DAT_00491054;
extern "C" unsigned long _DAT_00491058;
extern "C" unsigned long _DAT_0049105c;
extern "C" unsigned long _DAT_00491060;
extern "C" unsigned long _DAT_00491064;
extern "C" unsigned long _DAT_00491068;
extern "C" unsigned long _DAT_00491c08;
extern "C" unsigned long _DAT_00491c0c;
extern "C" unsigned long _DAT_00491c10;
extern "C" unsigned long _DAT_00491c14;
extern "C" unsigned long _DAT_00491c18;
extern "C" unsigned long _DAT_00491c1c;
extern "C" unsigned long _DAT_00491c20;
extern "C" unsigned long _DAT_00491c24;
extern "C" unsigned long _DAT_00491f64;
extern "C" unsigned long _DAT_00491f68;
extern "C" unsigned long _DAT_00491f6c;
extern "C" unsigned long _DAT_00491f70;
extern "C" unsigned long _DAT_00491f74;
extern "C" unsigned long _DAT_00491f78;
extern "C" unsigned long _DAT_00491f7c;
extern "C" unsigned long _DAT_00491f80;
extern "C" unsigned long _DAT_00491f84;
extern "C" unsigned long _DAT_00491f88;
extern "C" unsigned long _DAT_00491f8c;
extern "C" unsigned long _DAT_004920bc;
extern "C" unsigned long _DAT_004920c0;
extern "C" unsigned long _DAT_004920c4;
extern "C" unsigned long _DAT_004920c8;
extern "C" unsigned long _DAT_004920cc;
extern "C" unsigned long _DAT_004920d0;
extern "C" unsigned long _DAT_0049224c;
extern "C" unsigned long _DAT_00492250;
extern "C" unsigned long _DAT_00492254;
extern "C" unsigned long _DAT_00492258;
extern "C" unsigned long _DAT_0049225c;
extern "C" unsigned long _DAT_00492260;
extern "C" unsigned long _DAT_00492264;
extern "C" unsigned long _DAT_004923d0;
extern "C" unsigned long _DAT_004923d4;
extern "C" unsigned long _DAT_004923d8;
extern "C" unsigned long _DAT_004923dc;
extern "C" unsigned long _DAT_004923e0;
extern "C" unsigned long _DAT_004923e4;
extern "C" unsigned long _DAT_004923e8;
extern "C" unsigned long _DAT_004923ec;
extern "C" unsigned long _DAT_004923f0;
extern "C" unsigned long _DAT_004923f4;
extern "C" unsigned long _DAT_004926d4;
extern "C" unsigned long _DAT_004926d8;
extern "C" unsigned long _DAT_004926dc;
extern "C" unsigned long _DAT_004926e0;
extern "C" unsigned long _DAT_004926e4;
extern "C" unsigned long _DAT_004926e8;
extern "C" unsigned long _DAT_004926ec;
extern "C" unsigned long _DAT_004926f0;
extern "C" unsigned long _DAT_004926f4;
extern "C" unsigned long _DAT_004926f8;
extern "C" unsigned long _DAT_004926fc;
extern "C" unsigned long _DAT_00492700;
extern "C" unsigned long _DAT_00492704;
extern "C" unsigned long _DAT_00492708;
extern "C" unsigned long _DAT_0049270c;
extern "C" unsigned long _DAT_00492710;
extern "C" unsigned long _DAT_0049287c;
extern "C" unsigned long _DAT_00492880;
extern "C" unsigned long _DAT_00492884;
extern "C" unsigned long _DAT_00492888;
extern "C" unsigned long _DAT_0049288c;
extern "C" unsigned long _DAT_00492890;
extern "C" unsigned long _DAT_00492894;
extern "C" unsigned long _DAT_00492898;
extern "C" unsigned long _DAT_0049289c;
extern "C" unsigned long _DAT_004928a0;
extern "C" unsigned long _DAT_00492a0c;
extern "C" unsigned long _DAT_00492a10;
extern "C" unsigned long _DAT_00492a14;
extern "C" unsigned long _DAT_00492a18;
extern "C" unsigned long _DAT_00492a1c;
extern "C" unsigned long _DAT_00492a20;
extern "C" unsigned long _DAT_00492a24;
extern "C" unsigned long _DAT_00492a28;
extern "C" unsigned long _DAT_00492a2c;
extern "C" unsigned long _DAT_00492a30;
extern "C" unsigned long _DAT_00492b60;
extern "C" unsigned long _DAT_00492b64;
extern "C" unsigned long _DAT_00492b68;
extern "C" unsigned long _DAT_00492b6c;
extern "C" unsigned long _DAT_00492b70;
extern "C" unsigned long _DAT_00492b74;
extern "C" unsigned long _DAT_00492d2c;
extern "C" unsigned long _DAT_00492d30;
extern "C" unsigned long _DAT_00492d34;
extern "C" unsigned long _DAT_00492d38;
extern "C" unsigned long _DAT_00492d3c;
extern "C" unsigned long _DAT_00492d40;
extern "C" unsigned long _DAT_00492d44;
extern "C" unsigned long _DAT_00492d48;
extern "C" unsigned long _DAT_00492fb0;
extern "C" unsigned long _DAT_00492fb4;
extern "C" unsigned long _DAT_00492fb8;
extern "C" unsigned long _DAT_00492fbc;
extern "C" unsigned long _DAT_00492fc0;
extern "C" unsigned long _DAT_00492fc4;
extern "C" unsigned long _DAT_00492fc8;
extern "C" unsigned long _DAT_00492fcc;
extern "C" unsigned long _DAT_00492fd0;
extern "C" unsigned long _DAT_00492fd4;
extern "C" unsigned long _DAT_00492fd8;
extern "C" unsigned long _DAT_00492fdc;
extern "C" unsigned long _DAT_00492fe0;
extern "C" unsigned long _DAT_00493370;
extern "C" unsigned long _DAT_00493374;
extern "C" unsigned long _DAT_00493378;
extern "C" unsigned long _DAT_0049337c;
extern "C" unsigned long _DAT_00493380;
extern "C" unsigned long _DAT_00493384;
extern "C" unsigned long _DAT_00493388;
extern "C" unsigned long _DAT_0049338c;
extern "C" unsigned long _DAT_00493390;
extern "C" unsigned long _DAT_00493394;
extern "C" unsigned long _DAT_00493398;
extern "C" unsigned long _DAT_0049339c;
extern "C" unsigned long _DAT_004933a0;
extern "C" unsigned long _DAT_004933a4;
extern "C" unsigned long _DAT_004935a4;
extern "C" unsigned long _DAT_004935a8;
extern "C" unsigned long _DAT_004935ac;
extern "C" unsigned long _DAT_004935b0;
extern "C" unsigned long _DAT_004935b4;
extern "C" unsigned long g_0048ef54;
extern "C" unsigned long g_00490e18;
extern "C" unsigned long g_00490e1c;
extern "C" unsigned long g_00490e20;
extern "C" unsigned long g_00490e24;
extern "C" unsigned long g_00490e28;
extern "C" unsigned long g_00490e2c;
extern "C" unsigned long g_00490e30;
extern "C" unsigned long g_00490e34;
extern "C" unsigned long g_00490e38;
extern "C" unsigned long g_00490e3c;
extern "C" unsigned long g_00490e40;
extern "C" unsigned long g_00490e44;
extern "C" unsigned long g_00490e48;
extern "C" unsigned long g_00490e4c;
extern "C" unsigned long g_00490e50;
extern "C" unsigned long g_00490e54;
extern "C" unsigned long g_00490e58;
extern "C" unsigned long g_00490e5c;
extern "C" unsigned long g_00490e60;
extern "C" unsigned long g_00490e64;
extern "C" unsigned long g_00491040;
extern "C" unsigned long g_00491044;
extern "C" unsigned long g_00491048;
extern "C" unsigned long g_0049104c;
extern "C" unsigned long g_00491050;
extern "C" unsigned long g_00491054;
extern "C" unsigned long g_00491058;
extern "C" unsigned long g_0049105c;
extern "C" unsigned long g_00491060;
extern "C" unsigned long g_00491064;
extern "C" unsigned long g_00491068;
extern "C" unsigned long g_00491c08;
extern "C" unsigned long g_00491c0c;
extern "C" unsigned long g_00491c10;
extern "C" unsigned long g_00491c14;
extern "C" unsigned long g_00491c18;
extern "C" unsigned long g_00491c1c;
extern "C" unsigned long g_00491c20;
extern "C" unsigned long g_00491c24;
extern "C" unsigned long g_00491f64;
extern "C" unsigned long g_00491f68;
extern "C" unsigned long g_00491f6c;
extern "C" unsigned long g_00491f70;
extern "C" unsigned long g_00491f74;
extern "C" unsigned long g_00491f78;
extern "C" unsigned long g_00491f7c;
extern "C" unsigned long g_00491f80;
extern "C" unsigned long g_00491f84;
extern "C" unsigned long g_00491f88;
extern "C" unsigned long g_00491f8c;
extern "C" unsigned long g_004920bc;
extern "C" unsigned long g_004920c0;
extern "C" unsigned long g_004920c4;
extern "C" unsigned long g_004920c8;
extern "C" unsigned long g_004920cc;
extern "C" unsigned long g_004920d0;
extern "C" unsigned long g_0049224c;
extern "C" unsigned long g_00492250;
extern "C" unsigned long g_00492254;
extern "C" unsigned long g_00492258;
extern "C" unsigned long g_0049225c;
extern "C" unsigned long g_00492260;
extern "C" unsigned long g_00492264;
extern "C" unsigned long g_004923d0;
extern "C" unsigned long g_004923d4;
extern "C" unsigned long g_004923d8;
extern "C" unsigned long g_004923dc;
extern "C" unsigned long g_004923e0;
extern "C" unsigned long g_004923e4;
extern "C" unsigned long g_004923e8;
extern "C" unsigned long g_004923ec;
extern "C" unsigned long g_004923f0;
extern "C" unsigned long g_004923f4;
extern "C" unsigned long g_004926d4;
extern "C" unsigned long g_004926d8;
extern "C" unsigned long g_004926dc;
extern "C" unsigned long g_004926e0;
extern "C" unsigned long g_004926e4;
extern "C" unsigned long g_004926e8;
extern "C" unsigned long g_004926ec;
extern "C" unsigned long g_004926f0;
extern "C" unsigned long g_004926f4;
extern "C" unsigned long g_004926f8;
extern "C" unsigned long g_004926fc;
extern "C" unsigned long g_00492700;
extern "C" unsigned long g_00492704;
extern "C" unsigned long g_00492708;
extern "C" unsigned long g_0049270c;
extern "C" unsigned long g_00492710;
extern "C" unsigned long g_0049287c;
extern "C" unsigned long g_00492880;
extern "C" unsigned long g_00492884;
extern "C" unsigned long g_00492888;
extern "C" unsigned long g_0049288c;
extern "C" unsigned long g_00492890;
extern "C" unsigned long g_00492894;
extern "C" unsigned long g_00492898;
extern "C" unsigned long g_0049289c;
extern "C" unsigned long g_004928a0;
extern "C" unsigned long g_00492a0c;
extern "C" unsigned long g_00492a10;
extern "C" unsigned long g_00492a14;
extern "C" unsigned long g_00492a18;
extern "C" unsigned long g_00492a1c;
extern "C" unsigned long g_00492a20;
extern "C" unsigned long g_00492a24;
extern "C" unsigned long g_00492a28;
extern "C" unsigned long g_00492a2c;
extern "C" unsigned long g_00492a30;
extern "C" unsigned long g_00492b60;
extern "C" unsigned long g_00492b64;
extern "C" unsigned long g_00492b68;
extern "C" unsigned long g_00492b6c;
extern "C" unsigned long g_00492b70;
extern "C" unsigned long g_00492b74;
extern "C" unsigned long g_00492d2c;
extern "C" unsigned long g_00492d30;
extern "C" unsigned long g_00492d34;
extern "C" unsigned long g_00492d38;
extern "C" unsigned long g_00492d3c;
extern "C" unsigned long g_00492d40;
extern "C" unsigned long g_00492d44;
extern "C" unsigned long g_00492d48;
extern "C" unsigned long g_00492fb0;
extern "C" unsigned long g_00492fb4;
extern "C" unsigned long g_00492fb8;
extern "C" unsigned long g_00492fbc;
extern "C" unsigned long g_00492fc0;
extern "C" unsigned long g_00492fc4;
extern "C" unsigned long g_00492fc8;
extern "C" unsigned long g_00492fcc;
extern "C" unsigned long g_00492fd0;
extern "C" unsigned long g_00492fd4;
extern "C" unsigned long g_00492fd8;
extern "C" unsigned long g_00492fdc;
extern "C" unsigned long g_00492fe0;
extern "C" unsigned long g_00493370;
extern "C" unsigned long g_00493374;
extern "C" unsigned long g_00493378;
extern "C" unsigned long g_0049337c;
extern "C" unsigned long g_00493380;
extern "C" unsigned long g_00493384;
extern "C" unsigned long g_00493388;
extern "C" unsigned long g_0049338c;
extern "C" unsigned long g_00493390;
extern "C" unsigned long g_00493394;
extern "C" unsigned long g_00493398;
extern "C" unsigned long g_0049339c;
extern "C" unsigned long g_004933a0;
extern "C" unsigned long g_004933a4;
extern "C" unsigned long g_004935a4;
extern "C" unsigned long g_004935a8;
extern "C" unsigned long g_004935ac;
extern "C" unsigned long g_004935b0;
extern "C" unsigned long g_004935b4;
MineHttp::~MineHttp()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
void MineHttp::SysMinejsonInfo(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool MineHttp::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void MineHttp::onGetResultData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetOwnData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetRefreshData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetRecoverData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetRewardData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetPositionData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetProtectData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetSnatchData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetdefenseData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetbuyData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineHttp::onGetHistoryData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

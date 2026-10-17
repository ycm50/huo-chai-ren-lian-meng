#include "BLUpAndDownUtils.h"
#include "CCFileUtils.h"
#include "CCUserDefault.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLDebug.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "CCJson.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "DownLoadDataNumData.h"
#include "GuideManager.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "Json.h"
#include "BLForwards.h"
#include "sir_builtin.h"


using namespace cocos2d;
// 兜底声明
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" unsigned long UNK_006c9350;
extern "C" unsigned long UNK_006c938c;
extern "C" unsigned long UNK_006c93b4;
extern "C" unsigned long UNK_006c93d0;
extern "C" unsigned long UNK_006c93f0;
extern "C" unsigned long UNK_006c9406;
extern "C" unsigned long UNK_006c9416;
extern "C" unsigned long UNK_006c9430;
extern "C" unsigned long UNK_006c943a;
extern "C" unsigned long UNK_006c945e;
extern "C" unsigned long UNK_006c948e;
extern "C" unsigned long UNK_006c94a6;
extern "C" unsigned long UNK_006c94bc;
extern "C" unsigned long UNK_006c94ea;
extern "C" unsigned long UNK_006c951e;
extern "C" unsigned long UNK_006c9548;
extern "C" unsigned long UNK_006c95b4;
extern "C" unsigned long UNK_006c9626;
extern "C" unsigned long UNK_006c9660;
extern "C" unsigned long UNK_006c96b6;
extern "C" unsigned long UNK_006c96c6;
extern "C" unsigned long UNK_006c972e;
extern "C" unsigned long UNK_006c976c;
extern "C" unsigned long UNK_006c978a;
extern "C" unsigned long UNK_006c9794;
extern "C" unsigned long UNK_006c979e;
extern "C" unsigned long UNK_006c97e8;
extern "C" unsigned long UNK_006c9834;
extern "C" unsigned long UNK_006c983e;
extern "C" unsigned long UNK_006c9862;
extern "C" unsigned long UNK_006c9880;
extern "C" unsigned long UNK_006c98a6;
extern "C" unsigned long UNK_006c98bc;
extern "C" unsigned long UNK_006c9904;
extern "C" unsigned long UNK_006c992c;
extern "C" unsigned long UNK_006c9938;
extern "C" unsigned long UNK_006c99b8;
extern "C" unsigned long UNK_006c99c6;
extern "C" unsigned long UNK_006c99d8;
extern "C" unsigned long UNK_006c99f2;
extern "C" unsigned long UNK_006c9a0c;
extern "C" unsigned long UNK_006c9a26;
extern "C" unsigned long UNK_006c9a70;
extern "C" unsigned long UNK_006c9a7e;
extern "C" unsigned long UNK_006c9a8a;
extern "C" unsigned long UNK_006c9a9a;
extern "C" unsigned long UNK_006c9ab4;
extern "C" unsigned long UNK_006c9acc;
extern "C" unsigned long UNK_006c9b1c;
extern "C" unsigned long UNK_006c9b7e;
extern "C" unsigned long UNK_006c9b8e;
extern "C" unsigned long UNK_006c9bae;
extern "C" unsigned long UNK_006c9c12;
extern "C" unsigned long UNK_006c9c2a;
extern "C" unsigned long UNK_006c9c46;
extern "C" unsigned long UNK_006c9c64;
extern "C" unsigned long UNK_006c9c74;
extern "C" unsigned long UNK_006c9c94;
extern "C" unsigned long UNK_006c9cf8;
extern "C" unsigned long UNK_006c9cfe;
extern "C" unsigned long UNK_006c9d2e;
extern "C" unsigned long UNK_006c9d3a;
extern "C" unsigned long UNK_006c9eca;
extern "C" unsigned long UNK_006c9eea;
extern "C" unsigned long UNK_006c9fa8;
extern "C" unsigned long UNK_006c9fbe;
extern "C" unsigned long UNK_006c9fcc;
extern "C" unsigned long UNK_006c9fd8;
extern "C" unsigned long UNK_006ca042;
extern "C" unsigned long UNK_006ca05a;
extern "C" unsigned long UNK_006ca05c;
extern "C" unsigned long UNK_006ca0c4;
extern "C" unsigned long UNK_006ca19c;
extern "C" unsigned long UNK_006ca1e0;
extern "C" unsigned long UNK_006ca1e2;
extern "C" unsigned long UNK_006ca24a;
extern "C" unsigned long UNK_006ca29c;
extern "C" unsigned long UNK_006ca2aa;
extern "C" unsigned long UNK_006ca2b8;
extern "C" unsigned long UNK_006ca2d0;
extern "C" unsigned long UNK_006ca2ee;
extern "C" unsigned long UNK_006ca33c;
extern "C" unsigned long UNK_006ca354;
extern "C" unsigned long UNK_006ca41e;
extern "C" unsigned long UNK_006ca596;
extern "C" unsigned long UNK_006ca5e0;
extern "C" unsigned long UNK_006ca640;
extern "C" unsigned long UNK_006ca666;
extern "C" unsigned long UNK_006ca682;
extern "C" unsigned long UNK_006ca68e;
extern "C" unsigned long UNK_006ca698;
extern "C" unsigned long UNK_006ca6aa;
extern "C" unsigned long UNK_006ca6ca;
extern "C" unsigned long UNK_006ca6d4;
extern "C" unsigned long UNK_006ca6e4;
extern "C" unsigned long UNK_006ca6f8;
extern "C" unsigned long UNK_006ca714;
extern "C" unsigned long UNK_006ca73c;
extern "C" unsigned long UNK_006ca774;
extern "C" unsigned long UNK_006ca780;
extern "C" unsigned long UNK_006ca7c6;
extern "C" unsigned long UNK_006ca7fa;
extern "C" unsigned long UNK_006ca820;
extern "C" unsigned long UNK_006ca8b8;
extern "C" unsigned long UNK_006ca8fe;
extern "C" unsigned long UNK_006ca90e;
extern "C" unsigned long _UNK_006c937c;
extern "C" unsigned long _UNK_006c9390;
extern "C" unsigned long _UNK_006c93b8;
extern "C" unsigned long _UNK_006c96cc;
extern "C" unsigned long _UNK_006c96d0;
extern "C" unsigned long _UNK_006c96d4;
extern "C" unsigned long _UNK_006c96d8;
extern "C" unsigned long _UNK_006c96dc;
extern "C" unsigned long _UNK_006c96e0;
extern "C" unsigned long _UNK_006c96e4;
extern "C" unsigned long _UNK_006c96e8;
extern "C" unsigned long _UNK_006c96ec;
extern "C" unsigned long _UNK_006c96f0;
extern "C" unsigned long _UNK_006c96f4;
extern "C" unsigned long _UNK_006c96f8;
extern "C" unsigned long _UNK_006c96fc;
extern "C" unsigned long _UNK_006c9700;
extern "C" unsigned long _UNK_006c9704;
extern "C" unsigned long _UNK_006c9708;
extern "C" unsigned long _UNK_006c970c;
extern "C" unsigned long _UNK_006c9710;
extern "C" unsigned long _UNK_006c9714;
extern "C" unsigned long _UNK_006c9718;
extern "C" unsigned long _UNK_006c971c;
extern "C" unsigned long _UNK_006c9720;
extern "C" unsigned long _UNK_006c9724;
extern "C" unsigned long _UNK_006c97c4;
extern "C" unsigned long _UNK_006c97c8;
extern "C" unsigned long _UNK_006c97cc;
extern "C" unsigned long _UNK_006c97d0;
extern "C" unsigned long _UNK_006c97d4;
extern "C" unsigned long _UNK_006c9814;
extern "C" unsigned long _UNK_006c9844;
extern "C" unsigned long _UNK_006c9848;
extern "C" unsigned long _UNK_006c9b24;
extern "C" unsigned long _UNK_006c9b28;
extern "C" unsigned long _UNK_006c9b2c;
extern "C" unsigned long _UNK_006c9b30;
extern "C" unsigned long _UNK_006c9b34;
extern "C" unsigned long _UNK_006c9b38;
extern "C" unsigned long _UNK_006c9b3c;
extern "C" unsigned long _UNK_006c9b40;
extern "C" unsigned long _UNK_006c9b44;
extern "C" unsigned long _UNK_006c9b48;
extern "C" unsigned long _UNK_006c9b4c;
extern "C" unsigned long _UNK_006c9b50;
extern "C" unsigned long _UNK_006c9b54;
extern "C" unsigned long _UNK_006c9b58;
extern "C" unsigned long _UNK_006c9b5c;
extern "C" unsigned long _UNK_006c9b60;
extern "C" unsigned long _UNK_006c9b64;
extern "C" unsigned long _UNK_006c9b68;
extern "C" unsigned long _UNK_006c9b6c;
extern "C" unsigned long _UNK_006c9b70;
extern "C" unsigned long _UNK_006c9e84;
extern "C" unsigned long _UNK_006c9e88;
extern "C" unsigned long _UNK_006c9e8c;
extern "C" unsigned long _UNK_006c9e90;
extern "C" unsigned long _UNK_006c9e94;
extern "C" unsigned long _UNK_006c9e98;
extern "C" unsigned long _UNK_006c9e9c;
extern "C" unsigned long _UNK_006c9ea0;
extern "C" unsigned long _UNK_006c9ea4;
extern "C" unsigned long _UNK_006c9ea8;
extern "C" unsigned long _UNK_006c9eac;
extern "C" unsigned long _UNK_006c9eb0;
extern "C" unsigned long _UNK_006c9eb4;
extern "C" unsigned long _UNK_006c9f74;
extern "C" unsigned long _UNK_006c9f78;
extern "C" unsigned long _UNK_006ca150;
extern "C" unsigned long _UNK_006ca154;
extern "C" unsigned long _UNK_006ca158;
extern "C" unsigned long _UNK_006ca15c;
extern "C" unsigned long _UNK_006ca160;
extern "C" unsigned long _UNK_006ca164;
extern "C" unsigned long _UNK_006ca168;
extern "C" unsigned long _UNK_006ca16c;
extern "C" unsigned long _UNK_006ca4b8;
extern "C" unsigned long _UNK_006ca4bc;
extern "C" unsigned long _UNK_006ca4c0;
extern "C" unsigned long _UNK_006ca4c4;
extern "C" unsigned long _UNK_006ca4c8;
extern "C" unsigned long _UNK_006ca4cc;
extern "C" unsigned long _UNK_006ca4d0;
extern "C" unsigned long _UNK_006ca4d4;
extern "C" unsigned long _UNK_006ca4d8;
extern "C" unsigned long _UNK_006ca4dc;
extern "C" unsigned long _UNK_006ca4e0;
extern "C" unsigned long _UNK_006ca4e4;
extern "C" unsigned long _UNK_006ca62c;
extern "C" unsigned long _UNK_006ca630;
extern "C" unsigned long _UNK_006ca860;
extern "C" unsigned long _UNK_006ca864;
extern "C" unsigned long _UNK_006ca868;
extern "C" unsigned long _UNK_006ca86c;
extern "C" unsigned long _UNK_006ca870;
extern "C" unsigned long _UNK_006ca874;
extern "C" unsigned long _UNK_006ca878;
extern "C" unsigned long _UNK_006ca87c;
extern "C" unsigned long _UNK_006ca880;
extern "C" unsigned long _UNK_006ca884;
extern "C" unsigned long _UNK_006ca888;
extern "C" unsigned long _UNK_006ca88c;
extern "C" unsigned long _UNK_006ca890;
extern "C" unsigned long _UNK_006ca894;
extern "C" unsigned long _UNK_006ca898;
extern "C" unsigned long _UNK_006ca89c;
extern "C" unsigned long _UNK_006ca8a0;
extern "C" unsigned long _UNK_006ca95c;
extern "C" unsigned long _UNK_006ca960;
extern "C" unsigned long _UNK_006ca964;
extern "C" unsigned long g_006c9350;
extern "C" unsigned long g_006c937c;
extern "C" unsigned long g_006c938c;
extern "C" unsigned long g_006c9390;
extern "C" unsigned long g_006c93b4;
extern "C" unsigned long g_006c93b8;
extern "C" unsigned long g_006c93d0;
extern "C" unsigned long g_006c93f0;
extern "C" unsigned long g_006c9406;
extern "C" unsigned long g_006c9416;
extern "C" unsigned long g_006c9430;
extern "C" unsigned long g_006c943a;
extern "C" unsigned long g_006c945e;
extern "C" unsigned long g_006c948e;
extern "C" unsigned long g_006c94a6;
extern "C" unsigned long g_006c94bc;
extern "C" unsigned long g_006c94ea;
extern "C" unsigned long g_006c951e;
extern "C" unsigned long g_006c9548;
extern "C" unsigned long g_006c95b4;
extern "C" unsigned long g_006c9626;
extern "C" unsigned long g_006c9660;
extern "C" unsigned long g_006c96b6;
extern "C" unsigned long g_006c96c6;
extern "C" unsigned long g_006c96cc;
extern "C" unsigned long g_006c96d0;
extern "C" unsigned long g_006c96d4;
extern "C" unsigned long g_006c96d8;
extern "C" unsigned long g_006c96dc;
extern "C" unsigned long g_006c96e0;
extern "C" unsigned long g_006c96e4;
extern "C" unsigned long g_006c96e8;
extern "C" unsigned long g_006c96ec;
extern "C" unsigned long g_006c96f0;
extern "C" unsigned long g_006c96f4;
extern "C" unsigned long g_006c96f8;
extern "C" unsigned long g_006c96fc;
extern "C" unsigned long g_006c9700;
extern "C" unsigned long g_006c9704;
extern "C" unsigned long g_006c9708;
extern "C" unsigned long g_006c970c;
extern "C" unsigned long g_006c9710;
extern "C" unsigned long g_006c9714;
extern "C" unsigned long g_006c9718;
extern "C" unsigned long g_006c971c;
extern "C" unsigned long g_006c9720;
extern "C" unsigned long g_006c9724;
extern "C" unsigned long g_006c972e;
extern "C" unsigned long g_006c976c;
extern "C" unsigned long g_006c978a;
extern "C" unsigned long g_006c9794;
extern "C" unsigned long g_006c979e;
extern "C" unsigned long g_006c97c4;
extern "C" unsigned long g_006c97c8;
extern "C" unsigned long g_006c97cc;
extern "C" unsigned long g_006c97d0;
extern "C" unsigned long g_006c97d4;
extern "C" unsigned long g_006c97e8;
extern "C" unsigned long g_006c9814;
extern "C" unsigned long g_006c9834;
extern "C" unsigned long g_006c983e;
extern "C" unsigned long g_006c9844;
extern "C" unsigned long g_006c9848;
extern "C" unsigned long g_006c9862;
extern "C" unsigned long g_006c9880;
extern "C" unsigned long g_006c98a6;
extern "C" unsigned long g_006c98bc;
extern "C" unsigned long g_006c9904;
extern "C" unsigned long g_006c992c;
extern "C" unsigned long g_006c9938;
extern "C" unsigned long g_006c99b8;
extern "C" unsigned long g_006c99c6;
extern "C" unsigned long g_006c99d8;
extern "C" unsigned long g_006c99f2;
extern "C" unsigned long g_006c9a0c;
extern "C" unsigned long g_006c9a26;
extern "C" unsigned long g_006c9a70;
extern "C" unsigned long g_006c9a7e;
extern "C" unsigned long g_006c9a8a;
extern "C" unsigned long g_006c9a9a;
extern "C" unsigned long g_006c9ab4;
extern "C" unsigned long g_006c9acc;
extern "C" unsigned long g_006c9b1c;
extern "C" unsigned long g_006c9b24;
extern "C" unsigned long g_006c9b28;
extern "C" unsigned long g_006c9b2c;
extern "C" unsigned long g_006c9b30;
extern "C" unsigned long g_006c9b34;
extern "C" unsigned long g_006c9b38;
extern "C" unsigned long g_006c9b3c;
extern "C" unsigned long g_006c9b40;
extern "C" unsigned long g_006c9b44;
extern "C" unsigned long g_006c9b48;
extern "C" unsigned long g_006c9b4c;
extern "C" unsigned long g_006c9b50;
extern "C" unsigned long g_006c9b54;
extern "C" unsigned long g_006c9b58;
extern "C" unsigned long g_006c9b5c;
extern "C" unsigned long g_006c9b60;
extern "C" unsigned long g_006c9b64;
extern "C" unsigned long g_006c9b68;
extern "C" unsigned long g_006c9b6c;
extern "C" unsigned long g_006c9b70;
extern "C" unsigned long g_006c9b7e;
extern "C" unsigned long g_006c9b8e;
extern "C" unsigned long g_006c9bae;
extern "C" unsigned long g_006c9c12;
extern "C" unsigned long g_006c9c2a;
extern "C" unsigned long g_006c9c46;
extern "C" unsigned long g_006c9c64;
extern "C" unsigned long g_006c9c74;
extern "C" unsigned long g_006c9c94;
extern "C" unsigned long g_006c9cf8;
extern "C" unsigned long g_006c9cfe;
extern "C" unsigned long g_006c9d2e;
extern "C" unsigned long g_006c9d3a;
extern "C" unsigned long g_006c9e84;
extern "C" unsigned long g_006c9e88;
extern "C" unsigned long g_006c9e8c;
extern "C" unsigned long g_006c9e90;
extern "C" unsigned long g_006c9e94;
extern "C" unsigned long g_006c9e98;
extern "C" unsigned long g_006c9e9c;
extern "C" unsigned long g_006c9ea0;
extern "C" unsigned long g_006c9ea4;
extern "C" unsigned long g_006c9ea8;
extern "C" unsigned long g_006c9eac;
extern "C" unsigned long g_006c9eb0;
extern "C" unsigned long g_006c9eb4;
extern "C" unsigned long g_006c9eca;
extern "C" unsigned long g_006c9eea;
extern "C" unsigned long g_006c9f74;
extern "C" unsigned long g_006c9f78;
extern "C" unsigned long g_006c9fa8;
extern "C" unsigned long g_006c9fbe;
extern "C" unsigned long g_006c9fcc;
extern "C" unsigned long g_006c9fd8;
extern "C" unsigned long g_006ca042;
extern "C" unsigned long g_006ca05a;
extern "C" unsigned long g_006ca05c;
extern "C" unsigned long g_006ca0c4;
extern "C" unsigned long g_006ca150;
extern "C" unsigned long g_006ca154;
extern "C" unsigned long g_006ca158;
extern "C" unsigned long g_006ca15c;
extern "C" unsigned long g_006ca160;
extern "C" unsigned long g_006ca164;
extern "C" unsigned long g_006ca168;
extern "C" unsigned long g_006ca16c;
extern "C" unsigned long g_006ca19c;
extern "C" unsigned long g_006ca1e0;
extern "C" unsigned long g_006ca1e2;
extern "C" unsigned long g_006ca24a;
extern "C" unsigned long g_006ca29c;
extern "C" unsigned long g_006ca2aa;
extern "C" unsigned long g_006ca2b8;
extern "C" unsigned long g_006ca2d0;
extern "C" unsigned long g_006ca2ee;
extern "C" unsigned long g_006ca33c;
extern "C" unsigned long g_006ca354;
extern "C" unsigned long g_006ca41e;
extern "C" unsigned long g_006ca4b8;
extern "C" unsigned long g_006ca4bc;
extern "C" unsigned long g_006ca4c0;
extern "C" unsigned long g_006ca4c4;
extern "C" unsigned long g_006ca4c8;
extern "C" unsigned long g_006ca4cc;
extern "C" unsigned long g_006ca4d0;
extern "C" unsigned long g_006ca4d4;
extern "C" unsigned long g_006ca4d8;
extern "C" unsigned long g_006ca4dc;
extern "C" unsigned long g_006ca4e0;
extern "C" unsigned long g_006ca4e4;
extern "C" unsigned long g_006ca596;
extern "C" unsigned long g_006ca5e0;
extern "C" unsigned long g_006ca62c;
extern "C" unsigned long g_006ca630;
extern "C" unsigned long g_006ca640;
extern "C" unsigned long g_006ca666;
extern "C" unsigned long g_006ca682;
extern "C" unsigned long g_006ca68e;
extern "C" unsigned long g_006ca698;
extern "C" unsigned long g_006ca6aa;
extern "C" unsigned long g_006ca6ca;
extern "C" unsigned long g_006ca6d4;
extern "C" unsigned long g_006ca6e4;
extern "C" unsigned long g_006ca6f8;
extern "C" unsigned long g_006ca714;
extern "C" unsigned long g_006ca73c;
extern "C" unsigned long g_006ca774;
extern "C" unsigned long g_006ca780;
extern "C" unsigned long g_006ca7c6;
extern "C" unsigned long g_006ca7fa;
extern "C" unsigned long g_006ca820;
extern "C" unsigned long g_006ca860;
extern "C" unsigned long g_006ca864;
extern "C" unsigned long g_006ca868;
extern "C" unsigned long g_006ca86c;
extern "C" unsigned long g_006ca870;
extern "C" unsigned long g_006ca874;
extern "C" unsigned long g_006ca878;
extern "C" unsigned long g_006ca87c;
extern "C" unsigned long g_006ca880;
extern "C" unsigned long g_006ca884;
extern "C" unsigned long g_006ca888;
extern "C" unsigned long g_006ca88c;
extern "C" unsigned long g_006ca890;
extern "C" unsigned long g_006ca894;
extern "C" unsigned long g_006ca898;
extern "C" unsigned long g_006ca89c;
extern "C" unsigned long g_006ca8a0;
extern "C" unsigned long g_006ca8b8;
extern "C" unsigned long g_006ca8fe;
extern "C" unsigned long g_006ca90e;
extern "C" unsigned long g_006ca95c;
extern "C" unsigned long g_006ca960;
extern "C" unsigned long g_006ca964;
int * BLUpAndDownUtils::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
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

BLUpAndDownUtils::~BLUpAndDownUtils()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_006c9350 + g_006c937c);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLUpAndDownUtils::BLUpAndDownUtils()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006c97e8 + g_006c9814);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 1;
  *(undefined1 *)(((int)this) + 0x43) = 1;
  return;
}









void BLUpAndDownUtils::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLUpAndDownUtils::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLUpAndDownUtils::onUpData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iStack_50;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  iVar3 = (undefined4)(intptr_t)(g_006c96cc);
  if (*(char *)(((int)this) + 0x10c) == '\0') {
    if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
      return;
    }
code_r0x006c940c:
    iVar10 = (undefined4)(intptr_t)(*(int *)(p2 + 0x34));
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006c9416 + (intptr_t)(g_006c96d8)), iVar10);
    if (iVar10 == 200) {
      if (*(char *)(p2 + 0x18) == '\0') {
        if (*(char *)(((int)this) + 0x10c) == '\0') {
          return;
        }
        uVar1 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006c94a6 + (intptr_t)(g_006c96ec)));
        if (*(int *)(((int)this) + 0x108) == 1) {
          uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
          puVar7 = (unsigned char *)((char *)&g_006c94bc + (intptr_t)(g_006c96f0));
        }
        else {
          piVar2 = (int *)((DataManager *)this)->shareDataManager();
          iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x120)))());
          if (iVar3 != 0) {
code_r0x006c94d0:
            ((PlatformHelp *)this)->backButtonPromptShow();
            uVar1 = (undefined4)(((UIManager *)this)->shareManager());
            ((UIManager *)(uVar1))->removeUIByID(0x8f);
            return;
          }
          uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
          puVar7 = (unsigned char *)((char *)&g_006c94ea + (intptr_t)(g_006c96f4));
        }
        goto code_r0x006c94ba;
      }
      puVar6 = &uStack_3c;
      func_0079e54c(puVar6,*(undefined4 *)(p2 + 0x1c),
                      *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),auStack_1c);
      iVar10 = (undefined4)(intptr_t)(cocos2d::extension::Json_create((char const*)uStack_3c));
      if (iVar10 == 0) {
        if (*(char *)(((int)this) + 0x10c) != '\0') {
          uVar1 = (undefined4)(((Toast *)this)->sharedToast());
          puVar9 = auStack_38;
          func_0079e45c(puVar9,(unsigned char *)((char *)&g_006c951e + (intptr_t)(g_006c96f8)),auStack_1c);
          ((Toast *)(uVar1))->showSystemRemind((std::string *)(char *)puVar9);
code_r0x006c95e4:
          func_0079e2bc(puVar9);
        }
      }
      else {
        uVar1 = (undefined4)(*(undefined4 *)(p2 + 0x1c));
        iVar10 = (undefined4)((void)(((CCJson *)this)->JSONObjectWithString((char const*)uVar1)),(intptr_t)0);
        if (iVar10 == 0) {
          if (*(char *)(((int)this) + 0x10c) != '\0') {
            uVar1 = (undefined4)(((Toast *)this)->sharedToast());
            uVar8 = (undefined4)(((BLLanguage *)this)->share());
            puVar9 = auStack_24;
            func_0079e45c(puVar9,(unsigned char *)((char *)&g_006c95b4 + (intptr_t)(g_006c9710)),auStack_2c);
            ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
            func_0079e45c(auStack_1c,uStack_20,auStack_28);
            ((Toast *)(uVar1))->showSystemRemind((std::string *)(char *)auStack_1c);
            func_0079e2bc(auStack_1c);
            func_0079e2bc(&uStack_20);
            goto code_r0x006c95e4;
          }
        }
        else {
          func_0079e45c(auStack_34,(unsigned char *)((char *)&g_006c9548 + (intptr_t)(g_006c96fc)),auStack_1c);
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar10))->objectForKey((char const *)auStack_34));
          iVar5 = 0;
          if (iVar4 != 0) {
            iVar5 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9700)) + iVar3),
                                    *(undefined4 *)((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9704)) + iVar3),0);
          }
          func_0079e2bc(auStack_34);
          if (iVar5 == 0) {
code_r0x006c96b6:
            if (*(char *)(((int)this) + 0x10c) != '\0') {
              uVar1 = (undefined4)(((Toast *)this)->sharedToast());
              puVar7 = (unsigned char *)((char *)&g_006c96c6 + (intptr_t)(g_006c9724));
code_r0x006c96c4:
              ((Toast *)(uVar1))->showToast((char const*)puVar7);
            }
          }
          else {
            uVar8 = (undefined4)(*(undefined4 *)(iVar5 + 0x14));
            iVar5 = (undefined4)(intptr_t)(func_0079e5ec(uVar8,g_006c9708));
            if (iVar5 == 0) {
              iVar3 = (undefined4)(intptr_t)(func_0079e5ec(uVar8,g_006c970c));
              if (iVar3 == 0) goto code_r0x006c96b6;
              func_0079e45c(auStack_28,uVar1,auStack_1c);
              0 /* ctorZero */;
              func_0079e2bc(auStack_28);
            }
            else {
              func_0079e45c(auStack_30,(unsigned char *)((char *)&g_006c9626 + (intptr_t)(g_006c9714)),auStack_1c);
              iStack_50 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar10))->objectForKey((char const *)auStack_30));
              if (iStack_50 != 0) {
                iStack_50 = func_0079e55c(iStack_50,
                                            *(undefined4 *)((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9700)) + iVar3),
                                            *(undefined4 *)((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9718)) + iVar3),0
                                           );
              }
              func_0079e2bc(auStack_30);
              func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_006c9660 + (intptr_t)(g_006c971c)),auStack_1c);
              iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iStack_50))->objectForKey((char const *)auStack_2c));
              iVar10 = 0;
              if (iVar5 != 0) {
                iVar10 = func_0079e55c(iVar5,*(undefined4 *)
                                                ((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9700)) + iVar3),
                                         *(undefined4 *)((unsigned char *)((char *)&g_006c93d0 + (intptr_t)(g_006c9704)) + iVar3),0);
              }
              func_0079e2bc(auStack_2c);
              if ((iVar10 == 0) ||
                 (iVar3 = func_0079e5ec(*(undefined4 *)(iVar10 + 0x14),0x3f800000), iVar3 == 0)) {
                if (*(char *)(((int)this) + 0x10c) != '\0') {
                  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
                  puVar7 = (unsigned char *)((char *)&g_006c96b6 + (intptr_t)(g_006c9720));
                  goto code_r0x006c96c4;
                }
              }
              else {
                cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006c972e + (intptr_t)(g_006c97c4)));
                if (*(char *)(((int)this) + 0x10c) != '\0') {
                  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
                  ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006c976c + (intptr_t)(g_006c97c8)));
                }
                if (*(int *)(((int)this) + 0x108) == 1) {
                  piVar2 = (int *)((DataManager *)this)->shareDataManager();
                  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x120)))());
                  if (iVar3 == 0) {
                    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                    puVar7 = (unsigned char *)((char *)&g_006c9794 + (intptr_t)(g_006c97d0));
                  }
                  else {
                    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                    puVar7 = (unsigned char *)((char *)&g_006c978a + (intptr_t)(g_006c97cc));
                  }
                }
                else {
                  piVar2 = (int *)((DataManager *)this)->shareDataManager();
                  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x120)))());
                  if (iVar3 != 0) {
                    ((PlatformHelp *)this)->backButtonPromptShow();
                    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
                    ((UIManager *)(uVar1))->removeUIByID(0x8f);
                    goto code_r0x006c975e;
                  }
                  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                  puVar7 = (unsigned char *)((char *)&g_006c979e + (intptr_t)(g_006c97d4));
                }
                ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)puVar7);
              }
            }
          }
code_r0x006c975e:
          puVar6 = &uStack_3c;
        }
      }
    }
    else {
      if (*(char *)(((int)this) + 0x10c) == '\0') {
        return;
      }
      uVar1 = (undefined4)(((Toast *)this)->sharedToast());
      puVar6 = auStack_1c;
      ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006c9430 + (intptr_t)(g_006c96dc)));
      cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006c943a + (intptr_t)(g_006c96e0)), *(undefined4 *)(p2 + 0x38));
      func_0079e54c(puVar6,*(int *)(p2 + 0x1c),
                      *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),&uStack_20);
      if (*(int *)(((int)this) + 0x108) == 1) {
        uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        puVar7 = (unsigned char *)((char *)&g_006c945e + (intptr_t)(g_006c96e4));
      }
      else {
        piVar2 = (int *)((DataManager *)this)->shareDataManager();
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x120)))());
        if (iVar3 != 0) {
          ((PlatformHelp *)this)->backButtonPromptShow();
          uVar1 = (undefined4)(((UIManager *)this)->shareManager());
          ((UIManager *)(uVar1))->removeUIByID(0x8f);
          goto code_r0x006c95ec;
        }
        uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        puVar7 = (unsigned char *)((char *)&g_006c948e + (intptr_t)(g_006c96e8));
      }
      ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)puVar7);
    }
code_r0x006c95ec:
    func_0079e2bc(puVar6);
  }
  else {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->closeShieldLayer();
    if ((int)(intptr_t)(int)(intptr_t)p2 != 0) goto code_r0x006c940c;
    if (*(char *)(((int)this) + 0x10c) == '\0') {
      return;
    }
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006c93f0 + (intptr_t)(g_006c96d0)));
    if (*(int *)(((int)this) + 0x108) != 1) goto code_r0x006c94d0;
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    puVar7 = (unsigned char *)((char *)&g_006c9406 + (intptr_t)(g_006c96d4));
code_r0x006c94ba:
    ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)puVar7);
  }
  return;
}

void BLUpAndDownUtils::notifaction()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x120))());
  if (iVar2 == 0) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    puVar4 = (unsigned char *)((char *)&g_006c983e + (intptr_t)(g_006c9848));
  }
  else {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    puVar4 = (unsigned char *)((char *)&g_006c9834 + (intptr_t)(g_006c9844));
  }
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)puVar4);
  return;
}

void BLUpAndDownUtils::importTableData(sqlite3* p1, sqlite3* p2, std::string * p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpAndDownUtils::importDBData()
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  uStack_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  func_0079e45c(&iStack_24,(unsigned char *)((char *)&g_006c9eca + (intptr_t)(g_006c9f74)),auStack_28);
  ((DBUtil *)this)->openDB((sqlite3**)&uStack_30, (std::string *)(char *)iStack_24);
  func_0079e2bc(&iStack_24);
  func_0079e45c(&iStack_24,(unsigned char *)((char *)&g_006c9eea + (intptr_t)(g_006c9f78)),auStack_28);
  ((DBUtil *)this)->openDB((sqlite3**)&uStack_2c, (std::string *)(char *)iStack_24);
  func_0079e2bc(&iStack_24);
  ((DBUtil *)&iStack_24)->getALLTableName((sqlite3*)uStack_30);
  uVar3 = (undefined4)(0);
  while( true ) {
    uVar2 = (undefined4)(uStack_2c);
    uVar1 = (undefined4)(uStack_30);
    if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar3) break;
    func_0079e53c(auStack_28,iStack_24 + uVar3 * 4);
    BLUpAndDownUtils::importTableData((sqlite3*)uVar1, (sqlite3*)uVar2, (std::string *)(char *)auStack_28);
    func_0079e2bc(auStack_28);
    uVar3 = (undefined4)(uVar3 + 1);
  }
  sqlite3_close(uStack_30);
  uStack_30 = (undefined4)(0);
  sqlite3_close(uStack_2c);
  uStack_2c = (undefined4)(0);
  ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
  return;
}

void BLUpAndDownUtils::updateDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpAndDownUtils::upRes(std::string * p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpAndDownUtils::DownRes(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLUpAndDownUtils::onGetSignData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  char *pcStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [64];
  int iStack_1c;
  
  piVar7 = *(int **)((unsigned char *)((char *)&g_006ca640 + (intptr_t)(g_006ca860)));
  iStack_1c = (int)*(int *)&(*piVar7);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  if ((int)(intptr_t)(int)(intptr_t)p2 == 0) goto code_r0x006ca84c;
  if (**(char **)(*(int *)(p2 + 0x14) + 0x28) != '\0') {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ca666 + (intptr_t)(g_006ca864)));
  }
  iVar8 = (undefined4)(intptr_t)(*(int *)(p2 + 0x34));
  func_0079e34c(auStack_5c,0,0x40);
  func_0079e904(auStack_5c,(unsigned char *)((char *)&g_006ca682 + (intptr_t)(g_006ca868)),iVar8,
                  *(undefined4 *)(*(int *)(p2 + 0x14) + 0x28));
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ca68e + (intptr_t)(g_006ca86c)), iVar8);
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ca698 + (intptr_t)(g_006ca870)), *(undefined4 *)(p2 + 0x38));
  if (*(char *)(p2 + 0x18) == '\0') {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006ca6aa + (intptr_t)(g_006ca874)));
    goto code_r0x006ca84c;
  }
  func_0079e54c(&pcStack_6c,*(undefined4 *)(p2 + 0x1c),
                  *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),auStack_60);
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ca6ca + (intptr_t)(g_006ca878)), pcStack_6c);
  iVar2 = (undefined4)(intptr_t)(func_0079e4bc(&pcStack_6c,(unsigned char *)((char *)&g_006ca6d4 + (intptr_t)(g_006ca87c))));
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006ca6e4 + (intptr_t)(g_006ca880)));
    ((BLUpAndDownUtils *)(((int)this)))->updateDB();
    uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    ((cocos2d::CCUserDefault *)(uVar1))->setBoolForKey((char const*)(unsigned char *)((char *)&g_006ca6f8 + (intptr_t)(g_006ca884)), 1);
  }
  else {
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::Json_create((char const*)pcStack_6c));
    if (iVar2 == 0) {
      uVar1 = (undefined4)(((Toast *)this)->sharedToast());
      puVar5 = &uStack_64;
      func_0079e45c(puVar5,(unsigned char *)((char *)&g_006ca714 + (intptr_t)(g_006ca888)),auStack_60);
      ((Toast *)(uVar1))->showSystemRemind((std::string *)(char *)puVar5);
code_r0x006ca808:
      func_0079e2bc(puVar5);
    }
    else {
      if (iVar8 == 200) {
        if (*pcStack_6c != '\0') {
          func_0079e45c(&uStack_68,*(undefined4 *)(*(int *)(p2 + 0x14) + 0x28),auStack_60);
          piVar3 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
          (**(code **)(*(int *)(piVar3) + (0x44)))(auStack_60,piVar3);
          puVar5 = &uStack_68;
          func_0042f3fc(&uStack_64,auStack_60,puVar5);
          func_0079e2bc(auStack_60);
          iVar8 = (undefined4)(intptr_t)(func_0079ead4(uStack_64,(unsigned char *)((char *)&g_006ca774 + (intptr_t)(g_006ca890))));
          if (iVar8 != 0) {
            func_0079eae4(pcStack_6c,1,*(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),iVar8);
            func_0079eaf4(iVar8);
          }
          piVar3 = *(int **)((unsigned char *)((char *)&g_006ca780 + (intptr_t)(g_006ca894)));
          if (*piVar3 == 0) {
            iVar8 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
            func_0079e41c();
            if (*piVar3 == 0) {
              piVar4 = (int *)func_0079e2fc(8);
              *piVar4 = *(int *)((unsigned char *)((char *)&g_006ca7c6 + (intptr_t)(g_006ca898))) + 8;
              piVar4[1] = 0;
              *piVar3 = (int)piVar4;
              uVar1 = (undefined4)(((sir::singleton_container *)this)->instance());
              ((sir::singleton_container *)(uVar1))->add_singleton((sir::singleton_base*)*piVar3, 0);
            }
            func_0079e42c(iVar8 + 0x18);
          }
          ((DownLoadDataNumData *)(*piVar3))->GetDataFromNet((URL_DownLoadNum)1, 1);
          iVar8 = (undefined4)(intptr_t)(func_0079e4bc(&uStack_68,(unsigned char *)((char *)&g_006ca7fa + (intptr_t)(g_006ca89c))));
          if (iVar8 == 0) {
            ((BLUpAndDownUtils *)(((int)this)))->updateDB();
          }
          func_0079e2bc(&uStack_64);
          goto code_r0x006ca808;
        }
        uVar1 = (undefined4)(((Toast *)this)->sharedToast());
        puVar6 = (unsigned char *)((char *)&g_006ca73c + (intptr_t)(g_006ca88c));
      }
      else {
        uVar1 = (undefined4)(((Toast *)this)->sharedToast());
        puVar6 = (unsigned char *)((char *)&g_006ca820 + (intptr_t)(g_006ca8a0));
      }
      ((Toast *)(uVar1))->showToast((char const*)puVar6);
    }
  }
  func_0079e2bc(&pcStack_6c);
code_r0x006ca84c:
  if (iStack_1c != *piVar7) {
    func_0079e914();
  }
  return;
}

bool BLUpAndDownUtils::init()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    piVar5 = *(int **)((unsigned char *)((char *)&g_006ca8b8 + (intptr_t)(g_006ca95c)));
    if (*piVar5 == 0) {
      iVar2 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
      func_0079e41c();
      if (*piVar5 == 0) {
        iVar3 = (undefined4)(intptr_t)(func_0079e2fc(8));
        0 /* ctorZero */;
        *piVar5 = iVar3;
        uVar4 = (undefined4)(((sir::singleton_container *)this)->instance());
        ((sir::singleton_container *)(uVar4))->add_singleton((sir::singleton_base*)*piVar5, 0);
      }
      func_0079e42c(iVar2 + 0x18);
    }
    iVar2 = (int)*(int *)&(*piVar5);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006ca8fe + (intptr_t)(g_006ca960)),auStack_28);
    func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006ca90e + (intptr_t)(g_006ca964)),auStack_24);
    uVar4 = ((void)(((DebugLocalSys *)(iVar2))->getJsonIntGetValueById((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c)),(undefined4)0);
    *(undefined4 *)(((int)this) + 0x108) = uVar4;
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  return iVar1;
}

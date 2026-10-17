#include "UserData.h"
#include "CCUserDefault.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "BLAchievementManager.h"
#include "BLActivityManager.h"
#include "BLDebug.h"
#include "BLLanguage.h"
#include "BLMissionChaptersData.h"
#include "BackPackData.h"
#include "CampaignData.h"
#include "ChallengeUserData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsRoleData.h"
#include "LivenessUserData.h"
#include "MissionSelectHeroData.h"
#include "MissionStarRewardUserData.h"
#include "MissionValleryData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "PlayerData.h"
#include "RoleData.h"
#include "TalentUserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
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
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long software_udf(...);

extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0046011c(...);
extern "C" long long func_004667c4(...);
extern "C" long long func_004667dc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e754(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e924(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079ea14(...);
extern "C" long long func_0079ea54(...);
extern "C" long long func_0079ea64(...);
extern "C" long long func_0079ea74(...);
extern "C" long long func_0079ea84(...);
extern "C" long long func_0079ea94(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_00463660;
extern "C" unsigned long _DAT_004601a8;
extern "C" unsigned long _DAT_004601ac;
extern "C" unsigned long _DAT_00460224;
extern "C" unsigned long _DAT_00460228;
extern "C" unsigned long _DAT_00460328;
extern "C" unsigned long _DAT_0046032c;
extern "C" unsigned long _DAT_0046042c;
extern "C" unsigned long _DAT_00460430;
extern "C" unsigned long _DAT_00460580;
extern "C" unsigned long _DAT_00460584;
extern "C" unsigned long _DAT_00460654;
extern "C" unsigned long _DAT_00460658;
extern "C" unsigned long _DAT_004606c0;
extern "C" unsigned long _DAT_004606c4;
extern "C" unsigned long _DAT_0046073c;
extern "C" unsigned long _DAT_00460740;
extern "C" unsigned long _DAT_00460814;
extern "C" unsigned long _DAT_00460818;
extern "C" unsigned long _DAT_004608e4;
extern "C" unsigned long _DAT_004608e8;
extern "C" unsigned long _DAT_004608ec;
extern "C" unsigned long _DAT_004608f0;
extern "C" unsigned long _DAT_00460968;
extern "C" unsigned long _DAT_0046096c;
extern "C" unsigned long _DAT_00460970;
extern "C" unsigned long _DAT_00460974;
extern "C" unsigned long _DAT_004609dc;
extern "C" unsigned long _DAT_004609e0;
extern "C" unsigned long _DAT_004609e4;
extern "C" unsigned long _DAT_004609e8;
extern "C" unsigned long _DAT_00460b80;
extern "C" unsigned long _DAT_00460b84;
extern "C" unsigned long _DAT_00460b88;
extern "C" unsigned long _DAT_00460d14;
extern "C" unsigned long _DAT_00460d18;
extern "C" unsigned long _DAT_00460d1c;
extern "C" unsigned long _DAT_00460d20;
extern "C" unsigned long _DAT_00460d24;
extern "C" unsigned long _DAT_00460d28;
extern "C" unsigned long _DAT_00460d2c;
extern "C" unsigned long _DAT_00460ed8;
extern "C" unsigned long _DAT_00460edc;
extern "C" unsigned long _DAT_00460ee0;
extern "C" unsigned long _DAT_00460ee4;
extern "C" unsigned long _DAT_00460ee8;
extern "C" unsigned long _DAT_00460eec;
extern "C" unsigned long _DAT_00460ef0;
extern "C" unsigned long _DAT_00460ef4;
extern "C" unsigned long _DAT_00460ef8;
extern "C" unsigned long _DAT_00460efc;
extern "C" unsigned long _DAT_00460f00;
extern "C" unsigned long _DAT_00460f04;
extern "C" unsigned long _DAT_00460f08;
extern "C" unsigned long _DAT_00460f0c;
extern "C" unsigned long _DAT_00460f7c;
extern "C" unsigned long _DAT_00460f80;
extern "C" unsigned long _DAT_00460ff0;
extern "C" unsigned long _DAT_00460ff4;
extern "C" unsigned long _DAT_00461064;
extern "C" unsigned long _DAT_00461068;
extern "C" unsigned long _DAT_004610d8;
extern "C" unsigned long _DAT_004610dc;
extern "C" unsigned long _DAT_0046114c;
extern "C" unsigned long _DAT_00461150;
extern "C" unsigned long _DAT_00461278;
extern "C" unsigned long _DAT_0046127c;
extern "C" unsigned long _DAT_00461280;
extern "C" unsigned long _DAT_00461284;
extern "C" unsigned long _DAT_00461288;
extern "C" unsigned long _DAT_0046128c;
extern "C" unsigned long _DAT_00461328;
extern "C" unsigned long _DAT_0046132c;
extern "C" unsigned long _DAT_00461330;
extern "C" unsigned long _DAT_00461478;
extern "C" unsigned long _DAT_0046147c;
extern "C" unsigned long _DAT_00461480;
extern "C" unsigned long _DAT_00461484;
extern "C" unsigned long _DAT_00461670;
extern "C" unsigned long _DAT_00461674;
extern "C" unsigned long _DAT_00461678;
extern "C" unsigned long _DAT_0046167c;
extern "C" unsigned long _DAT_0046191c;
extern "C" unsigned long _DAT_00461920;
extern "C" unsigned long _DAT_00461924;
extern "C" unsigned long _DAT_00461928;
extern "C" unsigned long _DAT_0046192c;
extern "C" unsigned long _DAT_00461930;
extern "C" unsigned long _DAT_00461a68;
extern "C" unsigned long _DAT_00461a6c;
extern "C" unsigned long _DAT_00461a70;
extern "C" unsigned long _DAT_00461a74;
extern "C" unsigned long _DAT_00461a78;
extern "C" unsigned long _DAT_00461a7c;
extern "C" unsigned long _DAT_00461a80;
extern "C" unsigned long _DAT_00461a84;
extern "C" unsigned long _DAT_00461a88;
extern "C" unsigned long _DAT_00461a8c;
extern "C" unsigned long _DAT_00461a90;
extern "C" unsigned long _DAT_00461a94;
extern "C" unsigned long _DAT_00461a98;
extern "C" unsigned long _DAT_00461a9c;
extern "C" unsigned long _DAT_00461c70;
extern "C" unsigned long _DAT_00461c74;
extern "C" unsigned long _DAT_00461c78;
extern "C" unsigned long _DAT_00461c7c;
extern "C" unsigned long _DAT_00461c80;
extern "C" unsigned long _DAT_00461c84;
extern "C" unsigned long _DAT_00461c88;
extern "C" unsigned long _DAT_00461c8c;
extern "C" unsigned long _DAT_00461c90;
extern "C" unsigned long _DAT_00461c94;
extern "C" unsigned long _DAT_00461d50;
extern "C" unsigned long _DAT_00461d54;
extern "C" unsigned long _DAT_00461d58;
extern "C" unsigned long _DAT_00461d5c;
extern "C" unsigned long _DAT_00461d60;
extern "C" unsigned long _DAT_00461dfc;
extern "C" unsigned long _DAT_00461e00;
extern "C" unsigned long _DAT_00461e80;
extern "C" unsigned long _DAT_00461e84;
extern "C" unsigned long _DAT_00461e88;
extern "C" unsigned long _DAT_004621c0;
extern "C" unsigned long _DAT_004621c4;
extern "C" unsigned long _DAT_004621c8;
extern "C" unsigned long _DAT_004621cc;
extern "C" unsigned long _DAT_004621d0;
extern "C" unsigned long _DAT_004621d4;
extern "C" unsigned long _DAT_004621d8;
extern "C" unsigned long _DAT_004621dc;
extern "C" unsigned long _DAT_004624f4;
extern "C" unsigned long _DAT_00462840;
extern "C" unsigned long _DAT_00462844;
extern "C" unsigned long _DAT_00462848;
extern "C" unsigned long _DAT_0046284c;
extern "C" unsigned long _DAT_00462850;
extern "C" unsigned long _DAT_00462854;
extern "C" unsigned long _DAT_00462858;
extern "C" unsigned long _DAT_0046285c;
extern "C" unsigned long _DAT_00462860;
extern "C" unsigned long _DAT_00462864;
extern "C" unsigned long _DAT_00462868;
extern "C" unsigned long _DAT_0046286c;
extern "C" unsigned long _DAT_00462870;
extern "C" unsigned long _DAT_00462874;
extern "C" unsigned long _DAT_00462878;
extern "C" unsigned long _DAT_0046287c;
extern "C" unsigned long _DAT_00462880;
extern "C" unsigned long _DAT_00462884;
extern "C" unsigned long _DAT_00462888;
extern "C" unsigned long _DAT_0046288c;
extern "C" unsigned long _DAT_00462890;
extern "C" unsigned long _DAT_00462894;
extern "C" unsigned long _DAT_00462898;
extern "C" unsigned long _DAT_0046289c;
extern "C" unsigned long _DAT_00462ae8;
extern "C" unsigned long _DAT_00462aec;
extern "C" unsigned long _DAT_00462af0;
extern "C" unsigned long _DAT_00462af4;
extern "C" unsigned long _DAT_00462af8;
extern "C" unsigned long _DAT_00462afc;
extern "C" unsigned long _DAT_00462b00;
extern "C" unsigned long _DAT_00462bc4;
extern "C" unsigned long _DAT_00462bc8;
extern "C" unsigned long _DAT_00462dd4;
extern "C" unsigned long _DAT_00462dd8;
extern "C" unsigned long _DAT_00462ddc;
extern "C" unsigned long _DAT_00462de0;
extern "C" unsigned long _DAT_00462de4;
extern "C" unsigned long _DAT_00462de8;
extern "C" unsigned long _DAT_00462dec;
extern "C" unsigned long _DAT_00462df0;
extern "C" unsigned long _DAT_00462df4;
extern "C" unsigned long _DAT_00462df8;
extern "C" unsigned long _DAT_00463130;
extern "C" unsigned long _DAT_00463134;
extern "C" unsigned long _DAT_00463138;
extern "C" unsigned long _DAT_0046313c;
extern "C" unsigned long _DAT_00463140;
extern "C" unsigned long _DAT_00463144;
extern "C" unsigned long _DAT_00463148;
extern "C" unsigned long _DAT_0046314c;
extern "C" unsigned long _DAT_00463150;
extern "C" unsigned long _DAT_00463154;
extern "C" unsigned long _DAT_00463158;
extern "C" unsigned long _DAT_0046315c;
extern "C" unsigned long _DAT_00463160;
extern "C" unsigned long _DAT_00463164;
extern "C" unsigned long _DAT_00463168;
extern "C" unsigned long _DAT_0046316c;
extern "C" unsigned long _DAT_00463170;
extern "C" unsigned long _DAT_00463174;
extern "C" unsigned long _DAT_00463178;
extern "C" unsigned long _DAT_0046317c;
extern "C" unsigned long _DAT_00463180;
extern "C" unsigned long _DAT_00463184;
extern "C" unsigned long _DAT_00463188;
extern "C" unsigned long _DAT_0046318c;
extern "C" unsigned long _DAT_00463190;
extern "C" unsigned long _DAT_00463194;
extern "C" unsigned long _DAT_00463660;
extern "C" unsigned long _DAT_00463664;
extern "C" unsigned long _DAT_00463668;
extern "C" unsigned long _DAT_0046366c;
extern "C" unsigned long _DAT_00463670;
extern "C" unsigned long _DAT_00463674;
extern "C" unsigned long _DAT_00463678;
extern "C" unsigned long _DAT_0046367c;
extern "C" unsigned long _DAT_00463680;
extern "C" unsigned long _DAT_00463684;
extern "C" unsigned long _DAT_00463688;
extern "C" unsigned long _DAT_0046368c;
extern "C" unsigned long _DAT_00463690;
extern "C" unsigned long _DAT_00463694;
extern "C" unsigned long _DAT_00463698;
extern "C" unsigned long _DAT_0046369c;
extern "C" unsigned long _DAT_004636a0;
extern "C" unsigned long _DAT_004636a4;
extern "C" unsigned long _DAT_004636a8;
extern "C" unsigned long _DAT_004636ac;
extern "C" unsigned long _DAT_004636b0;
extern "C" unsigned long _DAT_004636b4;
extern "C" unsigned long _DAT_004636b8;
extern "C" unsigned long _DAT_004636bc;
extern "C" unsigned long _DAT_004636c0;
extern "C" unsigned long _DAT_004636c4;
extern "C" unsigned long _DAT_004636c8;
extern "C" unsigned long _DAT_004636cc;
extern "C" unsigned long _DAT_004636d0;
extern "C" unsigned long _DAT_004636d4;
extern "C" unsigned long _DAT_004636d8;
extern "C" unsigned long _DAT_004636dc;
extern "C" unsigned long _DAT_004636e0;
extern "C" unsigned long _DAT_0046386c;
extern "C" unsigned long _DAT_00463870;
extern "C" unsigned long _DAT_00463874;
extern "C" unsigned long _DAT_00463878;
extern "C" unsigned long _DAT_0046387c;
extern "C" unsigned long _DAT_00463880;
extern "C" unsigned long _DAT_00463884;
extern "C" unsigned long _DAT_00463888;
extern "C" unsigned long _DAT_0046388c;
extern "C" unsigned long _DAT_00463c48;
extern "C" unsigned long _DAT_00463c4c;
extern "C" unsigned long _DAT_00463c50;
extern "C" unsigned long _DAT_00463c54;
extern "C" unsigned long _DAT_00463c58;
extern "C" unsigned long _DAT_00463c5c;
extern "C" unsigned long _DAT_00463c60;
extern "C" unsigned long _DAT_00463c64;
extern "C" unsigned long _DAT_00463c68;
extern "C" unsigned long _DAT_00463c6c;
extern "C" unsigned long _DAT_00463c70;
extern "C" unsigned long _DAT_00463c74;
extern "C" unsigned long _DAT_00463c78;
extern "C" unsigned long _DAT_00463c7c;
extern "C" unsigned long _DAT_00463c80;
extern "C" unsigned long _DAT_00463c84;
extern "C" unsigned long _DAT_00463c88;
extern "C" unsigned long _DAT_00463c8c;
extern "C" unsigned long _DAT_00463c90;
extern "C" unsigned long _DAT_00463c94;
extern "C" unsigned long _DAT_00463c98;
extern "C" unsigned long _DAT_00463c9c;
extern "C" unsigned long _DAT_00463ca0;
extern "C" unsigned long _DAT_00463ca4;
extern "C" unsigned long _DAT_00463ca8;
extern "C" unsigned long _DAT_00463cac;
extern "C" unsigned long _DAT_00463cb0;
extern "C" unsigned long _DAT_00463cb4;
extern "C" unsigned long _DAT_00463cb8;
extern "C" unsigned long _DAT_00463cbc;
extern "C" unsigned long _DAT_00463cc0;
extern "C" unsigned long _DAT_00463cc4;
extern "C" unsigned long _DAT_00464064;
extern "C" unsigned long _DAT_00464068;
extern "C" unsigned long _DAT_0046406c;
extern "C" unsigned long _DAT_00464070;
extern "C" unsigned long _DAT_00464074;
extern "C" unsigned long _DAT_00464078;
extern "C" unsigned long _DAT_0046407c;
extern "C" unsigned long _DAT_00464080;
extern "C" unsigned long _DAT_00464084;
extern "C" unsigned long _DAT_00464088;
extern "C" unsigned long _DAT_0046408c;
extern "C" unsigned long _DAT_00464090;
extern "C" unsigned long _DAT_00464094;
extern "C" unsigned long _DAT_00464098;
extern "C" unsigned long _DAT_0046409c;
extern "C" unsigned long _DAT_004640a0;
extern "C" unsigned long _DAT_004640a4;
extern "C" unsigned long _DAT_004640a8;
extern "C" unsigned long _DAT_004640ac;
extern "C" unsigned long _DAT_004640b0;
extern "C" unsigned long _DAT_004640b4;
extern "C" unsigned long _DAT_004640b8;
extern "C" unsigned long _DAT_004643f0;
extern "C" unsigned long _DAT_004643f4;
extern "C" unsigned long _DAT_004643f8;
extern "C" unsigned long _DAT_004643fc;
extern "C" unsigned long _DAT_00464400;
extern "C" unsigned long _DAT_00464404;
extern "C" unsigned long _DAT_00464408;
extern "C" unsigned long _DAT_0046440c;
extern "C" unsigned long _DAT_00464410;
extern "C" unsigned long _DAT_004646a0;
extern "C" unsigned long _DAT_004646a4;
extern "C" unsigned long _DAT_004646a8;
extern "C" unsigned long _DAT_004646ac;
extern "C" unsigned long _DAT_004646b0;
extern "C" unsigned long _DAT_004646b4;
extern "C" unsigned long _DAT_0046494c;
extern "C" unsigned long _DAT_00464950;
extern "C" unsigned long _DAT_00464954;
extern "C" unsigned long _DAT_00464958;
extern "C" unsigned long _DAT_0046495c;
extern "C" unsigned long _DAT_00464960;
extern "C" unsigned long _DAT_00464d00;
extern "C" unsigned long _DAT_00464d04;
extern "C" unsigned long _DAT_00464d08;
extern "C" unsigned long _DAT_00464d0c;
extern "C" unsigned long _DAT_00464d10;
extern "C" unsigned long _DAT_00464d14;
extern "C" unsigned long _DAT_00464d18;
extern "C" unsigned long _DAT_00464d1c;
extern "C" unsigned long _DAT_00464d20;
extern "C" unsigned long _DAT_00464d24;
extern "C" unsigned long _DAT_00464d28;
extern "C" unsigned long _DAT_00464d2c;
extern "C" unsigned long _DAT_00464d30;
extern "C" unsigned long _DAT_00465208;
extern "C" unsigned long _DAT_0046520c;
extern "C" unsigned long _DAT_00465210;
extern "C" unsigned long _DAT_00465214;
extern "C" unsigned long _DAT_00465218;
extern "C" unsigned long _DAT_0046521c;
extern "C" unsigned long _DAT_00465220;
extern "C" unsigned long _DAT_00465224;
extern "C" unsigned long _DAT_00465228;
extern "C" unsigned long _DAT_0046522c;
extern "C" unsigned long _DAT_00465230;
extern "C" unsigned long _DAT_00465234;
extern "C" unsigned long _DAT_00465238;
extern "C" unsigned long _DAT_0046523c;
extern "C" unsigned long _DAT_00465240;
extern "C" unsigned long _DAT_004655b0;
extern "C" unsigned long _DAT_004655b4;
extern "C" unsigned long _DAT_004655b8;
extern "C" unsigned long _DAT_004655bc;
extern "C" unsigned long _DAT_004655c0;
extern "C" unsigned long _DAT_004655c4;
extern "C" unsigned long _DAT_004655c8;
extern "C" unsigned long _DAT_0046564c;
extern "C" unsigned long _DAT_00465650;
extern "C" unsigned long _DAT_00465654;
extern "C" unsigned long _DAT_00465658;
extern "C" unsigned long _DAT_0046565c;
extern "C" unsigned long _DAT_00465840;
extern "C" unsigned long _DAT_00465844;
extern "C" unsigned long _DAT_004658d4;
extern "C" unsigned long _DAT_004658d8;
extern "C" unsigned long _DAT_00465c20;
extern "C" unsigned long _DAT_00465c24;
extern "C" unsigned long _DAT_00465c28;
extern "C" unsigned long _DAT_00465c2c;
extern "C" unsigned long _DAT_00465c30;
extern "C" unsigned long _DAT_00465c34;
extern "C" unsigned long _DAT_00465c38;
extern "C" unsigned long _DAT_00465c3c;
extern "C" unsigned long _DAT_00465c40;
extern "C" unsigned long _DAT_00465c44;
extern "C" unsigned long _DAT_00465c48;
extern "C" unsigned long _DAT_00465c4c;
extern "C" unsigned long _DAT_00465c50;
extern "C" unsigned long _DAT_00465c54;
extern "C" unsigned long _DAT_00465c58;
extern "C" unsigned long _DAT_00465c5c;
extern "C" unsigned long _DAT_00465c60;
extern "C" unsigned long _DAT_00465c64;
extern "C" unsigned long _DAT_00465c68;
extern "C" unsigned long _DAT_00465c6c;
extern "C" unsigned long _DAT_004660dc;
extern "C" unsigned long _DAT_004660e0;
extern "C" unsigned long _DAT_004660e4;
extern "C" unsigned long _DAT_004660e8;
extern "C" unsigned long _DAT_004660ec;
extern "C" unsigned long _DAT_004660f0;
extern "C" unsigned long _DAT_004660f4;
extern "C" unsigned long _DAT_004660f8;
extern "C" unsigned long _DAT_004660fc;
extern "C" unsigned long _DAT_00466100;
extern "C" unsigned long _DAT_00466104;
extern "C" unsigned long _DAT_00466108;
extern "C" unsigned long _DAT_0046610c;
extern "C" unsigned long _DAT_00466110;
extern "C" unsigned long _DAT_00466114;
extern "C" unsigned long _DAT_00466118;
extern "C" unsigned long _DAT_0046611c;
extern "C" unsigned long _DAT_00466120;
extern "C" unsigned long _DAT_00466124;
extern "C" unsigned long _DAT_00466128;
extern "C" unsigned long _DAT_0046612c;
extern "C" unsigned long _DAT_00466130;
extern "C" unsigned long _DAT_00466134;
extern "C" unsigned long _DAT_00466138;
extern "C" unsigned long _DAT_0046613c;
extern "C" unsigned long _DAT_00466140;
extern "C" unsigned long _DAT_004664dc;
extern "C" unsigned long _DAT_004664e0;
extern "C" unsigned long _DAT_004664e4;
extern "C" unsigned long _DAT_004664e8;
extern "C" unsigned long _DAT_004664ec;
extern "C" unsigned long _DAT_004664f0;
extern "C" unsigned long _DAT_004664f4;
extern "C" unsigned long _DAT_004664f8;
extern "C" unsigned long _DAT_004664fc;
extern "C" unsigned long _DAT_00466500;
extern "C" unsigned long _DAT_00466504;
extern "C" unsigned long _DAT_00466508;
extern "C" unsigned long _DAT_0046650c;
extern "C" unsigned long _DAT_00466510;
extern "C" unsigned long _DAT_00466514;
extern "C" unsigned long _DAT_00466518;
extern "C" unsigned long _DAT_0046651c;
extern "C" unsigned long _DAT_00466520;
extern "C" unsigned long _DAT_00466524;
extern "C" unsigned long _DAT_00466528;
extern "C" unsigned long _DAT_0046652c;
extern "C" unsigned long _DAT_00466530;
extern "C" unsigned long _DAT_00466534;
extern "C" unsigned long _DAT_00466538;
extern "C" unsigned long _DAT_00466824;
extern "C" unsigned long _DAT_00466828;
extern "C" unsigned long _DAT_0046682c;
extern "C" unsigned long _DAT_00466830;
extern "C" unsigned long _DAT_00466834;
extern "C" unsigned long _DAT_00466838;
extern "C" unsigned long _DAT_0046683c;
extern "C" unsigned long _DAT_00466840;
extern "C" unsigned long _DAT_00466844;
extern "C" unsigned long _DAT_00466848;
extern "C" unsigned long _DAT_0046684c;
extern "C" unsigned long _DAT_00466850;
extern "C" unsigned long _DAT_00466bf0;
extern "C" unsigned long _DAT_00466bf4;
extern "C" unsigned long _DAT_00466bf8;
extern "C" unsigned long _DAT_00466bfc;
extern "C" unsigned long _DAT_00466c00;
extern "C" unsigned long _DAT_00466c04;
extern "C" unsigned long _DAT_00466c08;
extern "C" unsigned long _DAT_00466c0c;
extern "C" unsigned long _DAT_00466c10;
extern "C" unsigned long _DAT_00466c14;
extern "C" unsigned long _DAT_00466c18;
extern "C" unsigned long _DAT_00466c1c;
extern "C" unsigned long _DAT_00466c20;
extern "C" unsigned long _DAT_00466c24;
extern "C" unsigned long _DAT_00466c28;
extern "C" unsigned long _DAT_00466c2c;
extern "C" unsigned long _DAT_00466c30;
extern "C" unsigned long _DAT_00466c34;
extern "C" unsigned long _DAT_00466c38;
extern "C" unsigned long _DAT_00466c3c;
extern "C" unsigned long _DAT_00466c40;
extern "C" unsigned long _DAT_00466c44;
extern "C" unsigned long _DAT_00466c48;
extern "C" unsigned long _DAT_00466c4c;
extern "C" unsigned long _DAT_0046700c;
extern "C" unsigned long _DAT_00467010;
extern "C" unsigned long _DAT_00467014;
extern "C" unsigned long _DAT_00467018;
extern "C" unsigned long _DAT_0046701c;
extern "C" unsigned long _DAT_00467020;
extern "C" unsigned long _DAT_00467024;
extern "C" unsigned long _DAT_00467028;
extern "C" unsigned long _DAT_0046702c;
extern "C" unsigned long _DAT_00467030;
extern "C" unsigned long _DAT_00467034;
extern "C" unsigned long _DAT_00467038;
extern "C" unsigned long _DAT_0046703c;
extern "C" unsigned long _DAT_00467040;
extern "C" unsigned long _DAT_00467044;
extern "C" unsigned long _DAT_00467048;
extern "C" unsigned long _DAT_004670e8;
extern "C" unsigned long _DAT_00467218;
extern "C" unsigned long _DAT_0046721c;
extern "C" unsigned long _DAT_00467220;
extern "C" unsigned long _DAT_00467224;
extern "C" unsigned long _DAT_00467338;
extern "C" unsigned long _DAT_0046733c;
extern "C" unsigned long _DAT_00467340;
extern "C" unsigned long _DAT_00467344;
extern "C" unsigned long _DAT_00467460;
extern "C" unsigned long _DAT_00467720;
extern "C" unsigned long _DAT_00467724;
extern "C" unsigned long _DAT_00467728;
extern "C" unsigned long _DAT_0046772c;
extern "C" unsigned long _DAT_00467814;
extern "C" unsigned long _DAT_00467818;
extern "C" unsigned long _DAT_0046781c;
extern "C" unsigned long _DAT_00467820;
extern "C" unsigned long _DAT_00467824;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004601a8;
extern "C" unsigned long g_004601ac;
extern "C" unsigned long g_00460224;
extern "C" unsigned long g_00460228;
extern "C" unsigned long g_00460328;
extern "C" unsigned long g_0046032c;
extern "C" unsigned long g_0046042c;
extern "C" unsigned long g_00460430;
extern "C" unsigned long g_00460580;
extern "C" unsigned long g_00460584;
extern "C" unsigned long g_00460654;
extern "C" unsigned long g_00460658;
extern "C" unsigned long g_004606c0;
extern "C" unsigned long g_004606c4;
extern "C" unsigned long g_0046073c;
extern "C" unsigned long g_00460740;
extern "C" unsigned long g_00460814;
extern "C" unsigned long g_00460818;
extern "C" unsigned long g_004608e4;
extern "C" unsigned long g_004608e8;
extern "C" unsigned long g_004608ec;
extern "C" unsigned long g_004608f0;
extern "C" unsigned long g_00460968;
extern "C" unsigned long g_0046096c;
extern "C" unsigned long g_00460970;
extern "C" unsigned long g_00460974;
extern "C" unsigned long g_004609dc;
extern "C" unsigned long g_004609e0;
extern "C" unsigned long g_004609e4;
extern "C" unsigned long g_004609e8;
extern "C" unsigned long g_00460b80;
extern "C" unsigned long g_00460b84;
extern "C" unsigned long g_00460b88;
extern "C" unsigned long g_00460d14;
extern "C" unsigned long g_00460d18;
extern "C" unsigned long g_00460d1c;
extern "C" unsigned long g_00460d20;
extern "C" unsigned long g_00460d24;
extern "C" unsigned long g_00460d28;
extern "C" unsigned long g_00460d2c;
extern "C" unsigned long g_00460ed8;
extern "C" unsigned long g_00460edc;
extern "C" unsigned long g_00460ee0;
extern "C" unsigned long g_00460ee4;
extern "C" unsigned long g_00460ee8;
extern "C" unsigned long g_00460eec;
extern "C" unsigned long g_00460ef0;
extern "C" unsigned long g_00460ef4;
extern "C" unsigned long g_00460ef8;
extern "C" unsigned long g_00460efc;
extern "C" unsigned long g_00460f00;
extern "C" unsigned long g_00460f04;
extern "C" unsigned long g_00460f08;
extern "C" unsigned long g_00460f0c;
extern "C" unsigned long g_00460f7c;
extern "C" unsigned long g_00460f80;
extern "C" unsigned long g_00460ff0;
extern "C" unsigned long g_00460ff4;
extern "C" unsigned long g_00461064;
extern "C" unsigned long g_00461068;
extern "C" unsigned long g_004610d8;
extern "C" unsigned long g_004610dc;
extern "C" unsigned long g_0046114c;
extern "C" unsigned long g_00461150;
extern "C" unsigned long g_00461278;
extern "C" unsigned long g_0046127c;
extern "C" unsigned long g_00461280;
extern "C" unsigned long g_00461284;
extern "C" unsigned long g_00461288;
extern "C" unsigned long g_0046128c;
extern "C" unsigned long g_00461328;
extern "C" unsigned long g_0046132c;
extern "C" unsigned long g_00461330;
extern "C" unsigned long g_00461478;
extern "C" unsigned long g_0046147c;
extern "C" unsigned long g_00461480;
extern "C" unsigned long g_00461484;
extern "C" unsigned long g_00461670;
extern "C" unsigned long g_00461674;
extern "C" unsigned long g_00461678;
extern "C" unsigned long g_0046167c;
extern "C" unsigned long g_0046191c;
extern "C" unsigned long g_00461920;
extern "C" unsigned long g_00461924;
extern "C" unsigned long g_00461928;
extern "C" unsigned long g_0046192c;
extern "C" unsigned long g_00461930;
extern "C" unsigned long g_00461a68;
extern "C" unsigned long g_00461a6c;
extern "C" unsigned long g_00461a70;
extern "C" unsigned long g_00461a74;
extern "C" unsigned long g_00461a78;
extern "C" unsigned long g_00461a7c;
extern "C" unsigned long g_00461a80;
extern "C" unsigned long g_00461a84;
extern "C" unsigned long g_00461a88;
extern "C" unsigned long g_00461a8c;
extern "C" unsigned long g_00461a90;
extern "C" unsigned long g_00461a94;
extern "C" unsigned long g_00461a98;
extern "C" unsigned long g_00461a9c;
extern "C" unsigned long g_00461c70;
extern "C" unsigned long g_00461c74;
extern "C" unsigned long g_00461c78;
extern "C" unsigned long g_00461c7c;
extern "C" unsigned long g_00461c80;
extern "C" unsigned long g_00461c84;
extern "C" unsigned long g_00461c88;
extern "C" unsigned long g_00461c8c;
extern "C" unsigned long g_00461c90;
extern "C" unsigned long g_00461c94;
extern "C" unsigned long g_00461d50;
extern "C" unsigned long g_00461d54;
extern "C" unsigned long g_00461d58;
extern "C" unsigned long g_00461d5c;
extern "C" unsigned long g_00461d60;
extern "C" unsigned long g_00461dfc;
extern "C" unsigned long g_00461e00;
extern "C" unsigned long g_00461e80;
extern "C" unsigned long g_00461e84;
extern "C" unsigned long g_00461e88;
extern "C" unsigned long g_004621c0;
extern "C" unsigned long g_004621c4;
extern "C" unsigned long g_004621c8;
extern "C" unsigned long g_004621cc;
extern "C" unsigned long g_004621d0;
extern "C" unsigned long g_004621d4;
extern "C" unsigned long g_004621d8;
extern "C" unsigned long g_004621dc;
extern "C" unsigned long g_004624f4;
extern "C" unsigned long g_00462840;
extern "C" unsigned long g_00462844;
extern "C" unsigned long g_00462848;
extern "C" unsigned long g_0046284c;
extern "C" unsigned long g_00462850;
extern "C" unsigned long g_00462854;
extern "C" unsigned long g_00462858;
extern "C" unsigned long g_0046285c;
extern "C" unsigned long g_00462860;
extern "C" unsigned long g_00462864;
extern "C" unsigned long g_00462868;
extern "C" unsigned long g_0046286c;
extern "C" unsigned long g_00462870;
extern "C" unsigned long g_00462874;
extern "C" unsigned long g_00462878;
extern "C" unsigned long g_0046287c;
extern "C" unsigned long g_00462880;
extern "C" unsigned long g_00462884;
extern "C" unsigned long g_00462888;
extern "C" unsigned long g_0046288c;
extern "C" unsigned long g_00462890;
extern "C" unsigned long g_00462894;
extern "C" unsigned long g_00462898;
extern "C" unsigned long g_0046289c;
extern "C" unsigned long g_00462ae8;
extern "C" unsigned long g_00462aec;
extern "C" unsigned long g_00462af0;
extern "C" unsigned long g_00462af4;
extern "C" unsigned long g_00462af8;
extern "C" unsigned long g_00462afc;
extern "C" unsigned long g_00462b00;
extern "C" unsigned long g_00462bc4;
extern "C" unsigned long g_00462bc8;
extern "C" unsigned long g_00462dd4;
extern "C" unsigned long g_00462dd8;
extern "C" unsigned long g_00462ddc;
extern "C" unsigned long g_00462de0;
extern "C" unsigned long g_00462de4;
extern "C" unsigned long g_00462de8;
extern "C" unsigned long g_00462dec;
extern "C" unsigned long g_00462df0;
extern "C" unsigned long g_00462df4;
extern "C" unsigned long g_00462df8;
extern "C" unsigned long g_00463130;
extern "C" unsigned long g_00463134;
extern "C" unsigned long g_00463138;
extern "C" unsigned long g_0046313c;
extern "C" unsigned long g_00463140;
extern "C" unsigned long g_00463144;
extern "C" unsigned long g_00463148;
extern "C" unsigned long g_0046314c;
extern "C" unsigned long g_00463150;
extern "C" unsigned long g_00463154;
extern "C" unsigned long g_00463158;
extern "C" unsigned long g_0046315c;
extern "C" unsigned long g_00463160;
extern "C" unsigned long g_00463164;
extern "C" unsigned long g_00463168;
extern "C" unsigned long g_0046316c;
extern "C" unsigned long g_00463170;
extern "C" unsigned long g_00463174;
extern "C" unsigned long g_00463178;
extern "C" unsigned long g_0046317c;
extern "C" unsigned long g_00463180;
extern "C" unsigned long g_00463184;
extern "C" unsigned long g_00463188;
extern "C" unsigned long g_0046318c;
extern "C" unsigned long g_00463190;
extern "C" unsigned long g_00463194;
extern "C" unsigned long g_00463660;
extern "C" unsigned long g_00463664;
extern "C" unsigned long g_00463668;
extern "C" unsigned long g_0046366c;
extern "C" unsigned long g_00463670;
extern "C" unsigned long g_00463674;
extern "C" unsigned long g_00463678;
extern "C" unsigned long g_0046367c;
extern "C" unsigned long g_00463680;
extern "C" unsigned long g_00463684;
extern "C" unsigned long g_00463688;
extern "C" unsigned long g_0046368c;
extern "C" unsigned long g_00463690;
extern "C" unsigned long g_00463694;
extern "C" unsigned long g_00463698;
extern "C" unsigned long g_0046369c;
extern "C" unsigned long g_004636a0;
extern "C" unsigned long g_004636a4;
extern "C" unsigned long g_004636a8;
extern "C" unsigned long g_004636ac;
extern "C" unsigned long g_004636b0;
extern "C" unsigned long g_004636b4;
extern "C" unsigned long g_004636b8;
extern "C" unsigned long g_004636bc;
extern "C" unsigned long g_004636c0;
extern "C" unsigned long g_004636c4;
extern "C" unsigned long g_004636c8;
extern "C" unsigned long g_004636cc;
extern "C" unsigned long g_004636d0;
extern "C" unsigned long g_004636d4;
extern "C" unsigned long g_004636d8;
extern "C" unsigned long g_004636dc;
extern "C" unsigned long g_004636e0;
extern "C" unsigned long g_0046386c;
extern "C" unsigned long g_00463870;
extern "C" unsigned long g_00463874;
extern "C" unsigned long g_00463878;
extern "C" unsigned long g_0046387c;
extern "C" unsigned long g_00463880;
extern "C" unsigned long g_00463884;
extern "C" unsigned long g_00463888;
extern "C" unsigned long g_0046388c;
extern "C" unsigned long g_00463c48;
extern "C" unsigned long g_00463c4c;
extern "C" unsigned long g_00463c50;
extern "C" unsigned long g_00463c54;
extern "C" unsigned long g_00463c58;
extern "C" unsigned long g_00463c5c;
extern "C" unsigned long g_00463c60;
extern "C" unsigned long g_00463c64;
extern "C" unsigned long g_00463c68;
extern "C" unsigned long g_00463c6c;
extern "C" unsigned long g_00463c70;
extern "C" unsigned long g_00463c74;
extern "C" unsigned long g_00463c78;
extern "C" unsigned long g_00463c7c;
extern "C" unsigned long g_00463c80;
extern "C" unsigned long g_00463c84;
extern "C" unsigned long g_00463c88;
extern "C" unsigned long g_00463c8c;
extern "C" unsigned long g_00463c90;
extern "C" unsigned long g_00463c94;
extern "C" unsigned long g_00463c98;
extern "C" unsigned long g_00463c9c;
extern "C" unsigned long g_00463ca0;
extern "C" unsigned long g_00463ca4;
extern "C" unsigned long g_00463ca8;
extern "C" unsigned long g_00463cac;
extern "C" unsigned long g_00463cb0;
extern "C" unsigned long g_00463cb4;
extern "C" unsigned long g_00463cb8;
extern "C" unsigned long g_00463cbc;
extern "C" unsigned long g_00463cc0;
extern "C" unsigned long g_00463cc4;
extern "C" unsigned long g_00464064;
extern "C" unsigned long g_00464068;
extern "C" unsigned long g_0046406c;
extern "C" unsigned long g_00464070;
extern "C" unsigned long g_00464074;
extern "C" unsigned long g_00464078;
extern "C" unsigned long g_0046407c;
extern "C" unsigned long g_00464080;
extern "C" unsigned long g_00464084;
extern "C" unsigned long g_00464088;
extern "C" unsigned long g_0046408c;
extern "C" unsigned long g_00464090;
extern "C" unsigned long g_00464094;
extern "C" unsigned long g_00464098;
extern "C" unsigned long g_0046409c;
extern "C" unsigned long g_004640a0;
extern "C" unsigned long g_004640a4;
extern "C" unsigned long g_004640a8;
extern "C" unsigned long g_004640ac;
extern "C" unsigned long g_004640b0;
extern "C" unsigned long g_004640b4;
extern "C" unsigned long g_004640b8;
extern "C" unsigned long g_004643f0;
extern "C" unsigned long g_004643f4;
extern "C" unsigned long g_004643f8;
extern "C" unsigned long g_004643fc;
extern "C" unsigned long g_00464400;
extern "C" unsigned long g_00464404;
extern "C" unsigned long g_00464408;
extern "C" unsigned long g_0046440c;
extern "C" unsigned long g_00464410;
extern "C" unsigned long g_004646a0;
extern "C" unsigned long g_004646a4;
extern "C" unsigned long g_004646a8;
extern "C" unsigned long g_004646ac;
extern "C" unsigned long g_004646b0;
extern "C" unsigned long g_004646b4;
extern "C" unsigned long g_0046494c;
extern "C" unsigned long g_00464950;
extern "C" unsigned long g_00464954;
extern "C" unsigned long g_00464958;
extern "C" unsigned long g_0046495c;
extern "C" unsigned long g_00464960;
extern "C" unsigned long g_00464d00;
extern "C" unsigned long g_00464d04;
extern "C" unsigned long g_00464d08;
extern "C" unsigned long g_00464d0c;
extern "C" unsigned long g_00464d10;
extern "C" unsigned long g_00464d14;
extern "C" unsigned long g_00464d18;
extern "C" unsigned long g_00464d1c;
extern "C" unsigned long g_00464d20;
extern "C" unsigned long g_00464d24;
extern "C" unsigned long g_00464d28;
extern "C" unsigned long g_00464d2c;
extern "C" unsigned long g_00464d30;
extern "C" unsigned long g_00465208;
extern "C" unsigned long g_0046520c;
extern "C" unsigned long g_00465210;
extern "C" unsigned long g_00465214;
extern "C" unsigned long g_00465218;
extern "C" unsigned long g_0046521c;
extern "C" unsigned long g_00465220;
extern "C" unsigned long g_00465224;
extern "C" unsigned long g_00465228;
extern "C" unsigned long g_0046522c;
extern "C" unsigned long g_00465230;
extern "C" unsigned long g_00465234;
extern "C" unsigned long g_00465238;
extern "C" unsigned long g_0046523c;
extern "C" unsigned long g_00465240;
extern "C" unsigned long g_004655b0;
extern "C" unsigned long g_004655b4;
extern "C" unsigned long g_004655b8;
extern "C" unsigned long g_004655bc;
extern "C" unsigned long g_004655c0;
extern "C" unsigned long g_004655c4;
extern "C" unsigned long g_004655c8;
extern "C" unsigned long g_0046564c;
extern "C" unsigned long g_00465650;
extern "C" unsigned long g_00465654;
extern "C" unsigned long g_00465658;
extern "C" unsigned long g_0046565c;
extern "C" unsigned long g_00465840;
extern "C" unsigned long g_00465844;
extern "C" unsigned long g_004658d4;
extern "C" unsigned long g_004658d8;
extern "C" unsigned long g_00465c20;
extern "C" unsigned long g_00465c24;
extern "C" unsigned long g_00465c28;
extern "C" unsigned long g_00465c2c;
extern "C" unsigned long g_00465c30;
extern "C" unsigned long g_00465c34;
extern "C" unsigned long g_00465c38;
extern "C" unsigned long g_00465c3c;
extern "C" unsigned long g_00465c40;
extern "C" unsigned long g_00465c44;
extern "C" unsigned long g_00465c48;
extern "C" unsigned long g_00465c4c;
extern "C" unsigned long g_00465c50;
extern "C" unsigned long g_00465c54;
extern "C" unsigned long g_00465c58;
extern "C" unsigned long g_00465c5c;
extern "C" unsigned long g_00465c60;
extern "C" unsigned long g_00465c64;
extern "C" unsigned long g_00465c68;
extern "C" unsigned long g_00465c6c;
extern "C" unsigned long g_004660dc;
extern "C" unsigned long g_004660e0;
extern "C" unsigned long g_004660e4;
extern "C" unsigned long g_004660e8;
extern "C" unsigned long g_004660ec;
extern "C" unsigned long g_004660f0;
extern "C" unsigned long g_004660f4;
extern "C" unsigned long g_004660f8;
extern "C" unsigned long g_004660fc;
extern "C" unsigned long g_00466100;
extern "C" unsigned long g_00466104;
extern "C" unsigned long g_00466108;
extern "C" unsigned long g_0046610c;
extern "C" unsigned long g_00466110;
extern "C" unsigned long g_00466114;
extern "C" unsigned long g_00466118;
extern "C" unsigned long g_0046611c;
extern "C" unsigned long g_00466120;
extern "C" unsigned long g_00466124;
extern "C" unsigned long g_00466128;
extern "C" unsigned long g_0046612c;
extern "C" unsigned long g_00466130;
extern "C" unsigned long g_00466134;
extern "C" unsigned long g_00466138;
extern "C" unsigned long g_0046613c;
extern "C" unsigned long g_00466140;
extern "C" unsigned long g_004664dc;
extern "C" unsigned long g_004664e0;
extern "C" unsigned long g_004664e4;
extern "C" unsigned long g_004664e8;
extern "C" unsigned long g_004664ec;
extern "C" unsigned long g_004664f0;
extern "C" unsigned long g_004664f4;
extern "C" unsigned long g_004664f8;
extern "C" unsigned long g_004664fc;
extern "C" unsigned long g_00466500;
extern "C" unsigned long g_00466504;
extern "C" unsigned long g_00466508;
extern "C" unsigned long g_0046650c;
extern "C" unsigned long g_00466510;
extern "C" unsigned long g_00466514;
extern "C" unsigned long g_00466518;
extern "C" unsigned long g_0046651c;
extern "C" unsigned long g_00466520;
extern "C" unsigned long g_00466524;
extern "C" unsigned long g_00466528;
extern "C" unsigned long g_0046652c;
extern "C" unsigned long g_00466530;
extern "C" unsigned long g_00466534;
extern "C" unsigned long g_00466538;
extern "C" unsigned long g_00466824;
extern "C" unsigned long g_00466828;
extern "C" unsigned long g_0046682c;
extern "C" unsigned long g_00466830;
extern "C" unsigned long g_00466834;
extern "C" unsigned long g_00466838;
extern "C" unsigned long g_0046683c;
extern "C" unsigned long g_00466840;
extern "C" unsigned long g_00466844;
extern "C" unsigned long g_00466848;
extern "C" unsigned long g_0046684c;
extern "C" unsigned long g_00466850;
extern "C" unsigned long g_00466bf0;
extern "C" unsigned long g_00466bf4;
extern "C" unsigned long g_00466bf8;
extern "C" unsigned long g_00466bfc;
extern "C" unsigned long g_00466c00;
extern "C" unsigned long g_00466c04;
extern "C" unsigned long g_00466c08;
extern "C" unsigned long g_00466c0c;
extern "C" unsigned long g_00466c10;
extern "C" unsigned long g_00466c14;
extern "C" unsigned long g_00466c18;
extern "C" unsigned long g_00466c1c;
extern "C" unsigned long g_00466c20;
extern "C" unsigned long g_00466c24;
extern "C" unsigned long g_00466c28;
extern "C" unsigned long g_00466c2c;
extern "C" unsigned long g_00466c30;
extern "C" unsigned long g_00466c34;
extern "C" unsigned long g_00466c38;
extern "C" unsigned long g_00466c3c;
extern "C" unsigned long g_00466c40;
extern "C" unsigned long g_00466c44;
extern "C" unsigned long g_00466c48;
extern "C" unsigned long g_00466c4c;
extern "C" unsigned long g_0046700c;
extern "C" unsigned long g_00467010;
extern "C" unsigned long g_00467014;
extern "C" unsigned long g_00467018;
extern "C" unsigned long g_0046701c;
extern "C" unsigned long g_00467020;
extern "C" unsigned long g_00467024;
extern "C" unsigned long g_00467028;
extern "C" unsigned long g_0046702c;
extern "C" unsigned long g_00467030;
extern "C" unsigned long g_00467034;
extern "C" unsigned long g_00467038;
extern "C" unsigned long g_0046703c;
extern "C" unsigned long g_00467040;
extern "C" unsigned long g_00467044;
extern "C" unsigned long g_00467048;
extern "C" unsigned long g_004670e8;
extern "C" unsigned long g_00467218;
extern "C" unsigned long g_0046721c;
extern "C" unsigned long g_00467220;
extern "C" unsigned long g_00467224;
extern "C" unsigned long g_00467338;
extern "C" unsigned long g_0046733c;
extern "C" unsigned long g_00467340;
extern "C" unsigned long g_00467344;
extern "C" unsigned long g_00467460;
extern "C" unsigned long g_00467720;
extern "C" unsigned long g_00467724;
extern "C" unsigned long g_00467728;
extern "C" unsigned long g_0046772c;
extern "C" unsigned long g_00467814;
extern "C" unsigned long g_00467818;
extern "C" unsigned long g_0046781c;
extern "C" unsigned long g_00467820;
extern "C" unsigned long g_00467824;
sqlite3* UserData::getUserInfoDB() const
{
  return (sqlite3*)(*(undefined4 *)(((int)this) + 0x14));
}

void UserData::setUserInfoDB(sqlite3* p1)
{
  // 原 dump: *(undefined4 *)(param_1 + 0x14) = param_2;
  // 失败原因: 指针赋给 undefined4 -> 类型错, 生成器整段丢弃
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

int UserData::getEquipPackNum() const
{
  return *(undefined4 *)(((int)this) + 0x5c);
}

void UserData::setEquipPackNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = p1;
  return;
}

BackPackData* UserData::getBackPackData() const
{
  return (BackPackData*)(*(undefined4 *)(((int)this) + 0x60));
}

void UserData::setBackPackData(BackPackData* p1)
{
  *(undefined4 *)(((int)this) + 0x60) = (undefined4)(intptr_t)p1;
  return;
}

RoleData* UserData::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 100));
}

cocos2d::CCArray* UserData::getArrayRoleData() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x68));
}

void UserData::setArrayRoleData(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x68) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* UserData::getPlayers() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x6c));
}

void UserData::setPlayers(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x6c) = (undefined4)(intptr_t)p1;
  return;
}

bool UserData::getISGetChannelReward() const
{
  return *(undefined1 *)(((int)this) + 0x9c);
}

void UserData::setISGetChannelReward(bool p1)
{
  *(undefined1 *)(((int)this) + 0x9c) = p1;
  return;
}

bool UserData::getIsGetCard() const
{
  return *(undefined1 *)(((int)this) + 0x9d);
}

void UserData::setIsGetCard(bool p1)
{
  *(undefined1 *)(((int)this) + 0x9d) = p1;
  return;
}

bool UserData::getIsBuySkin() const
{
  return *(undefined1 *)(((int)this) + 0x9e);
}

void UserData::setIsBuySkin(bool p1)
{
  *(undefined1 *)(((int)this) + 0x9e) = p1;
  return;
}

int UserData::getIsEndLessTimeMode() const
{
  return *(undefined4 *)(((int)this) + 0xa0);
}

void UserData::setIsEndLessTimeMode(int p1)
{
  *(undefined4 *)(((int)this) + 0xa0) = p1;
  return;
}

bool UserData::getIsBuyOneGift() const
{
  return *(undefined1 *)(((int)this) + 0xb4);
}

void UserData::setIsBuyOneGift(bool p1)
{
  *(undefined1 *)(((int)this) + 0xb4) = p1;
  return;
}

int UserData::getTalentNum() const
{
  return *(undefined4 *)(((int)this) + 0xb8);
}

void UserData::setTalentNum(int p1)
{
  *(undefined4 *)(((int)this) + 0xb8) = p1;
  return;
}

cocos2d::CCDictionary* UserData::getDicMissionStar() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0xcc));
}

void UserData::setDicMissionStar(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0xcc) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* UserData::getDicRewardMissionTimes() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0xd4));
}

cocos2d::CCDictionary* UserData::getDicJingjiShopItem() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0xd8));
}

void UserData::setDicJingjiShopItem(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0xd8) = (undefined4)(intptr_t)p1;
  return;
}

double UserData::getFloatJJShopParaAttrack() const
{
  return *(undefined8 *)(((int)this) + 0xe0);
}

double UserData::getFloatJJShopParaDefense() const
{
  return *(undefined8 *)(((int)this) + 0xe8);
}

int UserData::getIntFrightJN() const
{
  return *(undefined4 *)(((int)this) + 0xf0);
}

void UserData::setIntFrightJN(int p1)
{
  *(undefined4 *)(((int)this) + 0xf0) = p1;
  return;
}

TalentUserData* UserData::getTalentUserData() const
{
  return (TalentUserData*)(*(undefined4 *)(((int)this) + 0xf8));
}

void UserData::setTalentUserData(TalentUserData* p1)
{
  *(undefined4 *)(((int)this) + 0xf8) = (undefined4)(intptr_t)p1;
  return;
}

LivenessUserData* UserData::getLivenessUserData() const
{
  return (LivenessUserData*)(*(undefined4 *)(((int)this) + 0xfc));
}

void UserData::setLivenessUserData(LivenessUserData* p1)
{
  *(undefined4 *)(((int)this) + 0xfc) = (undefined4)(intptr_t)p1;
  return;
}

int UserData::getQQCoinStatus() const
{
  return *(undefined4 *)(((int)this) + 0x100);
}

void UserData::setQQCoinStatus(int p1)
{
  *(undefined4 *)(((int)this) + 0x100) = p1;
  return;
}

ImmortalsRoleData* UserData::getImmortalsRoleData() const
{
  return (ImmortalsRoleData*)(*(undefined4 *)(((int)this) + 0x104));
}

void UserData::setImmortalsRoleData(ImmortalsRoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x104) = (undefined4)(intptr_t)p1;
  return;
}

PetUserData* UserData::getPetUserData() const
{
  return (PetUserData*)(*(undefined4 *)(((int)this) + 0x108));
}

void UserData::setPetUserData(PetUserData* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

ChallengeUserData* UserData::getChallengeUserDate() const
{
  return (ChallengeUserData*)(*(undefined4 *)(((int)this) + 0x10c));
}

void UserData::setChallengeUserDate(ChallengeUserData* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

MissionStarRewardUserData* UserData::getStarRewardUserData() const
{
  return (MissionStarRewardUserData*)(*(undefined4 *)(((int)this) + 0x110));
}

int UserData::getSearchlevel() const
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void UserData::setSearchlevel(int p1)
{
  *(undefined4 *)(((int)this) + 0x114) = p1;
  return;
}

int UserData::getGiftday() const
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void UserData::setGiftday(int p1)
{
  *(undefined4 *)(((int)this) + 0x118) = p1;
  return;
}

int UserData::getGiftweek() const
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void UserData::setGiftweek(int p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = p1;
  return;
}

int UserData::getLV()
{
  return 0;
}

void UserData::setLV(int p1)
{
  return;
}

int UserData::getSevenDayTime()
{
  return *(undefined4 *)(((int)this) + 0x20);
}

int UserData::getSevenDayIndex()
{
  return *(undefined4 *)(((int)this) + 0x24);
}

int UserData::getIsFirstchest()
{
  return *(undefined4 *)(((int)this) + 0x74);
}

int UserData::getISRating()
{
  return *(undefined4 *)(((int)this) + 0x78);
}

int UserData::getISNovicePackage()
{
  return *(undefined4 *)(((int)this) + 0x7c);
}

void UserData::setMoneyTreeData(std::string * p1)
{
  func_0079e52c(((int)this) + 0x120);
  return;
}

void UserData::setStrPKData(std::string * p1)
{
  func_0079e52c(((int)this) + 0xf4);
  return;
}

void UserData::setRewardMissionTimes(std::string * p1)
{
  func_0079e52c(((int)this) + 0xd0);
  return;
}

void UserData::setMissionStar(std::string * p1)
{
  func_0079e52c(((int)this) + 200);
  return;
}

void UserData::setMonthlyTimeGet(std::string * p1)
{
  func_0079e52c(((int)this) + 0xc4);
  return;
}

void UserData::setLivenessTime(std::string * p1)
{
  func_0079e52c(((int)this) + 0xc0);
  return;
}

void UserData::setHchTime(std::string * p1)
{
  func_0079e52c(((int)this) + 0xbc);
  return;
}

void UserData::setWeekPack(std::string * p1)
{
  func_0079e52c(((int)this) + 0xb0);
  return;
}

void UserData::setDailyPack(std::string * p1)
{
  func_0079e52c(((int)this) + 0xac);
  return;
}

void UserData::setToken(std::string * p1)
{
  func_0079e52c(((int)this) + 0xa8);
  return;
}

void UserData::setUID(std::string * p1)
{
  func_0079e52c(((int)this) + 0xa4);
  return;
}

void UserData::setAchievementBoss(std::string * p1)
{
  func_0079e52c(((int)this) + 0x98);
  return;
}

void UserData::setAchievementRewards(std::string * p1)
{
  func_0079e52c(((int)this) + 0x94);
  return;
}

void UserData::setAchievementMonsters(std::string * p1)
{
  func_0079e52c(((int)this) + 0x90);
  return;
}

void UserData::setAchievementItems(std::string * p1)
{
  func_0079e52c(((int)this) + 0x8c);
  return;
}

void UserData::setSelectHero(std::string * p1)
{
  func_0079e52c(((int)this) + 0x70);
  return;
}

void UserData::setGuided(std::string * p1)
{
  func_0079e52c(((int)this) + 0x58);
  return;
}

std::string UserData::getMoneyTreeData() const
{ return *(std::string *)(((int)this) + 0x120); }

std::string UserData::getStrPKData() const
{ return *(std::string *)(((int)this) + 0xf4); }

std::string UserData::getRewardMissionTimes() const
{ return *(std::string *)(((int)this) + 0xd0); }

std::string UserData::getMissionStar(std::string * p1)
{ return std::string(); }

std::string UserData::getMonthlyTimeGet() const
{ return *(std::string *)(((int)this) + 0xc4); }

std::string UserData::getLivenessTime() const
{ return *(std::string *)(((int)this) + 0xc0); }

std::string UserData::getHchTime() const
{ return *(std::string *)(((int)this) + 0xbc); }

std::string UserData::getWeekPack() const
{ return *(std::string *)(((int)this) + 0xb0); }

std::string UserData::getDailyPack() const
{ return *(std::string *)(((int)this) + 0xac); }

std::string UserData::getToken() const
{ return *(std::string *)(((int)this) + 0xa8); }

std::string UserData::getUID() const
{ return *(std::string *)(((int)this) + 0xa4); }

std::string UserData::getAchievementBoss() const
{ return *(std::string *)(((int)this) + 0x98); }

std::string UserData::getAchievementRewards() const
{ return *(std::string *)(((int)this) + 0x94); }

std::string UserData::getAchievementMonsters() const
{ return *(std::string *)(((int)this) + 0x90); }

std::string UserData::getAchievementItems() const
{ return *(std::string *)(((int)this) + 0x8c); }

std::string UserData::getSelectHero() const
{ return *(std::string *)(((int)this) + 0x70); }

std::string UserData::getGuided() const
{ return *(std::string *)(((int)this) + 0x58); }

void UserData::setRoleData(RoleData* p1)
{
  if (*(int *)(((int)this) + 100) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 100) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 100) = (undefined4)(intptr_t)p1;
  }
  return;
}

undefined4 UserData::getSqlResult(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 UserData::getSqlResultNew(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::updateData(std::string * p1, std::string * p2, std::string * p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::updateDataNew(std::string * p1, std::string * p2, std::string * p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::initLivenessUserData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x40));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0xfc) = uVar1;
  return;
}

void UserData::initImmortalsRoleData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x24));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x104) = uVar1;
  return;
}

void UserData::initPetUserData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x24));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x108) = uVar1;
  return;
}

void UserData::initChallengeDate()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x2c));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x10c) = uVar1;
  return;
}

undefined4 UserData::sortByLv(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)p1)->count());
  uVar10 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->count());
      if (iVar4 - 1U <= uVar10) break;
      uVar3 = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->count());
        if (iVar4 + ~uVar10 <= uVar3) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uVar3));
        uVar9 = (undefined4)(*(undefined4 *)(g_00460580 + 0x460504));
        uVar8 = (undefined4)(*(undefined4 *)(g_00460584 + 0x460506));
        piVar5 = (int *)0x0;
        if (iVar4 != 0) {
          piVar5 = (int *)func_0079e55c(iVar4,uVar9,uVar8,0);
        }
        uVar3 = (undefined4)(uVar3 + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uVar3));
        if (iVar4 == 0) {
          (**(code **)(*(int *)(piVar5) + (0x20)))(piVar5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x46056e);
          (*pcVar1)();
        }
        piVar6 = (int *)func_0079e55c(iVar4,uVar9,uVar8,0,uVar3,uVar10,iVar4);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
        iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x20)))(piVar6));
        if (iVar4 < iVar7) {
          ((cocos2d::CCArray *)p1)->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar6);
        }
      }
      uVar10 = (undefined4)(uVar10 + 1);
    }
  }
  ((cocos2d::CCArray *)uVar2)->addObjectsFromArray((cocos2d::CCArray*)p1);
  return uVar2;
}

void UserData::sortPlayersByLv()
{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar2 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->count());
  uStack_20 = (undefined4)(0);
  if (1 < uVar2) {
    for (; iVar3 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->count(),
        uStack_20 < iVar3 - 1U; uStack_20 = uStack_20 + 1) {
      uStack_24 = (undefined4)(0);
      while( true ) {
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->count());
        if (iVar3 + ~uStack_20 <= uStack_24) break;
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->objectAtIndex((unsigned int)uStack_24));
        uVar9 = (undefined4)(*(undefined4 *)(g_00460654 + 0x4605d2));
        uVar8 = (undefined4)(*(undefined4 *)(g_00460658 + 0x4605d4));
        piVar4 = (int *)0x0;
        if (iVar3 != 0) {
          piVar4 = (int *)func_0079e55c(iVar3,uVar9,uVar8,0);
        }
        uStack_24 = (undefined4)(uStack_24 + 1);
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->objectAtIndex((unsigned int)uStack_24));
        if (iVar3 == 0) {
          piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x18)))(piVar4);
          (**(code **)(*(int *)(piVar4) + (0x20)))();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x46064e);
          (*pcVar1)();
        }
        piVar5 = (int *)func_0079e55c(iVar3,uVar9,uVar8,0);
        piVar6 = (int *)(**(code **)(*(int *)(piVar4) + (0x18)))(piVar4);
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x20)))());
        piVar6 = (int *)(**(code **)(*(int *)(piVar5) + (0x18)))(piVar5);
        iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x20)))());
        if (iVar3 < iVar7) {
          ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->exchangeObject((cocos2d::CCObject*)piVar4, (cocos2d::CCObject*)piVar5);
        }
      }
    }
  }
  return;
}

void UserData::initPlayersData()
{
  undefined4 p4 = 0;

  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->removeAllObjects();
  for (uVar5 = 0; uVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x68))->count(),
      uVar5 < uVar1; uVar5 = uVar5 + 1) {
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x68))->objectAtIndex((unsigned int)uVar5));
    if (((iVar2 != 0) &&
        (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_004606c0 + 0x460688),
                                         *(undefined4 *)(g_004606c4 + 0x46068a),0,p4),
        piVar3 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar3 + 0x38))(), iVar2 != 0)) {
      uVar4 = (undefined4)(((PlayerData *)this)->create());
      ((PlayerData *)uVar4)->initWithRoleData((RoleData*)piVar3);
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x6c))->addObject((cocos2d::CCObject*)uVar4);
    }
  }
  UserData::sortPlayersByLv();
  return;
}

void UserData::updateGuideToDataBase(std::string * p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e52c(((int)this) + 0x58);
  func_0079e45c(auStack_24,"guided",auStack_2c);
  func_0079e53c(auStack_20,((int)this) + 0x58);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  return;
}

int UserData::getAllNormalStar()
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(((int)this) + 0x154); piVar2 != *(int **)(((int)this) + 0x158);
      piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

int UserData::getAllBossStar()
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(((int)this) + 0x160); piVar2 != *(int **)(((int)this) + 0x164);
      piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

int UserData::getNormalStarTypeNum(int p1)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(((int)this) + 0x154); piVar2 != *(int **)(((int)this) + 0x158);
      piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + (uint)(p1 == *piVar2);
  }
  return iVar1;
}

int UserData::getBossStarTypeNum(int p1)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(((int)this) + 0x160); piVar2 != *(int **)(((int)this) + 0x164);
      piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + (uint)(p1 == *piVar2);
  }
  return iVar1;
}

void UserData::updateMonthlyTimeGet(std::string * p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e52c(((int)this) + 0xc4);
  func_0079e45c(auStack_24,"monthly_time_get",auStack_2c);
  func_0079e53c(auStack_20,p1);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  return;
}

void UserData::updateValleryRoleHistory()
{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e45c(auStack_28,g_004608e4 + 0x460830,auStack_1c);
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1a8));
  if (*(int *)(((int)this) + 0x1ac) - *(int *)(((int)this) + 0x1a8) >> 2 != 0) {
    while (iVar2 != *(int *)(((int)this) + 0x1ac)) {
      func_0079e874(auStack_28,iVar2);
      iVar1 = (undefined4)(intptr_t)(iVar2 + 4);
      iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1ac));
      if (iVar1 != *(int *)(((int)this) + 0x1ac)) {
        func_0079e69c(auStack_28,g_004608ec + 0x46087e);
        iVar2 = (undefined4)(intptr_t)(iVar1);
      }
    }
  }
  func_0079e45c(auStack_24,"valleryrole",auStack_30);
  func_0079e53c(auStack_20,auStack_28);
  func_0079e45c(auStack_1c,"TEXT",auStack_2c);
  UserData::updateDataNew((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

bool UserData::checkMissionStarNeedUpdate(std::string * p1, int p2)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (undefined4)(intptr_t)(func_0079e6c0(*(int *)p1));
  if (iVar1 < 0x1f41) {
    if (iVar1 < 0xfa1) {
      return false;
    }
    iVar2 = (undefined4)(intptr_t)(((int)this) + 0x154);
    iVar4 = (undefined4)(intptr_t)(g_00460974);
    if ((uint)(*(int *)(((int)this) + 0x158) - *(int *)(((int)this) + 0x154) >> 2) <
        (uint)(iVar1 + g_00460970)) {
      return true;
    }
  }
  else {
    iVar2 = (undefined4)(intptr_t)(((int)this) + 0x160);
    iVar4 = (undefined4)(intptr_t)(g_0046096c);
    if ((uint)(*(int *)(((int)this) + 0x164) - *(int *)(((int)this) + 0x160) >> 2) <
        (uint)(iVar1 + g_00460968)) {
      return true;
    }
  }
  piVar3 = (int *)((std::vector<int, std::allocator<int>> *)iVar2)->at((unsigned int)iVar1 + iVar4);
  return *piVar3 < p2;
}

bool UserData::checkValleryModePass(int p1)
{
  int *piVar1;
  
  piVar1 = (int *)((std::vector<int, std::allocator<int>> *)this)->at((unsigned int)((int)this) + 0x19c);
  return *piVar1 != 0;
}

undefined4 UserData::isBuyGift(std::string * p1)
{
  return 0;
}

void UserData::updateVallerySchedule()
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x19c);
  uVar5 = (undefined4)(*(uint *)(iVar1 + 0x14));
  if (uVar5 < (uint)(*(int *)(((int)this) + 0x1a0) - *(int *)(((int)this) + 0x19c) >> 2)) {
    piVar2 = (int *)((std::vector<int, std::allocator<int>> *)iVar4)->at((unsigned int)uVar5);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar4)->at((unsigned int)uVar5);
      *puVar3 = 1;
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar4)->at(0);
      uVar7 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar4)->at((unsigned int)1);
      uVar6 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar4)->at((unsigned int)2);
      cocos2d::CCString::createWithFormat((char const*)"%d;%d;%d", uVar7, uVar6, *puVar3);
      uVar6 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e45c(auStack_28,uVar6,auStack_1c);
      func_0079e45c(auStack_24,"valleryschedule",auStack_30);
      func_0079e53c(auStack_20,auStack_28);
      func_0079e45c(auStack_1c,"TEXT",auStack_2c);
      UserData::updateDataNew((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      func_0079e2bc(auStack_24);
      func_0079e2bc(auStack_28);
    }
  }
  return;
}

void UserData::initDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::updateRewardMissionTimesToDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::setSevenDayTime(int p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x20) = p1;
  func_0079e45c(auStack_20,"seventime",auStack_2c);
  ConvertToString<int>(auStack_24, *(undefined4 *)(((int)this) + 0x20), 0);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_20);
  return;
}

void UserData::setSevenDayIndex(int p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x24) = p1;
  func_0079e45c(auStack_20,"sevenindex",auStack_2c);
  ConvertToString<int>(auStack_24, *(undefined4 *)(((int)this) + 0x24), 0);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_20);
  return;
}

void UserData::setIsFirstchest(int p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x74) = p1;
  func_0079e45c(auStack_20,"firstchest",auStack_2c);
  ConvertToString<int>(auStack_24, *(undefined4 *)(((int)this) + 0x74), 0);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_20);
  return;
}

void UserData::setISRating(int p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x78) = p1;
  func_0079e45c(auStack_20,"israting",auStack_2c);
  ConvertToString<int>(auStack_24, *(undefined4 *)(((int)this) + 0x78), 0);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_20);
  return;
}

void UserData::setISNovicePackage(int p1)
{
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x7c) = p1;
  func_0079e45c(auStack_20,"isnovicepackage",auStack_2c);
  ConvertToString<int>(auStack_24, *(undefined4 *)(((int)this) + 0x7c), 0);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_20);
  return;
}

void UserData::updateMissionStarToDB()
{
  undefined4 *puVar1;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iStack_30 = (undefined4)(intptr_t)(*(int *)(g_00461278 + 0x461162) + 0xc);
  for (puVar1 = *(undefined4 **)(((int)this) + 0x154); puVar1 != *(undefined4 **)(((int)this) + 0x158);
      puVar1 = puVar1 + 1) {
    if (puVar1 != *(undefined4 **)(((int)this) + 0x154)) {
      func_0079e69c(&iStack_30,g_0046127c + 0x46118e);
    }
    ConvertToString<int>(auStack_2c, *puVar1, 0);
    func_0079e874(&iStack_30,auStack_2c);
    func_0079e2bc(auStack_2c);
  }
  if (*(int *)(((int)this) + 0x164) - *(int *)(((int)this) + 0x160) >> 2 != 0) {
    func_0079e69c(&iStack_30,g_00461284 + 0x4611d4);
    for (puVar1 = *(undefined4 **)(((int)this) + 0x160); puVar1 != *(undefined4 **)(((int)this) + 0x164);
        puVar1 = puVar1 + 1) {
      if (puVar1 != *(undefined4 **)(((int)this) + 0x160)) {
        func_0079e69c(&iStack_30,g_00461288 + 0x4611f8);
      }
      ConvertToString<int>(auStack_28, *puVar1, 0);
      func_0079e874(&iStack_30,auStack_28);
      func_0079e2bc(auStack_28);
    }
  }
  func_0079e45c(auStack_24,"missionstar",auStack_2c);
  func_0079e53c(auStack_20,&iStack_30);
  func_0079e45c(auStack_1c,"TEXT",auStack_28);
  UserData::updateData((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(&iStack_30);
  return;
}

int UserData::isVallerySelectRole(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * UserData::getRoleDataByID(std::string * p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_1c [8];
  
  piVar3 = (int *)0x0;
  if (*(int *)(((int)this) + 0x68) != 0) {
    piVar3 = (int *)0x0;
    piVar1 = *(int **)(*(int *)(((int)this) + 0x68) + 0x14);
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      piVar4 = (int *)piVar1[2];
      piVar1 = piVar4 + iVar2 + g_00461328;
      for (; (piVar4 <= piVar1 && (*piVar4 != 0)); piVar4 = piVar4 + 1) {
        piVar3 = (int *)func_0079e55c(*piVar4,*(undefined4 *)(g_0046132c + 0x4612f0),
                                        *(undefined4 *)(g_00461330 + 0x4612f2),0);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*(int *)(piVar3) + (0x18)))(auStack_1c,piVar3);
          iVar2 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                            (auStack_1c,p1);
          func_0079e2bc(auStack_1c);
          if (iVar2 != 0) {
            return (int *)(piVar3);
          }
        }
      }
    }
  }
  return (int *)(piVar3);
}

void UserData::updatePlayersLv(std::string * p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::initVirtualItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

long UserData::getExp()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::hasVirNumber(int p1, double p2)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)(p4);
  uVar2 = (undefined4)(intptr_t)(UserData::getVirNumber((int)0));
  iVar1 = (undefined4)(intptr_t)(func_0079e754((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),p2,p4,uVar3));
  return;
}

void UserData::addAchievementItemData()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar11 = (undefined4)(intptr_t)(g_00461920);
  iVar10 = (undefined4)(intptr_t)("USER_DEFUALT_KEY_IS_ADDACHIEVEMENT");
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar11 = (undefined4)(intptr_t)(iVar11 + 0x461738);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCUserDefault *)uVar1)->getBoolForKey((char const*)iVar10, 0));
  if (iVar2 == 0) {
    uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    ((cocos2d::CCUserDefault *)uVar1)->setBoolForKey((char const*)iVar10, 1);
    uVar1 = (undefined4)(((BLAchievementManager *)this)->share());
    /* RAW_SLOT_FIX (R73)：原为 `piVar3 = shareDataManager(); uVar4 = (**(code**)(*(int*)(piVar3)+0x28))();`
       —— DataManager 槽 0x28 = idx10 = `getUserData()`（原版 _ZTV11DataManager 反查确认），
       且生成器**多一次解引用** → 野跳/gorge；真机 tombstone: UserData::addAchievementItemData()+110 fault 0x34。*/
    UserData *pUserDataA = ((DataManager *)(intptr_t)((DataManager *)this)->shareDataManager())->getUserData();
    pUserDataA->getVirNumber(1);
    uVar12 = (undefined4)(intptr_t)(func_0079ea64());
    ((BLAchievementManager *)this)->updateItemNum(uVar1, 1);
    uVar1 = (undefined4)(((BLAchievementManager *)this)->share());
    UserData *pUserDataB = ((DataManager *)(intptr_t)((DataManager *)this)->shareDataManager())->getUserData();
    pUserDataB->getVirNumber(2);
    uVar12 = (undefined4)(intptr_t)(func_0079ea64());
    ((BLAchievementManager *)this)->updateItemNum(uVar1, 2);
    /* EXTRA_DEREF_FIX (R73)：原版形态是 `ldr r2,[r0]; ldr r2,[r2,#0x18]; blx r2`——**只取一次**函数指针。
       生成器的 `(**(code **)(EXPR))()` 在本工程会**多一条 ldr**（把函数体第一个字当地址跳过去）→ 野跳
       （已有多处指令级实证，如 BLGameScene::onEnter+26）。这里改用**显式函数指针类型**调用，强制只加载一次。 */
    /* GUARD (R86)：成员 @this+0x60 本应由 `UserData::initData()`（原版是一个**几百行**的数据装载函数）
       填充，但该函数目前是 TODO 空实现 -> 成员为 0/垃圾 -> 对它做虚调用就跳进数据段
       （真机实证：pc 0x00b9c1ec 落在本 .so 的 .data.rel.ro 内，SEGV_ACCERR）。
       这里先做**空指针保护**让流程能继续；真正的修法是实现 `UserData::initData()`（已列为下一大项）。*/
    {
      int *pMember60 = *(int **)((int)this + 4*(0x18));
      iVar2 = (pMember60 != 0)
                ? (undefined4)(intptr_t)(((int (*)())(*(int *)pMember60 + 0x18))())
                : 0;
    }
    if (iVar2 != 0) {
      iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
      iVar10 = (undefined4)(intptr_t)(iVar2);
      if (iVar2 != 0) {
        iVar10 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
      }
      while (iVar2 != 0) {
        if ((*(int *)(iVar2 + 0x104) != 0) &&
           (piVar3 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),
                                            *(undefined4 *)(iVar11 + g_00461924),
                                            *(undefined4 *)(iVar11 + g_00461928),0,
                                            *(undefined4 *)(iVar11 + g_00461924),
                                            *(undefined4 *)(iVar11 + g_00461928)),
           piVar3 != (int *)0x0)) {
          uVar1 = (undefined4)(((BLAchievementManager *)this)->share());
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))(piVar3));
          iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x28)))(piVar3));
          ((BLAchievementManager *)this)->updateItemNum(uVar1, uVar4);
        }
        iVar2 = (undefined4)(intptr_t)(iVar10);
        if (iVar10 != 0) {
          iVar10 = (undefined4)(intptr_t)(*(int *)(iVar10 + 0x110));
        }
      }
    }
    uVar9 = (undefined4)(0);
    while( true ) {
      /* NAMED_SLOT_FIX (R100)：原版 _ZTV8UserData 反查确认 —— **slot 0x68 (idx 26) = UserData::getPlayers()**
         （见 work/full-src/vtables_UserData.txt），所以这里不是"对 this 做虚调用"，而是
         "取成员数组 this->getPlayers() 再遍历它"。生成器把它渲染成裸槽调用 `(**(code**)(*this+0x68))()`，
         而我们头文件没有还原虚表顺序，所以那个槽在我们这里指向了别的函数（真机实证跳到 CCObject::acceptVisitor）。
         按**真实语义**改用具名调用（getPlayers() 已在 UserData.h 第 22 行声明）。*/
      {
        cocos2d::CCArray *pPlayers = ((UserData *)this)->getPlayers();
        if (pPlayers != 0) {
          uVar5 = (undefined4)(pPlayers->count());
        }
        else {
          uVar5 = (undefined4)(0);
        }
      }
      if (uVar5 <= uVar9) break;
      {
        cocos2d::CCArray *pPlayers2 = ((UserData *)this)->getPlayers();
        uVar1 = (undefined4)(intptr_t)((pPlayers2 != 0) ? pPlayers2->objectAtIndex((unsigned int)uVar9) : 0);
      }
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)uVar9));
      if (iVar2 != 0) {
        uVar1 = (undefined4)(*(undefined4 *)(iVar11 + g_00461924));
        piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)(iVar11 + g_0046192c),0,uVar1,
                                        *(undefined4 *)(iVar11 + g_0046192c));
        uVar5 = (undefined4)(0);
        if (piVar3 != (int *)0x0) {
          while( true ) {
            (**(code **)(*(int *)(piVar3) + (0x28)))(piVar3);
            uVar6 = (undefined4)(((cocos2d::CCArray *)this)->count());
            if (uVar6 <= uVar5) break;
            uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))(piVar3));
            iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex((unsigned int)uVar5));
            if (((iVar2 != 0) &&
                (piVar7 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)(iVar11 + g_00461930)
                                                 ,0,*(undefined4 *)(iVar11 + g_00461930)),
                piVar7 != (int *)0x0)) && (iVar2 = (**(code **)(*(int *)(piVar7) + (0x18)))(), iVar2 != 0)) {
              iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
              iVar10 = (undefined4)(intptr_t)(iVar2);
              if (iVar2 != 0) {
                iVar10 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
              }
              while (iVar2 != 0) {
                piVar7 = (int *)(iVar2 + 0x104);
                iVar2 = (undefined4)(intptr_t)(iVar10);
                if ((*piVar7 != 0) &&
                   (piVar7 = (int *)func_0079e55c(*piVar7,uVar1,
                                                    *(undefined4 *)(iVar11 + g_00461928),0),
                   iVar2 = iVar10, piVar7 != (int *)0x0)) {
                  uVar4 = (undefined4)(((BLAchievementManager *)this)->share());
                  uVar8 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x20)))(piVar7));
                  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x28)))(piVar7));
                  ((BLAchievementManager *)this)->updateItemNum(uVar4, uVar8);
                  iVar2 = (undefined4)(intptr_t)(iVar10);
                }
                iVar10 = (undefined4)(intptr_t)(iVar2);
                if (iVar2 != 0) {
                  iVar10 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
                }
              }
            }
            uVar5 = (undefined4)(uVar5 + 1);
          }
        }
      }
      uVar9 = (undefined4)(uVar9 + 1);
    }
    ((BLAchievementManager *)this)->share();
    ((BLAchievementManager *)this)->updateDataToDB();
  }
  return;
}

int * UserData::getVirNumberString(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void UserData::setVirNumber(int p1, double p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 UserData::setExp(long p1)
{
  undefined8 uVar1;
  
  uVar1 = (undefined4)(intptr_t)(func_0079e734(p1));
  UserData::setVirNumber(3, (int)uVar1, (int)((ulonglong)uVar1 >> 0x20));
  return ghidra_CONCAT44(p1,1);
}

void UserData::addVirNumber(int p1, double p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 UserData::isFundBought()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::isFundDiamondGet(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::initRewardMissionTimes()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::updateExpToDataBase()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

UserData::~UserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::importTableData(sqlite3* p1, sqlite3* p2, std::string * p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::importDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::updateDBByAppVersion()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 * UserData::getRolesID()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void UserData::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 UserData::setValleryRole(std::vector<std::string, std::allocator<std::string>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::setValleryRoleHistory(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int UserData::getValleryRoleHistory() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::initStartData()
/* DESTROYAUX_V1: 1 处降级 */
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::subVirNumber(int p1, double p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::addExp(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::addExpByid(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::addPlayers(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::setGiftIDs(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::initMissionStar()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::updateMissionStar(std::string * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int UserData::getGiftIDs() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void UserData::setFurnaceExchangeItemState(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::setMirrorPassDate(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int UserData::getFurnaceExchangeItemState()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

UserData::UserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 UserData::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x1b8));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void UserData::initData()
{
  cocos2d::CCLog("DIAG_R102 initData ENTER this=%p", (void *)this);
  /* IMPL_FIX (R87)：原为 TODO 空实现 —— 这正是"数据层空洞"的核心（成员从未被填充，
     下游对该成员做虚调用就会踩到 vptr=0 的对象，真机实证 pc 0x00000018）。
     按原版 dump `UserData::initData`（5685 行附近）逐条还原**第一片**：
        piVar3 = operator new(0x18);  BackPackData::BackPackData(piVar3);  init(piVar3);
        if (init()==0) { vtable[8](piVar3); piVar3 = 0; } else { autorelease(); }
        *(int **)(this + 0x60) = piVar3;   if (piVar3) retain();
     —— 关键点：**生成器把 `BackPackData::BackPackData(piVar3)` 那句构造函数调用丢了**，
     所以原版是"裸 new + 显式构造"，而我们的重建只剩裸 new → vptr 为 0。
     其余分片（每个成员对象一段，形如 <T>Data::init）后续继续按同一模板还原。*/
  BackPackData *pBackPackData = new BackPackData();
  if (!pBackPackData->init()) {
    delete pBackPackData;
    pBackPackData = 0;
  }
  else {
    pBackPackData->autorelease();
  }
  *(BackPackData **)((int)this + 0x60) = pBackPackData;
  if (pBackPackData != 0) {
    pBackPackData->retain();
  }
  /* MEMBER_DEFAULT_FIX (R101)：原版这里还有两片对象创建（`TalentUserData` size 0x30、
     `MissionStarRewardUserData` size 0xc —— 见 initdata_slices.json），以及大量 DB 查询；
     它们负责填充"数组/字典型成员"。在数据层完全实现之前，先给**数组型成员**建**空数组**，
     避免下游遍历时拿到垃圾指针：
       真机实证 —— UserData::getPlayers() 返回 *(int *)(this + 0x6c)（从未被赋值）→ 垃圾 →
       在 CCArray::count() 里崩（fault 0x00000013）。
     空数组 = 原版的"无数据"状态，语义上安全；后续实现 DB 查询时用真数据替换即可。*/
  /* MEMBER_DEFAULT_FIX (R103)：**无条件**给数组型成员建空数组。
     为什么不是 `if (getX()==0)`：R102 真机实测 —— 进 initData 时成员 `+0x6c` 的值是 **0xffffffff**（垃圾，
     不是 0），所以 `==0` 判断跳过、兜底失效（这正是 R101 兜底"没生效"的原因）。
     initData 是初始化函数，直接覆盖成"空数组"才是正确语义（原版此处由 DB 查询填真数据）。*/
  ((UserData *)this)->setPlayers(cocos2d::CCArray::create());
  ((UserData *)this)->setArrayRoleData(cocos2d::CCArray::create());
  /* DIAG_R103：用**getter** 读回来（避免像 R102 那样记错偏移）*/
  cocos2d::CCLog("DIAG_R103 initData EXIT this=%p getPlayers=%p getArrayRoleData=%p",
                 (void *)this, (void *)(((UserData *)this)->getPlayers()),
                 (void *)(((UserData *)this)->getArrayRoleData()));
  return;
}

bool UserData::init()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  UserData::initDB();
  UserData::updateDBByAppVersion();
  func_0079e45c(&uStack_14,"lol.plist",&iStack_18);
    /* STRING_ARG_FIX (R127)??? **GnuString ? rep ??**??? std::string* ????
     ?? openDB ? c_str() ????????? DIAG?path="ol.plist" ?? ????? "l"?
     rc=14 SQLITE_CANTOPEN??????????? std::string ??????*/
  std::string hwDbPath("lol.plist");
  ((DBUtil *)this)->openDB((sqlite3**)((int)this) + 0x14, &hwDbPath);
  func_0079e2bc(&uStack_14);
  UserData::initStartData();
  UserData::initData();
  ((BLAchievementManager *)this)->share();
  ((BLAchievementManager *)this)->initData();
  UserData::addAchievementItemData();
  ((BLActivityManager *)this)->share();
  ((BLActivityManager *)this)->initData();
  return ghidra_CONCAT44(iStack_18,1);
}

undefined8 UserData::getMissionByType(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

std::string UserData::getMission()
{ return std::string(); }

void UserData::setMission(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

std::string UserData::getChapter()
{ return std::string(); }

void UserData::setChapter(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 UserData::nextMission()
{
  undefined4 p2 = 0;

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  ((UserData *)(&uStack_28))->getChapter();
  ((UserData *)(p2))->getMission();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x38)))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))());
  if (iVar2 == 1) {
    piVar1 = (int *)::operator new(0x18);
    ::new ((void *)piVar1) BLMissionChaptersData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar2 = (undefined4)(intptr_t)(((BLMissionChaptersData *)(piVar1))->init());
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar1))->autorelease();
    }
    func_0079e6c0(uStack_28);
    iVar2 = (undefined4)(intptr_t)(func_0079e6c0(uStack_24));
    (**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
    if (iVar2 + 1 <= iVar3 * 5 + 4000) {
      iVar3 = (undefined4)(intptr_t)(func_0079e4ac(iVar2 + g_00467460));
      ConvertToString<int>(auStack_20, iVar3 + 1);
      ((UserData *)(p2))->setChapter((std::string *)(char *)auStack_20);
      func_0079e2bc(auStack_20);
      ConvertToString<int>(auStack_1c, iVar2 + 1);
      ((UserData *)(p2))->setMission((std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
    ((UserData *)(p2))->getMission();
  }
  else {
    func_0079e53c(((int)this),&uStack_24);
  }
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&uStack_28);
  return ((int)this);
}

void UserData::setFundBought()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UserData::setFundDiamondGet(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void UserData::setDicRewardMissionTimes(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0xd4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void UserData::setFloatJJShopParaAttrack(double p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0xe0) = p3;
  *(undefined4 *)(((int)this) + 0xe4) = p4;
  return;
}

void UserData::setFloatJJShopParaDefense(double p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0xe8) = p3;
  *(undefined4 *)(((int)this) + 0xec) = p4;
  return;
}

void UserData::setStarRewardUserData(MissionStarRewardUserData* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

int UserData::getVirNumber(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

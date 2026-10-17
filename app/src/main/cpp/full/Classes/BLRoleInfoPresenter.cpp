#include "BLRoleInfoPresenter.h"
#include "BackPackItemData.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLEquipPageView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLPageLayer.h"
#include "BLPlayerTuPoPresenter.h"
#include "BLRoleAttribute.h"
#include "BLRoleInfoView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipBaseData.h"
#include "EquipData.h"
#include "GiftData.h"
#include "PlayerData.h"
#include "RoleData.h"
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
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00671ef0;
extern "C" unsigned long UNK_00671f08;
extern "C" unsigned long UNK_00671f20;
extern "C" unsigned long UNK_00671f38;
extern "C" unsigned long UNK_00671f9c;
extern "C" unsigned long UNK_00671fc6;
extern "C" unsigned long UNK_00672018;
extern "C" unsigned long UNK_00672040;
extern "C" unsigned long UNK_00672082;
extern "C" unsigned long UNK_006721c2;
extern "C" unsigned long UNK_006721d0;
extern "C" unsigned long UNK_006721d4;
extern "C" unsigned long UNK_00672222;
extern "C" unsigned long UNK_0067225a;
extern "C" unsigned long UNK_006722c6;
extern "C" unsigned long UNK_006722e8;
extern "C" unsigned long UNK_00672364;
extern "C" unsigned long UNK_0067237a;
extern "C" unsigned long UNK_00672396;
extern "C" unsigned long UNK_006723be;
extern "C" unsigned long UNK_00672452;
extern "C" unsigned long UNK_0067245a;
extern "C" unsigned long UNK_00672470;
extern "C" unsigned long UNK_00672486;
extern "C" unsigned long UNK_0067249c;
extern "C" unsigned long UNK_006724b4;
extern "C" unsigned long UNK_006724b6;
extern "C" unsigned long UNK_006724f4;
extern "C" unsigned long UNK_00672760;
extern "C" unsigned long UNK_006728d0;
extern "C" unsigned long UNK_006729b2;
extern "C" unsigned long UNK_006729d4;
extern "C" unsigned long UNK_00672a14;
extern "C" unsigned long UNK_00672a2e;
extern "C" unsigned long UNK_00672a70;
extern "C" unsigned long UNK_00672a8a;
extern "C" unsigned long UNK_00672acc;
extern "C" unsigned long UNK_00672ae6;
extern "C" unsigned long UNK_00672b26;
extern "C" unsigned long UNK_00672b40;
extern "C" unsigned long UNK_00672b82;
extern "C" unsigned long UNK_00672b9c;
extern "C" unsigned long UNK_00672bdc;
extern "C" unsigned long UNK_00672bf6;
extern "C" unsigned long UNK_00672c24;
extern "C" unsigned long UNK_00672e98;
extern "C" unsigned long UNK_00672fa0;
extern "C" unsigned long UNK_00672fa2;
extern "C" unsigned long UNK_00672fc0;
extern "C" unsigned long UNK_0067309a;
extern "C" unsigned long UNK_006730c6;
extern "C" unsigned long UNK_00673156;
extern "C" unsigned long UNK_0067315a;
extern "C" unsigned long UNK_006731da;
extern "C" unsigned long UNK_00673214;
extern "C" unsigned long UNK_0067327a;
extern "C" unsigned long UNK_006733fe;
extern "C" unsigned long UNK_0067341c;
extern "C" unsigned long UNK_00673456;
extern "C" unsigned long UNK_00673474;
extern "C" unsigned long UNK_006734dc;
extern "C" unsigned long UNK_0067356a;
extern "C" unsigned long UNK_006735bc;
extern "C" unsigned long UNK_0067360e;
extern "C" unsigned long UNK_00673654;
extern "C" unsigned long UNK_00673c40;
extern "C" unsigned long UNK_00673d7a;
extern "C" unsigned long UNK_00673dac;
extern "C" unsigned long UNK_00673e60;
extern "C" unsigned long UNK_00673eb4;
extern "C" unsigned long UNK_00673ece;
extern "C" unsigned long UNK_00673f30;
extern "C" unsigned long UNK_00673f58;
extern "C" unsigned long UNK_00673f7c;
extern "C" unsigned long UNK_00673f9e;
extern "C" unsigned long UNK_00673fb2;
extern "C" unsigned long UNK_00674012;
extern "C" unsigned long UNK_0067401c;
extern "C" unsigned long UNK_00674148;
extern "C" unsigned long UNK_0067415e;
extern "C" unsigned long UNK_0067417c;
extern "C" unsigned long UNK_00674198;
extern "C" unsigned long UNK_006741b4;
extern "C" unsigned long UNK_006741d0;
extern "C" unsigned long UNK_006741e8;
extern "C" unsigned long UNK_00674232;
extern "C" unsigned long UNK_006742ba;
extern "C" unsigned long UNK_006743aa;
extern "C" unsigned long UNK_006743c8;
extern "C" unsigned long UNK_006743e4;
extern "C" unsigned long UNK_00674400;
extern "C" unsigned long UNK_0067441c;
extern "C" unsigned long UNK_00674486;
extern "C" unsigned long UNK_006744a8;
extern "C" unsigned long UNK_006744c4;
extern "C" unsigned long UNK_006744e0;
extern "C" unsigned long UNK_006744fc;
extern "C" unsigned long UNK_00674570;
extern "C" unsigned long UNK_0067458e;
extern "C" unsigned long UNK_006745aa;
extern "C" unsigned long UNK_006745c6;
extern "C" unsigned long UNK_006745e2;
extern "C" unsigned long UNK_00674780;
extern "C" unsigned long UNK_006747a0;
extern "C" unsigned long UNK_006747a6;
extern "C" unsigned long UNK_006747c6;
extern "C" unsigned long UNK_006747e2;
extern "C" unsigned long UNK_006747fe;
extern "C" unsigned long UNK_0067481a;
extern "C" unsigned long _UNK_00671ef4;
extern "C" unsigned long _UNK_00671f0c;
extern "C" unsigned long _UNK_00671f24;
extern "C" unsigned long _UNK_00671f3c;
extern "C" unsigned long _UNK_00672004;
extern "C" unsigned long _UNK_00672008;
extern "C" unsigned long _UNK_0067201c;
extern "C" unsigned long _UNK_00672044;
extern "C" unsigned long _UNK_00672068;
extern "C" unsigned long _UNK_00672138;
extern "C" unsigned long _UNK_0067213c;
extern "C" unsigned long _UNK_00672140;
extern "C" unsigned long _UNK_00672144;
extern "C" unsigned long _UNK_00672148;
extern "C" unsigned long _UNK_0067214c;
extern "C" unsigned long _UNK_00672150;
extern "C" unsigned long _UNK_00672154;
extern "C" unsigned long _UNK_00672284;
extern "C" unsigned long _UNK_00672288;
extern "C" unsigned long _UNK_0067228c;
extern "C" unsigned long _UNK_00672290;
extern "C" unsigned long _UNK_00672294;
extern "C" unsigned long _UNK_006722d8;
extern "C" unsigned long _UNK_006722ec;
extern "C" unsigned long _UNK_00672368;
extern "C" unsigned long _UNK_006723f0;
extern "C" unsigned long _UNK_006723f4;
extern "C" unsigned long _UNK_006723f8;
extern "C" unsigned long _UNK_006724c4;
extern "C" unsigned long _UNK_006724c8;
extern "C" unsigned long _UNK_006724cc;
extern "C" unsigned long _UNK_006724d0;
extern "C" unsigned long _UNK_006724d4;
extern "C" unsigned long _UNK_006724d8;
extern "C" unsigned long _UNK_006724dc;
extern "C" unsigned long _UNK_00672530;
extern "C" unsigned long _UNK_00672860;
extern "C" unsigned long _UNK_00672864;
extern "C" unsigned long _UNK_00672868;
extern "C" unsigned long _UNK_0067286c;
extern "C" unsigned long _UNK_00672870;
extern "C" unsigned long _UNK_00672874;
extern "C" unsigned long _UNK_00672878;
extern "C" unsigned long _UNK_0067287c;
extern "C" unsigned long _UNK_00672880;
extern "C" unsigned long _UNK_00672884;
extern "C" unsigned long _UNK_00672c90;
extern "C" unsigned long _UNK_00672c94;
extern "C" unsigned long _UNK_00672c98;
extern "C" unsigned long _UNK_00672c9c;
extern "C" unsigned long _UNK_00672ca0;
extern "C" unsigned long _UNK_00672ca4;
extern "C" unsigned long _UNK_00672ca8;
extern "C" unsigned long _UNK_00672cac;
extern "C" unsigned long _UNK_00672cb0;
extern "C" unsigned long _UNK_00672cb4;
extern "C" unsigned long _UNK_00672cb8;
extern "C" unsigned long _UNK_00672cbc;
extern "C" unsigned long _UNK_00672cc0;
extern "C" unsigned long _UNK_00672cc4;
extern "C" unsigned long _UNK_00672cc8;
extern "C" unsigned long _UNK_00672ccc;
extern "C" unsigned long _UNK_00672cd0;
extern "C" unsigned long _UNK_00672cd4;
extern "C" unsigned long _UNK_00672cd8;
extern "C" unsigned long _UNK_00672cdc;
extern "C" unsigned long _UNK_00672ce0;
extern "C" unsigned long _UNK_00672ce4;
extern "C" unsigned long _UNK_00672ce8;
extern "C" unsigned long _UNK_00672f54;
extern "C" unsigned long _UNK_00672f58;
extern "C" unsigned long _UNK_00673108;
extern "C" unsigned long _UNK_0067310c;
extern "C" unsigned long _UNK_00673110;
extern "C" unsigned long _UNK_00673114;
extern "C" unsigned long _UNK_00673118;
extern "C" unsigned long _UNK_00673510;
extern "C" unsigned long _UNK_00673514;
extern "C" unsigned long _UNK_00673518;
extern "C" unsigned long _UNK_0067351c;
extern "C" unsigned long _UNK_00673520;
extern "C" unsigned long _UNK_00673524;
extern "C" unsigned long _UNK_00673528;
extern "C" unsigned long _UNK_0067352c;
extern "C" unsigned long _UNK_00673530;
extern "C" unsigned long _UNK_00673534;
extern "C" unsigned long _UNK_00673538;
extern "C" unsigned long _UNK_0067353c;
extern "C" unsigned long _UNK_00673540;
extern "C" unsigned long _UNK_00673544;
extern "C" unsigned long _UNK_00673928;
extern "C" unsigned long _UNK_0067392c;
extern "C" unsigned long _UNK_00673930;
extern "C" unsigned long _UNK_00673934;
extern "C" unsigned long _UNK_00673938;
extern "C" unsigned long _UNK_0067393c;
extern "C" unsigned long _UNK_00673940;
extern "C" unsigned long _UNK_00673944;
extern "C" unsigned long _UNK_00673948;
extern "C" unsigned long _UNK_00673cc4;
extern "C" unsigned long _UNK_006740b8;
extern "C" unsigned long _UNK_006740bc;
extern "C" unsigned long _UNK_006740c0;
extern "C" unsigned long _UNK_006740c4;
extern "C" unsigned long _UNK_006740c8;
extern "C" unsigned long _UNK_006740cc;
extern "C" unsigned long _UNK_006740d0;
extern "C" unsigned long _UNK_006740d4;
extern "C" unsigned long _UNK_006740d8;
extern "C" unsigned long _UNK_006740dc;
extern "C" unsigned long _UNK_006740e0;
extern "C" unsigned long _UNK_006740e4;
extern "C" unsigned long _UNK_006740e8;
extern "C" unsigned long _UNK_006740ec;
extern "C" unsigned long _UNK_006740f0;
extern "C" unsigned long _UNK_006740f4;
extern "C" unsigned long _UNK_006740f8;
extern "C" unsigned long _UNK_006740fc;
extern "C" unsigned long _UNK_00674100;
extern "C" unsigned long _UNK_00674104;
extern "C" unsigned long _UNK_00674108;
extern "C" unsigned long _UNK_006742ec;
extern "C" unsigned long _UNK_006742f0;
extern "C" unsigned long _UNK_006742f4;
extern "C" unsigned long _UNK_006742f8;
extern "C" unsigned long _UNK_006742fc;
extern "C" unsigned long _UNK_00674300;
extern "C" unsigned long _UNK_00674304;
extern "C" unsigned long _UNK_00674308;
extern "C" unsigned long _UNK_0067430c;
extern "C" unsigned long _UNK_006746e4;
extern "C" unsigned long _UNK_006746e8;
extern "C" unsigned long _UNK_006746ec;
extern "C" unsigned long _UNK_006746f0;
extern "C" unsigned long _UNK_006746f4;
extern "C" unsigned long _UNK_006746f8;
extern "C" unsigned long _UNK_006746fc;
extern "C" unsigned long _UNK_00674700;
extern "C" unsigned long _UNK_00674704;
extern "C" unsigned long _UNK_00674708;
extern "C" unsigned long _UNK_0067470c;
extern "C" unsigned long _UNK_00674710;
extern "C" unsigned long _UNK_00674714;
extern "C" unsigned long _UNK_00674718;
extern "C" unsigned long _UNK_0067471c;
extern "C" unsigned long _UNK_00674720;
extern "C" unsigned long _UNK_00674784;
extern "C" unsigned long _UNK_00674940;
extern "C" unsigned long _UNK_00674944;
extern "C" unsigned long _UNK_00674948;
extern "C" unsigned long _UNK_0067494c;
extern "C" unsigned long _UNK_00674950;
extern "C" unsigned long _UNK_00674954;
extern "C" unsigned long _UNK_00674958;
extern "C" unsigned long _UNK_0067495c;
extern "C" unsigned long _UNK_00674960;
extern "C" unsigned long _UNK_00674964;
extern "C" unsigned long _UNK_00674968;
extern "C" unsigned long _UNK_0067496c;
extern "C" unsigned long g_00671ef0;
extern "C" unsigned long g_00671ef4;
extern "C" unsigned long g_00671f08;
extern "C" unsigned long g_00671f0c;
extern "C" unsigned long g_00671f20;
extern "C" unsigned long g_00671f24;
extern "C" unsigned long g_00671f38;
extern "C" unsigned long g_00671f3c;
extern "C" unsigned long g_00671f9c;
extern "C" unsigned long g_00671fc6;
extern "C" unsigned long g_00672004;
extern "C" unsigned long g_00672008;
extern "C" unsigned long g_00672018;
extern "C" unsigned long g_0067201c;
extern "C" unsigned long g_00672040;
extern "C" unsigned long g_00672044;
extern "C" unsigned long g_00672068;
extern "C" unsigned long g_00672082;
extern "C" unsigned long g_00672138;
extern "C" unsigned long g_0067213c;
extern "C" unsigned long g_00672140;
extern "C" unsigned long g_00672144;
extern "C" unsigned long g_00672148;
extern "C" unsigned long g_0067214c;
extern "C" unsigned long g_00672150;
extern "C" unsigned long g_00672154;
extern "C" unsigned long g_006721c2;
extern "C" unsigned long g_006721d0;
extern "C" unsigned long g_006721d4;
extern "C" unsigned long g_00672222;
extern "C" unsigned long g_0067225a;
extern "C" unsigned long g_00672284;
extern "C" unsigned long g_00672288;
extern "C" unsigned long g_0067228c;
extern "C" unsigned long g_00672290;
extern "C" unsigned long g_00672294;
extern "C" unsigned long g_006722c6;
extern "C" unsigned long g_006722d8;
extern "C" unsigned long g_006722e8;
extern "C" unsigned long g_006722ec;
extern "C" unsigned long g_00672364;
extern "C" unsigned long g_00672368;
extern "C" unsigned long g_0067237a;
extern "C" unsigned long g_00672396;
extern "C" unsigned long g_006723be;
extern "C" unsigned long g_006723f0;
extern "C" unsigned long g_006723f4;
extern "C" unsigned long g_006723f8;
extern "C" unsigned long g_00672452;
extern "C" unsigned long g_0067245a;
extern "C" unsigned long g_00672470;
extern "C" unsigned long g_00672486;
extern "C" unsigned long g_0067249c;
extern "C" unsigned long g_006724b4;
extern "C" unsigned long g_006724b6;
extern "C" unsigned long g_006724c4;
extern "C" unsigned long g_006724c8;
extern "C" unsigned long g_006724cc;
extern "C" unsigned long g_006724d0;
extern "C" unsigned long g_006724d4;
extern "C" unsigned long g_006724d8;
extern "C" unsigned long g_006724dc;
extern "C" unsigned long g_006724f4;
extern "C" unsigned long g_00672530;
extern "C" unsigned long g_00672760;
extern "C" unsigned long g_00672860;
extern "C" unsigned long g_00672864;
extern "C" unsigned long g_00672868;
extern "C" unsigned long g_0067286c;
extern "C" unsigned long g_00672870;
extern "C" unsigned long g_00672874;
extern "C" unsigned long g_00672878;
extern "C" unsigned long g_0067287c;
extern "C" unsigned long g_00672880;
extern "C" unsigned long g_00672884;
extern "C" unsigned long g_006728d0;
extern "C" unsigned long g_006729b2;
extern "C" unsigned long g_006729d4;
extern "C" unsigned long g_00672a14;
extern "C" unsigned long g_00672a2e;
extern "C" unsigned long g_00672a70;
extern "C" unsigned long g_00672a8a;
extern "C" unsigned long g_00672acc;
extern "C" unsigned long g_00672ae6;
extern "C" unsigned long g_00672b26;
extern "C" unsigned long g_00672b40;
extern "C" unsigned long g_00672b82;
extern "C" unsigned long g_00672b9c;
extern "C" unsigned long g_00672bdc;
extern "C" unsigned long g_00672bf6;
extern "C" unsigned long g_00672c24;
extern "C" unsigned long g_00672c90;
extern "C" unsigned long g_00672c94;
extern "C" unsigned long g_00672c98;
extern "C" unsigned long g_00672c9c;
extern "C" unsigned long g_00672ca0;
extern "C" unsigned long g_00672ca4;
extern "C" unsigned long g_00672ca8;
extern "C" unsigned long g_00672cac;
extern "C" unsigned long g_00672cb0;
extern "C" unsigned long g_00672cb4;
extern "C" unsigned long g_00672cb8;
extern "C" unsigned long g_00672cbc;
extern "C" unsigned long g_00672cc0;
extern "C" unsigned long g_00672cc4;
extern "C" unsigned long g_00672cc8;
extern "C" unsigned long g_00672ccc;
extern "C" unsigned long g_00672cd0;
extern "C" unsigned long g_00672cd4;
extern "C" unsigned long g_00672cd8;
extern "C" unsigned long g_00672cdc;
extern "C" unsigned long g_00672ce0;
extern "C" unsigned long g_00672ce4;
extern "C" unsigned long g_00672ce8;
extern "C" unsigned long g_00672e98;
extern "C" unsigned long g_00672f54;
extern "C" unsigned long g_00672f58;
extern "C" unsigned long g_00672fa0;
extern "C" unsigned long g_00672fa2;
extern "C" unsigned long g_00672fc0;
extern "C" unsigned long g_0067309a;
extern "C" unsigned long g_006730c6;
extern "C" unsigned long g_00673108;
extern "C" unsigned long g_0067310c;
extern "C" unsigned long g_00673110;
extern "C" unsigned long g_00673114;
extern "C" unsigned long g_00673118;
extern "C" unsigned long g_00673156;
extern "C" unsigned long g_0067315a;
extern "C" unsigned long g_006731da;
extern "C" unsigned long g_00673214;
extern "C" unsigned long g_0067327a;
extern "C" unsigned long g_006733fe;
extern "C" unsigned long g_0067341c;
extern "C" unsigned long g_00673456;
extern "C" unsigned long g_00673474;
extern "C" unsigned long g_006734dc;
extern "C" unsigned long g_00673510;
extern "C" unsigned long g_00673514;
extern "C" unsigned long g_00673518;
extern "C" unsigned long g_0067351c;
extern "C" unsigned long g_00673520;
extern "C" unsigned long g_00673524;
extern "C" unsigned long g_00673528;
extern "C" unsigned long g_0067352c;
extern "C" unsigned long g_00673530;
extern "C" unsigned long g_00673534;
extern "C" unsigned long g_00673538;
extern "C" unsigned long g_0067353c;
extern "C" unsigned long g_00673540;
extern "C" unsigned long g_00673544;
extern "C" unsigned long g_0067356a;
extern "C" unsigned long g_006735bc;
extern "C" unsigned long g_0067360e;
extern "C" unsigned long g_00673654;
extern "C" unsigned long g_00673928;
extern "C" unsigned long g_0067392c;
extern "C" unsigned long g_00673930;
extern "C" unsigned long g_00673934;
extern "C" unsigned long g_00673938;
extern "C" unsigned long g_0067393c;
extern "C" unsigned long g_00673940;
extern "C" unsigned long g_00673944;
extern "C" unsigned long g_00673948;
extern "C" unsigned long g_00673c40;
extern "C" unsigned long g_00673cc4;
extern "C" unsigned long g_00673d7a;
extern "C" unsigned long g_00673dac;
extern "C" unsigned long g_00673e60;
extern "C" unsigned long g_00673eb4;
extern "C" unsigned long g_00673ece;
extern "C" unsigned long g_00673f30;
extern "C" unsigned long g_00673f58;
extern "C" unsigned long g_00673f7c;
extern "C" unsigned long g_00673f9e;
extern "C" unsigned long g_00673fb2;
extern "C" unsigned long g_00674012;
extern "C" unsigned long g_0067401c;
extern "C" unsigned long g_006740b8;
extern "C" unsigned long g_006740bc;
extern "C" unsigned long g_006740c0;
extern "C" unsigned long g_006740c4;
extern "C" unsigned long g_006740c8;
extern "C" unsigned long g_006740cc;
extern "C" unsigned long g_006740d0;
extern "C" unsigned long g_006740d4;
extern "C" unsigned long g_006740d8;
extern "C" unsigned long g_006740dc;
extern "C" unsigned long g_006740e0;
extern "C" unsigned long g_006740e4;
extern "C" unsigned long g_006740e8;
extern "C" unsigned long g_006740ec;
extern "C" unsigned long g_006740f0;
extern "C" unsigned long g_006740f4;
extern "C" unsigned long g_006740f8;
extern "C" unsigned long g_006740fc;
extern "C" unsigned long g_00674100;
extern "C" unsigned long g_00674104;
extern "C" unsigned long g_00674108;
extern "C" unsigned long g_00674148;
extern "C" unsigned long g_0067415e;
extern "C" unsigned long g_0067417c;
extern "C" unsigned long g_00674198;
extern "C" unsigned long g_006741b4;
extern "C" unsigned long g_006741d0;
extern "C" unsigned long g_006741e8;
extern "C" unsigned long g_00674232;
extern "C" unsigned long g_006742ba;
extern "C" unsigned long g_006742ec;
extern "C" unsigned long g_006742f0;
extern "C" unsigned long g_006742f4;
extern "C" unsigned long g_006742f8;
extern "C" unsigned long g_006742fc;
extern "C" unsigned long g_00674300;
extern "C" unsigned long g_00674304;
extern "C" unsigned long g_00674308;
extern "C" unsigned long g_0067430c;
extern "C" unsigned long g_006743aa;
extern "C" unsigned long g_006743c8;
extern "C" unsigned long g_006743e4;
extern "C" unsigned long g_00674400;
extern "C" unsigned long g_0067441c;
extern "C" unsigned long g_00674486;
extern "C" unsigned long g_006744a8;
extern "C" unsigned long g_006744c4;
extern "C" unsigned long g_006744e0;
extern "C" unsigned long g_006744fc;
extern "C" unsigned long g_00674570;
extern "C" unsigned long g_0067458e;
extern "C" unsigned long g_006745aa;
extern "C" unsigned long g_006745c6;
extern "C" unsigned long g_006745e2;
extern "C" unsigned long g_006746e4;
extern "C" unsigned long g_006746e8;
extern "C" unsigned long g_006746ec;
extern "C" unsigned long g_006746f0;
extern "C" unsigned long g_006746f4;
extern "C" unsigned long g_006746f8;
extern "C" unsigned long g_006746fc;
extern "C" unsigned long g_00674700;
extern "C" unsigned long g_00674704;
extern "C" unsigned long g_00674708;
extern "C" unsigned long g_0067470c;
extern "C" unsigned long g_00674710;
extern "C" unsigned long g_00674714;
extern "C" unsigned long g_00674718;
extern "C" unsigned long g_0067471c;
extern "C" unsigned long g_00674720;
extern "C" unsigned long g_00674780;
extern "C" unsigned long g_00674784;
extern "C" unsigned long g_006747a0;
extern "C" unsigned long g_006747a6;
extern "C" unsigned long g_006747c6;
extern "C" unsigned long g_006747e2;
extern "C" unsigned long g_006747fe;
extern "C" unsigned long g_0067481a;
extern "C" unsigned long g_00674940;
extern "C" unsigned long g_00674944;
extern "C" unsigned long g_00674948;
extern "C" unsigned long g_0067494c;
extern "C" unsigned long g_00674950;
extern "C" unsigned long g_00674954;
extern "C" unsigned long g_00674958;
extern "C" unsigned long g_0067495c;
extern "C" unsigned long g_00674960;
extern "C" unsigned long g_00674964;
extern "C" unsigned long g_00674968;
extern "C" unsigned long g_0067496c;
int BLRoleInfoPresenter::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLRoleInfoPresenter::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

bool BLRoleInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRoleInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleInfoPresenter::tick(float p1)
{
  return;
}

void BLRoleInfoPresenter::setCharge(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

BLRoleInfoPresenter::~BLRoleInfoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00671f9c + g_00672004);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00671fc6 + g_00672008,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 10);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLRoleInfoPresenter::getCharge() const
{ return *(std::string *)(((int)this) + 0x28); }

void BLRoleInfoPresenter::onExp(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_00672068);
  return;
}


void BLRoleInfoPresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->PageLayerEquips();
  ((BLPageLayer *)this)->frontPage();
  return;
}

void BLRoleInfoPresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->PageLayerEquips();
  ((BLPageLayer *)this)->nextPage();
  return;
}




BLRoleInfoPresenter::BLRoleInfoPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_0067237a + g_006723f0);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x58;
  *(int *)((int)this + 4*(7)) = iVar4 + 0x98;
  iVar1 = g_006723f4;
  *(int *)((int)this + 4*(6)) = iVar4 + 0x88;
  *(int *)((int)this + 4*(10)) = *(int *)(&g_00672396 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006723be + g_006723f8,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRoleInfoPresenter::create(BLRoleInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRoleInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}



void BLRoleInfoPresenter::onGetGiftComplete(cocos2d::CCObject* p1)
{
  return;
}




void BLRoleInfoPresenter::initWithIndex(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  
  *(int *)((int)this + 4*(9)) = p1;
  piVar1 = (int *)((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->getPageControlEquips();
  pcVar6 = *(code **)(*piVar1 + 0x20c);
  pcVar7 = *(code **)(*(int *)this + 0x2c);
  uVar2 = (undefined4)(((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->PageLayerEquips());
  uVar2 = (undefined4)((*pcVar7)(((int)this),uVar2));
  (*pcVar6)(piVar1,uVar2);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (**(code **)(*piVar1 + 0x70))();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = (**(code **)(*piVar1 + 0x70))();
  pcVar6 = *(code **)(*(int *)this + 0x2c);
  uVar2 = (undefined4)(((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->PageLayerEquips());
  iVar5 = (*pcVar6)(((int)this),uVar2);
  if (iVar5 <= iVar4) {
    pcVar6 = *(code **)(*(int *)this + 0x2c);
    uVar2 = (undefined4)(((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->PageLayerEquips());
    iVar3 = (*pcVar6)(((int)this),uVar2);
    iVar3 = iVar3 + -1;
  }
  uVar2 = (undefined4)(((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->PageLayerEquips());
  ((BLPageLayer *)uVar2)->setCurrentPage(iVar3);
  ((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->PageLayerEquips();
  ((BLPageLayer *)this)->reloadData();
  piVar1 = (int *)((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->getPageControlEquips();
  (**(code **)(*piVar1 + 0x224))(piVar1,iVar3);
  ((BLRoleInfoView *)*(int *)((int)this + 4*(8)))->getPageControlEquips();
  ((BLPageControl *)this)->reload();
  BLRoleInfoPresenter::updateData(0);
  return;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLRoleInfoPresenter::onTuPo(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(p2);
  uStack_14 = (undefined4)(p4);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = (undefined4)(intptr_t)(g_00672138);
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
  piVar1 = (int *)0x0;
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  if (iVar3 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_0067213c)) + iVar4));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_00672140)) + iVar4));
    piVar1 = (int *)func_0079e55c(iVar3,iStack_20,uStack_1c,0);
  }
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
  (**(code **)(*(int *)(piVar1) + (0x18)))(&uStack_18,piVar1);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)(intptr_t)(((UIManager *)uVar2)->showUIById(g_00672144));
  if (iVar3 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_00672148)) + iVar4));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_0067214c)) + iVar4));
    iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,iStack_20,uStack_1c,0));
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
      iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_00672150)) + iVar4));
      uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00672082 + (intptr_t)(g_00672154)) + iVar4));
      iVar4 = (undefined4)(intptr_t)(func_0079e55c(*(int *)(iVar3 + 0x24),iStack_20,uStack_1c,0));
      if (iVar4 != 0) {
        uVar2 = (undefined4)(*(undefined4 *)(iVar4 + 0x108));
        func_0079e53c(&uStack_14,&uStack_18);
        ((BLPlayerTuPoPresenter *)uVar2)->initWithRoleID((std::string)(char*)uStack_14);
        func_0079e2bc(&uStack_14);
      }
    }
  }
  func_0079e2bc(&uStack_18);
  return;
}

void BLRoleInfoPresenter::onUse(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar4));
  if (iVar2 != 0) {
    uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006721d0 + (intptr_t)(g_00672288))));
    piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_006721d4 + (intptr_t)(g_0067228c))),0);
    if (piVar3 != 0) {
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
      piVar5 = (int *)((DataManager *)this)->shareDataManager();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x78)))());
      if (iVar2 == 3) {
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
      }
      piVar3 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getPageControlEquips();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x220)))());
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)uVar6));
      if ((iVar2 != 0) &&
         (piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_00672222 + (intptr_t)(g_00672290)))
                                          ,0), piVar3 != 0)) {
        iVar2 = 0;
        do {
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
          iVar7 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(iVar2));
          if (iVar7 != 0) {
            uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
            iVar7 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(iVar2));
            if ((iVar7 != 0) &&
               (iVar7 = func_0079e55c(iVar7,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0067225a + (intptr_t)(g_00672294))),0
                                       ), iVar7 != 0)) {
              piVar5 = (int *)((DataManager *)this)->shareDataManager();
              piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x28)))();
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x50)))());
              ((BackPackData *)(uVar4))->unEquipWithoutNotice((BackPackItemData*)iVar7);
            }
          }
          iVar2 = (undefined4)(intptr_t)(iVar2 + 1);
        } while (iVar2 != 6);
      }
    }
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_006721c2 + (intptr_t)(g_00672284)));
  return;
}

int BLRoleInfoPresenter::numOfPages(BLPageLayer* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  piVar3 = ((void)((DataManager *)(uVar2))->getPlayerDataByIndex(*(undefined4 *)(((int)this) + 0x24)),(int *)0);
  iVar7 = 0;
  if (piVar3 != 0) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x18)))(piVar3);
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))());
      iVar1 = (undefined4)(intptr_t)(iVar6 + g_006722d8);
      iVar6 = (undefined4)(intptr_t)(iVar6 + 4);
      iVar7 = iVar7 + (((int)uVar5 >> 0x1f) - ((int)*(uint *)(&g_006722c6 + iVar1) >> 0x1f)) +
                      (uint)(*(uint *)(&g_006722c6 + iVar1) <= uVar5);
    } while (iVar6 != 0x14);
  }
  return iVar7;
}

void BLRoleInfoPresenter::nodeOfPageAtIndex(BLPageLayer* p1, int p2)
{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  
  piVar1 = (int *)cocos2d::CCLayer::create();
  piVar2 = (int *)((BLEquipPageView *)this)->create();
  (**(code **)(*piVar1 + 200))(piVar1,piVar2);
  pcVar6 = *(code **)(*piVar2 + 0x5c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))(piVar2);
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(0x3f000000)))));
  (*pcVar6)(piVar2,uVar4);
  pcVar6 = *(code **)(*piVar2 + 100);
  iVar5 = (**(code **)(*piVar2 + 0x8c))(piVar2);
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar5 + 4)),(int)(0x3f000000)))));
  (*pcVar6)(piVar2,uVar4);
  piVar2 = (int *)((BLEquipPageView *)piVar2)->getPresenter();
  (**(code **)(*piVar2 + 0x44))(piVar2,p2);
  return;
}

void BLRoleInfoPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleInfoPresenter::updateRuneAttr(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  int iStack_3c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  iVar1 = (undefined4)(intptr_t)(g_00672530);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x78))());
  if (iVar3 != 3) {
    return;
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar4 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x60))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex((unsigned int)uVar5));
  if (iVar3 != 0) {
    uVar4 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672870)) + iVar1));
    piVar2 = (int *)func_0079e55c(iVar3,uVar4,
                                    *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672874)) + iVar1),0);
    if (piVar2 != 0) {
      uVar5 = (undefined4)((**(code **)(*piVar2 + 0x30))());
      piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getPageControlEquips();
      uVar6 = (undefined4)((**(code **)(*piVar2 + 0x220))());
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar5)->objectAtIndex((unsigned int)uVar6));
      if ((iVar3 != 0) &&
         (piVar2 = (int *)func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672878)) + iVar1),0),
         piVar2 != 0)) {
        iStack_3c = 0;
        iStack_20 = 0;
        iStack_24 = 0;
        iStack_28 = 0;
        iStack_2c = 0;
        iStack_30 = 0;
        do {
          uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(piVar2));
          iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(iStack_30));
          if (iVar3 != 0) {
            uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(piVar2));
            iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(iStack_30));
            if ((iVar3 != 0) &&
               (piVar7 = (int *)func_0079e55c(iVar3,uVar4,
                                                *(undefined4 *)
                                                 ((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_0067287c)) + iVar1),0),
               piVar7 != 0)) {
              piVar8 = (int *)((EquipData *)this)->create();
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x20))(piVar7));
              ((EquipData *)piVar8)->initWithID(uVar5);
              uVar5 = (undefined4)((**(code **)(*piVar8 + 0xc0))(piVar8));
              uVar6 = (undefined4)((**(code **)(*piVar7 + 0x30))(piVar7));
              ((EquipBaseData *)uVar5)->updateAttr(uVar6);
              piVar7 = (int *)(**(code **)(*piVar8 + 0xc0))(piVar8);
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x88))());
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(6));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672880)) + iVar1),0),
                 iVar3 != 0)) {
                iStack_2c = iStack_2c + *(int *)(iVar3 + 0x14);
              }
              piVar7 = (int *)(**(code **)(*piVar8 + 0xc0))(piVar8);
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x88))());
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(5));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672880)) + iVar1),0),
                 iVar3 != 0)) {
                iStack_28 = iStack_28 + *(int *)(iVar3 + 0x14);
              }
              piVar7 = (int *)(**(code **)(*piVar8 + 0xc0))(piVar8);
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x88))());
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(4));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672880)) + iVar1),0),
                 iVar3 != 0)) {
                iStack_24 = iStack_24 + *(int *)(iVar3 + 0x14);
              }
              piVar7 = (int *)(**(code **)(*piVar8 + 0xc0))(piVar8);
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x88))());
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(3));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672880)) + iVar1),0),
                 iVar3 != 0)) {
                iStack_20 = iStack_20 + *(int *)(iVar3 + 0x14);
              }
              piVar7 = (int *)(**(code **)(*piVar8 + 0xc0))(piVar8);
              uVar5 = (undefined4)((**(code **)(*piVar7 + 0x88))());
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(7));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar4,
                                          *(undefined4 *)((unsigned char *)((char *)&g_006724f4 + (intptr_t)(g_00672880)) + iVar1),0),
                 iVar3 != 0)) {
                iStack_3c = iStack_3c + *(int *)(iVar3 + 0x14);
              }
            }
          }
          iStack_30 = iStack_30 + 1;
        } while (iStack_30 != 6);
        goto code_r0x00672732;
      }
    }
  }
  iStack_3c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
code_r0x00672732:
  piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getLabRuneLife();
  pcVar10 = *(code **)(*piVar2 + 0x234);
  uVar11 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iStack_2c)))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672860))|(((long long)(unsigned)(g_00672864))<<32))))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672868))|(((long long)(unsigned)(g_0067286c))<<32))))));
  uVar4 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
  puVar9 = (unsigned char *)((char *)&g_00672760 + (intptr_t)(g_00672884));
  cocos2d::CCString::createWithFormat((char const*)puVar9, uVar4, (int)uVar11, uVar4);
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar2,uVar4);
  piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getLabRuneDefense();
  pcVar10 = *(code **)(*piVar2 + 0x234);
  uVar11 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iStack_28)))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672860))|(((long long)(unsigned)(g_00672864))<<32))))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672868))|(((long long)(unsigned)(g_0067286c))<<32))))));
  uVar4 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCString::createWithFormat((char const*)puVar9, uVar4, (int)uVar11, uVar4);
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar2,uVar4);
  piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getLabRuneAttack();
  pcVar10 = *(code **)(*piVar2 + 0x234);
  uVar11 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iStack_24)))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672860))|(((long long)(unsigned)(g_00672864))<<32))))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672868))|(((long long)(unsigned)(g_0067286c))<<32))))));
  uVar4 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCString::createWithFormat((char const*)puVar9, uVar4, (int)uVar11, uVar4);
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar2,uVar4);
  piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getLabRuneCrit();
  pcVar10 = *(code **)(*piVar2 + 0x234);
  uVar11 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iStack_20)))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672860))|(((long long)(unsigned)(g_00672864))<<32))))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672868))|(((long long)(unsigned)(g_0067286c))<<32))))));
  uVar4 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCString::createWithFormat((char const*)puVar9, uVar4, (int)uVar11, uVar4);
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar2,uVar4);
  piVar2 = (int *)((BLRoleInfoView *)*(undefined4 *)(((int)this) + 0x20))->getLabRuneCritDamage();
  pcVar10 = *(code **)(*piVar2 + 0x234);
  uVar11 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iStack_3c)))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672860))|(((long long)(unsigned)(g_00672864))<<32))))));
  uVar11 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_00672868))|(((long long)(unsigned)(g_0067286c))<<32))))));
  uVar4 = (undefined4)((undefined4)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCString::createWithFormat((char const*)puVar9, uVar4, (int)uVar11, uVar4);
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar2,uVar4);
  return;
}

undefined4 BLRoleInfoPresenter::initWithView(BLRoleInfoView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRoleInfoPresenter::updateEquipPackNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleInfoPresenter::updateData(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  code *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  lVar11 = (undefined4)(intptr_t)(0 /* ctorZero */);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
  if (iVar3 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00673156 + (intptr_t)(g_00673520))));
    piVar1 = (int *)func_0079e55c(iVar3,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0067315a + (intptr_t)(g_00673524))),0);
    if (piVar1 != 0) {
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLV();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))());
      ConvertToString<int>(auStack_1c, uVar6, 0);
      (*pcVar10)(piVar4,auStack_1c[0]);
      func_0079e2bc(auStack_1c);
      piVar4 = (int *)((DataCacheManager *)this)->shareManager();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
      piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      uVar7 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))());
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey(uVar7));
      piVar4 = (int *)0x0;
      if (iVar3 != 0) {
        piVar4 = (int *)func_0079e55c(iVar3,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_006731da + (intptr_t)(g_00673528))),0
                                       );
      }
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabExp();
      pcVar10 = *(code **)(*piVar5 + 0x234);
      piVar8 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x28)))());
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))(piVar4));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00673214 + (intptr_t)(g_0067352c)), uVar2, uVar6);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar10)(piVar5,uVar2);
      uVar2 = (undefined4)(((BLLanguage *)this)->share());
      piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      (**(code **)(*(int *)(piVar4) + (0x20)))(&uStack_20,piVar4);
      func_0079e45c(auStack_1c,uStack_20,auStack_24);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_54);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_20);
      piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x68)))());
      if (iVar3 != 0) {
        func_0079e69c(&uStack_54,(unsigned char *)((char *)&g_0067327a + (intptr_t)(g_00673530)));
        piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
        ConvertToString<int>(auStack_50, uVar2, 0);
        func_0079e874(&uStack_54,auStack_50);
        func_0079e2bc(auStack_50);
      }
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRoleName();
      (**(code **)(*(int *)(piVar4) + (0x234)))(piVar4,uStack_54);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprRoleImage();
      pcVar10 = *(code **)(*piVar4 + 0x20c);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      (**(code **)(*(int *)(piVar5) + (0x28)))(&uStack_4c,piVar5);
      func_0079e45c(auStack_48,uStack_4c,auStack_1c);
      piVar5 = (int *)0 /* ctorZero */;
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x214)))());
      (*pcVar10)(piVar4,uVar2);
      func_0079e2bc(auStack_48);
      func_0079e2bc(&uStack_4c);
      (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1);
      ((BLRoleAttribute *)this)->initEquipsAttr();
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLife();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = ((void)(((BLRoleAttribute *)(uVar2))->getRoleAttrValueByType(2)),(undefined4)0);
      ConvertToString<int>(&uStack_44, uVar2, 0);
      (*pcVar10)(piVar4,uStack_44);
      func_0079e2bc(&uStack_44);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttack();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = ((void)(((BLRoleAttribute *)(uVar2))->getRoleAttrValueByType(0)),(undefined4)0);
      ConvertToString<int>(&uStack_40, uVar2, 0);
      (*pcVar10)(piVar4,uStack_40);
      func_0079e2bc(&uStack_40);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefense();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = ((void)(((BLRoleAttribute *)(uVar2))->getRoleAttrValueByType(1)),(undefined4)0);
      ConvertToString<int>(&uStack_3c, uVar2, 0);
      (*pcVar10)(piVar4,uStack_3c);
      func_0079e2bc(&uStack_3c);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCrit();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      ((BLRoleAttribute *)(uVar2))->getRoleAttrValueByType(3);
      uVar12 = (undefined4)(intptr_t)(func_0079e734());
      uVar12 = func_0079e63c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673510,
                               g_00673514);
      uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673518,
                               g_0067351c);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006733fe + (intptr_t)(g_00673534)), uVar2, (int)uVar12, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCrit();
      (**(code **)(*(int *)(piVar4) + (0x234)))(piVar4,(unsigned char *)((char *)&g_0067341c + (intptr_t)(g_00673538)));
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamage();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      ((BLRoleAttribute *)(uVar2))->getRoleAttrValueByType(7);
      uVar12 = (undefined4)(intptr_t)(func_0079e734());
      uVar12 = func_0079e63c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673510,
                               g_00673514);
      uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673518,
                               g_0067351c);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00673456 + (intptr_t)(g_0067353c)), uVar2, (int)uVar12, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamage();
      (**(code **)(*(int *)(piVar4) + (0x234)))(piVar4,(unsigned char *)((char *)&g_00673474 + (intptr_t)(g_00673540)));
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabFight();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x58)))(piVar1));
      ConvertToString<int>(&uStack_38, uVar2, 0);
      (*pcVar10)(piVar4,uStack_38);
      func_0079e2bc(&uStack_38);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLifeAdd();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = (undefined4)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(2));
      ConvertToString<int>(auStack_34, uVar2, 0);
      func_00442068(&uStack_30,(unsigned char *)((char *)&g_006734dc + (intptr_t)(g_00673544)),auStack_34);
      (*pcVar10)(piVar4,uStack_30);
      func_0079e2bc(&uStack_30);
      func_0079e2bc(auStack_34);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttackAdd();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = (undefined4)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(0));
      ConvertToString<int>(auStack_2c, uVar2, 0);
      func_00442068(&uStack_28,(unsigned char *)((char *)&g_0067356a + (intptr_t)(g_00673938)),auStack_2c);
      (*pcVar10)(piVar4,uStack_28);
      func_0079e2bc(&uStack_28);
      func_0079e2bc(auStack_2c);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefenseAdd();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      uVar2 = (undefined4)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(1));
      ConvertToString<int>(auStack_24, uVar2, 0);
      func_00442068(&uStack_20,(unsigned char *)((char *)&g_006735bc + (intptr_t)(g_0067393c)),auStack_24);
      (*pcVar10)(piVar4,uStack_20);
      func_0079e2bc(&uStack_20);
      func_0079e2bc(auStack_24);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritAdd();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      ((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(3);
      uVar12 = (undefined4)(intptr_t)(func_0079e734());
      uVar12 = func_0079e63c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673928,
                               g_0067392c);
      uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673930,
                               g_00673934);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0067360e + (intptr_t)(g_00673940)), uVar2, (int)uVar12, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamageAdd();
      pcVar10 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      ((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(7);
      uVar12 = (undefined4)(intptr_t)(func_0079e734());
      uVar12 = func_0079e63c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673928,
                               g_0067392c);
      uVar12 = func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_00673930,
                               g_00673934);
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00673654 + (intptr_t)(g_00673944)), uVar2, (int)uVar12, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLifeAdd();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      iVar3 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(2));
      (*pcVar10)(piVar4,iVar3 != 0);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttackAdd();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      iVar3 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(0));
      (*pcVar10)(piVar4,iVar3 != 0);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefenseAdd();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      iVar3 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(1));
      (*pcVar10)(piVar4,iVar3 != 0);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritAdd();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      iVar3 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(3));
      (*pcVar10)(piVar4,iVar3 != 0);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamageAdd();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
      iVar3 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getEquipAndRuneAttrValueByType(7));
      (*pcVar10)(piVar4,iVar3 != 0);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttackAdd();
      pcVar10 = *(code **)(*piVar4 + 0x5c);
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttack();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))());
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAttack();
      puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
      uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar9));
      uVar2 = (undefined4)(func_0079e59c(uVar2,g_00673948));
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritAdd();
      pcVar10 = *(code **)(*piVar4 + 0x5c);
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCrit();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))());
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCrit();
      puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
      uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar9));
      uVar2 = (undefined4)(func_0079e59c(uVar2,g_00673948));
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamageAdd();
      pcVar10 = *(code **)(*piVar4 + 0x5c);
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamage();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))());
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabCritDamage();
      puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
      uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar9));
      uVar2 = (undefined4)(func_0079e59c(uVar2,g_00673948));
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefenseAdd();
      pcVar10 = *(code **)(*piVar4 + 0x5c);
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefense();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))());
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDefense();
      puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
      uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar9));
      uVar2 = (undefined4)(func_0079e59c(uVar2,g_00673948));
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLifeAdd();
      pcVar10 = *(code **)(*piVar4 + 0x5c);
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLife();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))());
      piVar5 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabLife();
      puVar9 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
      uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar9));
      uVar2 = (undefined4)(func_0079e59c(uVar2,g_00673948));
      (*pcVar10)(piVar4,uVar2);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprStar1();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x40)))());
      (*pcVar10)(piVar4,(uint)((iVar3 >> 0x1f) - iVar3) >> 0x1f);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprStar2();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x40)))());
      (*pcVar10)(piVar4,1 < iVar3);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprStar3();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x40)))());
      (*pcVar10)(piVar4,2 < iVar3);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprStar4();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x40)))());
      (*pcVar10)(piVar4,3 < iVar3);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprStar5();
      pcVar10 = *(code **)(*piVar4 + 0x90);
      piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x40)))());
      (*pcVar10)(piVar4,4 < iVar3);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprRoleImage();
      (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3fc00000);
      piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprRoleImage();
      pcVar10 = *(code **)(*piVar4 + 0x20c);
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
      (**(code **)(*(int *)(piVar1) + (0x30)))(auStack_1c,piVar1);
      piVar1 = (int *)0 /* ctorZero */;
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
      (*pcVar10)(piVar4,uVar2);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_54);
    }
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAlert();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprAlertBG();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabGift();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnGift();
    pcVar10 = *(code **)(*piVar1 + 0x90);
  }
  else {
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAlert();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprAlertBG();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabGift();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnGift();
    pcVar10 = *(code **)(*piVar1 + 0x90);
  }
  (*pcVar10)(piVar1,iVar3 == 0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
  if (iVar3 == 3) {
    piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabAlert();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRunAttackTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneDefenseTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRunLifeTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneCritTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneCritDamageTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneAttack();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneDefense();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneLife();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneCritDamage();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneTitle();
  pcVar10 = *(code **)(*piVar1 + 0x90);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
  (*pcVar10)(piVar1,iVar3 == 3);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneAttack();
  pcVar10 = *(code **)(*piVar1 + 100);
  piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRunAttackTitle();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  (*pcVar10)(piVar1,uVar2);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneDefense();
  pcVar10 = *(code **)(*piVar1 + 100);
  piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneDefenseTitle();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  (*pcVar10)(piVar1,uVar2);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneLife();
  pcVar10 = *(code **)(*piVar1 + 100);
  piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRunLifeTitle();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  (*pcVar10)(piVar1,uVar2);
  piVar1 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneCritDamage();
  pcVar10 = *(code **)(*piVar1 + 100);
  piVar4 = (int *)((BLRoleInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRuneCritDamageTitle();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  (*pcVar10)(piVar1,uVar2);
  ((BLRoleInfoPresenter *)(((int)this)))->updateRuneAttr(0);
  lVar13 = (undefined4)(intptr_t)(0 /* ctorZero */);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00673c40 + (intptr_t)(g_00673cc4)), (int)((ulonglong)lVar11 >> 0x20),(int)(lVar13 - lVar11),
             (int)((ulonglong)(lVar13 - lVar11) >> 0x20));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar2,&uStack_20);
  ((BLDebug *)this)->LogTime((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLRoleInfoPresenter::updataExp(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleInfoPresenter::pageChange(BLPageLayer* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleInfoPresenter::onGift(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

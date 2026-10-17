#include "BLChestItemInfoPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLChestItemInfoView.h"
#include "BLDebrisItemDataInfoDownPresenter.h"
#include "BLDebrisItemDataInfoDownView.h"
#include "BLItemDataInfoDownPresenter.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoUpPresenter.h"
#include "BLItemDataInfoUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownPresenter.h"
#include "BLOtherItemDataInfoDownView.h"
#include "BLRichText.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipBaseData.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
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
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00514fce(...);
extern "C" long long func_00514fd4(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00513450;
extern "C" unsigned long UNK_0051346a;
extern "C" unsigned long UNK_005134b0;
extern "C" unsigned long UNK_005134d8;
extern "C" unsigned long UNK_005134fe;
extern "C" unsigned long UNK_00513532;
extern "C" unsigned long UNK_00513614;
extern "C" unsigned long UNK_0051364c;
extern "C" unsigned long UNK_0051366e;
extern "C" unsigned long UNK_00513698;
extern "C" unsigned long UNK_005136d4;
extern "C" unsigned long UNK_00513700;
extern "C" unsigned long UNK_005138ae;
extern "C" unsigned long UNK_005138af;
extern "C" unsigned long UNK_005138b0;
extern "C" unsigned long UNK_005138c8;
extern "C" unsigned long UNK_00513a18;
extern "C" unsigned long UNK_00513ace;
extern "C" unsigned long UNK_00513b80;
extern "C" unsigned long UNK_00513b9c;
extern "C" unsigned long UNK_00513b9e;
extern "C" unsigned long UNK_00513c5c;
extern "C" unsigned long UNK_00513e82;
extern "C" unsigned long UNK_00513ee6;
extern "C" unsigned long UNK_00513f08;
extern "C" unsigned long UNK_00513f84;
extern "C" unsigned long UNK_00513fa8;
extern "C" unsigned long UNK_00514036;
extern "C" unsigned long UNK_005140e2;
extern "C" unsigned long UNK_00514114;
extern "C" unsigned long UNK_005141ba;
extern "C" unsigned long UNK_0051420c;
extern "C" unsigned long UNK_0051423c;
extern "C" unsigned long UNK_005142d4;
extern "C" unsigned long UNK_005142e2;
extern "C" unsigned long UNK_0051430a;
extern "C" unsigned long UNK_0051433a;
extern "C" unsigned long UNK_005143d2;
extern "C" unsigned long UNK_005143e0;
extern "C" unsigned long UNK_00514426;
extern "C" unsigned long UNK_005144be;
extern "C" unsigned long UNK_0051463f;
extern "C" unsigned long UNK_0051469a;
extern "C" unsigned long UNK_005146b6;
extern "C" unsigned long UNK_005146b8;
extern "C" unsigned long UNK_00514776;
extern "C" unsigned long UNK_0051484c;
extern "C" unsigned long UNK_0051487e;
extern "C" unsigned long UNK_00514924;
extern "C" unsigned long UNK_0051492e;
extern "C" unsigned long UNK_0051495e;
extern "C" unsigned long UNK_005149f4;
extern "C" unsigned long UNK_00514a02;
extern "C" unsigned long UNK_00514a52;
extern "C" unsigned long UNK_00514a82;
extern "C" unsigned long UNK_00514b16;
extern "C" unsigned long UNK_00514b26;
extern "C" unsigned long UNK_00514dae;
extern "C" unsigned long UNK_00514e12;
extern "C" unsigned long UNK_00514e34;
extern "C" unsigned long UNK_00514eac;
extern "C" unsigned long UNK_00514ed0;
extern "C" unsigned long UNK_00514f5a;
extern "C" unsigned long UNK_00514f86;
extern "C" unsigned long UNK_00515026;
extern "C" unsigned long UNK_00515124;
extern "C" unsigned long UNK_00515140;
extern "C" unsigned long UNK_00515142;
extern "C" unsigned long UNK_00515200;
extern "C" unsigned long UNK_005152bc;
extern "C" unsigned long UNK_00515320;
extern "C" unsigned long UNK_00515342;
extern "C" unsigned long UNK_005153be;
extern "C" unsigned long UNK_005153e2;
extern "C" unsigned long UNK_0051546e;
extern "C" unsigned long UNK_00515546;
extern "C" unsigned long UNK_00515578;
extern "C" unsigned long UNK_0051561e;
extern "C" unsigned long UNK_00515844;
extern "C" unsigned long UNK_00515874;
extern "C" unsigned long UNK_0051590a;
extern "C" unsigned long UNK_00515918;
extern "C" unsigned long UNK_00515940;
extern "C" unsigned long UNK_00515970;
extern "C" unsigned long UNK_00515a06;
extern "C" unsigned long UNK_00515a14;
extern "C" unsigned long UNK_00515a5c;
extern "C" unsigned long _UNK_0051349c;
extern "C" unsigned long _UNK_005134a0;
extern "C" unsigned long _UNK_005134b4;
extern "C" unsigned long _UNK_005134dc;
extern "C" unsigned long _UNK_0051355c;
extern "C" unsigned long _UNK_00513560;
extern "C" unsigned long _UNK_005136b8;
extern "C" unsigned long _UNK_005136bc;
extern "C" unsigned long _UNK_005136c0;
extern "C" unsigned long _UNK_005136c4;
extern "C" unsigned long _UNK_005139f4;
extern "C" unsigned long _UNK_005139f8;
extern "C" unsigned long _UNK_005139fc;
extern "C" unsigned long _UNK_00513a00;
extern "C" unsigned long _UNK_00513a04;
extern "C" unsigned long _UNK_00513a08;
extern "C" unsigned long _UNK_00513ab4;
extern "C" unsigned long _UNK_00513ab8;
extern "C" unsigned long _UNK_00513abc;
extern "C" unsigned long _UNK_00513dcc;
extern "C" unsigned long _UNK_00513dd0;
extern "C" unsigned long _UNK_00513dd4;
extern "C" unsigned long _UNK_00513dd8;
extern "C" unsigned long _UNK_00513ddc;
extern "C" unsigned long _UNK_00513de0;
extern "C" unsigned long _UNK_00513de4;
extern "C" unsigned long _UNK_00513de8;
extern "C" unsigned long _UNK_00513dec;
extern "C" unsigned long _UNK_00513df0;
extern "C" unsigned long _UNK_00513df4;
extern "C" unsigned long _UNK_00513df8;
extern "C" unsigned long _UNK_00513dfc;
extern "C" unsigned long _UNK_00514190;
extern "C" unsigned long _UNK_00514194;
extern "C" unsigned long _UNK_00514198;
extern "C" unsigned long _UNK_0051419c;
extern "C" unsigned long _UNK_005141a0;
extern "C" unsigned long _UNK_005141a4;
extern "C" unsigned long _UNK_005141a8;
extern "C" unsigned long _UNK_005141ac;
extern "C" unsigned long _UNK_005141b0;
extern "C" unsigned long _UNK_005141b4;
extern "C" unsigned long _UNK_005141b8;
extern "C" unsigned long _UNK_005141bc;
extern "C" unsigned long _UNK_005141c0;
extern "C" unsigned long _UNK_005141c4;
extern "C" unsigned long _UNK_005141c8;
extern "C" unsigned long _UNK_005141cc;
extern "C" unsigned long _UNK_005141d0;
extern "C" unsigned long _UNK_005141d4;
extern "C" unsigned long _UNK_00514484;
extern "C" unsigned long _UNK_00514488;
extern "C" unsigned long _UNK_0051448c;
extern "C" unsigned long _UNK_00514490;
extern "C" unsigned long _UNK_00514494;
extern "C" unsigned long _UNK_00514498;
extern "C" unsigned long _UNK_0051449c;
extern "C" unsigned long _UNK_005144a0;
extern "C" unsigned long _UNK_005144a4;
extern "C" unsigned long _UNK_005144a8;
extern "C" unsigned long _UNK_00514770;
extern "C" unsigned long _UNK_00514774;
extern "C" unsigned long _UNK_00514778;
extern "C" unsigned long _UNK_0051477c;
extern "C" unsigned long _UNK_00514780;
extern "C" unsigned long _UNK_00514784;
extern "C" unsigned long _UNK_00514788;
extern "C" unsigned long _UNK_0051478c;
extern "C" unsigned long _UNK_00514790;
extern "C" unsigned long _UNK_00514794;
extern "C" unsigned long _UNK_00514798;
extern "C" unsigned long _UNK_005149f4;
extern "C" unsigned long _UNK_005149f8;
extern "C" unsigned long _UNK_005149fc;
extern "C" unsigned long _UNK_00514a00;
extern "C" unsigned long _UNK_00514a04;
extern "C" unsigned long _UNK_00514a08;
extern "C" unsigned long _UNK_00514a0c;
extern "C" unsigned long _UNK_00514a10;
extern "C" unsigned long _UNK_00514a14;
extern "C" unsigned long _UNK_00514a18;
extern "C" unsigned long _UNK_00514d14;
extern "C" unsigned long _UNK_00514d18;
extern "C" unsigned long _UNK_00514d1c;
extern "C" unsigned long _UNK_00514d20;
extern "C" unsigned long _UNK_00514d24;
extern "C" unsigned long _UNK_00514d28;
extern "C" unsigned long _UNK_00514fd8;
extern "C" unsigned long _UNK_00514fdc;
extern "C" unsigned long _UNK_00514fe0;
extern "C" unsigned long _UNK_00514fe4;
extern "C" unsigned long _UNK_00514fe8;
extern "C" unsigned long _UNK_00514fec;
extern "C" unsigned long _UNK_00514ff0;
extern "C" unsigned long _UNK_00514ff4;
extern "C" unsigned long _UNK_00514ff8;
extern "C" unsigned long _UNK_00514ffc;
extern "C" unsigned long _UNK_00515000;
extern "C" unsigned long _UNK_00515004;
extern "C" unsigned long _UNK_00515008;
extern "C" unsigned long _UNK_0051500c;
extern "C" unsigned long _UNK_00515010;
extern "C" unsigned long _UNK_00515208;
extern "C" unsigned long _UNK_0051520c;
extern "C" unsigned long _UNK_00515210;
extern "C" unsigned long _UNK_00515214;
extern "C" unsigned long _UNK_00515218;
extern "C" unsigned long _UNK_0051521c;
extern "C" unsigned long _UNK_00515220;
extern "C" unsigned long _UNK_00515224;
extern "C" unsigned long _UNK_00515228;
extern "C" unsigned long _UNK_0051522c;
extern "C" unsigned long _UNK_00515458;
extern "C" unsigned long _UNK_0051545c;
extern "C" unsigned long _UNK_00515460;
extern "C" unsigned long _UNK_00515464;
extern "C" unsigned long _UNK_00515468;
extern "C" unsigned long _UNK_0051546c;
extern "C" unsigned long _UNK_00515470;
extern "C" unsigned long _UNK_00515474;
extern "C" unsigned long _UNK_00515478;
extern "C" unsigned long _UNK_0051547c;
extern "C" unsigned long _UNK_00515480;
extern "C" unsigned long _UNK_00515484;
extern "C" unsigned long _UNK_00515488;
extern "C" unsigned long _UNK_0051548c;
extern "C" unsigned long _UNK_00515490;
extern "C" unsigned long _UNK_005157ec;
extern "C" unsigned long _UNK_005157f0;
extern "C" unsigned long _UNK_005157f4;
extern "C" unsigned long _UNK_005157f8;
extern "C" unsigned long _UNK_005157fc;
extern "C" unsigned long _UNK_00515800;
extern "C" unsigned long _UNK_00515804;
extern "C" unsigned long _UNK_00515808;
extern "C" unsigned long _UNK_0051580c;
extern "C" unsigned long _UNK_00515ab8;
extern "C" unsigned long _UNK_00515abc;
extern "C" unsigned long _UNK_00515ac0;
extern "C" unsigned long _UNK_00515ac4;
extern "C" unsigned long _UNK_00515ac8;
extern "C" unsigned long _UNK_00515acc;
extern "C" unsigned long _UNK_00515ad0;
extern "C" unsigned long _UNK_00515ad4;
extern "C" unsigned long _UNK_00515ad8;
extern "C" unsigned long _UNK_00515adc;
extern "C" unsigned long g_00513450;
extern "C" unsigned long g_0051346a;
extern "C" unsigned long g_0051349c;
extern "C" unsigned long g_005134a0;
extern "C" unsigned long g_005134b0;
extern "C" unsigned long g_005134b4;
extern "C" unsigned long g_005134d8;
extern "C" unsigned long g_005134dc;
extern "C" unsigned long g_005134fe;
extern "C" unsigned long g_00513532;
extern "C" unsigned long g_0051355c;
extern "C" unsigned long g_00513560;
extern "C" unsigned long g_00513614;
extern "C" unsigned long g_0051364c;
extern "C" unsigned long g_0051366e;
extern "C" unsigned long g_00513698;
extern "C" unsigned long g_005136b8;
extern "C" unsigned long g_005136bc;
extern "C" unsigned long g_005136c0;
extern "C" unsigned long g_005136c4;
extern "C" unsigned long g_005136d4;
extern "C" unsigned long g_00513700;
extern "C" unsigned long g_005138ae;
extern "C" unsigned long g_005138af;
extern "C" unsigned long g_005138b0;
extern "C" unsigned long g_005138c8;
extern "C" unsigned long g_005139f4;
extern "C" unsigned long g_005139f8;
extern "C" unsigned long g_005139fc;
extern "C" unsigned long g_00513a00;
extern "C" unsigned long g_00513a04;
extern "C" unsigned long g_00513a08;
extern "C" unsigned long g_00513a18;
extern "C" unsigned long g_00513ab4;
extern "C" unsigned long g_00513ab8;
extern "C" unsigned long g_00513abc;
extern "C" unsigned long g_00513ace;
extern "C" unsigned long g_00513b80;
extern "C" unsigned long g_00513b9c;
extern "C" unsigned long g_00513b9e;
extern "C" unsigned long g_00513c5c;
extern "C" unsigned long g_00513dcc;
extern "C" unsigned long g_00513dd0;
extern "C" unsigned long g_00513dd4;
extern "C" unsigned long g_00513dd8;
extern "C" unsigned long g_00513ddc;
extern "C" unsigned long g_00513de0;
extern "C" unsigned long g_00513de4;
extern "C" unsigned long g_00513de8;
extern "C" unsigned long g_00513dec;
extern "C" unsigned long g_00513df0;
extern "C" unsigned long g_00513df4;
extern "C" unsigned long g_00513df8;
extern "C" unsigned long g_00513dfc;
extern "C" unsigned long g_00513e82;
extern "C" unsigned long g_00513ee6;
extern "C" unsigned long g_00513f08;
extern "C" unsigned long g_00513f84;
extern "C" unsigned long g_00513fa8;
extern "C" unsigned long g_00514036;
extern "C" unsigned long g_005140e2;
extern "C" unsigned long g_00514114;
extern "C" unsigned long g_00514190;
extern "C" unsigned long g_00514194;
extern "C" unsigned long g_00514198;
extern "C" unsigned long g_0051419c;
extern "C" unsigned long g_005141a0;
extern "C" unsigned long g_005141a4;
extern "C" unsigned long g_005141a8;
extern "C" unsigned long g_005141ac;
extern "C" unsigned long g_005141b0;
extern "C" unsigned long g_005141b4;
extern "C" unsigned long g_005141b8;
extern "C" unsigned long g_005141ba;
extern "C" unsigned long g_005141bc;
extern "C" unsigned long g_005141c0;
extern "C" unsigned long g_005141c4;
extern "C" unsigned long g_005141c8;
extern "C" unsigned long g_005141cc;
extern "C" unsigned long g_005141d0;
extern "C" unsigned long g_005141d4;
extern "C" unsigned long g_0051420c;
extern "C" unsigned long g_0051423c;
extern "C" unsigned long g_005142d4;
extern "C" unsigned long g_005142e2;
extern "C" unsigned long g_0051430a;
extern "C" unsigned long g_0051433a;
extern "C" unsigned long g_005143d2;
extern "C" unsigned long g_005143e0;
extern "C" unsigned long g_00514426;
extern "C" unsigned long g_00514484;
extern "C" unsigned long g_00514488;
extern "C" unsigned long g_0051448c;
extern "C" unsigned long g_00514490;
extern "C" unsigned long g_00514494;
extern "C" unsigned long g_00514498;
extern "C" unsigned long g_0051449c;
extern "C" unsigned long g_005144a0;
extern "C" unsigned long g_005144a4;
extern "C" unsigned long g_005144a8;
extern "C" unsigned long g_005144be;
extern "C" unsigned long g_0051463f;
extern "C" unsigned long g_0051469a;
extern "C" unsigned long g_005146b6;
extern "C" unsigned long g_005146b8;
extern "C" unsigned long g_00514770;
extern "C" unsigned long g_00514774;
extern "C" unsigned long g_00514776;
extern "C" unsigned long g_00514778;
extern "C" unsigned long g_0051477c;
extern "C" unsigned long g_00514780;
extern "C" unsigned long g_00514784;
extern "C" unsigned long g_00514788;
extern "C" unsigned long g_0051478c;
extern "C" unsigned long g_00514790;
extern "C" unsigned long g_00514794;
extern "C" unsigned long g_00514798;
extern "C" unsigned long g_0051484c;
extern "C" unsigned long g_0051487e;
extern "C" unsigned long g_00514924;
extern "C" unsigned long g_0051492e;
extern "C" unsigned long g_0051495e;
extern "C" unsigned long g_005149f4;
extern "C" unsigned long g_005149f8;
extern "C" unsigned long g_005149fc;
extern "C" unsigned long g_00514a00;
extern "C" unsigned long g_00514a02;
extern "C" unsigned long g_00514a04;
extern "C" unsigned long g_00514a08;
extern "C" unsigned long g_00514a0c;
extern "C" unsigned long g_00514a10;
extern "C" unsigned long g_00514a14;
extern "C" unsigned long g_00514a18;
extern "C" unsigned long g_00514a52;
extern "C" unsigned long g_00514a82;
extern "C" unsigned long g_00514b16;
extern "C" unsigned long g_00514b26;
extern "C" unsigned long g_00514d14;
extern "C" unsigned long g_00514d18;
extern "C" unsigned long g_00514d1c;
extern "C" unsigned long g_00514d20;
extern "C" unsigned long g_00514d24;
extern "C" unsigned long g_00514d28;
extern "C" unsigned long g_00514dae;
extern "C" unsigned long g_00514e12;
extern "C" unsigned long g_00514e34;
extern "C" unsigned long g_00514eac;
extern "C" unsigned long g_00514ed0;
extern "C" unsigned long g_00514f5a;
extern "C" unsigned long g_00514f86;
extern "C" unsigned long g_00514fd8;
extern "C" unsigned long g_00514fdc;
extern "C" unsigned long g_00514fe0;
extern "C" unsigned long g_00514fe4;
extern "C" unsigned long g_00514fe8;
extern "C" unsigned long g_00514fec;
extern "C" unsigned long g_00514ff0;
extern "C" unsigned long g_00514ff4;
extern "C" unsigned long g_00514ff8;
extern "C" unsigned long g_00514ffc;
extern "C" unsigned long g_00515000;
extern "C" unsigned long g_00515004;
extern "C" unsigned long g_00515008;
extern "C" unsigned long g_0051500c;
extern "C" unsigned long g_00515010;
extern "C" unsigned long g_00515026;
extern "C" unsigned long g_00515124;
extern "C" unsigned long g_00515140;
extern "C" unsigned long g_00515142;
extern "C" unsigned long g_00515200;
extern "C" unsigned long g_00515208;
extern "C" unsigned long g_0051520c;
extern "C" unsigned long g_00515210;
extern "C" unsigned long g_00515214;
extern "C" unsigned long g_00515218;
extern "C" unsigned long g_0051521c;
extern "C" unsigned long g_00515220;
extern "C" unsigned long g_00515224;
extern "C" unsigned long g_00515228;
extern "C" unsigned long g_0051522c;
extern "C" unsigned long g_005152bc;
extern "C" unsigned long g_00515320;
extern "C" unsigned long g_00515342;
extern "C" unsigned long g_005153be;
extern "C" unsigned long g_005153e2;
extern "C" unsigned long g_00515458;
extern "C" unsigned long g_0051545c;
extern "C" unsigned long g_00515460;
extern "C" unsigned long g_00515464;
extern "C" unsigned long g_00515468;
extern "C" unsigned long g_0051546c;
extern "C" unsigned long g_0051546e;
extern "C" unsigned long g_00515470;
extern "C" unsigned long g_00515474;
extern "C" unsigned long g_00515478;
extern "C" unsigned long g_0051547c;
extern "C" unsigned long g_00515480;
extern "C" unsigned long g_00515484;
extern "C" unsigned long g_00515488;
extern "C" unsigned long g_0051548c;
extern "C" unsigned long g_00515490;
extern "C" unsigned long g_00515546;
extern "C" unsigned long g_00515578;
extern "C" unsigned long g_0051561e;
extern "C" unsigned long g_005157ec;
extern "C" unsigned long g_005157f0;
extern "C" unsigned long g_005157f4;
extern "C" unsigned long g_005157f8;
extern "C" unsigned long g_005157fc;
extern "C" unsigned long g_00515800;
extern "C" unsigned long g_00515804;
extern "C" unsigned long g_00515808;
extern "C" unsigned long g_0051580c;
extern "C" unsigned long g_00515844;
extern "C" unsigned long g_00515874;
extern "C" unsigned long g_0051590a;
extern "C" unsigned long g_00515918;
extern "C" unsigned long g_00515940;
extern "C" unsigned long g_00515970;
extern "C" unsigned long g_00515a06;
extern "C" unsigned long g_00515a14;
extern "C" unsigned long g_00515a5c;
extern "C" unsigned long g_00515ab8;
extern "C" unsigned long g_00515abc;
extern "C" unsigned long g_00515ac0;
extern "C" unsigned long g_00515ac4;
extern "C" unsigned long g_00515ac8;
extern "C" unsigned long g_00515acc;
extern "C" unsigned long g_00515ad0;
extern "C" unsigned long g_00515ad4;
extern "C" unsigned long g_00515ad8;
extern "C" unsigned long g_00515adc;
bool BLChestItemInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestItemInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemInfoPresenter::tick(float p1)
{
  return;
}

BLChestItemInfoPresenter::~BLChestItemInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00513450 + g_0051349c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0051346a + g_005134a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestItemInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x21);
  return;
}

BLChestItemInfoPresenter::BLChestItemInfoPresenter()
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
  iVar3 = *(int *)(&g_005134fe + g_0051355c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00513532 + g_00513560,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLChestItemInfoPresenter::create(BLChestItemInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestItemInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLChestItemInfoPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLChestItemInfoPresenter::initWithView(BLChestItemInfoView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
  if (iVar2 != 1) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
    if (iVar2 != 2) goto code_r0x005135f8;
  }
  piVar1 = (int *)((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
code_r0x005135f8:
  piVar1 = (int *)((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnObtain();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00513614 + (intptr_t)(g_005136b8))),0,0x20);
  uVar3 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x20) = uVar3;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),uVar3,99);
  uVar3 = (undefined4)(((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0051364c + (intptr_t)(g_005136bc)), 0x3f800000, 1);
  ((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  piVar1 = (int *)((BLItemDataInfoUpView *)this)->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 600);
  ((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  uVar3 = (undefined4)(((BLItemDataInfoUpView *)this)->getPresenter());
  (*pcVar4)(piVar1,uVar3,*(undefined4 *)((unsigned char *)((char *)&g_0051366e + (intptr_t)(g_005136c0))),0,0x20);
  ((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  piVar1 = (int *)((BLItemDataInfoUpView *)this)->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00513698 + (intptr_t)(g_005136c4))),0,0x20);
  piVar1 = (int *)((BLChestItemInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoDown();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  return;
}

void BLChestItemInfoPresenter::onObtain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChestItemInfoPresenter::initEquipData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChestItemInfoPresenter::initPackItemData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChestItemInfoPresenter::initWithItemData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

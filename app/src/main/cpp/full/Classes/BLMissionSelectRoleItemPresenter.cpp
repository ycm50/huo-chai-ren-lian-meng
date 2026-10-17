#include "BLMissionSelectRoleItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleInfoItemData.h"
#include "RoleData.h"
#include "ADManager.h"
#include "BLBuyRoleAlertPresenter.h"
#include "BLBuyRoleAlertView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionSelectRoleItemView.h"
#include "BLPageControl.h"
#include "BluetoothHelper.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "PlayerData.h"
#include "RichTextData.h"
#include "RoleInfoData.h"
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
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b89c0;
extern "C" unsigned long UNK_005b89f6;
extern "C" unsigned long UNK_005b8a3c;
extern "C" unsigned long UNK_005b8a64;
extern "C" unsigned long UNK_005b8acc;
extern "C" unsigned long UNK_005b8afe;
extern "C" unsigned long UNK_005b8b34;
extern "C" unsigned long UNK_005b8b36;
extern "C" unsigned long UNK_005b8b50;
extern "C" unsigned long UNK_005b8b52;
extern "C" unsigned long UNK_005b8b7a;
extern "C" unsigned long UNK_005b8b92;
extern "C" unsigned long UNK_005b8bea;
extern "C" unsigned long UNK_005b8bee;
extern "C" unsigned long UNK_005b8c36;
extern "C" unsigned long UNK_005b8cb2;
extern "C" unsigned long UNK_005b8cc6;
extern "C" unsigned long UNK_005b8ce0;
extern "C" unsigned long UNK_005b8cee;
extern "C" unsigned long UNK_005b8cfa;
extern "C" unsigned long UNK_005b8d14;
extern "C" unsigned long UNK_005b8d34;
extern "C" unsigned long UNK_005b8d94;
extern "C" unsigned long UNK_005b8e10;
extern "C" unsigned long UNK_005b8e2e;
extern "C" unsigned long UNK_005b8e4c;
extern "C" unsigned long UNK_005b8e62;
extern "C" unsigned long UNK_005b8e9c;
extern "C" unsigned long UNK_005b8ef8;
extern "C" unsigned long UNK_005b8f6e;
extern "C" unsigned long UNK_005b8f9c;
extern "C" unsigned long UNK_005b901a;
extern "C" unsigned long UNK_005b9028;
extern "C" unsigned long UNK_005b9036;
extern "C" unsigned long UNK_005b905c;
extern "C" unsigned long UNK_005b905e;
extern "C" unsigned long UNK_005b9094;
extern "C" unsigned long UNK_005b90be;
extern "C" unsigned long UNK_005b9162;
extern "C" unsigned long UNK_005b91ac;
extern "C" unsigned long UNK_005b91e0;
extern "C" unsigned long UNK_005b92ac;
extern "C" unsigned long UNK_005b9312;
extern "C" unsigned long UNK_005b9320;
extern "C" unsigned long UNK_005b9340;
extern "C" unsigned long UNK_005b9370;
extern "C" unsigned long UNK_005b93f6;
extern "C" unsigned long UNK_005b9430;
extern "C" unsigned long UNK_005b9462;
extern "C" unsigned long UNK_005b946e;
extern "C" unsigned long UNK_005b9494;
extern "C" unsigned long UNK_005b94c4;
extern "C" unsigned long UNK_005b94fa;
extern "C" unsigned long UNK_005b9598;
extern "C" unsigned long UNK_005b95d8;
extern "C" unsigned long UNK_005b9656;
extern "C" unsigned long UNK_005b9696;
extern "C" unsigned long UNK_005b96da;
extern "C" unsigned long UNK_005b9792;
extern "C" unsigned long UNK_005b97c8;
extern "C" unsigned long UNK_005b9808;
extern "C" unsigned long UNK_005b9850;
extern "C" unsigned long UNK_005b9890;
extern "C" unsigned long UNK_005b98d6;
extern "C" unsigned long UNK_005b9930;
extern "C" unsigned long UNK_005b9980;
extern "C" unsigned long UNK_005b99be;
extern "C" unsigned long UNK_005b9a84;
extern "C" unsigned long UNK_005b9afc;
extern "C" unsigned long UNK_005b9b38;
extern "C" unsigned long UNK_005b9b8e;
extern "C" unsigned long UNK_005b9bca;
extern "C" unsigned long UNK_005b9c44;
extern "C" unsigned long UNK_005b9c82;
extern "C" unsigned long UNK_005b9e12;
extern "C" unsigned long UNK_005b9e1c;
extern "C" unsigned long UNK_005b9e42;
extern "C" unsigned long UNK_005b9ef6;
extern "C" unsigned long UNK_005b9f92;
extern "C" unsigned long UNK_005b9f94;
extern "C" unsigned long UNK_005ba036;
extern "C" unsigned long UNK_005ba118;
extern "C" unsigned long UNK_005ba132;
extern "C" unsigned long UNK_005ba154;
extern "C" unsigned long UNK_005ba228;
extern "C" unsigned long UNK_005ba25e;
extern "C" unsigned long UNK_005ba308;
extern "C" unsigned long UNK_005ba3fa;
extern "C" unsigned long UNK_005ba43e;
extern "C" unsigned long UNK_005ba49a;
extern "C" unsigned long UNK_005ba4cc;
extern "C" unsigned long UNK_005ba520;
extern "C" unsigned long UNK_005ba582;
extern "C" unsigned long UNK_005ba5da;
extern "C" unsigned long UNK_005ba62c;
extern "C" unsigned long UNK_005ba698;
extern "C" unsigned long UNK_005ba6d8;
extern "C" unsigned long UNK_005ba764;
extern "C" unsigned long UNK_005ba7ce;
extern "C" unsigned long UNK_005ba906;
extern "C" unsigned long UNK_005ba9e0;
extern "C" unsigned long UNK_005ba9fc;
extern "C" unsigned long UNK_005baa30;
extern "C" unsigned long _UNK_005b8a28;
extern "C" unsigned long _UNK_005b8a2c;
extern "C" unsigned long _UNK_005b8a40;
extern "C" unsigned long _UNK_005b8a68;
extern "C" unsigned long _UNK_005b8bb4;
extern "C" unsigned long _UNK_005b8bb8;
extern "C" unsigned long _UNK_005b8bbc;
extern "C" unsigned long _UNK_005b8bc0;
extern "C" unsigned long _UNK_005b8bc4;
extern "C" unsigned long _UNK_005b8bc8;
extern "C" unsigned long _UNK_005b8bcc;
extern "C" unsigned long _UNK_005b8bd0;
extern "C" unsigned long _UNK_005b8f18;
extern "C" unsigned long _UNK_005b8f1c;
extern "C" unsigned long _UNK_005b8f20;
extern "C" unsigned long _UNK_005b8f24;
extern "C" unsigned long _UNK_005b8f28;
extern "C" unsigned long _UNK_005b8f2c;
extern "C" unsigned long _UNK_005b8f30;
extern "C" unsigned long _UNK_005b8f34;
extern "C" unsigned long _UNK_005b8f38;
extern "C" unsigned long _UNK_005b8f3c;
extern "C" unsigned long _UNK_005b8f40;
extern "C" unsigned long _UNK_005b8f44;
extern "C" unsigned long _UNK_005b8f48;
extern "C" unsigned long _UNK_005b8f4c;
extern "C" unsigned long _UNK_005b8f50;
extern "C" unsigned long _UNK_005b8f54;
extern "C" unsigned long _UNK_005b8f58;
extern "C" unsigned long _UNK_005b8f5c;
extern "C" unsigned long _UNK_005b8fcc;
extern "C" unsigned long _UNK_005b8fd0;
extern "C" unsigned long _UNK_005b903c;
extern "C" unsigned long _UNK_005b9040;
extern "C" unsigned long _UNK_005b9044;
extern "C" unsigned long _UNK_005b9068;
extern "C" unsigned long _UNK_005b906c;
extern "C" unsigned long _UNK_005b9184;
extern "C" unsigned long _UNK_005b9188;
extern "C" unsigned long _UNK_005b918c;
extern "C" unsigned long _UNK_005b9190;
extern "C" unsigned long _UNK_005b9194;
extern "C" unsigned long _UNK_005b9264;
extern "C" unsigned long _UNK_005b9268;
extern "C" unsigned long _UNK_005b9604;
extern "C" unsigned long _UNK_005b9608;
extern "C" unsigned long _UNK_005b960c;
extern "C" unsigned long _UNK_005b9610;
extern "C" unsigned long _UNK_005b9614;
extern "C" unsigned long _UNK_005b9618;
extern "C" unsigned long _UNK_005b961c;
extern "C" unsigned long _UNK_005b9620;
extern "C" unsigned long _UNK_005b9624;
extern "C" unsigned long _UNK_005b9628;
extern "C" unsigned long _UNK_005b962c;
extern "C" unsigned long _UNK_005b9630;
extern "C" unsigned long _UNK_005b9634;
extern "C" unsigned long _UNK_005b9638;
extern "C" unsigned long _UNK_005b973c;
extern "C" unsigned long _UNK_005b9740;
extern "C" unsigned long _UNK_005b9744;
extern "C" unsigned long _UNK_005b9910;
extern "C" unsigned long _UNK_005b9914;
extern "C" unsigned long _UNK_005b9918;
extern "C" unsigned long _UNK_005b991c;
extern "C" unsigned long _UNK_005b9920;
extern "C" unsigned long _UNK_005b9924;
extern "C" unsigned long _UNK_005b9c04;
extern "C" unsigned long _UNK_005b9c08;
extern "C" unsigned long _UNK_005b9c0c;
extern "C" unsigned long _UNK_005b9c10;
extern "C" unsigned long _UNK_005b9c14;
extern "C" unsigned long _UNK_005b9c18;
extern "C" unsigned long _UNK_005b9c1c;
extern "C" unsigned long _UNK_005b9c20;
extern "C" unsigned long _UNK_005b9f60;
extern "C" unsigned long _UNK_005b9f64;
extern "C" unsigned long _UNK_005b9f68;
extern "C" unsigned long _UNK_005b9f6c;
extern "C" unsigned long _UNK_005b9f70;
extern "C" unsigned long _UNK_005b9f74;
extern "C" unsigned long _UNK_005b9f78;
extern "C" unsigned long _UNK_005b9f7c;
extern "C" unsigned long _UNK_005ba03c;
extern "C" unsigned long _UNK_005ba040;
extern "C" unsigned long _UNK_005ba044;
extern "C" unsigned long _UNK_005ba35c;
extern "C" unsigned long _UNK_005ba360;
extern "C" unsigned long _UNK_005ba364;
extern "C" unsigned long _UNK_005ba368;
extern "C" unsigned long _UNK_005ba36c;
extern "C" unsigned long _UNK_005ba370;
extern "C" unsigned long _UNK_005ba374;
extern "C" unsigned long _UNK_005ba378;
extern "C" unsigned long _UNK_005ba644;
extern "C" unsigned long _UNK_005ba648;
extern "C" unsigned long _UNK_005ba64c;
extern "C" unsigned long _UNK_005ba650;
extern "C" unsigned long _UNK_005ba654;
extern "C" unsigned long _UNK_005ba658;
extern "C" unsigned long _UNK_005ba65c;
extern "C" unsigned long _UNK_005ba660;
extern "C" unsigned long _UNK_005ba664;
extern "C" unsigned long _UNK_005ba668;
extern "C" unsigned long _UNK_005ba9ac;
extern "C" unsigned long _UNK_005ba9b0;
extern "C" unsigned long _UNK_005ba9b4;
extern "C" unsigned long _UNK_005ba9b8;
extern "C" unsigned long _UNK_005ba9bc;
extern "C" unsigned long _UNK_005ba9c0;
extern "C" unsigned long _UNK_005ba9c4;
extern "C" unsigned long _UNK_005baa48;
extern "C" unsigned long _UNK_005baa4c;
extern "C" unsigned long _UNK_005baa50;
extern "C" unsigned long g_005b89c0;
extern "C" unsigned long g_005b89f6;
extern "C" unsigned long g_005b8a28;
extern "C" unsigned long g_005b8a2c;
extern "C" unsigned long g_005b8a3c;
extern "C" unsigned long g_005b8a40;
extern "C" unsigned long g_005b8a64;
extern "C" unsigned long g_005b8a68;
extern "C" unsigned long g_005b8acc;
extern "C" unsigned long g_005b8afe;
extern "C" unsigned long g_005b8b34;
extern "C" unsigned long g_005b8b36;
extern "C" unsigned long g_005b8b50;
extern "C" unsigned long g_005b8b52;
extern "C" unsigned long g_005b8b7a;
extern "C" unsigned long g_005b8b92;
extern "C" unsigned long g_005b8bb4;
extern "C" unsigned long g_005b8bb8;
extern "C" unsigned long g_005b8bbc;
extern "C" unsigned long g_005b8bc0;
extern "C" unsigned long g_005b8bc4;
extern "C" unsigned long g_005b8bc8;
extern "C" unsigned long g_005b8bcc;
extern "C" unsigned long g_005b8bd0;
extern "C" unsigned long g_005b8bea;
extern "C" unsigned long g_005b8bee;
extern "C" unsigned long g_005b8c36;
extern "C" unsigned long g_005b8cb2;
extern "C" unsigned long g_005b8cc6;
extern "C" unsigned long g_005b8ce0;
extern "C" unsigned long g_005b8cee;
extern "C" unsigned long g_005b8cfa;
extern "C" unsigned long g_005b8d14;
extern "C" unsigned long g_005b8d34;
extern "C" unsigned long g_005b8d94;
extern "C" unsigned long g_005b8e10;
extern "C" unsigned long g_005b8e2e;
extern "C" unsigned long g_005b8e4c;
extern "C" unsigned long g_005b8e62;
extern "C" unsigned long g_005b8e9c;
extern "C" unsigned long g_005b8ef8;
extern "C" unsigned long g_005b8f18;
extern "C" unsigned long g_005b8f1c;
extern "C" unsigned long g_005b8f20;
extern "C" unsigned long g_005b8f24;
extern "C" unsigned long g_005b8f28;
extern "C" unsigned long g_005b8f2c;
extern "C" unsigned long g_005b8f30;
extern "C" unsigned long g_005b8f34;
extern "C" unsigned long g_005b8f38;
extern "C" unsigned long g_005b8f3c;
extern "C" unsigned long g_005b8f40;
extern "C" unsigned long g_005b8f44;
extern "C" unsigned long g_005b8f48;
extern "C" unsigned long g_005b8f4c;
extern "C" unsigned long g_005b8f50;
extern "C" unsigned long g_005b8f54;
extern "C" unsigned long g_005b8f58;
extern "C" unsigned long g_005b8f5c;
extern "C" unsigned long g_005b8f6e;
extern "C" unsigned long g_005b8f9c;
extern "C" unsigned long g_005b8fcc;
extern "C" unsigned long g_005b8fd0;
extern "C" unsigned long g_005b901a;
extern "C" unsigned long g_005b9028;
extern "C" unsigned long g_005b9036;
extern "C" unsigned long g_005b903c;
extern "C" unsigned long g_005b9040;
extern "C" unsigned long g_005b9044;
extern "C" unsigned long g_005b905c;
extern "C" unsigned long g_005b905e;
extern "C" unsigned long g_005b9068;
extern "C" unsigned long g_005b906c;
extern "C" unsigned long g_005b9094;
extern "C" unsigned long g_005b90be;
extern "C" unsigned long g_005b9162;
extern "C" unsigned long g_005b9184;
extern "C" unsigned long g_005b9188;
extern "C" unsigned long g_005b918c;
extern "C" unsigned long g_005b9190;
extern "C" unsigned long g_005b9194;
extern "C" unsigned long g_005b91ac;
extern "C" unsigned long g_005b91e0;
extern "C" unsigned long g_005b9264;
extern "C" unsigned long g_005b9268;
extern "C" unsigned long g_005b92ac;
extern "C" unsigned long g_005b9312;
extern "C" unsigned long g_005b9320;
extern "C" unsigned long g_005b9340;
extern "C" unsigned long g_005b9370;
extern "C" unsigned long g_005b93f6;
extern "C" unsigned long g_005b9430;
extern "C" unsigned long g_005b9462;
extern "C" unsigned long g_005b946e;
extern "C" unsigned long g_005b9494;
extern "C" unsigned long g_005b94c4;
extern "C" unsigned long g_005b94fa;
extern "C" unsigned long g_005b9598;
extern "C" unsigned long g_005b95d8;
extern "C" unsigned long g_005b9604;
extern "C" unsigned long g_005b9608;
extern "C" unsigned long g_005b960c;
extern "C" unsigned long g_005b9610;
extern "C" unsigned long g_005b9614;
extern "C" unsigned long g_005b9618;
extern "C" unsigned long g_005b961c;
extern "C" unsigned long g_005b9620;
extern "C" unsigned long g_005b9624;
extern "C" unsigned long g_005b9628;
extern "C" unsigned long g_005b962c;
extern "C" unsigned long g_005b9630;
extern "C" unsigned long g_005b9634;
extern "C" unsigned long g_005b9638;
extern "C" unsigned long g_005b9656;
extern "C" unsigned long g_005b9696;
extern "C" unsigned long g_005b96da;
extern "C" unsigned long g_005b973c;
extern "C" unsigned long g_005b9740;
extern "C" unsigned long g_005b9744;
extern "C" unsigned long g_005b9792;
extern "C" unsigned long g_005b97c8;
extern "C" unsigned long g_005b9808;
extern "C" unsigned long g_005b9850;
extern "C" unsigned long g_005b9890;
extern "C" unsigned long g_005b98d6;
extern "C" unsigned long g_005b9910;
extern "C" unsigned long g_005b9914;
extern "C" unsigned long g_005b9918;
extern "C" unsigned long g_005b991c;
extern "C" unsigned long g_005b9920;
extern "C" unsigned long g_005b9924;
extern "C" unsigned long g_005b9930;
extern "C" unsigned long g_005b9980;
extern "C" unsigned long g_005b99be;
extern "C" unsigned long g_005b9a84;
extern "C" unsigned long g_005b9afc;
extern "C" unsigned long g_005b9b38;
extern "C" unsigned long g_005b9b8e;
extern "C" unsigned long g_005b9bca;
extern "C" unsigned long g_005b9c04;
extern "C" unsigned long g_005b9c08;
extern "C" unsigned long g_005b9c0c;
extern "C" unsigned long g_005b9c10;
extern "C" unsigned long g_005b9c14;
extern "C" unsigned long g_005b9c18;
extern "C" unsigned long g_005b9c1c;
extern "C" unsigned long g_005b9c20;
extern "C" unsigned long g_005b9c44;
extern "C" unsigned long g_005b9c82;
extern "C" unsigned long g_005b9e12;
extern "C" unsigned long g_005b9e1c;
extern "C" unsigned long g_005b9e42;
extern "C" unsigned long g_005b9ef6;
extern "C" unsigned long g_005b9f60;
extern "C" unsigned long g_005b9f64;
extern "C" unsigned long g_005b9f68;
extern "C" unsigned long g_005b9f6c;
extern "C" unsigned long g_005b9f70;
extern "C" unsigned long g_005b9f74;
extern "C" unsigned long g_005b9f78;
extern "C" unsigned long g_005b9f7c;
extern "C" unsigned long g_005b9f92;
extern "C" unsigned long g_005b9f94;
extern "C" unsigned long g_005ba036;
extern "C" unsigned long g_005ba03c;
extern "C" unsigned long g_005ba040;
extern "C" unsigned long g_005ba044;
extern "C" unsigned long g_005ba118;
extern "C" unsigned long g_005ba132;
extern "C" unsigned long g_005ba154;
extern "C" unsigned long g_005ba228;
extern "C" unsigned long g_005ba25e;
extern "C" unsigned long g_005ba308;
extern "C" unsigned long g_005ba35c;
extern "C" unsigned long g_005ba360;
extern "C" unsigned long g_005ba364;
extern "C" unsigned long g_005ba368;
extern "C" unsigned long g_005ba36c;
extern "C" unsigned long g_005ba370;
extern "C" unsigned long g_005ba374;
extern "C" unsigned long g_005ba378;
extern "C" unsigned long g_005ba3fa;
extern "C" unsigned long g_005ba43e;
extern "C" unsigned long g_005ba49a;
extern "C" unsigned long g_005ba4cc;
extern "C" unsigned long g_005ba520;
extern "C" unsigned long g_005ba582;
extern "C" unsigned long g_005ba5da;
extern "C" unsigned long g_005ba62c;
extern "C" unsigned long g_005ba644;
extern "C" unsigned long g_005ba648;
extern "C" unsigned long g_005ba64c;
extern "C" unsigned long g_005ba650;
extern "C" unsigned long g_005ba654;
extern "C" unsigned long g_005ba658;
extern "C" unsigned long g_005ba65c;
extern "C" unsigned long g_005ba660;
extern "C" unsigned long g_005ba664;
extern "C" unsigned long g_005ba668;
extern "C" unsigned long g_005ba698;
extern "C" unsigned long g_005ba6d8;
extern "C" unsigned long g_005ba764;
extern "C" unsigned long g_005ba7ce;
extern "C" unsigned long g_005ba906;
extern "C" unsigned long g_005ba9ac;
extern "C" unsigned long g_005ba9b0;
extern "C" unsigned long g_005ba9b4;
extern "C" unsigned long g_005ba9b8;
extern "C" unsigned long g_005ba9bc;
extern "C" unsigned long g_005ba9c0;
extern "C" unsigned long g_005ba9c4;
extern "C" unsigned long g_005ba9e0;
extern "C" unsigned long g_005ba9fc;
extern "C" unsigned long g_005baa30;
extern "C" unsigned long g_005baa48;
extern "C" unsigned long g_005baa4c;
extern "C" unsigned long g_005baa50;
RoleData* BLMissionSelectRoleItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLMissionSelectRoleItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

bool BLMissionSelectRoleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionSelectRoleItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRoleItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRoleItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRoleItemPresenter::tick(float p1)
{
  return;
}

BLMissionSelectRoleItemPresenter::~BLMissionSelectRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b89c0 + g_005b8a28);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b89f6 + g_005b8a2c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionSelectRoleItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLMissionSelectRoleItemPresenter::setRoleData(RoleData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}



BLMissionSelectRoleItemPresenter::BLMissionSelectRoleItemPresenter()
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
  iVar3 = *(int *)(&g_005b8f6e + g_005b8fcc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b8f9c + g_005b8fd0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

undefined4 BLMissionSelectRoleItemPresenter::create(BLMissionSelectRoleItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionSelectRoleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005b901a + g_005b903c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005b9028 + g_005b9040);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005b9036 + g_005b9044);
  return;
}



void BLMissionSelectRoleItemPresenter::on(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}






void BLMissionSelectRoleItemPresenter::initWithPlayerData(PlayerData* p1)
{
  BLMissionSelectRoleItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
undefined8 BLMissionSelectRoleItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMissionSelectRoleItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::initWithView(BLMissionSelectRoleItemView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005b9094 + (intptr_t)(g_005b9184))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_005b90be + (intptr_t)(g_005b9188));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_005b918c));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_005b9190);
  piVar1 = (int *)((BLMissionSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005b9162 + (intptr_t)(g_005b9194)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLMissionSelectRoleItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::selectBuyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iStack_14;
  
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_005b9f92 + (intptr_t)(g_005ba040))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005b9f94 + (intptr_t)(g_005ba03c))),0), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))(&iStack_14);
    iVar1 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                      (iVar1 + 0x14,&iStack_14);
    func_0079e2bc(&iStack_14);
    if (iVar1 != 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x40)))();
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)((DataManager *)this)->shareDataManager();
        iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x118)))());
        if (iVar1 == 6) {
          BLMissionSelectRoleItemPresenter::selectBuyRole();
        }
        else {
          piVar3 = (int *)((DataManager *)this)->shareDataManager();
          piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x38)))();
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0xa8)))());
          piVar3 = (int *)((DataManager *)this)->shareDataManager();
          iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x118)))());
          if (iVar1 == 0xc) {
            uVar4 = (undefined4)(3);
          }
          (**(code **)(*(int *)(piVar2) + (0x28)))(piVar2);
          uVar5 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
          if (uVar5 < uVar4) {
            BLMissionSelectRoleItemPresenter::selectRole();
          }
        }
      }
      BLMissionSelectRoleItemPresenter::updateData();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar6)->postNotification((char const*)(unsigned char *)((char *)&g_005ba036 + (intptr_t)(g_005ba044)));
    }
  }
  return;
}

void BLMissionSelectRoleItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::initWithMoneyTreePlayerDate(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRoleItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "ChallengeMainPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "ChallengeMainView.h"
#include "CCTouch.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLReNameView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "ChallengeBuffView.h"
#include "ChallengeHeroPresenter.h"
#include "ChallengeHttpData.h"
#include "ChallengeHttpUtil.h"
#include "ChallengePlayerData.h"
#include "ChallengeStataPresenter.h"
#include "ChallengeTicketView.h"
#include "ChallengeUserData.h"
#include "DataManager.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00508890;
extern "C" unsigned long UNK_005088a8;
extern "C" unsigned long UNK_005088c0;
extern "C" unsigned long UNK_00508934;
extern "C" unsigned long UNK_0050894e;
extern "C" unsigned long UNK_00508994;
extern "C" unsigned long UNK_005089bc;
extern "C" unsigned long UNK_005089ec;
extern "C" unsigned long UNK_005089fa;
extern "C" unsigned long UNK_00508ad2;
extern "C" unsigned long UNK_00508ad4;
extern "C" unsigned long UNK_00508aea;
extern "C" unsigned long UNK_00508aec;
extern "C" unsigned long UNK_00508b00;
extern "C" unsigned long UNK_00508b1e;
extern "C" unsigned long UNK_00508b90;
extern "C" unsigned long UNK_00508c02;
extern "C" unsigned long UNK_00508c1c;
extern "C" unsigned long UNK_00508c38;
extern "C" unsigned long UNK_00508c54;
extern "C" unsigned long UNK_00508c70;
extern "C" unsigned long UNK_00508c8c;
extern "C" unsigned long UNK_00508ca8;
extern "C" unsigned long UNK_00508cc4;
extern "C" unsigned long UNK_00508ce0;
extern "C" unsigned long UNK_00508cfc;
extern "C" unsigned long UNK_00508d16;
extern "C" unsigned long UNK_00508e40;
extern "C" unsigned long UNK_00508f8c;
extern "C" unsigned long UNK_0050900c;
extern "C" unsigned long UNK_005090c4;
extern "C" unsigned long UNK_005090d4;
extern "C" unsigned long UNK_00509138;
extern "C" unsigned long UNK_00509142;
extern "C" unsigned long UNK_00509254;
extern "C" unsigned long UNK_0050928c;
extern "C" unsigned long UNK_0050928e;
extern "C" unsigned long UNK_005092cc;
extern "C" unsigned long UNK_005092ce;
extern "C" unsigned long UNK_0050930a;
extern "C" unsigned long UNK_0050930c;
extern "C" unsigned long UNK_005093c2;
extern "C" unsigned long UNK_00509484;
extern "C" unsigned long UNK_005094a6;
extern "C" unsigned long UNK_005094a8;
extern "C" unsigned long UNK_00509530;
extern "C" unsigned long UNK_005095d0;
extern "C" unsigned long UNK_005095d2;
extern "C" unsigned long UNK_00509670;
extern "C" unsigned long UNK_00509672;
extern "C" unsigned long UNK_00509712;
extern "C" unsigned long UNK_00509714;
extern "C" unsigned long UNK_0050980e;
extern "C" unsigned long UNK_00509810;
extern "C" unsigned long UNK_005098b0;
extern "C" unsigned long UNK_005098b2;
extern "C" unsigned long UNK_00509954;
extern "C" unsigned long UNK_00509a0c;
extern "C" unsigned long UNK_00509bfe;
extern "C" unsigned long UNK_00509c0a;
extern "C" unsigned long _UNK_00508894;
extern "C" unsigned long _UNK_005088ac;
extern "C" unsigned long _UNK_005088c4;
extern "C" unsigned long _UNK_00508980;
extern "C" unsigned long _UNK_00508984;
extern "C" unsigned long _UNK_00508998;
extern "C" unsigned long _UNK_005089c0;
extern "C" unsigned long _UNK_00508a20;
extern "C" unsigned long _UNK_00508a24;
extern "C" unsigned long _UNK_00508a28;
extern "C" unsigned long _UNK_00508a2c;
extern "C" unsigned long _UNK_00508a30;
extern "C" unsigned long _UNK_00508ab4;
extern "C" unsigned long _UNK_00508b5c;
extern "C" unsigned long _UNK_00508b60;
extern "C" unsigned long _UNK_00508b64;
extern "C" unsigned long _UNK_00508b68;
extern "C" unsigned long _UNK_00508b6c;
extern "C" unsigned long _UNK_00508b70;
extern "C" unsigned long _UNK_00508b74;
extern "C" unsigned long _UNK_00508b9c;
extern "C" unsigned long _UNK_00508bec;
extern "C" unsigned long _UNK_00508d44;
extern "C" unsigned long _UNK_00508d48;
extern "C" unsigned long _UNK_00508d4c;
extern "C" unsigned long _UNK_00508d50;
extern "C" unsigned long _UNK_00508d54;
extern "C" unsigned long _UNK_00508d58;
extern "C" unsigned long _UNK_00508d5c;
extern "C" unsigned long _UNK_00508d60;
extern "C" unsigned long _UNK_00508d64;
extern "C" unsigned long _UNK_00508d68;
extern "C" unsigned long _UNK_00508d6c;
extern "C" unsigned long _UNK_00508d70;
extern "C" unsigned long _UNK_00508d74;
extern "C" unsigned long _UNK_00508d78;
extern "C" unsigned long _UNK_00508d7c;
extern "C" unsigned long _UNK_00508d80;
extern "C" unsigned long _UNK_00508d84;
extern "C" unsigned long _UNK_00508d88;
extern "C" unsigned long _UNK_00508d8c;
extern "C" unsigned long _UNK_00508d90;
extern "C" unsigned long _UNK_00508d94;
extern "C" unsigned long _UNK_00508f40;
extern "C" unsigned long _UNK_00508f44;
extern "C" unsigned long _UNK_00508f48;
extern "C" unsigned long _UNK_00508f4c;
extern "C" unsigned long _UNK_00508f50;
extern "C" unsigned long _UNK_00508f54;
extern "C" unsigned long _UNK_00508f58;
extern "C" unsigned long _UNK_00508f5c;
extern "C" unsigned long _UNK_00508f60;
extern "C" unsigned long _UNK_00508f90;
extern "C" unsigned long _UNK_00509028;
extern "C" unsigned long _UNK_005091bc;
extern "C" unsigned long _UNK_005091c0;
extern "C" unsigned long _UNK_005091c4;
extern "C" unsigned long _UNK_005091c8;
extern "C" unsigned long _UNK_00509338;
extern "C" unsigned long _UNK_0050933c;
extern "C" unsigned long _UNK_00509340;
extern "C" unsigned long _UNK_00509344;
extern "C" unsigned long _UNK_00509348;
extern "C" unsigned long _UNK_0050934c;
extern "C" unsigned long _UNK_00509350;
extern "C" unsigned long _UNK_00509354;
extern "C" unsigned long _UNK_00509748;
extern "C" unsigned long _UNK_0050974c;
extern "C" unsigned long _UNK_00509750;
extern "C" unsigned long _UNK_00509754;
extern "C" unsigned long _UNK_00509758;
extern "C" unsigned long _UNK_0050975c;
extern "C" unsigned long _UNK_00509760;
extern "C" unsigned long _UNK_00509764;
extern "C" unsigned long _UNK_00509768;
extern "C" unsigned long _UNK_0050976c;
extern "C" unsigned long _UNK_00509770;
extern "C" unsigned long _UNK_00509774;
extern "C" unsigned long _UNK_00509778;
extern "C" unsigned long _UNK_0050977c;
extern "C" unsigned long _UNK_00509780;
extern "C" unsigned long _UNK_00509784;
extern "C" unsigned long _UNK_00509788;
extern "C" unsigned long _UNK_0050978c;
extern "C" unsigned long _UNK_00509790;
extern "C" unsigned long _UNK_00509794;
extern "C" unsigned long _UNK_0050998c;
extern "C" unsigned long _UNK_00509990;
extern "C" unsigned long _UNK_00509994;
extern "C" unsigned long _UNK_00509998;
extern "C" unsigned long _UNK_0050999c;
extern "C" unsigned long _UNK_005099a0;
extern "C" unsigned long _UNK_005099a4;
extern "C" unsigned long _UNK_005099fc;
extern "C" unsigned long _UNK_00509c5c;
extern "C" unsigned long _UNK_00509c60;
extern "C" unsigned long _UNK_00509c64;
extern "C" unsigned long _UNK_00509c68;
extern "C" unsigned long _UNK_00509c6c;
extern "C" unsigned long g_00508890;
extern "C" unsigned long g_00508894;
extern "C" unsigned long g_005088a8;
extern "C" unsigned long g_005088ac;
extern "C" unsigned long g_005088c0;
extern "C" unsigned long g_005088c4;
extern "C" unsigned long g_00508934;
extern "C" unsigned long g_0050894e;
extern "C" unsigned long g_00508980;
extern "C" unsigned long g_00508984;
extern "C" unsigned long g_00508994;
extern "C" unsigned long g_00508998;
extern "C" unsigned long g_005089bc;
extern "C" unsigned long g_005089c0;
extern "C" unsigned long g_005089ec;
extern "C" unsigned long g_005089fa;
extern "C" unsigned long g_00508a20;
extern "C" unsigned long g_00508a24;
extern "C" unsigned long g_00508a28;
extern "C" unsigned long g_00508a2c;
extern "C" unsigned long g_00508a30;
extern "C" unsigned long g_00508ab4;
extern "C" unsigned long g_00508ad2;
extern "C" unsigned long g_00508ad4;
extern "C" unsigned long g_00508aea;
extern "C" unsigned long g_00508aec;
extern "C" unsigned long g_00508b00;
extern "C" unsigned long g_00508b1e;
extern "C" unsigned long g_00508b5c;
extern "C" unsigned long g_00508b60;
extern "C" unsigned long g_00508b64;
extern "C" unsigned long g_00508b68;
extern "C" unsigned long g_00508b6c;
extern "C" unsigned long g_00508b70;
extern "C" unsigned long g_00508b74;
extern "C" unsigned long g_00508b90;
extern "C" unsigned long g_00508b9c;
extern "C" unsigned long g_00508bec;
extern "C" unsigned long g_00508c02;
extern "C" unsigned long g_00508c1c;
extern "C" unsigned long g_00508c38;
extern "C" unsigned long g_00508c54;
extern "C" unsigned long g_00508c70;
extern "C" unsigned long g_00508c8c;
extern "C" unsigned long g_00508ca8;
extern "C" unsigned long g_00508cc4;
extern "C" unsigned long g_00508ce0;
extern "C" unsigned long g_00508cfc;
extern "C" unsigned long g_00508d16;
extern "C" unsigned long g_00508d44;
extern "C" unsigned long g_00508d48;
extern "C" unsigned long g_00508d4c;
extern "C" unsigned long g_00508d50;
extern "C" unsigned long g_00508d54;
extern "C" unsigned long g_00508d58;
extern "C" unsigned long g_00508d5c;
extern "C" unsigned long g_00508d60;
extern "C" unsigned long g_00508d64;
extern "C" unsigned long g_00508d68;
extern "C" unsigned long g_00508d6c;
extern "C" unsigned long g_00508d70;
extern "C" unsigned long g_00508d74;
extern "C" unsigned long g_00508d78;
extern "C" unsigned long g_00508d7c;
extern "C" unsigned long g_00508d80;
extern "C" unsigned long g_00508d84;
extern "C" unsigned long g_00508d88;
extern "C" unsigned long g_00508d8c;
extern "C" unsigned long g_00508d90;
extern "C" unsigned long g_00508d94;
extern "C" unsigned long g_00508e40;
extern "C" unsigned long g_00508f40;
extern "C" unsigned long g_00508f44;
extern "C" unsigned long g_00508f48;
extern "C" unsigned long g_00508f4c;
extern "C" unsigned long g_00508f50;
extern "C" unsigned long g_00508f54;
extern "C" unsigned long g_00508f58;
extern "C" unsigned long g_00508f5c;
extern "C" unsigned long g_00508f60;
extern "C" unsigned long g_00508f8c;
extern "C" unsigned long g_00508f90;
extern "C" unsigned long g_0050900c;
extern "C" unsigned long g_00509028;
extern "C" unsigned long g_005090c4;
extern "C" unsigned long g_005090d4;
extern "C" unsigned long g_00509138;
extern "C" unsigned long g_00509142;
extern "C" unsigned long g_005091bc;
extern "C" unsigned long g_005091c0;
extern "C" unsigned long g_005091c4;
extern "C" unsigned long g_005091c8;
extern "C" unsigned long g_00509254;
extern "C" unsigned long g_0050928c;
extern "C" unsigned long g_0050928e;
extern "C" unsigned long g_005092cc;
extern "C" unsigned long g_005092ce;
extern "C" unsigned long g_0050930a;
extern "C" unsigned long g_0050930c;
extern "C" unsigned long g_00509338;
extern "C" unsigned long g_0050933c;
extern "C" unsigned long g_00509340;
extern "C" unsigned long g_00509344;
extern "C" unsigned long g_00509348;
extern "C" unsigned long g_0050934c;
extern "C" unsigned long g_00509350;
extern "C" unsigned long g_00509354;
extern "C" unsigned long g_005093c2;
extern "C" unsigned long g_00509484;
extern "C" unsigned long g_005094a6;
extern "C" unsigned long g_005094a8;
extern "C" unsigned long g_00509530;
extern "C" unsigned long g_005095d0;
extern "C" unsigned long g_005095d2;
extern "C" unsigned long g_00509670;
extern "C" unsigned long g_00509672;
extern "C" unsigned long g_00509712;
extern "C" unsigned long g_00509714;
extern "C" unsigned long g_00509748;
extern "C" unsigned long g_0050974c;
extern "C" unsigned long g_00509750;
extern "C" unsigned long g_00509754;
extern "C" unsigned long g_00509758;
extern "C" unsigned long g_0050975c;
extern "C" unsigned long g_00509760;
extern "C" unsigned long g_00509764;
extern "C" unsigned long g_00509768;
extern "C" unsigned long g_0050976c;
extern "C" unsigned long g_00509770;
extern "C" unsigned long g_00509774;
extern "C" unsigned long g_00509778;
extern "C" unsigned long g_0050977c;
extern "C" unsigned long g_00509780;
extern "C" unsigned long g_00509784;
extern "C" unsigned long g_00509788;
extern "C" unsigned long g_0050978c;
extern "C" unsigned long g_00509790;
extern "C" unsigned long g_00509794;
extern "C" unsigned long g_0050980e;
extern "C" unsigned long g_00509810;
extern "C" unsigned long g_005098b0;
extern "C" unsigned long g_005098b2;
extern "C" unsigned long g_00509954;
extern "C" unsigned long g_0050998c;
extern "C" unsigned long g_00509990;
extern "C" unsigned long g_00509994;
extern "C" unsigned long g_00509998;
extern "C" unsigned long g_0050999c;
extern "C" unsigned long g_005099a0;
extern "C" unsigned long g_005099a4;
extern "C" unsigned long g_005099fc;
extern "C" unsigned long g_00509a0c;
extern "C" unsigned long g_00509bfe;
extern "C" unsigned long g_00509c0a;
extern "C" unsigned long g_00509c5c;
extern "C" unsigned long g_00509c60;
extern "C" unsigned long g_00509c64;
extern "C" unsigned long g_00509c68;
extern "C" unsigned long g_00509c6c;
void ChallengeMainPresenter::reNameFail(cocos2d::CCObject* p1)
{
  return;
}

bool ChallengeMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void ChallengeMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ChallengeMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ChallengeMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ChallengeMainPresenter::tick(float p1)
{
  return;
}

ChallengeMainPresenter::~ChallengeMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00508934 + g_00508980);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050894e + g_00508984,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void ChallengeMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(700);
  return;
}


void ChallengeMainPresenter::onChangeHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_00508ab4);
  return;
}



void ChallengeMainPresenter::beginPaoMaDeng(float p1)
{
  cocos2d::CCLog((char const*)&g_00508b90 + g_00508b9c);
  ((ChallengeHttpUtil *)this)->getInstance();
  ((ChallengeHttpUtil *)this)->getChallengeMostUser();
  return;
}

void ChallengeMainPresenter::onShowBuffView(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((ChallengeBuffView *)this)->create();
  (**(code **)(*piVar1 + 0x11c))(piVar1,0x65);
  pcVar2 = *(code **)(**(int **)(((int)this) + 0x18) + 0xcc);
  (*pcVar2)(*(int **)(((int)this) + 0x18),piVar1,0x65,pcVar2,p4);
  return;
}


ChallengeMainPresenter::ChallengeMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 ChallengeMainPresenter::create(ChallengeMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void ChallengeMainPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void ChallengeMainPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void ChallengeMainPresenter::onChangeHeroLineUp()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x95);
  return;
}



void ChallengeMainPresenter::onFial()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)&g_00508f8c + g_00508f90);
  return;
}


void ChallengeMainPresenter::onStart(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 400))();
  if ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) < 0x14) {
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar3)->showToast((char const*)&g_0050900c + g_00509028);
  }
  else {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    ChallengeMainPresenter::updateHeroData();
    ((ChallengeHttpData *)this)->getInstance();
    ((ChallengeHttpData *)this)->startChallenge();
  }
  return;
}




void ChallengeMainPresenter::onRecordInfo()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(code **)(**(int **)(((int)this) + 0x18) + 0xf8);
  (*pcVar2)(*(int **)(((int)this) + 0x18),g_005099fc,p3,pcVar2,p4);
  iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
  iVar3 = *(int *)(iVar1 + 0x24) + 4;
  if (iVar3 != *(int *)(iVar1 + 0x28)) {
    iVar4 = *(int *)(iVar1 + 0x28) - iVar3 >> 2;
    iVar3 = *(int *)(iVar1 + 0x24);
    for (; 0 < iVar4; iVar4 = iVar4 + -1) {
      func_0079e52c(iVar3,iVar3 + 4);
      iVar3 = iVar3 + 4;
    }
  }
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -4;
  func_0079e2bc();
  if (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24) >> 2 != 0) {
    ChallengeMainPresenter::updatePaoMaDeng();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
undefined8 ChallengeMainPresenter::reName()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 ChallengeMainPresenter::updateDimandCount()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ChallengeMainPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::onStartGame()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::onUser(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->showUIById(g_00508bec);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_00508bec)),(intptr_t)0);
  if (*(int *)(iVar2 + 0x24) != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLReNameView *)this)->getPresenter());
    *(undefined4 *)(iVar2 + 0x20) = 1;
  }
  return;
}

undefined4 ChallengeMainPresenter::initWithView(ChallengeMainView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ChallengeMainPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->removeUIByID(0x7b);
  }
  return;
}

void ChallengeMainPresenter::updateHeroData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::onBuyTicketSucceed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::updateBuff()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::updatePaoMaDeng()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::onUpdateSelect()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeMainPresenter::onRefreshInfo()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
  if (*(int *)(iVar1 + 0x20) == -1) {
    piVar2 = (int *)((ChallengeTicketView *)this)->create();
    (**(code **)(*piVar2 + 0x11c))(piVar2,0x66);
    (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar2,10);
  }
  else {
    ChallengeMainPresenter::onUpdateSelect();
    ChallengeMainPresenter::updateBuff();
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar2 + 0x234);
    iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
    func_0079e53c(&uStack_1c,iVar1 + 0x14);
    (*pcVar4)(piVar2,uStack_1c);
    func_0079e2bc(&uStack_1c);
    uVar3 = (undefined4)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 300) + 0x108));
    iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
    ((ChallengeStataPresenter *)uVar3)->initBoxWithType(*(undefined4 *)(iVar1 + 0x20));
    uVar3 = (undefined4)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 300) + 0x108));
    iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
    ((ChallengeStataPresenter *)uVar3)->updateWinNum(*(undefined4 *)(iVar1 + 0x18));
    uVar3 = (undefined4)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 300) + 0x108));
    iVar1 = ((ChallengeHttpUtil *)this)->getInstance();
    ((ChallengeStataPresenter *)uVar3)->updateFailNum(*(undefined4 *)(iVar1 + 0x1c));
  }
  return;
}

#include "BLTimeLimitedCopyPresenter.h"
#include "MissionEndLessData.h"
#include "CCDictionary.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLTimeLimitedCopyView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCControlButton.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "ItemData.h"
#include "BLForwards.h"
#include "BLDropData.h"
#include "BLGameScene.h"
#include "BLHeroSprite.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MissionCreamSelectData.h"
#include "MissionEndLessSelectHeroData.h"
#include "MissionSelectHeroData.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT17(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c7048;
extern "C" unsigned long UNK_005c704c;
extern "C" unsigned long UNK_005c707a;
extern "C" unsigned long UNK_005c7134;
extern "C" unsigned long UNK_005c7136;
extern "C" unsigned long UNK_005c715a;
extern "C" unsigned long UNK_005c71a2;
extern "C" unsigned long UNK_005c720c;
extern "C" unsigned long UNK_005c7234;
extern "C" unsigned long UNK_005c7284;
extern "C" unsigned long UNK_005c72ac;
extern "C" unsigned long UNK_005c72c4;
extern "C" unsigned long UNK_005c767c;
extern "C" unsigned long UNK_005c7696;
extern "C" unsigned long UNK_005c76c4;
extern "C" unsigned long UNK_005c784a;
extern "C" unsigned long UNK_005c787e;
extern "C" unsigned long UNK_005c78b2;
extern "C" unsigned long UNK_005c7932;
extern "C" unsigned long UNK_005c7950;
extern "C" unsigned long UNK_005c796e;
extern "C" unsigned long UNK_005c7990;
extern "C" unsigned long UNK_005c79c8;
extern "C" unsigned long UNK_005c7a0a;
extern "C" unsigned long UNK_005c7afc;
extern "C" unsigned long UNK_005c7d60;
extern "C" unsigned long UNK_005c7e7c;
extern "C" unsigned long UNK_005c83c2;
extern "C" unsigned long UNK_005c8434;
extern "C" unsigned long UNK_005c84c8;
extern "C" unsigned long UNK_005c852c;
extern "C" unsigned long UNK_005c85d4;
extern "C" unsigned long _UNK_005c70c8;
extern "C" unsigned long _UNK_005c70cc;
extern "C" unsigned long _UNK_005c70d0;
extern "C" unsigned long _UNK_005c7140;
extern "C" unsigned long _UNK_005c7144;
extern "C" unsigned long _UNK_005c71d4;
extern "C" unsigned long _UNK_005c71d8;
extern "C" unsigned long _UNK_005c7270;
extern "C" unsigned long _UNK_005c7274;
extern "C" unsigned long _UNK_005c7288;
extern "C" unsigned long _UNK_005c72b0;
extern "C" unsigned long _UNK_005c7630;
extern "C" unsigned long _UNK_005c7634;
extern "C" unsigned long _UNK_005c7638;
extern "C" unsigned long _UNK_005c763c;
extern "C" unsigned long _UNK_005c7640;
extern "C" unsigned long _UNK_005c7644;
extern "C" unsigned long _UNK_005c7648;
extern "C" unsigned long _UNK_005c764c;
extern "C" unsigned long _UNK_005c7650;
extern "C" unsigned long _UNK_005c7654;
extern "C" unsigned long _UNK_005c7658;
extern "C" unsigned long _UNK_005c7708;
extern "C" unsigned long _UNK_005c770c;
extern "C" unsigned long _UNK_005c7710;
extern "C" unsigned long _UNK_005c7900;
extern "C" unsigned long _UNK_005c7904;
extern "C" unsigned long _UNK_005c7908;
extern "C" unsigned long _UNK_005c79ac;
extern "C" unsigned long _UNK_005c79b0;
extern "C" unsigned long _UNK_005c79b4;
extern "C" unsigned long _UNK_005c79b8;
extern "C" unsigned long _UNK_005c7d00;
extern "C" unsigned long _UNK_005c7d04;
extern "C" unsigned long _UNK_005c7d08;
extern "C" unsigned long _UNK_005c7d0c;
extern "C" unsigned long _UNK_005c7d10;
extern "C" unsigned long _UNK_005c7d14;
extern "C" unsigned long _UNK_005c7d18;
extern "C" unsigned long _UNK_005c7d1c;
extern "C" unsigned long _UNK_005c7d20;
extern "C" unsigned long _UNK_005c7d24;
extern "C" unsigned long _UNK_005c7d28;
extern "C" unsigned long _UNK_005c7d2c;
extern "C" unsigned long _UNK_005c7d30;
extern "C" unsigned long _UNK_005c7d34;
extern "C" unsigned long _UNK_005c7d38;
extern "C" unsigned long _UNK_005c7d3c;
extern "C" unsigned long _UNK_005c7d40;
extern "C" unsigned long _UNK_005c7e54;
extern "C" unsigned long _UNK_005c7e58;
extern "C" unsigned long _UNK_005c7e5c;
extern "C" unsigned long _UNK_005c8160;
extern "C" unsigned long _UNK_005c8164;
extern "C" unsigned long _UNK_005c8168;
extern "C" unsigned long _UNK_005c816c;
extern "C" unsigned long _UNK_005c8170;
extern "C" unsigned long _UNK_005c8174;
extern "C" unsigned long _UNK_005c8178;
extern "C" unsigned long _UNK_005c817c;
extern "C" unsigned long _UNK_005c8180;
extern "C" unsigned long _UNK_005c8184;
extern "C" unsigned long _UNK_005c8188;
extern "C" unsigned long _UNK_005c8318;
extern "C" unsigned long _UNK_005c831c;
extern "C" unsigned long _UNK_005c8320;
extern "C" unsigned long _UNK_005c8324;
extern "C" unsigned long _UNK_005c8328;
extern "C" unsigned long _UNK_005c832c;
extern "C" unsigned long _UNK_005c840c;
extern "C" unsigned long _UNK_005c8500;
extern "C" unsigned long _UNK_005c8504;
extern "C" unsigned long _UNK_005c85f8;
extern "C" unsigned long _UNK_005c85fc;
extern "C" unsigned long g_005c7048;
extern "C" unsigned long g_005c704c;
extern "C" unsigned long g_005c707a;
extern "C" unsigned long g_005c70c8;
extern "C" unsigned long g_005c70cc;
extern "C" unsigned long g_005c70d0;
extern "C" unsigned long g_005c7134;
extern "C" unsigned long g_005c7136;
extern "C" unsigned long g_005c7140;
extern "C" unsigned long g_005c7144;
extern "C" unsigned long g_005c715a;
extern "C" unsigned long g_005c71a2;
extern "C" unsigned long g_005c71d4;
extern "C" unsigned long g_005c71d8;
extern "C" unsigned long g_005c720c;
extern "C" unsigned long g_005c7234;
extern "C" unsigned long g_005c7270;
extern "C" unsigned long g_005c7274;
extern "C" unsigned long g_005c7284;
extern "C" unsigned long g_005c7288;
extern "C" unsigned long g_005c72ac;
extern "C" unsigned long g_005c72b0;
extern "C" unsigned long g_005c72c4;
extern "C" unsigned long g_005c7630;
extern "C" unsigned long g_005c7634;
extern "C" unsigned long g_005c7638;
extern "C" unsigned long g_005c763c;
extern "C" unsigned long g_005c7640;
extern "C" unsigned long g_005c7644;
extern "C" unsigned long g_005c7648;
extern "C" unsigned long g_005c764c;
extern "C" unsigned long g_005c7650;
extern "C" unsigned long g_005c7654;
extern "C" unsigned long g_005c7658;
extern "C" unsigned long g_005c767c;
extern "C" unsigned long g_005c7696;
extern "C" unsigned long g_005c76c4;
extern "C" unsigned long g_005c7708;
extern "C" unsigned long g_005c770c;
extern "C" unsigned long g_005c7710;
extern "C" unsigned long g_005c784a;
extern "C" unsigned long g_005c787e;
extern "C" unsigned long g_005c78b2;
extern "C" unsigned long g_005c7900;
extern "C" unsigned long g_005c7904;
extern "C" unsigned long g_005c7908;
extern "C" unsigned long g_005c7932;
extern "C" unsigned long g_005c7950;
extern "C" unsigned long g_005c796e;
extern "C" unsigned long g_005c7990;
extern "C" unsigned long g_005c79ac;
extern "C" unsigned long g_005c79b0;
extern "C" unsigned long g_005c79b4;
extern "C" unsigned long g_005c79b8;
extern "C" unsigned long g_005c79c8;
extern "C" unsigned long g_005c7a0a;
extern "C" unsigned long g_005c7afc;
extern "C" unsigned long g_005c7d00;
extern "C" unsigned long g_005c7d04;
extern "C" unsigned long g_005c7d08;
extern "C" unsigned long g_005c7d0c;
extern "C" unsigned long g_005c7d10;
extern "C" unsigned long g_005c7d14;
extern "C" unsigned long g_005c7d18;
extern "C" unsigned long g_005c7d1c;
extern "C" unsigned long g_005c7d20;
extern "C" unsigned long g_005c7d24;
extern "C" unsigned long g_005c7d28;
extern "C" unsigned long g_005c7d2c;
extern "C" unsigned long g_005c7d30;
extern "C" unsigned long g_005c7d34;
extern "C" unsigned long g_005c7d38;
extern "C" unsigned long g_005c7d3c;
extern "C" unsigned long g_005c7d40;
extern "C" unsigned long g_005c7d60;
extern "C" unsigned long g_005c7e54;
extern "C" unsigned long g_005c7e58;
extern "C" unsigned long g_005c7e5c;
extern "C" unsigned long g_005c7e7c;
extern "C" unsigned long g_005c8160;
extern "C" unsigned long g_005c8164;
extern "C" unsigned long g_005c8168;
extern "C" unsigned long g_005c816c;
extern "C" unsigned long g_005c8170;
extern "C" unsigned long g_005c8174;
extern "C" unsigned long g_005c8178;
extern "C" unsigned long g_005c817c;
extern "C" unsigned long g_005c8180;
extern "C" unsigned long g_005c8184;
extern "C" unsigned long g_005c8188;
extern "C" unsigned long g_005c8318;
extern "C" unsigned long g_005c831c;
extern "C" unsigned long g_005c8320;
extern "C" unsigned long g_005c8324;
extern "C" unsigned long g_005c8328;
extern "C" unsigned long g_005c832c;
extern "C" unsigned long g_005c83c2;
extern "C" unsigned long g_005c840c;
extern "C" unsigned long g_005c8434;
extern "C" unsigned long g_005c84c8;
extern "C" unsigned long g_005c8500;
extern "C" unsigned long g_005c8504;
extern "C" unsigned long g_005c852c;
extern "C" unsigned long g_005c85d4;
extern "C" unsigned long g_005c85f8;
extern "C" unsigned long g_005c85fc;
undefined4 BLTimeLimitedCopyPresenter::getarrHero() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLTimeLimitedCopyPresenter::setarrHero(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

bool BLTimeLimitedCopyPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTimeLimitedCopyPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeLimitedCopyPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeLimitedCopyPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTimeLimitedCopyPresenter::tick(float p1)
{
  return;
}

void BLTimeLimitedCopyPresenter::onChangeHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xb);
  return;
}


void BLTimeLimitedCopyPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x9d);
  return;
}


void BLTimeLimitedCopyPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLTimeLimitedCopyPresenter::onIconBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLTimeLimitedCopyPresenter::BLTimeLimitedCopyPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005c715a + (intptr_t)(g_005c71d4))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(7)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005c71a2 + (intptr_t)(g_005c71d8)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTimeLimitedCopyPresenter::create(BLTimeLimitedCopyView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLTimeLimitedCopyPresenter::~BLTimeLimitedCopyPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005c720c + g_005c7270);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005c7234 + g_005c7274,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 8)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLTimeLimitedCopyPresenter::onShowItemInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((int)(intptr_t)p1 != 0) {
    uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005c7048 + (intptr_t)(g_005c70c8))));
    piVar2 = (int *)func_0079e55c(p1,uVar6,*(undefined4 *)((unsigned char *)((char *)&g_005c704c + (intptr_t)(g_005c70cc))),0,
                                    p4);
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
    piVar2 = (int *)((DataCacheManager *)this)->shareManager();
    uVar4 = (undefined4)((**(code **)(*piVar2 + 0x60))());
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar4)->objectForKey(uVar3));
    if (iVar5 != 0) {
      piVar2 = (int *)func_0079e55c(iVar5,uVar6,*(undefined4 *)((unsigned char *)((char *)&g_005c707a + (intptr_t)(g_005c70d0))),0);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x30))());
      if ((((iVar5 == 1) || (iVar5 = (**(code **)(*piVar2 + 0x30))(piVar2), iVar5 == 4)) ||
          (iVar5 = (**(code **)(*piVar2 + 0x30))(piVar2), iVar5 == 6)) ||
         (iVar5 = (**(code **)(*piVar2 + 0x30))(piVar2), iVar5 == 2)) {
        uVar3 = (undefined4)(((UIManager *)this)->shareManager());
        ((UIManager *)uVar3)->showItemDataInfo((ItemData*)piVar2);
      }
      return;
    }
  }
                    /* WARNING: Does not return;
  (*pcVar1)();
}

void BLTimeLimitedCopyPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)(intptr_t)(((UIManager *)uVar1)->getUIObject(0xae));
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->showUIById(0xae);
  }
  return;
}

void BLTimeLimitedCopyPresenter::onEnter()
{
  undefined4 uVar1;
  undefined *puVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  puVar2 = (unsigned char *)((char *)&g_005c7136 + (intptr_t)(g_005c7144));
  cocos2d::CCNotificationCenter::addObserver(uVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c7134 + (intptr_t)(g_005c7140))));
  return;
}

void BLTimeLimitedCopyPresenter::updataHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::onPlayStart(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::getEndLessHero(ENDLESSTYP p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::onSweepRead(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::showDropData()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  int iStack_90;
  undefined1 auStack_74 [4];
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  int aiStack_58 [5];
  undefined1 auStack_44 [40];
  int iStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(g_005c7d00);
  iStack_1c = (undefined4)(intptr_t)(**(int **)((unsigned char *)((char *)&g_005c79c8 + (intptr_t)(g_005c7d04)) + g_005c7d00));
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MissionEndLessData, 0> *)this)->instance());
  iVar11 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x50));
  piVar3 = (int *)::operator new(0x38);
  ::new ((void *)piVar3) BLDropData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BLDropData 的构造函数 -> vptr 垃圾 */
  iVar2 = (undefined4)(intptr_t)(((BLDropData *)piVar3)->init());
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar3)->autorelease();
  }
  piVar6 = aiStack_58 + 2;
  (**(code **)(*(int *)(piVar3) + (0x40)))(piVar6);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(piVar6);
  aiStack_58[2] = 0;
  aiStack_58[3] = 0;
  aiStack_58[4] = 0;
  if (iVar11 == 1) {
    aiStack_58[0] = g_005c7d10;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = g_005c7d14;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = g_005c7d18;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = 0x91;
code_r0x005c7aba:
    aiStack_58[0] = aiStack_58[0] << 1;
  }
  else {
    if (iVar11 != 0) {
      if (iVar11 != 2) goto code_r0x005c7a66;
      aiStack_58[0] = g_005c7d1c;
      ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
      aiStack_58[0] = g_005c7d20;
      ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
      aiStack_58[0] = g_005c7d24;
      ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
      aiStack_58[0] = 0x96;
      goto code_r0x005c7aba;
    }
    aiStack_58[0] = g_005c7d0c;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = 0xfa;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = 0xf0;
    ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
    aiStack_58[0] = 0xf5;
  }
  ((std::vector<int, std::allocator<int>> *)&piVar6)->push_back(*(int *)(void *)&aiStack_58);
code_r0x005c7a66:
  iStack_90 = 0;
  do {
    piVar3 = (int *)((DataCacheManager *)this)->shareManager();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(*(undefined4 *)(aiStack_58[2] + iStack_90 * 4)));
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005c79c8 + (intptr_t)(g_005c7d28)) + iVar1),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005c79c8 + (intptr_t)(g_005c7d2c)) + iVar1),0);
    }
    func_0079e45c(auStack_74,(unsigned char *)((char *)&g_005c7afc + (intptr_t)(g_005c7d30)),auStack_60);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_74);
    pcVar10 = *(code **)(*piVar6 + 0x4c);
    uVar7 = (undefined4)(func_0079e2ec(iStack_90 * 0x55 + -0x118));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_70[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar8 = (undefined4)(func_0079e4dc(uVar5,uVar8));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_64);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar10)(piVar6,auStack_60);
    pcVar10 = *(code **)(*piVar6 + 0x1d4);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_70[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_64);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar8));
    0 /* ctorZero */;
    (*pcVar10)(piVar6,auStack_60);
    (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar6,2);
    piVar9 = (int *)cocos2d::extension::CCControlButton::create();
    (**(code **)(*(int *)(piVar9) + (0x294)))(piVar9,0);
    (**(code **)(*(int *)(piVar3) + (0x58)))(auStack_70,piVar3);
    func_0079e45c(auStack_68,auStack_70[0],auStack_60);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_68);
    func_0079e2bc(auStack_70);
    (**(code **)(*(int *)(piVar9) + (0x30c)))(piVar9,uVar5,1);
    pcVar10 = *(code **)(*piVar9 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
    (*pcVar10)(piVar9,uVar5);
    pcVar10 = *(code **)(*piVar9 + 0x28c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_70[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_64);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar8));
    0 /* ctorZero */;
    (*pcVar10)(piVar9,auStack_60);
    (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar9,2);
    (**(code **)(*(int *)(piVar9) + (0x11c)))(piVar9,*(undefined4 *)(aiStack_58[2] + iStack_90 * 4));
    aiStack_58[0] = *(int *)((unsigned char *)((char *)&g_005c79c8 + (intptr_t)(g_005c7d40)) + iVar1);
    aiStack_58[1] = 0;
    (**(code **)(*(int *)(piVar9) + (0x254)))(piVar9,((int)this),aiStack_58[0],0,0x20);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
    if (iVar2 == 6) {
      func_0079e34c(auStack_44,0,0x28);
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
      func_0079e904(auStack_44,(unsigned char *)((char *)&g_005c7d60 + (intptr_t)(g_005c7e54)),uVar5);
      func_0079e45c(auStack_60,auStack_44,auStack_68);
      piVar3 = (int *)0 /* ctorZero */;
      func_0079e2bc(auStack_60);
      pcVar10 = *(code **)(*piVar3 + 0x1d4);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_70[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar7 = (undefined4)(func_0079e4dc(uVar5,uVar7));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_64);
      cocos2d::CCDirector::sharedDirector();
      uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar8));
      0 /* ctorZero */;
      (*pcVar10)(piVar3,auStack_60);
      (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar3,2);
      pcVar10 = *(code **)(*piVar3 + 0x4c);
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x50)))(piVar9));
      (*pcVar10)(piVar3,uVar5);
    }
    iStack_90 = (undefined4)(intptr_t)(iStack_90 + 1);
  } while (iStack_90 != 4);
  ((cocos2d::CCObject *)uVar4)->release();
  ((std::vector<int, std::allocator<int>> *)aiStack_58 + 2)->~vector();
  if (iStack_1c == **(int **)((unsigned char *)((char *)&g_005c79c8 + (intptr_t)(g_005c7e5c)) + iVar1)) {
    return;
  }
  func_0079e914();
  func_0079e2bc(piVar9);
  do {
    func_0079e30c();
    func_0079e2bc(piVar9);
    ((std::vector<int, std::allocator<int>> *)aiStack_58 + 2)->~vector();
  } while( true );
}

void BLTimeLimitedCopyPresenter::initWithView(BLTimeLimitedCopyView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::onOrdi(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::onMed(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTimeLimitedCopyPresenter::onDiff(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

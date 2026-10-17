#include "BLCampaignPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLCampaignInfoItemPresenter.h"
#include "BLCampaignInfoItemView.h"
#include "BLCampaignTotalItemView.h"
#include "BLCampaignView.h"
#include "BLFileUtils.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "CampaignChildInfo.h"
#include "CampaignData.h"
#include "CampaignInfo.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PairingDownPng.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005000e0;
extern "C" unsigned long UNK_005000f8;
extern "C" unsigned long UNK_00500110;
extern "C" unsigned long UNK_00500128;
extern "C" unsigned long UNK_00500180;
extern "C" unsigned long UNK_005001a6;
extern "C" unsigned long UNK_005001ec;
extern "C" unsigned long UNK_00500214;
extern "C" unsigned long UNK_005002bc;
extern "C" unsigned long UNK_005002f6;
extern "C" unsigned long UNK_005002f8;
extern "C" unsigned long UNK_00500326;
extern "C" unsigned long UNK_0050036a;
extern "C" unsigned long UNK_00500392;
extern "C" unsigned long UNK_005003ae;
extern "C" unsigned long UNK_005003ca;
extern "C" unsigned long UNK_005003e6;
extern "C" unsigned long UNK_00500402;
extern "C" unsigned long UNK_00500596;
extern "C" unsigned long UNK_0050068a;
extern "C" unsigned long UNK_0050068b;
extern "C" unsigned long UNK_0050068c;
extern "C" unsigned long UNK_005006a8;
extern "C" unsigned long UNK_005006d4;
extern "C" unsigned long UNK_0050078a;
extern "C" unsigned long UNK_00500878;
extern "C" unsigned long UNK_0050099c;
extern "C" unsigned long UNK_00500aa4;
extern "C" unsigned long UNK_00500b18;
extern "C" unsigned long UNK_00500c4e;
extern "C" unsigned long UNK_00500ce4;
extern "C" unsigned long UNK_00500ed4;
extern "C" unsigned long _UNK_005000e4;
extern "C" unsigned long _UNK_005000fc;
extern "C" unsigned long _UNK_00500114;
extern "C" unsigned long _UNK_0050012c;
extern "C" unsigned long _UNK_005001d8;
extern "C" unsigned long _UNK_005001dc;
extern "C" unsigned long _UNK_005001f0;
extern "C" unsigned long _UNK_00500218;
extern "C" unsigned long _UNK_005002a0;
extern "C" unsigned long _UNK_005002a4;
extern "C" unsigned long _UNK_005002a8;
extern "C" unsigned long _UNK_005002ac;
extern "C" unsigned long _UNK_005002c0;
extern "C" unsigned long _UNK_0050030c;
extern "C" unsigned long _UNK_00500310;
extern "C" unsigned long _UNK_0050042c;
extern "C" unsigned long _UNK_00500430;
extern "C" unsigned long _UNK_00500434;
extern "C" unsigned long _UNK_00500438;
extern "C" unsigned long _UNK_0050043c;
extern "C" unsigned long _UNK_00500440;
extern "C" unsigned long _UNK_00500444;
extern "C" unsigned long _UNK_00500448;
extern "C" unsigned long _UNK_0050044c;
extern "C" unsigned long _UNK_00500450;
extern "C" unsigned long _UNK_00500454;
extern "C" unsigned long _UNK_00500458;
extern "C" unsigned long _UNK_0050045c;
extern "C" unsigned long _UNK_00500910;
extern "C" unsigned long _UNK_00500914;
extern "C" unsigned long _UNK_00500918;
extern "C" unsigned long _UNK_0050091c;
extern "C" unsigned long _UNK_00500920;
extern "C" unsigned long _UNK_00500924;
extern "C" unsigned long _UNK_0050098c;
extern "C" unsigned long _UNK_005009a0;
extern "C" unsigned long _UNK_00500aa8;
extern "C" unsigned long _UNK_00500c34;
extern "C" unsigned long _UNK_00500c38;
extern "C" unsigned long _UNK_00500c3c;
extern "C" unsigned long _UNK_00500cb8;
extern "C" unsigned long _UNK_00500cbc;
extern "C" unsigned long _UNK_00500eac;
extern "C" unsigned long _UNK_00500eb0;
extern "C" unsigned long _UNK_00500eb4;
extern "C" unsigned long _UNK_0050113c;
extern "C" unsigned long _UNK_00501140;
extern "C" unsigned long _UNK_00501144;
extern "C" unsigned long _UNK_00501148;
extern "C" unsigned long g_005000e0;
extern "C" unsigned long g_005000e4;
extern "C" unsigned long g_005000f8;
extern "C" unsigned long g_005000fc;
extern "C" unsigned long g_00500110;
extern "C" unsigned long g_00500114;
extern "C" unsigned long g_00500128;
extern "C" unsigned long g_0050012c;
extern "C" unsigned long g_00500180;
extern "C" unsigned long g_005001a6;
extern "C" unsigned long g_005001d8;
extern "C" unsigned long g_005001dc;
extern "C" unsigned long g_005001ec;
extern "C" unsigned long g_005001f0;
extern "C" unsigned long g_00500214;
extern "C" unsigned long g_00500218;
extern "C" unsigned long g_005002a0;
extern "C" unsigned long g_005002a4;
extern "C" unsigned long g_005002a8;
extern "C" unsigned long g_005002ac;
extern "C" unsigned long g_005002bc;
extern "C" unsigned long g_005002c0;
extern "C" unsigned long g_005002f6;
extern "C" unsigned long g_005002f8;
extern "C" unsigned long g_0050030c;
extern "C" unsigned long g_00500310;
extern "C" unsigned long g_00500326;
extern "C" unsigned long g_0050036a;
extern "C" unsigned long g_00500392;
extern "C" unsigned long g_005003ae;
extern "C" unsigned long g_005003ca;
extern "C" unsigned long g_005003e6;
extern "C" unsigned long g_00500402;
extern "C" unsigned long g_0050042c;
extern "C" unsigned long g_00500430;
extern "C" unsigned long g_00500434;
extern "C" unsigned long g_00500438;
extern "C" unsigned long g_0050043c;
extern "C" unsigned long g_00500440;
extern "C" unsigned long g_00500444;
extern "C" unsigned long g_00500448;
extern "C" unsigned long g_0050044c;
extern "C" unsigned long g_00500450;
extern "C" unsigned long g_00500454;
extern "C" unsigned long g_00500458;
extern "C" unsigned long g_0050045c;
extern "C" unsigned long g_00500596;
extern "C" unsigned long g_0050068a;
extern "C" unsigned long g_0050068b;
extern "C" unsigned long g_0050068c;
extern "C" unsigned long g_005006a8;
extern "C" unsigned long g_005006d4;
extern "C" unsigned long g_0050078a;
extern "C" unsigned long g_00500878;
extern "C" unsigned long g_00500910;
extern "C" unsigned long g_00500914;
extern "C" unsigned long g_00500918;
extern "C" unsigned long g_0050091c;
extern "C" unsigned long g_00500920;
extern "C" unsigned long g_00500924;
extern "C" unsigned long g_0050098c;
extern "C" unsigned long g_0050099c;
extern "C" unsigned long g_005009a0;
extern "C" unsigned long g_00500aa4;
extern "C" unsigned long g_00500aa8;
extern "C" unsigned long g_00500b18;
extern "C" unsigned long g_00500c34;
extern "C" unsigned long g_00500c38;
extern "C" unsigned long g_00500c3c;
extern "C" unsigned long g_00500c4e;
extern "C" unsigned long g_00500cb8;
extern "C" unsigned long g_00500cbc;
extern "C" unsigned long g_00500ce4;
extern "C" unsigned long g_00500eac;
extern "C" unsigned long g_00500eb0;
extern "C" unsigned long g_00500eb4;
extern "C" unsigned long g_00500ed4;
extern "C" unsigned long g_0050113c;
extern "C" unsigned long g_00501140;
extern "C" unsigned long g_00501144;
extern "C" unsigned long g_00501148;
bool BLCampaignPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCampaignPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLCampaignPresenter::~BLCampaignPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00500180 + g_005001d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005001a6 + g_005001dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLCampaignPresenter::onRefreshImg()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BLCampaignView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewInfo());
  ((BLTableView *)uVar1)->reloadData(0, 1);
  return;
}

void BLCampaignPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x7e);
  return;
}

void BLCampaignPresenter::onListenRewardId(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_005002f6 + g_00500310),
                              *(undefined4 *)(&g_005002f8 + g_0050030c),0), iVar1 != 0)) {
    *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}


undefined4 BLCampaignPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLCampaignPresenter::onEnter()
{
  return;
}

void BLCampaignPresenter::onExit()
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

void BLCampaignPresenter::tick(float p1)
{
  return;
}

void BLCampaignPresenter::onClickItem(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLCampaignPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  uStack_20 = (undefined4)((int *)((int)this));
  iStack_1c = (undefined4)(intptr_t)p1;
  iStack_18 = p3;
  uStack_14 = (undefined4)(p4);
  iVar1 = ((BLCampaignView *)*(undefined4 *)(p1 + 0x20))->getTableViewTotal();
  if (p3 == iVar1) {
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
    uVar4 = (undefined4)(g_005002a4);
    uVar2 = (undefined4)(g_005002a0);
  }
  else {
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
    uVar4 = (undefined4)(g_005002ac);
    uVar2 = (undefined4)(g_005002a8);
  }
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_14);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
  0 /* ctorZero */;
  return;
}

BLCampaignPresenter::BLCampaignPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLCampaignPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((BLCampaignView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTotal());
  if ((int)(intptr_t)p1 == iVar1) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
    iVar1 = (undefined4)(intptr_t)(g_0050098c * (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 3));
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 4) + *(int *)(((int)this) + 0x24) * 0x58);
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) >> 2);
  }
  return iVar1;
}

void BLCampaignPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar1 = (undefined4)(intptr_t)(((BLCampaignView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTotal());
  if ((int)(intptr_t)(int)(intptr_t)p1 == iVar1) {
    if (*(int *)(((int)this) + 0x24) != p3) {
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
      uVar3 = (undefined4)(*(undefined4 *)(p3 * 0x58 + *(int *)(iVar1 + 4)));
      *(int *)(((int)this) + 0x24) = p3;
      *(undefined4 *)(((int)this) + 0x28) = uVar3;
      uVar3 = (undefined4)(((BLCampaignView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewInfo());
      ((BLTableView *)(uVar3))->reloadData(0, 1);
    }
    piVar2 = (int *)((BLCampaignView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabDes();
    pcVar4 = *(code **)(*piVar2 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
    func_0079e53c(auStack_20,*(int *)(iVar1 + 4) + p3 * 0x58 + 0xc);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar4)(piVar2,auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
    piVar2 = (int *)((BLCampaignView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabADTime();
    pcVar4 = *(code **)(*piVar2 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
    func_0079e53c(auStack_20,*(int *)(iVar1 + 4) + p3 * 0x58 + 0x38);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar4)(piVar2,auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  return;
}

void BLCampaignPresenter::freshenActivity()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignPresenter::onRefreshCampaign()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLCampaignPresenter::initWithView(BLCampaignView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLCampaignPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignPresenter::onGetRewardSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

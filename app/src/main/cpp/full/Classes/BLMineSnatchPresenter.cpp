#include "BLMineSnatchPresenter.h"
#include "MineDealData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "BLForwards.h"
#include "BLMineSnatchView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "MineData.h"
#include "MineitemData.h"
#include "MissionSelectHeroData.h"
#include "PracticeTime.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a0db8;
extern "C" unsigned long UNK_005a0dd0;
extern "C" unsigned long UNK_005a0de8;
extern "C" unsigned long UNK_005a0e58;
extern "C" unsigned long UNK_005a0e72;
extern "C" unsigned long UNK_005a0eb8;
extern "C" unsigned long UNK_005a0ee0;
extern "C" unsigned long UNK_005a0f66;
extern "C" unsigned long UNK_005a0f80;
extern "C" unsigned long UNK_005a0fa0;
extern "C" unsigned long UNK_005a0fc0;
extern "C" unsigned long UNK_005a0fe0;
extern "C" unsigned long UNK_005a1014;
extern "C" unsigned long UNK_005a10aa;
extern "C" unsigned long UNK_005a10d4;
extern "C" unsigned long UNK_005a1542;
extern "C" unsigned long UNK_005a159c;
extern "C" unsigned long UNK_005a15ec;
extern "C" unsigned long UNK_005a17d2;
extern "C" unsigned long UNK_005a183a;
extern "C" unsigned long UNK_005a1892;
extern "C" unsigned long UNK_005a18dc;
extern "C" unsigned long UNK_005a1c5c;
extern "C" unsigned long UNK_005a1ce4;
extern "C" unsigned long _UNK_005a0dbc;
extern "C" unsigned long _UNK_005a0dd4;
extern "C" unsigned long _UNK_005a0dec;
extern "C" unsigned long _UNK_005a0ea4;
extern "C" unsigned long _UNK_005a0ea8;
extern "C" unsigned long _UNK_005a0ebc;
extern "C" unsigned long _UNK_005a0ee4;
extern "C" unsigned long _UNK_005a0ef8;
extern "C" unsigned long _UNK_005a1040;
extern "C" unsigned long _UNK_005a1044;
extern "C" unsigned long _UNK_005a1048;
extern "C" unsigned long _UNK_005a104c;
extern "C" unsigned long _UNK_005a1050;
extern "C" unsigned long _UNK_005a1054;
extern "C" unsigned long _UNK_005a1058;
extern "C" unsigned long _UNK_005a105c;
extern "C" unsigned long _UNK_005a1060;
extern "C" unsigned long _UNK_005a1064;
extern "C" unsigned long _UNK_005a1068;
extern "C" unsigned long _UNK_005a10b4;
extern "C" unsigned long _UNK_005a10b8;
extern "C" unsigned long _UNK_005a10fc;
extern "C" unsigned long _UNK_005a15cc;
extern "C" unsigned long _UNK_005a15d0;
extern "C" unsigned long _UNK_005a176c;
extern "C" unsigned long _UNK_005a1770;
extern "C" unsigned long _UNK_005a1774;
extern "C" unsigned long _UNK_005a1778;
extern "C" unsigned long _UNK_005a177c;
extern "C" unsigned long _UNK_005a1780;
extern "C" unsigned long _UNK_005a1784;
extern "C" unsigned long _UNK_005a1788;
extern "C" unsigned long _UNK_005a178c;
extern "C" unsigned long _UNK_005a1790;
extern "C" unsigned long _UNK_005a1968;
extern "C" unsigned long _UNK_005a196c;
extern "C" unsigned long _UNK_005a1970;
extern "C" unsigned long _UNK_005a1974;
extern "C" unsigned long _UNK_005a1c8c;
extern "C" unsigned long _UNK_005a1d04;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005a0db8;
extern "C" unsigned long g_005a0dbc;
extern "C" unsigned long g_005a0dd0;
extern "C" unsigned long g_005a0dd4;
extern "C" unsigned long g_005a0de8;
extern "C" unsigned long g_005a0dec;
extern "C" unsigned long g_005a0e58;
extern "C" unsigned long g_005a0e72;
extern "C" unsigned long g_005a0ea4;
extern "C" unsigned long g_005a0ea8;
extern "C" unsigned long g_005a0eb8;
extern "C" unsigned long g_005a0ebc;
extern "C" unsigned long g_005a0ee0;
extern "C" unsigned long g_005a0ee4;
extern "C" unsigned long g_005a0ef8;
extern "C" unsigned long g_005a0f66;
extern "C" unsigned long g_005a0f80;
extern "C" unsigned long g_005a0fa0;
extern "C" unsigned long g_005a0fc0;
extern "C" unsigned long g_005a0fe0;
extern "C" unsigned long g_005a1014;
extern "C" unsigned long g_005a1040;
extern "C" unsigned long g_005a1044;
extern "C" unsigned long g_005a1048;
extern "C" unsigned long g_005a104c;
extern "C" unsigned long g_005a1050;
extern "C" unsigned long g_005a1054;
extern "C" unsigned long g_005a1058;
extern "C" unsigned long g_005a105c;
extern "C" unsigned long g_005a1060;
extern "C" unsigned long g_005a1064;
extern "C" unsigned long g_005a1068;
extern "C" unsigned long g_005a10aa;
extern "C" unsigned long g_005a10b4;
extern "C" unsigned long g_005a10b8;
extern "C" unsigned long g_005a10d4;
extern "C" unsigned long g_005a10fc;
extern "C" unsigned long g_005a1542;
extern "C" unsigned long g_005a159c;
extern "C" unsigned long g_005a15cc;
extern "C" unsigned long g_005a15d0;
extern "C" unsigned long g_005a15ec;
extern "C" unsigned long g_005a176c;
extern "C" unsigned long g_005a1770;
extern "C" unsigned long g_005a1774;
extern "C" unsigned long g_005a1778;
extern "C" unsigned long g_005a177c;
extern "C" unsigned long g_005a1780;
extern "C" unsigned long g_005a1784;
extern "C" unsigned long g_005a1788;
extern "C" unsigned long g_005a178c;
extern "C" unsigned long g_005a1790;
extern "C" unsigned long g_005a17d2;
extern "C" unsigned long g_005a183a;
extern "C" unsigned long g_005a1892;
extern "C" unsigned long g_005a18dc;
extern "C" unsigned long g_005a1968;
extern "C" unsigned long g_005a196c;
extern "C" unsigned long g_005a1970;
extern "C" unsigned long g_005a1974;
extern "C" unsigned long g_005a1c5c;
extern "C" unsigned long g_005a1c8c;
extern "C" unsigned long g_005a1ce4;
extern "C" unsigned long g_005a1d04;
bool BLMineSnatchPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineSnatchPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLMineSnatchPresenter::~BLMineSnatchPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a0e58 + g_005a0ea4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a0e72 + g_005a0ea8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineSnatchPresenter::showSnatch()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_005a0ef8);
  return;
}



undefined4 BLMineSnatchPresenter::create(BLMineSnatchView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}







void BLMineSnatchPresenter::updateHisNumData(cocos2d::CCObject* p1)
{
  BLMineSnatchPresenter::updateNum();
  return;
}

// ===== 修复: 补回被误删的函数占位 (18) =====
void BLMineSnatchPresenter::onHero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x108)),(intptr_t)0);
  if (iVar2 == 0) {
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x38)))();
    (**(code **)(*(int *)(piVar3) + (0xac)))(piVar3,2,extraout_r2,*(code **)(*piVar3 + 0xac),in_r3);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x108);
  }
  return;
}

BLMineSnatchPresenter::BLMineSnatchPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::updateMine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::onRecord(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->GetDataFromNet(uVar1, 8, 1);
  return;
}

void BLMineSnatchPresenter::updateNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLMineSnatchPresenter::initWithView(BLMineSnatchView* p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  iVar2 = (undefined4)(intptr_t)(g_005a176c);
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1770)) + g_005a176c),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1774)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1778)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a177c)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1780)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x13c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1784)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x140);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1788)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x144);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a178c)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x148);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a15ec + (intptr_t)(g_005a1790)) + iVar2),0,0x20);
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(((MissionSelectHeroData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  ((MissionSelectHeroData *)piVar1)->initWithMissionType(10);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar3 + 0x44))(piVar3,piVar1);
  BLMineSnatchPresenter::updateMine();
  BLMineSnatchPresenter::updateNum();
  return 1;
}

void BLMineSnatchPresenter::onSnatchAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::onMine1(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_9c [3];
  undefined1 auStack_90 [128];
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->getsnatchminedata();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  ((MineitemData *)(iVar2 + 0x10))->operator=(*(const MineitemData *)(void *)auStack_90);
  ((MineitemData *)(auStack_90))->~MineitemData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x107)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x107);
  }
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(auStack_9c))->~vector();
  return;
}

void BLMineSnatchPresenter::onMine2(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int aiStack_9c [3];
  undefined1 auStack_90 [128];
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->getsnatchminedata();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  ((MineitemData *)(iVar2 + 0x10))->operator=(*(const MineitemData *)(void *)auStack_90);
  ((MineitemData *)(auStack_90))->~MineitemData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x107)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x107);
  }
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(aiStack_9c))->~vector();
  return;
}

void BLMineSnatchPresenter::onMine3(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int aiStack_9c [3];
  undefined1 auStack_90 [128];
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->getsnatchminedata();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  ((MineitemData *)(iVar2 + 0x10))->operator=(*(const MineitemData *)(void *)auStack_90);
  ((MineitemData *)(auStack_90))->~MineitemData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x107)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x107);
  }
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(aiStack_9c))->~vector();
  return;
}

void BLMineSnatchPresenter::onMine4(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int aiStack_9c [3];
  undefined1 auStack_90 [128];
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->getsnatchminedata();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  ((MineitemData *)(iVar2 + 0x10))->operator=(*(const MineitemData *)(void *)auStack_90);
  ((MineitemData *)(auStack_90))->~MineitemData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x107)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x107);
  }
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(aiStack_9c))->~vector();
  return;
}

void BLMineSnatchPresenter::onMine5(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int aiStack_9c [3];
  undefined1 auStack_90 [128];
  
  uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  ((MineData *)this)->getsnatchminedata();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  ((MineitemData *)(iVar2 + 0x10))->operator=(*(const MineitemData *)(void *)auStack_90);
  ((MineitemData *)(auStack_90))->~MineitemData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x107)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x107);
  }
  ((std::vector<MineitemData, std::allocator<MineitemData>> *)(aiStack_9c))->~vector();
  return;
}

void BLMineSnatchPresenter::updateNumData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::onRefresh(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchPresenter::updateMineData(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((sir::singleton<PracticeTime, 0> *)this)->instance());
  ((PracticeTime *)uVar1)->SetMineTime(0x1e);
  BLMineSnatchPresenter::updateMine();
  return;
}

void BLMineSnatchPresenter::updateTime(float p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<PracticeTime, 0> *)this)->instance());
  iVar1 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*(undefined4 *)(iVar1 + 0x30))))));
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14c);
  if (iVar1 < 1) {
    if (piVar2 != 0) {
      (**(code **)(*piVar2 + 0x90))(piVar2,0);
    }
  }
  else {
    if (piVar2 != 0) {
      (**(code **)(*piVar2 + 0x90))(piVar2,1);
    }
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14c);
    pcVar4 = *(code **)(*piVar2 + 0x234);
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a1ce4 + (intptr_t)(g_005a1d04)), iVar1);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar4)(piVar2,uVar3);
  }
  return;
}

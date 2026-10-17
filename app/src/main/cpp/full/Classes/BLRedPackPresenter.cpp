#include "BLRedPackPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLRedPackView.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "LuckShopData.h"
#include "RedPackData.h"
#include "RedPackInfo.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00647c6c;
extern "C" unsigned long UNK_00647c84;
extern "C" unsigned long UNK_00647c9c;
extern "C" unsigned long UNK_00647cb4;
extern "C" unsigned long UNK_00647ccc;
extern "C" unsigned long UNK_00647d28;
extern "C" unsigned long UNK_00647d4e;
extern "C" unsigned long UNK_00647d94;
extern "C" unsigned long UNK_00647dbc;
extern "C" unsigned long UNK_00647de8;
extern "C" unsigned long UNK_00647df8;
extern "C" unsigned long UNK_00647e36;
extern "C" unsigned long UNK_00647e70;
extern "C" unsigned long UNK_00647ede;
extern "C" unsigned long UNK_00647ee0;
extern "C" unsigned long UNK_00647ef8;
extern "C" unsigned long UNK_00647efa;
extern "C" unsigned long UNK_00647f12;
extern "C" unsigned long UNK_00647f14;
extern "C" unsigned long UNK_00647f2c;
extern "C" unsigned long UNK_00647f2e;
extern "C" unsigned long UNK_00647fd4;
extern "C" unsigned long UNK_00648020;
extern "C" unsigned long UNK_00648044;
extern "C" unsigned long UNK_00648068;
extern "C" unsigned long UNK_0064808a;
extern "C" unsigned long UNK_006480ac;
extern "C" unsigned long UNK_006480ce;
extern "C" unsigned long UNK_006480f0;
extern "C" unsigned long UNK_0064814a;
extern "C" unsigned long UNK_0064816a;
extern "C" unsigned long UNK_00648188;
extern "C" unsigned long UNK_006481a6;
extern "C" unsigned long UNK_00648248;
extern "C" unsigned long UNK_00648274;
extern "C" unsigned long UNK_006482f4;
extern "C" unsigned long UNK_00648320;
extern "C" unsigned long UNK_006483b8;
extern "C" unsigned long UNK_006483ea;
extern "C" unsigned long UNK_0064840e;
extern "C" unsigned long UNK_0064846a;
extern "C" unsigned long UNK_0064848a;
extern "C" unsigned long UNK_006484e4;
extern "C" unsigned long UNK_0064851a;
extern "C" unsigned long _UNK_00647c70;
extern "C" unsigned long _UNK_00647c88;
extern "C" unsigned long _UNK_00647ca0;
extern "C" unsigned long _UNK_00647cb8;
extern "C" unsigned long _UNK_00647cd0;
extern "C" unsigned long _UNK_00647d80;
extern "C" unsigned long _UNK_00647d84;
extern "C" unsigned long _UNK_00647d98;
extern "C" unsigned long _UNK_00647dc0;
extern "C" unsigned long _UNK_00647dd4;
extern "C" unsigned long _UNK_00647dd8;
extern "C" unsigned long _UNK_00647dec;
extern "C" unsigned long _UNK_00647e08;
extern "C" unsigned long _UNK_00647e9c;
extern "C" unsigned long _UNK_00647ea0;
extern "C" unsigned long _UNK_00647f3c;
extern "C" unsigned long _UNK_00647f40;
extern "C" unsigned long _UNK_00647f44;
extern "C" unsigned long _UNK_00647f48;
extern "C" unsigned long _UNK_00647f4c;
extern "C" unsigned long _UNK_00647f50;
extern "C" unsigned long _UNK_00647f54;
extern "C" unsigned long _UNK_00647f58;
extern "C" unsigned long _UNK_00647fd8;
extern "C" unsigned long _UNK_00648114;
extern "C" unsigned long _UNK_00648118;
extern "C" unsigned long _UNK_0064811c;
extern "C" unsigned long _UNK_00648120;
extern "C" unsigned long _UNK_00648124;
extern "C" unsigned long _UNK_00648128;
extern "C" unsigned long _UNK_0064812c;
extern "C" unsigned long _UNK_00648208;
extern "C" unsigned long _UNK_0064820c;
extern "C" unsigned long _UNK_00648210;
extern "C" unsigned long _UNK_00648214;
extern "C" unsigned long _UNK_006482bc;
extern "C" unsigned long _UNK_006482c0;
extern "C" unsigned long _UNK_0064837c;
extern "C" unsigned long _UNK_00648380;
extern "C" unsigned long _UNK_00648434;
extern "C" unsigned long _UNK_00648438;
extern "C" unsigned long _UNK_0064843c;
extern "C" unsigned long _UNK_006484b4;
extern "C" unsigned long _UNK_006484b8;
extern "C" unsigned long _UNK_00648508;
extern "C" unsigned long _UNK_006486d8;
extern "C" unsigned long _UNK_006486dc;
extern "C" unsigned long _UNK_006486e0;
extern "C" unsigned long g_00647c6c;
extern "C" unsigned long g_00647c70;
extern "C" unsigned long g_00647c84;
extern "C" unsigned long g_00647c88;
extern "C" unsigned long g_00647c9c;
extern "C" unsigned long g_00647ca0;
extern "C" unsigned long g_00647cb4;
extern "C" unsigned long g_00647cb8;
extern "C" unsigned long g_00647ccc;
extern "C" unsigned long g_00647cd0;
extern "C" unsigned long g_00647d28;
extern "C" unsigned long g_00647d4e;
extern "C" unsigned long g_00647d80;
extern "C" unsigned long g_00647d84;
extern "C" unsigned long g_00647d94;
extern "C" unsigned long g_00647d98;
extern "C" unsigned long g_00647dbc;
extern "C" unsigned long g_00647dc0;
extern "C" unsigned long g_00647dd4;
extern "C" unsigned long g_00647dd8;
extern "C" unsigned long g_00647de8;
extern "C" unsigned long g_00647dec;
extern "C" unsigned long g_00647df8;
extern "C" unsigned long g_00647e08;
extern "C" unsigned long g_00647e36;
extern "C" unsigned long g_00647e70;
extern "C" unsigned long g_00647e9c;
extern "C" unsigned long g_00647ea0;
extern "C" unsigned long g_00647ede;
extern "C" unsigned long g_00647ee0;
extern "C" unsigned long g_00647ef8;
extern "C" unsigned long g_00647efa;
extern "C" unsigned long g_00647f12;
extern "C" unsigned long g_00647f14;
extern "C" unsigned long g_00647f2c;
extern "C" unsigned long g_00647f2e;
extern "C" unsigned long g_00647f3c;
extern "C" unsigned long g_00647f40;
extern "C" unsigned long g_00647f44;
extern "C" unsigned long g_00647f48;
extern "C" unsigned long g_00647f4c;
extern "C" unsigned long g_00647f50;
extern "C" unsigned long g_00647f54;
extern "C" unsigned long g_00647f58;
extern "C" unsigned long g_00647fd4;
extern "C" unsigned long g_00647fd8;
extern "C" unsigned long g_00648020;
extern "C" unsigned long g_00648044;
extern "C" unsigned long g_00648068;
extern "C" unsigned long g_0064808a;
extern "C" unsigned long g_006480ac;
extern "C" unsigned long g_006480ce;
extern "C" unsigned long g_006480f0;
extern "C" unsigned long g_00648114;
extern "C" unsigned long g_00648118;
extern "C" unsigned long g_0064811c;
extern "C" unsigned long g_00648120;
extern "C" unsigned long g_00648124;
extern "C" unsigned long g_00648128;
extern "C" unsigned long g_0064812c;
extern "C" unsigned long g_0064814a;
extern "C" unsigned long g_0064816a;
extern "C" unsigned long g_00648188;
extern "C" unsigned long g_006481a6;
extern "C" unsigned long g_00648208;
extern "C" unsigned long g_0064820c;
extern "C" unsigned long g_00648210;
extern "C" unsigned long g_00648214;
extern "C" unsigned long g_00648248;
extern "C" unsigned long g_00648274;
extern "C" unsigned long g_006482bc;
extern "C" unsigned long g_006482c0;
extern "C" unsigned long g_006482f4;
extern "C" unsigned long g_00648320;
extern "C" unsigned long g_0064837c;
extern "C" unsigned long g_00648380;
extern "C" unsigned long g_006483b8;
extern "C" unsigned long g_006483ea;
extern "C" unsigned long g_0064840e;
extern "C" unsigned long g_00648434;
extern "C" unsigned long g_00648438;
extern "C" unsigned long g_0064843c;
extern "C" unsigned long g_0064846a;
extern "C" unsigned long g_0064848a;
extern "C" unsigned long g_006484b4;
extern "C" unsigned long g_006484b8;
extern "C" unsigned long g_006484e4;
extern "C" unsigned long g_00648508;
extern "C" unsigned long g_0064851a;
extern "C" unsigned long g_006486d8;
extern "C" unsigned long g_006486dc;
extern "C" unsigned long g_006486e0;
bool BLRedPackPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRedPackPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLRedPackPresenter::tick(float p1)
{
  return;
}

BLRedPackPresenter::~BLRedPackPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00647d28 + g_00647d80);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00647d4e + g_00647d84,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLRedPackPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLRedPackPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xac);
  return;
}


BLRedPackPresenter::BLRedPackPresenter()
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
  iVar3 = *(int *)(&g_00647e36 + g_00647e9c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00647e70 + g_00647ea0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRedPackPresenter::create(BLRedPackView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLRedPackPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLRedPackPresenter::onOpenLuckShop()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x9f)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x9f);
  }
  return;
}

void BLRedPackPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLRedPackPresenter::numOfCellItem(BLTableView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRedPackPresenter::initView()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<RedPackData, 0> *)this)->instance());
  0 /* ctorZero */;
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x130);
  (**(code **)(*piVar2 + 0x234))(piVar2,uStack_88);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
  (**(code **)(*piVar2 + 0x234))(piVar2,uStack_84);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00648020 + (intptr_t)(g_00648114)), uStack_78, uStack_80);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00648044 + (intptr_t)(g_00648118)), uStack_58, uStack_68);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00648068 + (intptr_t)(g_0064811c)), uStack_30);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x13c);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064808a + (intptr_t)(g_00648120)), uStack_28);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x124);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006480ac + (intptr_t)(g_00648124)), uStack_20);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x128);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006480ce + (intptr_t)(g_00648128)), uStack_1c);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
  pcVar4 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006480f0 + (intptr_t)(g_0064812c)), uStack_60);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar2,uVar3);
  ((RedPackInfo *)auStack_98)->~RedPackInfo();
  return;
}

undefined4 BLRedPackPresenter::initWithView(BLRedPackView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0064814a + (intptr_t)(g_00648208))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0064816a + (intptr_t)(g_0064820c))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00648188 + (intptr_t)(g_00648210))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006481a6 + (intptr_t)(g_00648214))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x140);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x140);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x140);
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x140))->reloadData(0, 1);
  BLRedPackPresenter::initView();
  return 1;
}

void BLRedPackPresenter::onRed1(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRedPackPresenter::onRed2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRedPackPresenter::onOpenRedPack()
{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_30;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<RedPackData, 0> *)this)->instance());
  0 /* ctorZero */;
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0xad)),(intptr_t)0);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->showUIById(0xad);
  }
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006483b8 + (intptr_t)(g_00648434)), uStack_30);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006483ea + (intptr_t)(g_00648438)), uStack_78, uStack_80);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  pcVar3 = *(code **)(*piVar4 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064840e + (intptr_t)(g_0064843c)), uStack_58, uStack_68);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar4,uVar2);
  ((RedPackInfo *)(auStack_98))->~RedPackInfo();
  return;
}

void BLRedPackPresenter::onNoOpenRedPack()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_58;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<RedPackData, 0> *)this)->instance());
  0 /* ctorZero */;
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064846a + (intptr_t)(g_006484b4)), uStack_78, uStack_80);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064848a + (intptr_t)(g_006484b8)), uStack_58, uStack_68);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  ((RedPackInfo *)auStack_98)->~RedPackInfo();
  return;
}

void BLRedPackPresenter::onUpdateLuckFen()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_90 [104];
  undefined4 uStack_28;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<RedPackData, 0> *)this)->instance());
  0 /* ctorZero */;
  piVar3 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006484e4 + (intptr_t)(g_00648508)), uStack_28);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  ((RedPackInfo *)auStack_90)->~RedPackInfo();
  return;
}

void BLRedPackPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRedPackPresenter::onShop(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

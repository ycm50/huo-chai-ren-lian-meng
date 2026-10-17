#include "BLFurnaceSelectPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLItemDataInfoUpView.h"
#include "BLItemDataInfoDownView.h"
using namespace cocos2d;
#include "UIManager.h"
#include "BackPackItemData.h"
#include "BLFurnaceSelectView.h"
#include "BLLeakUtils.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0053a660(...);
extern "C" long long func_0053a65a(...);
extern "C" unsigned long g_00538e98;
extern "C" unsigned long g_00538ee4;
extern "C" unsigned long g_00538eb2;
extern "C" unsigned long g_00538ee8;
extern "C" unsigned long g_00538f46;
extern "C" unsigned long g_00538fa4;
extern "C" unsigned long g_00538f7a;
extern "C" unsigned long g_00538fa8;
extern "C" unsigned long g_0053903e;
extern "C" unsigned long g_00539118;
extern "C" unsigned long g_00539072;
extern "C" unsigned long g_0053911c;
extern "C" unsigned long g_005390b0;
extern "C" unsigned long g_00539120;
extern "C" unsigned long g_005390ce;
extern "C" unsigned long g_00539124;
extern "C" unsigned long g_005390fa;
extern "C" unsigned long g_00539128;
extern "C" unsigned long g_0053943c;
extern "C" unsigned long g_0053913e;
extern "C" unsigned long g_00539440;
extern "C" unsigned long g_00539444;
extern "C" unsigned long g_005391f0;
extern "C" unsigned long g_00539448;
extern "C" unsigned long g_0053920c;
extern "C" unsigned long g_0053944c;
extern "C" unsigned long g_0053920e;
extern "C" unsigned long g_00539450;
extern "C" unsigned long g_00539454;
extern "C" unsigned long g_00539458;
extern "C" unsigned long g_0053945c;
extern "C" unsigned long g_005392b8;
extern "C" unsigned long g_00539460;
extern "C" unsigned long g_00539810;
extern "C" unsigned long g_005394f2;
extern "C" unsigned long g_00539814;
extern "C" unsigned long g_00539818;
extern "C" unsigned long g_00539556;
extern "C" unsigned long g_0053981c;
extern "C" unsigned long g_00539578;
extern "C" unsigned long g_00539820;
extern "C" unsigned long g_00539824;
extern "C" unsigned long g_005395f4;
extern "C" unsigned long g_00539828;
extern "C" unsigned long g_00539800;
extern "C" unsigned long g_00539804;
extern "C" unsigned long g_00539808;
extern "C" unsigned long g_0053980c;
extern "C" unsigned long g_00539618;
extern "C" unsigned long g_0053982c;
extern "C" unsigned long g_00539a96;
extern "C" unsigned long g_00539b18;
extern "C" unsigned long g_00539830;
extern "C" unsigned long g_00539692;
extern "C" unsigned long g_00539834;
extern "C" unsigned long g_00539838;
extern "C" unsigned long g_00539752;
extern "C" unsigned long g_0053983c;
extern "C" unsigned long g_00539784;
extern "C" unsigned long g_00539840;
extern "C" unsigned long g_00539816;
extern "C" unsigned long g_00539844;
extern "C" unsigned long g_0053987c;
extern "C" unsigned long g_00539af4;
extern "C" unsigned long g_005398ac;
extern "C" unsigned long g_00539af8;
extern "C" unsigned long g_00539afc;
extern "C" unsigned long g_0053993e;
extern "C" unsigned long g_00539b00;
extern "C" unsigned long g_00539b04;
extern "C" unsigned long g_00539944;
extern "C" unsigned long g_0053997a;
extern "C" unsigned long g_00539b08;
extern "C" unsigned long g_005399aa;
extern "C" unsigned long g_00539b0c;
extern "C" unsigned long g_00539a3c;
extern "C" unsigned long g_00539b10;
extern "C" unsigned long g_00539a42;
extern "C" unsigned long g_00539b14;
extern "C" unsigned long g_00539464;
extern "C" unsigned long g_00539468;
extern "C" unsigned long g_0053946c;
extern "C" unsigned long g_00539dfc;
extern "C" unsigned long g_00539b2e;
extern "C" unsigned long g_00539e00;
extern "C" unsigned long g_00539e04;
extern "C" unsigned long g_00539ccb;
extern "C" unsigned long g_00539e08;
extern "C" unsigned long g_00539d26;
extern "C" unsigned long g_00539e0c;
extern "C" unsigned long g_00539d42;
extern "C" unsigned long g_00539e10;
extern "C" unsigned long g_00539d44;
extern "C" unsigned long g_00539e14;
extern "C" unsigned long g_00539e18;
extern "C" unsigned long g_00539e1c;
extern "C" unsigned long g_00539e20;
extern "C" unsigned long g_00539dee;
extern "C" unsigned long g_00539e24;
extern "C" unsigned long g_0053a678;
extern "C" unsigned long g_0053a43a;
extern "C" unsigned long g_0053a67c;
extern "C" unsigned long g_0053a680;
extern "C" unsigned long g_0053a49e;
extern "C" unsigned long g_0053a684;
extern "C" unsigned long g_0053a4c0;
extern "C" unsigned long g_0053a688;
extern "C" unsigned long g_0053a68c;
extern "C" unsigned long g_0053a538;
extern "C" unsigned long g_0053a690;
extern "C" unsigned long g_0053a668;
extern "C" unsigned long g_0053a66c;
extern "C" unsigned long g_0053a670;
extern "C" unsigned long g_0053a674;
extern "C" unsigned long g_0053a55c;
extern "C" unsigned long g_0053a694;
extern "C" unsigned long g_0053a612;
extern "C" unsigned long g_0053a6a0;
extern "C" unsigned long g_0053a698;
extern "C" unsigned long g_0053a5d2;
extern "C" unsigned long g_0053a69c;
extern "C" unsigned long g_0053a080;
extern "C" unsigned long g_0053a084;
extern "C" unsigned long g_00539ed8;
extern "C" unsigned long g_0053a088;
extern "C" unsigned long g_00539f0a;
extern "C" unsigned long g_0053a08c;
extern "C" unsigned long g_0053a090;
extern "C" unsigned long g_00539f9c;
extern "C" unsigned long g_0053a094;
extern "C" unsigned long g_00539fba;
extern "C" unsigned long g_0053a098;
extern "C" unsigned long g_00539fea;
extern "C" unsigned long g_0053a09c;
extern "C" unsigned long g_0053a07a;
extern "C" unsigned long g_0053a0a0;
extern "C" unsigned long g_0053a0a4;
extern "C" unsigned long g_0053a0de;
extern "C" unsigned long g_0053a3a0;
extern "C" unsigned long g_0053a10e;
extern "C" unsigned long g_0053a3a4;
extern "C" unsigned long g_0053a3a8;
extern "C" unsigned long g_0053a19e;
extern "C" unsigned long g_0053a3ac;
extern "C" unsigned long g_0053a1a2;
extern "C" unsigned long g_0053a3b0;
extern "C" unsigned long g_0053a3b4;
extern "C" unsigned long g_0053a898;
extern "C" unsigned long g_0053a6b6;
extern "C" unsigned long g_0053a89c;
extern "C" unsigned long g_0053a8a0;
extern "C" unsigned long g_0053a7b4;
extern "C" unsigned long g_0053a8a4;
extern "C" unsigned long g_0053a7d0;
extern "C" unsigned long g_0053a8a8;
extern "C" unsigned long g_0053a7d2;
extern "C" unsigned long g_0053a8ac;
extern "C" unsigned long g_0053a8b0;
extern "C" unsigned long g_0053a8b4;
extern "C" unsigned long g_0053a8b8;
extern "C" unsigned long g_0053a87c;
extern "C" unsigned long g_0053a8bc;
extern "C" unsigned long g_0053aaf8;
extern "C" unsigned long g_0053aafc;
extern "C" unsigned long g_0053a94c;
extern "C" unsigned long g_0053ab00;
extern "C" unsigned long g_0053ab04;
extern "C" unsigned long g_0053a9b0;
extern "C" unsigned long g_0053ab08;
extern "C" unsigned long g_0053a9d2;
extern "C" unsigned long g_0053ab0c;
extern "C" unsigned long g_0053ab10;
extern "C" unsigned long g_0053aa4e;
extern "C" unsigned long g_0053ab14;
extern "C" unsigned long g_0053aae8;
extern "C" unsigned long g_0053aaec;
extern "C" unsigned long g_0053aaf0;
extern "C" unsigned long g_0053aaf4;
extern "C" unsigned long g_0053aa72;
extern "C" unsigned long g_0053ab18;
extern "C" unsigned long g_0053b0ec;
extern "C" unsigned long g_0053b16c;
extern "C" unsigned long g_0053ab1c;
extern "C" unsigned long g_0053aaea;
extern "C" unsigned long g_0053ab20;
extern "C" unsigned long g_0053ae7c;
extern "C" unsigned long g_0053ae80;
extern "C" unsigned long g_0053ae84;
extern "C" unsigned long g_0053abd6;
extern "C" unsigned long g_0053ae88;
extern "C" unsigned long g_0053ac08;
extern "C" unsigned long g_0053ae8c;
extern "C" unsigned long g_0053ae90;
extern "C" unsigned long g_0053ac9a;
extern "C" unsigned long g_0053ae94;
extern "C" unsigned long g_0053aed4;
extern "C" unsigned long g_0053b148;
extern "C" unsigned long g_0053af04;
extern "C" unsigned long g_0053b14c;
extern "C" unsigned long g_0053b150;
extern "C" unsigned long g_0053af94;
extern "C" unsigned long g_0053b154;
extern "C" unsigned long g_0053b158;
extern "C" unsigned long g_0053af9a;
extern "C" unsigned long g_0053afd0;
extern "C" unsigned long g_0053b15c;
extern "C" unsigned long g_0053b000;
extern "C" unsigned long g_0053b160;
extern "C" unsigned long g_0053b090;
extern "C" unsigned long g_0053b164;
extern "C" unsigned long g_0053b096;
extern "C" unsigned long g_0053b168;
extern "C" unsigned long g_0053ae98;
extern "C" unsigned long g_0053ae9c;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

bool BLFurnaceSelectPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFurnaceSelectPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceSelectPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceSelectPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceSelectPresenter::onObtain(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLFurnaceSelectPresenter::tick(float p1)
{
  return;
}

BLFurnaceSelectPresenter::~BLFurnaceSelectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00538e98 + (intptr_t)(g_00538ee4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00538eb2 + (intptr_t)(g_00538ee8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFurnaceSelectPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x193);
  return;
}

BLFurnaceSelectPresenter::BLFurnaceSelectPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00538f46 + (intptr_t)(g_00538fa4))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00538f7a + (intptr_t)(g_00538fa8)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFurnaceSelectPresenter::create(BLFurnaceSelectView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLFurnaceSelectPresenter::onExit()
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

void BLFurnaceSelectPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

void BLFurnaceSelectPresenter::initWithView(BLFurnaceSelectView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLFurnaceSelectView *)(p1))->getBtnUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnObtain();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0053903e + (intptr_t)(g_00539118))),0,0x20);
  ((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoDown();
  piVar1 = (int *)((BLItemDataInfoDownView *)this)->getBtnUse();
  pcVar3 = *(code **)(*piVar1 + 600);
  ((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoDown();
  uVar2 = (undefined4)(((BLItemDataInfoDownView *)this)->getPresenter());
  (*pcVar3)(piVar1,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_00539072 + (intptr_t)(g_0053911c))),0,0x20);
  uVar2 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x20) = uVar2;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),uVar2,99);
  uVar2 = (undefined4)(((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005390b0 + (intptr_t)(g_00539120)), 0x3f800000, 1);
  ((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  piVar1 = (int *)((BLItemDataInfoUpView *)this)->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 600);
  ((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  uVar2 = (undefined4)(((BLItemDataInfoUpView *)this)->getPresenter());
  (*pcVar3)(piVar1,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_005390ce + (intptr_t)(g_00539124))),0,0x20);
  ((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoUp();
  piVar1 = (int *)((BLItemDataInfoUpView *)this)->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005390fa + (intptr_t)(g_00539128))),0,0x20);
  piVar1 = (int *)((BLFurnaceSelectView *)(*(undefined4 *)(((int)this) + 0x18)))->ItemInfoDown();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  return;
}

void BLFurnaceSelectPresenter::initEquipData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnaceSelectPresenter::initPackItemData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnaceSelectPresenter::initWithItemData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

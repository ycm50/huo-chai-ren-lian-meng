#include "BLExchangeGiftPresenter.h"
#include "CCEditBox.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "HttpResponse.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLExchangeGiftView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "CCJson.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "PlayerData.h"
#include "RichTextData.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00543bb0;
extern "C" unsigned long UNK_00543bc8;
extern "C" unsigned long UNK_00543be0;
extern "C" unsigned long UNK_00543c54;
extern "C" unsigned long UNK_00543c6e;
extern "C" unsigned long UNK_00543cb4;
extern "C" unsigned long UNK_00543cdc;
extern "C" unsigned long UNK_00543d02;
extern "C" unsigned long UNK_00543d30;
extern "C" unsigned long UNK_00543dc2;
extern "C" unsigned long UNK_00543e24;
extern "C" unsigned long UNK_00543e36;
extern "C" unsigned long UNK_00543e7a;
extern "C" unsigned long UNK_00543ef2;
extern "C" unsigned long UNK_00543f38;
extern "C" unsigned long UNK_00543f7e;
extern "C" unsigned long UNK_0054400e;
extern "C" unsigned long UNK_005440a2;
extern "C" unsigned long UNK_005440a3;
extern "C" unsigned long UNK_005440a4;
extern "C" unsigned long UNK_005440be;
extern "C" unsigned long UNK_005441bc;
extern "C" unsigned long UNK_005441bd;
extern "C" unsigned long UNK_005441be;
extern "C" unsigned long UNK_005441d8;
extern "C" unsigned long UNK_005442c2;
extern "C" unsigned long UNK_005443c4;
extern "C" unsigned long UNK_005443d0;
extern "C" unsigned long UNK_00544412;
extern "C" unsigned long UNK_0054442a;
extern "C" unsigned long UNK_00544474;
extern "C" unsigned long UNK_005444b6;
extern "C" unsigned long UNK_005444ce;
extern "C" unsigned long UNK_005444fe;
extern "C" unsigned long UNK_0054450a;
extern "C" unsigned long UNK_0054451a;
extern "C" unsigned long UNK_00544542;
extern "C" unsigned long UNK_00544648;
extern "C" unsigned long UNK_00544676;
extern "C" unsigned long UNK_005446a6;
extern "C" unsigned long UNK_0054470a;
extern "C" unsigned long UNK_0054474a;
extern "C" unsigned long UNK_005447a8;
extern "C" unsigned long UNK_005447e4;
extern "C" unsigned long UNK_00544836;
extern "C" unsigned long UNK_005448b4;
extern "C" unsigned long UNK_005448fe;
extern "C" unsigned long UNK_005449fa;
extern "C" unsigned long UNK_00544a48;
extern "C" unsigned long UNK_00544ae4;
extern "C" unsigned long UNK_00544ae8;
extern "C" unsigned long UNK_00544b36;
extern "C" unsigned long UNK_00544bac;
extern "C" unsigned long UNK_00544bc4;
extern "C" unsigned long UNK_00544c70;
extern "C" unsigned long _UNK_00543bb4;
extern "C" unsigned long _UNK_00543bcc;
extern "C" unsigned long _UNK_00543be4;
extern "C" unsigned long _UNK_00543ca0;
extern "C" unsigned long _UNK_00543ca4;
extern "C" unsigned long _UNK_00543cb8;
extern "C" unsigned long _UNK_00543ce0;
extern "C" unsigned long _UNK_00543d5c;
extern "C" unsigned long _UNK_00543d60;
extern "C" unsigned long _UNK_00543e40;
extern "C" unsigned long _UNK_00543e44;
extern "C" unsigned long _UNK_00543e48;
extern "C" unsigned long _UNK_00544210;
extern "C" unsigned long _UNK_00544214;
extern "C" unsigned long _UNK_00544218;
extern "C" unsigned long _UNK_0054421c;
extern "C" unsigned long _UNK_00544220;
extern "C" unsigned long _UNK_00544224;
extern "C" unsigned long _UNK_00544228;
extern "C" unsigned long _UNK_0054422c;
extern "C" unsigned long _UNK_00544230;
extern "C" unsigned long _UNK_00544234;
extern "C" unsigned long _UNK_00544238;
extern "C" unsigned long _UNK_0054423c;
extern "C" unsigned long _UNK_00544240;
extern "C" unsigned long _UNK_00544244;
extern "C" unsigned long _UNK_00544248;
extern "C" unsigned long _UNK_005445f8;
extern "C" unsigned long _UNK_005445fc;
extern "C" unsigned long _UNK_00544600;
extern "C" unsigned long _UNK_00544604;
extern "C" unsigned long _UNK_00544608;
extern "C" unsigned long _UNK_0054460c;
extern "C" unsigned long _UNK_00544610;
extern "C" unsigned long _UNK_00544614;
extern "C" unsigned long _UNK_00544618;
extern "C" unsigned long _UNK_0054461c;
extern "C" unsigned long _UNK_00544620;
extern "C" unsigned long _UNK_00544624;
extern "C" unsigned long _UNK_00544628;
extern "C" unsigned long _UNK_00544944;
extern "C" unsigned long _UNK_00544948;
extern "C" unsigned long _UNK_0054494c;
extern "C" unsigned long _UNK_00544950;
extern "C" unsigned long _UNK_00544954;
extern "C" unsigned long _UNK_00544958;
extern "C" unsigned long _UNK_0054495c;
extern "C" unsigned long _UNK_00544960;
extern "C" unsigned long _UNK_00544964;
extern "C" unsigned long _UNK_00544968;
extern "C" unsigned long _UNK_0054496c;
extern "C" unsigned long _UNK_00544970;
extern "C" unsigned long _UNK_00544974;
extern "C" unsigned long _UNK_00544978;
extern "C" unsigned long _UNK_0054497c;
extern "C" unsigned long _UNK_00544980;
extern "C" unsigned long _UNK_00544984;
extern "C" unsigned long _UNK_00544aac;
extern "C" unsigned long _UNK_00544ab0;
extern "C" unsigned long _UNK_00544ab4;
extern "C" unsigned long _UNK_00544ab8;
extern "C" unsigned long _UNK_00544abc;
extern "C" unsigned long _UNK_00544ce8;
extern "C" unsigned long _UNK_00544cec;
extern "C" unsigned long _UNK_00544cf0;
extern "C" unsigned long _UNK_00544cf4;
extern "C" unsigned long _UNK_00544cf8;
extern "C" unsigned long _UNK_00544cfc;
extern "C" unsigned long g_00543bb0;
extern "C" unsigned long g_00543bb4;
extern "C" unsigned long g_00543bc8;
extern "C" unsigned long g_00543bcc;
extern "C" unsigned long g_00543be0;
extern "C" unsigned long g_00543be4;
extern "C" unsigned long g_00543c54;
extern "C" unsigned long g_00543c6e;
extern "C" unsigned long g_00543ca0;
extern "C" unsigned long g_00543ca4;
extern "C" unsigned long g_00543cb4;
extern "C" unsigned long g_00543cb8;
extern "C" unsigned long g_00543cdc;
extern "C" unsigned long g_00543ce0;
extern "C" unsigned long g_00543d02;
extern "C" unsigned long g_00543d30;
extern "C" unsigned long g_00543d5c;
extern "C" unsigned long g_00543d60;
extern "C" unsigned long g_00543dc2;
extern "C" unsigned long g_00543e24;
extern "C" unsigned long g_00543e36;
extern "C" unsigned long g_00543e40;
extern "C" unsigned long g_00543e44;
extern "C" unsigned long g_00543e48;
extern "C" unsigned long g_00543e7a;
extern "C" unsigned long g_00543ef2;
extern "C" unsigned long g_00543f38;
extern "C" unsigned long g_00543f7e;
extern "C" unsigned long g_0054400e;
extern "C" unsigned long g_005440a2;
extern "C" unsigned long g_005440a3;
extern "C" unsigned long g_005440a4;
extern "C" unsigned long g_005440be;
extern "C" unsigned long g_005441bc;
extern "C" unsigned long g_005441bd;
extern "C" unsigned long g_005441be;
extern "C" unsigned long g_005441d8;
extern "C" unsigned long g_00544210;
extern "C" unsigned long g_00544214;
extern "C" unsigned long g_00544218;
extern "C" unsigned long g_0054421c;
extern "C" unsigned long g_00544220;
extern "C" unsigned long g_00544224;
extern "C" unsigned long g_00544228;
extern "C" unsigned long g_0054422c;
extern "C" unsigned long g_00544230;
extern "C" unsigned long g_00544234;
extern "C" unsigned long g_00544238;
extern "C" unsigned long g_0054423c;
extern "C" unsigned long g_00544240;
extern "C" unsigned long g_00544244;
extern "C" unsigned long g_00544248;
extern "C" unsigned long g_005442c2;
extern "C" unsigned long g_005443c4;
extern "C" unsigned long g_005443d0;
extern "C" unsigned long g_00544412;
extern "C" unsigned long g_0054442a;
extern "C" unsigned long g_00544474;
extern "C" unsigned long g_005444b6;
extern "C" unsigned long g_005444ce;
extern "C" unsigned long g_005444fe;
extern "C" unsigned long g_0054450a;
extern "C" unsigned long g_0054451a;
extern "C" unsigned long g_00544542;
extern "C" unsigned long g_005445f8;
extern "C" unsigned long g_005445fc;
extern "C" unsigned long g_00544600;
extern "C" unsigned long g_00544604;
extern "C" unsigned long g_00544608;
extern "C" unsigned long g_0054460c;
extern "C" unsigned long g_00544610;
extern "C" unsigned long g_00544614;
extern "C" unsigned long g_00544618;
extern "C" unsigned long g_0054461c;
extern "C" unsigned long g_00544620;
extern "C" unsigned long g_00544624;
extern "C" unsigned long g_00544628;
extern "C" unsigned long g_00544648;
extern "C" unsigned long g_00544676;
extern "C" unsigned long g_005446a6;
extern "C" unsigned long g_0054470a;
extern "C" unsigned long g_0054474a;
extern "C" unsigned long g_005447a8;
extern "C" unsigned long g_005447e4;
extern "C" unsigned long g_00544836;
extern "C" unsigned long g_005448b4;
extern "C" unsigned long g_005448fe;
extern "C" unsigned long g_00544944;
extern "C" unsigned long g_00544948;
extern "C" unsigned long g_0054494c;
extern "C" unsigned long g_00544950;
extern "C" unsigned long g_00544954;
extern "C" unsigned long g_00544958;
extern "C" unsigned long g_0054495c;
extern "C" unsigned long g_00544960;
extern "C" unsigned long g_00544964;
extern "C" unsigned long g_00544968;
extern "C" unsigned long g_0054496c;
extern "C" unsigned long g_00544970;
extern "C" unsigned long g_00544974;
extern "C" unsigned long g_00544978;
extern "C" unsigned long g_0054497c;
extern "C" unsigned long g_00544980;
extern "C" unsigned long g_00544984;
extern "C" unsigned long g_005449fa;
extern "C" unsigned long g_00544a48;
extern "C" unsigned long g_00544aac;
extern "C" unsigned long g_00544ab0;
extern "C" unsigned long g_00544ab4;
extern "C" unsigned long g_00544ab8;
extern "C" unsigned long g_00544abc;
extern "C" unsigned long g_00544ae4;
extern "C" unsigned long g_00544ae8;
extern "C" unsigned long g_00544b36;
extern "C" unsigned long g_00544bac;
extern "C" unsigned long g_00544bc4;
extern "C" unsigned long g_00544c70;
extern "C" unsigned long g_00544ce8;
extern "C" unsigned long g_00544cec;
extern "C" unsigned long g_00544cf0;
extern "C" unsigned long g_00544cf4;
extern "C" unsigned long g_00544cf8;
extern "C" unsigned long g_00544cfc;
bool BLExchangeGiftPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLExchangeGiftPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExchangeGiftPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExchangeGiftPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExchangeGiftPresenter::tick(float p1)
{
  return;
}

BLExchangeGiftPresenter::~BLExchangeGiftPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00543c54 + g_00543ca0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00543c6e + g_00543ca4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLExchangeGiftPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x67);
  return;
}

BLExchangeGiftPresenter::BLExchangeGiftPresenter()
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
  iVar3 = *(int *)(&g_00543d02 + g_00543d5c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00543d30 + g_00543d60,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLExchangeGiftPresenter::create(BLExchangeGiftView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLExchangeGiftPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLExchangeGiftPresenter::onEnter()
{
  return;
}


void BLExchangeGiftPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  return;
}




void BLExchangeGiftPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  BLExchangeGiftPresenter::request();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLExchangeGiftPresenter::initWithView(BLExchangeGiftView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLExchangeGiftView *)(p1))->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00543dc2 + (intptr_t)(g_00543e40))),0,0x20);
  piVar1 = (int *)((BLExchangeGiftView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLExchangeGiftView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnClose();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x308)))(piVar2,1);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_20,piVar2);
  (*pcVar4)(piVar1,&uStack_20);
  piVar1 = (int *)((BLExchangeGiftView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnSure();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00543e24 + (intptr_t)(g_00543e44))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  uVar3 = (undefined4)(((BLExchangeGiftView *)(*(undefined4 *)(((int)this) + 0x18)))->textField_Exchange());
  ((cocos2d::extension::CCEditBox *)(uVar3))->setFontColor(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00543e36 + (intptr_t)(g_00543e48)));
  return;
}

void BLExchangeGiftPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLExchangeGiftPresenter::onRequestComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLExchangeGiftPresenter::request()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLInviteFillInCodePresenter.h"
#include "BLGameScene.h"
#include "BLInviteFillInCodeView.h"
#include "BLItemDataView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00625948;
extern "C" unsigned long UNK_0062596c;
extern "C" unsigned long UNK_006259cc;
extern "C" unsigned long UNK_006259f4;
extern "C" unsigned long UNK_00625a0a;
extern "C" unsigned long UNK_00625a4e;
extern "C" unsigned long UNK_00625b92;
extern "C" unsigned long UNK_00625b94;
extern "C" unsigned long UNK_00625bce;
extern "C" unsigned long UNK_00625bd0;
extern "C" unsigned long UNK_00625d16;
extern "C" unsigned long UNK_00625d36;
extern "C" unsigned long UNK_00625d46;
extern "C" unsigned long UNK_00625d80;
extern "C" unsigned long UNK_00625da2;
extern "C" unsigned long UNK_00625db4;
extern "C" unsigned long UNK_00625df6;
extern "C" unsigned long UNK_00625e48;
extern "C" unsigned long UNK_00625e72;
extern "C" unsigned long UNK_00625ea4;
extern "C" unsigned long UNK_00625ed8;
extern "C" unsigned long UNK_00625efc;
extern "C" unsigned long UNK_00625f7e;
extern "C" unsigned long UNK_00626058;
extern "C" unsigned long UNK_0062606e;
extern "C" unsigned long UNK_00626098;
extern "C" unsigned long UNK_0062612c;
extern "C" unsigned long UNK_0062613e;
extern "C" unsigned long UNK_0062614e;
extern "C" unsigned long UNK_00626160;
extern "C" unsigned long UNK_00626196;
extern "C" unsigned long UNK_00626214;
extern "C" unsigned long UNK_0062622a;
extern "C" unsigned long UNK_00626246;
extern "C" unsigned long UNK_00626344;
extern "C" unsigned long UNK_00626345;
extern "C" unsigned long UNK_00626346;
extern "C" unsigned long UNK_00626364;
extern "C" unsigned long UNK_00626450;
extern "C" unsigned long _UNK_00625910;
extern "C" unsigned long _UNK_006259b8;
extern "C" unsigned long _UNK_006259bc;
extern "C" unsigned long _UNK_006259d0;
extern "C" unsigned long _UNK_006259f8;
extern "C" unsigned long _UNK_00625a88;
extern "C" unsigned long _UNK_00625a8c;
extern "C" unsigned long _UNK_00625cd8;
extern "C" unsigned long _UNK_00625cdc;
extern "C" unsigned long _UNK_00625ce0;
extern "C" unsigned long _UNK_00625ce4;
extern "C" unsigned long _UNK_00625ce8;
extern "C" unsigned long _UNK_00625cec;
extern "C" unsigned long _UNK_00625cf0;
extern "C" unsigned long _UNK_00625cf4;
extern "C" unsigned long _UNK_00625d50;
extern "C" unsigned long _UNK_00625d54;
extern "C" unsigned long _UNK_00625d58;
extern "C" unsigned long _UNK_00625ffc;
extern "C" unsigned long _UNK_00626000;
extern "C" unsigned long _UNK_00626004;
extern "C" unsigned long _UNK_00626008;
extern "C" unsigned long _UNK_0062600c;
extern "C" unsigned long _UNK_00626010;
extern "C" unsigned long _UNK_00626014;
extern "C" unsigned long _UNK_00626018;
extern "C" unsigned long _UNK_0062601c;
extern "C" unsigned long _UNK_00626020;
extern "C" unsigned long _UNK_0062639c;
extern "C" unsigned long _UNK_006263a0;
extern "C" unsigned long _UNK_006263a4;
extern "C" unsigned long _UNK_006263a8;
extern "C" unsigned long _UNK_006263ac;
extern "C" unsigned long _UNK_006263b0;
extern "C" unsigned long _UNK_006263b4;
extern "C" unsigned long _UNK_006263b8;
extern "C" unsigned long _UNK_006263bc;
extern "C" unsigned long _UNK_006263c0;
extern "C" unsigned long _UNK_006263c4;
extern "C" unsigned long _UNK_006263c8;
extern "C" unsigned long _UNK_006263cc;
extern "C" unsigned long _UNK_006263d0;
extern "C" unsigned long _UNK_00626574;
extern "C" unsigned long g_00625910;
extern "C" unsigned long g_00625948;
extern "C" unsigned long g_0062596c;
extern "C" unsigned long g_006259b8;
extern "C" unsigned long g_006259bc;
extern "C" unsigned long g_006259cc;
extern "C" unsigned long g_006259d0;
extern "C" unsigned long g_006259f4;
extern "C" unsigned long g_006259f8;
extern "C" unsigned long g_00625a0a;
extern "C" unsigned long g_00625a4e;
extern "C" unsigned long g_00625a88;
extern "C" unsigned long g_00625a8c;
extern "C" unsigned long g_00625b92;
extern "C" unsigned long g_00625b94;
extern "C" unsigned long g_00625bce;
extern "C" unsigned long g_00625bd0;
extern "C" unsigned long g_00625cd8;
extern "C" unsigned long g_00625cdc;
extern "C" unsigned long g_00625ce0;
extern "C" unsigned long g_00625ce4;
extern "C" unsigned long g_00625ce8;
extern "C" unsigned long g_00625cec;
extern "C" unsigned long g_00625cf0;
extern "C" unsigned long g_00625cf4;
extern "C" unsigned long g_00625d16;
extern "C" unsigned long g_00625d36;
extern "C" unsigned long g_00625d46;
extern "C" unsigned long g_00625d50;
extern "C" unsigned long g_00625d54;
extern "C" unsigned long g_00625d58;
extern "C" unsigned long g_00625d80;
extern "C" unsigned long g_00625da2;
extern "C" unsigned long g_00625db4;
extern "C" unsigned long g_00625df6;
extern "C" unsigned long g_00625e48;
extern "C" unsigned long g_00625e72;
extern "C" unsigned long g_00625ea4;
extern "C" unsigned long g_00625ed8;
extern "C" unsigned long g_00625efc;
extern "C" unsigned long g_00625f7e;
extern "C" unsigned long g_00625ffc;
extern "C" unsigned long g_00626000;
extern "C" unsigned long g_00626004;
extern "C" unsigned long g_00626008;
extern "C" unsigned long g_0062600c;
extern "C" unsigned long g_00626010;
extern "C" unsigned long g_00626014;
extern "C" unsigned long g_00626018;
extern "C" unsigned long g_0062601c;
extern "C" unsigned long g_00626020;
extern "C" unsigned long g_00626058;
extern "C" unsigned long g_0062606e;
extern "C" unsigned long g_00626098;
extern "C" unsigned long g_0062612c;
extern "C" unsigned long g_0062613e;
extern "C" unsigned long g_0062614e;
extern "C" unsigned long g_00626160;
extern "C" unsigned long g_00626196;
extern "C" unsigned long g_00626214;
extern "C" unsigned long g_0062622a;
extern "C" unsigned long g_00626246;
extern "C" unsigned long g_00626344;
extern "C" unsigned long g_00626345;
extern "C" unsigned long g_00626346;
extern "C" unsigned long g_00626364;
extern "C" unsigned long g_0062639c;
extern "C" unsigned long g_006263a0;
extern "C" unsigned long g_006263a4;
extern "C" unsigned long g_006263a8;
extern "C" unsigned long g_006263ac;
extern "C" unsigned long g_006263b0;
extern "C" unsigned long g_006263b4;
extern "C" unsigned long g_006263b8;
extern "C" unsigned long g_006263bc;
extern "C" unsigned long g_006263c0;
extern "C" unsigned long g_006263c4;
extern "C" unsigned long g_006263c8;
extern "C" unsigned long g_006263cc;
extern "C" unsigned long g_006263d0;
extern "C" unsigned long g_00626450;
extern "C" unsigned long g_00626574;
void BLInviteFillInCodePresenter::tick(float p1)
{
  return;
}

bool BLInviteFillInCodePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLInviteFillInCodePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteFillInCodePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteFillInCodePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLInviteFillInCodePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00625910);
  return;
}

void BLInviteFillInCodePresenter::onEnter()
{
  return;
}

void BLInviteFillInCodePresenter::onExit()
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

BLInviteFillInCodePresenter::~BLInviteFillInCodePresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_00625948 + g_006259b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_0062596c + g_006259bc,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 9)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 6)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLInviteFillInCodePresenter::BLInviteFillInCodePresenter()
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
  iVar3 = *(int *)(&g_00625a0a + g_00625a88);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00625a4e + g_00625a8c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLInviteFillInCodePresenter::create(BLInviteFillInCodeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLInviteFillInCodePresenter::setGuize(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteFillInCodePresenter::initWithView(BLInviteFillInCodeView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x30) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLInviteFillInCodeView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00625d16 + g_00625d50),0,0x20);
  piVar1 = (int *)((BLInviteFillInCodeView *)*(undefined4 *)(((int)this) + 0x30))->getBtnGetReward();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00625d36 + g_00625d54),0,0x20);
  BLInviteFillInCodePresenter::setGuize((char const*)&g_00625d46 + g_00625d58);
  return;
}

void BLInviteFillInCodePresenter::onGetReward(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLInviteFillInCodePresenter::onPostRewardData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

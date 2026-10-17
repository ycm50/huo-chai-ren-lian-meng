#include "BLJiTanMainPresenter.h"
#include "JiTanData.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ItemData.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLJiTanMainItemPresenter.h"
#include "BLJiTanMainItemView.h"
#include "BLJiTanMainView.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GetHeroDrawInfo.h"
#include "Toast.h"
#include "UIManager.h"
#include "ZhaoMuHttpUtil.h"
#include "ZhaoMuOnceView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"
#include "ZhaoMuTenView.h"

using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057a660;
extern "C" unsigned long UNK_0057a678;
extern "C" unsigned long UNK_0057a690;
extern "C" unsigned long UNK_0057a71c;
extern "C" unsigned long UNK_0057a742;
extern "C" unsigned long UNK_0057a788;
extern "C" unsigned long UNK_0057a7b0;
extern "C" unsigned long UNK_0057a804;
extern "C" unsigned long UNK_0057a8c6;
extern "C" unsigned long UNK_0057a8c8;
extern "C" unsigned long UNK_0057a8de;
extern "C" unsigned long UNK_0057a8e0;
extern "C" unsigned long UNK_0057a8f4;
extern "C" unsigned long UNK_0057a912;
extern "C" unsigned long UNK_0057a9bc;
extern "C" unsigned long UNK_0057a9fc;
extern "C" unsigned long UNK_0057ab18;
extern "C" unsigned long UNK_0057ab32;
extern "C" unsigned long UNK_0057ab5c;
extern "C" unsigned long UNK_0057ac00;
extern "C" unsigned long UNK_0057ac02;
extern "C" unsigned long UNK_0057ac1a;
extern "C" unsigned long UNK_0057ac1c;
extern "C" unsigned long UNK_0057ac5e;
extern "C" unsigned long UNK_0057afb0;
extern "C" unsigned long UNK_0057b11e;
extern "C" unsigned long UNK_0057b120;
extern "C" unsigned long UNK_0057b148;
extern "C" unsigned long UNK_0057b2bc;
extern "C" unsigned long UNK_0057b31e;
extern "C" unsigned long _UNK_0057a664;
extern "C" unsigned long _UNK_0057a67c;
extern "C" unsigned long _UNK_0057a694;
extern "C" unsigned long _UNK_0057a774;
extern "C" unsigned long _UNK_0057a778;
extern "C" unsigned long _UNK_0057a78c;
extern "C" unsigned long _UNK_0057a7b4;
extern "C" unsigned long _UNK_0057a7f0;
extern "C" unsigned long _UNK_0057a7f4;
extern "C" unsigned long _UNK_0057a808;
extern "C" unsigned long _UNK_0057a81c;
extern "C" unsigned long _UNK_0057a950;
extern "C" unsigned long _UNK_0057a954;
extern "C" unsigned long _UNK_0057a958;
extern "C" unsigned long _UNK_0057a95c;
extern "C" unsigned long _UNK_0057a960;
extern "C" unsigned long _UNK_0057a964;
extern "C" unsigned long _UNK_0057a968;
extern "C" unsigned long _UNK_0057aa28;
extern "C" unsigned long _UNK_0057aa2c;
extern "C" unsigned long _UNK_0057ab20;
extern "C" unsigned long _UNK_0057ab88;
extern "C" unsigned long _UNK_0057ab8c;
extern "C" unsigned long _UNK_0057ac2c;
extern "C" unsigned long _UNK_0057ac30;
extern "C" unsigned long _UNK_0057ac34;
extern "C" unsigned long _UNK_0057ac38;
extern "C" unsigned long _UNK_0057af44;
extern "C" unsigned long _UNK_0057af48;
extern "C" unsigned long _UNK_0057af4c;
extern "C" unsigned long _UNK_0057af50;
extern "C" unsigned long _UNK_0057af54;
extern "C" unsigned long _UNK_0057af58;
extern "C" unsigned long _UNK_0057af5c;
extern "C" unsigned long _UNK_0057afb4;
extern "C" unsigned long _UNK_0057b39c;
extern "C" unsigned long _UNK_0057b3a0;
extern "C" unsigned long _UNK_0057b3a4;
extern "C" unsigned long _UNK_0057b3a8;
extern "C" unsigned long _UNK_0057b3ac;
extern "C" unsigned long _UNK_0057b3b0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0057a660;
extern "C" unsigned long g_0057a664;
extern "C" unsigned long g_0057a678;
extern "C" unsigned long g_0057a67c;
extern "C" unsigned long g_0057a690;
extern "C" unsigned long g_0057a694;
extern "C" unsigned long g_0057a71c;
extern "C" unsigned long g_0057a742;
extern "C" unsigned long g_0057a774;
extern "C" unsigned long g_0057a778;
extern "C" unsigned long g_0057a788;
extern "C" unsigned long g_0057a78c;
extern "C" unsigned long g_0057a7b0;
extern "C" unsigned long g_0057a7b4;
extern "C" unsigned long g_0057a7f0;
extern "C" unsigned long g_0057a7f4;
extern "C" unsigned long g_0057a804;
extern "C" unsigned long g_0057a808;
extern "C" unsigned long g_0057a81c;
extern "C" unsigned long g_0057a8c6;
extern "C" unsigned long g_0057a8c8;
extern "C" unsigned long g_0057a8de;
extern "C" unsigned long g_0057a8e0;
extern "C" unsigned long g_0057a8f4;
extern "C" unsigned long g_0057a912;
extern "C" unsigned long g_0057a950;
extern "C" unsigned long g_0057a954;
extern "C" unsigned long g_0057a958;
extern "C" unsigned long g_0057a95c;
extern "C" unsigned long g_0057a960;
extern "C" unsigned long g_0057a964;
extern "C" unsigned long g_0057a968;
extern "C" unsigned long g_0057a9bc;
extern "C" unsigned long g_0057a9fc;
extern "C" unsigned long g_0057aa28;
extern "C" unsigned long g_0057aa2c;
extern "C" unsigned long g_0057ab18;
extern "C" unsigned long g_0057ab20;
extern "C" unsigned long g_0057ab32;
extern "C" unsigned long g_0057ab5c;
extern "C" unsigned long g_0057ab88;
extern "C" unsigned long g_0057ab8c;
extern "C" unsigned long g_0057ac00;
extern "C" unsigned long g_0057ac02;
extern "C" unsigned long g_0057ac1a;
extern "C" unsigned long g_0057ac1c;
extern "C" unsigned long g_0057ac2c;
extern "C" unsigned long g_0057ac30;
extern "C" unsigned long g_0057ac34;
extern "C" unsigned long g_0057ac38;
extern "C" unsigned long g_0057ac5e;
extern "C" unsigned long g_0057af44;
extern "C" unsigned long g_0057af48;
extern "C" unsigned long g_0057af4c;
extern "C" unsigned long g_0057af50;
extern "C" unsigned long g_0057af54;
extern "C" unsigned long g_0057af58;
extern "C" unsigned long g_0057af5c;
extern "C" unsigned long g_0057afb0;
extern "C" unsigned long g_0057afb4;
extern "C" unsigned long g_0057b11e;
extern "C" unsigned long g_0057b120;
extern "C" unsigned long g_0057b148;
extern "C" unsigned long g_0057b2bc;
extern "C" unsigned long g_0057b31e;
extern "C" unsigned long g_0057b39c;
extern "C" unsigned long g_0057b3a0;
extern "C" unsigned long g_0057b3a4;
extern "C" unsigned long g_0057b3a8;
extern "C" unsigned long g_0057b3ac;
extern "C" unsigned long g_0057b3b0;
bool BLJiTanMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLJiTanMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLJiTanMainPresenter::tick(float p1)
{
  return;
}

BLJiTanMainPresenter::~BLJiTanMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057a71c + g_0057a774);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057a742 + g_0057a778,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLJiTanMainPresenter::updateBtnZhaoMuOne()
{
  int *piVar1;
  
  piVar1 = (int *)((BLJiTanMainView *)*(undefined4 *)(((int)this) + 0x20))->getBtnZhaoMuFree();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  piVar1 = (int *)((BLJiTanMainView *)*(undefined4 *)(((int)this) + 0x20))->getBtnZhaoMuOne();
  (**(code **)(*piVar1 + 0x90))(piVar1,1);
  return;
}

undefined4 BLJiTanMainPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLJiTanMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0057a81c);
  return;
}




void BLJiTanMainPresenter::onZhaoMuFree(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  
  if (*(char *)(((int)this) + 0x24) != '\0') {
    piVar1 = (int *)((ZhaoMuOnceView *)this)->create();
    ((ZhaoMuOnceView *)piVar1)->getRewardData(0);
    (**(code **)(*piVar1 + 0x54))(piVar1,0,0);
    (**(code **)(**(int **)(((int)this) + 0x20) + 0xcc))(*(int **)(((int)this) + 0x20),piVar1,10);
  }
  *(undefined1 *)(((int)this) + 0x24) = 0;
  return;
}


BLJiTanMainPresenter::BLJiTanMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0057ab32 + g_0057ab88);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057ab5c + g_0057ab8c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLJiTanMainPresenter::create(BLJiTanMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLJiTanMainPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLJiTanMainPresenter::onBuyHero(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJiTanMainPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJiTanMainPresenter::onZhaoMuTen(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(((int)this) + 0x24) != '\0') {
    *(undefined1 *)(((int)this) + 0x24) = 0;
    uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
    iVar3 = (undefined4)((void)(((DataCacheManager *)(uVar2))->getItemDataByID(100)),(intptr_t)0);
    if (iVar3 != 0) {
      piVar4 = (int *)((DataManager *)this)->shareDataManager();
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
      piVar4 = (int *)((BackPackData *)(uVar2))->getItemData((ItemData*)iVar3);
      if (piVar4 != (int *)0x0) {
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x28)))());
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x28)))(piVar4));
        cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0057a9bc + (intptr_t)(g_0057aa28)), uVar2);
        if (9 < iVar3) {
          piVar4 = (int *)::operator new(0x10c);
          ::new ((void *)piVar4) ZhaoMuTenView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
          iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x18)))(piVar4));
          if (iVar3 != 0) {
            ((cocos2d::CCObject *)(piVar4))->autorelease();
            (**(code **)(*(int *)(piVar4) + (0x54)))(piVar4,0,0);
            (**(code **)(**(int **)(((int)this) + 0x20) + 0xcc))(*(int **)(((int)this) + 0x20),piVar4,10);
            return;
          }
          (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x57a9e6);
          (*pcVar1)();
        }
      }
    }
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0057a9fc + (intptr_t)(g_0057aa2c)));
    *(undefined1 *)(((int)this) + 0x24) = 1;
  }
  return;
}

void BLJiTanMainPresenter::onZhaoMuOne(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(((int)this) + 0x24) != '\0') {
    *(undefined1 *)(((int)this) + 0x24) = 0;
    uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((DataCacheManager *)(uVar1))->getItemDataByID(100)),(intptr_t)0);
    if (iVar2 != 0) {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
      piVar3 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)iVar2);
      if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*(int *)(piVar3) + (0x28)))(), 0 < iVar2)) {
        piVar3 = (int *)((ZhaoMuOnceView *)this)->create();
        ((ZhaoMuOnceView *)(piVar3))->getRewardData(1);
        (**(code **)(*(int *)(piVar3) + (0x54)))(piVar3,0,0);
        (**(code **)(**(int **)(((int)this) + 0x20) + 0xcc))(*(int **)(((int)this) + 0x20),piVar3,10);
        return;
      }
    }
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_0057ab18 + (intptr_t)(g_0057ab20)));
    *(undefined1 *)(((int)this) + 0x24) = 1;
  }
  return;
}

void BLJiTanMainPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJiTanMainPresenter::initWithView(BLJiTanMainView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  int iStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLJiTanMainView *)(p1))->getBtnClose();
  iVar3 = (undefined4)(intptr_t)(g_0057af44);
  uStack_64 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af48)) + g_0057af44));
  uStack_60 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_64,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnHelp();
  uStack_5c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af4c)) + iVar3));
  uStack_58 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_5c,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnPayHero();
  uStack_54 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af50)) + iVar3));
  uStack_50 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_54,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuFree();
  uStack_4c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af54)) + iVar3));
  uStack_48 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_4c,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuOne();
  uStack_44 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af58)) + iVar3));
  uStack_40 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_44,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuTen();
  uStack_3c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0057ac5e + (intptr_t)(g_0057af5c)) + iVar3));
  uStack_38 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_3c,0,0x20);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar1) + (0x214)))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar1) + (0x22c)))(piVar1,1);
  uVar2 = (undefined4)(((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView());
  ((BLTableView *)(uVar2))->reloadData(0, 1);
  piVar1 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_34,piVar1);
  ((GetHeroDrawInfo *)(auStack_34))->~GetHeroDrawInfo();
  if (iStack_1c != 1) {
    piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuFree();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuOne();
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  else {
    piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuFree();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
    piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnZhaoMuOne();
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  (*pcVar5)(piVar1,iStack_1c != 1);
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((DataCacheManager *)(uVar2))->getItemDataByID(100)),(intptr_t)0);
  if (iVar3 != 0) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
    piVar1 = (int *)((BackPackData *)(uVar2))->getItemData((ItemData*)iVar3);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelHuoYan();
      pcVar5 = *(code **)(*piVar1 + 0x234);
      ConvertToString<int>(auStack_34, 0, 0);
      (*pcVar5)(piVar1,auStack_34[0]);
    }
    else {
      piVar4 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelHuoYan();
      pcVar5 = *(code **)(*piVar4 + 0x234);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
      ConvertToString<int>(auStack_34, uVar2, 0);
      (*pcVar5)(piVar4,auStack_34[0]);
    }
    func_0079e2bc(auStack_34);
  }
  piVar1 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_34,piVar1);
  func_0079e45c(auStack_68,uStack_2c,auStack_6c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_68);
  ((GetHeroDrawInfo *)(auStack_34))->~GetHeroDrawInfo();
  piVar4 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getSpHero();
  pcVar5 = *(code **)(*piVar4 + 0x22c);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))(piVar1));
  (*pcVar5)(piVar4,uVar2);
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar1 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_34,piVar1);
  piVar1 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(auStack_34[0]),(int *)0);
  ((GetHeroDrawInfo *)(auStack_34))->~GetHeroDrawInfo();
  if (piVar1 != (int *)0x0) {
    piVar4 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelHeroName();
    pcVar5 = *(code **)(*piVar4 + 0x234);
    (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_34,piVar1);
    (*pcVar5)(piVar4,auStack_34[0]);
    func_0079e2bc(auStack_34);
  }
  piVar1 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelLuckValue();
  pcVar5 = *(code **)(*piVar1 + 0x234);
  piVar4 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x10)))());
  ConvertToString<int>(auStack_34, uVar2, 0);
  (*pcVar5)(piVar1,auStack_34[0]);
  func_0079e2bc(auStack_34);
  *(undefined1 *)(((int)this) + 0x24) = 1;
  return;
}

int BLJiTanMainPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_34 [12];
  int iStack_28;
  int iStack_24;
  
  piVar1 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x18))(auStack_34,piVar1);
  iVar3 = (undefined4)(intptr_t)(iStack_24 - iStack_28 >> 2);
  iVar2 = (undefined4)(intptr_t)(((long long)((int)(iVar3) / (int)(3))));
  *(int *)(((int)this) + 0x28) = iVar2;
  if (iVar2 * 3 < iVar3) {
    iVar2 = (undefined4)(intptr_t)(iVar2 + 1);
  }
  *(int *)(((int)this) + 0x2c) = iVar2;
  ((GetHeroDrawInfo *)auStack_34)->~GetHeroDrawInfo();
  return iVar2;
}

void BLJiTanMainPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJiTanMainPresenter::updateHuoYanNum(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iStack_64;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_1c;
  
  if ((int)(intptr_t)(int)(intptr_t)p1 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x57b396);
    (*pcVar7)();
  }
  iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_0057b11e + (intptr_t)(g_0057b3a0))),
                          *(undefined4 *)((unsigned char *)((char *)&g_0057b120 + (intptr_t)(g_0057b39c))),0);
  iStack_64 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x14));
  if (iStack_64 == 0) {
    piVar2 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
    (**(code **)(*(int *)(piVar2) + (0x18)))(&iStack_34,piVar2);
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0057b148 + (intptr_t)(g_0057b3a4)), iStack_1c);
    ((GetHeroDrawInfo *)(&iStack_34))->~GetHeroDrawInfo();
    piVar2 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
    (**(code **)(*(int *)(piVar2) + (0x18)))(&iStack_34,piVar2);
    ((GetHeroDrawInfo *)(&iStack_34))->~GetHeroDrawInfo();
    iStack_64 = 0;
    if (iStack_1c == 1) {
      0 /* ctorZero */;
      uStack_38 = (undefined4)(0);
      piVar2 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
      iStack_4c = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x10)))());
      iStack_4c = (undefined4)(intptr_t)(iStack_4c + 1);
      piVar2 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
      pcVar7 = *(code **)(*piVar2 + 0x1c);
      0 /* ctorZero */;
      (*pcVar7)(piVar2,&iStack_34);
      ((GetHeroDrawInfo *)(&iStack_34))->~GetHeroDrawInfo();
      piVar2 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelLuckValue();
      pcVar7 = *(code **)(*piVar2 + 0x234);
      piVar3 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x10)))());
      ConvertToString<int>(&uStack_54, uVar4, 0);
      (*pcVar7)(piVar2,uStack_54);
      func_0079e2bc(&uStack_54);
      ((GetHeroDrawInfo *)(auStack_50))->~GetHeroDrawInfo();
      return;
    }
  }
  else if (iStack_64 != 1) {
    iStack_64 = 10;
  }
  uVar4 = (undefined4)(((DataCacheManager *)this)->shareManager());
  iVar1 = (undefined4)((void)(((DataCacheManager *)(uVar4))->getItemDataByID(100)),(intptr_t)0);
  if (iVar1 != 0) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
    piVar2 = (int *)((BackPackData *)(uVar4))->getItemData((ItemData*)iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x28)))());
      if (iVar1 < iStack_64) {
        uVar4 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)(uVar4))->showToast((char const*)(unsigned char *)((char *)&g_0057b2bc + (intptr_t)(g_0057b3a8)));
      }
      else {
        piVar3 = (int *)::operator new(0x30);
        ::new ((void *)piVar3) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        iVar5 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar3))->init());
        if (iVar5 == 0) {
          (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
          piVar3 = (int *)0x0;
        }
        else {
          ((cocos2d::CCObject *)(piVar3))->autorelease();
        }
        (**(code **)(*(int *)(piVar3) + (0x24)))(piVar3,100);
        pcVar7 = *(code **)(*piVar3 + 0x1c);
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
        (*pcVar7)(piVar3,uVar4);
        (**(code **)(*(int *)(piVar3) + (0x2c)))(piVar3,iStack_64);
        piVar2 = (int *)((DataManager *)this)->shareDataManager();
        piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
        ((BackPackData *)(uVar4))->removeItem((BackPackItemData*)piVar3);
        piVar2 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelHuoYan();
        pcVar7 = *(code **)(*piVar2 + 0x234);
        ConvertToString<int>(&iStack_34, iVar1 - iStack_64, 0);
        (*pcVar7)(piVar2,iStack_34);
        func_0079e2bc(&iStack_34);
      }
    }
  }
  uVar8 = (undefined4)(0);
  while( true ) {
    piVar2 = (int *)((ZhaoMuHttpUtil *)this)->getInstance();
    (**(code **)(*(int *)(piVar2) + (0x18)))(&iStack_34,piVar2);
    iVar1 = (undefined4)(intptr_t)(g_0057b3ac);
    uVar6 = (undefined4)((iStack_30 - iStack_34 >> 2) * g_0057b3ac);
    if (iStack_34 != 0) {
      func_0079e2cc();
    }
    if (uVar6 <= uVar8) goto code_r0x0057b322;
    piVar2 = (int *)((ZhaoMuHttpUtil *)this)->getInstance();
    (**(code **)(*(int *)(piVar2) + (0x18)))(&iStack_34,piVar2);
    uVar6 = (undefined4)(iVar1 * (iStack_30 - iStack_34 >> 2));
    if (uVar6 <= uVar8) break;
    if (iStack_34 != 0) {
      func_0079e2cc();
    }
    uVar8 = (undefined4)(uVar8 + 1);
  }
  func_0079e784((unsigned char *)((char *)&g_0057b31e + (intptr_t)(g_0057b3b0)),uVar8,uVar6);
code_r0x0057b322:
  piVar2 = (int *)((BLJiTanMainView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabelLuckValue();
  pcVar7 = *(code **)(*piVar2 + 0x234);
  piVar3 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x10)))());
  ConvertToString<int>(&iStack_34, uVar4, 0);
  (*pcVar7)(piVar2,iStack_34);
  func_0079e2bc(&iStack_34);
  return;
}

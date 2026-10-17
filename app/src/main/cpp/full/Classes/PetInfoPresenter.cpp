#include "PetInfoPresenter.h"
#include "CCDictionary.h"
#include "CCControlButton.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "PetInfoView.h"
#include "CCTouch.h"
#include "CCSpriteFrameCache.h"
#include "CCDirector.h"
#include "CCNotificationCenter.h"
#include "CCString.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetData.h"
#include "PetHttpUtil.h"
#include "PetUserData.h"
#include "PetUserItemData.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079ea84(...);
extern "C" long long func_0079ec88(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060aa40;
extern "C" unsigned long UNK_0060ab2a;
extern "C" unsigned long UNK_0060ab48;
extern "C" unsigned long UNK_0060ab4c;
extern "C" unsigned long UNK_0060ab5e;
extern "C" unsigned long UNK_0060ab8e;
extern "C" unsigned long UNK_0060ab9a;
extern "C" unsigned long UNK_0060ac16;
extern "C" unsigned long UNK_0060ad26;
extern "C" unsigned long UNK_0060ad36;
extern "C" unsigned long UNK_0060ad38;
extern "C" unsigned long UNK_0060ad7a;
extern "C" unsigned long UNK_0060ad7c;
extern "C" unsigned long UNK_0060ad94;
extern "C" unsigned long UNK_0060ad96;
extern "C" unsigned long UNK_0060adce;
extern "C" unsigned long UNK_0060adee;
extern "C" unsigned long UNK_0060af36;
extern "C" unsigned long UNK_0060afb4;
extern "C" unsigned long UNK_0060b256;
extern "C" unsigned long UNK_0060b258;
extern "C" unsigned long UNK_0060b2e4;
extern "C" unsigned long UNK_0060b326;
extern "C" unsigned long UNK_0060b3d2;
extern "C" unsigned long UNK_0060b456;
extern "C" unsigned long UNK_0060b564;
extern "C" unsigned long UNK_0060b58e;
extern "C" unsigned long UNK_0060b5fc;
extern "C" unsigned long UNK_0060b624;
extern "C" unsigned long UNK_0060b786;
extern "C" unsigned long UNK_0060b79a;
extern "C" unsigned long UNK_0060b7ec;
extern "C" unsigned long UNK_0060b7fa;
extern "C" unsigned long UNK_0060b836;
extern "C" unsigned long UNK_0060b8ee;
extern "C" unsigned long UNK_0060bab6;
extern "C" unsigned long UNK_0060bafc;
extern "C" unsigned long _UNK_0060aa44;
extern "C" unsigned long _UNK_0060abf4;
extern "C" unsigned long _UNK_0060abf8;
extern "C" unsigned long _UNK_0060abfc;
extern "C" unsigned long _UNK_0060ac00;
extern "C" unsigned long _UNK_0060ac04;
extern "C" unsigned long _UNK_0060ac08;
extern "C" unsigned long _UNK_0060ad00;
extern "C" unsigned long _UNK_0060ad04;
extern "C" unsigned long _UNK_0060ad08;
extern "C" unsigned long _UNK_0060ad0c;
extern "C" unsigned long _UNK_0060ad10;
extern "C" unsigned long _UNK_0060ad58;
extern "C" unsigned long _UNK_0060ad5c;
extern "C" unsigned long _UNK_0060ad60;
extern "C" unsigned long _UNK_0060ada4;
extern "C" unsigned long _UNK_0060ada8;
extern "C" unsigned long _UNK_0060adac;
extern "C" unsigned long _UNK_0060adb0;
extern "C" unsigned long _UNK_0060ae08;
extern "C" unsigned long _UNK_0060ae0c;
extern "C" unsigned long _UNK_0060b048;
extern "C" unsigned long _UNK_0060b04c;
extern "C" unsigned long _UNK_0060b050;
extern "C" unsigned long _UNK_0060b054;
extern "C" unsigned long _UNK_0060b058;
extern "C" unsigned long _UNK_0060b408;
extern "C" unsigned long _UNK_0060b40c;
extern "C" unsigned long _UNK_0060b410;
extern "C" unsigned long _UNK_0060b414;
extern "C" unsigned long _UNK_0060b418;
extern "C" unsigned long _UNK_0060b41c;
extern "C" unsigned long _UNK_0060b420;
extern "C" unsigned long _UNK_0060b424;
extern "C" unsigned long _UNK_0060b428;
extern "C" unsigned long _UNK_0060b464;
extern "C" unsigned long _UNK_0060b5e8;
extern "C" unsigned long _UNK_0060b5ec;
extern "C" unsigned long _UNK_0060b600;
extern "C" unsigned long _UNK_0060b628;
extern "C" unsigned long _UNK_0060b890;
extern "C" unsigned long _UNK_0060b894;
extern "C" unsigned long _UNK_0060b898;
extern "C" unsigned long _UNK_0060b89c;
extern "C" unsigned long _UNK_0060b8a0;
extern "C" unsigned long _UNK_0060b9a0;
extern "C" unsigned long _UNK_0060b9a4;
extern "C" unsigned long _UNK_0060bbb4;
extern "C" unsigned long _UNK_0060bbb8;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0060aa40;
extern "C" unsigned long g_0060aa44;
extern "C" unsigned long g_0060ab2a;
extern "C" unsigned long g_0060ab48;
extern "C" unsigned long g_0060ab4c;
extern "C" unsigned long g_0060ab5e;
extern "C" unsigned long g_0060ab8e;
extern "C" unsigned long g_0060ab9a;
extern "C" unsigned long g_0060abf4;
extern "C" unsigned long g_0060abf8;
extern "C" unsigned long g_0060abfc;
extern "C" unsigned long g_0060ac00;
extern "C" unsigned long g_0060ac04;
extern "C" unsigned long g_0060ac08;
extern "C" unsigned long g_0060ac16;
extern "C" unsigned long g_0060ad00;
extern "C" unsigned long g_0060ad04;
extern "C" unsigned long g_0060ad08;
extern "C" unsigned long g_0060ad0c;
extern "C" unsigned long g_0060ad10;
extern "C" unsigned long g_0060ad26;
extern "C" unsigned long g_0060ad36;
extern "C" unsigned long g_0060ad38;
extern "C" unsigned long g_0060ad58;
extern "C" unsigned long g_0060ad5c;
extern "C" unsigned long g_0060ad60;
extern "C" unsigned long g_0060ad7a;
extern "C" unsigned long g_0060ad7c;
extern "C" unsigned long g_0060ad94;
extern "C" unsigned long g_0060ad96;
extern "C" unsigned long g_0060ada4;
extern "C" unsigned long g_0060ada8;
extern "C" unsigned long g_0060adac;
extern "C" unsigned long g_0060adb0;
extern "C" unsigned long g_0060adce;
extern "C" unsigned long g_0060adee;
extern "C" unsigned long g_0060ae08;
extern "C" unsigned long g_0060ae0c;
extern "C" unsigned long g_0060af36;
extern "C" unsigned long g_0060afb4;
extern "C" unsigned long g_0060b048;
extern "C" unsigned long g_0060b04c;
extern "C" unsigned long g_0060b050;
extern "C" unsigned long g_0060b054;
extern "C" unsigned long g_0060b058;
extern "C" unsigned long g_0060b256;
extern "C" unsigned long g_0060b258;
extern "C" unsigned long g_0060b2e4;
extern "C" unsigned long g_0060b326;
extern "C" unsigned long g_0060b3d2;
extern "C" unsigned long g_0060b408;
extern "C" unsigned long g_0060b40c;
extern "C" unsigned long g_0060b410;
extern "C" unsigned long g_0060b414;
extern "C" unsigned long g_0060b418;
extern "C" unsigned long g_0060b41c;
extern "C" unsigned long g_0060b420;
extern "C" unsigned long g_0060b424;
extern "C" unsigned long g_0060b428;
extern "C" unsigned long g_0060b456;
extern "C" unsigned long g_0060b464;
extern "C" unsigned long g_0060b564;
extern "C" unsigned long g_0060b58e;
extern "C" unsigned long g_0060b5e8;
extern "C" unsigned long g_0060b5ec;
extern "C" unsigned long g_0060b5fc;
extern "C" unsigned long g_0060b600;
extern "C" unsigned long g_0060b624;
extern "C" unsigned long g_0060b628;
extern "C" unsigned long g_0060b786;
extern "C" unsigned long g_0060b79a;
extern "C" unsigned long g_0060b7ec;
extern "C" unsigned long g_0060b7fa;
extern "C" unsigned long g_0060b836;
extern "C" unsigned long g_0060b890;
extern "C" unsigned long g_0060b894;
extern "C" unsigned long g_0060b898;
extern "C" unsigned long g_0060b89c;
extern "C" unsigned long g_0060b8a0;
extern "C" unsigned long g_0060b8ee;
extern "C" unsigned long g_0060b9a0;
extern "C" unsigned long g_0060b9a4;
extern "C" unsigned long g_0060bab6;
extern "C" unsigned long g_0060bafc;
extern "C" unsigned long g_0060bbb4;
extern "C" unsigned long g_0060bbb8;
void PetInfoPresenter::tick(float p1)
{
  return;
}

bool PetInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}






void PetInfoPresenter::updateEXP()
{
  return;
}



void PetInfoPresenter::updateFeedNum()
{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  PetInfoPresenter::updateFoodView();
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x130);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  iVar1 = ((PetHttpUtil *)this)->getInstance();
  uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x34));
  iVar1 = ((PetHttpUtil *)this)->getInstance();
  cocos2d::CCString::createWithFormat((char const*)&g_0060b456 + g_0060b464, uVar4, *(undefined4 *)(iVar1 + 0x38));
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar2,uVar4);
  return;
}

PetInfoPresenter::~PetInfoPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}




PetInfoPresenter::PetInfoPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 PetInfoPresenter::create(PetInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x4c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
void PetInfoPresenter::feedPet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::onFoodInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::onFeedPet(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0060ad26 + g_0060ad58);
  if ((int)(intptr_t)p1 != 0) {
    iVar3 = func_0079e55c(p1,*(undefined4 *)(&g_0060ad36 + g_0060ad5c),
                            *(undefined4 *)(&g_0060ad38 + g_0060ad60),0,p4);
    if (*(int *)(iVar3 + 0x14) != 0) {
      ((PetHttpUtil *)this)->getInstance();
      ((PetHttpUtil *)this)->putTrainPetDate();
    }
    return;
  }
                    /* WARNING: Does not return;
  (*pcVar1)();
}

void PetInfoPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  cocos2d::CCNotificationCenter::addObserver(uVar1,((int)this),*(undefined4 *)(&g_0060ad7c + g_0060ada4),0,
             &g_0060ad7a + g_0060ada8,0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  cocos2d::CCNotificationCenter::addObserver(uVar1,((int)this),*(undefined4 *)(&g_0060ad94 + g_0060adac),0,
             &g_0060ad96 + g_0060adb0,0);
  return;
}

undefined4 PetInfoPresenter::initWithView(PetInfoView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),*(undefined4 *)(&g_0060adce + g_0060ae08),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0060adee + g_0060ae0c),0,0x20);
  ((PetHttpUtil *)this)->getInstance();
  ((PetHttpUtil *)this)->getTrainPetDate();
  return 1;
}

void PetInfoPresenter::feedSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::updateFoodView()
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uStack_40;
  undefined4 auStack_3c [2];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = (undefined4)(0);
  uStack_2c = (undefined4)(g_0060b408);
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->push_back(*(int const*)&uStack_2c);
  uStack_2c = (undefined4)(g_0060b40c);
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->push_back(*(int const*)&uStack_2c);
  uStack_2c = (undefined4)(g_0060b410);
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->push_back(*(int const*)&uStack_2c);
  uVar11 = (undefined4)(0);
  do {
    if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar11) {
code_r0x0060b0d0:
      *(undefined4 *)(((int)this) + 0x3c) = 0;
      (**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 300) + 0x90))();
      piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,1);
      (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,1);
      piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,2);
      (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,1);
      piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,0);
      pcVar10 = *(code **)(*piVar4 + 0x4c);
      puVar2 = (undefined4 *)(**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x134) + 0x8c))();
      uVar1 = (undefined4)(func_0079e4fc(*puVar2,0x3f000000));
      iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x134) + 0x8c))());
      uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
      piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
      piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0xd4)))(piVar6,0);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))());
      uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
      uVar5 = (undefined4)(func_0079e59c(uVar5,uVar7));
      0 /* ctorZero */;
      (*pcVar10)(piVar4,&uStack_2c);
code_r0x0060b3de:
      ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
      return;
    }
    uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
    puVar2 = (undefined4 *)((std::vector<int, std::allocator<int>> *)(&iStack_24))->at((unsigned int)uVar11);
    iVar3 = (undefined4)((void)(((DataManager *)(uVar1))->getBackPackItemNum(*puVar2)),(intptr_t)0);
    if (iVar3 != 0) {
      piVar4 = (int *)((std::vector<int, std::allocator<int>> *)(&iStack_24))->at((unsigned int)uVar11);
      iVar9 = (int)*(int *)&(*piVar4);
      if (iVar9 != 0) {
        piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,1);
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
        piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,2);
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
        piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x134);
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0xd4)))(piVar4,0);
        pcVar10 = *(code **)(*piVar4 + 0x4c);
        puVar2 = (undefined4 *)(**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x134) + 0x8c))();
        uVar1 = (undefined4)(func_0079e4fc(*puVar2,0x3f000000));
        iVar8 = (undefined4)(intptr_t)((**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x134) + 0x8c))());
        uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar8 + 4),0x3f000000));
        0 /* ctorZero */;
        (*pcVar10)(piVar4,&uStack_2c);
        piVar4 = (int *)((DataCacheManager *)this)->shareManager();
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
        iVar8 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar1))->objectForKey(iVar9));
        piVar4 = (int *)0x0;
        if (iVar8 != 0) {
          piVar4 = (int *)func_0079e55c(iVar8,*(undefined4 *)((unsigned char *)((char *)&g_0060b256 + (intptr_t)(g_0060b414))),
                                          *(undefined4 *)((unsigned char *)((char *)&g_0060b258 + (intptr_t)(g_0060b418))),0);
        }
        piVar6 = (int *)((BLItemDataView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 300)))->getSprItem();
        pcVar10 = *(code **)(*piVar6 + 0x1d8);
        (**(code **)(*(int *)(piVar4) + (0x58)))(&uStack_40,piVar4);
        func_0079e45c(auStack_3c,uStack_40,&uStack_2c);
        piVar4 = (int *)0 /* ctorZero */;
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
        (*pcVar10)(piVar6,uVar1);
        func_0079e2bc(auStack_3c);
        func_0079e2bc(&uStack_40);
        piVar4 = (int *)((BLItemDataView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 300)))->getSprDebris();
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
        piVar4 = (int *)((BLItemDataView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 300)))->getLabNum();
        pcVar10 = *(code **)(*piVar4 + 0x234);
        cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0060b2e4 + (intptr_t)(g_0060b41c)), iVar3);
        uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        (*pcVar10)(piVar4,uVar1);
        piVar4 = (int *)cocos2d::extension::CCControlButton::create();
        (**(code **)(*(int *)(piVar4) + (0x294)))(piVar4,0);
        pcVar10 = *(code **)(*piVar4 + 0x28c);
        0 /* ctorZero */;
        (*pcVar10)(piVar4,&uStack_2c);
        func_0079e45c(auStack_34,(unsigned char *)((char *)&g_0060b326 + (intptr_t)(g_0060b424)),&uStack_2c);
        uVar1 = (undefined4)(0 /* ctorZero */);
        func_0079e2bc(auStack_34);
        (**(code **)(*(int *)(piVar4) + (0x30c)))(piVar4,uVar1,1);
        pcVar10 = *(code **)(*piVar4 + 0x4c);
        0 /* ctorZero */;
        cocos2d::CCDirector::sharedDirector();
        uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
        uVar1 = (undefined4)(func_0079e4dc(auStack_3c[0],uVar1));
        0 /* ctorZero */;
        cocos2d::CCDirector::sharedDirector();
        uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
        uVar5 = (undefined4)(func_0079e4dc(uStack_30,uVar5));
        0 /* ctorZero */;
        (*pcVar10)(piVar4,&uStack_2c);
        (**(code **)(*(int *)(piVar4) + (0x11c)))(piVar4,1);
        piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
        (**(code **)(*(int *)(piVar6) + (0xcc)))(piVar6,piVar4,3);
        uStack_28 = (undefined4)(0);
        uStack_2c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0060b3d2 + (intptr_t)(g_0060b428))));
        (**(code **)(*(int *)(piVar4) + (0x254)))(piVar4,((int)this),uStack_2c,0,0x20);
        *(int *)(((int)this) + 0x3c) = iVar9;
        goto code_r0x0060b3de;
      }
      goto code_r0x0060b0d0;
    }
    uVar11 = (undefined4)(uVar11 + 1);
  } while( true );
}

void PetInfoPresenter::updateTake(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::IsTakeClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::onExit()
/* DESTROYAUX_V1: 1 处降级 */
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->removeAllObservers((cocos2d::CCObject*)((int)this));
  for (puVar3 = *(undefined4 **)(((int)this) + 0x40); puVar3 != *(undefined4 **)(((int)this) + 0x44);
      puVar3 = puVar3 + 1) {
    uVar2 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
    ((cocos2d::CCSpriteFrameCache *)(uVar2))->removeSpriteFramesFromFile((char const*)*puVar3);
  }
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
  (void)0; /* DESTROYAUX 降级 */
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x30));
  *(undefined4 *)(((int)this) + 0x44) = uVar2;
  for (; iVar4 != ((int)this) + 0x28; iVar4 = func_0079e31c(iVar4)) {
    if (*(int *)(iVar4 + 0x14) != 0) {
      ((cocos2d::CCObject *)this)->release();
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
  }
  return;
}

void PetInfoPresenter::insertNewAnimation(std::string * p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetInfoPresenter::getAnimation(std::string * p1, int p2, int p3)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x28);
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = (undefined4)(intptr_t)(func_0079ea84(iVar3 + 0x10,p1));
    if (iVar1 < 0) {
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0xc));
    }
    else {
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar3 + 8));
      iVar4 = (undefined4)(intptr_t)(iVar3);
    }
  }
  if ((iVar4 == ((int)this) + 0x28) || (iVar1 = func_0079ea84(p1,iVar4 + 0x10), iVar1 < 0)) {
    func_0079e53c(auStack_1c,p1);
    uVar2 = ((void)(((PetInfoPresenter *)(((int)this)))->insertNewAnimation((std::string *)(char *)auStack_1c, p2, p3)),(undefined4)0);
    func_0079e2bc(auStack_1c);
  }
  else {
    uVar2 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
  }
  return;
}

void PetInfoPresenter::UpdateWiewByPetID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

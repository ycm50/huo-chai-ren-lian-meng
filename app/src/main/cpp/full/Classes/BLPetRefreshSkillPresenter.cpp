#include "BLPetRefreshSkillPresenter.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "BLPetRefreshSkillView.h"
#include "BLCommonCostItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLPetSkillIconPresenter.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetData.h"
#include "PetHttpUtil.h"
#include "PetSkillData.h"
#include "PetUserData.h"
#include "PetUserItemData.h"
#include "Toast.h"
#include "UIManager.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006094d4;
extern "C" unsigned long UNK_006094fa;
extern "C" unsigned long UNK_00609540;
extern "C" unsigned long UNK_00609568;
extern "C" unsigned long UNK_006095f8;
extern "C" unsigned long UNK_006097ee;
extern "C" unsigned long UNK_0060982a;
extern "C" unsigned long UNK_0060984e;
extern "C" unsigned long UNK_006098d8;
extern "C" unsigned long UNK_006098da;
extern "C" unsigned long UNK_006098f2;
extern "C" unsigned long UNK_006098f4;
extern "C" unsigned long UNK_00609a10;
extern "C" unsigned long UNK_00609a24;
extern "C" unsigned long UNK_00609a5c;
extern "C" unsigned long UNK_00609ad4;
extern "C" unsigned long UNK_00609ade;
extern "C" unsigned long UNK_00609afc;
extern "C" unsigned long UNK_00609afe;
extern "C" unsigned long UNK_00609d86;
extern "C" unsigned long UNK_00609d9a;
extern "C" unsigned long UNK_00609ddc;
extern "C" unsigned long UNK_00609e52;
extern "C" unsigned long UNK_00609e80;
extern "C" unsigned long _UNK_0060952c;
extern "C" unsigned long _UNK_00609530;
extern "C" unsigned long _UNK_00609544;
extern "C" unsigned long _UNK_0060956c;
extern "C" unsigned long _UNK_006095fc;
extern "C" unsigned long _UNK_00609648;
extern "C" unsigned long _UNK_0060964c;
extern "C" unsigned long _UNK_00609650;
extern "C" unsigned long _UNK_006097f8;
extern "C" unsigned long _UNK_006097fc;
extern "C" unsigned long _UNK_00609800;
extern "C" unsigned long _UNK_00609804;
extern "C" unsigned long _UNK_00609880;
extern "C" unsigned long _UNK_00609884;
extern "C" unsigned long _UNK_00609904;
extern "C" unsigned long _UNK_00609908;
extern "C" unsigned long _UNK_0060990c;
extern "C" unsigned long _UNK_00609910;
extern "C" unsigned long _UNK_00609978;
extern "C" unsigned long _UNK_00609a30;
extern "C" unsigned long _UNK_00609a34;
extern "C" unsigned long _UNK_00609aa0;
extern "C" unsigned long _UNK_00609b60;
extern "C" unsigned long _UNK_00609b64;
extern "C" unsigned long _UNK_00609b68;
extern "C" unsigned long _UNK_00609b6c;
extern "C" unsigned long _UNK_00609d24;
extern "C" unsigned long _UNK_00609de0;
extern "C" unsigned long _UNK_00609de4;
extern "C" unsigned long _UNK_00609de8;
extern "C" unsigned long _UNK_00609dec;
extern "C" unsigned long _UNK_00609fb8;
extern "C" unsigned long _UNK_00609fbc;
extern "C" unsigned long _UNK_00609fc0;
extern "C" unsigned long _UNK_00609fc4;
extern "C" unsigned long _UNK_00609fc8;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long extraout_r2_01;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006094d4;
extern "C" unsigned long g_006094fa;
extern "C" unsigned long g_0060952c;
extern "C" unsigned long g_00609530;
extern "C" unsigned long g_00609540;
extern "C" unsigned long g_00609544;
extern "C" unsigned long g_00609568;
extern "C" unsigned long g_0060956c;
extern "C" unsigned long g_006095f8;
extern "C" unsigned long g_006095fc;
extern "C" unsigned long g_00609648;
extern "C" unsigned long g_0060964c;
extern "C" unsigned long g_00609650;
extern "C" unsigned long g_006097ee;
extern "C" unsigned long g_006097f8;
extern "C" unsigned long g_006097fc;
extern "C" unsigned long g_00609800;
extern "C" unsigned long g_00609804;
extern "C" unsigned long g_0060982a;
extern "C" unsigned long g_0060984e;
extern "C" unsigned long g_00609880;
extern "C" unsigned long g_00609884;
extern "C" unsigned long g_006098d8;
extern "C" unsigned long g_006098da;
extern "C" unsigned long g_006098f2;
extern "C" unsigned long g_006098f4;
extern "C" unsigned long g_00609904;
extern "C" unsigned long g_00609908;
extern "C" unsigned long g_0060990c;
extern "C" unsigned long g_00609910;
extern "C" unsigned long g_00609978;
extern "C" unsigned long g_00609a10;
extern "C" unsigned long g_00609a24;
extern "C" unsigned long g_00609a30;
extern "C" unsigned long g_00609a34;
extern "C" unsigned long g_00609a5c;
extern "C" unsigned long g_00609aa0;
extern "C" unsigned long g_00609ad4;
extern "C" unsigned long g_00609ade;
extern "C" unsigned long g_00609afc;
extern "C" unsigned long g_00609afe;
extern "C" unsigned long g_00609b60;
extern "C" unsigned long g_00609b64;
extern "C" unsigned long g_00609b68;
extern "C" unsigned long g_00609b6c;
extern "C" unsigned long g_00609d24;
extern "C" unsigned long g_00609d86;
extern "C" unsigned long g_00609d9a;
extern "C" unsigned long g_00609ddc;
extern "C" unsigned long g_00609de0;
extern "C" unsigned long g_00609de4;
extern "C" unsigned long g_00609de8;
extern "C" unsigned long g_00609dec;
extern "C" unsigned long g_00609e52;
extern "C" unsigned long g_00609e80;
extern "C" unsigned long g_00609fb8;
extern "C" unsigned long g_00609fbc;
extern "C" unsigned long g_00609fc0;
extern "C" unsigned long g_00609fc4;
extern "C" unsigned long g_00609fc8;
bool BLPetRefreshSkillPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLPetRefreshSkillPresenter::~BLPetRefreshSkillPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006094d4 + g_0060952c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006094fa + g_00609530,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined4 BLPetRefreshSkillPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar2 = (undefined4)(g_00609648);
  0 /* ctorZero */;
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(0x40800000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_0060964c)))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(g_00609650)))));
  0 /* ctorZero */;
  return ((int)this);
}


BLPetRefreshSkillPresenter::BLPetRefreshSkillPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060982a + g_00609880);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060984e + g_00609884,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(10)) = 8;
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLPetRefreshSkillPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLPetRefreshSkillPresenter::updateCostData()
{
  ((BLCommonCostItemPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x108))->updateWithId(g_00609978);
  ((BLCommonCostItemPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x20) + 0x11c) + 0x108))->updateNum(1);
  return;
}



void BLPetRefreshSkillPresenter::updateWithData(PetUserItemData* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x110))->reloadData(0, 1);
  BLPetRefreshSkillPresenter::updatePetSkill();
  BLPetRefreshSkillPresenter::updateCostData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLPetRefreshSkillPresenter::numOfCellItem(BLTableView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::updatePetSkill()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::initWithView(BLPetRefreshSkillView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  uVar2 = (undefined4)(0x20);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00609a5c + (intptr_t)(g_00609aa0))),0,
             0x20,p1,*(undefined4 *)((unsigned char *)((char *)&g_00609a5c + (intptr_t)(g_00609aa0))),0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x110))->reloadData(0, 1);
  BLPetRefreshSkillPresenter::updatePetSkill();
  return;
}

void BLPetRefreshSkillPresenter::updateWithPet(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  iStack_1c = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00609ad4 + (intptr_t)(g_00609b60)));
  iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00609ade + (intptr_t)(g_00609b64))) + 0xc);
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar2 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_00609afc + (intptr_t)(g_00609b68))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00609afe + (intptr_t)(g_00609b6c))),0), iVar2 != 0)) {
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(&iStack_20,uVar3);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x188)))());
  func_0079e53c(&iStack_1c,&iStack_20);
  uVar3 = (undefined4)(((PetUserData *)uVar3)->getItemData((std::string)(char*)iStack_1c));
  func_0079e2bc(&iStack_1c);
  BLPetRefreshSkillPresenter::updateWithData((PetUserItemData*)uVar3);
  func_0079e2bc(&iStack_20);
  return;
}

void BLPetRefreshSkillPresenter::chagePetSkill()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::onBtnRefresh(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetRefreshSkillPresenter::upDatePetSkillAnimation()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "BLRankRewardItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRankRewardItemNumItem.h"
#include "BLRankRewardItemView.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "RichTextData.h"
#include "Toast.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064122c;
extern "C" unsigned long UNK_00641240;
extern "C" unsigned long UNK_006412a4;
extern "C" unsigned long UNK_0064132a;
extern "C" unsigned long UNK_00641408;
extern "C" unsigned long UNK_00641424;
extern "C" unsigned long UNK_006414a8;
extern "C" unsigned long UNK_006414bc;
extern "C" unsigned long UNK_0064162e;
extern "C" unsigned long UNK_0064166a;
extern "C" unsigned long UNK_006416ea;
extern "C" unsigned long UNK_006417b6;
extern "C" unsigned long UNK_006418dc;
extern "C" unsigned long UNK_006419ba;
extern "C" unsigned long UNK_00641a32;
extern "C" unsigned long UNK_00641ae0;
extern "C" unsigned long UNK_00641aea;
extern "C" unsigned long UNK_00641c0e;
extern "C" unsigned long UNK_00641ca2;
extern "C" unsigned long UNK_00641cf8;
extern "C" unsigned long UNK_00641d2a;
extern "C" unsigned long UNK_00641d3c;
extern "C" unsigned long UNK_00641e02;
extern "C" unsigned long _UNK_00641270;
extern "C" unsigned long _UNK_00641274;
extern "C" unsigned long _UNK_006413d4;
extern "C" unsigned long _UNK_006413d8;
extern "C" unsigned long _UNK_006413dc;
extern "C" unsigned long _UNK_006413e0;
extern "C" unsigned long _UNK_00641450;
extern "C" unsigned long _UNK_00641454;
extern "C" unsigned long _UNK_00641458;
extern "C" unsigned long _UNK_006414b0;
extern "C" unsigned long _UNK_0064184c;
extern "C" unsigned long _UNK_00641850;
extern "C" unsigned long _UNK_00641854;
extern "C" unsigned long _UNK_00641858;
extern "C" unsigned long _UNK_0064185c;
extern "C" unsigned long _UNK_00641860;
extern "C" unsigned long _UNK_00641864;
extern "C" unsigned long _UNK_00641868;
extern "C" unsigned long _UNK_0064186c;
extern "C" unsigned long _UNK_00641870;
extern "C" unsigned long _UNK_00641be4;
extern "C" unsigned long _UNK_00641be8;
extern "C" unsigned long _UNK_00641bec;
extern "C" unsigned long _UNK_00641bf0;
extern "C" unsigned long _UNK_00641bf4;
extern "C" unsigned long _UNK_00641bf8;
extern "C" unsigned long _UNK_00641bfc;
extern "C" unsigned long _UNK_00641d68;
extern "C" unsigned long _UNK_00641d6c;
extern "C" unsigned long _UNK_00641d70;
extern "C" unsigned long _UNK_00641d74;
extern "C" unsigned long _UNK_00641d78;
extern "C" unsigned long _UNK_00641e3c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0064122c;
extern "C" unsigned long g_00641240;
extern "C" unsigned long g_00641270;
extern "C" unsigned long g_00641274;
extern "C" unsigned long g_006412a4;
extern "C" unsigned long g_0064132a;
extern "C" unsigned long g_006413d4;
extern "C" unsigned long g_006413d8;
extern "C" unsigned long g_006413dc;
extern "C" unsigned long g_006413e0;
extern "C" unsigned long g_00641408;
extern "C" unsigned long g_00641424;
extern "C" unsigned long g_00641450;
extern "C" unsigned long g_00641454;
extern "C" unsigned long g_00641458;
extern "C" unsigned long g_006414a8;
extern "C" unsigned long g_006414b0;
extern "C" unsigned long g_006414bc;
extern "C" unsigned long g_0064162e;
extern "C" unsigned long g_0064166a;
extern "C" unsigned long g_006416ea;
extern "C" unsigned long g_006417b6;
extern "C" unsigned long g_0064184c;
extern "C" unsigned long g_00641850;
extern "C" unsigned long g_00641854;
extern "C" unsigned long g_00641858;
extern "C" unsigned long g_0064185c;
extern "C" unsigned long g_00641860;
extern "C" unsigned long g_00641864;
extern "C" unsigned long g_00641868;
extern "C" unsigned long g_0064186c;
extern "C" unsigned long g_00641870;
extern "C" unsigned long g_006418dc;
extern "C" unsigned long g_006419ba;
extern "C" unsigned long g_00641a32;
extern "C" unsigned long g_00641ae0;
extern "C" unsigned long g_00641aea;
extern "C" unsigned long g_00641be4;
extern "C" unsigned long g_00641be8;
extern "C" unsigned long g_00641bec;
extern "C" unsigned long g_00641bf0;
extern "C" unsigned long g_00641bf4;
extern "C" unsigned long g_00641bf8;
extern "C" unsigned long g_00641bfc;
extern "C" unsigned long g_00641c0e;
extern "C" unsigned long g_00641ca2;
extern "C" unsigned long g_00641cf8;
extern "C" unsigned long g_00641d2a;
extern "C" unsigned long g_00641d3c;
extern "C" unsigned long g_00641d68;
extern "C" unsigned long g_00641d6c;
extern "C" unsigned long g_00641d70;
extern "C" unsigned long g_00641d74;
extern "C" unsigned long g_00641d78;
extern "C" unsigned long g_00641e02;
extern "C" unsigned long g_00641e3c;
void BLRankRewardItemPresenter::onExit()
{
  return;
}

BLRankRewardItemPresenter::~BLRankRewardItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00641240 + g_00641274,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRankRewardItemPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((CircusData *)this)->getMe());
  ((CircusData *)uVar1)->GetDataFromNet(8, 1);
  return;
}

void BLRankRewardItemPresenter::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_2c [16];
  int iStack_1c;
  
  piVar6 = *(int **)(&g_006412a4 + g_006413d4);
  iStack_1c = (int)*(int *)&(*piVar6);
  puVar8 = (undefined4 *)(((int)this) + 0xec);
  if (*(char *)(((int)this) + 0xe8) == '\0') {
    uVar1 = (undefined4)(func_0079e57c(*puVar8));
    iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar1),(int)(0))));
    if (iVar2 == 0) {
      *puVar8 = uVar1;
    }
    else {
      *puVar8 = g_006413d8;
    }
  }
  else {
    uVar1 = (undefined4)(func_0079e57c(*puVar8));
    *puVar8 = uVar1;
    (void)(((long long)::memset((void *)(auStack_2c),(int)(0),(size_t)(0xf))));
    uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar1)))));
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_006413dc)))));
    uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_006413dc)))))))));
    func_0079e964(uVar3,0xe10);
    uVar4 = (undefined4)(((long long)((int)(extraout_r1) / (int)(0x3c))));
    func_0079e964(uVar3,0x3c);
    puVar7 = (undefined4 *)(((int)this) + 0xe4);
    (void)(((long long)::sprintf((char *)(auStack_2c),(char const *)(&g_0064132a + g_006413e0),uVar1,uVar4,extraout_r1_00)));
    piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getLabTime();
    (**(code **)(*piVar5 + 0x234))(piVar5,auStack_2c);
    iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(*puVar8),(int)(0))));
    if (iVar2 != 0) {
      *(char *)(((int)this) + 0xe8) = '\0';
      uVar1 = (undefined4)(((CircusData *)this)->getMe());
      ((CircusData *)uVar1)->GetDataFromNet(1, 1);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getBtnGet();
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getLabGet();
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getLabReward();
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getSprIcon();
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getLabNext();
      (**(code **)(*piVar5 + 0x90))(piVar5,0);
      piVar5 = (int *)((BLRankRewardItemView *)*puVar7)->getLabTime();
      (**(code **)(*piVar5 + 0x90))(piVar5,0);
    }
  }
  if (iStack_1c != *piVar6) {
    func_0079e914();
  }
  return;
}

void BLRankRewardItemPresenter::onEnter()
{
  int iVar1;
  
  iVar1 = ((CircusData *)this)->getMe();
  *(undefined4 *)(((int)this) + 0xec) = *(undefined4 *)(iVar1 + 400);
  return;
}

BLRankRewardItemPresenter::BLRankRewardItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(undefined1 *)(((int)this) + 0x3a) = 0;
  *(int *)((int)this + 4*(0x3b)) = g_00641454;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00641424 + g_00641458,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRankRewardItemPresenter::create(BLRankRewardItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xf8))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRankRewardItemPresenter::initWithView(BLRankRewardItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0xe4) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLRankRewardItemView *)p1)->getBtnGet();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006414a8 + g_006414b0),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRankRewardItemPresenter::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRankRewardItemPresenter::onGetReward()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  puVar7 = (undefined4 *)(((int)this) + 0xe4);
  piVar6 = *(int **)((unsigned char *)((char *)&g_00641c0e + (intptr_t)(g_00641d68)));
  iStack_1c = (int)*(int *)&(*piVar6);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getBtnGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getLabGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getLabReward();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getSprIcon();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getLabNext();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar7))->getLabTime();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  *(undefined1 *)(((int)this) + 0xe8) = 1;
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  iVar3 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
  *(undefined4 *)(iVar3 + 0x14) = 1;
  func_0079e34c(auStack_30,0,0x14);
  func_0079e904(auStack_30,(unsigned char *)((char *)&g_00641ca2 + (intptr_t)(g_00641d6c)),*(int *)(((int)this) + 0xf0),
                  *(undefined4 *)(((int)this) + 0xf4));
  uVar4 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_38,auStack_30,auStack_3c);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_34);
  func_0079e52c(iVar3 + 0x18,auStack_34);
  func_0079e2bc(auStack_34);
  func_0079e2bc(auStack_38);
  ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)iVar3);
  iVar5 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
  iVar3 = (undefined4)(intptr_t)(g_00641d70);
  *(undefined4 *)(iVar5 + 0x14) = 3;
  func_0079e2dc(iVar5 + 0x18,&g_00641cf8 + iVar3);
  ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)iVar5);
  uVar4 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)(uVar4))->showRichText((cocos2d::CCArray*)uVar2);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0xf0));
  piVar1 = (int *)func_0079e2fc(0x18);
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(g_00641d74);
  piVar1[5] = iVar5;
  *piVar1 = *(int *)(&g_00641d2a + iVar3) + 8;
  ((cocos2d::CCObject *)(piVar1))->autorelease();
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_00641d3c + (intptr_t)(g_00641d78)), (cocos2d::CCObject*)piVar1);
  if (iStack_1c != *piVar6) {
    func_0079e914();
    func_0079e2cc(piVar1);
    func_0079e30c();
  }
  return;
}

void BLRankRewardItemPresenter::onGetRewardFail()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  puVar4 = (undefined4 *)(((int)this) + 0xe4);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getBtnGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getLabGet();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getLabReward();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getSprIcon();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getLabNext();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  piVar1 = (int *)((BLRankRewardItemView *)(*puVar4))->getLabTime();
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  *(undefined1 *)(((int)this) + 0xe8) = 1;
  uVar2 = (undefined4)(((Toast *)this)->sharedToast());
  uVar3 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00641e02 + (intptr_t)(g_00641e3c)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

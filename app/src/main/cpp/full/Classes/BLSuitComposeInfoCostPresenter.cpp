#include "BLSuitComposeInfoCostPresenter.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLSuitComposeInfoItemPresenter.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RichTextData.h"
#include "SuitEquipEquipData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068a634;
extern "C" unsigned long UNK_0068a648;
extern "C" unsigned long UNK_0068ac0a;
extern "C" unsigned long UNK_0068ac20;
extern "C" unsigned long UNK_0068b044;
extern "C" unsigned long UNK_0068b06c;
extern "C" unsigned long UNK_0068b1d4;
extern "C" unsigned long _UNK_0068a678;
extern "C" unsigned long _UNK_0068a67c;
extern "C" unsigned long _UNK_0068ac4c;
extern "C" unsigned long _UNK_0068ac50;
extern "C" unsigned long _UNK_0068b138;
extern "C" unsigned long _UNK_0068b13c;
extern "C" unsigned long _UNK_0068b140;
extern "C" unsigned long _UNK_0068b304;
extern "C" unsigned long _UNK_0068b308;
extern "C" unsigned long _UNK_0068b30c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0068a634;
extern "C" unsigned long g_0068a648;
extern "C" unsigned long g_0068a678;
extern "C" unsigned long g_0068a67c;
extern "C" unsigned long g_0068ac0a;
extern "C" unsigned long g_0068ac20;
extern "C" unsigned long g_0068ac4c;
extern "C" unsigned long g_0068ac50;
extern "C" unsigned long g_0068b044;
extern "C" unsigned long g_0068b06c;
extern "C" unsigned long g_0068b138;
extern "C" unsigned long g_0068b13c;
extern "C" unsigned long g_0068b140;
extern "C" unsigned long g_0068b1d4;
extern "C" unsigned long g_0068b304;
extern "C" unsigned long g_0068b308;
extern "C" unsigned long g_0068b30c;
BLSuitComposeInfoCostPresenter::~BLSuitComposeInfoCostPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a648 + g_0068a67c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoCostPresenter::BLSuitComposeInfoCostPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(undefined1 *)(((int)this) + 6) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068ac20 + g_0068ac50,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeInfoCostPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====

undefined4 BLSuitComposeInfoCostPresenter::initNumData(int p1, int p2)
{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  auStack_ec[4] = 0xa1;
  auStack_ec[0] = 0;
  auStack_ec[1] = 0xff;
  auStack_ec[2] = 0;
  auStack_ec[3] = 0;
  auStack_ec[5] = 0x1b;
  auStack_ec[6] = 0;
  auStack_ec[7] = 0;
  auStack_ec[8] = 0;
  if (p1 < p2) {
    auStack_ec[0] = 0xff;
    auStack_ec[1] = 0;
    *(undefined1 *)(((int)this) + 0x18) = 0;
  }
  ConvertToString<int>(auStack_e0, p1, 0);
  func_0079e45c(auStack_dc,(unsigned char *)((char *)&g_0068b044 + (intptr_t)(g_0068b138)),auStack_d4);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,p2);
  func_0079e45c(auStack_f0,(unsigned char *)((char *)&g_0068b06c + (intptr_t)(g_0068b13c)),auStack_f4);
  func_0079e46c(auStack_d8,auStack_c8);
  func_0079e2bc(auStack_f0);
  func_0079e47c(auStack_d4);
  iVar6 = 0;
  do {
    iVar3 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    *(undefined4 *)(iVar3 + 0x14) = 1;
    func_0079e52c(iVar3 + 0x18,auStack_e0 + iVar6 * 4);
    iVar5 = (undefined4)(intptr_t)(iVar6 * 3);
    *(undefined1 *)(iVar3 + 0x24) = auStack_ec[iVar5];
    uVar1 = (undefined4)(intptr_t)(auStack_ec[iVar5 + 2]);
    *(undefined1 *)(iVar3 + 0x25) = auStack_ec[iVar5 + 1];
    *(undefined1 *)(iVar3 + 0x26) = uVar1;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0068b140),(int)(uVar4)))));
    uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0068b140),(int)(uVar4)))))))));
    *(undefined4 *)(iVar3 + 0x28) = uVar4;
    ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)iVar3);
    iVar6 = (undefined4)(intptr_t)(iVar6 + 1);
  } while (iVar6 != 3);
  func_0079e2bc(auStack_d8);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  return uVar2;
}

void BLSuitComposeInfoCostPresenter::initWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

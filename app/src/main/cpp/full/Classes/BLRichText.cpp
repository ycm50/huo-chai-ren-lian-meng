#include "BLRichText.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "RichTextData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079ec14(...);
extern "C" long long func_0079ec64(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00521bf8;
extern "C" unsigned long UNK_00521c0c;
extern "C" unsigned long _DAT_00521cac;
extern "C" unsigned long _DAT_00521cb0;
extern "C" unsigned long _DAT_00521fb4;
extern "C" unsigned long _DAT_00521fb8;
extern "C" unsigned long _DAT_00521fbc;
extern "C" unsigned long _DAT_00521fc0;
extern "C" unsigned long _UNK_00521c3c;
extern "C" unsigned long _UNK_00521c40;
extern "C" unsigned long g_00521bf8;
extern "C" unsigned long g_00521c0c;
extern "C" unsigned long g_00521c3c;
extern "C" unsigned long g_00521c40;
extern "C" unsigned long g_00521cac;
extern "C" unsigned long g_00521cb0;
extern "C" unsigned long g_00521fb4;
extern "C" unsigned long g_00521fb8;
extern "C" unsigned long g_00521fbc;
extern "C" unsigned long g_00521fc0;
int BLRichText::getDistanceHeight() const
{
  return *(undefined4 *)(((int)this) + 0xe4);
}

void BLRichText::setDistanceHeight(int p1)
{
  *(undefined4 *)(((int)this) + 0xe4) = p1;
  return;
}

BLRichText::~BLRichText()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00521c0c + g_00521c40,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRichText::BLRichText()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(0x39)) = 0;
  *(int *)((int)this + 4*(0x3a)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRichText"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void BLRichText::parseContent(std::string * p1, RichTextData* p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLRichText::init(cocos2d::CCArray* p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRichText::create(cocos2d::CCArray* p1, int p2, int p3)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0xec);
  ::new ((void *)piVar1) BLRichText();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? BLRichText */
  iVar2 = (undefined4)(intptr_t)(((BLRichText *)(((int)this)))->init((cocos2d::CCArray*)p1, p2, p3));
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return;
}

undefined4 BLRichText::parseNewLine(std::string * p1, RichTextData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

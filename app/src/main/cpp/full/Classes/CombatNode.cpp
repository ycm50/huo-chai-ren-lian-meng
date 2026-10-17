#include "CombatNode.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079ebb4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004d7804;
extern "C" unsigned long UNK_004d7818;
extern "C" unsigned long UNK_004d786e;
extern "C" unsigned long UNK_004d788e;
extern "C" unsigned long UNK_004d78a0;
extern "C" unsigned long UNK_004d78e0;
extern "C" unsigned long UNK_004d7968;
extern "C" unsigned long UNK_004d797a;
extern "C" unsigned long UNK_004d798e;
extern "C" unsigned long UNK_004d79f2;
extern "C" unsigned long UNK_004d79fc;
extern "C" unsigned long UNK_004d7a06;
extern "C" unsigned long UNK_004d7a0c;
extern "C" unsigned long UNK_004d7a16;
extern "C" unsigned long UNK_004d7b50;
extern "C" unsigned long UNK_004d7c1a;
extern "C" unsigned long UNK_004d7c3c;
extern "C" unsigned long UNK_004d7c5a;
extern "C" unsigned long UNK_004d7d16;
extern "C" unsigned long UNK_004d7d3a;
extern "C" unsigned long _UNK_004d7848;
extern "C" unsigned long _UNK_004d784c;
extern "C" unsigned long _UNK_004d7878;
extern "C" unsigned long _UNK_004d787c;
extern "C" unsigned long _UNK_004d78cc;
extern "C" unsigned long _UNK_004d78d0;
extern "C" unsigned long _UNK_004d7bd0;
extern "C" unsigned long _UNK_004d7bd4;
extern "C" unsigned long _UNK_004d7bd8;
extern "C" unsigned long _UNK_004d7bdc;
extern "C" unsigned long _UNK_004d7be0;
extern "C" unsigned long _UNK_004d7be4;
extern "C" unsigned long _UNK_004d7be8;
extern "C" unsigned long _UNK_004d7bec;
extern "C" unsigned long _UNK_004d7bf0;
extern "C" unsigned long _UNK_004d7bf4;
extern "C" unsigned long _UNK_004d7bf8;
extern "C" unsigned long _UNK_004d7bfc;
extern "C" unsigned long _UNK_004d7c00;
extern "C" unsigned long _UNK_004d7c04;
extern "C" unsigned long _UNK_004d7c08;
extern "C" unsigned long _UNK_004d7cf4;
extern "C" unsigned long _UNK_004d7cf8;
extern "C" unsigned long _UNK_004d7cfc;
extern "C" unsigned long _UNK_004d7d00;
extern "C" unsigned long _UNK_004d7d7c;
extern "C" unsigned long _UNK_004d7d80;
extern "C" unsigned long g_004d7804;
extern "C" unsigned long g_004d7818;
extern "C" unsigned long g_004d7848;
extern "C" unsigned long g_004d784c;
extern "C" unsigned long g_004d786e;
extern "C" unsigned long g_004d7878;
extern "C" unsigned long g_004d787c;
extern "C" unsigned long g_004d788e;
extern "C" unsigned long g_004d78a0;
extern "C" unsigned long g_004d78cc;
extern "C" unsigned long g_004d78d0;
extern "C" unsigned long g_004d78e0;
extern "C" unsigned long g_004d7968;
extern "C" unsigned long g_004d797a;
extern "C" unsigned long g_004d798e;
extern "C" unsigned long g_004d79f2;
extern "C" unsigned long g_004d79fc;
extern "C" unsigned long g_004d7a06;
extern "C" unsigned long g_004d7a0c;
extern "C" unsigned long g_004d7a16;
extern "C" unsigned long g_004d7b50;
extern "C" unsigned long g_004d7bd0;
extern "C" unsigned long g_004d7bd4;
extern "C" unsigned long g_004d7bd8;
extern "C" unsigned long g_004d7bdc;
extern "C" unsigned long g_004d7be0;
extern "C" unsigned long g_004d7be4;
extern "C" unsigned long g_004d7be8;
extern "C" unsigned long g_004d7bec;
extern "C" unsigned long g_004d7bf0;
extern "C" unsigned long g_004d7bf4;
extern "C" unsigned long g_004d7bf8;
extern "C" unsigned long g_004d7bfc;
extern "C" unsigned long g_004d7c00;
extern "C" unsigned long g_004d7c04;
extern "C" unsigned long g_004d7c08;
extern "C" unsigned long g_004d7c1a;
extern "C" unsigned long g_004d7c3c;
extern "C" unsigned long g_004d7c5a;
extern "C" unsigned long g_004d7cf4;
extern "C" unsigned long g_004d7cf8;
extern "C" unsigned long g_004d7cfc;
extern "C" unsigned long g_004d7d00;
extern "C" unsigned long g_004d7d16;
extern "C" unsigned long g_004d7d3a;
extern "C" unsigned long g_004d7d7c;
extern "C" unsigned long g_004d7d80;
CombatNode::~CombatNode()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004d7818 + g_004d784c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


CombatNode::CombatNode()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004d78a0 + g_004d78d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void CombatNode::onUpdateValue(float p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  piVar3 = (int *)(((int)this) + 0xe8);
  piVar2 = *(int **)(&g_004d7d16 + g_004d7d7c);
  iStack_1c = (int)*(int *)&(*piVar2);
  (void)(((long long)::memset((void *)(auStack_3c),(int)(0),(size_t)(0x20))));
  iVar1 = g_004d7d80;
  *piVar3 = *piVar3 + *(int *)(((int)this) + 0xe4);
  (void)(((long long)::sprintf((char *)(auStack_3c),(char const *)(&g_004d7d3a + iVar1))));
  (**(code **)(**(int **)(((int)this) + 0xf0) + 0x1f0))(*(int **)(((int)this) + 0xf0),auStack_3c);
  if (*(int *)(((int)this) + 0xe4) < 1) {
    if (*(int *)(((int)this) + 0xec) <= *piVar3) goto code_r0x004d7d6c;
  }
  else if (*piVar3 <= *(int *)(((int)this) + 0xec)) goto code_r0x004d7d6c;
  CombatNode::onAniEnd();
code_r0x004d7d6c:
  if (iStack_1c != *piVar2) {
    func_0079e914();
  }
  return;
}

void CombatNode::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void CombatNode::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
undefined8 CombatNode::changeValue()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool CombatNode::init(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CombatNode::onAniEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

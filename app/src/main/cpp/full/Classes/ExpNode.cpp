#include "ExpNode.h"
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
extern "C" unsigned long UNK_004d7de4;
extern "C" unsigned long UNK_004d7df8;
extern "C" unsigned long UNK_004d7e4e;
extern "C" unsigned long UNK_004d7e6e;
extern "C" unsigned long UNK_004d7e80;
extern "C" unsigned long UNK_004d7ec0;
extern "C" unsigned long UNK_004d7f46;
extern "C" unsigned long UNK_004d7f56;
extern "C" unsigned long UNK_004d7f66;
extern "C" unsigned long UNK_004d7fc2;
extern "C" unsigned long UNK_004d7fcc;
extern "C" unsigned long UNK_004d7fd6;
extern "C" unsigned long UNK_004d80f6;
extern "C" unsigned long UNK_004d81b2;
extern "C" unsigned long UNK_004d81d4;
extern "C" unsigned long UNK_004d81f2;
extern "C" unsigned long UNK_004d82ae;
extern "C" unsigned long UNK_004d82d2;
extern "C" unsigned long _UNK_004d7e28;
extern "C" unsigned long _UNK_004d7e2c;
extern "C" unsigned long _UNK_004d7e58;
extern "C" unsigned long _UNK_004d7e5c;
extern "C" unsigned long _UNK_004d7eac;
extern "C" unsigned long _UNK_004d7eb0;
extern "C" unsigned long _UNK_004d8174;
extern "C" unsigned long _UNK_004d8178;
extern "C" unsigned long _UNK_004d817c;
extern "C" unsigned long _UNK_004d8180;
extern "C" unsigned long _UNK_004d8184;
extern "C" unsigned long _UNK_004d8188;
extern "C" unsigned long _UNK_004d818c;
extern "C" unsigned long _UNK_004d8190;
extern "C" unsigned long _UNK_004d8194;
extern "C" unsigned long _UNK_004d8198;
extern "C" unsigned long _UNK_004d819c;
extern "C" unsigned long _UNK_004d81a0;
extern "C" unsigned long _UNK_004d828c;
extern "C" unsigned long _UNK_004d8290;
extern "C" unsigned long _UNK_004d8294;
extern "C" unsigned long _UNK_004d8298;
extern "C" unsigned long _UNK_004d8314;
extern "C" unsigned long _UNK_004d8318;
extern "C" unsigned long g_004d7de4;
extern "C" unsigned long g_004d7df8;
extern "C" unsigned long g_004d7e28;
extern "C" unsigned long g_004d7e2c;
extern "C" unsigned long g_004d7e4e;
extern "C" unsigned long g_004d7e58;
extern "C" unsigned long g_004d7e5c;
extern "C" unsigned long g_004d7e6e;
extern "C" unsigned long g_004d7e80;
extern "C" unsigned long g_004d7eac;
extern "C" unsigned long g_004d7eb0;
extern "C" unsigned long g_004d7ec0;
extern "C" unsigned long g_004d7f46;
extern "C" unsigned long g_004d7f56;
extern "C" unsigned long g_004d7f66;
extern "C" unsigned long g_004d7fc2;
extern "C" unsigned long g_004d7fcc;
extern "C" unsigned long g_004d7fd6;
extern "C" unsigned long g_004d80f6;
extern "C" unsigned long g_004d8174;
extern "C" unsigned long g_004d8178;
extern "C" unsigned long g_004d817c;
extern "C" unsigned long g_004d8180;
extern "C" unsigned long g_004d8184;
extern "C" unsigned long g_004d8188;
extern "C" unsigned long g_004d818c;
extern "C" unsigned long g_004d8190;
extern "C" unsigned long g_004d8194;
extern "C" unsigned long g_004d8198;
extern "C" unsigned long g_004d819c;
extern "C" unsigned long g_004d81a0;
extern "C" unsigned long g_004d81b2;
extern "C" unsigned long g_004d81d4;
extern "C" unsigned long g_004d81f2;
extern "C" unsigned long g_004d828c;
extern "C" unsigned long g_004d8290;
extern "C" unsigned long g_004d8294;
extern "C" unsigned long g_004d8298;
extern "C" unsigned long g_004d82ae;
extern "C" unsigned long g_004d82d2;
extern "C" unsigned long g_004d8314;
extern "C" unsigned long g_004d8318;
ExpNode::~ExpNode()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004d7df8 + g_004d7e2c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


ExpNode::ExpNode()
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
  func_0079e45c(&uStack_14,&g_004d7e80 + g_004d7eb0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void ExpNode::onUpdateValue(float p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  piVar3 = (int *)(((int)this) + 0xe8);
  piVar2 = *(int **)(&g_004d82ae + g_004d8314);
  iStack_1c = (int)*(int *)&(*piVar2);
  (void)(((long long)::memset((void *)(auStack_3c),(int)(0),(size_t)(0x20))));
  iVar1 = g_004d8318;
  *piVar3 = *piVar3 + *(int *)(((int)this) + 0xe4);
  (void)(((long long)::sprintf((char *)(auStack_3c),(char const *)(&g_004d82d2 + iVar1))));
  (**(code **)(**(int **)(((int)this) + 0xf0) + 0x1f0))(*(int **)(((int)this) + 0xf0),auStack_3c);
  if (*(int *)(((int)this) + 0xe4) < 1) {
    if (*(int *)(((int)this) + 0xec) <= *piVar3) goto code_r0x004d8304;
  }
  else if (*piVar3 <= *(int *)(((int)this) + 0xec)) goto code_r0x004d8304;
  ExpNode::onAniEnd();
code_r0x004d8304:
  if (iStack_1c != *piVar2) {
    func_0079e914();
  }
  return;
}

void ExpNode::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void ExpNode::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
undefined8 ExpNode::changeValue()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool ExpNode::init(int p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ExpNode::onAniEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

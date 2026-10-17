#include "umengJniHelper.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e844(...);
extern "C" unsigned long g_0075227a;
extern "C" unsigned long g_00752280;
#include <jni.h>   // P1: _JNIEnv/_jclass/_jmethodID
extern "C" long long func_007520f8(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00752198;
extern "C" unsigned long UNK_007521aa;
extern "C" unsigned long UNK_007521bc;
extern "C" unsigned long UNK_00752266;
extern "C" unsigned long UNK_00752342;
extern "C" unsigned long _DAT_007520f4;
extern "C" unsigned long _DAT_00752244;
extern "C" unsigned long _DAT_00752248;
extern "C" unsigned long _DAT_0075224c;
extern "C" unsigned long _DAT_00752250;
extern "C" unsigned long _DAT_00752254;
extern "C" unsigned long _DAT_00752258;
extern "C" unsigned long _DAT_0075225c;
extern "C" unsigned long _UNK_007521c8;
extern "C" unsigned long _UNK_007521cc;
extern "C" unsigned long _UNK_007521d0;
extern "C" unsigned long _UNK_0075226c;
extern "C" unsigned long _UNK_0075239c;
extern "C" unsigned long g_007520f4;
extern "C" unsigned long g_00752198;
extern "C" unsigned long g_007521aa;
extern "C" unsigned long g_007521bc;
extern "C" unsigned long g_007521c8;
extern "C" unsigned long g_007521cc;
extern "C" unsigned long g_007521d0;
extern "C" unsigned long g_00752244;
extern "C" unsigned long g_00752248;
extern "C" unsigned long g_0075224c;
extern "C" unsigned long g_00752250;
extern "C" unsigned long g_00752254;
extern "C" unsigned long g_00752258;
extern "C" unsigned long g_0075225c;
extern "C" unsigned long g_00752266;
extern "C" unsigned long g_0075226c;
extern "C" unsigned long g_00752342;
extern "C" unsigned long g_0075239c;
_JavaVM* umengJniHelper::getJavaVM()
{
  return (_JavaVM*)(**(undefined4 **)(g_007520f4 + 0x7520ee));
}

void umengJniHelper::getJNIEnv(_JNIEnv** p1)
{
  func_007520f8();
  return;
}

void umengJniHelper::detachEnv()
{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(intptr_t)umengJniHelper::getJavaVM();
  if (iVar1 != 0) {
    piVar2 = (int *)umengJniHelper::getJavaVM();
    (**(code **)(*piVar2 + 0x14))();
  }
  return;
}

void umengJniHelper::globalDeInit()
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 *puVar2;
  int *piStack_14;
  undefined4 uStack_10;
  
  iVar1 = g_007521c8;
  piStack_14 = (int *)0x0;
  uStack_10 = (undefined4)(p3);
  func_007520f8(&piStack_14);
  puVar2 = *(undefined4 **)(&g_00752198 + iVar1);
  (**(code **)(*piStack_14 + 0x58))(piStack_14,*puVar2);
  *puVar2 = 0;
  puVar2 = *(undefined4 **)(&g_007521aa + g_007521cc);
  (**(code **)(*piStack_14 + 0x58))(piStack_14,*puVar2);
  *puVar2 = 0;
  puVar2 = *(undefined4 **)(&g_007521bc + g_007521d0);
  (**(code **)(*piStack_14 + 0x58))(piStack_14,*puVar2);
  *puVar2 = 0;
  return;
}

void umengJniHelper::setJavaVM(_JavaVM* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_c;
  undefined4 uStack_8;
  
  *(undefined4 **)(g_00752244 + 0x7521dc) = (undefined4 *)(intptr_t)this;
  piStack_c = (int *)0x0;
  uStack_8 = (undefined4)(p3);
  func_007520f8(&piStack_c);
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x18))(piStack_c,((intptr_t)"com/umeng/analytics/MobclickAgent")));
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x54))(piStack_c,uVar1));
  iVar2 = ((intptr_t)"com/umeng/analytics/mobclick/game/MobClickCppHelper");
  **(undefined4 **)(g_0075224c + 0x752206) = uVar1;
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x18))(piStack_c,iVar2));
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x54))(piStack_c,uVar1));
  iVar2 = ((intptr_t)"com/umeng/analytics/game/UMGameAgent");
  **(undefined4 **)(g_00752254 + 0x752224) = uVar1;
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x18))(piStack_c,iVar2));
  uVar1 = (undefined4)((**(code **)(*piStack_c + 0x54))(piStack_c,uVar1));
  **(undefined4 **)(g_0075225c + 0x752240) = uVar1;
  return;
}

char const* umengJniHelper::getExternalAssetPath()
{
  return (char const*)(**(undefined4 **)(&g_00752266 + g_0075226c));
}

undefined4 umengJniHelper::jstring2string(_jstring* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined1 auStack_14 [4];
  
  if (p1 == 0) {
    puVar4 = auStack_1c;
  puVar3 = (undefined *)(&g_00752342 + g_0075239c);
  }
  else {
    piStack_18 = (int *)0x0;
    iVar1 = func_007520f8(&piStack_18);
    if (iVar1 != 0) {
      uVar2 = (undefined4)((**(code **)(*piStack_18 + 0x2a4))(piStack_18,p1,0));
      func_0079e45c(auStack_14,uVar2,auStack_24);
      (**(code **)(*piStack_18 + 0x2a8))(piStack_18,p1,uVar2);
      func_0079e53c(((int)this),auStack_14);
      func_0079e2bc(auStack_14);
      return ((int)this);
    }
    puVar4 = auStack_20;
    puVar3 = (undefined *)0x0;
  }
  func_0079e45c(((int)this),puVar3,puVar4);
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void umengJniHelper::setExternalAssetPath(char const* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  func_0079e844(*(undefined4 *)((unsigned char *)((char *)&g_0075227a + (intptr_t)(g_00752280))),((int)this),p3,p4,p4);
  return;
}

void umengJniHelper::getStaticMethodInfo(umengJniMethodInfo_& p1, _jclass* p2, char const* p3, char const* p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void umengJniHelper::getMethodInfo(umengJniMethodInfo_& p1, _jclass* p2, char const* p3, char const* p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

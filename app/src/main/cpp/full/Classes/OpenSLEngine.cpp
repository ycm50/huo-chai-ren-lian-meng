#include "OpenSLEngine.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e5fc(...);
extern "C" unsigned long g_007a72b8;
extern "C" unsigned long g_007a72bc;
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e5cc(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079f2a8(...);
extern "C" long long func_0079f2e8(...);
extern "C" long long func_007a6c38(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_007a7414;
extern "C" unsigned long UNK_007a7482;
extern "C" unsigned long UNK_007a7492;
extern "C" unsigned long UNK_007a7494;
extern "C" unsigned long UNK_007a7496;
extern "C" unsigned long UNK_007a7498;
extern "C" unsigned long UNK_007a749c;
extern "C" unsigned long _DAT_007a7188;
extern "C" unsigned long _DAT_007a718c;
extern "C" unsigned long _DAT_007a7190;
extern "C" unsigned long _DAT_007a7194;
extern "C" unsigned long _DAT_007a7198;
extern "C" unsigned long _DAT_007a719c;
extern "C" unsigned long _DAT_007a71a0;
extern "C" unsigned long _DAT_007a71a4;
extern "C" unsigned long _DAT_007a71a8;
extern "C" unsigned long _DAT_007a766c;
extern "C" unsigned long _DAT_007a7670;
extern "C" unsigned long _DAT_007a7674;
extern "C" unsigned long _DAT_007a7678;
extern "C" unsigned long _UNK_007a72d8;
extern "C" unsigned long _UNK_007a749c;
extern "C" unsigned long _UNK_007a74a0;
extern "C" unsigned long _UNK_007a74a4;
extern "C" unsigned long _UNK_007a74a8;
extern "C" unsigned long _UNK_007a74ac;
extern "C" unsigned long _UNK_007a74b0;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_007a7188;
extern "C" unsigned long g_007a718c;
extern "C" unsigned long g_007a7190;
extern "C" unsigned long g_007a7194;
extern "C" unsigned long g_007a7198;
extern "C" unsigned long g_007a719c;
extern "C" unsigned long g_007a71a0;
extern "C" unsigned long g_007a71a4;
extern "C" unsigned long g_007a71a8;
extern "C" unsigned long g_007a72d8;
extern "C" unsigned long g_007a7414;
extern "C" unsigned long g_007a7482;
extern "C" unsigned long g_007a7492;
extern "C" unsigned long g_007a7494;
extern "C" unsigned long g_007a7496;
extern "C" unsigned long g_007a7498;
extern "C" unsigned long g_007a749c;
extern "C" unsigned long g_007a74a0;
extern "C" unsigned long g_007a74a4;
extern "C" unsigned long g_007a74a8;
extern "C" unsigned long g_007a74ac;
extern "C" unsigned long g_007a74b0;
extern "C" unsigned long g_007a766c;
extern "C" unsigned long g_007a7670;
extern "C" unsigned long g_007a7674;
extern "C" unsigned long g_007a7678;
OpenSLEngine::OpenSLEngine()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  return;
}

void OpenSLEngine::createEngine(void* p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  **(undefined4 **)(g_007a7188 + 0x7a70e2) = (undefined4)(intptr_t)p1;
  func_0079f2e8();
  uVar2 = (undefined4)(func_0079f2a8(((intptr_t)"libandroid.so"),1));
  **(undefined4 **)(g_007a7190 + 0x7a70f8) = uVar2;
  iVar3 = func_0079f2e8();
  iVar1 = g_007a719c;
  if (iVar3 == 0) {
    iVar3 = *(int *)(g_007a719c + 0x7a713c);
    if (iVar3 == 0) {
      pcVar4 = (code *)0 /* ctorZero */;
      (*pcVar4)(iVar1 + 0x7a713c,0,0,0,0,0);
      (**(code **)**(undefined4 **)(iVar1 + 0x7a713c))(*(undefined4 **)(iVar1 + 0x7a713c),0);
      piVar5 = *(int **)(iVar1 + 0x7a713c);
      pcVar4 = *(code **)(*piVar5 + 0xc);
      uVar2 = (undefined4)(0 /* ctorZero */);
      (*pcVar4)(piVar5,uVar2,iVar1 + 0x7a7138);
      uStack_20 = (undefined4)(0 /* ctorZero */);
      aiStack_1c[0] = iVar3;
      (**(code **)(**(int **)(iVar1 + 0x7a7138) + 0x1c))
                (*(int **)(iVar1 + 0x7a7138),iVar1 + 0x7a7134,1,&uStack_20,aiStack_1c);
      (**(code **)**(undefined4 **)(iVar1 + 0x7a7134))(*(undefined4 **)(iVar1 + 0x7a7134),0);
    }
  }
  else {
    func_0079e864(3,((intptr_t)"OPENSL_ENGINE.CPP"),((intptr_t)"%s"));
  }
  return;
}

void OpenSLEngine::setAllEffectState(int p1)
{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = func_007a6c38();
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar2 = func_007a6c38(), iVar1 != iVar2 + 4;
      iVar1 = func_0079e31c(iVar1)) {
    puVar5 = *(undefined4 **)(iVar1 + 0x14);
    uVar3 = (undefined4)(extraout_r2_00);
    for (puVar6 = (undefined4 *)*puVar5; puVar4 = (undefined4 *)puVar5[1], puVar6 != puVar4;
        puVar6 = puVar6 + 1) {
      0 /* ctorZero */;
      uVar3 = (undefined4)(extraout_r2);
    }
  }
  return;
}

void OpenSLEngine::resumeAllEffects()
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = func_007a6c38();
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar2 = func_007a6c38(), iVar1 != iVar2 + 4;
      iVar1 = func_0079e31c(iVar1)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x14);
    for (puVar4 = (undefined4 *)*puVar3; puVar4 != (undefined4 *)puVar3[1]; puVar4 = puVar4 + 1) {
      0 /* ctorZero */;
    }
  }
  return;
}






OpenSLEngine::~OpenSLEngine()
{
  OpenSLEngine::closeEngine();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void OpenSLEngine::setEffectsVolume(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  func_0079e4fc(p1,g_007a72b8,p3,p4,p4);
  sVar1 = (undefined4)(intptr_t)(func_0079e5fc());
  *(short *)(((int)this) + 2) = sVar1 + (short)g_007a72bc;
  iVar2 = (undefined4)(intptr_t)(func_007a6c38());
  for (iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0xc)); iVar3 = (undefined4)(intptr_t)(func_007a6c38(), iVar2 != iVar3 + 4);
      iVar2 = func_0079e31c(iVar2)) {
    puVar4 = *(undefined4 **)(iVar2 + 0x14);
    for (piVar5 = (int *)*puVar4; piVar5 != (int *)puVar4[1]; piVar5 = piVar5 + 1) {
      (**(code **)**(undefined4 **)(*piVar5 + 0x14))
                (*(undefined4 **)(*piVar5 + 0x14),(int)*(short *)(((int)this) + 2));
    }
  }
  return;
}

float OpenSLEngine::getEffectsVolume()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void OpenSLEngine::resumeEffect(unsigned int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OpenSLEngine::setEffectState(unsigned int p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int OpenSLEngine::getEffectState(unsigned int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void OpenSLEngine::closeEngine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 OpenSLEngine::recreatePlayer(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 OpenSLEngine::preloadEffect(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void OpenSLEngine::setEffectLooping(unsigned int p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OpenSLEngine::unloadEffect(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

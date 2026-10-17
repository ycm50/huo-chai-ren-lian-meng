#include "SimpleAudioEngineOpenSL.h"
#include "OpenSLEngine.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include <dlfcn.h>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_007a7bdc;
extern "C" unsigned long g_007a7bbe;
extern "C" unsigned long g_007a7bc8;
extern "C" unsigned long g_007a7b88;
extern "C" unsigned long g_007a7b6a;
extern "C" unsigned long g_007a7b74;
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079f298(...);
extern "C" long long func_0079f2a8(...);
extern "C" long long func_0079f2e8(...);
extern "C" unsigned long DAT_007a7a68;
extern "C" unsigned long UNK_007a7a78;
extern "C" unsigned long UNK_007a7a9a;
extern "C" unsigned long UNK_007a7a9e;
extern "C" unsigned long UNK_007a7ac0;
extern "C" unsigned long UNK_007a7b94;
extern "C" unsigned long _DAT_007a7a30;
extern "C" unsigned long _DAT_007a7a34;
extern "C" unsigned long _DAT_007a7a38;
extern "C" unsigned long _DAT_007a7a3c;
extern "C" unsigned long _DAT_007a7a68;
extern "C" unsigned long _DAT_007a7a6c;
extern "C" unsigned long _DAT_007a7b00;
extern "C" unsigned long _DAT_007a7b5c;
extern "C" unsigned long _DAT_007a7bb0;
extern "C" unsigned long _DAT_007a7bf0;
extern "C" unsigned long _DAT_007a7c04;
extern "C" unsigned long _UNK_007a7aa4;
extern "C" unsigned long _UNK_007a7aa8;
extern "C" unsigned long _UNK_007a7ac8;
extern "C" unsigned long _UNK_007a7b9c;
extern "C" unsigned long g_007a7a30;
extern "C" unsigned long g_007a7a34;
extern "C" unsigned long g_007a7a38;
extern "C" unsigned long g_007a7a3c;
extern "C" unsigned long g_007a7a68;
extern "C" unsigned long g_007a7a6c;
extern "C" unsigned long g_007a7a78;
extern "C" unsigned long g_007a7a9a;
extern "C" unsigned long g_007a7a9e;
extern "C" unsigned long g_007a7aa4;
extern "C" unsigned long g_007a7aa8;
extern "C" unsigned long g_007a7ac0;
extern "C" unsigned long g_007a7ac8;
extern "C" unsigned long g_007a7b00;
extern "C" unsigned long g_007a7b5c;
extern "C" unsigned long g_007a7b94;
extern "C" unsigned long g_007a7b9c;
extern "C" unsigned long g_007a7bb0;
extern "C" unsigned long g_007a7bf0;
extern "C" unsigned long g_007a7c04;
SimpleAudioEngineOpenSL::SimpleAudioEngineOpenSL()
{
  return;
}


undefined4 SimpleAudioEngineOpenSL::sharedEngine()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = g_007a7a68;
  if (*(int *)(g_007a7a68 + 0x7a7a50) == 0) {
    uVar2 = (undefined4)(((long long)::operator new((size_t)(1))));
    0 /* ctorZero */;
    *(undefined4 *)(iVar1 + 0x7a7a50) = uVar2;
  }
  iVar1 = g_007a7a6c;
  ((SimpleAudioEngineOpenSL *)*(undefined4 *)(&g_007a7a68 + g_007a7a6c))->initEngine();
  return *(undefined4 *)(&g_007a7a68 + iVar1);
}

void SimpleAudioEngineOpenSL::end()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(&g_007a7a78 + g_007a7aa4);
  if (*piVar1 != 0) {
    OpenSLEngine::closeEngine();
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((OpenSLEngine *)iVar2)->~OpenSLEngine();
      (void)(::operator delete((void *)(iVar2)));
    }
    iVar2 = g_007a7aa8;
    *(undefined4 *)(&g_007a7a9a + g_007a7aa8) = 0;
    (void)(((long long)::dlclose((void *)(*(undefined4 *)(&g_007a7a9e + iVar2)))));
    *(undefined4 *)(&g_007a7a9e + iVar2) = 0;
  }
  return;
}

SimpleAudioEngineOpenSL::~SimpleAudioEngineOpenSL()
{
  SimpleAudioEngineOpenSL::end();
  return;
}


void SimpleAudioEngineOpenSL::setEffectsVolume(float p1)
{
  int iVar1;
  
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(p1),(int)(0))));
  if (iVar1 != 0) {
    p1 = 0;
  }
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(p1),(int)(0x3f800000))));
  if (iVar1 != 0) {
    p1 = 0x3f800000;
  }
  ((OpenSLEngine *)*(undefined4 *)(g_007a7b00 + 0x7a7af8))->setEffectsVolume(p1);
  return;
}


void SimpleAudioEngineOpenSL::resumeEffect(unsigned int p1)
{
  OpenSLEngine::resumeEffect((unsigned int)*(undefined4 *)(&g_007a7b94 + g_007a7b9c));
  return;
}

void SimpleAudioEngineOpenSL::resumeAllEffects()
{
  ((OpenSLEngine *)*(undefined4 *)(g_007a7bb0 + 0x7a7ba8))->resumeAllEffects();
  return;
}

void SimpleAudioEngineOpenSL::preloadEffect(char const* p1)
{
  OpenSLEngine::preloadEffect((char const*)*(undefined4 *)(g_007a7bf0 + 0x7a7be8));
  return;
}

void SimpleAudioEngineOpenSL::unloadEffect(char const* p1)
{
  OpenSLEngine::unloadEffect((char const*)*(undefined4 *)(g_007a7c04 + 0x7a7bfc));
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
undefined4 SimpleAudioEngineOpenSL::initEngine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

float SimpleAudioEngineOpenSL::getEffectsVolume()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void SimpleAudioEngineOpenSL::playEffect(char const* p1, bool p2)
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(g_007a7b5c + 0x7a7b10);
  iVar1 = (undefined4)(intptr_t)(OpenSLEngine::preloadEffect((char const*)*puVar3));
  if (iVar1 != -1) {
    iVar2 = (undefined4)(intptr_t)(((OpenSLEngine *)*puVar3)->getEffectState((unsigned int)iVar1));
    if (iVar2 == 3) {
      iVar2 = (undefined4)(intptr_t)(((OpenSLEngine *)*puVar3)->recreatePlayer((char const*)p1));
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      OpenSLEngine::setEffectState(*puVar3, iVar1, 1);
      ((OpenSLEngine *)*puVar3)->setEffectState((unsigned int)iVar1, 3, 0);
    }
    ((OpenSLEngine *)*puVar3)->setEffectLooping((unsigned int)iVar1, p2);
  }
  return;
}

void SimpleAudioEngineOpenSL::pauseEffect(unsigned int p1)
{
  undefined4 p4 = 0;

  OpenSLEngine::setEffectState(*(undefined4 *)((unsigned char *)((char *)&g_007a7b6a + (intptr_t)(g_007a7b74))), p1, 2);
  return;
}

void SimpleAudioEngineOpenSL::pauseAllEffects()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  OpenSLEngine::setAllEffectState(*(undefined4 *)(g_007a7b88 + 0x7a7b82));
  return;
}

void SimpleAudioEngineOpenSL::stopEffect(unsigned int p1)
{
  undefined4 p4 = 0;

  OpenSLEngine::setEffectState(*(undefined4 *)((unsigned char *)((char *)&g_007a7bbe + (intptr_t)(g_007a7bc8))), p1, 1);
  return;
}

void SimpleAudioEngineOpenSL::stopAllEffects()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  OpenSLEngine::setAllEffectState(*(undefined4 *)(g_007a7bdc + 0x7a7bd6));
  return;
}

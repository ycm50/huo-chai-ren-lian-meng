#include "BlackBackLayer.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e7c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ca9b4;
extern "C" unsigned long UNK_006ca9c6;
extern "C" unsigned long UNK_006caa14;
extern "C" unsigned long UNK_006caa44;
extern "C" unsigned long UNK_006caa60;
extern "C" unsigned long UNK_006caa80;
extern "C" unsigned long UNK_006caada;
extern "C" unsigned long UNK_006cab24;
extern "C" unsigned long UNK_006cab58;
extern "C" unsigned long UNK_006cac00;
extern "C" unsigned long _DAT_006cabf0;
extern "C" unsigned long _UNK_006ca9b8;
extern "C" unsigned long _UNK_006caa04;
extern "C" unsigned long _UNK_006caa18;
extern "C" unsigned long _UNK_006caab4;
extern "C" unsigned long _UNK_006caab8;
extern "C" unsigned long _UNK_006caabc;
extern "C" unsigned long _UNK_006caac0;
extern "C" unsigned long _UNK_006caac4;
extern "C" unsigned long _UNK_006caae4;
extern "C" unsigned long _UNK_006caae8;
extern "C" unsigned long _UNK_006cab64;
extern "C" unsigned long _UNK_006cab68;
extern "C" unsigned long _UNK_006cab6c;
extern "C" unsigned long _UNK_006cac08;
extern "C" unsigned long _UNK_006cac0c;
extern "C" unsigned long g_006ca9b4;
extern "C" unsigned long g_006ca9b8;
extern "C" unsigned long g_006ca9c6;
extern "C" unsigned long g_006caa04;
extern "C" unsigned long g_006caa14;
extern "C" unsigned long g_006caa18;
extern "C" unsigned long g_006caa44;
extern "C" unsigned long g_006caa60;
extern "C" unsigned long g_006caa80;
extern "C" unsigned long g_006caab4;
extern "C" unsigned long g_006caab8;
extern "C" unsigned long g_006caabc;
extern "C" unsigned long g_006caac0;
extern "C" unsigned long g_006caac4;
extern "C" unsigned long g_006caada;
extern "C" unsigned long g_006caae4;
extern "C" unsigned long g_006caae8;
extern "C" unsigned long g_006cab24;
extern "C" unsigned long g_006cab58;
extern "C" unsigned long g_006cab64;
extern "C" unsigned long g_006cab68;
extern "C" unsigned long g_006cab6c;
extern "C" unsigned long g_006cabf0;
extern "C" unsigned long g_006cac00;
extern "C" unsigned long g_006cac08;
extern "C" unsigned long g_006cac0c;
BlackBackLayer::~BlackBackLayer()
{
                    /* WARNING: Could not recover jumptable at 0x006ca9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006ca9b4 + g_006ca9b8))(((int)this) + -0xe4);
  return;
}

void BlackBackLayer::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}





int * BlackBackLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x188)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x188))));
  0 /* ctorZero */;
  /* VPTR_FIX2 (读取形式) 略过 */;
  piVar1[0x42] = iVar2 + 0x2a0;
  piVar1[0x46] = iVar2 + 0x2e0;
  iVar2 = ((BlackBackLayer *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (5) =====
undefined8 BlackBackLayer::updateFadeOut(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BlackBackLayer::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((cocos2d::CCNode *)(*(undefined4 *)((unsigned char *)((char *)&g_006caada + (intptr_t)(g_006caae4)))))->schedule(0, g_006caae8);
  return;
}

bool BlackBackLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BlackBackLayer::updateFadeIn(float p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = (undefined4)(intptr_t)(g_006cab64);
  uVar5 = (undefined4)(func_0079e59c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006cab24 + (intptr_t)(g_006cab64)))));
  uVar2 = (undefined4)(g_006cab68);
  *(undefined4 *)(&g_006cab24 + iVar1) = uVar5;
  func_0079e4fc(uVar5,uVar2);
  uVar4 = (undefined4)(intptr_t)(func_0079e7c4());
  (**(code **)(*(int *)this + 0x200))(((int)this),uVar4);
  iVar6 = (undefined4)(intptr_t)(func_0079e50c(*(undefined4 *)(&g_006cab24 + iVar1),0x3f000000));
  iVar3 = (undefined4)(intptr_t)(g_006cab6c);
  if (iVar6 != 0) {
    *(undefined4 *)(&g_006cab24 + iVar1) = 0;
    ((cocos2d::CCNode *)(*(undefined4 *)(&g_006cab58 + iVar3)))->unschedule(0);
  }
  return ghidra_CONCAT44(p1,((int)this));
}

undefined8 BlackBackLayer::disappear()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

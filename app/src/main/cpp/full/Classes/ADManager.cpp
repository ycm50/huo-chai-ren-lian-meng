#include "ADManager.h"
#include "CCString.h"
#include "CCArray.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c8730;
extern "C" unsigned long UNK_006c8742;
extern "C" unsigned long _DAT_006c86c4;
extern "C" unsigned long _DAT_006c86c8;
extern "C" unsigned long _DAT_006c86cc;
extern "C" unsigned long _DAT_006c86d0;
extern "C" unsigned long _DAT_006c86d4;
extern "C" unsigned long _DAT_006c86d8;
extern "C" unsigned long _DAT_006c86dc;
extern "C" unsigned long _DAT_006c8914;
extern "C" unsigned long _DAT_006c8918;
extern "C" unsigned long _DAT_006c891c;
extern "C" unsigned long _DAT_006c8920;
extern "C" unsigned long _DAT_006c8924;
extern "C" unsigned long _DAT_006c8928;
extern "C" unsigned long _DAT_006c892c;
extern "C" unsigned long _DAT_006c8930;
extern "C" unsigned long _DAT_006c8964;
extern "C" unsigned long _UNK_006c8758;
extern "C" unsigned long _UNK_006c875c;
extern "C" unsigned long g_006c86c4;
extern "C" unsigned long g_006c86c8;
extern "C" unsigned long g_006c86cc;
extern "C" unsigned long g_006c86d0;
extern "C" unsigned long g_006c86d4;
extern "C" unsigned long g_006c86d8;
extern "C" unsigned long g_006c86dc;
extern "C" unsigned long g_006c8730;
extern "C" unsigned long g_006c8742;
extern "C" unsigned long g_006c8758;
extern "C" unsigned long g_006c875c;
extern "C" unsigned long g_006c8914;
extern "C" unsigned long g_006c8918;
extern "C" unsigned long g_006c891c;
extern "C" unsigned long g_006c8920;
extern "C" unsigned long g_006c8924;
extern "C" unsigned long g_006c8928;
extern "C" unsigned long g_006c892c;
extern "C" unsigned long g_006c8930;
extern "C" unsigned long g_006c8964;
ADManager::~ADManager()
{
  int iVar1;
  
  if (((int)this) != -0x5c) {
    iVar1 = ((int)this) + 0x70;
    while (iVar1 != ((int)this) + 0x5c) {
      iVar1 = iVar1 + -4;
      func_0079e2bc(iVar1);
    }
  }
  return;
}


undefined8 ADManager::checkLenovoAD(int p1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(((int)this) + 0x70) != '\0') {
    iVar3 = 0;
    piVar2 = (int *)(((int)this) + (p1 + 0xd) * 4);
    while( true ) {
      if (*(char *)(((int)this) + p1 + iVar3 * 5) != '\0') {
        iVar1 = (int)*(int *)&(*piVar2);
        *piVar2 = iVar1 + 1;
        if (piVar2[-10] <= iVar1 + 1) {
          *piVar2 = 0;
          iVar1 = ((int)this) + p1 * 4;
          if (iVar3 == 0) {
            cocos2d::CCLog((char const*)&g_006c8730 + g_006c8758, *(undefined4 *)(iVar1 + 0x5c));
            ((PlatformHelp *)this)->showLenovoBanner((char const*)*(undefined4 *)(iVar1 + 0x5c));
          }
          else {
            cocos2d::CCLog((char const*)&g_006c8742 + g_006c875c, *(undefined4 *)(iVar1 + 0x5c));
            ((PlatformHelp *)this)->showLenovoInterAD((char const*)*(undefined4 *)(iVar1 + 0x5c));
          }
        }
      }
      piVar2 = piVar2 + 5;
      if (iVar3 == 1) break;
      iVar3 = 1;
    }
  }
  return ghidra_CONCAT44(p1,((int)this));
}

void ADManager::closeLenovoAD(int p1)
{
  if (*(char *)(((int)this) + 0x70) != '\0') {
    if (*(char *)(((int)this) + p1) != '\0') {
      ((PlatformHelp *)this)->hideLenovoBanner();
    }
    if (*(char *)(((int)this) + p1 + 5) != '\0') {
      ((PlatformHelp *)this)->closeLenovoInterAD();
    }
  }
  return;
}


/* SINGLETON_FIX (R73)：原生成器把 ADManager 的**静态实例指针**误渲染成字符串字面量 `*(int**)("|ɵ")`
   （该地址其实落在原版只读数据段上）-> 把只读数据当地址解引用 -> SEGV_MAPERR 0x00b5c97c
   （真机 tombstone: ADManager::getInstance()+18 ← BLGameScene::onEnter()+48）。
   与本轮 BLGameScene::shareGameScene 是同一族（"全局/静态地址被误渲染成字符串字面量"）。
   改为真实静态指针。 */
static ADManager *s_adManagerInstance = 0;

int ADManager::getInstance()
{
  if (s_adManagerInstance == 0) {
    s_adManagerInstance = (ADManager *)::operator new((size_t)(0x74));
    0 /* ctorZero */;
  }
  return (int)(intptr_t)s_adManagerInstance;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void ADManager::initWithData(std::string * p1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 auStack_1c [2];
  
  func_0079e53c(auStack_1c);
  iVar6 = (undefined4)(intptr_t)(g_006c86c8 + 0x6c857e);
  cocos2d::CCLog((char const*)"======= ad init  %s", *(int *)p1);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  if ((iVar1 != 0) && (iVar2 = ((cocos2d::CCArray *)this)->count(), iVar2 == 2)) {
    for (uVar8 = 0; iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar1))->count(), uVar8 <= iVar2 - 1U);
        uVar8 = uVar8 + 1) {
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar1))->objectAtIndex((unsigned int)uVar8));
      if (iVar2 != 0) {
        func_0079e55c(iVar2,*(undefined4 *)(iVar6 + g_006c86d0),
                        *(undefined4 *)(iVar6 + g_006c86d4),0);
      }
      uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
      if ((iVar2 != 0) && (iVar4 = ((cocos2d::CCArray *)this)->count(), iVar4 == 5)) {
        for (uVar7 = 0; iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar2))->count(), uVar7 <= iVar4 - 1U);
            uVar7 = uVar7 + 1) {
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar2))->objectAtIndex((unsigned int)uVar7));
          if (iVar4 != 0) {
            func_0079e55c(iVar4,*(undefined4 *)(iVar6 + g_006c86d0),
                            *(undefined4 *)(iVar6 + g_006c86d4),0);
          }
          uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
          iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
          if ((iVar4 != 0) && (iVar5 = ((cocos2d::CCArray *)this)->count(), iVar5 == 2)) {
            iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar4))->objectAtIndex(0));
            if (iVar5 != 0) {
              func_0079e55c(iVar5,*(undefined4 *)(iVar6 + g_006c86d0),
                              *(undefined4 *)(iVar6 + g_006c86d4),0);
            }
            ((cocos2d::CCString *)this)->getCString();
            iVar5 = (undefined4)(intptr_t)(func_0079e6c0());
            iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(iVar4))->objectAtIndex((unsigned int)1));
            if (iVar4 != 0) {
              func_0079e55c(iVar4,*(undefined4 *)(iVar6 + g_006c86d0),
                              *(undefined4 *)(iVar6 + g_006c86d4),0);
            }
            ((cocos2d::CCString *)this)->getCString();
            uVar3 = (undefined4)(func_0079e6c0());
            *(char *)(((int)this) + uVar8 * 5 + uVar7) = '\x01' - (iVar5 == 0);
            *(undefined4 *)(((int)this) + uVar7 * 4 + uVar8 * 0x14 + 0xc) = uVar3;
          }
        }
      }
    }
  }
  func_0079e2bc(auStack_1c);
  return;
}

ADManager::ADManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

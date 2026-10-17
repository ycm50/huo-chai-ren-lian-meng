#include "BLFileUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e5cc(...);
extern "C" long long func_0079e61c(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_006c8c04;
extern "C" unsigned long _DAT_006c8c08;
extern "C" unsigned long _DAT_006c8c0c;
extern "C" unsigned long _DAT_006c8c10;
extern "C" unsigned long _DAT_006c8c34;
extern "C" unsigned long g_006c8c04;
extern "C" unsigned long g_006c8c08;
extern "C" unsigned long g_006c8c0c;
extern "C" unsigned long g_006c8c10;
extern "C" unsigned long g_006c8c34;


void BLFileUtils::encodeFileByXOR(char const* p1, char const* p2, char const* p3)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint auStack_1c [2];
  
  iVar1 = func_0079e954(p2);
  auStack_1c[0] = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,((int)this),((intptr_t)"rb"),auStack_1c);
  if (iVar3 == 0) {
    cocos2d::CCMessageBox((char const*)"加密文件找不到", (char const*)((int)this));
  }
  if (auStack_1c[0] != 0) {
    uVar5 = (undefined4)(0);
    for (uVar4 = 0; uVar4 < auStack_1c[0]; uVar4 = uVar4 + 1) {
      *(byte *)(iVar3 + uVar4) = *(byte *)(iVar3 + uVar4) ^ *(byte *)(p2 + uVar5);
      uVar5 = (undefined4)(uVar5 + 1 & -(uint)(uVar5 + 1 < iVar1 - 1U));
    }
  }
  iVar1 = func_0079ead4(p1,g_006c8c0c + 0x6c8bd4);
  if (iVar1 == 0) {
    cocos2d::CCMessageBox((char const*)"加密文件写入失败", (char const*)((int)this));
  }
  func_0079eae4(iVar3,auStack_1c[0],1,iVar1);
  func_0079eaf4(iVar1);
  func_0079e5cc(iVar3);
  return;
}

void BLFileUtils::haveFileInRoot(char const* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(p3);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,((int)this),((intptr_t)"rb"),&uStack_14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLFileUtils::encodeBase64(void const* p1, int p2, char* p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLFileUtils::decodeBase64(char const* p1, void* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

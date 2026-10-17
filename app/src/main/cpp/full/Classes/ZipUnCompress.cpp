#include "ZipUnCompress.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <sys/stat.h>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5cc(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" long long func_0079ed18(...);
extern "C" long long func_0079ed28(...);
extern "C" long long func_0079ed38(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006d112a;
extern "C" unsigned long UNK_006d11b6;
extern "C" unsigned long UNK_006d11d2;
extern "C" unsigned long UNK_006d122c;
extern "C" unsigned long UNK_006d123a;
extern "C" unsigned long UNK_006d1244;
extern "C" unsigned long UNK_006d1252;
extern "C" unsigned long UNK_006d12a8;
extern "C" unsigned long UNK_006d12bc;
extern "C" unsigned long UNK_006d12d4;
extern "C" unsigned long UNK_006d12de;
extern "C" unsigned long UNK_006d1304;
extern "C" unsigned long UNK_006d1354;
extern "C" unsigned long UNK_006d137c;
extern "C" unsigned long UNK_006d138e;
extern "C" unsigned long UNK_006d139a;
extern "C" unsigned long UNK_006d13a8;
extern "C" unsigned long UNK_006d13c4;
extern "C" unsigned long UNK_006d1404;
extern "C" unsigned long UNK_006d142e;
extern "C" unsigned long UNK_006d1510;
extern "C" unsigned long UNK_006d1540;
extern "C" unsigned long _UNK_006d1140;
extern "C" unsigned long _UNK_006d1188;
extern "C" unsigned long _UNK_006d11bc;
extern "C" unsigned long _UNK_006d14b0;
extern "C" unsigned long _UNK_006d14b4;
extern "C" unsigned long _UNK_006d14b8;
extern "C" unsigned long _UNK_006d14bc;
extern "C" unsigned long _UNK_006d14c0;
extern "C" unsigned long _UNK_006d14c4;
extern "C" unsigned long _UNK_006d14c8;
extern "C" unsigned long _UNK_006d14cc;
extern "C" unsigned long _UNK_006d14d0;
extern "C" unsigned long _UNK_006d14d4;
extern "C" unsigned long _UNK_006d14d8;
extern "C" unsigned long _UNK_006d14dc;
extern "C" unsigned long _UNK_006d14e0;
extern "C" unsigned long _UNK_006d14e4;
extern "C" unsigned long _UNK_006d14e8;
extern "C" unsigned long _UNK_006d14ec;
extern "C" unsigned long _UNK_006d14f0;
extern "C" unsigned long _UNK_006d14f4;
extern "C" unsigned long _UNK_006d14f8;
extern "C" unsigned long _UNK_006d14fc;
extern "C" unsigned long _UNK_006d1558;
extern "C" unsigned long _UNK_006d155c;
extern "C" unsigned long g_006d112a;
extern "C" unsigned long g_006d1140;
extern "C" unsigned long g_006d1188;
extern "C" unsigned long g_006d11b6;
extern "C" unsigned long g_006d11bc;
extern "C" unsigned long g_006d11d2;
extern "C" unsigned long g_006d122c;
extern "C" unsigned long g_006d123a;
extern "C" unsigned long g_006d1244;
extern "C" unsigned long g_006d1252;
extern "C" unsigned long g_006d12a8;
extern "C" unsigned long g_006d12bc;
extern "C" unsigned long g_006d12d4;
extern "C" unsigned long g_006d12de;
extern "C" unsigned long g_006d1304;
extern "C" unsigned long g_006d1354;
extern "C" unsigned long g_006d137c;
extern "C" unsigned long g_006d138e;
extern "C" unsigned long g_006d139a;
extern "C" unsigned long g_006d13a8;
extern "C" unsigned long g_006d13c4;
extern "C" unsigned long g_006d1404;
extern "C" unsigned long g_006d142e;
extern "C" unsigned long g_006d14b0;
extern "C" unsigned long g_006d14b4;
extern "C" unsigned long g_006d14b8;
extern "C" unsigned long g_006d14bc;
extern "C" unsigned long g_006d14c0;
extern "C" unsigned long g_006d14c4;
extern "C" unsigned long g_006d14c8;
extern "C" unsigned long g_006d14cc;
extern "C" unsigned long g_006d14d0;
extern "C" unsigned long g_006d14d4;
extern "C" unsigned long g_006d14d8;
extern "C" unsigned long g_006d14dc;
extern "C" unsigned long g_006d14e0;
extern "C" unsigned long g_006d14e4;
extern "C" unsigned long g_006d14e8;
extern "C" unsigned long g_006d14ec;
extern "C" unsigned long g_006d14f0;
extern "C" unsigned long g_006d14f4;
extern "C" unsigned long g_006d14f8;
extern "C" unsigned long g_006d14fc;
extern "C" unsigned long g_006d1510;
extern "C" unsigned long g_006d1540;
extern "C" unsigned long g_006d1558;
extern "C" unsigned long g_006d155c;
ZipUnCompress::~ZipUnCompress()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  func_0079e2bc(((int)this) + 2);
  func_0079e2bc(((int)this) + 1);
  return;
}

bool ZipUnCompress::createDirectory(char const* p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  uVar1 = (undefined4)(((long long)::umask((mode_t)(0))));
  iVar2 = ((long long)::mkdir((char const *)(p1),(mode_t)(g_006d1188)));
  (void)(((long long)::umask((mode_t)(uVar1))));
  bVar4 = true;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0079ed38(1);
    bVar4 = *piVar3 == 0x11;
  }
  return bVar4;
}

void ZipUnCompress::checkStoragePath()
{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(((int)this) + 4) + -0xc);
  if (iVar1 != 0) {
    func_0079e66c(((int)this) + 4);
    if (*(char *)(*(int *)(((int)this) + 4) + iVar1 + -1) != '/') {
      func_0079e854(((int)this) + 4,&g_006d11b6 + g_006d11bc);
    }
  }
  return;
}


ZipUnCompress::ZipUnCompress()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void ZipUnCompress::uncompress()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

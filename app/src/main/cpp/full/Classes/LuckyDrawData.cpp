#include "LuckyDrawData.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2cc(...);
extern "C" unsigned long g_0048cefc;
extern "C" unsigned long g_0048cf00;
extern "C" unsigned long g_0048cf04;
extern "C" unsigned long g_0048cf08;
extern "C" unsigned long g_0048cf0c;
extern "C" unsigned long g_0048cf10;
extern "C" unsigned long g_0048cf14;
extern "C" unsigned long g_0048cf18;
extern "C" unsigned long g_0048cf1c;
extern "C" unsigned long g_0048cf20;
extern "C" unsigned long g_0048cf24;
extern "C" unsigned long g_0048cf28;
extern "C" unsigned long g_0048cf2c;
extern "C" unsigned long g_0048cf30;
extern "C" unsigned long g_0048cf34;
extern "C" unsigned long g_0048cf38;
extern "C" unsigned long g_0048cf3c;
extern "C" unsigned long g_0048cf40;
extern "C" unsigned long g_0048d168;
extern "C" unsigned long g_0048d16c;
extern "C" unsigned long g_0048d170;
extern "C" unsigned long g_0048d174;
extern "C" unsigned long g_0048d178;
extern "C" unsigned long g_0048d17c;
extern "C" unsigned long g_0048d180;
extern "C" unsigned long g_0048d184;
extern "C" unsigned long g_0048d188;
extern "C" unsigned long g_0048d18c;
extern "C" unsigned long g_0048d190;
extern "C" unsigned long g_0048d194;
extern "C" unsigned long g_0048d198;
extern "C" unsigned long g_0048d19c;
extern "C" unsigned long g_0048d1a0;
extern "C" unsigned long g_0048d1a4;
extern "C" unsigned long g_00587046;
extern "C" unsigned long g_005870bc;
extern "C" unsigned long g_005870ac;
extern "C" unsigned long g_005870c0;
extern "C" unsigned long g_005870b6;
extern "C" unsigned long g_005870c4;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

undefined4 LuckyDrawData::parseInfo(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 LuckyDrawData::parseResult(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

LuckyDrawData::~LuckyDrawData()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(0x11));
  iVar2 = *(int *)((int)this + 4*(0x12));
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    func_0079e2bc(iVar1 + 0x18);
    func_0079e2bc(iVar1 + 0x14);
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x11)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xd)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 10)->~vector();
  iVar2 = *(int *)((int)this + 4*(8));
  for (iVar1 = *(int *)((int)this + 4*(7)); iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    func_0079e2bc(iVar1 + 0x18);
    func_0079e2bc(iVar1 + 0x14);
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(7)))));
  }
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  **(undefined4 **)(&g_005870b6 + g_005870c4) = 0;
  return;
}

#include "CommonUseData.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e52c(...);
extern "C" unsigned long g_004f5e3e;
extern "C" unsigned long g_004f5e50;
extern "C" unsigned long g_004f5e28;
extern "C" unsigned long g_004f5e4c;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

CommonUseData::~CommonUseData()
{
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x18);
  if (*(int *)(((int)this) + 0x18) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x18))));
  }
  func_0079e2bc(((int)this) + 8);
  return;
}

void CommonUseData::initAttr(std::vector<int, std::allocator<int>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

CommonUseData::CommonUseData(int p1, int p2, std::string p3, int p4, int p5, int p6)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool CommonUseData::init(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "GemDrawItemInfo.h"
// 兜底声明
extern "C" long long func_0079e2bc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

GemDrawItemInfo::~GemDrawItemInfo()
{
  func_0079e2bc(((int)this) + 0x18);
  func_0079e2bc(((int)this) + 0x14);
  func_0079e2bc(((int)this) + 0x10);
  return;
}

GemDrawItemInfo::GemDrawItemInfo(GemDrawItemInfo const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

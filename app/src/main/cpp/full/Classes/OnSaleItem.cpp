#include "OnSaleItem.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

OnSaleItem::~OnSaleItem()
{
  func_0079e2bc(((int)this) + 0x20);
  func_0079e2bc(((int)this) + 0x1c);
  if (*(int *)(((int)this) + 0x10) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x10))));
  }
  func_0079e2bc(((int)this) + 0xc);
  return;
}

OnSaleItem::OnSaleItem(OnSaleItem const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

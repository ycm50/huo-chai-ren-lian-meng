#include "PracDataItem.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e53c(...);
PracDataItem::~PracDataItem()
{
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x4c)->~vector();
  func_0079e2bc(((int)this) + 0x48);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x3c)->~vector();
  func_0079e2bc(((int)this) + 0x38);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x14)->~vector();
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 8);
  return;
}

PracDataItem::PracDataItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

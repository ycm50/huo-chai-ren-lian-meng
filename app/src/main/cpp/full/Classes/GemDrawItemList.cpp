#include "GemDrawItemList.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
GemDrawItemList::~GemDrawItemList()
{
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xc)->~vector();
  return;
}


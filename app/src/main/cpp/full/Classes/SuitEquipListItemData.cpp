#include "SuitEquipListItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e53c(...);
SuitEquipListItemData::SuitEquipListItemData()
{
  undefined4 p2 = 0;

  func_0079e53c();
  *(undefined1 *)(((int)this) + 4) = *(undefined1 *)(p2 + 4);
  *(undefined1 *)(((int)this) + 5) = *(undefined1 *)(p2 + 5);
  *(undefined4 *)(((int)this) + 8) = *(undefined4 *)(p2 + 8);
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(p2 + 0xc);
  return;
}

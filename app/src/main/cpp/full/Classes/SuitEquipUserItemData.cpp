#include "SuitEquipUserItemData.h"
#include "DataCacheManager.h"
#include "SuitEquipEquipData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
SuitEquipUserItemData::SuitEquipUserItemData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  return;
}

SuitEquipUserItemData::~SuitEquipUserItemData()
{
  return;
}

void SuitEquipUserItemData::initWithData(int p1, int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)this = p1;
  *(int *)((int)this + 4*(1)) = p2;
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xb0))());
  iVar3 = ((SuitEquipEquipData *)uVar2)->getItemById(p1);
  *(int *)((int)this + 4*(2)) = *(undefined4 *)(iVar3 + 4);
  *(int *)((int)this + 4*(3)) = *(undefined4 *)(iVar3 + 0xc);
  return;
}

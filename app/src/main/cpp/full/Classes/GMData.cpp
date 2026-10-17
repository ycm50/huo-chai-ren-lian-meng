#include "GMData.h"
#include "GMSysFactory.h"
#include "ItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079eb24(...);
extern "C" unsigned long _DAT_0047d8ac;
extern "C" unsigned long _DAT_0047d914;
extern "C" unsigned long _DAT_0047d918;
extern "C" unsigned long _DAT_0047d91c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0047d8ac;
extern "C" unsigned long g_0047d914;
extern "C" unsigned long g_0047d918;
extern "C" unsigned long g_0047d91c;
void GMData::Clearinput()
{
  *(undefined4 *)(((int)this) + 4) = 0;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(undefined4 *)(((int)this) + 0xc) = 0;
  return;
}

void GMData::Setgmscene(GM_SCENESTATUS p1)
{
  undefined4 p4 = 0;

  undefined4 *puVar1;
  undefined4 extraout_r2;
  
  GMData::Clearinput();
  puVar1 = *(undefined4 **)(((int)this) + 0x10);
  *(undefined4 *)(((int)this) + 0x14) = p1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,((int)this),extraout_r2,*(code **)*puVar1,p4);
  }
  return;
}

void GMData::UpdateView()
{
  undefined4 p4 = 0;

  int extraout_r1;
  uint uVar1;
  
  uVar1 = (undefined4)(*(int *)(((int)this) + 0x14) + g_0047d8ac);
  if (uVar1 < 8) {
    func_0079e6d0(uVar1,((int)this),g_0047d8ac,uVar1,p4);
    if (*(int **)(extraout_r1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_r1 + 0x10) + 4))();
    }
  }
  return;
}


GMData::~GMData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void GMData::Handle()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = ((void)((GMSysFactory *)this)->createSys((GM_SCENESTATUS)*(undefined4 *)(((int)this) + 0x14)),(int *)0);
  iVar2 = (undefined4)(intptr_t)((**(code **)*piVar1)());
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)(piVar1) + (0xc)))(piVar1), iVar2 != 0)) {
    ((GMData *)(((int)this)))->UpdateView();
  }
  (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
  return;
}

void GMData::initDbEquip()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

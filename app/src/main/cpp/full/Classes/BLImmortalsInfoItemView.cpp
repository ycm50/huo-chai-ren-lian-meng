#include "BLImmortalsInfoItemView.h"
#include "CCLayer.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsInfoItemPresenter.h"
#include "ImmortalsAttr.h"
#include "ItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long UNK_00570710;
extern "C" unsigned long UNK_0057074c;
extern "C" unsigned long UNK_00570774;
extern "C" unsigned long UNK_0057078c;
extern "C" unsigned long UNK_005707d4;
extern "C" unsigned long UNK_0057082c;
extern "C" unsigned long UNK_00570892;
extern "C" unsigned long UNK_005708fc;
extern "C" unsigned long UNK_005709da;
extern "C" unsigned long UNK_00570a04;
extern "C" unsigned long UNK_00570a3c;
extern "C" unsigned long UNK_00570a60;
extern "C" unsigned long UNK_00570a70;
extern "C" unsigned long UNK_00570a80;
extern "C" unsigned long UNK_00570a92;
extern "C" unsigned long UNK_00570aa4;
extern "C" unsigned long UNK_00570b28;
extern "C" unsigned long UNK_00570b38;
extern "C" unsigned long UNK_00570bb4;
extern "C" unsigned long UNK_00570bca;
extern "C" unsigned long UNK_00570bde;
extern "C" unsigned long UNK_00570bf4;
extern "C" unsigned long UNK_00570c4c;
extern "C" unsigned long UNK_00570c84;
extern "C" unsigned long UNK_00570c94;
extern "C" unsigned long UNK_00570ca8;
extern "C" unsigned long UNK_00570cbb;
extern "C" unsigned long UNK_00570cd2;
extern "C" unsigned long UNK_00570d86;
extern "C" unsigned long UNK_00570dc2;
extern "C" unsigned long UNK_00570dfc;
extern "C" unsigned long UNK_00570dfd;
extern "C" unsigned long UNK_00570dfe;
extern "C" unsigned long UNK_00570e68;
extern "C" unsigned long UNK_00570e7a;
extern "C" unsigned long UNK_00570ea4;
extern "C" unsigned long _UNK_0057073c;
extern "C" unsigned long _UNK_00570750;
extern "C" unsigned long _UNK_00570778;
extern "C" unsigned long _UNK_005707c4;
extern "C" unsigned long _UNK_00570ab0;
extern "C" unsigned long _UNK_00570ab4;
extern "C" unsigned long _UNK_00570ab8;
extern "C" unsigned long _UNK_00570abc;
extern "C" unsigned long _UNK_00570ac0;
extern "C" unsigned long _UNK_00570ac4;
extern "C" unsigned long _UNK_00570ac8;
extern "C" unsigned long _UNK_00570acc;
extern "C" unsigned long _UNK_00570ad0;
extern "C" unsigned long _UNK_00570ad4;
extern "C" unsigned long _UNK_00570ad8;
extern "C" unsigned long _UNK_00570adc;
extern "C" unsigned long _UNK_00570ae0;
extern "C" unsigned long _UNK_00570ae4;
extern "C" unsigned long _UNK_00570ae8;
extern "C" unsigned long _UNK_00570aec;
extern "C" unsigned long _UNK_00570af0;
extern "C" unsigned long _UNK_00570af4;
extern "C" unsigned long _UNK_00570af8;
extern "C" unsigned long _UNK_00570afc;
extern "C" unsigned long _UNK_00570d28;
extern "C" unsigned long _UNK_00570d2c;
extern "C" unsigned long _UNK_00570d30;
extern "C" unsigned long _UNK_00570d34;
extern "C" unsigned long _UNK_00570d38;
extern "C" unsigned long _UNK_00570d3c;
extern "C" unsigned long _UNK_00570d40;
extern "C" unsigned long _UNK_00570d44;
extern "C" unsigned long _UNK_00570d48;
extern "C" unsigned long _UNK_00570d4c;
extern "C" unsigned long _UNK_00570d50;
extern "C" unsigned long _UNK_00570d54;
extern "C" unsigned long _UNK_00570d58;
extern "C" unsigned long _UNK_00570d5c;
extern "C" unsigned long _UNK_00570d60;
extern "C" unsigned long _UNK_00570d64;
extern "C" unsigned long _UNK_00570d68;
extern "C" unsigned long _UNK_00570d6c;
extern "C" unsigned long _UNK_00570d70;
extern "C" unsigned long _UNK_00570fc4;
extern "C" unsigned long _UNK_00570fc8;
extern "C" unsigned long _UNK_00570fcc;
extern "C" unsigned long _UNK_00570fd0;
extern "C" unsigned long _UNK_00570fd4;
extern "C" unsigned long _UNK_00570fd8;
extern "C" unsigned long _UNK_00570fdc;
extern "C" unsigned long _UNK_00570fe0;
extern "C" unsigned long _UNK_00570fe4;
extern "C" unsigned long _UNK_00570fe8;
extern "C" unsigned long _UNK_00570fec;
extern "C" unsigned long _UNK_00570ff0;
extern "C" unsigned long _UNK_00570ff4;
extern "C" unsigned long g_00570710;
extern "C" unsigned long g_0057073c;
extern "C" unsigned long g_0057074c;
extern "C" unsigned long g_00570750;
extern "C" unsigned long g_00570774;
extern "C" unsigned long g_00570778;
extern "C" unsigned long g_0057078c;
extern "C" unsigned long g_005707c4;
extern "C" unsigned long g_005707d4;
extern "C" unsigned long g_0057082c;
extern "C" unsigned long g_00570892;
extern "C" unsigned long g_005708fc;
extern "C" unsigned long g_005709da;
extern "C" unsigned long g_00570a04;
extern "C" unsigned long g_00570a3c;
extern "C" unsigned long g_00570a60;
extern "C" unsigned long g_00570a70;
extern "C" unsigned long g_00570a80;
extern "C" unsigned long g_00570a92;
extern "C" unsigned long g_00570aa4;
extern "C" unsigned long g_00570ab0;
extern "C" unsigned long g_00570ab4;
extern "C" unsigned long g_00570ab8;
extern "C" unsigned long g_00570abc;
extern "C" unsigned long g_00570ac0;
extern "C" unsigned long g_00570ac4;
extern "C" unsigned long g_00570ac8;
extern "C" unsigned long g_00570acc;
extern "C" unsigned long g_00570ad0;
extern "C" unsigned long g_00570ad4;
extern "C" unsigned long g_00570ad8;
extern "C" unsigned long g_00570adc;
extern "C" unsigned long g_00570ae0;
extern "C" unsigned long g_00570ae4;
extern "C" unsigned long g_00570ae8;
extern "C" unsigned long g_00570aec;
extern "C" unsigned long g_00570af0;
extern "C" unsigned long g_00570af4;
extern "C" unsigned long g_00570af8;
extern "C" unsigned long g_00570afc;
extern "C" unsigned long g_00570b28;
extern "C" unsigned long g_00570b38;
extern "C" unsigned long g_00570bb4;
extern "C" unsigned long g_00570bca;
extern "C" unsigned long g_00570bde;
extern "C" unsigned long g_00570bf4;
extern "C" unsigned long g_00570c4c;
extern "C" unsigned long g_00570c84;
extern "C" unsigned long g_00570c94;
extern "C" unsigned long g_00570ca8;
extern "C" unsigned long g_00570cbb;
extern "C" unsigned long g_00570cd2;
extern "C" unsigned long g_00570d28;
extern "C" unsigned long g_00570d2c;
extern "C" unsigned long g_00570d30;
extern "C" unsigned long g_00570d34;
extern "C" unsigned long g_00570d38;
extern "C" unsigned long g_00570d3c;
extern "C" unsigned long g_00570d40;
extern "C" unsigned long g_00570d44;
extern "C" unsigned long g_00570d48;
extern "C" unsigned long g_00570d4c;
extern "C" unsigned long g_00570d50;
extern "C" unsigned long g_00570d54;
extern "C" unsigned long g_00570d58;
extern "C" unsigned long g_00570d5c;
extern "C" unsigned long g_00570d60;
extern "C" unsigned long g_00570d64;
extern "C" unsigned long g_00570d68;
extern "C" unsigned long g_00570d6c;
extern "C" unsigned long g_00570d70;
extern "C" unsigned long g_00570d86;
extern "C" unsigned long g_00570dc2;
extern "C" unsigned long g_00570dfc;
extern "C" unsigned long g_00570dfd;
extern "C" unsigned long g_00570dfe;
extern "C" unsigned long g_00570e68;
extern "C" unsigned long g_00570e7a;
extern "C" unsigned long g_00570ea4;
extern "C" unsigned long g_00570fc4;
extern "C" unsigned long g_00570fc8;
extern "C" unsigned long g_00570fcc;
extern "C" unsigned long g_00570fd0;
extern "C" unsigned long g_00570fd4;
extern "C" unsigned long g_00570fd8;
extern "C" unsigned long g_00570fdc;
extern "C" unsigned long g_00570fe0;
extern "C" unsigned long g_00570fe4;
extern "C" unsigned long g_00570fe8;
extern "C" unsigned long g_00570fec;
extern "C" unsigned long g_00570ff0;
extern "C" unsigned long g_00570ff4;
BLImmortalsInfoItemView::~BLImmortalsInfoItemView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00570710 + g_0057073c);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsInfoItemView::BLImmortalsInfoItemView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_0057078c + g_005707c4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x42)) = -1;
  *(int *)((int)this + 4*(0x43)) = -1;
  *(int *)((int)this + 4*(0x44)) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLImmortalsInfoItemView::init(ImmortalsRoleItemData& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * BLImmortalsInfoItemView::create(ImmortalsRoleItemData& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLImmortalsInfoItemView::setCntLblVisible(bool p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0xd4))(((int)this),1000,p3,*(code **)(*(int *)this + 0xd4),p4));
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),1000);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,p1);
  }
  return;
}

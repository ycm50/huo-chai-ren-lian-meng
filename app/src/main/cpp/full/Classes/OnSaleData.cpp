#include "OnSaleData.h"
#include "rapidjson.h"
#include "document.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "OnSaleHttpUtils.h"
#include "OnSaleItem.h"
#include "Toast.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079eb74(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049a698;
extern "C" unsigned long _DAT_0049a77c;
extern "C" unsigned long _DAT_0049a780;
extern "C" unsigned long _DAT_0049aa00;
extern "C" unsigned long _DAT_0049aa04;
extern "C" unsigned long _DAT_0049aa08;
extern "C" unsigned long _DAT_0049aafc;
extern "C" unsigned long _DAT_0049ab00;
extern "C" unsigned long _DAT_0049ab04;
extern "C" unsigned long _DAT_0049ab08;
extern "C" unsigned long _DAT_0049ab0c;
extern "C" unsigned long _DAT_0049ae30;
extern "C" unsigned long _DAT_0049ae34;
extern "C" unsigned long _DAT_0049ae38;
extern "C" unsigned long _DAT_0049ae3c;
extern "C" unsigned long _DAT_0049ae40;
extern "C" unsigned long _DAT_0049ae44;
extern "C" unsigned long _DAT_0049ae48;
extern "C" unsigned long _DAT_0049ae4c;
extern "C" unsigned long _DAT_0049ae50;
extern "C" unsigned long _DAT_0049ae54;
extern "C" unsigned long _DAT_0049b160;
extern "C" unsigned long _DAT_0049b164;
extern "C" unsigned long _DAT_0049b168;
extern "C" unsigned long _DAT_0049b16c;
extern "C" unsigned long _DAT_0049b170;
extern "C" unsigned long _DAT_0049b174;
extern "C" unsigned long _DAT_0049b178;
extern "C" unsigned long _DAT_0049b17c;
extern "C" unsigned long _DAT_0049b180;
extern "C" unsigned long _DAT_0049b184;
extern "C" unsigned long _DAT_0049b188;
extern "C" unsigned long _DAT_0049b18c;
extern "C" unsigned long _DAT_0049b190;
extern "C" unsigned long _DAT_0049b194;
extern "C" unsigned long _DAT_0049b198;
extern "C" unsigned long _DAT_0049b19c;
extern "C" unsigned long _DAT_0049b1a0;
extern "C" unsigned long _DAT_0049b1a4;
extern "C" unsigned long _DAT_0049b1a8;
extern "C" unsigned long _DAT_0049bbd0;
extern "C" unsigned long _DAT_0049bbd4;
extern "C" unsigned long _DAT_0049bbd8;
extern "C" unsigned long _DAT_0049bbdc;
extern "C" unsigned long _DAT_0049bbe0;
extern "C" unsigned long _DAT_0049bbe4;
extern "C" unsigned long _DAT_0049bbe8;
extern "C" unsigned long _DAT_0049bbec;
extern "C" unsigned long _DAT_0049bbf0;
extern "C" unsigned long _DAT_0049bbf4;
extern "C" unsigned long _DAT_0049bbf8;
extern "C" unsigned long _DAT_0049bbfc;
extern "C" unsigned long _DAT_0049bc00;
extern "C" unsigned long _UNK_0049a794;
extern "C" unsigned long _UNK_0049a7bc;
extern "C" unsigned long g_0049a698;
extern "C" unsigned long g_0049a77c;
extern "C" unsigned long g_0049a780;
extern "C" unsigned long g_0049a794;
extern "C" unsigned long g_0049a7bc;
extern "C" unsigned long g_0049aa00;
extern "C" unsigned long g_0049aa04;
extern "C" unsigned long g_0049aa08;
extern "C" unsigned long g_0049aafc;
extern "C" unsigned long g_0049ab00;
extern "C" unsigned long g_0049ab04;
extern "C" unsigned long g_0049ab08;
extern "C" unsigned long g_0049ab0c;
extern "C" unsigned long g_0049ae30;
extern "C" unsigned long g_0049ae34;
extern "C" unsigned long g_0049ae38;
extern "C" unsigned long g_0049ae3c;
extern "C" unsigned long g_0049ae40;
extern "C" unsigned long g_0049ae44;
extern "C" unsigned long g_0049ae48;
extern "C" unsigned long g_0049ae4c;
extern "C" unsigned long g_0049ae50;
extern "C" unsigned long g_0049ae54;
extern "C" unsigned long g_0049b160;
extern "C" unsigned long g_0049b164;
extern "C" unsigned long g_0049b168;
extern "C" unsigned long g_0049b16c;
extern "C" unsigned long g_0049b170;
extern "C" unsigned long g_0049b174;
extern "C" unsigned long g_0049b178;
extern "C" unsigned long g_0049b17c;
extern "C" unsigned long g_0049b180;
extern "C" unsigned long g_0049b184;
extern "C" unsigned long g_0049b188;
extern "C" unsigned long g_0049b18c;
extern "C" unsigned long g_0049b190;
extern "C" unsigned long g_0049b194;
extern "C" unsigned long g_0049b198;
extern "C" unsigned long g_0049b19c;
extern "C" unsigned long g_0049b1a0;
extern "C" unsigned long g_0049b1a4;
extern "C" unsigned long g_0049b1a8;
extern "C" unsigned long g_0049bbd0;
extern "C" unsigned long g_0049bbd4;
extern "C" unsigned long g_0049bbd8;
extern "C" unsigned long g_0049bbdc;
extern "C" unsigned long g_0049bbe0;
extern "C" unsigned long g_0049bbe4;
extern "C" unsigned long g_0049bbe8;
extern "C" unsigned long g_0049bbec;
extern "C" unsigned long g_0049bbf0;
extern "C" unsigned long g_0049bbf4;
extern "C" unsigned long g_0049bbf8;
extern "C" unsigned long g_0049bbfc;
extern "C" unsigned long g_0049bc00;
OnSaleData::OnSaleData()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(g_0049a698 + 0x49a67c);
  *(int *)((int)this + 4*(5)) = iVar1 + 0x28;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  return;
}

undefined8 OnSaleData::getDataCountByType(EnumOnSaleType p1)
{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(((int)this) + 0x24) + p1 * 0xc);
  return ghidra_CONCAT44(piVar1 + 2,piVar1[1] - *piVar1 >> 2);
}

int OnSaleData::getAllOnSaleData()
{
  return ((int)this) + 0x18;
}

OnSaleData::~OnSaleData()
/* DESTROYAUX_V1: 1 处降级 */
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6)));
  iVar1 = (undefined4)(intptr_t)(*(int *)(g_0049a77c + 0x49a700));
  iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(7)));
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(5)) = iVar1 + 0x28;
  for (iVar1 = (undefined4)(intptr_t)(iVar3); iVar1 != iVar5; iVar1 = iVar1 + 0x44) {
    ((OnSaleItem *)(iVar1))->~OnSaleItem();
  }
  *(int *)((int)this + 4*(7)) = iVar3;
  piVar6 = (int *)*(int *)((int)this + 4*(10));
  piVar4 = (int *)*(int *)((int)this + 4*(9));
  for (piVar2 = piVar4; piVar2 != piVar6; piVar2 = piVar2 + 3) {
    if (*piVar2 != 0) {
      func_0079e2cc();
    }
  }
  *(int *)((int)this + 4*(10)) = (int)piVar4;
  (void)0; /* DESTROYAUX 降级 */
  if (*(int *)((int)this + 4*(9)) != 0) {
    func_0079e2cc();
  }
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(7)));
  for (iVar1 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6))); iVar1 != iVar3; iVar1 = iVar1 + 0x44) {
    ((OnSaleItem *)(iVar1))->~OnSaleItem();
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    func_0079e2cc();
  }
  **(undefined4 **)(g_0049a780 + 0x49a770) = 0;
  ((cocos2d::CCObject *)(((int)this)))->~CCObject();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void OnSaleData::getAllDataFromNet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OnSaleData::buyOnSale(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OnSaleData::onSendDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OnSaleData::getItemFormData(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void OnSaleData::onGetDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

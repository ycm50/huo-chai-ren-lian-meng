#include "ChargePointData.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" unsigned long _DAT_0046f994;
extern "C" unsigned long _DAT_0046f9d8;
extern "C" unsigned long _DAT_0046f9dc;
extern "C" unsigned long _DAT_0046fa10;
extern "C" unsigned long _DAT_0046fb1c;
extern "C" unsigned long _DAT_0046fb20;
extern "C" unsigned long _DAT_0046fb24;
extern "C" unsigned long _DAT_0046fb28;
extern "C" unsigned long _DAT_0046fb2c;
extern "C" unsigned long _DAT_0046fc3c;
extern "C" unsigned long _DAT_0046fc40;
extern "C" unsigned long _DAT_0046fc44;
extern "C" unsigned long _DAT_0046fc48;
extern "C" unsigned long _DAT_0046fc4c;
extern "C" unsigned long _DAT_0046fc50;
extern "C" unsigned long _DAT_0046fd54;
extern "C" unsigned long _DAT_0046fd58;
extern "C" unsigned long _DAT_0046fd5c;
extern "C" unsigned long _DAT_0046fd60;
extern "C" unsigned long _DAT_0046fd64;
extern "C" unsigned long _DAT_0046fd68;
extern "C" unsigned long _DAT_0046fe60;
extern "C" unsigned long _DAT_0046fe64;
extern "C" unsigned long _DAT_0046fe68;
extern "C" unsigned long _DAT_0046fe6c;
extern "C" unsigned long _DAT_0046fe70;
extern "C" unsigned long _DAT_0046fe74;
extern "C" unsigned long g_0046f994;
extern "C" unsigned long g_0046f9d8;
extern "C" unsigned long g_0046f9dc;
extern "C" unsigned long g_0046fa10;
extern "C" unsigned long g_0046fb1c;
extern "C" unsigned long g_0046fb20;
extern "C" unsigned long g_0046fb24;
extern "C" unsigned long g_0046fb28;
extern "C" unsigned long g_0046fb2c;
extern "C" unsigned long g_0046fc3c;
extern "C" unsigned long g_0046fc40;
extern "C" unsigned long g_0046fc44;
extern "C" unsigned long g_0046fc48;
extern "C" unsigned long g_0046fc4c;
extern "C" unsigned long g_0046fc50;
extern "C" unsigned long g_0046fd54;
extern "C" unsigned long g_0046fd58;
extern "C" unsigned long g_0046fd5c;
extern "C" unsigned long g_0046fd60;
extern "C" unsigned long g_0046fd64;
extern "C" unsigned long g_0046fd68;
extern "C" unsigned long g_0046fe60;
extern "C" unsigned long g_0046fe64;
extern "C" unsigned long g_0046fe68;
extern "C" unsigned long g_0046fe6c;
extern "C" unsigned long g_0046fe70;
extern "C" unsigned long g_0046fe74;
undefined4 ChargePointData::getishowcwlb() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void ChargePointData::setishowcwlb(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

ChargePointData::~ChargePointData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChargePointData::ChargePointData()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_0046f9dc + 0x46f9ce) + 0xc;
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

int ChargePointData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0046fa10 + 0x46f9e8);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x1c)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void ChargePointData::checkShow()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = ((int)this) + 0x14;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x108))(&uStack_20,piVar1);
  func_0079e52c(iVar4,&uStack_20);
  func_0079e2bc(&uStack_20);
  iVar2 = func_0079e4bc(iVar4,g_0046fb1c + 0x46fa4c);
  if (iVar2 == 0) {
    func_0079e2dc(iVar4,g_0046fb20 + 0x46fa5a);
  }
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x14));
  uVar3 = (undefined4)(((PlatformHelp *)this)->GetUniCom());
  ((PlatformHelp *)&uStack_20)->getICCID();
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"smhchTime=%s&op=%d&id=%s"), uVar5, uVar3, uStack_20);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_30,uVar3,auStack_24);
  func_0079e2bc(&uStack_20);
  func_0079e45c(auStack_28,((intptr_t)"url_giftswitch_get"),auStack_34);
  func_0079e53c(auStack_24,&uStack_30);
  uStack_20 = (undefined4)(*(undefined4 *)(g_0046fb2c + 0x46fab0));
  uStack_1c = (undefined4)(0);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  0 /* ctorZero */;
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_30);
  return;
}

void ChargePointData::checkOnPaying()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = ((int)this) + 0x14;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x108))(&uStack_20,piVar1);
  func_0079e52c(iVar4,&uStack_20);
  func_0079e2bc(&uStack_20);
  iVar2 = func_0079e4bc(iVar4,g_0046fc3c + 0x46fb68);
  if (iVar2 == 0) {
    func_0079e2dc(iVar4,g_0046fc40 + 0x46fb76);
  }
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x14));
  uVar3 = (undefined4)(((PlatformHelp *)this)->GetUniCom());
  ((PlatformHelp *)&uStack_20)->getICCID();
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"smhchTime=%s&op=%d&id=%s"), uVar5, uVar3, uStack_20);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_30,uVar3,auStack_24);
  func_0079e2bc(&uStack_20);
  func_0079e45c(auStack_28,((intptr_t)"url_giftswitch_get"),auStack_38);
  func_0079e45c(auStack_24,g_0046fc4c + 0x46fbc4,auStack_34);
  uStack_20 = (undefined4)(*(undefined4 *)(g_0046fc50 + 0x46fbd0));
  uStack_1c = (undefined4)(0);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  0 /* ctorZero */;
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_30);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void ChargePointData::onCheckPayingCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChargePointData::onCheckShowCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

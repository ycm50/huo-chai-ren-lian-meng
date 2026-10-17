#include "GMSYSSkill.h"
#include "DataManager.h"
#include "PlayerData.h"
#include "RoleData.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_0047e358;
extern "C" unsigned long _DAT_0047e35c;
extern "C" unsigned long _DAT_0047e360;
extern "C" unsigned long _DAT_0047e364;
extern "C" unsigned long _DAT_0047e368;
extern "C" unsigned long _DAT_0047e36c;
extern "C" unsigned long _DAT_0047e370;
extern "C" unsigned long _DAT_0047e374;
extern "C" unsigned long _DAT_0047e378;
extern "C" unsigned long _DAT_0047e37c;
extern "C" unsigned long _DAT_0047e380;
extern "C" unsigned long g_0047e358;
extern "C" unsigned long g_0047e35c;
extern "C" unsigned long g_0047e360;
extern "C" unsigned long g_0047e364;
extern "C" unsigned long g_0047e368;
extern "C" unsigned long g_0047e36c;
extern "C" unsigned long g_0047e370;
extern "C" unsigned long g_0047e374;
extern "C" unsigned long g_0047e378;
extern "C" unsigned long g_0047e37c;
extern "C" unsigned long g_0047e380;
GMSYSSkill::~GMSYSSkill()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 GMSYSSkill::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  int iStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  uVar10 = (undefined4)(0);
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)uVar2)->count());
    if (uVar3 <= uVar10) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)uVar2)->showToast((char const*)"升级成功");
      return 1;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar10));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0047e358 + 0x47e038),
                                        *(undefined4 *)(g_0047e35c + 0x47e03a),0),
       piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x18))(auStack_1c,piVar1);
      iVar4 = (undefined4)(intptr_t)(((long long)::atoi((const char *)(auStack_1c[0]))));
      iVar5 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
      iVar5 = (undefined4)(intptr_t)(*(int *)(iVar5 + 4));
      func_0079e2bc(auStack_1c);
      if (iVar4 == iVar5) {
        iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x38))(piVar1));
        if (iVar4 == 0) {
          uVar2 = (undefined4)(((Toast *)this)->sharedToast());
          ((Toast *)uVar2)->showToast((char const*)"此英雄还未购买");
          return 0;
        }
        piVar6 = (int *)((PlayerData *)this)->create();
        ((PlayerData *)piVar6)->initWithRoleData((RoleData*)piVar1);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        pcVar11 = *(code **)(*piVar1 + 0x4c);
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar8 = (undefined4)((**(code **)(*piVar7 + 0x20))());
        (*pcVar11)(piVar1,uVar8);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        pcVar11 = *(code **)(*piVar1 + 0x54);
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar8 = (undefined4)((**(code **)(*piVar7 + 0x20))());
        (*pcVar11)(piVar1,uVar8);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        pcVar11 = *(code **)(*piVar1 + 0x5c);
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar8 = (undefined4)((**(code **)(*piVar7 + 0x20))());
        (*pcVar11)(piVar1,uVar8);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        pcVar11 = *(code **)(*piVar1 + 100);
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar8 = (undefined4)((**(code **)(*piVar7 + 0x20))());
        (*pcVar11)(piVar1,uVar8);
        iStack_54 = *(int *)(g_0047e364 + 0x47e12e) + 0xc;
        func_0079e69c(&iStack_54,((intptr_t)"roleid"));
        func_0079e69c(&iStack_54,((intptr_t)" = "));
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        (**(code **)(*piVar1 + 0x18))(auStack_50,piVar1);
        0 /* ctorZero */;
        func_0079e874(&iStack_54,auStack_4c);
        func_0079e2bc(auStack_4c);
        func_0079e2bc(auStack_50);
        uVar8 = (undefined4)((**(code **)(*piVar6 + 0x18))(piVar6));
        func_0079e45c(auStack_44,g_0047e370 + 0x47e184,auStack_1c);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x20))());
        ConvertToString<int>(auStack_48, uVar9, 0);
        func_0079e53c(auStack_40,&iStack_54);
        ((RoleData *)uVar8)->updateData((std::string)(char*)auStack_44, (std::string)(char*)auStack_48, (std::string)(char*)auStack_40);
        func_0079e2bc(auStack_40);
        func_0079e2bc(auStack_48);
        func_0079e2bc(auStack_44);
        uVar8 = (undefined4)((**(code **)(*piVar6 + 0x18))(piVar6));
        func_0079e45c(auStack_38,g_0047e374 + 0x47e1dc,auStack_1c);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x20))());
        ConvertToString<int>(auStack_3c, uVar9, 0);
        func_0079e53c(auStack_34,&iStack_54);
        ((RoleData *)uVar8)->updateData((std::string)(char*)auStack_38, (std::string)(char*)auStack_3c, (std::string)(char*)auStack_34);
        func_0079e2bc(auStack_34);
        func_0079e2bc(auStack_3c);
        func_0079e2bc(auStack_38);
        uVar8 = (undefined4)((**(code **)(*piVar6 + 0x18))(piVar6));
        func_0079e45c(auStack_2c,g_0047e378 + 0x47e236,auStack_1c);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x20))());
        ConvertToString<int>(auStack_30, uVar9, 0);
        func_0079e53c(auStack_28,&iStack_54);
        ((RoleData *)uVar8)->updateData((std::string)(char*)auStack_2c, (std::string)(char*)auStack_30, (std::string)(char*)auStack_28);
        func_0079e2bc(auStack_28);
        func_0079e2bc(auStack_30);
        func_0079e2bc(auStack_2c);
        uVar8 = (undefined4)((**(code **)(*piVar6 + 0x18))(piVar6));
        func_0079e45c(auStack_20,g_0047e37c + 0x47e290,auStack_28);
        piVar1 = (int *)(**(code **)(*piVar6 + 0x18))(piVar6);
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x20))());
        ConvertToString<int>(auStack_24, uVar9, 0);
        func_0079e53c(auStack_1c,&iStack_54);
        ((RoleData *)uVar8)->updateData((std::string)(char*)auStack_20, (std::string)(char*)auStack_24, (std::string)(char*)auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(auStack_24);
        func_0079e2bc(auStack_20);
        func_0079e2bc(&iStack_54);
      }
    }
    uVar10 = (undefined4)(uVar10 + 1);
  } while( true );
}

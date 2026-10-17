#include "ZhaoMuHttpUtil.h"
#include "CCArray.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCString.h"
#include "BLGameScene.h"
#include "DataManager.h"
#include "RoleInfoData.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c594c;
extern "C" unsigned long UNK_006c5990;
extern "C" unsigned long UNK_006c59ac;
extern "C" unsigned long UNK_006c59e8;
extern "C" unsigned long UNK_006c5a20;
extern "C" unsigned long UNK_006c5a22;
extern "C" unsigned long UNK_006c5a8a;
extern "C" unsigned long UNK_006c5a9a;
extern "C" unsigned long UNK_006c5aba;
extern "C" unsigned long UNK_006c5c6a;
extern "C" unsigned long UNK_006c5c78;
extern "C" unsigned long UNK_006c5cba;
extern "C" unsigned long UNK_006c5daa;
extern "C" unsigned long UNK_006c5e28;
extern "C" unsigned long UNK_006c5ed8;
extern "C" unsigned long UNK_006c5ee0;
extern "C" unsigned long UNK_006c5ef2;
extern "C" unsigned long UNK_006c5f02;
extern "C" unsigned long UNK_006c5f12;
extern "C" unsigned long UNK_006c5f1e;
extern "C" unsigned long UNK_006c5f36;
extern "C" unsigned long UNK_006c5f4a;
extern "C" unsigned long UNK_006c5f6a;
extern "C" unsigned long UNK_006c5f7a;
extern "C" unsigned long UNK_006c5f88;
extern "C" unsigned long UNK_006c6048;
extern "C" unsigned long UNK_006c606a;
extern "C" unsigned long UNK_006c607e;
extern "C" unsigned long UNK_006c608e;
extern "C" unsigned long _UNK_006c5968;
extern "C" unsigned long _UNK_006c59a0;
extern "C" unsigned long _UNK_006c59d4;
extern "C" unsigned long _UNK_006c5b08;
extern "C" unsigned long _UNK_006c5b0c;
extern "C" unsigned long _UNK_006c5b10;
extern "C" unsigned long _UNK_006c5b14;
extern "C" unsigned long _UNK_006c5b18;
extern "C" unsigned long _UNK_006c5b1c;
extern "C" unsigned long _UNK_006c5be8;
extern "C" unsigned long _UNK_006c5bec;
extern "C" unsigned long _UNK_006c5c3c;
extern "C" unsigned long _UNK_006c5c40;
extern "C" unsigned long _UNK_006c5df4;
extern "C" unsigned long _UNK_006c5df8;
extern "C" unsigned long _UNK_006c5dfc;
extern "C" unsigned long _UNK_006c5e00;
extern "C" unsigned long _UNK_006c60c4;
extern "C" unsigned long _UNK_006c60c8;
extern "C" unsigned long _UNK_006c60cc;
extern "C" unsigned long _UNK_006c60d0;
extern "C" unsigned long _UNK_006c60d4;
extern "C" unsigned long _UNK_006c60d8;
extern "C" unsigned long _UNK_006c60dc;
extern "C" unsigned long _UNK_006c60e0;
extern "C" unsigned long _UNK_006c60e4;
extern "C" unsigned long _UNK_006c60e8;
extern "C" unsigned long _UNK_006c60ec;
extern "C" unsigned long _UNK_006c60f0;
extern "C" unsigned long _UNK_006c60f4;
extern "C" unsigned long _UNK_006c60f8;
extern "C" unsigned long _UNK_006c60fc;
extern "C" unsigned long _UNK_006c6100;
extern "C" unsigned long _UNK_006c6104;
extern "C" unsigned long _UNK_006c6108;
extern "C" unsigned long g_006c594c;
extern "C" unsigned long g_006c5968;
extern "C" unsigned long g_006c5990;
extern "C" unsigned long g_006c59a0;
extern "C" unsigned long g_006c59ac;
extern "C" unsigned long g_006c59d4;
extern "C" unsigned long g_006c59e8;
extern "C" unsigned long g_006c5a20;
extern "C" unsigned long g_006c5a22;
extern "C" unsigned long g_006c5a8a;
extern "C" unsigned long g_006c5a9a;
extern "C" unsigned long g_006c5aba;
extern "C" unsigned long g_006c5b08;
extern "C" unsigned long g_006c5b0c;
extern "C" unsigned long g_006c5b10;
extern "C" unsigned long g_006c5b14;
extern "C" unsigned long g_006c5b18;
extern "C" unsigned long g_006c5b1c;
extern "C" unsigned long g_006c5be8;
extern "C" unsigned long g_006c5bec;
extern "C" unsigned long g_006c5c3c;
extern "C" unsigned long g_006c5c40;
extern "C" unsigned long g_006c5c6a;
extern "C" unsigned long g_006c5c78;
extern "C" unsigned long g_006c5cba;
extern "C" unsigned long g_006c5daa;
extern "C" unsigned long g_006c5df4;
extern "C" unsigned long g_006c5df8;
extern "C" unsigned long g_006c5dfc;
extern "C" unsigned long g_006c5e00;
extern "C" unsigned long g_006c5e28;
extern "C" unsigned long g_006c5ed8;
extern "C" unsigned long g_006c5ee0;
extern "C" unsigned long g_006c5ef2;
extern "C" unsigned long g_006c5f02;
extern "C" unsigned long g_006c5f12;
extern "C" unsigned long g_006c5f1e;
extern "C" unsigned long g_006c5f36;
extern "C" unsigned long g_006c5f4a;
extern "C" unsigned long g_006c5f6a;
extern "C" unsigned long g_006c5f7a;
extern "C" unsigned long g_006c5f88;
extern "C" unsigned long g_006c6048;
extern "C" unsigned long g_006c606a;
extern "C" unsigned long g_006c607e;
extern "C" unsigned long g_006c608e;
extern "C" unsigned long g_006c60c4;
extern "C" unsigned long g_006c60c8;
extern "C" unsigned long g_006c60cc;
extern "C" unsigned long g_006c60d0;
extern "C" unsigned long g_006c60d4;
extern "C" unsigned long g_006c60d8;
extern "C" unsigned long g_006c60dc;
extern "C" unsigned long g_006c60e0;
extern "C" unsigned long g_006c60e4;
extern "C" unsigned long g_006c60e8;
extern "C" unsigned long g_006c60ec;
extern "C" unsigned long g_006c60f0;
extern "C" unsigned long g_006c60f4;
extern "C" unsigned long g_006c60f8;
extern "C" unsigned long g_006c60fc;
extern "C" unsigned long g_006c6100;
extern "C" unsigned long g_006c6104;
extern "C" unsigned long g_006c6108;
ZhaoMuHttpUtil::~ZhaoMuHttpUtil()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(5)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ZhaoMuHttpUtil::ZhaoMuHttpUtil()
{
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

int ZhaoMuHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(&g_006c59ac + g_006c59d4);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x24)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
undefined4 ZhaoMuHttpUtil::getPostData(int p1)
{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e45c(&uStack_2c,(unsigned char *)((char *)&g_006c59e8 + (intptr_t)(g_006c5b08)),auStack_1c);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  bVar1 = (undefined4)(intptr_t)(true);
  for (uVar7 = 0; uVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->count(), uVar7 < uVar4); uVar7 = uVar7 + 1) {
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)uVar7));
    if (((iVar5 != 0) &&
        (piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_006c5a20 + (intptr_t)(g_006c5b0c))),
                                         *(undefined4 *)((unsigned char *)((char *)&g_006c5a22 + (intptr_t)(g_006c5b10))),0),
        piVar2 != (int *)0x0)) && (iVar5 = (**(code **)(*(int *)(piVar2) + (0x38)))(), iVar5 != 0)) {
      if (bVar1) {
        uVar6 = (undefined4)(((RoleInfoData *)this)->create());
        (**(code **)(*(int *)(piVar2) + (0x18)))(auStack_28,piVar2);
        piVar2 = (int *)((RoleInfoData *)(uVar6))->getRoleInfoItemData((std::string *)(char *)auStack_28);
        func_0079e2bc(auStack_28);
        (**(code **)(*(int *)(piVar2) + (0x58)))(auStack_24,piVar2);
        func_0079e874(&uStack_2c,auStack_24);
        func_0079e2bc(auStack_24);
        bVar1 = (undefined4)(intptr_t)(false);
      }
      else {
        func_0079e69c(&uStack_2c,(unsigned char *)((char *)&g_006c5aba + (intptr_t)(g_006c5b1c)));
        uVar6 = (undefined4)(((RoleInfoData *)this)->create());
        (**(code **)(*(int *)(piVar2) + (0x18)))(auStack_20,piVar2);
        piVar2 = (int *)((RoleInfoData *)(uVar6))->getRoleInfoItemData((std::string *)(char *)auStack_20);
        func_0079e2bc(auStack_20);
        (**(code **)(*(int *)(piVar2) + (0x58)))(auStack_1c,piVar2);
        func_0079e874(&uStack_2c,auStack_1c);
        func_0079e2bc(auStack_1c);
      }
    }
  }
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006c5a8a + (intptr_t)(g_006c5b14)), p1, uStack_2c);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006c5a9a + (intptr_t)(g_006c5b18)), uVar3);
  func_0079e2bc(&uStack_2c);
  return uVar3;
}

undefined8 ZhaoMuHttpUtil::setItems(std::vector<ZhaoMuItem, std::allocator<ZhaoMuItem>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int ZhaoMuHttpUtil::getItems() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ZhaoMuHttpUtil::getItemByType(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhaoMuHttpUtil::onGetItemByTypeCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

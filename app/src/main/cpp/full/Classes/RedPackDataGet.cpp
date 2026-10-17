#include "RedPackDataGet.h"
#include "BLGameScene.h"
#include "Ptime.h"
#include "RedPackData.h"
#include "RedPackInfo.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_004a39f8;
extern "C" unsigned long _DAT_004a3aec;
extern "C" unsigned long _DAT_004a3af0;
extern "C" unsigned long _DAT_004a3af4;
extern "C" unsigned long _DAT_004a3af8;
extern "C" unsigned long _DAT_004a3ecc;
extern "C" unsigned long _DAT_004a3ed0;
extern "C" unsigned long _DAT_004a3ed4;
extern "C" unsigned long _DAT_004a3ed8;
extern "C" unsigned long _DAT_004a3edc;
extern "C" unsigned long _DAT_004a3ee0;
extern "C" unsigned long _DAT_004a3ee4;
extern "C" unsigned long _DAT_004a3ee8;
extern "C" unsigned long _DAT_004a3eec;
extern "C" unsigned long _DAT_004a47fc;
extern "C" unsigned long _DAT_004a4800;
extern "C" unsigned long _DAT_004a4804;
extern "C" unsigned long _DAT_004a4808;
extern "C" unsigned long _DAT_004a480c;
extern "C" unsigned long _DAT_004a4810;
extern "C" unsigned long _DAT_004a4814;
extern "C" unsigned long _DAT_004a4818;
extern "C" unsigned long _DAT_004a481c;
extern "C" unsigned long _DAT_004a4820;
extern "C" unsigned long _DAT_004a4824;
extern "C" unsigned long _DAT_004a4828;
extern "C" unsigned long _DAT_004a482c;
extern "C" unsigned long _DAT_004a4830;
extern "C" unsigned long _DAT_004a4834;
extern "C" unsigned long _DAT_004a4838;
extern "C" unsigned long _DAT_004a483c;
extern "C" unsigned long _DAT_004a4840;
extern "C" unsigned long _DAT_004a4aa4;
extern "C" unsigned long _DAT_004a4aa8;
extern "C" unsigned long _DAT_004a4aac;
extern "C" unsigned long _DAT_004a4e38;
extern "C" unsigned long _DAT_004a4e3c;
extern "C" unsigned long _DAT_004a4e40;
extern "C" unsigned long _DAT_004a4e44;
extern "C" unsigned long _DAT_004a4e48;
extern "C" unsigned long _DAT_004a4e4c;
extern "C" unsigned long _DAT_004a4e50;
extern "C" unsigned long _DAT_004a4e54;
extern "C" unsigned long _DAT_004a4e58;
extern "C" unsigned long _DAT_004a4e5c;
extern "C" unsigned long _DAT_004a4e60;
extern "C" unsigned long _DAT_004a4e64;
extern "C" unsigned long _DAT_004a4e68;
extern "C" unsigned long _DAT_004a4e6c;
extern "C" unsigned long _DAT_004a4e70;
extern "C" unsigned long _DAT_004a4e74;
extern "C" unsigned long _DAT_004a4e78;
extern "C" unsigned long _DAT_004a4e7c;
extern "C" unsigned long _DAT_004a4e80;
extern "C" unsigned long _DAT_004a4e84;
extern "C" unsigned long _DAT_004a4e88;
extern "C" unsigned long _DAT_004a4e8c;
extern "C" unsigned long _DAT_004a4e90;
extern "C" unsigned long _DAT_004a513c;
extern "C" unsigned long _DAT_004a5140;
extern "C" unsigned long _DAT_004a5144;
extern "C" unsigned long _DAT_004a5148;
extern "C" unsigned long _DAT_004a514c;
extern "C" unsigned long _DAT_004a5150;
extern "C" unsigned long _DAT_004a5154;
extern "C" unsigned long _DAT_004a5158;
extern "C" unsigned long _DAT_004a515c;
extern "C" unsigned long _DAT_004a5160;
extern "C" unsigned long _DAT_004a5164;
extern "C" unsigned long g_004a39f8;
extern "C" unsigned long g_004a3aec;
extern "C" unsigned long g_004a3af0;
extern "C" unsigned long g_004a3af4;
extern "C" unsigned long g_004a3af8;
extern "C" unsigned long g_004a3ecc;
extern "C" unsigned long g_004a3ed0;
extern "C" unsigned long g_004a3ed4;
extern "C" unsigned long g_004a3ed8;
extern "C" unsigned long g_004a3edc;
extern "C" unsigned long g_004a3ee0;
extern "C" unsigned long g_004a3ee4;
extern "C" unsigned long g_004a3ee8;
extern "C" unsigned long g_004a3eec;
extern "C" unsigned long g_004a47fc;
extern "C" unsigned long g_004a4800;
extern "C" unsigned long g_004a4804;
extern "C" unsigned long g_004a4808;
extern "C" unsigned long g_004a480c;
extern "C" unsigned long g_004a4810;
extern "C" unsigned long g_004a4814;
extern "C" unsigned long g_004a4818;
extern "C" unsigned long g_004a481c;
extern "C" unsigned long g_004a4820;
extern "C" unsigned long g_004a4824;
extern "C" unsigned long g_004a4828;
extern "C" unsigned long g_004a482c;
extern "C" unsigned long g_004a4830;
extern "C" unsigned long g_004a4834;
extern "C" unsigned long g_004a4838;
extern "C" unsigned long g_004a483c;
extern "C" unsigned long g_004a4840;
extern "C" unsigned long g_004a4aa4;
extern "C" unsigned long g_004a4aa8;
extern "C" unsigned long g_004a4aac;
extern "C" unsigned long g_004a4e38;
extern "C" unsigned long g_004a4e3c;
extern "C" unsigned long g_004a4e40;
extern "C" unsigned long g_004a4e44;
extern "C" unsigned long g_004a4e48;
extern "C" unsigned long g_004a4e4c;
extern "C" unsigned long g_004a4e50;
extern "C" unsigned long g_004a4e54;
extern "C" unsigned long g_004a4e58;
extern "C" unsigned long g_004a4e5c;
extern "C" unsigned long g_004a4e60;
extern "C" unsigned long g_004a4e64;
extern "C" unsigned long g_004a4e68;
extern "C" unsigned long g_004a4e6c;
extern "C" unsigned long g_004a4e70;
extern "C" unsigned long g_004a4e74;
extern "C" unsigned long g_004a4e78;
extern "C" unsigned long g_004a4e7c;
extern "C" unsigned long g_004a4e80;
extern "C" unsigned long g_004a4e84;
extern "C" unsigned long g_004a4e88;
extern "C" unsigned long g_004a4e8c;
extern "C" unsigned long g_004a4e90;
extern "C" unsigned long g_004a513c;
extern "C" unsigned long g_004a5140;
extern "C" unsigned long g_004a5144;
extern "C" unsigned long g_004a5148;
extern "C" unsigned long g_004a514c;
extern "C" unsigned long g_004a5150;
extern "C" unsigned long g_004a5154;
extern "C" unsigned long g_004a5158;
extern "C" unsigned long g_004a515c;
extern "C" unsigned long g_004a5160;
extern "C" unsigned long g_004a5164;
RedPackDataGet::~RedPackDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void RedPackDataGet::GetPutTemplate(int p1, long long p2)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_004a3aec + 0x4a3a28) + 0xc;
  func_0079e45c(&uStack_24,((intptr_t)"json/redpack/redpacktemplateput.json"),aiStack_1c);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_20,piVar1,uStack_24);
  aiStack_1c[0] = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uStack_20,((intptr_t)"rb"),aiStack_1c);
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    (void)(((long long)::memcpy((void *)(iStack_28),(const void *)(iVar2),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar2)));
    cocos2d::CCString::createWithFormat((char const*)iStack_28, p1, p2, p4);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x1c,uVar3);
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool RedPackDataGet::init(int p1, long p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void RedPackDataGet::onPutRedPackData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void RedPackDataGet::onGetRedPackData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

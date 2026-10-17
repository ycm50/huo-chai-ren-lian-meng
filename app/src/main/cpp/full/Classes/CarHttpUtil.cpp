#include "CarHttpUtil.h"
#include "BLGameScene.h"
#include "GetChariotInfo.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long UNK_006bb0f2;
extern "C" unsigned long UNK_006bb0fe;
extern "C" unsigned long UNK_006bb11c;
extern "C" unsigned long UNK_006bb12e;
extern "C" unsigned long UNK_006bb15e;
extern "C" unsigned long UNK_006bb190;
extern "C" unsigned long UNK_006bb1b4;
extern "C" unsigned long UNK_006bb1c4;
extern "C" unsigned long UNK_006bb1d2;
extern "C" unsigned long UNK_006bb1dc;
extern "C" unsigned long UNK_006bb21a;
extern "C" unsigned long UNK_006bb25a;
extern "C" unsigned long UNK_006bb29a;
extern "C" unsigned long UNK_006bb2da;
extern "C" unsigned long UNK_006bb3c2;
extern "C" unsigned long UNK_006bb40c;
extern "C" unsigned long UNK_006bb442;
extern "C" unsigned long UNK_006bb512;
extern "C" unsigned long UNK_006bb550;
extern "C" unsigned long UNK_006bb5ce;
extern "C" unsigned long UNK_006bb62c;
extern "C" unsigned long UNK_006bb6aa;
extern "C" unsigned long UNK_006bb6e8;
extern "C" unsigned long UNK_006bb766;
extern "C" unsigned long UNK_006bb7a4;
extern "C" unsigned long UNK_006bb822;
extern "C" unsigned long UNK_006bb880;
extern "C" unsigned long UNK_006bb8f8;
extern "C" unsigned long UNK_006bb94e;
extern "C" unsigned long UNK_006bb956;
extern "C" unsigned long UNK_006bb988;
extern "C" unsigned long UNK_006bb9e2;
extern "C" unsigned long UNK_006bb9ee;
extern "C" unsigned long UNK_006bba3a;
extern "C" unsigned long UNK_006bba4c;
extern "C" unsigned long UNK_006bba58;
extern "C" unsigned long UNK_006bba68;
extern "C" unsigned long UNK_006bba7a;
extern "C" unsigned long UNK_006bba86;
extern "C" unsigned long UNK_006bba9e;
extern "C" unsigned long UNK_006bbab0;
extern "C" unsigned long UNK_006bbac0;
extern "C" unsigned long UNK_006bbacc;
extern "C" unsigned long UNK_006bbb4a;
extern "C" unsigned long UNK_006bbb56;
extern "C" unsigned long UNK_006bbba2;
extern "C" unsigned long UNK_006bbbb4;
extern "C" unsigned long UNK_006bbbc0;
extern "C" unsigned long UNK_006bbbd0;
extern "C" unsigned long UNK_006bbbe2;
extern "C" unsigned long UNK_006bbbee;
extern "C" unsigned long UNK_006bbc06;
extern "C" unsigned long UNK_006bbc18;
extern "C" unsigned long UNK_006bbc28;
extern "C" unsigned long UNK_006bbc34;
extern "C" unsigned long UNK_006bbcb2;
extern "C" unsigned long UNK_006bbcbe;
extern "C" unsigned long UNK_006bbd00;
extern "C" unsigned long UNK_006bbd14;
extern "C" unsigned long UNK_006bbd26;
extern "C" unsigned long UNK_006bbd32;
extern "C" unsigned long UNK_006bbd42;
extern "C" unsigned long UNK_006bbd54;
extern "C" unsigned long UNK_006bbd60;
extern "C" unsigned long UNK_006bbd78;
extern "C" unsigned long UNK_006bbd8a;
extern "C" unsigned long UNK_006bbd9a;
extern "C" unsigned long UNK_006bbda6;
extern "C" unsigned long UNK_006bbe2c;
extern "C" unsigned long UNK_006bbe78;
extern "C" unsigned long UNK_006bbe8a;
extern "C" unsigned long UNK_006bbe92;
extern "C" unsigned long UNK_006bbea6;
extern "C" unsigned long UNK_006bbebe;
extern "C" unsigned long UNK_006bbed0;
extern "C" unsigned long UNK_006bbee2;
extern "C" unsigned long UNK_006bbef4;
extern "C" unsigned long UNK_006bbf08;
extern "C" unsigned long UNK_006bbfae;
extern "C" unsigned long UNK_006bbffc;
extern "C" unsigned long UNK_006bc034;
extern "C" unsigned long UNK_006bc074;
extern "C" unsigned long UNK_006bc164;
extern "C" unsigned long _UNK_006bb10c;
extern "C" unsigned long _UNK_006bb110;
extern "C" unsigned long _UNK_006bb37c;
extern "C" unsigned long _UNK_006bb380;
extern "C" unsigned long _UNK_006bb384;
extern "C" unsigned long _UNK_006bb388;
extern "C" unsigned long _UNK_006bb38c;
extern "C" unsigned long _UNK_006bb390;
extern "C" unsigned long _UNK_006bb394;
extern "C" unsigned long _UNK_006bb398;
extern "C" unsigned long _UNK_006bb39c;
extern "C" unsigned long _UNK_006bb3a0;
extern "C" unsigned long _UNK_006bb3a4;
extern "C" unsigned long _UNK_006bb3a8;
extern "C" unsigned long _UNK_006bb400;
extern "C" unsigned long _UNK_006bb434;
extern "C" unsigned long _UNK_006bb470;
extern "C" unsigned long _UNK_006bb59c;
extern "C" unsigned long _UNK_006bb5a0;
extern "C" unsigned long _UNK_006bb678;
extern "C" unsigned long _UNK_006bb67c;
extern "C" unsigned long _UNK_006bb734;
extern "C" unsigned long _UNK_006bb738;
extern "C" unsigned long _UNK_006bb7f0;
extern "C" unsigned long _UNK_006bb7f4;
extern "C" unsigned long _UNK_006bb8cc;
extern "C" unsigned long _UNK_006bb8d0;
extern "C" unsigned long _UNK_006bb9b0;
extern "C" unsigned long _UNK_006bb9b4;
extern "C" unsigned long _UNK_006bb9b8;
extern "C" unsigned long _UNK_006bb9bc;
extern "C" unsigned long _UNK_006bbaf8;
extern "C" unsigned long _UNK_006bbafc;
extern "C" unsigned long _UNK_006bbb00;
extern "C" unsigned long _UNK_006bbb04;
extern "C" unsigned long _UNK_006bbb08;
extern "C" unsigned long _UNK_006bbb0c;
extern "C" unsigned long _UNK_006bbb10;
extern "C" unsigned long _UNK_006bbb14;
extern "C" unsigned long _UNK_006bbb18;
extern "C" unsigned long _UNK_006bbb1c;
extern "C" unsigned long _UNK_006bbb20;
extern "C" unsigned long _UNK_006bbb24;
extern "C" unsigned long _UNK_006bbc60;
extern "C" unsigned long _UNK_006bbc64;
extern "C" unsigned long _UNK_006bbc68;
extern "C" unsigned long _UNK_006bbc6c;
extern "C" unsigned long _UNK_006bbc70;
extern "C" unsigned long _UNK_006bbc74;
extern "C" unsigned long _UNK_006bbc78;
extern "C" unsigned long _UNK_006bbc7c;
extern "C" unsigned long _UNK_006bbc80;
extern "C" unsigned long _UNK_006bbc84;
extern "C" unsigned long _UNK_006bbc88;
extern "C" unsigned long _UNK_006bbc8c;
extern "C" unsigned long _UNK_006bbdd4;
extern "C" unsigned long _UNK_006bbdd8;
extern "C" unsigned long _UNK_006bbddc;
extern "C" unsigned long _UNK_006bbde0;
extern "C" unsigned long _UNK_006bbde4;
extern "C" unsigned long _UNK_006bbde8;
extern "C" unsigned long _UNK_006bbdec;
extern "C" unsigned long _UNK_006bbdf0;
extern "C" unsigned long _UNK_006bbdf4;
extern "C" unsigned long _UNK_006bbdf8;
extern "C" unsigned long _UNK_006bbdfc;
extern "C" unsigned long _UNK_006bbe00;
extern "C" unsigned long _UNK_006bbe04;
extern "C" unsigned long _UNK_006bc198;
extern "C" unsigned long _UNK_006bc19c;
extern "C" unsigned long _UNK_006bc1a0;
extern "C" unsigned long _UNK_006bc1a4;
extern "C" unsigned long _UNK_006bc1a8;
extern "C" unsigned long _UNK_006bc1ac;
extern "C" unsigned long _UNK_006bc1b0;
extern "C" unsigned long _UNK_006bc1b4;
extern "C" unsigned long _UNK_006bc1b8;
extern "C" unsigned long _UNK_006bc1bc;
extern "C" unsigned long _UNK_006bc1c0;
extern "C" unsigned long _UNK_006bc1c4;
extern "C" unsigned long _UNK_006bc1c8;
extern "C" unsigned long _UNK_006bc1cc;
extern "C" unsigned long _UNK_006bc1d0;
extern "C" unsigned long g_006bb0f2;
extern "C" unsigned long g_006bb0fe;
extern "C" unsigned long g_006bb10c;
extern "C" unsigned long g_006bb110;
extern "C" unsigned long g_006bb11c;
extern "C" unsigned long g_006bb12e;
extern "C" unsigned long g_006bb15e;
extern "C" unsigned long g_006bb190;
extern "C" unsigned long g_006bb1b4;
extern "C" unsigned long g_006bb1c4;
extern "C" unsigned long g_006bb1d2;
extern "C" unsigned long g_006bb1dc;
extern "C" unsigned long g_006bb21a;
extern "C" unsigned long g_006bb25a;
extern "C" unsigned long g_006bb29a;
extern "C" unsigned long g_006bb2da;
extern "C" unsigned long g_006bb37c;
extern "C" unsigned long g_006bb380;
extern "C" unsigned long g_006bb384;
extern "C" unsigned long g_006bb388;
extern "C" unsigned long g_006bb38c;
extern "C" unsigned long g_006bb390;
extern "C" unsigned long g_006bb394;
extern "C" unsigned long g_006bb398;
extern "C" unsigned long g_006bb39c;
extern "C" unsigned long g_006bb3a0;
extern "C" unsigned long g_006bb3a4;
extern "C" unsigned long g_006bb3a8;
extern "C" unsigned long g_006bb3c2;
extern "C" unsigned long g_006bb400;
extern "C" unsigned long g_006bb40c;
extern "C" unsigned long g_006bb434;
extern "C" unsigned long g_006bb442;
extern "C" unsigned long g_006bb470;
extern "C" unsigned long g_006bb512;
extern "C" unsigned long g_006bb550;
extern "C" unsigned long g_006bb59c;
extern "C" unsigned long g_006bb5a0;
extern "C" unsigned long g_006bb5ce;
extern "C" unsigned long g_006bb62c;
extern "C" unsigned long g_006bb678;
extern "C" unsigned long g_006bb67c;
extern "C" unsigned long g_006bb6aa;
extern "C" unsigned long g_006bb6e8;
extern "C" unsigned long g_006bb734;
extern "C" unsigned long g_006bb738;
extern "C" unsigned long g_006bb766;
extern "C" unsigned long g_006bb7a4;
extern "C" unsigned long g_006bb7f0;
extern "C" unsigned long g_006bb7f4;
extern "C" unsigned long g_006bb822;
extern "C" unsigned long g_006bb880;
extern "C" unsigned long g_006bb8cc;
extern "C" unsigned long g_006bb8d0;
extern "C" unsigned long g_006bb8f8;
extern "C" unsigned long g_006bb94e;
extern "C" unsigned long g_006bb956;
extern "C" unsigned long g_006bb988;
extern "C" unsigned long g_006bb9b0;
extern "C" unsigned long g_006bb9b4;
extern "C" unsigned long g_006bb9b8;
extern "C" unsigned long g_006bb9bc;
extern "C" unsigned long g_006bb9e2;
extern "C" unsigned long g_006bb9ee;
extern "C" unsigned long g_006bba3a;
extern "C" unsigned long g_006bba4c;
extern "C" unsigned long g_006bba58;
extern "C" unsigned long g_006bba68;
extern "C" unsigned long g_006bba7a;
extern "C" unsigned long g_006bba86;
extern "C" unsigned long g_006bba9e;
extern "C" unsigned long g_006bbab0;
extern "C" unsigned long g_006bbac0;
extern "C" unsigned long g_006bbacc;
extern "C" unsigned long g_006bbaf8;
extern "C" unsigned long g_006bbafc;
extern "C" unsigned long g_006bbb00;
extern "C" unsigned long g_006bbb04;
extern "C" unsigned long g_006bbb08;
extern "C" unsigned long g_006bbb0c;
extern "C" unsigned long g_006bbb10;
extern "C" unsigned long g_006bbb14;
extern "C" unsigned long g_006bbb18;
extern "C" unsigned long g_006bbb1c;
extern "C" unsigned long g_006bbb20;
extern "C" unsigned long g_006bbb24;
extern "C" unsigned long g_006bbb4a;
extern "C" unsigned long g_006bbb56;
extern "C" unsigned long g_006bbba2;
extern "C" unsigned long g_006bbbb4;
extern "C" unsigned long g_006bbbc0;
extern "C" unsigned long g_006bbbd0;
extern "C" unsigned long g_006bbbe2;
extern "C" unsigned long g_006bbbee;
extern "C" unsigned long g_006bbc06;
extern "C" unsigned long g_006bbc18;
extern "C" unsigned long g_006bbc28;
extern "C" unsigned long g_006bbc34;
extern "C" unsigned long g_006bbc60;
extern "C" unsigned long g_006bbc64;
extern "C" unsigned long g_006bbc68;
extern "C" unsigned long g_006bbc6c;
extern "C" unsigned long g_006bbc70;
extern "C" unsigned long g_006bbc74;
extern "C" unsigned long g_006bbc78;
extern "C" unsigned long g_006bbc7c;
extern "C" unsigned long g_006bbc80;
extern "C" unsigned long g_006bbc84;
extern "C" unsigned long g_006bbc88;
extern "C" unsigned long g_006bbc8c;
extern "C" unsigned long g_006bbcb2;
extern "C" unsigned long g_006bbcbe;
extern "C" unsigned long g_006bbd00;
extern "C" unsigned long g_006bbd14;
extern "C" unsigned long g_006bbd26;
extern "C" unsigned long g_006bbd32;
extern "C" unsigned long g_006bbd42;
extern "C" unsigned long g_006bbd54;
extern "C" unsigned long g_006bbd60;
extern "C" unsigned long g_006bbd78;
extern "C" unsigned long g_006bbd8a;
extern "C" unsigned long g_006bbd9a;
extern "C" unsigned long g_006bbda6;
extern "C" unsigned long g_006bbdd4;
extern "C" unsigned long g_006bbdd8;
extern "C" unsigned long g_006bbddc;
extern "C" unsigned long g_006bbde0;
extern "C" unsigned long g_006bbde4;
extern "C" unsigned long g_006bbde8;
extern "C" unsigned long g_006bbdec;
extern "C" unsigned long g_006bbdf0;
extern "C" unsigned long g_006bbdf4;
extern "C" unsigned long g_006bbdf8;
extern "C" unsigned long g_006bbdfc;
extern "C" unsigned long g_006bbe00;
extern "C" unsigned long g_006bbe04;
extern "C" unsigned long g_006bbe2c;
extern "C" unsigned long g_006bbe78;
extern "C" unsigned long g_006bbe8a;
extern "C" unsigned long g_006bbe92;
extern "C" unsigned long g_006bbea6;
extern "C" unsigned long g_006bbebe;
extern "C" unsigned long g_006bbed0;
extern "C" unsigned long g_006bbee2;
extern "C" unsigned long g_006bbef4;
extern "C" unsigned long g_006bbf08;
extern "C" unsigned long g_006bbfae;
extern "C" unsigned long g_006bbffc;
extern "C" unsigned long g_006bc034;
extern "C" unsigned long g_006bc074;
extern "C" unsigned long g_006bc164;
extern "C" unsigned long g_006bc198;
extern "C" unsigned long g_006bc19c;
extern "C" unsigned long g_006bc1a0;
extern "C" unsigned long g_006bc1a4;
extern "C" unsigned long g_006bc1a8;
extern "C" unsigned long g_006bc1ac;
extern "C" unsigned long g_006bc1b0;
extern "C" unsigned long g_006bc1b4;
extern "C" unsigned long g_006bc1b8;
extern "C" unsigned long g_006bc1bc;
extern "C" unsigned long g_006bc1c0;
extern "C" unsigned long g_006bc1c4;
extern "C" unsigned long g_006bc1c8;
extern "C" unsigned long g_006bc1cc;
extern "C" unsigned long g_006bc1d0;
int CarHttpUtil::getSetIndex() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void CarHttpUtil::setSetIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

int CarHttpUtil::getChariotId() const
{
  return *(undefined4 *)(((int)this) + 0x48);
}

void CarHttpUtil::setChariotId(int p1)
{
  *(undefined4 *)(((int)this) + 0x48) = p1;
  return;
}

int CarHttpUtil::getCarID() const
{
  return *(undefined4 *)(((int)this) + 0x4c);
}

void CarHttpUtil::setCarID(int p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = p1;
  return;
}

int CarHttpUtil::getIsBuyCAR1() const
{
  return *(undefined4 *)(((int)this) + 0x50);
}

void CarHttpUtil::setIsBuyCAR1(int p1)
{
  *(undefined4 *)(((int)this) + 0x50) = p1;
  return;
}

int CarHttpUtil::getIsBuyCAR2() const
{
  return *(undefined4 *)(((int)this) + 0x54);
}

void CarHttpUtil::setIsBuyCAR2(int p1)
{
  *(undefined4 *)(((int)this) + 0x54) = p1;
  return;
}

int CarHttpUtil::getIsBuyCAR3() const
{
  return *(undefined4 *)(((int)this) + 0x58);
}

void CarHttpUtil::setIsBuyCAR3(int p1)
{
  *(undefined4 *)(((int)this) + 0x58) = p1;
  return;
}

void CarHttpUtil::getCarData()
{
  undefined4 p4 = 0;

  cocos2d::CCString::createWithFormat((char const*)&g_006bb0fe + g_006bb110, &g_006bb0f2 + g_006bb10c, &g_006bb0f2 + g_006bb10c, 1, *(undefined4 *)(((int)this) + 0x50), *(undefined4 *)(((int)this) + 0x54), *(undefined4 *)(((int)this) + 0x58), p4);
  ((cocos2d::CCString *)this)->getCString();
  return;
}


CarHttpUtil::CarHttpUtil()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = g_006bb400;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  iVar1 = *(int *)(&g_006bb3c2 + iVar1);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 5)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 8)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xb)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xe)->clear();
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  return;
}

int CarHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(&g_006bb40c + g_006bb434);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x5c)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

CarHttpUtil::~CarHttpUtil()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xe)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xb)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 8)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 5)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (19) =====
undefined4 CarHttpUtil::getUrlCarData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CarHttpUtil::setSpeedRoles(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::setLifeRoles(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::setDefenseRoles(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::setAttackRoles(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int CarHttpUtil::getSpeedRoles() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int CarHttpUtil::getLifeRoles() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int CarHttpUtil::getDefenseRoles() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int CarHttpUtil::getAttackRoles() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CarHttpUtil::getADDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::saveUserADDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::buyChariotNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::onGetUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::saveUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::onGetUserDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::saveUserDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::onSaveUserCarDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::onBuyChariotNumCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarHttpUtil::onGetCarDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "CircusLocalZip.h"
#include "CCFileUtils.h"
#include "CCString.h"
#include "PlatformHelp.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include <ctime>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eaf4(...);
extern "C" long long func_0079eb04(...);
extern "C" long long func_0079eb14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004766ec;
extern "C" unsigned long _DAT_0042f2e0;
extern "C" unsigned long _DAT_0042f2e4;
extern "C" unsigned long _DAT_0042f2e8;
extern "C" unsigned long _DAT_0042f2ec;
extern "C" unsigned long _DAT_004765c8;
extern "C" unsigned long _DAT_004765cc;
extern "C" unsigned long _DAT_004765d0;
extern "C" unsigned long _DAT_004765d4;
extern "C" unsigned long _DAT_004765d8;
extern "C" unsigned long _DAT_00476678;
extern "C" unsigned long _DAT_0047667c;
extern "C" unsigned long _DAT_00476680;
extern "C" unsigned long _DAT_00476684;
extern "C" unsigned long _DAT_004766fc;
extern "C" unsigned long _DAT_00476700;
extern "C" unsigned long _DAT_00476704;
extern "C" unsigned long _DAT_00476708;
extern "C" unsigned long _DAT_00476834;
extern "C" unsigned long _DAT_00476838;
extern "C" unsigned long _DAT_0047683c;
extern "C" unsigned long _DAT_00476840;
extern "C" unsigned long _DAT_0047688c;
extern "C" unsigned long _DAT_00476890;
extern "C" unsigned long _DAT_00476950;
extern "C" unsigned long _DAT_00476954;
extern "C" unsigned long _DAT_00476958;
extern "C" unsigned long _DAT_00476a48;
extern "C" unsigned long _DAT_00476a4c;
extern "C" unsigned long _DAT_00476a50;
extern "C" unsigned long _DAT_00476b4c;
extern "C" unsigned long _DAT_00476b50;
extern "C" unsigned long _DAT_00476b54;
extern "C" unsigned long _DAT_00476d24;
extern "C" unsigned long _DAT_00476d28;
extern "C" unsigned long _DAT_00476d2c;
extern "C" unsigned long _DAT_00476d30;
extern "C" unsigned long _DAT_00476d34;
extern "C" unsigned long _DAT_00476d38;
extern "C" unsigned long g_0042f2e0;
extern "C" unsigned long g_0042f2e4;
extern "C" unsigned long g_0042f2e8;
extern "C" unsigned long g_0042f2ec;
extern "C" unsigned long g_004765c8;
extern "C" unsigned long g_004765cc;
extern "C" unsigned long g_004765d0;
extern "C" unsigned long g_004765d4;
extern "C" unsigned long g_004765d8;
extern "C" unsigned long g_00476678;
extern "C" unsigned long g_0047667c;
extern "C" unsigned long g_00476680;
extern "C" unsigned long g_00476684;
extern "C" unsigned long g_004766ec;
extern "C" unsigned long g_004766fc;
extern "C" unsigned long g_00476700;
extern "C" unsigned long g_00476704;
extern "C" unsigned long g_00476708;
extern "C" unsigned long g_00476834;
extern "C" unsigned long g_00476838;
extern "C" unsigned long g_0047683c;
extern "C" unsigned long g_00476840;
extern "C" unsigned long g_0047688c;
extern "C" unsigned long g_00476890;
extern "C" unsigned long g_00476950;
extern "C" unsigned long g_00476954;
extern "C" unsigned long g_00476958;
extern "C" unsigned long g_00476a48;
extern "C" unsigned long g_00476a4c;
extern "C" unsigned long g_00476a50;
extern "C" unsigned long g_00476b4c;
extern "C" unsigned long g_00476b50;
extern "C" unsigned long g_00476b54;
extern "C" unsigned long g_00476d24;
extern "C" unsigned long g_00476d28;
extern "C" unsigned long g_00476d2c;
extern "C" unsigned long g_00476d30;
extern "C" unsigned long g_00476d34;
extern "C" unsigned long g_00476d38;
CircusLocalZip::~CircusLocalZip()
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0xc);
  for (iVar1 = *(int *)(((int)this) + 8); iVar1 != iVar2; iVar1 = iVar1 + 4) {
    func_0079e2bc(iVar1);
  }
  if (*(int *)(((int)this) + 8) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 8))));
  }
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this));
  return;
}

undefined4 CircusLocalZip::getMe()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(g_0042f2e0 + 0x42f29c);
  uVar3 = (undefined4)(*(undefined4 *)(g_0042f2e4 + 0x42f2a4));
  if ((-1 < *piVar1 << 0x1f) && (iVar2 = func_0079e33c(), iVar2 != 0)) {
    0 /* ctorZero */;
    func_0079e38c(piVar1);
    func_0079e39c(uVar3,*(undefined4 *)(g_0042f2e8 + 0x42f2c8),g_0042f2ec + 0x42f2cc);
  }
  return uVar3;
}

undefined4 CircusLocalZip::GetNewRecordId()
{
  undefined4 p2 = 0;

  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  (void)(((long long)::time((time_t *)(void *)(auStack_20))));
  puVar1 = (undefined4 *)((long long)(intptr_t)::localtime((time_t *)(void *)(auStack_20)));
  iVar4 = p2 + 4;
  func_0079e2dc(iVar4,g_004765c8 + 0x47652a);
  ((PlatformHelp *)auStack_1c)->getDeviceID();
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%s%d%d%d%d%d"), auStack_1c[0], puVar1[4], puVar1[3], puVar1[2], puVar1[1], *puVar1)
  ;
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e69c(iVar4,uVar2);
  func_0079e2bc(auStack_1c);
  ((PlatformHelp *)auStack_1c)->getDeviceID();
  0 /* ctorZero */;
  iVar3 = g_004765d4;
  func_0079e2bc(auStack_1c);
  iVar3 = iVar3 + 0x47657c;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  func_0079e53c(((int)this),iVar4);
  return ((int)this);
}

void CircusLocalZip::ReadEmptyRecordId()
{
  int *piVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  /* RAW_SLOT_FIX (R73)：原为两处**硬编码 vtable 槽**调用（真机野跳转：ReadEmptyRecordId()+76）：
       (**(code **)(*piVar1 + 0x18))(&uStack_20, piVar1, uStack_24);      // 槽 0x18 = idx 6
       (**(code **)(*piVar1 + 0x10))(piVar1, uStack_20, "rb", aiStack_1c); // 槽 0x10 = idx 4
     原版 _ZTVN7cocos2d18CCFileUtilsAndroidE 实证：idx 6 = fullPathForFilename(const char*)，
     idx 4 = getFileData(const char*, const char*, unsigned long*) → 一并具名化；
     字符串改用真 std::string（原 func_0079e45c 是未恢复的幽灵桩）。 */
  std::string relPath("json/circus/circustemplatezip.json");
  std::string fullPath = cocos2d::CCFileUtils::sharedFileUtils()->fullPathForFilename(relPath.c_str());
  aiStack_1c[0] = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCFileUtils::sharedFileUtils()->getFileData(
            fullPath.c_str(), "rb", (unsigned long *)aiStack_1c));
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(((int)this),aiStack_1c[0] + 1,0);
    func_0079e66c(((int)this));
    /* BUFFER_FIX (R73)：原版由 func_0079e65c / func_0079e66c 负责给 this+0 的缓冲分配
       size+1 字节；但这两个函数在本工程是**空桩**，于是 *(int*)this 仍为 0
       -> memcpy(NULL, ...) -> SEGV_MAPERR fault addr 0x0
       （真机 tombstone: ReadEmptyRecordId()+180 -> __memcpy_base_a55）。
       这里按语义补上分配（配套的 func_0079e67c = operator delete[] 见下一行，属同一来源）。 */
    if (*(int *)this == 0) {
      *(int *)this = (int)(intptr_t)(new char[aiStack_1c[0] + 1]);
    }
    (void)(((long long)::memcpy((void *)(*(int *)this),(const void *)(iVar2),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar2)));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void CircusLocalZip::ClearFileRecordId(std::string * p1, FILE_ENUM p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 CircusLocalZip::ForRecordId()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  uint uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = (undefined4)(0);
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 8));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  while( true ) {
    if (iVar2 + uVar1 * 4 == *(int *)(((int)this) + 0xc)) break;
    if (uVar1 < (*(int *)(((int)this) + 0xc) - *(int *)(((int)this) + 8) >> 2) - 10U) {
      func_0079e53c(&uStack_1c);
      CircusLocalZip::ClearFileRecordId((std::string *)(char *)uStack_1c, (FILE_ENUM)1);
      func_0079e2bc(&uStack_1c);
    }
    uVar1 = (undefined4)(uVar1 + 1);
  }
  return ghidra_CONCAT44(uStack_1c,((int)this));
}

void CircusLocalZip::IsExistFileRecordId(std::string * p1, FILE_ENUM p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

CircusLocalZip::CircusLocalZip()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  
  /* VPTR_FIX (R71)：原始为（原版 0x466846..0x466856 实证）
       r3 = *(pc 相对基址); r3 += 0xc;  *(int*)this = r3;  *(int*)(this+4) = r3;
     —— 把**两个** vptr（多重继承的两个多态基类子对象）都指向原版 vtable+0xc。
     Ghidra 把 `ldr rX,[pc,#imm]; add rX,pc` 误建模成 `g_0047688c + 0x476850`，
     而 g_ 在本工程是 0 值桩 -> 读裸地址 0x476850 -> SEGV
     （真机 tombstone: CircusLocalZip::CircusLocalZip()+54）。本工程由编译器设 vptr，故略过。 */
  iVar1 = 0;   /* 原为 pc 相对基址（原版 0x466846/0x46684c/0x46684e），作为 func_0079e2dc 的第 2 实参；
                  该函数在本工程是空桩、该基址在本工程无意义，故置 0 以保持调用形态。 */
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  func_0079e2dc(((int)this),iVar1,p3,0,p4);
  iVar1 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(2)));
  (void)0; /* DESTROYAUX 降级 */
  *(int *)((int)this + 4*(3)) = iVar1;
  return;
}

void CircusLocalZip::CreateJsonRecordId()
/* DESTROYAUX_V1: 1 处降级 */
{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(func_0079e954(*(int *)this));
  if (uVar1 < 0xb) {
    ((CircusLocalZip *)(((int)this)))->ReadEmptyRecordId();
  }
  iVar4 = (undefined4)(intptr_t)("nodata");
  cocos2d::CCString::createWithFormat((char const*)*(int *)this, iVar4, iVar4, iVar4, iVar4, iVar4, iVar4, iVar4, iVar4, iVar4, iVar4);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e69c(((int)this),uVar2);
  /* RAW_SLOT_FIX (R73)：同 ReadJsonRecordId —— 硬编码槽 0x44 具名化为 getWritablePath() */
  std::string writablePath = cocos2d::CCFileUtils::sharedFileUtils()->getWritablePath();
  std::string jsonName("circustemplatenewzip.json");
  std::string fullPath = writablePath + jsonName;   // 原 func_0042f3fc(&fullPath, writablePath, jsonName)
  iVar4 = (undefined4)(intptr_t)(func_0079ead4((char const*)fullPath.c_str(),"w+"));
  if (iVar4 != 0) {
    func_0079eb14(*(int *)this,iVar4);
    func_0079eaf4(iVar4);
    uVar2 = (undefined4)(*(int *)((int)this + 4*(2)));
  (void)0; /* DESTROYAUX 降级 */
    *(int *)((int)this + 4*(3)) = uVar2;
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(auStack_24);
  return;
}

void CircusLocalZip::Setrecordidvector(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusLocalZip::SysRecordId(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusLocalZip::ReadJsonRecordId()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined1 auStack_1c [8];
  
  /* RAW_SLOT_FIX (R73)：原反编译体用**硬编码 vtable 槽 0x44** 调 CCFileUtils::sharedFileUtils()：
       (**(code **)(*(int *)(piVar1) + (0x44)))(auStack_24, piVar1);
     原版实证（_ZTVN7cocos2d18CCFileUtilsAndroidE = 0xb2aa90，+8+0x44 即 idx 17）：
       该槽 = CCFileUtilsAndroid::getWritablePath()（sret 返回 std::string，无实参）。
     硬编码槽在本工程布局下取到野指针 → 真机野跳转
     （tombstone: CircusLocalZip::ReadJsonRecordId()+54, pc 0x05a66fb4 [anon:dalvik-main space]）。
     按既有"具名化"纪律改写为真实 C++ 语义（原先的 func_0079e45c / func_0042f3fc / func_0079e53c
     都是未恢复的幽灵桩，故字符串一律用真 std::string）。*/
  std::string writablePath = cocos2d::CCFileUtils::sharedFileUtils()->getWritablePath();
  std::string jsonName("circustemplatenewzip.json");
  std::string fullPath = writablePath + jsonName;   // 原 func_0042f3fc(&fullPath, writablePath, jsonName)
  std::string recId = fullPath;                     // 原 func_0079e53c(&recId, &fullPath)
  /* IsExistFileRecordId 目前仍是 TODO 空桩（无法给出真值）→ 按"不存在"处理，确定性地走重建分支。*/
  iVar2 = 0;
  if (iVar2 == 0) {
    ((CircusLocalZip *)(((int)this)))->CreateJsonRecordId();
  }
  else {
    iStack_20 = 0;
    /* 槽 0x10 = idx 4 = CCFileUtilsAndroid::getFileData(const char*, const char*, unsigned long*)
       （原版 vtable 实证，且与当前构建布局一致）→ 一并具名化。 */
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCFileUtils::sharedFileUtils()->getFileData(
                fullPath.c_str(), "rb", (unsigned long *)&iStack_20));
    if (iVar2 == 0) {
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar3))->showToast((char const*)"读取记录失败");
    }
    else {
      func_0079e65c(((int)this),iStack_20 + 1,0);
      func_0079e66c(((int)this));
      func_0079e48c(*(int *)this,iVar2,iStack_20);
      func_0079e67c(iVar2);
      func_0079e53c(auStack_1c,((int)this));
      ((CircusLocalZip *)(((int)this)))->SysRecordId((std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
  }
  func_0079e2bc(&uStack_28);
  func_0079e2bc(auStack_2c);
  return;
}

void CircusLocalZip::WriteJsonRecordId()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

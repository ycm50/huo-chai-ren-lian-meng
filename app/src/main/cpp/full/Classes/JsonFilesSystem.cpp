#include "JsonFilesSystem.h"
#include "BLForwards.h"
#include "FilesSystem.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "Json.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079eac4(...);
extern "C" long long func_0079ed08(...);
extern "C" unsigned long _DAT_0049bd54;
extern "C" unsigned long _DAT_0049bd58;
extern "C" unsigned long _DAT_006d04e0;
extern "C" unsigned long g_0049bd54;
extern "C" unsigned long g_0049bd58;
extern "C" unsigned long g_006d04e0;
JsonFilesSystem::~JsonFilesSystem()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0049bd58 + 0x49bd4e) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void JsonFilesSystem::ReadJson(std::string const& p1, cocos2d::extension::Json** p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  *(int *)p2 = 0;
  iStack_dc = 0;
  uVar1 = (undefined4)(((sir::singleton<FilesSystem, 0> *)this)->instance());
  iVar2 = (undefined4)(intptr_t)(((FilesSystem *)uVar1)->ReadFile(p1, (char**)&iStack_dc));
  if (iVar2 == -1) {
    bVar5 = (undefined4)(intptr_t)(false);
  }
  else {
    uVar4 = 0;
    if (iVar2 != 0) {
      puVar3 = (undefined1 *)(iStack_dc + iVar2 + -1);
      uVar4 = (int)*(int *)&(*puVar3);
      *puVar3 = 0;
    }
    func_0079e43c(auStack_d4,0x18);
    uVar1 = (undefined4)(func_0079eac4(auStack_cc,iStack_dc));
    func_0079ed08(uVar1,uVar4);
    if (iStack_dc != 0) {
      func_0079e67c();
    }
    func_0079e46c(&uStack_d8,auStack_c8);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::Json_create((char const*)uStack_d8));
    func_0079e2bc(&uStack_d8);
    0 /* ctorZero */;
    if (iVar2 == 0) {
      iVar2 = (int)*(int *)&(*(int *)p2);
    }
    *(int *)p2 = iVar2;
    bVar5 = (undefined4)(intptr_t)(iVar2 != 0);
    func_0079e47c(auStack_d4);
  }
  return;
}

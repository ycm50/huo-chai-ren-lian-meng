#include "BLLanguage.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "BLLanguageItem.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" unsigned long LAB_006c8fb0;

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c8cfe;
extern "C" unsigned long UNK_006c8d58;
extern "C" unsigned long UNK_006c8d80;
extern "C" unsigned long UNK_006c8e38;
extern "C" unsigned long UNK_006c8e4c;
extern "C" unsigned long _DAT_006c8f78;
extern "C" unsigned long _DAT_006c8fb8;
extern "C" unsigned long _DAT_006c8fbc;
extern "C" unsigned long _DAT_006c8fc0;
extern "C" unsigned long _DAT_006c904c;
extern "C" unsigned long _DAT_006c9050;
extern "C" unsigned long _UNK_006c8d48;
extern "C" unsigned long _UNK_006c8d5c;
extern "C" unsigned long _UNK_006c8d84;
extern "C" unsigned long _UNK_006c8f1c;
extern "C" unsigned long _UNK_006c8f20;
extern "C" unsigned long g_006c8cfe;
extern "C" unsigned long g_006c8d48;
extern "C" unsigned long g_006c8d58;
extern "C" unsigned long g_006c8d5c;
extern "C" unsigned long g_006c8d80;
extern "C" unsigned long g_006c8d84;
extern "C" unsigned long g_006c8e38;
extern "C" unsigned long g_006c8e4c;
extern "C" unsigned long g_006c8f1c;
extern "C" unsigned long g_006c8f20;
extern "C" unsigned long g_006c8f78;
extern "C" unsigned long g_006c8fb8;
extern "C" unsigned long g_006c8fbc;
extern "C" unsigned long g_006c8fc0;
extern "C" unsigned long g_006c904c;
extern "C" unsigned long g_006c9050;
cocos2d::CCDictionary* BLLanguage::getDicItems() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x108));
}

void BLLanguage::setDicItems(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

BLLanguage::~BLLanguage()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_006c8cfe + g_006c8d48);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x24c;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
bool BLLanguage::init()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined1 auStack_1c [8];
  
  func_0079e45c(auStack_34,(unsigned char *)((char *)&g_006c8e38 + (intptr_t)(g_006c8f1c)),auStack_1c);
  uStack_30 = (undefined4)(0);
  func_0079e45c(&uStack_24,(unsigned char *)((char *)&g_006c8e4c + (intptr_t)(g_006c8f20)),auStack_1c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_24,&uStack_30,&iStack_2c,&iStack_28,0));
  if ((iVar3 == 0) && (iStack_20 = iStack_28 << 1, 2 < iStack_2c)) {
    for (iVar3 = 0; iVar3 < iStack_2c + -1; iVar3 = iVar3 + 1) {
      piVar1 = (int *)::operator new(0x20);
      ::new ((void *)piVar1) BLLanguageItem();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
      iVar4 = (undefined4)(intptr_t)(((BLLanguageItem *)(piVar1))->init());
      if (iVar4 == 0) {
        (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        ((cocos2d::CCObject *)(piVar1))->autorelease();
      }
      ((BLLanguageItem *)(piVar1))->initWith((char**)uStack_30, *(int*)&iStack_20);
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x108));
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
      ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)piVar1, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
  }
  sqlite3_free_table(uStack_30);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_34);
  return 1;
}

BLLanguage::BLLanguage()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(*(int *)(g_006c8f78 + 0x6c8f34));
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x24c;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x42)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

undefined4 BLLanguage::share()
{
  int *piVar1;
  
  if (*(int *)(&LAB_006c8fb0 + g_006c8fb8) == 0) {
    piVar1 = (int *)::operator new(0x10c);
    ::new ((void *)piVar1) BLLanguage();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    *(int **)(g_006c8fbc + 0x6c8fca) = piVar1;
    (**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
  }
  return *(undefined4 *)(g_006c8fc0 + 0x6c8fe2);
}

undefined8 BLLanguage::getString(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

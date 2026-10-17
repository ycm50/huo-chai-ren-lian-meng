extern "C" int sqlite3_get_table(void*,const char*,char***,int*,int*,char**);
extern "C" void sqlite3_free_table(char**);
#include "ItemData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045f5f4;
extern "C" unsigned long _DAT_0045f5f8;
extern "C" unsigned long _DAT_00488a2c;
extern "C" unsigned long _DAT_00488a30;
extern "C" unsigned long _DAT_00488a34;
extern "C" unsigned long _DAT_00488a38;
extern "C" unsigned long _DAT_00488a3c;
extern "C" unsigned long _DAT_00488a40;
extern "C" unsigned long _DAT_00488a44;
extern "C" unsigned long _DAT_00488b84;
extern "C" unsigned long _DAT_00488b88;
extern "C" unsigned long _DAT_00488b8c;
extern "C" unsigned long _DAT_00488b90;
extern "C" unsigned long _DAT_00488b94;
extern "C" unsigned long _DAT_00488b98;
extern "C" unsigned long _DAT_00488b9c;
extern "C" unsigned long _DAT_00488ba0;
extern "C" unsigned long _DAT_00488ba4;
extern "C" unsigned long _DAT_00488c80;
extern "C" unsigned long _DAT_00488c84;
extern "C" unsigned long _DAT_00488da4;
extern "C" unsigned long _DAT_00488da8;
extern "C" unsigned long _DAT_00488dac;
extern "C" unsigned long _DAT_00488db0;
extern "C" unsigned long g_0045f5f4;
extern "C" unsigned long g_0045f5f8;
extern "C" unsigned long g_00488a2c;
extern "C" unsigned long g_00488a30;
extern "C" unsigned long g_00488a34;
extern "C" unsigned long g_00488a38;
extern "C" unsigned long g_00488a3c;
extern "C" unsigned long g_00488a40;
extern "C" unsigned long g_00488a44;
extern "C" unsigned long g_00488b84;
extern "C" unsigned long g_00488b88;
extern "C" unsigned long g_00488b8c;
extern "C" unsigned long g_00488b90;
extern "C" unsigned long g_00488b94;
extern "C" unsigned long g_00488b98;
extern "C" unsigned long g_00488b9c;
extern "C" unsigned long g_00488ba0;
extern "C" unsigned long g_00488ba4;
extern "C" unsigned long g_00488c80;
extern "C" unsigned long g_00488c84;
extern "C" unsigned long g_00488da4;
extern "C" unsigned long g_00488da8;
extern "C" unsigned long g_00488dac;
extern "C" unsigned long g_00488db0;
int * ItemData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x7c)));
  0 /* ctorZero */;
  iVar2 = ((ItemData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int ItemData::operator=(int P2)
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(((int)this) + 4) = *(undefined4 *)(p2 + 4);
  iVar3 = ((int)this) + 100;
  *(undefined4 *)(((int)this) + 8) = *(undefined4 *)(p2 + 8);
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(p2 + 0xc);
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(p2 + 0x10);
  *(undefined4 *)(((int)this) + 0x14) = *(undefined4 *)(p2 + 0x14);
  func_0079e52c(((int)this) + 0x18,p2 + 0x18);
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(p2 + 0x1c);
  *(undefined4 *)(((int)this) + 0x20) = *(undefined4 *)(p2 + 0x20);
  *(undefined4 *)(((int)this) + 0x24) = *(undefined4 *)(p2 + 0x24);
  *(undefined4 *)(((int)this) + 0x28) = *(undefined4 *)(p2 + 0x28);
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(p2 + 0x2c);
  *(undefined4 *)(((int)this) + 0x30) = *(undefined4 *)(p2 + 0x30);
  func_0079e52c(((int)this) + 0x34,p2 + 0x34);
  func_0079e52c(((int)this) + 0x38,p2 + 0x38);
  func_0079e52c(((int)this) + 0x3c,p2 + 0x3c);
  func_0079e52c(((int)this) + 0x40,p2 + 0x40);
  *(undefined4 *)(((int)this) + 0x44) = *(undefined4 *)(p2 + 0x44);
  *(undefined4 *)(((int)this) + 0x48) = *(undefined4 *)(p2 + 0x48);
  *(undefined1 *)(((int)this) + 0x4c) = *(undefined1 *)(p2 + 0x4c);
  *(undefined4 *)(((int)this) + 0x50) = *(undefined4 *)(p2 + 0x50);
  *(undefined4 *)(((int)this) + 0x54) = *(undefined4 *)(p2 + 0x54);
  *(undefined4 *)(((int)this) + 0x58) = *(undefined4 *)(p2 + 0x58);
  func_0079e52c(((int)this) + 0x5c,p2 + 0x5c);
  func_0079e52c(((int)this) + 0x60,p2 + 0x60);
  if (iVar3 != p2 + 100) {
  ; /* _Rb_tree 垃圾桩化 */
    *(int *)(((int)this) + 0x70) = ((int)this) + 0x68;
    *(undefined4 *)(((int)this) + 0x6c) = 0;
    *(int *)(((int)this) + 0x74) = ((int)this) + 0x68;
    *(undefined4 *)(((int)this) + 0x78) = 0;
    if (*(int *)(p2 + 0x6c) != 0) {
  ; /* _Rb_tree 垃圾桩化 */
      *(int *)(((int)this) + 0x6c) = iVar3;
      iVar1 = iVar3;
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 8);
      } while (iVar1 != 0);
      *(int *)(((int)this) + 0x70) = iVar2;
      do {
        iVar1 = iVar3;
        iVar3 = *(int *)(iVar1 + 0xc);
      } while (iVar3 != 0);
      *(int *)(((int)this) + 0x74) = iVar1;
      *(undefined4 *)(((int)this) + 0x78) = *(undefined4 *)(p2 + 0x78);
    }
  }
  return ((int)this);
}

ItemData::ItemData()
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = *(int *)(p2 + 4);
  *(int *)((int)this + 4*(2)) = *(int *)(p2 + 8);
  *(int *)((int)this + 4*(3)) = *(int *)(p2 + 0xc);
  *(int *)((int)this + 4*(4)) = *(int *)(p2 + 0x10);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(p2 + 0x14);
  func_0079e53c(((int)this) + 6,p2 + 0x18);
  *(int *)((int)this + 4*(7)) = *(int *)(p2 + 0x1c);
  *(int *)((int)this + 4*(8)) = *(int *)(p2 + 0x20);
  *(int *)((int)this + 4*(9)) = *(int *)(p2 + 0x24);
  *(int *)((int)this + 4*(10)) = *(int *)(p2 + 0x28);
  *(int *)((int)this + 4*(0xb)) = *(int *)(p2 + 0x2c);
  *(int *)((int)this + 4*(0xc)) = *(int *)(p2 + 0x30);
  func_0079e53c(((int)this) + 0xd,p2 + 0x34);
  func_0079e53c(((int)this) + 0xe,p2 + 0x38);
  func_0079e53c(((int)this) + 0xf,p2 + 0x3c);
  func_0079e53c(((int)this) + 0x10,p2 + 0x40);
  *(int *)((int)this + 4*(0x11)) = *(int *)(p2 + 0x44);
  *(int *)((int)this + 4*(0x12)) = *(int *)(p2 + 0x48);
  *(undefined1 *)(((int)this) + 0x13) = *(undefined1 *)(p2 + 0x4c);
  *(int *)((int)this + 4*(0x14)) = *(int *)(p2 + 0x50);
  *(int *)((int)this + 4*(0x15)) = *(int *)(p2 + 0x54);
  *(int *)((int)this + 4*(0x16)) = *(int *)(p2 + 0x58);
  func_0079e53c(((int)this) + 0x17,p2 + 0x5c);
  func_0079e53c(((int)this) + 0x18,p2 + 0x60);
  piVar4 = (int *)(intptr_t)(((int)this) + 0x1a);
  (void)(((long long)::memset((void *)(piVar4),(int)(0),(size_t)(0x10))));
  *(int *)((int)this + 4*(0x1c)) = (int)piVar4;
  *(int *)((int)this + 4*(0x1e)) = 0;
  *(int *)((int)this + 4*(0x1d)) = (int)piVar4;
  if (*(int *)(p2 + 0x6c) != 0) {
  ; /* _Rb_tree 垃圾桩化 */
    *(int *)((int)this + 4*(0x1b)) = iVar1;
    iVar2 = iVar1;
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 8);
    } while (iVar2 != 0);
    *(int *)((int)this + 4*(0x1c)) = iVar3;
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc);
    } while (iVar1 != 0);
    *(int *)((int)this + 4*(0x1d)) = iVar2;
    *(int *)((int)this + 4*(0x1e)) = *(int *)(p2 + 0x78);
  }
  return;
}

int ItemData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ItemData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int ItemData::getBagType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void ItemData::setBagType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int ItemData::getBigType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void ItemData::setBigType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int ItemData::getSubType() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void ItemData::setSubType(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int ItemData::getSequence() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void ItemData::setSequence(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int ItemData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void ItemData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int ItemData::getQuality() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void ItemData::setQuality(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int ItemData::getPrice() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void ItemData::setPrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

int ItemData::getFoldCount() const
{
  return *(undefined4 *)(((int)this) + 0x48);
}

void ItemData::setFoldCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x48) = p1;
  return;
}

bool ItemData::getISCanUse() const
{
  return *(undefined1 *)(((int)this) + 0x4c);
}

void ItemData::setISCanUse(bool p1)
{
  *(undefined1 *)(((int)this) + 0x4c) = p1;
  return;
}

int ItemData::getCopyID() const
{
  return *(undefined4 *)(((int)this) + 0x50);
}

void ItemData::setCopyID(int p1)
{
  *(undefined4 *)(((int)this) + 0x50) = p1;
  return;
}

int ItemData::getItemNum() const
{
  return *(undefined4 *)(((int)this) + 0x54);
}

void ItemData::setItemNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x54) = p1;
  return;
}

int ItemData::getItemLV() const
{
  return *(undefined4 *)(((int)this) + 0x58);
}

void ItemData::setItemLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x58) = p1;
  return;
}

void ItemData::setValue(std::string * p1)
{
  func_0079e52c(((int)this) + 0x60);
  return;
}

void ItemData::setDropIcon(std::string * p1)
{
  func_0079e52c(((int)this) + 0x5c);
  return;
}

void ItemData::setDetail(std::string * p1)
{
  func_0079e52c(((int)this) + 0x40);
  return;
}

void ItemData::setDesc(std::string * p1)
{
  func_0079e52c(((int)this) + 0x3c);
  return;
}

void ItemData::setSmallIcon(std::string * p1)
{
  func_0079e52c(((int)this) + 0x38);
  return;
}

void ItemData::setIcon(std::string * p1)
{
  func_0079e52c(((int)this) + 0x34);
  return;
}

void ItemData::setName(std::string * p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

std::string ItemData::getValue() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x60);
  return std::string();
}

std::string ItemData::getDropIcon() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x5c);
  return std::string();
}

std::string ItemData::getDetail() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x40);
  return std::string();
}

std::string ItemData::getDesc() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x3c);
  return std::string();
}

std::string ItemData::getSmallIcon() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x38);
  return std::string();
}

std::string ItemData::getIcon() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x34);
  return std::string();
}

std::string ItemData::getName() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x18);
  return std::string();
}

bool ItemData::init()
{
  return 1;
}



ItemData::~ItemData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"ItemData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass(*(std::string *)(void *)auStack_1c);
  func_0079e2bc(auStack_1c);
  ; /* _Rb_tree 垃圾桩化 */
  func_0079e2bc(((int)this) + 0x18);
  func_0079e2bc(((int)this) + 0x17);
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xf);
  func_0079e2bc(((int)this) + 0xe);
  func_0079e2bc(((int)this) + 0xd);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int ItemData::GetAllEquip()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  func_0079e45c(auStack_40,g_00488da4 + 0x488caa,&uStack_28);
  iStack_3c = 0;
  func_0079e45c(&uStack_30,((intptr_t)"select * from "),&uStack_28);
  func_0079e69c(&uStack_30,((intptr_t)"itemdata"));
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x18))());
  iVar3 = sqlite3_get_table((void *)uVar2,*(const char **)&uStack_30,(char ***)&iStack_3c,&iStack_38,&iStack_34,0);
  if ((iVar3 == 0) && (0 < iStack_38)) {
    iVar3 = (iStack_34 + 7) * 4;
    for (iStack_2c = 0; iStack_2c < iStack_38; iStack_2c = iStack_2c + 1) {
      iStack_24 = *(int *)(g_00488db0 + 0x488d0e) + 0xc;
      uStack_28 = (undefined4)(((long long)::atoi((const char *)(*(undefined4 *)(iStack_3c + iVar3 + -0x18)))));
      func_0079e2dc(&iStack_24,*(undefined4 *)(iStack_3c + iVar3 + -0x14));
      uStack_20 = (undefined4)(((long long)::atoi((const char *)(*(undefined4 *)(iStack_3c + iVar3)))));
      uStack_1c = (undefined4)(((long long)::atoi((const char *)(*(undefined4 *)(iStack_3c + iVar3 + 4)))));
      undefined4 auStack_20x[12];
      puVar4 = auStack_20x;
      *puVar4 = uStack_28;
      func_0079e52c(puVar4 + 1,&iStack_24);
      iVar3 = iVar3 + 0x4c;
      puVar4[2] = uStack_20;
      puVar4[3] = uStack_1c;
      func_0079e2bc(&iStack_24);
    }
  }
  sqlite3_free_table(*(char ***)&iStack_3c);
  func_0079e2bc(&uStack_30);
  func_0079e2bc(auStack_40);
  return ((int)this) + 100;
}

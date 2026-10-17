#include "BLAchievementManager.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "AchievementData.h"
#include "AchievementItemData.h"
#include "BLAchievementItem.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079ea94(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004ec624;
extern "C" unsigned long UNK_004ec68c;
extern "C" unsigned long UNK_004ec9cc;
extern "C" unsigned long UNK_004ec9ce;
extern "C" unsigned long _DAT_004ec820;
extern "C" unsigned long _DAT_004ec824;
extern "C" unsigned long _DAT_004ec864;
extern "C" unsigned long _DAT_004ec868;
extern "C" unsigned long _DAT_004ec86c;
extern "C" unsigned long _DAT_004ec8fc;
extern "C" unsigned long _DAT_004ec900;
extern "C" unsigned long _DAT_004ec990;
extern "C" unsigned long _DAT_004ec994;
extern "C" unsigned long _DAT_004ece28;
extern "C" unsigned long _DAT_004ed178;
extern "C" unsigned long _DAT_004ed17c;
extern "C" unsigned long _DAT_004ed180;
extern "C" unsigned long _DAT_004ed184;
extern "C" unsigned long _DAT_004ed188;
extern "C" unsigned long _DAT_004ed18c;
extern "C" unsigned long _DAT_004ed190;
extern "C" unsigned long _DAT_004ed194;
extern "C" unsigned long _DAT_004ed198;
extern "C" unsigned long _DAT_004ed19c;
extern "C" unsigned long _DAT_004ed1a0;
extern "C" unsigned long _DAT_004ed1a4;
extern "C" unsigned long _DAT_004ed1a8;
extern "C" unsigned long _DAT_004ed1ac;
extern "C" unsigned long _DAT_004ed1b0;
extern "C" unsigned long _DAT_004ed1b4;
extern "C" unsigned long _DAT_004ed410;
extern "C" unsigned long _DAT_004ed414;
extern "C" unsigned long _DAT_004ed418;
extern "C" unsigned long _DAT_004ed41c;
extern "C" unsigned long _DAT_004ed420;
extern "C" unsigned long _DAT_004ed424;
extern "C" unsigned long _DAT_004ed428;
extern "C" unsigned long _DAT_004ed42c;
extern "C" unsigned long _DAT_004ed430;
extern "C" unsigned long _DAT_004ed558;
extern "C" unsigned long _DAT_004ed55c;
extern "C" unsigned long _UNK_004ec6bc;
extern "C" unsigned long _UNK_004ec6c0;
extern "C" unsigned long _UNK_004eca24;
extern "C" unsigned long _UNK_004eca28;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004ec624;
extern "C" unsigned long g_004ec68c;
extern "C" unsigned long g_004ec6bc;
extern "C" unsigned long g_004ec6c0;
extern "C" unsigned long g_004ec820;
extern "C" unsigned long g_004ec824;
extern "C" unsigned long g_004ec864;
extern "C" unsigned long g_004ec868;
extern "C" unsigned long g_004ec86c;
extern "C" unsigned long g_004ec8fc;
extern "C" unsigned long g_004ec900;
extern "C" unsigned long g_004ec990;
extern "C" unsigned long g_004ec994;
extern "C" unsigned long g_004ec9cc;
extern "C" unsigned long g_004ec9ce;
extern "C" unsigned long g_004eca24;
extern "C" unsigned long g_004eca28;
extern "C" unsigned long g_004ece28;
extern "C" unsigned long g_004ed178;
extern "C" unsigned long g_004ed17c;
extern "C" unsigned long g_004ed180;
extern "C" unsigned long g_004ed184;
extern "C" unsigned long g_004ed188;
extern "C" unsigned long g_004ed18c;
extern "C" unsigned long g_004ed190;
extern "C" unsigned long g_004ed194;
extern "C" unsigned long g_004ed198;
extern "C" unsigned long g_004ed19c;
extern "C" unsigned long g_004ed1a0;
extern "C" unsigned long g_004ed1a4;
extern "C" unsigned long g_004ed1a8;
extern "C" unsigned long g_004ed1ac;
extern "C" unsigned long g_004ed1b0;
extern "C" unsigned long g_004ed1b4;
extern "C" unsigned long g_004ed410;
extern "C" unsigned long g_004ed414;
extern "C" unsigned long g_004ed418;
extern "C" unsigned long g_004ed41c;
extern "C" unsigned long g_004ed420;
extern "C" unsigned long g_004ed424;
extern "C" unsigned long g_004ed428;
extern "C" unsigned long g_004ed42c;
extern "C" unsigned long g_004ed430;
extern "C" unsigned long g_004ed558;
extern "C" unsigned long g_004ed55c;
cocos2d::CCDictionary* BLAchievementManager::getDicKillMonster() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x14));
}

cocos2d::CCDictionary* BLAchievementManager::getDicItems() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x18));
}

cocos2d::CCDictionary* BLAchievementManager::getDicKillBoss() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x1c));
}

AchievementData* BLAchievementManager::getAchievementData() const
{
  return (AchievementData*)(*(undefined4 *)(((int)this) + 0x20));
}

cocos2d::CCDictionary* BLAchievementManager::getDicCompleteAchieve() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x24));
}

int BLAchievementManager::getCanGetNum() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLAchievementManager::setCanGetNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

cocos2d::CCDictionary* BLAchievementManager::getGetRewards() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x2c));
}

BLAchievementManager::~BLAchievementManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xb)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ec68c + g_004ec6c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLAchievementManager::BLAchievementManager()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(6)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  /* CTOR_FIX (R73)：原为 `::operator new(0x18)` + 直接调 init() —— 裸分配**没有跑构造函数**，
     新对象 vptr == NULL，随后 init() 的虚调用读 [0+...] -> SEGV fault 0x0
     （真机 tombstone: BLAchievementManager::BLAchievementManager()+168）。改用真构造。*/
  piVar2 = (int *)(intptr_t)(new AchievementData());
  iVar1 = (undefined4)(intptr_t)(((AchievementData *)piVar2)->init());
  if (iVar1 == 0) {
    /* RAW_SLOT_FIX (R73)：原为 `(**(code **)(*piVar2 + 8))(piVar2);` —— 槽 8 = idx 2 = 删除析构 D0，
       但生成器**多一次解引用**（先把函数指针再解引用一次）→ 野跳到函数体首字当地址
       （真机 tombstone: BLAchievementManager ctor+178, pc 0x82466fb4 <unknown>）。改为 delete。 */
    delete (AchievementData *)piVar2;
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(8)) = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(9)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xb)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(7)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  /* STUB_STR_FIX (R73)：与 AchievementData ctor 同族 —— gnustl string ctor 桩不填槽，
     随后 `(std::string)(char*)uStack_14` 用 NULL 构造 libc++ string。改为真字符串。 */
  BLLeakUtils *pLeakUtils = (BLLeakUtils *)(intptr_t)((BLLeakUtils *)this)->share();
  pLeakUtils->addClass(std::string("BLAchievementManager"));
  return;
}

bool BLAchievementManager::init()
{
  return 1;
}

/* SINGLETON_FIX (R73)：原生成器把静态单例指针写成三处**互不相同的裸地址**运算
   （g_004ec864+0x4ec860 / g_004ec868+0x4ec878 / g_004ec86c+0x4ec88e，g_ 均为 0 值桩），
   真机在 BLAchievementManager::share()+24 读裸地址 0x4ec860 崩溃（调用栈
   DataManager::init → UserData::init()+94 → share()）。
   语义就是经典单例：判空 -> new(0x30) -> 存回 -> init() -> 返回。改为真实文件级静态。*/
static BLAchievementManager *s_share = 0;

undefined4 BLAchievementManager::share()
{
  if (s_share == 0) {
    s_share = new BLAchievementManager();
    s_share->init();
  }
  return (undefined4)(intptr_t)s_share;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLAchievementManager::setDicKillMonster(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::setDicItems(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::setDicKillBoss(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::setAchievementData(AchievementData* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::setDicCompleteAchieve(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::setGetRewards(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLAchievementManager::updateKillMonster(std::string p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAchievementManager::updateKillBoss(std::string p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLAchievementManager::updateAchievement()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLAchievementManager::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLAchievementManager::updateDataToDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAchievementManager::updateItemNum(int p1, long long p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  if (piVar2 != (int *)0x0) {
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x30)))());
    if ((iVar3 == 4) && (iVar3 = (**(code **)(*(int *)(piVar2) + (0x50)))(piVar2), iVar3 == 4)) {
      piVar4 = (int *)::operator new(0x84);
      ::new ((void *)piVar4) EquipData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar3 = (undefined4)(intptr_t)(((EquipData *)(piVar4))->init());
      if (iVar3 == 0) {
        (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
        piVar4 = (int *)0x0;
      }
      else {
        ((cocos2d::CCObject *)(piVar4))->autorelease();
      }
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
      ((EquipData *)(piVar4))->initWithID(uVar1);
    }
    uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    ConvertToString<int>(auStack_1c, uVar1, 0);
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey((char const *)auStack_1c));
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)func_0079e55c(iVar3,*(undefined4 *)(g_004ed558 + 0x4ed4c0),
                                      *(undefined4 *)(g_004ed55c + 0x4ed4c2),0);
    }
    func_0079e2bc(auStack_1c);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)((BLAchievementItem *)this)->create();
      pcVar5 = *(code **)(*piVar4 + 0x1c);
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
      ConvertToString<int>(auStack_1c, uVar1, 0);
      (*pcVar5)(piVar4,auStack_1c);
      func_0079e2bc(auStack_1c);
      uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
      (**(code **)(*(int *)(piVar4) + (0x18)))(auStack_1c,piVar4);
      ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)piVar4, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
    pcVar5 = *(code **)(*piVar4 + 0x24);
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x20)))(piVar4));
    (*pcVar5)(piVar4,iVar3 + p2);
  }
  ((BLAchievementManager *)(((int)this)))->updateDataToDB();
  return;
}

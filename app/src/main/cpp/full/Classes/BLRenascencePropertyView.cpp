#include "BLRenascencePropertyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRenascencePropertyPresenter.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00650004;
extern "C" unsigned long UNK_00650010;
extern "C" unsigned long UNK_0065001c;
extern "C" unsigned long UNK_0065001e;
extern "C" unsigned long UNK_00650020;
extern "C" unsigned long UNK_0065003e;
extern "C" unsigned long UNK_00650070;
extern "C" unsigned long UNK_00650088;
extern "C" unsigned long UNK_0065008a;
extern "C" unsigned long UNK_0065008c;
extern "C" unsigned long UNK_0065008e;
extern "C" unsigned long UNK_006500ac;
extern "C" unsigned long UNK_006500f2;
extern "C" unsigned long UNK_0065013e;
extern "C" unsigned long UNK_00650198;
extern "C" unsigned long UNK_006501d8;
extern "C" unsigned long UNK_00650258;
extern "C" unsigned long UNK_00650280;
extern "C" unsigned long UNK_00650304;
extern "C" unsigned long UNK_00650378;
extern "C" unsigned long UNK_0065037c;
extern "C" unsigned long UNK_0065040c;
extern "C" unsigned long UNK_0065042e;
extern "C" unsigned long UNK_006504c0;
extern "C" unsigned long UNK_006504c2;
extern "C" unsigned long UNK_00650554;
extern "C" unsigned long UNK_0065056c;
extern "C" unsigned long UNK_006505fa;
extern "C" unsigned long UNK_006505fc;
extern "C" unsigned long UNK_00650686;
extern "C" unsigned long UNK_006506e4;
extern "C" unsigned long UNK_00650776;
extern "C" unsigned long UNK_00650778;
extern "C" unsigned long UNK_00650802;
extern "C" unsigned long UNK_0065081a;
extern "C" unsigned long UNK_0065088e;
extern "C" unsigned long UNK_00650892;
extern "C" unsigned long UNK_0065091a;
extern "C" unsigned long UNK_0065094e;
extern "C" unsigned long _UNK_00650048;
extern "C" unsigned long _UNK_0065004c;
extern "C" unsigned long _UNK_00650050;
extern "C" unsigned long _UNK_00650054;
extern "C" unsigned long _UNK_00650058;
extern "C" unsigned long _UNK_0065005c;
extern "C" unsigned long _UNK_006500b4;
extern "C" unsigned long _UNK_006500b8;
extern "C" unsigned long _UNK_006500bc;
extern "C" unsigned long _UNK_006500c0;
extern "C" unsigned long _UNK_006500c4;
extern "C" unsigned long _UNK_006500c8;
extern "C" unsigned long _UNK_00650188;
extern "C" unsigned long _UNK_0065018c;
extern "C" unsigned long _UNK_00650244;
extern "C" unsigned long _UNK_00650248;
extern "C" unsigned long _UNK_0065025c;
extern "C" unsigned long _UNK_00650284;
extern "C" unsigned long _UNK_00650690;
extern "C" unsigned long _UNK_00650694;
extern "C" unsigned long _UNK_00650698;
extern "C" unsigned long _UNK_0065069c;
extern "C" unsigned long _UNK_006506a0;
extern "C" unsigned long _UNK_006506a4;
extern "C" unsigned long _UNK_006506a8;
extern "C" unsigned long _UNK_006506ac;
extern "C" unsigned long _UNK_006506b0;
extern "C" unsigned long _UNK_006506b4;
extern "C" unsigned long _UNK_006506b8;
extern "C" unsigned long _UNK_006506bc;
extern "C" unsigned long _UNK_006506c0;
extern "C" unsigned long _UNK_006506c4;
extern "C" unsigned long _UNK_006506c8;
extern "C" unsigned long _UNK_006506cc;
extern "C" unsigned long _UNK_006506d0;
extern "C" unsigned long _UNK_00650980;
extern "C" unsigned long _UNK_00650984;
extern "C" unsigned long _UNK_00650988;
extern "C" unsigned long _UNK_0065098c;
extern "C" unsigned long _UNK_00650990;
extern "C" unsigned long _UNK_00650994;
extern "C" unsigned long _UNK_00650998;
extern "C" unsigned long _UNK_0065099c;
extern "C" unsigned long _UNK_006509a0;
extern "C" unsigned long _UNK_006509a4;
extern "C" unsigned long _UNK_006509a8;
extern "C" unsigned long _UNK_006509ac;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00650004;
extern "C" unsigned long g_00650010;
extern "C" unsigned long g_0065001c;
extern "C" unsigned long g_0065001e;
extern "C" unsigned long g_00650020;
extern "C" unsigned long g_0065003e;
extern "C" unsigned long g_00650048;
extern "C" unsigned long g_0065004c;
extern "C" unsigned long g_00650050;
extern "C" unsigned long g_00650054;
extern "C" unsigned long g_00650058;
extern "C" unsigned long g_0065005c;
extern "C" unsigned long g_00650070;
extern "C" unsigned long g_00650088;
extern "C" unsigned long g_0065008a;
extern "C" unsigned long g_0065008c;
extern "C" unsigned long g_0065008e;
extern "C" unsigned long g_006500ac;
extern "C" unsigned long g_006500b4;
extern "C" unsigned long g_006500b8;
extern "C" unsigned long g_006500bc;
extern "C" unsigned long g_006500c0;
extern "C" unsigned long g_006500c4;
extern "C" unsigned long g_006500c8;
extern "C" unsigned long g_006500f2;
extern "C" unsigned long g_0065013e;
extern "C" unsigned long g_00650188;
extern "C" unsigned long g_0065018c;
extern "C" unsigned long g_00650198;
extern "C" unsigned long g_006501d8;
extern "C" unsigned long g_00650244;
extern "C" unsigned long g_00650248;
extern "C" unsigned long g_00650258;
extern "C" unsigned long g_0065025c;
extern "C" unsigned long g_00650280;
extern "C" unsigned long g_00650284;
extern "C" unsigned long g_00650304;
extern "C" unsigned long g_00650378;
extern "C" unsigned long g_0065037c;
extern "C" unsigned long g_0065040c;
extern "C" unsigned long g_0065042e;
extern "C" unsigned long g_006504c0;
extern "C" unsigned long g_006504c2;
extern "C" unsigned long g_00650554;
extern "C" unsigned long g_0065056c;
extern "C" unsigned long g_006505fa;
extern "C" unsigned long g_006505fc;
extern "C" unsigned long g_00650686;
extern "C" unsigned long g_00650690;
extern "C" unsigned long g_00650694;
extern "C" unsigned long g_00650698;
extern "C" unsigned long g_0065069c;
extern "C" unsigned long g_006506a0;
extern "C" unsigned long g_006506a4;
extern "C" unsigned long g_006506a8;
extern "C" unsigned long g_006506ac;
extern "C" unsigned long g_006506b0;
extern "C" unsigned long g_006506b4;
extern "C" unsigned long g_006506b8;
extern "C" unsigned long g_006506bc;
extern "C" unsigned long g_006506c0;
extern "C" unsigned long g_006506c4;
extern "C" unsigned long g_006506c8;
extern "C" unsigned long g_006506cc;
extern "C" unsigned long g_006506d0;
extern "C" unsigned long g_006506e4;
extern "C" unsigned long g_00650776;
extern "C" unsigned long g_00650778;
extern "C" unsigned long g_00650802;
extern "C" unsigned long g_0065081a;
extern "C" unsigned long g_0065088e;
extern "C" unsigned long g_00650892;
extern "C" unsigned long g_0065091a;
extern "C" unsigned long g_0065094e;
extern "C" unsigned long g_00650980;
extern "C" unsigned long g_00650984;
extern "C" unsigned long g_00650988;
extern "C" unsigned long g_0065098c;
extern "C" unsigned long g_00650990;
extern "C" unsigned long g_00650994;
extern "C" unsigned long g_00650998;
extern "C" unsigned long g_0065099c;
extern "C" unsigned long g_006509a0;
extern "C" unsigned long g_006509a4;
extern "C" unsigned long g_006509a8;
extern "C" unsigned long g_006509ac;
int * BLRenascencePropertyView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}



BLRenascencePropertyView::BLRenascencePropertyView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006500f2 + g_00650188);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_0065013e + g_0065018c,auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  return;
}

BLRenascencePropertyView::~BLRenascencePropertyView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00650198 + (intptr_t)(g_00650244))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006501d8 + (intptr_t)(g_00650248)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  ((std::vector<cocos2d::CCLabelTTF*, std::allocator<cocos2d::CCLabelTTF*>> *)((int)this) + 0x46)->~vector();
  ((std::vector<cocos2d::CCLabelTTF*, std::allocator<cocos2d::CCLabelTTF*>> *)((int)this) + 0x43)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool BLRenascencePropertyView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascencePropertyPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascencePropertyView::initView();
    ((BLRenascencePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascencePropertyView*)((int)this));
  }
  return iVar1;
}

void BLRenascencePropertyView::onEnter()
{
  ((BLRenascencePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRenascencePropertyView::onExit()
{
  ((BLRenascencePropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
undefined8 BLRenascencePropertyView::getLabTit(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLRenascencePropertyView::getLabValue(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRenascencePropertyView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

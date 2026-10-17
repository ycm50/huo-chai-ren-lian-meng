#include "BLMinePiliageView.h"
#include "BLLeakUtils.h"
#include "BLMinePiliagePresenter.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00632324;
extern "C" unsigned long UNK_00632368;
extern "C" unsigned long UNK_006323ac;
extern "C" unsigned long UNK_006323d4;
extern "C" unsigned long UNK_0063257a;
extern "C" unsigned long UNK_00632588;
extern "C" unsigned long UNK_00632750;
extern "C" unsigned long UNK_00632832;
extern "C" unsigned long UNK_0063291a;
extern "C" unsigned long UNK_006329c2;
extern "C" unsigned long UNK_006329c6;
extern "C" unsigned long UNK_00632aaa;
extern "C" unsigned long UNK_00632ba8;
extern "C" unsigned long _DAT_00632474;
extern "C" unsigned long _DAT_00632478;
extern "C" unsigned long _UNK_00632398;
extern "C" unsigned long _UNK_0063239c;
extern "C" unsigned long _UNK_006323b0;
extern "C" unsigned long _UNK_006323d8;
extern "C" unsigned long _UNK_006326e4;
extern "C" unsigned long _UNK_006326e8;
extern "C" unsigned long _UNK_006326ec;
extern "C" unsigned long _UNK_006326f0;
extern "C" unsigned long _UNK_00632b34;
extern "C" unsigned long _UNK_00632b38;
extern "C" unsigned long _UNK_00632b3c;
extern "C" unsigned long _UNK_00632b40;
extern "C" unsigned long _UNK_00632b44;
extern "C" unsigned long _UNK_00632b48;
extern "C" unsigned long _UNK_00632b4c;
extern "C" unsigned long _UNK_00632b50;
extern "C" unsigned long _UNK_00632b54;
extern "C" unsigned long _UNK_00632b58;
extern "C" unsigned long _UNK_00632b5c;
extern "C" unsigned long _UNK_00632b60;
extern "C" unsigned long _UNK_00632b64;
extern "C" unsigned long _UNK_00632b68;
extern "C" unsigned long _UNK_00632b6c;
extern "C" unsigned long _UNK_00632c6c;
extern "C" unsigned long _UNK_00632c70;
extern "C" unsigned long _UNK_00632c74;
extern "C" unsigned long _UNK_00632c78;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_00632324;
extern "C" unsigned long g_00632368;
extern "C" unsigned long g_00632398;
extern "C" unsigned long g_0063239c;
extern "C" unsigned long g_006323ac;
extern "C" unsigned long g_006323b0;
extern "C" unsigned long g_006323d4;
extern "C" unsigned long g_006323d8;
extern "C" unsigned long g_00632474;
extern "C" unsigned long g_00632478;
extern "C" unsigned long g_0063257a;
extern "C" unsigned long g_00632588;
extern "C" unsigned long g_006326e4;
extern "C" unsigned long g_006326e8;
extern "C" unsigned long g_006326ec;
extern "C" unsigned long g_006326f0;
extern "C" unsigned long g_00632750;
extern "C" unsigned long g_00632832;
extern "C" unsigned long g_0063291a;
extern "C" unsigned long g_006329c2;
extern "C" unsigned long g_006329c6;
extern "C" unsigned long g_00632aaa;
extern "C" unsigned long g_00632b34;
extern "C" unsigned long g_00632b38;
extern "C" unsigned long g_00632b3c;
extern "C" unsigned long g_00632b40;
extern "C" unsigned long g_00632b44;
extern "C" unsigned long g_00632b48;
extern "C" unsigned long g_00632b4c;
extern "C" unsigned long g_00632b50;
extern "C" unsigned long g_00632b54;
extern "C" unsigned long g_00632b58;
extern "C" unsigned long g_00632b5c;
extern "C" unsigned long g_00632b60;
extern "C" unsigned long g_00632b64;
extern "C" unsigned long g_00632b68;
extern "C" unsigned long g_00632b6c;
extern "C" unsigned long g_00632ba8;
extern "C" unsigned long g_00632c6c;
extern "C" unsigned long g_00632c70;
extern "C" unsigned long g_00632c74;
extern "C" unsigned long g_00632c78;
BLMinePiliageView::~BLMinePiliageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00632324 + g_00632398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00632368 + g_0063239c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMinePiliageView::BLMinePiliageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00632474 + 0x63241c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMinePiliageView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMinePiliageView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLMinePiliageView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMinePiliageView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMinePiliageView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMinePiliageView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMinePiliageView::getLabAllPiliageNumber()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMinePiliageView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}


void BLMinePiliageView::onEnter()
{
  ((BLMinePiliagePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMinePiliageView::onExit()
{
  ((BLMinePiliagePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMinePiliageView::initMineItem(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMinePiliageView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

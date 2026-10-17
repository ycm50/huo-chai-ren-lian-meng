#include "BLUpdatePublishView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpdatePublishPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00606420;
extern "C" unsigned long UNK_00606464;
extern "C" unsigned long UNK_006064a8;
extern "C" unsigned long UNK_006064d0;
extern "C" unsigned long UNK_006065ec;
extern "C" unsigned long UNK_0060667a;
extern "C" unsigned long UNK_0060669a;
extern "C" unsigned long UNK_00606786;
extern "C" unsigned long UNK_00606826;
extern "C" unsigned long UNK_00606828;
extern "C" unsigned long UNK_00606930;
extern "C" unsigned long UNK_00606940;
extern "C" unsigned long UNK_00606c4c;
extern "C" unsigned long UNK_00606db6;
extern "C" unsigned long UNK_00606f34;
extern "C" unsigned long UNK_00606f44;
extern "C" unsigned long UNK_006070a0;
extern "C" unsigned long UNK_006071fa;
extern "C" unsigned long UNK_0060733a;
extern "C" unsigned long UNK_0060744c;
extern "C" unsigned long UNK_0060744e;
extern "C" unsigned long UNK_00607460;
extern "C" unsigned long _DAT_00606570;
extern "C" unsigned long _DAT_00606574;
extern "C" unsigned long _UNK_00606494;
extern "C" unsigned long _UNK_00606498;
extern "C" unsigned long _UNK_006064ac;
extern "C" unsigned long _UNK_006064d4;
extern "C" unsigned long _UNK_006069d0;
extern "C" unsigned long _UNK_006069d4;
extern "C" unsigned long _UNK_006069d8;
extern "C" unsigned long _UNK_006069dc;
extern "C" unsigned long _UNK_006069e0;
extern "C" unsigned long _UNK_006069e4;
extern "C" unsigned long _UNK_006069e8;
extern "C" unsigned long _UNK_006069ec;
extern "C" unsigned long _UNK_006069f0;
extern "C" unsigned long _UNK_006069f4;
extern "C" unsigned long _UNK_006069f8;
extern "C" unsigned long _UNK_006069fc;
extern "C" unsigned long _UNK_00606a00;
extern "C" unsigned long _UNK_00606a04;
extern "C" unsigned long _UNK_00606a08;
extern "C" unsigned long _UNK_00606a0c;
extern "C" unsigned long _UNK_00606a10;
extern "C" unsigned long _UNK_00606a14;
extern "C" unsigned long _UNK_00606a18;
extern "C" unsigned long _UNK_00606a1c;
extern "C" unsigned long _UNK_00606e90;
extern "C" unsigned long _UNK_00606e94;
extern "C" unsigned long _UNK_00606e98;
extern "C" unsigned long _UNK_00606e9c;
extern "C" unsigned long _UNK_00606ea0;
extern "C" unsigned long _UNK_00606ea4;
extern "C" unsigned long _UNK_00606ea8;
extern "C" unsigned long _UNK_006072c0;
extern "C" unsigned long _UNK_006072c4;
extern "C" unsigned long _UNK_006072c8;
extern "C" unsigned long _UNK_006072cc;
extern "C" unsigned long _UNK_006072d0;
extern "C" unsigned long _UNK_006072d4;
extern "C" unsigned long _UNK_006072d8;
extern "C" unsigned long _UNK_006072dc;
extern "C" unsigned long _UNK_006072e0;
extern "C" unsigned long _UNK_006072e4;
extern "C" unsigned long _UNK_006072e8;
extern "C" unsigned long _UNK_00607508;
extern "C" unsigned long _UNK_0060750c;
extern "C" unsigned long _UNK_00607510;
extern "C" unsigned long _UNK_00607514;
extern "C" unsigned long _UNK_00607518;
extern "C" unsigned long _UNK_0060751c;
extern "C" unsigned long _UNK_00607520;
extern "C" unsigned long _UNK_00607524;
extern "C" unsigned long _UNK_00607528;
extern "C" unsigned long _UNK_0060752c;
extern "C" unsigned long g_00606420;
extern "C" unsigned long g_00606464;
extern "C" unsigned long g_00606494;
extern "C" unsigned long g_00606498;
extern "C" unsigned long g_006064a8;
extern "C" unsigned long g_006064ac;
extern "C" unsigned long g_006064d0;
extern "C" unsigned long g_006064d4;
extern "C" unsigned long g_00606570;
extern "C" unsigned long g_00606574;
extern "C" unsigned long g_006065ec;
extern "C" unsigned long g_0060667a;
extern "C" unsigned long g_0060669a;
extern "C" unsigned long g_00606786;
extern "C" unsigned long g_00606826;
extern "C" unsigned long g_00606828;
extern "C" unsigned long g_00606930;
extern "C" unsigned long g_00606940;
extern "C" unsigned long g_006069d0;
extern "C" unsigned long g_006069d4;
extern "C" unsigned long g_006069d8;
extern "C" unsigned long g_006069dc;
extern "C" unsigned long g_006069e0;
extern "C" unsigned long g_006069e4;
extern "C" unsigned long g_006069e8;
extern "C" unsigned long g_006069ec;
extern "C" unsigned long g_006069f0;
extern "C" unsigned long g_006069f4;
extern "C" unsigned long g_006069f8;
extern "C" unsigned long g_006069fc;
extern "C" unsigned long g_00606a00;
extern "C" unsigned long g_00606a04;
extern "C" unsigned long g_00606a08;
extern "C" unsigned long g_00606a0c;
extern "C" unsigned long g_00606a10;
extern "C" unsigned long g_00606a14;
extern "C" unsigned long g_00606a18;
extern "C" unsigned long g_00606a1c;
extern "C" unsigned long g_00606c4c;
extern "C" unsigned long g_00606db6;
extern "C" unsigned long g_00606e90;
extern "C" unsigned long g_00606e94;
extern "C" unsigned long g_00606e98;
extern "C" unsigned long g_00606e9c;
extern "C" unsigned long g_00606ea0;
extern "C" unsigned long g_00606ea4;
extern "C" unsigned long g_00606ea8;
extern "C" unsigned long g_00606f34;
extern "C" unsigned long g_00606f44;
extern "C" unsigned long g_006070a0;
extern "C" unsigned long g_006071fa;
extern "C" unsigned long g_006072c0;
extern "C" unsigned long g_006072c4;
extern "C" unsigned long g_006072c8;
extern "C" unsigned long g_006072cc;
extern "C" unsigned long g_006072d0;
extern "C" unsigned long g_006072d4;
extern "C" unsigned long g_006072d8;
extern "C" unsigned long g_006072dc;
extern "C" unsigned long g_006072e0;
extern "C" unsigned long g_006072e4;
extern "C" unsigned long g_006072e8;
extern "C" unsigned long g_0060733a;
extern "C" unsigned long g_0060744c;
extern "C" unsigned long g_0060744e;
extern "C" unsigned long g_00607460;
extern "C" unsigned long g_00607508;
extern "C" unsigned long g_0060750c;
extern "C" unsigned long g_00607510;
extern "C" unsigned long g_00607514;
extern "C" unsigned long g_00607518;
extern "C" unsigned long g_0060751c;
extern "C" unsigned long g_00607520;
extern "C" unsigned long g_00607524;
extern "C" unsigned long g_00607528;
extern "C" unsigned long g_0060752c;
BLUpdatePublishView::~BLUpdatePublishView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00606420 + g_00606494);
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
  func_0079e45c(&uStack_14,&g_00606464 + g_00606498,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLUpdatePublishView::BLUpdatePublishView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00606570 + 0x606518);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLUpdatePublishView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLUpdatePublishView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLUpdatePublishView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLUpdatePublishView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLUpdatePublishView::getContainerLayer()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLUpdatePublishView::getLabDate()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLUpdatePublishView::getLabPlayTit()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLUpdatePublishView::getLabPlay()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLUpdatePublishView::getLabOptimizationTit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLUpdatePublishView::getLabOptimization()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLUpdatePublishView::getLabBugTit()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLUpdatePublishView::getLabBug()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLUpdatePublishView::getBtnGame()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}


void BLUpdatePublishView::onEnter()
{
  ((BLUpdatePublishPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLUpdatePublishView::onExit()
{
  ((BLUpdatePublishPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLUpdatePublishView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

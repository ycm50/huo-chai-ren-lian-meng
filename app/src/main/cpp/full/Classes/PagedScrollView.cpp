#include "PagedScrollView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ccece;
extern "C" unsigned long UNK_006ccf44;
extern "C" unsigned long UNK_006ccf58;
extern "C" unsigned long UNK_006cd028;
extern "C" unsigned long UNK_006cd07c;
extern "C" unsigned long UNK_006cd0a4;
extern "C" unsigned long UNK_006cd0bc;
extern "C" unsigned long UNK_006cd374;
extern "C" unsigned long UNK_006cd376;
extern "C" unsigned long UNK_006cd482;
extern "C" unsigned long UNK_006cd4b6;
extern "C" unsigned long UNK_006cd63a;
extern "C" unsigned long UNK_006cd670;
extern "C" unsigned long UNK_006cd8c4;
extern "C" unsigned long UNK_006cd8ec;
extern "C" unsigned long UNK_006cd920;
extern "C" unsigned long UNK_006cd948;
extern "C" unsigned long _UNK_006cd00c;
extern "C" unsigned long _UNK_006cd010;
extern "C" unsigned long _UNK_006cd014;
extern "C" unsigned long _UNK_006cd018;
extern "C" unsigned long _UNK_006cd01c;
extern "C" unsigned long _UNK_006cd06c;
extern "C" unsigned long _UNK_006cd080;
extern "C" unsigned long _UNK_006cd0a8;
extern "C" unsigned long _UNK_006cd124;
extern "C" unsigned long _UNK_006cd320;
extern "C" unsigned long _UNK_006cd324;
extern "C" unsigned long _UNK_006cd328;
extern "C" unsigned long _UNK_006cd32c;
extern "C" unsigned long _UNK_006cd330;
extern "C" unsigned long _UNK_006cd334;
extern "C" unsigned long _UNK_006cd338;
extern "C" unsigned long _UNK_006cd33c;
extern "C" unsigned long _UNK_006cd4c8;
extern "C" unsigned long _UNK_006cd4cc;
extern "C" unsigned long _UNK_006cd4d0;
extern "C" unsigned long _UNK_006cd4d4;
extern "C" unsigned long _UNK_006cd4d8;
extern "C" unsigned long _UNK_006cd4dc;
extern "C" unsigned long _UNK_006cd678;
extern "C" unsigned long _UNK_006cd67c;
extern "C" unsigned long _UNK_006cd680;
extern "C" unsigned long _UNK_006cd684;
extern "C" unsigned long _UNK_006cd688;
extern "C" unsigned long _UNK_006cd68c;
extern "C" unsigned long _UNK_006cd888;
extern "C" unsigned long _UNK_006cd88c;
extern "C" unsigned long _UNK_006cd8c8;
extern "C" unsigned long _UNK_006cd8f0;
extern "C" unsigned long _UNK_006cd924;
extern "C" unsigned long _UNK_006cd94c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006ccece;
extern "C" unsigned long g_006ccf44;
extern "C" unsigned long g_006ccf58;
extern "C" unsigned long g_006cd00c;
extern "C" unsigned long g_006cd010;
extern "C" unsigned long g_006cd014;
extern "C" unsigned long g_006cd018;
extern "C" unsigned long g_006cd01c;
extern "C" unsigned long g_006cd028;
extern "C" unsigned long g_006cd06c;
extern "C" unsigned long g_006cd07c;
extern "C" unsigned long g_006cd080;
extern "C" unsigned long g_006cd0a4;
extern "C" unsigned long g_006cd0a8;
extern "C" unsigned long g_006cd0bc;
extern "C" unsigned long g_006cd124;
extern "C" unsigned long g_006cd320;
extern "C" unsigned long g_006cd324;
extern "C" unsigned long g_006cd328;
extern "C" unsigned long g_006cd32c;
extern "C" unsigned long g_006cd330;
extern "C" unsigned long g_006cd334;
extern "C" unsigned long g_006cd338;
extern "C" unsigned long g_006cd33c;
extern "C" unsigned long g_006cd374;
extern "C" unsigned long g_006cd376;
extern "C" unsigned long g_006cd482;
extern "C" unsigned long g_006cd4b6;
extern "C" unsigned long g_006cd4c8;
extern "C" unsigned long g_006cd4cc;
extern "C" unsigned long g_006cd4d0;
extern "C" unsigned long g_006cd4d4;
extern "C" unsigned long g_006cd4d8;
extern "C" unsigned long g_006cd4dc;
extern "C" unsigned long g_006cd63a;
extern "C" unsigned long g_006cd670;
extern "C" unsigned long g_006cd678;
extern "C" unsigned long g_006cd67c;
extern "C" unsigned long g_006cd680;
extern "C" unsigned long g_006cd684;
extern "C" unsigned long g_006cd688;
extern "C" unsigned long g_006cd68c;
extern "C" unsigned long g_006cd888;
extern "C" unsigned long g_006cd88c;
extern "C" unsigned long g_006cd8c4;
extern "C" unsigned long g_006cd8c8;
extern "C" unsigned long g_006cd8ec;
extern "C" unsigned long g_006cd8f0;
extern "C" unsigned long g_006cd920;
extern "C" unsigned long g_006cd924;
extern "C" unsigned long g_006cd948;
extern "C" unsigned long g_006cd94c;

PagedScrollView::~PagedScrollView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_006cd028 + g_006cd06c);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x21c;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x24c;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 600;
  *(int *)((int)this + 4*(0x42)) = iVar1 + 0x268;
  if (*(int *)((int)this + 4*(0x68)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x68)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCScrollView(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PagedScrollView::PagedScrollView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006cd0bc + g_006cd124);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x21c;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x24c;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 600;
  *(int *)((int)this + 4*(0x42)) = iVar1 + 0x268;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x68)) = 0;
  *(int *)((int)this + 4*(0x69)) = 0;
  *(int *)((int)this + 4*(0x6a)) = 0;
  *(undefined1 *)(((int)this) + 0x67) = 1;
  *(undefined1 *)((int)((int)this) + 0x19d) = 0;
  *(int *)((int)this + 4*(0x6c)) = 0;
  return;
}






void PagedScrollView::onEnter()
{
  ((cocos2d::extension::CCScrollView *)this)->onEnter();
  return;
}

void PagedScrollView::onExit()
{
  ((cocos2d::extension::CCScrollView *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void PagedScrollView::timer(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::create(cocos2d::CCSize const& p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::enablejiantou(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::updateOffsetPos(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::updateOffset()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::enableIndicator(std::string const& p1, std::string const& p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool PagedScrollView::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PagedScrollView::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PagedScrollView::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

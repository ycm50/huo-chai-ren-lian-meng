#include "WebViewLayer.h"
#include "WebSupport.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e834(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006d0df8;
extern "C" unsigned long UNK_006d0e0a;
extern "C" unsigned long UNK_006d0e5c;
extern "C" unsigned long UNK_006d0e8a;
extern "C" unsigned long UNK_006d0eb2;
extern "C" unsigned long UNK_006d0ffe;
extern "C" unsigned long _UNK_006d0dfc;
extern "C" unsigned long _UNK_006d0e4c;
extern "C" unsigned long _UNK_006d0e60;
extern "C" unsigned long _UNK_006d0ec0;
extern "C" unsigned long _UNK_006d0ec4;
extern "C" unsigned long _UNK_006d1010;
extern "C" unsigned long g_006d0df8;
extern "C" unsigned long g_006d0dfc;
extern "C" unsigned long g_006d0e0a;
extern "C" unsigned long g_006d0e4c;
extern "C" unsigned long g_006d0e5c;
extern "C" unsigned long g_006d0e60;
extern "C" unsigned long g_006d0e8a;
extern "C" unsigned long g_006d0eb2;
extern "C" unsigned long g_006d0ec0;
extern "C" unsigned long g_006d0ec4;
extern "C" unsigned long g_006d0ffe;
extern "C" unsigned long g_006d1010;

void WebViewLayer::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

void WebViewLayer::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

WebViewLayer::~WebViewLayer()
{
                    /* WARNING: Could not recover jumptable at 0x006d0df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d0df8 + g_006d0dfc))(((int)this) + -0xe4);
  return;
}

WebViewLayer::WebViewLayer()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006d0e8a + g_006d0ec0);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  iVar1 = *(int *)(&g_006d0eb2 + g_006d0ec4);
  *(int *)((int)this + 4*(0x44)) = iVar1 + 0xc;
  *(int *)((int)this + 4*(0x45)) = iVar1 + 0xc;
  return;
}

undefined4 WebViewLayer::create()
{
  return 0;
}

void WebViewLayer::webViewDidFinishLoad()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
bool WebViewLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void WebViewLayer::delayCallInitWebView(float p1, float p2, float p3, float p4, std::string const& p5, bool p6)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebViewLayer::setVisible(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebViewLayer::stopActivityAction()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 WebViewLayer::openURL(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void WebViewLayer::canGoBackWeb()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebViewLayer::closeWebView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebViewLayer::onBackbuttonClick()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebViewLayer::initWithConfiguration(std::string p1, std::string p2, cocos2d::CCSize * p3, cocos2d::CCPoint * p4, bool p5)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

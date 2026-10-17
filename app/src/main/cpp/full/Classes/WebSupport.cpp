#include "WebSupport.h"
#include "CampaignData.h"
#include "UIManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079eb54(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006cfac4;
extern "C" unsigned long UNK_006cfac8;
extern "C" unsigned long UNK_006cfb0c;
extern "C" unsigned long UNK_006cfb34;
extern "C" unsigned long UNK_006cfb6a;
extern "C" unsigned long UNK_006cfb84;
extern "C" unsigned long UNK_006cfb86;
extern "C" unsigned long UNK_006cfbd0;
extern "C" unsigned long UNK_006cfbd2;
extern "C" unsigned long UNK_006cfbd4;
extern "C" unsigned long UNK_006cfbe4;
extern "C" unsigned long UNK_006cfcb2;
extern "C" unsigned long UNK_006cfcb4;
extern "C" unsigned long UNK_006cfcb6;
extern "C" unsigned long UNK_006cfcc2;
extern "C" unsigned long UNK_006cfd5a;
extern "C" unsigned long UNK_006cfd5c;
extern "C" unsigned long UNK_006cfd5e;
extern "C" unsigned long UNK_006cfdcc;
extern "C" unsigned long UNK_006cfdce;
extern "C" unsigned long UNK_006cfdd0;
extern "C" unsigned long UNK_006cfe3c;
extern "C" unsigned long UNK_006cfe3e;
extern "C" unsigned long UNK_006cfe40;
extern "C" unsigned long UNK_006cfea8;
extern "C" unsigned long UNK_006cfeaa;
extern "C" unsigned long UNK_006cfeac;
extern "C" unsigned long UNK_006cff1c;
extern "C" unsigned long UNK_006cff1e;
extern "C" unsigned long UNK_006cff20;
extern "C" unsigned long UNK_006cfffa;
extern "C" unsigned long UNK_006d0004;
extern "C" unsigned long UNK_006d0014;
extern "C" unsigned long UNK_006d0022;
extern "C" unsigned long UNK_006d0024;
extern "C" unsigned long UNK_006d0052;
extern "C" unsigned long UNK_006d006a;
extern "C" unsigned long UNK_006d0076;
extern "C" unsigned long UNK_006d0082;
extern "C" unsigned long UNK_006d00a8;
extern "C" unsigned long _UNK_006cfaf8;
extern "C" unsigned long _UNK_006cfafc;
extern "C" unsigned long _UNK_006cfb10;
extern "C" unsigned long _UNK_006cfb38;
extern "C" unsigned long _UNK_006cfba8;
extern "C" unsigned long _UNK_006cfbac;
extern "C" unsigned long _UNK_006cfbb0;
extern "C" unsigned long _UNK_006cfc8c;
extern "C" unsigned long _UNK_006cfc90;
extern "C" unsigned long _UNK_006cfc94;
extern "C" unsigned long _UNK_006cfc98;
extern "C" unsigned long _UNK_006cfd34;
extern "C" unsigned long _UNK_006cfd38;
extern "C" unsigned long _UNK_006cfd3c;
extern "C" unsigned long _UNK_006cfd40;
extern "C" unsigned long _UNK_006cfda8;
extern "C" unsigned long _UNK_006cfdac;
extern "C" unsigned long _UNK_006cfdb0;
extern "C" unsigned long _UNK_006cfe18;
extern "C" unsigned long _UNK_006cfe1c;
extern "C" unsigned long _UNK_006cfe20;
extern "C" unsigned long _UNK_006cfe88;
extern "C" unsigned long _UNK_006cfe8c;
extern "C" unsigned long _UNK_006cfe90;
extern "C" unsigned long _UNK_006cfefc;
extern "C" unsigned long _UNK_006cff00;
extern "C" unsigned long _UNK_006cff04;
extern "C" unsigned long _UNK_006cff68;
extern "C" unsigned long _UNK_006cff6c;
extern "C" unsigned long _UNK_006cff70;
extern "C" unsigned long _UNK_006d00c8;
extern "C" unsigned long _UNK_006d00cc;
extern "C" unsigned long _UNK_006d00d0;
extern "C" unsigned long _UNK_006d00d4;
extern "C" unsigned long _UNK_006d00d8;
extern "C" unsigned long _UNK_006d00dc;
extern "C" unsigned long _UNK_006d00e0;
extern "C" unsigned long _UNK_006d00e4;
extern "C" unsigned long _UNK_006d00e8;
extern "C" unsigned long _UNK_006d00ec;
extern "C" unsigned long g_006cfac4;
extern "C" unsigned long g_006cfac8;
extern "C" unsigned long g_006cfaf8;
extern "C" unsigned long g_006cfafc;
extern "C" unsigned long g_006cfb0c;
extern "C" unsigned long g_006cfb10;
extern "C" unsigned long g_006cfb34;
extern "C" unsigned long g_006cfb38;
extern "C" unsigned long g_006cfb6a;
extern "C" unsigned long g_006cfb84;
extern "C" unsigned long g_006cfb86;
extern "C" unsigned long g_006cfba8;
extern "C" unsigned long g_006cfbac;
extern "C" unsigned long g_006cfbb0;
extern "C" unsigned long g_006cfbd0;
extern "C" unsigned long g_006cfbd2;
extern "C" unsigned long g_006cfbd4;
extern "C" unsigned long g_006cfbe4;
extern "C" unsigned long g_006cfc8c;
extern "C" unsigned long g_006cfc90;
extern "C" unsigned long g_006cfc94;
extern "C" unsigned long g_006cfc98;
extern "C" unsigned long g_006cfcb2;
extern "C" unsigned long g_006cfcb4;
extern "C" unsigned long g_006cfcb6;
extern "C" unsigned long g_006cfcc2;
extern "C" unsigned long g_006cfd34;
extern "C" unsigned long g_006cfd38;
extern "C" unsigned long g_006cfd3c;
extern "C" unsigned long g_006cfd40;
extern "C" unsigned long g_006cfd5a;
extern "C" unsigned long g_006cfd5c;
extern "C" unsigned long g_006cfd5e;
extern "C" unsigned long g_006cfda8;
extern "C" unsigned long g_006cfdac;
extern "C" unsigned long g_006cfdb0;
extern "C" unsigned long g_006cfdcc;
extern "C" unsigned long g_006cfdce;
extern "C" unsigned long g_006cfdd0;
extern "C" unsigned long g_006cfe18;
extern "C" unsigned long g_006cfe1c;
extern "C" unsigned long g_006cfe20;
extern "C" unsigned long g_006cfe3c;
extern "C" unsigned long g_006cfe3e;
extern "C" unsigned long g_006cfe40;
extern "C" unsigned long g_006cfe88;
extern "C" unsigned long g_006cfe8c;
extern "C" unsigned long g_006cfe90;
extern "C" unsigned long g_006cfea8;
extern "C" unsigned long g_006cfeaa;
extern "C" unsigned long g_006cfeac;
extern "C" unsigned long g_006cfefc;
extern "C" unsigned long g_006cff00;
extern "C" unsigned long g_006cff04;
extern "C" unsigned long g_006cff1c;
extern "C" unsigned long g_006cff1e;
extern "C" unsigned long g_006cff20;
extern "C" unsigned long g_006cff68;
extern "C" unsigned long g_006cff6c;
extern "C" unsigned long g_006cff70;
extern "C" unsigned long g_006cfffa;
extern "C" unsigned long g_006d0004;
extern "C" unsigned long g_006d0014;
extern "C" unsigned long g_006d0022;
extern "C" unsigned long g_006d0024;
extern "C" unsigned long g_006d0052;
extern "C" unsigned long g_006d006a;
extern "C" unsigned long g_006d0076;
extern "C" unsigned long g_006d0082;
extern "C" unsigned long g_006d00a8;
extern "C" unsigned long g_006d00c8;
extern "C" unsigned long g_006d00cc;
extern "C" unsigned long g_006d00d0;
extern "C" unsigned long g_006d00d4;
extern "C" unsigned long g_006d00d8;
extern "C" unsigned long g_006d00dc;
extern "C" unsigned long g_006d00e0;
extern "C" unsigned long g_006d00e4;
extern "C" unsigned long g_006d00e8;
extern "C" unsigned long g_006d00ec;
WebSupport::~WebSupport()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(&g_006cfac4 + g_006cfaf8);
  puVar3 = *(undefined4 **)(&g_006cfac8 + g_006cfafc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x28;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  *puVar3 = 0;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}





void WebSupport::setWHAndPosition(float p1, float p2, float p3, float p4, std::string const& p5)
{
  return;
}


void WebSupport::stopActivityAction(std::string const& p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
WebSupport::WebSupport()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::initWebViewParam(float p1, float p2, float p3, float p4, std::string const& p5, int p6, std::string const& p7)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::openURL(std::string const& p1, std::string const& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::setWebViewVisible(int p1, std::string const& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::onCloseWebView(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::onBackbuttonClick(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool WebSupport::canGoBackWeb(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void WebSupport::ReloadWeb(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void WebSupport::OnshouldOverrideUrlLoading(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

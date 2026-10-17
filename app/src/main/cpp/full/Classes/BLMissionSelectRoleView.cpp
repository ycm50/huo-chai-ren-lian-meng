#include "BLMissionSelectRoleView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionSelectRolePresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005c23e8(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c1260;
extern "C" unsigned long UNK_005c12b2;
extern "C" unsigned long UNK_005c12f8;
extern "C" unsigned long UNK_005c1320;
extern "C" unsigned long UNK_005c150e;
extern "C" unsigned long UNK_005c15f0;
extern "C" unsigned long UNK_005c16a6;
extern "C" unsigned long UNK_005c16d2;
extern "C" unsigned long UNK_005c17ba;
extern "C" unsigned long UNK_005c17e8;
extern "C" unsigned long UNK_005c19de;
extern "C" unsigned long UNK_005c1ad0;
extern "C" unsigned long UNK_005c1b2a;
extern "C" unsigned long UNK_005c1bf0;
extern "C" unsigned long UNK_005c1c22;
extern "C" unsigned long UNK_005c1cf4;
extern "C" unsigned long UNK_005c1d1e;
extern "C" unsigned long UNK_005c1de4;
extern "C" unsigned long UNK_005c1e12;
extern "C" unsigned long UNK_005c1ee4;
extern "C" unsigned long UNK_005c1f60;
extern "C" unsigned long UNK_005c2026;
extern "C" unsigned long UNK_005c2054;
extern "C" unsigned long UNK_005c2126;
extern "C" unsigned long UNK_005c2150;
extern "C" unsigned long UNK_005c2210;
extern "C" unsigned long UNK_005c223a;
extern "C" unsigned long _DAT_005c13d8;
extern "C" unsigned long _DAT_005c13dc;
extern "C" unsigned long _UNK_005c12e4;
extern "C" unsigned long _UNK_005c12e8;
extern "C" unsigned long _UNK_005c12fc;
extern "C" unsigned long _UNK_005c1324;
extern "C" unsigned long _UNK_005c18f0;
extern "C" unsigned long _UNK_005c18f4;
extern "C" unsigned long _UNK_005c18f8;
extern "C" unsigned long _UNK_005c18fc;
extern "C" unsigned long _UNK_005c1900;
extern "C" unsigned long _UNK_005c1904;
extern "C" unsigned long _UNK_005c1908;
extern "C" unsigned long _UNK_005c190c;
extern "C" unsigned long _UNK_005c1910;
extern "C" unsigned long _UNK_005c1914;
extern "C" unsigned long _UNK_005c1918;
extern "C" unsigned long _UNK_005c191c;
extern "C" unsigned long _UNK_005c1920;
extern "C" unsigned long _UNK_005c1924;
extern "C" unsigned long _UNK_005c1928;
extern "C" unsigned long _UNK_005c192c;
extern "C" unsigned long _UNK_005c1ae8;
extern "C" unsigned long _UNK_005c1aec;
extern "C" unsigned long _UNK_005c1af0;
extern "C" unsigned long _UNK_005c1af4;
extern "C" unsigned long _UNK_005c1af8;
extern "C" unsigned long _UNK_005c1afc;
extern "C" unsigned long _UNK_005c1b00;
extern "C" unsigned long _UNK_005c1b04;
extern "C" unsigned long _UNK_005c1b08;
extern "C" unsigned long _UNK_005c1f00;
extern "C" unsigned long _UNK_005c1f04;
extern "C" unsigned long _UNK_005c1f08;
extern "C" unsigned long _UNK_005c1f0c;
extern "C" unsigned long _UNK_005c1f10;
extern "C" unsigned long _UNK_005c1f14;
extern "C" unsigned long _UNK_005c1f18;
extern "C" unsigned long _UNK_005c1f1c;
extern "C" unsigned long _UNK_005c1f20;
extern "C" unsigned long _UNK_005c1f24;
extern "C" unsigned long _UNK_005c1f28;
extern "C" unsigned long _UNK_005c1f2c;
extern "C" unsigned long _UNK_005c1f30;
extern "C" unsigned long _UNK_005c1f34;
extern "C" unsigned long _UNK_005c1f38;
extern "C" unsigned long _UNK_005c1f3c;
extern "C" unsigned long _UNK_005c1f40;
extern "C" unsigned long _UNK_005c1f44;
extern "C" unsigned long _UNK_005c1f48;
extern "C" unsigned long _UNK_005c1f4c;
extern "C" unsigned long _UNK_005c233c;
extern "C" unsigned long _UNK_005c2340;
extern "C" unsigned long _UNK_005c2344;
extern "C" unsigned long _UNK_005c2348;
extern "C" unsigned long _UNK_005c234c;
extern "C" unsigned long _UNK_005c2350;
extern "C" unsigned long _UNK_005c2354;
extern "C" unsigned long _UNK_005c2358;
extern "C" unsigned long _UNK_005c235c;
extern "C" unsigned long _UNK_005c2360;
extern "C" unsigned long _UNK_005c2364;
extern "C" unsigned long _UNK_005c2368;
extern "C" unsigned long _UNK_005c236c;
extern "C" unsigned long _UNK_005c2370;
extern "C" unsigned long _UNK_005c2374;
extern "C" unsigned long _UNK_005c2378;
extern "C" unsigned long g_005c1260;
extern "C" unsigned long g_005c12b2;
extern "C" unsigned long g_005c12e4;
extern "C" unsigned long g_005c12e8;
extern "C" unsigned long g_005c12f8;
extern "C" unsigned long g_005c12fc;
extern "C" unsigned long g_005c1320;
extern "C" unsigned long g_005c1324;
extern "C" unsigned long g_005c13d8;
extern "C" unsigned long g_005c13dc;
extern "C" unsigned long g_005c150e;
extern "C" unsigned long g_005c15f0;
extern "C" unsigned long g_005c16a6;
extern "C" unsigned long g_005c16d2;
extern "C" unsigned long g_005c17ba;
extern "C" unsigned long g_005c17e8;
extern "C" unsigned long g_005c18f0;
extern "C" unsigned long g_005c18f4;
extern "C" unsigned long g_005c18f8;
extern "C" unsigned long g_005c18fc;
extern "C" unsigned long g_005c1900;
extern "C" unsigned long g_005c1904;
extern "C" unsigned long g_005c1908;
extern "C" unsigned long g_005c190c;
extern "C" unsigned long g_005c1910;
extern "C" unsigned long g_005c1914;
extern "C" unsigned long g_005c1918;
extern "C" unsigned long g_005c191c;
extern "C" unsigned long g_005c1920;
extern "C" unsigned long g_005c1924;
extern "C" unsigned long g_005c1928;
extern "C" unsigned long g_005c192c;
extern "C" unsigned long g_005c19de;
extern "C" unsigned long g_005c1ad0;
extern "C" unsigned long g_005c1ae8;
extern "C" unsigned long g_005c1aec;
extern "C" unsigned long g_005c1af0;
extern "C" unsigned long g_005c1af4;
extern "C" unsigned long g_005c1af8;
extern "C" unsigned long g_005c1afc;
extern "C" unsigned long g_005c1b00;
extern "C" unsigned long g_005c1b04;
extern "C" unsigned long g_005c1b08;
extern "C" unsigned long g_005c1b2a;
extern "C" unsigned long g_005c1bf0;
extern "C" unsigned long g_005c1c22;
extern "C" unsigned long g_005c1cf4;
extern "C" unsigned long g_005c1d1e;
extern "C" unsigned long g_005c1de4;
extern "C" unsigned long g_005c1e12;
extern "C" unsigned long g_005c1ee4;
extern "C" unsigned long g_005c1f00;
extern "C" unsigned long g_005c1f04;
extern "C" unsigned long g_005c1f08;
extern "C" unsigned long g_005c1f0c;
extern "C" unsigned long g_005c1f10;
extern "C" unsigned long g_005c1f14;
extern "C" unsigned long g_005c1f18;
extern "C" unsigned long g_005c1f1c;
extern "C" unsigned long g_005c1f20;
extern "C" unsigned long g_005c1f24;
extern "C" unsigned long g_005c1f28;
extern "C" unsigned long g_005c1f2c;
extern "C" unsigned long g_005c1f30;
extern "C" unsigned long g_005c1f34;
extern "C" unsigned long g_005c1f38;
extern "C" unsigned long g_005c1f3c;
extern "C" unsigned long g_005c1f40;
extern "C" unsigned long g_005c1f44;
extern "C" unsigned long g_005c1f48;
extern "C" unsigned long g_005c1f4c;
extern "C" unsigned long g_005c1f60;
extern "C" unsigned long g_005c2026;
extern "C" unsigned long g_005c2054;
extern "C" unsigned long g_005c2126;
extern "C" unsigned long g_005c2150;
extern "C" unsigned long g_005c2210;
extern "C" unsigned long g_005c223a;
extern "C" unsigned long g_005c233c;
extern "C" unsigned long g_005c2340;
extern "C" unsigned long g_005c2344;
extern "C" unsigned long g_005c2348;
extern "C" unsigned long g_005c234c;
extern "C" unsigned long g_005c2350;
extern "C" unsigned long g_005c2354;
extern "C" unsigned long g_005c2358;
extern "C" unsigned long g_005c235c;
extern "C" unsigned long g_005c2360;
extern "C" unsigned long g_005c2364;
extern "C" unsigned long g_005c2368;
extern "C" unsigned long g_005c236c;
extern "C" unsigned long g_005c2370;
extern "C" unsigned long g_005c2374;
extern "C" unsigned long g_005c2378;
BLMissionSelectRoleView::~BLMissionSelectRoleView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMissionSelectRoleView::BLMissionSelectRoleView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLMissionSelectRoleView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

undefined4 BLMissionSelectRoleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMissionSelectRoleView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMissionSelectRoleView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMissionSelectRoleView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMissionSelectRoleView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMissionSelectRoleView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMissionSelectRoleView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMissionSelectRoleView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMissionSelectRoleView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMissionSelectRoleView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMissionSelectRoleView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMissionSelectRoleView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLMissionSelectRoleView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLMissionSelectRoleView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLMissionSelectRoleView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void BLMissionSelectRoleView::onEnter()
{
  ((BLMissionSelectRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionSelectRoleView::onExit()
{
  ((BLMissionSelectRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionSelectRoleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "GuideStep.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_0045acec;
extern "C" unsigned long g_0045acec;
int GuideStep::getCode() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void GuideStep::setCode(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int GuideStep::getDisplayType() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void GuideStep::setDisplayType(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

cocos2d::CCArray* GuideStep::getDisplayValue() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1c));
}

void GuideStep::setDisplayValue(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

int GuideStep::getClickType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void GuideStep::setClickType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int GuideStep::getBtnID() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void GuideStep::setBtnID(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

int GuideStep::getArrowType() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void GuideStep::setArrowType(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int GuideStep::getDecType() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void GuideStep::setDecType(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

int GuideStep::getStepEndType() const
{
  return *(undefined4 *)(((int)this) + 0x50);
}

void GuideStep::setStepEndType(int p1)
{
  *(undefined4 *)(((int)this) + 0x50) = p1;
  return;
}

int GuideStep::getStepEndValue() const
{
  return *(undefined4 *)(((int)this) + 0x54);
}

void GuideStep::setStepEndValue(int p1)
{
  *(undefined4 *)(((int)this) + 0x54) = p1;
  return;
}

int GuideStep::getActionType() const
{
  return *(undefined4 *)(((int)this) + 0x58);
}

void GuideStep::setActionType(int p1)
{
  *(undefined4 *)(((int)this) + 0x58) = p1;
  return;
}

bool GuideStep::getISCareer() const
{
  return *(undefined1 *)(((int)this) + 0x5c);
}

void GuideStep::setISCareer(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5c) = p1;
  return;
}

bool GuideStep::getISBigBG() const
{
  return *(undefined1 *)(((int)this) + 0x5d);
}

void GuideStep::setISBigBG(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5d) = p1;
  return;
}

bool GuideStep::getISSmallBG() const
{
  return *(undefined1 *)(((int)this) + 0x5e);
}

void GuideStep::setISSmallBG(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5e) = p1;
  return;
}

void GuideStep::setDecPanel(std::string p1)
{
  func_0079e52c(((int)this) + 0x4c);
  return;
}

void GuideStep::setDec(std::string p1)
{
  func_0079e52c(((int)this) + 0x48);
  return;
}

GuideStep::~GuideStep()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  func_0079e2bc(((int)this) + 0x13);
  func_0079e2bc(((int)this) + 0x12);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string GuideStep::getDecPanel() const
{ return *(std::string *)(((int)this) + 0x4c); }

std::string GuideStep::getDec() const
{ return *(std::string *)(((int)this) + 0x48); }


cocos2d::CCPoint GuideStep::getDecPositon() const
{ return cocos2d::CCPoint(); }


cocos2d::CCRect GuideStep::getTouch() const
{ return cocos2d::CCRect(); }

// ===== 修复: 补回被误删的函数占位 (3) =====
void GuideStep::setDecPositon(cocos2d::CCPoint p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideStep::setTouch(cocos2d::CCRect p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideStep::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

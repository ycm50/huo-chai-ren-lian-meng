#include "BLListButton.h"
#include "CCLayer.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0051fb80(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" unsigned long UNK_0051fae8;
extern "C" unsigned long UNK_0051fb00;
extern "C" unsigned long UNK_0051fb18;
extern "C" unsigned long UNK_0051fb30;
extern "C" unsigned long UNK_0051fd1c;
extern "C" unsigned long UNK_0051fd1e;
extern "C" unsigned long UNK_0051fe16;
extern "C" unsigned long UNK_00520028;
extern "C" unsigned long UNK_0052008e;
extern "C" unsigned long UNK_00520130;
extern "C" unsigned long UNK_00520158;
extern "C" unsigned long UNK_00520172;
extern "C" unsigned long UNK_0052025a;
extern "C" unsigned long UNK_00520496;
extern "C" unsigned long UNK_005204e2;
extern "C" unsigned long UNK_0052055a;
extern "C" unsigned long UNK_0052055c;
extern "C" unsigned long UNK_00520572;
extern "C" unsigned long UNK_00520656;
extern "C" unsigned long UNK_0052086d;
extern "C" unsigned long _UNK_0051faec;
extern "C" unsigned long _UNK_0051fb04;
extern "C" unsigned long _UNK_0051fb1c;
extern "C" unsigned long _UNK_0051fb34;
extern "C" unsigned long _UNK_0051fe00;
extern "C" unsigned long _UNK_0051fe04;
extern "C" unsigned long _UNK_0051fe08;
extern "C" unsigned long _UNK_0051ffa0;
extern "C" unsigned long _UNK_0051ffa4;
extern "C" unsigned long _UNK_0051ffa8;
extern "C" unsigned long _UNK_0051ffac;
extern "C" unsigned long _UNK_00520008;
extern "C" unsigned long _UNK_0052011c;
extern "C" unsigned long _UNK_00520120;
extern "C" unsigned long _UNK_00520134;
extern "C" unsigned long _UNK_0052015c;
extern "C" unsigned long _UNK_005202b8;
extern "C" unsigned long _UNK_005202bc;
extern "C" unsigned long _UNK_005206c8;
extern "C" unsigned long _UNK_005206cc;
extern "C" unsigned long _UNK_005206d0;
extern "C" unsigned long _UNK_005206d4;
extern "C" unsigned long _UNK_005206d8;
extern "C" unsigned long _UNK_005206dc;
extern "C" unsigned long _UNK_005206e0;
extern "C" unsigned long _UNK_00520874;
extern "C" unsigned long _UNK_00520878;
extern "C" unsigned long g_0051fae8;
extern "C" unsigned long g_0051faec;
extern "C" unsigned long g_0051fb00;
extern "C" unsigned long g_0051fb04;
extern "C" unsigned long g_0051fb18;
extern "C" unsigned long g_0051fb1c;
extern "C" unsigned long g_0051fb30;
extern "C" unsigned long g_0051fb34;
extern "C" unsigned long g_0051fd1c;
extern "C" unsigned long g_0051fd1e;
extern "C" unsigned long g_0051fe00;
extern "C" unsigned long g_0051fe04;
extern "C" unsigned long g_0051fe08;
extern "C" unsigned long g_0051fe16;
extern "C" unsigned long g_0051ffa0;
extern "C" unsigned long g_0051ffa4;
extern "C" unsigned long g_0051ffa8;
extern "C" unsigned long g_0051ffac;
extern "C" unsigned long g_00520008;
extern "C" unsigned long g_00520028;
extern "C" unsigned long g_0052008e;
extern "C" unsigned long g_0052011c;
extern "C" unsigned long g_00520120;
extern "C" unsigned long g_00520130;
extern "C" unsigned long g_00520134;
extern "C" unsigned long g_00520158;
extern "C" unsigned long g_0052015c;
extern "C" unsigned long g_00520172;
extern "C" unsigned long g_0052025a;
extern "C" unsigned long g_005202b8;
extern "C" unsigned long g_005202bc;
extern "C" unsigned long g_00520496;
extern "C" unsigned long g_005204e2;
extern "C" unsigned long g_0052055a;
extern "C" unsigned long g_0052055c;
extern "C" unsigned long g_00520572;
extern "C" unsigned long g_00520656;
extern "C" unsigned long g_005206c8;
extern "C" unsigned long g_005206cc;
extern "C" unsigned long g_005206d0;
extern "C" unsigned long g_005206d4;
extern "C" unsigned long g_005206d8;
extern "C" unsigned long g_005206dc;
extern "C" unsigned long g_005206e0;
extern "C" unsigned long g_0052086d;
extern "C" unsigned long g_00520874;
extern "C" unsigned long g_00520878;
int BLListButton::getListType() const
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLListButton::setListType(int p1)
{
  *(undefined4 *)(((int)this) + 0x108) = p1;
  return;
}

float BLListButton::getDistance() const
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLListButton::setDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = p1;
  return;
}

int BLListButton::getFontSize() const
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLListButton::setFontSize(int p1)
{
  *(undefined4 *)(((int)this) + 0x110) = p1;
  return;
}





bool BLListButton::getISStroke() const
{
  return *(undefined1 *)(((int)this) + 0x11a);
}

void BLListButton::setISStroke(bool p1)
{
  *(undefined1 *)(((int)this) + 0x11a) = p1;
  return;
}

int BLListButton::getBtnTouchPriority() const
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLListButton::setBtnTouchPriority(int p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = p1;
  return;
}

BLListButtonDelegate* BLListButton::getDelegate() const
{
  return (BLListButtonDelegate*)(*(undefined4 *)(((int)this) + 0x144));
}

void BLListButton::setDelegate(BLListButtonDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x144) = (undefined4)(intptr_t)p1;
  return;
}

bool BLListButton::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 0;
}

void BLListButton::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLListButton::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLListButton::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}




int BLListButton::getArrayContentSize() const
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p2 + 0x124) - *(int *)(p2 + 0x120);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = 0;
  if (iVar2 >> 3 != 0) {
    if (g_00520008 < (uint)(iVar2 >> 3)) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar2)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar2;
  iVar1 = func_0051fb80(*(undefined4 *)(p2 + 0x120),*(undefined4 *)(p2 + 0x124));
  *(int *)((int)this + 4*(1)) = iVar1;
  return ((int)this);
}

BLListButton::~BLListButton()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00520028 + (intptr_t)(g_0052011c))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x260;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x290;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x29c;
  if (*(int *)((int)this + 4*(0x5e)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x5e)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0052008e + (intptr_t)(g_00520120)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x5b)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x58)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x55)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x52)->~vector();
  ((std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> *)((int)this) + 0x4e)->~vector();
  ((std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> *)((int)this) + 0x4b)->~vector();
  ((std::vector<cocos2d::CCSize, std::allocator<cocos2d::CCSize>> *)((int)this) + 0x48)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLListButton::BLListButton()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00520172 + (intptr_t)(g_005202b8))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x260;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x290;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x29c;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x4e)) = 0;
  *(int *)((int)this + 4*(0x4f)) = 0;
  *(int *)((int)this + 4*(0x50)) = 0;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  *(int *)((int)this + 4*(0x54)) = 0;
  *(int *)((int)this + 4*(0x55)) = 0;
  *(int *)((int)this + 4*(0x56)) = 0;
  *(int *)((int)this + 4*(0x57)) = 0;
  *(int *)((int)this + 4*(0x58)) = 0;
  *(int *)((int)this + 4*(0x59)) = 0;
  *(int *)((int)this + 4*(0x5a)) = 0;
  *(int *)((int)this + 4*(0x5b)) = 0;
  *(int *)((int)this + 4*(0x5c)) = 0;
  *(int *)((int)this + 4*(0x5d)) = 0;
  *(int *)((int)this + 4*(0x42)) = 1;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x51)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x5e)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x5f)) = 0;
  *(undefined1 *)((int)((int)this) + 0x11a) = 0;
  *(undefined1 *)(((int)this) + 0x45) = 0xff;
  *(undefined1 *)((int)((int)this) + 0x115) = 0xff;
  *(undefined1 *)((int)((int)this) + 0x116) = 0xff;
  *(undefined1 *)((int)((int)this) + 0x117) = 0xff;
  *(undefined1 *)(((int)this) + 0x46) = 0xff;
  *(undefined1 *)((int)((int)this) + 0x119) = 0xff;
  *(int *)((int)this + 4*(0x60)) = -1;
  *(int *)((int)this + 4*(0x47)) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0052025a + (intptr_t)(g_005202bc)),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}







void BLListButton::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLListButton::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
cocos2d::_ccColor3B BLListButton::getNormalColor() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return {};
}

void BLListButton::setNormalColor(cocos2d::_ccColor3B * p1)
{
  undefined1 uStack_2;
  
  *(short *)(((int)this) + 0x114) = (short) (undefined4)(intptr_t)p1;
  uStack_2 = (undefined4)(intptr_t)((undefined1)((uint)p1 >> 0x10));
  *(undefined1 *)(((int)this) + 0x116) = uStack_2;
  return;
}

cocos2d::_ccColor3B BLListButton::getSelectColor() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return {};
}

void BLListButton::setSelectColor(cocos2d::_ccColor3B * p1)
{
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  *(char *)(((int)this) + 0x117) = (char) (undefined4)(intptr_t)p1;
  uStack_3 = (undefined4)(intptr_t)((undefined1)((uint)p1 >> 8));
  uStack_2 = (undefined4)(intptr_t)((undefined1)((uint)p1 >> 0x10));
  *(undefined1 *)(((int)this) + 0x118) = uStack_3;
  *(undefined1 *)(((int)this) + 0x119) = uStack_2;
  return;
}

void BLListButton::setArrayContentSize(std::vector<cocos2d::CCSize, std::allocator<cocos2d::CCSize>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLListButton::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLListButton::setSelectIndex(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLListButton::initWith(std::vector<std::string, std::allocator<std::string>> * p1, std::vector<std::string, std::allocator<std::string>> p2, std::vector<std::string, std::allocator<std::string>> p3, std::vector<std::string, std::allocator<std::string>> p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLListButton::getArraySelectColors() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLListButton::getArrayNormalColors() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLListButton::setArraySelectColors(std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLListButton::setArrayNormalColors(std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLListButton::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

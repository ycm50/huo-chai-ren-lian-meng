#include "InputBox.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCEditBox.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long UNK_006d0500;
extern "C" unsigned long UNK_006d052c;
extern "C" unsigned long UNK_006d0558;
extern "C" unsigned long UNK_006d05c4;
extern "C" unsigned long UNK_006d05d8;
extern "C" unsigned long UNK_006d05ec;
extern "C" unsigned long UNK_006d05f2;
extern "C" unsigned long UNK_006d0694;
extern "C" unsigned long UNK_006d06a8;
extern "C" unsigned long UNK_006d06d6;
extern "C" unsigned long UNK_006d070e;
extern "C" unsigned long UNK_006d078c;
extern "C" unsigned long UNK_006d079e;
extern "C" unsigned long UNK_006d07a8;
extern "C" unsigned long UNK_006d07b9;
extern "C" unsigned long UNK_006d07c6;
extern "C" unsigned long UNK_006d07f2;
extern "C" unsigned long UNK_006d0804;
extern "C" unsigned long UNK_006d0810;
extern "C" unsigned long UNK_006d0823;
extern "C" unsigned long UNK_006d082a;
extern "C" unsigned long UNK_006d0850;
extern "C" unsigned long UNK_006d0866;
extern "C" unsigned long UNK_006d08c4;
extern "C" unsigned long UNK_006d08d6;
extern "C" unsigned long UNK_006d08e6;
extern "C" unsigned long _UNK_006d0504;
extern "C" unsigned long _UNK_006d0530;
extern "C" unsigned long _UNK_006d055c;
extern "C" unsigned long _UNK_006d05c8;
extern "C" unsigned long _UNK_006d05dc;
extern "C" unsigned long _UNK_006d0680;
extern "C" unsigned long _UNK_006d0684;
extern "C" unsigned long _UNK_006d0698;
extern "C" unsigned long _UNK_006d06ac;
extern "C" unsigned long _UNK_006d0724;
extern "C" unsigned long _UNK_006d0728;
extern "C" unsigned long _UNK_006d07c8;
extern "C" unsigned long _UNK_006d07cc;
extern "C" unsigned long _UNK_006d07d0;
extern "C" unsigned long _UNK_006d07d4;
extern "C" unsigned long _UNK_006d07d8;
extern "C" unsigned long _UNK_006d0830;
extern "C" unsigned long _UNK_006d0834;
extern "C" unsigned long _UNK_006d0838;
extern "C" unsigned long _UNK_006d083c;
extern "C" unsigned long _UNK_006d0840;
extern "C" unsigned long _UNK_006d0854;
extern "C" unsigned long _UNK_006d0874;
extern "C" unsigned long _UNK_006d0940;
extern "C" unsigned long _UNK_006d0944;
extern "C" unsigned long _UNK_006d0948;
extern "C" unsigned long _UNK_006d094c;
extern "C" unsigned long _UNK_006d0950;
extern "C" unsigned long g_006d0500;
extern "C" unsigned long g_006d0504;
extern "C" unsigned long g_006d052c;
extern "C" unsigned long g_006d0530;
extern "C" unsigned long g_006d0558;
extern "C" unsigned long g_006d055c;
extern "C" unsigned long g_006d05c4;
extern "C" unsigned long g_006d05c8;
extern "C" unsigned long g_006d05d8;
extern "C" unsigned long g_006d05dc;
extern "C" unsigned long g_006d05ec;
extern "C" unsigned long g_006d05f2;
extern "C" unsigned long g_006d0680;
extern "C" unsigned long g_006d0684;
extern "C" unsigned long g_006d0694;
extern "C" unsigned long g_006d0698;
extern "C" unsigned long g_006d06a8;
extern "C" unsigned long g_006d06ac;
extern "C" unsigned long g_006d06d6;
extern "C" unsigned long g_006d070e;
extern "C" unsigned long g_006d0724;
extern "C" unsigned long g_006d0728;
extern "C" unsigned long g_006d078c;
extern "C" unsigned long g_006d079e;
extern "C" unsigned long g_006d07a8;
extern "C" unsigned long g_006d07b9;
extern "C" unsigned long g_006d07c6;
extern "C" unsigned long g_006d07c8;
extern "C" unsigned long g_006d07cc;
extern "C" unsigned long g_006d07d0;
extern "C" unsigned long g_006d07d4;
extern "C" unsigned long g_006d07d8;
extern "C" unsigned long g_006d07f2;
extern "C" unsigned long g_006d0804;
extern "C" unsigned long g_006d0810;
extern "C" unsigned long g_006d0823;
extern "C" unsigned long g_006d082a;
extern "C" unsigned long g_006d0830;
extern "C" unsigned long g_006d0834;
extern "C" unsigned long g_006d0838;
extern "C" unsigned long g_006d083c;
extern "C" unsigned long g_006d0840;
extern "C" unsigned long g_006d0850;
extern "C" unsigned long g_006d0854;
extern "C" unsigned long g_006d0866;
extern "C" unsigned long g_006d0874;
extern "C" unsigned long g_006d08c4;
extern "C" unsigned long g_006d08d6;
extern "C" unsigned long g_006d08e6;
extern "C" unsigned long g_006d0940;
extern "C" unsigned long g_006d0944;
extern "C" unsigned long g_006d0948;
extern "C" unsigned long g_006d094c;
extern "C" unsigned long g_006d0950;
int * InputBox::create()
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

void InputBox::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
                    /* WARNING: Could not recover jumptable at 0x006d0500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d0500 + g_006d0504))(((int)this) + -0x108);
  return;
}

void InputBox::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
                    /* WARNING: Could not recover jumptable at 0x006d052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d052c + g_006d0530))(((int)this) + -0x108);
  return;
}

void InputBox::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
                    /* WARNING: Could not recover jumptable at 0x006d0558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d0558 + g_006d055c))(((int)this) + -0x108);
  return;
}

void InputBox::onExit()
{
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    (**(code **)(*(int *)this + 0xf4))(((int)this),*(int *)((int)this + 4*(0x46)),1);
  }
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void InputBox::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

InputBox::~InputBox()
{
                    /* WARNING: Could not recover jumptable at 0x006d05c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d05c4 + g_006d05c8))(((int)this) + -0x108);
  return;
}

InputBox::InputBox()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006d06d6 + g_006d0724);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar1 + 0x264;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  iVar1 = *(int *)(&g_006d070e + g_006d0728) + 0xc;
  *(int *)((int)this + 4*(0x48)) = iVar1;
  *(int *)((int)this + 4*(0x49)) = iVar1;
  *(int *)((int)this + 4*(0x4a)) = iVar1;
  return;
}

undefined4 InputBox::JudgeNumId(char const* p1)
{
  byte bVar1;
  
  do {
    bVar1 = (int)*(int *)&(*p1);
    if (bVar1 == 0) {
      return 1;
    }
    p1 = p1 + 1;
  } while (bVar1 - 0x30 < 10);
  return 0;
}

undefined4 InputBox::GetInput()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((cocos2d::extension::CCEditBox *)*(undefined4 *)(((int)this) + 0x118))->getText());
  iVar2 = InputBox::JudgeNumId((char const*)uVar1);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(0xffffffff);
  }
  else {
    ((cocos2d::extension::CCEditBox *)*(undefined4 *)(((int)this) + 0x118))->getText();
    uVar1 = (undefined4)(func_0079e6c0());
  }
  return uVar1;
}

void InputBox::GetText()
{
  ((cocos2d::extension::CCEditBox *)*(undefined4 *)(((int)this) + 0x118))->getText();
  return;
}


void InputBox::IsContainSpeaicl()
{
  return;
}

void InputBox::setTextDelegate(InputBoxDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}


void InputBox::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
                    /* WARNING: Could not recover jumptable at 0x006d0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_006d0850 + g_006d0854))(((int)this) + -0x108);
  return;
}

void InputBox::SetMaxLength()
{
  return;
}

undefined4 InputBox::getEditBox()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void InputBox::SetMaxLength(int p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void InputBox::SetOriColor()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x124,(unsigned char *)((char *)&g_006d078c + (intptr_t)(g_006d07c8)),p3,0x124,p4));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
    puVar3 = (unsigned char *)((char *)&g_006d079e + (intptr_t)(g_006d07cc));
  }
  else {
    iVar1 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x124,(unsigned char *)((char *)&g_006d07a8 + (intptr_t)(g_006d07d0))));
    if (iVar1 == 0) {
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
      puVar3 = (unsigned char *)((char *)&g_006d07b9 + (intptr_t)(g_006d07d4));
    }
    else {
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
      puVar3 = (unsigned char *)((char *)&g_006d07c6 + (intptr_t)(g_006d07d8));
    }
  }
  ((cocos2d::extension::CCEditBox *)(uVar2))->setFontColor(*(const ccColor3B *)(void *)puVar3);
  return;
}

void InputBox::SetInputColor()
{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x128,(unsigned char *)((char *)&g_006d07f2 + (intptr_t)(g_006d0830))));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
    puVar3 = (unsigned char *)((char *)&g_006d0804 + (intptr_t)(g_006d0834));
  }
  else {
    iVar1 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x124,(unsigned char *)((char *)&g_006d0810 + (intptr_t)(g_006d0838))));
    if (iVar1 == 0) {
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
      puVar3 = (unsigned char *)((char *)&g_006d0823 + (intptr_t)(g_006d083c));
      goto code_r0x006d082a;
    }
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x118));
    puVar3 = (unsigned char *)((char *)&g_006d082a + (intptr_t)(g_006d0840));
  }
  puVar3 = puVar3 + 6;
code_r0x006d082a:
  ((cocos2d::extension::CCEditBox *)(uVar2))->setFontColor(*(const ccColor3B *)(void *)puVar3);
  return;
}

bool InputBox::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

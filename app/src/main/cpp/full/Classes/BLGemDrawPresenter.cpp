#include "BLGemDrawPresenter.h"
#include "UIManager.h"
#include "Toast.h"
#include "GemDrawItemList.h"
#include "BLGemDrawView.h"
#include "GemDrawData.h"
#include "BLLeakUtils.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" unsigned long g_0053d30a;
extern "C" unsigned long g_0053d31c;
extern "C" unsigned long g_0053d114;
extern "C" unsigned long g_0053d124;
extern "C" unsigned long g_0053cfac;
extern "C" unsigned long g_0053cfbc;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_0053cf0c;
extern "C" unsigned long g_0053cf5c;
extern "C" unsigned long g_0053cf2c;
extern "C" unsigned long g_0053cf60;
extern "C" long long func_0079e2fc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

bool BLGemDrawPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGemDrawPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGemDrawPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGemDrawPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGemDrawPresenter::onBlack(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLGemDrawPresenter::~BLGemDrawPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0053cf0c + (intptr_t)(g_0053cf5c))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x70;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0053cf2c + (intptr_t)(g_0053cf60)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGemDrawPresenter::onCloseView(GemDrawData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)(unsigned char *)((char *)&g_0053cfac + (intptr_t)(g_0053cfbc)));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xaa);
  return;
}

BLGemDrawPresenter::BLGemDrawPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLGemDrawPresenter::create(BLGemDrawView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGemDrawPresenter::onEnter()
{
  return;
}

void BLGemDrawPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLGemDrawPresenter::onCloseViewData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)(unsigned char *)((char *)&g_0053d114 + (intptr_t)(g_0053d124)));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xaa);
  return;
}

void BLGemDrawPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<GemDrawData, 0> *)this)->instance());
  if ((*(char *)(iVar1 + 0x50) == '\0') && (*(char *)(((int)this) + 0x28) == '\0')) {
    0 /* ctorZero */;
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_0053d30a + (intptr_t)(g_0053d31c)));
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->removeUIByID(0xaa);
  }
  return;
}

void BLGemDrawPresenter::onNextVector()
{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  ((sir::singleton<GemDrawData, 0> *)this)->instance();
  ((GemDrawData *)this)->ChangeNextVector();
  return;
}

void BLGemDrawPresenter::onStartGemDraw()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawPresenter::onStart(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawPresenter::onGetInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLGemDrawPresenter::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGemDrawPresenter::onUpdateMainView(GemDrawItemList* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLGemDrawPresenter::initWithView(BLGemDrawView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGemDrawPresenter::onUpdateGemDraw()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawPresenter::onChangeStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawPresenter::onPage1(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawPresenter::onPage2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

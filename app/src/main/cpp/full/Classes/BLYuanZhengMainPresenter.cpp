#include "BLYuanZhengMainPresenter.h"
#include "BLFunctionIntroductionPresenter.h"
#include "CCString.h"
#include "Toast.h"
#include "UserData.h"
#include "DataManager.h"
#include "ZhancheData.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
using namespace cocos2d;
#include "BLForwards.h"
#include "CarHttpUtil.h"
#include "BLYuanZhengMainView.h"
#include "BLTableView.h"
#include "UIManager.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079ea84(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079ea34(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long g_006b5f04;
extern "C" unsigned long g_006b5f78;
extern "C" unsigned long g_006b5f7c;
extern "C" unsigned long g_006b5f4c;
extern "C" unsigned long g_006b5f84;
extern "C" unsigned long g_006b5f70;
extern "C" unsigned long g_006b5f74;
extern "C" unsigned long g_006b5f3e;
extern "C" unsigned long g_006b5f80;
extern "C" unsigned long g_006b5fa2;
extern "C" unsigned long g_006b6088;
extern "C" unsigned long g_006b5fa0;
extern "C" unsigned long g_006b6084;
extern "C" unsigned long g_006b5fe6;
extern "C" unsigned long g_006b608c;
extern "C" unsigned long g_006b5ffe;
extern "C" unsigned long g_006b6090;
extern "C" long long software_udf(...);

extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long g_006b5ad4;
extern "C" unsigned long g_006b5a4a;
extern "C" unsigned long g_006b5ad8;
extern "C" unsigned long g_006b5a4c;
extern "C" unsigned long g_006b5adc;
extern "C" unsigned long g_006b5a62;
extern "C" unsigned long g_006b5ae0;
extern "C" unsigned long g_006b5a64;
extern "C" unsigned long g_006b5ae4;
extern "C" unsigned long g_006b5a78;
extern "C" unsigned long g_006b5ae8;
extern "C" unsigned long g_006b5a96;
extern "C" unsigned long g_006b5aec;
extern "C" unsigned long g_006b7640;
extern "C" unsigned long g_006b7644;
extern "C" unsigned long g_006b75ee;
extern "C" unsigned long g_006b7648;
extern "C" unsigned long g_006b762c;
extern "C" unsigned long g_006b764c;
extern "C" long long ghidra_CONCAT44(...);

extern "C" long long func_0079e57c(...);
extern "C" unsigned long g_006b5980;
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_006b72d8;
extern "C" unsigned long g_006b72dc;
extern "C" unsigned long g_006b71ec;
extern "C" unsigned long g_006b71fc;
extern "C" unsigned long g_006b72e0;
extern "C" unsigned long g_006b72e4;
extern "C" unsigned long g_006b72e8;
template <class T, class... A> std::string ConvertToString(A...);
extern "C" unsigned long g_006b5c24;
extern "C" unsigned long g_006b5c30;
extern "C" unsigned long g_006b5a2c;
extern "C" unsigned long g_006b5a18;
extern "C" long long func_0079e2fc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

bool BLYuanZhengMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLYuanZhengMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLYuanZhengMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLYuanZhengMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLYuanZhengMainPresenter::onBuyChariotNumFinal()
{
  return;
}

void BLYuanZhengMainPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLYuanZhengMainPresenter::tick(float p1)
{
  return;
}

int BLYuanZhengMainPresenter::sizeOfCellItem(BLTableView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = (undefined4)((int *)((int)this));
  iStack_c = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(p1 + 0x20))->getTableView();
  (**(code **)(*(int *)(piVar1) + (0x230)))(&uStack_10,piVar1);
  uVar2 = (undefined4)(func_0079e57c(uStack_10,g_006b5980));
  0 /* ctorZero */;
  return ghidra_CONCAT44(uStack_10,((int)this));
}

undefined8 BLYuanZhengMainPresenter::updateDimandCount()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLYuanZhengMainPresenter::onZhanChePeiZhi(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006b5a18);
  return;
}

void BLYuanZhengMainPresenter::onRest(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006b5a2c);
  return;
}

int BLYuanZhengMainPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)(intptr_t)(((UIManager *)uVar2)->showUIById(g_006b5ad4));
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_006b5a4a + (intptr_t)(g_006b5ad8))),
                            *(undefined4 *)((unsigned char *)((char *)&g_006b5a4c + (intptr_t)(g_006b5adc))),0);
    iVar3 = 0;
    if (*(int *)(iVar4 + 0x24) != 0) {
      iVar3 = func_0079e55c(*(int *)(iVar4 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_006b5a62 + (intptr_t)(g_006b5ae0))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006b5a64 + (intptr_t)(g_006b5ae4))),0);
    }
    uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x108));
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_006b5a78 + (intptr_t)(g_006b5ae8)),&uStack_20);
    ((BLFunctionIntroductionPresenter *)uVar2)->updateTit((std::string *)(char *)uStack_1c);
    func_0079e2bc(&uStack_1c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006b5a96 + (intptr_t)(g_006b5aec)),&uStack_1c);
    uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x108));
    func_0079e53c(&uStack_1c,&uStack_20);
    ((BLFunctionIntroductionPresenter *)uVar2)->updateWithData((std::string *)(char *)uStack_1c);
    func_0079e2bc(&uStack_1c);
    func_0079e2bc(&uStack_20);
    return ghidra_CONCAT44(uStack_1c,uStack_20);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x6b5ad2);
  (*pcVar1)();
}

void BLYuanZhengMainPresenter::onSearch(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::onBuyChariotNum()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_006b5c24 + (intptr_t)(g_006b5c30)));
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->buyChariotNum();
  return;
}

bool BLYuanZhengMainPresenter::onAddCount(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLYuanZhengMainPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::onExit()
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

int BLYuanZhengMainPresenter::getLongZhanCheData(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLYuanZhengMainPresenter::getWanString(long long p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar1 = *(int **)((unsigned char *)((char *)&g_006b5f04 + (intptr_t)(g_006b5f78)));
  iStack_1c = (int)*(int *)&(*piVar1);
  func_0079e34c(auStack_30,0,0x14);
  if ((p4 < 1) && ((p4 != 0 || (p3 <= g_006b5f7c)))) {
    func_0079e904(auStack_30,(unsigned char *)((char *)&g_006b5f4c + (intptr_t)(g_006b5f84)),p3,p4);
  }
  else {
    uVar2 = (undefined4)(intptr_t)(func_0079ea34(p3,p4));
    uVar2 = (undefined4)(intptr_t)(func_0079e63c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),g_006b5f70,g_006b5f74));
    func_0079e904(auStack_30,(unsigned char *)((char *)&g_006b5f3e + (intptr_t)(g_006b5f80)),(int)uVar2,
                    (int)((ulonglong)uVar2 >> 0x20));
  }
  func_0079e45c(((int)this),auStack_30,auStack_34);
  if (iStack_1c != *piVar1) {
    func_0079e914(((int)this));
  }
  return;
}

void BLYuanZhengMainPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLYuanZhengMainPresenter::onZhanChe(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLYuanZhengMainPresenter::onUpdateTSDJ(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006b5fa2 + (intptr_t)(g_006b6088))),
                            *(undefined4 *)((unsigned char *)((char *)&g_006b5fa0 + (intptr_t)(g_006b6084))),0);
    if (iVar1 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x14));
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x1a0)))());
      iVar1 = (undefined4)(intptr_t)(iVar1 + (uint)(iVar4 == 1));
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006b5fe6 + (intptr_t)(g_006b608c)),auStack_2c);
      ConvertToString<int>(auStack_24, iVar1, 0);
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006b5ffe + (intptr_t)(g_006b6090)),auStack_28);
      ((UserData *)uVar3)->updateDataNew((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_24, (std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_24);
      func_0079e2bc(auStack_20);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      (**(code **)(*(int *)(piVar2) + (0x1a4)))(piVar2,iVar1);
      piVar2 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getLabelMonsterlevel();
      pcVar5 = *(code **)(*piVar2 + 0x234);
      ConvertToString<int>(auStack_1c, iVar1, 0);
      (*pcVar5)(piVar2,auStack_1c[0]);
      func_0079e2bc(auStack_1c);
    }
  }
  return;
}

BLYuanZhengMainPresenter::~BLYuanZhengMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLYuanZhengMainPresenter::BLYuanZhengMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLYuanZhengMainPresenter::create(BLYuanZhengMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x3c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

int BLYuanZhengMainPresenter::insertNewAnimation(std::string * p1, int p2, int p3, std::string * p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLYuanZhengMainPresenter::getAnimation(std::string * p1, int p2, int p3, std::string * p4)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x28);
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = (undefined4)(intptr_t)(func_0079ea84(iVar3 + 0x10,p1));
    if (iVar1 < 0) {
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0xc));
    }
    else {
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar3 + 8));
      iVar4 = (undefined4)(intptr_t)(iVar3);
    }
  }
  if ((iVar4 == ((int)this) + 0x28) || (iVar1 = func_0079ea84(p1,iVar4 + 0x10), iVar1 < 0)) {
    func_0079e53c(auStack_20,p1);
    func_0079e53c(auStack_1c,p4);
    uVar2 = (undefined4)(((BLYuanZhengMainPresenter *)(((int)this)))->insertNewAnimation((std::string *)(char *)auStack_20, p2, p3, (std::string *)(char *)auStack_1c));
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  else {
    uVar2 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
  }
  return;
}

void BLYuanZhengMainPresenter::initWithView(BLYuanZhengMainView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::onGetSearchZC()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::onGetFightResult()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iStack_20;
  undefined1 auStack_1c [8];
  
  piVar2 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar2 + 0x40))(&iStack_20,piVar2);
  iVar1 = (undefined4)(intptr_t)(iStack_20);
  func_0079e2bc(auStack_1c);
  if (iVar1 == 0) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    uVar4 = (undefined4)(g_006b72d8);
  }
  else {
    uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    piVar2 = (int *)((long long)::operator new((size_t)(0x18)));
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_006b72dc);
    piVar2[5] = 1;
    *piVar2 = *(int *)(&g_006b71ec + iVar1) + 8;
    ((cocos2d::CCObject *)piVar2)->autorelease();
    ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)(unsigned char *)((char *)&g_006b71fc + (intptr_t)(g_006b72e0)), (cocos2d::CCObject*)piVar2);
    piVar2 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
    (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    piVar2 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                              (*(int **)(((int)this) + 0x20),g_006b72e4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    uVar4 = (undefined4)(((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
    ((BLTableView *)uVar4)->reloadData(0, 1);
    piVar2 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
    uVar4 = (undefined4)((**(code **)(*piVar2 + 0x18))());
    piVar2 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getLabelRank();
    pcVar5 = *(code **)(*piVar2 + 0x234);
    ConvertToString<int>(&iStack_20, uVar4, 0);
    (*pcVar5)(piVar2,iStack_20);
    func_0079e2bc(&iStack_20);
    piVar2 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getSpsearchBg();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    piVar2 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getSpserach();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    piVar2 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getSpxijitbg();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    piVar2 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0x1f8))();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    (**(code **)(**(int **)(((int)this) + 0x20) + 0x1f8))();
    ((cocos2d::CCNode *)this)->stopAllActions();
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    uVar4 = (undefined4)(g_006b72e8);
  }
  ((UIManager *)uVar3)->showUIById(uVar4);
  return;
}

void BLYuanZhengMainPresenter::onFreash()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLYuanZhengMainPresenter::onBuyChariotNumSucceed()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)uVar2)->subVirNumber(2, g_006b7640, g_006b7644);
  uVar2 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar2)->showToast((char const*)(unsigned char *)((char *)&g_006b75ee + (intptr_t)(g_006b7648)));
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  pcVar5 = *(code **)(*piVar1 + 0xc);
  piVar3 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (8)))());
  (*pcVar5)(piVar1,iVar4 + 1);
  piVar1 = (int *)((BLYuanZhengMainView *)*(undefined4 *)(((int)this) + 0x20))->getLabelAddCounter();
  pcVar5 = *(code **)(*piVar1 + 0x234);
  piVar3 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (8)))());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b762c + (intptr_t)(g_006b764c)), uVar2);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar5)(piVar1,uVar2);
  return ghidra_CONCAT44(p2,1);
}

void BLYuanZhengMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x2c))(piVar1,0,extraout_r2,*(code **)(*piVar1 + 0x2c),in_r3);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x2a8);
  return;
}

void BLYuanZhengMainPresenter::onXiJi(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::toXiJi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLYuanZhengMainPresenter::toSearch()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLYuanZhengMainPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<ZhancheData, 0> *)this)->instance());
  return *(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x4c) >> 3;
}

int BLYuanZhengMainPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

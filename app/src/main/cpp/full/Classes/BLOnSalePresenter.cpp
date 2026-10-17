#include "BLOnSalePresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOnSaleItemPresenter.h"
#include "BLOnSaleItemView.h"
#include "BLOnSaleView.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "OnSaleData.h"
#include "OnSaleItem.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079eb44(...);
extern "C" unsigned long UNK_005e70a4;
extern "C" unsigned long UNK_005e7118;
extern "C" unsigned long UNK_005e711a;
extern "C" unsigned long UNK_005e715c;
extern "C" unsigned long UNK_005e71e4;
extern "C" unsigned long UNK_005e7224;
extern "C" unsigned long UNK_005e727e;
extern "C" unsigned long UNK_005e7372;
extern "C" unsigned long UNK_005e7373;
extern "C" unsigned long UNK_005e7374;
extern "C" unsigned long UNK_005e739a;
extern "C" unsigned long UNK_005e73cc;
extern "C" unsigned long UNK_005e747e;
extern "C" unsigned long UNK_005e756c;
extern "C" unsigned long UNK_005e7664;
extern "C" unsigned long UNK_005e769e;
extern "C" unsigned long UNK_005e76e0;
extern "C" unsigned long UNK_005e76e2;
extern "C" unsigned long UNK_005e76fa;
extern "C" unsigned long UNK_005e76fe;
extern "C" unsigned long UNK_005e7794;
extern "C" unsigned long UNK_005e77c6;
extern "C" unsigned long UNK_005e7848;
extern "C" unsigned long UNK_005e7870;
extern "C" unsigned long UNK_005e7994;
extern "C" unsigned long UNK_005e79f4;
extern "C" unsigned long UNK_005e79f8;
extern "C" unsigned long UNK_005e7c04;
extern "C" unsigned long UNK_005e7c9e;
extern "C" unsigned long UNK_005e7f72;
extern "C" unsigned long _UNK_005e70a8;
extern "C" unsigned long _UNK_005e7130;
extern "C" unsigned long _UNK_005e7134;
extern "C" unsigned long _UNK_005e7148;
extern "C" unsigned long _UNK_005e714c;
extern "C" unsigned long _UNK_005e7160;
extern "C" unsigned long _UNK_005e71f0;
extern "C" unsigned long _UNK_005e7228;
extern "C" unsigned long _UNK_005e75f8;
extern "C" unsigned long _UNK_005e75fc;
extern "C" unsigned long _UNK_005e7600;
extern "C" unsigned long _UNK_005e7604;
extern "C" unsigned long _UNK_005e7608;
extern "C" unsigned long _UNK_005e760c;
extern "C" unsigned long _UNK_005e7750;
extern "C" unsigned long _UNK_005e7754;
extern "C" unsigned long _UNK_005e7758;
extern "C" unsigned long _UNK_005e775c;
extern "C" unsigned long _UNK_005e7760;
extern "C" unsigned long _UNK_005e7764;
extern "C" unsigned long _UNK_005e7834;
extern "C" unsigned long _UNK_005e7838;
extern "C" unsigned long _UNK_005e784c;
extern "C" unsigned long _UNK_005e7874;
extern "C" unsigned long _UNK_005e7980;
extern "C" unsigned long _UNK_005e7984;
extern "C" unsigned long _UNK_005e7998;
extern "C" unsigned long _UNK_005e7b84;
extern "C" unsigned long _UNK_005e7b88;
extern "C" unsigned long _UNK_005e7b8c;
extern "C" unsigned long _UNK_005e7b90;
extern "C" unsigned long _UNK_005e7b94;
extern "C" unsigned long _UNK_005e7d4c;
extern "C" unsigned long _UNK_005e7d50;
extern "C" unsigned long _UNK_005e7d54;
extern "C" unsigned long _UNK_005e7d58;
extern "C" unsigned long _UNK_005e7d5c;
extern "C" unsigned long _UNK_005e8020;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005e70a4;
extern "C" unsigned long g_005e70a8;
extern "C" unsigned long g_005e7118;
extern "C" unsigned long g_005e711a;
extern "C" unsigned long g_005e7130;
extern "C" unsigned long g_005e7134;
extern "C" unsigned long g_005e7148;
extern "C" unsigned long g_005e714c;
extern "C" unsigned long g_005e715c;
extern "C" unsigned long g_005e7160;
extern "C" unsigned long g_005e71e4;
extern "C" unsigned long g_005e71f0;
extern "C" unsigned long g_005e7224;
extern "C" unsigned long g_005e7228;
extern "C" unsigned long g_005e727e;
extern "C" unsigned long g_005e7372;
extern "C" unsigned long g_005e7373;
extern "C" unsigned long g_005e7374;
extern "C" unsigned long g_005e739a;
extern "C" unsigned long g_005e73cc;
extern "C" unsigned long g_005e747e;
extern "C" unsigned long g_005e756c;
extern "C" unsigned long g_005e75f8;
extern "C" unsigned long g_005e75fc;
extern "C" unsigned long g_005e7600;
extern "C" unsigned long g_005e7604;
extern "C" unsigned long g_005e7608;
extern "C" unsigned long g_005e760c;
extern "C" unsigned long g_005e7664;
extern "C" unsigned long g_005e769e;
extern "C" unsigned long g_005e76e0;
extern "C" unsigned long g_005e76e2;
extern "C" unsigned long g_005e76fa;
extern "C" unsigned long g_005e76fe;
extern "C" unsigned long g_005e7750;
extern "C" unsigned long g_005e7754;
extern "C" unsigned long g_005e7758;
extern "C" unsigned long g_005e775c;
extern "C" unsigned long g_005e7760;
extern "C" unsigned long g_005e7764;
extern "C" unsigned long g_005e7794;
extern "C" unsigned long g_005e77c6;
extern "C" unsigned long g_005e7834;
extern "C" unsigned long g_005e7838;
extern "C" unsigned long g_005e7848;
extern "C" unsigned long g_005e784c;
extern "C" unsigned long g_005e7870;
extern "C" unsigned long g_005e7874;
extern "C" unsigned long g_005e7980;
extern "C" unsigned long g_005e7984;
extern "C" unsigned long g_005e7994;
extern "C" unsigned long g_005e7998;
extern "C" unsigned long g_005e79f4;
extern "C" unsigned long g_005e79f8;
extern "C" unsigned long g_005e7b84;
extern "C" unsigned long g_005e7b88;
extern "C" unsigned long g_005e7b8c;
extern "C" unsigned long g_005e7b90;
extern "C" unsigned long g_005e7b94;
extern "C" unsigned long g_005e7c04;
extern "C" unsigned long g_005e7c9e;
extern "C" unsigned long g_005e7d4c;
extern "C" unsigned long g_005e7d50;
extern "C" unsigned long g_005e7d54;
extern "C" unsigned long g_005e7d58;
extern "C" unsigned long g_005e7d5c;
extern "C" unsigned long g_005e7f72;
extern "C" unsigned long g_005e8020;
bool BLOnSalePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}


undefined4 BLOnSalePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLOnSalePresenter::onEnter()
{
  return;
}

void BLOnSalePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}


void BLOnSalePresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x44) != p2) {
    *(int *)(((int)this) + 0x44) = p2;
    *(undefined4 *)(((int)this) + 0x48) = 0;
    BLOnSalePresenter::setCurOnSaleType();
    uVar1 = (undefined4)(((BLOnSaleView *)*(undefined4 *)(((int)this) + 0x24))->getTableView());
    ((BLTableView *)uVar1)->reloadData(0, 1);
  }
  return;
}

void BLOnSalePresenter::tick(float p1)
{
  return;
}



undefined4 BLOnSalePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x4c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLOnSalePresenter::~BLOnSalePresenter()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_005e7794 + g_005e7834);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(8)) = iVar2 + 0x8c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_005e77c6 + g_005e7838,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  iVar3 = *(int *)((int)this + 4*(0xb));
  iVar4 = *(int *)((int)this + 4*(10));
  for (iVar2 = iVar4; iVar2 != iVar3; iVar2 = iVar2 + 0x44) {
    ((OnSaleItem *)iVar2)->~OnSaleItem();
  }
  *(int *)((int)this + 4*(0xb)) = iVar4;
  *(int *)((int)this + 4*(0xe)) = *(int *)((int)this + 4*(0xd));
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0xd)))));
  }
  ((std::vector<OnSaleItem, std::allocator<OnSaleItem>> *)((int)this) + 10)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLOnSalePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSalePresenter::setCurOnSaleType()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSalePresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLOnSalePresenter::BLOnSalePresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSalePresenter::numOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (undefined4)(((sir::singleton<OnSaleData, 0> *)this)->instance());
  ((OnSaleData *)uVar1)->getDataCountByType((EnumOnSaleType)*(undefined4 *)(((int)this) + 0x40));
  uVar2 = (undefined4)(intptr_t)(func_0079e734());
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005e7980))|(((long long)(unsigned)(g_005e7984))<<32))))));
  (void)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005e7980))|(((long long)(unsigned)(g_005e7984))<<32))))))))));
  (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=::ceilf(_f);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005e7980))|(((long long)(unsigned)(g_005e7984))<<32))))))))))))));
  (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=::ceilf(_f);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar2))|(((long long)(unsigned)((int)((ulonglong)uVar2 >> 0x20)))<<32)),(((long long)(unsigned)(g_005e7980))|(((long long)(unsigned)(g_005e7984))<<32))))))))))))))))));
  return;
}

void BLOnSalePresenter::onBuySuccess(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSalePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSalePresenter::onRefreshData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLOnSalePresenter::initWithView(BLOnSaleView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "BLGMTestPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLGMTestView.h"
#include "BLGMEquipItemView.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "GMData.h"
#include "GMSysOther.h"
#include "InputBox.h"
#include "MissionEndLessData.h"
#include "RoleInfoData.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT17(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0055c864;
extern "C" unsigned long UNK_0055c87c;
extern "C" unsigned long UNK_0055c894;
extern "C" unsigned long UNK_0055c8ac;
extern "C" unsigned long UNK_0055c9b0;
extern "C" unsigned long UNK_0055c9c8;
extern "C" unsigned long UNK_0055c9e0;
extern "C" unsigned long UNK_0055ca3c;
extern "C" unsigned long UNK_0055ca6e;
extern "C" unsigned long UNK_0055cab4;
extern "C" unsigned long UNK_0055cadc;
extern "C" unsigned long UNK_0055caec;
extern "C" unsigned long UNK_0055cb00;
extern "C" unsigned long UNK_0055cb2c;
extern "C" unsigned long UNK_0055cb50;
extern "C" unsigned long UNK_0055cb8a;
extern "C" unsigned long UNK_0055cb8c;
extern "C" unsigned long UNK_0055cbec;
extern "C" unsigned long UNK_0055cbee;
extern "C" unsigned long UNK_0055cc10;
extern "C" unsigned long UNK_0055cc16;
extern "C" unsigned long UNK_0055cc64;
extern "C" unsigned long UNK_0055cc78;
extern "C" unsigned long UNK_0055ccb2;
extern "C" unsigned long UNK_0055ccb4;
extern "C" unsigned long UNK_0055cd14;
extern "C" unsigned long UNK_0055cd16;
extern "C" unsigned long UNK_0055cd36;
extern "C" unsigned long UNK_0055cd88;
extern "C" unsigned long UNK_0055cd9e;
extern "C" unsigned long UNK_0055cde4;
extern "C" unsigned long UNK_0055ce64;
extern "C" unsigned long UNK_0055ce78;
extern "C" unsigned long UNK_0055cea8;
extern "C" unsigned long UNK_0055ced8;
extern "C" unsigned long UNK_0055cf08;
extern "C" unsigned long UNK_0055cf38;
extern "C" unsigned long UNK_0055cf68;
extern "C" unsigned long UNK_0055cf98;
extern "C" unsigned long UNK_0055cfc8;
extern "C" unsigned long UNK_0055cff8;
extern "C" unsigned long UNK_0055d028;
extern "C" unsigned long UNK_0055d058;
extern "C" unsigned long UNK_0055d088;
extern "C" unsigned long UNK_0055d0ec;
extern "C" unsigned long UNK_0055d134;
extern "C" unsigned long UNK_0055d1ca;
extern "C" unsigned long UNK_0055d1cc;
extern "C" unsigned long UNK_0055d1f0;
extern "C" unsigned long UNK_0055d27c;
extern "C" unsigned long UNK_0055d3ac;
extern "C" unsigned long UNK_0055d3c6;
extern "C" unsigned long UNK_0055d3ea;
extern "C" unsigned long UNK_0055d412;
extern "C" unsigned long UNK_0055d43a;
extern "C" unsigned long UNK_0055d462;
extern "C" unsigned long UNK_0055d486;
extern "C" unsigned long UNK_0055d4ae;
extern "C" unsigned long UNK_0055d4d6;
extern "C" unsigned long UNK_0055d4fc;
extern "C" unsigned long UNK_0055d524;
extern "C" unsigned long UNK_0055d6e8;
extern "C" unsigned long UNK_0055d74c;
extern "C" unsigned long UNK_0055d7b0;
extern "C" unsigned long UNK_0055d814;
extern "C" unsigned long UNK_0055d878;
extern "C" unsigned long UNK_0055d8de;
extern "C" unsigned long UNK_0055d9a6;
extern "C" unsigned long UNK_0055da0a;
extern "C" unsigned long UNK_0055da6e;
extern "C" unsigned long UNK_0055dad2;
extern "C" unsigned long UNK_0055db38;
extern "C" unsigned long UNK_0055db9e;
extern "C" unsigned long UNK_0055dcf0;
extern "C" unsigned long UNK_0055dcf2;
extern "C" unsigned long UNK_0055dd20;
extern "C" unsigned long UNK_0055dd50;
extern "C" unsigned long UNK_0055dd66;
extern "C" unsigned long _UNK_0055c868;
extern "C" unsigned long _UNK_0055c880;
extern "C" unsigned long _UNK_0055c898;
extern "C" unsigned long _UNK_0055c8b0;
extern "C" unsigned long _UNK_0055c9a0;
extern "C" unsigned long _UNK_0055c9b4;
extern "C" unsigned long _UNK_0055c9cc;
extern "C" unsigned long _UNK_0055c9e4;
extern "C" unsigned long _UNK_0055caa0;
extern "C" unsigned long _UNK_0055caa4;
extern "C" unsigned long _UNK_0055cab8;
extern "C" unsigned long _UNK_0055cae0;
extern "C" unsigned long _UNK_0055caf0;
extern "C" unsigned long _UNK_0055cb04;
extern "C" unsigned long _UNK_0055cb18;
extern "C" unsigned long _UNK_0055cb1c;
extern "C" unsigned long _UNK_0055cb30;
extern "C" unsigned long _UNK_0055cc38;
extern "C" unsigned long _UNK_0055cc3c;
extern "C" unsigned long _UNK_0055cc40;
extern "C" unsigned long _UNK_0055cc44;
extern "C" unsigned long _UNK_0055cc48;
extern "C" unsigned long _UNK_0055cc4c;
extern "C" unsigned long _UNK_0055cc50;
extern "C" unsigned long _UNK_0055cc54;
extern "C" unsigned long _UNK_0055cc68;
extern "C" unsigned long _UNK_0055cd60;
extern "C" unsigned long _UNK_0055cd64;
extern "C" unsigned long _UNK_0055cd68;
extern "C" unsigned long _UNK_0055cd6c;
extern "C" unsigned long _UNK_0055cd70;
extern "C" unsigned long _UNK_0055cd74;
extern "C" unsigned long _UNK_0055cd78;
extern "C" unsigned long _UNK_0055cd8c;
extern "C" unsigned long _UNK_0055ce10;
extern "C" unsigned long _UNK_0055ce14;
extern "C" unsigned long _UNK_0055d0ac;
extern "C" unsigned long _UNK_0055d0b0;
extern "C" unsigned long _UNK_0055d0b4;
extern "C" unsigned long _UNK_0055d0b8;
extern "C" unsigned long _UNK_0055d0bc;
extern "C" unsigned long _UNK_0055d0c0;
extern "C" unsigned long _UNK_0055d0c4;
extern "C" unsigned long _UNK_0055d0c8;
extern "C" unsigned long _UNK_0055d0cc;
extern "C" unsigned long _UNK_0055d0d0;
extern "C" unsigned long _UNK_0055d0d4;
extern "C" unsigned long _UNK_0055d0d8;
extern "C" unsigned long _UNK_0055d0dc;
extern "C" unsigned long _UNK_0055d0f0;
extern "C" unsigned long _UNK_0055d124;
extern "C" unsigned long _UNK_0055d138;
extern "C" unsigned long _UNK_0055d24c;
extern "C" unsigned long _UNK_0055d250;
extern "C" unsigned long _UNK_0055d254;
extern "C" unsigned long _UNK_0055d380;
extern "C" unsigned long _UNK_0055d384;
extern "C" unsigned long _UNK_0055d388;
extern "C" unsigned long _UNK_0055d38c;
extern "C" unsigned long _UNK_0055d3a0;
extern "C" unsigned long _UNK_0055d3b8;
extern "C" unsigned long _UNK_0055d3dc;
extern "C" unsigned long _UNK_0055d400;
extern "C" unsigned long _UNK_0055d404;
extern "C" unsigned long _UNK_0055d428;
extern "C" unsigned long _UNK_0055d42c;
extern "C" unsigned long _UNK_0055d450;
extern "C" unsigned long _UNK_0055d454;
extern "C" unsigned long _UNK_0055d478;
extern "C" unsigned long _UNK_0055d49c;
extern "C" unsigned long _UNK_0055d4a0;
extern "C" unsigned long _UNK_0055d4c4;
extern "C" unsigned long _UNK_0055d4c8;
extern "C" unsigned long _UNK_0055d4ec;
extern "C" unsigned long _UNK_0055d4f0;
extern "C" unsigned long _UNK_0055d508;
extern "C" unsigned long _UNK_0055d8ec;
extern "C" unsigned long _UNK_0055d8f0;
extern "C" unsigned long _UNK_0055d8f4;
extern "C" unsigned long _UNK_0055d8f8;
extern "C" unsigned long _UNK_0055d8fc;
extern "C" unsigned long _UNK_0055d900;
extern "C" unsigned long _UNK_0055d904;
extern "C" unsigned long _UNK_0055d908;
extern "C" unsigned long _UNK_0055d90c;
extern "C" unsigned long _UNK_0055d910;
extern "C" unsigned long _UNK_0055d914;
extern "C" unsigned long _UNK_0055d918;
extern "C" unsigned long _UNK_0055d91c;
extern "C" unsigned long _UNK_0055d920;
extern "C" unsigned long _UNK_0055d924;
extern "C" unsigned long _UNK_0055d928;
extern "C" unsigned long _UNK_0055d92c;
extern "C" unsigned long _UNK_0055d930;
extern "C" unsigned long _UNK_0055d934;
extern "C" unsigned long _UNK_0055d938;
extern "C" unsigned long _UNK_0055d93c;
extern "C" unsigned long _UNK_0055d940;
extern "C" unsigned long _UNK_0055d944;
extern "C" unsigned long _UNK_0055d948;
extern "C" unsigned long _UNK_0055dca4;
extern "C" unsigned long _UNK_0055dca8;
extern "C" unsigned long _UNK_0055dcac;
extern "C" unsigned long _UNK_0055dcb0;
extern "C" unsigned long _UNK_0055dcb4;
extern "C" unsigned long _UNK_0055dcb8;
extern "C" unsigned long _UNK_0055dcbc;
extern "C" unsigned long _UNK_0055dcc0;
extern "C" unsigned long _UNK_0055dcc4;
extern "C" unsigned long _UNK_0055dcc8;
extern "C" unsigned long _UNK_0055dccc;
extern "C" unsigned long _UNK_0055dcd0;
extern "C" unsigned long _UNK_0055dd34;
extern "C" unsigned long _UNK_0055dd38;
extern "C" unsigned long _UNK_0055dd3c;
extern "C" unsigned long _UNK_0055dd40;
extern "C" unsigned long _UNK_0055dd54;
extern "C" unsigned long _UNK_0055de54;
extern "C" unsigned long g_0055c864;
extern "C" unsigned long g_0055c868;
extern "C" unsigned long g_0055c87c;
extern "C" unsigned long g_0055c880;
extern "C" unsigned long g_0055c894;
extern "C" unsigned long g_0055c898;
extern "C" unsigned long g_0055c8ac;
extern "C" unsigned long g_0055c8b0;
extern "C" unsigned long g_0055c9a0;
extern "C" unsigned long g_0055c9b0;
extern "C" unsigned long g_0055c9b4;
extern "C" unsigned long g_0055c9c8;
extern "C" unsigned long g_0055c9cc;
extern "C" unsigned long g_0055c9e0;
extern "C" unsigned long g_0055c9e4;
extern "C" unsigned long g_0055ca3c;
extern "C" unsigned long g_0055ca6e;
extern "C" unsigned long g_0055caa0;
extern "C" unsigned long g_0055caa4;
extern "C" unsigned long g_0055cab4;
extern "C" unsigned long g_0055cab8;
extern "C" unsigned long g_0055cadc;
extern "C" unsigned long g_0055cae0;
extern "C" unsigned long g_0055caec;
extern "C" unsigned long g_0055caf0;
extern "C" unsigned long g_0055cb00;
extern "C" unsigned long g_0055cb04;
extern "C" unsigned long g_0055cb18;
extern "C" unsigned long g_0055cb1c;
extern "C" unsigned long g_0055cb2c;
extern "C" unsigned long g_0055cb30;
extern "C" unsigned long g_0055cb50;
extern "C" unsigned long g_0055cb8a;
extern "C" unsigned long g_0055cb8c;
extern "C" unsigned long g_0055cbec;
extern "C" unsigned long g_0055cbee;
extern "C" unsigned long g_0055cc10;
extern "C" unsigned long g_0055cc16;
extern "C" unsigned long g_0055cc38;
extern "C" unsigned long g_0055cc3c;
extern "C" unsigned long g_0055cc40;
extern "C" unsigned long g_0055cc44;
extern "C" unsigned long g_0055cc48;
extern "C" unsigned long g_0055cc4c;
extern "C" unsigned long g_0055cc50;
extern "C" unsigned long g_0055cc54;
extern "C" unsigned long g_0055cc64;
extern "C" unsigned long g_0055cc68;
extern "C" unsigned long g_0055cc78;
extern "C" unsigned long g_0055ccb2;
extern "C" unsigned long g_0055ccb4;
extern "C" unsigned long g_0055cd14;
extern "C" unsigned long g_0055cd16;
extern "C" unsigned long g_0055cd36;
extern "C" unsigned long g_0055cd60;
extern "C" unsigned long g_0055cd64;
extern "C" unsigned long g_0055cd68;
extern "C" unsigned long g_0055cd6c;
extern "C" unsigned long g_0055cd70;
extern "C" unsigned long g_0055cd74;
extern "C" unsigned long g_0055cd78;
extern "C" unsigned long g_0055cd88;
extern "C" unsigned long g_0055cd8c;
extern "C" unsigned long g_0055cd9e;
extern "C" unsigned long g_0055cde4;
extern "C" unsigned long g_0055ce10;
extern "C" unsigned long g_0055ce14;
extern "C" unsigned long g_0055ce64;
extern "C" unsigned long g_0055ce78;
extern "C" unsigned long g_0055cea8;
extern "C" unsigned long g_0055ced8;
extern "C" unsigned long g_0055cf08;
extern "C" unsigned long g_0055cf38;
extern "C" unsigned long g_0055cf68;
extern "C" unsigned long g_0055cf98;
extern "C" unsigned long g_0055cfc8;
extern "C" unsigned long g_0055cff8;
extern "C" unsigned long g_0055d028;
extern "C" unsigned long g_0055d058;
extern "C" unsigned long g_0055d088;
extern "C" unsigned long g_0055d0ac;
extern "C" unsigned long g_0055d0b0;
extern "C" unsigned long g_0055d0b4;
extern "C" unsigned long g_0055d0b8;
extern "C" unsigned long g_0055d0bc;
extern "C" unsigned long g_0055d0c0;
extern "C" unsigned long g_0055d0c4;
extern "C" unsigned long g_0055d0c8;
extern "C" unsigned long g_0055d0cc;
extern "C" unsigned long g_0055d0d0;
extern "C" unsigned long g_0055d0d4;
extern "C" unsigned long g_0055d0d8;
extern "C" unsigned long g_0055d0dc;
extern "C" unsigned long g_0055d0ec;
extern "C" unsigned long g_0055d0f0;
extern "C" unsigned long g_0055d124;
extern "C" unsigned long g_0055d134;
extern "C" unsigned long g_0055d138;
extern "C" unsigned long g_0055d1ca;
extern "C" unsigned long g_0055d1cc;
extern "C" unsigned long g_0055d1f0;
extern "C" unsigned long g_0055d24c;
extern "C" unsigned long g_0055d250;
extern "C" unsigned long g_0055d254;
extern "C" unsigned long g_0055d27c;
extern "C" unsigned long g_0055d380;
extern "C" unsigned long g_0055d384;
extern "C" unsigned long g_0055d388;
extern "C" unsigned long g_0055d38c;
extern "C" unsigned long g_0055d3a0;
extern "C" unsigned long g_0055d3ac;
extern "C" unsigned long g_0055d3b8;
extern "C" unsigned long g_0055d3c6;
extern "C" unsigned long g_0055d3dc;
extern "C" unsigned long g_0055d3ea;
extern "C" unsigned long g_0055d400;
extern "C" unsigned long g_0055d404;
extern "C" unsigned long g_0055d412;
extern "C" unsigned long g_0055d428;
extern "C" unsigned long g_0055d42c;
extern "C" unsigned long g_0055d43a;
extern "C" unsigned long g_0055d450;
extern "C" unsigned long g_0055d454;
extern "C" unsigned long g_0055d462;
extern "C" unsigned long g_0055d478;
extern "C" unsigned long g_0055d486;
extern "C" unsigned long g_0055d49c;
extern "C" unsigned long g_0055d4a0;
extern "C" unsigned long g_0055d4ae;
extern "C" unsigned long g_0055d4c4;
extern "C" unsigned long g_0055d4c8;
extern "C" unsigned long g_0055d4d6;
extern "C" unsigned long g_0055d4ec;
extern "C" unsigned long g_0055d4f0;
extern "C" unsigned long g_0055d4fc;
extern "C" unsigned long g_0055d508;
extern "C" unsigned long g_0055d524;
extern "C" unsigned long g_0055d6e8;
extern "C" unsigned long g_0055d74c;
extern "C" unsigned long g_0055d7b0;
extern "C" unsigned long g_0055d814;
extern "C" unsigned long g_0055d878;
extern "C" unsigned long g_0055d8de;
extern "C" unsigned long g_0055d8ec;
extern "C" unsigned long g_0055d8f0;
extern "C" unsigned long g_0055d8f4;
extern "C" unsigned long g_0055d8f8;
extern "C" unsigned long g_0055d8fc;
extern "C" unsigned long g_0055d900;
extern "C" unsigned long g_0055d904;
extern "C" unsigned long g_0055d908;
extern "C" unsigned long g_0055d90c;
extern "C" unsigned long g_0055d910;
extern "C" unsigned long g_0055d914;
extern "C" unsigned long g_0055d918;
extern "C" unsigned long g_0055d91c;
extern "C" unsigned long g_0055d920;
extern "C" unsigned long g_0055d924;
extern "C" unsigned long g_0055d928;
extern "C" unsigned long g_0055d92c;
extern "C" unsigned long g_0055d930;
extern "C" unsigned long g_0055d934;
extern "C" unsigned long g_0055d938;
extern "C" unsigned long g_0055d93c;
extern "C" unsigned long g_0055d940;
extern "C" unsigned long g_0055d944;
extern "C" unsigned long g_0055d948;
extern "C" unsigned long g_0055d9a6;
extern "C" unsigned long g_0055da0a;
extern "C" unsigned long g_0055da6e;
extern "C" unsigned long g_0055dad2;
extern "C" unsigned long g_0055db38;
extern "C" unsigned long g_0055db9e;
extern "C" unsigned long g_0055dca4;
extern "C" unsigned long g_0055dca8;
extern "C" unsigned long g_0055dcac;
extern "C" unsigned long g_0055dcb0;
extern "C" unsigned long g_0055dcb4;
extern "C" unsigned long g_0055dcb8;
extern "C" unsigned long g_0055dcbc;
extern "C" unsigned long g_0055dcc0;
extern "C" unsigned long g_0055dcc4;
extern "C" unsigned long g_0055dcc8;
extern "C" unsigned long g_0055dccc;
extern "C" unsigned long g_0055dcd0;
extern "C" unsigned long g_0055dcf0;
extern "C" unsigned long g_0055dcf2;
extern "C" unsigned long g_0055dd20;
extern "C" unsigned long g_0055dd34;
extern "C" unsigned long g_0055dd38;
extern "C" unsigned long g_0055dd3c;
extern "C" unsigned long g_0055dd40;
extern "C" unsigned long g_0055dd50;
extern "C" unsigned long g_0055dd54;
extern "C" unsigned long g_0055dd66;
extern "C" unsigned long g_0055de54;
bool BLGMTestPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGMTestPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGMTestPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGMTestPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined8 BLGMTestPresenter::onUpdateBtn(GMData* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  
  uStack_1c = (undefined1) (undefined4)(intptr_t)p1;
  uStack_1b = (undefined1)((uint)p1 >> 8);
  uStack_1a = (undefined1)((uint)p1 >> 0x10);
  uStack_19 = (undefined1)((uint)p1 >> 0x18);
  uStack_18 = (undefined4)(p3);
  if (*(int *)(p1 + 0x14) == 1000) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
    uVar4 = 100;
    (**(code **)(*piVar1 + 0x234))(piVar1,0);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
    uStack_1c = 100;
    uStack_1b = 100;
    uStack_1a = 100;
    (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
    uVar2 = (undefined4)(0);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
    pcVar3 = *(code **)(*piVar1 + 0x234);
  }
  else {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
    if (*(int *)(p1 + 0x14) == g_0055c9a0) {
      (**(code **)(*piVar1 + 0x234))(piVar1,0);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
      uStack_1c = 100;
      uStack_1b = 100;
      uStack_1a = 100;
      (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
      (**(code **)(*piVar1 + 0x234))(piVar1,1);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
      uStack_1c = 0xff;
      uStack_1b = 0xff;
      uStack_1a = 0xff;
      (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
      goto code_r0x0055c99c;
    }
    (**(code **)(*piVar1 + 0x234))(piVar1,1);
    uVar4 = 0xff;
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0xff;
    (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
    uVar2 = (undefined4)(1);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
    pcVar3 = *(code **)(*piVar1 + 0x234);
  }
  (*pcVar3)(piVar1,uVar2);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
  uStack_1c = uVar4;
  uStack_1b = uVar4;
  uStack_1a = uVar4;
  (**(code **)(*piVar1 + 0x218))(piVar1,&uStack_1c);
code_r0x0055c99c:
  return ghidra_CONCAT17(uStack_19,ghidra_CONCAT16(uStack_1a,ghidra_CONCAT15(uStack_1b,ghidra_CONCAT14(uStack_1c,((int)this)))));
}

void BLGMTestPresenter::onUpdateEndless(GMData* p1)
{
  return;
}

void BLGMTestPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLGMTestPresenter::tick(float p1)
{
  return;
}

BLGMTestPresenter::~BLGMTestPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055ca3c + g_0055caa0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x98;
  *(int *)((int)this + 4*(7)) = iVar2 + 0xa8;
  *(int *)((int)this + 4*(8)) = iVar2 + 0xc4;
  *(int *)((int)this + 4*(9)) = iVar2 + 0xd4;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055ca6e + g_0055caa4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGMTestPresenter::onTextChanged(InputBox* p1)
{
  0 /* ctorZero */;
  return;
}

undefined4 BLGMTestPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLGMTestPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa4);
  return;
}



BLGMTestPresenter::BLGMTestPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0055cd9e + g_0055ce10);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x68;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x98;
  *(int *)((int)this + 4*(7)) = iVar3 + 0xa8;
  *(int *)((int)this + 4*(8)) = iVar3 + 0xc4;
  *(int *)((int)this + 4*(9)) = iVar3 + 0xd4;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055cde4 + g_0055ce14,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGMTestPresenter::create(BLGMTestView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGMTestPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLGMTestPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (19) =====
void BLGMTestPresenter::onUpdateOwn(GMData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGMTestPresenter::onUpdateLv(GMData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGMTestPresenter::onTextDidEnd(InputBox* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar3 = (undefined4)(intptr_t)(p1 + 0x120);
  iStack_1c = (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055ce78 + (intptr_t)(g_0055d0b0))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cea8 + (intptr_t)(g_0055d0b4))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055ced8 + (intptr_t)(g_0055d0b8))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 8) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cf08 + (intptr_t)(g_0055d0bc))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cf38 + (intptr_t)(g_0055d0c0))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cf68 + (intptr_t)(g_0055d0c4))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 8) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cf98 + (intptr_t)(g_0055d0c8))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cfc8 + (intptr_t)(g_0055d0cc))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055cff8 + (intptr_t)(g_0055d0d0))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055d028 + (intptr_t)(g_0055d0d4))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055d058 + (intptr_t)(g_0055d0d8))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 8) = uVar2;
  }
  func_0079e53c(&iStack_1c,iVar3);
  iVar1 = (undefined4)(intptr_t)(func_0079e49c(iStack_1c,(unsigned char *)((char *)&g_0055d088 + (intptr_t)(g_0055d0dc))));
  func_0079e2bc(&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    ((InputBox *)p1)->GetText();
    uVar2 = (undefined4)(func_0079e6c0());
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return;
}

uint BLGMTestPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  uint uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
  if (*(int *)(iVar1 + 0x14) == 0x3ec) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    uVar2 = (undefined4)(*(uint *)(iVar1 + 0x2c));
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    uVar2 = (undefined4)(-(uint)(*(int *)(iVar1 + 0x14) + g_0055d124 == 0) & 0x3c);
  }
  return uVar2;
}

void BLGMTestPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGMTestPresenter::showSceneByStatus()
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = (undefined4)(intptr_t)(g_0055d380);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x28) + 0xd8))());
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(**(int **)(((int)this) + 0x28) + 0xd8))(), **(int **)(iVar2 + 0x14) != 0)) {
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x28) + 0xd8))());
    piVar8 = *(int **)(*(int *)(iVar2 + 0x14) + 8);
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x28) + 0xd8))());
    iVar6 = (undefined4)(intptr_t)(*(int *)(*(int *)(iVar2 + 0x14) + 8));
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x28) + 0xd8))());
    iVar2 = (undefined4)(intptr_t)(**(int **)(iVar2 + 0x14) + g_0055d384);
    for (; (piVar8 <= (int *)(iVar6 + iVar2 * 4) && (iVar7 = (undefined4)(intptr_t)(*piVar8, iVar7 != 0)));
        piVar8 = piVar8 + 1) {
      uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d27c + (intptr_t)(g_0055d388)) + iVar1));
      iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar7,uVar5,*(undefined4 *)((unsigned char *)((char *)&g_0055d27c + (intptr_t)(g_0055d38c)) + iVar1),0));
      if (((iVar3 == 0) &&
          (((iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0 &&
            (iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0)) &&
           (iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0)))) &&
         ((iVar3 = func_0079e55c(iVar7,uVar5), iVar3 == 0 &&
          (piVar4 = (int *)func_0079e55c(iVar7,uVar5,
                                           *(undefined4 *)((unsigned char *)((char *)&g_0055d27c + (intptr_t)(g_0055d3a0)) + iVar1),0)
          , piVar4 != (int *)0x0)))) {
        iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x118)))());
        iVar3 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
        (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,iVar7 == *(int *)(iVar3 + 0x14));
      }
    }
  }
  return;
}

void BLGMTestPresenter::onCommit(cocos2d::CCObject* p1, unsigned int p2)
{
  0 /* ctorZero */;
  ((sir::singleton<GMData, 0> *)this)->instance();
  ((GMData *)this)->Handle();
  return;
}

void BLGMTestPresenter::onMain(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)1000);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnunlockhero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d404);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnlvhero(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d42c);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnlevel(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d454);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnequip(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)0x3ec);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnupgrade(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d4a0);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnskill(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d4c8);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnother(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar1)->Setgmscene((GM_SCENESTATUS)g_0055d4f0);
  BLGMTestPresenter::showSceneByStatus();
  return;
}

void BLGMTestPresenter::getBtnsell(cocos2d::CCObject* p1, unsigned int p2)
{
  0 /* ctorZero */;
  ((sir::singleton<GMData, 0> *)this)->instance();
  ((GMData *)this)->Handle();
  return;
}

undefined4 BLGMTestPresenter::initWithView(BLGMTestView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  iVar4 = (undefined4)(intptr_t)(g_0055d8ec);
  uStack_78 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d8f0)) + g_0055d8ec));
  uStack_74 = (undefined4)(0);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),uStack_78,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x110);
  uStack_70 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d8f4)) + iVar4));
  uStack_6c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_70,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x114);
  uStack_68 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d8f8)) + iVar4));
  uStack_64 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_68,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x118);
  uStack_60 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d8fc)) + iVar4));
  uStack_5c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_60,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x11c);
  uStack_58 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d900)) + iVar4));
  uStack_54 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_58,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x120);
  uStack_50 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d904)) + iVar4));
  uStack_4c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_50,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x124);
  uStack_48 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d908)) + iVar4));
  uStack_44 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_48,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x128);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d90c)) + iVar4));
  uStack_3c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_40,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 300);
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d910)) + iVar4));
  uStack_34 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_38,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x130);
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d914)) + iVar4));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x134);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d918)) + iVar4));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x138);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0055d524 + (intptr_t)(g_0055d91c)) + iVar4));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x18);
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x2c);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d6e8 + (intptr_t)(g_0055d924)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x2c))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055d928);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x2c),100);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x30) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x30);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x30));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d74c + (intptr_t)(g_0055d92c)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x30))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055d930);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x30),0x65);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x34) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x34);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x34));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d7b0 + (intptr_t)(g_0055d938)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x34))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055d930);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x34),0x66);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x38) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x38);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x38));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d814 + (intptr_t)(g_0055d93c)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x38))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055d940);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x38),0x67);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x3c) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x3c);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x3c));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d878 + (intptr_t)(g_0055d944)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x3c))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))(*(int **)(((int)this) + 0x28),0x3ec);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x3c),0x68);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x40) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x40);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x40));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d8de + (intptr_t)(g_0055d948)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x40))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))(*(int **)(((int)this) + 0x28),0x3ec);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x40),0x69);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x44) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x44);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x44));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055d9a6 + (intptr_t)(g_0055dca8)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x44))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055dcac);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x44),0x6a);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x48) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x48);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x48));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055da0a + (intptr_t)(g_0055dcb0)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x48))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055dcb4);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x48),0x6b);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x4c) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x4c);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x4c));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055da6e + (intptr_t)(g_0055dcb8)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x4c))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))
                            (*(int **)(((int)this) + 0x28),g_0055dcbc);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x4c),0x6c);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x50) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x50);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x50));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055dad2 + (intptr_t)(g_0055dcc0)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x50))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))(*(int **)(((int)this) + 0x28),0x3f0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x50),0x6d);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x54) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x54);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x54));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055db38 + (intptr_t)(g_0055dcc8)),auStack_84);
  func_0079e52c(iVar5 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x54))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))(*(int **)(((int)this) + 0x28),0x3f0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x54),0x6e);
  uVar2 = (undefined4)(((InputBox *)this)->create());
  *(undefined4 *)(((int)this) + 0x58) = uVar2;
  ((InputBox *)uVar2)->setTextDelegate((InputBoxDelegate*)iVar4);
  piVar1 = *(int **)(((int)this) + 0x58);
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar1,auStack_80);
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x58));
  func_0079e45c(auStack_80,(unsigned char *)((char *)&g_0055db9e + (intptr_t)(g_0055dcd0)),auStack_84);
  func_0079e52c(iVar4 + 0x120,auStack_80);
  func_0079e2bc(auStack_80);
  ((cocos2d::CCObject *)*(undefined4 *)(((int)this) + 0x58))->retain();
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0xd4))(*(int **)(((int)this) + 0x28),0x3f0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x58),0x6f);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x13c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x13c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x24);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x13c);
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x28) + 0x13c))->reloadData(0, 1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x140);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x140);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x24);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x28) + 0x140);
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x28) + 0x140))->reloadData(0, 1);
  iVar4 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
  *(int *)(iVar4 + 0x10) = ((int)this) + 0x1c;
  uVar2 = (undefined4)(((sir::singleton<GMData, 0> *)this)->instance());
  ((GMData *)uVar2)->Setgmscene((GM_SCENESTATUS)1000);
  BLGMTestPresenter::showSceneByStatus();
  return 1;
}

void BLGMTestPresenter::onUpdateLevel(GMData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGMTestPresenter::getBtnendless(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

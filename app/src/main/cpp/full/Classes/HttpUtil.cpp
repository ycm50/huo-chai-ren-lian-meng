#include "HttpUtil.h"
#include "CCDictionary.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "CCString.h"
#include "BLGameScene.h"
#include "CCJson.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5cc(...);
extern "C" long long func_0079e61c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eb64(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00617620;
extern "C" unsigned long UNK_0061762a;
extern "C" unsigned long UNK_00617648;
extern "C" unsigned long UNK_00617698;
extern "C" unsigned long UNK_006176b0;
extern "C" unsigned long UNK_00617700;
extern "C" unsigned long UNK_00617714;
extern "C" unsigned long UNK_0061772e;
extern "C" unsigned long UNK_00617730;
extern "C" unsigned long UNK_00617780;
extern "C" unsigned long UNK_006177f8;
extern "C" unsigned long UNK_00617806;
extern "C" unsigned long UNK_006178a0;
extern "C" unsigned long _UNK_00617634;
extern "C" unsigned long _UNK_00617638;
extern "C" unsigned long _UNK_0061764c;
extern "C" unsigned long _UNK_0061769c;
extern "C" unsigned long _UNK_006176bc;
extern "C" unsigned long _UNK_00617760;
extern "C" unsigned long _UNK_00617764;
extern "C" unsigned long _UNK_00617768;
extern "C" unsigned long _UNK_0061776c;
extern "C" unsigned long _UNK_006177cc;
extern "C" unsigned long _UNK_00617998;
extern "C" unsigned long _UNK_0061799c;
extern "C" unsigned long _UNK_006179a0;
extern "C" unsigned long unaff_r5;
extern "C" unsigned long g_00617620;
extern "C" unsigned long g_0061762a;
extern "C" unsigned long g_00617634;
extern "C" unsigned long g_00617638;
extern "C" unsigned long g_00617648;
extern "C" unsigned long g_0061764c;
extern "C" unsigned long g_00617698;
extern "C" unsigned long g_0061769c;
extern "C" unsigned long g_006176b0;
extern "C" unsigned long g_006176bc;
extern "C" unsigned long g_00617700;
extern "C" unsigned long g_00617714;
extern "C" unsigned long g_0061772e;
extern "C" unsigned long g_00617730;
extern "C" unsigned long g_00617760;
extern "C" unsigned long g_00617764;
extern "C" unsigned long g_00617768;
extern "C" unsigned long g_0061776c;
extern "C" unsigned long g_00617780;
extern "C" unsigned long g_006177cc;
extern "C" unsigned long g_006177f8;
extern "C" unsigned long g_00617806;
extern "C" unsigned long g_006178a0;
extern "C" unsigned long g_00617998;
extern "C" unsigned long g_0061799c;
extern "C" unsigned long g_006179a0;
HttpUtil::~HttpUtil()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  **(undefined4 **)(&g_0061762a + g_00617638) = 0;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

HttpUtil::HttpUtil()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_006176b0 + g_006176bc);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(5)) = iVar1 + 0x28;
  return;
}

void HttpUtil::onError(cocos2d::extension::CCHttpResponse* p1)
{
  return;
}

void HttpUtil::onResponse(cocos2d::extension::CCHttpResponse* p1)
{
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  return;
}



int HttpUtil::request()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void HttpUtil::getBodyDic(cocos2d::extension::CCHttpResponse* p1)
{
  int iVar1;
  undefined4 unaff_r5;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  if ((int)(intptr_t)(int)(intptr_t)p1 == 0) {
    unaff_r5 = (undefined4)(0);
  }
  else if (*(char *)(p1 + 0x18) == '\0') {
    unaff_r5 = (undefined4)(0);
  }
  else {
    func_0079e54c(&uStack_20,*(int *)(p1 + 0x1c),
                    *(int *)(p1 + 0x20) - *(int *)(p1 + 0x1c),auStack_1c);
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00617700 + (intptr_t)(g_00617760)), uStack_20);
    iVar1 = (undefined4)((void)(((CCJson *)this)->JSONObjectWithString((char const*)uStack_20)),(intptr_t)0);
    if (iVar1 != 0) {
      func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00617714 + (intptr_t)(g_00617764)),auStack_24);
      iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar1))->objectForKey((char const *)auStack_1c));
      unaff_r5 = (undefined4)(0);
      if (iVar1 != 0) {
        unaff_r5 = func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_0061772e + (intptr_t)(g_00617768))),
                                   *(undefined4 *)((unsigned char *)((char *)&g_00617730 + (intptr_t)(g_0061776c))),0);
      }
      func_0079e2bc(auStack_1c);
    }
    func_0079e2bc(&uStack_20);
  }
  return;
}

void HttpUtil::initWithFormatAndValist(char const* p1, __builtin_va_list * p2)
{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_00617780 + (intptr_t)(g_006177cc)),&uStack_20);
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCString::create(*(std::string const*)&uStack_1c));
  func_0079e2bc(&uStack_1c);
  iVar2 = (undefined4)(intptr_t)(func_0079e61c(0x19000));
  if (iVar2 != 0) {
    func_0079eb64(iVar2,0x19000,p1,p2);
    func_0079e2dc(iVar1 + 0x14,iVar2);
    func_0079e5cc(iVar2);
  }
  return;
}

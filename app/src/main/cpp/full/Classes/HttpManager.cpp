#include "HttpManager.h"
#include "HttpTarget.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e844(...);
extern "C" long long func_0079e854(...);
extern "C" unsigned long UNK_004dbf36;
extern "C" unsigned long UNK_004dc006;
extern "C" unsigned long UNK_004dc010;
extern "C" unsigned long UNK_004dc048;
extern "C" unsigned long UNK_004dc05e;
extern "C" unsigned long UNK_004dc064;
extern "C" unsigned long UNK_004dc09a;
extern "C" unsigned long UNK_004dc0a8;
extern "C" unsigned long UNK_004dc0da;
extern "C" unsigned long UNK_004dc10c;
extern "C" unsigned long UNK_004dc17e;
extern "C" unsigned long UNK_004dc188;
extern "C" unsigned long UNK_004dc1bc;
extern "C" unsigned long UNK_004dc1da;
extern "C" unsigned long UNK_004dc202;
extern "C" unsigned long UNK_004dc22c;
extern "C" unsigned long UNK_004dc672;
extern "C" unsigned long UNK_004dc67e;
extern "C" unsigned long UNK_004dc772;
extern "C" unsigned long UNK_004dc784;
extern "C" unsigned long UNK_004dc7a4;
extern "C" unsigned long UNK_004dc826;
extern "C" unsigned long _UNK_004dbf6c;
extern "C" unsigned long _UNK_004dc038;
extern "C" unsigned long _UNK_004dc03c;
extern "C" unsigned long _UNK_004dc070;
extern "C" unsigned long _UNK_004dc074;
extern "C" unsigned long _UNK_004dc078;
extern "C" unsigned long _UNK_004dc15c;
extern "C" unsigned long _UNK_004dc160;
extern "C" unsigned long _UNK_004dc164;
extern "C" unsigned long _UNK_004dc168;
extern "C" unsigned long _UNK_004dc2a8;
extern "C" unsigned long _UNK_004dc2ac;
extern "C" unsigned long _UNK_004dc2b0;
extern "C" unsigned long _UNK_004dc2b4;
extern "C" unsigned long _UNK_004dc2b8;
extern "C" unsigned long _UNK_004dc2bc;
extern "C" unsigned long _UNK_004dc69c;
extern "C" unsigned long _UNK_004dc6a0;
extern "C" unsigned long _UNK_004dc840;
extern "C" unsigned long _UNK_004dc844;
extern "C" unsigned long _UNK_004dc848;
extern "C" unsigned long _UNK_004dc84c;
extern "C" unsigned long g_004dbf36;
extern "C" unsigned long g_004dbf6c;
extern "C" unsigned long g_004dc006;
extern "C" unsigned long g_004dc010;
extern "C" unsigned long g_004dc038;
extern "C" unsigned long g_004dc03c;
extern "C" unsigned long g_004dc048;
extern "C" unsigned long g_004dc05e;
extern "C" unsigned long g_004dc064;
extern "C" unsigned long g_004dc070;
extern "C" unsigned long g_004dc074;
extern "C" unsigned long g_004dc078;
extern "C" unsigned long g_004dc09a;
extern "C" unsigned long g_004dc0a8;
extern "C" unsigned long g_004dc0da;
extern "C" unsigned long g_004dc10c;
extern "C" unsigned long g_004dc15c;
extern "C" unsigned long g_004dc160;
extern "C" unsigned long g_004dc164;
extern "C" unsigned long g_004dc168;
extern "C" unsigned long g_004dc17e;
extern "C" unsigned long g_004dc188;
extern "C" unsigned long g_004dc1bc;
extern "C" unsigned long g_004dc1da;
extern "C" unsigned long g_004dc202;
extern "C" unsigned long g_004dc22c;
extern "C" unsigned long g_004dc2a8;
extern "C" unsigned long g_004dc2ac;
extern "C" unsigned long g_004dc2b0;
extern "C" unsigned long g_004dc2b4;
extern "C" unsigned long g_004dc2b8;
extern "C" unsigned long g_004dc2bc;
extern "C" unsigned long g_004dc672;
extern "C" unsigned long g_004dc67e;
extern "C" unsigned long g_004dc69c;
extern "C" unsigned long g_004dc6a0;
extern "C" unsigned long g_004dc772;
extern "C" unsigned long g_004dc784;
extern "C" unsigned long g_004dc7a4;
extern "C" unsigned long g_004dc826;
extern "C" unsigned long g_004dc840;
extern "C" unsigned long g_004dc844;
extern "C" unsigned long g_004dc848;
extern "C" unsigned long g_004dc84c;
HttpManager::~HttpManager()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined4 HttpManager::shareHttpManager()
{
  undefined4 uVar1;
  
  if (*(int *)(&g_004dc048 + g_004dc070) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
    0 /* ctorZero */;
    *(undefined4 *)(&g_004dc05e + g_004dc074) = uVar1;
  }
  return *(undefined4 *)(&g_004dc064 + g_004dc078);
}


int HttpManager::sendData(P2 p1, auStack_3c p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
HttpManager::HttpManager()
{
  int iVar1;
  
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_004dc006 + (intptr_t)(g_004dc038))) + 8;
  *(int *)((int)this + 4*(5)) = *(int *)((unsigned char *)((char *)&g_004dc010 + (intptr_t)(g_004dc03c))) + 0xc;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(6)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

void HttpManager::removeTargetFromArray(HttpTarget* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void HttpManager::getPostFields(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (p3 == 0) {
    func_0079e45c(((int)this),(unsigned char *)((char *)&g_004dc09a + (intptr_t)(g_004dc15c)),auStack_2c);
  }
  else {
    func_0079e45c(&iStack_24,(unsigned char *)((char *)&g_004dc0a8 + (intptr_t)(g_004dc160)),auStack_28);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->allKeys());
    if (iVar1 != 0) {
      puVar5 = (unsigned char *)((char *)&g_004dc10c + (intptr_t)(g_004dc168));
      for (uVar6 = 0; uVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iVar1)->count(), uVar6 < uVar2); uVar6 = uVar6 + 1)
      {
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)iVar1)->objectAtIndex((unsigned int)uVar6));
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey(iVar3 + 0x14));
        if (*(int *)(iStack_24 + -0xc) != 0) {
          func_0079e854(&iStack_24,puVar5);
        }
        func_0079e53c(auStack_20,iVar3 + 0x14);
        func_0079e854(auStack_20,(unsigned char *)((char *)&g_004dc0da + (intptr_t)(g_004dc164)));
        func_0042f3fc(auStack_1c,auStack_20,iVar4 + 0x14);
        func_0079e5dc(&iStack_24,auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(auStack_20);
      }
    }
    func_0079e53c(((int)this),&iStack_24);
    func_0079e2bc(&iStack_24);
  }
  return;
}

void HttpManager::parseRequest(int* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void HttpManager::onResponse(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

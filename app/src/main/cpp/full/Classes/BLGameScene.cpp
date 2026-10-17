#include "BLGameScene.h"
#include "CCNode.h"
#include "BLAchievementManager.h"
#include "BLLeakUtils.h"
#include "SignInData.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCLayer.h"
#include "CCTextureCache.h"
#include "CCSpriteFrameCache.h"
#include "DataCacheManager.h"
#include "BluetoothHelper.h"
#include "UserData.h"          /* RAW_SLOT_FIX: onEnter 里具名化需要完整类型 */
#include "LivenessUserData.h"  /* 同上 */
#include "SimpleAudioEngine.h"
#include "BLForwards.h"
#include "sir_builtin.h"

using namespace CocosDenshion;
#include "LoadingLayer.h"
#include "BLMapData.h"
#include "UIManager.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCUserDefault.h"
#include "CCDirector.h"
#include "CCScene.h"
using namespace cocos2d;
#include "LivenessUserData.h"
#include "DataManager.h"
#include "ADManager.h"
#include "BlackBackLayer.h"
#include "BLMissionManager.h"
#include <new>   // ghost_fix.js 自动补齐
#include <cstdlib>   // ghost_fix.js 自动补齐
#include "Toast.h"   /* R177: need complete type for Toast::getTalkAnns() */
// 兜底声明
extern "C" long long func_0079e6d0(...);
extern "C" unsigned long g_00428c78;
extern "C" long long func_0079e41c(...);
extern "C" unsigned long g_004277a4;
extern "C" unsigned long g_004277a8;
extern "C" unsigned long g_00424d14;
extern "C" unsigned long g_004261ec;
extern "C" long long func_0042517c(...);
extern "C" long long func_0079e45c(...);
extern "C" unsigned long g_0042616c;
extern "C" unsigned long g_00426170;
extern "C" unsigned long g_00426174;
extern "C" unsigned long g_00426178;
extern "C" unsigned long g_0042617c;
extern "C" unsigned long g_00426180;
extern "C" unsigned long g_00426184;
extern "C" unsigned long g_00426188;
extern "C" unsigned long g_0042618c;
extern "C" unsigned long g_00426190;
extern "C" unsigned long g_00426194;
extern "C" unsigned long g_00426198;
extern "C" long long ghidra_CONCAT44(...);

extern "C" long long func_0079e56c(...);
extern "C" unsigned long g_004258f0;
extern "C" unsigned long g_004258ec;
extern "C" unsigned long g_0042a308;
extern "C" unsigned long g_00426750;
extern "C" long long func_0079e50c(...);
extern "C" unsigned long g_0042a344;
extern "C" unsigned long g_004267c4;
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" unsigned long g_00426778;
extern "C" long long func_0079e2dc(...);
extern "C" unsigned long g_00426704;
extern "C" long long func_0079e2fc(...);
extern "C" unsigned long g_00425890;
extern "C" unsigned long g_00425894;
extern "C" unsigned long g_00425898;
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_0042505c;
extern "C" long long func_0079e52c(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

int BLGameScene::getLoadingStatus() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGameScene::setLoadingStatus(int p1)
{
  *(undefined4 *)(((int)this) + 0x108) = p1;
  return;
}

int BLGameScene::getCurrentStatus() const
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLGameScene::setCurrentStatus(EnumGameSceneStatus * p1)
{
  *(undefined4 *)(((int)this) + 0x140) = (undefined4)(intptr_t)p1;
  return;
}

void BLGameScene::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameScene::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameScene::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameScene::onSharkActionEnd(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  code *pcVar1;
  
  *(undefined4 *)(((int)this) + 0x114) = 0;
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x110) + 0x4c);
  (*pcVar1)(*(int **)(((int)this) + 0x110),") 4.4.3",p3,pcVar1,p4);
  return;
}

void BLGameScene::setRecordId(std::string * p1)
{
  func_0079e52c(((int)this) + 0x13c);
  return;
}

BLGameScene::~BLGameScene()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(*(int *)(g_0042505c + 0x425010));
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x25c;
  func_0079e2bc(((int)this) + 0x56);
  func_0079e2bc(((int)this) + 0x4f);
  func_0079e2bc(((int)this) + 0x46);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool BLGameScene::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x55)),(intptr_t)0);
  if (iVar2 != 0) {
    *(int *)(((int)this) + 0x148) = *(int *)(((int)this) + 0x148) + 1;
  }
  return *(undefined1 *)(((int)this) + 0x138);
}

std::string BLGameScene::getRecordId() const
{ return *(std::string *)(((int)this) + 0x13c); }

int BLGameScene::onShowDailySignUI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLGameScene::onGetADValuesCompleted(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGameScene::showDailySignUI(float p1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x66)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x66);
  }
  return;
}

void BLGameScene::delayInitMission()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::delayInitArena()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLGameScene::delayInitMine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLGameScene::delayInitMirrorChallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGameScene::delayInitArenaOnline()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::delayInitArenaVideo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::delayInitChallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLGameScene::BLGameScene()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

/* SINGLETON_FIX (R73)：原反编译体把 shareGameScene 的**静态实例指针**误渲染成字符串字面量
   `*(int**)("NU) 4.4.3")` —— 该地址实际落在原版 .comment（"GCC: (GNU) 4.4.3"）那段字符串上，
   于是"写入实例指针"变成**写 .rodata** -> 真机 SEGV_ACCERR
   （tombstone: BLGameScene::shareGameScene()+38, fault addr 0xd51bedd7）。
   左侧 `*(int*)((char*)&g_00425890 + (intptr_t)g_00425890) == 0` 是同一个静态的判空。
   这里改为真实静态指针，并把裸 vtable 槽 0x18 具名化为 cocos2d 规范的 init()。 */
static BLGameScene *s_shareGameScene = 0;

undefined4 BLGameScene::shareGameScene()
{
  if (s_shareGameScene == 0) {
    /* 原版是 `operator new(0x15c)` + **手工设 vptr** + `vtable[0x18]()`（即 init()）——
       即宏 COCOS2DX_LAYER_NODE_FUNC 的内联展开。原生成器把 vptr 那步也丢了，
       于是新对象 vptr == NULL，随后 init() 的**虚调用**读 [0+0x18] -> fault addr 0x18。
       这里改用真正的 C++ 构造（构造函数会设 vptr），语义等价。 */
    s_shareGameScene = new BLGameScene();
    /* 原为 (**(code **)(*piVar1 + 0x18))(piVar1); —— 具名化（CCNode::init 就是 idx 6/0x18，
       已用原版 _ZTVN7cocos2d6CCNodeE 反查确认）*/
    s_shareGameScene->init();
  }
  return (undefined4)(intptr_t)s_shareGameScene;
}

int * BLGameScene::scene()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCScene::create();
  uVar2 = (undefined4)(BLGameScene::shareGameScene());
  /* RAW_SLOT_FIX (R73)：原为硬编码 vtable 槽 200（0xC8）——与 HelloWorld::scene 同一处，
     原版实证为 CCNode::addChild(CCNode*)。具名化，槽位交给编译器。 */
  ((cocos2d::CCScene *)piVar1)->addChild((cocos2d::CCNode *)(intptr_t)uVar2);
  return (int *)(piVar1);
}

int BLGameScene::onTestNetCallBack(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  int iVar1;
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = (undefined4)(p1);
  if (((int)(intptr_t)(int)(intptr_t)p2 != 0) && (*(char *)(p2 + 0x18) != '\0')) {
    iStack_8 = (undefined4)(intptr_t) (undefined4)(intptr_t)p2;
    uStack_c = (undefined4)(0 /* ctorZero */);
    iVar1 = (undefined4)(intptr_t)(func_0079e56c(&uStack_c));
    cocos2d::CCLog((char const*)"百度时间:%d年%d月%d日", *(int *)(iVar1 + 0x14) + g_004258ec, *(int *)(iVar1 + 0x10) + 1, *(undefined4 *)(iVar1 + 0xc));
  }
  return ghidra_CONCAT44(uStack_c,((int)this));
}

void BLGameScene::setGameStatus(EnumGameSceneStatus p1)
{
  *(undefined1 *)(((int)this) + 0x144) = 1;
  *(undefined4 *)(((int)this) + 0x140) = (undefined4)p1;   /* SIG_FIX (R198): store the enum value (was casting a pointer) */
  return;
}

void BLGameScene::enterChallenge()
{
  /* IMPL_FIX (R205). Original @0x415904 (partial -- clearly-decoded parts first):
       41591a/920: UIManager::shareManager() ; UIManager::showUIById(0x2)
       415948:     str r3(0xd), [this+0xfc, #0xc]      ; this+0x108 = 0xd
     NOT implemented yet: the DataManager slot call (this+0xfc+0x20 with 0xd), BLMission::create(),
     and the std::string manipulation at 0x415932-0x41593e. The original ignores showUIById's result. */
  UIManager *pUIManager = (UIManager *)(intptr_t)((UIManager *)this)->shareManager();
  if (pUIManager != 0) { (void)pUIManager->showUIById(0x2); }
  *(int *)((int)this + 0xfc + 0xc) = 0xd;
}

void BLGameScene::enterDragonCanyon()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::enterMoneyTree()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::enterArena()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::enterMine()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLGameScene::enterMirrorChallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGameScene::enterFightVideo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLGameScene::enterArenaOnline()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLGameScene::enterBluetoothControll()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLGameScene::enterCity()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x138)))();
  ((cocos2d::CCArray *)this)->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x140)))();
  ((cocos2d::CCArray *)this)->removeAllObjects();
  *(undefined4 *)(((int)this) + 0x108) = 2;
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)(intptr_t)(((UIManager *)uVar2)->showUIById(2));
  piVar1 = (int *)::operator new(0x24);
  ::new ((void *)piVar1) BLMapData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BLMapData 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)(((BLMapData *)piVar1)->init());
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  ((BLMapData *)piVar1)->initWithMapID(g_0042616c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"items"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"dice"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"suitequip_upgrace"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero_effup"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero_effdown"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero1_effup"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero1_effdown"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero2_effup"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero2_effdown"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero3_effup"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  uVar2 = (undefined4)(func_0042517c(*(undefined4 *)(iVar3 + 0x24)));
  func_0079e45c(&uStack_1c,((intptr_t)"hero3_effdown"),&iStack_20);
  ((LoadingLayer *)uVar2)->pushImageRes((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0042517c(*(undefined4 *)(iVar3 + 0x24));
  ((LoadingLayer *)this)->startLoading();
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

undefined8 BLGameScene::enterTestLeak()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(((int)this) + 0x108) = 3;
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)(intptr_t)(((UIManager *)uVar1)->showUIById(2));
  uVar1 = (undefined4)(func_0042517c(*(undefined4 *)(iVar2 + 0x24)));
  func_0079e45c(&uStack_14,((intptr_t)"Icon-57"),&iStack_18);
  ((LoadingLayer *)uVar1)->pushImageRes((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  func_0042517c(*(undefined4 *)(iVar2 + 0x24));
  ((LoadingLayer *)this)->startLoading();
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

void BLGameScene::exitArena()
{
  return;
}

void BLGameScene::exitMission()
{
  return;
}

void BLGameScene::cleanResCache()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->removeAllUIObjects();
  if ((int *)*(int *)((int)this + 4*(0x44)) != 0) {
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x208))();
    ((BLMissionManager *)this)->exitMission();
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xec))((int *)*(int *)((int)this + 4*(0x44)),1);
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
  if (iVar2 != 3) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
    if (iVar2 != 4) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
      if (iVar2 != 10) goto LAB_00426258;
    }
  }
  uVar3 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar3)->setIsBlueFight(0);
  uVar3 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar3)->setIsHost(0);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*(int *)(piVar1) + (0x7c)))(piVar1,0);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*(int *)(piVar1) + (0x74)))(piVar1,1);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*(int *)(piVar1) + (0x6c)))(piVar1,0);
LAB_00426258:
  (**(code **)(*(int *)this + 0xf8))(((int)this),5);
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->stopAllEffects();
  uVar3 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)uVar3)->stopBackgroundMusic(1);
  ((DataCacheManager *)this)->shareManager();
  ((DataCacheManager *)this)->cleanDataCache();
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  ((cocos2d::CCSpriteFrameCache *)this)->removeUnusedSpriteFrames();
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  ((cocos2d::CCSpriteFrameCache *)this)->removeSpriteFrames();
  cocos2d::CCTextureCache::sharedTextureCache();
  ((cocos2d::CCTextureCache *)this)->removeUnusedTextures();
  cocos2d::CCTextureCache::sharedTextureCache();
  ((cocos2d::CCTextureCache *)this)->removeAllTextures();
  return;
}

void BLGameScene::cleanMainCity()
{
  BLGameScene::cleanResCache();
  return;
}

void BLGameScene::cleanMission()
{
  BLGameScene::cleanResCache();
  return;
}

void BLGameScene::runSharkAction(int p1, float p2, float p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::runWorldFpsChange(int p1, float p2, float p3)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x >= _y)?1:0);}((int)(*(undefined4 *)(((int)this) + 0x11c)),(int)(p2)))));
  if (iVar1 != 0) {
    *(undefined4 *)(((int)this) + 0x11c) = p2;
    *(undefined4 *)(((int)this) + 0x120) = p3;
    if (*(int **)(((int)this) + 0x110) != 0) {
      uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x110) + 0x208))());
      ((BLMissionManager *)uVar2)->runWorldFpsChange(p2, p3);
    }
  }
  return;
}

void BLGameScene::showNetQuan()
{
  return;
}

void BLGameScene::closeNetQuan()
{
  undefined4 p4 = 0;

  (**(code **)(*(int *)this + 0xfc))(((int)this),0x67,1,*(code **)(*(int *)this + 0xfc),p4);
  return;
}

void BLGameScene::showShieldLayer()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::clearShieldLayer()
{
  func_0079e2dc(((int)this) + 0x56,g_00426704 + 0x4266e2);
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(undefined1 *)(((int)this) + 0x4e) = 0;
  (**(code **)(*(int *)this + 0xfc))(((int)this),3,1);
  return;
}

void BLGameScene::timeOutCallBack()
{
  BLGameScene::clearShieldLayer();
  return;
}

void BLGameScene::closeShieldLayer()
{
  int iVar1;
  
  if (*(int *)(((int)this) + 0x134) != 0) {
    iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x134) + -1);
    *(int *)(((int)this) + 0x134) = iVar1;
    if (iVar1 == 0) {
      BLGameScene::clearShieldLayer();
    }
  }
  return;
}

void BLGameScene::showBlackLayer()
{
  undefined4 p4 = 0;

  int *piVar1;
  
  piVar1 = (int *)((BlackBackLayer *)this)->create();
  (**(code **)(*piVar1 + 0x11c))(piVar1,g_00426750);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar1,1,*(code **)(*(int *)this + 0xcc),p4);
  return;
}

void BLGameScene::removeBlackLayer()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0xd4))(((int)this),g_00426778));
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0xfc))(((int)this),g_00426778,1);
  }
  return;
}

void BLGameScene::random(float p1, float p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  (void)(((long long)::lrand48()));
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)::lrand48()))))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(0x30000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2),(int)(p1)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(0x3f800000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(p1)))));
  return;
}

void BLGameScene::sendMessage()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"TAG_SENDMESSAGE"));
  return;
}

void BLGameScene::enterMission()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::onRequestVipComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::tick(float p1)
{
  /* IMPL_FIX (R200). Original BLGameScene::tick @0x4173d8 -- implementing the clearly-decoded parts first:
       0x41742a: adds r3,r5,#0 ; adds r3,#0xff ; ldrb r2,[r3,#0xd]      ; flag = *(this+0xff+0xd)
       0x417430: cmp r2,#0 ; beq 0x417440                              ; if (!flag) skip
       0x417434: movs r2,#0 ; strb r2,[r3,#0xd]                        ; flag = 0
       0x417438/43c: BLGameScene::shareGameScene() ; BLGameScene::showShieldLayer()
     (Remaining sections -- the CCUserDefault float update at this+0xfc+0x58, DebugLocalSys::getJsonIntById
      and the UIManager::getUIObject(0x55) UI flow -- are NOT implemented yet.) */
  if (*(unsigned char *)((int)this + 0xff + 0xd) != 0)
  {
    *(unsigned char *)((int)this + 0xff + 0xd) = 0;
    (void)((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
  }
  /* R202: original 0x417464-0x41747a -- UI-driving part of tick:
       ldr r3,[r4,#0x4c] ; cmp r3,#0 ; ble skip     ; if (*(int*)(this+0xfc+0x4c) > 0)  [r4 = this+0xfc]
       (the DebugLocalSys::getJsonIntById(..)==1 guard is NOT implemented yet -- deferred)
       UIManager::shareManager()->getUIObject(0x55)  ; original UI id is 0x55 */
  if (*(int *)((int)this + 0xfc + 0x4c) > 0)
  {
    CCLog("DIAG_R202 tick: member(+0x148) > 0 -> UIManager::getUIObject(0x55)");
    UIManager *pUIManager = (UIManager *)(intptr_t)((UIManager *)this)->shareManager();
    if (pUIManager != 0) { (void)pUIManager->getUIObject(0x55); }
  }
}

void BLGameScene::enterTreasure()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLGameScene::sendDailyRequest()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  undefined4 uStack_10;
  
  piVar3 = *(int **)(g_004277a4 + 0x427748);
  iStack_14 = (undefined4)(intptr_t)(p2);
  uStack_10 = (undefined4)(p3);
  if (*piVar3 == 0) {
    iStack_14 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
    iStack_14 = (undefined4)(intptr_t)(iStack_14 + 0x18);
    func_0079e41c();
    if (*piVar3 == 0) {
      piVar1 = (int *)func_0079e2fc(4);
      *piVar1 = *(int *)(g_004277a8 + 0x427778) + 8;
      *piVar3 = (int)piVar1;
      uVar2 = (undefined4)(((sir::singleton_container *)this)->instance());
      ((sir::singleton_container *)(uVar2))->add_singleton((sir::singleton_base*)*piVar3, 0);
    }
    ((sir::autolocker *)(&iStack_14))->~autolocker();
  }
  ((SignInData *)(*piVar3))->GetDataFromNet(1, 1);
  return ghidra_CONCAT44(iStack_14,((int)this));
}

void BLGameScene::requestGetQQCoin(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::requestVip(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::requestQQCoin()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::requestADValues()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::checkLivenessTime(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::loadingEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::enterEndless()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLGameScene::replaceGameScene(float p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r3;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  uVar3 = (undefined4)(*(undefined4 *)(g_00428c78 + 0x428b1a));
  ((cocos2d::CCNode *)this)->unschedule(0 /*memptr*/);
  ((BLLeakUtils *)this)->share();
  ((BLLeakUtils *)this)->LogClassleak();
  if (*(int *)((int)this + 4*(0x50)) - 1U < 0xe) {
    func_0079e6d0();
    *(char *)(unaff_r6 + (int)((int)this)) = (char)unaff_r7;
    *(char *)(unaff_r5 + 0xd) = (char)unaff_r7;
    *(short *)(*(byte *)(unaff_r7 + 0x15) + 0x2c) = (short)extraout_r1;
    piVar1 = (int *)func_0079e2fc(0x114,extraout_r1,*(undefined2 *)(extraout_r1 + 0x3c),
                                    extraout_r3 + 0x2f);
    0 /* ctorZero */;
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar1))->autorelease();
    }
    (**(code **)(*(int *)this + 0xd0))(((int)this),piVar1,0x1e,5);
    BLGameScene::shareGameScene();
    BLGameScene::enterCity();
  }
  ((BLAchievementManager *)this)->share();
  ((BLAchievementManager *)this)->updateDataToDB();
  return uVar3;
}

void BLGameScene::onRequestGetQQCoinComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::onQQCoinRequestCompleted(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::onGetLivenessTime(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::onLivenessCompleted(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGameScene::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  /* RAW_SLOT_FIX (R73)：原为硬编码槽 `(**(code **)(*piVar1 + 0x40))()`。
     ★ 指令级实证（原版 0x41a29c..0x41a2a4 vs 我们 0x8e9a48..0x8e9a56）：
         原版： ldr r3,[r0] ; ldr r3,[r3,#0x40] ; blx r3      —— 只取一次函数指针就调用
         我们： ldr r0,[r0] ; ldr r0,[r0,#0x40] ; ldr r0,[r0] ; blx r0  —— **多了一次解引用**
       于是跳到"函数第一条字"当地址去执行 -> 野跳转（pc 0x009000b0 落在 .text 中段, <unknown>）。
       槽 0x40 = idx 16，用原版 _ZTVN7cocos2d10CCDirectorE 反查 = CCDirector::getTouchDispatcher()。
       故按"具名化"纪律改写（注意：原版 addTargetedDelegate 的 delegate 实参确实是 this+0xe4，
       那是多重继承下 CCTouchDelegate 子对象偏移，**不要改**）。 */
  {
    cocos2d::CCTouchDispatcher *pTouchDispatcher =
        cocos2d::CCDirector::sharedDirector()->getTouchDispatcher();
    /* GUARD + DIAG (R105)：真机实证 fault addr 0x8 = 在 `addTargetedDelegate` 内部读 `[this+8]`，
       而 this 为 **NULL** —— 即 `getTouchDispatcher()` 返回空。cocos2d 里该指针本应在
       `CCDirector::init()` 里创建（`m_pTouchDispatcher = new CCTouchDispatcher(); init();`），
       我们的 CCDirector::init 是否真的建了它需下一轮核对；这里先判空保护 + 打日志。*/
    if (pTouchDispatcher != 0) {
      pTouchDispatcher->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this + 0xe4), -130, 1);
    }
    else {
      cocos2d::CCLog("DIAG_R105 BLGameScene::onEnter: getTouchDispatcher() == 0 -> 跳过触摸注册");
    }
  }
  /* ★ 基类调用必须是**限定调用**（非虚）：
     `((cocos2d::CCLayer *)((int)this))->onEnter();` 这种写法是**虚分发**，
     会再次派发到 BLGameScene::onEnter -> 无限递归 -> 栈溢出
     （真机 tombstone: BLGameScene::onEnter()+48 重复 100+ 帧, fault 0xa85fbff8）。
     原版 41a2b6 是 `bl 0x765886 <CCLayer::onEnter>`（直接调用）。 */
  cocos2d::CCLayer::onEnter();
  /* RECEIVER_FIX + GUARD (R128)：原为 `((ADManager *)this)->getInstance()` —— **接收者搞错**
     （`getInstance()` 是**静态单例**，却按实例调用）；且其后未判空就读 `iVar3 + 0x70`。
     真机崩溃链（符号化）：nativeRender→mainLoop→drawScene→setNextScene
     →CCTransitionFade/CCTransitionScene::onEnter→CCNode::onEnter→**BLGameScene::onEnter+0x84**，
     正落在本语句。*/
  iVar3 = (undefined4)(intptr_t)(ADManager::getInstance());
  if (iVar3 != 0 && *(char *)(iVar3 + 0x70) != '\0') {
    BLGameScene::requestADValues();
  }
  /* RAW_SLOT_FIX (R73)：原为三个硬编码槽 + 多一次解引用。原版 0x41a2cc..0x41a2e0 实证：
       bl DataManager::shareDataManager()
       ldr r3,[r0] ; ldr r3,[r3,#0x28] ; blx r3      -> DataManager::getUserData()   （槽 0x28 = idx 10）
       ldr r3,[r0] ; adds r3,#0xfc ; ldr r3,[r3,#0x74] ; blx r3  -> UserData::getLivenessUserData()
                                                                   （0xfc+0x74 = 0x170 = idx 92）
       bl LivenessUserData::getItemData(int)
     槽位均由原版 _ZTV11DataManager / _ZTV8UserData 反查确认（slotname.js）。 */
  DataManager *pDataManager = (DataManager *)(intptr_t)((DataManager *)this)->shareDataManager();
  UserData *pUserData = (pDataManager != 0) ? pDataManager->getUserData() : 0;
  LivenessUserData *pLivenessUserData = (pUserData != 0) ? pUserData->getLivenessUserData() : 0;
  /* NULL_GUARD (R129)：原代码在 `getItemData()` 之后**直接**读 `*(int *)(iVar3 + 8)`，
     而真机实测该返回值是 **0**（首次运行、数据库刚建、还没有这条记录）→ 读 `[0+8]`
     → `fault addr 0x8`（反汇编已证明：`ldr r0,[r0,#8]` @0x37e894，紧跟在 `bl getItemData` 之后）。
     语义上"返回空"就等于"没有这条记录"，所以把空并入原来 `== 0` 的分支（即：没有记录就补记一次）。*/
  iVar3 = (pLivenessUserData != 0) ? (undefined4)(intptr_t)(pLivenessUserData->getItemData(g_0042a308)) : 0;
  if (iVar3 == 0 || *(int *)(iVar3 + 8) == 0) {
    DataManager *pDataManager2 = (DataManager *)(intptr_t)((DataManager *)this)->shareDataManager();
    UserData *pUserData2 = pDataManager2->getUserData();
    LivenessUserData *pLivenessUserData2 = pUserData2->getLivenessUserData();
    pLivenessUserData2->statisticsData(g_0042a308, 1);
  }
  return;
}

void BLGameScene::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar1)->setFloatForKey((char const*)((intptr_t)"KEY_WINTOPGIFT_TIME"), *(undefined4 *)(((int)this) + 0x154));
  cocos2d::CCUserDefault::sharedUserDefault();
  ((cocos2d::CCUserDefault *)this)->flush();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLGameScene::init()
{
  /* IMPL_FIX (R164)：原为空占位（直接 return 0）—— 这是黑屏的根因之一：
     层从未真正初始化，自然也没有任何 UI 子节点（真机：BLGameScene children=0）。
     下面这两步由原版反汇编**逐条实证**（原版 .so = work/apktool_out/lib/armeabi/libcocos2dcpp.so）：
       0x41a34c: bl cocos2d::CCLayer::init()      → 先调基类
       0x41a352: bne 0x41a356                     → 基类失败则走 return false
       0x41a356: bl DataManager::shareDataManager()
     后续原版依次还有：Toast::sharedToast()（0x41a3da）、setGameStatus（0x41a3f4）、
     schedule(…)（0x41a406）、setBackgroundMusicVolume/setEffectsVolume（0x41a424/0x41a442）、
     requestVip（0x41a458）、**CCSprite::create(…)（0x41a47c ← UI 构建开始）**…
     —— 那些调用的**参数/字符串/回调需先从原版取出才能忠实补写**（下一轮），
     本轮先落地“可证、无需猜”的最小子集。*/
  if (!cocos2d::CCLayer::init())
  {
    return false;
  }
  /* ????????? shareDataManager ?**???**???? ADManager::getInstance ??????
     ????????????????????*/
  DataManager *pDataManager = (DataManager *)(intptr_t)((DataManager *)this)->shareDataManager();
  (void)pDataManager;

  /* UI构建（原版反汇编逐条实证）：
       0x41a478-47c: CCSprite::create(<字符串>)   图片名 "loadC.png"
                     （由字面量 0x41a4c0 值 0x5f5a02 + pc 解出：字符串在 0xa0fe80）
       0x41a48a:     精灵的虚方法（槽 0x90，setPosition 之类）—— 参数 r5 尚未取出，暂不猜写
       0x41a496:     this->addChild(pSprite)   槽 0xC8 = CCNode::addChild（R73 已针对本类实证）*/
  cocos2d::CCSprite *pSprite = cocos2d::CCSprite::create("loadC.png");
  if (pSprite != 0)
  {
    CCLog("DIAG_R169 BLGameScene::init addChild(sprite) pSprite=%p", (void *)pSprite);
    this->addChild(pSprite);
  }
  BLGameScene::setGameStatus((EnumGameSceneStatus)1);          /* R199: orig 0x41a3f2/0x41a3f4 */
  this->schedule(schedule_selector(BLGameScene::tick));         /* R199: orig 0x41a3f8-0x41a406, selector=BLGameScene::tick */
  /* R225: original BLGameScene::init also calls requestVip(NULL) at 0x41a458 (argument evidenced).
     requestVip is currently a placeholder, so this call is inert-but-faithful for now. */
  BLGameScene::requestVip(0);
  return true;
}

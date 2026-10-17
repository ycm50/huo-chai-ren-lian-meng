#include "BLBackPackLayer.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLBackPackItemNumLayer.h"
#include "BLGridView.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLListButton.h"
#include "BLSuitItemDataInfoPresenter.h"
#include "BLSuitItemDataInfoView.h"
#include "BackPackData.h"
#include "CommonUseData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ImmortalsRoleData.h"
#include "ImmortalsRoleItemData.h"
#include "ItemData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_004f8692(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f5ab0;
extern "C" unsigned long UNK_004f5ac8;
extern "C" unsigned long UNK_004f5ae0;
extern "C" unsigned long UNK_004f5af8;
extern "C" unsigned long UNK_004f5b10;
extern "C" unsigned long UNK_004f5b80;
extern "C" unsigned long UNK_004f5bf4;
extern "C" unsigned long UNK_004f5c3e;
extern "C" unsigned long UNK_004f5c4a;
extern "C" unsigned long UNK_004f5c6a;
extern "C" unsigned long UNK_004f5cf8;
extern "C" unsigned long UNK_004f5da4;
extern "C" unsigned long UNK_004f5fb0;
extern "C" unsigned long UNK_004f6040;
extern "C" unsigned long UNK_004f6068;
extern "C" unsigned long UNK_004f608e;
extern "C" unsigned long UNK_004f60f2;
extern "C" unsigned long UNK_004f6424;
extern "C" unsigned long UNK_004f6478;
extern "C" unsigned long UNK_004f6488;
extern "C" unsigned long UNK_004f6b28;
extern "C" unsigned long UNK_004f6b40;
extern "C" unsigned long UNK_004f6d10;
extern "C" unsigned long UNK_004f7082;
extern "C" unsigned long UNK_004f70da;
extern "C" unsigned long UNK_004f7182;
extern "C" unsigned long UNK_004f792a;
extern "C" unsigned long UNK_004f792c;
extern "C" unsigned long UNK_004f7944;
extern "C" unsigned long UNK_004f7946;
extern "C" unsigned long UNK_004f797c;
extern "C" unsigned long UNK_004f798a;
extern "C" unsigned long UNK_004f79d6;
extern "C" unsigned long UNK_004f7a24;
extern "C" unsigned long UNK_004f7a3c;
extern "C" unsigned long UNK_004f7a8c;
extern "C" unsigned long UNK_004f7aa4;
extern "C" unsigned long UNK_004f7af0;
extern "C" unsigned long UNK_004f7b8a;
extern "C" unsigned long UNK_004f7bfe;
extern "C" unsigned long UNK_004f7c34;
extern "C" unsigned long UNK_004f7c68;
extern "C" unsigned long UNK_004f7c9e;
extern "C" unsigned long UNK_004f7cd2;
extern "C" unsigned long UNK_004f7d08;
extern "C" unsigned long UNK_004f7d40;
extern "C" unsigned long UNK_004f7d5e;
extern "C" unsigned long UNK_004f7d7a;
extern "C" unsigned long UNK_004f7d96;
extern "C" unsigned long UNK_004f7db2;
extern "C" unsigned long UNK_004f7dce;
extern "C" unsigned long UNK_004f7dea;
extern "C" unsigned long UNK_004f7e0e;
extern "C" unsigned long UNK_004f7e2c;
extern "C" unsigned long UNK_004f7e48;
extern "C" unsigned long UNK_004f7e64;
extern "C" unsigned long UNK_004f7e80;
extern "C" unsigned long UNK_004f7e9c;
extern "C" unsigned long UNK_004f7eb8;
extern "C" unsigned long UNK_004f7eee;
extern "C" unsigned long UNK_004f7eef;
extern "C" unsigned long UNK_004f7ef0;
extern "C" unsigned long UNK_004f8162;
extern "C" unsigned long UNK_004f82be;
extern "C" unsigned long UNK_004f82da;
extern "C" unsigned long UNK_004f8340;
extern "C" unsigned long UNK_004f8354;
extern "C" unsigned long UNK_004f8356;
extern "C" unsigned long UNK_004f83ae;
extern "C" unsigned long UNK_004f840e;
extern "C" unsigned long UNK_004f844a;
extern "C" unsigned long UNK_004f844c;
extern "C" unsigned long UNK_004f845f;
extern "C" unsigned long UNK_004f8490;
extern "C" unsigned long UNK_004f8550;
extern "C" unsigned long UNK_004f8584;
extern "C" unsigned long UNK_004f8586;
extern "C" unsigned long UNK_004f8597;
extern "C" unsigned long UNK_00787878;
extern "C" unsigned long _DAT_004f5fa0;
extern "C" unsigned long _DAT_004f5fa4;
extern "C" unsigned long _UNK_004f5ab4;
extern "C" unsigned long _UNK_004f5acc;
extern "C" unsigned long _UNK_004f5ae4;
extern "C" unsigned long _UNK_004f5afc;
extern "C" unsigned long _UNK_004f5b14;
extern "C" unsigned long _UNK_004f5b70;
extern "C" unsigned long _UNK_004f5b84;
extern "C" unsigned long _UNK_004f5bd8;
extern "C" unsigned long _UNK_004f5bdc;
extern "C" unsigned long _UNK_004f5be0;
extern "C" unsigned long _UNK_004f5bf8;
extern "C" unsigned long _UNK_004f5d6c;
extern "C" unsigned long _UNK_004f5d70;
extern "C" unsigned long _UNK_004f5d74;
extern "C" unsigned long _UNK_004f5d78;
extern "C" unsigned long _UNK_004f5d7c;
extern "C" unsigned long _UNK_004f5d80;
extern "C" unsigned long _UNK_004f5da8;
extern "C" unsigned long _UNK_004f6030;
extern "C" unsigned long _UNK_004f6044;
extern "C" unsigned long _UNK_004f606c;
extern "C" unsigned long _UNK_004f635c;
extern "C" unsigned long _UNK_004f6360;
extern "C" unsigned long _UNK_004f6364;
extern "C" unsigned long _UNK_004f6368;
extern "C" unsigned long _UNK_004f636c;
extern "C" unsigned long _UNK_004f6370;
extern "C" unsigned long _UNK_004f6374;
extern "C" unsigned long _UNK_004f6428;
extern "C" unsigned long _UNK_004f6694;
extern "C" unsigned long _UNK_004f6698;
extern "C" unsigned long _UNK_004f669c;
extern "C" unsigned long _UNK_004f66a0;
extern "C" unsigned long _UNK_004f66a4;
extern "C" unsigned long _UNK_004f66a8;
extern "C" unsigned long _UNK_004f66ac;
extern "C" unsigned long _UNK_004f66b0;
extern "C" unsigned long _UNK_004f66b4;
extern "C" unsigned long _UNK_004f66b8;
extern "C" unsigned long _UNK_004f68c4;
extern "C" unsigned long _UNK_004f68c8;
extern "C" unsigned long _UNK_004f68cc;
extern "C" unsigned long _UNK_004f68d0;
extern "C" unsigned long _UNK_004f68d4;
extern "C" unsigned long _UNK_004f68d8;
extern "C" unsigned long _UNK_004f68dc;
extern "C" unsigned long _UNK_004f68e0;
extern "C" unsigned long _UNK_004f68e4;
extern "C" unsigned long _UNK_004f6af8;
extern "C" unsigned long _UNK_004f6afc;
extern "C" unsigned long _UNK_004f6b00;
extern "C" unsigned long _UNK_004f6b04;
extern "C" unsigned long _UNK_004f6b08;
extern "C" unsigned long _UNK_004f6b0c;
extern "C" unsigned long _UNK_004f6b10;
extern "C" unsigned long _UNK_004f6b14;
extern "C" unsigned long _UNK_004f6b18;
extern "C" unsigned long _UNK_004f6b2c;
extern "C" unsigned long _UNK_004f6e54;
extern "C" unsigned long _UNK_004f6e58;
extern "C" unsigned long _UNK_004f6e5c;
extern "C" unsigned long _UNK_004f6e60;
extern "C" unsigned long _UNK_004f6e64;
extern "C" unsigned long _UNK_004f6e68;
extern "C" unsigned long _UNK_004f6e6c;
extern "C" unsigned long _UNK_004f6e70;
extern "C" unsigned long _UNK_004f6e74;
extern "C" unsigned long _UNK_004f7130;
extern "C" unsigned long _UNK_004f7134;
extern "C" unsigned long _UNK_004f7138;
extern "C" unsigned long _UNK_004f713c;
extern "C" unsigned long _UNK_004f73a8;
extern "C" unsigned long _UNK_004f73ac;
extern "C" unsigned long _UNK_004f73b0;
extern "C" unsigned long _UNK_004f73b4;
extern "C" unsigned long _UNK_004f73b8;
extern "C" unsigned long _UNK_004f73bc;
extern "C" unsigned long _UNK_004f73c0;
extern "C" unsigned long _UNK_004f73c4;
extern "C" unsigned long _UNK_004f73c8;
extern "C" unsigned long _UNK_004f7778;
extern "C" unsigned long _UNK_004f777c;
extern "C" unsigned long _UNK_004f7780;
extern "C" unsigned long _UNK_004f7784;
extern "C" unsigned long _UNK_004f7788;
extern "C" unsigned long _UNK_004f778c;
extern "C" unsigned long _UNK_004f7790;
extern "C" unsigned long _UNK_004f7794;
extern "C" unsigned long _UNK_004f7798;
extern "C" unsigned long _UNK_004f779c;
extern "C" unsigned long _UNK_004f795c;
extern "C" unsigned long _UNK_004f7960;
extern "C" unsigned long _UNK_004f7964;
extern "C" unsigned long _UNK_004f7968;
extern "C" unsigned long _UNK_004f79b0;
extern "C" unsigned long _UNK_004f79b4;
extern "C" unsigned long _UNK_004f7b9c;
extern "C" unsigned long _UNK_004f7ba0;
extern "C" unsigned long _UNK_004f7ba4;
extern "C" unsigned long _UNK_004f7ba8;
extern "C" unsigned long _UNK_004f7bac;
extern "C" unsigned long _UNK_004f7bb0;
extern "C" unsigned long _UNK_004f7bb4;
extern "C" unsigned long _UNK_004f7bb8;
extern "C" unsigned long _UNK_004f7bbc;
extern "C" unsigned long _UNK_004f7bc0;
extern "C" unsigned long _UNK_004f7bc4;
extern "C" unsigned long _UNK_004f7bc8;
extern "C" unsigned long _UNK_004f7bcc;
extern "C" unsigned long _UNK_004f7fc0;
extern "C" unsigned long _UNK_004f7fc4;
extern "C" unsigned long _UNK_004f7fc8;
extern "C" unsigned long _UNK_004f7fcc;
extern "C" unsigned long _UNK_004f7fd0;
extern "C" unsigned long _UNK_004f7fd4;
extern "C" unsigned long _UNK_004f7fd8;
extern "C" unsigned long _UNK_004f7fdc;
extern "C" unsigned long _UNK_004f7fe0;
extern "C" unsigned long _UNK_004f7fe4;
extern "C" unsigned long _UNK_004f7fe8;
extern "C" unsigned long _UNK_004f7fec;
extern "C" unsigned long _UNK_004f7ff0;
extern "C" unsigned long _UNK_004f7ff4;
extern "C" unsigned long _UNK_004f7ff8;
extern "C" unsigned long _UNK_004f7ffc;
extern "C" unsigned long _UNK_004f8000;
extern "C" unsigned long _UNK_004f8004;
extern "C" unsigned long _UNK_004f8008;
extern "C" unsigned long _UNK_004f800c;
extern "C" unsigned long _UNK_004f8010;
extern "C" unsigned long _UNK_004f8014;
extern "C" unsigned long _UNK_004f8018;
extern "C" unsigned long _UNK_004f8074;
extern "C" unsigned long _UNK_004f84d0;
extern "C" unsigned long _UNK_004f84d4;
extern "C" unsigned long _UNK_004f84d8;
extern "C" unsigned long _UNK_004f84dc;
extern "C" unsigned long _UNK_004f84e0;
extern "C" unsigned long _UNK_004f84e4;
extern "C" unsigned long _UNK_004f84e8;
extern "C" unsigned long _UNK_004f84ec;
extern "C" unsigned long _UNK_004f84f0;
extern "C" unsigned long _UNK_004f84f4;
extern "C" unsigned long _UNK_004f84f8;
extern "C" unsigned long _UNK_004f84fc;
extern "C" unsigned long _UNK_004f8500;
extern "C" unsigned long _UNK_004f8504;
extern "C" unsigned long _UNK_004f8508;
extern "C" unsigned long _UNK_004f850c;
extern "C" unsigned long _UNK_004f8510;
extern "C" unsigned long _UNK_004f8514;
extern "C" unsigned long _UNK_004f8518;
extern "C" unsigned long _UNK_004f851c;
extern "C" unsigned long _UNK_004f8520;
extern "C" unsigned long _UNK_004f8524;
extern "C" unsigned long _UNK_004f8528;
extern "C" unsigned long _UNK_004f852c;
extern "C" unsigned long _UNK_004f86a8;
extern "C" unsigned long _UNK_004f86ac;
extern "C" unsigned long _UNK_004f86b0;
extern "C" unsigned long _UNK_004f86b4;
extern "C" unsigned long _UNK_004f86b8;
extern "C" unsigned long _UNK_004f86bc;
extern "C" unsigned long _UNK_004f86c0;
extern "C" unsigned long g_004f5ab0;
extern "C" unsigned long g_004f5ab4;
extern "C" unsigned long g_004f5ac8;
extern "C" unsigned long g_004f5acc;
extern "C" unsigned long g_004f5ae0;
extern "C" unsigned long g_004f5ae4;
extern "C" unsigned long g_004f5af8;
extern "C" unsigned long g_004f5afc;
extern "C" unsigned long g_004f5b10;
extern "C" unsigned long g_004f5b14;
extern "C" unsigned long g_004f5b70;
extern "C" unsigned long g_004f5b80;
extern "C" unsigned long g_004f5b84;
extern "C" unsigned long g_004f5bd8;
extern "C" unsigned long g_004f5bdc;
extern "C" unsigned long g_004f5be0;
extern "C" unsigned long g_004f5bf4;
extern "C" unsigned long g_004f5bf8;
extern "C" unsigned long g_004f5c3e;
extern "C" unsigned long g_004f5c4a;
extern "C" unsigned long g_004f5c6a;
extern "C" unsigned long g_004f5cf8;
extern "C" unsigned long g_004f5d6c;
extern "C" unsigned long g_004f5d70;
extern "C" unsigned long g_004f5d74;
extern "C" unsigned long g_004f5d78;
extern "C" unsigned long g_004f5d7c;
extern "C" unsigned long g_004f5d80;
extern "C" unsigned long g_004f5da4;
extern "C" unsigned long g_004f5da8;
extern "C" unsigned long g_004f5fa0;
extern "C" unsigned long g_004f5fa4;
extern "C" unsigned long g_004f5fb0;
extern "C" unsigned long g_004f6030;
extern "C" unsigned long g_004f6040;
extern "C" unsigned long g_004f6044;
extern "C" unsigned long g_004f6068;
extern "C" unsigned long g_004f606c;
extern "C" unsigned long g_004f608e;
extern "C" unsigned long g_004f60f2;
extern "C" unsigned long g_004f635c;
extern "C" unsigned long g_004f6360;
extern "C" unsigned long g_004f6364;
extern "C" unsigned long g_004f6368;
extern "C" unsigned long g_004f636c;
extern "C" unsigned long g_004f6370;
extern "C" unsigned long g_004f6374;
extern "C" unsigned long g_004f6424;
extern "C" unsigned long g_004f6428;
extern "C" unsigned long g_004f6478;
extern "C" unsigned long g_004f6488;
extern "C" unsigned long g_004f6694;
extern "C" unsigned long g_004f6698;
extern "C" unsigned long g_004f669c;
extern "C" unsigned long g_004f66a0;
extern "C" unsigned long g_004f66a4;
extern "C" unsigned long g_004f66a8;
extern "C" unsigned long g_004f66ac;
extern "C" unsigned long g_004f66b0;
extern "C" unsigned long g_004f66b4;
extern "C" unsigned long g_004f66b8;
extern "C" unsigned long g_004f68c4;
extern "C" unsigned long g_004f68c8;
extern "C" unsigned long g_004f68cc;
extern "C" unsigned long g_004f68d0;
extern "C" unsigned long g_004f68d4;
extern "C" unsigned long g_004f68d8;
extern "C" unsigned long g_004f68dc;
extern "C" unsigned long g_004f68e0;
extern "C" unsigned long g_004f68e4;
extern "C" unsigned long g_004f6af8;
extern "C" unsigned long g_004f6afc;
extern "C" unsigned long g_004f6b00;
extern "C" unsigned long g_004f6b04;
extern "C" unsigned long g_004f6b08;
extern "C" unsigned long g_004f6b0c;
extern "C" unsigned long g_004f6b10;
extern "C" unsigned long g_004f6b14;
extern "C" unsigned long g_004f6b18;
extern "C" unsigned long g_004f6b28;
extern "C" unsigned long g_004f6b2c;
extern "C" unsigned long g_004f6b40;
extern "C" unsigned long g_004f6d10;
extern "C" unsigned long g_004f6e54;
extern "C" unsigned long g_004f6e58;
extern "C" unsigned long g_004f6e5c;
extern "C" unsigned long g_004f6e60;
extern "C" unsigned long g_004f6e64;
extern "C" unsigned long g_004f6e68;
extern "C" unsigned long g_004f6e6c;
extern "C" unsigned long g_004f6e70;
extern "C" unsigned long g_004f6e74;
extern "C" unsigned long g_004f7082;
extern "C" unsigned long g_004f70da;
extern "C" unsigned long g_004f7130;
extern "C" unsigned long g_004f7134;
extern "C" unsigned long g_004f7138;
extern "C" unsigned long g_004f713c;
extern "C" unsigned long g_004f7182;
extern "C" unsigned long g_004f73a8;
extern "C" unsigned long g_004f73ac;
extern "C" unsigned long g_004f73b0;
extern "C" unsigned long g_004f73b4;
extern "C" unsigned long g_004f73b8;
extern "C" unsigned long g_004f73bc;
extern "C" unsigned long g_004f73c0;
extern "C" unsigned long g_004f73c4;
extern "C" unsigned long g_004f73c8;
extern "C" unsigned long g_004f7778;
extern "C" unsigned long g_004f777c;
extern "C" unsigned long g_004f7780;
extern "C" unsigned long g_004f7784;
extern "C" unsigned long g_004f7788;
extern "C" unsigned long g_004f778c;
extern "C" unsigned long g_004f7790;
extern "C" unsigned long g_004f7794;
extern "C" unsigned long g_004f7798;
extern "C" unsigned long g_004f779c;
extern "C" unsigned long g_004f792a;
extern "C" unsigned long g_004f792c;
extern "C" unsigned long g_004f7944;
extern "C" unsigned long g_004f7946;
extern "C" unsigned long g_004f795c;
extern "C" unsigned long g_004f7960;
extern "C" unsigned long g_004f7964;
extern "C" unsigned long g_004f7968;
extern "C" unsigned long g_004f797c;
extern "C" unsigned long g_004f798a;
extern "C" unsigned long g_004f79b0;
extern "C" unsigned long g_004f79b4;
extern "C" unsigned long g_004f79d6;
extern "C" unsigned long g_004f7a24;
extern "C" unsigned long g_004f7a3c;
extern "C" unsigned long g_004f7a8c;
extern "C" unsigned long g_004f7aa4;
extern "C" unsigned long g_004f7af0;
extern "C" unsigned long g_004f7b8a;
extern "C" unsigned long g_004f7b9c;
extern "C" unsigned long g_004f7ba0;
extern "C" unsigned long g_004f7ba4;
extern "C" unsigned long g_004f7ba8;
extern "C" unsigned long g_004f7bac;
extern "C" unsigned long g_004f7bb0;
extern "C" unsigned long g_004f7bb4;
extern "C" unsigned long g_004f7bb8;
extern "C" unsigned long g_004f7bbc;
extern "C" unsigned long g_004f7bc0;
extern "C" unsigned long g_004f7bc4;
extern "C" unsigned long g_004f7bc8;
extern "C" unsigned long g_004f7bcc;
extern "C" unsigned long g_004f7bfe;
extern "C" unsigned long g_004f7c34;
extern "C" unsigned long g_004f7c68;
extern "C" unsigned long g_004f7c9e;
extern "C" unsigned long g_004f7cd2;
extern "C" unsigned long g_004f7d08;
extern "C" unsigned long g_004f7d40;
extern "C" unsigned long g_004f7d5e;
extern "C" unsigned long g_004f7d7a;
extern "C" unsigned long g_004f7d96;
extern "C" unsigned long g_004f7db2;
extern "C" unsigned long g_004f7dce;
extern "C" unsigned long g_004f7dea;
extern "C" unsigned long g_004f7e0e;
extern "C" unsigned long g_004f7e2c;
extern "C" unsigned long g_004f7e48;
extern "C" unsigned long g_004f7e64;
extern "C" unsigned long g_004f7e80;
extern "C" unsigned long g_004f7e9c;
extern "C" unsigned long g_004f7eb8;
extern "C" unsigned long g_004f7eee;
extern "C" unsigned long g_004f7eef;
extern "C" unsigned long g_004f7ef0;
extern "C" unsigned long g_004f7fc0;
extern "C" unsigned long g_004f7fc4;
extern "C" unsigned long g_004f7fc8;
extern "C" unsigned long g_004f7fcc;
extern "C" unsigned long g_004f7fd0;
extern "C" unsigned long g_004f7fd4;
extern "C" unsigned long g_004f7fd8;
extern "C" unsigned long g_004f7fdc;
extern "C" unsigned long g_004f7fe0;
extern "C" unsigned long g_004f7fe4;
extern "C" unsigned long g_004f7fe8;
extern "C" unsigned long g_004f7fec;
extern "C" unsigned long g_004f7ff0;
extern "C" unsigned long g_004f7ff4;
extern "C" unsigned long g_004f7ff8;
extern "C" unsigned long g_004f7ffc;
extern "C" unsigned long g_004f8000;
extern "C" unsigned long g_004f8004;
extern "C" unsigned long g_004f8008;
extern "C" unsigned long g_004f800c;
extern "C" unsigned long g_004f8010;
extern "C" unsigned long g_004f8014;
extern "C" unsigned long g_004f8018;
extern "C" unsigned long g_004f8074;
extern "C" unsigned long g_004f8162;
extern "C" unsigned long g_004f82be;
extern "C" unsigned long g_004f82da;
extern "C" unsigned long g_004f8340;
extern "C" unsigned long g_004f8354;
extern "C" unsigned long g_004f8356;
extern "C" unsigned long g_004f83ae;
extern "C" unsigned long g_004f840e;
extern "C" unsigned long g_004f844a;
extern "C" unsigned long g_004f844c;
extern "C" unsigned long g_004f845f;
extern "C" unsigned long g_004f8490;
extern "C" unsigned long g_004f84d0;
extern "C" unsigned long g_004f84d4;
extern "C" unsigned long g_004f84d8;
extern "C" unsigned long g_004f84dc;
extern "C" unsigned long g_004f84e0;
extern "C" unsigned long g_004f84e4;
extern "C" unsigned long g_004f84e8;
extern "C" unsigned long g_004f84ec;
extern "C" unsigned long g_004f84f0;
extern "C" unsigned long g_004f84f4;
extern "C" unsigned long g_004f84f8;
extern "C" unsigned long g_004f84fc;
extern "C" unsigned long g_004f8500;
extern "C" unsigned long g_004f8504;
extern "C" unsigned long g_004f8508;
extern "C" unsigned long g_004f850c;
extern "C" unsigned long g_004f8510;
extern "C" unsigned long g_004f8514;
extern "C" unsigned long g_004f8518;
extern "C" unsigned long g_004f851c;
extern "C" unsigned long g_004f8520;
extern "C" unsigned long g_004f8524;
extern "C" unsigned long g_004f8528;
extern "C" unsigned long g_004f852c;
extern "C" unsigned long g_004f8550;
extern "C" unsigned long g_004f8584;
extern "C" unsigned long g_004f8586;
extern "C" unsigned long g_004f8597;
extern "C" unsigned long g_004f86a8;
extern "C" unsigned long g_004f86ac;
extern "C" unsigned long g_004f86b0;
extern "C" unsigned long g_004f86b4;
extern "C" unsigned long g_004f86b8;
extern "C" unsigned long g_004f86bc;
extern "C" unsigned long g_004f86c0;
extern "C" unsigned long g_00787878;
bool BLBackPackLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBackPackLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBackPackLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBackPackLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLBackPackLayer::numOfColumn(BLGridView* p1)
{
  return 5;
}

undefined4 BLBackPackLayer::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

undefined4 BLBackPackLayer::numOfRow(BLGridView* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x120))->count();
  uVar4 = ((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(iVar1 + (*(int *)(((int)this) + 0x14c) - *(int *)(((int)this) + 0x148) >> 2)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar4))|(((long long)(unsigned)((int)((ulonglong)uVar4 >> 0x20)))<<32)),(((long long)(unsigned)(g_004f5bd8))|(((long long)(unsigned)(g_004f5bdc))<<32))))));
  (void)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar4))|(((long long)(unsigned)((int)((ulonglong)uVar4 >> 0x20)))<<32)),(((long long)(unsigned)(g_004f5bd8))|(((long long)(unsigned)(g_004f5bdc))<<32))))))))));
  uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=::ceilf(_f);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar4))|(((long long)(unsigned)((int)((ulonglong)uVar4 >> 0x20)))<<32)),(((long long)(unsigned)(g_004f5bd8))|(((long long)(unsigned)(g_004f5bdc))<<32))))))))))))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(g_004f5be0))));
  uVar3 = (undefined4)(6);
  if (iVar1 == 0) {
    uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar2)))));
  }
  return uVar3;
}

void BLBackPackLayer::onCloseClice(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1e);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb5);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x20);
  return;
}


void BLBackPackLayer::onArrange(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x50))();
  ((BackPackData *)this)->arrangeItems();
  uVar2 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar2)->showToast((char const*)&g_004f5da4 + g_004f5da8);
  return;
}

BLBackPackLayer::BLBackPackLayer()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)(g_004f5fa0 + 0x4f5ef4));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x25c;
  *(int *)((int)this + 4*(0x42)) = iVar3 + 0x26c;
  *(int *)((int)this + 4*(0x43)) = iVar3 + 0x27c;
  *(int *)((int)this + 4*(0x44)) = iVar3 + 0x294;
  *(int *)((int)this + 4*(0x52)) = 0;
  *(int *)((int)this + 4*(0x53)) = 0;
  *(int *)((int)this + 4*(0x54)) = 0;
  *(int *)((int)this + 4*(0x51)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x48)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4f)) = g_004f5fa4;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  *(int *)((int)this + 4*(0x50)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 1);
  *(int *)((int)this + 4*(0x53)) = *(int *)((int)this + 4*(0x52));
  return;
}

BLBackPackLayer::~BLBackPackLayer()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004f5fb0 + (intptr_t)(g_004f6030))));
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x25c;
  *(int *)((int)this + 4*(0x42)) = iVar1 + 0x26c;
  *(int *)((int)this + 4*(0x43)) = iVar1 + 0x27c;
  *(int *)((int)this + 4*(0x44)) = iVar1 + 0x294;
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  *(int *)((int)this + 4*(0x53)) = *(int *)((int)this + 4*(0x52));
  ((std::vector<ImmortalsRoleItemData*, std::allocator<ImmortalsRoleItemData*>> *)((int)this) + 0x52)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}






void BLBackPackLayer::onBackPackUpdate(cocos2d::CCObject* p1)
{
  BLBackPackLayer::sortBackPackData();
  BLBackPackLayer::onSelectNextItem(0);
  return;
}


void BLBackPackLayer::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004f797c + g_004f79b0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004f798a + g_004f79b4);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLBackPackLayer::onSell(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackLayer::sortBackPackData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackLayer::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar4 = (undefined4)(6);
  if ((p2 != 4) && (uVar4 = 8, p2 != 5)) {
    if (p2 != 6) {
      *(int *)(((int)this) + 0x140) = p2;
      goto code_r0x004f6398;
    }
    uVar4 = (undefined4)(7);
  }
  *(undefined4 *)(((int)this) + 0x140) = uVar4;
code_r0x004f6398:
  BLBackPackLayer::sortBackPackData();
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  (**(code **)(**(int **)(((int)this) + 0x11c) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(uStack_1c);
  uVar3 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uVar4));
  if (iVar1 != 0) {
    (**(code **)(**(int **)(((int)this) + 0x11c) + 0x1f8))(auStack_20);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
  }
  (**(code **)(**(int **)(((int)this) + 0x11c) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  uVar4 = (undefined4)(func_0079e57c(uStack_1c,uVar4));
  *(undefined4 *)(((int)this) + 0x13c) = uVar4;
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x11c));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(uVar2))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLBackPackLayer::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackLayer::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackLayer::onSelectNextItem(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackLayer::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLBackPackLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

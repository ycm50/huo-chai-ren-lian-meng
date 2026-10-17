#include "BLRoleInfoView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCArray.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLPageLayer.h"
#include "BLRoleInfoPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00681f36(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0067dd3c;
extern "C" unsigned long UNK_0067dd8e;
extern "C" unsigned long UNK_0067ddd4;
extern "C" unsigned long UNK_0067ddfc;
extern "C" unsigned long UNK_0067de44;
extern "C" unsigned long UNK_0067de80;
extern "C" unsigned long UNK_0067e11a;
extern "C" unsigned long UNK_0067e200;
extern "C" unsigned long UNK_0067e298;
extern "C" unsigned long UNK_0067e338;
extern "C" unsigned long UNK_0067e422;
extern "C" unsigned long UNK_0067e44c;
extern "C" unsigned long UNK_0067e4fa;
extern "C" unsigned long UNK_0067e5da;
extern "C" unsigned long UNK_0067e674;
extern "C" unsigned long UNK_0067e70c;
extern "C" unsigned long UNK_0067e7a2;
extern "C" unsigned long UNK_0067e83c;
extern "C" unsigned long UNK_0067e8de;
extern "C" unsigned long UNK_0067e9b0;
extern "C" unsigned long UNK_0067ea50;
extern "C" unsigned long UNK_0067eaf0;
extern "C" unsigned long UNK_0067ebc4;
extern "C" unsigned long UNK_0067ecf2;
extern "C" unsigned long UNK_0067ed64;
extern "C" unsigned long UNK_0067eda2;
extern "C" unsigned long UNK_0067ee88;
extern "C" unsigned long UNK_0067ef74;
extern "C" unsigned long UNK_0067ef9e;
extern "C" unsigned long UNK_0067f052;
extern "C" unsigned long UNK_0067f13c;
extern "C" unsigned long UNK_0067f1b8;
extern "C" unsigned long UNK_0067f278;
extern "C" unsigned long UNK_0067f2a2;
extern "C" unsigned long UNK_0067f366;
extern "C" unsigned long UNK_0067f390;
extern "C" unsigned long UNK_0067f44e;
extern "C" unsigned long UNK_0067f482;
extern "C" unsigned long UNK_0067f546;
extern "C" unsigned long UNK_0067f570;
extern "C" unsigned long UNK_0067f66e;
extern "C" unsigned long UNK_0067f698;
extern "C" unsigned long UNK_0067f75c;
extern "C" unsigned long UNK_0067f786;
extern "C" unsigned long UNK_0067f846;
extern "C" unsigned long UNK_0067f870;
extern "C" unsigned long UNK_0067f938;
extern "C" unsigned long UNK_0067f962;
extern "C" unsigned long UNK_0067fa68;
extern "C" unsigned long UNK_0067fa92;
extern "C" unsigned long UNK_0067fb5a;
extern "C" unsigned long UNK_0067fb84;
extern "C" unsigned long UNK_0067fc46;
extern "C" unsigned long UNK_0067fc7a;
extern "C" unsigned long UNK_0067fd42;
extern "C" unsigned long UNK_0067fd6c;
extern "C" unsigned long UNK_0067fe36;
extern "C" unsigned long UNK_0067fe9e;
extern "C" unsigned long UNK_0067ff74;
extern "C" unsigned long UNK_0067ff9e;
extern "C" unsigned long UNK_00680072;
extern "C" unsigned long UNK_0068009c;
extern "C" unsigned long UNK_006801b4;
extern "C" unsigned long UNK_006802fe;
extern "C" unsigned long UNK_00680328;
extern "C" unsigned long UNK_006803f8;
extern "C" unsigned long UNK_00680422;
extern "C" unsigned long UNK_006804f6;
extern "C" unsigned long UNK_00680520;
extern "C" unsigned long UNK_006805f2;
extern "C" unsigned long UNK_00680626;
extern "C" unsigned long UNK_0068073a;
extern "C" unsigned long UNK_00680764;
extern "C" unsigned long UNK_00680838;
extern "C" unsigned long UNK_00680862;
extern "C" unsigned long UNK_00680934;
extern "C" unsigned long UNK_00680964;
extern "C" unsigned long UNK_00680a52;
extern "C" unsigned long UNK_00680a80;
extern "C" unsigned long UNK_00680ba0;
extern "C" unsigned long UNK_00680bca;
extern "C" unsigned long UNK_00680c9a;
extern "C" unsigned long UNK_00680cc4;
extern "C" unsigned long UNK_00680d90;
extern "C" unsigned long UNK_00680dba;
extern "C" unsigned long UNK_00680e8a;
extern "C" unsigned long UNK_00680eb4;
extern "C" unsigned long UNK_00680f7c;
extern "C" unsigned long UNK_00680ff0;
extern "C" unsigned long UNK_006810c2;
extern "C" unsigned long UNK_006810f6;
extern "C" unsigned long UNK_006811c6;
extern "C" unsigned long UNK_006811f0;
extern "C" unsigned long UNK_006812c0;
extern "C" unsigned long UNK_006812ea;
extern "C" unsigned long UNK_006813ba;
extern "C" unsigned long UNK_00681428;
extern "C" unsigned long UNK_006814f8;
extern "C" unsigned long UNK_00681522;
extern "C" unsigned long UNK_006815f2;
extern "C" unsigned long UNK_0068161c;
extern "C" unsigned long UNK_006816ec;
extern "C" unsigned long UNK_00681716;
extern "C" unsigned long UNK_006817e6;
extern "C" unsigned long UNK_00681850;
extern "C" unsigned long UNK_0068191e;
extern "C" unsigned long UNK_00681952;
extern "C" unsigned long UNK_00681a22;
extern "C" unsigned long UNK_00681a4c;
extern "C" unsigned long UNK_00681b1c;
extern "C" unsigned long UNK_00681b46;
extern "C" unsigned long UNK_00681c06;
extern "C" unsigned long UNK_00681c78;
extern "C" unsigned long UNK_00681d56;
extern "C" unsigned long UNK_00681d58;
extern "C" unsigned long _UNK_0067ddc0;
extern "C" unsigned long _UNK_0067ddc4;
extern "C" unsigned long _UNK_0067ddd8;
extern "C" unsigned long _UNK_0067de00;
extern "C" unsigned long _UNK_0067deb4;
extern "C" unsigned long _UNK_0067deb8;
extern "C" unsigned long _UNK_0067e4fc;
extern "C" unsigned long _UNK_0067e500;
extern "C" unsigned long _UNK_0067e504;
extern "C" unsigned long _UNK_0067e508;
extern "C" unsigned long _UNK_0067e50c;
extern "C" unsigned long _UNK_0067e510;
extern "C" unsigned long _UNK_0067e514;
extern "C" unsigned long _UNK_0067e518;
extern "C" unsigned long _UNK_0067e51c;
extern "C" unsigned long _UNK_0067e520;
extern "C" unsigned long _UNK_0067e524;
extern "C" unsigned long _UNK_0067e528;
extern "C" unsigned long _UNK_0067e52c;
extern "C" unsigned long _UNK_0067e530;
extern "C" unsigned long _UNK_0067e534;
extern "C" unsigned long _UNK_0067e538;
extern "C" unsigned long _UNK_0067e95c;
extern "C" unsigned long _UNK_0067e960;
extern "C" unsigned long _UNK_0067e964;
extern "C" unsigned long _UNK_0067e968;
extern "C" unsigned long _UNK_0067e96c;
extern "C" unsigned long _UNK_0067e970;
extern "C" unsigned long _UNK_0067e974;
extern "C" unsigned long _UNK_0067e978;
extern "C" unsigned long _UNK_0067e97c;
extern "C" unsigned long _UNK_0067e980;
extern "C" unsigned long _UNK_0067e984;
extern "C" unsigned long _UNK_0067e988;
extern "C" unsigned long _UNK_0067ed0c;
extern "C" unsigned long _UNK_0067ed10;
extern "C" unsigned long _UNK_0067ed14;
extern "C" unsigned long _UNK_0067ed18;
extern "C" unsigned long _UNK_0067ed1c;
extern "C" unsigned long _UNK_0067ed20;
extern "C" unsigned long _UNK_0067ed24;
extern "C" unsigned long _UNK_0067ed28;
extern "C" unsigned long _UNK_0067ed2c;
extern "C" unsigned long _UNK_0067ed30;
extern "C" unsigned long _UNK_0067ed34;
extern "C" unsigned long _UNK_0067ed38;
extern "C" unsigned long _UNK_0067ed3c;
extern "C" unsigned long _UNK_0067ed40;
extern "C" unsigned long _UNK_0067ed44;
extern "C" unsigned long _UNK_0067f144;
extern "C" unsigned long _UNK_0067f148;
extern "C" unsigned long _UNK_0067f14c;
extern "C" unsigned long _UNK_0067f150;
extern "C" unsigned long _UNK_0067f154;
extern "C" unsigned long _UNK_0067f158;
extern "C" unsigned long _UNK_0067f15c;
extern "C" unsigned long _UNK_0067f160;
extern "C" unsigned long _UNK_0067f164;
extern "C" unsigned long _UNK_0067f168;
extern "C" unsigned long _UNK_0067f16c;
extern "C" unsigned long _UNK_0067f170;
extern "C" unsigned long _UNK_0067f174;
extern "C" unsigned long _UNK_0067f178;
extern "C" unsigned long _UNK_0067f17c;
extern "C" unsigned long _UNK_0067f180;
extern "C" unsigned long _UNK_0067f184;
extern "C" unsigned long _UNK_0067f188;
extern "C" unsigned long _UNK_0067f18c;
extern "C" unsigned long _UNK_0067f190;
extern "C" unsigned long _UNK_0067f590;
extern "C" unsigned long _UNK_0067f594;
extern "C" unsigned long _UNK_0067f598;
extern "C" unsigned long _UNK_0067f59c;
extern "C" unsigned long _UNK_0067f5a0;
extern "C" unsigned long _UNK_0067f5a4;
extern "C" unsigned long _UNK_0067f5a8;
extern "C" unsigned long _UNK_0067f5ac;
extern "C" unsigned long _UNK_0067f5b0;
extern "C" unsigned long _UNK_0067f5b4;
extern "C" unsigned long _UNK_0067f5b8;
extern "C" unsigned long _UNK_0067f5bc;
extern "C" unsigned long _UNK_0067f5c0;
extern "C" unsigned long _UNK_0067f5c4;
extern "C" unsigned long _UNK_0067f5c8;
extern "C" unsigned long _UNK_0067f9dc;
extern "C" unsigned long _UNK_0067f9e0;
extern "C" unsigned long _UNK_0067f9e4;
extern "C" unsigned long _UNK_0067f9e8;
extern "C" unsigned long _UNK_0067f9ec;
extern "C" unsigned long _UNK_0067f9f0;
extern "C" unsigned long _UNK_0067f9f4;
extern "C" unsigned long _UNK_0067f9f8;
extern "C" unsigned long _UNK_0067f9fc;
extern "C" unsigned long _UNK_0067fa00;
extern "C" unsigned long _UNK_0067fa04;
extern "C" unsigned long _UNK_0067fa08;
extern "C" unsigned long _UNK_0067fa0c;
extern "C" unsigned long _UNK_0067fa10;
extern "C" unsigned long _UNK_0067fa14;
extern "C" unsigned long _UNK_0067fa18;
extern "C" unsigned long _UNK_0067fe48;
extern "C" unsigned long _UNK_0067fe4c;
extern "C" unsigned long _UNK_0067fe50;
extern "C" unsigned long _UNK_0067fe54;
extern "C" unsigned long _UNK_0067fe58;
extern "C" unsigned long _UNK_0067fe5c;
extern "C" unsigned long _UNK_0067fe60;
extern "C" unsigned long _UNK_0067fe64;
extern "C" unsigned long _UNK_0067fe68;
extern "C" unsigned long _UNK_0067fe6c;
extern "C" unsigned long _UNK_0067fe70;
extern "C" unsigned long _UNK_0067fe74;
extern "C" unsigned long _UNK_0067fe78;
extern "C" unsigned long _UNK_0067fe7c;
extern "C" unsigned long _UNK_00680284;
extern "C" unsigned long _UNK_00680288;
extern "C" unsigned long _UNK_0068028c;
extern "C" unsigned long _UNK_00680290;
extern "C" unsigned long _UNK_00680294;
extern "C" unsigned long _UNK_00680298;
extern "C" unsigned long _UNK_0068029c;
extern "C" unsigned long _UNK_006802a0;
extern "C" unsigned long _UNK_006802a4;
extern "C" unsigned long _UNK_006802a8;
extern "C" unsigned long _UNK_006802ac;
extern "C" unsigned long _UNK_006802b0;
extern "C" unsigned long _UNK_006802b4;
extern "C" unsigned long _UNK_006802b8;
extern "C" unsigned long _UNK_006802bc;
extern "C" unsigned long _UNK_006802c0;
extern "C" unsigned long _UNK_006802c4;
extern "C" unsigned long _UNK_006802c8;
extern "C" unsigned long _UNK_006802cc;
extern "C" unsigned long _UNK_006802d0;
extern "C" unsigned long _UNK_006806e0;
extern "C" unsigned long _UNK_006806e4;
extern "C" unsigned long _UNK_006806e8;
extern "C" unsigned long _UNK_006806ec;
extern "C" unsigned long _UNK_006806f0;
extern "C" unsigned long _UNK_006806f4;
extern "C" unsigned long _UNK_006806f8;
extern "C" unsigned long _UNK_006806fc;
extern "C" unsigned long _UNK_00680700;
extern "C" unsigned long _UNK_00680704;
extern "C" unsigned long _UNK_00680708;
extern "C" unsigned long _UNK_0068070c;
extern "C" unsigned long _UNK_00680710;
extern "C" unsigned long _UNK_00680714;
extern "C" unsigned long _UNK_00680718;
extern "C" unsigned long _UNK_00680b1c;
extern "C" unsigned long _UNK_00680b20;
extern "C" unsigned long _UNK_00680b24;
extern "C" unsigned long _UNK_00680b28;
extern "C" unsigned long _UNK_00680b2c;
extern "C" unsigned long _UNK_00680b30;
extern "C" unsigned long _UNK_00680b34;
extern "C" unsigned long _UNK_00680b38;
extern "C" unsigned long _UNK_00680b3c;
extern "C" unsigned long _UNK_00680b40;
extern "C" unsigned long _UNK_00680b44;
extern "C" unsigned long _UNK_00680b48;
extern "C" unsigned long _UNK_00680b4c;
extern "C" unsigned long _UNK_00680b50;
extern "C" unsigned long _UNK_00680b54;
extern "C" unsigned long _UNK_00680b58;
extern "C" unsigned long _UNK_00680b5c;
extern "C" unsigned long _UNK_00680b60;
extern "C" unsigned long _UNK_00680f7c;
extern "C" unsigned long _UNK_00680f80;
extern "C" unsigned long _UNK_00680f84;
extern "C" unsigned long _UNK_00680f88;
extern "C" unsigned long _UNK_00680f8c;
extern "C" unsigned long _UNK_00680f90;
extern "C" unsigned long _UNK_00680f94;
extern "C" unsigned long _UNK_00680f98;
extern "C" unsigned long _UNK_00680f9c;
extern "C" unsigned long _UNK_00680fa0;
extern "C" unsigned long _UNK_00680fa4;
extern "C" unsigned long _UNK_00680fa8;
extern "C" unsigned long _UNK_00680fac;
extern "C" unsigned long _UNK_00680fb0;
extern "C" unsigned long _UNK_00680fb4;
extern "C" unsigned long _UNK_00680fb8;
extern "C" unsigned long _UNK_00680fbc;
extern "C" unsigned long _UNK_00680fc0;
extern "C" unsigned long _UNK_006813cc;
extern "C" unsigned long _UNK_006813d0;
extern "C" unsigned long _UNK_006813d4;
extern "C" unsigned long _UNK_006813d8;
extern "C" unsigned long _UNK_006813dc;
extern "C" unsigned long _UNK_006813e0;
extern "C" unsigned long _UNK_006813e4;
extern "C" unsigned long _UNK_006813e8;
extern "C" unsigned long _UNK_006813ec;
extern "C" unsigned long _UNK_006813f0;
extern "C" unsigned long _UNK_006813f4;
extern "C" unsigned long _UNK_006813f8;
extern "C" unsigned long _UNK_006813fc;
extern "C" unsigned long _UNK_00681400;
extern "C" unsigned long _UNK_00681404;
extern "C" unsigned long _UNK_00681408;
extern "C" unsigned long _UNK_00681804;
extern "C" unsigned long _UNK_00681808;
extern "C" unsigned long _UNK_0068180c;
extern "C" unsigned long _UNK_00681810;
extern "C" unsigned long _UNK_00681814;
extern "C" unsigned long _UNK_00681818;
extern "C" unsigned long _UNK_0068181c;
extern "C" unsigned long _UNK_00681820;
extern "C" unsigned long _UNK_00681824;
extern "C" unsigned long _UNK_00681828;
extern "C" unsigned long _UNK_0068182c;
extern "C" unsigned long _UNK_00681830;
extern "C" unsigned long _UNK_00681834;
extern "C" unsigned long _UNK_00681838;
extern "C" unsigned long _UNK_0068183c;
extern "C" unsigned long _UNK_00681c2c;
extern "C" unsigned long _UNK_00681c30;
extern "C" unsigned long _UNK_00681c34;
extern "C" unsigned long _UNK_00681c38;
extern "C" unsigned long _UNK_00681c3c;
extern "C" unsigned long _UNK_00681c40;
extern "C" unsigned long _UNK_00681c44;
extern "C" unsigned long _UNK_00681c48;
extern "C" unsigned long _UNK_00681c4c;
extern "C" unsigned long _UNK_00681c50;
extern "C" unsigned long _UNK_00681c54;
extern "C" unsigned long _UNK_00681c58;
extern "C" unsigned long _UNK_00681c5c;
extern "C" unsigned long _UNK_00681c60;
extern "C" unsigned long _UNK_00681c64;
extern "C" unsigned long _UNK_00681c68;
extern "C" unsigned long _UNK_00681f48;
extern "C" unsigned long _UNK_00681f4c;
extern "C" unsigned long _UNK_00681f50;
extern "C" unsigned long _UNK_00681f54;
extern "C" unsigned long _UNK_00681f58;
extern "C" unsigned long _UNK_00681f5c;
extern "C" unsigned long _UNK_00681f60;
extern "C" unsigned long _UNK_00681f64;
extern "C" unsigned long _UNK_00681f68;
extern "C" unsigned long _UNK_00681f6c;
extern "C" unsigned long g_0067dd3c;
extern "C" unsigned long g_0067dd8e;
extern "C" unsigned long g_0067ddc0;
extern "C" unsigned long g_0067ddc4;
extern "C" unsigned long g_0067ddd4;
extern "C" unsigned long g_0067ddd8;
extern "C" unsigned long g_0067ddfc;
extern "C" unsigned long g_0067de00;
extern "C" unsigned long g_0067de44;
extern "C" unsigned long g_0067de80;
extern "C" unsigned long g_0067deb4;
extern "C" unsigned long g_0067deb8;
extern "C" unsigned long g_0067e11a;
extern "C" unsigned long g_0067e200;
extern "C" unsigned long g_0067e298;
extern "C" unsigned long g_0067e338;
extern "C" unsigned long g_0067e422;
extern "C" unsigned long g_0067e44c;
extern "C" unsigned long g_0067e4fa;
extern "C" unsigned long g_0067e4fc;
extern "C" unsigned long g_0067e500;
extern "C" unsigned long g_0067e504;
extern "C" unsigned long g_0067e508;
extern "C" unsigned long g_0067e50c;
extern "C" unsigned long g_0067e510;
extern "C" unsigned long g_0067e514;
extern "C" unsigned long g_0067e518;
extern "C" unsigned long g_0067e51c;
extern "C" unsigned long g_0067e520;
extern "C" unsigned long g_0067e524;
extern "C" unsigned long g_0067e528;
extern "C" unsigned long g_0067e52c;
extern "C" unsigned long g_0067e530;
extern "C" unsigned long g_0067e534;
extern "C" unsigned long g_0067e538;
extern "C" unsigned long g_0067e5da;
extern "C" unsigned long g_0067e674;
extern "C" unsigned long g_0067e70c;
extern "C" unsigned long g_0067e7a2;
extern "C" unsigned long g_0067e83c;
extern "C" unsigned long g_0067e8de;
extern "C" unsigned long g_0067e95c;
extern "C" unsigned long g_0067e960;
extern "C" unsigned long g_0067e964;
extern "C" unsigned long g_0067e968;
extern "C" unsigned long g_0067e96c;
extern "C" unsigned long g_0067e970;
extern "C" unsigned long g_0067e974;
extern "C" unsigned long g_0067e978;
extern "C" unsigned long g_0067e97c;
extern "C" unsigned long g_0067e980;
extern "C" unsigned long g_0067e984;
extern "C" unsigned long g_0067e988;
extern "C" unsigned long g_0067e9b0;
extern "C" unsigned long g_0067ea50;
extern "C" unsigned long g_0067eaf0;
extern "C" unsigned long g_0067ebc4;
extern "C" unsigned long g_0067ecf2;
extern "C" unsigned long g_0067ed0c;
extern "C" unsigned long g_0067ed10;
extern "C" unsigned long g_0067ed14;
extern "C" unsigned long g_0067ed18;
extern "C" unsigned long g_0067ed1c;
extern "C" unsigned long g_0067ed20;
extern "C" unsigned long g_0067ed24;
extern "C" unsigned long g_0067ed28;
extern "C" unsigned long g_0067ed2c;
extern "C" unsigned long g_0067ed30;
extern "C" unsigned long g_0067ed34;
extern "C" unsigned long g_0067ed38;
extern "C" unsigned long g_0067ed3c;
extern "C" unsigned long g_0067ed40;
extern "C" unsigned long g_0067ed44;
extern "C" unsigned long g_0067ed64;
extern "C" unsigned long g_0067eda2;
extern "C" unsigned long g_0067ee88;
extern "C" unsigned long g_0067ef74;
extern "C" unsigned long g_0067ef9e;
extern "C" unsigned long g_0067f052;
extern "C" unsigned long g_0067f13c;
extern "C" unsigned long g_0067f144;
extern "C" unsigned long g_0067f148;
extern "C" unsigned long g_0067f14c;
extern "C" unsigned long g_0067f150;
extern "C" unsigned long g_0067f154;
extern "C" unsigned long g_0067f158;
extern "C" unsigned long g_0067f15c;
extern "C" unsigned long g_0067f160;
extern "C" unsigned long g_0067f164;
extern "C" unsigned long g_0067f168;
extern "C" unsigned long g_0067f16c;
extern "C" unsigned long g_0067f170;
extern "C" unsigned long g_0067f174;
extern "C" unsigned long g_0067f178;
extern "C" unsigned long g_0067f17c;
extern "C" unsigned long g_0067f180;
extern "C" unsigned long g_0067f184;
extern "C" unsigned long g_0067f188;
extern "C" unsigned long g_0067f18c;
extern "C" unsigned long g_0067f190;
extern "C" unsigned long g_0067f1b8;
extern "C" unsigned long g_0067f278;
extern "C" unsigned long g_0067f2a2;
extern "C" unsigned long g_0067f366;
extern "C" unsigned long g_0067f390;
extern "C" unsigned long g_0067f44e;
extern "C" unsigned long g_0067f482;
extern "C" unsigned long g_0067f546;
extern "C" unsigned long g_0067f570;
extern "C" unsigned long g_0067f590;
extern "C" unsigned long g_0067f594;
extern "C" unsigned long g_0067f598;
extern "C" unsigned long g_0067f59c;
extern "C" unsigned long g_0067f5a0;
extern "C" unsigned long g_0067f5a4;
extern "C" unsigned long g_0067f5a8;
extern "C" unsigned long g_0067f5ac;
extern "C" unsigned long g_0067f5b0;
extern "C" unsigned long g_0067f5b4;
extern "C" unsigned long g_0067f5b8;
extern "C" unsigned long g_0067f5bc;
extern "C" unsigned long g_0067f5c0;
extern "C" unsigned long g_0067f5c4;
extern "C" unsigned long g_0067f5c8;
extern "C" unsigned long g_0067f66e;
extern "C" unsigned long g_0067f698;
extern "C" unsigned long g_0067f75c;
extern "C" unsigned long g_0067f786;
extern "C" unsigned long g_0067f846;
extern "C" unsigned long g_0067f870;
extern "C" unsigned long g_0067f938;
extern "C" unsigned long g_0067f962;
extern "C" unsigned long g_0067f9dc;
extern "C" unsigned long g_0067f9e0;
extern "C" unsigned long g_0067f9e4;
extern "C" unsigned long g_0067f9e8;
extern "C" unsigned long g_0067f9ec;
extern "C" unsigned long g_0067f9f0;
extern "C" unsigned long g_0067f9f4;
extern "C" unsigned long g_0067f9f8;
extern "C" unsigned long g_0067f9fc;
extern "C" unsigned long g_0067fa00;
extern "C" unsigned long g_0067fa04;
extern "C" unsigned long g_0067fa08;
extern "C" unsigned long g_0067fa0c;
extern "C" unsigned long g_0067fa10;
extern "C" unsigned long g_0067fa14;
extern "C" unsigned long g_0067fa18;
extern "C" unsigned long g_0067fa68;
extern "C" unsigned long g_0067fa92;
extern "C" unsigned long g_0067fb5a;
extern "C" unsigned long g_0067fb84;
extern "C" unsigned long g_0067fc46;
extern "C" unsigned long g_0067fc7a;
extern "C" unsigned long g_0067fd42;
extern "C" unsigned long g_0067fd6c;
extern "C" unsigned long g_0067fe36;
extern "C" unsigned long g_0067fe48;
extern "C" unsigned long g_0067fe4c;
extern "C" unsigned long g_0067fe50;
extern "C" unsigned long g_0067fe54;
extern "C" unsigned long g_0067fe58;
extern "C" unsigned long g_0067fe5c;
extern "C" unsigned long g_0067fe60;
extern "C" unsigned long g_0067fe64;
extern "C" unsigned long g_0067fe68;
extern "C" unsigned long g_0067fe6c;
extern "C" unsigned long g_0067fe70;
extern "C" unsigned long g_0067fe74;
extern "C" unsigned long g_0067fe78;
extern "C" unsigned long g_0067fe7c;
extern "C" unsigned long g_0067fe9e;
extern "C" unsigned long g_0067ff74;
extern "C" unsigned long g_0067ff9e;
extern "C" unsigned long g_00680072;
extern "C" unsigned long g_0068009c;
extern "C" unsigned long g_006801b4;
extern "C" unsigned long g_00680284;
extern "C" unsigned long g_00680288;
extern "C" unsigned long g_0068028c;
extern "C" unsigned long g_00680290;
extern "C" unsigned long g_00680294;
extern "C" unsigned long g_00680298;
extern "C" unsigned long g_0068029c;
extern "C" unsigned long g_006802a0;
extern "C" unsigned long g_006802a4;
extern "C" unsigned long g_006802a8;
extern "C" unsigned long g_006802ac;
extern "C" unsigned long g_006802b0;
extern "C" unsigned long g_006802b4;
extern "C" unsigned long g_006802b8;
extern "C" unsigned long g_006802bc;
extern "C" unsigned long g_006802c0;
extern "C" unsigned long g_006802c4;
extern "C" unsigned long g_006802c8;
extern "C" unsigned long g_006802cc;
extern "C" unsigned long g_006802d0;
extern "C" unsigned long g_006802fe;
extern "C" unsigned long g_00680328;
extern "C" unsigned long g_006803f8;
extern "C" unsigned long g_00680422;
extern "C" unsigned long g_006804f6;
extern "C" unsigned long g_00680520;
extern "C" unsigned long g_006805f2;
extern "C" unsigned long g_00680626;
extern "C" unsigned long g_006806e0;
extern "C" unsigned long g_006806e4;
extern "C" unsigned long g_006806e8;
extern "C" unsigned long g_006806ec;
extern "C" unsigned long g_006806f0;
extern "C" unsigned long g_006806f4;
extern "C" unsigned long g_006806f8;
extern "C" unsigned long g_006806fc;
extern "C" unsigned long g_00680700;
extern "C" unsigned long g_00680704;
extern "C" unsigned long g_00680708;
extern "C" unsigned long g_0068070c;
extern "C" unsigned long g_00680710;
extern "C" unsigned long g_00680714;
extern "C" unsigned long g_00680718;
extern "C" unsigned long g_0068073a;
extern "C" unsigned long g_00680764;
extern "C" unsigned long g_00680838;
extern "C" unsigned long g_00680862;
extern "C" unsigned long g_00680934;
extern "C" unsigned long g_00680964;
extern "C" unsigned long g_00680a52;
extern "C" unsigned long g_00680a80;
extern "C" unsigned long g_00680b1c;
extern "C" unsigned long g_00680b20;
extern "C" unsigned long g_00680b24;
extern "C" unsigned long g_00680b28;
extern "C" unsigned long g_00680b2c;
extern "C" unsigned long g_00680b30;
extern "C" unsigned long g_00680b34;
extern "C" unsigned long g_00680b38;
extern "C" unsigned long g_00680b3c;
extern "C" unsigned long g_00680b40;
extern "C" unsigned long g_00680b44;
extern "C" unsigned long g_00680b48;
extern "C" unsigned long g_00680b4c;
extern "C" unsigned long g_00680b50;
extern "C" unsigned long g_00680b54;
extern "C" unsigned long g_00680b58;
extern "C" unsigned long g_00680b5c;
extern "C" unsigned long g_00680b60;
extern "C" unsigned long g_00680ba0;
extern "C" unsigned long g_00680bca;
extern "C" unsigned long g_00680c9a;
extern "C" unsigned long g_00680cc4;
extern "C" unsigned long g_00680d90;
extern "C" unsigned long g_00680dba;
extern "C" unsigned long g_00680e8a;
extern "C" unsigned long g_00680eb4;
extern "C" unsigned long g_00680f7c;
extern "C" unsigned long g_00680f80;
extern "C" unsigned long g_00680f84;
extern "C" unsigned long g_00680f88;
extern "C" unsigned long g_00680f8c;
extern "C" unsigned long g_00680f90;
extern "C" unsigned long g_00680f94;
extern "C" unsigned long g_00680f98;
extern "C" unsigned long g_00680f9c;
extern "C" unsigned long g_00680fa0;
extern "C" unsigned long g_00680fa4;
extern "C" unsigned long g_00680fa8;
extern "C" unsigned long g_00680fac;
extern "C" unsigned long g_00680fb0;
extern "C" unsigned long g_00680fb4;
extern "C" unsigned long g_00680fb8;
extern "C" unsigned long g_00680fbc;
extern "C" unsigned long g_00680fc0;
extern "C" unsigned long g_00680ff0;
extern "C" unsigned long g_006810c2;
extern "C" unsigned long g_006810f6;
extern "C" unsigned long g_006811c6;
extern "C" unsigned long g_006811f0;
extern "C" unsigned long g_006812c0;
extern "C" unsigned long g_006812ea;
extern "C" unsigned long g_006813ba;
extern "C" unsigned long g_006813cc;
extern "C" unsigned long g_006813d0;
extern "C" unsigned long g_006813d4;
extern "C" unsigned long g_006813d8;
extern "C" unsigned long g_006813dc;
extern "C" unsigned long g_006813e0;
extern "C" unsigned long g_006813e4;
extern "C" unsigned long g_006813e8;
extern "C" unsigned long g_006813ec;
extern "C" unsigned long g_006813f0;
extern "C" unsigned long g_006813f4;
extern "C" unsigned long g_006813f8;
extern "C" unsigned long g_006813fc;
extern "C" unsigned long g_00681400;
extern "C" unsigned long g_00681404;
extern "C" unsigned long g_00681408;
extern "C" unsigned long g_00681428;
extern "C" unsigned long g_006814f8;
extern "C" unsigned long g_00681522;
extern "C" unsigned long g_006815f2;
extern "C" unsigned long g_0068161c;
extern "C" unsigned long g_006816ec;
extern "C" unsigned long g_00681716;
extern "C" unsigned long g_006817e6;
extern "C" unsigned long g_00681804;
extern "C" unsigned long g_00681808;
extern "C" unsigned long g_0068180c;
extern "C" unsigned long g_00681810;
extern "C" unsigned long g_00681814;
extern "C" unsigned long g_00681818;
extern "C" unsigned long g_0068181c;
extern "C" unsigned long g_00681820;
extern "C" unsigned long g_00681824;
extern "C" unsigned long g_00681828;
extern "C" unsigned long g_0068182c;
extern "C" unsigned long g_00681830;
extern "C" unsigned long g_00681834;
extern "C" unsigned long g_00681838;
extern "C" unsigned long g_0068183c;
extern "C" unsigned long g_00681850;
extern "C" unsigned long g_0068191e;
extern "C" unsigned long g_00681952;
extern "C" unsigned long g_00681a22;
extern "C" unsigned long g_00681a4c;
extern "C" unsigned long g_00681b1c;
extern "C" unsigned long g_00681b46;
extern "C" unsigned long g_00681c06;
extern "C" unsigned long g_00681c2c;
extern "C" unsigned long g_00681c30;
extern "C" unsigned long g_00681c34;
extern "C" unsigned long g_00681c38;
extern "C" unsigned long g_00681c3c;
extern "C" unsigned long g_00681c40;
extern "C" unsigned long g_00681c44;
extern "C" unsigned long g_00681c48;
extern "C" unsigned long g_00681c4c;
extern "C" unsigned long g_00681c50;
extern "C" unsigned long g_00681c54;
extern "C" unsigned long g_00681c58;
extern "C" unsigned long g_00681c5c;
extern "C" unsigned long g_00681c60;
extern "C" unsigned long g_00681c64;
extern "C" unsigned long g_00681c68;
extern "C" unsigned long g_00681c78;
extern "C" unsigned long g_00681d56;
extern "C" unsigned long g_00681d58;
extern "C" unsigned long g_00681f48;
extern "C" unsigned long g_00681f4c;
extern "C" unsigned long g_00681f50;
extern "C" unsigned long g_00681f54;
extern "C" unsigned long g_00681f58;
extern "C" unsigned long g_00681f5c;
extern "C" unsigned long g_00681f60;
extern "C" unsigned long g_00681f64;
extern "C" unsigned long g_00681f68;
extern "C" unsigned long g_00681f6c;
cocos2d::extension::CCControlButton* BLRoleInfoView::getBtnTuPo() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x1ec));
}

BLRoleInfoView::~BLRoleInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0067dd3c + g_0067ddc0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0067dd8e + g_0067ddc4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLRoleInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1f0)));
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

undefined4 BLRoleInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLRoleInfoView::getssp_BG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLRoleInfoView::getSprRoleImage()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLRoleInfoView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLRoleInfoView::getSprStar1()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLRoleInfoView::getSprStar2()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLRoleInfoView::getSprStar3()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLRoleInfoView::getSprStar4()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLRoleInfoView::getSprStar5()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLRoleInfoView::PageLayerEquips()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLRoleInfoView::getPageControlEquips()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLRoleInfoView::getRoleInfoBG()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLRoleInfoView::getSprAlertBG()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLRoleInfoView::getLabLvTitle()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLRoleInfoView::getLabExpTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLRoleInfoView::getLabLifeTitle()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLRoleInfoView::getLabDefenseTitle()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLRoleInfoView::getLabAttackTitle()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLRoleInfoView::getLabCritTitle()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLRoleInfoView::getLabLV()
{
  return *(undefined4 *)(((int)this) + 0x15c);
}

undefined4 BLRoleInfoView::getLabExp()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLRoleInfoView::getLabLife()
{
  return *(undefined4 *)(((int)this) + 0x164);
}

undefined4 BLRoleInfoView::getLabDefense()
{
  return *(undefined4 *)(((int)this) + 0x168);
}

undefined4 BLRoleInfoView::getLabAttack()
{
  return *(undefined4 *)(((int)this) + 0x16c);
}

undefined4 BLRoleInfoView::getLabCrit()
{
  return *(undefined4 *)(((int)this) + 0x170);
}

undefined4 BLRoleInfoView::getBtnUse()
{
  return *(undefined4 *)(((int)this) + 0x178);
}

undefined4 BLRoleInfoView::getLabUse()
{
  return *(undefined4 *)(((int)this) + 0x17c);
}

undefined4 BLRoleInfoView::getLabAlert()
{
  return *(undefined4 *)(((int)this) + 0x180);
}

undefined4 BLRoleInfoView::getssp_RoleNameBG()
{
  return *(undefined4 *)(((int)this) + 0x184);
}

undefined4 BLRoleInfoView::getLabRoleName()
{
  return *(undefined4 *)(((int)this) + 0x188);
}

undefined4 BLRoleInfoView::getLabLifeAdd()
{
  return *(undefined4 *)(((int)this) + 0x18c);
}

undefined4 BLRoleInfoView::getLabDefenseAdd()
{
  return *(undefined4 *)(((int)this) + 400);
}

undefined4 BLRoleInfoView::getLabAttackAdd()
{
  return *(undefined4 *)(((int)this) + 0x194);
}

undefined4 BLRoleInfoView::getLabCritAdd()
{
  return *(undefined4 *)(((int)this) + 0x198);
}

undefined4 BLRoleInfoView::getBtnRight()
{
  return *(undefined4 *)(((int)this) + 0x1a0);
}

undefined4 BLRoleInfoView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x1a4);
}

undefined4 BLRoleInfoView::getLabFightTitle()
{
  return *(undefined4 *)(((int)this) + 0x1a8);
}

undefined4 BLRoleInfoView::getLabFight()
{
  return *(undefined4 *)(((int)this) + 0x1ac);
}

undefined4 BLRoleInfoView::getBtnGift()
{
  return *(undefined4 *)(((int)this) + 0x1b0);
}

undefined4 BLRoleInfoView::getLabGift()
{
  return *(undefined4 *)(((int)this) + 0x1b4);
}

undefined4 BLRoleInfoView::get()
{
  return *(undefined4 *)(((int)this) + 0x1b8);
}

undefined4 BLRoleInfoView::getLabRunLifeTitle()
{
  return *(undefined4 *)(((int)this) + 0x1bc);
}

undefined4 BLRoleInfoView::getLabRuneDefenseTitle()
{
  return *(undefined4 *)(((int)this) + 0x1c0);
}

undefined4 BLRoleInfoView::getLabRunAttackTitle()
{
  return *(undefined4 *)(((int)this) + 0x1c4);
}

undefined4 BLRoleInfoView::getLabRuneCritTitle()
{
  return *(undefined4 *)(((int)this) + 0x1c8);
}

undefined4 BLRoleInfoView::getLabRuneLife()
{
  return *(undefined4 *)(((int)this) + 0x1cc);
}

undefined4 BLRoleInfoView::getLabRuneDefense()
{
  return *(undefined4 *)(((int)this) + 0x1d0);
}

undefined4 BLRoleInfoView::getLabRuneAttack()
{
  return *(undefined4 *)(((int)this) + 0x1d4);
}

undefined4 BLRoleInfoView::getLabRuneCrit()
{
  return *(undefined4 *)(((int)this) + 0x1d8);
}

undefined4 BLRoleInfoView::getLabRuneTitle()
{
  return *(undefined4 *)(((int)this) + 0x1dc);
}

undefined4 BLRoleInfoView::getBtnExp()
{
  return *(undefined4 *)(((int)this) + 0x1e8);
}

undefined4 BLRoleInfoView::getLabCritDamageTitle()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLRoleInfoView::getLabCritDamage()
{
  return *(undefined4 *)(((int)this) + 0x174);
}

undefined4 BLRoleInfoView::getLabCritDamageAdd()
{
  return *(undefined4 *)(((int)this) + 0x19c);
}

undefined4 BLRoleInfoView::getLabRuneCritDamage()
{
  return *(undefined4 *)(((int)this) + 0x1e4);
}

undefined4 BLRoleInfoView::getLabRuneCritDamageTitle()
{
  return *(undefined4 *)(((int)this) + 0x1e0);
}

void BLRoleInfoView::onEnter()
{
  ((BLRoleInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRoleInfoView::onExit()
{
  ((BLRoleInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRoleInfoView::setBtnTuPo(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x1ec) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

BLRoleInfoView::BLRoleInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0067de44 + (intptr_t)(g_0067deb4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0067de80 + (intptr_t)(g_0067deb8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLRoleInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

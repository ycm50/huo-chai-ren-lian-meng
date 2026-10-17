#include "MD5.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079ecd8(...);
extern "C" unsigned long UNK_006cca14;
extern "C" unsigned long UNK_006cca56;
extern "C" unsigned long UNK_006ccad0;
extern "C" unsigned long UNK_006ccb94;
extern "C" unsigned long UNK_006ccc44;
extern "C" unsigned long UNK_006ccc50;
extern "C" unsigned long _UNK_006cc084;
extern "C" unsigned long _UNK_006cc088;
extern "C" unsigned long _UNK_006cc08c;
extern "C" unsigned long _UNK_006cc090;
extern "C" unsigned long _UNK_006cc64c;
extern "C" unsigned long _UNK_006cc650;
extern "C" unsigned long _UNK_006cc654;
extern "C" unsigned long _UNK_006cc658;
extern "C" unsigned long _UNK_006cc65c;
extern "C" unsigned long _UNK_006cc660;
extern "C" unsigned long _UNK_006cc664;
extern "C" unsigned long _UNK_006cc668;
extern "C" unsigned long _UNK_006cc66c;
extern "C" unsigned long _UNK_006cc670;
extern "C" unsigned long _UNK_006cc674;
extern "C" unsigned long _UNK_006cc678;
extern "C" unsigned long _UNK_006cc67c;
extern "C" unsigned long _UNK_006cc680;
extern "C" unsigned long _UNK_006cc684;
extern "C" unsigned long _UNK_006cc688;
extern "C" unsigned long _UNK_006cc68c;
extern "C" unsigned long _UNK_006cc690;
extern "C" unsigned long _UNK_006cc694;
extern "C" unsigned long _UNK_006cc698;
extern "C" unsigned long _UNK_006cc69c;
extern "C" unsigned long _UNK_006cc6a0;
extern "C" unsigned long _UNK_006cc6a4;
extern "C" unsigned long _UNK_006cc6a8;
extern "C" unsigned long _UNK_006cc6ac;
extern "C" unsigned long _UNK_006cc6b0;
extern "C" unsigned long _UNK_006cc6b4;
extern "C" unsigned long _UNK_006cc6b8;
extern "C" unsigned long _UNK_006cc6bc;
extern "C" unsigned long _UNK_006cc6c0;
extern "C" unsigned long _UNK_006cc6c4;
extern "C" unsigned long _UNK_006cc6c8;
extern "C" unsigned long _UNK_006cc6cc;
extern "C" unsigned long _UNK_006cc6d0;
extern "C" unsigned long _UNK_006cc6d4;
extern "C" unsigned long _UNK_006cc6d8;
extern "C" unsigned long _UNK_006cc6dc;
extern "C" unsigned long _UNK_006cc6e0;
extern "C" unsigned long _UNK_006cc6e4;
extern "C" unsigned long _UNK_006cc6e8;
extern "C" unsigned long _UNK_006cc6ec;
extern "C" unsigned long _UNK_006cc918;
extern "C" unsigned long _UNK_006cc91c;
extern "C" unsigned long _UNK_006cc920;
extern "C" unsigned long _UNK_006cc924;
extern "C" unsigned long _UNK_006cc928;
extern "C" unsigned long _UNK_006cc92c;
extern "C" unsigned long _UNK_006cc930;
extern "C" unsigned long _UNK_006cc934;
extern "C" unsigned long _UNK_006cc938;
extern "C" unsigned long _UNK_006cc93c;
extern "C" unsigned long _UNK_006cc940;
extern "C" unsigned long _UNK_006cc944;
extern "C" unsigned long _UNK_006cc948;
extern "C" unsigned long _UNK_006cc94c;
extern "C" unsigned long _UNK_006cc950;
extern "C" unsigned long _UNK_006cc954;
extern "C" unsigned long _UNK_006cc958;
extern "C" unsigned long _UNK_006cc95c;
extern "C" unsigned long _UNK_006cc960;
extern "C" unsigned long _UNK_006cc964;
extern "C" unsigned long _UNK_006cc968;
extern "C" unsigned long _UNK_006cc96c;
extern "C" unsigned long _UNK_006cc970;
extern "C" unsigned long _UNK_006ccabc;
extern "C" unsigned long _UNK_006ccac0;
extern "C" unsigned long _UNK_006ccb04;
extern "C" unsigned long _UNK_006ccbe0;
extern "C" unsigned long _UNK_006ccc84;
extern "C" unsigned long _UNK_006ccc88;
extern "C" unsigned long g_006cc084;
extern "C" unsigned long g_006cc088;
extern "C" unsigned long g_006cc08c;
extern "C" unsigned long g_006cc090;
extern "C" unsigned long g_006cc64c;
extern "C" unsigned long g_006cc650;
extern "C" unsigned long g_006cc654;
extern "C" unsigned long g_006cc658;
extern "C" unsigned long g_006cc65c;
extern "C" unsigned long g_006cc660;
extern "C" unsigned long g_006cc664;
extern "C" unsigned long g_006cc668;
extern "C" unsigned long g_006cc66c;
extern "C" unsigned long g_006cc670;
extern "C" unsigned long g_006cc674;
extern "C" unsigned long g_006cc678;
extern "C" unsigned long g_006cc67c;
extern "C" unsigned long g_006cc680;
extern "C" unsigned long g_006cc684;
extern "C" unsigned long g_006cc688;
extern "C" unsigned long g_006cc68c;
extern "C" unsigned long g_006cc690;
extern "C" unsigned long g_006cc694;
extern "C" unsigned long g_006cc698;
extern "C" unsigned long g_006cc69c;
extern "C" unsigned long g_006cc6a0;
extern "C" unsigned long g_006cc6a4;
extern "C" unsigned long g_006cc6a8;
extern "C" unsigned long g_006cc6ac;
extern "C" unsigned long g_006cc6b0;
extern "C" unsigned long g_006cc6b4;
extern "C" unsigned long g_006cc6b8;
extern "C" unsigned long g_006cc6bc;
extern "C" unsigned long g_006cc6c0;
extern "C" unsigned long g_006cc6c4;
extern "C" unsigned long g_006cc6c8;
extern "C" unsigned long g_006cc6cc;
extern "C" unsigned long g_006cc6d0;
extern "C" unsigned long g_006cc6d4;
extern "C" unsigned long g_006cc6d8;
extern "C" unsigned long g_006cc6dc;
extern "C" unsigned long g_006cc6e0;
extern "C" unsigned long g_006cc6e4;
extern "C" unsigned long g_006cc6e8;
extern "C" unsigned long g_006cc6ec;
extern "C" unsigned long g_006cc918;
extern "C" unsigned long g_006cc91c;
extern "C" unsigned long g_006cc920;
extern "C" unsigned long g_006cc924;
extern "C" unsigned long g_006cc928;
extern "C" unsigned long g_006cc92c;
extern "C" unsigned long g_006cc930;
extern "C" unsigned long g_006cc934;
extern "C" unsigned long g_006cc938;
extern "C" unsigned long g_006cc93c;
extern "C" unsigned long g_006cc940;
extern "C" unsigned long g_006cc944;
extern "C" unsigned long g_006cc948;
extern "C" unsigned long g_006cc94c;
extern "C" unsigned long g_006cc950;
extern "C" unsigned long g_006cc954;
extern "C" unsigned long g_006cc958;
extern "C" unsigned long g_006cc95c;
extern "C" unsigned long g_006cc960;
extern "C" unsigned long g_006cc964;
extern "C" unsigned long g_006cc968;
extern "C" unsigned long g_006cc96c;
extern "C" unsigned long g_006cc970;
extern "C" unsigned long g_006cca14;
extern "C" unsigned long g_006cca56;
extern "C" unsigned long g_006ccabc;
extern "C" unsigned long g_006ccac0;
extern "C" unsigned long g_006ccad0;
extern "C" unsigned long g_006ccb04;
extern "C" unsigned long g_006ccb94;
extern "C" unsigned long g_006ccbe0;
extern "C" unsigned long g_006ccc44;
extern "C" unsigned long g_006ccc50;
extern "C" unsigned long g_006ccc84;
extern "C" unsigned long g_006ccc88;
void MD5::md5_starts(MD5::md5_context* p1)
{
  *p1 = 0;
  p1[1] = 0;
  p1[2] = g_006cc084;
  p1[3] = g_006cc088;
  p1[4] = g_006cc08c;
  p1[5] = g_006cc090;
  return;
}

void MD5::md5_process(MD5::md5_context* p1, unsigned char* p2)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  uVar12 = (uint)p2[1] << 8 | (uint)p2[2] << 0x10 | (uint)*p2 |
           (uint)p2[3] << 0x18;
  uVar2 = (uint)p2[5] << 8 | (uint)p2[6] << 0x10 | (uint)p2[4] |
          (uint)p2[7] << 0x18;
  uVar15 = (uint)p2[9] << 8 | (uint)p2[10] << 0x10 | (uint)p2[8] |
           (uint)p2[0xb] << 0x18;
  uVar3 = (uint)p2[0xd] << 8 | (uint)p2[0xe] << 0x10 | (uint)p2[0xc] |
          (uint)p2[0xf] << 0x18;
  uVar16 = (uint)p2[0x11] << 8 | (uint)p2[0x12] << 0x10 | (uint)p2[0x10] |
           (uint)p2[0x13] << 0x18;
  uVar4 = (uint)p2[0x15] << 8 | (uint)p2[0x16] << 0x10 | (uint)p2[0x14] |
          (uint)p2[0x17] << 0x18;
  uVar17 = (uint)p2[0x19] << 8 | (uint)p2[0x1a] << 0x10 | (uint)p2[0x18] |
           (uint)p2[0x1b] << 0x18;
  uVar1 = (uint)p2[0x1d] << 8 | (uint)p2[0x1e] << 0x10 | (uint)p2[0x1c] |
          (uint)p2[0x1f] << 0x18;
  uVar5 = (uint)p2[0x21] << 8 | (uint)p2[0x22] << 0x10 | (uint)p2[0x20] |
          (uint)p2[0x23] << 0x18;
  uVar10 = (uint)p2[0x26] << 0x10 | (uint)p2[0x25] << 8 | (uint)p2[0x24] |
           (uint)p2[0x27] << 0x18;
  uVar6 = (uint)p2[0x29] << 8 | (uint)p2[0x2a] << 0x10 | (uint)p2[0x28] |
          (uint)p2[0x2b] << 0x18;
  uVar18 = (uint)p2[0x2d] << 8 | (uint)p2[0x2e] << 0x10 | (uint)p2[0x2c] |
           (uint)p2[0x2f] << 0x18;
  uVar7 = (uint)p2[0x31] << 8 | (uint)p2[0x32] << 0x10 | (uint)p2[0x30] |
          (uint)p2[0x33] << 0x18;
  uVar19 = (uint)p2[0x35] << 8 | (uint)p2[0x36] << 0x10 | (uint)p2[0x34] |
           (uint)p2[0x37] << 0x18;
  uVar8 = (uint)p2[0x39] << 8 | (uint)p2[0x3a] << 0x10 | (uint)p2[0x38] |
          (uint)p2[0x3b] << 0x18;
  uVar11 = (uint)p2[0x3c] | (uint)p2[0x3d] << 8 | (uint)p2[0x3e] << 0x10 |
           (uint)p2[0x3f] << 0x18;
  uVar13 = *(int *)(p1 + 8) + g_006cc64c +
           ((*(uint *)(p1 + 0x14) ^ *(uint *)(p1 + 0x10)) & *(uint *)(p1 + 0xc) ^
           *(uint *)(p1 + 0x14)) + uVar12;
  uVar21 = (undefined4)(*(uint *)(p1 + 0xc));
  uVar14 = (undefined4)((uVar13 >> 0x19 | uVar13 * 0x80) + *(uint *)(p1 + 0xc));
  uVar13 = *(uint *)(p1 + 0x14) + g_006cc650 + uVar2 +
           ((*(uint *)(p1 + 0x10) ^ uVar21) & uVar14 ^ *(uint *)(p1 + 0x10));
  uVar13 = (undefined4)((uVar13 >> 0x14 | uVar13 * 0x1000) + uVar14);
  uVar9 = *(uint *)(p1 + 0x10) + g_006cc654 + uVar15 + ((uVar21 ^ uVar14) & uVar13 ^ uVar21)
  ;
  uVar9 = (undefined4)((uVar9 >> 0xf | uVar9 * 0x20000) + uVar13);
  uVar21 = (undefined4)(((uVar13 ^ uVar14) & uVar9 ^ uVar14) + uVar3 + uVar21 + g_006cc658);
  uVar21 = (undefined4)((uVar21 >> 10 | uVar21 * 0x400000) + uVar9);
  uVar14 = (undefined4)(((uVar9 ^ uVar13) & uVar21 ^ uVar13) + uVar16 + g_006cc65c + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x19 | uVar14 * 0x80) + uVar21);
  uVar13 = (undefined4)(((uVar21 ^ uVar9) & uVar14 ^ uVar9) + uVar4 + g_006cc660 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x14 | uVar13 * 0x1000) + uVar14);
  uVar9 = (undefined4)(((uVar14 ^ uVar21) & uVar13 ^ uVar21) + uVar17 + g_006cc664 + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0xf | uVar9 * 0x20000) + uVar13);
  uVar21 = (undefined4)(((uVar13 ^ uVar14) & uVar9 ^ uVar14) + uVar1 + g_006cc668 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 10 | uVar21 * 0x400000) + uVar9);
  uVar14 = (undefined4)(((uVar9 ^ uVar13) & uVar21 ^ uVar13) + uVar5 + g_006cc66c + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x19 | uVar14 * 0x80) + uVar21);
  uVar13 = (undefined4)(((uVar21 ^ uVar9) & uVar14 ^ uVar9) + uVar10 + g_006cc670 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x14 | uVar13 * 0x1000) + uVar14);
  uVar9 = (undefined4)(((uVar14 ^ uVar21) & uVar13 ^ uVar21) + uVar6 + g_006cc674 + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0xf | uVar9 * 0x20000) + uVar13);
  uVar21 = (undefined4)(((uVar13 ^ uVar14) & uVar9 ^ uVar14) + uVar18 + g_006cc678 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 10 | uVar21 * 0x400000) + uVar9);
  uVar14 = (undefined4)(((uVar9 ^ uVar13) & uVar21 ^ uVar13) + uVar7 + g_006cc67c + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x19 | uVar14 * 0x80) + uVar21);
  uVar13 = (undefined4)(uVar13 + uVar19 + g_006cc680 + ((uVar21 ^ uVar9) & uVar14 ^ uVar9));
  uVar13 = (undefined4)((uVar13 >> 0x14 | uVar13 * 0x1000) + uVar14);
  uVar9 = (undefined4)(uVar9 + uVar8 + g_006cc684 + ((uVar14 ^ uVar21) & uVar13 ^ uVar21));
  uVar9 = (undefined4)((uVar9 >> 0xf | uVar9 * 0x20000) + uVar13);
  uVar21 = (undefined4)(uVar11 + g_006cc688 + uVar21 + ((uVar13 ^ uVar14) & uVar9 ^ uVar14));
  uVar21 = (undefined4)((uVar21 >> 10 | uVar21 * 0x400000) + uVar9);
  uVar14 = (undefined4)(uVar2 + g_006cc68c + uVar14 + ((uVar21 ^ uVar9) & uVar13 ^ uVar9));
  uVar14 = (undefined4)((uVar14 >> 0x1b | uVar14 * 0x20) + uVar21);
  uVar13 = (undefined4)(uVar17 + g_006cc690 + uVar13 + ((uVar14 ^ uVar21) & uVar9 ^ uVar21));
  uVar13 = (undefined4)((uVar13 >> 0x17 | uVar13 * 0x200) + uVar14);
  uVar9 = (undefined4)(uVar18 + g_006cc694 + uVar9 + ((uVar13 ^ uVar14) & uVar21 ^ uVar14));
  uVar9 = (undefined4)((uVar9 >> 0x12 | uVar9 * 0x4000) + uVar13);
  uVar21 = (undefined4)(((uVar9 ^ uVar13) & uVar14 ^ uVar13) + uVar12 + g_006cc698 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 0xc | uVar21 * 0x100000) + uVar9);
  uVar14 = (undefined4)(((uVar21 ^ uVar9) & uVar13 ^ uVar9) + uVar4 + g_006cc69c + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1b | uVar14 * 0x20) + uVar21);
  uVar13 = (undefined4)(((uVar14 ^ uVar21) & uVar9 ^ uVar21) + uVar6 + g_006cc6a0 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x17 | uVar13 * 0x200) + uVar14);
  uVar9 = (undefined4)(((uVar13 ^ uVar14) & uVar21 ^ uVar14) + uVar11 + g_006cc6a4 + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0x12 | uVar9 * 0x4000) + uVar13);
  uVar21 = (undefined4)(((uVar9 ^ uVar13) & uVar14 ^ uVar13) + uVar16 + g_006cc6a8 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 0xc | uVar21 * 0x100000) + uVar9);
  uVar14 = (undefined4)(((uVar21 ^ uVar9) & uVar13 ^ uVar9) + uVar10 + g_006cc6ac + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1b | uVar14 * 0x20) + uVar21);
  uVar13 = (undefined4)(((uVar14 ^ uVar21) & uVar9 ^ uVar21) + uVar8 + g_006cc6b0 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x17 | uVar13 * 0x200) + uVar14);
  uVar9 = (undefined4)(((uVar13 ^ uVar14) & uVar21 ^ uVar14) + uVar3 + g_006cc6b4 + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0x12 | uVar9 * 0x4000) + uVar13);
  uVar21 = (undefined4)(((uVar9 ^ uVar13) & uVar14 ^ uVar13) + uVar5 + g_006cc6b8 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 0xc | uVar21 * 0x100000) + uVar9);
  uVar14 = (undefined4)(((uVar21 ^ uVar9) & uVar13 ^ uVar9) + uVar19 + g_006cc6bc + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1b | uVar14 * 0x20) + uVar21);
  uVar13 = (undefined4)(uVar13 + uVar15 + g_006cc6c0 + ((uVar14 ^ uVar21) & uVar9 ^ uVar21));
  uVar13 = (undefined4)((uVar13 >> 0x17 | uVar13 * 0x200) + uVar14);
  uVar9 = (undefined4)(uVar9 + uVar1 + g_006cc6c4 + ((uVar13 ^ uVar14) & uVar21 ^ uVar14));
  uVar9 = (undefined4)((uVar9 >> 0x12 | uVar9 * 0x4000) + uVar13);
  uVar21 = (undefined4)(uVar21 + uVar7 + g_006cc6c8 + (uVar14 & (uVar9 ^ uVar13) ^ uVar13));
  uVar21 = (undefined4)((uVar21 >> 0xc | uVar21 * 0x100000) + uVar9);
  uVar14 = (undefined4)(uVar14 + uVar4 + g_006cc6cc + (uVar9 ^ uVar13 ^ uVar21));
  uVar14 = (undefined4)((uVar14 >> 0x1c | uVar14 * 0x10) + uVar21);
  uVar13 = (undefined4)(uVar5 + g_006cc6d0 + uVar13 + (uVar21 ^ uVar9 ^ uVar14));
  uVar13 = (undefined4)((uVar13 >> 0x15 | uVar13 * 0x800) + uVar14);
  uVar9 = (undefined4)(uVar18 + g_006cc6d4 + uVar9 + (uVar14 ^ uVar21 ^ uVar13));
  uVar9 = (undefined4)((uVar9 >> 0x10 | uVar9 * 0x10000) + uVar13);
  uVar21 = (undefined4)((uVar13 ^ uVar14 ^ uVar9) + uVar8 + g_006cc6d8 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 9 | uVar21 * 0x800000) + uVar9);
  uVar14 = (undefined4)((uVar9 ^ uVar13 ^ uVar21) + uVar2 + g_006cc6dc + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1c | uVar14 * 0x10) + uVar21);
  uVar13 = (undefined4)((uVar21 ^ uVar9 ^ uVar14) + uVar16 + g_006cc6e0 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x15 | uVar13 * 0x800) + uVar14);
  uVar9 = (undefined4)((uVar14 ^ uVar21 ^ uVar13) + uVar1 + g_006cc6e4 + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0x10 | uVar9 * 0x10000) + uVar13);
  uVar21 = (undefined4)((uVar13 ^ uVar14 ^ uVar9) + uVar6 + g_006cc6e8 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 9 | uVar21 * 0x800000) + uVar9);
  uVar14 = (undefined4)((uVar9 ^ uVar13 ^ uVar21) + uVar19 + g_006cc6ec + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1c | uVar14 * 0x10) + uVar21);
  uVar13 = (undefined4)((uVar21 ^ uVar9 ^ uVar14) + uVar12 + g_006cc918 + uVar13);
  uVar13 = (undefined4)((uVar13 >> 0x15 | uVar13 * 0x800) + uVar14);
  uVar9 = (undefined4)((uVar14 ^ uVar21 ^ uVar13) + uVar3 + g_006cc91c + uVar9);
  uVar9 = (undefined4)((uVar9 >> 0x10 | uVar9 * 0x10000) + uVar13);
  uVar21 = (undefined4)((uVar13 ^ uVar14 ^ uVar9) + uVar17 + g_006cc920 + uVar21);
  uVar21 = (undefined4)((uVar21 >> 9 | uVar21 * 0x800000) + uVar9);
  uVar14 = (undefined4)((uVar9 ^ uVar13 ^ uVar21) + uVar10 + g_006cc924 + uVar14);
  uVar14 = (undefined4)((uVar14 >> 0x1c | uVar14 * 0x10) + uVar21);
  uVar13 = (undefined4)(uVar13 + uVar7 + g_006cc928 + (uVar21 ^ uVar9 ^ uVar14));
  uVar13 = (undefined4)((uVar13 >> 0x15 | uVar13 * 0x800) + uVar14);
  uVar9 = (undefined4)(uVar9 + uVar11 + g_006cc92c + (uVar14 ^ uVar21 ^ uVar13));
  uVar9 = (undefined4)((uVar9 >> 0x10 | uVar9 * 0x10000) + uVar13);
  uVar21 = (undefined4)(uVar15 + g_006cc930 + uVar21 + (uVar13 ^ uVar14 ^ uVar9));
  uVar21 = (undefined4)((uVar21 >> 9 | uVar21 * 0x800000) + uVar9);
  uVar12 = (undefined4)(uVar12 + g_006cc934 + uVar14 + ((~uVar13 | uVar21) ^ uVar9));
  uVar12 = (undefined4)((uVar12 >> 0x1a | uVar12 * 0x40) + uVar21);
  uVar1 = (undefined4)(uVar1 + g_006cc938 + uVar13 + ((~uVar9 | uVar12) ^ uVar21));
  uVar1 = (undefined4)((uVar1 >> 0x16 | uVar1 * 0x400) + uVar12);
  uVar13 = (undefined4)(uVar8 + g_006cc93c + uVar9 + ((~uVar21 | uVar1) ^ uVar12));
  uVar8 = (undefined4)((uVar13 >> 0x11 | uVar13 * 0x8000) + uVar1);
  uVar13 = (undefined4)(uVar21 + uVar4 + g_006cc940 + ((~uVar12 | uVar8) ^ uVar1));
  uVar13 = (undefined4)((uVar13 >> 0xb | uVar13 * 0x200000) + uVar8);
  uVar4 = (undefined4)(uVar7 + g_006cc944 + uVar12 + ((~uVar1 | uVar13) ^ uVar8));
  uVar4 = (undefined4)((uVar4 >> 0x1a | uVar4 * 0x40) + uVar13);
  uVar1 = (undefined4)(uVar3 + g_006cc948 + uVar1 + ((~uVar8 | uVar4) ^ uVar13));
  uVar1 = (undefined4)((uVar1 >> 0x16 | uVar1 * 0x400) + uVar4);
  uVar3 = (undefined4)(uVar6 + g_006cc94c + uVar8 + ((~uVar13 | uVar1) ^ uVar4));
  uVar3 = (undefined4)((uVar3 >> 0x11 | uVar3 * 0x8000) + uVar1);
  uVar13 = (undefined4)(uVar2 + g_006cc950 + uVar13 + ((~uVar4 | uVar3) ^ uVar1));
  uVar2 = (undefined4)((uVar13 >> 0xb | uVar13 * 0x200000) + uVar3);
  uVar13 = (undefined4)(uVar5 + g_006cc954 + uVar4 + ((~uVar1 | uVar2) ^ uVar3));
  uVar13 = (undefined4)((uVar13 >> 0x1a | uVar13 * 0x40) + uVar2);
  uVar1 = (undefined4)(uVar11 + g_006cc958 + uVar1 + ((~uVar3 | uVar13) ^ uVar2));
  uVar1 = (undefined4)((uVar1 >> 0x16 | uVar1 * 0x400) + uVar13);
  uVar3 = (undefined4)(uVar17 + g_006cc95c + uVar3 + ((~uVar2 | uVar1) ^ uVar13));
  uVar3 = (undefined4)((uVar3 >> 0x11 | uVar3 * 0x8000) + uVar1);
  uVar2 = (undefined4)(uVar19 + g_006cc960 + uVar2 + ((~uVar13 | uVar3) ^ uVar1));
  uVar2 = (undefined4)((uVar2 >> 0xb | uVar2 * 0x200000) + uVar3);
  uVar13 = (undefined4)(uVar16 + g_006cc964 + uVar13 + ((~uVar1 | uVar2) ^ uVar3));
  uVar13 = (undefined4)((uVar13 >> 0x1a | uVar13 * 0x40) + uVar2);
  uVar1 = (undefined4)(uVar18 + g_006cc968 + uVar1 + ((~uVar3 | uVar13) ^ uVar2));
  uVar1 = (undefined4)((uVar1 >> 0x16 | uVar1 * 0x400) + uVar13);
  uVar3 = (undefined4)(uVar15 + g_006cc96c + uVar3 + ((~uVar2 | uVar1) ^ uVar13));
  uVar3 = (undefined4)((uVar3 >> 0x11 | uVar3 * 0x8000) + uVar1);
  iVar20 = uVar10 + g_006cc970;
  *(uint *)(p1 + 8) = uVar13 + *(int *)(p1 + 8);
  uVar13 = (undefined4)(iVar20 + uVar2 + ((~uVar13 | uVar3) ^ uVar1));
  *(uint *)(p1 + 0xc) = uVar3 + *(int *)(p1 + 0xc) + (uVar13 >> 0xb | uVar13 * 0x200000);
  *(uint *)(p1 + 0x10) = uVar3 + *(int *)(p1 + 0x10);
  *(uint *)(p1 + 0x14) = uVar1 + *(int *)(p1 + 0x14);
  return;
}

void MD5::md5_update(MD5::md5_context* p1, unsigned char* p2, unsigned long p3)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iStack_24;
  uint uStack_20;
  
  if (p3 != 0) {
    uVar3 = (undefined4)((*p1 & 0x1ff) >> 3);
    uVar2 = (undefined4)(0x40 - uVar3);
    uVar1 = (undefined4)(p3 * 8 + *p1);
    *p1 = uVar1;
    p1[1] = (p3 >> 0x1d) + p1[1] + (uint)(uVar1 < p3 * 8);
    iStack_24 = (int)(intptr_t)p2;
    uStack_20 = (undefined4)(p3);
    if ((uVar2 <= p3) && (uVar3 != 0)) {
      (void)(((long long)::memcpy((void *)((int)p1 + uVar3 + 0x18),(const void *)(p2),(size_t)(uVar2))));
      MD5::md5_process((MD5::md5_context*)p1, (unsigned char*)p1 + 6);
      uVar3 = (undefined4)(0);
      uStack_20 = (undefined4)(p3 - uVar2);
      iStack_24 = (int)(intptr_t)p2 + uVar2;
      p2 = (unsigned char *)(intptr_t)iStack_24;
      p3 = uStack_20;
    }
    for (; 0x3f < uStack_20; uStack_20 = uStack_20 - 0x40) {
      MD5::md5_process((MD5::md5_context*)p1, (unsigned char*)iStack_24);
      iStack_24 = iStack_24 + 0x40;
    }
    if ((p3 & 0x3f) != 0) {
      func_0079e48c((int)p1 + uVar3 + 0x18,p2 + (p3 & 0xffffffc0));
    }
  }
  return;
}

void MD5::md5_finish(MD5::md5_context* p1, unsigned char* p2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  int iStack_1c;
  
  piVar4 = *(int **)(&g_006cca14 + g_006ccabc);
  iStack_1c = (int)*(int *)&(*piVar4);
  uVar3 = (undefined4)(*p1);
  uStack_23 = (undefined1)(uVar3 >> 8);
  uStack_22 = (undefined1)(uVar3 >> 0x10);
  uStack_21 = (undefined1)(uVar3 >> 0x18);
  uVar1 = (undefined4)(p1[1]);
  uStack_24 = (undefined1)uVar3;
  uStack_20 = (undefined1)uVar1;
  uStack_1f = (undefined1)(uVar1 >> 8);
  uStack_1e = (undefined1)(uVar1 >> 0x10);
  uStack_1d = (undefined1)(uVar1 >> 0x18);
  uVar1 = (undefined4)((uVar3 & 0x1ff) >> 3);
  iVar2 = 0x38;
  if (0x37 < uVar1) {
    iVar2 = 0x78;
  }
  MD5::md5_update((MD5::md5_context*)p1, (unsigned char*)&g_006cca56 + g_006ccac0, (unsigned long)iVar2 - uVar1);
  MD5::md5_update((MD5::md5_context*)p1, (unsigned char*)&uStack_24, (unsigned long)8);
  *p2 = (char)p1[2];
  p2[1] = (char)(p1[2] >> 8);
  p2[2] = (char)*(undefined2 *)((int)p1 + 10);
  p2[3] = *(undefined1 *)((int)p1 + 0xb);
  p2[4] = (char)p1[3];
  p2[5] = (char)(p1[3] >> 8);
  p2[6] = (char)*(undefined2 *)((int)p1 + 0xe);
  p2[7] = *(undefined1 *)((int)p1 + 0xf);
  p2[8] = (char)p1[4];
  p2[9] = (char)(p1[4] >> 8);
  p2[10] = (char)*(undefined2 *)((int)p1 + 0x12);
  p2[0xb] = *(undefined1 *)((int)p1 + 0x13);
  p2[0xc] = (char)p1[5];
  p2[0xd] = (char)(p1[5] >> 8);
  p2[0xe] = (char)*(undefined2 *)((int)p1 + 0x16);
  p2[0xf] = *(undefined1 *)((int)p1 + 0x17);
  if (iStack_1c != *piVar4) {
    func_0079e914();
  }
  return;
}

void MD5::GenerateMD5(unsigned char* p1, int p2)
{
  int *piVar1;
  undefined1 auStack_74 [88];
  int iStack_1c;
  
  piVar1 = *(int **)(&g_006ccad0 + g_006ccb04);
  iStack_1c = (int)*(int *)&(*piVar1);
  MD5::md5_starts((MD5::md5_context*)auStack_74);
  MD5::md5_update((MD5::md5_context*)auStack_74, (unsigned char*)p1, (unsigned long)p2);
  MD5::md5_finish((MD5::md5_context*)auStack_74, (unsigned char*)((int)this));
  if (iStack_1c != *piVar1) {
    func_0079e914();
  }
  return;
}

MD5::MD5()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  return;
}

MD5 MD5::operator+(uint P2)
{
  unsigned int stack0x00000008 = 0;
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_28;
  uint *puStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  uint auStack_8 [2];
  
  auStack_8[0] = p3;
  auStack_8[1] = p4;
  puVar2 = auStack_8;
  puVar1 = &uStack_28;
  uStack_28 = (undefined4)((int *)((int)this));
  puStack_24 = (uint *)(intptr_t)p2;
  uStack_20 = (undefined4)(p3);
  uStack_1c = (undefined4)(p4);
  do {
    uVar3 = (undefined4)(*(undefined4 *)(intptr_t)p2);
    p2 = p2 + 1;
    uVar4 = (undefined4)(*puVar2);
    puVar2 = puVar2 + 1;
    *puVar1 = uVar3 ^ uVar4;
    puVar1 = puVar1 + 1;
  } while (puVar2 != (uint *)&stack0x00000008);
  0 /* ctorZero */;
                    /* WARNING: Could not recover jumptable at 0x006ccc12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MD5 r; return r;
}

bool MD5::operator==(MD5 P2)
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = (undefined4)(p2);
  uStack_8 = (undefined4)(p3);
  uStack_4 = (undefined4)(p4);
  iVar1 = ((long long)::memcmp((const void *)(&uStack_c),(const void *)(((int)this)),(size_t)(0x10)));
                    /* WARNING: Could not recover jumptable at 0x006ccc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return false;
  return false;
}

void MD5::ToString()
{
  undefined4 p2 = 0;

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [36];
  int iStack_1c;
  
  piVar5 = *(int **)(&g_006ccc44 + g_006ccc84);
  iStack_1c = (int)*(int *)&(*piVar5);
  iVar3 = 0;
  puVar4 = (undefined *)&g_006ccc50 + g_006ccc88;
  do {
    iVar2 = iVar3 * 2;
    puVar1 = (undefined1 *)(p2 + iVar3);
    iVar3 = iVar3 + 1;
    (void)(((long long)::sprintf((char *)(auStack_40 + iVar2),(char const *)(puVar4),*puVar1)));
  } while (iVar3 != 0x10);
  func_0079e45c(((int)this),auStack_40,auStack_44);
  if (iStack_1c != *piVar5) {
    func_0079e914(((int)this));
  }
  return;
}

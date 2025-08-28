#include "TaleWorlds.Native.Split.h"

// 03_rendering_part691.c - 4 个函数

// 函数: void FUN_180662000(undefined8 param_1,longlong param_2,longlong param_3,char param_4,float *param_5,
void FUN_180662000(undefined8 param_1,longlong param_2,longlong param_3,char param_4,float *param_5,
                  undefined4 param_6)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [16];
  
  uVar13 = (ulonglong)param_4;
  lVar14 = uVar13 * 0x1b0;
  pfVar11 = (float *)FUN_18022a890(param_3,*(undefined1 *)
                                            (*(longlong *)(param_2 + 0x140) + 0xf0 + lVar14),param_2
                                  );
  fVar2 = *pfVar11;
  fVar3 = pfVar11[1];
  fVar4 = pfVar11[2];
  fVar5 = pfVar11[3];
  fVar6 = *param_5;
  fVar7 = param_5[1];
  fVar8 = param_5[2];
  fVar9 = param_5[3];
  fStack_24 = fVar4 * fVar9 * -1.0 + fVar6 * fVar3 * -1.0 + fVar2 * fVar7 + fVar5 * fVar8;
  fStack_20 = fVar5 * fVar7 * -1.0 + fVar6 * fVar4 * -1.0 + fVar2 * fVar8 + fVar3 * fVar9;
  fStack_1c = fVar3 * fVar8 * -1.0 + fVar6 * fVar5 * -1.0 + fVar2 * fVar9 + fVar4 * fVar7;
  fStack_28 = fVar5 * fVar9 * 1.0 + fVar6 * fVar2 * 1.0 + fVar4 * fVar8 + fVar3 * fVar7;
  puVar12 = (undefined8 *)
            FUN_18040b910(param_2,auStack_18,param_4,
                          *(undefined4 *)(*(longlong *)(param_2 + 0x140) + 0x110 + lVar14),
                          &fStack_28,param_6);
  uVar10 = puVar12[1];
  puVar1 = (undefined8 *)(param_3 + (uVar13 + 0x82) * 0x10);
  *puVar1 = *puVar12;
  puVar1[1] = uVar10;
  *(ulonglong *)(param_3 + 0x800) =
       *(ulonglong *)(param_3 + 0x800) |
       *(ulonglong *)(*(longlong *)(param_2 + 0x140) + 0xe8 + lVar14);
  *(ulonglong *)(param_3 + 0x808) = *(ulonglong *)(param_3 + 0x808) | 1L << (uVar13 & 0x3f);
  return;
}



undefined8 *
FUN_180662150(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a19ac8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



longlong FUN_180662190(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 8;
  lVar1 = param_1 + 0xa0;
  lVar2 = 8;
  do {
    func_0x000180074f10(lVar1);
    lVar1 = lVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x120;
  do {
    func_0x000180074f10(lVar1);
    lVar1 = lVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x1b0) = param_5;
  *(undefined4 *)(param_1 + 0x1b8) = param_6;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x94) = param_2;
  *(undefined1 *)(param_1 + 0x95) = param_3;
  *(undefined1 *)(param_1 + 0x96) = param_4;
  return param_1;
}



undefined8 * FUN_180662260(undefined8 *param_1)

{
  *param_1 = &UNK_180a19ac8;
  *param_1 = &UNK_180a3e588;
  FUN_180662190(param_1 + 2,0xff,0xff,0,0,0,0xfffffffffffffffe);
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x40400000;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x7149f2ca;
  return param_1;
}



undefined8 *
FUN_1806622e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a19ac8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1f0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180662320(longlong param_1,longlong param_2,float *param_3,longlong param_4)
void FUN_180662320(longlong param_1,longlong param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1a8 [32];
  undefined1 uStack_188;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  longlong lStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong uStack_f8;
  
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  cVar2 = *(char *)(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  lVar17 = (longlong)*(char *)((longlong)cVar2 + 0x100 + param_4);
  cVar3 = *(char *)(param_4 + 0x100 + lVar17);
  fVar27 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  uVar16 = FUN_18022a890(param_2,cVar3,param_4);
  FUN_18063b5f0(&fStack_138,uVar16);
  fVar23 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[7];
  fVar11 = param_3[8];
  fVar12 = param_3[9];
  fVar13 = param_3[10];
  fVar14 = param_3[0xb];
  pfVar1 = (float *)(param_2 + ((longlong)cVar3 + 0x40) * 0x10);
  fVar21 = *pfVar1;
  fVar22 = pfVar1[1];
  fVar15 = pfVar1[2];
  fStack_11c = fStack_124 * fVar10 + fStack_128 * fVar6 + fStack_120 * fVar14;
  fVar24 = fStack_114 * fVar7 + fStack_118 * fVar23 + fStack_110 * fVar11;
  fVar25 = fStack_114 * fVar8 + fStack_118 * fVar4 + fStack_110 * fVar12;
  fVar26 = fStack_114 * fVar9 + fStack_118 * fVar5 + fStack_110 * fVar13;
  fStack_10c = fStack_114 * fVar10 + fStack_118 * fVar6 + fStack_110 * fVar14;
  fVar19 = *(float *)(param_1 + 0x10);
  fStack_108 = fVar22 * fVar7 + fVar21 * fVar23 + fVar15 * fVar11 + param_3[0xc];
  fStack_104 = fVar22 * fVar8 + fVar21 * fVar4 + fVar15 * fVar12 + param_3[0xd];
  fStack_100 = fVar22 * fVar9 + fVar21 * fVar5 + fVar15 * fVar13 + param_3[0xe];
  fStack_fc = fVar22 * fVar10 + fVar21 * fVar6 + fVar15 * fVar14 + param_3[0xf];
  fVar21 = *(float *)(param_1 + 0x14);
  fVar22 = *(float *)(param_1 + 0x18);
  fStack_178 = fVar21 * fVar7 + fVar19 * fVar23 + fVar22 * fVar11 + param_3[0xc];
  fStack_174 = fVar21 * fVar8 + fVar19 * fVar4 + fVar22 * fVar12 + param_3[0xd];
  fStack_160 = fVar21 * fVar9 + fVar19 * fVar5 + fVar22 * fVar13 + param_3[0xe];
  fStack_15c = fVar21 * fVar10 + fVar19 * fVar6 + fVar22 * fVar14 + param_3[0xf];
  uStack_168 = CONCAT44(fStack_174,fStack_178);
  fStack_178 = fStack_178 - fStack_108;
  fStack_174 = fStack_174 - fStack_104;
  fStack_170 = fStack_160 - fStack_100;
  uStack_16c = 0x7f7fffff;
  fVar21 = fStack_174 * fStack_174 + fStack_178 * fStack_178 + fStack_170 * fStack_170;
  auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar19 = auVar20._0_4_;
  uStack_12c = 0x7f7fffff;
  fStack_130 = fVar19 * 0.5 * (3.0 - fVar21 * fVar19 * fVar19);
  fStack_138 = fStack_178 * fStack_130;
  fStack_134 = fStack_130 * fStack_174;
  fStack_130 = fStack_130 * fStack_170;
  fVar22 = fVar25 * fStack_130 - fVar26 * fStack_134;
  fStack_124 = fVar26 * fStack_138 - fVar24 * fStack_130;
  fStack_120 = fVar24 * fStack_134 - fVar25 * fStack_138;
  fVar19 = fStack_124 * fStack_124 + fVar22 * fVar22 + fStack_120 * fStack_120;
  auVar20 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
  fVar21 = auVar20._0_4_;
  fStack_128 = fVar21 * 0.5 * (3.0 - fVar19 * fVar21 * fVar21);
  fStack_124 = fStack_128 * fStack_124;
  fStack_120 = fStack_128 * fStack_120;
  fStack_128 = fStack_128 * fVar22;
  fStack_118 = fStack_134 * fStack_120 - fStack_130 * fStack_124;
  fStack_114 = fStack_130 * fStack_128 - fStack_120 * fStack_138;
  fStack_110 = fStack_124 * fStack_138 - fStack_134 * fStack_128;
  FUN_18063b470(&fStack_178,&fStack_138);
  fStack_138 = fStack_138 * fVar27;
  fStack_134 = fStack_134 * fVar27;
  fStack_130 = fStack_130 * fVar27;
  fStack_124 = fStack_124 * fVar27;
  fStack_128 = fStack_128 * fVar27;
  fStack_118 = fStack_118 * fVar27;
  fStack_120 = fStack_120 * fVar27;
  fStack_110 = fStack_110 * fVar27;
  fStack_114 = fStack_114 * fVar27;
  FUN_1801c13c0(&fStack_138,&fStack_158,&uStack_168);
  lStack_148 = lVar17 * 0x1b0;
  fVar19 = *(float *)(lStack_148 + 0x100 + *(longlong *)(param_4 + 0x140));
  uStack_168 = (longlong)cVar2 * 0x1b0;
  fVar21 = *(float *)(uStack_168 + 0x100 + *(longlong *)(param_4 + 0x140));
  fVar22 = (fVar19 + fVar19) * fVar21;
  uStack_188 = 1;
  fVar23 = fStack_158 * fStack_158 + fStack_154 * fStack_154;
  if (fVar22 <= 0.0001) {
    fVar22 = (fVar21 + fVar19) * (fVar21 + fVar19);
    if ((fVar23 < fVar22 - 0.0001) || (fVar22 + 0.0001 < fVar23)) {
      uStack_188 = 0;
    }
    fVar22 = 1.0;
    fVar23 = 0.0;
  }
  else {
    fVar22 = ((fVar23 - fVar19 * fVar19) - fVar21 * fVar21) / fVar22;
    if ((fVar22 < -1.0) || (1.0 < fVar22)) {
      uStack_188 = 0;
      if (-1.0 <= fVar22) {
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
      }
      else {
        fVar22 = -1.0;
      }
    }
    uVar18 = acosf(fVar22);
    fVar23 = (float)sinf(uVar18 ^ 0x80000000);
  }
  *(undefined1 *)(param_1 + 0x1c4) = uStack_188;
  fVar19 = fVar22 * fVar21 + fVar19;
  uVar16 = FUN_180535610(param_3,&fStack_138);
  FUN_18063b470(&fStack_158,uVar16);
  fVar19 = (float)atan2f(fVar19 * fStack_154 - fVar23 * fVar21 * fStack_158,
                         fVar19 * fStack_158 + fVar23 * fVar21 * fStack_154);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar19 * 0.5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806631b0(longlong param_1,longlong param_2)
void FUN_1806631b0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)&uStack_38;
  cVar5 = *(char *)(param_1 + 0xa4);
  iVar8 = 0;
  if (cVar5 != -1) {
    puVar7 = (undefined4 *)(param_1 + 0x130);
    do {
      if (*(char *)(param_1 + 0xa6) <= iVar8) break;
      *(undefined8 *)(puVar7 + -0x20) = 0x3f800000;
      *(undefined8 *)(puVar7 + -0x1e) = 0;
      lVar4 = *(longlong *)(param_2 + 0x18);
      lVar6 = (longlong)cVar5 * 0x100;
      do {
        LOCK();
        puVar1 = (uint *)(lVar6 + lVar4);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      puVar2 = (undefined4 *)(lVar6 + 4 + lVar4);
      uStack_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      puVar2 = (undefined4 *)(lVar6 + 0x14 + lVar4);
      uStack_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      *(undefined4 *)(lVar6 + lVar4) = 0;
      iVar8 = iVar8 + 1;
      *puVar7 = uStack_38;
      puVar7[1] = uStack_34;
      puVar7[2] = uStack_30;
      puVar7[3] = uStack_2c;
      puVar7 = puVar7 + 4;
      cVar5 = *(char *)(lVar6 + 0xa0 + *(longlong *)(param_2 + 0x18));
    } while (cVar5 != -1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)&uStack_38);
}





// 函数: void FUN_180663270(longlong param_1,float param_2,undefined8 param_3)
void FUN_180663270(longlong param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x1d0);
  fVar4 = 0.0;
  if ((fVar2 == 0.0) && (0.0 < *(float *)(param_1 + 0x1d4))) {
    FUN_1806631b0(fVar2,param_3);
    fVar2 = *(float *)(param_1 + 0x1d0);
  }
  fVar1 = *(float *)(param_1 + 0x1d4);
  if (fVar2 != fVar1) {
    param_2 = param_2 * *(float *)(param_1 + 0x1d8);
    fVar3 = fVar1 - fVar2;
    if ((-param_2 <= fVar3) && (fVar3 < param_2)) {
      *(float *)(param_1 + 0x1d0) = fVar1;
      return;
    }
    if (fVar3 < fVar4) {
      param_2 = -param_2;
    }
    *(float *)(param_1 + 0x1d0) = param_2 + fVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




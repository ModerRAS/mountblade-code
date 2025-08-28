#include "TaleWorlds.Native.Split.h"

// 03_rendering_part459.c - 5 个函数

// 函数: void FUN_180514820(float param_1,longlong param_2)
void FUN_180514820(float param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  longlong unaff_RBX;
  undefined4 *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  ushort unaff_R12W;
  float in_XMM1_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined4 unaff_XMM15_Da;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  
  param_1 = param_1 - in_XMM1_Da;
  *(float *)(param_2 + 0x50) = unaff_XMM11_Da * param_1 + *(float *)(param_2 + 0x50);
  *(float *)(param_2 + 0x54) = unaff_XMM9_Da * param_1 + *(float *)(param_2 + 0x54);
  *(float *)(param_2 + 0x58) = unaff_XMM12_Da * param_1 + *(float *)(param_2 + 0x58);
  *(undefined4 *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) = 0x3dcccccd;
  lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x36f8 + unaff_RSI) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(in_R10 + lVar5);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar3 & 1) != 0);
  puVar2 = (undefined4 *)(in_R10 + 4 + lVar5);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  pfVar14 = (float *)(in_R10 + 0x14 + lVar5);
  fVar4 = *pfVar14;
  fVar11 = pfVar14[1];
  fVar12 = pfVar14[2];
  fVar13 = pfVar14[3];
  unaff_RBP[0x30] = uVar7;
  unaff_RBP[0x31] = uVar8;
  unaff_RBP[0x32] = uVar9;
  unaff_RBP[0x33] = uVar10;
  unaff_RBP[0x34] = fVar4;
  unaff_RBP[0x35] = fVar11;
  unaff_RBP[0x36] = fVar12;
  unaff_RBP[0x37] = fVar13;
  *(undefined4 *)(in_R10 + lVar5) = 0;
  lVar5 = *(longlong *)(unaff_RDI + 0x3778 + unaff_RSI);
  lVar6 = *(longlong *)(unaff_RBX + 0x728);
  *unaff_RBP = uVar7;
  unaff_RBP[1] = uVar8;
  unaff_RBP[2] = uVar9;
  unaff_RBP[3] = uVar10;
  unaff_RBP[4] = fVar4;
  unaff_RBP[5] = fVar11;
  unaff_RBP[6] = fVar12;
  unaff_RBP[7] = fVar13;
  pfVar14 = (float *)FUN_180534930(*(longlong *)(lVar5 + 0x8a8) + 0x70,unaff_RBP + 0xc,lVar6 + 0x50)
  ;
  uStack0000000000000074 = 0x7f7fffff;
  in_stack_00000068 = *pfVar14 - fVar4;
  fStack000000000000006c = pfVar14[1] - fVar11;
  in_stack_00000070 = pfVar14[2] - fVar12;
  FUN_180285b40(fVar11,unaff_RBP + -0x14,&stack0x00000068);
  puVar2 = *(undefined4 **)(unaff_RBX + 0x728);
  uVar7 = unaff_RBP[-0x13];
  uVar8 = unaff_RBP[-0x12];
  uVar9 = unaff_RBP[-0x11];
  *puVar2 = unaff_RBP[-0x14];
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  lVar5 = *(longlong *)(unaff_RBX + 0x728);
  if ((unaff_R12W & 0x40) == 0) {
    unaff_XMM15_Da = 0x7149f2ca;
  }
  FUN_180575360(*(undefined8 *)(unaff_RBX + 0x590),lVar5 + 0x50,lVar5 + 0x40,
                *(float *)(lVar5 + 0x59c) / *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),
                unaff_XMM15_Da);
  fVar4 = (float)unaff_RBP[0x7c];
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x598) = fVar4;
  *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x578) =
       *(longlong *)
        (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (longlong)(fVar4 * -100000.0);
  lVar5 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(lVar5 + 0x10) = uStack0000000000000078;
  *(undefined4 *)(lVar5 + 0x14) = uStack000000000000007c;
  *(undefined4 *)(lVar5 + 0x18) = uStack0000000000000080;
  *(undefined4 *)(lVar5 + 0x1c) = uStack0000000000000084;
  FUN_180516bd0(uStack0000000000000078,unaff_R12W,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x38) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180514987(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180514987(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined2 unaff_R12W;
  undefined1 uStack0000000000000028;
  undefined8 uStack0000000000000038;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  
  uStack0000000000000028 = 1;
  uStack0000000000000038 = param_4;
  FUN_180575360(param_1,param_2 + 0x50,param_2 + 0x40,
                *(float *)(param_2 + 0x59c) / *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
  fVar1 = *(float *)(unaff_RBP + 0x1f0);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x598) = fVar1;
  *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x578) =
       *(longlong *)
        (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (longlong)(fVar1 * -100000.0);
  lVar2 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(lVar2 + 0x10) = uStack0000000000000078;
  *(undefined4 *)(lVar2 + 0x14) = uStack000000000000007c;
  *(undefined4 *)(lVar2 + 0x18) = uStack0000000000000080;
  *(undefined4 *)(lVar2 + 0x1c) = uStack0000000000000084;
  FUN_180516bd0(uStack0000000000000078,unaff_R12W,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xe0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180514a3c(void)
void FUN_180514a3c(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xe0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180514a60(longlong param_1)
void FUN_180514a60(longlong param_1)

{
  ushort *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined4 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  undefined1 auStack_108 [16];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  lVar8 = *(longlong *)(param_1 + 0x8d8);
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x728) + 0x5a4) * 0xa60;
  lVar7 = *(longlong *)(lVar11 + 0x36f8 + lVar8);
  if (lVar7 != 0) {
    puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(param_1 + 0x728) + 0x5a8) * 0x100 +
                      *(longlong *)(lVar7 + 0x18));
    do {
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    uStack_128 = puVar10[1];
    uStack_124 = puVar10[2];
    uStack_120 = puVar10[3];
    uStack_11c = puVar10[4];
    fVar16 = (float)puVar10[5];
    fVar18 = (float)puVar10[6];
    fVar13 = (float)puVar10[7];
    uStack_10c = puVar10[8];
    *puVar10 = 0;
    lVar7 = *(longlong *)(param_1 + 0x728);
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x3778 + lVar8) + 0x8a8);
    fStack_118 = fVar16;
    fStack_114 = fVar18;
    fStack_110 = fVar13;
    uStack_f8 = uStack_128;
    uStack_f4 = uStack_124;
    uStack_f0 = uStack_120;
    uStack_ec = uStack_11c;
    fStack_e8 = fVar16;
    fStack_e4 = fVar18;
    fStack_e0 = fVar13;
    uStack_dc = uStack_10c;
    pfVar6 = (float *)FUN_1801c0fb0(&uStack_128,auStack_108);
    fVar21 = (fVar13 + pfVar6[2]) * *(float *)(lVar12 + 0x98) + *(float *)(lVar12 + 0xa8);
    fVar13 = (fVar18 + pfVar6[1]) * *(float *)(lVar12 + 0x80) +
             (fVar16 + *pfVar6) * *(float *)(lVar12 + 0x70) + *(float *)(lVar12 + 0xa0);
    fVar16 = (fVar18 + pfVar6[1]) * *(float *)(lVar12 + 0x84) +
             (fVar16 + *pfVar6) * *(float *)(lVar12 + 0x74) + *(float *)(lVar12 + 0xa4);
    *(float *)(lVar7 + 0x50) = fVar13;
    *(float *)(lVar7 + 0x54) = fVar16;
    *(float *)(lVar7 + 0x58) = fVar21;
    *(undefined4 *)(lVar7 + 0x5c) = 0x7f7fffff;
    uStack_158 = CONCAT44(fVar16,fVar13);
    uStack_150 = CONCAT44(0x7f7fffff,fVar21);
    if ((*(ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa) & 0x280) == 0) {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0x128))
                        (*(longlong **)(param_1 + 0x590),1);
      if (lVar7 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x728);
        uVar9 = *(ushort *)(lVar8 + 0x5aa) & 0x40;
        if (uVar9 != 0) {
          *(ushort *)(lVar8 + 0x5ac) = *(ushort *)(lVar8 + 0x5ac) | uVar9;
          puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
          *puVar1 = *puVar1 & ~uVar9;
          lVar8 = *(longlong *)(param_1 + 0x728);
        }
        *(undefined4 *)(lVar8 + 0x5a4) = 0xffffffff;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x728);
        fVar16 = *(float *)(lVar7 + 0xa4);
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
        fVar18 = *(float *)(lVar7 + 0xa8);
        lVar5 = *(longlong *)(param_1 + 0x20);
        fStack_144 = *(float *)(lVar7 + 0xb4) * *(float *)(lVar12 + 0x80) +
                     *(float *)(lVar7 + 0xb0) * *(float *)(lVar12 + 0x70) +
                     *(float *)(lVar12 + 0xa0);
        fStack_140 = *(float *)(lVar12 + 0x98) * *(float *)(lVar7 + 0xb8) +
                     *(float *)(lVar12 + 0xa8);
        fStack_148 = *(float *)(lVar7 + 0xb0) * *(float *)(lVar12 + 0x74) +
                     *(float *)(lVar7 + 0xb4) * *(float *)(lVar12 + 0x84) +
                     *(float *)(lVar12 + 0xa4);
        lVar8 = *(longlong *)(lVar11 + 0x30c0 + lVar8);
        fVar21 = *(float *)(lVar7 + 0xa0) * fVar18;
        fVar13 = fVar16 * *(float *)(lVar7 + 0xac);
        fVar22 = fVar18 * *(float *)(lVar7 + 0xac) - *(float *)(lVar7 + 0xa0) * fVar16;
        fStack_134 = *(float *)(lVar8 + 0x10) - *(float *)(lVar5 + 0x10);
        fStack_130 = *(float *)(lVar8 + 0x14) - *(float *)(lVar5 + 0x14);
        fVar22 = fVar22 + fVar22;
        fVar17 = fVar21 + fVar21 + fVar13 + fVar13;
        fVar13 = *(float *)(param_1 + 0x530);
        fVar21 = *(float *)(param_1 + 0x520);
        fVar3 = *(float *)(param_1 + 0x534);
        fVar4 = *(float *)(param_1 + 0x524);
        fStack_138 = *(float *)(lVar8 + 0xc) - *(float *)(lVar5 + 0xc);
        uStack_12c = 0x7f7fffff;
        fVar14 = fStack_134 * fStack_134 + fStack_138 * fStack_138 + fStack_130 * fStack_130;
        auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar23 = auVar15._0_4_;
        fVar14 = fVar23 * 0.5 * (3.0 - fVar14 * fVar23 * fVar23);
        *(float *)(lVar7 + 0x70) = fStack_138 * fVar14;
        *(float *)(lVar7 + 0x74) = fStack_134 * fVar14;
        *(float *)(lVar7 + 0x78) = fStack_130 * fVar14;
        *(undefined4 *)(lVar7 + 0x7c) = 0x7f7fffff;
        lVar8 = *(longlong *)(param_1 + 0x728);
        fVar14 = *(float *)(lVar8 + 0x78) * *(float *)(lVar8 + 100) -
                 *(float *)(lVar8 + 0x74) * *(float *)(lVar8 + 0x68);
        uStack_158 = *(undefined8 *)(lVar8 + 0x40);
        uStack_150 = *(undefined8 *)(lVar8 + 0x48);
        fVar23 = *(float *)(lVar8 + 0x70) * *(float *)(lVar8 + 0x68) -
                 *(float *)(lVar8 + 0x60) * *(float *)(lVar8 + 0x78);
        fVar24 = *(float *)(lVar8 + 0x60) * *(float *)(lVar8 + 0x74) -
                 *(float *)(lVar8 + 0x70) * *(float *)(lVar8 + 100);
        if (((fVar14 != 0.0) || (fVar23 != 0.0)) || (fVar24 != 0.0)) {
          fVar18 = fVar23 * fVar23 + fVar14 * fVar14 + fVar24 * fVar24;
          auVar15 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar16 = auVar15._0_4_;
          fVar18 = fVar16 * 0.5 * (3.0 - fVar18 * fVar16 * fVar16) * fVar18;
          fVar16 = 0.0;
          if ((0.0 <= fVar18) && (fVar16 = fVar18, 1.0 <= fVar18)) {
            fVar16 = 1.0;
          }
          fVar16 = (float)asinf(fVar16);
                    // WARNING: Subroutine does not return
          FUN_1808fd400(fVar16 * 0.5);
        }
        puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(param_1 + 0x590) + 0x25fb) * 0x100 +
                          *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
        do {
          LOCK();
          uVar2 = *puVar10;
          *puVar10 = *puVar10 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        fStack_d8 = (float)puVar10[1];
        fStack_d4 = (float)puVar10[2];
        fStack_d0 = (float)puVar10[3];
        fStack_cc = (float)puVar10[4];
        uStack_c8 = *(undefined8 *)(puVar10 + 5);
        uStack_c0 = *(undefined8 *)(puVar10 + 7);
        *puVar10 = 0;
        lVar8 = *(longlong *)(param_1 + 0x728);
        fVar20 = *(float *)(lVar8 + 0x54) - fStack_148;
        fVar14 = *(float *)(lVar8 + 0x58) - fStack_140;
        fVar24 = fStack_d0 * fStack_cc - fStack_d8 * fStack_d4;
        fVar23 = *(float *)(lVar8 + 0x50) - fStack_144;
        fVar19 = fStack_d8 * fStack_d0 + fStack_d8 * fStack_d0 +
                 fStack_d4 * fStack_cc + fStack_d4 * fStack_cc;
        fVar24 = fVar24 + fVar24;
        fVar24 = (fVar24 * *(float *)(param_1 + 0x530) + fVar19 * *(float *)(param_1 + 0x520)) *
                 fVar23 + (fVar24 * *(float *)(param_1 + 0x534) +
                          fVar19 * *(float *)(param_1 + 0x524)) * fVar20 +
                 (1.0 - (fStack_d0 * fStack_d0 + fStack_d0 * fStack_d0 +
                        fStack_d4 * fStack_d4 + fStack_d4 * fStack_d4)) * fVar14;
        if (((((fVar22 * fVar3 + fVar17 * fVar4) * fVar20 +
               (fVar17 * fVar21 + fVar22 * fVar13) * fVar23 +
              (1.0 - (fVar16 * fVar16 + fVar16 * fVar16 + fVar18 * fVar18 + fVar18 * fVar18)) *
              fVar14) / (SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar14 * fVar14) + 1e-06) < 0.8)
            || (fVar24 < 0.3)) || (*(float *)(lVar8 + 0x4f0) + 0.01 < fVar24)) {
          uVar9 = *(ushort *)(lVar8 + 0x5aa) & 0x40;
          if (uVar9 != 0) {
            *(ushort *)(lVar8 + 0x5ac) = *(ushort *)(lVar8 + 0x5ac) | uVar9;
            puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
            *puVar1 = *puVar1 & ~uVar9;
            lVar8 = *(longlong *)(param_1 + 0x728);
          }
          *(undefined4 *)(lVar8 + 0x5a4) = 0xffffffff;
        }
        else {
          *(float *)(lVar8 + 0x59c) = fVar24;
          uStack_160 = *(undefined8 *)(param_1 + 0x658);
          uStack_168 = *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0x2600);
          uStack_170 = 1;
          uStack_178 = 0x3f800000;
          FUN_180575360(*(longlong *)(param_1 + 0x590),*(longlong *)(param_1 + 0x728) + 0x50,
                        &uStack_158,
                        *(float *)(*(longlong *)(param_1 + 0x728) + 0x59c) /
                        *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0));
        }
      }
    }
    else {
      FUN_180515880(param_1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_180514acc(undefined8 param_1,uint *param_2)
void FUN_180514acc(undefined8 param_1,uint *param_2)

{
  ushort *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  ushort uVar11;
  uint *puVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  longlong in_R11;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 unaff_XMM6_Da;
  float fVar24;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM9_Da;
  float fVar25;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  float fVar26;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM12_Da;
  float fVar27;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Dc;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000178;
  
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  do {
    LOCK();
    uVar2 = *param_2;
    *param_2 = *param_2 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  uStack0000000000000070 = param_2[1];
  uStack0000000000000074 = param_2[2];
  uStack0000000000000078 = param_2[3];
  uStack000000000000007c = param_2[4];
  fVar19 = (float)param_2[5];
  fVar22 = (float)param_2[6];
  fVar15 = (float)param_2[7];
  uVar2 = param_2[8];
  *(uint *)(unaff_RBP + -0x60) = uStack0000000000000070;
  *(uint *)(unaff_RBP + -0x5c) = uStack0000000000000074;
  *(uint *)(unaff_RBP + -0x58) = uStack0000000000000078;
  *(uint *)(unaff_RBP + -0x54) = uStack000000000000007c;
  *(float *)(unaff_RBP + -0x50) = fVar19;
  *(float *)(unaff_RBP + -0x4c) = fVar22;
  *(float *)(unaff_RBP + -0x48) = fVar15;
  *(uint *)(unaff_RBP + -0x44) = uVar2;
  *param_2 = 0;
  lVar10 = *(longlong *)(unaff_RDI + 0x3778 + unaff_RSI);
  lVar13 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(unaff_RBP + -0x80) = fVar19;
  *(float *)(unaff_RBP + -0x7c) = fVar22;
  *(float *)(unaff_RBP + -0x78) = fVar15;
  *(uint *)(unaff_RBP + -0x74) = uVar2;
  lVar10 = *(longlong *)(lVar10 + 0x8a8);
  pfVar9 = (float *)FUN_1801c0fb0(&stack0x00000070,unaff_RBP + -0x70);
  fVar24 = (fVar15 + pfVar9[2]) * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
  fVar15 = (fVar22 + pfVar9[1]) * *(float *)(lVar10 + 0x80) +
           (fVar19 + *pfVar9) * *(float *)(lVar10 + 0x70) + *(float *)(lVar10 + 0xa0);
  fVar19 = (fVar22 + pfVar9[1]) * *(float *)(lVar10 + 0x84) +
           (fVar19 + *pfVar9) * *(float *)(lVar10 + 0x74) + *(float *)(lVar10 + 0xa4);
  *(float *)(lVar13 + 0x50) = fVar15;
  *(float *)(lVar13 + 0x54) = fVar19;
  *(float *)(lVar13 + 0x58) = fVar24;
  *(undefined4 *)(lVar13 + 0x5c) = 0x7f7fffff;
  in_stack_00000040 = CONCAT44(fVar19,fVar15);
  in_stack_00000048 = CONCAT44(0x7f7fffff,fVar24);
  if ((*(ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa) & 0x280) == 0) {
    lVar10 = (**(code **)(**(longlong **)(unaff_RBX + 0x590) + 0x128))
                       (*(longlong **)(unaff_RBX + 0x590),1);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(unaff_RBX + 0x728);
      uVar11 = *(ushort *)(lVar10 + 0x5aa) & 0x40;
      if (uVar11 != 0) {
        *(ushort *)(lVar10 + 0x5ac) = *(ushort *)(lVar10 + 0x5ac) | uVar11;
        puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar11;
        lVar10 = *(longlong *)(unaff_RBX + 0x728);
      }
      *(undefined4 *)(lVar10 + 0x5a4) = 0xffffffff;
    }
    else {
      lVar10 = *(longlong *)(unaff_RBX + 0x728);
      fVar19 = *(float *)(lVar10 + 0xa4);
      lVar13 = *(longlong *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8a8);
      fVar22 = *(float *)(lVar10 + 0xa8);
      lVar5 = *(longlong *)(unaff_RBX + 0x20);
      fStack0000000000000054 =
           *(float *)(lVar10 + 0xb4) * *(float *)(lVar13 + 0x80) +
           *(float *)(lVar10 + 0xb0) * *(float *)(lVar13 + 0x70) + *(float *)(lVar13 + 0xa0);
      in_stack_00000058 =
           *(float *)(lVar13 + 0x98) * *(float *)(lVar10 + 0xb8) + *(float *)(lVar13 + 0xa8);
      fStack0000000000000050 =
           *(float *)(lVar10 + 0xb0) * *(float *)(lVar13 + 0x74) +
           *(float *)(lVar10 + 0xb4) * *(float *)(lVar13 + 0x84) + *(float *)(lVar13 + 0xa4);
      lVar13 = *(longlong *)(unaff_RDI + 0x30c0 + unaff_RSI);
      fVar24 = *(float *)(lVar10 + 0xa0) * fVar22;
      fVar15 = fVar19 * *(float *)(lVar10 + 0xac);
      fVar25 = fVar22 * *(float *)(lVar10 + 0xac) - *(float *)(lVar10 + 0xa0) * fVar19;
      fStack0000000000000064 = *(float *)(lVar13 + 0x10) - *(float *)(lVar5 + 0x10);
      fStack0000000000000068 = *(float *)(lVar13 + 0x14) - *(float *)(lVar5 + 0x14);
      fVar25 = fVar25 + fVar25;
      fVar20 = fVar24 + fVar24 + fVar15 + fVar15;
      fVar15 = *(float *)(unaff_RBX + 0x530);
      fVar24 = *(float *)(unaff_RBX + 0x520);
      fVar3 = *(float *)(unaff_RBX + 0x534);
      fVar4 = *(float *)(unaff_RBX + 0x524);
      fStack0000000000000060 = *(float *)(lVar13 + 0xc) - *(float *)(lVar5 + 0xc);
      uStack000000000000006c = 0x7f7fffff;
      fVar16 = fStack0000000000000064 * fStack0000000000000064 +
               fStack0000000000000060 * fStack0000000000000060 +
               fStack0000000000000068 * fStack0000000000000068;
      auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar26 = auVar18._0_4_;
      fVar16 = fVar26 * 0.5 * (3.0 - fVar16 * fVar26 * fVar26);
      *(float *)(lVar10 + 0x70) = fStack0000000000000060 * fVar16;
      *(float *)(lVar10 + 0x74) = fStack0000000000000064 * fVar16;
      *(float *)(lVar10 + 0x78) = fStack0000000000000068 * fVar16;
      *(undefined4 *)(lVar10 + 0x7c) = 0x7f7fffff;
      lVar10 = *(longlong *)(unaff_RBX + 0x728);
      fVar16 = *(float *)(lVar10 + 0x78) * *(float *)(lVar10 + 100) -
               *(float *)(lVar10 + 0x74) * *(float *)(lVar10 + 0x68);
      in_stack_00000040 = *(undefined8 *)(lVar10 + 0x40);
      in_stack_00000048 = *(undefined8 *)(lVar10 + 0x48);
      fVar26 = *(float *)(lVar10 + 0x70) * *(float *)(lVar10 + 0x68) -
               *(float *)(lVar10 + 0x60) * *(float *)(lVar10 + 0x78);
      fVar27 = *(float *)(lVar10 + 0x60) * *(float *)(lVar10 + 0x74) -
               *(float *)(lVar10 + 0x70) * *(float *)(lVar10 + 100);
      if (((fVar16 != 0.0) || (fVar26 != 0.0)) || (fVar27 != 0.0)) {
        fVar22 = fVar26 * fVar26 + fVar16 * fVar16 + fVar27 * fVar27;
        auVar18 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
        fVar19 = auVar18._0_4_;
        fVar22 = fVar19 * 0.5 * (3.0 - fVar22 * fVar19 * fVar19) * fVar22;
        fVar19 = 0.0;
        if ((0.0 <= fVar22) && (fVar19 = fVar22, 1.0 <= fVar22)) {
          fVar19 = 1.0;
        }
        fVar19 = (float)asinf(fVar19);
                    // WARNING: Subroutine does not return
        FUN_1808fd400(fVar19 * 0.5);
      }
      puVar12 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb) * 0x100 +
                        *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar12;
        *puVar12 = *puVar12 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      fVar16 = (float)puVar12[1];
      fVar26 = (float)puVar12[2];
      fVar27 = (float)puVar12[3];
      fVar6 = (float)puVar12[4];
      uVar7 = *(undefined8 *)(puVar12 + 5);
      uVar8 = *(undefined8 *)(puVar12 + 7);
      *(float *)(unaff_RBP + -0x40) = fVar16;
      *(float *)(unaff_RBP + -0x3c) = fVar26;
      *(float *)(unaff_RBP + -0x38) = fVar27;
      *(float *)(unaff_RBP + -0x34) = fVar6;
      *(undefined8 *)(unaff_RBP + -0x30) = uVar7;
      *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
      *puVar12 = 0;
      lVar10 = *(longlong *)(unaff_RBX + 0x728);
      fVar23 = *(float *)(lVar10 + 0x54) - fStack0000000000000050;
      fVar14 = *(float *)(lVar10 + 0x58) - in_stack_00000058;
      fVar21 = fVar27 * fVar6 - fVar16 * fVar26;
      fVar17 = *(float *)(lVar10 + 0x50) - fStack0000000000000054;
      fVar16 = fVar16 * fVar27 + fVar16 * fVar27 + fVar26 * fVar6 + fVar26 * fVar6;
      fVar21 = fVar21 + fVar21;
      fVar16 = (fVar21 * *(float *)(unaff_RBX + 0x530) + fVar16 * *(float *)(unaff_RBX + 0x520)) *
               fVar17 + (fVar21 * *(float *)(unaff_RBX + 0x534) +
                        fVar16 * *(float *)(unaff_RBX + 0x524)) * fVar23 +
               (1.0 - (fVar27 * fVar27 + fVar27 * fVar27 + fVar26 * fVar26 + fVar26 * fVar26)) *
               fVar14;
      in_stack_000000f0 = unaff_XMM15_Da;
      in_stack_000000f8 = unaff_XMM15_Dc;
      in_stack_00000100 = unaff_XMM14_Da;
      in_stack_00000108 = unaff_XMM14_Dc;
      in_stack_00000110 = unaff_XMM13_Da;
      in_stack_00000118 = unaff_XMM13_Dc;
      in_stack_00000120 = unaff_XMM12_Da;
      in_stack_00000128 = unaff_XMM12_Dc;
      in_stack_00000130 = unaff_XMM11_Da;
      in_stack_00000138 = unaff_XMM11_Dc;
      in_stack_00000140 = unaff_XMM10_Da;
      in_stack_00000148 = unaff_XMM10_Dc;
      in_stack_00000150 = unaff_XMM9_Da;
      in_stack_00000158 = unaff_XMM9_Dc;
      in_stack_00000160 = unaff_XMM8_Da;
      in_stack_00000168 = unaff_XMM8_Dc;
      in_stack_00000170 = unaff_XMM7_Da;
      in_stack_00000178 = unaff_XMM7_Dc;
      if (((((fVar25 * fVar3 + fVar20 * fVar4) * fVar23 +
             (fVar20 * fVar24 + fVar25 * fVar15) * fVar17 +
            (1.0 - (fVar19 * fVar19 + fVar19 * fVar19 + fVar22 * fVar22 + fVar22 * fVar22)) * fVar14
            ) / (SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar14 * fVar14) + 1e-06) < 0.8) ||
          (fVar16 < 0.3)) || (*(float *)(lVar10 + 0x4f0) + 0.01 < fVar16)) {
        uVar11 = *(ushort *)(lVar10 + 0x5aa) & 0x40;
        if (uVar11 != 0) {
          *(ushort *)(lVar10 + 0x5ac) = *(ushort *)(lVar10 + 0x5ac) | uVar11;
          puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
          *puVar1 = *puVar1 & ~uVar11;
          lVar10 = *(longlong *)(unaff_RBX + 0x728);
        }
        *(undefined4 *)(lVar10 + 0x5a4) = 0xffffffff;
      }
      else {
        *(float *)(lVar10 + 0x59c) = fVar16;
        FUN_180575360(*(undefined8 *)(unaff_RBX + 0x590),*(longlong *)(unaff_RBX + 0x728) + 0x50,
                      &stack0x00000040,
                      *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) /
                      *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),0x3f800000);
      }
    }
  }
  else {
    FUN_180515880();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






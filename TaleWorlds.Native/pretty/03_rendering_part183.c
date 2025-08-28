#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part183.c - 1 个函数

// 函数: void FUN_180376b03(void)
void FUN_180376b03(void)

{
  ushort uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  void *puVar18;
  uint uVar19;
  ulonglong unaff_RBX;
  float *unaff_RBP;
  int32_t *unaff_RSI;
  longlong lVar20;
  longlong unaff_RDI;
  uint64_t *puVar21;
  float fVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  void *puVar27;
  char cVar28;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t *puVar29;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  float fVar39;
  int32_t unaff_XMM6_Da;
  float fVar40;
  float fVar41;
  float fVar42;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar43;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar44;
  float fVar45;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fVar46;
  float fVar47;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_R13;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  uVar12 = FUN_1801b4a60();
  lVar15 = render_system_data_ui;
  *(uint64_t *)(unaff_RBP + 0x46) = uVar12;
  if ((int)unaff_RBX < 0) {
    unaff_RBX = 0;
  }
  else {
    uVar23 = *(longlong *)(lVar15 + 0xd0) - *(longlong *)(lVar15 + 200) >> 3;
    if (unaff_RBX == uVar23) {
      unaff_RBX = (ulonglong)((int)uVar23 - 1);
    }
  }
  lVar15 = *(longlong *)(lVar15 + 200);
  fVar44 = 0.0;
  unaff_RBP[-0x18] = 0.0;
  unaff_RBP[-0xb] = 0.0;
  lVar15 = *(longlong *)(lVar15 + (longlong)(int)unaff_RBX * 8);
  *(longlong *)(unaff_RBP + -0x10) = lVar15;
  *(uint64_t *)(unaff_RBP + 8) = *(uint64_t *)(lVar15 + 0x68 + unaff_R14 * 8);
  *(int32_t *)(unaff_RDI + 0x50) = *unaff_RSI;
  fVar40 = (float)unaff_RSI[1];
  uVar10 = unaff_RSI[2];
  fVar31 = (float)unaff_RSI[3];
  unaff_RBP[-10] = fVar31;
  if (0.0 < fVar40) {
    uVar10 = uVar10 ^ 0x41c64e6d ^ (uVar10 ^ 0x41c64e6d) << 0xd;
    uVar10 = uVar10 ^ uVar10 >> 0x11;
    uVar10 = uVar10 ^ uVar10 << 5;
    fVar44 = (float)(uVar10 - 1) * 1.1641532e-08 + 50.0;
    unaff_RBP[-0x18] = fVar44;
    if (0.0 < fVar31) {
      unaff_RBP[-0x18] = fVar31;
      fVar44 = fVar31;
    }
    if (0.0 < (float)unaff_RSI[4]) {
      unaff_RBP[-0xb] = (float)unaff_RSI[4];
    }
    uVar10 = uVar10 ^ uVar10 << 0xd;
    uVar10 = uVar10 ^ uVar10 >> 0x11;
    fVar40 = ((float)((uVar10 ^ uVar10 << 5) - 1) * 1.1641532e-10 + 0.5) * fVar40;
  }
  puVar29 = (uint64_t *)(unaff_RDI + 0xa8);
  *(uint64_t *)(unaff_RDI + 0x88) = *(uint64_t *)(unaff_RDI + 0x80);
  puVar21 = (uint64_t *)(unaff_RDI + 0xd0);
  *(uint64_t *)(unaff_RDI + 0xb0) = *puVar29;
  *(uint64_t **)(unaff_RBP + 0x1a) = (uint64_t *)(unaff_RDI + 0x80);
  *(uint64_t *)(unaff_RDI + 0xd8) = *puVar21;
  *(uint64_t **)(unaff_RBP + 0x18) = puVar29;
  *(uint64_t **)(unaff_RBP + 0x44) = puVar21;
  FUN_18037ee20();
  if ((*(uint *)(lVar15 + 0x60) & 0x400000) != 0) {
    FUN_18037ee20(puVar29);
    FUN_18014e8b0(puVar21);
  }
  if (fVar40 < 0.001) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
  }
  if (0.0 < (float)unaff_RSI[3]) {
    fVar44 = 75.0;
  }
  fStack000000000000003c = fVar44 / fVar40;
  if ((*(uint *)(lVar15 + 0x60) >> 0x16 & 1) == 0) {
    if (fStack000000000000003c < 0.5) {
      fStack000000000000003c = 0.5;
    }
    else if (100.0 <= fStack000000000000003c) {
      fStack000000000000003c = 100.0;
    }
  }
  else {
    fVar40 = 2.0;
    if ((2.0 <= fStack000000000000003c) &&
       (fVar40 = fStack000000000000003c, 100.0 <= fStack000000000000003c)) {
      fVar40 = 100.0;
    }
    fStack000000000000003c = fVar40;
    if ((int)*(uint *)(lVar15 + 0x60) < 0) {
      if (*(int *)(SYSTEM_STATE_MANAGER + 0xe0) == 0) {
        fVar31 = 0.2;
      }
      else {
        fVar31 = 0.08;
      }
      fStack000000000000003c = fVar40 * ((float)unaff_RSI[10] + (float)unaff_RSI[6]) * fVar31;
    }
  }
  iVar11 = *(int *)(SYSTEM_STATE_MANAGER + 0xe0);
  unaff_RBP[0x7e] = 1.4013e-43;
  unaff_RBP[0x7a] = 0.0;
  unaff_RBP[0x7b] = 4.2039e-44;
  unaff_RBP[0x7c] = 8.40779e-44;
  unaff_RBP[0x7d] = 1.26117e-43;
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (4 < iVar11) {
    iVar11 = 4;
  }
  uVar10 = unaff_RSI[2];
  unaff_RBP[10] = unaff_RBP[(longlong)iVar11 + 0x7a];
  fVar40 = *(float *)(*(longlong *)(unaff_RBP + -8) + 0x154);
  fVar31 = *(float *)(*(longlong *)(unaff_RBP + -8) + 0x158);
  unaff_RBP[-1] = fVar40;
  unaff_RBP[-2] = fVar31 - fVar40;
  fVar40 = fStack000000000000003c * 1000.0;
  if (fVar40 <= 0.0) {
    fVar40 = fVar40 - 0.9999999;
  }
  uVar12 = *(uint64_t *)(unaff_RSI + 0xc);
  uVar2 = *(uint64_t *)(unaff_RSI + 6);
  uVar4 = *(uint64_t *)(unaff_RSI + 8);
  *(uint64_t *)(unaff_RBP + 0x4c) = *(uint64_t *)(unaff_RSI + 10);
  *(uint64_t *)(unaff_RBP + 0x4e) = uVar12;
  uVar19 = (int)fVar40 ^ 0x41c64e6dU ^ uVar10;
  fVar40 = (float)(uVar10 ^ 0x41c64e6d);
  fVar31 = 1.0 - (float)unaff_RSI[5];
  *(uint64_t *)(unaff_RBP + 0x50) = uVar2;
  *(uint64_t *)(unaff_RBP + 0x52) = uVar4;
  uVar12 = *(uint64_t *)(unaff_RSI + 0x10);
  *(uint64_t *)(unaff_RBP + 0x54) = *(uint64_t *)(unaff_RSI + 0xe);
  *(uint64_t *)(unaff_RBP + 0x56) = uVar12;
  if (0.0 <= fVar31) {
    if (1.0 <= fVar31) {
      fVar31 = 1.0;
    }
    unaff_RBP[-0xc] = fVar31;
  }
  else {
    unaff_RBP[-0xc] = 0.0;
  }
  fVar31 = *(float *)(unaff_R15 + 0x3004);
  fVar44 = *(float *)(unaff_R15 + 0x3008);
  fVar22 = fVar31;
  if (0.0 < fVar31) {
    fVar22 = 0.0;
  }
  fVar33 = fVar44;
  if (0.0 < fVar44) {
    fVar33 = 0.0;
  }
  if (fVar31 < 0.0) {
    fVar31 = 0.0;
  }
  fVar42 = fVar44;
  if (fVar44 < 0.0) {
    fVar42 = 0.0;
  }
  fVar32 = *(float *)(unaff_R15 + 0x300c);
  fVar41 = *(float *)(unaff_R15 + 0x3010);
  if (fVar32 <= fVar22) {
    unaff_RBP[0x10] = fVar32;
  }
  else {
    unaff_RBP[0x10] = fVar22;
  }
  if (fVar41 <= fVar33) {
    unaff_RBP[0x11] = fVar41;
  }
  else {
    unaff_RBP[0x11] = fVar33;
  }
  if (fVar31 <= fVar32) {
    unaff_RBP[0xc] = fVar32;
  }
  else {
    unaff_RBP[0xc] = fVar31;
  }
  if (fVar42 <= fVar41) {
    unaff_RBP[0xd] = fVar41;
  }
  else {
    unaff_RBP[0xd] = fVar42;
  }
  lVar20 = *(longlong *)(*(longlong *)(unaff_RBP + 8) + 8);
  uVar23 = *(longlong *)(*(longlong *)(unaff_RBP + 8) + 0x10) - lVar20 >> 3;
  fVar32 = fVar32 - (fVar32 + *(float *)(unaff_R15 + 0x3004)) * 0.5;
  fVar31 = 0.0;
  unaff_RBP[-0xd] = 0.0;
  fVar41 = fVar41 - (fVar44 + fVar41) * 0.5;
  *unaff_RBP = fVar41 * fVar41 + fVar32 * fVar32;
  fVar44 = *(float *)(lVar15 + 100) * 0.5;
  if ((int)uVar23 != 0) {
    uVar14 = 0;
    uVar26 = uVar23 & 0xffffffff;
    do {
      uVar16 = uVar14 % uVar23;
      uVar14 = uVar14 + 1;
      fVar31 = fVar31 + *(float *)(*(longlong *)(lVar20 + uVar16 * 8) + 0x30);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    unaff_RBP[-0xd] = fVar31;
  }
  lVar20 = *(longlong *)(unaff_RBP + -8);
  uVar23 = 0;
  unaff_RBP[-9] = 0.0;
  iVar11 = *(int *)(lVar20 + 0x18);
  fVar31 = (float)(*(int *)(lVar20 + 0x14) << 3);
  fVar22 = (float)(iVar11 << 3);
  unaff_RBP[3] = fVar31;
  unaff_RBP[5] = fVar22;
  if (0 < iVar11 << 3) {
    uVar12 = *(uint64_t *)(unaff_RBP + 0x10);
    *(uint64_t *)(unaff_RBP + 6) = unaff_R12;
    uVar2 = *(uint64_t *)(unaff_RBP + 0xc);
    fVar33 = fStack000000000000003c;
    do {
      fVar32 = (float)uVar23;
      fVar42 = 0.0;
      if (0 < (int)fVar31) {
        fVar30 = (float)(int)fVar31;
        unaff_RBP[-0xe] = (float)(uVar23 >> 3);
        fVar41 = (float)(int)fVar32 * (1.0 / (float)(int)fVar22);
        fVar33 = 1.0 / fVar33;
        unaff_RBP[4] = fVar41;
        fVar39 = fVar33;
        do {
          fVar31 = *(float *)(lVar20 + 0x24);
          cVar28 = '\0';
          fVar47 = *(float *)(lVar20 + 0x20);
          uVar10 = *(uint *)(lVar15 + 0x60);
          fVar41 = fVar31 * fVar41;
          unaff_RBP[1] = fVar41;
          fVar46 = (float)(int)fVar42 * (1.0 / fVar30) * fVar47;
          uVar10 = uVar10 & 0x400000;
          if (uVar10 == 0) {
            *(uint64_t *)(unaff_RBP + -6) = uVar12;
            *(uint64_t *)(unaff_RBP + -0x16) = uVar2;
            fVar39 = fVar46 - unaff_RBP[-0x16];
            if (fVar46 - unaff_RBP[-0x16] <= unaff_RBP[-6] - fVar46) {
              fVar39 = unaff_RBP[-6] - fVar46;
            }
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
            fVar36 = fVar41 - unaff_RBP[-0x15];
            if (fVar41 - unaff_RBP[-0x15] <= unaff_RBP[-5] - fVar41) {
              fVar36 = unaff_RBP[-5] - fVar41;
            }
            auVar37 = ZEXT416((uint)fVar36);
            if (fVar36 <= 0.0) {
              auVar37 = ZEXT816(0) << 0x20;
            }
            fVar36 = auVar37._0_4_;
            if (fVar36 <= fVar39) {
              auVar37._0_4_ = fVar39;
            }
            if (0.0 <= auVar37._0_4_) {
              auVar6._12_4_ = 0;
              auVar6._0_12_ = auVar37._4_12_;
              auVar37 = auVar6 << 0x20;
            }
            fVar36 = SQRT(fVar36 * fVar36 + fVar39 * fVar39) + auVar37._0_4_;
            if (fVar36 <= 0.0) {
              fVar36 = 0.0;
            }
            fVar39 = fVar33;
            if (fVar44 < fVar36) {
              cVar28 = '\x01';
            }
          }
          fVar36 = 0.5;
          uVar25 = *(uint *)(lVar20 + 0x48);
          lVar15 = *(longlong *)(lVar20 + 0x40);
          unaff_RBP[-6] = (float)((int)fVar42 + 1U);
          uVar24 = (uint)fVar42 >> 3;
          uVar23 = (ulonglong)(longlong)(int)(uVar24 * 1000 + (int)unaff_RBP[-0xe]) %
                   (ulonglong)uVar25;
          for (puVar3 = *(uint **)(lVar15 + uVar23 * 8); puVar3 != (uint *)0x0;
              puVar3 = *(uint **)(puVar3 + 4)) {
            if ((uVar24 == *puVar3) && (unaff_RBP[-0xe] == (float)puVar3[1])) {
              lVar17 = *(longlong *)(lVar20 + 0x48);
              *(uint **)(unaff_RBP + 0x58) = puVar3;
              pfVar13 = unaff_RBP + 0x58;
              *(ulonglong *)(unaff_RBP + 0x5a) = lVar15 + uVar23 * 8;
              goto LAB_180377195;
            }
          }
          lVar17 = *(longlong *)(lVar20 + 0x48);
          *(uint64_t *)(unaff_RBP + 0x5c) = *(uint64_t *)(lVar15 + lVar17 * 8);
          pfVar13 = unaff_RBP + 0x5c;
          *(longlong *)(unaff_RBP + 0x5e) = lVar15 + lVar17 * 8;
LAB_180377195:
          if (*(longlong *)pfVar13 == *(longlong *)(lVar15 + lVar17 * 8)) {
            puVar29 = (uint64_t *)0x0;
          }
          else {
            puVar29 = *(uint64_t **)(*(longlong *)pfVar13 + 8);
          }
          *(uint64_t **)(unaff_RBP + -0x16) = puVar29;
          fVar47 = (float)(int)((int)fVar42 + 1U) * (1.0 / fVar30) * fVar47 - fVar46;
          fVar42 = fVar39 * fVar47;
          if (((uVar10 == 0) &&
              (cVar9 = func_0x0001803723f0(*(uint64_t *)(unaff_RBP + 8)), cVar9 == '\0')) &&
             (unaff_RBP[10] != 1.4013e-43)) {
            fVar42 = fVar42 * (float)(int)unaff_RBP[10] * 0.01;
          }
          uVar10 = (uint)fVar40 ^ (int)fVar40 << 0xd;
          uVar10 = uVar10 ^ uVar10 >> 0x11;
          fVar40 = (float)(uVar10 ^ uVar10 << 5);
          unaff_RBP[2] = fVar40;
          if ((1.0 <= fVar42) || ((float)((int)fVar40 - 1) * 2.3283064e-10 <= fVar42)) {
            if (fVar42 <= 1.0) {
              fVar42 = 1.0;
            }
            if ((cVar28 == '\0') &&
               (lVar15 = puVar29[*(longlong *)(unaff_RBP + 6) + 0xf2], lVar15 != 0)) {
              fVar39 = *(float *)(lVar20 + 0x1c);
              fVar45 = fVar31 * (float)((int)fVar32 + 1) * (1.0 / (float)(int)fVar22) - fVar41;
              uVar1 = *(ushort *)(lVar15 + 0x5c);
              fVar31 = unaff_RBP[-0xe];
              unaff_RBP[0x14] = fVar45;
              fVar43 = fVar47 * fVar36;
              fVar45 = fVar45 * fVar36;
              puVar18 = (void *)*puVar29;
              unaff_RBP[-4] = (float)(int)uVar24;
              unaff_RBP[-3] = (float)(int)fVar31;
              if (puVar18 == &unknown_var_8576_ptr) {
                fVar34 = *(float *)(puVar29[2] + 0x1c) /
                         (float)(1 << ((byte)*(int32_t *)(puVar29 + 5) & 0x1f));
              }
              else {
                fVar34 = (float)(**(code **)(puVar18 + 0x30))(puVar29);
                fVar36 = 0.5;
                lVar15 = puVar29[*(longlong *)(unaff_RBP + 6) + 0xf2];
              }
              fVar36 = fVar36 / (float)uVar1;
              fVar35 = 1.0 / ((float)*(int *)(puVar29 + 0xe) - 1.0);
              unaff_RBP[0x16] =
                   ((fVar43 + fVar46) - fVar39 * (float)(int)uVar24) * (1.0 / fVar34) * fVar35 +
                   fVar36;
              unaff_RBP[0x17] =
                   ((fVar45 + fVar41) - (float)(int)fVar31 * fVar39) * (1.0 / fVar34) * fVar35 +
                   fVar36;
              pfVar13 = (float *)FUN_1802a11e0(lVar15,unaff_RBP + 0x6e,
                                               *(uint64_t *)(unaff_RBP + 0x16),0);
              uVar10 = (uint)(fVar42 * fVar42);
              if (*pfVar13 <= 0.0) {
                fVar39 = fVar33;
                if (0 < (int)uVar10) {
                  uVar23 = (ulonglong)uVar10;
                  do {
                    uVar19 = uVar19 ^ uVar19 << 0xd;
                    uVar19 = uVar19 ^ uVar19 >> 0x11;
                    uVar19 = uVar19 ^ uVar19 << 5;
                    uVar19 = uVar19 ^ uVar19 << 0xd;
                    uVar19 = uVar19 ^ uVar19 >> 0x11;
                    uVar19 = uVar19 ^ uVar19 << 5;
                    uVar19 = uVar19 ^ uVar19 << 0xd;
                    uVar19 = uVar19 ^ uVar19 >> 0x11;
                    uVar19 = uVar19 ^ uVar19 << 5;
                    uVar19 = uVar19 ^ uVar19 << 0xd;
                    uVar19 = uVar19 ^ uVar19 >> 0x11;
                    uVar19 = uVar19 ^ uVar19 << 5;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                fVar39 = fVar33;
                if (0 < (int)uVar10) {
                  *(ulonglong *)(unaff_RBP + 0x10) = (ulonglong)uVar10;
                  unaff_RBP[0x20] = 0.0;
                  unaff_RBP[0x21] = 3.4028235e+38;
                  do {
                    uVar19 = uVar19 ^ uVar19 << 0xd;
                    uVar19 = uVar19 ^ uVar19 >> 0x11;
                    unaff_RBP[-0x20] = 0.0;
                    unaff_RBP[-0x1f] = 0.0;
                    unaff_RBP[-0x1e] = 1.0;
                    unaff_RBP[-0x1d] = 0.0;
                    fVar40 = *(float *)(lVar20 + 0x1c);
                    uVar19 = uVar19 ^ uVar19 << 5;
                    uVar10 = uVar19 ^ uVar19 << 0xd;
                    uVar10 = uVar10 ^ uVar10 >> 0x11;
                    uVar10 = uVar10 ^ uVar10 << 5;
                    puVar18 = (void *)*puVar29;
                    fVar41 = (float)(uVar19 - 1) * 2.3283064e-10 * unaff_RBP[0x14] + fVar41;
                    fVar39 = (float)(uVar10 - 1) * 2.3283064e-10 * fVar47 + fVar46;
                    unaff_RBP[-0x1c] = fVar39;
                    unaff_RBP[-0x1b] = fVar41;
                    unaff_RBP[-0x1a] = unaff_RBP[0x20];
                    unaff_RBP[-0x19] = unaff_RBP[0x21];
                    unaff_RBP[0x1e] = fVar39;
                    unaff_RBP[0x1f] = fVar41;
                    unaff_RBP[0x20] = unaff_RBP[0x20];
                    unaff_RBP[0x21] = unaff_RBP[0x21];
                    fVar31 = unaff_RBP[-3];
                    fVar42 = unaff_RBP[-4];
                    if (puVar18 == &unknown_var_8576_ptr) {
                      fVar36 = *(float *)(puVar29[2] + 0x1c) /
                               (float)(1 << ((byte)*(int32_t *)(puVar29 + 5) & 0x1f));
                    }
                    else {
                      fVar36 = (float)(**(code **)(puVar18 + 0x30))(puVar29);
                    }
                    uVar4 = puVar29[*(longlong *)(unaff_RBP + 6) + 0xe2];
                    fVar43 = 1.0 / ((float)*(int *)(puVar29 + 0xe) - 1.0);
                    unaff_RBP[0x1c] = (fVar39 - fVar40 * fVar42) * (1.0 / fVar36) * fVar43;
                    unaff_RBP[0x1d] = (fVar41 - fVar40 * fVar31) * (1.0 / fVar36) * fVar43;
                    uVar5 = *(uint64_t *)(unaff_RBP + 0x1c);
                    pfVar13 = (float *)FUN_1802a11e0(uVar4,unaff_RBP + 0x72,uVar5,1);
                    fVar40 = *pfVar13;
                    uVar19 = 0;
                    uVar25 = (uint)(*(longlong *)(*(longlong *)(unaff_RBP + 8) + 0x10) -
                                    *(longlong *)(*(longlong *)(unaff_RBP + 8) + 8) >> 3);
                    if (uVar25 != 0) {
                      do {
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < uVar25);
                    }
                    if ((*(uint *)(*(longlong *)(unaff_RBP + -0x10) + 0x60) & 0x400000) == 0) {
                      fStack0000000000000030 = (float)uVar12;
                      fStack0000000000000034 = (float)((ulonglong)uVar12 >> 0x20);
                      *(uint64_t *)(unaff_RBP + -0x14) = uVar2;
                      fVar31 = fStack0000000000000030 - fVar39;
                      if (fStack0000000000000030 - fVar39 <= fVar39 - unaff_RBP[-0x14]) {
                        fVar31 = fVar39 - unaff_RBP[-0x14];
                      }
                      if (fVar31 <= 0.0) {
                        fVar31 = 0.0;
                      }
                      fVar42 = fStack0000000000000034 - fVar41;
                      if (fStack0000000000000034 - fVar41 <= fVar41 - unaff_RBP[-0x13]) {
                        fVar42 = fVar41 - unaff_RBP[-0x13];
                      }
                      auVar38 = ZEXT416((uint)fVar42);
                      if (fVar42 <= 0.0) {
                        auVar38 = ZEXT816(0) << 0x20;
                      }
                      fVar42 = auVar38._0_4_;
                      if (fVar42 <= fVar31) {
                        auVar38._0_4_ = fVar31;
                      }
                      if (0.0 <= auVar38._0_4_) {
                        auVar7._12_4_ = 0;
                        auVar7._0_12_ = auVar38._4_12_;
                        auVar38 = auVar7 << 0x20;
                      }
                      fVar31 = SQRT(fVar42 * fVar42 + fVar31 * fVar31) + auVar38._0_4_;
                      if (fVar31 <= 0.0) {
                        fVar31 = 0.0;
                      }
                      if (fVar31 < fVar44) goto LAB_180377666;
                      bVar8 = false;
                    }
                    else {
LAB_180377666:
                      bVar8 = true;
                    }
                    if ((unaff_RBP[-0xc] <= fVar40 && fVar40 != unaff_RBP[-0xc]) && (bVar8)) {
                      if (unaff_RBP[-10] != 0.0) {
                        unaff_RBP[0x22] = fVar39;
                        unaff_RBP[0x23] = fVar41;
                        unaff_RBP[0x24] = 0.0;
                        unaff_RBP[0x25] = 3.4028235e+38;
                        FUN_18046da60();
                        fVar42 = unaff_RBP[0x48] * 0.33 * 6.6666665;
                        fVar31 = unaff_RBP[0x49] * 0.33 * 6.6666665;
                        fVar40 = unaff_RBP[0x4a] * 0.33 * 6.6666665;
                        fVar40 = (fVar42 + fVar42 + fVar31 + fVar31 + fVar40 + fVar40) -
                                 unaff_RBP[-0xb];
                        if (0.0 <= fVar40) {
                          if (1.0 <= fVar40) {
                            fVar40 = 1.0;
                          }
                        }
                        else {
                          fVar40 = 0.0;
                        }
                        uVar10 = uVar10 ^ uVar10 << 0xd;
                        uVar10 = uVar10 ^ uVar10 >> 0x11;
                        uVar10 = uVar10 ^ uVar10 << 5;
                        if (fVar40 < (float)(uVar10 - 1) * 2.3283064e-10) goto LAB_18037777e;
                      }
                      pfVar13 = (float *)FUN_1802a11e0(*(uint64_t *)
                                                        (*(longlong *)(unaff_RBP + -0x16) + 0x818),
                                                       unaff_RBP + 0x76,uVar5,1);
                      fVar40 = unaff_RBP[-2] * *pfVar13 + unaff_RBP[-1];
                      uVar19 = *(uint *)(*(longlong *)(unaff_RBP + -0x10) + 0x60);
                      unaff_RBP[-0x1a] = fVar40;
                      if ((uVar19 >> 0x11 & 1) == 0) {
                        if (((uVar19 >> 0x19 & 1) != 0) &&
                           (*(longlong *)(*(longlong *)(unaff_RBP + -0x16) + 0x810) != 0)) {
                          pfVar13 = (float *)FUN_1802a11e0(*(longlong *)
                                                            (*(longlong *)(unaff_RBP + -0x16) +
                                                            0x810),unaff_RBP + 0x7a,uVar5,1);
                          unaff_RBP[0x2a] = 0.0;
                          unaff_RBP[0x2b] = 3.4028235e+38;
                          fVar31 = unaff_RBP[0x2a];
                          fVar44 = unaff_RBP[0x2b];
                          fVar33 = *pfVar13 * 2.0 - 1.0;
                          fVar22 = pfVar13[1] * 2.0 - 1.0;
                          unaff_RBP[0x28] = fVar33;
                          unaff_RBP[0x29] = fVar22;
                          unaff_RBP[0x2a] = fVar31;
                          unaff_RBP[0x2b] = fVar44;
                          unaff_RBP[-0x14] = fVar33;
                          unaff_RBP[-0x13] = fVar22;
                          unaff_RBP[-0x12] = fVar31;
                          unaff_RBP[-0x11] = fVar44;
                          fVar31 = fVar33 * fVar33 + fVar22 * fVar22;
                          if (0.0 <= fVar31) {
                            fVar44 = fVar31;
                            if (0.999 <= fVar31) {
                              fVar44 = 0.999;
                            }
                          }
                          else {
                            fVar44 = 0.0;
                          }
                          unaff_RBP[0x2f] = 3.4028235e+38;
                          fVar31 = (1.0 - fVar44) + fVar31;
                          auVar37 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                          fVar42 = auVar37._0_4_;
                          fVar22 = unaff_RBP[-0x11];
                          fVar32 = fVar42 * 0.5 * (3.0 - fVar31 * fVar42 * fVar42);
                          fVar47 = unaff_RBP[-0x13] * fVar32;
                          fVar33 = fVar33 * fVar32;
                          fVar32 = SQRT(1.0 - fVar44) * fVar32;
                          unaff_RBP[-0x14] = fVar33;
                          unaff_RBP[-0x13] = fVar47;
                          unaff_RBP[-0x12] = fVar32;
                          unaff_RBP[-0x11] = fVar22;
                          fVar30 = fVar47 * 0.0 - fVar32 * 0.0;
                          unaff_RBP[-0x20] = fVar33;
                          unaff_RBP[-0x1f] = fVar47;
                          unaff_RBP[-0x1e] = fVar32;
                          unaff_RBP[-0x1d] = fVar22;
                          fVar42 = fVar33 * 0.0 - fVar47 * 1.0;
                          fVar31 = fVar32 * 1.0 - fVar33 * 0.0;
                          unaff_RBP[0x2c] = fVar30;
                          unaff_RBP[0x2d] = fVar31;
                          unaff_RBP[0x2e] = fVar42;
                          unaff_RBP[0x2f] = unaff_RBP[0x2f];
                          fVar44 = fVar31 * fVar31 + fVar30 * fVar30 + fVar42 * fVar42;
                          auVar37 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
                          fVar22 = auVar37._0_4_;
                          fVar44 = fVar22 * 0.5 * (3.0 - fVar44 * fVar22 * fVar22);
                          unaff_RBP[0x33] = 3.4028235e+38;
                          uVar19 = *(uint *)(*(longlong *)(unaff_RBP + -0x10) + 0x60);
                          unaff_RBP[0x30] = fVar32 * fVar31 * fVar44 - fVar47 * fVar42 * fVar44;
                          unaff_RBP[0x31] = fVar33 * fVar42 * fVar44 - fVar32 * fVar30 * fVar44;
                          unaff_RBP[0x32] = fVar47 * fVar30 * fVar44 - fVar33 * fVar31 * fVar44;
                          unaff_RBP[0x33] = unaff_RBP[0x33];
                          goto LAB_180377829;
                        }
                      }
                      else {
                        unaff_RBP[-0x20] = 0.0;
                        unaff_RBP[-0x1f] = 0.0;
                        unaff_RBP[-0x1e] = 1.0;
                        unaff_RBP[-0x1d] = 3.4028235e+38;
                      }
                      fVar47 = 0.0;
                      fVar33 = 0.0;
                      fVar32 = 1.0;
LAB_180377829:
                      if ((uVar19 >> 0x15 & 1) != 0) {
                        unaff_RBP[-0x1a] =
                             fVar40 - ((unaff_RBP[-0x1b] - fVar41) * fVar47 +
                                      (unaff_RBP[-0x1c] - fVar39) * fVar33) / fVar32;
                      }
                      uVar10 = uVar10 ^ uVar10 << 0xd;
                      uVar10 = uVar10 ^ uVar10 >> 0x11;
                      uVar10 = (uVar10 ^ uVar10 << 5) - 1;
                    // WARNING: Subroutine does not return
                      FUN_1808fd400(uVar10,(float)uVar10 * 1.4629181e-09);
                    }
LAB_18037777e:
                    uVar10 = uVar10 ^ uVar10 << 0xd;
                    uVar10 = uVar10 ^ uVar10 >> 0x11;
                    uVar10 = uVar10 ^ uVar10 << 5;
                    uVar10 = uVar10 ^ uVar10 << 0xd;
                    uVar10 = uVar10 ^ uVar10 >> 0x11;
                    uVar19 = uVar10 ^ uVar10 << 5;
                    pfVar13 = unaff_RBP + 0x10;
                    *(longlong *)pfVar13 = *(longlong *)pfVar13 + -1;
                    fVar41 = unaff_RBP[1];
                    puVar29 = *(uint64_t **)(unaff_RBP + -0x16);
                    lVar20 = *(longlong *)(unaff_RBP + -8);
                  } while (*(longlong *)pfVar13 != 0);
                  fVar40 = unaff_RBP[2];
                  fVar39 = fVar33;
                }
              }
            }
            else if (0 < (int)(fVar42 * fVar42)) {
              uVar23 = (ulonglong)(uint)(int)(fVar42 * fVar42);
              do {
                uVar19 = uVar19 ^ uVar19 << 0xd;
                uVar19 = uVar19 ^ uVar19 >> 0x11;
                uVar19 = uVar19 ^ uVar19 << 5;
                uVar19 = uVar19 ^ uVar19 << 0xd;
                uVar19 = uVar19 ^ uVar19 >> 0x11;
                uVar19 = uVar19 ^ uVar19 << 5;
                uVar19 = uVar19 ^ uVar19 << 0xd;
                uVar19 = uVar19 ^ uVar19 >> 0x11;
                uVar19 = uVar19 ^ uVar19 << 5;
                uVar19 = uVar19 ^ uVar19 << 0xd;
                uVar19 = uVar19 ^ uVar19 >> 0x11;
                uVar19 = uVar19 ^ uVar19 << 5;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
          else {
            uVar19 = uVar19 ^ uVar19 << 0xd;
            uVar19 = uVar19 ^ uVar19 >> 0x11;
            uVar19 = uVar19 ^ uVar19 << 5;
            uVar19 = uVar19 ^ uVar19 << 0xd;
            uVar19 = uVar19 ^ uVar19 >> 0x11;
            uVar19 = uVar19 ^ uVar19 << 5;
            uVar19 = uVar19 ^ uVar19 << 0xd;
            uVar19 = uVar19 ^ uVar19 >> 0x11;
            uVar19 = uVar19 ^ uVar19 << 5;
            uVar19 = uVar19 ^ uVar19 << 0xd;
            uVar19 = uVar19 ^ uVar19 >> 0x11;
            uVar19 = uVar19 ^ uVar19 << 5;
          }
          fVar42 = unaff_RBP[-6];
          fVar31 = unaff_RBP[3];
          fVar41 = unaff_RBP[4];
          lVar15 = *(longlong *)(unaff_RBP + -0x10);
        } while ((int)fVar42 < (int)fVar31);
        fVar32 = unaff_RBP[-9];
        fVar22 = unaff_RBP[5];
        fVar33 = fStack000000000000003c;
      }
      fVar32 = (float)((int)fVar32 + 1);
      uVar23 = (ulonglong)(uint)fVar32;
      unaff_RBP[-9] = fVar32;
    } while ((int)fVar32 < (int)fVar22);
  }
  puVar18 = *(void **)(lVar15 + 0x10);
  puVar27 = &system_buffer_ptr;
  if ((*(uint *)(lVar15 + 0x60) & 0x400000) == 0) {
    if (puVar18 != (void *)0x0) {
      puVar27 = puVar18;
    }
    lVar15 = (*(longlong **)(unaff_RBP + 0x1a))[1] - **(longlong **)(unaff_RBP + 0x1a);
    puVar18 = &unknown_var_3792_ptr;
  }
  else {
    if (puVar18 != (void *)0x0) {
      puVar27 = puVar18;
    }
    lVar15 = (*(longlong **)(unaff_RBP + 0x18))[1] - **(longlong **)(unaff_RBP + 0x18);
    puVar18 = &unknown_var_3824_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,puVar18,lVar15 / 0x28,puVar27);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




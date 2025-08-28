#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part184.c - 1 个函数

// 函数: void FUN_180376cad(void)
void FUN_180376cad(void)

{
  ushort uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  void *puVar16;
  uint uVar17;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar18;
  uint uVar19;
  uint uVar20;
  uint64_t uVar21;
  void *puVar22;
  char cVar23;
  int64_t lVar24;
  uint uVar25;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *puVar26;
  int64_t unaff_R15;
  bool in_CF;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int8_t auVar36 [16];
  float unaff_XMM6_Da;
  float fVar37;
  float fVar38;
  float unaff_XMM7_Da;
  float fVar39;
  float unaff_XMM8_Da;
  float fVar40;
  float unaff_XMM10_Da;
  float fVar41;
  float fVar42;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000050;
  
  if (in_CF) {
    unaff_XMM8_Da = 75.0;
  }
  fVar40 = unaff_XMM8_Da / unaff_XMM6_Da;
  if ((*(uint *)(unaff_R13 + 0x60) >> 0x16 & 1) == 0) {
    fStack000000000000003c = unaff_XMM7_Da;
    if ((unaff_XMM7_Da <= fVar40) && (fStack000000000000003c = fVar40, 100.0 <= fVar40)) {
      fStack000000000000003c = 100.0;
    }
  }
  else {
    fStack000000000000003c = 2.0;
    if ((2.0 <= fVar40) && (fStack000000000000003c = fVar40, 100.0 <= fVar40)) {
      fStack000000000000003c = 100.0;
    }
    if ((int)*(uint *)(unaff_R13 + 0x60) < 0) {
      if (*(int *)(SYSTEM_STATE_MANAGER + 0xe0) == 0) {
        fVar40 = 0.2;
      }
      else {
        fVar40 = 0.08;
      }
      fStack000000000000003c =
           fStack000000000000003c *
           (*(float *)(unaff_RSI + 0x28) + *(float *)(unaff_RSI + 0x18)) * fVar40;
    }
  }
  iVar9 = *(int *)(SYSTEM_STATE_MANAGER + 0xe0);
  unaff_RBP[0x7e] = 1.4013e-43;
  unaff_RBP[0x7a] = 0.0;
  unaff_RBP[0x7b] = 4.2039e-44;
  unaff_RBP[0x7c] = 8.40779e-44;
  unaff_RBP[0x7d] = 1.26117e-43;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (4 < iVar9) {
    iVar9 = 4;
  }
  uVar25 = *(uint *)(unaff_RSI + 8);
  unaff_RBP[10] = unaff_RBP[(int64_t)iVar9 + 0x7a];
  fVar40 = *(float *)(*(int64_t *)(unaff_RBP + -8) + 0x154);
  fVar29 = *(float *)(*(int64_t *)(unaff_RBP + -8) + 0x158);
  unaff_RBP[-1] = fVar40;
  unaff_RBP[-2] = fVar29 - fVar40;
  fVar40 = fStack000000000000003c * 1000.0;
  if (fVar40 <= unaff_XMM10_Da) {
    fVar40 = fVar40 - 0.9999999;
  }
  uVar2 = *(uint64_t *)(unaff_RSI + 0x30);
  uVar3 = *(uint64_t *)(unaff_RSI + 0x18);
  uVar5 = *(uint64_t *)(unaff_RSI + 0x20);
  *(uint64_t *)(unaff_RBP + 0x4c) = *(uint64_t *)(unaff_RSI + 0x28);
  *(uint64_t *)(unaff_RBP + 0x4e) = uVar2;
  uVar17 = (int)fVar40 ^ 0x41c64e6dU ^ uVar25;
  fVar40 = (float)(uVar25 ^ 0x41c64e6d);
  fVar29 = 1.0 - *(float *)(unaff_RSI + 0x14);
  *(uint64_t *)(unaff_RBP + 0x50) = uVar3;
  *(uint64_t *)(unaff_RBP + 0x52) = uVar5;
  uVar2 = *(uint64_t *)(unaff_RSI + 0x40);
  *(uint64_t *)(unaff_RBP + 0x54) = *(uint64_t *)(unaff_RSI + 0x38);
  *(uint64_t *)(unaff_RBP + 0x56) = uVar2;
  if (unaff_XMM10_Da <= fVar29) {
    if (1.0 <= fVar29) {
      fVar29 = 1.0;
    }
    unaff_RBP[-0xc] = fVar29;
  }
  else {
    unaff_RBP[-0xc] = unaff_XMM10_Da;
  }
  fVar29 = *(float *)(unaff_R15 + 0x3004);
  fVar11 = *(float *)(unaff_R15 + 0x3008);
  fVar27 = fVar29;
  if (unaff_XMM10_Da < fVar29) {
    fVar27 = 0.0;
  }
  fVar31 = fVar11;
  if (unaff_XMM10_Da < fVar11) {
    fVar31 = 0.0;
  }
  if (fVar29 < unaff_XMM10_Da) {
    fVar29 = 0.0;
  }
  fVar38 = fVar11;
  if (fVar11 < unaff_XMM10_Da) {
    fVar38 = 0.0;
  }
  fVar30 = *(float *)(unaff_R15 + 0x300c);
  fVar37 = *(float *)(unaff_R15 + 0x3010);
  if (fVar30 <= fVar27) {
    unaff_RBP[0x10] = fVar30;
  }
  else {
    unaff_RBP[0x10] = fVar27;
  }
  if (fVar37 <= fVar31) {
    unaff_RBP[0x11] = fVar37;
  }
  else {
    unaff_RBP[0x11] = fVar31;
  }
  if (fVar29 <= fVar30) {
    unaff_RBP[0xc] = fVar30;
  }
  else {
    unaff_RBP[0xc] = fVar29;
  }
  if (fVar38 <= fVar37) {
    unaff_RBP[0xd] = fVar37;
  }
  else {
    unaff_RBP[0xd] = fVar38;
  }
  lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBP + 8) + 8);
  uVar18 = *(int64_t *)(*(int64_t *)(unaff_RBP + 8) + 0x10) - lVar13 >> 3;
  fVar30 = fVar30 - (fVar30 + *(float *)(unaff_R15 + 0x3004)) * 0.5;
  fVar27 = 0.0;
  unaff_RBP[-0xd] = 0.0;
  fVar37 = fVar37 - (fVar11 + fVar37) * 0.5;
  *unaff_RBP = fVar37 * fVar37 + fVar30 * fVar30;
  fVar29 = *(float *)(unaff_R13 + 100) * 0.5;
  if ((int)uVar18 != 0) {
    uVar12 = 0;
    uVar21 = uVar18 & 0xffffffff;
    do {
      uVar14 = uVar12 % uVar18;
      uVar12 = uVar12 + 1;
      fVar27 = fVar27 + *(float *)(*(int64_t *)(lVar13 + uVar14 * 8) + 0x30);
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
    unaff_RBP[-0xd] = fVar27;
  }
  lVar13 = *(int64_t *)(unaff_RBP + -8);
  uVar18 = 0;
  unaff_RBP[-9] = 0.0;
  iVar9 = *(int *)(lVar13 + 0x18);
  fVar11 = (float)(*(int *)(lVar13 + 0x14) << 3);
  fVar27 = (float)(iVar9 << 3);
  unaff_RBP[3] = fVar11;
  unaff_RBP[5] = fVar27;
  fStack0000000000000050 = fVar29;
  if (0 < iVar9 << 3) {
    uVar2 = *(uint64_t *)(unaff_RBP + 0x10);
    *(uint64_t *)(unaff_RBP + 6) = unaff_R12;
    uVar3 = *(uint64_t *)(unaff_RBP + 0xc);
    fVar31 = fStack000000000000003c;
    do {
      fVar30 = (float)uVar18;
      fVar38 = 0.0;
      if (0 < (int)fVar11) {
        fVar28 = (float)(int)fVar11;
        unaff_RBP[-0xe] = (float)(uVar18 >> 3);
        fVar37 = (float)(int)fVar30 * (1.0 / (float)(int)fVar27);
        fVar31 = 1.0 / fVar31;
        unaff_RBP[4] = fVar37;
        fVar34 = fVar31;
        do {
          fVar11 = *(float *)(lVar13 + 0x24);
          cVar23 = '\0';
          fVar42 = *(float *)(lVar13 + 0x20);
          uVar25 = *(uint *)(unaff_R13 + 0x60);
          fVar37 = fVar11 * fVar37;
          unaff_RBP[1] = fVar37;
          fVar41 = (float)(int)fVar38 * (1.0 / fVar28) * fVar42;
          uVar25 = uVar25 & 0x400000;
          if (uVar25 == 0) {
            *(uint64_t *)(unaff_RBP + -6) = uVar2;
            *(uint64_t *)(unaff_RBP + -0x16) = uVar3;
            fVar34 = fVar41 - unaff_RBP[-0x16];
            if (fVar41 - unaff_RBP[-0x16] <= unaff_RBP[-6] - fVar41) {
              fVar34 = unaff_RBP[-6] - fVar41;
            }
            if (fVar34 <= unaff_XMM10_Da) {
              fVar34 = unaff_XMM10_Da;
            }
            fVar39 = fVar37 - unaff_RBP[-0x15];
            if (fVar37 - unaff_RBP[-0x15] <= unaff_RBP[-5] - fVar37) {
              fVar39 = unaff_RBP[-5] - fVar37;
            }
            if (fVar39 <= unaff_XMM10_Da) {
              fVar39 = unaff_XMM10_Da;
            }
            fVar35 = fVar39;
            if (fVar39 <= fVar34) {
              fVar35 = fVar34;
            }
            if (unaff_XMM10_Da <= fVar35) {
              fVar35 = unaff_XMM10_Da;
            }
            fVar35 = SQRT(fVar39 * fVar39 + fVar34 * fVar34) + fVar35;
            if (fVar35 <= unaff_XMM10_Da) {
              fVar35 = unaff_XMM10_Da;
            }
            fVar34 = fVar31;
            if (fVar29 < fVar35) {
              cVar23 = '\x01';
            }
          }
          fVar29 = 0.5;
          uVar20 = *(uint *)(lVar13 + 0x48);
          lVar24 = *(int64_t *)(lVar13 + 0x40);
          unaff_RBP[-6] = (float)((int)fVar38 + 1U);
          uVar19 = (uint)fVar38 >> 3;
          uVar18 = (uint64_t)(int64_t)(int)(uVar19 * 1000 + (int)unaff_RBP[-0xe]) %
                   (uint64_t)uVar20;
          for (puVar4 = *(uint **)(lVar24 + uVar18 * 8); puVar4 != (uint *)0x0;
              puVar4 = *(uint **)(puVar4 + 4)) {
            if ((uVar19 == *puVar4) && (unaff_RBP[-0xe] == (float)puVar4[1])) {
              lVar15 = *(int64_t *)(lVar13 + 0x48);
              *(uint **)(unaff_RBP + 0x58) = puVar4;
              pfVar10 = unaff_RBP + 0x58;
              *(uint64_t *)(unaff_RBP + 0x5a) = lVar24 + uVar18 * 8;
              goto LAB_180377195;
            }
          }
          lVar15 = *(int64_t *)(lVar13 + 0x48);
          *(uint64_t *)(unaff_RBP + 0x5c) = *(uint64_t *)(lVar24 + lVar15 * 8);
          pfVar10 = unaff_RBP + 0x5c;
          *(int64_t *)(unaff_RBP + 0x5e) = lVar24 + lVar15 * 8;
LAB_180377195:
          if (*(int64_t *)pfVar10 == *(int64_t *)(lVar24 + lVar15 * 8)) {
            puVar26 = (uint64_t *)0x0;
          }
          else {
            puVar26 = *(uint64_t **)(*(int64_t *)pfVar10 + 8);
          }
          *(uint64_t **)(unaff_RBP + -0x16) = puVar26;
          fVar42 = (float)(int)((int)fVar38 + 1U) * (1.0 / fVar28) * fVar42 - fVar41;
          fVar38 = fVar34 * fVar42;
          if (((uVar25 == 0) &&
              (cVar8 = func_0x0001803723f0(*(uint64_t *)(unaff_RBP + 8)), cVar8 == '\0')) &&
             (unaff_RBP[10] != 1.4013e-43)) {
            fVar38 = fVar38 * (float)(int)unaff_RBP[10] * 0.01;
          }
          uVar25 = (uint)fVar40 ^ (int)fVar40 << 0xd;
          uVar25 = uVar25 ^ uVar25 >> 0x11;
          fVar40 = (float)(uVar25 ^ uVar25 << 5);
          unaff_RBP[2] = fVar40;
          if ((1.0 <= fVar38) || ((float)((int)fVar40 - 1) * 2.3283064e-10 <= fVar38)) {
            if (fVar38 <= 1.0) {
              fVar38 = 1.0;
            }
            if ((cVar23 == '\0') &&
               (lVar24 = puVar26[*(int64_t *)(unaff_RBP + 6) + 0xf2], lVar24 != 0)) {
              fVar34 = *(float *)(lVar13 + 0x1c);
              fVar35 = fVar11 * (float)((int)fVar30 + 1) * (1.0 / (float)(int)fVar27) - fVar37;
              uVar1 = *(ushort *)(lVar24 + 0x5c);
              fVar11 = unaff_RBP[-0xe];
              unaff_RBP[0x14] = fVar35;
              fVar39 = fVar42 * fVar29;
              fVar35 = fVar35 * fVar29;
              puVar16 = (void *)*puVar26;
              unaff_RBP[-4] = (float)(int)uVar19;
              unaff_RBP[-3] = (float)(int)fVar11;
              if (puVar16 == &unknown_var_8576_ptr) {
                fVar32 = *(float *)(puVar26[2] + 0x1c) /
                         (float)(1 << ((byte)*(int32_t *)(puVar26 + 5) & 0x1f));
              }
              else {
                fVar32 = (float)(**(code **)(puVar16 + 0x30))(puVar26);
                fVar29 = 0.5;
                lVar24 = puVar26[*(int64_t *)(unaff_RBP + 6) + 0xf2];
              }
              fVar29 = fVar29 / (float)uVar1;
              fVar33 = 1.0 / ((float)*(int *)(puVar26 + 0xe) - 1.0);
              unaff_RBP[0x16] =
                   ((fVar39 + fVar41) - fVar34 * (float)(int)uVar19) * (1.0 / fVar32) * fVar33 +
                   fVar29;
              unaff_RBP[0x17] =
                   ((fVar35 + fVar37) - (float)(int)fVar11 * fVar34) * (1.0 / fVar32) * fVar33 +
                   fVar29;
              pfVar10 = (float *)FUN_1802a11e0(lVar24,unaff_RBP + 0x6e,
                                               *(uint64_t *)(unaff_RBP + 0x16),0);
              uVar25 = (uint)(fVar38 * fVar38);
              if (*pfVar10 <= unaff_XMM10_Da) {
                fVar34 = fVar31;
                if (0 < (int)uVar25) {
                  uVar18 = (uint64_t)uVar25;
                  do {
                    uVar17 = uVar17 ^ uVar17 << 0xd;
                    uVar17 = uVar17 ^ uVar17 >> 0x11;
                    uVar17 = uVar17 ^ uVar17 << 5;
                    uVar17 = uVar17 ^ uVar17 << 0xd;
                    uVar17 = uVar17 ^ uVar17 >> 0x11;
                    uVar17 = uVar17 ^ uVar17 << 5;
                    uVar17 = uVar17 ^ uVar17 << 0xd;
                    uVar17 = uVar17 ^ uVar17 >> 0x11;
                    uVar17 = uVar17 ^ uVar17 << 5;
                    uVar17 = uVar17 ^ uVar17 << 0xd;
                    uVar17 = uVar17 ^ uVar17 >> 0x11;
                    uVar17 = uVar17 ^ uVar17 << 5;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else {
                fVar34 = fVar31;
                if (0 < (int)uVar25) {
                  *(uint64_t *)(unaff_RBP + 0x10) = (uint64_t)uVar25;
                  unaff_RBP[0x20] = 0.0;
                  unaff_RBP[0x21] = 3.4028235e+38;
                  do {
                    uVar17 = uVar17 ^ uVar17 << 0xd;
                    uVar17 = uVar17 ^ uVar17 >> 0x11;
                    unaff_RBP[-0x20] = 0.0;
                    unaff_RBP[-0x1f] = 0.0;
                    unaff_RBP[-0x1e] = 1.0;
                    unaff_RBP[-0x1d] = 0.0;
                    fVar40 = *(float *)(lVar13 + 0x1c);
                    uVar17 = uVar17 ^ uVar17 << 5;
                    uVar25 = uVar17 ^ uVar17 << 0xd;
                    uVar25 = uVar25 ^ uVar25 >> 0x11;
                    uVar25 = uVar25 ^ uVar25 << 5;
                    puVar16 = (void *)*puVar26;
                    fVar37 = (float)(uVar17 - 1) * 2.3283064e-10 * unaff_RBP[0x14] + fVar37;
                    fVar38 = (float)(uVar25 - 1) * 2.3283064e-10 * fVar42 + fVar41;
                    unaff_RBP[-0x1c] = fVar38;
                    unaff_RBP[-0x1b] = fVar37;
                    unaff_RBP[-0x1a] = unaff_RBP[0x20];
                    unaff_RBP[-0x19] = unaff_RBP[0x21];
                    unaff_RBP[0x1e] = fVar38;
                    unaff_RBP[0x1f] = fVar37;
                    unaff_RBP[0x20] = unaff_RBP[0x20];
                    unaff_RBP[0x21] = unaff_RBP[0x21];
                    fVar29 = unaff_RBP[-3];
                    fVar11 = unaff_RBP[-4];
                    if (puVar16 == &unknown_var_8576_ptr) {
                      fVar34 = *(float *)(puVar26[2] + 0x1c) /
                               (float)(1 << ((byte)*(int32_t *)(puVar26 + 5) & 0x1f));
                    }
                    else {
                      fVar34 = (float)(**(code **)(puVar16 + 0x30))(puVar26);
                    }
                    uVar5 = puVar26[*(int64_t *)(unaff_RBP + 6) + 0xe2];
                    fVar39 = 1.0 / ((float)*(int *)(puVar26 + 0xe) - 1.0);
                    unaff_RBP[0x1c] = (fVar38 - fVar40 * fVar11) * (1.0 / fVar34) * fVar39;
                    unaff_RBP[0x1d] = (fVar37 - fVar40 * fVar29) * (1.0 / fVar34) * fVar39;
                    uVar6 = *(uint64_t *)(unaff_RBP + 0x1c);
                    pfVar10 = (float *)FUN_1802a11e0(uVar5,unaff_RBP + 0x72,uVar6,1);
                    fVar40 = *pfVar10;
                    uVar17 = 0;
                    uVar20 = (uint)(*(int64_t *)(*(int64_t *)(unaff_RBP + 8) + 0x10) -
                                    *(int64_t *)(*(int64_t *)(unaff_RBP + 8) + 8) >> 3);
                    if (uVar20 != 0) {
                      do {
                        uVar17 = uVar17 + 1;
                      } while (uVar17 < uVar20);
                    }
                    if ((*(uint *)(*(int64_t *)(unaff_RBP + -0x10) + 0x60) & 0x400000) == 0) {
                      fStack0000000000000030 = (float)uVar2;
                      fStack0000000000000034 = (float)((uint64_t)uVar2 >> 0x20);
                      *(uint64_t *)(unaff_RBP + -0x14) = uVar3;
                      fVar29 = fStack0000000000000030 - fVar38;
                      if (fStack0000000000000030 - fVar38 <= fVar38 - unaff_RBP[-0x14]) {
                        fVar29 = fVar38 - unaff_RBP[-0x14];
                      }
                      if (fVar29 <= unaff_XMM10_Da) {
                        fVar29 = unaff_XMM10_Da;
                      }
                      fVar11 = fStack0000000000000034 - fVar37;
                      if (fStack0000000000000034 - fVar37 <= fVar37 - unaff_RBP[-0x13]) {
                        fVar11 = fVar37 - unaff_RBP[-0x13];
                      }
                      if (fVar11 <= unaff_XMM10_Da) {
                        fVar11 = unaff_XMM10_Da;
                      }
                      fVar34 = fVar11;
                      if (fVar11 <= fVar29) {
                        fVar34 = fVar29;
                      }
                      if (unaff_XMM10_Da <= fVar34) {
                        fVar34 = unaff_XMM10_Da;
                      }
                      fVar34 = SQRT(fVar11 * fVar11 + fVar29 * fVar29) + fVar34;
                      if (fVar34 <= unaff_XMM10_Da) {
                        fVar34 = unaff_XMM10_Da;
                      }
                      if (fVar34 < fStack0000000000000050) goto LAB_180377666;
                      bVar7 = false;
                    }
                    else {
LAB_180377666:
                      bVar7 = true;
                    }
                    if ((unaff_RBP[-0xc] <= fVar40 && fVar40 != unaff_RBP[-0xc]) && (bVar7)) {
                      if (unaff_RBP[-10] != unaff_XMM10_Da) {
                        unaff_RBP[0x22] = fVar38;
                        unaff_RBP[0x23] = fVar37;
                        unaff_RBP[0x24] = 0.0;
                        unaff_RBP[0x25] = 3.4028235e+38;
                        FUN_18046da60();
                        fVar11 = unaff_RBP[0x48] * 0.33 * 6.6666665;
                        fVar29 = unaff_RBP[0x49] * 0.33 * 6.6666665;
                        fVar40 = unaff_RBP[0x4a] * 0.33 * 6.6666665;
                        fVar29 = (fVar11 + fVar11 + fVar29 + fVar29 + fVar40 + fVar40) -
                                 unaff_RBP[-0xb];
                        fVar40 = unaff_XMM10_Da;
                        if ((unaff_XMM10_Da <= fVar29) && (fVar40 = fVar29, 1.0 <= fVar29)) {
                          fVar40 = 1.0;
                        }
                        uVar25 = uVar25 ^ uVar25 << 0xd;
                        uVar25 = uVar25 ^ uVar25 >> 0x11;
                        uVar25 = uVar25 ^ uVar25 << 5;
                        if (fVar40 < (float)(uVar25 - 1) * 2.3283064e-10) goto LAB_18037777e;
                      }
                      pfVar10 = (float *)FUN_1802a11e0(*(uint64_t *)
                                                        (*(int64_t *)(unaff_RBP + -0x16) + 0x818),
                                                       unaff_RBP + 0x76,uVar6,1);
                      fVar40 = unaff_RBP[-2] * *pfVar10 + unaff_RBP[-1];
                      uVar17 = *(uint *)(*(int64_t *)(unaff_RBP + -0x10) + 0x60);
                      unaff_RBP[-0x1a] = fVar40;
                      if ((uVar17 >> 0x11 & 1) == 0) {
                        if (((uVar17 >> 0x19 & 1) != 0) &&
                           (*(int64_t *)(*(int64_t *)(unaff_RBP + -0x16) + 0x810) != 0)) {
                          pfVar10 = (float *)FUN_1802a11e0(*(int64_t *)
                                                            (*(int64_t *)(unaff_RBP + -0x16) +
                                                            0x810),unaff_RBP + 0x7a,uVar6,1);
                          unaff_RBP[0x2a] = 0.0;
                          unaff_RBP[0x2b] = 3.4028235e+38;
                          fVar29 = unaff_RBP[0x2a];
                          fVar11 = unaff_RBP[0x2b];
                          fVar31 = *pfVar10 * 2.0 - 1.0;
                          fVar27 = pfVar10[1] * 2.0 - 1.0;
                          unaff_RBP[0x28] = fVar31;
                          unaff_RBP[0x29] = fVar27;
                          unaff_RBP[0x2a] = fVar29;
                          unaff_RBP[0x2b] = fVar11;
                          unaff_RBP[-0x14] = fVar31;
                          unaff_RBP[-0x13] = fVar27;
                          unaff_RBP[-0x12] = fVar29;
                          unaff_RBP[-0x11] = fVar11;
                          fVar29 = fVar31 * fVar31 + fVar27 * fVar27;
                          if ((unaff_XMM10_Da <= fVar29) &&
                             (unaff_XMM10_Da = fVar29, 0.999 <= fVar29)) {
                            unaff_XMM10_Da = 0.999;
                          }
                          fVar30 = 1.0 - unaff_XMM10_Da;
                          unaff_RBP[0x2f] = 3.4028235e+38;
                          fVar29 = fVar30 + fVar29;
                          auVar36 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
                          fVar27 = auVar36._0_4_;
                          fVar11 = unaff_RBP[-0x11];
                          fVar34 = fVar27 * 0.5 * (3.0 - fVar29 * fVar27 * fVar27);
                          fVar29 = unaff_RBP[-0x13] * fVar34;
                          unaff_XMM10_Da = fVar31 * fVar34;
                          fVar34 = SQRT(fVar30) * fVar34;
                          unaff_RBP[-0x14] = unaff_XMM10_Da;
                          unaff_RBP[-0x13] = fVar29;
                          unaff_RBP[-0x12] = fVar34;
                          unaff_RBP[-0x11] = fVar11;
                          fVar28 = fVar29 * 0.0 - fVar34 * 0.0;
                          unaff_RBP[-0x20] = unaff_XMM10_Da;
                          unaff_RBP[-0x1f] = fVar29;
                          unaff_RBP[-0x1e] = fVar34;
                          unaff_RBP[-0x1d] = fVar11;
                          fVar30 = unaff_XMM10_Da * 0.0 - fVar29 * 1.0;
                          fVar11 = fVar34 * 1.0 - unaff_XMM10_Da * 0.0;
                          unaff_RBP[0x2c] = fVar28;
                          unaff_RBP[0x2d] = fVar11;
                          unaff_RBP[0x2e] = fVar30;
                          unaff_RBP[0x2f] = unaff_RBP[0x2f];
                          fVar27 = fVar11 * fVar11 + fVar28 * fVar28 + fVar30 * fVar30;
                          auVar36 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
                          fVar31 = auVar36._0_4_;
                          fVar27 = fVar31 * 0.5 * (3.0 - fVar27 * fVar31 * fVar31);
                          unaff_RBP[0x33] = 3.4028235e+38;
                          uVar17 = *(uint *)(*(int64_t *)(unaff_RBP + -0x10) + 0x60);
                          unaff_RBP[0x30] = fVar34 * fVar11 * fVar27 - fVar29 * fVar30 * fVar27;
                          unaff_RBP[0x31] =
                               unaff_XMM10_Da * fVar30 * fVar27 - fVar34 * fVar28 * fVar27;
                          unaff_RBP[0x32] =
                               fVar29 * fVar28 * fVar27 - unaff_XMM10_Da * fVar11 * fVar27;
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
                      fVar34 = 1.0;
                      fVar29 = unaff_XMM10_Da;
LAB_180377829:
                      if ((uVar17 >> 0x15 & 1) != 0) {
                        unaff_RBP[-0x1a] =
                             fVar40 - ((unaff_RBP[-0x1b] - fVar37) * fVar29 +
                                      (unaff_RBP[-0x1c] - fVar38) * unaff_XMM10_Da) / fVar34;
                      }
                      uVar25 = uVar25 ^ uVar25 << 0xd;
                      uVar25 = uVar25 ^ uVar25 >> 0x11;
                      uVar25 = (uVar25 ^ uVar25 << 5) - 1;
                    // WARNING: Subroutine does not return
                      AdvancedSystemController(uVar25,(float)uVar25 * 1.4629181e-09);
                    }
LAB_18037777e:
                    uVar25 = uVar25 ^ uVar25 << 0xd;
                    uVar25 = uVar25 ^ uVar25 >> 0x11;
                    uVar25 = uVar25 ^ uVar25 << 5;
                    uVar25 = uVar25 ^ uVar25 << 0xd;
                    uVar25 = uVar25 ^ uVar25 >> 0x11;
                    uVar17 = uVar25 ^ uVar25 << 5;
                    pfVar10 = unaff_RBP + 0x10;
                    *(int64_t *)pfVar10 = *(int64_t *)pfVar10 + -1;
                    fVar37 = unaff_RBP[1];
                    puVar26 = *(uint64_t **)(unaff_RBP + -0x16);
                    lVar13 = *(int64_t *)(unaff_RBP + -8);
                  } while (*(int64_t *)pfVar10 != 0);
                  fVar40 = unaff_RBP[2];
                  fVar34 = fVar31;
                }
              }
            }
            else if (0 < (int)(fVar38 * fVar38)) {
              uVar18 = (uint64_t)(uint)(int)(fVar38 * fVar38);
              do {
                uVar17 = uVar17 ^ uVar17 << 0xd;
                uVar17 = uVar17 ^ uVar17 >> 0x11;
                uVar17 = uVar17 ^ uVar17 << 5;
                uVar17 = uVar17 ^ uVar17 << 0xd;
                uVar17 = uVar17 ^ uVar17 >> 0x11;
                uVar17 = uVar17 ^ uVar17 << 5;
                uVar17 = uVar17 ^ uVar17 << 0xd;
                uVar17 = uVar17 ^ uVar17 >> 0x11;
                uVar17 = uVar17 ^ uVar17 << 5;
                uVar17 = uVar17 ^ uVar17 << 0xd;
                uVar17 = uVar17 ^ uVar17 >> 0x11;
                uVar17 = uVar17 ^ uVar17 << 5;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          else {
            uVar17 = uVar17 ^ uVar17 << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar17 = uVar17 ^ uVar17 << 5;
            uVar17 = uVar17 ^ uVar17 << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar17 = uVar17 ^ uVar17 << 5;
            uVar17 = uVar17 ^ uVar17 << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar17 = uVar17 ^ uVar17 << 5;
            uVar17 = uVar17 ^ uVar17 << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar17 = uVar17 ^ uVar17 << 5;
          }
          fVar38 = unaff_RBP[-6];
          fVar11 = unaff_RBP[3];
          fVar37 = unaff_RBP[4];
          unaff_R13 = *(int64_t *)(unaff_RBP + -0x10);
          fVar29 = fStack0000000000000050;
        } while ((int)fVar38 < (int)fVar11);
        fVar30 = unaff_RBP[-9];
        fVar27 = unaff_RBP[5];
        fVar31 = fStack000000000000003c;
      }
      fVar30 = (float)((int)fVar30 + 1);
      uVar18 = (uint64_t)(uint)fVar30;
      unaff_RBP[-9] = fVar30;
    } while ((int)fVar30 < (int)fVar27);
  }
  puVar16 = *(void **)(unaff_R13 + 0x10);
  puVar22 = &system_buffer_ptr;
  if ((*(uint *)(unaff_R13 + 0x60) & 0x400000) == 0) {
    if (puVar16 != (void *)0x0) {
      puVar22 = puVar16;
    }
    lVar13 = (*(int64_t **)(unaff_RBP + 0x1a))[1] - **(int64_t **)(unaff_RBP + 0x1a);
    puVar16 = &unknown_var_3792_ptr;
  }
  else {
    if (puVar16 != (void *)0x0) {
      puVar22 = puVar16;
    }
    lVar13 = (*(int64_t **)(unaff_RBP + 0x18))[1] - **(int64_t **)(unaff_RBP + 0x18);
    puVar16 = &unknown_var_3824_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,puVar16,lVar13 / 0x28,puVar22);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




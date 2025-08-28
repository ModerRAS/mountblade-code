/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part185.c - 3 个函数

// 函数: void FUN_180376f8a(int param_1,uint64_t param_2,int param_3)
void FUN_180376f8a(int param_1,uint64_t param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  bool bVar9;
  char cVar10;
  int64_t *plVar11;
  float *pfVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t lVar16;
  void *puVar17;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar18;
  uint uVar19;
  void *puVar20;
  char cVar21;
  uint uVar22;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *puVar23;
  uint unaff_R14D;
  uint uVar24;
  uint64_t unaff_R15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int8_t auVar31 [16];
  float fVar32;
  float fVar33;
  float in_XMM4_Da;
  float fVar34;
  float unaff_XMM6_Da;
  float fVar35;
  float fVar36;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float fVar37;
  uint64_t in_stack_00000038;
  float in_stack_00000050;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R12;
  uVar3 = *(uint64_t *)(unaff_RBP + 0x30);
  do {
    iVar14 = (int)param_2;
    uVar24 = 0;
    if (0 < param_1) {
      fVar25 = (float)param_1;
      *(uint *)(unaff_RBP + -0x38) = (uint)(param_2 >> 3) & 0x1fffffff;
      fVar26 = (float)iVar14 * (unaff_XMM12_Da / (float)param_3);
      fVar28 = unaff_XMM12_Da / unaff_XMM8_Da;
      *(float *)(unaff_RBP + 0x10) = fVar26;
      fVar32 = fVar28;
      do {
        fVar36 = *(float *)(unaff_RSI + 0x24);
        cVar21 = '\0';
        fVar35 = *(float *)(unaff_RSI + 0x20);
        uVar22 = *(uint *)(unaff_R13 + 0x60);
        fVar26 = fVar36 * fVar26;
        *(float *)(unaff_RBP + 4) = fVar26;
        fVar37 = (float)(int)uVar24 * (unaff_XMM12_Da / fVar25) * fVar35;
        uVar22 = uVar22 & 0x400000;
        if (uVar22 == 0) {
          *(uint64_t *)(unaff_RBP + -0x18) = unaff_R15;
          fVar27 = *(float *)(unaff_RBP + -0x18) - fVar37;
          *(uint64_t *)(unaff_RBP + -0x58) = uVar3;
          fVar34 = fVar37 - *(float *)(unaff_RBP + -0x58);
          fVar32 = fVar26 - *(float *)(unaff_RBP + -0x54);
          if (fVar34 <= fVar27) {
            fVar34 = fVar27;
          }
          fVar27 = *(float *)(unaff_RBP + -0x14) - fVar26;
          if (fVar34 <= unaff_XMM10_Da) {
            fVar34 = unaff_XMM10_Da;
          }
          if (fVar32 <= fVar27) {
            fVar32 = fVar27;
          }
          if (fVar32 <= unaff_XMM10_Da) {
            fVar32 = unaff_XMM10_Da;
          }
          fVar27 = fVar32;
          if (fVar32 <= fVar34) {
            fVar27 = fVar34;
          }
          in_XMM4_Da = 0.5;
          if (unaff_XMM10_Da <= fVar27) {
            fVar27 = unaff_XMM10_Da;
          }
          fVar27 = SQRT(fVar32 * fVar32 + fVar34 * fVar34) + fVar27;
          if (fVar27 <= unaff_XMM10_Da) {
            fVar27 = unaff_XMM10_Da;
          }
          fVar32 = fVar28;
          if (unaff_XMM6_Da < fVar27) {
            cVar21 = '\x01';
          }
        }
        uVar19 = *(uint *)(unaff_RSI + 0x48);
        lVar13 = *(int64_t *)(unaff_RSI + 0x40);
        *(uint *)(unaff_RBP + -0x18) = uVar24 + 1;
        uVar18 = uVar24 >> 3;
        uVar15 = (uint64_t)(int64_t)(int)(uVar18 * 1000 + *(uint *)(unaff_RBP + -0x38)) %
                 (uint64_t)uVar19;
        for (puVar4 = *(uint **)(lVar13 + uVar15 * 8); puVar4 != (uint *)0x0;
            puVar4 = *(uint **)(puVar4 + 4)) {
          if ((uVar18 == *puVar4) && (*(uint *)(unaff_RBP + -0x38) == puVar4[1])) {
            lVar16 = *(int64_t *)(unaff_RSI + 0x48);
            *(uint **)(unaff_RBP + 0x160) = puVar4;
            plVar11 = (int64_t *)(unaff_RBP + 0x160);
            *(uint64_t *)(unaff_RBP + 0x168) = lVar13 + uVar15 * 8;
            goto LAB_180377195;
          }
        }
        lVar16 = *(int64_t *)(unaff_RSI + 0x48);
        *(uint64_t *)(unaff_RBP + 0x170) = *(uint64_t *)(lVar13 + lVar16 * 8);
        plVar11 = (int64_t *)(unaff_RBP + 0x170);
        *(int64_t *)(unaff_RBP + 0x178) = lVar13 + lVar16 * 8;
LAB_180377195:
        if (*plVar11 == *(int64_t *)(lVar13 + lVar16 * 8)) {
          puVar23 = (uint64_t *)0x0;
        }
        else {
          puVar23 = *(uint64_t **)(*plVar11 + 8);
        }
        *(uint64_t **)(unaff_RBP + -0x58) = puVar23;
        fVar34 = (float)(int)(uVar24 + 1) * (unaff_XMM12_Da / fVar25) * fVar35 - fVar37;
        fVar35 = fVar32 * fVar34;
        if (((uVar22 == 0) &&
            (cVar10 = func_0x0001803723f0(*(uint64_t *)(unaff_RBP + 0x20)), cVar10 == '\0')) &&
           (*(int *)(unaff_RBP + 0x28) != 100)) {
          fVar35 = fVar35 * (float)*(int *)(unaff_RBP + 0x28) * 0.01;
        }
        uVar24 = unaff_R14D ^ unaff_R14D << 0xd;
        uVar24 = uVar24 ^ uVar24 >> 0x11;
        unaff_R14D = uVar24 ^ uVar24 << 5;
        *(uint *)(unaff_RBP + 8) = unaff_R14D;
        if ((unaff_XMM12_Da <= fVar35) || ((float)(unaff_R14D - 1) * 2.3283064e-10 <= fVar35)) {
          if (fVar35 <= unaff_XMM12_Da) {
            fVar35 = unaff_XMM12_Da;
          }
          if ((cVar21 == '\0') &&
             (lVar13 = puVar23[*(int64_t *)(unaff_RBP + 0x18) + 0xf2], lVar13 != 0)) {
            fVar32 = *(float *)(unaff_RSI + 0x1c);
            fVar27 = fVar36 * (float)(iVar14 + 1) * (unaff_XMM12_Da / (float)param_3) - fVar26;
            uVar1 = *(ushort *)(lVar13 + 0x5c);
            iVar2 = *(int *)(unaff_RBP + -0x38);
            *(float *)(unaff_RBP + 0x50) = fVar27;
            fVar36 = fVar34 * in_XMM4_Da;
            fVar27 = fVar27 * in_XMM4_Da;
            puVar17 = (void *)*puVar23;
            *(float *)(unaff_RBP + -0x10) = (float)(int)uVar18;
            *(float *)(unaff_RBP + -0xc) = (float)iVar2;
            if (puVar17 == &unknown_var_8576_ptr) {
              fVar29 = *(float *)(puVar23[2] + 0x1c) /
                       (float)(1 << ((byte)*(int32_t *)(puVar23 + 5) & 0x1f));
            }
            else {
              fVar29 = (float)(**(code **)(puVar17 + 0x30))(puVar23);
              in_XMM4_Da = 0.5;
              lVar13 = puVar23[*(int64_t *)(unaff_RBP + 0x18) + 0xf2];
            }
            fVar33 = in_XMM4_Da / (float)uVar1;
            fVar30 = unaff_XMM12_Da / ((float)*(int *)(puVar23 + 0xe) - unaff_XMM12_Da);
            *(float *)(unaff_RBP + 0x58) =
                 ((fVar36 + fVar37) - fVar32 * (float)(int)uVar18) * (unaff_XMM12_Da / fVar29) *
                 fVar30 + fVar33;
            *(float *)(unaff_RBP + 0x5c) =
                 ((fVar27 + fVar26) - (float)iVar2 * fVar32) * (unaff_XMM12_Da / fVar29) * fVar30 +
                 fVar33;
            pfVar12 = (float *)FUN_1802a11e0(lVar13,unaff_RBP + 0x1b8,
                                             *(uint64_t *)(unaff_RBP + 0x58),0);
            uVar24 = (uint)(fVar35 * fVar35);
            if (*pfVar12 <= unaff_XMM10_Da) {
              fVar32 = fVar28;
              if (0 < (int)uVar24) {
                uVar15 = (uint64_t)uVar24;
                do {
                  uVar24 = unaff_EBX ^ unaff_EBX << 0xd;
                  uVar24 = uVar24 ^ uVar24 >> 0x11;
                  uVar24 = uVar24 ^ uVar24 << 5;
                  uVar24 = uVar24 ^ uVar24 << 0xd;
                  uVar24 = uVar24 ^ uVar24 >> 0x11;
                  uVar24 = uVar24 ^ uVar24 << 5;
                  uVar24 = uVar24 ^ uVar24 << 0xd;
                  uVar24 = uVar24 ^ uVar24 >> 0x11;
                  uVar24 = uVar24 ^ uVar24 << 5;
                  uVar24 = uVar24 ^ uVar24 << 0xd;
                  uVar24 = uVar24 ^ uVar24 >> 0x11;
                  unaff_EBX = uVar24 ^ uVar24 << 5;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
            }
            else {
              fVar32 = fVar28;
              if (0 < (int)uVar24) {
                *(uint64_t *)(unaff_RBP + 0x40) = (uint64_t)uVar24;
                *(int32_t *)(unaff_RBP + 0x80) = 0;
                *(int32_t *)(unaff_RBP + 0x84) = 0x7f7fffff;
                do {
                  uVar24 = unaff_EBX ^ unaff_EBX << 0xd;
                  uVar24 = uVar24 ^ uVar24 >> 0x11;
                  *(uint64_t *)(unaff_RBP + -0x80) = 0;
                  *(uint64_t *)(unaff_RBP + -0x78) = 0x3f800000;
                  fVar32 = *(float *)(unaff_RSI + 0x1c);
                  uVar24 = uVar24 ^ uVar24 << 5;
                  uVar22 = uVar24 ^ uVar24 << 0xd;
                  uVar22 = uVar22 ^ uVar22 >> 0x11;
                  uVar22 = uVar22 ^ uVar22 << 5;
                  puVar17 = (void *)*puVar23;
                  fVar26 = (float)(uVar24 - 1) * 2.3283064e-10 * *(float *)(unaff_RBP + 0x50) +
                           fVar26;
                  fVar27 = (float)(uVar22 - 1) * 2.3283064e-10 * fVar34 + fVar37;
                  *(float *)(unaff_RBP + -0x70) = fVar27;
                  *(float *)(unaff_RBP + -0x6c) = fVar26;
                  *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + 0x80);
                  *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + 0x84);
                  *(float *)(unaff_RBP + 0x78) = fVar27;
                  *(float *)(unaff_RBP + 0x7c) = fVar26;
                  *(int32_t *)(unaff_RBP + 0x80) = *(int32_t *)(unaff_RBP + 0x80);
                  *(int32_t *)(unaff_RBP + 0x84) = *(int32_t *)(unaff_RBP + 0x84);
                  fVar36 = *(float *)(unaff_RBP + -0xc);
                  fVar35 = *(float *)(unaff_RBP + -0x10);
                  if (puVar17 == &unknown_var_8576_ptr) {
                    fVar29 = *(float *)(puVar23[2] + 0x1c) /
                             (float)(1 << ((byte)*(int32_t *)(puVar23 + 5) & 0x1f));
                  }
                  else {
                    fVar29 = (float)(**(code **)(puVar17 + 0x30))(puVar23);
                  }
                  uVar5 = puVar23[*(int64_t *)(unaff_RBP + 0x18) + 0xe2];
                  fVar30 = unaff_XMM12_Da / ((float)*(int *)(puVar23 + 0xe) - unaff_XMM12_Da);
                  *(float *)(unaff_RBP + 0x70) =
                       (fVar27 - fVar32 * fVar35) * (unaff_XMM12_Da / fVar29) * fVar30;
                  *(float *)(unaff_RBP + 0x74) =
                       (fVar26 - fVar32 * fVar36) * (unaff_XMM12_Da / fVar29) * fVar30;
                  uVar6 = *(uint64_t *)(unaff_RBP + 0x70);
                  pfVar12 = (float *)FUN_1802a11e0(uVar5,unaff_RBP + 0x1c8,uVar6,1);
                  fVar32 = *pfVar12;
                  uVar24 = 0;
                  uVar19 = (uint)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x10) -
                                  *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 8) >> 3);
                  if (uVar19 != 0) {
                    do {
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar19);
                  }
                  if ((*(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60) & 0x400000) == 0) {
                    fVar35 = (float)unaff_R15 - fVar27;
                    fVar36 = (float)((uint64_t)unaff_R15 >> 0x20) - fVar26;
                    *(uint64_t *)(unaff_RBP + -0x50) = uVar3;
                    fVar29 = fVar27 - *(float *)(unaff_RBP + -0x50);
                    if (fVar35 <= fVar29) {
                      fVar35 = fVar29;
                    }
                    fVar29 = fVar26 - *(float *)(unaff_RBP + -0x4c);
                    if (fVar35 <= unaff_XMM10_Da) {
                      fVar35 = unaff_XMM10_Da;
                    }
                    if (fVar36 <= fVar29) {
                      fVar36 = fVar29;
                    }
                    if (fVar36 <= unaff_XMM10_Da) {
                      fVar36 = unaff_XMM10_Da;
                    }
                    fVar29 = fVar36;
                    if (fVar36 <= fVar35) {
                      fVar29 = fVar35;
                    }
                    if (unaff_XMM10_Da <= fVar29) {
                      fVar29 = unaff_XMM10_Da;
                    }
                    fVar29 = SQRT(fVar36 * fVar36 + fVar35 * fVar35) + fVar29;
                    if (fVar29 <= unaff_XMM10_Da) {
                      fVar29 = unaff_XMM10_Da;
                    }
                    if (fVar29 < in_stack_00000050) goto LAB_180377666;
                    bVar9 = false;
                  }
                  else {
LAB_180377666:
                    bVar9 = true;
                  }
                  if ((*(float *)(unaff_RBP + -0x30) <= fVar32 &&
                       fVar32 != *(float *)(unaff_RBP + -0x30)) && (bVar9)) {
                    if (*(float *)(unaff_RBP + -0x28) == unaff_XMM10_Da) {
LAB_1803777ad:
                      pfVar12 = (float *)FUN_1802a11e0(*(uint64_t *)
                                                        (*(int64_t *)(unaff_RBP + -0x58) + 0x818),
                                                       unaff_RBP + 0x1d8,uVar6,1);
                      fVar25 = *(float *)(unaff_RBP + -8) * *pfVar12 + *(float *)(unaff_RBP + -4);
                      uVar24 = *(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60);
                      *(float *)(unaff_RBP + -0x68) = fVar25;
                      fVar32 = unaff_XMM10_Da;
                      if ((uVar24 >> 0x11 & 1) == 0) {
                        if (((uVar24 >> 0x19 & 1) != 0) &&
                           (lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBP + -0x58) + 0x810),
                           lVar13 != 0)) {
                          pfVar12 = (float *)FUN_1802a11e0(lVar13,unaff_RBP + 0x1e8,uVar6,1);
                          *(int32_t *)(unaff_RBP + 0xa8) = 0;
                          *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
                          uVar7 = *(int32_t *)(unaff_RBP + 0xa8);
                          uVar8 = *(int32_t *)(unaff_RBP + 0xac);
                          fVar28 = *pfVar12 * 2.0 - unaff_XMM12_Da;
                          fVar32 = pfVar12[1] * 2.0 - unaff_XMM12_Da;
                          *(float *)(unaff_RBP + 0xa0) = fVar28;
                          *(float *)(unaff_RBP + 0xa4) = fVar32;
                          *(int32_t *)(unaff_RBP + 0xa8) = uVar7;
                          *(int32_t *)(unaff_RBP + 0xac) = uVar8;
                          *(float *)(unaff_RBP + -0x50) = fVar28;
                          *(float *)(unaff_RBP + -0x4c) = fVar32;
                          *(int32_t *)(unaff_RBP + -0x48) = uVar7;
                          *(int32_t *)(unaff_RBP + -0x44) = uVar8;
                          fVar32 = fVar28 * fVar28 + fVar32 * fVar32;
                          if ((unaff_XMM10_Da <= fVar32) &&
                             (unaff_XMM10_Da = fVar32, 0.999 <= fVar32)) {
                            unaff_XMM10_Da = 0.999;
                          }
                          fVar35 = unaff_XMM12_Da - unaff_XMM10_Da;
                          *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
                          fVar32 = fVar35 + fVar32;
                          auVar31 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
                          fVar36 = auVar31._0_4_;
                          uVar7 = *(int32_t *)(unaff_RBP + -0x44);
                          fVar36 = fVar36 * 0.5 * (3.0 - fVar32 * fVar36 * fVar36);
                          fVar32 = *(float *)(unaff_RBP + -0x4c) * fVar36;
                          unaff_XMM10_Da = fVar28 * fVar36;
                          unaff_XMM12_Da = SQRT(fVar35) * fVar36;
                          *(float *)(unaff_RBP + -0x50) = unaff_XMM10_Da;
                          *(float *)(unaff_RBP + -0x4c) = fVar32;
                          *(float *)(unaff_RBP + -0x48) = unaff_XMM12_Da;
                          *(int32_t *)(unaff_RBP + -0x44) = uVar7;
                          fVar34 = fVar32 * 0.0 - unaff_XMM12_Da * 0.0;
                          *(float *)(unaff_RBP + -0x80) = unaff_XMM10_Da;
                          *(float *)(unaff_RBP + -0x7c) = fVar32;
                          *(float *)(unaff_RBP + -0x78) = unaff_XMM12_Da;
                          *(int32_t *)(unaff_RBP + -0x74) = uVar7;
                          fVar37 = unaff_XMM10_Da * 0.0 - fVar32 * 1.0;
                          fVar28 = unaff_XMM12_Da * 1.0 - unaff_XMM10_Da * 0.0;
                          *(float *)(unaff_RBP + 0xb0) = fVar34;
                          *(float *)(unaff_RBP + 0xb4) = fVar28;
                          *(float *)(unaff_RBP + 0xb8) = fVar37;
                          *(int32_t *)(unaff_RBP + 0xbc) = *(int32_t *)(unaff_RBP + 0xbc);
                          fVar36 = fVar28 * fVar28 + fVar34 * fVar34 + fVar37 * fVar37;
                          auVar31 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
                          fVar35 = auVar31._0_4_;
                          fVar36 = fVar35 * 0.5 * (3.0 - fVar36 * fVar35 * fVar35);
                          *(int32_t *)(unaff_RBP + 0xcc) = 0x7f7fffff;
                          uVar24 = *(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60);
                          *(float *)(unaff_RBP + 0xc0) =
                               unaff_XMM12_Da * fVar28 * fVar36 - fVar32 * fVar37 * fVar36;
                          *(float *)(unaff_RBP + 0xc4) =
                               unaff_XMM10_Da * fVar37 * fVar36 - unaff_XMM12_Da * fVar34 * fVar36;
                          *(float *)(unaff_RBP + 200) =
                               fVar32 * fVar34 * fVar36 - unaff_XMM10_Da * fVar28 * fVar36;
                          *(int32_t *)(unaff_RBP + 0xcc) = *(int32_t *)(unaff_RBP + 0xcc);
                        }
                      }
                      else {
                        *(uint64_t *)(unaff_RBP + -0x80) = 0;
                        *(uint64_t *)(unaff_RBP + -0x78) = 0x7f7fffff3f800000;
                      }
                      if ((uVar24 >> 0x15 & 1) != 0) {
                        *(float *)(unaff_RBP + -0x68) =
                             fVar25 - ((*(float *)(unaff_RBP + -0x6c) - fVar26) * fVar32 +
                                      (*(float *)(unaff_RBP + -0x70) - fVar27) * unaff_XMM10_Da) /
                                      unaff_XMM12_Da;
                      }
                      uVar22 = uVar22 ^ uVar22 << 0xd;
                      uVar22 = uVar22 ^ uVar22 >> 0x11;
                      uVar24 = (uVar22 ^ uVar22 << 5) - 1;
                    // WARNING: Subroutine does not return
                      AdvancedSystemController(uVar24,(float)uVar24 * 1.4629181e-09);
                    }
                    *(float *)(unaff_RBP + 0x88) = fVar27;
                    *(float *)(unaff_RBP + 0x8c) = fVar26;
                    *(int32_t *)(unaff_RBP + 0x90) = 0;
                    *(int32_t *)(unaff_RBP + 0x94) = 0x7f7fffff;
                    FUN_18046da60();
                    fVar35 = *(float *)(unaff_RBP + 0x120) * 0.33 * 6.6666665;
                    fVar36 = *(float *)(unaff_RBP + 0x124) * 0.33 * 6.6666665;
                    fVar32 = *(float *)(unaff_RBP + 0x128) * 0.33 * 6.6666665;
                    fVar36 = (fVar35 + fVar35 + fVar36 + fVar36 + fVar32 + fVar32) -
                             *(float *)(unaff_RBP + -0x2c);
                    fVar32 = unaff_XMM10_Da;
                    if ((unaff_XMM10_Da <= fVar36) && (fVar32 = fVar36, unaff_XMM12_Da <= fVar36)) {
                      fVar32 = unaff_XMM12_Da;
                    }
                    uVar22 = uVar22 ^ uVar22 << 0xd;
                    uVar22 = uVar22 ^ uVar22 >> 0x11;
                    uVar22 = uVar22 ^ uVar22 << 5;
                    if ((float)(uVar22 - 1) * 2.3283064e-10 <= fVar32) goto LAB_1803777ad;
                  }
                  uVar22 = uVar22 ^ uVar22 << 0xd;
                  uVar22 = uVar22 ^ uVar22 >> 0x11;
                  uVar22 = uVar22 ^ uVar22 << 5;
                  uVar22 = uVar22 ^ uVar22 << 0xd;
                  uVar22 = uVar22 ^ uVar22 >> 0x11;
                  unaff_EBX = uVar22 ^ uVar22 << 5;
                  plVar11 = (int64_t *)(unaff_RBP + 0x40);
                  *plVar11 = *plVar11 + -1;
                  fVar26 = *(float *)(unaff_RBP + 4);
                  puVar23 = *(uint64_t **)(unaff_RBP + -0x58);
                  unaff_RSI = *(int64_t *)(unaff_RBP + -0x20);
                } while (*plVar11 != 0);
                unaff_R14D = *(uint *)(unaff_RBP + 8);
                fVar32 = fVar28;
              }
            }
          }
          else if (0 < (int)(fVar35 * fVar35)) {
            uVar15 = (uint64_t)(uint)(int)(fVar35 * fVar35);
            do {
              uVar24 = unaff_EBX ^ unaff_EBX << 0xd;
              uVar24 = uVar24 ^ uVar24 >> 0x11;
              uVar24 = uVar24 ^ uVar24 << 5;
              uVar24 = uVar24 ^ uVar24 << 0xd;
              uVar24 = uVar24 ^ uVar24 >> 0x11;
              uVar24 = uVar24 ^ uVar24 << 5;
              uVar24 = uVar24 ^ uVar24 << 0xd;
              uVar24 = uVar24 ^ uVar24 >> 0x11;
              uVar24 = uVar24 ^ uVar24 << 5;
              uVar24 = uVar24 ^ uVar24 << 0xd;
              uVar24 = uVar24 ^ uVar24 >> 0x11;
              unaff_EBX = uVar24 ^ uVar24 << 5;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        else {
          uVar24 = unaff_EBX ^ unaff_EBX << 0xd;
          uVar24 = uVar24 ^ uVar24 >> 0x11;
          uVar24 = uVar24 ^ uVar24 << 5;
          uVar24 = uVar24 ^ uVar24 << 0xd;
          uVar24 = uVar24 ^ uVar24 >> 0x11;
          uVar24 = uVar24 ^ uVar24 << 5;
          uVar24 = uVar24 ^ uVar24 << 0xd;
          uVar24 = uVar24 ^ uVar24 >> 0x11;
          uVar24 = uVar24 ^ uVar24 << 5;
          uVar24 = uVar24 ^ uVar24 << 0xd;
          uVar24 = uVar24 ^ uVar24 >> 0x11;
          unaff_EBX = uVar24 ^ uVar24 << 5;
        }
        uVar24 = *(uint *)(unaff_RBP + -0x18);
        param_1 = *(int *)(unaff_RBP + 0xc);
        in_XMM4_Da = 0.5;
        fVar26 = *(float *)(unaff_RBP + 0x10);
        unaff_R13 = *(int64_t *)(unaff_RBP + -0x40);
        unaff_XMM6_Da = in_stack_00000050;
      } while ((int)uVar24 < param_1);
      iVar14 = *(int *)(unaff_RBP + -0x24);
      param_3 = *(int *)(unaff_RBP + 0x14);
      unaff_XMM8_Da = in_stack_00000038._4_4_;
    }
    uVar24 = iVar14 + 1;
    param_2 = (uint64_t)uVar24;
    *(uint *)(unaff_RBP + -0x24) = uVar24;
    if (param_3 <= (int)uVar24) {
      puVar17 = *(void **)(unaff_R13 + 0x10);
      puVar20 = &system_buffer_ptr;
      if ((*(uint *)(unaff_R13 + 0x60) & 0x400000) == 0) {
        if (puVar17 != (void *)0x0) {
          puVar20 = puVar17;
        }
        lVar13 = (*(int64_t **)(unaff_RBP + 0x68))[1] - **(int64_t **)(unaff_RBP + 0x68);
        puVar17 = &unknown_var_3792_ptr;
      }
      else {
        if (puVar17 != (void *)0x0) {
          puVar20 = puVar17;
        }
        lVar13 = (*(int64_t **)(unaff_RBP + 0x60))[1] - **(int64_t **)(unaff_RBP + 0x60);
        puVar17 = &unknown_var_3824_ptr;
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,puVar17,lVar13 / 0x28,puVar20);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037832a(void)
void FUN_18037832a(void)

{
  int64_t lVar1;
  void *puVar2;
  int64_t unaff_RBP;
  void *puVar3;
  int64_t unaff_R13;
  
  puVar2 = *(void **)(unaff_R13 + 0x10);
  puVar3 = &system_buffer_ptr;
  if ((*(uint *)(unaff_R13 + 0x60) & 0x400000) == 0) {
    if (puVar2 != (void *)0x0) {
      puVar3 = puVar2;
    }
    lVar1 = (*(int64_t **)(unaff_RBP + 0x68))[1] - **(int64_t **)(unaff_RBP + 0x68);
    puVar2 = &unknown_var_3792_ptr;
  }
  else {
    if (puVar2 != (void *)0x0) {
      puVar3 = puVar2;
    }
    lVar1 = (*(int64_t **)(unaff_RBP + 0x60))[1] - **(int64_t **)(unaff_RBP + 0x60);
    puVar2 = &unknown_var_3824_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,puVar2,lVar1 / 0x28,puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037834c(void)
void FUN_18037834c(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_3824_ptr,
                ((*(int64_t **)(unaff_RBP + 0x60))[1] - **(int64_t **)(unaff_RBP + 0x60)) / 0x28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




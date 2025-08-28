#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part186.c - 3 个函数

// 函数: void FUN_180378385(uint param_1)
void FUN_180378385(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  bool bVar8;
  char cVar9;
  int64_t *plVar10;
  float *pfVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t lVar15;
  void *puVar16;
  uint unaff_EBX;
  uint uVar17;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar18;
  uint uVar19;
  void *puVar20;
  char cVar21;
  uint64_t unaff_R12;
  uint64_t *puVar22;
  uint unaff_R14D;
  uint64_t unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar34;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  
code_r0x000180378385:
  fVar25 = fStack0000000000000038;
  fVar32 = fStack0000000000000048;
  fVar33 = fStack000000000000004c;
  if (0 < (int)param_1) {
    uVar13 = (uint64_t)param_1;
    do {
      uVar17 = unaff_EBX ^ unaff_EBX << 0xd;
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
      unaff_EBX = uVar17 ^ uVar17 << 5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1803782ba:
  do {
    uVar17 = *(uint *)(unaff_RBP + -0x18);
    iVar2 = *(int *)(unaff_RBP + 0xc);
    fVar24 = *(float *)(unaff_RBP + 0x10);
    lVar12 = *(int64_t *)(unaff_RBP + -0x40);
    if (iVar2 <= (int)uVar17) {
      uVar14 = *(uint *)(unaff_RBP + -0x24);
      do {
        uVar19 = uVar14;
        uVar14 = uVar19 + 1;
        *(uint *)(unaff_RBP + -0x24) = uVar14;
        if (*(int *)(unaff_RBP + 0x14) <= (int)uVar14) {
          puVar16 = *(void **)(lVar12 + 0x10);
          puVar20 = &system_buffer_ptr;
          if ((*(uint *)(lVar12 + 0x60) & 0x400000) == 0) {
            if (puVar16 != (void *)0x0) {
              puVar20 = puVar16;
            }
            lVar12 = (*(int64_t **)(unaff_RBP + 0x68))[1] - **(int64_t **)(unaff_RBP + 0x68);
            puVar16 = &unknown_var_3792_ptr;
          }
          else {
            if (puVar16 != (void *)0x0) {
              puVar20 = puVar16;
            }
            lVar12 = (*(int64_t **)(unaff_RBP + 0x60))[1] - **(int64_t **)(unaff_RBP + 0x60);
            puVar16 = &unknown_var_3824_ptr;
          }
                    // WARNING: Subroutine does not return
          FUN_180062300(system_message_context,puVar16,lVar12 / 0x28,puVar20);
        }
        uVar17 = 0;
      } while (iVar2 < 1);
      fVar32 = unaff_XMM12_Da / (float)iVar2;
      *(uint *)(unaff_RBP + -0x38) = uVar14 >> 3;
      fVar24 = unaff_XMM12_Da / (float)*(int *)(unaff_RBP + 0x14);
      fVar33 = (float)(int)(uVar19 + 2) * fVar24;
      fVar24 = (float)(int)uVar14 * fVar24;
      fVar25 = unaff_XMM12_Da / fStack000000000000003c;
      *(float *)(unaff_RBP + 0x10) = fVar24;
      fStack0000000000000038 = fVar25;
      fStack0000000000000048 = fVar32;
      fStack000000000000004c = fVar33;
    }
    fVar26 = *(float *)(unaff_RSI + 0x24);
    cVar21 = '\0';
    fVar31 = *(float *)(unaff_RSI + 0x20);
    uVar14 = *(uint *)(lVar12 + 0x60);
    fVar24 = fVar26 * fVar24;
    *(float *)(unaff_RBP + 4) = fVar24;
    fVar34 = (float)(int)uVar17 * fVar32 * fVar31;
    uVar14 = uVar14 & 0x400000;
    if (uVar14 == 0) {
      *(uint64_t *)(unaff_RBP + -0x18) = unaff_R15;
      fVar23 = *(float *)(unaff_RBP + -0x18) - fVar34;
      *(uint64_t *)(unaff_RBP + -0x58) = unaff_R12;
      fVar30 = fVar34 - *(float *)(unaff_RBP + -0x58);
      fVar25 = fVar24 - *(float *)(unaff_RBP + -0x54);
      if (fVar30 <= fVar23) {
        fVar30 = fVar23;
      }
      fVar23 = *(float *)(unaff_RBP + -0x14) - fVar24;
      if (fVar30 <= unaff_XMM10_Da) {
        fVar30 = unaff_XMM10_Da;
      }
      if (fVar25 <= fVar23) {
        fVar25 = fVar23;
      }
      if (fVar25 <= unaff_XMM10_Da) {
        fVar25 = unaff_XMM10_Da;
      }
      fVar23 = fVar25;
      if (fVar25 <= fVar30) {
        fVar23 = fVar30;
      }
      if (unaff_XMM10_Da <= fVar23) {
        fVar23 = unaff_XMM10_Da;
      }
      fVar23 = SQRT(fVar25 * fVar25 + fVar30 * fVar30) + fVar23;
      if (fVar23 <= unaff_XMM10_Da) {
        fVar23 = unaff_XMM10_Da;
      }
      fVar25 = fStack0000000000000038;
      if (in_stack_00000050 < fVar23) {
        cVar21 = '\x01';
      }
    }
    fVar30 = 0.5;
    uVar19 = *(uint *)(unaff_RSI + 0x48);
    lVar12 = *(int64_t *)(unaff_RSI + 0x40);
    *(uint *)(unaff_RBP + -0x18) = uVar17 + 1;
    uVar18 = uVar17 >> 3;
    uVar13 = (uint64_t)(int64_t)(int)(uVar18 * 1000 + *(uint *)(unaff_RBP + -0x38)) %
             (uint64_t)uVar19;
    for (puVar3 = *(uint **)(lVar12 + uVar13 * 8); puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 4)) {
      if ((uVar18 == *puVar3) && (*(uint *)(unaff_RBP + -0x38) == puVar3[1])) {
        lVar15 = *(int64_t *)(unaff_RSI + 0x48);
        *(uint **)(unaff_RBP + 0x160) = puVar3;
        plVar10 = (int64_t *)(unaff_RBP + 0x160);
        *(uint64_t *)(unaff_RBP + 0x168) = lVar12 + uVar13 * 8;
        goto LAB_180377195;
      }
    }
    lVar15 = *(int64_t *)(unaff_RSI + 0x48);
    *(uint64_t *)(unaff_RBP + 0x170) = *(uint64_t *)(lVar12 + lVar15 * 8);
    plVar10 = (int64_t *)(unaff_RBP + 0x170);
    *(int64_t *)(unaff_RBP + 0x178) = lVar12 + lVar15 * 8;
LAB_180377195:
    if (*plVar10 == *(int64_t *)(lVar12 + lVar15 * 8)) {
      puVar22 = (uint64_t *)0x0;
    }
    else {
      puVar22 = *(uint64_t **)(*plVar10 + 8);
    }
    *(uint64_t **)(unaff_RBP + -0x58) = puVar22;
    fVar23 = (float)(int)(uVar17 + 1) * fVar32 * fVar31 - fVar34;
    fVar31 = fVar25 * fVar23;
    if (((uVar14 == 0) &&
        (cVar9 = func_0x0001803723f0(*(uint64_t *)(unaff_RBP + 0x20)), cVar9 == '\0')) &&
       (*(int *)(unaff_RBP + 0x28) != 100)) {
      fVar31 = fVar31 * (float)*(int *)(unaff_RBP + 0x28) * 0.01;
    }
    uVar17 = unaff_R14D ^ unaff_R14D << 0xd;
    uVar17 = uVar17 ^ uVar17 >> 0x11;
    unaff_R14D = uVar17 ^ uVar17 << 5;
    *(uint *)(unaff_RBP + 8) = unaff_R14D;
    if ((unaff_XMM12_Da <= fVar31) || ((float)(unaff_R14D - 1) * unaff_XMM13_Da <= fVar31)) {
      if (fVar31 <= unaff_XMM12_Da) {
        fVar31 = unaff_XMM12_Da;
      }
      if ((cVar21 != '\0') ||
         (lVar12 = puVar22[*(int64_t *)(unaff_RBP + 0x18) + 0xf2], lVar12 == 0)) {
        if (0 < (int)(fVar31 * fVar31)) {
          uVar13 = (uint64_t)(uint)(int)(fVar31 * fVar31);
          do {
            uVar17 = unaff_EBX ^ unaff_EBX << 0xd;
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
            unaff_EBX = uVar17 ^ uVar17 << 5;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        goto LAB_1803782ba;
      }
      fVar25 = *(float *)(unaff_RSI + 0x1c);
      fVar33 = fVar26 * fVar33 - fVar24;
      uVar1 = *(ushort *)(lVar12 + 0x5c);
      iVar2 = *(int *)(unaff_RBP + -0x38);
      *(float *)(unaff_RBP + 0x50) = fVar33;
      fVar32 = fVar23 * fVar30;
      fVar33 = fVar33 * fVar30;
      puVar16 = (void *)*puVar22;
      *(float *)(unaff_RBP + -0x10) = (float)(int)uVar18;
      *(float *)(unaff_RBP + -0xc) = (float)iVar2;
      if (puVar16 == &unknown_var_8576_ptr) {
        fVar26 = *(float *)(puVar22[2] + 0x1c) /
                 (float)(1 << ((byte)*(int32_t *)(puVar22 + 5) & 0x1f));
      }
      else {
        fVar26 = (float)(**(code **)(puVar16 + 0x30))(puVar22);
        fVar30 = 0.5;
        lVar12 = puVar22[*(int64_t *)(unaff_RBP + 0x18) + 0xf2];
      }
      fVar30 = fVar30 / (float)uVar1;
      fVar27 = unaff_XMM12_Da / ((float)*(int *)(puVar22 + 0xe) - unaff_XMM12_Da);
      *(float *)(unaff_RBP + 0x58) =
           ((fVar32 + fVar34) - fVar25 * (float)(int)uVar18) * (unaff_XMM12_Da / fVar26) * fVar27 +
           fVar30;
      *(float *)(unaff_RBP + 0x5c) =
           ((fVar33 + fVar24) - (float)iVar2 * fVar25) * (unaff_XMM12_Da / fVar26) * fVar27 + fVar30
      ;
      pfVar11 = (float *)FUN_1802a11e0(lVar12,unaff_RBP + 0x1b8,*(uint64_t *)(unaff_RBP + 0x58),0)
      ;
      param_1 = (uint)(fVar31 * fVar31);
      if (unaff_XMM10_Da < *pfVar11) {
        fVar25 = fStack0000000000000038;
        fVar32 = fStack0000000000000048;
        fVar33 = fStack000000000000004c;
        if (0 < (int)param_1) {
          *(uint64_t *)(unaff_RBP + 0x40) = (uint64_t)param_1;
          *(int32_t *)(unaff_RBP + 0x80) = 0;
          *(int32_t *)(unaff_RBP + 0x84) = 0x7f7fffff;
          do {
            uVar17 = unaff_EBX ^ unaff_EBX << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            *(uint64_t *)(unaff_RBP + -0x80) = 0;
            *(uint64_t *)(unaff_RBP + -0x78) = 0x3f800000;
            fVar25 = *(float *)(unaff_RSI + 0x1c);
            uVar17 = uVar17 ^ uVar17 << 5;
            uVar14 = uVar17 ^ uVar17 << 0xd;
            uVar14 = uVar14 ^ uVar14 >> 0x11;
            uVar14 = uVar14 ^ uVar14 << 5;
            puVar16 = (void *)*puVar22;
            fVar24 = (float)(uVar17 - 1) * unaff_XMM13_Da * *(float *)(unaff_RBP + 0x50) + fVar24;
            fVar30 = (float)(uVar14 - 1) * unaff_XMM13_Da * fVar23 + fVar34;
            *(float *)(unaff_RBP + -0x70) = fVar30;
            *(float *)(unaff_RBP + -0x6c) = fVar24;
            *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + 0x80);
            *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + 0x84);
            *(float *)(unaff_RBP + 0x78) = fVar30;
            *(float *)(unaff_RBP + 0x7c) = fVar24;
            *(int32_t *)(unaff_RBP + 0x80) = *(int32_t *)(unaff_RBP + 0x80);
            *(int32_t *)(unaff_RBP + 0x84) = *(int32_t *)(unaff_RBP + 0x84);
            fVar26 = *(float *)(unaff_RBP + -0xc);
            fVar31 = *(float *)(unaff_RBP + -0x10);
            if (puVar16 == &unknown_var_8576_ptr) {
              fVar27 = *(float *)(puVar22[2] + 0x1c) /
                       (float)(1 << ((byte)*(int32_t *)(puVar22 + 5) & 0x1f));
            }
            else {
              fVar27 = (float)(**(code **)(puVar16 + 0x30))(puVar22);
            }
            uVar4 = puVar22[*(int64_t *)(unaff_RBP + 0x18) + 0xe2];
            fVar28 = unaff_XMM12_Da / ((float)*(int *)(puVar22 + 0xe) - unaff_XMM12_Da);
            *(float *)(unaff_RBP + 0x70) =
                 (fVar30 - fVar25 * fVar31) * (unaff_XMM12_Da / fVar27) * fVar28;
            *(float *)(unaff_RBP + 0x74) =
                 (fVar24 - fVar25 * fVar26) * (unaff_XMM12_Da / fVar27) * fVar28;
            uVar5 = *(uint64_t *)(unaff_RBP + 0x70);
            pfVar11 = (float *)FUN_1802a11e0(uVar4,unaff_RBP + 0x1c8,uVar5,1);
            fVar25 = *pfVar11;
            uVar17 = 0;
            uVar19 = (uint)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x10) -
                            *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 8) >> 3);
            if (uVar19 != 0) {
              do {
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar19);
            }
            if ((*(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60) & 0x400000) == 0) {
              fVar31 = (float)unaff_R15 - fVar30;
              fVar26 = (float)((uint64_t)unaff_R15 >> 0x20) - fVar24;
              *(uint64_t *)(unaff_RBP + -0x50) = unaff_R12;
              fVar27 = fVar30 - *(float *)(unaff_RBP + -0x50);
              if (fVar31 <= fVar27) {
                fVar31 = fVar27;
              }
              fVar27 = fVar24 - *(float *)(unaff_RBP + -0x4c);
              if (fVar31 <= unaff_XMM10_Da) {
                fVar31 = unaff_XMM10_Da;
              }
              if (fVar26 <= fVar27) {
                fVar26 = fVar27;
              }
              if (fVar26 <= unaff_XMM10_Da) {
                fVar26 = unaff_XMM10_Da;
              }
              fVar27 = fVar26;
              if (fVar26 <= fVar31) {
                fVar27 = fVar31;
              }
              if (unaff_XMM10_Da <= fVar27) {
                fVar27 = unaff_XMM10_Da;
              }
              fVar27 = SQRT(fVar26 * fVar26 + fVar31 * fVar31) + fVar27;
              if (fVar27 <= unaff_XMM10_Da) {
                fVar27 = unaff_XMM10_Da;
              }
              if (fVar27 < in_stack_00000050) goto LAB_180377666;
              bVar8 = false;
            }
            else {
LAB_180377666:
              bVar8 = true;
            }
            if ((*(float *)(unaff_RBP + -0x30) <= fVar25 && fVar25 != *(float *)(unaff_RBP + -0x30))
               && (bVar8)) {
              if (*(float *)(unaff_RBP + -0x28) == unaff_XMM10_Da) {
LAB_1803777ad:
                pfVar11 = (float *)FUN_1802a11e0(*(uint64_t *)
                                                  (*(int64_t *)(unaff_RBP + -0x58) + 0x818),
                                                 unaff_RBP + 0x1d8,uVar5,1);
                fVar32 = *(float *)(unaff_RBP + -8) * *pfVar11 + *(float *)(unaff_RBP + -4);
                uVar17 = *(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60);
                *(float *)(unaff_RBP + -0x68) = fVar32;
                fVar25 = unaff_XMM10_Da;
                if ((uVar17 >> 0x11 & 1) == 0) {
                  if (((uVar17 >> 0x19 & 1) != 0) &&
                     (lVar12 = *(int64_t *)(*(int64_t *)(unaff_RBP + -0x58) + 0x810), lVar12 != 0)
                     ) {
                    pfVar11 = (float *)FUN_1802a11e0(lVar12,unaff_RBP + 0x1e8,uVar5,1);
                    *(int32_t *)(unaff_RBP + 0xa8) = 0;
                    *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
                    uVar6 = *(int32_t *)(unaff_RBP + 0xa8);
                    uVar7 = *(int32_t *)(unaff_RBP + 0xac);
                    fVar33 = *pfVar11 * 2.0 - unaff_XMM12_Da;
                    fVar25 = pfVar11[1] * 2.0 - unaff_XMM12_Da;
                    *(float *)(unaff_RBP + 0xa0) = fVar33;
                    *(float *)(unaff_RBP + 0xa4) = fVar25;
                    *(int32_t *)(unaff_RBP + 0xa8) = uVar6;
                    *(int32_t *)(unaff_RBP + 0xac) = uVar7;
                    *(float *)(unaff_RBP + -0x50) = fVar33;
                    *(float *)(unaff_RBP + -0x4c) = fVar25;
                    *(int32_t *)(unaff_RBP + -0x48) = uVar6;
                    *(int32_t *)(unaff_RBP + -0x44) = uVar7;
                    fVar25 = fVar33 * fVar33 + fVar25 * fVar25;
                    if ((unaff_XMM10_Da <= fVar25) && (unaff_XMM10_Da = fVar25, 0.999 <= fVar25)) {
                      unaff_XMM10_Da = 0.999;
                    }
                    fVar31 = unaff_XMM12_Da - unaff_XMM10_Da;
                    *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
                    fVar25 = fVar31 + fVar25;
                    auVar29 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
                    fVar26 = auVar29._0_4_;
                    uVar6 = *(int32_t *)(unaff_RBP + -0x44);
                    fVar26 = fVar26 * 0.5 * (3.0 - fVar25 * fVar26 * fVar26);
                    fVar25 = *(float *)(unaff_RBP + -0x4c) * fVar26;
                    unaff_XMM10_Da = fVar33 * fVar26;
                    unaff_XMM12_Da = SQRT(fVar31) * fVar26;
                    *(float *)(unaff_RBP + -0x50) = unaff_XMM10_Da;
                    *(float *)(unaff_RBP + -0x4c) = fVar25;
                    *(float *)(unaff_RBP + -0x48) = unaff_XMM12_Da;
                    *(int32_t *)(unaff_RBP + -0x44) = uVar6;
                    fVar23 = fVar25 * 0.0 - unaff_XMM12_Da * 0.0;
                    *(float *)(unaff_RBP + -0x80) = unaff_XMM10_Da;
                    *(float *)(unaff_RBP + -0x7c) = fVar25;
                    *(float *)(unaff_RBP + -0x78) = unaff_XMM12_Da;
                    *(int32_t *)(unaff_RBP + -0x74) = uVar6;
                    fVar34 = unaff_XMM10_Da * 0.0 - fVar25 * 1.0;
                    fVar33 = unaff_XMM12_Da * 1.0 - unaff_XMM10_Da * 0.0;
                    *(float *)(unaff_RBP + 0xb0) = fVar23;
                    *(float *)(unaff_RBP + 0xb4) = fVar33;
                    *(float *)(unaff_RBP + 0xb8) = fVar34;
                    *(int32_t *)(unaff_RBP + 0xbc) = *(int32_t *)(unaff_RBP + 0xbc);
                    fVar26 = fVar33 * fVar33 + fVar23 * fVar23 + fVar34 * fVar34;
                    auVar29 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
                    fVar31 = auVar29._0_4_;
                    fVar26 = fVar31 * 0.5 * (3.0 - fVar26 * fVar31 * fVar31);
                    *(int32_t *)(unaff_RBP + 0xcc) = 0x7f7fffff;
                    uVar17 = *(uint *)(*(int64_t *)(unaff_RBP + -0x40) + 0x60);
                    *(float *)(unaff_RBP + 0xc0) =
                         unaff_XMM12_Da * fVar33 * fVar26 - fVar25 * fVar34 * fVar26;
                    *(float *)(unaff_RBP + 0xc4) =
                         unaff_XMM10_Da * fVar34 * fVar26 - unaff_XMM12_Da * fVar23 * fVar26;
                    *(float *)(unaff_RBP + 200) =
                         fVar25 * fVar23 * fVar26 - unaff_XMM10_Da * fVar33 * fVar26;
                    *(int32_t *)(unaff_RBP + 0xcc) = *(int32_t *)(unaff_RBP + 0xcc);
                  }
                }
                else {
                  *(uint64_t *)(unaff_RBP + -0x80) = 0;
                  *(uint64_t *)(unaff_RBP + -0x78) = 0x7f7fffff3f800000;
                }
                if ((uVar17 >> 0x15 & 1) != 0) {
                  *(float *)(unaff_RBP + -0x68) =
                       fVar32 - ((*(float *)(unaff_RBP + -0x6c) - fVar24) * fVar25 +
                                (*(float *)(unaff_RBP + -0x70) - fVar30) * unaff_XMM10_Da) /
                                unaff_XMM12_Da;
                }
                uVar14 = uVar14 ^ uVar14 << 0xd;
                uVar14 = uVar14 ^ uVar14 >> 0x11;
                uVar17 = (uVar14 ^ uVar14 << 5) - 1;
                    // WARNING: Subroutine does not return
                AdvancedSystemController(uVar17,(float)uVar17 * 1.4629181e-09);
              }
              *(float *)(unaff_RBP + 0x88) = fVar30;
              *(float *)(unaff_RBP + 0x8c) = fVar24;
              *(int32_t *)(unaff_RBP + 0x90) = 0;
              *(int32_t *)(unaff_RBP + 0x94) = 0x7f7fffff;
              FUN_18046da60();
              fVar31 = *(float *)(unaff_RBP + 0x120) * 0.33 * 6.6666665;
              fVar26 = *(float *)(unaff_RBP + 0x124) * 0.33 * 6.6666665;
              fVar25 = *(float *)(unaff_RBP + 0x128) * 0.33 * 6.6666665;
              fVar26 = (fVar31 + fVar31 + fVar26 + fVar26 + fVar25 + fVar25) -
                       *(float *)(unaff_RBP + -0x2c);
              fVar25 = unaff_XMM10_Da;
              if ((unaff_XMM10_Da <= fVar26) && (fVar25 = fVar26, unaff_XMM12_Da <= fVar26)) {
                fVar25 = unaff_XMM12_Da;
              }
              uVar14 = uVar14 ^ uVar14 << 0xd;
              uVar14 = uVar14 ^ uVar14 >> 0x11;
              uVar14 = uVar14 ^ uVar14 << 5;
              if ((float)(uVar14 - 1) * unaff_XMM13_Da <= fVar25) goto LAB_1803777ad;
            }
            uVar14 = uVar14 ^ uVar14 << 0xd;
            uVar14 = uVar14 ^ uVar14 >> 0x11;
            uVar14 = uVar14 ^ uVar14 << 5;
            uVar14 = uVar14 ^ uVar14 << 0xd;
            uVar14 = uVar14 ^ uVar14 >> 0x11;
            unaff_EBX = uVar14 ^ uVar14 << 5;
            plVar10 = (int64_t *)(unaff_RBP + 0x40);
            *plVar10 = *plVar10 + -1;
            fVar24 = *(float *)(unaff_RBP + 4);
            puVar22 = *(uint64_t **)(unaff_RBP + -0x58);
            unaff_RSI = *(int64_t *)(unaff_RBP + -0x20);
          } while (*plVar10 != 0);
          unaff_R14D = *(uint *)(unaff_RBP + 8);
          fVar25 = fStack0000000000000038;
        }
        goto LAB_1803782ba;
      }
      goto code_r0x000180378385;
    }
    uVar17 = unaff_EBX ^ unaff_EBX << 0xd;
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
    unaff_EBX = uVar17 ^ uVar17 << 5;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180378494(void)
void FUN_180378494(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_3792_ptr,
                ((*(int64_t **)(unaff_RBP + 0x68))[1] - **(int64_t **)(unaff_RBP + 0x68)) / 0x28);
}





// 函数: void FUN_1803784fe(void)
void FUN_1803784fe(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x200) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




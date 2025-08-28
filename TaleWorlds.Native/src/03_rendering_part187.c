#include "TaleWorlds.Native.Split.h"

// 03_rendering_part187.c - 4 个函数

// 函数: void FUN_18037851f(void)
void FUN_18037851f(void)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined *in_RAX;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined *puVar16;
  uint uVar17;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  char cVar21;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  uint unaff_R14D;
  undefined8 unaff_R15;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_XMM6_Da;
  float fVar30;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar31;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar32;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  
code_r0x00018037851f:
  fVar22 = (float)(**(code **)(in_RAX + 0x30))(unaff_R13);
  fVar29 = 0.5;
  lVar13 = unaff_R13[*(longlong *)(unaff_RBP + 0x18) + 0xf2];
  do {
    fVar23 = unaff_XMM12_Da / ((float)*(int *)(unaff_R13 + 0xe) - unaff_XMM12_Da);
    *(float *)(unaff_RBP + 0x58) =
         unaff_XMM7_Da * (unaff_XMM12_Da / fVar22) * fVar23 + fVar29 / unaff_XMM9_Da;
    *(float *)(unaff_RBP + 0x5c) =
         unaff_XMM8_Da * (unaff_XMM12_Da / fVar22) * fVar23 + fVar29 / unaff_XMM9_Da;
    pfVar11 = (float *)FUN_1802a11e0(lVar13,unaff_RBP + 0x1b8,*(undefined8 *)(unaff_RBP + 0x58),0);
    uVar12 = (uint)(unaff_XMM6_Da * unaff_XMM6_Da);
    fVar22 = fStack0000000000000038;
    fVar23 = fStack0000000000000048;
    fVar31 = fStack000000000000004c;
    if (*pfVar11 <= unaff_XMM10_Da) {
      if (0 < (int)uVar12) {
        uVar14 = (ulonglong)uVar12;
        do {
          uVar12 = unaff_EBX ^ unaff_EBX << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          unaff_EBX = uVar12 ^ uVar12 << 5;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else if (0 < (int)uVar12) {
      *(ulonglong *)(unaff_RBP + 0x40) = (ulonglong)uVar12;
      *(undefined4 *)(unaff_RBP + 0x80) = 0;
      *(undefined4 *)(unaff_RBP + 0x84) = 0x7f7fffff;
      do {
        uVar12 = unaff_EBX ^ unaff_EBX << 0xd;
        uVar12 = uVar12 ^ uVar12 >> 0x11;
        *(undefined8 *)(unaff_RBP + -0x80) = 0;
        *(undefined8 *)(unaff_RBP + -0x78) = 0x3f800000;
        fVar29 = *(float *)(unaff_RSI + 0x1c);
        uVar12 = uVar12 ^ uVar12 << 5;
        uVar17 = uVar12 ^ uVar12 << 0xd;
        uVar17 = uVar17 ^ uVar17 >> 0x11;
        uVar17 = uVar17 ^ uVar17 << 5;
        puVar16 = (undefined *)*unaff_R13;
        fVar30 = (float)(uVar12 - 1) * unaff_XMM13_Da * *(float *)(unaff_RBP + 0x50) +
                 unaff_XMM11_Da;
        fVar32 = (float)(uVar17 - 1) * unaff_XMM13_Da * unaff_XMM15_Da + unaff_XMM14_Da;
        *(float *)(unaff_RBP + -0x70) = fVar32;
        *(float *)(unaff_RBP + -0x6c) = fVar30;
        *(undefined4 *)(unaff_RBP + -0x68) = *(undefined4 *)(unaff_RBP + 0x80);
        *(undefined4 *)(unaff_RBP + -100) = *(undefined4 *)(unaff_RBP + 0x84);
        *(float *)(unaff_RBP + 0x78) = fVar32;
        *(float *)(unaff_RBP + 0x7c) = fVar30;
        *(undefined4 *)(unaff_RBP + 0x80) = *(undefined4 *)(unaff_RBP + 0x80);
        *(undefined4 *)(unaff_RBP + 0x84) = *(undefined4 *)(unaff_RBP + 0x84);
        fVar27 = *(float *)(unaff_RBP + -0xc);
        fVar28 = *(float *)(unaff_RBP + -0x10);
        if (puVar16 == &UNK_180a22a30) {
          fVar24 = *(float *)(unaff_R13[2] + 0x1c) /
                   (float)(1 << ((byte)*(undefined4 *)(unaff_R13 + 5) & 0x1f));
        }
        else {
          fVar24 = (float)(**(code **)(puVar16 + 0x30))(unaff_R13);
        }
        uVar4 = unaff_R13[*(longlong *)(unaff_RBP + 0x18) + 0xe2];
        fVar25 = unaff_XMM12_Da / ((float)*(int *)(unaff_R13 + 0xe) - unaff_XMM12_Da);
        *(float *)(unaff_RBP + 0x70) =
             (fVar32 - fVar29 * fVar28) * (unaff_XMM12_Da / fVar24) * fVar25;
        *(float *)(unaff_RBP + 0x74) =
             (fVar30 - fVar29 * fVar27) * (unaff_XMM12_Da / fVar24) * fVar25;
        uVar5 = *(undefined8 *)(unaff_RBP + 0x70);
        pfVar11 = (float *)FUN_1802a11e0(uVar4,unaff_RBP + 0x1c8,uVar5,1);
        fVar29 = *pfVar11;
        uVar12 = 0;
        uVar19 = (uint)(*(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 0x10) -
                        *(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 8) >> 3);
        if (uVar19 != 0) {
          do {
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar19);
        }
        if ((*(uint *)(*(longlong *)(unaff_RBP + -0x40) + 0x60) & 0x400000) == 0) {
          fVar28 = (float)unaff_R15 - fVar32;
          fVar27 = (float)((ulonglong)unaff_R15 >> 0x20) - fVar30;
          *(undefined8 *)(unaff_RBP + -0x50) = unaff_R12;
          fVar24 = fVar32 - *(float *)(unaff_RBP + -0x50);
          if (fVar28 <= fVar24) {
            fVar28 = fVar24;
          }
          fVar24 = fVar30 - *(float *)(unaff_RBP + -0x4c);
          if (fVar28 <= unaff_XMM10_Da) {
            fVar28 = unaff_XMM10_Da;
          }
          if (fVar27 <= fVar24) {
            fVar27 = fVar24;
          }
          if (fVar27 <= unaff_XMM10_Da) {
            fVar27 = unaff_XMM10_Da;
          }
          fVar24 = fVar27;
          if (fVar27 <= fVar28) {
            fVar24 = fVar28;
          }
          if (unaff_XMM10_Da <= fVar24) {
            fVar24 = unaff_XMM10_Da;
          }
          fVar24 = SQRT(fVar27 * fVar27 + fVar28 * fVar28) + fVar24;
          if (fVar24 <= unaff_XMM10_Da) {
            fVar24 = unaff_XMM10_Da;
          }
          if (fVar24 < in_stack_00000050) goto LAB_180377666;
          bVar8 = false;
        }
        else {
LAB_180377666:
          bVar8 = true;
        }
        if ((*(float *)(unaff_RBP + -0x30) <= fVar29 && fVar29 != *(float *)(unaff_RBP + -0x30)) &&
           (bVar8)) {
          if (*(float *)(unaff_RBP + -0x28) == unaff_XMM10_Da) {
LAB_1803777ad:
            pfVar11 = (float *)FUN_1802a11e0(*(undefined8 *)
                                              (*(longlong *)(unaff_RBP + -0x58) + 0x818),
                                             unaff_RBP + 0x1d8,uVar5,1);
            fVar29 = *(float *)(unaff_RBP + -8) * *pfVar11 + *(float *)(unaff_RBP + -4);
            uVar12 = *(uint *)(*(longlong *)(unaff_RBP + -0x40) + 0x60);
            *(float *)(unaff_RBP + -0x68) = fVar29;
            fVar22 = unaff_XMM10_Da;
            if ((uVar12 >> 0x11 & 1) == 0) {
              if (((uVar12 >> 0x19 & 1) != 0) &&
                 (lVar13 = *(longlong *)(*(longlong *)(unaff_RBP + -0x58) + 0x810), lVar13 != 0)) {
                pfVar11 = (float *)FUN_1802a11e0(lVar13,unaff_RBP + 0x1e8,uVar5,1);
                *(undefined4 *)(unaff_RBP + 0xa8) = 0;
                *(undefined4 *)(unaff_RBP + 0xac) = 0x7f7fffff;
                uVar6 = *(undefined4 *)(unaff_RBP + 0xa8);
                uVar7 = *(undefined4 *)(unaff_RBP + 0xac);
                fVar23 = *pfVar11 * 2.0 - unaff_XMM12_Da;
                fVar22 = pfVar11[1] * 2.0 - unaff_XMM12_Da;
                *(float *)(unaff_RBP + 0xa0) = fVar23;
                *(float *)(unaff_RBP + 0xa4) = fVar22;
                *(undefined4 *)(unaff_RBP + 0xa8) = uVar6;
                *(undefined4 *)(unaff_RBP + 0xac) = uVar7;
                *(float *)(unaff_RBP + -0x50) = fVar23;
                *(float *)(unaff_RBP + -0x4c) = fVar22;
                *(undefined4 *)(unaff_RBP + -0x48) = uVar6;
                *(undefined4 *)(unaff_RBP + -0x44) = uVar7;
                fVar22 = fVar23 * fVar23 + fVar22 * fVar22;
                if ((unaff_XMM10_Da <= fVar22) && (unaff_XMM10_Da = fVar22, 0.999 <= fVar22)) {
                  unaff_XMM10_Da = 0.999;
                }
                fVar27 = unaff_XMM12_Da - unaff_XMM10_Da;
                *(undefined4 *)(unaff_RBP + 0xbc) = 0x7f7fffff;
                fVar22 = fVar27 + fVar22;
                auVar26 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
                fVar31 = auVar26._0_4_;
                uVar6 = *(undefined4 *)(unaff_RBP + -0x44);
                fVar31 = fVar31 * 0.5 * (3.0 - fVar22 * fVar31 * fVar31);
                fVar22 = *(float *)(unaff_RBP + -0x4c) * fVar31;
                unaff_XMM10_Da = fVar23 * fVar31;
                unaff_XMM12_Da = SQRT(fVar27) * fVar31;
                *(float *)(unaff_RBP + -0x50) = unaff_XMM10_Da;
                *(float *)(unaff_RBP + -0x4c) = fVar22;
                *(float *)(unaff_RBP + -0x48) = unaff_XMM12_Da;
                *(undefined4 *)(unaff_RBP + -0x44) = uVar6;
                fVar24 = fVar22 * 0.0 - unaff_XMM12_Da * 0.0;
                *(float *)(unaff_RBP + -0x80) = unaff_XMM10_Da;
                *(float *)(unaff_RBP + -0x7c) = fVar22;
                *(float *)(unaff_RBP + -0x78) = unaff_XMM12_Da;
                *(undefined4 *)(unaff_RBP + -0x74) = uVar6;
                fVar28 = unaff_XMM10_Da * 0.0 - fVar22 * 1.0;
                fVar23 = unaff_XMM12_Da * 1.0 - unaff_XMM10_Da * 0.0;
                *(float *)(unaff_RBP + 0xb0) = fVar24;
                *(float *)(unaff_RBP + 0xb4) = fVar23;
                *(float *)(unaff_RBP + 0xb8) = fVar28;
                *(undefined4 *)(unaff_RBP + 0xbc) = *(undefined4 *)(unaff_RBP + 0xbc);
                fVar31 = fVar23 * fVar23 + fVar24 * fVar24 + fVar28 * fVar28;
                auVar26 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                fVar27 = auVar26._0_4_;
                fVar31 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
                *(undefined4 *)(unaff_RBP + 0xcc) = 0x7f7fffff;
                uVar12 = *(uint *)(*(longlong *)(unaff_RBP + -0x40) + 0x60);
                *(float *)(unaff_RBP + 0xc0) =
                     unaff_XMM12_Da * fVar23 * fVar31 - fVar22 * fVar28 * fVar31;
                *(float *)(unaff_RBP + 0xc4) =
                     unaff_XMM10_Da * fVar28 * fVar31 - unaff_XMM12_Da * fVar24 * fVar31;
                *(float *)(unaff_RBP + 200) =
                     fVar22 * fVar24 * fVar31 - unaff_XMM10_Da * fVar23 * fVar31;
                *(undefined4 *)(unaff_RBP + 0xcc) = *(undefined4 *)(unaff_RBP + 0xcc);
              }
            }
            else {
              *(undefined8 *)(unaff_RBP + -0x80) = 0;
              *(undefined8 *)(unaff_RBP + -0x78) = 0x7f7fffff3f800000;
            }
            if ((uVar12 >> 0x15 & 1) != 0) {
              *(float *)(unaff_RBP + -0x68) =
                   fVar29 - ((*(float *)(unaff_RBP + -0x6c) - fVar30) * fVar22 +
                            (*(float *)(unaff_RBP + -0x70) - fVar32) * unaff_XMM10_Da) /
                            unaff_XMM12_Da;
            }
            uVar17 = uVar17 ^ uVar17 << 0xd;
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar12 = (uVar17 ^ uVar17 << 5) - 1;
                    // WARNING: Subroutine does not return
            FUN_1808fd400(uVar12,(float)uVar12 * 1.4629181e-09);
          }
          *(float *)(unaff_RBP + 0x88) = fVar32;
          *(float *)(unaff_RBP + 0x8c) = fVar30;
          *(undefined4 *)(unaff_RBP + 0x90) = 0;
          *(undefined4 *)(unaff_RBP + 0x94) = 0x7f7fffff;
          FUN_18046da60();
          fVar28 = *(float *)(unaff_RBP + 0x120) * 0.33 * 6.6666665;
          fVar27 = *(float *)(unaff_RBP + 0x124) * 0.33 * 6.6666665;
          fVar29 = *(float *)(unaff_RBP + 0x128) * 0.33 * 6.6666665;
          fVar27 = (fVar28 + fVar28 + fVar27 + fVar27 + fVar29 + fVar29) -
                   *(float *)(unaff_RBP + -0x2c);
          fVar29 = unaff_XMM10_Da;
          if ((unaff_XMM10_Da <= fVar27) && (fVar29 = fVar27, unaff_XMM12_Da <= fVar27)) {
            fVar29 = unaff_XMM12_Da;
          }
          uVar17 = uVar17 ^ uVar17 << 0xd;
          uVar17 = uVar17 ^ uVar17 >> 0x11;
          uVar17 = uVar17 ^ uVar17 << 5;
          if ((float)(uVar17 - 1) * unaff_XMM13_Da <= fVar29) goto LAB_1803777ad;
        }
        uVar17 = uVar17 ^ uVar17 << 0xd;
        uVar17 = uVar17 ^ uVar17 >> 0x11;
        uVar17 = uVar17 ^ uVar17 << 5;
        uVar17 = uVar17 ^ uVar17 << 0xd;
        uVar17 = uVar17 ^ uVar17 >> 0x11;
        unaff_EBX = uVar17 ^ uVar17 << 5;
        plVar10 = (longlong *)(unaff_RBP + 0x40);
        *plVar10 = *plVar10 + -1;
        unaff_XMM11_Da = *(float *)(unaff_RBP + 4);
        unaff_R13 = *(undefined8 **)(unaff_RBP + -0x58);
        unaff_RSI = *(longlong *)(unaff_RBP + -0x20);
      } while (*plVar10 != 0);
      unaff_R14D = *(uint *)(unaff_RBP + 8);
    }
LAB_1803782ba:
    uVar12 = *(uint *)(unaff_RBP + -0x18);
    iVar2 = *(int *)(unaff_RBP + 0xc);
    fVar29 = *(float *)(unaff_RBP + 0x10);
    lVar13 = *(longlong *)(unaff_RBP + -0x40);
    if (iVar2 <= (int)uVar12) {
      uVar17 = *(uint *)(unaff_RBP + -0x24);
      do {
        uVar19 = uVar17;
        uVar17 = uVar19 + 1;
        *(uint *)(unaff_RBP + -0x24) = uVar17;
        if (*(int *)(unaff_RBP + 0x14) <= (int)uVar17) {
          puVar16 = *(undefined **)(lVar13 + 0x10);
          puVar20 = &DAT_18098bc73;
          if ((*(uint *)(lVar13 + 0x60) & 0x400000) == 0) {
            if (puVar16 != (undefined *)0x0) {
              puVar20 = puVar16;
            }
            lVar13 = (*(longlong **)(unaff_RBP + 0x68))[1] - **(longlong **)(unaff_RBP + 0x68);
            puVar16 = &UNK_180a21780;
          }
          else {
            if (puVar16 != (undefined *)0x0) {
              puVar20 = puVar16;
            }
            lVar13 = (*(longlong **)(unaff_RBP + 0x60))[1] - **(longlong **)(unaff_RBP + 0x60);
            puVar16 = &UNK_180a217a0;
          }
                    // WARNING: Subroutine does not return
          FUN_180062300(_DAT_180c86928,puVar16,lVar13 / 0x28,puVar20);
        }
        uVar12 = 0;
      } while (iVar2 < 1);
      fVar23 = unaff_XMM12_Da / (float)iVar2;
      *(uint *)(unaff_RBP + -0x38) = uVar17 >> 3;
      fVar29 = unaff_XMM12_Da / (float)*(int *)(unaff_RBP + 0x14);
      fVar31 = (float)(int)(uVar19 + 2) * fVar29;
      fVar29 = (float)(int)uVar17 * fVar29;
      fVar22 = unaff_XMM12_Da / fStack000000000000003c;
      *(float *)(unaff_RBP + 0x10) = fVar29;
      fStack0000000000000038 = fVar22;
      fStack0000000000000048 = fVar23;
      fStack000000000000004c = fVar31;
    }
    fVar27 = *(float *)(unaff_RSI + 0x24);
    cVar21 = '\0';
    fVar28 = *(float *)(unaff_RSI + 0x20);
    uVar17 = *(uint *)(lVar13 + 0x60);
    unaff_XMM11_Da = fVar27 * fVar29;
    *(float *)(unaff_RBP + 4) = unaff_XMM11_Da;
    unaff_XMM14_Da = (float)(int)uVar12 * fVar23 * fVar28;
    uVar17 = uVar17 & 0x400000;
    if (uVar17 == 0) {
      *(undefined8 *)(unaff_RBP + -0x18) = unaff_R15;
      fVar30 = *(float *)(unaff_RBP + -0x18) - unaff_XMM14_Da;
      *(undefined8 *)(unaff_RBP + -0x58) = unaff_R12;
      fVar29 = unaff_XMM14_Da - *(float *)(unaff_RBP + -0x58);
      fVar22 = unaff_XMM11_Da - *(float *)(unaff_RBP + -0x54);
      if (fVar29 <= fVar30) {
        fVar29 = fVar30;
      }
      fVar30 = *(float *)(unaff_RBP + -0x14) - unaff_XMM11_Da;
      if (fVar29 <= unaff_XMM10_Da) {
        fVar29 = unaff_XMM10_Da;
      }
      if (fVar22 <= fVar30) {
        fVar22 = fVar30;
      }
      if (fVar22 <= unaff_XMM10_Da) {
        fVar22 = unaff_XMM10_Da;
      }
      fVar30 = fVar22;
      if (fVar22 <= fVar29) {
        fVar30 = fVar29;
      }
      if (unaff_XMM10_Da <= fVar30) {
        fVar30 = unaff_XMM10_Da;
      }
      fVar30 = SQRT(fVar22 * fVar22 + fVar29 * fVar29) + fVar30;
      if (fVar30 <= unaff_XMM10_Da) {
        fVar30 = unaff_XMM10_Da;
      }
      fVar22 = fStack0000000000000038;
      if (in_stack_00000050 < fVar30) {
        cVar21 = '\x01';
      }
    }
    fVar29 = 0.5;
    uVar19 = *(uint *)(unaff_RSI + 0x48);
    lVar13 = *(longlong *)(unaff_RSI + 0x40);
    *(uint *)(unaff_RBP + -0x18) = uVar12 + 1;
    uVar18 = uVar12 >> 3;
    uVar14 = (ulonglong)(longlong)(int)(uVar18 * 1000 + *(uint *)(unaff_RBP + -0x38)) %
             (ulonglong)uVar19;
    for (puVar3 = *(uint **)(lVar13 + uVar14 * 8); puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 4)) {
      if ((uVar18 == *puVar3) && (*(uint *)(unaff_RBP + -0x38) == puVar3[1])) {
        lVar15 = *(longlong *)(unaff_RSI + 0x48);
        *(uint **)(unaff_RBP + 0x160) = puVar3;
        plVar10 = (longlong *)(unaff_RBP + 0x160);
        *(ulonglong *)(unaff_RBP + 0x168) = lVar13 + uVar14 * 8;
        goto LAB_180377195;
      }
    }
    lVar15 = *(longlong *)(unaff_RSI + 0x48);
    *(undefined8 *)(unaff_RBP + 0x170) = *(undefined8 *)(lVar13 + lVar15 * 8);
    plVar10 = (longlong *)(unaff_RBP + 0x170);
    *(longlong *)(unaff_RBP + 0x178) = lVar13 + lVar15 * 8;
LAB_180377195:
    if (*plVar10 == *(longlong *)(lVar13 + lVar15 * 8)) {
      unaff_R13 = (undefined8 *)0x0;
    }
    else {
      unaff_R13 = *(undefined8 **)(*plVar10 + 8);
    }
    *(undefined8 **)(unaff_RBP + -0x58) = unaff_R13;
    unaff_XMM15_Da = (float)(int)(uVar12 + 1) * fVar23 * fVar28 - unaff_XMM14_Da;
    unaff_XMM6_Da = fVar22 * unaff_XMM15_Da;
    if (((uVar17 == 0) &&
        (cVar9 = func_0x0001803723f0(*(undefined8 *)(unaff_RBP + 0x20)), cVar9 == '\0')) &&
       (*(int *)(unaff_RBP + 0x28) != 100)) {
      unaff_XMM6_Da = unaff_XMM6_Da * (float)*(int *)(unaff_RBP + 0x28) * 0.01;
    }
    uVar12 = unaff_R14D ^ unaff_R14D << 0xd;
    uVar12 = uVar12 ^ uVar12 >> 0x11;
    unaff_R14D = uVar12 ^ uVar12 << 5;
    *(uint *)(unaff_RBP + 8) = unaff_R14D;
    if ((unaff_XMM6_Da < unaff_XMM12_Da) &&
       (unaff_XMM6_Da < (float)(unaff_R14D - 1) * unaff_XMM13_Da)) {
      uVar12 = unaff_EBX ^ unaff_EBX << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      uVar12 = uVar12 ^ uVar12 << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      uVar12 = uVar12 ^ uVar12 << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      uVar12 = uVar12 ^ uVar12 << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      unaff_EBX = uVar12 ^ uVar12 << 5;
      goto LAB_1803782ba;
    }
    if (unaff_XMM6_Da <= unaff_XMM12_Da) {
      unaff_XMM6_Da = unaff_XMM12_Da;
    }
    if ((cVar21 != '\0') ||
       (lVar13 = unaff_R13[*(longlong *)(unaff_RBP + 0x18) + 0xf2], lVar13 == 0)) {
      if (0 < (int)(unaff_XMM6_Da * unaff_XMM6_Da)) {
        uVar14 = (ulonglong)(uint)(int)(unaff_XMM6_Da * unaff_XMM6_Da);
        do {
          uVar12 = unaff_EBX ^ unaff_EBX << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          unaff_EBX = uVar12 ^ uVar12 << 5;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      goto LAB_1803782ba;
    }
    fVar22 = *(float *)(unaff_RSI + 0x1c);
    fVar23 = fVar27 * fVar31 - unaff_XMM11_Da;
    uVar1 = *(ushort *)(lVar13 + 0x5c);
    *(float *)(unaff_RBP + 0x50) = fVar23;
    in_RAX = (undefined *)*unaff_R13;
    *(float *)(unaff_RBP + -0x10) = (float)(int)uVar18;
    *(float *)(unaff_RBP + -0xc) = (float)*(int *)(unaff_RBP + -0x38);
    unaff_XMM7_Da = (unaff_XMM15_Da * fVar29 + unaff_XMM14_Da) - fVar22 * (float)(int)uVar18;
    unaff_XMM9_Da = (float)uVar1;
    unaff_XMM8_Da = (fVar23 * fVar29 + unaff_XMM11_Da) - (float)*(int *)(unaff_RBP + -0x38) * fVar22
    ;
    if (in_RAX != &UNK_180a22a30) goto code_r0x00018037851f;
    fVar22 = *(float *)(unaff_R13[2] + 0x1c) /
             (float)(1 << ((byte)*(undefined4 *)(unaff_R13 + 5) & 0x1f));
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180378550(longlong param_1,ulonglong *param_2,int param_3,int param_4)
void FUN_180378550(longlong param_1,ulonglong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = 0;
  plVar8 = (longlong *)(((longlong)param_4 + 0x10b) * 0x20 + param_1);
  lVar3 = *plVar8;
  if (plVar8[1] - lVar3 >> 3 != 0) {
    lVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar6 + lVar3) + 0x30) == param_3) {
        puVar5 = (undefined8 *)param_2[1];
        if (puVar5 < (undefined8 *)param_2[2]) {
          param_2[1] = (ulonglong)(puVar5 + 1);
          *puVar5 = *(undefined8 *)(lVar6 + lVar3);
        }
        else {
          puVar4 = (undefined8 *)*param_2;
          lVar1 = (longlong)puVar5 - (longlong)puVar4 >> 3;
          if (lVar1 == 0) {
            lVar1 = 1;
LAB_180378603:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)param_2[3]);
            puVar4 = (undefined8 *)*param_2;
            puVar5 = (undefined8 *)param_2[1];
          }
          else {
            lVar1 = lVar1 * 2;
            if (lVar1 != 0) goto LAB_180378603;
            puVar2 = (undefined8 *)0x0;
          }
          if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar2,puVar4,(longlong)puVar5 - (longlong)puVar4);
          }
          *puVar2 = *(undefined8 *)(lVar6 + lVar3);
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_2[2] = (ulonglong)(puVar2 + lVar1);
          *param_2 = (ulonglong)puVar2;
          param_2[1] = (ulonglong)(puVar2 + 1);
        }
      }
      lVar3 = *plVar8;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar8[1] - lVar3 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037858c(undefined8 param_1,longlong param_2,int param_3)
void FUN_18037858c(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong *unaff_RBX;
  undefined8 *puVar4;
  longlong lVar5;
  int unaff_R13D;
  longlong *unaff_R15;
  int in_stack_00000060;
  
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(lVar5 + param_2) + 0x30) == param_3) {
      puVar4 = (undefined8 *)unaff_RBX[1];
      if (puVar4 < (undefined8 *)unaff_RBX[2]) {
        unaff_RBX[1] = (ulonglong)(puVar4 + 1);
        *puVar4 = *(undefined8 *)(lVar5 + param_2);
      }
      else {
        puVar3 = (undefined8 *)*unaff_RBX;
        lVar1 = (longlong)puVar4 - (longlong)puVar3 >> 3;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_180378603:
          puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)unaff_RBX[3]);
          puVar3 = (undefined8 *)*unaff_RBX;
          puVar4 = (undefined8 *)unaff_RBX[1];
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_180378603;
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
        }
        *puVar2 = *(undefined8 *)(lVar5 + param_2);
        if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        unaff_RBX[2] = (ulonglong)(puVar2 + lVar1);
        *unaff_RBX = (ulonglong)puVar2;
        unaff_RBX[1] = (ulonglong)(puVar2 + 1);
        param_3 = in_stack_00000060;
      }
    }
    param_2 = *unaff_R15;
    unaff_R13D = unaff_R13D + 1;
    lVar5 = lVar5 + 8;
    if ((ulonglong)(unaff_R15[1] - param_2 >> 3) <= (ulonglong)(longlong)unaff_R13D) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1803786a6(void)
void FUN_1803786a6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




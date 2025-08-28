#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part422.c - 8 个函数

// 函数: void FUN_18049a3cc(longlong param_1,longlong param_2,char *param_3,longlong param_4)
void FUN_18049a3cc(longlong param_1,longlong param_2,char *param_3,longlong param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ushort uVar3;
  int8_t auVar4 [16];
  double dVar5;
  float fVar6;
  uint64_t uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar22;
  longlong lVar23;
  longlong in_R11;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar32;
  float fVar33;
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  float fVar34;
  float fVar35;
  float in_XMM2_Da;
  float fVar36;
  int8_t auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iStackX_20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  longlong lStack0000000000000050;
  longlong in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  char *in_stack_00000078;
  
  lStack0000000000000050 = param_4;
  do {
    cVar13 = *param_3;
    iVar21 = *(int *)(lStack0000000000000050 + param_2);
    fStack0000000000000030 = 1.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000038 = 0.0;
    fStack000000000000003c = 0.0;
    fStack0000000000000040 = 0.0;
    fStack0000000000000044 = 0.0;
    fStack0000000000000048 = 0.0;
    fStack000000000000004c = 1.0;
    if (-1 < cVar13) {
      lVar26 = *(longlong *)(param_1 + 8);
      lVar16 = *(longlong *)(in_R11 + 0x140);
      fVar46 = (float)iVar21;
      fStack000000000000006c = 3.4028235e+38;
      do {
        fVar41 = fStack000000000000003c;
        fVar11 = fStack0000000000000038;
        fVar10 = fStack0000000000000034;
        fVar9 = fStack0000000000000030;
        lVar25 = (longlong)cVar13;
        uVar3 = *(ushort *)(lVar26 + 0x10 + lVar25 * 0x48);
        pfVar15 = *(float **)(lVar26 + 8 + lVar25 * 0x48);
        iVar22 = uVar3 - 1;
        if (fVar46 < pfVar15[(ulonglong)uVar3 - 1]) {
          if (*pfVar15 <= fVar46) {
            if (((int)*pfVar15 == 0) && ((int)pfVar15[(ulonglong)uVar3 - 1] == iVar22)) {
              iVar20 = (int)fVar46;
              fVar45 = fVar46 - pfVar15[iVar20];
            }
            else {
              iVar20 = 0;
              if (0 < (int)(uVar3 - 2)) {
                do {
                  iVar17 = iVar22 + iVar20 >> 1;
                  iVar12 = iVar17;
                  if (pfVar15[iVar17] <= fVar46) {
                    iVar12 = iVar22;
                    iVar20 = iVar17;
                  }
                  iVar22 = iVar12;
                } while (iVar20 < iVar22 + -1);
              }
              fVar45 = (fVar46 - pfVar15[iVar20]) /
                       (pfVar15[(longlong)iVar20 + 1] - pfVar15[iVar20]);
            }
          }
          else {
            fVar45 = 0.0;
            iVar20 = 0;
          }
        }
        else {
          fVar45 = 1.0;
          iVar20 = uVar3 - 2;
        }
        lVar18 = (longlong)iVar20;
        if ((fVar46 - pfVar15[lVar18] <= -0.001) || (in_XMM2_Da <= fVar46 - pfVar15[lVar18])) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        lVar23 = *(longlong *)(lVar26 + lVar25 * 0x48);
        if (bVar8) {
          pfVar15 = (float *)(lVar23 + lVar18 * 0x10);
          fVar42 = *pfVar15;
          fVar43 = pfVar15[1];
          fVar44 = pfVar15[2];
          fVar45 = pfVar15[3];
        }
        else {
          lVar19 = lVar18 + 1;
          if (in_XMM2_Da <= fVar45) {
            if (fVar45 <= 0.999) {
              pfVar15 = (float *)(lVar23 + lVar18 * 0x10);
              fVar42 = *pfVar15;
              fVar43 = pfVar15[1];
              fVar44 = pfVar15[2];
              fVar34 = pfVar15[3];
              pfVar15 = (float *)(lVar23 + lVar19 * 0x10);
              fVar35 = *pfVar15;
              fVar36 = pfVar15[1];
              fVar32 = pfVar15[2] * fVar44;
              fVar33 = pfVar15[3] * fVar34;
              *(int32_t *)(unaff_RBP + -0x30) = 0xbf800000;
              *(int32_t *)(unaff_RBP + -0x2c) = 0xbf800000;
              *(int32_t *)(unaff_RBP + -0x28) = 0xbf800000;
              *(int32_t *)(unaff_RBP + -0x24) = 0xbf800000;
              auVar31._0_4_ = fVar32 + fVar35 * fVar42;
              auVar31._4_4_ = fVar33 + fVar36 * fVar43;
              auVar31._8_4_ = fVar32 + fVar32;
              auVar31._12_4_ = fVar33 + fVar33;
              auVar37._4_12_ = auVar31._4_12_;
              auVar37._0_4_ = auVar31._0_4_ + auVar31._4_4_;
              *(uint64_t *)(unaff_RBP + -0x40) = 0x3f8000003f800000;
              *(uint64_t *)(unaff_RBP + -0x38) = 0x3f8000003f800000;
              uVar24 = movmskps(iVar20 * 2,auVar37);
              pfVar15 = (float *)(unaff_RBP + -0x40 + (ulonglong)(uVar24 & 1) * 0x10);
              fVar35 = *pfVar15;
              fVar36 = pfVar15[1];
              fVar32 = pfVar15[2];
              fVar33 = pfVar15[3];
              pfVar15 = (float *)(lVar23 + lVar19 * 0x10);
              fVar38 = *pfVar15;
              fVar39 = pfVar15[1];
              fVar40 = pfVar15[2];
              fVar6 = pfVar15[3];
              if (0.9995 < ABS(auVar37._0_4_)) {
                fVar27 = 1.0 - fVar45;
                fVar42 = fVar27 * fVar42 + fVar45 * fVar35 * fVar38;
                fVar43 = fVar27 * fVar43 + fVar45 * fVar36 * fVar39;
                fVar44 = fVar27 * fVar44 + fVar45 * fVar32 * fVar40;
                fVar45 = fVar27 * fVar34 + fVar45 * fVar33 * fVar6;
                fVar34 = fVar45 * fVar45 + fVar42 * fVar42;
                fVar35 = fVar44 * fVar44 + fVar43 * fVar43;
                fVar39 = fVar34 + fVar43 * fVar43 + fVar44 * fVar44;
                fVar40 = fVar35 + fVar42 * fVar42 + fVar45 * fVar45;
                auVar29._0_4_ = fVar35 + fVar34 + 1.1754944e-38;
                auVar29._4_4_ = fVar34 + fVar35 + 1.1754944e-38;
                auVar29._8_4_ = fVar39 + 1.1754944e-38;
                auVar29._12_4_ = fVar40 + 1.1754944e-38;
                auVar31 = rsqrtps(auVar37,auVar29);
                fVar36 = auVar31._0_4_;
                fVar32 = auVar31._4_4_;
                fVar33 = auVar31._8_4_;
                fVar38 = auVar31._12_4_;
                fVar42 = fVar42 * (3.0 - fVar36 * fVar36 * (fVar35 + fVar34)) * fVar36 * 0.5;
                fVar43 = fVar43 * (3.0 - fVar32 * fVar32 * (fVar34 + fVar35)) * fVar32 * 0.5;
                fVar44 = fVar44 * (3.0 - fVar33 * fVar33 * fVar39) * fVar33 * 0.5;
                fVar45 = fVar45 * (3.0 - fVar38 * fVar38 * fVar40) * fVar38 * 0.5;
              }
              else {
                acosf();
                fVar45 = (float)sinf();
                fVar27 = (float)sinf();
                fVar27 = fVar27 * (1.0 / fVar45);
                fVar28 = (float)sinf();
                fVar28 = fVar28 * (1.0 / fVar45);
                fVar42 = fVar27 * fVar42 + fVar28 * fVar35 * fVar38;
                fVar43 = fVar27 * fVar43 + fVar28 * fVar36 * fVar39;
                fVar44 = fVar27 * fVar44 + fVar28 * fVar32 * fVar40;
                fVar45 = fVar27 * fVar34 + fVar28 * fVar33 * fVar6;
                in_R11 = in_stack_00000058;
              }
            }
            else {
              pfVar15 = (float *)(lVar23 + lVar19 * 0x10);
              fVar42 = *pfVar15;
              fVar43 = pfVar15[1];
              fVar44 = pfVar15[2];
              fVar45 = pfVar15[3];
            }
          }
          else {
            pfVar15 = (float *)(lVar23 + lVar18 * 0x10);
            fVar42 = *pfVar15;
            fVar43 = pfVar15[1];
            fVar44 = pfVar15[2];
            fVar45 = pfVar15[3];
          }
        }
        *(float *)(unaff_RBP + -0x70) = fVar42;
        *(float *)(unaff_RBP + -0x6c) = fVar43;
        *(float *)(unaff_RBP + -0x68) = fVar44;
        *(float *)(unaff_RBP + -100) = fVar45;
        pfVar15 = (float *)(lVar25 * 0x1b0 + 0x80 + lVar16);
        fVar34 = *pfVar15;
        fVar35 = pfVar15[1];
        fVar36 = pfVar15[2];
        fVar32 = pfVar15[3];
        *(float *)(unaff_RBP + -0x60) = fVar34;
        *(float *)(unaff_RBP + -0x5c) = fVar35;
        *(float *)(unaff_RBP + -0x58) = fVar36;
        *(float *)(unaff_RBP + -0x54) = fVar32;
        pfVar15 = (float *)FUN_1801c0fb0(unaff_RBP + -0x70,unaff_RBP + -0x50,&stack0x00000040);
        fStack000000000000004c = fStack000000000000006c;
        fStack0000000000000040 = fVar34 + *pfVar15;
        fStack0000000000000044 = fVar35 + pfVar15[1];
        fStack0000000000000048 = fVar36 + pfVar15[2];
        cVar13 = *(char *)(lVar25 + 0x100 + in_R11);
        in_XMM2_Da = 0.001;
        fStack0000000000000034 =
             fVar44 * fVar41 * 1.0 + fVar42 * fVar10 * 1.0 + (fVar9 * fVar43 - fVar45 * fVar11);
        fStack0000000000000038 =
             fVar45 * fVar10 * 1.0 + fVar42 * fVar11 * 1.0 + (fVar9 * fVar44 - fVar43 * fVar41);
        fStack000000000000003c =
             fVar43 * fVar11 * 1.0 + fVar42 * fVar41 * 1.0 + (fVar9 * fVar45 - fVar44 * fVar10);
        fStack0000000000000030 =
             fVar45 * fVar41 * -1.0 + fVar44 * fVar11 * -1.0 + (fVar9 * fVar42 - fVar43 * fVar10);
        fStack0000000000000060 = fStack0000000000000040;
        fStack0000000000000064 = fStack0000000000000044;
        fStack0000000000000068 = fStack0000000000000048;
      } while (-1 < cVar13);
    }
    fVar11 = fStack000000000000004c;
    fVar10 = fStack0000000000000048;
    fVar9 = fStack0000000000000044;
    fVar46 = fStack0000000000000040;
    auVar30._0_8_ = (double)fStack0000000000000038 * (double)fStack0000000000000038;
    auVar30._8_8_ = 0;
    dVar5 = (double)fStack0000000000000034 * (double)fStack0000000000000034 + auVar30._0_8_ +
            (double)fStack000000000000003c * (double)fStack000000000000003c +
            (double)fStack0000000000000030 * (double)fStack0000000000000030;
    if (dVar5 <= 1e-07) {
      fStack0000000000000034 = 0.0;
      fStack0000000000000038 = 0.0;
      fStack000000000000003c = 0.0;
      fStack0000000000000030 = 1.0;
    }
    else {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar31 = sqrtpd(auVar30,auVar4);
      dVar5 = 1.0 / auVar31._0_8_;
      fStack0000000000000034 = (float)((double)fStack0000000000000034 * dVar5);
      fStack0000000000000038 = (float)((double)fStack0000000000000038 * dVar5);
      fStack000000000000003c = (float)((double)fStack000000000000003c * dVar5);
      fStack0000000000000030 = (float)((double)fStack0000000000000030 * dVar5);
    }
    uVar3 = *(ushort *)(unaff_RSI + 0x34 + unaff_RDI * 8);
    iVar22 = 0;
    lVar26 = 0;
    fVar41 = (float)iVar21;
    if (uVar3 != 0) {
      pfVar15 = *(float **)(unaff_RSI + 0x2c + unaff_RDI * 8);
      do {
        if (fVar41 < *pfVar15) break;
        iVar22 = iVar22 + 1;
        lVar26 = lVar26 + 1;
        pfVar15 = pfVar15 + 1;
      } while (iVar22 < (int)(uint)uVar3);
    }
    uVar24 = uVar3 + 1;
    lVar16 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)uVar24 * 4,4);
    lVar25 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)uVar24 << 4,4);
    if (0 < lVar26) {
      lVar18 = 0;
      lVar23 = lVar26;
      do {
        puVar1 = (uint64_t *)(lVar18 + *(longlong *)(unaff_RSI + 0x24 + unaff_RDI * 8));
        uVar7 = puVar1[1];
        *(uint64_t *)(lVar18 + lVar25) = *puVar1;
        ((uint64_t *)(lVar18 + lVar25))[1] = uVar7;
        lVar23 = lVar23 + -1;
        lVar18 = lVar18 + 0x10;
      } while (lVar23 != 0);
    }
    if (iVar22 < (int)(uint)*(ushort *)(unaff_RSI + 0x34 + unaff_RDI * 8)) {
      lVar18 = lVar26 << 4;
      iVar21 = iVar22;
      do {
        iVar21 = iVar21 + 1;
        puVar2 = (uint64_t *)(lVar18 + *(longlong *)(unaff_RSI + 0x24 + unaff_RDI * 8));
        uVar7 = puVar2[1];
        puVar1 = (uint64_t *)(lVar25 + lVar18 + 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        lVar18 = lVar18 + 0x10;
      } while (iVar21 < (int)(uint)*(ushort *)(unaff_RSI + 0x34 + unaff_RDI * 8));
    }
    puVar1 = (uint64_t *)(lVar25 + lVar26 * 0x10);
    *puVar1 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
    puVar1[1] = CONCAT44(fStack000000000000003c,fStack0000000000000038);
    if (0 < iVar22) {
                    // WARNING: Subroutine does not return
      memcpy(lVar16,*(uint64_t *)(unaff_RSI + 0x2c + unaff_RDI * 8),(longlong)iVar22 << 2);
    }
    uVar14 = (uint)*(ushort *)(unaff_RSI + 0x34 + unaff_RDI * 8);
    if (iVar22 < (int)uVar14) {
                    // WARNING: Subroutine does not return
      memcpy(lVar16 + (longlong)(iVar22 + 1) * 4,
             *(longlong *)(unaff_RSI + 0x2c + unaff_RDI * 8) + (longlong)iVar22 * 4,
             (longlong)(int)(uVar14 - iVar22) << 2);
    }
    *(float *)(lVar16 + lVar26 * 4) = fVar41;
    if (*(longlong *)(unaff_RSI + 0x2c + unaff_RDI * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(unaff_RSI + 0x2c + unaff_RDI * 8) = 0;
    if (*(longlong *)(unaff_RSI + 0x24 + unaff_RDI * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RSI + 0x2c + unaff_RDI * 8) = lVar16;
    iVar21 = 0;
    *(longlong *)(unaff_RSI + 0x24 + unaff_RDI * 8) = lVar25;
    lVar26 = 0;
    *(short *)(unaff_RSI + 0x34 + unaff_RDI * 8) = (short)uVar24;
    uVar3 = *(ushort *)(unaff_RSI + 0x46 + unaff_RDI * 8);
    if (uVar3 != 0) {
      pfVar15 = *(float **)(unaff_RSI + 0x3e + unaff_RDI * 8);
      do {
        if (fVar41 < *pfVar15) break;
        iVar21 = iVar21 + 1;
        lVar26 = lVar26 + 1;
        pfVar15 = pfVar15 + 1;
      } while (iVar21 < (int)(uint)uVar3);
    }
    uVar24 = uVar3 + 1;
    lVar16 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)uVar24 * 4,4);
    lVar25 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)uVar24 << 4,4);
    if (0 < lVar26) {
      lVar18 = 0;
      lVar23 = lVar26;
      do {
        puVar1 = (uint64_t *)(lVar18 + *(longlong *)(unaff_RSI + 0x36 + unaff_RDI * 8));
        uVar7 = puVar1[1];
        *(uint64_t *)(lVar18 + lVar25) = *puVar1;
        ((uint64_t *)(lVar18 + lVar25))[1] = uVar7;
        lVar23 = lVar23 + -1;
        lVar18 = lVar18 + 0x10;
      } while (lVar23 != 0);
    }
    if (iVar21 < (int)(uint)*(ushort *)(unaff_RSI + 0x46 + unaff_RDI * 8)) {
      lVar18 = lVar26 << 4;
      iVar22 = iVar21;
      do {
        iVar22 = iVar22 + 1;
        puVar2 = (uint64_t *)(lVar18 + *(longlong *)(unaff_RSI + 0x36 + unaff_RDI * 8));
        uVar7 = puVar2[1];
        puVar1 = (uint64_t *)(lVar25 + lVar18 + 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        lVar18 = lVar18 + 0x10;
      } while (iVar22 < (int)(uint)*(ushort *)(unaff_RSI + 0x46 + unaff_RDI * 8));
    }
    pfVar15 = (float *)(lVar25 + lVar26 * 0x10);
    *pfVar15 = fVar46;
    pfVar15[1] = fVar9;
    pfVar15[2] = fVar10;
    pfVar15[3] = fVar11;
    if (0 < iVar21) {
                    // WARNING: Subroutine does not return
      memcpy(lVar16,*(uint64_t *)(unaff_RSI + 0x3e + unaff_RDI * 8),(longlong)iVar21 << 2);
    }
    uVar14 = (uint)*(ushort *)(unaff_RSI + 0x46 + unaff_RDI * 8);
    if (iVar21 < (int)uVar14) {
                    // WARNING: Subroutine does not return
      memcpy(lVar16 + (longlong)(iVar21 + 1) * 4,
             *(longlong *)(unaff_RSI + 0x3e + unaff_RDI * 8) + (longlong)iVar21 * 4,
             (longlong)(int)(uVar14 - iVar21) << 2);
    }
    *(float *)(lVar16 + lVar26 * 4) = fVar41;
    if (*(longlong *)(unaff_RSI + 0x3e + unaff_RDI * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(unaff_RSI + 0x3e + unaff_RDI * 8) = 0;
    if (*(longlong *)(unaff_RSI + 0x36 + unaff_RDI * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iStackX_20 = iStackX_20 + 1;
    in_XMM2_Da = 0.001;
    lStack0000000000000050 = lStack0000000000000050 + 4;
    *(longlong *)(unaff_RSI + 0x3e + unaff_RDI * 8) = lVar16;
    *(longlong *)(unaff_RSI + 0x36 + unaff_RDI * 8) = lVar25;
    *(short *)(unaff_RSI + 0x46 + unaff_RDI * 8) = (short)uVar24;
    param_2 = *(longlong *)(in_stack_00000078 + 8);
    param_1 = *(longlong *)(unaff_RBP + -0x80);
    param_3 = in_stack_00000078;
    in_R11 = in_stack_00000058;
    if ((ulonglong)(*(longlong *)(in_stack_00000078 + 0x10) - param_2 >> 2) <=
        (ulonglong)(longlong)iStackX_20) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18049ac39(void)
void FUN_18049ac39(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18049ac50(longlong *param_1)
void FUN_18049ac50(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  int8_t auVar3 [16];
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  
  if ((short)param_1[2] != 0) {
    pfVar8 = (float *)*param_1;
    if (*pfVar8 <= 0.0 && *pfVar8 != 0.0) {
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = -pfVar8[3];
      pfVar8 = (float *)*param_1;
    }
    uVar6 = FUN_180084000(pfVar8);
    iVar10 = 1;
    if (1 < *(ushort *)(param_1 + 2)) {
      lVar9 = 0x10;
      do {
        lVar2 = *param_1;
        dVar19 = (double)*(float *)(lVar9 + 8 + lVar2);
        dVar5 = (double)*(float *)(lVar9 + 4 + lVar2);
        dVar18 = (double)*(float *)(lVar9 + 0xc + lVar2);
        dVar16 = (double)*(float *)(lVar9 + lVar2);
        auVar12._0_8_ = dVar16 * dVar16;
        auVar12._8_8_ = 0;
        dVar4 = dVar5 * dVar5 + dVar19 * dVar19 + dVar18 * dVar18 + auVar12._0_8_;
        if (dVar4 <= 1e-07) {
          fVar15 = 1.0;
          fVar17 = 0.0;
          fVar11 = 0.0;
          fVar14 = 0.0;
        }
        else {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = dVar4;
          auVar12 = sqrtpd(auVar12,auVar3);
          dVar4 = 1.0 / auVar12._0_8_;
          fVar15 = (float)(dVar4 * dVar16);
          fVar17 = (float)(dVar4 * dVar18);
          fVar11 = (float)(dVar4 * dVar19);
          fVar14 = (float)(dVar4 * dVar5);
        }
        *(float *)(lVar9 + 4 + lVar2) = fVar14;
        *(float *)(lVar9 + 8 + lVar2) = fVar11;
        *(float *)(lVar9 + 0xc + lVar2) = fVar17;
        *(float *)(lVar9 + lVar2) = fVar15;
        pfVar8 = (float *)(lVar9 + lVar2);
        pfVar1 = (float *)(lVar9 + -0x10 + lVar2);
        fVar11 = pfVar8[3] * pfVar1[3] + *pfVar8 * *pfVar1;
        fVar14 = pfVar8[2] * pfVar1[2] + pfVar8[1] * pfVar1[1];
        auVar13._0_4_ = fVar14 + fVar11;
        auVar13._4_4_ = fVar11 + fVar14;
        auVar13._8_4_ = fVar11 + pfVar8[1] * pfVar1[1] + pfVar8[2] * pfVar1[2];
        auVar13._12_4_ = fVar14 + *pfVar8 * *pfVar1 + pfVar8[3] * pfVar1[3];
        iVar7 = movmskps(uVar6,auVar13);
        if (iVar7 != 0) {
          *(uint *)(lVar9 + 4 + lVar2) = *(uint *)(lVar9 + 4 + lVar2) ^ 0x80000000;
          *(uint *)(lVar9 + 8 + lVar2) = *(uint *)(lVar9 + 8 + lVar2) ^ 0x80000000;
          *(float *)(lVar9 + 0xc + lVar2) = -fVar17;
          *(float *)(lVar9 + lVar2) = -fVar15;
        }
        uVar6 = (uint)*(ushort *)(param_1 + 2);
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (iVar10 < (int)(uint)*(ushort *)(param_1 + 2));
    }
  }
  return;
}





// 函数: void FUN_18049ac68(float *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_18049ac68(float *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  int8_t auVar4 [16];
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  
  if (*param_1 <= 0.0 && *param_1 != 0.0) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
    param_1[3] = -param_1[3];
    param_1 = (float *)*param_4;
  }
  uVar7 = FUN_180084000(param_1);
  iVar10 = 1;
  if (1 < *(ushort *)(param_4 + 2)) {
    lVar9 = 0x10;
    do {
      lVar3 = *param_4;
      dVar19 = (double)*(float *)(lVar9 + 8 + lVar3);
      dVar6 = (double)*(float *)(lVar9 + 4 + lVar3);
      dVar18 = (double)*(float *)(lVar9 + 0xc + lVar3);
      dVar16 = (double)*(float *)(lVar9 + lVar3);
      auVar12._0_8_ = dVar16 * dVar16;
      auVar12._8_8_ = 0;
      dVar5 = dVar6 * dVar6 + dVar19 * dVar19 + dVar18 * dVar18 + auVar12._0_8_;
      if (dVar5 <= 1e-07) {
        fVar15 = 1.0;
        fVar17 = 0.0;
        fVar11 = 0.0;
        fVar14 = 0.0;
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar5;
        auVar12 = sqrtpd(auVar12,auVar4);
        dVar5 = 1.0 / auVar12._0_8_;
        fVar15 = (float)(dVar5 * dVar16);
        fVar17 = (float)(dVar5 * dVar18);
        fVar11 = (float)(dVar5 * dVar19);
        fVar14 = (float)(dVar5 * dVar6);
      }
      *(float *)(lVar9 + 4 + lVar3) = fVar14;
      *(float *)(lVar9 + 8 + lVar3) = fVar11;
      *(float *)(lVar9 + 0xc + lVar3) = fVar17;
      *(float *)(lVar9 + lVar3) = fVar15;
      pfVar1 = (float *)(lVar9 + lVar3);
      pfVar2 = (float *)(lVar9 + -0x10 + lVar3);
      fVar11 = pfVar1[3] * pfVar2[3] + *pfVar1 * *pfVar2;
      fVar14 = pfVar1[2] * pfVar2[2] + pfVar1[1] * pfVar2[1];
      auVar13._0_4_ = fVar14 + fVar11;
      auVar13._4_4_ = fVar11 + fVar14;
      auVar13._8_4_ = fVar11 + pfVar1[1] * pfVar2[1] + pfVar1[2] * pfVar2[2];
      auVar13._12_4_ = fVar14 + *pfVar1 * *pfVar2 + pfVar1[3] * pfVar2[3];
      iVar8 = movmskps(uVar7,auVar13);
      if (iVar8 != 0) {
        *(uint *)(lVar9 + 4 + lVar3) = *(uint *)(lVar9 + 4 + lVar3) ^ 0x80000000;
        *(uint *)(lVar9 + 8 + lVar3) = *(uint *)(lVar9 + 8 + lVar3) ^ 0x80000000;
        *(float *)(lVar9 + 0xc + lVar3) = -fVar17;
        *(float *)(lVar9 + lVar3) = -fVar15;
      }
      uVar7 = (uint)*(ushort *)(param_4 + 2);
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar10 < (int)(uint)*(ushort *)(param_4 + 2));
  }
  return;
}





// 函数: void FUN_18049aca3(uint64_t param_1,uint64_t param_2,int param_3,longlong *param_4)
void FUN_18049aca3(uint64_t param_1,uint64_t param_2,int param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  int8_t auVar4 [16];
  double dVar5;
  double dVar6;
  uint in_EAX;
  int iVar7;
  ulonglong uVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  uint unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  uVar8 = (ulonglong)(param_3 + 0xf);
  do {
    lVar3 = *param_4;
    dVar17 = (double)*(float *)(uVar8 + 8 + lVar3);
    dVar6 = (double)*(float *)(uVar8 + 4 + lVar3);
    dVar16 = (double)*(float *)(uVar8 + 0xc + lVar3);
    dVar14 = (double)*(float *)(uVar8 + lVar3);
    auVar9._0_8_ = dVar14 * dVar14;
    auVar9._8_8_ = 0;
    dVar5 = dVar6 * dVar6 + dVar17 * dVar17 + dVar16 * dVar16 + auVar9._0_8_;
    if (dVar5 <= 1e-07) {
      fVar13 = 1.0;
      fVar11 = unaff_XMM7_Da;
      fVar15 = unaff_XMM7_Da;
      fVar12 = unaff_XMM7_Da;
    }
    else {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar9 = sqrtpd(auVar9,auVar4);
      dVar5 = 1.0 / auVar9._0_8_;
      fVar13 = (float)(dVar5 * dVar14);
      fVar11 = (float)(dVar5 * dVar6);
      fVar15 = (float)(dVar5 * dVar16);
      fVar12 = (float)(dVar5 * dVar17);
    }
    *(float *)(uVar8 + 4 + lVar3) = fVar11;
    *(float *)(uVar8 + 8 + lVar3) = fVar12;
    *(float *)(uVar8 + 0xc + lVar3) = fVar15;
    *(float *)(uVar8 + lVar3) = fVar13;
    pfVar1 = (float *)(uVar8 + lVar3);
    pfVar2 = (float *)((uVar8 - 0x10) + lVar3);
    fVar11 = pfVar1[3] * pfVar2[3] + *pfVar1 * *pfVar2;
    fVar12 = pfVar1[2] * pfVar2[2] + pfVar1[1] * pfVar2[1];
    auVar10._0_4_ = fVar12 + fVar11;
    auVar10._4_4_ = fVar11 + fVar12;
    auVar10._8_4_ = fVar11 + pfVar1[1] * pfVar2[1] + pfVar1[2] * pfVar2[2];
    auVar10._12_4_ = fVar12 + *pfVar1 * *pfVar2 + pfVar1[3] * pfVar2[3];
    iVar7 = movmskps(in_EAX,auVar10);
    if (iVar7 != 0) {
      *(uint *)(uVar8 + 4 + lVar3) = *(uint *)(uVar8 + 4 + lVar3) ^ unaff_XMM6_Da;
      *(uint *)(uVar8 + 8 + lVar3) = *(uint *)(uVar8 + 8 + lVar3) ^ unaff_XMM6_Da;
      *(uint *)(uVar8 + 0xc + lVar3) = (uint)fVar15 ^ unaff_XMM6_Da;
      *(uint *)(uVar8 + lVar3) = (uint)fVar13 ^ unaff_XMM6_Da;
    }
    in_EAX = (uint)*(ushort *)(param_4 + 2);
    param_3 = param_3 + 1;
    uVar8 = uVar8 + 0x10;
  } while (param_3 < (int)in_EAX);
  return;
}





// 函数: void FUN_18049ae27(void)
void FUN_18049ae27(void)

{
  return;
}





// 函数: void FUN_18049ae31(void)
void FUN_18049ae31(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049ae40(longlong *param_1)
void FUN_18049ae40(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint64_t *puVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uStackX_8;
  uint64_t *puStackX_10;
  int8_t auStack_58 [32];
  
  uStackX_8 = param_1[7];
  lVar6 = 0;
  if (uStackX_8 == 0) {
    param_1[7] = 0;
    puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,4);
    *puVar3 = param_1;
    *(int32_t *)(puVar3 + 1) = 0xffffffff;
    *(int32_t *)((longlong)puVar3 + 0xc) = 0;
    *(int8_t *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    *(int8_t *)(puVar3 + 4) = 0;
    lVar8 = param_1[1];
    lVar7 = *param_1;
    uVar5 = (lVar8 - lVar7) / 0x4a;
    iVar9 = 0x7fffffff;
    puStackX_10 = puVar3;
    if ('\0' < (char)uVar5) {
      uVar5 = uVar5 & 0xff;
      do {
        lVar7 = *param_1;
        plVar1 = (longlong *)(lVar6 + lVar7);
        if ((short)plVar1[2] != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          FUN_18040f060(plVar1,*plVar1,&uStackX_8,auStack_58,
                        *(int8_t *)((longlong)plVar1 + 0x12));
          bVar4 = (byte)uStackX_8 & 0xf;
          iVar2 = (int)uStackX_8;
          if ((int)uStackX_8 < 0) {
            iVar2 = (int)uStackX_8 + 0xf;
            bVar4 = bVar4 - 0x10;
          }
          iVar2 = (int)(float)(ushort)((ushort)(*(uint *)(*plVar1 + (longlong)(iVar2 >> 4) * 2) >>
                                               (bVar4 & 0x1f)) &
                                      (1 << (*(byte *)((longlong)plVar1 + 0x13) & 0x1f)) - 1U);
          if (iVar9 < iVar2) {
            iVar2 = iVar9;
          }
          iVar9 = iVar2;
          lVar7 = *param_1;
        }
        lVar6 = lVar6 + 0x4a;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      lVar8 = param_1[1];
    }
    FUN_180483970(puVar3 + 1,param_1,iVar9,(char)((lVar8 - lVar7) / 0x4a),
                  (*(int *)((longlong)param_1 + 0x4c) - iVar9) + 1);
    param_1[7] = (longlong)puVar3;
    return;
  }
  if (*(longlong *)(uStackX_8 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(uStackX_8 + 0x18) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(uStackX_8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"

// 03_rendering_part261.c - 7 个函数

// 函数: void FUN_1804120af(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_1804120af(uint64_t param_1,uint64_t param_2,int param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar12;
  int *unaff_R12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  lVar11 = (int64_t)param_3;
  lVar5 = malloc(lVar11 * 0x28);
  piVar6 = (int *)malloc(lVar11 << 4);
  piVar7 = (int *)malloc(lVar11 * 4);
  if (lVar5 != 0) {
    if ((piVar6 != (int *)0x0) && (piVar7 != (int *)0x0)) {
      *unaff_RBP = unaff_RDI;
      if (0 < (int)unaff_RDI) {
        lVar11 = 0;
        unaff_RBP[-0x10] = 0;
        do {
          unaff_RBP[-0xf] = 0;
          if (0 < *unaff_R12) {
            unaff_RBP[-4] = lVar5;
            unaff_RBP[-3] = 0;
            lVar13 = (int64_t)**(int **)(unaff_R12 + 2) * 0x58 + unaff_RSI;
            (**(code **)(*(int64_t *)unaff_RBP[-6] + 0x18))
                      ((int64_t *)unaff_RBP[-6],unaff_RBP + 0x1f);
            fVar19 = *(float *)(unaff_RBP + 0x1f);
            fVar23 = *(float *)(unaff_RBP + 0x20);
            lVar11 = *(int64_t *)(lVar13 + 0x28);
            fVar21 = *(float *)((int64_t)unaff_RBP + 0xfc);
            uVar2 = *(int32_t *)(lVar13 + 0x30);
            *(int32_t *)(unaff_RBP + 3) = uVar2;
            *(int32_t *)(unaff_RBP + 5) = uVar2;
            unaff_RBP[2] = lVar11;
            fVar14 = fVar21 * (float)((uint64_t)lVar11 >> 0x20) + fVar19 * (float)lVar11 +
                     fVar23 * *(float *)(unaff_RBP + 3);
            lVar11 = *(int64_t *)(lVar13 + 0x28);
            unaff_RBP[4] = lVar11;
            fStack0000000000000054 = (float)lVar11 - fVar19 * fVar14;
            fStack0000000000000050 = (float)((uint64_t)lVar11 >> 0x20) - fVar21 * fVar14;
            lVar11 = *(int64_t *)(lVar13 + 0x34);
            fVar17 = *(float *)(unaff_RBP + 5) - fVar23 * fVar14;
            unaff_RBP[6] = lVar11;
            unaff_RBP[-0xe] = CONCAT44(fStack0000000000000050,fStack0000000000000054);
            *(float *)(unaff_RBP + 0x13) = fVar17;
            *(int *)(unaff_RBP + -0xd) = (int)unaff_RBP[0x13];
            uVar2 = *(int32_t *)(lVar13 + 0x3c);
            *(int32_t *)(unaff_RBP + 7) = uVar2;
            *(int32_t *)(unaff_RBP + 9) = uVar2;
            fVar14 = fVar21 * (float)((uint64_t)lVar11 >> 0x20) + fVar19 * (float)lVar11 +
                     fVar23 * *(float *)(unaff_RBP + 7);
            lVar11 = *(int64_t *)(lVar13 + 0x34);
            unaff_RBP[8] = lVar11;
            fStack000000000000005c = (float)lVar11 - fVar19 * fVar14;
            fVar19 = *(float *)(unaff_RBP + 9) - fVar23 * fVar14;
            fStack0000000000000058 = (float)((uint64_t)lVar11 >> 0x20) - fVar21 * fVar14;
            *(float *)(unaff_RBP + 0x15) = fVar19;
            unaff_RBP[-0xc] = CONCAT44(fStack0000000000000058,fStack000000000000005c);
            *(int *)(unaff_RBP + -0xb) = (int)unaff_RBP[0x15];
            if (((1.1754944e-38 < ABS(fStack0000000000000054)) ||
                (1.1754944e-38 < ABS(fStack0000000000000050))) || (1.1754944e-38 < ABS(fVar17))) {
              fVar23 = 1.0 / SQRT(fStack0000000000000054 * fStack0000000000000054 +
                                  fStack0000000000000050 * fStack0000000000000050 + fVar17 * fVar17)
              ;
              fStack0000000000000054 = fVar23 * fStack0000000000000054;
              fStack0000000000000050 = fVar23 * fStack0000000000000050;
              fVar23 = fVar23 * fVar17;
            }
            else {
              fStack0000000000000050 = *(float *)((int64_t)unaff_RBP + -0x6c);
              fVar23 = *(float *)(unaff_RBP + -0xd);
              fStack0000000000000054 = *(float *)(unaff_RBP + -0xe);
            }
            if (((1.1754944e-38 < ABS(fStack000000000000005c)) ||
                (1.1754944e-38 < ABS(fStack0000000000000058))) || (1.1754944e-38 < ABS(fVar19))) {
              fVar14 = 1.0 / SQRT(fStack000000000000005c * fStack000000000000005c +
                                  fStack0000000000000058 * fStack0000000000000058 + fVar19 * fVar19)
              ;
              fStack000000000000005c = fVar14 * fStack000000000000005c;
              fStack0000000000000058 = fVar14 * fStack0000000000000058;
              fVar14 = fVar14 * fVar19;
            }
            else {
              fStack0000000000000058 = *(float *)((int64_t)unaff_RBP + -0x5c);
              fVar14 = *(float *)(unaff_RBP + -0xb);
              fStack000000000000005c = *(float *)(unaff_RBP + -0xc);
            }
            iVar3 = *(int *)(lVar13 + 0x48);
            iVar10 = 0;
            iVar8 = 0;
            if (0 < *unaff_R12) {
              lVar11 = 0;
              piVar9 = piVar7;
              do {
                fVar19 = *(float *)(unaff_RBP + 0x1f);
                fVar17 = *(float *)(unaff_RBP + 0x20);
                iVar4 = *(int *)(lVar11 + *(int64_t *)(unaff_R12 + 2));
                lVar12 = (int64_t)iVar4 * 0x58;
                lVar1 = *(int64_t *)(lVar12 + 0x28 + unaff_RSI);
                uVar2 = *(int32_t *)(lVar12 + 0x30 + unaff_RSI);
                *(int32_t *)(unaff_RBP + 0xb) = uVar2;
                *(int32_t *)(unaff_RBP + 0xd) = uVar2;
                unaff_RBP[10] = lVar1;
                fVar15 = fVar21 * (float)((uint64_t)lVar1 >> 0x20) + fVar19 * (float)lVar1 +
                         fVar17 * *(float *)(unaff_RBP + 0xb);
                lVar1 = *(int64_t *)(lVar12 + 0x28 + unaff_RSI);
                unaff_RBP[0xc] = lVar1;
                fVar22 = (float)lVar1 - fVar19 * fVar15;
                fVar18 = (float)((uint64_t)lVar1 >> 0x20) - fVar21 * fVar15;
                lVar1 = *(int64_t *)(lVar12 + 0x34 + unaff_RSI);
                fVar20 = *(float *)(unaff_RBP + 0xd) - fVar17 * fVar15;
                unaff_RBP[0xe] = lVar1;
                unaff_RBP[-10] = CONCAT44(fVar18,fVar22);
                *(float *)(unaff_RBP + 0x17) = fVar20;
                *(int *)(unaff_RBP + -9) = (int)unaff_RBP[0x17];
                uVar2 = *(int32_t *)(lVar12 + 0x3c + unaff_RSI);
                *(int32_t *)(unaff_RBP + 0xf) = uVar2;
                *(int32_t *)(unaff_RBP + 0x11) = uVar2;
                fVar16 = fVar21 * (float)((uint64_t)lVar1 >> 0x20) + fVar19 * (float)lVar1 +
                         fVar17 * *(float *)(unaff_RBP + 0xf);
                lVar1 = *(int64_t *)(lVar12 + 0x34 + unaff_RSI);
                unaff_RBP[0x10] = lVar1;
                fVar15 = (float)lVar1 - fVar19 * fVar16;
                fVar19 = (float)((uint64_t)lVar1 >> 0x20) - fVar21 * fVar16;
                fVar21 = *(float *)(unaff_RBP + 0x11) - fVar17 * fVar16;
                unaff_RBP[-8] = CONCAT44(fVar19,fVar15);
                *(float *)(unaff_RBP + 0x19) = fVar21;
                *(int *)(unaff_RBP + -7) = (int)unaff_RBP[0x19];
                if (((1.1754944e-38 < ABS(fVar22)) || (1.1754944e-38 < ABS(fVar18))) ||
                   (1.1754944e-38 < ABS(fVar20))) {
                  fVar17 = 1.0 / SQRT(fVar22 * fVar22 + fVar18 * fVar18 + fVar20 * fVar20);
                  fVar22 = fVar17 * fVar22;
                  fVar18 = fVar17 * fVar18;
                  fVar17 = fVar17 * fVar20;
                }
                else {
                  fVar17 = *(float *)(unaff_RBP + -9);
                  fVar18 = *(float *)((int64_t)unaff_RBP + -0x4c);
                  fVar22 = *(float *)(unaff_RBP + -10);
                }
                if (((1.1754944e-38 < ABS(fVar15)) || (1.1754944e-38 < ABS(fVar19))) ||
                   (1.1754944e-38 < ABS(fVar21))) {
                  fVar16 = 1.0 / SQRT(fVar15 * fVar15 + fVar19 * fVar19 + fVar21 * fVar21);
                  fVar15 = fVar16 * fVar15;
                  fVar19 = fVar16 * fVar19;
                  fVar16 = fVar16 * fVar21;
                }
                else {
                  fVar16 = *(float *)(unaff_RBP + -7);
                  fVar19 = *(float *)((int64_t)unaff_RBP + -0x3c);
                  fVar15 = *(float *)(unaff_RBP + -8);
                }
                if (((((*(uint *)(lVar12 + 0x4c + unaff_RSI) | *(uint *)(lVar13 + 0x4c)) & 4) != 0)
                    || (iVar3 == *(int *)(lVar12 + 0x48 + unaff_RSI))) ||
                   ((*(float *)(unaff_RBP + 0x43) <
                     fVar18 * fStack0000000000000050 + fVar22 * fStack0000000000000054 +
                     fVar17 * fVar23 &&
                    (*(float *)(unaff_RBP + 0x43) <
                     fVar19 * fStack0000000000000058 + fVar15 * fStack000000000000005c +
                     fVar16 * fVar14)))) {
                  iVar10 = iVar10 + 1;
                  *piVar9 = iVar4;
                  piVar9 = piVar9 + 1;
                }
                fVar21 = *(float *)((int64_t)unaff_RBP + 0xfc);
                iVar8 = iVar8 + 1;
                lVar11 = lVar11 + 4;
              } while (iVar8 < *unaff_R12);
              if (1 < iVar10) {
                FUN_1804134f0(piVar7,0);
              }
            }
            lVar11 = malloc((int64_t)iVar10 << 2);
            if (lVar11 != 0) {
              *piVar6 = iVar10;
              *(int64_t *)(piVar6 + 2) = lVar11;
                    // WARNING: Subroutine does not return
              memcpy(lVar11,piVar7,(int64_t)iVar10 << 2);
            }
            lVar11 = unaff_RBP[-0xf];
            if (0 < lVar11) {
              piVar9 = piVar6 + 2;
              do {
                free(*(uint64_t *)piVar9);
                piVar9 = piVar9 + 4;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            free(piVar6);
            free(piVar7);
            free(lVar5);
            goto FUN_180412b34;
          }
          lVar11 = lVar11 + 1;
          unaff_R12 = unaff_R12 + 6;
          unaff_RBP[-0x10] = lVar11;
        } while (lVar11 < *unaff_RBP);
      }
      free(piVar6);
      free(piVar7);
      free(lVar5);
      goto FUN_180412b34;
    }
    free();
  }
  if (piVar6 != (int *)0x0) {
    free(piVar6);
  }
  if (piVar7 != (int *)0x0) {
    free(piVar7);
  }
FUN_180412b34:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x21] ^ (uint64_t)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x000180412842)
// WARNING: Removing unreachable block (ram,0x00018041284b)
// WARNING: Removing unreachable block (ram,0x00018041286d)
// WARNING: Removing unreachable block (ram,0x000180412871)
// WARNING: Removing unreachable block (ram,0x000180412876)
// WARNING: Removing unreachable block (ram,0x000180412889)
// WARNING: Removing unreachable block (ram,0x00018041288d)
// WARNING: Removing unreachable block (ram,0x000180412898)
// WARNING: Removing unreachable block (ram,0x00018041289c)
// WARNING: Removing unreachable block (ram,0x000180412868)
// WARNING: Removing unreachable block (ram,0x0001804128a4)
// WARNING: Removing unreachable block (ram,0x0001804128ab)
// WARNING: Removing unreachable block (ram,0x0001804128af)
// WARNING: Removing unreachable block (ram,0x0001804128b5)
// WARNING: Removing unreachable block (ram,0x0001804128b8)
// WARNING: Removing unreachable block (ram,0x0001804128bf)
// WARNING: Removing unreachable block (ram,0x000180412972)
// WARNING: Removing unreachable block (ram,0x0001804129d1)
// WARNING: Removing unreachable block (ram,0x00018041299b)
// WARNING: Removing unreachable block (ram,0x0001804129f5)
// WARNING: Removing unreachable block (ram,0x000180412a2c)
// WARNING: Removing unreachable block (ram,0x000180412a41)
// WARNING: Removing unreachable block (ram,0x000180412a45)
// WARNING: Removing unreachable block (ram,0x000180412a58)



// 函数: void FUN_180412123(int64_t param_1)
void FUN_180412123(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar8;
  int64_t lVar9;
  int *unaff_R12;
  int *unaff_R13;
  int64_t lVar10;
  int *unaff_R14;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t uStack0000000000000044;
  int64_t in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int64_t in_stack_00000070;
  
  uStack0000000000000044 = 0;
  *unaff_RBP = unaff_RDI;
  if (0 < (int)unaff_RDI) {
    lVar8 = 0;
    unaff_RBP[-0x10] = 0;
    do {
      unaff_RBP[-0xf] = 0;
      if (0 < *unaff_R12) {
        unaff_RBP[-4] = param_1;
        unaff_RBP[-3] = 0;
        lVar10 = (int64_t)**(int **)(unaff_R12 + 2) * 0x58 + unaff_RSI;
        (**(code **)(*(int64_t *)unaff_RBP[-6] + 0x18))((int64_t *)unaff_RBP[-6],unaff_RBP + 0x1f)
        ;
        fVar16 = *(float *)(unaff_RBP + 0x1f);
        fVar20 = *(float *)(unaff_RBP + 0x20);
        lVar8 = *(int64_t *)(lVar10 + 0x28);
        fVar18 = *(float *)((int64_t)unaff_RBP + 0xfc);
        uVar2 = *(int32_t *)(lVar10 + 0x30);
        *(int32_t *)(unaff_RBP + 3) = uVar2;
        *(int32_t *)(unaff_RBP + 5) = uVar2;
        unaff_RBP[2] = lVar8;
        fVar11 = fVar18 * (float)((uint64_t)lVar8 >> 0x20) + fVar16 * (float)lVar8 +
                 fVar20 * *(float *)(unaff_RBP + 3);
        lVar8 = *(int64_t *)(lVar10 + 0x28);
        unaff_RBP[4] = lVar8;
        fStack0000000000000054 = (float)lVar8 - fVar16 * fVar11;
        fStack0000000000000050 = (float)((uint64_t)lVar8 >> 0x20) - fVar18 * fVar11;
        lVar8 = *(int64_t *)(lVar10 + 0x34);
        fVar14 = *(float *)(unaff_RBP + 5) - fVar20 * fVar11;
        unaff_RBP[6] = lVar8;
        unaff_RBP[-0xe] = CONCAT44(fStack0000000000000050,fStack0000000000000054);
        *(float *)(unaff_RBP + 0x13) = fVar14;
        *(int *)(unaff_RBP + -0xd) = (int)unaff_RBP[0x13];
        uVar2 = *(int32_t *)(lVar10 + 0x3c);
        *(int32_t *)(unaff_RBP + 7) = uVar2;
        *(int32_t *)(unaff_RBP + 9) = uVar2;
        fVar11 = fVar18 * (float)((uint64_t)lVar8 >> 0x20) + fVar16 * (float)lVar8 +
                 fVar20 * *(float *)(unaff_RBP + 7);
        lVar8 = *(int64_t *)(lVar10 + 0x34);
        unaff_RBP[8] = lVar8;
        fStack000000000000005c = (float)lVar8 - fVar16 * fVar11;
        fVar16 = *(float *)(unaff_RBP + 9) - fVar20 * fVar11;
        fStack0000000000000058 = (float)((uint64_t)lVar8 >> 0x20) - fVar18 * fVar11;
        *(float *)(unaff_RBP + 0x15) = fVar16;
        unaff_RBP[-0xc] = CONCAT44(fStack0000000000000058,fStack000000000000005c);
        *(int *)(unaff_RBP + -0xb) = (int)unaff_RBP[0x15];
        if (((1.1754944e-38 < ABS(fStack0000000000000054)) ||
            (1.1754944e-38 < ABS(fStack0000000000000050))) || (1.1754944e-38 < ABS(fVar14))) {
          fVar20 = 1.0 / SQRT(fStack0000000000000054 * fStack0000000000000054 +
                              fStack0000000000000050 * fStack0000000000000050 + fVar14 * fVar14);
          fStack0000000000000054 = fVar20 * fStack0000000000000054;
          fStack0000000000000050 = fVar20 * fStack0000000000000050;
          fVar20 = fVar20 * fVar14;
        }
        else {
          fStack0000000000000050 = *(float *)((int64_t)unaff_RBP + -0x6c);
          fVar20 = *(float *)(unaff_RBP + -0xd);
          fStack0000000000000054 = *(float *)(unaff_RBP + -0xe);
        }
        if (((1.1754944e-38 < ABS(fStack000000000000005c)) ||
            (1.1754944e-38 < ABS(fStack0000000000000058))) || (1.1754944e-38 < ABS(fVar16))) {
          fVar11 = 1.0 / SQRT(fStack000000000000005c * fStack000000000000005c +
                              fStack0000000000000058 * fStack0000000000000058 + fVar16 * fVar16);
          fStack000000000000005c = fVar11 * fStack000000000000005c;
          fStack0000000000000058 = fVar11 * fStack0000000000000058;
          fVar11 = fVar11 * fVar16;
        }
        else {
          fStack0000000000000058 = *(float *)((int64_t)unaff_RBP + -0x5c);
          fVar11 = *(float *)(unaff_RBP + -0xb);
          fStack000000000000005c = *(float *)(unaff_RBP + -0xc);
        }
        iVar3 = *(int *)(lVar10 + 0x48);
        iVar6 = 0;
        iVar5 = 0;
        if (0 < *unaff_R12) {
          lVar8 = 0;
          do {
            fVar16 = *(float *)(unaff_RBP + 0x1f);
            fVar14 = *(float *)(unaff_RBP + 0x20);
            iVar4 = *(int *)(lVar8 + *(int64_t *)(unaff_R12 + 2));
            lVar9 = (int64_t)iVar4 * 0x58;
            lVar1 = *(int64_t *)(lVar9 + 0x28 + unaff_RSI);
            uVar2 = *(int32_t *)(lVar9 + 0x30 + unaff_RSI);
            *(int32_t *)(unaff_RBP + 0xb) = uVar2;
            *(int32_t *)(unaff_RBP + 0xd) = uVar2;
            unaff_RBP[10] = lVar1;
            fVar12 = fVar18 * (float)((uint64_t)lVar1 >> 0x20) + fVar16 * (float)lVar1 +
                     fVar14 * *(float *)(unaff_RBP + 0xb);
            lVar1 = *(int64_t *)(lVar9 + 0x28 + unaff_RSI);
            unaff_RBP[0xc] = lVar1;
            fVar19 = (float)lVar1 - fVar16 * fVar12;
            fVar15 = (float)((uint64_t)lVar1 >> 0x20) - fVar18 * fVar12;
            lVar1 = *(int64_t *)(lVar9 + 0x34 + unaff_RSI);
            fVar17 = *(float *)(unaff_RBP + 0xd) - fVar14 * fVar12;
            unaff_RBP[0xe] = lVar1;
            unaff_RBP[-10] = CONCAT44(fVar15,fVar19);
            *(float *)(unaff_RBP + 0x17) = fVar17;
            *(int *)(unaff_RBP + -9) = (int)unaff_RBP[0x17];
            uVar2 = *(int32_t *)(lVar9 + 0x3c + unaff_RSI);
            *(int32_t *)(unaff_RBP + 0xf) = uVar2;
            *(int32_t *)(unaff_RBP + 0x11) = uVar2;
            fVar13 = fVar18 * (float)((uint64_t)lVar1 >> 0x20) + fVar16 * (float)lVar1 +
                     fVar14 * *(float *)(unaff_RBP + 0xf);
            lVar1 = *(int64_t *)(lVar9 + 0x34 + unaff_RSI);
            unaff_RBP[0x10] = lVar1;
            fVar12 = (float)lVar1 - fVar16 * fVar13;
            fVar16 = (float)((uint64_t)lVar1 >> 0x20) - fVar18 * fVar13;
            fVar18 = *(float *)(unaff_RBP + 0x11) - fVar14 * fVar13;
            unaff_RBP[-8] = CONCAT44(fVar16,fVar12);
            *(float *)(unaff_RBP + 0x19) = fVar18;
            *(int *)(unaff_RBP + -7) = (int)unaff_RBP[0x19];
            if (((1.1754944e-38 < ABS(fVar19)) || (1.1754944e-38 < ABS(fVar15))) ||
               (1.1754944e-38 < ABS(fVar17))) {
              fVar14 = 1.0 / SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17);
              fVar19 = fVar14 * fVar19;
              fVar15 = fVar14 * fVar15;
              fVar14 = fVar14 * fVar17;
            }
            else {
              fVar14 = *(float *)(unaff_RBP + -9);
              fVar15 = *(float *)((int64_t)unaff_RBP + -0x4c);
              fVar19 = *(float *)(unaff_RBP + -10);
            }
            if (((1.1754944e-38 < ABS(fVar12)) || (1.1754944e-38 < ABS(fVar16))) ||
               (1.1754944e-38 < ABS(fVar18))) {
              fVar13 = 1.0 / SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar18 * fVar18);
              fVar12 = fVar13 * fVar12;
              fVar16 = fVar13 * fVar16;
              fVar13 = fVar13 * fVar18;
            }
            else {
              fVar13 = *(float *)(unaff_RBP + -7);
              fVar16 = *(float *)((int64_t)unaff_RBP + -0x3c);
              fVar12 = *(float *)(unaff_RBP + -8);
            }
            if (((((*(uint *)(lVar9 + 0x4c + unaff_RSI) | *(uint *)(lVar10 + 0x4c)) & 4) != 0) ||
                (iVar3 == *(int *)(lVar9 + 0x48 + unaff_RSI))) ||
               ((*(float *)(unaff_RBP + 0x43) <
                 fVar15 * fStack0000000000000050 + fVar19 * fStack0000000000000054 + fVar14 * fVar20
                && (fVar16 = fVar16 * fStack0000000000000058 + fVar12 * fStack000000000000005c +
                             fVar13 * fVar11, *(float *)(unaff_RBP + 0x43) < fVar16)))) {
              iVar6 = iVar6 + 1;
              *unaff_R14 = iVar4;
              unaff_R14 = unaff_R14 + 1;
            }
            fVar18 = *(float *)((int64_t)unaff_RBP + 0xfc);
            iVar5 = iVar5 + 1;
            lVar8 = lVar8 + 4;
          } while (iVar5 < *unaff_R12);
          if (1 < iVar6) {
            FUN_1804134f0(fVar16,0);
          }
        }
        lVar8 = malloc((int64_t)iVar6 << 2);
        if (lVar8 != 0) {
          *unaff_R13 = iVar6;
          *(int64_t *)(unaff_R13 + 2) = lVar8;
                    // WARNING: Subroutine does not return
          memcpy(lVar8);
        }
        lVar8 = unaff_RBP[-0xf];
        if (0 < lVar8) {
          puVar7 = (uint64_t *)(in_stack_00000070 + 8);
          do {
            free(*puVar7);
            puVar7 = puVar7 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        free(in_stack_00000070);
        free();
        free(in_stack_00000048);
        goto LAB_180412ad4;
      }
      lVar8 = lVar8 + 1;
      unaff_R12 = unaff_R12 + 6;
      unaff_RBP[-0x10] = lVar8;
      param_1 = in_stack_00000048;
    } while (lVar8 < *unaff_RBP);
  }
  free(unaff_R13);
  free();
  free(in_stack_00000048);
LAB_180412ad4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x21] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180412b34(void)
void FUN_180412b34(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180412b4c(void)
void FUN_180412b4c(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180412b68(void)
void FUN_180412b68(void)

{
  int64_t unaff_RBP;
  uint64_t in_stack_00000048;
  
  free();
  free();
  free(in_stack_00000048);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180412b8f(void)
void FUN_180412b8f(void)

{
  int64_t unaff_RBP;
  int64_t unaff_R13;
  int64_t unaff_R14;
  
  free();
  if (unaff_R13 != 0) {
    free();
  }
  if (unaff_R14 != 0) {
    free();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180412bb8(void)
void FUN_180412bb8(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




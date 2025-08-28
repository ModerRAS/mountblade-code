#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part169.c - 2 个函数

// 函数: void FUN_180372f9c(void)
void FUN_180372f9c(void)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  uint64_t uVar22;
  float *pfVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *pfVar27;
  int iVar28;
  longlong unaff_R12;
  longlong lVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong in_stack_00000030;
  int in_stack_00000040;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  longlong in_stack_00000078;
  
  lVar29 = 0;
  do {
    pfVar27 = (float *)(*(longlong *)(unaff_RBX + 0x80) + lVar29);
    fVar33 = *(float *)(*(longlong *)(unaff_RBP + -0x80) + 0x215c);
    iVar16 = *(int *)(unaff_RBX + 0x54) + -1;
    iVar31 = (int)(*pfVar27 / fVar33);
    if (iVar31 < 0) {
      iVar31 = 0;
    }
    else if (iVar16 < iVar31) {
      iVar31 = iVar16;
    }
    iVar16 = *(int *)(unaff_RBX + 0x58);
    iVar30 = (int)(pfVar27[1] / fVar33);
    if (iVar30 < 0) {
      iVar30 = 0;
    }
    else if (iVar16 + -1 < iVar30) {
      iVar30 = iVar16 + -1;
    }
    if ((uint)(*(longlong *)(unaff_R12 + 0x10) - *(longlong *)(unaff_R12 + 8) >> 3) <=
        (uint)(int)*(char *)(pfVar27 + 8)) {
      *(int8_t *)(pfVar27 + 8) = 0;
      iVar16 = *(int *)(unaff_RBX + 0x58);
    }
    lVar19 = *(longlong *)(unaff_RBX + 0x110);
    iVar16 = iVar16 * iVar31 + iVar30;
    for (piVar20 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar16 %
                                      (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
        piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
      if (iVar16 == *piVar20) {
        lVar21 = *(longlong *)(unaff_RBX + 0x118);
        goto LAB_18037309e;
      }
    }
    lVar21 = *(longlong *)(unaff_RBX + 0x118);
    piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037309e:
    if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
      uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
      in_stack_00000070 = (int *)CONCAT44(in_stack_00000070._4_4_,iVar16);
      in_stack_00000078 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
      puVar18 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,&stack0x00000070);
      piVar20 = (int *)*puVar18;
    }
    FUN_18037d8b0(*(uint64_t *)(piVar20 + 2),pfVar27,unaff_R12);
    plVar3 = *(longlong **)
              (*(longlong *)
                (*(longlong *)(unaff_R12 + 8) +
                ((ulonglong)(uint)(int)*(char *)(pfVar27 + 8) %
                (ulonglong)(*(longlong *)(unaff_R12 + 0x10) - *(longlong *)(unaff_R12 + 8) >> 3)) *
                8) + 0x28);
    if (plVar3 != (longlong *)0x0) {
      fVar33 = *pfVar27;
      fVar34 = pfVar27[1];
      fVar35 = pfVar27[2];
      if (*(code **)(*plVar3 + 0x198) == (code *)&unknown_var_2544_ptr) {
        pfVar23 = (float *)((longlong)plVar3 + 0x214);
      }
      else {
        pfVar23 = (float *)(**(code **)(*plVar3 + 0x198))(plVar3);
      }
      fVar32 = *pfVar23;
      fVar36 = pfVar23[1];
      fVar37 = pfVar23[2];
      fVar7 = pfVar23[3];
      uVar2 = *(uint *)(unaff_RBX + 0x118);
      fVar8 = pfVar23[4];
      fVar9 = pfVar23[5];
      fVar10 = pfVar23[6];
      fVar11 = pfVar23[7];
      iVar16 = *(int *)(unaff_RBX + 0x58);
      fVar1 = pfVar27[6];
      lVar19 = *(longlong *)(unaff_RBX + 0x110);
      *(float *)(unaff_RBP + -0x68) = fVar32;
      *(float *)(unaff_RBP + -100) = fVar36;
      *(float *)(unaff_RBP + -0x60) = fVar37;
      *(float *)(unaff_RBP + -0x5c) = fVar7;
      iVar16 = iVar16 * iVar31 + iVar30;
      *(float *)(unaff_RBP + -0x58) = fVar8;
      *(float *)(unaff_RBP + -0x54) = fVar9;
      *(float *)(unaff_RBP + -0x50) = fVar10;
      *(float *)(unaff_RBP + -0x4c) = fVar11;
      fVar32 = fVar32 * fVar1 + fVar33;
      fVar33 = fVar8 * fVar1 + fVar33;
      fVar36 = *(float *)(unaff_RBP + -100) * fVar1 + fVar34;
      fVar37 = *(float *)(unaff_RBP + -0x60) * fVar1 + fVar35;
      fVar34 = *(float *)(unaff_RBP + -0x54) * fVar1 + fVar34;
      fVar35 = *(float *)(unaff_RBP + -0x50) * fVar1 + fVar35;
      for (piVar20 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar16 % (ulonglong)uVar2) * 8);
          piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
        if (iVar16 == *piVar20) {
          lVar21 = *(longlong *)(unaff_RBX + 0x118);
          goto LAB_18037321d;
        }
      }
      lVar21 = *(longlong *)(unaff_RBX + 0x118);
      piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037321d:
      if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
        uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,iVar16);
        in_stack_00000068 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
        puVar18 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000060);
        piVar20 = (int *)*puVar18;
      }
      lVar19 = *(longlong *)(piVar20 + 2);
      if (fVar32 <= fVar33) {
        if (fVar32 < *(float *)(lVar19 + 0x18)) {
          *(float *)(lVar19 + 0x18) = fVar32;
        }
        if (fVar36 < *(float *)(lVar19 + 0x1c)) {
          *(float *)(lVar19 + 0x1c) = fVar36;
        }
        if (fVar37 < *(float *)(lVar19 + 0x20)) {
          *(float *)(lVar19 + 0x20) = fVar37;
        }
        if (*(float *)(lVar19 + 0x28) <= fVar33 && fVar33 != *(float *)(lVar19 + 0x28)) {
          *(float *)(lVar19 + 0x28) = fVar33;
        }
        if (*(float *)(lVar19 + 0x2c) <= fVar34 && fVar34 != *(float *)(lVar19 + 0x2c)) {
          *(float *)(lVar19 + 0x2c) = fVar34;
        }
        if (*(float *)(lVar19 + 0x30) <= fVar35 && fVar35 != *(float *)(lVar19 + 0x30)) {
          *(float *)(lVar19 + 0x30) = fVar35;
        }
      }
      fVar33 = pfVar27[6];
      if (*(code **)(*plVar3 + 0x198) == (code *)&unknown_var_2544_ptr) {
        lVar19 = (longlong)plVar3 + 0x214;
      }
      else {
        lVar19 = (**(code **)(*plVar3 + 0x198))(plVar3);
      }
      fVar33 = fVar33 * *(float *)(lVar19 + 0x30);
      lVar19 = FUN_180372570();
      if ((float)*(int *)(lVar19 + 0x110) < fVar33) {
        lVar19 = *(longlong *)(unaff_RBX + 0x110);
        iVar16 = *(int *)(unaff_RBX + 0x58) * iVar31 + iVar30;
        for (piVar20 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar16 %
                                          (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
            piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar16 == *piVar20) {
            lVar21 = *(longlong *)(unaff_RBX + 0x118);
            goto LAB_18037336c;
          }
        }
        lVar21 = *(longlong *)(unaff_RBX + 0x118);
        piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037336c:
        if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
          uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
          in_stack_00000050 = iVar16;
          in_stack_00000058 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
          piVar20 = (int *)*puVar18;
        }
        *(int *)(*(longlong *)(piVar20 + 2) + 0x110) = (int)fVar33;
      }
      lVar21 = FUN_180372570();
      lVar19 = *(longlong *)(unaff_RBX + 0x110);
      lVar21 = *(longlong *)(lVar21 + 0x108);
      iVar30 = *(int *)(unaff_RBX + 0x58) * iVar31 + iVar30;
      for (piVar20 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar30 %
                                        (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
          piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
        if (iVar30 == *piVar20) goto LAB_180373428;
      }
      piVar20 = *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373428:
      if (piVar20 == *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000040 = iVar30;
        in_stack_00000048 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
        puVar18 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + 0x78,&stack0x00000040);
        piVar20 = (int *)*puVar18;
      }
      unaff_R12 = *(longlong *)(unaff_RBP + -0x78);
      *(longlong *)(*(longlong *)(piVar20 + 2) + 0x108) = lVar21 + 1;
    }
    lVar29 = lVar29 + 0x28;
    in_stack_00000030 = in_stack_00000030 + -1;
  } while (in_stack_00000030 != 0);
  iVar16 = *(int *)(unaff_RBX + 0x54);
  iVar31 = *(int *)(unaff_RBX + 0x58);
  iVar30 = 0;
  if (0 < iVar16 * iVar31) {
    do {
      uVar5 = (longlong)iVar30 / (longlong)iVar16;
      uVar6 = (longlong)iVar30 % (longlong)iVar16;
      lVar29 = *(longlong *)(unaff_RBX + 0x110);
      iVar24 = (int)uVar6;
      iVar16 = (int)uVar5;
      iVar28 = iVar31 * iVar24 + iVar16;
      uVar25 = (ulonglong)(longlong)iVar28 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
      piVar20 = *(int **)(lVar29 + uVar25 * 8);
      for (piVar4 = piVar20; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
        if (iVar28 == *piVar4) {
          if (piVar4 != (int *)0x0) {
            lVar19 = *(longlong *)(unaff_RBX + 0x118);
            in_stack_00000070 = piVar4;
            puVar18 = &stack0x00000070;
            in_stack_00000078 = lVar29 + uVar25 * 8;
            goto LAB_180373580;
          }
          break;
        }
      }
      lVar19 = *(longlong *)(unaff_RBX + 0x118);
      in_stack_00000060 = *(uint64_t *)(lVar29 + lVar19 * 8);
      puVar18 = &stack0x00000060;
      in_stack_00000068 = lVar29 + lVar19 * 8;
LAB_180373580:
      piVar4 = *(int **)(lVar29 + lVar19 * 8);
      if ((int *)*puVar18 != piVar4) {
        iVar31 = iVar24 * iVar31 + iVar16;
        for (; (piVar26 = piVar4, piVar20 != (int *)0x0 && (piVar26 = piVar20, iVar31 != *piVar20));
            piVar20 = *(int **)(piVar20 + 4)) {
        }
        if (piVar26 == piVar4) {
          uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,CONCAT71((int7)((ulonglong)lVar29 >> 8),3));
          in_stack_00000050 = iVar31;
          in_stack_00000058 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
          piVar26 = (int *)*puVar18;
        }
        lVar29 = *(longlong *)(piVar26 + 2);
        fVar33 = *(float *)(lVar29 + 0x28);
        if (fVar33 < *(float *)(lVar29 + 0x18)) {
          *(int32_t *)(lVar29 + 0x48) = 0;
          *(uint64_t *)(lVar29 + 0x18) = 0;
          *(uint64_t *)(lVar29 + 0x20) = 0;
          *(uint64_t *)(lVar29 + 0x28) = 0;
          *(uint64_t *)(lVar29 + 0x30) = 0;
          *(uint64_t *)(lVar29 + 0x38) = 0;
          *(uint64_t *)(lVar29 + 0x40) = 0;
        }
        else {
          fVar34 = (fVar33 + *(float *)(lVar29 + 0x18)) * 0.5;
          *(float *)(lVar29 + 0x38) = fVar34;
          *(float *)(lVar29 + 0x3c) = (*(float *)(lVar29 + 0x2c) + *(float *)(lVar29 + 0x1c)) * 0.5;
          *(float *)(lVar29 + 0x40) = (*(float *)(lVar29 + 0x30) + *(float *)(lVar29 + 0x20)) * 0.5;
          *(int32_t *)(lVar29 + 0x44) = 0x7f7fffff;
          fVar33 = fVar33 - fVar34;
          fVar34 = *(float *)(lVar29 + 0x30) - *(float *)(lVar29 + 0x40);
          fVar35 = *(float *)(lVar29 + 0x2c) - *(float *)(lVar29 + 0x3c);
          *(float *)(lVar29 + 0x48) = SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34);
        }
        iVar31 = *(int *)(unaff_RBX + 0x58);
        uVar2 = *(uint *)(unaff_RBX + 0x118);
        lVar29 = *(longlong *)(unaff_RBX + 0x110);
        *(int32_t *)(unaff_RBP + 0x90) = 0;
        *(int32_t *)(unaff_RBP + 0x94) = 0;
        *(int32_t *)(unaff_RBP + 0x98) = 0;
        *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xa0) = 0;
        *(int32_t *)(unaff_RBP + 0xa4) = 0;
        *(int32_t *)(unaff_RBP + 0xa8) = 0;
        *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xb0) = 0;
        *(int32_t *)(unaff_RBP + 0xb4) = 0;
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
        iVar31 = iVar31 * iVar24 + iVar16;
        *(uint64_t *)(unaff_RBP + 0x140) = 0;
        *(uint64_t *)(unaff_RBP + 0xc0) = 0;
        *(uint64_t *)(unaff_RBP + 200) = 0;
        *(uint64_t *)(unaff_RBP + 0xd0) = 0;
        *(uint64_t *)(unaff_RBP + 0xd8) = 0;
        *(uint64_t *)(unaff_RBP + 0xe0) = 0;
        *(uint64_t *)(unaff_RBP + 0xe8) = 0;
        *(uint64_t *)(unaff_RBP + 0xf0) = 0;
        *(uint64_t *)(unaff_RBP + 0xf8) = 0;
        piVar20 = *(int **)(lVar29 + ((ulonglong)(longlong)iVar31 % (ulonglong)uVar2) * 8);
        *(uint64_t *)(unaff_RBP + 0x100) = 0;
        *(uint64_t *)(unaff_RBP + 0x108) = 0;
        *(uint64_t *)(unaff_RBP + 0x110) = 0;
        *(uint64_t *)(unaff_RBP + 0x118) = 0;
        *(uint64_t *)(unaff_RBP + 0x120) = 0;
        *(uint64_t *)(unaff_RBP + 0x128) = 0;
        *(uint64_t *)(unaff_RBP + 0x130) = 0;
        *(uint64_t *)(unaff_RBP + 0x138) = 0;
        for (; piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar31 == *piVar20) goto LAB_180373799;
        }
        piVar20 = *(int **)(lVar29 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
        if (piVar20 == *(int **)(lVar29 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
          uVar17 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
          in_stack_00000040 = iVar31;
          in_stack_00000048 = FUN_180372430(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)
                    FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000040);
          piVar20 = (int *)*puVar18;
        }
        uVar17 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar20 + 2) + 0x18,&system_data_0300);
        lVar19 = FUN_180372570(uVar17,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
        uVar2 = *(uint *)(unaff_RBX + 0x118);
        lVar29 = *(longlong *)(unaff_RBX + 0x110);
        iVar16 = *(int *)(unaff_RBX + 0x58) * iVar24 + iVar16;
        *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar19 + 0x110);
        for (piVar20 = *(int **)(lVar29 + ((ulonglong)(longlong)iVar16 % (ulonglong)uVar2) * 8);
            piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar16 == *piVar20) goto LAB_180373878;
        }
        piVar20 = *(int **)(lVar29 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
        if (piVar20 == *(int **)(lVar29 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
          uVar22 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
          uVar17 = *(uint64_t *)(unaff_RBX + 0x68);
          *(int *)(unaff_RBP + -0x78) = iVar16;
          uVar17 = FUN_180372430(uVar22,uVar17);
          *(uint64_t *)(unaff_RBP + -0x70) = uVar17;
          puVar18 = (uint64_t *)
                    FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78);
          piVar20 = (int *)*puVar18;
        }
        lVar29 = *(longlong *)(piVar20 + 2);
        uVar17 = *(uint64_t *)(unaff_RBP + 0x98);
        uVar22 = *(uint64_t *)(unaff_RBP + 0xa0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xa8);
        *(uint64_t *)(lVar29 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
        *(uint64_t *)(lVar29 + 0x54) = uVar17;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xb0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xb8);
        *(uint64_t *)(lVar29 + 0x5c) = uVar22;
        *(uint64_t *)(lVar29 + 100) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0xc0);
        uVar12 = *(uint64_t *)(unaff_RBP + 200);
        *(uint64_t *)(lVar29 + 0x6c) = uVar17;
        *(uint64_t *)(lVar29 + 0x74) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xd0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xd8);
        *(uint64_t *)(lVar29 + 0x7c) = uVar22;
        *(uint64_t *)(lVar29 + 0x84) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0xe0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xe8);
        *(uint64_t *)(lVar29 + 0x8c) = uVar17;
        *(uint64_t *)(lVar29 + 0x94) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xf0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xf8);
        *(uint64_t *)(lVar29 + 0x9c) = uVar22;
        *(uint64_t *)(lVar29 + 0xa4) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0x100);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x108);
        *(uint64_t *)(lVar29 + 0xac) = uVar17;
        *(uint64_t *)(lVar29 + 0xb4) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0x110);
        uVar13 = *(uint64_t *)(unaff_RBP + 0x118);
        *(uint64_t *)(lVar29 + 0xbc) = uVar22;
        *(uint64_t *)(lVar29 + 0xc4) = uVar12;
        uVar14 = *(uint64_t *)(unaff_RBP + 0x120);
        uVar15 = *(uint64_t *)(unaff_RBP + 0x128);
        *(uint64_t *)(lVar29 + 0xcc) = uVar17;
        *(uint64_t *)(lVar29 + 0xd4) = uVar13;
        uVar22 = *(uint64_t *)(unaff_RBP + 0x130);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x138);
        uVar17 = *(uint64_t *)(unaff_RBP + 0x140);
        *(uint64_t *)(lVar29 + 0xdc) = uVar14;
        *(uint64_t *)(lVar29 + 0xe4) = uVar15;
        *(uint64_t *)(lVar29 + 0xec) = uVar22;
        *(uint64_t *)(lVar29 + 0xf4) = uVar12;
        *(uint64_t *)(lVar29 + 0xfc) = uVar17;
      }
      iVar31 = *(int *)(unaff_RBX + 0x58);
      iVar30 = iVar30 + 1;
      iVar16 = *(int *)(unaff_RBX + 0x54);
    } while (iVar30 < iVar16 * iVar31);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803734e2(void)
void FUN_1803734e2(void)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  longlong lVar14;
  uint64_t uVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar20;
  int iVar21;
  int iVar22;
  int in_R9D;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int in_stack_00000040;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  longlong in_stack_00000078;
  
  iVar20 = *(int *)(unaff_RBX + 0x58);
  iVar23 = 0;
  if (0 < in_R9D * iVar20) {
    do {
      uVar4 = (longlong)iVar23 / (longlong)in_R9D;
      uVar5 = (longlong)iVar23 % (longlong)in_R9D;
      lVar2 = *(longlong *)(unaff_RBX + 0x110);
      iVar17 = (int)uVar5;
      iVar21 = (int)uVar4;
      iVar22 = iVar20 * iVar17 + iVar21;
      uVar18 = (ulonglong)(longlong)iVar22 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
      piVar16 = *(int **)(lVar2 + uVar18 * 8);
      for (piVar3 = piVar16; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
        if (iVar22 == *piVar3) {
          if (piVar3 != (int *)0x0) {
            lVar14 = *(longlong *)(unaff_RBX + 0x118);
            in_stack_00000070 = piVar3;
            puVar13 = &stack0x00000070;
            in_stack_00000078 = lVar2 + uVar18 * 8;
            goto LAB_180373580;
          }
          break;
        }
      }
      lVar14 = *(longlong *)(unaff_RBX + 0x118);
      in_stack_00000060 = *(uint64_t *)(lVar2 + lVar14 * 8);
      puVar13 = &stack0x00000060;
      in_stack_00000068 = lVar2 + lVar14 * 8;
LAB_180373580:
      piVar3 = *(int **)(lVar2 + lVar14 * 8);
      if ((int *)*puVar13 != piVar3) {
        iVar20 = iVar17 * iVar20 + iVar21;
        for (; (piVar19 = piVar3, piVar16 != (int *)0x0 && (piVar19 = piVar16, iVar20 != *piVar16));
            piVar16 = *(int **)(piVar16 + 4)) {
        }
        if (piVar19 == piVar3) {
          uVar12 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,CONCAT71((int7)((ulonglong)lVar2 >> 8),3));
          in_stack_00000050 = iVar20;
          in_stack_00000058 = FUN_180372430(uVar12,*(uint64_t *)(unaff_RBX + 0x68));
          puVar13 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
          piVar19 = (int *)*puVar13;
        }
        lVar2 = *(longlong *)(piVar19 + 2);
        fVar26 = *(float *)(lVar2 + 0x28);
        if (fVar26 < *(float *)(lVar2 + 0x18)) {
          *(int32_t *)(lVar2 + 0x48) = 0;
          *(uint64_t *)(lVar2 + 0x18) = 0;
          *(uint64_t *)(lVar2 + 0x20) = 0;
          *(uint64_t *)(lVar2 + 0x28) = 0;
          *(uint64_t *)(lVar2 + 0x30) = 0;
          *(uint64_t *)(lVar2 + 0x38) = 0;
          *(uint64_t *)(lVar2 + 0x40) = 0;
        }
        else {
          fVar24 = (fVar26 + *(float *)(lVar2 + 0x18)) * 0.5;
          *(float *)(lVar2 + 0x38) = fVar24;
          *(float *)(lVar2 + 0x3c) = (*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x1c)) * 0.5;
          *(float *)(lVar2 + 0x40) = (*(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x20)) * 0.5;
          *(int32_t *)(lVar2 + 0x44) = 0x7f7fffff;
          fVar26 = fVar26 - fVar24;
          fVar24 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x40);
          fVar25 = *(float *)(lVar2 + 0x2c) - *(float *)(lVar2 + 0x3c);
          *(float *)(lVar2 + 0x48) = SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar24 * fVar24);
        }
        iVar20 = *(int *)(unaff_RBX + 0x58);
        uVar1 = *(uint *)(unaff_RBX + 0x118);
        lVar2 = *(longlong *)(unaff_RBX + 0x110);
        *(int32_t *)(unaff_RBP + 0x90) = 0;
        *(int32_t *)(unaff_RBP + 0x94) = 0;
        *(int32_t *)(unaff_RBP + 0x98) = 0;
        *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xa0) = 0;
        *(int32_t *)(unaff_RBP + 0xa4) = 0;
        *(int32_t *)(unaff_RBP + 0xa8) = 0;
        *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xb0) = 0;
        *(int32_t *)(unaff_RBP + 0xb4) = 0;
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
        iVar20 = iVar20 * iVar17 + iVar21;
        *(uint64_t *)(unaff_RBP + 0x140) = 0;
        *(uint64_t *)(unaff_RBP + 0xc0) = 0;
        *(uint64_t *)(unaff_RBP + 200) = 0;
        *(uint64_t *)(unaff_RBP + 0xd0) = 0;
        *(uint64_t *)(unaff_RBP + 0xd8) = 0;
        *(uint64_t *)(unaff_RBP + 0xe0) = 0;
        *(uint64_t *)(unaff_RBP + 0xe8) = 0;
        *(uint64_t *)(unaff_RBP + 0xf0) = 0;
        *(uint64_t *)(unaff_RBP + 0xf8) = 0;
        piVar16 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar20 % (ulonglong)uVar1) * 8);
        *(uint64_t *)(unaff_RBP + 0x100) = 0;
        *(uint64_t *)(unaff_RBP + 0x108) = 0;
        *(uint64_t *)(unaff_RBP + 0x110) = 0;
        *(uint64_t *)(unaff_RBP + 0x118) = 0;
        *(uint64_t *)(unaff_RBP + 0x120) = 0;
        *(uint64_t *)(unaff_RBP + 0x128) = 0;
        *(uint64_t *)(unaff_RBP + 0x130) = 0;
        *(uint64_t *)(unaff_RBP + 0x138) = 0;
        for (; piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
          if (iVar20 == *piVar16) goto LAB_180373799;
        }
        piVar16 = *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
        if (piVar16 == *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
          uVar12 = FUN_18062b1e0(system_memory_pool_ptr,0,8,3);
          in_stack_00000040 = iVar20;
          in_stack_00000048 = FUN_180372430(uVar12,*(uint64_t *)(unaff_RBX + 0x68));
          puVar13 = (uint64_t *)
                    FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000040);
          piVar16 = (int *)*puVar13;
        }
        uVar12 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar16 + 2) + 0x18,&system_data_0300);
        lVar14 = FUN_180372570(uVar12,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
        uVar1 = *(uint *)(unaff_RBX + 0x118);
        lVar2 = *(longlong *)(unaff_RBX + 0x110);
        iVar21 = *(int *)(unaff_RBX + 0x58) * iVar17 + iVar21;
        *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar14 + 0x110);
        for (piVar16 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar21 % (ulonglong)uVar1) * 8);
            piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
          if (iVar21 == *piVar16) goto LAB_180373878;
        }
        piVar16 = *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
        if (piVar16 == *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
          uVar15 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
          uVar12 = *(uint64_t *)(unaff_RBX + 0x68);
          *(int *)(unaff_RBP + -0x78) = iVar21;
          uVar12 = FUN_180372430(uVar15,uVar12);
          *(uint64_t *)(unaff_RBP + -0x70) = uVar12;
          puVar13 = (uint64_t *)
                    FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78);
          piVar16 = (int *)*puVar13;
        }
        lVar2 = *(longlong *)(piVar16 + 2);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x98);
        uVar15 = *(uint64_t *)(unaff_RBP + 0xa0);
        uVar10 = *(uint64_t *)(unaff_RBP + 0xa8);
        *(uint64_t *)(lVar2 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
        *(uint64_t *)(lVar2 + 0x54) = uVar12;
        uVar12 = *(uint64_t *)(unaff_RBP + 0xb0);
        uVar11 = *(uint64_t *)(unaff_RBP + 0xb8);
        *(uint64_t *)(lVar2 + 0x5c) = uVar15;
        *(uint64_t *)(lVar2 + 100) = uVar10;
        uVar15 = *(uint64_t *)(unaff_RBP + 0xc0);
        uVar10 = *(uint64_t *)(unaff_RBP + 200);
        *(uint64_t *)(lVar2 + 0x6c) = uVar12;
        *(uint64_t *)(lVar2 + 0x74) = uVar11;
        uVar12 = *(uint64_t *)(unaff_RBP + 0xd0);
        uVar11 = *(uint64_t *)(unaff_RBP + 0xd8);
        *(uint64_t *)(lVar2 + 0x7c) = uVar15;
        *(uint64_t *)(lVar2 + 0x84) = uVar10;
        uVar15 = *(uint64_t *)(unaff_RBP + 0xe0);
        uVar10 = *(uint64_t *)(unaff_RBP + 0xe8);
        *(uint64_t *)(lVar2 + 0x8c) = uVar12;
        *(uint64_t *)(lVar2 + 0x94) = uVar11;
        uVar12 = *(uint64_t *)(unaff_RBP + 0xf0);
        uVar11 = *(uint64_t *)(unaff_RBP + 0xf8);
        *(uint64_t *)(lVar2 + 0x9c) = uVar15;
        *(uint64_t *)(lVar2 + 0xa4) = uVar10;
        uVar15 = *(uint64_t *)(unaff_RBP + 0x100);
        uVar10 = *(uint64_t *)(unaff_RBP + 0x108);
        *(uint64_t *)(lVar2 + 0xac) = uVar12;
        *(uint64_t *)(lVar2 + 0xb4) = uVar11;
        uVar12 = *(uint64_t *)(unaff_RBP + 0x110);
        uVar11 = *(uint64_t *)(unaff_RBP + 0x118);
        *(uint64_t *)(lVar2 + 0xbc) = uVar15;
        *(uint64_t *)(lVar2 + 0xc4) = uVar10;
        uVar6 = *(int32_t *)(unaff_RBP + 0x120);
        uVar7 = *(int32_t *)(unaff_RBP + 0x124);
        uVar8 = *(int32_t *)(unaff_RBP + 0x128);
        uVar9 = *(int32_t *)(unaff_RBP + 300);
        *(uint64_t *)(lVar2 + 0xcc) = uVar12;
        *(uint64_t *)(lVar2 + 0xd4) = uVar11;
        uVar15 = *(uint64_t *)(unaff_RBP + 0x130);
        uVar10 = *(uint64_t *)(unaff_RBP + 0x138);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x140);
        *(int32_t *)(lVar2 + 0xdc) = uVar6;
        *(int32_t *)(lVar2 + 0xe0) = uVar7;
        *(int32_t *)(lVar2 + 0xe4) = uVar8;
        *(int32_t *)(lVar2 + 0xe8) = uVar9;
        *(uint64_t *)(lVar2 + 0xec) = uVar15;
        *(uint64_t *)(lVar2 + 0xf4) = uVar10;
        *(uint64_t *)(lVar2 + 0xfc) = uVar12;
      }
      iVar20 = *(int *)(unaff_RBX + 0x58);
      iVar23 = iVar23 + 1;
      in_R9D = *(int *)(unaff_RBX + 0x54);
    } while (iVar23 < in_R9D * iVar20);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




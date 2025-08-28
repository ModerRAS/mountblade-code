#include "TaleWorlds.Native.Split.h"

// 03_rendering_part170.c - 2 个函数

// 函数: void FUN_180373500(void)
void FUN_180373500(void)

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
  int in_R9D;
  int in_R10D;
  int unaff_R15D;
  float fVar22;
  float fVar23;
  float fVar24;
  int in_stack_00000040;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  longlong in_stack_00000078;
  
  do {
    uVar4 = (longlong)unaff_R15D / (longlong)in_R9D;
    uVar5 = (longlong)unaff_R15D % (longlong)in_R9D;
    lVar2 = *(longlong *)(unaff_RBX + 0x110);
    iVar17 = (int)uVar5;
    iVar20 = (int)uVar4;
    iVar21 = in_R10D * iVar17 + iVar20;
    uVar18 = (ulonglong)(longlong)iVar21 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
    piVar16 = *(int **)(lVar2 + uVar18 * 8);
    for (piVar3 = piVar16; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
      if (iVar21 == *piVar3) {
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
      iVar21 = iVar17 * in_R10D + iVar20;
      for (; (piVar19 = piVar3, piVar16 != (int *)0x0 && (piVar19 = piVar16, iVar21 != *piVar16));
          piVar16 = *(int **)(piVar16 + 4)) {
      }
      if (piVar19 == piVar3) {
        uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar2 >> 8),3));
        in_stack_00000050 = iVar21;
        in_stack_00000058 = FUN_180372430(uVar12,*(uint64_t *)(unaff_RBX + 0x68));
        puVar13 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
        piVar19 = (int *)*puVar13;
      }
      lVar2 = *(longlong *)(piVar19 + 2);
      fVar24 = *(float *)(lVar2 + 0x28);
      if (fVar24 < *(float *)(lVar2 + 0x18)) {
        *(int32_t *)(lVar2 + 0x48) = 0;
        *(uint64_t *)(lVar2 + 0x18) = 0;
        *(uint64_t *)(lVar2 + 0x20) = 0;
        *(uint64_t *)(lVar2 + 0x28) = 0;
        *(uint64_t *)(lVar2 + 0x30) = 0;
        *(uint64_t *)(lVar2 + 0x38) = 0;
        *(uint64_t *)(lVar2 + 0x40) = 0;
      }
      else {
        fVar22 = (fVar24 + *(float *)(lVar2 + 0x18)) * 0.5;
        *(float *)(lVar2 + 0x38) = fVar22;
        *(float *)(lVar2 + 0x3c) = (*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x1c)) * 0.5;
        *(float *)(lVar2 + 0x40) = (*(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x20)) * 0.5;
        *(int32_t *)(lVar2 + 0x44) = 0x7f7fffff;
        fVar24 = fVar24 - fVar22;
        fVar22 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x40);
        fVar23 = *(float *)(lVar2 + 0x2c) - *(float *)(lVar2 + 0x3c);
        *(float *)(lVar2 + 0x48) = SQRT(fVar23 * fVar23 + fVar24 * fVar24 + fVar22 * fVar22);
      }
      iVar21 = *(int *)(unaff_RBX + 0x58);
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
      iVar21 = iVar21 * iVar17 + iVar20;
      *(uint64_t *)(unaff_RBP + 0x140) = 0;
      *(uint64_t *)(unaff_RBP + 0xc0) = 0;
      *(uint64_t *)(unaff_RBP + 200) = 0;
      *(uint64_t *)(unaff_RBP + 0xd0) = 0;
      *(uint64_t *)(unaff_RBP + 0xd8) = 0;
      *(uint64_t *)(unaff_RBP + 0xe0) = 0;
      *(uint64_t *)(unaff_RBP + 0xe8) = 0;
      *(uint64_t *)(unaff_RBP + 0xf0) = 0;
      *(uint64_t *)(unaff_RBP + 0xf8) = 0;
      piVar16 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar21 % (ulonglong)uVar1) * 8);
      *(uint64_t *)(unaff_RBP + 0x100) = 0;
      *(uint64_t *)(unaff_RBP + 0x108) = 0;
      *(uint64_t *)(unaff_RBP + 0x110) = 0;
      *(uint64_t *)(unaff_RBP + 0x118) = 0;
      *(uint64_t *)(unaff_RBP + 0x120) = 0;
      *(uint64_t *)(unaff_RBP + 0x128) = 0;
      *(uint64_t *)(unaff_RBP + 0x130) = 0;
      *(uint64_t *)(unaff_RBP + 0x138) = 0;
      for (; piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
        if (iVar21 == *piVar16) goto LAB_180373799;
      }
      piVar16 = *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
      if (piVar16 == *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0,8,3);
        in_stack_00000040 = iVar21;
        in_stack_00000048 = FUN_180372430(uVar12,*(uint64_t *)(unaff_RBX + 0x68));
        puVar13 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000040);
        piVar16 = (int *)*puVar13;
      }
      uVar12 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar16 + 2) + 0x18,&system_data_0300);
      lVar14 = FUN_180372570(uVar12,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      uVar1 = *(uint *)(unaff_RBX + 0x118);
      lVar2 = *(longlong *)(unaff_RBX + 0x110);
      iVar20 = *(int *)(unaff_RBX + 0x58) * iVar17 + iVar20;
      *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar14 + 0x110);
      for (piVar16 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar20 % (ulonglong)uVar1) * 8);
          piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
        if (iVar20 == *piVar16) goto LAB_180373878;
      }
      piVar16 = *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
      if (piVar16 == *(int **)(lVar2 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar15 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        uVar12 = *(uint64_t *)(unaff_RBX + 0x68);
        *(int *)(unaff_RBP + -0x78) = iVar20;
        uVar12 = FUN_180372430(uVar15,uVar12);
        *(uint64_t *)(unaff_RBP + -0x70) = uVar12;
        puVar13 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78)
        ;
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
    in_R10D = *(int *)(unaff_RBX + 0x58);
    unaff_R15D = unaff_R15D + 1;
    in_R9D = *(int *)(unaff_RBX + 0x54);
    if (in_R9D * in_R10D <= unaff_R15D) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803736ad(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1803736ad(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6,uint64_t param_7,int param_8,
                  uint64_t param_9,int param_10,uint64_t param_11,uint64_t param_12,
                  longlong param_13,int *param_14,longlong param_15)

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
  longlong lVar16;
  longlong lVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  longlong lVar20;
  int *in_RAX;
  uint64_t uVar21;
  float *pfVar22;
  int *piVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *pfVar27;
  int iVar28;
  int unaff_EDI;
  int iVar29;
  int iVar30;
  longlong unaff_R13;
  int unaff_R14D;
  int iVar31;
  int unaff_R15D;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM6_Da;
  float fVar36;
  float fVar37;
  
code_r0x0001803736ad:
  lVar17 = *(longlong *)(unaff_RBX + 0x118);
  do {
    if (in_RAX == *(int **)(param_3 + lVar17 * 8)) {
      uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
      param_10 = unaff_EDI;
      param_11 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
      puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
      in_RAX = (int *)*puVar19;
    }
    *(int *)(*(longlong *)(in_RAX + 2) + 0x110) = (int)unaff_XMM6_Da;
    do {
      lVar20 = FUN_180372570();
      lVar17 = *(longlong *)(unaff_RBX + 0x110);
      lVar20 = *(longlong *)(lVar20 + 0x108);
      iVar28 = *(int *)(unaff_RBX + 0x58) * unaff_R15D + unaff_R14D;
      for (piVar23 = *(int **)(lVar17 + ((ulonglong)(longlong)iVar28 %
                                        (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
          piVar23 != (int *)0x0; piVar23 = *(int **)(piVar23 + 4)) {
        if (iVar28 == *piVar23) goto LAB_180373428;
      }
      piVar23 = *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373428:
      if (piVar23 == *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        param_8 = iVar28;
        param_9 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
        puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + 0x78,&param_8);
        piVar23 = (int *)*puVar19;
      }
      lVar17 = *(longlong *)(unaff_RBP + -0x78);
      *(longlong *)(*(longlong *)(piVar23 + 2) + 0x108) = lVar20 + 1;
      do {
        unaff_R13 = unaff_R13 + 0x28;
        param_6 = param_6 + -1;
        if (param_6 == 0) {
          iVar29 = *(int *)(unaff_RBX + 0x54);
          iVar28 = *(int *)(unaff_RBX + 0x58);
          iVar31 = 0;
          if (iVar29 * iVar28 < 1) goto LAB_18037397f;
          goto LAB_180373510;
        }
        pfVar27 = (float *)(*(longlong *)(unaff_RBX + 0x80) + unaff_R13);
        fVar34 = *(float *)(*(longlong *)(unaff_RBP + -0x80) + 0x215c);
        iVar28 = *(int *)(unaff_RBX + 0x54) + -1;
        unaff_R15D = (int)(*pfVar27 / fVar34);
        if (unaff_R15D < 0) {
          unaff_R15D = 0;
        }
        else if (iVar28 < unaff_R15D) {
          unaff_R15D = iVar28;
        }
        iVar28 = *(int *)(unaff_RBX + 0x58);
        unaff_R14D = (int)(pfVar27[1] / fVar34);
        if (unaff_R14D < 0) {
          unaff_R14D = 0;
        }
        else if (iVar28 + -1 < unaff_R14D) {
          unaff_R14D = iVar28 + -1;
        }
        if ((uint)(*(longlong *)(lVar17 + 0x10) - *(longlong *)(lVar17 + 8) >> 3) <=
            (uint)(int)*(char *)(pfVar27 + 8)) {
          *(int8_t *)(pfVar27 + 8) = 0;
          iVar28 = *(int *)(unaff_RBX + 0x58);
        }
        lVar20 = *(longlong *)(unaff_RBX + 0x110);
        iVar28 = iVar28 * unaff_R15D + unaff_R14D;
        for (piVar23 = *(int **)(lVar20 + ((ulonglong)(longlong)iVar28 %
                                          (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
            piVar23 != (int *)0x0; piVar23 = *(int **)(piVar23 + 4)) {
          if (iVar28 == *piVar23) {
            lVar16 = *(longlong *)(unaff_RBX + 0x118);
            goto LAB_18037309e;
          }
        }
        lVar16 = *(longlong *)(unaff_RBX + 0x118);
        piVar23 = *(int **)(lVar20 + lVar16 * 8);
LAB_18037309e:
        if (piVar23 == *(int **)(lVar20 + lVar16 * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          param_14 = (int *)CONCAT44(param_14._4_4_,iVar28);
          param_15 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
          puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,&param_14);
          piVar23 = (int *)*puVar19;
        }
        FUN_18037d8b0(*(uint64_t *)(piVar23 + 2),pfVar27,lVar17);
        plVar3 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)(lVar17 + 8) +
                    ((ulonglong)(uint)(int)*(char *)(pfVar27 + 8) %
                    (ulonglong)(*(longlong *)(lVar17 + 0x10) - *(longlong *)(lVar17 + 8) >> 3)) * 8)
                  + 0x28);
      } while (plVar3 == (longlong *)0x0);
      fVar34 = *pfVar27;
      fVar32 = pfVar27[1];
      fVar33 = pfVar27[2];
      if (*(code **)(*plVar3 + 0x198) == (code *)&UNK_18027d990) {
        pfVar22 = (float *)((longlong)plVar3 + 0x214);
      }
      else {
        pfVar22 = (float *)(**(code **)(*plVar3 + 0x198))(plVar3);
      }
      fVar35 = *pfVar22;
      fVar36 = pfVar22[1];
      fVar37 = pfVar22[2];
      fVar7 = pfVar22[3];
      uVar2 = *(uint *)(unaff_RBX + 0x118);
      fVar8 = pfVar22[4];
      fVar9 = pfVar22[5];
      fVar10 = pfVar22[6];
      fVar11 = pfVar22[7];
      iVar28 = *(int *)(unaff_RBX + 0x58);
      fVar1 = pfVar27[6];
      lVar17 = *(longlong *)(unaff_RBX + 0x110);
      *(float *)(unaff_RBP + -0x68) = fVar35;
      *(float *)(unaff_RBP + -100) = fVar36;
      *(float *)(unaff_RBP + -0x60) = fVar37;
      *(float *)(unaff_RBP + -0x5c) = fVar7;
      iVar28 = iVar28 * unaff_R15D + unaff_R14D;
      *(float *)(unaff_RBP + -0x58) = fVar8;
      *(float *)(unaff_RBP + -0x54) = fVar9;
      *(float *)(unaff_RBP + -0x50) = fVar10;
      *(float *)(unaff_RBP + -0x4c) = fVar11;
      fVar35 = fVar35 * fVar1 + fVar34;
      fVar34 = fVar8 * fVar1 + fVar34;
      fVar36 = *(float *)(unaff_RBP + -100) * fVar1 + fVar32;
      fVar37 = *(float *)(unaff_RBP + -0x60) * fVar1 + fVar33;
      fVar32 = *(float *)(unaff_RBP + -0x54) * fVar1 + fVar32;
      fVar33 = *(float *)(unaff_RBP + -0x50) * fVar1 + fVar33;
      for (piVar23 = *(int **)(lVar17 + ((ulonglong)(longlong)iVar28 % (ulonglong)uVar2) * 8);
          piVar23 != (int *)0x0; piVar23 = *(int **)(piVar23 + 4)) {
        if (iVar28 == *piVar23) {
          lVar20 = *(longlong *)(unaff_RBX + 0x118);
          goto LAB_18037321d;
        }
      }
      lVar20 = *(longlong *)(unaff_RBX + 0x118);
      piVar23 = *(int **)(lVar17 + lVar20 * 8);
LAB_18037321d:
      if (piVar23 == *(int **)(lVar17 + lVar20 * 8)) {
        uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        param_12 = CONCAT44(param_12._4_4_,iVar28);
        param_13 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
        puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&param_12);
        piVar23 = (int *)*puVar19;
      }
      lVar17 = *(longlong *)(piVar23 + 2);
      if (fVar35 <= fVar34) {
        if (fVar35 < *(float *)(lVar17 + 0x18)) {
          *(float *)(lVar17 + 0x18) = fVar35;
        }
        if (fVar36 < *(float *)(lVar17 + 0x1c)) {
          *(float *)(lVar17 + 0x1c) = fVar36;
        }
        if (fVar37 < *(float *)(lVar17 + 0x20)) {
          *(float *)(lVar17 + 0x20) = fVar37;
        }
        if (*(float *)(lVar17 + 0x28) <= fVar34 && fVar34 != *(float *)(lVar17 + 0x28)) {
          *(float *)(lVar17 + 0x28) = fVar34;
        }
        if (*(float *)(lVar17 + 0x2c) <= fVar32 && fVar32 != *(float *)(lVar17 + 0x2c)) {
          *(float *)(lVar17 + 0x2c) = fVar32;
        }
        if (*(float *)(lVar17 + 0x30) <= fVar33 && fVar33 != *(float *)(lVar17 + 0x30)) {
          *(float *)(lVar17 + 0x30) = fVar33;
        }
      }
      fVar34 = pfVar27[6];
      if (*(code **)(*plVar3 + 0x198) == (code *)&UNK_18027d990) {
        lVar17 = (longlong)plVar3 + 0x214;
      }
      else {
        lVar17 = (**(code **)(*plVar3 + 0x198))(plVar3);
      }
      unaff_XMM6_Da = fVar34 * *(float *)(lVar17 + 0x30);
      lVar17 = FUN_180372570();
    } while (unaff_XMM6_Da <= (float)*(int *)(lVar17 + 0x110));
    param_3 = *(longlong *)(unaff_RBX + 0x110);
    unaff_EDI = *(int *)(unaff_RBX + 0x58) * unaff_R15D + unaff_R14D;
    for (in_RAX = *(int **)(param_3 +
                           ((ulonglong)(longlong)unaff_EDI % (ulonglong)*(uint *)(unaff_RBX + 0x118)
                           ) * 8); in_RAX != (int *)0x0; in_RAX = *(int **)(in_RAX + 4)) {
      if (unaff_EDI == *in_RAX) goto code_r0x0001803736ad;
    }
    lVar17 = *(longlong *)(unaff_RBX + 0x118);
    in_RAX = *(int **)(param_3 + lVar17 * 8);
  } while( true );
LAB_180373510:
  uVar5 = (longlong)iVar31 / (longlong)iVar29;
  uVar6 = (longlong)iVar31 % (longlong)iVar29;
  lVar17 = *(longlong *)(unaff_RBX + 0x110);
  iVar24 = (int)uVar6;
  iVar29 = (int)uVar5;
  iVar30 = iVar28 * iVar24 + iVar29;
  uVar25 = (ulonglong)(longlong)iVar30 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
  piVar23 = *(int **)(lVar17 + uVar25 * 8);
  for (piVar4 = piVar23; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
    if (iVar30 == *piVar4) {
      if (piVar4 != (int *)0x0) {
        lVar20 = *(longlong *)(unaff_RBX + 0x118);
        param_14 = piVar4;
        puVar19 = &param_14;
        param_15 = lVar17 + uVar25 * 8;
        goto LAB_180373580;
      }
      break;
    }
  }
  lVar20 = *(longlong *)(unaff_RBX + 0x118);
  param_12 = *(uint64_t *)(lVar17 + lVar20 * 8);
  puVar19 = &param_12;
  param_13 = lVar17 + lVar20 * 8;
LAB_180373580:
  piVar4 = *(int **)(lVar17 + lVar20 * 8);
  if ((int *)*puVar19 != piVar4) {
    iVar28 = iVar24 * iVar28 + iVar29;
    for (; (piVar26 = piVar4, piVar23 != (int *)0x0 && (piVar26 = piVar23, iVar28 != *piVar23));
        piVar23 = *(int **)(piVar23 + 4)) {
    }
    if (piVar26 == piVar4) {
      uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar17 >> 8),3));
      param_10 = iVar28;
      param_11 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
      puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
      piVar26 = (int *)*puVar19;
    }
    lVar17 = *(longlong *)(piVar26 + 2);
    fVar34 = *(float *)(lVar17 + 0x28);
    if (fVar34 < *(float *)(lVar17 + 0x18)) {
      *(int32_t *)(lVar17 + 0x48) = 0;
      *(uint64_t *)(lVar17 + 0x18) = 0;
      *(uint64_t *)(lVar17 + 0x20) = 0;
      *(uint64_t *)(lVar17 + 0x28) = 0;
      *(uint64_t *)(lVar17 + 0x30) = 0;
      *(uint64_t *)(lVar17 + 0x38) = 0;
      *(uint64_t *)(lVar17 + 0x40) = 0;
    }
    else {
      fVar32 = (fVar34 + *(float *)(lVar17 + 0x18)) * 0.5;
      *(float *)(lVar17 + 0x38) = fVar32;
      *(float *)(lVar17 + 0x3c) = (*(float *)(lVar17 + 0x2c) + *(float *)(lVar17 + 0x1c)) * 0.5;
      *(float *)(lVar17 + 0x40) = (*(float *)(lVar17 + 0x30) + *(float *)(lVar17 + 0x20)) * 0.5;
      *(int32_t *)(lVar17 + 0x44) = 0x7f7fffff;
      fVar34 = fVar34 - fVar32;
      fVar32 = *(float *)(lVar17 + 0x30) - *(float *)(lVar17 + 0x40);
      fVar33 = *(float *)(lVar17 + 0x2c) - *(float *)(lVar17 + 0x3c);
      *(float *)(lVar17 + 0x48) = SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar32 * fVar32);
    }
    iVar28 = *(int *)(unaff_RBX + 0x58);
    uVar2 = *(uint *)(unaff_RBX + 0x118);
    lVar17 = *(longlong *)(unaff_RBX + 0x110);
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
    iVar28 = iVar28 * iVar24 + iVar29;
    *(uint64_t *)(unaff_RBP + 0x140) = 0;
    *(uint64_t *)(unaff_RBP + 0xc0) = 0;
    *(uint64_t *)(unaff_RBP + 200) = 0;
    *(uint64_t *)(unaff_RBP + 0xd0) = 0;
    *(uint64_t *)(unaff_RBP + 0xd8) = 0;
    *(uint64_t *)(unaff_RBP + 0xe0) = 0;
    *(uint64_t *)(unaff_RBP + 0xe8) = 0;
    *(uint64_t *)(unaff_RBP + 0xf0) = 0;
    *(uint64_t *)(unaff_RBP + 0xf8) = 0;
    piVar23 = *(int **)(lVar17 + ((ulonglong)(longlong)iVar28 % (ulonglong)uVar2) * 8);
    *(uint64_t *)(unaff_RBP + 0x100) = 0;
    *(uint64_t *)(unaff_RBP + 0x108) = 0;
    *(uint64_t *)(unaff_RBP + 0x110) = 0;
    *(uint64_t *)(unaff_RBP + 0x118) = 0;
    *(uint64_t *)(unaff_RBP + 0x120) = 0;
    *(uint64_t *)(unaff_RBP + 0x128) = 0;
    *(uint64_t *)(unaff_RBP + 0x130) = 0;
    *(uint64_t *)(unaff_RBP + 0x138) = 0;
    for (; piVar23 != (int *)0x0; piVar23 = *(int **)(piVar23 + 4)) {
      if (iVar28 == *piVar23) goto LAB_180373799;
    }
    piVar23 = *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
    if (piVar23 == *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
      uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0,8,3);
      param_8 = iVar28;
      param_9 = FUN_180372430(uVar18,*(uint64_t *)(unaff_RBX + 0x68));
      puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&param_8);
      piVar23 = (int *)*puVar19;
    }
    uVar18 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar23 + 2) + 0x18,&system_data_0300);
    lVar20 = FUN_180372570(uVar18,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
    uVar2 = *(uint *)(unaff_RBX + 0x118);
    lVar17 = *(longlong *)(unaff_RBX + 0x110);
    iVar29 = *(int *)(unaff_RBX + 0x58) * iVar24 + iVar29;
    *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar20 + 0x110);
    for (piVar23 = *(int **)(lVar17 + ((ulonglong)(longlong)iVar29 % (ulonglong)uVar2) * 8);
        piVar23 != (int *)0x0; piVar23 = *(int **)(piVar23 + 4)) {
      if (iVar29 == *piVar23) goto LAB_180373878;
    }
    piVar23 = *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
    if (piVar23 == *(int **)(lVar17 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
      uVar21 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
      uVar18 = *(uint64_t *)(unaff_RBX + 0x68);
      *(int *)(unaff_RBP + -0x78) = iVar29;
      uVar18 = FUN_180372430(uVar21,uVar18);
      *(uint64_t *)(unaff_RBP + -0x70) = uVar18;
      puVar19 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78);
      piVar23 = (int *)*puVar19;
    }
    lVar17 = *(longlong *)(piVar23 + 2);
    uVar18 = *(uint64_t *)(unaff_RBP + 0x98);
    uVar21 = *(uint64_t *)(unaff_RBP + 0xa0);
    uVar12 = *(uint64_t *)(unaff_RBP + 0xa8);
    *(uint64_t *)(lVar17 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
    *(uint64_t *)(lVar17 + 0x54) = uVar18;
    uVar18 = *(uint64_t *)(unaff_RBP + 0xb0);
    uVar13 = *(uint64_t *)(unaff_RBP + 0xb8);
    *(uint64_t *)(lVar17 + 0x5c) = uVar21;
    *(uint64_t *)(lVar17 + 100) = uVar12;
    uVar21 = *(uint64_t *)(unaff_RBP + 0xc0);
    uVar12 = *(uint64_t *)(unaff_RBP + 200);
    *(uint64_t *)(lVar17 + 0x6c) = uVar18;
    *(uint64_t *)(lVar17 + 0x74) = uVar13;
    uVar18 = *(uint64_t *)(unaff_RBP + 0xd0);
    uVar13 = *(uint64_t *)(unaff_RBP + 0xd8);
    *(uint64_t *)(lVar17 + 0x7c) = uVar21;
    *(uint64_t *)(lVar17 + 0x84) = uVar12;
    uVar21 = *(uint64_t *)(unaff_RBP + 0xe0);
    uVar12 = *(uint64_t *)(unaff_RBP + 0xe8);
    *(uint64_t *)(lVar17 + 0x8c) = uVar18;
    *(uint64_t *)(lVar17 + 0x94) = uVar13;
    uVar18 = *(uint64_t *)(unaff_RBP + 0xf0);
    uVar13 = *(uint64_t *)(unaff_RBP + 0xf8);
    *(uint64_t *)(lVar17 + 0x9c) = uVar21;
    *(uint64_t *)(lVar17 + 0xa4) = uVar12;
    uVar21 = *(uint64_t *)(unaff_RBP + 0x100);
    uVar12 = *(uint64_t *)(unaff_RBP + 0x108);
    *(uint64_t *)(lVar17 + 0xac) = uVar18;
    *(uint64_t *)(lVar17 + 0xb4) = uVar13;
    uVar18 = *(uint64_t *)(unaff_RBP + 0x110);
    uVar13 = *(uint64_t *)(unaff_RBP + 0x118);
    *(uint64_t *)(lVar17 + 0xbc) = uVar21;
    *(uint64_t *)(lVar17 + 0xc4) = uVar12;
    uVar14 = *(uint64_t *)(unaff_RBP + 0x120);
    uVar15 = *(uint64_t *)(unaff_RBP + 0x128);
    *(uint64_t *)(lVar17 + 0xcc) = uVar18;
    *(uint64_t *)(lVar17 + 0xd4) = uVar13;
    uVar21 = *(uint64_t *)(unaff_RBP + 0x130);
    uVar12 = *(uint64_t *)(unaff_RBP + 0x138);
    uVar18 = *(uint64_t *)(unaff_RBP + 0x140);
    *(uint64_t *)(lVar17 + 0xdc) = uVar14;
    *(uint64_t *)(lVar17 + 0xe4) = uVar15;
    *(uint64_t *)(lVar17 + 0xec) = uVar21;
    *(uint64_t *)(lVar17 + 0xf4) = uVar12;
    *(uint64_t *)(lVar17 + 0xfc) = uVar18;
  }
  iVar28 = *(int *)(unaff_RBX + 0x58);
  iVar31 = iVar31 + 1;
  iVar29 = *(int *)(unaff_RBX + 0x54);
  if (iVar29 * iVar28 <= iVar31) {
LAB_18037397f:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
  }
  goto LAB_180373510;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




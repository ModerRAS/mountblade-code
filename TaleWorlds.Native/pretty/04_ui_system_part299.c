#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part299.c - 14 个函数

// 函数: void FUN_180832350(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180832350(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  for (iVar9 = (int)param_2 >> 2; iVar9 != 0; iVar9 = iVar9 + -1) {
    uVar8 = *param_4 + *param_5;
    fVar11 = (float)(uint)*param_4 * 2.3283064e-10;
    fVar15 = *(float *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 4);
    fVar1 = *(float *)(param_3 + (ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) * 4);
    *param_4 = uVar8;
    uVar10 = *param_5 + uVar8;
    fVar12 = (float)(uVar8 & 0xffffffff) * 2.3283064e-10;
    fVar2 = *(float *)(param_3 + (ulonglong)((int)(uVar8 >> 0x20) + 1) * 4);
    fVar3 = *(float *)(param_3 + (uVar8 >> 0x20) * 4);
    *param_4 = uVar10;
    uVar8 = *param_5 + uVar10;
    fVar13 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
    fVar4 = *(float *)(param_3 + (ulonglong)((int)(uVar10 >> 0x20) + 1) * 4);
    fVar5 = *(float *)(param_3 + (uVar10 >> 0x20) * 4);
    *param_4 = uVar8;
    fVar14 = (float)(uVar8 & 0xffffffff) * 2.3283064e-10;
    fVar6 = *(float *)(param_3 + (ulonglong)((int)(uVar8 >> 0x20) + 1) * 4);
    fVar7 = *(float *)(param_3 + (uVar8 >> 0x20) * 4);
    *param_4 = *param_5 + uVar8;
    *param_1 = (1.0 - fVar11) * fVar15 + fVar11 * fVar1;
    param_1[1] = (1.0 - fVar12) * fVar3 + fVar12 * fVar2;
    param_1[2] = (1.0 - fVar13) * fVar5 + fVar13 * fVar4;
    param_1[3] = (1.0 - fVar14) * fVar7 + fVar14 * fVar6;
    param_1 = param_1 + 4;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar15 = (float)(uint)*param_4 * 2.3283064e-10;
    *param_1 = (1.0 - fVar15) *
               *(float *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 4) +
               fVar15 * *(float *)(param_3 + (ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) * 4);
    param_1 = param_1 + 1;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_1808324f0(void)
void FUN_1808324f0(void)

{
  FUN_180832190();
  return;
}





// 函数: void FUN_180832510(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180832510(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  for (iVar9 = (int)param_2 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
    uVar10 = *param_4 + *param_5;
    uVar8 = *(uint *)((longlong)param_4 + 4) * 2;
    fVar11 = (float)(uint)*param_4 * 2.3283064e-10;
    fVar1 = *(float *)(param_3 + (ulonglong)(uVar8 + 2) * 4);
    fVar2 = *(float *)(param_3 + (ulonglong)(uVar8 + 1) * 4);
    fVar13 = *(float *)(param_3 + (ulonglong)uVar8 * 4);
    fVar3 = *(float *)(param_3 + (ulonglong)(uVar8 + 3) * 4);
    *param_4 = uVar10;
    uVar8 = (int)(uVar10 >> 0x20) * 2;
    fVar12 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
    fVar4 = *(float *)(param_3 + (ulonglong)(uVar8 + 2) * 4);
    fVar5 = *(float *)(param_3 + (ulonglong)(uVar8 + 1) * 4);
    fVar6 = *(float *)(param_3 + (ulonglong)uVar8 * 4);
    fVar7 = *(float *)(param_3 + (ulonglong)(uVar8 + 3) * 4);
    *param_4 = *param_5 + uVar10;
    *param_1 = fVar11 * fVar1 + (1.0 - fVar11) * fVar13;
    param_1[1] = (1.0 - fVar11) * fVar2 + fVar11 * fVar3;
    param_1[2] = fVar12 * fVar4 + (1.0 - fVar12) * fVar6;
    param_1[3] = (1.0 - fVar12) * fVar5 + fVar12 * fVar7;
    param_1 = param_1 + 4;
  }
  for (param_2 = param_2 & 1; param_2 != 0; param_2 = param_2 - 1) {
    uVar8 = *(uint *)((longlong)param_4 + 4) * 2;
    fVar13 = (float)(uint)*param_4 * 2.3283064e-10;
    fVar1 = *(float *)(param_3 + (ulonglong)(uVar8 + 1) * 4);
    fVar2 = *(float *)(param_3 + (ulonglong)(uVar8 + 3) * 4);
    *param_1 = fVar13 * *(float *)(param_3 + (ulonglong)(uVar8 + 2) * 4) +
               (1.0 - fVar13) * *(float *)(param_3 + (ulonglong)uVar8 * 4);
    param_1[1] = (1.0 - fVar13) * fVar1 + fVar13 * fVar2;
    param_1 = param_1 + 2;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_1808326b0(void)
void FUN_1808326b0(void)

{
  FUN_1808326f0();
  return;
}





// 函数: void FUN_1808326d0(void)
void FUN_1808326d0(void)

{
  FUN_1808326f0();
  return;
}





// 函数: void FUN_1808326f0(float *param_1,int param_2,longlong param_3,ulonglong *param_4,longlong *param_5,
void FUN_1808326f0(float *param_1,int param_2,longlong param_3,ulonglong *param_4,longlong *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)*param_4;
    do {
      iVar4 = 0;
      fVar5 = (float)(uVar3 & 0xffffffff) * 2.3283064e-10;
      if (3 < param_6) {
        fVar6 = 1.0 - fVar5;
        do {
          *param_1 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)
                                           ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + iVar4
                                           ) * 2) * 3.0517578e-05 * fVar5 +
                     (float)(int)*(short *)(param_3 +
                                           (ulonglong)
                                           (*(uint *)((longlong)param_4 + 4) * param_6 + iVar4) * 2)
                     * 3.0517578e-05 * fVar6;
          param_1[1] = (float)(int)*(short *)(param_3 +
                                             (ulonglong)
                                             ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 1 +
                                             iVar4) * 2) * 3.0517578e-05 * fVar5 +
                       (float)(int)*(short *)(param_3 +
                                             (ulonglong)
                                             (*(uint *)((longlong)param_4 + 4) * param_6 + 1 + iVar4
                                             ) * 2) * 3.0517578e-05 * fVar6;
          param_1[2] = (float)(int)*(short *)(param_3 +
                                             (ulonglong)
                                             ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 2 +
                                             iVar4) * 2) * 3.0517578e-05 * fVar5 +
                       (float)(int)*(short *)(param_3 +
                                             (ulonglong)
                                             (*(uint *)((longlong)param_4 + 4) * param_6 + 2 + iVar4
                                             ) * 2) * 3.0517578e-05 * fVar6;
          uVar1 = (*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 3 + iVar4;
          uVar2 = *(uint *)((longlong)param_4 + 4) * param_6 + 3 + iVar4;
          iVar4 = iVar4 + 4;
          param_1[3] = (float)(int)*(short *)(param_3 + (ulonglong)uVar1 * 2) * 3.0517578e-05 *
                       fVar5 + (float)(int)*(short *)(param_3 + (ulonglong)uVar2 * 2) *
                               3.0517578e-05 * fVar6;
          param_1 = param_1 + 4;
        } while (iVar4 < param_6 + -3);
      }
      if (iVar4 < param_6) {
        do {
          uVar2 = *(uint *)((longlong)param_4 + 4) * param_6 + iVar4;
          uVar1 = (*(uint *)((longlong)param_4 + 4) + 1) * param_6 + iVar4;
          iVar4 = iVar4 + 1;
          *param_1 = (float)(int)*(short *)(param_3 + (ulonglong)uVar1 * 2) * 3.0517578e-05 * fVar5
                     + (float)(int)*(short *)(param_3 + (ulonglong)uVar2 * 2) * 3.0517578e-05 *
                       (1.0 - fVar5);
          param_1 = param_1 + 1;
        } while (iVar4 < param_6);
      }
      *param_4 = *param_4 + *param_5;
      uVar3 = *param_4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_180832722(void)
void FUN_180832722(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  int unaff_EDI;
  int iVar3;
  ulonglong *in_R9;
  int in_R10D;
  float *in_R11;
  float fVar4;
  float in_XMM3_Da;
  float fVar5;
  float in_XMM5_Da;
  longlong *in_stack_00000040;
  
  do {
    iVar3 = 0;
    fVar4 = (float)(in_RAX & 0xffffffff) * 2.3283064e-10;
    if (3 < in_R10D) {
      fVar5 = in_XMM5_Da - fVar4;
      do {
        *in_R11 = (float)(int)*(short *)(unaff_RBX +
                                        (ulonglong)
                                        (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + iVar3
                                              ) * 2) * in_XMM3_Da * fVar4 +
                  (float)(int)*(short *)(unaff_RBX +
                                        (ulonglong)
                                        (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + iVar3) * 2)
                  * in_XMM3_Da * fVar5;
        in_R11[1] = (float)(int)*(short *)(unaff_RBX +
                                          (ulonglong)
                                          (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 1 +
                                                iVar3) * 2) * in_XMM3_Da * fVar4 +
                    (float)(int)*(short *)(unaff_RBX +
                                          (ulonglong)
                                          (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + 1 + iVar3
                                                ) * 2) * in_XMM3_Da * fVar5;
        in_R11[2] = (float)(int)*(short *)(unaff_RBX +
                                          (ulonglong)
                                          (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 2 +
                                                iVar3) * 2) * in_XMM3_Da * fVar4 +
                    (float)(int)*(short *)(unaff_RBX +
                                          (ulonglong)
                                          (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + 2 + iVar3
                                                ) * 2) * in_XMM3_Da * fVar5;
        uVar1 = (*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 3 + iVar3;
        uVar2 = *(int *)((longlong)in_R9 + 4) * in_R10D + 3 + iVar3;
        iVar3 = iVar3 + 4;
        in_R11[3] = (float)(int)*(short *)(unaff_RBX + (ulonglong)uVar1 * 2) * in_XMM3_Da * fVar4 +
                    (float)(int)*(short *)(unaff_RBX + (ulonglong)uVar2 * 2) * in_XMM3_Da * fVar5;
        in_R11 = in_R11 + 4;
      } while (iVar3 < in_R10D + -3);
    }
    if (iVar3 < in_R10D) {
      do {
        uVar2 = *(int *)((longlong)in_R9 + 4) * in_R10D + iVar3;
        uVar1 = (*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + iVar3;
        iVar3 = iVar3 + 1;
        *in_R11 = (float)(int)*(short *)(unaff_RBX + (ulonglong)uVar1 * 2) * in_XMM3_Da * fVar4 +
                  (float)(int)*(short *)(unaff_RBX + (ulonglong)uVar2 * 2) * in_XMM3_Da *
                  (in_XMM5_Da - fVar4);
        in_R11 = in_R11 + 1;
      } while (iVar3 < in_R10D);
    }
    *in_R9 = *in_R9 + *in_stack_00000040;
    in_RAX = *in_R9;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}





// 函数: void FUN_18083292b(void)
void FUN_18083292b(void)

{
  return;
}





// 函数: void FUN_180832930(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180832930(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  for (iVar10 = (int)param_2 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    uVar9 = *param_4 + *param_5;
    sVar1 = *(short *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 2);
    sVar2 = *(short *)(param_3 + (ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) * 2);
    fVar12 = (float)(uint)*param_4 * 2.3283064e-10;
    *param_4 = uVar9;
    uVar11 = *param_5 + uVar9;
    sVar3 = *(short *)(param_3 + (uVar9 >> 0x20) * 2);
    sVar4 = *(short *)(param_3 + (ulonglong)((int)(uVar9 >> 0x20) + 1) * 2);
    fVar13 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
    *param_4 = uVar11;
    uVar9 = *param_5 + uVar11;
    sVar5 = *(short *)(param_3 + (uVar11 >> 0x20) * 2);
    sVar6 = *(short *)(param_3 + (ulonglong)((int)(uVar11 >> 0x20) + 1) * 2);
    fVar14 = (float)(uVar11 & 0xffffffff) * 2.3283064e-10;
    *param_4 = uVar9;
    sVar7 = *(short *)(param_3 + (uVar9 >> 0x20) * 2);
    fVar15 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
    sVar8 = *(short *)(param_3 + (ulonglong)((int)(uVar9 >> 0x20) + 1) * 2);
    *param_4 = *param_5 + uVar9;
    *param_1 = (float)(int)sVar1 * 3.0517578e-05 * (1.0 - fVar12) +
               (float)(int)sVar2 * 3.0517578e-05 * fVar12;
    param_1[1] = (float)(int)sVar3 * 3.0517578e-05 * (1.0 - fVar13) +
                 (float)(int)sVar4 * 3.0517578e-05 * fVar13;
    param_1[2] = (float)(int)sVar5 * 3.0517578e-05 * (1.0 - fVar14) +
                 (float)(int)sVar6 * 3.0517578e-05 * fVar14;
    param_1[3] = (float)(int)sVar7 * 3.0517578e-05 * (1.0 - fVar15) +
                 (float)(int)sVar8 * 3.0517578e-05 * fVar15;
    param_1 = param_1 + 4;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar12 = (float)(uint)*param_4 * 2.3283064e-10;
    *param_1 = (float)(int)*(short *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 2) *
               3.0517578e-05 * (1.0 - fVar12) +
               (float)(int)*(short *)(param_3 +
                                     (ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) * 2) *
               3.0517578e-05 * fVar12;
    param_1 = param_1 + 1;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_180832b80(void)
void FUN_180832b80(void)

{
  FUN_1808326f0();
  return;
}





// 函数: void FUN_180832ba0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180832ba0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  for (iVar19 = (int)param_2 >> 2; iVar19 != 0; iVar19 = iVar19 + -1) {
    uVar20 = *param_4 + *param_5;
    uVar18 = *(uint *)((longlong)param_4 + 4) * 2;
    sVar1 = *(short *)(param_3 + (ulonglong)uVar18 * 2);
    sVar2 = *(short *)(param_3 + (ulonglong)(uVar18 + 2) * 2);
    fVar23 = (float)(uint)*param_4 * 2.3283064e-10;
    sVar3 = *(short *)(param_3 + (ulonglong)(uVar18 + 1) * 2);
    sVar4 = *(short *)(param_3 + (ulonglong)(uVar18 + 3) * 2);
    *param_4 = uVar20;
    uVar21 = *param_5 + uVar20;
    uVar18 = (int)(uVar20 >> 0x20) * 2;
    sVar5 = *(short *)(param_3 + (ulonglong)uVar18 * 2);
    sVar6 = *(short *)(param_3 + (ulonglong)(uVar18 + 2) * 2);
    fVar22 = (float)(uVar20 & 0xffffffff) * 2.3283064e-10;
    sVar7 = *(short *)(param_3 + (ulonglong)(uVar18 + 3) * 2);
    sVar8 = *(short *)(param_3 + (ulonglong)(uVar18 + 1) * 2);
    *param_4 = uVar21;
    iVar17 = (int)(uVar21 >> 0x20);
    uVar18 = iVar17 * 2;
    fVar24 = (float)(uVar21 & 0xffffffff) * 2.3283064e-10;
    sVar9 = *(short *)(param_3 + (ulonglong)uVar18 * 2);
    sVar10 = *(short *)(param_3 + (ulonglong)(uVar18 + 2) * 2);
    uVar21 = *param_5 + uVar21;
    iVar17 = iVar17 * 2;
    sVar11 = *(short *)(param_3 + (ulonglong)(iVar17 + 1) * 2);
    sVar12 = *(short *)(param_3 + (ulonglong)(iVar17 + 3) * 2);
    *param_4 = uVar21;
    uVar18 = (int)(uVar21 >> 0x20) * 2;
    sVar13 = *(short *)(param_3 + (ulonglong)uVar18 * 2);
    sVar14 = *(short *)(param_3 + (ulonglong)(uVar18 + 2) * 2);
    fVar25 = (float)(uVar21 & 0xffffffff) * 2.3283064e-10;
    sVar15 = *(short *)(param_3 + (ulonglong)(uVar18 + 1) * 2);
    sVar16 = *(short *)(param_3 + (ulonglong)(uVar18 + 3) * 2);
    *param_4 = *param_5 + uVar21;
    *param_1 = (float)(int)sVar2 * 3.0517578e-05 * fVar23 +
               (float)(int)sVar1 * 3.0517578e-05 * (1.0 - fVar23);
    param_1[1] = (float)(int)sVar3 * 3.0517578e-05 * (1.0 - fVar23) +
                 (float)(int)sVar4 * 3.0517578e-05 * fVar23;
    param_1[2] = (float)(int)sVar6 * 3.0517578e-05 * fVar22 +
                 (float)(int)sVar5 * 3.0517578e-05 * (1.0 - fVar22);
    param_1[3] = (float)(int)sVar7 * 3.0517578e-05 * fVar22 +
                 (float)(int)sVar8 * 3.0517578e-05 * (1.0 - fVar22);
    param_1[4] = (float)(int)sVar10 * 3.0517578e-05 * fVar24 +
                 (float)(int)sVar9 * 3.0517578e-05 * (1.0 - fVar24);
    param_1[5] = (float)(int)sVar11 * 3.0517578e-05 * (1.0 - fVar24) +
                 (float)(int)sVar12 * 3.0517578e-05 * fVar24;
    param_1[6] = (float)(int)sVar14 * 3.0517578e-05 * fVar25 +
                 (float)(int)sVar13 * 3.0517578e-05 * (1.0 - fVar25);
    param_1[7] = (float)(int)sVar15 * 3.0517578e-05 * (1.0 - fVar25) +
                 (float)(int)sVar16 * 3.0517578e-05 * fVar25;
    param_1 = param_1 + 8;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar18 = *(uint *)((longlong)param_4 + 4) * 2;
    sVar1 = *(short *)(param_3 + (ulonglong)uVar18 * 2);
    fVar22 = (float)(uint)*param_4 * 2.3283064e-10;
    sVar2 = *(short *)(param_3 + (ulonglong)(uVar18 + 2) * 2);
    param_1[1] = (float)(int)*(short *)(param_3 + (ulonglong)(uVar18 + 1) * 2) * 3.0517578e-05 *
                 (1.0 - fVar22) +
                 (float)(int)*(short *)(param_3 + (ulonglong)(uVar18 + 3) * 2) * 3.0517578e-05 *
                 fVar22;
    *param_1 = (float)(int)sVar2 * 3.0517578e-05 * fVar22 +
               (float)(int)sVar1 * 3.0517578e-05 * (1.0 - fVar22);
    param_1 = param_1 + 2;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_180832bf0(undefined8 param_1,int param_2)
void FUN_180832bf0(undefined8 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  longlong in_RAX;
  ulonglong *unaff_RBX;
  undefined8 unaff_RBP;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong in_R10;
  float *in_R11;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  param_2 = param_2 >> 2;
  if (param_2 != 0) {
    *(undefined8 *)(in_RAX + -0x18) = unaff_XMM6_Qa;
    *(undefined8 *)(in_RAX + -0x10) = unaff_XMM6_Qb;
    *(undefined8 *)(in_RAX + -0x28) = unaff_XMM7_Qa;
    *(undefined8 *)(in_RAX + -0x20) = unaff_XMM7_Qb;
    *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
    *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
    *(undefined8 *)(in_RAX + -0x48) = unaff_XMM9_Qa;
    *(undefined8 *)(in_RAX + -0x40) = unaff_XMM9_Qb;
    *(undefined8 *)(in_RAX + -0x58) = unaff_XMM10_Qa;
    *(undefined8 *)(in_RAX + -0x50) = unaff_XMM10_Qb;
    do {
      uVar20 = *unaff_RBX + *unaff_RSI;
      uVar19 = *(uint *)((longlong)unaff_RBX + 4) * 2;
      sVar1 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
      sVar2 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
      fVar23 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
      sVar3 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
      sVar4 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
      *unaff_RBX = uVar20;
      uVar21 = *unaff_RSI + uVar20;
      uVar19 = (int)(uVar20 >> 0x20) * 2;
      sVar5 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
      sVar6 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
      fVar22 = (float)(uVar20 & 0xffffffff) * unaff_XMM12_Da;
      sVar7 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
      sVar8 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
      *unaff_RBX = uVar21;
      iVar17 = (int)(uVar21 >> 0x20);
      uVar19 = iVar17 * 2;
      fVar24 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
      sVar9 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
      sVar10 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
      uVar21 = *unaff_RSI + uVar21;
      iVar17 = iVar17 * 2;
      sVar11 = *(short *)(in_R10 + (ulonglong)(iVar17 + 1) * 2);
      sVar12 = *(short *)(in_R10 + (ulonglong)(iVar17 + 3) * 2);
      *unaff_RBX = uVar21;
      uVar19 = (int)(uVar21 >> 0x20) * 2;
      sVar13 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
      sVar14 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
      fVar25 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
      sVar15 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
      sVar16 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
      *unaff_RBX = *unaff_RSI + uVar21;
      *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar23 +
                (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23);
      in_R11[1] = (float)(int)sVar3 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23) +
                  (float)(int)sVar4 * unaff_XMM11_Da * fVar23;
      in_R11[2] = (float)(int)sVar6 * unaff_XMM11_Da * fVar22 +
                  (float)(int)sVar5 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
      in_R11[3] = (float)(int)sVar7 * unaff_XMM11_Da * fVar22 +
                  (float)(int)sVar8 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
      in_R11[4] = (float)(int)sVar10 * unaff_XMM11_Da * fVar24 +
                  (float)(int)sVar9 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24);
      in_R11[5] = (float)(int)sVar11 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24) +
                  (float)(int)sVar12 * unaff_XMM11_Da * fVar24;
      in_R11[6] = (float)(int)sVar14 * unaff_XMM11_Da * fVar25 +
                  (float)(int)sVar13 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25);
      in_R11[7] = (float)(int)sVar15 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25) +
                  (float)(int)sVar16 * unaff_XMM11_Da * fVar25;
      in_R11 = in_R11 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  for (uVar19 = unaff_EDI & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    uVar18 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    sVar1 = *(short *)(in_R10 + (ulonglong)uVar18 * 2);
    fVar22 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    sVar2 = *(short *)(in_R10 + (ulonglong)(uVar18 + 2) * 2);
    in_R11[1] = (float)(int)*(short *)(in_R10 + (ulonglong)(uVar18 + 1) * 2) * unaff_XMM11_Da *
                (unaff_XMM13_Da - fVar22) +
                (float)(int)*(short *)(in_R10 + (ulonglong)(uVar18 + 3) * 2) * unaff_XMM11_Da *
                fVar22;
    *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar22 +
              (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R11 = in_R11 + 2;
    *unaff_RBX = *unaff_RBX + *unaff_RSI;
  }
  return;
}





// 函数: void FUN_180832c01(void)
void FUN_180832c01(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  longlong in_RAX;
  ulonglong *unaff_RBX;
  int unaff_EBP;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong in_R10;
  float *in_R11;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  *(undefined8 *)(in_RAX + -0x18) = unaff_XMM6_Qa;
  *(undefined8 *)(in_RAX + -0x10) = unaff_XMM6_Qb;
  *(undefined8 *)(in_RAX + -0x28) = unaff_XMM7_Qa;
  *(undefined8 *)(in_RAX + -0x20) = unaff_XMM7_Qb;
  *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
  *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
  *(undefined8 *)(in_RAX + -0x48) = unaff_XMM9_Qa;
  *(undefined8 *)(in_RAX + -0x40) = unaff_XMM9_Qb;
  *(undefined8 *)(in_RAX + -0x58) = unaff_XMM10_Qa;
  *(undefined8 *)(in_RAX + -0x50) = unaff_XMM10_Qb;
  do {
    uVar20 = *unaff_RBX + *unaff_RSI;
    uVar19 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    sVar1 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
    sVar2 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
    fVar23 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    sVar3 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
    sVar4 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
    *unaff_RBX = uVar20;
    uVar21 = *unaff_RSI + uVar20;
    uVar19 = (int)(uVar20 >> 0x20) * 2;
    sVar5 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
    sVar6 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
    fVar22 = (float)(uVar20 & 0xffffffff) * unaff_XMM12_Da;
    sVar7 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
    sVar8 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
    *unaff_RBX = uVar21;
    iVar17 = (int)(uVar21 >> 0x20);
    uVar19 = iVar17 * 2;
    fVar24 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
    sVar9 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
    sVar10 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
    uVar21 = *unaff_RSI + uVar21;
    iVar17 = iVar17 * 2;
    sVar11 = *(short *)(in_R10 + (ulonglong)(iVar17 + 1) * 2);
    sVar12 = *(short *)(in_R10 + (ulonglong)(iVar17 + 3) * 2);
    *unaff_RBX = uVar21;
    uVar19 = (int)(uVar21 >> 0x20) * 2;
    sVar13 = *(short *)(in_R10 + (ulonglong)uVar19 * 2);
    sVar14 = *(short *)(in_R10 + (ulonglong)(uVar19 + 2) * 2);
    fVar25 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
    sVar15 = *(short *)(in_R10 + (ulonglong)(uVar19 + 1) * 2);
    sVar16 = *(short *)(in_R10 + (ulonglong)(uVar19 + 3) * 2);
    *unaff_RBX = *unaff_RSI + uVar21;
    *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar23 +
              (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23);
    in_R11[1] = (float)(int)sVar3 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23) +
                (float)(int)sVar4 * unaff_XMM11_Da * fVar23;
    in_R11[2] = (float)(int)sVar6 * unaff_XMM11_Da * fVar22 +
                (float)(int)sVar5 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R11[3] = (float)(int)sVar7 * unaff_XMM11_Da * fVar22 +
                (float)(int)sVar8 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R11[4] = (float)(int)sVar10 * unaff_XMM11_Da * fVar24 +
                (float)(int)sVar9 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24);
    in_R11[5] = (float)(int)sVar11 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24) +
                (float)(int)sVar12 * unaff_XMM11_Da * fVar24;
    in_R11[6] = (float)(int)sVar14 * unaff_XMM11_Da * fVar25 +
                (float)(int)sVar13 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25);
    in_R11[7] = (float)(int)sVar15 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25) +
                (float)(int)sVar16 * unaff_XMM11_Da * fVar25;
    in_R11 = in_R11 + 8;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  for (uVar19 = unaff_EDI & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    uVar18 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    sVar1 = *(short *)(in_R10 + (ulonglong)uVar18 * 2);
    fVar22 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    sVar2 = *(short *)(in_R10 + (ulonglong)(uVar18 + 2) * 2);
    in_R11[1] = (float)(int)*(short *)(in_R10 + (ulonglong)(uVar18 + 1) * 2) * unaff_XMM11_Da *
                (unaff_XMM13_Da - fVar22) +
                (float)(int)*(short *)(in_R10 + (ulonglong)(uVar18 + 3) * 2) * unaff_XMM11_Da *
                fVar22;
    *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar22 +
              (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R11 = in_R11 + 2;
    *unaff_RBX = *unaff_RBX + *unaff_RSI;
  }
  return;
}





// 函数: void FUN_180832ec9(void)
void FUN_180832ec9(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint *unaff_RBX;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar4;
  longlong in_R10;
  float *in_R11;
  float fVar5;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  for (uVar4 = unaff_EDI & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = unaff_RBX[1] * 2;
    sVar1 = *(short *)(in_R10 + (ulonglong)uVar3 * 2);
    fVar5 = (float)*unaff_RBX * unaff_XMM12_Da;
    sVar2 = *(short *)(in_R10 + (ulonglong)(uVar3 + 2) * 2);
    in_R11[1] = (float)(int)*(short *)(in_R10 + (ulonglong)(uVar3 + 1) * 2) * unaff_XMM11_Da *
                (unaff_XMM13_Da - fVar5) +
                (float)(int)*(short *)(in_R10 + (ulonglong)(uVar3 + 3) * 2) * unaff_XMM11_Da * fVar5
    ;
    *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar5 +
              (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar5);
    in_R11 = in_R11 + 2;
    *(longlong *)unaff_RBX = *(longlong *)unaff_RBX + *unaff_RSI;
  }
  return;
}






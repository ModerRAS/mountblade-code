/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part228.c - 8 个函数

// 函数: void FUN_18079ae50(int64_t param_1,float param_2)
void FUN_18079ae50(int64_t param_1,float param_2)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController((param_2 * 6.2831855) / (float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0));
}





// 函数: void FUN_18079af30(uint64_t param_1,float param_2,int param_3)
void FUN_18079af30(uint64_t param_1,float param_2,int param_3)

{
  float fVar1;
  
  param_2 = (2.0 / (float)param_3) * param_2;
  fVar1 = 0.001;
  if ((0.001 <= param_2) && (fVar1 = param_2, 0.999 <= param_2)) {
    fVar1 = 0.999;
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemController(fVar1 * 3.1415927);
}



uint64_t FUN_18079b400(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = (*(code *)**(uint64_t **)(param_1 + 0x28))(0x220,0,&processed_var_4528_ptr);
  *(int64_t *)(param_1 + 8) = lVar1;
  if (lVar1 == 0) {
    return 0x26;
  }
                    // WARNING: Subroutine does not return
  memset(lVar1,0,0x220);
}



uint64_t FUN_18079b4c0(int64_t param_1,int param_2,float *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  if (param_2 == 1) {
    fVar2 = *(float *)(lVar1 + 4);
  }
  else if (param_2 == 2) {
    fVar2 = *(float *)(lVar1 + 8);
  }
  else if (param_2 == 3) {
    fVar2 = *(float *)(lVar1 + 0xc);
  }
  else if (param_2 == 5) {
    fVar2 = *(float *)(lVar1 + 0x18);
  }
  else if (param_2 == 6) {
    fVar2 = *(float *)(lVar1 + 0x1c);
  }
  else if (param_2 == 7) {
    fVar2 = *(float *)(lVar1 + 0x20);
  }
  else if (param_2 == 9) {
    fVar2 = *(float *)(lVar1 + 0x2c);
  }
  else if (param_2 == 10) {
    fVar2 = *(float *)(lVar1 + 0x30);
  }
  else if (param_2 == 0xb) {
    fVar2 = *(float *)(lVar1 + 0x34);
  }
  else if (param_2 == 0xd) {
    fVar2 = *(float *)(lVar1 + 0x40);
  }
  else if (param_2 == 0xe) {
    fVar2 = *(float *)(lVar1 + 0x44);
  }
  else if (param_2 == 0xf) {
    fVar2 = *(float *)(lVar1 + 0x48);
  }
  else if (param_2 == 0x11) {
    fVar2 = *(float *)(lVar1 + 0x54);
  }
  else if (param_2 == 0x12) {
    fVar2 = *(float *)(lVar1 + 0x58);
  }
  else {
    if (param_2 != 0x13) goto LAB_18079b568;
    fVar2 = *(float *)(lVar1 + 0x5c);
  }
  *param_3 = fVar2;
LAB_18079b568:
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(param_4,0x20,&rendering_buffer_2048_ptr,(double)*param_3);
  }
  return 0;
}



uint64_t FUN_18079b5a0(int64_t param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 8);
  if (param_2 == 0) {
    uVar2 = *puVar1;
  }
  else if (param_2 == 4) {
    uVar2 = puVar1[5];
  }
  else if (param_2 == 8) {
    uVar2 = puVar1[10];
  }
  else if (param_2 == 0xc) {
    uVar2 = puVar1[0xf];
  }
  else {
    if (param_2 != 0x10) goto LAB_18079b5dc;
    uVar2 = puVar1[0x14];
  }
  *param_3 = uVar2;
LAB_18079b5dc:
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(param_4,0x20,&processed_var_4576_ptr,*param_3);
  }
  return 0;
}



uint64_t
FUN_18079b600(int64_t param_1,int32_t param_2,int64_t param_3,int64_t param_4,int param_5,
             int param_6)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t lVar5;
  int *piVar6;
  int *piVar7;
  uint64_t uVar8;
  
  piVar4 = *(int **)(param_1 + 8);
  if (param_6 == 1) {
    if ((param_5 != 0) ||
       (piVar4[0x14] == 0 &&
        (piVar4[0xf] == 0 && (piVar4[10] == 0 && (piVar4[5] == 0 && *piVar4 == 0))))) {
      return 6;
    }
  }
  else {
    uVar1 = **(int32_t **)(param_3 + 8);
    uVar8 = **(uint64_t **)(param_3 + 0x18);
    uVar2 = **(uint64_t **)(param_4 + 0x18);
    uVar3 = FUN_18079cfc0(param_1,uVar1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar5 = 5;
    piVar6 = piVar4 + 0x21;
    piVar7 = piVar4 + 0x2c;
    do {
      if (*piVar4 != 0) {
        (**(code **)(piVar7 + -0x12))
                  (uVar8,uVar2,param_2,piVar6 + -5,piVar6,*(uint64_t *)piVar7,uVar1);
        piVar7[-0x10] = piVar7[-6];
        piVar7[-0xf] = piVar7[-5];
        piVar7[-0xe] = piVar7[-4];
        piVar7[-0xd] = piVar7[-3];
        piVar7[-0xc] = piVar7[-2];
        piVar6[0] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[4] = 0;
        uVar8 = uVar2;
      }
      piVar6 = piVar6 + 0x16;
      piVar4 = piVar4 + 5;
      piVar7 = piVar7 + 0x16;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}



uint64_t FUN_18079b69f(void)

{
  int in_EAX;
  int *unaff_RBX;
  uint64_t uVar1;
  int *piVar2;
  int *piVar3;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t uStack0000000000000028;
  
  uVar1 = (uint64_t)(in_EAX + 5);
  piVar2 = unaff_RBX + 0x21;
  piVar3 = unaff_RBX + 0x2c;
  do {
    if (*unaff_RBX != 0) {
      uStack0000000000000028 = *(uint64_t *)piVar3;
      (**(code **)(piVar3 + -0x12))(unaff_R12);
      piVar3[-0x10] = piVar3[-6];
      piVar3[-0xf] = piVar3[-5];
      piVar3[-0xe] = piVar3[-4];
      piVar3[-0xd] = piVar3[-3];
      piVar3[-0xc] = piVar3[-2];
      piVar2[0] = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      unaff_R12 = unaff_R14;
    }
    piVar2 = piVar2 + 0x16;
    unaff_RBX = unaff_RBX + 5;
    piVar3 = piVar3 + 0x16;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return 0;
}



uint64_t FUN_18079b72a(void)

{
  return 0;
}





// 函数: void FUN_18079b740(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
void FUN_18079b740(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int64_t lVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar1 = param_4[4];
  fVar21 = 0.0;
  fVar2 = param_4[3];
  fVar3 = param_4[2];
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar4 = *param_4;
  fVar5 = *param_5;
  fVar6 = param_5[1];
  fVar7 = param_5[2];
  fVar8 = param_5[3];
  fVar9 = param_5[4];
  lVar12 = (int64_t)param_7;
  fVar10 = param_4[1];
  if (param_7 == 1) {
    fVar18 = *param_6;
    fVar20 = param_6[1];
    if (param_3 != 0) {
      lVar12 = (int64_t)param_2 - (int64_t)param_1;
      do {
        fVar22 = *param_1;
        fVar16 = fVar21 + fVar4;
        fVar21 = fVar21 + fVar5;
        fVar17 = fVar16 * fVar22 + fVar18;
        *(float *)(lVar12 + (int64_t)param_1) = fVar17;
        param_1 = param_1 + 1;
        fVar16 = fVar26 + fVar1;
        fVar26 = fVar26 + fVar9;
        fVar18 = ((fVar23 + fVar10) * fVar22 - (fVar25 + fVar2) * fVar17) + fVar20;
        fVar20 = fVar24 + fVar3;
        fVar24 = fVar24 + fVar7;
        fVar20 = fVar20 * fVar22 - fVar16 * fVar17;
        param_3 = param_3 + -1;
        fVar23 = fVar23 + fVar6;
        fVar25 = fVar25 + fVar8;
      } while (param_3 != 0);
    }
    *param_6 = fVar18;
    param_6[1] = fVar20;
  }
  else if (param_3 != 0) {
    do {
      lVar15 = 0;
      if (3 < lVar12) {
        fVar22 = fVar25 + fVar2;
        lVar14 = (lVar12 - 4U >> 2) + 1;
        pfVar13 = param_6 + 0x11;
        fVar16 = fVar24 + fVar3;
        fVar18 = fVar21 + fVar4;
        lVar15 = lVar14 * 4;
        fVar20 = fVar23 + fVar10;
        fVar17 = fVar26 + fVar1;
        do {
          fVar11 = *param_1;
          fVar19 = fVar18 * fVar11 + pfVar13[-0x11];
          pfVar13[-0x11] = (fVar20 * fVar11 - fVar22 * fVar19) + pfVar13[-0x10];
          pfVar13[-0x10] = fVar16 * fVar11 - fVar17 * fVar19;
          *param_2 = fVar19;
          fVar11 = param_1[1];
          fVar19 = fVar18 * fVar11 + pfVar13[-9];
          pfVar13[-9] = (fVar20 * fVar11 - fVar22 * fVar19) + pfVar13[-8];
          pfVar13[-8] = fVar16 * fVar11 - fVar17 * fVar19;
          param_2[1] = fVar19;
          fVar11 = param_1[2];
          fVar19 = fVar18 * fVar11 + pfVar13[-1];
          pfVar13[-1] = (fVar20 * fVar11 - fVar22 * fVar19) + *pfVar13;
          *pfVar13 = fVar16 * fVar11 - fVar17 * fVar19;
          param_2[2] = fVar19;
          fVar11 = param_1[3];
          param_1 = param_1 + 4;
          fVar19 = fVar18 * fVar11 + pfVar13[7];
          pfVar13[7] = (fVar20 * fVar11 - fVar22 * fVar19) + pfVar13[8];
          pfVar13[8] = fVar16 * fVar11 - fVar17 * fVar19;
          pfVar13 = pfVar13 + 0x20;
          param_2[3] = fVar19;
          param_2 = param_2 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar15 < lVar12) {
        pfVar13 = param_6 + lVar15 * 8;
        lVar15 = lVar12 - lVar15;
        do {
          fVar18 = *param_1;
          param_1 = param_1 + 1;
          fVar20 = (fVar21 + fVar4) * fVar18 + *pfVar13;
          *pfVar13 = ((fVar23 + fVar10) * fVar18 - (fVar25 + fVar2) * fVar20) + pfVar13[1];
          pfVar13[1] = (fVar24 + fVar3) * fVar18 - (fVar26 + fVar1) * fVar20;
          pfVar13 = pfVar13 + 8;
          *param_2 = fVar20;
          param_2 = param_2 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      fVar21 = fVar21 + fVar5;
      fVar23 = fVar23 + fVar6;
      fVar24 = fVar24 + fVar7;
      fVar25 = fVar25 + fVar8;
      fVar26 = fVar26 + fVar9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_18079b8ed(float param_1,float param_2,float param_3,float param_4)
void FUN_18079b8ed(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float *in_RCX;
  float *in_RDX;
  int64_t lVar3;
  int64_t lVar4;
  int in_R10D;
  int64_t in_R11;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  float in_XMM5_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float fVar9;
  float unaff_XMM9_Da;
  float fVar10;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float unaff_retaddr;
  float unaff_retaddr_00;
  float fStackX_8;
  float in_stack_000000c0;
  float in_stack_000000c8;
  float in_stack_000000d0;
  float in_stack_000000d8;
  float in_stack_000000e0;
  int64_t in_stack_000000e8;
  
  do {
    lVar4 = 0;
    if (3 < in_R11) {
      fVar8 = unaff_XMM12_Da + unaff_XMM8_Da;
      lVar3 = (in_R11 - 4U >> 2) + 1;
      pfVar2 = (float *)(in_stack_000000e8 + 0x44);
      fVar9 = unaff_XMM11_Da + unaff_XMM9_Da;
      fVar6 = in_XMM5_Da + unaff_XMM14_Da;
      lVar4 = lVar3 * 4;
      fVar7 = unaff_XMM10_Da + unaff_XMM15_Da;
      fVar10 = unaff_XMM13_Da + param_1;
      do {
        fVar1 = *in_RCX;
        fVar5 = fVar6 * fVar1 + pfVar2[-0x11];
        pfVar2[-0x11] = (fVar7 * fVar1 - fVar8 * fVar5) + pfVar2[-0x10];
        pfVar2[-0x10] = fVar9 * fVar1 - fVar10 * fVar5;
        *in_RDX = fVar5;
        fVar1 = in_RCX[1];
        fVar5 = fVar6 * fVar1 + pfVar2[-9];
        pfVar2[-9] = (fVar7 * fVar1 - fVar8 * fVar5) + pfVar2[-8];
        pfVar2[-8] = fVar9 * fVar1 - fVar10 * fVar5;
        in_RDX[1] = fVar5;
        fVar1 = in_RCX[2];
        fVar5 = fVar6 * fVar1 + pfVar2[-1];
        pfVar2[-1] = (fVar7 * fVar1 - fVar8 * fVar5) + *pfVar2;
        *pfVar2 = fVar9 * fVar1 - fVar10 * fVar5;
        in_RDX[2] = fVar5;
        fVar1 = in_RCX[3];
        in_RCX = in_RCX + 4;
        fVar5 = fVar6 * fVar1 + pfVar2[7];
        pfVar2[7] = (fVar7 * fVar1 - fVar8 * fVar5) + pfVar2[8];
        pfVar2[8] = fVar9 * fVar1 - fVar10 * fVar5;
        pfVar2 = pfVar2 + 0x20;
        in_RDX[3] = fVar5;
        in_RDX = in_RDX + 4;
        lVar3 = lVar3 + -1;
        param_1 = in_stack_000000d8;
        param_2 = in_stack_000000d0;
        param_3 = in_stack_000000e0;
        param_4 = in_stack_000000c0;
        in_XMM4_Da = in_stack_000000c8;
        unaff_XMM7_Da = unaff_retaddr;
        unaff_XMM8_Da = fStackX_8;
        unaff_XMM9_Da = unaff_retaddr_00;
      } while (lVar3 != 0);
    }
    if (lVar4 < in_R11) {
      pfVar2 = (float *)(lVar4 * 0x20 + in_stack_000000e8);
      lVar4 = in_R11 - lVar4;
      do {
        fVar6 = *in_RCX;
        in_RCX = in_RCX + 1;
        fVar7 = (in_XMM5_Da + unaff_XMM14_Da) * fVar6 + *pfVar2;
        *pfVar2 = ((unaff_XMM10_Da + unaff_XMM15_Da) * fVar6 -
                  (unaff_XMM12_Da + unaff_XMM8_Da) * fVar7) + pfVar2[1];
        pfVar2[1] = (unaff_XMM11_Da + unaff_XMM9_Da) * fVar6 - (unaff_XMM13_Da + param_1) * fVar7;
        pfVar2 = pfVar2 + 8;
        *in_RDX = fVar7;
        in_RDX = in_RDX + 1;
        lVar4 = lVar4 + -1;
        param_2 = in_stack_000000d0;
        param_3 = in_stack_000000e0;
        param_4 = in_stack_000000c0;
        in_XMM4_Da = in_stack_000000c8;
        unaff_XMM7_Da = unaff_retaddr;
      } while (lVar4 != 0);
    }
    in_XMM5_Da = in_XMM5_Da + unaff_XMM7_Da;
    unaff_XMM10_Da = unaff_XMM10_Da + param_2;
    unaff_XMM11_Da = unaff_XMM11_Da + param_3;
    unaff_XMM12_Da = unaff_XMM12_Da + param_4;
    unaff_XMM13_Da = unaff_XMM13_Da + in_XMM4_Da;
    in_R10D = in_R10D + -1;
    param_1 = in_stack_000000d8;
    unaff_XMM8_Da = fStackX_8;
    unaff_XMM9_Da = unaff_retaddr_00;
  } while (in_R10D != 0);
  return;
}





// 函数: void FUN_18079bbd6(void)
void FUN_18079bbd6(void)

{
  return;
}





// 函数: void FUN_18079bc20(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
void FUN_18079bc20(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar22 = 0.0;
  fVar5 = param_4[4];
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar6 = *param_5;
  fVar7 = param_5[1];
  fVar8 = param_5[2];
  fVar9 = param_5[3];
  fVar10 = param_5[4];
  lVar11 = (int64_t)(int)param_7;
  if (param_7 == 1.4013e-45) {
    fVar15 = param_6[3];
    fVar21 = *param_6;
    fVar27 = param_6[1];
    fVar20 = param_6[2];
    if (param_3 != 0) {
      lVar11 = (int64_t)param_2 - (int64_t)param_1;
      param_7 = fVar15;
      do {
        fVar15 = *param_1;
        fVar17 = fVar26 + fVar5;
        fVar26 = fVar26 + fVar10;
        fVar16 = fVar24 + fVar3;
        fVar18 = fVar25 + fVar4;
        fVar24 = fVar24 + fVar8;
        fVar25 = fVar25 + fVar9;
        fVar19 = (fVar22 + fVar1) * fVar15 + fVar21;
        fVar20 = (fVar22 + fVar1) * fVar19 + fVar20;
        fVar21 = ((fVar23 + fVar2) * fVar15 - fVar18 * fVar19) + fVar27;
        fVar27 = fVar16 * fVar15 - fVar17 * fVar19;
        *(float *)(lVar11 + (int64_t)param_1) = fVar20;
        param_1 = param_1 + 1;
        fVar15 = fVar16 * fVar19 - fVar17 * fVar20;
        fVar20 = ((fVar23 + fVar2) * fVar19 - fVar18 * fVar20) + param_7;
        param_3 = param_3 + -1;
        fVar22 = fVar22 + fVar6;
        fVar23 = fVar23 + fVar7;
        param_7 = fVar15;
      } while (param_3 != 0);
    }
    *param_6 = fVar21;
    param_6[1] = fVar27;
    param_6[2] = fVar20;
    param_6[3] = fVar15;
  }
  else if (param_3 != 0) {
    do {
      lVar13 = 0;
      if (3 < lVar11) {
        fVar15 = fVar22 + fVar1;
        lVar14 = (lVar11 - 4U >> 2) + 1;
        pfVar12 = param_6 + 10;
        fVar21 = fVar23 + fVar2;
        fVar27 = fVar25 + fVar4;
        lVar13 = lVar14 * 4;
        fVar20 = fVar24 + fVar3;
        fVar16 = fVar26 + fVar5;
        do {
          fVar17 = *param_1;
          fVar18 = fVar15 * fVar17 + pfVar12[-10];
          pfVar12[-10] = (fVar21 * fVar17 - fVar27 * fVar18) + pfVar12[-9];
          pfVar12[-9] = fVar20 * fVar17 - fVar16 * fVar18;
          fVar17 = fVar15 * fVar18 + pfVar12[-8];
          pfVar12[-8] = (fVar21 * fVar18 - fVar27 * fVar17) + pfVar12[-7];
          pfVar12[-7] = fVar20 * fVar18 - fVar16 * fVar17;
          *param_2 = fVar17;
          fVar17 = param_1[1];
          fVar18 = fVar15 * fVar17 + pfVar12[-2];
          pfVar12[-2] = (fVar21 * fVar17 - fVar27 * fVar18) + pfVar12[-1];
          pfVar12[-1] = fVar20 * fVar17 - fVar16 * fVar18;
          fVar17 = fVar15 * fVar18 + *pfVar12;
          *pfVar12 = (fVar21 * fVar18 - fVar27 * fVar17) + pfVar12[1];
          pfVar12[1] = fVar20 * fVar18 - fVar16 * fVar17;
          param_2[1] = fVar17;
          fVar17 = param_1[2];
          fVar18 = fVar15 * fVar17 + pfVar12[6];
          pfVar12[6] = (fVar21 * fVar17 - fVar27 * fVar18) + pfVar12[7];
          pfVar12[7] = fVar20 * fVar17 - fVar16 * fVar18;
          fVar17 = fVar15 * fVar18 + pfVar12[8];
          pfVar12[8] = (fVar21 * fVar18 - fVar27 * fVar17) + pfVar12[9];
          pfVar12[9] = fVar20 * fVar18 - fVar16 * fVar17;
          param_2[2] = fVar17;
          fVar17 = param_1[3];
          param_1 = param_1 + 4;
          fVar18 = fVar15 * fVar17 + pfVar12[0xe];
          pfVar12[0xe] = (fVar21 * fVar17 - fVar27 * fVar18) + pfVar12[0xf];
          pfVar12[0xf] = fVar20 * fVar17 - fVar16 * fVar18;
          fVar17 = fVar15 * fVar18 + pfVar12[0x10];
          pfVar12[0x10] = (fVar21 * fVar18 - fVar27 * fVar17) + pfVar12[0x11];
          pfVar12[0x11] = fVar20 * fVar18 - fVar16 * fVar17;
          pfVar12 = pfVar12 + 0x20;
          param_2[3] = fVar17;
          param_2 = param_2 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar13 < lVar11) {
        pfVar12 = param_6 + lVar13 * 8 + 2;
        lVar13 = lVar11 - lVar13;
        do {
          fVar15 = *param_1;
          param_1 = param_1 + 1;
          fVar27 = (fVar22 + fVar1) * fVar15 + pfVar12[-2];
          pfVar12[-2] = ((fVar23 + fVar2) * fVar15 - (fVar25 + fVar4) * fVar27) + pfVar12[-1];
          fVar21 = (fVar22 + fVar1) * fVar27 + *pfVar12;
          pfVar12[-1] = (fVar24 + fVar3) * fVar15 - (fVar26 + fVar5) * fVar27;
          *pfVar12 = ((fVar23 + fVar2) * fVar27 - (fVar25 + fVar4) * fVar21) + pfVar12[1];
          pfVar12[1] = (fVar24 + fVar3) * fVar27 - (fVar26 + fVar5) * fVar21;
          pfVar12 = pfVar12 + 8;
          *param_2 = fVar21;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      fVar22 = fVar22 + fVar6;
      fVar23 = fVar23 + fVar7;
      fVar24 = fVar24 + fVar8;
      fVar25 = fVar25 + fVar9;
      fVar26 = fVar26 + fVar10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_18079be68(float param_1,float param_2,float param_3,float param_4)
void FUN_18079be68(float param_1,float param_2,float param_3,float param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  float *pfVar3;
  float *in_RDX;
  int64_t in_R9;
  float *in_R10;
  int in_R11D;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  float in_XMM5_Da;
  float fVar7;
  float unaff_XMM6_Da;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float unaff_retaddr;
  float unaff_retaddr_00;
  float fStackX_8;
  float in_stack_000000d0;
  float in_stack_000000d8;
  float in_stack_000000e0;
  float in_stack_000000e8;
  float in_stack_000000f0;
  int64_t in_stack_000000f8;
  
  do {
    lVar1 = 0;
    if (3 < in_R9) {
      fVar6 = unaff_XMM9_Da + param_2;
      lVar2 = (in_R9 - 4U >> 2) + 1;
      pfVar3 = (float *)(in_stack_000000f8 + 0x28);
      fVar7 = unaff_XMM11_Da + param_3;
      fVar8 = unaff_XMM13_Da + param_4;
      lVar1 = lVar2 * 4;
      fVar9 = unaff_XMM12_Da + param_1;
      fVar10 = unaff_XMM14_Da + unaff_XMM10_Da;
      do {
        fVar4 = *in_R10;
        fVar5 = fVar6 * fVar4 + pfVar3[-10];
        pfVar3[-10] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[-9];
        pfVar3[-9] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[-8];
        pfVar3[-8] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[-7];
        pfVar3[-7] = fVar9 * fVar5 - fVar10 * fVar4;
        *in_RDX = fVar4;
        fVar4 = in_R10[1];
        fVar5 = fVar6 * fVar4 + pfVar3[-2];
        pfVar3[-2] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[-1];
        pfVar3[-1] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + *pfVar3;
        *pfVar3 = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[1];
        pfVar3[1] = fVar9 * fVar5 - fVar10 * fVar4;
        in_RDX[1] = fVar4;
        fVar4 = in_R10[2];
        fVar5 = fVar6 * fVar4 + pfVar3[6];
        pfVar3[6] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[7];
        pfVar3[7] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[8];
        pfVar3[8] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[9];
        pfVar3[9] = fVar9 * fVar5 - fVar10 * fVar4;
        in_RDX[2] = fVar4;
        fVar4 = in_R10[3];
        in_R10 = in_R10 + 4;
        fVar5 = fVar6 * fVar4 + pfVar3[0xe];
        pfVar3[0xe] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[0xf];
        pfVar3[0xf] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[0x10];
        pfVar3[0x10] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[0x11];
        pfVar3[0x11] = fVar9 * fVar5 - fVar10 * fVar4;
        pfVar3 = pfVar3 + 0x20;
        in_RDX[3] = fVar4;
        in_RDX = in_RDX + 4;
        lVar2 = lVar2 + -1;
        param_1 = unaff_retaddr_00;
        param_2 = in_stack_000000e8;
        param_3 = unaff_retaddr;
        param_4 = fStackX_8;
        in_XMM4_Da = in_stack_000000e0;
        in_XMM5_Da = in_stack_000000f0;
        unaff_XMM6_Da = in_stack_000000d0;
        unaff_XMM7_Da = in_stack_000000d8;
      } while (lVar2 != 0);
    }
    if (lVar1 < in_R9) {
      pfVar3 = (float *)(in_stack_000000f8 + 8 + lVar1 * 0x20);
      lVar1 = in_R9 - lVar1;
      do {
        fVar6 = *in_R10;
        in_R10 = in_R10 + 1;
        fVar8 = (unaff_XMM9_Da + param_2) * fVar6 + pfVar3[-2];
        pfVar3[-2] = ((unaff_XMM11_Da + param_3) * fVar6 - (unaff_XMM13_Da + param_4) * fVar8) +
                     pfVar3[-1];
        fVar7 = (unaff_XMM9_Da + param_2) * fVar8 + *pfVar3;
        pfVar3[-1] = (unaff_XMM12_Da + param_1) * fVar6 - (unaff_XMM14_Da + unaff_XMM10_Da) * fVar8;
        *pfVar3 = ((unaff_XMM11_Da + param_3) * fVar8 - (unaff_XMM13_Da + param_4) * fVar7) +
                  pfVar3[1];
        pfVar3[1] = (unaff_XMM12_Da + param_1) * fVar8 - (unaff_XMM14_Da + unaff_XMM10_Da) * fVar7;
        pfVar3 = pfVar3 + 8;
        *in_RDX = fVar7;
        in_RDX = in_RDX + 1;
        lVar1 = lVar1 + -1;
        in_XMM4_Da = in_stack_000000e0;
        in_XMM5_Da = in_stack_000000f0;
        unaff_XMM6_Da = in_stack_000000d0;
        unaff_XMM7_Da = in_stack_000000d8;
      } while (lVar1 != 0);
    }
    unaff_XMM9_Da = unaff_XMM9_Da + unaff_XMM15_Da;
    unaff_XMM11_Da = unaff_XMM11_Da + in_XMM4_Da;
    unaff_XMM12_Da = unaff_XMM12_Da + in_XMM5_Da;
    unaff_XMM13_Da = unaff_XMM13_Da + unaff_XMM6_Da;
    unaff_XMM14_Da = unaff_XMM14_Da + unaff_XMM7_Da;
    in_R11D = in_R11D + -1;
    param_1 = unaff_retaddr_00;
    param_2 = in_stack_000000e8;
    param_3 = unaff_retaddr;
    param_4 = fStackX_8;
  } while (in_R11D != 0);
  return;
}





// 函数: void FUN_18079c298(void)
void FUN_18079c298(void)

{
  return;
}






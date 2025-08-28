/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part020.c - 11 个函数

// 函数: void FUN_1807d7c6f(void)
void FUN_1807d7c6f(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  int64_t lVar13;
  uint uVar14;
  uint uVar15;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  uint uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t unaff_R14;
  uint64_t uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  int in_stack_00000038;
  
  uVar15 = *(uint *)(unaff_RSI + 4);
  lVar19 = (int64_t)(int)uVar15;
  uVar14 = (uint)unaff_RBX;
  uVar17 = unaff_RBX & 0xffffffff;
  uVar16 = uVar14;
  if ((0 < (int)uVar15) && (7 < uVar15)) {
    lVar21 = *(int64_t *)(unaff_RSI + 8);
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    uVar12 = uVar15 & 0x80000007;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
    }
    lVar20 = 0x28;
    uVar22 = unaff_RBX;
    do {
      uVar16 = (int)uVar17 + 8;
      uVar17 = (uint64_t)uVar16;
      uVar22 = uVar22 + 8;
      fVar4 = *(float *)((int64_t)unaff_RBP +
                        (int64_t)*(int *)(lVar20 + 0x14 + lVar21) * 4 + -0x80);
      fVar5 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar21 + lVar20) * 4 + -0x80);
      fVar6 = *(float *)((int64_t)unaff_RBP +
                        (int64_t)*(int *)(lVar20 + -0x14 + lVar21) * 4 + -0x80);
      fVar7 = *(float *)((int64_t)unaff_RBP +
                        (int64_t)*(int *)(lVar20 + -0x28 + lVar21) * 4 + -0x80);
      lVar13 = lVar20 + 100;
      lVar18 = lVar20 + 0x50;
      lVar1 = lVar20 + 0x3c;
      lVar2 = lVar20 + 0x28;
      lVar20 = lVar20 + 0xa0;
      fVar8 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar18 + lVar21) * 4 + -0x80);
      fVar9 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar13 + lVar21) * 4 + -0x80);
      fVar10 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar1 + lVar21) * 4 + -0x80);
      fVar23 = fVar23 + fVar7 * fVar7;
      fVar24 = fVar24 + fVar6 * fVar6;
      fVar25 = fVar25 + fVar5 * fVar5;
      fVar26 = fVar26 + fVar4 * fVar4;
      fVar4 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar2 + lVar21) * 4 + -0x80);
      fVar27 = fVar27 + fVar4 * fVar4;
      fVar28 = fVar28 + fVar10 * fVar10;
      fVar29 = fVar29 + fVar8 * fVar8;
      fVar30 = fVar30 + fVar9 * fVar9;
    } while ((int64_t)uVar22 < (int64_t)(int)(uVar15 - uVar12));
    unaff_XMM9_Da = fVar25 + fVar29 + fVar23 + fVar27 + fVar26 + fVar30 + fVar24 + fVar28;
  }
  lVar21 = (int64_t)(int)uVar16;
  if (lVar21 < lVar19) {
    if (3 < lVar19 - lVar21) {
      lVar20 = *(int64_t *)(unaff_RSI + 8);
      lVar13 = lVar21 * 0x14;
      lVar18 = ((lVar19 - lVar21) - 4U >> 2) + 1;
      lVar21 = lVar21 + lVar18 * 4;
      do {
        fVar23 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar13 + lVar20) * 4 + -0x80);
        fVar24 = *(float *)((int64_t)unaff_RBP +
                           (int64_t)*(int *)(lVar13 + 0x14 + lVar20) * 4 + -0x80);
        fVar25 = *(float *)((int64_t)unaff_RBP +
                           (int64_t)*(int *)(lVar20 + 0x28 + lVar13) * 4 + -0x80);
        piVar3 = (int *)(lVar20 + 0x3c + lVar13);
        lVar13 = lVar13 + 0x50;
        fVar26 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar3 * 4 + -0x80);
        unaff_XMM9_Da =
             unaff_XMM9_Da + fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (lVar21 < lVar19) {
      lVar20 = lVar21 * 0x14;
      lVar19 = lVar19 - lVar21;
      do {
        piVar3 = (int *)(*(int64_t *)(unaff_RSI + 8) + lVar20);
        lVar20 = lVar20 + 0x14;
        fVar23 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar3 * 4 + -0x80);
        unaff_XMM9_Da = unaff_XMM9_Da + fVar23 * fVar23;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  if (((double)unaff_XMM9_Da < unaff_XMM6_Qa) || (unaff_XMM7_Qa < (double)unaff_XMM9_Da)) {
    unaff_XMM14_Da = unaff_XMM14_Da / SQRT(unaff_XMM9_Da);
  }
  if (((double)unaff_XMM14_Da < unaff_XMM6_Qa) || (unaff_XMM7_Qa < (double)unaff_XMM14_Da)) {
    uVar17 = unaff_RBX;
    if ((int)uVar14 < *(int *)(unaff_RSI + 4)) {
      do {
        uVar15 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar15;
        iVar11 = *(int *)(uVar17 + *(int64_t *)(unaff_RSI + 8));
        lVar19 = (int64_t)(in_stack_00000038 * iVar11);
        *(float *)(unaff_R14 + lVar19 * 4) =
             unaff_XMM14_Da * *(float *)((int64_t)unaff_RBP + (int64_t)iVar11 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar19 * 4);
        uVar17 = uVar17 + 0x14;
      } while ((int)uVar15 < *(int *)(unaff_RSI + 4));
    }
  }
  else {
    uVar17 = unaff_RBX;
    if ((int)uVar14 < *(int *)(unaff_RSI + 4)) {
      do {
        uVar15 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar15;
        iVar11 = *(int *)(uVar17 + *(int64_t *)(unaff_RSI + 8));
        lVar19 = (int64_t)(in_stack_00000038 * iVar11);
        *(float *)(unaff_R14 + lVar19 * 4) =
             *(float *)((int64_t)unaff_RBP + (int64_t)iVar11 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar19 * 4);
        uVar17 = uVar17 + 0x14;
      } while ((int)uVar15 < *(int *)(unaff_RSI + 4));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d7e71(double param_1)
void FUN_1807d7e71(double param_1)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar4;
  int64_t unaff_R14;
  double unaff_XMM7_Qa;
  float unaff_XMM14_Da;
  int in_stack_00000038;
  
  if (unaff_XMM7_Qa < param_1) {
    uVar4 = unaff_RBX;
    if ((int)unaff_RBX < *(int *)(unaff_RSI + 4)) {
      do {
        uVar3 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar3;
        iVar1 = *(int *)(uVar4 + *(int64_t *)(unaff_RSI + 8));
        lVar2 = (int64_t)(in_stack_00000038 * iVar1);
        *(float *)(unaff_R14 + lVar2 * 4) =
             unaff_XMM14_Da * *(float *)((int64_t)unaff_RBP + (int64_t)iVar1 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar2 * 4);
        uVar4 = uVar4 + 0x14;
      } while ((int)uVar3 < *(int *)(unaff_RSI + 4));
    }
  }
  else {
    uVar4 = unaff_RBX;
    if ((int)unaff_RBX < *(int *)(unaff_RSI + 4)) {
      do {
        uVar3 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar3;
        iVar1 = *(int *)(uVar4 + *(int64_t *)(unaff_RSI + 8));
        lVar2 = (int64_t)(in_stack_00000038 * iVar1);
        *(float *)(unaff_R14 + lVar2 * 4) =
             *(float *)((int64_t)unaff_RBP + (int64_t)iVar1 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar2 * 4);
        uVar4 = uVar4 + 0x14;
      } while ((int)uVar3 < *(int *)(unaff_RSI + 4));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d8093(void)
void FUN_1807d8093(void)

{
  uint64_t *unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1807d80d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  uint64_t uVar1;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar1 = 0x43;
  }
  else {
    if (*(float *)(param_1 + 3) != 0.0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController(param_4 * 0.017453292);
    }
    uVar1 = FUN_1807d6410();
  }
  return uVar1;
}






// 函数: void FUN_1807d8104(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_1807d8104(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  if (*(float *)(param_1 + 0x18) == 0.0) {
    FUN_1807d6410();
    return;
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemController(param_4 * 0.017453292);
}






// 函数: void FUN_1807d812c(void)
void FUN_1807d812c(void)

{
  return;
}






// 函数: void FUN_1807d8141(void)
void FUN_1807d8141(void)

{
  float in_XMM3_Da;
  
                    // WARNING: Subroutine does not return
  AdvancedSystemController(in_XMM3_Da * 0.017453292);
}



uint64_t FUN_1807d81a6(void)

{
  return 0x43;
}



uint64_t FUN_1807d81b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  uint64_t uVar1;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar1 = 0x43;
  }
  else {
    if (*(float *)(param_1 + 3) != 0.0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController(param_4 * 0.017453292);
    }
    uVar1 = FUN_1807d6410();
  }
  return uVar1;
}



uint64_t FUN_1807d82c0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  *(int64_t *)(param_1 + 200) = param_2;
  *(int64_t *)(param_1 + 0xd0) = param_2 + 8;
  *(int64_t *)(param_1 + 0xd8) = param_2 + 4;
  *(int64_t *)(param_1 + 0xe0) = param_2 + 0x10;
  *(int64_t *)(param_1 + 0xe8) = param_2 + 0x14;
  *(int64_t *)(param_1 + 0xf0) = param_2 + 0xc;
  *(int64_t *)(param_1 + 0x108) = param_3;
  *(int64_t *)(param_1 + 0x110) = param_3 + 4;
  FUN_18081c5b0(param_1 + 200,1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d83b0(uint64_t param_1)
void FUN_1807d83b0(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1632_ptr,0x3e,1);
}



uint64_t FUN_1807d83f0(uint64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int iVar4;
  
  plVar3 = (int64_t *)*param_2;
joined_r0x0001807d840c:
  do {
    if (plVar3 == param_2) {
      return 0;
    }
    plVar1 = (int64_t *)*plVar3;
    *(int64_t **)plVar3[1] = plVar1;
    *(int64_t *)(*plVar3 + 8) = plVar3[1];
    plVar3[1] = (int64_t)plVar3;
    *plVar3 = (int64_t)plVar3;
    if (*(char *)((int64_t)plVar3 + 0x3d) != '\0') {
      for (puVar2 = (uint64_t *)*param_1; puVar2 != param_1; puVar2 = (uint64_t *)*puVar2) {
        iVar4 = func_0x00018076b420(puVar2[4],plVar3[4]);
        if (iVar4 == 0) {
          FUN_1807d8940(puVar2,plVar3[5],(int)plVar3[7]);
          FUN_1807d8890(plVar3);
          plVar3 = plVar1;
          goto joined_r0x0001807d840c;
        }
      }
    }
    plVar3[1] = param_1[1];
    *plVar3 = (int64_t)param_1;
    param_1[1] = plVar3;
    *(int64_t **)plVar3[1] = plVar3;
    plVar3 = plVar1;
  } while( true );
}



uint64_t FUN_1807d8412(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *unaff_RBX;
  uint64_t *unaff_RSI;
  int64_t unaff_R14;
  
  do {
    plVar1 = (int64_t *)*unaff_RBX;
    *(int64_t **)unaff_RBX[1] = plVar1;
    *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
    unaff_RBX[1] = (int64_t)unaff_RBX;
    *unaff_RBX = (int64_t)unaff_RBX;
    if (*(char *)((int64_t)unaff_RBX + 0x3d) != '\0') {
      for (puVar2 = (uint64_t *)*unaff_RSI; puVar2 != unaff_RSI; puVar2 = (uint64_t *)*puVar2) {
        iVar3 = func_0x00018076b420(puVar2[4],unaff_RBX[4]);
        if (iVar3 == 0) {
          FUN_1807d8940(puVar2,unaff_RBX[5],(int)unaff_RBX[7]);
          FUN_1807d8890(unaff_RBX);
          goto LAB_1807d847f;
        }
      }
    }
    unaff_RBX[1] = unaff_RSI[1];
    *unaff_RBX = (int64_t)unaff_RSI;
    unaff_RSI[1] = unaff_RBX;
    *(int64_t **)unaff_RBX[1] = unaff_RBX;
LAB_1807d847f:
    unaff_RBX = plVar1;
    if (plVar1 == (int64_t *)unaff_R14) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_1807d8491(void)

{
  return 0;
}



uint64_t FUN_1807d84a4(void)

{
  int iVar1;
  int64_t *unaff_RBX;
  int64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t *unaff_R14;
  
code_r0x0001807d84a4:
  FUN_1807d8940(unaff_RDI,unaff_RBX[5],(int)unaff_RBX[7]);
  FUN_1807d8890(unaff_RBX);
  unaff_RBX = unaff_RBP;
  do {
    if (unaff_RBX == unaff_R14) {
      return 0;
    }
    unaff_RBP = (int64_t *)*unaff_RBX;
    *(int64_t **)unaff_RBX[1] = unaff_RBP;
    *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
    unaff_RBX[1] = (int64_t)unaff_RBX;
    *unaff_RBX = (int64_t)unaff_RBX;
    if (*(char *)((int64_t)unaff_RBX + 0x3d) != '\0') {
      for (unaff_RDI = (uint64_t *)*unaff_RSI; unaff_RDI != unaff_RSI;
          unaff_RDI = (uint64_t *)*unaff_RDI) {
        iVar1 = func_0x00018076b420(unaff_RDI[4],unaff_RBX[4]);
        if (iVar1 == 0) goto code_r0x0001807d84a4;
      }
    }
    unaff_RBX[1] = unaff_RSI[1];
    *unaff_RBX = (int64_t)unaff_RSI;
    unaff_RSI[1] = unaff_RBX;
    *(int64_t **)unaff_RBX[1] = unaff_RBX;
    unaff_RBX = unaff_RBP;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1807d84c0(uint64_t *param_1,int param_2,uint64_t param_3,uint64_t param_4,int param_5,
             int param_6,char param_7)

{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  
  if (param_7 != '\0') {
    for (puVar3 = (uint64_t *)*param_1; puVar3 != param_1; puVar3 = (uint64_t *)*puVar3) {
      iVar1 = func_0x00018076b420(puVar3[4],param_3);
      if ((iVar1 == 0) && (*(int *)(puVar3 + 3) == param_2)) {
        uVar2 = FUN_1807d8940(puVar3,param_4,param_5);
        goto LAB_1807d8657;
      }
    }
  }
  uVar2 = 0;
  puVar3 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_1760_ptr,0x1c0,0,0,1);
  if (puVar3 == (uint64_t *)0x0) {
    return 0x26;
  }
  puVar3[1] = puVar3;
  *puVar3 = puVar3;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  *(int32_t *)(puVar3 + 7) = 0;
  *(int16_t *)((int64_t)puVar3 + 0x3c) = 1;
  *(int32_t *)(puVar3 + 8) = 0;
  lVar4 = FUN_18076b520(param_3);
  puVar3[4] = lVar4;
  if (lVar4 != 0) {
    if ((param_6 == 3) || (param_6 == 6)) {
      iVar1 = param_5 + 1;
    }
    else {
      iVar1 = param_5;
      if (param_6 - 4U < 2) {
        iVar1 = param_5 + 2;
      }
    }
    lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar1,&unknown_var_1760_ptr,0x2f,0);
    puVar3[5] = lVar4;
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar4,param_4,param_5);
    }
  }
  puVar3[1] = param_1[1];
  *puVar3 = param_1;
  param_1[1] = puVar3;
  *(uint64_t **)puVar3[1] = puVar3;
LAB_1807d8657:
  if (param_7 != '\0') {
    *(int8_t *)((int64_t)puVar3 + 0x3d) = 1;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1807d8594(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  uint64_t in_stack_00000088;
  int in_stack_00000098;
  char in_stack_000000a0;
  
  if ((in_stack_00000098 == 3) || (in_stack_00000098 == 6)) {
    unaff_EBP = unaff_EBP + 1;
  }
  else if (in_stack_00000098 - 4U < 2) {
    unaff_EBP = unaff_EBP + 2;
  }
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBP,&unknown_var_1760_ptr,0x2f);
  unaff_RBX[5] = lVar1;
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar1,in_stack_00000088);
  }
  unaff_RBX[1] = *(int64_t *)(unaff_RDI + 8);
  *unaff_RBX = unaff_RDI;
  *(int64_t **)(unaff_RDI + 8) = unaff_RBX;
  *(int64_t **)unaff_RBX[1] = unaff_RBX;
  if (in_stack_000000a0 != '\0') {
    *(int8_t *)((int64_t)unaff_RBX + 0x3d) = 1;
  }
  return unaff_ESI;
}



int32_t FUN_1807d85c4(void)

{
  int32_t uVar1;
  int64_t unaff_RBX;
  char in_stack_000000a0;
  
  uVar1 = FUN_1807d8940();
  if (in_stack_000000a0 != '\0') {
    *(int8_t *)(unaff_RBX + 0x3d) = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1807d85db(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  uint64_t in_stack_00000088;
  char in_stack_000000a0;
  
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBP + 1,&unknown_var_1760_ptr,0x2f);
  unaff_RBX[5] = lVar1;
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar1,in_stack_00000088);
  }
  unaff_RBX[1] = *(int64_t *)(unaff_RDI + 8);
  *unaff_RBX = unaff_RDI;
  *(int64_t **)(unaff_RDI + 8) = unaff_RBX;
  *(int64_t **)unaff_RBX[1] = unaff_RBX;
  if (in_stack_000000a0 != '\0') {
    *(int8_t *)((int64_t)unaff_RBX + 0x3d) = 1;
  }
  return unaff_ESI;
}



int32_t FUN_1807d8641(void)

{
  int64_t *unaff_RBX;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  char in_stack_000000a0;
  
  unaff_RBX[1] = *(int64_t *)(unaff_RDI + 8);
  *unaff_RBX = unaff_RDI;
  *(int64_t **)(unaff_RDI + 8) = unaff_RBX;
  *(int64_t **)unaff_RBX[1] = unaff_RBX;
  if (in_stack_000000a0 != '\0') {
    *(int8_t *)((int64_t)unaff_RBX + 0x3d) = 1;
  }
  return unaff_ESI;
}



uint64_t FUN_1807d86d0(int64_t *param_1,int64_t param_2,int param_3,int32_t *param_4)

{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  
  plVar2 = (int64_t *)*param_1;
  if (param_3 < 0) {
    if (param_2 == 0) {
      for (; plVar2 != param_1; plVar2 = (int64_t *)*plVar2) {
        if (*(char *)((int64_t)plVar2 + 0x3c) != '\0') goto LAB_1807d87b8;
      }
    }
    else {
      for (; plVar2 != param_1; plVar2 = (int64_t *)*plVar2) {
        if ((*(char *)((int64_t)plVar2 + 0x3c) != '\0') &&
           (iVar3 = func_0x00018076b420(plVar2[4],param_2), iVar3 == 0)) goto LAB_1807d87b8;
      }
    }
  }
  else if (param_2 == 0) {
    if (plVar2 != param_1) {
      if (0 < param_3) {
        do {
          plVar2 = (int64_t *)*plVar2;
          if (plVar2 == param_1) {
            return 0x3f;
          }
          param_3 = param_3 + -1;
        } while (0 < param_3);
      }
      if (plVar2 != (int64_t *)0x0) {
LAB_1807d87b8:
        *param_4 = (int)plVar2[3];
        param_4[1] = *(int32_t *)((int64_t)plVar2 + 0x1c);
        *(int64_t *)(param_4 + 2) = plVar2[4];
        *(int64_t *)(param_4 + 4) = plVar2[5];
        param_4[6] = (int)plVar2[7];
        param_4[7] = (uint)*(byte *)((int64_t)plVar2 + 0x3c);
        if (*(char *)((int64_t)plVar2 + 0x3c) != '\0') {
          *(int8_t *)((int64_t)plVar2 + 0x3c) = 0;
        }
        return 0;
      }
    }
  }
  else {
    iVar3 = 0;
    for (; plVar2 != param_1; plVar2 = (int64_t *)*plVar2) {
      iVar1 = func_0x00018076b420(plVar2[4],param_2);
      if (iVar1 == 0) {
        if (iVar3 == param_3) goto LAB_1807d87b8;
        iVar3 = iVar3 + 1;
      }
    }
  }
  return 0x3f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d8800(int64_t *param_1)
void FUN_1807d8800(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar2 = (int64_t *)*param_1;
  while (plVar2 != param_1) {
    plVar1 = (int64_t *)*plVar2;
    *(int64_t **)plVar2[1] = plVar1;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    FUN_1807d8890(plVar2);
    plVar2 = plVar1;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1760_ptr,0xa6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d8811(void)
void FUN_1807d8811(void)

{
  int64_t *plVar1;
  int64_t *in_RAX;
  int64_t unaff_RDI;
  
  do {
    plVar1 = (int64_t *)*in_RAX;
    *(int64_t **)in_RAX[1] = plVar1;
    *(int64_t *)(*in_RAX + 8) = in_RAX[1];
    in_RAX[1] = (int64_t)in_RAX;
    *in_RAX = (int64_t)in_RAX;
    FUN_1807d8890(in_RAX);
    in_RAX = plVar1;
  } while (plVar1 != (int64_t *)unaff_RDI);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d8851(void)
void FUN_1807d8851(void)

{
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d8890(int64_t param_1)
void FUN_1807d8890(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x20),
                  &unknown_var_1760_ptr,0x50,1);
  }
  if (*(int64_t *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x28),
                  &unknown_var_1760_ptr,0x58,1);
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1760_ptr,0x5c,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d8940(int64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int64_t lVar2;
  
  lVar2 = *(int64_t *)(param_1 + 0x28);
  if ((*(int *)(param_1 + 0x38) == param_3) && (iVar1 = memcmp(lVar2,param_2,param_3), iVar1 == 0))
  {
    *(int8_t *)(param_1 + 0x3c) = 1;
    return 0;
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_1760_ptr,0x7d,1);
  }
  lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3,&unknown_var_1760_ptr,0x81,0,0,1);
  *(int64_t *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    return 0x26;
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar2,param_2,param_3);
}







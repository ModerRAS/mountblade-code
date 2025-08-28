#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part040.c - 6 个函数

// 函数: void FUN_1807a6960(longlong param_1)
void FUN_1807a6960(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (*(float *)(param_1 + 0x224) + 1.0) * 0.5;
  fVar5 = (1.0 - *(float *)(param_1 + 0x228)) * fVar4;
  fVar1 = 1.0 - *(float *)(param_1 + 0x22c);
  fVar6 = (1.0 - fVar4) * *(float *)(param_1 + 0x228) + fVar4;
  fVar3 = fVar4 - fVar5;
  if (fVar5 <= fVar4 - fVar5) {
    fVar3 = fVar5;
  }
  fVar3 = fVar3 * fVar1;
  fVar2 = fVar6 - fVar4;
  if (1.0 - fVar6 <= fVar6 - fVar4) {
    fVar2 = 1.0 - fVar6;
  }
  fVar2 = fVar2 * fVar1;
  *(float *)(param_1 + 0x23c) = fVar5 - fVar3;
  *(float *)(param_1 + 0x240) = fVar3 + fVar5;
  *(float *)(param_1 + 0x244) = fVar6 - fVar2;
  *(float *)(param_1 + 0x248) = fVar2 + fVar6;
  return;
}



uint64_t FUN_1807a6a20(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar5 = 0;
  lVar3 = *(longlong *)(lVar1 + 0xe8);
  uVar7 = uVar5;
  if (0 < *(int *)(lVar3 + 0x60)) {
    do {
      piVar2 = *(int **)(uVar5 + *(longlong *)(lVar3 + 0x68));
      if (*piVar2 == 0) {
        uVar4 = func_0x000180762a70(lVar1,uVar7,piVar2[0xe]);
LAB_1807a6a82:
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      else if (*piVar2 == 1) {
        uVar4 = func_0x000180762af0(lVar1,uVar7,piVar2[0xe]);
        goto LAB_1807a6a82;
      }
      lVar3 = *(longlong *)(lVar1 + 0xe8);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(lVar3 + 0x60));
  }
  *(uint64_t *)(lVar1 + 0x21c) = 0;
  *(uint64_t *)(lVar1 + 0x2e4) = 0;
  *(uint64_t *)(lVar1 + 0x22c) = 0xffffffffffffffff;
  *(int32_t *)(lVar1 + 0x228) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x2f0) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x224) = 0;
  *(int32_t *)(lVar1 + 0x2ec) = 0;
  *(int32_t *)(lVar1 + 0x2f4) = 0x3f800000;
  *(int8_t *)(lVar1 + 0x2e0) = 1;
  func_0x000180763630(lVar1 + 0x238,*(uint64_t *)(lVar1 + 0xa8),0x3f800000);
  return 0;
}



uint64_t FUN_1807a6b20(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  int32_t uVar3;
  
  lVar2 = *param_1;
  fVar1 = *(float *)(lVar2 + 0x2ec);
  *(float *)(lVar2 + 0x224) = fVar1;
  if (-80.0 < fVar1) {
    uVar3 = powf(0x41200000,fVar1 * 0.05);
  }
  else {
    uVar3 = 0;
  }
  FUN_180765c40(lVar2 + 0x238,uVar3,0,0,0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a6b80(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  uVar2 = system_system_config;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x220) == 1) {
    FUN_180768360(system_system_config);
    FUN_1807a7b70((longlong)*(int *)(lVar1 + 0x2e4) * 0x70 +
                  *(longlong *)((longlong)*(int *)(lVar1 + 0xe0) * 8 + 0x180c2c210),lVar1 + 0x230,
                  0xffffffff);
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar2);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807a6b92(void)
void FUN_1807a6b92(void)

{
  uint64_t uVar1;
  longlong unaff_RDI;
  
  uVar1 = system_system_config;
  FUN_180768360(system_system_config);
  FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x2e4) * 0x70 +
                *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                unaff_RDI + 0x230,0xffffffff);
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



int32_t FUN_1807a6be8(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807a6c00(longlong *param_1,int32_t param_2,longlong param_3,longlong param_4,
void FUN_1807a6c00(longlong *param_1,int32_t param_2,longlong param_3,longlong param_4,
                  int32_t param_5,int param_6)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  
  uVar2 = system_system_config;
  lVar1 = *param_1;
  FUN_180768360(system_system_config);
  if (param_6 == 1) {
    if (param_4 != 0) {
      *(int32_t *)(param_4 + 0x20) = *(int32_t *)(param_3 + 0x20);
      **(int32_t **)(param_4 + 8) = **(int32_t **)(param_3 + 8);
      iVar3 = 0;
      if (**(int **)(param_4 + 8) != 1) {
        iVar3 = (**(int **)(param_4 + 8) != 2) + 1;
      }
      *(int *)(lVar1 + 0x22c) = iVar3;
    }
  }
  else {
    FUN_1807a7890(lVar1,**(uint64_t **)(param_3 + 0x18),**(int32_t **)(param_3 + 8),
                  **(uint64_t **)(param_4 + 0x18),**(int32_t **)(param_4 + 8),param_2,param_5);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



uint64_t FUN_1807a6d50(longlong *param_1,int param_2,float *param_3,longlong param_4)

{
  float fVar1;
  
  if (param_2 != 1) {
    return 0x1f;
  }
  fVar1 = *(float *)(*param_1 + 0x2ec);
  *param_3 = fVar1;
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_7416_ptr,(double)fVar1);
  }
  return 0;
}



uint64_t FUN_1807a6dd0(longlong *param_1,int param_2,int *param_3,longlong param_4)

{
  int iVar1;
  
  if (param_2 == 2) {
    *param_3 = *(int *)(*param_1 + 0x2e4);
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr);
    }
  }
  else {
    if (param_2 != 3) {
      return 0x1f;
    }
    iVar1 = *(int *)(*param_1 + 0x2f0);
    *param_3 = iVar1;
    if (param_4 != 0) {
      func_0x00018076b450(param_4,*(uint64_t *)((longlong)iVar1 * 8 + 0x180be49b0),0x20);
      return 0;
    }
  }
  return 0;
}



uint64_t FUN_1807a6e70(longlong *param_1,int param_2,int *param_3,longlong param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    return 0x1f;
  }
  iVar1 = *(int *)(*param_1 + 0x2e8);
  *param_3 = iVar1;
  if (param_4 != 0) {
    func_0x00018076b450(param_4,*(uint64_t *)((longlong)iVar1 * 8 + 0x180be4998),0x20);
  }
  return 0;
}



uint64_t
FUN_1807a6ed0(longlong *param_1,int param_2,longlong *param_3,int32_t *param_4,
             int8_t *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  lVar1 = *param_1;
  if (param_2 != 4) {
    return 0x1f;
  }
  if (-80.0 < *(float *)(lVar1 + 0x2ec)) {
    uVar2 = powf(0x41200000,*(float *)(lVar1 + 0x2ec) * 0.05);
  }
  else {
    uVar2 = 0;
  }
  *(int32_t *)(lVar1 + 0x2f8) = uVar2;
  *param_3 = lVar1 + 0x2f4;
  *param_4 = 8;
  if (param_5 != (int8_t *)0x0) {
    *param_5 = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a6f70(longlong param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [4];
  
  if (*(int *)(&system_data_c250 + (longlong)*(int *)(param_1 + 0x30) * 4) == 0) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1,auStackX_10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1,auStackX_8,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = func_0x0001807462a0(auStackX_8[0]);
    lVar4 = 0;
    uVar2 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe00,&unknown_var_7296_ptr,0x38a,0);
    *(uint64_t *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) = uVar2;
    if (*(longlong *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) == 0) {
      return 0x26;
    }
    do {
      puVar3 = (uint64_t *)
               (*(longlong *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) + lVar4);
      lVar4 = lVar4 + 0x70;
      *(int32_t *)(puVar3 + 0xc) = auStackX_10[0];
      *puVar3 = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[9] = 0;
      *(int32_t *)((longlong)puVar3 + 100) = 0;
      puVar3[1] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[8] = 0;
      puVar3[7] = 0;
      *(int32_t *)(puVar3 + 10) = 0;
      *(int16_t *)(puVar3 + 0xd) = 0;
      *(int32_t *)((longlong)puVar3 + 0x6c) = 1;
      *(int32_t *)((longlong)puVar3 + 0x54) = 1;
      *(int32_t *)(puVar3 + 0xb) = 2;
      *(int32_t *)((longlong)puVar3 + 0x5c) = uVar1;
    } while (lVar4 < 0xe00);
    if ((system_system_config + system_system_config + system_system_config + system_system_config + system_system_config +
         system_system_config + system_system_config + system_system_config == 0) &&
       (uVar2 = FUN_1807682e0(&system_data_c270), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  *(int *)(&system_data_c250 + (longlong)*(int *)(param_1 + 0x30) * 4) =
       *(int *)(&system_data_c250 + (longlong)*(int *)(param_1 + 0x30) * 4) + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a7100(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(int *)(&system_data_c250 + (longlong)*(int *)(param_1 + 0x30) * 4) =
       *(int *)(&system_data_c250 + (longlong)*(int *)(param_1 + 0x30) * 4) + -1;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(&system_data_c250 + (longlong)iVar2 * 4) < 0) {
    *(int32_t *)(&system_data_c250 + (longlong)iVar2 * 4) = 0;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if ((*(int *)(&system_data_c250 + (longlong)iVar2 * 4) == 0) &&
     (lVar1 = *(longlong *)((longlong)iVar2 * 8 + 0x180c2c210), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_7296_ptr,0x3bb,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a71f0(longlong param_1,int param_2)

{
  uint64_t uVar1;
  int iVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t auStackX_10 [2];
  
  uVar1 = system_system_config;
  if (param_2 == 0) {
    FUN_180768360(system_system_config);
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) + 0x5c +
                  lVar5) == 0) {
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1,auStackX_10,0);
        if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180768400(uVar1);
        }
        uVar3 = func_0x0001807462a0(auStackX_10[0]);
        *(int32_t *)
         (*(longlong *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) + 0x5c + lVar5) =
             uVar3;
      }
      lVar5 = lVar5 + 0x70;
    } while (lVar5 < 0xe00);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    FUN_180768360(system_system_config);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)((longlong)*(int *)(param_1 + 0x30) * 8 + 0x180c2c210) + lVar5;
      lVar5 = lVar5 + 0x70;
      iVar2 = 1 - *(int *)(lVar4 + 0x6c);
      *(int *)(lVar4 + 0x6c) = iVar2;
      *(int8_t *)((longlong)iVar2 + 100 + lVar4) = 0;
      *(int8_t *)((longlong)*(int *)(lVar4 + 0x6c) + 0x66 + lVar4) = 0;
      *(int8_t *)((longlong)*(int *)(lVar4 + 0x6c) + 0x68 + lVar4) = 0;
    } while (lVar5 < 0xe00);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a7310(longlong param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint64_t uVar8;
  int32_t uVar9;
  uint auStackX_10 [2];
  ulonglong uStackX_18;
  
  if (param_2 != 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x220) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x116e0);
    (**(code **)(*plVar3 + 0xd8))(plVar3,&uStackX_18,0);
    uVar7 = uStackX_18 >> 0x14;
    (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x20))(param_1 + 0xb0,auStackX_10);
    if ((uVar7 < system_system_config) ||
       (uVar5 = auStackX_10[0] + system_system_config, system_system_config = uVar7, uVar5 < uVar7)) {
      *(int8_t *)(param_1 + 0x2e0) = 1;
      system_system_config = uVar7;
    }
  }
  fVar1 = *(float *)(param_1 + 0x2ec);
  if (fVar1 != *(float *)(param_1 + 0x224)) {
    *(float *)(param_1 + 0x224) = fVar1;
    if (-80.0 < fVar1) {
      uVar9 = powf(0x41200000,fVar1 * 0.05);
    }
    else {
      uVar9 = 0;
    }
    FUN_180765c40(param_1 + 0x238,uVar9,0x40,0,0);
  }
  uVar4 = system_system_config;
  if (*(int *)(param_1 + 0x2e8) == *(int *)(param_1 + 0x220)) {
    if (*(int *)(param_1 + 0x2e4) != *(int *)(param_1 + 0x21c)) {
      if (*(int *)(param_1 + 0x220) == 1) {
        FUN_180768360(system_system_config);
        FUN_1807a7b70((longlong)*(int *)(param_1 + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210),
                      param_1 + 0x230,0xffffffff);
        FUN_1807a7b70((longlong)*(int *)(param_1 + 0x2e4) * 0x70 +
                      *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210),
                      param_1 + 0x230,1);
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar4);
      }
      *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x2e4);
    }
    uVar2 = *(uint *)(param_1 + 0x2f0);
    if (((uVar2 != *(uint *)(param_1 + 0x228)) || (*(int *)(param_1 + 0x230) == -1)) ||
       ((*(uint *)(param_1 + 0x228) == 0xffffffff &&
        (*(int *)(param_1 + 0x22c) != *(int *)(param_1 + 0x230))))) {
      auStackX_10[0] = *(uint *)(param_1 + 0x230);
      uVar6 = uVar2;
      if (uVar2 == 0xffffffff) {
        uVar6 = *(uint *)(param_1 + 0x22c);
      }
      *(uint *)(param_1 + 0x230) = uVar6;
      uVar4 = system_system_config;
      if ((*(int *)(param_1 + 0x220) == 1) && (uVar6 != auStackX_10[0])) {
        FUN_180768360(system_system_config);
        FUN_1807a7b70((longlong)*(int *)(param_1 + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210),
                      auStackX_10,0xffffffff);
        FUN_1807a7b70((longlong)*(int *)(param_1 + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210),
                      param_1 + 0x230,1);
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar4);
      }
      *(uint *)(param_1 + 0x228) = uVar2;
    }
    return 0;
  }
  FUN_180768360(system_system_config);
  uVar8 = 1;
  if (*(int *)(param_1 + 0x2e8) != 1) {
    uVar8 = 0xffffffff;
  }
  FUN_1807a7b70((longlong)*(int *)(param_1 + 0x21c) * 0x70 +
                *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210),param_1 + 0x230,
                uVar8);
  *(int32_t *)(param_1 + 0x220) = *(int32_t *)(param_1 + 0x2e8);
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a7329(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  uint64_t uVar8;
  bool in_ZF;
  int32_t uVar9;
  uint in_stack_00000058;
  ulonglong in_stack_00000060;
  
  if (in_ZF) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x116e0);
    (**(code **)(*plVar3 + 0xd8))(plVar3,&stack0x00000060,0);
    uVar7 = in_stack_00000060 >> 0x14;
    (**(code **)(*(longlong *)(unaff_RDI + 0xd8) + 0x20))(unaff_RDI + 0xb0,&stack0x00000058);
    if ((uVar7 < system_system_config) ||
       (uVar5 = in_stack_00000058 + system_system_config, system_system_config = uVar7, uVar5 < uVar7)) {
      *(int8_t *)(unaff_RDI + 0x2e0) = 1;
      system_system_config = uVar7;
    }
  }
  fVar1 = *(float *)(unaff_RDI + 0x2ec);
  if (fVar1 != *(float *)(unaff_RDI + 0x224)) {
    *(float *)(unaff_RDI + 0x224) = fVar1;
    if (-80.0 < fVar1) {
      uVar9 = powf(0x41200000,fVar1 * 0.05);
    }
    else {
      uVar9 = 0;
    }
    FUN_180765c40(unaff_RDI + 0x238,uVar9,0x40,0,0);
  }
  uVar4 = system_system_config;
  if (*(int *)(unaff_RDI + 0x2e8) == *(int *)(unaff_RDI + 0x220)) {
    if (*(int *)(unaff_RDI + 0x2e4) != *(int *)(unaff_RDI + 0x21c)) {
      if (*(int *)(unaff_RDI + 0x220) == 1) {
        FUN_180768360(system_system_config);
        FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                      unaff_RDI + 0x230,0xffffffff);
        FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x2e4) * 0x70 +
                      *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                      unaff_RDI + 0x230,1);
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar4);
      }
      *(int *)(unaff_RDI + 0x21c) = *(int *)(unaff_RDI + 0x2e4);
    }
    iVar2 = *(int *)(unaff_RDI + 0x2f0);
    if (((iVar2 != *(int *)(unaff_RDI + 0x228)) || (*(int *)(unaff_RDI + 0x230) == -1)) ||
       ((*(int *)(unaff_RDI + 0x228) == -1 &&
        (*(int *)(unaff_RDI + 0x22c) != *(int *)(unaff_RDI + 0x230))))) {
      in_stack_00000058 = *(int *)(unaff_RDI + 0x230);
      iVar6 = iVar2;
      if (iVar2 == -1) {
        iVar6 = *(int *)(unaff_RDI + 0x22c);
      }
      *(int *)(unaff_RDI + 0x230) = iVar6;
      uVar4 = system_system_config;
      if ((*(int *)(unaff_RDI + 0x220) == 1) && (iVar6 != in_stack_00000058)) {
        FUN_180768360(system_system_config);
        FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                      &stack0x00000058,0xffffffff);
        FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x21c) * 0x70 +
                      *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                      unaff_RDI + 0x230,1);
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar4);
      }
      *(int *)(unaff_RDI + 0x228) = iVar2;
    }
    return 0;
  }
  FUN_180768360(system_system_config);
  uVar8 = 1;
  if (*(int *)(unaff_RDI + 0x2e8) != 1) {
    uVar8 = 0xffffffff;
  }
  FUN_1807a7b70((longlong)*(int *)(unaff_RDI + 0x21c) * 0x70 +
                *(longlong *)((longlong)*(int *)(unaff_RDI + 0xe0) * 8 + 0x180c2c210),
                unaff_RDI + 0x230,uVar8);
  *(int32_t *)(unaff_RDI + 0x220) = *(int32_t *)(unaff_RDI + 0x2e8);
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar4);
}



uint64_t FUN_1807a75dd(void)

{
  return 0;
}






// 函数: void FUN_1807a75f0(void)
void FUN_1807a75f0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c2c034,0,0x5c);
}



// WARNING: Type propagation algorithm not settling

uint64_t
FUN_1807a7890(longlong param_1,uint64_t param_2,int param_3,uint64_t param_4,int32_t param_5,
             int param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t uVar5;
  uint64_t uStack_118;
  uint64_t *******pppppppuStack_110;
  uint64_t *******pppppppuStack_108;
  uint64_t uStack_100;
  uint64_t *******pppppppuStack_f8;
  uint64_t *******pppppppuStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_80;
  uint64_t uStack_78;
  
  lVar2 = 0;
  lVar3 = *(longlong *)((longlong)*(int *)(param_1 + 0xe0) * 8 + 0x180c2c210) +
          (longlong)*(int *)(param_1 + 0x21c) * 0x70;
  if (*(int *)(param_1 + 0x220) != 1) {
    pppppppuStack_108 = &pppppppuStack_110;
    pppppppuStack_110 = &pppppppuStack_110;
    pppppppuStack_f0 = &pppppppuStack_f8;
    pppppppuStack_f8 = &pppppppuStack_f8;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_118 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x000180763630(&uStack_118,*(uint64_t *)(param_1 + 0xa8),0x3f800000);
    FUN_1807636f0(&uStack_118,param_4,param_2,0,param_5,param_3,param_6,1);
    puVar4 = (int32_t *)(lVar3 + 0x54);
    do {
      lVar1 = (longlong)(1 - *(int *)(lVar3 + 0x6c));
      if ((*(char *)(lVar1 + lVar2 + 100 + lVar3) != '\0') &&
         (lVar1 = *(longlong *)(lVar3 + 0x18 + (lVar1 + lVar2) * 8), lVar1 != 0)) {
        if ((*(char *)(param_1 + 0x2e0) != '\0') && (-80.0 < *(float *)(param_1 + 0x224))) {
          uVar5 = powf(0x41200000,*(float *)(param_1 + 0x224) * 0.05);
          FUN_180765c40(param_1 + 0x238,uVar5,0x40,0,1);
        }
        FUN_1807636f0(param_1 + 0x238,param_4,lVar1,0,param_5,*puVar4,param_6,0);
      }
      puVar4 = puVar4 + 1;
      lVar2 = lVar2 + 2;
    } while (lVar2 < 6);
    *(int8_t *)(param_1 + 0x2e0) = 0;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_4,param_2,(ulonglong)(uint)(param_3 * param_6) << 2);
}



uint64_t FUN_1807a79c9(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar4;
  longlong unaff_R15;
  int32_t uVar5;
  int32_t uStack0000000000000078;
  
  *(longlong *)(unaff_RBP + -0x80) = unaff_R15;
  uStack0000000000000078 = (int32_t)unaff_R15;
  *(longlong *)(unaff_RBP + -0x70) = unaff_R15;
  *(int32_t *)(unaff_RBP + -0x78) = uStack0000000000000078;
  *(longlong *)(unaff_RBP + -0x20) = unaff_R15;
  *(int32_t *)(unaff_RBP + -0x28) = uStack0000000000000078;
  *(longlong *)(unaff_RBP + -0x68) = unaff_R15;
  *(longlong *)(unaff_RBP + -0x60) = unaff_R15;
  func_0x000180763630();
  uVar1 = *(uint64_t *)(unaff_RBP + 0x78);
  FUN_1807636f0(&stack0x00000040,uVar1);
  lVar3 = unaff_R15;
  do {
    lVar2 = (longlong)(1 - *(int *)(unaff_RSI + 0x6c));
    cVar4 = (char)unaff_R15;
    if ((*(char *)(lVar2 + lVar3 + 100 + unaff_RSI) != cVar4) &&
       (lVar2 = *(longlong *)(unaff_RSI + 0x18 + (lVar2 + lVar3) * 8), lVar2 != 0)) {
      if ((*(char *)(unaff_RDI + 0x2e0) != cVar4) && (-80.0 < *(float *)(unaff_RDI + 0x224))) {
        uVar5 = powf(0x41200000,*(float *)(unaff_RDI + 0x224) * 0.05);
        FUN_180765c40(unaff_RDI + 0x238,uVar5,0x40,0,1);
      }
      FUN_1807636f0(unaff_RDI + 0x238,uVar1,lVar2,0,*(int32_t *)(unaff_RBP + 0x80));
    }
    lVar3 = lVar3 + 2;
  } while (lVar3 < 6);
  *(char *)(unaff_RDI + 0x2e0) = cVar4;
  return 0;
}



uint64_t FUN_1807a7b4d(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1807a7b70(longlong param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  iVar2 = *param_2;
  if (iVar2 != -1) {
    if (iVar2 == 2) {
      if (*(int *)(param_1 + 0x5c) == 2) {
        *param_2 = 1;
        iVar2 = 1;
      }
      else {
        iVar2 = 2;
        if (*(int *)(param_1 + 0x5c) == 1) {
          *param_2 = 0;
          iVar2 = 0;
        }
      }
    }
    piVar1 = (int *)(param_1 + 0x48 + (longlong)iVar2 * 4);
    *piVar1 = *piVar1 + param_3;
    iVar2 = *param_2;
    if (*(int *)(param_1 + 0x48 + (longlong)iVar2 * 4) < 0) {
      *(int32_t *)(param_1 + 0x48 + (longlong)iVar2 * 4) = 0;
      iVar2 = *param_2;
    }
    if ((*(int *)(param_1 + 0x48 + (longlong)iVar2 * 4) == 0) &&
       (lVar3 = *(longlong *)(param_1 + (longlong)iVar2 * 8), lVar3 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_7296_ptr,0xb8,1);
    }
    lVar3 = (longlong)iVar2;
    if ((*(int *)(param_1 + 0x48 + lVar3 * 4) != 0) && (*(longlong *)(param_1 + lVar3 * 8) == 0)) {
      uVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                            *(int *)(param_1 + 0x54 + lVar3 * 4) * *(int *)(param_1 + 0x60) * 8,
                            &unknown_var_7296_ptr,0xc1,0);
      *(uint64_t *)(param_1 + (longlong)*param_2 * 8) = uVar4;
      lVar3 = *(longlong *)(param_1 + (longlong)*param_2 * 8);
      if (lVar3 == 0) {
        return 0x26;
      }
      *(longlong *)(param_1 + 0x18 + (longlong)*param_2 * 0x10) = lVar3;
      lVar3 = (longlong)*param_2;
      *(ulonglong *)(param_1 + (lVar3 + 2) * 0x10) =
           *(longlong *)(param_1 + lVar3 * 8) +
           (ulonglong)(uint)(*(int *)(param_1 + 0x54 + lVar3 * 4) * *(int *)(param_1 + 0x60)) * 4;
      *(int8_t *)(param_1 + 0x65 + (longlong)*param_2 * 2) = 0;
      *(int8_t *)(param_1 + 100 + (longlong)*param_2 * 2) = 0;
    }
  }
  return 0;
}



uint64_t FUN_1807a7d00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1807a7f20(lVar1 + 0xdb8);
  FUN_1807a7f20(lVar1 + 0xdc8);
  return 0;
}



uint64_t FUN_1807a7db0(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  void *puVar2;
  
  if ((param_3 != (int32_t *)0x0) && (param_2 == 0)) {
    lVar1 = *param_1;
    *param_3 = *(int32_t *)(lVar1 + 0xe5c);
    if (param_4 != 0) {
      puVar2 = &unknown_var_7600_ptr;
      if (*(int *)(lVar1 + 0xe5c) == 0) {
        puVar2 = &unknown_var_7588_ptr;
      }
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_552_ptr,puVar2);
    }
    return 0;
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807a7f20(longlong *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (longlong)iVar1 * 4,0,(longlong)-iVar1 << 2);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180747e10(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}






// 函数: void FUN_1807a7fe0(void)
void FUN_1807a7fe0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c2c444,0,0x108);
}






// 函数: void FUN_1807a8500(longlong *param_1,float param_2,float param_3)
void FUN_1807a8500(longlong *param_1,float param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar1 = (int)param_1[1];
  lVar7 = (longlong)iVar1;
  if (iVar1 != 0) {
    if (param_3 < 80.0) {
      fVar18 = (float)powf();
    }
    else {
      fVar18 = 0.0;
    }
    iVar4 = 0;
    fVar18 = (param_2 / (float)iVar1) * fVar18;
    if (0 < iVar1) {
      pfVar3 = (float *)*param_1;
      lVar6 = 0;
      do {
        if (fVar18 < *pfVar3 || fVar18 == *pfVar3) break;
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 1;
        pfVar3 = pfVar3 + 1;
      } while (lVar6 < lVar7);
    }
    auVar10 = ZEXT816(0);
    uVar8 = iVar1 - iVar4;
    if ((iVar4 < iVar1) && (7 < uVar8)) {
      lVar6 = (longlong)iVar4;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      uVar5 = uVar8 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      do {
        pfVar3 = (float *)(*param_1 + lVar6 * 4);
        iVar4 = iVar4 + 8;
        fVar14 = fVar14 + *pfVar3;
        fVar15 = fVar15 + pfVar3[1];
        fVar16 = fVar16 + pfVar3[2];
        fVar17 = fVar17 + pfVar3[3];
        pfVar3 = (float *)(*param_1 + 0x10 + lVar6 * 4);
        lVar6 = lVar6 + 8;
        fVar18 = fVar18 + *pfVar3;
        fVar11 = fVar11 + pfVar3[1];
        fVar12 = fVar12 + pfVar3[2];
        fVar13 = fVar13 + pfVar3[3];
      } while (lVar6 < (int)(iVar1 - uVar5));
      fVar16 = fVar16 + fVar12;
      fVar17 = fVar17 + fVar13;
      auVar9._0_4_ = fVar16 + fVar14 + fVar18;
      auVar9._4_4_ = fVar17 + fVar15 + fVar11;
      auVar9._8_4_ = fVar16 + fVar16;
      auVar9._12_4_ = fVar17 + fVar17;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ + auVar9._4_4_;
    }
    lVar6 = (longlong)iVar4;
    if (lVar6 < lVar7) {
      if (3 < lVar7 - lVar6) {
        lVar2 = *param_1;
        do {
          auVar10._0_4_ =
               auVar10._0_4_ + *(float *)(lVar2 + lVar6 * 4) + *(float *)(lVar2 + 4 + lVar6 * 4) +
               *(float *)(lVar2 + 8 + lVar6 * 4) + *(float *)(lVar2 + 0xc + lVar6 * 4);
          lVar6 = lVar6 + 4;
        } while (lVar6 < lVar7 + -3);
      }
      if (lVar6 < lVar7) {
        do {
          auVar10._0_4_ = auVar10._0_4_ + *(float *)(*param_1 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar7);
      }
    }
    if (0.0 < auVar10._0_4_ / (float)(int)uVar8) {
      log10f();
    }
  }
  return;
}







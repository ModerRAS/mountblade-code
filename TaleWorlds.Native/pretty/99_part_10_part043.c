#include "TaleWorlds.Native.Split.h"

// 99_part_10_part043.c - 6 个函数

// 函数: void FUN_1806c2790(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
void FUN_1806c2790(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t uVar5;
  void *puVar6;
  int *piVar7;
  int64_t lVar8;
  int aiStackX_8 [2];
  char *pcStackX_20;
  
  FUN_1806d7080(param_1,*param_3);
  aiStackX_8[0] = 0x61;
  piVar7 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    FUN_1806d7080(param_1,lVar8);
    lVar8 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar6 = &unknown_var_1920_ptr;
      }
      else {
        puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))
                        ((int64_t *)param_1[5],puVar6,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        uVar3 = FUN_1806d5410(pcStackX_20,&system_data_03c0);
        (*(code *)param_3[2])(param_1[6],(int)lVar8,uVar3);
      }
    }
    lVar8 = *param_1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(int64_t *)param_1[5] + 0x48))();
        lVar8 = *param_1;
      }
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      lVar8 = *param_1;
    }
    *(int8_t *)(param_1 + 9) = 1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(int8_t *)(param_1 + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar8 = *param_4;
  }
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c279e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
void FUN_1806c279e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t uVar5;
  void *puVar6;
  int64_t *unaff_RBX;
  int *piVar7;
  int64_t lVar8;
  int in_stack_00000050;
  char *in_stack_00000068;
  
  FUN_1806d7080();
  in_stack_00000050 = 0x61;
  piVar7 = &stack0x00000050;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar7 = (int *)unaff_RBX[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    FUN_1806d7080();
    lVar8 = param_4[1];
    in_stack_00000068 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar6 = &unknown_var_1920_ptr;
      }
      else {
        puVar6 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar6,&stack0x00000068);
      if (((cVar2 != '\0') && (in_stack_00000068 != (char *)0x0)) && (*in_stack_00000068 != '\0')) {
        uVar3 = FUN_1806d5410(in_stack_00000068,&system_data_03c0);
        (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar8,uVar3);
      }
    }
    lVar8 = *unaff_RBX;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar8 = *unaff_RBX;
      }
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      lVar8 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar5 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(int8_t *)(unaff_RBX + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar8 = *param_4;
  }
  lVar8 = *unaff_RBX;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar8 = *unaff_RBX;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (int8_t)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(unaff_RBX + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c27df(void)
void FUN_1806c27df(void)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  int64_t *unaff_RBX;
  int *unaff_RBP;
  int64_t *unaff_RDI;
  int64_t lVar6;
  int64_t unaff_R14;
  char cVar7;
  char *unaff_R15;
  char *in_stack_00000068;
  
  do {
    FUN_1806d7080();
    lVar6 = unaff_RDI[1];
    cVar7 = (char)unaff_R15;
    in_stack_00000068 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar7) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &unknown_var_1920_ptr;
      }
      else {
        puVar5 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar5,&stack0x00000068);
      if (((cVar2 != '\0') && (in_stack_00000068 != (char *)0x0)) && (*in_stack_00000068 != cVar7))
      {
        uVar3 = FUN_1806d5410(in_stack_00000068,&system_data_03c0);
        (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar6,uVar3);
      }
    }
    lVar6 = *unaff_RBX;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != cVar7) &&
         (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != cVar7)) {
        (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar6 = *unaff_RBX;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == cVar7) {
        cVar2 = cVar7;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RBP = *unaff_RBP + 1;
    unaff_RDI = unaff_RDI + 2;
  } while (*unaff_RDI != 0);
  lVar6 = *unaff_RBX;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != cVar7) &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != cVar7)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar6 = *unaff_RBX;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == cVar7) {
      cVar2 = cVar7;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c28cf(void)
void FUN_1806c28cf(void)

{
  uint64_t uVar1;
  char cVar2;
  int64_t *unaff_RBX;
  int64_t lVar3;
  char unaff_R15B;
  
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_R15B) &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_R15B)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c28e9(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1806c28e9(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  int in_EAX;
  char cVar2;
  int64_t *unaff_RBX;
  char unaff_R15B;
  
  if ((*(char *)(*(int64_t *)(param_3 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B) &&
     (*(char *)(*(int64_t *)(param_3 + 8) + 0x10 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B))
  {
    (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
    param_3 = *unaff_RBX;
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  *(int8_t *)(unaff_RBX + 9) = 1;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(*unaff_RBX + 8) + 0x10 + (uint64_t)(iVar1 - 1) * 0x18) ==
        unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c2950(int64_t *param_1,uint64_t *param_2,int64_t *param_3)
void FUN_1806c2950(int64_t *param_1,uint64_t *param_2,int64_t *param_3)

{
  int32_t *puVar1;
  uint uVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void *puVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  char *pcStackX_8;
  uint64_t *puStackX_10;
  int64_t lStackX_20;
  void *in_stack_fffffffffffffdd8;
  int32_t uVar15;
  void *puStack_208;
  uint uStack_200;
  int32_t uStack_1fc;
  int64_t lStack_1f8;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  int64_t lStack_1d0;
  int64_t lStack_1c8;
  int64_t lStack_1c0;
  uint64_t *puStack_1b8;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  int8_t uStack_1a0;
  char **ppcStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int64_t lStack_178;
  int64_t lStack_170;
  int64_t lStack_168;
  int64_t lStack_160;
  int64_t lStack_158;
  int64_t lStack_150;
  uint64_t *puStack_148;
  int64_t lStack_140;
  int64_t lStack_138;
  int8_t uStack_130;
  char **ppcStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int8_t auStack_d8 [160];
  
  lVar7 = param_1[1];
  plVar10 = (int64_t *)param_1[5];
  plVar3 = (int64_t *)param_1[8];
  uVar15 = *(int32_t *)(*param_1 + 0x10);
  puStackX_10 = param_2;
  pcStackX_8._0_4_ = uVar15;
  if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar7 + 8) + (uint64_t)*(uint *)(lVar7 + 0x10) * 4) = uVar15;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar7,&pcStackX_8);
  }
  cVar4 = FUN_1806d56e0(param_1);
  if (cVar4 == '\0') goto FUN_1806c327c;
  lVar7 = param_1[1];
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,*(int32_t *)(*param_1 + 0x10));
  if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar7 + 8) + (uint64_t)*(uint *)(lVar7 + 0x10) * 4) =
         *(int32_t *)(*param_1 + 0x10);
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar7,&pcStackX_8);
  }
  FUN_1806d56e0(param_1);
  lVar7 = *param_1;
  puStack_208 = &unknown_var_1560_ptr;
  lStack_1f8 = CONCAT71(lStack_1f8._1_7_,(char)param_1[9]);
  uVar2 = *(uint *)(lVar7 + 0x10);
  uStack_200 = uStack_200 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    lVar12 = *(int64_t *)(lVar7 + 8);
    puVar1 = (int32_t *)(lVar12 + (uint64_t)uVar2 * 0x18);
    *puVar1 = 0x8094c858;
    puVar1[1] = 1;
    puVar1[2] = uStack_200;
    puVar1[3] = uStack_1fc;
    *(int64_t *)(lVar12 + 0x10 + (uint64_t)uVar2 * 0x18) = lStack_1f8;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar7,&puStack_208);
  }
  cVar4 = FUN_1806d56e0(param_1);
  uVar15 = (int32_t)((uint64_t)in_stack_fffffffffffffdd8 >> 0x20);
  if (cVar4 != '\0') {
    cVar4 = FUN_1806d5620(param_1);
    uVar15 = (int32_t)((uint64_t)in_stack_fffffffffffffdd8 >> 0x20);
    pcVar6 = pcStackX_8;
    while (cVar4 != '\0') {
      pcStackX_8 = (char *)(**(code **)(*plVar10 + 0x40))(plVar10);
      if ((pcStackX_8 != (char *)0x0) && (*pcStackX_8 != '\0')) {
        pcVar6 = (char *)_strtoui64(pcStackX_8,&pcStackX_8,10);
      }
      if (pcVar6 != (char *)0x0) {
        lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,pcVar6);
        if (lVar7 == 0) {
          uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
          in_stack_fffffffffffffdd8 = &rendering_main_control_ptr;
          _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar8,4,&unknown_var_1776_ptr,0x6c,&rendering_main_control_ptr,pcVar6);
          *(int8_t *)param_1[10] = 1;
          lStackX_20 = lVar7;
        }
        else if (*(uint *)(param_3 + 1) < (*(uint *)((int64_t)param_3 + 0xc) & 0x7fffffff)) {
          *(int64_t *)(*param_3 + (uint64_t)*(uint *)(param_3 + 1) * 8) = lVar7;
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
          lStackX_20 = lVar7;
        }
        else {
          lStackX_20 = lVar7;
          FUN_1806d5870(param_3,&lStackX_20);
        }
      }
      uVar15 = (int32_t)((uint64_t)in_stack_fffffffffffffdd8 >> 0x20);
      param_2 = puStackX_10;
      if ((char)param_1[9] == '\0') break;
      cVar4 = (**(code **)(*(int64_t *)param_1[5] + 0x28))();
      uVar15 = (int32_t)((uint64_t)in_stack_fffffffffffffdd8 >> 0x20);
      param_2 = puStackX_10;
    }
  }
  FUN_1806d6eb0(param_1);
  lVar7 = param_1[1];
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,*(int32_t *)(*param_1 + 0x10));
  if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar7 + 8) + (uint64_t)*(uint *)(lVar7 + 0x10) * 4) =
         *(int32_t *)(*param_1 + 0x10);
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar7,&pcStackX_8);
  }
  FUN_1806d56e0(param_1);
  lVar7 = *param_1;
  puStack_208 = &unknown_var_1520_ptr;
  lStack_1f8 = CONCAT71(lStack_1f8._1_7_,(char)param_1[9]);
  uVar2 = *(uint *)(lVar7 + 0x10);
  uStack_200 = uStack_200 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    lVar12 = *(int64_t *)(lVar7 + 8);
    puVar1 = (int32_t *)(lVar12 + (uint64_t)uVar2 * 0x18);
    *puVar1 = 0x8094c830;
    puVar1[1] = 1;
    puVar1[2] = uStack_200;
    puVar1[3] = uStack_1fc;
    *(int64_t *)(lVar12 + 0x10 + (uint64_t)uVar2 * 0x18) = lStack_1f8;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar7,&puStack_208);
  }
  cVar4 = FUN_1806d56e0(param_1);
  if ((cVar4 != '\0') && (cVar4 = FUN_1806d5620(param_1), cVar4 != '\0')) {
    if ((char)param_1[9] == '\0') {
      puVar9 = &system_buffer_ptr;
    }
    else {
      puVar9 = (void *)(**(code **)(*(int64_t *)param_1[5] + 0x38))();
    }
    iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9496_ptr);
    if (iVar5 == 0) {
      plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
      puVar11 = (uint64_t *)
                (**(code **)(*plVar10 + 8))
                          (plVar10,8,&unknown_var_1872_ptr,&unknown_var_1776_ptr,CONCAT44(uVar15,0xad));
      *puVar11 = 0;
      __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
      __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(&puStack_208);
      lStack_168 = param_1[2];
      lStack_160 = param_1[3];
      lStack_178 = *param_1;
      ppcStack_128 = &pcStackX_8;
      lStack_170 = param_1[1];
      lStack_150 = param_1[5];
      lStack_140 = param_1[7];
      lStack_138 = param_1[8];
      lStack_158 = param_1[4];
      pcStackX_8 = (char *)((uint64_t)pcStackX_8 & 0xffffffffffffff00);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_130 = 1;
      puStack_148 = puVar11;
      FUN_1806c0f20(&lStack_178,&puStack_208,0);
LAB_1806c3258:
      cVar4 = (char)pcStackX_8;
joined_r0x0001806c2e65:
      if (cVar4 == '\0') {
        *(int8_t *)param_1[10] = 1;
      }
    }
    else {
      iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9520_ptr);
      if (iVar5 != 0) {
        iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9448_ptr);
        if (iVar5 != 0) {
          iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9432_ptr);
          if (iVar5 == 0) {
            plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
            puVar11 = (uint64_t *)
                      (**(code **)(*plVar10 + 8))
                                (plVar10,0x10,&unknown_var_1872_ptr,&unknown_var_1776_ptr,CONCAT44(uVar15,0xad));
            *puVar11 = 3;
            puVar11[1] = 0;
            __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
            __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&puStack_208);
            lStack_168 = param_1[2];
            lStack_160 = param_1[3];
            lStack_140 = param_1[7];
            lStack_178 = *param_1;
            lStack_170 = param_1[1];
            lStack_150 = param_1[5];
            lStack_138 = param_1[8];
            lStack_158 = param_1[4];
            ppcStack_128 = &pcStackX_8;
            pcStackX_8 = (char *)((uint64_t)pcStackX_8 & 0xffffffffffffff00);
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 1;
            puStack_148 = puVar11;
            FUN_1806c0b60(&lStack_178,&puStack_208,0);
          }
          else {
            iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9472_ptr);
            if (iVar5 == 0) {
              plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
              puVar11 = (uint64_t *)
                        (**(code **)(*plVar10 + 8))
                                  (plVar10,0x30,&unknown_var_1872_ptr,&unknown_var_1776_ptr,CONCAT44(uVar15,0xad))
              ;
              *(int32_t *)puVar11 = 4;
              *(int32_t *)((int64_t)puVar11 + 4) = 0x3f800000;
              *(int32_t *)(puVar11 + 1) = 0x3f800000;
              *(uint64_t *)((int64_t)puVar11 + 0xc) = 0x3f800000;
              *(uint64_t *)((int64_t)puVar11 + 0x14) = 0;
              *(int32_t *)((int64_t)puVar11 + 0x1c) = 0x3f800000;
              puVar11[4] = 0;
              *(int8_t *)(puVar11 + 5) = 1;
              *(int16_t *)((int64_t)puVar11 + 0x29) = 0;
              *(int8_t *)((int64_t)puVar11 + 0x2b) = 0;
              __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
              __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_178);
              lStack_1d8 = param_1[2];
              lStack_1d0 = param_1[3];
              lStack_1e8 = *param_1;
              lStack_1e0 = param_1[1];
              lStack_1c0 = param_1[5];
              lStack_1b0 = param_1[7];
              lStack_1a8 = param_1[8];
              lStack_1c8 = param_1[4];
              ppcStack_198 = &pcStackX_8;
              pcStackX_8 = (char *)((uint64_t)pcStackX_8 & 0xffffffffffffff00);
              uStack_190 = 0;
              uStack_188 = 0;
              uStack_1a0 = 1;
              puStack_1b8 = puVar11;
              FUN_1806c6f10(&lStack_178,&lStack_1e8,0);
            }
            else {
              iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9536_ptr);
              if (iVar5 == 0) {
                plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
                puVar11 = (uint64_t *)
                          (**(code **)(*plVar10 + 8))
                                    (plVar10,0x30,&unknown_var_1872_ptr,&unknown_var_1776_ptr,
                                     CONCAT44(uVar15,0xad));
                *(int32_t *)puVar11 = 5;
                *(int32_t *)((int64_t)puVar11 + 4) = 0x3f800000;
                *(int32_t *)(puVar11 + 1) = 0x3f800000;
                *(uint64_t *)((int64_t)puVar11 + 0xc) = 0x3f800000;
                *(uint64_t *)((int64_t)puVar11 + 0x14) = 0;
                *(int32_t *)((int64_t)puVar11 + 0x1c) = 0x3f800000;
                *(int8_t *)(puVar11 + 4) = 0;
                *(int16_t *)((int64_t)puVar11 + 0x21) = 0;
                *(int8_t *)((int64_t)puVar11 + 0x23) = 0;
                puVar11[5] = 0;
                __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
                __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_178);
                lStack_1d8 = param_1[2];
                lStack_1d0 = param_1[3];
                lStack_1e8 = *param_1;
                lStack_1e0 = param_1[1];
                lStack_1c0 = param_1[5];
                lStack_1b0 = param_1[7];
                lStack_1a8 = param_1[8];
                lStack_1c8 = param_1[4];
                ppcStack_198 = &pcStackX_8;
                pcStackX_8 = (char *)((uint64_t)pcStackX_8 & 0xffffffffffffff00);
                uStack_190 = 0;
                uStack_188 = 0;
                uStack_1a0 = 1;
                puStack_1b8 = puVar11;
                FUN_1806cbbd0(&lStack_178,&lStack_1e8,0);
              }
              else {
                iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar9,&unknown_var_9560_ptr);
                if (iVar5 != 0) goto LAB_1806c326c;
                plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
                puVar11 = (uint64_t *)
                          (**(code **)(*plVar10 + 8))
                                    (plVar10,0x20,&unknown_var_1872_ptr,&unknown_var_1776_ptr,
                                     CONCAT44(uVar15,0xad));
                puVar11[1] = 0;
                *(int32_t *)puVar11 = 6;
                *(int32_t *)(puVar11 + 2) = 0x3f800000;
                *(int32_t *)((int64_t)puVar11 + 0x14) = 0x3f800000;
                *(int32_t *)(puVar11 + 3) = 0x3f800000;
                *(int8_t *)((int64_t)puVar11 + 0x1c) = 0;
                *(int16_t *)((int64_t)puVar11 + 0x1d) = 0;
                *(int8_t *)((int64_t)puVar11 + 0x1f) = 0;
                __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
                __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_178);
                lStack_1d8 = param_1[2];
                lStack_1d0 = param_1[3];
                lStack_1e8 = *param_1;
                lStack_1e0 = param_1[1];
                lStack_1c0 = param_1[5];
                lStack_1b0 = param_1[7];
                lStack_1a8 = param_1[8];
                lStack_1c8 = param_1[4];
                ppcStack_198 = &pcStackX_8;
                pcStackX_8 = (char *)((uint64_t)pcStackX_8 & 0xffffffffffffff00);
                uStack_190 = 0;
                uStack_188 = 0;
                uStack_1a0 = 1;
                puStack_1b8 = puVar11;
                FUN_1806c89f0(&lStack_178,&lStack_1e8,0);
              }
            }
          }
          goto LAB_1806c3258;
        }
        plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
        puVar11 = (uint64_t *)
                  (**(code **)(*plVar10 + 8))
                            (plVar10,0xc,&unknown_var_1872_ptr,&unknown_var_1776_ptr,CONCAT44(uVar15,0xad));
        *(int32_t *)(puVar11 + 1) = 0;
        *puVar11 = 2;
        __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_178);
        __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(auStack_d8);
        puStack_208 = (void *)param_1[2];
        uStack_200 = *(uint *)(param_1 + 3);
        uStack_1fc = *(int32_t *)((int64_t)param_1 + 0x1c);
        lStack_1f8 = param_1[4];
        cVar4 = FUN_1806c36a0(&puStack_208,*param_1,param_1[1],param_1[5],puVar11,param_1[7],
                              param_1[8],auStack_d8);
        goto joined_r0x0001806c2e65;
      }
      plVar10 = (int64_t *)(**(code **)(*(int64_t *)param_1[7] + 0x18))();
      puVar11 = (uint64_t *)
                (**(code **)(*plVar10 + 8))
                          (plVar10,4,&unknown_var_1872_ptr,&unknown_var_1776_ptr,CONCAT44(uVar15,0xad));
      *(int32_t *)puVar11 = 1;
      __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(&pcStackX_8);
      __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(&lStackX_20);
    }
    *param_2 = puVar11;
  }
LAB_1806c326c:
  FUN_1806d6eb0(param_1);
FUN_1806c327c:
  lVar7 = param_1[1];
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar2 = *(uint *)(*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 4);
    lVar12 = *param_1;
    if (uVar2 < *(uint *)(lVar12 + 0x10)) {
      do {
        if (*(int *)(lVar12 + 0x10) != 0) {
          uVar13 = (uint64_t)(*(int *)(lVar12 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar12 + 8) + 8 + uVar13 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar12 + 8) + 0x10 + uVar13 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)param_1[5] + 0x48))();
            lVar12 = *param_1;
          }
          *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
          lVar12 = *param_1;
        }
        *(int8_t *)(param_1 + 9) = 1;
        uVar14 = *(uint *)(lVar12 + 0x10);
        if ((uVar14 != 0) &&
           (*(char *)(*(int64_t *)(lVar12 + 8) + 0x10 + (uint64_t)(uVar14 - 1) * 0x18) == '\0')) {
          *(int8_t *)(param_1 + 9) = 0;
          uVar14 = *(uint *)(lVar12 + 0x10);
        }
      } while (uVar2 < uVar14);
      lVar7 = param_1[1];
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return;
}







/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager
#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part042.c - 14 个函数
// 函数: void UtilitiesSystem_c21de(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
void UtilitiesSystem_c21de(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
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
  int local_buffer_50;
  char *local_buffer_68;
  MemoryPoolManager0();
  local_buffer_50 = 0x16c;
  piVar7 = &local_buffer_00000050;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar7 = (int *)unaff_RBX[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    MemoryPoolManager0();
    lVar8 = param_4[1];
    local_buffer_68 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar6 = &ui_system_data_1920_ptr;
      }
      else {
        puVar6 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar6,&local_buffer_00000068);
      if (((cVar2 != '\0') && (local_buffer_68 != (char *)0x0)) && (*local_buffer_68 != '\0')) {
        uVar3 = UtilitiesSystem_d5410(local_buffer_68,&system_data_05d0);
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
// 函数: void UtilitiesSystem_c221f(void)
void UtilitiesSystem_c221f(void)
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
  char *local_buffer_68;
  do {
    MemoryPoolManager0();
    lVar6 = unaff_RDI[1];
    cVar7 = (char)unaff_R15;
    local_buffer_68 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar7) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &ui_system_data_1920_ptr;
      }
      else {
        puVar5 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar5,&local_buffer_00000068);
      if (((cVar2 != '\0') && (local_buffer_68 != (char *)0x0)) && (*local_buffer_68 != cVar7))
      {
        uVar3 = UtilitiesSystem_d5410(local_buffer_68,&system_data_05d0);
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
// 函数: void UtilitiesSystem_c230f(void)
void UtilitiesSystem_c230f(void)
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
// 函数: void UtilitiesSystem_c2329(uint64_t param_1,uint64_t param_2,int64_t param_3)
void UtilitiesSystem_c2329(uint64_t param_1,uint64_t param_2,int64_t param_3)
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
// 函数: void UtilitiesSystem_c2390(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4,
void UtilitiesSystem_c2390(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4,
                  uint64_t param_5)
{
  int64_t *plVar1;
  char cVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int8_t uVar5;
  int64_t lVar6;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int8_t stack_array_48 [16];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int64_t lStack_28;
  MemoryPoolManager0(param_1,*param_3);
  lVar6 = *param_4;
  while (lVar6 != 0) {
    MemoryPoolManager0(param_1,lVar6);
    lVar6 = param_4[1];
    cVar2 = RenderingSystem_ShaderCompiler(param_1);
    if (cVar2 != '\0') {
      puVar3 = (int32_t *)(*(code *)param_3[3])(stack_array_48,param_1[6],(int)lVar6);
      local_var_68 = *puVar3;
      local_var_64 = puVar3[1];
      local_var_60 = puVar3[2];
      lStack_28 = param_1[4];
      local_var_5c = puVar3[3];
      local_var_38 = (int32_t)param_1[2];
      local_var_34 = *(int32_t *)((int64_t)param_1 + 0x14);
      local_var_30 = (int32_t)param_1[3];
      local_var_2c = *(int32_t *)((int64_t)param_1 + 0x1c);
      cVar2 = UtilitiesSystem_c3840(&local_var_38,*param_1,param_1[1],param_1[5],&local_var_68,param_1[7],
                            param_1[8],param_5);
      if (cVar2 == '\0') {
        *(int8_t *)param_1[10] = 1;
      }
      local_var_58 = CONCAT44(local_var_64,local_var_68);
      local_var_50 = local_var_60;
      local_var_4c = local_var_5c;
      (*(code *)param_3[2])(param_1[6],(int)lVar6,&local_var_58);
    }
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(int64_t *)param_1[5] + 0x48))();
        lVar6 = *param_1;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *param_1;
    }
    *(int8_t *)(param_1 + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(int8_t *)(param_1 + 9) = uVar5;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar5;
  }
  return;
}
// 函数: void UtilitiesSystem_c23a3(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
void UtilitiesSystem_c23a3(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
{
  int64_t *plVar1;
  char cVar2;
  int64_t in_RAX;
  int32_t *puVar3;
  uint64_t uVar4;
  int8_t uVar5;
  int64_t *unaff_RBX;
  uint64_t unaff_RDI;
  int64_t lVar6;
  uint64_t unaff_R14;
  int32_t uVar7;
  int32_t extraout_XMM0_Da;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  uint64_t local_buffer_50;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_70;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  int64_t local_buffer_80;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R14;
  uVar7 = MemoryPoolManager0();
  lVar6 = *param_4;
  while (lVar6 != 0) {
    MemoryPoolManager0(uVar7,lVar6);
    lVar6 = param_4[1];
    cVar2 = RenderingSystem_ShaderCompiler();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
      puVar3 = (int32_t *)(**(code **)(param_3 + 0x18))(&local_buffer_00000060,unaff_RBX[6],(int)lVar6)
      ;
      local_var_40 = *puVar3;
      local_buffer_44 = puVar3[1];
      local_var_48 = puVar3[2];
      local_buffer_80 = unaff_RBX[4];
      local_buffer_4c = puVar3[3];
      local_buffer_70 = (int32_t)unaff_RBX[2];
      local_buffer_74 = *(int32_t *)((int64_t)unaff_RBX + 0x14);
      local_buffer_78 = (int32_t)unaff_RBX[3];
      local_buffer_7c = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
      cVar2 = UtilitiesSystem_c3840(&local_buffer_00000070,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],&local_buffer_00000040);
      if (cVar2 == '\0') {
        *(int8_t *)unaff_RBX[10] = 1;
      }
      local_buffer_50 = CONCAT44(local_buffer_44,local_var_40);
      local_buffer_58 = local_var_48;
      local_buffer_5c = local_buffer_4c;
      uVar7 = (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar6,&local_buffer_00000050);
    }
    lVar6 = *unaff_RBX;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        uVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar6 = *unaff_RBX;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar5 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(int8_t *)(unaff_RBX + 9) = uVar5;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *unaff_RBX;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar6 = *unaff_RBX;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (int8_t)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(unaff_RBX + 9) = uVar5;
  }
  return;
}
// 函数: void UtilitiesSystem_c23c5(int32_t param_1)
void UtilitiesSystem_c23c5(int32_t param_1)
{
  int32_t uVar1;
  char cVar2;
  int64_t in_RAX;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t unaff_R14;
  char unaff_R15B;
  int32_t extraout_XMM0_Da;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  uint64_t local_buffer_50;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_70;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  int64_t local_buffer_80;
  do {
    MemoryPoolManager0(param_1,in_RAX);
    uVar1 = *(int32_t *)(unaff_RDI + 8);
    cVar2 = RenderingSystem_ShaderCompiler();
    param_1 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
      puVar3 = (int32_t *)(**(code **)(unaff_R14 + 0x18))(&local_buffer_00000060,unaff_RBX[6],uVar1);
      local_var_40 = *puVar3;
      local_buffer_44 = puVar3[1];
      local_var_48 = puVar3[2];
      local_buffer_80 = unaff_RBX[4];
      local_buffer_4c = puVar3[3];
      local_buffer_70 = (int32_t)unaff_RBX[2];
      local_buffer_74 = *(int32_t *)((int64_t)unaff_RBX + 0x14);
      local_buffer_78 = (int32_t)unaff_RBX[3];
      local_buffer_7c = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
      cVar2 = UtilitiesSystem_c3840(&local_buffer_00000070,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],&local_buffer_00000040);
      if (cVar2 == '\0') {
        *(int8_t *)unaff_RBX[10] = 1;
      }
      local_buffer_50 = CONCAT44(local_buffer_44,local_var_40);
      local_buffer_58 = local_var_48;
      local_buffer_5c = local_buffer_4c;
      param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],uVar1,&local_buffer_00000050);
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar4 * 0x18) != unaff_R15B) &&
         (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar4 * 0x18) != unaff_R15B)) {
        param_1 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar5 = *unaff_RBX;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      lVar5 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                   ) == unaff_R15B) {
        cVar2 = unaff_R15B;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    in_RAX = *(int64_t *)(unaff_RDI + 0x10);
    unaff_RDI = unaff_RDI + 0x10;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar4 * 0x18) != unaff_R15B) &&
       (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar4 * 0x18) != unaff_R15B)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar5 = *unaff_RBX;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c2543(void)
void UtilitiesSystem_c2543(void)
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
// 函数: void UtilitiesSystem_c255e(uint64_t param_1,uint64_t param_2,int64_t param_3)
void UtilitiesSystem_c255e(uint64_t param_1,uint64_t param_2,int64_t param_3)
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
// 函数: void UtilitiesSystem_c25c0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
void UtilitiesSystem_c25c0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int32_t *plocal_var_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int8_t stack_array_c0 [24];
  int8_t stack_array_a8 [128];
  SystemValidator(param_1,*param_3);
  lVar6 = *param_4;
  while (lVar6 != 0) {
    SystemValidator(param_1,lVar6);
    puVar5 = (int32_t *)(*(code *)param_3[3])(stack_array_c0,param_1[2],(int)param_4[1]);
    lVar6 = *param_1;
    lVar2 = param_1[1];
    lVar3 = param_1[3];
    local_var_108 = *puVar5;
    lVar4 = param_1[4];
    local_var_104 = puVar5[1];
    local_var_100 = puVar5[2];
    local_var_fc = puVar5[3];
    SystemFunction_0001806f45b0(stack_array_a8);
    plocal_var_e8 = &local_var_108;
    local_var_d0 = 0;
    local_var_c8 = 0;
    lStack_f8 = lVar6;
    lStack_f0 = lVar2;
    lStack_e0 = lVar3;
    lStack_d8 = lVar4;
    UtilitiesSystem_ce230(stack_array_a8,&lStack_f8,0);
    plocal_var_e8 = &local_var_108;
    local_var_d0 = 0;
    local_var_c8 = 0;
    lStack_f8 = lVar6;
    lStack_f0 = lVar2;
    lStack_e0 = lVar3;
    lStack_d8 = lVar4;
    UtilitiesSystem_cf480(stack_array_a8,&lStack_f8,0);
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(int64_t *)param_1[1] + 0x20))();
        lVar6 = *param_1;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c25d7(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
void UtilitiesSystem_c25d7(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7,int32_t *param_8,
                  int64_t param_9,int64_t param_10,uint64_t param_11,uint64_t param_12)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t *unaff_R15;
  int32_t uVar7;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  uVar7 = SystemValidator();
  lVar6 = *param_4;
  while (lVar6 != 0) {
    SystemValidator(uVar7,lVar6);
    puVar5 = (int32_t *)
             (**(code **)(param_3 + 0x18))(&local_buffer_00000068,unaff_R15[2],(int)param_4[1]);
    lVar6 = *unaff_R15;
    lVar2 = unaff_R15[1];
    lVar3 = unaff_R15[3];
    stack_special_x_20 = *puVar5;
    lVar4 = unaff_R15[4];
    stack_special_x_24 = puVar5[1];
    SystemFunction_0001806f45b0(unaff_RBP + -0x80);
    param_8 = &stack_special_x_20;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar6;
    param_7 = lVar2;
    param_9 = lVar3;
    param_10 = lVar4;
    UtilitiesSystem_ce230(unaff_RBP + -0x80,&param_6,0);
    param_8 = &stack_special_x_20;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar6;
    param_7 = lVar2;
    param_9 = lVar3;
    param_10 = lVar4;
    uVar7 = UtilitiesSystem_cf480(unaff_RBP + -0x80,&param_6,0);
    lVar6 = *unaff_R15;
    if (*(int *)(lVar6 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          != '\0') {
        uVar7 = (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
        lVar6 = *unaff_R15;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *unaff_R15;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
      lVar6 = *unaff_R15;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c25f7(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_c25f7(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7,int8_t *param_8,
                  int64_t param_9,int64_t param_10,uint64_t param_11,uint64_t param_12)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  int32_t uVar6;
  do {
    SystemValidator(param_1,in_RAX);
    puVar4 = (int32_t *)
             (**(code **)(unaff_R13 + 0x18))
                       (&local_buffer_00000068,unaff_R15[2],*(int32_t *)(unaff_R12 + 8));
    lVar5 = *unaff_R15;
    lVar1 = unaff_R15[1];
    lVar2 = unaff_R15[3];
    uVar6 = *puVar4;
    lVar3 = unaff_R15[4];
    SystemFunction_0001806f45b0(unaff_RBP + -0x80);
    param_8 = &local_buffer_00000020;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar5;
    param_7 = lVar1;
    param_9 = lVar2;
    param_10 = lVar3;
    UtilitiesSystem_ce230(unaff_RBP + -0x80,&param_6,0,param_4,uVar6);
    param_8 = &local_buffer_00000020;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar5;
    param_7 = lVar1;
    param_9 = lVar2;
    param_10 = lVar3;
    param_1 = UtilitiesSystem_cf480(unaff_RBP + -0x80,&param_6,0);
    lVar5 = *unaff_R15;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        param_1 = (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
        lVar5 = *unaff_R15;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
    in_RAX = *(int64_t *)(unaff_R12 + 0x10);
    unaff_R12 = unaff_R12 + 0x10;
  } while (in_RAX != 0);
  lVar5 = *unaff_R15;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
      lVar5 = *unaff_R15;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c2749(void)
void UtilitiesSystem_c2749(void)
{
  int64_t lVar1;
  int64_t *unaff_R15;
  lVar1 = *unaff_R15;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
      lVar1 = *unaff_R15;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c2763(uint64_t param_1,int64_t param_2)
void UtilitiesSystem_c2763(uint64_t param_1,int64_t param_2)
{
  int in_EAX;
  int64_t *unaff_R15;
  if (*(char *)(*(int64_t *)(param_2 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
    param_2 = *unaff_R15;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}
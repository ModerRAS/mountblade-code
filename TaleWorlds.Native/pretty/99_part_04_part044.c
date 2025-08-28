/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
#include "RenderingSystemProcessor0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part044.c - 13 个函数
// 函数: void DataStructure_b0670(int64_t param_1)
void DataStructure_b0670(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t *puVar5;
  int64_t *aplStackX_10 [3];
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x18) + 0x106c);
  if (iVar1 != -1) {
    puVar5 = (uint64_t *)
             GenericFunction_180157b70(param_1,aplStackX_10,iVar1,*(uint64_t *)(param_1 + 0x50),1);
    uVar2 = *puVar5;
    *puVar5 = 0;
    plVar3 = *(int64_t **)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = uVar2;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
    cVar4 = (**(code **)(**(int64_t **)(param_1 + 0x58) + 0xd8))();
    if (cVar4 == '\0') {
      plVar3 = *(int64_t **)(param_1 + 0x58);
      *(uint64_t *)(param_1 + 0x58) = 0;
      if (plVar3 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001802b071b. Too many branches
// WARNING: Treating indirect jump as call
        (**(code **)(*plVar3 + 0x38))();
        return;
      }
    }
    else {
      (**(code **)(**(int64_t **)(param_1 + 0x58) + 0xa8))
                (*(int64_t **)(param_1 + 0x58),*(int64_t *)(param_1 + 0x20) + 0xe0);
      if ((*(char *)(system_system_data_config + 0x161) != '\0') && (*(char *)(system_system_data_config + 0x210) == '\0')
         ) {
// WARNING: Could not recover jumptable at 0x0001802b075c. Too many branches
// WARNING: Treating indirect jump as call
        (**(code **)(**(int64_t **)(param_1 + 0x58) + 0x60))();
        return;
      }
    }
  }
  return;
}
// 函数: void DataStructure_b0770(int64_t param_1)
void DataStructure_b0770(int64_t param_1)
{
  int64_t *plVar1;
  if (*(int64_t **)(param_1 + 0x58) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x58) + 0x68))();
    plVar1 = *(int64_t **)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = 0;
    if (plVar1 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001802b07b2. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}
// 函数: void DataStructure_b07c0(int64_t param_1,int64_t param_2,int param_3)
void DataStructure_b07c0(int64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int *piVar9;
  int32_t astack_special_x_8 [2];
  int64_t lStackX_10;
  int64_t lStackX_20;
  lVar5 = (int64_t)(int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88);
  if (0 < lVar5) {
    lVar8 = 0;
    lStackX_10 = param_2;
    do {
      if ((*(int *)(*(int64_t *)(*(int64_t *)(lVar8 + *(int64_t *)(param_1 + 0x30)) + 0x48) +
                   0x70) == 0) && (0 < (int64_t)param_3)) {
        piVar9 = (int *)(param_2 + 0x58);
        lStackX_20 = (int64_t)param_3;
        do {
          lVar2 = *(int64_t *)(param_1 + 0x30);
          uVar3 = *(uint64_t *)(param_1 + 0x50);
          iVar1 = *piVar9;
          lVar6 = *(int64_t *)(lVar8 + 0x70 + lVar2);
          if (*(int64_t *)(lVar8 + 0x68 + lVar2) == lVar6) {
            plVar4 = (int64_t *)(lVar2 + 0x28 + lVar8);
            lVar6 = (plVar4[1] - *plVar4) / 0x12 + (plVar4[1] - *plVar4 >> 0x3f);
            iVar7 = (int)(lVar6 >> 3) - (int)(lVar6 >> 0x3f);
            DataStructure_b7020(plVar4,(int64_t)(iVar7 + 1));
          }
          else {
            iVar7 = *(int *)(lVar6 + -4);
            *(int64_t *)(lVar8 + 0x70 + lVar2) = lVar6 + -4;
          }
          plVar4 = (int64_t *)(lVar2 + 0x48 + lVar8);
          lVar6 = *plVar4;
          if ((uint64_t)(plVar4[1] - lVar6 >> 2) <= (uint64_t)(int64_t)iVar1) {
            astack_special_x_8[0] = 0xffffffff;
            GenericFunction_18014e020(plVar4,(int64_t)(iVar1 + 1),astack_special_x_8);
            lVar6 = *(int64_t *)(lVar8 + 0x48 + lVar2);
          }
          *(int *)(lVar6 + (int64_t)iVar1 * 4) = iVar7;
          DataStructure_b1260((int64_t)iVar7 * 0x90 + *(int64_t *)(lVar8 + 0x28 + lVar2),uVar3,
                        *(uint64_t *)(*(int64_t *)(lVar8 + lVar2) + 0x48),
                        *(int64_t *)(lVar8 + lVar2));
          piVar9 = piVar9 + 0x1c;
          lStackX_20 = lStackX_20 + -1;
          param_2 = lStackX_10;
        } while (lStackX_20 != 0);
      }
      lVar8 = lVar8 + 0x88;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}
// 函数: void DataStructure_b080f(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
void DataStructure_b080f(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                  int64_t param_5)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar6;
  uint64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar7;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int *piVar8;
  int64_t unaff_R15;
  int64_t lStackX_20;
  int32_t local_var_70;
  int64_t local_var_78;
  int64_t lStack0000000000000088;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  lVar7 = 0;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  do {
    if ((*(int *)(*(int64_t *)(*(int64_t *)(lVar7 + *(int64_t *)(unaff_R15 + 0x30)) + 0x48) +
                 0x70) == 0) && (0 < param_4)) {
      piVar8 = (int *)(in_R10 + 0x58);
      lStack0000000000000088 = param_4;
      do {
        lVar2 = *(int64_t *)(unaff_R15 + 0x30);
        uVar3 = *(uint64_t *)(unaff_R15 + 0x50);
        iVar1 = *piVar8;
        lVar5 = *(int64_t *)(lVar7 + 0x70 + lVar2);
        if (*(int64_t *)(lVar7 + 0x68 + lVar2) == lVar5) {
          plVar4 = (int64_t *)(lVar2 + 0x28 + lVar7);
          lVar5 = (plVar4[1] - *plVar4) / 0x12 + (plVar4[1] - *plVar4 >> 0x3f);
          iVar6 = (int)(lVar5 >> 3) - (int)(lVar5 >> 0x3f);
          DataStructure_b7020(plVar4,(int64_t)(iVar6 + 1));
        }
        else {
          iVar6 = *(int *)(lVar5 + -4);
          *(int64_t *)(lVar7 + 0x70 + lVar2) = lVar5 + -4;
        }
        plVar4 = (int64_t *)(lVar2 + 0x48 + lVar7);
        lVar5 = *plVar4;
        if ((uint64_t)(plVar4[1] - lVar5 >> 2) <= (uint64_t)(int64_t)iVar1) {
          local_var_70 = 0xffffffff;
          GenericFunction_18014e020(plVar4,(int64_t)(iVar1 + 1),&local_buffer_00000070);
          lVar5 = *(int64_t *)(lVar7 + 0x48 + lVar2);
        }
        *(int *)(lVar5 + (int64_t)iVar1 * 4) = iVar6;
        DataStructure_b1260((int64_t)iVar6 * 0x90 + *(int64_t *)(lVar7 + 0x28 + lVar2),uVar3,
                      *(uint64_t *)(*(int64_t *)(lVar7 + lVar2) + 0x48),
                      *(int64_t *)(lVar7 + lVar2));
        piVar8 = piVar8 + 0x1c;
        lStack0000000000000088 = lStack0000000000000088 + -1;
        param_2 = lStackX_20;
        param_4 = param_5;
        in_R10 = local_var_78;
      } while (lStack0000000000000088 != 0);
    }
    lVar7 = lVar7 + 0x88;
    param_2 = param_2 + -1;
    lStackX_20 = param_2;
  } while (param_2 != 0);
  return;
}
// 函数: void DataStructure_b098a(void)
void DataStructure_b098a(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_b09d0(int64_t param_1,int32_t param_2)
void DataStructure_b09d0(int64_t param_1,int32_t param_2)
{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  puVar4 = *(int32_t **)(param_1 + 0x70);
  if (puVar4 < *(int32_t **)(param_1 + 0x78)) {
    *(int32_t **)(param_1 + 0x70) = puVar4 + 1;
    *puVar4 = param_2;
    return;
  }
  puVar3 = *(int32_t **)(param_1 + 0x68);
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 2;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (int32_t *)0x0;
      goto LAB_1802b0a61;
    }
  }
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(param_1 + 0x80));
  puVar3 = *(int32_t **)(param_1 + 0x68);
  puVar4 = *(int32_t **)(param_1 + 0x70);
LAB_1802b0a61:
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = param_2;
  if (*(int64_t *)(param_1 + 0x68) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int32_t **)(param_1 + 0x68) = puVar2;
  *(int32_t **)(param_1 + 0x70) = puVar2 + 1;
  *(int32_t **)(param_1 + 0x78) = puVar2 + lVar1;
  return;
}
// 函数: void DataStructure_b0ad0(int64_t param_1,int64_t param_2)
void DataStructure_b0ad0(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int8_t auVar4 [16];
  bool bVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int aiStackX_8 [2];
  int64_t lStackX_10;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int8_t stack_array_78 [64];
  bVar5 = false;
  iVar11 = (int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88);
  lVar13 = (int64_t)iVar11;
  if (0 < iVar11) {
    lVar8 = 0;
    lStackX_10 = param_2;
    do {
      lVar9 = *(int64_t *)(param_1 + 0x30);
      lVar7 = *(int64_t *)(lVar8 + 0x48 + lVar9);
      lVar10 = lVar8 + lVar9;
      uVar12 = (uint64_t)*(int *)(lStackX_10 + 0x58);
      if (uVar12 < (uint64_t)(*(int64_t *)(lVar10 + 0x50) - lVar7 >> 2)) {
        aiStackX_8[0] = *(int *)(lVar7 + uVar12 * 4);
      }
      else {
        aiStackX_8[0] = -1;
      }
      if (aiStackX_8[0] != -1) {
        DataStructure_b13d0((int64_t)aiStackX_8[0] * 0x90 + *(int64_t *)(lVar10 + 0x28));
        *(int32_t *)(*(int64_t *)(lVar10 + 0x48) + uVar12 * 4) = 0xffffffff;
        SystemDatabaseProcessor(lVar10 + 0x68,aiStackX_8);
        lVar9 = *(int64_t *)(param_1 + 0x30);
      }
      lVar10 = 0xe38e38e38e38e39;
      if (*(int *)(*(int64_t *)(*(int64_t *)(lVar8 + lVar9) + 0x48) + 0x70) == 1) {
        if (!bVar5) {
          DataStructure_ac500(lStackX_10,stack_array_78,&local_var_b8);
          lVar9 = *(int64_t *)(param_1 + 0x30);
          bVar5 = true;
        }
        lVar7 = *(int64_t *)(lVar8 + 0x70 + lVar9);
        uVar3 = *(uint64_t *)(param_1 + 0x50);
        if (*(int64_t *)(lVar8 + 0x68 + lVar9) == lVar7) {
          plVar6 = (int64_t *)(lVar9 + 0x28 + lVar8);
          auVar4 = SEXT816(lVar10) * SEXT816(plVar6[1] - *plVar6);
          iVar11 = (int)(auVar4._8_8_ >> 3) - (auVar4._12_4_ >> 0x1f);
          DataStructure_b7020(plVar6,(int64_t)(iVar11 + 1));
          DataStructure_b6d10(lVar9 + 8 + lVar8,(int64_t)(iVar11 + 1));
        }
        else {
          iVar11 = *(int *)(lVar7 + -4);
          *(int64_t *)(lVar8 + 0x70 + lVar9) = lVar7 + -4;
        }
        DataStructure_b1260((int64_t)iVar11 * 0x90 + *(int64_t *)(lVar8 + 0x28 + lVar9),uVar3,
                      *(uint64_t *)(*(int64_t *)(lVar8 + lVar9) + 0x48),
                      *(int64_t *)(lVar8 + lVar9));
        lVar10 = *(int64_t *)(lVar8 + 8 + lVar9);
        lVar7 = (int64_t)iVar11 * 0x40;
        *(uint64_t *)(lVar10 + lVar7) = local_var_b8;
        ((uint64_t *)(lVar10 + lVar7))[1] = local_var_b0;
        puVar1 = (uint64_t *)(lVar10 + 0x10 + lVar7);
        *puVar1 = local_var_a8;
        puVar1[1] = local_var_a0;
        puVar2 = (int32_t *)(lVar10 + 0x20 + lVar7);
        *puVar2 = local_var_98;
        puVar2[1] = local_var_94;
        puVar2[2] = local_var_90;
        puVar2[3] = local_var_8c;
        puVar1 = (uint64_t *)(lVar10 + 0x30 + lVar7);
        *puVar1 = local_var_88;
        puVar1[1] = local_var_80;
      }
      lVar8 = lVar8 + 0x88;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}
// 函数: void DataStructure_b0b1a(void)
void DataStructure_b0b1a(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int8_t auVar4 [16];
  int64_t *plVar5;
  uint64_t unaff_RBX;
  int64_t lVar6;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar7;
  uint64_t unaff_RDI;
  int64_t lVar8;
  int64_t in_R9;
  int64_t lVar9;
  int64_t in_R11;
  char unaff_R12B;
  uint64_t unaff_R13;
  int iVar10;
  uint64_t unaff_R14;
  uint64_t uVar11;
  int64_t unaff_R15;
  uint64_t stack_special_x_20;
  uint64_t local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  uint64_t local_buffer_50;
  uint64_t local_var_58;
  int iStack00000000000000e0;
  int64_t local_var_e8;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  lVar7 = 0;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  do {
    lVar8 = *(int64_t *)(unaff_RBP + 0x30);
    lVar6 = *(int64_t *)(lVar7 + 0x48 + lVar8);
    lVar9 = lVar7 + lVar8;
    uVar11 = (uint64_t)*(int *)(in_R9 + 0x58);
    if (uVar11 < (uint64_t)(*(int64_t *)(lVar9 + 0x50) - lVar6 >> 2)) {
      iStack00000000000000e0 = *(int *)(lVar6 + uVar11 * 4);
    }
    else {
      iStack00000000000000e0 = -1;
    }
    if (iStack00000000000000e0 != -1) {
      DataStructure_b13d0((int64_t)iStack00000000000000e0 * 0x90 + *(int64_t *)(lVar9 + 0x28));
      *(int32_t *)(*(int64_t *)(lVar9 + 0x48) + uVar11 * 4) = 0xffffffff;
      SystemDatabaseProcessor(lVar9 + 0x68,&local_buffer_000000e0);
      lVar8 = *(int64_t *)(unaff_RBP + 0x30);
      in_R9 = local_var_e8;
    }
    lVar9 = 0xe38e38e38e38e39;
    if (*(int *)(*(int64_t *)(*(int64_t *)(lVar7 + lVar8) + 0x48) + 0x70) == 1) {
      if (unaff_R12B == '\0') {
        DataStructure_ac500(in_R9,&local_buffer_00000060,&stack_special_x_20);
        lVar8 = *(int64_t *)(unaff_RBP + 0x30);
        unaff_R12B = '\x01';
      }
      lVar6 = *(int64_t *)(lVar7 + 0x70 + lVar8);
      uVar3 = *(uint64_t *)(unaff_RBP + 0x50);
      if (*(int64_t *)(lVar7 + 0x68 + lVar8) == lVar6) {
        plVar5 = (int64_t *)(lVar8 + 0x28 + lVar7);
        auVar4 = SEXT816(lVar9) * SEXT816(plVar5[1] - *plVar5);
        iVar10 = (int)(auVar4._8_8_ >> 3) - (auVar4._12_4_ >> 0x1f);
        DataStructure_b7020(plVar5,(int64_t)(iVar10 + 1));
        DataStructure_b6d10(lVar8 + 8 + lVar7,(int64_t)(iVar10 + 1));
      }
      else {
        iVar10 = *(int *)(lVar6 + -4);
        *(int64_t *)(lVar7 + 0x70 + lVar8) = lVar6 + -4;
      }
      DataStructure_b1260((int64_t)iVar10 * 0x90 + *(int64_t *)(lVar7 + 0x28 + lVar8),uVar3,
                    *(uint64_t *)(*(int64_t *)(lVar7 + lVar8) + 0x48),
                    *(int64_t *)(lVar7 + lVar8));
      lVar9 = *(int64_t *)(lVar7 + 8 + lVar8);
      lVar6 = (int64_t)iVar10 * 0x40;
      *(uint64_t *)(lVar9 + lVar6) = stack_special_x_20;
      ((uint64_t *)(lVar9 + lVar6))[1] = local_var_28;
      puVar1 = (uint64_t *)(lVar9 + 0x10 + lVar6);
      *puVar1 = local_var_30;
      puVar1[1] = local_var_38;
      puVar2 = (int32_t *)(lVar9 + 0x20 + lVar6);
      *puVar2 = local_buffer_40;
      puVar2[1] = local_buffer_44;
      puVar2[2] = local_buffer_48;
      puVar2[3] = local_buffer_4c;
      puVar1 = (uint64_t *)(lVar9 + 0x30 + lVar6);
      *puVar1 = local_buffer_50;
      puVar1[1] = local_var_58;
    }
    lVar7 = lVar7 + 0x88;
    unaff_R15 = unaff_R15 + -1;
    in_R9 = local_var_e8;
  } while (unaff_R15 != 0);
  return;
}
// 函数: void DataStructure_b0cee(void)
void DataStructure_b0cee(void)
{
  return;
}
// 函数: void DataStructure_b0d00(int64_t param_1,uint64_t param_2,float *param_3,int32_t *param_4)
void DataStructure_b0d00(int64_t param_1,uint64_t param_2,float *param_3,int32_t *param_4)
{
  uint64_t *puVar1;
  float *pfVar2;
  int32_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t local_var_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  iVar13 = (int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88);
  bVar6 = false;
  bVar8 = false;
  lVar12 = (int64_t)iVar13;
  if (0 < iVar13) {
    lVar11 = 0;
    do {
      lVar4 = *(int64_t *)(param_1 + 0x30);
      if (*(int *)(*(int64_t *)(*(int64_t *)(lVar11 + lVar4) + 0x48) + 0x70) == 2) {
        bVar7 = !bVar6;
        bVar6 = bVar8;
        if (bVar7) {
          fVar14 = *param_3;
          fVar18 = param_3[1];
          fVar16 = param_3[2];
          fVar15 = fVar18 * fVar18 + fVar14 * fVar14 + fVar16 * fVar16;
          auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar19 = auVar17._0_4_;
          fVar15 = fVar19 * 0.5 * (3.0 - fVar15 * fVar19 * fVar19);
          fStack_f4 = fVar18 * fVar15;
          fStack_f8 = fVar15 * fVar14;
          fStack_f0 = fVar16 * fVar15;
          if (ABS(fStack_f8) <= 0.999) {
            fVar18 = 1.0;
            fVar14 = 0.0;
          }
          else {
            fVar18 = 0.0;
            fVar14 = -1.0;
          }
          fVar16 = fStack_f0 * fVar18;
          fVar19 = -(fStack_f0 * fVar14);
          fVar14 = fStack_f8 * fVar14 - fStack_f4 * fVar18;
          fVar18 = fVar16 * fVar16 + fVar19 * fVar19 + fVar14 * fVar14;
          auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar15 = auVar17._0_4_;
          fVar18 = fVar15 * 0.5 * (3.0 - fVar18 * fVar15 * fVar15);
          fStack_104 = fVar16 * fVar18;
          fStack_100 = fVar14 * fVar18;
          fStack_108 = fVar19 * fVar18;
          fVar15 = fStack_f0 * fStack_104 - fStack_f4 * fStack_100;
          fVar16 = fStack_f8 * fStack_100 - fStack_f0 * fStack_108;
          fVar19 = fStack_108 * fStack_f4 - fStack_f8 * fStack_104;
          fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar19 * fVar19;
          auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar18 = auVar17._0_4_;
          fVar14 = fVar18 * 0.5 * (3.0 - fVar14 * fVar18 * fVar18);
          fStack_118 = fVar15 * fVar14;
          fStack_114 = fVar16 * fVar14;
          local_var_e8 = *param_4;
          local_var_e4 = param_4[1];
          local_var_e0 = param_4[2];
          local_var_10c = 0;
          fStack_110 = fVar19 * fVar14;
          local_var_fc = 0;
          local_var_dc = 0x3f800000;
          fStack_ec = 0.0;
          bVar6 = true;
        }
        lVar10 = *(int64_t *)(lVar11 + 0x70 + lVar4);
        uVar5 = *(uint64_t *)(param_1 + 0x50);
        if (*(int64_t *)(lVar11 + 0x68 + lVar4) == lVar10) {
          plVar9 = (int64_t *)(lVar4 + 0x28 + lVar11);
          lVar10 = (plVar9[1] - *plVar9) / 0x12 + (plVar9[1] - *plVar9 >> 0x3f);
          iVar13 = (int)(lVar10 >> 3) - (int)(lVar10 >> 0x3f);
          DataStructure_b7020(plVar9,(int64_t)(iVar13 + 1));
          DataStructure_b6d10(lVar4 + 8 + lVar11,(int64_t)(iVar13 + 1));
        }
        else {
          iVar13 = *(int *)(lVar10 + -4);
          *(int64_t *)(lVar11 + 0x70 + lVar4) = lVar10 + -4;
        }
        DataStructure_b1260((int64_t)iVar13 * 0x90 + *(int64_t *)(lVar11 + 0x28 + lVar4),uVar5,
                      *(uint64_t *)(*(int64_t *)(lVar11 + lVar4) + 0x48),
                      *(int64_t *)(lVar11 + lVar4));
        lVar4 = *(int64_t *)(lVar11 + 8 + lVar4);
        lVar10 = (int64_t)iVar13 * 0x40;
        *(uint64_t *)(lVar10 + lVar4) = CONCAT44(fStack_114,fStack_118);
        ((uint64_t *)(lVar10 + lVar4))[1] = CONCAT44(local_var_10c,fStack_110);
        puVar1 = (uint64_t *)(lVar10 + 0x10 + lVar4);
        *puVar1 = CONCAT44(fStack_104,fStack_108);
        puVar1[1] = CONCAT44(local_var_fc,fStack_100);
        pfVar2 = (float *)(lVar10 + 0x20 + lVar4);
        *pfVar2 = fStack_f8;
        pfVar2[1] = fStack_f4;
        pfVar2[2] = fStack_f0;
        pfVar2[3] = fStack_ec;
        puVar3 = (int32_t *)(lVar10 + 0x30 + lVar4);
        *puVar3 = local_var_e8;
        puVar3[1] = local_var_e4;
        puVar3[2] = local_var_e0;
        puVar3[3] = local_var_dc;
        bVar8 = bVar6;
      }
      lVar11 = lVar11 + 0x88;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}
// 函数: void DataStructure_b0d5d(uint64_t param_1,uint64_t param_2,char param_3,float *param_4,
void DataStructure_b0d5d(uint64_t param_1,uint64_t param_2,char param_3,float *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13)
{
  uint64_t *puVar1;
  float *pfVar2;
  int32_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar8;
  int32_t *in_R10;
  int64_t in_R11;
  int64_t unaff_R12;
  int iVar9;
  int64_t unaff_R15;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  lVar8 = 0;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM14_Dd;
  do {
    lVar4 = *(int64_t *)(unaff_R15 + 0x30);
    if (*(int *)(*(int64_t *)(*(int64_t *)(lVar8 + lVar4) + 0x48) + 0x70) == 2) {
      if (param_3 == '\0') {
        param_10._0_4_ = *param_4;
        param_10._4_4_ = param_4[1];
        param_11._0_4_ = param_4[2];
        fVar10 = param_10._4_4_ * param_10._4_4_ + (float)param_10 * (float)param_10 +
                 (float)param_11 * (float)param_11;
        auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar12 = auVar11._0_4_;
        fVar10 = fVar12 * 0.5 * (3.0 - fVar10 * fVar12 * fVar12);
        param_10._4_4_ = param_10._4_4_ * fVar10;
        param_10._0_4_ = fVar10 * (float)param_10;
        param_11._0_4_ = (float)param_11 * fVar10;
        if (ABS((float)param_10) <= 0.999) {
          fVar12 = 1.0;
          fVar10 = 0.0;
        }
        else {
          fVar12 = 0.0;
          fVar10 = -1.0;
        }
        param_8._4_4_ = (float)param_11 * fVar12;
        param_8._0_4_ = -((float)param_11 * fVar10);
        param_9._0_4_ = (float)param_10 * fVar10 - param_10._4_4_ * fVar12;
        fVar10 = param_8._4_4_ * param_8._4_4_ + (float)param_8 * (float)param_8 +
                 (float)param_9 * (float)param_9;
        auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar12 = auVar11._0_4_;
        fVar10 = fVar12 * 0.5 * (3.0 - fVar10 * fVar12 * fVar12);
        param_8._4_4_ = param_8._4_4_ * fVar10;
        param_9._0_4_ = (float)param_9 * fVar10;
        param_8._0_4_ = (float)param_8 * fVar10;
        param_6._0_4_ = (float)param_11 * param_8._4_4_ - param_10._4_4_ * (float)param_9;
        param_6._4_4_ = (float)param_10 * (float)param_9 - (float)param_11 * (float)param_8;
        param_7._0_4_ = (float)param_8 * param_10._4_4_ - (float)param_10 * param_8._4_4_;
        fVar10 = param_6._4_4_ * param_6._4_4_ + (float)param_6 * (float)param_6 +
                 (float)param_7 * (float)param_7;
        auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar12 = auVar11._0_4_;
        fVar10 = fVar12 * 0.5 * (3.0 - fVar10 * fVar12 * fVar12);
        param_6._0_4_ = (float)param_6 * fVar10;
        param_6._4_4_ = param_6._4_4_ * fVar10;
        param_12._0_4_ = *in_R10;
        param_12._4_4_ = in_R10[1];
        param_13._0_4_ = in_R10[2];
        param_7._4_4_ = 0;
        param_7._0_4_ = (float)param_7 * fVar10;
        param_9._4_4_ = 0;
        param_13._4_4_ = 0x3f800000;
        param_11._4_4_ = 0.0;
        *(int8_t *)(unaff_RBP + 0x58) = 1;
      }
      lVar7 = *(int64_t *)(lVar8 + 0x70 + lVar4);
      uVar5 = *(uint64_t *)(unaff_R15 + 0x50);
      if (*(int64_t *)(lVar8 + 0x68 + lVar4) == lVar7) {
        plVar6 = (int64_t *)(lVar4 + 0x28 + lVar8);
        lVar7 = (plVar6[1] - *plVar6) / 0x12 + (plVar6[1] - *plVar6 >> 0x3f);
        iVar9 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
        DataStructure_b7020(plVar6,(int64_t)(iVar9 + 1));
        DataStructure_b6d10(lVar4 + 8 + lVar8,(int64_t)(iVar9 + 1));
      }
      else {
        iVar9 = *(int *)(lVar7 + -4);
        *(int64_t *)(lVar8 + 0x70 + lVar4) = lVar7 + -4;
      }
      DataStructure_b1260((int64_t)iVar9 * 0x90 + *(int64_t *)(lVar8 + 0x28 + lVar4),uVar5,
                    *(uint64_t *)(*(int64_t *)(lVar8 + lVar4) + 0x48),
                    *(int64_t *)(lVar8 + lVar4));
      lVar4 = *(int64_t *)(lVar8 + 8 + lVar4);
      param_3 = *(char *)(unaff_RBP + 0x58);
      param_4 = *(float **)(unaff_RBP + 0x60);
      in_R10 = *(int32_t **)(unaff_RBP + 0x68);
      lVar7 = (int64_t)iVar9 * 0x40;
      *(uint64_t *)(lVar7 + lVar4) = CONCAT44(param_6._4_4_,(float)param_6);
      ((uint64_t *)(lVar7 + lVar4))[1] = CONCAT44(param_7._4_4_,(float)param_7);
      puVar1 = (uint64_t *)(lVar7 + 0x10 + lVar4);
      *puVar1 = CONCAT44(param_8._4_4_,(float)param_8);
      puVar1[1] = CONCAT44(param_9._4_4_,(float)param_9);
      pfVar2 = (float *)(lVar7 + 0x20 + lVar4);
      *pfVar2 = (float)param_10;
      pfVar2[1] = param_10._4_4_;
      pfVar2[2] = (float)param_11;
      pfVar2[3] = param_11._4_4_;
      puVar3 = (int32_t *)(lVar7 + 0x30 + lVar4);
      *puVar3 = (int32_t)param_12;
      puVar3[1] = param_12._4_4_;
      puVar3[2] = (int32_t)param_13;
      puVar3[3] = param_13._4_4_;
    }
    lVar8 = lVar8 + 0x88;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  return;
}
// 函数: void DataStructure_b11dc(void)
void DataStructure_b11dc(void)
{
  return;
}
int64_t DataStructure_b11f0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 3;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 0x41c64e6d;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x80) = 0x1a;
  DataStructure_b1260(param_1);
  return param_1;
}
// 函数: void DataStructure_b1260(int64_t param_1,int64_t param_2,int64_t *param_3,int64_t param_4)
void DataStructure_b1260(int64_t param_1,int64_t param_2,int64_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  lVar2 = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 100) = 0;
  lStackX_10 = param_2;
  if (param_4 == 0) {
    lVar1 = DataStructure_bf8f0(*(uint64_t *)(param_2 + 0x260),param_3,param_3,0,0xfffffffffffffffe);
    *(int64_t *)(param_1 + 0x20) = lVar1;
    *(byte *)(lVar1 + 0xa1) = (byte)(*(uint *)(param_3 + 0xd) >> 0x15) & 1;
    *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xf0) = param_1;
    param_4 = *(int64_t *)(param_1 + 0x20);
  }
  else {
    *(int64_t *)(param_1 + 0x20) = param_4;
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  *(int64_t *)(param_1 + 0x50) = param_2;
  if (param_3 != (int64_t *)0x0) {
    plStackX_8 = param_3;
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x18);
  *(int64_t **)(param_1 + 0x18) = param_3;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  DataStructure_b14b0(param_1);
  uVar3 = (uint64_t)(int)(param_3[0x1eb] - param_3[0x1ea] >> 3);
  if ((uint64_t)((*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x30)) / 0x88) < uVar3) {
    DataStructure_be360(param_1 + 0x30,uVar3);
  }
  if (0 < (int64_t)uVar3) {
    do {
      plStackX_8 = *(int64_t **)(param_3[0x1ea] + lVar2 * 8);
      if (*(uint64_t *)(param_1 + 0x38) < *(uint64_t *)(param_1 + 0x40)) {
        DataStructure_b68c0(*(uint64_t *)(param_1 + 0x38),param_2);
        *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 0x88;
      }
      else {
        DataStructure_be960(param_1 + 0x30,&lStackX_10,&plStackX_8);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int64_t)uVar3);
  }
  *(int32_t *)(param_1 + 0x88) = 0xffffffff;
  return;
}
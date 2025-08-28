#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_12_part014.c - 7 个函数
// 函数: void SystemCore_d36d0(int64_t param_1)
void SystemCore_d36d0(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int8_t stack_array_338 [32];
  int8_t local_var_318;
  int8_t stack_array_308 [2];
  int8_t stack_array_306 [6];
  uint64_t stack_array_300 [2];
  uint64_t local_var_2f0;
  int64_t *plStack_2e8;
  uint64_t local_var_2e0;
  int aiStack_2d8 [2];
  int64_t *aplStack_2d0 [5];
  int64_t lStack_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  int8_t stack_array_168 [256];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_338;
  lStack_2a8 = param_1;
  if (*(int64_t *)(param_1 + 0x58) != 0) goto SystemCore_d3dfa;
  plStack_2e8 = (int64_t *)(param_1 + 0x60);
  local_var_2e0 = 0xffffffffffffffff;
  aiStack_2d8[0] = -1;
  SystemCore_d2ff0(plStack_2e8,&local_var_2e0,aiStack_2d8);
  if (aiStack_2d8[0] != -1) {
    iVar5 = aiStack_2d8[0];
    iVar11 = local_var_2e0._4_4_;
    iVar9 = (int)local_var_2e0;
    do {
      if (iVar5 == -1) goto SystemCore_d3dfa;
      lVar7 = plStack_2e8[2];
      iVar10 = *(int *)(lVar7 + 8 + (int64_t)iVar5 * 0x10);
      iVar8 = iVar9;
      if (iVar10 == -1) {
        iVar8 = 0;
        if (iVar9 != -1) {
          iVar8 = iVar9 + 1;
        }
        if (iVar8 != (int)plStack_2e8[1]) {
          lVar6 = (int64_t)iVar8;
          do {
            if (*(int *)(*plStack_2e8 + lVar6 * 4) != -1) {
              iVar10 = *(int *)(*plStack_2e8 + (int64_t)iVar8 * 4);
              goto LAB_1807d37f6;
            }
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plStack_2e8[1]);
        }
        iVar8 = -1;
        iVar10 = -1;
      }
LAB_1807d37f6:
      if (iVar11 == -1) {
        piVar12 = (int *)(*plStack_2e8 + (int64_t)iVar9 * 4);
      }
      else {
        piVar12 = (int *)(lVar7 + 8 + (int64_t)iVar11 * 0x10);
      }
      iVar2 = *piVar12;
      lVar6 = (int64_t)iVar2;
      if (iVar2 != iVar5) goto SystemCore_d3dfa;
      *(int8_t *)(lVar7 + 0xc + lVar6 * 0x10) = 0;
      *piVar12 = *(int *)(lVar7 + 8 + lVar6 * 0x10);
      *(int *)(lVar7 + 8 + lVar6 * 0x10) = (int)plStack_2e8[4];
      *(int *)((int64_t)plStack_2e8 + 0x24) = *(int *)((int64_t)plStack_2e8 + 0x24) + -1;
      *(int *)(plStack_2e8 + 4) = iVar2;
      if (iVar9 != iVar8) {
        iVar11 = -1;
      }
      iVar5 = iVar10;
      iVar9 = iVar8;
    } while (iVar10 != -1);
  }
  plVar1 = (int64_t *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x94);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x90) < 1) {
      if ((0 < (int)uVar3) && (*plVar1 != 0)) {
        local_var_318 = 1;
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100);
      }
      *plVar1 = 0;
      *(int32_t *)(param_1 + 0x94) = 0;
      goto LAB_1807d38b9;
    }
  }
  else {
LAB_1807d38b9:
    *(int32_t *)(param_1 + 0x90) = 0;
  }
  *(int32_t *)(param_1 + 0x48) = 0;
  aplStack_2d0[0] = (int64_t *)0x0;
  iVar5 = Function_77094861(*(uint64_t *)(param_1 + 0x28),aplStack_2d0);
  if (iVar5 == 0) {
    local_var_2f0 = 0;
    iVar5 = (**(code **)(*aplStack_2d0[0] + 0x120))(aplStack_2d0[0],0xffffffff,&local_var_2f0);
    if (iVar5 == 0) {
      local_var_2a0 = local_var_2f0;
      local_var_298 = 0;
      iVar5 = SystemCore_d3e20(plVar1,&local_var_2a0);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x90) == 0) {
          puVar4 = *(uint64_t **)(param_1 + 0x38);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int32_t *)(puVar4 + 2) = 0;
          **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x48) * 0x5e + 0x14;
          *(int8_t *)(*(int64_t *)(param_1 + 0x38) + 8) = 1;
          *(int8_t *)(*(int64_t *)(param_1 + 0x38) + 10) = 6;
          *(int32_t *)(*(int64_t *)(param_1 + 0x38) + 0xc) =
               *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x6d0);
          *(int32_t *)(*(int64_t *)(param_1 + 0x38) + 0x10) =
               *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x6d8);
          *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_1 + 0x38);
        }
        else {
          iVar11 = *(int *)(param_1 + 0x90);
          stack_array_300[0] = *(uint64_t *)(*plVar1 + -0x10 + (int64_t)iVar11 * 0x10);
          iVar5 = *(int *)(param_1 + 0x90) + -1;
          if ((-1 < iVar5) && (iVar5 < iVar11)) {
            iVar9 = (iVar11 - iVar5) + -1;
            if (0 < iVar9) {
              lVar7 = (int64_t)iVar5 * 0x10 + *plVar1;
// WARNING: Subroutine does not return
              memmove(lVar7,lVar7 + 0x10,(int64_t)iVar9 << 4);
            }
            stack_array_308[0] = 0;
            *(int *)(param_1 + 0x90) = iVar11 + -1;
            stack_array_306[0] = 1;
            iVar5 = SystemCore_d3460(param_1 + 0x60,stack_array_300,stack_array_306,stack_array_308);
            if (iVar5 == 0) {
// WARNING: Subroutine does not return
              memset(stack_array_168,0,0x100);
            }
          }
        }
      }
    }
  }
SystemCore_d3dfa:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_338);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d3709(int64_t param_1)
void SystemCore_d3709(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int64_t unaff_RBP;
  int64_t *plVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int64_t unaff_R15;
  int8_t local_buffer_30;
  int8_t local_buffer_32;
  uint64_t local_var_38;
  uint64_t local_var_48;
  int64_t *plStack0000000000000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  int64_t *local_var_68;
  plVar10 = (int64_t *)(param_1 + 0x60);
  _iStack0000000000000058 = 0xffffffffffffffff;
  iStack0000000000000060 = -1;
  plStack0000000000000050 = plVar10;
  SystemCore_d2ff0(plVar10,&local_buffer_00000058,&local_buffer_00000060);
  if (iStack0000000000000060 != -1) {
    iVar5 = iStack0000000000000060;
    iVar12 = iStack000000000000005c;
    iVar9 = iStack0000000000000058;
    do {
      if (iVar5 == -1) goto LAB_1807d3db1;
      lVar7 = plStack0000000000000050[2];
      iVar11 = *(int *)(lVar7 + 8 + (int64_t)iVar5 * 0x10);
      iVar8 = iVar9;
      if (iVar11 == -1) {
        iVar8 = 0;
        if (iVar9 != -1) {
          iVar8 = iVar9 + 1;
        }
        if (iVar8 != (int)plStack0000000000000050[1]) {
          lVar6 = (int64_t)iVar8;
          do {
            if (*(int *)(*plStack0000000000000050 + lVar6 * 4) != -1) {
              iVar11 = *(int *)(*plStack0000000000000050 + (int64_t)iVar8 * 4);
              goto LAB_1807d37f6;
            }
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plStack0000000000000050[1]);
        }
        iVar8 = -1;
        iVar11 = -1;
      }
LAB_1807d37f6:
      if (iVar12 == -1) {
        piVar13 = (int *)(*plStack0000000000000050 + (int64_t)iVar9 * 4);
      }
      else {
        piVar13 = (int *)(lVar7 + 8 + (int64_t)iVar12 * 0x10);
      }
      iVar2 = *piVar13;
      lVar6 = (int64_t)iVar2;
      if (iVar2 != iVar5) goto LAB_1807d3db1;
      *(int8_t *)(lVar7 + 0xc + lVar6 * 0x10) = 0;
      *piVar13 = *(int *)(lVar7 + 8 + lVar6 * 0x10);
      *(int *)(lVar7 + 8 + lVar6 * 0x10) = (int)plStack0000000000000050[4];
      *(int *)((int64_t)plStack0000000000000050 + 0x24) =
           *(int *)((int64_t)plStack0000000000000050 + 0x24) + -1;
      *(int *)(plStack0000000000000050 + 4) = iVar2;
      if (iVar9 != iVar8) {
        iVar12 = -1;
      }
      iVar5 = iVar11;
      iVar9 = iVar8;
    } while (iVar11 != -1);
    plVar10 = (int64_t *)(unaff_R15 + 0x60);
  }
  plVar1 = (int64_t *)(unaff_R15 + 0x88);
  uVar3 = *(uint *)(unaff_R15 + 0x94);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < *(int *)(unaff_R15 + 0x90)) goto LAB_1807d38bd;
    if ((0 < (int)uVar3) && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100,1);
    }
    *plVar1 = 0;
    *(int32_t *)(unaff_R15 + 0x94) = 0;
  }
  *(int32_t *)(unaff_R15 + 0x90) = 0;
LAB_1807d38bd:
  *(int32_t *)(unaff_R15 + 0x48) = 0;
  local_var_68 = (int64_t *)0x0;
  iVar5 = Function_77094861(*(uint64_t *)(unaff_R15 + 0x28),&local_buffer_00000068);
  if (iVar5 == 0) {
    local_var_48 = 0;
    iVar5 = (**(code **)(*local_var_68 + 0x120))(local_var_68,0xffffffff,&local_buffer_00000048)
    ;
    if (iVar5 == 0) {
      *(uint64_t *)(unaff_RBP + -0x68) = local_var_48;
      *(uint64_t *)(unaff_RBP + -0x60) = 0;
      iVar5 = SystemCore_d3e20(plVar1,unaff_RBP + -0x68);
      if (iVar5 == 0) {
        if (*(int *)(unaff_R15 + 0x90) == 0) {
          puVar4 = *(uint64_t **)(unaff_R15 + 0x38);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int32_t *)(puVar4 + 2) = 0;
          **(int **)(unaff_R15 + 0x38) = *(int *)(unaff_R15 + 0x48) * 0x5e + 0x14;
          *(int8_t *)(*(int64_t *)(unaff_R15 + 0x38) + 8) = 1;
          *(int8_t *)(*(int64_t *)(unaff_R15 + 0x38) + 10) = 6;
          *(int32_t *)(*(int64_t *)(unaff_R15 + 0x38) + 0xc) =
               *(int32_t *)(*(int64_t *)(unaff_R15 + 0x28) + 0x6d0);
          *(int32_t *)(*(int64_t *)(unaff_R15 + 0x38) + 0x10) =
               *(int32_t *)(*(int64_t *)(unaff_R15 + 0x28) + 0x6d8);
          *(uint64_t *)(unaff_R15 + 0x58) = *(uint64_t *)(unaff_R15 + 0x38);
        }
        else {
          iVar12 = *(int *)(unaff_R15 + 0x90);
          local_var_38 = *(uint64_t *)(*plVar1 + -0x10 + (int64_t)iVar12 * 0x10);
          iVar5 = *(int *)(unaff_R15 + 0x90) + -1;
          if ((-1 < iVar5) && (iVar5 < iVar12)) {
            iVar9 = (iVar12 - iVar5) + -1;
            if (0 < iVar9) {
              lVar7 = (int64_t)iVar5 * 0x10 + *plVar1;
// WARNING: Subroutine does not return
              memmove(lVar7,lVar7 + 0x10,(int64_t)iVar9 << 4);
            }
            local_buffer_30 = 0;
            *(int *)(unaff_R15 + 0x90) = iVar12 + -1;
            local_buffer_32 = 1;
            iVar5 = SystemCore_d3460(plVar10,&local_buffer_00000038,(int64_t)&local_buffer_00000030 + 2,
                                  &local_buffer_00000030);
            if (iVar5 == 0) {
// WARNING: Subroutine does not return
              memset(unaff_RBP + 0xd0,0,0x100);
            }
          }
        }
      }
    }
  }
LAB_1807d3db1:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d3dfa(void)
void SystemCore_d3dfa(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
uint64_t SystemCore_d3e20(int64_t *param_1,uint64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint uVar5;
  iVar4 = (int)param_1[1] + 1;
  uVar5 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar5) - uVar5;
  if (iVar1 < iVar4) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar4 < 4) {
      iVar4 = 4;
    }
    uVar2 = UltraHighFreq_StateController1(param_1,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = param_2[1];
  puVar3 = (uint64_t *)((int64_t)(int)param_1[1] * 0x10 + *param_1);
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}
uint64_t SystemCore_d3ea0(int64_t param_1,int64_t param_2)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  if ((byte)(*(char *)(param_2 + 10) - 5U) < 2) {
    cVar1 = *(char *)(param_2 + 9);
    if (cVar1 == '\x01') {
      iVar2 = Function_0e690ad6(param_2 + 0xc,&processed_var_584_ptr);
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x50) = 1;
      }
      else {
        uVar3 = Function_0e690ad6(param_2 + 0xc,&processed_var_600_ptr);
        if ((int)uVar3 == 0) {
          *(int32_t *)(param_1 + 0x50) = 0;
          return uVar3;
        }
      }
    }
    else {
      if (cVar1 == '\x02') {
        SystemCore_40f10(*(uint64_t *)(param_2 + 0xc),*(char *)(param_2 + 0x14) != '\0');
        return 0;
      }
      if (cVar1 == '\x03') {
        SystemCore_40ff0(*(uint64_t *)(param_2 + 0xc),*(char *)(param_2 + 0x14) != '\0');
        return 0;
      }
    }
  }
  return 0;
}
uint64_t SystemCore_d3ebe(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  iVar1 = Function_0e690ad6(param_2 + 0xc,&processed_var_584_ptr);
  if (iVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x50) = 1;
  }
  else {
    uVar2 = Function_0e690ad6(param_2 + 0xc,&processed_var_600_ptr);
    if ((int)uVar2 == 0) {
      *(int32_t *)(unaff_RBX + 0x50) = 0;
      return uVar2;
    }
  }
  return 0;
}
uint64_t SystemCore_d3ee6(void)
{
  return 0;
}
uint64_t SystemCore_d3eee(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uVar1 = Function_0e690ad6();
  if ((int)uVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x50) = 0;
    return uVar1;
  }
  return 0;
}
uint64_t SystemCore_d3f0f(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  char in_AL;
  if (in_AL == '\x02') {
    SystemCore_40f10(*(uint64_t *)(param_3 + 0xc),*(char *)(param_2 + 0x14) != '\0');
    return 0;
  }
  if (in_AL == '\x03') {
    SystemCore_40ff0(*(uint64_t *)(param_3 + 0xc),*(char *)(param_2 + 0x14) != '\0');
    return 0;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_SecurityHandler(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x10 - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (int64_t)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 4;
          } while (lVar8 != 0);
        }
        goto LAB_1807d3ff3;
      }
    }
    return 0x26;
  }
LAB_1807d3ff3:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar7;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_d3f74(uint64_t param_1,int param_2)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1807d3ff3:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar7;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x10 - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (int64_t)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 4;
        } while (lVar8 != 0);
      }
      goto LAB_1807d3ff3;
    }
  }
  return 0x26;
}
uint64_t SystemCore_d403e(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d4060(int64_t param_1)
void SystemCore_d4060(int64_t param_1)
{
  int iVar1;
  iVar1 = SystemStatusChecker(param_1 + 0x60);
  if (iVar1 == 0) {
    iVar1 = SystemCore_d3080(param_1 + 0x70);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x80) = 0xffffffff;
      *(int32_t *)(param_1 + 0x84) = 0;
    }
  }
  SystemCore_d3160(param_1 + 0x88);
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),
                  &processed_var_448_ptr,0x3f,1);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_448_ptr,0x40,1);
}
uint64_t * SystemCore_d4110(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_d4140(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  puVar2 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&processed_var_736_ptr,0x10,0,0,1);
  if (puVar2 != (uint64_t *)0x0) {
    puVar2[3] = 0;
    puVar1 = puVar2 + 1;
    puVar2[2] = puVar1;
    *puVar1 = puVar1;
    *puVar2 = &processed_var_616_ptr;
    puVar2[4] = param_1;
    puVar2[5] = param_2;
// WARNING: Could not recover jumptable at 0x0001807d41c3. Too many branches
// WARNING: Treating indirect jump as call
    uVar3 = (**(code **)(*param_1 + 8))(param_1,puVar2);
    return uVar3;
  }
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d41e0(uint64_t *param_1,uint64_t *param_2)
void SystemCore_d41e0(uint64_t *param_1,uint64_t *param_2)
{
  int8_t uVar1;
  int iVar2;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  int32_t local_var_a4;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t stack_array_90 [2];
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t stack_array_38 [2];
  int32_t local_var_30;
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_88 = 0x48;
  uVar1 = (**(code **)*param_1)();
  local_var_80._0_3_ = (uint3)(ushort)local_var_80;
  local_var_80 = CONCAT71(local_var_80._1_7_,uVar1);
  SystemCore_38630(&local_var_48,(int64_t)&local_var_48 + 4,0);
  SystemCore_46180(param_1[5],stack_array_38);
  local_var_80 = CONCAT44(stack_array_38[0],(int32_t)local_var_80);
  local_var_70 = CONCAT44(local_var_70._4_4_,local_var_30);
  local_var_98 = 0;
  Function_560fc73c(*(uint64_t *)(*(int64_t *)(param_1[5] + 0x6b8) + 0x40),&local_var_98);
  local_var_94 = 0;
  Function_117d36a1(*(uint64_t *)(*(int64_t *)(param_1[5] + 0x6b8) + 0x40),&local_var_94);
  stack_array_90[0] = 0;
  Function_560fc73c(*(uint64_t *)(*(int64_t *)(param_1[5] + 0x6b0) + 0x40),stack_array_90);
  local_var_70 = CONCAT26((int16_t)local_var_94,CONCAT24((int16_t)local_var_98,(int32_t)local_var_70));
  local_var_68._0_4_ = CONCAT22(*(int16_t *)(param_1[5] + 0x1e0),(int16_t)stack_array_90[0]);
  local_var_60 = local_var_60 & 0xffffffff;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],3,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a8 = 0;
    local_var_a4 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a8,&local_var_a4);
    if (iVar2 == 0) {
      local_var_60 = CONCAT26((int16_t)local_var_a4,
                           CONCAT24((int16_t)local_var_a8,(int32_t)local_var_60));
    }
  }
  local_var_68 = local_var_68 & 0xffffffff;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],2,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_68 = CONCAT26((int16_t)local_var_a8,
                           CONCAT24((int16_t)local_var_a4,(int32_t)local_var_68));
    }
  }
  local_var_60 = local_var_60 & 0xffffffff00000000;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],7,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_60._0_4_ = CONCAT22((int16_t)local_var_a8,(int16_t)local_var_a4);
    }
  }
  local_var_58 = local_var_58 & 0xffffffff;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],4,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_58 = (uint64_t)CONCAT22((int16_t)local_var_a8,(int16_t)local_var_a4) << 0x20;
    }
  }
  local_var_58 = local_var_58 & 0xffffffff00000000;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],5,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_58._0_4_ = CONCAT22((int16_t)local_var_a8,(int16_t)local_var_a4);
    }
  }
  local_var_50 = local_var_50 & 0xffffffff00000000;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],6,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_50._0_4_ = CONCAT22((int16_t)local_var_a8,(int16_t)local_var_a4);
      local_var_50 = (uint64_t)(uint)local_var_50;
    }
  }
  local_var_50 = local_var_50 & 0xffffffff;
  local_var_a0 = 0;
  iVar2 = Function_c065457b(param_1[5],0,&local_var_a0);
  if (iVar2 == 0) {
    local_var_a4 = 0;
    local_var_a8 = 0;
    iVar2 = Function_790040d8(local_var_a0,&local_var_a4,&local_var_a8);
    if (iVar2 == 0) {
      local_var_50 = CONCAT26((int16_t)local_var_a8,CONCAT24((int16_t)local_var_a4,(uint)local_var_50));
    }
  }
  if (*(int *)(param_2 + 1) < 1) {
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,&local_var_88,0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d4550(uint64_t param_1)
void SystemCore_d4550(uint64_t param_1)
{
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_736_ptr,0x1f,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_d4590(int64_t param_1,int param_2,int param_3,uint param_4,int param_5)
{
  int64_t lVar1;
  uint uVar2;
  uVar2 = param_4;
  if ((int)param_4 < 2) {
    uVar2 = (uint)(param_3 != 0);
  }
  if (param_2 != 0) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&processed_var_864_ptr,0x1ee,0
                          ,0,1);
    *(int64_t *)(param_1 + 0xa0) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x9c) = param_2;
  }
  if (param_3 != 0) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3 * 4,&processed_var_864_ptr,0x1f6,0
                          ,0,1);
    *(int64_t *)(param_1 + 0xb0) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3 * 4,&processed_var_864_ptr,0x1f9,0
                          ,0,1);
    *(int64_t *)(param_1 + 0xb8) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0xa8) = param_3;
  }
  if (param_4 != 0) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_4 * 0x14,&processed_var_864_ptr,
                          0x201,0,0,1);
    *(int64_t *)(param_1 + 8) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(uint *)(param_1 + 4) = param_4;
  }
  if (param_5 != 0) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_5 * 0x14,&processed_var_864_ptr,
                          0x209,0,0,1);
    *(int64_t *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x10) = param_5;
  }
  if (uVar2 != 0) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar2 << 5,&processed_var_864_ptr,0x211,0,
                          0,1);
    *(int64_t *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  return 0;
}
uint64_t SystemCore_d47c0(int param_1,uint param_2,int param_3,int32_t *param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  if (0 < (int)param_2) {
    uVar2 = (uint64_t)param_2;
    do {
      lVar1 = (int64_t)param_1;
      puVar3 = param_4;
      if (0 < (int64_t)param_1) {
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      param_4 = param_4 + param_3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}
uint64_t SystemCore_d47d4(uint64_t param_1,int64_t param_2,int64_t param_3,int32_t *param_4)
{
  int64_t lVar1;
  int32_t *puVar2;
  int64_t in_R10;
  do {
    lVar1 = in_R10;
    puVar2 = param_4;
    if (0 < in_R10) {
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    param_4 = (int32_t *)((int64_t)param_4 + param_3);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return 0;
}
uint64_t SystemCore_d47f4(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d4800(uint64_t *param_1)
void SystemCore_d4800(uint64_t *param_1)
{
  if (param_1[5] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[5],&processed_var_864_ptr,0x366,1);
  }
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[1],&processed_var_864_ptr,0x367,1);
  }
  if (param_1[3] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[3],&processed_var_864_ptr,0x368,1);
  }
  if (param_1[0x14] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x14],&processed_var_864_ptr,0x369,1);
  }
  if (param_1[0x16] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x16],&processed_var_864_ptr,0x36a,1);
  }
  if (param_1[0x17] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x17],&processed_var_864_ptr,0x36b,1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
// WARNING: Subroutine does not return
  memset(param_1 + 6,0,0x58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/* 函数别名定义: RenderingGeometryProcessor */
#define RenderingGeometryProcessor RenderingGeometryProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part297.c - 5 个函数
// 函数: void UISystem_266c0(uint64_t *param_1,int64_t param_2,int param_3,int param_4,int param_5,
void UISystem_266c0(uint64_t *param_1,int64_t param_2,int param_3,int param_4,int param_5,
                  int32_t param_6,int param_7)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int8_t stack_array_158 [32];
  uint local_var_138;
  uint local_var_130;
  int iStack_128;
  int32_t local_var_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int64_t lStack_108;
  int iStack_100;
  uint local_var_fc;
  int iStack_f8;
  uint local_var_f4;
  int iStack_f0;
  int iStack_ec;
  uint local_var_e8;
  uint local_var_e4;
  int iStack_e0;
  uint local_var_dc;
  int64_t lStack_d8;
  int64_t lStack_d0;
  uint stack_array_c8 [8];
  int aiStack_a8 [8];
  uint stack_array_88 [8];
  int aiStack_68 [8];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  puVar1 = (uint *)*param_1;
  iVar7 = ((param_5 == 0x10) + 1) * param_4;
  iStack_118 = param_3;
  iStack_100 = param_4;
  lStack_d8 = param_2;
  if (param_7 == 0) {
    local_var_120 = param_6;
    local_var_130 = puVar1[1];
    iStack_128 = param_5;
    local_var_138 = *puVar1;
    UISystem_256d0(param_1,param_2);
  }
  else {
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    if ((((((int)uVar4 < 0) || ((int)uVar3 < 0)) ||
         ((uVar3 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar3) < (int)uVar4)))) ||
        ((iVar5 = uVar4 * uVar3, iVar5 < 0 || (iVar7 < 0)))) ||
       ((iVar7 != 0 && ((int)(0x7fffffff / (int64_t)iVar7) < iVar5)))) {
      lStack_108 = 0;
    }
    else {
      lStack_108 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(iVar5 * iVar7),
                                 CONCAT71((uint7)(uint3)(uVar3 >> 8),0x22));
    }
    iStack_10c = 0;
    lStack_d0 = 0;
    iVar5 = iStack_118;
    do {
      lVar8 = lStack_d0;
      piVar2 = (int *)*param_1;
      aiStack_a8[0] = 0;
      aiStack_a8[1] = 4;
      aiStack_a8[2] = 0;
      aiStack_a8[3] = 2;
      stack_array_c8[4] = 2;
      aiStack_68[0] = 0;
      aiStack_68[1] = 0;
      aiStack_68[2] = 4;
      aiStack_68[3] = 0;
      stack_array_c8[5] = 2;
      stack_array_c8[0] = 8;
      stack_array_c8[1] = 8;
      stack_array_c8[2] = 4;
      stack_array_c8[3] = 4;
      stack_array_c8[6] = 1;
      local_var_f4 = *(uint *)((int64_t)stack_array_c8 + lStack_d0);
      aiStack_a8[4] = 0;
      aiStack_a8[5] = 1;
      aiStack_a8[6] = 0;
      iStack_f0 = *(int *)((int64_t)aiStack_a8 + lStack_d0);
      stack_array_88[4] = 4;
      stack_array_88[5] = 2;
      uVar3 = (*piVar2 + -1 + (local_var_f4 - iStack_f0)) / local_var_f4;
      stack_array_88[0] = 8;
      stack_array_88[1] = 8;
      stack_array_88[2] = 8;
      stack_array_88[3] = 4;
      stack_array_88[6] = 2;
      local_var_fc = *(uint *)((int64_t)stack_array_88 + lStack_d0);
      aiStack_68[4] = 2;
      aiStack_68[5] = 0;
      aiStack_68[6] = 1;
      local_var_e8 = uVar3;
      if (uVar3 != 0) {
        iStack_f8 = *(int *)((int64_t)aiStack_68 + lStack_d0);
        uVar4 = ((local_var_fc - 1) + (piVar2[1] - iStack_f8)) / local_var_fc;
        local_var_e4 = uVar4;
        if (uVar4 != 0) {
          local_var_120 = param_6;
          iStack_128 = param_5;
          uVar6 = (((int)(piVar2[2] * uVar3 * param_5 + 7) >> 3) + 1) * uVar4;
          local_var_138 = uVar3;
          local_var_130 = uVar4;
          local_var_dc = uVar6;
          iVar5 = UISystem_256d0(param_1,param_2,iVar5,iStack_100);
          if (iVar5 == 0) {
            if (lStack_108 != 0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(lStack_108);
            }
            goto UISystem_26a43;
          }
          iStack_114 = 0;
          if (0 < (int)uVar4) {
            iStack_e0 = uVar3 * iVar7;
            iStack_110 = 0;
            do {
              if (0 < (int)uVar3) {
                iStack_ec = local_var_fc * iStack_114 + iStack_f8;
// WARNING: Subroutine does not return
                memcpy((int64_t)(iStack_f0 * iVar7) +
                       (uint64_t)(uint)(*(int *)*param_1 * iStack_ec * iVar7) + lStack_108,
                       (int64_t)iStack_110 + param_1[3],(int64_t)iVar7);
              }
              iStack_114 = iStack_114 + 1;
              iStack_110 = iStack_110 + iStack_e0;
              lVar8 = lStack_d0;
              uVar6 = local_var_dc;
            } while (iStack_114 < (int)uVar4);
          }
          if (param_1[3] != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          iStack_118 = iStack_118 - uVar6;
          param_2 = lStack_d8 + (uint64_t)uVar6;
          param_1[3] = 0;
          lStack_d8 = param_2;
          iVar5 = iStack_118;
        }
      }
      iStack_10c = iStack_10c + 1;
      lStack_d0 = lVar8 + 4;
    } while (iStack_10c < 7);
    param_1[3] = lStack_108;
  }
UISystem_26a43:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_2674c(int param_1,uint64_t param_2,int param_3)
void UISystem_2674c(int param_1,uint64_t param_2,int param_3)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int unaff_EDI;
  uint64_t uVar10;
  int in_R11D;
  uint64_t *unaff_R13;
  int64_t unaff_R14;
  uint64_t uVar11;
  int local_var_40;
  uint local_buffer_4c;
  int32_t local_var_58;
  uint local_buffer_5c;
  uint local_buffer_64;
  int iStack000000000000006c;
  uVar7 = unaff_RBX;
  if (((((-1 < param_1) && (-1 < param_3)) &&
       ((param_3 == 0 || (param_1 <= (int)(0x7fffffff / (int64_t)param_3))))) &&
      ((param_1 = param_1 * param_3, -1 < param_1 && (-1 < unaff_EDI)))) &&
     ((unaff_EDI == 0 || (param_1 <= (int)(0x7fffffff / (int64_t)unaff_EDI))))) {
    uVar7 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(param_1 * unaff_EDI),0x22);
    in_R11D = local_var_40;
  }
  local_buffer_4c = (uint)unaff_RBX;
  uVar10 = unaff_RBX & 0xffffffff;
  unaff_RBP[-0xf] = unaff_RBX;
  uVar11 = unaff_RBX;
  do {
    piVar3 = (int *)*unaff_R13;
    unaff_RBP[-10] = 0x400000000;
    unaff_RBP[-9] = 0x200000000;
    *(int32_t *)(unaff_RBP + -0xc) = 2;
    unaff_RBP[-2] = 0;
    unaff_RBP[-1] = 4;
    *(int32_t *)((int64_t)unaff_RBP + -0x5c) = 2;
    unaff_RBP[-0xe] = 0x800000008;
    unaff_RBP[-0xd] = 0x400000004;
    *(int32_t *)(unaff_RBP + -0xb) = 1;
    local_buffer_64 = *(uint *)((int64_t)unaff_RBP + (uVar11 - 0x70));
    *(int *)(unaff_RBP + -8) = (int)unaff_RBX;
    *(uint64_t *)((int64_t)unaff_RBP + -0x3c) = 1;
    iVar1 = *(int *)((int64_t)unaff_RBP + (uVar11 - 0x50));
    iVar2 = *piVar3;
    *(int32_t *)(unaff_RBP + -4) = 4;
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = 2;
    uVar4 = (iVar2 + -1 + (local_buffer_64 - iVar1)) / local_buffer_64;
    unaff_RBP[-6] = 0x800000008;
    unaff_RBP[-5] = 0x400000008;
    *(int32_t *)(unaff_RBP + -3) = 2;
    local_buffer_5c = *(uint *)((int64_t)unaff_RBP + (uVar11 - 0x30));
    *unaff_RBP = 2;
    *(int32_t *)(unaff_RBP + 1) = 1;
    uVar9 = (uint)uVar10;
    if (uVar4 != 0) {
      iVar2 = *(int *)((int64_t)unaff_RBP + (uVar11 - 0x10));
      uVar5 = ((local_buffer_5c - 1) + (piVar3[1] - iVar2)) / local_buffer_5c;
      if (uVar5 != 0) {
        uVar9 = (((int)(piVar3[2] * uVar4 * *(int *)(unaff_RBP + 0x10) + 7) >> 3) + 1) * uVar5;
        iVar6 = UISystem_256d0(0x800000008,unaff_R14,in_R11D,local_var_58,uVar4);
        if (iVar6 == 0) {
          if (uVar7 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(uVar7);
          }
          goto LAB_180426a2b;
        }
        iVar6 = 0;
        if (0 < (int)uVar5) {
          iVar8 = 0;
          do {
            if (0 < (int)uVar4) {
              iStack000000000000006c = local_buffer_5c * iVar6 + iVar2;
// WARNING: Subroutine does not return
              memcpy((int64_t)(iVar1 * unaff_EDI) +
                     (uint)(*(int *)*unaff_R13 * iStack000000000000006c * unaff_EDI) + uVar7,
                     (int64_t)iVar8 + unaff_R13[3],(int64_t)unaff_EDI);
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + uVar4 * unaff_EDI;
          } while (iVar6 < (int)uVar5);
          uVar11 = unaff_RBP[-0xf];
        }
        if (unaff_R13[3] != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        in_R11D = local_var_40 - uVar9;
        unaff_R14 = unaff_RBP[-0x10] + (uint64_t)uVar9;
        unaff_RBP[-0x10] = unaff_R14;
        unaff_RBX = 0;
        unaff_R13[3] = 0;
        uVar9 = local_buffer_4c;
        local_var_40 = in_R11D;
      }
    }
    local_buffer_4c = uVar9 + 1;
    uVar10 = (uint64_t)local_buffer_4c;
    uVar11 = uVar11 + 4;
    unaff_RBP[-0xf] = uVar11;
  } while ((int)local_buffer_4c < 7);
  unaff_R13[3] = uVar7;
LAB_180426a2b:
// WARNING: Subroutine does not return
  SystemSecurityChecker(unaff_RBP[2] ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_26a43(void)
void UISystem_26a43(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_26a5e(void)
void UISystem_26a5e(void)
{
  int64_t unaff_RBP;
  int64_t local_buffer_50;
  if (local_buffer_50 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(local_buffer_50);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_26a80(void)
void UISystem_26a80(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
int32_t UISystem_276f0(int *param_1,int *param_2)
{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int64_t lVar6;
  pcVar4 = *(char **)(param_1 + 0x2e);
  if (*(char **)(param_1 + 0x30) <= pcVar4) {
    if (param_1[0xc] == 0) {
      return 0;
    }
    RenderingGeometryProcessor0();
    pcVar4 = *(char **)(param_1 + 0x2e);
  }
  cVar1 = *pcVar4;
  pcVar4 = pcVar4 + 1;
  *(char **)(param_1 + 0x2e) = pcVar4;
  if (cVar1 == 'B') {
    if (*(char **)(param_1 + 0x30) <= pcVar4) {
      if (param_1[0xc] == 0) {
        return 0;
      }
      RenderingGeometryProcessor0(param_1);
      pcVar4 = *(char **)(param_1 + 0x2e);
    }
    cVar1 = *pcVar4;
    *(char **)(param_1 + 0x2e) = pcVar4 + 1;
    if (cVar1 == 'M') {
      SystemCore_MemoryManager(param_1);
      SystemCore_MemoryManager(param_1);
      SystemCore_MemoryManager(param_1);
      SystemCore_MemoryManager(param_1);
      iVar2 = SystemCore_MemoryManager(param_1);
      iVar3 = SystemCore_MemoryManager(param_1);
      param_2[1] = iVar3 * 0x10000 + iVar2;
      iVar2 = SystemCore_MemoryManager(param_1);
      iVar3 = SystemCore_MemoryManager(param_1);
      uVar5 = iVar3 * 0x10000 + iVar2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[2] = uVar5;
      param_2[3] = 0;
      param_2[4] = 0;
      if ((((uVar5 < 0x39) && ((0x100010000001000U >> ((uint64_t)uVar5 & 0x3f) & 1) != 0)) ||
          (uVar5 == 0x6c)) || (uVar5 == 0x7c)) {
        iVar2 = SystemCore_MemoryManager(param_1);
        if (uVar5 == 0xc) {
          *param_1 = iVar2;
          iVar3 = SystemCore_MemoryManager(param_1);
        }
        else {
          iVar3 = SystemCore_MemoryManager(param_1);
          *param_1 = iVar3 * 0x10000 + iVar2;
          iVar3 = SystemCore_MemoryManager(param_1);
          iVar2 = SystemCore_MemoryManager(param_1);
          iVar3 = iVar2 * 0x10000 + iVar3;
        }
        param_1[1] = iVar3;
        iVar2 = SystemCore_MemoryManager(param_1);
        if (iVar2 == 1) {
          iVar2 = SystemCore_MemoryManager(param_1);
          *param_2 = iVar2;
          if (iVar2 != 1) {
            if (uVar5 == 0xc) {
              return 1;
            }
            iVar2 = UtilitiesSystem_MemoryManager(param_1);
            if (1 < iVar2 - 1U) {
              UtilitiesSystem_MemoryManager(param_1);
              UtilitiesSystem_MemoryManager(param_1);
              UtilitiesSystem_MemoryManager(param_1);
              UtilitiesSystem_MemoryManager(param_1);
              UtilitiesSystem_MemoryManager(param_1);
              if (uVar5 != 0x28) {
                if (uVar5 != 0x38) {
                  if ((uVar5 - 0x6c & 0xffffffef) != 0) {
                    return 0;
                  }
                  iVar2 = UtilitiesSystem_MemoryManager(param_1);
                  param_2[3] = iVar2;
                  iVar2 = UtilitiesSystem_MemoryManager(param_1);
                  param_2[4] = iVar2;
                  iVar2 = UtilitiesSystem_MemoryManager(param_1);
                  param_2[5] = iVar2;
                  iVar2 = UtilitiesSystem_MemoryManager(param_1);
                  param_2[6] = iVar2;
                  UtilitiesSystem_MemoryManager(param_1);
                  lVar6 = 0xc;
                  do {
                    UtilitiesSystem_MemoryManager(param_1);
                    lVar6 = lVar6 + -1;
                  } while (lVar6 != 0);
                  if (uVar5 != 0x7c) {
                    return 1;
                  }
                  UtilitiesSystem_MemoryManager(param_1);
                  UtilitiesSystem_MemoryManager(param_1);
                  UtilitiesSystem_MemoryManager(param_1);
                  UtilitiesSystem_MemoryManager(param_1);
                  return 1;
                }
                UtilitiesSystem_MemoryManager(param_1);
                UtilitiesSystem_MemoryManager(param_1);
                UtilitiesSystem_MemoryManager(param_1);
                UtilitiesSystem_MemoryManager(param_1);
              }
              if ((*param_2 - 0x10U & 0xffffffef) != 0) {
                return 1;
              }
              if (iVar2 == 0) {
                if (*param_2 != 0x20) {
                  param_2[3] = 0x7c00;
                  param_2[4] = 0x3e0;
                  param_2[5] = 0x1f;
                  return 1;
                }
                param_2[6] = -0x1000000;
                param_2[7] = 0;
                param_2[3] = 0xff0000;
                param_2[4] = 0xff00;
                param_2[5] = 0xff;
                return 1;
              }
              if (iVar2 == 3) {
                iVar2 = UtilitiesSystem_MemoryManager(param_1);
                param_2[3] = iVar2;
                iVar2 = UtilitiesSystem_MemoryManager(param_1);
                param_2[4] = iVar2;
                iVar2 = UtilitiesSystem_MemoryManager(param_1);
                param_2[5] = iVar2;
                if (param_2[3] != param_2[4]) {
                  return 1;
                }
                if (param_2[4] != iVar2) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
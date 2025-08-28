#include "TaleWorlds.Native.Split.h"
// 99_part_10_part004.c - 4 个函数
// 函数: void function_6a4890(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6a4890(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_28 [16];
  lVar1 = *(int64_t *)(param_1[1] + 8);
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,stack_array_28);
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(lVar1 + 0x20))(param_1[1] + 8,param_2,uVar3,param_3,param_4,param_5,uVar2);
// WARNING: Could not recover jumptable at 0x0001806a491e. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}
bool function_6a4930(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t *param_5,int param_6,int64_t *param_7)
{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t lVar10;
  char *pcVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int32_t *puVar15;
  uint64_t uVar16;
  byte *pbVar17;
  uint uVar18;
  int32_t uVar19;
  void *puVar20;
  int64_t lVar21;
  int64_t *plVar22;
  void *puVar23;
  uint64_t uVar24;
  int64_t lVar25;
  bool bVar26;
  int32_t astack_special_x_8 [2];
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t stack_array_1c8 [2];
  void *plocal_var_1b8;
  void *plocal_var_1b0;
  int64_t lStack_1a8;
  uint64_t local_var_1a0;
  int8_t stack_array_198 [16];
  void *plocal_var_188;
  void *plocal_var_180;
  void *plocal_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  void *plocal_var_160;
  uint64_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  int iStack_140;
  uint64_t *plocal_var_138;
  uint64_t *plocal_var_130;
  void *aplocal_var_128 [12];
  int8_t stack_array_c8 [136];
  plocal_var_188 = (void *)*param_5;
  puVar20 = (void *)param_5[1];
  puVar23 = &system_buffer_ptr;
  if (puVar20 != (void *)0x0) {
    puVar23 = puVar20;
  }
  lVar25 = 0;
  lVar10 = lVar25;
  do {
    lVar21 = lVar10;
    bVar26 = puVar23[lVar21] == (&rendering_buffer_2952_ptr)[lVar21];
    if (!bVar26) goto LAB_1806a49b8;
    lVar10 = lVar21 + 1;
  } while (lVar21 + 1 != 8);
  bVar26 = puVar23[lVar21] == (&rendering_buffer_2952_ptr)[lVar21];
LAB_1806a49b8:
  plVar22 = *(int64_t **)(param_1 + 0x40);
  plocal_var_180 = &rendering_buffer_2936_ptr;
  if (!bVar26) {
    plocal_var_180 = puVar20;
  }
  pstack_special_x_10 = param_2;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  plVar9 = (int64_t *)(**(code **)(*plVar22 + 0x18))(plVar22);
  lVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,stack_array_c8,&plocal_var_188);
  plocal_var_1b8 = plocal_var_188;
  plocal_var_1b0 = plocal_var_180;
  iVar8 = *(int *)(lVar10 + 0x18);
  if (iVar8 == 0x4d) {
    iVar8 = 0x4e;
    plocal_var_1b8 = &ui_system_data_1872_ptr;
    plocal_var_1b0 = &rendering_buffer_2920_ptr;
  }
  lVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,stack_array_c8,param_2);
  iVar6 = param_6;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,aplocal_var_128,*(int32_t *)(lVar10 + 0x18),stack_special_x_18,stack_special_x_20,iVar8,param_6)
  ;
  aplocal_var_128[0] = &memory_allocator_3704_ptr;
  (**(code **)(*plVar22 + 0x20))(plVar22);
  if (iVar6 == 2) {
    puVar20 = &system_buffer_ptr;
    if (plocal_var_1b0 != (void *)0x0) {
      puVar20 = plocal_var_1b0;
    }
    iVar8 = strcmp(puVar20,&rendering_buffer_2920_ptr);
    if (iVar8 == 0) {
      return (bool)2;
    }
  }
  lVar10 = param_1 + -8;
  uVar24 = param_7[1] - *param_7 >> 4;
  iVar8 = (int)uVar24;
  lStack_1a8 = lVar10;
  local_var_1a0 = uVar24;
  if (*(uint *)(param_1 + 0x50) < (uint)(iVar8 << 4)) {
    param_5._0_1_ = '\0';
    function_6a6600(param_1 + 0x48,iVar8 << 4,&param_5);
  }
  puVar4 = *(uint64_t **)(param_1 + 0x48);
  if (iVar8 != 0) {
    uVar16 = uVar24 & 0xffffffff;
    puVar14 = puVar4;
    do {
      *puVar14 = &memory_allocator_3024_ptr;
      *(int32_t *)(puVar14 + 1) = 0;
      puVar14 = puVar14 + 2;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    if (iVar8 != 0) {
      stack_array_1c8[0] = uVar24 & 0xffffffff;
      plVar22 = param_7;
      do {
        lVar10 = *plVar22;
        pbVar5 = *(byte **)(lVar25 + lVar10);
        if ((pbVar5 == (byte *)0x0) || (bVar7 = *pbVar5, bVar7 == 0)) {
          uVar19 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x3c) != 0) {
            uVar18 = 0x1505;
            pbVar17 = pbVar5;
            do {
              pbVar17 = pbVar17 + 1;
              uVar18 = uVar18 * 0x21 ^ (uint)bVar7;
              bVar7 = *pbVar17;
            } while (bVar7 != 0);
            uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x20) +
                              (uint64_t)(*(int *)(param_1 + 0x2c) - 1U & uVar18) * 4);
            if (uVar18 != 0xffffffff) {
              do {
                pcVar11 = *(char **)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar18 * 0x10);
                lVar21 = (int64_t)pbVar5 - (int64_t)pcVar11;
                do {
                  cVar1 = *pcVar11;
                  cVar2 = pcVar11[lVar21];
                  if (cVar1 != cVar2) break;
                  pcVar11 = pcVar11 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  if ((uVar18 != 0xffffffff) &&
                     (lVar21 = (uint64_t)uVar18 * 0x10 + *(int64_t *)(param_1 + 0x10), lVar21 != 0
                     )) {
                    uVar19 = *(int32_t *)(lVar21 + 8);
                    plVar22 = param_7;
                    goto LAB_1806a4ce6;
                  }
                  break;
                }
                uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)uVar18 * 4);
              } while (uVar18 != 0xffffffff);
            }
          }
          plVar22 = *(int64_t **)(param_1 + 0x40);
          plVar9 = (int64_t *)(**(code **)(*plVar22 + 0x18))(plVar22);
          plVar12 = (int64_t *)(**(code **)(*plVar9 + 0xc0))(plVar9);
          (**(code **)(*plVar12 + 0x20))(plVar12,astack_special_x_8,pbVar5);
          plVar9 = (int64_t *)(**(code **)(*plVar9 + 0xc0))(plVar9);
          uVar13 = (**(code **)(*plVar9 + 0x28))(plVar9,astack_special_x_8[0]);
          local_var_168 = astack_special_x_8[0];
          plocal_var_178 = &rendering_buffer_2976_ptr;
          local_var_170 = uVar13;
          RenderingSystem_StateManager0(param_1 + -8,&plocal_var_178,1);
          uVar3 = astack_special_x_8[0];
          plocal_var_178 = &rendering_buffer_2008_ptr;
          local_var_1d0 = uVar13;
          puVar14 = (uint64_t *)function_6a45c0(param_1 + 8,&local_var_1d0,&param_5);
          uVar19 = astack_special_x_8[0];
          if ((char)param_5 == '\0') {
            *puVar14 = uVar13;
            *(int32_t *)(puVar14 + 1) = uVar3;
          }
          (**(code **)(*plVar22 + 0x20))(plVar22);
          plVar22 = param_7;
        }
LAB_1806a4ce6:
        uVar3 = *(int32_t *)(lVar25 + lVar10 + 8);
        *(int32_t *)((int64_t)puVar4 + lVar25 + 8) = uVar19;
        *(int32_t *)((int64_t)puVar4 + lVar25 + 0xc) = uVar3;
        lVar25 = lVar25 + 0x10;
        stack_array_1c8[0] = stack_array_1c8[0] - 1;
      } while (stack_array_1c8[0] != 0);
      stack_array_1c8[0] = 0;
      uVar24 = local_var_1a0;
      lVar10 = lStack_1a8;
    }
  }
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,&param_5,plocal_var_1b0);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,astack_special_x_8,plocal_var_1b8);
  puVar14 = pstack_special_x_10;
  local_var_1d0 = CONCAT44(uVar19,*puVar15);
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,stack_array_198,pstack_special_x_10[1]);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,&lStack_1a8,*puVar14);
  local_var_1d8 = CONCAT44(uVar19,*puVar15);
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,&local_var_1a0,stack_special_x_20);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)RenderingSystem_ShaderProcessor(lVar10,stack_array_1c8,stack_special_x_18);
  local_var_150 = *puVar15;
  plocal_var_160 = &memory_allocator_3040_ptr;
  local_var_158 = local_var_1d8;
  local_var_148 = local_var_1d0;
  plocal_var_130 = puVar4 + (uVar24 & 0xffffffff) * 2;
  iStack_140 = param_6;
  local_var_14c = uVar19;
  plocal_var_138 = puVar4;
  RenderingSystem_StateManager0(lVar10,&plocal_var_160,4);
  return *(char *)(lVar10 + 0x1b8) == '\0';
}
bool function_6a4e20(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                  int32_t param_5)
{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  int64_t *plVar4;
  byte *pbVar5;
  byte bVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  char *pcVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int32_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  char acStackX_8 [8];
  uint64_t *pstack_special_x_10;
  uint64_t *pstack_special_x_18;
  uint64_t stack_special_x_20;
  int32_t stack_array_138 [2];
  uint64_t local_var_130;
  int32_t local_var_128;
  int32_t local_var_124;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int8_t stack_array_110 [4];
  int8_t stack_array_10c [4];
  uint64_t local_var_108;
  int64_t lStack_100;
  void *plocal_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  void *plocal_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int32_t local_var_b8;
  void *aplocal_var_b0 [14];
  plVar4 = *(int64_t **)(param_1 + 0x40);
  uVar18 = *param_4;
  uVar13 = param_4[1];
  pstack_special_x_10 = param_2;
  pstack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  plVar7 = (int64_t *)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_var_120 = uVar18;
  local_var_118 = uVar13;
  (**(code **)(*plVar7 + 0x98))(plVar7,aplocal_var_b0,param_2,param_3,&local_var_120,param_5);
  aplocal_var_b0[0] = &memory_allocator_3712_ptr;
  (**(code **)(*plVar4 + 0x20))(plVar4);
  puVar19 = stack_special_x_20;
  uVar18 = (int64_t)(stack_special_x_20[1] - *stack_special_x_20) >> 5;
  iVar16 = (int)uVar18;
  local_var_120 = uVar18;
  if (*(uint *)(param_1 + 0x50) < (uint)(iVar16 << 5)) {
    acStackX_8[0] = '\0';
    function_6a6600(param_1 + 0x48,iVar16 << 5,acStackX_8);
  }
  lStack_100 = *(int64_t *)(param_1 + 0x48);
  lVar21 = 0;
  if (iVar16 != 0) {
    puVar12 = (uint64_t *)(lStack_100 + 8);
    uVar13 = uVar18 & 0xffffffff;
    do {
      puVar12[-1] = &memory_allocator_3056_ptr;
      *puVar12 = 0;
      *(int32_t *)(puVar12 + 1) = 0;
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (iVar16 != 0) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        lVar22 = *puVar19 + lVar21;
        local_var_130 = uVar18;
        puVar8 = (int32_t *)
                 RenderingSystem_ShaderProcessor(param_1 + -8,stack_array_110,*(uint64_t *)(lVar22 + 0x10));
        uVar3 = *puVar8;
        puVar8 = (int32_t *)RenderingSystem_ShaderProcessor(param_1 + -8,stack_array_10c,*(uint64_t *)(lVar22 + 8));
        local_var_128 = *puVar8;
        pbVar5 = *(byte **)(lVar21 + *puVar19);
        uVar17 = 0;
        local_var_124 = uVar3;
        if ((pbVar5 != (byte *)0x0) && (bVar6 = *pbVar5, bVar6 != 0)) {
          if (*(int *)(param_1 + 0x3c) != 0) {
            uVar15 = 0x1505;
            pbVar14 = pbVar5;
            do {
              pbVar14 = pbVar14 + 1;
              uVar15 = uVar15 * 0x21 ^ (uint)bVar6;
              bVar6 = *pbVar14;
            } while (bVar6 != 0);
            uVar15 = *(uint *)(*(int64_t *)(param_1 + 0x20) +
                              (uint64_t)(*(int *)(param_1 + 0x2c) - 1U & uVar15) * 4);
            if (uVar15 != 0xffffffff) {
              do {
                pcVar9 = *(char **)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar15 * 0x10);
                lVar20 = (int64_t)pbVar5 - (int64_t)pcVar9;
                do {
                  cVar1 = *pcVar9;
                  cVar2 = pcVar9[lVar20];
                  if (cVar1 != cVar2) break;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  if ((uVar15 != 0xffffffff) &&
                     (lVar20 = (uint64_t)uVar15 * 0x10 + *(int64_t *)(param_1 + 0x10), lVar20 != 0
                     )) {
                    uVar17 = *(int32_t *)(lVar20 + 8);
                    goto LAB_1806a50da;
                  }
                  break;
                }
                uVar15 = *(uint *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)uVar15 * 4);
              } while (uVar15 != 0xffffffff);
            }
          }
          plVar4 = *(int64_t **)(param_1 + 0x40);
          plVar7 = (int64_t *)(**(code **)(*plVar4 + 0x18))(plVar4);
          plVar10 = (int64_t *)(**(code **)(*plVar7 + 0xc0))(plVar7);
          (**(code **)(*plVar10 + 0x20))(plVar10,stack_array_138,pbVar5);
          plVar7 = (int64_t *)(**(code **)(*plVar7 + 0xc0))(plVar7);
          uVar11 = (**(code **)(*plVar7 + 0x28))(plVar7,stack_array_138[0]);
          local_var_e8 = stack_array_138[0];
          plocal_var_f8 = &rendering_buffer_2976_ptr;
          local_var_f0 = uVar11;
          RenderingSystem_StateManager0(param_1 + -8,&plocal_var_f8,1);
          uVar3 = stack_array_138[0];
          plocal_var_f8 = &rendering_buffer_2008_ptr;
          local_var_108 = uVar11;
          puVar12 = (uint64_t *)function_6a45c0(param_1 + 8,&local_var_108,acStackX_8);
          uVar17 = stack_array_138[0];
          if (acStackX_8[0] == '\0') {
            *puVar12 = uVar11;
            *(int32_t *)(puVar12 + 1) = uVar3;
          }
          (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar18 = local_var_130;
        }
LAB_1806a50da:
        uVar3 = *(int32_t *)(lVar22 + 0x1c);
        *(int32_t *)(lVar21 + 0x14 + lStack_100) = *(int32_t *)(lVar22 + 0x18);
        *(int32_t *)(lVar21 + 8 + lStack_100) = uVar17;
        *(uint64_t *)(lVar21 + 0xc + lStack_100) = CONCAT44(local_var_124,local_var_128);
        *(int32_t *)(lVar21 + 0x18 + lStack_100) = uVar3;
        lVar21 = lVar21 + 0x20;
        uVar18 = uVar18 - 1;
        puVar19 = stack_special_x_20;
      } while (uVar18 != 0);
      local_var_130 = 0;
      param_3 = pstack_special_x_18;
    }
  }
  lVar21 = lStack_100;
  puVar8 = (int32_t *)RenderingSystem_ShaderProcessor(param_1 + -8,&stack_special_x_20,param_3[1]);
  uVar3 = *puVar8;
  puVar8 = (int32_t *)RenderingSystem_ShaderProcessor(param_1 + -8,&pstack_special_x_18,*param_3);
  puVar12 = pstack_special_x_10;
  local_var_130 = CONCAT44(uVar3,*puVar8);
  puVar8 = (int32_t *)RenderingSystem_ShaderProcessor(param_1 + -8,&pstack_special_x_10,pstack_special_x_10[1]);
  uVar3 = *puVar8;
  puVar8 = (int32_t *)RenderingSystem_ShaderProcessor(param_1 + -8,acStackX_8,*puVar12);
  plocal_var_e0 = &memory_allocator_3072_ptr;
  lStack_c0 = (local_var_120 & 0xffffffff) * 0x20 + lVar21;
  stack_special_x_20 = (uint64_t *)CONCAT44(uVar3,*puVar8);
  local_var_d8 = stack_special_x_20;
  local_var_d0 = local_var_130;
  local_var_b8 = param_5;
  lStack_c8 = lVar21;
  RenderingSystem_StateManager0(param_1 + -8,&plocal_var_e0,5);
  return *(char *)(param_1 + 0x1b0) == '\0';
}
bool function_6a5200(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int8_t astack_special_x_8 [8];
  int8_t astack_special_x_10 [8];
  int8_t astack_special_x_18 [8];
  int8_t astack_special_x_20 [8];
  void *plocal_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  plVar4 = *(int64_t **)(param_1 + 0x40);
  plVar5 = (int64_t *)(**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar7 = param_1 + -8;
  puVar6 = (int32_t *)RenderingSystem_ShaderProcessor(lVar7,astack_special_x_8,param_3[1]);
  uVar1 = *puVar6;
  puVar6 = (int32_t *)RenderingSystem_ShaderProcessor(lVar7,astack_special_x_10,*param_3);
  uVar2 = *puVar6;
  puVar6 = (int32_t *)RenderingSystem_ShaderProcessor(lVar7,astack_special_x_18,param_2[1]);
  uVar3 = *puVar6;
  puVar6 = (int32_t *)RenderingSystem_ShaderProcessor(lVar7,astack_special_x_20,*param_2);
  plocal_var_48 = &memory_allocator_3008_ptr;
  local_var_40 = CONCAT44(uVar3,*puVar6);
  local_var_38 = CONCAT44(uVar1,uVar2);
  RenderingSystem_StateManager0(lVar7,&plocal_var_48,3);
  return *(char *)(param_1 + 0x1b0) == '\0';
}
bool function_6a52f0(int64_t param_1,uint64_t param_2)
{
  void *plocal_var_18;
  uint64_t local_var_10;
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x38))();
  plocal_var_18 = &memory_allocator_3216_ptr;
  local_var_10 = param_2;
  RenderingSystem_StateManager0(param_1,&plocal_var_18,0xf);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
bool function_6a5350(int64_t param_1)
{
  void *pstack_special_x_8;
  *(int32_t *)(param_1 + 0xb8) = 0;
  pstack_special_x_8 = &memory_allocator_3152_ptr;
  RenderingSystem_StateManager0(param_1,&pstack_special_x_8,0xe);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
bool function_6a53a0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int32_t *puVar2;
  int8_t astack_special_x_8 [8];
  void *plocal_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  uVar1 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  puVar2 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8,param_3);
  local_var_18 = *puVar2;
  plocal_var_28 = &memory_allocator_3200_ptr;
  local_var_20 = param_2;
  local_var_10 = uVar1;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x13);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
bool function_6a5430(int64_t param_1)
{
  void *pstack_special_x_8;
  *(int32_t *)(param_1 + 0xb8) = 0;
  pstack_special_x_8 = &memory_allocator_3152_ptr;
  RenderingSystem_StateManager0(param_1,&pstack_special_x_8,10);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void function_6a5480(int64_t param_1)
void function_6a5480(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (*(uint *)(param_1 + 0x1d0) != 0) {
    lVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 0x1d0);
    do {
      plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(param_1 + 0x1c8));
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        puVar2 = *(uint64_t **)(lVar3 + *(int64_t *)(param_1 + 0x1c8));
        (**(code **)*puVar2)(puVar2,0);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int32_t *)(param_1 + 0x1d0) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  return;
}
// 函数: void function_6a5493(void)
void function_6a5493(void)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint in_EAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t unaff_RDI;
  lVar3 = 0;
  uVar4 = (uint64_t)in_EAX;
  do {
    plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(unaff_RDI + 0x1c8));
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      puVar2 = *(uint64_t **)(lVar3 + *(int64_t *)(unaff_RDI + 0x1c8));
      (**(code **)*puVar2)(puVar2,0);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(int32_t *)(unaff_RDI + 0x1d0) = 0;
  *(uint64_t *)(unaff_RDI + 0x1e8) = 0;
  return;
}
// 函数: void function_6a54ef(void)
void function_6a54ef(void)
{
  int64_t unaff_RDI;
  *(int32_t *)(unaff_RDI + 0x1d0) = 0;
  *(uint64_t *)(unaff_RDI + 0x1e8) = 0;
  return;
}
int64_t * function_6a5530(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 0x60);
  (**(code **)(*(int64_t *)(param_1 + 0x60) + 0x20))(plVar1);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return plVar1;
}
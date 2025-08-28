/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part137.c - 16 个函数
// 函数: void function_34db80(int64_t *param_1)
void function_34db80(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    function_207ea0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_34dbe0(int64_t param_1)
void function_34dbe0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  lVar2 = 0;
  do {
    if (*(int64_t *)(param_1 + 0x198 + lVar2 * 8) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 0x198 + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 2);
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 0xe8);
  plVar1 = *(int64_t **)(param_1 + 0xd0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (int64_t *)(param_1 + 0x98));
    *(uint64_t *)(param_1 + 0xd0) = 0;
  }
  *(void **)(param_1 + 0x10) = &system_state_ptr;
  return;
}
// 函数: void function_34dce0(int64_t param_1)
void function_34dce0(int64_t param_1)
{
  int64_t lVar1;
  lVar1 = 0;
  do {
    if (*(int64_t *)(param_1 + lVar1 * 8) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + lVar1 * 8) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < 2);
  return;
}
// 函数: void function_34dd30(int64_t param_1)
void function_34dd30(int64_t param_1)
{
  int iVar1;
  iVar1 = _Mtx_lock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(int8_t *)(param_1 + 0x98) = 0;
  iVar1 = _Mtx_unlock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
uint64_t *
function_34dd90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &memory_allocator_3480_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  param_1[0x1a] = 0;
  _Cnd_init_in_situ(param_1 + 0x1d);
  _Mtx_init_in_situ(param_1 + 0x26,2,param_3,param_4,uVar1);
  *(int8_t *)(param_1 + 0x30) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0xd) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)((int64_t)param_1 + 0x6c) = 0xbf800000;
  *(int32_t *)(param_1 + 0xe) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0xbf800000;
  param_1[0xf] = 0xffffffffbf800000;
  param_1[0x31] = 0;
  *(int32_t *)(param_1 + 0x32) = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  LOCK();
  *(int32_t *)((int64_t)param_1 + 0x84) = 0;
  UNLOCK();
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x1b) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)param_1 + 0xdc) = 0;
  UNLOCK();
  function_34dd30(param_1 + 0x1d);
  LOCK();
  *(int32_t *)(param_1 + 0x1c) = 0;
  UNLOCK();
  *(int8_t *)((int64_t)param_1 + 0x194) = 0;
  return param_1;
}
uint64_t *
function_34dec0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_8888_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34df10(int64_t param_1)
void function_34df10(int64_t param_1)
{
  uint uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  int64_t lVar22;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int8_t stack_array_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_d8;
  uint local_var_d4;
  uint local_var_d0;
  uint local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint local_var_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_var_78;
  uint local_var_74;
  uint local_var_70;
  uint local_var_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_var_5c;
  uint64_t local_var_58;
  uint64_t local_var_30;
  if ((*(uint *)(*(int64_t *)(param_1 + 0x18) + 0x2ac) & 0x8000) == 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x260);
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x84) != '\0') {
        if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
          local_var_30 = 0x18034df5c;
          function_2fcbe0(lVar3,*(int64_t *)(param_1 + 0x70) + 0x70);
          *(int32_t *)(lVar3 + 0x50) = *(int32_t *)(system_main_module_state + 0x224);
          *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) | 1;
        }
        local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
        lVar3 = *(int64_t *)(param_1 + 0x18);
        iVar21 = 0;
        lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x260);
        cVar2 = *(char *)(lVar4 + 0x20);
        if ('\0' < cVar2) {
          lVar22 = 0;
          local_var_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
          do {
            puVar20 = (uint *)((int64_t)(char)iVar21 * 0x100 + *(int64_t *)(lVar4 + 0x18));
            do {
              LOCK();
              uVar1 = *puVar20;
              *puVar20 = *puVar20 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            local_var_d8 = puVar20[1];
            local_var_d4 = puVar20[2];
            local_var_d0 = puVar20[3];
            local_var_cc = puVar20[4];
            fVar5 = (float)puVar20[5];
            fVar6 = (float)puVar20[6];
            fVar7 = (float)puVar20[7];
            local_var_bc = puVar20[8];
            *puVar20 = 0;
            fStack_c8 = fVar5;
            fStack_c4 = fVar6;
            fStack_c0 = fVar7;
            local_var_78 = local_var_d8;
            local_var_74 = local_var_d4;
            local_var_70 = local_var_d0;
            local_var_6c = local_var_cc;
            fStack_68 = fVar5;
            fStack_64 = fVar6;
            fStack_60 = fVar7;
            local_var_5c = local_var_bc;
            SystemSecurityManager(&fStack_108,&local_var_d8);
            fVar8 = *(float *)(lVar3 + 0x70);
            fVar9 = *(float *)(lVar3 + 0x74);
            fVar10 = *(float *)(lVar3 + 0x78);
            fVar11 = *(float *)(lVar3 + 0x7c);
            fVar12 = *(float *)(lVar3 + 0x80);
            fVar13 = *(float *)(lVar3 + 0x84);
            fVar14 = *(float *)(lVar3 + 0x88);
            fVar15 = *(float *)(lVar3 + 0x8c);
            fVar16 = *(float *)(lVar3 + 0x90);
            fVar17 = *(float *)(lVar3 + 0x94);
            fVar18 = *(float *)(lVar3 + 0x98);
            fVar19 = *(float *)(lVar3 + 0x9c);
            fStack_b8 = fStack_104 * fVar12 + fStack_108 * fVar8 + fStack_100 * fVar16;
            fStack_b4 = fStack_104 * fVar13 + fStack_108 * fVar9 + fStack_100 * fVar17;
            fStack_b0 = fStack_104 * fVar14 + fStack_108 * fVar10 + fStack_100 * fVar18;
            fStack_ac = fStack_104 * fVar15 + fStack_108 * fVar11 + fStack_100 * fVar19;
            fStack_a8 = fStack_f4 * fVar12 + fStack_f8 * fVar8 + fStack_f0 * fVar16;
            fStack_a4 = fStack_f4 * fVar13 + fStack_f8 * fVar9 + fStack_f0 * fVar17;
            fStack_a0 = fStack_f4 * fVar14 + fStack_f8 * fVar10 + fStack_f0 * fVar18;
            fStack_9c = fStack_f4 * fVar15 + fStack_f8 * fVar11 + fStack_f0 * fVar19;
            fStack_98 = fStack_e4 * fVar12 + fStack_e8 * fVar8 + fStack_e0 * fVar16;
            fStack_94 = fStack_e4 * fVar13 + fStack_e8 * fVar9 + fStack_e0 * fVar17;
            fStack_90 = fStack_e4 * fVar14 + fStack_e8 * fVar10 + fStack_e0 * fVar18;
            fStack_8c = fStack_e4 * fVar15 + fStack_e8 * fVar11 + fStack_e0 * fVar19;
            fStack_88 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
            fStack_84 = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
            fStack_80 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
            fStack_7c = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
            NetworkProtocol_Transmitter(*(uint64_t *)(lVar22 + *(int64_t *)(param_1 + 0x78)),&fStack_b8);
            iVar21 = iVar21 + 1;
            lVar22 = lVar22 + 8;
          } while (iVar21 < cVar2);
        }
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_128);
      }
      local_var_30 = 0x18034df95;
      function_34ebc0();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34df2d(int64_t param_1,int64_t param_2)
void function_34df2d(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  int64_t unaff_RBX;
  int64_t lVar22;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int8_t stack_array_100 [32];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint local_var_b0;
  uint local_var_ac;
  uint local_var_a8;
  uint local_var_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint local_var_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint local_var_50;
  uint local_var_4c;
  uint local_var_48;
  uint local_var_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint local_var_34;
  uint64_t local_var_30;
  uint64_t local_var_8;
  lVar3 = *(int64_t *)(param_2 + 0x260);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
        local_var_8 = 0x18034df5c;
        function_2fcbe0(lVar3,param_2 + 0x70);
        *(int32_t *)(lVar3 + 0x50) = *(int32_t *)(system_main_module_state + 0x224);
        *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) | 1;
      }
      local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_100;
      lVar3 = *(int64_t *)(unaff_RBX + 0x18);
      iVar21 = 0;
      lVar4 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x260);
      cVar2 = *(char *)(lVar4 + 0x20);
      if ('\0' < cVar2) {
        lVar22 = 0;
        local_var_8 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
        do {
          puVar20 = (uint *)((int64_t)(char)iVar21 * 0x100 + *(int64_t *)(lVar4 + 0x18));
          do {
            LOCK();
            uVar1 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar1 & 1) != 0);
          local_var_b0 = puVar20[1];
          local_var_ac = puVar20[2];
          local_var_a8 = puVar20[3];
          local_var_a4 = puVar20[4];
          fVar5 = (float)puVar20[5];
          fVar6 = (float)puVar20[6];
          fVar7 = (float)puVar20[7];
          local_var_94 = puVar20[8];
          *puVar20 = 0;
          fStack_a0 = fVar5;
          fStack_9c = fVar6;
          fStack_98 = fVar7;
          local_var_50 = local_var_b0;
          local_var_4c = local_var_ac;
          local_var_48 = local_var_a8;
          local_var_44 = local_var_a4;
          fStack_40 = fVar5;
          fStack_3c = fVar6;
          fStack_38 = fVar7;
          local_var_34 = local_var_94;
          SystemSecurityManager(&fStack_e0,&local_var_b0);
          fVar8 = *(float *)(lVar3 + 0x70);
          fVar9 = *(float *)(lVar3 + 0x74);
          fVar10 = *(float *)(lVar3 + 0x78);
          fVar11 = *(float *)(lVar3 + 0x7c);
          fVar12 = *(float *)(lVar3 + 0x80);
          fVar13 = *(float *)(lVar3 + 0x84);
          fVar14 = *(float *)(lVar3 + 0x88);
          fVar15 = *(float *)(lVar3 + 0x8c);
          fVar16 = *(float *)(lVar3 + 0x90);
          fVar17 = *(float *)(lVar3 + 0x94);
          fVar18 = *(float *)(lVar3 + 0x98);
          fVar19 = *(float *)(lVar3 + 0x9c);
          fStack_90 = fStack_dc * fVar12 + fStack_e0 * fVar8 + fStack_d8 * fVar16;
          fStack_8c = fStack_dc * fVar13 + fStack_e0 * fVar9 + fStack_d8 * fVar17;
          fStack_88 = fStack_dc * fVar14 + fStack_e0 * fVar10 + fStack_d8 * fVar18;
          fStack_84 = fStack_dc * fVar15 + fStack_e0 * fVar11 + fStack_d8 * fVar19;
          fStack_80 = fStack_cc * fVar12 + fStack_d0 * fVar8 + fStack_c8 * fVar16;
          fStack_7c = fStack_cc * fVar13 + fStack_d0 * fVar9 + fStack_c8 * fVar17;
          fStack_78 = fStack_cc * fVar14 + fStack_d0 * fVar10 + fStack_c8 * fVar18;
          fStack_74 = fStack_cc * fVar15 + fStack_d0 * fVar11 + fStack_c8 * fVar19;
          fStack_70 = fStack_bc * fVar12 + fStack_c0 * fVar8 + fStack_b8 * fVar16;
          fStack_6c = fStack_bc * fVar13 + fStack_c0 * fVar9 + fStack_b8 * fVar17;
          fStack_68 = fStack_bc * fVar14 + fStack_c0 * fVar10 + fStack_b8 * fVar18;
          fStack_64 = fStack_bc * fVar15 + fStack_c0 * fVar11 + fStack_b8 * fVar19;
          fStack_60 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
          fStack_5c = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
          fStack_58 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
          fStack_54 = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
          NetworkProtocol_Transmitter(*(uint64_t *)(lVar22 + *(int64_t *)(unaff_RBX + 0x78)),&fStack_90);
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 8;
        } while (iVar21 < cVar2);
      }
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_100);
    }
    local_var_8 = 0x18034df95;
    function_34ebc0();
  }
  return;
}
// 函数: void function_34df90(void)
void function_34df90(void)
{
  function_34ebc0();
  return;
}
// 函数: void function_34df9a(void)
void function_34df9a(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34dfa0(int64_t param_1)
void function_34dfa0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t *puVar8;
  uint64_t uVar9;
  int8_t stack_array_1a8 [64];
  char cStack_168;
  int32_t local_var_164;
  uint64_t local_var_e0;
  uint64_t local_var_58;
  uint64_t *puVar7;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  puVar5 = (uint64_t *)0x0;
  local_var_164 = 0;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x260);
  lVar2 = *(int64_t *)(param_1 + 0x78);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      cStack_168 = *(char *)(lVar1 + 0x20);
      uVar9 = (uint64_t)cStack_168;
      if (cStack_168 != '\0') {
        puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8 + 0x10,3);
        *puVar3 = uVar9 << 0x20 | 8;
        puVar7 = puVar5;
        puVar8 = puVar3 + 2;
        do {
          *puVar8 = 0;
          uVar6 = (int)puVar7 + 1;
          puVar7 = (uint64_t *)(uint64_t)uVar6;
          puVar8 = puVar8 + 1;
          puVar5 = puVar3 + 2;
        } while ((uint64_t)(int64_t)(int)uVar6 < uVar9);
      }
      *(uint64_t **)(param_1 + 0x78) = puVar5;
// WARNING: Subroutine does not return
      memset(puVar5,0,uVar9 * 8);
    }
  }
  else if (lVar1 == 0) {
    uVar9 = *(uint64_t *)(lVar2 + -0x10);
    uVar4 = uVar9 >> 0x20;
    if ((int)(uVar9 >> 0x20) != 0) {
      do {
        if (*(int64_t **)((int64_t)puVar5 + lVar2) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)((int64_t)puVar5 + lVar2) + 0x38))();
        }
        puVar5 = (uint64_t *)(uint64_t)(uint)((int)puVar5 + (int)uVar9);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar2 + -0x10);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1a8);
}
// 函数: void function_34e490(int64_t param_1)
void function_34e490(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x2ac);
  *(uint *)(lVar2 + 0x2ac) = uVar1 | 0x40000;
  function_2ee810(lVar2,uVar1);
  function_2ee990(lVar2,uVar1);
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) != 0) {
    function_34dfa0(param_1,0);
    function_34ebc0(param_1);
  }
  return;
}
// 函数: void function_34e500(int64_t param_1,int64_t param_2)
void function_34e500(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  float fVar3;
  if (((*(int *)(param_2 + 0x10) == 0xf) &&
      (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_dd30), iVar2 == 0)) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x260), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      if (*(short *)(lVar1 + 0x40) == 3) {
        if (*(float *)(lVar1 + 0x3c) < 0.0) {
          fVar3 = 0.1;
        }
        else {
          fVar3 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
        }
        *(float *)(lVar1 + 0x34) = fVar3;
        *(int16_t *)(lVar1 + 0x40) = 4;
        if ((*(int64_t *)(lVar1 + 0x130) != 0) || (*(int64_t *)(lVar1 + 0x138) != 0)) {
          (**(code **)(lVar1 + 0x138))(*(int64_t *)(lVar1 + 0x130),lVar1);
        }
      }
    }
    else if (*(short *)(lVar1 + 0x40) == 0) {
      *(int32_t *)(lVar1 + 0x1e8) = 0;
      *(int32_t *)(lVar1 + 0x1ec) = 0;
      *(int32_t *)(lVar1 + 0x1f0) = 0;
      *(int32_t *)(lVar1 + 500) = 0;
      function_2fedf0(lVar1,&system_data_02f0,&system_data_02f0);
    }
    *(ushort *)(lVar1 + 0xa8) = *(ushort *)(lVar1 + 0xa8) & 0xfff7;
  }
  return;
}
// 函数: void function_34e532(void)
void function_34e532(void)
{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t unaff_RDI;
  float fVar2;
  lVar1 = *(int64_t *)(in_RAX + 0x260);
  if (lVar1 != 0) {
    if (*(char *)(unaff_RDI + 0x84) == '\0') {
      if (*(short *)(lVar1 + 0x40) == 3) {
        if (*(float *)(lVar1 + 0x3c) < 0.0) {
          fVar2 = 0.1;
        }
        else {
          fVar2 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
        }
        *(float *)(lVar1 + 0x34) = fVar2;
        *(int16_t *)(lVar1 + 0x40) = 4;
        if ((*(int64_t *)(lVar1 + 0x130) != 0) || (*(int64_t *)(lVar1 + 0x138) != 0)) {
          (**(code **)(lVar1 + 0x138))(*(int64_t *)(lVar1 + 0x130),lVar1);
        }
      }
    }
    else if (*(short *)(lVar1 + 0x40) == 0) {
      *(int32_t *)(lVar1 + 0x1e8) = 0;
      *(int32_t *)(lVar1 + 0x1ec) = 0;
      *(int32_t *)(lVar1 + 0x1f0) = 0;
      *(int32_t *)(lVar1 + 500) = 0;
      function_2fedf0(lVar1,&system_data_02f0,&system_data_02f0);
    }
    *(ushort *)(lVar1 + 0xa8) = *(ushort *)(lVar1 + 0xa8) & 0xfff7;
  }
  return;
}
// 函数: void function_34e5e1(void)
void function_34e5e1(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34e5f0(uint64_t param_1)
void function_34e5f0(uint64_t param_1)
{
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void **applocal_var_e8 [2];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *aplocal_var_78 [11];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0xf;
  strcpy_s(stack_array_c0,0x40,&system_data_dd30);
  SystemCommunicationProcessor(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 3;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// 函数: void function_34e700(int64_t param_1)
void function_34e700(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x2ac);
  *(uint *)(lVar2 + 0x2ac) = uVar1 | 0x40000;
  function_2ee810(lVar2,uVar1);
  function_2ee990(lVar2,uVar1);
  if ((*(uint *)(*(int64_t *)(param_1 + 0x18) + 0x2ac) & 0x8000) == 0) {
    function_34dfa0(param_1,1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34e770(int64_t param_1)
void function_34e770(int64_t param_1)
{
  uint uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  int64_t lVar22;
  int8_t stack_array_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_d8;
  uint local_var_d4;
  uint local_var_d0;
  uint local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint local_var_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_var_78;
  uint local_var_74;
  uint local_var_70;
  uint local_var_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_var_5c;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  lVar3 = *(int64_t *)(param_1 + 0x18);
  iVar21 = 0;
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x260);
  cVar2 = *(char *)(lVar4 + 0x20);
  if ('\0' < cVar2) {
    lVar22 = 0;
    do {
      puVar20 = (uint *)((int64_t)(char)iVar21 * 0x100 + *(int64_t *)(lVar4 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar20;
        *puVar20 = *puVar20 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_d8 = puVar20[1];
      local_var_d4 = puVar20[2];
      local_var_d0 = puVar20[3];
      local_var_cc = puVar20[4];
      fVar5 = (float)puVar20[5];
      fVar6 = (float)puVar20[6];
      fVar7 = (float)puVar20[7];
      local_var_bc = puVar20[8];
      *puVar20 = 0;
      fStack_c8 = fVar5;
      fStack_c4 = fVar6;
      fStack_c0 = fVar7;
      local_var_78 = local_var_d8;
      local_var_74 = local_var_d4;
      local_var_70 = local_var_d0;
      local_var_6c = local_var_cc;
      fStack_68 = fVar5;
      fStack_64 = fVar6;
      fStack_60 = fVar7;
      local_var_5c = local_var_bc;
      SystemSecurityManager(&fStack_108,&local_var_d8);
      fVar8 = *(float *)(lVar3 + 0x70);
      fVar9 = *(float *)(lVar3 + 0x74);
      fVar10 = *(float *)(lVar3 + 0x78);
      fVar11 = *(float *)(lVar3 + 0x7c);
      fVar12 = *(float *)(lVar3 + 0x80);
      fVar13 = *(float *)(lVar3 + 0x84);
      fVar14 = *(float *)(lVar3 + 0x88);
      fVar15 = *(float *)(lVar3 + 0x8c);
      fVar16 = *(float *)(lVar3 + 0x90);
      fVar17 = *(float *)(lVar3 + 0x94);
      fVar18 = *(float *)(lVar3 + 0x98);
      fVar19 = *(float *)(lVar3 + 0x9c);
      fStack_b8 = fStack_104 * fVar12 + fStack_108 * fVar8 + fStack_100 * fVar16;
      fStack_b4 = fStack_104 * fVar13 + fStack_108 * fVar9 + fStack_100 * fVar17;
      fStack_b0 = fStack_104 * fVar14 + fStack_108 * fVar10 + fStack_100 * fVar18;
      fStack_ac = fStack_104 * fVar15 + fStack_108 * fVar11 + fStack_100 * fVar19;
      fStack_a8 = fStack_f4 * fVar12 + fStack_f8 * fVar8 + fStack_f0 * fVar16;
      fStack_a4 = fStack_f4 * fVar13 + fStack_f8 * fVar9 + fStack_f0 * fVar17;
      fStack_a0 = fStack_f4 * fVar14 + fStack_f8 * fVar10 + fStack_f0 * fVar18;
      fStack_9c = fStack_f4 * fVar15 + fStack_f8 * fVar11 + fStack_f0 * fVar19;
      fStack_98 = fStack_e4 * fVar12 + fStack_e8 * fVar8 + fStack_e0 * fVar16;
      fStack_94 = fStack_e4 * fVar13 + fStack_e8 * fVar9 + fStack_e0 * fVar17;
      fStack_90 = fStack_e4 * fVar14 + fStack_e8 * fVar10 + fStack_e0 * fVar18;
      fStack_8c = fStack_e4 * fVar15 + fStack_e8 * fVar11 + fStack_e0 * fVar19;
      fStack_88 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
      fStack_84 = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
      fStack_80 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
      fStack_7c = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
      NetworkProtocol_Transmitter(*(uint64_t *)(lVar22 + *(int64_t *)(param_1 + 0x78)),&fStack_b8);
      iVar21 = iVar21 + 1;
      lVar22 = lVar22 + 8;
    } while (iVar21 < cVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_128);
}
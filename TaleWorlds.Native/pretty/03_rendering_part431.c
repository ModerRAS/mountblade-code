/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part431.c - 24 个函数
// 函数: void NetworkSystem_01cb0(int64_t *param_1,int64_t param_2)
void NetworkSystem_01cb0(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  uint uVar14;
  int64_t *plVar15;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  int32_t local_var_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int32_t local_var_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  uint local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  uint local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  local_var_68 = (int32_t)*param_1;
  local_var_64 = *(int32_t *)((int64_t)param_1 + 4);
  lVar10 = *param_1;
  lVar9 = *param_1;
  local_var_60 = *(uint *)(param_1 + 1);
  local_var_5c = *(int32_t *)((int64_t)param_1 + 0xc);
  uVar3 = *(uint *)(param_2 + 8);
  while( true ) {
    if (local_var_60 == uVar3) {
      return;
    }
    uVar12 = (uint64_t)(local_var_60 + (local_var_60 >> 4) * -0x10);
    lVar4 = *(int64_t *)(lVar9 + 8 + (uint64_t)(local_var_60 >> 4) * 8);
    lStack_f8 = *(int64_t *)(lVar4 + uVar12 * 0x50);
    *(uint64_t *)(lVar4 + uVar12 * 0x50) = 0;
    lStack_f0 = *(int64_t *)(lVar4 + 8 + uVar12 * 0x50);
    *(uint64_t *)(lVar4 + 8 + uVar12 * 0x50) = 0;
    lStack_e8 = *(int64_t *)(lVar4 + 0x10 + uVar12 * 0x50);
    *(uint64_t *)(lVar4 + 0x10 + uVar12 * 0x50) = 0;
    local_var_e0 = *(int32_t *)(lVar4 + 0x18 + uVar12 * 0x50);
    *(int32_t *)(lVar4 + 0x18 + uVar12 * 0x50) = *(int32_t *)(lVar4 + 0x18 + uVar12 * 0x50);
    plVar13 = (int64_t *)(lVar4 + 0x20 + uVar12 * 0x50);
    lStack_d8 = *plVar13;
    lStack_d0 = plVar13[1];
    puVar1 = (uint64_t *)(lVar4 + 0x30 + uVar12 * 0x50);
    local_var_c8 = *puVar1;
    local_var_c0 = puVar1[1];
    plVar13 = (int64_t *)(lVar4 + 0x40 + uVar12 * 0x50);
    lStack_b8 = *plVar13;
    lStack_b0 = plVar13[1];
    uVar14 = local_var_60;
    uVar8 = local_var_60;
    while( true ) {
      uVar8 = uVar8 - 1;
      lVar4 = *(int64_t *)
               (*(int64_t *)(lVar9 + 8 + (uint64_t)(uVar8 >> 4) * 8) +
               (uint64_t)(uVar8 & 0xf) * 0x50);
      fVar2 = *(float *)(lVar4 + 0xca4);
      if (*(float *)(lStack_f8 + 0xca4) == fVar2) {
        bVar7 = *(float *)(lStack_f8 + 0xc90) < *(float *)(lVar4 + 0xc90);
      }
      else {
        bVar7 = *(float *)(lStack_f8 + 0xca4) < fVar2;
      }
      local_var_58 = local_var_68;
      local_var_54 = local_var_64;
      local_var_50 = local_var_60;
      local_var_4c = local_var_5c;
      if (!bVar7) break;
      plVar15 = (int64_t *)
                (*(int64_t *)(lVar9 + 8 + (uint64_t)(uVar8 >> 4) * 8) +
                (uint64_t)(uVar8 & 0xf) * 0x50);
      plVar13 = (int64_t *)
                (*(int64_t *)(lVar10 + 8 + (uint64_t)(uVar14 >> 4) * 8) +
                (uint64_t)(uVar14 + (uVar14 >> 4) * -0x10) * 0x50);
      if (plVar13 != plVar15) {
        plVar13[1] = *plVar13;
        lVar4 = *plVar13;
        *plVar13 = 0;
        lVar5 = plVar13[1];
        plVar13[1] = 0;
        lVar6 = plVar13[2];
        plVar13[2] = 0;
        lVar11 = plVar13[3];
        *(int *)(plVar13 + 3) = (int)plVar13[3];
        lStack_a8 = *plVar13;
        *plVar13 = lVar4;
        lStack_a0 = plVar13[1];
        plVar13[1] = lVar5;
        lStack_98 = plVar13[2];
        plVar13[2] = lVar6;
        local_var_90 = (int32_t)plVar13[3];
        *(int *)(plVar13 + 3) = (int)lVar11;
        if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(lStack_a8);
        }
        lVar4 = *plVar13;
        *plVar13 = *plVar15;
        *plVar15 = lVar4;
        lVar4 = plVar13[1];
        plVar13[1] = plVar15[1];
        plVar15[1] = lVar4;
        lVar4 = plVar13[2];
        plVar13[2] = plVar15[2];
        plVar15[2] = lVar4;
        lVar4 = plVar13[3];
        *(int *)(plVar13 + 3) = (int)plVar15[3];
        *(int *)(plVar15 + 3) = (int)lVar4;
        lStack_a8 = 0;
      }
      lVar4 = plVar15[5];
      plVar13[4] = plVar15[4];
      plVar13[5] = lVar4;
      lVar4 = plVar15[7];
      plVar13[6] = plVar15[6];
      plVar13[7] = lVar4;
      lVar4 = plVar15[9];
      plVar13[8] = plVar15[8];
      plVar13[9] = lVar4;
      uVar14 = uVar14 - 1;
    }
    plVar13 = (int64_t *)
              (*(int64_t *)(lVar10 + 8 + (uint64_t)(uVar14 >> 4) * 8) +
              (uint64_t)(uVar14 + (uVar14 >> 4) * -0x10) * 0x50);
    if (plVar13 != &lStack_f8) {
      plVar13[1] = *plVar13;
      lVar4 = *plVar13;
      *plVar13 = 0;
      lVar5 = plVar13[1];
      plVar13[1] = 0;
      lVar6 = plVar13[2];
      plVar13[2] = 0;
      lVar11 = plVar13[3];
      *(int *)(plVar13 + 3) = (int)plVar13[3];
      lStack_88 = *plVar13;
      *plVar13 = lVar4;
      lStack_80 = plVar13[1];
      plVar13[1] = lVar5;
      lStack_78 = plVar13[2];
      plVar13[2] = lVar6;
      local_var_70 = (int32_t)plVar13[3];
      *(int *)(plVar13 + 3) = (int)lVar11;
      if (lStack_88 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lStack_88);
      }
      lVar4 = *plVar13;
      *plVar13 = lStack_f8;
      lVar5 = plVar13[1];
      plVar13[1] = lStack_f0;
      lVar6 = plVar13[2];
      plVar13[2] = lStack_e8;
      lVar11 = plVar13[3];
      *(int32_t *)(plVar13 + 3) = local_var_e0;
      lStack_88 = 0;
      lStack_f8 = lVar4;
      lStack_f0 = lVar5;
      lStack_e8 = lVar6;
      local_var_e0 = (int)lVar11;
    }
    plVar13[4] = lStack_d8;
    plVar13[5] = lStack_d0;
    local_var_c8._4_4_ = (int32_t)((uint64_t)local_var_c8 >> 0x20);
    local_var_c0._4_4_ = (int32_t)((uint64_t)local_var_c0 >> 0x20);
    *(int32_t *)(plVar13 + 6) = (int32_t)local_var_c8;
    *(int32_t *)((int64_t)plVar13 + 0x34) = local_var_c8._4_4_;
    *(int32_t *)(plVar13 + 7) = (int32_t)local_var_c0;
    *(int32_t *)((int64_t)plVar13 + 0x3c) = local_var_c0._4_4_;
    plVar13[8] = lStack_b8;
    plVar13[9] = lStack_b0;
    if (lStack_f8 != 0) break;
    local_var_60 = local_var_60 + 1;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t NetworkSystem_02080(int64_t param_1)
{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (uint64_t *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(uint64_t *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x2048 + *(int64_t *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(int64_t *)(param_1 + 0x28);
LAB_1805020b7:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_180502156:
      lVar6 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x2048,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(uint64_t *)(lVar6 + 0x2000) = 0;
      *(uint64_t *)(lVar6 + 0x2008) = 0;
      *(int32_t *)(lVar6 + 0x2030) = 0;
      *(uint64_t *)(lVar6 + 0x2038) = 0;
      *(int16_t *)(lVar6 + 0x2040) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x2030);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_180502137:
      lVar6 = *(int64_t *)(param_1 + 0x28);
      goto LAB_1805020b7;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_180502137;
    LOCK();
    lVar6 = *(int64_t *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(int64_t *)(param_1 + 0x28) = *(int64_t *)(lVar9 + 0x2038);
      lVar6 = lVar9;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_180502156;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(int64_t *)(param_1 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x2038) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(int64_t *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(int64_t *)(param_1 + 0x28) = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        uVar5 = *puVar2;
        *puVar2 = *puVar2 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (uVar5 == 1);
    }
  } while( true );
}
int64_t NetworkSystem_021b0(int64_t param_1)
{
  if (*(int64_t **)(param_1 + 0x68) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x68) + 0x38))();
  }
  DataTransformer0();
  return param_1;
}
int64_t * NetworkSystem_021f0(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  if (param_1 != param_2) {
    param_1[1] = *param_1;
    lVar1 = *param_1;
    *param_1 = 0;
    lVar2 = param_1[1];
    param_1[1] = 0;
    lVar3 = param_1[2];
    param_1[2] = 0;
    lVar6 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_1[3];
    lVar4 = *param_1;
    *param_1 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = lVar2;
    lVar5 = param_1[2];
    param_1[2] = lVar3;
    lVar7 = param_1[3];
    *(int *)(param_1 + 3) = (int)lVar6;
    if (lVar4 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar4,(int)lVar6,lVar3,lVar2,0xfffffffffffffffe,lVar4,lVar1,lVar5,(int)lVar7);
    }
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar1;
    lVar1 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar1;
    lVar1 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(int *)(param_2 + 3) = (int)lVar1;
  }
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  lVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  return param_1;
}
// 函数: void NetworkSystem_02300(int64_t *param_1)
void NetworkSystem_02300(int64_t *param_1)
{
  param_1[9] = (int64_t)&system_data_buffer_ptr;
  if (param_1[10] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = (int64_t)&system_state_ptr;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
// 函数: void NetworkSystem_02380(int64_t param_1)
void NetworkSystem_02380(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  if (*(int64_t **)(param_1 + 0x68) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x68) + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x50);
  for (plVar2 = *(int64_t **)(param_1 + 0x48); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void NetworkSystem_023c0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_023c0(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  if (param_1 < param_2) {
    param_3 = (int64_t *)*param_3;
    lVar3 = (int64_t)param_1 << 3;
    uVar2 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      if (*(char *)(lVar1 + 0x3fe4) == '\0') {
        lVar1 = *(int64_t *)(lVar1 + 0x3fc0);
      }
      lVar1 = *(int64_t *)(lVar3 + lVar1);
      NetworkSystem_af580(param_3[1] + 0x52eda0 + (int64_t)*(int *)(lVar1 + 0x10) * 0x200,lVar1);
      NetworkSystem_2f590(lVar1,*(int32_t *)param_3[2],
                    param_3[1] + 0x52eda0 + (int64_t)*(int *)(lVar1 + 0x10) * 0x200,param_3[3]);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}
// 函数: void NetworkSystem_023d0(int param_1,int param_2)
void NetworkSystem_023d0(int param_1,int param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *unaff_RDI;
  lVar3 = (int64_t)param_1 << 3;
  uVar2 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *unaff_RDI;
    if (*(char *)(lVar1 + 0x3fe4) == '\0') {
      lVar1 = *(int64_t *)(lVar1 + 0x3fc0);
    }
    lVar1 = *(int64_t *)(lVar3 + lVar1);
    NetworkSystem_af580(unaff_RDI[1] + 0x52eda0 + (int64_t)*(int *)(lVar1 + 0x10) * 0x200,lVar1);
    NetworkSystem_2f590(lVar1,*(int32_t *)unaff_RDI[2],
                  unaff_RDI[1] + 0x52eda0 + (int64_t)*(int *)(lVar1 + 0x10) * 0x200,unaff_RDI[3]);
    lVar3 = lVar3 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}
// 函数: void NetworkSystem_0246d(void)
void NetworkSystem_0246d(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t NetworkSystem_02470(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c0a390;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t NetworkSystem_02560(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c0a3d0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x48,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      puVar3[8] = puVar1[8];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// 函数: void NetworkSystem_02660(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02660(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint local_var_28;
  uint local_var_24;
  uint local_var_20;
  int32_t local_var_1c;
  if (param_1 < param_2) {
    param_3 = (int64_t *)*param_3;
    lVar4 = (int64_t)param_1 << 3;
    uVar3 = (uint64_t)(uint)(param_2 - param_1);
    local_var_1c = 0x7f7fffff;
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x872948);
      }
      lVar1 = param_3[3];
      local_var_28 = *(uint *)(lVar1 + 0x20) ^ 0x80000000;
      local_var_24 = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
      local_var_20 = *(uint *)(lVar1 + 0x28) ^ 0x80000000;
      NetworkSystem_277e0(*(uint64_t *)(lVar4 + lVar2),*(int32_t *)param_3[1],
                    *(int32_t *)param_3[2],lVar1 + 0x30,&local_var_28);
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void NetworkSystem_02678(int param_1,int param_2)
void NetworkSystem_02678(int param_1,int param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  uint64_t uVar3;
  int64_t lVar4;
  int32_t in_XMM0_Da;
  uint local_buffer_30;
  uint local_buffer_34;
  uint local_buffer_38;
  int32_t local_buffer_3c;
  lVar4 = (int64_t)param_1 << 3;
  uVar3 = (uint64_t)(uint)(param_2 - param_1);
  local_buffer_3c = in_XMM0_Da;
  do {
    lVar1 = *unaff_RBX;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x872948);
    }
    lVar1 = unaff_RBX[3];
    local_buffer_30 = *(uint *)(lVar1 + 0x20) ^ 0x80000000;
    local_buffer_34 = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
    local_buffer_38 = *(uint *)(lVar1 + 0x28) ^ 0x80000000;
    NetworkSystem_277e0(*(uint64_t *)(lVar4 + lVar2),*(int32_t *)unaff_RBX[1],
                  *(int32_t *)unaff_RBX[2],lVar1 + 0x30,&local_buffer_00000030);
    lVar4 = lVar4 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}
// 函数: void NetworkSystem_02730(void)
void NetworkSystem_02730(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t NetworkSystem_02740(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c0a310;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x20,8,system_allocation_flags);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// 函数: void NetworkSystem_02820(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02820(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  for (lVar1 = (int64_t)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    NetworkSystem_82ab0(*(uint64_t *)(*(int64_t *)(*param_3 + 0x87b368) + lVar1 * 8),
                  *(int32_t *)param_3[1]);
  }
  return;
}
// 函数: void NetworkSystem_028c0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_028c0(int param_1,int param_2,int64_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  if (param_1 < param_2) {
    lVar2 = (int64_t)param_1 << 3;
    uVar3 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar5 = *param_3;
      lVar4 = lVar5 + 0x86e988;
      if (*(char *)(lVar5 + 0x87296c) == '\0') {
        lVar4 = *(int64_t *)(lVar5 + 0x872948);
      }
      lVar5 = *(int64_t *)(lVar2 + lVar4);
      if ((((*(int *)(lVar5 + 0x560) == -1) && (*(int *)(lVar5 + 0x570) == 1)) &&
          (*(int *)(lVar5 + 0x568) == 1)) &&
         ((*(int *)(lVar5 + 0x720) == 0 && (cVar1 = Function_b1460993(lVar5), cVar1 == '\0')))) {
        NetworkSystem_20c10(lVar5 + 0x4d8,*(uint64_t *)(lVar5 + 0x6e0));
      }
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void NetworkSystem_028cd(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_028cd(int param_1,int param_2,int64_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar2 = (int64_t)param_1 << 3;
  uVar3 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar5 = *param_3;
    lVar4 = lVar5 + 0x86e988;
    if (*(char *)(lVar5 + 0x87296c) == '\0') {
      lVar4 = *(int64_t *)(lVar5 + 0x872948);
    }
    lVar5 = *(int64_t *)(lVar2 + lVar4);
    if ((((*(int *)(lVar5 + 0x560) == -1) && (*(int *)(lVar5 + 0x570) == 1)) &&
        (*(int *)(lVar5 + 0x568) == 1)) && (*(int *)(lVar5 + 0x720) == 0)) {
      cVar1 = Function_b1460993(lVar5);
      if (cVar1 == '\0') {
        NetworkSystem_20c10(lVar5 + 0x4d8,*(uint64_t *)(lVar5 + 0x6e0));
      }
    }
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}
// 函数: void NetworkSystem_02964(void)
void NetworkSystem_02964(void)
{
  return;
}
// 函数: void NetworkSystem_029b0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_029b0(int param_1,int param_2,int64_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  if (param_1 < param_2) {
    lVar3 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar6 = *param_3;
      lVar2 = lVar6 + 0x86e988;
      if (*(char *)(lVar6 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar6 + 0x872948);
      }
      lVar6 = *(int64_t *)(lVar3 + lVar2);
      puVar5 = (int32_t *)param_3[1];
      if ((((*(int *)(lVar6 + 0x560) == -1) && (*(int *)(lVar6 + 0x570) == 1)) &&
          (*(int *)(lVar6 + 0x568) == 1)) &&
         ((*(int *)(lVar6 + 0x720) == 0 && (cVar1 = Function_b1460993(lVar6), cVar1 == '\0')))) {
        NetworkSystem_d0cd0(*(uint64_t *)(lVar6 + 0x6e0),*puVar5);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
// 函数: void NetworkSystem_029bd(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_029bd(int param_1,int param_2,int64_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  lVar3 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar6 = *param_3;
    lVar2 = lVar6 + 0x86e988;
    if (*(char *)(lVar6 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar6 + 0x872948);
    }
    lVar6 = *(int64_t *)(lVar3 + lVar2);
    puVar5 = (int32_t *)param_3[1];
    if ((((*(int *)(lVar6 + 0x560) == -1) && (*(int *)(lVar6 + 0x570) == 1)) &&
        (*(int *)(lVar6 + 0x568) == 1)) && (*(int *)(lVar6 + 0x720) == 0)) {
      cVar1 = Function_b1460993(lVar6);
      if (cVar1 == '\0') {
        NetworkSystem_d0cd0(*(uint64_t *)(lVar6 + 0x6e0),*puVar5);
      }
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}
// 函数: void NetworkSystem_02a5f(void)
void NetworkSystem_02a5f(void)
{
  return;
}
// 函数: void NetworkSystem_02aa0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02aa0(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  if (param_1 < param_2) {
    lVar3 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x872948);
      }
      lVar2 = (int64_t)*(int *)(*(int64_t *)(lVar3 + lVar2) + 0x10);
      lVar5 = lVar1 + 0x52eda0 + lVar2 * 0x200;
      if (*(char *)(lVar5 + 0x199) != '\0') {
        NetworkSystem_93ce0(lVar1 + 0x62ed98 + lVar2 * 0x240,*(int32_t *)param_3[1],lVar1,lVar5,
                      lVar1 + 0x52eda0,lVar1 + 0x62ed98,0);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
// 函数: void NetworkSystem_02aad(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02aad(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lStack0000000000000028;
  uint64_t local_buffer_30;
  lVar3 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x872948);
    }
    lVar2 = (int64_t)*(int *)(*(int64_t *)(lVar3 + lVar2) + 0x10);
    lVar5 = lVar1 + 0x52eda0 + lVar2 * 0x200;
    if (*(char *)(lVar5 + 0x199) != '\0') {
      lStack0000000000000028 = lVar1 + 0x62ed98;
      local_buffer_30 = 0;
      NetworkSystem_93ce0(lVar1 + 0x62ed98 + lVar2 * 0x240,*(int32_t *)param_3[1],lVar1,lVar5,
                    lVar1 + 0x52eda0);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}
// 函数: void NetworkSystem_02b6b(void)
void NetworkSystem_02b6b(void)
{
  return;
}
// 函数: void NetworkSystem_02bb0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02bb0(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (param_1 < param_2) {
    lVar3 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x872948);
      }
      lVar2 = (int64_t)*(int *)(*(int64_t *)(lVar3 + lVar2) + 0x10);
      if (*(char *)(lVar1 + lVar2 * 0x200 + 0x52ef39) != '\0') {
        NetworkSystem_90fc0(lVar1 + 0x62ed98 + lVar2 * 0x240,lVar1,*(int32_t *)param_3[1]);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
// 函数: void NetworkSystem_02bbd(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02bbd(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  lVar3 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x872948);
    }
    lVar2 = (int64_t)*(int *)(*(int64_t *)(lVar3 + lVar2) + 0x10);
    if (*(char *)(lVar1 + lVar2 * 0x200 + 0x52ef39) != '\0') {
      NetworkSystem_90fc0(lVar1 + 0x62ed98 + lVar2 * 0x240,lVar1,*(int32_t *)param_3[1]);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}
// 函数: void NetworkSystem_02c4b(void)
void NetworkSystem_02c4b(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_02cf0(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02cf0(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  if (param_1 < param_2) {
    lVar5 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x872948);
      }
      lVar1 = *(int64_t *)(lVar5 + lVar2);
      lVar2 = *(int64_t *)(lVar1 + 0x130);
      if (((*(int64_t *)(lVar2 + 0x590) != 0) && (*(int *)(lVar2 + 0x568) == 1)) &&
         ((*(uint *)(lVar2 + 0x56c) & 0x80018) != 0 && (*(uint *)(lVar2 + 0x56c) & 0x4800) == 0x4800
         )) {
        NetworkSystem_9b410(lVar1 + 0x28);
        lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x130) + 0x8f8) + 0x9e8);
        iVar3 = 0;
        if (lVar2 != 0) {
          iVar3 = *(int *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                          *(int64_t *)(lVar2 + 0xd0));
        }
        NetworkSystem_b1960(lVar1 + 0x138,(int64_t)iVar3 * 0x170 + render_system_config);
        if ((*(int *)(lVar1 + 0x1fc) == 0) && (*(int *)(lVar1 + 0x2a4) == -1)) {
          *(uint64_t *)(lVar1 + 0x280) = 0;
          *(uint64_t *)(lVar1 + 0x290) = 0;
        }
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_02cfe(int param_1,int param_2,int64_t *param_3)
void NetworkSystem_02cfe(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x872948);
    }
    lVar1 = *(int64_t *)(lVar5 + lVar2);
    lVar2 = *(int64_t *)(lVar1 + 0x130);
    if (((*(int64_t *)(lVar2 + 0x590) != 0) && (*(int *)(lVar2 + 0x568) == 1)) &&
       ((*(uint *)(lVar2 + 0x56c) & 0x80018) != 0 && (*(uint *)(lVar2 + 0x56c) & 0x4800) == 0x4800))
    {
      NetworkSystem_9b410(lVar1 + 0x28);
      lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x130) + 0x8f8) + 0x9e8);
      iVar3 = 0;
      if (lVar2 != 0) {
        iVar3 = *(int *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar2 + 0xd0)
                        );
      }
      NetworkSystem_b1960(lVar1 + 0x138,(int64_t)iVar3 * 0x170 + render_system_config);
      if ((*(int *)(lVar1 + 0x1fc) == 0) && (*(int *)(lVar1 + 0x2a4) == -1)) {
        *(uint64_t *)(lVar1 + 0x280) = 0;
        *(uint64_t *)(lVar1 + 0x290) = 0;
      }
    }
    lVar5 = lVar5 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}
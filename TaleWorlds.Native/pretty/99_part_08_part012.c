#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_08_part012.c - 6 个函数
// 函数: void function_4eb500(int64_t *param_1,int param_2,int param_3)
void function_4eb500(int64_t *param_1,int param_2,int param_3)
{
  int32_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint *puVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  int aiStackX_10 [2];
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_4c;
  if (param_2 < param_3) {
    lVar11 = (int64_t)param_2 << 3;
    uVar10 = (uint64_t)(uint)(param_3 - param_2);
    do {
      lVar3 = *param_1;
      lVar7 = lVar3 + 0x86e988;
      if (*(char *)(lVar3 + 0x87296c) == '\0') {
        lVar7 = *(int64_t *)(lVar3 + 0x872948);
      }
      lVar7 = *(int64_t *)(lVar11 + lVar7);
      aiStackX_10[0] = 0;
      if ((*(int64_t *)(lVar7 + 0x590) != 0) && (*(int *)(lVar7 + 0x568) == 1)) {
        uVar4 = *(uint *)(lVar7 + 0x56c);
        if ((uVar4 & 0x80018) != 0) {
          function_59ad70(lVar7 + 0x28,*(int32_t *)param_1[1],aiStackX_10,lVar3 + 0x87a948);
          uVar4 = *(uint *)(lVar7 + 0x56c);
        }
        iVar9 = aiStackX_10[0];
        if ((((uVar4 >> 0xb & 1) != 0) &&
            (lVar3 = *(int64_t *)(lVar7 + 0x728), *(char *)(lVar3 + 0x5b8) != '\0')) &&
           (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar3 + 0x5c8) * 8) -
                         *(int64_t *)(lVar3 + 0x5c0)) * 1e-05)) {
          *(int8_t *)(lVar3 + 0x5b8) = 0;
          SystemFunction_000180588750(*(int64_t *)(lVar7 + 0x8e8) + 8);
          SystemFunction_000180588750(*(int64_t *)(lVar7 + 0x8e8) + 8);
          *(uint *)(lVar7 + 0x4c8) = *(uint *)(lVar7 + 0x4c8) | 0x7c00;
        }
        if (iVar9 != 0) {
          lVar3 = *param_1;
          puVar8 = (uint *)(lVar3 + 0x87a9f0);
          LOCK();
          uVar4 = *puVar8;
          *puVar8 = *puVar8 + 1;
          UNLOCK();
          uVar5 = uVar4 >> 4;
          if (*(int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8) == 0) {
            lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x100,8);
            plVar2 = (int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8);
            LOCK();
            bVar12 = *plVar2 == 0;
            if (bVar12) {
              *plVar2 = lVar6;
            }
            UNLOCK();
            if ((!bVar12) && (lVar6 != 0)) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
          }
          local_var_58 = (int32_t)lVar7;
          local_var_54 = (int32_t)((uint64_t)lVar7 >> 0x20);
          puVar1 = (int32_t *)
                   (*(int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8) +
                   (uint64_t)(uVar4 + uVar5 * -0x10) * 0x10);
          *puVar1 = local_var_58;
          puVar1[1] = local_var_54;
          puVar1[2] = iVar9;
          puVar1[3] = local_var_4c;
        }
      }
      if (*(char *)param_1[2] != '\0') {
        function_52d2f0(lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4eb512(int64_t *param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)
void function_4eb512(int64_t *param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)
{
  int32_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t in_RAX;
  int64_t lVar6;
  uint64_t unaff_RBX;
  int64_t lVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint *puVar8;
  int iVar9;
  uint64_t unaff_R12;
  uint64_t uVar10;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t lVar11;
  bool bVar12;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  int iStack0000000000000088;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  lVar11 = (int64_t)param_2 << 3;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar10 = (uint64_t)(uint)(param_3 - param_2);
  *(uint64_t *)(in_RAX + -0x10) = unaff_RDI;
  do {
    lVar3 = *param_1;
    lVar7 = lVar3 + 0x86e988;
    if (*(char *)(lVar3 + 0x87296c) == '\0') {
      lVar7 = *(int64_t *)(lVar3 + 0x872948);
    }
    lVar7 = *(int64_t *)(lVar11 + lVar7);
    iStack0000000000000088 = 0;
    if ((*(int64_t *)(lVar7 + 0x590) != 0) && (*(int *)(lVar7 + 0x568) == 1)) {
      uVar4 = *(uint *)(lVar7 + 0x56c);
      if ((uVar4 & 0x80018) != 0) {
        function_59ad70(lVar7 + 0x28,*(int32_t *)param_1[1],&local_buffer_00000088,lVar3 + 0x87a948);
        uVar4 = *(uint *)(lVar7 + 0x56c);
      }
      iVar9 = iStack0000000000000088;
      if ((((uVar4 >> 0xb & 1) != 0) &&
          (lVar3 = *(int64_t *)(lVar7 + 0x728), *(char *)(lVar3 + 0x5b8) != '\0')) &&
         (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar3 + 0x5c8) * 8) -
                       *(int64_t *)(lVar3 + 0x5c0)) * 1e-05)) {
        *(int8_t *)(lVar3 + 0x5b8) = 0;
        SystemFunction_000180588750(*(int64_t *)(lVar7 + 0x8e8) + 8);
        SystemFunction_000180588750(*(int64_t *)(lVar7 + 0x8e8) + 8);
        *(uint *)(lVar7 + 0x4c8) = *(uint *)(lVar7 + 0x4c8) | 0x7c00;
      }
      if (iVar9 != 0) {
        lVar3 = *param_1;
        puVar8 = (uint *)(lVar3 + 0x87a9f0);
        LOCK();
        uVar4 = *puVar8;
        *puVar8 = *puVar8 + 1;
        UNLOCK();
        uVar5 = uVar4 >> 4;
        if (*(int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8) == 0) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x100,8);
          plVar2 = (int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8);
          LOCK();
          bVar12 = *plVar2 == 0;
          if (bVar12) {
            *plVar2 = lVar6;
          }
          UNLOCK();
          if ((!bVar12) && (lVar6 != 0)) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
        }
        stack_special_x_20 = (int32_t)lVar7;
        stack_special_x_24 = (int32_t)((uint64_t)lVar7 >> 0x20);
        puVar1 = (int32_t *)
                 (*(int64_t *)(lVar3 + 0x87a9f8 + (uint64_t)uVar5 * 8) +
                 (uint64_t)(uVar4 + uVar5 * -0x10) * 0x10);
        *puVar1 = stack_special_x_20;
        puVar1[1] = stack_special_x_24;
        puVar1[2] = iVar9;
        puVar1[3] = param_5._4_4_;
      }
    }
    if (*(char *)param_1[2] != '\0') {
      function_52d2f0(lVar7);
    }
    lVar11 = lVar11 + 8;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      return;
    }
  } while( true );
}
// 函数: void function_4eb71d(void)
void function_4eb71d(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4eb720(int64_t *param_1,uint param_2,int param_3,uint64_t param_4)
void function_4eb720(int64_t *param_1,uint param_2,int param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint *puVar6;
  uint uVar7;
  uint64_t uVar8;
  bool bVar9;
  uint64_t uVar10;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t local_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  uint64_t local_var_4c;
  uint64_t local_var_44;
  int32_t local_var_3c;
  int16_t local_var_38;
  int32_t local_var_34;
  int8_t local_var_30;
  if ((int)param_2 < param_3) {
    uVar10 = 0xfffffffffffffffe;
    uVar8 = (uint64_t)param_2;
    do {
      puVar5 = (uint64_t *)
               (*(int64_t *)(*param_1 + 0x87a9f8 + (uVar8 >> 4) * 8) +
               (uint64_t)(uint)((int)uVar8 + (int)(uVar8 >> 4) * -0x10) * 0x10);
      lStack_78 = 0;
      lStack_70 = 0;
      local_var_68 = 0;
      local_var_60 = 3;
      local_var_58 = 0;
      local_var_50 = 0xffffffff;
      local_var_4c = 0;
      local_var_44 = 0xffffffffffffffff;
      local_var_3c = 0xffffffff;
      local_var_38 = 0;
      local_var_34 = 0xffffffff;
      local_var_30 = 0;
      function_50af60(*puVar5,*(int32_t *)(puVar5 + 1),&lStack_78,param_4,uVar10);
      lVar2 = lStack_70 - lStack_78 >> 0x3f;
      if ((lStack_70 - lStack_78) / 0xcb0 + lVar2 != lVar2) {
        lVar2 = *param_1;
        puVar6 = (uint *)(lVar2 + 0x87ae70);
        LOCK();
        uVar7 = *puVar6;
        *puVar6 = *puVar6 + 1;
        UNLOCK();
        uVar3 = uVar7 >> 4;
        if (*(int64_t *)(lVar2 + 0x87ae78 + (uint64_t)uVar3 * 8) == 0) {
          lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x500,8);
          plVar1 = (int64_t *)(lVar2 + 0x87ae78 + (uint64_t)uVar3 * 8);
          LOCK();
          bVar9 = *plVar1 == 0;
          if (bVar9) {
            *plVar1 = lVar4;
          }
          UNLOCK();
          if ((!bVar9) && (lVar4 != 0)) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
        }
        function_4ffcd0((uint64_t)(uVar7 + uVar3 * -0x10) * 0x50 +
                      *(int64_t *)(lVar2 + 0x87ae78 + (uint64_t)uVar3 * 8),&lStack_78);
      }
      if (lStack_78 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
    } while ((int)uVar7 < param_3);
  }
  return;
}
// 函数: void function_4eb8d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,float *param_4)
void function_4eb8d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,float *param_4)
{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t local_var_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t local_var_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t local_var_7c;
  uint64_t local_var_78;
  int32_t local_var_70;
  int32_t local_var_6c;
  local_var_78 = *param_3;
  fStack_88 = *param_4;
  fStack_84 = param_4[1];
  fStack_80 = param_4[2];
  fVar1 = fStack_88 * fStack_88 + fStack_84 * fStack_84 + fStack_80 * fStack_80;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_88 = fStack_88 * fVar1;
  fStack_84 = fVar1 * fStack_84;
  fStack_80 = fStack_80 * fVar1;
  if ((0.99 < fStack_84) || (fStack_84 < -0.99)) {
    fStack_a8 = 0.0;
    fStack_a4 = -fStack_80;
    fStack_a0 = fStack_84;
  }
  else {
    fStack_a4 = 0.0;
    fStack_a0 = -fStack_88;
    fStack_a8 = fStack_80;
  }
  local_var_9c = 0;
  local_var_7c = 0;
  fVar1 = fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_a0 * fStack_a0;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_a0 = fStack_a0 * fVar1;
  fStack_a4 = fStack_a4 * fVar1;
  fStack_a8 = fStack_a8 * fVar1;
  fStack_98 = fStack_a0 * fStack_84 - fStack_80 * fStack_a4;
  fStack_94 = fStack_a8 * fStack_80 - fStack_a0 * fStack_88;
  fStack_90 = fStack_88 * fStack_a4 - fStack_a8 * fStack_84;
  local_var_8c = 0;
  fVar1 = fStack_98 * fStack_98 + fStack_94 * fStack_94 + fStack_90 * fStack_90;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_94 = fStack_94 * fVar1;
  fStack_98 = fStack_98 * fVar1;
  fStack_90 = fStack_90 * fVar1;
  _local_var_70 = CONCAT44(0x3f800000,(int)param_3[1]);
  function_4ebb80(0x3f800000,fStack_90,&fStack_a8,1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_4ebb80(int64_t param_1,int32_t param_2,int64_t param_3,char param_4)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t **applStack_b8 [2];
  int iStack_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  float fStack_98;
  float fStack_94;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  uint64_t local_var_60;
  local_var_60 = 0xfffffffffffffffe;
  lVar9 = 0;
  function_0c1750(param_1,&plStack_c8,param_2);
  if (plStack_c8 == (int64_t *)0x0) {
    SystemCore_Allocator(&processed_var_9528_ptr,param_2);
    uVar8 = 0;
  }
  else {
    if (((param_4 != '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) && (system_status_flag != 4)) {
      AdvancedProcessor_StateManager0(applStack_b8,param_3);
      iStack_a8 = (int)applStack_b8[0];
      local_var_a4 = (int32_t)((uint64_t)applStack_b8[0] >> 0x20);
      local_var_a0 = SUB84(applStack_b8[1],0);
      local_var_9c = (int32_t)((uint64_t)applStack_b8[1] >> 0x20);
      fStack_98 = *(float *)(param_3 + 0x30);
      fStack_94 = *(float *)(param_3 + 0x34);
      local_var_90 = *(uint64_t *)(param_3 + 0x38);
      iVar6 = _Mtx_lock(0x180c95528);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      cVar5 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
      fVar3 = fStack_94;
      fVar2 = fStack_98;
      fVar4 = (float)local_var_90;
      if ((((cVar5 != '\0') &&
           (cVar5 = SystemBufferProcessor(0x180c95578,0x10,&memory_allocator_3472_ptr), cVar5 != '\0')) &&
          ((cVar5 = SystemBufferProcessor(0x180c95578,param_2,&system_data_bca0), cVar5 != '\0' &&
           ((cVar5 = RenderingSystem_VertexBufferManager(0x180c95578,fVar2,&memory_allocator_3312_ptr), cVar5 != '\0' &&
            (cVar5 = RenderingSystem_VertexBufferManager(0x180c95578,fVar3,&memory_allocator_3312_ptr), cVar5 != '\0')))))) &&
         (cVar5 = RenderingSystem_VertexBufferManager(0x180c95578,fVar4,&memory_allocator_3328_ptr), cVar5 != '\0')) {
        function_5aed50(0x180c95578,&iStack_a8);
      }
      system_system_memory = system_system_memory & 0xffffffff00000000;
      iVar6 = (int)(system_system_memory - system_system_memory >> 3);
      lVar7 = system_system_memory;
      if (0 < iVar6) {
        do {
          lVar1 = *(int64_t *)(lVar7 + lVar9 * 8);
          if ((((lVar1 != 0) && (*(char *)(*(int64_t *)(lVar1 + 0x58f8) + 0x1c) != '\0')) &&
              (*(char *)(*(int64_t *)(lVar1 + 0x58f8) + 0x26) != '\0')) &&
             (fVar11 = fVar3 - *(float *)(lVar1 + 0x5904),
             fVar12 = fVar2 - *(float *)(lVar1 + 0x5900),
             fVar10 = fVar4 - *(float *)(lVar1 + 0x5908),
             fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 < 10000.0)) {
            function_5b5840(lVar1,0x180c95578);
            lVar7 = system_system_memory;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
      if (system_system_memory != 0) {
        SystemCore_DatabaseHandler(system_system_memory,0x180c95578);
      }
      system_system_memory = 0;
// WARNING: Subroutine does not return
      memset(system_system_memory,0,(int64_t)(system_system_memory >> 3));
    }
    uVar8 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
    applStack_b8[0] = &plStack_c0;
    plStack_c0 = plStack_c8;
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x28))();
    }
    function_2d2d90(uVar8,&plStack_c0,param_3);
    iVar6 = (int)plStack_c8[7];
    if (iVar6 != -1) {
      local_var_a4 = (int32_t)*(uint64_t *)(param_3 + 0x30);
      local_var_a0 = (int32_t)((uint64_t)*(uint64_t *)(param_3 + 0x30) >> 0x20);
      local_var_9c = (int32_t)*(uint64_t *)(param_3 + 0x38);
      fStack_98 = (float)((uint64_t)*(uint64_t *)(param_3 + 0x38) >> 0x20);
      fStack_94 = 1.4013e-45;
      local_var_90 = 0;
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_7c = 0x3f800000;
      local_var_78 = 0;
      iStack_a8 = iVar6;
      if (-1 < iVar6) {
        function_545140(&system_data_6110,&iStack_a8,0,0);
      }
    }
    uVar8 = 1;
  }
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  return uVar8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4ebef0(int64_t param_1,int32_t param_2,int64_t *param_3,int param_4,char param_5,
void function_4ebef0(int64_t param_1,int32_t param_2,int64_t *param_3,int param_4,char param_5,
                  char param_6)
{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t stack_array_1c8 [32];
  int64_t *plStack_1a8;
  int64_t *plStack_1a0;
  int64_t lStack_198;
  int64_t lStack_190;
  int iStack_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_150;
  int64_t *plStack_148;
  int64_t *plStack_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  uint64_t local_var_f8;
  int64_t *plStack_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint local_var_94;
  uint64_t local_var_90;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_90 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  lStack_198 = param_1;
  function_0c1750(param_1,&plStack_1a8,param_2);
  if (plStack_1a8 == (int64_t *)0x0) {
    SystemCore_Allocator(&processed_var_9528_ptr,param_2);
  }
  else {
    lVar14 = (int64_t)param_4 * 0xa60;
    lVar11 = lVar14 + param_1;
    lVar12 = *(int64_t *)(*(int64_t *)(lVar11 + 0x3778) + 0x8a8);
    puVar10 = (uint *)((int64_t)param_5 * 0x100 +
                      *(int64_t *)(*(int64_t *)(lVar11 + 0x36f8) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fStack_a0 = (float)puVar10[5];
    fStack_9c = (float)puVar10[6];
    fStack_98 = (float)puVar10[7];
    local_var_94 = puVar10[8];
    *puVar10 = 0;
    fVar19 = fStack_98 * *(float *)(lVar12 + 0x98) + *(float *)(lVar12 + 0xa8);
    fVar20 = fStack_a0 * *(float *)(lVar12 + 0x74) + fStack_9c * *(float *)(lVar12 + 0x84) +
             *(float *)(lVar12 + 0xa4);
    fVar18 = fStack_9c * *(float *)(lVar12 + 0x80) + fStack_a0 * *(float *)(lVar12 + 0x70) +
             *(float *)(lVar12 + 0xa0);
    local_var_b0 = CONCAT44(fVar20,fVar18);
    local_var_a8 = CONCAT44(0x7f7fffff,fVar19);
    lStack_190 = lVar14;
    if (((param_6 != '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) && (system_status_flag != 4)) {
      AdvancedProcessor_StateManager0(&local_var_128,param_3);
      local_var_118 = (int32_t)local_var_128;
      local_var_114 = local_var_128._4_4_;
      local_var_110 = local_var_120;
      local_var_10c = local_var_11c;
      local_var_108 = (int32_t)param_3[6];
      local_var_104 = *(int32_t *)((int64_t)param_3 + 0x34);
      local_var_100 = (int32_t)param_3[7];
      local_var_fc = *(int32_t *)((int64_t)param_3 + 0x3c);
      iVar7 = _Mtx_lock(0x180c95528);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      cVar6 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
      if ((((cVar6 != '\0') &&
           (cVar6 = SystemBufferProcessor(0x180c95578,0x11,&memory_allocator_3472_ptr), cVar6 != '\0')) &&
          ((cVar6 = SystemBufferProcessor(0x180c95578,param_2,&system_data_bca0), cVar6 != '\0' &&
           ((cVar6 = RenderingSystem_VertexBufferManager(0x180c95578,local_var_108,&memory_allocator_3360_ptr), cVar6 != '\0' &&
            (cVar6 = RenderingSystem_VertexBufferManager(0x180c95578,local_var_104,&memory_allocator_3360_ptr), cVar6 != '\0')))))) &&
         ((cVar6 = RenderingSystem_VertexBufferManager(0x180c95578,local_var_100,&memory_allocator_3376_ptr), cVar6 != '\0' &&
          ((cVar6 = function_5aed50(0x180c95578,&local_var_118), cVar6 != '\0' &&
           (cVar6 = SystemBufferProcessor(0x180c95578,param_4,&memory_allocator_3424_ptr), cVar6 != '\0')))))) {
        SystemBufferProcessor(0x180c95578,(int)param_5,&memory_allocator_3248_ptr);
      }
      system_system_memory = system_system_memory & 0xffffffff00000000;
      iVar7 = (int)(system_system_memory - system_system_memory >> 3);
      if (0 < iVar7) {
        lVar12 = 0;
        lVar11 = system_system_memory;
        do {
          lVar14 = *(int64_t *)(lVar11 + lVar12 * 8);
          if ((((lVar14 != 0) && (*(char *)(*(int64_t *)(lVar14 + 0x58f8) + 0x1c) != '\0')) &&
              (*(char *)(*(int64_t *)(lVar14 + 0x58f8) + 0x25) != '\0')) &&
             (fVar16 = fVar20 - *(float *)(lVar14 + 0x5904),
             fVar17 = fVar18 - *(float *)(lVar14 + 0x5900),
             fVar15 = fVar19 - *(float *)(lVar14 + 0x5908),
             fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 < 10000.0)) {
            function_5b5840(lVar14,0x180c95578);
            lVar11 = system_system_memory;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar7);
      }
      if (system_system_memory != 0) {
        SystemCore_DatabaseHandler(system_system_memory,0x180c95578);
      }
      system_system_memory = 0;
// WARNING: Subroutine does not return
      memset(system_system_memory,0,(int64_t)(system_system_memory >> 3));
    }
    uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
    plVar9 = (int64_t *)function_2ac390(uVar8);
    plStack_f0 = plVar9;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    local_var_128 = &plStack_1a0;
    plStack_1a0 = plStack_1a8;
    if (plStack_1a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a8 + 0x28))();
    }
    function_2adab0(plVar9,&plStack_1a0);
    lVar12 = param_3[1];
    plVar9[10] = *param_3;
    plVar9[0xb] = lVar12;
    lVar12 = param_3[3];
    plVar9[0xc] = param_3[2];
    plVar9[0xd] = lVar12;
    uVar2 = *(int32_t *)((int64_t)param_3 + 0x24);
    lVar12 = param_3[5];
    uVar3 = *(int32_t *)((int64_t)param_3 + 0x2c);
    *(int *)(plVar9 + 0xe) = (int)param_3[4];
    *(int32_t *)((int64_t)plVar9 + 0x74) = uVar2;
    *(int *)(plVar9 + 0xf) = (int)lVar12;
    *(int32_t *)((int64_t)plVar9 + 0x7c) = uVar3;
    uVar2 = *(int32_t *)((int64_t)param_3 + 0x34);
    lVar12 = param_3[7];
    uVar3 = *(int32_t *)((int64_t)param_3 + 0x3c);
    *(int *)(plVar9 + 0x10) = (int)param_3[6];
    *(int32_t *)((int64_t)plVar9 + 0x84) = uVar2;
    *(int *)(plVar9 + 0x11) = (int)lVar12;
    *(int32_t *)((int64_t)plVar9 + 0x8c) = uVar3;
    cVar6 = function_2b6000(plStack_1a8);
    if (cVar6 != '\0') {
      plStack_148 = (int64_t *)0x0;
      plStack_140 = (int64_t *)0x0;
      local_var_138 = 0;
      local_var_130 = 3;
      function_5ab6a0(&plStack_148,lVar11 + 0x30a0);
      function_2ae880(plVar9,&plStack_148);
      plVar5 = plStack_140;
      plVar4 = plStack_148;
      param_1 = lStack_198;
      lVar14 = lStack_190;
      for (plVar13 = plStack_148; lStack_198 = param_1, lStack_190 = lVar14, plVar13 != plVar5;
          plVar13 = plVar13 + 1) {
        if ((int64_t *)*plVar13 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar13 + 0x38))();
        }
        param_1 = lStack_198;
        lVar14 = lStack_190;
      }
      if (plVar4 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar4);
      }
    }
    lVar11 = *(int64_t *)(lVar11 + 0x3778);
    function_2fbf30(*(uint64_t *)(*(int64_t *)(lVar11 + 0x8a8) + 0x260),param_5,plVar9,param_3);
    RenderingSystem_544AC0(lVar11);
    iVar7 = (int)plStack_1a8[7];
    if (iVar7 != -1) {
      local_var_17c = (int32_t)local_var_b0;
      local_var_178 = (int32_t)((uint64_t)local_var_b0 >> 0x20);
      local_var_174 = (int32_t)local_var_a8;
      local_var_170 = (int32_t)((uint64_t)local_var_a8 >> 0x20);
      local_var_16c = 1;
      local_var_168 = 0;
      local_var_160 = 0;
      local_var_e8 = CONCAT44(local_var_17c,iVar7);
      local_var_e0 = CONCAT44(local_var_174,local_var_178);
      local_var_d8 = local_var_170;
      local_var_d4 = 1;
      local_var_d0 = 0;
      local_var_cc = 0;
      local_var_c8 = 0;
      local_var_c4 = 0;
      local_var_c0 = 0;
      local_var_bc = 0x3f800000;
      local_var_b8 = CONCAT44(local_var_150._4_4_,*(int32_t *)(lVar14 + 0x36e8 + param_1));
      iStack_180 = iVar7;
      if (-1 < iVar7) {
        function_545140(&system_data_6110,&local_var_e8,0,0);
      }
    }
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plStack_1a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
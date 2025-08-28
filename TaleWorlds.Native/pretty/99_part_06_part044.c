// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 99_part_06_part044.c - 11 个函数
// 函数: void function_3d1940(int64_t param_1,int64_t *param_2,uint64_t param_3,int8_t *param_4,
void function_3d1940(int64_t param_1,int64_t *param_2,uint64_t param_3,int8_t *param_4,
                  uint param_5)
{
  int64_t **pplVar1;
  uint uVar2;
  uint64_t uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  void *puVar15;
  uint64_t *puVar16;
  char cVar17;
  int8_t stack_array_218 [32];
  char acStack_1f8 [4];
  int iStack_1f4;
  int64_t *plStack_1e8;
  uint64_t local_var_1e0;
  int64_t **pplStack_1d8;
  int8_t local_var_1d0;
  int64_t *plStack_1c8;
  uint64_t local_var_1c0;
  int8_t *plocal_var_1b8;
  uint64_t local_var_1b0;
  int64_t alStack_1a8 [12];
  int8_t stack_array_148 [32];
  int8_t stack_array_128 [32];
  uint local_var_108;
  int32_t local_var_104;
  int iStack_100;
  int8_t stack_array_f8 [32];
  int64_t *plStack_d8;
  int8_t stack_array_98 [32];
  int8_t stack_array_78 [32];
  uint local_var_58;
  int32_t local_var_54;
  int iStack_50;
  uint64_t local_var_48;
  local_var_1b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_218;
  iStack_1f4 = (int)param_2[3];
  puVar16 = (uint64_t *)(param_2[4] + 0x368);
  local_var_1c0 = *(uint64_t *)(*param_2 + 0x15b8);
  plStack_1c8 = (int64_t *)CONCAT44(plStack_1c8._4_4_,param_5);
  puVar7 = *(uint64_t **)(param_2[4] + 0x378);
  puVar14 = puVar16;
  if (puVar7 == (uint64_t *)0x0) {
LAB_1803d19ff:
    puVar13 = puVar16;
  }
  else {
    do {
      if ((*(uint *)(puVar7 + 4) < param_5) ||
         ((*(uint *)(puVar7 + 4) <= param_5 && ((uint64_t)puVar7[5] < local_var_1c0)))) {
        bVar4 = true;
        puVar8 = (uint64_t *)*puVar7;
      }
      else {
        bVar4 = false;
        puVar8 = (uint64_t *)puVar7[1];
      }
      puVar13 = puVar7;
      if (bVar4) {
        puVar13 = puVar14;
      }
      puVar7 = puVar8;
      puVar14 = puVar13;
    } while (puVar8 != (uint64_t *)0x0);
    if (((puVar13 == puVar16) || (param_5 < *(uint *)(puVar13 + 4))) ||
       ((param_5 <= *(uint *)(puVar13 + 4) && (local_var_1c0 < (uint64_t)puVar13[5]))))
    goto LAB_1803d19ff;
  }
  acStack_1f8[0] = '\0';
  plocal_var_1b8 = param_4;
  if (puVar13 != puVar16) {
    pplStack_1d8 = (int64_t **)0x180c91dc8;
    local_var_1d0 = 1;
    AcquireSRWLockShared(0x180c91dc8);
    plStack_1e8 = (int64_t *)param_2[1];
    uVar3 = param_2[2];
    lVar11 = puVar13[7];
    plVar12 = *(int64_t **)
               (lVar11 + (((uVar3 & 0xffffffff) + (int64_t)plStack_1e8) %
                         (uint64_t)*(uint *)(puVar13 + 8)) * 8);
    if (plVar12 != (int64_t *)0x0) {
      local_var_1e0._4_2_ = (short)(uVar3 >> 0x20);
      do {
        if ((((int64_t *)*plVar12 == plStack_1e8) && ((int)plVar12[1] == (int)uVar3)) &&
           (*(short *)((int64_t)plVar12 + 0xc) == local_var_1e0._4_2_)) {
          lVar9 = puVar13[8];
          goto LAB_1803d1a92;
        }
        plVar12 = (int64_t *)plVar12[3];
      } while (plVar12 != (int64_t *)0x0);
    }
    lVar9 = puVar13[8];
    plVar12 = *(int64_t **)(lVar11 + lVar9 * 8);
LAB_1803d1a92:
    if (plVar12 == *(int64_t **)(lVar11 + lVar9 * 8)) {
      lVar11 = 0;
    }
    else {
      lVar11 = plVar12[2];
    }
    local_var_1e0 = uVar3;
    ReleaseSRWLockShared(0x180c91dc8);
    cVar17 = '\0';
    if (lVar11 != 0) goto LAB_1803d1b14;
  }
  pplStack_1d8 = (int64_t **)0x180c91dc8;
  local_var_1d0 = 0;
  AcquireSRWLockExclusive(0x180c91dc8);
  local_var_1d0 = 1;
  uVar10 = function_3d8cd0(puVar16,&plStack_1c8);
  plStack_1c8 = (int64_t *)param_2[1];
  local_var_1c0 = param_2[2];
  lVar11 = function_29a790(uVar10,&plStack_1c8,acStack_1f8);
  ReleaseSRWLockExclusive(0x180c91dc8);
  cVar17 = acStack_1f8[0];
LAB_1803d1b14:
  if (*(char *)(lVar11 + 0x81) == '\0') {
    if (cVar17 != '\0') {
      function_1eb9b0(stack_array_f8);
      uVar2 = *(uint *)(*param_2 + 0x1588);
      uVar10 = function_29a300(stack_array_f8,param_2);
      iStack_50 = (uVar2 >> 9 & 1) * 8 + 0x11;
      local_var_58 = param_5;
      plVar12 = (int64_t *)param_2[4];
      if (plVar12 != (int64_t *)0x0) {
        plStack_1e8 = plVar12;
        uVar10 = (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      plStack_1e8 = plStack_d8;
      if (plStack_d8 != (int64_t *)0x0) {
        lVar9 = *plStack_d8;
        plStack_d8 = plVar12;
        uVar10 = (**(code **)(lVar9 + 0x38))();
        plVar12 = plStack_d8;
      }
      plStack_d8 = plVar12;
      cVar5 = function_1d8920(uVar10,stack_array_f8);
      if ((cVar5 == '\0') && (system_data_2847 == '\0')) {
        puVar15 = &system_buffer_ptr;
        if (*(void **)(*param_2 + 0x18) != (void *)0x0) {
          puVar15 = *(void **)(*param_2 + 0x18);
        }
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_776_ptr,puVar15);
      }
      if ((iStack_1f4 == 2) || (*system_global_data_ptr != 0)) {
        pplVar1 = (int64_t **)(lVar11 + 0x30);
        pplStack_1d8 = pplVar1;
        iVar6 = _Mtx_lock(pplVar1);
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
        plStack_1c8 = alStack_1a8;
        function_09e8e0(alStack_1a8,stack_array_f8);
        CoreEngineDataTransformer(stack_array_148,stack_array_98);
        uVar10 = CoreEngineDataTransformer(stack_array_128,stack_array_78);
        local_var_108 = local_var_58;
        local_var_104 = local_var_54;
        iStack_100 = iStack_50;
        function_1c8b50(uVar10,lVar11,alStack_1a8);
        iVar6 = _Mtx_unlock(pplVar1);
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
      }
      else {
        uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
        plVar12 = (int64_t *)function_41bf60(uVar10,lVar11,stack_array_f8);
        plStack_1c8 = plVar12;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12);
        }
        uVar10 = system_context_ptr;
        plStack_1e8 = plVar12;
        if ((*(int *)(system_module_state + 0x620) == 0) &&
           (*(char *)((int64_t)system_global_data_ptr + 9) == '\0')) {
          pplStack_1d8 = &plStack_1e8;
          if (plVar12 != (int64_t *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12);
          }
          function_05e450(uVar10,&plStack_1e8);
        }
        else {
          pplStack_1d8 = &plStack_1e8;
          if (plVar12 != (int64_t *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12);
          }
          SystemCore_TimerManager(uVar10,&plStack_1e8);
        }
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
        }
      }
      function_1c92a0(stack_array_f8);
    }
    if (iStack_1f4 == 0) {
      *plocal_var_1b8 = 1;
      if (param_1 != 0) {
        *(int *)(param_1 + 0x124ec) = *(int *)(param_1 + 0x124ec) + 1;
      }
    }
    else if (iStack_1f4 == 1) {
      if (param_1 != 0) {
        *(int *)(param_1 + 0x124ec) = *(int *)(param_1 + 0x124ec) + 1;
      }
    }
    else if ((iStack_1f4 == 2) && (cVar17 == '\0')) {
      function_1d7510(system_global_data_ptr);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_218);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d1f30(int64_t param_1,int8_t param_2)
void function_3d1f30(int64_t param_1,int8_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int8_t stack_array_a8 [32];
  int64_t *plStack_88;
  uint64_t local_var_80;
  int64_t lStack_78;
  uint64_t local_var_38;
  local_var_80 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  plStack_88 = (int64_t *)(param_1 + 0x148);
  *plStack_88 = 0;
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(int32_t *)(param_1 + 0x160) = 3;
  lVar3 = 0x10;
  lStack_78 = param_1;
  do {
    SystemFunction_000180074f10();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(uint64_t *)(param_1 + 0x4e0) = 0;
  *(uint64_t *)(param_1 + 0x4d8) = 0;
  *(uint64_t *)(param_1 + 0x4c0) = 0;
  *(uint64_t *)(param_1 + 0x4c8) = 0;
  *(uint64_t *)(param_1 + 0x4e8) = 0;
  *(int32_t *)(param_1 + 0x4f0) = 0x461c4000;
  *(int32_t *)(param_1 + 0x4f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x4f8) = 0x41a00000;
  *(uint64_t *)(param_1 + 0x4d0) = 0;
  lVar3 = param_1 + 0x578;
  *(uint64_t *)(param_1 + 0x590) = 0;
  *(int32_t *)(param_1 + 0x5a0) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x580) = lVar3;
  *(uint64_t *)(param_1 + 0x588) = 0;
  *(int8_t *)(param_1 + 0x590) = 0;
  *(uint64_t *)(param_1 + 0x598) = 0;
  lVar3 = param_1 + 0x5a8;
  *(uint64_t *)(param_1 + 0x5c0) = 0;
  *(int32_t *)(param_1 + 0x5d0) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x5b0) = lVar3;
  *(uint64_t *)(param_1 + 0x5b8) = 0;
  *(int8_t *)(param_1 + 0x5c0) = 0;
  *(uint64_t *)(param_1 + 0x5c8) = 0;
  plVar1 = (int64_t *)(param_1 + 0x5e8);
  *plVar1 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x600) = 0;
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  plVar2 = (int64_t *)(param_1 + 0x608);
  *plVar2 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x618) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x620) = 0;
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x618) = 0;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 0x500) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0x508) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0x510) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0x518) = 0;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x520) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x528) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x530) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x538) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  plStack_88 = plVar2;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(uint64_t *)(param_1 + 0x5d8) = 0;
  *(int8_t *)(param_1 + 0x5e0) = param_2;
  *(int8_t *)(param_1 + 0x561) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
// WARNING: Subroutine does not return
  memset(param_1 + 0x180,0,0x140);
}
// 函数: void function_3d22d0(int64_t param_1)
void function_3d22d0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  function_0ed380(param_1 + 0x4c0);
  *(uint64_t *)(param_1 + 0x608) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x610) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x620) = 0;
  *(uint64_t *)(param_1 + 0x608) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x5e8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x5f0) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x600) = 0;
  *(uint64_t *)(param_1 + 0x5e8) = &system_state_ptr;
  UtilitiesSystem_Processor();
  UtilitiesSystem_Processor();
  function_0ed380(param_1 + 0x4c0);
  DataTransformer0();
  if (*(int64_t **)(param_1 + 0x140) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x140) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xb8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x38))();
  }
  return;
}
// 函数: void function_3d2450(int64_t param_1,int64_t param_2,int64_t param_3)
void function_3d2450(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int iVar5;
  int64_t lVar6;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x78)) {
    lVar6 = 0;
    puVar4 = (int32_t *)(param_1 + 0x180);
    lVar3 = (int64_t)*(int *)(*(int64_t *)(param_3 + 0x68) + 0x3054);
    do {
      if ((((*(char *)(*(int64_t *)
                        (*(int64_t *)
                          (*(int64_t *)(*(int64_t *)(param_3 + 0x68) + 0x60b20) + lVar6) + 8 +
                        lVar3 * 8) + 0x380) == '\0') ||
           (lVar1 = *(int64_t *)(param_3 + 0x80 + lVar6), *(char *)(lVar1 + 0x152) == '\0')) ||
          (*(char *)(lVar1 + 0x150) == '\x01')) ||
         ((*(uint *)(param_2 + 0x860 + lVar3 * 4) >> ((byte)iVar5 & 0x1f) & 1) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *puVar4 = uVar2;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_3 + 0x78));
  }
  return;
}
// 函数: void function_3d246b(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4)
void function_3d246b(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  int64_t in_R10;
  int64_t in_R11;
  puVar4 = (int32_t *)(param_1 + 0x180);
  iVar1 = *(int *)(in_RAX + 0x3054);
  do {
    if ((((*(char *)(*(int64_t *)
                      (*(int64_t *)(*(int64_t *)(*(int64_t *)(in_R11 + 0x68) + 0x60b20) + in_R10)
                       + 8 + (int64_t)iVar1 * 8) + 0x380) == '\0') ||
         (lVar2 = *(int64_t *)(in_R11 + 0x80 + in_R10), *(char *)(lVar2 + 0x152) == '\0')) ||
        (*(char *)(lVar2 + 0x150) == '\x01')) ||
       ((*(uint *)(param_2 + 0x860 + (int64_t)iVar1 * 4) >> ((byte)param_4 & 0x1f) & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *puVar4 = uVar3;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
    in_R10 = in_R10 + 8;
  } while (param_4 < *(int *)(in_R11 + 0x78));
  return;
}
// 函数: void function_3d24e8(void)
void function_3d24e8(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d24f0(int64_t param_1,uint64_t param_2)
void function_3d24f0(int64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int8_t stack_array_2c8 [48];
  void *plocal_var_298;
  int32_t *plocal_var_290;
  int32_t local_var_288;
  uint64_t local_var_280;
  int8_t stack_array_258 [8];
  int64_t lStack_250;
  uint local_var_248;
  void *plocal_var_228;
  int64_t lStack_220;
  int32_t local_var_210;
  uint64_t local_var_1e0;
  uint64_t local_var_1d0;
  uint64_t local_var_48;
  local_var_1d0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2c8;
  local_var_1e0 = param_2;
  CoreEngineDataTransformer(stack_array_258,*(uint64_t *)(param_1 + 0x168));
  lVar2 = function_3d0880(param_1,&plocal_var_228,*(uint64_t *)(param_1 + 0x170));
  if (0 < *(int *)(lVar2 + 0x10)) {
    CoreEngineDataBufferProcessor(stack_array_258,local_var_248 + *(int *)(lVar2 + 0x10));
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_248 + lStack_250,*(uint64_t *)(lVar2 + 8),
           (int64_t)(*(int *)(lVar2 + 0x10) + 1));
  }
  plocal_var_228 = &system_data_buffer_ptr;
  if (lStack_220 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_220 = 0;
  local_var_210 = 0;
  plocal_var_228 = &system_state_ptr;
  uVar3 = function_0bfec0();
  plocal_var_298 = &system_data_buffer_ptr;
  local_var_280 = 0;
  plocal_var_290 = (int32_t *)0x0;
  local_var_288 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_290 = puVar4;
  uVar1 = CoreEngineSystemCleanup(puVar4);
  local_var_280 = CONCAT44(local_var_280._4_4_,uVar1);
  *puVar4 = 0x5f657375;
  puVar4[1] = 0x616e7964;
  puVar4[2] = 0x5f63696d;
  puVar4[3] = 0x676e6973;
  puVar4[4] = 0x705f656c;
  puVar4[5] = 0x5f737361;
  puVar4[6] = 0x72726574;
  puVar4[7] = 0x6e6961;
  local_var_288 = 0x1f;
  SystemCore_LoggingSystem0(uVar3,&plocal_var_298,1);
  plocal_var_298 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d3f10(int64_t param_1)
void function_3d3f10(int64_t param_1)
{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int8_t stack_array_1b8 [56];
  void *plocal_var_180;
  int64_t lStack_178;
  int32_t local_var_168;
  int8_t stack_array_158 [8];
  int64_t lStack_150;
  uint local_var_148;
  uint64_t local_var_138;
  void *plocal_var_130;
  int32_t *plocal_var_128;
  int32_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_38;
  local_var_138 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  CoreEngineDataTransformer(stack_array_158,*(uint64_t *)(param_1 + 0x168));
  lVar2 = function_3d0880(param_1,&plocal_var_180,*(uint64_t *)(param_1 + 0x170));
  if (0 < *(int *)(lVar2 + 0x10)) {
    CoreEngineDataBufferProcessor(stack_array_158,local_var_148 + *(int *)(lVar2 + 0x10));
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_148 + lStack_150,*(uint64_t *)(lVar2 + 8),
           (int64_t)(*(int *)(lVar2 + 0x10) + 1));
  }
  plocal_var_180 = &system_data_buffer_ptr;
  if (lStack_178 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_178 = 0;
  local_var_168 = 0;
  plocal_var_180 = &system_state_ptr;
  uVar3 = function_0bfec0();
  plocal_var_130 = &system_data_buffer_ptr;
  local_var_118 = 0;
  plocal_var_128 = (int32_t *)0x0;
  local_var_120 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_128 = puVar4;
  uVar1 = CoreEngineSystemCleanup(puVar4);
  local_var_118 = CONCAT44(local_var_118._4_4_,uVar1);
  *puVar4 = 0x656b6162;
  puVar4[1] = 0x7265745f;
  puVar4[2] = 0x6e696172;
  puVar4[3] = 0x6c6f635f;
  *(int16_t *)(puVar4 + 4) = 0x726f;
  *(int8_t *)((int64_t)puVar4 + 0x12) = 0;
  local_var_120 = 0x12;
  SystemCore_LoggingSystem0(uVar3,&plocal_var_130,1);
  plocal_var_130 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d5410(int *param_1,int64_t *param_2,uint64_t param_3,int param_4)
void function_3d5410(int *param_1,int64_t *param_2,uint64_t param_3,int param_4)
{
  char cVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char *pcVar5;
  int8_t stack_array_118 [32];
  int iStack_f8;
  int iStack_f4;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  int iStack_e0;
  int iStack_dc;
  uint64_t local_var_d8;
  int64_t lStack_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int iStack_28;
  int8_t local_var_24;
  int iStack_20;
  uint64_t local_var_18;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  function_1eb9b0(&lStack_c8);
  uVar2 = *(uint *)(*param_2 + 0x1588);
  function_29a300(&lStack_c8,param_2);
  iStack_20 = (uVar2 >> 9 & 1) * 8 + 0x11;
  pcVar5 = "";
  if (*(char **)(lStack_c8 + 0x18) != (char *)0x0) {
    pcVar5 = *(char **)(lStack_c8 + 0x18);
  }
  iStack_f8 = 0x1505;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    iStack_f8 = iStack_f8 * 0x21 + (int)cVar1;
    cVar1 = *pcVar5;
  }
  local_var_f0 = local_var_c0;
  uVar3 = local_var_f0;
  local_var_e8 = local_var_b8;
  uVar4 = local_var_e8;
  iStack_e0 = CONCAT31(iStack_e0._1_3_,local_var_24);
  local_var_f0._0_4_ = (int)local_var_c0;
  local_var_f0._4_4_ = (int)((uint64_t)local_var_c0 >> 0x20);
  *param_1 = iStack_f8;
  param_1[1] = iStack_f4;
  param_1[2] = (int)local_var_f0;
  param_1[3] = local_var_f0._4_4_;
  local_var_e8._0_4_ = (int)local_var_b8;
  local_var_e8._4_4_ = (int)((uint64_t)local_var_b8 >> 0x20);
  param_1[4] = (int)local_var_e8;
  param_1[5] = local_var_e8._4_4_;
  param_1[6] = iStack_e0;
  param_1[7] = param_4;
  local_var_f0 = uVar3;
  local_var_e8 = uVar4;
  iStack_dc = param_4;
  iStack_28 = param_4;
  function_1c92a0(&lStack_c8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d5530(int64_t *param_1)
void function_3d5530(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t stack_special_x_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  iVar6 = _Mtx_lock(0x180c91f70);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lVar1 = param_1[4];
  iVar6 = (int)param_1[5];
  if (((*(int64_t *)(lVar1 + 0x68) == 0) ||
      (*(char *)(*(int64_t *)(lVar1 + 0x68) + 0x2966) == '\0')) &&
     (param_1[1] - *param_1 >> 3 != 0)) {
    if (iVar6 == 3) {
      iVar6 = 0;
    }
    else if (iVar6 == 5) {
      iVar6 = 1;
    }
    else if (iVar6 == 7) {
      iVar6 = 2;
    }
    else {
      iVar6 = (int)stack_special_x_8;
    }
    plVar2 = *(int64_t **)*param_1;
    if (*(int *)((int64_t)plVar2 + 0x324) == 1) {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      lVar7 = *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x1d8);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else if (system_main_module_state != 0) {
        *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x340) =
             (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      SystemCore_MemoryManager(uVar3,0,lVar7);
      lVar7 = system_message_buffer;
      *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar7 + 0x1cd8),1);
      plStackX_18 = &stack_special_x_8;
      stack_special_x_8 = 0;
      plStackX_10 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
      function_0e44b0();
      plVar5 = plStackX_20;
      lVar7 = (int64_t)iVar6;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
      }
      plVar4 = *(int64_t **)(lVar1 + 0x120 + lVar7 * 8);
      *(int64_t **)(lVar1 + 0x120 + lVar7 * 8) = plVar5;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      plStackX_18 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
      function_2435e0();
      SystemCore_NetworkHandler(plVar2);
      LOCK();
      *(int32_t *)(plVar2 + 0x70) = 0;
      UNLOCK();
      plVar2 = *(int64_t **)(lVar1 + 0x138 + lVar7 * 8);
      *(uint64_t *)(lVar1 + 0x138 + lVar7 * 8) = 0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
    }
  }
  DataTransformer0(param_1);
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
code * function_3d5780(int64_t param_1)
{
  uint uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  code *pcVar4;
  code *apcStack_30 [2];
  code *pcStack_20;
  void *plocal_var_18;
  plVar2 = *(int64_t **)(param_1 + 0x9650);
  if ((*(int *)(param_1 + 0x124ec) == 0) && (*(int *)(param_1 + 0x124e8) == 0)) {
    puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int32_t *)(puVar3 + 3) = 3;
    if ((*(int64_t *)(param_1 + 0x96b8) - *(int64_t *)(param_1 + 0x96b0) & 0xfffffffffffffff8U) ==
        8) {
      PhysicsSystem_TriggersProcessor(puVar3);
    }
    puVar3[4] = *plVar2;
    *(int *)(puVar3 + 5) = (int)plVar2[1];
    *(int32_t *)((int64_t)puVar3 + 0x2c) = *(int32_t *)((int64_t)plVar2 + 0xc);
    pcStack_20 = (code *)&processed_var_4992_ptr;
    plocal_var_18 = &processed_var_7008_ptr;
    apcStack_30[0] = function_3d5530;
    (*(code *)&processed_var_7008_ptr)(puVar3,apcStack_30);
    if (pcStack_20 != (code *)0x0) {
      pcVar4 = (code *)(*pcStack_20)(apcStack_30,0,0);
      return pcVar4;
    }
  }
  else {
    LOCK();
    if (*(int *)(*plVar2 + 0x10) == 1) {
      *(int *)(*plVar2 + 0x10) = 8;
    }
    UNLOCK();
    pcStack_20 = (code *)0x3;
    LOCK();
    uVar1 = *(uint *)(*plVar2 + 0x10);
    if (uVar1 == 3) {
      *(uint *)(*plVar2 + 0x10) = 8;
    }
    else {
      pcStack_20 = (code *)(uint64_t)uVar1;
    }
    UNLOCK();
  }
  return pcStack_20;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3d58e0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_3d58e0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int8_t stack_array_408 [48];
  int32_t local_var_3d8;
  int32_t local_var_3d4;
  int32_t local_var_3d0;
  int32_t local_var_3cc;
  uint64_t local_var_3b8;
  uint64_t local_var_370;
  uint64_t local_var_218;
  uint64_t local_var_88;
  local_var_218 = 0xfffffffffffffffe;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_408;
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x68) + 0x10);
  if (iVar1 == 0) {
LAB_1803d59da:
    local_var_3d4 = 1;
    local_var_3cc = 2;
    local_var_3d8 = 2;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 4) {
        local_var_3d4 = 5;
        local_var_3cc = 6;
        local_var_3d8 = 4;
        local_var_3d0 = 1;
        goto LAB_1803d59ef;
      }
      if (iVar1 == 6) {
        local_var_3d4 = 7;
        local_var_3cc = 9;
        local_var_3d0 = 2;
        local_var_3d8 = 5;
        goto LAB_1803d59ef;
      }
      if (iVar1 != 8) goto LAB_1803d59ef;
      goto LAB_1803d59da;
    }
    local_var_3d4 = 3;
    local_var_3cc = 4;
    local_var_3d8 = 3;
  }
  local_var_3d0 = 0;
LAB_1803d59ef:
  local_var_3b8 = param_2;
  local_var_370 = param_3;
  function_3b8120(*(uint64_t *)(param_1 + 0x68),local_var_3d0);
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5704_ptr);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
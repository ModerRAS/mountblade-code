// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 03_rendering_part157.c - 19 个函数
// 函数: void function_3653d0(int64_t param_1)
void function_3653d0(int64_t param_1)
{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_8;
  if (((*(int64_t **)(param_1 + 0x120) != (int64_t *)0x0) &&
      (cVar2 = (**(code **)(**(int64_t **)(param_1 + 0x120) + 0xd8))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(**(int64_t **)(param_1 + 0x120) + 0x80))(), cVar2 != '\0')) {
    uVar4 = 0;
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
    fVar8 = 1.0;
    lVar3 = *(int64_t *)(lVar1 + 0x540);
    fStackX_8 = 1.0;
    uVar6 = uVar4;
    if (*(int64_t *)(lVar1 + 0x548) - lVar3 >> 3 != 0) {
      do {
        lVar3 = *(int64_t *)(uVar4 + lVar3);
        if (((*(char *)(lVar3 + 0x151) == '\0') ||
            (*(int64_t **)(lVar3 + 0x120) == (int64_t *)0x0)) ||
           ((cVar2 = (**(code **)(**(int64_t **)(lVar3 + 0x120) + 0xd8))(), cVar2 == '\0' ||
            (cVar2 = (**(code **)(**(int64_t **)(lVar3 + 0x120) + 0x80))(), cVar2 == '\0')))) {
LAB_180365659:
          fVar8 = 0.0;
        }
        else {
          lVar3 = *(int64_t *)(lVar3 + 0x18);
          fVar10 = *(float *)(lVar3 + 0xa0) - *(float *)(render_system_data_memory + 0x1b8);
          fVar11 = *(float *)(lVar3 + 0xa4) - *(float *)(render_system_data_memory + 0x1bc);
          fVar9 = *(float *)(lVar3 + 0xa8) - *(float *)(render_system_data_memory + 0x1c0);
          fVar8 = SQRT(*(float *)(lVar3 + 0x70) * *(float *)(lVar3 + 0x70) +
                       *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0x74) +
                       *(float *)(lVar3 + 0x78) * *(float *)(lVar3 + 0x78));
          fVar7 = SQRT(*(float *)(lVar3 + 0x80) * *(float *)(lVar3 + 0x80) +
                       *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0x84) +
                       *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x88));
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          fVar7 = SQRT(*(float *)(lVar3 + 0x90) * *(float *)(lVar3 + 0x90) +
                       *(float *)(lVar3 + 0x94) * *(float *)(lVar3 + 0x94) +
                       *(float *)(lVar3 + 0x98) * *(float *)(lVar3 + 0x98));
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          fVar8 = (1.0 / fVar8) * SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar8 = ((fVar8 - 0.5) + fVar8) - 0.5;
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          fVar8 = 1.0 - fVar8;
          if (fVar8 < 0.0) goto LAB_180365659;
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        fVar8 = 1.0 - fVar8;
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        lVar3 = *(int64_t *)(lVar1 + 0x540);
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        fVar8 = fStackX_8 * fVar8;
        uVar6 = (uint64_t)uVar5;
        fStackX_8 = fVar8;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(lVar1 + 0x548) - lVar3 >> 3));
    }
    (**(code **)(**(int64_t **)(param_1 + 0x120) + 0xf8))(*(int64_t **)(param_1 + 0x120),fVar8);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_365419(void)
void function_365419(void)
{
  int64_t lVar1;
  char cVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack00000000000000e0;
  uVar4 = 0;
  lVar1 = *(int64_t *)(in_RAX + 0x20);
  lVar3 = *(int64_t *)(lVar1 + 0x540);
  fStack00000000000000e0 = 1.0;
  uVar6 = uVar4;
  if (*(int64_t *)(lVar1 + 0x548) - lVar3 >> 3 != 0) {
    do {
      fVar8 = fStack00000000000000e0;
      lVar3 = *(int64_t *)(uVar4 + lVar3);
      if ((((*(char *)(lVar3 + 0x151) == '\0') || (*(int64_t **)(lVar3 + 0x120) == (int64_t *)0x0)
           ) || (cVar2 = (**(code **)(**(int64_t **)(lVar3 + 0x120) + 0xd8))(), cVar2 == '\0')) ||
         (cVar2 = (**(code **)(**(int64_t **)(lVar3 + 0x120) + 0x80))(), cVar2 == '\0')) {
LAB_180365659:
        fVar7 = 0.0;
        fStack00000000000000e0 = fVar8;
      }
      else {
        lVar3 = *(int64_t *)(lVar3 + 0x18);
        fVar10 = *(float *)(lVar3 + 0xa0) - *(float *)(render_system_data_memory + 0x1b8);
        fVar11 = *(float *)(lVar3 + 0xa4) - *(float *)(render_system_data_memory + 0x1bc);
        fVar9 = *(float *)(lVar3 + 0xa8) - *(float *)(render_system_data_memory + 0x1c0);
        fVar8 = SQRT(*(float *)(lVar3 + 0x70) * *(float *)(lVar3 + 0x70) +
                     *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0x74) +
                     *(float *)(lVar3 + 0x78) * *(float *)(lVar3 + 0x78));
        fVar7 = SQRT(*(float *)(lVar3 + 0x80) * *(float *)(lVar3 + 0x80) +
                     *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0x84) +
                     *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x88));
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar7 = SQRT(*(float *)(lVar3 + 0x90) * *(float *)(lVar3 + 0x90) +
                     *(float *)(lVar3 + 0x94) * *(float *)(lVar3 + 0x94) +
                     *(float *)(lVar3 + 0x98) * *(float *)(lVar3 + 0x98));
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar8 = (1.0 / fVar8) * SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        fVar7 = ((fVar8 - 0.5) + fVar8) - 0.5;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        fVar7 = 1.0 - fVar7;
        fVar8 = fStack00000000000000e0;
        if (fVar7 < 0.0) goto LAB_180365659;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
      }
      fVar7 = 1.0 - fVar7;
      if (0.0 <= fVar7) {
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
      }
      else {
        fVar7 = 0.0;
      }
      lVar3 = *(int64_t *)(lVar1 + 0x540);
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      fStack00000000000000e0 = fStack00000000000000e0 * fVar7;
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(lVar1 + 0x548) - lVar3 >> 3));
  }
  (**(code **)(**(int64_t **)(unaff_RBP + 0x120) + 0xf8))
            (*(int64_t **)(unaff_RBP + 0x120),fStack00000000000000e0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_365471(uint64_t param_1,int64_t param_2)
void function_365471(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  char cVar2;
  int64_t unaff_RBP;
  uint64_t uVar3;
  uint unaff_EDI;
  int64_t unaff_R14;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM15_Da;
  float local_buffer_e0;
  uVar3 = (uint64_t)unaff_EDI;
  do {
    lVar1 = *(int64_t *)(uVar3 + param_2);
    if ((((*(char *)(lVar1 + 0x151) == '\0') || (*(int64_t **)(lVar1 + 0x120) == (int64_t *)0x0))
        || (cVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x120) + 0xd8))(), cVar2 == '\0')) ||
       (cVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x120) + 0x80))(), cVar2 == '\0')) {
LAB_180365659:
      fVar5 = 0.0;
      local_buffer_e0 = unaff_XMM6_Da;
    }
    else {
      lVar1 = *(int64_t *)(lVar1 + 0x18);
      fVar7 = *(float *)(lVar1 + 0xa0) - *(float *)(render_system_data_memory + 0x1b8);
      fVar8 = *(float *)(lVar1 + 0xa4) - *(float *)(render_system_data_memory + 0x1bc);
      fVar6 = *(float *)(lVar1 + 0xa8) - *(float *)(render_system_data_memory + 0x1c0);
      fVar5 = SQRT(*(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x70) +
                   *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x74) +
                   *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x78));
      fVar4 = SQRT(*(float *)(lVar1 + 0x80) * *(float *)(lVar1 + 0x80) +
                   *(float *)(lVar1 + 0x84) * *(float *)(lVar1 + 0x84) +
                   *(float *)(lVar1 + 0x88) * *(float *)(lVar1 + 0x88));
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = SQRT(*(float *)(lVar1 + 0x90) * *(float *)(lVar1 + 0x90) +
                   *(float *)(lVar1 + 0x94) * *(float *)(lVar1 + 0x94) +
                   *(float *)(lVar1 + 0x98) * *(float *)(lVar1 + 0x98));
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar5 = (unaff_XMM15_Da / fVar5) * SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar5 = ((fVar5 - 0.5) + fVar5) - 0.5;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = unaff_XMM15_Da - fVar5;
      unaff_XMM6_Da = local_buffer_e0;
      if (fVar5 < 0.0) goto LAB_180365659;
      if (unaff_XMM15_Da <= fVar5) {
        fVar5 = unaff_XMM15_Da;
      }
    }
    fVar5 = unaff_XMM15_Da - fVar5;
    if (0.0 <= fVar5) {
      if (unaff_XMM15_Da <= fVar5) {
        fVar5 = unaff_XMM15_Da;
      }
    }
    else {
      fVar5 = 0.0;
    }
    param_2 = *(int64_t *)(unaff_R14 + 0x540);
    unaff_EDI = unaff_EDI + 1;
    uVar3 = uVar3 + 8;
    unaff_XMM6_Da = local_buffer_e0 * fVar5;
    local_buffer_e0 = unaff_XMM6_Da;
    if ((uint64_t)(*(int64_t *)(unaff_R14 + 0x548) - param_2 >> 3) <=
        (uint64_t)(int64_t)(int)unaff_EDI) {
      (**(code **)(**(int64_t **)(unaff_RBP + 0x120) + 0xf8))
                (*(int64_t **)(unaff_RBP + 0x120),unaff_XMM6_Da);
      return;
    }
  } while( true );
}
// 函数: void function_3656f2(void)
void function_3656f2(void)
{
  int64_t unaff_RBP;
  (**(code **)(**(int64_t **)(unaff_RBP + 0x120) + 0xf8))();
  return;
}
// 函数: void function_365723(void)
void function_365723(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_365730(int64_t *param_1,int32_t param_2)
void function_365730(int64_t *param_1,int32_t param_2)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  if ((char)param_1[0x2f] != '\0') {
    (**(code **)(*param_1 + 0x170))();
  }
  function_362ef0(param_1,param_2);
  if ((char)param_1[0x2a] != '\0') {
    function_3653d0(param_1);
  }
  if ((char)param_1[0x2f] != '\0') {
    local_var_28 = *(int32_t *)(render_system_data_memory + 0x1b8);
    local_var_24 = *(int32_t *)(render_system_data_memory + 0x1bc);
    local_var_20 = *(int32_t *)(render_system_data_memory + 0x1c0);
    local_var_1c = *(int32_t *)(render_system_data_memory + 0x1c4);
    function_364d70(param_1,param_1[3] + 0xa0,&local_var_28);
  }
  return;
}
// 函数: void function_3657c0(int64_t *param_1)
void function_3657c0(int64_t *param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t unaff_RBX;
  int iVar5;
  uint64_t uVar6;
  if (*(code **)(*param_1 + 0x178) == (code *)&processed_var_4048_ptr) {
    function_3638c0();
  }
  else {
    (**(code **)(*param_1 + 0x178))();
  }
  if (((char)param_1[0x2f] != '\0') && (lVar1 = *(int64_t *)(param_1[3] + 0x20), lVar1 != 0)) {
    puVar2 = *(uint64_t **)(lVar1 + 0x548);
    puVar3 = *(uint64_t **)(lVar1 + 0x540);
    iVar5 = 0;
    uVar6 = (int64_t)puVar2 - (int64_t)puVar3 >> 3;
    puVar4 = puVar3;
    if (uVar6 != 0) {
      while ((int64_t *)*puVar4 != param_1) {
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
        if (uVar6 <= (uint64_t)(int64_t)iVar5) {
          return;
        }
      }
      if (iVar5 != -1) {
        puVar4 = puVar3 + iVar5 + 1;
        if (puVar4 < puVar2) {
// WARNING: Subroutine does not return
          memmove(puVar3 + iVar5,puVar4,(int64_t)puVar2 - (int64_t)puVar4,uVar6,unaff_RBX);
        }
        *(uint64_t **)(lVar1 + 0x548) = puVar2 + -1;
      }
    }
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_365820(uint64_t param_1)
void function_365820(uint64_t param_1)
{
  int8_t stack_array_388 [32];
  int32_t local_var_368;
  void **applocal_var_360 [2];
  uint64_t local_var_350;
  void *aplocal_var_348 [19];
  int32_t local_var_2b0;
  void *plocal_var_2a8;
  int8_t *plocal_var_2a0;
  int32_t local_var_298;
  int8_t stack_array_290 [136];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [136];
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [136];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_350 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_388;
  local_var_368 = 0;
  function_362fb0();
  plocal_var_2a8 = &memory_allocator_3432_ptr;
  plocal_var_2a0 = stack_array_290;
  stack_array_290[0] = 0;
  local_var_298 = 0xf;
  strcpy_s(stack_array_290,0x80,&system_data_01c0);
  SystemCore_EventHandler(aplocal_var_348,&plocal_var_2a8);
  local_var_2b0 = 3;
  local_var_368 = 1;
  function_3617c0(param_1,applocal_var_360,aplocal_var_348);
  local_var_368 = 0;
  applocal_var_360[0] = aplocal_var_348;
  aplocal_var_348[0] = &system_state_ptr;
  plocal_var_2a8 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3432_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0x13;
  strcpy_s(stack_array_1f0,0x80,&system_data_01a8);
  SystemCore_EventHandler(aplocal_var_348,&plocal_var_208);
  local_var_2b0 = 3;
  local_var_368 = 2;
  function_3617c0(param_1,applocal_var_360,aplocal_var_348);
  local_var_368 = 0;
  applocal_var_360[0] = aplocal_var_348;
  aplocal_var_348[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_168 = &memory_allocator_3432_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xc;
  strcpy_s(stack_array_150,0x80,&system_data_0198);
  SystemCore_EventHandler(aplocal_var_348,&plocal_var_168);
  local_var_2b0 = 3;
  local_var_368 = 4;
  function_3617c0(param_1,applocal_var_360,aplocal_var_348);
  local_var_368 = 0;
  applocal_var_360[0] = aplocal_var_348;
  aplocal_var_348[0] = &system_state_ptr;
  plocal_var_168 = &system_state_ptr;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = 0xd;
  strcpy_s(stack_array_b0,0x80,&system_data_0238);
  SystemCore_EventHandler(aplocal_var_348,&plocal_var_c8);
  local_var_2b0 = 9;
  local_var_368 = 8;
  function_3617c0(param_1,applocal_var_360,aplocal_var_348);
  local_var_368 = 0;
  applocal_var_360[0] = aplocal_var_348;
  aplocal_var_348[0] = &system_state_ptr;
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_388);
}
bool function_365b30(void)
{
  char cVar1;
  cVar1 = function_365b50();
  return cVar1 == '\0';
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_365b50(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  uint64_t uVar7;
  int iVar8;
  int *piVar9;
  uint64_t uVar10;
  int32_t uVar11;
  void *plocal_var_c0;
  int64_t lStack_b8;
  int32_t local_var_b0;
  uint64_t local_var_a8;
  void *plocal_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  iVar8 = 0;
  bVar1 = true;
  lStack_58 = 0;
  lStack_50 = 0;
  local_var_48 = 0;
  local_var_40 = 3;
  SystemCore_NetworkHandler0(&plocal_var_c0,param_1 + 0x90,param_3,param_4,0);
  plocal_var_a0 = &system_data_ff70;
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_88 = local_var_b0;
  lStack_90 = lStack_b8;
  local_var_80._4_4_ = (uint)(local_var_a8 >> 0x20);
  local_var_80._0_4_ = (int32_t)local_var_a8;
  local_var_b0 = 0;
  lStack_b8 = 0;
  local_var_a8 = 0;
  CoreMemoryPoolValidator(&plocal_var_78,&system_data_ff70);
  function_365de0(&lStack_58,&plocal_var_98);
  lVar4 = lStack_58;
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_70 = 0;
  local_var_60 = 0;
  plocal_var_78 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_90 = 0;
  local_var_80 = (uint64_t)local_var_80._4_4_ << 0x20;
  plocal_var_98 = &system_state_ptr;
  uVar11 = 0;
  plocal_var_c0 = &system_data_buffer_ptr;
  if (lStack_b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_b8 = 0;
  local_var_a8 = local_var_a8 & 0xffffffff00000000;
  plocal_var_c0 = &system_state_ptr;
  uVar10 = lStack_50 - lStack_58 >> 6;
  lVar2 = lVar4;
  lVar3 = lStack_50;
  if (uVar10 != 0) {
    piVar9 = (int *)(lStack_58 + 0x10);
    do {
      if (*piVar9 != 0) {
        uVar7 = function_213440(render_system_data_memory,param_1 + 0x90,1,param_4,uVar11);
        if ((bVar1) && (cVar6 = function_363eb0(param_1,uVar7), cVar6 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0x10;
      lVar3 = lStack_50;
    } while ((uint64_t)(int64_t)iVar8 < uVar10);
  }
  for (; lVar5 = lStack_50, lVar2 != lStack_50; lVar2 = lVar2 + 0x40) {
    lStack_50 = lVar3;
    function_0596a0(lVar2);
    lVar3 = lStack_50;
    lStack_50 = lVar5;
  }
  if (lVar4 != 0) {
    lStack_50 = lVar3;
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar4);
  }
  return bVar1;
}
// 函数: void function_365d60(int64_t *param_1)
void function_365d60(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    function_0596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void function_365d80(int64_t *param_1)
void function_365d80(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    function_0596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_365de0(int64_t *param_1,uint64_t param_2)
void function_365de0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar4 = lVar6 - lVar5 >> 6;
  puVar1 = (uint64_t *)0x0;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) goto LAB_180365e4a;
  }
  puVar1 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 6,(char)param_1[3],lVar6,0xfffffffffffffffe);
  lVar6 = param_1[1];
  lVar5 = *param_1;
LAB_180365e4a:
  puVar3 = puVar1;
  if (lVar5 != lVar6) {
    puVar2 = puVar1 + 5;
    lVar5 = lVar5 - (int64_t)puVar1;
    do {
      *puVar3 = &system_state_ptr;
      puVar2[-4] = 0;
      *(int32_t *)(puVar2 + -3) = 0;
      *puVar3 = &system_data_buffer_ptr;
      puVar2[-2] = 0;
      puVar2[-4] = 0;
      *(int32_t *)(puVar2 + -3) = 0;
      *(int32_t *)(puVar2 + -3) = *(int32_t *)(lVar5 + -0x18 + (int64_t)puVar2);
      puVar2[-4] = *(uint64_t *)(lVar5 + -0x20 + (int64_t)puVar2);
      *(int32_t *)((int64_t)puVar2 + -0xc) = *(int32_t *)(lVar5 + -0xc + (int64_t)puVar2);
      *(int32_t *)(puVar2 + -2) = *(int32_t *)((int64_t)puVar2 + lVar5 + -0x10);
      *(int32_t *)(lVar5 + -0x18 + (int64_t)puVar2) = 0;
      *(uint64_t *)(lVar5 + -0x20 + (int64_t)puVar2) = 0;
      *(int32_t *)(lVar5 + -0xc + (int64_t)puVar2) = 0;
      *(int32_t *)((int64_t)puVar2 + lVar5 + -0x10) = 0;
      puVar2[-1] = &system_state_ptr;
      *puVar2 = 0;
      *(int32_t *)(puVar2 + 1) = 0;
      puVar2[-1] = &system_data_buffer_ptr;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(int32_t *)(puVar2 + 1) = 0;
      *(int32_t *)(puVar2 + 1) = *(int32_t *)((int64_t)puVar2 + lVar5 + 8);
      *puVar2 = *(uint64_t *)(lVar5 + (int64_t)puVar2);
      *(int32_t *)((int64_t)puVar2 + 0x14) = *(int32_t *)((int64_t)puVar2 + lVar5 + 0x14);
      *(int32_t *)(puVar2 + 2) = *(int32_t *)((int64_t)puVar2 + lVar5 + 0x10);
      *(int32_t *)((int64_t)puVar2 + lVar5 + 8) = 0;
      *(uint64_t *)(lVar5 + (int64_t)puVar2) = 0;
      *(uint64_t *)((int64_t)puVar2 + lVar5 + 0x10) = 0;
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 8;
    } while (lVar5 + -0x28 + (int64_t)puVar2 != lVar6);
  }
  function_05caa0(puVar3,param_2);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar6) {
    do {
      function_0596a0(lVar5);
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = (int64_t)puVar1;
    param_1[1] = (int64_t)(puVar3 + 8);
    param_1[2] = (int64_t)(puVar1 + lVar4 * 8);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar5);
}
// 函数: void function_365fa0(int64_t param_1,int64_t param_2)
void function_365fa0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  plVar1 = *(int64_t **)(param_1 + 0x548);
  plVar2 = *(int64_t **)(param_1 + 0x540);
  iVar4 = 0;
  uVar5 = (int64_t)plVar1 - (int64_t)plVar2 >> 3;
  plVar3 = plVar2;
  if (uVar5 != 0) {
    while (*plVar3 != param_2) {
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
      if (uVar5 <= (uint64_t)(int64_t)iVar4) {
        return;
      }
    }
    if (iVar4 != -1) {
      plVar3 = plVar2 + iVar4 + 1;
      if (plVar3 < plVar1) {
// WARNING: Subroutine does not return
        memmove(plVar2 + iVar4,plVar3,(int64_t)plVar1 - (int64_t)plVar3);
      }
      *(int64_t **)(param_1 + 0x548) = plVar1 + -1;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_366030(int64_t param_1,int64_t param_2)
void function_366030(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  plVar1 = (int64_t *)0x0;
  plVar3 = *(int64_t **)(param_1 + 0x540);
  uVar7 = *(int64_t *)(param_1 + 0x548) - (int64_t)plVar3 >> 3;
  plVar2 = plVar3;
  plVar6 = plVar1;
  if (uVar7 != 0) {
    do {
      if (*plVar2 == param_2) {
        if ((int)plVar6 != -1) {
          return;
        }
        break;
      }
      uVar5 = (int)plVar6 + 1;
      plVar2 = plVar2 + 1;
      plVar6 = (int64_t *)(uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 < uVar7);
  }
  plVar2 = *(int64_t **)(param_1 + 0x548);
  if (plVar2 < *(int64_t **)(param_1 + 0x550)) {
    *(int64_t **)(param_1 + 0x548) = plVar2 + 1;
    *plVar2 = param_2;
    return;
  }
  if (uVar7 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = uVar7 * 2;
    if (lVar4 == 0) goto LAB_1803660ff;
  }
  plVar1 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_1 + 0x558));
  plVar3 = *(int64_t **)(param_1 + 0x540);
  plVar2 = *(int64_t **)(param_1 + 0x548);
LAB_1803660ff:
  if (plVar3 != plVar2) {
// WARNING: Subroutine does not return
    memmove(plVar1,plVar3,(int64_t)plVar2 - (int64_t)plVar3);
  }
  *plVar1 = param_2;
  if (*(int64_t *)(param_1 + 0x540) == 0) {
    *(int64_t **)(param_1 + 0x540) = plVar1;
    *(int64_t **)(param_1 + 0x550) = plVar1 + lVar4;
    *(int64_t **)(param_1 + 0x548) = plVar1 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_366090(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)
void function_366090(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)
{
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t *puVar1;
  uint64_t *unaff_R14;
  puVar1 = *(uint64_t **)(unaff_RBX + 0x548);
  if (puVar1 < *(uint64_t **)(unaff_RBX + 0x550)) {
    *(uint64_t **)(unaff_RBX + 0x548) = puVar1 + 1;
    *puVar1 = unaff_RSI;
    return;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  else {
    param_4 = param_4 * 2;
    if (param_4 == 0) goto LAB_1803660ff;
  }
  unaff_R14 = (uint64_t *)
              CoreMemoryPoolAllocator(system_memory_pool_ptr,param_4 * 8,*(int8_t *)(unaff_RBX + 0x558));
  param_2 = *(uint64_t **)(unaff_RBX + 0x540);
  puVar1 = *(uint64_t **)(unaff_RBX + 0x548);
LAB_1803660ff:
  if (param_2 != puVar1) {
// WARNING: Subroutine does not return
    memmove(unaff_R14,param_2,(int64_t)puVar1 - (int64_t)param_2);
  }
  *unaff_R14 = unaff_RSI;
  if (*(int64_t *)(unaff_RBX + 0x540) == 0) {
    *(uint64_t **)(unaff_RBX + 0x540) = unaff_R14;
    *(uint64_t **)(unaff_RBX + 0x550) = unaff_R14 + param_4;
    *(uint64_t **)(unaff_RBX + 0x548) = unaff_R14 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3660b8(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void function_3660b8(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *unaff_R14;
  if (param_4 == 0) {
    param_4 = 1;
  }
  else {
    param_4 = param_4 * 2;
    if (param_4 == 0) goto LAB_1803660ff;
  }
  unaff_R14 = (uint64_t *)
              CoreMemoryPoolAllocator(system_memory_pool_ptr,param_4 * 8,*(int8_t *)(unaff_RBX + 0x558));
  param_2 = *(int64_t *)(unaff_RBX + 0x540);
  unaff_RDI = *(int64_t *)(unaff_RBX + 0x548);
LAB_1803660ff:
  if (param_2 != unaff_RDI) {
// WARNING: Subroutine does not return
    memmove(unaff_R14,param_2,unaff_RDI - param_2);
  }
  *unaff_R14 = unaff_RSI;
  if (*(int64_t *)(unaff_RBX + 0x540) == 0) {
    *(uint64_t **)(unaff_RBX + 0x540) = unaff_R14;
    *(uint64_t **)(unaff_RBX + 0x550) = unaff_R14 + param_4;
    *(uint64_t **)(unaff_RBX + 0x548) = unaff_R14 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void function_366155(void)
void function_366155(void)
{
  return;
}
// 函数: void function_36615a(void)
void function_36615a(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_366170(uint64_t *param_1)
void function_366170(uint64_t *param_1)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_80;
  int32_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_8872_ptr;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(int32_t *)(puVar3 + 0x12) = 3;
  *(int8_t *)(puVar3 + 0x15) = 0;
  *(int32_t *)(puVar3 + 0x13) = 0x3f800000;
  *(int32_t *)((int64_t)puVar3 + 0x9c) = 0x3f800000;
  *(int32_t *)(puVar3 + 0x14) = 0x3f800000;
  *(int32_t *)((int64_t)puVar3 + 0xa4) = 0x3f800000;
  plocal_var_80 = &system_data_buffer_ptr;
  local_var_68 = 0;
  plocal_var_78 = (int32_t *)0x0;
  local_var_70 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_78 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_68 = CONCAT44(local_var_68._4_4_,uVar1);
  *puVar2 = 0x7265764f;
  puVar2[1] = 0x65646972;
  puVar2[2] = 0x63614620;
  puVar2[3] = 0x20726f74;
  puVar2[4] = 0x6f6c6f43;
  *(int16_t *)(puVar2 + 5) = 0x72;
  local_var_70 = 0x15;
  SystemNetwork_Processor(param_1,&plocal_var_80,param_1 + 0x15,3,uVar4);
  plocal_var_80 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}
uint64_t function_366340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  DataTransformer0();
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3663a0(uint64_t param_1,uint64_t param_2)
void function_3663a0(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *plocal_var_80;
  int32_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb0,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_8872_ptr;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  *(int32_t *)(puVar4 + 0x12) = 3;
  *(int8_t *)(puVar4 + 0x15) = 0;
  *(int32_t *)(puVar4 + 0x13) = 0x3f800000;
  *(int32_t *)((int64_t)puVar4 + 0x9c) = 0x3f800000;
  *(int32_t *)(puVar4 + 0x14) = 0x3f800000;
  *(int32_t *)((int64_t)puVar4 + 0xa4) = 0x3f800000;
  plocal_var_80 = &system_data_buffer_ptr;
  local_var_68 = 0;
  plocal_var_78 = (int32_t *)0x0;
  local_var_70 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_78 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_68 = CONCAT44(local_var_68._4_4_,uVar1);
  *puVar2 = 0x7265764f;
  puVar2[1] = 0x65646972;
  puVar2[2] = 0x63614620;
  puVar2[3] = 0x20726f74;
  puVar2[4] = 0x6f6c6f43;
  *(int16_t *)(puVar2 + 5) = 0x72;
  local_var_70 = 0x15;
  SystemNetwork_Processor(puVar3,&plocal_var_80,puVar3 + 0x15,3,uVar5);
  plocal_var_80 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}
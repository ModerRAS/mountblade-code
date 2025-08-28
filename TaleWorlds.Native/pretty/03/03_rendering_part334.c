// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
// 03_rendering_part334.c - 34 个函数
// 函数: void UISystem_43820(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_43820(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (int64_t *)(lVar2 + 0x60d10);
    (**(code **)(*param_1 + 0x28))();
    iVar6 = 0;
    puVar4 = (uint64_t *)*plVar1;
    uVar5 = *(int64_t *)(lVar2 + 0x60d18) - (int64_t)puVar4 >> 3;
    if (uVar5 != 0) {
      do {
        if ((int64_t *)*puVar4 == param_1) goto LAB_18044388e;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
      } while ((uint64_t)(int64_t)iVar6 < uVar5);
    }
    iVar6 = -1;
LAB_18044388e:
    (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar6 != -1) {
      *(uint *)((int64_t)param_1 + 0x2ac) = *(uint *)((int64_t)param_1 + 0x2ac) & 0xefffffff;
      if ((int)param_1[0x57] == -1) {
        RenderingSystem_982f0(lVar2 + 0x607e0,param_1);
        if (param_1[0x2d] == 0) {
          RenderingSystem_98640(lVar2 + 0x607e0,param_1);
        }
      }
      lVar3 = *plVar1;
      CoreEngine_080810(lVar3 + (int64_t)iVar6 * 8,
                    lVar3 + ((*(int64_t *)(lVar2 + 0x60d18) - lVar3 >> 3) + -1) * 8,lVar3,param_4,
                    uVar7);
      GenericFunction_1800b8630(plVar1,(*(int64_t *)(lVar2 + 0x60d18) - *plVar1 >> 3) + -1);
    }
  }
  return;
}
// 函数: void UISystem_43930(int64_t param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
void UISystem_43930(int64_t param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
                  char param_5)
{
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  if (param_1 != 0) {
    DataStructure_f4040(param_1,&local_var_48,param_2,0);
    if (param_5 != '\0') {
      *param_3 = local_var_48;
      param_3[1] = local_var_40;
      *param_4 = local_var_38;
      param_4[1] = local_var_30;
      return;
    }
    UtilitiesSystem_3a7b0(&local_var_48,param_1 + 0x70,param_3,param_4);
  }
  return;
}
// 函数: void UISystem_439b0(int64_t param_1,int32_t param_2)
void UISystem_439b0(int64_t param_1,int32_t param_2)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  *(char *)(param_1 + 0x2e6) = (char)param_2;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      UISystem_439b0(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + uVar1),param_2);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void UISystem_439e4(void)
void UISystem_439e4(void)
{
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    UISystem_439b0(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + uVar1),unaff_EBP);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return;
}
// 函数: void UISystem_43a27(void)
void UISystem_43a27(void)
{
  return;
}
int64_t * UISystem_43a40(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t local_var_c;
  plVar1 = *(int64_t **)(param_2 + 0x28);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(local_var_c,uVar2);
  return param_1;
}
uint64_t * UISystem_43aa0(uint64_t *param_1,int64_t *param_2)
{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t local_var_c;
  plVar2 = (int64_t *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(local_var_c,uVar1);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_43b00(void)
void UISystem_43b00(void)
{
  char *pcVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puVar6;
  void *puVar7;
  int8_t stack_array_278 [96];
  uint64_t local_var_218;
  int aiStack_1d0 [2];
  int8_t local_var_1c8;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t *plocal_var_198;
  int32_t local_var_190;
  int8_t stack_array_18c [4];
  int64_t *plStack_188;
  int8_t stack_array_178 [16];
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int8_t local_var_140;
  uint64_t stack_array_138 [7];
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int8_t local_var_e8;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  uint8_t stack_array_b0 [128];
  uint64_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)*render_system_data_memory;
  if (puVar2 != (uint64_t *)0x0) {
    *render_system_data_memory = 0;
    local_var_30 = 0x180443b24;
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = render_system_data_memory;
  local_var_218 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  lVar5 = (int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
          *(int64_t *)(system_message_buffer + 0x1d20);
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = *(int32_t *)(lVar5 + 0x20);
  puVar6 = *(void **)(lVar5 + 0x18);
  puVar7 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar7 = puVar6;
  }
  strcpy_s(stack_array_b0,0x80,puVar7);
  puVar6 = &system_buffer_ptr;
  if (plocal_var_c0 != (void *)0x0) {
    puVar6 = plocal_var_c0;
  }
  lVar5 = strstr(puVar6,&processed_var_9640_ptr);
  if (lVar5 != 0) {
    local_var_168 = 0;
    local_var_160 = 0xf;
    stack_array_178[0] = 0;
    local_var_158 = 0;
    local_var_150 = 0;
    local_var_148 = 0;
    local_var_140 = 0;
    plocal_var_198 = stack_array_138;
    local_var_100 = 0;
    local_var_f8 = 0;
    local_var_f0 = 0;
    local_var_d8 = 0;
    local_var_d0 = 0xf;
    local_var_e8 = 0;
    lVar5 = -1;
    do {
      pcVar1 = &processed_var_4665_ptr + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    MathCoreCalculator0(stack_array_178,&system_state_d0f8);
    local_var_140 = 1;
    plocal_var_198 = (uint64_t *)0x100000000;
    local_var_190 = 2;
    GenericFunction_180189600(&local_var_158,&plocal_var_198,stack_array_18c);
    plocal_var_198 = (uint64_t *)&processed_var_9744_ptr;
    plStack_188 = plVar3;
    GenericFunction_180188620(stack_array_138,&plocal_var_198);
    local_var_1b8 = 0;
    local_var_1b0 = 0xf;
    local_var_1c8 = 0;
    plocal_var_198 = &local_var_1a8;
    local_var_1a8 = 0;
    local_var_1a0 = 0;
    local_var_1a8 = GenericFunction_180188560();
    GenericFunction_180183a20(stack_array_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar4 = Function_86468b82();
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_9712_ptr,uVar4);
    }
    uVar4 = Function_86468b82();
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9856_ptr,uVar4);
  }
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_278);
}
// 函数: void UISystem_43b40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_43b40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t stack_array_30 [48];
  CoreMemoryPoolValidator(stack_array_30,param_1,param_3,param_4,0xfffffffffffffffe);
  GenericFunction_1801865a0();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_43b80(uint64_t param_1,int8_t param_2)
void UISystem_43b80(uint64_t param_1,int8_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t lVar5;
  int8_t stack_array_d8 [32];
  void **pplocal_var_b8;
  uint64_t local_var_b0;
  uint64_t *plocal_var_a8;
  void *plocal_var_a0;
  int64_t lStack_98;
  void **pplocal_var_68;
  void *aplocal_var_60 [4];
  int8_t stack_array_40 [16];
  uint64_t local_var_30;
  uint64_t local_var_28;
  int8_t local_var_20;
  uint64_t local_var_18;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  pplocal_var_b8 = aplocal_var_60;
  puVar3 = (uint64_t *)CoreMemoryPoolValidator(aplocal_var_60,param_1);
  lVar2 = render_system_data_memory;
  plocal_var_a8 = puVar3;
  if (*(int64_t *)(render_system_data_memory + 8) == 0) {
    *puVar3 = &system_data_buffer_ptr;
    if (puVar3[1] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puVar3[1] = 0;
    *(int32_t *)(puVar3 + 3) = 0;
  }
  else {
    local_var_30 = 0;
    local_var_28 = 0xf;
    stack_array_40[0] = 0;
    puVar4 = &system_buffer_ptr;
    if ((void *)puVar3[1] != (void *)0x0) {
      puVar4 = (void *)puVar3[1];
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar4[lVar5] != '\0');
    MathCoreCalculator0(stack_array_40);
    plVar1 = *(int64_t **)(lVar2 + 8);
    pplocal_var_b8 = &plocal_var_a0;
    plocal_var_a0 = &processed_var_760_ptr;
    lStack_98 = lVar2;
    pplocal_var_68 = &plocal_var_a0;
    local_var_20 = param_2;
    (**(code **)(*plVar1 + 0x20))(plVar1,stack_array_40,&plocal_var_a0,0);
    SystemResourceAllocator(stack_array_40);
    *puVar3 = &system_data_buffer_ptr;
    if (puVar3[1] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puVar3[1] = 0;
    *(int32_t *)(puVar3 + 3) = 0;
  }
  *puVar3 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_d8);
}
// 函数: void UISystem_43d10(uint64_t param_1)
void UISystem_43d10(uint64_t param_1)
{
  int8_t stack_array_50 [32];
  int8_t stack_array_30 [40];
  CoreMemoryPoolValidator(stack_array_50);
  CoreMemoryPoolValidator(stack_array_30,param_1);
  GenericFunction_180186880();
  return;
}
// 函数: void UISystem_43d70(uint64_t param_1)
void UISystem_43d70(uint64_t param_1)
{
  int8_t stack_array_50 [32];
  int8_t stack_array_30 [40];
  CoreMemoryPoolValidator(stack_array_50);
  CoreMemoryPoolValidator(stack_array_30,param_1);
  GenericFunction_180186ac0();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_43df0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_43df0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uVar11 = 0xfffffffffffffffe;
  plVar12 = (int64_t *)0x0;
  plVar13 = (int64_t *)0x0;
  plVar8 = (int64_t *)0x0;
  plVar14 = (int64_t *)0x0;
  lVar4 = strtok(0,&processed_var_9820_ptr,param_3,param_4,0xfffffffffffffffe,0,0,0,3);
  plVar7 = plVar8;
  plVar9 = plVar8;
  uVar2 = extraout_XMM0_Da;
  plVar3 = plVar12;
  plVar1 = plVar13;
  do {
    if (lVar4 == 0) {
      GenericFunction_180186ca0(uVar2,plVar3,(int64_t)plVar7 - (int64_t)plVar3 >> 3,param_4,uVar11,plVar12,
                    plVar13,plVar14);
      if (plVar3 == (int64_t *)0x0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar3);
    }
    if (plVar7 < plVar9) {
      *plVar1 = lVar4;
      plVar5 = plVar3;
    }
    else {
      lVar6 = (int64_t)plVar7 - (int64_t)plVar3 >> 3;
      lVar10 = lVar6 * 2;
      if (lVar6 == 0) {
        lVar10 = 1;
      }
      plVar5 = plVar8;
      if (lVar10 != 0) {
        plVar5 = (int64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,CONCAT71((int7)((uint64_t)plVar7 >> 8),3))
        ;
      }
      if (plVar3 != plVar7) {
// WARNING: Subroutine does not return
        memmove(plVar5,plVar3,(int64_t)plVar7 - (int64_t)plVar3);
      }
      *plVar5 = lVar4;
      if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(plVar3);
      }
      plVar9 = plVar5 + lVar10;
      plVar12 = plVar5;
      plVar14 = plVar9;
      plVar1 = plVar5;
    }
    plVar7 = plVar1 + 1;
    plVar13 = plVar7;
    lVar4 = strtok(0,&processed_var_9820_ptr);
    uVar2 = extraout_XMM0_Da_00;
    plVar3 = plVar5;
    plVar1 = plVar7;
  } while( true );
}
// 函数: void UISystem_43f80(uint64_t param_1)
void UISystem_43f80(uint64_t param_1)
{
  int8_t stack_array_50 [32];
  int8_t stack_array_30 [40];
  CoreMemoryPoolValidator(stack_array_50);
  CoreMemoryPoolValidator(stack_array_30,param_1);
  GenericFunction_180186eb0();
  return;
}
// 函数: void UISystem_43ff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_43ff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t stack_array_30 [48];
  CoreMemoryPoolValidator(stack_array_30,param_1,param_3,param_4,0xfffffffffffffffe);
  GenericFunction_1801871f0();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44030(void)
void UISystem_44030(void)
{
  int iVar1;
  iVar1 = _Mtx_lock(0x180c91970);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  SYSTEM_DATA_MANAGER_A = *(uint64_t *)*render_system_data_memory;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44070(uint64_t param_1,uint64_t *param_2)
void UISystem_44070(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_var_28 = 0;
  local_var_24 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
  local_var_20 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
  local_var_1c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
  local_var_18 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_var_28);
  *(uint64_t *)(lVar3 + 0x16c8) = uVar1;
  *(uint64_t *)(lVar3 + 0x16d0) = uVar2;
  return;
}
// 函数: void UISystem_44100(void)
void UISystem_44100(void)
{
  int iVar1;
  iVar1 = _Mtx_unlock(0x180c91970);
  if (iVar1 != 0) {
// WARNING: Could not recover jumptable at 0x00018044411b. Too many branches
// WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}
// 函数: void UISystem_44200(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void UISystem_44200(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int32_t param_10)
{
  uint64_t local_var_18;
  int32_t local_var_10;
  local_var_10 = param_10;
  local_var_18 = param_2;
  GenericFunction_18011a0a0(param_6,param_1,param_3,&local_var_18,param_3,param_4,param_5,param_6,param_7,
                CONCAT44(param_9,param_8));
  return;
}
// 函数: void UISystem_44280(uint64_t param_1)
void UISystem_44280(uint64_t param_1)
{
  int32_t stack_special_x_10;
  int32_t stack_special_x_14;
  stack_special_x_10 = 0xbf800000;
  stack_special_x_14 = 0;
  GenericFunction_180111c30(param_1,&stack_special_x_10);
  return;
}
// 函数: void UISystem_442c0(uint64_t param_1)
void UISystem_442c0(uint64_t param_1)
{
  uint64_t astack_special_x_10 [3];
  astack_special_x_10[0] = 0;
  GenericFunction_18010f6f0(param_1,astack_special_x_10,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_442e0(void)
void UISystem_442e0(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t alStackX_8 [4];
  lVar1 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar1 + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    uVar3 = *(int32_t *)(lVar2 + 0x1a0);
    *(int32_t *)(lVar2 + 0x1a0) = 1;
    if (*(float *)(lVar2 + 0x124) <= 0.0) {
      alStackX_8[0] = (uint64_t)*(uint *)(lVar1 + 0x19f8) << 0x20;
    }
    else {
      alStackX_8[0] = 0;
    }
    Function_c4d212ab(alStackX_8);
    *(int32_t *)(lVar2 + 0x1a0) = uVar3;
  }
  return;
}
// 函数: void UISystem_44370(uint64_t param_1,uint64_t param_2,char *param_3)
void UISystem_44370(uint64_t param_1,uint64_t param_2,char *param_3)
{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_3[lVar2] != '\0');
    param_3 = param_3 + lVar3 + 2;
    cVar1 = *param_3;
  }
  GenericFunction_180113380();
  return;
}
// 函数: void UISystem_443c0(uint64_t param_1,uint64_t param_2)
void UISystem_443c0(uint64_t param_1,uint64_t param_2)
{
  int32_t astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  astack_special_x_18[0] = 100;
  astack_special_x_20[0] = 1;
  GenericFunction_180114450(param_1,0,param_2,astack_special_x_20,astack_special_x_18,&processed_var_4576_ptr,0);
  return;
}
// 函数: void UISystem_44410(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void UISystem_44410(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
{
  int32_t astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  astack_special_x_18[0] = param_4;
  astack_special_x_20[0] = param_3;
  GenericFunction_180113940(param_1,param_2,param_2,astack_special_x_20,astack_special_x_18);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_445b0(uint64_t param_1)
void UISystem_445b0(uint64_t param_1)
{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t astack_special_x_10 [3];
  lVar2 = SYSTEM_DATA_MANAGER_A;
  astack_special_x_10[0] = 0;
  uVar1 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1660);
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1660) = 0;
  GenericFunction_18010f6f0(param_1,astack_special_x_10,0x200);
  *(int32_t *)(lVar2 + 0x1660) = uVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44600(uint64_t param_1,uint64_t param_2,float param_3,float param_4,int param_5)
void UISystem_44600(uint64_t param_1,uint64_t param_2,float param_3,float param_4,int param_5)
{
  float *pfVar1;
  int8_t stack_array_98 [32];
  float *pfStack_78;
  int16_t *plocal_var_70;
  int32_t local_var_68;
  float afStack_58 [2];
  float afStack_50 [2];
  int16_t local_var_48;
  int8_t local_var_46;
  uint64_t local_var_45;
  int32_t local_var_3d;
  int8_t local_var_39;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_48 = 0x6625;
  local_var_46 = 0;
  local_var_45 = 0;
  local_var_3d = 0;
  local_var_39 = 0;
  if (-1 < param_5) {
    SystemCore_LoggingSystem(&local_var_48,0x10,&rendering_buffer_2232_ptr);
  }
  local_var_68 = 0x20000;
  pfStack_78 = afStack_58;
  if (param_4 <= 0.0) {
    pfStack_78 = (float *)0x0;
  }
  pfVar1 = afStack_50;
  if (param_3 <= 0.0) {
    pfVar1 = (float *)0x0;
  }
  plocal_var_70 = &local_var_48;
  afStack_58[0] = param_4;
  afStack_50[0] = param_3;
  GenericFunction_180114450(param_1,4,param_2,pfVar1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44700(uint64_t param_1,int32_t *param_2,int32_t *param_3,int param_4)
void UISystem_44700(uint64_t param_1,int32_t *param_2,int32_t *param_3,int param_4)
{
  int8_t stack_array_78 [48];
  int16_t *plocal_var_48;
  int32_t local_var_38;
  int32_t local_var_34;
  int16_t local_var_30;
  int8_t local_var_2e;
  uint64_t local_var_2d;
  int32_t local_var_25;
  int8_t local_var_21;
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  local_var_38 = *param_2;
  local_var_34 = *param_3;
  local_var_30 = 0x6625;
  local_var_2e = 0;
  local_var_2d = 0;
  local_var_25 = 0;
  local_var_21 = 0;
  if (-1 < param_4) {
    SystemCore_LoggingSystem(&local_var_30,0x10,&rendering_buffer_2232_ptr);
  }
  plocal_var_48 = &local_var_30;
  GenericFunction_180114890(param_1);
  *param_2 = local_var_38;
  *param_3 = local_var_34;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_78);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_447c0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
void UISystem_447c0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                  int param_5)
{
  int8_t stack_array_98 [48];
  int16_t *plocal_var_68;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int16_t local_var_48;
  int8_t local_var_46;
  uint64_t local_var_45;
  int32_t local_var_3d;
  int8_t local_var_39;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_58 = *param_2;
  local_var_54 = *param_3;
  local_var_48 = 0x6625;
  local_var_46 = 0;
  local_var_50 = *param_4;
  local_var_45 = 0;
  local_var_3d = 0;
  local_var_39 = 0;
  if (-1 < param_5) {
    SystemCore_LoggingSystem(&local_var_48,0x10,&rendering_buffer_2232_ptr);
  }
  plocal_var_68 = &local_var_48;
  GenericFunction_180114890(param_1);
  *param_2 = local_var_58;
  *param_3 = local_var_54;
  *param_4 = local_var_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_448a0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
void UISystem_448a0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                  int32_t *param_5,int param_6)
{
  int8_t stack_array_98 [48];
  int16_t *plocal_var_68;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int16_t local_var_48;
  int8_t local_var_46;
  uint64_t local_var_45;
  int32_t local_var_3d;
  int8_t local_var_39;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_58 = *param_2;
  local_var_54 = *param_3;
  local_var_48 = 0x6625;
  local_var_46 = 0;
  local_var_50 = *param_4;
  local_var_4c = *param_5;
  local_var_45 = 0;
  local_var_3d = 0;
  local_var_39 = 0;
  if (-1 < param_6) {
    SystemCore_LoggingSystem(&local_var_48,0x10,&rendering_buffer_2232_ptr);
  }
  plocal_var_68 = &local_var_48;
  GenericFunction_180114890(param_1);
  *param_2 = local_var_58;
  *param_3 = local_var_54;
  *param_4 = local_var_50;
  *param_5 = local_var_4c;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
float UISystem_449a0(void)
{
  float fVar1;
  fVar1 = (float)expf(*(float *)(SYSTEM_STATE_MANAGER + 0x16c0) * 4.0);
  return fVar1 * 0.05;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44a20(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void UISystem_44a20(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,int8_t param_6)
{
  int8_t stack_array_168 [32];
  int8_t local_var_148;
  int8_t local_var_147;
  int8_t stack_array_144 [268];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  local_var_148 = (int8_t)param_3;
  local_var_147 = param_6;
// WARNING: Subroutine does not return
  memcpy(stack_array_144,param_1,(int64_t)param_3 << 2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44b70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void UISystem_44b70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
{
  int8_t local_var_40;
  int8_t stack_array_1f8 [32];
  int8_t local_var_1d8;
  int8_t local_var_1d7;
  int8_t stack_array_1d4 [396];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1f8;
  local_var_1d8 = (int8_t)param_4;
  local_var_1d7 = local_var_40;
// WARNING: Subroutine does not return
  memcpy(stack_array_1d4,param_1,(int64_t)param_4 << 2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)
void UISystem_44dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)
{
  int64_t lVar1;
  int32_t local_var_18;
  int16_t local_var_14;
  lVar1 = *(int64_t *)(render_system_data_memory + 0x2018);
  local_var_18._0_2_ = CONCAT11(param_2,param_1);
  local_var_18 = CONCAT13(param_4,CONCAT12(param_3,(int16_t)local_var_18));
  local_var_14 = CONCAT11(param_6,param_5);
  if ((*(int *)(lVar1 + 799) != local_var_18) || (*(short *)(lVar1 + 0x323) != local_var_14)) {
    *(int *)(lVar1 + 799) = local_var_18;
    *(short *)(lVar1 + 0x323) = local_var_14;
    *(int16_t *)(lVar1 + 0x194) = 0;
    if (((param_1 == '\0') && (((param_2 == '\0' && (param_3 == '\0')) && (param_4 == '\0')))) &&
       ((param_5 == '\0' && (param_6 == '\0')))) {
      *(int8_t *)(lVar1 + 0x192) = 0;
      return;
    }
    *(int8_t *)(lVar1 + 0x192) = 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_44e90(float param_1,float param_2,float param_3)
void UISystem_44e90(float param_1,float param_2,float param_3)
{
  float fVar1;
  int8_t stack_special_x_8;
  int8_t stack_special_x_9;
  int8_t stack_special_x_a;
  if (0.0 <= param_1) {
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar1 = 0.0;
  if ((0.0 <= param_3) && (fVar1 = param_3, 1.0 <= param_3)) {
    fVar1 = 1.0;
  }
  stack_special_x_8 = (int8_t)(int)(param_1 * 256.0);
  stack_special_x_9 = (int8_t)(int)(param_2 * 256.0);
  stack_special_x_a = (int8_t)(int)(fVar1 * 256.0);
  NetworkProtocol_eea10(*(int32_t *)(*(int64_t *)(render_system_data_memory + 0x2018) + 0x32c),&stack_special_x_8);
  return;
}
uint64_t UISystem_45060(uint64_t param_1)
{
  short sVar1;
  uint uVar2;
  uVar2 = (uint)param_1;
  if (uVar2 < 0x100) {
    if (uVar2 - 0xe0 < 5) {
      if (uVar2 == 0xe0) {
        param_1 = 1;
      }
      else if (uVar2 == 0xe1) {
        param_1 = 2;
      }
      else if (uVar2 == 0xe2) {
        param_1 = 4;
      }
      else if (uVar2 == 0xe3) {
        param_1 = 5;
      }
      else if (uVar2 == 0xe4) {
        param_1 = 6;
      }
    }
    else {
      uVar2 = RenderingSystem_f5970(param_1,param_1 & 0xffffffff);
      param_1 = (uint64_t)uVar2;
    }
    sVar1 = GetAsyncKeyState(param_1);
    if (sVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
// 函数: void UISystem_45110(uint param_1)
void UISystem_45110(uint param_1)
{
  int32_t local_var_18;
  int8_t local_var_14;
  uint64_t local_var_10;
  if (param_1 < 0x100) {
    local_var_10 = 0;
    local_var_18 = 4;
    local_var_14 = (int8_t)param_1;
    CoreEngine_MemoryManager(param_1,&local_var_18);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
UISystem_45180(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  lStack_28 = 0;
  local_var_20 = 0;
  GenericFunction_1801717e0(*(uint64_t *)(system_main_module_state + 8),&plocal_var_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x78))(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * UISystem_45390(int32_t *param_1,float param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_24;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x468,8,3,0xfffffffffffffffe);
  plVar4 = (int64_t *)RenderingSystem_dd0f0(uVar3);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  if (param_2 != *(float *)(plVar4 + 6)) {
    *(int8_t *)(plVar4 + 0x7d) = 0;
    *(int8_t *)((int64_t)plVar4 + 0x3a1) = 1;
    *(float *)(plVar4 + 6) = param_2;
    lVar1 = plVar4[5];
    if (lVar1 != 0) {
      *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
      if (*(int64_t *)(lVar1 + 0x168) != 0) {
        Function_bcb0dca9();
      }
    }
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  local_var_30 = SUB84(plVar4,0);
  local_var_2c = (int32_t)((uint64_t)plVar4 >> 0x20);
  *param_1 = local_var_30;
  param_1[1] = local_var_2c;
  param_1[2] = uVar2;
  param_1[3] = local_var_24;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}
// 函数: void UISystem_45480(uint64_t *param_1,uint64_t *param_2)
void UISystem_45480(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  if ((void *)*param_1 == &processed_var_6656_ptr) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))();
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  return;
}
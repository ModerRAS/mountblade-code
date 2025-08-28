// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
// 99_part_06_part077.c - 17 个函数
// 函数: void function_3f3dd0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void function_3f3dd0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t *param_5)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int8_t stack_array_128 [32];
  uint64_t local_var_108;
  int64_t *plStack_100;
  int32_t *plocal_var_f8;
  uint64_t *plocal_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int8_t stack_array_b8 [16];
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t *plocal_var_88;
  uint64_t *plocal_var_80;
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [16];
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  uint64_t *plocal_var_40;
  uint64_t local_var_38;
  local_var_98 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  local_var_90 = param_1;
  plocal_var_88 = param_3;
  plocal_var_40 = param_2;
  function_3f2eb0();
  local_var_c8 = *param_3;
  local_var_c0 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plocal_var_80 = &local_var_108;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  plocal_var_78 = &local_var_e8;
  plocal_var_f0 = &local_var_c8;
  local_var_108 = 0;
  plStack_100 = (int64_t *)0x0;
  plocal_var_f8 = &local_var_60;
  local_var_e8._0_4_ = (int32_t)uVar5;
  local_var_e8._4_4_ = (int32_t)(uVar5 >> 0x20);
  local_var_e0._0_4_ = (int32_t)uVar6;
  local_var_e0._4_4_ = (int32_t)(uVar6 >> 0x20);
  local_var_60 = (int32_t)local_var_e8;
  local_var_5c = local_var_e8._4_4_;
  local_var_58 = (int32_t)local_var_e0;
  local_var_54 = local_var_e0._4_4_;
  local_var_d8._0_4_ = (int32_t)uVar7;
  local_var_d8._4_4_ = (int32_t)(uVar7 >> 0x20);
  local_var_d0._0_4_ = (int32_t)uVar8;
  local_var_d0._4_4_ = (int32_t)(uVar8 >> 0x20);
  local_var_50 = (int32_t)local_var_d8;
  local_var_4c = local_var_d8._4_4_;
  local_var_48 = (int32_t)local_var_d0;
  local_var_44 = local_var_d0._4_4_;
  local_var_d8 = 0;
  local_var_d0 = 0xf;
  local_var_e8 = uVar5 & 0xffffffffffffff00;
  local_var_e0 = uVar6;
  function_4726c0(param_1,&local_var_60,&local_var_c8);
  plocal_var_f0 = (uint64_t *)stack_array_70;
  uVar10 = function_472360(stack_array_70,*param_5);
  plocal_var_f8 = (int32_t *)stack_array_b8;
  local_var_a8 = 0;
  local_var_a0 = 0xf;
  stack_array_b8[0] = 0;
  MathCoreCalculator0(stack_array_b8,&ui_system_data_1024_ptr,0x11);
  function_4726c0(param_1,stack_array_b8,uVar10);
  SystemResourceAllocator(&local_var_e8);
  plVar4 = plStack_100;
  if (plStack_100 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_2);
  plVar4 = (int64_t *)param_3[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3f3fe0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void function_3f3fe0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int8_t stack_array_188 [32];
  int32_t *plocal_var_168;
  uint64_t local_var_158;
  int64_t *plStack_150;
  uint64_t *plocal_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int8_t stack_array_108 [16];
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_d8;
  uint64_t *plocal_var_c8;
  uint64_t *plocal_var_c0;
  uint64_t *plocal_var_b8;
  int8_t stack_array_b0 [16];
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int8_t stack_array_80 [64];
  uint64_t *plocal_var_40;
  uint64_t local_var_38;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  local_var_d8 = param_1;
  plocal_var_c8 = param_3;
  plocal_var_40 = param_2;
  function_3f2eb0();
  local_var_118 = *param_3;
  local_var_110 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plocal_var_c0 = &local_var_158;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  plocal_var_b8 = &local_var_140;
  plocal_var_148 = &local_var_118;
  local_var_158 = 0;
  plStack_150 = (int64_t *)0x0;
  plocal_var_168 = &local_var_a0;
  local_var_140._0_4_ = (int32_t)uVar5;
  local_var_140._4_4_ = (int32_t)(uVar5 >> 0x20);
  local_var_138._0_4_ = (int32_t)uVar6;
  local_var_138._4_4_ = (int32_t)(uVar6 >> 0x20);
  local_var_a0 = (int32_t)local_var_140;
  local_var_9c = local_var_140._4_4_;
  local_var_98 = (int32_t)local_var_138;
  local_var_94 = local_var_138._4_4_;
  local_var_130._0_4_ = (int32_t)uVar7;
  local_var_130._4_4_ = (int32_t)(uVar7 >> 0x20);
  local_var_128._0_4_ = (int32_t)uVar8;
  local_var_128._4_4_ = (int32_t)(uVar8 >> 0x20);
  local_var_90 = (int32_t)local_var_130;
  local_var_8c = local_var_130._4_4_;
  local_var_88 = (int32_t)local_var_128;
  local_var_84 = local_var_128._4_4_;
  local_var_130 = 0;
  local_var_128 = 0xf;
  local_var_140 = uVar5 & 0xffffffffffffff00;
  local_var_138 = uVar6;
  function_4726c0(param_1,&local_var_a0,&local_var_118);
  plocal_var_148 = (uint64_t *)stack_array_b0;
  plocal_var_168 = (int32_t *)stack_array_80;
  function_3f4bd0(stack_array_80,param_5);
  uVar10 = function_4724f0(stack_array_b0,stack_array_80);
  plocal_var_168 = (int32_t *)stack_array_108;
  local_var_f8 = 0;
  local_var_f0 = 0xf;
  stack_array_108[0] = 0;
  MathCoreCalculator0(stack_array_108,&processed_var_924_ptr,5);
  function_4726c0(param_1,stack_array_108,uVar10);
  SystemResourceAllocator(&local_var_140);
  plVar4 = plStack_150;
  if (plStack_150 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_2);
  plVar4 = (int64_t *)param_3[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_3f4210(uint64_t *param_1,uint64_t *param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  int32_t local_var_30;
  local_var_58 = *param_2;
  *param_2 = 0;
  local_var_50 = param_2[1];
  param_2[1] = 0;
  local_var_48 = param_2[2];
  param_2[2] = 0;
  local_var_40 = *(int32_t *)(param_2 + 3);
  *(int32_t *)(param_2 + 3) = *(int32_t *)(param_2 + 3);
  local_var_38 = param_2[4];
  local_var_30 = *(int32_t *)(param_2 + 5);
  param_1[2] = function_3f4dc0;
  param_1[3] = function_3f4d50;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(int32_t *)(puVar5 + 3) = local_var_40;
  uVar2 = *puVar5;
  *puVar5 = local_var_58;
  uVar3 = puVar5[1];
  puVar5[1] = local_var_50;
  uVar4 = puVar5[2];
  puVar5[2] = local_var_48;
  uVar1 = *(int32_t *)(puVar5 + 3);
  *(int32_t *)(puVar5 + 3) = local_var_40;
  puVar5[4] = local_var_38;
  *(int32_t *)(puVar5 + 5) = local_var_30;
  *param_1 = puVar5;
  local_var_58 = uVar2;
  local_var_50 = uVar3;
  local_var_48 = uVar4;
  local_var_40 = uVar1;
  DataSerializationEngine(&local_var_58);
  DataSerializationEngine(param_2);
  return param_1;
}
// 函数: void function_3f4370(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_3f4370(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  cVar1 = function_3f3350(param_1,param_3 - param_2 >> 5);
  if (cVar1 != '\0') {
    lVar2 = *param_1;
    for (; lVar3 = lVar2, param_2 != param_3; param_2 = param_2 + 0x20) {
      function_18b350(lVar2,param_2);
      lVar2 = lVar2 + 0x20;
    }
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
      SystemResourceAllocator(lVar3);
    }
    param_1[1] = lVar2;
  }
  return;
}
// 函数: void function_3f4430(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void function_3f4430(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar4 = 0;
  uVar5 = (uint64_t)((int64_t)param_2 + (7 - (int64_t)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    if (1 < uVar5) {
      uVar1 = *param_3;
      if ((param_3 < param_1) || (param_1 + (uVar5 - 1) < param_3)) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != (uVar5 & 0xfffffffffffffffe));
        puVar3 = param_1;
        for (uVar2 = uVar5 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + (uVar5 & 0xfffffffffffffffe);
      }
    }
    for (; uVar4 != uVar5; uVar4 = uVar4 + 1) {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    }
  }
  return;
}
// 函数: void function_3f4472(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4)
void function_3f4472(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t in_RAX;
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *in_R10;
  uint64_t in_R11;
  do {
    param_4 = param_4 + 2;
  } while (param_4 != (param_2 & 0xfffffffffffffffe));
  puVar2 = in_R10;
  for (uVar1 = param_2 & 0x1ffffffffffffffe; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = in_RAX;
    puVar2 = puVar2 + 1;
  }
  puVar2 = in_R10 + (param_2 & 0xfffffffffffffffe);
  for (; param_4 != in_R11; param_4 = param_4 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return;
}
// 函数: void function_3f44a5(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4)
void function_3f44a5(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4)
{
  uint64_t *in_R10;
  int64_t in_R11;
  if (param_4 != in_R11) {
    do {
      param_4 = param_4 + 1;
      *in_R10 = *param_3;
      in_R10 = in_R10 + 1;
    } while (param_4 != in_R11);
  }
  return;
}
// 函数: void function_3f44d0(int32_t *param_1,int32_t *param_2)
void function_3f44d0(int32_t *param_1,int32_t *param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t stack_special_x_10;
  int8_t stack_array_40 [24];
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  function_3f33b0(param_1 + 2);
  *param_1 = *param_2;
  stack_special_x_10 = *(uint64_t *)(param_1 + 2);
  function_3f3510(param_1 + 6,*(int64_t *)(param_2 + 8) - *(int64_t *)(param_2 + 6) >> 3,&stack_special_x_10
               );
  puVar1 = *(uint64_t **)(param_2 + 2);
  for (puVar6 = (uint64_t *)*puVar1; puVar6 != puVar1; puVar6 = (uint64_t *)*puVar6) {
    lVar2 = **(int64_t **)(param_1 + 2);
    puVar3 = *(uint64_t **)(lVar2 + 8);
    uVar4 = function_3f5220();
    lVar5 = *(int64_t *)(param_1 + 4);
    if (lVar5 == 0x3fffffffffffffe) {
      lVar5 = __Xlength_error_std__YAXPEBD_Z(&rendering_buffer_2104_ptr);
    }
    *(int64_t *)(param_1 + 4) = lVar5 + 1;
    *(uint64_t *)(lVar2 + 8) = uVar4;
    *puVar3 = uVar4;
    function_3f4f30(param_1,stack_array_40,**(int64_t **)(param_1 + 2) + 0x10);
  }
  return;
}
// 函数: void function_3f45e0(uint64_t *param_1,uint64_t param_2)
void function_3f45e0(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uVar2 = param_1[2];
  if (uVar2 <= param_2) {
    uVar3 = param_1[3];
    if (uVar3 != param_2) {
      if (uVar3 < param_2) {
        if (0x7fffffffffffffff - uVar2 < param_2 - uVar2) {
          function_0670f0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = param_2 | 0xf;
        uVar7 = 0x7fffffffffffffff;
        if (((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
           (uVar1 = (uVar3 >> 1) + uVar3, uVar7 = uVar6, uVar6 < uVar1)) {
          uVar7 = uVar1;
        }
        uVar5 = SystemCore_SyscallHandler(uVar7 + 1);
        param_1[2] = param_2;
        param_1[3] = uVar7;
        if (uVar3 < 0x10) {
// WARNING: Subroutine does not return
          memcpy(uVar5,param_1,uVar2 + 1);
        }
// WARNING: Subroutine does not return
        memcpy(uVar5,*param_1,uVar2 + 1);
      }
      if ((param_2 < 0x10) && (0xf < uVar3)) {
// WARNING: Subroutine does not return
        memcpy(param_1,*param_1,uVar2 + 1);
      }
    }
  }
  return;
}
// 函数: void function_3f45fc(uint64_t *param_1,uint64_t param_2)
void function_3f45fc(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t *unaff_RBX;
  uint64_t uVar5;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  uVar2 = param_1[3];
  if (uVar2 != param_2) {
    if (uVar2 < param_2) {
      if (0x7fffffffffffffffU - unaff_R14 < param_2 - unaff_R14) {
        function_0670f0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2 = param_2 | 0xf;
      uVar5 = 0x7fffffffffffffff;
      if (((param_2 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
         (uVar1 = (uVar2 >> 1) + uVar2, uVar5 = param_2, param_2 < uVar1)) {
        uVar5 = uVar1;
      }
      uVar4 = SystemCore_SyscallHandler(uVar5 + 1);
      unaff_RBX[2] = unaff_RDI;
      unaff_RBX[3] = uVar5;
      if (uVar2 < 0x10) {
// WARNING: Subroutine does not return
        memcpy(uVar4);
      }
// WARNING: Subroutine does not return
      memcpy(uVar4,*unaff_RBX,unaff_R14 + 1);
    }
    if ((unaff_RDI < 0x10) && (0xf < uVar2)) {
// WARNING: Subroutine does not return
      memcpy(param_1,*param_1,unaff_R14 + 1);
    }
  }
  return;
}
// 函数: void function_3f460e(uint64_t *param_1,uint64_t param_2)
void function_3f460e(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  bool in_CF;
  if (!in_CF) {
    if ((unaff_RDI < 0x10) && (0xf < unaff_RSI)) {
// WARNING: Subroutine does not return
      memcpy(param_1,*param_1,unaff_R14 + 1);
    }
    return;
  }
  if (0x7fffffffffffffffU - unaff_R14 < param_2 - unaff_R14) {
    function_0670f0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_2 = param_2 | 0xf;
  uVar4 = 0x7fffffffffffffff;
  if (((param_2 < 0x8000000000000000) && (unaff_RSI <= 0x7fffffffffffffff - (unaff_RSI >> 1))) &&
     (uVar1 = (unaff_RSI >> 1) + unaff_RSI, uVar4 = param_2, param_2 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar3 = SystemCore_SyscallHandler(uVar4 + 1);
  unaff_RBX[2] = unaff_RDI;
  unaff_RBX[3] = uVar4;
  if (0xf < unaff_RSI) {
// WARNING: Subroutine does not return
    memcpy(uVar3,*unaff_RBX,unaff_R14 + 1);
  }
// WARNING: Subroutine does not return
  memcpy(uVar3);
}
// 函数: void function_3f473c(void)
void function_3f473c(void)
{
  return;
}
// 函数: void function_3f4741(void)
void function_3f4741(void)
{
  return;
}
// 函数: void function_3f474a(void)
void function_3f474a(void)
{
// WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}
// 函数: void function_3f4760(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3f4760(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  function_3f33b0(param_1 + 8);
  function_3f3480(param_1,8,param_3,param_4,uVar1);
  return;
}
int64_t * function_3f4790(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t *plStack_30;
  char cStack_28;
  uVar6 = 0;
  uVar4 = *(uint64_t *)((int64_t)*(int *)(*param_1 + 4) + 0x28 + (int64_t)param_1);
  if (((int64_t)uVar4 < 1) || (uVar4 <= param_3)) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar4 - param_3;
  }
  function_0a1010(&plStack_30,param_1,param_3,(int64_t)*(int *)(*param_1 + 4),0);
  if (cStack_28 == '\0') {
    uVar6 = 4;
  }
  else {
    lVar5 = *param_1;
    if ((*(uint *)((int64_t)*(int *)(lVar5 + 4) + 0x18 + (int64_t)param_1) & 0x1c0) != 0x40) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(uint64_t *)
                            ((int64_t)*(int *)(*param_1 + 4) + 0x48 + (int64_t)param_1),
                           *(int8_t *)
                            ((int64_t)*(int *)(*param_1 + 4) + 0x58 + (int64_t)param_1));
        if (iVar3 == -1) {
          uVar6 = 4;
          goto LAB_1803f4840;
        }
      }
      lVar5 = *param_1;
    }
    uVar4 = _sputn___basic_streambuf_DU__char_traits_D_std___std__QEAA_JPEBD_J_Z
                      (*(uint64_t *)((int64_t)*(int *)(lVar5 + 4) + 0x48 + (int64_t)param_1),
                       param_2,param_3);
    if (uVar4 == param_3) {
LAB_1803f4840:
      do {
        if (lVar7 == 0) goto LAB_1803f4868;
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(uint64_t *)
                            ((int64_t)*(int *)(*param_1 + 4) + 0x48 + (int64_t)param_1),
                           *(int8_t *)
                            ((int64_t)*(int *)(*param_1 + 4) + 0x58 + (int64_t)param_1));
        if (iVar3 == -1) break;
        lVar7 = lVar7 + -1;
      } while( true );
    }
    uVar6 = 4;
LAB_1803f4868:
    *(uint64_t *)((int64_t)*(int *)(*param_1 + 4) + 0x28 + (int64_t)param_1) = 0;
  }
  _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            ((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,uVar6,0);
  cVar2 = _uncaught_exception_std__YA_NXZ();
  if (cVar2 == '\0') {
    __Osfx___basic_ostream_DU__char_traits_D_std___std__QEAAXXZ(plStack_30);
  }
  plVar1 = *(int64_t **)((int64_t)*(int *)(*plStack_30 + 4) + 0x48 + (int64_t)plStack_30);
  if (plVar1 != (int64_t *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == (code *)&ui_system_data_1712_ptr) {
      if (plVar1[0x10] != 0) {
        _unlock_file();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3f4950(uint64_t param_1,int32_t *param_2,uint64_t *param_3,int64_t param_4,
void function_3f4950(uint64_t param_1,int32_t *param_2,uint64_t *param_3,int64_t param_4,
                  uint64_t *param_5,int64_t param_6,int8_t *param_7)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int8_t stack_array_178 [32];
  uint *plocal_var_158;
  uint *plocal_var_150;
  uint local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int8_t *plocal_var_128;
  uint64_t *plocal_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [16];
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t *plocal_var_d0;
  uint *plocal_var_c8;
  int8_t stack_array_c0 [16];
  int8_t stack_array_b0 [16];
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  uint local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t *plocal_var_60;
  uint64_t local_var_58;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plocal_var_128 = param_7;
  plocal_var_120 = &local_var_118;
  local_var_118 = *param_3;
  local_var_110 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plocal_var_158 = &local_var_a0;
  local_var_a0 = *param_2;
  local_var_9c = param_2[1];
  local_var_98 = param_2[2];
  local_var_94 = param_2[3];
  local_var_90 = param_2[4];
  local_var_8c = param_2[5];
  local_var_88 = param_2[6];
  local_var_84 = param_2[7];
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 6) = 0xf;
  *(int8_t *)param_2 = 0;
  plocal_var_d0 = param_3;
  plocal_var_60 = param_2;
  function_4726c0(local_var_a0,&local_var_a0,&local_var_118);
  plocal_var_158 = (uint *)stack_array_c0;
  puVar5 = (uint64_t *)function_472360(stack_array_c0,*param_5);
  plocal_var_150 = &local_var_148;
  local_var_138 = 0;
  local_var_130 = 0xf;
  local_var_148 = local_var_148 & 0xffffff00;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_4 + lVar7) != '\0');
  plocal_var_120 = puVar5;
  MathCoreCalculator0(&local_var_148,param_4);
  plocal_var_c8 = &local_var_148;
  plocal_var_150 = (uint *)&local_var_108;
  local_var_108 = *puVar5;
  local_var_100 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  plocal_var_158 = &local_var_80;
  local_var_80 = local_var_148;
  local_var_7c = local_var_144;
  local_var_78 = local_var_140;
  local_var_74 = local_var_13c;
  local_var_70 = (int32_t)local_var_138;
  local_var_6c = local_var_138._4_4_;
  local_var_68 = (int32_t)local_var_130;
  local_var_64 = local_var_130._4_4_;
  local_var_138 = 0;
  local_var_130 = 0xf;
  local_var_148 = local_var_148 & 0xffffff00;
  function_4726c0(param_1,&local_var_80,&local_var_108);
  plocal_var_150 = (uint *)stack_array_b0;
  uVar6 = function_4721d0(stack_array_b0,*plocal_var_128);
  plocal_var_158 = (uint *)stack_array_f8;
  local_var_e8 = 0;
  local_var_e0 = 0xf;
  stack_array_f8[0] = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_6 + lVar7) != '\0');
  MathCoreCalculator0(stack_array_f8,param_6);
  function_4726c0(param_1,stack_array_f8,uVar6);
  SystemResourceAllocator(&local_var_148);
  plVar4 = (int64_t *)puVar5[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_2);
  plVar4 = (int64_t *)param_3[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_178);
}
int32_t *
function_3f4bd0(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  *param_1 = *param_2;
  puVar1 = (uint64_t *)(param_1 + 2);
  *puVar1 = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  uVar2 = function_3f4cb0(param_1,0,0,param_4,0xfffffffffffffffe);
  *puVar1 = uVar2;
  uVar2 = *puVar1;
  *puVar1 = *(uint64_t *)(param_2 + 2);
  *(uint64_t *)(param_2 + 2) = uVar2;
  uVar2 = *(uint64_t *)(param_1 + 4);
  *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_2 + 4) = uVar2;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 6) = *(uint64_t *)(param_2 + 6);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)(param_1 + 10) = *(uint64_t *)(param_2 + 10);
  *(uint64_t *)(param_2 + 6) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  function_3f33b0(param_2 + 2);
  function_3f3480(param_2,8);
  return param_1;
}
// 函数: void function_3f4cb0(uint64_t param_1,int64_t *param_2,int64_t *param_3)
void function_3f4cb0(uint64_t param_1,int64_t *param_2,int64_t *param_3)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)SystemCore_SyscallHandler(0x40);
  if (param_2 == (int64_t *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (int64_t)param_2;
  plVar1[1] = (int64_t)param_3;
  return;
}
// 函数: void function_3f4d10(int64_t *param_1)
void function_3f4d10(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    SystemResourceAllocator(lVar2);
  }
  return;
}
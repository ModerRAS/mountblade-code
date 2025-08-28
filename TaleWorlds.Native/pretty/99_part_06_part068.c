/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part068.c - 13 个函数
// 函数: void RenderingSystem_e8150(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,int *param_5)
void RenderingSystem_e8150(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,int *param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x20) <= *param_5) {
      if (*param_5 <= *(int *)(param_3 + 0x20)) {
        if ((param_5[1] < *(int *)(param_3 + 0x24)) ||
           ((param_5[1] <= *(int *)(param_3 + 0x24) && (param_5[2] < *(int *)(param_3 + 0x28)))))
        goto LAB_1803e81a6;
      }
      uVar2 = 1;
      goto LAB_1803e81a9;
    }
  }
LAB_1803e81a6:
  uVar2 = 0;
LAB_1803e81a9:
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *(uint64_t *)param_5;
  *(int *)(lVar1 + 0x28) = param_5[2];
  *(uint64_t *)(lVar1 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar1,param_3,param_1,uVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t RenderingSystem_e8220(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c07040;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,system_allocation_flags,0xfffffffffffffffe);
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
uint64_t * RenderingSystem_e8310(uint64_t *param_1,int8_t *param_2,uint *param_3)
{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  bVar3 = true;
  puVar5 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    uVar1 = *param_3;
    puVar4 = (uint64_t *)param_1[2];
    do {
      puVar5 = puVar4;
      uVar2 = *(uint *)(puVar5 + 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 <= uVar2 && ((int)param_3[1] < *(int *)((int64_t)puVar5 + 0x24))))) {
LAB_1803e8397:
        puVar4 = (uint64_t *)puVar5[1];
        bVar3 = true;
      }
      else {
        if (uVar1 <= uVar2) {
          if (((int)param_3[1] <= *(int *)((int64_t)puVar5 + 0x24)) &&
             ((int)param_3[2] < *(int *)(puVar5 + 5))) goto LAB_1803e8397;
          if (uVar1 <= uVar2) {
            if (((int)param_3[1] <= *(int *)((int64_t)puVar5 + 0x24)) &&
               ((((int)param_3[1] < *(int *)((int64_t)puVar5 + 0x24) ||
                 ((int)param_3[2] <= *(int *)(puVar5 + 5))) &&
                ((int)param_3[3] < *(int *)((int64_t)puVar5 + 0x2c))))) goto LAB_1803e8397;
          }
        }
        puVar4 = (uint64_t *)*puVar5;
        bVar3 = false;
      }
    } while (puVar4 != (uint64_t *)0x0);
  }
  puVar4 = puVar5;
  if (bVar3) {
    if (puVar5 == (uint64_t *)param_1[1]) {
      *param_2 = 1;
      return puVar5;
    }
    puVar4 = (uint64_t *)SystemFunction_00018066b9a0(puVar5);
  }
  uVar1 = *(uint *)(puVar4 + 4);
  uVar2 = *param_3;
  if ((uVar2 <= uVar1) &&
     ((uVar2 < uVar1 || ((int)param_3[1] <= *(int *)((int64_t)puVar4 + 0x24))))) {
    if ((uVar2 < uVar1) ||
       (((uVar2 <= uVar1 && ((int)param_3[1] < *(int *)((int64_t)puVar4 + 0x24))) ||
        ((int)param_3[2] <= *(int *)(puVar4 + 5))))) {
      if (uVar1 <= uVar2) {
        if ((*(int *)((int64_t)puVar4 + 0x24) <= (int)param_3[1]) &&
           (((*(int *)((int64_t)puVar4 + 0x24) < (int)param_3[1] ||
             (*(int *)(puVar4 + 5) <= (int)param_3[2])) &&
            (*(int *)((int64_t)puVar4 + 0x2c) < (int)param_3[3])))) goto LAB_1803e8434;
      }
      *param_2 = 0;
      return puVar4;
    }
  }
LAB_1803e8434:
  *param_2 = 1;
  return puVar5;
}
// 函数: void RenderingSystem_e8450(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_e8450(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = (*(int64_t *)(param_1 + 0x28) - lVar2 >> 3) * 8;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar2 - lVar3,uVar1 + 0x27,lVar3,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar3);
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  RenderingSystem_f33b0((uint64_t *)(param_1 + 8));
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(*(uint64_t *)(param_1 + 8),0x40);
  return;
}
// 函数: void RenderingSystem_e8470(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_e8470(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = (*(int64_t *)(param_1 + 0x28) - lVar2 >> 3) * 8;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar2 - lVar3,uVar1 + 0x27,lVar3,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar3);
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  RenderingSystem_f33b0((uint64_t *)(param_1 + 8));
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(*(uint64_t *)(param_1 + 8),0x40);
  return;
}
// WARNING: Removing unreachable block (ram,0x0001803e8733)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e8510(uint64_t param_1,int32_t param_2,uint64_t *param_3,uint64_t param_4,
void RenderingSystem_e8510(uint64_t param_1,int32_t param_2,uint64_t *param_3,uint64_t param_4,
                  int64_t param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t ****ppppuVar4;
  int8_t *puVar5;
  int8_t stack_array_158 [32];
  uint64_t local_var_138;
  int *piStack_130;
  uint64_t local_var_118;
  int8_t local_var_110;
  uint8_t local_var_10f;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int aiStack_f0 [2];
  int8_t stack_array_e8 [16];
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  char acStack_c8 [8];
  uint64_t ***appplocal_var_c0 [3];
  uint64_t local_var_a8;
  char acStack_98 [8];
  int8_t stack_array_90 [88];
  uint64_t local_var_38;
  local_var_118 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  aiStack_f0[0] = 0;
  local_var_d8 = 0;
  local_var_d0 = 0xf;
  stack_array_e8[0] = 0;
  local_var_138 = UISystem_76dc0(&local_var_110,param_4);
  piStack_130 = aiStack_f0;
  UISystem_7a040(param_1,acStack_c8,param_3,param_2);
  if (0xf < local_var_f8) {
    uVar3 = local_var_f8 + 1;
    lVar1 = CONCAT71(local_var_10f,local_var_110);
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = local_var_f8 + 0x28;
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar2,uVar3);
  }
  local_var_100 = 0;
  local_var_f8 = 0xf;
  local_var_110 = 0;
  if (acStack_c8[0] != '\0') {
    ppppuVar4 = appplocal_var_c0;
    if (0xf < local_var_a8) {
      ppppuVar4 = (uint64_t ****)appplocal_var_c0[0];
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9752_ptr,ppppuVar4);
  }
  if (aiStack_f0[0] != 200) {
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9784_ptr,param_3);
  }
  if ((param_5 != 0) && (UISystem_76690(acStack_98,stack_array_e8,param_5), acStack_98[0] != '\0')) {
    GenericFunction_18018b350(&local_var_110,stack_array_90);
    puVar5 = &local_var_110;
    if (0xf < local_var_f8) {
      puVar5 = (int8_t *)CONCAT71(local_var_10f,local_var_110);
    }
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9832_ptr,param_3,puVar5);
  }
  if (acStack_c8[0] != '\0') {
    SystemResourceAllocator(appplocal_var_c0);
  }
  SystemResourceAllocator(stack_array_e8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_158);
}
// 函数: void RenderingSystem_e8790(int64_t param_1)
void RenderingSystem_e8790(int64_t param_1)
{
  SystemResourceAllocator(param_1 + 8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e87c0(uint64_t *param_1,int64_t *param_2)
void RenderingSystem_e87c0(uint64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int8_t stack_array_1b8 [32];
  int16_t stack_array_198 [2];
  int32_t local_var_194;
  int8_t *plocal_var_190;
  uint64_t local_var_188;
  int iStack_180;
  int32_t local_var_17c;
  uint64_t local_var_178;
  int iStack_16c;
  void *aplocal_var_168 [2];
  int8_t stack_array_158 [8];
  int8_t stack_array_150 [152];
  int8_t stack_array_b8 [96];
  int iStack_58;
  int32_t local_var_54;
  int iStack_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_178 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  local_var_194 = 0;
  stack_array_198[0] = 0;
  while( true ) {
    puVar4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      puVar4 = (uint64_t *)*param_1;
    }
    aplocal_var_168[0] = &processed_var_7528_ptr;
    __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(stack_array_b8);
    local_var_194 = 1;
    __0__basic_istream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
              (aplocal_var_168,stack_array_158,0,0);
    *(void **)((int64_t)aplocal_var_168 + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         &processed_var_7544_ptr;
    *(int *)((int64_t)&iStack_16c + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         *(int *)(aplocal_var_168[0] + 4) + -0xb0;
    GenericFunction_18009ec20(stack_array_158);
    lVar1 = GenericFunction_1800c4800(stack_array_158,puVar4);
    if (lVar1 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((int64_t)aplocal_var_168 + (int64_t)*(int *)(aplocal_var_168[0] + 4),2);
    }
    *(void **)((int64_t)aplocal_var_168 + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         &processed_var_7544_ptr;
    *(int *)((int64_t)&iStack_16c + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         *(int *)(aplocal_var_168[0] + 4) + -0xb0;
    plVar2 = (int64_t *)
             __5__basic_istream_DU__char_traits_D_std___std__QEAAAEAV01_AEAG_Z
                       (aplocal_var_168,stack_array_198);
    if ((*(byte *)((int64_t)*(int *)(*plVar2 + 4) + 0x10 + (int64_t)plVar2) & 6) == 0) break;
    if (*(int *)(*param_2 + 0x38) == 1) {
      WaitForSingleObject(*(uint64_t *)(*param_2 + 0x40),0);
    }
    lVar1 = _Xtime_get_ticks();
    lVar3 = (lVar1 + 1000000) * 100;
    lVar1 = lVar3 / 1000000000;
    iStack_58 = (int)lVar1;
    iStack_180 = (int)lVar3 + iStack_58 * -1000000000;
    local_var_188._4_4_ = (int32_t)((uint64_t)lVar1 >> 0x20);
    local_var_54 = local_var_188._4_4_;
    local_var_4c = local_var_17c;
    local_var_188 = lVar1;
    iStack_50 = iStack_180;
    _Thrd_sleep(&iStack_58);
    *(void **)((int64_t)aplocal_var_168 + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         &processed_var_7544_ptr;
    *(int *)((int64_t)&iStack_16c + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
         *(int *)(aplocal_var_168[0] + 4) + -0xb0;
    plocal_var_190 = stack_array_b8;
    GenericFunction_18009fb60(stack_array_158);
    __1__basic_istream_DU__char_traits_D_std___std__UEAA_XZ(stack_array_150);
    __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(stack_array_b8);
  }
  *(void **)((int64_t)aplocal_var_168 + (int64_t)*(int *)(aplocal_var_168[0] + 4)) = &processed_var_7544_ptr
  ;
  *(int *)((int64_t)&iStack_16c + (int64_t)*(int *)(aplocal_var_168[0] + 4)) =
       *(int *)(aplocal_var_168[0] + 4) + -0xb0;
  plocal_var_190 = stack_array_b8;
  GenericFunction_18009fb60(stack_array_158);
  __1__basic_istream_DU__char_traits_D_std___std__UEAA_XZ(stack_array_150);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(stack_array_b8);
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  remove(param_1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1b8);
}
uint64_t *
RenderingSystem_e8a40(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  void *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  GenericFunction_1801def40();
  *param_1 = &rendering_buffer_2136_ptr;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(int32_t *)(param_1 + 0x37) = 3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 3;
  param_1[0x3c] = &system_state_ptr;
  param_1[0x3d] = 0;
  *(int32_t *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = &system_data_buffer_ptr;
  param_1[0x3f] = 0;
  param_1[0x3d] = 0;
  *(int32_t *)(param_1 + 0x3e) = 0;
  param_1[0x40] = &system_state_ptr;
  param_1[0x41] = 0;
  *(int32_t *)(param_1 + 0x42) = 0;
  param_1[0x40] = &rendering_buffer_2008_ptr;
  param_1[0x41] = param_1 + 0x43;
  *(int32_t *)(param_1 + 0x42) = 0;
  *(int8_t *)(param_1 + 0x43) = 0;
  param_1[99] = &system_state_ptr;
  param_1[100] = 0;
  *(int32_t *)(param_1 + 0x65) = 0;
  param_1[99] = &rendering_buffer_2008_ptr;
  param_1[100] = param_1 + 0x66;
  *(int32_t *)(param_1 + 0x65) = 0;
  *(int8_t *)(param_1 + 0x66) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0xf;
  *(int8_t *)(param_1 + 0x88) = 0;
  _Mtx_init_in_situ(param_1 + 0x8c,0x102);
  param_1[0x97] = 0;
  plVar1 = param_1 + 0x98;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[0x99] = 0;
  *(int32_t *)(param_1 + 0x9a) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  param_1[0x9b] = 0;
  param_1[0x99] = 0;
  *(int32_t *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = &system_state_ptr;
  param_1[0x9d] = 0;
  *(int32_t *)(param_1 + 0x9e) = 0;
  param_1[0x9c] = &system_data_buffer_ptr;
  param_1[0x9f] = 0;
  param_1[0x9d] = 0;
  *(int32_t *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = &system_state_ptr;
  param_1[0xa1] = 0;
  *(int32_t *)(param_1 + 0xa2) = 0;
  param_1[0xa0] = &system_data_buffer_ptr;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  *(int32_t *)(param_1 + 0xa2) = 0;
  _Mtx_init_in_situ(param_1 + 0xa4,0x102);
  LOCK();
  *(int32_t *)(param_1 + 0x86) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((int64_t)param_1 + 0x434) = 0;
  UNLOCK();
  *(int32_t *)(param_1 + 0x87) = 0;
  MathCoreCalculator0(param_1 + 0x88,&processed_var_9888_ptr,0x10,param_4,uVar3);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,puVar2);
  *(int8_t *)(param_1 + 0xaf) = 1;
  LOCK();
  *(int32_t *)(param_1 + 0xae) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((int64_t)param_1 + 0x574) = 0;
  UNLOCK();
  *(int32_t *)((int64_t)param_1 + 0x57c) = 0;
  return param_1;
}
uint64_t RenderingSystem_e8ca0(uint64_t param_1,uint64_t param_2)
{
  RenderingSystem_e8ce0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x580);
  }
  return param_1;
}
// 函数: void RenderingSystem_e8ce0(uint64_t *param_1)
void RenderingSystem_e8ce0(uint64_t *param_1)
{
  _Mtx_destroy_in_situ();
  param_1[0xa0] = &system_data_buffer_ptr;
  if (param_1[0xa1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xa1] = 0;
  *(int32_t *)(param_1 + 0xa3) = 0;
  param_1[0xa0] = &system_state_ptr;
  param_1[0x9c] = &system_data_buffer_ptr;
  if (param_1[0x9d] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x9d] = 0;
  *(int32_t *)(param_1 + 0x9f) = 0;
  param_1[0x9c] = &system_state_ptr;
  param_1[0x98] = &system_data_buffer_ptr;
  if (param_1[0x99] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x99] = 0;
  *(int32_t *)(param_1 + 0x9b) = 0;
  param_1[0x98] = &system_state_ptr;
  if ((int64_t *)param_1[0x97] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x97] + 0x38))();
  }
  _Mtx_destroy_in_situ();
  SystemResourceAllocator(param_1 + 0x88);
  param_1[99] = &system_state_ptr;
  param_1[0x40] = &system_state_ptr;
  param_1[0x3c] = &system_data_buffer_ptr;
  if (param_1[0x3d] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3d] = 0;
  *(int32_t *)(param_1 + 0x3f) = 0;
  param_1[0x3c] = &system_state_ptr;
  RenderingSystem_f3810();
  RenderingSystem_f3810();
  *param_1 = &memory_allocator_3768_ptr;
  GenericFunction_1801ebae0();
  _Mtx_destroy_in_situ();
  DataTransformer0();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  GenericFunction_18005d260(param_1 + 1,param_1[3]);
  return;
}
// 函数: void RenderingSystem_e8e60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_e8e60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x23) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e8e80(uint64_t *param_1)
void RenderingSystem_e8e80(uint64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  uint64_t stack_special_x_8;
  int64_t alStackX_10 [3];
  fVar7 = 0.0;
  cVar3 = *(char *)(param_1[0x18] + 0x58);
  while( true ) {
    if ((cVar3 == '\0') || (*(char *)(param_1 + 0x1a) != '\0')) goto RenderingSystem_e8f65;
    uVar2 = (uint64_t)stack_special_x_8 >> 0x20;
    stack_special_x_8 = (uint64_t *)CONCAT44((int)uVar2,5);
    cVar3 = RenderingSystem_ec310(param_1[0x19],&stack_special_x_8);
    if ((cVar3 == '\0') && (*(char *)(param_1 + 0x1a) == '\0')) break;
    lVar5 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(alStackX_10);
      lVar5 = alStackX_10[0];
    }
    fVar6 = (float)((double)(lVar5 - system_system_data_config) * system_system_data_config);
    if (5.0 < fVar6 - fVar7) {
      (**(code **)(*(int64_t *)param_1[0x19] + 0x50))();
      fVar7 = fVar6;
    }
    cVar3 = *(char *)(param_1[0x18] + 0x58);
  }
  system_system_data_config = (int32_t)stack_special_x_8;
  *(int8_t *)(system_main_module_state + 0x1ed) = 0;
RenderingSystem_e8f65:
  if ((void *)*param_1 == &rendering_buffer_2232_ptr) {
    LOCK();
    *(int8_t *)(param_1 + 2) = 1;
    UNLOCK();
    puVar1 = param_1 + 0xd;
    stack_special_x_8 = puVar1;
    iVar4 = _Mtx_lock(puVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    *(int8_t *)(param_1 + 0x17) = 1;
    iVar4 = _Cnd_broadcast(param_1 + 4);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    iVar4 = _Mtx_unlock(puVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    return;
  }
  (**(code **)((void *)*param_1 + 0x70))(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e8e90(void)
void RenderingSystem_e8e90(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  int64_t in_RAX;
  int64_t lVar5;
  uint64_t *unaff_RBX;
  float fVar6;
  float fVar7;
  uint64_t local_var_30;
  uint64_t local_var_40;
  int32_t local_buffer_50;
  int64_t local_buffer_58;
  fVar7 = 0.0;
  cVar3 = *(char *)(in_RAX + 0x58);
  while( true ) {
    if ((cVar3 == '\0') || (*(char *)(unaff_RBX + 0x1a) != '\0')) goto RenderingSystem_e8f65;
    uVar2 = (uint64_t)_local_buffer_50 >> 0x20;
    _local_buffer_50 = (uint64_t *)CONCAT44((int)uVar2,5);
    cVar3 = RenderingSystem_ec310(unaff_RBX[0x19],&local_buffer_00000050);
    if ((cVar3 == '\0') && (*(char *)(unaff_RBX + 0x1a) == '\0')) break;
    lVar5 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(&local_buffer_00000058);
      lVar5 = local_buffer_58;
    }
    fVar6 = (float)((double)(lVar5 - system_system_data_config) * system_system_data_config);
    if (5.0 < fVar6 - fVar7) {
      (**(code **)(*(int64_t *)unaff_RBX[0x19] + 0x50))();
      fVar7 = fVar6;
    }
    cVar3 = *(char *)(unaff_RBX[0x18] + 0x58);
  }
  system_system_data_config = local_buffer_50;
  *(int8_t *)(system_main_module_state + 0x1ed) = 0;
RenderingSystem_e8f65:
  if ((void *)*unaff_RBX == &rendering_buffer_2232_ptr) {
    LOCK();
    *(int8_t *)(unaff_RBX + 2) = 1;
    UNLOCK();
    local_var_30 = 0xfffffffffffffffe;
    local_buffer_58 = local_var_40;
    puVar1 = unaff_RBX + 0xd;
    _local_buffer_50 = puVar1;
    iVar4 = _Mtx_lock(puVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    *(int8_t *)(unaff_RBX + 0x17) = 1;
    iVar4 = _Cnd_broadcast(unaff_RBX + 4);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    iVar4 = _Mtx_unlock(puVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    return;
  }
  (**(code **)((void *)*unaff_RBX + 0x70))();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e8ea2(void)
void RenderingSystem_e8ea2(void)
{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *unaff_RBX;
  float fVar5;
  float unaff_XMM6_Da;
  uint64_t local_var_40;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int64_t local_buffer_58;
  do {
    if (*(char *)(unaff_RBX + 0x1a) != '\0') break;
    _local_buffer_50 = (uint64_t *)CONCAT44(local_buffer_54,5);
    cVar2 = RenderingSystem_ec310(unaff_RBX[0x19],&local_buffer_00000050);
    if ((cVar2 == '\0') && (*(char *)(unaff_RBX + 0x1a) == '\0')) {
      system_system_data_config = local_buffer_50;
      *(int8_t *)(system_main_module_state + 0x1ed) = 0;
      break;
    }
    lVar4 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(&local_buffer_00000058);
      lVar4 = local_buffer_58;
    }
    fVar5 = (float)((double)(lVar4 - system_system_data_config) * system_system_data_config);
    if (5.0 < fVar5 - unaff_XMM6_Da) {
      (**(code **)(*(int64_t *)unaff_RBX[0x19] + 0x50))();
      unaff_XMM6_Da = fVar5;
    }
  } while (*(char *)(unaff_RBX[0x18] + 0x58) != '\0');
  if ((void *)*unaff_RBX != &rendering_buffer_2232_ptr) {
    (**(code **)((void *)*unaff_RBX + 0x70))();
    return;
  }
  LOCK();
  *(int8_t *)(unaff_RBX + 2) = 1;
  UNLOCK();
  local_buffer_58 = local_var_40;
  puVar1 = unaff_RBX + 0xd;
  _local_buffer_50 = puVar1;
  iVar3 = _Mtx_lock(puVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  *(int8_t *)(unaff_RBX + 0x17) = 1;
  iVar3 = _Cnd_broadcast(unaff_RBX + 4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = _Mtx_unlock(puVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// 函数: void RenderingSystem_e8f65(void)
void RenderingSystem_e8f65(void)
{
  int iVar1;
  uint64_t *unaff_RBX;
  if ((void *)*unaff_RBX == &rendering_buffer_2232_ptr) {
    LOCK();
    *(int8_t *)(unaff_RBX + 2) = 1;
    UNLOCK();
    iVar1 = _Mtx_lock(unaff_RBX + 0xd);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    *(int8_t *)(unaff_RBX + 0x17) = 1;
    iVar1 = _Cnd_broadcast(unaff_RBX + 4);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_unlock(unaff_RBX + 0xd);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    return;
  }
  (**(code **)((void *)*unaff_RBX + 0x70))();
  return;
}
// 函数: void RenderingSystem_e8f7d(void)
void RenderingSystem_e8f7d(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBX;
  uint64_t local_var_30;
  uint64_t local_var_40;
  int64_t lStack0000000000000050;
  uint64_t local_buffer_58;
  LOCK();
  *(int8_t *)(unaff_RBX + 0x10) = 1;
  UNLOCK();
  local_var_30 = 0xfffffffffffffffe;
  local_buffer_58 = local_var_40;
  lVar1 = unaff_RBX + 0x68;
  lStack0000000000000050 = lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(unaff_RBX + 0xb8) = 1;
  iVar2 = _Cnd_broadcast(unaff_RBX + 0x20);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
uint64_t RenderingSystem_e8fa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
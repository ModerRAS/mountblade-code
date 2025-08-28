#include "TaleWorlds.Native.Split.h"
// 99_part_11_part018.c - 5 个函数
// 函数: void UtilitiesSystem_ed192(void)
void UtilitiesSystem_ed192(void)
{
  uint64_t *unaff_RBX;
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}
int64_t UtilitiesSystem_ed1c0(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  UtilitiesSystem_ed140();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}
uint64_t UtilitiesSystem_ed240(uint64_t param_1,int64_t param_2)
{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &rendering_buffer_2448_ptr + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&rendering_buffer_2396_ptr)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}
uint64_t *
UtilitiesSystem_ed330(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5,uint64_t param_6)
{
  uint64_t *puVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char acStackX_18 [8];
  uint64_t stack_special_x_20;
  uint64_t local_var_fffffffffffffef8;
  int64_t lStack_f8;
  uint64_t local_var_f0;
  uint64_t *plocal_var_e8;
  int64_t lStack_e0;
  uint64_t local_var_d8;
  uint64_t *plocal_var_d0;
  int64_t lStack_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t stack_array_98 [2];
  uint64_t **pplocal_var_88;
  uint64_t **pplocal_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int64_t *plStack_50;
  uint64_t local_var_48;
  int8_t local_var_40;
  char *pcStack_38;
  stack_special_x_20 = (**(code **)(*param_4 + 0x18))(param_4);
  puVar1 = (uint64_t *)CONCAT71(param_5._1_7_,(int8_t)param_5);
  plocal_var_d0 = &stack_special_x_20;
  lStack_c8 = 0;
  local_var_78 = *(int32_t *)puVar1;
  local_var_74 = *(int32_t *)((int64_t)puVar1 + 4);
  local_var_70 = *(int32_t *)(puVar1 + 1);
  local_var_6c = *(int32_t *)((int64_t)puVar1 + 0xc);
  plocal_var_e8 = &stack_special_x_20;
  local_var_c0 = 0;
  local_var_68 = puVar1[2];
  pplocal_var_88 = &plocal_var_d0;
  pplocal_var_80 = &plocal_var_e8;
  local_var_48 = param_6;
  pcStack_38 = acStackX_18;
  lStack_e0 = 0;
  local_var_d8 = 0;
  acStackX_18[0] = '\0';
  local_var_58 = 0;
  local_var_40 = 1;
  lStack_f8 = 0;
  local_var_f0 = 0;
  stack_array_98[0] = 0;
  local_var_60 = param_3;
  plStack_50 = param_4;
  UtilitiesSystem_c2950(&pplocal_var_88,stack_array_98,&lStack_f8);
  lVar5 = lStack_f8;
  if (acStackX_18[0] == '\0') {
    param_5._0_1_ = 0xb;
    uVar4 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                      ((int64_t *)*puVar1,stack_array_98[0],lStack_f8,local_var_f0 & 0xffff,
                       local_var_fffffffffffffef8 & 0xffffffffffffff00,&param_5);
    plVar3 = (int64_t *)(**(code **)(*param_4 + 0x18))(param_4);
    (**(code **)(*plVar3 + 0x10))(plVar3,stack_array_98[0]);
    local_var_b8 = (void *)*puVar1;
    local_var_b0 = puVar1[1];
    local_var_a8 = puVar1[2];
    cVar2 = UtilitiesSystem_ef9e0(&local_var_b8,param_3,uVar4,param_4,param_6);
    if (cVar2 == '\0') {
      local_var_b8 = &system_buffer_ptr;
      local_var_a8 = 0;
    }
    else {
      local_var_b8 = &processed_var_9312_ptr;
      local_var_a8 = uVar4;
    }
    local_var_b0._0_4_ = (int32_t)local_var_a8;
    local_var_b0._4_4_ = (int32_t)((uint64_t)local_var_a8 >> 0x20);
    *(int32_t *)param_2 = (int32_t)local_var_b8;
    *(int32_t *)((int64_t)param_2 + 4) = local_var_b8._4_4_;
    *(int32_t *)(param_2 + 1) = (int32_t)local_var_b0;
    *(int32_t *)((int64_t)param_2 + 0xc) = local_var_b0._4_4_;
    param_2[2] = local_var_a8;
    local_var_b0 = local_var_a8;
    if ((((local_var_f0 & 0x7fffffff00000000) == 0) || ((int64_t)local_var_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    lVar5 = lStack_f8;
  }
  else {
    param_2[1] = 0;
    *param_2 = &system_buffer_ptr;
    param_2[2] = 0;
    if ((((local_var_f0 & 0x7fffffff00000000) == 0) || ((int64_t)local_var_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar5);
LAB_1806ed532:
  if ((((local_var_d8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_d8)) && (lStack_e0 != 0)) {
    (**(code **)(*(int64_t *)*plocal_var_e8 + 0x10))();
  }
  if ((((local_var_c0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_c0)) && (lStack_c8 != 0)) {
    (**(code **)(*(int64_t *)*plocal_var_d0 + 0x10))();
  }
  return param_2;
}
// 函数: void UtilitiesSystem_ed460(void)
void UtilitiesSystem_ed460(void)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int64_t in_RAX;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RDI;
  int32_t *unaff_R12;
  int64_t *unaff_R15;
  int64_t local_var_30;
  uint64_t local_var_38;
  uint64_t *local_var_40;
  int64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t *local_buffer_58;
  uVar6 = (**(code **)(in_RAX + 0xb8))();
  plVar7 = (int64_t *)(**(code **)(*unaff_R15 + 0x18))();
  (**(code **)(*plVar7 + 0x10))(plVar7,*(uint64_t *)(unaff_RBP + -0x49));
  uVar2 = unaff_R12[1];
  uVar3 = unaff_R12[2];
  uVar4 = unaff_R12[3];
  uVar1 = *(uint64_t *)(unaff_R12 + 4);
  *(int32_t *)(unaff_RBP + -0x69) = *unaff_R12;
  *(int32_t *)(unaff_RBP + -0x65) = uVar2;
  *(int32_t *)(unaff_RBP + -0x61) = uVar3;
  *(int32_t *)(unaff_RBP + -0x5d) = uVar4;
  *(uint64_t *)(unaff_RBP + -0x59) = uVar1;
  cVar5 = UtilitiesSystem_ef9e0(unaff_RBP + -0x69,uVar1,uVar6);
  if (cVar5 == '\0') {
    *(void **)(unaff_RBP + -0x69) = &system_buffer_ptr;
    *(uint64_t *)(unaff_RBP + -0x61) = 0;
    *(uint64_t *)(unaff_RBP + -0x59) = 0;
  }
  else {
    *(uint64_t *)(unaff_RBP + -0x61) = uVar6;
    *(void **)(unaff_RBP + -0x69) = &processed_var_9312_ptr;
    *(uint64_t *)(unaff_RBP + -0x59) = uVar6;
  }
  uVar2 = *(int32_t *)(unaff_RBP + -0x65);
  uVar3 = *(int32_t *)(unaff_RBP + -0x61);
  uVar4 = *(int32_t *)(unaff_RBP + -0x5d);
  uVar1 = *(uint64_t *)(unaff_RBP + -0x59);
  *unaff_RDI = *(int32_t *)(unaff_RBP + -0x69);
  unaff_RDI[1] = uVar2;
  unaff_RDI[2] = uVar3;
  unaff_RDI[3] = uVar4;
  *(uint64_t *)(unaff_RDI + 4) = uVar1;
  if ((((local_var_38 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_38)) &&
     (local_var_30 != unaff_RBX)) {
    plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,local_var_30);
  }
  if ((((local_buffer_50 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_buffer_50)) &&
     (local_var_48 != 0)) {
    (**(code **)(*(int64_t *)*local_var_40 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(int64_t *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(int64_t *)*local_buffer_58 + 0x10))();
  }
  return;
}
// 函数: void UtilitiesSystem_ed512(void)
void UtilitiesSystem_ed512(void)
{
  int in_EAX;
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t local_var_30;
  uint64_t *local_var_40;
  int64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t *local_buffer_58;
  if ((-1 < in_EAX) && (local_var_30 != unaff_RBX)) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1,local_var_30);
  }
  if ((((local_buffer_50 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_buffer_50)) &&
     (local_var_48 != 0)) {
    (**(code **)(*(int64_t *)*local_var_40 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(int64_t *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(int64_t *)*local_buffer_58 + 0x10))();
  }
  return;
}
// 函数: void UtilitiesSystem_ed5a0(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void UtilitiesSystem_ed5a0(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,int64_t param_6)
{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int16_t uVar4;
  int32_t uVar5;
  uint uVar6;
  byte *pbVar7;
  uint64_t uVar8;
  int16_t *puVar9;
  uint64_t uVar10;
  void *puVar11;
  int iVar12;
  uint uVar13;
  int16_t *puVar14;
  uint64_t uVar15;
  int8_t astack_special_x_10 [8];
  uint64_t local_var_140;
  void *plocal_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_108;
  uint local_var_104;
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint local_var_f4;
  int32_t local_var_f0;
  uint local_var_ec;
  uint64_t local_var_e8;
  uint local_var_e0;
  int32_t local_var_dc;
  int16_t local_var_d8;
  int32_t local_var_d0;
  int16_t *plocal_var_c8;
  uint64_t local_var_b8;
  uint64_t local_var_a8;
  uint64_t *plocal_var_a0;
  uint64_t *plocal_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  local_var_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  UtilitiesSystem_f0e70(param_4,param_5,2,local_var_b8,uVar5,&processed_var_8608_ptr,&rendering_buffer_2208_ptr);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,astack_special_x_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    UtilitiesSystem_f0e70(param_4,param_5,2,uVar8,uVar6,&processed_var_8616_ptr,UtilitiesSystem_f1000);
  }
  else {
    UtilitiesSystem_f0d80();
  }
  uVar10 = 0;
  if ((sVar3 != -1) && (uVar6 != 0)) {
    do {
      iVar12 = (int)uVar10;
      if ((iVar12 == 0) || (iVar12 != (int)(uVar10 / 6) * 6)) {
        uVar15 = 1;
        puVar11 = &system_data_c8e4;
      }
      else {
        uVar15 = 4;
        puVar11 = &processed_var_8768_ptr;
      }
      (**(code **)*param_5)(param_5,puVar11,uVar15);
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar10);
      UtilitiesSystem_c4e00(param_5,&rendering_buffer_2208_ptr,uVar4);
      uVar10 = (uint64_t)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    astack_special_x_10[0] = 0;
    (**(code **)*param_5)(param_5,astack_special_x_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8632_ptr,param_5[4]);
    param_5[3] = 0;
  }
  local_var_ec = local_var_128._4_4_;
  uVar2 = local_var_130._4_4_;
  uVar13 = local_var_140._4_4_;
  local_var_140 = (void *)((uint64_t)local_var_140._4_4_ << 0x20);
  plocal_var_138 = (void *)0x0;
  local_var_130 = (uint64_t *)((uint64_t)local_var_130._4_4_ << 0x20);
  _local_var_f8 = CONCAT44(uVar2,uVar5);
  local_var_128 = (uint64_t)local_var_128._4_4_ << 0x20;
  local_var_120 = 0;
  local_var_118 = 0;
  local_var_100 = local_var_b8;
  local_var_d0 = 0;
  plocal_var_c8 = (int16_t *)0x0;
  local_var_d8 = 0;
  _local_var_108 = CONCAT44(uVar13,0xc);
  _local_var_e0 = CONCAT44(local_var_114,uVar6);
  if ((bVar1 & 2) == 0) {
    local_var_f0 = 0xc;
  }
  else {
    local_var_f0 = 6;
    local_var_d8 = 2;
  }
  local_var_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (int16_t *)thunk_SystemRenderer();
    uVar13 = 0;
    puVar14 = puVar9;
    if (uVar6 != 0) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar13);
        uVar13 = uVar13 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (uVar13 < uVar6);
    }
    local_var_d0 = 2;
    plocal_var_c8 = puVar9;
  }
  if (*(int64_t *)(param_6 + 8) != 0) {
    local_var_78 = 0;
    local_var_70 = 0;
    local_var_90 = 0;
    local_var_a8 = *(uint64_t *)(param_1 + 8);
    plocal_var_a0 = &local_var_a8;
    plocal_var_98 = &local_var_a8;
    plocal_var_80 = &local_var_a8;
    local_var_50 = 0x3f400000;
    local_var_88 = 0;
    local_var_68 = 0;
    local_var_60 = 0;
    local_var_58 = 0;
    local_var_4c = 0xffffffff;
    local_var_48 = 0;
    UtilitiesSystem_f1810(&plocal_var_80,0x40);
    local_var_40 = 0x20;
    local_var_120 = 0;
    local_var_130 = &local_var_a8;
    local_var_118 = 0;
    local_var_128 = 0;
    local_var_140 = &processed_var_8576_ptr;
    plocal_var_138 = &processed_var_8592_ptr;
    (**(code **)(**(int64_t **)(param_6 + 8) + 0x20))
              (*(int64_t **)(param_6 + 8),&local_var_108,&local_var_140,0);
    UtilitiesSystem_f0c90(param_4,param_5,0x10,local_var_120,(int32_t)local_var_128,&processed_var_8648_ptr,
                  &render_data_ptr);
    local_var_140 = &processed_var_8576_ptr;
    plocal_var_138 = &processed_var_8592_ptr;
    UtilitiesSystem_f1550(local_var_130,local_var_120);
    plocal_var_138 = &system_handler1_ptr;
    local_var_140 = &ui_system_data_1760_ptr;
    UtilitiesSystem_f1080(&plocal_var_a0);
  }
  free(plocal_var_c8);
  return;
}
uint64_t *
UtilitiesSystem_ed9d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)
{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_20;
  int32_t local_var_158;
  uint local_var_154;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  uint local_var_12c;
  void *plocal_var_120;
  void *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  int64_t lStack_e8;
  uint64_t local_var_e0;
  int64_t lStack_d8;
  int32_t stack_array_d0 [2];
  uint64_t local_var_c8;
  int64_t lStack_c0;
  int16_t local_var_b8;
  int32_t stack_array_b0 [2];
  uint64_t local_var_a8;
  uint64_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t *plocal_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  int32_t local_var_30;
  int8_t stack_array_28 [16];
  local_var_158 = 0;
  local_var_150 = 0;
  lStack_e8 = (uint64_t)local_var_154 << 0x20;
  local_var_148 = 0;
  lStack_d8 = (uint64_t)local_var_144 << 0x20;
  local_var_e0 = 0;
  local_var_140 = 0;
  local_var_138 = 0;
  local_var_134 = 0;
  local_var_130 = 0;
  lStack_c0 = (uint64_t)local_var_12c << 0x20;
  stack_array_d0[0] = 0;
  local_var_c8 = 0;
  stack_array_b0[0] = 0;
  local_var_a8 = 0;
  local_var_b8 = 0;
  stack_special_x_10 = 0;
  UtilitiesSystem_f02d0(param_3,&processed_var_4336_ptr,&stack_special_x_10,&lStack_e8,&lStack_d8,param_4);
  local_var_e0 = stack_special_x_10;
  stack_special_x_10 = 0;
  UtilitiesSystem_efec0(param_3,&processed_var_9872_ptr,&stack_special_x_10,stack_array_d0,&lStack_c0,param_4);
  local_var_c8 = stack_special_x_10;
  stack_special_x_20 = 0;
  UtilitiesSystem_efd00(param_3,&processed_var_8632_ptr,&stack_special_x_20,stack_array_b0,&stack_special_x_10,param_4);
  local_var_a8 = stack_special_x_20;
  stack_special_x_20 = 0;
  UtilitiesSystem_efb40(param_3,&processed_var_8648_ptr,&stack_special_x_20,stack_array_28,&stack_special_x_10,param_4);
  local_var_98 = (**(code **)(*param_4 + 0x18))(param_4);
  local_var_80 = 0;
  plocal_var_90 = &local_var_98;
  local_var_68 = 0;
  local_var_60 = 0;
  plocal_var_88 = &local_var_98;
  plocal_var_70 = &local_var_98;
  local_var_78 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0x3f400000;
  local_var_3c = 0xffffffff;
  local_var_38 = 0;
  UtilitiesSystem_f1810(&plocal_var_70,0x40);
  plocal_var_110 = &local_var_98;
  plocal_var_120 = &processed_var_8576_ptr;
  plocal_var_118 = &processed_var_8592_ptr;
  local_var_30 = 0x20;
  local_var_108 = 0;
  local_var_100 = 0;
  local_var_f8 = 0;
  if ((int)stack_special_x_10 != 0) {
    UtilitiesSystem_f19b0(&plocal_var_120,stack_special_x_20);
    lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&plocal_var_118);
    if (lVar1 != 0) goto LAB_1806edccd;
  }
  local_var_108 = 0;
  puVar2 = (int32_t *)(**(code **)(*(int64_t *)param_5[1] + 0x10))();
  local_var_158 = *puVar2;
  local_var_154 = puVar2[1];
  local_var_150 = CONCAT17(local_var_150._7_1_,*(uint8_t *)(puVar2 + 2));
  local_var_148 = puVar2[4];
  local_var_144 = puVar2[5];
  local_var_140 = puVar2[6];
  local_var_13c = puVar2[7];
  local_var_12c = puVar2[0xb];
  local_var_138 = 0x3f0ccccd;
  local_var_134 = 0;
  local_var_130 = 0;
  (**(code **)(*(int64_t *)param_5[1] + 8))((int64_t *)param_5[1],&local_var_158);
  (**(code **)(*(int64_t *)param_5[1] + 0x20))((int64_t *)param_5[1],&lStack_e8,&plocal_var_120,0);
  lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&plocal_var_118);
LAB_1806edccd:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  plocal_var_120 = &processed_var_8576_ptr;
  *param_2 = &processed_var_9144_ptr;
  plocal_var_118 = &processed_var_8592_ptr;
  UtilitiesSystem_f1550(plocal_var_110,local_var_100);
  plocal_var_118 = &system_handler1_ptr;
  plocal_var_120 = &ui_system_data_1760_ptr;
  UtilitiesSystem_f1080(&plocal_var_90);
  return param_2;
}
// 函数: void UtilitiesSystem_edd50(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void UtilitiesSystem_edd50(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,int64_t param_6)
{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int16_t uVar4;
  int32_t uVar5;
  uint uVar6;
  byte *pbVar7;
  uint64_t uVar8;
  int16_t *puVar9;
  uint64_t uVar10;
  void *puVar11;
  int iVar12;
  uint uVar13;
  int16_t *puVar14;
  uint64_t uVar15;
  int8_t astack_special_x_10 [8];
  uint64_t local_var_140;
  void *plocal_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_108;
  uint local_var_104;
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint local_var_f4;
  int32_t local_var_f0;
  uint local_var_ec;
  uint64_t local_var_e8;
  uint local_var_e0;
  int32_t local_var_dc;
  int16_t local_var_d8;
  int32_t local_var_d0;
  int16_t *plocal_var_c8;
  uint64_t local_var_b8;
  uint64_t local_var_a8;
  uint64_t *plocal_var_a0;
  uint64_t *plocal_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  local_var_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  UtilitiesSystem_f0e70(param_4,param_5,2,local_var_b8,uVar5,&processed_var_8608_ptr,&rendering_buffer_2208_ptr);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,astack_special_x_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    UtilitiesSystem_f0e70(param_4,param_5,2,uVar8,uVar6,&processed_var_8616_ptr,UtilitiesSystem_f1000);
  }
  else {
    UtilitiesSystem_f0d80();
  }
  uVar10 = 0;
  if ((sVar3 != -1) && (uVar6 != 0)) {
    do {
      iVar12 = (int)uVar10;
      if ((iVar12 == 0) || (iVar12 != (int)(uVar10 / 6) * 6)) {
        uVar15 = 1;
        puVar11 = &system_data_c8e4;
      }
      else {
        uVar15 = 4;
        puVar11 = &processed_var_8768_ptr;
      }
      (**(code **)*param_5)(param_5,puVar11,uVar15);
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar10);
      UtilitiesSystem_c4e00(param_5,&rendering_buffer_2208_ptr,uVar4);
      uVar10 = (uint64_t)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    astack_special_x_10[0] = 0;
    (**(code **)*param_5)(param_5,astack_special_x_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8632_ptr,param_5[4]);
    param_5[3] = 0;
  }
  local_var_ec = local_var_128._4_4_;
  uVar2 = local_var_130._4_4_;
  uVar13 = local_var_140._4_4_;
  local_var_140 = (void *)((uint64_t)local_var_140._4_4_ << 0x20);
  plocal_var_138 = (void *)0x0;
  local_var_130 = (uint64_t *)((uint64_t)local_var_130._4_4_ << 0x20);
  _local_var_f8 = CONCAT44(uVar2,uVar5);
  local_var_128 = (uint64_t)local_var_128._4_4_ << 0x20;
  local_var_120 = 0;
  local_var_118 = 0;
  local_var_100 = local_var_b8;
  local_var_d0 = 0;
  plocal_var_c8 = (int16_t *)0x0;
  local_var_d8 = 0;
  _local_var_108 = CONCAT44(uVar13,0xc);
  _local_var_e0 = CONCAT44(local_var_114,uVar6);
  if ((bVar1 & 2) == 0) {
    local_var_f0 = 0xc;
  }
  else {
    local_var_f0 = 6;
    local_var_d8 = 2;
  }
  local_var_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (int16_t *)thunk_SystemRenderer();
    uVar13 = 0;
    puVar14 = puVar9;
    if (uVar6 != 0) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar13);
        uVar13 = uVar13 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (uVar13 < uVar6);
    }
    local_var_d0 = 2;
    plocal_var_c8 = puVar9;
  }
  if (*(int64_t *)(param_6 + 8) != 0) {
    local_var_78 = 0;
    local_var_70 = 0;
    local_var_90 = 0;
    local_var_a8 = *(uint64_t *)(param_1 + 8);
    plocal_var_a0 = &local_var_a8;
    plocal_var_98 = &local_var_a8;
    plocal_var_80 = &local_var_a8;
    local_var_50 = 0x3f400000;
    local_var_88 = 0;
    local_var_68 = 0;
    local_var_60 = 0;
    local_var_58 = 0;
    local_var_4c = 0xffffffff;
    local_var_48 = 0;
    UtilitiesSystem_f1810(&plocal_var_80,0x40);
    local_var_40 = 0x20;
    local_var_120 = 0;
    local_var_130 = &local_var_a8;
    local_var_118 = 0;
    local_var_128 = 0;
    local_var_140 = &processed_var_8576_ptr;
    plocal_var_138 = &processed_var_8592_ptr;
    (**(code **)(**(int64_t **)(param_6 + 8) + 0x20))
              (*(int64_t **)(param_6 + 8),&local_var_108,&local_var_140,0);
    UtilitiesSystem_f0c90(param_4,param_5,0x10,local_var_120,(int32_t)local_var_128,&processed_var_8648_ptr,
                  &render_data_ptr);
    local_var_140 = &processed_var_8576_ptr;
    plocal_var_138 = &processed_var_8592_ptr;
    UtilitiesSystem_f1550(local_var_130,local_var_120);
    plocal_var_138 = &system_handler1_ptr;
    local_var_140 = &ui_system_data_1760_ptr;
    UtilitiesSystem_f1080(&plocal_var_a0);
  }
  free(plocal_var_c8);
  return;
}
uint64_t *
UtilitiesSystem_ee180(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)
{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_20;
  int32_t local_var_158;
  uint local_var_154;
  uint64_t local_var_150;
  int32_t local_var_148;
  uint local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  uint64_t local_var_138;
  int32_t local_var_130;
  uint local_var_12c;
  void *plocal_var_120;
  void *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  int64_t lStack_e8;
  uint64_t local_var_e0;
  int64_t lStack_d8;
  int32_t stack_array_d0 [2];
  uint64_t local_var_c8;
  int64_t lStack_c0;
  int16_t local_var_b8;
  int32_t stack_array_b0 [2];
  uint64_t local_var_a8;
  uint64_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t *plocal_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  int32_t local_var_30;
  int8_t stack_array_28 [16];
  local_var_158 = 0;
  local_var_150 = 0;
  lStack_e8 = (uint64_t)local_var_154 << 0x20;
  local_var_148 = 0;
  lStack_d8 = (uint64_t)local_var_144 << 0x20;
  local_var_e0 = 0;
  local_var_140 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  lStack_c0 = (uint64_t)local_var_12c << 0x20;
  stack_array_d0[0] = 0;
  local_var_c8 = 0;
  stack_array_b0[0] = 0;
  local_var_a8 = 0;
  local_var_b8 = 0;
  stack_special_x_10 = 0;
  UtilitiesSystem_f02d0(param_3,&processed_var_4336_ptr,&stack_special_x_10,&lStack_e8,&lStack_d8,param_4);
  local_var_e0 = stack_special_x_10;
  stack_special_x_10 = 0;
  UtilitiesSystem_efec0(param_3,&processed_var_9872_ptr,&stack_special_x_10,stack_array_d0,&lStack_c0,param_4);
  local_var_c8 = stack_special_x_10;
  stack_special_x_20 = 0;
  UtilitiesSystem_efd00(param_3,&processed_var_8632_ptr,&stack_special_x_20,stack_array_b0,&stack_special_x_10,param_4);
  local_var_a8 = stack_special_x_20;
  stack_special_x_20 = 0;
  UtilitiesSystem_efb40(param_3,&processed_var_8648_ptr,&stack_special_x_20,stack_array_28,&stack_special_x_10,param_4);
  local_var_98 = (**(code **)(*param_4 + 0x18))(param_4);
  local_var_80 = 0;
  plocal_var_90 = &local_var_98;
  local_var_68 = 0;
  local_var_60 = 0;
  plocal_var_88 = &local_var_98;
  plocal_var_70 = &local_var_98;
  local_var_78 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0x3f400000;
  local_var_3c = 0xffffffff;
  local_var_38 = 0;
  UtilitiesSystem_f1810(&plocal_var_70,0x40);
  plocal_var_110 = &local_var_98;
  plocal_var_120 = &processed_var_8576_ptr;
  plocal_var_118 = &processed_var_8592_ptr;
  local_var_30 = 0x20;
  local_var_108 = 0;
  local_var_100 = 0;
  local_var_f8 = 0;
  if ((int)stack_special_x_10 != 0) {
    UtilitiesSystem_f19b0(&plocal_var_120,stack_special_x_20);
    lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&plocal_var_118);
    if (lVar1 != 0) goto LAB_1806ee47a;
  }
  local_var_108 = 0;
  puVar2 = (int32_t *)(**(code **)(*(int64_t *)param_5[1] + 0x10))();
  local_var_158 = *puVar2;
  local_var_154 = puVar2[1];
  local_var_150 = CONCAT17(local_var_150._7_1_,*(uint8_t *)(puVar2 + 2));
  local_var_148 = puVar2[4];
  local_var_144 = puVar2[5];
  local_var_140 = puVar2[6];
  local_var_13c = puVar2[7];
  local_var_12c = puVar2[0xb];
  local_var_130 = 1;
  local_var_138 = CONCAT44((int)((uint64_t)*(uint64_t *)(puVar2 + 8) >> 0x20),4);
  (**(code **)(*(int64_t *)param_5[1] + 8))((int64_t *)param_5[1],&local_var_158);
  (**(code **)(*(int64_t *)param_5[1] + 0x20))((int64_t *)param_5[1],&lStack_e8,&plocal_var_120,0);
  lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&plocal_var_118);
LAB_1806ee47a:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  plocal_var_120 = &processed_var_8576_ptr;
  *param_2 = &processed_var_9168_ptr;
  plocal_var_118 = &processed_var_8592_ptr;
  UtilitiesSystem_f1550(plocal_var_110,local_var_100);
  plocal_var_118 = &system_handler1_ptr;
  plocal_var_120 = &ui_system_data_1760_ptr;
  UtilitiesSystem_f1080(&plocal_var_90);
  return param_2;
}
#include "TaleWorlds.Native.Split.h"

// 99_part_11_part018.c - 5 个函数

// 函数: void FUN_1806ed192(void)
void FUN_1806ed192(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}



int64_t FUN_1806ed1c0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806ed140();
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



uint64_t FUN_1806ed240(uint64_t param_1,int64_t param_2)

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
FUN_1806ed330(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5,uint64_t param_6)

{
  uint64_t *puVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char acStackX_18 [8];
  uint64_t uStackX_20;
  uint64_t in_stack_fffffffffffffef8;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  uint64_t *puStack_e8;
  int64_t lStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  int64_t lStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t auStack_98 [2];
  uint64_t **ppuStack_88;
  uint64_t **ppuStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int64_t *plStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  char *pcStack_38;
  
  uStackX_20 = (**(code **)(*param_4 + 0x18))(param_4);
  puVar1 = (uint64_t *)CONCAT71(param_5._1_7_,(int8_t)param_5);
  puStack_d0 = &uStackX_20;
  lStack_c8 = 0;
  uStack_78 = *(int32_t *)puVar1;
  uStack_74 = *(int32_t *)((int64_t)puVar1 + 4);
  uStack_70 = *(int32_t *)(puVar1 + 1);
  uStack_6c = *(int32_t *)((int64_t)puVar1 + 0xc);
  puStack_e8 = &uStackX_20;
  uStack_c0 = 0;
  uStack_68 = puVar1[2];
  ppuStack_88 = &puStack_d0;
  ppuStack_80 = &puStack_e8;
  uStack_48 = param_6;
  pcStack_38 = acStackX_18;
  lStack_e0 = 0;
  uStack_d8 = 0;
  acStackX_18[0] = '\0';
  uStack_58 = 0;
  uStack_40 = 1;
  lStack_f8 = 0;
  uStack_f0 = 0;
  auStack_98[0] = 0;
  uStack_60 = param_3;
  plStack_50 = param_4;
  FUN_1806c2950(&ppuStack_88,auStack_98,&lStack_f8);
  lVar5 = lStack_f8;
  if (acStackX_18[0] == '\0') {
    param_5._0_1_ = 0xb;
    uVar4 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                      ((int64_t *)*puVar1,auStack_98[0],lStack_f8,uStack_f0 & 0xffff,
                       in_stack_fffffffffffffef8 & 0xffffffffffffff00,&param_5);
    plVar3 = (int64_t *)(**(code **)(*param_4 + 0x18))(param_4);
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_98[0]);
    uStack_b8 = (void *)*puVar1;
    uStack_b0 = puVar1[1];
    uStack_a8 = puVar1[2];
    cVar2 = FUN_1806ef9e0(&uStack_b8,param_3,uVar4,param_4,param_6);
    if (cVar2 == '\0') {
      uStack_b8 = &system_buffer_ptr;
      uStack_a8 = 0;
    }
    else {
      uStack_b8 = &processed_var_9312_ptr;
      uStack_a8 = uVar4;
    }
    uStack_b0._0_4_ = (int32_t)uStack_a8;
    uStack_b0._4_4_ = (int32_t)((uint64_t)uStack_a8 >> 0x20);
    *(int32_t *)param_2 = (int32_t)uStack_b8;
    *(int32_t *)((int64_t)param_2 + 4) = uStack_b8._4_4_;
    *(int32_t *)(param_2 + 1) = (int32_t)uStack_b0;
    *(int32_t *)((int64_t)param_2 + 0xc) = uStack_b0._4_4_;
    param_2[2] = uStack_a8;
    uStack_b0 = uStack_a8;
    if ((((uStack_f0 & 0x7fffffff00000000) == 0) || ((int64_t)uStack_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    lVar5 = lStack_f8;
  }
  else {
    param_2[1] = 0;
    *param_2 = &system_buffer_ptr;
    param_2[2] = 0;
    if ((((uStack_f0 & 0x7fffffff00000000) == 0) || ((int64_t)uStack_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar5);
LAB_1806ed532:
  if ((((uStack_d8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_d8)) && (lStack_e0 != 0)) {
    (**(code **)(*(int64_t *)*puStack_e8 + 0x10))();
  }
  if ((((uStack_c0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_c0)) && (lStack_c8 != 0)) {
    (**(code **)(*(int64_t *)*puStack_d0 + 0x10))();
  }
  return param_2;
}






// 函数: void FUN_1806ed460(void)
void FUN_1806ed460(void)

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
  int64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t *in_stack_00000040;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t *in_stack_00000058;
  
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
  cVar5 = FUN_1806ef9e0(unaff_RBP + -0x69,uVar1,uVar6);
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
  if ((((in_stack_00000038 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)in_stack_00000038)) &&
     (in_stack_00000030 != unaff_RBX)) {
    plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,in_stack_00000030);
  }
  if ((((in_stack_00000050 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)in_stack_00000050)) &&
     (in_stack_00000048 != 0)) {
    (**(code **)(*(int64_t *)*in_stack_00000040 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(int64_t *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(int64_t *)*in_stack_00000058 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806ed512(void)
void FUN_1806ed512(void)

{
  int in_EAX;
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t in_stack_00000030;
  uint64_t *in_stack_00000040;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t *in_stack_00000058;
  
  if ((-1 < in_EAX) && (in_stack_00000030 != unaff_RBX)) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1,in_stack_00000030);
  }
  if ((((in_stack_00000050 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)in_stack_00000050)) &&
     (in_stack_00000048 != 0)) {
    (**(code **)(*(int64_t *)*in_stack_00000040 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(int64_t *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(int64_t *)*in_stack_00000058 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806ed5a0(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void FUN_1806ed5a0(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
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
  int8_t auStackX_10 [8];
  uint64_t uStack_140;
  void *puStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_108;
  uint uStack_104;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint uStack_f4;
  int32_t uStack_f0;
  uint uStack_ec;
  uint64_t uStack_e8;
  uint uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int32_t uStack_d0;
  int16_t *puStack_c8;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  uStack_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_1806f0e70(param_4,param_5,2,uStack_b8,uVar5,&processed_var_8608_ptr,&rendering_buffer_2208_ptr);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,auStackX_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    FUN_1806f0e70(param_4,param_5,2,uVar8,uVar6,&processed_var_8616_ptr,FUN_1806f1000);
  }
  else {
    FUN_1806f0d80();
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
      FUN_1806c4e00(param_5,&rendering_buffer_2208_ptr,uVar4);
      uVar10 = (uint64_t)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    auStackX_10[0] = 0;
    (**(code **)*param_5)(param_5,auStackX_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8632_ptr,param_5[4]);
    param_5[3] = 0;
  }
  uStack_ec = uStack_128._4_4_;
  uVar2 = uStack_130._4_4_;
  uVar13 = uStack_140._4_4_;
  uStack_140 = (void *)((uint64_t)uStack_140._4_4_ << 0x20);
  puStack_138 = (void *)0x0;
  uStack_130 = (uint64_t *)((uint64_t)uStack_130._4_4_ << 0x20);
  _uStack_f8 = CONCAT44(uVar2,uVar5);
  uStack_128 = (uint64_t)uStack_128._4_4_ << 0x20;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = uStack_b8;
  uStack_d0 = 0;
  puStack_c8 = (int16_t *)0x0;
  uStack_d8 = 0;
  _uStack_108 = CONCAT44(uVar13,0xc);
  _uStack_e0 = CONCAT44(uStack_114,uVar6);
  if ((bVar1 & 2) == 0) {
    uStack_f0 = 0xc;
  }
  else {
    uStack_f0 = 6;
    uStack_d8 = 2;
  }
  uStack_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (int16_t *)thunk_FUN_1808fc418();
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
    uStack_d0 = 2;
    puStack_c8 = puVar9;
  }
  if (*(int64_t *)(param_6 + 8) != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_90 = 0;
    uStack_a8 = *(uint64_t *)(param_1 + 8);
    puStack_a0 = &uStack_a8;
    puStack_98 = &uStack_a8;
    puStack_80 = &uStack_a8;
    uStack_50 = 0x3f400000;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0;
    FUN_1806f1810(&puStack_80,0x40);
    uStack_40 = 0x20;
    uStack_120 = 0;
    uStack_130 = &uStack_a8;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_140 = &processed_var_8576_ptr;
    puStack_138 = &processed_var_8592_ptr;
    (**(code **)(**(int64_t **)(param_6 + 8) + 0x20))
              (*(int64_t **)(param_6 + 8),&uStack_108,&uStack_140,0);
    FUN_1806f0c90(param_4,param_5,0x10,uStack_120,(int32_t)uStack_128,&processed_var_8648_ptr,
                  &render_data_ptr);
    uStack_140 = &processed_var_8576_ptr;
    puStack_138 = &processed_var_8592_ptr;
    FUN_1806f1550(uStack_130,uStack_120);
    puStack_138 = &system_handler1_ptr;
    uStack_140 = &ui_system_data_1760_ptr;
    FUN_1806f1080(&puStack_a0);
  }
  free(puStack_c8);
  return;
}



uint64_t *
FUN_1806ed9d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uStackX_10;
  uint64_t uStackX_20;
  int32_t uStack_158;
  uint uStack_154;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  uint uStack_12c;
  void *puStack_120;
  void *puStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  int64_t lStack_d8;
  int32_t auStack_d0 [2];
  uint64_t uStack_c8;
  int64_t lStack_c0;
  int16_t uStack_b8;
  int32_t auStack_b0 [2];
  uint64_t uStack_a8;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_e8 = (uint64_t)uStack_154 << 0x20;
  uStack_148 = 0;
  lStack_d8 = (uint64_t)uStack_144 << 0x20;
  uStack_e0 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  lStack_c0 = (uint64_t)uStack_12c << 0x20;
  auStack_d0[0] = 0;
  uStack_c8 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStackX_10 = 0;
  FUN_1806f02d0(param_3,&processed_var_4336_ptr,&uStackX_10,&lStack_e8,&lStack_d8,param_4);
  uStack_e0 = uStackX_10;
  uStackX_10 = 0;
  FUN_1806efec0(param_3,&processed_var_9872_ptr,&uStackX_10,auStack_d0,&lStack_c0,param_4);
  uStack_c8 = uStackX_10;
  uStackX_20 = 0;
  FUN_1806efd00(param_3,&processed_var_8632_ptr,&uStackX_20,auStack_b0,&uStackX_10,param_4);
  uStack_a8 = uStackX_20;
  uStackX_20 = 0;
  FUN_1806efb40(param_3,&processed_var_8648_ptr,&uStackX_20,auStack_28,&uStackX_10,param_4);
  uStack_98 = (**(code **)(*param_4 + 0x18))(param_4);
  uStack_80 = 0;
  puStack_90 = &uStack_98;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_88 = &uStack_98;
  puStack_70 = &uStack_98;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f400000;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  FUN_1806f1810(&puStack_70,0x40);
  puStack_110 = &uStack_98;
  puStack_120 = &processed_var_8576_ptr;
  puStack_118 = &processed_var_8592_ptr;
  uStack_30 = 0x20;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if ((int)uStackX_10 != 0) {
    FUN_1806f19b0(&puStack_120,uStackX_20);
    lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&puStack_118);
    if (lVar1 != 0) goto LAB_1806edccd;
  }
  uStack_108 = 0;
  puVar2 = (int32_t *)(**(code **)(*(int64_t *)param_5[1] + 0x10))();
  uStack_158 = *puVar2;
  uStack_154 = puVar2[1];
  uStack_150 = CONCAT17(uStack_150._7_1_,*(uint8_t *)(puVar2 + 2));
  uStack_148 = puVar2[4];
  uStack_144 = puVar2[5];
  uStack_140 = puVar2[6];
  uStack_13c = puVar2[7];
  uStack_12c = puVar2[0xb];
  uStack_138 = 0x3f0ccccd;
  uStack_134 = 0;
  uStack_130 = 0;
  (**(code **)(*(int64_t *)param_5[1] + 8))((int64_t *)param_5[1],&uStack_158);
  (**(code **)(*(int64_t *)param_5[1] + 0x20))((int64_t *)param_5[1],&lStack_e8,&puStack_120,0);
  lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&puStack_118);
LAB_1806edccd:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  puStack_120 = &processed_var_8576_ptr;
  *param_2 = &processed_var_9144_ptr;
  puStack_118 = &processed_var_8592_ptr;
  FUN_1806f1550(puStack_110,uStack_100);
  puStack_118 = &system_handler1_ptr;
  puStack_120 = &ui_system_data_1760_ptr;
  FUN_1806f1080(&puStack_90);
  return param_2;
}






// 函数: void FUN_1806edd50(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void FUN_1806edd50(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
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
  int8_t auStackX_10 [8];
  uint64_t uStack_140;
  void *puStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_108;
  uint uStack_104;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint uStack_f4;
  int32_t uStack_f0;
  uint uStack_ec;
  uint64_t uStack_e8;
  uint uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int32_t uStack_d0;
  int16_t *puStack_c8;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  uStack_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_1806f0e70(param_4,param_5,2,uStack_b8,uVar5,&processed_var_8608_ptr,&rendering_buffer_2208_ptr);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,auStackX_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    FUN_1806f0e70(param_4,param_5,2,uVar8,uVar6,&processed_var_8616_ptr,FUN_1806f1000);
  }
  else {
    FUN_1806f0d80();
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
      FUN_1806c4e00(param_5,&rendering_buffer_2208_ptr,uVar4);
      uVar10 = (uint64_t)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    auStackX_10[0] = 0;
    (**(code **)*param_5)(param_5,auStackX_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8632_ptr,param_5[4]);
    param_5[3] = 0;
  }
  uStack_ec = uStack_128._4_4_;
  uVar2 = uStack_130._4_4_;
  uVar13 = uStack_140._4_4_;
  uStack_140 = (void *)((uint64_t)uStack_140._4_4_ << 0x20);
  puStack_138 = (void *)0x0;
  uStack_130 = (uint64_t *)((uint64_t)uStack_130._4_4_ << 0x20);
  _uStack_f8 = CONCAT44(uVar2,uVar5);
  uStack_128 = (uint64_t)uStack_128._4_4_ << 0x20;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = uStack_b8;
  uStack_d0 = 0;
  puStack_c8 = (int16_t *)0x0;
  uStack_d8 = 0;
  _uStack_108 = CONCAT44(uVar13,0xc);
  _uStack_e0 = CONCAT44(uStack_114,uVar6);
  if ((bVar1 & 2) == 0) {
    uStack_f0 = 0xc;
  }
  else {
    uStack_f0 = 6;
    uStack_d8 = 2;
  }
  uStack_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (int16_t *)thunk_FUN_1808fc418();
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
    uStack_d0 = 2;
    puStack_c8 = puVar9;
  }
  if (*(int64_t *)(param_6 + 8) != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_90 = 0;
    uStack_a8 = *(uint64_t *)(param_1 + 8);
    puStack_a0 = &uStack_a8;
    puStack_98 = &uStack_a8;
    puStack_80 = &uStack_a8;
    uStack_50 = 0x3f400000;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0;
    FUN_1806f1810(&puStack_80,0x40);
    uStack_40 = 0x20;
    uStack_120 = 0;
    uStack_130 = &uStack_a8;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_140 = &processed_var_8576_ptr;
    puStack_138 = &processed_var_8592_ptr;
    (**(code **)(**(int64_t **)(param_6 + 8) + 0x20))
              (*(int64_t **)(param_6 + 8),&uStack_108,&uStack_140,0);
    FUN_1806f0c90(param_4,param_5,0x10,uStack_120,(int32_t)uStack_128,&processed_var_8648_ptr,
                  &render_data_ptr);
    uStack_140 = &processed_var_8576_ptr;
    puStack_138 = &processed_var_8592_ptr;
    FUN_1806f1550(uStack_130,uStack_120);
    puStack_138 = &system_handler1_ptr;
    uStack_140 = &ui_system_data_1760_ptr;
    FUN_1806f1080(&puStack_a0);
  }
  free(puStack_c8);
  return;
}



uint64_t *
FUN_1806ee180(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uStackX_10;
  uint64_t uStackX_20;
  int32_t uStack_158;
  uint uStack_154;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  uint64_t uStack_138;
  int32_t uStack_130;
  uint uStack_12c;
  void *puStack_120;
  void *puStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  int64_t lStack_d8;
  int32_t auStack_d0 [2];
  uint64_t uStack_c8;
  int64_t lStack_c0;
  int16_t uStack_b8;
  int32_t auStack_b0 [2];
  uint64_t uStack_a8;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_e8 = (uint64_t)uStack_154 << 0x20;
  uStack_148 = 0;
  lStack_d8 = (uint64_t)uStack_144 << 0x20;
  uStack_e0 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_c0 = (uint64_t)uStack_12c << 0x20;
  auStack_d0[0] = 0;
  uStack_c8 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStackX_10 = 0;
  FUN_1806f02d0(param_3,&processed_var_4336_ptr,&uStackX_10,&lStack_e8,&lStack_d8,param_4);
  uStack_e0 = uStackX_10;
  uStackX_10 = 0;
  FUN_1806efec0(param_3,&processed_var_9872_ptr,&uStackX_10,auStack_d0,&lStack_c0,param_4);
  uStack_c8 = uStackX_10;
  uStackX_20 = 0;
  FUN_1806efd00(param_3,&processed_var_8632_ptr,&uStackX_20,auStack_b0,&uStackX_10,param_4);
  uStack_a8 = uStackX_20;
  uStackX_20 = 0;
  FUN_1806efb40(param_3,&processed_var_8648_ptr,&uStackX_20,auStack_28,&uStackX_10,param_4);
  uStack_98 = (**(code **)(*param_4 + 0x18))(param_4);
  uStack_80 = 0;
  puStack_90 = &uStack_98;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_88 = &uStack_98;
  puStack_70 = &uStack_98;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f400000;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  FUN_1806f1810(&puStack_70,0x40);
  puStack_110 = &uStack_98;
  puStack_120 = &processed_var_8576_ptr;
  puStack_118 = &processed_var_8592_ptr;
  uStack_30 = 0x20;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if ((int)uStackX_10 != 0) {
    FUN_1806f19b0(&puStack_120,uStackX_20);
    lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&puStack_118);
    if (lVar1 != 0) goto LAB_1806ee47a;
  }
  uStack_108 = 0;
  puVar2 = (int32_t *)(**(code **)(*(int64_t *)param_5[1] + 0x10))();
  uStack_158 = *puVar2;
  uStack_154 = puVar2[1];
  uStack_150 = CONCAT17(uStack_150._7_1_,*(uint8_t *)(puVar2 + 2));
  uStack_148 = puVar2[4];
  uStack_144 = puVar2[5];
  uStack_140 = puVar2[6];
  uStack_13c = puVar2[7];
  uStack_12c = puVar2[0xb];
  uStack_130 = 1;
  uStack_138 = CONCAT44((int)((uint64_t)*(uint64_t *)(puVar2 + 8) >> 0x20),4);
  (**(code **)(*(int64_t *)param_5[1] + 8))((int64_t *)param_5[1],&uStack_158);
  (**(code **)(*(int64_t *)param_5[1] + 0x20))((int64_t *)param_5[1],&lStack_e8,&puStack_120,0);
  lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&puStack_118);
LAB_1806ee47a:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  puStack_120 = &processed_var_8576_ptr;
  *param_2 = &processed_var_9168_ptr;
  puStack_118 = &processed_var_8592_ptr;
  FUN_1806f1550(puStack_110,uStack_100);
  puStack_118 = &system_handler1_ptr;
  puStack_120 = &ui_system_data_1760_ptr;
  FUN_1806f1080(&puStack_90);
  return param_2;
}







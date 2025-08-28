#include "TaleWorlds.Native.Split.h"

// 99_part_10_part035_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806bb04d(void)
void FUN_1806bb04d(void)

{
  uint64_t uVar1;
  
  uVar1 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
  _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
            (uVar1,4,&processed_var_7040_ptr,0x18d,&processed_var_7680_ptr);
  return;
}



int64_t FUN_1806bb0a0(int64_t param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *puVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 * 8;
  if ((*(char *)(param_1 + 0x80) == '\0') && (uVar2 < 0x81)) {
    *(int8_t *)(param_1 + 0x80) = 1;
    return param_1;
  }
  if (uVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar6 = &ui_system_data_1728_ptr;
    }
    else {
      puVar6 = (void *)__std_type_info_name(0x180bfc538,0x180c827e0);
    }
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar2,puVar6,&rendering_buffer_2784_ptr,0x229);
    return lVar5;
  }
  return 0;
}



uint64_t FUN_1806bb0d2(void)

{
  char cVar1;
  int in_EAX;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  void *puVar5;
  
  if (in_EAX != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc538,0x180c827e0);
    }
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,in_EAX,puVar5,&rendering_buffer_2784_ptr,0x229);
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1806bb14a(void)

{
  return 0;
}



uint64_t FUN_1806bb158(void)

{
  return 0;
}



int64_t FUN_1806bb160(int64_t param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *puVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 * 0x34;
  if ((*(char *)(param_1 + 0x340) == '\0') && (uVar2 < 0x341)) {
    *(int8_t *)(param_1 + 0x340) = 1;
    return param_1;
  }
  if (uVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar6 = &ui_system_data_1728_ptr;
    }
    else {
      puVar6 = (void *)__std_type_info_name(0x180bfc508,0x180c827e0);
    }
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar2,puVar6,&rendering_buffer_2784_ptr,0x229);
    return lVar5;
  }
  return 0;
}



uint64_t FUN_1806bb18e(void)

{
  char cVar1;
  int in_EAX;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  void *puVar5;
  
  if (in_EAX != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc508,0x180c827e0);
    }
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,in_EAX,puVar5,&rendering_buffer_2784_ptr,0x229);
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1806bb206(void)

{
  return 0;
}



uint64_t FUN_1806bb214(void)

{
  return 0;
}



int64_t FUN_1806bb220(int64_t param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *puVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 * 0x1c;
  if ((*(char *)(param_1 + 0x1c0) == '\0') && (uVar2 < 0x1c1)) {
    *(int8_t *)(param_1 + 0x1c0) = 1;
    return param_1;
  }
  if (uVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar6 = &ui_system_data_1728_ptr;
    }
    else {
      puVar6 = (void *)__std_type_info_name(0x180bfc4e0,0x180c827e0);
    }
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar2,puVar6,&rendering_buffer_2784_ptr,0x229);
    return lVar5;
  }
  return 0;
}



uint64_t FUN_1806bb24e(void)

{
  char cVar1;
  int in_EAX;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  void *puVar5;
  
  if (in_EAX != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc4e0,0x180c827e0);
    }
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,in_EAX,puVar5,&rendering_buffer_2784_ptr,0x229);
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1806bb2c6(void)

{
  return 0;
}



uint64_t FUN_1806bb2d4(void)

{
  return 0;
}



uint64_t
FUN_1806bb2e0(uint64_t *param_1,float *param_2,uint64_t *param_3,float *param_4,uint *param_5,
             char param_6,int64_t *param_7,uint64_t param_8)

{
  uint uVar1;
  uint64_t uVar2;
  float *pfVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int8_t auStack_c8 [192];
  
  if (param_6 == '\0') {
    uVar2 = param_1[5];
    uVar1 = *(uint *)((int64_t)param_1 + 0x2c);
    *param_5 = *(uint *)((int64_t)param_1 + 0x24);
    param_5[1] = (uint)uVar2;
    param_5[2] = uVar1;
    uStack_128 = *(uint *)((int64_t)param_1 + 0x24);
    uStack_120 = *(uint *)((int64_t)param_1 + 0x2c);
    uStack_124 = (uint)param_1[5];
  }
  else {
    uStack_128 = *param_5;
    uStack_120 = param_5[2];
    uStack_124 = param_5[1];
  }
  uStack_128 = uStack_128 ^ 0x80000000;
  uStack_124 = uStack_124 ^ 0x80000000;
  uStack_120 = uStack_120 ^ 0x80000000;
  FUN_1806b9cb0(uStack_124,&uStack_128);
  *param_4 = *(float *)(param_1 + 6);
  uStack_110 = *param_1;
  uStack_108 = param_1[1];
  uStack_100 = param_1[2];
  uStack_f8 = param_1[3];
  uStack_f0 = (int32_t)param_1[4];
  pfVar3 = (float *)_PxDiagonalize_physx__YA_AVPxVec3_1_AEBVPxMat33_1_AEAVPxQuat_1__Z
                              (&uStack_128,&uStack_110,param_3);
  fVar5 = *pfVar3;
  *param_2 = fVar5;
  fVar6 = pfVar3[1];
  param_2[1] = fVar6;
  fVar7 = pfVar3[2];
  param_2[2] = fVar7;
  if (((fVar5 <= 0.0) || (fVar6 <= 0.0)) || (fVar7 <= 0.0)) {
    uVar4 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar4,2,&processed_var_7040_ptr,0x54,&processed_var_6896_ptr,param_8);
    (**(code **)(*param_7 + 0x48))(param_7,&uStack_128,0x3f8147ae);
    (**(code **)(*param_7 + 0x90))(param_7,&fStack_e8);
    fVar9 = -(fStack_d8 + fStack_d8);
    fVar7 = -(fStack_d4 + fStack_d4);
    fVar8 = fStack_dc * fStack_dc - 0.5;
    fVar6 = -(fStack_d0 + fStack_d0);
    fVar5 = fStack_e4 * fVar7 + fStack_e8 * fVar9 + fStack_e0 * fVar6;
    uStack_108 = CONCAT44(fStack_dc,fStack_e0) ^ 0x80000000;
    uStack_110 = CONCAT44(fStack_e4,fStack_e8) ^ 0x8000000080000000;
    uStack_100 = CONCAT44((fVar8 * fVar7 - (fStack_e0 * fVar9 - fStack_e8 * fVar6) * fStack_dc) +
                          fStack_e4 * fVar5,
                          (fVar8 * fVar9 - (fStack_e4 * fVar6 - fStack_e0 * fVar7) * fStack_dc) +
                          fStack_e8 * fVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,
                         (fVar8 * fVar6 - (fStack_e8 * fVar7 - fStack_e4 * fVar9) * fStack_dc) +
                         fStack_e0 * fVar5);
    pfVar3 = (float *)FUN_1806beae0(auStack_c8,&uStack_110,&uStack_128);
    fVar6 = pfVar3[3] - *pfVar3;
    fVar7 = pfVar3[4] - pfVar3[1];
    fVar8 = pfVar3[5] - pfVar3[2];
    fVar5 = 1.0;
    if (fVar6 * 0.5 != 0.0) {
      fVar5 = fVar6 * 0.5;
    }
    if (fVar7 * 0.5 != 0.0) {
      fVar5 = fVar5 * fVar7 * 0.5;
    }
    if (fVar8 * 0.5 != 0.0) {
      fVar5 = fVar5 * fVar8 * 0.5;
    }
    fVar9 = *param_4 / (fVar5 * 8.0);
    fVar5 = fVar5 * 8.0 * 0.33333334;
    fVar6 = fVar6 * fVar6 * 0.25;
    fVar8 = fVar8 * fVar8 * 0.25;
    fVar7 = fVar7 * fVar7 * 0.25;
    param_2[1] = (fVar6 + fVar8) * fVar5 * fVar9;
    *param_2 = (fVar8 + fVar7) * fVar5 * fVar9;
    param_2[2] = (fVar6 + fVar7) * fVar5 * fVar9;
    *param_3 = 0;
    *(int32_t *)(param_3 + 1) = 0;
    *(int32_t *)((int64_t)param_3 + 0xc) = 0x3f800000;
  }
  return 1;
}



uint64_t FUN_1806bb40d(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  float *pfVar3;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  float *unaff_RDI;
  float *unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int32_t in_stack_00000030;
  int32_t in_stack_00000038;
  int32_t in_stack_00000040;
  uint in_stack_00000048;
  uint uStack000000000000004c;
  uint in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
  _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
            (uVar2,2,&processed_var_7040_ptr,0x54,&processed_var_6896_ptr);
  plVar1 = *(int64_t **)(unaff_RBP + 0x90);
  (**(code **)(*plVar1 + 0x48))(plVar1,&stack0x00000030,0x3f8147ae);
  (**(code **)(*plVar1 + 0x90))(plVar1,&stack0x00000070);
  fVar8 = (float)((uint)(*(float *)(unaff_RBP + -0x80) + *(float *)(unaff_RBP + -0x80)) ^
                 unaff_XMM14_Da);
  fStack0000000000000054 = fStack000000000000007c;
  fVar6 = (float)((uint)(*(float *)(unaff_RBP + -0x7c) + *(float *)(unaff_RBP + -0x7c)) ^
                 unaff_XMM14_Da);
  fVar7 = fStack000000000000007c * fStack000000000000007c - 0.5;
  fVar5 = (float)((uint)(*(float *)(unaff_RBP + -0x78) + *(float *)(unaff_RBP + -0x78)) ^
                 unaff_XMM14_Da);
  in_stack_00000048 = (uint)fStack0000000000000070 ^ unaff_XMM14_Da;
  in_stack_00000050 = (uint)fStack0000000000000078 ^ unaff_XMM14_Da;
  fVar4 = fStack0000000000000074 * fVar6 + fStack0000000000000070 * fVar8 +
          fStack0000000000000078 * fVar5;
  uStack000000000000004c = (uint)fStack0000000000000074 ^ unaff_XMM14_Da;
  in_stack_00000058 =
       (fVar7 * fVar8 -
       (fStack0000000000000074 * fVar5 - fStack0000000000000078 * fVar6) * fStack000000000000007c) +
       fStack0000000000000070 * fVar4;
  fStack000000000000005c =
       (fVar7 * fVar6 -
       (fStack0000000000000078 * fVar8 - fStack0000000000000070 * fVar5) * fStack000000000000007c) +
       fStack0000000000000074 * fVar4;
  in_stack_00000060 =
       (fVar7 * fVar5 -
       (fStack0000000000000070 * fVar6 - fStack0000000000000074 * fVar8) * fStack000000000000007c) +
       fStack0000000000000078 * fVar4;
  pfVar3 = (float *)FUN_1806beae0(unaff_RBP + -0x70,&stack0x00000048,&stack0x00000030);
  fVar5 = pfVar3[3] - *pfVar3;
  fVar6 = pfVar3[4] - pfVar3[1];
  fVar7 = pfVar3[5] - pfVar3[2];
  fVar4 = 1.0;
  if (fVar5 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar5 * 0.5;
  }
  if (fVar6 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar4 * fVar6 * 0.5;
  }
  if (fVar7 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar4 * fVar7 * 0.5;
  }
  fVar8 = *unaff_R14 / (fVar4 * 8.0);
  fVar4 = fVar4 * 8.0 * 0.33333334;
  fVar5 = fVar5 * fVar5 * 0.25;
  fVar7 = fVar7 * fVar7 * 0.25;
  fVar6 = fVar6 * fVar6 * 0.25;
  unaff_RDI[1] = (fVar5 + fVar7) * fVar4 * fVar8;
  *unaff_RDI = (fVar7 + fVar6) * fVar4 * fVar8;
  unaff_RDI[2] = (fVar5 + fVar6) * fVar4 * fVar8;
  *unaff_RSI = 0;
  *(int32_t *)(unaff_RSI + 1) = 0;
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x3f800000;
  return 1;
}



uint64_t FUN_1806bb415(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  float *pfVar3;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  float *unaff_RDI;
  float *unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int32_t in_stack_00000030;
  int32_t in_stack_00000038;
  int32_t in_stack_00000040;
  uint in_stack_00000048;
  uint uStack000000000000004c;
  uint in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
  _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
            (uVar2,2,&processed_var_7040_ptr,0x54,&processed_var_6896_ptr);
  plVar1 = *(int64_t **)(unaff_RBP + 0x90);
  (**(code **)(*plVar1 + 0x48))(plVar1,&stack0x00000030,0x3f8147ae);
  (**(code **)(*plVar1 + 0x90))(plVar1,&stack0x00000070);
  fVar8 = (float)((uint)(*(float *)(unaff_RBP + -0x80) + *(float *)(unaff_RBP + -0x80)) ^
                 unaff_XMM14_Da);
  fStack0000000000000054 = fStack000000000000007c;
  fVar6 = (float)((uint)(*(float *)(unaff_RBP + -0x7c) + *(float *)(unaff_RBP + -0x7c)) ^
                 unaff_XMM14_Da);
  fVar7 = fStack000000000000007c * fStack000000000000007c - 0.5;
  fVar5 = (float)((uint)(*(float *)(unaff_RBP + -0x78) + *(float *)(unaff_RBP + -0x78)) ^
                 unaff_XMM14_Da);
  in_stack_00000048 = (uint)fStack0000000000000070 ^ unaff_XMM14_Da;
  in_stack_00000050 = (uint)fStack0000000000000078 ^ unaff_XMM14_Da;
  fVar4 = fStack0000000000000074 * fVar6 + fStack0000000000000070 * fVar8 +
          fStack0000000000000078 * fVar5;
  uStack000000000000004c = (uint)fStack0000000000000074 ^ unaff_XMM14_Da;
  in_stack_00000058 =
       (fVar7 * fVar8 -
       (fStack0000000000000074 * fVar5 - fStack0000000000000078 * fVar6) * fStack000000000000007c) +
       fStack0000000000000070 * fVar4;
  fStack000000000000005c =
       (fVar7 * fVar6 -
       (fStack0000000000000078 * fVar8 - fStack0000000000000070 * fVar5) * fStack000000000000007c) +
       fStack0000000000000074 * fVar4;
  in_stack_00000060 =
       (fVar7 * fVar5 -
       (fStack0000000000000070 * fVar6 - fStack0000000000000074 * fVar8) * fStack000000000000007c) +
       fStack0000000000000078 * fVar4;
  pfVar3 = (float *)FUN_1806beae0(unaff_RBP + -0x70,&stack0x00000048,&stack0x00000030);
  fVar5 = pfVar3[3] - *pfVar3;
  fVar6 = pfVar3[4] - pfVar3[1];
  fVar7 = pfVar3[5] - pfVar3[2];
  fVar4 = 1.0;
  if (fVar5 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar5 * 0.5;
  }
  if (fVar6 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar4 * fVar6 * 0.5;
  }
  if (fVar7 * 0.5 != unaff_XMM15_Da) {
    fVar4 = fVar4 * fVar7 * 0.5;
  }
  fVar8 = *unaff_R14 / (fVar4 * 8.0);
  fVar4 = fVar4 * 8.0 * 0.33333334;
  fVar5 = fVar5 * fVar5 * 0.25;
  fVar7 = fVar7 * fVar7 * 0.25;
  fVar6 = fVar6 * fVar6 * 0.25;
  unaff_RDI[1] = (fVar5 + fVar7) * fVar4 * fVar8;
  *unaff_RDI = (fVar7 + fVar6) * fVar4 * fVar8;
  unaff_RDI[2] = (fVar5 + fVar6) * fVar4 * fVar8;
  *unaff_RSI = 0;
  *(int32_t *)(unaff_RSI + 1) = 0;
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x3f800000;
  return 1;
}



uint64_t FUN_1806bb6bd(float param_1,uint64_t param_2,float param_3,float param_4)

{
  uint64_t *unaff_RSI;
  float *unaff_RDI;
  float *unaff_R14;
  float fVar1;
  float fVar2;
  float in_XMM4_Da;
  float fVar3;
  float in_XMM5_Da;
  float fVar4;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM15_Da;
  
  if (param_3 != unaff_XMM15_Da) {
    param_4 = param_4 * param_3;
  }
  if (param_1 != unaff_XMM15_Da) {
    param_4 = param_4 * param_1;
  }
  fVar1 = *unaff_R14 / (param_4 * 8.0);
  fVar2 = param_4 * 8.0 * 0.33333334;
  fVar3 = in_XMM4_Da * in_XMM4_Da * 0.25;
  fVar5 = unaff_XMM6_Da * unaff_XMM6_Da * 0.25;
  fVar4 = in_XMM5_Da * in_XMM5_Da * 0.25;
  unaff_RDI[1] = (fVar3 + fVar5) * fVar2 * fVar1;
  *unaff_RDI = (fVar5 + fVar4) * fVar2 * fVar1;
  unaff_RDI[2] = (fVar3 + fVar4) * fVar2 * fVar1;
  *unaff_RSI = 0;
  *(int32_t *)(unaff_RSI + 1) = 0;
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x3f800000;
  return 1;
}



int8_t FUN_1806bb75f(void)

{
  return 1;
}



uint64_t
FUN_1806bb790(char param_1,int64_t *param_2,float *param_3,float *param_4,uint param_5,char param_6
             ,float *param_7)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puVar4;
  byte *pbVar5;
  uint64_t uVar6;
  float *pfVar7;
  int8_t *puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uStackX_10;
  float fStackX_18;
  float *pfStackX_20;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  float fStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  int32_t uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint64_t uStack_1c4;
  float fStack_1bc;
  int64_t *plStack_1b8;
  int8_t uStack_1b0;
  int16_t uStack_1af;
  int8_t uStack_1ad;
  int8_t auStack_1a8 [48];
  int8_t auStack_178 [128];
  int8_t uStack_f8;
  int8_t *puStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  
  uVar10 = 0;
  fVar27 = 0.0;
  puStack_f0 = auStack_178;
  uStack_e8 = 0;
  fStack_2a8 = 0.0;
  fStack_2a4 = 0.0;
  fStack_2a0 = 0.0;
  fStack_29c = 0.0;
  uStack_f8 = 1;
  fStack_298 = 0.0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  fStack_28c = 0.0;
  uStack_e4 = 0x10;
  fStack_288 = 0.0;
  fStack_284 = 0.0;
  fStack_280 = 0.0;
  fStack_27c = 0.0;
  uStackX_10 = 0;
  pfStackX_20 = param_4;
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_1806bcd20(auStack_178,uVar1,&uStackX_10);
  (**(code **)(*param_2 + 0xb8))(param_2,puStack_f0,uStack_e8,0);
  pfVar13 = param_3;
  if (param_3 == (float *)0x0) {
    pfVar13 = param_4;
  }
  fVar26 = *pfVar13;
  uVar2 = _fpclass(SUB84((double)fVar26,0));
  if ((uVar2 & 0x207) == 0) {
    fVar14 = fStack_27c;
    fVar16 = fStack_280;
    fVar17 = fStack_294;
    fVar18 = fStack_298;
    fVar20 = fStack_29c;
    fVar22 = fStack_2a0;
    fVar24 = fStack_284;
    fVar19 = fStack_288;
    fVar21 = fStack_28c;
    fVar23 = fStack_290;
    fVar15 = fStack_2a4;
    fVar25 = fStack_2a8;
    if (uStack_e8 != 0) {
      fStack_264 = fStack_27c;
      fStack_260 = fStack_280;
      fStack_25c = fStack_294;
      fStack_258 = fStack_298;
      fStack_270 = fStack_2a4;
      fStackX_18 = fStack_284;
      fStack_230 = fStack_288;
      fStack_234 = fStack_28c;
      fStack_238 = fStack_290;
      fStack_254 = fStack_29c;
      fStack_250 = fStack_2a0;
      fStack_26c = fStack_2a8;
      uVar2 = uVar10;
      do {
        pbVar5 = (byte *)(**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x130))
                                   (*(int64_t **)(puStack_f0 + uVar2 * 8),&uStackX_10);
        if (((*pbVar5 & 1) != 0) || (param_6 != '\0')) {
          if (param_1 != '\0') {
            if (param_5 <= (uint)uVar10) {
              uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              uVar12 = 0x99;
              puVar4 = &processed_var_7200_ptr;
              goto LAB_1806bc2b9;
            }
            fVar26 = pfVar13[uVar10];
            uVar6 = _fpclass(SUB84((double)fVar26,0));
            if ((uVar6 & 0x207) != 0) {
              uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              uVar12 = 0x92;
              puVar4 = &processed_var_7120_ptr;
              goto LAB_1806bc2b9;
            }
          }
          uVar1 = (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x38))();
          switch(uVar1) {
          case 0:
            uStack_200 = 0;
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x58))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),&uStack_200);
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x98))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),auStack_1a8);
            fStack_278 = uStack_200._4_4_ * 4.1887903 * uStack_200._4_4_ * uStack_200._4_4_;
            fStack_2a8 = fStack_278 * uStack_200._4_4_ * uStack_200._4_4_ * 0.4;
            fStack_298 = fStack_2a8;
            fStack_288 = fStack_2a8;
            break;
          case 2:
            uStack_1f8 = 2;
            fStack_1f0 = 0.0;
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x60))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),&uStack_1f8);
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x98))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),auStack_1a8);
            fVar14 = uStack_1f8._4_4_ * fStack_1f0 * uStack_1f8._4_4_;
            fVar17 = uStack_1f8._4_4_ * 3.1415927 * uStack_1f8._4_4_;
            fVar16 = uStack_1f8._4_4_ * uStack_1f8._4_4_ * uStack_1f8._4_4_ * 0.53333336;
            fStack_2a8 = (fVar14 + fVar16) * fVar17;
            fStack_298 = (fStack_1f0 * fStack_1f0 * uStack_1f8._4_4_ * 1.3333334 +
                          fVar14 * 1.5 + fVar16 + fStack_1f0 * fStack_1f0 * fStack_1f0 * 0.6666667)
                         * fVar17;
            fStack_278 = uStack_1f8._4_4_ * 4.1887903 * uStack_1f8._4_4_ * uStack_1f8._4_4_ +
                         fStack_1f0 * 2.0 * fVar17;
            fStack_288 = fStack_298;
            break;
          case 3:
            uStack_1e8 = 3;
            uStack_1e0 = 0;
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x50))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),&uStack_1e8);
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x98))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),auStack_1a8);
            fStack_278 = 1.0;
            if (uStack_1e8._4_4_ != 0.0) {
              fStack_278 = uStack_1e8._4_4_;
            }
            if ((float)uStack_1e0 != 0.0) {
              fStack_278 = fStack_278 * (float)uStack_1e0;
            }
            if (uStack_1e0._4_4_ != 0.0) {
              fStack_278 = fStack_278 * uStack_1e0._4_4_;
            }
            fStack_278 = fStack_278 * 8.0;
            fStack_298 = fStack_278 * 0.33333334;
            fStack_2a8 = (uStack_1e0._4_4_ * uStack_1e0._4_4_ +
                         (float)uStack_1e0 * (float)uStack_1e0) * fStack_298;
            fStack_288 = ((float)uStack_1e0 * (float)uStack_1e0 +
                         uStack_1e8._4_4_ * uStack_1e8._4_4_) * fStack_298;
            fStack_298 = (uStack_1e0._4_4_ * uStack_1e0._4_4_ + uStack_1e8._4_4_ * uStack_1e8._4_4_)
                         * fStack_298;
            break;
          case 4:
            uStack_1d8 = 4;
            plStack_1b8 = (int64_t *)0x0;
            uStack_1af = 0;
            uStack_1ad = 0;
            fStack_1d4 = 1.0;
            fStack_1d0 = 1.0;
            fStack_1cc = 1.0;
            fStack_1c8 = 0.0;
            uStack_1c4 = 0;
            fStack_1bc = 1.0;
            uStack_1b0 = 1;
            (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x70))
                      (*(int64_t **)(puStack_f0 + uVar2 * 8),&uStack_1d8);
            (**(code **)(*plStack_1b8 + 0x60))(plStack_1b8,&fStack_268,&fStack_228,&fStack_248);
            if (((fStack_1d4 != 1.0) || (fStack_1d0 != 1.0)) || (fStack_1cc != 1.0)) {
              fVar20 = fStack_1bc * fStack_1bc - 0.5;
              fStack_268 = fStack_268 * fStack_1d0 * fStack_1d4 * fStack_1cc;
              fStack_244 = fStack_244 * 2.0;
              fStack_248 = fStack_248 * 2.0;
              fStack_240 = fStack_240 * 2.0;
              fVar14 = fStack_244 * (float)uStack_1c4 + fStack_248 * fStack_1c8 +
                       fStack_240 * uStack_1c4._4_4_;
              fVar17 = ((fStack_240 * (float)uStack_1c4 - fStack_244 * uStack_1c4._4_4_) *
                        fStack_1bc + fVar20 * fStack_248 + fVar14 * fStack_1c8) * fStack_1d4;
              fVar17 = fVar17 + fVar17;
              fVar16 = ((fStack_248 * uStack_1c4._4_4_ - fStack_240 * fStack_1c8) * fStack_1bc +
                        fVar20 * fStack_244 + fVar14 * (float)uStack_1c4) * fStack_1d0;
              fVar16 = fVar16 + fVar16;
              fVar18 = ((fStack_244 * fStack_1c8 - fStack_248 * (float)uStack_1c4) * fStack_1bc +
                        fVar20 * fStack_240 + fVar14 * uStack_1c4._4_4_) * fStack_1cc;
              fVar18 = fVar18 + fVar18;
              fVar14 = fVar16 * (float)uStack_1c4 + fVar17 * fStack_1c8 + fVar18 * uStack_1c4._4_4_;
              fStack_248 = (fVar20 * fVar17 -
                           (fVar18 * (float)uStack_1c4 - fVar16 * uStack_1c4._4_4_) * fStack_1bc) +
                           fVar14 * fStack_1c8;
              fStack_240 = (fVar20 * fVar18 -
                           (fVar16 * fStack_1c8 - fVar17 * (float)uStack_1c4) * fStack_1bc) +
                           fVar14 * uStack_1c4._4_4_;
              fStack_244 = (fVar20 * fVar16 -
                           (fVar17 * uStack_1c4._4_4_ - fVar18 * fStack_1c8) * fStack_1bc) +
                           fVar14 * (float)uStack_1c4;
              pfVar7 = (float *)FUN_1806bd2c0(auStack_1a8,&fStack_228,&fStack_1c8,&fStack_1d4);
              fStack_228 = *pfVar7;
              fStack_224 = pfVar7[1];
              fStack_220 = pfVar7[2];
              fStack_21c = pfVar7[3];
              fStack_218 = pfVar7[4];
              fStack_214 = pfVar7[5];
              fStack_210 = pfVar7[6];
              fStack_20c = pfVar7[7];
              fStack_208 = pfVar7[8];
            }
            fStack_284 = fStack_248;
            fStack_280 = fStack_244;
            fStack_27c = fStack_240;
            fStack_278 = fStack_268;
            fStack_2a8 = fStack_228;
            fStack_2a4 = fStack_224;
            fStack_2a0 = fStack_220;
            fStack_29c = fStack_21c;
            fStack_298 = fStack_218;
            fStack_294 = fStack_214;
            fStack_290 = fStack_210;
            fStack_28c = fStack_20c;
            fStack_288 = fStack_208;
            puVar8 = (int8_t *)
                     (**(code **)(**(int64_t **)(puStack_f0 + uVar2 * 8) + 0x98))
                               (*(int64_t **)(puStack_f0 + uVar2 * 8),auStack_1a8);
            goto code_r0x0001806bc006;
          case 0xffffffff:
          case 1:
          case 5:
          case 6:
          case 7:
            uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar3,4,&processed_var_7040_ptr,0xe7,&processed_var_7296_ptr);
            uVar3 = 0;
            goto LAB_1806bc39d;
          default:
            goto LAB_1806bc010;
          }
          fStack_2a4 = 0.0;
          fStack_2a0 = 0.0;
          puVar8 = auStack_1a8;
          fStack_29c = 0.0;
          fStack_294 = 0.0;
          fStack_290 = 0.0;
          fStack_28c = 0.0;
          fStack_284 = 0.0;
          fStack_280 = 0.0;
          fStack_27c = 0.0;
code_r0x0001806bc006:
          FUN_1806be960(&fStack_2a8,puVar8);
LAB_1806bc010:
          if (param_3 == (float *)0x0) {
            fVar14 = fStack_278;
            fVar16 = fStack_2a8;
            fVar17 = fStack_2a4;
            fVar18 = fStack_2a0;
            fVar20 = fStack_29c;
            fVar22 = fStack_298;
            fVar24 = fStack_294;
            fVar23 = fStack_290;
            fVar21 = fStack_28c;
            fVar19 = fStack_288;
            if (param_1 != '\0') {
              fVar14 = fVar26 / fStack_278;
              fVar16 = fStack_2a8 * fVar14;
              fVar17 = fStack_2a4 * fVar14;
              fVar18 = fStack_2a0 * fVar14;
              fVar20 = fStack_29c * fVar14;
              fVar22 = fStack_298 * fVar14;
              fVar24 = fStack_294 * fVar14;
              fVar23 = fStack_290 * fVar14;
              fVar21 = fStack_28c * fVar14;
              fVar19 = fStack_288 * fVar14;
              fVar14 = fStack_278 * fVar14;
            }
          }
          else {
            fVar14 = fStack_278 * fVar26;
            fVar16 = fStack_2a8 * fVar26;
            fVar17 = fStack_2a4 * fVar26;
            fVar18 = fStack_2a0 * fVar26;
            fVar20 = fStack_29c * fVar26;
            fVar22 = fStack_298 * fVar26;
            fVar24 = fStack_294 * fVar26;
            fVar23 = fStack_290 * fVar26;
            fVar21 = fStack_28c * fVar26;
            fVar19 = fStack_288 * fVar26;
          }
          uVar10 = (uint64_t)((uint)uVar10 + 1);
          fVar15 = 1.0 / (fVar14 + fVar27);
          fStackX_18 = (fVar27 * fStackX_18 + fVar14 * fStack_284) * fVar15;
          fStack_258 = fStack_258 + fVar22;
          fStack_254 = fStack_254 + fVar20;
          fVar23 = fStack_238 + fVar23;
          fStack_260 = (fVar27 * fStack_260 + fVar14 * fStack_280) * fVar15;
          fVar21 = fStack_234 + fVar21;
          fStack_264 = (fVar27 * fStack_264 + fVar14 * fStack_27c) * fVar15;
          fStack_26c = fStack_26c + fVar16;
          fStack_250 = fStack_250 + fVar18;
          fVar19 = fStack_230 + fVar19;
          fStack_270 = fStack_270 + fVar17;
          fStack_25c = fStack_25c + fVar24;
          fVar27 = fVar14 + fVar27;
          fStack_238 = fVar23;
          fStack_234 = fVar21;
          fStack_230 = fVar19;
        }
        uVar11 = (int)uVar2 + 1;
        uVar2 = (uint64_t)uVar11;
      } while (uVar11 < uStack_e8);
      fVar14 = fStack_264;
      fVar16 = fStack_260;
      fVar17 = fStack_25c;
      fVar18 = fStack_258;
      fVar20 = fStack_254;
      fVar22 = fStack_250;
      fVar24 = fStackX_18;
      fVar15 = fStack_270;
      fVar25 = fStack_26c;
      if ((((int)uVar10 != 0) && (pfStackX_20 != (float *)0x0)) && (param_1 == '\0')) {
        fVar26 = fVar26 / fVar27;
        fVar27 = fVar27 * fVar26;
        fVar17 = fStack_25c * fVar26;
        fVar18 = fStack_258 * fVar26;
        fVar20 = fStack_254 * fVar26;
        fVar22 = fStack_250 * fVar26;
        fVar19 = fVar19 * fVar26;
        fVar21 = fVar21 * fVar26;
        fVar23 = fVar23 * fVar26;
        fVar15 = fStack_270 * fVar26;
        fVar25 = fStack_26c * fVar26;
      }
    }
    uVar3 = 1;
    *param_7 = fVar25;
    param_7[1] = fVar15;
    param_7[2] = fVar22;
    param_7[3] = fVar20;
    param_7[4] = fVar18;
    param_7[5] = fVar17;
    param_7[6] = fVar23;
    param_7[7] = fVar21;
    param_7[8] = fVar19;
    param_7[9] = fVar24;
    param_7[10] = fVar16;
    param_7[0xb] = fVar14;
    param_7[0xc] = fVar27;
  }
  else {
    uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    uVar12 = 0x80;
    puVar4 = &processed_var_7120_ptr;
LAB_1806bc2b9:
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar3,4,&processed_var_7040_ptr,uVar12,puVar4);
    uVar3 = 0;
  }
LAB_1806bc39d:
  puVar8 = puStack_f0;
  if ((((uStack_e4 & 0x7fffffff) != 0) && (-1 < (int)uStack_e4)) &&
     ((puStack_f0 != auStack_178 && (puStack_f0 != (int8_t *)0x0)))) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,puVar8);
  }
  return uVar3;
}



uint64_t FUN_1806bb7a8(char param_1,int64_t *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t uVar5;
  void *puVar6;
  byte *pbVar7;
  uint64_t uVar8;
  float *pfVar9;
  int32_t *puVar10;
  int64_t *plVar11;
  int32_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t unaff_XMM6_Da;
  float fVar22;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar23;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar24;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar25;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar26;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar27;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar28;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar29;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  uVar12 = 0;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM15_Dd;
  fVar29 = 0.0;
  unaff_RBP[0x3c] = 0;
  *(int32_t **)(unaff_RBP + 0x3a) = unaff_RBP + 0x18;
  lVar2 = *param_2;
  fStack0000000000000030 = 0.0;
  fStack0000000000000034 = 0.0;
  fStack0000000000000038 = 0.0;
  fStack000000000000003c = 0.0;
  *(int8_t *)(unaff_RBP + 0x38) = 1;
  fStack0000000000000040 = 0.0;
  fStack0000000000000044 = 0.0;
  fStack0000000000000048 = 0.0;
  fStack000000000000004c = 0.0;
  unaff_RBP[0x3d] = 0x10;
  fStack0000000000000050 = 0.0;
  fStack0000000000000054 = 0.0;
  fStack0000000000000058 = 0.0;
  fStack000000000000005c = 0.0;
  *(uint64_t *)(unaff_RBP + 0x7a) = 0;
  uVar3 = (**(code **)(lVar2 + 0xb0))(param_2);
  FUN_1806bcd20(unaff_RBP + 0x18,uVar3,unaff_RBP + 0x7a);
  (**(code **)(*param_2 + 0xb8))(param_2,*(uint64_t *)(unaff_RBP + 0x3a),unaff_RBP[0x3c],0);
  pfVar15 = param_3;
  if (param_3 == (float *)0x0) {
    pfVar15 = param_4;
  }
  fVar28 = *pfVar15;
  uVar4 = _fpclass(SUB84((double)fVar28,0));
  if ((uVar4 & 0x207) == 0) {
    fVar16 = fStack000000000000005c;
    fVar20 = fStack0000000000000058;
    fVar22 = fStack0000000000000044;
    fVar18 = fStack0000000000000040;
    fVar19 = fStack000000000000003c;
    fVar21 = fStack0000000000000038;
    fVar26 = fStack0000000000000054;
    fVar23 = fStack0000000000000050;
    fVar24 = fStack000000000000004c;
    fVar25 = fStack0000000000000048;
    fVar17 = fStack0000000000000034;
    fVar27 = fStack0000000000000030;
    if (unaff_RBP[0x3c] != 0) {
      uVar1 = unaff_RBP[0x80];
      fStack0000000000000074 = fStack000000000000005c;
      fStack0000000000000078 = fStack0000000000000058;
      fStack000000000000007c = fStack0000000000000044;
      unaff_RBP[-0x20] = fStack0000000000000040;
      fStack0000000000000068 = fStack0000000000000034;
      unaff_RBP[0x7c] = fStack0000000000000054;
      unaff_RBP[-0x16] = fStack0000000000000050;
      unaff_RBP[-0x17] = fStack000000000000004c;
      unaff_RBP[-0x18] = fStack0000000000000048;
      unaff_RBP[-0x1f] = fStack000000000000003c;
      unaff_RBP[-0x1e] = fStack0000000000000038;
      fStack000000000000006c = fStack0000000000000030;
      uVar4 = uVar12;
      do {
        plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
        pbVar7 = (byte *)(**(code **)(*plVar11 + 0x130))(plVar11,unaff_RBP + 0x7a);
        if (((*pbVar7 & 1) == 0) && (*(char *)(unaff_RBP + 0x82) == '\0')) {
          fVar18 = (float)unaff_RBP[-0x20];
          fVar19 = (float)unaff_RBP[-0x1f];
          fVar21 = (float)unaff_RBP[-0x1e];
        }
        else {
          if (param_1 != '\0') {
            if (uVar1 <= (uint)uVar12) {
              uVar5 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              uVar14 = 0x99;
              puVar6 = &processed_var_7200_ptr;
              goto LAB_1806bc2b9;
            }
            fVar28 = pfVar15[uVar12];
            uVar8 = _fpclass(SUB84((double)fVar28,0));
            if ((uVar8 & 0x207) != 0) {
              uVar5 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              uVar14 = 0x92;
              puVar6 = &processed_var_7120_ptr;
              goto LAB_1806bc2b9;
            }
          }
          uVar3 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8) + 0x38))
                            ();
          switch(uVar3) {
          case 0:
            *(uint64_t *)(unaff_RBP + -10) = 0;
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x58))(plVar11,unaff_RBP + -10);
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x98))(plVar11,unaff_RBP + 0xc);
            fVar18 = (float)unaff_RBP[-9];
            in_stack_00000060 = fVar18 * 4.1887903 * fVar18 * fVar18;
            fStack0000000000000030 = in_stack_00000060 * fVar18 * fVar18 * 0.4;
            fStack0000000000000040 = fStack0000000000000030;
            fStack0000000000000050 = fStack0000000000000030;
            break;
          case 2:
            *(uint64_t *)(unaff_RBP + -8) = 2;
            unaff_RBP[-6] = 0;
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x60))(plVar11,unaff_RBP + -8);
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x98))(plVar11,unaff_RBP + 0xc);
            fVar18 = (float)unaff_RBP[-7];
            fVar19 = (float)unaff_RBP[-6];
            fVar21 = fVar18 * fVar19 * fVar18;
            fVar20 = fVar18 * 3.1415927 * fVar18;
            fVar16 = fVar18 * fVar18 * fVar18 * 0.53333336;
            fStack0000000000000030 = (fVar21 + fVar16) * fVar20;
            fStack0000000000000040 =
                 (fVar19 * fVar19 * fVar18 * 1.3333334 + fVar21 * 1.5 + fVar16 +
                 fVar19 * fVar19 * fVar19 * 0.6666667) * fVar20;
            in_stack_00000060 = fVar18 * 4.1887903 * fVar18 * fVar18 + fVar19 * 2.0 * fVar20;
            fStack0000000000000050 = fStack0000000000000040;
            break;
          case 3:
            *(uint64_t *)(unaff_RBP + -4) = 3;
            *(uint64_t *)(unaff_RBP + -2) = 0;
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x50))(plVar11,unaff_RBP + -4);
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            (**(code **)(*plVar11 + 0x98))(plVar11,unaff_RBP + 0xc);
            fVar18 = (float)unaff_RBP[-3];
            in_stack_00000060 = 1.0;
            if (fVar18 != 0.0) {
              in_stack_00000060 = fVar18;
            }
            fVar19 = (float)unaff_RBP[-2];
            if (fVar19 != 0.0) {
              in_stack_00000060 = in_stack_00000060 * fVar19;
            }
            fVar21 = (float)unaff_RBP[-1];
            if (fVar21 != 0.0) {
              in_stack_00000060 = in_stack_00000060 * fVar21;
            }
            in_stack_00000060 = in_stack_00000060 * 8.0;
            fStack0000000000000040 = in_stack_00000060 * 0.33333334;
            fStack0000000000000030 = (fVar21 * fVar21 + fVar19 * fVar19) * fStack0000000000000040;
            fStack0000000000000050 = (fVar19 * fVar19 + fVar18 * fVar18) * fStack0000000000000040;
            fStack0000000000000040 = (fVar21 * fVar21 + fVar18 * fVar18) * fStack0000000000000040;
            break;
          case 4:
            *unaff_RBP = 4;
            *(uint64_t *)(unaff_RBP + 8) = 0;
            *(int16_t *)((int64_t)unaff_RBP + 0x29) = 0;
            *(int8_t *)((int64_t)unaff_RBP + 0x2b) = 0;
            unaff_RBP[1] = 0x3f800000;
            unaff_RBP[2] = 0x3f800000;
            unaff_RBP[3] = 0x3f800000;
            unaff_RBP[4] = 0;
            *(uint64_t *)(unaff_RBP + 5) = 0;
            unaff_RBP[7] = 0x3f800000;
            *(int8_t *)(unaff_RBP + 10) = 1;
            (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8) + 0x70))();
            (**(code **)(**(int64_t **)(unaff_RBP + 8) + 0x60))
                      (*(int64_t **)(unaff_RBP + 8),&stack0x00000070,unaff_RBP + -0x14,
                       unaff_RBP + -0x1c);
            fVar18 = (float)unaff_RBP[1];
            fVar19 = (float)unaff_RBP[3];
            if (((fVar18 == 1.0) && ((float)unaff_RBP[2] == 1.0)) && (fVar19 == 1.0)) {
              fStack0000000000000050 = (float)unaff_RBP[-0xc];
              fStack000000000000004c = (float)unaff_RBP[-0xd];
              fStack0000000000000048 = (float)unaff_RBP[-0xe];
              fStack0000000000000044 = (float)unaff_RBP[-0xf];
              fStack0000000000000040 = (float)unaff_RBP[-0x10];
              fStack000000000000003c = (float)unaff_RBP[-0x11];
              fStack0000000000000038 = (float)unaff_RBP[-0x12];
              fStack0000000000000034 = (float)unaff_RBP[-0x13];
              fStack0000000000000030 = (float)unaff_RBP[-0x14];
            }
            else {
              fVar21 = (float)unaff_RBP[5];
              fVar16 = (float)unaff_RBP[6];
              fVar20 = (float)unaff_RBP[4];
              fVar22 = (float)unaff_RBP[7];
              fVar27 = fVar22 * fVar22 - 0.5;
              fStack0000000000000070 =
                   fStack0000000000000070 * (float)unaff_RBP[2] * fVar18 * fVar19;
              fVar17 = (float)unaff_RBP[-0x1b] * 2.0;
              fVar24 = (float)unaff_RBP[-0x1c] * 2.0;
              fVar23 = (float)unaff_RBP[-0x1a] * 2.0;
              fVar26 = fVar17 * fVar21 + fVar24 * fVar20 + fVar23 * fVar16;
              fVar18 = ((fVar23 * fVar21 - fVar17 * fVar16) * fVar22 + fVar27 * fVar24 +
                       fVar26 * fVar20) * fVar18;
              fVar18 = fVar18 + fVar18;
              fVar25 = ((fVar24 * fVar16 - fVar23 * fVar20) * fVar22 + fVar27 * fVar17 +
                       fVar26 * fVar21) * (float)unaff_RBP[2];
              fVar25 = fVar25 + fVar25;
              fVar19 = ((fVar17 * fVar20 - fVar24 * fVar21) * fVar22 + fVar27 * fVar23 +
                       fVar26 * fVar16) * fVar19;
              fVar19 = fVar19 + fVar19;
              fVar26 = fVar25 * fVar21 + fVar18 * fVar20 + fVar19 * fVar16;
              unaff_RBP[-0x1c] =
                   (fVar27 * fVar18 - (fVar19 * fVar21 - fVar25 * fVar16) * fVar22) +
                   fVar26 * fVar20;
              unaff_RBP[-0x1a] =
                   (fVar27 * fVar19 - (fVar25 * fVar20 - fVar18 * fVar21) * fVar22) +
                   fVar26 * fVar16;
              unaff_RBP[-0x1b] =
                   (fVar27 * fVar25 - (fVar18 * fVar16 - fVar19 * fVar20) * fVar22) +
                   fVar26 * fVar21;
              pfVar9 = (float *)FUN_1806bd2c0(unaff_RBP + 0xc,unaff_RBP + -0x14,unaff_RBP + 4,
                                              unaff_RBP + 1);
              fStack0000000000000030 = *pfVar9;
              unaff_RBP[-0x14] = fStack0000000000000030;
              fStack0000000000000034 = pfVar9[1];
              unaff_RBP[-0x13] = fStack0000000000000034;
              fStack0000000000000038 = pfVar9[2];
              unaff_RBP[-0x12] = fStack0000000000000038;
              fStack000000000000003c = pfVar9[3];
              unaff_RBP[-0x11] = fStack000000000000003c;
              fStack0000000000000040 = pfVar9[4];
              unaff_RBP[-0x10] = fStack0000000000000040;
              fStack0000000000000044 = pfVar9[5];
              unaff_RBP[-0xf] = fStack0000000000000044;
              fStack0000000000000048 = pfVar9[6];
              unaff_RBP[-0xe] = fStack0000000000000048;
              fStack000000000000004c = pfVar9[7];
              unaff_RBP[-0xd] = fStack000000000000004c;
              fStack0000000000000050 = pfVar9[8];
              unaff_RBP[-0xc] = fStack0000000000000050;
            }
            fStack0000000000000058 = (float)unaff_RBP[-0x1b];
            fStack0000000000000054 = (float)unaff_RBP[-0x1c];
            plVar11 = *(int64_t **)(*(int64_t *)(unaff_RBP + 0x3a) + uVar4 * 8);
            fStack000000000000005c = (float)unaff_RBP[-0x1a];
            in_stack_00000060 = fStack0000000000000070;
            puVar10 = (int32_t *)(**(code **)(*plVar11 + 0x98))(plVar11,unaff_RBP + 0xc);
            goto code_r0x0001806bc006;
          case 0xffffffff:
          case 1:
          case 5:
          case 6:
          case 7:
            uVar5 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar5,4,&processed_var_7040_ptr,0xe7,&processed_var_7296_ptr);
            uVar5 = 0;
            goto LAB_1806bc39d;
          default:
            goto LAB_1806bc010;
          }
          fStack0000000000000034 = 0.0;
          fStack0000000000000038 = 0.0;
          puVar10 = unaff_RBP + 0xc;
          fStack000000000000003c = 0.0;
          fStack0000000000000044 = 0.0;
          fStack0000000000000048 = 0.0;
          fStack000000000000004c = 0.0;
          fStack0000000000000054 = 0.0;
          fStack0000000000000058 = 0.0;
          fStack000000000000005c = 0.0;
code_r0x0001806bc006:
          FUN_1806be960(&stack0x00000030,puVar10);
LAB_1806bc010:
          if (param_3 == (float *)0x0) {
            fVar16 = in_stack_00000060;
            fVar20 = fStack0000000000000030;
            fVar22 = fStack0000000000000034;
            fVar21 = fStack0000000000000038;
            fVar19 = fStack000000000000003c;
            fVar18 = fStack0000000000000040;
            fVar26 = fStack0000000000000044;
            fVar25 = fStack0000000000000048;
            fVar24 = fStack000000000000004c;
            fVar23 = fStack0000000000000050;
            if (param_1 != '\0') {
              fVar16 = fVar28 / in_stack_00000060;
              fVar20 = fStack0000000000000030 * fVar16;
              fVar22 = fStack0000000000000034 * fVar16;
              fVar21 = fStack0000000000000038 * fVar16;
              fVar19 = fStack000000000000003c * fVar16;
              fVar18 = fStack0000000000000040 * fVar16;
              fVar26 = fStack0000000000000044 * fVar16;
              fVar25 = fStack0000000000000048 * fVar16;
              fVar24 = fStack000000000000004c * fVar16;
              fVar23 = fStack0000000000000050 * fVar16;
              fVar16 = in_stack_00000060 * fVar16;
            }
          }
          else {
            fVar16 = in_stack_00000060 * fVar28;
            fVar20 = fStack0000000000000030 * fVar28;
            fVar22 = fStack0000000000000034 * fVar28;
            fVar21 = fStack0000000000000038 * fVar28;
            fVar19 = fStack000000000000003c * fVar28;
            fVar18 = fStack0000000000000040 * fVar28;
            fVar26 = fStack0000000000000044 * fVar28;
            fVar25 = fStack0000000000000048 * fVar28;
            fVar24 = fStack000000000000004c * fVar28;
            fVar23 = fStack0000000000000050 * fVar28;
          }
          uVar12 = (uint64_t)((uint)uVar12 + 1);
          fVar17 = 1.0 / (fVar16 + fVar29);
          unaff_RBP[0x7c] =
               (fVar29 * (float)unaff_RBP[0x7c] + fVar16 * fStack0000000000000054) * fVar17;
          fVar18 = (float)unaff_RBP[-0x20] + fVar18;
          fVar19 = (float)unaff_RBP[-0x1f] + fVar19;
          fVar25 = (float)unaff_RBP[-0x18] + fVar25;
          fStack0000000000000078 =
               (fVar29 * fStack0000000000000078 + fVar16 * fStack0000000000000058) * fVar17;
          fVar24 = (float)unaff_RBP[-0x17] + fVar24;
          fStack0000000000000074 =
               (fVar29 * fStack0000000000000074 + fVar16 * fStack000000000000005c) * fVar17;
          fStack000000000000006c = fStack000000000000006c + fVar20;
          fVar21 = (float)unaff_RBP[-0x1e] + fVar21;
          fVar23 = (float)unaff_RBP[-0x16] + fVar23;
          unaff_RBP[-0x1f] = fVar19;
          fStack0000000000000068 = fStack0000000000000068 + fVar22;
          unaff_RBP[-0x1e] = fVar21;
          unaff_RBP[-0x20] = fVar18;
          unaff_RBP[-0x18] = fVar25;
          unaff_RBP[-0x17] = fVar24;
          unaff_RBP[-0x16] = fVar23;
          fStack000000000000007c = fStack000000000000007c + fVar26;
          fVar29 = fVar16 + fVar29;
        }
        uVar13 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar13;
      } while (uVar13 < (uint)unaff_RBP[0x3c]);
      fVar16 = fStack0000000000000074;
      fVar20 = fStack0000000000000078;
      fVar22 = fStack000000000000007c;
      fVar17 = fStack0000000000000068;
      fVar27 = fStack000000000000006c;
      if (((int)uVar12 == 0) || (*(int64_t *)(unaff_RBP + 0x7e) == 0)) {
        fVar26 = (float)unaff_RBP[0x7c];
      }
      else {
        fVar26 = (float)unaff_RBP[0x7c];
        if (param_1 == '\0') {
          fVar28 = fVar28 / fVar29;
          fVar29 = fVar29 * fVar28;
          fVar22 = fStack000000000000007c * fVar28;
          fVar18 = fVar18 * fVar28;
          fVar19 = fVar19 * fVar28;
          fVar21 = fVar21 * fVar28;
          fVar23 = fVar23 * fVar28;
          fVar24 = fVar24 * fVar28;
          fVar25 = fVar25 * fVar28;
          fVar17 = fStack0000000000000068 * fVar28;
          fVar27 = fStack000000000000006c * fVar28;
        }
      }
    }
    pfVar15 = *(float **)(unaff_RBP + 0x84);
    uVar5 = 1;
    *pfVar15 = fVar27;
    pfVar15[1] = fVar17;
    pfVar15[2] = fVar21;
    pfVar15[3] = fVar19;
    pfVar15[4] = fVar18;
    pfVar15[5] = fVar22;
    pfVar15[6] = fVar25;
    pfVar15[7] = fVar24;
    pfVar15[8] = fVar23;
    pfVar15[9] = fVar26;
    pfVar15[10] = fVar20;
    pfVar15[0xb] = fVar16;
    pfVar15[0xc] = fVar29;
  }
  else {
    uVar5 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    uVar14 = 0x80;
    puVar6 = &processed_var_7120_ptr;
LAB_1806bc2b9:
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar5,4,&processed_var_7040_ptr,uVar14,puVar6);
    uVar5 = 0;
  }
LAB_1806bc39d:
  if ((((unaff_RBP[0x3d] & 0x7fffffff) != 0) && (-1 < (int)unaff_RBP[0x3d])) &&
     ((puVar10 = *(int32_t **)(unaff_RBP + 0x3a), puVar10 != unaff_RBP + 0x18 &&
      (puVar10 != (int32_t *)0x0)))) {
    plVar11 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar11 + 0x10))(plVar11,puVar10);
  }
  return uVar5;
}



int8_t FUN_1806bc42a(void)

{
  int64_t lVar1;
  int in_EAX;
  int64_t *plVar2;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  
  if (((-1 < in_EAX) && (lVar1 = *(int64_t *)(unaff_RBP + 0xe8), lVar1 != unaff_RBP + 0x60)) &&
     (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return unaff_BL;
}



float * FUN_1806bc800(float *param_1,int64_t *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int8_t auStack_48 [64];
  
  (**(code **)(*param_2 + 0x130))(param_2,param_1);
  pfVar7 = (float *)(**(code **)(*param_2 + 0x140))(param_2,auStack_48);
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = pfVar7[1];
  fVar5 = *pfVar7;
  fVar6 = pfVar7[2];
  *param_1 = (fVar2 * fVar4 - fVar3 * fVar6) + *param_1;
  param_1[2] = (fVar5 * fVar3 - fVar1 * fVar4) + param_1[2];
  param_1[1] = (fVar1 * fVar6 - fVar5 * fVar2) + param_1[1];
  return param_1;
}



int64_t FUN_1806bc8e0(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  int iVar6;
  
  iVar6 = 1;
  uVar2 = *(uint *)(param_1 + 0x354) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar6 = uVar2 * 2;
  }
  lVar3 = FUN_1806bb160(param_1,iVar6);
  func_0x0001806bc490(lVar3,(uint64_t)*(uint *)(param_1 + 0x350) * 0x34 + lVar3,
                      *(uint64_t *)(param_1 + 0x348));
  puVar5 = (int32_t *)((uint64_t)*(uint *)(param_1 + 0x350) * 0x34 + lVar3);
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[3] = param_2[3];
  puVar5[4] = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[6] = param_2[6];
  puVar5[7] = param_2[7];
  puVar5[8] = param_2[8];
  puVar5[9] = param_2[9];
  puVar5[10] = param_2[10];
  puVar5[0xb] = param_2[0xb];
  puVar5[0xc] = param_2[0xc];
  lVar1 = *(int64_t *)(param_1 + 0x348);
  if (-1 < *(int *)(param_1 + 0x354)) {
    if (lVar1 == param_1) {
      *(int8_t *)(param_1 + 0x340) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x350);
  *(int64_t *)(param_1 + 0x348) = lVar3;
  *(int *)(param_1 + 0x354) = iVar6;
  *(uint *)(param_1 + 0x350) = uVar2 + 1;
  return (uint64_t)uVar2 * 0x34 + lVar3;
}



int64_t FUN_1806bca00(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  int iVar6;
  
  iVar6 = 1;
  uVar2 = *(uint *)(param_1 + 0x1d4) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar6 = uVar2 * 2;
  }
  lVar3 = FUN_1806bb220(param_1,iVar6);
  func_0x0001806bc6a0(lVar3,(uint64_t)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar3,
                      *(uint64_t *)(param_1 + 0x1c8));
  puVar5 = (int32_t *)((uint64_t)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar3);
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[3] = param_2[3];
  puVar5[4] = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[6] = param_2[6];
  lVar1 = *(int64_t *)(param_1 + 0x1c8);
  if (-1 < *(int *)(param_1 + 0x1d4)) {
    if (lVar1 == param_1) {
      *(int8_t *)(param_1 + 0x1c0) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x1d0);
  *(int64_t *)(param_1 + 0x1c8) = lVar3;
  *(int *)(param_1 + 0x1d4) = iVar6;
  *(uint *)(param_1 + 0x1d0) = uVar2 + 1;
  return (uint64_t)uVar2 * 0x1c + lVar3;
}









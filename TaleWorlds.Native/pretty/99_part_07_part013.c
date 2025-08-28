#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part013.c - 23 个函数

// 函数: void FUN_1804a5d80(longlong param_1)
void FUN_1804a5d80(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      puVar3 = *(uint64_t **)(lVar2 + uVar4 * 8);
      if (puVar3 != (uint64_t *)0x0) {
        *puVar3 = &unknown_var_3456_ptr;
        if (puVar3[1] == 0) {
          puVar3[1] = 0;
          *(int32_t *)(puVar3 + 3) = 0;
          *puVar3 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}






// 函数: void FUN_1804a5e90(longlong *param_1,uint64_t *param_2)
void FUN_1804a5e90(longlong *param_1,uint64_t *param_2)

{
  code *pcVar1;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  int32_t uStack_18;
  
  pcVar1 = (code *)*param_2;
  lStack_30 = *param_1;
  *param_1 = 0;
  lStack_28 = param_1[1];
  param_1[1] = 0;
  lStack_20 = param_1[2];
  param_1[2] = 0;
  uStack_18 = (int32_t)param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  (*pcVar1)(&lStack_30);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



uint64_t *
FUN_1804a5f70(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0x11,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_1[1];
  *puVar1 = 0x6974736974617453;
  puVar1[1] = 0x7465736572207363;
  *(int16_t *)(puVar1 + 2) = 0x21;
  *(int32_t *)(param_1 + 2) = 0x11;
  return param_1;
}



uint64_t *
FUN_1804a6040(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0x3a,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_1[1];
  *puVar1 = 0x206f74206465654e;
  puVar1[1] = 0x4420656e69666564;
  puVar1[2] = 0x696e615f67756265;
  puVar1[3] = 0x725f617461645f6d;
  puVar1[4] = 0x735f747365757165;
  puVar1[5] = 0x7463615f73746174;
  puVar1[6] = 0x7372696620657669;
  *(int16_t *)(puVar1 + 7) = 0x2174;
  *(int8_t *)((longlong)puVar1 + 0x3a) = 0;
  *(int32_t *)(param_1 + 2) = 0x3a;
  return param_1;
}



uint64_t
FUN_1804a6150(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a2b20(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t
FUN_1804a61d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a2770(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t
FUN_1804a6250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a25a0(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t
FUN_1804a62d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a2230(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804a6370(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  void *puVar1;
  double dVar2;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    puVar1 = &unknown_var_880_ptr;
  }
  else {
    dVar2 = (double)atof(*(uint64_t *)(*param_3 + 8));
    system_system_control_config = (float)dVar2;
    puVar1 = &unknown_var_864_ptr;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804a6410(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  void *puVar3;
  void *puVar4;
  
  iVar1 = atoi(*(uint64_t *)(*param_3 + 8));
  if ((-1 < iVar1) && (iVar1 <= (int)((system_system_data_config[0x75] - system_system_data_config[0x74]) / 0x348))) {
    iVar1 = atoi(*(uint64_t *)(*param_3 + 8));
    lVar2 = (longlong)iVar1 * 0x348 + system_system_data_config[0x74];
    if (lVar2 != 0) {
      puVar4 = *(void **)(lVar2 + 0x10);
      puVar3 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar3 = puVar4;
      }
      (**(code **)(*system_system_data_config + 0x10))(system_system_data_config,puVar3);
      puVar4 = &unknown_var_384_ptr;
      goto LAB_1804a64d2;
    }
  }
  puVar4 = &unknown_var_488_ptr;
LAB_1804a64d2:
  FUN_180627910(param_1,puVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1804a6520(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4)

{
  longlong lVar1;
  void *puVar2;
  
  lVar1 = FUN_18018dff0(param_1,*param_3,param_3,param_4,0,0xfffffffffffffffe);
  if (lVar1 == 0) {
    puVar2 = &unknown_var_456_ptr;
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
      puVar2 = *(void **)(lVar1 + 0x10);
    }
    (**(code **)(*system_system_data_config + 0x10))(system_system_data_config,puVar2);
    puVar2 = &unknown_var_384_ptr;
  }
  FUN_180627910(param_1,puVar2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a65c0(uint64_t *param_1)
void FUN_1804a65c0(uint64_t *param_1)

{
  uint64_t *puVar1;
  void *puVar2;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  void *puStack_78;
  void *puStack_70;
  int32_t uStack_68;
  uint8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  uStack_98 = 0;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  puStack_88 = param_1;
  strcpy_s(auStack_60,0x40,&system_buffer_ptr);
  puVar2 = &system_buffer_ptr;
  if (puStack_70 != (void *)0x0) {
    puVar2 = puStack_70;
  }
  (**(code **)(*system_system_data_config + 0x10))(system_system_data_config,puVar2);
  puStack_78 = &unknown_var_720_ptr;
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0x3b);
  puVar1 = (uint64_t *)param_1[1];
  *puVar1 = 0x2173736563637553;
  puVar1[1] = 0x6373207478654e20;
  puVar1[2] = 0x6c6c697720656e65;
  puVar1[3] = 0x6e65706f20656220;
  *(int32_t *)(puVar1 + 4) = 0x77206465;
  *(int32_t *)((longlong)puVar1 + 0x24) = 0x20687469;
  *(int32_t *)(puVar1 + 5) = 0x61666564;
  *(int32_t *)((longlong)puVar1 + 0x2c) = 0x20746c75;
  puVar1[6] = 0x656870736f6d7461;
  *(int32_t *)(puVar1 + 7) = 0x2e6572;
  *(int32_t *)(param_1 + 2) = 0x3b;
  uStack_98 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_b8);
}



uint64_t
FUN_1804a6760(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a2030(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t FUN_1804a67e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1804a1c00(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t
FUN_1804a6860(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a1a40(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t
FUN_1804a68e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a1800(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t *
FUN_1804a6960(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1804aa710(&system_data_61e0);
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,5,param_3,param_4,uVar2,uVar3);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x454e4f44;
  *(int16_t *)(puVar1 + 1) = 0x21;
  *(int32_t *)(param_1 + 2) = 5;
  return param_1;
}



uint64_t
FUN_1804a6a40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1804a16f0(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t FUN_1804a6ac0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1804a1430(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t FUN_1804a6b40(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1804a1150(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



uint64_t FUN_1804a6bc0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1804a0f10(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}






// 函数: void FUN_1804a6ca0(uint64_t *param_1)
void FUN_1804a6ca0(uint64_t *param_1)

{
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  param_1[4] = &unknown_var_3456_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
  return;
}






// 函数: void FUN_1804a6d60(uint64_t *param_1)
void FUN_1804a6d60(uint64_t *param_1)

{
  *param_1 = &unknown_var_1920_ptr;
  FUN_1804ca960(param_1 + 0x5a6);
  FUN_1804a7f00(param_1 + 2);
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  return;
}



uint64_t *
FUN_1804a6db0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_1920_ptr;
  FUN_1804ca960(param_1 + 0x5a6);
  FUN_1804a7f00(param_1 + 2);
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x3090,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1804a6e20(void)
void FUN_1804a6e20(void)

{
  _Mtx_destroy_in_situ();
  return;
}






// 函数: void FUN_1804a6e40(longlong param_1)
void FUN_1804a6e40(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x18);
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  return;
}






// 函数: void FUN_1804a6ec0(longlong *param_1)
void FUN_1804a6ec0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_1804a6e40(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a6f20(longlong *param_1)
void FUN_1804a6f20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_1804a6e40(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804a7000(longlong param_1,uint64_t *param_2,int32_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  
  lVar7 = param_1;
  func_0x0001804a6f40();
  uVar4 = param_2[1];
  *(uint64_t *)(param_1 + 0x58) = *param_2;
  *(uint64_t *)(param_1 + 0x60) = uVar4;
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  uVar6 = system_memory_flags << 5 ^ system_memory_flags;
  uVar5 = uVar6 << 0xd ^ uVar6;
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  system_memory_flags = uVar5 << 0xd ^ uVar5;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
  *(float *)(lVar7 + 0x68) = (float)(system_memory_flags - 1) * 2.3283064e-10;
  *(float *)(lVar7 + 0x6c) = (float)(uVar5 - 1) * 2.3283064e-10;
  *(float *)(lVar7 + 0x70) = (float)(uVar6 - 1) * 2.3283064e-10;
  *(int32_t *)(lVar7 + 0x74) = 0x7f7fffff;
  fVar1 = *(float *)(lVar7 + 0x68);
  fVar2 = *(float *)(lVar7 + 0x6c);
  fVar3 = *(float *)(lVar7 + 0x70);
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar9 = auVar10._0_4_;
  fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  *(float *)(lVar7 + 0x68) = fVar1 * fVar8;
  *(float *)(lVar7 + 0x6c) = fVar2 * fVar8;
  *(float *)(lVar7 + 0x70) = fVar3 * fVar8;
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  uVar6 = system_memory_flags << 5 ^ system_memory_flags;
  uVar5 = uVar6 << 0xd ^ uVar6;
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  system_memory_flags = uVar5 << 0xd ^ uVar5;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
  *(float *)(lVar7 + 0x78) = (float)(system_memory_flags - 1) * 2.3283064e-10;
  *(float *)(lVar7 + 0x7c) = (float)(uVar5 - 1) * 2.3283064e-10;
  *(float *)(lVar7 + 0x80) = (float)(uVar6 - 1) * 2.3283064e-10;
  *(int32_t *)(lVar7 + 0x84) = 0x7f7fffff;
  fVar1 = *(float *)(lVar7 + 0x7c);
  fVar2 = *(float *)(lVar7 + 0x78);
  fVar3 = *(float *)(lVar7 + 0x80);
  fVar8 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar9 = auVar10._0_4_;
  fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  *(float *)(lVar7 + 0x78) = fVar2 * fVar8;
  *(float *)(lVar7 + 0x7c) = fVar1 * fVar8;
  *(float *)(lVar7 + 0x80) = fVar3 * fVar8;
  *(uint64_t *)(lVar7 + 0x98) = 0;
  *(uint64_t *)(lVar7 + 0xa8) = 0;
  *(uint64_t *)(lVar7 + 0x88) = 2000;
  *(uint64_t *)(lVar7 + 0x90) = 0x42c80000;
  *(uint64_t *)(lVar7 + 0xa0) = 0x3f800000;
  *(int32_t *)(lVar7 + 0xb0) = param_3;
  *(int16_t *)(lVar7 + 0xb4) = 0xff00;
  *(int32_t *)(lVar7 + 0xb8) = 2;
  *(int16_t *)(lVar7 + 0xbc) = 0x100;
  *(int32_t *)(lVar7 + 0xc0) = 0x3f800000;
  return lVar7;
}



uint64_t FUN_1804a7300(uint64_t param_1,ulonglong param_2)

{
  FUN_1804a7f00();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2d20);
  }
  return param_1;
}






// 函数: void FUN_1804a7340(longlong param_1)
void FUN_1804a7340(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  return;
}






// 函数: void FUN_1804a7380(longlong *param_1)
void FUN_1804a7380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7400(longlong *param_1)
void FUN_1804a7400(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7420(longlong param_1)
void FUN_1804a7420(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1804a7460(longlong *param_1)
void FUN_1804a7460(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a74e0(longlong *param_1)
void FUN_1804a74e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7500(longlong param_1)
void FUN_1804a7500(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1804a7550(longlong *param_1)
void FUN_1804a7550(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a75e0(longlong *param_1)
void FUN_1804a75e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7600(uint64_t *param_1)
void FUN_1804a7600(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    uVar6 = uVar4;
    if (*(int *)((longlong)param_1 + 4) < 1) goto LAB_1804a768b;
    do {
      uVar5 = (uint)uVar6;
      lVar3 = *(longlong *)(param_1[6] + (longlong)((int)uVar5 >> 10) * 8);
      lVar2 = (longlong)(int)(*(uint *)(param_1 + 10) & uVar5) * 0x68;
      if ((*(int *)(lVar3 + lVar2) != -1) && (lVar3 = lVar2 + 8 + lVar3, lVar3 != 0)) {
        FUN_1804a7550();
        FUN_1804a7460();
        FUN_1804a7380(lVar3);
      }
LAB_1804a768b:
      uVar6 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < *(int *)((longlong)param_1 + 4));
  }
  plVar1 = param_1 + 6;
  lVar3 = *plVar1;
  uVar6 = uVar4;
  if (param_1[7] - lVar3 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar4 + lVar3) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar4 + *plVar1) = 0;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      lVar3 = *plVar1;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(param_1[7] - lVar3 >> 3));
  }
  param_1[7] = lVar3;
  param_1[3] = param_1[2];
  *param_1 = 0;
  if (*plVar1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7730(uint64_t *param_1)
void FUN_1804a7730(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  plVar1 = param_1 + 6;
  lVar2 = *plVar1;
  uVar5 = uVar3;
  if (param_1[7] - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar3 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar3 + *plVar1) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      lVar2 = *plVar1;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[7] - lVar2 >> 3));
  }
  param_1[7] = lVar2;
  param_1[3] = param_1[2];
  *param_1 = 0;
  if (*plVar1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a77f0(uint64_t *param_1)
void FUN_1804a77f0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    uVar4 = uVar5;
    if (*(int *)((longlong)param_1 + 4) < 1) goto LAB_1804a786a;
    do {
      uVar6 = (uint)uVar4;
      lVar3 = *(longlong *)(param_1[6] + (longlong)((int)uVar6 >> 10) * 8);
      lVar2 = (longlong)(int)(*(uint *)(param_1 + 10) & uVar6) * 0x18;
      if (((*(int *)(lVar3 + lVar2) != -1) && (lVar3 = lVar2 + 8 + lVar3, lVar3 != 0)) &&
         (plVar1 = *(longlong **)(lVar3 + 8), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))();
      }
LAB_1804a786a:
      uVar4 = (ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < *(int *)((longlong)param_1 + 4));
  }
  plVar1 = param_1 + 6;
  lVar3 = *plVar1;
  uVar4 = uVar5;
  if (param_1[7] - lVar3 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar5 + lVar3) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar5 + *plVar1) = 0;
      uVar6 = (int)uVar4 + 1;
      uVar5 = uVar5 + 8;
      lVar3 = *plVar1;
      uVar4 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)(param_1[7] - lVar3 >> 3));
  }
  param_1[7] = lVar3;
  param_1[3] = param_1[2];
  *param_1 = 0;
  if (*plVar1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a7910(uint64_t *param_1)
void FUN_1804a7910(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    uVar5 = uVar3;
    if (*(int *)((longlong)param_1 + 4) < 1) goto LAB_1804a799b;
    do {
      uVar4 = (uint)uVar5;
      lVar2 = *(longlong *)(param_1[6] + (longlong)((int)uVar4 >> 10) * 8);
      if ((*(int *)(lVar2 + (longlong)(int)(*(uint *)(param_1 + 10) & uVar4) * 0x28) != -1) &&
         (lVar2 = (longlong)(int)(*(uint *)(param_1 + 10) & uVar4) * 0x28 + 8 + lVar2, lVar2 != 0))
      {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
        if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
        }
      }
LAB_1804a799b:
      uVar5 = (ulonglong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < *(int *)((longlong)param_1 + 4));
  }
  plVar1 = param_1 + 6;
  lVar2 = *plVar1;
  uVar5 = uVar3;
  if (param_1[7] - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar3 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar3 + *plVar1) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      lVar2 = *plVar1;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[7] - lVar2 >> 3));
  }
  param_1[7] = lVar2;
  param_1[3] = param_1[2];
  *param_1 = 0;
  if (*plVar1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong * FUN_1804a7a40(longlong *param_1)

{
  FUN_1808fc8a8(param_1 + 0x12,8,8,FUN_180045af0,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return param_1;
}






// 函数: void FUN_1804a7ac0(uint64_t *param_1)
void FUN_1804a7ac0(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    uVar6 = uVar4;
    if (*(int *)((longlong)param_1 + 4) < 1) goto LAB_1804a7b7d;
    do {
      uVar5 = (uint)uVar6;
      lVar2 = *(longlong *)(param_1[6] + (longlong)((int)uVar5 >> 10) * 8);
      lVar1 = (longlong)(int)(*(uint *)(param_1 + 10) & uVar5) * 0xd8;
      if ((*(int *)(lVar2 + lVar1) != -1) &&
         (plVar3 = (longlong *)(lVar1 + 8 + lVar2), plVar3 != (longlong *)0x0)) {
        FUN_1808fc8a8(plVar3 + 0x12,8,8,FUN_180045af0,uVar7);
        if (plVar3[0xd] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (plVar3[9] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
      }
LAB_1804a7b7d:
      uVar6 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < *(int *)((longlong)param_1 + 4));
  }
  lVar2 = param_1[6];
  uVar6 = uVar4;
  if (param_1[7] - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar4 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar4 + lVar2) = 0;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      lVar2 = param_1[6];
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(param_1[7] - lVar2 >> 3));
  }
  param_1[7] = lVar2;
  param_1[3] = param_1[2];
  *param_1 = 0;
  return;
}







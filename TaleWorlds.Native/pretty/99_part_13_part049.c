/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part049.c - 5 个函数

// 函数: void FUN_1808c6e91(void)
void FUN_1808c6e91(void)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t lVar8;
  uint64_t *unaff_R12;
  uint *unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  bool in_CF;
  bool in_ZF;
  float fVar9;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar10;
  float fVar11;
  float unaff_XMM9_Da;
  
  uVar7 = *(uint *)(unaff_R14 + 1);
  if (!in_CF && !in_ZF) {
    fVar9 = (float)func_0x0001808c1740(*(uint64_t *)(unaff_R14[7] + 8),(int)unaff_R15[0x10]);
    uVar6 = (uint64_t)(fVar9 * 48000.0 * 0.001);
    if ((uVar6 & 0xffffffff) + (uint64_t)uVar7 < 0x100000000) {
      uVar7 = uVar7 + (int)uVar6;
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  func_0x00018085c9a0(*unaff_R14,unaff_RBP + -0x31,uVar7,unaff_R14 + 2);
  lVar8 = unaff_R14[9];
  plVar5 = unaff_R14 + 8;
  if ((char)lVar8 == '\0') {
    plVar5 = unaff_R15 + 0x11;
  }
  lVar3 = *plVar5;
  *(int64_t *)(unaff_RBP + -0x21) = lVar3;
  if (((int)lVar3 != 0) || ((char)lVar8 != '\0')) {
    lVar8 = *unaff_R14;
    fVar9 = 0.0;
    fVar11 = 1.0;
    *(uint64_t *)(unaff_RBP + -0x39) =
         *(uint64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x160) + 0x2b0) + 0x78);
    uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(lVar8 + 0x160) + 8) + 0x30))();
    lVar3 = func_0x0001808b8910(uVar2);
    lVar8 = *(int64_t *)(unaff_RBP + -0x39);
    if (lVar8 != *(int64_t *)(*(int64_t *)(lVar3 + 0x2b0) + 0x78)) {
      do {
        *(uint64_t *)(unaff_RBP + -0x19) = unaff_RDI;
        iVar1 = FUN_18073c4c0(lVar8,0,unaff_RBP + -0x19);
        if (iVar1 != 0) goto LAB_1808c7124;
        *(uint64_t *)(unaff_RBP + -0x29) = unaff_RDI;
        iVar1 = FUN_18073c730(*(uint64_t *)(unaff_RBP + -0x39),unaff_RBP + -0x29,0,0);
        if (iVar1 != 0) goto LAB_1808c7124;
        uVar6 = *(uint64_t *)(unaff_RBP + -0x29);
        if ((uVar6 != 0) && (*(uint64_t *)(unaff_RBP + -0x19) < uVar6)) {
          fVar9 = fVar9 + (float)(int64_t)(uVar6 - *(uint64_t *)(unaff_RBP + -0x19)) * fVar11;
        }
        *(int *)(unaff_RBP + -0x41) = (int)unaff_RDI;
        iVar1 = FUN_18073ca90(*(uint64_t *)(unaff_RBP + -0x39),unaff_RBP + -0x41);
        if ((iVar1 != 0) || (iVar1 = FUN_18073f640(*(uint64_t *)(unaff_RBP + -0x39)), iVar1 != 0))
        goto LAB_1808c7124;
        fVar11 = fVar11 * *(float *)(unaff_RBP + -0x41);
        uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(*unaff_R14 + 0x160) + 8) + 0x30))
                          (*(int64_t *)(*unaff_R14 + 0x160) + 8);
        lVar3 = func_0x0001808b8910(uVar2);
        lVar8 = *(int64_t *)(unaff_RBP + -0x39);
      } while (lVar8 != *(int64_t *)(*(int64_t *)(lVar3 + 0x2b0) + 0x78));
    }
    uVar6 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(*unaff_R14 + 0x160) + 0x2b0) + 0x30);
    iVar1 = FUN_18085ab70();
    lVar8 = uVar6 - (int64_t)((int)(fVar9 + 0.5) - iVar1);
    fVar9 = (float)(*(int64_t *)(unaff_RBP + -0x31) - lVar8);
    if (fVar9 <= unaff_XMM9_Da) {
      fVar9 = unaff_XMM9_Da;
    }
    if (2.88e+07 <= fVar9) goto LAB_1808c7124;
    uVar10 = extraout_XMM0_Da;
    if (*(int *)(unaff_RBP + -0x21) != 0) {
      lVar3 = *unaff_R14;
      *(int32_t *)(unaff_RBP + -0x41) = 0;
      uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(lVar3 + 0x160) + 8) + 0x30))
                        (*(int64_t *)(lVar3 + 0x160) + 8);
      uVar2 = func_0x0001808b8910(uVar2);
      iVar1 = FUN_18085ee30(uVar2,fVar9 / fVar11,unaff_RBP + -0x21,unaff_RBP + -0x41);
      if (iVar1 != 0) goto LAB_1808c7124;
      fVar9 = *(float *)(unaff_RBP + -0x41) * fVar11;
      uVar10 = extraout_XMM0_Da_00;
    }
    uVar4 = (int)(fVar9 + 0.5) + lVar8;
    *(uint64_t *)(unaff_RBP + -0x31) = uVar4;
    if (uVar4 < uVar6) {
      (**(code **)(*unaff_R15 + 0x30))(uVar10,unaff_RBP + -0x19);
    }
  }
  **(int8_t **)(unaff_RBP + 0x7f) = 1;
  uVar2 = *(uint64_t *)(unaff_RBP + -0x31);
  *unaff_R13 = uVar7;
  *unaff_R12 = uVar2;
LAB_1808c7124:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c7139(void)
void FUN_1808c7139(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c713f(void)
void FUN_1808c713f(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_1808c7170(void)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint uStack_c;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < system_system_config) {
    SystemInitializer(&system_ptr_f4f0);
    if (system_system_config == -1) {
      puVar2 = (int32_t *)MemoryCacheController0();
      uVar1 = *puVar2;
      puVar2 = (int32_t *)MemoryCacheController0();
      lRam0000000180c4f4b8 = (uint64_t)uStack_c << 0x20;
      system_system_config = *puVar2;
      system_system_config = 0;
      system_system_config = 0;
      system_system_config = 0;
      uRam0000000180c4f4d8 = 0;
      system_system_config = 0;
      system_system_config = 0;
      system_system_config = 0;



// 函数: void FUN_1808c7560(int64_t *param_1,uint64_t param_2)
void FUN_1808c7560(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_2,1);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_38);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



uint64_t * FUN_1808c75c0(uint64_t *param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  
  FUN_1808b0200(param_1,0x14);
  *param_1 = &memory_allocator_3192_ptr;
  puVar6 = (int32_t *)SystemCoreProcessor();
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(int32_t *)(param_1 + 6) = *puVar6;
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar2;
  *(int32_t *)(param_1 + 7) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar4;
  puVar6 = (int32_t *)SystemCoreProcessor();
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(int32_t *)(param_1 + 8) = *puVar6;
  *(int32_t *)((int64_t)param_1 + 0x44) = uVar2;
  *(int32_t *)(param_1 + 9) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar4;
  puVar6 = (int32_t *)SystemCoreProcessor();
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(int32_t *)(param_1 + 10) = *puVar6;
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar2;
  *(int32_t *)(param_1 + 0xb) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x5c) = uVar4;
  puVar7 = (uint64_t *)SystemCoreProcessor();
  uVar5 = puVar7[1];
  puVar1 = param_1 + 0x16;
  param_1[0xc] = *puVar7;
  param_1[0xd] = uVar5;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *puVar1 = puVar1;
  param_1[0x17] = puVar1;
  puVar1 = param_1 + 0x18;
  param_1[0x19] = 0;
  *puVar1 = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0x20;
  *(uint64_t *)((int64_t)param_1 + 0xdc) = 0x80;
  *(int32_t *)((int64_t)param_1 + 0xe4) = 0;
  param_1[0x1d] = 1;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180882f2f)
// WARNING: Removing unreachable block (ram,0x000180882f44)
// WARNING: Removing unreachable block (ram,0x000180882f7a)
// WARNING: Removing unreachable block (ram,0x000180882f82)
// WARNING: Removing unreachable block (ram,0x000180882f8a)
// WARNING: Removing unreachable block (ram,0x000180882f90)
// WARNING: Removing unreachable block (ram,0x000180882fec)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1808c76b0(int64_t *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset(*param_1 + (int64_t)iVar1 * 8,0,(uint64_t)(uint)-iVar1 << 3);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c7770(uint64_t *param_1)
void FUN_1808c7770(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  *param_1 = &memory_allocator_3192_ptr;
  plVar4 = param_1 + 0x16;
  plVar2 = (int64_t *)*plVar4;
  if ((plVar2 != plVar4) || ((int64_t *)param_1[0x17] != plVar4)) {
    if (plVar2 == plVar4) {
      plVar2 = (int64_t *)0x0;
    }
    if (plVar2 != (int64_t *)0x0) {
      plVar4 = plVar2;
    }
    FUN_180840270(plVar4 + 2);
    *(int64_t *)plVar4[1] = *plVar4;
    *(int64_t *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar4;
    *(int64_t **)plVar4[1] = plVar4;
    *(int64_t *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar4;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&memory_allocator_3232_ptr,0x48,1);
  }
  plVar2 = param_1 + 0x18;
  plVar3 = (int64_t *)*plVar2;
  if ((plVar3 != plVar2) || ((int64_t *)param_1[0x19] != plVar2)) {
    if (plVar3 == plVar2) {
      plVar3 = (int64_t *)0x0;
    }
    if (plVar3 != (int64_t *)0x0) {
      plVar2 = plVar3;
    }
    FUN_180840270(plVar2 + 4);
    FUN_180840270(plVar2 + 2);
    *(int64_t *)plVar2[1] = *plVar2;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int64_t **)plVar2[1] = plVar2;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&memory_allocator_3232_ptr,0x4c,1);
  }
  lVar1 = param_1[0x1a];
  if ((lVar1 != 0) && ((*(uint *)(param_1 + 0x1f) >> 7 & 1) == 0)) {
    FUN_1808c7dc0(lVar1,0);
    FUN_18085dbf0(lVar1 + 0x20);
    FUN_180744d60(lVar1 + 0x10);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&memory_allocator_3232_ptr,0x50,1);
  }
  func_0x00018085dda0(plVar2);
  func_0x00018085dda0(plVar4);
  FUN_18084c220(param_1 + 0x14);
  FUN_1808c76b0(param_1 + 0x12);
  FUN_18084c220(param_1 + 0x10);
  FUN_18084c220(param_1 + 0xe);
  *param_1 = &processed_var_936_ptr;
  plVar4 = param_1 + 4;
  plVar2 = (int64_t *)*plVar4;
  if ((plVar2 == plVar4) && ((int64_t *)param_1[5] == plVar4)) {
    func_0x00018085dda0(plVar4);
    *param_1 = &ui_system_data_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar4) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&processed_var_976_ptr,0x30,1);
}



uint64_t FUN_1808c7990(uint64_t param_1,uint64_t param_2)

{
  FUN_1808c7770();
  if ((param_2 & 1) != 0) {
    free(param_1,0x100);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c79d0(int64_t param_1)

{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int64_t *)(param_1 + 0xd0) != 0) {
    return 0x1c;
  }
  puVar1 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&memory_allocator_3232_ptr,0x32,0,0,1);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  *puVar1 = 0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = system_system_buffer_config;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(int32_t *)(puVar1 + 0xb) = 0;
  uVar3 = *(uint *)(param_1 + 0xf8);
  *(uint64_t **)(param_1 + 0xd0) = puVar1;
  if ((uVar3 >> 6 & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 5) & 1;
    *(uint *)((int64_t)puVar1 + 4) =
         ~((bVar2 ^ 1) << 2) & ((uint)bVar2 << 2 | *(uint *)((int64_t)puVar1 + 4)) | 8;
    uVar3 = *(uint *)(param_1 + 0xf8);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 9) & 1;
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         ~((bVar2 ^ 1) << 4) & ((uint)bVar2 << 4 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) |
         0x20;
    uVar3 = *(uint *)(param_1 + 0xf8);
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 0xb) & 1;
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         ~((bVar2 ^ 1) << 6) & ((uint)bVar2 << 6 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) |
         0x80;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c7a01(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int8_t uStack0000000000000028;
  
  uStack0000000000000028 = 0;
  puVar1 = (uint64_t *)SystemResourceManager(*(uint64_t *)(param_1 + 0x1a0),0x60,param_3,0x32,0);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  *puVar1 = 0;
  puVar1[1] = unaff_RBX;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = system_system_buffer_config;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(int32_t *)(puVar1 + 0xb) = 0;
  uVar3 = *(uint *)(unaff_RBX + 0xf8);
  *(uint64_t **)(unaff_RBX + 0xd0) = puVar1;
  if ((uVar3 >> 6 & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 5) & 1;
    *(uint *)((int64_t)puVar1 + 4) =
         ~((bVar2 ^ 1) << 2) & ((uint)bVar2 << 2 | *(uint *)((int64_t)puVar1 + 4)) | 8;
    uVar3 = *(uint *)(unaff_RBX + 0xf8);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 9) & 1;
    *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4) =
         ~((bVar2 ^ 1) << 4) & ((uint)bVar2 << 4 | *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4)) |
         0x20;
    uVar3 = *(uint *)(unaff_RBX + 0xf8);
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    bVar2 = (byte)(uVar3 >> 0xb) & 1;
    *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4) =
         ~((bVar2 ^ 1) << 6) & ((uint)bVar2 << 6 | *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4)) |
         0x80;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c7a3a(uint64_t param_1,int64_t param_2)

{
  uint64_t *in_RAX;
  byte bVar1;
  uint uVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  
  *in_RAX = unaff_RDI;
  in_RAX[1] = unaff_RBX;
  in_RAX[2] = unaff_RDI;
  in_RAX[3] = unaff_RDI;
  in_RAX[4] = unaff_RDI;
  in_RAX[5] = unaff_RDI;
  *(uint64_t *)(param_2 + 0x30) = system_system_buffer_config;
  *(uint64_t *)(param_2 + 0x38) = unaff_RDI;
  *(uint64_t *)(param_2 + 0x40) = unaff_RDI;
  *(uint64_t *)(param_2 + 0x48) = unaff_RDI;
  *(uint64_t *)(param_2 + 0x50) = unaff_RDI;
  *(int *)(param_2 + 0x58) = (int)unaff_RDI;
  uVar2 = *(uint *)(unaff_RBX + 0xf8);
  *(int64_t *)(unaff_RBX + 0xd0) = param_2;
  if ((uVar2 >> 6 & 1) != 0) {
    bVar1 = (byte)(uVar2 >> 5) & 1;
    *(uint *)(param_2 + 4) = ~((bVar1 ^ 1) << 2) & ((uint)bVar1 << 2 | *(uint *)(param_2 + 4)) | 8;
    uVar2 = *(uint *)(unaff_RBX + 0xf8);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    bVar1 = (byte)(uVar2 >> 9) & 1;
    *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4) =
         ~((bVar1 ^ 1) << 4) & ((uint)bVar1 << 4 | *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4)) |
         0x20;
    uVar2 = *(uint *)(unaff_RBX + 0xf8);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    bVar1 = (byte)(uVar2 >> 0xb) & 1;
    *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4) =
         ~((bVar1 ^ 1) << 6) & ((uint)bVar1 << 6 | *(uint *)(*(int64_t *)(unaff_RBX + 0xd0) + 4)) |
         0x80;
  }
  return 0;
}



int FUN_1808c7b30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *puStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  char cStack_18;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0x1c;
  }
  puStack_68 = &memory_allocator_3352_ptr;
  lStack_50 = param_1 + 0x10;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  cStack_18 = '\0';
  uStack_48 = 1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  iVar1 = FUN_1808c8720(&puStack_68);
  if (iVar1 == 0) {
    uVar2 = 2;
    if (cStack_18 != '\0') {
      uVar2 = 0;
    }
    *(uint *)(param_1 + 4) = (-(uint)(cStack_18 != '\0') & 2 | *(uint *)(param_1 + 4) | 1) & ~uVar2;
    iVar1 = 0;
  }
  iVar3 = SystemStatusChecker(&uStack_40);
  if (iVar3 == 0) {
    iVar3 = FUN_1807d3080(&uStack_30);
    if (iVar3 == 0) {
      uStack_20 = 0xffffffff;
      uStack_1c = 0;
    }
  }
  FUN_1807d3080(&uStack_30);
  SystemStatusChecker(&uStack_40);
  return iVar1;
}



uint64_t FUN_1808c7c40(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) < 1) {
    return 0x1c;
  }
  iVar2 = *(int *)(param_1 + 0x54) + -1;
  *(int *)(param_1 + 0x54) = iVar2;
  if ((*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x4c) + iVar2 == 0) &&
     (uVar1 = FUN_1808c7dc0(param_1,0), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808c7c80(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uStackX_8;
  
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0x1c;
  }
  iVar1 = *(int *)(param_1 + 0x4c) + -1;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54) + iVar1 == 0) {
    uStackX_8 = 0;
    iVar1 = FUN_18088c740(&uStackX_8);
    if (iVar1 == 0) {
      iVar1 = FUN_1808c7dc0(param_1,0);
      if (iVar1 == 0) {
        iVar1 = FUN_18088ac50(param_2);
        if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
          AdvancedSystemProcessor(&uStackX_8);
        }
      }
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemProcessor(&uStackX_8);
  }
  return 0;
}



uint64_t FUN_1808c7caf(int param_1)

{
  int in_EAX;
  int iVar1;
  int64_t unaff_RDI;
  uint64_t uStack0000000000000030;
  
  *(int *)(unaff_RDI + 0x4c) = param_1;
  if (in_EAX + param_1 != 0) {
    return 0;
  }
  uStack0000000000000030 = 0;
  iVar1 = FUN_18088c740(&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1808c7dc0();
    if (iVar1 == 0) {
      iVar1 = FUN_18088ac50();
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemProcessor(&stack0x00000030);
      }
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000030);
}







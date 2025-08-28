#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part158.c - 6 个函数

// 函数: void FUN_18013f4b0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_18013f4b0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18013f51b:
      uVar4 = 1;
      goto LAB_18013f524;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18013f51b;
    }
  }
  uVar4 = 0;
LAB_18013f524:
  lVar5 = FUN_18062b420(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  *(uint64_t *)(lVar5 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar4);
}



uint64_t *
FUN_18013f590(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar4 = 0;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  uVar6 = 1;
  lVar2 = *(int64_t *)(param_1 + 0x888);
  uVar5 = uVar4;
  if (*(int64_t *)(param_1 + 0x890) - lVar2 >> 5 != 1) {
    do {
      iVar1 = *(int *)(uVar5 + 0x10 + lVar2);
      if (0 < iVar1) {
        CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 2) + iVar1);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(uVar5 + 8 + lVar2),
               (int64_t)(*(int *)(uVar5 + 0x10 + lVar2) + 1),param_4,uVar6,uVar7);
      }
      iVar1 = *(int *)(param_2 + 2) + 1;
      CoreMemoryPoolProcessor(param_2,iVar1);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 0x2a;
      *(int *)(param_2 + 2) = iVar1;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      lVar2 = *(int64_t *)(param_1 + 0x888);
      uVar5 = uVar5 + 0x20;
    } while ((uint64_t)(int64_t)(int)uVar3 < (*(int64_t *)(param_1 + 0x890) - lVar2 >> 5) - 1U);
  }
  lVar2 = *(int64_t *)(param_1 + 0x890);
  if (*(int *)(lVar2 + -0x10) < 1) {
    return param_2;
  }
  CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 2) + *(int *)(lVar2 + -0x10));
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(lVar2 + -0x18),
         (int64_t)(*(int *)(lVar2 + -0x10) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013f6f0(int64_t param_1)
void FUN_18013f6f0(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  int8_t auStack_1b8 [32];
  int32_t uStack_198;
  void *puStack_190;
  uint64_t *puStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  void **ppuStack_168;
  void *puStack_160;
  int8_t *puStack_158;
  int32_t uStack_150;
  int8_t auStack_148 [16];
  char acStack_138 [256];
  uint64_t uStack_38;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  uStack_198 = 0;
  FUN_180056f70(param_1 + 0x20,system_main_module_state + 0x290);
  ppuStack_168 = &puStack_190;
  uVar4 = FUN_1806279c0(&puStack_190,param_1 + 0x20);
  iVar2 = FUN_180142220(param_1,uVar4);
  if (*(char *)((int64_t)iVar2 + *(int64_t *)(param_1 + 0x8c8)) == '\0') {
    FUN_180056f70(param_1 + 0x438,(int64_t)iVar2 * 0x20 + *(int64_t *)(param_1 + 0x888));
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_1b8);
  }
  puStack_190 = &system_data_buffer_ptr;
  uStack_178 = 0;
  puStack_188 = (uint64_t *)0x0;
  uStack_180 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_188 = puVar5;
  uVar3 = CoreMemoryPoolCleaner(puVar5);
  uStack_178 = CONCAT44(uStack_178._4_4_,uVar3);
  *puVar5 = 0x2f73656c75646f4d;
  *(int8_t *)(puVar5 + 1) = 0;
  uStack_180 = 8;
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0x28);
  }
  FUN_180060680(acStack_138,&unknown_var_3664_ptr,puVar5,puVar7);
  puStack_160 = &system_config_ptr;
  puStack_158 = auStack_148;
  auStack_148[0] = 0;
  uStack_150 = 6;
  strcpy_s(auStack_148,0x10,&unknown_var_2588_ptr);
  uStack_198 = 1;
  FUN_180056f70(param_1 + 0x438,&puStack_160);
  uStack_198 = 0;
  puStack_160 = &system_state_ptr;
  lVar1 = -1;
  do {
    lVar6 = lVar1;
    lVar1 = lVar6 + 1;
  } while (acStack_138[lVar6 + 1] != '\0');
  iVar2 = (int)(lVar6 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x448) + iVar2 < 0x3ff)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x448) + *(int64_t *)(param_1 + 0x440),acStack_138,
           (int64_t)((int)lVar6 + 2));
  }
  puStack_190 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar5);
}





// 函数: void FUN_18013f940(void)
void FUN_18013f940(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t * FUN_180141660(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &unknown_var_336_ptr;
  param_1[5] = param_1 + 7;
  *(int32_t *)(param_1 + 6) = 0;
  *(int8_t *)(param_1 + 7) = 0;
  param_1[0x87] = &system_state_ptr;
  param_1[0x88] = 0;
  *(int32_t *)(param_1 + 0x89) = 0;
  param_1[0x87] = &unknown_var_336_ptr;
  param_1[0x88] = param_1 + 0x8a;
  *(int32_t *)(param_1 + 0x89) = 0;
  *(int8_t *)(param_1 + 0x8a) = 0;
  puVar1 = param_1 + 0x10b;
  param_1[0x10e] = 0;
  *(int32_t *)(param_1 + 0x110) = 3;
  *puVar1 = puVar1;
  param_1[0x10c] = puVar1;
  param_1[0x10d] = 0;
  *(int8_t *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  *(int32_t *)(param_1 + 0x114) = 3;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(int32_t *)(param_1 + 0x118) = 3;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(int32_t *)(param_1 + 0x11c) = 3;
  puVar1 = param_1 + 0x11d;
  param_1[0x120] = 0;
  *(int32_t *)(param_1 + 0x122) = 3;
  *puVar1 = puVar1;
  param_1[0x11e] = puVar1;
  param_1[0x11f] = 0;
  *(int8_t *)(param_1 + 0x120) = 0;
  param_1[0x121] = 0;
  param_1[0x123] = &system_state_ptr;
  param_1[0x124] = 0;
  *(int32_t *)(param_1 + 0x125) = 0;
  param_1[0x123] = &system_data_buffer_ptr;
  param_1[0x126] = 0;
  param_1[0x124] = 0;
  *(int32_t *)(param_1 + 0x125) = 0;
  puVar1 = param_1 + 0x127;
  param_1[0x12a] = 0;
  *(int32_t *)(param_1 + 300) = 3;
  *puVar1 = puVar1;
  param_1[0x128] = puVar1;
  param_1[0x129] = 0;
  *(int8_t *)(param_1 + 0x12a) = 0;
  param_1[299] = 0;
  puVar1 = param_1 + 0x12d;
  param_1[0x130] = 0;
  *(int32_t *)(param_1 + 0x132) = 3;
  *puVar1 = puVar1;
  param_1[0x12e] = puVar1;
  param_1[0x12f] = 0;
  *(int8_t *)(param_1 + 0x130) = 0;
  param_1[0x131] = 0;
  *(int8_t *)(param_1 + 0x10a) = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001801420ee)
// WARNING: Removing unreachable block (ram,0x0001801420f4)
// WARNING: Removing unreachable block (ram,0x0001801420fe)
// WARNING: Removing unreachable block (ram,0x000180142103)
// WARNING: Removing unreachable block (ram,0x000180142117)
// WARNING: Removing unreachable block (ram,0x000180142121)
// WARNING: Removing unreachable block (ram,0x00018014212d)
// WARNING: Removing unreachable block (ram,0x000180142134)
// WARNING: Removing unreachable block (ram,0x000180141aab)
// WARNING: Removing unreachable block (ram,0x000180141ab3)
// WARNING: Removing unreachable block (ram,0x000180141ab9)
// WARNING: Removing unreachable block (ram,0x000180141ac6)
// WARNING: Removing unreachable block (ram,0x000180141af9)
// WARNING: Removing unreachable block (ram,0x000180141b01)
// WARNING: Removing unreachable block (ram,0x000180141b04)
// WARNING: Removing unreachable block (ram,0x000180141ad0)
// WARNING: Removing unreachable block (ram,0x000180141ad5)
// WARNING: Removing unreachable block (ram,0x000180141b1e)
// WARNING: Removing unreachable block (ram,0x000180141b2f)
// WARNING: Removing unreachable block (ram,0x000180141b49)
// WARNING: Removing unreachable block (ram,0x000180141b4e)
// WARNING: Removing unreachable block (ram,0x000180141baf)
// WARNING: Removing unreachable block (ram,0x000180141bb7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180141820(int64_t *param_1)

{
  char cVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  int16_t *puVar8;
  int8_t *puVar9;
  int8_t *puVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  void *puStack_c0;
  int8_t *puStack_b8;
  uint uStack_b0;
  uint64_t uStack_a8;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int16_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  FUN_180627ae0(&puStack_c0);
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  puVar7 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_98 = puVar7;
  uVar2 = CoreMemoryPoolCleaner(puVar7);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
  *puVar7 = 0x73656c75646f4d2f;
  *(int16_t *)(puVar7 + 1) = 0x2f;
  uStack_90 = 9;
  iVar3 = FUN_180628d60(&puStack_c0,&puStack_a0);
  uVar14 = 0;
  if ((iVar3 < 0) && (param_1[1] - *param_1 >> 5 != 0)) {
    puStack_80 = &system_data_buffer_ptr;
    uStack_68 = 0;
    puStack_78 = (int16_t *)0x0;
    uStack_70 = 0;
    puVar8 = (int16_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_78 = puVar8;
    uVar2 = CoreMemoryPoolCleaner(puVar8);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
    *puVar8 = 0x2f;
    uStack_70 = 1;
    lVar11 = *param_1;
    puVar10 = (int8_t *)0x0;
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (int8_t *)0x0;
    uStack_50 = 0;
    puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *puVar9 = 0;
    puStack_58 = puVar9;
    uVar4 = CoreMemoryPoolCleaner(puVar9);
    *puVar9 = *(int8_t *)puVar8;
    uStack_50 = 1;
    puVar9[1] = 0;
    uStack_48 = (uint64_t)uVar4;
    iVar3 = *(int *)(lVar11 + 0x10);
    if (iVar3 < 1) {
      if (puVar9 != (int8_t *)0x0) {
        puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
        *puVar10 = 0;
        CoreMemoryPoolCleaner(puVar10);
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar10,puVar9,1);
    }
    if ((iVar3 != -1) && (uVar4 < iVar3 + 2U)) {
      puVar9 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar9,iVar3 + 2U,0x10,0x13);
      puStack_58 = puVar9;
      uVar2 = CoreMemoryPoolCleaner(puVar9);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
      iVar3 = *(int *)(lVar11 + 0x10);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar9 + 1,*(uint64_t *)(lVar11 + 8),(int64_t)(iVar3 + 1));
  }
  lVar11 = FUN_180624c70(&puStack_80,&puStack_c0);
  if (puStack_b8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  uStack_b0 = *(uint *)(lVar11 + 0x10);
  puStack_b8 = *(int8_t **)(lVar11 + 8);
  uVar4 = *(uint *)(lVar11 + 0x18);
  uStack_a8 = *(uint64_t *)(lVar11 + 0x18);
  *(int32_t *)(lVar11 + 0x10) = 0;
  *(uint64_t *)(lVar11 + 8) = 0;
  *(uint64_t *)(lVar11 + 0x18) = 0;
  puStack_80 = &system_data_buffer_ptr;
  if (puStack_78 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puStack_78 = (int16_t *)0x0;
  uStack_68 = (uint64_t)uStack_68._4_4_ << 0x20;
  puStack_80 = &system_state_ptr;
  uVar15 = (uint64_t)uStack_b0;
  if (((0 < (int)uStack_b0) && (puStack_b8[(int)(uStack_b0 - 1)] == '/')) &&
     (puStack_b8[(int64_t)(int)(uStack_b0 - 1) + 1] == '\0')) goto LAB_180141f1f;
  uVar12 = uStack_b0 + 1;
  if (uVar12 != 0) {
    uVar5 = uStack_b0 + 2;
    if (puStack_b8 == (int8_t *)0x0) {
      if ((int)uVar5 < 0x10) {
        uVar5 = 0x10;
      }
      puStack_b8 = (int8_t *)
                   FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar5,
                                 CONCAT71((uint7)(uint3)(uStack_b0 >> 8),0x13));
      *puStack_b8 = 0;
    }
    else {
      if (uVar5 <= uVar4) goto LAB_180141f05;
      puStack_b8 = (int8_t *)DataValidator(system_memory_pool_ptr,puStack_b8,uVar5,0x10,0x13);
    }
    uVar2 = CoreMemoryPoolCleaner(puStack_b8);
    uVar15 = (uint64_t)uStack_b0;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar2);
  }
LAB_180141f05:
  *(int16_t *)(puStack_b8 + uVar15) = 0x2f;
  uVar15 = (uint64_t)uVar12;
  uStack_b0 = uVar12;
LAB_180141f1f:
  uVar16 = uVar14;
  uVar13 = uVar14;
  if ((int)uVar15 != 0) {
    do {
      cVar1 = puStack_b8[uVar13];
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        puStack_b8[uVar13] = cVar1 + ' ';
        uVar15 = (uint64_t)uStack_b0;
      }
      uVar4 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar4;
      uVar13 = uVar13 + 1;
    } while (uVar4 < (uint)uVar15);
  }
  iVar3 = (int)(param_1[0x112] - param_1[0x111] >> 5);
  uVar15 = uVar14;
  uVar16 = uVar14;
  if (0 < iVar3) {
    do {
      puVar9 = (int8_t *)0x0;
      lVar11 = param_1[0x111] + uVar16;
      if (*(int *)(lVar11 + 0x10) != 0) {
        iVar6 = *(int *)(lVar11 + 0x10) + 1;
        if (iVar6 < 0x10) {
          iVar6 = 0x10;
        }
        puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar6,0x13);
        *puVar9 = 0;
        if (*(int *)(lVar11 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar9,*(uint64_t *)(lVar11 + 8),*(int *)(lVar11 + 0x10) + 1);
        }
      }
      if ((*(int64_t *)(lVar11 + 8) != 0) && (puVar9 != (int8_t *)0x0)) {
        *puVar9 = 0;
      }
      if ((uStack_b0 == 0) || (uStack_b0 == 0)) {
        if (puVar9 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar9);
        }
        goto LAB_1801421be;
      }
      if (puVar9 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(puVar9);
      }
      uVar14 = (uint64_t)((int)uVar14 + 1);
      uVar15 = uVar15 + 1;
      uVar16 = uVar16 + 0x20;
    } while ((int64_t)uVar15 < (int64_t)iVar3);
  }
  uVar14 = 0xffffffff;
LAB_1801421be:
  puStack_a0 = &system_data_buffer_ptr;
  if (puStack_98 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puStack_98 = (uint64_t *)0x0;
  uStack_88 = uStack_88 & 0xffffffff00000000;
  puStack_a0 = &system_state_ptr;
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 == (int8_t *)0x0) {
    return uVar14;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



int32_t FUN_180142220(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)

{
  int32_t uVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar5;
  int8_t auStackX_8 [8];
  uint64_t *puStackX_10;
  uint64_t uVar4;
  
  uVar4 = 0;
  uVar5 = uVar4;
  if (*(int *)(param_2 + 2) != 0) {
    do {
      param_4 = param_2[1];
      if ((byte)(*(char *)(param_4 + uVar5) + 0xbfU) < 0x1a) {
        *(char *)(param_4 + uVar5) = *(char *)(param_4 + uVar5) + ' ';
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar3 < *(uint *)(param_2 + 2));
  }
  puStackX_10 = param_2;
  plVar2 = (int64_t *)FUN_180058080(param_1 + 0x8e8,auStackX_8,param_2,param_4,0xfffffffffffffffe);
  if (*plVar2 == param_1 + 0x8e8) {
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(int32_t *)(*plVar2 + 0x40);
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
  }
  *param_2 = &system_state_ptr;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180142300(int64_t param_1,uint64_t *param_2,int64_t param_3)
void FUN_180142300(int64_t param_1,uint64_t *param_2,int64_t param_3)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  int16_t *puVar7;
  int64_t lVar8;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  void *puVar13;
  int8_t auStack_138 [32];
  int8_t uStack_118;
  int32_t uStack_108;
  void *puStack_100;
  int16_t *puStack_f8;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  void *puStack_e0;
  int64_t lStack_d8;
  int32_t uStack_c8;
  void *puStack_c0;
  int64_t lStack_b8;
  int32_t uStack_a8;
  void *puStack_a0;
  int64_t lStack_98;
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t *puStack_78;
  void **ppuStack_70;
  void *puStack_68;
  void *puStack_60;
  int32_t uStack_58;
  uint8_t auStack_50 [16];
  uint64_t uStack_40;
  int64_t lVar9;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uStack_108 = 0;
  puStack_100 = &system_data_buffer_ptr;
  uStack_e8 = 0;
  puStack_f8 = (int16_t *)0x0;
  uStack_f0 = 0;
  puStack_78 = param_2;
  puVar7 = (int16_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_f8 = puVar7;
  uVar5 = CoreMemoryPoolCleaner(puVar7);
  *puVar7 = 0x2f;
  uStack_f0 = 1;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_3 + 8);
  }
  lVar8 = -1;
  do {
    lVar9 = lVar8;
    lVar8 = lVar9 + 1;
  } while (puVar13[lVar8] != '\0');
  uStack_e8._0_4_ = uVar5;
  if (0 < (int)lVar8) {
    iVar6 = (int)lVar9;
    iVar12 = iVar6 + 2;
    if ((iVar12 != 0) && (uVar1 = iVar6 + 3, uVar5 < uVar1)) {
      uStack_118 = 0x13;
      puVar7 = (int16_t *)DataValidator(system_memory_pool_ptr,puVar7,uVar1,0x10);
      puStack_f8 = puVar7;
      uStack_e8._0_4_ = CoreMemoryPoolCleaner(puVar7);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar7 + 1),puVar13,(int64_t)iVar12);
  }
  ppuStack_70 = &puStack_e0;
  uVar10 = FUN_1800babf0(&puStack_e0,&puStack_100);
  iVar6 = FUN_180142220(param_1,uVar10);
  if (*(char *)((int64_t)iVar6 + *(int64_t *)(param_1 + 0x8c8)) == '\0') {
    FUN_1806279c0(param_2,param_3);
    uStack_108 = 1;
    puStack_100 = &system_data_buffer_ptr;
    if (puStack_f8 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    uVar4 = (uint64_t)uStack_e8._4_4_;
  }
  else {
    puStack_68 = &system_config_ptr;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 6;
    strcpy_s(auStack_50,0x10,&unknown_var_2588_ptr);
    uStack_108 = 2;
    puVar13 = &system_buffer_ptr;
    if (puStack_60 != (void *)0x0) {
      puVar13 = puStack_60;
    }
    uVar10 = CoreMemoryPoolValidator(&puStack_e0,puVar13);
    uVar11 = FUN_180629a40(&puStack_100,&puStack_a0,1,uStack_f0);
    lVar8 = FUN_180627ce0(uVar10,&puStack_c0,uVar11);
    if (puStack_f8 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    uStack_f0 = *(int32_t *)(lVar8 + 0x10);
    puStack_f8 = *(int16_t **)(lVar8 + 8);
    uVar2 = *(int32_t *)(lVar8 + 0x1c);
    uVar3 = *(int32_t *)(lVar8 + 0x18);
    uStack_e8 = *(uint64_t *)(lVar8 + 0x18);
    *(int32_t *)(lVar8 + 0x10) = 0;
    *(uint64_t *)(lVar8 + 8) = 0;
    *(uint64_t *)(lVar8 + 0x18) = 0;
    puStack_c0 = &system_data_buffer_ptr;
    if (lStack_b8 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_b8 = 0;
    uStack_a8 = 0;
    puStack_c0 = &system_state_ptr;
    puStack_a0 = &system_data_buffer_ptr;
    if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_98 = 0;
    uStack_88 = 0;
    puStack_a0 = &system_state_ptr;
    puStack_e0 = &system_data_buffer_ptr;
    if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_d8 = 0;
    uStack_c8 = 0;
    puStack_e0 = &system_state_ptr;
    puStack_68 = &system_state_ptr;
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    *(int32_t *)(param_2 + 2) = uStack_f0;
    param_2[1] = puStack_f8;
    *(int32_t *)((int64_t)param_2 + 0x1c) = uVar2;
    *(int32_t *)(param_2 + 3) = uVar3;
    uStack_f0 = 0;
    uVar4 = 0;
  }
  uStack_e8 = uVar4 << 0x20;
  puStack_f8 = (int16_t *)0x0;
  puStack_100 = &system_state_ptr;
  uStack_108 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_138);
}



int32_t FUN_1801426a0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  
  puVar1 = (uint64_t *)(param_1 + 0x858);
  if (*(uint64_t **)(param_1 + 0x868) != (uint64_t *)0x0) {
    puVar4 = puVar1;
    puVar8 = *(uint64_t **)(param_1 + 0x868);
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar9 = (uint64_t *)puVar8[1];
        bVar3 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar5;
          do {
            uVar6 = (uint)pbVar5[lVar10];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar9 = (uint64_t *)puVar8[1];
            goto LAB_18014271c;
          }
        }
        puVar9 = (uint64_t *)*puVar8;
      }
LAB_18014271c:
      if (bVar3) {
        puVar8 = puVar4;
      }
      puVar4 = puVar8;
      puVar8 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
    if (puVar4 != puVar1) {
      if (*(int *)(puVar4 + 6) == 0) goto LAB_18014276d;
      if (*(int *)(param_2 + 0x10) != 0) {
        pbVar5 = (byte *)puVar4[5];
        lVar10 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar10];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_18014276d;
      }
    }
  }
  puVar4 = puVar1;
LAB_18014276d:
  if (puVar4 == puVar1) {
    return 0xffffffff;
  }
  return *(int32_t *)(puVar4[9] + -4);
}



int32_t FUN_1801426a4(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  
  puVar1 = (uint64_t *)(param_1 + 0x858);
  if (*(uint64_t **)(param_1 + 0x868) != (uint64_t *)0x0) {
    puVar4 = puVar1;
    puVar8 = *(uint64_t **)(param_1 + 0x868);
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar9 = (uint64_t *)puVar8[1];
        bVar3 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar5;
          do {
            uVar6 = (uint)pbVar5[lVar10];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar9 = (uint64_t *)puVar8[1];
            goto LAB_18014271c;
          }
        }
        puVar9 = (uint64_t *)*puVar8;
      }
LAB_18014271c:
      if (bVar3) {
        puVar8 = puVar4;
      }
      puVar4 = puVar8;
      puVar8 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
    if (puVar4 != puVar1) {
      if (*(int *)(puVar4 + 6) == 0) goto LAB_18014276d;
      if (*(int *)(param_2 + 0x10) != 0) {
        pbVar5 = (byte *)puVar4[5];
        lVar10 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar10];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_18014276d;
      }
    }
  }
  puVar4 = puVar1;
LAB_18014276d:
  if (puVar4 == puVar1) {
    return 0xffffffff;
  }
  return *(int32_t *)(puVar4[9] + -4);
}



uint64_t FUN_180142780(void)

{
  return 0xffffffff;
}



int64_t * FUN_1801427a0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  char cStackX_8;
  uint8_t uStackX_9;
  
  plVar5 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (int64_t *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (int64_t)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (int64_t *)plVar4[1];
            goto LAB_180142817;
          }
        }
        plVar8 = (int64_t *)*plVar4;
      }
LAB_180142817:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (int64_t *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_180142858:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_180142858;
    }
  }
  plVar4 = (int64_t *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] == 0) || (*(int *)(param_2 + 0x10) == 0)) goto LAB_18014293f;
    plVar5 = plVar4;
    if ((int)plVar4[6] != 0) {
      pbVar3 = *(byte **)(param_2 + 8);
      param_4 = plVar4[5] - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[param_4];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18014293f;
    }
LAB_180142937:
    param_4 = param_4 & 0xffffffffffffff00;
LAB_18014293a:
    if (plVar5 == (int64_t *)0x0) goto LAB_18014293f;
  }
  else {
    plVar4 = (int64_t *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18014293f;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_180142937;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          plVar5 = plVar4;
          goto LAB_18014293a;
        }
      }
    }
LAB_18014293f:
    plVar5 = (int64_t *)FUN_1800590b0(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_180142973;
    param_4 = 0;
  }
  FUN_180142a00(param_1,&cStackX_8,plVar5,param_4,param_2);
  plVar5 = (int64_t *)CONCAT71(uStackX_9,cStackX_8);
LAB_180142973:
  return plVar5 + 8;
}





// 函数: void FUN_180142990(int64_t param_1)
void FUN_180142990(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar1);
  }
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  return;
}





// 函数: void FUN_1801429a6(void)
void FUN_1801429a6(void)

{
  FUN_1800587d0();
  FUN_18005cb60();
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






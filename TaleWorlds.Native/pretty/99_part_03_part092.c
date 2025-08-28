#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part092.c - 6 个函数

// 函数: void FUN_18024f4f3(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18024f4f3(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t unaff_R12;
  
  *(int64_t *)(param_1 + 8) = param_3 + 0x420;
  FUN_1802533e0(param_3);
  puVar6 = *(uint64_t **)(unaff_RBX + 0x60);
  if (puVar6 < *(uint64_t **)(unaff_RBX + 0x68)) {
    *(uint64_t *)(unaff_RBX + 0x60) = (int64_t)puVar6 + 0x34;
    uVar5 = unaff_RSI[1];
    *puVar6 = *unaff_RSI;
    puVar6[1] = uVar5;
    uVar5 = unaff_RSI[3];
    puVar6[2] = unaff_RSI[2];
    puVar6[3] = uVar5;
    uVar5 = unaff_RSI[5];
    puVar6[4] = unaff_RSI[4];
    puVar6[5] = uVar5;
    *(int32_t *)(puVar6 + 6) = *(int32_t *)(unaff_RSI + 6);
    return;
  }
  puVar7 = *(uint64_t **)(unaff_RBX + 0x58);
  lVar1 = ((int64_t)puVar6 - (int64_t)puVar7) / 0x34;
  if ((lVar1 == 0) || (unaff_R12 = lVar1 * 2, unaff_R12 != 0)) {
    unaff_RBP = (uint64_t *)
                CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_R12 * 0x34,*(int8_t *)(unaff_RBX + 0x70));
    puVar7 = *(uint64_t **)(unaff_RBX + 0x58);
    puVar6 = *(uint64_t **)(unaff_RBX + 0x60);
  }
  if (puVar7 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(unaff_RBP,puVar7,(int64_t)puVar6 - (int64_t)puVar7);
  }
  uVar5 = unaff_RSI[1];
  *unaff_RBP = *unaff_RSI;
  unaff_RBP[1] = uVar5;
  uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x14);
  uVar3 = *(int32_t *)(unaff_RSI + 3);
  uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x1c);
  *(int32_t *)(unaff_RBP + 2) = *(int32_t *)(unaff_RSI + 2);
  *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar2;
  *(int32_t *)(unaff_RBP + 3) = uVar3;
  *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar4;
  uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x24);
  uVar3 = *(int32_t *)(unaff_RSI + 5);
  uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x2c);
  *(int32_t *)(unaff_RBP + 4) = *(int32_t *)(unaff_RSI + 4);
  *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar2;
  *(int32_t *)(unaff_RBP + 5) = uVar3;
  *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar4;
  *(int32_t *)(unaff_RBP + 6) = *(int32_t *)(unaff_RSI + 6);
  if (*(int64_t *)(unaff_RBX + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(unaff_RBX + 0x58) = unaff_RBP;
  *(int64_t *)(unaff_RBX + 0x60) = (int64_t)unaff_RBP + 0x34;
  *(int64_t *)(unaff_RBX + 0x68) = unaff_R12 * 0x34 + (int64_t)unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f630(int64_t param_1,int param_2)
void FUN_18024f630(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = (uint64_t)param_2;
  lVar3 = *(int64_t *)(param_1 + 0x38);
  lVar2 = 0;
  if ((uint64_t)((*(int64_t *)(param_1 + 0x48) - lVar3) / 0xc) < uVar4) {
    lVar1 = lVar2;
    if (uVar4 != 0) {
      lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0xc,*(int8_t *)(param_1 + 0x50));
      lVar3 = *(int64_t *)(param_1 + 0x38);
    }
    if (lVar3 != *(int64_t *)(param_1 + 0x40)) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar3,*(int64_t *)(param_1 + 0x40) - lVar3);
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t *)(param_1 + 0x38) = lVar1;
    *(int64_t *)(param_1 + 0x40) = lVar1;
    *(uint64_t *)(param_1 + 0x48) = lVar1 + uVar4 * 0xc;
  }
  FUN_180253520(param_1 + 0x78,uVar4);
  lVar3 = *(int64_t *)(param_1 + 0x58);
  if ((uint64_t)((*(int64_t *)(param_1 + 0x68) - lVar3) / 0x34) < uVar4) {
    if (uVar4 != 0) {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0x34,*(int8_t *)(param_1 + 0x70));
      lVar3 = *(int64_t *)(param_1 + 0x58);
    }
    if (lVar3 != *(int64_t *)(param_1 + 0x60)) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,*(int64_t *)(param_1 + 0x60) - lVar3);
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
    *(int64_t *)(param_1 + 0x58) = lVar2;
    *(int64_t *)(param_1 + 0x60) = lVar2;
    *(uint64_t *)(param_1 + 0x68) = uVar4 * 0x34 + lVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f64e(int64_t param_1)
void FUN_18024f64e(int64_t param_1)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if ((uint64_t)((*(int64_t *)(unaff_RBX + 0x48) - param_1) / 0xc) < unaff_RDI) {
    lVar1 = unaff_RSI;
    if (unaff_RDI != 0) {
      lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI * 0xc,*(int8_t *)(unaff_RBX + 0x50));
      param_1 = *(int64_t *)(unaff_RBX + 0x38);
    }
    if (param_1 != *(int64_t *)(unaff_RBX + 0x40)) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,param_1,*(int64_t *)(unaff_RBX + 0x40) - param_1);
    }
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t *)(unaff_RBX + 0x38) = lVar1;
    *(int64_t *)(unaff_RBX + 0x40) = lVar1;
    *(uint64_t *)(unaff_RBX + 0x48) = lVar1 + unaff_RDI * 0xc;
  }
  FUN_180253520(unaff_RBX + 0x78);
  lVar1 = *(int64_t *)(unaff_RBX + 0x58);
  if ((uint64_t)((*(int64_t *)(unaff_RBX + 0x68) - lVar1) / 0x34) < unaff_RDI) {
    if (unaff_RDI != 0) {
      unaff_RSI = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI * 0x34,*(int8_t *)(unaff_RBX + 0x70));
      lVar1 = *(int64_t *)(unaff_RBX + 0x58);
    }
    if (lVar1 != *(int64_t *)(unaff_RBX + 0x60)) {
                    // WARNING: Subroutine does not return
      memmove(unaff_RSI,lVar1,*(int64_t *)(unaff_RBX + 0x60) - lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
    *(int64_t *)(unaff_RBX + 0x58) = unaff_RSI;
    *(int64_t *)(unaff_RBX + 0x60) = unaff_RSI;
    *(uint64_t *)(unaff_RBX + 0x68) = unaff_RDI * 0x34 + unaff_RSI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f74c(void)
void FUN_18024f74c(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  
  if (unaff_RDI != 0) {
    unaff_RSI = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI * 0x34,*(int8_t *)(unaff_RBX + 0x70));
    in_R9 = *(int64_t *)(unaff_RBX + 0x58);
  }
  if (in_R9 == *(int64_t *)(unaff_RBX + 0x60)) {
    if (in_R9 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(in_R9);
    }
    *(int64_t *)(unaff_RBX + 0x58) = unaff_RSI;
    *(int64_t *)(unaff_RBX + 0x60) = unaff_RSI;
    *(int64_t *)(unaff_RBX + 0x68) = unaff_RDI * 0x34 + unaff_RSI;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(unaff_RSI,in_R9,*(int64_t *)(unaff_RBX + 0x60) - in_R9);
}






// 函数: void FUN_18024f8e0(int64_t param_1)
void FUN_18024f8e0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lStackX_8;
  uint64_t *puStackX_10;
  uint64_t uVar7;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint64_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  code *pcStack_48;
  
  uVar7 = 0xfffffffffffffffe;
  lStackX_8 = *(int64_t *)(param_1 + 200);
  lVar2 = *(int64_t *)(lStackX_8 + 0x3580);
  if (lVar2 != 0) {
    lVar1 = *(int64_t *)(param_1 + 0xc0);
    uStack_58 = (int64_t *)CONCAT44(uStack_58._4_4_,(int32_t)uStack_58);
    if ((*(char *)(lVar1 + 0x563) != '\0') &&
       (uStack_58 = (int64_t *)CONCAT44(uStack_58._4_4_,(int32_t)uStack_58),
       0 < (int)((*(int64_t *)(lVar1 + 0x5b0) - *(int64_t *)(lVar1 + 0x5a8)) / 0xc))) {
      uVar3 = 0;
      uVar6 = 0;
      lVar4 = 0x118;
      if (*(int *)(lVar2 + 0x110) != 0) {
        lVar5 = 0x118;
        do {
          FUN_18024edc0(lVar1 + 0x570,lVar2,*(uint64_t *)(lVar5 + lVar2));
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
          lVar2 = *(int64_t *)(lStackX_8 + 0x3580);
        } while (uVar6 < *(uint *)(lVar2 + 0x110));
      }
      puStackX_10 = &uStack_60;
      uStack_58 = &lStackX_8;
      puStack_50 = &processed_var_9920_ptr;
      pcStack_48 = FUN_1801bbfb0;
      uStack_80 = (int32_t)lVar1;
      uStack_7c = (int32_t)((uint64_t)lVar1 >> 0x20);
      uStack_60._0_4_ = uStack_80;
      uStack_60._4_4_ = uStack_7c;
      FUN_18015b810(*(int64_t *)(lStackX_8 + 0x3580),0,
                    *(int32_t *)(*(int64_t *)(lStackX_8 + 0x3580) + 0x110),1,0xffffffffffffffff,
                    &uStack_60,uVar7);
      lVar2 = *(int64_t *)(lStackX_8 + 0x3580);
      if (*(int *)(lVar2 + 0x110) != 0) {
        do {
          FUN_18024ef20(lVar1 + 0x570,lVar2,*(uint64_t *)(lVar4 + lVar2));
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 8;
          lVar2 = *(int64_t *)(lStackX_8 + 0x3580);
        } while (uVar3 < *(uint *)(lVar2 + 0x110));
      }
    }
    FUN_1800466d0(*(uint64_t *)(param_1 + 0xd8));
    lVar2 = *(int64_t *)(param_1 + 0xc0);
    lStackX_8 = *(int64_t *)(param_1 + 200);
    uStack_60 = (int64_t *)CONCAT44(uStack_60._4_4_,(int32_t)uStack_60);
    if ((*(char *)(lVar2 + 0x563) != '\0') &&
       (uStack_60 = (int64_t *)CONCAT44(uStack_60._4_4_,(int32_t)uStack_60),
       0 < (int)((*(int64_t *)(lVar2 + 0x5b0) - *(int64_t *)(lVar2 + 0x5a8)) / 0xc))) {
      puStackX_10 = &uStack_60;
      uStack_60 = &lStackX_8;
      puStack_50 = &processed_var_9424_ptr;
      pcStack_48 = FUN_1801bbf00;
      uStack_78 = (int32_t)lVar2;
      uStack_74 = (int32_t)((uint64_t)lVar2 >> 0x20);
      uStack_58._0_4_ = uStack_78;
      uStack_58._4_4_ = uStack_74;
      FUN_18015b810(*(int64_t *)(lStackX_8 + 0x3580),0,
                    *(int32_t *)(*(int64_t *)(lStackX_8 + 0x3580) + 0x110),1,0xffffffffffffffff,
                    &uStack_60,uVar7);
    }
    FUN_1800466d0(*(uint64_t *)(param_1 + 0xe0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024fb60(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18024fb60(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint *puVar1;
  int64_t lVar2;
  int iVar3;
  char cVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int8_t *puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  byte abStackX_8 [8];
  int8_t auStackX_10 [8];
  int64_t lStackX_18;
  byte abStackX_20 [8];
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int64_t lStack_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int32_t uStack_120;
  int32_t auStack_118 [2];
  uint64_t uStack_110;
  int64_t *plStack_108;
  int64_t lStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int64_t **pplStack_d8;
  int64_t alStack_d0 [3];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t *plStack_a0;
  int8_t *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int64_t *aplStack_70 [2];
  code *pcStack_60;
  code *pcStack_58;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  abStackX_8[0] = 0;
  if (*(int *)(param_3 + 8) != -1) {
    abStackX_8[0] = (byte)*(int32_t *)(param_3 + 0x18);
  }
  abStackX_8[0] = abStackX_8[0] & 1;
  lStackX_18 = param_3;
  cVar4 = func_0x0001800e2bf0(system_parameter_buffer,param_3);
  if (cVar4 == '\0') {
    iStack_13c = 2 - (uint)(abStackX_8[0] != 0);
  }
  else {
    iStack_13c = 2;
  }
  abStackX_20[0] = *(byte *)(lStackX_18 + 7) & 1;
  if ((abStackX_8[0] == 0) || (auStackX_10[0] = 1, *(char *)(lStackX_18 + 0x9a0d) != '\0')) {
    auStackX_10[0] = 0;
  }
  lVar5 = (int64_t)*(int *)(*(int64_t *)(param_2 + 0x3580) + 0x628);
  lVar10 = (int64_t)*(int *)(lStackX_18 + 0x9a28);
  plVar13 = (int64_t *)((lVar5 * 0x80 + lVar10) * 0x20 + system_system_data_memory);
  plVar14 = (int64_t *)(((lVar5 + 8) * 0x80 + lVar10) * 0x20 + system_system_data_memory);
  cVar4 = *(char *)((lVar5 + 0x200) * 0x80 + lVar10 + system_system_data_memory);
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 3;
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4000,3);
  if (lStack_138 != lStack_130) {
                    // WARNING: Subroutine does not return
    memmove(lVar5,lStack_138,lStack_130 - lStack_138);
  }
  if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lStack_138);
  }
  lStack_128 = lVar5 + 0x4000;
  iStack_140 = 0;
  lVar10 = *(int64_t *)(param_1 + 0x38);
  lVar8 = *(int64_t *)(param_1 + 0x40) - lVar10;
  lVar2 = lVar8 >> 0x3f;
  lStack_138 = lVar5;
  lStack_130 = lVar5;
  if (lVar8 / 0xc + lVar2 != lVar2) {
    do {
      iVar3 = iStack_140;
      puVar1 = (uint *)(lVar10 + (int64_t)iStack_140 * 0xc);
      uVar9 = (uint)*(char *)((int64_t)(int)puVar1[1] + *plVar13);
      if (((uVar9 >> 4 & 1) != 0) &&
         ((cVar4 == '\0' || (((uint)(int)*(char *)((int64_t)iStack_140 + *plVar14) >> 4 & 1) != 0))
         )) {
        uVar9 = uVar9 & 0xf;
        if ((int)(puVar1[2] - 1) < (int)uVar9) {
          uVar9 = puVar1[2] - 1;
        }
        if ((*puVar1 & 1 << ((byte)uVar9 & 0x1f)) != 0) {
          FUN_1800571e0(&lStack_138,&iStack_140);
        }
      }
      iStack_140 = iVar3 + 1;
      lVar10 = *(int64_t *)(param_1 + 0x38);
    } while ((uint64_t)(int64_t)iStack_140 <
             (uint64_t)((*(int64_t *)(param_1 + 0x40) - lVar10) / 0xc));
  }
  uVar12 = 0;
  uStack_110 = 0;
  alStack_d0[0] = 0;
  alStack_d0[1] = 0;
  alStack_d0[2] = 0;
  uStack_b8 = 3;
  if (abStackX_20[0] != 0) {
    iStack_144 = 0;
    auStack_118[0] = 0xffffffff;
    FUN_18014e020(alStack_d0,lStack_130 - lStack_138 >> 2,auStack_118);
    pplStack_d8 = aplStack_70;
    plStack_108 = &lStack_138;
    uStack_f8 = (code *)&lStackX_18;
    uStack_f0 = abStackX_8;
    uStack_e8 = alStack_d0;
    uStack_e0 = &iStack_144;
    pcStack_60 = FUN_1802541c0;
    pcStack_58 = FUN_1802540d0;
    lStack_100 = param_1;
    aplStack_70[0] = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
    *aplStack_70[0] = (int64_t)plStack_108;
    aplStack_70[0][1] = lStack_100;
    *(int32_t *)(aplStack_70[0] + 2) = (int32_t)uStack_f8;
    *(int32_t *)((int64_t)aplStack_70[0] + 0x14) = uStack_f8._4_4_;
    *(int32_t *)(aplStack_70[0] + 3) = (int32_t)uStack_f0;
    *(int32_t *)((int64_t)aplStack_70[0] + 0x1c) = uStack_f0._4_4_;
    *(int32_t *)(aplStack_70[0] + 4) = (int32_t)uStack_e8;
    *(int32_t *)((int64_t)aplStack_70[0] + 0x24) = uStack_e8._4_4_;
    *(int32_t *)(aplStack_70[0] + 5) = (int32_t)uStack_e0;
    *(int32_t *)((int64_t)aplStack_70[0] + 0x2c) = uStack_e0._4_4_;
    FUN_18015b810(aplStack_70,0,lStack_130 - lStack_138 >> 2,0x80,0xffffffffffffffff,aplStack_70);
    if (0 < iStack_144) {
      uVar6 = (uint64_t)iStack_144;
      uVar7 = uVar12;
      if (iStack_144 != 0) {
        uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 << 4,5);
        puVar11 = (int8_t *)(uVar7 + 0xc);
        do {
          *(uint64_t *)(puVar11 + -0xc) = 0;
          *(int32_t *)(puVar11 + -4) = 0;
          *puVar11 = 0;
          uVar9 = (int)uVar12 + 1;
          uVar12 = (uint64_t)uVar9;
          puVar11 = puVar11 + 0x10;
        } while ((uint64_t)(int64_t)(int)uVar9 < uVar6);
      }
      *(uint64_t *)(lStackX_18 + 0x99a8) = uVar7;
      *(int *)(lStackX_18 + 0x99b0) = iStack_144;
      uStack_110 = uVar7;
    }
  }
  pplStack_d8 = &plStack_108;
  plStack_b0 = &lStack_138;
  plStack_a0 = &lStackX_18;
  puStack_98 = auStackX_10;
  uStack_90 = &iStack_13c;
  uStack_88 = abStackX_20;
  uStack_80 = &uStack_110;
  uStack_78 = alStack_d0;
  uStack_f8 = FUN_180253fe0;
  uStack_f0 = &rendering_buffer_2112_ptr;
  lStack_a8 = param_1;
  plStack_108 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,system_allocation_flags);
  *plStack_108 = (int64_t)plStack_b0;
  plStack_108[1] = lStack_a8;
  plStack_108[2] = (int64_t)plStack_a0;
  plStack_108[3] = (int64_t)puStack_98;
  *(int32_t *)(plStack_108 + 4) = (int32_t)uStack_90;
  *(int32_t *)((int64_t)plStack_108 + 0x24) = uStack_90._4_4_;
  *(int32_t *)(plStack_108 + 5) = (int32_t)uStack_88;
  *(int32_t *)((int64_t)plStack_108 + 0x2c) = uStack_88._4_4_;
  *(int32_t *)(plStack_108 + 6) = (int32_t)uStack_80;
  *(int32_t *)((int64_t)plStack_108 + 0x34) = uStack_80._4_4_;
  *(int32_t *)(plStack_108 + 7) = (int32_t)uStack_78;
  *(int32_t *)((int64_t)plStack_108 + 0x3c) = uStack_78._4_4_;
  FUN_18015b810(&plStack_108,0,lStack_130 - lStack_138 >> 2,0x80,0xffffffffffffffff,&plStack_108);
  if (alStack_d0[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018025058b)
// WARNING: Removing unreachable block (ram,0x0001802506aa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address





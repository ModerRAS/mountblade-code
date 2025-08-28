#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part201.c - 5 个函数

// 函数: void FUN_180384a67(void)
void FUN_180384a67(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar12;
  int64_t unaff_RDI;
  uint64_t *puVar13;
  int64_t unaff_R12;
  float *pfVar14;
  int64_t lVar15;
  int64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t in_stack_000001d0;
  
  puVar13 = (uint64_t *)(unaff_RDI + 0x3580);
  if ((*(byte *)(unaff_RBP + 0xc0) & 0x80) == 0) {
    lVar15 = 0x28;
    lVar12 = 0x28;
    do {
      puVar9 = (uint64_t *)unaff_RBX[2];
      puVar10 = unaff_RBX;
      if (puVar9 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar9[4] < *puVar13) {
            puVar9 = (uint64_t *)*puVar9;
          }
          else {
            puVar10 = puVar9;
            puVar9 = (uint64_t *)puVar9[1];
          }
        } while (puVar9 != (uint64_t *)0x0);
      }
      if ((puVar10 == unaff_RBX) || (*puVar13 < (uint64_t)puVar10[4])) {
        puVar10 = (uint64_t *)FUN_180387860();
        puVar10 = (uint64_t *)*puVar10;
      }
      if (*(int64_t *)(lVar12 + (int64_t)puVar10) == unaff_R12) goto FUN_180384e7e;
      lVar12 = lVar12 + 8;
    } while (lVar12 < 0x58);
    puVar9 = (uint64_t *)(unaff_R15 + 0xb0);
    pfVar14 = (float *)(unaff_R15 + 0x50);
    lVar12 = unaff_RBP - unaff_R15;
    do {
      puVar10 = (uint64_t *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar10[4] < *puVar13) {
            puVar10 = (uint64_t *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (uint64_t *)puVar10[1];
          }
        } while (puVar10 != (uint64_t *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (uint64_t)puVar11[4])) {
        puVar11 = (uint64_t *)FUN_180387860();
        puVar11 = (uint64_t *)*puVar11;
      }
      iVar2 = *(int *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 0xc);
      iVar3 = *(int *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 0x10);
      puVar10 = (uint64_t *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar10[4] < *puVar13) {
            puVar10 = (uint64_t *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (uint64_t *)puVar10[1];
          }
        } while (puVar10 != (uint64_t *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (uint64_t)puVar11[4])) {
        puVar11 = (uint64_t *)FUN_180387860();
        puVar11 = (uint64_t *)*puVar11;
      }
      iVar4 = *(int *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 0xc);
      iVar5 = *(int *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 0x10);
      puVar10 = (uint64_t *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar10[4] < *puVar13) {
            puVar10 = (uint64_t *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (uint64_t *)puVar10[1];
          }
        } while (puVar10 != (uint64_t *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (uint64_t)puVar11[4])) {
        puVar11 = (uint64_t *)FUN_180387860();
        puVar11 = (uint64_t *)*puVar11;
      }
      iVar6 = *(int *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 0x10);
      fVar1 = *(float *)(*(int64_t *)(lVar15 + (int64_t)puVar11) + 4);
      puVar11 = (uint64_t *)unaff_RBX[2];
      puVar10 = unaff_RBX;
      if (puVar11 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar11[4] < *puVar13) {
            puVar11 = (uint64_t *)*puVar11;
          }
          else {
            puVar10 = puVar11;
            puVar11 = (uint64_t *)puVar11[1];
          }
        } while (puVar11 != (uint64_t *)0x0);
      }
      if ((puVar10 == unaff_RBX) || (*puVar13 < (uint64_t)puVar10[4])) {
        puVar10 = (uint64_t *)FUN_180387860();
        puVar10 = (uint64_t *)*puVar10;
      }
      puVar10 = (uint64_t *)(lVar15 + (int64_t)puVar10);
      lVar15 = lVar15 + 8;
      *pfVar14 = 0.05 / (float)(int)((float *)*puVar10)[4] + *(float *)*puVar10;
      pfVar14[1] = 0.05 / (float)iVar6 + fVar1;
      pfVar14[2] = ((float)iVar4 * 0.9) / (float)iVar5;
      pfVar14[3] = ((float)iVar2 * 0.9) / (float)iVar3;
      pfVar14 = pfVar14 + 4;
      puVar10 = (uint64_t *)((int64_t)puVar9 + lVar12 + 0x120);
      uVar7 = puVar10[1];
      *puVar9 = *puVar10;
      puVar9[1] = uVar7;
      puVar10 = (uint64_t *)((int64_t)puVar9 + lVar12 + 0x130);
      uVar7 = puVar10[1];
      puVar9[2] = *puVar10;
      puVar9[3] = uVar7;
      puVar10 = (uint64_t *)((int64_t)puVar9 + lVar12 + 0x140);
      uVar7 = puVar10[1];
      puVar9[4] = *puVar10;
      puVar9[5] = uVar7;
      puVar10 = (uint64_t *)((int64_t)puVar9 + lVar12 + 0x150);
      uVar7 = puVar10[1];
      puVar9[6] = *puVar10;
      puVar9[7] = uVar7;
      puVar9 = puVar9 + 8;
    } while (lVar15 < 0x58);
  }
  else {
    plVar8 = (int64_t *)FUN_180387380();
    if (*plVar8 == unaff_R12) {
FUN_180384e7e:
      *(int *)(unaff_R15 + 0x1c) = (int)unaff_R12;
    }
    else {
      plVar8 = (int64_t *)FUN_180387380(extraout_XMM0_Qa,puVar13);
      iVar2 = *(int *)(*plVar8 + 0xc);
      iVar3 = *(int *)(*plVar8 + 0x10);
      plVar8 = (int64_t *)FUN_180387380();
      iVar4 = *(int *)(*plVar8 + 0xc);
      iVar5 = *(int *)(*plVar8 + 0x10);
      plVar8 = (int64_t *)FUN_180387380();
      iVar6 = *(int *)(*plVar8 + 0x10);
      fVar1 = *(float *)(*plVar8 + 4);
      puVar9 = (uint64_t *)FUN_180387380();
      *(float *)(unaff_R15 + 0x50) = 0.05 / (float)(int)((float *)*puVar9)[4] + *(float *)*puVar9;
      *(float *)(unaff_R15 + 0x54) = 0.05 / (float)iVar6 + fVar1;
      *(float *)(unaff_R15 + 0x58) = ((float)iVar4 * 0.9) / (float)iVar5;
      *(float *)(unaff_R15 + 0x5c) = ((float)iVar2 * 0.9) / (float)iVar3;
      uVar7 = *(uint64_t *)(unaff_RBP + 0x1d8);
      *(uint64_t *)(unaff_R15 + 0xb0) = *(uint64_t *)(unaff_RBP + 0x1d0);
      *(uint64_t *)(unaff_R15 + 0xb8) = uVar7;
      uVar7 = *(uint64_t *)(unaff_RBP + 0x1e8);
      *(uint64_t *)(unaff_R15 + 0xc0) = *(uint64_t *)(unaff_RBP + 0x1e0);
      *(uint64_t *)(unaff_R15 + 200) = uVar7;
      uVar7 = *(uint64_t *)(unaff_RBP + 0x1f8);
      *(uint64_t *)(unaff_R15 + 0xd0) = *(uint64_t *)(unaff_RBP + 0x1f0);
      *(uint64_t *)(unaff_R15 + 0xd8) = uVar7;
      uVar7 = *(uint64_t *)(unaff_RBP + 0x208);
      *(uint64_t *)(unaff_R15 + 0xe0) = *(uint64_t *)(unaff_RBP + 0x200);
      *(uint64_t *)(unaff_R15 + 0xe8) = uVar7;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000001d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180384c38(void)
void FUN_180384c38(void)

{
  int32_t *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar14;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar15;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float unaff_XMM9_Da;
  uint64_t in_stack_000001d0;
  
  pfVar15 = (float *)(unaff_R15 + 0x50);
  lVar14 = unaff_RBP - unaff_R15;
  do {
    puVar13 = (uint64_t *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar13[4] < *unaff_RDI) {
          puVar13 = (uint64_t *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (uint64_t *)puVar13[1];
        }
      } while (puVar13 != (uint64_t *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (uint64_t)puVar12[4])) {
      puVar12 = (uint64_t *)FUN_180387860();
      puVar12 = (uint64_t *)*puVar12;
    }
    iVar3 = *(int *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 0xc);
    iVar4 = *(int *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 0x10);
    puVar13 = (uint64_t *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar13[4] < *unaff_RDI) {
          puVar13 = (uint64_t *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (uint64_t *)puVar13[1];
        }
      } while (puVar13 != (uint64_t *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (uint64_t)puVar12[4])) {
      puVar12 = (uint64_t *)FUN_180387860();
      puVar12 = (uint64_t *)*puVar12;
    }
    iVar5 = *(int *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 0xc);
    iVar6 = *(int *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 0x10);
    puVar13 = (uint64_t *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar13[4] < *unaff_RDI) {
          puVar13 = (uint64_t *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (uint64_t *)puVar13[1];
        }
      } while (puVar13 != (uint64_t *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (uint64_t)puVar12[4])) {
      puVar12 = (uint64_t *)FUN_180387860();
      puVar12 = (uint64_t *)*puVar12;
    }
    iVar7 = *(int *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 0x10);
    fVar2 = *(float *)(*(int64_t *)(unaff_R14 + (int64_t)puVar12) + 4);
    puVar12 = (uint64_t *)unaff_RBX[2];
    puVar13 = unaff_RBX;
    if (puVar12 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar12[4] < *unaff_RDI) {
          puVar12 = (uint64_t *)*puVar12;
        }
        else {
          puVar13 = puVar12;
          puVar12 = (uint64_t *)puVar12[1];
        }
      } while (puVar12 != (uint64_t *)0x0);
    }
    if ((puVar13 == unaff_RBX) || (*unaff_RDI < (uint64_t)puVar13[4])) {
      puVar13 = (uint64_t *)FUN_180387860();
      puVar13 = (uint64_t *)*puVar13;
    }
    puVar13 = (uint64_t *)(unaff_R14 + (int64_t)puVar13);
    unaff_R14 = unaff_R14 + 8;
    *pfVar15 = 0.05 / (float)(int)((float *)*puVar13)[4] + *(float *)*puVar13;
    pfVar15[1] = 0.05 / (float)iVar7 + fVar2;
    pfVar15[2] = ((float)iVar5 * unaff_XMM9_Da) / (float)iVar6;
    pfVar15[3] = ((float)iVar3 * unaff_XMM9_Da) / (float)iVar4;
    pfVar15 = pfVar15 + 4;
    puVar13 = (uint64_t *)((int64_t)unaff_RSI + lVar14 + 0x120);
    uVar11 = puVar13[1];
    *unaff_RSI = *puVar13;
    unaff_RSI[1] = uVar11;
    puVar13 = (uint64_t *)((int64_t)unaff_RSI + lVar14 + 0x130);
    uVar11 = puVar13[1];
    unaff_RSI[2] = *puVar13;
    unaff_RSI[3] = uVar11;
    puVar13 = (uint64_t *)((int64_t)unaff_RSI + lVar14 + 0x140);
    uVar11 = puVar13[1];
    unaff_RSI[4] = *puVar13;
    unaff_RSI[5] = uVar11;
    puVar1 = (int32_t *)((int64_t)unaff_RSI + lVar14 + 0x150);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    *(int32_t *)(unaff_RSI + 6) = *puVar1;
    *(int32_t *)((int64_t)unaff_RSI + 0x34) = uVar8;
    *(int32_t *)(unaff_RSI + 7) = uVar9;
    *(int32_t *)((int64_t)unaff_RSI + 0x3c) = uVar10;
    unaff_RSI = unaff_RSI + 8;
  } while (unaff_R14 < 0x58);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000001d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180384e7e(void)
void FUN_180384e7e(void)

{
  int32_t unaff_R12D;
  int64_t unaff_R15;
  uint64_t in_stack_000001d0;
  
  *(int32_t *)(unaff_R15 + 0x1c) = unaff_R12D;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000001d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180384e9c(void)
void FUN_180384e9c(void)

{
  uint64_t in_stack_000001d0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000001d0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180384ed0(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180384ed0(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  char acStackX_8 [8];
  int64_t lStackX_18;
  uint64_t uStackX_20;
  uint64_t *puStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  int32_t uStack_110;
  uint64_t **ppuStack_108;
  char *pcStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int64_t lStack_e8;
  int64_t *aplStack_e0 [2];
  code *pcStack_d0;
  code *pcStack_c8;
  int64_t **pplStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int16_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int8_t uStack_94;
  int32_t uStack_90;
  uint64_t uStack_8c;
  int16_t uStack_84;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int8_t uStack_64;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  acStackX_8[0] = *(char *)(param_3 + 0x20);
  puVar4 = (uint64_t *)0x0;
  uStack_b8 = 0;
  uStack_ac = 0xff00;
  uStack_a8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffff;
  uStack_94 = 0xff;
  uStack_90 = 0xffffffff;
  uStack_8c = 0;
  uStack_84 = 0x400;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_b0 = 0;
  lVar6 = *(int64_t *)(param_1 + 0x90);
  lStack_50 = lVar6 + 0x27f0;
  if (acStackX_8[0] == '\0') {
    lStack_50 = lVar6 + 0x2810;
  }
  (**(code **)(**(int64_t **)(lVar6 + 0x27e8) + 0x1c8))
            (*(int64_t **)(lVar6 + 0x27e8),param_3,lVar6,&system_data_0300,&uStack_b8);
  lVar6 = param_1 + 0x100;
  lVar5 = *(int64_t *)(param_1 + 0x108);
  puStack_128 = (uint64_t *)0x0;
  puStack_120 = (uint64_t *)0x0;
  puStack_118 = (uint64_t *)0x0;
  uStack_110 = 3;
  lVar3 = lVar5;
  puVar7 = puVar4;
  if (lVar5 != lVar6) {
    do {
      lVar3 = func_0x00018066bd70(lVar3);
      puVar7 = (uint64_t *)((int64_t)puVar7 + 1);
    } while (lVar3 != lVar6);
    if (puVar7 != (uint64_t *)0x0) {
      puVar4 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)puVar7 * 8,(int8_t)uStack_110);
    }
  }
  puStack_120 = puVar4 + (int64_t)puVar7;
  puStack_118 = puStack_120;
  puStack_128 = puVar4;
  for (; lVar5 != lVar6; lVar5 = func_0x00018066bd70(lVar5)) {
    *puVar4 = *(uint64_t *)(lVar5 + 0x20);
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
    pplStack_c0 = aplStack_e0;
    ppuStack_108 = &puStack_128;
    pcStack_100 = acStackX_8;
    uStack_f8 = &lStackX_18;
    uStack_f0 = &uStackX_20;
    pcStack_d0 = FUN_180388290;
    pcStack_c8 = FUN_180388120;
    lStackX_18 = param_3;
    uStackX_20 = param_2;
    lStack_e8 = param_1;
    aplStack_e0[0] = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *aplStack_e0[0] = (int64_t)ppuStack_108;
    aplStack_e0[0][1] = (int64_t)pcStack_100;
    *(int32_t *)(aplStack_e0[0] + 2) = (int32_t)uStack_f8;
    *(int32_t *)((int64_t)aplStack_e0[0] + 0x14) = uStack_f8._4_4_;
    *(int32_t *)(aplStack_e0[0] + 3) = (int32_t)uStack_f0;
    *(int32_t *)((int64_t)aplStack_e0[0] + 0x1c) = uStack_f0._4_4_;
    aplStack_e0[0][4] = lStack_e8;
    lVar6 = (int64_t)puStack_120 - (int64_t)puStack_128;
  }
  else {
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) != 1) goto LAB_1803851ae;
    pplStack_c0 = aplStack_e0;
    ppuStack_108 = &puStack_128;
    pcStack_100 = acStackX_8;
    uStack_f8 = &lStackX_18;
    uStack_f0 = &uStackX_20;
    pcStack_d0 = FUN_180388040;
    pcStack_c8 = FUN_180387ed0;
    lStackX_18 = param_3;
    uStackX_20 = param_2;
    lStack_e8 = param_1;
    aplStack_e0[0] = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *aplStack_e0[0] = (int64_t)ppuStack_108;
    aplStack_e0[0][1] = (int64_t)pcStack_100;
    *(int32_t *)(aplStack_e0[0] + 2) = (int32_t)uStack_f8;
    *(int32_t *)((int64_t)aplStack_e0[0] + 0x14) = uStack_f8._4_4_;
    *(int32_t *)(aplStack_e0[0] + 3) = (int32_t)uStack_f0;
    *(int32_t *)((int64_t)aplStack_e0[0] + 0x1c) = uStack_f0._4_4_;
    aplStack_e0[0][4] = lStack_e8;
    lVar6 = (int64_t)puStack_120 - (int64_t)puStack_128;
  }
  FUN_18015b810(aplStack_e0,0,lVar6 >> 3,0x40,0xffffffffffffffff,aplStack_e0);
LAB_1803851ae:
  lVar6 = *(int64_t *)(param_1 + 0x90);
  if (((*(char *)(lVar6 + 0x563) != '\0') &&
      (lVar6 = *(int64_t *)(lVar6 + 0x5b0) - *(int64_t *)(lVar6 + 0x5a8),
      iVar2 = (int)(lVar6 >> 0x3f), iVar1 = (int)(lVar6 / 0xc) + iVar2,
      iVar1 != iVar2 && -1 < iVar1 - iVar2)) && (*(char *)(param_3 + 0x20) != '\0')) {
    FUN_18024fb60(*(uint64_t *)(param_1 + 0xa0),param_2,param_3);
  }
  if (puStack_128 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Removing unreachable block (ram,0x000180385a6a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




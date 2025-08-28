#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part348.c - 11 个函数

// 函数: void FUN_1804557b0(int64_t param_1,int param_2,int param_3,int64_t param_4)
void FUN_1804557b0(int64_t param_1,int param_2,int param_3,int64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  
  plVar3 = (int64_t *)
           ((int64_t)param_3 * 0x68 +
           *(int64_t *)
            (*(int64_t *)(*(int64_t *)(param_1 + 0x2908) + 0x40) + (int64_t)param_2 * 8));
  iVar1 = *(int *)((int64_t)plVar3 + 0xc);
  if (((int64_t)(iVar1 * iVar1) & 0x3fffffffffffffffU) == 0) {
    return;
  }
  if (param_4 != 0) {
    if (*plVar3 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      memcpy();
      return;
    }
                    // WARNING: Subroutine does not return
    memset(param_4);
  }
  puVar2 = (int32_t *)_errno();
  *puVar2 = 0x16;
                    // WARNING: Could not recover jumptable at 0x00018045580d. Too many branches
                    // WARNING: Treating indirect jump as call
  _invalid_parameter_noinfo();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180455980(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  lVar2 = *(int64_t *)(param_1 + 0x448);
  if (lVar2 == 0) {
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
    lVar2 = FUN_180373a60(uVar1,param_1);
  }
  return *(int32_t *)(lVar2 + 0x2368);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804559d0(int64_t param_1)

{
  char cVar1;
  uint64_t ******ppppppuVar2;
  uint64_t *****pppppuVar3;
  uint64_t ***pppuVar4;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *******pppppppuVar7;
  uint uVar8;
  uint64_t *******pppppppuVar9;
  uint64_t *******pppppppuVar10;
  int64_t **pplVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  uint64_t **ppuVar15;
  int iVar16;
  uint64_t **ppuVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int iVar20;
  void *puVar21;
  uint64_t ******ppppppuVar22;
  uint64_t uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  uint64_t *******pppppppuStack_280;
  uint64_t *******pppppppuStack_278;
  uint64_t *******pppppppuStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  void *puStack_250;
  int64_t lStack_248;
  int32_t uStack_240;
  uint64_t uStack_238;
  float fStack_230;
  void *puStack_228;
  int64_t lStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  void *puStack_208;
  int64_t lStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  int64_t lStack_1e8;
  uint64_t *puStack_1e0;
  uint64_t *puStack_1d8;
  int32_t uStack_1d0;
  uint64_t *******pppppppuStack_1c8;
  uint64_t *******pppppppuStack_1c0;
  uint64_t *puStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  int32_t uStack_1a0;
  void *puStack_198;
  uint64_t uStack_190;
  int32_t uStack_188;
  uint64_t uStack_180;
  uint64_t *apuStack_178 [2];
  code *pcStack_168;
  void *puStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int64_t lStack_140;
  int64_t *plStack_138;
  uint64_t **ppuStack_130;
  int64_t *plStack_128;
  uint64_t **ppuStack_120;
  uint64_t uStack_118;
  
  lVar13 = *(int64_t *)(param_1 + 0x448);
  if (lVar13 == 0) {
    uVar12 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
    lVar13 = FUN_180373a60(uVar12,param_1);
  }
  uStack_118 = 0xfffffffffffffffe;
  uVar18 = 0;
  uStack_1a0 = 3;
  pppppppuStack_1c8 = &pppppppuStack_1c8;
  pppppppuStack_1c0 = &pppppppuStack_1c8;
  puStack_1b8 = (uint64_t *)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  FUN_18037ccb0(lVar13,&pppppppuStack_1c8);
  uStack_258 = 3;
  pppppppuStack_280 = &pppppppuStack_280;
  pppppppuStack_278 = &pppppppuStack_280;
  pppppppuStack_270 = (uint64_t *******)0x0;
  uStack_268 = 0;
  uStack_260 = 0;
  pppppppuVar10 = pppppppuStack_1c0;
  if ((uint64_t ********)pppppppuStack_1c0 != &pppppppuStack_1c8) {
    do {
      ppppppuVar22 = pppppppuVar10[4];
      if ((((render_system_data_memory != 0) && (*(char *)(render_system_data_memory + 0x1f1) != '\0')) ||
          (*(char *)(ppppppuVar22 + 0x3b) != '\0')) ||
         ((*(int *)(ppppppuVar22 + 0x3a) == -1 || (*(int *)(ppppppuVar22 + 0x3a) == 0)))) {
        ppppppuVar22 = ppppppuVar22 + 0x17;
        lVar13 = 0x10;
        do {
          ppppppuVar2 = (uint64_t ******)*ppppppuVar22;
          bVar24 = true;
          pppppppuVar7 = &pppppppuStack_280;
          pppppppuVar9 = pppppppuStack_270;
          while (pppppppuVar9 != (uint64_t *******)0x0) {
            bVar24 = ppppppuVar2 < pppppppuVar9[4];
            pppppppuVar7 = pppppppuVar9;
            if (bVar24) {
              pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
            }
            else {
              pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
            }
          }
          pppppppuVar9 = pppppppuVar7;
          if (bVar24) {
            if (pppppppuVar7 == pppppppuStack_278) goto LAB_18037d26b;
            pppppppuVar9 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar7);
          }
          if (pppppppuVar9[4] < ppppppuVar2) {
LAB_18037d26b:
            lVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,(int8_t)uStack_258);
            *(uint64_t *******)(lVar13 + 0x20) = ppppppuVar2;
            if (((uint64_t ********)pppppppuVar7 == &pppppppuStack_280) ||
               (uVar23 = 1, ppppppuVar2 < pppppppuVar7[4])) {
              uVar23 = uVar18;
            }
                    // WARNING: Subroutine does not return
            SystemStateController(lVar13,pppppppuVar7,&pppppppuStack_280,uVar23);
          }
          ppppppuVar22 = ppppppuVar22 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      pppppppuVar10 = (uint64_t *******)func_0x00018066bd70(pppppppuVar10);
    } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_1c8);
  }
  lStack_1e8 = 0;
  puStack_1e0 = (uint64_t *)0x0;
  puStack_1d8 = (uint64_t *)0x0;
  uStack_1d0 = 3;
  pppppppuVar10 = pppppppuStack_278;
  uVar23 = uVar18;
  if ((uint64_t ********)pppppppuStack_278 != &pppppppuStack_280) {
    do {
      if (pppppppuVar10[4] != (uint64_t ******)0x0) {
        pppppuVar3 = pppppppuVar10[4][0x15];
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        lStack_140 = 0;
        pcStack_168 = (code *)&processed_var_960_ptr;
        puStack_160 = &processed_var_944_ptr;
        apuStack_178[0] = &uStack_158;
        (*(code *)(*pppppuVar3[0x11])[0xc])
                  (pppppuVar3[0x11],&system_data_1028,(int64_t)pppppuVar3 + 0xc,0,apuStack_178);
        if (pcStack_168 != (code *)0x0) {
          (*pcStack_168)(apuStack_178,0,0);
        }
        puStack_228 = &system_data_buffer_ptr;
        uStack_210 = 0;
        lStack_220 = 0;
        uStack_218 = 0;
        puStack_198 = &system_data_buffer_ptr;
        uStack_180 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        iVar16 = -1;
        for (uVar8 = (uint)lStack_140; uVar8 != 0; uVar8 = uVar8 >> 1) {
          iVar16 = iVar16 + 1;
        }
        uVar8 = 0x400;
        iVar20 = -1;
        do {
          iVar20 = iVar20 + 1;
          uVar8 = uVar8 >> 1;
        } while (uVar8 != 0);
        cVar1 = (&processed_var_8592_ptr)[iVar16 / iVar20];
        fVar25 = (float)powf(0x44800000);
        fVar26 = (float)lStack_140;
        if (lStack_140 < 0) {
          fVar26 = fVar26 + 1.8446744e+19;
        }
        System_DataHandler(&puStack_228,&processed_var_8600_ptr,(double)(fVar25 * fVar26),(int)cVar1);
        pppuVar4 = pppppuVar3[0x11][1];
        ppuVar15 = pppuVar4[0x10];
        for (plVar14 = ppuVar15[(*(uint64_t *)((int64_t)pppppuVar3 + 0x14) ^
                                *(uint64_t *)((int64_t)pppppuVar3 + 0xc)) %
                                (uint64_t)*(uint *)(pppuVar4 + 0x11)]; plVar14 != (int64_t *)0x0;
            plVar14 = (int64_t *)plVar14[3]) {
          if ((*(int64_t *)((int64_t)pppppuVar3 + 0xc) == *plVar14) &&
             (*(int64_t *)((int64_t)pppppuVar3 + 0x14) == plVar14[1])) {
            if (plVar14 != (int64_t *)0x0) {
              plStack_138 = plVar14;
              ppuStack_130 = ppuVar15 +
                             (*(uint64_t *)((int64_t)pppppuVar3 + 0x14) ^
                             *(uint64_t *)((int64_t)pppppuVar3 + 0xc)) %
                             (uint64_t)*(uint *)(pppuVar4 + 0x11);
              pplVar11 = &plStack_138;
              ppuVar17 = pppuVar4[0x11];
              goto LAB_18037d51b;
            }
            break;
          }
        }
        ppuVar17 = pppuVar4[0x11];
        plStack_128 = ppuVar15[(int64_t)ppuVar17];
        ppuStack_120 = ppuVar15 + (int64_t)ppuVar17;
        pplVar11 = &plStack_128;
LAB_18037d51b:
        plVar14 = *pplVar11;
        if (plVar14 != ppuVar15[(int64_t)ppuVar17]) {
          iVar16 = (int)plVar14[2];
          iVar20 = *(int *)((int64_t)plVar14 + 0x14) + iVar16;
          if (iVar16 < iVar20) {
            do {
              ppuVar15 = pppuVar4[0x15] + (int64_t)iVar16 * 0x12;
              if ((((ppuVar15[4] == *(uint64_t **)((int64_t)pppppuVar3 + 0xc)) &&
                   (ppuVar15[5] == *(uint64_t **)((int64_t)pppppuVar3 + 0x14))) &&
                  (*ppuVar15 == (uint64_t *)0x4b2d79e470ee4e2c)) &&
                 (ppuVar15[1] == (uint64_t *)0x9c552acd3ed5548d)) {
                puVar6 = ppuVar15[7];
                uVar23 = uVar23 + (int64_t)puVar6;
                SystemCore_NetworkHandler0(&puStack_250,pppppuVar3 + 0xd);
                fStack_230 = (float)(int64_t)puVar6;
                if ((int64_t)puVar6 < 0) {
                  fStack_230 = fStack_230 + 1.8446744e+19;
                }
                fStack_230 = fStack_230 * 9.536743e-07;
                if (puStack_1e0 < puStack_1d8) {
                  *puStack_1e0 = &system_state_ptr;
                  puStack_1e0[1] = 0;
                  *(int32_t *)(puStack_1e0 + 2) = 0;
                  *puStack_1e0 = &system_data_buffer_ptr;
                  puStack_1e0[3] = 0;
                  puStack_1e0[1] = 0;
                  *(int32_t *)(puStack_1e0 + 2) = 0;
                  *(int32_t *)(puStack_1e0 + 2) = uStack_240;
                  puStack_1e0[1] = lStack_248;
                  *(int32_t *)((int64_t)puStack_1e0 + 0x1c) = uStack_238._4_4_;
                  *(int32_t *)(puStack_1e0 + 3) = (int32_t)uStack_238;
                  uStack_240 = 0;
                  lStack_248 = 0;
                  uStack_238 = 0;
                  *(float *)(puStack_1e0 + 4) = fStack_230;
                  puStack_1e0 = puStack_1e0 + 5;
                }
                else {
                  FUN_1800584e0(&lStack_1e8,&puStack_250);
                }
                puStack_250 = &system_data_buffer_ptr;
                if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                lStack_248 = 0;
                uStack_238 = uStack_238 & 0xffffffff00000000;
                puStack_250 = &system_state_ptr;
                break;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar20);
          }
        }
        uStack_190 = 0;
        uStack_180 = uStack_180 & 0xffffffff00000000;
        puStack_198 = &system_state_ptr;
        puStack_228 = &system_data_buffer_ptr;
        if (lStack_220 != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_220 = 0;
        uStack_210 = uStack_210 & 0xffffffff00000000;
        puStack_228 = &system_state_ptr;
      }
      pppppppuVar10 = (uint64_t *******)func_0x00018066bd70(pppppppuVar10);
    } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_280);
  }
  FUN_18037f790(lStack_1e8,puStack_1e0,&processed_var_880_ptr);
  puStack_208 = &system_data_buffer_ptr;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uVar19 = uVar18;
  if (((int64_t)puStack_1e0 - lStack_1e8) / 0x28 != 0) {
    do {
      puVar5 = *(void **)(lStack_1e8 + 8 + uVar18);
      puVar21 = &system_buffer_ptr;
      if (puVar5 != (void *)0x0) {
        puVar21 = puVar5;
      }
      System_DataHandler(&puStack_208,&rendering_buffer_2788_ptr,puVar21,
                    (double)*(float *)(lStack_1e8 + 0x20 + uVar18));
      uVar8 = (int)uVar19 + 1;
      uVar18 = uVar18 + 0x28;
      uVar19 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(((int64_t)puStack_1e0 - lStack_1e8) / 0x28));
  }
  puStack_208 = &system_data_buffer_ptr;
  if (lStack_200 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_200 = 0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &system_state_ptr;
  FUN_180048980(&lStack_1e8);
  puVar6 = puStack_1b8;
  pppppppuVar10 = pppppppuStack_270;
  if (pppppppuStack_270 != (uint64_t *******)0x0) {
    SystemCache_Manager(&pppppppuStack_280,*pppppppuStack_270);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(pppppppuVar10);
  }
  if (puStack_1b8 != (uint64_t *)0x0) {
    SystemCache_Manager(&pppppppuStack_1c8,*puStack_1b8);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar6);
  }
  return uVar23;
}



int64_t FUN_180455a30(int64_t param_1,int64_t param_2,uint64_t param_3,uint param_4,
                      char param_5,float param_6)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 3.4028235e+38;
  lVar4 = 0;
  if (*(int64_t *)(param_1 + 0x480) - *(int64_t *)(param_1 + 0x478) >> 3 != 0) {
    puVar3 = (uint64_t *)func_0x000180388c90(param_3);
    plVar1 = (int64_t *)puVar3[1];
    for (plVar6 = (int64_t *)*puVar3; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar5 = *plVar6;
      if (((((*(uint *)(lVar5 + 0x134) & param_4 & 0xfffffffe) == (param_4 & 0xfffffffe)) ||
           ((*(uint *)(lVar5 + 0x134) & 1) != 0)) && ((*(byte *)(lVar5 + 0x139) & 1) != 0)) &&
         (((*(byte *)(lVar5 + 0x139) & 2) == 0 &&
          (cVar2 = SystemCore_PerformanceMonitor(lVar5,param_2), cVar2 != '\0')))) {
        if (param_5 != '\0') {
          return lVar5;
        }
        fVar7 = (float)func_0x00018038d2f0(lVar5,param_2);
        fVar7 = ABS(*(float *)(param_2 + 8) - fVar7);
        if ((fVar7 < param_6) && (fVar7 < fVar8)) {
          lVar4 = lVar5;
          fVar8 = fVar7;
        }
      }
    }
  }
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180455b60(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_180455b60(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  lVar2 = *param_1;
  lVar5 = param_3 - param_2;
  uVar4 = lVar5 >> 2;
  if ((uint64_t)(param_1[2] - lVar2 >> 2) < uVar4) {
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 4,(char)param_1[3]);
    }
    if (param_2 != param_3) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,param_2,lVar5);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lVar5 = lVar2 + uVar4 * 4;
    *param_1 = lVar2;
    param_1[2] = lVar5;
    param_1[1] = lVar5;
  }
  else {
    lVar1 = param_1[1];
    uVar3 = lVar1 - lVar2 >> 2;
    if (uVar3 < uVar4) {
      lVar5 = param_2 + uVar3 * 4;
      if (param_2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,param_2,lVar5 - param_2);
      }
      if (lVar5 != param_3) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar5,param_3 - lVar5);
      }
      param_1[1] = lVar1;
    }
    else {
      if (param_2 != param_3) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,param_2,lVar5);
      }
      param_1[1] = lVar2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180455b9b(void)
void FUN_180455b9b(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBP * 4,(char)unaff_RBX[3]);
  }
  if (unaff_RDI != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lVar1 = lVar2 + unaff_RBP * 4;
  *unaff_RBX = lVar2;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void FUN_180455bfc(int64_t param_1,int64_t param_2)
void FUN_180455bfc(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 2;
  if (uVar3 < unaff_RBP) {
    lVar1 = param_2 + uVar3 * 4;
    if (unaff_RDI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(param_1,param_2,lVar1 - unaff_RDI);
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RDI != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}





// 函数: void FUN_180455cb0(int64_t param_1,int64_t *param_2)
void FUN_180455cb0(int64_t param_1,int64_t *param_2)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t *plVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uStackX_8;
  
  lVar3 = *param_2;
  uVar9 = 0;
  uVar14 = *(int64_t *)(lVar3 + 0x208) - *(int64_t *)(lVar3 + 0x200) >> 3;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (uVar14 != 0) {
    do {
      pcVar4 = *(char **)(*(int64_t *)(uVar10 + *(int64_t *)(lVar3 + 0x200)) + 0x10);
      if (*pcVar4 != '\0') {
        iVar2 = *(int *)(pcVar4 + 0x18);
        iVar8 = *(int *)(*(int64_t *)(param_1 + 8) + 0x10);
        if (iVar2 == iVar8) {
          if (iVar2 != 0) {
            pbVar7 = *(byte **)(pcVar4 + 0x10);
            lVar11 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 8) - (int64_t)pbVar7;
            do {
              pbVar1 = pbVar7 + lVar11;
              iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar7 = pbVar7 + 1;
            } while (*pbVar1 != 0);
          }
        }
        else if (iVar2 != 0) goto LAB_180455d3d;
        if (iVar8 == 0) {
          FUN_18044d7d0(**(uint64_t **)(param_1 + 0x10),lVar3);
          break;
        }
      }
LAB_180455d3d:
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 8;
      uVar13 = (uint64_t)uVar12;
    } while ((uint64_t)(int64_t)(int)uVar12 < uVar14);
  }
  lVar11 = *(int64_t *)(lVar3 + 0x1c0);
  uVar10 = uVar9;
  if (*(int64_t *)(lVar3 + 0x1c8) - lVar11 >> 3 != 0) {
    do {
      uStackX_8 = *(uint64_t *)(uVar9 + lVar11);
      plVar5 = *(int64_t **)(*(int64_t *)(param_1 + 0x18) + 0x38);
      if (plVar5 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,&uStackX_8);
      lVar11 = *(int64_t *)(lVar3 + 0x1c0);
      uVar12 = (int)uVar10 + 1;
      uVar9 = uVar9 + 8;
      uVar10 = (uint64_t)uVar12;
    } while ((uint64_t)(int64_t)(int)uVar12 <
             (uint64_t)(*(int64_t *)(lVar3 + 0x1c8) - lVar11 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180455de0(int param_1,int param_2,uint64_t *param_3)
void FUN_180455de0(int param_1,int param_2,uint64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  
  if (param_1 < param_2) {
    do {
      plVar4 = (int64_t *)*param_3;
      lVar1 = *plVar4;
      lVar3 = *(int64_t *)(lVar1 + 0x448);
      if (lVar3 == 0) {
        uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
        lVar3 = FUN_180373a60(uVar2,lVar1);
        plVar4 = (int64_t *)*param_3;
      }
      FUN_180378b60(lVar3,*(uint64_t *)(*plVar4 + 0x60b80),param_1);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180455dfa(int param_1,int param_2)
void FUN_180455dfa(int param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *unaff_RSI;
  
  do {
    plVar4 = (int64_t *)*unaff_RSI;
    lVar1 = *plVar4;
    lVar3 = *(int64_t *)(lVar1 + 0x448);
    if (lVar3 == 0) {
      uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
      lVar3 = FUN_180373a60(uVar2,lVar1);
      plVar4 = (int64_t *)*unaff_RSI;
    }
    FUN_180378b60(lVar3,*(uint64_t *)(*plVar4 + 0x60b80),param_1);
    param_1 = param_1 + 1;
  } while (param_1 < param_2);
  return;
}





// 函数: void FUN_180455e77(void)
void FUN_180455e77(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180455f10(int32_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x1f,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180301040(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *(int8_t *)((int64_t)plVar3 + 0x823) = 1;
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return param_1;
}





// 函数: void FUN_180455fd0(int64_t param_1,int64_t *param_2)
void FUN_180455fd0(int64_t param_1,int64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  lVar8 = 2;
  plVar4 = param_2 + 2;
  plVar5 = (int64_t *)(param_1 + 0x6e0);
  do {
    plVar7 = plVar5;
    plVar6 = plVar4;
    lVar3 = plVar6[1];
    *plVar7 = *plVar6;
    plVar7[1] = lVar3;
    lVar3 = plVar6[3];
    plVar7[2] = plVar6[2];
    plVar7[3] = lVar3;
    lVar3 = plVar6[5];
    plVar7[4] = plVar6[4];
    plVar7[5] = lVar3;
    lVar3 = plVar6[7];
    plVar7[6] = plVar6[6];
    plVar7[7] = lVar3;
    lVar3 = plVar6[9];
    plVar7[8] = plVar6[8];
    plVar7[9] = lVar3;
    lVar3 = plVar6[0xb];
    plVar7[10] = plVar6[10];
    plVar7[0xb] = lVar3;
    lVar3 = plVar6[0xd];
    plVar7[0xc] = plVar6[0xc];
    plVar7[0xd] = lVar3;
    lVar3 = plVar6[0xf];
    plVar7[0xe] = plVar6[0xe];
    plVar7[0xf] = lVar3;
    lVar8 = lVar8 + -1;
    plVar4 = plVar6 + 0x10;
    plVar5 = plVar7 + 0x10;
  } while (lVar8 != 0);
  lVar8 = plVar6[0x11];
  plVar7[0x10] = plVar6[0x10];
  plVar7[0x11] = lVar8;
  lVar8 = plVar6[0x13];
  plVar7[0x12] = plVar6[0x12];
  plVar7[0x13] = lVar8;
  uVar1 = *(int32_t *)((int64_t)plVar6 + 0xa4);
  lVar8 = plVar6[0x15];
  uVar2 = *(int32_t *)((int64_t)plVar6 + 0xac);
  *(int *)(plVar7 + 0x14) = (int)plVar6[0x14];
  *(int32_t *)((int64_t)plVar7 + 0xa4) = uVar1;
  *(int *)(plVar7 + 0x15) = (int)lVar8;
  *(int32_t *)((int64_t)plVar7 + 0xac) = uVar2;
  uVar1 = *(int32_t *)((int64_t)plVar6 + 0xb4);
  lVar8 = plVar6[0x17];
  uVar2 = *(int32_t *)((int64_t)plVar6 + 0xbc);
  *(int *)(plVar7 + 0x16) = (int)plVar6[0x16];
  *(int32_t *)((int64_t)plVar7 + 0xb4) = uVar1;
  *(int *)(plVar7 + 0x17) = (int)lVar8;
  *(int32_t *)((int64_t)plVar7 + 0xbc) = uVar2;
                    // WARNING: Could not recover jumptable at 0x000180456090. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x38))(param_2);
  return;
}



uint64_t FUN_1804560d0(uint64_t param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  int8_t auStackX_8 [32];
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  puVar1 = (uint64_t *)FUN_180302090(uStack_18,auStackX_8,&uStack_18);
  return *puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180456140(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,char param_4)

{
  uint64_t in_RAX;
  byte abStackX_8 [8];
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [16];
  int8_t auStack_38 [16];
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  if (param_1 != (int64_t *)0x0) {
    if (*(code **)(*param_1 + 0xb8) == (code *)&ui_system_data_128_ptr) {
      in_RAX = param_1[0xda];
    }
    else {
      in_RAX = (**(code **)(*param_1 + 0xb8))();
    }
    if (in_RAX != 0) {
      if (*(code **)(*param_1 + 0xb8) == (code *)&ui_system_data_128_ptr) {
        in_RAX = param_1[0xda];
      }
      else {
        in_RAX = (**(code **)(*param_1 + 0xb8))(param_1);
      }
      if (*(int64_t *)(in_RAX + 0x318) != 0) {
        abStackX_8[0] = 0;
        if (param_4 == '\0') {
          uStack_58 = 0x3f0000003f000000;
        }
        else {
          uStack_58 = *(uint64_t *)(system_operation_state + 0x17e0);
        }
        uStack_58 = CONCAT44(1.0 - uStack_58._4_4_,(int32_t)uStack_58);
        FUN_1802874c0(param_1 + 0xdc,auStack_38,auStack_48,&uStack_58,param_1[0xda] + 0x60b8c);
        FUN_1801ae6c0(param_1[0xda],abStackX_8,&uStack_58,&uStack_28,auStack_38,auStack_48);
        *param_2 = uStack_58;
        param_2[1] = uStack_50;
        *param_3 = uStack_28;
        param_3[1] = uStack_20;
        return (uint64_t)abStackX_8[0];
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804562c0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_1804562c0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int32_t uStackX_8;
  float fStackX_c;
  int32_t auStackX_20 [2];
  
  fStackX_c = (float)((uint64_t)*(uint64_t *)(system_operation_state + 0x17e0) >> 0x20);
  _uStackX_8 = CONCAT44(1.0 - fStackX_c,(int)*(uint64_t *)(system_operation_state + 0x17e0));
  auStackX_20[0] = param_4;
  FUN_1802874c0(param_1 + 0x6e0,param_2,param_3,&uStackX_8,auStackX_20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804563a0(int64_t *param_1,int8_t param_2)
void FUN_1804563a0(int64_t *param_1,int8_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *aplStackX_8 [2];
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  
  if (param_1 != (int64_t *)0x0) {
    plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,0xfffffffffffffffe);
    plStackX_18 = plVar2;
    UltraHighFreq_PerformanceMonitor1(plVar2);
    *plVar2 = (int64_t)&memory_allocator_3160_ptr;
    plVar2[0x19] = 0;
    aplStackX_8[0] = param_1;
    (**(code **)(*param_1 + 0x28))(param_1);
    aplStackX_8[0] = (int64_t *)plVar2[0x19];
    plVar2[0x19] = (int64_t)param_1;
    if (aplStackX_8[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_8[0] + 0x38))();
    }
    *(int8_t *)(plVar2 + 0x18) = param_2;
    plStackX_18 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar1 = system_context_ptr;
    pplStackX_20 = aplStackX_8;
    aplStackX_8[0] = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_18005e300(uVar1,aplStackX_8);
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



uint64_t * FUN_1804564b0(uint64_t *param_1,int64_t *param_2)

{
  int64_t *plStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (*(code **)(*param_2 + 0xb8) == (code *)&ui_system_data_128_ptr) {
    plStack_18 = (int64_t *)param_2[0xda];
  }
  else {
    plStack_18 = (int64_t *)(**(code **)(*param_2 + 0xb8))(param_2);
  }
  if (plStack_18 == (int64_t *)0x0) {
    plStack_18 = (int64_t *)0x0;
    uStack_10 = 0xffffffff;
  }
  else {
    uStack_10 = (**(code **)(*plStack_18 + 8))(plStack_18);
    (**(code **)(*plStack_18 + 0x28))(plStack_18);
  }
  *param_1 = plStack_18;
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




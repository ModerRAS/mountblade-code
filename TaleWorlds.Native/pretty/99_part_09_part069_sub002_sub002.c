#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part069_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805e8630(int64_t *******param_1,int64_t *******param_2,uint64_t param_3,
void FUN_1805e8630(int64_t *******param_1,int64_t *******param_2,uint64_t param_3,
                  int64_t *param_4)

{
  int64_t *****ppppplVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  uint uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t ******pppppplVar11;
  int8_t *puVar12;
  int64_t *******ppppppplVar13;
  int32_t *puVar14;
  int8_t *puVar15;
  int8_t *puVar16;
  float *pfVar17;
  int64_t *******ppppppplVar18;
  int64_t ******pppppplVar19;
  int64_t ****pppplVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  void *puVar23;
  int32_t *puVar24;
  int64_t lVar25;
  int64_t lVar26;
  int iVar27;
  int iVar28;
  int64_t lVar29;
  uint *puVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint uVar33;
  int8_t *puVar34;
  float fVar35;
  int8_t auStack_238 [32];
  int8_t uStack_218;
  int64_t *******ppppppplStack_208;
  char cStack_200;
  int64_t *******ppppppplStack_1f8;
  uint uStack_1f0;
  int64_t *******ppppppplStack_1e8;
  uint uStack_1e0;
  int64_t *******ppppppplStack_1d8;
  void *puStack_1d0;
  int32_t *puStack_1c8;
  uint uStack_1c0;
  uint64_t uStack_1b8;
  int64_t *******ppppppplStack_1b0;
  int64_t *******ppppppplStack_1a8;
  int64_t *******ppppppplStack_1a0;
  void *puStack_198;
  uint64_t uStack_190;
  uint uStack_188;
  uint64_t uStack_180;
  int64_t *******ppppppplStack_178;
  int64_t *******ppppppplStack_170;
  int64_t *******ppppppplStack_168;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int64_t *******ppppppplStack_138;
  int64_t *plStack_110;
  uint64_t uStack_e0;
  int64_t *plStack_d8;
  uint64_t uStack_d0;
  int64_t *plStack_c8;
  void *puStack_b8;
  void *puStack_b0;
  int iStack_a8;
  uint8_t auStack_a0 [32];
  uint64_t uStack_80;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_80 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_238;
  iVar27 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  pppppplVar11 = param_2[1];
  param_1[0x25] = *param_2;
  param_1[0x26] = pppppplVar11;
  *(int32_t *)((int64_t)param_1 + 0x15c) = *(int32_t *)(param_2 + 2);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x14);
  *(int32_t *)((int64_t)param_1 + 0x164) = *(int32_t *)(param_2 + 3);
  *(int32_t *)(param_1 + 0x2d) = *(int32_t *)((int64_t)param_2 + 0x1c);
  *(int32_t *)((int64_t)param_1 + 0x16c) = 0xffffffff;
  pppppplVar11 = param_2[0x1d];
  param_1[0x29] = param_2[0x1c];
  param_1[0x2a] = pppppplVar11;
  *(int32_t *)(param_1 + 0x2b) = *(int32_t *)((int64_t)param_2 + 0xdc);
  if (((*(float *)(param_2 + 0x19) == 0.0) && (*(float *)((int64_t)param_2 + 0xcc) == 0.0)) &&
     (*(float *)(param_2 + 0x1a) == 0.0)) {
    uVar7 = *(int32_t *)(param_2 + 0x1b);
    puStack_198 = (void *)0x0;
    uStack_190 = (int32_t *)CONCAT44(0x7f7fffff,uVar7);
    *(int32_t *)(param_1 + 0x27) = 0;
    *(int32_t *)((int64_t)param_1 + 0x13c) = 0;
    *(int32_t *)(param_1 + 0x28) = uVar7;
    *(int32_t *)((int64_t)param_1 + 0x144) = 0x7f7fffff;
  }
  else {
    uVar7 = *(int32_t *)((int64_t)param_2 + 0xcc);
    uVar2 = *(int32_t *)(param_2 + 0x1a);
    uVar3 = *(int32_t *)((int64_t)param_2 + 0xd4);
    *(int32_t *)(param_1 + 0x27) = *(int32_t *)(param_2 + 0x19);
    *(int32_t *)((int64_t)param_1 + 0x13c) = uVar7;
    *(int32_t *)(param_1 + 0x28) = uVar2;
    *(int32_t *)((int64_t)param_1 + 0x144) = uVar3;
  }
  *(int8_t *)(param_1 + 0x2e) = *(int8_t *)(param_2 + 0x1e);
  *(int8_t *)(param_1 + 0x11) = 0xff;
  pppppplVar11 = (int64_t ******)*param_4;
  ppppppplStack_1a8 = param_2;
  ppppppplStack_178 = param_1;
  uStack_e0 = param_3;
  plStack_d8 = param_4;
  plStack_c8 = param_4;
  if (pppppplVar11 == (int64_t ******)0x0) {
    uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,3);
    pppppplVar11 = (int64_t ******)FUN_1802e6b00(uVar10,3);
    if (pppppplVar11 != (int64_t ******)0x0) {
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
    }
    ppppppplStack_208 = (int64_t *******)*param_1;
    *param_1 = pppppplVar11;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    pppppplVar11 = *param_1;
    uVar33 = *(uint *)((int64_t)pppppplVar11 + 0x2ac);
    *(uint *)((int64_t)pppppplVar11 + 0x2ac) = uVar33 | 0x2661000;
    FUN_1802ee810(pppppplVar11,uVar33);
    FUN_1802ee990(pppppplVar11,uVar33);
    FUN_1805ed5c0(&ppppppplStack_1d8,param_2[4]);
    func_0x000180276550(ppppppplStack_1d8,*(int32_t *)((int64_t)param_2 + 0xf4));
    *(int32_t *)(ppppppplStack_1d8 + 0x7a) = 0;
    ppppppplVar13 = param_2 + 8;
    puStack_158 = &system_data_buffer_ptr;
    uStack_140 = 0;
    puStack_150 = (int8_t *)0x0;
    uStack_148 = 0;
    lVar25 = -1;
    if (ppppppplVar13 != (int64_t *******)0x0) {
      do {
        lVar26 = lVar25;
        lVar25 = lVar26 + 1;
      } while (*(char *)((int64_t)ppppppplVar13 + lVar25) != '\0');
      if ((int)lVar25 != 0) {
        iVar28 = (int)lVar26 + 2;
        iVar27 = iVar28;
        if (iVar28 < 0x10) {
          iVar27 = 0x10;
        }
        puVar12 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar27,0x13);
        *puVar12 = 0;
        puStack_150 = puVar12;
        uVar7 = CoreEngineSystemCleanup(puVar12);
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar7);
                    // WARNING: Subroutine does not return
        memcpy(puVar12,ppppppplVar13,iVar28);
      }
    }
    uStack_148 = 0;
    uVar32 = 0;
    if (ppppppplStack_1d8 != (int64_t *******)0x0) {
      ppppppplStack_1b0 = (int64_t *******)0x0;
      lVar25 = FUN_18020bef0(system_system_data_memory,&puStack_158);
      ppppppplVar13 = ppppppplStack_1d8;
      if (lVar25 == 0) {
        ppppppplStack_1f8 = ppppppplStack_1d8;
        cVar4 = func_0x000180282950(ppppppplStack_1d8);
        if (cVar4 == '\0') {
          ppppppplStack_208 = ppppppplVar13;
          if (ppppppplVar13 != (int64_t *******)0x0) {
            (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          }
          ppppppplStack_208 = (int64_t *******)0x0;
          ppppppplStack_1b0 = ppppppplVar13;
        }
        else {
          uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
          ppppppplVar13 = (int64_t *******)FUN_18030b420(uVar10,ppppppplStack_1d8);
          ppppppplStack_1f8 = ppppppplVar13;
          if (ppppppplVar13 != (int64_t *******)0x0) {
            ppppppplStack_208 = ppppppplVar13;
            (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          }
          ppppppplStack_208 = (int64_t *******)0x0;
          pppppplVar11 = *param_1;
          ppppppplStack_1b0 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[0x34])
                    (ppppppplVar13,
                     (*(float *)(pppppplVar11 + 0x11) * *(float *)((int64_t)pppppplVar11 + 0x74) -
                     *(float *)((int64_t)pppppplVar11 + 0x84) * *(float *)(pppppplVar11 + 0xf)) *
                     *(float *)(pppppplVar11 + 0x12) +
                     (*(float *)(pppppplVar11 + 0x10) * *(float *)(pppppplVar11 + 0xf) -
                     *(float *)(pppppplVar11 + 0x11) * *(float *)(pppppplVar11 + 0xe)) *
                     *(float *)((int64_t)pppppplVar11 + 0x94) +
                     (*(float *)((int64_t)pppppplVar11 + 0x84) * *(float *)(pppppplVar11 + 0xe) -
                     *(float *)(pppppplVar11 + 0x10) * *(float *)((int64_t)pppppplVar11 + 0x74)) *
                     *(float *)(pppppplVar11 + 0x13) < 0.0);
        }
      }
      else {
        uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3);
        ppppppplVar13 = (int64_t *******)FUN_18039dda0(uVar10);
        ppppppplStack_1f8 = ppppppplVar13;
        ppppppplStack_168 = ppppppplVar13;
        if (ppppppplVar13 != (int64_t *******)0x0) {
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
        }
        FUN_18039eda0(ppppppplVar13,(*param_1)[4]);
        if (ppppppplVar13 != (int64_t *******)0x0) {
          ppppppplStack_208 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
        }
        ppppppplStack_208 = (int64_t *******)0x0;
        ppppppplStack_1b0 = ppppppplVar13;
        if (ppppppplStack_1d8 != (int64_t *******)0x0) {
          FUN_18039f160(ppppppplVar13);
        }
        if (ppppppplVar13 != (int64_t *******)0x0) {
          (*(code *)(*ppppppplVar13)[7])(ppppppplVar13);
        }
      }
      iVar27 = (*(code *)(*ppppppplVar13)[0x13])(ppppppplVar13);
      if (iVar27 == 0) {
        pppppplVar11 = ppppppplVar13[7];
        lVar25 = (int64_t)ppppppplVar13[8] - (int64_t)pppppplVar11 >> 4;
        iVar27 = (int)lVar25;
        pppppplVar19 = pppppplVar11;
        uVar22 = uVar32;
        if (0 < iVar27) {
          do {
            if (((uint64_t)(*pppppplVar19)[0x20] & 0x400000) != 0) {
              pppplVar20 = (int64_t ****)&system_buffer_ptr;
              if (pppppplVar11[lVar25 * 2 + -2][3] != (int64_t ****)0x0) {
                pppplVar20 = pppppplVar11[lVar25 * 2 + -2][3];
              }
              lVar25 = strstr(pppplVar20,&unknown_var_3624_ptr);
              if (lVar25 != 0) {
                puStack_1d0 = &system_data_buffer_ptr;
                uStack_1b8 = 0;
                puStack_1c8 = (int32_t *)0x0;
                uStack_1c0 = 0;
                puVar14 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
                *(int8_t *)puVar14 = 0;
                puStack_1c8 = puVar14;
                uVar7 = CoreEngineSystemCleanup(puVar14);
                uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar7);
                *puVar14 = 0x5f6f6c63;
                puVar14[1] = 0x67616c66;
                puVar14[2] = 0x6165775f;
                puVar14[3] = 0x6e6f70;
                uStack_1c0 = 0xf;
                FUN_1800b6de0(system_resource_state,&puStack_1d0,0);
                puStack_1d0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puVar14);
              }
              break;
            }
            uVar22 = uVar22 + 1;
            pppppplVar19 = pppppplVar19 + 2;
          } while ((int64_t)uVar22 < (int64_t)iVar27);
        }
      }
      ppppppplStack_208 = param_2 + 0x18;
      if ((*ppppppplStack_208 != (int64_t ******)0x0) &&
         (ppppppplVar18 = ppppppplStack_1d8 + 7, uVar22 = uVar32,
         (int64_t)ppppppplStack_1d8[8] - (int64_t)*ppppppplVar18 >> 4 != 0)) {
        do {
          lVar25 = *(int64_t *)(uVar32 + (int64_t)*ppppppplVar18);
          puStack_b8 = &unknown_var_672_ptr;
          puStack_b0 = auStack_a0;
          auStack_a0[0] = 0;
          iStack_a8 = 0x10;
          strcpy_s(auStack_a0,0x20);
          puVar12 = (int8_t *)0x0;
          puStack_1d0 = &system_data_buffer_ptr;
          uStack_1b8._0_4_ = 0;
          uStack_1b8._4_4_ = 0;
          puStack_1c8 = (int32_t *)0x0;
          uStack_1c0 = 0;
          if (iStack_a8 != 0) {
            iVar27 = iStack_a8 + 1;
            if (iVar27 < 0x10) {
              iVar27 = 0x10;
            }
            puVar12 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar27);
            *puVar12 = 0;
            puStack_1c8 = (int32_t *)puVar12;
            uStack_1b8._0_4_ = CoreEngineSystemCleanup();
            if (0 < iStack_a8) {
              puVar23 = &system_buffer_ptr;
              if (puStack_b0 != (void *)0x0) {
                puVar23 = puStack_b0;
              }
                    // WARNING: Subroutine does not return
              memcpy(puVar12,puVar23,(int64_t)(iStack_a8 + 1));
            }
          }
          if ((puStack_b0 != (void *)0x0) && (uStack_1c0 = 0, puVar12 != (int8_t *)0x0)) {
            *puVar12 = 0;
          }
          cVar4 = FUN_180063510(lVar25 + 0x218,&puStack_1d0);
          puStack_1d0 = &system_data_buffer_ptr;
          if (puVar12 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar12);
          }
          puStack_1c8 = (int32_t *)0x0;
          uStack_1b8 = (uint64_t)uStack_1b8._4_4_ << 0x20;
          puStack_1d0 = &system_state_ptr;
          puStack_b8 = &system_state_ptr;
          if (cVar4 == '\0') {
            uVar10 = *(uint64_t *)(*(int64_t *)(lVar25 + 0x1b8) + 0x1e0);
            puStack_198 = &system_data_buffer_ptr;
            uStack_180 = 0;
            uStack_190 = (int32_t *)0x0;
            uStack_188 = 0;
            puVar14 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
            *(int8_t *)puVar14 = 0;
            uStack_190 = puVar14;
            uVar7 = CoreEngineSystemCleanup(puVar14);
            uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
            *puVar14 = 0x5f657375;
            puVar14[1] = 0x6c626174;
            puVar14[2] = 0x5f756165;
            puVar14[3] = 0x6e656c62;
            puVar14[4] = 0x676e6964;
            *(int8_t *)(puVar14 + 5) = 0;
            uStack_188 = 0x14;
            SystemCore_LoggingSystem0(uVar10,&puStack_198,1);
            puStack_198 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar14);
          }
          uVar33 = (int)uVar22 + 1;
          uVar32 = uVar32 + 0x10;
          ppppppplVar18 = ppppppplStack_1d8 + 7;
          ppppppplVar13 = ppppppplStack_1f8;
          uVar22 = (uint64_t)uVar33;
          param_1 = ppppppplStack_178;
        } while ((uint64_t)(int64_t)(int)uVar33 <
                 (uint64_t)((int64_t)ppppppplStack_1d8[8] - (int64_t)*ppppppplVar18 >> 4));
      }
      pppppplVar11 = *param_1;
      ppppppplStack_168 = (int64_t *******)&ppppppplStack_1f8;
      ppppppplStack_1f8 = ppppppplVar13;
      (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
      ppppppplStack_138 = (int64_t *******)&ppppppplStack_1f8;
      FUN_1802edcd0(pppppplVar11,ppppppplStack_1f8,1);
      if (ppppppplStack_1f8 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_1f8)[7])();
      }
      ppppppplStack_208 = ppppppplVar13;
      (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
      ppppppplStack_208 = (int64_t *******)param_1[0xb];
      param_1[0xb] = (int64_t ******)ppppppplVar13;
      if (ppppppplStack_208 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_208)[7])();
      }
      (*(code *)(*ppppppplVar13)[7])(ppppppplVar13);
    }
    puVar12 = (int8_t *)0x0;
    puStack_1d0 = &system_data_buffer_ptr;
    uStack_1b8 = 0;
    puStack_1c8 = (int32_t *)0x0;
    uStack_1c0 = 0;
    puVar14 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar14 = 0;
    puStack_1c8 = puVar14;
    uVar7 = CoreEngineSystemCleanup(puVar14);
    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar7);
    *puVar14 = 0x5f6e7077;
    *(int8_t *)(puVar14 + 1) = 0;
    uStack_1c0 = 4;
    lVar25 = (*(code *)(*param_1[0xb])[0x2f])();
    if (lVar25 != 0) {
      lVar25 = (*(code *)(*param_1[0xb])[0x2f])();
      puStack_198 = &system_data_buffer_ptr;
      uStack_190 = (int32_t *)0x0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_1e0 = 4;
      iVar27 = *(int *)(lVar25 + 0x20);
      if (0x3b < iVar27) {
        iVar27 = 0x3b;
      }
      puVar16 = puVar12;
      puVar15 = puVar12;
      if (iVar27 != -1) {
        iVar27 = iVar27 + 2;
        if (iVar27 < 0x10) {
          iVar27 = 0x10;
        }
        puVar15 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar27,0x13);
        *puVar15 = 0;
        uStack_190 = (int32_t *)puVar15;
        puVar16 = (int8_t *)CoreEngineSystemCleanup(puVar15);
        uStack_180 = CONCAT44(uStack_180._4_4_,(int)puVar16);
      }
      uVar32 = 0;
      lVar26 = 0;
      puVar34 = puVar12;
      do {
        uVar33 = (uint)uVar32;
        if (*(uint *)(lVar25 + 0x20) <= (uint)puVar34) break;
        cStack_200 = *(char *)(lVar26 + *(int64_t *)(lVar25 + 0x18));
        uVar33 = (int)puVar12 + 1;
        uVar32 = (uint64_t)uVar33;
        if (uVar33 != 0) {
          uVar8 = (int)puVar12 + 2;
          if (puVar15 == (int8_t *)0x0) {
            if ((int)uVar8 < 0x10) {
              uVar8 = 0x10;
            }
            puVar15 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
            *puVar15 = 0;
            uVar22 = (uint64_t)puVar15 & 0xffffffffffc00000;
            if (uVar22 == 0) {
              puVar16 = (int8_t *)0x0;
            }
            else {
              lVar29 = ((int64_t)puVar15 - uVar22 >> 0x10) * 0x50;
              puVar30 = (uint *)(uVar22 + ((lVar29 + 0x80) -
                                          (uint64_t)*(uint *)(uVar22 + lVar29 + 0x84)));
              if ((*(byte *)((int64_t)puVar30 + 0xe) & 2) == 0) {
                puVar16 = (int8_t *)(uint64_t)puVar30[7];
                if ((int8_t *)0x3ffffff < puVar16) {
                  puVar16 = (int8_t *)((uint64_t)*puVar30 << 0x10);
                }
              }
              else {
                uVar21 = (uint64_t)puVar30[7];
                if (uVar21 < 0x4000000) {
                  uVar31 = (uint64_t)puVar30[7];
                }
                else {
                  uVar31 = (uint64_t)*puVar30 << 0x10;
                }
                if (0x3ffffff < uVar21) {
                  uVar21 = (uint64_t)*puVar30 << 0x10;
                }
                puVar16 = (int8_t *)
                          (uVar21 - ((int64_t)puVar15 -
                                    (uVar22 + ((int64_t)((int64_t)puVar30 + (-0x80 - uVar22)) /
                                              0x50) * 0x10000)) % uVar31);
              }
            }
            uStack_180 = CONCAT44(uStack_180._4_4_,(int)puVar16);
            uStack_190 = (int32_t *)puVar15;
          }
          else if ((uint)puVar16 < uVar8) {
            uStack_218 = 0x13;
            puVar15 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar15,uVar8,0x10);
            uStack_190 = (int32_t *)puVar15;
            uVar8 = CoreEngineSystemCleanup(puVar15);
            puVar16 = (int8_t *)(uint64_t)uVar8;
            uStack_180 = CONCAT44(uStack_180._4_4_,uVar8);
          }
        }
        puVar12[(int64_t)puVar15] = cStack_200;
        puVar15[uVar32] = 0;
        puVar12 = (int8_t *)(uint64_t)uVar33;
        puVar34 = (int8_t *)(uint64_t)((uint)puVar34 + 1);
        lVar26 = lVar26 + 1;
        uStack_188 = uVar33;
      } while (lVar26 < 0x3b);
      if (0 < (int)uVar33) {
        CoreEngineDataBufferProcessor(&puStack_1d0,uVar33 + 4);
                    // WARNING: Subroutine does not return
        memcpy((int8_t *)((uint64_t)uStack_1c0 + (int64_t)puStack_1c8),puVar15,
               (int64_t)(int)(uVar33 + 1));
      }
      uStack_1f0 = 0;
      uStack_1e0 = 0;
      puStack_198 = &system_data_buffer_ptr;
      if (puVar15 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar15);
      }
      uStack_190 = (int32_t *)0x0;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      puStack_198 = &system_state_ptr;
      puVar14 = puStack_1c8;
      param_1 = ppppppplStack_178;
    }
    iVar27 = 0;
    puVar24 = (int32_t *)&system_buffer_ptr;
    if (puVar14 != (int32_t *)0x0) {
      puVar24 = puVar14;
    }
    (*(code *)(*param_1)[0x51][2])(*param_1 + 0x51,puVar24);
    ppppppplVar13 = ppppppplStack_1a8;
    if (ppppppplStack_1a8[7] == (int64_t ******)0x0) {
      ppppppplStack_208 = (int64_t *******)param_1[0x10];
      param_1[0x10] = (int64_t ******)0x0;
      if (ppppppplStack_208 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_208)[7])();
      }
    }
    else {
      uVar10 = FUN_1805ed5c0(&ppppppplStack_208);
      FUN_180060b80(param_1 + 0x10,uVar10);
      if (ppppppplStack_208 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_208)[7])();
      }
      *(int32_t *)(param_1[0x10] + 0x7a) = 5;
      pppppplVar11 = *param_1;
      ppppppplStack_168 = (int64_t *******)&ppppppplStack_1f8;
      ppppppplStack_1f8 = (int64_t *******)param_1[0x10];
      if (ppppppplStack_1f8 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_1f8)[5])();
      }
      ppppppplStack_138 = (int64_t *******)&ppppppplStack_1f8;
      FUN_1802edcd0(pppppplVar11,ppppppplStack_1f8,1);
      ppppppplVar13 = ppppppplStack_1a8;
      if (ppppppplStack_1f8 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_1f8)[7])();
        ppppppplVar13 = ppppppplStack_1a8;
      }
    }
    lVar25 = (*(code *)(*param_1[0xb])[0x33])();
    pfVar17 = (float *)(*(code *)(*param_1[0xb])[0x33])();
    fVar35 = (*(float *)(lVar25 + 0x10) - *pfVar17) * (*(float *)(lVar25 + 0x14) - pfVar17[1]) *
             (*(float *)(lVar25 + 0x18) - pfVar17[2]) * 16000.0;
    if (fVar35 <= 60.0) {
      fVar35 = 60.0;
    }
    if (fVar35 < 200.0) {
      *(float *)((int64_t)*param_1 + 0x2cc) = fVar35;
    }
    ppppppplStack_208 = (int64_t *******)param_1[0xc];
    param_1[0xc] = (int64_t ******)0x0;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    ppppppplStack_208 = (int64_t *******)param_1[0xd];
    param_1[0xd] = (int64_t ******)0x0;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    ppppppplStack_208 = (int64_t *******)param_1[0xe];
    param_1[0xe] = (int64_t ******)0x0;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    ppppppplStack_208 = (int64_t *******)param_1[0xf];
    param_1[0xf] = (int64_t ******)0x0;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    do {
      lVar25 = 0x28;
      if (iVar27 != 0) {
        lVar25 = 0x30;
      }
      plStack_110 = *(int64_t **)(lVar25 + (int64_t)ppppppplVar13);
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x28))(plStack_110);
        ppppppplStack_1e8 = (int64_t *******)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d8,8,3);
                    // WARNING: Subroutine does not return
        memset(ppppppplStack_1e8,0,0x3d8);
      }
      iVar27 = iVar27 + 1;
      ppppppplStack_1f8 = (int64_t *******)CONCAT44(ppppppplStack_1f8._4_4_,iVar27);
      ppppppplVar13 = ppppppplStack_1a8;
    } while (iVar27 < 2);
    puStack_1d0 = &system_data_buffer_ptr;
    if (puStack_1c8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puStack_1c8);
    }
    puStack_1c8 = (int32_t *)0x0;
    uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
    puStack_1d0 = &system_state_ptr;
    puStack_158 = &system_data_buffer_ptr;
    if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_150 = (int8_t *)0x0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    puStack_158 = &system_state_ptr;
    if (ppppppplStack_1d8 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_1d8)[7])();
    }
    goto LAB_1805ea14d;
  }
  ppppppplStack_1a0 = (int64_t *******)pppppplVar11;
  (*(code *)(*pppppplVar11)[5])(pppppplVar11);
  ppppppplStack_1a0 = (int64_t *******)*param_1;
  *param_1 = pppppplVar11;
  if (ppppppplStack_1a0 != (int64_t *******)0x0) {
    (*(code *)(*ppppppplStack_1a0)[7])();
  }
  iVar5 = FUN_1802ed190(*param_1,0);
  iVar28 = 0;
  if (0 < iVar5) {
    do {
      plVar9 = (int64_t *)FUN_1802ed2b0(*param_1,&ppppppplStack_1a0,0,iVar28);
      pppppplVar11 = (int64_t ******)*plVar9;
      if (ppppppplStack_1a0 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplStack_1a0)[7])();
      }
      switch(*(int32_t *)(pppppplVar11 + 0x7a)) {
      case 0:
        ppppppplStack_1e8 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0xb];
        param_1[0xb] = pppppplVar11;
        ppppppplStack_1e8 = ppppppplVar13;
        break;
      case 1:
        ppppppplStack_1b0 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0xc];
        param_1[0xc] = pppppplVar11;
        ppppppplStack_1b0 = ppppppplVar13;
        break;
      case 2:
        ppppppplStack_1a8 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0xd];
        param_1[0xd] = pppppplVar11;
        ppppppplStack_1a8 = ppppppplVar13;
        break;
      case 3:
        ppppppplStack_178 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0xe];
        param_1[0xe] = pppppplVar11;
        ppppppplStack_178 = ppppppplVar13;
        break;
      case 4:
        ppppppplStack_1d8 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0xf];
        param_1[0xf] = pppppplVar11;
        ppppppplStack_1d8 = ppppppplVar13;
        break;
      case 5:
        ppppppplStack_1f8 = (int64_t *******)pppppplVar11;
        (*(code *)(*pppppplVar11)[5])(pppppplVar11);
        ppppppplVar13 = (int64_t *******)param_1[0x10];
        param_1[0x10] = pppppplVar11;
        ppppppplStack_1f8 = ppppppplVar13;
        break;
      default:
        goto LAB_1805e88d2;
      }
      if (ppppppplVar13 != (int64_t *******)0x0) {
        (*(code *)(*ppppppplVar13)[7])();
      }
LAB_1805e88d2:
      iVar28 = iVar28 + 1;
    } while (iVar28 < iVar5);
  }
  ppppplVar1 = (*param_1)[0x4c];
  if (ppppplVar1 != (int64_t *****)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    iVar28 = (int)((int64_t)ppppplVar1[0x36] - (int64_t)ppppplVar1[0x35] >> 3);
    if (0 < iVar28) {
      lVar25 = 0;
      iVar27 = 0;
      do {
        iVar5 = (*(code *)(*ppppplVar1[0x35][lVar25])[0x13])();
        if (iVar5 == 0) {
          iVar27 = iVar27 + 1;
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < iVar28);
      ppppppplStack_1f8 = (int64_t *******)CONCAT44(ppppppplStack_1f8._4_4_,iVar27);
    }
    iVar28 = 0;
    uVar33 = uStack_1f0;
    if (0 < iVar27) {
      do {
        iVar27 = 0;
        ppppppplVar13 = (int64_t *******)0x0;
        ppppppplStack_1e8 = (int64_t *******)0x0;
        uStack_1f0 = uVar33 | 1;
        iVar5 = 0;
        lVar25 = 0;
        pppplVar20 = ppppplVar1[0x35];
        uStack_1e0 = uStack_1f0;
        if ((int64_t)ppppplVar1[0x36] - (int64_t)pppplVar20 >> 3 != 0) {
          do {
            iVar6 = (*(code *)(*pppplVar20[lVar25])[0x13])();
            if (iVar6 == 0) {
              if (iVar28 == iVar27) {
                ppppppplVar13 = (int64_t *******)ppppplVar1[0x35][lVar25];
                if (ppppppplVar13 != (int64_t *******)0x0) {
                  ppppppplStack_1a0 = ppppppplVar13;
                  (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
                }
                ppppppplStack_1a0 = (int64_t *******)0x0;
                ppppppplStack_1e8 = ppppppplVar13;
                break;
              }
              iVar27 = iVar27 + 1;
            }
            iVar5 = iVar5 + 1;
            lVar25 = lVar25 + 1;
            pppplVar20 = ppppplVar1[0x35];
          } while ((uint64_t)(int64_t)iVar5 <
                   (uint64_t)((int64_t)ppppplVar1[0x36] - (int64_t)pppplVar20 >> 3));
        }
        uVar33 = uStack_1f0 & 0xfffffffe;
        uStack_1e0 = uVar33;
        if (ppppppplVar13 != (int64_t *******)0x0) {
          (*(code *)(*ppppppplVar13)[7])(ppppppplVar13);
        }
        switch(*(int32_t *)(ppppppplVar13 + 0x7a)) {
        case 0:
          ppppppplStack_1b0 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0xb];
          param_1[0xb] = (int64_t ******)ppppppplVar13;
          ppppppplStack_1b0 = ppppppplVar18;
          break;
        case 1:
          ppppppplStack_1a8 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0xc];
          param_1[0xc] = (int64_t ******)ppppppplVar13;
          ppppppplStack_1a8 = ppppppplVar18;
          break;
        case 2:
          ppppppplStack_178 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0xd];
          param_1[0xd] = (int64_t ******)ppppppplVar13;
          ppppppplStack_178 = ppppppplVar18;
          break;
        case 3:
          ppppppplStack_1d8 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0xe];
          param_1[0xe] = (int64_t ******)ppppppplVar13;
          ppppppplStack_1d8 = ppppppplVar18;
          break;
        case 4:
          ppppppplStack_170 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0xf];
          param_1[0xf] = (int64_t ******)ppppppplVar13;
          ppppppplStack_170 = ppppppplVar18;
          break;
        case 5:
          ppppppplStack_208 = ppppppplVar13;
          (*(code *)(*ppppppplVar13)[5])(ppppppplVar13);
          ppppppplVar18 = (int64_t *******)param_1[0x10];
          param_1[0x10] = (int64_t ******)ppppppplVar13;
          ppppppplStack_208 = ppppppplVar18;
          break;
        default:
          goto LAB_1805e8af5;
        }
        if (ppppppplVar18 != (int64_t *******)0x0) {
          (*(code *)(*ppppppplVar18)[7])();
        }
LAB_1805e8af5:
        iVar28 = iVar28 + 1;
      } while (iVar28 < (int)ppppppplStack_1f8);
    }
    cStack_200 = '\0';
    if ('\0' < *(char *)(ppppplVar1 + 4)) {
      do {
        uVar22 = 0;
        lVar25 = (int64_t)cStack_200;
        pppplVar20 = ppppplVar1[3];
        uVar32 = uVar22;
        if (0 < (int)((int64_t)pppplVar20[lVar25 * 0x20 + 0x17] -
                      (int64_t)pppplVar20[lVar25 * 0x20 + 0x16] >> 3)) {
          do {
            pppppplVar11 = *(int64_t *******)(uVar32 + (int64_t)pppplVar20[lVar25 * 0x20 + 0x16]);
            switch(*(int32_t *)(pppppplVar11 + 0x7a)) {
            case 0:
              ppppppplStack_208 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0xb];
              param_1[0xb] = pppppplVar11;
              ppppppplStack_208 = ppppppplVar13;
              break;
            case 1:
              ppppppplStack_170 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0xc];
              param_1[0xc] = pppppplVar11;
              ppppppplStack_170 = ppppppplVar13;
              break;
            case 2:
              ppppppplStack_1a0 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0xd];
              param_1[0xd] = pppppplVar11;
              ppppppplStack_1a0 = ppppppplVar13;
              break;
            case 3:
              ppppppplStack_1e8 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0xe];
              param_1[0xe] = pppppplVar11;
              ppppppplStack_1e8 = ppppppplVar13;
              break;
            case 4:
              ppppppplStack_1b0 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0xf];
              param_1[0xf] = pppppplVar11;
              ppppppplStack_1b0 = ppppppplVar13;
              break;
            case 5:
              ppppppplStack_1a8 = (int64_t *******)pppppplVar11;
              (*(code *)(*pppppplVar11)[5])(pppppplVar11);
              ppppppplVar13 = (int64_t *******)param_1[0x10];
              param_1[0x10] = pppppplVar11;
              ppppppplStack_1a8 = ppppppplVar13;
              break;
            default:
              goto LAB_1805e8c39;
            }
            if (ppppppplVar13 != (int64_t *******)0x0) {
              (*(code *)(*ppppppplVar13)[7])();
            }
LAB_1805e8c39:
            uVar33 = (int)uVar22 + 1;
            uVar22 = (uint64_t)uVar33;
            pppplVar20 = ppppplVar1[3];
            uVar32 = uVar32 + 8;
          } while ((int)uVar33 <
                   (int)((int64_t)pppplVar20[lVar25 * 0x20 + 0x17] -
                         (int64_t)pppplVar20[lVar25 * 0x20 + 0x16] >> 3));
        }
        cStack_200 = cStack_200 + '\x01';
      } while (cStack_200 < *(char *)(ppppplVar1 + 4));
    }
  }
  iVar27 = FUN_1802ed190(*param_1,2);
  if (iVar27 != 0) {
    plVar9 = (int64_t *)FUN_1802ed2b0(*param_1,&ppppppplStack_170,2);
    pppppplVar11 = (int64_t ******)*plVar9;
    *plVar9 = 0;
    ppppppplStack_208 = (int64_t *******)param_1[0xb];
    param_1[0xb] = pppppplVar11;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    if (ppppppplStack_170 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_170)[7])();
    }
  }
  iVar27 = FUN_1802ed190(*param_1,3);
  if (iVar27 != 0) {
    plVar9 = (int64_t *)FUN_1802ed2b0(*param_1,&ppppppplStack_208,3);
    lVar25 = *plVar9;
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
    pppppplVar11 = *(int64_t *******)(lVar25 + 0x48);
    switch(*(int32_t *)(pppppplVar11 + 0x7a)) {
    case 0:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0xb];
      param_1[0xb] = pppppplVar11;
      break;
    case 1:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0xc];
      param_1[0xc] = pppppplVar11;
      break;
    case 2:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0xd];
      param_1[0xd] = pppppplVar11;
      break;
    case 3:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0xe];
      param_1[0xe] = pppppplVar11;
      break;
    case 4:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0xf];
      param_1[0xf] = pppppplVar11;
      break;
    case 5:
      ppppppplStack_208 = (int64_t *******)pppppplVar11;
      (*(code *)(*pppppplVar11)[5])(pppppplVar11);
      ppppppplStack_208 = (int64_t *******)param_1[0x10];
      param_1[0x10] = pppppplVar11;
      break;
    default:
      goto LAB_1805e8dfe;
    }
    if (ppppppplStack_208 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_208)[7])();
    }
  }
LAB_1805e8dfe:
  FUN_1802e8db0(*param_1);
LAB_1805ea14d:
  if (*(int *)((int64_t)param_1 + 0x15c) < 0) {
    *(int *)((int64_t)param_1 + 0x16c) = *(int *)((int64_t)param_1 + 0x15c);
  }
  else {
    FUN_1805ed050(param_1);
  }
  ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
  (*(code *)(*param_1[0xb])[0x25])(param_1[0xb],&ppppppplStack_1f8);
  pppppplVar11 = param_1[0xc];
  if (pppppplVar11 != (int64_t ******)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    (*(code *)(*pppppplVar11)[0x25])(pppppplVar11,&ppppppplStack_1f8);
  }
  pppppplVar11 = param_1[0xd];
  if (pppppplVar11 != (int64_t ******)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    (*(code *)(*pppppplVar11)[0x25])(pppppplVar11,&ppppppplStack_1f8);
  }
  pppppplVar11 = param_1[0xe];
  if (pppppplVar11 != (int64_t ******)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    (*(code *)(*pppppplVar11)[0x25])(pppppplVar11,&ppppppplStack_1f8);
  }
  pppppplVar11 = param_1[0xf];
  if (pppppplVar11 != (int64_t ******)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    (*(code *)(*pppppplVar11)[0x25])(pppppplVar11,&ppppppplStack_1f8);
  }
  pppppplVar11 = param_1[0x10];
  if (pppppplVar11 != (int64_t ******)0x0) {
    ppppppplStack_1f8 = (int64_t *******)((uint64_t)ppppppplStack_1f8 & 0xffffffff00000000);
    (*(code *)(*pppppplVar11)[0x25])(pppppplVar11,&ppppppplStack_1f8);
  }
  func_0x0001805ea2d0(param_1,uStack_e0);
  if ((int64_t *)*plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*plStack_d8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_80 ^ (uint64_t)auStack_238);
}









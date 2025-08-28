#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part078.c - 20 个函数

// 函数: void FUN_18010af70(uint64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_18010af70(uint64_t *param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int16_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int8_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t *puVar12;
  void *puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int8_t auStack_1d8 [32];
  void *puStack_1b8;
  int8_t *puStack_1b0;
  uint uStack_1a8;
  uint64_t uStack_1a0;
  int8_t auStack_198 [4];
  uint uStack_194;
  void *puStack_190;
  int16_t *puStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  uint64_t *puStack_170;
  uint64_t *puStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t *puStack_150;
  char acStack_148 [256];
  uint64_t uStack_48;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  iVar11 = *(int *)(param_2 + 0x10);
  puStack_170 = param_1;
  if ((iVar11 == 0x11) && (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_1320_ptr), iVar1 == 0))
  {
    FUN_180627ae0(&puStack_1b8,param_3);
    if ((0 < (int)uStack_1a8) && (lVar3 = strstr(puStack_1b0,&unknown_var_7168_ptr), lVar3 != 0)) {
      iVar11 = 5;
      uVar9 = (int)lVar3 - (int)puStack_1b0;
      uVar10 = (uint64_t)uVar9;
      if (uStack_1a8 < uVar9 + 5) {
        iVar11 = uStack_1a8 - uVar9;
      }
      uVar9 = uVar9 + iVar11;
      if (uVar9 < uStack_1a8) {
        uVar10 = (uint64_t)(int)uVar9;
        do {
          *(int8_t *)((uVar10 - (int64_t)iVar11) + (int64_t)puStack_1b0) =
               *(int8_t *)(uVar10 + (int64_t)puStack_1b0);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar9 < uStack_1a8);
      }
      uStack_1a8 = uStack_1a8 - iVar11;
      *(int8_t *)((uint64_t)uStack_1a8 + (int64_t)puStack_1b0) = 0;
      puStack_190 = &system_data_buffer_ptr;
      uStack_178 = 0;
      puStack_188 = (int16_t *)0x0;
      uStack_180 = 0;
      puVar4 = (int16_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,CONCAT71((int7)(uVar10 >> 8),0x13));
      *(int8_t *)puVar4 = 0;
      puStack_188 = puVar4;
      uVar2 = FUN_18064e990(puVar4);
      uStack_178 = CONCAT44(uStack_178._4_4_,uVar2);
      *puVar4 = 0x20;
      uStack_180 = 1;
      FUN_1806288c0(&puStack_1b8,(int)lVar3 - (int)puStack_1b0,&puStack_190);
      puStack_190 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    puVar5 = (uint64_t *)FUN_180627ae0(&puStack_190,&puStack_1b8);
    puStack_168 = puVar5;
    FUN_18005c8a0(puStack_170 + 0x124,puVar5);
    *puVar5 = &system_data_buffer_ptr;
    if (puVar5[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puVar5[1] = 0;
    *(int32_t *)(puVar5 + 3) = 0;
    *puVar5 = &system_state_ptr;
    puStack_1b8 = &system_data_buffer_ptr;
    if (puStack_1b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_1b0 = (int8_t *)0x0;
    uStack_1a0 = (uint64_t)uStack_1a0._4_4_ << 0x20;
    puStack_1b8 = &system_state_ptr;
  }
  else if ((iVar11 == 0x12) &&
          (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_1864_ptr), iVar1 == 0)) {
    puStack_170 = param_1 + 0x270;
    FUN_180057110(puStack_170);
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar13 = *(void **)(param_3 + 8);
    }
    iVar11 = FUN_18010cbc0(puVar13,&unknown_var_1928_ptr,acStack_148);
    uVar9 = 0;
    while (iVar11 != -1) {
      FUN_18010cbc0(puVar13,&unknown_var_1920_ptr,auStack_198);
      lVar3 = -1;
      do {
        lVar6 = lVar3 + 1;
        lVar14 = lVar3 + 1;
        lVar3 = lVar6;
      } while (acStack_148[lVar14] != '\0');
      uStack_194 = uVar9 + (int)lVar6 + 1;
      puStack_1b8 = &system_data_buffer_ptr;
      uStack_1a0 = 0;
      puStack_1b0 = (int8_t *)0x0;
      uStack_1a8 = 0;
      lVar3 = -1;
      do {
        lVar14 = lVar3;
        lVar3 = lVar14 + 1;
      } while (acStack_148[lVar14 + 1] != '\0');
      if ((int)(lVar14 + 1) != 0) {
        iVar1 = (int)lVar14 + 2;
        iVar11 = iVar1;
        if (iVar1 < 0x10) {
          iVar11 = 0x10;
        }
        puStack_1b0 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar11,0x13);
        *puStack_1b0 = 0;
        uVar2 = FUN_18064e990(puStack_1b0);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar2);
                    // WARNING: Subroutine does not return
        memcpy(puStack_1b0,acStack_148,iVar1);
      }
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      puStack_1b0 = (int8_t *)0x0;
      puStack_1b8 = &system_data_buffer_ptr;
      if ((uint64_t)puStack_170[1] < (uint64_t)puStack_170[2]) {
        puStack_170[1] = puStack_170[1] + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(puStack_170,&puStack_1b8);
      }
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (puVar13[uVar10] != '\0');
      puStack_1b8 = &system_data_buffer_ptr;
      if (uVar10 <= (uint64_t)(int64_t)(int)uStack_194) {
        if (puStack_1b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puStack_1b0 = (int8_t *)0x0;
        uStack_1a0 = (uint64_t)uStack_1a0._4_4_ << 0x20;
        puStack_1b8 = &system_state_ptr;
        break;
      }
      if (puStack_1b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      puStack_1b0 = (int8_t *)0x0;
      uStack_1a0 = (uint64_t)uStack_1a0._4_4_ << 0x20;
      puStack_1b8 = &system_state_ptr;
      iVar11 = FUN_18010cbc0(puVar13 + (int)uStack_194,&unknown_var_1928_ptr,acStack_148);
      uVar9 = uStack_194;
    }
  }
  else if ((iVar11 == 0xd) &&
          (iVar11 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_1968_ptr), iVar11 == 0)) {
    plVar15 = param_1 + 0x274;
    FUN_180057110(plVar15);
    puVar5 = (uint64_t *)&system_buffer_ptr;
    if (*(uint64_t **)(param_3 + 8) != (uint64_t *)0x0) {
      puVar5 = *(uint64_t **)(param_3 + 8);
    }
    puStack_168 = puVar5;
    iVar11 = FUN_18010cbc0(puVar5,&unknown_var_1928_ptr,acStack_148);
    puVar8 = (uint64_t *)0x0;
    while (iVar11 != -1) {
      FUN_18010cbc0(puVar5,&unknown_var_1920_ptr,auStack_198);
      lVar3 = -1;
      do {
        lVar6 = lVar3 + 1;
        lVar14 = lVar3 + 1;
        lVar3 = lVar6;
      } while (acStack_148[lVar14] != '\0');
      uStack_194 = (int)puVar8 + (int)lVar6 + 1;
      puStack_1b8 = &system_data_buffer_ptr;
      uStack_160 = 0;
      puStack_1b0 = (int8_t *)0x0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lVar3 = -1;
      do {
        lVar14 = lVar3;
        lVar3 = lVar14 + 1;
      } while (acStack_148[lVar14 + 1] != '\0');
      if ((int)(lVar14 + 1) != 0) {
        iVar1 = (int)lVar14 + 2;
        iVar11 = iVar1;
        if (iVar1 < 0x10) {
          iVar11 = 0x10;
        }
        puVar7 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar11,0x13);
        *puVar7 = 0;
        puStack_1b0 = puVar7;
        uStack_160 = FUN_18064e990(puVar7);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)uStack_160);
                    // WARNING: Subroutine does not return
        memcpy(puVar7,acStack_148,iVar1);
      }
      uStack_1a8 = 0;
      puVar8 = (uint64_t *)param_1[0x275];
      if (puVar8 < (uint64_t *)param_1[0x276]) {
        param_1[0x275] = puVar8 + 4;
        *puVar8 = &system_state_ptr;
        puVar8[1] = 0;
        *(int32_t *)(puVar8 + 2) = 0;
        *puVar8 = &system_data_buffer_ptr;
        *(int32_t *)(puVar8 + 2) = 0;
        puVar8[1] = 0;
        *(int32_t *)((int64_t)puVar8 + 0x1c) = 0;
        *(int32_t *)(puVar8 + 3) = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        puStack_170 = puVar8;
      }
      else {
        lVar3 = *plVar15;
        lVar14 = (int64_t)puVar8 - lVar3 >> 5;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_18010b692:
          puVar5 = (uint64_t *)
                   CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar14 << 5,*(int8_t *)(param_1 + 0x277));
          puVar8 = (uint64_t *)param_1[0x275];
          lVar3 = *plVar15;
        }
        else {
          lVar14 = lVar14 * 2;
          puVar5 = (uint64_t *)0x0;
          if (lVar14 != 0) goto LAB_18010b692;
        }
        puStack_170 = puVar5;
        puStack_150 = (uint64_t *)FUN_180059780(lVar3,puVar8,puVar5);
        *puStack_150 = &system_state_ptr;
        puStack_150[1] = 0;
        *(int32_t *)(puStack_150 + 2) = 0;
        *puStack_150 = &system_data_buffer_ptr;
        *(int32_t *)(puStack_150 + 2) = 0;
        puStack_150[1] = 0;
        *(int32_t *)((int64_t)puStack_150 + 0x1c) = 0;
        *(int *)(puStack_150 + 3) = (int)uStack_160;
        uStack_1a8 = 0;
        puStack_1b0 = (int8_t *)0x0;
        uStack_1a0 = 0;
        puVar12 = puStack_150 + 4;
        puVar5 = (uint64_t *)param_1[0x275];
        puVar8 = (uint64_t *)*plVar15;
        if (puVar8 != puVar5) {
          do {
            (**(code **)*puVar8)(puVar8,0);
            puVar8 = puVar8 + 4;
          } while (puVar8 != puVar5);
          puVar8 = (uint64_t *)*plVar15;
        }
        if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar8);
        }
        *plVar15 = (int64_t)puStack_170;
        param_1[0x275] = puVar12;
        param_1[0x276] = puStack_170 + lVar14 * 4;
        puVar5 = puStack_168;
      }
      puVar8 = (uint64_t *)(uint64_t)uStack_194;
      puStack_1b0 = (int8_t *)0x0;
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      puStack_1b8 = &system_state_ptr;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)((int64_t)puVar5 + uVar10) != '\0');
      if (uVar10 <= (uint64_t)(int64_t)(int)uStack_194) break;
      iVar11 = FUN_18010cbc0((void *)((int64_t)(int)uStack_194 + (int64_t)puVar5),
                             &unknown_var_1928_ptr,acStack_148);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010b7d0(int64_t param_1,int64_t param_2)
void FUN_18010b7d0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  uint uVar10;
  int iVar11;
  void *puStack_d8;
  int64_t lStack_d0;
  int iStack_c8;
  uint64_t uStack_c0;
  void *puStack_b8;
  void *puStack_b0;
  uint uStack_a8;
  int32_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  uint uStack_88;
  int32_t uStack_80;
  void *puStack_78;
  int64_t lStack_70;
  int32_t uStack_60;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  if (param_2 != 0) {
    uStack_38 = 0xfffffffffffffffe;
    uVar5 = 0;
    puStack_d8 = &system_data_buffer_ptr;
    uStack_c0 = 0;
    lStack_d0 = 0;
    iStack_c8 = 0;
    if (*(int64_t *)(param_1 + 5000) - *(int64_t *)(param_1 + 0x1380) >> 5 != 0) {
      System_DataHandler(&puStack_d8,&unknown_var_1944_ptr);
      lVar1 = *(int64_t *)(param_1 + 5000);
      lVar2 = *(int64_t *)(param_1 + 0x1380);
      uVar4 = uVar5;
      uVar6 = uVar5;
      if (lVar1 - lVar2 >> 5 != 1) {
        do {
          FUN_180627ae0(&puStack_b8,lVar2 + uVar4 * 0x20);
          while ((0 < (int)uStack_a8 && (lVar1 = strstr(puStack_b0,&system_data_c8e4), lVar1 != 0))) {
            iVar11 = 1;
            iVar7 = (int)lVar1 - (int)puStack_b0;
            if (uStack_a8 < iVar7 + 1U) {
              iVar11 = uStack_a8 - iVar7;
            }
            uVar10 = iVar7 + iVar11;
            if (uVar10 < uStack_a8) {
              lVar2 = (int64_t)(int)uVar10;
              do {
                puStack_b0[lVar2 - iVar11] = puStack_b0[lVar2];
                uVar10 = uVar10 + 1;
                lVar2 = lVar2 + 1;
              } while (uVar10 < uStack_a8);
            }
            uStack_a8 = uStack_a8 - iVar11;
            puStack_b0[uStack_a8] = 0;
            uVar3 = FUN_180627910(&puStack_78,&unknown_var_7168_ptr);
            FUN_1806288c0(&puStack_b8,(int)lVar1 - (int)puStack_b0,uVar3);
            puStack_78 = &system_data_buffer_ptr;
            if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            lStack_70 = 0;
            uStack_60 = 0;
            puStack_78 = &system_state_ptr;
          }
          puVar8 = &system_buffer_ptr;
          if (puStack_b0 != (void *)0x0) {
            puVar8 = puStack_b0;
          }
          System_DataHandler(&puStack_d8,&unknown_var_2004_ptr,puVar8);
          puStack_b8 = &system_data_buffer_ptr;
          if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          puStack_b0 = (void *)0x0;
          uStack_a0 = 0;
          puStack_b8 = &system_state_ptr;
          uVar10 = (int)uVar6 + 1;
          lVar1 = *(int64_t *)(param_1 + 5000);
          lVar2 = *(int64_t *)(param_1 + 0x1380);
          uVar4 = (int64_t)(int)uVar10;
          uVar6 = (uint64_t)uVar10;
        } while ((uint64_t)(int64_t)(int)uVar10 < (lVar1 - lVar2 >> 5) - 1U);
      }
      FUN_180627ae0(&puStack_98,lVar2 + ((lVar1 - lVar2 & 0xffffffffffffffe0U) - 0x20));
      while ((0 < (int)uStack_88 && (lVar1 = strstr(puStack_90,&system_data_c8e4), lVar1 != 0))) {
        iVar11 = 1;
        iVar7 = (int)lVar1 - (int)puStack_90;
        if (uStack_88 < iVar7 + 1U) {
          iVar11 = uStack_88 - iVar7;
        }
        uVar10 = iVar7 + iVar11;
        if (uVar10 < uStack_88) {
          lVar2 = (int64_t)(int)uVar10;
          do {
            puStack_90[lVar2 - iVar11] = puStack_90[lVar2];
            uVar10 = uVar10 + 1;
            lVar2 = lVar2 + 1;
          } while (uVar10 < uStack_88);
        }
        uStack_88 = uStack_88 - iVar11;
        puStack_90[uStack_88] = 0;
        uVar3 = FUN_180627910(&puStack_58,&unknown_var_7168_ptr);
        FUN_1806288c0(&puStack_98,(int)lVar1 - (int)puStack_90,uVar3);
        puStack_58 = &system_data_buffer_ptr;
        if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        lStack_50 = 0;
        uStack_40 = 0;
        puStack_58 = &system_state_ptr;
      }
      puVar8 = &system_buffer_ptr;
      if (puStack_90 != (void *)0x0) {
        puVar8 = puStack_90;
      }
      System_DataHandler(&puStack_d8,&unknown_var_92_ptr,puVar8);
      puStack_98 = &system_data_buffer_ptr;
      if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      puStack_90 = (void *)0x0;
      uStack_80 = 0;
      puStack_98 = &system_state_ptr;
    }
    if (*(int64_t *)(param_1 + 0x13a8) - *(int64_t *)(param_1 + 0x13a0) >> 5 != 0) {
      System_DataHandler(&puStack_d8,&unknown_var_1984_ptr);
      lVar1 = *(int64_t *)(param_1 + 0x13a8);
      lVar2 = *(int64_t *)(param_1 + 0x13a0);
      uVar4 = uVar5;
      if (lVar1 - lVar2 >> 5 != 1) {
        do {
          puVar8 = *(void **)(uVar5 + 8 + lVar2);
          puVar9 = &system_buffer_ptr;
          if (puVar8 != (void *)0x0) {
            puVar9 = puVar8;
          }
          System_DataHandler(&puStack_d8,&unknown_var_2004_ptr,puVar9);
          uVar10 = (int)uVar4 + 1;
          uVar5 = uVar5 + 0x20;
          lVar1 = *(int64_t *)(param_1 + 0x13a8);
          lVar2 = *(int64_t *)(param_1 + 0x13a0);
          uVar4 = (uint64_t)uVar10;
        } while ((uint64_t)(int64_t)(int)uVar10 < (lVar1 - lVar2 >> 5) - 1U);
      }
      puVar8 = *(void **)(((lVar1 - lVar2 & 0xffffffffffffffe0U) - 0x18) + lVar2);
      puVar9 = &system_buffer_ptr;
      if (puVar8 != (void *)0x0) {
        puVar9 = puVar8;
      }
      System_DataHandler(&puStack_d8,&unknown_var_92_ptr,puVar9);
    }
    fwrite(lStack_d0,1,(int64_t)iStack_c8,*(uint64_t *)(param_2 + 8));
    if (*(int64_t *)(param_2 + 8) != 0) {
      fclose();
      *(uint64_t *)(param_2 + 8) = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    puStack_d8 = &system_data_buffer_ptr;
    if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}





// 函数: void FUN_18010bca0(int64_t param_1,int32_t *param_2,int64_t param_3)
void FUN_18010bca0(int64_t param_1,int32_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x50;
  *(int32_t *)(param_1 + 0x48) = *param_2;
  if (lVar1 != param_3) {
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      (**(code **)(param_1 + 0x60))(lVar1,0,0);
    }
    pcVar2 = *(code **)(param_3 + 0x10);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_3,1);
      pcVar2 = *(code **)(param_3 + 0x10);
    }
    *(code **)(param_1 + 0x60) = pcVar2;
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_3 + 0x18);
  }
  return;
}





// 函数: void FUN_18010bcbf(void)
void FUN_18010bcbf(void)

{
  code *in_RAX;
  int64_t unaff_RBX;
  code *pcVar1;
  int64_t unaff_RDI;
  
  if (in_RAX != (code *)0x0) {
    (*in_RAX)();
  }
  pcVar1 = *(code **)(unaff_RDI + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(unaff_RDI + 0x10);
  }
  *(code **)(unaff_RBX + 0x10) = pcVar1;
  *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RDI + 0x18);
  return;
}





// 函数: void FUN_18010bcff(void)
void FUN_18010bcff(void)

{
  return;
}



int64_t FUN_18010bd10(int64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(param_1,0,0);
    }
    pcVar1 = *(code **)(param_2 + 0x10);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,1);
      pcVar1 = *(code **)(param_2 + 0x10);
    }
    *(code **)(param_1 + 0x10) = pcVar1;
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  }
  return param_1;
}





// 函数: void FUN_18010bd29(uint64_t param_1)
void FUN_18010bd29(uint64_t param_1)

{
  code *in_RAX;
  int64_t unaff_RBX;
  code *pcVar1;
  int64_t unaff_RDI;
  
  if (in_RAX != (code *)0x0) {
    (*in_RAX)(param_1,0,0);
  }
  pcVar1 = *(code **)(unaff_RDI + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(unaff_RDI + 0x10);
  }
  *(code **)(unaff_RBX + 0x10) = pcVar1;
  *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RDI + 0x18);
  return;
}





// 函数: void FUN_18010bd66(void)
void FUN_18010bd66(void)

{
  return;
}



int64_t FUN_18010bd80(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_592_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_544_ptr;
  return param_1;
}



int64_t FUN_18010bdb0(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_560_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_544_ptr;
  return param_1;
}



int64_t FUN_18010bde0(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_512_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}



int64_t FUN_18010be10(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_480_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_464_ptr;
  return param_1;
}



int64_t FUN_18010be40(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_432_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_416_ptr;
  return param_1;
}



int64_t FUN_18010be70(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_384_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}



int64_t FUN_18010bea0(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_352_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}



int64_t FUN_18010bed0(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_320_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}



int64_t FUN_18010bf00(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_288_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}



int64_t FUN_18010bf30(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &unknown_var_256_ptr;
  *(void **)(param_1 + 0x18) = &unknown_var_9440_ptr;
  return param_1;
}





// 函数: void FUN_18010cbc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18010cbc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (uint64_t *)func_0x00018010cbb0();
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2,0,&uStackX_18);
  return;
}





// 函数: void FUN_18010cc70(int64_t param_1,int32_t param_2)
void FUN_18010cc70(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1bf0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1bf8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1ba0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1ba0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1b90) = *(int32_t *)(param_1 + 0x1bd8);
    return;
  }
  *(int32_t *)(param_1 + 0x1b90) = param_2;
  return;
}





// 函数: void FUN_18010ccf0(int64_t param_1,int32_t param_2)
void FUN_18010ccf0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1fe0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1fe8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1f90) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1f90);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1f80) = *(int32_t *)(param_1 + 0x1fc8);
    return;
  }
  *(int32_t *)(param_1 + 0x1f80) = param_2;
  return;
}





// 函数: void FUN_18010cd70(int64_t param_1,int32_t param_2)
void FUN_18010cd70(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x20c0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x20c8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2070) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x2070);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x2060) = *(int32_t *)(param_1 + 0x20a8);
    return;
  }
  *(int32_t *)(param_1 + 0x2060) = param_2;
  return;
}





// 函数: void FUN_18010cdf0(int64_t param_1,int32_t param_2)
void FUN_18010cdf0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x2210) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2218))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x21c0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x21c0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x21b0) = *(int32_t *)(param_1 + 0x21f8);
    return;
  }
  *(int32_t *)(param_1 + 0x21b0) = param_2;
  return;
}





// 函数: void FUN_18010ce70(int64_t param_1,int32_t param_2)
void FUN_18010ce70(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x2280) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2288))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2230) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x2230);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x2220) = *(int32_t *)(param_1 + 0x2268);
    return;
  }
  *(int32_t *)(param_1 + 0x2220) = param_2;
  return;
}





// 函数: void FUN_18010cef0(int64_t param_1,int32_t param_2)
void FUN_18010cef0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x21a0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x21a8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2150) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x2150);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x2140) = *(int32_t *)(param_1 + 0x2188);
    return;
  }
  *(int32_t *)(param_1 + 0x2140) = param_2;
  return;
}





// 函数: void FUN_18010cf70(int64_t param_1,int32_t param_2)
void FUN_18010cf70(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x2130) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2138))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x20e0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x20e0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x20d0) = *(int32_t *)(param_1 + 0x2118);
    return;
  }
  *(int32_t *)(param_1 + 0x20d0) = param_2;
  return;
}





// 函数: void FUN_18010cff0(int64_t param_1,int32_t param_2)
void FUN_18010cff0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1330) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1338))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x12e0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x12e0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x12d0) = *(int32_t *)(param_1 + 0x1318);
    return;
  }
  *(int32_t *)(param_1 + 0x12d0) = param_2;
  return;
}





// 函数: void FUN_18010d070(int64_t param_1,int32_t param_2)
void FUN_18010d070(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1100) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1108))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x10b0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x10b0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x10a0) = *(int32_t *)(param_1 + 0x10e8);
    return;
  }
  *(int32_t *)(param_1 + 0x10a0) = param_2;
  return;
}





// 函数: void FUN_18010d0f0(int64_t param_1,int32_t param_2)
void FUN_18010d0f0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1090) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1098))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1040) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1040);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1030) = *(int32_t *)(param_1 + 0x1078);
    return;
  }
  *(int32_t *)(param_1 + 0x1030) = param_2;
  return;
}





// 函数: void FUN_18010d170(int64_t param_1,int32_t param_2)
void FUN_18010d170(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0x1020) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1028))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xfd0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0xfd0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0xfc0) = *(int32_t *)(param_1 + 0x1008);
    return;
  }
  *(int32_t *)(param_1 + 0xfc0) = param_2;
  return;
}





// 函数: void FUN_18010d1f0(int64_t param_1,int32_t param_2)
void FUN_18010d1f0(int64_t param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(int64_t *)(param_1 + 0xfb0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0xfb8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xf60) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0xf60);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0xf50) = *(int32_t *)(param_1 + 0xf98);
    return;
  }
  *(int32_t *)(param_1 + 0xf50) = param_2;
  return;
}






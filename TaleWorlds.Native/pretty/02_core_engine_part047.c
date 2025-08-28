#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part047.c - 4 个函数

// 函数: void FUN_180088160(uint64_t param_1,int8_t param_2)
void FUN_180088160(uint64_t param_1,int8_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t *puVar11;
  void *puVar12;
  void *puVar13;
  int64_t lVar14;
  int8_t auStack_318 [32];
  int8_t uStack_2f8;
  int iStack_2e8;
  int64_t *plStack_2e0;
  int64_t lStack_2d8;
  void *puStack_2d0;
  int8_t *puStack_2c8;
  int32_t uStack_2c0;
  uint64_t uStack_2b8;
  void *puStack_2b0;
  int8_t *puStack_2a8;
  int32_t uStack_2a0;
  uint64_t uStack_298;
  void *puStack_290;
  void *puStack_288;
  int32_t uStack_280;
  uint64_t uStack_278;
  int32_t uStack_270;
  int64_t lStack_268;
  int64_t lStack_258;
  void *puStack_250;
  int64_t lStack_248;
  int32_t uStack_240;
  uint64_t uStack_238;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  int32_t uStack_1d0;
  uint64_t uStack_1a8;
  uint64_t uStack_48;
  
  plVar2 = core_system_data_memory;
  uStack_1a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_318;
  lVar10 = 0;
  plStack_2e0 = core_system_data_memory;
  iStack_2e8 = 0;
  iVar4 = (int)((core_system_data_memory[2] - core_system_data_memory[1]) / 0x60);
  lVar14 = (int64_t)iVar4;
  uStack_2f8 = param_2;
  lStack_268 = lVar14;
  if (0 < iVar4) {
    do {
      lVar6 = plVar2[1];
      iVar4 = *(int *)(lVar6 + 0x5c + lVar10);
      if ((iVar4 < 0) ||
         (lVar8 = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar8 >> 5) <=
         (uint64_t)(int64_t)iVar4)) {
        lVar8 = FUN_180628ca0();
      }
      else {
        lVar8 = (int64_t)iVar4 * 0x20 + lVar8;
      }
      puStack_2b0 = &system_data_buffer_ptr;
      uStack_298 = 0;
      puStack_2a8 = (int8_t *)0x0;
      uStack_2a0 = 0;
      CoreMemoryPoolProcessor(&puStack_2b0,*(int32_t *)(lVar8 + 0x10));
      if (*(int *)(lVar8 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_2a8,*(uint64_t *)(lVar8 + 8),*(int *)(lVar8 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar8 + 8) != 0) {
        uStack_2a0 = 0;
        if (puStack_2a8 != (int8_t *)0x0) {
          *puStack_2a8 = 0;
        }
        uStack_298 = uStack_298 & 0xffffffff;
      }
      puStack_250 = &system_data_buffer_ptr;
      uStack_238 = 0;
      lStack_248 = 0;
      uStack_240 = 0;
      puVar12 = *(void **)(lVar6 + 0x28 + lVar10);
      puVar13 = &system_buffer_ptr;
      if (puVar12 != (void *)0x0) {
        puVar13 = puVar12;
      }
      puVar11 = &system_buffer_ptr;
      if (puStack_2a8 != (int8_t *)0x0) {
        puVar11 = puStack_2a8;
      }
      System_DataHandler(&puStack_250,&processed_var_8076_ptr,puVar11,puVar13);
      cVar3 = FUN_180624a00(&puStack_250);
      if (cVar3 != '\0') {
        FUN_18008b250(&puStack_250);
      }
      puStack_250 = &system_data_buffer_ptr;
      if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_248 = 0;
      uStack_238 = uStack_238 & 0xffffffff00000000;
      puStack_250 = &system_state_ptr;
      puStack_2b0 = &system_data_buffer_ptr;
      if (puStack_2a8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_2a8 = (int8_t *)0x0;
      uStack_298 = uStack_298 & 0xffffffff00000000;
      puStack_2b0 = &system_state_ptr;
      lVar10 = lVar10 + 0x60;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lVar10 = lStack_268;
  uStack_270 = 0;
  if (0 < lStack_268) {
    lStack_258 = 0;
    do {
      lVar6 = lStack_258;
      lVar8 = lStack_258 * 0x60;
      lVar14 = plVar2[1];
      iVar4 = *(int *)(lVar14 + 0x5c + lVar8);
      lStack_2d8 = lVar8;
      if ((iVar4 < 0) ||
         (lVar9 = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar9 >> 5) <=
         (uint64_t)(int64_t)iVar4)) {
        lVar9 = FUN_180628ca0();
      }
      else {
        lVar9 = (int64_t)iVar4 * 0x20 + lVar9;
      }
      puStack_2d0 = &system_data_buffer_ptr;
      uStack_2b8 = 0;
      puStack_2c8 = (int8_t *)0x0;
      uStack_2c0 = 0;
      CoreMemoryPoolProcessor(&puStack_2d0,*(int32_t *)(lVar9 + 0x10));
      if (*(int *)(lVar9 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_2c8,*(uint64_t *)(lVar9 + 8),*(int *)(lVar9 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar9 + 8) != 0) {
        uStack_2c0 = 0;
        if (puStack_2c8 != (int8_t *)0x0) {
          *puStack_2c8 = 0;
        }
        uStack_2b8 = uStack_2b8 & 0xffffffff;
      }
      puStack_290 = &system_data_buffer_ptr;
      uStack_278 = 0;
      puStack_288 = (void *)0x0;
      uStack_280 = 0;
      puVar12 = *(void **)(lVar14 + 0x28 + lVar8);
      puVar13 = &system_buffer_ptr;
      if (puVar12 != (void *)0x0) {
        puVar13 = puVar12;
      }
      puVar11 = &system_buffer_ptr;
      if (puStack_2c8 != (int8_t *)0x0) {
        puVar11 = puStack_2c8;
      }
      System_DataHandler(&puStack_290,&processed_var_8076_ptr,puVar11,puVar13);
      cVar3 = FUN_180624a00(&puStack_290);
      if (cVar3 != '\0') {
        puVar1 = (uint64_t *)*plVar2;
        if (puVar1 != (uint64_t *)0x0) {
          (**(code **)*puVar1)(puVar1,&puStack_2d0);
        }
        iStack_2e8 = iStack_2e8 + 1;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 3;
        puVar12 = &system_buffer_ptr;
        if (puStack_288 != (void *)0x0) {
          puVar12 = puStack_288;
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(system_message_context,&processed_var_8208_ptr,puVar12);
      }
      puStack_290 = &system_data_buffer_ptr;
      if (puStack_288 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_288 = (void *)0x0;
      uStack_278 = uStack_278 & 0xffffffff00000000;
      puStack_290 = &system_state_ptr;
      puStack_2d0 = &system_data_buffer_ptr;
      if (puStack_2c8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_2c8 = (int8_t *)0x0;
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      puStack_2d0 = &system_state_ptr;
      lStack_258 = lVar6 + 1;
    } while (lStack_258 < lVar10);
    if (iStack_2e8 != 0) goto LAB_180088ac9;
  }
  SystemOptimizationProcessor(&processed_var_8232_ptr);
LAB_180088ac9:
  plVar7 = (int64_t *)plVar2[0x17];
  if (plVar7 != plVar2 + 0x16) {
    do {
      lVar14 = 0;
      lVar10 = plVar7[4];
      iVar4 = (int)(*(int64_t *)(lVar10 + 0x188) - *(int64_t *)(lVar10 + 0x180) >> 3);
      if (0 < iVar4) {
        do {
          plVar2 = *(int64_t **)(*(int64_t *)(lVar10 + 0x180) + lVar14 * 8);
          (**(code **)(*plVar2 + 0x60))(plVar2);
          plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2);
          if ((((((((*plVar5 == 0x4c7adebd3eba3679) && (plVar5[1] == 0x335e32f621f13486)) ||
                  ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                   *plVar5 == 0x4f1969021db01393 && (plVar5[1] == 0x170783397ab3ba83)))) ||
                 ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                  *plVar5 == 0x4bea197ca08f8b97 && (plVar5[1] == 0x4e83ae6c84535bb9)))) ||
                ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                 *plVar5 == 0x4432818ecab5ba7b && (plVar5[1] == -0x3f47266e1dfcc872)))) ||
               ((((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                  *plVar5 == 0x45bedd9a6de14d67 && (plVar5[1] == 0x51ddd8c381026394)) ||
                 ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                  *plVar5 == 0x4ef0785fcc373411 && (plVar5[1] == 0x3645b254cfd5a295)))) ||
                ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
                 *plVar5 == 0x4ff90344b46528df && (plVar5[1] == -0x3c033b29f31c0d80)))))) ||
              ((plVar5 = (int64_t *)(**(code **)(*plVar2 + 8))(plVar2),
               *plVar5 == 0x45ddeabbc635a3d5 && (plVar5[1] == 0x136119e457aa3e88)))) &&
             ((puVar1 = (uint64_t *)plVar2[4], puVar1 != (uint64_t *)0x0 && (plVar2[6] != -1))))
          {
            lVar6 = __RTCastToVoid(puVar1);
            (**(code **)*puVar1)(puVar1,0);
            if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(lVar6);
            }
            plVar2[4] = 0;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar4);
      }
      plVar7 = (int64_t *)func_0x00018066bd70(plVar7);
    } while (plVar7 != plStack_2e0 + 0x16);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_8288_ptr);
}



bool FUN_1800890a0(int64_t *param_1)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  byte *pbStack_28;
  int iStack_20;
  
  lVar7 = *param_1;
  puVar8 = (uint64_t *)(lVar7 + 0x48);
  SystemCore_EncryptionEngine0();
  puVar10 = *(uint64_t **)(lVar7 + 0x58);
  puVar3 = puVar8;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar2 = false;
        puVar11 = (uint64_t *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar5 = pbStack_28;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (int64_t)pbStack_28];
            iVar9 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar9;
          if (iVar9 < 1) {
            puVar11 = (uint64_t *)puVar10[1];
            goto LAB_18008913b;
          }
        }
        puVar11 = (uint64_t *)*puVar10;
      }
LAB_18008913b:
      puVar4 = puVar10;
      if (bVar2) {
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
      puVar10 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if (puVar4 != puVar8) {
      if (*(int *)(puVar4 + 6) == 0) goto LAB_18008917c;
      if (iStack_20 != 0) {
        pbVar5 = (byte *)puVar4[5];
        lVar7 = (int64_t)pbStack_28 - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18008917c;
      }
    }
  }
  puVar4 = puVar8;
LAB_18008917c:
  if (pbStack_28 == (byte *)0x0) {
    return puVar4 == puVar8;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



uint64_t FUN_1800891d0(int64_t *param_1,uint64_t param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  byte *pbVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int8_t auStackX_8 [8];
  byte *pbStack_60;
  int iStack_58;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  lVar9 = *param_1;
  plVar10 = (int64_t *)(lVar9 + 0x48);
  SystemCore_EncryptionEngine0();
  bVar3 = false;
  plVar12 = *(int64_t **)(lVar9 + 0x58);
  plVar4 = plVar10;
  if (plVar12 == (int64_t *)0x0) {
LAB_1800892ba:
    plVar5 = plVar10;
  }
  else {
    do {
      if (iStack_58 == 0) {
        bVar2 = false;
        plVar13 = (int64_t *)plVar12[1];
      }
      else {
        if ((int)plVar12[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar7 = pbStack_60;
          do {
            uVar8 = (uint)pbVar7[plVar12[5] - (int64_t)pbStack_60];
            iVar11 = *pbVar7 - uVar8;
            if (*pbVar7 != uVar8) break;
            pbVar7 = pbVar7 + 1;
          } while (uVar8 != 0);
          bVar2 = 0 < iVar11;
          if (iVar11 < 1) {
            plVar13 = (int64_t *)plVar12[1];
            goto LAB_18008927d;
          }
        }
        plVar13 = (int64_t *)*plVar12;
      }
LAB_18008927d:
      plVar5 = plVar12;
      if (bVar2) {
        plVar5 = plVar4;
      }
      plVar4 = plVar5;
      plVar12 = plVar13;
    } while (plVar13 != (int64_t *)0x0);
    if (plVar5 == plVar10) goto LAB_1800892ba;
    if ((int)plVar5[6] != 0) {
      if (iStack_58 != 0) {
        pbVar7 = (byte *)plVar5[5];
        lVar9 = (int64_t)pbStack_60 - (int64_t)pbVar7;
        do {
          bVar1 = *pbVar7;
          uVar8 = (uint)pbVar7[lVar9];
          if (bVar1 != uVar8) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
        if ((int)(bVar1 - uVar8) < 1) goto LAB_1800892bd;
      }
      goto LAB_1800892ba;
    }
  }
LAB_1800892bd:
  if (plVar5 == plVar10) {
    lVar9 = param_1[1];
    SystemCore_EncryptionEngine0(&puStack_48,param_2);
    bVar3 = true;
    plVar5 = (int64_t *)FUN_180058080(lVar9,auStackX_8,&puStack_48);
    if (*plVar5 == lVar9) {
      bVar2 = true;
      goto LAB_1800892fd;
    }
  }
  bVar2 = false;
LAB_1800892fd:
  if (bVar3) {
    puStack_48 = &system_data_buffer_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &system_state_ptr;
  }
  if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (bVar2) {
    plVar12 = *(int64_t **)*param_1;
    if (plVar12 == (int64_t *)0x0) {
      uVar6 = CONCAT71((int7)((uint64_t)*param_1 >> 8),1);
    }
    else {
      uVar6 = (**(code **)(*plVar12 + 8))(plVar12,param_2);
    }
  }
  else {
    uVar6 = (uint64_t)plVar5 & 0xffffffffffffff00;
  }
  return uVar6;
}





// 函数: void FUN_1800893b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800893b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))(param_1 + 0x60,0,0,param_4,0xfffffffffffffffe);
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))(param_1 + 0x40,0,0);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x20,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180089420(void)
void FUN_180089420(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int8_t auStack_c8 [32];
  void **ppuStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int64_t lStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [32];
  int8_t auStack_40 [4];
  int iStack_3c;
  uint64_t uStack_38;
  
  lVar3 = core_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  lVar2 = *system_main_module_state;
  uVar6 = 0;
  iVar5 = (int)(*(int64_t *)(lVar2 + 0x8b0) - *(int64_t *)(lVar2 + 0x8a8) >> 5);
  lVar10 = (int64_t)iVar5;
  uVar9 = uVar6;
  if (0 < iVar5) {
    do {
      puStack_98 = &system_data_buffer_ptr;
      uStack_80 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a8 = &puStack_78;
      puStack_78 = &processed_var_672_ptr;
      puStack_70 = auStack_60;
      uStack_68 = 0;
      auStack_60[0] = 0;
      auStack_40[0] = 0;
      iStack_3c = 0xffffffff;
      lVar8 = *(int64_t *)(lVar2 + 0x8a8) + uVar9;
      uVar1 = *(uint *)(lVar8 + 0x10);
      uVar7 = (uint64_t)uVar1;
      if (*(int64_t *)(lVar8 + 8) != 0) {
        CoreMemoryPoolProcessor(&puStack_98,uVar7);
      }
      if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lStack_90,*(uint64_t *)(lVar8 + 8),uVar7);
      }
      if (lStack_90 != 0) {
        *(int8_t *)(uVar7 + lStack_90) = 0;
      }
      uStack_80 = CONCAT44(*(int32_t *)(lVar8 + 0x1c),(int32_t)uStack_80);
      uStack_88 = uVar1;
      iStack_3c = (int)uVar6;
      cVar4 = FUN_1800873b0(uVar6,&puStack_78,auStack_40);
      if (cVar4 != '\0') {
        uVar7 = *(uint64_t *)(lVar3 + 0x10);
        if (uVar7 < *(uint64_t *)(lVar3 + 0x18)) {
          *(uint64_t *)(lVar3 + 0x10) = uVar7 + 0x60;
          ppuStack_a8 = (void **)uVar7;
          SystemCore_NetworkHandler0(uVar7);
          FUN_18004b640(uVar7 + 0x20,&puStack_78);
          *(int8_t *)(uVar7 + 0x58) = auStack_40[0];
          *(int *)(uVar7 + 0x5c) = iStack_3c;
        }
        else {
          FUN_18008dd40(lVar3 + 8,&puStack_98);
        }
      }
      puStack_78 = &system_state_ptr;
      ppuStack_a8 = &puStack_98;
      puStack_98 = &system_data_buffer_ptr;
      if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      puStack_98 = &system_state_ptr;
      uVar6 = (uint64_t)((int)uVar6 + 1);
      lVar10 = lVar10 + -1;
      uVar9 = uVar9 + 0x20;
    } while (lVar10 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_c8);
}





// 函数: void FUN_180089640(uint64_t *param_1)
void FUN_180089640(uint64_t *param_1)

{
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018008a218)
// WARNING: Removing unreachable block (ram,0x00018008a240)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




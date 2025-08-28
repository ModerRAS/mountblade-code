#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part005.c - 9 个函数

// 函数: void FUN_180653e8b(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180653e8b(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t unaff_RSI;
  int unaff_R12D;
  
  *(int64_t *)(unaff_RSI + 0x18) = param_1 + param_4;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((int64_t)unaff_R12D + *(int64_t *)(unaff_RSI + 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653ec0(int *param_1)
void FUN_180653ec0(int *param_1)

{
  if ((*param_1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653ef0(void)
void FUN_180653ef0(void)

{
  uint uVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int8_t *puVar7;
  int16_t *puVar8;
  void *puVar9;
  uint uVar10;
  uint64_t uVar11;
  int8_t auStack_338 [32];
  int8_t uStack_318;
  void *puStack_2f8;
  int16_t *puStack_2f0;
  int32_t uStack_2e8;
  uint64_t uStack_2e0;
  void *puStack_2d8;
  int32_t *puStack_2d0;
  int32_t uStack_2c8;
  uint64_t uStack_2c0;
  void *puStack_2b8;
  int8_t *puStack_2b0;
  uint uStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  void *puStack_270;
  int8_t *puStack_268;
  int32_t uStack_260;
  uint64_t uStack_258;
  int8_t auStack_210 [32];
  uint64_t uStack_1f0;
  int8_t auStack_1a8 [32];
  uint64_t uStack_188;
  void *puStack_180;
  int8_t *puStack_178;
  int32_t uStack_170;
  int8_t auStack_168 [16];
  int8_t auStack_158 [8];
  void *puStack_150;
  int iStack_148;
  uint64_t uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_338;
  puVar7 = (int8_t *)0x0;
  uVar10 = 0;
  uStack_298 = 0;
  uStack_1f0 = ui_system_memory;
  puStack_180 = &system_config_ptr;
  puStack_178 = auStack_168;
  auStack_168[0] = 0;
  uStack_170 = 6;
  strcpy_s(auStack_168,0x10,&unknown_var_2588_ptr);
  uStack_298 = 1;
  SystemCore_EncryptionEngine0(auStack_1a8,&puStack_180);
  uStack_298 = 0;
  puStack_180 = &system_state_ptr;
  FUN_180624730(auStack_158,auStack_1a8);
  puStack_270 = &system_data_buffer_ptr;
  uStack_258 = 0;
  puStack_268 = (int8_t *)0x0;
  uStack_260 = 0;
  FUN_1806277c0(&puStack_270,iStack_148);
  if (0 < iStack_148) {
    puVar9 = &system_buffer_ptr;
    if (puStack_150 != (void *)0x0) {
      puVar9 = puStack_150;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_268,puVar9,(int64_t)(iStack_148 + 1));
  }
  if ((puStack_150 != (void *)0x0) && (uStack_260 = 0, puStack_268 != (int8_t *)0x0)) {
    *puStack_268 = 0;
  }
  puStack_2d8 = &system_data_buffer_ptr;
  uStack_2c0 = 0;
  puStack_2d0 = (int32_t *)0x0;
  uStack_2c8 = 0;
  puVar5 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_2d0 = puVar5;
  uVar2 = FUN_18064e990(puVar5);
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar2);
  *puVar5 = 0x2f6e6962;
  *(int8_t *)(puVar5 + 1) = 0;
  uStack_2c8 = 4;
  lVar6 = FUN_180627ce0(&puStack_270,&puStack_180,&puStack_2d8);
  puStack_2b8 = &system_data_buffer_ptr;
  uStack_2a0 = 0;
  puStack_2b0 = (int8_t *)0x0;
  uStack_2a8 = 0;
  uStack_298 = 2;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar11 = (uint64_t)uVar1;
  uVar4 = 0;
  if (*(int64_t *)(lVar6 + 8) == 0) {
LAB_18065415f:
    uVar10 = uVar4;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar7,*(uint64_t *)(lVar6 + 8),uVar11);
    }
  }
  else if (uVar1 != 0) {
    iVar3 = uVar1 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar7 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar7 = 0;
    puStack_2b0 = puVar7;
    uVar4 = FUN_18064e990(puVar7);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar4);
    goto LAB_18065415f;
  }
  if (puVar7 != (int8_t *)0x0) {
    puVar7[uVar11] = 0;
  }
  uStack_2a0 = CONCAT44(*(int32_t *)(lVar6 + 0x1c),(int32_t)uStack_2a0);
  if (uVar1 + 0x15 != 0) {
    uVar4 = uVar1 + 0x16;
    uStack_2a8 = uVar1;
    if (puVar7 == (int8_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar7 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
      *puVar7 = 0;
    }
    else {
      if (uVar4 <= uVar10) goto LAB_1806541f1;
      uStack_318 = 0x13;
      puVar7 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar7,uVar4,0x10);
    }
    puStack_2b0 = puVar7;
    uVar2 = FUN_18064e990(puVar7);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar2);
  }
LAB_1806541f1:
  puVar5 = (int32_t *)(puVar7 + uVar11);
  *puVar5 = 0x366e6957;
  puVar5[1] = 0x68535f34;
  puVar5[2] = 0x69707069;
  puVar5[3] = 0x435f676e;
  *(int32_t *)(puVar7 + uVar11 + 0x10) = 0x6e65696c;
  *(int16_t *)(puVar7 + uVar11 + 0x14) = 0x74;
  puStack_2f8 = &system_data_buffer_ptr;
  uStack_2e0 = 0;
  puStack_2f0 = (int16_t *)0x0;
  uStack_2e8 = 0;
  uStack_2a8 = uVar1 + 0x15;
  puVar8 = (int16_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  puStack_2f0 = puVar8;
  uVar2 = FUN_18064e990(puVar8);
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar2);
  *puVar8 = 0x2f;
  uStack_2e8 = 1;
  FUN_180627ce0(&puStack_2b8,auStack_210,&puStack_2f8);
  puStack_2f8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar8);
}



uint64_t *
FUN_180655260(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_704_ptr;
  FUN_180651910();
  if ((param_2 & 1) != 0) {
    free(param_1,400,param_3,param_4,uVar1);
  }
  return param_1;
}



int32_t * FUN_1806552b0(uint64_t param_1,int32_t *param_2)

{
  *param_2 = 0;
  return param_2;
}



int FUN_1806552e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar3 = lStack_28;
  if (iStack_20 == 0x19) {
    iVar1 = strcmp(lStack_28,&unknown_var_952_ptr);
    if (iVar1 == 0) {
      iVar1 = 0x84;
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x18) {
    iVar1 = strcmp(lStack_28,&unknown_var_896_ptr);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      goto LAB_1806555a8;
    }
LAB_1806553fb:
    puVar4 = &unknown_var_1040_ptr;
LAB_180655402:
    iVar1 = strcmp(lVar3,puVar4);
    if (iVar1 == 0) {
      iVar1 = 4;
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x12) {
    iVar1 = strcmp(lStack_28,&unknown_var_928_ptr);
    if (iVar1 == 0) {
      iVar1 = 0xa0;
      goto LAB_1806555a8;
    }
LAB_18065555e:
    iVar1 = strcmp(lVar3,&unknown_var_1216_ptr);
    if (iVar1 == 0) {
      iVar1 = 8;
      goto LAB_1806555a8;
    }
    iVar1 = strcmp(lVar3,&unknown_var_1160_ptr);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      goto LAB_1806555a8;
    }
    puVar4 = &unknown_var_1184_ptr;
LAB_180655598:
    iVar1 = strcmp(lVar3,puVar4);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar1 = strcmp(lStack_28,&unknown_var_840_ptr);
    if (iVar1 == 0) {
      iVar1 = 0x204;
      goto LAB_1806555a8;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      iVar1 = strcmp(lStack_28,&unknown_var_872_ptr);
      if (iVar1 == 0) {
        iVar1 = 0x404;
        goto LAB_1806555a8;
      }
      puVar4 = &unknown_var_1088_ptr;
      goto LAB_180655402;
    }
    if (iStack_20 == 0x11) {
      iVar1 = strcmp(lStack_28,&unknown_var_1112_ptr);
      if (iVar1 == 0) {
        iVar1 = 0x50;
        goto LAB_1806555a8;
      }
    }
    else {
      if (iStack_20 == 0x18) goto LAB_1806553fb;
      if (iStack_20 == 0xb) {
        iVar1 = strcmp(lStack_28,&unknown_var_1072_ptr);
        if (iVar1 == 0) {
          iVar1 = 8;
          goto LAB_1806555a8;
        }
      }
      else if (iStack_20 == 0x16) {
        puVar4 = &unknown_var_1008_ptr;
LAB_1806554f3:
        iVar1 = strcmp(lStack_28,puVar4);
        if (iVar1 == 0) {
          iVar1 = 0xc;
          goto LAB_1806555a8;
        }
      }
      else {
        if (iStack_20 == 7) {
          lVar3 = 0;
          do {
            lVar2 = lVar3 + 1;
            if (*(char *)(lStack_28 + lVar3) != (&unknown_var_1032_ptr)[lVar3]) {
              lVar3 = 0;
              goto LAB_1806554a0;
            }
            lVar3 = lVar2;
          } while (lVar2 != 8);
          iVar1 = 0x10;
          goto LAB_1806555a8;
        }
        if (iStack_20 == 0xf) {
          iVar1 = strcmp(lStack_28,&unknown_var_992_ptr);
          if (iVar1 == 0) {
            iVar1 = 0x40;
            goto LAB_1806555a8;
          }
        }
        else {
          if (iStack_20 == 0x13) {
            puVar4 = &unknown_var_1240_ptr;
            goto LAB_1806554f3;
          }
          if (iStack_20 == 0xd) {
            puVar4 = &unknown_var_1264_ptr;
            goto LAB_180655598;
          }
          if (iStack_20 == 6) {
            lVar3 = 0;
            do {
              lVar2 = lVar3;
              if (*(char *)(lStack_28 + lVar2) != (&unknown_var_1204_ptr)[lVar2]) goto LAB_1806555a6;
              lVar3 = lVar2 + 1;
            } while (lVar2 + 1 != 7);
            iVar1 = (int)lVar2 + 0x1e;
            goto LAB_1806555a8;
          }
          if (iStack_20 == 0x12) goto LAB_18065555e;
        }
      }
    }
  }
LAB_1806555a6:
  iVar1 = 0;
LAB_1806555a8:
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return iVar1;
  while (lVar3 = lVar2, lVar2 != 8) {
LAB_1806554a0:
    lVar2 = lVar3 + 1;
    if (*(char *)(lStack_28 + lVar3) != (&unknown_var_984_ptr)[lVar3]) goto LAB_1806555a6;
  }
  iVar1 = 0x30;
  goto LAB_1806555a8;
}



uint64_t FUN_1806555f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *puVar6;
  uint64_t uVar7;
  bool bVar8;
  void *puStack_50;
  char *pcStack_48;
  int iStack_40;
  int32_t uStack_38;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_180627910(&puStack_50,param_2);
  lVar5 = lStack_28;
  if (iStack_20 == 0x19) {
    iVar3 = strcmp(lStack_28,&unknown_var_952_ptr);
    if (iVar3 == 0) {
      if (iStack_40 == 7) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&unknown_var_1136_ptr)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 8);
      }
      else if (iStack_40 == 9) {
        puVar6 = &unknown_var_1144_ptr;
LAB_180655bdf:
        iVar3 = strcmp(pcStack_48,puVar6);
        bVar8 = iVar3 == 0;
LAB_180655bea:
        if (bVar8) {
          uVar7 = 4;
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 0x18) {
    iVar3 = strcmp(lStack_28,&unknown_var_896_ptr);
    if ((iVar3 == 0) && (iStack_40 == 7)) {
      uVar7 = 8;
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&unknown_var_1344_ptr)[lVar5]) {
          lVar5 = 0;
          goto LAB_180655761;
        }
        lVar5 = lVar4;
      } while (lVar4 != 8);
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar3 = strcmp(lStack_28,&unknown_var_840_ptr);
    if ((iVar3 == 0) && (iStack_40 == 4)) {
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&unknown_var_7680_ptr)[lVar5]) {
          uVar2 = 0;
          goto LAB_1806557d3;
        }
        lVar5 = lVar4;
      } while (lVar4 != 5);
    }
  }
  else if (iStack_20 == 0x15) {
    iVar3 = strcmp(lStack_28,&unknown_var_872_ptr);
    if (iVar3 == 0) {
      if (iStack_40 == 0xb) {
        strcmp(pcStack_48,&unknown_var_1352_ptr);
      }
      else if ((iStack_40 == 9) && (iVar3 = strcmp(pcStack_48,&unknown_var_1328_ptr), iVar3 == 0)) {
        uVar7 = 0x204;
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0x11) {
    iVar3 = strcmp(lStack_28,&unknown_var_1112_ptr);
    if (iVar3 == 0) {
      if (iStack_40 == 6) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&unknown_var_4344_ptr)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 7);
      }
      else if (iStack_40 == 8) {
        puVar6 = &unknown_var_8888_ptr;
LAB_180655d38:
        iVar3 = strcmp(pcStack_48,puVar6);
        if (iVar3 == 0) {
          uVar7 = 0x10;
          goto LAB_180655685;
        }
      }
      else if (iStack_40 == 5) {
        lVar5 = 0;
        do {
          lVar4 = lVar5;
          if (pcStack_48[lVar4] != (&unknown_var_8408_ptr)[lVar4]) goto LAB_180655683;
          lVar5 = lVar4 + 1;
        } while (lVar4 + 1 != 6);
        uVar7 = (uint64_t)((int)lVar4 + 0x3b);
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0xb) {
    iVar3 = strcmp(lStack_28,&unknown_var_1072_ptr);
    if (iVar3 == 0) {
LAB_180655911:
      if ((iStack_40 == 1) &&
         (((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')) && (*pcStack_48 == 'y')))) {
        bVar8 = pcStack_48[1] == '\0';
        goto LAB_180655bea;
      }
    }
  }
  else if (iStack_20 == 0x16) {
    iVar3 = strcmp(lStack_28,&unknown_var_1008_ptr);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 4;
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'z') {
        bVar8 = pcStack_48[1] == '\0';
LAB_1806559dc:
        if (bVar8) {
          uVar7 = 8;
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 7) {
    uVar7 = 8;
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      if (*(char *)(lStack_28 + lVar5) != (&unknown_var_1032_ptr)[lVar5]) {
        lVar5 = 0;
        goto LAB_180655a80;
      }
      lVar5 = lVar4;
    } while (lVar4 != 8);
    if ((((iStack_40 == 1) && ((*pcStack_48 != 's' || (pcStack_48[1] != '\0')))) &&
        (*pcStack_48 == 'f')) && (pcStack_48[1] == '\0')) goto LAB_180655685;
  }
  else if (iStack_20 == 0xf) {
    iVar3 = strcmp(lStack_28,&unknown_var_992_ptr);
    if (iVar3 == 0) {
      if (iStack_40 == 3) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&unknown_var_1316_ptr)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 4);
      }
      else if (((iStack_40 == 1) && (*pcStack_48 == 'o')) && (pcStack_48[1] == '\0')) {
        uVar7 = 0x30;
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0x13) {
    iVar3 = strcmp(lStack_28,&unknown_var_1240_ptr);
    if (iVar3 == 0) {
      if (iStack_40 == 10) {
        strcmp(pcStack_48,&unknown_var_1280_ptr);
      }
      else {
        if (iStack_40 == 0x10) {
          puVar6 = &unknown_var_1296_ptr;
          goto LAB_180655bdf;
        }
        if (iStack_40 == 0x11) {
          iVar3 = strcmp(pcStack_48,&unknown_var_1400_ptr);
          bVar8 = iVar3 == 0;
          goto LAB_1806559dc;
        }
      }
    }
  }
  else if (iStack_20 == 0xd) {
    iVar3 = strcmp(lStack_28,&unknown_var_1264_ptr);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'w' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'x') && (pcStack_48[1] == '\0')) {
        uVar7 = 4;
        goto LAB_180655685;
      }
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 8;
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'z') {
        cVar1 = pcStack_48[1];
LAB_180655e30:
        if (cVar1 == '\0') {
          uVar7 = 0xc;
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 6) {
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      if (*(char *)(lStack_28 + lVar5) != (&unknown_var_1204_ptr)[lVar5]) goto LAB_180655683;
      lVar5 = lVar4;
    } while (lVar4 != 7);
    if (iStack_40 == 7) {
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&unknown_var_1424_ptr)[lVar5]) break;
        lVar5 = lVar4;
      } while (lVar4 != 8);
    }
    else {
      if (iStack_40 == 10) {
        puVar6 = &unknown_var_1368_ptr;
        goto LAB_180655d38;
      }
      if (iStack_40 == 0xd) {
        iVar3 = strcmp(pcStack_48,&unknown_var_1384_ptr);
        bVar8 = iVar3 == 0;
        goto LAB_180655afa;
      }
    }
  }
  else if (iStack_20 == 0x12) {
    iVar3 = strcmp(lStack_28,&unknown_var_1216_ptr);
    if (iVar3 == 0) goto LAB_180655911;
    iVar3 = strcmp(lVar5,&unknown_var_1160_ptr);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 4;
        goto LAB_180655685;
      }
      if ((*pcStack_48 == 'z') && (pcStack_48[1] == '\0')) {
        uVar7 = 8;
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'w') {
        cVar1 = pcStack_48[1];
        goto LAB_180655e30;
      }
    }
  }
  goto LAB_180655683;
  while (uVar2 = uVar7 + 1, uVar7 + 1 != 5) {
LAB_1806557d3:
    uVar7 = uVar2;
    if (pcStack_48[uVar7] != (&unknown_var_2796_ptr)[uVar7]) goto LAB_180655683;
  }
  uVar7 = uVar7 & 0xffffffff;
  goto LAB_180655685;
  while (lVar5 = lVar4, lVar4 != 8) {
LAB_180655761:
    lVar4 = lVar5 + 1;
    if (pcStack_48[lVar5] != (&unknown_var_1136_ptr)[lVar5]) goto LAB_180655683;
  }
  goto LAB_180655685;
  while (lVar5 = lVar4, lVar4 != 8) {
LAB_180655a80:
    lVar4 = lVar5 + 1;
    if (*(char *)(lStack_28 + lVar5) != (&unknown_var_984_ptr)[lVar5]) goto LAB_180655683;
  }
  if ((iStack_40 == 1) && ((*pcStack_48 != 's' || (pcStack_48[1] != '\0')))) {
    if ((*pcStack_48 == 'f') && (pcStack_48[1] == '\0')) {
      uVar7 = 0x10;
      goto LAB_180655685;
    }
    if (*pcStack_48 == 'u') {
      bVar8 = pcStack_48[1] == '\0';
LAB_180655afa:
      if (bVar8) {
        uVar7 = 0x20;
        goto LAB_180655685;
      }
    }
  }
LAB_180655683:
  uVar7 = 0;
LAB_180655685:
  puStack_50 = &system_data_buffer_ptr;
  if (pcStack_48 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  pcStack_48 = (char *)0x0;
  uStack_38 = 0;
  puStack_50 = &system_state_ptr;
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180655e60(int param_1,uint64_t *param_2)
void FUN_180655e60(int param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  
  lVar3 = *ui_system_data_memory;
  if ((uint64_t)(int64_t)param_1 < (uint64_t)((ui_system_data_memory[1] - lVar3) / 0x84)) {
    lVar20 = (int64_t)param_1 * 0x84;
    puVar1 = (uint64_t *)(lVar20 + 0x60 + lVar3);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar2 = *(int32_t *)(lVar20 + 0x80 + lVar3);
    puVar1 = (uint64_t *)(lVar20 + 0x70 + lVar3);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = ((uint64_t *)(lVar20 + lVar3))[1];
    puVar1 = (uint64_t *)(lVar20 + 0x10 + lVar3);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x20 + lVar3);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x30 + lVar3);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x40 + lVar3);
    uVar16 = *puVar1;
    uVar17 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x50 + lVar3);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    *param_2 = *(uint64_t *)(lVar20 + lVar3);
    param_2[1] = uVar9;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
    param_2[4] = uVar12;
    param_2[5] = uVar13;
    param_2[6] = uVar14;
    param_2[7] = uVar15;
    param_2[8] = uVar16;
    param_2[9] = uVar17;
    param_2[10] = uVar18;
    param_2[0xb] = uVar19;
    param_2[0xc] = uVar5;
    param_2[0xd] = uVar6;
    param_2[0xe] = uVar7;
    param_2[0xf] = uVar8;
    *(int32_t *)(param_2 + 0x10) = uVar2;
    return;
  }
  FUN_180623a30();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}





// 函数: void FUN_180655ea6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180655ea6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t in_RAX;
  int64_t in_R10;
  
  puVar1 = (uint64_t *)(in_RAX + 0x60 + in_R10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = *(int32_t *)(in_RAX + 0x80 + in_R10);
  puVar1 = (uint64_t *)(in_RAX + 0x70 + in_R10);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = ((uint64_t *)(in_RAX + in_R10))[1];
  puVar1 = (uint64_t *)(in_RAX + 0x10 + in_R10);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x20 + in_R10);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x30 + in_R10);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x40 + in_R10);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x50 + in_R10);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  *param_3 = *(uint64_t *)(in_RAX + in_R10);
  param_3[1] = uVar7;
  param_3[2] = uVar8;
  param_3[3] = uVar9;
  param_3[4] = uVar10;
  param_3[5] = uVar11;
  param_3[6] = uVar12;
  param_3[7] = uVar13;
  param_3[8] = uVar14;
  param_3[9] = uVar15;
  param_3[10] = uVar16;
  param_3[0xb] = uVar17;
  param_3[0xc] = uVar3;
  param_3[0xd] = uVar4;
  param_3[0xe] = uVar5;
  param_3[0xf] = uVar6;
  *(int32_t *)(param_3 + 0x10) = uVar2;
  return;
}





// 函数: void FUN_180655f24(void)
void FUN_180655f24(void)

{
  code *pcVar1;
  
  FUN_180623a30();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t
FUN_180655f50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_8;
  int64_t alStack_30 [3];
  int32_t uStack_18;
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  alStack_30[2] = 0;
  uStack_18 = 3;
  uStackX_8 = (int64_t *)((uint64_t)alStack_30 & 0xffffffff00000000);
  FUN_180194a50(alStack_30,&uStackX_8,param_3,param_4,0xfffffffffffffffe,&unknown_var_8624_ptr,0);
  FUN_180194a50(alStack_30,(int64_t)&uStackX_8 + 1);
  FUN_180194a50(alStack_30,(int64_t)&uStackX_8 + 2);
  FUN_180194a50(alStack_30,(int64_t)&uStackX_8 + 3);
  uStackX_8 = alStack_30;
  if (alStack_30[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180656020(int32_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  plVar2 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&unknown_var_8624_ptr;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 5) = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}





// 函数: void FUN_180656110(int64_t param_1,int32_t param_2)
void FUN_180656110(int64_t param_1,int32_t param_2)

{
  int32_t uStackX_10;
  
  param_1 = param_1 + 0x10;
  uStackX_10 = param_2;
  FUN_180194a50(param_1,&uStackX_10);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 1);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 2);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 3);
  return;
}





// 函数: void FUN_180656160(int64_t param_1,int32_t param_2)
void FUN_180656160(int64_t param_1,int32_t param_2)

{
  int32_t uStackX_10;
  
  param_1 = param_1 + 0x10;
  uStackX_10 = param_2;
  FUN_180194a50(param_1,&uStackX_10);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 1);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 2);
  FUN_180194a50(param_1,(int64_t)&uStackX_10 + 3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1806561d0(int32_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  plVar2 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&unknown_var_1440_ptr;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 5) = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}



uint64_t *
FUN_1806562b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180057830();
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



int64_t * FUN_180656340(int64_t *param_1,int64_t param_2,int param_3)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x10) + (int64_t)param_3 * 8);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}





// 函数: void FUN_1806563a0(int64_t param_1)
void FUN_1806563a0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x18);
  plVar2 = *(int64_t **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    do {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x10);
    return;
  }
  *(int64_t **)(param_1 + 0x18) = plVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180656410(int32_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  plVar2 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&unknown_var_1544_ptr;
  plVar2[2] = (int64_t)&system_state_ptr;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  plVar2[2] = (int64_t)&system_data_buffer_ptr;
  plVar2[5] = 0;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}



uint64_t *
FUN_180656500(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  param_1[2] = &system_data_buffer_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806565a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  FUN_180627ae0(&puStack_30,param_1 + 0x10,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return uVar1;
}






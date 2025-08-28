#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part037.c - 7 个函数

// 函数: void FUN_1802a7bf0(int64_t param_1,int param_2,uint64_t *param_3)
void FUN_1802a7bf0(int64_t param_1,int param_2,uint64_t *param_3)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int8_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  int in_stack_00000038;
  int8_t auStack_b88 [40];
  int *piStack_b60;
  int32_t uStack_b58;
  int32_t *puStack_b48;
  uint uStack_b40;
  int iStack_b3c;
  uint auStack_b38 [2];
  void *puStack_b30;
  uint64_t uStack_b28;
  int32_t uStack_b20;
  uint64_t uStack_b18;
  int aiStack_b10 [4];
  uint64_t uStack_b00;
  int8_t auStack_af8 [16];
  uint64_t uStack_ae8;
  int32_t uStack_ac8;
  int64_t lStack_a40;
  int64_t lStack_a38;
  int64_t lStack_a30;
  int64_t lStack_a28;
  int8_t auStack_a18 [16];
  uint64_t uStack_a08;
  int32_t uStack_9e8;
  int64_t lStack_960;
  int64_t lStack_958;
  int64_t lStack_950;
  int64_t lStack_948;
  int8_t auStack_938 [2304];
  uint64_t uStack_38;
  
  uStack_b00 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b88;
  *(int32_t *)((int64_t)param_3 + 0x62) = 0;
  puVar4 = (int32_t *)0x0;
  *(uint64_t *)((int64_t)param_3 + 0x54) = 0;
  *(int32_t *)((int64_t)param_3 + 0x5c) = 0;
  *(int16_t *)(param_3 + 0xc) = 0;
  *(int8_t *)((int64_t)param_3 + 0x66) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x14) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x1c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x24) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x2c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x34) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x3c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x44) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x4c) = 0;
  puStack_b30 = &system_data_buffer_ptr;
  uStack_b18 = 0;
  uStack_b28 = 0;
  uStack_b20 = 0;
  if (in_stack_00000038 == 0xc) {
    uStack_ae8 = 0;
    uStack_ac8 = 0;
    lStack_a38 = param_1 + param_2;
    uStack_b58 = 0x10;
    piStack_b60 = aiStack_b10;
    lStack_a40 = param_1;
    lStack_a30 = param_1;
    lStack_a28 = lStack_a38;
    puVar3 = (int32_t *)FUN_18041e290(auStack_af8);
    uVar12 = auStack_b38[0];
    uVar11 = uStack_b40;
    if (puVar3 == (int32_t *)0x0) {
      puStack_b48 = (int32_t *)0x0;
      iVar6 = uStack_b40 * iStack_b3c * 2;
    }
    else {
      puStack_b48 = puVar3;
      if (aiStack_b10[0] != 0x10) {
        iVar6 = uStack_b40 * auStack_b38[0] * iStack_b3c;
        lVar5 = FUN_18062b420(system_memory_pool_ptr,(int64_t)(iVar6 * 2));
        if (lVar5 != 0) {
          if (0 < iVar6) {
            lVar8 = 0;
            do {
              *(ushort *)(lVar5 + lVar8 * 2) = (ushort)*(byte *)(lVar8 + (int64_t)puVar3) * 0x101;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar6);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_b48 = (int32_t *)0x0;
      }
      puVar4 = puStack_b48;
      if (system_system_data_memory != 0) {
        FUN_18041eb10(puStack_b48,uStack_b40,auStack_b38[0],iStack_b3c * 2);
      }
      iVar6 = uStack_b40 * iStack_b3c * 2;
    }
  }
  else {
    uStack_a08 = 0;
    uStack_9e8 = 0;
    lStack_958 = param_1 + param_2;
    lStack_960 = param_1;
    lStack_950 = param_1;
    lStack_948 = lStack_958;
    puVar4 = (int32_t *)FUN_18041ec30(auStack_a18,&uStack_b40,auStack_b38,&iStack_b3c);
    iVar6 = uStack_b40 * iStack_b3c;
    uVar12 = auStack_b38[0];
    uVar11 = uStack_b40;
    puStack_b48 = puVar4;
  }
  if (puVar4 != (int32_t *)0x0) {
    *(short *)((int64_t)param_3 + 0x5c) = (short)uVar11;
    *(short *)((int64_t)param_3 + 0x5e) = (short)uVar12;
    *(int32_t *)(param_3 + 0xc) = 0x10001;
    *(int16_t *)((int64_t)param_3 + 100) = 0x102;
    if (iStack_b3c == 1) {
      *(uint *)((int64_t)param_3 + 0x54) = (in_stack_00000038 == 0xc) + 0xb;
      FUN_1802a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar4 = puStack_b48;
      if (0 < (int)uVar12) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,puStack_b48,(int64_t)iVar6);
      }
    }
    else if (iStack_b3c == 3) {
      *(int32_t *)((int64_t)param_3 + 0x54) = 0x29;
      FUN_1802a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar4 = puStack_b48;
      if (0 < (int)uVar12) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,puStack_b48,(int64_t)iVar6);
      }
    }
    else if (iStack_b3c == 4) {
      *(int32_t *)((int64_t)param_3 + 0x54) = 1;
      *(uint *)(param_3 + 0xb) = *(uint *)(param_3 + 0xb) | 0x8000;
      FUN_1802a1bc0(param_3);
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar7 = (int8_t *)*param_3;
      if (uVar11 != 0) {
        uVar10 = (uint64_t)uVar11;
        puVar3 = puVar4;
        do {
          if (uVar12 != 0) {
            uVar9 = (uint64_t)uVar12;
            do {
              uVar1 = *puVar3;
              *puVar7 = (char)((uint)uVar1 >> 0x10);
              puVar7[1] = *(int8_t *)((int64_t)puVar3 + 1);
              puVar7[2] = *(int8_t *)puVar3;
              puVar7[3] = (char)((uint)uVar1 >> 0x18);
              puVar7 = puVar7 + 4;
              puVar3 = puVar3 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  uStack_b28 = 0;
  uStack_b18 = uStack_b18 & 0xffffffff00000000;
  puStack_b30 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_b88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8080(int64_t param_1,int64_t *param_2,int param_3)
void FUN_1802a8080(int64_t param_1,int64_t *param_2,int param_3)

{
  int16_t uVar1;
  int16_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  int8_t auStack_298 [32];
  int64_t lStack_278;
  int *piStack_270;
  void *puStack_268;
  void *puStack_260;
  int32_t uStack_250;
  int aiStack_248 [2];
  uint64_t uStack_240;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
  iVar3 = func_0x0001802a0ec0(*(int32_t *)((int64_t)param_2 + 0x54));
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  if (param_3 == 1) {
    uVar5 = FUN_18062c100(&puStack_268,param_1);
    FUN_18062c1e0(uVar5,1);
    puStack_268 = &system_data_buffer_ptr;
    if (puStack_260 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_260 = (void *)0x0;
    uStack_250 = 0;
    puStack_268 = &system_state_ptr;
    lVar6 = *param_2;
    uVar1 = *(int16_t *)((int64_t)param_2 + 0x5e);
    uVar2 = *(int16_t *)((int64_t)param_2 + 0x5c);
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    iVar4 = fopen_s(&puStack_268,puVar7,&unknown_var_9772_ptr);
    puVar7 = puStack_268;
    if (iVar4 != 0) {
      puVar7 = (void *)0x0;
    }
    puStack_268 = &unknown_var_1056_ptr;
    puStack_260 = puVar7;
    if (puVar7 == (void *)0x0) goto LAB_1802a83bc;
    lStack_278 = lVar6;
    FUN_18042da00(&puStack_268,uVar2,uVar1,iVar3);
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        uVar5 = FUN_18062c100(&puStack_268,param_1);
        FUN_18062c1e0(uVar5,1);
        puStack_268 = &system_data_buffer_ptr;
        if (puStack_260 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_260 = (void *)0x0;
        uStack_250 = 0;
        puStack_268 = &system_state_ptr;
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 8) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 8);
        }
        piStack_270 = aiStack_248;
        lStack_278 = CONCAT44(lStack_278._4_4_,iVar3);
        lVar6 = FUN_18042eee0(*param_2);
        if (lVar6 != 0) {
          iVar3 = fopen_s(&puStack_268,puVar7,&unknown_var_9772_ptr);
          puVar7 = puStack_268;
          if (iVar3 != 0) {
            puVar7 = (void *)0x0;
          }
          puStack_268 = puVar7;
          if (puVar7 == (void *)0x0) {
            free();
          }
          else {
            fwrite(lVar6,1,(int64_t)aiStack_248[0],puVar7);
            fclose(puVar7);
            free(lVar6);
          }
        }
      }
      else if (system_data_8dac == '\0') {



// 函数: void FUN_1802a83f0(uint64_t param_1,uint64_t param_2)
void FUN_1802a83f0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int8_t auStack_318 [32];
  int32_t uStack_2f8;
  int32_t uStack_2f4;
  int32_t uStack_2f0;
  uint64_t uStack_2e8;
  void *puStack_2e0;
  int64_t lStack_2d8;
  uint uStack_2d0;
  int32_t uStack_2c8;
  void *puStack_2c0;
  void *puStack_2b8;
  int32_t uStack_2a8;
  uint64_t uStack_298;
  void *apuStack_290 [5];
  void *apuStack_268 [2];
  int32_t uStack_258;
  int32_t uStack_254;
  int32_t uStack_250;
  int32_t uStack_24c;
  uint64_t uStack_248;
  uint64_t uStack_240;
  int32_t uStack_238;
  int32_t uStack_234;
  int8_t auStack_230 [128];
  int8_t *puStack_1b0;
  int8_t *puStack_1a8;
  int8_t *puStack_1a0;
  int8_t *puStack_198;
  uint64_t uStack_48;
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_318;
  uVar10 = 0;
  uVar4 = FUN_180624440(apuStack_268,param_1);
  FUN_1806279c0(&puStack_2c0,uVar4);
  apuStack_268[0] = &system_state_ptr;
  uVar4 = FUN_180627490(apuStack_290,&puStack_2c0);
  FUN_1806279c0(&puStack_2e0,uVar4);
  apuStack_290[0] = &system_state_ptr;
  uVar6 = uVar10;
  uVar7 = uVar10;
  if (uStack_2d0 != 0) {
    do {
      if ((byte)(*(char *)(lStack_2d8 + uVar6) + 0xbfU) < 0x1a) {
        *(char *)(lStack_2d8 + uVar6) = *(char *)(lStack_2d8 + uVar6) + ' ';
      }
      uVar9 = (int)uVar7 + 1;
      uVar6 = uVar6 + 1;
      uVar7 = (uint64_t)uVar9;
    } while (uVar9 < uStack_2d0);
  }
  uVar6 = uVar10;
  if (uStack_2d0 == 4) {
    do {
      uVar7 = uVar6 + 1;
      if (*(char *)(lStack_2d8 + uVar6) != (&system_data_2bf0)[uVar6]) goto LAB_1802a84f9;
      uVar6 = uVar7;
    } while (uVar7 != 5);
    FUN_18041dfa0(&puStack_2c0,param_2);
  }
  else {
LAB_1802a84f9:
    puVar8 = &system_buffer_ptr;
    if (puStack_2b8 != (void *)0x0) {
      puVar8 = puStack_2b8;
    }
    iVar3 = fopen_s(&uStack_2e8,puVar8,&unknown_var_4880_ptr);
    uStack_240 = uStack_2e8;
    if (iVar3 != 0) {
      uStack_240 = uVar10;
    }
    if (uStack_240 != 0) {
      uStack_2e8 = uStack_240;
      ftell(uStack_240);
      uStack_258 = system_system_control_memory;
      uStack_254 = uRam0000000180bf5c1c;
      uStack_250 = uRam0000000180bf5c20;
      uStack_24c = uRam0000000180bf5c24;
      uStack_248 = system_system_control_memory;
      uStack_234 = 0x80;
      uStack_238 = 1;
      puStack_1a0 = auStack_230;
      iVar3 = func_0x00018041e1e0(uStack_240,auStack_230,0x80);
      if (iVar3 == 0) {
        uStack_238 = 0;
        puStack_1a8 = auStack_230 + 1;
        auStack_230[0] = 0;
      }
      else {
        puStack_1a8 = auStack_230 + iVar3;
      }
      puStack_1b0 = auStack_230;
      puStack_198 = puStack_1a8;
      plVar5 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,0x4888,0x22);
      *plVar5 = (int64_t)apuStack_268;
      iVar3 = FUN_180423010(plVar5,2);
      if (iVar3 == 0) {
        lVar1 = *plVar5;
        *(uint64_t *)(lVar1 + 0xb8) = *(uint64_t *)(lVar1 + 200);
        *(uint64_t *)(lVar1 + 0xc0) = *(uint64_t *)(lVar1 + 0xd0);
      }
      else {
        puVar2 = (int32_t *)*plVar5;
        uStack_2f4 = *puVar2;
        uStack_2f0 = puVar2[1];
        uStack_2f8 = 1;
        if (2 < (int)puVar2[2]) {
          uStack_2f8 = 3;
        }
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar5);
    }
    uStack_2e8 = 0;
  }
  puStack_2e0 = &system_data_buffer_ptr;
  if (lStack_2d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2d8 = 0;
  uStack_2c8 = 0;
  puStack_2e0 = &system_state_ptr;
  puStack_2c0 = &system_data_buffer_ptr;
  if (puStack_2b8 == (void *)0x0) {
    puStack_2b8 = (void *)0x0;
    uStack_2a8 = 0;
    puStack_2c0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_318);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8770(void)
void FUN_1802a8770(void)

{
  uint64_t uVar1;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [16];
  void *puStack_40;
  int8_t *puStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  uint64_t uStack_18;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  system_system_data_memory = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
  *system_system_data_memory = 0;
  system_system_data_memory[1] = 0;
  system_system_data_memory[2] = 0;
  *(int32_t *)(system_system_data_memory + 3) = 3;
  puStack_78 = system_system_data_memory;
  system_system_data_memory = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
  *system_system_data_memory = 0;
  system_system_data_memory[1] = 0;
  system_system_data_memory[2] = 0;
  *(int32_t *)(system_system_data_memory + 3) = 3;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  puStack_78 = system_system_data_memory;
  strcpy_s(auStack_50,0x10,&unknown_var_7056_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&unknown_var_7048_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_40);
  }
  puStack_40 = &system_state_ptr;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&system_data_2bf0);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&unknown_var_7040_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_40);
  }
  puStack_40 = &system_state_ptr;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&unknown_var_7072_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&system_data_3fc0);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_40);
  }
  puStack_40 = &system_state_ptr;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&unknown_var_7140_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&unknown_var_7032_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_40);
  }
  puStack_40 = &system_state_ptr;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&unknown_var_3148_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 6;
  strcpy_s(auStack_28,0x10,&unknown_var_3208_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_40);
  }
  puStack_40 = &system_state_ptr;
  puStack_68 = &system_config_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&unknown_var_3216_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(system_system_data_memory,&puStack_68);
  }
  puStack_68 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8cf0(int64_t param_1,uint param_2,int64_t param_3)
void FUN_1802a8cf0(int64_t param_1,uint param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int8_t auStack_2f8 [32];
  void *puStack_2d8;
  void *puStack_2d0;
  uint64_t uStack_2c8;
  int64_t *plStack_2b8;
  int16_t uStack_2a8;
  int32_t uStack_2a4;
  int32_t uStack_2a0;
  int32_t uStack_29c;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int64_t alStack_288 [3];
  int32_t uStack_270;
  uint64_t uStack_268;
  int8_t auStack_260 [56];
  int8_t auStack_228 [512];
  uint64_t uStack_28;
  
  uStack_268 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  FUN_1801ec5c0(auStack_260,&unknown_var_3160_ptr);
  uVar4 = func_0x000180220c90(*(int32_t *)(param_3 + 0x54));
  strcpy_s(param_3 + 0x14,0x40,uVar4);
  uVar1 = *(uint *)(param_3 + 0x54);
  if (uVar1 - 0xe < 9) goto LAB_1802a912b;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 6) {
LAB_1802a8dab:
    if (1 < iVar2) {
      lVar5 = *(int64_t *)(param_1 + 8);
      lVar6 = (int64_t)(iVar2 + -2);
      if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'd')) &&
         (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
      if (1 < iVar2) {
        lVar5 = *(int64_t *)(param_1 + 8);
        lVar6 = (int64_t)(iVar2 + -2);
        if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 's')) &&
           (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
        if (1 < iVar2) {
          lVar5 = *(int64_t *)(param_1 + 8);
          lVar6 = (int64_t)(iVar2 + -2);
          if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'n')) &&
             (*(char *)(lVar5 + 2 + lVar6) == '\0')) {
            cVar3 = FUN_1802a9450(param_3);
            if (cVar3 == '\0') {
              uVar4 = func_0x000180220c90(*(int32_t *)(param_3 + 0x54));
              puVar7 = &unknown_var_3344_ptr;
              goto LAB_1802a8ef5;
            }
            goto LAB_1802a8f12;
          }
          if (1 < iVar2) {
            lVar5 = *(int64_t *)(param_1 + 8);
            lVar6 = (int64_t)(iVar2 + -2);
            if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'h')) &&
               (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
          }
        }
      }
    }
    if ((((uVar1 < 0xb) || ((0xc < uVar1 && (1 < uVar1 - 0x2b)))) &&
        ((*(uint *)(param_3 + 0x58) & 0x4000000) != 0)) &&
       (cVar3 = FUN_1802a9bc0(param_3), cVar3 == '\0')) {
      uVar4 = func_0x000180220c90(*(int32_t *)(param_3 + 0x54));
      puVar7 = &unknown_var_3232_ptr;
LAB_1802a8ef5:
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_1 + 8);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,puVar7,puVar8,uVar4);
    }
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      if (*(char *)(*(int64_t *)(param_1 + 8) + (int64_t)(iVar2 + -6) + lVar5) !=
          (&unknown_var_3200_ptr)[lVar5]) goto LAB_1802a8dab;
      lVar5 = lVar6;
    } while (lVar6 != 7);
  }
LAB_1802a8f12:
  if (((param_2 & 1) != 0) && ((*(uint *)(param_3 + 0x58) & 0x1c000001) == 0)) {
    plStack_2b8 = alStack_288;
    alStack_288[0] = 0;
    alStack_288[1] = 0;
    alStack_288[2] = 0;
    uStack_270 = 3;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    cVar3 = FUN_1802a9170(param_3);
    if (cVar3 == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 8);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_3384_ptr,puVar7);
    }
    plStack_2b8 = alStack_288;
    if (alStack_288[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (((param_2 & 2) != 0) && ((*(uint *)(param_3 + 0x58) & 0x10000020) == 0)) {
    uStack_2c8 = func_0x000180220c90(*(int32_t *)(param_3 + 0x54));
    puStack_2d0 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puStack_2d0 = *(void **)(param_1 + 8);
    }
    puStack_2d8 = &unknown_var_3280_ptr;
    FUN_1800623b0(system_message_context,0,0x10000000000,8);
    uVar1 = *(uint *)(param_3 + 0x54);
    if ((uVar1 < 0xe) || ((0x12 < uVar1 && (2 < uVar1 - 0x14)))) {
      if (system_data_8daa == '\0') {



// 函数: void FUN_1802a9170(int64_t param_1)
void FUN_1802a9170(int64_t param_1)

{
  int8_t auStack_248 [32];
  int32_t uStack_228;
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  if (*(char *)(param_1 + 100) == '\x02') {
    if (system_data_8dab == '\0') {



// 函数: void FUN_1802aa270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802aa270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t *puVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  int8_t auStackX_8 [8];
  uint64_t uStackX_18;
  
  uStackX_18 = param_3;
  uVar4 = FUN_1808f8e50(0x5f8ba57,param_4,param_2,0,0x13);
  bVar6 = (uVar4 & 0xfff00000) != 0xbad00000;
  *(bool *)(param_1 + 0xd8) = bVar6;
  if (!bVar6) {
    *(int8_t *)(param_1 + 0xd9) = 0;
    return;
  }
  uVar4 = NVSDK_NGX_D3D11_GetParameters(param_1 + 0xe0);
  if (((uVar4 & 0xfff00000) == 0xbad00000) &&
     (*(int8_t *)(param_1 + 0xd9) = 0, *(char *)(param_1 + 0xd8) != '\0')) {
    FUN_1802aa4b0(param_1);
    if (*(int64_t *)(param_1 + 0xe8) != 0) {
      FUN_180626f80(&unknown_var_3648_ptr);
      if (*(char *)(param_1 + 0xd8) != '\0') {
        FUN_1802aa4b0(param_1);
        if (*(int64_t *)(param_1 + 0xe8) != 0) {
          NVSDK_NGX_D3D11_ReleaseFeature();
        }
        *(uint64_t *)(param_1 + 0xe8) = 0;
      }
    }
    NVSDK_NGX_D3D11_Shutdown();
    *(int8_t *)(param_1 + 0xd8) = 0;
  }
  lVar3 = SYSTEM_STATE_MANAGER;
  *(int8_t *)(param_1 + 0xd9) = 1;
  iVar1 = *(int *)(lVar3 + 0x1d50);
  iVar2 = *(int *)(lVar3 + 0x1dc0);
  uStackX_18 = CONCAT44(iVar2,iVar1);
  puVar5 = (uint64_t *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,0);
  *(uint64_t *)(param_1 + 0x48) = *puVar5;
  puVar5 = (uint64_t *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,1);
  *(uint64_t *)(param_1 + 0x50) = *puVar5;
  puVar5 = (uint64_t *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,2);
  *(uint64_t *)(param_1 + 0x58) = *puVar5;
  puVar5 = (uint64_t *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,3);
  dVar7 = (double)iVar1;
  *(uint64_t *)(param_1 + 0x60) = *puVar5;
  dVar8 = (double)iVar2;
  *(double *)(param_1 + 8) = dVar7 / (double)*(int *)(param_1 + 0x48);
  *(double *)(param_1 + 0x10) = dVar8 / (double)*(int *)(param_1 + 0x4c);
  *(double *)(param_1 + 0x18) = dVar7 / (double)*(int *)(param_1 + 0x50);
  *(double *)(param_1 + 0x20) = dVar8 / (double)*(int *)(param_1 + 0x54);
  *(double *)(param_1 + 0x28) = dVar7 / (double)*(int *)(param_1 + 0x58);
  *(double *)(param_1 + 0x30) = dVar8 / (double)*(int *)(param_1 + 0x5c);
  *(double *)(param_1 + 0x38) = dVar7 / (double)*(int *)(param_1 + 0x60);
  *(double *)(param_1 + 0x40) = dVar8 / (double)*(int *)(param_1 + 100);
  return;
}







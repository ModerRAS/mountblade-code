#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part046.c - 3 个函数

// 函数: void FUN_180086e40(int64_t param_1,int64_t *param_2,int64_t param_3)
void FUN_180086e40(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  void *puVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int8_t auStack_2a8 [32];
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  int64_t alStack_268 [2];
  void *puStack_258;
  void *puStack_250;
  uint uStack_248;
  uint8_t auStack_240 [520];
  uint64_t uStack_38;
  
  alStack_268[1] = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  uVar2 = 0;
  puStack_258 = &unknown_var_9208_ptr;
  puStack_250 = auStack_240;
  auStack_240[0] = 0;
  uStack_248 = *(uint *)(param_3 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_3 + 8);
  }
  strcpy_s(auStack_240,0x200,puVar1);
  uVar4 = uVar2;
  if (uStack_248 != 0) {
    do {
      if ((byte)(puStack_250[uVar2] + 0xbf) < 0x1a) {
        puStack_250[uVar2] = puStack_250[uVar2] + ' ';
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < uStack_248);
  }
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    FUN_1800871c0(param_1,param_3);
  }
  else {
    FUN_18008d5c0(param_1 + 0x78,alStack_268,param_2);
    if (alStack_268[0] != param_1 + 0x78) {
      puStack_288 = &system_data_buffer_ptr;
      uStack_270 = 0;
      puStack_280 = (int8_t *)0x0;
      uStack_278 = 0;
      FUN_1806277c0(&puStack_288,uStack_248);
      if (0 < (int)uStack_248) {
        puVar1 = &system_buffer_ptr;
        if (puStack_250 != (void *)0x0) {
          puVar1 = puStack_250;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_280,puVar1,(int64_t)(int)(uStack_248 + 1));
      }
      if ((puStack_250 != (void *)0x0) && (uStack_278 = 0, puStack_280 != (int8_t *)0x0)) {
        *puStack_280 = 0;
      }
      FUN_18008d4a0(alStack_268[0] + 0x60,alStack_268,&puStack_288);
      puStack_288 = &system_data_buffer_ptr;
      if (puStack_280 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_280 = (int8_t *)0x0;
      uStack_270 = uStack_270 & 0xffffffff00000000;
      puStack_288 = &system_state_ptr;
    }
  }
  puStack_258 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_2a8);
}



uint64_t FUN_180087070(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lStackX_20;
  
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    FUN_18008d5c0(param_1 + 0x78,&lStackX_20,param_2);
    if ((lStackX_20 != param_1 + 0x78) &&
       (lVar2 = lStackX_20 + 0x30, FUN_18008d400(lVar2,&lStackX_20,param_3), lStackX_20 != lVar2)) {
      return *(uint64_t *)(lStackX_20 + 0x30);
    }
    return 0;
  }
  lVar2 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar2 == param_1 + 0x78) {
      return 0;
    }
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        iVar1 = memcmp(puVar4 + 4,param_3,0x10);
        if (iVar1 < 0) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(param_3,puVar3 + 4,0x10), -1 < iVar1)) {
        return puVar3[6];
      }
    }
    lVar2 = func_0x00018066bd70(lVar2);
  } while( true );
}



uint64_t FUN_1800870a2(int64_t param_1)

{
  int64_t lVar1;
  int64_t in_stack_00000048;
  
  FUN_18008d5c0(param_1 + 0x78,&stack0x00000048);
  if (in_stack_00000048 != param_1 + 0x78) {
    lVar1 = in_stack_00000048 + 0x30;
    FUN_18008d400(lVar1,&stack0x00000048);
    if (in_stack_00000048 != lVar1) {
      return *(uint64_t *)(in_stack_00000048 + 0x30);
    }
  }
  return 0;
}



uint64_t FUN_1800870ef(void)

{
  return 0;
}



uint64_t FUN_180087100(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  lVar2 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar2 == param_1 + 0x78) {
      return 0;
    }
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        iVar1 = memcmp(puVar4 + 4,param_2,0x10);
        if (iVar1 < 0) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(param_2,puVar3 + 4,0x10), -1 < iVar1)) {
        return puVar3[6];
      }
    }
    lVar2 = func_0x00018066bd70(lVar2);
  } while( true );
}



uint64_t FUN_1800871c0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  void *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  void *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  lVar5 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar5 == param_1 + 0x78) {
      return 0;
    }
    puVar1 = (uint64_t *)(lVar5 + 0x60);
    puStack_50 = &system_data_buffer_ptr;
    uStack_38 = 0;
    pbStack_48 = (byte *)0x0;
    iStack_40 = 0;
    FUN_1806277c0(&puStack_50,*(int32_t *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_2 + 8);
      }
                    // WARNING: Subroutine does not return
      memcpy(pbStack_48,puVar8,(int64_t)(*(int *)(param_2 + 0x10) + 1));
    }
    if ((*(int64_t *)(param_2 + 8) != 0) && (iStack_40 = 0, pbStack_48 != (byte *)0x0)) {
      *pbStack_48 = 0;
    }
    puVar11 = *(uint64_t **)(lVar5 + 0x70);
    puVar9 = puVar1;
    if (puVar11 == (uint64_t *)0x0) {
LAB_180087337:
      puVar10 = puVar1;
    }
    else {
      do {
        if (iStack_40 == 0) {
          bVar3 = false;
          puVar12 = (uint64_t *)puVar11[1];
        }
        else {
          if (*(int *)(puVar11 + 6) == 0) {
            bVar3 = true;
          }
          else {
            pbVar4 = pbStack_48;
            do {
              uVar6 = (uint)pbVar4[puVar11[5] - (int64_t)pbStack_48];
              iVar7 = *pbVar4 - uVar6;
              if (*pbVar4 != uVar6) break;
              pbVar4 = pbVar4 + 1;
            } while (uVar6 != 0);
            bVar3 = 0 < iVar7;
            if (iVar7 < 1) {
              puVar12 = (uint64_t *)puVar11[1];
              goto LAB_1800872f7;
            }
          }
          puVar12 = (uint64_t *)*puVar11;
        }
LAB_1800872f7:
        puVar10 = puVar11;
        if (bVar3) {
          puVar10 = puVar9;
        }
        puVar9 = puVar10;
        puVar11 = puVar12;
      } while (puVar12 != (uint64_t *)0x0);
      if (puVar10 == puVar1) goto LAB_180087337;
      if (*(int *)(puVar10 + 6) != 0) {
        if (iStack_40 != 0) {
          pbVar4 = (byte *)puVar10[5];
          lVar13 = (int64_t)pbStack_48 - (int64_t)pbVar4;
          do {
            bVar2 = *pbVar4;
            uVar6 = (uint)pbVar4[lVar13];
            if (bVar2 != uVar6) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar6 != 0);
          if ((int)(bVar2 - uVar6) < 1) goto LAB_18008733a;
        }
        goto LAB_180087337;
      }
    }
LAB_18008733a:
    puStack_50 = &system_data_buffer_ptr;
    if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_48 = (byte *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &system_state_ptr;
    if (puVar10 != puVar1) {
      return puVar10[8];
    }
    lVar5 = func_0x00018066bd70(lVar5);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800873b0(int param_1,int64_t *param_2,int8_t *param_3)

{
  char cVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puVar5;
  void *puStack_b8;
  int64_t lStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int64_t lStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void *puStack_50;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (param_1 < 0) {
LAB_180087418:
    lVar2 = FUN_180628ca0();
  }
  else {
    lVar2 = *(int64_t *)(*system_main_module_state + 0x888);
    if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar2 >> 5) <=
        (uint64_t)(int64_t)param_1) goto LAB_180087418;
    lVar2 = (int64_t)param_1 * 0x20 + lVar2;
  }
  FUN_180627ae0(&puStack_58,lVar2);
  puStack_78 = &system_data_buffer_ptr;
  uStack_60 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  System_DataHandler(&puStack_78,&unknown_var_8076_ptr,puVar5,puVar3);
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  System_DataHandler(&puStack_98,&unknown_var_8076_ptr,puVar5,puVar3);
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  System_DataHandler(&puStack_b8,&unknown_var_8076_ptr,puVar5,puVar3);
  cVar1 = FUN_180624a00(&puStack_78);
  if (cVar1 == '\0') {
LAB_18008755d:
    cVar1 = FUN_180624a00(&puStack_b8);
    if (cVar1 == '\0') goto LAB_18008758f;
    puVar3 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      puVar3 = core_system_control_memory;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
    *param_3 = 1;
  }
  else {
    cVar1 = FUN_180624a00(&puStack_98);
    if (cVar1 == '\0') goto LAB_18008755d;
    puVar3 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      puVar3 = core_system_control_memory;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
  }
  uVar4 = 1;
LAB_18008758f:
  puStack_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &system_state_ptr;
  puStack_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &system_state_ptr;
  puStack_78 = &system_data_buffer_ptr;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_70 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  puStack_78 = &system_state_ptr;
  puStack_58 = &system_data_buffer_ptr;
  if (puStack_50 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180087630(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180087630(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  void *puVar1;
  void *puVar2;
  void *puVar3;
  void *puStack_30;
  void *puStack_28;
  
  FUN_180142300(*system_main_module_state,&puStack_30,param_1);
  *(int32_t *)(param_3 + 0x10) = 0;
  if (*(int8_t **)(param_3 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_3 + 8) = 0;
  }
  puVar1 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar1 = core_system_control_memory;
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  puVar2 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  System_DataHandler(param_3,&unknown_var_8064_ptr,puVar2,puVar3,puVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_180087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  int8_t param_5)

{
  int *piVar1;
  int32_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  int8_t *puVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  uint64_t *puVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  void *puVar25;
  uint64_t uVar26;
  void *puVar27;
  uint *puVar28;
  int8_t auStack_158 [32];
  void *puStack_138;
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  int64_t alStack_108 [2];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  int64_t *plStack_e8;
  uint64_t *puStack_e0;
  int8_t *puStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  int iStack_98;
  uint uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint uStack_80;
  uint64_t uStack_7c;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  plVar18 = (int64_t *)0x0;
  *param_1 = 0;
  puStack_128 = &system_data_buffer_ptr;
  uStack_110 = 0;
  puStack_120 = (int8_t *)0x0;
  uStack_118 = 0;
  puStack_e0 = param_2;
  puStack_c0 = param_3;
  puStack_b8 = param_1;
  puStack_a8 = param_2;
  puStack_a0 = param_3;
  FUN_180087630(param_2,param_3,&puStack_128);
  alStack_108[0] = -1;
  puVar11 = &system_buffer_ptr;
  if (puStack_120 != (int8_t *)0x0) {
    puVar11 = puStack_120;
  }
  cVar9 = FUN_18063ba00(alStack_108,puVar11,5,0x105);
  plVar20 = plVar18;
  lVar15 = alStack_108[0];
  if (cVar9 == '\0') {
    uStack_118 = 0;
    if (puStack_120 != (int8_t *)0x0) {
      *puStack_120 = 0;
    }
    puStack_138 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      puStack_138 = core_system_control_memory;
    }
    puVar27 = &system_buffer_ptr;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar27 = (void *)param_3[1];
    }
    puVar25 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar25 = (void *)param_2[1];
    }
    System_DataHandler(&puStack_128,&unknown_var_8064_ptr,puVar25,puVar27);
    puVar11 = &system_buffer_ptr;
    if (puStack_120 != (int8_t *)0x0) {
      puVar11 = puStack_120;
    }
    cVar9 = FUN_18063ba00(alStack_108,puVar11,5,0x105);
    lVar15 = alStack_108[0];
    if (cVar9 != '\0') goto LAB_1800878e0;
    puVar11 = &system_buffer_ptr;
    if (puStack_120 != (int8_t *)0x0) {
      puVar11 = puStack_120;
    }
    System_DataHandler(param_4,&unknown_var_8088_ptr,puVar11);
    if (alStack_108[0] != -1) {
      LOCK();
      SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
      UNLOCK();
      CloseHandle(alStack_108[0]);
      alStack_108[0] = -1;
    }
    puStack_128 = &system_data_buffer_ptr;
    if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_110 = uStack_110 & 0xffffffff00000000;
  }
  else {
LAB_1800878e0:
    do {
      uVar26 = 0x1000000;
      if (0x24U - (int64_t)plVar20 < 0x1000000) {
        uVar26 = 0x24U - (int64_t)plVar20 & 0xffffffff;
      }
      uStack_f8 = 0;
      puStack_138 = (void *)0x0;
      iVar10 = ReadFile(lVar15,(int64_t)&iStack_98 + (int64_t)plVar20,uVar26,&uStack_f8);
      if (iVar10 == 0) goto LAB_18008807f;
    } while ((uStack_f8 != 0) &&
            (plVar20 = (int64_t *)((int64_t)plVar20 + (uint64_t)uStack_f8),
            plVar20 < (int64_t *)0x24));
    if (plVar20 != (int64_t *)0x24) {
LAB_18008807f:
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&unknown_var_8112_ptr,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &system_data_buffer_ptr;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_120 = (int8_t *)0x0;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      puStack_128 = &system_state_ptr;
      *param_2 = &system_data_buffer_ptr;
      if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_2[1] = 0;
      *(int32_t *)(param_2 + 3) = 0;
      *param_2 = &system_state_ptr;
      *param_3 = &system_data_buffer_ptr;
      if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_3[1] = 0;
      *(int32_t *)(param_3 + 3) = 0;
      *param_3 = &system_state_ptr;
      goto LAB_180088131;
    }
    if (iStack_98 == 0x43415054) {
      if (uStack_94 < 3) {
        SetFilePointerEx(lVar15,0,&lStack_d0,1);
        lStack_c8 = lStack_d0;
        plVar20 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
        *plVar20 = 0;
        plVar20[1] = 0;
        plVar20[2] = 0;
        *(int16_t *)(plVar20 + 3) = 0;
        *(int8_t *)((int64_t)plVar20 + 0x1a) = 3;
        if ((int)uStack_7c != 0) {
          plVar12 = (int64_t *)(uStack_7c & 0xffffffff);
          System_BufferManager(plVar20,uStack_7c & 0xffffffff);
          lVar13 = plVar20[1];
          plVar21 = plVar18;
          param_2 = puStack_e0;
          if (plVar12 != (int64_t *)0x0) {
            do {
              uVar26 = 0x1000000;
              if ((uint64_t)((int64_t)plVar12 - (int64_t)plVar21) < 0x1000000) {
                uVar26 = (int64_t)plVar12 - (int64_t)plVar21 & 0xffffffff;
              }
              uStack_f4 = 0;
              puStack_138 = (void *)0x0;
              iVar10 = ReadFile(lVar15,lVar13 + (int64_t)plVar21,uVar26,&uStack_f4);
              param_2 = puStack_e0;
            } while (((iVar10 != 0) && (uStack_f4 != 0)) &&
                    (plVar21 = (int64_t *)((int64_t)plVar21 + (uint64_t)uStack_f4),
                    plVar21 < plVar12));
          }
        }
        if (lVar15 != -1) {
          LOCK();
          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
          UNLOCK();
          CloseHandle(alStack_108[0]);
          alStack_108[0] = -1;
        }
        puVar11 = (int8_t *)FUN_18062b1e0(system_memory_pool_ptr,0x1a0,8,0x1a);
        *puVar11 = 0;
        *(int32_t *)(puVar11 + 4) = 0xffffffff;
        *(int32_t *)(puVar11 + 8) = uStack_90;
        *(int32_t *)(puVar11 + 0xc) = uStack_8c;
        *(int32_t *)(puVar11 + 0x10) = uStack_88;
        *(int32_t *)(puVar11 + 0x14) = uStack_84;
        puStack_d8 = puVar11;
        FUN_1806279c0(puVar11 + 0x18,param_2);
        FUN_1806279c0(puVar11 + 0x38,param_3);
        puVar24 = (uint64_t *)(puVar11 + 0x58);
        *puVar24 = &system_state_ptr;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        *puVar24 = &system_data_buffer_ptr;
        *(uint64_t *)(puVar11 + 0x70) = 0;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        plStack_e8 = puVar24;
        FUN_180257b80(puVar11 + 0x78);
        puVar11[0x178] = param_5;
        plVar21 = (int64_t *)(puVar11 + 0x180);
        *plVar21 = 0;
        *(uint64_t *)(puVar11 + 0x188) = 0;
        *(uint64_t *)(puVar11 + 400) = 0;
        *(int32_t *)(puVar11 + 0x198) = 0x1a;
        plStack_e8 = plVar21;
        FUN_180086bd0(puVar24,puVar11 + 0x18,puVar11 + 0x38);
        uStack_f0 = 0;
        if (uStack_80 != 0) {
          do {
            puVar24 = (uint64_t *)plVar20[1];
            uStack_70 = *puVar24;
            uStack_68 = puVar24[1];
            plVar20[1] = (int64_t)(puVar24 + 2);
            uStack_60 = *(int32_t *)(puVar24 + 2);
            uStack_5c = *(int32_t *)((int64_t)puVar24 + 0x14);
            uStack_58 = *(int32_t *)(puVar24 + 3);
            uStack_54 = *(int32_t *)((int64_t)puVar24 + 0x1c);
            plVar20[1] = (int64_t)(puVar24 + 4);
            plVar12 = plVar18;
            if (1 < uStack_94) {
              plVar12 = (int64_t *)(uint64_t)*(uint *)(puVar24 + 4);
              plVar20[1] = (int64_t)puVar24 + 0x24;
            }
            puVar24 = *(uint64_t **)(core_system_data_memory + 0xa8);
            puVar17 = (uint64_t *)puVar24[2];
            puVar19 = puVar24;
            if (puVar17 == (uint64_t *)0x0) {
LAB_180087f81:
                    // WARNING: Subroutine does not return
              FUN_180062300(system_message_context,&unknown_var_9136_ptr);
            }
            do {
              iVar10 = memcmp(puVar17 + 4,&uStack_70,0x10);
              if (iVar10 < 0) {
                puVar22 = (uint64_t *)*puVar17;
              }
              else {
                puVar22 = (uint64_t *)puVar17[1];
                puVar19 = puVar17;
              }
              puVar17 = puVar22;
            } while (puVar22 != (uint64_t *)0x0);
            if ((puVar19 == puVar24) || (iVar10 = memcmp(&uStack_70,puVar19 + 4,0x10), iVar10 < 0))
            goto LAB_180087f81;
            plVar12 = (int64_t *)(*(code *)puVar19[6])(&uStack_60,plVar12);
            if (plVar12 != (int64_t *)0x0) {
              uVar3 = *(uint *)plVar20[1];
              puVar28 = (uint *)plVar20[1] + 1;
              plVar20[1] = (int64_t)puVar28;
              if (uVar3 != 0) {
                (**(code **)(plVar12[0xd] + 0x18))(plVar12 + 0xd,puVar28,uVar3);
                plVar20[1] = plVar20[1] + (uint64_t)uVar3;
                puVar28 = (uint *)plVar20[1];
              }
              lVar13 = func_0x000180639d60(plVar20);
              lVar13 = lVar13 + lStack_c8;
              lVar15 = *(int64_t *)puVar28;
              plVar20[1] = (int64_t)(puVar28 + 2);
              plStack_e8 = (int64_t *)func_0x000180639d60();
              plVar14 = plVar18;
              if (lVar15 != 0) {
                plVar14 = (int64_t *)(**(code **)(*plVar12 + 0x68))(plVar12,0);
                (**(code **)(*plVar14 + 0x10))(plVar14,plVar20);
              }
              plVar20[1] = *plVar20;
              FUN_180639d80(plVar20,(int8_t *)((int64_t)plStack_e8 + lVar15));
              uVar4 = *(uint64_t *)plVar20[1];
              plVar20[1] = (int64_t)((uint64_t *)plVar20[1] + 1);
              FUN_180256530(plVar12,plVar14,uVar4,lVar13);
              iVar10 = *(int *)plVar20[1];
              piVar1 = (int *)plVar20[1] + 1;
              plVar20[1] = (int64_t)piVar1;
              plVar14 = (int64_t *)plVar12[0x11];
              if (plVar14 == (int64_t *)0x0) {
                if (puStack_d8[0x178] == '\0') {
                  plVar14 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x1a);
                  *plVar14 = (int64_t)&unknown_var_1952_ptr;
                  plVar14[1] = 0;
                  plVar14[2] = (int64_t)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                  *plVar14 = (int64_t)&unknown_var_1824_ptr;
                  plStack_e8 = plVar14;
                }
                else {
                  plVar14 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x1a);
                  *plVar14 = (int64_t)&unknown_var_1952_ptr;
                  plVar14[1] = 0;
                  plVar14[2] = (int64_t)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                }
                plVar12[0x11] = (int64_t)plVar14;
              }
              (**(code **)(*plVar14 + 8))(plVar14,puStack_d8,piVar1,iVar10);
              FUN_180639d80(plVar20,(int64_t)iVar10 * 0x45);
              uVar23 = (uint64_t)*(int *)plVar20[1];
              plVar20[1] = (int64_t)((int *)plVar20[1] + 1);
              plVar14 = plVar12 + 0x12;
              lVar15 = plVar12[0x13] - *plVar14;
              lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
              uVar26 = (lVar15 >> 3) - (lVar15 >> 0x3f);
              if (uVar26 < uVar23) {
                FUN_18008dbb0(plVar14,uVar23 - uVar26);
              }
              else {
                plVar12[0x13] = uVar23 * 0x30 + *plVar14;
              }
              plVar16 = plVar18;
              if (0 < (int64_t)uVar23) {
                do {
                  lVar15 = *plVar14;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  *(uint64_t *)(lVar15 + (int64_t)plVar16) = *(uint64_t *)plVar20[1];
                  ((uint64_t *)(lVar15 + (int64_t)plVar16))[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  puVar24 = (uint64_t *)(*plVar14 + 0x10 + (int64_t)plVar16);
                  *puVar24 = *(uint64_t *)plVar20[1];
                  puVar24[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  puVar5 = (int32_t *)plVar20[1];
                  uVar6 = puVar5[1];
                  uVar7 = puVar5[2];
                  uVar8 = puVar5[3];
                  puVar2 = (int32_t *)(*plVar14 + 0x20 + (int64_t)plVar16);
                  *puVar2 = *puVar5;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar23 = uVar23 - 1;
                  plVar16 = plVar16 + 6;
                } while (uVar23 != 0);
              }
              puVar24 = *(uint64_t **)(puVar11 + 0x188);
              if (puVar24 < *(uint64_t **)(puVar11 + 400)) {
                *(uint64_t **)(puVar11 + 0x188) = puVar24 + 1;
                *puVar24 = plVar12;
              }
              else {
                puVar17 = (uint64_t *)*plVar21;
                lVar15 = (int64_t)puVar24 - (int64_t)puVar17 >> 3;
                if (lVar15 == 0) {
                  lVar15 = 1;
LAB_180087f16:
                  plVar14 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,puVar11[0x198]);
                  puVar24 = *(uint64_t **)(puVar11 + 0x188);
                  puVar17 = (uint64_t *)*plVar21;
                }
                else {
                  lVar15 = lVar15 * 2;
                  plVar14 = plVar18;
                  if (lVar15 != 0) goto LAB_180087f16;
                }
                if (puVar17 != puVar24) {
                    // WARNING: Subroutine does not return
                  memmove(plVar14,puVar17,(int64_t)puVar24 - (int64_t)puVar17);
                }
                *plVar14 = (int64_t)plVar12;
                if (*plVar21 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *plVar21 = (int64_t)plVar14;
                *(int64_t **)(puVar11 + 0x188) = plVar14 + 1;
                *(int64_t **)(puVar11 + 400) = plVar14 + lVar15;
              }
            }
            uStack_f0 = uStack_f0 + 1;
          } while (uStack_f0 < uStack_80);
        }
        if (((char)plVar20[3] == '\0') && (*plVar20 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar20);
      }
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&unknown_var_8168_ptr,uStack_94,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &system_data_buffer_ptr;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_110 = uStack_110 & 0xffffffff00000000;
    }
    else {
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&unknown_var_8136_ptr,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &system_data_buffer_ptr;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_110 = uStack_110 & 0xffffffff00000000;
    }
  }
  puStack_120 = (int8_t *)0x0;
  puStack_128 = &system_state_ptr;
  FUN_180627b90(param_2);
  FUN_180627b90(param_3);
LAB_180088131:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




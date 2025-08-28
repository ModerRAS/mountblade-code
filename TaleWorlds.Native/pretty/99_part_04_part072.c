#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part072.c - 3 个函数

// 函数: void FUN_1802c9074(void)
void FUN_1802c9074(void)

{
  int64_t unaff_RBX;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  
  *(int32_t *)(unaff_RBX + 0x40) = 0x40000000;
  *(int32_t *)(unaff_RBX + 0x38) = unaff_R15D;
  *(int32_t *)(unaff_RBX + 0x3c) = unaff_R14D;
  FUN_18005cfc0();
  return;
}



int64_t FUN_1802c90a0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  
  plVar4 = *(int64_t **)(param_1 + 0x50);
  uVar9 = 0;
  iVar5 = (int)(*(int64_t *)(param_1 + 0x58) - (int64_t)plVar4 >> 3);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    plVar10 = plVar4;
    uVar11 = uVar9;
    do {
      iVar3 = *(int *)(*plVar10 + 0x20);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(*plVar10 + 0x18);
          lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar8;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1802c911d:
        if (iVar7 == 0) {
          return plVar4[(int)uVar11];
        }
      }
      else if (iVar3 == 0) goto LAB_1802c911d;
      uVar11 = (uint64_t)((int)uVar11 + 1);
      uVar9 = uVar9 + 1;
      plVar10 = plVar10 + 1;
    } while ((int64_t)uVar9 < (int64_t)iVar5);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c9150(int64_t param_1,int64_t param_2)
void FUN_1802c9150(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  char *pcVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  char *pcVar10;
  char *pcVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t auStack_5e8 [48];
  uint uStack_5b8;
  void **ppuStack_5b0;
  int64_t alStack_5a8 [2];
  void *puStack_598;
  int64_t lStack_590;
  int iStack_588;
  int32_t uStack_580;
  void *puStack_578;
  int64_t lStack_570;
  int32_t uStack_560;
  void *puStack_558;
  int64_t lStack_550;
  int32_t uStack_540;
  int8_t uStack_538;
  char cStack_530;
  int8_t auStack_510 [512];
  int8_t auStack_310 [352];
  int8_t auStack_1b0 [360];
  uint64_t uStack_48;
  
  alStack_5a8[1] = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_5e8;
  pcVar11 = "id";
  do {
    pcVar10 = pcVar11;
    pcVar11 = pcVar10 + 1;
  } while (*pcVar11 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x40); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[6]) {
    pcVar11 = (char *)*puVar8;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar10 + -0x180a0ae27) {
      pcVar4 = pcVar4 + (int64_t)pcVar11;
      if (pcVar4 <= pcVar11) {
LAB_1802c91f6:
        lVar5 = 0x180d48d24;
        if (puVar8[1] != 0) {
          lVar5 = puVar8[1];
        }
        (**(code **)(*(int64_t *)(param_1 + 8) + 0x10))(param_1 + 8,lVar5);
        break;
      }
      lVar5 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar5]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar4 <= pcVar11) goto LAB_1802c91f6;
      }
    }
  }
  uVar6 = 0;
  uStack_5b8 = 0x80a0ae00;
  pcVar11 = "postfx_node";
  do {
    pcVar10 = pcVar11;
    pcVar11 = pcVar10 + 1;
  } while (*pcVar11 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x30); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[0xb]) {
    pcVar11 = (char *)*puVar8;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar10 + -0x180a18df7) {
      pcVar4 = pcVar11 + (int64_t)pcVar4;
      if (pcVar4 <= pcVar11) goto LAB_1802c9290;
      lVar5 = (int64_t)&unknown_var_8584_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar5]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar4 <= pcVar11) goto LAB_1802c9290;
      }
    }
  }
  goto LAB_1802c954d;
LAB_1802c9290:
  do {
    lVar5 = 0;
    FUN_1801f4eb0(&puStack_598);
    FUN_1801f37b0(&puStack_598,puVar8);
    if ((cStack_530 != '\0') && ((char)uVar6 != '\0')) {
      uStack_538 = 1;
    }
    uVar9 = *(uint64_t *)(param_1 + 0x30);
    if (uVar9 < *(uint64_t *)(param_1 + 0x38)) {
      *(uint64_t *)(param_1 + 0x30) = uVar9 + 0x548;
      FUN_1801f33a0(uVar9,&puStack_598);
    }
    else {
      lVar12 = *(int64_t *)(param_1 + 0x28);
      lVar13 = (int64_t)(uVar9 - lVar12) / 0x548;
      if (lVar13 == 0) {
        lVar13 = 1;
LAB_1802c9326:
        lVar5 = FUN_18062b420(system_memory_pool_ptr,lVar13 * 0x548,*(int8_t *)(param_1 + 0x40));
        uVar9 = *(uint64_t *)(param_1 + 0x30);
        lVar12 = *(int64_t *)(param_1 + 0x28);
      }
      else {
        lVar13 = lVar13 * 2;
        if (lVar13 != 0) goto LAB_1802c9326;
      }
      FUN_1802ca500(alStack_5a8,lVar12,uVar9,lVar5);
      lVar2 = alStack_5a8[0];
      FUN_1801f33a0(alStack_5a8[0],&puStack_598);
      lVar12 = *(int64_t *)(param_1 + 0x30);
      lVar7 = *(int64_t *)(param_1 + 0x28);
      if (lVar7 != lVar12) {
        do {
          FUN_1800594b0(lVar7);
          lVar7 = lVar7 + 0x548;
        } while (lVar7 != lVar12);
        lVar7 = *(int64_t *)(param_1 + 0x28);
      }
      if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar7);
      }
      *(int64_t *)(param_1 + 0x28) = lVar5;
      *(int64_t *)(param_1 + 0x30) = lVar2 + 0x548;
      *(int64_t *)(param_1 + 0x38) = lVar13 * 0x548 + lVar5;
      uVar6 = uStack_5b8;
    }
    if (iStack_588 == 9) {
      iVar3 = strcmp(lStack_590,&unknown_var_8568_ptr);
      uVar6 = uVar6 & 0xff;
      uStack_5b8 = uVar6;
      if (iVar3 == 0) {
        uVar6 = 1;
        uStack_5b8 = uVar6;
      }
    }
    pcVar11 = "postfx_node";
    do {
      pcVar10 = pcVar11;
      pcVar11 = pcVar10 + 1;
    } while (*pcVar11 != '\0');
    for (puVar1 = (uint64_t *)puVar8[0xb]; puVar8 = (uint64_t *)0x0, puVar1 != (uint64_t *)0x0
        ; puVar1 = (uint64_t *)puVar1[0xb]) {
      pcVar11 = (char *)*puVar1;
      if (pcVar11 == (char *)0x0) {
        pcVar4 = (char *)0x0;
        pcVar11 = (char *)0x180d48d24;
      }
      else {
        pcVar4 = (char *)puVar1[2];
      }
      if (pcVar4 == pcVar10 + -0x180a18df7) {
        pcVar4 = pcVar4 + (int64_t)pcVar11;
        puVar8 = puVar1;
        if (pcVar4 <= pcVar11) break;
        lVar5 = (int64_t)&unknown_var_8584_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar5]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar4 <= pcVar11) goto LAB_1802c945e;
        }
      }
    }
LAB_1802c945e:
    FUN_1808fc8a8(auStack_1b0,0x58,4,FUN_180044a30);
    FUN_1808fc8a8(auStack_310,0x58,4,FUN_180044a30);
    FUN_1808fc8a8(auStack_510,0x20,0x10,FUN_180059620);
    ppuStack_5b0 = &puStack_558;
    puStack_558 = &system_data_buffer_ptr;
    if (lStack_550 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_550 = 0;
    uStack_540 = 0;
    puStack_558 = &system_state_ptr;
    ppuStack_5b0 = &puStack_578;
    puStack_578 = &system_data_buffer_ptr;
    if (lStack_570 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_570 = 0;
    uStack_560 = 0;
    puStack_578 = &system_state_ptr;
    ppuStack_5b0 = &puStack_598;
    puStack_598 = &system_data_buffer_ptr;
    if (lStack_590 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_590 = 0;
    uStack_580 = 0;
    puStack_598 = &system_state_ptr;
  } while (puVar8 != (uint64_t *)0x0);
LAB_1802c954d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_5e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802c9580(int64_t param_1,uint param_2)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t *puVar10;
  uint64_t uVar11;
  int32_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  
  uVar3 = system_system_data_config;
  iVar4 = _Mtx_lock(system_system_data_config);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar7 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xa0,8,3);
  *puVar7 = &system_handler1_ptr;
  *puVar7 = &system_handler2_ptr;
  iVar4 = 0;
  *(int32_t *)(puVar7 + 1) = 0;
  *puVar7 = &unknown_var_8624_ptr;
  plVar1 = puVar7 + 3;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar7[4] = 0;
  *(int32_t *)(puVar7 + 5) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar7[6] = 0;
  puVar7[4] = 0;
  *(int32_t *)(puVar7 + 5) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  *(int32_t *)(puVar7 + 0xd) = 3;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  *(int32_t *)(puVar7 + 0x11) = 3;
  *(int32_t *)(puVar7 + 2) = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  puVar7[7] = 0xffffffffffffffff;
  *(int32_t *)(puVar7 + 8) = 0x41200000;
  *(int32_t *)(puVar7 + 0x12) = 0x3c888889;
  *(int32_t *)((int64_t)puVar7 + 0x94) = 0xdeadbeef;
  *(int32_t *)(puVar7 + 0x13) = 0x3e3edead;
  puStack_70 = (int32_t *)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 3;
  FUN_180080ca0(&puStack_70,(*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x548)
  ;
  uVar5 = func_0x0001801f2a40();
  uVar5 = uVar5 & param_2;
  uVar2 = uVar5 & 0xfffbf83f;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  lVar8 = *(int64_t *)(param_1 + 0x28);
  if ((*(int64_t *)(param_1 + 0x30) - lVar8) / 0x548 != 0) {
    lVar9 = 0;
    puVar10 = puStack_70;
    do {
      *puVar10 = 0;
      uVar5 = *(uint *)(lVar9 + 0x74 + lVar8);
      if ((uVar5 != 0xffffffff) && ((uVar2 & uVar5) == 0)) {
        *puVar10 = 3;
        uVar5 = *(uint *)(lVar9 + 0x74 + lVar8);
      }
      if ((uVar5 != 0xffffffff) &&
         ((uVar6 = func_0x0001801f2a40(), (uVar6 & uVar5) == 0 ||
          ((*(uint *)(lVar9 + 0x78 + lVar8) & uVar6) != 0)))) {
        *puVar10 = 3;
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0x548;
      puVar10 = puVar10 + 1;
      lVar8 = *(int64_t *)(param_1 + 0x28);
    } while ((uint64_t)(int64_t)iVar4 <
             (uint64_t)((*(int64_t *)(param_1 + 0x30) - lVar8) / 0x548));
  }
  puVar10 = puStack_70;
  FUN_1802c9f60(param_1,uVar2,puVar7 + 10,puVar7 + 0xe,&puStack_70);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar11 = (uint64_t)uVar5;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    FUN_1806277c0(puVar7 + 3,uVar11);
  }
  if (uVar5 == 0) {
    *(int32_t *)(puVar7 + 5) = 0;
    if (puVar7[4] != 0) {
      *(int8_t *)(uVar11 + puVar7[4]) = 0;
    }
    *(int32_t *)((int64_t)puVar7 + 0x34) = *(int32_t *)(param_1 + 0x24);
    *(uint *)((int64_t)puVar7 + 0x94) = param_2;
    *(int32_t *)(puVar7 + 8) = 0x41200000;
    puVar7[7] = 0xffffffffffffffff;
    *(uint *)(puVar7 + 0x13) = uVar2;
    puVar7[9] = param_1;
    if (puVar10 == (int32_t *)0x0) {
      iVar4 = _Mtx_unlock(uVar3);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      return puVar7;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
                    // WARNING: Subroutine does not return
  memcpy(puVar7[4],*(uint64_t *)(param_1 + 0x10),uVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802c98d0(int64_t param_1,int64_t param_2,uint param_3,char param_4,char param_5)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int32_t *puVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int32_t *puStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  uVar1 = system_system_data_config;
  iVar2 = _Mtx_lock(system_system_data_config);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar8 = *(uint *)(param_2 + 0x94);
  uVar3 = func_0x0001801f2a40();
  uVar3 = uVar3 & uVar8;
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar8 = uVar8 & *(uint *)(param_2 + 0x98);
  if (param_5 == '\0') {
    if ((param_3 & uVar3) == 0) {
      uVar9 = 0;
      goto LAB_1802c9adc;
    }
    if (param_4 == '\0') {
      uVar5 = uVar5 & ~param_3;
      uVar8 = uVar8 & ~param_3;
    }
    else {
      uVar5 = uVar5 | param_3;
      uVar8 = uVar8 | param_3;
    }
    *(uint *)(param_2 + 0x10) = uVar5;
  }
  uVar8 = uVar8 & uVar5;
  puStack_50 = (int32_t *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_180080ca0(&puStack_50,(*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x548)
  ;
  _param_5 = 0;
  lVar6 = *(int64_t *)(param_1 + 0x28);
  if ((*(int64_t *)(param_1 + 0x30) - lVar6) / 0x548 != 0) {
    lVar10 = 0;
    puVar7 = puStack_50;
    do {
      *puVar7 = 0;
      uVar5 = *(uint *)(lVar10 + 0x74 + lVar6);
      if ((uVar5 != 0xffffffff) &&
         (((uVar8 & uVar5) == 0 || ((*(uint *)(lVar10 + 0x78 + lVar6) & uVar8) != 0)))) {
        *puVar7 = 3;
        uVar5 = *(uint *)(lVar10 + 0x74 + lVar6);
      }
      if (uVar5 != 0xffffffff) {
        uVar4 = uVar3;
        if (uVar3 == 0xffffffff) {
          uVar4 = func_0x0001801f2a40();
        }
        if (((uVar4 & uVar5) == 0) || ((*(uint *)(lVar10 + 0x78 + lVar6) & uVar4) != 0)) {
          *puVar7 = 3;
        }
      }
      _param_5 = _param_5 + 1;
      lVar10 = lVar10 + 0x548;
      puVar7 = puVar7 + 1;
      lVar6 = *(int64_t *)(param_1 + 0x28);
    } while ((uint64_t)(int64_t)_param_5 <
             (uint64_t)((*(int64_t *)(param_1 + 0x30) - lVar6) / 0x548));
  }
  puVar7 = puStack_50;
  FUN_1802c9b20(param_1,uVar8,param_2 + 0x50,param_2 + 0x70,uVar3,&puStack_50);
  uVar9 = 1;
  if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar7);
  }
LAB_1802c9adc:
  iVar2 = _Mtx_unlock(uVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c9b20(uint *param_1,uint param_2,int64_t *param_3,int64_t *param_4,uint param_5,
void FUN_1802c9b20(uint *param_1,uint param_2,int64_t *param_3,int64_t *param_4,uint param_5,
                  int64_t *param_6)

{
  byte *pbVar1;
  uint64_t uVar2;
  bool bVar3;
  uint64_t *****pppppuVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  byte *pbVar7;
  uint64_t ****ppppuVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t *****pppppuVar13;
  uint64_t *****pppppuVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  int8_t auStack_70 [8];
  uint64_t ****ppppuStack_68;
  uint64_t ****ppppuStack_60;
  uint64_t ****ppppuStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  *param_1 = param_2 & param_5;
  param_3[1] = *param_3;
  uVar19 = 0;
  uStack_40 = 3;
  ppppuStack_68 = &ppppuStack_68;
  ppppuStack_60 = &ppppuStack_68;
  ppppuStack_58 = (uint64_t *****)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar20 = *(int64_t *)(param_1 + 0xc);
  uVar10 = *(uint64_t *)(param_1 + 10);
  lVar15 = (int64_t)(lVar20 - uVar10) >> 0x3f;
  uVar11 = uVar19;
  uVar17 = uVar19;
  uVar16 = uVar19;
  if ((int64_t)(lVar20 - uVar10) / 0x548 + lVar15 != lVar15) {
    do {
      if (*(int *)(uVar17 + *param_6) != 3) {
        lVar20 = uVar16 + uVar10;
        pppppuVar4 = &ppppuStack_68;
        if ((uint64_t *****)ppppuStack_58 != (uint64_t *****)0x0) {
          pppppuVar13 = (uint64_t *****)ppppuStack_58;
          do {
            if (*(int *)(lVar20 + 0x10) == 0) {
              bVar3 = false;
              pppppuVar14 = (uint64_t *****)pppppuVar13[1];
            }
            else {
              if (*(int *)(pppppuVar13 + 6) == 0) {
                bVar3 = true;
              }
              else {
                pbVar7 = *(byte **)(lVar20 + 8);
                lVar15 = (int64_t)pppppuVar13[5] - (int64_t)pbVar7;
                do {
                  pbVar1 = pbVar7 + lVar15;
                  uVar18 = (uint)*pbVar7 - (uint)*pbVar1;
                  uVar10 = (uint64_t)uVar18;
                  if (uVar18 != 0) break;
                  pbVar7 = pbVar7 + 1;
                } while (*pbVar1 != 0);
                bVar3 = 0 < (int)uVar18;
                if ((int)uVar18 < 1) {
                  pppppuVar14 = (uint64_t *****)pppppuVar13[1];
                  goto LAB_1802c9c5b;
                }
              }
              pppppuVar14 = (uint64_t *****)*pppppuVar13;
            }
LAB_1802c9c5b:
            if (bVar3) {
              pppppuVar13 = pppppuVar4;
            }
            pppppuVar4 = pppppuVar13;
            pppppuVar13 = pppppuVar14;
          } while (pppppuVar14 != (uint64_t *****)0x0);
        }
        if (pppppuVar4 == &ppppuStack_68) {
LAB_1802c9cba:
          puVar5 = (uint64_t *)FUN_1800c2ab0(&ppppuStack_68,auStack_70,uVar10,pppppuVar4,lVar20);
          pppppuVar4 = (uint64_t *****)*puVar5;
        }
        else if (*(int *)(pppppuVar4 + 6) != 0) {
          if (*(int *)(lVar20 + 0x10) != 0) {
            ppppuVar8 = pppppuVar4[5];
            lVar15 = *(int64_t *)(lVar20 + 8) - (int64_t)ppppuVar8;
            do {
              uVar18 = (uint)*(byte *)((int64_t)ppppuVar8 + lVar15);
              uVar12 = *(byte *)ppppuVar8 - uVar18;
              uVar10 = (uint64_t)uVar12;
              if (uVar12 != 0) break;
              ppppuVar8 = (uint64_t ****)((int64_t)ppppuVar8 + 1);
            } while (uVar18 != 0);
            if ((int)uVar12 < 1) goto LAB_1802c9cd2;
          }
          goto LAB_1802c9cba;
        }
LAB_1802c9cd2:
        *(int *)(pppppuVar4 + 8) = (int)uVar19;
        uVar19 = (uint64_t)((int)uVar19 + 1);
      }
      uVar18 = (int)uVar11 + 1;
      lVar20 = *(int64_t *)(param_1 + 0xc);
      uVar10 = *(uint64_t *)(param_1 + 10);
      uVar11 = (uint64_t)uVar18;
      uVar17 = uVar17 + 4;
      uVar16 = uVar16 + 0x548;
    } while ((uint64_t)(int64_t)(int)uVar18 < (uint64_t)((int64_t)(lVar20 - uVar10) / 0x548));
  }
  uVar11 = 0;
  param_5 = 0;
  lVar15 = (int64_t)(lVar20 - uVar10) >> 0x3f;
  if ((int64_t)(lVar20 - uVar10) / 0x548 + lVar15 != lVar15) {
    lVar20 = 0;
    uVar16 = uVar11;
    uVar17 = uVar11;
    uVar19 = uVar11;
    do {
      uVar18 = (uint)uVar11;
      if (*(int *)(lVar20 + *param_6) != 3) {
        uVar2 = *(uint64_t *)(*param_4 + uVar19);
        FUN_1801f5080(uVar10 + uVar16 * 0x548,uVar2,&ppppuStack_68,*param_1,1);
        puVar5 = (uint64_t *)param_3[1];
        if (puVar5 < (uint64_t *)param_3[2]) {
          param_3[1] = (int64_t)(puVar5 + 1);
          *puVar5 = uVar2;
        }
        else {
          puVar9 = (uint64_t *)*param_3;
          lVar15 = (int64_t)puVar5 - (int64_t)puVar9 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1802c9ddd:
            puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,(char)param_3[3]);
            puVar5 = (uint64_t *)param_3[1];
            puVar9 = (uint64_t *)*param_3;
          }
          else {
            lVar15 = lVar15 * 2;
            if (lVar15 != 0) goto LAB_1802c9ddd;
            puVar6 = (uint64_t *)0x0;
          }
          if (puVar9 != puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar6,puVar9,(int64_t)puVar5 - (int64_t)puVar9);
          }
          *puVar6 = uVar2;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_3 = (int64_t)puVar6;
          param_3[1] = (int64_t)(puVar6 + 1);
          param_3[2] = (int64_t)(puVar6 + lVar15);
          uVar18 = param_5;
        }
        uVar10 = *(uint64_t *)(param_1 + 10);
        uVar17 = uVar10 + uVar16 * 0x548;
      }
      param_5 = uVar18 + 1;
      uVar11 = (uint64_t)param_5;
      lVar20 = lVar20 + 4;
      uVar19 = uVar19 + 8;
      uVar16 = (uint64_t)(int)param_5;
    } while (uVar16 < (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0xc) - uVar10) / 0x548));
    if ((uVar17 != 0) && (*(char *)(uVar17 + 0x69) != '\0')) {
      *(int8_t *)(*(int64_t *)(*param_3 + -8 + (param_3[1] - *param_3 >> 3) * 8) + 0x4d) = 1;
    }
  }
  ppppuVar8 = ppppuStack_58;
  if ((uint64_t *****)ppppuStack_58 == (uint64_t *****)0x0) {
    return;
  }
  FUN_180058370(&ppppuStack_68,*ppppuStack_58);
  ppppuVar8[4] = (uint64_t ***)&system_data_buffer_ptr;
  if ((uint64_t ****)ppppuVar8[5] == (uint64_t ****)0x0) {
    ppppuVar8[5] = (uint64_t ****)0x0;
    *(int32_t *)(ppppuVar8 + 7) = 0;
    ppppuVar8[4] = (uint64_t ***)&system_state_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(ppppuVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





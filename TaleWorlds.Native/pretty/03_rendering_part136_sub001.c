#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part136_sub001.c - 11 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part136.c - 11 个函数


// 函数: void FUN_18034b910(uint64_t param_1)
void FUN_18034b910(uint64_t param_1)

{
  int8_t auStack_248 [32];
  int32_t uStack_228;
  void **appuStack_220 [2];
  uint64_t uStack_210;
  void *apuStack_208 [11];
  int32_t uStack_1b0;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uStack_228 = 0;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xe;
  strcpy_s(auStack_190,0x40,&system_data_d8a0);
  FUN_1800b8300(apuStack_208,&puStack_1a8);
  uStack_1b0 = 0;
  uStack_228 = 1;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xc;
  strcpy_s(auStack_130,0x40,&system_data_d890);
  FUN_1800b8300(apuStack_208,&puStack_148);
  uStack_1b0 = 0;
  uStack_228 = 2;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xe;
  strcpy_s(auStack_d0,0x40,&system_data_d880);
  FUN_1800b8300(apuStack_208,&puStack_e8);
  uStack_1b0 = 0;
  uStack_228 = 4;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xe;
  strcpy_s(auStack_70,0x40,&system_data_d988);
  FUN_1800b8300(apuStack_208,&puStack_88);
  uStack_1b0 = 0;
  uStack_228 = 8;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034bbd0(int64_t param_1,int64_t param_2)
void FUN_18034bbd0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  void *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  void *puVar11;
  int64_t *plStackX_8;
  
  lVar8 = 0;
  iVar3 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x3054);
  iVar5 = *(int *)(param_2 + 0x10);
  if ((iVar5 == 0xc) && (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d890), iVar4 == 0)) {
    lVar8 = 1;
  }
  else if (iVar5 == 0xe) {
    iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d880);
    if (iVar5 == 0) {
      lVar8 = 2;
    }
    else {
      iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d988);
      lVar8 = 0;
      if (iVar5 == 0) {
        lVar8 = 3;
      }
    }
  }
  plVar9 = (int64_t *)(param_1 + 0x70 + lVar8 * 0x20);
  lVar1 = lVar8 * 0x20 + param_1;
  iVar5 = (int)plVar9[2];
  iVar4 = *(int *)(lVar1 + 0x100);
  if (iVar5 == iVar4) {
    if (iVar5 != 0) {
      pbVar6 = (byte *)plVar9[1];
      lVar10 = *(int64_t *)(lVar1 + 0xf8) - (int64_t)pbVar6;
      do {
        pbVar2 = pbVar6 + lVar10;
        iVar4 = (uint)*pbVar6 - (uint)*pbVar2;
        if (iVar4 != 0) break;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar2 != 0);
    }
  }
  else if (iVar5 != 0) goto LAB_18034bcb4;
  if (iVar4 == 0) {
    return;
  }
LAB_18034bcb4:
  FUN_1800b30d0(system_resource_state,&plStackX_8,plVar9,0);
  if (plStackX_8 == (int64_t *)0x0) {
    if ((int)plVar9[2] != 0) {
      lVar10 = FUN_180149750(lVar8);
      puVar11 = &system_buffer_ptr;
      if (*(void **)(lVar10 + 8) != (void *)0x0) {
        puVar11 = *(void **)(lVar10 + 8);
      }
      puVar7 = &system_buffer_ptr;
      if ((void *)plVar9[1] != (void *)0x0) {
        puVar7 = (void *)plVar9[1];
      }
      FUN_180627020(&unknown_var_7712_ptr,puVar7,puVar11);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,&system_buffer_ptr);
  }
  if (iVar3 == (int)lVar8) {
    FUN_18034bd70(param_1,lVar8);
  }
  FUN_180627be0(lVar1 + 0xf0,plVar9);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018034beec)
// WARNING: Removing unreachable block (ram,0x00018034bf31)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034bd70(int64_t param_1,int param_2)
void FUN_18034bd70(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *puVar3;
  uint uVar4;
  void *puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_20;
  void *puStack_78;
  int64_t lStack_70;
  uint uStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uVar5;
  
  uVar8 = 0;
  if (*(int64_t *)(param_1 + 0x178) == 0) {
    return;
  }
  plStackX_8 = (int64_t *)0x0;
  plVar1 = (int64_t *)
           FUN_1800b30d0(system_resource_state,&plStackX_20,param_1 + 0x70 + (int64_t)param_2 * 0x20,0);
  plVar7 = (int64_t *)*plVar1;
  *plVar1 = 0;
  plStackX_8 = plVar7;
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  if (plVar7 == (int64_t *)0x0) {
    lVar2 = FUN_180149750(param_2);
    puStack_78 = &system_data_buffer_ptr;
    uStack_60 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      FUN_1806277c0(&puStack_78,*(int *)(param_1 + 0x80));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)uStack_68 + lStack_70,*(uint64_t *)(param_1 + 0x78),
             (int64_t)(*(int *)(param_1 + 0x80) + 1));
    }
    FUN_1806277c0(&puStack_78,1);
    *(int16_t *)((uint64_t)uStack_68 + lStack_70) = 0x5f;
    uStack_68 = 1;
    if (0 < *(int *)(lVar2 + 0x10)) {
      FUN_1806277c0(&puStack_78,*(int *)(lVar2 + 0x10) + 1);
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)uStack_68 + lStack_70,*(uint64_t *)(lVar2 + 8),
             (int64_t)(*(int *)(lVar2 + 0x10) + 1));
    }
    plVar1 = (int64_t *)FUN_1800b30d0(system_resource_state,&plStackX_20,&puStack_78,0);
    plVar7 = (int64_t *)*plVar1;
    *plVar1 = 0;
    plStackX_8 = plVar7;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    plVar1 = plStackX_8;
    if ((plVar7 == (int64_t *)0x0) &&
       (plVar7 = *(int64_t **)(param_1 + 0x178), plVar1 = plVar7, plVar7 != (int64_t *)0x0)) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStackX_8 = plVar1;
    puStack_78 = &system_data_buffer_ptr;
    if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    puStack_78 = &system_state_ptr;
  }
  plStack_58 = (int64_t *)0x0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  FUN_1802e93a0(*(uint64_t *)(param_1 + 0x18),&plStack_58);
  uVar10 = lStack_50 - (int64_t)plStack_58 >> 3;
  uVar9 = (uint)uVar10;
  if (uVar9 == 0) {
    puVar3 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
    puVar6 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar6 = puVar3;
    }
    puVar3 = &unknown_var_7880_ptr;
  }
  else {
    if (uVar9 != 0) {
      uVar5 = uVar8;
      do {
        if (*(int64_t *)(*plStack_58 + 0x1b8) != *(int64_t *)(plStack_58[uVar5] + 0x1b8))
        goto LAB_18034c020;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while (uVar4 < uVar9);
    }
    if (*(int64_t *)(*plStack_58 + 0x1b8) != 0) {
      if (uVar9 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        do {
          FUN_180076910(*(uint64_t *)(uVar8 + (int64_t)plStack_58),&plStackX_8);
          uVar8 = uVar8 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_18034bfb2;
    }
LAB_18034c020:
    puVar3 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
    puVar6 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar6 = puVar3;
    }
    puVar3 = &unknown_var_7792_ptr;
  }
  FUN_180627020(puVar3,puVar6);
LAB_18034bfb2:
  if (plStack_58 == (int64_t *)0x0) {
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t * FUN_18034c080(uint64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 0x109) = 0;
  plVar1 = (int64_t *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[5] = 0;
  *(int8_t *)(param_1 + 6) = 0;
  plVar1 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x109) = 0;
  *(int16_t *)(param_1 + 8) = 0x100;
  *(int32_t *)((int64_t)param_1 + 0x844) = 0xffffffff;
  return param_1;
}






// 函数: void FUN_18034c130(int64_t *param_1)
void FUN_18034c130(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_180207ea0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034c150(uint64_t *param_1)
void FUN_18034c150(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  void *puStack_128;
  uint64_t *puStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar5 = param_1;
  FUN_1803456e0();
  *puVar5 = &unknown_var_8496_ptr;
  plVar1 = puVar5 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  plVar2 = param_1 + 0x12;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  plVar3 = param_1 + 0x16;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = &system_data_buffer_ptr;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int8_t *)(param_1 + 0x22) = 0;
  puStack_128 = &system_data_buffer_ptr;
  uStack_110 = 0;
  puStack_120 = (uint64_t *)0x0;
  uStack_118 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_120 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
  *puVar5 = 0x6e6f74656c656b53;
  *(int32_t *)(puVar5 + 1) = 0x6d614e20;
  *(int16_t *)((int64_t)puVar5 + 0xc) = 0x65;
  uStack_118 = 0xd;
  FUN_1803460a0(param_1,&puStack_128,plVar1,0);
  puStack_128 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



uint64_t * FUN_18034c750(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  
  *param_1 = &unknown_var_8496_ptr;
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    FUN_18034dbe0(lVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  param_1[0x23] = 0;
  param_1[0x1a] = &system_data_buffer_ptr;
  if (param_1[0x1b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x16] = &system_data_buffer_ptr;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x16] = &system_state_ptr;
  param_1[0x12] = &system_data_buffer_ptr;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x12] = &system_state_ptr;
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x130);
  }
  return param_1;
}






// 函数: void FUN_18034c880(int64_t param_1)
void FUN_18034c880(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x118);
  if (lVar1 != 0) {
    FUN_18034dbe0(lVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(uint64_t *)(param_1 + 0x118) = 0;
  return;
}






// 函数: void FUN_18034c8f0(uint64_t param_1,int32_t param_2)
void FUN_18034c8f0(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plStackX_8;
  int64_t **pplStackX_18;
  int64_t *plStackX_20;
  int32_t uVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar8 = 0;
  uVar10 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  uVar5 = param_1;
  if ((*(int64_t *)(lVar1 + 0x260) != 0) &&
     (lVar6 = *(int64_t *)(lVar1 + 0xf0), *(int64_t *)(lVar1 + 0xf8) - lVar6 >> 3 != 0)) {
    pplStackX_18 = &plStackX_8;
    uVar9 = uVar8;
    do {
      plVar4 = *(int64_t **)(uVar9 + lVar6);
      plStackX_20 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      FUN_1802ee610(lVar1,plVar4);
      uVar2 = *(uint64_t *)(lVar1 + 0x260);
      plStackX_8 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      FUN_1802fc0f0(uVar2,plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
        if (*(char *)(lVar1 + 0x2d8) == '\0') {
          FUN_1802e7e20(lVar1);
        }
        else {
          FUN_18063ad30(*(int64_t *)(lVar1 + 0x28),*(int64_t *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70)
          ;
        }
        *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
      }
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar9 = uVar9 + 8;
      lVar6 = *(int64_t *)(lVar1 + 0xf0);
      uVar5 = *(int64_t *)(lVar1 + 0xf8) - lVar6 >> 3;
    } while ((uint64_t)(int64_t)(int)uVar7 < uVar5);
  }
  plVar4 = (int64_t *)FUN_1800b3590(uVar5,&pplStackX_18,param_1 + 0xb0,1,uVar10,uVar11);
  if ((*plVar4 == 0) || (*(char *)(param_1 + 0x110) != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (pplStackX_18 != (int64_t **)0x0) {
    (*(code *)(*pplStackX_18)[7])();
  }
  if (bVar3) {
    FUN_180208610(*(uint64_t *)(param_1 + 0x120),param_2);
    FUN_180208720(*(uint64_t *)(param_1 + 0x120));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034cae0(uint64_t param_1)
void FUN_18034cae0(uint64_t param_1)

{
  int8_t auStack_368 [32];
  int32_t uStack_348;
  void **appuStack_340 [2];
  uint64_t uStack_330;
  void *apuStack_328 [11];
  int32_t uStack_2d0;
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [72];
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [72];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_330 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_368;
  uStack_348 = 0;
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0xd;
  strcpy_s(auStack_2b0,0x40,&system_data_db48);
  FUN_1800b8300(apuStack_328,&puStack_2c8);
  uStack_2d0 = 0;
  uStack_348 = 1;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_2c8 = &system_state_ptr;
  puStack_268 = &unknown_var_3480_ptr;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0xe;
  strcpy_s(auStack_250,0x40,&system_data_db38);
  FUN_1800b8300(apuStack_328,&puStack_268);
  uStack_2d0 = 0;
  uStack_348 = 2;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_268 = &system_state_ptr;
  puStack_208 = &unknown_var_3480_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x14;
  strcpy_s(auStack_1f0,0x40,&system_data_db20);
  FUN_1800b8300(apuStack_328,&puStack_208);
  uStack_2d0 = 0;
  uStack_348 = 4;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_208 = &system_state_ptr;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x10;
  strcpy_s(auStack_190,0x40,&system_data_db08);
  FUN_1800b8300(apuStack_328,&puStack_1a8);
  uStack_2d0 = 1;
  uStack_348 = 8;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xf;
  strcpy_s(auStack_130,0x40,&system_data_db98);
  FUN_1800b8300(apuStack_328,&puStack_148);
  uStack_2d0 = 1;
  uStack_348 = 0x10;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x15;
  strcpy_s(auStack_d0,0x40,&system_data_db80);
  FUN_1800b8300(apuStack_328,&puStack_e8);
  uStack_2d0 = 1;
  uStack_348 = 0x20;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x10;
  strcpy_s(auStack_70,0x40,&system_data_db68);
  FUN_1800b8300(apuStack_328,&puStack_88);
  uStack_2d0 = 3;
  uStack_348 = 0x40;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_368);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034cfa0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034cfa0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if ((*(int *)(param_2 + 0x10) == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_db48,param_3,param_4,0xfffffffffffffffe)
     , iVar2 == 0)) {
    FUN_18034d530(param_1);
    lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
    if (lVar5 != 0) {
      FUN_1802fb960(lVar5,*(int64_t *)(param_1 + 0x18) + 0x70,*(int8_t *)(param_1 + 0x110));
    }
    return;
  }
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,param_4,uVar6,&system_data_buffer_ptr,0,0,0);
  *(int8_t *)puVar3 = 0;
  FUN_18064e990(puVar3);
  *puVar3 = 0x6f6974616d696e41;
  *(int32_t *)(puVar3 + 1) = 0x614e206e;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x656d;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  if (*(int *)(param_2 + 0x10) == 0xe) {
    pcVar4 = *(char **)(param_2 + 8);
    lVar5 = (int64_t)puVar3 - (int64_t)pcVar4;
    do {
      pcVar1 = pcVar4 + lVar5;
      if (*pcVar4 != *pcVar1) break;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18034d530(int32_t param_1)
void FUN_18034d530(int32_t param_1)

{
  int64_t lVar1;
  float *pfVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t in_RCX;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int32_t extraout_XMM0_Da;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  void ***pppuVar11;
  int32_t uVar12;
  void **appuStack_100 [2];
  code *pcStack_f0;
  void *puStack_e8;
  void *puStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  int64_t alStack_b8 [3];
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int16_t uStack_88;
  uint64_t uStack_86;
  uint64_t uStack_7e;
  int16_t uStack_76;
  uint64_t uStack_68;
  int64_t **pplStack_60;
  int64_t *plStack_58;
  int64_t **pplStack_50;
  uint64_t uVar10;
  
  uStack_68 = 0xfffffffffffffffe;
  uVar8 = 0;
  if ((*(int64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260) == 0) && (0 < *(int *)(in_RCX + 0x80))) {
    plVar3 = (int64_t *)FUN_1800b3970(in_RCX,&plStackX_18,in_RCX + 0x70,1);
    lVar1 = *plVar3;
    param_1 = extraout_XMM0_Da;
    if (plStackX_18 != (int64_t *)0x0) {
      param_1 = (**(code **)(*plStackX_18 + 0x38))();
    }
    if (lVar1 != 0) {
      plVar3 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3);
      *plVar3 = (int64_t)&unknown_var_1864_ptr;
      *plVar3 = (int64_t)&unknown_var_1608_ptr;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (int64_t)&unknown_var_1912_ptr;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      plVar3[0xb] = 0;
      plStackX_10 = plVar3;
      FUN_1802f8a10(plVar3,lVar1);
      uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x240,0x10,3);
      plVar5 = (int64_t *)FUN_1802fb490(uVar4);
      plStackX_20 = plVar5;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      FUN_1802fa090(plVar5,lVar1,plVar3);
      param_1 = FUN_1802eeb00(*(uint64_t *)(in_RCX + 0x18),plVar5);
      lVar1 = *(int64_t *)(in_RCX + 0x18);
      lVar7 = *(int64_t *)(lVar1 + 0xf0);
      if (*(int64_t *)(lVar1 + 0xf8) - lVar7 >> 3 != 0) {
        pplStack_60 = &plStackX_10;
        uVar10 = uVar8;
        do {
          plVar3 = *(int64_t **)(uVar8 + lVar7);
          plStack_58 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          FUN_1802ee610(lVar1,plVar3);
          uVar4 = *(uint64_t *)(lVar1 + 0x260);
          pplStack_50 = &plStackX_10;
          plStackX_10 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          param_1 = FUN_1802fc0f0(uVar4,plStackX_10);
          if (plStackX_10 != (int64_t *)0x0) {
            param_1 = (**(code **)(*plStackX_10 + 0x38))();
          }
          if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
            if (*(char *)(lVar1 + 0x2d8) == '\0') {
              param_1 = FUN_1802e7e20(lVar1);
            }
            else {
              param_1 = FUN_18063ad30(*(int64_t *)(lVar1 + 0x28),*(int64_t *)(lVar1 + 0x28) + 0xf8
                                      ,lVar1 + 0x70);
            }
            *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
          }
          if (plVar3 != (int64_t *)0x0) {
            param_1 = (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar9;
          uVar8 = uVar8 + 8;
          lVar7 = *(int64_t *)(lVar1 + 0xf0);
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(lVar1 + 0xf8) - lVar7 >> 3));
      }
      if (plVar5 != (int64_t *)0x0) {
        param_1 = (**(code **)(*plVar5 + 0x38))(plVar5);
      }
    }
  }
  lVar1 = *(int64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260);
  FUN_1800b3510(param_1,&plStackX_8,in_RCX + 0x90);
  if (((lVar1 != 0) && (plStackX_8 != (int64_t *)0x0)) && (0.0 < *(double *)(in_RCX + 0xf0))) {
    puStack_d8 = &system_data_buffer_ptr;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    plStackX_10 = alStack_b8;
    alStack_b8[0] = 0;
    alStack_b8[1] = 0;
    alStack_b8[2] = 0;
    uStack_a0 = 3;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_76 = 0;
    uStack_86 = 0;
    uStack_7e = 0;
    plVar3 = *(int64_t **)(plStackX_8[0x15] + 0x88);
    pcStack_f0 = (code *)&unknown_var_5296_ptr;
    puStack_e8 = &unknown_var_5280_ptr;
    appuStack_100[0] = &puStack_d8;
    pppuVar11 = appuStack_100;
    (**(code **)(*plVar3 + 0x60))(plVar3,&system_data_c8f0,plStackX_8[0x15] + 0xc,0,pppuVar11);
    uVar12 = (int32_t)((uint64_t)pppuVar11 >> 0x20);
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(appuStack_100,0,0);
    }
    lVar1 = alStack_b8[0];
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x1b0,8,3);
    puVar6 = (uint64_t *)FUN_18034dd90(uVar4);
    *(uint64_t **)(in_RCX + 0x118) = puVar6;
    if ('\0' < (char)plStackX_8[0x17]) {
      *puVar6 = 0;
      puVar6[1] = 0;
      pfVar2 = *(float **)(lVar1 + 8);
      uVar8 = CONCAT44(uVar12,((pfVar2[(uint64_t)*(ushort *)(lVar1 + 0x10) - 1] - *pfVar2) + 1.0) *
                              0.033333335);
      FUN_180404050(*(uint64_t *)(in_RCX + 0x118),&plStackX_8,(int)*pfVar2,
                    (int)pfVar2[(uint64_t)*(ushort *)(lVar1 + 0x10) - 1],uVar8);
      FUN_180300970(*(uint64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260),0,
                    *(uint64_t *)(in_RCX + 0x118),0x4004,uVar8 & 0xffffffff00000000,
                    (float)*(double *)(in_RCX + 0xf0));
    }
    FUN_1800739f0(&puStack_d8);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}







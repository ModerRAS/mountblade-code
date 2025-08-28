#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part173.c - 10 个函数

// 函数: void FUN_180158780(int64_t *param_1,int param_2)
void FUN_180158780(int64_t *param_1,int param_2)

{
  code *pcVar1;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  void *puStack_40;
  int8_t *puStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  uint64_t uStack_18;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_2 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &system_config_ptr;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&unknown_var_7676_ptr);
    (*pcVar1)(param_1,&puStack_40,0);
  }
  else if (param_2 == 1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &system_config_ptr;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&unknown_var_7676_ptr);
    (*pcVar1)(param_1,&puStack_40,0x3f800000);
  }
  else if (param_2 == 2) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &system_config_ptr;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&unknown_var_7676_ptr);
    (*pcVar1)(param_1,&puStack_40,0x40000000);
  }
  else {
    if (param_2 != 3) goto LAB_180158962;
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &system_config_ptr;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&unknown_var_7676_ptr);
    (*pcVar1)(param_1,&puStack_40,0x40400000);
  }
  puStack_40 = &system_state_ptr;
LAB_180158962:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_68);
}



int64_t * FUN_180158990(int64_t param_1,int64_t *param_2,int param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int *piVar4;
  int64_t lVar5;
  
  iVar3 = _Mtx_lock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar1 = *(int64_t *)(param_1 + 0x38);
  piVar4 = *(int **)(lVar1 + ((uint64_t)(int64_t)param_3 % (uint64_t)*(uint *)(param_1 + 0x40)) *
                             8);
  do {
    if (piVar4 == (int *)0x0) {
      lVar5 = *(int64_t *)(param_1 + 0x40);
      piVar4 = *(int **)(lVar1 + lVar5 * 8);
LAB_180158a0c:
      if (piVar4 == *(int **)(lVar1 + lVar5 * 8)) {
        *param_2 = 0;
      }
      else {
        plVar2 = *(int64_t **)(piVar4 + 2);
        *param_2 = (int64_t)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      iVar3 = _Mtx_unlock(param_1 + 0xd0);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      return param_2;
    }
    if (param_3 == *piVar4) {
      lVar5 = *(int64_t *)(param_1 + 0x40);
      goto LAB_180158a0c;
    }
    piVar4 = *(int **)(piVar4 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180158a70(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int *piVar7;
  uint64_t uVar8;
  void *puStack_60;
  int32_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  iVar3 = _Mtx_lock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar1 = *(int64_t *)(param_1 + 0x38);
  for (piVar7 = *(int **)(lVar1 + ((uint64_t)(int64_t)param_2 %
                                  (uint64_t)*(uint *)(param_1 + 0x40)) * 8); piVar7 != (int *)0x0;
      piVar7 = *(int **)(piVar7 + 4)) {
    if (param_2 == *piVar7) {
      lVar5 = *(int64_t *)(param_1 + 0x40);
      goto LAB_180158aea;
    }
  }
  lVar5 = *(int64_t *)(param_1 + 0x40);
  piVar7 = *(int **)(lVar1 + lVar5 * 8);
LAB_180158aea:
  if (piVar7 != *(int **)(lVar1 + lVar5 * 8)) {
    plVar2 = *(int64_t **)(piVar7 + 2);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)(*plVar2 + 0x170))(plVar2);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    uVar8 = 1;
    goto LAB_180158cb6;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) != 0) {
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (int32_t *)0x0;
    uStack_50 = 0;
    puStack_58 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1b,0x13);
    *(int8_t *)puStack_58 = 0;
    uVar4 = FUN_18064e990(puStack_58);
    *puStack_58 = 0x65657266;
    puStack_58[1] = 0x6576655f;
    puStack_58[2] = 0x6320746e;
    puStack_58[3] = 0x646c756f;
    *(uint64_t *)(puStack_58 + 4) = 0x6e696620746f6e20;
    *(int16_t *)(puStack_58 + 6) = 0x2064;
    *(int8_t *)((int64_t)puStack_58 + 0x1a) = 0;
    uStack_50 = 0x1a;
    uStack_48._0_4_ = uVar4;
    FUN_180628380(&puStack_60,param_2);
    iVar3 = uStack_50 + 1;
    if (iVar3 != 0) {
      uVar4 = uStack_50 + 2;
      if (puStack_58 == (int32_t *)0x0) {
        if ((int)uVar4 < 0x10) {
          uVar4 = 0x10;
        }
        puStack_58 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
        *(int8_t *)puStack_58 = 0;
      }
      else {
        if (uVar4 <= (uint)uStack_48) goto LAB_180158c0c;
        puStack_58 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_58,uVar4,0x10,0x13);
      }
      uStack_48._0_4_ = FUN_18064e990(puStack_58);
    }
LAB_180158c0c:
    *(int16_t *)((uint64_t)uStack_50 + (int64_t)puStack_58) = 10;
    puVar6 = (int32_t *)&system_buffer_ptr;
    if (puStack_58 != (int32_t *)0x0) {
      puVar6 = puStack_58;
    }
    uStack_50 = iVar3;
    FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar6);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (int32_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
  }
  uVar8 = 0;
LAB_180158cb6:
  iVar3 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158ce0(uint64_t param_1,int64_t param_2)
void FUN_180158ce0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  lVar4 = core_system_data_memory;
  lVar1 = core_system_data_memory + 0xd0;
  iVar6 = _Mtx_lock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x38);
  lVar8 = *plVar2;
  plVar7 = plVar2;
  if (lVar8 == 0) {
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  lVar3 = plVar2[*(int64_t *)(lVar4 + 0x40)];
  while (lVar8 != lVar3) {
    cVar5 = (**(code **)(**(int64_t **)(lVar8 + 8) + 0xd8))();
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(**(int64_t **)(lVar8 + 8) + 0x90))();
      if ((((*(int64_t **)(lVar8 + 8))[0xb] == param_2) && (cVar5 == '\0')) &&
         (cVar5 = (**(code **)(**(int64_t **)(lVar8 + 8) + 0x80))(), cVar5 != '\0')) {
        (**(code **)(**(int64_t **)(lVar8 + 8) + 0x70))();
      }
    }
    lVar8 = *(int64_t *)(lVar8 + 0x10);
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  *(int8_t *)(lVar4 + 0x161) = 0;
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158e10(uint64_t param_1,int64_t param_2)
void FUN_180158e10(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  
  lVar5 = core_system_data_memory;
  lVar1 = core_system_data_memory + 0xd0;
  iVar7 = _Mtx_lock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  plVar2 = *(int64_t **)(lVar5 + 0x38);
  lVar8 = *plVar2;
  plVar9 = plVar2;
  if (lVar8 == 0) {
    plVar9 = plVar2 + 1;
    lVar8 = *plVar9;
    while (lVar8 == 0) {
      plVar9 = plVar9 + 1;
      lVar8 = *plVar9;
    }
  }
  lVar3 = plVar2[*(int64_t *)(lVar5 + 0x40)];
  while (lVar8 != lVar3) {
    lVar4 = (*(int64_t **)(lVar8 + 8))[0xb];
    cVar6 = (**(code **)(**(int64_t **)(lVar8 + 8) + 0xd8))();
    if ((cVar6 != '\0') && (lVar4 == param_2)) {
      (**(code **)(**(int64_t **)(lVar8 + 8) + 0x78))();
      (**(code **)(**(int64_t **)(lVar8 + 8) + 0xf8))
                (*(int64_t **)(lVar8 + 8),*(int32_t *)(SYSTEM_STATE_MANAGER + 0x1500));
    }
    lVar8 = *(int64_t *)(lVar8 + 0x10);
    while (lVar8 == 0) {
      plVar9 = plVar9 + 1;
      lVar8 = *plVar9;
    }
  }
  *(int8_t *)(lVar5 + 0x161) = 1;
  iVar7 = _Mtx_unlock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158f40(uint64_t param_1,int64_t param_2)
void FUN_180158f40(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t lStackX_20;
  
  lVar3 = core_system_data_memory;
  lVar1 = core_system_data_memory + 0xd0;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  plVar8 = *(int64_t **)(lVar3 + 0x38);
  lVar15 = *plVar8;
  if (lVar15 == 0) {
    plVar8 = plVar8 + 1;
    lVar15 = *plVar8;
    while (lVar15 == 0) {
      plVar8 = plVar8 + 1;
      lVar15 = *plVar8;
    }
  }
  plVar12 = (int64_t *)0x0;
  plVar6 = (int64_t *)0x0;
  plVar14 = (int64_t *)0x0;
  plVar7 = plVar12;
  plVar9 = plVar6;
  plVar13 = plVar14;
  if (lVar15 != *(int64_t *)(*(int64_t *)(lVar3 + 0x38) + *(int64_t *)(lVar3 + 0x40) * 8)) {
    do {
      plVar2 = *(int64_t **)(lVar15 + 8);
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar6 = plVar9;
      plVar14 = plVar13;
      if (plVar2[0xb] == param_2) {
        if (plVar9 < plVar7) {
          plVar6 = plVar9 + 1;
          *plVar9 = (int64_t)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        else {
          lStackX_20 = (int64_t)plVar9 - (int64_t)plVar13 >> 3;
          plVar7 = plVar13;
          if (lStackX_20 == 0) {
            lStackX_20 = 1;
LAB_18015906f:
            plVar6 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lStackX_20 * 8,3);
            plVar14 = plVar6;
          }
          else {
            lStackX_20 = lStackX_20 * 2;
            plVar6 = plVar12;
            plVar14 = plVar12;
            if (lStackX_20 != 0) goto LAB_18015906f;
          }
          for (; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            *plVar6 = *plVar7;
            *plVar7 = 0;
            plVar6 = plVar6 + 1;
          }
          *plVar6 = (int64_t)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar6 = plVar6 + 1;
          for (plVar7 = plVar13; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            if ((int64_t *)*plVar7 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar7 + 0x38))();
            }
          }
          if (plVar13 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar13);
          }
          plVar7 = plVar14 + lStackX_20;
        }
      }
      lVar15 = *(int64_t *)(lVar15 + 0x10);
      while (lVar15 == 0) {
        plVar8 = plVar8 + 1;
        lVar15 = *plVar8;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      plVar9 = plVar6;
      plVar13 = plVar14;
    } while (lVar15 != *(int64_t *)(*(int64_t *)(lVar3 + 0x38) + *(int64_t *)(lVar3 + 0x40) * 8))
    ;
  }
  uVar10 = (int64_t)plVar6 - (int64_t)plVar14 >> 3;
  plVar8 = plVar14;
  if (uVar10 != 0) {
    do {
      cVar4 = (**(code **)(*(int64_t *)*plVar8 + 0xd8))();
      if (cVar4 != '\0') {
        (**(code **)(*(int64_t *)*plVar8 + 0x68))();
      }
      uVar11 = (int)plVar12 + 1;
      plVar12 = (int64_t *)(uint64_t)uVar11;
      plVar8 = plVar8 + 1;
    } while ((uint64_t)(int64_t)(int)uVar11 < uVar10);
  }
  *(int16_t *)(lVar3 + 0x160) = 0;
  for (plVar8 = plVar14; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    if ((int64_t *)*plVar8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar8 + 0x38))();
    }
  }
  if (plVar14 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar14);
  }
  iVar5 = _Mtx_unlock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}



int64_t * FUN_180159210(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  iVar2 = _Mtx_lock(param_1 + 0xd0);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = (int)(*(int64_t *)(param_1 + 0x170) - *(int64_t *)(param_1 + 0x168) >> 3);
  if (iVar2 < 1) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x168) + -8 + (int64_t)iVar2 * 8);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    FUN_1800b8630(param_1 + 0x168,(int64_t)iVar2 + -1,param_3,param_4,uVar3,uVar4);
    *param_2 = (int64_t)plVar1;
  }
  iVar2 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801592f0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801592f0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  
  lVar3 = core_system_data_memory;
  uVar11 = 0xfffffffffffffffe;
  lVar1 = core_system_data_memory + 0xd0;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(char *)(lVar3 + 0x162) != '\0') goto LAB_180159499;
  puVar5 = (uint64_t *)0x0;
  *(int32_t *)(param_2 + 2) = 0;
  if (param_2[7] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[7] = 0;
  param_2[8] = 0;
  (**(code **)(param_2[3] + 0x10))(param_2 + 3,&system_buffer_ptr);
  *(int16_t *)(param_2 + 9) = 0;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar9 = *(uint64_t **)(lVar3 + 0x170);
  if (puVar9 < *(uint64_t **)(lVar3 + 0x178)) {
    *(uint64_t **)(lVar3 + 0x170) = puVar9 + 1;
    *puVar9 = param_2;
    goto LAB_180159499;
  }
  puVar6 = *(uint64_t **)(lVar3 + 0x168);
  lVar7 = (int64_t)puVar9 - (int64_t)puVar6 >> 3;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1801593e3:
    puVar5 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(lVar3 + 0x180),param_4,uVar11);
    puVar9 = *(uint64_t **)(lVar3 + 0x170);
    puVar6 = *(uint64_t **)(lVar3 + 0x168);
    puVar10 = puVar5;
  }
  else {
    lVar7 = lVar7 * 2;
    puVar10 = puVar5;
    if (lVar7 != 0) goto LAB_1801593e3;
  }
  for (; puVar6 != puVar9; puVar6 = puVar6 + 1) {
    *puVar5 = *puVar6;
    *puVar6 = 0;
    puVar5 = puVar5 + 1;
  }
  *puVar5 = param_2;
  plVar2 = *(int64_t **)(lVar3 + 0x170);
  plVar8 = *(int64_t **)(lVar3 + 0x168);
  if (plVar8 != plVar2) {
    do {
      if ((int64_t *)*plVar8 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar8 + 0x38))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
    plVar8 = *(int64_t **)(lVar3 + 0x168);
  }
  if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  *(uint64_t **)(lVar3 + 0x168) = puVar10;
  *(uint64_t **)(lVar3 + 0x170) = puVar5 + 1;
  *(uint64_t **)(lVar3 + 0x178) = puVar10 + lVar7;
LAB_180159499:
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}





// 函数: void FUN_1801594d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801594d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *puStack_50;
  int64_t lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int8_t uStack_28;
  
  uVar2 = 0xfffffffffffffffe;
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_180627c50(&puStack_50);
  uStack_30 = 0xffffffff;
  uStack_2c = *(int32_t *)(param_2 + 0x20);
  uStack_28 = 1;
  lVar1 = (int64_t)*(int *)(param_1 + 0xc0) * 0x30 + param_1;
  FUN_18005d190(lVar1,&puStack_50,param_3,param_4,uVar2);
  *(int32_t *)(lVar1 + 0x20) = uStack_30;
  *(int32_t *)(lVar1 + 0x24) = uStack_2c;
  *(int8_t *)(lVar1 + 0x28) = uStack_28;
  puStack_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801595d0(uint64_t param_1,int64_t param_2)
void FUN_1801595d0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  void *puStack_40;
  int8_t *puStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  uint64_t uStack_18;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  uStack_58 = 0;
  puStack_40 = &system_config_ptr;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 6;
  lStack_48 = param_2;
  strcpy_s(auStack_28,0x10,&unknown_var_2588_ptr);
  uStack_58 = 2;
  FUN_1806279c0(param_2,&puStack_40);
  uStack_58 = 1;
  puStack_40 = &system_state_ptr;
  iVar1 = *(int *)(param_2 + 0x10) + 7;
  FUN_1806277c0(param_2,iVar1);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0x2f73646e756f53;
  *(int *)(param_2 + 0x10) = iVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_78);
}



int64_t FUN_1801596c0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 9;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x78742e7344495547;
  *(int16_t *)(puVar1 + 1) = 0x74;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



int64_t FUN_180159730(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 0x13;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x746144646e756f53;
  puVar1[1] = 0x732e6e65672e7361;
  *(int32_t *)(puVar1 + 2) = 0x666465;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



int64_t FUN_1801597a0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 0x14;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x726150646e756f53;
  puVar1[1] = 0x2e6e65672e736d61;
  *(int32_t *)(puVar1 + 2) = 0x66646573;
  *(int8_t *)((int64_t)puVar1 + 0x14) = 0;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



uint64_t
FUN_180159820(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801595d0();
  FUN_1806281a0(param_2,&unknown_var_7428_ptr,param_3,param_4,1,uVar1);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180159870(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801595d0();
  FUN_1806281a0(param_2,&unknown_var_7428_ptr,param_3,param_4,2,uVar1);
  FUN_1806281a0(param_2,*(uint64_t *)
                         (&unknown_var_7376_ptr + (int64_t)*(int *)(SYSTEM_STATE_MANAGER + 0x15e0) * 8),param_3,
                param_4,1);
  return param_2;
}





// 函数: void FUN_1801598f0(void)
void FUN_1801598f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015a900(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18015a900(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int32_t auStackX_10 [2];
  uint64_t auStackX_18 [2];
  int32_t uVar5;
  uint64_t uVar6;
  int32_t uStack_98;
  int32_t uStack_94;
  void *puStack_80;
  int64_t lStack_78;
  uint uStack_70;
  int32_t *apuStack_60 [2];
  code *pcStack_50;
  void *puStack_48;
  
  uVar1 = core_system_data_memory;
  uVar6 = 0xfffffffffffffffe;
  auStackX_10[0] = 0;
  auStackX_18[0] = param_3;
  FUN_1801595d0(param_1,&puStack_80);
  uVar5 = 1;
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while ((&unknown_var_7429_ptr)[lVar4] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (iVar3 < 1) {
    pcStack_50 = FUN_18015c0a0;
    puStack_48 = &unknown_var_6496_ptr;
    apuStack_60[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    uStack_98 = (int32_t)uVar1;
    uStack_94 = (int32_t)((uint64_t)uVar1 >> 0x20);
    *apuStack_60[0] = uStack_98;
    apuStack_60[0][1] = uStack_94;
    *(int32_t **)(apuStack_60[0] + 2) = auStackX_10;
    *(uint64_t **)(apuStack_60[0] + 4) = auStackX_18;
    FUN_18015b810(uStack_98,0,4,1,0xffffffffffffffff,apuStack_60,uVar5,uVar6);
    puStack_80 = &system_data_buffer_ptr;
    if (lStack_78 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1806277c0(&puStack_80,uStack_70 + iVar3);
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)uStack_70 + lStack_78,&unknown_var_7428_ptr,(int64_t)((int)lVar4 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015aa70(int64_t *param_1,int param_2,int param_3)
void FUN_18015aa70(int64_t *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int aiStackX_10 [4];
  int64_t lStackX_20;
  void *puStack_a0;
  int64_t lStack_98;
  uint uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int *piStack_70;
  int32_t *apuStack_68 [2];
  code *pcStack_58;
  void *puStack_50;
  uint64_t uStack_48;
  int32_t **ppuStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar6 = (int64_t)param_2;
  lStackX_20 = (int64_t)param_3;
  if (lVar6 < lStackX_20) {
    do {
      if (lVar6 == 3) {
        plVar7 = (int64_t *)(*param_1 + 0x140);
      }
      else {
        plVar7 = (int64_t *)(*param_1 + 0x120);
      }
      aiStackX_10[0] = 0;
      iVar2 = *(int *)param_1[1];
      FUN_1801595d0(0,&puStack_a0);
      lVar3 = *(int64_t *)(&system_data_d698 + (int64_t)iVar2 * 8);
      if (lVar3 != 0) {
        lVar5 = -1;
        do {
          lVar4 = lVar5;
          lVar5 = lVar4 + 1;
        } while (*(char *)(lVar3 + lVar5) != '\0');
        if (0 < (int)lVar5) {
          FUN_1806277c0(&puStack_a0,uStack_90 + (int)lVar5);
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)uStack_90 + lStack_98,lVar3,(int64_t)((int)lVar4 + 2));
        }
      }
      lVar3 = *(int64_t *)(&unknown_var_7376_ptr + lVar6 * 8);
      if (lVar3 != 0) {
        lVar5 = -1;
        do {
          lVar4 = lVar5;
          lVar5 = lVar4 + 1;
        } while (*(char *)(lVar3 + lVar5) != '\0');
        if (0 < (int)lVar5) {
          FUN_1806277c0(&puStack_a0,uStack_90 + (int)lVar5);
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)uStack_90 + lStack_98,lVar3,(int64_t)((int)lVar4 + 2));
        }
      }
      ppuStack_40 = apuStack_68;
      uStack_80 = &puStack_a0;
      piStack_70 = aiStackX_10;
      pcStack_58 = FUN_18015c190;
      puStack_50 = &unknown_var_6736_ptr;
      uStack_78 = plVar7;
      apuStack_68[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
      *apuStack_68[0] = (int32_t)uStack_80;
      apuStack_68[0][1] = uStack_80._4_4_;
      apuStack_68[0][2] = (int32_t)uStack_78;
      apuStack_68[0][3] = uStack_78._4_4_;
      *(int **)(apuStack_68[0] + 4) = piStack_70;
      FUN_18015b810(plVar7[1] - *plVar7,0,(plVar7[1] - *plVar7) / 0x28,1,0xffffffffffffffff,
                    apuStack_68);
      piVar1 = (int *)(*(int64_t *)param_1[2] + lVar6 * 4);
      *piVar1 = *piVar1 + aiStackX_10[0];
      puStack_a0 = &system_data_buffer_ptr;
      if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_98 = 0;
      uStack_88 = 0;
      puStack_a0 = &system_state_ptr;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lStackX_20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18015acc0(int64_t *param_1,int param_2,int param_3)

{
  int iVar1;
  int64_t lVar2;
  uint *puVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uStack_80;
  int64_t lStack_78;
  void *puStack_68;
  int8_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int16_t uStack_30;
  int8_t uStack_2e;
  
  uVar5 = (uint64_t)param_2;
  if ((int64_t)uVar5 < (int64_t)param_3) {
    lVar10 = uVar5 * 0x28;
    lVar11 = (int64_t)param_3 - uVar5;
    do {
      lVar9 = 0;
      lVar2 = *param_1;
      puStack_68 = &system_data_buffer_ptr;
      uStack_50 = 0;
      puStack_60 = (int8_t *)0x0;
      uStack_58 = 0;
      FUN_1806277c0(&puStack_68,*(int32_t *)(lVar2 + 0x10));
      if (*(int *)(lVar2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_60,*(uint64_t *)(lVar2 + 8),*(int *)(lVar2 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar2 + 8) != 0) {
        uStack_58 = 0;
        if (puStack_60 != (int8_t *)0x0) {
          *puStack_60 = 0;
        }
        uStack_50 = uStack_50 & 0xffffffff;
      }
      lVar2 = *(int64_t *)param_1[1];
      iVar1 = *(int *)(lVar2 + 0x10 + lVar10);
      if (0 < iVar1) {
        FUN_1806277c0(&puStack_68,uStack_58 + iVar1);
                    // WARNING: Subroutine does not return
        memcpy(puStack_60 + uStack_58,*(uint64_t *)(lVar2 + 8 + lVar10),
               (int64_t)(*(int *)(lVar2 + 0x10 + lVar10) + 1));
      }
      uStack_80 = 0;
      lStack_78 = 0;
      puVar8 = &system_buffer_ptr;
      if (puStack_60 != (int8_t *)0x0) {
        puVar8 = puStack_60;
      }
      uVar5 = FUN_18062dee0(&uStack_80,puVar8,&unknown_var_4880_ptr);
      lVar2 = lStack_78;
      if (lStack_78 != 0) {
        lStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_2e = 3;
        uVar6 = _ftelli64(lStack_78);
        _fseeki64(lVar2,0,2);
        uVar7 = _ftelli64(lVar2);
        _fseeki64(lVar2,uVar6,0);
        System_BufferManager(&lStack_48,uVar7);
        fread(uStack_40,1,uVar7,lVar2);
        fclose(lVar2);
        lStack_78 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
        UNLOCK();
        uVar5 = 0xffffffff;
        uVar4 = 0xffffffff;
        if (0 < (int64_t)(int)uStack_38) {
          do {
            uVar4 = *(uint *)(&unknown_var_5616_ptr +
                             (uVar5 & 0xff ^ (uint64_t)*(byte *)(lVar9 + lStack_48)) * 4) ^
                    (uint)(uVar5 >> 8);
            uVar5 = (uint64_t)uVar4;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)uStack_38);
        }
        puVar3 = (uint *)param_1[2];
        LOCK();
        uVar5 = (uint64_t)*puVar3;
        *puVar3 = *puVar3 + ~uVar4;
        UNLOCK();
        if (((char)uStack_30 == '\0') && (lStack_48 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      if (lStack_78 != 0) {
        fclose(lStack_78);
        lStack_78 = 0;
        LOCK();
        uVar5 = (uint64_t)SYSTEM_FILE_COUNTER_ADDR;
        UNLOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
      }
      puStack_68 = &system_data_buffer_ptr;
      if (puStack_60 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar10 = lVar10 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part172.c - 2 个函数

// 函数: void FUN_1801570c0(uint64_t *param_1)
void FUN_1801570c0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  ulonglong uVar9;
  
  *param_1 = &unknown_var_8656_ptr;
  *(int8_t *)((longlong)param_1 + 0x162) = 1;
  plVar2 = param_1 + 0x1a;
  plStackX_20 = plVar2;
  iVar5 = _Mtx_lock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_1[9] != 0) {
    do {
      uVar11 = uVar10 % (ulonglong)*(uint *)(param_1 + 8);
      iVar5 = (int)uVar9;
      for (piVar6 = *(int **)(param_1[7] + uVar11 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 4)) {
        if (iVar5 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_1801571ef;
          break;
        }
      }
      FUN_18066c220(param_1 + 10,&plStackX_10,(ulonglong)*(uint *)(param_1 + 8),
                    *(int32_t *)(param_1 + 9),1);
      piVar6 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)((longlong)param_1 + 0x5c));
      *piVar6 = iVar5;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      if ((char)plStackX_10 != '\0') {
        uVar11 = uVar10 % ((ulonglong)plStackX_10 >> 0x20);
        FUN_18015bdc0(param_1 + 6);
      }
      *(uint64_t *)(piVar6 + 4) = *(uint64_t *)(param_1[7] + uVar11 * 8);
      *(int **)(param_1[7] + uVar11 * 8) = piVar6;
      param_1[9] = param_1[9] + 1;
LAB_1801571ef:
      plStackX_18 = *(longlong **)(piVar6 + 2);
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      uVar8 = iVar5 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = (longlong)(int)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)param_1[9]);
  }
  plVar1 = param_1 + 6;
  FUN_18015b450(plVar1);
  plVar3 = param_1 + 0x2d;
  plVar4 = (longlong *)param_1[0x2e];
  plVar7 = (longlong *)*plVar3;
  if (plVar7 != plVar4) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
    plVar7 = (longlong *)*plVar3;
  }
  param_1[0x2e] = plVar7;
  iVar5 = _Mtx_unlock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_1[0x4a] != 0) {
    free();
    param_1[0x4a] = 0;
  }
  plStackX_10 = param_1 + 0x44;
  FUN_18015b4f0();
  if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d] + 0x38))();
  }
  plStackX_10 = plVar3;
  FUN_180057830(plVar3);
  plStackX_10 = param_1 + 0x28;
  FUN_180048980();
  plStackX_10 = param_1 + 0x24;
  FUN_180048980();
  plStackX_10 = plVar2;
  _Mtx_destroy_in_situ(plVar2);
  plStackX_10 = param_1 + 0x16;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStackX_10 = param_1 + 0xc;
  _Mtx_destroy_in_situ();
  plStackX_10 = plVar1;
  FUN_18015b450(plVar1);
  if ((1 < (ulonglong)param_1[8]) && (param_1[7] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180157a52)
// WARNING: Removing unreachable block (ram,0x000180157b0e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180157390(longlong *param_1,longlong *param_2,longlong param_3,uint64_t param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  void *puVar11;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  uint64_t uStackX_20;
  void *puStack_c8;
  uint64_t *puStack_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t auStack_a0 [2];
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  void **ppuStack_70;
  longlong *plStack_68;
  uint64_t uStack_60;
  longlong *plStack_58;
  
  plVar2 = core_system_data_memory;
  uStack_60 = 0xfffffffffffffffe;
  uStack_a8 = 0;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  if ((char)core_system_data_memory[0x42] != '\0') {
    plVar2 = (longlong *)core_system_data_memory[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar2 + 0x28))();
    return param_2;
  }
  plVar1 = core_system_data_memory + 0x1a;
  plStack_58 = plVar1;
  iVar4 = _Mtx_lock(plVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(int *)(core_system_data_memory + 0x9a0) != 0) {
    puStack_c8 = &system_data_buffer_ptr;
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puVar7 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,&unknown_var_3251_ptr);
    *(int8_t *)puVar7 = 0;
    puStack_c0 = puVar7;
    uVar5 = FUN_18064e990(puVar7);
    *puVar7 = 0x655f657461657263;
    *(int32_t *)(puVar7 + 1) = 0x746e6576;
    *(int16_t *)((longlong)puVar7 + 0xc) = 0x20;
    uStack_b8 = 0xd;
    iVar4 = *(int *)(param_3 + 0x10);
    uStack_b0._0_4_ = uVar5;
    if (0 < iVar4) {
      if ((iVar4 != -0xd) && (uVar5 < iVar4 + 0xeU)) {
        puVar7 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar7,iVar4 + 0xeU,0x10,0x13);
        puStack_c0 = puVar7;
        uStack_b0._0_4_ = FUN_18064e990(puVar7);
        iVar4 = *(int *)(param_3 + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar7 + 0xd),*(uint64_t *)(param_3 + 8),
             (longlong)(iVar4 + 1));
    }
    if (puVar7 == (uint64_t *)0x0) {
      puVar7 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar7 = 0;
LAB_180157585:
      puStack_c0 = puVar7;
      uStack_b0._0_4_ = FUN_18064e990(puVar7);
    }
    else if (uVar5 < 0xf) {
      puVar7 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar7,0xf,0x10,0x13);
      goto LAB_180157585;
    }
    *(int16_t *)((longlong)puVar7 + 0xd) = 10;
    uStack_b8 = 0xe;
    puVar8 = (uint64_t *)&system_buffer_ptr;
    if (puVar7 != (uint64_t *)0x0) {
      puVar8 = puVar7;
    }
    FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar8);
    puStack_c8 = &system_data_buffer_ptr;
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &system_state_ptr;
    param_4 = uStackX_20;
    param_3 = lStackX_18;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    plVar2 = (longlong *)plVar2[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    goto LAB_180157b3b;
  }
  ppuStack_70 = &puStack_98;
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  auStack_a0[0] = 0;
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_3 + 8);
  }
  FUN_180627c50(&puStack_98,puVar11);
  iVar4 = (int)plVar2[5];
  *(int *)(plVar2 + 5) = iVar4 + 1;
  (**(code **)(*plVar2 + 0x208))(plVar2,&plStackX_8,auStack_a0,iVar4,param_4);
  if (*(int *)(core_system_data_memory + 0x9a0) != 0) {
    puStack_c8 = &system_data_buffer_ptr;
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puStack_c0 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x15,0x13);
    *(int8_t *)puStack_c0 = 0;
    uVar5 = FUN_18064e990(puStack_c0);
    *(int32_t *)puStack_c0 = 0x61657263;
    *(int32_t *)((longlong)puStack_c0 + 4) = 0x5f646574;
    *(int32_t *)((longlong)puStack_c0 + 8) = 0x6e657665;
    *(int32_t *)((longlong)puStack_c0 + 0xc) = 0x6e692074;
    *(int32_t *)((longlong)puStack_c0 + 0x10) = 0x20786564;
    *(int8_t *)((longlong)puStack_c0 + 0x14) = 0;
    uStack_b8 = 0x14;
    uStack_b0._0_4_ = uVar5;
    FUN_180628380(&puStack_c8,iVar4);
    uVar5 = uStack_b8 + 0xe;
    if (uVar5 != 0) {
      uVar6 = uStack_b8 + 0xf;
      if (puStack_c0 == (uint64_t *)0x0) {
        if ((int)uVar6 < 0x10) {
          uVar6 = 0x10;
        }
        puStack_c0 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar6,0x13);
        *(int8_t *)puStack_c0 = 0;
      }
      else {
        if (uVar6 <= (uint)uStack_b0) goto LAB_1801577b2;
        puStack_c0 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_c0,uVar6,0x10,0x13);
      }
      uStack_b0._0_4_ = FUN_18064e990(puStack_c0);
    }
LAB_1801577b2:
    puVar7 = (uint64_t *)((ulonglong)uStack_b8 + (longlong)puStack_c0);
    *puVar7 = 0x6820746e65766520;
    *(int32_t *)(puVar7 + 1) = 0x6c646e61;
    *(int16_t *)((longlong)puVar7 + 0xc) = 0x2065;
    *(int8_t *)((longlong)puVar7 + 0xe) = 0;
    uStack_b8 = uVar5;
    FUN_180628380(&puStack_c8,(int)plStackX_8[10]);
    iVar4 = uStack_b8 + 1;
    if (iVar4 != 0) {
      uVar5 = uStack_b8 + 2;
      if (puStack_c0 == (uint64_t *)0x0) {
        if ((int)uVar5 < 0x10) {
          uVar5 = 0x10;
        }
        puStack_c0 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar5,0x13);
        *(int8_t *)puStack_c0 = 0;
      }
      else {
        if (uVar5 <= (uint)uStack_b0) goto LAB_180157862;
        puStack_c0 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_c0,uVar5,0x10,0x13);
      }
      uStack_b0._0_4_ = FUN_18064e990(puStack_c0);
    }
LAB_180157862:
    *(int16_t *)((ulonglong)uStack_b8 + (longlong)puStack_c0) = 10;
    puVar7 = (uint64_t *)&system_buffer_ptr;
    if (puStack_c0 != (uint64_t *)0x0) {
      puVar7 = puStack_c0;
    }
    uStack_b8 = iVar4;
    FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar7);
    puStack_c8 = &system_data_buffer_ptr;
    if (puStack_c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &system_state_ptr;
  }
  ppuStack_70 = (void **)CONCAT44(ppuStack_70._4_4_,(int)plStackX_8[10]);
  plStack_68 = plStackX_8;
  (**(code **)(*plStackX_8 + 0x28))();
  FUN_18015b6b0(plVar2 + 6,&puStack_c8,&ppuStack_70);
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  if ((param_5 != '\0') &&
     ((plStackX_8 == (longlong *)0x0 || (cVar3 = (**(code **)(*plStackX_8 + 0xd8))(), cVar3 == '\0')
      ))) {
    puStack_c8 = &system_data_buffer_ptr;
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puVar9 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x18,0x13);
    *(int8_t *)puVar9 = 0;
    puStack_c0 = (uint64_t *)puVar9;
    uVar5 = FUN_18064e990(puVar9);
    *puVar9 = 0x6e756f53;
    puVar9[1] = 0x76652064;
    puVar9[2] = 0x20746e65;
    puVar9[3] = 0x68746977;
    *(uint64_t *)(puVar9 + 4) = 0x2220656d616e20;
    uStack_b8 = 0x17;
    iVar4 = *(int *)(param_3 + 0x10);
    uStack_b0._0_4_ = uVar5;
    if (0 < iVar4) {
      if ((iVar4 != -0x17) && (uVar5 < iVar4 + 0x18U)) {
        puVar9 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar9,iVar4 + 0x18U,0x10,0x13);
        puStack_c0 = (uint64_t *)puVar9;
        uStack_b0._0_4_ = FUN_18064e990(puVar9);
        iVar4 = *(int *)(param_3 + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar9 + 0x17),*(uint64_t *)(param_3 + 8),
             (longlong)(iVar4 + 1));
    }
    if (puVar9 == (int32_t *)0x0) {
      puVar9 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x31,0x13);
      *(int8_t *)puVar9 = 0;
LAB_180157a6e:
      puStack_c0 = (uint64_t *)puVar9;
      uStack_b0._0_4_ = FUN_18064e990(puVar9);
    }
    else if (uVar5 < 0x31) {
      puVar9 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar9,0x31,0x10,0x13);
      goto LAB_180157a6e;
    }
    *(int32_t *)((longlong)puVar9 + 0x17) = 0x6f632022;
    *(int32_t *)((longlong)puVar9 + 0x1b) = 0x20646c75;
    *(int32_t *)((longlong)puVar9 + 0x1f) = 0x20746f6e;
    *(int32_t *)((longlong)puVar9 + 0x23) = 0x67206562;
    *(uint64_t *)((longlong)puVar9 + 0x27) = 0x6465746172656e65;
    *(int16_t *)((longlong)puVar9 + 0x2f) = 0x21;
    uStack_b8 = 0x30;
    puVar10 = (int32_t *)&system_buffer_ptr;
    if (puVar9 != (int32_t *)0x0) {
      puVar10 = puVar9;
    }
    FUN_180626f80(puVar10);
    puStack_c8 = &system_data_buffer_ptr;
    if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar9);
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &system_state_ptr;
  }
  *param_2 = (longlong)plStackX_8;
  uStack_a8 = 1;
  plStackX_8 = (longlong *)0x0;
  ppuStack_70 = &puStack_98;
  puStack_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &system_state_ptr;
LAB_180157b3b:
  uStack_a8 = 1;
  iVar4 = _Mtx_unlock(plVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180157c4d)
// WARNING: Removing unreachable block (ram,0x000180157e88)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180157b70(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int32_t *puVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  void *puStack_b0;
  int32_t *puStack_a8;
  uint uStack_a0;
  uint64_t uStack_98;
  void **ppuStack_90;
  int32_t auStack_88 [2];
  void *puStack_80;
  longlong lStack_78;
  int32_t uStack_70;
  ulonglong uStack_68;
  int iStack_60;
  int32_t auStack_58 [2];
  longlong *plStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  
  plVar2 = core_system_data_memory;
  uStack_48 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if ((char)core_system_data_memory[0x42] != '\0') {
    plVar2 = (longlong *)core_system_data_memory[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar2 + 0x28))();
    return param_2;
  }
  plVar1 = core_system_data_memory + 0x1a;
  plStack_40 = plVar1;
  iVar5 = _Mtx_lock(plVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = *(int *)(plVar2[0x3f] + 0x50);
  if (iVar5 <= param_3) {
    FUN_1801582f0(plVar2,&ppuStack_90,
                  (longlong)(param_3 - iVar5) * 0x60 + *(longlong *)(plVar2[0x3f] + 0x30));
    *param_2 = (longlong)ppuStack_90;
    ppuStack_90 = (void **)0x0;
    goto LAB_180157eb5;
  }
  ppuStack_90 = &puStack_80;
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  auStack_88[0] = 1;
  lVar3 = plVar2[5];
  *(int *)(plVar2 + 5) = (int)lVar3 + 1;
  iStack_60 = param_3;
  (**(code **)(*plVar2 + 0x208))(plVar2,&plStackX_8,auStack_88,(int)lVar3,param_4);
  auStack_58[0] = (int32_t)plStackX_8[10];
  plStack_50 = plStackX_8;
  (**(code **)(*plStackX_8 + 0x28))();
  FUN_18015b6b0(plVar2 + 6,&puStack_b0,auStack_58);
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if ((param_5 != '\0') &&
     ((plStackX_8 == (longlong *)0x0 || (cVar4 = (**(code **)(*plStackX_8 + 0xd8))(), cVar4 == '\0')
      ))) {
    puStack_b0 = &system_data_buffer_ptr;
    uStack_98 = 0;
    puStack_a8 = (int32_t *)0x0;
    uStack_a0 = 0;
    puStack_a8 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)puStack_a8 = 0;
    uVar6 = FUN_18064e990(puStack_a8);
    *puStack_a8 = 0x6e756f53;
    puStack_a8[1] = 0x76652064;
    puStack_a8[2] = 0x20746e65;
    puStack_a8[3] = 0x68746977;
    puStack_a8[4] = 0x20646920;
    *(int16_t *)(puStack_a8 + 5) = 0x22;
    uStack_a0 = 0x15;
    uStack_98._0_4_ = uVar6;
    FUN_180628380(&puStack_b0,param_3);
    iVar5 = uStack_a0 + 0x19;
    if (iVar5 != 0) {
      uVar6 = uStack_a0 + 0x1a;
      if (puStack_a8 == (int32_t *)0x0) {
        if ((int)uVar6 < 0x10) {
          uVar6 = 0x10;
        }
        puStack_a8 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar6,0x13);
        *(int8_t *)puStack_a8 = 0;
      }
      else {
        if (uVar6 <= (uint)uStack_98) goto LAB_180157e02;
        puStack_a8 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_a8,uVar6,0x10,0x13);
      }
      uStack_98._0_4_ = FUN_18064e990(puStack_a8);
    }
LAB_180157e02:
    puVar7 = (int32_t *)((ulonglong)uStack_a0 + (longlong)puStack_a8);
    *puVar7 = 0x6f632022;
    puVar7[1] = 0x20646c75;
    puVar7[2] = 0x20746f6e;
    puVar7[3] = 0x67206562;
    *(uint64_t *)(puVar7 + 4) = 0x6465746172656e65;
    *(int16_t *)(puVar7 + 6) = 0x21;
    puVar7 = (int32_t *)&system_buffer_ptr;
    if (puStack_a8 != (int32_t *)0x0) {
      puVar7 = puStack_a8;
    }
    uStack_a0 = iVar5;
    FUN_180626f80(puVar7);
    puStack_b0 = &system_data_buffer_ptr;
    if (puStack_a8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_a8 = (int32_t *)0x0;
    uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
    puStack_b0 = &system_state_ptr;
  }
  *param_2 = (longlong)plStackX_8;
  plStackX_8 = (longlong *)0x0;
  ppuStack_90 = &puStack_80;
  puStack_80 = &system_data_buffer_ptr;
  if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_78 = 0;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  puStack_80 = &system_state_ptr;
LAB_180157eb5:
  iVar5 = _Mtx_unlock(plVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x00018015807b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180157ef0(longlong *param_1,longlong *param_2,uint64_t param_3,longlong param_4,
             longlong param_5,uint64_t param_6,int8_t param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t auStack_b0 [2];
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  int32_t uStack_88;
  void **ppuStack_80;
  int32_t auStack_78 [2];
  longlong *plStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  int8_t auStack_58 [32];
  
  plVar2 = core_system_data_memory;
  uStack_68 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if ((char)core_system_data_memory[0x42] == '\0') {
    plVar1 = core_system_data_memory + 0x1a;
    plStack_60 = plVar1;
    iVar4 = _Mtx_lock(plVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    lVar3 = plVar2[5];
    *(int *)(plVar2 + 5) = (int)lVar3 + 1;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &system_data_buffer_ptr;
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    auStack_b0[0] = 0;
    FUN_180627c50(&puStack_a8,param_3);
    (**(code **)(*plVar2 + 0x208))(plVar2,&plStackX_8,auStack_b0,(int)lVar3,param_6);
    *(int32_t *)(plStackX_8 + 2) = 2;
    plStackX_8[7] = param_4;
    plStackX_8[8] = param_5;
    *(int8_t *)(plStackX_8 + 9) = 0;
    *(int8_t *)((longlong)plStackX_8 + 0x49) = param_7;
    auStack_78[0] = (int32_t)plStackX_8[10];
    plStack_70 = plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    FUN_18015b6b0(plVar2 + 6,auStack_58,auStack_78);
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
    *param_2 = (longlong)plStackX_8;
    plStackX_8 = (longlong *)0x0;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &system_data_buffer_ptr;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a0 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    puStack_a8 = &system_state_ptr;
    iVar4 = _Mtx_unlock(plVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  else {
    plVar2 = (longlong *)core_system_data_memory[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180158286)

longlong *
FUN_1801580f0(longlong *param_1,longlong *param_2,uint64_t param_3,longlong param_4,
             uint64_t param_5,int8_t param_6,int8_t param_7)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  void *puVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t auStack_b0 [2];
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  int32_t uStack_88;
  void **ppuStack_80;
  int32_t auStack_78 [2];
  longlong *plStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  int8_t auStack_58 [32];
  
  uStack_68 = 0xfffffffffffffffe;
  plStackX_10 = param_2;
  if ((char)param_1[0x42] == '\0') {
    plVar1 = param_1 + 0x1a;
    plStack_60 = plVar1;
    iVar3 = _Mtx_lock(plVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &system_data_buffer_ptr;
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    auStack_b0[0] = 0;
    FUN_180627c50(&puStack_a8,param_3);
    lVar2 = param_1[5];
    *(int *)(param_1 + 5) = (int)lVar2 + 1;
    (**(code **)(*param_1 + 0x208))(param_1,&plStackX_8,auStack_b0,(int)lVar2,param_5);
    *(int32_t *)(plStackX_8 + 2) = 1;
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_4 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_4 + 8);
    }
    (**(code **)(plStackX_8[3] + 0x10))(plStackX_8 + 3,puVar4);
    *(int8_t *)(plStackX_8 + 9) = param_7;
    *(int8_t *)((longlong)plStackX_8 + 0x49) = param_6;
    auStack_78[0] = (int32_t)plStackX_8[10];
    plStack_70 = plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    FUN_18015b6b0(param_1 + 6,auStack_58,auStack_78);
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
    *param_2 = (longlong)plStackX_8;
    plStackX_8 = (longlong *)0x0;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &system_data_buffer_ptr;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a0 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    puStack_a8 = &system_state_ptr;
    iVar3 = _Mtx_unlock(plVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
  }
  else {
    plVar1 = (longlong *)param_1[0x3d];
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1801582f0(uint64_t param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong *plStackX_20;
  
  fVar3 = *(float *)(param_3 + 0x40);
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
  fVar4 = (float)(system_memory_flags - 1) * 2.3283064e-10 * fVar3;
  *param_2 = 0;
  lVar2 = *(longlong *)(param_3 + 0x20);
  do {
    if (lVar2 == *(longlong *)(param_3 + 0x28)) {
LAB_180158404:
      system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
      system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
      system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
      (**(code **)(*(longlong *)*param_2 + 0x100))
                ((longlong *)*param_2,
                 (float)(system_memory_flags - 1) * 2.3283064e-10 *
                 (*(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x44)) +
                 *(float *)(param_3 + 0x44));
      system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
      system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
      system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
      (**(code **)(*(longlong *)*param_2 + 0xf8))
                ((longlong *)*param_2,
                 (float)(system_memory_flags - 1) * 2.3283064e-10 *
                 (*(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x4c)) +
                 *(float *)(param_3 + 0x4c));
      return param_2;
    }
    fVar3 = fVar3 - *(float *)(lVar2 + 0x20);
    if (fVar3 <= fVar4) {
      plVar1 = (longlong *)
               FUN_1801580f0(param_1,&plStackX_20,
                             *(uint64_t *)
                              (&unknown_var_7408_ptr + (longlong)*(char *)(param_3 + 0x59) * 8),lVar2,0,
                             *(int8_t *)(param_3 + 0x58),0);
      lVar2 = *plVar1;
      *plVar1 = 0;
      plVar1 = (longlong *)*param_2;
      *param_2 = lVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      goto LAB_180158404;
    }
    lVar2 = lVar2 + 0x28;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801584c0(uint64_t param_1,int param_2)
void FUN_1801584c0(uint64_t param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint64_t *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  void *puStack_60;
  uint64_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  lVar1 = core_system_data_memory;
  if (*(char *)(core_system_data_memory + 0x210) != '\0') {
    return;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_180158671;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (uint64_t *)0x0;
  uStack_50 = 0;
  puStack_58 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_58 = 0;
  uVar3 = FUN_18064e990(puStack_58);
  *puStack_58 = 0x5f657361656c6572;
  *(int32_t *)(puStack_58 + 1) = 0x6e657665;
  *(int16_t *)((longlong)puStack_58 + 0xc) = 0x2074;
  *(int8_t *)((longlong)puStack_58 + 0xe) = 0;
  uStack_50 = 0xe;
  uStack_48._0_4_ = uVar3;
  FUN_180628380(&puStack_60,param_2);
  iVar8 = uStack_50 + 1;
  if (iVar8 != 0) {
    uVar3 = uStack_50 + 2;
    if (puStack_58 == (uint64_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_58 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar3,0x13);
      *(int8_t *)puStack_58 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_48) goto LAB_18015860c;
      puStack_58 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_58,uVar3,0x10,0x13);
    }
    uStack_48._0_4_ = FUN_18064e990(puStack_58);
  }
LAB_18015860c:
  *(int16_t *)((ulonglong)uStack_50 + (longlong)puStack_58) = 10;
  puVar6 = (uint64_t *)&system_buffer_ptr;
  if (puStack_58 != (uint64_t *)0x0) {
    puVar6 = puStack_58;
  }
  uStack_50 = iVar8;
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar6);
  puStack_60 = &system_data_buffer_ptr;
  if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_58 = (uint64_t *)0x0;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  puStack_60 = &system_state_ptr;
LAB_180158671:
  cVar2 = FUN_180158a70(lVar1);
  if (cVar2 != '\0') {
    iVar8 = _Mtx_lock(lVar1 + 0xd0);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x38) +
                    ((ulonglong)(longlong)param_2 % (ulonglong)*(uint *)(lVar1 + 0x40)) * 8);
    piVar4 = *(int **)piVar7;
    if (piVar4 != (int *)0x0) {
      do {
        if (param_2 == *piVar4) break;
        piVar7 = piVar4 + 4;
        piVar4 = *(int **)piVar7;
      } while (piVar4 != (int *)0x0);
      piVar9 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        do {
          piVar5 = piVar4;
          if (param_2 != *piVar5) break;
          *(uint64_t *)piVar7 = *(uint64_t *)(piVar5 + 4);
          *(int **)(piVar5 + 4) = piVar9;
          *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + -1;
          piVar4 = *(int **)piVar7;
          piVar9 = piVar5;
        } while (*(int **)piVar7 != (int *)0x0);
        if (piVar9 != (int *)0x0) {
          if (*(longlong **)(piVar9 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(piVar9 + 2) + 0x38))();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar9);
        }
      }
    }
    iVar8 = _Mtx_unlock(lVar1 + 0xd0);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




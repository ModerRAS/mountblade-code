#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part048.c - 5 个函数

// 函数: void FUN_1804c97c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804c97c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  longlong *aplStackX_10 [3];
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  param_1 = (longlong *)*param_1;
  *(int32_t *)(*(longlong *)(*param_1 + 0x70 + (longlong)(int)param_1[1] * 8) + 0x328) = 0;
  FUN_18023b050(*(uint64_t *)(*param_1 + 0x70 + (longlong)(int)param_1[1] * 8),0,param_3,param_4,
                0xfffffffffffffffe);
  puVar5 = (uint64_t *)FUN_1800b08e0(system_resource_state,aplStackX_10,param_1 + 2,1);
  lVar2 = *param_1 + (longlong)(int)param_1[1] * 8;
  uVar3 = *puVar5;
  *puVar5 = 0;
  plVar4 = *(longlong **)(lVar2 + 0x70);
  *(uint64_t *)(lVar2 + 0x70) = uVar3;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  puVar1 = (uint *)(*(longlong *)(*param_1 + 0x70 + (longlong)(int)param_1[1] * 8) + 0x328);
  *puVar1 = *puVar1 | 0x20000000;
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(*param_1 + 0x70 + (longlong)(int)param_1[1] * 8),0,0xffffffff,
                &uStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804c98d0(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c096e0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
      if (*(longlong *)(lVar2 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(int32_t *)(lVar2 + 0x28) = 0;
      *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar3 = *puVar1;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(puVar1 + 1);
      FUN_180627ae0(puVar3 + 2,puVar1 + 2);
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



uint64_t * FUN_1804c9a20(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_1752_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c9a60(longlong param_1)
void FUN_1804c9a60(longlong param_1)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong *puVar3;
  uint64_t *puVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int8_t auStack_178 [32];
  ulonglong **ppuStack_158;
  int32_t *puStack_150;
  ulonglong *puStack_148;
  longlong *plStack_140;
  int32_t auStack_138 [2];
  uint64_t uStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  uint *puStack_118;
  uint64_t uStack_108;
  longlong *plStack_f8;
  ulonglong *puStack_f0;
  ulonglong uStack_e8;
  ulonglong auStack_e0 [2];
  longlong *plStack_d0;
  char cStack_c8;
  char cStack_c7;
  char cStack_c6;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  plVar7 = (longlong *)0x0;
  FUN_180093950();
  *(int32_t *)(system_main_module_state + 0x200) = 0x3d088889;
  *(int32_t *)(param_1 + 8) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1b90);
  puStack_120 = (ulonglong *)0x0;
  plStack_f8 = (longlong *)&unknown_var_3480_ptr;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = auStack_e0[0] & 0xffffffffffffff00;
  uStack_e8._0_4_ = 0x10;
  strcpy_s(auStack_e0,0x40,&unknown_var_1944_ptr);
  FUN_1800b33d0(system_resource_state,&puStack_128,&plStack_f8);
  plStack_f8 = (longlong *)&system_state_ptr;
  if (puStack_128 == (ulonglong *)0x0) {
    FUN_180626f80(&unknown_var_1808_ptr);
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x300,0x10,3);
    puVar3 = (ulonglong *)FUN_180075030(uVar2,1);
    if (puVar3 != (ulonglong *)0x0) {
      puStack_148 = puVar3;
      (**(code **)(*puVar3 + 0x28))(puVar3);
    }
    puStack_148 = (ulonglong *)0x0;
    puStack_120 = puVar3;
    uVar2 = FUN_1800be9a0(system_system_data_memory,&puStack_148,0);
    FUN_180076910(puVar3,uVar2);
    if (puStack_148 != (ulonglong *)0x0) {
      (**(code **)(*puStack_148 + 0x38))();
    }
    plStack_f8 = (longlong *)0x0;
    puStack_f0 = (ulonglong *)0x0;
    puStack_118 = (uint *)&uStack_e8;
    plStack_d0 = (longlong *)0x0;
    auStack_e0[0] = 0;
    uStack_e8._0_4_ = (uint)uStack_e8 & 0xffffff00;
    FUN_18022f2e0(&plStack_f8,puVar3,0);
    auStack_138[0] = 0xffbbbbbb;
    uStack_130._0_4_ = 0x3f800000;
    uStack_130._4_4_ = 0x3f800000;
    plStack_140 = (longlong *)0x0;
    puStack_148 = (ulonglong *)0x3f8000003f800000;
    puStack_150 = auStack_138;
    ppuStack_158 = (ulonglong **)&uStack_130;
    FUN_1802356b0(&plStack_f8,&system_counter_02f0,&puStack_148,&plStack_140);
    if ((plStack_f8 != (longlong *)0x0) && (puStack_f0 != (ulonglong *)0x0)) {
      if (cStack_c6 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(&uStack_e8);
      if (cStack_c8 != '\0') {
        FUN_180079520(plStack_f8);
      }
      if (cStack_c7 != '\0') {
        FUN_180079520(plStack_f8);
      }
      puVar5 = puStack_f0;
      puStack_148 = puStack_f0;
      puStack_f0 = (ulonglong *)0x0;
      if (puVar5 != (ulonglong *)0x0) {
        (**(code **)(*puVar5 + 0x38))();
      }
    }
    puStack_118 = (uint *)&uStack_e8;
    FUN_18007f6a0(&uStack_e8);
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar6 = plStack_f8;
    if (puStack_f0 != (ulonglong *)0x0) {
      (**(code **)(*puStack_f0 + 0x38))();
      plVar6 = plStack_f8;
    }
  }
  else {
    puVar4 = (uint64_t *)FUN_1800763c0(puStack_128,&plStack_140);
    puVar3 = (ulonglong *)*puVar4;
    *puVar4 = 0;
    puStack_148 = (ulonglong *)0x0;
    plVar6 = plStack_140;
    puStack_120 = puVar3;
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  puStack_118 = (uint *)0x0;
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0xd;
  strcpy_s(auStack_80,0x40,&unknown_var_2088_ptr);
  puVar4 = (uint64_t *)FUN_1800b33d0(system_resource_state,&uStack_130,&puStack_98);
  puVar5 = (ulonglong *)*puVar4;
  *puVar4 = 0;
  puStack_148 = puStack_128;
  if (puStack_128 != (ulonglong *)0x0) {
    uVar1 = *puStack_128;
    puStack_128 = puVar5;
    (**(code **)(uVar1 + 0x38))();
    puVar5 = puStack_128;
  }
  puStack_128 = puVar5;
  if ((longlong *)CONCAT44(uStack_130._4_4_,(int32_t)uStack_130) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_130._4_4_,(int32_t)uStack_130) + 0x38))();
  }
  puStack_98 = &system_state_ptr;
  if (puStack_128 == (ulonglong *)0x0) {
    FUN_180626f80(&unknown_var_1968_ptr);
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x300,0x10,3);
    puVar5 = (ulonglong *)FUN_180075030(uVar2,1);
    if (puVar5 != (ulonglong *)0x0) {
      puStack_148 = puVar5;
      (**(code **)(*puVar5 + 0x28))(puVar5);
    }
    puStack_120 = puVar5;
    if (puVar3 != (ulonglong *)0x0) {
      puStack_148 = puVar3;
      (**(code **)(*puVar3 + 0x38))();
    }
    plStack_f8 = (longlong *)0x0;
    puStack_f0 = (ulonglong *)0x0;
    puStack_148 = &uStack_e8;
    plStack_d0 = (longlong *)0x0;
    auStack_e0[0] = 0;
    uStack_e8._0_4_ = (uint)uStack_e8 & 0xffffff00;
    FUN_18022f2e0(&plStack_f8,puVar5,0);
    auStack_138[0] = 0xffbbbbbb;
    puStack_148 = (ulonglong *)0x3f8000003f800000;
    plStack_140 = (longlong *)0x0;
    uStack_130._0_4_ = 0x3f800000;
    uStack_130._4_4_ = 0x3f800000;
    puStack_150 = auStack_138;
    ppuStack_158 = &puStack_148;
    FUN_1802356b0(&plStack_f8,&system_counter_02f0,&uStack_130,&plStack_140);
    uVar2 = FUN_1800be9a0(system_system_data_memory,&puStack_148,0);
    FUN_180076910(puVar5,uVar2);
    if (puStack_148 != (ulonglong *)0x0) {
      (**(code **)(*puStack_148 + 0x38))();
    }
    if ((plStack_f8 != (longlong *)0x0) && (puStack_f0 != (ulonglong *)0x0)) {
      if (cStack_c6 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(&uStack_e8);
      if (cStack_c8 != '\0') {
        FUN_180079520(plStack_f8);
      }
      if (cStack_c7 != '\0') {
        FUN_180079520(plStack_f8);
      }
      puVar3 = puStack_f0;
      puStack_148 = puStack_f0;
      puStack_f0 = (ulonglong *)0x0;
      if (puVar3 != (ulonglong *)0x0) {
        (**(code **)(*puVar3 + 0x38))();
      }
    }
    puStack_148 = &uStack_e8;
    FUN_18007f6a0(&uStack_e8);
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar6 = plStack_f8;
    if (puStack_f0 != (ulonglong *)0x0) {
      (**(code **)(*puStack_f0 + 0x38))();
      plVar6 = plStack_f8;
    }
  }
  else {
    puVar4 = (uint64_t *)FUN_1800763c0(puStack_128,&plStack_140);
    plVar7 = (longlong *)*puVar4;
    *puVar4 = 0;
    puStack_148 = (ulonglong *)0x0;
    plVar6 = plStack_140;
    puVar5 = puVar3;
    puStack_118 = (uint *)plVar7;
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(puVar5[2] + 0x10))(puVar5 + 2,&unknown_var_2176_ptr);
  *(uint64_t *)(param_1 + 0x30) = 0;
  FUN_180056b30();
  FUN_18017ee80();
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (puStack_128 != (ulonglong *)0x0) {
    (**(code **)(*puStack_128 + 0x38))();
  }
  (**(code **)(*puVar5 + 0x38))(puVar5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ca020(longlong *param_1)
void FUN_1804ca020(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  void *puVar5;
  float fVar6;
  longlong *plStackX_8;
  void *puStack_68;
  void *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  plVar2 = system_system_data_memory;
  if (system_system_data_memory == (longlong *)0x0) {
    QueryPerformanceCounter(&plStackX_8);
    plVar2 = plStackX_8;
  }
  system_interrupt_handler = (double)((longlong)plVar2 - system_system_data_memory) * system_system_data_memory - system_interrupt_handler;
  FUN_180062340(system_message_context,0,&unknown_var_2152_ptr,system_interrupt_handler);
  FUN_1800623b0(system_message_context,0,0xffffffff00000000,4,&unknown_var_2232_ptr,system_interrupt_handler);
  fVar6 = (float)FUN_180623d40();
  FUN_1800623b0(system_message_context,0,0xffffffff00000000,7,&unknown_var_2200_ptr,(double)fVar6);
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (void *)0x0;
  uStack_58 = 0;
  uVar3 = FUN_180623ce0();
  FUN_18005d0e0(uVar3,&puStack_68);
  puVar5 = &system_buffer_ptr;
  if (puStack_60 != (void *)0x0) {
    puVar5 = puStack_60;
  }
  FUN_1800623b0(system_message_context,0,0xffffffff00000000,7,&unknown_var_2128_ptr,&system_counter_d0f8,puVar5);
  lVar1 = system_system_data_memory;
  if ((system_debug_flag != '\0') && (system_counter_2845 == '\0')) {



// 函数: void FUN_1804ca960(uint64_t *param_1)
void FUN_1804ca960(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2320_ptr;
  FUN_1804cd320();
  _Mtx_destroy_in_situ();
  FUN_1808fc8a8(param_1 + 0x35,0x28,8,FUN_1804ce100,uVar6);
  if (param_1[0x31] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar5 = 0;
  if (param_1[0x2b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x26] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x21] == 0) {
    lVar2 = param_1[0x1c];
    if (lVar2 != 0) {
      uVar3 = uVar5;
      if (param_1[0x1d] != 0) {
        do {
          lVar2 = param_1[0x1c];
          puVar4 = (ulonglong *)((uVar3 & 0xffffffff) * 0x50 + lVar2);
          if (((*puVar4 & 0xffffffff00000000) != 0) && (puVar4 + 1 != (ulonglong *)0x0)) {
            if ((longlong *)puVar4[5] != (longlong *)0x0) {
              (**(code **)(*(longlong *)puVar4[5] + 0x38))();
            }
            FUN_180057830(puVar4 + 1);
            lVar2 = param_1[0x1c];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[0x1d]);
      }
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1[0x1c] = 0;
    }
    if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (param_1[0x12] == 0) {
      lVar2 = param_1[0xd];
      if (lVar2 != 0) {
        if (param_1[0xe] != 0) {
          do {
            puVar4 = (ulonglong *)((uVar5 & 0xffffffff) * 0x38 + param_1[0xd]);
            if ((((*puVar4 & 0xffffffff00000000) != 0) &&
                (puVar4 = puVar4 + 1, puVar4 != (ulonglong *)0x0)) &&
               (plVar1 = (longlong *)*puVar4, plVar1 != (longlong *)0x0)) {
              (**(code **)(*plVar1 + 0x38))();
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (ulonglong)param_1[0xe]);
          lVar2 = param_1[0xd];
        }
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        param_1[0xd] = 0;
      }
      *param_1 = &unknown_var_3952_ptr;
      if (param_1[1] == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804cab80(longlong param_1,longlong param_2,ushort param_3)
void FUN_1804cab80(longlong param_1,longlong param_2,ushort param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iStackX_20;
  int iStack_1b8;
  longlong lStack_198;
  longlong lStack_190;
  int8_t auStack_170 [64];
  longlong *plStack_130;
  longlong *plStack_128;
  int8_t auStack_110 [64];
  longlong *plStack_d0;
  longlong *plStack_c8;
  int8_t auStack_b0 [64];
  longlong *plStack_70;
  longlong *plStack_68;
  
  if ((param_2 != 0) && ('\0' < *(char *)(param_2 + 0x20))) {
    iStack_1b8 = 0;
    lVar17 = *(longlong *)(param_2 + 0x1a8);
    if (*(longlong *)(param_2 + 0x1b0) - lVar17 >> 3 != 0) {
      lStack_190 = 0;
      do {
        plVar10 = *(longlong **)(lStack_190 + lVar17);
        iVar6 = (**(code **)(*plVar10 + 0x98))();
        if (iVar6 == 0) {
          iStackX_20 = 0;
          lVar17 = 0x14;
          plVar14 = (longlong *)(param_1 + 0x1a8);
          do {
            iVar6 = (int)plVar10[0xb] + -1;
            if (iStackX_20 < 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = iStackX_20;
              if (iVar6 < iStackX_20) {
                iVar7 = iVar6;
              }
            }
            iVar6 = 0;
            lVar15 = plVar10[7];
            if (plVar10[8] - lVar15 >> 4 != 0) {
              lVar16 = 0;
              do {
                if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << ((byte)iVar7 & 0x1f)) != 0) {
                  lVar1 = *plVar14 +
                          (ulonglong)
                          *(ushort *)
                           (lVar17 + (ulonglong)param_3 * 0x38 + *(longlong *)(param_1 + 0x68)) *
                          0x28;
                  if (*(code **)(*plVar10 + 0x158) == (code *)&unknown_var_2528_ptr) {
                    plVar12 = plVar10 + 0x66;
                  }
                  else {
                    plVar12 = (longlong *)(**(code **)(*plVar10 + 0x158))(plVar10);
                  }
                  puVar8 = (uint64_t *)
                           FUN_1804cdee0(auStack_170,plVar10,*(uint64_t *)(lVar16 + lVar15),
                                         plVar12);
                  puVar2 = *(uint64_t **)(lVar1 + 0x10);
                  if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                    *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                    uVar9 = puVar8[1];
                    *puVar2 = *puVar8;
                    puVar2[1] = uVar9;
                    uVar9 = puVar8[3];
                    puVar2[2] = puVar8[2];
                    puVar2[3] = uVar9;
                    uVar3 = *(int32_t *)((longlong)puVar8 + 0x24);
                    uVar4 = *(int32_t *)(puVar8 + 5);
                    uVar5 = *(int32_t *)((longlong)puVar8 + 0x2c);
                    *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                    *(int32_t *)((longlong)puVar2 + 0x24) = uVar3;
                    *(int32_t *)(puVar2 + 5) = uVar4;
                    *(int32_t *)((longlong)puVar2 + 0x2c) = uVar5;
                    uVar9 = puVar8[7];
                    puVar2[6] = puVar8[6];
                    puVar2[7] = uVar9;
                    puVar2[8] = puVar8[8];
                    puVar8[8] = 0;
                    puVar2[9] = puVar8[9];
                    puVar8[9] = 0;
                    *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                    *(int32_t *)((longlong)puVar2 + 0x54) =
                         *(int32_t *)((longlong)puVar8 + 0x54);
                    *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                    *(int32_t *)((longlong)puVar2 + 0x5c) =
                         *(int32_t *)((longlong)puVar8 + 0x5c);
                  }
                  else {
                    FUN_1804ce730(lVar1 + 8);
                  }
                  if (plStack_128 != (longlong *)0x0) {
                    (**(code **)(*plStack_128 + 0x38))();
                  }
                  if (plStack_130 != (longlong *)0x0) {
                    (**(code **)(*plStack_130 + 0x38))();
                  }
                }
                iVar6 = iVar6 + 1;
                lVar16 = lVar16 + 0x10;
                lVar15 = plVar10[7];
              } while ((ulonglong)(longlong)iVar6 < (ulonglong)(plVar10[8] - lVar15 >> 4));
            }
            iStackX_20 = iStackX_20 + 1;
            plVar14 = plVar14 + 5;
            lVar17 = lVar17 + 2;
          } while (lVar17 < 0x24);
        }
        else {
          iVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
          if (iVar6 == 3) {
            lVar17 = plVar10[9];
            uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x3d0,8,0x16);
            plVar10 = (longlong *)FUN_180275090(uVar9);
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            FUN_180275a60(lVar17,plVar10,1);
            iStackX_20 = 0;
            lVar17 = 0x14;
            plVar14 = (longlong *)(param_1 + 0x1a8);
            do {
              iVar6 = (int)plVar10[0xb] + -1;
              if (iStackX_20 < 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = iStackX_20;
                if (iVar6 < iStackX_20) {
                  iVar7 = iVar6;
                }
              }
              iVar6 = 0;
              lVar15 = plVar10[7];
              if (plVar10[8] - lVar15 >> 4 != 0) {
                lVar16 = 0;
                do {
                  if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << ((byte)iVar7 & 0x1f)) != 0) {
                    lVar1 = *plVar14 +
                            (ulonglong)
                            *(ushort *)
                             (lVar17 + (ulonglong)param_3 * 0x38 + *(longlong *)(param_1 + 0x68)) *
                            0x28;
                    if (*(code **)(*plVar10 + 0x158) == (code *)&unknown_var_2528_ptr) {
                      plVar12 = plVar10 + 0x66;
                    }
                    else {
                      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x158))(plVar10);
                    }
                    puVar8 = (uint64_t *)
                             FUN_1804cdee0(auStack_110,plVar10,*(uint64_t *)(lVar16 + lVar15),
                                           plVar12);
                    puVar2 = *(uint64_t **)(lVar1 + 0x10);
                    if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                      *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                      uVar9 = puVar8[1];
                      *puVar2 = *puVar8;
                      puVar2[1] = uVar9;
                      uVar9 = puVar8[3];
                      puVar2[2] = puVar8[2];
                      puVar2[3] = uVar9;
                      uVar3 = *(int32_t *)((longlong)puVar8 + 0x24);
                      uVar4 = *(int32_t *)(puVar8 + 5);
                      uVar5 = *(int32_t *)((longlong)puVar8 + 0x2c);
                      *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                      *(int32_t *)((longlong)puVar2 + 0x24) = uVar3;
                      *(int32_t *)(puVar2 + 5) = uVar4;
                      *(int32_t *)((longlong)puVar2 + 0x2c) = uVar5;
                      uVar9 = puVar8[7];
                      puVar2[6] = puVar8[6];
                      puVar2[7] = uVar9;
                      puVar2[8] = puVar8[8];
                      puVar8[8] = 0;
                      puVar2[9] = puVar8[9];
                      puVar8[9] = 0;
                      *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                      *(int32_t *)((longlong)puVar2 + 0x54) =
                           *(int32_t *)((longlong)puVar8 + 0x54);
                      *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                      *(int32_t *)((longlong)puVar2 + 0x5c) =
                           *(int32_t *)((longlong)puVar8 + 0x5c);
                    }
                    else {
                      FUN_1804ce730(lVar1 + 8);
                    }
                    if (plStack_c8 != (longlong *)0x0) {
                      (**(code **)(*plStack_c8 + 0x38))();
                    }
                    if (plStack_d0 != (longlong *)0x0) {
                      (**(code **)(*plStack_d0 + 0x38))();
                    }
                  }
                  iVar6 = iVar6 + 1;
                  lVar16 = lVar16 + 0x10;
                  lVar15 = plVar10[7];
                } while ((ulonglong)(longlong)iVar6 < (ulonglong)(plVar10[8] - lVar15 >> 4));
              }
              iStackX_20 = iStackX_20 + 1;
              plVar14 = plVar14 + 5;
              lVar17 = lVar17 + 2;
            } while (lVar17 < 0x24);
            (**(code **)(*plVar10 + 0x38))(plVar10);
          }
          else {
            iVar6 = (**(code **)(*plVar10 + 0x98))();
            if (iVar6 == 6) {
              iVar6 = 0;
              lVar17 = plVar10[0x1c];
              if (plVar10[0x1d] - lVar17 >> 3 != 0) {
                lStack_198 = 0;
                do {
                  plVar14 = *(longlong **)(lStack_198 + lVar17);
                  iStackX_20 = 0;
                  lVar17 = 0x14;
                  plVar12 = (longlong *)(param_1 + 0x1a8);
                  do {
                    iVar7 = (int)plVar14[0xb] + -1;
                    if (iStackX_20 < 0) {
                      bVar13 = 0;
                    }
                    else {
                      bVar13 = (byte)iStackX_20;
                      if (iVar7 < iStackX_20) {
                        bVar13 = (byte)iVar7;
                      }
                    }
                    iVar7 = 0;
                    lVar15 = plVar14[7];
                    if (plVar14[8] - lVar15 >> 4 != 0) {
                      lVar16 = 0;
                      do {
                        if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << (bVar13 & 0x1f)) != 0) {
                          lVar1 = *plVar12 +
                                  (ulonglong)
                                  *(ushort *)
                                   ((ulonglong)param_3 * 0x38 + *(longlong *)(param_1 + 0x68) +
                                   lVar17) * 0x28;
                          if (*(code **)(*plVar14 + 0x158) == (code *)&unknown_var_2528_ptr) {
                            plVar11 = plVar14 + 0x66;
                          }
                          else {
                            plVar11 = (longlong *)(**(code **)(*plVar14 + 0x158))(plVar14);
                          }
                          puVar8 = (uint64_t *)
                                   FUN_1804cdee0(auStack_b0,plVar14,*(uint64_t *)(lVar16 + lVar15)
                                                 ,plVar11);
                          puVar2 = *(uint64_t **)(lVar1 + 0x10);
                          if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                            *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                            uVar9 = puVar8[1];
                            *puVar2 = *puVar8;
                            puVar2[1] = uVar9;
                            uVar9 = puVar8[3];
                            puVar2[2] = puVar8[2];
                            puVar2[3] = uVar9;
                            uVar3 = *(int32_t *)((longlong)puVar8 + 0x24);
                            uVar4 = *(int32_t *)(puVar8 + 5);
                            uVar5 = *(int32_t *)((longlong)puVar8 + 0x2c);
                            *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                            *(int32_t *)((longlong)puVar2 + 0x24) = uVar3;
                            *(int32_t *)(puVar2 + 5) = uVar4;
                            *(int32_t *)((longlong)puVar2 + 0x2c) = uVar5;
                            uVar9 = puVar8[7];
                            puVar2[6] = puVar8[6];
                            puVar2[7] = uVar9;
                            puVar2[8] = puVar8[8];
                            puVar8[8] = 0;
                            puVar2[9] = puVar8[9];
                            puVar8[9] = 0;
                            *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                            *(int32_t *)((longlong)puVar2 + 0x54) =
                                 *(int32_t *)((longlong)puVar8 + 0x54);
                            *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                            *(int32_t *)((longlong)puVar2 + 0x5c) =
                                 *(int32_t *)((longlong)puVar8 + 0x5c);
                          }
                          else {
                            FUN_1804ce730(lVar1 + 8);
                          }
                          if (plStack_68 != (longlong *)0x0) {
                            (**(code **)(*plStack_68 + 0x38))();
                          }
                          if (plStack_70 != (longlong *)0x0) {
                            (**(code **)(*plStack_70 + 0x38))();
                          }
                        }
                        iVar7 = iVar7 + 1;
                        lVar16 = lVar16 + 0x10;
                        lVar15 = plVar14[7];
                      } while ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar14[8] - lVar15 >> 4));
                    }
                    iStackX_20 = iStackX_20 + 1;
                    plVar12 = plVar12 + 5;
                    lVar17 = lVar17 + 2;
                  } while (lVar17 < 0x24);
                  iVar6 = iVar6 + 1;
                  lStack_198 = lStack_198 + 8;
                  lVar17 = plVar10[0x1c];
                } while ((ulonglong)(longlong)iVar6 < (ulonglong)(plVar10[0x1d] - lVar17 >> 3));
              }
            }
          }
        }
        iStack_1b8 = iStack_1b8 + 1;
        lStack_190 = lStack_190 + 8;
        lVar17 = *(longlong *)(param_2 + 0x1a8);
      } while ((ulonglong)(longlong)iStack_1b8 <
               (ulonglong)(*(longlong *)(param_2 + 0x1b0) - lVar17 >> 3));
    }
  }
  return;
}







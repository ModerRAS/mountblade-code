#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part010.c - 3 个函数

// 函数: void FUN_1801d0510(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d0510(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar7 = *(uint64_t **)(param_1 + 0xe0);
  puVar3 = (uint64_t *)0x0;
  if (puVar7 < *(uint64_t **)(param_1 + 0xe8)) {
    *(uint64_t **)(param_1 + 0xe0) = puVar7 + 1;
    *puVar7 = param_2;
    goto LAB_1801d0679;
  }
  puVar4 = *(uint64_t **)(param_1 + 0xd8);
  lVar5 = (longlong)puVar7 - (longlong)puVar4 >> 3;
  if (lVar5 == 0) {
    lVar5 = 1;
LAB_1801d05c0:
    puVar3 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(param_1 + 0xf0),param_4,uVar9);
    puVar7 = *(uint64_t **)(param_1 + 0xe0);
    puVar4 = *(uint64_t **)(param_1 + 0xd8);
    puVar8 = puVar3;
  }
  else {
    lVar5 = lVar5 * 2;
    puVar8 = puVar3;
    if (lVar5 != 0) goto LAB_1801d05c0;
  }
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  plVar6 = *(longlong **)(param_1 + 0xd8);
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = *(longlong **)(param_1 + 0xd8);
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *(uint64_t **)(param_1 + 0xd8) = puVar8;
  *(uint64_t **)(param_1 + 0xe0) = puVar3 + 1;
  *(uint64_t **)(param_1 + 0xe8) = puVar8 + lVar5;
LAB_1801d0679:
  iVar2 = _Mtx_unlock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



longlong *
FUN_1801d06b0(uint64_t param_1,longlong *param_2,longlong param_3,int32_t param_4,
             int32_t param_5,uint64_t param_6,longlong param_7)

{
  longlong lVar1;
  uint64_t uVar2;
  void *puVar3;
  int iVar4;
  void *puStack_38;
  longlong lStack_30;
  int iStack_28;
  
  *param_2 = (longlong)&unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = (longlong)&unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_3 + 8);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,puVar3,*(code **)(*param_2 + 0x10),param_4,1,0xfffffffffffffffe);
  uVar2 = FUN_1800ade00(*(int32_t *)(param_7 + 0xa4));
  FUN_180627910(&puStack_38,uVar2);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(int8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  lVar1 = param_2[2];
  iVar4 = (int)lVar1 + 1;
  *(int *)(param_2 + 2) = iVar4;
  if (0 < iStack_28) {
    FUN_1806277c0(param_2,iVar4 + iStack_28);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],lStack_30,(longlong)(iStack_28 + 1));
  }
  FUN_1806277c0(param_2,(int)lVar1 + 2);
  *(int8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628420(param_2,param_5);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(int8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628570(param_2,param_6);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(int8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628380(param_2,param_4);
  puStack_38 = &unknown_var_3456_ptr;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}



uint64_t
FUN_1801d0890(longlong param_1,int32_t *param_2,longlong *param_3,uint64_t param_4,
             int32_t *param_5,int16_t *param_6,int32_t *param_7,uint64_t *param_8)

{
  char *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  int16_t auStack_68 [4];
  int16_t auStack_60 [4];
  int32_t auStack_58 [2];
  int32_t auStack_50 [2];
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t *puStack_38;
  uint64_t *puStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_38 = (uint64_t *)0x0;
  puStack_30 = (uint64_t *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  auStack_68[0] = 0x2e;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180057980(0,&puStack_38,auStack_68);
  }
  puVar4 = puStack_30;
  puVar3 = puStack_38;
  puVar2 = puVar3;
  if (((longlong)puStack_30 - (longlong)puStack_38 & 0xffffffffffffffe0U) == 0xe0) {
    puVar5 = &system_buffer_ptr;
    if ((void *)puStack_38[1] != (void *)0x0) {
      puVar5 = (void *)puStack_38[1];
    }
    (**(code **)(*param_3 + 0x10))(param_3,puVar5);
    if (*(int *)(puVar3 + 6) == 2) {
      pcVar1 = (char *)puVar3[5];
      if (((*pcVar1 == 'v') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
        *param_2 = 0;
      }
      else {
        pcVar1 = (char *)puVar3[5];
        if (((*pcVar1 == 'p') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
          *param_2 = 1;
        }
        else {
          pcVar1 = (char *)puVar3[5];
          if (((*pcVar1 == 'd') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
            *param_2 = 2;
          }
          else {
            pcVar1 = (char *)puVar3[5];
            if (((*pcVar1 == 'h') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
              *param_2 = 3;
            }
            else {
              pcVar1 = (char *)puVar3[5];
              if (((*pcVar1 == 'g') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                *param_2 = 5;
              }
              else {
                pcVar1 = (char *)puVar3[5];
                if (((*pcVar1 == 'c') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                  *param_2 = 4;
                }
              }
            }
          }
        }
      }
    }
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[9] != (void *)0x0) {
      puVar5 = (void *)puVar3[9];
    }
    FUN_18010cbc0(puVar5,&unknown_var_7284_ptr,auStack_60);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0xd] != (void *)0x0) {
      puVar5 = (void *)puVar3[0xd];
    }
    FUN_18010cbc0(puVar5,&unknown_var_7284_ptr,param_4);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x11] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x11];
    }
    FUN_18010cbc0(puVar5,&unknown_var_7284_ptr,auStack_58);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x15] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x15];
    }
    FUN_18010cbc0(puVar5,&unknown_var_7284_ptr,auStack_50);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x19] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x19];
    }
    FUN_18010cbc0(puVar5,&unknown_var_7284_ptr,&uStack_48);
    *param_6 = auStack_60[0];
    *param_5 = auStack_58[0];
    *param_7 = auStack_50[0];
    *param_8 = uStack_48;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d0bb0(void)
void FUN_1801d0bb0(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  int8_t auStack_2b8 [52];
  int iStack_284;
  void *puStack_280;
  uint64_t *puStack_278;
  int32_t uStack_270;
  uint64_t uStack_268;
  void *puStack_260;
  uint64_t *puStack_258;
  int32_t uStack_250;
  uint64_t uStack_248;
  longlong lStack_240;
  uint64_t uStack_238;
  uint64_t *puStack_230;
  uint64_t *puStack_228;
  uint64_t *puStack_220;
  int32_t uStack_218;
  longlong lStack_1f0;
  uint64_t *puStack_1e0;
  uint64_t *puStack_1d8;
  uint64_t *puStack_1d0;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  longlong *plStack_1b0;
  ulonglong uStack_1a8;
  uint64_t uStack_160;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2b8;
  uVar10 = 0;
  puStack_1d8 = (uint64_t *)0x0;
  puStack_1d0 = (uint64_t *)0x0;
  uStack_1c8 = 0;
  uStack_1c0 = 3;
  puStack_260 = &unknown_var_3456_ptr;
  uStack_248 = 0;
  puStack_258 = (uint64_t *)0x0;
  uStack_250 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_258 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  *puVar5 = 0x5f65737566666964;
  *(int32_t *)(puVar5 + 1) = 0x656b6162;
  *(int8_t *)((longlong)puVar5 + 0xc) = 0;
  uStack_250 = 0xc;
  uStack_248._0_4_ = uVar4;
  FUN_180066df0(&puStack_1d8,&puStack_260);
  puStack_260 = &unknown_var_3456_ptr;
  if (puStack_258 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_258 = (uint64_t *)0x0;
  uStack_248 = (ulonglong)uStack_248._4_4_ << 0x20;
  puStack_260 = &unknown_var_720_ptr;
  puStack_280 = &unknown_var_3456_ptr;
  uStack_268 = 0;
  puStack_278 = (uint64_t *)0x0;
  uStack_270 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_278 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  *puVar5 = 0x625f6c616d726f6e;
  *(int32_t *)(puVar5 + 1) = 0x656b61;
  uStack_270 = 0xb;
  uStack_268._0_4_ = uVar4;
  FUN_180066df0(&puStack_1d8,&puStack_280);
  puVar5 = puStack_1d8;
  puStack_280 = &unknown_var_3456_ptr;
  if (puStack_278 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_278 = (uint64_t *)0x0;
  uStack_268 = (ulonglong)uStack_268._4_4_ << 0x20;
  puStack_280 = &unknown_var_720_ptr;
  iStack_284 = 0;
  uStack_1a8 = (longlong)puStack_1d0 - (longlong)puStack_1d8 >> 5;
  puVar9 = puVar5;
  puVar2 = puStack_1d0;
  if (uStack_1a8 != 0) {
    do {
      plVar6 = (longlong *)FUN_1800b31f0(system_resource_state,&plStack_1b0,puVar5 + uVar10 * 4,0);
      lVar1 = *plVar6;
      lStack_240 = lVar1;
      lStack_1f0 = lVar1;
      if (plStack_1b0 != (longlong *)0x0) {
        (**(code **)(*plStack_1b0 + 0x38))();
      }
      if (lVar1 != 0) {
        puStack_158 = &unknown_var_3480_ptr;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = 10;
        strcpy_s(auStack_140,0x40,&system_data_d648);
        uVar7 = FUN_180240430(lVar1,&puStack_158,0);
        puStack_158 = &unknown_var_720_ptr;
        puStack_f8 = &unknown_var_3480_ptr;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x13;
        strcpy_s(auStack_e0,0x40,&unknown_var_1576_ptr);
        uVar8 = FUN_180240430(lVar1,&puStack_f8,0);
        puStack_f8 = &unknown_var_720_ptr;
        puStack_98 = &unknown_var_3480_ptr;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = 0x1c;
        strcpy_s(auStack_80,0x40,&unknown_var_1504_ptr);
        uStack_238 = FUN_180240430(lVar1,&puStack_98,0);
        puStack_98 = &unknown_var_720_ptr;
        puStack_230 = (uint64_t *)0x0;
        puStack_228 = (uint64_t *)0x0;
        puStack_220 = (uint64_t *)0x0;
        uStack_218 = 3;
        puVar9 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,8,3);
        *puVar9 = uVar7;
        puVar5 = puVar9 + 1;
        puStack_230 = puVar9;
        puStack_228 = puVar5;
        puStack_220 = puVar5;
        puStack_1e0 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,3);
        if (puVar9 == puVar5) {
          *puStack_1e0 = uVar8;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
                    // WARNING: Subroutine does not return
        memmove(puStack_1e0,puVar9,8);
      }
      iStack_284 = iStack_284 + 1;
      uVar10 = (ulonglong)iStack_284;
      puVar2 = puStack_1d0;
    } while (uVar10 < uStack_1a8);
  }
  for (; puVar3 = puStack_1d0, puVar9 != puStack_1d0; puVar9 = puVar9 + 4) {
    puStack_1d0 = puVar2;
    (**(code **)*puVar9)(puVar9,0);
    puVar2 = puStack_1d0;
    puStack_1d0 = puVar3;
  }
  if (puVar5 == (uint64_t *)0x0) {
    puStack_1d0 = puVar2;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
  }
  puStack_1d0 = puVar2;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d1390(uint64_t param_1,uint64_t param_2)
void FUN_1801d1390(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t *puVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int8_t auStack_288 [32];
  longlong lStack_268;
  int aiStack_258 [2];
  longlong *plStack_250;
  void *puStack_248;
  int32_t *puStack_240;
  int32_t uStack_238;
  uint64_t uStack_230;
  longlong alStack_228 [3];
  int32_t uStack_210;
  longlong lStack_200;
  uint64_t uStack_1f8;
  uint uStack_1f0;
  int16_t uStack_1ec;
  uint64_t *puStack_1e8;
  longlong lStack_1e0;
  uint64_t uStack_1d8;
  int32_t uStack_1d0;
  uint *puStack_1c8;
  longlong lStack_1c0;
  uint64_t uStack_1b8;
  int32_t uStack_1b0;
  longlong alStack_1a8 [3];
  int32_t uStack_190;
  uint64_t uStack_188;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_288;
  puStack_248 = &unknown_var_3456_ptr;
  uStack_230 = 0;
  puStack_240 = (int32_t *)0x0;
  uStack_238 = 0;
  puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_240 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_230 = CONCAT44(uStack_230._4_4_,uVar3);
  *puVar4 = 0x726f6c66;
  puVar4[1] = 0x69625f61;
  puVar4[2] = 0x6f626c6c;
  puVar4[3] = 0x5f647261;
  *(uint64_t *)(puVar4 + 4) = 0x72656666756267;
  uStack_238 = 0x17;
  plVar5 = (longlong *)FUN_1800b31f0(system_resource_state,&plStack_250,&puStack_248,0);
  lVar2 = *plVar5;
  lStack_200 = lVar2;
  if (plStack_250 != (longlong *)0x0) {
    (**(code **)(*plStack_250 + 0x38))();
  }
  if (lVar2 != 0) {
    alStack_228[0] = 0;
    alStack_228[1] = 0;
    alStack_228[2] = 0;
    uStack_210 = 3;
    aiStack_258[0] = 8;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x8000;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 2;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x80;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x400;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x200;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x800000;
    FUN_1800571e0(alStack_228,aiStack_258);
    alStack_1a8[0] = 0;
    alStack_1a8[1] = 0;
    alStack_1a8[2] = 0;
    uStack_190 = 3;
    puStack_178 = &unknown_var_3432_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0x1c;
    strcpy_s(auStack_160,0x80,&unknown_var_1504_ptr);
    plStack_250 = (longlong *)FUN_180240430(lVar2,&puStack_178,0);
    FUN_18005ea90(alStack_1a8,&plStack_250);
    puStack_178 = &unknown_var_720_ptr;
    puStack_d8 = &unknown_var_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 10;
    strcpy_s(auStack_c0,0x80,&system_data_d648);
    plStack_250 = (longlong *)FUN_180240430(lVar2,&puStack_d8,0);
    FUN_18005ea90(alStack_1a8,&plStack_250);
    puStack_d8 = &unknown_var_720_ptr;
    puStack_1c8 = (uint *)0x0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 3;
    lStack_268 = lVar2;
    FUN_1801d7910(0,0,&puStack_1c8,alStack_228);
    puStack_1e8 = (uint64_t *)0x0;
    lStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 3;
    lStack_268 = lVar2;
    FUN_1801d7ad0(0,0,&puStack_1e8,alStack_1a8);
    plVar5 = (longlong *)(lStack_1c0 - (longlong)puStack_1c8 >> 2);
    aiStack_258[0] = 0;
    puVar6 = puStack_1e8;
    plStack_250 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      uVar10 = lStack_1e0 - (longlong)puStack_1e8 >> 3;
      puVar9 = puStack_1c8;
      do {
        iVar8 = 0;
        uVar1 = *puVar9;
        puVar7 = puVar6;
        if (uVar10 != 0) {
          do {
            uStack_1f8 = *puVar7;
            uStack_1ec = 0;
            uStack_1f0 = uVar1 & 0xffc78f;
            FUN_1801e66c0(param_2,&lStack_200);
            iVar8 = iVar8 + 1;
            puVar6 = puStack_1e8;
            plVar5 = plStack_250;
            puVar7 = puVar7 + 1;
          } while ((ulonglong)(longlong)iVar8 < uVar10);
        }
        aiStack_258[0] = aiStack_258[0] + 1;
        puVar9 = puVar9 + 1;
        puVar4 = puStack_240;
      } while ((longlong *)(longlong)aiStack_258[0] < plVar5);
    }
    if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (puStack_1c8 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_1c8);
    }
    if (alStack_1a8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_228[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_248 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





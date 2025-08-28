#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part066.c - 7 个函数

// 函数: void FUN_1802c2560(longlong param_1,longlong param_2)
void FUN_1802c2560(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *puVar5;
  ulonglong uVar6;
  longlong *plStackX_18;
  longlong lStackX_20;
  int32_t uVar7;
  uint64_t uVar8;
  void *puStack_98;
  longlong lStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  longlong lStack_70;
  uint uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  longlong lStack_50;
  int iStack_48;
  int32_t uStack_40;
  
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  if ((*(char *)(system_parameter_buffer + 0x12e3) != '\0') || (*(char *)(system_parameter_buffer + 0x12dd) != '\0'))
  {
    lVar2 = FUN_1802c28d0();
    *(int32_t *)(lVar2 + 0x10) = *(int32_t *)(param_2 + 0x10);
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 8);
    }
    lStackX_20 = lVar2;
    strcpy_s(*(uint64_t *)(lVar2 + 8),0x40,puVar5);
    FUN_1802c2400(lVar2);
    uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3,uVar7,uVar8);
    plVar3 = (longlong *)FUN_1800a1e20(uVar8);
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 8);
    }
    plStackX_18 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar5);
    lVar4 = (longlong)*(int *)(param_1 + 0x168) * 0x20;
    if (*(longlong *)(lVar4 + 0x1c0 + param_1) - *(longlong *)(lVar4 + 0x1b8 + param_1) >> 3 == 0) {
      plVar3[0xd] = 0;
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar5 = *(void **)(param_2 + 8);
      }
      (**(code **)(plVar3[4] + 0x10))(plVar3 + 4,puVar5);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(((longlong)*(int *)(param_1 + 0x168) + 0xe) * 0x20 + param_1) + -8);
      plVar3[0xd] = lVar4;
      FUN_18005ea90(lVar4 + 0x48,&plStackX_18);
      puStack_98 = &unknown_var_3456_ptr;
      uStack_80 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      uVar1 = *(uint *)(lVar4 + 0x30);
      uVar6 = (ulonglong)uVar1;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        FUN_1806277c0(&puStack_98,uVar6);
      }
      if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lStack_90,*(uint64_t *)(lVar4 + 0x28),uVar6);
      }
      if (lStack_90 != 0) {
        *(int8_t *)(uVar6 + lStack_90) = 0;
      }
      uStack_80 = CONCAT44(*(int32_t *)(lVar4 + 0x3c),(int32_t)uStack_80);
      uStack_88 = uVar1;
      FUN_1806277c0(&puStack_98,2);
      *(int16_t *)((ulonglong)uStack_88 + lStack_90) = 0x2f2f;
      *(int8_t *)((int16_t *)((ulonglong)uStack_88 + lStack_90) + 1) = 0;
      uStack_88 = 2;
      FUN_1806279c0(&puStack_58,param_2);
      uVar1 = uStack_88;
      puStack_78 = &unknown_var_3456_ptr;
      uStack_60 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      uVar6 = (ulonglong)uStack_88;
      if (lStack_90 != 0) {
        FUN_1806277c0(&puStack_78,uVar6);
      }
      if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lStack_70,lStack_90,uVar6);
      }
      uStack_68 = uVar1;
      if (lStack_70 != 0) {
        *(int8_t *)(uVar6 + lStack_70) = 0;
      }
      uStack_60._4_4_ = uStack_80._4_4_;
      if (0 < iStack_48) {
        FUN_1806277c0(&puStack_78,iStack_48);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)uStack_68 + lStack_70,lStack_50,(longlong)(iStack_48 + 1));
      }
      FUN_18005d190(plVar3 + 4,&puStack_78);
      puStack_78 = &unknown_var_3456_ptr;
      if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_70 = 0;
      uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
      puStack_78 = &unknown_var_720_ptr;
      puStack_58 = &unknown_var_3456_ptr;
      if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_50 = 0;
      uStack_40 = 0;
      puStack_58 = &unknown_var_720_ptr;
      puStack_98 = &unknown_var_3456_ptr;
      if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      puStack_98 = &unknown_var_720_ptr;
    }
    *(longlong **)(lVar2 + 0x58) = plVar3;
    FUN_18005ea90(param_1 + 0x1b8 + (longlong)*(int *)(param_1 + 0x168) * 0x20,&plStackX_18);
    FUN_18005ea90(param_1 + 200 + (longlong)*(int *)(param_1 + 0x168) * 0x20,&lStackX_20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802c28d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puStackX_8;
  uint64_t *puStackX_10;
  uint64_t *puStackX_18;
  
  plVar1 = (longlong *)(param_1 + 0x170);
  uVar5 = *(longlong *)(param_1 + 0x178) - *plVar1 >> 3;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      lVar2 = *(longlong *)(*plVar1 + uVar4 * 8);
      if ((*(char *)(lVar2 + 0x60) == '\0') && (*(char *)(lVar2 + 0x61) == '\0')) {
        return lVar2;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar5);
  }
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x90,8,3,0xfffffffffffffffe);
  *puVar3 = &unknown_var_720_ptr;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &unknown_var_3480_ptr;
  puVar3[1] = puVar3 + 3;
  *(int8_t *)(puVar3 + 3) = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  puStackX_10 = puVar3;
  puStackX_18 = puVar3;
  strcpy_s(puVar3[1],0x40,&system_buffer_ptr);
  *(int16_t *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puStackX_8 = (uint64_t *)0x3;
  (**(code **)(**(longlong **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(longlong **)(system_message_buffer + 0x1d78),&puStackX_8);
  puStackX_8._0_4_ = 2;
  (**(code **)(**(longlong **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(longlong **)(system_message_buffer + 0x1d78),&puStackX_8,puVar3 + 0xe);
  (**(code **)(**(longlong **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(longlong **)(system_message_buffer + 0x1d78),&puStackX_8,puVar3 + 0xf);
  puStackX_8._0_4_ = 1;
  (**(code **)(**(longlong **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(longlong **)(system_message_buffer + 0x1d78),&puStackX_8,puVar3 + 0x10);
  puStackX_8 = (uint64_t *)CONCAT44(puStackX_8._4_4_,4);
  (**(code **)(**(longlong **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(longlong **)(system_message_buffer + 0x1d78),&puStackX_8,puVar3 + 0x11);
  puStackX_8 = puVar3;
  FUN_18005ea90(plVar1,&puStackX_8);
  return *(longlong *)(*plVar1 + uVar5 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c2ac0(uint64_t *param_1)
void FUN_1802c2ac0(uint64_t *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 2)) {
    lVar5 = *(longlong *)(system_message_buffer + 0x1cd8);
    if ((*(char *)(system_parameter_buffer + 0x12e3) != '\0') || (*(char *)(system_parameter_buffer + 0x12dd) != '\0')
       ) {
      plVar4 = (longlong *)(lVar5 + 0x80d8 + (longlong)*(int *)(lVar5 + 0x8088) * 0x20);
      lVar1 = *plVar4;
      lVar1 = *(longlong *)(lVar1 + ((longlong)(int)(plVar4[1] - lVar1 >> 3) + -1) * 8);
      FUN_180057340();
      if (*(longlong *)(lVar1 + 0x68) == 0) {
        *(longlong *)(lVar5 + 0x80b0 + (longlong)*(int *)(lVar5 + 0x8088) * 8) = lVar1;
      }
      lVar3 = (longlong)*(int *)(lVar5 + 0x8088) * 0x20;
      lVar1 = *(longlong *)(lVar3 + 200 + lVar5 + 0x7f20);
      iVar2 = (int)(*(longlong *)(lVar3 + 0xd0 + lVar5 + 0x7f20) - lVar1 >> 3) + -1;
      if (-1 < iVar2) {
        lVar5 = (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar1 + lVar5 * 8) + 0x60) == '\x01') {
            if (iVar2 != -1) {
              FUN_1802c24b0(*(uint64_t *)(lVar1 + (longlong)iVar2 * 8));
            }
            break;
          }
          iVar2 = iVar2 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
    }
  }
  *param_1 = &unknown_var_720_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c2be0(longlong *param_1)
void FUN_1802c2be0(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)(system_parameter_buffer + 0x12e7) != '\0') {
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    FUN_1802c24b0(*param_1);
    *(uint64_t *)(lVar1 + 0x80b0 + (longlong)*(int *)(lVar1 + 0x8088) * 8) =
         *(uint64_t *)(*param_1 + 0x58);
  }
  return;
}



uint64_t * FUN_1802c2c40(uint64_t *param_1)

{
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1802479e0(param_1,&uStack_a8);
  FUN_180246690(&uStack_a8);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x14) = 0x43480000;
  *(int32_t *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0xac) = 0x411cf5c3;
  *(int32_t *)(param_1 + 0x1a) = 0xffffffff;
  return param_1;
}






// 函数: void FUN_1802c2d80(ulonglong *param_1)
void FUN_1802c2d80(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x22) {
    puVar4[0x16] = &unknown_var_720_ptr;
    puVar4[0xb] = &unknown_var_720_ptr;
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1802c2da0(longlong *param_1)
void FUN_1802c2da0(longlong *param_1)

{
  FUN_1802c3a30();
  FUN_1802c6e70();
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c2de0(longlong *param_1)
void FUN_1802c2de0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  void *puVar4;
  int8_t auStack_368 [32];
  int32_t uStack_348;
  int32_t uStack_340;
  int32_t uStack_338;
  int32_t uStack_330;
  int32_t uStack_328;
  uint64_t uStack_320;
  int8_t uStack_318;
  int32_t uStack_310;
  longlong *plStack_308;
  longlong *plStack_300;
  longlong *plStack_2f8;
  uint64_t uStack_2f0;
  int32_t uStack_2e8;
  int32_t uStack_2e4;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  longlong *plStack_2c8;
  int32_t uStack_2c0;
  int8_t uStack_2bc;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  uint64_t uStack_2ac;
  uint64_t uStack_2a4;
  int32_t uStack_29c;
  int32_t uStack_298;
  longlong *plStack_290;
  int32_t uStack_288;
  int8_t uStack_284;
  uint64_t uStack_278;
  void *puStack_268;
  ulonglong *puStack_260;
  uint64_t uStack_258;
  ulonglong auStack_250 [15];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [72];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_278 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_368;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x460) < 1) {
    auStack_250[8] = 0;
    auStack_250[9] = 0;
    auStack_250[10] = 0;
    auStack_250[0xb] = 0;
    auStack_250[0xc] = 0;
    auStack_250[0xd] = 0;
    auStack_250[0xe] = 0;
    puStack_268 = (void *)0x0;
    puStack_260 = (ulonglong *)0x0;
    uStack_258 = 0;
    auStack_250[0] = 0;
    auStack_250[1] = 0;
    auStack_250[2] = 0;
    auStack_250[3] = 0;
    auStack_250[4] = 0;
    auStack_250[5] = 0;
    auStack_250[6] = 0;
    auStack_250[7] = 0;
    FUN_1802479e0(param_1,&puStack_268);
    FUN_180246690(&puStack_268);
    plVar2 = (longlong *)FUN_1800c1420();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    *(uint *)(param_1[7] + 0x328) = *(uint *)(param_1[7] + 0x328) | 0x20000000;
    plVar2 = (longlong *)FUN_1800c1420();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[8];
    param_1[8] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    *(uint *)(param_1[8] + 0x328) = *(uint *)(param_1[8] + 0x328) | 0x20000000;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2d8 = 0x80045e90;
    uStack_2d4 = 1;
    FUN_18023c450(param_1[7],0,(int)param_1[0x1a],&uStack_2f0);
    if ((code *)CONCAT44(uStack_2dc,uStack_2e0) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_2dc,uStack_2e0))(&uStack_2f0,0,0);
    }
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2d8 = 0x80045e90;
    uStack_2d4 = 1;
    FUN_18023c450(param_1[8],0,(int)param_1[0x1a],&uStack_2f0);
    if ((code *)CONCAT44(uStack_2dc,uStack_2e0) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_2dc,uStack_2e0))(&uStack_2f0,0,0);
    }
  }
  else {
    puStack_268 = &unknown_var_3480_ptr;
    puStack_260 = auStack_250;
    auStack_250[0] = auStack_250[0] & 0xffffffffffffff00;
    uStack_258 = CONCAT44((int)((ulonglong)uStack_258 >> 0x20),9);
    strcpy_s(auStack_250,0x40,&unknown_var_7720_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0x20000;
    uStack_330 = 8;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0x45;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (longlong *)*param_1;
    *param_1 = lVar1;
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    puStack_268 = &unknown_var_720_ptr;
    puStack_1d8 = &unknown_var_3480_ptr;
    puStack_1d0 = auStack_1c0;
    auStack_1c0[0] = 0;
    uStack_1c8 = 0xc;
    strcpy_s(auStack_1c0,0x40,&unknown_var_7736_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0x10000;
    uStack_330 = 4;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0x45;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (longlong *)param_1[1];
    param_1[1] = lVar1;
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    puStack_1d8 = &unknown_var_720_ptr;
    puStack_268 = &unknown_var_3480_ptr;
    puStack_260 = auStack_250;
    auStack_250[0] = auStack_250[0] & 0xffffffffffffff00;
    uStack_258 = CONCAT44((int)((ulonglong)uStack_258 >> 0x20),9);
    strcpy_s(auStack_250,0x40,&unknown_var_7800_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0x30000;
    uStack_330 = 8;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0x45;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_2f8 = (longlong *)param_1[2];
    param_1[2] = lVar1;
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    puStack_268 = &unknown_var_720_ptr;
    puStack_1d8 = &unknown_var_3480_ptr;
    puStack_1d0 = auStack_1c0;
    auStack_1c0[0] = 0;
    uStack_1c8 = 0x12;
    strcpy_s(auStack_1c0,0x40,&unknown_var_7816_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0x30000;
    uStack_330 = 8;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0x45;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[3];
    param_1[3] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    puStack_1d8 = &unknown_var_720_ptr;
    puStack_268 = &unknown_var_3480_ptr;
    puStack_260 = auStack_250;
    auStack_250[0] = auStack_250[0] & 0xffffffffffffff00;
    uStack_258 = CONCAT44((int)((ulonglong)uStack_258 >> 0x20),0x16);
    strcpy_s(auStack_250,0x40,&unknown_var_7752_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0x30000;
    uStack_330 = 8;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0x45;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[4];
    param_1[4] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    puStack_268 = &unknown_var_720_ptr;
    puStack_1d8 = &unknown_var_3480_ptr;
    puStack_1d0 = auStack_1c0;
    auStack_1c0[0] = 0;
    uStack_1c8 = 0x11;
    strcpy_s(auStack_1c0,0x40,&unknown_var_7776_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 1;
    uStack_330 = 0x20;
    uStack_338 = 0;
    uStack_340 = 3;
    uStack_348 = 0x220;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[5];
    param_1[5] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    puStack_1d8 = &unknown_var_720_ptr;
    puStack_268 = &unknown_var_3480_ptr;
    puStack_260 = auStack_250;
    auStack_250[0] = auStack_250[0] & 0xffffffffffffff00;
    uStack_258 = CONCAT44((int)((ulonglong)uStack_258 >> 0x20),0xb);
    strcpy_s(auStack_250,0x40,&unknown_var_7888_ptr);
    uStack_310 = 1;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 1;
    uStack_330 = 0x10;
    uStack_338 = 0;
    uStack_340 = 3;
    uStack_348 = 0x220;
    plVar2 = (longlong *)FUN_1800b0a10();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (longlong *)param_1[6];
    param_1[6] = lVar1;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    puStack_268 = &unknown_var_720_ptr;
    uStack_2b0 = 1;
    uStack_2a4 = 0;
    uStack_29c = 0;
    plStack_308 = (longlong *)0x0;
    plStack_290 = (longlong *)0x0;
    uStack_284 = 0;
    uStack_298 = 0x1000001;
    uStack_2b8 = 0x10000000100;
    uStack_2ac = 0x1e00000001;
    uStack_288 = (int32_t)param_1[0x1a];
    puStack_1d8 = &unknown_var_672_ptr;
    puStack_1d0 = auStack_1c0;
    auStack_1c0[0] = 0;
    uStack_1c8 = 0x14;
    strcpy_s(auStack_1c0,0x20,&unknown_var_7904_ptr);
    puStack_178 = &unknown_var_3432_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = uStack_1c8;
    puVar4 = &system_buffer_ptr;
    if (puStack_1d0 != (void *)0x0) {
      puVar4 = puStack_1d0;
    }
    strcpy_s(auStack_160,0x80,puVar4);
    plVar2 = (longlong *)FUN_1800b2450();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_2f8 = (longlong *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    puStack_178 = &unknown_var_720_ptr;
    puStack_1d8 = &unknown_var_720_ptr;
    *(uint *)(param_1[7] + 0x328) = *(uint *)(param_1[7] + 0x328) | 0x20000000;
    uStack_2e8 = 1;
    uStack_2dc = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    plStack_2f8 = (longlong *)0x0;
    plStack_2c8 = (longlong *)0x0;
    uStack_2bc = 0;
    uStack_2d0 = 0x1000001;
    uStack_2f0 = 0x10000000100;
    uStack_2e0 = 0x1e;
    uStack_2e4 = 7;
    uStack_2c0 = (int32_t)param_1[0x1a];
    puStack_268 = &unknown_var_672_ptr;
    puStack_260 = auStack_250;
    auStack_250[0] = auStack_250[0] & 0xffffffffffffff00;
    uStack_258 = CONCAT44((int)((ulonglong)uStack_258 >> 0x20),0x18);
    strcpy_s(auStack_250,0x20,&unknown_var_7840_ptr);
    puStack_d8 = &unknown_var_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = (int32_t)uStack_258;
    puVar3 = (ulonglong *)&system_buffer_ptr;
    if (puStack_260 != (ulonglong *)0x0) {
      puVar3 = puStack_260;
    }
    strcpy_s(auStack_c0,0x80,puVar3);
    plVar2 = (longlong *)FUN_1800b2450();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (longlong *)param_1[8];
    param_1[8] = lVar1;
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    puStack_d8 = &unknown_var_720_ptr;
    puStack_268 = &unknown_var_720_ptr;
    *(uint *)(param_1[8] + 0x328) = *(uint *)(param_1[8] + 0x328) | 0x20000000;
    puStack_178 = &unknown_var_3432_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0x10;
    strcpy_s(auStack_160,0x80,&unknown_var_3008_ptr);
    plVar2 = (longlong *)FUN_1800b31f0(system_resource_state,&plStack_300,&puStack_178,1);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      plStack_308 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_308 = (longlong *)param_1[10];
    param_1[10] = (longlong)plVar2;
    if (plStack_308 != (longlong *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    puStack_178 = &unknown_var_720_ptr;
    lVar1 = param_1[10];
    FUN_1801c1880(lVar1,&unknown_var_2504_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2496_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2528_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2512_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2552_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2544_ptr);
    FUN_1801c1880(lVar1,&unknown_var_2584_ptr);
    if (plStack_2c8 != (longlong *)0x0) {
      (**(code **)(*plStack_2c8 + 0x38))();
    }
    if (plStack_290 != (longlong *)0x0) {
      (**(code **)(*plStack_290 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_368);
}






// 函数: void FUN_1802c3a30(uint64_t param_1)
void FUN_1802c3a30(uint64_t param_1)

{
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1802479e0(param_1,&uStack_a8);
  FUN_180246690(&uStack_a8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part077.c - 3 个函数

// 函数: void FUN_180242e60(uint64_t *param_1)
void FUN_180242e60(uint64_t *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  longlong *plVar8;
  int32_t *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t *puVar12;
  float fVar13;
  int8_t auStack_378 [32];
  void **ppuStack_358;
  uint uStack_350;
  uint uStack_34c;
  int32_t uStack_348;
  int32_t uStack_344;
  int32_t uStack_340;
  int32_t uStack_33c;
  int32_t uStack_338;
  int32_t uStack_334;
  int32_t uStack_330;
  int32_t uStack_32c;
  int32_t uStack_328;
  uint uStack_324;
  int32_t uStack_320;
  uint uStack_31c;
  longlong *plStack_318;
  longlong **pplStack_310;
  uint64_t uStack_308;
  int32_t uStack_300;
  int32_t uStack_2fc;
  int16_t uStack_2f8;
  int8_t uStack_2f6;
  int32_t uStack_2f4;
  int8_t uStack_2f0;
  uint64_t uStack_2e8;
  void *puStack_2e0;
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  int32_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  int32_t uStack_2ac;
  int16_t uStack_2a8;
  int8_t uStack_2a6;
  int32_t uStack_2a4;
  int8_t uStack_2a0;
  uint64_t uStack_298;
  void *puStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  uint64_t uStack_268;
  longlong *plStack_260;
  ulonglong uStack_258;
  longlong lStack_248;
  uint64_t uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  uint64_t uStack_220;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  uint uStack_20c;
  uint64_t uStack_208;
  int8_t auStack_1f8 [56];
  int8_t auStack_1c0 [56];
  int8_t auStack_188 [56];
  int8_t auStack_150 [56];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t *puStack_40;
  ulonglong uStack_38;
  
  uStack_268 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_378;
  if ((void *)*param_1 == &unknown_var_9328_ptr) {
    puVar12 = (uint64_t *)param_1[0x110];
  }
  else {
    puVar12 = (uint64_t *)(**(code **)((void *)*param_1 + 0x60))();
  }
  iVar6 = *(int *)(system_main_module_state + 0x224);
  if (*(int *)((longlong)param_1 + 0x894) == iVar6) goto LAB_18024346d;
  if (*(int *)(puVar12 + 0x70) == 0) {
    uStack_348 = 1;
    uStack_344 = 1;
    uStack_33c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0x3f800000;
    uStack_328 = 0;
    uStack_324 = uStack_324 & 0xffffff00;
    uStack_320 = 0xffffffff;
    uStack_31c = uStack_31c & 0xffffff00;
    uStack_350 = (uint)*(ushort *)((longlong)puVar12 + 0x32c);
    uStack_34c = (uint)*(ushort *)((longlong)puVar12 + 0x32e);
    uStack_340 = *(int32_t *)((longlong)puVar12 + 0x324);
    uStack_32c = 0x101;
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(system_context_ptr + 8) + 8) + 0x48);
    iVar5 = _Thrd_id();
    if (iVar5 == iVar2) {
      uStack_238 = CONCAT44(uStack_34c,uStack_350);
      uStack_230 = CONCAT44(uStack_344,uStack_348);
      uStack_228 = CONCAT44(uStack_33c,uStack_340);
      uStack_220 = CONCAT44(uStack_334,uStack_338);
      uStack_218 = uStack_330;
      uStack_214 = uStack_32c;
      uStack_210 = uStack_328;
      uStack_20c = uStack_324;
      uStack_208 = CONCAT44(uStack_31c,uStack_320);
      FUN_1800a43c0(system_message_buffer,&uStack_238,puVar12);
    }
    else {
      pplStack_310 = (longlong **)&puStack_118;
      puStack_118 = &unknown_var_3432_ptr;
      puStack_110 = auStack_100;
      uStack_108 = 0;
      auStack_100[0] = 0;
      uStack_80 = 0x1c;
      uStack_78 = CONCAT44(uStack_34c,uStack_350);
      uStack_70 = CONCAT44(uStack_344,uStack_348);
      uStack_68 = CONCAT44(uStack_33c,uStack_340);
      uStack_60 = CONCAT44(uStack_334,uStack_338);
      uStack_58 = uStack_330;
      uStack_54 = uStack_32c;
      uStack_50 = uStack_328;
      uStack_4c = uStack_324;
      uStack_48 = CONCAT44(uStack_31c,uStack_320);
      puStack_40 = puVar12;
      if ((void *)*puVar12 == &unknown_var_8720_ptr) {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((void *)*puVar12 + 0x28))(puVar12);
      }
      uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x100,8,3);
      plVar8 = (longlong *)FUN_18005ce30(uVar7,&puStack_118);
      ppuStack_358 = (void **)plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      lVar3 = system_context_ptr;
      pplStack_310 = &plStack_318;
      plStack_318 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      FUN_18005e370(lVar3,&plStack_318);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8);
      }
      ppuStack_358 = &puStack_118;
      puStack_118 = &unknown_var_720_ptr;
    }
  }
  *(int *)((longlong)param_1 + 0x894) = iVar6;
  if ((void *)*param_1 != &unknown_var_9328_ptr) {
    (**(code **)((void *)*param_1 + 0x60))(param_1);
  }
  if (0 < (int)system_system_data_memory[1]) goto LAB_18024346d;
  if ((void *)*param_1 != &unknown_var_9328_ptr) {
    (**(code **)((void *)*param_1 + 0x60))(param_1);
    if ((void *)*param_1 != &unknown_var_9328_ptr) {
      (**(code **)((void *)*param_1 + 0x60))(param_1);
    }
  }
  iVar6 = *(int *)(param_1 + 0x112);
  if ((*(int *)(param_1 + 0x112) == 0) &&
     ((*(char *)((longlong)param_1 + 0x889) == '\0' ||
      (iVar6 = 0, *(char *)((longlong)param_1 + 0x88a) == '\0')))) {
    FUN_180243550(auStack_1f8,(longlong)param_1 + 0x89c);
    lVar3 = system_system_data_memory;
    puVar9 = (int32_t *)FUN_18023ced0(puVar12);
    (**(code **)(lVar3 + 0x160))(*puVar9);
    *(int32_t *)(param_1 + 0x112) = 1;
    FUN_1801ec3f0(auStack_1f8);
    iVar6 = *(int *)(param_1 + 0x112);
  }
  if (iVar6 == 1) {
    FUN_180243550(auStack_1c0,param_1 + 0x114);
    lVar3 = param_1[0xda];
    if (lVar3 != 0) {
      *(int8_t *)(lVar3 + 0x60cb0) = 0;
      FUN_1801c2360(lVar3 + 0x60830,&plStack_260);
LAB_1802431e0:
      if (uStack_258 != *(ulonglong *)(lVar3 + 0x60838)) {
        if ((*(byte *)(lStack_248 + 0x2c4) & 2) != 0) {
          FUN_1802ee720(lStack_248,0);
        }
        lVar4 = *plStack_260;
        do {
          uStack_258 = uStack_258 + 1;
          lVar10 = (uStack_258 & 0xffffffff) * 0x10;
          lVar11 = lVar10 + 8 + lVar4;
          if ((*(ulonglong *)(lVar10 + lVar4) & 0xffffffff00000000) == 0) {
            lVar11 = 0;
          }
          if (lVar11 != 0) {
            lStack_248 = *(longlong *)(lVar4 + 8 + (uStack_258 & 0xffffffff) * 0x10);
            break;
          }
        } while (uStack_258 != plStack_260[1]);
        goto LAB_1802431e0;
      }
      if (*(char *)((longlong)param_1 + 0x88c) == '\0') {
        FUN_1802e1590(param_1 + 0xac,param_1[0xda]);
        *(int8_t *)((longlong)param_1 + 0x88c) = 1;
        *(int32_t *)(param_1 + 0xb6) = 0x3dcccccd;
      }
      if (*(char *)((longlong)param_1 + 0x889) == '\0') {
        fVar13 = 0.0001;
      }
      else {
        fVar1 = *system_system_data_memory;
        fVar13 = fVar1;
        if (0 < *(int *)(param_1 + 0x113)) {
          fVar13 = 0.0;
          if ((0.0 <= fVar1) && (fVar13 = fVar1, 0.016 <= fVar1)) {
            fVar13 = 0.016;
          }
          *(int *)(param_1 + 0x113) = *(int *)(param_1 + 0x113) + -1;
        }
      }
      FUN_180199500(param_1[0xda],fVar13,1);
    }
    *(int32_t *)(param_1 + 0x112) = 2;
    FUN_1801ec3f0(auStack_1c0);
    iVar6 = *(int *)(param_1 + 0x112);
  }
  if (iVar6 == 2) {
    FUN_180243550(auStack_188,(longlong)param_1 + 0x8a4);
    if (*(char *)((longlong)param_1 + 0x889) == '\0') {
      if (param_1[0xda] != 0) {
        uStack_308 = 0;
        uStack_300 = 0;
        uStack_2fc = 0xffffffff;
        uStack_2f8 = 1;
        uStack_2f6 = 0;
        uStack_2f4 = 0xffffffff;
        uStack_2f0 = 1;
        uStack_2e8 = 0;
        ppuStack_358 = &puStack_2e0;
        puStack_2e0 = (void *)0x0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 3;
        uStack_2c0 = 0;
        iVar6 = FUN_1801a3620(param_1[0xda],&uStack_308);
        ppuStack_358 = &puStack_2e0;
        if (puStack_2e0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (iVar6 == 0) goto LAB_180243381;
      }
    }
    else {
LAB_180243381:
      *(int32_t *)(param_1 + 0x112) = 3;
    }
    FUN_1801ec3f0(auStack_188);
  }
  if (*(int *)(param_1 + 0x112) != 3) goto LAB_18024346d;
  FUN_180243550(auStack_150,param_1 + 0x115);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0xffffffff;
  uStack_2a8 = 1;
  uStack_2a6 = 0;
  uStack_2a4 = 0xffffffff;
  uStack_2a0 = 1;
  uStack_298 = 0;
  ppuStack_358 = &puStack_290;
  puStack_290 = (void *)0x0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 3;
  uStack_270 = 0;
  iVar6 = FUN_1801a3620(param_1[0xda],&uStack_2b8);
  if (*(char *)((longlong)param_1 + 0x889) == '\0') {
    if (iVar6 == 0) goto LAB_18024343a;
    *(int32_t *)(param_1 + 0x112) = 2;
  }
  else {
    *(int32_t *)(param_1[0xda] + 0x27c0) = 7;
LAB_18024343a:
    uVar7 = FUN_180302c30(param_1);
    param_1[0xa3] = uVar7;
  }
  ppuStack_358 = &puStack_290;
  if (puStack_290 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1801ec3f0(auStack_150);
LAB_18024346d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_378);
}



int FUN_180243520(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_18006edf0();
  }
  return iVar2 + -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180243550(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *apuStackX_10 [3];
  
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = param_2;
  apuStackX_10[0] = system_system_data_memory;
  if (system_system_data_memory == (uint64_t *)0x0) {
    apuStackX_10[0] = param_1;
    QueryPerformanceCounter(apuStackX_10);
  }
  param_1[5] = (double)((longlong)apuStackX_10[0] - system_system_data_memory) * system_system_data_memory;
  *(int8_t *)(param_1 + 6) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802435e0(uint64_t param_1,longlong *param_2)
void FUN_1802435e0(uint64_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar3 = system_resource_state;
  lVar1 = system_resource_state + 0x770;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar2 = *(longlong **)(lVar3 + 0x6c8);
  plVar5 = *(longlong **)(lVar3 + 0x6c0);
  if (plVar5 != plVar2) {
    do {
      if (*plVar5 == *param_2) break;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
    if (plVar5 != plVar2) {
      FUN_1800ba050();
    }
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}






// 函数: void FUN_180243690(longlong *param_1,longlong *param_2)
void FUN_180243690(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (longlong *)param_1[2];
  param_1[2] = (longlong)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
                    // WARNING: Could not recover jumptable at 0x0001802436e6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





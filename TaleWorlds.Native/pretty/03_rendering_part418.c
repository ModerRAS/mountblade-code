#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part418.c - 11 个函数

// 函数: void FUN_180496460(int64_t *param_1)
void FUN_180496460(int64_t *param_1)

{
  if (*param_1 != 0) {
    LocalFree();
  }
  return;
}



float * FUN_180496490(float *param_1,float *param_2,float *param_3,uint64_t param_4)

{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  double dVar14;
  double dStackX_8;
  double dStackX_10;
  double adStackX_18 [2];
  double adStack_b8 [22];
  
  dVar14 = (double)param_3[3];
  dVar6 = (double)*param_3;
  dVar4 = (double)param_3[1];
  dVar3 = (double)param_3[2];
  auVar12._0_8_ = dVar3 * dVar3;
  auVar12._8_8_ = 0;
  dVar10 = (double)*param_2;
  dVar9 = (double)param_2[1];
  dVar8 = (double)param_2[2];
  dVar7 = (double)param_2[3];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar6 * dVar6 + dVar4 * dVar4 + auVar12._0_8_ + dVar14 * dVar14;
  auVar13 = sqrtpd(auVar12,auVar13);
  dVar2 = 1.0 / auVar13._0_8_;
  auVar11._0_8_ = dVar7 * dVar7;
  auVar11._8_8_ = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8 + auVar11._0_8_;
  auVar13 = sqrtpd(auVar11,auVar1);
  dVar5 = 1.0 / auVar13._0_8_;
  FUN_180498330(&dStackX_8,&dStackX_10,adStackX_18,adStack_b8,dVar5 * dVar10,dVar5 * dVar9,
                dVar5 * dVar8,dVar5 * dVar7,dVar2 * dVar6,dVar2 * dVar4,dVar2 * dVar3,dVar2 * dVar14
                ,param_4);
  *param_1 = (float)dStackX_8;
  param_1[1] = (float)dStackX_10;
  param_1[2] = (float)adStackX_18[0];
  param_1[3] = (float)adStack_b8[0];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804966c0(uint64_t param_1,byte *param_2,int64_t param_3,int32_t param_4,
void FUN_1804966c0(uint64_t param_1,byte *param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6,int64_t param_7)

{
  int64_t lVar1;
  bool bVar2;
  double dVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  uint64_t *puVar7;
  byte *pbVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void *puVar12;
  byte *pbVar13;
  uint64_t uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  char cVar19;
  char cVar20;
  double dVar21;
  int8_t auStack_648 [32];
  uint64_t uStack_628;
  int64_t **pplStack_620;
  uint uStack_618;
  byte *pbStack_610;
  double *pdStack_608;
  int32_t auStack_600 [2];
  int64_t lStack_5f8;
  int64_t lStack_5f0;
  byte *pbStack_5e8;
  int64_t **pplStack_5e0;
  int64_t *plStack_5d8;
  int64_t *plStack_5d0;
  uint64_t uStack_5c8;
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  uint64_t uStack_5b0;
  int8_t auStack_5a8 [8];
  void *puStack_5a0;
  uint64_t uStack_598;
  int64_t lStack_590;
  int32_t uStack_588;
  int32_t uStack_584;
  int32_t uStack_580;
  int32_t uStack_57c;
  int64_t *plStack_578;
  int64_t *plStack_570;
  int64_t lStack_568;
  byte **ppbStack_560;
  double **ppdStack_558;
  uint64_t uStack_550;
  uint64_t uStack_548;
  uint64_t uStack_540;
  uint64_t uStack_538;
  uint64_t uStack_530;
  byte *pbStack_528;
  void *puStack_520;
  int8_t *puStack_518;
  int32_t uStack_510;
  int8_t auStack_508 [64];
  double dStack_4c8;
  int64_t lStack_4c0;
  uint64_t uStack_4b8;
  int32_t uStack_4b0;
  double adStack_4a8 [64];
  double adStack_2a8 [64];
  uint64_t uStack_a8;
  
  uStack_530 = 0xfffffffffffffffe;
  uStack_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_648;
  lStack_5f8 = param_7;
  pbVar15 = (byte *)0x0;
  uStack_618 = 0;
  bVar2 = 0 < *(int *)(param_2 + 0x50);
  pbVar8 = pbVar15;
  pbStack_5e8 = param_2;
  lStack_568 = param_3;
  if (bVar2) {
    puVar7 = (uint64_t *)FUN_1800b3970(param_1,&plStack_578,param_2 + 0x40,1);
    pbVar8 = (byte *)*puVar7;
  }
  uStack_618 = (uint)bVar2;
  uVar18 = (uint)bVar2;
  pbStack_610 = pbVar8;
  if (bVar2) {
    uVar18 = 0;
    uStack_618 = 0;
    if (plStack_578 != (int64_t *)0x0) {
      (**(code **)(*plStack_578 + 0x38))();
    }
  }
  lVar10 = (*(int64_t *)(param_2 + 0x10) - *(int64_t *)(param_2 + 8)) / 0x12 +
           (*(int64_t *)(param_2 + 0x10) - *(int64_t *)(param_2 + 8) >> 0x3f);
  cVar19 = (char)(lVar10 >> 2) - (char)(lVar10 >> 0x3f);
  cVar20 = '\0';
  if ('\0' < cVar19) {
    lStack_5f0 = 0;
    do {
      lVar10 = lStack_5f0;
      if (pbVar8 == (byte *)0x0) {
        plStack_5d8 = (int64_t *)0x0;
        plStack_5d0 = (int64_t *)0x0;
        uStack_5c8 = (code *)0x0;
        uStack_5c0 = (code *)CONCAT44(uStack_5c0._4_4_,3);
        FUN_1800b5d10(0,&plStack_5d8);
        plVar5 = plStack_5d0;
        uVar14 = (int64_t)plStack_5d0 - (int64_t)plStack_5d8 >> 3;
        plVar11 = plStack_5d8;
        pbVar13 = pbVar15;
        dVar3 = 1.7976931348623157e+308;
        pbVar8 = pbStack_610;
        lVar10 = lStack_5f0;
        plVar4 = plStack_5d8;
        dVar21 = 1.7976931348623157e+308;
        if (uVar14 != 0) {
          do {
            dVar21 = dVar3;
            if ((*(char *)(*plVar11 + 0x148) == cVar19) &&
               (dVar21 = (double)FUN_18040b830(*plVar11,cVar20), dVar3 <= dVar21)) {
              dVar21 = dVar3;
            }
            uVar18 = (int)pbVar13 + 1;
            plVar11 = plVar11 + 1;
            pbVar13 = (byte *)(uint64_t)uVar18;
            dVar3 = dVar21;
            pbVar8 = pbStack_610;
            lVar10 = lStack_5f0;
            plVar4 = plStack_5d8;
          } while ((uint64_t)(int64_t)(int)uVar18 < uVar14);
        }
        for (; pbStack_610 = pbVar8, lStack_5f0 = lVar10, plVar4 != plVar5; plVar4 = plVar4 + 1) {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          pbVar8 = pbStack_610;
          lVar10 = lStack_5f0;
        }
        if (plStack_5d8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(plStack_5d8);
        }
      }
      else {
        dVar21 = (double)FUN_18040b830(pbVar8,cVar20);
      }
      dVar3 = 1.1920928955078125e-07;
      if ((1.1920928955078125e-07 <= dVar21) && (dVar3 = dVar21, 1.5707963267948966 <= dVar21)) {
        dVar3 = 1.5707963267948966;
      }
      *(double *)((int64_t)adStack_2a8 + lVar10) = dVar3 * 0.2;
      *(double *)((int64_t)adStack_4a8 + lVar10) = dVar3 - dVar3 * 0.2;
      cVar20 = cVar20 + '\x01';
      lStack_5f0 = lVar10 + 8;
      param_7 = lStack_5f8;
      param_2 = pbStack_5e8;
      uVar18 = uStack_618;
    } while (cVar20 < cVar19);
  }
  pbStack_5e8 = (byte *)0x3ee4f8b588e368f1;
  pdStack_608 = adStack_4a8;
  lStack_5f0 = CONCAT44(lStack_5f0._4_4_,param_6);
  lStack_5f8 = CONCAT44(lStack_5f8._4_4_,param_5);
  pbStack_610 = param_2;
  auStack_600[0] = param_4;
  if (0 < *(int *)(param_2 + 0x50)) {
    FUN_1800b3970(param_6,&plStack_570,param_2 + 0x40,1);
    uStack_618 = uVar18 | 4;
    uVar18 = uStack_618;
  }
  if (((uVar18 & 4) != 0) && (uStack_618 = uVar18 & 0xfffffffb, plStack_570 != (int64_t *)0x0)) {
    (**(code **)(*plStack_570 + 0x38))();
  }
  if ((*pbStack_610 & 1) != 0) {
    uStack_628 = CONCAT44(uStack_628._4_4_,(int32_t)lStack_5f8);
    FUN_180497f40((int)pbStack_5e8,pbStack_610 + 0x28);
  }
  lVar10 = *(int64_t *)(pbStack_610 + 0x10);
  lVar1 = *(int64_t *)(pbStack_610 + 8);
  pplStack_5e0 = &plStack_5d8;
  ppbStack_560 = &pbStack_610;
  ppdStack_558 = &pdStack_608;
  uStack_550 = auStack_600;
  uStack_548 = &lStack_5f8;
  uStack_540 = &lStack_5f0;
  uStack_538 = &pbStack_5e8;
  uStack_5c8 = FUN_180499f50;
  uStack_5c0 = FUN_180499e70;
  plStack_5d8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
  *plStack_5d8 = (int64_t)ppbStack_560;
  plStack_5d8[1] = (int64_t)ppdStack_558;
  *(int32_t *)(plStack_5d8 + 2) = (int32_t)uStack_550;
  *(int32_t *)((int64_t)plStack_5d8 + 0x14) = uStack_550._4_4_;
  *(int32_t *)(plStack_5d8 + 3) = (int32_t)uStack_548;
  *(int32_t *)((int64_t)plStack_5d8 + 0x1c) = uStack_548._4_4_;
  *(int32_t *)(plStack_5d8 + 4) = (int32_t)uStack_540;
  *(int32_t *)((int64_t)plStack_5d8 + 0x24) = uStack_540._4_4_;
  *(int32_t *)(plStack_5d8 + 5) = (int32_t)uStack_538;
  *(int32_t *)((int64_t)plStack_5d8 + 0x2c) = uStack_538._4_4_;
  pplStack_620 = &plStack_5d8;
  uStack_628 = 0xffffffffffffffff;
  FUN_18015b810((int32_t)uStack_540,0,(int)(char)((lVar10 - lVar1) / 0x48),1);
  func_0x0001804845c0(param_2);
  uStack_588 = 0x3f800000;
  uStack_584 = 0x40000000;
  uStack_57c = 3;
  uStack_598 = 1;
  puStack_5a0 = &system_ptr_0000;
  lStack_590 = 0;
  uStack_580 = 0;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < render_system_config_memory) && (SystemInitializer(&system_ptr_9da8), render_system_config_memory == -1)) {
    _Mtx_init_in_situ(0x180d49db0,2);
    FUN_1808fc820(FUN_180942a40);
    FUN_1808fcb30(&system_ptr_9da8);
  }
  pplStack_5e0 = (int64_t **)0x180d49db0;
  iVar6 = _Mtx_lock(0x180d49db0);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  if (lStack_590 == 0) {
    FUN_180496f60(auStack_5a8);
  }
  iVar6 = _Mtx_unlock(0x180d49db0);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  uVar18 = *(uint *)(param_7 + 0x10);
  pbVar13 = *(byte **)(param_7 + 8);
  pbVar8 = &system_buffer_ptr;
  if (pbVar13 != (byte *)0x0) {
    pbVar8 = pbVar13;
  }
  uVar14 = 0xcbf29ce484222325;
  pbVar17 = pbVar15;
  if (uVar18 != 0) {
    do {
      uVar14 = (uVar14 ^ *pbVar8) * 0x100000001b3;
      uVar16 = (int)pbVar17 + 1;
      pbVar8 = pbVar8 + 1;
      pbVar17 = (byte *)(uint64_t)uVar16;
    } while (uVar16 < uVar18);
  }
  for (lVar10 = *(int64_t *)(puStack_5a0 + (uVar14 % (uStack_598 & 0xffffffff)) * 8); lVar10 != 0;
      lVar10 = *(int64_t *)(lVar10 + 0x98)) {
    uVar16 = *(uint *)(lVar10 + 0x10);
    if (uVar18 == uVar16) {
      if (uVar18 != 0) {
        pbVar8 = pbVar13;
        do {
          pbVar17 = pbVar8 + (*(int64_t *)(lVar10 + 8) - (int64_t)pbVar13);
          uVar16 = (uint)*pbVar8 - (uint)*pbVar17;
          if (uVar16 != 0) break;
          pbVar8 = pbVar8 + 1;
        } while (*pbVar17 != 0);
      }
LAB_180496bee:
      if (uVar16 == 0) goto LAB_180496c00;
    }
    else if (uVar18 == 0) goto LAB_180496bee;
  }
  lVar10 = *(int64_t *)(puStack_5a0 + uStack_598 * 8);
LAB_180496c00:
  if (lVar10 != *(int64_t *)(puStack_5a0 + uStack_598 * 8)) {
    pplStack_5e0 = (int64_t **)&puStack_520;
    puStack_520 = &unknown_var_3480_ptr;
    puStack_518 = auStack_508;
    auStack_508[0] = 0;
    pdStack_608 = &dStack_4c8;
    dStack_4c8 = 0.0;
    lStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 3;
    uStack_510 = *(int32_t *)(lVar10 + 0x30);
    puVar12 = &system_buffer_ptr;
    if (*(void **)(lVar10 + 0x28) != (void *)0x0) {
      puVar12 = *(void **)(lVar10 + 0x28);
    }
    pbStack_528 = param_2;
    strcpy_s(puStack_518,0x40,puVar12);
    if (&dStack_4c8 != (double *)(lVar10 + 0x78)) {
      FUN_180499ca0(&dStack_4c8,*(double *)(lVar10 + 0x78),*(uint64_t *)(lVar10 + 0x80));
    }
    pbVar8 = pbStack_528;
    lVar10 = lStack_4c0 - (int64_t)dStack_4c8;
    pbVar13 = pbVar15;
    if (lVar10 / 0x28 != 0) {
      do {
        lVar1 = (int64_t)dStack_4c8 + (int64_t)pbVar15 * 0x28;
        puVar9 = (uint64_t *)FUN_1800b3970(lVar10,&pdStack_608,&puStack_520,0);
        FUN_18049a360(pbVar8,lVar1,*puVar9);
        if (pdStack_608 != (double *)0x0) {
          (**(code **)((int64_t)*pdStack_608 + 0x38))();
        }
        uVar18 = (int)pbVar13 + 1;
        pbVar15 = (byte *)(int64_t)(int)uVar18;
        lVar10 = lStack_4c0 - (int64_t)dStack_4c8;
        pbVar13 = (byte *)(uint64_t)uVar18;
      } while (pbVar15 < (byte *)(lVar10 / 0x28));
    }
    pplStack_5e0 = (int64_t **)&puStack_520;
    pdStack_608 = &dStack_4c8;
    FUN_1800ff020(&dStack_4c8);
    pplStack_5e0 = (int64_t **)&puStack_520;
    puStack_520 = &system_state_ptr;
  }
  lVar10 = lStack_568;
  FUN_18049c0f0(lStack_568,param_2,adStack_2a8,0x88e368f1);
  FUN_18049ae40(lVar10);
  plStack_5d8 = (int64_t *)0x0;
  plStack_5d0 = (int64_t *)0x0;
  uStack_5c8 = (code *)0x0;
  uStack_5c0 = (code *)0x0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  FUN_1804063d0(lVar10,&plStack_5d8);
  *(int *)(lVar10 + 0x54) =
       uStack_5b0._4_4_ + (int)uStack_5b0 + uStack_5b8._4_4_ + (int)uStack_5b8 + uStack_5c0._4_4_ +
       (int)uStack_5c0 + uStack_5c8._4_4_ + (int)uStack_5c8 + (int)plStack_5d0 + (int)plStack_5d8;
  FUN_1804995f0(auStack_5a8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_a8 ^ (uint64_t)auStack_648);
}





// 函数: void FUN_180496ea0(int64_t param_1)
void FUN_180496ea0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar3 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_1800ff020();
        puVar2[4] = &system_state_ptr;
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(puVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}





// 函数: void FUN_180496ec0(int64_t param_1)
void FUN_180496ec0(int64_t param_1)

{
  FUN_1800ff020();
  *(void **)(param_1 + 8) = &system_state_ptr;
  return;
}





// 函数: void FUN_180496f00(int64_t param_1)
void FUN_180496f00(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar3 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_1800ff020();
        puVar2[4] = &system_state_ptr;
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(puVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}





// 函数: void FUN_180496f20(uint64_t *param_1)
void FUN_180496f20(uint64_t *param_1)

{
  FUN_1800ff020();
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180496f60(void)
void FUN_180496f60(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180497f40(double param_1,int64_t *param_2,int8_t param_3,int32_t param_4,
void FUN_180497f40(double param_1,int64_t *param_2,int8_t param_3,int32_t param_4,
                  int32_t param_5)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int *piVar4;
  int64_t lVar5;
  ushort uVar6;
  float *pfVar7;
  int *piVar8;
  uint64_t uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int aiStackX_18 [4];
  int *piStack_118;
  int *piStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  int32_t uStack_e0;
  
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,param_3);
  FUN_180498b80(param_2,param_4,param_5);
  if (2 < *(ushort *)(param_2 + 2)) {
    piStack_f8 = (int *)0x0;
    piStack_f0 = (int *)0x0;
    piVar10 = (int *)0x0;
    piStack_e8 = (int *)0x0;
    uStack_e0 = 3;
    uVar6 = *(ushort *)(param_2 + 2);
    piVar8 = (int *)0x0;
    piVar11 = (int *)0x0;
    if (uVar6 != 0) {
      piStack_118 = (int *)0x0;
      piVar12 = piVar10;
      piVar13 = piVar10;
      piVar4 = piVar10;
      piVar15 = piVar10;
      do {
        iVar14 = (int)piVar4;
        if ((iVar14 == 0) || ((int)(uint)uVar6 <= iVar14 + 1)) {
LAB_180498181:
          piVar4 = (int *)0x0;
          piVar13 = piStack_118;
          piVar15 = piVar10;
          if (piVar8 < piVar12) {
            piStack_f0 = piVar8 + 1;
            *piVar8 = iVar14;
            piVar8 = piStack_f0;
          }
          else {
            lVar5 = (int64_t)piVar8 - (int64_t)piVar11 >> 2;
            if (lVar5 == 0) {
              lVar5 = 1;
LAB_1804981cb:
              piVar4 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 4,
                                            CONCAT71((int7)((uint64_t)piStack_118 >> 8),3));
            }
            else {
              lVar5 = lVar5 * 2;
              if (lVar5 != 0) goto LAB_1804981cb;
            }
            if (piVar11 != piVar8) {
                    // WARNING: Subroutine does not return
              memmove(piVar4,piVar11,(int64_t)piVar8 - (int64_t)piVar11);
            }
            *piVar4 = iVar14;
            piVar8 = piVar4 + 1;
            if (piVar11 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(piVar11);
            }
            piVar12 = piVar4 + lVar5;
            piVar11 = piVar4;
            piStack_f8 = piVar4;
            piStack_f0 = piVar8;
            piStack_e8 = piVar12;
          }
        }
        else {
          lVar2 = param_2[1];
          fVar1 = *(float *)(lVar2 + (int64_t)piVar15 * 4);
          lVar3 = *param_2;
          lVar5 = (int64_t)piVar15 + 1;
          if (lVar5 <= (int64_t)piVar10) {
            pfVar7 = (float *)((int64_t)piVar13 + lVar3 + 0x18);
            do {
              dVar16 = (double)((*(float *)(lVar2 + lVar5 * 4) - fVar1) *
                               (1.0 / (*(float *)(lVar2 + 4 + (int64_t)piVar10 * 4) - fVar1)));
              dVar18 = 1.0 - dVar16;
              dVar17 = (dVar18 * (double)*(float *)(lVar3 + (int64_t)piVar13) +
                       (double)*(float *)(lVar3 + 0x10 + (int64_t)piStack_118) * dVar16) -
                       (double)pfVar7[-2];
              dVar19 = (dVar18 * (double)*(float *)(lVar3 + 4 + (int64_t)piVar13) +
                       (double)*(float *)(lVar3 + 0x14 + (int64_t)piStack_118) * dVar16) -
                       (double)pfVar7[-1];
              dVar18 = (dVar18 * (double)*(float *)(lVar3 + 8 + (int64_t)piVar13) +
                       (double)*(float *)(lVar3 + 0x18 + (int64_t)piStack_118) * dVar16) -
                       (double)*pfVar7;
              dVar16 = param_1;
              if (param_1 < 0.0) {
                dVar16 = 1.1754943508222875e-38;
              }
              if (dVar16 * dVar16 <= dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18)
              goto LAB_180498181;
              lVar5 = lVar5 + 1;
              pfVar7 = pfVar7 + 4;
            } while (lVar5 <= (int64_t)piVar10);
          }
        }
        piVar4 = (int *)(uint64_t)(iVar14 + 1U);
        piVar10 = (int *)((int64_t)piVar10 + 1);
        piStack_118 = piStack_118 + 4;
        uVar6 = *(ushort *)(param_2 + 2);
      } while ((int)(iVar14 + 1U) < (int)(uint)uVar6);
    }
    uVar9 = (int64_t)piVar8 - (int64_t)piVar11 >> 2;
    if (uVar6 != uVar9) {
      if (uVar9 < 2) {
        aiStackX_18[0] = 0;
        piStack_f0 = piVar11;
        FUN_1800571e0(&piStack_f8,aiStackX_18);
        aiStackX_18[0] = *(ushort *)(param_2 + 2) - 1;
        FUN_1800571e0(&piStack_f8,aiStackX_18);
        piVar11 = piStack_f8;
      }
      FUN_180499350(param_2,&piStack_f8);
    }
    if (piVar11 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(piVar11);
    }
  }
  return;
}





// 函数: void FUN_180498330(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
void FUN_180498330(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  double param_11,double param_12,double param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = (uint)((uint64_t)param_10 >> 0x20);
  uVar7 = (uint)((uint64_t)param_11 >> 0x20);
  uVar8 = (uint)((uint64_t)param_12 >> 0x20);
  uVar9 = (uint)((uint64_t)param_9 >> 0x20);
  dVar5 = param_5 * param_9 + param_6 * param_10 + param_7 * param_11 + param_8 * param_12;
  if (dVar5 < 0.0) {
    uVar6 = uVar6 ^ 0x80000000;
    uVar7 = uVar7 ^ 0x80000000;
    uVar8 = uVar8 ^ 0x80000000;
    uVar9 = uVar9 ^ 0x80000000;
  }
  if (1.0 <= ABS(dVar5)) {
    dVar5 = 1.0 - param_13;
  }
  else {
    dVar3 = (double)acos(ABS(dVar5));
    dVar4 = (double)sin();
    dVar5 = (double)sin(dVar3 - dVar3 * param_13);
    dVar5 = dVar5 * (1.0 / dVar4);
    param_13 = (double)sin(dVar3 * param_13);
    param_13 = param_13 * (1.0 / dVar4);
  }
  dVar3 = (double)CONCAT44(uVar6,SUB84(param_10,0)) * param_13 + dVar5 * param_6;
  dVar4 = (double)CONCAT44(uVar7,SUB84(param_11,0)) * param_13 + dVar5 * param_7;
  dVar1 = (double)CONCAT44(uVar8,SUB84(param_12,0)) * param_13 + dVar5 * param_8;
  dVar5 = (double)CONCAT44(uVar9,SUB84(param_9,0)) * param_13 + dVar5 * param_5;
  dVar2 = 1.0 / SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
  *param_1 = dVar2 * dVar5;
  *param_4 = dVar2 * dVar1;
  *param_2 = dVar2 * dVar3;
  *param_3 = dVar2 * dVar4;
  return;
}





// 函数: void FUN_180498415(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180498415(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  double *unaff_RBX;
  double *unaff_RBP;
  double *unaff_RSI;
  double *unaff_RDI;
  double dVar1;
  double dVar2;
  double dVar3;
  double unaff_XMM9_Qa;
  double unaff_XMM10_Qa;
  double dVar4;
  double unaff_XMM11_Qa;
  double dVar5;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  double in_stack_000000d0;
  double in_stack_000000d8;
  double in_stack_000000e0;
  double in_stack_000000e8;
  double in_stack_00000110;
  
  dVar1 = (double)acos(param_3);
  dVar2 = (double)sin();
  dVar3 = (double)sin(dVar1 - dVar1 * in_stack_00000110);
  dVar3 = dVar3 * (unaff_XMM13_Qa / dVar2);
  dVar1 = (double)sin(dVar1 * in_stack_00000110);
  dVar1 = dVar1 * (unaff_XMM13_Qa / dVar2);
  dVar2 = unaff_XMM9_Qa * dVar1 + dVar3 * in_stack_000000d8;
  dVar4 = unaff_XMM10_Qa * dVar1 + dVar3 * in_stack_000000e0;
  dVar5 = unaff_XMM11_Qa * dVar1 + dVar3 * in_stack_000000e8;
  dVar1 = unaff_XMM12_Qa * dVar1 + dVar3 * in_stack_000000d0;
  dVar3 = unaff_XMM13_Qa / SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5);
  *unaff_RBP = dVar3 * dVar1;
  *unaff_RBX = dVar3 * dVar5;
  *unaff_RSI = dVar3 * dVar2;
  *unaff_RDI = dVar3 * dVar4;
  return;
}





// 函数: void FUN_18049847d(void)
void FUN_18049847d(void)

{
  double *unaff_RBX;
  double *unaff_RBP;
  double *unaff_RSI;
  double *unaff_RDI;
  double dVar1;
  double unaff_XMM9_Qa;
  double dVar2;
  double unaff_XMM10_Qa;
  double dVar3;
  double unaff_XMM11_Qa;
  double dVar4;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  double dVar5;
  double in_stack_000000d0;
  double in_stack_000000d8;
  double in_stack_000000e0;
  double in_stack_000000e8;
  double in_stack_00000110;
  
  dVar1 = unaff_XMM13_Qa - in_stack_00000110;
  dVar2 = unaff_XMM9_Qa * in_stack_00000110 + dVar1 * in_stack_000000d8;
  dVar3 = unaff_XMM10_Qa * in_stack_00000110 + dVar1 * in_stack_000000e0;
  dVar4 = unaff_XMM11_Qa * in_stack_00000110 + dVar1 * in_stack_000000e8;
  dVar1 = unaff_XMM12_Qa * in_stack_00000110 + dVar1 * in_stack_000000d0;
  dVar5 = unaff_XMM13_Qa / SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
  *unaff_RBP = dVar5 * dVar1;
  *unaff_RBX = dVar5 * dVar4;
  *unaff_RSI = dVar5 * dVar2;
  *unaff_RDI = dVar5 * dVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




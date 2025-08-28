#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part032.c - 3 个函数

// 函数: void FUN_180076a80(int64_t param_1)
void FUN_180076a80(int64_t param_1)

{
  char *pcVar1;
  int64_t *plVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = _Mtx_lock(0x180c91910);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  pcVar1 = (char *)(param_1 + 0xfc);
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    while( true ) {
      LOCK();
      bVar4 = *(char *)(param_1 + 0xec) == '\0';
      if (bVar4) {
        *(char *)(param_1 + 0xec) = '\x01';
      }
      UNLOCK();
      if (bVar4) break;
      Sleep();
    }
    while (*(int *)(param_1 + 0xe8) != 0) {
      Sleep(0);
    }
    if ((((*(int64_t *)(param_1 + 0x210) != 0) &&
         (FUN_1800791a0(param_1), *(char *)(param_1 + 0xfc) == '\0')) &&
        (*(char *)(param_1 + 0xf4) == '\0')) &&
       (((*(byte *)(param_1 + 0xfd) & 0x20) == 0 || ((*(byte *)(param_1 + 0xfe) & 1) == 0)))) {
      plVar2 = *(int64_t **)(param_1 + 0x210);
      *(uint64_t *)(param_1 + 0x210) = 0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    LOCK();
    if (*(char *)(param_1 + 0xec) == '\x01') {
      *(char *)(param_1 + 0xec) = '\0';
    }
    UNLOCK();
  }
  iVar3 = _Mtx_unlock(0x180c91910);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



uint64_t FUN_180076b90(int64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0xfd);
  lVar2 = param_1;
  if ((bVar3 & 0x20) == 0) {
    lVar2 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  if (0 < *(int *)(lVar2 + 0x200)) {
    lVar2 = *(int64_t *)(param_1 + 0x1b8);
    bVar1 = *(byte *)(lVar2 + 0x38c);
    if (bVar1 == 9) {
      bVar1 = func_0x00018022d300();
      *(byte *)(lVar2 + 0x38c) = bVar1;
      bVar3 = *(byte *)(param_1 + 0xfd);
    }
    if ((bVar3 & 0x20) == 0) {
      param_1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
    }
    if ((*(int64_t *)(param_1 + 0x1e0) == 0) ||
       (*(byte *)(*(int64_t *)(param_1 + 0x1e0) + 0x15 + (uint64_t)bVar1 * 0x18) < 2)) {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180076c50(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint uVar13;
  uint64_t uVar14;
  int32_t extraout_XMM0_Da;
  int32_t uVar15;
  uint64_t uStackX_8;
  uint64_t *puStackX_10;
  uint64_t *puStackX_18;
  uint in_stack_ffffffffffffff38;
  uint64_t uVar16;
  uint64_t *puStack_80;
  int64_t *plStack_78;
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  uVar16 = 0xfffffffffffffffe;
  iVar5 = 0;
  if (((*(int64_t *)(param_1 + 0x1b8) != 0) && (iVar5 = 0, (*(byte *)(param_2 + 1) & 4) == 0)) &&
     (*(char *)((int64_t)param_2 + 0x12) == '\0')) {
    iVar5 = FUN_18022d470();
  }
  if ((*(byte *)(param_2 + 1) & 0x20) == 0) {
    cVar4 = FUN_180076b90(param_1);
    if (cVar4 == '\0') {
      if ((char)param_2[2] != '\0') {
        puStack_80 = (uint64_t *)0x0;
        plStack_78 = (int64_t *)0x0;
        pcStack_70 = (code *)0x0;
        pcStack_68 = _guard_check_icall;
        FUN_1800b6f90(extraout_XMM0_Da,param_1,&puStack_80);
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(&puStack_80,0,0);
        }
      }
      cVar4 = FUN_180076b90(param_1);
      if (cVar4 == '\0') {
        iVar5 = iVar5 + 1;
        if (*param_2 != 0) {
          uStackX_8 = param_1;
          SystemInitializer(*param_2,&uStackX_8);
        }
      }
    }
    else if ((char)param_2[2] != '\0') {
      FUN_18007b1e0(param_1,0);
    }
  }
  if ((*(byte *)(param_2 + 1) & 0x10) == 0) {
    return iVar5;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 3;
  puStackX_10 = *(uint64_t **)(param_1 + 0x1b8);
  uVar13 = *(uint *)(param_1 + 0x100) >> 0x16;
  pcVar8 = "";
  if ((char *)puStackX_10[3] != (char *)0x0) {
    pcVar8 = (char *)puStackX_10[3];
  }
  uVar6 = 0x1505;
  cVar4 = *pcVar8;
  while (cVar4 != '\0') {
    pcVar8 = pcVar8 + 1;
    uVar6 = uVar6 * 0x21 + (int)cVar4;
    cVar4 = *pcVar8;
  }
  uVar11 = (uint64_t)uVar6;
  if ((uVar13 & 1) != 0) {
    uVar11 = (uint64_t)uVar6 | 0x400000000;
  }
  lVar9 = param_2[9];
  if (lVar9 != 0) {
    plVar1 = (int64_t *)(*(int64_t *)(lVar9 + 8) + *(uint64_t *)(lVar9 + 0x10) * 8);
    puVar12 = (uint64_t *)*plVar1;
    plVar2 = (int64_t *)
             (*(int64_t *)(lVar9 + 8) + (uVar11 % (*(uint64_t *)(lVar9 + 0x10) & 0xffffffff)) * 8)
    ;
    for (puVar3 = (uint64_t *)*plVar2;
        (puStack_80 = puVar12, plStack_78 = plVar1, puVar3 != (uint64_t *)0x0 &&
        (puStack_80 = puVar3, plStack_78 = plVar2, uVar11 != *puVar3));
        puVar3 = (uint64_t *)puVar3[1]) {
    }
    if (puStack_80 != puVar12) goto LAB_180076feb;
  }
  plVar1 = param_2 + 5;
  lVar9 = param_2[7] - *plVar1;
  if ((uint64_t)(lVar9 / 0x18) < 0x100) {
    lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1800,(char)param_2[8]);
    lVar9 = *plVar1;
    if (lVar9 != param_2[6]) {
                    // WARNING: Subroutine does not return
      memmove(lVar7,lVar9,param_2[6] - lVar9);
    }
    if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar1 = lVar7;
    param_2[6] = lVar7;
    param_2[7] = lVar7 + 0x1800;
    lVar9 = 0;
  }
  puStackX_18 = &uStackX_8;
  uStackX_8 = 0;
  uVar15 = FUN_1801cdb50(lVar9,puStackX_10,&uStack_60,0,in_stack_ffffffffffffff38 & 0xffffff00,0,
                         (byte)uVar13 & 1,plVar1,1,0,0,&uStackX_8,uVar16);
  puStackX_10 = &uStackX_8;
  uStackX_8 = 0;
  cVar4 = FUN_1801de280(uVar15,plVar1,&uStackX_8);
  if (cVar4 == '\0') {
    iVar5 = iVar5 + 1;
  }
  param_2[6] = *plVar1;
  lVar9 = param_2[9];
  uVar14 = uVar11 % (uint64_t)*(uint *)(lVar9 + 0x10);
  for (puVar12 = *(uint64_t **)(*(int64_t *)(lVar9 + 8) + uVar14 * 8); puVar12 != (uint64_t *)0x0
      ; puVar12 = (uint64_t *)puVar12[1]) {
    if (uVar11 == *puVar12) goto LAB_180076feb;
  }
  plVar1 = *(int64_t **)(lVar9 + 0x30);
  uVar10 = (int64_t)(int)plVar1[2] + 0xfU & 0xfffffffffffffff0;
  *(int *)(plVar1 + 2) = (int)uVar10 + 0x10;
  puVar12 = (uint64_t *)(*plVar1 + uVar10);
  *puVar12 = uVar11;
  puVar12[1] = 0;
  FUN_18066c220(lVar9 + 0x20,&uStackX_8,*(int32_t *)(lVar9 + 0x10),*(int32_t *)(lVar9 + 0x18),
                1);
  if ((char)uStackX_8 != '\0') {
    uVar14 = uVar11 % (uint64_t)uStackX_8._4_4_;
    FUN_180083b20(lVar9,uStackX_8._4_4_);
  }
  puVar12[1] = *(uint64_t *)(*(int64_t *)(lVar9 + 8) + uVar14 * 8);
  *(uint64_t **)(*(int64_t *)(lVar9 + 8) + uVar14 * 8) = puVar12;
  *(int64_t *)(lVar9 + 0x18) = *(int64_t *)(lVar9 + 0x18) + 1;
LAB_180076feb:
  FUN_180080df0(&uStack_60);
  return iVar5;
}





// 函数: void FUN_180077020(int64_t *param_1)
void FUN_180077020(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180077040(int64_t param_1)

{
  int *piVar1;
  byte bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  if (*(int64_t *)(param_1 + 0x1b8) != 0) {
    lVar6 = 0xb8;
    lVar5 = system_main_module_state;
    do {
      lVar3 = *(int64_t *)(lVar6 + *(int64_t *)(param_1 + 0x1b8));
      if ((((lVar3 != 0) && (*(int64_t *)(*(int64_t *)(param_1 + 0x1b8) + 0x328 + lVar6) == 0)) &&
          ((*(uint *)(lVar3 + 0x328) & 0x20000000) == 0)) && (*(int64_t *)(lVar3 + 0x370) == 0)) {
        if (*(int64_t *)(lVar3 + 0x1d8) == 0) {
          FUN_18023b050(lVar3,0);
          lVar5 = system_main_module_state;
          piVar1 = (int *)(*(int64_t *)(lVar6 + *(int64_t *)(param_1 + 0x1b8)) + 0x3a8);
          *piVar1 = *piVar1 + 1;
        }
        else if (lVar5 != 0) {
          *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(lVar5 + 0x224);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 < 0x138);
  }
  bVar2 = *(byte *)(param_1 + 0xf9);
  if (bVar2 != 0) {
    if (*(int64_t *)(param_1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 0x1d8) = 0;
    LOCK();
    bVar2 = *(byte *)(param_1 + 0xf9);
    *(byte *)(param_1 + 0xf9) = 0;
    UNLOCK();
  }
  uVar4 = (uint64_t)bVar2;
  if (*(int64_t *)(param_1 + 0x1e8) != 0) {
    FUN_180080060();
    uVar4 = *(uint64_t *)(param_1 + 0x1f0);
    *(uint64_t *)(param_1 + 0x1e8) = 0;
    if (uVar4 != 0) {
      *(byte *)(uVar4 + 0xfe) = *(byte *)(uVar4 + 0xfe) & 0xfb;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180077150(int64_t *param_1)
void FUN_180077150(int64_t *param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  byte bVar6;
  int8_t auStack_88 [32];
  uint64_t *puStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  uint64_t auStack_40 [2];
  uint64_t uStack_30;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  uint64_t uStack_20;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  uVar1 = *(uint64_t *)(param_1[0x37] + 0x1e0);
  puStack_58 = &unknown_var_672_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = auStack_40[0] & 0xffffffffffffff00;
  uStack_48._0_4_ = 0x12;
  strcpy_s(auStack_40,0x20,&unknown_var_5320_ptr);
  uVar3 = FUN_180240430(uVar1,&puStack_58,0);
  puStack_58 = &system_state_ptr;
  if (uVar3 != 0) {
    lVar5 = param_1[0x37];
    if ((*(uint64_t *)(lVar5 + 0x140) & uVar3) != 0) {
      bVar6 = *(byte *)((int64_t)param_1 + 0xfd) & 0x20;
      plVar4 = param_1;
      if (bVar6 == 0) {
        plVar4 = (int64_t *)func_0x000180085de0(param_1[0x36]);
      }
      if (((*(uint *)(plVar4 + 0x20) & 0x8000000) == 0) && (bVar6 != 0)) {
        puStack_68 = (uint64_t *)param_1;
        (**(code **)(*param_1 + 0x28))(param_1);
        puStack_58 = (void *)0x0;
        puStack_50 = (uint64_t *)0x0;
        puStack_68 = &uStack_48;
        uStack_30 = 0;
        auStack_40[0] = 0;
        uStack_48._0_4_ = (uint)uStack_48 & 0xffffff00;
        FUN_18022f2e0(&puStack_58,param_1,0);
        (**(code **)(*param_1 + 0x38))(param_1);
        FUN_180237d00(&puStack_58);
        FUN_18022f390(&puStack_58);
        FUN_18022f410(&puStack_58);
        lVar5 = param_1[0x37];
      }
      if ((*(uint64_t *)(lVar5 + 0x140) & uVar3) != 0) goto LAB_18007738d;
    }
    plVar4 = param_1;
    if ((*(byte *)((int64_t)param_1 + 0xfd) & 0x20) == 0) {
      plVar4 = (int64_t *)func_0x000180085de0(param_1[0x36]);
    }
    if ((*(uint *)(plVar4 + 0x20) & 0x8000000) != 0) {
      puStack_68 = (uint64_t *)param_1;
      (**(code **)(*param_1 + 0x28))(param_1);
      puStack_58 = (void *)0x0;
      puStack_50 = (uint64_t *)0x0;
      puStack_68 = &uStack_48;
      uStack_30 = 0;
      auStack_40[0] = 0;
      uStack_48._0_4_ = (uint)uStack_48 & 0xffffff00;
      FUN_18022f2e0(&puStack_58,param_1,0);
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_180238950(&puStack_58);
      if (puStack_50 != (uint64_t *)0x0) {
        if (cStack_26 != '\0') {
          FUN_180075b70(puStack_58);
        }
        FUN_18007f6a0(&uStack_48);
        if (cStack_28 != '\0') {
          FUN_180079520(puStack_58);
        }
        if (cStack_27 != '\0') {
          FUN_180079520(puStack_58);
        }
        puVar2 = puStack_50;
        puStack_68 = puStack_50;
        puStack_50 = (uint64_t *)0x0;
        if (puVar2 != (uint64_t *)0x0) {
          (**(code **)(*puVar2 + 0x38))();
        }
      }
      FUN_18022f410(&puStack_58);
    }
  }
LAB_18007738d:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180077420(int64_t param_1,int64_t param_2)

{
  uint *puVar1;
  int64_t *plVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  code *pcVar15;
  bool bVar16;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  int16_t uStack_68;
  int8_t uStack_66;
  int32_t uStack_64;
  int8_t uStack_60;
  uint64_t uStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  lVar13 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar13 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  lVar12 = *(int64_t *)(param_1 + 0x1b8);
  bVar6 = *(byte *)(lVar12 + 0x38c);
  if (bVar6 == 9) {
    bVar6 = func_0x00018022d300();
    *(byte *)(lVar12 + 0x38c) = bVar6;
  }
  if ((*(int64_t *)(lVar13 + 0x1e0) == 0) ||
     (((lVar12 = (uint64_t)bVar6 * 0x18,
       *(char *)(*(int64_t *)(lVar13 + 0x1e0) + 0x15 + lVar12) != '\x03' &&
       (*(char *)(*(int64_t *)(lVar13 + 0x1e0) + 0x15 + lVar12) != '\x04')) &&
      (*(char *)(*(int64_t *)(lVar13 + 0x1e0) + lVar12 + 0x15) != '\x02')))) {
    *(int *)(param_2 + 0x124e8) = *(int *)(param_2 + 0x124e8) + 1;
  }
  else if (*(char *)(*(int64_t *)(lVar13 + 0x1e0) + lVar12 + 0x15) != '\x04') {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0xffffffff;
    uStack_68 = 1;
    uStack_66 = 0;
    uStack_64 = 0xffffffff;
    uStack_60 = 1;
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 3;
    uStack_30 = 0;
    iVar8 = FUN_18022d470(*(uint64_t *)(param_1 + 0x1b8),&uStack_78);
    if (iVar8 < 1) {
      if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      bVar5 = false;
      if ((*(byte *)(param_1 + 0xfd) & 8) != 0) {
        lVar13 = 0xb8;
        pcVar15 = (code *)&unknown_var_128_ptr;
        do {
          lVar12 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x1b8));
          if (((lVar12 != 0) && (lVar11 = *(int64_t *)(lVar12 + 0x370), lVar11 != 0)) &&
             ((cVar7 = func_0x0001802434e0(), cVar7 != '\0' &&
              ((*(char *)(lVar11 + 0xde) != '\0' &&
               (bVar5 = true, (*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)))))) {
            pcVar4 = *(code **)(**(int64_t **)(param_2 + 0x3580) + 0xb8);
            if (pcVar4 == pcVar15) {
              lVar11 = (*(int64_t **)(param_2 + 0x3580))[0xda];
            }
            else {
              lVar11 = (*pcVar4)();
            }
            puVar1 = (uint *)(lVar11 + 0x3f68);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 + 1;
            UNLOCK();
            uVar9 = uVar3 >> 10;
            uVar14 = (uint64_t)uVar9;
            if (*(int64_t *)(lVar11 + 0x3f70 + (uint64_t)uVar9 * 8) == 0) {
              lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,0x25);
              plVar2 = (int64_t *)(lVar11 + 0x3f70 + uVar14 * 8);
              LOCK();
              bVar16 = *plVar2 == 0;
              if (bVar16) {
                *plVar2 = lVar10;
              }
              UNLOCK();
              if (bVar16) {
                LOCK();
                *(int8_t *)(uVar14 + 0x48 + (int64_t)puVar1) = 0;
                UNLOCK();
              }
              else {
                if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                do {
                } while (*(char *)(uVar14 + 0x48 + (int64_t)puVar1) != '\0');
              }
            }
            else {
              do {
              } while (*(char *)(uVar14 + 0x48 + (int64_t)puVar1) != '\0');
            }
            *(int64_t *)
             (*(int64_t *)(lVar11 + 0x3f70 + uVar14 * 8) + (uint64_t)(uVar3 + uVar9 * -0x400) * 8)
                 = lVar12;
            pcVar15 = (code *)&unknown_var_128_ptr;
          }
          lVar13 = lVar13 + 8;
        } while (lVar13 < 0x138);
        if (bVar5) {
          return 0;
        }
      }
      *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) | 4;
      return 1;
    }
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return 0;
}






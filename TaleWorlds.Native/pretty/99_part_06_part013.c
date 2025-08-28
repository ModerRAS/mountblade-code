#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part013.c - 15 个函数

// 函数: void FUN_1803b0350(int64_t param_1)
void FUN_1803b0350(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  
  uVar3 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x100);
  uVar7 = uVar3;
  if (*(int64_t *)(param_1 + 0x108) - lVar5 >> 3 != 0) {
    do {
      if (*(int64_t *)(uVar3 + lVar5) != 0) {
        FUN_18023b050(*(int64_t *)(uVar3 + lVar5),0);
      }
      uVar6 = (int)uVar7 + 1;
      uVar3 = uVar3 + 8;
      lVar5 = *(int64_t *)(param_1 + 0x100);
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0x108) - lVar5 >> 3));
  }
  FUN_1800b8500(param_1 + 0x100);
  plVar4 = (int64_t *)(param_1 + 0x138);
  lVar5 = 3;
  do {
    plVar1 = (int64_t *)plVar4[-3];
    plVar4[-3] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = (int64_t *)*plVar4;
    *plVar4 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar4 = plVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar4 = *(int64_t **)(param_1 + 0x160);
  *(uint64_t *)(param_1 + 0x160) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(int64_t **)(param_1 + 0x168);
  *(uint64_t *)(param_1 + 0x168) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(int64_t **)(param_1 + 0x1c8);
  *(uint64_t *)(param_1 + 0x1c8) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(int64_t **)(param_1 + 0x1d0);
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(int64_t **)(param_1 + 0x1d8);
  *(uint64_t *)(param_1 + 0x1d8) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(int64_t **)(param_1 + 0x1e0);
  *(uint64_t *)(param_1 + 0x1e0) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x40);
  lVar5 = *plVar1;
  plVar4 = plVar1;
  if (lVar5 == 0) {
    plVar4 = plVar1 + 1;
    lVar5 = *plVar4;
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  if (lVar5 != plVar1[*(int64_t *)(param_1 + 0x48)]) {
    do {
      lVar2 = *(int64_t *)(lVar5 + 8);
      plVar1 = *(int64_t **)(lVar2 + 0x1c0);
      *(uint64_t *)(lVar2 + 0x1c0) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar1 = *(int64_t **)(lVar2 + 0x138);
      *(uint64_t *)(lVar2 + 0x138) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      lVar5 = *(int64_t *)(lVar5 + 0x10);
      while (lVar5 == 0) {
        plVar4 = plVar4 + 1;
        lVar5 = *plVar4;
      }
    } while (lVar5 != *(int64_t *)
                       (*(int64_t *)(param_1 + 0x40) + *(int64_t *)(param_1 + 0x48) * 8));
  }
  FUN_1800ed380(param_1 + 0x188);
  LOCK();
  *(int32_t *)(param_1 + 0x10) = 0;
  UNLOCK();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b05f0(int64_t *param_1,int8_t param_2)
void FUN_1803b05f0(int64_t *param_1,int8_t param_2)

{
  uint64_t uVar1;
  int64_t ***ppplVar2;
  int64_t ***ppplVar3;
  int64_t **pplStackX_8;
  int8_t auStackX_10 [8];
  int64_t ***ppplStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar4;
  int32_t uStack_78;
  int32_t uStack_74;
  int64_t *aplStack_68 [2];
  void *puStack_58;
  code *pcStack_50;
  uint64_t uStack_48;
  int8_t *puStack_40;
  void *puStack_38;
  code *pcStack_30;
  
  uVar4 = 0xfffffffffffffffe;
  auStackX_10[0] = param_2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
  pplStackX_8 = aplStack_68;
  puStack_58 = &unknown_var_9104_ptr;
  pcStack_50 = FUN_1803ba220;
  aplStack_68[0] = param_1;
  ppplVar2 = (int64_t ***)FUN_18006b640(uVar1,aplStack_68);
  pplStackX_20 = (int64_t **)ppplVar2;
  if (ppplVar2 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar2)[5])(ppplVar2);
  }
  ppplVar2[3] = (int64_t **)0xfffffffffffffffd;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,uVar4);
  pplStackX_8 = (int64_t **)&uStack_48;
  puStack_38 = &unknown_var_9008_ptr;
  pcStack_30 = FUN_1803ba1b0;
  uStack_78 = SUB84(param_1,0);
  uStack_74 = (int32_t)((uint64_t)param_1 >> 0x20);
  uStack_48._0_4_ = uStack_78;
  uStack_48._4_4_ = uStack_74;
  puStack_40 = auStackX_10;
  ppplVar3 = (int64_t ***)FUN_18006b640(uVar1,&uStack_48);
  if (ppplVar3 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar3)[5])(ppplVar3);
  }
  ppplVar3[3] = (int64_t **)0xfffffffffffffffd;
  uVar1 = system_context_ptr;
  ppplStackX_18 = &pplStackX_8;
  pplStackX_8 = (int64_t **)ppplVar3;
  (*(code *)(*ppplVar3)[5])(ppplVar3);
  FUN_18005e110(uVar1,&pplStackX_8);
  uVar1 = system_context_ptr;
  ppplStackX_18 = ppplVar3;
  (*(code *)(*ppplVar3)[5])(ppplVar3);
  FUN_18005e6a0(uVar1,&ppplStackX_18,0);
  uVar1 = system_context_ptr;
  pplStackX_8 = (int64_t **)ppplVar2;
  (*(code *)(*ppplVar2)[5])(ppplVar2);
  FUN_18005e110(uVar1,&pplStackX_8);
  uVar1 = system_context_ptr;
  ppplStackX_18 = ppplVar2;
  (*(code *)(*ppplVar2)[5])(ppplVar2);
  FUN_18005e6a0(uVar1,&ppplStackX_18,0);
  (*(code *)(*ppplVar3)[7])(ppplVar3);
  (*(code *)(*ppplVar2)[7])(ppplVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b07c0(int64_t param_1)
void FUN_1803b07c0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  
  FUN_18005e630(system_context_ptr);
  plVar1 = *(int64_t **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar5 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar5 = plVar5 + 1, lVar4 == 0) {
      lVar4 = plVar5[1];
    }
  }
  lVar2 = plVar1[*(int64_t *)(param_1 + 0x48)];
  while( true ) {
    if (lVar4 == lVar2) {
      return;
    }
    lVar3 = *(int64_t *)(lVar4 + 8);
    if (*(int64_t *)(lVar3 + 0x870) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar3 + 0x870) = 0;
    if (*(int64_t *)(lVar3 + 0x878) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar1 = *(int64_t **)(lVar3 + 0x810);
    *(uint64_t *)(lVar3 + 0x878) = 0;
    if (plVar1 != (int64_t *)0x0) break;
    plVar1 = *(int64_t **)(lVar3 + 0x818);
    if (plVar1 != (int64_t *)0x0) {
      if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
        if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int8_t *)(plVar1 + 2) = 0;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar1);
    }
    lVar6 = 0x710;
    do {
      plVar1 = *(int64_t **)(lVar6 + lVar3);
      if (plVar1 != (int64_t *)0x0) {
        if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
          if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int8_t *)(plVar1 + 2) = 0;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar1);
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 < 0x790);
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar5 + 1;
      plVar5 = plVar5 + 1;
      lVar4 = *plVar1;
    }
  }
  if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
    if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int8_t *)(plVar1 + 2) = 0;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar1);
}






// 函数: void FUN_1803b081e(void)
void FUN_1803b081e(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_R15;
  
  while( true ) {
    lVar2 = *(int64_t *)(unaff_RBP + 8);
    if (*(int64_t *)(lVar2 + 0x870) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x870) = 0;
    if (*(int64_t *)(lVar2 + 0x878) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar1 = *(int64_t **)(lVar2 + 0x810);
    *(uint64_t *)(lVar2 + 0x878) = 0;
    if (plVar1 != (int64_t *)0x0) {
      if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
        if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int8_t *)(plVar1 + 2) = 0;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar1);
    }
    plVar1 = *(int64_t **)(lVar2 + 0x818);
    if (plVar1 != (int64_t *)0x0) break;
    lVar3 = 0x710;
    do {
      plVar1 = *(int64_t **)(lVar3 + lVar2);
      if (plVar1 != (int64_t *)0x0) {
        if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
          if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int8_t *)(plVar1 + 2) = 0;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 < 0x790);
    unaff_RBP = *(int64_t *)(unaff_RBP + 0x10);
    while (unaff_RBP == 0) {
      plVar1 = (int64_t *)(unaff_RSI + 8);
      unaff_RSI = unaff_RSI + 8;
      unaff_RBP = *plVar1;
    }
    if (unaff_RBP == unaff_R15) {
      return;
    }
  }
  if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
    if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int8_t *)(plVar1 + 2) = 0;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar1);
}






// 函数: void FUN_1803b0968(void)
void FUN_1803b0968(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b0a70(int64_t param_1,int64_t param_2,int param_3,int param_4,float *param_5)
void FUN_1803b0a70(int64_t param_1,int64_t param_2,int param_3,int param_4,float *param_5)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_5;
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar7 = (float)param_3 * fVar3;
  fVar5 = (float)param_4 * fVar3;
  if ((fVar6 < fVar7) || (fVar7 + fVar3 < fVar6)) {
    fVar4 = ABS((fVar7 + fVar3) - fVar6);
    if (ABS(fVar7 - fVar6) <= fVar4) {
      fVar4 = ABS(fVar7 - fVar6);
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar6 = param_5[1];
  if ((fVar6 < fVar5) || (fVar5 + fVar3 < fVar6)) {
    fVar3 = ABS((fVar5 + fVar3) - fVar6);
    if (ABS(fVar5 - fVar6) <= fVar3) {
      fVar3 = ABS(fVar5 - fVar6);
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar5 = param_5[2] - *(float *)(param_2 + 0x7c);
  fVar6 = *(float *)(param_2 + 0x74) + 1.0;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (1.0 <= fVar6) {
    if (2.0 <= fVar6) {
      fVar6 = 2.0;
    }
  }
  else {
    fVar6 = 1.0;
  }
  lVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x1bf0);
  do {
    fVar7 = *pfVar2;
    if (*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20) <= lVar1) {
      fVar7 = fVar7 * 1.1;
    }
    if (((0.75 / fVar6 + 0.25) * (fVar5 * 0.5 + fVar3 + fVar4)) /
        ((*(float *)(*(int64_t *)(param_1 + 0x68) + 0x5ba4) + 1.0) * 0.5) < fVar7) break;
    lVar1 = lVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (lVar1 < 8);
  if (*(int *)(SYSTEM_STATE_MANAGER + 0xe70) == 0) {
    logf();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b0ce0(int64_t *param_1,uint64_t param_2,char param_3)
void FUN_1803b0ce0(int64_t *param_1,uint64_t param_2,char param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int64_t *plVar11;
  int iVar12;
  char cVar13;
  float fVar14;
  int8_t auStack_d78 [32];
  int8_t *puStack_d58;
  float afStack_d48 [256];
  int64_t alStack_948 [256];
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d78;
  if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) != 3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar11 = (int64_t *)param_1[8];
  cVar13 = '\x01';
  if (!bVar3) {
    cVar13 = param_3;
  }
  lVar5 = *plVar11;
  if (*(int *)(system_system_data_memory + 0x7e0) != 0) {
    cVar13 = '\x01';
  }
  uVar7 = 0;
  iVar12 = 0;
  plVar4 = plVar11;
  if (lVar5 == 0) {
    lVar5 = plVar11[1];
    while (plVar4 = plVar4 + 1, lVar5 == 0) {
      lVar5 = plVar4[1];
    }
  }
  lVar2 = plVar11[param_1[9]];
  if (lVar5 != lVar2) {
    plVar11 = alStack_948;
    uVar8 = uVar7;
    do {
      if (*(int64_t *)(lVar5 + 8) != 0) {
        uVar8 = (uint64_t)((int)uVar8 + 1);
        *plVar11 = *(int64_t *)(lVar5 + 8);
        plVar11 = plVar11 + 1;
      }
      iVar12 = (int)uVar8;
      lVar5 = *(int64_t *)(lVar5 + 0x10);
      while (lVar5 == 0) {
        plVar1 = plVar4 + 1;
        plVar4 = plVar4 + 1;
        lVar5 = *plVar1;
      }
    } while (lVar5 != lVar2);
  }
  uVar8 = uVar7;
  if (0 < iVar12) {
    do {
      lVar5 = alStack_948[uVar8];
      iVar6 = *(int *)(lVar5 + 0x1c) * 0x10 + *(int *)(lVar5 + 0x18);
      if (cVar13 == '\0') {
        puStack_d58 = (int8_t *)param_2;
        fVar14 = (float)(**(code **)(*param_1 + 0x70))(param_1,lVar5);
        auStack_148[iVar6] = (char)(int)fVar14;
      }
      else {
        iVar10 = *(int *)(lVar5 + 0x20);
        iVar9 = (int)(float)*(int *)(lVar5 + 0x28);
        if (iVar10 != iVar9) {
          *(int *)(lVar5 + 0x20) = iVar9;
          *(float *)(lVar5 + 0x388) = (float)(uint)(1 << ((byte)iVar9 & 0x1f));
          *(float *)(lVar5 + 0x3a0) =
               (float)(1 << (10 - (byte)iVar9 & 0x1f)) *
               *(float *)(*(int64_t *)(lVar5 + 0x10) + 0x28);
          iVar10 = iVar9;
        }
        auStack_148[iVar6] = (char)iVar10;
        fVar14 = (float)*(int *)(lVar5 + 0x20);
      }
      uVar8 = uVar8 + 1;
      afStack_d48[iVar6] = fVar14;
    } while ((int64_t)uVar8 < (int64_t)iVar12);
    do {
      puStack_d58 = auStack_148;
      iVar6 = *(int *)(alStack_948[uVar7] + 0x18);
      iVar10 = *(int *)(alStack_948[uVar7] + 0x1c);
      FUN_1803b15d0(param_1,iVar6,iVar10,afStack_d48[iVar10 * 0x10 + iVar6]);
      uVar7 = uVar7 + 1;
    } while ((int64_t)uVar7 < (int64_t)iVar12);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d78);
}






// 函数: void FUN_1803b0dfe(void)
void FUN_1803b0dfe(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int unaff_R13D;
  int64_t *unaff_R14;
  char unaff_R15B;
  float fVar6;
  uint64_t in_stack_00000d30;
  
  lVar3 = unaff_RSI;
  do {
    lVar1 = *(int64_t *)(&stack0x00000430 + lVar3 * 8);
    iVar2 = *(int *)(lVar1 + 0x1c) * 0x10 + *(int *)(lVar1 + 0x18);
    if (unaff_R15B == '\0') {
      fVar6 = (float)(**(code **)(*unaff_R14 + 0x70))();
      (&stack0x00000c30)[iVar2] = (char)(int)fVar6;
    }
    else {
      iVar5 = *(int *)(lVar1 + 0x20);
      iVar4 = (int)(float)*(int *)(lVar1 + 0x28);
      if (iVar5 != iVar4) {
        *(int *)(lVar1 + 0x20) = iVar4;
        *(float *)(lVar1 + 0x388) = (float)(uint)(unaff_R13D << ((byte)iVar4 & 0x1f));
        *(float *)(lVar1 + 0x3a0) =
             (float)(unaff_R13D << (10 - (byte)iVar4 & 0x1f)) *
             *(float *)(*(int64_t *)(lVar1 + 0x10) + 0x28);
        iVar5 = iVar4;
      }
      (&stack0x00000c30)[iVar2] = (char)iVar5;
      fVar6 = (float)*(int *)(lVar1 + 0x20);
    }
    lVar3 = lVar3 + 1;
    *(float *)(&stack0x00000030 + (int64_t)iVar2 * 4) = fVar6;
  } while (lVar3 < unaff_RBP);
  do {
    FUN_1803b15d0();
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_RBP);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000d30 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1803b0ef0(void)
void FUN_1803b0ef0(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t in_stack_00000d30;
  
  do {
    FUN_1803b15d0();
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_RBP);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000d30 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b0f50(int64_t *param_1)
void FUN_1803b0f50(int64_t *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  void *puVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t extraout_XMM0_Da;
  int32_t uVar14;
  int8_t auStack_178 [32];
  void *puStack_158;
  void *puStack_150;
  uint uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int16_t uStack_120;
  int8_t uStack_11e;
  void *puStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  int64_t lStack_f0;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_d0;
  int8_t *puStack_c8;
  int32_t uStack_c0;
  int8_t auStack_b8 [16];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [16];
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [16];
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [16];
  uint64_t uStack_30;
  
  uStack_30 = 0x1803b0f63;
  (**(code **)(*param_1 + 0x78))();
  plVar2 = (int64_t *)param_1[8];
  lVar12 = *plVar2;
  plVar11 = plVar2;
  if (lVar12 == 0) {
    lVar12 = plVar2[1];
    plVar3 = plVar2;
    while (plVar11 = plVar3 + 1, lVar12 == 0) {
      lVar12 = plVar3[2];
      plVar3 = plVar11;
    }
  }
  lVar13 = plVar2[param_1[9]];
  if (lVar12 != lVar13) {
    do {
      uStack_30 = 0x1803b0fb7;
      func_0x0001803d1df0(*(int64_t *)(lVar12 + 8) + 0x80,*(int32_t *)(param_1[0xd] + 0x3054));
      lVar12 = *(int64_t *)(lVar12 + 0x10);
      while (lVar12 == 0) {
        plVar2 = plVar11 + 1;
        plVar11 = plVar11 + 1;
        lVar12 = *plVar2;
      }
    } while (lVar12 != lVar13);
  }
  uStack_30 = 0x1803b0fe4;
  FUN_1803e2360(param_1 + 0x38c,param_1);
  if ((*(char *)(param_1[0xd] + 0x2965) != '\0') && (system_data_2847 == '\0')) {
    if (param_1[0x39] == 0) {
      uStack_30 = 0x1803b101e;
      FUN_1803e67b0(param_1 + 0x38c);
    }
    else {
      uStack_30 = 0x1803b1010;
      FUN_1803e6590();
    }
  }
  *(int8_t *)(param_1 + 0x2e) = 1;
  LOCK();
  *(int32_t *)(param_1 + 2) = 0;
  UNLOCK();
  uStack_30 = 0x1803b1032;
  FUN_1803b88b0(param_1);
  uStack_d8 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  CoreEngineDataTransformer(&puStack_f8,param_1[0xe] + 0x2d0);
  cVar4 = FUN_180624a00(&puStack_f8);
  uVar14 = extraout_XMM0_Da;
  if (cVar4 == '\0') {
    uVar14 = FUN_180624910(&puStack_f8);
  }
  FUN_1801c2d00(uVar14,param_1[0xe]);
  uVar8 = 0;
  puStack_158 = &system_data_buffer_ptr;
  uStack_140 = 0;
  puStack_150 = (void *)0x0;
  uStack_148 = 0;
  lVar12 = param_1[0xe];
  uVar1 = *(uint *)(lVar12 + 0x2e0);
  uVar10 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar12 + 0x2d8) != 0) {
    CoreEngineDataBufferProcessor(&puStack_158,uVar10);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_150,*(uint64_t *)(lVar12 + 0x2d8),uVar10);
  }
  if (puStack_150 != (void *)0x0) {
    puStack_150[uVar10] = 0;
  }
  uStack_148 = uVar1;
  uStack_140._4_4_ = *(uint *)(lVar12 + 0x2ec);
  CoreEngineDataBufferProcessor(&puStack_158,0x1f);
  puVar6 = (int32_t *)(puStack_150 + uStack_148);
  *puVar6 = 0x72726574;
  puVar6[1] = 0x5f6e6961;
  puVar6[2] = 0x64616873;
  puVar6[3] = 0x5f737265;
  puVar6[4] = 0x64616568;
  puVar6[5] = 0x645f7265;
  puVar6[6] = 0x2e617461;
  puVar6[7] = 0x6e6962;
  puStack_118 = &system_data_buffer_ptr;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_148 = 0x1f;
  cVar4 = FUN_180624af0(&puStack_158);
  if (cVar4 != '\0') {
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11e = 3;
    FUN_18039d7b0(param_1[0xd] + 0x608f0,&uStack_138,param_1 + 0x31);
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    puVar9 = &system_buffer_ptr;
    if (puStack_150 != (void *)0x0) {
      puVar9 = puStack_150;
    }
    *puVar7 = 0;
    *(int8_t *)(puVar7 + 2) = 0;
    FUN_18062dee0(puVar7,puVar9,&unknown_var_4880_ptr);
    iVar5 = FUN_18062e090(puVar7);
    if (iVar5 != 0) {
      uVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar5,3);
    }
    fread(uVar8,(int64_t)iVar5,1,puVar7[1]);
    if (puVar7[1] != 0) {
      fclose();
      puVar7[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      if (puVar7[1] != 0) {
        fclose();
        puVar7[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar7);
  }
  FUN_1806272a0(&unknown_var_872_ptr);
  puStack_d0 = &system_config_ptr;
  puStack_c8 = auStack_b8;
  auStack_b8[0] = 0;
  uStack_c0 = 5;
  strcpy_s(auStack_b8,0x10,&system_data_be28);
  FUN_18062bd50(&puStack_f8,&puStack_d0);
  puStack_d0 = &system_state_ptr;
  puStack_a8 = &system_config_ptr;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  uStack_98 = 4;
  strcpy_s(auStack_90,0x10,&system_data_d8ac);
  FUN_18062bd50(&puStack_f8,&puStack_a8);
  puStack_a8 = &system_state_ptr;
  puStack_80 = &system_config_ptr;
  puStack_78 = auStack_68;
  auStack_68[0] = 0;
  uStack_70 = 5;
  strcpy_s(auStack_68,0x10,&system_data_be54);
  FUN_18062bd50(&puStack_f8,&puStack_80);
  puStack_80 = &system_state_ptr;
  puStack_58 = &system_config_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 4;
  strcpy_s(auStack_40,0x10,&system_data_b88c);
  FUN_18062bd50(&puStack_f8,&puStack_58);
  puStack_58 = &system_state_ptr;
  uVar14 = FUN_1803b7530(param_1);
  FUN_1801c5450(uVar14,param_1[0xe]);
  uStack_110 = 0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &system_state_ptr;
  puStack_158 = &system_data_buffer_ptr;
  if (puStack_150 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_150 = (void *)0x0;
  uStack_140 = (uint64_t)uStack_140._4_4_ << 0x20;
  puStack_158 = &system_state_ptr;
  puStack_f8 = &system_data_buffer_ptr;
  if (lStack_f0 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_f0 = 0;
  uStack_e0 = 0;
  puStack_f8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b1050(int64_t param_1)
void FUN_1803b1050(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  int64_t lVar5;
  void *puVar6;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int8_t auStack_38 [16];
  
  lVar5 = *(int64_t *)(param_1 + 0x68);
  if (0 < *(int *)(lVar5 + 0x60a90)) {
    puVar1 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStackX_8,lVar5 + 0x60a80,0);
    *(uint64_t *)(param_1 + 0x1a8) = *puVar1;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x1a8) == 0) {
      puVar4 = *(void **)(*(int64_t *)(param_1 + 0x68) + 0x4e0);
      puVar6 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar6 = puVar4;
      }
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x60a88) != (void *)0x0) {
        puVar4 = *(void **)(lVar5 + 0x60a88);
      }
      FUN_180627020(&unknown_var_496_ptr,puVar4,puVar6);
    }
  }
  if (*(int *)(lVar5 + 0x60a70) < 1) {
    *(uint64_t *)(param_1 + 0x1a0) = 0;
  }
  else {
    puVar1 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStackX_10,lVar5 + 0x60a60,0);
    *(uint64_t *)(param_1 + 0x1a0) = *puVar1;
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x1a0) == 0) {
      puVar4 = *(void **)(*(int64_t *)(param_1 + 0x68) + 0x4e0);
      puVar6 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar6 = puVar4;
      }
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x60a68) != (void *)0x0) {
        puVar4 = *(void **)(lVar5 + 0x60a68);
      }
      FUN_180627020(&unknown_var_440_ptr,puVar4,puVar6);
    }
  }
  if (*(int *)(lVar5 + 0x60ab0) < 1) {
    *(uint64_t *)(param_1 + 400) = 0;
  }
  else {
    puVar1 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStackX_18,lVar5 + 0x60aa0,0);
    *(uint64_t *)(param_1 + 400) = *puVar1;
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 400) == 0) {
      puVar4 = *(void **)(*(int64_t *)(param_1 + 0x68) + 0x4e0);
      puVar6 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar6 = puVar4;
      }
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x60aa8) != (void *)0x0) {
        puVar4 = *(void **)(lVar5 + 0x60aa8);
      }
      FUN_180627020(&unknown_var_384_ptr,puVar4,puVar6);
    }
  }
  if (*(int *)(lVar5 + 0x60ad0) < 1) {
    *(uint64_t *)(param_1 + 0x188) = 0;
  }
  else {
    puVar1 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStackX_20,lVar5 + 0x60ac0,0);
    *(uint64_t *)(param_1 + 0x188) = *puVar1;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x188) == 0) {
      puVar4 = *(void **)(*(int64_t *)(param_1 + 0x68) + 0x4e0);
      puVar6 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar6 = puVar4;
      }
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x60ac8) != (void *)0x0) {
        puVar4 = *(void **)(lVar5 + 0x60ac8);
      }
      FUN_180627020(&unknown_var_440_ptr,puVar4,puVar6);
    }
  }
  lVar2 = *(int64_t *)(param_1 + 0x68);
  *(int32_t *)(param_1 + 0x1b4) = *(int32_t *)(lVar2 + 0x60b10);
  *(int32_t *)(param_1 + 0x1b0) = *(int32_t *)(lVar2 + 0x60b0c);
  *(int32_t *)(param_1 + 0x1b8) = *(int32_t *)(lVar2 + 0x60b00);
  *(int32_t *)(param_1 + 0x1bc) = *(int32_t *)(lVar2 + 0x60b04);
  *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(lVar2 + 0x60b08);
  if (0 < *(int *)(lVar5 + 0x60af0)) {
    lVar5 = lVar5 + 0x60ae0;
    lVar2 = FUN_180177c00(system_system_data_memory,lVar5);
    *(int64_t *)(param_1 + 0x198) = lVar2;
    if (lVar2 != 0) {
      FUN_180057b00(system_system_data_memory + 0x150,auStack_38,lVar5);
      FUN_180176de0();
      uVar3 = FUN_180177c00(system_system_data_memory,lVar5);
      *(uint64_t *)(param_1 + 0x198) = uVar3;
    }
  }
  return;
}






// 函数: void FUN_1803b1340(int64_t param_1)
void FUN_1803b1340(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  
  plVar1 = *(int64_t **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(int64_t *)(param_1 + 0x48)];
  while (lVar4 != lVar2) {
    if ((void *)**(uint64_t **)(lVar4 + 8) != &unknown_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(lVar4 + 8) + 0x38))();
    }
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  return;
}






// 函数: void FUN_1803b138a(void)
void FUN_1803b138a(void)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  do {
    if ((void *)**(uint64_t **)(unaff_RDI + 8) != &unknown_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(unaff_RDI + 8) + 0x38))();
    }
    unaff_RDI = *(int64_t *)(unaff_RDI + 0x10);
    while (unaff_RDI == 0) {
      plVar1 = (int64_t *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = *plVar1;
    }
  } while (unaff_RDI != unaff_RSI);
  return;
}






// 函数: void FUN_1803b13d7(void)
void FUN_1803b13d7(void)

{
  return;
}






// 函数: void FUN_1803b13e7(void)
void FUN_1803b13e7(void)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  do {
    (**(code **)(in_RAX + 0x38))();
    do {
      unaff_RDI = *(int64_t *)(unaff_RDI + 0x10);
      while (unaff_RDI == 0) {
        plVar1 = (int64_t *)(unaff_RBX + 8);
        unaff_RBX = unaff_RBX + 8;
        unaff_RDI = *plVar1;
      }
      if (unaff_RDI == unaff_RSI) {
        return;
      }
      in_RAX = **(int64_t **)(unaff_RDI + 8);
    } while (in_RAX == unaff_RBP);
  } while( true );
}







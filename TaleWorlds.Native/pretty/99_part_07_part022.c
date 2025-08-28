#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part022.c - 11 个函数

// 函数: void FUN_1804b0d50(int64_t param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1804b0d50(int64_t param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  char param_5,uint64_t param_6)

{
  bool bVar1;
  uint64_t ******ppppppuVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t ******ppppppuVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int8_t auStack_118 [8];
  uint64_t uStack_110;
  int64_t *plStack_100;
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  uint64_t *****pppppuStack_f0;
  uint64_t *****pppppuStack_e8;
  uint64_t *****pppppuStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int64_t lStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar7 = (uint64_t *)param_3[2];
  puVar9 = param_3;
  if (puVar7 == (uint64_t *)0x0) {
    return;
  }
  do {
    iVar4 = memcmp(puVar7 + 4,param_2 + 0x17,0x10);
    if (iVar4 < 0) {
      puVar8 = (uint64_t *)*puVar7;
    }
    else {
      puVar8 = (uint64_t *)puVar7[1];
      puVar9 = puVar7;
    }
    puVar7 = puVar8;
  } while (puVar8 != (uint64_t *)0x0);
  if (puVar9 == param_3) {
    return;
  }
  iVar4 = memcmp(param_2 + 0x17,puVar9 + 4,0x10);
  if (iVar4 < 0) {
    return;
  }
  lStack_a0 = puVar9[6];
  if (lStack_a0 == 0) {
    return;
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar7 = (uint64_t *)0x0;
  plStack_128 = (int64_t *)0x0;
  plStack_120 = (int64_t *)0x0;
  plStack_100 = (int64_t *)0x0;
  uStack_110 = 0;
  auStack_118[0] = 0;
  FUN_18022f2e0(&plStack_128,param_2,0);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  puVar10 = (uint64_t *)(system_system_data_config + 0x20);
  puVar9 = *(uint64_t **)(system_system_data_config + 0x30);
  puVar8 = puVar10;
  if (puVar9 != (uint64_t *)0x0) {
    do {
      iVar4 = memcmp(puVar9 + 4,param_6,0x10);
      if (iVar4 < 0) {
        puVar11 = (uint64_t *)*puVar9;
      }
      else {
        puVar11 = (uint64_t *)puVar9[1];
        puVar8 = puVar9;
      }
      puVar9 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if ((puVar8 != puVar10) && (iVar4 = memcmp(param_6,puVar8 + 4,0x10), -1 < iVar4))
    goto LAB_1804b0ec6;
  }
  puVar8 = puVar10;
LAB_1804b0ec6:
  puStack_98 = puVar8 + 6;
  if (puVar8 == puVar10) {
    puStack_98 = puVar7;
  }
  if (puStack_98 == (uint64_t *)0x0) {
    SystemDataInitializer(&unknown_var_6512_ptr);
    if ((plStack_128 != (int64_t *)0x0) && (plStack_120 != (int64_t *)0x0)) {
      if (cStack_f6 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_118);
      if (cStack_f8 != '\0') {
        FUN_180079520(plStack_128);
      }
      if (cStack_f7 != '\0') {
        FUN_180079520(plStack_128);
      }
      plVar3 = plStack_120;
      plStack_120 = (int64_t *)0x0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    FUN_18007f6a0(auStack_118);
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
  }
  else {
    uStack_c8 = 3;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x298)) {
      do {
        pppppuStack_f0 = &pppppuStack_f0;
        pppppuStack_e8 = &pppppuStack_f0;
        pppppuStack_e0 = (uint64_t ******)0x0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        if (((param_5 == '\0') ||
            (0.0 < *(float *)(*(int64_t *)(param_1 + 0x290) + 0x74 + (int64_t)puVar7))) &&
           (0 < (int)plStack_120[0xc])) {
          iVar4 = *(int *)plStack_120[0xd];
          lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,3);
          *(int *)(lVar5 + 0x20) = iVar4;
          bVar1 = true;
          ppppppuVar2 = &pppppuStack_f0;
          ppppppuVar6 = (uint64_t ******)pppppuStack_e0;
          while (ppppppuVar6 != (uint64_t ******)0x0) {
            bVar1 = iVar4 < *(int *)(ppppppuVar6 + 4);
            ppppppuVar2 = ppppppuVar6;
            if (iVar4 < *(int *)(ppppppuVar6 + 4)) {
              ppppppuVar6 = (uint64_t ******)ppppppuVar6[1];
            }
            else {
              ppppppuVar6 = (uint64_t ******)*ppppppuVar6;
            }
          }
          ppppppuVar6 = ppppppuVar2;
          if (bVar1) {
            if (ppppppuVar2 == (uint64_t ******)pppppuStack_e8) goto LAB_1804b113b;
            ppppppuVar6 = (uint64_t ******)func_0x00018066b9a0(ppppppuVar2);
          }
          if (*(int *)(lVar5 + 0x20) <= *(int *)(ppppppuVar6 + 4)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(lVar5);
          }
LAB_1804b113b:
          if ((ppppppuVar2 == &pppppuStack_f0) ||
             (*(int *)(lVar5 + 0x20) < *(int *)(ppppppuVar2 + 4))) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar5,ppppppuVar2,&pppppuStack_f0,uVar12);
        }
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 0x15;
      } while (iVar4 < *(int *)(param_1 + 0x298));
    }
    uStack_d8 = 0;
    pppppuStack_f0 = &pppppuStack_f0;
    uStack_d0 = 0;
    pppppuStack_e0 = (uint64_t *****)0x0;
    pppppuStack_e8 = pppppuStack_f0;
    if ((plStack_128 != (int64_t *)0x0) && (plStack_120 != (int64_t *)0x0)) {
      if (cStack_f6 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_118);
      if (cStack_f8 != '\0') {
        FUN_180079520(plStack_128);
      }
      if (cStack_f7 != '\0') {
        FUN_180079520(plStack_128);
      }
      plVar3 = plStack_120;
      plStack_120 = (int64_t *)0x0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    FUN_18007f6a0(auStack_118);
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
  }
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  return;
}






// 函数: void FUN_1804b1510(void)
void FUN_1804b1510(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}






// 函数: void FUN_1804b2210(int64_t param_1)
void FUN_1804b2210(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  
  puVar6 = *(uint64_t **)(param_1 + 8);
  uVar7 = *(uint64_t *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint64_t *)puVar6[uVar5];
      while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
        puVar2 = (uint64_t *)puVar3[1];
        if (puVar3 != *(uint64_t **)(param_1 + 0x60)) {
          if ((puVar3 < *(uint64_t **)(param_1 + 0x58)) ||
             (*(uint64_t **)(param_1 + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *puVar3 = *(uint64_t *)(param_1 + 0x30);
          *(uint64_t **)(param_1 + 0x30) = puVar3;
        }
      }
      puVar6[uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
    puVar6 = *(uint64_t **)(param_1 + 8);
    uVar7 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar7) && (puVar6 != *(uint64_t **)(param_1 + 0x60))) {
    if ((*(uint64_t **)(param_1 + 0x58) <= puVar6) && (puVar6 < *(uint64_t **)(param_1 + 0x40)))
    {
      *puVar6 = *(uint64_t *)(param_1 + 0x30);
      *(uint64_t **)(param_1 + 0x30) = puVar6;
      return;
    }
    if (puVar6 != (uint64_t *)0x0) {
      uVar7 = (uint64_t)puVar6 & 0xffffffffffc00000;
      if (uVar7 != 0) {
        lVar4 = uVar7 + 0x80 + ((int64_t)puVar6 - uVar7 >> 0x10) * 0x50;
        lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *puVar6 = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = puVar6;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            SystemDataCleaner();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList)
                              ,puVar6,uVar7,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804b2230(int64_t param_1)
void FUN_1804b2230(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  
  puVar6 = *(uint64_t **)(param_1 + 8);
  uVar7 = *(uint64_t *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint64_t *)puVar6[uVar5];
      while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
        puVar2 = (uint64_t *)puVar3[1];
        if (puVar3 != *(uint64_t **)(param_1 + 0x60)) {
          if ((puVar3 < *(uint64_t **)(param_1 + 0x58)) ||
             (*(uint64_t **)(param_1 + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *puVar3 = *(uint64_t *)(param_1 + 0x30);
          *(uint64_t **)(param_1 + 0x30) = puVar3;
        }
      }
      puVar6[uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
    puVar6 = *(uint64_t **)(param_1 + 8);
    uVar7 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar7) && (puVar6 != *(uint64_t **)(param_1 + 0x60))) {
    if ((*(uint64_t **)(param_1 + 0x58) <= puVar6) && (puVar6 < *(uint64_t **)(param_1 + 0x40)))
    {
      *puVar6 = *(uint64_t *)(param_1 + 0x30);
      *(uint64_t **)(param_1 + 0x30) = puVar6;
      return;
    }
    if (puVar6 != (uint64_t *)0x0) {
      uVar7 = (uint64_t)puVar6 & 0xffffffffffc00000;
      if (uVar7 != 0) {
        lVar4 = uVar7 + 0x80 + ((int64_t)puVar6 - uVar7 >> 0x10) * 0x50;
        lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *puVar6 = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = puVar6;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            SystemDataCleaner();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList)
                              ,puVar6,uVar7,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804b2250(int64_t param_1)
void FUN_1804b2250(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  
  puVar6 = *(uint64_t **)(param_1 + 8);
  uVar7 = *(uint64_t *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint64_t *)puVar6[uVar5];
      while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
        puVar2 = (uint64_t *)puVar3[1];
        if (puVar3 != *(uint64_t **)(param_1 + 0x60)) {
          if ((puVar3 < *(uint64_t **)(param_1 + 0x58)) ||
             (*(uint64_t **)(param_1 + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *puVar3 = *(uint64_t *)(param_1 + 0x30);
          *(uint64_t **)(param_1 + 0x30) = puVar3;
        }
      }
      puVar6[uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
    puVar6 = *(uint64_t **)(param_1 + 8);
    uVar7 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar7) && (puVar6 != *(uint64_t **)(param_1 + 0x60))) {
    if ((*(uint64_t **)(param_1 + 0x58) <= puVar6) && (puVar6 < *(uint64_t **)(param_1 + 0x40)))
    {
      *puVar6 = *(uint64_t *)(param_1 + 0x30);
      *(uint64_t **)(param_1 + 0x30) = puVar6;
      return;
    }
    if (puVar6 != (uint64_t *)0x0) {
      uVar7 = (uint64_t)puVar6 & 0xffffffffffc00000;
      if (uVar7 != 0) {
        lVar4 = uVar7 + 0x80 + ((int64_t)puVar6 - uVar7 >> 0x10) * 0x50;
        lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *puVar6 = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = puVar6;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            SystemDataCleaner();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList)
                              ,puVar6,uVar7,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804b2270(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1804b2270(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  lVar4 = *(int64_t *)(param_3 + 0x38);
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(param_3 + 0x40) - lVar4 >> 4 != 0) {
    do {
      if ((*(byte *)(uVar1 + 8 + lVar4) & 1) != 0) {
        FUN_1804b1510(param_1,param_2,*(uint64_t *)(uVar1 + lVar4));
      }
      lVar4 = *(int64_t *)(param_3 + 0x38);
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x10;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_3 + 0x40) - lVar4 >> 4));
  }
  return;
}






// 函数: void FUN_1804b22a4(void)
void FUN_1804b22a4(void)

{
  uint64_t uVar1;
  int64_t unaff_RSI;
  uint unaff_EDI;
  int64_t in_R9;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    if ((*(byte *)(uVar1 + 8 + in_R9) & 1) != 0) {
      FUN_1804b1510();
    }
    in_R9 = *(int64_t *)(unaff_RSI + 0x38);
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 0x10;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x40) - in_R9 >> 4));
  return;
}






// 函数: void FUN_1804b22e9(void)
void FUN_1804b22e9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b2300(int64_t param_1,int64_t param_2,float *param_3,int *param_4)
void FUN_1804b2300(int64_t param_1,int64_t param_2,float *param_3,int *param_4)

{
  uint64_t *puVar1;
  float *pfVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  uint64_t uVar21;
  float *pfVar22;
  int iVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uStackX_8;
  uint64_t uStack_138;
  uint64_t uStack_130;
  
  uVar27 = 0;
  lVar4 = *(int64_t *)(param_2 + 0xd8);
  if (lVar4 == 0) {
    uVar19 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x12);
    uVar19 = FUN_180435440(uVar19,*(int8_t *)(param_2 + 0x20));
    *(uint64_t *)(param_2 + 0xd8) = uVar19;
  }
  else {
    uVar28 = uVar27;
    uVar21 = uVar27;
    if ('\0' < *(char *)(lVar4 + 0x20)) {
      do {
        uVar20 = (int)uVar28 + 1;
        puVar1 = (uint64_t *)(*(int64_t *)(lVar4 + 0x18) + -0x10 + uVar21 + 0x10);
        *puVar1 = 0x3f8000003f800000;
        puVar1[1] = 0x7f7fffff3f800000;
        uVar28 = (uint64_t)uVar20;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar20 < (int)*(char *)(lVar4 + 0x20));
    }
  }
  lVar4 = *(int64_t *)(param_2 + 0x208);
  uStackX_8 = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar24 = *(int64_t *)(param_1 + 0x290);
    uVar28 = uVar27;
    do {
      iVar23 = 0;
      lVar25 = lVar24 + uVar28;
      lVar26 = *(int64_t *)(lVar25 + 0x90);
      if (*param_4 == 1) {
        lVar26 = *(int64_t *)(lVar25 + 0x98);
      }
      else if (*param_4 == 2) {
        lVar26 = *(int64_t *)(lVar25 + 0xa0);
      }
      uVar20 = (uint)uVar27;
      if (0 < *(int *)(lVar25 + 0x78)) {
        pfVar22 = (float *)(lVar26 + 4);
        do {
          cVar3 = *(char *)((int64_t)*(char *)(pfVar22 + 2) + 0xc0 + lVar4);
          fVar29 = (*pfVar22 - pfVar22[-1]) * *param_3 + pfVar22[-1];
          puVar1 = (uint64_t *)
                   (*(int64_t *)(*(int64_t *)(param_2 + 0xd8) + 0x18) + (int64_t)cVar3 * 0x10);
          uVar19 = *puVar1;
          uStack_130 = puVar1[1];
          uStack_138._0_4_ = (float)uVar19;
          uStack_138._4_4_ = (float)((uint64_t)uVar19 >> 0x20);
          if (pfVar22[1] == 0.0) {
            uStack_138 = CONCAT44(uStack_138._4_4_,(float)uStack_138 * fVar29);
          }
          else if (pfVar22[1] == 1.4013e-45) {
            uStack_138 = CONCAT44(uStack_138._4_4_ * fVar29,(float)uStack_138);
          }
          else {
            uVar27 = (uint64_t)uStack_130 >> 0x20;
            uStack_130 = CONCAT44((int)uVar27,(float)uStack_130 * fVar29);
            uStack_138 = uVar19;
          }
          FUN_1802ffe10(param_2,cVar3,&uStack_138);
          lVar24 = *(int64_t *)(param_1 + 0x290);
          iVar23 = iVar23 + 1;
          pfVar22 = pfVar22 + 4;
          uVar20 = uStackX_8;
        } while (iVar23 < *(int *)(lVar24 + 0x78 + uVar28));
      }
      uStackX_8 = uVar20 + 1;
      uVar27 = (uint64_t)uStackX_8;
      param_3 = param_3 + 1;
      uVar28 = uVar28 + 0xa8;
    } while ((int)uStackX_8 < *(int *)(param_1 + 0x298));
  }
  lVar24 = 0;
  lVar4 = *(int64_t *)(param_2 + 0xd8);
  if ('\0' < (char)*(byte *)(param_2 + 0x20)) {
    uVar27 = (uint64_t)*(byte *)(param_2 + 0x20);
    lVar25 = lVar24;
    lVar26 = lVar24;
    do {
      if (lVar4 == 0) {
        fVar29 = 1.0;
        fVar30 = 1.0;
        fVar31 = 1.0;
      }
      else {
        pfVar22 = (float *)(*(int64_t *)(*(int64_t *)(param_2 + 0xd8) + 0x18) + lVar25);
        fVar29 = *pfVar22;
        fVar30 = pfVar22[1];
        fVar31 = pfVar22[2];
      }
      lVar25 = lVar25 + 0x10;
      lVar5 = *(int64_t *)(param_2 + 0x18);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0xa78) + 0x140);
      pfVar22 = (float *)(lVar6 + 0xc0 + lVar24);
      fVar7 = *pfVar22;
      fVar8 = pfVar22[1];
      fVar9 = pfVar22[2];
      fVar10 = pfVar22[3];
      pfVar22 = (float *)(lVar6 + 0xb0 + lVar24);
      fVar11 = *pfVar22;
      fVar12 = pfVar22[1];
      fVar13 = pfVar22[2];
      fVar14 = pfVar22[3];
      pfVar2 = (float *)(lVar6 + 0xa0 + lVar24);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      lVar24 = lVar24 + 0x1b0;
      puVar1 = (uint64_t *)(lVar26 + 0x90 + lVar5);
      uVar19 = *puVar1;
      uVar18 = puVar1[1];
      pfVar22 = (float *)(lVar26 + 0x60 + lVar5);
      *pfVar22 = *pfVar2 * fVar29;
      pfVar22[1] = fVar15 * fVar29;
      pfVar22[2] = fVar16 * fVar29;
      pfVar22[3] = fVar17;
      pfVar22 = (float *)(lVar26 + 0x70 + lVar5);
      *pfVar22 = fVar11 * fVar30;
      pfVar22[1] = fVar12 * fVar30;
      pfVar22[2] = fVar13 * fVar30;
      pfVar22[3] = fVar14;
      pfVar22 = (float *)(lVar26 + 0x80 + lVar5);
      *pfVar22 = fVar7 * fVar31;
      pfVar22[1] = fVar8 * fVar31;
      pfVar22[2] = fVar9 * fVar31;
      pfVar22[3] = fVar10;
      puVar1 = (uint64_t *)(lVar26 + 0x90 + lVar5);
      *puVar1 = uVar19;
      puVar1[1] = uVar18;
      lVar26 = lVar26 + 0x100;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b2317(int64_t param_1,int64_t param_2,float *param_3,int *param_4)
void FUN_1804b2317(int64_t param_1,int64_t param_2,float *param_3,int *param_4)

{
  uint64_t *puVar1;
  float *pfVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uVar18;
  int64_t in_RAX;
  uint64_t uVar19;
  uint uVar20;
  uint64_t uVar21;
  float *pfVar22;
  int64_t unaff_RBP;
  int iVar23;
  int64_t lVar24;
  int iVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t unaff_R12;
  uint64_t uVar29;
  uint64_t unaff_R15;
  float fVar30;
  float fVar31;
  float fVar32;
  
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  uVar28 = 0;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lVar4 = *(int64_t *)(param_2 + 0xd8);
  if (lVar4 == 0) {
    uVar19 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x12);
    uVar19 = FUN_180435440(uVar19,*(int8_t *)(param_2 + 0x20));
    param_4 = *(int **)(unaff_RBP + 0x78);
    *(uint64_t *)(param_2 + 0xd8) = uVar19;
  }
  else {
    uVar29 = uVar28;
    uVar21 = uVar28;
    if ('\0' < *(char *)(lVar4 + 0x20)) {
      do {
        uVar20 = (int)uVar29 + 1;
        puVar1 = (uint64_t *)(*(int64_t *)(lVar4 + 0x18) + -0x10 + uVar21 + 0x10);
        *puVar1 = 0x3f8000003f800000;
        puVar1[1] = 0x7f7fffff3f800000;
        uVar29 = (uint64_t)uVar20;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar20 < (int)*(char *)(lVar4 + 0x20));
    }
  }
  lVar4 = *(int64_t *)(param_2 + 0x208);
  *(int32_t *)(unaff_RBP + 0x60) = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar24 = *(int64_t *)(param_1 + 0x290);
    uVar29 = uVar28;
    do {
      iVar23 = 0;
      iVar25 = (int)uVar28;
      lVar26 = lVar24 + uVar29;
      lVar27 = *(int64_t *)(lVar26 + 0x90);
      if (*param_4 == 1) {
        lVar27 = *(int64_t *)(lVar26 + 0x98);
      }
      else if (*param_4 == 2) {
        lVar27 = *(int64_t *)(lVar26 + 0xa0);
      }
      if (0 < *(int *)(lVar26 + 0x78)) {
        pfVar22 = (float *)(lVar27 + 4);
        do {
          cVar3 = *(char *)((int64_t)*(char *)(pfVar22 + 2) + 0xc0 + lVar4);
          fVar30 = (*pfVar22 - pfVar22[-1]) * *param_3 + pfVar22[-1];
          uVar19 = *(uint64_t *)
                    (*(int64_t *)(*(int64_t *)(param_2 + 0xd8) + 0x18) + (int64_t)cVar3 * 0x10);
          fVar31 = (float)((uint64_t)uVar19 >> 0x20);
          if (pfVar22[1] == 0.0) {
            uVar19 = CONCAT44(fVar31,(float)uVar19 * fVar30);
          }
          else if (pfVar22[1] == 1.4013e-45) {
            uVar19 = CONCAT44(fVar31 * fVar30,(float)uVar19);
          }
          FUN_1802ffe10(param_2,cVar3,&stack0x00000020,(int64_t)cVar3,uVar19);
          lVar24 = *(int64_t *)(param_1 + 0x290);
          iVar23 = iVar23 + 1;
          pfVar22 = pfVar22 + 4;
        } while (iVar23 < *(int *)(lVar24 + 0x78 + uVar29));
        iVar25 = *(int *)(unaff_RBP + 0x60);
        param_4 = *(int **)(unaff_RBP + 0x78);
      }
      uVar20 = iVar25 + 1;
      uVar28 = (uint64_t)uVar20;
      param_3 = param_3 + 1;
      uVar29 = uVar29 + 0xa8;
      *(uint *)(unaff_RBP + 0x60) = uVar20;
    } while ((int)uVar20 < *(int *)(param_1 + 0x298));
  }
  lVar24 = 0;
  lVar4 = *(int64_t *)(param_2 + 0xd8);
  if ('\0' < (char)*(byte *)(param_2 + 0x20)) {
    uVar28 = (uint64_t)*(byte *)(param_2 + 0x20);
    lVar26 = lVar24;
    lVar27 = lVar24;
    do {
      if (lVar4 == 0) {
        fVar30 = 1.0;
        fVar31 = 1.0;
        fVar32 = 1.0;
      }
      else {
        pfVar22 = (float *)(*(int64_t *)(*(int64_t *)(param_2 + 0xd8) + 0x18) + lVar26);
        fVar30 = *pfVar22;
        fVar31 = pfVar22[1];
        fVar32 = pfVar22[2];
      }
      lVar26 = lVar26 + 0x10;
      lVar5 = *(int64_t *)(param_2 + 0x18);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0xa78) + 0x140);
      pfVar22 = (float *)(lVar6 + 0xc0 + lVar24);
      fVar7 = *pfVar22;
      fVar8 = pfVar22[1];
      fVar9 = pfVar22[2];
      fVar10 = pfVar22[3];
      pfVar22 = (float *)(lVar6 + 0xb0 + lVar24);
      fVar11 = *pfVar22;
      fVar12 = pfVar22[1];
      fVar13 = pfVar22[2];
      fVar14 = pfVar22[3];
      pfVar2 = (float *)(lVar6 + 0xa0 + lVar24);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      lVar24 = lVar24 + 0x1b0;
      puVar1 = (uint64_t *)(lVar27 + 0x90 + lVar5);
      uVar19 = *puVar1;
      uVar18 = puVar1[1];
      pfVar22 = (float *)(lVar27 + 0x60 + lVar5);
      *pfVar22 = *pfVar2 * fVar30;
      pfVar22[1] = fVar15 * fVar30;
      pfVar22[2] = fVar16 * fVar30;
      pfVar22[3] = fVar17;
      pfVar22 = (float *)(lVar27 + 0x70 + lVar5);
      *pfVar22 = fVar11 * fVar31;
      pfVar22[1] = fVar12 * fVar31;
      pfVar22[2] = fVar13 * fVar31;
      pfVar22[3] = fVar14;
      pfVar22 = (float *)(lVar27 + 0x80 + lVar5);
      *pfVar22 = fVar7 * fVar32;
      pfVar22[1] = fVar8 * fVar32;
      pfVar22[2] = fVar9 * fVar32;
      pfVar22[3] = fVar10;
      puVar1 = (uint64_t *)(lVar27 + 0x90 + lVar5);
      *puVar1 = uVar19;
      puVar1[1] = uVar18;
      lVar27 = lVar27 + 0x100;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  return;
}






// 函数: void FUN_1804b23ba(uint64_t param_1,uint64_t param_2,int param_3,int *param_4)
void FUN_1804b23ba(uint64_t param_1,uint64_t param_2,int param_3,int *param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  float *pfVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t in_RAX;
  float *pfVar20;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar21;
  uint64_t unaff_RDI;
  int64_t lVar22;
  int64_t lVar23;
  int64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t uVar24;
  float *unaff_R15;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uVar28;
  float fStack0000000000000028;
  
  uVar24 = unaff_RDI;
  do {
    lVar1 = in_RAX + uVar24;
    lVar22 = *(int64_t *)(lVar1 + 0x90);
    if (*param_4 == 1) {
      lVar22 = *(int64_t *)(lVar1 + 0x98);
    }
    else if (*param_4 == 2) {
      lVar22 = *(int64_t *)(lVar1 + 0xa0);
    }
    if (0 < *(int *)(lVar1 + 0x78)) {
      pfVar20 = (float *)(lVar22 + 4);
      do {
        cVar4 = *(char *)((int64_t)*(char *)(pfVar20 + 2) + 0xc0 + unaff_R12);
        fVar25 = (*pfVar20 - pfVar20[-1]) * *unaff_R15 + pfVar20[-1];
        puVar2 = (uint64_t *)
                 (*(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + 0x18) + (int64_t)cVar4 * 0x10);
        uVar28 = *puVar2;
        _fStack0000000000000028 = puVar2[1];
        fVar26 = (float)((uint64_t)uVar28 >> 0x20);
        if (pfVar20[1] == 0.0) {
          fVar25 = (float)uVar28 * fVar25;
          uVar28 = CONCAT44(fVar26,fVar25);
        }
        else if (pfVar20[1] == 1.4013e-45) {
          fVar25 = fVar26 * fVar25;
          uVar28 = CONCAT44(fVar25,(float)uVar28);
        }
        else {
          fVar25 = fStack0000000000000028 * fVar25;
          uVar19 = (uint64_t)_fStack0000000000000028 >> 0x20;
          _fStack0000000000000028 = CONCAT44((int)uVar19,fVar25);
        }
        FUN_1802ffe10(fVar25,cVar4,&stack0x00000020,(int64_t)cVar4,uVar28);
        in_RAX = *(int64_t *)(unaff_R13 + 0x290);
        uVar21 = (int)unaff_RDI + 1;
        unaff_RDI = (uint64_t)uVar21;
        pfVar20 = pfVar20 + 4;
      } while ((int)uVar21 < *(int *)(in_RAX + 0x78 + uVar24));
      param_3 = *(int *)(unaff_RBP + 0x60);
      param_4 = *(int **)(unaff_RBP + 0x78);
    }
    param_3 = param_3 + 1;
    unaff_R15 = unaff_R15 + 1;
    uVar24 = uVar24 + 0xa8;
    *(int *)(unaff_RBP + 0x60) = param_3;
    unaff_RDI = 0;
  } while (param_3 < *(int *)(unaff_R13 + 0x298));
  lVar1 = *(int64_t *)(unaff_RSI + 0xd8);
  if ('\0' < (char)*(byte *)(unaff_RSI + 0x20)) {
    lVar23 = 0;
    lVar22 = 0;
    uVar24 = (uint64_t)*(byte *)(unaff_RSI + 0x20);
    do {
      if (lVar1 == 0) {
        fVar25 = 1.0;
        fVar26 = 1.0;
        fVar27 = 1.0;
      }
      else {
        pfVar20 = (float *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + 0x18) + lVar22);
        fVar25 = *pfVar20;
        fVar26 = pfVar20[1];
        fVar27 = pfVar20[2];
      }
      lVar22 = lVar22 + 0x10;
      lVar5 = *(int64_t *)(unaff_RSI + 0x18);
      lVar6 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0xa78) + 0x140);
      pfVar20 = (float *)(lVar6 + 0xc0 + unaff_RDI);
      fVar7 = *pfVar20;
      fVar8 = pfVar20[1];
      fVar9 = pfVar20[2];
      fVar10 = pfVar20[3];
      pfVar20 = (float *)(lVar6 + 0xb0 + unaff_RDI);
      fVar11 = *pfVar20;
      fVar12 = pfVar20[1];
      fVar13 = pfVar20[2];
      fVar14 = pfVar20[3];
      pfVar3 = (float *)(lVar6 + 0xa0 + unaff_RDI);
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar17 = pfVar3[3];
      unaff_RDI = unaff_RDI + 0x1b0;
      puVar2 = (uint64_t *)(lVar23 + 0x90 + lVar5);
      uVar28 = *puVar2;
      uVar18 = puVar2[1];
      pfVar20 = (float *)(lVar23 + 0x60 + lVar5);
      *pfVar20 = *pfVar3 * fVar25;
      pfVar20[1] = fVar15 * fVar25;
      pfVar20[2] = fVar16 * fVar25;
      pfVar20[3] = fVar17;
      pfVar20 = (float *)(lVar23 + 0x70 + lVar5);
      *pfVar20 = fVar11 * fVar26;
      pfVar20[1] = fVar12 * fVar26;
      pfVar20[2] = fVar13 * fVar26;
      pfVar20[3] = fVar14;
      pfVar20 = (float *)(lVar23 + 0x80 + lVar5);
      *pfVar20 = fVar7 * fVar27;
      pfVar20[1] = fVar8 * fVar27;
      pfVar20[2] = fVar9 * fVar27;
      pfVar20[3] = fVar10;
      puVar2 = (uint64_t *)(lVar23 + 0x90 + lVar5);
      *puVar2 = uVar28;
      puVar2[1] = uVar18;
      lVar23 = lVar23 + 0x100;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}







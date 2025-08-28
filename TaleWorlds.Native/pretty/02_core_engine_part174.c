#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part174.c - 15 个函数

// 函数: void FUN_18015af90(uint64_t param_1,int64_t param_2,int param_3,uint64_t param_4,
void FUN_18015af90(uint64_t param_1,int64_t param_2,int param_3,uint64_t param_4,
                  int32_t *param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  int16_t uVar4;
  int iVar5;
  int16_t *puVar6;
  int16_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int16_t *puStack_58;
  int16_t *puStack_48;
  
  lVar1 = core_system_data_config;
  puStack_58 = (int16_t *)0x0;
  puStack_48 = (int16_t *)0x0;
  iVar5 = (int)((uint64_t)(int64_t)param_3 >> 1);
  lVar8 = (int64_t)iVar5;
  if (iVar5 != 0) {
    puStack_58 = (int16_t *)FUN_18062b420(system_memory_pool_ptr,lVar8 * 2,3);
    puStack_48 = puStack_58 + lVar8;
  }
  if (0 < iVar5) {
    lVar9 = 0;
    puVar6 = puStack_58;
    puVar7 = puStack_58;
    do {
      uVar4 = CONCAT11(*(int8_t *)(param_2 + 1 + lVar9 * 2),*(int8_t *)(param_2 + lVar9 * 2)
                      );
      if (puVar7 < puStack_48) {
        *puVar7 = uVar4;
        puStack_58 = puVar6;
      }
      else {
        lVar3 = (int64_t)puVar7 - (int64_t)puVar6 >> 1;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18015b087:
          puStack_58 = (int16_t *)
                       FUN_18062b420(system_memory_pool_ptr,lVar3 * 2,
                                     CONCAT71((int7)((uint64_t)puStack_48 >> 8),3));
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_18015b087;
          puStack_58 = (int16_t *)0x0;
        }
        if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
          memmove(puStack_58,puVar6,(int64_t)puVar7 - (int64_t)puVar6);
        }
        *puStack_58 = uVar4;
        if (puVar6 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar6);
        }
        puStack_48 = puStack_58 + lVar3;
        puVar7 = puStack_58;
      }
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + 1;
      puVar6 = puStack_58;
    } while (lVar9 < lVar8);
  }
  uVar2 = FUN_1806f8750(*(uint64_t *)(lVar1 + 0x250),puStack_58,
                        (uint64_t)(int64_t)param_3 >> 1 & 0xffffffff,param_4,iVar5 * 6);
  *param_5 = uVar2;
  if (puStack_58 == (int16_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puStack_58);
}





// 函数: void FUN_18015b160(void)
void FUN_18015b160(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18015b2b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,param_1 * 0x3088 + 0x10,3,param_4,0xfffffffffffffffe);
  *puVar2 = param_1 << 0x20 | 0x3088;
  iVar4 = 0;
  if (param_1 != 0) {
    puVar3 = puVar2 + 0x11;
    do {
      puVar3[-0xf] = 0;
      puVar3[-0xe] = 0;
      puVar3[-0xb] = 0;
      *(int32_t *)(puVar3 + -10) = 0;
      puVar3[-9] = 0;
      puVar3[-7] = 0;
      puVar1 = puVar3 + 0x600;
      *puVar1 = 0;
      puVar3[0x601] = 0;
      puVar3[-3] = (uint64_t)puVar3;
      puVar3[-2] = (uint64_t)(-(int)puVar3 & 7) + (int64_t)puVar3;
      puVar3[-1] = (uint64_t)puVar1;
      *puVar1 = (uint64_t)&unknown_var_8432_ptr;
      puVar3[0x601] = (uint64_t)FUN_180059ba0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x611;
    } while ((uint64_t)(int64_t)iVar4 < param_1);
  }
  return puVar2 + 2;
}





// 函数: void FUN_18015b3a0(int64_t param_1)
void FUN_18015b3a0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180057010(uVar3 + param_1 + 0x60);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}





// 函数: void FUN_18015b420(int64_t param_1)
void FUN_18015b420(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_18015b450();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18015b450(int64_t param_1)
void FUN_18015b450(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(int64_t *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(int64_t **)(lVar3 + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar3 + 8) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}





// 函数: void FUN_18015b4f0(int64_t param_1)
void FUN_18015b4f0(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18015b4f6(int64_t param_1)
void FUN_18015b4f6(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18015b520(void)
void FUN_18015b520(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18015b556(void)
void FUN_18015b556(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18015b574(void)
void FUN_18015b574(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18015b590(int64_t *param_1,int64_t *param_2)
void FUN_18015b590(int64_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lStack_40;
  int64_t lStack_38;
  int64_t lStack_30;
  int32_t uStack_28;
  
  lVar2 = *param_1;
  *param_1 = 0;
  lVar3 = param_1[1];
  param_1[1] = 0;
  lVar4 = param_1[2];
  param_1[2] = 0;
  uVar1 = (int32_t)param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  lStack_40 = lVar2;
  lStack_38 = lVar3;
  lStack_30 = lVar4;
  uStack_28 = uVar1;
  if (param_1 != param_2) {
    FUN_180058160(param_1);
    lVar5 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar5;
    lVar5 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar5;
    lVar5 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar5;
    lVar5 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(int *)(param_2 + 3) = (int)lVar5;
  }
  lVar5 = lVar2;
  if (param_2 != &lStack_40) {
    FUN_180058160(param_2);
    lVar5 = *param_2;
    *param_2 = lVar2;
    lStack_38 = param_2[1];
    param_2[1] = lVar3;
    lStack_30 = param_2[2];
    param_2[2] = lVar4;
    uStack_28 = (int32_t)param_2[3];
    *(int32_t *)(param_2 + 3) = uVar1;
    lStack_40 = lVar5;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18015b6b0(int64_t param_1,uint64_t *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int *piVar4;
  uint64_t uVar5;
  uint64_t uStackX_8;
  
  piVar4 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *piVar4 = *param_3;
  *(uint64_t *)(piVar4 + 2) = *(uint64_t *)(param_3 + 2);
  param_3[2] = 0;
  param_3[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  iVar1 = *piVar4;
  uVar5 = (uint64_t)(int64_t)iVar1 % (uint64_t)*(uint *)(param_1 + 0x10);
  piVar2 = *(int **)(uVar5 * 8 + *(int64_t *)(param_1 + 8));
  while( true ) {
    uStackX_8 = piVar4;
    if (piVar2 == (int *)0x0) {
      FUN_18066c220(param_1 + 0x20,&uStackX_8,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if ((char)uStackX_8 != '\0') {
        uVar5 = (uint64_t)(int64_t)iVar1 % (uint64_t)uStackX_8._4_4_;
        FUN_18015bdc0(param_1,uStackX_8._4_4_);
      }
      *(uint64_t *)(piVar4 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar5 * 8);
      *(int **)(*(int64_t *)(param_1 + 8) + uVar5 * 8) = piVar4;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar3 = *(int64_t *)(param_1 + 8);
      *param_2 = piVar4;
      param_2[1] = lVar3 + uVar5 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    if (iVar1 == *piVar2) break;
    piVar2 = *(int **)(piVar2 + 4);
  }
  if (*(int64_t **)(piVar4 + 2) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(piVar4 + 2) + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(piVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015b810(uint64_t param_1,int param_2,int param_3,int param_4,uint64_t param_5,
void FUN_18015b810(uint64_t param_1,int param_2,int param_3,int param_4,uint64_t param_5,
                  int64_t param_6)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  
  iVar6 = 0x7fffffff;
  if (*(int *)(core_system_data_config + 0x310) == 0) {
    iVar6 = param_4;
  }
  iVar7 = param_3 - param_2;
  if (0 < iVar7) {
    if (iVar6 <= iVar7) {
      iVar2 = iVar7 / iVar6 + 1;
      iVar3 = (int)(*(int64_t *)(system_context_ptr + 0x10) - *(int64_t *)(system_context_ptr + 8) >> 3);
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      iVar3 = iVar7 / iVar3;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      else if (iVar6 < iVar3) {
        iVar3 = iVar6;
      }
      plVar4 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (int64_t)&system_handler1_ptr;
      *plVar4 = (int64_t)&system_handler2_ptr;
      *(int32_t *)(plVar4 + 1) = 0;
      *plVar4 = (int64_t)&unknown_var_5008_ptr;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      LOCK();
      uVar1 = (int32_t)plVar4[2];
      *(int *)(plVar4 + 2) = iVar3 + param_2;
      UNLOCK();
      auVar8._0_4_ = (float)iVar7 / (float)iVar3;
      iVar6 = (int)auVar8._0_4_;
      if (auVar8._0_4_ <= 0.0) {
        if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar8._0_4_)) {
          auVar9._4_4_ = auVar8._0_4_;
          auVar9._0_4_ = auVar8._0_4_;
          auVar9._8_8_ = 0;
          movmskps(uVar1,auVar9);
        }
      }
      else if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar8._0_4_)) {
        auVar8._4_4_ = auVar8._0_4_;
        auVar8._8_8_ = 0;
        movmskps(uVar1,auVar8);
      }
      lVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x58,8,3);
                    // WARNING: Subroutine does not return
      memset(lVar5 + 8,0,0x50);
    }
    (**(code **)(param_6 + 0x18))(param_2,param_3,param_6);
  }
  if (*(code **)(param_6 + 0x10) != (code *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015bdc0(int64_t param_1,int64_t param_2)
void FUN_18015bdc0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015bea0(uint64_t *param_1,int64_t param_2)
void FUN_18015bea0(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar3) / 0x28;
  puVar2 = (uint64_t *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_18015bf2e;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar6 * 0x28,*(int8_t *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
LAB_18015bf2e:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (int64_t)puVar2 - (int64_t)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *puVar5 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar4 + 0x10 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = *puVar3;
      *(int32_t *)(lVar4 + 0x14 + (int64_t)puVar3) = *(int32_t *)((int64_t)puVar3 + 0x14);
      *(int32_t *)(lVar4 + 0x10 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(int8_t *)(lVar4 + 0x18 + (int64_t)puVar3) = *(int8_t *)(puVar3 + 3);
      puVar5 = puVar5 + 5;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 5;
    } while (puVar1 != puVar7);
  }
  FUN_180627ae0(puVar5,param_2);
  *(int8_t *)(puVar5 + 4) = *(int8_t *)(param_2 + 0x20);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &system_data_buffer_ptr;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 3) = 0;
      *puVar3 = &system_state_ptr;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar7);
    puVar3 = (uint64_t *)*param_1;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 5;
    param_1[2] = puVar2 + lVar6 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18015c0a0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c00930;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18015c190(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c008f0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
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



uint64_t FUN_18015c270(uint64_t param_1,uint64_t param_2)

{
  FUN_180320050();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}



int32_t *
FUN_18015c2b0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)(param_1 + 2);
  *plVar1 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *param_1 = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr,param_3,param_4,0xfffffffffffffffe);
  *(int16_t *)(param_1 + 0xe) = 0;
  return param_1;
}



uint64_t FUN_18015c320(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180320050();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18015c3b0(uint64_t param_1,int64_t param_2)
void FUN_18015c3b0(uint64_t param_1,int64_t param_2)

{
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018015c3da. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_2 + 0x10))(param_2,0,0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part076.c - 30 个函数

// 函数: void FUN_1803f2e80(uint64_t *param_1)
void FUN_1803f2e80(uint64_t *param_1)

{
  FUN_1803f33b0();
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}



int32_t *
FUN_1803f2eb0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  *param_1 = 0;
  *(uint64_t *)(param_1 + 2) = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  uVar1 = FUN_1803f4cb0(param_1,0,0,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 2) = uVar1;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *param_1 = 0x3f800000;
  FUN_1803f3480(param_1,8);
  return param_1;
}






// 函数: void FUN_1803f2f30(int64_t param_1)
void FUN_1803f2f30(int64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  
  plVar4 = *(int64_t **)(param_1 + 8);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}






// 函数: void FUN_1803f2f3f(void)
void FUN_1803f2f3f(void)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((int64_t)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}






// 函数: void FUN_1803f2f75(void)
void FUN_1803f2f75(void)

{
  return;
}






// 函数: void FUN_1803f2f80(char *param_1)
void FUN_1803f2f80(char *param_1)

{
  if (*param_1 != '\0') {
    SystemResourceAllocator(param_1 + 8);
  }
  return;
}






// 函数: void FUN_1803f2fb0(char *param_1)
void FUN_1803f2fb0(char *param_1)

{
  if (*param_1 != '\0') {
    SystemResourceAllocator(param_1 + 0x10);
  }
  return;
}






// 函数: void FUN_1803f2fe0(void)
void FUN_1803f2fe0(void)

{
  FUN_1803f32c0();
  return;
}



int64_t * FUN_1803f3000(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar2 = FUN_1803f3350(param_1,param_2[1] - *param_2 >> 5);
  if (cVar2 != '\0') {
    lVar3 = *param_1;
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar5 = lVar3, lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_18018b350(lVar3,lVar4,param_3,param_4,lVar4);
      lVar3 = lVar3 + 0x20;
    }
    for (; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
      SystemResourceAllocator(lVar5);
    }
    param_1[1] = lVar3;
  }
  return param_1;
}






// 函数: void FUN_1803f30e0(int64_t *param_1,int param_2)
void FUN_1803f30e0(int64_t *param_1,int param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  void *puVar6;
  
  lVar3 = (int64_t)param_2 * 0x118 + *param_1;
  uVar2 = param_1[1];
  uVar1 = lVar3 + 0x118;
  if ((uVar1 < uVar2) && (lVar5 = (int64_t)(uVar2 - uVar1) / 0x118, 0 < lVar5)) {
    puVar4 = (uint64_t *)(lVar3 + 0x120);
    do {
      *(int32_t *)(puVar4 + -0x22) = *(int32_t *)(puVar4 + 1);
      puVar6 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar6 = (void *)*puVar4;
      }
      strcpy_s(puVar4[-0x23],0x100,puVar6);
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 0x23;
    } while (0 < lVar5);
    uVar2 = param_1[1];
  }
  puVar4 = (uint64_t *)(uVar2 - 0x118);
  param_1[1] = (int64_t)puVar4;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar4)(puVar4,0);
  return;
}






// 函数: void FUN_1803f310a(int64_t param_1)
void FUN_1803f310a(int64_t param_1)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t *puVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  void *puVar3;
  
  lVar2 = (param_1 - in_RAX) / 0x118;
  if (0 < lVar2) {
    puVar1 = (uint64_t *)(unaff_RBX + 0x120);
    do {
      *(int32_t *)(puVar1 + -0x22) = *(int32_t *)(puVar1 + 1);
      puVar3 = &system_buffer_ptr;
      if ((void *)*puVar1 != (void *)0x0) {
        puVar3 = (void *)*puVar1;
      }
      strcpy_s(puVar1[-0x23],0x100,puVar3);
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 0x23;
    } while (0 < lVar2);
    param_1 = *(int64_t *)(unaff_RSI + 8);
  }
  puVar1 = (uint64_t *)(param_1 + -0x118);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar1)(puVar1,0);
  return;
}






// 函数: void FUN_1803f3184(int64_t param_1)
void FUN_1803f3184(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  
  puVar1 = (uint64_t *)(param_1 + -0x118);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar1)(puVar1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f31b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f31b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_158 [32];
  uint64_t uStack_138;
  uint64_t *puStack_130;
  char acStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (uint64_t *)func_0x00018004b9a0();
  uStack_138 = 0;
  puStack_130 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_128,0x100,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_128[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0xff)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),acStack_128,
           (int64_t)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}






// 函数: void FUN_1803f3270(uint64_t *param_1)
void FUN_1803f3270(uint64_t *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}






// 函数: void FUN_1803f32a0(uint64_t *param_1)
void FUN_1803f32a0(uint64_t *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}






// 函数: void FUN_1803f32c0(int64_t *param_1)
void FUN_1803f32c0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        SystemResourceAllocator(lVar1);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar2 = *(int64_t *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}






// 函数: void FUN_1803f32d5(int64_t param_1)
void FUN_1803f32d5(int64_t param_1)

{
  int64_t unaff_RBX;
  int64_t lVar1;
  int64_t *unaff_RDI;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  if (unaff_RBX != lVar1) {
    do {
      SystemResourceAllocator(unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
    } while (unaff_RBX != lVar1);
    unaff_RBX = *unaff_RDI;
  }
  lVar1 = unaff_RBX;
  if ((0xfff < (unaff_RDI[2] - unaff_RBX & 0xffffffffffffffe0U)) &&
     (lVar1 = *(int64_t *)(unaff_RBX + -8), 0x1f < (unaff_RBX - lVar1) - 8U)) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  free(lVar1);
  *unaff_RDI = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  return;
}






// 函数: void FUN_1803f3310(uint64_t param_1,int64_t param_2)
void FUN_1803f3310(uint64_t param_1,int64_t param_2)

{
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  
  if ((unaff_RBX - *(int64_t *)(unaff_RBX + -8)) - 8U < 0x20) {
    free(*(int64_t *)(unaff_RBX + -8));
    *unaff_RDI = 0;
    unaff_RDI[1] = 0;
    unaff_RDI[2] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn(param_1,param_2 + 0x27);
}



uint64_t FUN_1803f3350(int64_t *param_1,uint64_t param_2)

{
  code *pcVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7ffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = FUN_180067110(param_2 * 0x20);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    lVar2 = lVar2 + param_2 * 0x20;
    param_1[2] = lVar2;
    uVar3 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
  }
  return uVar3;
}






// 函数: void FUN_1803f33b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f33b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  plVar4 = (int64_t *)*param_1;
  plVar7 = (int64_t *)*plVar4;
  *plVar4 = (int64_t)plVar4;
  *(int64_t *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar7 != (int64_t *)*param_1) {
    do {
      plVar4 = (int64_t *)*plVar7;
      plVar5 = (int64_t *)plVar7[7];
      if (plVar5 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((int64_t)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      SystemResourceAllocator(plVar7 + 2);
      free(plVar7,0x40,param_3,param_4,uVar8);
      plVar7 = plVar4;
    } while (plVar4 != (int64_t *)*param_1);
  }
  return;
}






// 函数: void FUN_1803f3480(int64_t param_1,int64_t param_2)
void FUN_1803f3480(int64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  uint64_t uStackX_8;
  
  uVar2 = param_2 * 2;
  if ((uint64_t)(*(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x18) >> 3) < uVar2) {
    if (0x1fffffffffffffff < uVar2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_1803f3720(param_1 + 0x18,uVar2);
  }
  uStackX_8 = *(uint64_t *)(param_1 + 8);
  FUN_1803f3510(param_1 + 0x18,uVar2,&uStackX_8);
  *(int64_t *)(param_1 + 0x30) = param_2 + -1;
  *(int64_t *)(param_1 + 0x38) = param_2;
  return;
}






// 函数: void FUN_1803f3510(int64_t *param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1803f3510(int64_t *param_1,uint64_t param_2,uint64_t *param_3)

{
  code *pcVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  lVar5 = *param_1;
  uVar6 = param_1[1] - lVar5 >> 3;
  uVar4 = param_1[2] - lVar5 >> 3;
  if (uVar4 < param_2) {
    if (0x1fffffffffffffff < param_2) {
FUN_1803f3688:
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_2;
    if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) &&
       (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_2)) {
      uVar6 = param_2;
    }
    if (lVar5 != 0) {
      lVar3 = lVar5;
      if ((0xfff < uVar4 * 8) && (lVar3 = *(int64_t *)(lVar5 + -8), 0x1f < (lVar5 - lVar3) - 8U)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(lVar3);
    }
    puVar2 = (uint64_t *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar6 != 0) {
      if (0x1fffffffffffffff < uVar6) goto FUN_1803f3688;
      puVar2 = (uint64_t *)FUN_180067110(uVar6 * 8);
      *param_1 = (int64_t)puVar2;
      param_1[1] = (int64_t)puVar2;
      param_1[2] = (int64_t)(puVar2 + uVar6);
    }
    if (param_2 != 0) {
      do {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    param_1[1] = (int64_t)puVar2;
  }
  else if (uVar6 < param_2) {
    FUN_1803f4430(lVar5,param_1[1]);
    puVar2 = (uint64_t *)param_1[1];
    for (lVar5 = param_2 - uVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (int64_t)puVar2;
  }
  else {
    lVar3 = lVar5 + param_2 * 8;
    FUN_1803f4430(lVar5,lVar3);
    param_1[1] = lVar3;
  }
  return;
}






// 函数: void FUN_1803f3553(int64_t param_1,uint64_t param_2)
void FUN_1803f3553(int64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t uVar4;
  uint64_t *unaff_R14;
  
  if (0x1fffffffffffffff < unaff_RBX) {
FUN_1803f3688:
    FUN_180189990();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = unaff_RBX;
  if ((param_2 <= 0x1fffffffffffffff - (param_2 >> 1)) &&
     (uVar4 = (param_2 >> 1) + param_2, uVar4 < unaff_RBX)) {
    uVar4 = unaff_RBX;
  }
  if (param_1 != 0) {
    lVar3 = param_1;
    if ((0xfff < param_2 * 8) &&
       (lVar3 = *(int64_t *)(param_1 + -8), 0x1f < (param_1 - lVar3) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar3);
  }
  puVar2 = (uint64_t *)0x0;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  if (uVar4 != 0) {
    if (0x1fffffffffffffff < uVar4) goto FUN_1803f3688;
    puVar2 = (uint64_t *)FUN_180067110(uVar4 * 8);
    *unaff_R14 = puVar2;
    unaff_R14[1] = puVar2;
    unaff_R14[2] = puVar2 + uVar4;
  }
  if (unaff_RBX != 0) {
    do {
      *puVar2 = *unaff_RSI;
      puVar2 = puVar2 + 1;
      unaff_RBX = unaff_RBX - 1;
    } while (unaff_RBX != 0);
  }
  unaff_R14[1] = puVar2;
  return;
}






// 函数: void FUN_1803f3629(void)
void FUN_1803f3629(void)

{
  return;
}






// 函数: void FUN_1803f363f(void)
void FUN_1803f363f(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}






// 函数: void FUN_1803f3646(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1803f3646(int64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t unaff_RBX;
  int64_t lVar2;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  
  if (unaff_RDI < unaff_RBX) {
    FUN_1803f4430();
    puVar1 = *(uint64_t **)(unaff_R14 + 8);
    for (lVar2 = unaff_RBX - unaff_RDI; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
    }
    *(uint64_t **)(unaff_R14 + 8) = puVar1;
  }
  else {
    lVar2 = param_1 + unaff_RBX * 8;
    FUN_1803f4430(param_1,lVar2);
    *(int64_t *)(unaff_R14 + 8) = lVar2;
  }
  return;
}






// 函数: void FUN_1803f3688(void)
void FUN_1803f3688(void)

{
  code *pcVar1;
  
  FUN_180189990();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






// 函数: void FUN_1803f3690(uint64_t param_1,int64_t param_2)
void FUN_1803f3690(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  
  plVar4 = *(int64_t **)(param_2 + 0x38);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_2 + 0x10);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_2,0x40);
  return;
}






// 函数: void FUN_1803f3720(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f3720(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar5 = param_2 * 8;
  if (0x1fffffffffffffff < param_2) {
    lVar5 = -1;
  }
  puVar4 = (uint64_t *)FUN_180067110(lVar5);
  puVar3 = (uint64_t *)param_1[1];
  puVar8 = puVar4;
  for (puVar6 = (uint64_t *)*param_1; puVar6 != puVar3; puVar6 = puVar6 + 1) {
    *puVar8 = *puVar6;
    puVar8 = puVar8 + 1;
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar9 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar7 = lVar5;
    if (0xfff < uVar9) {
      lVar7 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar5 - lVar7,uVar9 + 0x27,lVar7,param_4,puVar6,uVar10);
      }
    }
    free(lVar7);
  }
  *param_1 = (int64_t)puVar4;
  param_1[1] = (int64_t)(puVar4 + (lVar1 - lVar2 >> 3));
  param_1[2] = (int64_t)(puVar4 + param_2);
  return;
}






// 函数: void FUN_1803f3810(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f3810(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x23) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3880(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f3880(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  void *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  uVar6 = param_1[1];
  if (uVar6 < param_1[2]) {
    param_1[1] = uVar6 + 0x118;
    FUN_180068ff0(uVar6);
    return;
  }
  uVar8 = *param_1;
  lVar10 = (int64_t)(uVar6 - uVar8) / 0x118;
  puVar3 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1803f392d;
  }
  puVar3 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x118,(char)param_1[3],param_4,0xfffffffffffffffe);
  uVar6 = param_1[1];
  uVar8 = *param_1;
LAB_1803f392d:
  puVar4 = puVar3;
  if (uVar8 != uVar6) {
    lVar9 = uVar8 - (int64_t)puVar3;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &rendering_buffer_2008_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar9 + 0x10 + (int64_t)puVar4);
      puVar1 = *(void **)(lVar9 + 8 + (int64_t)puVar4);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar4[1],0x100,puVar7);
      puVar4 = puVar4 + 0x23;
    } while (lVar9 + (int64_t)puVar4 != uVar6);
  }
  FUN_180068ff0(puVar4,param_2);
  puVar2 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 0x23;
    } while (puVar5 != puVar2);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = (uint64_t)puVar3;
    param_1[1] = (uint64_t)(puVar4 + 0x23);
    param_1[2] = (uint64_t)(puVar3 + lVar10 * 0x23);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



uint64_t * FUN_1803f3a40(uint64_t *param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  puVar2 = (uint64_t *)FUN_1803f5400(param_2,param_3,lVar3,param_2,0,0xfffffffffffffffe);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(int8_t *)puVar2 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3ac0(uint64_t param_1,int32_t *param_2,uint64_t *param_3)
void FUN_1803f3ac0(uint64_t param_1,int32_t *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  int32_t *puStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t *puStack_30;
  uint64_t uStack_28;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uStack_70 = param_1;
  puStack_68 = param_3;
  puStack_30 = param_2;
  FUN_1803f2eb0();
  puStack_60 = &uStack_88;
  uStack_88 = *param_3;
  uStack_80 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_58 = &uStack_50;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 6) = 0xf;
  *(int8_t *)param_2 = 0;
  FUN_1804726c0(param_1,&uStack_50,&uStack_88);
  SystemResourceAllocator(param_2);
  plVar4 = (int64_t *)param_3[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3bc0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1803f3bc0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  int8_t *param_5)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int8_t auStack_138 [32];
  uint64_t uStack_118;
  int64_t *plStack_110;
  int32_t *puStack_108;
  uint64_t *puStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int8_t auStack_c8 [16];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_98;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  int8_t auStack_70 [16];
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  uint64_t *puStack_40;
  uint64_t uStack_38;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uStack_98 = param_1;
  puStack_88 = param_3;
  puStack_40 = param_2;
  FUN_1803f2eb0();
  uStack_d8 = *param_3;
  uStack_d0 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_80 = &uStack_118;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_78 = &uStack_f8;
  puStack_100 = &uStack_d8;
  uStack_118 = 0;
  plStack_110 = (int64_t *)0x0;
  puStack_108 = &uStack_60;
  uStack_f8._0_4_ = (int32_t)uVar5;
  uStack_f8._4_4_ = (int32_t)(uVar5 >> 0x20);
  uStack_f0._0_4_ = (int32_t)uVar6;
  uStack_f0._4_4_ = (int32_t)(uVar6 >> 0x20);
  uStack_60 = (int32_t)uStack_f8;
  uStack_5c = uStack_f8._4_4_;
  uStack_58 = (int32_t)uStack_f0;
  uStack_54 = uStack_f0._4_4_;
  uStack_e8._0_4_ = (int32_t)uVar7;
  uStack_e8._4_4_ = (int32_t)(uVar7 >> 0x20);
  uStack_e0._0_4_ = (int32_t)uVar8;
  uStack_e0._4_4_ = (int32_t)(uVar8 >> 0x20);
  uStack_50 = (int32_t)uStack_e8;
  uStack_4c = uStack_e8._4_4_;
  uStack_48 = (int32_t)uStack_e0;
  uStack_44 = uStack_e0._4_4_;
  uStack_e8 = 0;
  uStack_e0 = 0xf;
  uStack_f8 = uVar5 & 0xffffffffffffff00;
  uStack_f0 = uVar6;
  FUN_1804726c0(param_1,&uStack_60,&uStack_d8);
  puStack_100 = (uint64_t *)auStack_70;
  uVar10 = FUN_1804721d0(auStack_70,*param_5);
  puStack_108 = (int32_t *)auStack_c8;
  uStack_b8 = 0;
  uStack_b0 = 0xf;
  auStack_c8[0] = 0;
  FUN_1800671b0(auStack_c8,&processed_var_560_ptr,0x19);
  FUN_1804726c0(param_1,auStack_c8,uVar10);
  SystemResourceAllocator(&uStack_f8);
  plVar4 = plStack_110;
  if (plStack_110 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_2);
  plVar4 = (int64_t *)param_3[1];
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





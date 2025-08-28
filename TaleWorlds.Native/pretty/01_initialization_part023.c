#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part023.c - 27 个函数

// 函数: void FUN_180057550(longlong param_1)
void FUN_180057550(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
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





// 函数: void FUN_180057556(longlong param_1)
void FUN_180057556(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
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





// 函数: void FUN_180057580(void)
void FUN_180057580(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_1800575b6(void)
void FUN_1800575b6(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_1800575d4(void)
void FUN_1800575d4(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_1800575f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800575f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057610(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057610(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x69) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057680(longlong param_1)
void FUN_180057680(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180057730(longlong *param_1)
void FUN_180057730(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_18004bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057790(longlong param_1)
void FUN_180057790(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
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





// 函数: void FUN_180057796(longlong param_1)
void FUN_180057796(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
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





// 函数: void FUN_1800577c0(void)
void FUN_1800577c0(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_1800577f6(void)
void FUN_1800577f6(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_180057814(void)
void FUN_180057814(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_180057830(longlong *param_1)
void FUN_180057830(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800578a0(void)
void FUN_1800578a0(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = system_operation_state;
  if (system_operation_state == (uint64_t *)0x0) {
    return;
  }
  FUN_180057830();
  if ((longlong *)puVar2[0x30b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x30b] + 0x38))();
  }
  _Mtx_destroy_in_situ();
  if ((longlong *)puVar2[0x300] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x300] + 0x38))();
  }
  if ((longlong *)puVar2[0x2d3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x2d3] + 0x38))();
  }
  if ((longlong *)puVar2[0x2c0] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x2c0] + 0x38))();
  }
  FUN_180090420(puVar2 + 0x116);
  FUN_180090380(puVar2 + 6);
  if (puVar2[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
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





// 函数: void FUN_180057980(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057980(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  uint64_t uVar5;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  ulonglong uStack_38;
  
  uVar5 = 0xfffffffffffffffe;
  pcVar3 = *(char **)(param_1 + 8);
  cVar1 = *pcVar3;
  pcVar4 = pcVar3;
  if (cVar1 != '\0') {
    do {
      lVar2 = strchr(param_3,(int)cVar1);
      if ((lVar2 != 0) && (pcVar4 != pcVar3)) {
        puStack_50 = &system_data_buffer_ptr;
        uStack_38 = 0;
        lStack_48 = 0;
        uStack_40 = 0;
        FUN_180628210(&puStack_50,pcVar4,(int)pcVar3 - (int)pcVar4,param_4,uVar5);
        pcVar4 = pcVar3 + 1;
        if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
          *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820(param_2,&puStack_50);
        }
        puStack_50 = &system_data_buffer_ptr;
        if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_48 = 0;
        uStack_38 = uStack_38 & 0xffffffff00000000;
        puStack_50 = &system_state_ptr;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar3) {
      puStack_50 = &system_data_buffer_ptr;
      uStack_38 = 0;
      lStack_48 = 0;
      uStack_40 = 0;
      FUN_180628210(&puStack_50,pcVar4,(int)pcVar3 - (int)pcVar4,param_4,uVar5);
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,&puStack_50);
      }
      puStack_50 = &system_data_buffer_ptr;
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180057b00(longlong param_1,longlong *param_2,uint64_t param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint64_t uVar7;
  char acStackX_8 [8];
  
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x28));
  FUN_180627ae0(lVar3 + 0x20,param_3);
  lVar4 = FUN_1800590b0(param_1,acStackX_8,lVar3 + 0x20);
  if (acStackX_8[0] == '\0') {
    FUN_18005d1f0();
    *param_2 = lVar4;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar4 != param_1) {
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_180057b97:
      uVar7 = 1;
      goto LAB_180057ba2;
    }
    if (*(int *)(lVar3 + 0x30) != 0) {
      pbVar5 = *(byte **)(lVar4 + 0x28);
      lVar6 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar2 = (uint)pbVar5[lVar6];
        if (bVar1 != uVar2) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 != 0);
      if ((int)(bVar1 - uVar2) < 1) goto LAB_180057b97;
    }
  }
  uVar7 = 0;
LAB_180057ba2:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,lVar4,param_1,uVar7);
}





// 函数: void FUN_180057bf0(uint64_t *param_1)
void FUN_180057bf0(uint64_t *param_1)

{
  if (param_1 == (uint64_t *)0x0) {
    return;
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180057cb0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_2976_ptr;
  FUN_18005e570(system_context_ptr,param_1[0x28],param_3,param_4,0xfffffffffffffffe);
  param_1[0x28] = 0;
  param_1[0x29] = &system_data_buffer_ptr;
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2c) = 0;
  param_1[0x29] = &system_state_ptr;
  FUN_180174950();
  if ((param_2 & 1) != 0) {
    free(param_1,0x170);
  }
  return param_1;
}





// 函数: void FUN_180057d70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057d70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180058020();
  FUN_180058020();
  param_1[0x123] = (longlong)&system_data_buffer_ptr;
  if (param_1[0x124] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x124] = 0;
  *(int32_t *)(param_1 + 0x126) = 0;
  param_1[0x123] = (longlong)&system_state_ptr;
  FUN_180058370(param_1 + 0x11d,param_1[0x11f],param_3,param_4,uVar3);
  if (param_1[0x119] == 0) {
    FUN_18005d580();
    FUN_18005d580();
    FUN_180058710(param_1 + 0x10b,param_1[0x10d]);
    param_1[0x87] = (longlong)&system_state_ptr;
    param_1[4] = (longlong)&system_state_ptr;
    uVar3 = 0xfffffffffffffffe;
    puVar1 = (uint64_t *)param_1[1];
    for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
    }
    if (*param_1 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057ec0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057ec0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_180057ee0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057ee0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057f10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057f10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_180057f30(longlong *param_1)
void FUN_180057f30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  
  FUN_180057110();
  lVar1 = *param_1;
  *param_1 = 0;
  lVar2 = param_1[1];
  param_1[1] = 0;
  lVar3 = param_1[2];
  param_1[2] = 0;
  lVar6 = param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  puVar4 = (uint64_t *)*param_1;
  *param_1 = lVar1;
  puVar5 = (uint64_t *)param_1[1];
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  *(int *)(param_1 + 3) = (int)lVar6;
  for (puVar7 = puVar4; puVar7 != puVar5; puVar7 = puVar7 + 4) {
    (**(code **)*puVar7)(puVar7,0);
  }
  if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  return;
}





// 函数: void FUN_180058000(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058000(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180058020(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058020(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}



uint64_t * FUN_180058080(uint64_t *param_1,uint64_t *param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar7 = (uint64_t *)param_1[2];
    puVar10 = param_1;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar8 = (uint64_t *)puVar7[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar7 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_3 + 8);
          lVar6 = puVar7[5] - (longlong)pbVar3;
          do {
            uVar4 = (uint)pbVar3[lVar6];
            iVar5 = *pbVar3 - uVar4;
            if (*pbVar3 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          bVar2 = 0 < iVar5;
          if (iVar5 < 1) {
            puVar8 = (uint64_t *)puVar7[1];
            goto LAB_1800580f9;
          }
        }
        puVar8 = (uint64_t *)*puVar7;
      }
LAB_1800580f9:
      puVar9 = puVar7;
      if (bVar2) {
        puVar9 = puVar10;
      }
      puVar7 = puVar8;
      puVar10 = puVar9;
    } while (puVar8 != (uint64_t *)0x0);
    if (puVar9 != param_1) {
      if (*(int *)(puVar9 + 6) == 0) {
LAB_180058138:
        *param_2 = puVar9;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        pbVar3 = (byte *)puVar9[5];
        lVar6 = *(longlong *)(param_3 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar6];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_180058138;
      }
    }
  }
  *param_2 = param_1;
  return param_2;
}





// 函数: void FUN_180058160(ulonglong *param_1)
void FUN_180058160(ulonglong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  param_1[1] = *param_1;
  uVar7 = *param_1;
  *param_1 = 0;
  uVar2 = param_1[1];
  param_1[1] = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  uVar5 = param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  puVar4 = (uint64_t *)*param_1;
  *param_1 = uVar7;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *(int *)(param_1 + 3) = (int)uVar5;
  if (puVar4 == (uint64_t *)0x0) {
    return;
  }
  uVar7 = (ulonglong)puVar4 & 0xffffffffffc00000;
  if (uVar7 != 0) {
    lVar6 = uVar7 + 0x80 + ((longlong)puVar4 - uVar7 >> 0x10) * 0x50;
    lVar6 = lVar6 - (ulonglong)*(uint *)(lVar6 + 4);
    if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar6 + 0xe) == '\0')) {
      *puVar4 = *(uint64_t *)(lVar6 + 0x20);
      *(uint64_t **)(lVar6 + 0x20) = puVar4;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList),
                          puVar4,uVar7,0xfffffffffffffffe);
    }
  }
  return;
}






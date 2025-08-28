#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part119.c - 17 个函数

// 函数: void FUN_18033ba80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18033ba80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_18033ba80(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18033baf0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (ulonglong)plVar1[4] < *param_5)) {
LAB_18033bb62:
      uVar5 = 0;
      goto LAB_18033bb65;
    }
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 == 0) goto LAB_18033bb62;
      uVar5 = 1;
      param_4 = plVar1;
LAB_18033bb65:
      if (param_4 != (longlong *)0x0) {
        FUN_18033c340(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (ulonglong)plVar1[4];
      if (bVar6) {
        plVar2 = (longlong *)plVar1[1];
      }
      else {
        plVar2 = (longlong *)*plVar1;
      }
    } while (plVar2 != (longlong *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (longlong *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_18033bbd2;
    }
    plVar2 = (longlong *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_18033bbd2:
  if ((plVar1 == param_1) || (uVar3 < (ulonglong)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x58,(char)param_1[5]);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(int32_t *)(lVar4 + 0x40) = 3;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(uint64_t *)(lVar4 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



longlong FUN_18033bc80(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar6 = (ulonglong)(*param_2 % *(uint *)(param_1 + 0x10));
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + uVar6 * 8);
  for (puVar3 = *(uint **)(*(longlong *)(param_1 + 8) + uVar6 * 8);
      (puVar3 != (uint *)0x0 && (*param_2 != *puVar3)); puVar3 = *(uint **)(puVar3 + 4)) {
    puVar1 = puVar3 + 4;
  }
  puVar5 = (uint *)0x0;
  if (puVar3 != (uint *)0x0) {
    do {
      puVar4 = puVar3;
      if (*param_2 != *puVar4) break;
      *(uint64_t *)puVar1 = *(uint64_t *)(puVar4 + 4);
      *(uint **)(puVar4 + 4) = puVar5;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
      puVar3 = *(uint **)puVar1;
      puVar5 = puVar4;
    } while (*(uint **)puVar1 != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
  }
  return lVar2 - *(longlong *)(param_1 + 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18033bd40(longlong param_1,uint64_t *param_2,uint64_t param_3,int *param_4,ulonglong param_5
             )

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + uVar2 * 8);
  if (piVar3 != (int *)0x0) {
    do {
      if (*param_4 == *piVar3) {
        *param_2 = piVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar3 = *(int **)(piVar3 + 4);
    } while (piVar3 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar3 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *piVar3 = *param_4;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar3 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = piVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = piVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033bd9a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18033bd9a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(uint64_t *)(puVar2 + 2) = 0;
  *(uint64_t *)(puVar2 + 4) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(system_memory_pool_ptr,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar2 + 4) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18033be9d(uint64_t param_1,uint64_t param_2)
void FUN_18033be9d(uint64_t param_1,uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void FUN_18033beb9(ulonglong param_1)
void FUN_18033beb9(ulonglong param_1)

{
  longlong lVar1;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18033bedf(void)
void FUN_18033bedf(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033bf30(longlong param_1,longlong param_2)
void FUN_18033bf30(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c010(longlong param_1,longlong param_2)
void FUN_18033c010(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}





// 函数: void FUN_18033c0f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18033c0f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_18033c0f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b6d80(param_2 + 4);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_18033c160(longlong param_1)
void FUN_18033c160(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18033ad00();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c190(longlong *param_1,longlong *param_2)
void FUN_18033c190(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  lVar6 = *param_1;
  lVar7 = (lVar3 - lVar6) / 0x18;
  plVar2 = (longlong *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_18033c21b;
  }
  plVar2 = (longlong *)
           FUN_18062b420(system_memory_pool_ptr,lVar7 * 0x18,(char)param_1[3],lVar6,0xfffffffffffffffe);
  lVar3 = param_1[1];
  lVar6 = *param_1;
LAB_18033c21b:
  plVar4 = plVar2;
  if (lVar6 != lVar3) {
    lVar6 = lVar6 - (longlong)plVar2;
    do {
      *plVar4 = *(longlong *)(lVar6 + (longlong)plVar4);
      *(uint64_t *)(lVar6 + (longlong)plVar4) = 0;
      plVar4[1] = *(longlong *)(lVar6 + 8 + (longlong)plVar4);
      *(int8_t *)(plVar4 + 2) = *(int8_t *)(lVar6 + 0x10 + (longlong)plVar4);
      plVar4 = plVar4 + 3;
    } while (lVar6 + (longlong)plVar4 != lVar3);
  }
  plVar1 = (longlong *)*param_2;
  *plVar4 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar4[1] = param_2[1];
  *(char *)(plVar4 + 2) = (char)param_2[2];
  plVar1 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  if (plVar5 != plVar1) {
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
    plVar5 = (longlong *)*param_1;
  }
  if (plVar5 == (longlong *)0x0) {
    *param_1 = (longlong)plVar2;
    param_1[1] = (longlong)(plVar4 + 3);
    param_1[2] = (longlong)(plVar2 + lVar7 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar5);
}





// 函数: void FUN_18033c300(longlong param_1)
void FUN_18033c300(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 8);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c340(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18033c340(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x58,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x40) = 3;
  *(uint64_t *)(lVar1 + 0x48) = 0;
  *(uint64_t *)(lVar1 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18033c420(longlong param_1,longlong *param_2,uint64_t param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x28));
  *(int *)(puVar3 + 4) = (int)param_2[4];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_3;
  *(char *)(puVar3 + 3) = (char)param_2[3];
  if (*param_2 != 0) {
    uVar4 = FUN_18033c420(param_1,*param_2,puVar3);
    *puVar3 = uVar4;
  }
  puVar2 = puVar3;
  for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x28));
    *(int *)(puVar5 + 4) = (int)plVar1[4];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    *(char *)(puVar5 + 3) = (char)plVar1[3];
    puVar2[1] = puVar5;
    if (*plVar1 != 0) {
      uVar4 = FUN_18033c420(param_1,*plVar1,puVar5);
      *puVar5 = uVar4;
    }
    puVar2 = puVar5;
  }
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18033c520(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  iVar1 = *param_4;
  bVar4 = true;
  puVar6 = (uint64_t *)param_1[2];
  puVar5 = param_1;
  while (puVar6 != (uint64_t *)0x0) {
    bVar4 = iVar1 < *(int *)(puVar6 + 4);
    puVar5 = puVar6;
    if (iVar1 < *(int *)(puVar6 + 4)) {
      puVar6 = (uint64_t *)puVar6[1];
    }
    else {
      puVar6 = (uint64_t *)*puVar6;
    }
  }
  puVar6 = puVar5;
  if (bVar4) {
    if (puVar5 == (uint64_t *)param_1[1]) goto LAB_18033c588;
    puVar6 = (uint64_t *)func_0x00018066b9a0();
  }
  if (iVar1 <= *(int *)(puVar6 + 4)) {
    *param_2 = puVar6;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_18033c588:
  lVar7 = FUN_18062b420(system_memory_pool_ptr,0x48);
  *(int *)(lVar7 + 0x20) = *param_4;
  puVar6 = (uint64_t *)(lVar7 + 0x28);
  uVar8 = 0;
  *puVar6 = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(int *)(lVar7 + 0x40) = param_4[8];
  uVar3 = *puVar6;
  *puVar6 = *(uint64_t *)(param_4 + 2);
  *(uint64_t *)(param_4 + 2) = uVar3;
  uVar3 = *(uint64_t *)(lVar7 + 0x30);
  *(uint64_t *)(lVar7 + 0x30) = *(uint64_t *)(param_4 + 4);
  *(uint64_t *)(param_4 + 4) = uVar3;
  uVar3 = *(uint64_t *)(lVar7 + 0x38);
  *(uint64_t *)(lVar7 + 0x38) = *(uint64_t *)(param_4 + 6);
  *(uint64_t *)(param_4 + 6) = uVar3;
  iVar2 = *(int *)(lVar7 + 0x40);
  *(int *)(lVar7 + 0x40) = param_4[8];
  param_4[8] = iVar2;
  if ((puVar5 != param_1) && (*(int *)(puVar5 + 4) <= iVar1)) {
    uVar8 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar5,param_1,uVar8,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18033c660(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
  byte *pbVar9;
  void *puStack_40;
  byte *pbStack_38;
  int iStack_30;
  
  FUN_180627ae0(&puStack_40,param_4,param_3,param_4,0xfffffffffffffffe);
  bVar2 = true;
  puVar5 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (uint64_t *)0x0) {
    puVar3 = puVar5;
    if (*(int *)(puVar5 + 6) == 0) {
      bVar2 = false;
LAB_18033c6c0:
      puVar5 = (uint64_t *)*puVar5;
    }
    else {
      if (iStack_30 == 0) {
        bVar2 = true;
      }
      else {
        pbVar9 = (byte *)puVar5[5];
        lVar6 = (longlong)pbStack_38 - (longlong)pbVar9;
        do {
          bVar1 = *pbVar9;
          uVar4 = (uint)pbVar9[lVar6];
          if (bVar1 != uVar4) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar4 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar4);
      }
      if (!bVar2) goto LAB_18033c6c0;
      puVar5 = (uint64_t *)puVar5[1];
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar5 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_18033c6e9;
    }
  }
  else {
LAB_18033c6e9:
    if (iStack_30 == 0) {
LAB_18033c811:
      *param_2 = puVar5;
      *(int8_t *)(param_2 + 1) = 0;
      puStack_40 = &unknown_var_3456_ptr;
      if (pbStack_38 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return param_2;
    }
    if (*(int *)(puVar5 + 6) != 0) {
      pbVar9 = pbStack_38;
      do {
        bVar1 = *pbVar9;
        uVar4 = (uint)pbVar9[puVar5[5] - (longlong)pbStack_38];
        if (bVar1 != uVar4) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18033c811;
    }
  }
  lVar6 = FUN_18062b420(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar6 + 0x20,param_4);
  *(uint64_t *)(lVar6 + 0x40) = *(uint64_t *)(param_4 + 0x20);
  uVar8 = 0;
  *(uint64_t *)(param_4 + 0x20) = 0;
  if (puVar3 == param_1) goto LAB_18033c7d1;
  if (*(int *)(puVar3 + 6) != 0) {
    if (iStack_30 == 0) goto LAB_18033c7d1;
    pbVar9 = (byte *)puVar3[5];
    lVar7 = (longlong)pbStack_38 - (longlong)pbVar9;
    do {
      bVar1 = *pbVar9;
      uVar4 = (uint)pbVar9[lVar7];
      if (bVar1 != uVar4) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar4 != 0);
    if (0 < (int)(bVar1 - uVar4)) goto LAB_18033c7d1;
  }
  uVar8 = 1;
LAB_18033c7d1:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar3,param_1,uVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c870(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_18033c870(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 == param_4) {
    return;
  }
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 2;
  if ((ulonglong)(param_1[2] - lVar2 >> 2) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 2;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar4 * 4,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 2;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -4;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 4);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -4) - param_2 & 0xfffffffffffffffc),param_2);
  }
  lVar3 = param_3 + uVar4 * 4;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 4,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 2)) * 4,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c881(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_18033c881(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 2;
  if ((ulonglong)(param_1[2] - lVar2 >> 2) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 2;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar4 * 4,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 2;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -4;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 4);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -4) - param_2 & 0xfffffffffffffffc),param_2);
  }
  lVar3 = param_3 + uVar4 * 4;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 4,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 2)) * 4,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033c98e(longlong param_1,longlong param_2)
void FUN_18033c98e(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar2;
  
  param_1 = param_1 >> 2;
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 <= (ulonglong)(param_1 + unaff_RBP)) {
    uVar2 = param_1 + unaff_RBP;
  }
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 4,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
  }
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_2,unaff_RSI - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(uVar1);
}





// 函数: void FUN_18033ca4a(void)
void FUN_18033ca4a(void)

{
  return;
}





// 函数: void FUN_18033ca66(void)
void FUN_18033ca66(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18033ca70(longlong param_1,uint64_t *param_2,uint64_t param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  int *piVar4;
  uint64_t uVar5;
  int *piStackX_8;
  
  piVar4 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *piVar4 = *param_4;
  *(uint64_t *)(piVar4 + 2) = *(uint64_t *)(param_4 + 2);
  param_4[2] = 0;
  param_4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  uVar3 = (ulonglong)(longlong)*piVar4 % (ulonglong)*(uint *)(param_1 + 0x10);
  for (piVar2 = *(int **)(*(longlong *)(param_1 + 8) + uVar3 * 8); piStackX_8 = piVar4,
      piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
    if (*piVar4 == *piVar2) {
      if (*(longlong **)(piVar4 + 2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(piVar4 + 2) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar4);
    }
  }
  FUN_18066c220(param_1 + 0x20,&piStackX_8,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  if ((char)piStackX_8 != '\0') {
    lVar1 = ((ulonglong)piStackX_8 >> 0x20) * 8;
    uVar5 = FUN_18062b1e0(system_memory_pool_ptr,lVar1 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar5,0,lVar1);
  }
  *(uint64_t *)(piVar4 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = piVar4;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = piVar4;
  param_2[1] = lVar1 + uVar3 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18033cc90(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c05760;
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
      *param_1 = (longlong)puVar3;
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

longlong FUN_18033cd80(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c057a0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (longlong)puVar3;
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




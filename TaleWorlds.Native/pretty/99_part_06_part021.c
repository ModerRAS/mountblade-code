#include "TaleWorlds.Native.Split.h"

// 99_part_06_part021.c - 8 个函数

// 函数: void FUN_1803b9430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803b9430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1803b9430(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[6] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b94a0(longlong param_1,longlong param_2)
void FUN_1803b94a0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}






// 函数: void FUN_1803b95a0(longlong param_1)
void FUN_1803b95a0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 0x10);
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

longlong FUN_1803b9640(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06730;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
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

longlong FUN_1803b9740(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06770;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags,0xfffffffffffffffe);
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






// 函数: void FUN_1803b9820(longlong *param_1)
void FUN_1803b9820(longlong *param_1)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  puVar1 = (uint64_t *)*param_1;
  puVar2 = (int32_t *)puVar1[2];
  uStack_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  uStack_18 = *(uint64_t *)(puVar2 + 4);
  FUN_1803b4700(*puVar1,puVar1[1] + 0x30,&uStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803b9860(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c067b0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags,0xfffffffffffffffe);
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

longlong FUN_1803b9960(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c065f0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags,0xfffffffffffffffe);
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






// 函数: void FUN_1803b9a40(longlong *param_1)
void FUN_1803b9a40(longlong *param_1)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  puVar1 = (uint64_t *)*param_1;
  puVar2 = (int32_t *)puVar1[2];
  uStack_18 = *puVar2;
  uStack_14 = puVar2[1];
  uStack_10 = puVar2[2];
  uStack_c = puVar2[3];
  FUN_1803b4280(*puVar1,puVar1[1] + 0x1c,&uStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803b9a70(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06630;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags,0xfffffffffffffffe);
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

longlong FUN_1803b9b60(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06670;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags,0xfffffffffffffffe);
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

longlong FUN_1803b9c50(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c066b0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
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

longlong FUN_1803b9d40(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c064f0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
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

longlong FUN_1803b9e30(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06530;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
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

longlong FUN_1803b9f20(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06570;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
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



int8_t FUN_1803ba0b0(longlong param_1,uint64_t param_2,longlong *param_3)

{
  int8_t uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *(int8_t *)(*param_3 + 0x1c3a) = 0x23;
  lVar2 = *param_3;
  uVar3 = param_3[1];
  if (*(ulonglong *)(lVar2 + 0x1c30) < uVar3 + 1) {
    FUN_180639bf0(lVar2 + 0x1c20);
    lVar2 = *param_3;
    uVar3 = param_3[1];
  }
  if ((ulonglong)
      ((*(longlong *)(lVar2 + 0x1c30) - *(longlong *)(lVar2 + 0x1c28)) +
      *(longlong *)(lVar2 + 0x1c20)) <= uVar3) {
    FUN_180639bf0(lVar2 + 0x1c20,
                  (*(longlong *)(lVar2 + 0x1c28) - *(longlong *)(lVar2 + 0x1c20)) + uVar3);
    uVar3 = param_3[1];
    lVar2 = *param_3;
  }
  FUN_18063a180(lVar2 + 0x1c20,*(uint64_t *)(param_1 + 8),uVar3);
  *(uint64_t *)(*param_3 + 0x1c28) = *(uint64_t *)(*param_3 + 0x1c20);
  LOCK();
  uVar1 = *(int8_t *)(*param_3 + 0x1c41);
  *(int8_t *)(*param_3 + 0x1c41) = 1;
  UNLOCK();
  LOCK();
  *(int8_t *)(*param_3 + 0x1c40) = 1;
  UNLOCK();
  return uVar1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ba1b0(longlong *param_1)
void FUN_1803ba1b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int ***pppiVar4;
  longlong lVar5;
  char cVar6;
  int ****ppppiVar7;
  int *****pppppiVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int ****ppppiStack_68;
  uint64_t *puStack_60;
  int ****ppppiStack_58;
  uint64_t uStack_50;
  int ****ppppiStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  void *puStack_38;
  void *puStack_30;
  
  puStack_30 = (void *)0x1803ba1c1;
  FUN_1803b2400(*param_1);
  if (*(char *)param_1[1] == '\0') {
    return;
  }
  lVar5 = *param_1;
  lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x2908);
  plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x68) + 0x318);
  if ((plVar2 != (longlong *)0x0) && (cVar6 = (**(code **)(*plVar2 + 0xa0))(), cVar6 != '\0')) {
    if (*(char *)(*(longlong *)(lVar5 + 0x68) + 0x2910) == '\0') {
      iVar12 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar13 = 0;
        lVar14 = 0;
        do {
          iVar11 = 0;
          if (0 < *(int *)(lVar1 + 0x10)) {
            do {
              lVar3 = *(longlong *)(lVar5 + 0x40);
              puVar9 = (uint64_t *)
                       (lVar3 + ((ulonglong)(longlong)(iVar13 + iVar11) %
                                (ulonglong)*(uint *)(lVar5 + 0x48)) * 8);
              for (ppppiVar7 = (int ****)*puVar9; ppppiVar7 != (int ****)0x0;
                  ppppiVar7 = (int ****)ppppiVar7[2]) {
                if ((iVar12 == *(int *)ppppiVar7) && (iVar11 == *(int *)((longlong)ppppiVar7 + 4)))
                {
                  ppppiStack_68 = ppppiVar7;
                  puStack_60 = puVar9;
                  pppppiVar8 = &ppppiStack_68;
                  lVar10 = *(longlong *)(lVar5 + 0x48);
                  goto LAB_1803b1fdd;
                }
              }
              lVar10 = *(longlong *)(lVar5 + 0x48);
              uStack_50 = (uint64_t *)(lVar3 + lVar10 * 8);
              ppppiStack_58 = (int ****)*uStack_50;
              pppppiVar8 = &ppppiStack_58;
LAB_1803b1fdd:
              if ((*pppppiVar8 != *(int *****)(lVar3 + lVar10 * 8)) &&
                 (pppiVar4 = (*pppppiVar8)[1], pppiVar4 != (int ***)0x0)) {
                (*(code *)(*pppiVar4)[5])
                          (pppiVar4,*(uint64_t *)(lVar5 + 0x68),
                           (longlong)iVar11 * 0x68 +
                           *(longlong *)(lVar14 + *(longlong *)(lVar1 + 0x40)),iVar12,iVar11);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar1 + 0x10));
          }
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 1000;
          lVar14 = lVar14 + 8;
        } while (iVar12 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      puVar9 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      *puVar9 = *(uint64_t *)(lVar5 + 0x68);
      puVar9[1] = 0;
      ppppiStack_68 = (int ****)0x0;
      puStack_60 = (uint64_t *)0x7f7fffff00000000;
      ppppiStack_58 = (int ****)&ppppiStack_68;
      puStack_38 = &unknown_var_5952_ptr;
      puStack_30 = &unknown_var_5936_ptr;
      uStack_50._0_4_ = SUB84(puVar9,0);
      uStack_50._4_4_ = (int32_t)((ulonglong)puVar9 >> 0x20);
      uStack_40 = (int32_t)uStack_50;
      uStack_3c = uStack_50._4_4_;
      uStack_50 = puVar9;
      ppppiStack_48 = ppppiStack_58;
      FUN_18005c650(&ppppiStack_48);
      *(uint64_t **)(*(longlong *)(lVar5 + 0x68) + 0x2918) = puVar9;
    }
  }
  return;
}






// 函数: void FUN_1803ba220(longlong *param_1)
void FUN_1803ba220(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int **ppiVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piStack_38;
  longlong lStack_30;
  int *piStack_28;
  longlong lStack_20;
  
  lStack_30 = 0x1803ba231;
  FUN_1803b6df0(*param_1);
  lVar4 = *param_1;
  uVar8 = 0;
  uVar10 = uVar8;
  uVar11 = uVar8;
  if (0 < *(int *)(lVar4 + 0x14)) {
    do {
      uVar6 = uVar8;
      if (0 < *(int *)(lVar4 + 0x18)) {
        do {
          iVar1 = (int)uVar6;
          lVar2 = *(longlong *)(lVar4 + 0x40);
          uVar6 = (ulonglong)(longlong)((int)uVar11 + iVar1) % (ulonglong)*(uint *)(lVar4 + 0x48);
          for (piVar3 = *(int **)(lVar2 + uVar6 * 8); piVar3 != (int *)0x0;
              piVar3 = *(int **)(piVar3 + 4)) {
            if (((int)uVar10 == *piVar3) && (iVar1 == piVar3[1])) {
              lVar7 = *(longlong *)(lVar4 + 0x48);
              piStack_38 = piVar3;
              ppiVar5 = &piStack_38;
              lStack_30 = lVar2 + uVar6 * 8;
              goto LAB_1803b8932;
            }
          }
          lVar7 = *(longlong *)(lVar4 + 0x48);
          piStack_28 = *(int **)(lVar2 + lVar7 * 8);
          ppiVar5 = &piStack_28;
          lStack_20 = lVar2 + lVar7 * 8;
LAB_1803b8932:
          if ((*ppiVar5 != *(int **)(lVar2 + lVar7 * 8)) && (*(longlong *)(*ppiVar5 + 2) != 0)) {
            FUN_1803a2e70();
          }
          uVar6 = (ulonglong)(iVar1 + 1U);
        } while ((int)(iVar1 + 1U) < *(int *)(lVar4 + 0x18));
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = (ulonglong)((int)uVar11 + 1000);
    } while ((int)uVar9 < *(int *)(lVar4 + 0x14));
  }
  if (0 < *(int *)(lVar4 + 0x78)) {
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x68) + 0x3054);
    uVar10 = uVar8;
    do {
      FUN_1801fd6e0(*(uint64_t *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x68) + 0x60b20) + uVar8) +
                      8 + (longlong)iVar1 * 8),lVar4 + 0x1f0 + (longlong)(int)uVar10 * 0x1a0,
                    lVar4 + 0x188);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 8;
    } while ((int)uVar9 < *(int *)(lVar4 + 0x78));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ba280(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1803ba280(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  char *pcVar2;
  uint64_t uVar3;
  longlong lVar4;
  void *puVar5;
  uint64_t *puVar6;
  void *puVar7;
  char *pcVar8;
  void *puVar10;
  uint64_t *puVar11;
  int8_t auStack_c8 [32];
  longlong *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  char *pcVar9;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  pcVar8 = "skeleton";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  if (puVar6 != (uint64_t *)0x0) {
    do {
      pcVar8 = (char *)*puVar6;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar6[2];
      }
      if (pcVar2 == pcVar9 + -0x180a19cb7) {
        pcVar2 = pcVar2 + (longlong)pcVar8;
        if (pcVar2 <= pcVar8) {
LAB_1803ba320:
          lVar4 = *(longlong *)(param_1 + 0x28);
          lVar1 = *(longlong *)(lVar4 + 0x268);
          if (lVar1 == 0) {
            puStack_98 = &unknown_var_3480_ptr;
            puStack_90 = auStack_80;
            uStack_88 = 0;
            auStack_80[0] = 0;
            pcVar8 = "skeleton_model";
            do {
              pcVar9 = pcVar8;
              pcVar8 = pcVar9 + 1;
            } while (*pcVar8 != '\0');
            for (puVar11 = (uint64_t *)puVar6[8]; puVar11 != (uint64_t *)0x0;
                puVar11 = (uint64_t *)puVar11[6]) {
              pcVar8 = (char *)*puVar11;
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x180d48d24;
                pcVar2 = (char *)0x0;
              }
              else {
                pcVar2 = (char *)puVar11[2];
              }
              if (pcVar2 == pcVar9 + -0x180a19ca7) {
                pcVar2 = pcVar8 + (longlong)pcVar2;
                if (pcVar2 <= pcVar8) {
LAB_1803ba454:
                  lVar4 = 0x180d48d24;
                  if (puVar11[1] != 0) {
                    lVar4 = puVar11[1];
                  }
                  FUN_180049bf0(&puStack_98,lVar4);
                  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x240,0x10,3);
                  uVar3 = FUN_1802fb490(uVar3);
                  FUN_180056f10(*(longlong *)(param_1 + 0x28) + 0x260,uVar3);
                  FUN_1802fdb10(*(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x260));
                  break;
                }
                lVar4 = (longlong)&unknown_var_2344_ptr - (longlong)pcVar8;
                while (*pcVar8 == pcVar8[lVar4]) {
                  pcVar8 = pcVar8 + 1;
                  if (pcVar2 <= pcVar8) goto LAB_1803ba454;
                }
              }
            }
            puStack_98 = &unknown_var_720_ptr;
          }
          else if (*(longlong *)(lVar1 + 0x260) == 0) {
            puVar10 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
              puVar10 = *(void **)(lVar1 + 0x290);
            }
            if (*(longlong *)(lVar4 + 0x20) == 0) {
              puVar7 = &unknown_var_1344_ptr;
            }
            else {
              puVar5 = *(void **)(*(longlong *)(lVar4 + 0x20) + 0x4e0);
              puVar7 = &system_buffer_ptr;
              if (puVar5 != (void *)0x0) {
                puVar7 = puVar5;
              }
            }
            puVar5 = &system_buffer_ptr;
            if (*(void **)(lVar4 + 0x290) != (void *)0x0) {
              puVar5 = *(void **)(lVar4 + 0x290);
            }
            FUN_180627020(&unknown_var_1248_ptr,puVar5,puVar7,puVar10);
            FUN_1802ed990(*(uint64_t *)(param_1 + 0x28),1);
          }
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x260);
          if (lVar4 != 0) {
            FUN_1802ff220(lVar4,puVar6,param_3,param_1);
            lVar4 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x208) == 0) {
              plStack_a8 = *(longlong **)(lVar4 + 0x260);
              *(uint64_t *)(lVar4 + 0x260) = 0;
              if (plStack_a8 != (longlong *)0x0) {
                (**(code **)(*plStack_a8 + 0x38))();
              }
            }
          }
          break;
        }
        lVar4 = (longlong)&unknown_var_2360_ptr - (longlong)pcVar8;
        while (*pcVar8 == pcVar8[lVar4]) {
          pcVar8 = pcVar8 + 1;
          if (pcVar2 <= pcVar8) goto LAB_1803ba320;
        }
      }
      puVar6 = (uint64_t *)puVar6[0xb];
    } while (puVar6 != (uint64_t *)0x0);
  }
  FUN_1802ee990(*(uint64_t *)(param_1 + 0x28),0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





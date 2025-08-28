#include "TaleWorlds.Native.Split.h"

// 99_part_06_part014.c - 14 个函数

// 函数: void FUN_1803b13f0(longlong param_1)
void FUN_1803b13f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(longlong *)(param_1 + 0x48)];
  while (lVar4 != lVar2) {
    if ((void *)**(uint64_t **)(lVar4 + 8) != &unknown_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(lVar4 + 8) + 0x40))();
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  return;
}






// 函数: void FUN_1803b143a(void)
void FUN_1803b143a(void)

{
  longlong *plVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  do {
    if ((void *)**(uint64_t **)(unaff_RDI + 8) != &unknown_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(unaff_RDI + 8) + 0x40))();
    }
    unaff_RDI = *(longlong *)(unaff_RDI + 0x10);
    while (unaff_RDI == 0) {
      plVar1 = (longlong *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = *plVar1;
    }
  } while (unaff_RDI != unaff_RSI);
  return;
}






// 函数: void FUN_1803b1487(void)
void FUN_1803b1487(void)

{
  return;
}






// 函数: void FUN_1803b1497(void)
void FUN_1803b1497(void)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  do {
    (**(code **)(in_RAX + 0x40))();
    do {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x10);
      while (unaff_RDI == 0) {
        plVar1 = (longlong *)(unaff_RBX + 8);
        unaff_RBX = unaff_RBX + 8;
        unaff_RDI = *plVar1;
      }
      if (unaff_RDI == unaff_RSI) {
        return;
      }
      in_RAX = **(longlong **)(unaff_RDI + 8);
    } while (in_RAX == unaff_RBP);
  } while( true );
}






// 函数: void FUN_1803b14a0(longlong param_1)
void FUN_1803b14a0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int *piStack_38;
  longlong lStack_30;
  int *piStack_28;
  longlong lStack_20;
  
  puVar11 = (uint64_t *)0x0;
  puVar9 = puVar11;
  puVar10 = puVar11;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      puVar7 = puVar11;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          iVar3 = (int)puVar7;
          lVar1 = *(longlong *)(param_1 + 0x40);
          uVar5 = (ulonglong)(longlong)((int)puVar10 + iVar3) % (ulonglong)*(uint *)(param_1 + 0x48)
          ;
          for (piVar2 = *(int **)(lVar1 + uVar5 * 8); piVar2 != (int *)0x0;
              piVar2 = *(int **)(piVar2 + 4)) {
            if (((int)puVar9 == *piVar2) && (iVar3 == piVar2[1])) {
              lVar6 = *(longlong *)(param_1 + 0x48);
              piStack_38 = piVar2;
              ppiVar4 = &piStack_38;
              lStack_30 = lVar1 + uVar5 * 8;
              goto LAB_1803b153e;
            }
          }
          lVar6 = *(longlong *)(param_1 + 0x48);
          piStack_28 = *(int **)(lVar1 + lVar6 * 8);
          ppiVar4 = &piStack_28;
          lStack_20 = lVar1 + lVar6 * 8;
LAB_1803b153e:
          puVar7 = puVar11;
          if (*ppiVar4 != *(int **)(lVar1 + lVar6 * 8)) {
            puVar7 = *(uint64_t **)(*ppiVar4 + 2);
          }
          if ((void *)*puVar7 == &unknown_var_8576_ptr) {
            if (puVar7[0x10f] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puVar7[0x10f] = 0;
          }
          else {
            (**(code **)((void *)*puVar7 + 0x48))(puVar7);
          }
          puVar7 = (uint64_t *)(ulonglong)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(param_1 + 0x18));
      }
      uVar8 = (int)puVar9 + 1;
      puVar9 = (uint64_t *)(ulonglong)uVar8;
      puVar10 = (uint64_t *)(ulonglong)((int)puVar10 + 1000);
    } while ((int)uVar8 < *(int *)(param_1 + 0x14));
  }
  return;
}






// 函数: void FUN_1803b14bc(void)
void FUN_1803b14bc(void)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong unaff_RBP;
  int unaff_ESI;
  ulonglong uVar7;
  ulonglong uVar8;
  uint64_t *unaff_R15;
  int *piStackX_20;
  int *in_stack_00000030;
  longlong in_stack_00000038;
  
  uVar8 = (ulonglong)unaff_R15 & 0xffffffff;
  do {
    uVar7 = (ulonglong)unaff_R15 & 0xffffffff;
    if ((int)unaff_R15 < *(int *)(unaff_RBP + 0x18)) {
      do {
        iVar3 = (int)uVar7;
        lVar1 = *(longlong *)(unaff_RBP + 0x40);
        for (piVar2 = *(int **)(lVar1 + ((ulonglong)(longlong)((int)uVar8 + iVar3) %
                                        (ulonglong)*(uint *)(unaff_RBP + 0x48)) * 8);
            piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
          if ((unaff_ESI == *piVar2) && (iVar3 == piVar2[1])) {
            lVar5 = *(longlong *)(unaff_RBP + 0x48);
            piStackX_20 = piVar2;
            ppiVar4 = &piStackX_20;
            goto LAB_1803b153e;
          }
        }
        lVar5 = *(longlong *)(unaff_RBP + 0x48);
        in_stack_00000030 = *(int **)(lVar1 + lVar5 * 8);
        ppiVar4 = &stack0x00000030;
        in_stack_00000038 = lVar1 + lVar5 * 8;
LAB_1803b153e:
        puVar6 = unaff_R15;
        if (*ppiVar4 != *(int **)(lVar1 + lVar5 * 8)) {
          puVar6 = *(uint64_t **)(*ppiVar4 + 2);
        }
        if ((void *)*puVar6 == &unknown_var_8576_ptr) {
          if (puVar6[0x10f] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar6[0x10f] = unaff_R15;
        }
        else {
          (**(code **)((void *)*puVar6 + 0x48))(puVar6);
        }
        uVar7 = (ulonglong)(iVar3 + 1U);
      } while ((int)(iVar3 + 1U) < *(int *)(unaff_RBP + 0x18));
    }
    unaff_ESI = unaff_ESI + 1;
    uVar8 = (ulonglong)((int)uVar8 + 1000);
    if (*(int *)(unaff_RBP + 0x14) <= unaff_ESI) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803b15ba(void)
void FUN_1803b15ba(void)

{
  return;
}






// 函数: void FUN_1803b15c3(uint64_t param_1,code *param_2)
void FUN_1803b15c3(uint64_t param_1,code *param_2)

{
  longlong lVar1;
  int *piVar2;
  int **ppiVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  uint uVar5;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  int unaff_R14D;
  longlong *unaff_R15;
  int *piStackX_20;
  int *in_stack_00000030;
  longlong in_stack_00000038;
  
code_r0x0001803b15c3:
  (*param_2)(unaff_RBX);
  do {
    uVar5 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar5;
    if (*(int *)(unaff_RBP + 0x18) <= (int)uVar5) {
      do {
        unaff_ESI = unaff_ESI + 1;
        unaff_R14D = unaff_R14D + 1000;
        if (*(int *)(unaff_RBP + 0x14) <= unaff_ESI) {
          return;
        }
        unaff_RDI = (ulonglong)unaff_R15 & 0xffffffff;
      } while (*(int *)(unaff_RBP + 0x18) <= (int)unaff_R15);
    }
    lVar1 = *(longlong *)(unaff_RBP + 0x40);
    for (piVar2 = *(int **)(lVar1 + ((ulonglong)(longlong)(unaff_R14D + (int)unaff_RDI) %
                                    (ulonglong)*(uint *)(unaff_RBP + 0x48)) * 8);
        piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
      if ((unaff_ESI == *piVar2) && ((int)unaff_RDI == piVar2[1])) {
        lVar4 = *(longlong *)(unaff_RBP + 0x48);
        piStackX_20 = piVar2;
        ppiVar3 = &piStackX_20;
        goto LAB_1803b153e;
      }
    }
    lVar4 = *(longlong *)(unaff_RBP + 0x48);
    in_stack_00000030 = *(int **)(lVar1 + lVar4 * 8);
    ppiVar3 = &stack0x00000030;
    in_stack_00000038 = lVar1 + lVar4 * 8;
LAB_1803b153e:
    unaff_RBX = unaff_R15;
    if (*ppiVar3 != *(int **)(lVar1 + lVar4 * 8)) {
      unaff_RBX = *(longlong **)(*ppiVar3 + 2);
    }
    param_2 = *(code **)(*unaff_RBX + 0x48);
    if (*unaff_RBX != unaff_R12) goto code_r0x0001803b15c3;
    if (unaff_RBX[0x10f] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    unaff_RBX[0x10f] = (longlong)unaff_R15;
  } while( true );
}






// 函数: void FUN_1803b15d0(longlong param_1,int param_2,int param_3,float param_4,longlong param_5)
void FUN_1803b15d0(longlong param_1,int param_2,int param_3,float param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  float fVar11;
  float fVar12;
  char cStackX_10;
  
  cVar6 = (char)(int)param_4;
  if (cVar6 < '\x02') {
    cVar6 = '\x02';
  }
  else if ('\n' < cVar6) {
    cVar6 = '\n';
  }
  iVar1 = param_3;
  lVar2 = FUN_180195330(param_1);
  iVar7 = param_2 + -1;
  if ((((iVar7 < 0) || (*(int *)(param_1 + 0x14) <= iVar7)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x18) <= param_3)) {
    cVar8 = -1;
  }
  else {
    cVar8 = *(char *)((param_3 * 0x10 + iVar7) + param_5);
  }
  iVar5 = iVar1 + -1;
  if (((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) ||
     ((iVar5 < 0 || (*(int *)(param_1 + 0x18) <= iVar5)))) {
    cVar9 = -1;
  }
  else {
    cVar9 = *(char *)((iVar5 * 0x10 + param_2) + param_5);
  }
  iVar4 = param_2 + 1;
  if (((iVar4 < 0) || (*(int *)(param_1 + 0x14) <= iVar4)) ||
     ((param_3 < 0 || (*(int *)(param_1 + 0x18) <= param_3)))) {
    cStackX_10 = -1;
  }
  else {
    cStackX_10 = *(char *)((param_3 * 0x10 + iVar4) + param_5);
  }
  iVar1 = iVar1 + 1;
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) || (iVar1 < 0)) ||
     (*(int *)(param_1 + 0x18) <= iVar1)) {
    cVar10 = -1;
  }
  else {
    cVar10 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
  }
  if (cVar8 != -1) {
    if ((int)cVar8 - (int)cVar6 < 3) {
      if ((int)cVar8 - (int)cVar6 < -2) {
        FUN_1803b15d0(param_1,iVar7);
        iVar1 = param_2 + -1;
        if (((iVar1 < 0) || (*(int *)(param_1 + 0x14) <= iVar1)) ||
           ((param_3 < 0 || (*(int *)(param_1 + 0x18) <= param_3)))) {
          cVar8 = -1;
        }
        else {
          cVar8 = *(char *)((param_3 * 0x10 + iVar1) + param_5);
        }
        iVar5 = param_3 + -1;
      }
    }
    else {
      cVar6 = cVar8 + -2;
    }
  }
  if (cVar9 != -1) {
    if ((int)cVar9 - (int)cVar6 < 3) {
      if ((int)cVar9 - (int)cVar6 < -2) {
        FUN_1803b15d0(param_1,param_2,iVar5,param_2 + -1,param_5);
        if (((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) ||
           ((iVar1 = param_3 + -1, iVar1 < 0 || (*(int *)(param_1 + 0x18) <= iVar1)))) {
          cVar9 = -1;
        }
        else {
          cVar9 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
        }
      }
    }
    else {
      cVar6 = cVar9 + -2;
    }
  }
  if ((char)(int)param_4 != cVar6) {
    param_4 = (float)(int)cVar6;
  }
  iVar1 = (int)param_4;
  if (*(int *)(lVar2 + 0x20) != iVar1) {
    *(int *)(lVar2 + 0x20) = iVar1;
    *(float *)(lVar2 + 0x388) = (float)(uint)(1 << ((byte)iVar1 & 0x1f));
    *(float *)(lVar2 + 0x3a0) =
         (float)(1 << (10 - (byte)iVar1 & 0x1f)) * *(float *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  }
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x14))) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x18))) {
    *(char *)((param_3 * 0x10 + param_2) + param_5) = cVar6;
  }
  if ((cVar10 != -1) && ((int)cVar10 - (int)cVar6 < -2)) {
    iVar1 = param_3 + 1;
    FUN_1803b15d0(param_1,param_2,iVar1);
    if (((param_2 < 0) || ((*(int *)(param_1 + 0x14) <= param_2 || (iVar1 < 0)))) ||
       (*(int *)(param_1 + 0x18) <= iVar1)) {
      cVar10 = -1;
    }
    else {
      cVar10 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
    }
  }
  if ((cStackX_10 != -1) && ((int)cStackX_10 - (int)cVar6 < -2)) {
    FUN_1803b15d0(param_1,param_2 + 1,param_3);
    iVar1 = param_2 + 1;
    if ((iVar1 < 0) ||
       (((*(int *)(param_1 + 0x14) <= iVar1 || (param_3 < 0)) ||
        (*(int *)(param_1 + 0x18) <= param_3)))) {
      cStackX_10 = -1;
    }
    else {
      cStackX_10 = *(char *)((param_3 * 0x10 + iVar1) + param_5);
    }
  }
  iVar1 = (int)cVar6;
  if (cVar8 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cVar8);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x390) = fVar11;
  if (cVar9 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cVar9);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x394) = fVar11;
  if (cStackX_10 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cStackX_10);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x398) = fVar11;
  fVar11 = 0.0;
  if (((cVar10 != -1) && (fVar12 = (float)(iVar1 - cVar10), 0.0 <= fVar12)) &&
     (fVar11 = fVar12, 2.0 <= fVar12)) {
    fVar11 = 2.0;
  }
  *(float *)(lVar2 + 0x39c) = fVar11;
  if (0 < param_2) {
    if (param_2 == *(int *)(param_1 + 0x14) + -1) {
      *(int32_t *)(lVar2 + 0x398) = 0;
    }
    lVar3 = FUN_180195330(param_1,param_2 + -1,param_3);
    *(int32_t *)(lVar3 + 0x398) = extraout_XMM0_Da;
  }
  if (0 < param_3) {
    if (param_3 == *(int *)(param_1 + 0x18) + -1) {
      *(int32_t *)(lVar2 + 0x39c) = 0;
    }
    lVar3 = FUN_180195330(param_1,param_2,param_3 + -1);
    *(int32_t *)(lVar3 + 0x39c) = extraout_XMM0_Da_00;
  }
  if (param_2 < *(int *)(param_1 + 0x14) + -1) {
    if (param_2 == 0) {
      *(int32_t *)(lVar2 + 0x390) = 0;
    }
    lVar3 = FUN_180195330(param_1,param_2 + 1,param_3);
    *(int32_t *)(lVar3 + 0x390) = extraout_XMM0_Da_01;
  }
  if (param_3 < *(int *)(param_1 + 0x18) + -1) {
    if (param_3 == 0) {
      *(int32_t *)(lVar2 + 0x394) = 0;
    }
    lVar2 = FUN_180195330(param_1,param_2,param_3 + 1);
    *(int32_t *)(lVar2 + 0x394) = extraout_XMM0_Da_02;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b1ad0(longlong param_1,longlong param_2)
void FUN_1803b1ad0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int8_t auStack_178 [32];
  longlong *plStack_158;
  int32_t uStack_150;
  longlong *plStack_148;
  void *puStack_108;
  longlong lStack_100;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  uStack_150 = 0;
  *(longlong *)(param_1 + 0x68) = param_2;
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_2 + 0x60a38);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0x60a3c);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x60a40);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(param_2 + 0x60a50);
  *(int32_t *)(param_1 + 0x154) = *(int32_t *)(param_2 + 0x60a58);
  *(int32_t *)(param_1 + 0x158) = *(int32_t *)(param_2 + 0x60a5c);
  iVar1 = *(int *)(param_2 + 0x60a14);
  *(bool *)(param_1 + 0x1c43) = iVar1 != 0;
  iVar6 = 1;
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x60a28) == 0) {
      uVar3 = FUN_1800bd5c0();
      FUN_180056f10(param_1 + 0x1c48,uVar3);
    }
    else {
      plVar4 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_158,param_2 + 0x60a18,1);
      lVar2 = *plVar4;
      *plVar4 = 0;
      plStack_148 = *(longlong **)(param_1 + 0x1c48);
      *(longlong *)(param_1 + 0x1c48) = lVar2;
      if (plStack_148 != (longlong *)0x0) {
        (**(code **)(*plStack_148 + 0x38))();
      }
      if (plStack_158 != (longlong *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    uVar3 = FUN_18062b420(_DAT_180c8ed18,0x800,3);
    *(uint64_t *)(param_1 + 0x1c58) = uVar3;
                    // WARNING: Subroutine does not return
    memset(uVar3,0,0x800);
  }
  *(uint64_t *)(param_1 + 0x1c58) = 0;
  plVar4 = (longlong *)FUN_1800bd5c0();
  if (plVar4 != (longlong *)0x0) {
    plStack_158 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_158 = *(longlong **)(param_1 + 0x1c48);
  *(longlong **)(param_1 + 0x1c48) = plVar4;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  plVar4 = (longlong *)FUN_1800bd5c0();
  if (plVar4 != (longlong *)0x0) {
    plStack_158 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_158 = *(longlong **)(param_1 + 0x1c50);
  *(longlong **)(param_1 + 0x1c50) = plVar4;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  FUN_1803b1050(param_1);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar5 = iVar6;
  if ((0 < iVar1) && (iVar5 = iVar1, 0x10 < iVar1)) {
    iVar5 = 0x10;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((0 < iVar1) && (iVar6 = iVar1, 0x10 < iVar1)) {
    iVar6 = 0x10;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  fVar7 = *(float *)(param_1 + 0x1c);
  if (*(float *)(param_1 + 0x1c) <= 1.0) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x1c) = fVar7;
  *(float *)(param_1 + 0x28) = fVar7 * 0.0009765625;
  *(float *)(param_1 + 0x20) = (float)iVar5 * fVar7;
  *(float *)(param_1 + 0x24) = (float)iVar6 * fVar7;
  func_0x0001803b0980(param_1);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(param_2 + 0x60a54);
  FUN_180627ae0(&puStack_108,param_2 + 0x27c8);
  uStack_150 = 1;
  if (*(longlong *)(_DAT_180c86930 + 0xc08) == 0) {
    FUN_1800b8090();
  }
  uStack_150 = 0;
  puStack_108 = &unknown_var_3456_ptr;
  if (lStack_100 == 0) {
    lStack_100 = 0;
    uStack_f0 = 0;
    puStack_108 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b1ef0(longlong param_1)
void FUN_1803b1ef0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int ***pppiVar4;
  char cVar5;
  int ****ppppiVar6;
  int *****pppppiVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int ****ppppiStack_68;
  uint64_t *puStack_60;
  int ****ppppiStack_58;
  uint64_t uStack_50;
  int ****ppppiStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  void *puStack_38;
  void *puStack_30;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x2908);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x318);
  if ((plVar2 != (longlong *)0x0) && (cVar5 = (**(code **)(*plVar2 + 0xa0))(), cVar5 != '\0')) {
    if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x2910) == '\0') {
      iVar11 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar12 = 0;
        lVar13 = 0;
        do {
          iVar10 = 0;
          if (0 < *(int *)(lVar1 + 0x10)) {
            do {
              lVar3 = *(longlong *)(param_1 + 0x40);
              puVar8 = (uint64_t *)
                       (lVar3 + ((ulonglong)(longlong)(iVar12 + iVar10) %
                                (ulonglong)*(uint *)(param_1 + 0x48)) * 8);
              for (ppppiVar6 = (int ****)*puVar8; ppppiVar6 != (int ****)0x0;
                  ppppiVar6 = (int ****)ppppiVar6[2]) {
                if ((iVar11 == *(int *)ppppiVar6) && (iVar10 == *(int *)((longlong)ppppiVar6 + 4)))
                {
                  ppppiStack_68 = ppppiVar6;
                  puStack_60 = puVar8;
                  pppppiVar7 = &ppppiStack_68;
                  lVar9 = *(longlong *)(param_1 + 0x48);
                  goto LAB_1803b1fdd;
                }
              }
              lVar9 = *(longlong *)(param_1 + 0x48);
              uStack_50 = (uint64_t *)(lVar3 + lVar9 * 8);
              ppppiStack_58 = (int ****)*uStack_50;
              pppppiVar7 = &ppppiStack_58;
LAB_1803b1fdd:
              if ((*pppppiVar7 != *(int *****)(lVar3 + lVar9 * 8)) &&
                 (pppiVar4 = (*pppppiVar7)[1], pppiVar4 != (int ***)0x0)) {
                (*(code *)(*pppiVar4)[5])
                          (pppiVar4,*(uint64_t *)(param_1 + 0x68),
                           (longlong)iVar10 * 0x68 +
                           *(longlong *)(lVar13 + *(longlong *)(lVar1 + 0x40)),iVar11,iVar10);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar1 + 0x10));
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 1000;
          lVar13 = lVar13 + 8;
        } while (iVar11 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      puVar8 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      *puVar8 = *(uint64_t *)(param_1 + 0x68);
      puVar8[1] = 0;
      ppppiStack_68 = (int ****)0x0;
      puStack_60 = (uint64_t *)0x7f7fffff00000000;
      ppppiStack_58 = (int ****)&ppppiStack_68;
      puStack_38 = &unknown_var_5952_ptr;
      puStack_30 = &unknown_var_5936_ptr;
      uStack_50._0_4_ = SUB84(puVar8,0);
      uStack_50._4_4_ = (int32_t)((ulonglong)puVar8 >> 0x20);
      uStack_40 = (int32_t)uStack_50;
      uStack_3c = uStack_50._4_4_;
      uStack_50 = puVar8;
      ppppiStack_48 = ppppiStack_58;
      FUN_18005c650(&ppppiStack_48);
      *(uint64_t **)(*(longlong *)(param_1 + 0x68) + 0x2918) = puVar8;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b20e0(longlong param_1)
void FUN_1803b20e0(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar4 = (int)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x60b28) -
                *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x60b20) >> 3);
  *(int *)(param_1 + 0x78) = iVar4;
  iVar6 = 0;
  if (0 < iVar4) {
    plVar5 = (longlong *)(param_1 + 0x80);
    do {
      puVar1 = (uint64_t *)*plVar5;
      if (puVar1 != (uint64_t *)0x0) {
        lVar2 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar2);
        }
      }
      *plVar5 = 0;
      plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x158,8,3);
      *plVar3 = (longlong)&unknown_var_7192_ptr;
      FUN_1808fc838(plVar3 + 1,8,7,&SUB_18005d5f0,FUN_180045af0);
      FUN_180078550(plVar3);
      *plVar5 = (longlong)plVar3;
      (**(code **)(*plVar3 + 8))
                (plVar3,*(uint64_t *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x60b20) +
                            (-0x80 - param_1) + (longlong)plVar5) + 8 +
                         (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 0x3054) * 8),iVar6);
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x78));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b2230(longlong param_1)
void FUN_1803b2230(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint64_t uVar5;
  longlong lVar6;
  int *piVar7;
  int **ppiVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int *piStack_50;
  uint64_t *puStack_48;
  int *piStack_40;
  uint64_t *puStack_38;
  
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  lVar6 = FUN_1803a5e10(uVar5,&system_data_02f0,*(int32_t *)(param_1 + 0x28));
  lVar11 = *(longlong *)(param_1 + 0x68);
  if ((*(char *)(lVar11 + 0x2910) == '\0') && (iVar12 = 0, 0 < *(int *)(param_1 + 0x14))) {
    lVar11 = 0;
    do {
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x40);
          puVar1 = (uint64_t *)
                   (lVar3 + ((ulonglong)(longlong)(iVar12 * 1000 + iVar10) %
                            (ulonglong)*(uint *)(param_1 + 0x48)) * 8);
          for (piVar7 = (int *)*puVar1; piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4)) {
            if ((iVar12 == *piVar7) && (iVar10 == piVar7[1])) {
              piStack_50 = piVar7;
              puStack_48 = puVar1;
              ppiVar8 = &piStack_50;
              lVar9 = *(longlong *)(param_1 + 0x48);
              goto LAB_1803b2320;
            }
          }
          lVar9 = *(longlong *)(param_1 + 0x48);
          puStack_38 = (uint64_t *)(lVar3 + lVar9 * 8);
          piStack_40 = (int *)*puStack_38;
          ppiVar8 = &piStack_40;
LAB_1803b2320:
          if ((*ppiVar8 != *(int **)(lVar3 + lVar9 * 8)) &&
             (lVar3 = *(longlong *)(*ppiVar8 + 2), lVar3 != 0)) {
            iVar2 = *(int *)(lVar3 + 0x28);
            uVar4 = 1 << ((byte)(int)(float)iVar2 & 0x1f);
            FUN_1803a4b80((longlong)iVar10 * 0x68 +
                          *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar11),
                          *(uint64_t *)(param_1 + 0x68),iVar2,uVar4 + 1,
                          *(float *)(param_1 + 0x1c) / (float)uVar4);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x18));
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar12 < *(int *)(param_1 + 0x14));
    lVar11 = *(longlong *)(param_1 + 0x68);
  }
  lVar3 = *(longlong *)(lVar11 + 0x2908);
  if (lVar3 != 0) {
    FUN_1803a5ff0(lVar3);
    if (*(longlong **)(lVar3 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  *(longlong *)(lVar11 + 0x2908) = lVar6;
  return;
}






// 函数: void FUN_1803b2400(longlong param_1)
void FUN_1803b2400(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int **ppiVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piStack_28;
  longlong lStack_20;
  int *piStack_18;
  longlong lStack_10;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar8 = 0;
    iVar12 = 0;
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          lVar11 = *(longlong *)(param_1 + 0x40);
          uVar6 = (ulonglong)(longlong)(iVar12 + iVar7) % (ulonglong)*(uint *)(param_1 + 0x48);
          for (piVar1 = *(int **)(lVar11 + uVar6 * 8); piVar1 != (int *)0x0;
              piVar1 = *(int **)(piVar1 + 4)) {
            if ((iVar9 == *piVar1) && (iVar7 == piVar1[1])) {
              lVar5 = *(longlong *)(param_1 + 0x48);
              piStack_28 = piVar1;
              ppiVar4 = &piStack_28;
              lStack_20 = lVar11 + uVar6 * 8;
              goto LAB_1803b2492;
            }
          }
          lVar5 = *(longlong *)(param_1 + 0x48);
          piStack_18 = *(int **)(lVar11 + lVar5 * 8);
          ppiVar4 = &piStack_18;
          lStack_10 = lVar11 + lVar5 * 8;
LAB_1803b2492:
          if ((*ppiVar4 != *(int **)(lVar11 + lVar5 * 8)) &&
             (plVar2 = *(longlong **)(*ppiVar4 + 2), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x20))
                      (plVar2,*(longlong *)(param_1 + 0x68),
                       (longlong)iVar7 * 0x68 +
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x2908) + 0x40)
                        + lVar8));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x18));
      }
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + 1000;
      lVar8 = lVar8 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x14));
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x2908);
  *(int32_t *)(lVar8 + 0x34) = 0x7f7fffff;
  *(int32_t *)(lVar8 + 0x38) = 0xff7fffff;
  if (0 < (int)*(uint *)(lVar8 + 0xc)) {
    lVar11 = 0;
    uVar6 = (ulonglong)*(uint *)(lVar8 + 0xc);
    do {
      if (0 < (int)*(uint *)(lVar8 + 0x10)) {
        lVar5 = 0;
        uVar10 = (ulonglong)*(uint *)(lVar8 + 0x10);
        fVar15 = *(float *)(lVar8 + 0x34);
        fVar16 = *(float *)(lVar8 + 0x38);
        do {
          lVar3 = *(longlong *)(lVar11 + *(longlong *)(lVar8 + 0x40));
          fVar13 = *(float *)(lVar5 + 0x14 + lVar3);
          if (fVar15 <= fVar13) {
            fVar13 = fVar15;
          }
          *(float *)(lVar8 + 0x34) = fVar13;
          fVar14 = *(float *)(lVar5 + 0x18 + lVar3);
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar8 + 0x38) = fVar14;
          uVar10 = uVar10 - 1;
          lVar5 = lVar5 + 0x68;
          fVar15 = fVar13;
          fVar16 = fVar14;
        } while (uVar10 != 0);
      }
      lVar11 = lVar11 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}







#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part330.c - 4 个函数

// 函数: void FUN_18084cae7(uint64_t param_1,uint64_t param_2,longlong *param_3)
void FUN_18084cae7(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  uint64_t *unaff_R15;
  
  do {
    if (param_3 == unaff_RDI) break;
    plVar1 = (longlong *)*param_3;
    *(longlong **)param_3[1] = plVar1;
    *(longlong *)(*param_3 + 8) = param_3[1];
    param_3[1] = (longlong)param_3;
    *param_3 = (longlong)param_3;
    param_3 = plVar1;
  } while (plVar1 != unaff_RDI);
  *(longlong *)unaff_RDI[1] = *unaff_RDI;
  *(longlong *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (longlong)unaff_RDI;
  *unaff_RDI = (longlong)unaff_RDI;
  FUN_18084c5a0(unaff_R15 + 9);
  FUN_18084c5a0(unaff_R15 + 7);
  FUN_18084c220(unaff_R15 + 5);
  *(int32_t *)(unaff_R15 + 1) = 0xdeadf00d;
  *unaff_R15 = &UNK_180984ab8;
  return;
}



uint64_t * FUN_18084cb70(uint64_t *param_1,ulonglong param_2)

{
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



uint64_t FUN_18084cbb0(uint64_t param_1,ulonglong param_2)

{
  FUN_18084c730();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



int32_t FUN_18084cbf0(longlong param_1,uint param_2,double param_3,int *param_4)

{
  int8_t *puVar1;
  uint uVar2;
  int32_t *puVar3;
  uint uVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  int8_t auStack_58 [16];
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  if (param_4 != (int *)0x0) {
    puVar3 = (int32_t *)FUN_18084da10();
    FUN_180847820();
    iVar10 = 0;
    puVar1 = *(int8_t **)(param_1 + 0x88);
    uStack_48 = 0x400000004;
    uStack_3c = 0x42f00000;
    uStack_40 = *puVar3;
    puVar6 = puVar1;
    puVar5 = (int8_t *)0x0;
    while (((puVar7 = puVar6, puVar6 = (int8_t *)0x0, iVar11 = 0, puVar1 <= puVar7 &&
            (puVar7 < puVar1 + (longlong)*(int *)(param_1 + 0x90) * 0x20)) &&
           (puVar6 = puVar7, iVar11 = iVar10, *(uint *)(puVar7 + 0x18) <= param_2))) {
      iVar10 = iVar10 + 1;
      puVar5 = puVar7;
      puVar6 = puVar7 + 0x20;
    }
    if ((puVar5 == (int8_t *)0x0) &&
       ((*(int *)(param_1 + 0x90) == 0 || (puVar5 = puVar6, puVar6 == (int8_t *)0x0)))) {
      puVar5 = auStack_58;
    }
    iVar10 = 0;
    if (0.0 < param_3) {
      do {
        puVar7 = (int8_t *)0x0;
        dVar12 = 2880000.0 /
                 (((double)*(float *)(puVar5 + 0x1c) * (double)*(int *)(puVar5 + 0x10)) /
                 (double)*(int *)(puVar5 + 0x14));
        uVar8 = (uint)(longlong)(dVar12 * param_3);
        uVar4 = uVar8;
        if (puVar6 != (int8_t *)0x0) {
          uVar4 = *(int *)(puVar6 + 0x18) - param_2;
          param_2 = *(uint *)(puVar6 + 0x18);
          iVar11 = iVar11 + 1;
          if (iVar11 < *(int *)(param_1 + 0x90)) {
            puVar7 = puVar1 + (longlong)iVar11 * 0x20;
          }
        }
        uVar9 = uVar8;
        uVar2 = 0;
        if (uVar4 < uVar8) {
          uVar9 = uVar4;
          uVar2 = uVar8 - uVar4;
        }
        iVar10 = iVar10 + uVar9;
        param_3 = (double)uVar2 / dVar12;
        puVar5 = puVar6;
        puVar6 = puVar7;
      } while (0.0 < param_3);
    }
    *param_4 = iVar10;
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_18084cc23(void)

{
  int8_t *puVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_RBP;
  int8_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *unaff_R12;
  int iVar10;
  uint unaff_R15D;
  double dVar11;
  double unaff_XMM6_Qa;
  int8_t auStackX_20 [8];
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000098;
  int32_t uStack000000000000009c;
  
  uStack0000000000000098 = 4;
  uStack000000000000009c = 4;
  FUN_18084da10();
  FUN_180847820();
  iVar9 = 0;
  puVar1 = *(int8_t **)(unaff_RBP + 0x88);
  uStack000000000000003c = 0x42f00000;
  puVar5 = puVar1;
  puVar4 = (int8_t *)0x0;
  while (((puVar6 = puVar5, puVar5 = (int8_t *)0x0, iVar10 = 0, puVar1 <= puVar6 &&
          (puVar6 < puVar1 + (longlong)*(int *)(unaff_RBP + 0x90) * 0x20)) &&
         (puVar5 = puVar6, iVar10 = iVar9, *(uint *)(puVar6 + 0x18) <= unaff_R15D))) {
    iVar9 = iVar9 + 1;
    puVar4 = puVar6;
    puVar5 = puVar6 + 0x20;
  }
  if ((puVar4 == (int8_t *)0x0) &&
     ((*(int *)(unaff_RBP + 0x90) == 0 || (puVar4 = puVar5, puVar5 == (int8_t *)0x0)))) {
    puVar4 = auStackX_20;
  }
  iVar9 = 0;
  if (0.0 < unaff_XMM6_Qa) {
    do {
      puVar6 = (int8_t *)0x0;
      dVar11 = 2880000.0 /
               (((double)*(float *)(puVar4 + 0x1c) * (double)*(int *)(puVar4 + 0x10)) /
               (double)*(int *)(puVar4 + 0x14));
      uVar7 = (uint)(longlong)(dVar11 * unaff_XMM6_Qa);
      uVar3 = uVar7;
      if (puVar5 != (int8_t *)0x0) {
        uVar3 = *(int *)(puVar5 + 0x18) - unaff_R15D;
        unaff_R15D = *(uint *)(puVar5 + 0x18);
        iVar10 = iVar10 + 1;
        if (iVar10 < *(int *)(unaff_RBP + 0x90)) {
          puVar6 = puVar1 + (longlong)iVar10 * 0x20;
        }
      }
      uVar8 = uVar7;
      uVar2 = 0;
      if (uVar3 < uVar7) {
        uVar8 = uVar3;
        uVar2 = uVar7 - uVar3;
      }
      iVar9 = iVar9 + uVar8;
      unaff_XMM6_Qa = (double)uVar2 / dVar11;
      puVar4 = puVar5;
      puVar5 = puVar6;
    } while (0.0 < unaff_XMM6_Qa);
  }
  *unaff_R12 = iVar9;
  return 0;
}



uint64_t FUN_18084ccf0(uint64_t param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBP;
  int8_t *puVar3;
  int8_t *unaff_RDI;
  int8_t *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong in_R11;
  int *unaff_R12;
  int unaff_R14D;
  int unaff_R15D;
  double dVar8;
  double unaff_XMM6_Qa;
  int8_t auStackX_20 [8];
  
  if ((*(int *)(unaff_RBP + 0x90) == param_2) ||
     (puVar3 = unaff_RDI, unaff_RDI == (int8_t *)0x0)) {
    puVar3 = auStackX_20;
  }
  iVar7 = 0;
  if (0.0 < unaff_XMM6_Qa) {
    do {
      puVar4 = (int8_t *)0x0;
      dVar8 = 2880000.0 /
              (((double)*(float *)(puVar3 + 0x1c) * (double)*(int *)(puVar3 + 0x10)) /
              (double)*(int *)(puVar3 + 0x14));
      uVar5 = (uint)(longlong)(dVar8 * unaff_XMM6_Qa);
      uVar2 = uVar5;
      if (unaff_RDI != (int8_t *)0x0) {
        uVar2 = *(int *)(unaff_RDI + 0x18) - unaff_R15D;
        unaff_R15D = *(int *)(unaff_RDI + 0x18);
        unaff_R14D = unaff_R14D + 1;
        if (unaff_R14D < *(int *)(unaff_RBP + 0x90)) {
          puVar4 = (int8_t *)((longlong)unaff_R14D * 0x20 + in_R11);
        }
      }
      uVar6 = uVar5;
      uVar1 = 0;
      if (uVar2 < uVar5) {
        uVar6 = uVar2;
        uVar1 = uVar5 - uVar2;
      }
      iVar7 = iVar7 + uVar6;
      unaff_XMM6_Qa = (double)uVar1 / dVar8;
      puVar3 = unaff_RDI;
      unaff_RDI = puVar4;
    } while (0.0 < unaff_XMM6_Qa);
  }
  *unaff_R12 = iVar7;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18084cde0(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint auStackX_8 [2];
  
  *param_2 = 0;
  uVar5 = 0;
  uVar10 = *(ulonglong *)(param_1 + 0x38);
  while ((*(ulonglong *)(param_1 + 0x38) <= uVar10 &&
         (uVar10 < *(ulonglong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 0x18))) {
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x14) + (ulonglong)*(uint *)(uVar10 + 0x10);
    uVar6 = *(uint *)(uVar10 + 0x14) + *(uint *)(uVar10 + 0x10);
    uVar9 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar9 = uVar6;
    }
    if (uVar9 < uVar5) {
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
    else {
      uVar5 = uVar6;
      if (0xffffffff < uVar1) {
        uVar5 = 0xffffffff;
      }
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
  }
  uVar10 = *(ulonglong *)(param_1 + 0x48);
  while( true ) {
    if ((uVar10 < *(ulonglong *)(param_1 + 0x48)) ||
       (*(ulonglong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18 <= uVar10))
    break;
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x14) + (ulonglong)*(uint *)(uVar10 + 0x10);
    uVar6 = *(uint *)(uVar10 + 0x14) + *(uint *)(uVar10 + 0x10);
    uVar9 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar9 = uVar6;
    }
    if (uVar9 < uVar5) {
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
    else {
      uVar5 = uVar6;
      if (0xffffffff < uVar1) {
        uVar5 = 0xffffffff;
      }
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
  }
  for (puVar2 = *(uint64_t **)(param_1 + 0x58); puVar2 != (uint64_t *)(param_1 + 0x58);
      puVar2 = (uint64_t *)*puVar2) {
    if (uVar5 <= *(uint *)(puVar2 + 2)) {
      uVar5 = *(uint *)(puVar2 + 2);
    }
    *param_2 = uVar5;
    if (puVar2 == (uint64_t *)(param_1 + 0x58)) break;
  }
  puVar8 = *(uint64_t **)(param_1 + 0x68);
  puVar2 = (uint64_t *)(param_1 + 0x68);
  if (puVar8 != puVar2) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    do {
      uVar5 = *param_2;
      if (uVar5 <= *(uint *)(puVar8 + 6)) {
        uVar5 = *(uint *)(puVar8 + 6);
      }
      *param_2 = uVar5;
      if (uVar5 <= *(uint *)((longlong)puVar8 + 0x34)) {
        uVar5 = *(uint *)((longlong)puVar8 + 0x34);
      }
      *param_2 = uVar5;
      if ((*(int *)(lVar3 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&system_ptr_ea98);
      }
      if (*(int *)(puVar8 + 0x14) != _DAT_180c4ea94) {
        plVar4 = *(longlong **)(param_1 + 0x78);
        plVar11 = plVar4;
        while( true ) {
          if ((plVar11 < plVar4) || (plVar4 + (longlong)*(int *)(param_1 + 0x80) * 5 <= plVar11))
          goto LAB_18084cfd9;
          if ((*plVar11 == puVar8[4]) && (plVar11[1] == puVar8[5])) break;
          plVar11 = plVar11 + 5;
        }
        if (plVar11 != (longlong *)0x0) {
          if ((ulonglong)*(uint *)(puVar8 + 0x15) + (ulonglong)*(uint *)(plVar11 + 4) < 0x100000000)
          {
            auStackX_8[0] = *(uint *)(plVar11 + 4) + *(uint *)(puVar8 + 0x15);
          }
          else {
            auStackX_8[0] = 0xffffffff;
          }
          puVar7 = auStackX_8;
          if (auStackX_8[0] < *param_2) {
            puVar7 = param_2;
          }
          *param_2 = *puVar7;
        }
      }
LAB_18084cfd9:
      if (puVar8 != puVar2) {
        puVar8 = (uint64_t *)*puVar8;
      }
    } while (puVar8 != puVar2);
  }
  for (uVar10 = *(ulonglong *)(param_1 + 0x78);
      (*(ulonglong *)(param_1 + 0x78) <= uVar10 &&
      (uVar10 < *(ulonglong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x80) * 0x28));
      uVar10 = uVar10 + 0x28) {
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x20) + (ulonglong)*(uint *)(uVar10 + 0x24);
    uVar9 = *(uint *)(uVar10 + 0x20) + *(uint *)(uVar10 + 0x24);
    uVar5 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar5 = uVar9;
    }
    uVar6 = *param_2;
    if ((*param_2 <= uVar5) && (uVar6 = uVar9, 0xffffffff < uVar1)) {
      uVar6 = 0xffffffff;
    }
    *param_2 = uVar6;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18084cde8(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint in_stack_00000050;
  
  *param_2 = 0;
  uVar5 = 0;
  uVar10 = *(ulonglong *)(param_1 + 0x38);
  while ((*(ulonglong *)(param_1 + 0x38) <= uVar10 &&
         (uVar10 < *(ulonglong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 0x18))) {
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x14) + (ulonglong)*(uint *)(uVar10 + 0x10);
    uVar6 = *(uint *)(uVar10 + 0x14) + *(uint *)(uVar10 + 0x10);
    uVar9 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar9 = uVar6;
    }
    if (uVar9 < uVar5) {
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
    else {
      uVar5 = uVar6;
      if (0xffffffff < uVar1) {
        uVar5 = 0xffffffff;
      }
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
  }
  uVar10 = *(ulonglong *)(param_1 + 0x48);
  while( true ) {
    if ((uVar10 < *(ulonglong *)(param_1 + 0x48)) ||
       (*(ulonglong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18 <= uVar10))
    break;
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x14) + (ulonglong)*(uint *)(uVar10 + 0x10);
    uVar6 = *(uint *)(uVar10 + 0x14) + *(uint *)(uVar10 + 0x10);
    uVar9 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar9 = uVar6;
    }
    if (uVar9 < uVar5) {
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
    else {
      uVar5 = uVar6;
      if (0xffffffff < uVar1) {
        uVar5 = 0xffffffff;
      }
      uVar10 = uVar10 + 0x18;
      *param_2 = uVar5;
    }
  }
  for (puVar2 = *(uint64_t **)(param_1 + 0x58); puVar2 != (uint64_t *)(param_1 + 0x58);
      puVar2 = (uint64_t *)*puVar2) {
    if (uVar5 <= *(uint *)(puVar2 + 2)) {
      uVar5 = *(uint *)(puVar2 + 2);
    }
    *param_2 = uVar5;
    if (puVar2 == (uint64_t *)(param_1 + 0x58)) break;
  }
  puVar8 = *(uint64_t **)(param_1 + 0x68);
  puVar2 = (uint64_t *)(param_1 + 0x68);
  if (puVar8 != puVar2) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    do {
      uVar5 = *param_2;
      if (uVar5 <= *(uint *)(puVar8 + 6)) {
        uVar5 = *(uint *)(puVar8 + 6);
      }
      *param_2 = uVar5;
      if (uVar5 <= *(uint *)((longlong)puVar8 + 0x34)) {
        uVar5 = *(uint *)((longlong)puVar8 + 0x34);
      }
      *param_2 = uVar5;
      if ((*(int *)(lVar3 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&system_ptr_ea98);
      }
      if (*(int *)(puVar8 + 0x14) != _DAT_180c4ea94) {
        plVar4 = *(longlong **)(param_1 + 0x78);
        plVar11 = plVar4;
        while( true ) {
          if ((plVar11 < plVar4) || (plVar4 + (longlong)*(int *)(param_1 + 0x80) * 5 <= plVar11))
          goto LAB_18084cfd9;
          if ((*plVar11 == puVar8[4]) && (plVar11[1] == puVar8[5])) break;
          plVar11 = plVar11 + 5;
        }
        if (plVar11 != (longlong *)0x0) {
          if ((ulonglong)*(uint *)(puVar8 + 0x15) + (ulonglong)*(uint *)(plVar11 + 4) < 0x100000000)
          {
            in_stack_00000050 = *(uint *)(plVar11 + 4) + *(uint *)(puVar8 + 0x15);
          }
          else {
            in_stack_00000050 = 0xffffffff;
          }
          puVar7 = &stack0x00000050;
          if (in_stack_00000050 < *param_2) {
            puVar7 = param_2;
          }
          *param_2 = *puVar7;
        }
      }
LAB_18084cfd9:
      if (puVar8 != puVar2) {
        puVar8 = (uint64_t *)*puVar8;
      }
    } while (puVar8 != puVar2);
  }
  for (uVar10 = *(ulonglong *)(param_1 + 0x78);
      (*(ulonglong *)(param_1 + 0x78) <= uVar10 &&
      (uVar10 < *(ulonglong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x80) * 0x28));
      uVar10 = uVar10 + 0x28) {
    uVar1 = (ulonglong)*(uint *)(uVar10 + 0x20) + (ulonglong)*(uint *)(uVar10 + 0x24);
    uVar9 = *(uint *)(uVar10 + 0x20) + *(uint *)(uVar10 + 0x24);
    uVar5 = 0xffffffff;
    if (uVar1 < 0x100000000) {
      uVar5 = uVar9;
    }
    uVar6 = *param_2;
    if ((*param_2 <= uVar5) && (uVar6 = uVar9, 0xffffffff < uVar1)) {
      uVar6 = 0xffffffff;
    }
    *param_2 = uVar6;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084cf13(longlong param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_18084cf13(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong in_RAX;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint64_t *unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  uint uVar9;
  longlong *plVar10;
  int unaff_R12D;
  uint64_t *unaff_R14;
  uint in_stack_00000050;
  
  lVar2 = *(longlong *)(in_RAX + param_1 * 8);
  do {
    uVar4 = *unaff_RDI;
    if (uVar4 <= *(uint *)(unaff_RBX + 6)) {
      uVar4 = *(uint *)(param_2 + 6);
      param_3 = unaff_RBX;
    }
    *unaff_RDI = uVar4;
    if (uVar4 <= *(uint *)((longlong)unaff_RBX + 0x34)) {
      uVar4 = *(uint *)((longlong)param_3 + 0x34);
    }
    *unaff_RDI = uVar4;
    if ((*(int *)(lVar2 + 0x48) < _DAT_180c4ea98) &&
       (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
      _DAT_180c4ea94 = unaff_R12D;
      FUN_1808fcb30(&system_ptr_ea98);
    }
    uVar4 = (uint)unaff_RBP;
    if (*(int *)(unaff_RBX + 0x14) != _DAT_180c4ea94) {
      plVar3 = *(longlong **)(unaff_RSI + 0x78);
      plVar10 = plVar3;
      while( true ) {
        if ((plVar10 < plVar3) || (plVar3 + (longlong)*(int *)(unaff_RSI + 0x80) * 5 <= plVar10))
        goto LAB_18084cfd9;
        if ((*plVar10 == unaff_RBX[4]) && (plVar10[1] == unaff_RBX[5])) break;
        plVar10 = plVar10 + 5;
      }
      if (plVar10 != (longlong *)0x0) {
        in_stack_00000050 = uVar4;
        if ((ulonglong)*(uint *)(unaff_RBX + 0x15) + (ulonglong)*(uint *)(plVar10 + 4) <= unaff_RBP)
        {
          in_stack_00000050 = *(uint *)(plVar10 + 4) + *(uint *)(unaff_RBX + 0x15);
        }
        puVar6 = &stack0x00000050;
        if (in_stack_00000050 < *unaff_RDI) {
          puVar6 = unaff_RDI;
        }
        *unaff_RDI = *puVar6;
      }
    }
LAB_18084cfd9:
    param_2 = unaff_RBX;
    if (unaff_RBX != unaff_R14) {
      param_2 = (uint64_t *)*unaff_RBX;
    }
    param_3 = param_2;
    unaff_RBX = param_2;
    if (param_2 == unaff_R14) {
      for (uVar8 = *(ulonglong *)(unaff_RSI + 0x78);
          (*(ulonglong *)(unaff_RSI + 0x78) <= uVar8 &&
          (uVar8 < *(ulonglong *)(unaff_RSI + 0x78) + (longlong)*(int *)(unaff_RSI + 0x80) * 0x28));
          uVar8 = uVar8 + 0x28) {
        uVar1 = (ulonglong)*(uint *)(uVar8 + 0x20) + (ulonglong)*(uint *)(uVar8 + 0x24);
        uVar9 = *(uint *)(uVar8 + 0x20) + *(uint *)(uVar8 + 0x24);
        uVar7 = uVar4;
        if (uVar1 <= unaff_RBP) {
          uVar7 = uVar9;
        }
        uVar5 = *unaff_RDI;
        if ((*unaff_RDI <= uVar7) && (uVar5 = uVar9, unaff_RBP < uVar1)) {
          uVar5 = uVar4;
        }
        *unaff_RDI = uVar5;
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_18084cffb(void)
void FUN_18084cffb(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  uint uVar5;
  
  for (uVar4 = *(ulonglong *)(unaff_RSI + 0x78);
      (*(ulonglong *)(unaff_RSI + 0x78) <= uVar4 &&
      (uVar4 < *(ulonglong *)(unaff_RSI + 0x78) + (longlong)*(int *)(unaff_RSI + 0x80) * 0x28));
      uVar4 = uVar4 + 0x28) {
    uVar1 = (ulonglong)*(uint *)(uVar4 + 0x20) + (ulonglong)*(uint *)(uVar4 + 0x24);
    uVar5 = *(uint *)(uVar4 + 0x20) + *(uint *)(uVar4 + 0x24);
    uVar3 = (uint)unaff_RBP;
    if (uVar1 <= unaff_RBP) {
      uVar3 = uVar5;
    }
    uVar2 = *unaff_RDI;
    if ((*unaff_RDI <= uVar3) && (uVar2 = uVar5, unaff_RBP < uVar1)) {
      uVar2 = (uint)unaff_RBP;
    }
    *unaff_RDI = uVar2;
  }
  return;
}





// 函数: void FUN_18084d00e(uint64_t param_1,ulonglong param_2)
void FUN_18084d00e(uint64_t param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  uint uVar4;
  
  for (; (*(ulonglong *)(unaff_RSI + 0x78) <= param_2 &&
         (param_2 < *(ulonglong *)(unaff_RSI + 0x78) + (longlong)*(int *)(unaff_RSI + 0x80) * 0x28))
      ; param_2 = param_2 + 0x28) {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x20) + (ulonglong)*(uint *)(param_2 + 0x24);
    uVar4 = *(uint *)(param_2 + 0x20) + *(uint *)(param_2 + 0x24);
    uVar3 = (uint)unaff_RBP;
    if (uVar1 <= unaff_RBP) {
      uVar3 = uVar4;
    }
    uVar2 = *unaff_RDI;
    if ((*unaff_RDI <= uVar3) && (uVar2 = uVar4, unaff_RBP < uVar1)) {
      uVar2 = (uint)unaff_RBP;
    }
    *unaff_RDI = uVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




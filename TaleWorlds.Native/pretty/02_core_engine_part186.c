#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part186.c - 12 个函数

// 函数: void FUN_18016c97a(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
void FUN_18016c97a(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint *puVar1;
  int *piVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  void *puVar9;
  longlong lVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  longlong in_RAX;
  longlong lVar14;
  longlong lVar15;
  void *puVar16;
  uint64_t unaff_RBX;
  longlong lVar17;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  ulonglong uVar18;
  int32_t uVar19;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  ulonglong uVar20;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t auStackX_20 [2];
  uint64_t in_stack_00000090;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  FUN_18012d9c0(2,0);
  lVar17 = SYSTEM_DATA_MANAGER_A;
  uVar18 = 0;
  uVar19 = 0;
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) = *param_2;
  *(uint64_t *)(lVar17 + 0x1bfc) = 0;
  *(int32_t *)(lVar17 + 0x1bd0) = 1;
  *(int8_t *)(lVar17 + 0x1c14) = 1;
  *(uint64_t *)(lVar17 + 0x1c04) = *param_3;
  *(int32_t *)(lVar17 + 0x1bd4) = 1;
  FUN_1801299b0(&unknown_var_1792_ptr,0,0x907);
  lVar17 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1af8);
  puVar1 = (uint *)(lVar17 + 0x1a8);
  *puVar1 = *puVar1 | 1;
  FUN_18011d940(lVar17 + 0x1b8);
  lVar17 = SYSTEM_DATA_MANAGER_A;
  if (*(char *)(param_1 + 0x74) == '\0') {
    auStackX_20[0] = 5;
    FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,auStackX_20);
    *(uint64_t *)(lVar17 + 0x1718) = 0x3f8000003f800000;
    *(uint64_t *)(lVar17 + 0x1720) = 0x3f8000003f800000;
    FUN_18010f010(&unknown_var_1776_ptr);
    lVar17 = SYSTEM_DATA_MANAGER_A;
    puVar3 = (uint64_t *)
             (*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
             (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
    uVar11 = puVar3[1];
    puVar4 = (uint64_t *)
             (SYSTEM_DATA_MANAGER_A + 0x16c8 +
             (longlong)
             *(int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                     (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    *(int *)(lVar17 + 0x1b80) = *(int *)(lVar17 + 0x1b80) + -1;
  }
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5 != 0) {
    in_stack_00000090 = 0;
    uVar20 = uVar18;
    do {
      iVar8 = *(int *)(param_1 + 100);
      iVar13 = (int)uVar18;
      if (iVar8 == iVar13) {
        auStackX_20[0] = 5;
        FUN_18013e100(lVar17 + 0x1b80,auStackX_20);
        *(uint64_t *)(lVar17 + 0x1718) = 0x3f800000;
        *(uint64_t *)(lVar17 + 0x1720) = 0x3f80000000000000;
      }
      FUN_18012e2d0(uVar18);
      puVar9 = *(void **)(*(longlong *)(param_1 + 0x20) + 8 + uVar20);
      puVar16 = &system_buffer_ptr;
      if (puVar9 != (void *)0x0) {
        puVar16 = puVar9;
      }
      cVar12 = FUN_180119960(puVar16,iVar8 == iVar13,0,&stack0x00000090);
      if (cVar12 != '\0') {
        *(int *)(param_1 + 0x68) = iVar13;
      }
      lVar17 = SYSTEM_DATA_MANAGER_A;
      piVar2 = (int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
      *piVar2 = *piVar2 + -1;
      if (iVar8 == iVar13) {
        if (*(char *)(param_1 + 0x70) != '\0') {
          *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
          lVar10 = *(longlong *)(lVar17 + 0x1af8);
          fVar5 = *(float *)(lVar10 + 0x130);
          fVar6 = *(float *)(lVar10 + 0x10c);
          fVar7 = *(float *)(lVar10 + 0x44);
          *(int8_t *)(lVar10 + 0xb1) = 1;
          lVar10 = *(longlong *)(lVar17 + 0x1af8);
          *(int32_t *)(lVar10 + 0xa0) = 0x3f000000;
          *(float *)(lVar10 + 0x98) =
               (float)(int)((fVar6 - fVar7) + fVar5 * 0.5 + *(float *)(lVar10 + 0x90));
          *(int8_t *)(param_1 + 0x70) = 0;
        }
        puVar3 = (uint64_t *)
                 (*(longlong *)(lVar17 + 0x1b88) + -0x10 +
                 (longlong)*(int *)(lVar17 + 0x1b80) * 0x14);
        uVar11 = puVar3[1];
        puVar4 = (uint64_t *)
                 (lVar17 + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(lVar17 + 0x1b88) + -0x14 +
                         (longlong)*(int *)(lVar17 + 0x1b80) * 0x14) * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        *(int *)(lVar17 + 0x1b80) = *(int *)(lVar17 + 0x1b80) + -1;
      }
      uVar18 = (ulonglong)(iVar13 + 1U);
      uVar20 = uVar20 + 0x20;
    } while ((ulonglong)(longlong)(int)(iVar13 + 1U) <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5));
  }
  *(bool *)param_4 =
       *(longlong *)(lVar17 + 0x1c98) == *(longlong *)(*(longlong *)(lVar17 + 0x1af8) + 0x3a8);
  *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1af8);
  iVar8 = *(int *)(lVar17 + 0x1b8);
  iVar13 = iVar8 + -1;
  *(int *)(lVar17 + 0x1b8) = iVar13;
  if (iVar13 != 0) {
    uVar19 = *(int32_t *)(*(longlong *)(lVar17 + 0x1c0) + -8 + (longlong)iVar8 * 4);
  }
  *(int32_t *)(lVar17 + 0x1a8) = uVar19;
  FUN_18012cfe0();
  lVar10 = SYSTEM_DATA_MANAGER_A;
  lVar14 = (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar17 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar15 = (longlong)*(int *)(lVar17 + -0xc + lVar14 * 0xc);
  uVar18 = (ulonglong)*(uint *)(&unknown_var_6056_ptr + lVar15 * 0xc);
  if (*(int *)(&unknown_var_6048_ptr + lVar15 * 0xc) == 4) {
    if (*(int *)(&unknown_var_6052_ptr + lVar15 * 0xc) == 1) {
      *(int32_t *)(uVar18 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar17 + -8 + lVar14 * 0xc);
      *(int *)(lVar10 + 0x1b90) = *(int *)(lVar10 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&unknown_var_6052_ptr + lVar15 * 0xc) == 2) {
      *(int32_t *)(uVar18 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar17 + -8 + lVar14 * 0xc);
      *(int32_t *)(uVar18 + 0x162c + lVar10) = *(int32_t *)(lVar17 + -4 + lVar14 * 0xc);
    }
  }
  *(int *)(lVar10 + 0x1b90) = *(int *)(lVar10 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016cacd(void)
void FUN_18016cacd(void)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  void *puVar8;
  longlong lVar9;
  uint64_t uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  void *puVar16;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  ulonglong unaff_R12;
  uint64_t unaff_R13;
  ulonglong uVar17;
  int32_t auStackX_20 [2];
  
  uVar17 = unaff_R12;
  do {
    iVar7 = *(int *)(unaff_RSI + 100);
    if (iVar7 == unaff_EDI) {
      auStackX_20[0] = 5;
      FUN_18013e100(unaff_RBX + 0x1b80,auStackX_20);
      *(uint64_t *)(unaff_RBX + 0x1718) = 0x3f800000;
      *(uint64_t *)(unaff_RBX + 0x1720) = 0x3f80000000000000;
    }
    FUN_18012e2d0(unaff_EDI);
    puVar8 = *(void **)(*(longlong *)(unaff_RSI + 0x20) + 8 + uVar17);
    puVar16 = &system_buffer_ptr;
    if (puVar8 != (void *)0x0) {
      puVar16 = puVar8;
    }
    cVar12 = FUN_180119960(puVar16,iVar7 == unaff_EDI,0,&stack0x00000090);
    if (cVar12 != '\0') {
      *(int *)(unaff_RSI + 0x68) = unaff_EDI;
    }
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
    piVar1 = (int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
    if (iVar7 == unaff_EDI) {
      if (*(char *)(unaff_RSI + 0x70) != (char)unaff_R12) {
        *(int8_t *)(*(longlong *)(unaff_RBX + 0x1af8) + 0xb1) = 1;
        lVar9 = *(longlong *)(unaff_RBX + 0x1af8);
        fVar4 = *(float *)(lVar9 + 0x130);
        fVar5 = *(float *)(lVar9 + 0x10c);
        fVar6 = *(float *)(lVar9 + 0x44);
        *(int8_t *)(lVar9 + 0xb1) = 1;
        lVar9 = *(longlong *)(unaff_RBX + 0x1af8);
        *(int32_t *)(lVar9 + 0xa0) = 0x3f000000;
        *(float *)(lVar9 + 0x98) =
             (float)(int)((fVar5 - fVar6) + fVar4 * 0.5 + *(float *)(lVar9 + 0x90));
        *(char *)(unaff_RSI + 0x70) = (char)unaff_R12;
      }
      puVar2 = (uint64_t *)
               (*(longlong *)(unaff_RBX + 0x1b88) + -0x10 +
               (longlong)*(int *)(unaff_RBX + 0x1b80) * 0x14);
      uVar10 = puVar2[1];
      puVar3 = (uint64_t *)
               (unaff_RBX + 0x16c8 +
               (longlong)
               *(int *)(*(longlong *)(unaff_RBX + 0x1b88) + -0x14 +
                       (longlong)*(int *)(unaff_RBX + 0x1b80) * 0x14) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      *(int *)(unaff_RBX + 0x1b80) = *(int *)(unaff_RBX + 0x1b80) + -1;
    }
    unaff_EDI = unaff_EDI + 1;
    uVar17 = uVar17 + 0x20;
  } while ((ulonglong)(longlong)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x28) - *(longlong *)(unaff_RSI + 0x20) >> 5));
  *(bool *)unaff_R13 =
       *(longlong *)(unaff_RBX + 0x1c98) == *(longlong *)(*(longlong *)(unaff_RBX + 0x1af8) + 0x3a8)
  ;
  *(int8_t *)(*(longlong *)(unaff_RBX + 0x1af8) + 0xb1) = 1;
  lVar9 = *(longlong *)(unaff_RBX + 0x1af8);
  iVar7 = *(int *)(lVar9 + 0x1b8);
  iVar13 = iVar7 + -1;
  *(int *)(lVar9 + 0x1b8) = iVar13;
  if (iVar13 != 0) {
    unaff_R12 = (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x1c0) + -8 + (longlong)iVar7 * 4);
  }
  *(int *)(lVar9 + 0x1a8) = (int)unaff_R12;
  FUN_18012cfe0();
  lVar11 = SYSTEM_DATA_MANAGER_A;
  lVar14 = (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar9 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar15 = (longlong)*(int *)(lVar9 + -0xc + lVar14 * 0xc);
  uVar17 = (ulonglong)*(uint *)(&unknown_var_6056_ptr + lVar15 * 0xc);
  if (*(int *)(&unknown_var_6048_ptr + lVar15 * 0xc) == 4) {
    if (*(int *)(&unknown_var_6052_ptr + lVar15 * 0xc) == 1) {
      *(int32_t *)(uVar17 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar9 + -8 + lVar14 * 0xc)
      ;
      *(int *)(lVar11 + 0x1b90) = *(int *)(lVar11 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&unknown_var_6052_ptr + lVar15 * 0xc) == 2) {
      *(int32_t *)(uVar17 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar9 + -8 + lVar14 * 0xc)
      ;
      *(int32_t *)(uVar17 + 0x162c + lVar11) = *(int32_t *)(lVar9 + -4 + lVar14 * 0xc);
    }
  }
  *(int *)(lVar11 + 0x1b90) = *(int *)(lVar11 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016cc64(void)
void FUN_18016cc64(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBX;
  ulonglong uVar7;
  int32_t unaff_R12D;
  uint64_t unaff_R13;
  
  *(bool *)unaff_R13 =
       *(longlong *)(unaff_RBX + 0x1c98) == *(longlong *)(*(longlong *)(unaff_RBX + 0x1af8) + 0x3a8)
  ;
  *(int8_t *)(*(longlong *)(unaff_RBX + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(unaff_RBX + 0x1af8);
  iVar1 = *(int *)(lVar2 + 0x1b8);
  iVar4 = iVar1 + -1;
  *(int *)(lVar2 + 0x1b8) = iVar4;
  if (iVar4 != 0) {
    unaff_R12D = *(int32_t *)(*(longlong *)(lVar2 + 0x1c0) + -8 + (longlong)iVar1 * 4);
  }
  *(int32_t *)(lVar2 + 0x1a8) = unaff_R12D;
  FUN_18012cfe0();
  lVar3 = SYSTEM_DATA_MANAGER_A;
  lVar5 = (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar2 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar6 = (longlong)*(int *)(lVar2 + -0xc + lVar5 * 0xc);
  uVar7 = (ulonglong)*(uint *)(&unknown_var_6056_ptr + lVar6 * 0xc);
  if (*(int *)(&unknown_var_6048_ptr + lVar6 * 0xc) == 4) {
    if (*(int *)(&unknown_var_6052_ptr + lVar6 * 0xc) == 1) {
      *(int32_t *)(uVar7 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar2 + -8 + lVar5 * 0xc);
      *(int *)(lVar3 + 0x1b90) = *(int *)(lVar3 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&unknown_var_6052_ptr + lVar6 * 0xc) == 2) {
      *(int32_t *)(uVar7 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar2 + -8 + lVar5 * 0xc);
      *(int32_t *)(uVar7 + 0x162c + lVar3) = *(int32_t *)(lVar2 + -4 + lVar5 * 0xc);
    }
  }
  *(int *)(lVar3 + 0x1b90) = *(int *)(lVar3 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016cccb(longlong param_1,longlong param_2)
void FUN_18016cccb(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(int32_t *)(param_2 + 0x1a8) =
       *(int32_t *)(*(longlong *)(param_2 + 0x1c0) + -8 + param_1 * 4);
  FUN_18012cfe0();
  lVar2 = SYSTEM_DATA_MANAGER_A;
  lVar3 = (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar1 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar4 = (longlong)*(int *)(lVar1 + -0xc + lVar3 * 0xc);
  uVar5 = (ulonglong)*(uint *)(&unknown_var_6056_ptr + lVar4 * 0xc);
  if (*(int *)(&unknown_var_6048_ptr + lVar4 * 0xc) == 4) {
    if (*(int *)(&unknown_var_6052_ptr + lVar4 * 0xc) == 1) {
      *(int32_t *)(uVar5 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&unknown_var_6052_ptr + lVar4 * 0xc) == 2) {
      *(int32_t *)(uVar5 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int32_t *)(uVar5 + 0x162c + lVar2) = *(int32_t *)(lVar1 + -4 + lVar3 * 0xc);
    }
  }
  *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
  return;
}





// 函数: void FUN_18016cd1d(longlong param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_18016cd1d(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong in_RAX;
  longlong in_R10;
  
  iVar1 = *(int *)(in_RAX + 4 + in_R10 * 4);
  if (iVar1 == 1) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
    return;
  }
  if (iVar1 == 2) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int32_t *)(param_4 + 0x162c + param_1) = *(int32_t *)(param_3 + -4 + param_2 * 4);
  }
  *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
  return;
}





// 函数: void FUN_18016cd80(longlong *param_1)
void FUN_18016cd80(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



longlong * FUN_18016cdb0(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = (longlong)&unknown_var_2368_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(param_1 + 0x15);
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (param_1,param_1 + 1,0,0,1,uVar1);
  *(void **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &unknown_var_2384_ptr;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_18009ec20(param_1 + 1);
  return param_1;
}





// 函数: void FUN_18016ce50(longlong *param_1)
void FUN_18016ce50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(uint64_t *)(lVar2 + 8) = &unknown_var_3456_ptr;
    if (*(longlong *)(lVar2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(int32_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 8) = &unknown_var_720_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18016cef0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18016cef0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar4;
  uint64_t uVar5;
  ulonglong uVar3;
  
  if (param_1 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = 0xfffffffffffffffe;
  uVar3 = 0;
  param_1[9] = 0;
  plVar1 = param_1 + 5;
  uVar4 = uVar3;
  if (param_1[6] - *plVar1 >> 3 != 0) {
    do {
      FUN_18016cef0(*(uint64_t *)(uVar4 + *plVar1));
      *(uint64_t *)(uVar4 + *plVar1) = 0;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(param_1[6] - *plVar1 >> 3));
  }
  if ((code *)param_1[0xc] != (code *)0x0) {
    (*(code *)param_1[0xc])(param_1 + 10,0,0,param_4,uVar5);
  }
  if (*plVar1 == 0) {
    *param_1 = &unknown_var_3456_ptr;
    if (param_1[1] == 0) {
      param_1[1] = 0;
      *(int32_t *)(param_1 + 3) = 0;
      *param_1 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(param_1);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016cff0(longlong *param_1,int32_t *param_2)
void FUN_18016cff0(longlong *param_1,int32_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[1];
  lVar4 = *param_1;
  lVar6 = (lVar5 - lVar4) / 0x28;
  puVar1 = (int32_t *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_18016d07b;
  }
  puVar1 = (int32_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x28,(char)param_1[3],lVar4,0xfffffffffffffffe);
  lVar5 = param_1[1];
  lVar4 = *param_1;
LAB_18016d07b:
  puVar2 = puVar1;
  if (lVar4 != lVar5) {
    puVar3 = (uint64_t *)(puVar1 + 4);
    lVar4 = lVar4 - (longlong)puVar1;
    do {
      *puVar2 = *(int32_t *)((longlong)puVar3 + lVar4 + -0x10);
      puVar3[-1] = &unknown_var_720_ptr;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[-1] = &unknown_var_3456_ptr;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(lVar4 + 8 + (longlong)puVar3);
      *puVar3 = *(uint64_t *)(lVar4 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + 0x14) = *(int32_t *)((longlong)puVar3 + lVar4 + 0x14);
      *(int32_t *)(puVar3 + 2) = *(int32_t *)((longlong)puVar3 + lVar4 + 0x10);
      *(int32_t *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar4 + (longlong)puVar3) = 0;
      *(uint64_t *)((longlong)puVar3 + lVar4 + 0x10) = 0;
      puVar2 = puVar2 + 10;
      puVar3 = puVar3 + 5;
    } while (lVar4 + -0x10 + (longlong)puVar3 != lVar5);
  }
  *puVar2 = *param_2;
  *(void **)(puVar2 + 2) = &unknown_var_720_ptr;
  *(uint64_t *)(puVar2 + 4) = 0;
  puVar2[6] = 0;
  *(void **)(puVar2 + 2) = &unknown_var_3456_ptr;
  *(uint64_t *)(puVar2 + 8) = 0;
  *(uint64_t *)(puVar2 + 4) = 0;
  puVar2[6] = 0;
  puVar2[6] = param_2[6];
  *(uint64_t *)(puVar2 + 4) = *(uint64_t *)(param_2 + 4);
  puVar2[9] = param_2[9];
  puVar2[8] = param_2[8];
  param_2[6] = 0;
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  lVar5 = param_1[1];
  lVar4 = *param_1;
  if (lVar4 != lVar5) {
    do {
      *(uint64_t *)(lVar4 + 8) = &unknown_var_3456_ptr;
      if (*(longlong *)(lVar4 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar4 + 0x10) = 0;
      *(int32_t *)(lVar4 + 0x20) = 0;
      *(uint64_t *)(lVar4 + 8) = &unknown_var_720_ptr;
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != lVar5);
    lVar4 = *param_1;
  }
  if (lVar4 == 0) {
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar2 + 10);
    param_1[2] = (longlong)(puVar1 + lVar6 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar4);
}





// 函数: void FUN_18016d200(longlong param_1,longlong param_2,int8_t param_3)
void FUN_18016d200(longlong param_1,longlong param_2,int8_t param_3)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_1 != param_2) {
    iVar11 = 0;
    lVar9 = param_2 - param_1 >> 5;
    for (lVar4 = lVar9; lVar4 != 0; lVar4 = lVar4 >> 1) {
      iVar11 = iVar11 + 1;
    }
    FUN_18016ff80(param_1,param_2,(longlong)(iVar11 + -1) * 2,param_3,0xfffffffffffffffe);
    if (lVar9 < 0x1d) {
      FUN_18016d690(param_1,param_2);
    }
    else {
      lVar4 = param_1 + 0x380;
      FUN_18016d690(param_1,lVar4);
      for (; lVar4 != param_2; lVar4 = lVar4 + 0x20) {
        iVar11 = *(int *)(lVar4 + 0x10);
        lVar9 = *(longlong *)(lVar4 + 8);
        uVar2 = *(int32_t *)(lVar4 + 0x1c);
        uVar3 = *(int32_t *)(lVar4 + 0x18);
        *(int32_t *)(lVar4 + 0x10) = 0;
        *(uint64_t *)(lVar4 + 8) = 0;
        *(uint64_t *)(lVar4 + 0x18) = 0;
        lVar8 = lVar4;
        for (puVar7 = (uint64_t *)(lVar4 + -0x18); *(int *)(puVar7 + 1) != 0; puVar7 = puVar7 + -4
            ) {
          if (iVar11 != 0) {
            pbVar5 = (byte *)*puVar7;
            lVar10 = lVar9 - (longlong)pbVar5;
            do {
              bVar1 = *pbVar5;
              uVar6 = (uint)pbVar5[lVar10];
              if (bVar1 != uVar6) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
            if ((int)(bVar1 - uVar6) < 1) break;
          }
          if (puVar7[4] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar7[6] = 0;
          puVar7[4] = 0;
          *(int32_t *)(puVar7 + 5) = 0;
          *(int32_t *)(puVar7 + 5) = *(int32_t *)(puVar7 + 1);
          puVar7[4] = *puVar7;
          *(int32_t *)((longlong)puVar7 + 0x34) = *(int32_t *)((longlong)puVar7 + 0x14);
          *(int32_t *)(puVar7 + 6) = *(int32_t *)(puVar7 + 2);
          *(int32_t *)(puVar7 + 1) = 0;
          *puVar7 = 0;
          puVar7[2] = 0;
          lVar8 = lVar8 + -0x20;
        }
        if (*(longlong *)(lVar8 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int *)(lVar8 + 0x10) = iVar11;
        *(longlong *)(lVar8 + 8) = lVar9;
        *(int32_t *)(lVar8 + 0x1c) = uVar2;
        *(int32_t *)(lVar8 + 0x18) = uVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016d400(longlong *param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)
void FUN_18016d400(longlong *param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  
  lVar6 = 0;
  if (param_1[1] != param_1[2]) {
    uVar1 = *(int32_t *)(param_3 + 0x10);
    uVar4 = *(uint64_t *)(param_3 + 8);
    uVar2 = *(int32_t *)(param_3 + 0x1c);
    uVar3 = *(int32_t *)(param_3 + 0x18);
    *(int32_t *)(param_3 + 0x10) = 0;
    *(uint64_t *)(param_3 + 8) = 0;
    *(uint64_t *)(param_3 + 0x18) = 0;
    puVar5 = (uint64_t *)param_1[1];
    *puVar5 = &unknown_var_720_ptr;
    puVar5[1] = 0;
    *(int32_t *)(puVar5 + 2) = 0;
    *puVar5 = &unknown_var_3456_ptr;
    puVar5[3] = 0;
    puVar5[1] = 0;
    *(int32_t *)(puVar5 + 2) = 0;
    *(int32_t *)(puVar5 + 2) = *(int32_t *)(puVar5 + -2);
    puVar5[1] = puVar5[-3];
    *(int32_t *)((longlong)puVar5 + 0x1c) = *(int32_t *)((longlong)puVar5 + -4);
    *(int32_t *)(puVar5 + 3) = *(int32_t *)(puVar5 + -1);
    *(int32_t *)(puVar5 + -2) = 0;
    puVar5[-3] = 0;
    puVar5[-1] = 0;
    FUN_18016fec0(param_2,param_1[1] + -0x20);
    (**(code **)*param_2)(param_2,0);
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    *(int32_t *)(param_2 + 2) = uVar1;
    param_2[1] = uVar4;
    *(int32_t *)((longlong)param_2 + 0x1c) = uVar2;
    *(int32_t *)(param_2 + 3) = uVar3;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  lVar7 = *param_1;
  lVar9 = param_1[1] - *param_1 >> 5;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_18016d59c;
  }
  lVar6 = FUN_18062b420(_DAT_180c8ed18,lVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
LAB_18016d59c:
  puVar5 = (uint64_t *)(((longlong)param_2 - lVar7 & 0xffffffffffffffe0U) + lVar6);
  *puVar5 = &unknown_var_720_ptr;
  puVar5[1] = 0;
  *(int32_t *)(puVar5 + 2) = 0;
  *puVar5 = &unknown_var_3456_ptr;
  puVar5[3] = 0;
  puVar5[1] = 0;
  *(int32_t *)(puVar5 + 2) = 0;
  *(int32_t *)(puVar5 + 2) = *(int32_t *)(param_3 + 0x10);
  puVar5[1] = *(uint64_t *)(param_3 + 8);
  *(int32_t *)((longlong)puVar5 + 0x1c) = *(int32_t *)(param_3 + 0x1c);
  *(int32_t *)(puVar5 + 3) = *(int32_t *)(param_3 + 0x18);
  *(int32_t *)(param_3 + 0x10) = 0;
  *(uint64_t *)(param_3 + 8) = 0;
  *(uint64_t *)(param_3 + 0x18) = 0;
  lVar7 = FUN_180059780(*param_1,param_2,lVar6);
  lVar7 = FUN_180059780(param_2,param_1[1],lVar7 + 0x20);
  puVar5 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
  if (puVar8 != puVar5) {
    do {
      (**(code **)*puVar8)(puVar8,0);
      puVar8 = puVar8 + 4;
    } while (puVar8 != puVar5);
    puVar8 = (uint64_t *)*param_1;
  }
  if (puVar8 == (uint64_t *)0x0) {
    *param_1 = lVar6;
    param_1[1] = lVar7;
    param_1[2] = lVar9 * 0x20 + lVar6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar8);
}





// 函数: void FUN_18016d690(longlong param_1,longlong param_2)
void FUN_18016d690(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    for (lVar10 = param_1 + 0x20; lVar10 != param_2; lVar10 = lVar10 + 0x20) {
      iVar2 = *(int *)(lVar10 + 0x10);
      lVar5 = *(longlong *)(lVar10 + 8);
      uVar3 = *(int32_t *)(lVar10 + 0x1c);
      uVar4 = *(int32_t *)(lVar10 + 0x18);
      *(int32_t *)(lVar10 + 0x10) = 0;
      *(uint64_t *)(lVar10 + 8) = 0;
      *(uint64_t *)(lVar10 + 0x18) = 0;
      lVar9 = lVar10;
      lVar6 = lVar10;
      while ((lVar6 != param_1 && (*(int *)(lVar6 + -0x10) != 0))) {
        if (iVar2 != 0) {
          pbVar7 = *(byte **)(lVar6 + -0x18);
          lVar11 = lVar5 - (longlong)pbVar7;
          do {
            bVar1 = *pbVar7;
            uVar8 = (uint)pbVar7[lVar11];
            if (bVar1 != uVar8) break;
            pbVar7 = pbVar7 + 1;
          } while (uVar8 != 0);
          if ((int)(bVar1 - uVar8) < 1) break;
        }
        if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar9 + 0x18) = 0;
        *(uint64_t *)(lVar9 + 8) = 0;
        *(int32_t *)(lVar9 + 0x10) = 0;
        *(int32_t *)(lVar9 + 0x10) = *(int32_t *)(lVar6 + -0x10);
        *(uint64_t *)(lVar9 + 8) = *(uint64_t *)(lVar6 + -0x18);
        *(int32_t *)(lVar9 + 0x1c) = *(int32_t *)(lVar6 + -4);
        *(int32_t *)(lVar9 + 0x18) = *(int32_t *)(lVar6 + -8);
        *(int32_t *)(lVar6 + -0x10) = 0;
        *(uint64_t *)(lVar6 + -0x18) = 0;
        *(uint64_t *)(lVar6 + -8) = 0;
        lVar9 = lVar9 + -0x20;
        lVar6 = lVar6 + -0x20;
      }
      if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int *)(lVar9 + 0x10) = iVar2;
      *(longlong *)(lVar9 + 8) = lVar5;
      *(int32_t *)(lVar9 + 0x1c) = uVar3;
      *(int32_t *)(lVar9 + 0x18) = uVar4;
    }
  }
  return;
}



uint64_t
FUN_18016d870(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180168960(param_4,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18016d910(uint64_t *param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  int32_t *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  
  pcVar2 = _DAT_180c82868;
  uVar3 = 0;
  if ((*_DAT_180c82868 == '\0') &&
     (*_DAT_180c82868 = '\x01', param_4 = uVar3,
     *(longlong *)(pcVar2 + 0x10) - *(longlong *)(pcVar2 + 8) >> 3 != 0)) {
    do {
      *(uint64_t *)(*(longlong *)(*(longlong *)(pcVar2 + 8) + uVar3) + 0x1f8) = 0x3f1a36e2eb1c432d
      ;
      *(uint64_t *)(*(longlong *)(*(longlong *)(pcVar2 + 8) + uVar3) + 0x200) = 0x3f1a36e2eb1c432d
      ;
      uVar4 = (int)param_4 + 1;
      param_4 = (ulonglong)uVar4;
      param_3 = uVar3 + 8;
      uVar3 = param_3;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(pcVar2 + 0x10) - *(longlong *)(pcVar2 + 8) >> 3));
  }
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




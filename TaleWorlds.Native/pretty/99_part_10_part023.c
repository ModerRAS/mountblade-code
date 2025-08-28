#include "TaleWorlds.Native.Split.h"

// 99_part_10_part023.c - 4 个函数

// 函数: void FUN_1806b3554(longlong param_1)
void FUN_1806b3554(longlong param_1)

{
  longlong lVar1;
  int32_t uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int8_t *puVar6;
  longlong lVar7;
  int32_t uVar8;
  int32_t uVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  int16_t unaff_SI;
  int unaff_EDI;
  longlong in_R11;
  byte bVar15;
  int8_t uVar16;
  uint64_t unaff_R12;
  byte bVar18;
  ulonglong unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar17;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  lVar4 = *(longlong *)(param_1 + -0x48);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lVar1 = param_1 + -0xb0;
  *(longlong *)(unaff_RBP + -0x31) = lVar4;
  lVar12 = lVar4;
  if (lVar4 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar4 + 8));
    lVar12 = *(longlong *)(param_1 + -0x48);
    *(longlong *)(unaff_RBP + -0x31) = lVar12;
  }
  *(ulonglong *)(unaff_RBP + -0x21) = unaff_R14;
  *(int *)(unaff_RBP + -0x19) = unaff_EDI;
  *(int16_t *)(unaff_RBP + -0x15) = 0;
  if (lVar12 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar12 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == unaff_EDI) && (*(ulonglong *)(param_1 + -0x30) == unaff_R14))
      && (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  lVar12 = *(longlong *)(param_1 + -0x20);
  uVar17 = 3;
  bVar15 = 3;
  uVar16 = 3;
  if (bVar10) {
    uVar5 = *(ulonglong *)(unaff_RBP + 0x77);
    *(int8_t *)(unaff_RBP + 0x57) = 3;
    *(int32_t *)(unaff_RBP + -0x39) = 3;
    uVar13 = uVar5;
    if (lVar12 != 0) {
      uVar13 = uVar5 - lVar12;
      if (uVar13 < 0x100) {
        *(int8_t *)(unaff_RBP + 0x57) = 0;
        *(int32_t *)(unaff_RBP + -0x39) = 0;
      }
      else if (uVar13 < 0x10000) {
        *(int8_t *)(unaff_RBP + 0x57) = 1;
        *(int32_t *)(unaff_RBP + -0x39) = 1;
      }
      else if (uVar13 < 0x100000000) {
        *(int8_t *)(unaff_RBP + 0x57) = 2;
        *(int32_t *)(unaff_RBP + -0x39) = 2;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x39) = 3;
        uVar13 = uVar5;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar5;
    lVar12 = *(longlong *)(param_1 + -0x38);
    *(ulonglong *)(unaff_RBP + -0x29) = uVar13;
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 1);
    **(int8_t **)(lVar12 + 0x18) = 3;
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 1;
    lVar12 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 1);
    **(int8_t **)(lVar12 + 0x18) = *(int8_t *)(unaff_RBP + 0x57);
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 1;
    lVar12 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 2);
    puVar6 = *(int8_t **)(lVar12 + 0x18);
    uVar2 = *(int32_t *)(unaff_RBP + -0x39);
    *puVar6 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar6[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,unaff_RBP + -0x29,uVar2);
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(lVar1);
    }
  }
  else {
    uVar5 = *(ulonglong *)(unaff_RBP + 0x77);
    bVar18 = 3;
    *(int8_t *)(unaff_RBP + 0x57) = 1;
    *(int16_t *)(unaff_RBP + 0x59) = unaff_SI;
    uVar2 = *(int32_t *)(unaff_RBP + -0x1d);
    uVar8 = *(int32_t *)(unaff_RBP + -0x19);
    uVar9 = *(int32_t *)(unaff_RBP + -0x15);
    *(int32_t *)(param_1 + -0x30) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(param_1 + -0x2c) = uVar2;
    *(int32_t *)(param_1 + -0x28) = uVar8;
    *(int32_t *)(param_1 + -0x24) = uVar9;
    uVar13 = uVar5;
    if (lVar12 != 0) {
      uVar13 = uVar5 - lVar12;
      if (uVar13 < 0x100) {
        bVar18 = 0;
      }
      else if (uVar13 < 0x10000) {
        bVar18 = 1;
      }
      else if (uVar13 < 0x100000000) {
        bVar18 = 2;
      }
      else {
        bVar18 = 3;
        uVar13 = uVar5;
      }
    }
    *(ulonglong *)(unaff_RBP + -0x11) = uVar13;
    if (unaff_R14 < 0x100) {
      bVar11 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar11 = 4;
    }
    else {
      bVar11 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar11 = 8;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar5;
    lVar12 = *(longlong *)(param_1 + -0x38);
    *(byte *)(unaff_RBP + 0x58) = bVar18 | bVar11;
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 1);
    **(int8_t **)(lVar12 + 0x18) = 1;
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 1;
    lVar12 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 1);
    **(byte **)(lVar12 + 0x18) = bVar18 | bVar11;
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 1;
    lVar12 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar12,(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x10)) + 2);
    puVar6 = *(int8_t **)(lVar12 + 0x18);
    *puVar6 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar6[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar12 + 0x18) = *(longlong *)(lVar12 + 0x18) + 2;
    FUN_1806b2670(unaff_RBP + -0x21,param_1 + -0x38,unaff_RBP + 0x57);
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(lVar1);
    }
  }
  if (*(longlong *)(unaff_RBP + -0x31) != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x31) + 8));
  }
  if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar4 + 8));
  }
  lVar4 = *(longlong *)(param_1 + -0x48);
  lVar12 = lVar4;
  if (lVar4 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar4 + 8));
    lVar12 = *(longlong *)(param_1 + -0x48);
  }
  iVar3 = *(int *)(unaff_RBP + 0x6f);
  *(int *)(unaff_RBP + -1) = iVar3;
  *(ulonglong *)(unaff_RBP + -9) = unaff_R14;
  *(int16_t *)(unaff_RBP + 3) = 0;
  if (lVar12 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar12 + 8));
  }
  if (((*(int *)(param_1 + -0x28) == iVar3) && (*(ulonglong *)(param_1 + -0x30) == unaff_R14)) &&
     ((*(char *)(param_1 + -0x24) == '\0' && (*(char *)(param_1 + -0x23) == '\0')))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  lVar7 = *(longlong *)(param_1 + -0x20);
  uVar5 = *(ulonglong *)(unaff_RBP + 0x7f);
  if (bVar10) {
    uVar13 = uVar5;
    if (lVar7 != 0) {
      uVar14 = uVar5 - lVar7;
      if (uVar14 < 0x100) {
        uVar16 = 0;
        uVar17 = 0;
        uVar13 = uVar14;
      }
      else if (uVar14 < 0x10000) {
        uVar16 = 1;
        uVar17 = 1;
        uVar13 = uVar14;
      }
      else if (uVar14 < 0x100000000) {
        uVar16 = 2;
        uVar17 = 2;
        uVar13 = uVar14;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar5;
    lVar7 = *(longlong *)(param_1 + -0x38);
    *(ulonglong *)(unaff_RBP + -0x31) = uVar13;
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 1);
    **(int8_t **)(lVar7 + 0x18) = 4;
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 1;
    lVar7 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 1);
    **(int8_t **)(lVar7 + 0x18) = uVar16;
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 1;
    lVar7 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 2);
    puVar6 = *(int8_t **)(lVar7 + 0x18);
    *puVar6 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar6[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,unaff_RBP + -0x31,uVar17);
  }
  else {
    *(int16_t *)(unaff_RBP + -0x33) = *(int16_t *)(unaff_RBP + 0x5f);
    *(int8_t *)(unaff_RBP + -0x35) = 2;
    uVar2 = *(int32_t *)(unaff_RBP + -5);
    uVar8 = *(int32_t *)(unaff_RBP + -1);
    uVar9 = *(int32_t *)(unaff_RBP + 3);
    *(int32_t *)(param_1 + -0x30) = *(int32_t *)(unaff_RBP + -9);
    *(int32_t *)(param_1 + -0x2c) = uVar2;
    *(int32_t *)(param_1 + -0x28) = uVar8;
    *(int32_t *)(param_1 + -0x24) = uVar9;
    uVar13 = uVar5;
    if (lVar7 != 0) {
      uVar13 = uVar5 - lVar7;
      if (uVar13 < 0x100) {
        bVar15 = 0;
      }
      else if (uVar13 < 0x10000) {
        bVar15 = 1;
      }
      else if (uVar13 < 0x100000000) {
        bVar15 = 2;
      }
      else {
        bVar15 = 3;
        uVar13 = uVar5;
      }
    }
    *(ulonglong *)(unaff_RBP + 7) = uVar13;
    if (unaff_R14 < 0x100) {
      bVar18 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar18 = 4;
    }
    else {
      bVar18 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar18 = 8;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar5;
    lVar7 = *(longlong *)(param_1 + -0x38);
    *(byte *)(unaff_RBP + -0x34) = bVar15 | bVar18;
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 1);
    **(int8_t **)(lVar7 + 0x18) = 2;
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 1;
    lVar7 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 1);
    **(byte **)(lVar7 + 0x18) = bVar15 | bVar18;
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 1;
    lVar7 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar7,(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x10)) + 2);
    puVar6 = *(int8_t **)(lVar7 + 0x18);
    *puVar6 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar6[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 2;
    FUN_1806b2670(unaff_RBP + -9,param_1 + -0x38,unaff_RBP + -0x35);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(lVar1);
  }
  if (lVar12 == 0) {
    if (lVar4 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar4 + 8));
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar12 + 8));
}






// 函数: void FUN_1806b355c(longlong param_1)
void FUN_1806b355c(longlong param_1)

{
  longlong lVar1;
  int32_t uVar2;
  int iVar3;
  ulonglong uVar4;
  int8_t *puVar5;
  longlong lVar6;
  int32_t uVar7;
  int32_t uVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong unaff_RBX;
  longlong lVar14;
  longlong unaff_RBP;
  int16_t unaff_SI;
  int unaff_EDI;
  longlong in_R11;
  byte bVar15;
  int8_t uVar16;
  uint64_t unaff_R12;
  byte bVar18;
  ulonglong unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar17;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lVar1 = param_1 + -0xb0;
  *(longlong *)(unaff_RBP + -0x31) = unaff_RBX;
  lVar11 = unaff_RBX;
  if (unaff_RBX != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
    lVar11 = *(longlong *)(param_1 + -0x48);
    *(longlong *)(unaff_RBP + -0x31) = lVar11;
  }
  *(ulonglong *)(unaff_RBP + -0x21) = unaff_R14;
  *(int *)(unaff_RBP + -0x19) = unaff_EDI;
  *(int16_t *)(unaff_RBP + -0x15) = 0;
  if (lVar11 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar11 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == unaff_EDI) && (*(ulonglong *)(param_1 + -0x30) == unaff_R14))
      && (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  lVar11 = *(longlong *)(param_1 + -0x20);
  uVar17 = 3;
  bVar15 = 3;
  uVar16 = 3;
  if (bVar9) {
    uVar4 = *(ulonglong *)(unaff_RBP + 0x77);
    *(int8_t *)(unaff_RBP + 0x57) = 3;
    *(int32_t *)(unaff_RBP + -0x39) = 3;
    uVar12 = uVar4;
    if (lVar11 != 0) {
      uVar12 = uVar4 - lVar11;
      if (uVar12 < 0x100) {
        *(int8_t *)(unaff_RBP + 0x57) = 0;
        *(int32_t *)(unaff_RBP + -0x39) = 0;
      }
      else if (uVar12 < 0x10000) {
        *(int8_t *)(unaff_RBP + 0x57) = 1;
        *(int32_t *)(unaff_RBP + -0x39) = 1;
      }
      else if (uVar12 < 0x100000000) {
        *(int8_t *)(unaff_RBP + 0x57) = 2;
        *(int32_t *)(unaff_RBP + -0x39) = 2;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x39) = 3;
        uVar12 = uVar4;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar4;
    lVar11 = *(longlong *)(param_1 + -0x38);
    *(ulonglong *)(unaff_RBP + -0x29) = uVar12;
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 1);
    **(int8_t **)(lVar11 + 0x18) = 3;
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1;
    lVar11 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 1);
    **(int8_t **)(lVar11 + 0x18) = *(int8_t *)(unaff_RBP + 0x57);
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1;
    lVar11 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 2);
    puVar5 = *(int8_t **)(lVar11 + 0x18);
    uVar2 = *(int32_t *)(unaff_RBP + -0x39);
    *puVar5 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar5[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,unaff_RBP + -0x29,uVar2);
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(lVar1);
    }
  }
  else {
    uVar4 = *(ulonglong *)(unaff_RBP + 0x77);
    bVar18 = 3;
    *(int8_t *)(unaff_RBP + 0x57) = 1;
    *(int16_t *)(unaff_RBP + 0x59) = unaff_SI;
    uVar2 = *(int32_t *)(unaff_RBP + -0x1d);
    uVar7 = *(int32_t *)(unaff_RBP + -0x19);
    uVar8 = *(int32_t *)(unaff_RBP + -0x15);
    *(int32_t *)(param_1 + -0x30) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(param_1 + -0x2c) = uVar2;
    *(int32_t *)(param_1 + -0x28) = uVar7;
    *(int32_t *)(param_1 + -0x24) = uVar8;
    uVar12 = uVar4;
    if (lVar11 != 0) {
      uVar12 = uVar4 - lVar11;
      if (uVar12 < 0x100) {
        bVar18 = 0;
      }
      else if (uVar12 < 0x10000) {
        bVar18 = 1;
      }
      else if (uVar12 < 0x100000000) {
        bVar18 = 2;
      }
      else {
        bVar18 = 3;
        uVar12 = uVar4;
      }
    }
    *(ulonglong *)(unaff_RBP + -0x11) = uVar12;
    if (unaff_R14 < 0x100) {
      bVar10 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar10 = 4;
    }
    else {
      bVar10 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar10 = 8;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar4;
    lVar11 = *(longlong *)(param_1 + -0x38);
    *(byte *)(unaff_RBP + 0x58) = bVar18 | bVar10;
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 1);
    **(int8_t **)(lVar11 + 0x18) = 1;
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1;
    lVar11 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 1);
    **(byte **)(lVar11 + 0x18) = bVar18 | bVar10;
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1;
    lVar11 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 2);
    puVar5 = *(int8_t **)(lVar11 + 0x18);
    *puVar5 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar5[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 2;
    FUN_1806b2670(unaff_RBP + -0x21,param_1 + -0x38,unaff_RBP + 0x57);
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(lVar1);
    }
  }
  if (*(longlong *)(unaff_RBP + -0x31) != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x31) + 8));
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  }
  lVar11 = *(longlong *)(param_1 + -0x48);
  lVar14 = lVar11;
  if (lVar11 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar11 + 8));
    lVar14 = *(longlong *)(param_1 + -0x48);
  }
  iVar3 = *(int *)(unaff_RBP + 0x6f);
  *(int *)(unaff_RBP + -1) = iVar3;
  *(ulonglong *)(unaff_RBP + -9) = unaff_R14;
  *(int16_t *)(unaff_RBP + 3) = 0;
  if (lVar14 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar14 + 8));
  }
  if (((*(int *)(param_1 + -0x28) == iVar3) && (*(ulonglong *)(param_1 + -0x30) == unaff_R14)) &&
     ((*(char *)(param_1 + -0x24) == '\0' && (*(char *)(param_1 + -0x23) == '\0')))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  lVar6 = *(longlong *)(param_1 + -0x20);
  uVar4 = *(ulonglong *)(unaff_RBP + 0x7f);
  if (bVar9) {
    uVar12 = uVar4;
    if (lVar6 != 0) {
      uVar13 = uVar4 - lVar6;
      if (uVar13 < 0x100) {
        uVar16 = 0;
        uVar17 = 0;
        uVar12 = uVar13;
      }
      else if (uVar13 < 0x10000) {
        uVar16 = 1;
        uVar17 = 1;
        uVar12 = uVar13;
      }
      else if (uVar13 < 0x100000000) {
        uVar16 = 2;
        uVar17 = 2;
        uVar12 = uVar13;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar4;
    lVar6 = *(longlong *)(param_1 + -0x38);
    *(ulonglong *)(unaff_RBP + -0x31) = uVar12;
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 1);
    **(int8_t **)(lVar6 + 0x18) = 4;
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
    lVar6 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 1);
    **(int8_t **)(lVar6 + 0x18) = uVar16;
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
    lVar6 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 2);
    puVar5 = *(int8_t **)(lVar6 + 0x18);
    *puVar5 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar5[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,unaff_RBP + -0x31,uVar17);
  }
  else {
    *(int16_t *)(unaff_RBP + -0x33) = *(int16_t *)(unaff_RBP + 0x5f);
    *(int8_t *)(unaff_RBP + -0x35) = 2;
    uVar2 = *(int32_t *)(unaff_RBP + -5);
    uVar7 = *(int32_t *)(unaff_RBP + -1);
    uVar8 = *(int32_t *)(unaff_RBP + 3);
    *(int32_t *)(param_1 + -0x30) = *(int32_t *)(unaff_RBP + -9);
    *(int32_t *)(param_1 + -0x2c) = uVar2;
    *(int32_t *)(param_1 + -0x28) = uVar7;
    *(int32_t *)(param_1 + -0x24) = uVar8;
    uVar12 = uVar4;
    if (lVar6 != 0) {
      uVar12 = uVar4 - lVar6;
      if (uVar12 < 0x100) {
        bVar15 = 0;
      }
      else if (uVar12 < 0x10000) {
        bVar15 = 1;
      }
      else if (uVar12 < 0x100000000) {
        bVar15 = 2;
      }
      else {
        bVar15 = 3;
        uVar12 = uVar4;
      }
    }
    *(ulonglong *)(unaff_RBP + 7) = uVar12;
    if (unaff_R14 < 0x100) {
      bVar18 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar18 = 4;
    }
    else {
      bVar18 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar18 = 8;
      }
    }
    *(ulonglong *)(param_1 + -0x20) = uVar4;
    lVar6 = *(longlong *)(param_1 + -0x38);
    *(byte *)(unaff_RBP + -0x34) = bVar15 | bVar18;
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 1);
    **(int8_t **)(lVar6 + 0x18) = 2;
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
    lVar6 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 1);
    **(byte **)(lVar6 + 0x18) = bVar15 | bVar18;
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
    lVar6 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar6,(*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x10)) + 2);
    puVar5 = *(int8_t **)(lVar6 + 0x18);
    *puVar5 = (char)*(int16_t *)(unaff_RBP + 0x5f);
    puVar5[1] = *(int8_t *)(unaff_RBP + 0x60);
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 2;
    FUN_1806b2670(unaff_RBP + -9,param_1 + -0x38,unaff_RBP + -0x35);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(lVar1);
  }
  if (lVar14 == 0) {
    if (lVar11 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar11 + 8));
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar14 + 8));
}






// 函数: void FUN_1806b3abc(void)
void FUN_1806b3abc(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}






// 函数: void FUN_1806b3ad2(void)
void FUN_1806b3ad2(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
}







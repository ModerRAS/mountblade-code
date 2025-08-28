#include "TaleWorlds.Native.Split.h"

// 99_part_01_part016.c - 9 个函数

// 函数: void FUN_1800b01b0(longlong param_1,longlong param_2)
void FUN_1800b01b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x10) - lVar1 >> 3 != 0) {
    do {
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,*(longlong *)(uVar4 + lVar1) + 8);
      }
      lVar1 = *(longlong *)(param_1 + 8);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1 >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x30) - lVar1 >> 3 != 0) {
    do {
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,*(longlong *)(uVar4 + lVar1) + 8);
      }
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar1 >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x50) - lVar1 >> 3 != 0) {
    do {
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,*(longlong *)(uVar4 + lVar1) + 0x40);
      }
      lVar1 = *(longlong *)(param_1 + 0x48);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x50) - lVar1 >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  uVar3 = uVar5;
  if (*(longlong *)(param_1 + 0x70) - lVar1 >> 3 != 0) {
    do {
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,*(longlong *)(uVar5 + lVar1) + 0x10);
      }
      lVar1 = *(longlong *)(param_1 + 0x68);
      uVar2 = (int)uVar3 + 1;
      uVar5 = uVar5 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x70) - lVar1 >> 3));
  }
  return;
}






// 函数: void FUN_1800b01cf(longlong param_1)
void FUN_1800b01cf(longlong param_1)

{
  longlong in_RAX;
  longlong unaff_RBX;
  int iVar1;
  int unaff_R14D;
  
  iVar1 = unaff_R14D;
  if (in_RAX - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
        *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820();
      }
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  iVar1 = unaff_R14D;
  if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3 != 0) {
    do {
      if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
        *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820();
      }
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3));
  }
  iVar1 = unaff_R14D;
  if (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3 != 0) {
    do {
      if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
        *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820();
      }
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3));
  }
  if (*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3 != 0) {
    do {
      if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
        *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820();
      }
      unaff_R14D = unaff_R14D + 1;
    } while ((ulonglong)(longlong)unaff_R14D <
             (ulonglong)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3));
  }
  return;
}






// 函数: void FUN_1800b030f(void)
void FUN_1800b030f(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  int unaff_R14D;
  
  do {
    if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
      *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
      FUN_180627ae0();
    }
    else {
      FUN_180059820();
    }
    unaff_R14D = unaff_R14D + 1;
  } while ((ulonglong)(longlong)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0x70) - *(longlong *)(unaff_RDI + 0x68) >> 3));
  return;
}






// 函数: void FUN_1800b0380(longlong param_1)
void FUN_1800b0380(longlong param_1)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  void *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar7 = *(longlong *)(param_1 + 8);
  uVar13 = 0;
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(longlong *)(param_1 + 0x10) - lVar7 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar12 + lVar7);
      puVar5 = puVar1;
      if ((*(longlong *)(puVar1 + 0x18) != 0) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (DAT_180c82860 == '\0') {
          puVar8 = &DAT_18098bc73;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar8 = *(void **)(puVar1 + 4);
          }
          FUN_180626f80(&UNK_18098bc00,puVar8);
        }
        puVar5 = puVar1 + 0x12;
      }
      uVar9 = (int)uVar10 + 1;
      puVar1[1] = *puVar5;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar10 = (ulonglong)uVar9;
      uVar12 = uVar12 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar7 >> 3));
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(longlong *)(param_1 + 0x30) - lVar7 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar12 + lVar7);
      puVar5 = puVar1;
      if ((*(longlong *)(puVar1 + 0x18) != 0) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (DAT_180c82860 == '\0') {
          puVar8 = &DAT_18098bc73;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar8 = *(void **)(puVar1 + 4);
          }
          FUN_180626f80(&UNK_18098bc00,puVar8);
        }
        puVar5 = puVar1 + 0x12;
      }
      uVar9 = (int)uVar10 + 1;
      puVar1[1] = *puVar5;
      lVar7 = *(longlong *)(param_1 + 0x28);
      uVar10 = (ulonglong)uVar9;
      uVar12 = uVar12 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar7 >> 3));
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(longlong *)(param_1 + 0x50) - lVar7 >> 3 != 0) {
    do {
      lVar7 = *(longlong *)(uVar10 + lVar7);
      if ((*(longlong *)(lVar7 + 0xb0) == 0) ||
         (cVar3 = (**(code **)(lVar7 + 0xb8))(lVar7), cVar3 != '\0')) {
        uVar9 = *(uint *)(lVar7 + 0x10);
        uVar11 = (ulonglong)uVar9;
        if (*(longlong *)(lVar7 + 8) != 0) {
          FUN_1806277c0(lVar7 + 0x20,uVar11);
        }
        if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(lVar7 + 8),uVar11);
        }
        *(int32_t *)(lVar7 + 0x30) = 0;
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(int8_t *)(uVar11 + *(longlong *)(lVar7 + 0x28)) = 0;
        }
        uVar4 = *(int32_t *)(lVar7 + 0x1c);
      }
      else {
        if (DAT_180c82860 == '\0') {
          puVar8 = &DAT_18098bc73;
          if (*(void **)(lVar7 + 0x48) != (void *)0x0) {
            puVar8 = *(void **)(lVar7 + 0x48);
          }
          FUN_180626f80(&UNK_18098bc00,puVar8);
        }
        uVar9 = *(uint *)(lVar7 + 0x90);
        uVar11 = (ulonglong)uVar9;
        if (*(longlong *)(lVar7 + 0x88) != 0) {
          FUN_1806277c0(lVar7 + 0x20,uVar11);
        }
        if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(lVar7 + 0x88),uVar11);
        }
        *(int32_t *)(lVar7 + 0x30) = 0;
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(int8_t *)(uVar11 + *(longlong *)(lVar7 + 0x28)) = 0;
        }
        uVar4 = *(int32_t *)(lVar7 + 0x9c);
      }
      *(int32_t *)(lVar7 + 0x3c) = uVar4;
      uVar9 = (int)uVar12 + 1;
      lVar7 = *(longlong *)(param_1 + 0x48);
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x50) - lVar7 >> 3));
  }
  lVar7 = *(longlong *)(param_1 + 0x68);
  uVar10 = uVar13;
  if (*(longlong *)(param_1 + 0x70) - lVar7 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(uVar13 + lVar7);
      puVar6 = puVar2;
      if ((puVar2[0xd] != 0) && (cVar3 = (*(code *)puVar2[0xe])(puVar2,puVar2 + 0xb), cVar3 == '\0')
         ) {
        if (DAT_180c82860 == '\0') {
          puVar8 = &DAT_18098bc73;
          if ((void *)puVar2[3] != (void *)0x0) {
            puVar8 = (void *)puVar2[3];
          }
          FUN_180626f80(&UNK_18098bc00,puVar8);
        }
        puVar6 = puVar2 + 10;
      }
      uVar9 = (int)uVar10 + 1;
      puVar2[1] = *puVar6;
      uVar13 = uVar13 + 8;
      lVar7 = *(longlong *)(param_1 + 0x68);
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x70) - lVar7 >> 3));
  }
  return;
}






// 函数: void FUN_1800b039e(uint64_t param_1,longlong param_2)
void FUN_1800b039e(uint64_t param_1,longlong param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  char cVar4;
  int32_t uVar5;
  longlong in_RAX;
  int32_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  void *puVar9;
  longlong unaff_RBP;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_R12;
  
  uVar11 = unaff_R12 & 0xffffffff;
  cVar4 = (char)unaff_R12;
  if (in_RAX >> 3 != 0) {
    uVar13 = unaff_R12 & 0xffffffff;
    do {
      puVar1 = *(int32_t **)(uVar13 + param_2);
      puVar6 = puVar1;
      if ((*(ulonglong *)(puVar1 + 0x18) != unaff_R12) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (DAT_180c82860 == cVar4) {
          puVar9 = &DAT_18098bc73;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar9 = *(void **)(puVar1 + 4);
          }
          FUN_180626f80(&UNK_18098bc00,puVar9);
        }
        puVar6 = puVar1 + 0x12;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      puVar1[1] = *puVar6;
      uVar13 = uVar13 + 8;
      param_2 = *(longlong *)(unaff_RBP + 8);
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBP + 0x10) - param_2 >> 3));
  }
  lVar8 = *(longlong *)(unaff_RBP + 0x28);
  uVar13 = unaff_R12 & 0xffffffff;
  uVar11 = unaff_R12;
  if (*(longlong *)(unaff_RBP + 0x30) - lVar8 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar11 + lVar8);
      puVar6 = puVar1;
      if ((*(ulonglong *)(puVar1 + 0x18) != unaff_R12) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (DAT_180c82860 == cVar4) {
          puVar9 = &DAT_18098bc73;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar9 = *(void **)(puVar1 + 4);
          }
          FUN_180626f80(&UNK_18098bc00,puVar9);
        }
        puVar6 = puVar1 + 0x12;
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      puVar1[1] = *puVar6;
      lVar8 = *(longlong *)(unaff_RBP + 0x28);
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBP + 0x30) - lVar8 >> 3));
  }
  lVar8 = *(longlong *)(unaff_RBP + 0x48);
  uVar13 = unaff_R12 & 0xffffffff;
  uVar11 = unaff_R12;
  if (*(longlong *)(unaff_RBP + 0x50) - lVar8 >> 3 != 0) {
    do {
      lVar8 = *(longlong *)(uVar11 + lVar8);
      if ((*(ulonglong *)(lVar8 + 0xb0) == unaff_R12) ||
         (cVar3 = (**(code **)(lVar8 + 0xb8))(lVar8), cVar3 != '\0')) {
        uVar10 = *(uint *)(lVar8 + 0x10);
        uVar12 = (ulonglong)uVar10;
        if (*(ulonglong *)(lVar8 + 8) != unaff_R12) {
          FUN_1806277c0(lVar8 + 0x20,uVar12);
        }
        if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar8 + 0x28),*(uint64_t *)(lVar8 + 8),uVar12);
        }
        *(int32_t *)(lVar8 + 0x30) = 0;
        if (*(longlong *)(lVar8 + 0x28) != 0) {
          *(char *)(uVar12 + *(longlong *)(lVar8 + 0x28)) = cVar4;
        }
        uVar5 = *(int32_t *)(lVar8 + 0x1c);
      }
      else {
        if (DAT_180c82860 == cVar4) {
          puVar9 = &DAT_18098bc73;
          if (*(void **)(lVar8 + 0x48) != (void *)0x0) {
            puVar9 = *(void **)(lVar8 + 0x48);
          }
          FUN_180626f80(&UNK_18098bc00,puVar9);
        }
        uVar10 = *(uint *)(lVar8 + 0x90);
        uVar12 = (ulonglong)uVar10;
        if (*(ulonglong *)(lVar8 + 0x88) != unaff_R12) {
          FUN_1806277c0(lVar8 + 0x20,uVar12);
        }
        if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar8 + 0x28),*(uint64_t *)(lVar8 + 0x88),uVar12);
        }
        *(int32_t *)(lVar8 + 0x30) = 0;
        if (*(longlong *)(lVar8 + 0x28) != 0) {
          *(char *)(uVar12 + *(longlong *)(lVar8 + 0x28)) = cVar4;
        }
        uVar5 = *(int32_t *)(lVar8 + 0x9c);
      }
      *(int32_t *)(lVar8 + 0x3c) = uVar5;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      lVar8 = *(longlong *)(unaff_RBP + 0x48);
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBP + 0x50) - lVar8 >> 3));
  }
  lVar8 = *(longlong *)(unaff_RBP + 0x68);
  uVar11 = unaff_R12;
  if (*(longlong *)(unaff_RBP + 0x70) - lVar8 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(unaff_R12 + lVar8);
      puVar7 = puVar2;
      if ((puVar2[0xd] != 0) && (cVar4 = (*(code *)puVar2[0xe])(puVar2,puVar2 + 0xb), cVar4 == '\0')
         ) {
        if (DAT_180c82860 == '\0') {
          puVar9 = &DAT_18098bc73;
          if ((void *)puVar2[3] != (void *)0x0) {
            puVar9 = (void *)puVar2[3];
          }
          FUN_180626f80(&UNK_18098bc00,puVar9);
        }
        puVar7 = puVar2 + 10;
      }
      uVar10 = (int)uVar11 + 1;
      puVar2[1] = *puVar7;
      unaff_R12 = unaff_R12 + 8;
      lVar8 = *(longlong *)(unaff_RBP + 0x68);
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBP + 0x70) - lVar8 >> 3));
  }
  return;
}






// 函数: void FUN_1800b04d8(uint64_t param_1,longlong param_2)
void FUN_1800b04d8(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  void *puVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  uint uVar9;
  ulonglong unaff_R12;
  ulonglong uVar10;
  int unaff_R15D;
  
  uVar10 = unaff_R12;
  do {
    lVar6 = *(longlong *)(uVar10 + param_2);
    cVar3 = (char)unaff_R12;
    if ((*(ulonglong *)(lVar6 + 0xb0) == unaff_R12) ||
       (cVar2 = (**(code **)(lVar6 + 0xb8))(lVar6), cVar2 != '\0')) {
      uVar9 = *(uint *)(lVar6 + 0x10);
      uVar8 = (ulonglong)uVar9;
      if (*(ulonglong *)(lVar6 + 8) != unaff_R12) {
        FUN_1806277c0(lVar6 + 0x20,uVar8);
      }
      if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar6 + 0x28),*(uint64_t *)(lVar6 + 8),uVar8);
      }
      *(int32_t *)(lVar6 + 0x30) = 0;
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        *(char *)(uVar8 + *(longlong *)(lVar6 + 0x28)) = cVar3;
      }
      uVar4 = *(int32_t *)(lVar6 + 0x1c);
    }
    else {
      if (DAT_180c82860 == cVar3) {
        puVar7 = &DAT_18098bc73;
        if (*(void **)(lVar6 + 0x48) != (void *)0x0) {
          puVar7 = *(void **)(lVar6 + 0x48);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar9 = *(uint *)(lVar6 + 0x90);
      uVar8 = (ulonglong)uVar9;
      if (*(ulonglong *)(lVar6 + 0x88) != unaff_R12) {
        FUN_1806277c0(lVar6 + 0x20,uVar8);
      }
      if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar6 + 0x28),*(uint64_t *)(lVar6 + 0x88),uVar8);
      }
      *(int32_t *)(lVar6 + 0x30) = 0;
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        *(char *)(uVar8 + *(longlong *)(lVar6 + 0x28)) = cVar3;
      }
      uVar4 = *(int32_t *)(lVar6 + 0x9c);
    }
    *(int32_t *)(lVar6 + 0x3c) = uVar4;
    unaff_R15D = unaff_R15D + 1;
    param_2 = *(longlong *)(unaff_RBP + 0x48);
    uVar10 = uVar10 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBP + 0x50) - param_2 >> 3) <=
        (ulonglong)(longlong)unaff_R15D) {
      lVar6 = *(longlong *)(unaff_RBP + 0x68);
      uVar10 = unaff_R12;
      if (*(longlong *)(unaff_RBP + 0x70) - lVar6 >> 3 != 0) {
        do {
          puVar1 = *(uint64_t **)(unaff_R12 + lVar6);
          puVar5 = puVar1;
          if ((puVar1[0xd] != 0) &&
             (cVar3 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar3 == '\0')) {
            if (DAT_180c82860 == '\0') {
              puVar7 = &DAT_18098bc73;
              if ((void *)puVar1[3] != (void *)0x0) {
                puVar7 = (void *)puVar1[3];
              }
              FUN_180626f80(&UNK_18098bc00,puVar7);
            }
            puVar5 = puVar1 + 10;
          }
          uVar9 = (int)uVar10 + 1;
          puVar1[1] = *puVar5;
          unaff_R12 = unaff_R12 + 8;
          lVar6 = *(longlong *)(unaff_RBP + 0x68);
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(unaff_RBP + 0x70) - lVar6 >> 3));
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1800b05e0(void)
void FUN_1800b05e0(void)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  longlong lVar4;
  void *puVar5;
  longlong unaff_RBP;
  uint uVar6;
  ulonglong unaff_R12;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(unaff_RBP + 0x68);
  uVar7 = unaff_R12;
  if (*(longlong *)(unaff_RBP + 0x70) - lVar4 >> 3 != 0) {
    do {
      puVar1 = *(uint64_t **)(unaff_R12 + lVar4);
      puVar3 = puVar1;
      if ((puVar1[0xd] != 0) && (cVar2 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar2 == '\0')
         ) {
        if (DAT_180c82860 == '\0') {
          puVar5 = &DAT_18098bc73;
          if ((void *)puVar1[3] != (void *)0x0) {
            puVar5 = (void *)puVar1[3];
          }
          FUN_180626f80(&UNK_18098bc00,puVar5);
        }
        puVar3 = puVar1 + 10;
      }
      uVar6 = (int)uVar7 + 1;
      puVar1[1] = *puVar3;
      unaff_R12 = unaff_R12 + 8;
      lVar4 = *(longlong *)(unaff_RBP + 0x68);
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_RBP + 0x70) - lVar4 >> 3));
  }
  return;
}






// 函数: void FUN_1800b05fe(uint64_t param_1,longlong param_2)
void FUN_1800b05fe(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  void *puVar4;
  longlong unaff_RBP;
  uint uVar5;
  ulonglong unaff_R12;
  ulonglong uVar6;
  
  uVar6 = unaff_R12;
  do {
    puVar1 = *(uint64_t **)(unaff_R12 + param_2);
    puVar3 = puVar1;
    if ((puVar1[0xd] != 0) && (cVar2 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar2 == '\0'))
    {
      if (DAT_180c82860 == '\0') {
        puVar4 = &DAT_18098bc73;
        if ((void *)puVar1[3] != (void *)0x0) {
          puVar4 = (void *)puVar1[3];
        }
        FUN_180626f80(&UNK_18098bc00,puVar4);
      }
      puVar3 = puVar1 + 10;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    puVar1[1] = *puVar3;
    unaff_R12 = unaff_R12 + 8;
    param_2 = *(longlong *)(unaff_RBP + 0x68);
  } while ((ulonglong)(longlong)(int)uVar5 <
           (ulonglong)(*(longlong *)(unaff_RBP + 0x70) - param_2 >> 3));
  return;
}



uint64_t FUN_1800b0680(longlong param_1,uint64_t param_2)

{
  char cVar1;
  void *puVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    cVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    if (cVar1 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar2 = &DAT_18098bc73;
        if (*(void **)(param_1 + 0x48) != (void *)0x0) {
          puVar2 = *(void **)(param_1 + 0x48);
        }
        FUN_180626f80(&UNK_18098bc00,puVar2);
      }
      FUN_180627be0(param_1 + 0x20,param_1 + 0x80);
      return 0;
    }
  }
  FUN_180627be0(param_1 + 0x20,param_2);
  return 1;
}



longlong FUN_1800b0710(longlong param_1,int32_t *param_2)

{
  int32_t uVar1;
  char cVar2;
  void *puVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar2 = (**(code **)(param_1 + 0x68))(param_2,param_1 + 0x50);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(param_1 + 0x10) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x10);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(param_1 + 4) = *(int32_t *)(param_1 + 0x48);
      return (ulonglong)(uint3)((uint)*(int32_t *)(param_1 + 0x48) >> 8) << 8;
    }
  }
  uVar1 = *param_2;
  *(int32_t *)(param_1 + 4) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



uint64_t *
FUN_1800b07a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xb;
  strcpy_s(param_2[1],0x80,&UNK_180a02998,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t *
FUN_1800b0820(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1800b0890(uint64_t *param_1)
void FUN_1800b0890(uint64_t *param_1)

{
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800b08e0(longlong param_1,uint64_t *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  void *puVar2;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_18098bc73;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_3 + 8);
    }
    plVar1 = (longlong *)FUN_1802abc50(param_1 + 0xa0,puVar2);
    if (plVar1 == (longlong *)0x0) {
      if (param_4 == '\0') {
        *param_2 = 0;
      }
      else {
        puVar2 = &DAT_18098bc73;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar2 = *(void **)(param_3 + 8);
        }
        FUN_1800622d0(_DAT_180c86928,0,7,&UNK_180a029b0,puVar2);
        puVar2 = &DAT_18098bc73;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar2 = *(void **)(param_3 + 8);
        }
        FUN_180627020(&UNK_180a029d0,puVar2);
        plVar1 = (longlong *)FUN_1800bd410(_DAT_180c86898);
        *param_2 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
      }
    }
    else {
      (**(code **)(*plVar1 + 0x28))(plVar1);
      *param_2 = plVar1;
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





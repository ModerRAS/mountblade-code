#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_01_part016.c - 9 个函数
// 函数: void function_0b01b0(int64_t param_1,int64_t param_2)
void function_0b01b0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar5 = 0;
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(int64_t *)(param_1 + 0x10) - lVar1 >> 3 != 0) {
    do {
      if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
        *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem(param_2,*(int64_t *)(uVar4 + lVar1) + 8);
      }
      lVar1 = *(int64_t *)(param_1 + 8);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar1 >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x28);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(int64_t *)(param_1 + 0x30) - lVar1 >> 3 != 0) {
    do {
      if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
        *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem(param_2,*(int64_t *)(uVar4 + lVar1) + 8);
      }
      lVar1 = *(int64_t *)(param_1 + 0x28);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x30) - lVar1 >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x48);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (*(int64_t *)(param_1 + 0x50) - lVar1 >> 3 != 0) {
    do {
      if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
        *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem(param_2,*(int64_t *)(uVar4 + lVar1) + 0x40);
      }
      lVar1 = *(int64_t *)(param_1 + 0x48);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x50) - lVar1 >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x68);
  uVar3 = uVar5;
  if (*(int64_t *)(param_1 + 0x70) - lVar1 >> 3 != 0) {
    do {
      if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
        *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem(param_2,*(int64_t *)(uVar5 + lVar1) + 0x10);
      }
      lVar1 = *(int64_t *)(param_1 + 0x68);
      uVar2 = (int)uVar3 + 1;
      uVar5 = uVar5 + 8;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x70) - lVar1 >> 3));
  }
  return;
}
// 函数: void function_0b01cf(int64_t param_1)
void function_0b01cf(int64_t param_1)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int iVar1;
  int unaff_R14D;
  iVar1 = unaff_R14D;
  if (in_RAX - *(int64_t *)(param_1 + 8) >> 3 != 0) {
    do {
      if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
        *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem();
      }
      iVar1 = iVar1 + 1;
    } while ((uint64_t)(int64_t)iVar1 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3));
  }
  iVar1 = unaff_R14D;
  if (*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28) >> 3 != 0) {
    do {
      if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
        *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem();
      }
      iVar1 = iVar1 + 1;
    } while ((uint64_t)(int64_t)iVar1 <
             (uint64_t)(*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28) >> 3));
  }
  iVar1 = unaff_R14D;
  if (*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3 != 0) {
    do {
      if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
        *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem();
      }
      iVar1 = iVar1 + 1;
    } while ((uint64_t)(int64_t)iVar1 <
             (uint64_t)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3));
  }
  if (*(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68) >> 3 != 0) {
    do {
      if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
        *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
        SystemCore_NetworkHandler0();
      }
      else {
        SystemCore_BackupSystem();
      }
      unaff_R14D = unaff_R14D + 1;
    } while ((uint64_t)(int64_t)unaff_R14D <
             (uint64_t)(*(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68) >> 3));
  }
  return;
}
// 函数: void function_0b030f(void)
void function_0b030f(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int unaff_R14D;
  do {
    if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
      *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
      SystemCore_NetworkHandler0();
    }
    else {
      SystemCore_BackupSystem();
    }
    unaff_R14D = unaff_R14D + 1;
  } while ((uint64_t)(int64_t)unaff_R14D <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x70) - *(int64_t *)(unaff_RDI + 0x68) >> 3));
  return;
}
// 函数: void function_0b0380(int64_t param_1)
void function_0b0380(int64_t param_1)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  void *puVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  lVar7 = *(int64_t *)(param_1 + 8);
  uVar13 = 0;
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(int64_t *)(param_1 + 0x10) - lVar7 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar12 + lVar7);
      puVar5 = puVar1;
      if ((*(int64_t *)(puVar1 + 0x18) != 0) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar8 = &system_buffer_ptr;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar8 = *(void **)(puVar1 + 4);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar8);
        }
        puVar5 = puVar1 + 0x12;
      }
      uVar9 = (int)uVar10 + 1;
      puVar1[1] = *puVar5;
      lVar7 = *(int64_t *)(param_1 + 8);
      uVar10 = (uint64_t)uVar9;
      uVar12 = uVar12 + 8;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar7 >> 3));
  }
  lVar7 = *(int64_t *)(param_1 + 0x28);
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(int64_t *)(param_1 + 0x30) - lVar7 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar12 + lVar7);
      puVar5 = puVar1;
      if ((*(int64_t *)(puVar1 + 0x18) != 0) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar8 = &system_buffer_ptr;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar8 = *(void **)(puVar1 + 4);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar8);
        }
        puVar5 = puVar1 + 0x12;
      }
      uVar9 = (int)uVar10 + 1;
      puVar1[1] = *puVar5;
      lVar7 = *(int64_t *)(param_1 + 0x28);
      uVar10 = (uint64_t)uVar9;
      uVar12 = uVar12 + 8;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0x30) - lVar7 >> 3));
  }
  lVar7 = *(int64_t *)(param_1 + 0x48);
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (*(int64_t *)(param_1 + 0x50) - lVar7 >> 3 != 0) {
    do {
      lVar7 = *(int64_t *)(uVar10 + lVar7);
      if ((*(int64_t *)(lVar7 + 0xb0) == 0) ||
         (cVar3 = (**(code **)(lVar7 + 0xb8))(lVar7), cVar3 != '\0')) {
        uVar9 = *(uint *)(lVar7 + 0x10);
        uVar11 = (uint64_t)uVar9;
        if (*(int64_t *)(lVar7 + 8) != 0) {
          CoreMemoryPoolProcessor(lVar7 + 0x20,uVar11);
        }
        if (uVar9 != 0) {
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(lVar7 + 8),uVar11);
        }
        *(int32_t *)(lVar7 + 0x30) = 0;
        if (*(int64_t *)(lVar7 + 0x28) != 0) {
          *(int8_t *)(uVar11 + *(int64_t *)(lVar7 + 0x28)) = 0;
        }
        uVar4 = *(int32_t *)(lVar7 + 0x1c);
      }
      else {
        if (system_debug_flag == '\0') {
          puVar8 = &system_buffer_ptr;
          if (*(void **)(lVar7 + 0x48) != (void *)0x0) {
            puVar8 = *(void **)(lVar7 + 0x48);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar8);
        }
        uVar9 = *(uint *)(lVar7 + 0x90);
        uVar11 = (uint64_t)uVar9;
        if (*(int64_t *)(lVar7 + 0x88) != 0) {
          CoreMemoryPoolProcessor(lVar7 + 0x20,uVar11);
        }
        if (uVar9 != 0) {
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(lVar7 + 0x88),uVar11);
        }
        *(int32_t *)(lVar7 + 0x30) = 0;
        if (*(int64_t *)(lVar7 + 0x28) != 0) {
          *(int8_t *)(uVar11 + *(int64_t *)(lVar7 + 0x28)) = 0;
        }
        uVar4 = *(int32_t *)(lVar7 + 0x9c);
      }
      *(int32_t *)(lVar7 + 0x3c) = uVar4;
      uVar9 = (int)uVar12 + 1;
      lVar7 = *(int64_t *)(param_1 + 0x48);
      uVar10 = uVar10 + 8;
      uVar12 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0x50) - lVar7 >> 3));
  }
  lVar7 = *(int64_t *)(param_1 + 0x68);
  uVar10 = uVar13;
  if (*(int64_t *)(param_1 + 0x70) - lVar7 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(uVar13 + lVar7);
      puVar6 = puVar2;
      if ((puVar2[0xd] != 0) && (cVar3 = (*(code *)puVar2[0xe])(puVar2,puVar2 + 0xb), cVar3 == '\0')
         ) {
        if (system_debug_flag == '\0') {
          puVar8 = &system_buffer_ptr;
          if ((void *)puVar2[3] != (void *)0x0) {
            puVar8 = (void *)puVar2[3];
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar8);
        }
        puVar6 = puVar2 + 10;
      }
      uVar9 = (int)uVar10 + 1;
      puVar2[1] = *puVar6;
      uVar13 = uVar13 + 8;
      lVar7 = *(int64_t *)(param_1 + 0x68);
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0x70) - lVar7 >> 3));
  }
  return;
}
// 函数: void function_0b039e(uint64_t param_1,int64_t param_2)
void function_0b039e(uint64_t param_1,int64_t param_2)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  char cVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int32_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  void *puVar9;
  int64_t unaff_RBP;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t unaff_R12;
  uVar11 = unaff_R12 & 0xffffffff;
  cVar4 = (char)unaff_R12;
  if (in_RAX >> 3 != 0) {
    uVar13 = unaff_R12 & 0xffffffff;
    do {
      puVar1 = *(int32_t **)(uVar13 + param_2);
      puVar6 = puVar1;
      if ((*(uint64_t *)(puVar1 + 0x18) != unaff_R12) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (system_debug_flag == cVar4) {
          puVar9 = &system_buffer_ptr;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar9 = *(void **)(puVar1 + 4);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar9);
        }
        puVar6 = puVar1 + 0x12;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      puVar1[1] = *puVar6;
      uVar13 = uVar13 + 8;
      param_2 = *(int64_t *)(unaff_RBP + 8);
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBP + 0x10) - param_2 >> 3));
  }
  lVar8 = *(int64_t *)(unaff_RBP + 0x28);
  uVar13 = unaff_R12 & 0xffffffff;
  uVar11 = unaff_R12;
  if (*(int64_t *)(unaff_RBP + 0x30) - lVar8 >> 3 != 0) {
    do {
      puVar1 = *(int32_t **)(uVar11 + lVar8);
      puVar6 = puVar1;
      if ((*(uint64_t *)(puVar1 + 0x18) != unaff_R12) &&
         (cVar3 = (**(code **)(puVar1 + 0x1a))(puVar1,puVar1 + 0x14), cVar3 == '\0')) {
        if (system_debug_flag == cVar4) {
          puVar9 = &system_buffer_ptr;
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            puVar9 = *(void **)(puVar1 + 4);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar9);
        }
        puVar6 = puVar1 + 0x12;
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar10;
      puVar1[1] = *puVar6;
      lVar8 = *(int64_t *)(unaff_RBP + 0x28);
      uVar11 = uVar11 + 8;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBP + 0x30) - lVar8 >> 3));
  }
  lVar8 = *(int64_t *)(unaff_RBP + 0x48);
  uVar13 = unaff_R12 & 0xffffffff;
  uVar11 = unaff_R12;
  if (*(int64_t *)(unaff_RBP + 0x50) - lVar8 >> 3 != 0) {
    do {
      lVar8 = *(int64_t *)(uVar11 + lVar8);
      if ((*(uint64_t *)(lVar8 + 0xb0) == unaff_R12) ||
         (cVar3 = (**(code **)(lVar8 + 0xb8))(lVar8), cVar3 != '\0')) {
        uVar10 = *(uint *)(lVar8 + 0x10);
        uVar12 = (uint64_t)uVar10;
        if (*(uint64_t *)(lVar8 + 8) != unaff_R12) {
          CoreMemoryPoolProcessor(lVar8 + 0x20,uVar12);
        }
        if (uVar10 != 0) {
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar8 + 0x28),*(uint64_t *)(lVar8 + 8),uVar12);
        }
        *(int32_t *)(lVar8 + 0x30) = 0;
        if (*(int64_t *)(lVar8 + 0x28) != 0) {
          *(char *)(uVar12 + *(int64_t *)(lVar8 + 0x28)) = cVar4;
        }
        uVar5 = *(int32_t *)(lVar8 + 0x1c);
      }
      else {
        if (system_debug_flag == cVar4) {
          puVar9 = &system_buffer_ptr;
          if (*(void **)(lVar8 + 0x48) != (void *)0x0) {
            puVar9 = *(void **)(lVar8 + 0x48);
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar9);
        }
        uVar10 = *(uint *)(lVar8 + 0x90);
        uVar12 = (uint64_t)uVar10;
        if (*(uint64_t *)(lVar8 + 0x88) != unaff_R12) {
          CoreMemoryPoolProcessor(lVar8 + 0x20,uVar12);
        }
        if (uVar10 != 0) {
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar8 + 0x28),*(uint64_t *)(lVar8 + 0x88),uVar12);
        }
        *(int32_t *)(lVar8 + 0x30) = 0;
        if (*(int64_t *)(lVar8 + 0x28) != 0) {
          *(char *)(uVar12 + *(int64_t *)(lVar8 + 0x28)) = cVar4;
        }
        uVar5 = *(int32_t *)(lVar8 + 0x9c);
      }
      *(int32_t *)(lVar8 + 0x3c) = uVar5;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar10;
      lVar8 = *(int64_t *)(unaff_RBP + 0x48);
      uVar11 = uVar11 + 8;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBP + 0x50) - lVar8 >> 3));
  }
  lVar8 = *(int64_t *)(unaff_RBP + 0x68);
  uVar11 = unaff_R12;
  if (*(int64_t *)(unaff_RBP + 0x70) - lVar8 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(unaff_R12 + lVar8);
      puVar7 = puVar2;
      if ((puVar2[0xd] != 0) && (cVar4 = (*(code *)puVar2[0xe])(puVar2,puVar2 + 0xb), cVar4 == '\0')
         ) {
        if (system_debug_flag == '\0') {
          puVar9 = &system_buffer_ptr;
          if ((void *)puVar2[3] != (void *)0x0) {
            puVar9 = (void *)puVar2[3];
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar9);
        }
        puVar7 = puVar2 + 10;
      }
      uVar10 = (int)uVar11 + 1;
      puVar2[1] = *puVar7;
      unaff_R12 = unaff_R12 + 8;
      lVar8 = *(int64_t *)(unaff_RBP + 0x68);
      uVar11 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBP + 0x70) - lVar8 >> 3));
  }
  return;
}
// 函数: void function_0b04d8(uint64_t param_1,int64_t param_2)
void function_0b04d8(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  int64_t unaff_RBP;
  uint64_t uVar8;
  uint uVar9;
  uint64_t unaff_R12;
  uint64_t uVar10;
  int unaff_R15D;
  uVar10 = unaff_R12;
  do {
    lVar6 = *(int64_t *)(uVar10 + param_2);
    cVar3 = (char)unaff_R12;
    if ((*(uint64_t *)(lVar6 + 0xb0) == unaff_R12) ||
       (cVar2 = (**(code **)(lVar6 + 0xb8))(lVar6), cVar2 != '\0')) {
      uVar9 = *(uint *)(lVar6 + 0x10);
      uVar8 = (uint64_t)uVar9;
      if (*(uint64_t *)(lVar6 + 8) != unaff_R12) {
        CoreMemoryPoolProcessor(lVar6 + 0x20,uVar8);
      }
      if (uVar9 != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar6 + 0x28),*(uint64_t *)(lVar6 + 8),uVar8);
      }
      *(int32_t *)(lVar6 + 0x30) = 0;
      if (*(int64_t *)(lVar6 + 0x28) != 0) {
        *(char *)(uVar8 + *(int64_t *)(lVar6 + 0x28)) = cVar3;
      }
      uVar4 = *(int32_t *)(lVar6 + 0x1c);
    }
    else {
      if (system_debug_flag == cVar3) {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar6 + 0x48) != (void *)0x0) {
          puVar7 = *(void **)(lVar6 + 0x48);
        }
        SystemCore_ResourceManager0(&processed_var_544_ptr,puVar7);
      }
      uVar9 = *(uint *)(lVar6 + 0x90);
      uVar8 = (uint64_t)uVar9;
      if (*(uint64_t *)(lVar6 + 0x88) != unaff_R12) {
        CoreMemoryPoolProcessor(lVar6 + 0x20,uVar8);
      }
      if (uVar9 != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar6 + 0x28),*(uint64_t *)(lVar6 + 0x88),uVar8);
      }
      *(int32_t *)(lVar6 + 0x30) = 0;
      if (*(int64_t *)(lVar6 + 0x28) != 0) {
        *(char *)(uVar8 + *(int64_t *)(lVar6 + 0x28)) = cVar3;
      }
      uVar4 = *(int32_t *)(lVar6 + 0x9c);
    }
    *(int32_t *)(lVar6 + 0x3c) = uVar4;
    unaff_R15D = unaff_R15D + 1;
    param_2 = *(int64_t *)(unaff_RBP + 0x48);
    uVar10 = uVar10 + 8;
    if ((uint64_t)(*(int64_t *)(unaff_RBP + 0x50) - param_2 >> 3) <=
        (uint64_t)(int64_t)unaff_R15D) {
      lVar6 = *(int64_t *)(unaff_RBP + 0x68);
      uVar10 = unaff_R12;
      if (*(int64_t *)(unaff_RBP + 0x70) - lVar6 >> 3 != 0) {
        do {
          puVar1 = *(uint64_t **)(unaff_R12 + lVar6);
          puVar5 = puVar1;
          if ((puVar1[0xd] != 0) &&
             (cVar3 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar3 == '\0')) {
            if (system_debug_flag == '\0') {
              puVar7 = &system_buffer_ptr;
              if ((void *)puVar1[3] != (void *)0x0) {
                puVar7 = (void *)puVar1[3];
              }
              SystemCore_ResourceManager0(&processed_var_544_ptr,puVar7);
            }
            puVar5 = puVar1 + 10;
          }
          uVar9 = (int)uVar10 + 1;
          puVar1[1] = *puVar5;
          unaff_R12 = unaff_R12 + 8;
          lVar6 = *(int64_t *)(unaff_RBP + 0x68);
          uVar10 = (uint64_t)uVar9;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(unaff_RBP + 0x70) - lVar6 >> 3));
      }
      return;
    }
  } while( true );
}
// 函数: void function_0b05e0(void)
void function_0b05e0(void)
{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  void *puVar5;
  int64_t unaff_RBP;
  uint uVar6;
  uint64_t unaff_R12;
  uint64_t uVar7;
  lVar4 = *(int64_t *)(unaff_RBP + 0x68);
  uVar7 = unaff_R12;
  if (*(int64_t *)(unaff_RBP + 0x70) - lVar4 >> 3 != 0) {
    do {
      puVar1 = *(uint64_t **)(unaff_R12 + lVar4);
      puVar3 = puVar1;
      if ((puVar1[0xd] != 0) && (cVar2 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar2 == '\0')
         ) {
        if (system_debug_flag == '\0') {
          puVar5 = &system_buffer_ptr;
          if ((void *)puVar1[3] != (void *)0x0) {
            puVar5 = (void *)puVar1[3];
          }
          SystemCore_ResourceManager0(&processed_var_544_ptr,puVar5);
        }
        puVar3 = puVar1 + 10;
      }
      uVar6 = (int)uVar7 + 1;
      puVar1[1] = *puVar3;
      unaff_R12 = unaff_R12 + 8;
      lVar4 = *(int64_t *)(unaff_RBP + 0x68);
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(unaff_RBP + 0x70) - lVar4 >> 3));
  }
  return;
}
// 函数: void function_0b05fe(uint64_t param_1,int64_t param_2)
void function_0b05fe(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t unaff_RBP;
  uint uVar5;
  uint64_t unaff_R12;
  uint64_t uVar6;
  uVar6 = unaff_R12;
  do {
    puVar1 = *(uint64_t **)(unaff_R12 + param_2);
    puVar3 = puVar1;
    if ((puVar1[0xd] != 0) && (cVar2 = (*(code *)puVar1[0xe])(puVar1,puVar1 + 0xb), cVar2 == '\0'))
    {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if ((void *)puVar1[3] != (void *)0x0) {
          puVar4 = (void *)puVar1[3];
        }
        SystemCore_ResourceManager0(&processed_var_544_ptr,puVar4);
      }
      puVar3 = puVar1 + 10;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar5;
    puVar1[1] = *puVar3;
    unaff_R12 = unaff_R12 + 8;
    param_2 = *(int64_t *)(unaff_RBP + 0x68);
  } while ((uint64_t)(int64_t)(int)uVar5 <
           (uint64_t)(*(int64_t *)(unaff_RBP + 0x70) - param_2 >> 3));
  return;
}
uint64_t SystemCore_DataHandler(int64_t param_1,uint64_t param_2)
{
  char cVar1;
  void *puVar2;
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    cVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    if (cVar1 == '\0') {
      if (system_debug_flag == '\0') {
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x48) != (void *)0x0) {
          puVar2 = *(void **)(param_1 + 0x48);
        }
        SystemCore_ResourceManager0(&processed_var_544_ptr,puVar2);
      }
      SystemCore_ConfigurationHandler0(param_1 + 0x20,param_1 + 0x80);
      return 0;
    }
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x20,param_2);
  return 1;
}
int64_t DataValidationEngine(int64_t param_1,int32_t *param_2)
{
  int32_t uVar1;
  char cVar2;
  void *puVar3;
  if (*(int64_t *)(param_1 + 0x60) != 0) {
    cVar2 = (**(code **)(param_1 + 0x68))(param_2,param_1 + 0x50);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x10) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x10);
        }
        SystemCore_ResourceManager0(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(param_1 + 4) = *(int32_t *)(param_1 + 0x48);
      return (uint64_t)(uint3)((uint)*(int32_t *)(param_1 + 0x48) >> 8) << 8;
    }
  }
  uVar1 = *param_2;
  *(int32_t *)(param_1 + 4) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}
uint64_t *
function_0b07a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xb;
  strcpy_s(param_2[1],0x80,&processed_var_7352_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
uint64_t *
function_0b0820(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void function_0b0890(uint64_t *param_1)
void function_0b0890(uint64_t *param_1)
{
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * SystemCore_GarbageCollector(int64_t param_1,uint64_t *param_2,int64_t param_3,char param_4)
{
  int64_t *plVar1;
  void *puVar2;
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_3 + 8);
    }
    plVar1 = (int64_t *)function_2abc50(param_1 + 0xa0,puVar2);
    if (plVar1 == (int64_t *)0x0) {
      if (param_4 == '\0') {
        *param_2 = 0;
      }
      else {
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar2 = *(void **)(param_3 + 8);
        }
        SystemManager_DataHandler(system_message_context,0,7,&processed_var_7376_ptr,puVar2);
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar2 = *(void **)(param_3 + 8);
        }
        SystemCore_Allocator(&processed_var_7408_ptr,puVar2);
        plVar1 = (int64_t *)function_0bd410(system_system_data_config);
        *param_2 = plVar1;
        if (plVar1 != (int64_t *)0x0) {
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
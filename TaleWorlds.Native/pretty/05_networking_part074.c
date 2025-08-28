#include "TaleWorlds.Native.Split.h"

// 05_networking_part074.c - 7 个函数

// 函数: void FUN_18087c319(void)
void FUN_18087c319(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c32f(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c360(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x4d0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    SystemMemoryAllocator(lVar1);
  }
  if ((*(int *)(lVar11 + 0x4cc) != 0) && (*(int *)(lVar11 + 0x4b0) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x4a8) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x4b0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x4b8));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087c41f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087c41f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar11;
}



int64_t FUN_18087c37a(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint uStackX_24;
  int64_t lStack0000000000000028;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x4d0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x4cc) != 0) && (*(int *)(unaff_RBX + 0x4b0) != 0)) {
    uStackX_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x4a8) +
                    (int64_t)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x4b0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x4b8));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087c41f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087c41f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c429(void)
void FUN_18087c429(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c43f(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c470(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x5f0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(lVar5 + 0x5ec) != 0) && (*(int *)(lVar5 + 0x5d0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x5c8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x5d0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x5d8));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c526;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c526:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}



int64_t FUN_18087c493(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x5f0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x5ec) != 0) && (*(int *)(unaff_RDI + 0x5d0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x5c8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x5d0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x5d8));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c526;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c526:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c530(void)
void FUN_18087c530(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c54b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c580(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 2000);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(lVar5 + 0x7cc) != 0) && (*(int *)(lVar5 + 0x7b0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x7a8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x7b0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x7b8));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c636;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c636:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}



int64_t FUN_18087c5a3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 2000);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x7cc) != 0) && (*(int *)(unaff_RDI + 0x7b0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x7a8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x7b0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x7b8));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c636;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c636:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c640(void)
void FUN_18087c640(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c65b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c690(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x530);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(lVar5 + 0x52c) != 0) && (*(int *)(lVar5 + 0x510) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x508) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x510) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x518));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c746;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c746:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}



int64_t FUN_18087c6b3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x530);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x52c) != 0) && (*(int *)(unaff_RDI + 0x510) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x508) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x510) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x518));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c746;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c746:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c750(void)
void FUN_18087c750(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c76b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c7a0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x500);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(lVar5 + 0x4fc) != 0) && (*(int *)(lVar5 + 0x4e0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x4d8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x4e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x4e8));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c856;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c856:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}



int64_t FUN_18087c7c3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x500);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x4fc) != 0) && (*(int *)(unaff_RDI + 0x4e0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x4d8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x4e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x4e8));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c856;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c856:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c860(void)
void FUN_18087c860(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c87b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c8b0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x6b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(lVar5 + 0x6ac) != 0) && (*(int *)(lVar5 + 0x690) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x688) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x690) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x698));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c966;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c966:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}



int64_t FUN_18087c8d3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x6b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x6ac) != 0) && (*(int *)(unaff_RDI + 0x690) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x688) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x690) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x698));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c966;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c966:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c970(void)
void FUN_18087c970(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_18087c98b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}






#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part019.c - 3 个函数

// 函数: void FUN_180268e8b(void)
void FUN_180268e8b(void)

{
  byte *pbVar1;
  int iVar2;
  uint64_t uVar3;
  byte *pbVar4;
  int iVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar6;
  int64_t unaff_R14;
  
  iVar2 = *(int *)(unaff_RSI + 0x8e8);
  iVar5 = *(int *)(unaff_RBP + 0x8e8);
  if (iVar2 == iVar5) {
    if (iVar2 != 0) {
      pbVar4 = *(byte **)(unaff_RSI + 0x8e0);
      lVar6 = *(int64_t *)(unaff_RBP + 0x8e0) - (int64_t)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar6;
        iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar5 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180268ecd:
    if (iVar5 == 0) {
      SystemCore_ConfigurationHandler0(unaff_RBP + 0x8d8,unaff_R14 + 0x8d8);
    }
  }
  else if (iVar2 == 0) goto LAB_180268ecd;
  if (unaff_RSI != 0) {
    iVar2 = *(int *)(unaff_RSI + 0x8c8);
    iVar5 = *(int *)(unaff_RBP + 0x8c8);
    if (iVar2 == iVar5) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(unaff_RSI + 0x8c0);
        lVar6 = *(int64_t *)(unaff_RBP + 0x8c0) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar6;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_180268f42;
    if (iVar5 != 0) goto LAB_180268f42;
  }
  SystemCore_ConfigurationHandler0(unaff_RBP + 0x8b8,unaff_R14 + 0x8b8);
LAB_180268f42:
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x80) == *(int *)(unaff_RBP + 0x80))) {
    *(int32_t *)(unaff_RBP + 0x80) = *(int32_t *)(unaff_R14 + 0x80);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x84) == *(int *)(unaff_RBP + 0x84))) {
    *(int32_t *)(unaff_RBP + 0x84) = *(int32_t *)(unaff_R14 + 0x84);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x68) == *(int *)(unaff_RBP + 0x68))) {
    *(int32_t *)(unaff_RBP + 0x68) = *(int32_t *)(unaff_R14 + 0x68);
  }
  if ((unaff_RSI == 0) || (*(float *)(unaff_RBP + 0x8f8) == *(float *)(unaff_RSI + 0x8f8))) {
    *(int32_t *)(unaff_RBP + 0x8f8) = *(int32_t *)(unaff_R14 + 0x8f8);
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x810) - *(float *)(unaff_RBP + 0x810)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x814) - *(float *)(unaff_RBP + 0x814)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x818) - *(float *)(unaff_RBP + 0x818)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x818);
    *(uint64_t *)(unaff_RBP + 0x810) = *(uint64_t *)(unaff_R14 + 0x810);
    *(uint64_t *)(unaff_RBP + 0x818) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x800) - *(float *)(unaff_RBP + 0x800)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x804) - *(float *)(unaff_RBP + 0x804)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x808) - *(float *)(unaff_RBP + 0x808)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x808);
    *(uint64_t *)(unaff_RBP + 0x800) = *(uint64_t *)(unaff_R14 + 0x800);
    *(uint64_t *)(unaff_RBP + 0x808) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0xdc) - *(float *)(unaff_RBP + 0xdc)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0xe0) - *(float *)(unaff_RBP + 0xe0)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0xe4) - *(float *)(unaff_RBP + 0xe4)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0xe4);
    *(uint64_t *)(unaff_RBP + 0xdc) = *(uint64_t *)(unaff_R14 + 0xdc);
    *(uint64_t *)(unaff_RBP + 0xe4) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0xec) - *(float *)(unaff_RBP + 0xec)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0xf0) - *(float *)(unaff_RBP + 0xf0)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0xf4) - *(float *)(unaff_RBP + 0xf4)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0xf4);
    *(uint64_t *)(unaff_RBP + 0xec) = *(uint64_t *)(unaff_R14 + 0xec);
    *(uint64_t *)(unaff_RBP + 0xf4) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x820) - *(float *)(unaff_RBP + 0x820)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x824) - *(float *)(unaff_RBP + 0x824)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x828) - *(float *)(unaff_RBP + 0x828)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x828);
    *(uint64_t *)(unaff_RBP + 0x820) = *(uint64_t *)(unaff_R14 + 0x820);
    *(uint64_t *)(unaff_RBP + 0x828) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x830) - *(float *)(unaff_RBP + 0x830)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x834) - *(float *)(unaff_RBP + 0x834)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x838) - *(float *)(unaff_RBP + 0x838)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x838);
    *(uint64_t *)(unaff_RBP + 0x830) = *(uint64_t *)(unaff_R14 + 0x830);
    *(uint64_t *)(unaff_RBP + 0x838) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x840) - *(float *)(unaff_RBP + 0x840)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x844) - *(float *)(unaff_RBP + 0x844)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x848) - *(float *)(unaff_RBP + 0x848)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x848);
    *(uint64_t *)(unaff_RBP + 0x840) = *(uint64_t *)(unaff_R14 + 0x840);
    *(uint64_t *)(unaff_RBP + 0x848) = uVar3;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x7e0) - *(float *)(unaff_RBP + 0x7e0)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x7e4) - *(float *)(unaff_RBP + 0x7e4)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x7e8) - *(float *)(unaff_RBP + 0x7e8)) < 0.01)))) {
    uVar3 = *(uint64_t *)(unaff_R14 + 0x7e8);
    *(uint64_t *)(unaff_RBP + 0x7e0) = *(uint64_t *)(unaff_R14 + 0x7e0);
    *(uint64_t *)(unaff_RBP + 0x7e8) = uVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802692c0(uint64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  uVar8 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  uVar8 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar8;
  uVar8 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar8;
  uVar8 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar8;
  uVar8 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar8;
  uVar8 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar8;
  uVar8 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar8;
  uVar8 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar8;
  uVar8 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar8;
  uVar8 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar8;
  uVar8 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar8;
  uVar8 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar8;
  uVar8 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar8;
  uVar8 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar8;
  uVar8 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar8;
  uVar8 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar8;
  uVar8 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar8;
  uVar8 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar8;
  uVar8 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar8;
  uVar8 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar8;
  uVar8 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar8;
  uVar8 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar8;
  uVar8 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar8;
  uVar8 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar8;
  uVar8 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar8;
  uVar8 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar8;
  uVar8 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar8;
  uVar8 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar8;
  uVar8 = param_2[0x3f];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar8;
  uVar8 = param_2[0x41];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = uVar8;
  uVar8 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar8;
  uVar8 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar8;
  uVar8 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar8;
  uVar8 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar8;
  uVar8 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar8;
  uVar8 = param_2[0x4d];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = uVar8;
  uVar8 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar8;
  uVar8 = param_2[0x51];
  lVar10 = 0;
  plVar1 = param_1 + 100;
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = uVar8;
  uVar8 = param_2[0x53];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = uVar8;
  uVar8 = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = uVar8;
  uVar8 = param_2[0x57];
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = uVar8;
  uVar8 = param_2[0x59];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = uVar8;
  uVar8 = param_2[0x5b];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = uVar8;
  uVar8 = param_2[0x5d];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = uVar8;
  uVar8 = param_2[0x5f];
  param_1[0x5e] = param_2[0x5e];
  param_1[0x5f] = uVar8;
  uVar8 = param_2[0x61];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = uVar8;
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x314);
  uVar6 = *(int32_t *)(param_2 + 99);
  uVar7 = *(int32_t *)((int64_t)param_2 + 0x31c);
  *(int32_t *)(param_1 + 0x62) = *(int32_t *)(param_2 + 0x62);
  *(int32_t *)((int64_t)param_1 + 0x314) = uVar5;
  *(int32_t *)(param_1 + 99) = uVar6;
  *(int32_t *)((int64_t)param_1 + 0x31c) = uVar7;
  if (plVar1 != param_2 + 100) {
    lVar2 = param_2[0x65];
    lVar3 = param_2[100];
    lVar9 = *plVar1;
    lVar13 = lVar2 - lVar3;
    uVar12 = lVar13 / 0x14;
    if ((uint64_t)((param_1[0x66] - lVar9) / 0x14) < uVar12) {
      lVar9 = lVar10;
      if (uVar12 != 0) {
        lVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 0x14,*(int8_t *)(param_1 + 0x67));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar9,lVar3,lVar13);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar1 = lVar9;
      lVar9 = lVar9 + uVar12 * 0x14;
      param_1[0x65] = lVar9;
      param_1[0x66] = lVar9;
    }
    else {
      lVar4 = param_1[0x65];
      uVar11 = (lVar4 - lVar9) / 0x14;
      if (uVar11 < uVar12) {
        lVar13 = uVar11 * 0x14 + lVar3;
        if (lVar3 != lVar13) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3);
        }
        if (lVar13 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar13,lVar2 - lVar13);
        }
        param_1[0x65] = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3,lVar13);
        }
        param_1[0x65] = lVar9;
      }
    }
  }
  plVar1 = param_1 + 0x68;
  if (plVar1 != param_2 + 0x68) {
    lVar2 = param_2[0x69];
    lVar3 = param_2[0x68];
    lVar9 = *plVar1;
    lVar13 = lVar2 - lVar3;
    uVar12 = lVar13 >> 3;
    if ((uint64_t)(param_1[0x6a] - lVar9 >> 3) < uVar12) {
      if (uVar12 != 0) {
        lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 8,*(int8_t *)(param_1 + 0x6b));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar10,lVar3,lVar13);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar1 = lVar10;
      lVar10 = uVar12 * 8 + lVar10;
      param_1[0x69] = lVar10;
      param_1[0x6a] = lVar10;
    }
    else {
      lVar10 = param_1[0x69];
      uVar11 = lVar10 - lVar9 >> 3;
      if (uVar11 < uVar12) {
        lVar13 = uVar11 * 8 + lVar3;
        if (lVar3 != lVar13) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3);
        }
        if (lVar13 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar10,lVar13,lVar2 - lVar13);
        }
        param_1[0x69] = lVar10;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3,lVar13);
        }
        param_1[0x69] = lVar9;
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180269599(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180269599(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_RBP;
  uint64_t uVar7;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar8;
  int64_t in_stack_00000058;
  
  uVar7 = unaff_R15 / 0x14;
  if ((uint64_t)(param_1 / 0x14) < uVar7) {
    lVar5 = unaff_R13;
    if (uVar7 != 0) {
      lVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 0x14,(char)unaff_RDI[3]);
    }
    if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove(lVar5);
    }
    if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *unaff_RDI = lVar5;
    lVar5 = lVar5 + uVar7 * 0x14;
    unaff_RDI[1] = lVar5;
    unaff_RDI[2] = lVar5;
  }
  else {
    lVar5 = unaff_RDI[1];
    uVar6 = (lVar5 - param_4) / 0x14;
    if (uVar6 < uVar7) {
      lVar2 = uVar6 * 0x14 + unaff_RSI;
      if (unaff_RSI != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(param_4);
      }
      if (lVar2 != unaff_RBP) {
                    // WARNING: Subroutine does not return
        memmove(lVar5,lVar2,unaff_RBP - lVar2);
      }
      unaff_RDI[1] = lVar5;
    }
    else {
      if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
        memmove(param_4);
      }
      unaff_RDI[1] = param_4;
    }
  }
  plVar1 = (int64_t *)(unaff_R14 + 0x340);
  if (plVar1 != (int64_t *)(in_stack_00000058 + 0x340)) {
    lVar5 = *(int64_t *)(in_stack_00000058 + 0x348);
    lVar2 = *(int64_t *)(in_stack_00000058 + 0x340);
    lVar3 = *plVar1;
    lVar8 = lVar5 - lVar2;
    uVar7 = lVar8 >> 3;
    if ((uint64_t)(*(int64_t *)(unaff_R14 + 0x350) - lVar3 >> 3) < uVar7) {
      if (uVar7 != 0) {
        unaff_R13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,*(int8_t *)(unaff_R14 + 0x358));
      }
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(unaff_R13,lVar2,lVar8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar1 = unaff_R13;
      lVar5 = uVar7 * 8 + unaff_R13;
      *(int64_t *)(unaff_R14 + 0x348) = lVar5;
      *(int64_t *)(unaff_R14 + 0x350) = lVar5;
    }
    else {
      lVar4 = *(int64_t *)(unaff_R14 + 0x348);
      uVar6 = lVar4 - lVar3 >> 3;
      if (uVar6 < uVar7) {
        lVar8 = uVar6 * 8 + lVar2;
        if (lVar2 != lVar8) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar2);
        }
        if (lVar8 != lVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar8,lVar5 - lVar8);
        }
        *(int64_t *)(unaff_R14 + 0x348) = lVar4;
      }
      else {
        if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar2,lVar8);
        }
        *(int64_t *)(unaff_R14 + 0x348) = lVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802696df(void)
void FUN_1802696df(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t lVar8;
  int64_t in_stack_00000058;
  
  plVar1 = (int64_t *)(unaff_R14 + 0x340);
  if (plVar1 != (int64_t *)(in_stack_00000058 + 0x340)) {
    lVar5 = *(int64_t *)(in_stack_00000058 + 0x348);
    lVar2 = *(int64_t *)(in_stack_00000058 + 0x340);
    lVar3 = *plVar1;
    lVar8 = lVar5 - lVar2;
    uVar7 = lVar8 >> 3;
    if ((uint64_t)(*(int64_t *)(unaff_R14 + 0x350) - lVar3 >> 3) < uVar7) {
      if (uVar7 != 0) {
        unaff_R13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,*(int8_t *)(unaff_R14 + 0x358));
      }
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(unaff_R13,lVar2,lVar8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar1 = unaff_R13;
      lVar5 = uVar7 * 8 + unaff_R13;
      *(int64_t *)(unaff_R14 + 0x348) = lVar5;
      *(int64_t *)(unaff_R14 + 0x350) = lVar5;
    }
    else {
      lVar4 = *(int64_t *)(unaff_R14 + 0x348);
      uVar6 = lVar4 - lVar3 >> 3;
      if (uVar6 < uVar7) {
        lVar8 = uVar6 * 8 + lVar2;
        if (lVar2 != lVar8) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar2);
        }
        if (lVar8 != lVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar8,lVar5 - lVar8);
        }
        *(int64_t *)(unaff_R14 + 0x348) = lVar4;
      }
      else {
        if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar2,lVar8);
        }
        *(int64_t *)(unaff_R14 + 0x348) = lVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180269810(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  
  plVar1 = (int64_t *)(param_1 + 8);
  if (plVar1 != (int64_t *)(param_2 + 8)) {
    lVar12 = *(int64_t *)(param_2 + 0x10);
    puVar13 = *(uint64_t **)(param_2 + 8);
    uVar14 = lVar12 - (int64_t)puVar13 >> 5;
    puVar11 = (uint64_t *)*plVar1;
    if ((uint64_t)(*(int64_t *)(param_1 + 0x18) - (int64_t)puVar11 >> 5) < uVar14) {
      if (uVar14 == 0) {
        puVar7 = (int32_t *)0x0;
      }
      else {
        puVar7 = (int32_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar14 << 5,*(int8_t *)(param_1 + 0x20),param_4,
                               0xfffffffffffffffe);
      }
      if (0 < (int64_t)uVar14) {
        puVar8 = puVar7;
        uVar10 = uVar14;
        do {
          puVar2 = (int32_t *)((int64_t)puVar8 + ((int64_t)puVar13 - (int64_t)puVar7));
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          *puVar8 = *puVar2;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          puVar11 = (uint64_t *)((int64_t)puVar8 + ((int64_t)puVar13 - (int64_t)puVar7) + 0x10)
          ;
          uVar6 = puVar11[1];
          *(uint64_t *)(puVar8 + 4) = *puVar11;
          *(uint64_t *)(puVar8 + 6) = uVar6;
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 8;
        } while (0 < (int64_t)uVar10);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar1 = (int64_t)puVar7;
      puVar9 = (uint64_t *)(puVar7 + uVar14 * 8);
      *(uint64_t **)(param_1 + 0x18) = puVar9;
    }
    else {
      puVar9 = *(uint64_t **)(param_1 + 0x10);
      uVar10 = (int64_t)puVar9 - (int64_t)puVar11 >> 5;
      if (uVar14 <= uVar10) {
        for (; 0 < (int64_t)uVar14; uVar14 = uVar14 - 1) {
          uVar6 = puVar13[1];
          *puVar11 = *puVar13;
          puVar11[1] = uVar6;
          uVar6 = puVar13[3];
          puVar11[2] = puVar13[2];
          puVar11[3] = uVar6;
          puVar13 = puVar13 + 4;
          puVar11 = puVar11 + 4;
        }
        *(uint64_t **)(param_1 + 0x10) = puVar11;
        return param_1;
      }
      puVar15 = puVar13 + uVar10 * 4;
      if (0 < (int64_t)uVar10) {
        do {
          uVar6 = puVar13[1];
          *puVar11 = *puVar13;
          puVar11[1] = uVar6;
          uVar6 = puVar13[3];
          puVar11[2] = puVar13[2];
          puVar11[3] = uVar6;
          uVar10 = uVar10 - 1;
          puVar13 = puVar13 + 4;
          puVar11 = puVar11 + 4;
        } while (0 < (int64_t)uVar10);
        puVar9 = *(uint64_t **)(param_1 + 0x10);
      }
      lVar12 = lVar12 - (int64_t)puVar15 >> 5;
      if (0 < lVar12) {
        lVar16 = (int64_t)puVar15 - (int64_t)puVar9;
        do {
          puVar13 = (uint64_t *)((int64_t)puVar9 + lVar16);
          uVar6 = puVar13[1];
          *puVar9 = *puVar13;
          puVar9[1] = uVar6;
          puVar13 = (uint64_t *)((int64_t)puVar9 + lVar16 + 0x10);
          uVar6 = puVar13[1];
          puVar9[2] = *puVar13;
          puVar9[3] = uVar6;
          lVar12 = lVar12 + -1;
          puVar9 = puVar9 + 4;
        } while (0 < lVar12);
      }
    }
    *(uint64_t **)(param_1 + 0x10) = puVar9;
  }
  return param_1;
}



int32_t * FUN_1802699c0(int32_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  void *puVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(void **)(param_1 + 0x10) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  puVar4 = &system_data_buffer_ptr;
  *(void **)(param_1 + 0x10) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x16) = 0;
  *(uint64_t *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(void **)(param_1 + 0x42) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x44) = 0;
  *(uint64_t *)(param_1 + 0x46) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 3;
  *(void **)(param_1 + 0x42) = &unknown_var_7360_ptr;
  param_1[0x4c] = 0x3f800000;
  param_1[0x4d] = 0x3f800000;
  *(uint64_t *)(param_1 + 0x56) = 0;
  *(void **)(param_1 + 0x58) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x5a) = 0;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  *(uint64_t *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 3;
  *(void **)(param_1 + 0x58) = &unknown_var_7360_ptr;
  param_1[0x62] = 0x3f800000;
  param_1[99] = 0x3f800000;
  param_1[100] = 0;
  param_1[0x65] = 0x3f800000;
  *(void **)(param_1 + 0x66) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x6a) = 0;
  *(uint64_t *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 3;
  *(void **)(param_1 + 0x66) = &unknown_var_7360_ptr;
  param_1[0x70] = 0x3f800000;
  param_1[0x71] = 0x3f800000;
  param_1[0x72] = 0;
  param_1[0x73] = 0x3ecccccd;
  *(void **)(param_1 + 0x74) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x76) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 3;
  *(void **)(param_1 + 0x74) = &unknown_var_7360_ptr;
  param_1[0x7e] = 0x3f800000;
  param_1[0x7f] = 0x3f800000;
  param_1[0x80] = 0;
  param_1[0x81] = 0x3ecccccd;
  *(void **)(param_1 + 0x82) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x84) = 0;
  *(uint64_t *)(param_1 + 0x86) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 3;
  *(void **)(param_1 + 0x82) = &unknown_var_7360_ptr;
  param_1[0x8c] = 0x3f800000;
  param_1[0x8d] = 0x3f800000;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0x3f800000;
  *(void **)(param_1 + 0x90) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x92) = 0;
  *(uint64_t *)(param_1 + 0x94) = 0;
  *(uint64_t *)(param_1 + 0x96) = 0;
  param_1[0x98] = 3;
  *(void **)(param_1 + 0x90) = &unknown_var_7360_ptr;
  param_1[0x9a] = 0x3f800000;
  param_1[0x9b] = 0x3f800000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0x3f800000;
  *(void **)(param_1 + 0x9e) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa2) = 0;
  *(uint64_t *)(param_1 + 0xa4) = 0;
  param_1[0xa6] = 3;
  *(void **)(param_1 + 0x9e) = &unknown_var_7360_ptr;
  param_1[0xa8] = 0x3f800000;
  param_1[0xa9] = 0x3f800000;
  *(void **)(param_1 + 0xaa) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xac) = 0;
  *(uint64_t *)(param_1 + 0xae) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  param_1[0xb2] = 3;
  *(void **)(param_1 + 0xaa) = &unknown_var_7360_ptr;
  param_1[0xb4] = 0x3f800000;
  param_1[0xb5] = 0x3f800000;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0x40800000;
  *(void **)(param_1 + 0xb8) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xba) = 0;
  *(uint64_t *)(param_1 + 0xbc) = 0;
  *(uint64_t *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = 3;
  *(void **)(param_1 + 0xb8) = &unknown_var_7360_ptr;
  param_1[0xc2] = 0x3f800000;
  param_1[0xc3] = 0x3f800000;
  *(uint64_t *)(param_1 + 0xc4) = 0;
  *(void **)(param_1 + 0xc6) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xca) = 0;
  *(uint64_t *)(param_1 + 0xcc) = 0;
  param_1[0xce] = 3;
  *(void **)(param_1 + 0xc6) = &unknown_var_7360_ptr;
  param_1[0xd0] = 0x3f800000;
  param_1[0xd1] = 0x3f800000;
  *(uint64_t *)(param_1 + 0xd2) = 0;
  *(void **)(param_1 + 0xd4) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xd6) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xda) = 0;
  param_1[0xdc] = 3;
  *(void **)(param_1 + 0xd4) = &unknown_var_7360_ptr;
  param_1[0xde] = 0x3f800000;
  param_1[0xdf] = 0x3f800000;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(void **)(param_1 + 0xe2) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xe4) = 0;
  *(uint64_t *)(param_1 + 0xe6) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  param_1[0xea] = 3;
  *(void **)(param_1 + 0xe2) = &unknown_var_7360_ptr;
  param_1[0xec] = 0x3f800000;
  param_1[0xed] = 0x3f800000;
  *(uint64_t *)(param_1 + 0xee) = 0;
  *(void **)(param_1 + 0xf0) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0xf2) = 0;
  *(uint64_t *)(param_1 + 0xf4) = 0;
  *(uint64_t *)(param_1 + 0xf6) = 0;
  param_1[0xf8] = 3;
  *(void **)(param_1 + 0xf0) = &unknown_var_7360_ptr;
  param_1[0xfa] = 0x3f800000;
  param_1[0xfb] = 0x3f800000;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0x3f800000;
  *(void **)(param_1 + 0xfe) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x102) = 0;
  *(uint64_t *)(param_1 + 0x104) = 0;
  param_1[0x106] = 3;
  *(void **)(param_1 + 0xfe) = &unknown_var_7360_ptr;
  param_1[0x108] = 0x3f800000;
  param_1[0x109] = 0x3f800000;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0x3f800000;
  *(void **)(param_1 + 0x10c) = &unknown_var_7440_ptr;
  *(uint64_t *)(param_1 + 0x10e) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x112) = 0;
  param_1[0x114] = 3;
  *(void **)(param_1 + 0x10c) = &unknown_var_7360_ptr;
  param_1[0x116] = 0x3f800000;
  param_1[0x117] = 0x3f800000;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x11a) = 0;
  *(uint64_t *)(param_1 + 0x11c) = 0;
  FUN_1802705c0(param_1 + 0x120,param_1 + 0x9c,param_1,&unknown_var_7360_ptr,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x21a) = 0;
  *(uint64_t *)(param_1 + 0x21c) = 0;
  *(uint64_t *)(param_1 + 0x21e) = 0;
  param_1[0x220] = 3;
  *(uint64_t *)(param_1 + 0x222) = 0;
  *(uint64_t *)(param_1 + 0x224) = 0;
  *(uint64_t *)(param_1 + 0x226) = 0;
  *(uint64_t *)(param_1 + 0x228) = 0;
  *(void **)(param_1 + 0x22e) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x230) = 0;
  param_1[0x232] = 0;
  *(void **)(param_1 + 0x22e) = puVar4;
  *(uint64_t *)(param_1 + 0x234) = 0;
  *(uint64_t *)(param_1 + 0x230) = 0;
  param_1[0x232] = 0;
  *(void **)(param_1 + 0x236) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x238) = 0;
  param_1[0x23a] = 0;
  *(void **)(param_1 + 0x236) = puVar4;
  *(uint64_t *)(param_1 + 0x23c) = 0;
  *(uint64_t *)(param_1 + 0x238) = 0;
  param_1[0x23a] = 0;
  func_0x000180264130(param_1);
  return param_1;
}







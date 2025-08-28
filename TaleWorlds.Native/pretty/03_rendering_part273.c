#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part273.c - 6 个函数

// 函数: void FUN_180419ecf(int64_t param_1,uint param_2,int64_t *param_3)
void FUN_180419ecf(int64_t param_1,uint param_2,int64_t *param_3)

{
  float fVar1;
  uint64_t uVar2;
  int64_t in_RAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  uint64_t unaff_RBX;
  float *pfVar9;
  int64_t lVar10;
  uint64_t unaff_RBP;
  uint64_t uVar11;
  uint64_t unaff_RSI;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint uVar12;
  uint64_t unaff_R15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t in_stack_000000f0;
  int iStack00000000000000f8;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  lVar6 = *(int64_t *)(param_1 + 0x10);
  lVar10 = *(int64_t *)(param_1 + 8);
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  pfVar4 = (float *)*param_3;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  pfVar8 = (float *)0x0;
  uVar12 = 0;
  param_3[1] = (int64_t)pfVar4;
  uVar11 = (lVar6 - lVar10 >> 5) * (uint64_t)param_2 + 1;
  pfVar9 = pfVar4;
  pfVar3 = pfVar4;
  if ((uint64_t)(param_3[2] - (int64_t)pfVar4 >> 3) < uVar11) {
    pfVar7 = pfVar4;
    pfVar3 = pfVar8;
    if (uVar11 != 0) {
      pfVar3 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 8,(char)param_3[3]);
      pfVar4 = (float *)param_3[1];
      pfVar7 = (float *)*param_3;
    }
    pfVar9 = pfVar3;
    if (pfVar7 != pfVar4) {
      do {
        uVar2 = *(uint64_t *)pfVar7;
        pfVar7 = pfVar7 + 2;
        *(uint64_t *)pfVar9 = uVar2;
        pfVar9 = pfVar9 + 2;
      } while (pfVar7 != pfVar4);
      pfVar7 = (float *)*param_3;
    }
    if (pfVar7 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    param_3[2] = (int64_t)(pfVar3 + uVar11 * 2);
    *param_3 = (int64_t)pfVar3;
    param_3[1] = (int64_t)pfVar9;
    param_1 = in_stack_000000f0;
  }
  lVar6 = *(int64_t *)(param_1 + 8);
  iStack00000000000000f8 = 0;
  pfVar4 = pfVar8;
  if (*(int64_t *)(param_1 + 0x10) - lVar6 >> 5 != 0) {
    do {
      fVar18 = 0.0;
      do {
        fVar19 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        fVar1 = *(float *)(lVar6 + 0x14 + (int64_t)pfVar4);
        fVar13 = 1.0 - fVar18;
        fVar15 = (float)*(int *)(lVar6 + 0x10 + (int64_t)pfVar4);
        fVar17 = fVar13 * fVar13 * fVar13;
        fVar14 = fVar13 * 3.0 * fVar13 * fVar18;
        fVar16 = fVar13 * 3.0 * fVar18 * fVar18;
        fVar13 = fVar18 * fVar18 * fVar18;
        fVar15 = ((float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 *(float *)(lVar6 + 8 + (int64_t)pfVar4)) * fVar14 +
                 fVar17 * (float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 (fVar15 + *(float *)(lVar6 + 0x18 + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar15;
        fVar19 = (fVar19 + *(float *)(lVar6 + 0xc + (int64_t)pfVar4)) * fVar14 + fVar17 * fVar19 +
                 (fVar1 + *(float *)(lVar6 + 0x1c + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar1;
        if (pfVar9 < (float *)param_3[2]) {
          param_3[1] = (int64_t)(pfVar9 + 2);
          *pfVar9 = fVar15;
          pfVar9[1] = fVar19;
          pfVar9 = (float *)param_3[1];
          pfVar3 = (float *)*param_3;
        }
        else {
          pfVar7 = (float *)*param_3;
          lVar10 = (int64_t)pfVar9 - (int64_t)pfVar7 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_18041a160:
            pfVar5 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,(char)param_3[3]);
            pfVar9 = (float *)param_3[1];
            pfVar7 = (float *)*param_3;
            pfVar3 = pfVar5;
          }
          else {
            lVar10 = lVar10 * 2;
            pfVar5 = pfVar8;
            pfVar3 = pfVar8;
            if (lVar10 != 0) goto LAB_18041a160;
          }
          for (; pfVar7 != pfVar9; pfVar7 = pfVar7 + 2) {
            *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
            pfVar5 = pfVar5 + 2;
          }
          pfVar9 = pfVar5 + 2;
          *pfVar5 = fVar15;
          pfVar5[1] = fVar19;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *param_3 = (int64_t)pfVar3;
          param_3[2] = (int64_t)(pfVar3 + lVar10 * 2);
          param_3[1] = (int64_t)pfVar9;
        }
        fVar18 = fVar18 + 1.0 / (float)param_2;
      } while (fVar18 <= 1.0);
      iStack00000000000000f8 = iStack00000000000000f8 + 1;
      lVar6 = *(int64_t *)(in_stack_000000f0 + 8);
      pfVar4 = pfVar4 + 8;
    } while ((uint64_t)(int64_t)iStack00000000000000f8 <
             (uint64_t)(*(int64_t *)(in_stack_000000f0 + 0x10) - lVar6 >> 5));
  }
  if (pfVar3 != pfVar9) {
    lVar10 = (int64_t)pfVar9 - (int64_t)pfVar3 >> 3;
    for (lVar6 = lVar10; lVar6 != 0; lVar6 = lVar6 >> 1) {
      uVar12 = (int)pfVar8 + 1;
      pfVar8 = (float *)(uint64_t)uVar12;
    }
    FUN_18041b560(pfVar3,pfVar9,(int64_t)(int)(uVar12 - 1) * 2,0);
    if (lVar10 < 0x1d) {
      func_0x00018041b3e0(pfVar3,pfVar9);
    }
    else {
      pfVar4 = pfVar3 + 0x38;
      func_0x00018041b3e0(pfVar3,pfVar4);
      if (pfVar4 != pfVar9) {
        pfVar3 = pfVar4 + -2;
        do {
          fVar18 = pfVar3[2];
          fVar19 = *pfVar3;
          fVar1 = pfVar3[3];
          pfVar8 = pfVar4;
          if (fVar18 < fVar19) {
            do {
              *pfVar8 = fVar19;
              pfVar8[1] = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4) + 4);
              pfVar8 = pfVar8 + -2;
              fVar19 = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4));
            } while (fVar18 < fVar19);
          }
          pfVar4 = pfVar4 + 2;
          *pfVar8 = fVar18;
          pfVar3 = pfVar3 + 2;
          pfVar8[1] = fVar1;
        } while (pfVar4 != pfVar9);
      }
    }
  }
  pfVar9 = (float *)param_3[1];
  pfVar4 = (float *)*param_3;
  if ((pfVar4 != pfVar9) && (pfVar4 + 2 != pfVar9)) {
    pfVar3 = pfVar4 + 2;
    fVar18 = *pfVar4;
    do {
      pfVar8 = pfVar3;
      if (fVar18 == *pfVar8) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar9) {
          while (pfVar4 = pfVar4 + 2, pfVar4 != pfVar9) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[2] = *pfVar4;
              pfVar3[3] = pfVar4[1];
              pfVar3 = pfVar3 + 2;
            }
          }
          pfVar9 = pfVar3 + 2;
        }
        break;
      }
      pfVar3 = pfVar8 + 2;
      pfVar4 = pfVar8;
      fVar18 = *pfVar8;
    } while (pfVar8 + 2 != pfVar9);
  }
  pfVar4 = (float *)param_3[1];
  if (pfVar9 != pfVar4) {
    param_3[1] = (int64_t)pfVar4 - ((int64_t)pfVar4 - (int64_t)pfVar9 & 0xfffffffffffffff8U);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180419ed6(int64_t param_1,uint param_2)
void FUN_180419ed6(int64_t param_1,uint param_2)

{
  float fVar1;
  uint64_t uVar2;
  int64_t in_RAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int64_t lVar10;
  uint64_t unaff_RBP;
  uint64_t uVar11;
  uint64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint uVar12;
  uint64_t unaff_R15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t in_stack_000000f0;
  int iStack00000000000000f8;
  
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  lVar6 = *(int64_t *)(param_1 + 0x10);
  lVar10 = *(int64_t *)(param_1 + 8);
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  pfVar4 = (float *)*unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  pfVar8 = (float *)0x0;
  uVar12 = 0;
  unaff_RDI[1] = (int64_t)pfVar4;
  uVar11 = (lVar6 - lVar10 >> 5) * (uint64_t)param_2 + 1;
  pfVar9 = pfVar4;
  pfVar3 = pfVar4;
  if ((uint64_t)(unaff_RDI[2] - (int64_t)pfVar4 >> 3) < uVar11) {
    pfVar7 = pfVar4;
    pfVar3 = pfVar8;
    if (uVar11 != 0) {
      pfVar3 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 8,(char)unaff_RDI[3]);
      pfVar4 = (float *)unaff_RDI[1];
      pfVar7 = (float *)*unaff_RDI;
    }
    pfVar9 = pfVar3;
    if (pfVar7 != pfVar4) {
      do {
        uVar2 = *(uint64_t *)pfVar7;
        pfVar7 = pfVar7 + 2;
        *(uint64_t *)pfVar9 = uVar2;
        pfVar9 = pfVar9 + 2;
      } while (pfVar7 != pfVar4);
      pfVar7 = (float *)*unaff_RDI;
    }
    if (pfVar7 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    unaff_RDI[2] = (int64_t)(pfVar3 + uVar11 * 2);
    *unaff_RDI = (int64_t)pfVar3;
    unaff_RDI[1] = (int64_t)pfVar9;
    param_1 = in_stack_000000f0;
  }
  lVar6 = *(int64_t *)(param_1 + 8);
  iStack00000000000000f8 = 0;
  pfVar4 = pfVar8;
  if (*(int64_t *)(param_1 + 0x10) - lVar6 >> 5 != 0) {
    do {
      fVar18 = 0.0;
      do {
        fVar19 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        fVar1 = *(float *)(lVar6 + 0x14 + (int64_t)pfVar4);
        fVar13 = 1.0 - fVar18;
        fVar15 = (float)*(int *)(lVar6 + 0x10 + (int64_t)pfVar4);
        fVar17 = fVar13 * fVar13 * fVar13;
        fVar14 = fVar13 * 3.0 * fVar13 * fVar18;
        fVar16 = fVar13 * 3.0 * fVar18 * fVar18;
        fVar13 = fVar18 * fVar18 * fVar18;
        fVar15 = ((float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 *(float *)(lVar6 + 8 + (int64_t)pfVar4)) * fVar14 +
                 fVar17 * (float)*(int *)(lVar6 + (int64_t)pfVar4) +
                 (fVar15 + *(float *)(lVar6 + 0x18 + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar15;
        fVar19 = (fVar19 + *(float *)(lVar6 + 0xc + (int64_t)pfVar4)) * fVar14 + fVar17 * fVar19 +
                 (fVar1 + *(float *)(lVar6 + 0x1c + (int64_t)pfVar4)) * fVar16 + fVar13 * fVar1;
        if (pfVar9 < (float *)unaff_RDI[2]) {
          unaff_RDI[1] = (int64_t)(pfVar9 + 2);
          *pfVar9 = fVar15;
          pfVar9[1] = fVar19;
          pfVar9 = (float *)unaff_RDI[1];
          pfVar3 = (float *)*unaff_RDI;
        }
        else {
          pfVar7 = (float *)*unaff_RDI;
          lVar10 = (int64_t)pfVar9 - (int64_t)pfVar7 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_18041a160:
            pfVar5 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,(char)unaff_RDI[3]);
            pfVar9 = (float *)unaff_RDI[1];
            pfVar7 = (float *)*unaff_RDI;
            pfVar3 = pfVar5;
          }
          else {
            lVar10 = lVar10 * 2;
            pfVar5 = pfVar8;
            pfVar3 = pfVar8;
            if (lVar10 != 0) goto LAB_18041a160;
          }
          for (; pfVar7 != pfVar9; pfVar7 = pfVar7 + 2) {
            *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
            pfVar5 = pfVar5 + 2;
          }
          pfVar9 = pfVar5 + 2;
          *pfVar5 = fVar15;
          pfVar5[1] = fVar19;
          if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *unaff_RDI = (int64_t)pfVar3;
          unaff_RDI[2] = (int64_t)(pfVar3 + lVar10 * 2);
          unaff_RDI[1] = (int64_t)pfVar9;
        }
        fVar18 = fVar18 + 1.0 / (float)param_2;
      } while (fVar18 <= 1.0);
      iStack00000000000000f8 = iStack00000000000000f8 + 1;
      lVar6 = *(int64_t *)(in_stack_000000f0 + 8);
      pfVar4 = pfVar4 + 8;
    } while ((uint64_t)(int64_t)iStack00000000000000f8 <
             (uint64_t)(*(int64_t *)(in_stack_000000f0 + 0x10) - lVar6 >> 5));
  }
  if (pfVar3 != pfVar9) {
    lVar10 = (int64_t)pfVar9 - (int64_t)pfVar3 >> 3;
    for (lVar6 = lVar10; lVar6 != 0; lVar6 = lVar6 >> 1) {
      uVar12 = (int)pfVar8 + 1;
      pfVar8 = (float *)(uint64_t)uVar12;
    }
    FUN_18041b560(pfVar3,pfVar9,(int64_t)(int)(uVar12 - 1) * 2,0);
    if (lVar10 < 0x1d) {
      func_0x00018041b3e0(pfVar3,pfVar9);
    }
    else {
      pfVar4 = pfVar3 + 0x38;
      func_0x00018041b3e0(pfVar3,pfVar4);
      if (pfVar4 != pfVar9) {
        pfVar3 = pfVar4 + -2;
        do {
          fVar18 = pfVar3[2];
          fVar19 = *pfVar3;
          fVar1 = pfVar3[3];
          pfVar8 = pfVar4;
          if (fVar18 < fVar19) {
            do {
              *pfVar8 = fVar19;
              pfVar8[1] = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4) + 4);
              pfVar8 = pfVar8 + -2;
              fVar19 = *(float *)((int64_t)pfVar8 + ((int64_t)pfVar3 - (int64_t)pfVar4));
            } while (fVar18 < fVar19);
          }
          pfVar4 = pfVar4 + 2;
          *pfVar8 = fVar18;
          pfVar3 = pfVar3 + 2;
          pfVar8[1] = fVar1;
        } while (pfVar4 != pfVar9);
      }
    }
  }
  pfVar9 = (float *)unaff_RDI[1];
  pfVar4 = (float *)*unaff_RDI;
  if ((pfVar4 != pfVar9) && (pfVar4 + 2 != pfVar9)) {
    pfVar3 = pfVar4 + 2;
    fVar18 = *pfVar4;
    do {
      pfVar8 = pfVar3;
      if (fVar18 == *pfVar8) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar9) {
          while (pfVar4 = pfVar4 + 2, pfVar4 != pfVar9) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[2] = *pfVar4;
              pfVar3[3] = pfVar4[1];
              pfVar3 = pfVar3 + 2;
            }
          }
          pfVar9 = pfVar3 + 2;
        }
        break;
      }
      pfVar3 = pfVar8 + 2;
      pfVar4 = pfVar8;
      fVar18 = *pfVar8;
    } while (pfVar8 + 2 != pfVar9);
  }
  pfVar4 = (float *)unaff_RDI[1];
  if (pfVar9 != pfVar4) {
    unaff_RDI[1] = (int64_t)pfVar4 - ((int64_t)pfVar4 - (int64_t)pfVar9 & 0xfffffffffffffff8U);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180419fec(void)
void FUN_180419fec(void)

{
  float fVar1;
  float *pfVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  float *unaff_RBX;
  int64_t lVar6;
  int64_t *unaff_RDI;
  float *pfVar7;
  int64_t unaff_R12;
  float *unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int64_t in_stack_000000f0;
  int in_stack_000000f8;
  
  pfVar7 = unaff_R15;
  do {
    fVar13 = 0.0;
    do {
      fVar14 = *(float *)(unaff_R12 + 4 + (int64_t)pfVar7);
      fVar1 = *(float *)(unaff_R12 + 0x14 + (int64_t)pfVar7);
      fVar8 = unaff_XMM12_Da - fVar13;
      fVar10 = (float)*(int *)(unaff_R12 + 0x10 + (int64_t)pfVar7);
      fVar12 = fVar8 * fVar8 * fVar8;
      fVar9 = fVar8 * 3.0 * fVar8 * fVar13;
      fVar11 = fVar8 * 3.0 * fVar13 * fVar13;
      fVar8 = fVar13 * fVar13 * fVar13;
      fVar10 = ((float)*(int *)(unaff_R12 + (int64_t)pfVar7) +
               *(float *)(unaff_R12 + 8 + (int64_t)pfVar7)) * fVar9 +
               fVar12 * (float)*(int *)(unaff_R12 + (int64_t)pfVar7) +
               (fVar10 + *(float *)(unaff_R12 + 0x18 + (int64_t)pfVar7)) * fVar11 + fVar8 * fVar10;
      fVar14 = (fVar14 + *(float *)(unaff_R12 + 0xc + (int64_t)pfVar7)) * fVar9 + fVar12 * fVar14 +
               (fVar1 + *(float *)(unaff_R12 + 0x1c + (int64_t)pfVar7)) * fVar11 + fVar8 * fVar1;
      if (unaff_RBX < (float *)unaff_RDI[2]) {
        unaff_RDI[1] = (int64_t)(unaff_RBX + 2);
        *unaff_RBX = fVar10;
        unaff_RBX[1] = fVar14;
        unaff_RBX = (float *)unaff_RDI[1];
        pfVar4 = (float *)*unaff_RDI;
      }
      else {
        pfVar5 = (float *)*unaff_RDI;
        lVar3 = (int64_t)unaff_RBX - (int64_t)pfVar5 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18041a160:
          pfVar2 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,(char)unaff_RDI[3]);
          unaff_RBX = (float *)unaff_RDI[1];
          pfVar5 = (float *)*unaff_RDI;
          pfVar4 = pfVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          pfVar2 = unaff_R15;
          pfVar4 = unaff_R15;
          if (lVar3 != 0) goto LAB_18041a160;
        }
        for (; pfVar5 != unaff_RBX; pfVar5 = pfVar5 + 2) {
          *(uint64_t *)pfVar2 = *(uint64_t *)pfVar5;
          pfVar2 = pfVar2 + 2;
        }
        unaff_RBX = pfVar2 + 2;
        *pfVar2 = fVar10;
        pfVar2[1] = fVar14;
        if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *unaff_RDI = (int64_t)pfVar4;
        unaff_RDI[2] = (int64_t)(pfVar4 + lVar3 * 2);
        unaff_RDI[1] = (int64_t)unaff_RBX;
      }
      fVar13 = fVar13 + unaff_XMM13_Da;
    } while (fVar13 <= unaff_XMM12_Da);
    pfVar7 = pfVar7 + 8;
    in_stack_000000f8 = in_stack_000000f8 + 1;
    unaff_R12 = *(int64_t *)(in_stack_000000f0 + 8);
  } while ((uint64_t)(int64_t)in_stack_000000f8 <
           (uint64_t)(*(int64_t *)(in_stack_000000f0 + 0x10) - unaff_R12 >> 5));
  if (pfVar4 != unaff_RBX) {
    lVar6 = (int64_t)unaff_RBX - (int64_t)pfVar4 >> 3;
    for (lVar3 = lVar6; lVar3 != 0; lVar3 = lVar3 >> 1) {
      unaff_R15 = (float *)(uint64_t)((int)unaff_R15 + 1);
    }
    FUN_18041b560(pfVar4,unaff_RBX,(int64_t)((int)unaff_R15 + -1) * 2,0);
    if (lVar6 < 0x1d) {
      func_0x00018041b3e0(pfVar4,unaff_RBX);
    }
    else {
      pfVar7 = pfVar4 + 0x38;
      func_0x00018041b3e0(pfVar4,pfVar7);
      if (pfVar7 != unaff_RBX) {
        pfVar5 = pfVar7 + -2;
        do {
          fVar13 = pfVar5[2];
          fVar14 = *pfVar5;
          fVar1 = pfVar5[3];
          pfVar4 = pfVar7;
          if (fVar13 < fVar14) {
            do {
              *pfVar4 = fVar14;
              pfVar4[1] = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7) + 4);
              pfVar4 = pfVar4 + -2;
              fVar14 = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7));
            } while (fVar13 < fVar14);
          }
          pfVar7 = pfVar7 + 2;
          *pfVar4 = fVar13;
          pfVar5 = pfVar5 + 2;
          pfVar4[1] = fVar1;
        } while (pfVar7 != unaff_RBX);
      }
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar5 = (float *)*unaff_RDI;
  if ((pfVar5 != pfVar7) && (pfVar5 + 2 != pfVar7)) {
    pfVar4 = pfVar5 + 2;
    fVar13 = *pfVar5;
    do {
      pfVar2 = pfVar4;
      if (fVar13 == *pfVar2) {
        pfVar4 = pfVar5;
        if (pfVar5 != pfVar7) {
          while (pfVar5 = pfVar5 + 2, pfVar5 != pfVar7) {
            if (*pfVar5 != *pfVar4) {
              pfVar4[2] = *pfVar5;
              pfVar4[3] = pfVar5[1];
              pfVar4 = pfVar4 + 2;
            }
          }
          pfVar7 = pfVar4 + 2;
        }
        break;
      }
      pfVar4 = pfVar2 + 2;
      pfVar5 = pfVar2;
      fVar13 = *pfVar2;
    } while (pfVar2 + 2 != pfVar7);
  }
  pfVar5 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar5) {
    unaff_RDI[1] = (int64_t)pfVar5 - ((int64_t)pfVar5 - (int64_t)pfVar7 & 0xfffffffffffffff8U);
  }
  return;
}





// 函数: void FUN_18041a252(int32_t param_1,int32_t param_2)
void FUN_18041a252(int32_t param_1,int32_t param_2)

{
  float fVar1;
  int64_t lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar7;
  float *unaff_R14;
  int unaff_R15D;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  
  if (unaff_R14 != unaff_RSI) {
    lVar6 = (int64_t)unaff_RSI - (int64_t)unaff_R14 >> 3;
    for (lVar2 = lVar6; lVar2 != 0; lVar2 = lVar2 >> 1) {
      unaff_R15D = unaff_R15D + 1;
    }
    uVar8 = FUN_18041b560(param_1,param_2,(int64_t)(unaff_R15D + -1) * 2,0);
    if (lVar6 < 0x1d) {
      func_0x00018041b3e0();
    }
    else {
      pfVar7 = unaff_R14 + 0x38;
      func_0x00018041b3e0(uVar8,pfVar7);
      if (pfVar7 != unaff_RSI) {
        pfVar5 = pfVar7 + -2;
        do {
          fVar10 = pfVar5[2];
          fVar9 = *pfVar5;
          fVar1 = pfVar5[3];
          pfVar4 = pfVar7;
          if (fVar10 < fVar9) {
            do {
              *pfVar4 = fVar9;
              pfVar4[1] = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7) + 4);
              pfVar4 = pfVar4 + -2;
              fVar9 = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7));
            } while (fVar10 < fVar9);
          }
          pfVar7 = pfVar7 + 2;
          *pfVar4 = fVar10;
          pfVar5 = pfVar5 + 2;
          pfVar4[1] = fVar1;
        } while (pfVar7 != unaff_RSI);
      }
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar5 = (float *)*unaff_RDI;
  if ((pfVar5 != pfVar7) && (pfVar5 + 2 != pfVar7)) {
    pfVar4 = pfVar5 + 2;
    fVar10 = *pfVar5;
    do {
      pfVar3 = pfVar4;
      if (fVar10 == *pfVar3) {
        pfVar4 = pfVar5;
        if (pfVar5 != pfVar7) {
          while (pfVar5 = pfVar5 + 2, pfVar5 != pfVar7) {
            if (*pfVar5 != *pfVar4) {
              pfVar4[2] = *pfVar5;
              pfVar4[3] = pfVar5[1];
              pfVar4 = pfVar4 + 2;
            }
          }
          pfVar7 = pfVar4 + 2;
        }
        break;
      }
      pfVar4 = pfVar3 + 2;
      pfVar5 = pfVar3;
      fVar10 = *pfVar3;
    } while (pfVar3 + 2 != pfVar7);
  }
  pfVar5 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar5) {
    unaff_RDI[1] = (int64_t)pfVar5 - ((int64_t)pfVar5 - (int64_t)pfVar7 & 0xfffffffffffffff8U);
  }
  return;
}





// 函数: void FUN_18041a277(int32_t param_1,int32_t param_2)
void FUN_18041a277(int32_t param_1,int32_t param_2)

{
  float fVar1;
  int64_t lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar7;
  int64_t unaff_R14;
  int unaff_R15D;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = (int64_t)unaff_RSI - unaff_R14 >> 3;
  for (lVar2 = lVar6; lVar2 != 0; lVar2 = lVar2 >> 1) {
    unaff_R15D = unaff_R15D + 1;
  }
  uVar8 = FUN_18041b560(param_1,param_2,(int64_t)(unaff_R15D + -1) * 2,0);
  if (lVar6 < 0x1d) {
    func_0x00018041b3e0();
  }
  else {
    pfVar7 = (float *)(unaff_R14 + 0xe0);
    func_0x00018041b3e0(uVar8,pfVar7);
    if (pfVar7 != unaff_RSI) {
      pfVar5 = pfVar7 + -2;
      do {
        fVar10 = pfVar5[2];
        fVar9 = *pfVar5;
        fVar1 = pfVar5[3];
        pfVar4 = pfVar7;
        if (fVar10 < fVar9) {
          do {
            *pfVar4 = fVar9;
            pfVar4[1] = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7) + 4);
            pfVar4 = pfVar4 + -2;
            fVar9 = *(float *)((int64_t)pfVar4 + ((int64_t)pfVar5 - (int64_t)pfVar7));
          } while (fVar10 < fVar9);
        }
        pfVar7 = pfVar7 + 2;
        *pfVar4 = fVar10;
        pfVar5 = pfVar5 + 2;
        pfVar4[1] = fVar1;
      } while (pfVar7 != unaff_RSI);
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar5 = (float *)*unaff_RDI;
  if ((pfVar5 != pfVar7) && (pfVar5 + 2 != pfVar7)) {
    pfVar4 = pfVar5 + 2;
    fVar10 = *pfVar5;
    do {
      pfVar3 = pfVar4;
      if (fVar10 == *pfVar3) {
        pfVar4 = pfVar5;
        if (pfVar5 != pfVar7) {
          while (pfVar5 = pfVar5 + 2, pfVar5 != pfVar7) {
            if (*pfVar5 != *pfVar4) {
              pfVar4[2] = *pfVar5;
              pfVar4[3] = pfVar5[1];
              pfVar4 = pfVar4 + 2;
            }
          }
          pfVar7 = pfVar4 + 2;
        }
        break;
      }
      pfVar4 = pfVar3 + 2;
      pfVar5 = pfVar3;
      fVar10 = *pfVar3;
    } while (pfVar3 + 2 != pfVar7);
  }
  pfVar5 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar5) {
    unaff_RDI[1] = (int64_t)pfVar5 - ((int64_t)pfVar5 - (int64_t)pfVar7 & 0xfffffffffffffff8U);
  }
  return;
}





// 函数: void FUN_18041a355(float *param_1,uint64_t param_2,float *param_3)
void FUN_18041a355(float *param_1,uint64_t param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int64_t unaff_RDI;
  float fVar3;
  
  if (param_1 + 2 != param_3) {
    pfVar1 = param_1 + 2;
    fVar3 = *param_1;
    do {
      pfVar2 = pfVar1;
      if (fVar3 == *pfVar2) {
        pfVar1 = param_1;
        if (param_1 != param_3) {
          while (param_1 = param_1 + 2, param_1 != param_3) {
            if (*param_1 != *pfVar1) {
              pfVar1[2] = *param_1;
              pfVar1[3] = param_1[1];
              pfVar1 = pfVar1 + 2;
            }
          }
          param_3 = pfVar1 + 2;
        }
        break;
      }
      pfVar1 = pfVar2 + 2;
      param_1 = pfVar2;
      fVar3 = *pfVar2;
    } while (pfVar2 + 2 != param_3);
  }
  pfVar1 = *(float **)(unaff_RDI + 8);
  if (param_3 != pfVar1) {
    *(uint64_t *)(unaff_RDI + 8) =
         (int64_t)pfVar1 - ((int64_t)pfVar1 - (int64_t)param_3 & 0xfffffffffffffff8U);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




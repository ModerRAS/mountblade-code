#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part274.c - 4 个函数

// 函数: void FUN_18041a3e0(int64_t param_1,uint param_2,int64_t *param_3)
void FUN_18041a3e0(int64_t param_1,uint param_2,int64_t *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStackX_10;
  int32_t uStack_e4;
  
  lVar6 = *(int64_t *)(param_1 + 0x10);
  lVar8 = *(int64_t *)(param_1 + 8);
  pfVar3 = (float *)0x0;
  uVar9 = 0;
  pfVar4 = (float *)*param_3;
  param_3[1] = (int64_t)pfVar4;
  uVar10 = (lVar6 - lVar8 >> 5) * (uint64_t)param_2 + 1;
  pfVar7 = pfVar4;
  pfVar1 = pfVar4;
  if ((uint64_t)((param_3[2] - (int64_t)pfVar4) / 0xc) < uVar10) {
    pfVar5 = pfVar4;
    pfVar1 = pfVar3;
    if (uVar10 != 0) {
      pfVar1 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0xc,(char)param_3[3]);
      pfVar4 = (float *)*param_3;
      pfVar5 = (float *)param_3[1];
    }
    pfVar7 = pfVar1;
    if (pfVar4 != pfVar5) {
      do {
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar4;
        pfVar2 = pfVar4 + 2;
        pfVar4 = pfVar4 + 3;
        pfVar7[2] = *pfVar2;
        pfVar7 = pfVar7 + 3;
      } while (pfVar4 != pfVar5);
      pfVar4 = (float *)*param_3;
    }
    if (pfVar4 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *param_3 = (int64_t)pfVar1;
    param_3[2] = (int64_t)(pfVar1 + uVar10 * 3);
    param_3[1] = (int64_t)pfVar7;
  }
  lVar6 = *(int64_t *)(param_1 + 8);
  iStackX_10 = 0;
  pfVar4 = pfVar3;
  if (*(int64_t *)(param_1 + 0x10) - lVar6 >> 5 != 0) {
    do {
      fVar21 = 0.0;
      do {
        fVar13 = *(float *)(lVar6 + 0x14 + (int64_t)pfVar4);
        fVar11 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        fVar20 = 1.0 - fVar21;
        fVar17 = (float)*(int *)(lVar6 + (int64_t)pfVar4);
        fVar15 = (float)*(int *)(lVar6 + 0x10 + (int64_t)pfVar4);
        fVar12 = fVar15 + *(float *)(lVar6 + 0x18 + (int64_t)pfVar4);
        fVar16 = fVar17 + *(float *)(lVar6 + 8 + (int64_t)pfVar4);
        fVar18 = fVar13 + *(float *)(lVar6 + 0x1c + (int64_t)pfVar4);
        fVar19 = fVar20 * fVar20 * fVar20 * fVar17 + fVar20 * 3.0 * fVar20 * fVar21 * fVar16 +
                 fVar20 * 3.0 * fVar21 * fVar21 * fVar12 + fVar21 * fVar21 * fVar21 * fVar15;
        fVar14 = (4.0 - fVar21 * 3.0) * fVar21 - 1.0;
        fVar12 = (((fVar12 * 3.0 * fVar21 - (fVar12 + fVar12)) - fVar15 * fVar21) * fVar21 +
                 fVar17 * fVar20 * fVar20 + fVar14 * fVar16) * -3.0;
        fVar13 = (((fVar18 * 3.0 * fVar21 - (fVar18 + fVar18)) - fVar13 * fVar21) * fVar21 +
                 fVar11 * fVar20 * fVar20 +
                 (fVar11 + *(float *)(lVar6 + 0xc + (int64_t)pfVar4)) * fVar14) * -3.0;
        if (pfVar7 < (float *)param_3[2]) {
          param_3[1] = (int64_t)(pfVar7 + 3);
          *(uint64_t *)pfVar7 = CONCAT44(fVar12,fVar19);
          pfVar7[2] = fVar13;
          pfVar7 = (float *)param_3[1];
          pfVar1 = (float *)*param_3;
        }
        else {
          pfVar5 = (float *)*param_3;
          lVar8 = ((int64_t)pfVar7 - (int64_t)pfVar5) / 0xc;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_18041a774:
            pfVar2 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0xc,(char)param_3[3]);
            pfVar5 = (float *)*param_3;
            pfVar7 = (float *)param_3[1];
            pfVar1 = pfVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            pfVar2 = pfVar3;
            pfVar1 = pfVar3;
            if (lVar8 != 0) goto LAB_18041a774;
          }
          for (; pfVar5 != pfVar7; pfVar5 = pfVar5 + 3) {
            *(uint64_t *)pfVar2 = *(uint64_t *)pfVar5;
            pfVar2[2] = pfVar5[2];
            pfVar2 = pfVar2 + 3;
          }
          pfVar7 = pfVar2 + 3;
          *(uint64_t *)pfVar2 = CONCAT44(fVar12,fVar19);
          pfVar2[2] = fVar13;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *param_3 = (int64_t)pfVar1;
          param_3[1] = (int64_t)pfVar7;
          param_3[2] = (int64_t)(pfVar1 + lVar8 * 3);
        }
        fVar21 = fVar21 + 1.0 / (float)param_2;
      } while (fVar21 <= 1.0);
      iStackX_10 = iStackX_10 + 1;
      lVar6 = *(int64_t *)(param_1 + 8);
      pfVar4 = pfVar4 + 8;
    } while ((uint64_t)(int64_t)iStackX_10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar6 >> 5));
  }
  if (pfVar1 != pfVar7) {
    lVar6 = ((int64_t)pfVar7 - (int64_t)pfVar1) / 6 +
            ((int64_t)pfVar7 - (int64_t)pfVar1 >> 0x3f);
    lVar8 = (lVar6 >> 1) - (lVar6 >> 0x3f);
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = lVar6 >> 1) {
      uVar9 = (int)pfVar3 + 1;
      pfVar3 = (float *)(uint64_t)uVar9;
    }
    FUN_18041b6a0(pfVar1,pfVar7,(int64_t)(int)(uVar9 - 1) * 2,0);
    if (lVar8 < 0x1d) {
      FUN_18041b450(pfVar1,pfVar7);
    }
    else {
      pfVar4 = pfVar1 + 0x54;
      FUN_18041b450(pfVar1,pfVar4);
      if (pfVar4 != pfVar7) {
        pfVar1 = pfVar4 + -3;
        do {
          fVar21 = *pfVar1;
          fVar11 = (float)*(uint64_t *)pfVar4;
          fVar13 = pfVar4[2];
          uStack_e4 = (int32_t)((uint64_t)*(uint64_t *)pfVar4 >> 0x20);
          pfVar3 = pfVar4;
          if (fVar11 < fVar21) {
            do {
              *pfVar3 = fVar21;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar4) + 4);
              pfVar3 = pfVar3 + -3;
              fVar21 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar4));
            } while (fVar11 < fVar21);
          }
          pfVar4 = pfVar4 + 3;
          pfVar1 = pfVar1 + 3;
          *pfVar3 = fVar11;
          *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar13,uStack_e4);
        } while (pfVar4 != pfVar7);
      }
    }
  }
  pfVar7 = (float *)param_3[1];
  pfVar4 = (float *)*param_3;
  if ((pfVar4 != pfVar7) && (pfVar4 + 3 != pfVar7)) {
    pfVar1 = pfVar4 + 3;
    fVar21 = *pfVar4;
    do {
      pfVar3 = pfVar1;
      if (fVar21 == *pfVar3) {
        pfVar1 = pfVar4;
        if (pfVar4 != pfVar7) {
          while (pfVar4 = pfVar4 + 3, pfVar4 != pfVar7) {
            if (*pfVar4 != *pfVar1) {
              pfVar1[3] = *pfVar4;
              *(uint64_t *)(pfVar1 + 4) = *(uint64_t *)(pfVar4 + 1);
              pfVar1 = pfVar1 + 3;
            }
          }
          pfVar7 = pfVar1 + 3;
        }
        break;
      }
      pfVar1 = pfVar3 + 3;
      pfVar4 = pfVar3;
      fVar21 = *pfVar3;
    } while (pfVar3 + 3 != pfVar7);
  }
  pfVar4 = (float *)param_3[1];
  if (pfVar7 != pfVar4) {
    param_3[1] = (int64_t)(pfVar4 + (((int64_t)pfVar4 - (int64_t)pfVar7) / 0xc) * -3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041a3ff(uint64_t param_1,uint param_2,int64_t param_3)
void FUN_18041a3ff(uint64_t param_1,uint param_2,int64_t param_3)

{
  int64_t in_RAX;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  uint64_t unaff_RBX;
  float *pfVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  uint64_t uVar10;
  uint64_t unaff_R15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t uStackX_24;
  int64_t in_stack_00000110;
  int iStack0000000000000118;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  lVar6 = unaff_RDI[2];
  pfVar3 = (float *)0x0;
  uVar9 = 0;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  pfVar4 = (float *)*unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  unaff_RDI[1] = (int64_t)pfVar4;
  uVar10 = (unaff_R14 >> 5) * (uint64_t)param_2 + 1;
  pfVar7 = pfVar4;
  pfVar1 = pfVar4;
  if ((uint64_t)((lVar6 - (int64_t)pfVar4) / 0xc) < uVar10) {
    pfVar5 = pfVar4;
    pfVar1 = pfVar3;
    if (uVar10 != 0) {
      pfVar1 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0xc,(char)unaff_RDI[3]);
      pfVar4 = (float *)*unaff_RDI;
      pfVar5 = (float *)unaff_RDI[1];
    }
    pfVar7 = pfVar1;
    if (pfVar4 != pfVar5) {
      do {
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar4;
        pfVar2 = pfVar4 + 2;
        pfVar4 = pfVar4 + 3;
        pfVar7[2] = *pfVar2;
        pfVar7 = pfVar7 + 3;
      } while (pfVar4 != pfVar5);
      pfVar4 = (float *)*unaff_RDI;
    }
    if (pfVar4 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *unaff_RDI = (int64_t)pfVar1;
    unaff_RDI[2] = (int64_t)(pfVar1 + uVar10 * 3);
    unaff_RDI[1] = (int64_t)pfVar7;
    param_3 = in_stack_00000110;
  }
  lVar6 = *(int64_t *)(param_3 + 8);
  iStack0000000000000118 = 0;
  pfVar4 = pfVar3;
  if (*(int64_t *)(param_3 + 0x10) - lVar6 >> 5 != 0) {
    do {
      fVar21 = 0.0;
      do {
        fVar13 = *(float *)(lVar6 + 0x14 + (int64_t)pfVar4);
        fVar11 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        fVar20 = 1.0 - fVar21;
        fVar17 = (float)*(int *)(lVar6 + (int64_t)pfVar4);
        fVar15 = (float)*(int *)(lVar6 + 0x10 + (int64_t)pfVar4);
        fVar12 = fVar15 + *(float *)(lVar6 + 0x18 + (int64_t)pfVar4);
        fVar16 = fVar17 + *(float *)(lVar6 + 8 + (int64_t)pfVar4);
        fVar18 = fVar13 + *(float *)(lVar6 + 0x1c + (int64_t)pfVar4);
        fVar19 = fVar20 * fVar20 * fVar20 * fVar17 + fVar20 * 3.0 * fVar20 * fVar21 * fVar16 +
                 fVar20 * 3.0 * fVar21 * fVar21 * fVar12 + fVar21 * fVar21 * fVar21 * fVar15;
        fVar14 = (4.0 - fVar21 * 3.0) * fVar21 - 1.0;
        fVar12 = (((fVar12 * 3.0 * fVar21 - (fVar12 + fVar12)) - fVar15 * fVar21) * fVar21 +
                 fVar17 * fVar20 * fVar20 + fVar14 * fVar16) * -3.0;
        fVar13 = (((fVar18 * 3.0 * fVar21 - (fVar18 + fVar18)) - fVar13 * fVar21) * fVar21 +
                 fVar11 * fVar20 * fVar20 +
                 (fVar11 + *(float *)(lVar6 + 0xc + (int64_t)pfVar4)) * fVar14) * -3.0;
        if (pfVar7 < (float *)unaff_RDI[2]) {
          unaff_RDI[1] = (int64_t)(pfVar7 + 3);
          *(uint64_t *)pfVar7 = CONCAT44(fVar12,fVar19);
          pfVar7[2] = fVar13;
          pfVar7 = (float *)unaff_RDI[1];
          pfVar1 = (float *)*unaff_RDI;
        }
        else {
          pfVar5 = (float *)*unaff_RDI;
          lVar8 = ((int64_t)pfVar7 - (int64_t)pfVar5) / 0xc;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_18041a774:
            pfVar2 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0xc,(char)unaff_RDI[3]);
            pfVar5 = (float *)*unaff_RDI;
            pfVar7 = (float *)unaff_RDI[1];
            pfVar1 = pfVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            pfVar2 = pfVar3;
            pfVar1 = pfVar3;
            if (lVar8 != 0) goto LAB_18041a774;
          }
          for (; pfVar5 != pfVar7; pfVar5 = pfVar5 + 3) {
            *(uint64_t *)pfVar2 = *(uint64_t *)pfVar5;
            pfVar2[2] = pfVar5[2];
            pfVar2 = pfVar2 + 3;
          }
          pfVar7 = pfVar2 + 3;
          *(uint64_t *)pfVar2 = CONCAT44(fVar12,fVar19);
          pfVar2[2] = fVar13;
          if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *unaff_RDI = (int64_t)pfVar1;
          unaff_RDI[1] = (int64_t)pfVar7;
          unaff_RDI[2] = (int64_t)(pfVar1 + lVar8 * 3);
        }
        fVar21 = fVar21 + 1.0 / (float)param_2;
      } while (fVar21 <= 1.0);
      iStack0000000000000118 = iStack0000000000000118 + 1;
      lVar6 = *(int64_t *)(in_stack_00000110 + 8);
      pfVar4 = pfVar4 + 8;
    } while ((uint64_t)(int64_t)iStack0000000000000118 <
             (uint64_t)(*(int64_t *)(in_stack_00000110 + 0x10) - lVar6 >> 5));
  }
  if (pfVar1 != pfVar7) {
    lVar6 = ((int64_t)pfVar7 - (int64_t)pfVar1) / 6 +
            ((int64_t)pfVar7 - (int64_t)pfVar1 >> 0x3f);
    lVar8 = (lVar6 >> 1) - (lVar6 >> 0x3f);
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = lVar6 >> 1) {
      uVar9 = (int)pfVar3 + 1;
      pfVar3 = (float *)(uint64_t)uVar9;
    }
    FUN_18041b6a0(pfVar1,pfVar7,(int64_t)(int)(uVar9 - 1) * 2,0);
    if (lVar8 < 0x1d) {
      FUN_18041b450(pfVar1,pfVar7);
    }
    else {
      pfVar4 = pfVar1 + 0x54;
      FUN_18041b450(pfVar1,pfVar4);
      if (pfVar4 != pfVar7) {
        pfVar1 = pfVar4 + -3;
        do {
          fVar21 = *pfVar1;
          fVar11 = (float)*(uint64_t *)pfVar4;
          fVar13 = pfVar4[2];
          uStackX_24 = (int32_t)((uint64_t)*(uint64_t *)pfVar4 >> 0x20);
          pfVar3 = pfVar4;
          if (fVar11 < fVar21) {
            do {
              *pfVar3 = fVar21;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar4) + 4);
              pfVar3 = pfVar3 + -3;
              fVar21 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar4));
            } while (fVar11 < fVar21);
          }
          pfVar4 = pfVar4 + 3;
          pfVar1 = pfVar1 + 3;
          *pfVar3 = fVar11;
          *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar13,uStackX_24);
        } while (pfVar4 != pfVar7);
      }
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar4 = (float *)*unaff_RDI;
  if ((pfVar4 != pfVar7) && (pfVar4 + 3 != pfVar7)) {
    pfVar1 = pfVar4 + 3;
    fVar21 = *pfVar4;
    do {
      pfVar3 = pfVar1;
      if (fVar21 == *pfVar3) {
        pfVar1 = pfVar4;
        if (pfVar4 != pfVar7) {
          while (pfVar4 = pfVar4 + 3, pfVar4 != pfVar7) {
            if (*pfVar4 != *pfVar1) {
              pfVar1[3] = *pfVar4;
              *(uint64_t *)(pfVar1 + 4) = *(uint64_t *)(pfVar4 + 1);
              pfVar1 = pfVar1 + 3;
            }
          }
          pfVar7 = pfVar1 + 3;
        }
        break;
      }
      pfVar1 = pfVar3 + 3;
      pfVar4 = pfVar3;
      fVar21 = *pfVar3;
    } while (pfVar3 + 3 != pfVar7);
  }
  pfVar4 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar4) {
    unaff_RDI[1] = (int64_t)(pfVar4 + (((int64_t)pfVar4 - (int64_t)pfVar7) / 0xc) * -3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041a421(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4)
void FUN_18041a421(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  int64_t lVar7;
  float *unaff_RBP;
  float *unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  uint64_t uVar8;
  uint64_t unaff_R15;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int32_t uStackX_24;
  int64_t in_stack_00000110;
  int iStack0000000000000118;
  
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  unaff_RDI[1] = (int64_t)unaff_RSI;
  uVar8 = (unaff_R14 >> 5) * (uint64_t)param_2 + 1;
  lVar4 = SUB168(SEXT816(param_4) * SEXT816(param_1 - (int64_t)unaff_RSI),8);
  pfVar6 = unaff_RSI;
  pfVar1 = unaff_RSI;
  if ((uint64_t)((lVar4 >> 1) - (lVar4 >> 0x3f)) < uVar8) {
    pfVar5 = unaff_RSI;
    pfVar1 = unaff_RBP;
    if (uVar8 != 0) {
      pfVar1 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 0xc,(char)unaff_RDI[3]);
      unaff_RSI = (float *)*unaff_RDI;
      pfVar5 = (float *)unaff_RDI[1];
    }
    pfVar6 = pfVar1;
    if (unaff_RSI != pfVar5) {
      do {
        *(uint64_t *)pfVar6 = *(uint64_t *)unaff_RSI;
        pfVar3 = unaff_RSI + 2;
        unaff_RSI = unaff_RSI + 3;
        pfVar6[2] = *pfVar3;
        pfVar6 = pfVar6 + 3;
      } while (unaff_RSI != pfVar5);
      unaff_RSI = (float *)*unaff_RDI;
    }
    if (unaff_RSI != (float *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *unaff_RDI = (int64_t)pfVar1;
    unaff_RDI[2] = (int64_t)(pfVar1 + uVar8 * 3);
    param_4 = 0x2aaaaaaaaaaaaaab;
    unaff_RDI[1] = (int64_t)pfVar6;
    param_3 = in_stack_00000110;
  }
  lVar4 = *(int64_t *)(param_3 + 8);
  iStack0000000000000118 = (int)unaff_RBP;
  pfVar5 = unaff_RBP;
  if (*(int64_t *)(param_3 + 0x10) - lVar4 >> 5 != 0) {
    do {
      fVar19 = 0.0;
      do {
        fVar11 = *(float *)(lVar4 + 0x14 + (int64_t)pfVar5);
        fVar9 = *(float *)(lVar4 + 4 + (int64_t)pfVar5);
        fVar18 = 1.0 - fVar19;
        fVar15 = (float)*(int *)(lVar4 + (int64_t)pfVar5);
        fVar13 = (float)*(int *)(lVar4 + 0x10 + (int64_t)pfVar5);
        fVar10 = fVar13 + *(float *)(lVar4 + 0x18 + (int64_t)pfVar5);
        fVar14 = fVar15 + *(float *)(lVar4 + 8 + (int64_t)pfVar5);
        fVar16 = fVar11 + *(float *)(lVar4 + 0x1c + (int64_t)pfVar5);
        fVar17 = fVar18 * fVar18 * fVar18 * fVar15 + fVar18 * 3.0 * fVar18 * fVar19 * fVar14 +
                 fVar18 * 3.0 * fVar19 * fVar19 * fVar10 + fVar19 * fVar19 * fVar19 * fVar13;
        fVar12 = (4.0 - fVar19 * 3.0) * fVar19 - 1.0;
        fVar10 = (((fVar10 * 3.0 * fVar19 - (fVar10 + fVar10)) - fVar13 * fVar19) * fVar19 +
                 fVar15 * fVar18 * fVar18 + fVar12 * fVar14) * -3.0;
        fVar11 = (((fVar16 * 3.0 * fVar19 - (fVar16 + fVar16)) - fVar11 * fVar19) * fVar19 +
                 fVar9 * fVar18 * fVar18 +
                 (fVar9 + *(float *)(lVar4 + 0xc + (int64_t)pfVar5)) * fVar12) * -3.0;
        if (pfVar6 < (float *)unaff_RDI[2]) {
          unaff_RDI[1] = (int64_t)(pfVar6 + 3);
          *(uint64_t *)pfVar6 = CONCAT44(fVar10,fVar17);
          pfVar6[2] = fVar11;
          pfVar6 = (float *)unaff_RDI[1];
          pfVar1 = (float *)*unaff_RDI;
        }
        else {
          pfVar3 = (float *)*unaff_RDI;
          lVar7 = SUB168(SEXT816(param_4) * SEXT816((int64_t)pfVar6 - (int64_t)pfVar3),8);
          lVar7 = (lVar7 >> 1) - (lVar7 >> 0x3f);
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_18041a774:
            pfVar2 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0xc,(char)unaff_RDI[3]);
            pfVar3 = (float *)*unaff_RDI;
            pfVar6 = (float *)unaff_RDI[1];
            pfVar1 = pfVar2;
          }
          else {
            lVar7 = lVar7 * 2;
            pfVar2 = unaff_RBP;
            pfVar1 = unaff_RBP;
            if (lVar7 != 0) goto LAB_18041a774;
          }
          for (; pfVar3 != pfVar6; pfVar3 = pfVar3 + 3) {
            *(uint64_t *)pfVar2 = *(uint64_t *)pfVar3;
            pfVar2[2] = pfVar3[2];
            pfVar2 = pfVar2 + 3;
          }
          pfVar6 = pfVar2 + 3;
          *(uint64_t *)pfVar2 = CONCAT44(fVar10,fVar17);
          pfVar2[2] = fVar11;
          if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *unaff_RDI = (int64_t)pfVar1;
          unaff_RDI[1] = (int64_t)pfVar6;
          unaff_RDI[2] = (int64_t)(pfVar1 + lVar7 * 3);
        }
        fVar19 = fVar19 + 1.0 / (float)param_2;
        param_4 = 0x2aaaaaaaaaaaaaab;
      } while (fVar19 <= 1.0);
      iStack0000000000000118 = iStack0000000000000118 + 1;
      lVar4 = *(int64_t *)(in_stack_00000110 + 8);
      pfVar5 = pfVar5 + 8;
    } while ((uint64_t)(int64_t)iStack0000000000000118 <
             (uint64_t)(*(int64_t *)(in_stack_00000110 + 0x10) - lVar4 >> 5));
  }
  if (pfVar1 != pfVar6) {
    lVar4 = ((int64_t)pfVar6 - (int64_t)pfVar1) / 6 +
            ((int64_t)pfVar6 - (int64_t)pfVar1 >> 0x3f);
    lVar7 = (lVar4 >> 1) - (lVar4 >> 0x3f);
    for (lVar4 = lVar7; lVar4 != 0; lVar4 = lVar4 >> 1) {
      unaff_RBP = (float *)(uint64_t)((int)unaff_RBP + 1);
    }
    FUN_18041b6a0(pfVar1,pfVar6,(int64_t)((int)unaff_RBP + -1) * 2,0);
    if (lVar7 < 0x1d) {
      FUN_18041b450(pfVar1,pfVar6);
    }
    else {
      pfVar5 = pfVar1 + 0x54;
      FUN_18041b450(pfVar1,pfVar5);
      if (pfVar5 != pfVar6) {
        pfVar1 = pfVar5 + -3;
        do {
          fVar19 = *pfVar1;
          fVar9 = (float)*(uint64_t *)pfVar5;
          fVar11 = pfVar5[2];
          uStackX_24 = (int32_t)((uint64_t)*(uint64_t *)pfVar5 >> 0x20);
          pfVar3 = pfVar5;
          if (fVar9 < fVar19) {
            do {
              *pfVar3 = fVar19;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar5) + 4);
              pfVar3 = pfVar3 + -3;
              fVar19 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar1 - (int64_t)pfVar5));
            } while (fVar9 < fVar19);
          }
          pfVar5 = pfVar5 + 3;
          pfVar1 = pfVar1 + 3;
          *pfVar3 = fVar9;
          *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar11,uStackX_24);
        } while (pfVar5 != pfVar6);
      }
    }
  }
  pfVar6 = (float *)unaff_RDI[1];
  pfVar1 = (float *)*unaff_RDI;
  if ((pfVar1 != pfVar6) && (pfVar1 + 3 != pfVar6)) {
    pfVar5 = pfVar1 + 3;
    fVar19 = *pfVar1;
    do {
      pfVar3 = pfVar5;
      if (fVar19 == *pfVar3) {
        pfVar5 = pfVar1;
        if (pfVar1 != pfVar6) {
          while (pfVar1 = pfVar1 + 3, pfVar1 != pfVar6) {
            if (*pfVar1 != *pfVar5) {
              pfVar5[3] = *pfVar1;
              *(uint64_t *)(pfVar5 + 4) = *(uint64_t *)(pfVar1 + 1);
              pfVar5 = pfVar5 + 3;
            }
          }
          pfVar6 = pfVar5 + 3;
        }
        break;
      }
      pfVar5 = pfVar3 + 3;
      pfVar1 = pfVar3;
      fVar19 = *pfVar3;
    } while (pfVar3 + 3 != pfVar6);
  }
  pfVar1 = (float *)unaff_RDI[1];
  if (pfVar6 != pfVar1) {
    unaff_RDI[1] = (int64_t)(pfVar1 + (((int64_t)pfVar1 - (int64_t)pfVar6) / 0xc) * -3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041a537(void)
void FUN_18041a537(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  float *unaff_RBX;
  int64_t lVar6;
  float *unaff_RBP;
  int64_t *unaff_RDI;
  float *pfVar7;
  int64_t in_R9;
  int64_t unaff_R12;
  float fVar8;
  float fVar9;
  float in_XMM3_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int32_t uStackX_24;
  float fStack0000000000000028;
  int64_t in_stack_00000110;
  int in_stack_00000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  
  pfVar7 = unaff_RBP;
  do {
    fVar17 = 0.0;
    do {
      fVar1 = *(float *)(unaff_R12 + 0x14 + (int64_t)pfVar7);
      fVar8 = *(float *)(unaff_R12 + 4 + (int64_t)pfVar7);
      fVar16 = unaff_XMM14_Da - fVar17;
      fVar13 = (float)*(int *)(unaff_R12 + (int64_t)pfVar7);
      fVar11 = (float)*(int *)(unaff_R12 + 0x10 + (int64_t)pfVar7);
      fVar9 = fVar11 + *(float *)(unaff_R12 + 0x18 + (int64_t)pfVar7);
      fVar12 = fVar13 + *(float *)(unaff_R12 + 8 + (int64_t)pfVar7);
      fVar14 = fVar1 + *(float *)(unaff_R12 + 0x1c + (int64_t)pfVar7);
      fVar15 = fVar16 * fVar16 * fVar16 * fVar13 + fVar16 * in_XMM3_Da * fVar16 * fVar17 * fVar12 +
               fVar16 * in_XMM3_Da * fVar17 * fVar17 * fVar9 + fVar17 * fVar17 * fVar17 * fVar11;
      fVar10 = (4.0 - fVar17 * in_XMM3_Da) * fVar17 - unaff_XMM14_Da;
      fVar9 = (((fVar9 * 3.0 * fVar17 - (fVar9 + fVar9)) - fVar11 * fVar17) * fVar17 +
              fVar13 * fVar16 * fVar16 + fVar10 * fVar12) * -3.0;
      fStack0000000000000028 =
           (((fVar14 * 3.0 * fVar17 - (fVar14 + fVar14)) - fVar1 * fVar17) * fVar17 +
           fVar8 * fVar16 * fVar16 +
           (fVar8 + *(float *)(unaff_R12 + 0xc + (int64_t)pfVar7)) * fVar10) * -3.0;
      fStack0000000000000120 = fVar9;
      fStack0000000000000124 = fStack0000000000000028;
      if (unaff_RBX < (float *)unaff_RDI[2]) {
        unaff_RDI[1] = (int64_t)(unaff_RBX + 3);
        *(uint64_t *)unaff_RBX = CONCAT44(fVar9,fVar15);
        unaff_RBX[2] = fStack0000000000000028;
        unaff_RBX = (float *)unaff_RDI[1];
        pfVar3 = (float *)*unaff_RDI;
      }
      else {
        pfVar4 = (float *)*unaff_RDI;
        lVar5 = SUB168(SEXT816(in_R9) * SEXT816((int64_t)unaff_RBX - (int64_t)pfVar4),8);
        lVar5 = (lVar5 >> 1) - (lVar5 >> 0x3f);
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_18041a774:
          pfVar2 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0xc,(char)unaff_RDI[3]);
          pfVar4 = (float *)*unaff_RDI;
          unaff_RBX = (float *)unaff_RDI[1];
          pfVar3 = pfVar2;
        }
        else {
          lVar5 = lVar5 * 2;
          pfVar2 = unaff_RBP;
          pfVar3 = unaff_RBP;
          if (lVar5 != 0) goto LAB_18041a774;
        }
        for (; pfVar4 != unaff_RBX; pfVar4 = pfVar4 + 3) {
          *(uint64_t *)pfVar2 = *(uint64_t *)pfVar4;
          pfVar2[2] = pfVar4[2];
          pfVar2 = pfVar2 + 3;
        }
        unaff_RBX = pfVar2 + 3;
        *(uint64_t *)pfVar2 = CONCAT44(fVar9,fVar15);
        pfVar2[2] = fStack0000000000000028;
        if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *unaff_RDI = (int64_t)pfVar3;
        unaff_RDI[1] = (int64_t)unaff_RBX;
        unaff_RDI[2] = (int64_t)(pfVar3 + lVar5 * 3);
      }
      in_XMM3_Da = 3.0;
      fVar17 = fVar17 + unaff_XMM15_Da;
      in_R9 = 0x2aaaaaaaaaaaaaab;
    } while (fVar17 <= unaff_XMM14_Da);
    pfVar7 = pfVar7 + 8;
    in_stack_00000118 = in_stack_00000118 + 1;
    unaff_R12 = *(int64_t *)(in_stack_00000110 + 8);
  } while ((uint64_t)(int64_t)in_stack_00000118 <
           (uint64_t)(*(int64_t *)(in_stack_00000110 + 0x10) - unaff_R12 >> 5));
  if (pfVar3 != unaff_RBX) {
    lVar5 = ((int64_t)unaff_RBX - (int64_t)pfVar3) / 6 +
            ((int64_t)unaff_RBX - (int64_t)pfVar3 >> 0x3f);
    lVar6 = (lVar5 >> 1) - (lVar5 >> 0x3f);
    for (lVar5 = lVar6; lVar5 != 0; lVar5 = lVar5 >> 1) {
      unaff_RBP = (float *)(uint64_t)((int)unaff_RBP + 1);
    }
    FUN_18041b6a0(pfVar3,unaff_RBX,(int64_t)((int)unaff_RBP + -1) * 2,0);
    if (lVar6 < 0x1d) {
      FUN_18041b450(pfVar3,unaff_RBX);
    }
    else {
      pfVar7 = pfVar3 + 0x54;
      FUN_18041b450(pfVar3,pfVar7);
      if (pfVar7 != unaff_RBX) {
        pfVar4 = pfVar7 + -3;
        do {
          fVar17 = *pfVar4;
          fVar8 = (float)*(uint64_t *)pfVar7;
          fVar1 = pfVar7[2];
          uStackX_24 = (int32_t)((uint64_t)*(uint64_t *)pfVar7 >> 0x20);
          pfVar3 = pfVar7;
          if (fVar8 < fVar17) {
            do {
              *pfVar3 = fVar17;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7) + 4);
              pfVar3 = pfVar3 + -3;
              fVar17 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7));
            } while (fVar8 < fVar17);
          }
          pfVar7 = pfVar7 + 3;
          pfVar4 = pfVar4 + 3;
          *pfVar3 = fVar8;
          *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar1,uStackX_24);
        } while (pfVar7 != unaff_RBX);
      }
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar4 = (float *)*unaff_RDI;
  if ((pfVar4 != pfVar7) && (pfVar4 + 3 != pfVar7)) {
    pfVar3 = pfVar4 + 3;
    fVar17 = *pfVar4;
    do {
      pfVar2 = pfVar3;
      if (fVar17 == *pfVar2) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar7) {
          while (pfVar4 = pfVar4 + 3, pfVar4 != pfVar7) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[3] = *pfVar4;
              *(uint64_t *)(pfVar3 + 4) = *(uint64_t *)(pfVar4 + 1);
              pfVar3 = pfVar3 + 3;
            }
          }
          pfVar7 = pfVar3 + 3;
        }
        break;
      }
      pfVar3 = pfVar2 + 3;
      pfVar4 = pfVar2;
      fVar17 = *pfVar2;
    } while (pfVar2 + 3 != pfVar7);
  }
  pfVar4 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar4) {
    unaff_RDI[1] = (int64_t)(pfVar4 + (((int64_t)pfVar4 - (int64_t)pfVar7) / 0xc) * -3);
  }
  return;
}






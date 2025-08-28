#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part066.c - 11 个函数

// 函数: void FUN_1800e4da0(int64_t param_1,uint64_t param_2,uint *param_3,int param_4)
void FUN_1800e4da0(int64_t param_1,uint64_t param_2,uint *param_3,int param_4)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  
  param_1 = (int64_t)param_4 * 0x248 + param_1;
  uVar8 = 0xffffffff;
  if (*param_3 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1800e7e40(param_1 + 0x2378);
    uVar6 = (uint64_t)uVar2;
  }
  if (*param_3 != 0) {
    uVar2 = FUN_1800e7d60(param_1 + 0x2810);
    uVar8 = (uint64_t)uVar2;
  }
  for (uVar2 = 0; (uint64_t)(int64_t)(int)uVar2 < (uint64_t)*param_3; uVar2 = uVar2 + 1) {
    iVar5 = (int)uVar6;
    uVar4 = (uint64_t)(uVar2 & 0x7ff);
    uVar1 = uVar6 >> 0xc;
    uVar3 = (uint64_t)(uVar2 >> 0xb);
    *(int32_t *)
     (*(int64_t *)(*(int64_t *)(param_3 + uVar3 * 2 + 2) + 0x10 + uVar4 * 0x18) + 0x21c) = 0;
    *(int *)(*(int64_t *)(*(int64_t *)(param_3 + uVar3 * 2 + 2) + 0x10 + uVar4 * 0x18) + 0x214) =
         iVar5;
    uVar6 = (uint64_t)(iVar5 + 1);
    iVar7 = (int)uVar8;
    *(uint64_t *)
     (*(int64_t *)(*(int64_t *)(param_3 + uVar3 * 2 + 2) + 0x10 + uVar4 * 0x18) + 0x288) =
         *(int64_t *)(param_1 + 0x2380 + uVar1 * 8) +
         (uint64_t)(uint)(iVar5 + (int)uVar1 * -0x1000) * 0xa0;
    uVar1 = uVar8 >> 0xc;
    *(int *)(*(int64_t *)(*(int64_t *)(param_3 + uVar3 * 2 + 2) + 0x10 + uVar4 * 0x18) + 0x218) =
         iVar7;
    uVar8 = (uint64_t)(iVar7 + 1);
    *(uint64_t *)
     (*(int64_t *)(*(int64_t *)(param_3 + uVar3 * 2 + 2) + 0x10 + uVar4 * 0x18) + 0x290) =
         *(int64_t *)(param_1 + 0x2818 + uVar1 * 8) +
         (uint64_t)(uint)(iVar7 + (int)uVar1 * -0x1000) * 0x130;
  }
  return;
}






// 函数: void FUN_1800e4ee0(int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
void FUN_1800e4ee0(int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 != 0) {
    param_1 = (int64_t)param_4 * 0x248 + param_1;
    uVar1 = FUN_1800e7e40(param_1 + 0x2378,1);
    *(uint *)(param_3 + 0x214) = uVar1;
    *(uint64_t *)(param_3 + 0x288) =
         *(int64_t *)(param_1 + 0x2380 + (uint64_t)(uVar1 >> 0xc) * 8) +
         (uint64_t)(uVar1 + (uVar1 >> 0xc) * -0x1000) * 0xa0;
    uVar1 = FUN_1800e7d60(param_1 + 0x2810,1);
    *(uint *)(param_3 + 0x218) = uVar1;
    *(uint64_t *)(param_3 + 0x290) =
         *(int64_t *)(param_1 + 0x2818 + (uint64_t)(uVar1 >> 0xc) * 8) +
         (uint64_t)(uVar1 + (uVar1 >> 0xc) * -0x1000) * 0x130;
  }
  return;
}






// 函数: void FUN_1800e4ef6(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1800e4ef6(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  int64_t in_RAX;
  
  param_1 = in_RAX * 0x248 + param_1;
  uVar1 = FUN_1800e7e40(param_1 + 0x2378);
  *(uint *)(param_3 + 0x214) = uVar1;
  *(uint64_t *)(param_3 + 0x288) =
       *(int64_t *)(param_1 + 0x2380 + (uint64_t)(uVar1 >> 0xc) * 8) +
       (uint64_t)(uVar1 + (uVar1 >> 0xc) * -0x1000) * 0xa0;
  uVar1 = FUN_1800e7d60(param_1 + 0x2810,1);
  *(uint *)(param_3 + 0x218) = uVar1;
  *(uint64_t *)(param_3 + 0x290) =
       *(int64_t *)(param_1 + 0x2818 + (uint64_t)(uVar1 >> 0xc) * 8) +
       (uint64_t)(uVar1 + (uVar1 >> 0xc) * -0x1000) * 0x130;
  return;
}






// 函数: void FUN_1800e4f89(void)
void FUN_1800e4f89(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e4f90(int64_t param_1,uint64_t param_2,uint *param_3,int param_4)
void FUN_1800e4f90(int64_t param_1,uint64_t param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int64_t *plVar2;
  uint uVar3;
  int64_t lVar4;
  char *pcVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint uVar12;
  bool bVar13;
  
  param_1 = (int64_t)param_4 * 0x248 + param_1;
  uVar3 = *param_3;
  uVar6 = 0;
  if (uVar3 == 0) {
    uVar12 = 0xffffffff;
    uVar6 = 0;
  }
  else {
    LOCK();
    puVar1 = (uint *)(param_1 + 0x7620);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    UNLOCK();
    uVar10 = (uint64_t)(uVar12 >> 0xc);
    uVar7 = (uint64_t)((uVar3 - 1) + uVar12 >> 0xc);
    if (uVar10 <= uVar7) {
      pcVar5 = (char *)(param_1 + 0x7828 + uVar10);
      lVar8 = (uVar7 - uVar10) + 1;
      plVar11 = (int64_t *)(param_1 + 0x7628 + (uint64_t)(uVar12 >> 0xc) * 8);
      do {
        iVar9 = (int)uVar10;
        if (*plVar11 == 0) {
          lVar4 = FUN_18062b420(system_memory_pool_ptr,0x120000,0x25);
          plVar2 = (int64_t *)(param_1 + 0x7628 + (int64_t)iVar9 * 8);
          LOCK();
          bVar13 = *plVar2 == 0;
          if (bVar13) {
            *plVar2 = lVar4;
          }
          UNLOCK();
          if (bVar13) {
            LOCK();
            *(int8_t *)((int64_t)iVar9 + 0x7828 + param_1) = 0;
            UNLOCK();
          }
          else {
            if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            do {
            } while (*pcVar5 != '\0');
          }
        }
        else {
          do {
          } while (*pcVar5 != '\0');
        }
        uVar10 = (uint64_t)(iVar9 + 1);
        plVar11 = plVar11 + 1;
        pcVar5 = pcVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  for (; (uint64_t)(int64_t)(int)uVar6 < (uint64_t)*param_3; uVar6 = uVar6 + 1) {
    *(uint *)(*(int64_t *)
               (*(int64_t *)(param_3 + (uint64_t)(uVar6 >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(uVar6 & 0x7ff) * 0x18) + 0x220) = uVar12;
    *(uint64_t *)
     (*(int64_t *)
       (*(int64_t *)(param_3 + (uint64_t)(uVar6 >> 0xb) * 2 + 2) + 0x10 +
       (uint64_t)(uVar6 & 0x7ff) * 0x18) + 0x298) =
         *(int64_t *)(param_1 + 0x7628 + (uint64_t)(uVar12 >> 0xc) * 8) +
         (uint64_t)(uVar12 + (uVar12 >> 0xc) * -0x1000) * 0x120;
    uVar12 = uVar12 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e4fbe(int param_1)
void FUN_1800e4fbe(int param_1)

{
  uint *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char *pcVar4;
  uint unaff_EBP;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint *unaff_R12;
  int64_t unaff_R13;
  int64_t *plVar9;
  uint uVar10;
  bool bVar11;
  
  LOCK();
  puVar1 = (uint *)(unaff_R13 + 0x7620);
  uVar10 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  UNLOCK();
  uVar8 = (uint64_t)(uVar10 >> 0xc);
  uVar5 = (uint64_t)(param_1 + -1 + uVar10 >> 0xc);
  if (uVar8 <= uVar5) {
    pcVar4 = (char *)(unaff_R13 + 0x7828 + uVar8);
    lVar6 = (uVar5 - uVar8) + 1;
    plVar9 = (int64_t *)(unaff_R13 + 0x7628 + (uint64_t)(uVar10 >> 0xc) * 8);
    do {
      iVar7 = (int)uVar8;
      if (*plVar9 == 0) {
        lVar3 = FUN_18062b420(system_memory_pool_ptr,0x120000,0x25);
        plVar2 = (int64_t *)(unaff_R13 + 0x7628 + (int64_t)iVar7 * 8);
        LOCK();
        bVar11 = *plVar2 == 0;
        if (bVar11) {
          *plVar2 = lVar3;
        }
        UNLOCK();
        if (bVar11) {
          LOCK();
          *(char *)((int64_t)iVar7 + 0x7828 + unaff_R13) = (char)unaff_EBP;
          UNLOCK();
        }
        else {
          if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          do {
          } while (*pcVar4 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar4 != '\0');
      }
      uVar8 = (uint64_t)(iVar7 + 1);
      plVar9 = plVar9 + 1;
      pcVar4 = pcVar4 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  for (; (uint64_t)(int64_t)(int)unaff_EBP < (uint64_t)*unaff_R12; unaff_EBP = unaff_EBP + 1) {
    *(uint *)(*(int64_t *)
               (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x220) = uVar10;
    *(uint64_t *)
     (*(int64_t *)
       (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
       (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x298) =
         *(int64_t *)(unaff_R13 + 0x7628 + (uint64_t)(uVar10 >> 0xc) * 8) +
         (uint64_t)(uVar10 + (uVar10 >> 0xc) * -0x1000) * 0x120;
    uVar10 = uVar10 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e4fef(void)
void FUN_1800e4fef(void)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t lVar2;
  char *pcVar3;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar4;
  int iVar5;
  uint64_t unaff_RDI;
  uint *unaff_R12;
  int64_t unaff_R13;
  int64_t *plVar6;
  uint unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(unaff_R13 + 0x7828 + unaff_RDI);
  lVar4 = (unaff_RSI - unaff_RDI) + 1;
  plVar6 = (int64_t *)(unaff_R13 + 0x7628 + in_RAX * 8);
  do {
    iVar5 = (int)unaff_RDI;
    if (*plVar6 == 0) {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,0x120000,0x25);
      plVar1 = (int64_t *)(unaff_R13 + 0x7628 + (int64_t)iVar5 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(char *)((int64_t)iVar5 + 0x7828 + unaff_R13) = (char)unaff_EBP;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RDI = (uint64_t)(iVar5 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  for (; (uint64_t)(int64_t)(int)unaff_EBP < (uint64_t)*unaff_R12; unaff_EBP = unaff_EBP + 1) {
    *(uint *)(*(int64_t *)
               (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x220) = unaff_R15D;
    *(uint64_t *)
     (*(int64_t *)
       (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
       (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x298) =
         *(int64_t *)(unaff_R13 + 0x7628 + (uint64_t)(unaff_R15D >> 0xc) * 8) +
         (uint64_t)(unaff_R15D + (unaff_R15D >> 0xc) * -0x1000) * 0x120;
    unaff_R15D = unaff_R15D + 1;
  }
  return;
}






// 函数: void FUN_1800e5085(void)
void FUN_1800e5085(void)

{
  uint unaff_EBP;
  uint *unaff_R12;
  int64_t unaff_R13;
  uint unaff_R15D;
  
  for (; (uint64_t)(int64_t)(int)unaff_EBP < (uint64_t)*unaff_R12; unaff_EBP = unaff_EBP + 1) {
    *(uint *)(*(int64_t *)
               (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x220) = unaff_R15D;
    *(uint64_t *)
     (*(int64_t *)
       (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
       (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x298) =
         *(int64_t *)(unaff_R13 + 0x7628 + (uint64_t)(unaff_R15D >> 0xc) * 8) +
         (uint64_t)(unaff_R15D + (unaff_R15D >> 0xc) * -0x1000) * 0x120;
    unaff_R15D = unaff_R15D + 1;
  }
  return;
}






// 函数: void FUN_1800e5090(void)
void FUN_1800e5090(void)

{
  uint unaff_EBP;
  uint *unaff_R12;
  int64_t unaff_R13;
  uint unaff_R15D;
  
  for (; (uint64_t)(int64_t)(int)unaff_EBP < (uint64_t)*unaff_R12; unaff_EBP = unaff_EBP + 1) {
    *(uint *)(*(int64_t *)
               (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x220) = unaff_R15D;
    *(uint64_t *)
     (*(int64_t *)
       (*(int64_t *)(unaff_R12 + (uint64_t)(unaff_EBP >> 0xb) * 2 + 2) + 0x10 +
       (uint64_t)(unaff_EBP & 0x7ff) * 0x18) + 0x298) =
         *(int64_t *)(unaff_R13 + 0x7628 + (uint64_t)(unaff_R15D >> 0xc) * 8) +
         (uint64_t)(unaff_R15D + (unaff_R15D >> 0xc) * -0x1000) * 0x120;
    unaff_R15D = unaff_R15D + 1;
  }
  return;
}






// 函数: void FUN_1800e5110(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_1800e5110(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  uint64_t auStackX_10 [3];
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t *puStack_28;
  void *puStack_20;
  code *pcStack_18;
  
  puStack_28 = auStackX_10;
  puStack_20 = &unknown_var_1264_ptr;
  pcStack_18 = FUN_1800ea6f0;
  uStack_40 = SUB84(param_3,0);
  uStack_3c = (int32_t)((uint64_t)param_3 >> 0x20);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  auStackX_10[0] = param_2;
  FUN_1800e8d00(&uStack_30,param_2,param_3[1] - *param_3 >> 3 & 0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e5180(uint64_t param_1,uint64_t param_2,uint *param_3)
void FUN_1800e5180(uint64_t param_1,uint64_t param_2,uint *param_3)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  char *pcVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint uVar22;
  uint uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int iVar26;
  uint *puVar27;
  bool bVar28;
  
  uVar23 = *param_3;
  if (uVar23 == 0) {
    return;
  }
  uVar21 = 0;
  iVar26 = 1;
  if (0 < (int)uVar23) {
    do {
      uVar12 = (uint)uVar21;
      uVar21 = uVar21 >> 0xb;
      if ((*(uint *)(*(int64_t *)
                      (*(int64_t *)(param_3 + uVar21 * 2 + 2) + 0x10 +
                      (uint64_t)(uVar12 & 0x7ff) * 0x18) + 0x2e0) & 0x800) != 0) {
        if ((int)uVar12 < (int)uVar23) {
          lVar18 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
          lVar13 = *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + lVar18);
          uVar25 = *(uint64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 8 + lVar18);
          lVar18 = *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 0x10 + lVar18);
          uVar12 = uVar12 + 1;
          *(int32_t *)(lVar18 + 0x2d0) = 1;
          if ((int)uVar12 < (int)uVar23) goto LAB_1800e5260;
        }
        break;
      }
      uVar21 = (uint64_t)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < (int)uVar23);
  }
  goto FUN_1800e545a;
LAB_1800e5260:
  do {
    uVar21 = (uint64_t)(uVar12 >> 0xb);
    lVar7 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
    lVar5 = *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 0x10 + lVar7);
    if (((lVar13 == *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + lVar7)) &&
        ((char)*(uint64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 8 + lVar7) == (char)uVar25)
        ) && (uVar22 = *(uint *)(lVar5 + 0x2e0), (uVar22 >> 0xb & 1) != 0)) {
      lVar7 = *(int64_t *)(lVar18 + 0x280);
      lVar20 = 0;
      lVar6 = *(int64_t *)(lVar5 + 0x280);
      plVar16 = (int64_t *)(lVar7 + 0xb8);
      do {
        if (*(int64_t *)((lVar6 - lVar7) + (int64_t)plVar16) != *plVar16) goto LAB_1800e538e;
        lVar20 = lVar20 + 1;
        plVar16 = plVar16 + 1;
      } while (lVar20 < 0x10);
      if (((((*(char *)(lVar5 + 0x9b) != *(char *)(lVar18 + 0x9b)) ||
            (lVar20 = *(int64_t *)(*(int64_t *)(lVar5 + 0x2a8) + 0x18), lVar20 == 0)) ||
           (((uVar22 & 2) == 0 && (lVar20 != *(int64_t *)(*(int64_t *)(lVar18 + 0x2a8) + 0x18)))))
          || ((*(int *)(lVar6 + 0x138) != *(int *)(lVar7 + 0x138) ||
              (*(char *)(lVar5 + 0x322) != *(char *)(lVar18 + 0x322))))) ||
         ((*(int *)(lVar5 + 0x224) != *(int *)(lVar18 + 0x224) ||
          (*(char *)(lVar6 + 0x13c) != *(char *)(lVar7 + 0x13c))))) goto LAB_1800e538e;
      *(uint *)(lVar5 + 0x2e0) = uVar22 | 0x100;
      iVar26 = iVar26 + 1;
    }
    else {
LAB_1800e538e:
      while (((int)uVar12 < (int)uVar23 &&
             ((*(uint *)(*(int64_t *)
                          (*(int64_t *)(param_3 + (uint64_t)(uVar12 >> 0xb) * 2 + 2) + 0x10 +
                          (uint64_t)(uVar12 + (uVar12 >> 0xb) * -0x800) * 0x18) + 0x2e0) & 0x800)
              == 0))) {
        uVar12 = uVar12 + 1;
      }
      if (1 < iVar26) {
        *(uint *)(lVar18 + 0x2e0) = *(uint *)(lVar18 + 0x2e0) | 0x80;
        *(int *)(lVar18 + 0x2d0) = iVar26;
      }
      if (uVar12 == uVar23) goto FUN_1800e545a;
      uVar21 = (uint64_t)(uVar12 >> 0xb);
      lVar18 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
      lVar13 = *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + lVar18);
      uVar25 = *(uint64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 8 + lVar18);
      lVar18 = *(int64_t *)(*(int64_t *)(param_3 + uVar21 * 2 + 2) + 0x10 + lVar18);
      iVar26 = 1;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < (int)uVar23);
  if (1 < iVar26) {
    *(uint *)(lVar18 + 0x2e0) = *(uint *)(lVar18 + 0x2e0) | 0x80;
    *(int *)(lVar18 + 0x2d0) = iVar26;
  }
FUN_1800e545a:
  bVar28 = false;
  uVar21 = 0;
  uVar24 = 0x7fffffff;
  if (0 < (int)uVar23) {
    do {
      uVar12 = (uint)uVar21;
      lVar18 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
      lVar13 = *(int64_t *)(*(int64_t *)(param_3 + (uVar21 >> 0xb) * 2 + 2) + 0x10 + lVar18);
      puVar2 = (uint64_t *)(*(int64_t *)(param_3 + (uVar21 >> 0xb) * 2 + 2) + lVar18);
      uVar25 = puVar2[1];
      uVar22 = (uint)uVar24;
      if (bVar28) {
        if ((*(uint *)(lVar13 + 0x2e0) & 0x100) == 0) {
          if ((int)uVar22 < (int)uVar12) {
            uVar19 = uVar24 >> 0xb;
            uVar15 = (uint64_t)(uVar22 & 0x7ff);
            uVar24 = (uint64_t)(uVar22 + 1);
            puVar3 = (uint64_t *)(*(int64_t *)(param_3 + uVar19 * 2 + 2) + uVar15 * 0x18);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar4 = *(uint64_t *)(*(int64_t *)(param_3 + uVar19 * 2 + 2) + 0x10 + uVar15 * 0x18);
            lVar7 = *(int64_t *)(param_3 + uVar19 * 2 + 2);
            puVar3 = (uint64_t *)(lVar7 + uVar15 * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar25;
            *(int64_t *)(lVar7 + 0x10 + uVar15 * 0x18) = lVar13;
            lVar13 = *(int64_t *)(param_3 + (uVar21 >> 0xb) * 2 + 2);
            puVar2 = (uint64_t *)(lVar13 + lVar18);
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            *(uint64_t *)(lVar13 + 0x10 + lVar18) = uVar4;
          }
          else {
            bVar28 = false;
          }
        }
      }
      else {
        uVar11 = uVar12;
        bVar10 = true;
        if ((*(uint *)(lVar13 + 0x2e0) & 0x100) == 0) {
          uVar11 = uVar22;
          bVar10 = bVar28;
        }
        bVar28 = bVar10;
        uVar24 = (uint64_t)uVar11;
      }
      uVar21 = (uint64_t)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < (int)uVar23);
    uVar23 = (uint)uVar24;
    if (uVar23 != 0x7fffffff) {
      if (*param_3 < uVar23) {
        iVar26 = uVar23 - *param_3;
        if (iVar26 != 0) {
          LOCK();
          uVar23 = *param_3;
          *param_3 = *param_3 + iVar26;
          UNLOCK();
          uVar12 = uVar23 >> 0xb;
          uVar19 = (uint64_t)uVar12;
          uVar24 = (uint64_t)(iVar26 + -1 + uVar23 >> 0xb);
          if (uVar19 <= uVar24) {
            pcVar17 = (char *)((int64_t)param_3 + uVar19 + 0x108);
            lVar18 = (uVar24 - uVar19) + 1;
            puVar27 = param_3 + (uint64_t)uVar12 * 2 + 2;
            do {
              iVar26 = (int)uVar19;
              if (*(int64_t *)puVar27 == 0) {
                lVar13 = FUN_18062b420(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar21 >> 8),0x25));
                uVar21 = (uint64_t)iVar26;
                LOCK();
                bVar28 = *(int64_t *)(param_3 + uVar21 * 2 + 2) == 0;
                if (bVar28) {
                  *(int64_t *)(param_3 + uVar21 * 2 + 2) = lVar13;
                }
                UNLOCK();
                if (bVar28) {
                  iVar14 = iVar26 * 0x800;
                  iVar1 = iVar14 + 0x800;
                  for (; iVar14 < iVar1; iVar14 = iVar14 + 1) {
                  }
                  LOCK();
                  *(int8_t *)(uVar21 + 0x108 + (int64_t)param_3) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  do {
                  } while (*pcVar17 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar17 != '\0');
              }
              uVar19 = (uint64_t)(iVar26 + 1);
              puVar27 = puVar27 + 2;
              pcVar17 = pcVar17 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
        }
      }
      else if (uVar23 < *param_3) {
        LOCK();
        *param_3 = uVar23;
        UNLOCK();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part058.c - 10 个函数
// 函数: void DataStructure_fd6af(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void DataStructure_fd6af(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  float param_13,uint64_t param_14,float param_15)
{
  uint64_t *puVar1;
  float *pfVar2;
  uint64_t *puVar3;
  uint uVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint *puVar10;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  int64_t unaff_R13;
  int unaff_R14D;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar15;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM7_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack000000000000006c;
  fVar16 = (float)((uint64_t)param_3 >> 0x20);
  fVar23 = (float)param_3;
  fVar17 = (float)((uint64_t)param_2 >> 0x20);
  fVar19 = (float)param_2;
  fVar18 = unaff_RBP[-0xc];
  fVar14 = unaff_RBP[-0xb];
  fVar15 = unaff_RBP[-10];
  fVar13 = unaff_RBP[-9];
  lVar12 = (int64_t)unaff_RBP + (0x20 - unaff_R13);
  lVar11 = param_4 - unaff_R13;
  unaff_RBP[-0x20] = fVar19;
  unaff_RBP[-0x1f] = fVar17;
  unaff_RBP[-0x1e] = in_XMM1_Dc;
  unaff_RBP[-0x1d] = in_XMM1_Dd;
  unaff_RBP[-0x1c] = fVar23;
  unaff_RBP[-0x1b] = fVar16;
  unaff_RBP[-0x1a] = in_XMM2_Dc;
  unaff_RBP[-0x19] = in_XMM2_Dd;
  unaff_RBP[-0x18] = fVar18;
  unaff_RBP[-0x17] = fVar14;
  unaff_RBP[-0x16] = fVar15;
  unaff_RBP[-0x15] = fVar13;
  fStack000000000000006c = 3.4028235e+38;
  do {
    lVar6 = *(int64_t *)(unaff_RSI + 0x18);
    cVar5 = *(char *)(lVar6 + 0xa0 + unaff_RDI);
    if (cVar5 < '\0') {
      puVar3 = (uint64_t *)(lVar6 + 0x50 + unaff_RDI);
      uVar7 = puVar3[1];
      puVar1 = (uint64_t *)(lVar12 + (int64_t)unaff_RBX);
      *puVar1 = *puVar3;
      puVar1[1] = uVar7;
      fVar19 = unaff_XMM15_Da * fVar23 + unaff_XMM6_Da * fVar19 + unaff_XMM7_Da * fVar18;
      fVar17 = unaff_XMM15_Da * fVar16 + unaff_XMM6_Da * fVar17 + unaff_XMM7_Da * fVar14;
      fVar18 = unaff_XMM15_Da * in_XMM2_Dc + unaff_XMM6_Da * in_XMM1_Dc + unaff_XMM7_Da * fVar15;
      fVar14 = unaff_XMM12_Da + fVar19;
      fVar15 = unaff_XMM13_Da + fVar17;
      unaff_RBP[-4] = fVar19;
      unaff_RBP[-3] = fVar17;
      unaff_RBP[-2] = fVar18;
      unaff_RBP[-1] =
           unaff_XMM15_Da * in_XMM2_Dd + unaff_XMM6_Da * in_XMM1_Dd + unaff_XMM7_Da * fVar13;
      fVar18 = unaff_XMM14_Da + fVar18;
      param_11._4_4_ = 0x7f7fffff;
      param_10._0_4_ = fVar14;
      param_10._4_4_ = fVar15;
      param_11._0_4_ = fVar18;
    }
    else {
      pfVar2 = (float *)(lVar6 + 0x50 + unaff_RDI);
      fVar18 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar13 = pfVar2[3];
      lVar9 = (int64_t)cVar5;
      puVar10 = (uint *)(lVar9 * 0x100 + lVar6);
      pfVar2 = unaff_RBP + lVar9 * 4 + 8;
      fVar19 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar2 = (float *)(lVar12 + (int64_t)unaff_RBX);
      *pfVar2 = fVar16 * fVar13 * -1.0 + fVar23 * fVar15 * -1.0 +
                (fVar18 * fVar19 - fVar17 * fVar14);
      pfVar2[1] = fVar23 * fVar13 * 1.0 + fVar19 * fVar14 * 1.0 +
                  (fVar18 * fVar17 - fVar16 * fVar15);
      pfVar2[2] = fVar16 * fVar14 * 1.0 + fVar19 * fVar15 * 1.0 +
                  (fVar18 * fVar23 - fVar17 * fVar13);
      pfVar2[3] = fVar17 * fVar15 * 1.0 + fVar19 * fVar13 * 1.0 +
                  (fVar18 * fVar16 - fVar23 * fVar14);
      fVar18 = *(float *)(param_4 + 4 + lVar9 * 0x10);
      fVar14 = *(float *)(param_4 + 8 + lVar9 * 0x10);
      fVar15 = *(float *)(param_4 + lVar9 * 0x10);
      fVar13 = fVar18 * *(float *)(lVar6 + 0x48 + unaff_RDI) -
               fVar14 * *(float *)(lVar6 + 0x44 + unaff_RDI);
      fVar19 = fVar15 * *(float *)(lVar6 + 0x44 + unaff_RDI) -
               fVar18 * *(float *)(lVar6 + 0x40 + unaff_RDI);
      fVar18 = fVar14 * *(float *)(lVar6 + 0x40 + unaff_RDI) -
               fVar15 * *(float *)(lVar6 + 0x48 + unaff_RDI);
      do {
        LOCK();
        uVar4 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      fVar14 = (float)puVar10[1];
      fVar15 = (float)puVar10[2];
      fVar17 = (float)puVar10[3];
      fVar23 = (float)puVar10[4];
      uVar7 = *(uint64_t *)(puVar10 + 5);
      uVar8 = *(uint64_t *)(puVar10 + 7);
      *unaff_RBP = fVar14;
      unaff_RBP[1] = fVar15;
      unaff_RBP[2] = fVar17;
      unaff_RBP[3] = fVar23;
      *(uint64_t *)(unaff_RBP + 4) = uVar7;
      *(uint64_t *)(unaff_RBP + 6) = uVar8;
      *puVar10 = 0;
      fVar21 = fVar17 * fVar19 - fVar23 * fVar18;
      fVar22 = fVar23 * fVar13 - fVar15 * fVar19;
      fVar21 = fVar21 + fVar21;
      fVar20 = fVar15 * fVar18 - fVar17 * fVar13;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar20 + fVar20;
      fVar16 = (fVar20 * fVar17 - fVar22 * fVar23) + fVar21 * fVar14 + fVar13;
      fVar13 = fVar22 * fVar14 + fVar18 + (fVar21 * fVar23 - fVar20 * fVar15);
      fVar23 = (fVar22 * fVar15 - fVar21 * fVar17) + fVar20 * fVar14 + fVar19;
      fVar19 = fVar16 * unaff_RBP[-0x1c] + fVar13 * unaff_RBP[-0x20] + fVar23 * unaff_RBP[-0x18];
      fVar17 = fVar16 * unaff_RBP[-0x1b] + fVar13 * unaff_RBP[-0x1f] + fVar23 * unaff_RBP[-0x17];
      fVar18 = fVar16 * unaff_RBP[-0x1a] + fVar13 * unaff_RBP[-0x1e] + fVar23 * unaff_RBP[-0x16];
      fVar14 = fVar19 + *(float *)(unaff_R13 + lVar9 * 0x10);
      fVar15 = fVar17 + *(float *)(unaff_R13 + 4 + lVar9 * 0x10);
      unaff_RBP[-8] = fVar19;
      unaff_RBP[-7] = fVar17;
      unaff_RBP[-6] = fVar18;
      unaff_RBP[-5] =
           fVar16 * unaff_RBP[-0x19] + fVar13 * unaff_RBP[-0x1d] + fVar23 * unaff_RBP[-0x15];
      fVar18 = fVar18 + *(float *)(unaff_R13 + 8 + lVar9 * 0x10);
      param_9._4_4_ = 0x7f7fffff;
      unaff_XMM6_Da = param_5._4_4_;
      unaff_XMM7_Da = (float)param_6;
      param_8._0_4_ = fVar14;
      param_8._4_4_ = fVar15;
      param_9._0_4_ = fVar18;
    }
    *unaff_RBX = fVar14;
    unaff_RBX[1] = fVar15;
    unaff_RBX[2] = fVar18;
    unaff_RBX[3] = 3.4028235e+38;
    UtilitiesSystem_3b720(&param_14,(int64_t)&param_6 + 4,unaff_RBP + (int64_t)unaff_R14D * 4 + 8);
    unaff_R14D = unaff_R14D + 1;
    unaff_RDI = unaff_RDI + 0x100;
    param_13 = param_6._4_4_ * unaff_XMM11_Da;
    param_12._0_4_ = (float)param_14 * param_13;
    param_12._4_4_ = param_14._4_4_ * param_13;
    param_13 = param_15 * param_13;
    fVar19 = unaff_RBP[-0x20];
    fVar17 = unaff_RBP[-0x1f];
    in_XMM1_Dc = unaff_RBP[-0x1e];
    in_XMM1_Dd = unaff_RBP[-0x1d];
    fVar23 = unaff_RBP[-0x1c];
    fVar16 = unaff_RBP[-0x1b];
    in_XMM2_Dc = unaff_RBP[-0x1a];
    in_XMM2_Dd = unaff_RBP[-0x19];
    fVar18 = unaff_RBP[-0x18];
    fVar14 = unaff_RBP[-0x17];
    fVar15 = unaff_RBP[-0x16];
    fVar13 = unaff_RBP[-0x15];
    pfVar2 = (float *)(lVar11 + (int64_t)unaff_RBX);
    *pfVar2 = (float)param_12;
    pfVar2[1] = param_12._4_4_;
    pfVar2[2] = param_13;
    pfVar2[3] = fStack000000000000006c;
    unaff_RBX = unaff_RBX + 4;
    param_4 = param_7;
  } while (unaff_R14D < *(char *)(unaff_RSI + 0x20));
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x108) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void DataStructure_fdab2(void)
void DataStructure_fdab2(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x420) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_fdb10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_fdb10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t unaff_R14;
  if (((*(short *)(param_1 + 0x40) != 0) && (*(int64_t *)(param_1 + 0x10) != 0)) &&
     (lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20), lVar7 != 0)) {
    GenericFunction_1801b6ae0(lVar7,param_1);
  }
  *(uint64_t *)(param_1 + 0x10) = param_2;
  iVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar6 = *(int64_t **)(lVar7 + *(int64_t *)(param_1 + 0x1a8));
      (**(code **)(*plVar6 + 0x1e0))(plVar6,*(uint64_t *)(param_1 + 0x10));
      lVar7 = lVar7 + 8;
      iVar5 = iVar5 + 1;
    } while ((uint64_t)(int64_t)iVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      iVar4 = 0;
      if (*(int64_t *)(lVar7 + 0xb8 + *(int64_t *)(param_1 + 0x18)) -
          *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(param_1 + 0x18)) >> 3 != 0) {
        lVar1 = 0;
        do {
          plVar6 = *(int64_t **)
                    (lVar1 + *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(param_1 + 0x18)));
          (**(code **)(*plVar6 + 0x1e0))(plVar6,*(uint64_t *)(param_1 + 0x10));
          lVar1 = lVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((uint64_t)(int64_t)iVar4 <
                 (uint64_t)
                 (*(int64_t *)(lVar7 + 0xb8 + *(int64_t *)(param_1 + 0x18)) -
                  *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(param_1 + 0x18)) >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar5 < *(char *)(param_1 + 0x20));
  }
  if (((*(short *)(param_1 + 0x40) == 0) || (*(int64_t *)(param_1 + 0x10) == 0)) ||
     (lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20), lVar7 == 0)) {
    return;
  }
  plVar6 = *(int64_t **)(lVar7 + 0x29b8);
  if (plVar6 < *(int64_t **)(lVar7 + 0x29c0)) {
    *(int64_t **)(lVar7 + 0x29b8) = plVar6 + 1;
    *plVar6 = param_1;
    return;
  }
  plVar3 = *(int64_t **)(lVar7 + 0x29b0);
  lVar1 = (int64_t)plVar6 - (int64_t)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (int64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(lVar7 + 0x29c8),param_4,unaff_R14)
  ;
  plVar3 = *(int64_t **)(lVar7 + 0x29b0);
  plVar6 = *(int64_t **)(lVar7 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar6) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(int64_t)plVar6 - (int64_t)plVar3);
  }
  *plVar2 = param_1;
  if (*(int64_t *)(lVar7 + 0x29b0) == 0) {
    *(int64_t **)(lVar7 + 0x29b0) = plVar2;
    *(int64_t **)(lVar7 + 0x29b8) = plVar2 + 1;
    *(int64_t **)(lVar7 + 0x29c0) = plVar2 + lVar1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_fdb1e(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_fdb1e(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t unaff_RBX;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t unaff_R14;
  bool in_ZF;
  if (((!in_ZF) && (*(int64_t *)(param_1 + 0x10) != 0)) &&
     (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20) != 0)) {
    GenericFunction_1801b6ae0();
  }
  *(uint64_t *)(unaff_RBX + 0x10) = param_2;
  iVar5 = 0;
  if (*(int64_t *)(unaff_RBX + 0x1b0) - *(int64_t *)(unaff_RBX + 0x1a8) >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar6 = *(int64_t **)(lVar7 + *(int64_t *)(unaff_RBX + 0x1a8));
      (**(code **)(*plVar6 + 0x1e0))(plVar6,*(uint64_t *)(unaff_RBX + 0x10));
      lVar7 = lVar7 + 8;
      iVar5 = iVar5 + 1;
    } while ((uint64_t)(int64_t)iVar5 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1b0) - *(int64_t *)(unaff_RBX + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(unaff_RBX + 0x20)) {
    lVar7 = 0;
    do {
      iVar4 = 0;
      if (*(int64_t *)(lVar7 + 0xb8 + *(int64_t *)(unaff_RBX + 0x18)) -
          *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)) >> 3 != 0) {
        lVar1 = 0;
        do {
          plVar6 = *(int64_t **)
                    (lVar1 + *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)));
          (**(code **)(*plVar6 + 0x1e0))(plVar6,*(uint64_t *)(unaff_RBX + 0x10));
          lVar1 = lVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((uint64_t)(int64_t)iVar4 <
                 (uint64_t)
                 (*(int64_t *)(lVar7 + 0xb8 + *(int64_t *)(unaff_RBX + 0x18)) -
                  *(int64_t *)(lVar7 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)) >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar5 < *(char *)(unaff_RBX + 0x20));
  }
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(int64_t *)(unaff_RBX + 0x10) == 0)) ||
     (lVar7 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x10) + 0x20), lVar7 == 0)) {
    return;
  }
  plVar6 = *(int64_t **)(lVar7 + 0x29b8);
  if (plVar6 < *(int64_t **)(lVar7 + 0x29c0)) {
    *(int64_t **)(lVar7 + 0x29b8) = plVar6 + 1;
    *plVar6 = unaff_RBX;
    return;
  }
  plVar3 = *(int64_t **)(lVar7 + 0x29b0);
  lVar1 = (int64_t)plVar6 - (int64_t)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (int64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(lVar7 + 0x29c8),param_4,unaff_R14)
  ;
  plVar3 = *(int64_t **)(lVar7 + 0x29b0);
  plVar6 = *(int64_t **)(lVar7 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar6) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(int64_t)plVar6 - (int64_t)plVar3);
  }
  *plVar2 = unaff_RBX;
  if (*(int64_t *)(lVar7 + 0x29b0) == 0) {
    *(int64_t **)(lVar7 + 0x29b0) = plVar2;
    *(int64_t **)(lVar7 + 0x29b8) = plVar2 + 1;
    *(int64_t **)(lVar7 + 0x29c0) = plVar2 + lVar1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_fdbb5(void)
void DataStructure_fdbb5(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t unaff_RBX;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t in_R9;
  int unaff_R14D;
  uint64_t local_var_48;
  lVar6 = 0;
  do {
    iVar4 = 0;
    if (*(int64_t *)(lVar6 + 0xb8 + *(int64_t *)(unaff_RBX + 0x18)) -
        *(int64_t *)(lVar6 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)) >> 3 != 0) {
      lVar1 = 0;
      do {
        plVar5 = *(int64_t **)
                  (lVar1 + *(int64_t *)(lVar6 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)));
        (**(code **)(*plVar5 + 0x1e0))(plVar5,*(uint64_t *)(unaff_RBX + 0x10));
        lVar1 = lVar1 + 8;
        iVar4 = iVar4 + 1;
      } while ((uint64_t)(int64_t)iVar4 <
               (uint64_t)
               (*(int64_t *)(lVar6 + 0xb8 + *(int64_t *)(unaff_RBX + 0x18)) -
                *(int64_t *)(lVar6 + 0xb0 + *(int64_t *)(unaff_RBX + 0x18)) >> 3));
    }
    unaff_R14D = unaff_R14D + 1;
    lVar6 = lVar6 + 0x100;
  } while (unaff_R14D < *(char *)(unaff_RBX + 0x20));
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(int64_t *)(unaff_RBX + 0x10) == 0)) ||
     (lVar6 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x10) + 0x20), lVar6 == 0)) {
    return;
  }
  plVar5 = *(int64_t **)(lVar6 + 0x29b8);
  if (plVar5 < *(int64_t **)(lVar6 + 0x29c0)) {
    *(int64_t **)(lVar6 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar3 = *(int64_t **)(lVar6 + 0x29b0);
  lVar1 = (int64_t)plVar5 - (int64_t)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (int64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(lVar6 + 0x29c8),in_R9,
                         local_var_48);
  plVar3 = *(int64_t **)(lVar6 + 0x29b0);
  plVar5 = *(int64_t **)(lVar6 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar5) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(int64_t)plVar5 - (int64_t)plVar3);
  }
  *plVar2 = unaff_RBX;
  if (*(int64_t *)(lVar6 + 0x29b0) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(int64_t **)(lVar6 + 0x29b0) = plVar2;
  *(int64_t **)(lVar6 + 0x29b8) = plVar2 + 1;
  *(int64_t **)(lVar6 + 0x29c0) = plVar2 + lVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_fdc4f(void)
void DataStructure_fdc4f(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int64_t *plVar5;
  uint64_t in_R9;
  uint64_t local_var_48;
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(int64_t *)(unaff_RBX + 0x10) == 0)) ||
     (lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x10) + 0x20), lVar1 == 0)) {
    return;
  }
  plVar5 = *(int64_t **)(lVar1 + 0x29b8);
  if (plVar5 < *(int64_t **)(lVar1 + 0x29c0)) {
    *(int64_t **)(lVar1 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar4 = *(int64_t **)(lVar1 + 0x29b0);
  lVar2 = (int64_t)plVar5 - (int64_t)plVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar3 = (int64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(lVar1 + 0x29c8),in_R9,
                         local_var_48);
  plVar4 = *(int64_t **)(lVar1 + 0x29b0);
  plVar5 = *(int64_t **)(lVar1 + 0x29b8);
LAB_1801b6a74:
  if (plVar4 != plVar5) {
// WARNING: Subroutine does not return
    memmove(plVar3,plVar4,(int64_t)plVar5 - (int64_t)plVar4);
  }
  *plVar3 = unaff_RBX;
  if (*(int64_t *)(lVar1 + 0x29b0) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(int64_t **)(lVar1 + 0x29b0) = plVar3;
  *(int64_t **)(lVar1 + 0x29b8) = plVar3 + 1;
  *(int64_t **)(lVar1 + 0x29c0) = plVar3 + lVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_fdc65(void)
void DataStructure_fdc65(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int64_t *plVar5;
  if ((*(int64_t *)(unaff_RBX + 0x10) == 0) ||
     (lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x10) + 0x20), lVar1 == 0)) {
    return;
  }
  plVar5 = *(int64_t **)(lVar1 + 0x29b8);
  if (plVar5 < *(int64_t **)(lVar1 + 0x29c0)) {
    *(int64_t **)(lVar1 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar4 = *(int64_t **)(lVar1 + 0x29b0);
  lVar2 = (int64_t)plVar5 - (int64_t)plVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(lVar1 + 0x29c8));
  plVar4 = *(int64_t **)(lVar1 + 0x29b0);
  plVar5 = *(int64_t **)(lVar1 + 0x29b8);
LAB_1801b6a74:
  if (plVar4 != plVar5) {
// WARNING: Subroutine does not return
    memmove(plVar3,plVar4,(int64_t)plVar5 - (int64_t)plVar4);
  }
  *plVar3 = unaff_RBX;
  if (*(int64_t *)(lVar1 + 0x29b0) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(int64_t **)(lVar1 + 0x29b0) = plVar3;
  *(int64_t **)(lVar1 + 0x29b8) = plVar3 + 1;
  *(int64_t **)(lVar1 + 0x29c0) = plVar3 + lVar2;
  return;
}
// 函数: void DataStructure_fdc90(int64_t param_1,uint64_t param_2,int32_t param_3)
void DataStructure_fdc90(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  iVar4 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(int64_t **)(lVar6 + *(int64_t *)(param_1 + 0x1a8));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3);
      lVar6 = lVar6 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar6 = *(int64_t *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      lVar2 = *(int64_t *)(lVar5 + 0xb0 + lVar6);
      iVar3 = 0;
      if (*(int64_t *)(lVar5 + 0xb8 + lVar6) - lVar2 >> 3 != 0) {
        lVar7 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar7 + lVar2) + 0x170))
                    (*(int64_t **)(lVar7 + lVar2),param_2,param_3);
          lVar6 = *(int64_t *)(param_1 + 0x18);
          lVar7 = lVar7 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(int64_t *)(lVar5 + 0xb0 + lVar6);
        } while ((uint64_t)(int64_t)iVar3 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0xb8 + lVar6) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar4 < *(char *)(param_1 + 0x20));
  }
  return;
}
// 函数: void DataStructure_fdd1d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void DataStructure_fdd1d(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int iVar2;
  int64_t unaff_RSI;
  int64_t lVar3;
  int unaff_R14D;
  do {
    lVar1 = *(int64_t *)(unaff_RSI + 0xb0 + param_3);
    iVar2 = 0;
    if (*(int64_t *)(unaff_RSI + 0xb8 + param_3) - lVar1 >> 3 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(**(int64_t **)(lVar3 + lVar1) + 0x170))();
        param_3 = *(int64_t *)(unaff_RBX + 0x18);
        lVar3 = lVar3 + 8;
        iVar2 = iVar2 + 1;
        lVar1 = *(int64_t *)(unaff_RSI + 0xb0 + param_3);
      } while ((uint64_t)(int64_t)iVar2 <
               (uint64_t)(*(int64_t *)(unaff_RSI + 0xb8 + param_3) - lVar1 >> 3));
    }
    unaff_R14D = unaff_R14D + 1;
    unaff_RSI = unaff_RSI + 0x100;
  } while (unaff_R14D < *(char *)(unaff_RBX + 0x20));
  return;
}
// 函数: void DataStructure_fdd96(void)
void DataStructure_fdd96(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
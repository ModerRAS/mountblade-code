#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part243.c - 15 个函数
// 函数: void function_405714(void)
void function_405714(void)
{
  byte bVar1;
  int iVar2;
  int32_t uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RBP;
  int iVar7;
  int64_t *unaff_RDI;
  int iVar8;
  uint64_t *unaff_R15;
  float fVar9;
  uint64_t uVar10;
  float fVar11;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar12;
  iVar7 = 0;
  *(int32_t *)(unaff_RBP + 0x30) = 0;
  function_406120();
  bVar1 = *(byte *)((int64_t)unaff_RDI + 0x13);
  uVar5 = *(int *)(unaff_RBP + 0x30) >> 0x1f & 0xf;
  iVar2 = *(int *)(unaff_RBP + 0x30) + uVar5;
  fVar9 = (float)(ushort)((ushort)(*(uint *)(*unaff_RDI + (int64_t)(iVar2 >> 4) * 2) >>
                                  (((byte)iVar2 & 0xf) - (char)uVar5 & 0x1f)) &
                         (1 << (bVar1 & 0x1f)) - 1U);
  if (fVar9 <= unaff_XMM6_Da) {
    if (((int)fVar9 == 0) && ((int)in_XMM5_Da == *(ushort *)(unaff_RDI + 2) - 1)) {
      function_405fc0();
      fVar12 = unaff_XMM6_Da - *(float *)(unaff_RBP + -0x24);
      fVar9 = (*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x30)) * fVar12 +
              *(float *)(unaff_RBP + -0x30);
      fVar11 = (*(float *)(unaff_RBP + -0x1c) - *(float *)(unaff_RBP + -0x2c)) * fVar12 +
               *(float *)(unaff_RBP + -0x2c);
      fVar12 = (*(float *)(unaff_RBP + -0x18) - *(float *)(unaff_RBP + -0x28)) * fVar12 +
               *(float *)(unaff_RBP + -0x28);
    }
    else {
      iVar2 = *(ushort *)(unaff_RDI + 2) - 1;
      if (0 < (int)(*(ushort *)(unaff_RDI + 2) - 2)) {
        do {
          iVar6 = iVar2 + iVar7 >> 1;
          *(uint *)(unaff_RBP + 0x30) =
               ((uint)bVar1 + (uint)*(byte *)((int64_t)unaff_RDI + 0x12) * 2 +
               (uint)*(byte *)((int64_t)unaff_RDI + 0x12)) * iVar6;
          function_406120();
          iVar8 = *(int *)(unaff_RBP + 0x30);
          bVar4 = (byte)iVar8 & 0xf;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0xf;
            bVar4 = bVar4 - 0x10;
          }
          bVar1 = *(byte *)((int64_t)unaff_RDI + 0x13);
          if ((float)(ushort)((ushort)(*(uint *)(*unaff_RDI + (int64_t)(iVar8 >> 4) * 2) >>
                                      (bVar4 & 0x1f)) & (1 << (bVar1 & 0x1f)) - 1U) <= unaff_XMM6_Da
             ) {
            iVar7 = iVar6;
            iVar6 = iVar2;
          }
          iVar2 = iVar6;
        } while (iVar7 < iVar2 + -1);
      }
      function_405fc0();
      fVar9 = (unaff_XMM6_Da - *(float *)(unaff_RBP + -0x14)) /
              (*(float *)(unaff_RBP + -0x24) - *(float *)(unaff_RBP + -0x14));
      fVar11 = (*(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c)) * fVar9 +
               *(float *)(unaff_RBP + -0x1c);
      fVar12 = (*(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18)) * fVar9 +
               *(float *)(unaff_RBP + -0x18);
      fVar9 = (*(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20)) * fVar9 +
              *(float *)(unaff_RBP + -0x20);
    }
    *(float *)(unaff_RBP + -0x28) = fVar12;
    uVar3 = *(int32_t *)(unaff_RBP + -0x28);
    uVar10 = CONCAT44(fVar11,fVar9);
  }
  else {
    uVar10 = *(uint64_t *)(unaff_RBP + -0x20);
    uVar3 = *(int32_t *)(unaff_RBP + -0x18);
  }
  *unaff_R15 = uVar10;
  *(int32_t *)(unaff_R15 + 1) = uVar3;
  return;
}
// 函数: void function_4057f4(void)
void function_4057f4(void)
{
  int32_t uVar1;
  byte bVar2;
  int iVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t *unaff_RDI;
  int iVar4;
  uint in_R11D;
  int iVar5;
  uint64_t *unaff_R15;
  float unaff_XMM6_Da;
  float fVar6;
  iVar5 = *(ushort *)(unaff_RDI + 2) - 1;
  if (0 < (int)(*(ushort *)(unaff_RDI + 2) - 2)) {
    do {
      iVar3 = iVar5 + unaff_ESI >> 1;
      *(uint *)(unaff_RBP + 0x30) =
           (in_R11D + (uint)*(byte *)((int64_t)unaff_RDI + 0x12) * 2 +
           (uint)*(byte *)((int64_t)unaff_RDI + 0x12)) * iVar3;
      function_406120();
      iVar4 = *(int *)(unaff_RBP + 0x30);
      bVar2 = (byte)iVar4 & 0xf;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
        bVar2 = bVar2 - 0x10;
      }
      in_R11D = (uint)*(byte *)((int64_t)unaff_RDI + 0x13);
      if ((float)(ushort)((ushort)(*(uint *)(*unaff_RDI + (int64_t)(iVar4 >> 4) * 2) >>
                                  (bVar2 & 0x1f)) &
                         (1 << (*(byte *)((int64_t)unaff_RDI + 0x13) & 0x1f)) - 1U) <=
          unaff_XMM6_Da) {
        unaff_ESI = iVar3;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (unaff_ESI < iVar5 + -1);
  }
  function_405fc0();
  fVar6 = (unaff_XMM6_Da - *(float *)(unaff_RBP + -0x14)) /
          (*(float *)(unaff_RBP + -0x24) - *(float *)(unaff_RBP + -0x14));
  *(float *)(unaff_RBP + -0x28) =
       (*(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18)) * fVar6 +
       *(float *)(unaff_RBP + -0x18);
  uVar1 = *(int32_t *)(unaff_RBP + -0x28);
  *unaff_R15 = CONCAT44((*(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c)) * fVar6 +
                        *(float *)(unaff_RBP + -0x1c),
                        (*(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20)) * fVar6 +
                        *(float *)(unaff_RBP + -0x20));
  *(int32_t *)(unaff_R15 + 1) = uVar1;
  return;
}
// 函数: void function_405810(void)
void function_405810(void)
{
  int32_t uVar1;
  byte bVar2;
  int iVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t *unaff_RDI;
  int iVar4;
  uint in_R11D;
  int unaff_R14D;
  uint64_t *unaff_R15;
  float unaff_XMM6_Da;
  float fVar5;
  do {
    iVar3 = unaff_R14D + unaff_ESI >> 1;
    *(uint *)(unaff_RBP + 0x30) =
         (in_R11D + (uint)*(byte *)((int64_t)unaff_RDI + 0x12) * 2 +
         (uint)*(byte *)((int64_t)unaff_RDI + 0x12)) * iVar3;
    function_406120();
    iVar4 = *(int *)(unaff_RBP + 0x30);
    bVar2 = (byte)iVar4 & 0xf;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
      bVar2 = bVar2 - 0x10;
    }
    in_R11D = (uint)*(byte *)((int64_t)unaff_RDI + 0x13);
    if ((float)(ushort)((ushort)(*(uint *)(*unaff_RDI + (int64_t)(iVar4 >> 4) * 2) >>
                                (bVar2 & 0x1f)) &
                       (1 << (*(byte *)((int64_t)unaff_RDI + 0x13) & 0x1f)) - 1U) <= unaff_XMM6_Da)
    {
      unaff_ESI = iVar3;
      iVar3 = unaff_R14D;
    }
    unaff_R14D = iVar3;
  } while (unaff_ESI < unaff_R14D + -1);
  function_405fc0();
  fVar5 = (unaff_XMM6_Da - *(float *)(unaff_RBP + -0x14)) /
          (*(float *)(unaff_RBP + -0x24) - *(float *)(unaff_RBP + -0x14));
  *(float *)(unaff_RBP + -0x28) =
       (*(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18)) * fVar5 +
       *(float *)(unaff_RBP + -0x18);
  uVar1 = *(int32_t *)(unaff_RBP + -0x28);
  *unaff_R15 = CONCAT44((*(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c)) * fVar5 +
                        *(float *)(unaff_RBP + -0x1c),
                        (*(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20)) * fVar5 +
                        *(float *)(unaff_RBP + -0x20));
  *(int32_t *)(unaff_R15 + 1) = uVar1;
  return;
}
// 函数: void function_4058b7(int32_t param_1)
void function_4058b7(int32_t param_1)
{
  int32_t uVar1;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  uint64_t *unaff_R15;
  float unaff_XMM6_Da;
  float fVar2;
  function_405fc0(param_1,unaff_ESI,unaff_RBP + -0x20,unaff_RBP + -0x30);
  fVar2 = (unaff_XMM6_Da - *(float *)(unaff_RBP + -0x14)) /
          (*(float *)(unaff_RBP + -0x24) - *(float *)(unaff_RBP + -0x14));
  *(float *)(unaff_RBP + -0x28) =
       (*(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18)) * fVar2 +
       *(float *)(unaff_RBP + -0x18);
  uVar1 = *(int32_t *)(unaff_RBP + -0x28);
  *unaff_R15 = CONCAT44((*(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c)) * fVar2 +
                        *(float *)(unaff_RBP + -0x1c),
                        (*(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20)) * fVar2 +
                        *(float *)(unaff_RBP + -0x20));
  *(int32_t *)(unaff_R15 + 1) = uVar1;
  return;
}
// 函数: void function_40591d(int32_t param_1,int32_t param_2,int32_t param_3)
void function_40591d(int32_t param_1,int32_t param_2,int32_t param_3)
{
  int32_t uVar1;
  int64_t unaff_RBP;
  uint64_t *unaff_R15;
  *(int32_t *)(unaff_RBP + -0x28) = param_2;
  uVar1 = *(int32_t *)(unaff_RBP + -0x28);
  *unaff_R15 = CONCAT44(param_3,param_1);
  *(int32_t *)(unaff_R15 + 1) = uVar1;
  return;
}
// 函数: void function_405930(uint64_t param_1)
void function_405930(uint64_t param_1)
{
  int32_t in_EAX;
  uint64_t *unaff_R15;
  *unaff_R15 = param_1;
  *(int32_t *)(unaff_R15 + 1) = in_EAX;
  return;
}
uint64_t function_405950(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  lVar4 = function_405c20();
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = *(uint64_t *)(lVar4 + 0x20);
  if ((uVar1 & 0x1f) == 0) {
    uVar5 = (*(int64_t *)(lVar4 + 0x28) - uVar1) - 0x20;
    if ((0x8000000000000000 < uVar5) &&
       (plVar2 = *(int64_t **)(lVar4 + 0x60), plVar2 != (int64_t *)0x0)) {
      uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar6 = *(uint64_t **)(plVar2[3] + uVar5 * 8);
      if ((*puVar6 == 1) || (puVar6[1] == 0)) {
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      else {
        uVar5 = function_05f430(lVar4);
        if ((char)uVar5 == '\0') goto LAB_180405a53;
        plVar2 = *(int64_t **)(lVar4 + 0x60);
        uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
        puVar6 = *(uint64_t **)(plVar2[3] + uVar5 * 8);
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      uVar5 = function_05ff50(*(uint64_t *)(lVar4 + 0x50));
      if (uVar5 != 0) {
        *(uint64_t *)(uVar5 + 0x108) = 0;
        puVar6[1] = uVar5;
        *(uint64_t *)(lVar4 + 0x40) = uVar5;
        goto LAB_180405a6a;
      }
      plVar2 = *(int64_t **)(lVar4 + 0x60);
      uVar5 = plVar2[1] - 1;
      plVar2[1] = *plVar2 - 1U & uVar5;
      puVar6[1] = 0;
    }
LAB_180405a53:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
LAB_180405a6a:
    uVar3 = *param_2;
    *(uint64_t *)(*(int64_t *)(lVar4 + 0x40) + (uint64_t)((uint)uVar1 & 0x1f) * 8) = uVar3;
    *(uint64_t *)(lVar4 + 0x20) = uVar1 + 1;
    uVar5 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
  }
  return uVar5;
}
// 函数: void function_405aa0(uint64_t *param_1)
void function_405aa0(uint64_t *param_1)
{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  *param_1 = &processed_var_6680_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(int64_t *)(lVar6 + 0x28);
          do {
            *(int64_t *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (int64_t *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x130);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_180405b42:
      plVar5 = (int64_t *)param_1[0xc];
      lVar9 = *(int64_t *)
               (*(int64_t *)
                 (plVar5[3] +
                 (plVar5[1] +
                  ((uVar10 & 0xffffffffffffffe0) - **(int64_t **)(plVar5[3] + plVar5[1] * 8) >> 5)
                 & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_180405b42;
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x130);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(int64_t *)(lVar6 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (int64_t *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &processed_var_6696_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_405c20(int64_t *param_1)
{
  int64_t *plVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t *puVar15;
  bool bVar16;
  bool bVar17;
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (uint64_t)(uVar14 >> 0x10 ^ uVar14);
  puVar7 = (uint64_t *)param_1[6];
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (uint64_t *)0x0; puVar3 = (uint64_t *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar14 == uVar5) {
        puVar15 = *(uint64_t **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (uint64_t *)0x0;
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        puVar3 = (uint64_t *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (uint64_t *)0x0) {
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 0x4b) = 0;
            return (uint64_t *)0x0;
          }
          *puVar7 = uVar12;
          puVar7[1] = (uint64_t)(-(int)(puVar7 + 3) & 7) + (int64_t)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint64_t *)((int64_t)puVar11 + puVar7[1] + 8) = 0;
            *(int32_t *)((int64_t)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (uint64_t)puVar3;
          param_1[6] = (int64_t)puVar7;
        }
        *(int32_t *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (uint64_t *)param_1[6];
  }
  puVar11 = (uint64_t *)*param_1;
  while (puVar11 != (uint64_t *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_180405f2b;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  bVar17 = false;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &processed_var_6696_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &processed_var_6680_ptr;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    function_05f430(puVar8);
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    lVar9 = *param_1;
    do {
      puVar11 = (uint64_t *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (int64_t)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
LAB_180405f2b:
  if (puVar11 == (uint64_t *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (uint64_t *)0x0;
  }
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}
// 函数: void function_405fc0(int64_t *param_1,int param_2,int64_t param_3,int64_t param_4)
void function_405fc0(int64_t *param_1,int param_2,int64_t param_3,int64_t param_4)
{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int aiStackX_10 [2];
  bVar1 = *(byte *)((int64_t)param_1 + 0x12);
  aiStackX_10[0] =
       ((uint)bVar1 + (uint)bVar1 * 2 + (uint)*(byte *)((int64_t)param_1 + 0x13)) * param_2;
  function_406120(param_1,*param_1,aiStackX_10,param_3,bVar1);
  bVar1 = *(byte *)((int64_t)param_1 + 0x13);
  uVar3 = aiStackX_10[0] >> 0x1f & 0xf;
  iVar2 = aiStackX_10[0] + uVar3;
  *(float *)(param_3 + 0xc) =
       (float)(ushort)((ushort)(*(uint *)(*param_1 + (int64_t)(iVar2 >> 4) * 2) >>
                               (((byte)iVar2 & 0xf) - (char)uVar3 & 0x1f)) &
                      (1 << (bVar1 & 0x1f)) - 1U);
  aiStackX_10[0] = aiStackX_10[0] + (uint)bVar1;
  function_406120(param_1,*param_1,aiStackX_10,param_4,*(int8_t *)((int64_t)param_1 + 0x12));
  uVar3 = aiStackX_10[0] >> 0x1f & 0xf;
  aiStackX_10[0] = aiStackX_10[0] + uVar3;
  *(float *)(param_4 + 0xc) =
       (float)(ushort)((ushort)(*(uint *)(*param_1 + (int64_t)(aiStackX_10[0] >> 4) * 2) >>
                               (((byte)aiStackX_10[0] & 0xf) - (char)uVar3 & 0x1f)) &
                      (1 << (*(byte *)((int64_t)param_1 + 0x13) & 0x1f)) - 1U);
  return;
}
uint64_t function_4060e0(uint64_t param_1,uint64_t param_2)
{
  function_405aa0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}
// 函数: void function_406120(int64_t param_1,int64_t param_2,int *param_3,float *param_4,int param_5)
void function_406120(int64_t param_1,int64_t param_2,int *param_3,float *param_4,int param_5)
{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar8 = *(float *)(param_1 + 8);
  iVar2 = *param_3;
  uVar5 = (int)(1L << ((byte)param_5 & 0x3f)) - 1;
  iVar3 = iVar2 + param_5;
  uVar4 = iVar2 >> 0x1f & 0x1f;
  iVar2 = iVar2 + uVar4;
  fVar9 = (fVar8 - fVar1) / (float)((1 << ((byte)param_5 & 0x1f)) - 1);
  fVar6 = (float)((uint)(*(uint64_t *)(param_2 + (int64_t)(iVar2 >> 5) * 4) >>
                        (((byte)iVar2 & 0x1f) - (char)uVar4 & 0x3f)) & uVar5) * fVar9 + fVar1;
  fVar7 = fVar1;
  if ((fVar1 <= fVar6) && (fVar7 = fVar6, fVar8 <= fVar6)) {
    fVar7 = fVar8;
  }
  *param_4 = fVar7;
  iVar2 = iVar3 + param_5;
  uVar4 = iVar3 >> 0x1f & 0x1f;
  iVar3 = iVar3 + uVar4;
  fVar6 = (float)((uint)(*(uint64_t *)(param_2 + (int64_t)(iVar3 >> 5) * 4) >>
                        (((byte)iVar3 & 0x1f) - (char)uVar4 & 0x3f)) & uVar5) * fVar9 + fVar1;
  fVar7 = fVar1;
  if ((fVar1 <= fVar6) && (fVar7 = fVar8, fVar6 <= fVar8)) {
    fVar7 = fVar6;
  }
  param_4[1] = fVar7;
  *param_3 = iVar2 + param_5;
  uVar4 = iVar2 >> 0x1f & 0x1f;
  iVar2 = iVar2 + uVar4;
  fVar7 = (float)((uint)(*(uint64_t *)(param_2 + (int64_t)(iVar2 >> 5) * 4) >>
                        (((byte)iVar2 & 0x1f) - (char)uVar4 & 0x3f)) & uVar5) * fVar9 + fVar1;
  if (fVar1 <= fVar7) {
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    param_4[2] = fVar8;
    return;
  }
  param_4[2] = fVar1;
  return;
}
uint64_t * function_406280(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_6696_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}
// 函数: void function_4062c0(int64_t param_1)
void function_4062c0(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  return;
}
// 函数: void function_4063d0(int64_t *param_1,int *param_2)
void function_4063d0(int64_t *param_1,int *param_2)
{
  ushort uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uVar3 = 0;
  lVar6 = param_1[1] - *param_1 >> 0x3f;
  uVar5 = uVar3;
  if ((param_1[1] - *param_1) / 0x4a + lVar6 != lVar6) {
    do {
      lVar6 = *param_1 + uVar3;
      iVar2 = SystemFunction_0001804062f0(lVar6,param_2 + 1);
      *param_2 = *param_2 + iVar2;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x4a;
      param_2[4] = param_2[4] +
                   ((uint)*(ushort *)(lVar6 + 0x36) + (uint)*(ushort *)(lVar6 + 0x36) * 4) * 4;
      param_2[2] = param_2[2] +
                   ((uint)*(ushort *)(lVar6 + 0x24) + (uint)*(ushort *)(lVar6 + 0x24) * 4) * 4;
      uVar1 = *(ushort *)(lVar6 + 0x48);
      param_2[9] = param_2[9] + 0x4a;
      param_2[5] = param_2[5] + ((uint)uVar1 + (uint)uVar1 * 4) * 4;
      uVar5 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)((param_1[1] - *param_1) / 0x4a));
  }
  iVar2 = SystemFunction_000180406360(param_1 + 4,param_2 + 3);
  param_2[6] = param_2[6] + iVar2;
  lVar6 = param_1[7];
  iVar2 = (int)*(char *)(lVar6 + 0x20) * (int)*(char *)(lVar6 + 0x10) * *(int *)(lVar6 + 0xc) + -1;
  iVar2 = (iVar2 + (iVar2 >> 0x1f & 0x1fU) & 0xffffffe0) + 0x20;
  param_2[8] = param_2[8] + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 0x2a;
  param_2[10] = param_2[10] + 0x60;
  return;
}
// 函数: void function_406413(void)
void function_406413(void)
{
  ushort uVar1;
  int iVar2;
  int64_t *unaff_RBX;
  uint64_t uVar3;
  uint unaff_EDI;
  int *in_R10;
  int64_t lVar4;
  int64_t unaff_R14;
  uVar3 = (uint64_t)unaff_EDI;
  do {
    lVar4 = *unaff_RBX + uVar3;
    iVar2 = SystemFunction_0001804062f0(lVar4,in_R10 + 1);
    *in_R10 = *in_R10 + iVar2;
    unaff_EDI = unaff_EDI + 1;
    uVar3 = uVar3 + 0x4a;
    in_R10[4] = in_R10[4] +
                ((uint)*(ushort *)(lVar4 + 0x36) + (uint)*(ushort *)(lVar4 + 0x36) * 4) * 4;
    in_R10[2] = in_R10[2] +
                ((uint)*(ushort *)(lVar4 + 0x24) + (uint)*(ushort *)(lVar4 + 0x24) * 4) * 4;
    uVar1 = *(ushort *)(lVar4 + 0x48);
    in_R10[9] = in_R10[9] + 0x4a;
    in_R10[5] = in_R10[5] + ((uint)uVar1 + (uint)uVar1 * 4) * 4;
    lVar4 = SUB168(SEXT816(unaff_R14) * SEXT816(unaff_RBX[1] - *unaff_RBX),8);
  } while ((uint64_t)(int64_t)(int)unaff_EDI < (uint64_t)((lVar4 >> 4) - (lVar4 >> 0x3f)));
  iVar2 = SystemFunction_000180406360(unaff_RBX + 4,in_R10 + 3);
  in_R10[6] = in_R10[6] + iVar2;
  lVar4 = unaff_RBX[7];
  iVar2 = (int)*(char *)(lVar4 + 0x20) * (int)*(char *)(lVar4 + 0x10) * *(int *)(lVar4 + 0xc) + -1;
  iVar2 = (iVar2 + (iVar2 >> 0x1f & 0x1fU) & 0xffffffe0) + 0x20;
  in_R10[8] = in_R10[8] + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 0x2a;
  in_R10[10] = in_R10[10] + 0x60;
  return;
}
// 函数: void function_40649a(void)
void function_40649a(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBX;
  int64_t in_R10;
  iVar2 = SystemFunction_000180406360(unaff_RBX + 0x20,in_R10 + 0xc);
  *(int *)(in_R10 + 0x18) = *(int *)(in_R10 + 0x18) + iVar2;
  lVar1 = *(int64_t *)(unaff_RBX + 0x38);
  iVar2 = (int)*(char *)(lVar1 + 0x20) * (int)*(char *)(lVar1 + 0x10) * *(int *)(lVar1 + 0xc) + -1;
  iVar2 = (iVar2 + (iVar2 >> 0x1f & 0x1fU) & 0xffffffe0) + 0x20;
  *(int *)(in_R10 + 0x20) =
       *(int *)(in_R10 + 0x20) + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 0x2a;
  *(int *)(in_R10 + 0x28) = *(int *)(in_R10 + 0x28) + 0x60;
  return;
}
// 函数: void function_406500(int64_t param_1)
void function_406500(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  *(uint64_t *)(param_1 + 0x40) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x40) = &system_state_ptr;
  if (*(int64_t *)(param_1 + 0x28) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  plVar1 = *(int64_t **)(param_1 + 0x10);
  plVar2 = *(int64_t **)(param_1 + 8);
  while( true ) {
    if (plVar2 == plVar1) {
      if (*(int64_t *)(param_1 + 8) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    if (*(int64_t *)((int64_t)plVar2 + 0x36) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x36) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x3e) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x3e) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x24) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x24) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x2c) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x2c) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x12) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x12) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x1a) != 0) break;
    *(uint64_t *)((int64_t)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar2[1] = 0;
    plVar2 = plVar2 + 9;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_4065a0(int64_t *param_1)
void function_4065a0(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    if (*(int64_t *)((int64_t)plVar2 + 0x36) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x36) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x3e) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x3e) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x24) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x24) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x2c) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x2c) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x12) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x12) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x1a) != 0) break;
    *(uint64_t *)((int64_t)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar2[1] = 0;
    plVar2 = plVar2 + 9;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
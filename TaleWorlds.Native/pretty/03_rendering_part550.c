#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part550.c - 3 个函数
// 函数: void function_56ea50(int64_t param_1,int param_2,int param_3,int32_t param_4,int32_t param_5)
void function_56ea50(int64_t param_1,int param_2,int param_3,int32_t param_4,int32_t param_5)
{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  plVar2 = (int64_t *)(param_1 + 0x4c488);
  param_3 = param_2 * 0x10 + param_3;
  lVar5 = *plVar2;
  iVar1 = param_3 + 1;
  if ((int)((*(int64_t *)(param_1 + 0x4c490) - lVar5) / 0xe0) < iVar1) {
    function_56ef80(plVar2,iVar1);
    lVar5 = *plVar2;
  }
  uVar3 = render_system_ui;
  puVar4 = (int32_t *)((int64_t)param_3 * 0xe0 + lVar5);
  puVar4[0x36] = param_4;
  *puVar4 = param_5;
  *(uint64_t *)(puVar4 + 0x34) = uVar3;
  *(int8_t *)(puVar4 + 0x37) = 1;
  return;
}
int8_t function_56eb00(uint64_t param_1,int32_t *param_2,int64_t param_3)
{
  char cVar1;
  cVar1 = UI_LayoutManager(param_1,*param_2);
  if (cVar1 != '\0') {
    cVar1 = UI_LayoutManager(param_1,param_2[1],param_3);
    if (cVar1 != '\0') {
      cVar1 = UI_LayoutManager(param_1,param_2[2],param_3 + 0x10);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}
int64_t function_56eb80(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  if (param_2 != param_3) {
    lVar1 = *(int64_t *)(param_1 + 8);
    if (param_3 != lVar1) {
// WARNING: Subroutine does not return
      memmove(param_2,param_3,lVar1 - param_3);
    }
    *(uint64_t *)(param_1 + 8) = lVar1 - (param_3 - param_2 & 0xfffffffffffffff8U);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_56ebe0(int64_t *param_1,int64_t param_2,uint64_t param_3,int param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uVar14 = *(int *)(param_2 + 0x5c4) + 9;
  uVar15 = uVar14 & 7;
  lVar8 = *param_1;
  iVar16 = uVar15 + 0x2bb8;
  if (uVar15 == 0) {
    iVar16 = 0x2bc0;
  }
  iVar16 = iVar16 - uVar14;
  if (param_4 + -8 < iVar16) {
    iVar16 = param_4 + -8;
  }
  iVar11 = 0;
  uVar12 = 0;
  uVar14 = (uint)((param_1[1] - lVar8) / 0x5d8);
  if (((0 < (int)uVar14) && (7 < uVar14)) && (1 < render_system_control_ui)) {
    uVar17 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar15 = uVar14 & 0x80000007;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
    }
    uVar9 = uVar12;
    do {
      iVar1 = *(int *)(uVar9 + 0x1750 + lVar8);
      iVar11 = iVar11 + 8;
      iVar2 = *(int *)(uVar9 + 0x1178 + lVar8);
      uVar12 = uVar12 + 8;
      iVar3 = *(int *)(uVar9 + 0xba0 + lVar8);
      iVar4 = *(int *)(uVar9 + 0x5c8 + lVar8);
      iVar5 = *(int *)(uVar9 + 0x2300 + lVar8);
      iVar6 = *(int *)(uVar9 + 0x1d28 + lVar8);
      iVar7 = *(int *)(uVar9 + 0x28d8 + lVar8);
      uVar17 = ((uint)((int)uVar17 < iVar4) * iVar4 | ((int)uVar17 >= iVar4) * uVar17) &
               ~-(uint)(iVar16 < iVar4) | -(uint)(iVar16 < iVar4) & uVar17;
      uVar18 = ((uint)((int)uVar18 < iVar3) * iVar3 | ((int)uVar18 >= iVar3) * uVar18) &
               ~-(uint)(iVar16 < iVar3) | -(uint)(iVar16 < iVar3) & uVar18;
      uVar20 = ((uint)((int)uVar20 < iVar2) * iVar2 | ((int)uVar20 >= iVar2) * uVar20) &
               ~-(uint)(iVar16 < iVar2) | -(uint)(iVar16 < iVar2) & uVar20;
      uVar19 = ((uint)((int)uVar19 < iVar1) * iVar1 | ((int)uVar19 >= iVar1) * uVar19) &
               ~-(uint)(iVar16 < iVar1) | -(uint)(iVar16 < iVar1) & uVar19;
      iVar1 = *(int *)(uVar9 + 0x2eb0 + lVar8);
      uVar21 = ((uint)((int)uVar21 < iVar6) * iVar6 | ((int)uVar21 >= iVar6) * uVar21) &
               ~-(uint)(iVar16 < iVar6) | -(uint)(iVar16 < iVar6) & uVar21;
      uVar22 = ((uint)((int)uVar22 < iVar5) * iVar5 | ((int)uVar22 >= iVar5) * uVar22) &
               ~-(uint)(iVar16 < iVar5) | -(uint)(iVar16 < iVar5) & uVar22;
      uVar23 = ((uint)((int)uVar23 < iVar7) * iVar7 | ((int)uVar23 >= iVar7) * uVar23) &
               ~-(uint)(iVar16 < iVar7) | -(uint)(iVar16 < iVar7) & uVar23;
      uVar24 = ((uint)((int)uVar24 < iVar1) * iVar1 | ((int)uVar24 >= iVar1) * uVar24) &
               ~-(uint)(iVar16 < iVar1) | -(uint)(iVar16 < iVar1) & uVar24;
      uVar9 = uVar9 + 0x2ec0;
    } while ((int64_t)uVar12 < (int64_t)(int)(uVar14 - uVar15));
    uVar15 = ((int)uVar17 < (int)uVar21) * uVar21 | ((int)uVar17 >= (int)uVar21) * uVar17;
    uVar17 = ((int)uVar18 < (int)uVar22) * uVar22 | ((int)uVar18 >= (int)uVar22) * uVar18;
    uVar18 = ((int)uVar20 < (int)uVar23) * uVar23 | ((int)uVar20 >= (int)uVar23) * uVar20;
    uVar20 = ((int)uVar19 < (int)uVar24) * uVar24 | ((int)uVar19 >= (int)uVar24) * uVar19;
    uVar15 = ((int)uVar15 < (int)uVar18) * uVar18 | ((int)uVar15 >= (int)uVar18) * uVar15;
    uVar17 = ((int)uVar17 < (int)uVar20) * uVar20 | ((int)uVar17 >= (int)uVar20) * uVar17;
    uVar12 = (uint64_t)
             (((int)uVar15 < (int)uVar17) * uVar17 | ((int)uVar15 >= (int)uVar17) * uVar15);
  }
  lVar10 = (int64_t)iVar11;
  if (lVar10 < (int)uVar14) {
    lVar13 = lVar10 * 0x5d8;
    lVar10 = (int)uVar14 - lVar10;
    do {
      uVar14 = *(uint *)(lVar13 + 0x5c8 + lVar8);
      if (((int)uVar14 <= iVar16) && ((int)uVar12 < (int)uVar14)) {
        uVar12 = (uint64_t)uVar14;
      }
      lVar13 = lVar13 + 0x5d8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return uVar12;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_56ebf3(int64_t *param_1,uint64_t param_2,uint param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int64_t lVar9;
  int in_EAX;
  uint64_t uVar10;
  int64_t lVar11;
  int iVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  lVar9 = *param_1;
  iVar12 = (param_3 & 7) + 0x2bb8;
  if ((param_3 & 7) == 0) {
    iVar12 = 0x2bc0;
  }
  iVar16 = iVar12 - param_3;
  if (in_EAX < (int)(iVar12 - param_3)) {
    iVar16 = in_EAX;
  }
  iVar12 = 0;
  uVar13 = 0;
  uVar8 = (uint)((param_1[1] - lVar9) / 0x5d8);
  if (((0 < (int)uVar8) && (7 < uVar8)) && (1 < render_system_control_ui)) {
    uVar17 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar14 = uVar8 & 0x80000007;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
    }
    uVar10 = uVar13;
    do {
      iVar1 = *(int *)(uVar10 + 0x1750 + lVar9);
      iVar12 = iVar12 + 8;
      iVar2 = *(int *)(uVar10 + 0x1178 + lVar9);
      uVar13 = uVar13 + 8;
      iVar3 = *(int *)(uVar10 + 0xba0 + lVar9);
      iVar4 = *(int *)(uVar10 + 0x5c8 + lVar9);
      iVar5 = *(int *)(uVar10 + 0x2300 + lVar9);
      iVar6 = *(int *)(uVar10 + 0x1d28 + lVar9);
      iVar7 = *(int *)(uVar10 + 0x28d8 + lVar9);
      uVar17 = ((uint)((int)uVar17 < iVar4) * iVar4 | ((int)uVar17 >= iVar4) * uVar17) &
               ~-(uint)(iVar16 < iVar4) | -(uint)(iVar16 < iVar4) & uVar17;
      uVar18 = ((uint)((int)uVar18 < iVar3) * iVar3 | ((int)uVar18 >= iVar3) * uVar18) &
               ~-(uint)(iVar16 < iVar3) | -(uint)(iVar16 < iVar3) & uVar18;
      uVar20 = ((uint)((int)uVar20 < iVar2) * iVar2 | ((int)uVar20 >= iVar2) * uVar20) &
               ~-(uint)(iVar16 < iVar2) | -(uint)(iVar16 < iVar2) & uVar20;
      uVar19 = ((uint)((int)uVar19 < iVar1) * iVar1 | ((int)uVar19 >= iVar1) * uVar19) &
               ~-(uint)(iVar16 < iVar1) | -(uint)(iVar16 < iVar1) & uVar19;
      iVar1 = *(int *)(uVar10 + 0x2eb0 + lVar9);
      uVar21 = ((uint)((int)uVar21 < iVar6) * iVar6 | ((int)uVar21 >= iVar6) * uVar21) &
               ~-(uint)(iVar16 < iVar6) | -(uint)(iVar16 < iVar6) & uVar21;
      uVar22 = ((uint)((int)uVar22 < iVar5) * iVar5 | ((int)uVar22 >= iVar5) * uVar22) &
               ~-(uint)(iVar16 < iVar5) | -(uint)(iVar16 < iVar5) & uVar22;
      uVar23 = ((uint)((int)uVar23 < iVar7) * iVar7 | ((int)uVar23 >= iVar7) * uVar23) &
               ~-(uint)(iVar16 < iVar7) | -(uint)(iVar16 < iVar7) & uVar23;
      uVar24 = ((uint)((int)uVar24 < iVar1) * iVar1 | ((int)uVar24 >= iVar1) * uVar24) &
               ~-(uint)(iVar16 < iVar1) | -(uint)(iVar16 < iVar1) & uVar24;
      uVar10 = uVar10 + 0x2ec0;
    } while ((int64_t)uVar13 < (int64_t)(int)(uVar8 - uVar14));
    uVar14 = ((int)uVar17 < (int)uVar21) * uVar21 | ((int)uVar17 >= (int)uVar21) * uVar17;
    uVar17 = ((int)uVar18 < (int)uVar22) * uVar22 | ((int)uVar18 >= (int)uVar22) * uVar18;
    uVar18 = ((int)uVar20 < (int)uVar23) * uVar23 | ((int)uVar20 >= (int)uVar23) * uVar20;
    uVar20 = ((int)uVar19 < (int)uVar24) * uVar24 | ((int)uVar19 >= (int)uVar24) * uVar19;
    uVar14 = ((int)uVar14 < (int)uVar18) * uVar18 | ((int)uVar14 >= (int)uVar18) * uVar14;
    uVar17 = ((int)uVar17 < (int)uVar20) * uVar20 | ((int)uVar17 >= (int)uVar20) * uVar17;
    uVar13 = (uint64_t)
             (((int)uVar14 < (int)uVar17) * uVar17 | ((int)uVar14 >= (int)uVar17) * uVar14);
  }
  lVar11 = (int64_t)iVar12;
  if (lVar11 < (int)uVar8) {
    lVar15 = lVar11 * 0x5d8;
    lVar11 = (int)uVar8 - lVar11;
    do {
      uVar8 = *(uint *)(lVar15 + 0x5c8 + lVar9);
      if (((int)uVar8 <= iVar16) && ((int)uVar13 < (int)uVar8)) {
        uVar13 = (uint64_t)uVar8;
      }
      lVar15 = lVar15 + 0x5d8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return uVar13;
}
uint function_56ec76(int64_t param_1,uint param_2,int param_3,int64_t param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int in_R10D;
  int in_R11D;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int unaff_XMM6_Da;
  int unaff_XMM6_Db;
  int unaff_XMM6_Dc;
  int unaff_XMM6_Dd;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  param_2 = param_2 & 0x80000007;
  if ((int)param_2 < 0) {
    param_2 = (param_2 - 1 | 0xfffffff8) + 1;
  }
  lVar8 = param_1;
  do {
    iVar1 = *(int *)(lVar8 + 0x1750 + param_4);
    in_R10D = in_R10D + 8;
    iVar2 = *(int *)(lVar8 + 0x1178 + param_4);
    param_1 = param_1 + 8;
    iVar3 = *(int *)(lVar8 + 0xba0 + param_4);
    iVar4 = *(int *)(lVar8 + 0x5c8 + param_4);
    iVar5 = *(int *)(lVar8 + 0x2300 + param_4);
    iVar6 = *(int *)(lVar8 + 0x1d28 + param_4);
    iVar7 = *(int *)(lVar8 + 0x28d8 + param_4);
    uVar10 = ((uint)((int)uVar10 < iVar4) * iVar4 | ((int)uVar10 >= iVar4) * uVar10) &
             ~-(uint)(unaff_XMM6_Da < iVar4) | -(uint)(unaff_XMM6_Da < iVar4) & uVar10;
    uVar11 = ((uint)((int)uVar11 < iVar3) * iVar3 | ((int)uVar11 >= iVar3) * uVar11) &
             ~-(uint)(unaff_XMM6_Db < iVar3) | -(uint)(unaff_XMM6_Db < iVar3) & uVar11;
    uVar12 = ((uint)((int)uVar12 < iVar2) * iVar2 | ((int)uVar12 >= iVar2) * uVar12) &
             ~-(uint)(unaff_XMM6_Dc < iVar2) | -(uint)(unaff_XMM6_Dc < iVar2) & uVar12;
    uVar13 = ((uint)((int)uVar13 < iVar1) * iVar1 | ((int)uVar13 >= iVar1) * uVar13) &
             ~-(uint)(unaff_XMM6_Dd < iVar1) | -(uint)(unaff_XMM6_Dd < iVar1) & uVar13;
    iVar1 = *(int *)(lVar8 + 0x2eb0 + param_4);
    uVar14 = ((uint)((int)uVar14 < iVar6) * iVar6 | ((int)uVar14 >= iVar6) * uVar14) &
             ~-(uint)(unaff_XMM6_Da < iVar6) | -(uint)(unaff_XMM6_Da < iVar6) & uVar14;
    uVar15 = ((uint)((int)uVar15 < iVar5) * iVar5 | ((int)uVar15 >= iVar5) * uVar15) &
             ~-(uint)(unaff_XMM6_Db < iVar5) | -(uint)(unaff_XMM6_Db < iVar5) & uVar15;
    uVar16 = ((uint)((int)uVar16 < iVar7) * iVar7 | ((int)uVar16 >= iVar7) * uVar16) &
             ~-(uint)(unaff_XMM6_Dc < iVar7) | -(uint)(unaff_XMM6_Dc < iVar7) & uVar16;
    uVar17 = ((uint)((int)uVar17 < iVar1) * iVar1 | ((int)uVar17 >= iVar1) * uVar17) &
             ~-(uint)(unaff_XMM6_Dd < iVar1) | -(uint)(unaff_XMM6_Dd < iVar1) & uVar17;
    lVar8 = lVar8 + 0x2ec0;
  } while (param_1 < (int)(param_3 - param_2));
  uVar10 = ((int)uVar10 < (int)uVar14) * uVar14 | ((int)uVar10 >= (int)uVar14) * uVar10;
  uVar11 = ((int)uVar11 < (int)uVar15) * uVar15 | ((int)uVar11 >= (int)uVar15) * uVar11;
  uVar12 = ((int)uVar12 < (int)uVar16) * uVar16 | ((int)uVar12 >= (int)uVar16) * uVar12;
  uVar13 = ((int)uVar13 < (int)uVar17) * uVar17 | ((int)uVar13 >= (int)uVar17) * uVar13;
  uVar10 = ((int)uVar10 < (int)uVar12) * uVar12 | ((int)uVar10 >= (int)uVar12) * uVar10;
  uVar11 = ((int)uVar11 < (int)uVar13) * uVar13 | ((int)uVar11 >= (int)uVar13) * uVar11;
  uVar10 = ((int)uVar10 < (int)uVar11) * uVar11 | ((int)uVar10 >= (int)uVar11) * uVar10;
  lVar8 = (int64_t)in_R10D;
  if (lVar8 < param_3) {
    lVar9 = lVar8 * 0x5d8;
    lVar8 = param_3 - lVar8;
    do {
      uVar11 = *(uint *)(lVar9 + 0x5c8 + param_4);
      if (((int)uVar11 <= in_R11D) && ((int)uVar10 < (int)uVar11)) {
        uVar10 = uVar11;
      }
      lVar9 = lVar9 + 0x5d8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return uVar10;
}
int function_56ed92(int param_1,uint64_t param_2,int param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int in_R10D;
  int in_R11D;
  lVar2 = (int64_t)in_R10D;
  if (lVar2 < param_3) {
    lVar3 = lVar2 * 0x5d8;
    lVar2 = param_3 - lVar2;
    do {
      iVar1 = *(int *)(lVar3 + 0x5c8 + param_4);
      if ((iVar1 <= in_R11D) && (param_1 < iVar1)) {
        param_1 = iVar1;
      }
      lVar3 = lVar3 + 0x5d8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return param_1;
}
int function_56eda2(int param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int in_R11D;
  lVar2 = in_RAX * 0x5d8;
  param_3 = param_3 - in_RAX;
  do {
    iVar1 = *(int *)(lVar2 + 0x5c8 + param_4);
    if ((iVar1 <= in_R11D) && (param_1 < iVar1)) {
      param_1 = iVar1;
    }
    lVar2 = lVar2 + 0x5d8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_56ef80(int64_t *param_1,int param_2)
void function_56ef80(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  float fVar16;
  lVar9 = param_1[1];
  lVar12 = *param_1;
  uVar15 = (uint64_t)param_2;
  uVar10 = (lVar9 - lVar12) / 0xe0;
  if (uVar10 < uVar15) {
    uVar15 = uVar15 - uVar10;
    if ((uint64_t)((param_1[2] - lVar9) / 0xe0) < uVar15) {
      uVar11 = uVar10 * 2;
      if (uVar10 == 0) {
        uVar11 = 1;
      }
      if (uVar11 < uVar10 + uVar15) {
        uVar11 = uVar10 + uVar15;
      }
      if (uVar11 == 0) {
        puVar8 = (uint64_t *)0x0;
      }
      else {
        puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar11 * 0xe0,(char)param_1[3]);
        lVar12 = *param_1;
        lVar9 = param_1[1];
      }
      lVar9 = (lVar9 - lVar12) / 0xe0;
      puVar14 = puVar8;
      if (0 < lVar9) {
        lVar12 = lVar12 - (int64_t)puVar8;
        puVar13 = puVar8;
        do {
          uVar6 = ((uint64_t *)(lVar12 + (int64_t)puVar13))[1];
          lVar9 = lVar9 + -1;
          *puVar13 = *(uint64_t *)(lVar12 + (int64_t)puVar13);
          puVar13[1] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x18);
          puVar13[2] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x10);
          puVar13[3] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x28);
          puVar13[4] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x20);
          puVar13[5] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x38);
          puVar13[6] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x30);
          puVar13[7] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x48);
          puVar13[8] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x40);
          puVar13[9] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x58);
          puVar13[10] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x50);
          puVar13[0xb] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x68);
          puVar13[0xc] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x60);
          puVar13[0xd] = uVar6;
          puVar14 = puVar13 + 0x1c;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x78);
          puVar13[0xe] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x70);
          puVar13[0xf] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x88);
          puVar13[0x10] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x80);
          puVar13[0x11] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x98);
          puVar13[0x12] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0x90);
          puVar13[0x13] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xa8);
          puVar13[0x14] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xa0);
          puVar13[0x15] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xb8);
          puVar13[0x16] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xb0);
          puVar13[0x17] = uVar6;
          uVar3 = *(int32_t *)((int64_t)puVar13 + lVar12 + 0xc4);
          uVar4 = *(int32_t *)((int64_t)puVar13 + lVar12 + 200);
          uVar5 = *(int32_t *)((int64_t)puVar13 + lVar12 + 0xcc);
          *(int32_t *)(puVar13 + 0x18) = *(int32_t *)((int64_t)puVar13 + lVar12 + 0xc0);
          *(int32_t *)((int64_t)puVar13 + 0xc4) = uVar3;
          *(int32_t *)(puVar13 + 0x19) = uVar4;
          *(int32_t *)((int64_t)puVar13 + 0xcc) = uVar5;
          uVar6 = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xd8);
          puVar13[0x1a] = *(uint64_t *)((int64_t)puVar13 + lVar12 + 0xd0);
          puVar13[0x1b] = uVar6;
          puVar13 = puVar14;
        } while (0 < lVar9);
      }
      SystemFunction_00018056ede0(puVar14,uVar15);
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = (int64_t)puVar8;
      param_1[2] = (int64_t)(puVar8 + uVar11 * 0x1c);
      param_1[1] = (int64_t)(puVar14 + uVar15 * 0x1c);
    }
    else {
      SystemFunction_00018056ede0(lVar9,uVar15);
      param_1[1] = param_1[1] + uVar15 * 0xe0;
    }
  }
  else {
    param_1[1] = uVar15 * 0xe0 + lVar12;
  }
  fVar16 = (float)render_system_data_ui * 1e-05;
  if ((int)uVar10 < param_2) {
    uVar15 = (uint64_t)(int)uVar10;
    lVar9 = 0x180000000;
    lVar12 = uVar15 * 0xe0;
    do {
      lVar2 = *param_1;
      if (uVar15 < (uint64_t)((param_1[1] - lVar2) / 0xe0)) {
        *(uint64_t *)(lVar12 + 0xd0 + lVar2) = render_system_ui;
        *(float *)(lVar12 + 0xd8 + lVar2) = fVar16;
        *(int8_t *)(lVar12 + 0xdc + lVar2) = 0;
        uVar7 = (uint)uVar10 & 0x8000000f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
        }
        if (uVar7 < 0x10) {
          switch((uint64_t)*(uint *)(lVar9 + 0x56f2c0 + (int64_t)(int)uVar7 * 4) + lVar9) {
          case 0x18056f221:
            puVar1 = (int32_t *)(lVar12 + lVar2);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            break;
          case 0x18056f22f:
            *(int32_t *)(lVar12 + lVar2) = 1;
            break;
          default:
            *(int32_t *)(lVar12 + lVar2) = 0;
            break;
          case 0x18056f243:
            SystemFunction_0001805b2c90(lVar2 + 0x10 + lVar12);
            break;
          case 0x18056f251:
            *(uint64_t *)(lVar12 + 0xa0 + lVar2) = 0xffffffffffffffff;
            *(int16_t *)(lVar12 + 200 + lVar2) = 0xff;
            *(uint64_t *)(lVar12 + 0xa8 + lVar2) = 0;
            *(uint64_t *)(lVar12 + 0xb0 + lVar2) = 0;
            *(uint64_t *)(lVar12 + 0xb8 + lVar2) = 0;
            *(uint64_t *)(lVar12 + 0xc0 + lVar2) = 0;
            *(int32_t *)(lVar12 + 0xcc + lVar2) = 0;
            break;
          case 0x18056f294:
            *(int32_t *)(lVar12 + lVar2) = 0xffffffff;
          }
        }
      }
      uVar7 = (uint)uVar10 + 1;
      uVar10 = (uint64_t)uVar7;
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0xe0;
    } while ((int)uVar7 < param_2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_56efab(int32_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_56efab(int32_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t in_RAX;
  uint64_t *puVar8;
  int64_t *in_RCX;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t in_R10;
  uint64_t *puVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int64_t unaff_R12;
  uint64_t unaff_R15;
  float fVar17;
  lVar9 = SUB168(SEXT816(in_RAX) * SEXT816(param_3),8);
  uVar11 = (lVar9 >> 6) - (lVar9 >> 0x3f);
  if (uVar11 < unaff_R15) {
    uVar13 = unaff_R15 - uVar11;
    lVar9 = SUB168(SEXT816(unaff_R12) * SEXT816(in_RCX[2] - in_R10),8);
    if ((uint64_t)((lVar9 >> 6) - (lVar9 >> 0x3f)) < uVar13) {
      uVar12 = uVar11 * 2;
      if (uVar11 == 0) {
        uVar12 = 1;
      }
      if (uVar12 < uVar11 + uVar13) {
        uVar12 = uVar11 + uVar13;
      }
      if (uVar12 == 0) {
        puVar8 = (uint64_t *)0x0;
      }
      else {
        puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 0xe0,(char)in_RCX[3]);
        param_4 = *in_RCX;
        in_R10 = in_RCX[1];
      }
      lVar9 = SUB168(SEXT816(unaff_R12) * SEXT816(in_R10 - param_4),8);
      lVar9 = (lVar9 >> 6) - (lVar9 >> 0x3f);
      puVar15 = puVar8;
      if (0 < lVar9) {
        param_4 = param_4 - (int64_t)puVar8;
        puVar14 = puVar8;
        do {
          uVar6 = ((uint64_t *)(param_4 + (int64_t)puVar14))[1];
          lVar9 = lVar9 + -1;
          *puVar14 = *(uint64_t *)(param_4 + (int64_t)puVar14);
          puVar14[1] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x18);
          puVar14[2] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x10);
          puVar14[3] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x28);
          puVar14[4] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x20);
          puVar14[5] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x38);
          puVar14[6] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x30);
          puVar14[7] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x48);
          puVar14[8] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x40);
          puVar14[9] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x58);
          puVar14[10] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x50);
          puVar14[0xb] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x68);
          puVar14[0xc] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x60);
          puVar14[0xd] = uVar6;
          puVar15 = puVar14 + 0x1c;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x78);
          puVar14[0xe] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x70);
          puVar14[0xf] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x88);
          puVar14[0x10] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x80);
          puVar14[0x11] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x98);
          puVar14[0x12] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0x90);
          puVar14[0x13] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xa8);
          puVar14[0x14] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xa0);
          puVar14[0x15] = uVar6;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xb8);
          puVar14[0x16] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xb0);
          puVar14[0x17] = uVar6;
          uVar3 = *(int32_t *)((int64_t)puVar14 + param_4 + 0xc4);
          uVar4 = *(int32_t *)((int64_t)puVar14 + param_4 + 200);
          uVar5 = *(int32_t *)((int64_t)puVar14 + param_4 + 0xcc);
          *(int32_t *)(puVar14 + 0x18) = *(int32_t *)((int64_t)puVar14 + param_4 + 0xc0);
          *(int32_t *)((int64_t)puVar14 + 0xc4) = uVar3;
          *(int32_t *)(puVar14 + 0x19) = uVar4;
          *(int32_t *)((int64_t)puVar14 + 0xcc) = uVar5;
          uVar6 = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xd8);
          puVar14[0x1a] = *(uint64_t *)((int64_t)puVar14 + param_4 + 0xd0);
          puVar14[0x1b] = uVar6;
          puVar14 = puVar15;
        } while (0 < lVar9);
      }
      SystemFunction_00018056ede0(puVar15,uVar13);
      if (*in_RCX != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *in_RCX = (int64_t)puVar8;
      in_RCX[2] = (int64_t)(puVar8 + uVar12 * 0x1c);
      in_RCX[1] = (int64_t)(puVar15 + uVar13 * 0x1c);
    }
    else {
      SystemFunction_00018056ede0(param_1,uVar13);
      in_RCX[1] = in_RCX[1] + uVar13 * 0xe0;
    }
  }
  else {
    in_RCX[1] = unaff_R15 * 0xe0 + param_4;
  }
  fVar17 = (float)render_system_data_ui * 1e-05;
  if ((int)uVar11 < (int)unaff_R15) {
    uVar13 = (uint64_t)(int)uVar11;
    lVar16 = 0x180000000;
    lVar9 = uVar13 * 0xe0;
    do {
      lVar2 = *in_RCX;
      lVar10 = SUB168(SEXT816(unaff_R12) * SEXT816(in_RCX[1] - lVar2),8);
      if (uVar13 < (uint64_t)((lVar10 >> 6) - (lVar10 >> 0x3f))) {
        *(uint64_t *)(lVar9 + 0xd0 + lVar2) = render_system_ui;
        *(float *)(lVar9 + 0xd8 + lVar2) = fVar17;
        *(int8_t *)(lVar9 + 0xdc + lVar2) = 0;
        uVar7 = (uint)uVar11 & 0x8000000f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
        }
        if (uVar7 < 0x10) {
          switch((uint64_t)*(uint *)(lVar16 + 0x56f2c0 + (int64_t)(int)uVar7 * 4) + lVar16) {
          case 0x18056f221:
            puVar1 = (int32_t *)(lVar9 + lVar2);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            break;
          case 0x18056f22f:
            *(int32_t *)(lVar9 + lVar2) = 1;
            break;
          default:
            *(int32_t *)(lVar9 + lVar2) = 0;
            break;
          case 0x18056f243:
            SystemFunction_0001805b2c90(lVar2 + 0x10 + lVar9);
            break;
          case 0x18056f251:
            *(uint64_t *)(lVar9 + 0xa0 + lVar2) = 0xffffffffffffffff;
            *(int16_t *)(lVar9 + 200 + lVar2) = 0xff;
            *(uint64_t *)(lVar9 + 0xa8 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xb0 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xb8 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xc0 + lVar2) = 0;
            *(int32_t *)(lVar9 + 0xcc + lVar2) = 0;
            break;
          case 0x18056f294:
            *(int32_t *)(lVar9 + lVar2) = 0xffffffff;
          }
        }
      }
      uVar7 = (uint)uVar11 + 1;
      uVar11 = (uint64_t)uVar7;
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0xe0;
    } while ((int)uVar7 < (int)unaff_R15);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
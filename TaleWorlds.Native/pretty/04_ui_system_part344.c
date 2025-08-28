#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part344.c - 2 个函数

// 函数: void FUN_180855810(longlong param_1,uint64_t param_2)
void FUN_180855810(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,
                          *(longlong *)(param_1 + 0x110) + 0x38,0,1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,
                          *(longlong *)(param_1 + 0x110) + 0x48,1,1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,lVar1 + 0x90,0,0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,lVar1 + 0x80,1,0);
    if (iVar2 != 0) {
      return;
    }
  }
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(int32_t *)(param_1 + 0x128) = 0;
  return;
}



uint64_t FUN_1808558e0(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return 0x1c;
  }
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(*(longlong *)(param_3 + 8) + -0x20);
  if (*(longlong *)(param_3 + 8) == 0) {
    plVar4 = plVar5;
  }
  plVar1 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar1 = plVar4 + 4;
  }
  do {
    if (plVar1 == (longlong *)(param_3 + 8)) {
      return 0;
    }
    pbVar2 = (byte *)((longlong)plVar1 + 0x2c);
    if (plVar1 == (longlong *)0x0) {
      pbVar2 = (byte *)0x4c;
    }
    if ((*pbVar2 & 7) == 0) {
      plVar4 = plVar1 + -4;
      if (plVar1 == (longlong *)0x0) {
        plVar4 = plVar5;
      }
      uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,0x3f800000);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if (plVar1 == (longlong *)(param_3 + 8)) {
      return 0;
    }
    plVar4 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar4 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar1 = plVar4 + 4;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808559c0(uint64_t *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int32_t *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  longlong lStack_18;
  
  plVar10 = (longlong *)0x0;
  plVar2 = param_1 + 0x23;
  *param_1 = 0;
  plVar7 = (longlong *)(*plVar2 + -0x18);
  if (*plVar2 == 0) {
    plVar7 = plVar10;
  }
  plVar4 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    plVar4 = plVar7 + 3;
  }
  while( true ) {
    if (plVar4 == plVar2) {
      *(int32_t *)(param_1 + 4) = 0;
      *(int32_t *)(param_1 + 0x27) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 300) = 0;
      *(int8_t *)((longlong)param_1 + 0x13c) = 0;
      param_1[0x28] = 0;
      puVar6 = (int32_t *)FUN_18084da10();
      *(int32_t *)(param_1 + 0x29) = *puVar6;
      *(int32_t *)(param_1 + 0x25) = 0;
      FUN_1808556a0(param_1 + 0xe);
      FUN_180855780(param_1 + 0x10);
      iVar5 = FUN_180744cc0(param_1 + 0x12);
      if ((iVar5 == 0) && (iVar5 = FUN_1808554a0(param_1 + 0x14), iVar5 == 0)) {
        *(int32_t *)(param_1 + 0x16) = 0xffffffff;
        *(int32_t *)((longlong)param_1 + 0xb4) = 0;
      }
      uStack_28 = 0;
      puVar6 = (int32_t *)FUN_18084da10();
      uStack_20 = *puVar6;
      uStack_1c = 0;
      lStack_18 = 0;
      FUN_1808c6d60(param_1 + 5,&uStack_28);
      if (lStack_18 != 0) {
        piVar1 = (int *)(lStack_18 + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_18,&unknown_var_2208_ptr,0x76,1);
        }
      }
      return 0;
    }
    plVar7 = plVar4 + -3;
    if (plVar4 == (longlong *)0x0) {
      plVar7 = plVar10;
    }
    if (plVar4 == plVar2) break;
    lVar3 = *plVar4;
    plVar8 = (longlong *)(lVar3 + -0x18);
    if (lVar3 == 0) {
      plVar8 = plVar10;
    }
    plVar9 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8 + 3;
    }
    *(longlong *)plVar4[1] = lVar3;
    *(longlong *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (longlong)plVar4;
    *plVar4 = (longlong)plVar4;
    func_0x0001808bef20(param_1[0x2d],plVar7);
    plVar4 = plVar9;
  }
  return 0x1c;
}



uint64_t FUN_180855b80(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = FUN_18084d3f0(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (longlong)
                (int)((*(uint *)(uVar6 + 0xc + lVar3) ^ *(uint *)(uVar6 + 8 + lVar3) ^
                       *(uint *)(uVar6 + 4 + lVar3) ^ *(uint *)(uVar6 + lVar3)) &
                     (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (longlong)iVar9 * 3 + 2;
          piVar1 = (int *)(lVar3 + lVar7 * 8);
          iVar9 = *(int *)(lVar3 + lVar7 * 8);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 0x10 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0x18;
      } while ((longlong)uVar11 < (longlong)(int)lVar4);
    }
  }
  return 0;
}



uint64_t FUN_180855ba6(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  uint64_t uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = FUN_18084d3f0(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (longlong)
                (int)((*(uint *)(uVar5 + 0xc + lVar2) ^ *(uint *)(uVar5 + 8 + lVar2) ^
                       *(uint *)(uVar5 + 4 + lVar2) ^ *(uint *)(uVar5 + lVar2)) &
                     (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (longlong)iVar8 * 3 + 2;
          piVar1 = (int *)(lVar2 + lVar6 * 8);
          iVar8 = *(int *)(lVar2 + lVar6 * 8);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 0x10 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x18;
      } while ((longlong)uVar10 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



uint64_t FUN_180855cc9(void)

{
  return 0x1c;
}



uint64_t FUN_180855ce0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = FUN_1808595a0(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (longlong)
                (int)((*(uint *)(uVar6 + 0xc + lVar3) ^ *(uint *)(uVar6 + 8 + lVar3) ^
                       *(uint *)(uVar6 + 4 + lVar3) ^ *(uint *)(uVar6 + lVar3)) &
                     (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (longlong)iVar9 * 3 + 2;
          piVar1 = (int *)(lVar3 + lVar7 * 8);
          iVar9 = *(int *)(lVar3 + lVar7 * 8);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 0x10 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0x18;
      } while ((longlong)uVar11 < (longlong)(int)lVar4);
    }
  }
  return 0;
}



uint64_t FUN_180855d06(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  uint64_t uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = FUN_1808595a0(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (longlong)
                (int)((*(uint *)(uVar5 + 0xc + lVar2) ^ *(uint *)(uVar5 + 8 + lVar2) ^
                       *(uint *)(uVar5 + 4 + lVar2) ^ *(uint *)(uVar5 + lVar2)) &
                     (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (longlong)iVar8 * 3 + 2;
          piVar1 = (int *)(lVar2 + lVar6 * 8);
          iVar8 = *(int *)(lVar2 + lVar6 * 8);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 0x10 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x18;
      } while ((longlong)uVar10 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



uint64_t FUN_180855e29(void)

{
  return 0x1c;
}



uint64_t FUN_180855e40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((1 < *(int *)(param_2 + 0xc) - 4U) ||
     (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 == (longlong *)0x0)) {
    return 0x1c;
  }
  if (*plVar2 != 0) {
    plVar8 = (longlong *)0x0;
    plVar1 = (longlong *)(param_1 + 0x118);
    plVar7 = (longlong *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar7 = plVar8;
    }
    plVar4 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      plVar4 = plVar7 + 3;
    }
    while (plVar4 != plVar1) {
      lVar3 = *plVar2;
      plVar7 = plVar4 + -3;
      if (plVar4 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      uVar5 = FUN_1808c6cd0(plVar7,*(int32_t *)(param_2 + 8));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if ((ulonglong)*(uint *)((longlong)plVar2 + 0xc) + (ulonglong)*(uint *)(lVar3 + 0xa8) <
          0x100000000) {
        iVar6 = *(uint *)((longlong)plVar2 + 0xc) + *(uint *)(lVar3 + 0xa8);
      }
      else {
        iVar6 = -1;
      }
      uVar5 = FUN_1808c6c20(plVar7,iVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (plVar4 == plVar1) {
        return 0;
      }
      plVar7 = (longlong *)(*plVar4 + -0x18);
      if (*plVar4 == 0) {
        plVar7 = plVar8;
      }
      plVar4 = plVar8;
      if (plVar7 != (longlong *)0x0) {
        plVar4 = plVar7 + 3;
      }
    }
  }
  return 0;
}



uint64_t FUN_180855e6b(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_R14;
  longlong unaff_R15;
  bool in_ZF;
  
  if (!in_ZF) {
    plVar7 = (longlong *)0x0;
    plVar1 = (longlong *)(param_1 + 0x118);
    plVar6 = (longlong *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar6 = plVar7;
    }
    plVar3 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      plVar3 = plVar6 + 3;
    }
    while (plVar3 != plVar1) {
      lVar2 = *unaff_R14;
      plVar6 = plVar3 + -3;
      if (plVar3 == (longlong *)0x0) {
        plVar6 = plVar7;
      }
      uVar4 = FUN_1808c6cd0(plVar6,*(int32_t *)(unaff_R15 + 8));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if ((ulonglong)*(uint *)((longlong)unaff_R14 + 0xc) + (ulonglong)*(uint *)(lVar2 + 0xa8) <
          0x100000000) {
        iVar5 = *(uint *)((longlong)unaff_R14 + 0xc) + *(uint *)(lVar2 + 0xa8);
      }
      else {
        iVar5 = -1;
      }
      uVar4 = FUN_1808c6c20(plVar6,iVar5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar3 == plVar1) {
        return 0;
      }
      plVar6 = (longlong *)(*plVar3 + -0x18);
      if (*plVar3 == 0) {
        plVar6 = plVar7;
      }
      plVar3 = plVar7;
      if (plVar6 != (longlong *)0x0) {
        plVar3 = plVar6 + 3;
      }
    }
  }
  return 0;
}



uint64_t FUN_180855f53(void)

{
  return 0x1c;
}



bool FUN_180855f70(longlong param_1,longlong param_2,int param_3)

{
  float fVar1;
  
  if ((param_3 != 1) && (*(float *)(param_2 + 0x58) != 100.0)) {
    fVar1 = (float)func_0x0001808c1740(*(uint64_t *)(param_1 + 0x168),0);
    return fVar1 < *(float *)(param_2 + 0x58);
  }
  return true;
}



uint64_t * FUN_180855fc0(longlong *param_1,uint64_t *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)((longlong)param_1 + 0x24) == 0) || ((int)param_1[1] == 0)) {
    *param_2 = param_1;
    param_2[1] = 0xffffffffffffffff;
    *(int32_t *)(param_2 + 2) = 0xffffffff;
    return param_2;
  }
  uVar4 = (param_3[3] ^ param_3[2] ^ param_3[1] ^ *param_3) & (int)param_1[1] - 1U;
  iVar5 = -1;
  iVar2 = *(int *)(*param_1 + (longlong)(int)uVar4 * 4);
  if (iVar2 != -1) {
    lVar1 = param_1[2];
    iVar6 = iVar5;
    do {
      iVar5 = iVar2;
      lVar3 = (longlong)iVar5;
      if ((*(longlong *)(lVar1 + lVar3 * 0x18) == *(longlong *)param_3) &&
         (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) == *(longlong *)(param_3 + 2))) {
        iVar2 = 0;
        goto LAB_18085604d;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      iVar6 = iVar5;
    } while (iVar2 != -1);
  }
  iVar2 = 0x4a;
  iVar6 = iVar5;
  iVar5 = -1;
LAB_18085604d:
  *param_2 = param_1;
  if (iVar2 == 0) {
    *(uint *)(param_2 + 1) = uVar4;
    *(int *)(param_2 + 2) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar6;
    return param_2;
  }
  param_2[1] = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 2) = 0xffffffff;
  return param_2;
}



uint64_t * FUN_180855fdf(uint64_t param_1,uint64_t *param_2,uint *param_3,longlong *param_4)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R10;
  int iVar6;
  
  uVar4 = (param_3[3] ^ param_3[2] ^ param_3[1] ^ *param_3) & in_EAX - 1U;
  iVar5 = -1;
  iVar2 = *(int *)(*in_R10 + (longlong)(int)uVar4 * 4);
  if (iVar2 != -1) {
    lVar1 = in_R10[2];
    iVar6 = iVar5;
    do {
      iVar5 = iVar2;
      lVar3 = (longlong)iVar5;
      if ((*(longlong *)(lVar1 + lVar3 * 0x18) == *param_4) &&
         (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) == param_4[1])) {
        iVar2 = 0;
        goto LAB_18085604d;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      iVar6 = iVar5;
    } while (iVar2 != -1);
  }
  iVar2 = 0x4a;
  iVar6 = iVar5;
  iVar5 = -1;
LAB_18085604d:
  *param_2 = in_R10;
  if (iVar2 == 0) {
    *(uint *)(param_2 + 1) = uVar4;
    *(int *)(param_2 + 2) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar6;
    return param_2;
  }
  param_2[1] = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 2) = 0xffffffff;
  return param_2;
}



uint64_t *
FUN_180855ffc(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  int iVar4;
  longlong *in_R10;
  int iVar5;
  
  iVar4 = -1;
  iVar2 = *(int *)(*in_R10 + (longlong)unaff_EBX * 4);
  if (iVar2 != -1) {
    lVar1 = in_R10[2];
    iVar5 = iVar4;
    do {
      iVar4 = iVar2;
      lVar3 = (longlong)iVar4;
      if ((*(longlong *)(lVar1 + lVar3 * 0x18) == *param_4) &&
         (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) == param_4[1])) {
        iVar2 = 0;
        goto LAB_18085604d;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      iVar5 = iVar4;
    } while (iVar2 != -1);
  }
  iVar2 = 0x4a;
  iVar5 = iVar4;
  iVar4 = -1;
LAB_18085604d:
  *param_2 = in_R10;
  if (iVar2 == 0) {
    *(int *)(param_2 + 1) = unaff_EBX;
    *(int *)(param_2 + 2) = iVar4;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
    return param_2;
  }
  param_2[1] = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 2) = 0xffffffff;
  return param_2;
}





// 函数: void FUN_18085605b(uint64_t param_1,longlong param_2)
void FUN_18085605b(uint64_t param_1,longlong param_2)

{
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  int32_t in_R11D;
  
  *(int32_t *)(param_2 + 8) = unaff_EBX;
  *(int32_t *)(param_2 + 0x10) = unaff_ESI;
  *(int32_t *)(param_2 + 0xc) = in_R11D;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018085607b)

uint64_t * FUN_180856074(uint64_t param_1,uint64_t *param_2,int32_t param_3)

{
  int32_t unaff_EBX;
  uint64_t in_R10;
  int32_t in_R11D;
  
  *param_2 = in_R10;
  *(int32_t *)(param_2 + 1) = unaff_EBX;
  *(int32_t *)(param_2 + 2) = param_3;
  *(int32_t *)((longlong)param_2 + 0xc) = in_R11D;
  return param_2;
}






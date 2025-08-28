#include "TaleWorlds.Native.Split.h"

// 99_part_14_part006.c - 7 个函数

// 函数: void FUN_1808ebc00(uint64_t param_1,uint64_t param_2)
void FUN_1808ebc00(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t auStack_20 [2];
  int32_t auStack_18 [2];
  uint64_t uStack_10;
  
  uStack_10 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iVar1 = FUN_18088ee60(param_2,&uStack_28);
  if (iVar1 == 0) {
    iVar1 = FUN_18088efe0(param_2,&uStack_10);
    if (iVar1 == 0) {
      iVar1 = FUN_18088ee60(param_2,&uStack_24);
      if (iVar1 == 0) {
        auStack_20[0] = uStack_28;
        auStack_18[0] = uStack_24;
        FUN_1808ebd30(param_1,auStack_18,auStack_20);
      }
    }
  }
  return;
}



uint64_t FUN_1808ebc80(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint auStack_18 [2];
  longlong lStack_10;
  
  uVar4 = 0;
  auStack_18[0] = 0;
  uVar2 = FUN_18088ee60(param_2,auStack_18);
  if ((int)uVar2 == 0) {
    uVar5 = 0;
    if (((*(int *)((longlong)param_1 + 0x24) != 0) && (uVar5 = uVar4, (int)param_1[1] != 0)) &&
       (iVar3 = *(int *)(*param_1 + (longlong)(int)((int)param_1[1] - 1U & auStack_18[0]) * 4),
       iVar3 != -1)) {
      do {
        lVar1 = param_1[2] + (longlong)iVar3 * 0xc;
        if (*(uint *)(param_1[2] + (longlong)iVar3 * 0xc) == auStack_18[0]) {
          uVar5 = *(int32_t *)(lVar1 + 8);
          break;
        }
        iVar3 = *(int *)(lVar1 + 4);
      } while (iVar3 != -1);
    }
    uVar2 = FUN_1808eb9c0(param_4,&lStack_10,0x18);
    if ((int)uVar2 == 0) {
      *(int32_t *)(lStack_10 + 0x10) = uVar5;
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808ebd30(longlong *param_1,uint *param_2,int32_t *param_3)

{
  uint uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar6;
  
  uVar5 = FUN_1808ebab0();
  if ((int)uVar5 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    lVar8 = (longlong)(int)((int)param_1[1] - 1U & uVar1);
    piVar11 = (int *)(*param_1 + lVar8 * 4);
    iVar3 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar3 != -1) {
      lVar8 = param_1[2];
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar8 + lVar6 * 0xc) == uVar1) {
          *(int32_t *)(lVar8 + 8 + lVar6 * 0xc) = *param_3;
          return 0;
        }
        iVar3 = *(int *)(lVar8 + 4 + lVar6 * 0xc);
        piVar11 = (int *)(lVar8 + 4 + lVar6 * 0xc);
      } while (iVar3 != -1);
    }
    iVar3 = (int)param_1[4];
    lVar8 = (longlong)iVar3;
    if (iVar3 == -1) {
      iVar3 = (int)param_1[3];
      uVar9 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      uVar2 = *param_3;
      iVar4 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar9) - uVar9;
      iVar7 = iVar3 + 1;
      if (iVar4 < iVar7) {
        iVar10 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar7;
        if (iVar7 <= iVar10) {
          iVar4 = iVar10;
        }
        if (iVar4 < 5) {
          iVar10 = 5;
        }
        else if (iVar10 < iVar7) {
          iVar10 = iVar7;
        }
        uVar5 = FUN_180895f20(param_1 + 2,iVar10);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      lVar6 = param_1[3];
      lVar8 = param_1[2];
      *(ulonglong *)(lVar8 + (longlong)(int)lVar6 * 0xc) = CONCAT44(0xffffffff,uVar1);
      *(int32_t *)(lVar8 + 8 + (longlong)(int)lVar6 * 0xc) = uVar2;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar6 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar6 + 4 + lVar8 * 0xc);
      *(int32_t *)(lVar6 + 4 + lVar8 * 0xc) = 0xffffffff;
      *(uint *)(lVar6 + lVar8 * 0xc) = *param_2;
      *(int32_t *)(lVar6 + 8 + lVar8 * 0xc) = *param_3;
    }
    *piVar11 = iVar3;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_1808ebd63(uint64_t param_1,uint64_t param_2,int param_3)

{
  int32_t uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  int32_t *unaff_R14;
  int32_t *unaff_R15;
  longlong lVar4;
  
  piVar9 = (int *)(*unaff_RDI + (longlong)in_EAX * 4);
  iVar2 = *(int *)(*unaff_RDI + (longlong)in_EAX * 4);
  if (iVar2 != -1) {
    lVar10 = unaff_RDI[2];
    do {
      lVar4 = (longlong)iVar2;
      if (*(int *)(lVar10 + lVar4 * 0xc) == param_3) {
        *(int32_t *)(lVar10 + 8 + lVar4 * 0xc) = *unaff_R14;
        return 0;
      }
      iVar2 = *(int *)(lVar10 + 4 + lVar4 * 0xc);
      piVar9 = (int *)(lVar10 + 4 + lVar4 * 0xc);
    } while (iVar2 != -1);
  }
  iVar2 = (int)unaff_RDI[4];
  lVar10 = (longlong)iVar2;
  if (iVar2 == -1) {
    iVar2 = (int)unaff_RDI[3];
    uVar7 = (int)*(uint *)((longlong)unaff_RDI + 0x1c) >> 0x1f;
    uVar1 = *unaff_R14;
    iVar3 = (*(uint *)((longlong)unaff_RDI + 0x1c) ^ uVar7) - uVar7;
    iVar6 = iVar2 + 1;
    if (iVar3 < iVar6) {
      iVar8 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar6;
      if (iVar6 <= iVar8) {
        iVar3 = iVar8;
      }
      if (iVar3 < 5) {
        iVar8 = 5;
      }
      else if (iVar8 < iVar6) {
        iVar8 = iVar6;
      }
      uVar5 = FUN_180895f20(unaff_RDI + 2,iVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    lVar4 = unaff_RDI[3];
    lVar10 = unaff_RDI[2];
    *(ulonglong *)(lVar10 + (longlong)(int)lVar4 * 0xc) = CONCAT44(0xffffffff,param_3);
    *(int32_t *)(lVar10 + 8 + (longlong)(int)lVar4 * 0xc) = uVar1;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    lVar4 = unaff_RDI[2];
    *(int32_t *)(unaff_RDI + 4) = *(int32_t *)(lVar4 + 4 + lVar10 * 0xc);
    *(int32_t *)(lVar4 + 4 + lVar10 * 0xc) = 0xffffffff;
    *(int32_t *)(lVar4 + lVar10 * 0xc) = *unaff_R15;
    *(int32_t *)(lVar4 + 8 + lVar10 * 0xc) = *unaff_R14;
  }
  *piVar9 = iVar2;
  *(int *)((longlong)unaff_RDI + 0x24) = *(int *)((longlong)unaff_RDI + 0x24) + 1;
  return 0;
}



uint64_t FUN_1808ebd9c(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  int32_t uVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *unaff_RBX;
  int iVar8;
  longlong lVar9;
  longlong unaff_RDI;
  int32_t *unaff_R14;
  int32_t *unaff_R15;
  
  iVar8 = *(int *)(unaff_RDI + 0x20);
  lVar9 = (longlong)iVar8;
  if (iVar8 == -1) {
    iVar8 = *(int *)(unaff_RDI + 0x18);
    uVar6 = (int)*(uint *)(unaff_RDI + 0x1c) >> 0x1f;
    uVar1 = *unaff_R14;
    iVar3 = (*(uint *)(unaff_RDI + 0x1c) ^ uVar6) - uVar6;
    iVar5 = iVar8 + 1;
    if (iVar3 < iVar5) {
      iVar7 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar5;
      if (iVar5 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar3 < 5) {
        iVar7 = 5;
      }
      else if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      uVar4 = FUN_180895f20(unaff_RDI + 0x10,iVar7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    iVar3 = *(int *)(unaff_RDI + 0x18);
    lVar9 = *(longlong *)(unaff_RDI + 0x10);
    *(ulonglong *)(lVar9 + (longlong)iVar3 * 0xc) = CONCAT44(0xffffffff,param_3);
    *(int32_t *)(lVar9 + 8 + (longlong)iVar3 * 0xc) = uVar1;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  }
  else {
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(int32_t *)(unaff_RDI + 0x20) = *(int32_t *)(lVar2 + 4 + lVar9 * 0xc);
    *(int32_t *)(lVar2 + 4 + lVar9 * 0xc) = 0xffffffff;
    *(int32_t *)(lVar2 + lVar9 * 0xc) = *unaff_R15;
    *(int32_t *)(lVar2 + 8 + lVar9 * 0xc) = *unaff_R14;
  }
  *unaff_RBX = iVar8;
  *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
  return 0;
}



uint64_t FUN_1808ebdfc(longlong param_1,longlong param_2)

{
  int32_t *unaff_R14;
  
  *(int32_t *)(param_2 + 8 + param_1 * 4) = *unaff_R14;
  return 0;
}



uint64_t FUN_1808ebe14(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  int32_t unaff_R14D;
  uint64_t uStackX_20;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar3 = FUN_180895f20(unaff_RDI + 0x10,param_2);
  if ((int)uVar3 == 0) {
    iVar1 = *(int *)(unaff_RDI + 0x18);
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(uint64_t *)(lVar2 + (longlong)iVar1 * 0xc) = uStackX_20;
    *(int32_t *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = unaff_R14D;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
    *unaff_RBX = unaff_EBP;
    *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
    uVar3 = 0;
  }
  return uVar3;
}






// 函数: void FUN_1808ebe88(void)
void FUN_1808ebe88(void)

{
  return;
}



uint64_t * FUN_1808ebeb0(uint64_t *param_1)

{
  int32_t *puVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  puVar1 = (int32_t *)FUN_180847820();
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  func_0x0001808b0260(param_1,8,&uStack_18);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &unknown_var_592_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



uint64_t * FUN_1808ebf10(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_592_ptr;
  if (param_1[9] != 0) {
    FUN_18088cae0();
  }
  FUN_18084c220(param_1 + 0xb);
  FUN_18084c220(param_1 + 7);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



longlong FUN_1808ebf80(longlong param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  puVar2 = (uint64_t *)FUN_180847820();
  uVar1 = puVar2[1];
  *(uint64_t *)(param_1 + 0x18) = *puVar2;
  *(uint64_t *)(param_1 + 0x20) = uVar1;
  *(uint64_t *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x30) = 0;
  return param_1;
}



uint64_t * FUN_1808ebfc0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  FUN_1808b0200(param_1,0x15);
  *param_1 = &unknown_var_648_ptr;
  puVar1 = param_1 + 6;
  param_1[7] = 0;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  param_1[8] = 0x42c80000;
  *(int8_t *)(param_1 + 9) = 0;
  *(int32_t *)((longlong)param_1 + 0x4c) = 5;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808ec010(uint64_t *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &unknown_var_648_ptr;
  plVar2 = param_1 + 6;
  plVar1 = (longlong *)*plVar2;
  if (plVar1 == plVar2) {
    if ((longlong *)param_1[7] == plVar2) {
      func_0x00018085dda0(plVar2);
      FUN_1808b02a0(param_1);
      if ((param_2 & 1) != 0) {
        free(param_1,0x50);
      }
      return param_1;
    }
    if (plVar1 == plVar2) {
      plVar2 = (longlong *)plVar1[1];
      plVar3 = (longlong *)*plVar1;
      goto LAB_1808ec074;
    }
  }
  *(longlong *)plVar1[1] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  plVar2 = plVar1;
  plVar3 = plVar1;
LAB_1808ec074:
  *plVar2 = (longlong)plVar3;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)plVar1[1] = plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&unknown_var_688_ptr,0x2d,1);
}



uint64_t * FUN_1808ec110(longlong param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  while( true ) {
    if (puVar1 == (uint64_t *)(param_1 + 0x30)) {
      return (uint64_t *)0x0;
    }
    if (((puVar1[3] == *param_2) && (puVar1[4] == param_2[1])) && (*(int *)(puVar1 + 5) == param_3))
    break;
    if (puVar1 == (uint64_t *)(param_1 + 0x30)) {
      return (uint64_t *)0x0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return puVar1;
}



uint64_t FUN_1808ec200(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return 0x1c;
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar8 = 0;
    plVar2 = *(longlong **)(param_1 + 0x40);
    do {
      if (*(longlong *)(param_2 + 0x30) == *plVar2) {
        return 0x1c;
      }
      lVar8 = lVar8 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar8 < *(int *)(param_1 + 0x48));
  }
  uVar6 = (int)*(uint *)(param_1 + 0x4c) >> 0x1f;
  iVar1 = (*(uint *)(param_1 + 0x4c) ^ uVar6) - uVar6;
  iVar5 = *(int *)(param_1 + 0x48) + 1;
  if (iVar1 < iVar5) {
    iVar7 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar5;
    if (iVar5 <= iVar7) {
      iVar1 = iVar7;
    }
    if (iVar1 < 4) {
      iVar7 = 4;
    }
    else if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    uVar3 = FUN_1807d3f50((longlong *)(param_1 + 0x40),iVar7);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = *(uint64_t *)(param_2 + 0x38);
  puVar4 = (uint64_t *)((longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x40))
  ;
  *puVar4 = *(uint64_t *)(param_2 + 0x30);
  puVar4[1] = uVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return 0;
}



uint64_t FUN_1808ec23d(longlong param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  int iVar5;
  longlong unaff_RDI;
  
  iVar1 = (in_EAX ^ param_2) - param_2;
  iVar4 = *(int *)(param_1 + 0x48) + 1;
  if (iVar1 < iVar4) {
    iVar5 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar4;
    if (iVar4 <= iVar5) {
      iVar1 = iVar5;
    }
    if (iVar1 < 4) {
      iVar5 = 4;
    }
    else if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    uVar2 = FUN_1807d3f50((longlong *)(param_1 + 0x40),iVar5);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = *(uint64_t *)(unaff_RDI + 0x38);
  puVar3 = (uint64_t *)((longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x40))
  ;
  *puVar3 = *(uint64_t *)(unaff_RDI + 0x30);
  puVar3[1] = uVar2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return 0;
}



uint64_t FUN_1808ec2ac(void)

{
  return 0x1c;
}



uint64_t FUN_1808ec2e0(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  void *puVar3;
  
  puVar1 = *(uint64_t **)(param_1 + 0x40);
  if (puVar1 == (uint64_t *)0x0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      puVar3 = &system_buffer_ptr;
    }
    else {
      puVar3 = *(void **)(param_1 + 0x30);
    }
    uVar2 = FUN_18084e110(param_2,puVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = (**(code **)*puVar1)(puVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808ec330(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))();
  if ((plVar2 == (longlong *)0x0) || (*plVar2 != param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar7 = (int)param_1[9];
  iVar4 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    plVar2 = (longlong *)param_1[8];
    do {
      if (*plVar2 == param_2) {
        if ((iVar4 < 0) || (iVar7 <= iVar4)) {
          return 0x1c;
        }
        iVar5 = (iVar7 - iVar4) + -1;
        if (0 < iVar5) {
          plVar2 = (longlong *)param_1[8] + (longlong)iVar4 * 2;
          lVar6 = (longlong)iVar5;
          if (0 < iVar5) {
            do {
              *(int *)plVar2 = (int)plVar2[2];
              *(int32_t *)((longlong)plVar2 + 4) = *(int32_t *)((longlong)plVar2 + 0x14);
              *(int *)(plVar2 + 1) = (int)plVar2[3];
              *(int32_t *)((longlong)plVar2 + 0xc) = *(int32_t *)((longlong)plVar2 + 0x1c);
              lVar6 = lVar6 + -1;
              plVar2 = plVar2 + 2;
            } while (lVar6 != 0);
            iVar7 = (int)param_1[9];
          }
        }
        *(int *)(param_1 + 9) = iVar7 + -1;
        break;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar6 < iVar7);
  }
  if (param_1[6] == param_2) {
    param_1[6] = 0;
  }
  plVar2 = (longlong *)param_1[4];
  if (((plVar2 == (longlong *)0x0) || (!bVar1)) ||
     (uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(int32_t *)(param_2 + 0x220)),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t * FUN_1808ec450(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  *param_1 = &unknown_var_952_ptr;
  param_1[1] = param_2;
  puVar5 = (int32_t *)FUN_180847820();
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(int32_t *)(param_1 + 2) = *puVar5;
  *(int32_t *)((longlong)param_1 + 0x14) = uVar2;
  *(int32_t *)(param_1 + 3) = uVar3;
  *(int32_t *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = param_3;
  *(int32_t *)(param_1 + 5) = 0;
  *(uint64_t **)(param_1[1] + 0x20) = param_1;
  (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],&uStack_18);
  puVar1 = param_1 + 6;
  param_1[2] = uStack_18;
  param_1[3] = uStack_10;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  *param_1 = &unknown_var_1056_ptr;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[10] = 0;
  return param_1;
}



uint64_t * FUN_1808ec4e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  *param_1 = &unknown_var_952_ptr;
  param_1[1] = param_2;
  puVar5 = (int32_t *)FUN_180847820();
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(int32_t *)(param_1 + 2) = *puVar5;
  *(int32_t *)((longlong)param_1 + 0x14) = uVar2;
  *(int32_t *)(param_1 + 3) = uVar3;
  *(int32_t *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = param_3;
  *(int32_t *)(param_1 + 5) = 0;
  *(uint64_t **)(param_1[1] + 0x20) = param_1;
  (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],&uStack_18);
  param_1[2] = uStack_18;
  param_1[3] = uStack_10;
  *param_1 = &unknown_var_1160_ptr;
  puVar1 = param_1 + 6;
  param_1[7] = 0;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  return param_1;
}



uint64_t * FUN_1808ec560(uint64_t *param_1,ulonglong param_2)

{
  int iVar1;
  
  *param_1 = &unknown_var_808_ptr;
  if (param_1[1] != 0) {
    iVar1 = FUN_1808b4f00();
    if (iVar1 == 0) {
      FUN_1808b4c80(param_1[2] + 0x388,param_1[1]);
    }
  }
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1808ec5d0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ec600(uint64_t *param_1,uint param_2)
void FUN_1808ec600(uint64_t *param_1,uint param_2)

{
  longlong lVar1;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  lVar1 = param_1[1];
  *param_1 = &unknown_var_880_ptr;
  uStack_38 = *(int32_t *)(param_1 + 5);
  uStack_28 = *(int32_t *)(lVar1 + 0x10);
  uStack_24 = *(int32_t *)(lVar1 + 0x14);
  uStack_20 = *(int32_t *)(lVar1 + 0x18);
  uStack_1c = *(int32_t *)(lVar1 + 0x1c);
  thunk_FUN_18085fbb0(param_1[2],&uStack_28,lVar1 + 0xd8,param_1[3]);
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_58);
}



uint64_t * FUN_1808ec690(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 6;
  *param_1 = &unknown_var_1056_ptr;
  *(longlong *)param_1[7] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[7];
  param_1[7] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[7] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[7];
  param_1[7] = plVar1;
  *plVar1 = (longlong)plVar1;
  *param_1 = &unknown_var_952_ptr;
  if (param_1[1] != 0) {
    *(uint64_t *)(param_1[1] + 0x20) = 0;
    param_1[1] = 0;
  }
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t * FUN_1808ec720(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_1160_ptr;
  func_0x00018085dda0();
  *param_1 = &unknown_var_952_ptr;
  if (param_1[1] != 0) {
    *(uint64_t *)(param_1[1] + 0x20) = 0;
    param_1[1] = 0;
  }
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}



uint64_t * FUN_1808ec790(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_952_ptr;
  if (param_1[1] != 0) {
    *(uint64_t *)(param_1[1] + 0x20) = 0;
    param_1[1] = 0;
  }
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808ec810(longlong param_1,int32_t param_2,uint64_t *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lStackX_8;
  
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar1 = FUN_1808e0920(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x788),
                        *(uint64_t *)(param_1 + 8),0,param_2,1,&lStackX_8);
  if ((int)uVar1 == 0) {
    plVar2 = (longlong *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&unknown_var_1344_ptr,0x25d,0,
                           uVar1 & 0xff,1);
    if (plVar2 == (longlong *)0x0) {
      return 0x26;
    }
    *plVar2 = (longlong)plVar2;
    plVar2[1] = (longlong)plVar2;
    plVar2[2] = lStackX_8;
    plVar2[3] = 0;
    plVar2[1] = *(longlong *)(param_1 + 0x38);
    *plVar2 = param_1 + 0x30;
    *(longlong **)(param_1 + 0x38) = plVar2;
    *(longlong **)plVar2[1] = plVar2;
    uVar1 = 0;
    *param_3 = plVar2;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ec8e0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),8,&unknown_var_1344_ptr,0x308,0,0,1);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  *puVar1 = &unknown_var_1264_ptr;
  *param_1 = puVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ec950(longlong param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808ec950(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  int iVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int8_t auStack_88 [32];
  int *piStack_68;
  int8_t uStack_60;
  int8_t uStack_58;
  int aiStack_48 [2];
  longlong lStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uStack_38 = *(int32_t *)(param_1 + 0x10);
  uStack_34 = *(int32_t *)(param_1 + 0x14);
  uStack_30 = *(int32_t *)(param_1 + 0x18);
  uStack_2c = *(int32_t *)(param_1 + 0x1c);
  lStack_40 = 0;
  aiStack_48[0] = -1;
  piStack_68 = aiStack_48;
  iVar1 = FUN_18085f630(param_2,&uStack_38,param_1 + 0xd8,&lStack_40);
  if (iVar1 == 0) {
    if (lStack_40 == 0) {
      puVar2 = (uint64_t *)0x0;
    }
    else {
      uStack_58 = 1;
      uStack_60 = 0;
      piStack_68 = (int *)((ulonglong)piStack_68 & 0xffffffff00000000);
      puVar2 = (uint64_t *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&unknown_var_1344_ptr,0x9a);
      if (puVar2 == (uint64_t *)0x0) goto LAB_1808eca3e;
      *puVar2 = &unknown_var_880_ptr;
      puVar2[1] = param_1;
      puVar2[4] = 0;
      lVar3 = puVar2[4];
      if (aiStack_48[0] < 0) {
        lVar3 = lStack_40;
      }
      puVar2[2] = param_2;
      puVar2[4] = lVar3;
      puVar2[3] = lStack_40;
      *(int *)(puVar2 + 5) = aiStack_48[0];
    }
    *param_3 = puVar2;
  }
LAB_1808eca3e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}



uint64_t FUN_1808ecac0(longlong param_1,int32_t *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  if ((*(longlong *)(param_1 + 0x50) == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (lVar3 == 0) {
      *(longlong *)(param_1 + 0x50) = lVar2;
    }
    else {
      uVar4 = FUN_18073e810(lVar2,0,param_1 + 0x50);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if ((iVar1 - 1U < 3) || (iVar1 == 5)) {
      *param_2 = 2;
    }
    else if ((iVar1 == 0) || (iVar1 == 7)) {
      *param_2 = 1;
    }
    else {
      *param_2 = 4;
    }
  }
  else {
    *param_2 = 3;
  }
  return 0;
}



uint64_t FUN_1808ecb70(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  
  if (param_1 == 0) {
    return 0x4c;
  }
  *param_2 = param_1;
  uVar1 = FUN_18073de20(param_1,param_2 + 1,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18073e110(param_1,(longlong)param_2 + 0xc,2);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_18073e270(param_1,param_2 + 2,2,(longlong)param_2 + 0x14,2);
    }
  }
  return uVar1;
}



uint64_t FUN_1808ecbf0(longlong param_1,uint64_t param_2,longlong *param_3)

{
  uint64_t uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0x1c;
  }
  uVar1 = FUN_1808b50d0();
  if ((int)uVar1 == 0) {
    *param_3 = param_1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ecc30(longlong param_1,uint64_t *param_2,longlong *param_3)
void FUN_1808ecc30(longlong param_1,uint64_t *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *param_3 = param_1;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)*param_2 + 0x2b0))((longlong *)*param_2,lVar1 + 0x10,1);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1 + 0x10,auStack_48);
    }
    *(longlong *)(param_1 + 8) = lVar2;
    *param_3 = param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1808ecc60(longlong *param_1)
void FUN_1808ecc60(longlong *param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  int8_t auStackX_20 [8];
  ulonglong in_stack_00000048;
  
  lVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(unaff_RBP + 0x10,auStackX_20);
  }
  *(longlong *)(unaff_RBX + 8) = lVar1;
  *unaff_RDI = unaff_RBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808ecc98(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808ecc98(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t unaff_RBX;
  ulonglong in_stack_00000048;
  
  *param_3 = unaff_RBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





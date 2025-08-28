#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part012_sub001.c - 17 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_12_part012.c - 17 个函数


// 函数: void FUN_1807d1545(void)
void FUN_1807d1545(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



uint64_t * FUN_1807d1560(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}



uint64_t * FUN_1807d1590(uint64_t *param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_180744cc0(param_1 + 0xf);
  if (iVar1 == 0) {
    iVar1 = FUN_180744e20(param_1 + 0x11);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x13) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x9c) = 0;
    }
  }
  FUN_180744e20(param_1 + 0x11);
  FUN_180744cc0(param_1 + 0xf);
  iVar1 = FUN_180744cc0(param_1 + 10);
  if (iVar1 == 0) {
    iVar1 = FUN_180744e20(param_1 + 0xc);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0xe) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x74) = 0;
    }
  }
  FUN_180744e20(param_1 + 0xc);
  FUN_180744cc0(param_1 + 10);
  *param_1 = &unknown_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}



uint64_t FUN_1807d1650(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  if ((*param_3 == -1) ||
     (iVar2 = *(int *)(param_1[2] + 4 + (longlong)*param_3 * 0x10), *param_3 = iVar2, iVar2 == -1))
  {
    iVar2 = 0;
    if (*param_2 != -1) {
      iVar2 = *param_2 + 1;
    }
    if (iVar2 != (int)param_1[1]) {
      lVar1 = (longlong)iVar2;
      piVar3 = (int *)(*param_1 + lVar1 * 4);
      do {
        if (*piVar3 != -1) {
          *param_2 = iVar2;
          *param_3 = *(int *)(*param_1 + (longlong)iVar2 * 4);
          return 0;
        }
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar1 != (int)param_1[1]);
    }
    *param_2 = -1;
    *param_3 = -1;
  }
  return 0;
}







// 函数: void FUN_1807d16e0(longlong param_1,uint64_t param_2)
void FUN_1807d16e0(longlong param_1,uint64_t param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
            (*(longlong **)(param_1 + 0x20),10,0xff,0,param_2);
  return;
}







// 函数: void FUN_1807d1700(longlong param_1)
void FUN_1807d1700(longlong param_1)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar1);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d1740(longlong param_1)
void FUN_1807d1740(longlong param_1)

{
  int *piVar1;
  uint64_t uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  uint64_t uStack_40;
  int aiStack_38 [4];
  
  uVar2 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar2);
  piVar1 = (int *)(param_1 + 0x44);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uStack_40 = 0xffffffffffffffff;
    aiStack_38[0] = -1;
    FUN_1807d1650((longlong *)(param_1 + 0x50),&uStack_40,aiStack_38);
    if (aiStack_38[0] != -1) {
      iVar4 = aiStack_38[0];
      iVar6 = (int)uStack_40;
LAB_1807d17b0:
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)iVar4 * 0x10);
        *(int32_t *)(lVar3 + 0x18) = 1;
        FUN_180768910(*(uint64_t *)(lVar3 + 8));
        if (iVar4 != -1) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 4 + (longlong)iVar4 * 0x10);
          if (iVar4 != -1) goto LAB_1807d17b0;
        }
        iVar4 = iVar6 + 1;
        bVar7 = iVar6 != -1;
        iVar6 = 0;
        if (bVar7) {
          iVar6 = iVar4;
        }
        if (iVar6 != *(int *)(param_1 + 0x58)) {
          lVar3 = *(longlong *)(param_1 + 0x50);
          lVar5 = (longlong)iVar6;
          do {
            if (*(int *)(lVar3 + lVar5 * 4) != -1) {
              iVar4 = *(int *)(lVar3 + (longlong)iVar6 * 4);
              goto LAB_1807d181b;
            }
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != *(int *)(param_1 + 0x58));
        }
        iVar4 = -1;
        iVar6 = iVar4;
LAB_1807d181b:
      } while (iVar4 != -1);
    }
    uStack_40 = 0xffffffffffffffff;
    aiStack_38[0] = -1;
    FUN_1807d1650(param_1 + 0x78,&uStack_40,aiStack_38);
    if (aiStack_38[0] == -1) {
      iVar4 = FUN_180744cc0(param_1 + 0x78);
      if ((iVar4 == 0) && (iVar4 = FUN_180744e20(param_1 + 0x88), iVar4 == 0)) {
        *(int32_t *)(param_1 + 0x98) = 0xffffffff;
        *(int32_t *)(param_1 + 0x9c) = 0;
      }
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)aiStack_38[0] * 0x10);
      if ((*(longlong *)(lVar3 + 0x10) == 0) || (iVar4 = FUN_180768420(), iVar4 == 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_208_ptr,0x6a,1);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d1980(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  uVar5 = 0;
  plVar3 = (longlong *)
           FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb0,&unknown_var_208_ptr,0x7b,0,0,1);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = 0x26;
  }
  else {
    plVar3[3] = 0;
    plVar1 = plVar3 + 1;
    plVar3[2] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar3[4] = 0;
    *plVar3 = (longlong)&unknown_var_96_ptr;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    *(int32_t *)(plVar3 + 0xe) = 0xffffffff;
    *(int32_t *)((longlong)plVar3 + 0x74) = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    *(int32_t *)(plVar3 + 0x13) = 0xffffffff;
    *(int32_t *)((longlong)plVar3 + 0x9c) = 0;
    lVar4 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10020,&unknown_var_208_ptr,0x83,0,0,1)
    ;
    plVar3[5] = lVar4;
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_2144_ptr,0xc6,1);
    }
    plVar3[6] = 0;
    plVar3[8] = 0;
    plVar3[4] = (longlong)param_1;
    *(int32_t *)(plVar3 + 9) = 1;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    iVar2 = FUN_1807682e0(plVar3 + 7,0);
    if ((iVar2 != 0) || (iVar2 = (**(code **)(*param_1 + 8))(param_1,plVar3), iVar2 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&unknown_var_2144_ptr,0xb8,1);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1807d1a59(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  
  lVar2 = FUN_180741e10(*(uint64_t *)(param_1 + 0x1a0));
  unaff_RDI[5] = lVar2;
  if (lVar2 == 0) {
    (**(code **)(*unaff_RDI + 0x60))();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  unaff_RDI[6] = unaff_RBP;
  unaff_RDI[8] = unaff_RBP;
  unaff_RDI[4] = (longlong)unaff_R14;
  *(int32_t *)(unaff_RDI + 9) = 1;
  unaff_RDI[0x14] = unaff_RBP;
  unaff_RDI[0x15] = unaff_RBP;
  iVar1 = FUN_1807682e0(unaff_RDI + 7,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*unaff_R14 + 8))();
    if (iVar1 == 0) {
      return unaff_RBP & 0xffffffff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
}



int32_t FUN_1807d1b27(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



uint64_t FUN_1807d1b32(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d1b50(longlong param_1)
void FUN_1807d1b50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1807688f0(*(uint64_t *)(param_1 + 8));
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_208_ptr,0x40,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d1ba0(longlong param_1)
void FUN_1807d1ba0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_180768420();
    if (iVar1 != 0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_208_ptr,0x6a,1);
}



uint64_t FUN_1807d1bf0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar8 = *(int *)((longlong)param_1 + 0x24);
  if (iVar8 == -1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[1];
  if (iVar8 == iVar1) {
    iVar8 = iVar8 * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= iVar1) || ((int)param_1[3] != iVar1)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar6 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar6) - uVar6) < iVar8) &&
       (uVar3 = FUN_180748010(param_1 + 2,iVar8), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = FUN_1807703c0(param_1,iVar8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar9 = 0;
    uVar4 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*param_1 + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar8);
    }
    lVar2 = param_1[3];
    uVar4 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar2) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar5 = (longlong)(int)(*(uint *)(uVar4 + param_1[2]) & (int)param_1[1] - 1U);
        piVar7 = (int *)(*param_1 + lVar5 * 4);
        iVar8 = *(int *)(*param_1 + lVar5 * 4);
        while (iVar8 != -1) {
          piVar7 = (int *)(param_1[2] + 4 + (longlong)iVar8 * 0x10);
          iVar8 = *piVar7;
        }
        *piVar7 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(param_1[2] + 4 + uVar4) = 0xffffffff;
        uVar4 = uVar4 + 0x10;
      } while ((longlong)uVar10 < (longlong)(int)lVar2);
    }
  }
  return 0;
}



uint64_t FUN_1807d1c16(void)

{
  longlong lVar1;
  int in_EAX;
  uint64_t uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (unaff_EDI == in_EAX) {
    iVar7 = unaff_EDI * 2;
    if (iVar7 < 4) {
      iVar7 = 4;
    }
    if (((iVar7 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar5 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar5) - uVar5) < iVar7) &&
       (uVar2 = FUN_180748010(unaff_RBX + 2,iVar7), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = FUN_1807703c0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar8 = 0;
    uVar3 = uVar8;
    if (0 < iVar7) {
      do {
        *(int32_t *)(*unaff_RBX + uVar3 * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar7);
    }
    lVar1 = unaff_RBX[3];
    uVar3 = uVar8;
    uVar9 = uVar8;
    if (0 < (int)lVar1) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar4 = (longlong)(int)(*(uint *)(uVar3 + unaff_RBX[2]) & (int)unaff_RBX[1] - 1U);
        piVar6 = (int *)(*unaff_RBX + lVar4 * 4);
        iVar7 = *(int *)(*unaff_RBX + lVar4 * 4);
        while (iVar7 != -1) {
          piVar6 = (int *)(unaff_RBX[2] + 4 + (longlong)iVar7 * 0x10);
          iVar7 = *piVar6;
        }
        *piVar6 = (int)uVar8;
        uVar9 = uVar9 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        *(int32_t *)(unaff_RBX[2] + 4 + uVar3) = 0xffffffff;
        uVar3 = uVar3 + 0x10;
      } while ((longlong)uVar9 < (longlong)(int)lVar1);
    }
  }
  return 0;
}



uint64_t FUN_1807d1d25(void)

{
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d1d40(longlong param_1,longlong param_2)
void FUN_1807d1d40(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int8_t auStack_58 [48];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
  }
  uVar2 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
     (iVar3 = *(int *)(*(longlong *)(param_1 + 0x50) +
                      (longlong)(int)(*(int *)(param_1 + 0x58) - 1U & uVar1) * 4), iVar3 != -1)) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    do {
      lVar4 = (longlong)iVar3;
      if (*(uint *)(lVar5 + lVar4 * 0x10) == uVar1) {
        lVar5 = *(longlong *)(lVar5 + 8 + lVar4 * 0x10);
        goto LAB_1807d1dc6;
      }
      iVar3 = *(int *)(lVar5 + 4 + lVar4 * 0x10);
    } while (iVar3 != -1);
  }
  lVar5 = 0;
LAB_1807d1dc6:
  if (lVar5 == param_2) {
    if (*(int *)(param_1 + 0x74) != 0) {
      if (*(int *)(param_1 + 0x58) == 0) goto LAB_1807d1e9b;
      lVar5 = (longlong)(int)(*(int *)(param_1 + 0x58) - 1U & uVar1);
      piVar6 = (int *)(*(longlong *)(param_1 + 0x50) + lVar5 * 4);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x50) + lVar5 * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x60);
        do {
          if (*(uint *)(lVar5 + (longlong)iVar3 * 0x10) == uVar1) {
            iVar3 = *piVar6;
            lVar4 = (longlong)iVar3;
            *(uint64_t *)(lVar5 + 8 + lVar4 * 0x10) = 0;
            *piVar6 = *(int *)(lVar5 + 4 + lVar4 * 0x10);
            *(int32_t *)(lVar5 + 4 + lVar4 * 0x10) = *(int32_t *)(param_1 + 0x70);
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
            *(int *)(param_1 + 0x70) = iVar3;
            break;
          }
          piVar6 = (int *)(lVar5 + 4 + (longlong)iVar3 * 0x10);
          iVar3 = *piVar6;
        } while (iVar3 != -1);
      }
    }
    iVar3 = FUN_1807d1b50(param_2);
    if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar2);
    }
  }
LAB_1807d1e9b:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}







// 函数: void FUN_1807d1d69(longlong param_1)
void FUN_1807d1d69(longlong param_1)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int *piVar6;
  
  uVar2 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360();
  uVar1 = *(uint *)(unaff_RBX + 0x10);
  if (((*(int *)(unaff_RDI + 0x74) != 0) && (*(int *)(unaff_RDI + 0x58) != 0)) &&
     (iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x50) +
                      (longlong)(int)(*(int *)(unaff_RDI + 0x58) - 1U & uVar1) * 4), iVar3 != -1)) {
    lVar5 = *(longlong *)(unaff_RDI + 0x60);
    do {
      lVar4 = (longlong)iVar3;
      if (*(uint *)(lVar5 + lVar4 * 0x10) == uVar1) {
        lVar5 = *(longlong *)(lVar5 + 8 + lVar4 * 0x10);
        goto LAB_1807d1dc6;
      }
      iVar3 = *(int *)(lVar5 + 4 + lVar4 * 0x10);
    } while (iVar3 != -1);
  }
  lVar5 = 0;
LAB_1807d1dc6:
  if (lVar5 == unaff_RBX) {
    if (*(int *)(unaff_RDI + 0x74) != 0) {
      if (*(int *)(unaff_RDI + 0x58) == 0) goto LAB_1807d1e9b;
      lVar5 = (longlong)(int)(*(int *)(unaff_RDI + 0x58) - 1U & uVar1);
      piVar6 = (int *)(*(longlong *)(unaff_RDI + 0x50) + lVar5 * 4);
      iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + lVar5 * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(unaff_RDI + 0x60);
        do {
          if (*(uint *)(lVar5 + (longlong)iVar3 * 0x10) == uVar1) {
            iVar3 = *piVar6;
            lVar4 = (longlong)iVar3;
            *(uint64_t *)(lVar5 + 8 + lVar4 * 0x10) = 0;
            *piVar6 = *(int *)(lVar5 + 4 + lVar4 * 0x10);
            *(int32_t *)(lVar5 + 4 + lVar4 * 0x10) = *(int32_t *)(unaff_RDI + 0x70);
            *(int *)(unaff_RDI + 0x74) = *(int *)(unaff_RDI + 0x74) + -1;
            *(int *)(unaff_RDI + 0x70) = iVar3;
            break;
          }
          piVar6 = (int *)(lVar5 + 4 + (longlong)iVar3 * 0x10);
          iVar3 = *piVar6;
        } while (iVar3 != -1);
      }
    }
    iVar3 = FUN_1807d1b50();
    if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar2);
    }
  }
LAB_1807d1e9b:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}







// 函数: void FUN_1807d1eaf(void)
void FUN_1807d1eaf(void)

{
  ulonglong in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}







// 函数: void FUN_1807d1ed0(longlong param_1,longlong param_2)
void FUN_1807d1ed0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar1);
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) +
                    (longlong)(int)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_2 + 0xc)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      do {
        lVar4 = (longlong)iVar3;
        if (*(uint *)(lVar2 + lVar4 * 0x10) == *(uint *)(param_2 + 0xc)) {
          lVar2 = *(longlong *)(lVar2 + 8 + lVar4 * 0x10);
          if (lVar2 != 0) {
            FUN_180768420(*(uint64_t *)(lVar2 + 0x10));
            *(uint64_t *)(lVar2 + 0x10) = 0;
            if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
              (**(code **)(param_1 + 0xa0))(lVar2 + 0x1c,1,*(uint64_t *)(param_1 + 0xa8));
            }
            if (*(int *)(param_1 + 0x9c) == 0) goto LAB_1807d1fde;
            if (*(int *)(param_1 + 0x80) != 0) {
              lVar4 = (longlong)(int)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_2 + 0xc));
              piVar6 = (int *)(*(longlong *)(param_1 + 0x78) + lVar4 * 4);
              iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + lVar4 * 4);
              if (iVar3 == -1) goto LAB_1807d1fde;
              lVar4 = *(longlong *)(param_1 + 0x88);
              goto LAB_1807d1fc3;
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
      } while (iVar3 != -1);
    }
  }
  goto LAB_1807d1fee;
  while( true ) {
    piVar6 = (int *)(lVar4 + 4 + (longlong)iVar3 * 0x10);
    iVar3 = *piVar6;
    if (iVar3 == -1) break;
LAB_1807d1fc3:
    if (*(uint *)(lVar4 + (longlong)iVar3 * 0x10) == *(uint *)(param_2 + 0xc)) {
      iVar3 = *piVar6;
      lVar5 = (longlong)iVar3;
      *(uint64_t *)(lVar4 + 8 + lVar5 * 0x10) = 0;
      *piVar6 = *(int *)(lVar4 + 4 + lVar5 * 0x10);
      *(int32_t *)(lVar4 + 4 + lVar5 * 0x10) = *(int32_t *)(param_1 + 0x98);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      *(int *)(param_1 + 0x98) = iVar3;
      break;
    }
  }
LAB_1807d1fde:
  FUN_1807d1ba0(lVar2);
LAB_1807d1fee:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d2050(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1807d2050(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int8_t auStack_1d8 [32];
  int32_t uStack_1b8;
  int8_t uStack_1b0;
  int8_t uStack_1a8;
  int aiStack_198 [2];
  longlong *plStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  ulonglong uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  uStack_188 = param_3;
  uStack_180 = param_4;
  iVar2 = func_0x00018076b6b0(param_2,&unknown_var_2056_ptr,0xf);
  if (iVar2 == 0) {
    param_2 = param_2 + 0xf;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar1);
  if (*(int *)(param_1 + 0x44) == 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  uStack_1a8 = 1;
  plVar4 = (longlong *)0x0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  *(int *)(param_1 + 0x48) = iVar2 + 1;
  aiStack_198[0] = iVar2;
  plVar3 = (longlong *)FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x138,&unknown_var_208_ptr);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(int32_t *)(plVar3 + 3) = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(int32_t *)(plVar3 + 6) = 0;
    plVar4 = plVar3;
  }
  plStack_190 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_1;
    *(int *)(plVar4 + 2) = iVar2;
    func_0x00018076b450((longlong)plVar4 + 0x34,param_2,0x100);
    iVar2 = FUN_1807688b0(plVar4 + 1);
    if ((iVar2 == 0) && (iVar2 = FUN_1807d28c0(param_1 + 0x50,aiStack_198,&plStack_190), iVar2 == 0)
       ) {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar1);
    }
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d22d0(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1807d22d0(longlong param_1,longlong param_2,uint64_t param_3)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int8_t uStack_90;
  int8_t uStack_88;
  int32_t auStack_78 [2];
  longlong lStack_70;
  longlong *plStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  uStack_54 = *(int32_t *)(param_2 + 0xc);
  puVar1 = (uint *)(param_2 + 0xc);
  plVar7 = (longlong *)0x0;
  uStack_60 = 0x18;
  uStack_58 = 0x10a;
  uStack_50 = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    uStack_50 = 2;
LAB_1807d24c3:
    (**(code **)**(uint64_t **)(param_1 + 0x20))
              (*(uint64_t **)(param_1 + 0x20),&uStack_60,param_3);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_b8);
  }
  param_2 = param_2 + 0x14;
  iVar4 = FUN_180768440(param_2,0,auStack_78,&lStack_70);
  if (iVar4 != 0) {
    uStack_50 = CONCAT44(uStack_50._4_4_,3);
    goto LAB_1807d24c3;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar3);
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
    (**(code **)(param_1 + 0xa0))(param_2,0,*(uint64_t *)(param_1 + 0xa8));
  }
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x78) +
                    (longlong)(int)(*(int *)(param_1 + 0x80) - 1U & *puVar1) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x10) == *puVar1)
        goto LAB_1807d23bb;
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
    iVar4 = 0x4a;
LAB_1807d23bb:
    if (iVar4 == 0) {
      iVar4 = FUN_180768420(lStack_70);
      if (iVar4 != 0) goto LAB_1807d24a5;
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      goto LAB_1807d23db;
    }
  }
  uStack_50 = CONCAT44(auStack_78[0],(int32_t)uStack_50);
  uStack_88 = 1;
  uStack_90 = 0;
  uStack_98 = 0;
  plVar5 = (longlong *)FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x120,&unknown_var_208_ptr);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    *(int32_t *)(plVar5 + 1) = 0;
    plVar5[2] = 0;
    *(int32_t *)(plVar5 + 3) = 0;
    plVar7 = plVar5;
  }
  plStack_68 = plVar7;
  if (plVar7 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar3);
  }
  uVar2 = *puVar1;
  *plVar7 = param_1;
  *(uint *)(plVar7 + 1) = uVar2;
  func_0x00018076b450((longlong)plVar7 + 0x1c,param_2,0x100);
  *(int32_t *)(plVar7 + 3) = auStack_78[0];
  plVar7[2] = lStack_70;
  iVar4 = FUN_1807d28c0(param_1 + 0x78,puVar1,&plStack_68);
  if (iVar4 != 0) {
LAB_1807d24a5:
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar3);
  }
LAB_1807d23db:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1807d2500(longlong param_1,longlong param_2,uint64_t param_3,uint param_4,
void FUN_1807d2500(longlong param_1,longlong param_2,uint64_t param_3,uint param_4,
                  uint64_t param_5,int32_t *param_6)

{
  uint64_t uVar1;
  int8_t auStack_78 [56];
  ulonglong uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (param_4 < 0x10001)) {
    *param_6 = 0;
    uVar1 = *(uint64_t *)(param_1 + 0x38);
    FUN_180768360(uVar1);
    if (*(int *)(param_1 + 0x44) == 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar1);
    }
    *(uint64_t *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 0x28) = param_4;
    *(uint64_t *)(param_2 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_78);
}







// 函数: void FUN_1807d2545(longlong param_1)
void FUN_1807d2545(longlong param_1)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int32_t unaff_EDI;
  int32_t *unaff_R14;
  uint64_t unaff_R15;
  
  *unaff_R14 = 0;
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  FUN_180768360(uVar1);
  if (*(int *)(unaff_RSI + 0x44) == 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar1);
  }
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_R15;
  *(int32_t *)(unaff_RBX + 0x28) = unaff_EDI;
  *(uint64_t *)(unaff_RBX + 0x2c) = 0;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}







// 函数: void FUN_1807d257e(void)
void FUN_1807d257e(void)

{
  ulonglong in_stack_00000038;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}







// 函数: void FUN_1807d2597(void)
void FUN_1807d2597(void)

{
  longlong unaff_RBX;
  int32_t unaff_EDI;
  uint64_t unaff_R12;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_R15;
  *(int32_t *)(unaff_RBX + 0x28) = unaff_EDI;
  *(uint64_t *)(unaff_RBX + 0x2c) = unaff_R12;
                    // WARNING: Subroutine does not return
  FUN_180768400();
}








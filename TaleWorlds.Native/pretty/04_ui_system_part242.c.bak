#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part242.c - 5 个函数

// 函数: void FUN_180806cf0(longlong param_1)
void FUN_180806cf0(longlong param_1)

{
  int iVar1;
  
  iVar1 = func_0x000180806a70();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 100) ^ 0x80000000;
  }
  return;
}



uint64_t FUN_180806d20(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  
  if ((uint64_t *)param_1[5] != (uint64_t *)0x0) {
    cVar2 = (*(code *)**(uint64_t **)param_1[5])();
    if ((cVar2 != '\0') && (*(longlong *)(param_1[5] + 0x178) != 0)) {
      *(int8_t *)(*(longlong *)(param_1[5] + 0x178) + 0x88) = 1;
    }
  }
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x80;
  (**(code **)(*param_1 + 200))();
  return 0;
}



uint64_t FUN_180806d60(longlong param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char acStackX_18 [8];
  ulonglong uStackX_20;
  ulonglong auStack_28 [2];
  
  uVar5 = func_0x000180069ee0();
  if ((int)uVar5 == 0) {
    if (((((*(uint *)(param_1 + 0x3c) & 0x20) == 0) && ((*(uint *)(param_1 + 0x3c) & 0x40) != 0)) &&
        (plVar3 = *(longlong **)(param_1 + 0x18), (*(uint *)(plVar3 + 9) & 0x30000) != 0x10000)) &&
       (-1 < *(int *)(param_1 + 0x38))) {
      auStack_28[0] = 0;
      uStackX_20 = 0;
      acStackX_18[0] = '\0';
      lVar4 = plVar3[0xc];
      uVar5 = (**(code **)(*plVar3 + 0xe8))(plVar3,auStack_28,&uStackX_20,acStackX_18);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if ((auStack_28[0] != 0) || (uStackX_20 != 0)) {
        uVar6 = 0;
        if ((lVar4 != 0) && (*(ulonglong **)(lVar4 + 0x38) != (ulonglong *)0x0)) {
          uVar6 = **(ulonglong **)(lVar4 + 0x38);
        }
        if ((auStack_28[0] == 0) || (auStack_28[0] <= uVar6)) {
          if ((uStackX_20 != 0) && ((uStackX_20 <= uVar6 && (param_2 = 0, acStackX_18[0] != '\0'))))
          {
            *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffbf;
          }
        }
        else {
          param_2 = 0;
        }
      }
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x31) != '\0')) {
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffbf;
      }
      if (param_2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x18);
        iVar7 = (int)((*(float *)(lVar4 + 0xf0) * *(float *)(lVar4 + 0x7c) +
                      (1.0 - *(float *)(lVar4 + 0xf0))) * *(float *)(lVar4 + 0x22c) *
                      *(float *)(lVar4 + 0x34) * *(float *)(*(longlong *)(lVar4 + 0x20) + 0x1f8)) *
                param_2;
        param_2 = iVar7 / 1000;
        if (*(int *)(param_1 + 0x50) == 1) {
          iVar7 = (int)((ulonglong)((longlong)iVar7 * -0x10624dd3) >> 0x20);
          param_2 = (iVar7 >> 6) - (iVar7 >> 0x1f);
        }
        iVar8 = *(int *)(param_1 + 0x4c) + param_2;
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = iVar8;
        }
        *(int *)(param_1 + 0x4c) = iVar7;
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        uVar2 = *(uint *)(param_1 + 0x38);
        if (((uVar2 & 2) == 0) && (((uVar2 & 4) == 0 || (*(int *)(param_1 + 0x54) == 0)))) {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x44);
          if (uVar2 <= *(uint *)(param_1 + 0x4c)) {
            *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffbf;
            *(uint *)(param_1 + 0x4c) = uVar2;
          }
        }
        else {
LAB_180806f20:
          fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x22c);
          if (fVar1 <= 0.0) {
LAB_180806f42:
            if (0.0 <= fVar1) goto FUN_180806fbb;
            uVar9 = *(uint *)(param_1 + 0x4c);
            uVar10 = *(uint *)(param_1 + 0x58);
            if (uVar10 < uVar9) goto FUN_180806fbb;
          }
          else {
            uVar10 = *(uint *)(param_1 + 0x58);
            uVar9 = *(uint *)(param_1 + 0x4c);
            if (uVar9 < *(int *)(param_1 + 0x5c) + uVar10) goto LAB_180806f42;
          }
          iVar7 = *(int *)(param_1 + 0x54);
          if (iVar7 != 0) {
            if ((uVar2 & 2) == 0) {
              if ((uVar2 & 4) != 0) {
                *(uint *)(param_1 + 0x4c) = uVar9 - param_2;
                *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x50) == 0);
              }
            }
            else {
              iVar8 = -*(int *)(param_1 + 0x5c);
              if (fVar1 <= 0.0) {
                iVar8 = *(int *)(param_1 + 0x5c);
              }
              *(uint *)(param_1 + 0x4c) = uVar9 + iVar8;
            }
            if (-1 < iVar7) {
              *(int *)(param_1 + 0x54) = iVar7 + -1;
            }
            goto LAB_180806f20;
          }
          if ((*(int *)(param_1 + 0x50) == 0) && (0.0 < fVar1)) {
            uVar10 = uVar10 + *(int *)(param_1 + 0x5c);
          }
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffbf;
          *(uint *)(param_1 + 0x4c) = uVar10;
        }
      }
    }
FUN_180806fbb:
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_180806d7c(void)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong in_RAX;
  uint64_t uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong unaff_RBX;
  int unaff_EDI;
  uint uVar10;
  ulonglong uStackX_20;
  char cStack0000000000000060;
  ulonglong uStack0000000000000068;
  
  if (((((in_RAX & 0x20) == 0) && ((in_RAX & 0x40) != 0)) &&
      (plVar3 = *(longlong **)(unaff_RBX + 0x18), (*(uint *)(plVar3 + 9) & 0x30000) != 0x10000)) &&
     (-1 < *(int *)(unaff_RBX + 0x38))) {
    uStackX_20 = 0;
    uStack0000000000000068 = 0;
    cStack0000000000000060 = '\0';
    lVar4 = plVar3[0xc];
    uVar5 = (**(code **)(*plVar3 + 0xe8))(plVar3,&uStackX_20,&stack0x00000068,&stack0x00000060);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((uStackX_20 != 0) || (uStack0000000000000068 != 0)) {
      uVar6 = 0;
      if ((lVar4 != 0) && (*(ulonglong **)(lVar4 + 0x38) != (ulonglong *)0x0)) {
        uVar6 = **(ulonglong **)(lVar4 + 0x38);
      }
      if ((uStackX_20 == 0) || (uStackX_20 <= uVar6)) {
        if ((uStack0000000000000068 != 0) &&
           ((uStack0000000000000068 <= uVar6 && (unaff_EDI = 0, cStack0000000000000060 != '\0')))) {
          *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
        }
      }
      else {
        unaff_EDI = 0;
      }
    }
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x31) != '\0')) {
      *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
    }
    if (unaff_EDI != 0) {
      lVar4 = *(longlong *)(unaff_RBX + 0x18);
      iVar7 = (int)((*(float *)(lVar4 + 0xf0) * *(float *)(lVar4 + 0x7c) +
                    (1.0 - *(float *)(lVar4 + 0xf0))) * *(float *)(lVar4 + 0x22c) *
                    *(float *)(lVar4 + 0x34) * *(float *)(*(longlong *)(lVar4 + 0x20) + 0x1f8)) *
              unaff_EDI;
      unaff_EDI = iVar7 / 1000;
      if (*(int *)(unaff_RBX + 0x50) == 1) {
        iVar7 = (int)((ulonglong)((longlong)iVar7 * -0x10624dd3) >> 0x20);
        unaff_EDI = (iVar7 >> 6) - (iVar7 >> 0x1f);
      }
      iVar8 = *(int *)(unaff_RBX + 0x4c) + unaff_EDI;
      iVar7 = 0;
      if (iVar8 != 0) {
        iVar7 = iVar8;
      }
      *(int *)(unaff_RBX + 0x4c) = iVar7;
    }
    if (*(longlong *)(unaff_RBX + 0x28) != 0) {
      uVar2 = *(uint *)(unaff_RBX + 0x38);
      if (((uVar2 & 2) == 0) && (((uVar2 & 4) == 0 || (*(int *)(unaff_RBX + 0x54) == 0)))) {
        uVar2 = *(uint *)(*(longlong *)(unaff_RBX + 0x28) + 0x44);
        if (uVar2 <= *(uint *)(unaff_RBX + 0x4c)) {
          *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
          *(uint *)(unaff_RBX + 0x4c) = uVar2;
        }
      }
      else {
LAB_180806f20:
        fVar1 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0x22c);
        if (fVar1 <= 0.0) {
LAB_180806f42:
          if (0.0 <= fVar1) {
            return 0;
          }
          uVar9 = *(uint *)(unaff_RBX + 0x4c);
          uVar10 = *(uint *)(unaff_RBX + 0x58);
          if (uVar10 < uVar9) {
            return 0;
          }
        }
        else {
          uVar10 = *(uint *)(unaff_RBX + 0x58);
          uVar9 = *(uint *)(unaff_RBX + 0x4c);
          if (uVar9 < *(int *)(unaff_RBX + 0x5c) + uVar10) goto LAB_180806f42;
        }
        iVar7 = *(int *)(unaff_RBX + 0x54);
        if (iVar7 != 0) {
          if ((uVar2 & 2) == 0) {
            if ((uVar2 & 4) != 0) {
              *(uint *)(unaff_RBX + 0x4c) = uVar9 - unaff_EDI;
              *(uint *)(unaff_RBX + 0x50) = (uint)(*(int *)(unaff_RBX + 0x50) == 0);
            }
          }
          else {
            iVar8 = -*(int *)(unaff_RBX + 0x5c);
            if (fVar1 <= 0.0) {
              iVar8 = *(int *)(unaff_RBX + 0x5c);
            }
            *(uint *)(unaff_RBX + 0x4c) = uVar9 + iVar8;
          }
          if (-1 < iVar7) {
            *(int *)(unaff_RBX + 0x54) = iVar7 + -1;
          }
          goto LAB_180806f20;
        }
        if ((*(int *)(unaff_RBX + 0x50) == 0) && (0.0 < fVar1)) {
          uVar10 = uVar10 + *(int *)(unaff_RBX + 0x5c);
        }
        *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
        *(uint *)(unaff_RBX + 0x4c) = uVar10;
      }
    }
  }
  return 0;
}



uint64_t FUN_180806ed9(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong in_RAX;
  uint uVar4;
  longlong unaff_RBX;
  uint unaff_ESI;
  int unaff_EDI;
  uint uVar5;
  
  if (((unaff_ESI & 2) == 0) && (((unaff_ESI & 4) == 0 || (*(int *)(unaff_RBX + 0x54) == 0)))) {
    uVar5 = *(uint *)(in_RAX + 0x44);
    if (uVar5 <= *(uint *)(unaff_RBX + 0x4c)) {
      *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
      *(uint *)(unaff_RBX + 0x4c) = uVar5;
    }
  }
  else {
LAB_180806f20:
    fVar1 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0x22c);
    if (fVar1 <= 0.0) {
LAB_180806f42:
      if (0.0 <= fVar1) {
        return 0;
      }
      uVar4 = *(uint *)(unaff_RBX + 0x4c);
      uVar5 = *(uint *)(unaff_RBX + 0x58);
      if (uVar5 < uVar4) {
        return 0;
      }
    }
    else {
      uVar5 = *(uint *)(unaff_RBX + 0x58);
      uVar4 = *(uint *)(unaff_RBX + 0x4c);
      if (uVar4 < *(int *)(unaff_RBX + 0x5c) + uVar5) goto LAB_180806f42;
    }
    iVar2 = *(int *)(unaff_RBX + 0x54);
    if (iVar2 != 0) {
      if ((unaff_ESI & 2) == 0) {
        if ((unaff_ESI & 4) != 0) {
          *(uint *)(unaff_RBX + 0x4c) = uVar4 - unaff_EDI;
          *(uint *)(unaff_RBX + 0x50) = (uint)(*(int *)(unaff_RBX + 0x50) == 0);
        }
      }
      else {
        iVar3 = -*(int *)(unaff_RBX + 0x5c);
        if (fVar1 <= 0.0) {
          iVar3 = *(int *)(unaff_RBX + 0x5c);
        }
        *(uint *)(unaff_RBX + 0x4c) = uVar4 + iVar3;
      }
      if (-1 < iVar2) {
        *(int *)(unaff_RBX + 0x54) = iVar2 + -1;
      }
      goto LAB_180806f20;
    }
    if ((*(int *)(unaff_RBX + 0x50) == 0) && (0.0 < fVar1)) {
      uVar5 = uVar5 + *(int *)(unaff_RBX + 0x5c);
    }
    *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
    *(uint *)(unaff_RBX + 0x4c) = uVar5;
  }
  return 0;
}



uint64_t FUN_180806f08(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  ulonglong unaff_RSI;
  int unaff_EDI;
  uint uVar5;
  
  do {
    fVar1 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0x22c);
    if (fVar1 <= 0.0) {
LAB_180806f42:
      if (0.0 <= fVar1) {
        return 0;
      }
      uVar4 = *(uint *)(unaff_RBX + 0x4c);
      uVar5 = *(uint *)(unaff_RBX + 0x58);
      if (uVar5 < uVar4) {
        return 0;
      }
    }
    else {
      uVar5 = *(uint *)(unaff_RBX + 0x58);
      uVar4 = *(uint *)(unaff_RBX + 0x4c);
      if (uVar4 < *(int *)(unaff_RBX + 0x5c) + uVar5) goto LAB_180806f42;
    }
    iVar2 = *(int *)(unaff_RBX + 0x54);
    if (iVar2 == 0) {
      if ((*(int *)(unaff_RBX + 0x50) == 0) && (0.0 < fVar1)) {
        uVar5 = uVar5 + *(int *)(unaff_RBX + 0x5c);
      }
      *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffffbf;
      *(uint *)(unaff_RBX + 0x4c) = uVar5;
      return 0;
    }
    if (unaff_EBP == 0) {
      if ((unaff_RSI & 4) != 0) {
        *(uint *)(unaff_RBX + 0x4c) = uVar4 - unaff_EDI;
        *(uint *)(unaff_RBX + 0x50) = (uint)(*(int *)(unaff_RBX + 0x50) == 0);
      }
    }
    else {
      iVar3 = -*(int *)(unaff_RBX + 0x5c);
      if (fVar1 <= 0.0) {
        iVar3 = *(int *)(unaff_RBX + 0x5c);
      }
      *(uint *)(unaff_RBX + 0x4c) = uVar4 + iVar3;
    }
    if (-1 < iVar2) {
      *(int *)(unaff_RBX + 0x54) = iVar2 + -1;
    }
  } while( true );
}



uint64_t FUN_180806fb6(void)

{
  return 0;
}



uint64_t FUN_180806fbb(void)

{
  return 0;
}





// 函数: void FUN_180806fc2(void)
void FUN_180806fc2(void)

{
  return;
}





// 函数: void FUN_180806fd0(uint64_t *param_1)
void FUN_180806fd0(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180807060();
  lVar1 = param_1[1];
  if (*(longlong *)(lVar1 + 0x540) != 0) {
    free(*(longlong *)(lVar1 + 0x540));
    lVar1 = param_1[1];
  }
  FUN_1808249f0(*(uint64_t *)(lVar1 + 0x78));
  lVar1 = 0;
  lVar2 = 8;
  do {
    FUN_180825e10(param_1[1] + 0x100 + lVar1);
    lVar1 = lVar1 + 0x18;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  free(param_1[1]);
  free(*param_1);
                    // WARNING: Could not recover jumptable at 0x000180807054. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



uint64_t FUN_180807060(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)*param_1 == 9) {
    return 1;
  }
  FUN_1808273e0(param_1[1] + 0x1080,param_1[1] + 0x1018);
  lVar3 = param_1[1];
  if ((*(int *)(lVar3 + 0x1dc) != 0) && (*(longlong *)(lVar3 + 0x2a8) != 0)) {
    free(*(longlong *)(lVar3 + 0x2a8));
    *(uint64_t *)(param_1[1] + 0x2a8) = 0;
    *(int32_t *)(param_1[1] + 0x1dc) = 0;
    lVar3 = param_1[1];
  }
  FUN_180824a30(*(uint64_t *)(lVar3 + 0x78));
  lVar4 = 0x80;
  lVar3 = 8;
  do {
    lVar2 = param_1[1];
    if (*(longlong *)(lVar4 + lVar2) != 0) {
      free(*(longlong *)(lVar4 + lVar2) + -0x10);
      *(uint64_t *)(lVar4 + param_1[1]) = 0;
      lVar2 = param_1[1];
    }
    lVar1 = *(longlong *)(lVar4 + 0xf48 + lVar2);
    if (lVar1 != 0) {
      free(lVar1);
      *(uint64_t *)(param_1[1] + 0x40 + lVar4) = 0;
      *(uint64_t *)(lVar4 + 0xf48 + param_1[1]) = 0;
      lVar2 = param_1[1];
    }
    lVar4 = lVar4 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int32_t *)(lVar2 + 0x1c0) = 0;
  *(int32_t *)(param_1[1] + 0x1c4) = 0;
  lVar3 = param_1[1];
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x70);
    lVar2 = __acrt_iob_func(0);
    if (lVar4 != lVar2) {
      fclose(lVar4);
      lVar3 = param_1[1];
    }
    *(uint64_t *)(lVar3 + 0x70) = 0;
    lVar3 = param_1[1];
  }
  *(int32_t *)(lVar3 + 0x1010) = 0;
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0;
  *(uint64_t *)(param_1[1] + 0x10) = 0;
  *(uint64_t *)(param_1[1] + 0x18) = 0;
  *(uint64_t *)(param_1[1] + 0x20) = 0;
  *(uint64_t *)(param_1[1] + 0x28) = 0;
  *(uint64_t *)(param_1[1] + 0x30) = 0;
  *(uint64_t *)(param_1[1] + 0x38) = 0;
  *(uint64_t *)(param_1[1] + 0x68) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1[1] + 0x340,0,0x200);
}





// 函数: void FUN_180807085(longlong param_1)
void FUN_180807085(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1808273e0(param_1 + 0x1080,param_1 + 0x1018);
  lVar3 = *(longlong *)(unaff_RBX + 8);
  if ((*(int *)(lVar3 + 0x1dc) != 0) && (*(longlong *)(lVar3 + 0x2a8) != 0)) {
    free(*(longlong *)(lVar3 + 0x2a8));
    *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x2a8) = 0;
    *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x1dc) = 0;
    lVar3 = *(longlong *)(unaff_RBX + 8);
  }
  FUN_180824a30(*(uint64_t *)(lVar3 + 0x78));
  lVar4 = 0x80;
  lVar3 = 8;
  do {
    lVar2 = *(longlong *)(unaff_RBX + 8);
    if (*(longlong *)(lVar4 + lVar2) != 0) {
      free(*(longlong *)(lVar4 + lVar2) + -0x10);
      *(uint64_t *)(lVar4 + *(longlong *)(unaff_RBX + 8)) = 0;
      lVar2 = *(longlong *)(unaff_RBX + 8);
    }
    lVar1 = *(longlong *)(lVar4 + 0xf48 + lVar2);
    if (lVar1 != 0) {
      free(lVar1);
      *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x40 + lVar4) = 0;
      *(uint64_t *)(lVar4 + 0xf48 + *(longlong *)(unaff_RBX + 8)) = 0;
      lVar2 = *(longlong *)(unaff_RBX + 8);
    }
    lVar4 = lVar4 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int32_t *)(lVar2 + 0x1c0) = 0;
  *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x1c4) = 0;
  lVar3 = *(longlong *)(unaff_RBX + 8);
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x70);
    lVar2 = __acrt_iob_func(0);
    if (lVar4 != lVar2) {
      fclose(lVar4);
      lVar3 = *(longlong *)(unaff_RBX + 8);
    }
    *(uint64_t *)(lVar3 + 0x70) = 0;
    lVar3 = *(longlong *)(unaff_RBX + 8);
  }
  *(int32_t *)(lVar3 + 0x1010) = 0;
  **(uint64_t **)(unaff_RBX + 8) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x10) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x18) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x20) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x28) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x30) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x38) = 0;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 8) + 0x68) = 0;
                    // WARNING: Subroutine does not return
  memset(*(longlong *)(unaff_RBX + 8) + 0x340,0,0x200);
}





// 函数: void FUN_1808071a4(void)
void FUN_1808071a4(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  int32_t unaff_0000002c;
  
  *(int32_t *)(in_RAX + 0x1010) = unaff_EBP;
  **(uint64_t **)(unaff_RBX + 8) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 8) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x10) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x18) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x20) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x28) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x30) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x38) = CONCAT44(unaff_0000002c,unaff_EBP);
  *(ulonglong *)(*(longlong *)(unaff_RBX + 8) + 0x68) = CONCAT44(unaff_0000002c,unaff_EBP);
                    // WARNING: Subroutine does not return
  memset(*(longlong *)(unaff_RBX + 8) + 0x340,0,0x200);
}



uint64_t FUN_180807270(uint64_t param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 8) + 0x10);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(param_2,param_3,*(uint64_t *)(*(longlong *)(param_2 + 8) + 0x68));
    if (iVar2 == 0) {
      iVar2 = func_0x000180824bc0(*(uint64_t *)(*(longlong *)(param_2 + 8) + 0x78));
      if (iVar2 != 0) {
        uVar3 = func_0x000180824a70(*(uint64_t *)(*(longlong *)(param_2 + 8) + 0x78));
        *param_3 = *param_3 - (ulonglong)(uVar3 >> 3);
        return 1;
      }
    }
  }
  return 0;
}






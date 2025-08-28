#include "TaleWorlds.Native.Split.h"

// 03_rendering_part534.c - 15 个函数

// 函数: void FUN_18055c344(uint64_t param_1,longlong param_2)
void FUN_18055c344(uint64_t param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_RBX;
  int iVar8;
  ulonglong unaff_RSI;
  int unaff_EDI;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  longlong in_stack_00000038;
  ulonglong in_stack_00000140;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  
  uVar10 = unaff_RSI;
  do {
    if (*(longlong *)(uVar10 + param_2) != 0) {
      plVar4 = *(longlong **)(unaff_RBX + 0x738);
      uVar6 = unaff_RSI & 0xffffffff;
      uVar9 = *(longlong *)(unaff_RBX + 0x740) - (longlong)plVar4 >> 3;
      if (uVar9 != 0) {
        do {
          if (*plVar4 == *(longlong *)(uVar10 + param_2)) {
            if ((int)uVar6 != -1) {
              param_1 = FUN_18055c930(param_1,uVar6,0);
              lVar7 = *(longlong *)(unaff_RBX + 0x35d8) + (longlong)unaff_EDI * 8;
              uVar9 = *(ulonglong *)(unaff_RBX + 0x35e0);
              uVar6 = lVar7 + 8;
              if (uVar6 < uVar9) {
                    // WARNING: Subroutine does not return
                memmove(lVar7,uVar6,uVar9 - uVar6);
              }
              unaff_EDI = unaff_EDI + -1;
              *(ulonglong *)(unaff_RBX + 0x35e0) = uVar9 - 8;
              uVar10 = uVar10 - 8;
            }
            break;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          plVar4 = plVar4 + 1;
        } while ((ulonglong)(longlong)(int)uVar5 < uVar9);
      }
    }
    param_2 = *(longlong *)(unaff_RBX + 0x35d8);
    unaff_EDI = unaff_EDI + 1;
    uVar10 = uVar10 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBX + 0x35e0) - param_2 >> 3) <=
        (ulonglong)(longlong)unaff_EDI) {
      lVar7 = *(longlong *)(unaff_RBX + 0x738);
      uVar10 = unaff_RSI;
      uVar1 = unaff_XMM6_Da;
      uVar2 = unaff_XMM6_Dc;
      if (*(longlong *)(unaff_RBX + 0x740) - lVar7 >> 3 != 0) {
        do {
          in_stack_00000158 = uVar2;
          in_stack_00000150 = uVar1;
          iVar8 = (int)unaff_RSI;
          lVar7 = *(longlong *)(uVar10 + lVar7);
          if (*(char *)(lVar7 + 0x31) == '\0') {
            lVar3 = _DAT_180c8ed58;
            if (_DAT_180c8ed58 == 0) {
              QueryPerformanceCounter(&stack0x00000038);
              lVar3 = in_stack_00000038;
            }
            dVar11 = (double)(lVar3 - _DAT_180c8ed48) * _DAT_180c8ed50;
            if (*(double *)(lVar7 + 0x20) + 20.0 < dVar11) {
              FUN_18055c930(dVar11,unaff_RSI & 0xffffffff,1);
              iVar8 = iVar8 + -1;
              uVar10 = uVar10 - 8;
            }
          }
          lVar7 = *(longlong *)(unaff_RBX + 0x738);
          unaff_RSI = (ulonglong)(iVar8 + 1U);
          uVar10 = uVar10 + 8;
          uVar1 = in_stack_00000150;
          uVar2 = in_stack_00000158;
        } while ((ulonglong)(longlong)(int)(iVar8 + 1U) <
                 (ulonglong)(*(longlong *)(unaff_RBX + 0x740) - lVar7 >> 3));
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c415(void)
void FUN_18055c415(void)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RBX;
  int iVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  double dVar7;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  longlong in_stack_00000038;
  ulonglong in_stack_00000140;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  
  lVar4 = *(longlong *)(unaff_RBX + 0x738);
  uVar6 = unaff_RSI;
  uVar1 = unaff_XMM6_Da;
  uVar2 = unaff_XMM6_Dc;
  if (*(longlong *)(unaff_RBX + 0x740) - lVar4 >> 3 != 0) {
    do {
      in_stack_00000158 = uVar2;
      in_stack_00000150 = uVar1;
      iVar5 = (int)unaff_RSI;
      lVar4 = *(longlong *)(uVar6 + lVar4);
      if (*(char *)(lVar4 + 0x31) == '\0') {
        lVar3 = _DAT_180c8ed58;
        if (_DAT_180c8ed58 == 0) {
          QueryPerformanceCounter(&stack0x00000038);
          lVar3 = in_stack_00000038;
        }
        dVar7 = (double)(lVar3 - _DAT_180c8ed48) * _DAT_180c8ed50;
        if (*(double *)(lVar4 + 0x20) + 20.0 < dVar7) {
          FUN_18055c930(dVar7,unaff_RSI & 0xffffffff,1);
          iVar5 = iVar5 + -1;
          uVar6 = uVar6 - 8;
        }
      }
      lVar4 = *(longlong *)(unaff_RBX + 0x738);
      unaff_RSI = (ulonglong)(iVar5 + 1U);
      uVar6 = uVar6 + 8;
      uVar1 = in_stack_00000150;
      uVar2 = in_stack_00000158;
    } while ((ulonglong)(longlong)(int)(iVar5 + 1U) <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x740) - lVar4 >> 3));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c433(uint64_t param_1,longlong param_2)
void FUN_18055c433(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  double dVar5;
  longlong in_stack_00000038;
  ulonglong in_stack_00000140;
  
  uVar4 = unaff_RSI;
  do {
    iVar3 = (int)unaff_RSI;
    lVar1 = *(longlong *)(uVar4 + param_2);
    if (*(char *)(lVar1 + 0x31) == '\0') {
      lVar2 = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(&stack0x00000038);
        lVar2 = in_stack_00000038;
      }
      dVar5 = (double)(lVar2 - _DAT_180c8ed48) * _DAT_180c8ed50;
      if (*(double *)(lVar1 + 0x20) + 20.0 < dVar5) {
        FUN_18055c930(dVar5,unaff_RSI & 0xffffffff,1);
        iVar3 = iVar3 + -1;
        uVar4 = uVar4 - 8;
      }
    }
    param_2 = *(longlong *)(unaff_RBX + 0x738);
    unaff_RSI = (ulonglong)(iVar3 + 1U);
    uVar4 = uVar4 + 8;
  } while ((ulonglong)(longlong)(int)(iVar3 + 1U) <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x740) - param_2 >> 3));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18055c4d9(void)
void FUN_18055c4d9(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_18055c500(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar1 = _DAT_180c96070;
  if (873600000.0 < *(double *)(param_1 + 0x3630) || *(double *)(param_1 + 0x3630) == 873600000.0) {
    return 1.0;
  }
  lVar3 = *(longlong *)(param_1 + 0x740);
  lVar8 = *(longlong *)(param_1 + 0x738);
  iVar9 = 0;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (lVar3 - lVar8 >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar4 + lVar8);
      if (*(longlong *)(lVar3 + 0x58f8) == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x58f8) + 0x18);
      }
      if (((lVar1 != 0) && (-1 < iVar2)) &&
         (*(int *)((longlong)iVar2 * 0xa60 + 0x3608 + lVar1) == 1)) {
        iVar9 = iVar9 + 1;
      }
      iVar2 = *(int *)(lVar3 + 0x48);
      iVar6 = iVar6 + 1;
      *(int32_t *)(lVar3 + 0x48) = 0;
      iVar7 = iVar7 + iVar2;
      lVar3 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x738));
      lVar4 = lVar4 + 8;
      iVar5 = iVar5 + *(int *)(lVar3 + 0x4c);
      *(int32_t *)(lVar3 + 0x4c) = 0;
      lVar3 = *(longlong *)(param_1 + 0x740);
      lVar8 = *(longlong *)(param_1 + 0x738);
    } while ((ulonglong)(longlong)iVar6 < (ulonglong)(lVar3 - lVar8 >> 3));
    if (iVar7 != 0) {
      dVar10 = ((double)iVar5 / (double)iVar7 - *(double *)(param_1 + 0x3638)) * (double)param_2 +
               *(double *)(param_1 + 0x3638);
      *(double *)(param_1 + 0x3638) = dVar10;
      goto LAB_18055c64a;
    }
  }
  dVar10 = *(double *)(param_1 + 0x3638);
LAB_18055c64a:
  dVar12 = (double)*(int *)(param_1 + 0x3618) * 0.03333333333333333;
  dVar11 = (double)((int)(lVar3 - *(longlong *)(param_1 + 0x738) >> 3) - iVar9) * dVar10 * 31.5;
  if (dVar11 < *(double *)(param_1 + 0x3630)) {
    dVar11 = ((double)*(int *)(param_1 + 0x3618) * dVar10 * (double)iVar9 * 1.05) /
             (*(double *)(param_1 + 0x3630) - dVar11);
    dVar10 = 1.0;
    if ((1.0 <= dVar11) && (dVar10 = dVar11, dVar12 <= dVar11)) {
      dVar10 = dVar12;
    }
    return dVar10;
  }
  return dVar12;
}





// 函数: void FUN_18055c544(uint64_t param_1,longlong param_2,longlong param_3,float param_4)
void FUN_18055c544(uint64_t param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong in_R9;
  int iVar7;
  longlong in_R11;
  double dVar8;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar5 = 0;
  if (in_RAX >> 3 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + in_R9);
      if (*(longlong *)(lVar1 + 0x58f8) == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x58f8) + 0x18);
      }
      if (((in_R11 != 0) && (-1 < iVar2)) &&
         (*(int *)((longlong)iVar2 * 0xa60 + 0x3608 + in_R11) == 1)) {
        iVar7 = iVar7 + 1;
      }
      iVar2 = *(int *)(lVar1 + 0x48);
      iVar5 = iVar5 + 1;
      *(int32_t *)(lVar1 + 0x48) = 0;
      iVar6 = iVar6 + iVar2;
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_3 + 0x738));
      lVar3 = lVar3 + 8;
      iVar4 = iVar4 + *(int *)(lVar1 + 0x4c);
      *(int32_t *)(lVar1 + 0x4c) = 0;
      param_2 = *(longlong *)(param_3 + 0x740);
      in_R9 = *(longlong *)(param_3 + 0x738);
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_2 - in_R9 >> 3));
    if (iVar6 != 0) {
      dVar8 = ((double)iVar4 / (double)iVar6 - *(double *)(param_3 + 0x3638)) * (double)param_4 +
              *(double *)(param_3 + 0x3638);
      *(double *)(param_3 + 0x3638) = dVar8;
      goto LAB_18055c64a;
    }
  }
  dVar8 = *(double *)(param_3 + 0x3638);
LAB_18055c64a:
  if ((double)((int)(param_2 - *(longlong *)(param_3 + 0x738) >> 3) - iVar7) * dVar8 * 31.5 <
      *(double *)(param_3 + 0x3630)) {
    return;
  }
  return;
}





// 函数: void FUN_18055c573(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_18055c573(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_R10D;
  longlong in_R11;
  uint unaff_R14D;
  double dVar4;
  float in_XMM3_Da;
  
  uVar3 = (ulonglong)unaff_R14D;
  do {
    lVar1 = *(longlong *)(uVar3 + param_4);
    if (*(longlong *)(lVar1 + 0x58f8) == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(lVar1 + 0x58f8) + 0x18);
    }
    if (((in_R11 != 0) && (-1 < iVar2)) &&
       (*(int *)((longlong)iVar2 * 0xa60 + 0x3608 + in_R11) == 1)) {
      in_R10D = in_R10D + 1;
    }
    iVar2 = *(int *)(lVar1 + 0x48);
    unaff_ESI = unaff_ESI + 1;
    *(uint *)(lVar1 + 0x48) = unaff_R14D;
    unaff_EDI = unaff_EDI + iVar2;
    lVar1 = *(longlong *)(uVar3 + *(longlong *)(param_3 + 0x738));
    uVar3 = uVar3 + 8;
    unaff_EBP = unaff_EBP + *(int *)(lVar1 + 0x4c);
    *(uint *)(lVar1 + 0x4c) = unaff_R14D;
    param_4 = *(longlong *)(param_3 + 0x738);
  } while ((ulonglong)(longlong)unaff_ESI <
           (ulonglong)(*(longlong *)(param_3 + 0x740) - param_4 >> 3));
  if (unaff_EDI == 0) {
    dVar4 = *(double *)(param_3 + 0x3638);
  }
  else {
    dVar4 = ((double)unaff_EBP / (double)unaff_EDI - *(double *)(param_3 + 0x3638)) *
            (double)in_XMM3_Da + *(double *)(param_3 + 0x3638);
    *(double *)(param_3 + 0x3638) = dVar4;
  }
  if ((double)((int)(*(longlong *)(param_3 + 0x740) - *(longlong *)(param_3 + 0x738) >> 3) - in_R10D
              ) * dVar4 * 31.5 < *(double *)(param_3 + 0x3630)) {
    return;
  }
  return;
}





// 函数: void FUN_18055c606(uint64_t param_1,longlong param_2,longlong param_3,float param_4)
void FUN_18055c606(uint64_t param_1,longlong param_2,longlong param_3,float param_4)

{
  int unaff_EBP;
  int unaff_EDI;
  int in_R10D;
  double dVar1;
  
  dVar1 = ((double)unaff_EBP / (double)unaff_EDI - *(double *)(param_3 + 0x3638)) * (double)param_4
          + *(double *)(param_3 + 0x3638);
  *(double *)(param_3 + 0x3638) = dVar1;
  if ((double)((int)(param_2 - *(longlong *)(param_3 + 0x738) >> 3) - in_R10D) * dVar1 * 31.5 <
      *(double *)(param_3 + 0x3630)) {
    return;
  }
  return;
}





// 函数: void FUN_18055c6a6(void)
void FUN_18055c6a6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18055c6f0(longlong param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  longlong lStackX_8;
  
  piVar9 = *(int **)(param_1 + 0x3600);
  iVar3 = -1;
  if ((longlong)piVar9 - *(longlong *)(param_1 + 0x35f8) >> 4 == 0) {
    return -1;
  }
  lVar4 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_8);
    piVar9 = *(int **)(param_1 + 0x3600);
    lVar4 = lStackX_8;
  }
  iVar7 = (int)((longlong)piVar9 - *(longlong *)(param_1 + 0x35f8) >> 4) + -1;
  dVar12 = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  if (-1 < iVar7) {
    lVar4 = (longlong)iVar7;
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x35f8) + 8 + lVar4 * 0x10);
    do {
      if (*pdVar5 <= dVar12 && dVar12 != *pdVar5) {
        piVar11 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x35f8));
        iVar7 = *piVar11;
        piVar1 = piVar11 + 4;
        piVar10 = *(int **)(param_1 + 0x3600);
        if ((piVar1 < *(int **)(param_1 + 0x3600)) && (piVar10 = piVar9, piVar1 != piVar9)) {
                    // WARNING: Subroutine does not return
          memmove(piVar11,piVar1,(longlong)piVar9 - (longlong)piVar1);
        }
        *(int **)(param_1 + 0x3600) = piVar10 + -4;
        if (iVar7 != -1) {
          return iVar7;
        }
        break;
      }
      iVar7 = iVar7 + -1;
      pdVar5 = pdVar5 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  piVar9 = *(int **)(param_1 + 0x3600);
  iVar7 = 0;
  lVar4 = *(longlong *)(param_1 + 0x35f8);
  uVar8 = (longlong)piVar9 - lVar4 >> 4;
  if (uVar8 != 0) {
    pdVar5 = (double *)(lVar4 + 8);
    dVar12 = 1.7976931348623157e+308;
    iVar6 = -1;
    do {
      dVar2 = *pdVar5;
      pdVar5 = pdVar5 + 2;
      dVar13 = dVar12;
      if (dVar2 <= dVar12) {
        dVar13 = dVar2;
      }
      iVar3 = iVar7;
      if (dVar12 <= dVar2) {
        iVar3 = iVar6;
      }
      iVar7 = iVar7 + 1;
      dVar12 = dVar13;
      iVar6 = iVar3;
    } while ((ulonglong)(longlong)iVar7 < uVar8);
  }
  piVar10 = (int *)((longlong)iVar3 * 0x10 + lVar4);
  iVar3 = *piVar10;
  piVar1 = piVar10 + 4;
  if (piVar1 < piVar9) {
                    // WARNING: Subroutine does not return
    memmove(piVar10,piVar1,(longlong)piVar9 - (longlong)piVar1);
  }
  *(int **)(param_1 + 0x3600) = piVar9 + -4;
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18055c75a(uint64_t param_1,longlong param_2,longlong param_3,int *param_4)

{
  double dVar1;
  int *piVar2;
  longlong in_RAX;
  longlong lVar3;
  int *piVar4;
  double *pdVar5;
  longlong unaff_RBX;
  int unaff_EDI;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  
  iVar7 = (int)(param_3 >> 4) + -1;
  if (-1 < iVar7) {
    lVar3 = (longlong)iVar7;
    pdVar5 = (double *)(param_2 + 8 + lVar3 * 0x10);
    do {
      if (*pdVar5 <= (double)in_RAX * _DAT_180c8ed50 && (double)in_RAX * _DAT_180c8ed50 != *pdVar5)
      {
        piVar9 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)(unaff_RBX + 0x35f8));
        iVar7 = *piVar9;
        piVar2 = piVar9 + 4;
        piVar4 = *(int **)(unaff_RBX + 0x3600);
        if ((piVar2 < *(int **)(unaff_RBX + 0x3600)) && (piVar4 = param_4, piVar2 != param_4)) {
                    // WARNING: Subroutine does not return
          memmove(piVar9,piVar2,(longlong)param_4 - (longlong)piVar2);
        }
        *(int **)(unaff_RBX + 0x3600) = piVar4 + -4;
        if (iVar7 != unaff_EDI) {
          return iVar7;
        }
        break;
      }
      iVar7 = iVar7 + -1;
      pdVar5 = pdVar5 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  piVar2 = *(int **)(unaff_RBX + 0x3600);
  iVar7 = 0;
  lVar3 = *(longlong *)(unaff_RBX + 0x35f8);
  uVar8 = (longlong)piVar2 - lVar3 >> 4;
  if (uVar8 != 0) {
    pdVar5 = (double *)(lVar3 + 8);
    dVar10 = 1.7976931348623157e+308;
    iVar6 = unaff_EDI;
    do {
      dVar1 = *pdVar5;
      pdVar5 = pdVar5 + 2;
      dVar11 = dVar10;
      if (dVar1 <= dVar10) {
        dVar11 = dVar1;
      }
      unaff_EDI = iVar7;
      if (dVar10 <= dVar1) {
        unaff_EDI = iVar6;
      }
      iVar7 = iVar7 + 1;
      dVar10 = dVar11;
      iVar6 = unaff_EDI;
    } while ((ulonglong)(longlong)iVar7 < uVar8);
  }
  piVar9 = (int *)((longlong)unaff_EDI * 0x10 + lVar3);
  iVar7 = *piVar9;
  piVar4 = piVar9 + 4;
  if (piVar4 < piVar2) {
                    // WARNING: Subroutine does not return
    memmove(piVar9,piVar4,(longlong)piVar2 - (longlong)piVar4);
  }
  *(int **)(unaff_RBX + 0x3600) = piVar2 + -4;
  return iVar7;
}



int FUN_18055c84a(uint64_t param_1,uint64_t param_2,int param_3,int *param_4)

{
  double dVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong unaff_RBX;
  int iVar6;
  int unaff_EDI;
  ulonglong uVar7;
  double *pdVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  
  piVar9 = (int *)((longlong)param_3 * 0x10 + *(longlong *)(unaff_RBX + 0x35f8));
  iVar5 = *piVar9;
  piVar2 = piVar9 + 4;
  piVar4 = *(int **)(unaff_RBX + 0x3600);
  if ((piVar2 < *(int **)(unaff_RBX + 0x3600)) && (piVar4 = param_4, piVar2 != param_4)) {
                    // WARNING: Subroutine does not return
    memmove(piVar9,piVar2,(longlong)param_4 - (longlong)piVar2);
  }
  *(int **)(unaff_RBX + 0x3600) = piVar4 + -4;
  if (iVar5 != unaff_EDI) {
    return iVar5;
  }
  piVar2 = *(int **)(unaff_RBX + 0x3600);
  iVar5 = 0;
  lVar3 = *(longlong *)(unaff_RBX + 0x35f8);
  uVar7 = (longlong)piVar2 - lVar3 >> 4;
  if (uVar7 != 0) {
    pdVar8 = (double *)(lVar3 + 8);
    dVar10 = 1.7976931348623157e+308;
    iVar6 = unaff_EDI;
    do {
      dVar1 = *pdVar8;
      pdVar8 = pdVar8 + 2;
      dVar11 = dVar10;
      if (dVar1 <= dVar10) {
        dVar11 = dVar1;
      }
      unaff_EDI = iVar5;
      if (dVar10 <= dVar1) {
        unaff_EDI = iVar6;
      }
      iVar5 = iVar5 + 1;
      dVar10 = dVar11;
      iVar6 = unaff_EDI;
    } while ((ulonglong)(longlong)iVar5 < uVar7);
  }
  piVar9 = (int *)((longlong)unaff_EDI * 0x10 + lVar3);
  iVar5 = *piVar9;
  piVar4 = piVar9 + 4;
  if (piVar4 < piVar2) {
                    // WARNING: Subroutine does not return
    memmove(piVar9,piVar4,(longlong)piVar2 - (longlong)piVar4);
  }
  *(int **)(unaff_RBX + 0x3600) = piVar2 + -4;
  return iVar5;
}



int32_t FUN_18055c8ad(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c8c0(longlong param_1,int32_t param_2)
void FUN_18055c8c0(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong alStackX_8 [4];
  int32_t auStack_18 [2];
  double dStack_10;
  
  lVar1 = _DAT_180c8ed58;
  auStack_18[0] = param_2;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(alStackX_8);
    lVar1 = alStackX_8[0];
  }
  dStack_10 = (double)(lVar1 - _DAT_180c8ed48) * _DAT_180c8ed50 + 10.0;
  FUN_1800863a0(param_1 + 0x35f8,auStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c930(longlong param_1,int param_2,int8_t param_3)
void FUN_18055c930(longlong param_1,int param_2,int8_t param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x738) + (longlong)param_2 * 8);
  (**(code **)(_DAT_180c8ece0 + 0x148))
            (*(int32_t *)(*(longlong *)(lVar3 + 0x58f8) + 0x4c),param_3,
             *(code **)(_DAT_180c8ece0 + 0x148),param_3,0xfffffffffffffffe);
  puVar4 = *(uint64_t **)(lVar3 + 0x58f8);
  *(int32_t *)(puVar4 + 9) = 0xffffffff;
  *(int32_t *)(puVar4 + 3) = 0xffffffff;
  *(int8_t *)((longlong)puVar4 + 0x1c) = 0;
  *puVar4 = 0;
  *(int32_t *)(puVar4 + 2) = 0;
  *(int32_t *)(puVar4 + 4) = 0;
  *(int16_t *)((longlong)puVar4 + 0x25) = 0x101;
  *(int8_t *)((longlong)puVar4 + 0x27) = 1;
  puVar4[5] = *(longlong *)(&system_error_code + (longlong)*(int *)(puVar4 + 6) * 8) + 18000000;
  lVar2 = *(longlong *)(param_1 + 0x738) + (longlong)param_2 * 8;
  uVar1 = lVar2 + 8;
  uVar5 = *(ulonglong *)(param_1 + 0x740);
  if (uVar1 < uVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,uVar1,uVar5 - uVar1);
  }
  *(ulonglong *)(param_1 + 0x740) = uVar5 - 8;
  lVar6 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x58f8) + 0x14);
  *(int16_t *)(param_1 + 0x2788 + lVar6 * 2) = 0xffff;
  lVar2 = *(longlong *)(param_1 + 0x790 + lVar6 * 8);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x4c) != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  *(uint64_t *)(param_1 + 0x790 + lVar6 * 8) = 0;
  FUN_18055e8d0(lVar3);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar3);
}



longlong FUN_18055caa0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x2f88);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1 + 0x2fd8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cad0(longlong param_1,uint param_2,longlong param_3,char param_4)
void FUN_18055cad0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(int32_t *)(param_1 + 0x359c) = 0;
  iVar3 = (int)(*(longlong *)(param_1 + 0x740) - *(longlong *)(param_1 + 0x738) >> 3);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x738) + lVar4 * 8);
      if ((((lVar1 != 0) &&
           ((((lVar2 = *(longlong *)(lVar1 + 0x58f8), *(char *)(lVar2 + 0x1c) != '\0' ||
              ((param_2 & 0x20) != 0)) && ((param_2 >> 8 & 1) == 0)) &&
            (((param_2 & 1) == 0 || (lVar2 != param_3)))))) &&
          (((param_2 & 0x40) == 0 || (*(int *)(lVar2 + 0x48) == *(int *)(param_3 + 0x48))))) &&
         ((-1 < (char)param_2 || (*(int *)(lVar2 + 0x48) != *(int *)(param_3 + 0x48))))) {
        if (param_4 == '\0') {
          FUN_1805b5840(lVar1,param_1 + 0x2fd8);
        }
        else {
          FUN_1805b59d0();
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (((param_2 & 0x10) != 0) && (_DAT_180c96070 != 0)) {
    FUN_180567f30(_DAT_180c92580,param_1 + 0x2fd8);
  }
  *(uint64_t *)(param_1 + 0x359c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x3570),0,(longlong)(*(int *)(param_1 + 0x3568) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cad7(longlong param_1,uint param_2,longlong param_3,char param_4)
void FUN_18055cad7(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar4;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -8) = unaff_R12;
  *(int32_t *)(param_1 + 0x359c) = 0;
  lVar4 = *(longlong *)(param_1 + 0x740);
  lVar1 = *(longlong *)(param_1 + 0x738);
  *(uint64_t *)(in_R11 + -0x10) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R15;
  iVar3 = (int)(lVar4 - lVar1 >> 3);
  if (0 < iVar3) {
    *(uint64_t *)(in_R11 + 0x20) = unaff_RDI;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x738) + lVar4 * 8);
      if ((((lVar1 != 0) &&
           ((((lVar2 = *(longlong *)(lVar1 + 0x58f8), *(char *)(lVar2 + 0x1c) != '\0' ||
              ((param_2 & 0x20) != 0)) && ((param_2 >> 8 & 1) == 0)) &&
            (((param_2 & 1) == 0 || (lVar2 != param_3)))))) &&
          (((param_2 & 0x40) == 0 || (*(int *)(lVar2 + 0x48) == *(int *)(param_3 + 0x48))))) &&
         ((-1 < (char)param_2 || (*(int *)(lVar2 + 0x48) != *(int *)(param_3 + 0x48))))) {
        if (param_4 == '\0') {
          FUN_1805b5840(lVar1,param_1 + 0x2fd8);
        }
        else {
          FUN_1805b59d0();
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (((param_2 & 0x10) != 0) && (_DAT_180c96070 != 0)) {
    FUN_180567f30(_DAT_180c92580,param_1 + 0x2fd8);
  }
  *(uint64_t *)(param_1 + 0x359c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x3570),0,(longlong)(*(int *)(param_1 + 0x3568) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cb22(void)
void FUN_18055cb22(void)

{
  longlong lVar1;
  longlong lVar2;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar3;
  longlong in_R11;
  char unaff_R12B;
  longlong unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RDI;
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RBP + 0x738) + lVar3 * 8);
    if ((((lVar1 != 0) &&
         ((((lVar2 = *(longlong *)(lVar1 + 0x58f8), *(char *)(lVar2 + 0x1c) != '\0' ||
            ((unaff_EBX & 0x20) != 0)) && ((unaff_EBX >> 8 & 1) == 0)) &&
          (((unaff_EBX & 1) == 0 || (lVar2 != unaff_RSI)))))) &&
        (((unaff_EBX & 0x40) == 0 || (*(int *)(lVar2 + 0x48) == *(int *)(unaff_RSI + 0x48))))) &&
       ((-1 < (char)unaff_EBX || (*(int *)(lVar2 + 0x48) != *(int *)(unaff_RSI + 0x48))))) {
      if (unaff_R12B == '\0') {
        FUN_1805b5840(lVar1,unaff_RBP + 0x2fd8);
      }
      else {
        FUN_1805b59d0();
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 < unaff_R15);
  if (((unaff_EBX & 0x10) != 0) && (_DAT_180c96070 != 0)) {
    FUN_180567f30(_DAT_180c92580,unaff_RBP + 0x2fd8);
  }
  *(uint64_t *)(unaff_RBP + 0x359c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(unaff_RBP + 0x3570),0,(longlong)(*(int *)(unaff_RBP + 0x3568) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cba0(void)
void FUN_18055cba0(void)

{
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  
  if (((unaff_RBX & 0x10) != 0) && (_DAT_180c96070 != 0)) {
    FUN_180567f30(_DAT_180c92580,unaff_RBP + 0x2fd8);
  }
  *(uint64_t *)(unaff_RBP + 0x359c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(unaff_RBP + 0x3570),0,(longlong)(*(int *)(unaff_RBP + 0x3568) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cbb9(void)
void FUN_18055cbb9(void)

{
  longlong unaff_RBP;
  
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580,unaff_RBP + 0x2fd8);
  }
  *(uint64_t *)(unaff_RBP + 0x359c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(unaff_RBP + 0x3570),0,(longlong)(*(int *)(unaff_RBP + 0x3568) >> 3));
}






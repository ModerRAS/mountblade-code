#include "TaleWorlds.Native.Split.h"

// 03_rendering_part207.c - 11 个函数

// 函数: void FUN_18038a010(longlong *param_1)
void FUN_18038a010(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 9) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t FUN_18038a080(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0x210,param_3,param_4,uVar1);
  }
  return param_1;
}



float FUN_18038a130(float *param_1,float *param_2,float *param_3)

{
  int8_t auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uStackX_8;
  
  fVar3 = *param_2 - *param_1;
  fVar4 = param_2[1] - param_1[1];
  fVar6 = fVar4 * fVar4 + fVar3 * fVar3;
  auVar1 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar2 = auVar1._0_4_;
  fVar5 = fVar2 * 0.5 * (3.0 - fVar6 * fVar2 * fVar2);
  fVar2 = (param_3[1] - param_1[1]) * fVar4 * fVar5 + (*param_3 - *param_1) * fVar3 * fVar5;
  if (0.0 <= fVar2) {
    if (fVar2 <= fVar5 * fVar6) {
      uStackX_8 = CONCAT44(fVar4 * fVar5 * fVar2 + param_1[1],fVar3 * fVar5 * fVar2 + *param_1);
    }
    else {
      uStackX_8 = *(uint64_t *)param_2;
    }
  }
  else {
    uStackX_8 = *(uint64_t *)param_1;
  }
  fVar2 = *param_3 - (float)uStackX_8;
  uStackX_8._4_4_ = (float)((ulonglong)uStackX_8 >> 0x20);
  uStackX_8._4_4_ = param_3[1] - uStackX_8._4_4_;
  return fVar2 * fVar2 + uStackX_8._4_4_ * uStackX_8._4_4_;
}



uint64_t * FUN_18038a230(uint64_t *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int8_t auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *param_3 - *param_2;
  fVar4 = param_3[1] - param_2[1];
  fVar6 = fVar4 * fVar4 + fVar3 * fVar3;
  auVar2 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar1 = auVar2._0_4_;
  fVar5 = fVar1 * 0.5 * (3.0 - fVar6 * fVar1 * fVar1);
  fVar1 = (param_4[1] - param_2[1]) * fVar4 * fVar5 + (*param_4 - *param_2) * fVar3 * fVar5;
  if (fVar1 < 0.0) {
    *param_1 = *(uint64_t *)param_2;
    return param_1;
  }
  if (fVar5 * fVar6 < fVar1) {
    *param_1 = *(uint64_t *)param_3;
    return param_1;
  }
  *param_1 = CONCAT44(fVar4 * fVar5 * fVar1 + param_2[1],fVar3 * fVar5 * fVar1 + *param_2);
  return param_1;
}





// 函数: void FUN_18038a340(longlong param_1,longlong param_2)
void FUN_18038a340(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar6 = (ulonglong)*(byte *)(param_2 + 0xa8);
  lVar12 = 0;
  fVar20 = 1e+06;
  fVar21 = -1e+06;
  fVar22 = -1e+06;
  fVar23 = 1e+06;
  if (3 < uVar6) {
    lVar7 = (uVar6 - 4 >> 2) + 1;
    lVar12 = lVar7 * 4;
    puVar8 = (uint64_t *)(param_2 + 0x88);
    do {
      fVar16 = *(float *)puVar8[-1];
      fVar17 = ((float *)puVar8[-1])[1];
      fVar19 = fVar16;
      if (fVar16 <= fVar21) {
        fVar19 = fVar21;
      }
      if (fVar20 <= fVar16) {
        fVar16 = fVar20;
      }
      fVar18 = fVar17;
      if (fVar17 <= fVar22) {
        fVar18 = fVar22;
      }
      if (fVar23 <= fVar17) {
        fVar17 = fVar23;
      }
      fVar21 = ((float *)*puVar8)[1];
      fVar22 = *(float *)*puVar8;
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      if (fVar22 <= fVar16) {
        fVar16 = fVar22;
      }
      if (fVar21 <= fVar17) {
        fVar17 = fVar21;
      }
      fVar22 = *(float *)puVar8[1];
      if (fVar18 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar21 = ((float *)puVar8[1])[1];
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      pfVar3 = (float *)puVar8[2];
      if (fVar22 <= fVar16) {
        fVar16 = fVar22;
      }
      if (fVar21 <= fVar17) {
        fVar17 = fVar21;
      }
      if (fVar18 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar21 = fVar19;
      if (fVar19 <= *pfVar3) {
        fVar21 = *pfVar3;
      }
      fVar20 = fVar16;
      if (*pfVar3 <= fVar16) {
        fVar20 = *pfVar3;
      }
      fVar23 = fVar17;
      if (pfVar3[1] <= fVar17) {
        fVar23 = pfVar3[1];
      }
      fVar22 = fVar18;
      if (fVar18 <= pfVar3[1]) {
        fVar22 = pfVar3[1];
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
  }
  if (lVar12 < (longlong)uVar6) {
    lVar7 = uVar6 - lVar12;
    puVar8 = (uint64_t *)(param_2 + 0x80 + lVar12 * 8);
    fVar16 = fVar20;
    fVar17 = fVar21;
    fVar19 = fVar22;
    fVar18 = fVar23;
    do {
      pfVar3 = (float *)*puVar8;
      puVar8 = puVar8 + 1;
      fVar21 = *pfVar3;
      fVar22 = pfVar3[1];
      fVar20 = fVar21;
      if (fVar16 <= fVar21) {
        fVar20 = fVar16;
      }
      fVar23 = fVar22;
      if (fVar18 <= fVar22) {
        fVar23 = fVar18;
      }
      if (fVar21 <= fVar17) {
        fVar21 = fVar17;
      }
      if (fVar22 <= fVar19) {
        fVar22 = fVar19;
      }
      lVar7 = lVar7 + -1;
      fVar16 = fVar20;
      fVar17 = fVar21;
      fVar19 = fVar22;
      fVar18 = fVar23;
    } while (lVar7 != 0);
  }
  iVar14 = *(int *)(param_1 + 0x28e8);
  iVar10 = (int)(((fVar20 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (iVar14 <= iVar10) {
    iVar10 = iVar14 + -1;
  }
  iVar2 = *(int *)(param_1 + 0x28ec);
  iVar15 = (int)(((fVar23 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  else if (iVar2 <= iVar15) {
    iVar15 = iVar2 + -1;
  }
  iVar13 = (int)(((fVar21 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (iVar14 <= iVar13) {
    iVar13 = iVar14 + -1;
  }
  iVar14 = (int)(((fVar22 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  else if (iVar2 <= iVar14) {
    iVar14 = iVar2 + -1;
  }
  do {
    iVar2 = iVar15;
    if (iVar13 < iVar10) {
      return;
    }
    for (; iVar2 <= iVar14; iVar2 = iVar2 + 1) {
      iVar5 = 0;
      lVar12 = *(longlong *)(param_1 + 0x28c8);
      lVar9 = 0;
      lVar4 = (longlong)(*(int *)(param_1 + 0x28ec) * iVar10 + iVar2);
      lVar7 = *(longlong *)(lVar12 + 8 + lVar4 * 0x28);
      iVar11 = (int)(*(longlong *)(lVar12 + 0x10 + lVar4 * 0x28) - lVar7 >> 3);
      if (0 < iVar11) {
        do {
          if (*(longlong *)(lVar7 + lVar9 * 8) == param_2) {
            if (iVar5 != iVar11 + -1) {
              *(uint64_t *)(lVar7 + lVar9 * 8) =
                   *(uint64_t *)(lVar7 + -8 + (longlong)iVar11 * 8);
            }
            plVar1 = (longlong *)(lVar12 + 0x10 + lVar4 * 0x28);
            *plVar1 = *plVar1 + -8;
            break;
          }
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar11);
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}





// 函数: void FUN_18038a359(longlong param_1,longlong param_2)
void FUN_18038a359(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar6 = (ulonglong)*(byte *)(param_2 + 0xa8);
  lVar12 = 0;
  fVar20 = 1e+06;
  fVar21 = -1e+06;
  fVar22 = -1e+06;
  fVar23 = 1e+06;
  if (3 < uVar6) {
    lVar7 = (uVar6 - 4 >> 2) + 1;
    lVar12 = lVar7 * 4;
    puVar8 = (uint64_t *)(param_2 + 0x88);
    do {
      fVar16 = *(float *)puVar8[-1];
      fVar17 = ((float *)puVar8[-1])[1];
      fVar19 = fVar16;
      if (fVar16 <= fVar21) {
        fVar19 = fVar21;
      }
      if (fVar20 <= fVar16) {
        fVar16 = fVar20;
      }
      fVar18 = fVar17;
      if (fVar17 <= fVar22) {
        fVar18 = fVar22;
      }
      if (fVar23 <= fVar17) {
        fVar17 = fVar23;
      }
      fVar21 = ((float *)*puVar8)[1];
      fVar22 = *(float *)*puVar8;
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      if (fVar22 <= fVar16) {
        fVar16 = fVar22;
      }
      if (fVar21 <= fVar17) {
        fVar17 = fVar21;
      }
      fVar22 = *(float *)puVar8[1];
      if (fVar18 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar21 = ((float *)puVar8[1])[1];
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      pfVar3 = (float *)puVar8[2];
      if (fVar22 <= fVar16) {
        fVar16 = fVar22;
      }
      if (fVar21 <= fVar17) {
        fVar17 = fVar21;
      }
      if (fVar18 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar21 = fVar19;
      if (fVar19 <= *pfVar3) {
        fVar21 = *pfVar3;
      }
      fVar20 = fVar16;
      if (*pfVar3 <= fVar16) {
        fVar20 = *pfVar3;
      }
      fVar23 = fVar17;
      if (pfVar3[1] <= fVar17) {
        fVar23 = pfVar3[1];
      }
      fVar22 = fVar18;
      if (fVar18 <= pfVar3[1]) {
        fVar22 = pfVar3[1];
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
  }
  if (lVar12 < (longlong)uVar6) {
    lVar7 = uVar6 - lVar12;
    puVar8 = (uint64_t *)(param_2 + 0x80 + lVar12 * 8);
    fVar16 = fVar20;
    fVar17 = fVar21;
    fVar19 = fVar22;
    fVar18 = fVar23;
    do {
      pfVar3 = (float *)*puVar8;
      puVar8 = puVar8 + 1;
      fVar21 = *pfVar3;
      fVar22 = pfVar3[1];
      fVar20 = fVar21;
      if (fVar16 <= fVar21) {
        fVar20 = fVar16;
      }
      fVar23 = fVar22;
      if (fVar18 <= fVar22) {
        fVar23 = fVar18;
      }
      if (fVar21 <= fVar17) {
        fVar21 = fVar17;
      }
      if (fVar22 <= fVar19) {
        fVar22 = fVar19;
      }
      lVar7 = lVar7 + -1;
      fVar16 = fVar20;
      fVar17 = fVar21;
      fVar19 = fVar22;
      fVar18 = fVar23;
    } while (lVar7 != 0);
  }
  iVar14 = *(int *)(param_1 + 0x28e8);
  iVar10 = (int)(((fVar20 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (iVar14 <= iVar10) {
    iVar10 = iVar14 + -1;
  }
  iVar2 = *(int *)(param_1 + 0x28ec);
  iVar15 = (int)(((fVar23 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  else if (iVar2 <= iVar15) {
    iVar15 = iVar2 + -1;
  }
  iVar13 = (int)(((fVar21 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (iVar14 <= iVar13) {
    iVar13 = iVar14 + -1;
  }
  iVar14 = (int)(((fVar22 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  else if (iVar2 <= iVar14) {
    iVar14 = iVar2 + -1;
  }
  do {
    iVar2 = iVar15;
    if (iVar13 < iVar10) {
      return;
    }
    for (; iVar2 <= iVar14; iVar2 = iVar2 + 1) {
      iVar5 = 0;
      lVar12 = *(longlong *)(param_1 + 0x28c8);
      lVar9 = 0;
      lVar4 = (longlong)(*(int *)(param_1 + 0x28ec) * iVar10 + iVar2);
      lVar7 = *(longlong *)(lVar12 + 8 + lVar4 * 0x28);
      iVar11 = (int)(*(longlong *)(lVar12 + 0x10 + lVar4 * 0x28) - lVar7 >> 3);
      if (0 < iVar11) {
        do {
          if (*(longlong *)(lVar7 + lVar9 * 8) == param_2) {
            if (iVar5 != iVar11 + -1) {
              *(uint64_t *)(lVar7 + lVar9 * 8) =
                   *(uint64_t *)(lVar7 + -8 + (longlong)iVar11 * 8);
            }
            plVar1 = (longlong *)(lVar12 + 0x10 + lVar4 * 0x28);
            *plVar1 = *plVar1 + -8;
            break;
          }
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar11);
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}





// 函数: void FUN_18038a4dd(float param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_18038a4dd(float param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int in_EAX;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RBP;
  int iVar8;
  longlong unaff_RDI;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  iVar8 = 0;
  iVar2 = *(int *)(unaff_RBP + 0x28ec);
  iVar12 = (int)(((unaff_XMM9_Da - *(float *)(unaff_RBP + 0x28d4)) - param_1) /
                *(float *)(unaff_RBP + 0x28e4));
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (iVar2 <= iVar12) {
    iVar12 = iVar2 + -1;
  }
  iVar10 = (int)(((unaff_XMM7_Da - param_4) - param_1) / in_XMM4_Da);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (in_EAX <= iVar10) {
    iVar10 = in_EAX + -1;
  }
  iVar11 = (int)(((unaff_XMM8_Da - *(float *)(unaff_RBP + 0x28d4)) - param_1) /
                *(float *)(unaff_RBP + 0x28e4));
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (iVar2 <= iVar11) {
    iVar11 = iVar2 + -1;
  }
  iVar2 = iVar12;
  if (-1 < iVar10) {
    do {
      for (; iVar2 <= iVar11; iVar2 = iVar2 + 1) {
        iVar6 = 0;
        lVar3 = *(longlong *)(unaff_RBP + 0x28c8);
        lVar7 = 0;
        lVar5 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * iVar8 + iVar2);
        lVar4 = *(longlong *)(lVar3 + 8 + lVar5 * 0x28);
        iVar9 = (int)(*(longlong *)(lVar3 + 0x10 + lVar5 * 0x28) - lVar4 >> 3);
        if (0 < iVar9) {
          do {
            if (*(longlong *)(lVar4 + lVar7 * 8) == unaff_RDI) {
              if (iVar6 != iVar9 + -1) {
                *(uint64_t *)(lVar4 + lVar7 * 8) =
                     *(uint64_t *)(lVar4 + -8 + (longlong)iVar9 * 8);
              }
              plVar1 = (longlong *)(lVar3 + 0x10 + lVar5 * 0x28);
              *plVar1 = *plVar1 + -8;
              break;
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar9);
        }
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar12;
    } while (iVar8 <= iVar10);
  }
  return;
}





// 函数: void FUN_18038a51c(float param_1,float param_2,float param_3,float param_4)
void FUN_18038a51c(float param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  longlong lVar4;
  int in_ECX;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar8;
  int iVar9;
  int iVar10;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  iVar9 = (int)(((unaff_XMM7_Da - param_4) - param_1) / in_XMM4_Da);
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (in_EAX <= iVar9) {
    iVar9 = in_EAX + -1;
  }
  iVar10 = (int)(((unaff_XMM8_Da - param_2) - param_1) / param_3);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (in_ECX <= iVar10) {
    iVar10 = in_ECX + -1;
  }
  if (unaff_ESI <= iVar9) {
    do {
      iVar7 = 0;
      if (-1 < iVar10) {
        do {
          iVar5 = 0;
          lVar2 = *(longlong *)(unaff_RBP + 0x28c8);
          lVar6 = 0;
          lVar4 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar4 * 0x28);
          iVar8 = (int)(*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) - lVar3 >> 3);
          if (0 < iVar8) {
            do {
              if (*(longlong *)(lVar3 + lVar6 * 8) == unaff_RDI) {
                if (iVar5 != iVar8 + -1) {
                  *(uint64_t *)(lVar3 + lVar6 * 8) =
                       *(uint64_t *)(lVar3 + -8 + (longlong)iVar8 * 8);
                }
                plVar1 = (longlong *)(lVar2 + 0x10 + lVar4 * 0x28);
                *plVar1 = *plVar1 + -8;
                break;
              }
              iVar5 = iVar5 + 1;
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar10);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI <= iVar9);
  }
  return;
}





// 函数: void FUN_18038a545(float param_1,float param_2,float param_3)
void FUN_18038a545(float param_1,float param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int in_ECX;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar8;
  int iVar9;
  int unaff_R15D;
  float unaff_XMM8_Da;
  
  iVar9 = (int)(((unaff_XMM8_Da - param_2) - param_1) / param_3);
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (in_ECX <= iVar9) {
    iVar9 = in_ECX + -1;
  }
  if (unaff_ESI < 1) {
    do {
      iVar7 = unaff_R15D;
      if (unaff_R15D <= iVar9) {
        do {
          iVar5 = 0;
          lVar2 = *(longlong *)(unaff_RBP + 0x28c8);
          lVar6 = 0;
          lVar4 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar4 * 0x28);
          iVar8 = (int)(*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) - lVar3 >> 3);
          if (0 < iVar8) {
            do {
              if (*(longlong *)(lVar3 + lVar6 * 8) == unaff_RDI) {
                if (iVar5 != iVar8 + -1) {
                  *(uint64_t *)(lVar3 + lVar6 * 8) =
                       *(uint64_t *)(lVar3 + -8 + (longlong)iVar8 * 8);
                }
                plVar1 = (longlong *)(lVar2 + 0x10 + lVar4 * 0x28);
                *plVar1 = *plVar1 + -8;
                break;
              }
              iVar5 = iVar5 + 1;
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar9);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI < 1);
  }
  return;
}





// 函数: void FUN_18038a572(void)
void FUN_18038a572(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar8;
  int unaff_R12D;
  int unaff_R15D;
  
  if (unaff_ESI <= unaff_R12D) {
    do {
      iVar7 = unaff_R15D;
      if (unaff_R15D < 1) {
        do {
          iVar5 = 0;
          lVar2 = *(longlong *)(unaff_RBP + 0x28c8);
          lVar6 = 0;
          lVar4 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar4 * 0x28);
          iVar8 = (int)(*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) - lVar3 >> 3);
          if (0 < iVar8) {
            do {
              if (*(longlong *)(lVar3 + lVar6 * 8) == unaff_RDI) {
                if (iVar5 != iVar8 + -1) {
                  *(uint64_t *)(lVar3 + lVar6 * 8) =
                       *(uint64_t *)(lVar3 + -8 + (longlong)iVar8 * 8);
                }
                plVar1 = (longlong *)(lVar2 + 0x10 + lVar4 * 0x28);
                *plVar1 = *plVar1 + -8;
                break;
              }
              iVar5 = iVar5 + 1;
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 1);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI <= unaff_R12D);
  }
  return;
}





// 函数: void FUN_18038a589(void)
void FUN_18038a589(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar8;
  int unaff_R12D;
  int unaff_R14D;
  int unaff_R15D;
  
  do {
    iVar7 = unaff_R15D;
    if (unaff_R15D <= unaff_R14D) {
      do {
        iVar5 = 0;
        lVar2 = *(longlong *)(unaff_RBP + 0x28c8);
        lVar6 = 0;
        lVar4 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar7);
        lVar3 = *(longlong *)(lVar2 + 8 + lVar4 * 0x28);
        iVar8 = (int)(*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) - lVar3 >> 3);
        if (0 < iVar8) {
          do {
            if (*(longlong *)(lVar3 + lVar6 * 8) == unaff_RDI) {
              if (iVar5 != iVar8 + -1) {
                *(uint64_t *)(lVar3 + lVar6 * 8) =
                     *(uint64_t *)(lVar3 + -8 + (longlong)iVar8 * 8);
              }
              plVar1 = (longlong *)(lVar2 + 0x10 + lVar4 * 0x28);
              *plVar1 = *plVar1 + -8;
              break;
            }
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= unaff_R14D);
    }
    unaff_ESI = unaff_ESI + 1;
    if (unaff_R12D < unaff_ESI) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18038a614(void)
void FUN_18038a614(void)

{
  return;
}





// 函数: void FUN_18038a630(longlong param_1,longlong param_2)
void FUN_18038a630(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lStackX_8;
  
  lVar8 = 0;
  fVar17 = 1e+06;
  uVar3 = (ulonglong)*(byte *)(param_2 + 0xa8);
  iVar10 = 0;
  fVar18 = -1e+06;
  fVar19 = -1e+06;
  fVar20 = 1e+06;
  if (3 < uVar3) {
    lVar4 = (uVar3 - 4 >> 2) + 1;
    lVar8 = lVar4 * 4;
    puVar5 = (uint64_t *)(param_2 + 0x88);
    do {
      fVar13 = *(float *)puVar5[-1];
      fVar14 = ((float *)puVar5[-1])[1];
      fVar16 = fVar13;
      if (fVar13 <= fVar18) {
        fVar16 = fVar18;
      }
      if (fVar17 <= fVar13) {
        fVar13 = fVar17;
      }
      fVar15 = fVar14;
      if (fVar14 <= fVar19) {
        fVar15 = fVar19;
      }
      if (fVar20 <= fVar14) {
        fVar14 = fVar20;
      }
      fVar18 = ((float *)*puVar5)[1];
      fVar19 = *(float *)*puVar5;
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      if (fVar19 <= fVar13) {
        fVar13 = fVar19;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      fVar19 = *(float *)puVar5[1];
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      fVar18 = ((float *)puVar5[1])[1];
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      pfVar1 = (float *)puVar5[2];
      if (fVar19 <= fVar13) {
        fVar13 = fVar19;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      fVar18 = fVar16;
      if (fVar16 <= *pfVar1) {
        fVar18 = *pfVar1;
      }
      fVar17 = fVar13;
      if (*pfVar1 <= fVar13) {
        fVar17 = *pfVar1;
      }
      fVar20 = fVar14;
      if (pfVar1[1] <= fVar14) {
        fVar20 = pfVar1[1];
      }
      fVar19 = fVar15;
      if (fVar15 <= pfVar1[1]) {
        fVar19 = pfVar1[1];
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  if (lVar8 < (longlong)uVar3) {
    lVar4 = uVar3 - lVar8;
    puVar5 = (uint64_t *)(param_2 + 0x80 + lVar8 * 8);
    fVar13 = fVar17;
    fVar14 = fVar18;
    fVar16 = fVar19;
    fVar15 = fVar20;
    do {
      pfVar1 = (float *)*puVar5;
      puVar5 = puVar5 + 1;
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar17 = fVar18;
      if (fVar13 <= fVar18) {
        fVar17 = fVar13;
      }
      fVar20 = fVar19;
      if (fVar15 <= fVar19) {
        fVar20 = fVar15;
      }
      if (fVar18 <= fVar14) {
        fVar18 = fVar14;
      }
      if (fVar19 <= fVar16) {
        fVar19 = fVar16;
      }
      lVar4 = lVar4 + -1;
      fVar13 = fVar17;
      fVar14 = fVar18;
      fVar16 = fVar19;
      fVar15 = fVar20;
    } while (lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x28e8);
  iVar6 = (int)(((fVar17 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  iVar7 = iVar10;
  if ((-1 < iVar6) && (iVar7 = iVar6, iVar2 <= iVar6)) {
    iVar7 = iVar2 + -1;
  }
  iVar6 = *(int *)(param_1 + 0x28ec);
  iVar11 = (int)(((fVar20 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  iVar12 = iVar10;
  if ((-1 < iVar11) && (iVar12 = iVar11, iVar6 <= iVar11)) {
    iVar12 = iVar6 + -1;
  }
  iVar9 = (int)(((fVar18 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  iVar11 = iVar10;
  if ((-1 < iVar9) && (iVar11 = iVar9, iVar2 <= iVar9)) {
    iVar11 = iVar2 + -1;
  }
  iVar2 = (int)(((fVar19 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if ((-1 < iVar2) && (iVar10 = iVar6 + -1, iVar2 < iVar6)) {
    iVar10 = iVar2;
  }
  for (; lStackX_8 = param_2, iVar2 = iVar12, iVar7 <= iVar11; iVar7 = iVar7 + 1) {
    for (; iVar2 <= iVar10; iVar2 = iVar2 + 1) {
      lVar4 = (longlong)(*(int *)(param_1 + 0x28ec) * iVar7 + iVar2);
      lVar8 = *(longlong *)(param_1 + 0x28c8) + lVar4 * 0x28;
      FUN_1800e8140(lVar8 + 8,(longlong)*(int *)(*(longlong *)(param_1 + 0x28c8) + lVar4 * 0x28));
      FUN_18005ea90(lVar8 + 8,&lStackX_8);
    }
  }
  return;
}





// 函数: void FUN_18038a642(longlong param_1,longlong param_2)
void FUN_18038a642(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lStack0000000000000090;
  
  lVar8 = 0;
  fVar17 = 1e+06;
  uVar3 = (ulonglong)*(byte *)(param_2 + 0xa8);
  iVar10 = 0;
  fVar18 = -1e+06;
  fVar19 = -1e+06;
  fVar20 = 1e+06;
  if (3 < uVar3) {
    lVar4 = (uVar3 - 4 >> 2) + 1;
    lVar8 = lVar4 * 4;
    puVar5 = (uint64_t *)(param_2 + 0x88);
    do {
      fVar13 = *(float *)puVar5[-1];
      fVar14 = ((float *)puVar5[-1])[1];
      fVar16 = fVar13;
      if (fVar13 <= fVar18) {
        fVar16 = fVar18;
      }
      if (fVar17 <= fVar13) {
        fVar13 = fVar17;
      }
      fVar15 = fVar14;
      if (fVar14 <= fVar19) {
        fVar15 = fVar19;
      }
      if (fVar20 <= fVar14) {
        fVar14 = fVar20;
      }
      fVar18 = ((float *)*puVar5)[1];
      fVar19 = *(float *)*puVar5;
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      if (fVar19 <= fVar13) {
        fVar13 = fVar19;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      fVar19 = *(float *)puVar5[1];
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      fVar18 = ((float *)puVar5[1])[1];
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      pfVar1 = (float *)puVar5[2];
      if (fVar19 <= fVar13) {
        fVar13 = fVar19;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      fVar18 = fVar16;
      if (fVar16 <= *pfVar1) {
        fVar18 = *pfVar1;
      }
      fVar17 = fVar13;
      if (*pfVar1 <= fVar13) {
        fVar17 = *pfVar1;
      }
      fVar20 = fVar14;
      if (pfVar1[1] <= fVar14) {
        fVar20 = pfVar1[1];
      }
      fVar19 = fVar15;
      if (fVar15 <= pfVar1[1]) {
        fVar19 = pfVar1[1];
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  if (lVar8 < (longlong)uVar3) {
    lVar4 = uVar3 - lVar8;
    puVar5 = (uint64_t *)(param_2 + 0x80 + lVar8 * 8);
    fVar13 = fVar17;
    fVar14 = fVar18;
    fVar16 = fVar19;
    fVar15 = fVar20;
    do {
      pfVar1 = (float *)*puVar5;
      puVar5 = puVar5 + 1;
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar17 = fVar18;
      if (fVar13 <= fVar18) {
        fVar17 = fVar13;
      }
      fVar20 = fVar19;
      if (fVar15 <= fVar19) {
        fVar20 = fVar15;
      }
      if (fVar18 <= fVar14) {
        fVar18 = fVar14;
      }
      if (fVar19 <= fVar16) {
        fVar19 = fVar16;
      }
      lVar4 = lVar4 + -1;
      fVar13 = fVar17;
      fVar14 = fVar18;
      fVar16 = fVar19;
      fVar15 = fVar20;
    } while (lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x28e8);
  iVar6 = (int)(((fVar17 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  iVar7 = iVar10;
  if ((-1 < iVar6) && (iVar7 = iVar6, iVar2 <= iVar6)) {
    iVar7 = iVar2 + -1;
  }
  iVar6 = *(int *)(param_1 + 0x28ec);
  iVar11 = (int)(((fVar20 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  iVar12 = iVar10;
  if ((-1 < iVar11) && (iVar12 = iVar11, iVar6 <= iVar11)) {
    iVar12 = iVar6 + -1;
  }
  iVar9 = (int)(((fVar18 - *(float *)(param_1 + 0x28d0)) - 1e-06) / *(float *)(param_1 + 0x28e0));
  iVar11 = iVar10;
  if ((-1 < iVar9) && (iVar11 = iVar9, iVar2 <= iVar9)) {
    iVar11 = iVar2 + -1;
  }
  iVar2 = (int)(((fVar19 - *(float *)(param_1 + 0x28d4)) - 1e-06) / *(float *)(param_1 + 0x28e4));
  if ((-1 < iVar2) && (iVar10 = iVar6 + -1, iVar2 < iVar6)) {
    iVar10 = iVar2;
  }
  for (; lStack0000000000000090 = param_2, iVar2 = iVar12, iVar7 <= iVar11; iVar7 = iVar7 + 1) {
    for (; iVar2 <= iVar10; iVar2 = iVar2 + 1) {
      lVar4 = (longlong)(*(int *)(param_1 + 0x28ec) * iVar7 + iVar2);
      lVar8 = *(longlong *)(param_1 + 0x28c8) + lVar4 * 0x28;
      FUN_1800e8140(lVar8 + 8,(longlong)*(int *)(*(longlong *)(param_1 + 0x28c8) + lVar4 * 0x28));
      FUN_18005ea90(lVar8 + 8,&stack0x00000090);
    }
  }
  return;
}






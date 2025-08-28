#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part039.c - 6 个函数

// 函数: void FUN_1807a5be2(longlong param_1,int param_2,float *param_3,float *param_4,uint64_t param_5,
void FUN_1807a5be2(longlong param_1,int param_2,float *param_3,float *param_4,uint64_t param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *(int *)(param_1 + 600);
  if (iVar4 <= param_2) {
    *param_3 = 1.0 - *(float *)(param_1 + 0x21c);
    *param_4 = 0.0;
    *param_6 = *(int *)(param_1 + 0x24c);
    goto FUN_1807a5faf;
  }
  iVar3 = *(int *)(param_1 + 0x254);
  if (param_2 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x250);
    if (param_2 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x24c);
      if (iVar3 <= param_2) {
        iVar1 = ((param_2 - iVar3) * 0x10) / (iVar4 - iVar3);
        lVar2 = (longlong)iVar1;
        if (iVar1 + 1 != 0x10) {
          fVar5 = (float)(iVar4 - iVar3);
          iVar3 = iVar3 + (int)((fVar5 - 0.5) / fVar5 +
                               (float)(iVar1 + 1) * *(float *)(param_1 + 0x270));
          iVar4 = param_2 + 1;
          if (param_2 + 1 <= iVar3) {
            iVar4 = iVar3;
          }
        }
        *param_6 = iVar4;
        if (param_2 ==
            (int)((float)iVar1 * *(float *)(param_1 + 0x270) + 0.5) + *(int *)(param_1 + 0x24c)) {
          if (iVar1 == 0) {
            *param_4 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390)) *
                       *(float *)(param_1 + 0x278);
            *param_3 = *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x390) +
                       *(float *)(param_1 + 0x284);
          }
          else if (iVar1 == 0x10) {
            *param_4 = 0.0;
          }
          else {
            *param_4 = (*(float *)(param_1 + 0x394 + lVar2 * 4) -
                       *(float *)(param_1 + 0x390 + lVar2 * 4)) * *(float *)(param_1 + 0x278);
          }
          goto FUN_1807a5faf;
        }
        if (iVar1 == 0x10) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)
                  ) * *(float *)(param_1 + 0x278);
        }
        *param_4 = fVar5;
        fVar5 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
                *(float *)(param_1 + 0x284);
        *param_3 = fVar5;
        fVar6 = (float)iVar1 * *(float *)(param_1 + 0x270);
        iVar4 = *(int *)(param_1 + 0x24c);
        goto LAB_1807a5ee2;
      }
      *param_3 = 1.0 - *(float *)(param_1 + 0x21c);
      *param_4 = 0.0;
      iVar4 = *(int *)(param_1 + 0x24c);
    }
    else {
      *param_3 = 1.0;
      *param_4 = 0.0;
      iVar4 = *(int *)(param_1 + 0x254);
    }
    *param_6 = iVar4;
  }
  else {
    iVar1 = ((param_2 - iVar3) * 0x10) / (iVar4 - iVar3);
    if (iVar1 + 1 != 0x10) {
      fVar5 = (float)(iVar4 - iVar3);
      iVar3 = iVar3 + (int)((fVar5 - 0.5) / fVar5 + (float)(iVar1 + 1) * *(float *)(param_1 + 0x274)
                           );
      iVar4 = param_2 + 1;
      if (param_2 + 1 <= iVar3) {
        iVar4 = iVar3;
      }
    }
    iVar3 = 0x10 - iVar1;
    *param_6 = iVar4;
    if (param_2 ==
        (int)((float)iVar1 * *(float *)(param_1 + 0x274) + 0.5) + *(int *)(param_1 + 0x254)) {
      if (iVar1 == 0) {
        lVar2 = (longlong)iVar3;
        if (iVar3 == 0x10) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)
                  ) * *(float *)(param_1 + 0x278);
        }
        *param_4 = fVar5;
        *param_3 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
                   *(float *)(param_1 + 0x284);
      }
      else if (iVar3 == 0) {
        *param_4 = 0.0;
      }
      else {
        *param_4 = (*(float *)(param_1 + 0x38c + (longlong)iVar3 * 4) -
                   *(float *)(param_1 + 0x390 + (longlong)iVar3 * 4)) * *(float *)(param_1 + 0x27c);
      }
      goto FUN_1807a5faf;
    }
    lVar2 = (longlong)iVar3;
    if (iVar3 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (*(float *)(param_1 + 0x38c + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)) *
              *(float *)(param_1 + 0x27c);
    }
    *param_4 = fVar5;
    fVar5 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
            *(float *)(param_1 + 0x284);
    *param_3 = fVar5;
    fVar6 = (float)iVar1 * *(float *)(param_1 + 0x274);
    iVar4 = *(int *)(param_1 + 0x254);
LAB_1807a5ee2:
    *param_3 = ((float)param_2 - (fVar6 + (float)iVar4)) * *param_4 + fVar5;
  }
FUN_1807a5faf:
  if (*(int *)(param_1 + 0x260) <= *param_6) {
    *param_6 = 0;
  }
  return;
}






// 函数: void FUN_1807a5c2d(int param_1,uint64_t param_2,float param_3,float *param_4,uint64_t param_5,
void FUN_1807a5c2d(int param_1,uint64_t param_2,float param_3,float *param_4,uint64_t param_5,
                  float *param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float *unaff_RBX;
  float unaff_EBP;
  longlong in_R10;
  int in_R11D;
  float fVar4;
  float fVar5;
  
  if (in_R11D < param_1) {
    fVar4 = *(float *)(in_R10 + 0x250);
    if (in_R11D < (int)fVar4) {
      iVar1 = *(int *)(in_R10 + 0x24c);
      if (iVar1 <= in_R11D) {
        iVar3 = ((in_R11D - iVar1) * 0x10) / ((int)fVar4 - iVar1);
        lVar2 = (longlong)iVar3;
        if (iVar3 + 1 != 0x10) {
          fVar4 = (float)((int)fVar4 - iVar1);
          fVar5 = (float)(iVar1 + (int)((fVar4 - 0.5) / fVar4 +
                                       (float)(iVar3 + 1) * *(float *)(in_R10 + 0x270)));
          fVar4 = (float)(in_R11D + 1);
          if (in_R11D + 1 <= (int)fVar5) {
            fVar4 = fVar5;
          }
        }
        *param_6 = fVar4;
        if (in_R11D ==
            (int)((float)iVar3 * *(float *)(in_R10 + 0x270) + 0.5) + *(int *)(in_R10 + 0x24c)) {
          if (iVar3 == 0) {
            *param_4 = (*(float *)(in_R10 + 0x394 + lVar2 * 4) - *(float *)(in_R10 + 0x390)) *
                       *(float *)(in_R10 + 0x278);
            *unaff_RBX = *(float *)(in_R10 + 0x21c) * *(float *)(in_R10 + 0x390) +
                         *(float *)(in_R10 + 0x284);
          }
          else if (iVar3 == 0x10) {
            *param_4 = 0.0;
          }
          else {
            *param_4 = (*(float *)(in_R10 + 0x394 + lVar2 * 4) -
                       *(float *)(in_R10 + 0x390 + lVar2 * 4)) * *(float *)(in_R10 + 0x278);
          }
          goto LAB_1807a5fa5;
        }
        if (iVar3 == 0x10) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (*(float *)(in_R10 + 0x394 + lVar2 * 4) - *(float *)(in_R10 + 0x390 + lVar2 * 4))
                  * *(float *)(in_R10 + 0x278);
        }
        *param_4 = fVar4;
        fVar4 = *(float *)(in_R10 + 0x390 + lVar2 * 4) * *(float *)(in_R10 + 0x21c) +
                *(float *)(in_R10 + 0x284);
        *unaff_RBX = fVar4;
        fVar5 = (float)iVar3 * *(float *)(in_R10 + 0x270);
        iVar1 = *(int *)(in_R10 + 0x24c);
        goto LAB_1807a5ee2;
      }
      *unaff_RBX = 1.0 - *(float *)(in_R10 + 0x21c);
      *param_4 = unaff_EBP;
      fVar4 = *(float *)(in_R10 + 0x24c);
    }
    else {
      *unaff_RBX = 1.0;
      *param_4 = unaff_EBP;
      fVar4 = *(float *)(in_R10 + 0x254);
    }
    *param_6 = fVar4;
  }
  else {
    iVar1 = ((in_R11D - param_1) * 0x10) / ((int)param_3 - param_1);
    if (iVar1 + 1 != 0x10) {
      fVar4 = (float)((int)param_3 - param_1);
      fVar4 = (float)(param_1 +
                     (int)((fVar4 - 0.5) / fVar4 + (float)(iVar1 + 1) * *(float *)(in_R10 + 0x274)))
      ;
      param_3 = (float)(in_R11D + 1);
      if (in_R11D + 1 <= (int)fVar4) {
        param_3 = fVar4;
      }
    }
    iVar3 = 0x10 - iVar1;
    *param_6 = param_3;
    if (in_R11D == (int)((float)iVar1 * *(float *)(in_R10 + 0x274) + 0.5) + *(int *)(in_R10 + 0x254)
       ) {
      if (iVar1 == 0) {
        lVar2 = (longlong)iVar3;
        if (iVar3 == 0x10) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (*(float *)(in_R10 + 0x394 + lVar2 * 4) - *(float *)(in_R10 + 0x390 + lVar2 * 4))
                  * *(float *)(in_R10 + 0x278);
        }
        *param_4 = fVar4;
        *unaff_RBX = *(float *)(in_R10 + 0x390 + lVar2 * 4) * *(float *)(in_R10 + 0x21c) +
                     *(float *)(in_R10 + 0x284);
      }
      else if (iVar3 == 0) {
        *param_4 = unaff_EBP;
      }
      else {
        *param_4 = (*(float *)(in_R10 + 0x38c + (longlong)iVar3 * 4) -
                   *(float *)(in_R10 + 0x390 + (longlong)iVar3 * 4)) * *(float *)(in_R10 + 0x27c);
      }
      goto LAB_1807a5fa5;
    }
    lVar2 = (longlong)iVar3;
    if (iVar3 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (*(float *)(in_R10 + 0x38c + lVar2 * 4) - *(float *)(in_R10 + 0x390 + lVar2 * 4)) *
              *(float *)(in_R10 + 0x27c);
    }
    *param_4 = fVar4;
    fVar4 = *(float *)(in_R10 + 0x390 + lVar2 * 4) * *(float *)(in_R10 + 0x21c) +
            *(float *)(in_R10 + 0x284);
    *unaff_RBX = fVar4;
    fVar5 = (float)iVar1 * *(float *)(in_R10 + 0x274);
    iVar1 = *(int *)(in_R10 + 0x254);
LAB_1807a5ee2:
    *unaff_RBX = ((float)in_R11D - (fVar5 + (float)iVar1)) * *param_4 + fVar4;
  }
LAB_1807a5fa5:
  if (*(int *)(in_R10 + 0x260) <= (int)*param_6) {
    *param_6 = unaff_EBP;
  }
  return;
}






// 函数: void FUN_1807a5faf(int *param_1)
void FUN_1807a5faf(int *param_1)

{
  int unaff_EBP;
  longlong in_R10;
  
  if (*(int *)(in_R10 + 0x260) <= *param_1) {
    *param_1 = unaff_EBP;
  }
  return;
}






// 函数: void FUN_1807a5fbf(int32_t *param_1)
void FUN_1807a5fbf(int32_t *param_1)

{
  int32_t unaff_EBP;
  
  *param_1 = unaff_EBP;
  return;
}



uint64_t FUN_1807a5fd0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  float *pfVar15;
  int *piVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  
  lVar13 = (longlong)param_5;
  if (param_2 == 0) {
    return 0;
  }
  iVar10 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x6d0);
  bVar18 = *(int *)(param_1 + 0x3d8) != param_5;
  if (bVar18) {
    *(int *)(param_1 + 0x3d8) = param_5;
  }
  bVar19 = *(int *)(param_1 + 0x3d4) != iVar10;
  if (bVar19) {
    *(int *)(param_1 + 0x3d4) = iVar10;
  }
  fVar21 = *(float *)(param_1 + 0x3dc);
  bVar2 = fVar21 != *(float *)(param_1 + 0x218);
  if (bVar2) {
    *(float *)(param_1 + 0x218) = fVar21;
  }
  fVar21 = *(float *)(param_1 + 0x3e0);
  bVar3 = *(float *)(param_1 + 0x21c) != fVar21;
  fVar8 = *(float *)(param_1 + 0x21c);
  if (bVar3) {
    *(float *)(param_1 + 0x21c) = fVar21;
    fVar8 = fVar21;
  }
  bVar17 = *(float *)(param_1 + 0x3e4) != *(float *)(param_1 + 0x220);
  if (bVar17) {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x3e4);
  }
  fVar21 = *(float *)(param_1 + 1000);
  bVar4 = fVar21 == *(float *)(param_1 + 0x224);
  if (!bVar4) {
    *(float *)(param_1 + 0x224) = fVar21;
  }
  fVar21 = *(float *)(param_1 + 0x3ec);
  bVar5 = fVar21 == *(float *)(param_1 + 0x228);
  if (!bVar5) {
    *(float *)(param_1 + 0x228) = fVar21;
  }
  fVar21 = *(float *)(param_1 + 0x3f0);
  bVar6 = fVar21 == *(float *)(param_1 + 0x22c);
  if (!bVar6) {
    *(float *)(param_1 + 0x22c) = fVar21;
  }
  bVar20 = *(char *)(param_1 + 0x234) != '\0';
  if (bVar20) {
    *(int32_t *)(param_1 + 0x230) = *(int32_t *)(param_1 + 0x3f4);
    *(int8_t *)(param_1 + 0x234) = 0;
  }
  fVar21 = *(float *)(param_1 + 0x3f8);
  bVar7 = fVar21 != *(float *)(param_1 + 0x238);
  if (bVar7) {
    *(float *)(param_1 + 0x238) = fVar21;
  }
  if (bVar3) {
    *(float *)(param_1 + 0x284) = 1.0 - fVar8;
    *(float *)(param_1 + 0x27c) = fVar8 / *(float *)(param_1 + 0x274);
    *(float *)(param_1 + 0x278) = fVar8 / *(float *)(param_1 + 0x270);
  }
  if (bVar17) {
    FUN_1807a52a0(param_1);
  }
  bVar17 = bVar17 || bVar3;
  if (bVar6 && (bVar5 && bVar4)) {
    if (!bVar2 && !bVar19) goto LAB_1807a61a9;
  }
  else {
    FUN_1807a6960(param_1);
  }
  FUN_1807a66c0(param_1);
  bVar17 = true;
LAB_1807a61a9:
  if (bVar7 || (bVar20 || bVar18)) {
    FUN_1807a51a0(param_1);
    bVar17 = true;
  }
  iVar10 = param_4 + -1;
  if (param_4 != 0) {
    iVar14 = 0;
    if (0 < param_5) {
      pfVar15 = (float *)(param_1 + 0x2d0);
      do {
        if (bVar17) {
          fVar8 = (float)((int)pfVar15[-0x10] + 0x80);
          pfVar15[0x20] = fVar8;
          fVar21 = 0.0;
          if ((int)fVar8 < *(int *)(param_1 + 0x260)) {
            fVar21 = fVar8;
          }
          pfVar15[0x20] = fVar21;
          if ((int)fVar21 < *(int *)(param_1 + 600)) {
            iVar1 = *(int *)(param_1 + 0x254);
            if ((int)fVar21 < iVar1) {
              if ((int)fVar21 < *(int *)(param_1 + 0x250)) {
                iVar1 = *(int *)(param_1 + 0x24c);
                if ((int)fVar21 < iVar1) goto LAB_1807a6365;
                iVar9 = (((int)fVar21 - iVar1) * 0x10) / (*(int *)(param_1 + 0x250) - iVar1);
                lVar12 = (longlong)iVar9;
                if (iVar9 == 0x10) {
                  fVar8 = 0.0;
                }
                else {
                  fVar8 = (*(float *)(param_1 + 0x394 + lVar12 * 4) -
                          *(float *)(param_1 + 0x390 + lVar12 * 4)) * *(float *)(param_1 + 0x278);
                }
                fVar8 = ((float)(int)fVar21 -
                        ((float)iVar9 * *(float *)(param_1 + 0x270) + (float)iVar1)) * fVar8 +
                        *(float *)(param_1 + 0x390 + lVar12 * 4) * *(float *)(param_1 + 0x21c) +
                        *(float *)(param_1 + 0x284);
              }
              else {
                fVar8 = 1.0;
              }
            }
            else {
              iVar9 = (((int)fVar21 - iVar1) * 0x10) / (*(int *)(param_1 + 600) - iVar1);
              iVar11 = 0x10 - iVar9;
              lVar12 = (longlong)iVar11;
              if (iVar11 == 0) {
                fVar8 = 0.0;
              }
              else {
                fVar8 = (*(float *)(param_1 + 0x38c + lVar12 * 4) -
                        *(float *)(param_1 + 0x390 + lVar12 * 4)) * *(float *)(param_1 + 0x27c);
              }
              fVar8 = ((float)(int)fVar21 -
                      ((float)iVar9 * *(float *)(param_1 + 0x274) + (float)iVar1)) * fVar8 +
                      *(float *)(param_1 + 0x390 + lVar12 * 4) * *(float *)(param_1 + 0x21c) +
                      *(float *)(param_1 + 0x284);
            }
          }
          else {
LAB_1807a6365:
            fVar8 = 1.0 - *(float *)(param_1 + 0x21c);
          }
          fVar21 = *pfVar15;
          pfVar15[0x10] = (fVar8 - fVar21) * *(float *)(param_1 + 0x280);
        }
        else {
          lVar12 = (longlong)iVar14;
          FUN_1807a5be0(param_1,pfVar15[-0x10],param_1 + (lVar12 + 0xb4) * 4,
                        param_1 + 0x310 + lVar12 * 4,param_1 + 0x350 + lVar12 * 4);
          fVar21 = *pfVar15;
        }
        *(float *)((longlong)pfVar15 + (param_3 - param_1) + -0x2d0) =
             fVar21 * *(float *)((longlong)pfVar15 + (param_2 - param_1) + -0x2d0);
        pfVar15[-0x10] = (float)((int)pfVar15[-0x10] + 1);
        *pfVar15 = pfVar15[0x10] + *pfVar15;
        if (*(int *)(param_1 + 0x260) <= (int)pfVar15[-0x10]) {
          if (iVar14 == 0) {
            fVar21 = *(float *)(param_1 + 0x264) + *(float *)(param_1 + 0x268);
            *(float *)(param_1 + 0x268) = fVar21;
            if (1.0 <= fVar21) {
              *(int *)(param_1 + 0x26c) = param_5;
              *(float *)(param_1 + 0x268) = fVar21 - 1.0;
            }
          }
          if (*(int *)(param_1 + 0x26c) < 1) {
            pfVar15[-0x10] = 0.0;
          }
          else {
            pfVar15[-0x10] = -NAN;
            *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + -1;
          }
        }
        iVar14 = iVar14 + 1;
        pfVar15 = pfVar15 + 1;
      } while (iVar14 < param_5);
    }
    param_2 = param_2 + lVar13 * 4;
    param_3 = param_3 + lVar13 * 4;
  }
  if (iVar10 != 0) {
    param_3 = param_3 - param_2;
    do {
      iVar10 = iVar10 + -1;
      iVar14 = 0;
      if (0 < param_5) {
        piVar16 = (int *)(param_1 + 0x290);
        do {
          if (piVar16[0x30] <= *piVar16) {
            lVar12 = (longlong)iVar14;
            FUN_1807a5be0(param_1,*piVar16,param_1 + (lVar12 + 0xb4) * 4,
                          param_1 + 0x310 + lVar12 * 4,param_1 + 0x350 + lVar12 * 4);
          }
          *(float *)((param_3 - param_1) + param_2 + -0x290 + (longlong)piVar16) =
               *(float *)((param_2 - param_1) + -0x290 + (longlong)piVar16) * (float)piVar16[0x10];
          *piVar16 = *piVar16 + 1;
          piVar16[0x10] = (int)((float)piVar16[0x20] + (float)piVar16[0x10]);
          if (*(int *)(param_1 + 0x260) <= *piVar16) {
            if (iVar14 == 0) {
              fVar21 = *(float *)(param_1 + 0x264) + *(float *)(param_1 + 0x268);
              *(float *)(param_1 + 0x268) = fVar21;
              if (1.0 <= fVar21) {
                *(int *)(param_1 + 0x26c) = param_5;
                *(float *)(param_1 + 0x268) = fVar21 - 1.0;
              }
            }
            if (*(int *)(param_1 + 0x26c) < 1) {
              *piVar16 = 0;
            }
            else {
              *piVar16 = -1;
              *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + -1;
            }
          }
          iVar14 = iVar14 + 1;
          piVar16 = piVar16 + 1;
        } while (iVar14 < param_5);
      }
      param_2 = param_2 + lVar13 * 4;
    } while (iVar10 != 0);
  }
  return 0;
}



uint64_t FUN_1807a6021(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  longlong in_RAX;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RBX;
  int iVar7;
  longlong unaff_RBP;
  char unaff_SIL;
  int iVar8;
  char unaff_DIL;
  float *pfVar9;
  int *piVar10;
  char in_R10B;
  char in_R11B;
  longlong unaff_R12;
  longlong unaff_R13;
  char unaff_R14B;
  char unaff_R15B;
  float fVar11;
  longlong in_stack_00000090;
  int in_stack_00000098;
  
  iVar4 = *(int *)(in_RAX + 0x6d0);
  iVar7 = (int)unaff_RBP;
  if (*(int *)(unaff_RBX + 0x3d8) != iVar7) {
    *(int *)(unaff_RBX + 0x3d8) = iVar7;
    unaff_SIL = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x3d4) != iVar4) {
    *(int *)(unaff_RBX + 0x3d4) = iVar4;
    unaff_R14B = '\x01';
  }
  if (*(float *)(unaff_RBX + 0x3dc) != *(float *)(unaff_RBX + 0x218)) {
    *(float *)(unaff_RBX + 0x218) = *(float *)(unaff_RBX + 0x3dc);
    unaff_R14B = '\x01';
  }
  fVar11 = *(float *)(unaff_RBX + 0x3e0);
  fVar2 = *(float *)(unaff_RBX + 0x21c);
  if (*(float *)(unaff_RBX + 0x21c) != fVar11) {
    *(float *)(unaff_RBX + 0x21c) = fVar11;
    in_R10B = '\x01';
    fVar2 = fVar11;
  }
  if (*(float *)(unaff_RBX + 0x3e4) != *(float *)(unaff_RBX + 0x220)) {
    *(float *)(unaff_RBX + 0x220) = *(float *)(unaff_RBX + 0x3e4);
    in_R11B = '\x01';
  }
  if (*(float *)(unaff_RBX + 1000) != *(float *)(unaff_RBX + 0x224)) {
    *(float *)(unaff_RBX + 0x224) = *(float *)(unaff_RBX + 1000);
    unaff_DIL = '\x01';
  }
  if (*(float *)(unaff_RBX + 0x3ec) != *(float *)(unaff_RBX + 0x228)) {
    *(float *)(unaff_RBX + 0x228) = *(float *)(unaff_RBX + 0x3ec);
    unaff_DIL = '\x01';
  }
  if (*(float *)(unaff_RBX + 0x3f0) != *(float *)(unaff_RBX + 0x22c)) {
    *(float *)(unaff_RBX + 0x22c) = *(float *)(unaff_RBX + 0x3f0);
    unaff_DIL = '\x01';
  }
  if (*(char *)(unaff_RBX + 0x234) != '\0') {
    unaff_SIL = '\x01';
    *(int32_t *)(unaff_RBX + 0x230) = *(int32_t *)(unaff_RBX + 0x3f4);
    *(int8_t *)(unaff_RBX + 0x234) = 0;
  }
  fVar11 = *(float *)(unaff_RBX + 0x3f8);
  if (fVar11 != *(float *)(unaff_RBX + 0x238)) {
    *(float *)(unaff_RBX + 0x238) = fVar11;
    unaff_SIL = '\x01';
  }
  if (in_R10B != '\0') {
    unaff_R15B = '\x01';
    fVar11 = 1.0 - fVar2;
    *(float *)(unaff_RBX + 0x284) = fVar11;
    *(float *)(unaff_RBX + 0x27c) = fVar2 / *(float *)(unaff_RBX + 0x274);
    *(float *)(unaff_RBX + 0x278) = fVar2 / *(float *)(unaff_RBX + 0x270);
  }
  if (in_R11B != '\0') {
    fVar11 = (float)FUN_1807a52a0();
    unaff_R15B = '\x01';
  }
  if (unaff_DIL == '\0') {
    if (unaff_R14B == '\0') goto LAB_1807a61a9;
  }
  else {
    FUN_1807a6960();
  }
  fVar11 = (float)FUN_1807a66c0();
  unaff_R15B = '\x01';
LAB_1807a61a9:
  if (unaff_SIL != '\0') {
    fVar11 = (float)FUN_1807a51a0();
    unaff_R15B = '\x01';
  }
  iVar4 = in_stack_00000098 + -1;
  if (in_stack_00000098 != 0) {
    iVar8 = 0;
    if (0 < iVar7) {
      pfVar9 = (float *)(unaff_RBX + 0x2d0);
      do {
        if (unaff_R15B == '\0') {
          FUN_1807a5be0();
          fVar11 = *pfVar9;
        }
        else {
          fVar2 = (float)((int)pfVar9[-0x10] + 0x80);
          pfVar9[0x20] = fVar2;
          fVar11 = 0.0;
          if ((int)fVar2 < *(int *)(unaff_RBX + 0x260)) {
            fVar11 = fVar2;
          }
          pfVar9[0x20] = fVar11;
          if ((int)fVar11 < *(int *)(unaff_RBX + 600)) {
            iVar1 = *(int *)(unaff_RBX + 0x254);
            if ((int)fVar11 < iVar1) {
              if ((int)fVar11 < *(int *)(unaff_RBX + 0x250)) {
                iVar1 = *(int *)(unaff_RBX + 0x24c);
                if ((int)fVar11 < iVar1) goto LAB_1807a6365;
                iVar3 = (((int)fVar11 - iVar1) * 0x10) / (*(int *)(unaff_RBX + 0x250) - iVar1);
                lVar6 = (longlong)iVar3;
                if (iVar3 == 0x10) {
                  fVar2 = 0.0;
                }
                else {
                  fVar2 = (*(float *)(unaff_RBX + 0x394 + lVar6 * 4) -
                          *(float *)(unaff_RBX + 0x390 + lVar6 * 4)) * *(float *)(unaff_RBX + 0x278)
                  ;
                }
                fVar2 = ((float)(int)fVar11 -
                        ((float)iVar3 * *(float *)(unaff_RBX + 0x270) + (float)iVar1)) * fVar2 +
                        *(float *)(unaff_RBX + 0x390 + lVar6 * 4) * *(float *)(unaff_RBX + 0x21c) +
                        *(float *)(unaff_RBX + 0x284);
              }
              else {
                fVar2 = 1.0;
              }
            }
            else {
              iVar3 = (((int)fVar11 - iVar1) * 0x10) / (*(int *)(unaff_RBX + 600) - iVar1);
              iVar5 = 0x10 - iVar3;
              lVar6 = (longlong)iVar5;
              if (iVar5 == 0) {
                fVar2 = 0.0;
              }
              else {
                fVar2 = (*(float *)(unaff_RBX + 0x38c + lVar6 * 4) -
                        *(float *)(unaff_RBX + 0x390 + lVar6 * 4)) * *(float *)(unaff_RBX + 0x27c);
              }
              fVar2 = ((float)(int)fVar11 -
                      ((float)iVar3 * *(float *)(unaff_RBX + 0x274) + (float)iVar1)) * fVar2 +
                      *(float *)(unaff_RBX + 0x390 + lVar6 * 4) * *(float *)(unaff_RBX + 0x21c) +
                      *(float *)(unaff_RBX + 0x284);
            }
          }
          else {
LAB_1807a6365:
            fVar2 = 1.0 - *(float *)(unaff_RBX + 0x21c);
          }
          fVar11 = *pfVar9;
          pfVar9[0x10] = (fVar2 - fVar11) * *(float *)(unaff_RBX + 0x280);
        }
        *(float *)((longlong)pfVar9 + (unaff_R12 - unaff_RBX) + -0x2d0) =
             fVar11 * *(float *)((longlong)pfVar9 + (unaff_R13 - unaff_RBX) + -0x2d0);
        pfVar9[-0x10] = (float)((int)pfVar9[-0x10] + 1);
        fVar11 = pfVar9[0x10] + *pfVar9;
        *pfVar9 = fVar11;
        if (*(int *)(unaff_RBX + 0x260) <= (int)pfVar9[-0x10]) {
          if (iVar8 == 0) {
            fVar11 = *(float *)(unaff_RBX + 0x264) + *(float *)(unaff_RBX + 0x268);
            *(float *)(unaff_RBX + 0x268) = fVar11;
            if (1.0 <= fVar11) {
              fVar11 = fVar11 - 1.0;
              *(int *)(unaff_RBX + 0x26c) = iVar7;
              *(float *)(unaff_RBX + 0x268) = fVar11;
            }
          }
          if (*(int *)(unaff_RBX + 0x26c) < 1) {
            pfVar9[-0x10] = 0.0;
          }
          else {
            pfVar9[-0x10] = -NAN;
            *(int *)(unaff_RBX + 0x26c) = *(int *)(unaff_RBX + 0x26c) + -1;
          }
        }
        iVar8 = iVar8 + 1;
        pfVar9 = pfVar9 + 1;
      } while (iVar8 < iVar7);
    }
    unaff_R13 = unaff_R13 + unaff_RBP * 4;
    in_stack_00000090 = in_stack_00000090 + unaff_RBP * 4;
  }
  if (iVar4 != 0) {
    in_stack_00000090 = in_stack_00000090 - unaff_R13;
    do {
      iVar4 = iVar4 + -1;
      iVar8 = 0;
      if (0 < iVar7) {
        piVar10 = (int *)(unaff_RBX + 0x290);
        do {
          if (piVar10[0x30] <= *piVar10) {
            lVar6 = (longlong)iVar8;
            FUN_1807a5be0(fVar11,*piVar10,unaff_RBX + (lVar6 + 0xb4) * 4,
                          unaff_RBX + 0x310 + lVar6 * 4,unaff_RBX + 0x350 + lVar6 * 4);
          }
          fVar11 = *(float *)((unaff_R13 - unaff_RBX) + -0x290 + (longlong)piVar10) *
                   (float)piVar10[0x10];
          *(float *)((in_stack_00000090 - unaff_RBX) + unaff_R13 + -0x290 + (longlong)piVar10) =
               fVar11;
          *piVar10 = *piVar10 + 1;
          piVar10[0x10] = (int)((float)piVar10[0x20] + (float)piVar10[0x10]);
          if (*(int *)(unaff_RBX + 0x260) <= *piVar10) {
            if (iVar8 == 0) {
              fVar11 = *(float *)(unaff_RBX + 0x264) + *(float *)(unaff_RBX + 0x268);
              *(float *)(unaff_RBX + 0x268) = fVar11;
              if (1.0 <= fVar11) {
                fVar11 = fVar11 - 1.0;
                *(int *)(unaff_RBX + 0x26c) = iVar7;
                *(float *)(unaff_RBX + 0x268) = fVar11;
              }
            }
            if (*(int *)(unaff_RBX + 0x26c) < 1) {
              *piVar10 = 0;
            }
            else {
              *piVar10 = -1;
              *(int *)(unaff_RBX + 0x26c) = *(int *)(unaff_RBX + 0x26c) + -1;
            }
          }
          iVar8 = iVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar8 < iVar7);
      }
      unaff_R13 = unaff_R13 + unaff_RBP * 4;
    } while (iVar4 != 0);
  }
  return 0;
}






// 函数: void FUN_1807a65b1(void)
void FUN_1807a65b1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807a66c0(longlong param_1)
void FUN_1807a66c0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float afStack_3e8 [16];
  float afStack_3a8 [194];
  uint64_t uStack_a0;
  int8_t auStack_98 [128];
  int *piStack_18;
  
  piVar4 = (int *)(GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98);
  piStack_18 = piVar4;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x3d8);
  if (0 < (int)*(uint *)(param_1 + 0x3d8)) {
    fVar8 = *(float *)(param_1 + 0x288);
    piVar4 = (int *)(param_1 + 0x350);
    do {
      piVar1 = piVar4 + -0x30;
      iVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      *(float *)((longlong)afStack_3e8 + (-4 - param_1) + (longlong)piVar4) = (float)*piVar1 * fVar8
      ;
      *(float *)((longlong)afStack_3e8 + (0x3c - param_1) + (longlong)piVar4) = (float)iVar5 * fVar8
      ;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  fVar10 = (float)*(int *)(param_1 + 0x3d4) / *(float *)(param_1 + 0x218);
  *(float *)(param_1 + 0x25c) = fVar10;
  iVar5 = (int)fVar10;
  *(float *)(param_1 + 0x288) = 1.0 / fVar10;
  fVar8 = fVar10;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar10)) {
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10;
    auVar9._8_8_ = 0;
    uVar2 = movmskps((int)piVar4,auVar9);
    fVar8 = (float)(int)(iVar5 - (uVar2 & 1));
  }
  iVar5 = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(float *)(param_1 + 0x264) = fVar10 - fVar8;
  *(int *)(param_1 + 0x260) = (int)fVar8;
  fVar8 = (*(float *)(param_1 + 0x240) - *(float *)(param_1 + 0x23c)) * fVar10 *
          *(float *)(param_1 + 0x28c);
  fVar11 = (*(float *)(param_1 + 0x248) - *(float *)(param_1 + 0x244)) * fVar10 *
           *(float *)(param_1 + 0x28c);
  fVar7 = 0.0;
  *(float *)(param_1 + 0x270) = fVar8;
  *(float *)(param_1 + 0x274) = fVar11;
  if (0.0 < fVar8) {
    fVar8 = *(float *)(param_1 + 0x21c) / fVar8;
  }
  else {
    *(int32_t *)(param_1 + 0x270) = 0;
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x278) = fVar8;
  if (0.0 < fVar11) {
    fVar7 = *(float *)(param_1 + 0x21c) / fVar11;
  }
  else {
    *(int32_t *)(param_1 + 0x274) = 0;
  }
  *(float *)(param_1 + 0x27c) = fVar7;
  *(int *)(param_1 + 0x24c) = (int)(*(float *)(param_1 + 0x23c) * fVar10);
  *(int *)(param_1 + 0x250) = (int)(fVar10 * *(float *)(param_1 + 0x240));
  *(int *)(param_1 + 0x254) = (int)(*(float *)(param_1 + 0x244) * fVar10);
  *(int *)(param_1 + 600) = (int)(*(float *)(param_1 + 0x248) * fVar10);
  if (0 < *(int *)(param_1 + 0x3d8)) {
    piVar4 = (int *)(param_1 + 0x350);
    do {
      iVar3 = (int)(*(float *)(((longlong)afStack_3e8 - param_1) + (longlong)piVar4) *
                   *(float *)(param_1 + 0x25c));
      piVar4[-0x30] = iVar3;
      fVar8 = *(float *)(param_1 + 0x25c);
      if (fVar8 <= (float)iVar3) {
        piVar4[-0x30] = 0;
        fVar8 = *(float *)(param_1 + 0x25c);
      }
      iVar3 = (int)(fVar8 * *(float *)(((longlong)afStack_3a8 - param_1) + (longlong)piVar4));
      *piVar4 = iVar3;
      if (*(int *)(param_1 + 0x260) <= iVar3) {
        iVar3 = 0;
      }
      iVar5 = iVar5 + 1;
      *piVar4 = iVar3;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x3d8));
  }
                    // WARNING: Subroutine does not return
  uStack_a0 = 0x1807a6951;
  FUN_1808fc050((ulonglong)piStack_18 ^ (ulonglong)auStack_98);
}







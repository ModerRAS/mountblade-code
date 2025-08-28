#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part584.c - 7 个函数

// 函数: void FUN_18058b8d0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_18058b8d0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int8_t param_10,int8_t param_11,int8_t param_12,
                  int8_t param_13)

{
  FUN_1804317d0(param_1 + 0xf0 + (longlong)param_2 * 0x11b0,param_3,param_4,param_5,param_6,param_7,
                param_8,param_9,param_10,param_11,param_12,param_13,*(int32_t *)(param_1 + 0xa4))
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18058b980(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != -1) {
    iVar1 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),param_2);
    iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
    if (iVar1 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8);
    }
    if (*(short *)(lVar2 + 0x7e) != -1) {
      return (longlong)*(short *)(lVar2 + 0x7e) * 0x68 + _DAT_180c95ed0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058b9f0(longlong param_1,int param_2,float *param_3,float *param_4,float *param_5,
void FUN_18058b9f0(longlong param_1,int param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar9 = _DAT_180c95ed0;
  lVar11 = 0;
  *param_4 = 0.0;
  lVar15 = param_1 + 0xf0 + (longlong)param_2 * 0x11b0;
  *param_3 = 0.0;
  *param_5 = 0.0;
  *param_6 = 0.0;
  lVar14 = (longlong)*(int *)(lVar15 + 0x10);
  if (3 < lVar14) {
    pfVar12 = (float *)(lVar15 + 0x28);
    lVar13 = (lVar14 - 4U >> 2) + 1;
    lVar11 = lVar13 * 4;
    do {
      if (*(short *)(*(longlong *)(pfVar12 + -4) + 0x7e) != -1) {
        fVar1 = *pfVar12;
        lVar10 = (longlong)*(short *)(*(longlong *)(pfVar12 + -4) + 0x7e) * 0x68 + lVar9;
        fVar2 = *(float *)(lVar10 + 0x38);
        fVar3 = *(float *)(lVar10 + 0x3c);
        fVar4 = pfVar12[-1];
        fVar5 = *param_4;
        *param_3 = fVar2 * pfVar12[-1] + *param_3;
        fVar6 = *param_5;
        *param_4 = fVar3 * fVar4 + fVar5;
        fVar4 = *param_6;
        *param_5 = fVar1 * fVar2 + fVar6;
        *param_6 = fVar1 * fVar3 + fVar4;
      }
      if (*(short *)(*(longlong *)(pfVar12 + 0xe) + 0x7e) != -1) {
        fVar1 = pfVar12[0x12];
        lVar10 = (longlong)*(short *)(*(longlong *)(pfVar12 + 0xe) + 0x7e) * 0x68 + lVar9;
        fVar2 = *(float *)(lVar10 + 0x38);
        fVar3 = *(float *)(lVar10 + 0x3c);
        fVar4 = pfVar12[0x11];
        fVar5 = *param_4;
        *param_3 = fVar2 * pfVar12[0x11] + *param_3;
        fVar6 = *param_5;
        *param_4 = fVar3 * fVar4 + fVar5;
        fVar4 = *param_6;
        *param_5 = fVar1 * fVar2 + fVar6;
        *param_6 = fVar1 * fVar3 + fVar4;
      }
      if (*(short *)(*(longlong *)(pfVar12 + 0x20) + 0x7e) != -1) {
        fVar1 = pfVar12[0x23];
        lVar10 = (longlong)*(short *)(*(longlong *)(pfVar12 + 0x20) + 0x7e) * 0x68 + lVar9;
        fVar2 = *(float *)(lVar10 + 0x38);
        fVar3 = *(float *)(lVar10 + 0x3c);
        fVar4 = *param_4;
        *param_3 = fVar2 * fVar1 + *param_3;
        fVar5 = pfVar12[0x24];
        fVar6 = *param_5;
        *param_4 = fVar3 * fVar1 + fVar4;
        fVar1 = *param_6;
        *param_5 = fVar2 * fVar5 + fVar6;
        *param_6 = fVar3 * fVar5 + fVar1;
      }
      if (*(short *)(*(longlong *)(pfVar12 + 0x32) + 0x7e) != -1) {
        fVar1 = pfVar12[0x35];
        lVar10 = (longlong)*(short *)(*(longlong *)(pfVar12 + 0x32) + 0x7e) * 0x68 + lVar9;
        fVar2 = *(float *)(lVar10 + 0x38);
        fVar3 = *(float *)(lVar10 + 0x3c);
        fVar4 = *param_4;
        *param_3 = fVar2 * fVar1 + *param_3;
        fVar5 = pfVar12[0x36];
        fVar6 = *param_5;
        *param_4 = fVar3 * fVar1 + fVar4;
        fVar1 = *param_6;
        *param_5 = fVar2 * fVar5 + fVar6;
        *param_6 = fVar3 * fVar5 + fVar1;
      }
      pfVar12 = pfVar12 + 0x48;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (lVar11 < lVar14) {
    lVar14 = lVar14 - lVar11;
    pfVar12 = (float *)(lVar15 + (lVar11 * 9 + 5) * 8);
    do {
      if (*(short *)(*(longlong *)(pfVar12 + -4) + 0x7e) != -1) {
        lVar11 = (longlong)*(short *)(*(longlong *)(pfVar12 + -4) + 0x7e) * 0x68 + lVar9;
        fVar1 = *(float *)(lVar11 + 0x38);
        fVar2 = *(float *)(lVar11 + 0x3c);
        fVar3 = pfVar12[-1];
        fVar4 = *pfVar12;
        fVar5 = *pfVar12;
        fVar6 = *param_4;
        fVar7 = *param_5;
        fVar8 = *param_6;
        *param_3 = fVar1 * pfVar12[-1] + *param_3;
        *param_4 = fVar2 * fVar3 + fVar6;
        *param_5 = fVar1 * fVar4 + fVar7;
        *param_6 = fVar2 * fVar5 + fVar8;
      }
      pfVar12 = pfVar12 + 0x12;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058bcc0(longlong param_1,int param_2,float *param_3,float *param_4)
void FUN_18058bcc0(longlong param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  lVar4 = 0;
  *param_3 = 0.0;
  fVar10 = 0.0;
  *param_4 = 0.0;
  param_1 = (longlong)param_2 * 0x11b0 + param_1;
  iVar1 = *(int *)(param_1 + 0x100);
  lVar7 = (longlong)iVar1;
  lVar6 = lVar4;
  if (3 < lVar7) {
    pfVar3 = (float *)(param_1 + 0x15c);
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar6 = lVar8 * 4;
    do {
      if ((*(short *)(*(longlong *)(pfVar3 + -0x15) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + -0x15) + 0x7e) * 0x68 +
                   _DAT_180c95ed0, *(float *)(lVar5 + 0x30) != 0.0 ||
          (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        fVar10 = fVar10 + pfVar3[-0x12];
      }
      if ((*(short *)(*(longlong *)(pfVar3 + -3) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + -3) + 0x7e) * 0x68 + _DAT_180c95ed0,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        fVar10 = fVar10 + *pfVar3;
      }
      if ((*(short *)(*(longlong *)(pfVar3 + 0xf) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + 0xf) + 0x7e) * 0x68 + _DAT_180c95ed0,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        fVar10 = fVar10 + pfVar3[0x12];
      }
      if ((*(short *)(*(longlong *)(pfVar3 + 0x21) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + 0x21) + 0x7e) * 0x68 + _DAT_180c95ed0
          , *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        fVar10 = fVar10 + pfVar3[0x24];
      }
      pfVar3 = pfVar3 + 0x48;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (lVar6 < lVar7) {
    lVar8 = lVar7 - lVar6;
    plVar2 = (longlong *)(param_1 + 0x108 + lVar6 * 0x48);
    do {
      if ((*(short *)(*plVar2 + 0x7e) != -1) &&
         ((lVar6 = (longlong)*(short *)(*plVar2 + 0x7e) * 0x68 + _DAT_180c95ed0,
          *(float *)(lVar6 + 0x30) != 0.0 || (*(float *)(lVar6 + 0x2c) != 0.0)))) {
        fVar10 = fVar10 + *(float *)((longlong)plVar2 + 0xc);
      }
      plVar2 = plVar2 + 9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar6 = _DAT_180c95ed0;
  if (3 < lVar7) {
    pfVar3 = (float *)(param_1 + 0x15c);
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar4 = lVar8 * 4;
    do {
      if ((*(short *)(*(longlong *)(pfVar3 + -0x15) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + -0x15) + 0x7e) * 0x68 + lVar6,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        if (fVar10 <= 0.0) {
          fVar9 = 1.0 / (float)iVar1;
        }
        else {
          fVar9 = pfVar3[-0x12] / fVar10;
        }
        *param_3 = fVar9 * *(float *)(lVar5 + 0x2c) + *param_3;
        *param_4 = fVar9 * *(float *)(lVar5 + 0x30) + *param_4;
        lVar6 = _DAT_180c95ed0;
      }
      if ((*(short *)(*(longlong *)(pfVar3 + -3) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + -3) + 0x7e) * 0x68 + lVar6,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        if (fVar10 <= 0.0) {
          fVar9 = 1.0 / (float)iVar1;
        }
        else {
          fVar9 = *pfVar3 / fVar10;
        }
        *param_3 = fVar9 * *(float *)(lVar5 + 0x2c) + *param_3;
        *param_4 = fVar9 * *(float *)(lVar5 + 0x30) + *param_4;
        lVar6 = _DAT_180c95ed0;
      }
      if ((*(short *)(*(longlong *)(pfVar3 + 0xf) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + 0xf) + 0x7e) * 0x68 + lVar6,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        if (fVar10 <= 0.0) {
          fVar9 = 1.0 / (float)iVar1;
        }
        else {
          fVar9 = pfVar3[0x12] / fVar10;
        }
        *param_3 = fVar9 * *(float *)(lVar5 + 0x2c) + *param_3;
        *param_4 = fVar9 * *(float *)(lVar5 + 0x30) + *param_4;
        lVar6 = _DAT_180c95ed0;
      }
      if ((*(short *)(*(longlong *)(pfVar3 + 0x21) + 0x7e) != -1) &&
         ((lVar5 = (longlong)*(short *)(*(longlong *)(pfVar3 + 0x21) + 0x7e) * 0x68 + lVar6,
          *(float *)(lVar5 + 0x30) != 0.0 || (*(float *)(lVar5 + 0x2c) != 0.0)))) {
        if (fVar10 <= 0.0) {
          fVar9 = 1.0 / (float)iVar1;
        }
        else {
          fVar9 = pfVar3[0x24] / fVar10;
        }
        *param_3 = fVar9 * *(float *)(lVar5 + 0x2c) + *param_3;
        *param_4 = fVar9 * *(float *)(lVar5 + 0x30) + *param_4;
        lVar6 = _DAT_180c95ed0;
      }
      pfVar3 = pfVar3 + 0x48;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (lVar4 < lVar7) {
    lVar7 = lVar7 - lVar4;
    plVar2 = (longlong *)(param_1 + 0x108 + lVar4 * 0x48);
    do {
      if ((*(short *)(*plVar2 + 0x7e) != -1) &&
         ((lVar4 = (longlong)*(short *)(*plVar2 + 0x7e) * 0x68 + lVar6,
          *(float *)(lVar4 + 0x30) != 0.0 || (*(float *)(lVar4 + 0x2c) != 0.0)))) {
        if (fVar10 <= 0.0) {
          fVar9 = 1.0 / (float)iVar1;
        }
        else {
          fVar9 = *(float *)((longlong)plVar2 + 0xc) / fVar10;
        }
        *param_3 = fVar9 * *(float *)(lVar4 + 0x2c) + *param_3;
        *param_4 = fVar9 * *(float *)(lVar4 + 0x30) + *param_4;
        lVar6 = _DAT_180c95ed0;
      }
      plVar2 = plVar2 + 9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058c0d0(longlong param_1,int param_2)
void FUN_18058c0d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar1 = (longlong)*(int *)(param_1 + (longlong)param_2 * 0x11b0 + 0x100);
  lVar4 = lVar2;
  if (3 < lVar1) {
    lVar3 = (lVar1 - 4U >> 2) + 1;
    lVar4 = lVar3 * 4;
    do {
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar4 < lVar1) {
    lVar4 = lVar1 - lVar4;
    do {
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (3 < lVar1) {
    lVar4 = (lVar1 - 4U >> 2) + 1;
    lVar2 = lVar4 * 4;
    do {
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar2 < lVar1) {
    lVar1 = lVar1 - lVar2;
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058c410(longlong param_1,uint64_t param_2,float *param_3,float *param_4,float *param_5)
void FUN_18058c410(longlong param_1,uint64_t param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar8 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x12b0);
  bVar3 = false;
  *param_3 = 0.0;
  *param_4 = 0.0;
  *param_5 = -3.1415927;
  lVar4 = _DAT_180c95ed0;
  if (0 < lVar6) {
    pfVar5 = (float *)(param_1 + 0x12c8);
    lVar7 = lVar8;
    do {
      if ((*(short *)(*(longlong *)(pfVar5 + -4) + 0x7e) != -1) && (0.0 < *pfVar5)) {
        bVar3 = true;
        break;
      }
      lVar7 = lVar7 + 1;
      pfVar5 = pfVar5 + 0x12;
    } while (lVar7 < lVar6);
  }
  if (3 < lVar6) {
    pfVar5 = (float *)(param_1 + 0x12c4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    lVar8 = lVar7 * 4;
    do {
      if (*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) != -1) {
        fVar10 = *param_3;
        fVar13 = *param_5;
        lVar9 = (longlong)*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) * 0x68;
        if (bVar3) {
          fVar12 = *(float *)(lVar9 + 0x4c + lVar4);
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          *param_3 = fVar12;
          fVar10 = *(float *)(lVar9 + 0x50 + lVar4);
          if (fVar10 <= fVar13) {
            fVar10 = fVar13;
          }
          *param_4 = fVar11;
          *param_5 = fVar10;
        }
        else {
          fVar12 = *pfVar5;
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          fVar1 = *(float *)(lVar9 + 0x50 + lVar4);
          fVar2 = *param_4;
          *param_3 = fVar12 * *(float *)(lVar9 + 0x4c + lVar4) + fVar10;
          *param_4 = fVar12 * fVar11 + fVar2;
          *param_5 = fVar12 * fVar1 + fVar13;
        }
      }
      if (*(short *)(*(longlong *)(pfVar5 + 0xf) + 0x7e) != -1) {
        fVar10 = *param_3;
        fVar13 = *param_5;
        lVar9 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0xf) + 0x7e) * 0x68;
        if (bVar3) {
          fVar12 = *(float *)(lVar9 + 0x4c + lVar4);
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          *param_3 = fVar12;
          fVar10 = *(float *)(lVar9 + 0x48 + lVar4);
          if (fVar10 <= fVar12) {
            fVar12 = fVar10;
          }
          *param_4 = fVar12;
          fVar10 = *(float *)(lVar9 + 0x50 + lVar4);
          if (fVar10 <= fVar13) {
            fVar10 = fVar13;
          }
          *param_5 = fVar10;
        }
        else {
          fVar12 = pfVar5[0x12];
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          fVar1 = *(float *)(lVar9 + 0x50 + lVar4);
          fVar2 = *param_4;
          *param_3 = fVar12 * *(float *)(lVar9 + 0x4c + lVar4) + fVar10;
          *param_4 = fVar12 * fVar11 + fVar2;
          *param_5 = fVar12 * fVar1 + fVar13;
        }
      }
      if (*(short *)(*(longlong *)(pfVar5 + 0x21) + 0x7e) != -1) {
        fVar10 = *param_3;
        fVar13 = *param_5;
        lVar9 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0x21) + 0x7e) * 0x68;
        if (bVar3) {
          fVar12 = *(float *)(lVar9 + 0x4c + lVar4);
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          *param_3 = fVar12;
          fVar10 = *(float *)(lVar9 + 0x50 + lVar4);
          if (fVar10 <= fVar13) {
            fVar10 = fVar13;
          }
          *param_4 = fVar11;
          *param_5 = fVar10;
        }
        else {
          fVar12 = pfVar5[0x24];
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          fVar1 = *(float *)(lVar9 + 0x50 + lVar4);
          fVar2 = *param_4;
          *param_3 = fVar12 * *(float *)(lVar9 + 0x4c + lVar4) + fVar10;
          *param_4 = fVar12 * fVar11 + fVar2;
          *param_5 = fVar12 * fVar1 + fVar13;
        }
      }
      if (*(short *)(*(longlong *)(pfVar5 + 0x33) + 0x7e) != -1) {
        fVar10 = *param_3;
        fVar13 = *param_5;
        lVar9 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0x33) + 0x7e) * 0x68;
        if (bVar3) {
          fVar12 = *(float *)(lVar9 + 0x4c + lVar4);
          if (fVar10 <= fVar12) {
            fVar10 = fVar12;
          }
          fVar12 = *(float *)(lVar9 + 0x48 + lVar4);
          fVar11 = *(float *)(lVar9 + 0x50 + lVar4);
          if (fVar13 <= fVar11) {
            fVar13 = fVar11;
          }
          if (fVar10 <= fVar12) {
            fVar12 = fVar10;
          }
          *param_3 = fVar10;
          *param_5 = fVar13;
          *param_4 = fVar12;
        }
        else {
          fVar12 = pfVar5[0x36];
          fVar11 = *(float *)(lVar9 + 0x48 + lVar4);
          fVar1 = *(float *)(lVar9 + 0x50 + lVar4);
          fVar2 = *param_4;
          *param_3 = fVar12 * *(float *)(lVar9 + 0x4c + lVar4) + fVar10;
          *param_4 = fVar12 * fVar11 + fVar2;
          *param_5 = fVar12 * fVar1 + fVar13;
        }
      }
      pfVar5 = pfVar5 + 0x48;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lVar8 < lVar6) {
    lVar6 = lVar6 - lVar8;
    pfVar5 = (float *)(param_1 + 0x12c4 + lVar8 * 0x48);
    do {
      if (*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) != -1) {
        fVar10 = *param_3;
        fVar13 = *param_5;
        lVar8 = (longlong)*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) * 0x68;
        if (bVar3) {
          fVar12 = *(float *)(lVar8 + 0x4c + lVar4);
          if (fVar10 <= fVar12) {
            fVar10 = fVar12;
          }
          fVar12 = *(float *)(lVar8 + 0x48 + lVar4);
          fVar11 = *(float *)(lVar8 + 0x50 + lVar4);
          if (fVar13 <= fVar11) {
            fVar13 = fVar11;
          }
          if (fVar10 <= fVar12) {
            fVar12 = fVar10;
          }
          *param_3 = fVar10;
          *param_5 = fVar13;
          *param_4 = fVar12;
        }
        else {
          fVar12 = *pfVar5;
          fVar11 = *(float *)(lVar8 + 0x48 + lVar4);
          fVar1 = *(float *)(lVar8 + 0x50 + lVar4);
          fVar2 = *param_4;
          *param_3 = fVar12 * *(float *)(lVar8 + 0x4c + lVar4) + fVar10;
          *param_4 = fVar12 * fVar11 + fVar2;
          *param_5 = fVar12 * fVar1 + fVar13;
        }
      }
      pfVar5 = pfVar5 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}





// 函数: void FUN_18058c492(longlong param_1,float *param_2,float *param_3)
void FUN_18058c492(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *in_R11;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar5 = (float *)(unaff_RBP + 0x12c4);
  lVar3 = (unaff_RBX - 4U >> 2) + 1;
  lVar4 = lVar3;
  do {
    if (*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) != -1) {
      fVar7 = *param_3;
      fVar10 = *param_2;
      lVar6 = (longlong)*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) * 0x68;
      if (unaff_SIL == '\0') {
        fVar9 = *pfVar5;
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        fVar1 = *(float *)(lVar6 + 0x50 + param_1);
        fVar2 = *in_R11;
        *param_3 = fVar9 * *(float *)(lVar6 + 0x4c + param_1) + fVar7;
        *in_R11 = fVar9 * fVar8 + fVar2;
        *param_2 = fVar9 * fVar1 + fVar10;
      }
      else {
        fVar9 = *(float *)(lVar6 + 0x4c + param_1);
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
        *param_3 = fVar9;
        fVar7 = *(float *)(lVar6 + 0x50 + param_1);
        if (fVar7 <= fVar10) {
          fVar7 = fVar10;
        }
        *in_R11 = fVar8;
        *param_2 = fVar7;
      }
    }
    if (*(short *)(*(longlong *)(pfVar5 + 0xf) + 0x7e) != -1) {
      fVar7 = *param_3;
      fVar10 = *param_2;
      lVar6 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0xf) + 0x7e) * 0x68;
      if (unaff_SIL == '\0') {
        fVar9 = pfVar5[0x12];
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        fVar1 = *(float *)(lVar6 + 0x50 + param_1);
        fVar2 = *in_R11;
        *param_3 = fVar9 * *(float *)(lVar6 + 0x4c + param_1) + fVar7;
        *in_R11 = fVar9 * fVar8 + fVar2;
        *param_2 = fVar9 * fVar1 + fVar10;
      }
      else {
        fVar9 = *(float *)(lVar6 + 0x4c + param_1);
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        *param_3 = fVar9;
        fVar7 = *(float *)(lVar6 + 0x48 + param_1);
        if (fVar7 <= fVar9) {
          fVar9 = fVar7;
        }
        *in_R11 = fVar9;
        fVar7 = *(float *)(lVar6 + 0x50 + param_1);
        if (fVar7 <= fVar10) {
          fVar7 = fVar10;
        }
        *param_2 = fVar7;
      }
    }
    if (*(short *)(*(longlong *)(pfVar5 + 0x21) + 0x7e) != -1) {
      fVar7 = *param_3;
      fVar10 = *param_2;
      lVar6 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0x21) + 0x7e) * 0x68;
      if (unaff_SIL == '\0') {
        fVar9 = pfVar5[0x24];
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        fVar1 = *(float *)(lVar6 + 0x50 + param_1);
        fVar2 = *in_R11;
        *param_3 = fVar9 * *(float *)(lVar6 + 0x4c + param_1) + fVar7;
        *in_R11 = fVar9 * fVar8 + fVar2;
        *param_2 = fVar9 * fVar1 + fVar10;
      }
      else {
        fVar9 = *(float *)(lVar6 + 0x4c + param_1);
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
        *param_3 = fVar9;
        fVar7 = *(float *)(lVar6 + 0x50 + param_1);
        if (fVar7 <= fVar10) {
          fVar7 = fVar10;
        }
        *in_R11 = fVar8;
        *param_2 = fVar7;
      }
    }
    if (*(short *)(*(longlong *)(pfVar5 + 0x33) + 0x7e) != -1) {
      fVar7 = *param_3;
      fVar10 = *param_2;
      lVar6 = (longlong)*(short *)(*(longlong *)(pfVar5 + 0x33) + 0x7e) * 0x68;
      if (unaff_SIL == '\0') {
        fVar9 = pfVar5[0x36];
        fVar8 = *(float *)(lVar6 + 0x48 + param_1);
        fVar1 = *(float *)(lVar6 + 0x50 + param_1);
        fVar2 = *in_R11;
        *param_3 = fVar9 * *(float *)(lVar6 + 0x4c + param_1) + fVar7;
        *in_R11 = fVar9 * fVar8 + fVar2;
        *param_2 = fVar9 * fVar1 + fVar10;
      }
      else {
        fVar9 = *(float *)(lVar6 + 0x4c + param_1);
        if (fVar7 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar9 = *(float *)(lVar6 + 0x48 + param_1);
        fVar8 = *(float *)(lVar6 + 0x50 + param_1);
        if (fVar10 <= fVar8) {
          fVar10 = fVar8;
        }
        if (fVar7 <= fVar9) {
          fVar9 = fVar7;
        }
        *param_3 = fVar7;
        *param_2 = fVar10;
        *in_R11 = fVar9;
      }
    }
    pfVar5 = pfVar5 + 0x48;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (lVar3 * 4 < unaff_RBX) {
    lVar4 = unaff_RBX + lVar3 * -4;
    pfVar5 = (float *)(unaff_RBP + 0x12c4 + lVar3 * 0x120);
    do {
      if (*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) != -1) {
        fVar7 = *param_3;
        fVar10 = *param_2;
        lVar3 = (longlong)*(short *)(*(longlong *)(pfVar5 + -3) + 0x7e) * 0x68;
        if (unaff_SIL == '\0') {
          fVar9 = *pfVar5;
          fVar8 = *(float *)(lVar3 + 0x48 + param_1);
          fVar1 = *(float *)(lVar3 + 0x50 + param_1);
          fVar2 = *in_R11;
          *param_3 = fVar9 * *(float *)(lVar3 + 0x4c + param_1) + fVar7;
          *in_R11 = fVar9 * fVar8 + fVar2;
          *param_2 = fVar9 * fVar1 + fVar10;
        }
        else {
          fVar9 = *(float *)(lVar3 + 0x4c + param_1);
          if (fVar7 <= fVar9) {
            fVar7 = fVar9;
          }
          fVar9 = *(float *)(lVar3 + 0x48 + param_1);
          fVar8 = *(float *)(lVar3 + 0x50 + param_1);
          if (fVar10 <= fVar8) {
            fVar10 = fVar8;
          }
          if (fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          *param_3 = fVar7;
          *param_2 = fVar10;
          *in_R11 = fVar9;
        }
      }
      pfVar5 = pfVar5 + 0x12;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}





// 函数: void FUN_18058c722(longlong param_1,float *param_2,float *param_3)
void FUN_18058c722(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong lVar5;
  float *pfVar6;
  float *in_R11;
  longlong unaff_R14;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (unaff_R14 < unaff_RBX) {
    lVar4 = unaff_RBX - unaff_R14;
    pfVar6 = (float *)(unaff_RBP + 0x12c4 + unaff_R14 * 0x48);
    do {
      if (*(short *)(*(longlong *)(pfVar6 + -3) + 0x7e) != -1) {
        fVar8 = *param_3;
        fVar9 = *param_2;
        lVar5 = (longlong)*(short *)(*(longlong *)(pfVar6 + -3) + 0x7e) * 0x68;
        if (unaff_SIL == '\0') {
          fVar7 = *pfVar6;
          fVar1 = *(float *)(lVar5 + 0x48 + param_1);
          fVar2 = *(float *)(lVar5 + 0x50 + param_1);
          fVar3 = *in_R11;
          *param_3 = fVar7 * *(float *)(lVar5 + 0x4c + param_1) + fVar8;
          *in_R11 = fVar7 * fVar1 + fVar3;
          *param_2 = fVar7 * fVar2 + fVar9;
        }
        else {
          fVar7 = *(float *)(lVar5 + 0x4c + param_1);
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          fVar7 = *(float *)(lVar5 + 0x48 + param_1);
          fVar1 = *(float *)(lVar5 + 0x50 + param_1);
          if (fVar9 <= fVar1) {
            fVar9 = fVar1;
          }
          if (fVar8 <= fVar7) {
            fVar7 = fVar8;
          }
          *param_3 = fVar8;
          *param_2 = fVar9;
          *in_R11 = fVar7;
        }
      }
      pfVar6 = pfVar6 + 0x12;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




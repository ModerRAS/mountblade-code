#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part133.c - 3 个函数

// 函数: void FUN_180130ca8(void)
void FUN_180130ca8(void)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong unaff_RBX;
  uint unaff_EBP;
  char cVar7;
  int iVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  longlong unaff_RDI;
  float unaff_XMM6_Da;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  if ((unaff_EBP & 0x2000000) == 0) {
    puVar5 = (undefined8 *)
             ((longlong)(*(int *)(unaff_RDI + 0x1bc0) + -1) * 0x30 + 0x28 +
             *(longlong *)(unaff_RDI + 0x1bc8));
  }
  else {
    puVar5 = (undefined8 *)(unaff_RDI + 0x118);
  }
  uVar1 = *puVar5;
  cVar7 = (char)unaff_RSI;
  if (((*(char *)(unaff_RDI + 0x1d06) == cVar7) && (*(char *)(unaff_RDI + 0x1d07) != cVar7)) &&
     (*(ulonglong *)(unaff_RDI + 0x1c98) != unaff_RSI)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  fStack0000000000000060 = (float)uVar1;
  if ((fStack0000000000000060 < unaff_XMM6_Da) ||
     (fStack0000000000000064 = (float)((ulonglong)uVar1 >> 0x20),
     fStack0000000000000064 < unaff_XMM6_Da)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(char *)(unaff_RBX + 0xb5) == cVar7) && ((unaff_EBP & 0x2000000) == 0)) {
LAB_180130d35:
    *(int *)(unaff_RBX + 0x3c) = (int)*(short *)(*(longlong *)(unaff_RBX + 0x28) + 0x74);
  }
  else {
    if (bVar2) {
      if (!bVar3) goto LAB_180130d35;
      pfVar4 = &stack0x00000060;
      _fStack0000000000000060 = *puVar5;
    }
    else {
      _fStack0000000000000060 = uVar1;
      pfVar4 = (float *)func_0x000180131890(&stack0x00000060);
    }
    if (0 < *(int *)(_DAT_180c8a9b0 + 0x1600)) {
      pfVar6 = *(float **)(_DAT_180c8a9b0 + 0x1608);
      uVar9 = unaff_RSI;
      do {
        iVar8 = (int)uVar9;
        if ((((*pfVar6 <= *pfVar4) && (pfVar6[1] <= pfVar4[1])) && (*pfVar4 < *pfVar6 + pfVar6[2]))
           && (pfVar4[1] < pfVar6[1] + pfVar6[3])) goto LAB_180130dd5;
        uVar9 = (ulonglong)(iVar8 + 1);
        unaff_RSI = unaff_RSI + 1;
        pfVar6 = pfVar6 + 9;
      } while ((longlong)unaff_RSI < (longlong)*(int *)(_DAT_180c8a9b0 + 0x1600));
    }
    iVar8 = -1;
LAB_180130dd5:
    *(int *)(unaff_RBX + 0x3c) = iVar8;
  }
  *(bool *)(unaff_RBX + 0xae) =
       unaff_RBX == *(longlong *)(*(undefined4 **)(unaff_RBX + 0x28) + 0x1e);
  *(undefined4 *)(unaff_RBX + 0x30) = **(undefined4 **)(unaff_RBX + 0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180130ec0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar6 = 0;
  uVar7 = 0xffffffff;
  fVar17 = 0.001;
  fVar16 = (param_1[3] - param_1[1]) * (param_1[2] - *param_1) * 0.5;
  if (fVar16 <= 1.0) {
    fVar16 = 1.0;
  }
  uVar9 = uVar6;
  if (0 < *(int *)(_DAT_180c8a9b0 + 0x1600)) {
    do {
      if (fVar16 <= fVar17) {
        return uVar7;
      }
      lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1608);
      fVar11 = *(float *)(uVar6 + lVar1);
      fVar10 = *(float *)(uVar6 + 4 + lVar1);
      fVar13 = fVar11 + *(float *)(uVar6 + 8 + lVar1);
      fVar12 = fVar10 + *(float *)(uVar6 + 0xc + lVar1);
      if ((((fVar11 <= *param_1) && (fVar10 <= param_1[1])) && (param_1[2] <= fVar13)) &&
         (param_1[3] <= fVar12)) {
        return uVar9;
      }
      fVar2 = *param_1;
      fVar14 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      fVar15 = fVar10;
      if ((fVar10 <= fVar14) && (fVar15 = fVar12, fVar14 <= fVar12)) {
        fVar15 = fVar14;
      }
      fVar14 = fVar11;
      if ((fVar11 <= fVar2) && (fVar14 = fVar13, fVar2 <= fVar13)) {
        fVar14 = fVar2;
      }
      if ((fVar10 <= fVar4) && (fVar10 = fVar12, fVar4 <= fVar12)) {
        fVar10 = fVar4;
      }
      if ((fVar11 <= fVar3) && (fVar11 = fVar13, fVar3 <= fVar13)) {
        fVar11 = fVar3;
      }
      fVar10 = (fVar11 - fVar14) * (fVar10 - fVar15);
      fVar11 = fVar10;
      if (fVar10 <= fVar17) {
        fVar11 = fVar17;
      }
      uVar5 = (uint)uVar9;
      if (fVar10 < fVar17) {
        uVar5 = (uint)uVar7;
      }
      uVar8 = (uint)uVar9 + 1;
      uVar6 = uVar6 + 0x24;
      uVar7 = (ulonglong)uVar5;
      uVar9 = (ulonglong)uVar8;
      fVar17 = fVar11;
    } while ((int)uVar8 < *(int *)(_DAT_180c8a9b0 + 0x1600));
  }
  return uVar7;
}



ulonglong FUN_180131060(longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *(int *)(param_3 + 0x1cd4) = *(int *)(param_3 + 0x1cd4) + 1;
  if (*(ulonglong *)(param_4 + 0x398) == *(ulonglong *)(param_3 + 0x1c98)) {
    if ((((*param_2 <= *(float *)(param_4 + 0x228) && *(float *)(param_4 + 0x228) != *param_2) ||
         (param_2[1] <= *(float *)(param_4 + 0x22c) && *(float *)(param_4 + 0x22c) != param_2[1]))
        || (*(float *)(param_4 + 0x230) < param_2[2])) || (*(float *)(param_4 + 0x234) < param_2[3])
       ) {
      return *(ulonglong *)(param_3 + 0x1c98) & 0xffffffffffffff00;
    }
    func_0x00018011fd10(param_2);
  }
  if (*(uint *)(param_3 + 0x1d34) < 2) {
    fVar8 = *(float *)(param_4 + 0x22c);
    fVar15 = param_2[1];
    fVar6 = *(float *)(param_4 + 0x234);
    fVar11 = fVar8;
    if ((fVar8 <= fVar15) && (fVar11 = fVar6, fVar15 <= fVar6)) {
      fVar11 = fVar15;
    }
    param_2[1] = fVar11;
    fVar15 = param_2[3];
    if ((fVar8 <= fVar15) && (fVar8 = fVar6, fVar15 <= fVar6)) {
      fVar8 = fVar15;
    }
    fVar15 = param_2[2];
    fVar6 = *param_2;
    param_2[3] = fVar8;
  }
  else {
    fVar15 = *(float *)(param_4 + 0x228);
    fVar8 = *param_2;
    fVar11 = *(float *)(param_4 + 0x230);
    fVar6 = fVar15;
    if ((fVar15 <= fVar8) && (fVar6 = fVar11, fVar8 <= fVar11)) {
      fVar6 = fVar8;
    }
    fVar8 = param_2[2];
    *param_2 = fVar6;
    if ((fVar15 <= fVar8) && (fVar15 = fVar11, fVar8 <= fVar11)) {
      fVar15 = fVar8;
    }
    param_2[2] = fVar15;
  }
  fVar8 = *(float *)(param_3 + 0x1cc4);
  fVar11 = *(float *)(param_3 + 0x1ccc);
  if (fVar8 <= fVar15) {
    if (fVar6 <= fVar11) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fVar6 - fVar11;
    }
  }
  else {
    fVar7 = fVar15 - fVar8;
  }
  fVar10 = param_2[1];
  fVar1 = *(float *)(param_3 + 0x1cc8);
  fVar12 = *(float *)(param_3 + 0x1cd0) - fVar1;
  fVar9 = param_2[3] - fVar10;
  fVar13 = fVar12 * 0.2 + fVar1;
  fVar14 = fVar12 * 0.8 + fVar1;
  fVar12 = fVar9 * 0.8 + fVar10;
  fVar10 = fVar9 * 0.2 + fVar10;
  if (fVar13 <= fVar12) {
    if (fVar14 < fVar10) {
      fVar12 = fVar10 - fVar14;
      goto LAB_18013127c;
    }
    fVar12 = 0.0;
  }
  else {
    fVar12 = fVar12 - fVar13;
LAB_18013127c:
    if ((fVar12 != 0.0) && (fVar7 != 0.0)) {
      if (fVar7 <= 0.0) {
        fVar7 = fVar7 * 0.001 + -1.0;
      }
      else {
        fVar7 = fVar7 * 0.001 + 1.0;
      }
    }
  }
  fVar8 = (fVar6 + fVar15) - (fVar8 + fVar11);
  fVar11 = ABS(fVar12) + ABS(fVar7);
  fVar15 = (param_2[3] + param_2[1]) - (*(float *)(param_3 + 0x1cd0) + fVar1);
  fVar6 = ABS(fVar15) + ABS(fVar8);
  if ((fVar7 == 0.0) && (fVar12 == 0.0)) {
    if ((fVar8 == 0.0) && (fVar15 == 0.0)) {
      uVar4 = (uint)(*(uint *)(param_3 + 0x1ca0) <= *(uint *)(param_4 + 0x144));
      fVar8 = 0.0;
      fVar15 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = fVar6;
      if (ABS(fVar8) <= ABS(fVar15)) goto LAB_180131395;
      uVar4 = (uint)(0.0 < fVar8);
    }
  }
  else {
    fVar8 = fVar7;
    fVar15 = fVar12;
    fVar10 = fVar11;
    if (ABS(fVar7) <= ABS(fVar12)) {
LAB_180131395:
      uVar4 = (0.0 < fVar15) + 2;
    }
    else {
      uVar4 = (uint)(0.0 < fVar7);
    }
  }
  uVar2 = *(uint *)(param_3 + 0x1d2c);
  bVar5 = 0;
  if (uVar4 == uVar2) {
    if (fVar11 < *(float *)(param_1 + 0x10)) {
      *(float *)(param_1 + 0x10) = fVar11;
      *(float *)(param_1 + 0x14) = fVar6;
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    if (fVar11 == *(float *)(param_1 + 0x10)) {
      if (*(float *)(param_1 + 0x14) <= fVar6) {
        if (fVar6 == *(float *)(param_1 + 0x14)) {
          if (uVar2 - 2 < 2) {
            fVar7 = fVar12;
          }
          bVar5 = 0;
          if (fVar7 < 0.0) {
            bVar5 = 1;
          }
        }
      }
      else {
        *(float *)(param_1 + 0x14) = fVar6;
        bVar5 = 1;
      }
    }
  }
  if ((((*(float *)(param_1 + 0x10) != 3.4028235e+38) || (*(float *)(param_1 + 0x18) <= fVar10)) ||
      (*(int *)(param_3 + 0x1cfc) != 1)) ||
     ((*(uint *)(*(longlong *)(param_3 + 0x1c98) + 0xc) & 0x10000000) != 0)) goto LAB_18013148a;
  iVar3 = *(int *)(param_3 + 0x1d2c);
  if (iVar3 == 0) {
joined_r0x000180131473:
    if (0.0 <= fVar8) goto LAB_18013148a;
  }
  else {
    if (iVar3 != 1) {
      fVar8 = fVar15;
      if (iVar3 == 2) goto joined_r0x000180131473;
      if (iVar3 != 3) goto LAB_18013148a;
    }
    if (fVar8 <= 0.0) goto LAB_18013148a;
  }
  *(float *)(param_1 + 0x18) = fVar10;
  bVar5 = 1;
LAB_18013148a:
  return (ulonglong)bVar5;
}



ulonglong FUN_1801310d5(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float *in_R10;
  longlong in_R11;
  bool in_CF;
  bool in_ZF;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (in_CF || in_ZF) {
    fVar8 = *(float *)(param_4 + 0x22c);
    fVar15 = in_R10[1];
    fVar6 = *(float *)(param_4 + 0x234);
    fVar11 = fVar8;
    if ((fVar8 <= fVar15) && (fVar11 = fVar6, fVar15 <= fVar6)) {
      fVar11 = fVar15;
    }
    in_R10[1] = fVar11;
    fVar15 = in_R10[3];
    if ((fVar8 <= fVar15) && (fVar8 = fVar6, fVar15 <= fVar6)) {
      fVar8 = fVar15;
    }
    fVar15 = in_R10[2];
    fVar6 = *in_R10;
    in_R10[3] = fVar8;
  }
  else {
    fVar15 = *(float *)(param_4 + 0x228);
    fVar8 = *in_R10;
    fVar11 = *(float *)(param_4 + 0x230);
    fVar6 = fVar15;
    if ((fVar15 <= fVar8) && (fVar6 = fVar11, fVar8 <= fVar11)) {
      fVar6 = fVar8;
    }
    fVar8 = in_R10[2];
    *in_R10 = fVar6;
    if ((fVar15 <= fVar8) && (fVar15 = fVar11, fVar8 <= fVar11)) {
      fVar15 = fVar8;
    }
    in_R10[2] = fVar15;
  }
  fVar8 = *(float *)(param_3 + 0x1cc4);
  fVar11 = *(float *)(param_3 + 0x1ccc);
  if (fVar8 <= fVar15) {
    if (fVar6 <= fVar11) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fVar6 - fVar11;
    }
  }
  else {
    fVar7 = fVar15 - fVar8;
  }
  fVar10 = in_R10[1];
  fVar1 = *(float *)(param_3 + 0x1cc8);
  fVar12 = *(float *)(param_3 + 0x1cd0) - fVar1;
  fVar9 = in_R10[3] - fVar10;
  fVar13 = fVar12 * 0.2 + fVar1;
  fVar14 = fVar12 * 0.8 + fVar1;
  fVar12 = fVar9 * 0.8 + fVar10;
  fVar10 = fVar9 * 0.2 + fVar10;
  if (fVar13 <= fVar12) {
    if (fVar14 < fVar10) {
      fVar12 = fVar10 - fVar14;
      goto LAB_18013127c;
    }
    fVar12 = 0.0;
  }
  else {
    fVar12 = fVar12 - fVar13;
LAB_18013127c:
    if ((fVar12 != 0.0) && (fVar7 != 0.0)) {
      if (fVar7 <= 0.0) {
        fVar7 = fVar7 * 0.001 + -1.0;
      }
      else {
        fVar7 = fVar7 * 0.001 + 1.0;
      }
    }
  }
  fVar8 = (fVar6 + fVar15) - (fVar8 + fVar11);
  fVar11 = ABS(fVar12) + ABS(fVar7);
  fVar15 = (in_R10[3] + in_R10[1]) - (*(float *)(param_3 + 0x1cd0) + fVar1);
  fVar6 = ABS(fVar15) + ABS(fVar8);
  if ((fVar7 == 0.0) && (fVar12 == 0.0)) {
    if ((fVar8 == 0.0) && (fVar15 == 0.0)) {
      uVar4 = (uint)(*(uint *)(param_3 + 0x1ca0) <= *(uint *)(param_4 + 0x144));
      fVar8 = 0.0;
      fVar15 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = fVar6;
      if (ABS(fVar8) <= ABS(fVar15)) goto LAB_180131395;
      uVar4 = (uint)(0.0 < fVar8);
    }
  }
  else {
    fVar8 = fVar7;
    fVar15 = fVar12;
    fVar10 = fVar11;
    if (ABS(fVar7) <= ABS(fVar12)) {
LAB_180131395:
      uVar4 = (0.0 < fVar15) + 2;
    }
    else {
      uVar4 = (uint)(0.0 < fVar7);
    }
  }
  uVar2 = *(uint *)(param_3 + 0x1d2c);
  bVar5 = 0;
  if (uVar4 == uVar2) {
    if (fVar11 < *(float *)(in_R11 + 0x10)) {
      *(float *)(in_R11 + 0x10) = fVar11;
      *(float *)(in_R11 + 0x14) = fVar6;
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    if (fVar11 == *(float *)(in_R11 + 0x10)) {
      if (*(float *)(in_R11 + 0x14) <= fVar6) {
        if (fVar6 == *(float *)(in_R11 + 0x14)) {
          if (uVar2 - 2 < 2) {
            fVar7 = fVar12;
          }
          bVar5 = 0;
          if (fVar7 < 0.0) {
            bVar5 = 1;
          }
        }
      }
      else {
        *(float *)(in_R11 + 0x14) = fVar6;
        bVar5 = 1;
      }
    }
  }
  if ((((*(float *)(in_R11 + 0x10) != 3.4028235e+38) || (*(float *)(in_R11 + 0x18) <= fVar10)) ||
      (*(int *)(param_3 + 0x1cfc) != 1)) ||
     ((*(uint *)(*(longlong *)(param_3 + 0x1c98) + 0xc) & 0x10000000) != 0)) goto LAB_18013148a;
  iVar3 = *(int *)(param_3 + 0x1d2c);
  if (iVar3 == 0) {
joined_r0x000180131473:
    if (0.0 <= fVar8) goto LAB_18013148a;
  }
  else {
    if (iVar3 != 1) {
      fVar8 = fVar15;
      if (iVar3 == 2) goto joined_r0x000180131473;
      if (iVar3 != 3) goto LAB_18013148a;
    }
    if (fVar8 <= 0.0) goto LAB_18013148a;
  }
  *(float *)(in_R11 + 0x18) = fVar10;
  bVar5 = 1;
LAB_18013148a:
  return (ulonglong)bVar5;
}



undefined1 FUN_18013113e(void)

{
  return 0;
}



ulonglong FUN_180131148(float param_1,float param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float *in_R10;
  longlong in_R11;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar7 = param_1;
  if (param_2 <= param_1) {
    fVar7 = param_2;
  }
  fVar14 = in_R10[2];
  *in_R10 = fVar7;
  if ((unaff_XMM6_Da <= fVar14) && (unaff_XMM6_Da = param_1, fVar14 <= param_1)) {
    unaff_XMM6_Da = fVar14;
  }
  in_R10[2] = unaff_XMM6_Da;
  fVar14 = *(float *)(param_3 + 0x1cc4);
  fVar5 = *(float *)(param_3 + 0x1ccc);
  if (fVar14 <= unaff_XMM6_Da) {
    if (fVar7 <= fVar5) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = fVar7 - fVar5;
    }
  }
  else {
    fVar6 = unaff_XMM6_Da - fVar14;
  }
  fVar9 = in_R10[1];
  fVar13 = *(float *)(param_3 + 0x1cc8);
  fVar10 = *(float *)(param_3 + 0x1cd0) - fVar13;
  fVar8 = in_R10[3] - fVar9;
  fVar11 = fVar10 * 0.2 + fVar13;
  fVar12 = fVar10 * 0.8 + fVar13;
  fVar10 = fVar8 * 0.8 + fVar9;
  fVar9 = fVar8 * 0.2 + fVar9;
  if (fVar11 <= fVar10) {
    if (fVar12 < fVar9) {
      fVar10 = fVar9 - fVar12;
      goto LAB_18013127c;
    }
    fVar10 = 0.0;
  }
  else {
    fVar10 = fVar10 - fVar11;
LAB_18013127c:
    if ((fVar10 != 0.0) && (fVar6 != 0.0)) {
      if (fVar6 <= 0.0) {
        fVar6 = fVar6 * 0.001 + -1.0;
      }
      else {
        fVar6 = fVar6 * 0.001 + 1.0;
      }
    }
  }
  fVar7 = (fVar7 + unaff_XMM6_Da) - (fVar14 + fVar5);
  fVar9 = ABS(fVar10) + ABS(fVar6);
  fVar14 = (in_R10[3] + in_R10[1]) - (*(float *)(param_3 + 0x1cd0) + fVar13);
  fVar5 = ABS(fVar14) + ABS(fVar7);
  if ((fVar6 == 0.0) && (fVar10 == 0.0)) {
    if ((fVar7 == 0.0) && (fVar14 == 0.0)) {
      uVar3 = (uint)(*(uint *)(param_3 + 0x1ca0) <= *(uint *)(param_4 + 0x144));
      fVar7 = 0.0;
      fVar14 = 0.0;
      fVar13 = 0.0;
    }
    else {
      fVar13 = fVar5;
      if (ABS(fVar7) <= ABS(fVar14)) goto LAB_180131395;
      uVar3 = (uint)(0.0 < fVar7);
    }
  }
  else {
    fVar7 = fVar6;
    fVar14 = fVar10;
    fVar13 = fVar9;
    if (ABS(fVar6) <= ABS(fVar10)) {
LAB_180131395:
      uVar3 = (0.0 < fVar14) + 2;
    }
    else {
      uVar3 = (uint)(0.0 < fVar6);
    }
  }
  uVar1 = *(uint *)(param_3 + 0x1d2c);
  bVar4 = 0;
  if (uVar3 == uVar1) {
    if (fVar9 < *(float *)(in_R11 + 0x10)) {
      *(float *)(in_R11 + 0x10) = fVar9;
      *(float *)(in_R11 + 0x14) = fVar5;
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    if (fVar9 == *(float *)(in_R11 + 0x10)) {
      if (*(float *)(in_R11 + 0x14) <= fVar5) {
        if (fVar5 == *(float *)(in_R11 + 0x14)) {
          if (uVar1 - 2 < 2) {
            fVar6 = fVar10;
          }
          bVar4 = 0;
          if (fVar6 < 0.0) {
            bVar4 = 1;
          }
        }
      }
      else {
        *(float *)(in_R11 + 0x14) = fVar5;
        bVar4 = 1;
      }
    }
  }
  if ((((*(float *)(in_R11 + 0x10) != 3.4028235e+38) || (*(float *)(in_R11 + 0x18) <= fVar13)) ||
      (*(int *)(param_3 + 0x1cfc) != 1)) ||
     ((*(uint *)(*(longlong *)(param_3 + 0x1c98) + 0xc) & 0x10000000) != 0)) goto LAB_18013148a;
  iVar2 = *(int *)(param_3 + 0x1d2c);
  if (iVar2 == 0) {
joined_r0x000180131473:
    if (0.0 <= fVar7) goto LAB_18013148a;
  }
  else {
    if (iVar2 != 1) {
      fVar7 = fVar14;
      if (iVar2 == 2) goto joined_r0x000180131473;
      if (iVar2 != 3) goto LAB_18013148a;
    }
    if (fVar7 <= 0.0) goto LAB_18013148a;
  }
  *(float *)(in_R11 + 0x18) = fVar13;
  bVar4 = 1;
LAB_18013148a:
  return (ulonglong)bVar4;
}



ulonglong FUN_180131331(undefined8 param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  longlong in_R8;
  longlong in_R9;
  longlong in_R11;
  bool bVar5;
  bool bVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  
  if (in_XMM5_Da == param_3) {
    if ((in_XMM4_Da == param_3) && (unaff_XMM10_Da == param_3)) {
      uVar3 = (uint)(*(uint *)(in_R8 + 0x1ca0) <= *(uint *)(in_R9 + 0x144));
      in_XMM4_Da = unaff_XMM6_Da;
      unaff_XMM10_Da = unaff_XMM8_Da;
    }
    else {
      unaff_XMM9_Da = param_2;
      if (unaff_XMM11_Da <= unaff_XMM12_Da) {
        bVar6 = unaff_XMM10_Da == param_3;
        bVar5 = unaff_XMM10_Da < param_3;
        goto LAB_180131395;
      }
      uVar3 = (uint)(param_3 < in_XMM4_Da);
    }
  }
  else {
    in_XMM4_Da = param_4;
    unaff_XMM10_Da = in_XMM5_Da;
    unaff_XMM9_Da = unaff_XMM7_Da;
    if (unaff_XMM13_Da <= unaff_XMM14_Da) {
      bVar6 = in_XMM5_Da == param_3;
      bVar5 = in_XMM5_Da < param_3;
LAB_180131395:
      uVar3 = (!bVar5 && !bVar6) + 2;
    }
    else {
      uVar3 = (uint)(param_3 < param_4);
    }
  }
  uVar1 = *(uint *)(in_R8 + 0x1d2c);
  bVar4 = 0;
  if (uVar3 == uVar1) {
    if (unaff_XMM7_Da < *(float *)(in_R11 + 0x10)) {
      *(float *)(in_R11 + 0x10) = unaff_XMM7_Da;
      *(float *)(in_R11 + 0x14) = param_2;
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    if (unaff_XMM7_Da == *(float *)(in_R11 + 0x10)) {
      if (*(float *)(in_R11 + 0x14) <= param_2) {
        if (param_2 == *(float *)(in_R11 + 0x14)) {
          if (uVar1 - 2 < 2) {
            param_4 = in_XMM5_Da;
          }
          bVar4 = 0;
          if (param_4 < param_3) {
            bVar4 = 1;
          }
        }
      }
      else {
        *(float *)(in_R11 + 0x14) = param_2;
        bVar4 = 1;
      }
    }
  }
  if ((((*(float *)(in_R11 + 0x10) != 3.4028235e+38) || (*(float *)(in_R11 + 0x18) <= unaff_XMM9_Da)
       ) || (*(int *)(in_R8 + 0x1cfc) != 1)) ||
     ((*(uint *)(*(longlong *)(in_R8 + 0x1c98) + 0xc) & 0x10000000) != 0)) goto LAB_18013148a;
  iVar2 = *(int *)(in_R8 + 0x1d2c);
  if (iVar2 == 0) {
joined_r0x000180131473:
    if (param_3 <= in_XMM4_Da) goto LAB_18013148a;
  }
  else {
    if (iVar2 != 1) {
      in_XMM4_Da = unaff_XMM10_Da;
      if (iVar2 == 2) goto joined_r0x000180131473;
      if (iVar2 != 3) goto LAB_18013148a;
    }
    if (in_XMM4_Da <= param_3) goto LAB_18013148a;
  }
  *(float *)(in_R11 + 0x18) = unaff_XMM9_Da;
  bVar4 = 1;
LAB_18013148a:
  return (ulonglong)bVar4;
}



undefined1 FUN_1801313c6(undefined8 param_1,undefined1 param_2,float param_3,float param_4)

{
  int iVar1;
  undefined1 unaff_10000014;
  int in_EAX;
  longlong in_R8;
  longlong in_R11;
  float in_XMM1_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  if (unaff_XMM7_Da < *(float *)(in_R11 + 0x10)) {
    *(float *)(in_R11 + 0x10) = unaff_XMM7_Da;
    param_2 = 1;
    *(float *)(in_R11 + 0x14) = in_XMM1_Da;
  }
  else {
    if (unaff_XMM7_Da == *(float *)(in_R11 + 0x10)) {
      if (*(float *)(in_R11 + 0x14) <= in_XMM1_Da) {
        if (in_XMM1_Da == *(float *)(in_R11 + 0x14)) {
          if (in_EAX - 2U < 2) {
            param_4 = in_XMM5_Da;
          }
          param_2 = unaff_10000014;
          if (param_4 < param_3) {
            param_2 = 1;
          }
        }
      }
      else {
        *(float *)(in_R11 + 0x14) = in_XMM1_Da;
        param_2 = 1;
      }
    }
    if ((((*(float *)(in_R11 + 0x10) == 3.4028235e+38) &&
         (unaff_XMM9_Da < *(float *)(in_R11 + 0x18))) && (*(int *)(in_R8 + 0x1cfc) == 1)) &&
       ((*(uint *)(*(longlong *)(in_R8 + 0x1c98) + 0xc) & 0x10000000) == 0)) {
      iVar1 = *(int *)(in_R8 + 0x1d2c);
      if (iVar1 == 0) {
        if (param_3 <= unaff_XMM6_Da) {
          return param_2;
        }
      }
      else if (iVar1 == 1) {
        if (unaff_XMM6_Da <= param_3) {
          return param_2;
        }
      }
      else if (iVar1 == 2) {
        if (param_3 <= unaff_XMM8_Da) {
          return param_2;
        }
      }
      else {
        if (iVar1 != 3) {
          return param_2;
        }
        if (unaff_XMM8_Da <= param_3) {
          return param_2;
        }
      }
      *(float *)(in_R11 + 0x18) = unaff_XMM9_Da;
      param_2 = 1;
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801314c0(longlong param_1,float *param_2,int param_3)
void FUN_1801314c0(longlong param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  lVar10 = _DAT_180c8a9b0;
  uVar5 = *(uint *)(param_1 + 0x1a8);
  fVar11 = param_2[1] - *(float *)(param_1 + 0x44);
  fVar13 = param_2[2] - *(float *)(param_1 + 0x40);
  fVar15 = param_2[3] - *(float *)(param_1 + 0x44);
  fVar16 = *param_2 - *(float *)(param_1 + 0x40);
  if ((*(char *)(_DAT_180c8a9b0 + 0x1d09) != '\0') &&
     (*(int *)(_DAT_180c8a9b0 + 0x1cfc) == *(int *)(param_1 + 0x16c))) {
    uVar7 = uVar5 & 0x10;
    if ((uVar7 == 0) || (*(int *)(_DAT_180c8a9b0 + 0x1d0c) == 0)) {
      *(int *)(_DAT_180c8a9b0 + 0x1d0c) = param_3;
      *(float *)(lVar10 + 0x1d10) = fVar16;
      *(float *)(lVar10 + 0x1d14) = fVar11;
      *(float *)(lVar10 + 0x1d18) = fVar13;
      *(float *)(lVar10 + 0x1d1c) = fVar15;
    }
    if (uVar7 == 0) {
      *(undefined1 *)(lVar10 + 0x1d09) = 0;
      *(bool *)(lVar10 + 0x1d08) = *(char *)(lVar10 + 0x1d21) != '\0';
    }
  }
  if (((*(int *)(lVar10 + 0x1ca0) != param_3) || ((*(byte *)(lVar10 + 0x1d24) & 0x10) != 0)) &&
     ((uVar5 & 8) == 0)) {
    lVar8 = 0x1d38;
    if (param_1 != *(longlong *)(lVar10 + 0x1c98)) {
      lVar8 = 0x1d98;
    }
    piVar9 = (int *)(lVar8 + lVar10);
    if (*(char *)(lVar10 + 0x1d21) != '\0') {
      fStack_28 = *param_2;
      fStack_24 = param_2[1];
      fStack_20 = param_2[2];
      fStack_1c = param_2[3];
      if ((*(int *)(lVar10 + 0x1cfc) == *(int *)(*(longlong *)(lVar10 + 0x1af8) + 0x16c)) &&
         (cVar6 = FUN_180131060(piVar9,&fStack_28), cVar6 != '\0')) {
        *piVar9 = param_3;
        *(longlong *)(piVar9 + 2) = param_1;
        piVar9[7] = (int)fVar16;
        piVar9[8] = (int)fVar11;
        piVar9[9] = (int)fVar13;
        piVar9[10] = (int)fVar15;
      }
    }
    if ((((*(byte *)(lVar10 + 0x1d24) & 0x20) != 0) &&
        (fVar2 = param_2[1], fVar2 < *(float *)(param_1 + 0x234))) &&
       ((fVar3 = param_2[3],
        *(float *)(param_1 + 0x22c) <= fVar3 && fVar3 != *(float *)(param_1 + 0x22c) &&
        ((*param_2 <= *(float *)(param_1 + 0x230) && *(float *)(param_1 + 0x230) != *param_2 &&
         (*(float *)(param_1 + 0x228) < param_2[2])))))) {
      fVar14 = *(float *)(param_1 + 0x22c);
      fVar4 = *(float *)(param_1 + 0x234);
      fVar12 = fVar14;
      if ((fVar14 <= fVar3) && (fVar12 = fVar4, fVar3 <= fVar4)) {
        fVar12 = fVar3;
      }
      if ((fVar14 <= fVar2) && (fVar14 = fVar4, fVar2 <= fVar4)) {
        fVar14 = fVar2;
      }
      if ((fVar3 - fVar2) * 0.7 <= fVar12 - fVar14) {
        fStack_28 = *param_2;
        fStack_24 = param_2[1];
        fStack_20 = param_2[2];
        fStack_1c = param_2[3];
        if ((*(int *)(lVar10 + 0x1cfc) == *(int *)(*(longlong *)(lVar10 + 0x1af8) + 0x16c)) &&
           (cVar6 = FUN_180131060(lVar10 + 0x1d68,&fStack_28), cVar6 != '\0')) {
          *(int *)(lVar10 + 0x1d68) = param_3;
          *(longlong *)(lVar10 + 0x1d70) = param_1;
          *(float *)(lVar10 + 0x1d84) = fVar16;
          *(float *)(lVar10 + 0x1d88) = fVar11;
          *(float *)(lVar10 + 0x1d8c) = fVar13;
          *(float *)(lVar10 + 0x1d90) = fVar15;
        }
      }
    }
  }
  if (*(int *)(lVar10 + 0x1ca0) == param_3) {
    *(longlong *)(lVar10 + 0x1c98) = param_1;
    *(undefined4 *)(lVar10 + 0x1cfc) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined1 *)(lVar10 + 0x1d04) = 1;
    *(undefined4 *)(lVar10 + 0x1d00) = *(undefined4 *)(param_1 + 0x3f4);
    pfVar1 = (float *)(param_1 + ((longlong)*(int *)(param_1 + 0x16c) + 0x3d) * 0x10);
    *pfVar1 = fVar16;
    pfVar1[1] = fVar11;
    pfVar1[2] = fVar13;
    pfVar1[3] = fVar15;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801314fb(int param_1,float *param_2,int param_3,int param_4)
void FUN_1801314fb(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint in_ECX;
  longlong unaff_RBX;
  longlong lVar5;
  int *piVar6;
  int in_R8D;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int unaff_XMM6_Da;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  lVar7 = _DAT_180c8a9b0;
  if ((*(char *)(_DAT_180c8a9b0 + 0x1d09) != '\0') &&
     (*(int *)(_DAT_180c8a9b0 + 0x1cfc) == *(int *)(unaff_RBX + 0x16c))) {
    if (((in_ECX & 0x10) == 0) || (*(int *)(_DAT_180c8a9b0 + 0x1d0c) == 0)) {
      *(int *)(_DAT_180c8a9b0 + 0x1d0c) = in_R8D;
      *(int *)(lVar7 + 0x1d10) = unaff_XMM6_Da;
      *(int *)(lVar7 + 0x1d14) = param_1;
      *(int *)(lVar7 + 0x1d18) = param_3;
      *(int *)(lVar7 + 0x1d1c) = param_4;
    }
    if ((in_ECX & 0x10) == 0) {
      *(undefined1 *)(lVar7 + 0x1d09) = 0;
      *(bool *)(lVar7 + 0x1d08) = *(char *)(lVar7 + 0x1d21) != '\0';
    }
  }
  if (((*(int *)(lVar7 + 0x1ca0) != in_R8D) || ((*(byte *)(lVar7 + 0x1d24) & 0x10) != 0)) &&
     ((in_ECX & 8) == 0)) {
    lVar5 = 0x1d38;
    if (unaff_RBX != *(longlong *)(lVar7 + 0x1c98)) {
      lVar5 = 0x1d98;
    }
    piVar6 = (int *)(lVar5 + lVar7);
    if (*(char *)(lVar7 + 0x1d21) != '\0') {
      fStack0000000000000028 = param_2[2];
      fStack000000000000002c = param_2[3];
      if ((*(int *)(lVar7 + 0x1cfc) == *(int *)(*(longlong *)(lVar7 + 0x1af8) + 0x16c)) &&
         (cVar4 = FUN_180131060(piVar6,&stack0x00000020,lVar7,*(longlong *)(lVar7 + 0x1af8),*param_2
                               ), cVar4 != '\0')) {
        *piVar6 = in_R8D;
        *(longlong *)(piVar6 + 2) = unaff_RBX;
        piVar6[7] = unaff_XMM6_Da;
        piVar6[8] = param_1;
        piVar6[9] = param_3;
        piVar6[10] = param_4;
      }
    }
    if ((((*(byte *)(lVar7 + 0x1d24) & 0x20) != 0) &&
        (fVar1 = param_2[1], fVar1 < *(float *)(unaff_RBX + 0x234))) &&
       ((fVar2 = param_2[3],
        *(float *)(unaff_RBX + 0x22c) <= fVar2 && fVar2 != *(float *)(unaff_RBX + 0x22c) &&
        ((*param_2 <= *(float *)(unaff_RBX + 0x230) && *(float *)(unaff_RBX + 0x230) != *param_2 &&
         (*(float *)(unaff_RBX + 0x228) < param_2[2])))))) {
      fVar9 = *(float *)(unaff_RBX + 0x22c);
      fVar3 = *(float *)(unaff_RBX + 0x234);
      fVar8 = fVar9;
      if ((fVar9 <= fVar2) && (fVar8 = fVar3, fVar2 <= fVar3)) {
        fVar8 = fVar2;
      }
      if ((fVar9 <= fVar1) && (fVar9 = fVar3, fVar1 <= fVar3)) {
        fVar9 = fVar1;
      }
      if ((fVar2 - fVar1) * 0.7 <= fVar8 - fVar9) {
        fStack0000000000000028 = param_2[2];
        fStack000000000000002c = param_2[3];
        if ((*(int *)(lVar7 + 0x1cfc) == *(int *)(*(longlong *)(lVar7 + 0x1af8) + 0x16c)) &&
           (cVar4 = FUN_180131060(lVar7 + 0x1d68,&stack0x00000020,fVar9,
                                  *(longlong *)(lVar7 + 0x1af8),*param_2), cVar4 != '\0')) {
          *(int *)(lVar7 + 0x1d68) = in_R8D;
          *(longlong *)(lVar7 + 0x1d70) = unaff_RBX;
          *(int *)(lVar7 + 0x1d84) = unaff_XMM6_Da;
          *(int *)(lVar7 + 0x1d88) = param_1;
          *(int *)(lVar7 + 0x1d8c) = param_3;
          *(int *)(lVar7 + 0x1d90) = param_4;
        }
      }
    }
  }
  if (*(int *)(lVar7 + 0x1ca0) == in_R8D) {
    *(longlong *)(lVar7 + 0x1c98) = unaff_RBX;
    *(undefined4 *)(lVar7 + 0x1cfc) = *(undefined4 *)(unaff_RBX + 0x16c);
    *(undefined1 *)(lVar7 + 0x1d04) = 1;
    *(undefined4 *)(lVar7 + 0x1d00) = *(undefined4 *)(unaff_RBX + 0x3f4);
    piVar6 = (int *)(unaff_RBX + ((longlong)*(int *)(unaff_RBX + 0x16c) + 0x3d) * 0x10);
    *piVar6 = unaff_XMM6_Da;
    piVar6[1] = param_1;
    piVar6[2] = param_3;
    piVar6[3] = param_4;
  }
  return;
}






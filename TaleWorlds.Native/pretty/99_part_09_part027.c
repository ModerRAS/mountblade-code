#include "TaleWorlds.Native.Split.h"

// 99_part_09_part027.c - 7 个函数

// 函数: void FUN_1805c9ef1(void)
void FUN_1805c9ef1(void)

{
  return;
}



undefined4 FUN_1805c9f10(longlong *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 9 & 1) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
    uVar7 = *(uint *)(param_1 + 2);
  }
  lVar8 = param_1[0x1e];
  if ((lVar8 == 0) ||
     ((*(byte *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar8 + 0xd0)) >> 1
      & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((uVar7 >> 0x1b & 1) == 0) {
    bVar2 = (byte)((uint)*(undefined4 *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)param_1 + 0x11c) = bVar2;
  }
  else {
    bVar2 = *(byte *)((longlong)param_1 + 0x11c);
  }
  if (bVar2 == 0) {
    if ((uVar7 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    if (((char)param_1[0x20] != '\0') && (!bVar1)) {
      if (((char)param_1[0x29b] == '\0') || (1 < *(uint *)((longlong)param_1 + 0x1544))) {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
      lVar8 = *param_1;
      cVar3 = func_0x00018051f640(lVar8);
      if ((cVar3 != '\0') && ((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0)) {
        return 0x3e800000;
      }
      if (cVar9 != '\0') {
        lVar8 = *(longlong *)(lVar8 + 0x20);
        fVar10 = *(float *)(lVar8 + 0x10) - *(float *)((longlong)param_1 + 0x150c);
        fVar11 = *(float *)(lVar8 + 0xc) - *(float *)(param_1 + 0x2a1);
        if (*(float *)(lVar8 + 0x1d0) * 20.25 * *(float *)(lVar8 + 0x1d0) <=
            fVar11 * fVar11 + fVar10 * fVar10) {
          return 0x3e99999a;
        }
        cVar9 = func_0x0001805d1da0(param_1);
        if (cVar9 == '\0') {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(lVar8 + 0x34));
        }
        pfVar4 = (float *)FUN_1805b6cc0(param_1 + 1);
        pfVar5 = (float *)FUN_1805b6920(param_1 + 1);
        pfVar6 = (float *)FUN_1805b6980(param_1 + 1);
        fVar10 = (pfVar5[1] * *(float *)(*(longlong *)(*param_1 + 0x20) + 0x28) +
                 *pfVar5 * *(float *)(*(longlong *)(*param_1 + 0x20) + 0x24)) -
                 (pfVar5[1] * pfVar4[1] + *pfVar5 * *pfVar4);
        if ((0.001 <= fVar10) &&
           ((fVar10 = *pfVar6 / fVar10, fVar10 < 7.0 || ((fVar10 < 21.0 && (*pfVar6 < 50.0)))))) {
          FUN_1805b74c0(param_1 + 1);
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*(longlong *)(*param_1 + 0x20) + 0x34));
        }
      }
      return 0x3f19999a;
    }
  }
  return 0x3a83126f;
}



undefined8 FUN_1805ca08f(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *unaff_RSI;
  float fVar4;
  
  pfVar1 = (float *)FUN_1805b6cc0();
  pfVar2 = (float *)FUN_1805b6920(unaff_RSI + 1);
  pfVar3 = (float *)FUN_1805b6980(unaff_RSI + 1);
  fVar4 = (pfVar2[1] * *(float *)(*(longlong *)(*unaff_RSI + 0x20) + 0x28) +
          *pfVar2 * *(float *)(*(longlong *)(*unaff_RSI + 0x20) + 0x24)) -
          (pfVar2[1] * pfVar1[1] + *pfVar2 * *pfVar1);
  if ((0.001 <= fVar4) &&
     ((fVar4 = *pfVar3 / fVar4, fVar4 < 7.0 || ((fVar4 < 21.0 && (*pfVar3 < 50.0)))))) {
    FUN_1805b74c0(unaff_RSI + 1);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(undefined4 *)(*(longlong *)(*unaff_RSI + 0x20) + 0x34));
  }
  return 0x3f19999a;
}



undefined8 FUN_1805ca0fc(void)

{
  longlong *unaff_RSI;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  if ((7.0 <= in_XMM4_Da / in_XMM3_Da) &&
     ((21.0 <= in_XMM4_Da / in_XMM3_Da || (50.0 <= in_XMM4_Da)))) {
    return 0x3f19999a;
  }
  FUN_1805b74c0(unaff_RSI + 1);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(*unaff_RSI + 0x20) + 0x34));
}






// 函数: void FUN_1805ca126(void)
void FUN_1805ca126(void)

{
  longlong *unaff_RSI;
  
  FUN_1805b74c0(unaff_RSI + 1);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(*unaff_RSI + 0x20) + 0x34));
}



undefined8 FUN_1805ca1a6(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  float unaff_XMM7_Da;
  uint unaff_XMM7_Db;
  float unaff_XMM8_Da;
  
  fVar1 = ABS((float)param_2);
  uVar2 = (uint)((ulonglong)param_2 >> 0x20) & 0x7fffffff;
  if (unaff_XMM8_Da <= 0.7) {
    unaff_XMM8_Da = 0.0;
  }
  if (fVar1 <= 0.7) {
    fVar1 = 0.0;
    uVar2 = 0;
  }
  fVar1 = (fVar1 + unaff_XMM8_Da) * 90.0 - 124.99999;
  if (unaff_XMM7_Da < fVar1) {
    unaff_XMM7_Da = fVar1;
    unaff_XMM7_Db = uVar2;
  }
  return CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
}



undefined4 FUN_1805ca1e7(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ca260(longlong *param_1,longlong param_2,uint param_3,float param_4,char param_5,
void FUN_1805ca260(longlong *param_1,longlong param_2,uint param_3,float param_4,char param_5,
                  undefined8 param_6,char param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint auStackX_18 [2];
  float fStackX_20;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  lVar8 = *(longlong *)(param_2 + 0xd0);
  lVar10 = (longlong)(int)param_3 * 0xa0;
  iVar1 = *(int *)(lVar8 + 0x78 + lVar10);
  iVar11 = 0;
  uVar3 = (*(longlong *)(param_2 + 0xd8) - lVar8) / 0xa0;
  if (uVar3 != 0) {
    puVar9 = (uint *)(lVar8 + 0x58);
    do {
      if ((*puVar9 & 0x80000) != 0) {
        return;
      }
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 0x28;
    } while ((ulonglong)(longlong)iVar11 < uVar3);
  }
  auStackX_18[0] = param_3;
  fStackX_20 = param_4;
  if ((*(byte *)(lVar8 + 0x50 + lVar10) & 1) == 0) {
    if ((*(byte *)(lVar8 + 0x50 + lVar10) >> 1 & 1) == 0) {
      return;
    }
    FUN_1805bda40(param_1,param_2,param_3,auStackX_18);
    return;
  }
  bVar4 = true;
  fVar17 = 4.0;
  bVar13 = (byte)((uint)*(undefined4 *)(*param_1 + 0x564) >> 0x1f) ^ 1;
  if (bVar13 == 0) {
    if (param_5 != '\0') {
      cVar5 = func_0x0001805d1da0(param_1);
      if ((cVar5 != '\0') && (pfVar6 = (float *)FUN_1805b6e50(param_1 + 1), *pfVar6 <= 4.0)) {
        pfVar6 = (float *)FUN_1805b6cc0(param_1 + 1);
        fVar16 = *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2];
        fVar15 = (float)func_0x00018051f9a0(*param_1);
        fVar14 = (float)func_0x00018051f9a0();
        if (fVar16 < fVar15 * fVar14) goto LAB_1805ca608;
      }
      goto LAB_1805ca54f;
    }
LAB_1805ca610:
    lVar8 = *(longlong *)(param_2 + 0xd0);
  }
  else {
    if (((((int)param_1[0x295] == 3) ||
         (lVar8 = *(longlong *)(*param_1 + 0x20),
         *(float *)(lVar8 + 0x84) * *(float *)(lVar8 + 0x84) * 0.09 <=
         *(float *)(lVar8 + 0x24) * *(float *)(lVar8 + 0x24) +
         *(float *)(lVar8 + 0x28) * *(float *)(lVar8 + 0x28) +
         *(float *)(lVar8 + 0x2c) * *(float *)(lVar8 + 0x2c))) ||
        (cVar5 = func_0x0001805d1da0(param_1), cVar5 == '\0')) ||
       ((pfVar6 = (float *)FUN_1805b6e50(param_1 + 1), 4.0 < *pfVar6 &&
        (((int)param_1[0x295] != 1 ||
         (fVar15 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x84),
         pfVar6 = (float *)FUN_1805b6980(param_1 + 1), fVar15 < *pfVar6)))))) {
LAB_1805ca54f:
      bVar4 = false;
    }
    else {
LAB_1805ca608:
      bVar4 = true;
    }
    if (((param_5 == '\0') || (bVar13 != 0)) && (bVar4)) goto LAB_1805ca610;
    lVar8 = *(longlong *)(param_2 + 0xd0);
  }
  if (((*(byte *)(lVar10 + 0x50 + lVar8) >> 4 & 1) != 0) &&
     ((((param_5 == '\0' && (bVar13 == 0)) && (20.0 < fStackX_20)) ||
      ((cVar5 = func_0x0001805d1da0(param_1), cVar5 == '\0' ||
       (pfVar6 = (float *)FUN_1805b6e50(param_1 + 1), 4.0 < *pfVar6)))))) {
    func_0x00018051f640(*param_1);
  }
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  lVar8 = param_1[0x1d];
  if (((lVar8 == 0) || (*(int *)(lVar8 + 0x568) != 1)) ||
     ((*(byte *)((longlong)*(int *)(*(longlong *)(param_2 + 0xd0) + 100 + lVar10) * 0x170 + 0x140 +
                _DAT_180c95ff0) & 0x10) != 0)) goto LAB_1805ca818;
  lVar7 = FUN_180516fe0(*param_1,&fStack_e8,param_2,auStackX_18[0]);
  fVar15 = *(float *)(lVar7 + 4) +
           *(float *)(*(longlong *)(param_2 + 0xd0) + 0x88 + lVar10) * *(float *)(param_2 + 0x48) *
           *(float *)(*(longlong *)(param_2 + 0xd0) + 0x90 + lVar10);
  if ((float)iVar1 <= 0.0) {
    fVar15 = fVar15 * 0.7;
  }
  if (((*(uint *)(lVar8 + 0x56c) & 0x4000) == 0) ||
     (fVar14 = *(float *)(lVar8 + 0x7dc), fVar14 <= 0.0)) goto LAB_1805ca818;
  if ((*(byte *)(lVar8 + 0x51c) & 4) == 0) {
    fVar14 = fVar14 * 0.7;
  }
  if (bVar13 == 0) {
    if (param_5 == '\0') {
      iVar1 = (int)param_1[0x295];
      goto joined_r0x0001805ca7a1;
    }
  }
  else {
    iVar1 = (int)param_1[0x295];
joined_r0x0001805ca7a1:
    if (iVar1 == 1) goto LAB_1805ca818;
  }
  if (bVar4) {
    auStackX_18[0] = (int)(fVar15 / fVar14) + 0x3f800000U >> 1;
  }
LAB_1805ca818:
  lVar7 = _DAT_180c95ff0;
  lVar8 = *(longlong *)(param_2 + 0xd0);
  if ((*(byte *)(lVar8 + 0x50 + lVar10) & 0x40) != 0) {
    if (bVar13 == 0) {
      if ((*(byte *)((longlong)*(int *)(lVar8 + 100 + lVar10) * 0x170 + 0x140 + _DAT_180c95ff0) &
          0x10) != 0) {
        FUN_1805c9f10(param_1);
      }
    }
    else {
      lVar2 = *param_1;
      fVar14 = 0.0;
      lVar12 = *(longlong *)(lVar2 + 0x20);
      fVar15 = *(float *)(lVar12 + 0x8c);
      cVar5 = func_0x0001805d1da0(param_1);
      if (cVar5 != '\0') {
        lVar8 = func_0x0001805d1df0(param_1);
        uStack_dc = 0x7f7fffff;
        uStack_e0 = 0;
        fStack_e8 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0xc) - *(float *)(lVar12 + 0xc);
        fStack_e4 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0x10) - *(float *)(lVar12 + 0x10);
        FUN_1801c24a0(&fStack_e8);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      if (((*(byte *)((longlong)*(int *)(lVar8 + 100 + lVar10) * 0x170 + 0x140 + lVar7) & 0x10) != 0
          ) && (1 < *(int *)(lVar2 + 0x1fc) - 1U)) {
        if (param_7 == '\0') {
          fVar16 = 0.97;
        }
        else if (param_5 == '\0') {
          fVar16 = 0.85;
        }
        else {
          fVar16 = 0.91;
        }
        if ((fVar16 < fVar14) && (fVar15 * fVar15 * 0.25 < 0.0)) {
          if (param_7 != '\0') {
            fVar17 = 6.0;
          }
          if (3.4028235e+38 < fVar17 * *(float *)(lVar12 + 0x50)) {
            FUN_1805a3b20(lVar2 + 0x28,auStackX_18);
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ca439(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_1805ca439(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong in_RAX;
  float *pfVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  longlong lVar9;
  char unaff_R13B;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM12_Da;
  float fVar14;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  undefined4 uStack000000000000002c;
  uint in_stack_00000120;
  float in_stack_00000128;
  char in_stack_00000140;
  
  lVar6 = SUB168(SEXT816(in_RAX) * SEXT816(param_1),8);
  iVar8 = 0;
  lVar7 = lVar6 >> 6;
  lVar6 = lVar6 >> 0x3f;
  if (lVar7 != lVar6) {
    puVar5 = (uint *)(param_4 + 0x58);
    do {
      if ((*puVar5 & 0x80000) != 0) {
        return;
      }
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 0x28;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(lVar7 - lVar6));
  }
  if ((*(byte *)(param_4 + 0x50 + unaff_RSI) & 1) == 0) {
    if ((*(byte *)(param_4 + 0x50 + unaff_RSI) >> 1 & 1) == 0) {
      return;
    }
    FUN_1805bda40();
    return;
  }
  bVar2 = true;
  fVar14 = 4.0;
  bVar10 = (byte)((uint)*(undefined4 *)(*unaff_RDI + 0x564) >> 0x1f) ^ 1;
  if (bVar10 == 0) {
    if (unaff_R13B != '\0') {
      cVar3 = func_0x0001805d1da0();
      if ((cVar3 != '\0') && (pfVar4 = (float *)FUN_1805b6e50(unaff_RDI + 1), *pfVar4 <= 4.0)) {
        pfVar4 = (float *)FUN_1805b6cc0(unaff_RDI + 1);
        fVar13 = *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2];
        fVar12 = (float)func_0x00018051f9a0(*unaff_RDI);
        fVar11 = (float)func_0x00018051f9a0();
        if (fVar13 < fVar12 * fVar11) goto LAB_1805ca608;
      }
      goto LAB_1805ca54f;
    }
LAB_1805ca610:
    lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  }
  else {
    if (((((int)unaff_RDI[0x295] == 3) ||
         (lVar6 = *(longlong *)(*unaff_RDI + 0x20),
         *(float *)(lVar6 + 0x84) * *(float *)(lVar6 + 0x84) * 0.09 <=
         *(float *)(lVar6 + 0x24) * *(float *)(lVar6 + 0x24) +
         *(float *)(lVar6 + 0x28) * *(float *)(lVar6 + 0x28) +
         *(float *)(lVar6 + 0x2c) * *(float *)(lVar6 + 0x2c))) ||
        (cVar3 = func_0x0001805d1da0(), cVar3 == '\0')) ||
       ((pfVar4 = (float *)FUN_1805b6e50(unaff_RDI + 1), 4.0 < *pfVar4 &&
        (((int)unaff_RDI[0x295] != 1 ||
         (fVar12 = *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x84),
         pfVar4 = (float *)FUN_1805b6980(unaff_RDI + 1), fVar12 < *pfVar4)))))) {
LAB_1805ca54f:
      bVar2 = false;
    }
    else {
LAB_1805ca608:
      bVar2 = true;
    }
    if (((unaff_R13B == '\0') || (bVar10 != 0)) && (bVar2)) goto LAB_1805ca610;
    lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  }
  if (((*(byte *)(unaff_RSI + 0x50 + lVar6) >> 4 & 1) != 0) &&
     ((((unaff_R13B == '\0' && (bVar10 == 0)) && (20.0 < in_stack_00000128)) ||
      ((cVar3 = func_0x0001805d1da0(), cVar3 == '\0' ||
       (pfVar4 = (float *)FUN_1805b6e50(unaff_RDI + 1), 4.0 < *pfVar4)))))) {
    func_0x00018051f640(*unaff_RDI);
  }
  if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RDI + 1);
  }
  lVar6 = unaff_RDI[0x1d];
  if (((lVar6 == 0) || (*(int *)(lVar6 + 0x568) != 1)) ||
     ((*(byte *)((longlong)*(int *)(*(longlong *)(unaff_RBP + 0xd0) + 100 + unaff_RSI) * 0x170 +
                 0x140 + _DAT_180c95ff0) & 0x10) != 0)) goto LAB_1805ca818;
  lVar7 = FUN_180516fe0(*unaff_RDI,&fStackX_20);
  fVar12 = *(float *)(lVar7 + 4) +
           *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x88 + unaff_RSI) *
           *(float *)(unaff_RBP + 0x48) *
           *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x90 + unaff_RSI);
  if (unaff_XMM15_Da <= unaff_XMM12_Da) {
    fVar12 = fVar12 * 0.7;
  }
  if (((*(uint *)(lVar6 + 0x56c) & 0x4000) == 0) ||
     (fVar11 = *(float *)(lVar6 + 0x7dc), fVar11 <= unaff_XMM12_Da)) goto LAB_1805ca818;
  if ((*(byte *)(lVar6 + 0x51c) & 4) == 0) {
    fVar11 = fVar11 * 0.7;
  }
  if (bVar10 == 0) {
    if (unaff_R13B == '\0') {
      iVar8 = (int)unaff_RDI[0x295];
      goto joined_r0x0001805ca7a1;
    }
  }
  else {
    iVar8 = (int)unaff_RDI[0x295];
joined_r0x0001805ca7a1:
    if (iVar8 == 1) goto LAB_1805ca818;
  }
  if (bVar2) {
    in_stack_00000120 = (int)(fVar12 / fVar11) + 0x3f800000U >> 1;
  }
LAB_1805ca818:
  lVar7 = _DAT_180c95ff0;
  lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  if ((*(byte *)(lVar6 + 0x50 + unaff_RSI) & 0x40) != 0) {
    if (bVar10 == 0) {
      if ((*(byte *)((longlong)*(int *)(lVar6 + 100 + unaff_RSI) * 0x170 + 0x140 + _DAT_180c95ff0) &
          0x10) != 0) {
        FUN_1805c9f10();
      }
    }
    else {
      lVar1 = *unaff_RDI;
      lVar9 = *(longlong *)(lVar1 + 0x20);
      fVar12 = *(float *)(lVar9 + 0x8c);
      fVar11 = unaff_XMM12_Da;
      cVar3 = func_0x0001805d1da0();
      if (cVar3 != '\0') {
        lVar6 = func_0x0001805d1df0();
        uStack000000000000002c = 0x7f7fffff;
        fStackX_20 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0xc) - *(float *)(lVar9 + 0xc);
        fStackX_24 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x10) - *(float *)(lVar9 + 0x10);
        FUN_1801c24a0(&fStackX_20);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      if (((*(byte *)((longlong)*(int *)(lVar6 + 100 + unaff_RSI) * 0x170 + 0x140 + lVar7) & 0x10)
           != 0) && (1 < *(int *)(lVar1 + 0x1fc) - 1U)) {
        if (in_stack_00000140 == '\0') {
          fVar13 = 0.97;
        }
        else if (unaff_R13B == '\0') {
          fVar13 = 0.85;
        }
        else {
          fVar13 = 0.91;
        }
        if ((fVar13 < fVar11) && (fVar12 * fVar12 * 0.25 < unaff_XMM12_Da)) {
          if (in_stack_00000140 != '\0') {
            fVar14 = 6.0;
          }
          if (3.4028235e+38 < fVar14 * *(float *)(lVar9 + 0x50)) {
            FUN_1805a3b20(lVar1 + 0x28,&stack0x00000120);
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ca487(void)
void FUN_1805ca487(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong in_R9;
  char unaff_R13B;
  byte bVar9;
  bool in_ZF;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM12_Da;
  float fVar13;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  undefined4 uStack000000000000002c;
  uint in_stack_00000120;
  float in_stack_00000128;
  char in_stack_00000140;
  
  if (in_ZF) {
    if ((*(byte *)(in_R9 + 0x50 + unaff_RSI) >> 1 & 1) == 0) {
      return;
    }
    FUN_1805bda40();
    return;
  }
  bVar3 = true;
  fVar13 = 4.0;
  bVar9 = (byte)((uint)*(undefined4 *)(*unaff_RDI + 0x564) >> 0x1f) ^ 1;
  if (bVar9 == 0) {
    if (unaff_R13B != '\0') {
      cVar4 = func_0x0001805d1da0();
      if ((cVar4 != '\0') && (pfVar5 = (float *)FUN_1805b6e50(unaff_RDI + 1), *pfVar5 <= 4.0)) {
        pfVar5 = (float *)FUN_1805b6cc0(unaff_RDI + 1);
        fVar12 = *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] + pfVar5[2] * pfVar5[2];
        fVar11 = (float)func_0x00018051f9a0(*unaff_RDI);
        fVar10 = (float)func_0x00018051f9a0();
        if (fVar12 < fVar11 * fVar10) goto LAB_1805ca608;
      }
      goto LAB_1805ca54f;
    }
LAB_1805ca610:
    lVar7 = *(longlong *)(unaff_RBP + 0xd0);
  }
  else {
    if (((((int)unaff_RDI[0x295] == 3) ||
         (lVar7 = *(longlong *)(*unaff_RDI + 0x20),
         *(float *)(lVar7 + 0x84) * *(float *)(lVar7 + 0x84) * 0.09 <=
         *(float *)(lVar7 + 0x24) * *(float *)(lVar7 + 0x24) +
         *(float *)(lVar7 + 0x28) * *(float *)(lVar7 + 0x28) +
         *(float *)(lVar7 + 0x2c) * *(float *)(lVar7 + 0x2c))) ||
        (cVar4 = func_0x0001805d1da0(), cVar4 == '\0')) ||
       ((pfVar5 = (float *)FUN_1805b6e50(unaff_RDI + 1), 4.0 < *pfVar5 &&
        (((int)unaff_RDI[0x295] != 1 ||
         (fVar11 = *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x84),
         pfVar5 = (float *)FUN_1805b6980(unaff_RDI + 1), fVar11 < *pfVar5)))))) {
LAB_1805ca54f:
      bVar3 = false;
    }
    else {
LAB_1805ca608:
      bVar3 = true;
    }
    if (((unaff_R13B == '\0') || (bVar9 != 0)) && (bVar3)) goto LAB_1805ca610;
    lVar7 = *(longlong *)(unaff_RBP + 0xd0);
  }
  if (((*(byte *)(unaff_RSI + 0x50 + lVar7) >> 4 & 1) != 0) &&
     ((((unaff_R13B == '\0' && (bVar9 == 0)) && (20.0 < in_stack_00000128)) ||
      ((cVar4 = func_0x0001805d1da0(), cVar4 == '\0' ||
       (pfVar5 = (float *)FUN_1805b6e50(unaff_RDI + 1), 4.0 < *pfVar5)))))) {
    func_0x00018051f640(*unaff_RDI);
  }
  if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RDI + 1);
  }
  lVar7 = unaff_RDI[0x1d];
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x568) != 1)) ||
     ((*(byte *)((longlong)*(int *)(*(longlong *)(unaff_RBP + 0xd0) + 100 + unaff_RSI) * 0x170 +
                 0x140 + _DAT_180c95ff0) & 0x10) != 0)) goto LAB_1805ca818;
  lVar6 = FUN_180516fe0(*unaff_RDI,&fStackX_20);
  fVar11 = *(float *)(lVar6 + 4) +
           *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x88 + unaff_RSI) *
           *(float *)(unaff_RBP + 0x48) *
           *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x90 + unaff_RSI);
  if (unaff_XMM15_Da <= unaff_XMM12_Da) {
    fVar11 = fVar11 * 0.7;
  }
  if (((*(uint *)(lVar7 + 0x56c) & 0x4000) == 0) ||
     (fVar10 = *(float *)(lVar7 + 0x7dc), fVar10 <= unaff_XMM12_Da)) goto LAB_1805ca818;
  if ((*(byte *)(lVar7 + 0x51c) & 4) == 0) {
    fVar10 = fVar10 * 0.7;
  }
  if (bVar9 == 0) {
    if (unaff_R13B == '\0') {
      iVar1 = (int)unaff_RDI[0x295];
      goto joined_r0x0001805ca7a1;
    }
  }
  else {
    iVar1 = (int)unaff_RDI[0x295];
joined_r0x0001805ca7a1:
    if (iVar1 == 1) goto LAB_1805ca818;
  }
  if (bVar3) {
    in_stack_00000120 = (int)(fVar11 / fVar10) + 0x3f800000U >> 1;
  }
LAB_1805ca818:
  lVar6 = _DAT_180c95ff0;
  lVar7 = *(longlong *)(unaff_RBP + 0xd0);
  if ((*(byte *)(lVar7 + 0x50 + unaff_RSI) & 0x40) != 0) {
    if (bVar9 == 0) {
      if ((*(byte *)((longlong)*(int *)(lVar7 + 100 + unaff_RSI) * 0x170 + 0x140 + _DAT_180c95ff0) &
          0x10) != 0) {
        FUN_1805c9f10();
      }
    }
    else {
      lVar2 = *unaff_RDI;
      lVar8 = *(longlong *)(lVar2 + 0x20);
      fVar11 = *(float *)(lVar8 + 0x8c);
      fVar10 = unaff_XMM12_Da;
      cVar4 = func_0x0001805d1da0();
      if (cVar4 != '\0') {
        lVar7 = func_0x0001805d1df0();
        uStack000000000000002c = 0x7f7fffff;
        fStackX_20 = *(float *)(*(longlong *)(lVar7 + 0x20) + 0xc) - *(float *)(lVar8 + 0xc);
        fStackX_24 = *(float *)(*(longlong *)(lVar7 + 0x20) + 0x10) - *(float *)(lVar8 + 0x10);
        FUN_1801c24a0(&fStackX_20);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      if (((*(byte *)((longlong)*(int *)(lVar7 + 100 + unaff_RSI) * 0x170 + 0x140 + lVar6) & 0x10)
           != 0) && (1 < *(int *)(lVar2 + 0x1fc) - 1U)) {
        if (in_stack_00000140 == '\0') {
          fVar12 = 0.97;
        }
        else if (unaff_R13B == '\0') {
          fVar12 = 0.85;
        }
        else {
          fVar12 = 0.91;
        }
        if ((fVar12 < fVar10) && (fVar11 * fVar11 * 0.25 < unaff_XMM12_Da)) {
          if (in_stack_00000140 != '\0') {
            fVar13 = 6.0;
          }
          if (3.4028235e+38 < fVar13 * *(float *)(lVar8 + 0x50)) {
            FUN_1805a3b20(lVar2 + 0x28,&stack0x00000120);
          }
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1805ca597(void)
void FUN_1805ca597(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ca5a0(void)
void FUN_1805ca5a0(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  char unaff_R13B;
  char unaff_R14B;
  char unaff_R15B;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  undefined4 uStack000000000000002c;
  uint in_stack_00000120;
  float in_stack_00000128;
  char in_stack_00000140;
  
  if (unaff_R13B == '\0') {
LAB_1805ca610:
    lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  }
  else {
    cVar3 = func_0x0001805d1da0();
    if ((cVar3 == '\0') ||
       (pfVar4 = (float *)FUN_1805b6e50(unaff_RDI + 1), unaff_XMM13_Da < *pfVar4)) {
LAB_1805ca54f:
      unaff_R15B = '\0';
    }
    else {
      pfVar4 = (float *)FUN_1805b6cc0(unaff_RDI + 1);
      fVar10 = *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2];
      fVar8 = (float)func_0x00018051f9a0(*unaff_RDI);
      fVar9 = (float)func_0x00018051f9a0();
      if (fVar8 * fVar9 <= fVar10) goto LAB_1805ca54f;
      unaff_R15B = '\x01';
    }
    if (((unaff_R13B == '\0') || (unaff_R14B != '\0')) && (unaff_R15B != '\0')) goto LAB_1805ca610;
    lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  }
  if (((*(byte *)(unaff_RSI + 0x50 + lVar6) >> 4 & 1) != 0) &&
     ((((unaff_R13B == '\0' && (unaff_R14B == '\0')) && (20.0 < in_stack_00000128)) ||
      ((cVar3 = func_0x0001805d1da0(), cVar3 == '\0' ||
       (pfVar4 = (float *)FUN_1805b6e50(unaff_RDI + 1), unaff_XMM13_Da < *pfVar4)))))) {
    func_0x00018051f640(*unaff_RDI);
  }
  if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RDI + 1);
  }
  lVar6 = unaff_RDI[0x1d];
  if (((lVar6 == 0) || (*(int *)(lVar6 + 0x568) != 1)) ||
     ((*(byte *)((longlong)*(int *)(*(longlong *)(unaff_RBP + 0xd0) + 100 + unaff_RSI) * 0x170 +
                 0x140 + _DAT_180c95ff0) & 0x10) != 0)) goto LAB_1805ca818;
  lVar5 = FUN_180516fe0(*unaff_RDI,&fStackX_20);
  fVar8 = *(float *)(lVar5 + 4) +
          *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x88 + unaff_RSI) *
          *(float *)(unaff_RBP + 0x48) *
          *(float *)(*(longlong *)(unaff_RBP + 0xd0) + 0x90 + unaff_RSI);
  if (unaff_XMM15_Da <= unaff_XMM12_Da) {
    fVar8 = fVar8 * 0.7;
  }
  if (((*(uint *)(lVar6 + 0x56c) & 0x4000) == 0) ||
     (fVar9 = *(float *)(lVar6 + 0x7dc), fVar9 <= unaff_XMM12_Da)) goto LAB_1805ca818;
  if ((*(byte *)(lVar6 + 0x51c) & 4) == 0) {
    fVar9 = fVar9 * 0.7;
  }
  if (unaff_R14B == '\0') {
    if (unaff_R13B == '\0') {
      iVar1 = (int)unaff_RDI[0x295];
      goto joined_r0x0001805ca7a1;
    }
  }
  else {
    iVar1 = (int)unaff_RDI[0x295];
joined_r0x0001805ca7a1:
    if (iVar1 == 1) goto LAB_1805ca818;
  }
  if (unaff_R15B != '\0') {
    in_stack_00000120 = (int)(fVar8 / fVar9) + 0x3f800000U >> 1;
  }
LAB_1805ca818:
  lVar5 = _DAT_180c95ff0;
  lVar6 = *(longlong *)(unaff_RBP + 0xd0);
  if ((*(byte *)(lVar6 + 0x50 + unaff_RSI) & 0x40) != 0) {
    if (unaff_R14B == '\0') {
      if ((*(byte *)((longlong)*(int *)(lVar6 + 100 + unaff_RSI) * 0x170 + 0x140 + _DAT_180c95ff0) &
          0x10) != 0) {
        FUN_1805c9f10();
      }
    }
    else {
      lVar2 = *unaff_RDI;
      lVar7 = *(longlong *)(lVar2 + 0x20);
      fVar8 = *(float *)(lVar7 + 0x8c);
      fVar9 = unaff_XMM12_Da;
      cVar3 = func_0x0001805d1da0();
      if (cVar3 != '\0') {
        lVar6 = func_0x0001805d1df0();
        uStack000000000000002c = 0x7f7fffff;
        fStackX_20 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0xc) - *(float *)(lVar7 + 0xc);
        fStackX_24 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x10) - *(float *)(lVar7 + 0x10);
        FUN_1801c24a0(&fStackX_20);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      if (((*(byte *)((longlong)*(int *)(lVar6 + 100 + unaff_RSI) * 0x170 + 0x140 + lVar5) & 0x10)
           != 0) && (1 < *(int *)(lVar2 + 0x1fc) - 1U)) {
        if (in_stack_00000140 == '\0') {
          fVar10 = 0.97;
        }
        else if (unaff_R13B == '\0') {
          fVar10 = 0.85;
        }
        else {
          fVar10 = 0.91;
        }
        if ((fVar10 < fVar9) && (fVar8 * fVar8 * 0.25 < unaff_XMM12_Da)) {
          if (in_stack_00000140 != '\0') {
            unaff_XMM13_Da = 6.0;
          }
          if (3.4028235e+38 < unaff_XMM13_Da * *(float *)(lVar7 + 0x50)) {
            FUN_1805a3b20(lVar2 + 0x28,&stack0x00000120);
          }
        }
      }
    }
  }
  return;
}







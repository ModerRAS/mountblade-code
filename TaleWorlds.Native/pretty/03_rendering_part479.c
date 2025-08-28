#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part479.c - 7 个函数

// 函数: void FUN_1805249c1(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1805249c1(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  int in_R11D;
  int32_t in_register_0000009c;
  byte bVar6;
  longlong unaff_R15;
  int32_t uVar7;
  
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    param_3 = param_1 + 1;
    piVar5 = (int *)param_1[1];
    while (piVar5 == (int *)0x0) {
      puVar1 = param_3 + 1;
      param_3 = param_3 + 1;
      piVar5 = (int *)*puVar1;
    }
  }
  do {
    if (piVar5 == (int *)param_1[*(longlong *)(unaff_R15 + 0xf8)]) {
      bVar6 = *(byte *)(unaff_RBP + 0x38);
      iVar4 = *(int *)(unaff_RBP + 0x38);
LAB_180524a5a:
      if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) && (iVar4 == -1)) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
      }
      fVar2 = *(float *)(*(longlong *)(unaff_RSI + 0x20) + 0x20);
      if (*(int *)(unaff_RSI + 0x564) == -1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)
                 (*(longlong *)
                   ((longlong)*(int *)(unaff_RSI + 0x564) * 0xa60 + 0x3638 +
                   *(longlong *)(unaff_RSI + 0x8d8)) + 0x20);
      }
      iVar4 = FUN_180557b40(fVar2 * fVar2,uVar7,2,iVar4);
      if (iVar4 == -1) {
        *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
        *(int32_t *)(unaff_RBP + -0x28) = 0;
        *(int32_t *)(unaff_RBP + -0x38) = 0;
        *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
        *(int32_t *)(unaff_RBP + -0x24) = 0;
        *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
        *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
        *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
        *(int8_t *)(unaff_RBP + -0xc) = 0;
        *(int32_t *)(unaff_RBP + -0x34) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + -0x30) = 0x2021;
        FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
      }
      else {
        *(int *)(unaff_RBP + -0x34) = iVar4;
        iVar4 = _DAT_180c92514;
        *(int32_t *)(unaff_RBP + -0x28) = 0;
        *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
        *(uint64_t *)(unaff_RBP + -0x30) = 0;
        *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
        *(int8_t *)(unaff_RBP + -0xc) = 0;
        *(int32_t *)(unaff_RBP + -0x38) = 0;
        *(int32_t *)(unaff_RBP + -0x24) = 0;
        *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
        *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
        *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
        if ((iVar4 == 1) || (iVar4 == 4)) {
          *(uint64_t *)(unaff_RBP + -0x30) = 0x2000;
        }
        uVar7 = FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
        if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) &&
           (*(byte *)(*(longlong *)(unaff_RSI + 0x590) + 0x34bc) != bVar6)) {
          func_0x000180525350(uVar7,bVar6);
          return;
        }
      }
      return;
    }
    iVar4 = piVar5[1];
    if ((in_R11D == iVar4) ||
       ((((in_R10 != -1 && (iVar4 != -1)) &&
         (iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x78) + 4 +
                          CONCAT44(in_register_0000009c,in_R11D) * 8),
         iVar3 == *(int *)(*(longlong *)(unaff_RDI + 0x78) + 4 + (longlong)iVar4 * 8))) &&
        (iVar3 != -1)))) {
      bVar6 = (byte)*piVar5 & 1;
      iVar4 = (*piVar5 >> 1 & 7U) - 1;
      goto LAB_180524a5a;
    }
    piVar5 = *(int **)(piVar5 + 2);
    while (piVar5 == (int *)0x0) {
      puVar1 = param_3 + 1;
      param_3 = param_3 + 1;
      piVar5 = (int *)*puVar1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524af9(int32_t param_1,uint64_t param_2,int8_t param_3)
void FUN_180524af9(int32_t param_1,uint64_t param_2,int8_t param_3)

{
  int32_t in_EAX;
  int iVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int32_t unaff_EDI;
  char unaff_R14B;
  int32_t uVar2;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = param_3;
  iVar1 = FUN_180557b40(param_1,in_EAX,2,unaff_EDI);
  if (iVar1 == -1) {
    *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
    *(int32_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x38) = 0;
    *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
    *(int32_t *)(unaff_RBP + -0x24) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
    *(int8_t *)(unaff_RBP + -0xc) = 0;
    *(int32_t *)(unaff_RBP + -0x34) = 0xffffffff;
    *(uint64_t *)(unaff_RBP + -0x30) = 0x2021;
    FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
  }
  else {
    *(int *)(unaff_RBP + -0x34) = iVar1;
    iVar1 = _DAT_180c92514;
    *(int32_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
    *(uint64_t *)(unaff_RBP + -0x30) = 0;
    *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
    *(int8_t *)(unaff_RBP + -0xc) = 0;
    *(int32_t *)(unaff_RBP + -0x38) = 0;
    *(int32_t *)(unaff_RBP + -0x24) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
    if ((iVar1 == 1) || (iVar1 == 4)) {
      *(uint64_t *)(unaff_RBP + -0x30) = 0x2000;
    }
    uVar2 = FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
    if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) &&
       (*(char *)(*(longlong *)(unaff_RSI + 0x590) + 0x34bc) != unaff_R14B)) {
      func_0x000180525350(uVar2,unaff_R14B);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524bc8(void)
void FUN_180524bc8(void)

{
  int iVar1;
  int32_t in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R14B;
  int32_t uVar2;
  
  *(int32_t *)(unaff_RBP + -0x34) = in_EAX;
  iVar1 = _DAT_180c92514;
  *(int32_t *)(unaff_RBP + -0x28) = 0;
  *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
  *(uint64_t *)(unaff_RBP + -0x30) = 0;
  *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
  *(int8_t *)(unaff_RBP + -0xc) = 0;
  *(int32_t *)(unaff_RBP + -0x38) = 0;
  *(int32_t *)(unaff_RBP + -0x24) = 0;
  *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
  *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
  *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
  if ((iVar1 == 1) || (iVar1 == 4)) {
    *(uint64_t *)(unaff_RBP + -0x30) = 0x2000;
  }
  uVar2 = FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
  if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) &&
     (*(char *)(*(longlong *)(unaff_RSI + 0x590) + 0x34bc) != unaff_R14B)) {
    func_0x000180525350(uVar2,unaff_R14B);
    return;
  }
  return;
}





// 函数: void FUN_180524cf0(longlong param_1)
void FUN_180524cf0(longlong param_1)

{
  if (-1 < *(int *)(param_1 + 0x560)) {
    FUN_180524cf0((longlong)*(int *)(param_1 + 0x560) * 0xa60 +
                  *(longlong *)(param_1 + 0x8d8) + 0x30a0);
  }
  return;
}





// 函数: void FUN_180524d80(longlong param_1,int8_t param_2)
void FUN_180524d80(longlong param_1,int8_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t uVar10;
  int iVar11;
  longlong lVar12;
  int32_t uVar13;
  int iVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float *pfStackX_8;
  char cStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  lVar9 = *(longlong *)(param_1 + 0x20);
  pfVar18 = (float *)(lVar9 + 0xc);
  lVar2 = *(longlong *)(lVar1 + 0x180);
  if ((lVar2 != 0) && (lVar2 != *(longlong *)(param_1 + 0x9d8))) {
    *(longlong *)(param_1 + 0x9d8) = lVar2;
  }
  fVar21 = *(float *)(param_1 + 0x9cc) - *(float *)(lVar9 + 0x10);
  fVar20 = *(float *)(param_1 + 0x9c8) - *pfVar18;
  fVar19 = *(float *)(param_1 + 0x9d0) - *(float *)(lVar9 + 0x14);
  if (fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19 <= 1e-13) {
    return;
  }
  uVar13 = *(int32_t *)(lVar9 + 0x10);
  uVar4 = *(int32_t *)(lVar9 + 0x14);
  uVar5 = *(int32_t *)(lVar9 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x9d8);
  *(float *)(param_1 + 0x9c8) = *pfVar18;
  *(int32_t *)(param_1 + 0x9cc) = uVar13;
  *(int32_t *)(param_1 + 0x9d0) = uVar4;
  *(int32_t *)(param_1 + 0x9d4) = uVar5;
  pfStackX_8 = pfVar18;
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x139) & 1) != 0)) &&
      ((*(byte *)(lVar2 + 0x139) & 2) == 0)) &&
     (cStackX_10 = param_2, cVar6 = FUN_18038d290(lVar2,pfVar18), cVar6 != '\0')) {
    return;
  }
  cVar6 = '\0';
  cStackX_10 = '\0';
  lVar17 = lVar2;
  if (*(int *)(param_1 + 0x570) == 1) {
    cVar15 = '\0';
    cVar7 = func_0x000180522f60(param_1);
    if (((cVar7 != '\0') && (lVar2 != 0)) && (cVar7 = func_0x00018038b3c0(lVar2), cVar7 != '\0')) {
      cVar7 = FUN_18038d0a0(lVar2,pfVar18);
      if (cVar7 != '\0') goto FUN_180525178;
      iVar11 = 0;
      iVar14 = 0;
      if (*(byte *)(lVar2 + 0xa8) != 0) {
        lVar12 = 0x60;
        do {
          iVar14 = iVar11;
          if (1 < *(byte *)(*(longlong *)(lVar2 + lVar12) + 0x20)) break;
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 8;
          iVar14 = 0;
        } while (iVar11 < (int)(uint)*(byte *)(lVar2 + 0xa8));
      }
      puVar3 = *(uint64_t **)(lVar2 + 0x60 + (longlong)iVar14 * 8);
      uVar10 = *(uint64_t *)*puVar3;
      uStackX_20._0_4_ = (float)uVar10;
      uStackX_20._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      lVar12 = *(longlong *)puVar3[1];
      uStackX_18._0_4_ = (float)lVar12;
      uStackX_18._4_4_ = (float)((ulonglong)lVar12 >> 0x20);
      fVar23 = (float)uStackX_18 - *pfVar18;
      uStackX_18._0_4_ = (float)uStackX_18 - (float)uStackX_20;
      fVar21 = uStackX_18._4_4_ - *(float *)(lVar9 + 0x10);
      fVar25 = (float)uStackX_20 - *pfVar18;
      uStackX_18._4_4_ = uStackX_18._4_4_ - uStackX_20._4_4_;
      fVar24 = uStackX_20._4_4_ - *(float *)(lVar9 + 0x10);
      fVar19 = uStackX_18._4_4_ * uStackX_18._4_4_ + (float)uStackX_18 * (float)uStackX_18;
      auVar22 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar20 = auVar22._0_4_;
      fVar19 = fVar20 * 0.5 * (3.0 - fVar19 * fVar20 * fVar20);
      fVar20 = (float)uStackX_18 * fVar19;
      fVar19 = uStackX_18._4_4_ * fVar19;
      uStackX_18 = lVar12;
      uStackX_20 = uVar10;
      if (0.0 < fVar24 * fVar19 + fVar25 * fVar20 != 0.0 < fVar21 * fVar19 + fVar23 * fVar20) {
        cVar15 = '\x01';
      }
    }
    if (cVar15 == '\0') {
      lVar9 = 0;
      if (*(char *)(lVar1 + 0x12bc) != '\0') {
        lVar12 = lVar1 + 0x290;
        iVar14 = *(int *)(lVar1 + 0x12b8);
        cVar6 = *(char *)(lVar1 + 0x12b4);
        lVar1 = *(longlong *)(**(longlong **)(lVar1 + 0x198) + 0x20);
        while( true ) {
          if (cVar6 == '\0') {
            iVar11 = (int)(*(longlong *)(lVar12 + 0x1008) - *(longlong *)(lVar12 + 0x1000) >> 5);
          }
          else {
            iVar11 = *(int *)(lVar12 + 0x1020);
          }
          if (iVar11 <= iVar14) break;
          lVar16 = (longlong)iVar14 * 0x20;
          lVar8 = lVar12;
          if (cVar6 == '\0') {
            lVar8 = *(longlong *)(lVar12 + 0x1000);
          }
          if (*(longlong *)(lVar16 + 0x10 + lVar8) != 0) {
            lVar8 = lVar12;
            if (cVar6 == '\0') {
              lVar8 = *(longlong *)(lVar12 + 0x1000);
            }
            uVar10 = *(uint64_t *)(lVar16 + 0x10 + lVar8);
            cVar7 = FUN_18038d0a0(uVar10,lVar1 + 0xc);
            if ((cVar7 != '\0') &&
               (fVar19 = (float)func_0x00018038d2f0(uVar10,lVar1 + 0xc),
               ABS(*(float *)(lVar1 + 0x14) - fVar19) < 1.5)) {
              lVar9 = lVar12;
              if (cVar6 == '\0') {
                lVar9 = *(longlong *)(lVar12 + 0x1000);
              }
              lVar9 = *(longlong *)(lVar16 + 0x10 + lVar9);
            }
          }
          iVar14 = iVar14 + 1;
        }
      }
      cVar6 = '\0';
      pfVar18 = pfStackX_8;
      if ((lVar9 != 0) && (lVar9 != lVar2)) {
        cVar6 = '\x01';
        *(longlong *)(param_1 + 0x9d8) = lVar9;
        cStackX_10 = '\x01';
        lVar17 = lVar9;
      }
    }
  }
FUN_180525178:
  if ((lVar2 == lVar17) && (cVar7 = func_0x000180522f60(param_1), cVar7 == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if (lVar17 == 0) {
      uVar10 = FUN_180396100(lVar1 + 0x2a68,pfVar18,lVar1 + 0x28c8,1);
      *(uint64_t *)(param_1 + 0x9d8) = uVar10;
    }
    else {
      lVar9 = lVar1 + 0x2a68;
      pfStackX_8 = (float *)CONCAT44(pfStackX_8._4_4_,0x47c35000);
      uStackX_18 = 0;
      uVar13 = 2;
      if ((*(byte *)(lVar17 + 0x139) & 4) != 0) {
        uVar13 = 5;
      }
      iVar14 = FUN_1803965f0(lVar9);
      lVar12 = (longlong)iVar14;
      FUN_18038de80(lVar9,iVar14);
      *(int32_t *)(lVar17 + 0x40 + lVar12 * 4) = *(int32_t *)(lVar1 + 0x2fc0 + lVar12 * 4);
      FUN_180395ea0(lVar9,iVar14,pfVar18,lVar17,uVar13,0,&uStackX_18,&pfStackX_8);
      *(int32_t *)(lVar1 + 0x2fe0 + lVar12 * 4) = 0;
      *(longlong *)(param_1 + 0x9d8) = uStackX_18;
      cVar6 = cStackX_10;
      if (uStackX_18 == 0) {
        uVar10 = FUN_180396100(*(longlong *)(param_1 + 0x660) + 0x2a68,pfVar18,
                               *(longlong *)(param_1 + 0x660) + 0x28c8,1);
        *(uint64_t *)(param_1 + 0x9d8) = uVar10;
        cVar6 = cStackX_10;
      }
    }
  }
  if (((*(int *)(param_1 + 0x570) == 1) && (lVar2 != *(longlong *)(param_1 + 0x9d8))) &&
     (cVar6 == '\0')) {
    FUN_1805e48c0(*(longlong *)(param_1 + 0x6e0) + 0x178,lVar2);
  }
  return;
}





// 函数: void FUN_180524e16(uint64_t param_1)
void FUN_180524e16(uint64_t param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  uint64_t uVar8;
  int iVar9;
  longlong in_RCX;
  longlong lVar10;
  longlong unaff_RBX;
  longlong lVar11;
  int32_t uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *unaff_R13;
  longlong unaff_R14;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float *in_stack_000000f0;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  lVar1 = *(longlong *)(in_RCX + 0x9d8);
  *(int *)(in_RCX + 0x9c8) = (int)param_1;
  *(int *)(in_RCX + 0x9cc) = (int)((ulonglong)param_1 >> 0x20);
  *(int32_t *)(in_RCX + 0x9d0) = in_XMM0_Dc;
  *(int32_t *)(in_RCX + 0x9d4) = in_XMM0_Dd;
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x139) & 1) != 0)) &&
      ((*(byte *)(lVar1 + 0x139) & 2) == 0)) && (cVar5 = FUN_18038d290(lVar1), cVar5 != '\0')) {
    return;
  }
  bVar3 = false;
  bVar4 = false;
  lVar16 = lVar1;
  if (*(int *)(unaff_R14 + 0x570) == 1) {
    cVar6 = '\0';
    cVar5 = func_0x000180522f60();
    if (((cVar5 != '\0') && (lVar1 != 0)) && (cVar5 = func_0x00018038b3c0(lVar1), cVar5 != '\0')) {
      cVar5 = FUN_18038d0a0();
      if (cVar5 != '\0') goto FUN_180525178;
      iVar9 = 0;
      iVar13 = 0;
      if (*(byte *)(lVar1 + 0xa8) != 0) {
        lVar10 = 0x60;
        do {
          iVar13 = iVar9;
          if (1 < *(byte *)(*(longlong *)(lVar1 + lVar10) + 0x20)) break;
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
          iVar13 = 0;
        } while (iVar9 < (int)(uint)*(byte *)(lVar1 + 0xa8));
      }
      puVar2 = *(uint64_t **)(lVar1 + 0x60 + (longlong)iVar13 * 8);
      uVar8 = *(uint64_t *)*puVar2;
      fStack0000000000000108 = (float)uVar8;
      fStack000000000000010c = (float)((ulonglong)uVar8 >> 0x20);
      uVar8 = *(uint64_t *)puVar2[1];
      fStack0000000000000100 = (float)uVar8;
      fStack0000000000000104 = (float)((ulonglong)uVar8 >> 0x20);
      fVar21 = fStack0000000000000100 - fStack0000000000000108;
      fVar20 = fStack0000000000000104 - fStack000000000000010c;
      fVar17 = fVar20 * fVar20 + fVar21 * fVar21;
      auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar18 = auVar19._0_4_;
      fVar17 = fVar18 * 0.5 * (3.0 - fVar17 * fVar18 * fVar18);
      fVar21 = fVar21 * fVar17;
      fVar20 = fVar20 * fVar17;
      if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar20 +
                (fStack0000000000000108 - *unaff_R13) * fVar21 !=
          0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar20 +
                (fStack0000000000000100 - *unaff_R13) * fVar21) {
        cVar6 = '\x01';
      }
    }
    if (cVar6 == '\0') {
      lVar10 = 0;
      if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
        lVar14 = unaff_RBX + 0x290;
        iVar13 = *(int *)(unaff_RBX + 0x12b8);
        cVar5 = *(char *)(unaff_RBX + 0x12b4);
        lVar11 = *(longlong *)(**(longlong **)(unaff_RBX + 0x198) + 0x20);
        while( true ) {
          if (cVar5 == '\0') {
            iVar9 = (int)(*(longlong *)(lVar14 + 0x1008) - *(longlong *)(lVar14 + 0x1000) >> 5);
          }
          else {
            iVar9 = *(int *)(lVar14 + 0x1020);
          }
          if (iVar9 <= iVar13) break;
          lVar15 = (longlong)iVar13 * 0x20;
          lVar7 = lVar14;
          if (cVar5 == '\0') {
            lVar7 = *(longlong *)(lVar14 + 0x1000);
          }
          if (*(longlong *)(lVar15 + 0x10 + lVar7) != 0) {
            lVar7 = lVar14;
            if (cVar5 == '\0') {
              lVar7 = *(longlong *)(lVar14 + 0x1000);
            }
            uVar8 = *(uint64_t *)(lVar15 + 0x10 + lVar7);
            cVar6 = FUN_18038d0a0(uVar8,lVar11 + 0xc);
            if ((cVar6 != '\0') &&
               (fVar17 = (float)func_0x00018038d2f0(uVar8,lVar11 + 0xc),
               ABS(*(float *)(lVar11 + 0x14) - fVar17) < 1.5)) {
              lVar10 = lVar14;
              if (cVar5 == '\0') {
                lVar10 = *(longlong *)(lVar14 + 0x1000);
              }
              lVar10 = *(longlong *)(lVar15 + 0x10 + lVar10);
            }
          }
          iVar13 = iVar13 + 1;
        }
      }
      bVar3 = false;
      unaff_R13 = in_stack_000000f0;
      if ((lVar10 != 0) && (lVar10 != lVar1)) {
        bVar3 = true;
        *(longlong *)(unaff_R14 + 0x9d8) = lVar10;
        bVar4 = true;
        lVar16 = lVar10;
      }
    }
  }
FUN_180525178:
  if ((lVar1 == lVar16) && (cVar5 = func_0x000180522f60(), cVar5 == '\0')) {
    lVar10 = *(longlong *)(unaff_R14 + 0x660);
    if (lVar16 == 0) {
      uVar8 = FUN_180396100(lVar10 + 0x2a68,unaff_R13,lVar10 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar8;
    }
    else {
      lVar14 = lVar10 + 0x2a68;
      uVar12 = 2;
      if ((*(byte *)(lVar16 + 0x139) & 4) != 0) {
        uVar12 = 5;
      }
      iVar13 = FUN_1803965f0(lVar14);
      lVar11 = (longlong)iVar13;
      FUN_18038de80(lVar14,iVar13);
      *(int32_t *)(lVar16 + 0x40 + lVar11 * 4) = *(int32_t *)(lVar10 + 0x2fc0 + lVar11 * 4);
      FUN_180395ea0(lVar14,iVar13,unaff_R13,lVar16,uVar12);
      *(int32_t *)(lVar10 + 0x2fe0 + lVar11 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar8 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(longlong *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar8;
      bVar3 = bVar4;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (lVar1 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (!bVar3)) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178,lVar1);
  }
  return;
}





// 函数: void FUN_180524e67(void)
void FUN_180524e67(void)

{
  uint64_t *puVar1;
  char cVar2;
  longlong lVar3;
  uint64_t uVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RBX;
  longlong lVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float unaff_XMM11_Da;
  float *in_stack_000000f0;
  char cStack00000000000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  cVar9 = '\0';
  cStack00000000000000f8 = '\0';
  lVar14 = unaff_R15;
  if (*(int *)(unaff_R14 + 0x570) == 1) {
    cVar11 = '\0';
    cVar2 = func_0x000180522f60();
    if (((cVar2 != '\0') && (unaff_R15 != 0)) && (cVar2 = func_0x00018038b3c0(), cVar2 != '\0')) {
      cVar2 = FUN_18038d0a0();
      if (cVar2 != '\0') goto FUN_180525178;
      iVar5 = 0;
      iVar10 = 0;
      if (*(byte *)(unaff_R15 + 0xa8) != 0) {
        lVar6 = 0x60;
        do {
          iVar10 = iVar5;
          if (1 < *(byte *)(*(longlong *)(unaff_R15 + lVar6) + 0x20)) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
          iVar10 = 0;
        } while (iVar5 < (int)(uint)*(byte *)(unaff_R15 + 0xa8));
      }
      puVar1 = *(uint64_t **)(unaff_R15 + 0x60 + (longlong)iVar10 * 8);
      uVar4 = *(uint64_t *)*puVar1;
      fStack0000000000000108 = (float)uVar4;
      fStack000000000000010c = (float)((ulonglong)uVar4 >> 0x20);
      uVar4 = *(uint64_t *)puVar1[1];
      fStack0000000000000100 = (float)uVar4;
      fStack0000000000000104 = (float)((ulonglong)uVar4 >> 0x20);
      fVar19 = fStack0000000000000100 - fStack0000000000000108;
      fVar18 = fStack0000000000000104 - fStack000000000000010c;
      fVar15 = fVar18 * fVar18 + fVar19 * fVar19;
      auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar16 = auVar17._0_4_;
      fVar15 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
      fVar19 = fVar19 * fVar15;
      fVar18 = fVar18 * fVar15;
      if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar18 +
                (fStack0000000000000108 - *unaff_R13) * fVar19 !=
          0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar18 +
                (fStack0000000000000100 - *unaff_R13) * fVar19) {
        cVar11 = '\x01';
      }
    }
    if (cVar11 == '\0') {
      lVar6 = 0;
      if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
        lVar12 = unaff_RBX + 0x290;
        iVar10 = *(int *)(unaff_RBX + 0x12b8);
        cVar9 = *(char *)(unaff_RBX + 0x12b4);
        lVar7 = *(longlong *)(**(longlong **)(unaff_RBX + 0x198) + 0x20);
        while( true ) {
          if (cVar9 == '\0') {
            iVar5 = (int)(*(longlong *)(lVar12 + 0x1008) - *(longlong *)(lVar12 + 0x1000) >> 5);
          }
          else {
            iVar5 = *(int *)(lVar12 + 0x1020);
          }
          if (iVar5 <= iVar10) break;
          lVar13 = (longlong)iVar10 * 0x20;
          lVar3 = lVar12;
          if (cVar9 == '\0') {
            lVar3 = *(longlong *)(lVar12 + 0x1000);
          }
          if (*(longlong *)(lVar13 + 0x10 + lVar3) != 0) {
            lVar3 = lVar12;
            if (cVar9 == '\0') {
              lVar3 = *(longlong *)(lVar12 + 0x1000);
            }
            uVar4 = *(uint64_t *)(lVar13 + 0x10 + lVar3);
            cVar2 = FUN_18038d0a0(uVar4,lVar7 + 0xc);
            if ((cVar2 != '\0') &&
               (fVar15 = (float)func_0x00018038d2f0(uVar4,lVar7 + 0xc),
               ABS(*(float *)(lVar7 + 0x14) - fVar15) < unaff_XMM11_Da)) {
              lVar6 = lVar12;
              if (cVar9 == '\0') {
                lVar6 = *(longlong *)(lVar12 + 0x1000);
              }
              lVar6 = *(longlong *)(lVar13 + 0x10 + lVar6);
            }
          }
          iVar10 = iVar10 + 1;
        }
      }
      cVar9 = '\0';
      unaff_R13 = in_stack_000000f0;
      if ((lVar6 != 0) && (lVar6 != unaff_R15)) {
        cVar9 = '\x01';
        *(longlong *)(unaff_R14 + 0x9d8) = lVar6;
        cStack00000000000000f8 = '\x01';
        lVar14 = lVar6;
      }
    }
  }
FUN_180525178:
  if ((unaff_R15 == lVar14) && (cVar2 = func_0x000180522f60(), cVar2 == '\0')) {
    lVar6 = *(longlong *)(unaff_R14 + 0x660);
    if (lVar14 == 0) {
      uVar4 = FUN_180396100(lVar6 + 0x2a68,unaff_R13,lVar6 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar4;
    }
    else {
      lVar12 = lVar6 + 0x2a68;
      uVar8 = 2;
      if ((*(byte *)(lVar14 + 0x139) & 4) != 0) {
        uVar8 = 5;
      }
      iVar10 = FUN_1803965f0(lVar12);
      lVar7 = (longlong)iVar10;
      FUN_18038de80(lVar12,iVar10);
      *(int32_t *)(lVar14 + 0x40 + lVar7 * 4) = *(int32_t *)(lVar6 + 0x2fc0 + lVar7 * 4);
      FUN_180395ea0(lVar12,iVar10,unaff_R13,lVar14,uVar8);
      *(int32_t *)(lVar6 + 0x2fe0 + lVar7 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar4 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(longlong *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar4;
      cVar9 = cStack00000000000000f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (cVar9 == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}






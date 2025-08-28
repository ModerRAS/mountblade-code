#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part050.c - 8 个函数

// 函数: void FUN_1805d3a86(void)
void FUN_1805d3a86(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  char *pcVar10;
  longlong *unaff_RBX;
  float *unaff_RSI;
  int iVar11;
  float *unaff_RDI;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar27;
  float in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  
  lVar8 = FUN_1805b74c0();
  plVar14 = (longlong *)*unaff_RBX;
  lVar2 = *(longlong *)(*plVar14 + 0x20);
  lVar3 = *(longlong *)(lVar8 + 0x20);
  uVar4 = *(uint64_t *)unaff_RSI;
  fStack00000000000000ec = (float)((ulonglong)uVar4 >> 0x20);
  fStack00000000000000e8 = (float)uVar4;
  fVar21 = fStack00000000000000ec * fStack00000000000000ec +
           fStack00000000000000e8 * fStack00000000000000e8;
  fVar21 = fVar21 + (float)(fVar21 <= 1.1754944e-38) * 1.1754944e-38;
  auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar19 = auVar20._0_4_;
  fVar21 = fVar19 * 0.5 * (3.0 - fVar21 * fVar19 * fVar19) * fVar21;
  cVar15 = *(float *)(lVar3 + 0x84) * 0.5 < fVar21;
  if (((bool)cVar15) || (*(float *)(lVar3 + 0x84) * 0.2 < fVar21)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  fVar19 = unaff_RDI[1];
  fVar21 = *unaff_RDI;
  fVar17 = *(float *)(lVar2 + 0x84);
  fVar26 = fVar21 - *unaff_RSI;
  fVar25 = *(float *)(lVar3 + 0xc);
  fVar24 = fVar19 - unaff_RSI[1];
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar16 = *(float *)(lVar2 + 0x10) - fVar1;
  fVar18 = fVar24 * fVar24 + fVar26 * fVar26;
  _fStack00000000000000e8 = uVar4;
  if (0.01 < fVar18) {
    fVar16 = (fVar26 * (*(float *)(lVar2 + 0xc) - fVar25) * -2.0 - (fVar16 + fVar16) * fVar24) *
             (0.5 / fVar18);
    if (fVar16 <= unaff_XMM6_Da) {
      fVar16 = unaff_XMM6_Da;
    }
    if (unaff_XMM6_Da < fVar16) {
      fVar18 = *(float *)((longlong)plVar14 + 0x1dc);
      fVar24 = *(float *)(plVar14 + 0x3b);
      fVar27 = fVar19 * fVar16 + *(float *)(lVar2 + 0x10);
      fVar23 = fVar21 * fVar16 + *(float *)(lVar2 + 0xc);
      fVar26 = *unaff_RSI * fVar16 + fVar25;
      fVar22 = unaff_RSI[1] * fVar16 + fVar1;
      _fStack00000000000000e8 = CONCAT44(fVar22,fVar26);
      if (unaff_XMM6_Da <=
          (fVar18 - fVar27) * (fVar18 - *(float *)(lVar2 + 0x10)) +
          (fVar24 - fVar23) * (fVar24 - *(float *)(lVar2 + 0xc))) {
        fVar26 = fVar26 - fVar23;
        fVar22 = fVar22 - fVar27;
        fVar25 = fVar26 * fVar26 + fVar22 * fVar22;
      }
      else {
        if (bVar5) {
          FUN_18038a230(&stack0x000000f0,(float *)(lVar3 + 0xc),&stack0x000000e8);
          fVar25 = fStack00000000000000f0;
          fVar1 = fStack00000000000000f4;
        }
        fVar25 = (fVar24 - fVar25) * (fVar24 - fVar25) + (fVar18 - fVar1) * (fVar18 - fVar1);
      }
      if (fVar25 < unaff_XMM10_Da * unaff_XMM10_Da) {
        *(float *)((longlong)unaff_RBX + 0x9c) = fVar16;
      }
    }
  }
  if (3.0 < *(float *)((longlong)unaff_RBX + 0x9c) || *(float *)((longlong)unaff_RBX + 0x9c) == 3.0)
  goto LAB_1805d3fbf;
  if ((((*(uint *)((longlong)plVar14 + 0x1484) >> 3 & 1) == 0) &&
      (*(char *)((longlong)plVar14 + 0x12bc) != '\0')) &&
     (cVar6 = func_0x0001805b68f0(plVar14 + 0x2f), cVar6 != '\0')) {
    pfVar9 = (float *)FUN_1805b7480();
    lVar2 = *unaff_RBX;
    fVar19 = *pfVar9;
    if (fVar19 <= 3.0) {
      fVar19 = 3.0;
    }
    fVar19 = fVar19 * unaff_XMM11_Da;
    if (*(char *)(lVar2 + 0x12bc) == '\0') goto LAB_1805d3fa3;
    cVar15 = *(char *)(lVar2 + 0x12b4);
    lVar3 = lVar2 + 0x290;
    if (cVar15 == '\0') {
      iVar11 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
    }
    else {
      iVar11 = *(int *)(lVar2 + 0x12b0);
    }
    if (iVar11 < 1) goto LAB_1805d3fa3;
    iVar11 = *(int *)(lVar2 + 0x12b8);
    lVar8 = *(longlong *)(**(longlong **)(lVar2 + 0x198) + 0x20);
    lVar13 = lVar3;
    if (cVar15 == '\0') {
      lVar13 = *(longlong *)(lVar2 + 0x1290);
    }
    fVar21 = *(float *)(lVar8 + 0x10) - *(float *)((longlong)iVar11 * 0x20 + 4 + lVar13);
    fVar17 = *(float *)(lVar8 + 0xc) - *(float *)((longlong)iVar11 * 0x20 + lVar13);
    unaff_XMM6_Da = SQRT(fVar21 * fVar21 + fVar17 * fVar17);
    iVar12 = iVar11;
    if (unaff_XMM6_Da <= fVar19) {
      while( true ) {
        iVar12 = iVar12 + 1;
        if (cVar15 == '\0') {
          iVar7 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
        }
        else {
          iVar7 = *(int *)(lVar2 + 0x12b0);
        }
        if (iVar7 <= iVar12) goto LAB_1805d3fa3;
        lVar8 = lVar3;
        if (cVar15 == '\0') {
          lVar8 = *(longlong *)(lVar2 + 0x1290);
        }
        lVar13 = lVar3;
        if (cVar15 == '\0') {
          lVar13 = *(longlong *)(lVar2 + 0x1290);
        }
        fVar21 = *(float *)(lVar8 + 4 + (longlong)iVar11 * 0x20) -
                 *(float *)((longlong)iVar12 * 0x20 + 4 + lVar13);
        fVar17 = *(float *)(lVar8 + (longlong)iVar11 * 0x20) -
                 *(float *)((longlong)iVar12 * 0x20 + lVar13);
        unaff_XMM6_Da = unaff_XMM6_Da + SQRT(fVar21 * fVar21 + fVar17 * fVar17);
        if (fVar19 < unaff_XMM6_Da) break;
        iVar11 = iVar11 + 1;
      }
    }
  }
  else {
    if ((*(uint *)((longlong)plVar14 + 0x209c) >> 0xb & 1) != 0) goto LAB_1805d3fbf;
    iVar11 = (int)plVar14[0x297];
    if (((((iVar11 == -1) || (*(int *)((longlong)plVar14 + 0x1b6c) <= iVar11)) ||
         ((*(int *)(((longlong)iVar11 + 0x65) * 0x3c + (longlong)plVar14) != *(int *)(lVar8 + 0x10)
          || (*(int *)((longlong)iVar11 * 0x3c + 0x17e4 + (longlong)plVar14) == 0)))) ||
        ((cVar15 != '\0' && (pcVar10 = (char *)FUN_1805b7540(), *pcVar10 != '\0')))) ||
       ((fVar17 * fVar17 * 0.25 < fVar21 * fVar21 + fVar19 * fVar19 &&
        (-1 < *(int *)(*(longlong *)*unaff_RBX + 0x564))))) goto LAB_1805d3fbf;
    fVar19 = 0.0;
    unaff_XMM6_Da = *(float *)((longlong)*(int *)(*unaff_RBX + 0x14b8) * 0x3c + 0x17e0 + *unaff_RBX)
    ;
LAB_1805d3fa3:
    bVar5 = unaff_XMM6_Da < fVar19;
    fVar19 = unaff_XMM6_Da;
    if ((bVar5) && (unaff_XMM6_Da <= in_stack_000000e0)) goto LAB_1805d3fbf;
  }
  *(float *)((longlong)unaff_RBX + 0x9c) = fVar19 / unaff_XMM11_Da;
LAB_1805d3fbf:
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x10;
  return;
}






// 函数: void FUN_1805d3d85(void)
void FUN_1805d3d85(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char unaff_DIL;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong in_R10;
  longlong lVar11;
  char in_R11B;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM11_Da;
  float in_stack_000000e0;
  
  if ((((*(uint *)(in_R10 + 0x1484) >> 3 & 1) == 0) && (*(char *)(in_R10 + 0x12bc) != '\0')) &&
     (cVar4 = func_0x0001805b68f0(in_R10 + 0x178), cVar4 != '\0')) {
    pfVar6 = (float *)FUN_1805b7480();
    lVar2 = *unaff_RBX;
    fVar14 = *pfVar6;
    if (*pfVar6 <= unaff_XMM7_Da) {
      fVar14 = unaff_XMM7_Da;
    }
    fVar14 = fVar14 * unaff_XMM11_Da;
    if (*(char *)(lVar2 + 0x12bc) == '\0') goto LAB_1805d3fa3;
    cVar4 = *(char *)(lVar2 + 0x12b4);
    lVar1 = lVar2 + 0x290;
    if (cVar4 == '\0') {
      iVar8 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
    }
    else {
      iVar8 = *(int *)(lVar2 + 0x12b0);
    }
    if (iVar8 < 1) goto LAB_1805d3fa3;
    iVar8 = *(int *)(lVar2 + 0x12b8);
    lVar11 = *(longlong *)(**(longlong **)(lVar2 + 0x198) + 0x20);
    lVar10 = lVar1;
    if (cVar4 == '\0') {
      lVar10 = *(longlong *)(lVar2 + 0x1290);
    }
    fVar12 = *(float *)(lVar11 + 0x10) - *(float *)((longlong)iVar8 * 0x20 + 4 + lVar10);
    fVar13 = *(float *)(lVar11 + 0xc) - *(float *)((longlong)iVar8 * 0x20 + lVar10);
    unaff_XMM6_Da = SQRT(fVar12 * fVar12 + fVar13 * fVar13);
    iVar9 = iVar8;
    if (unaff_XMM6_Da <= fVar14) {
      while( true ) {
        iVar9 = iVar9 + 1;
        if (cVar4 == '\0') {
          iVar5 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
        }
        else {
          iVar5 = *(int *)(lVar2 + 0x12b0);
        }
        if (iVar5 <= iVar9) goto LAB_1805d3fa3;
        lVar11 = lVar1;
        if (cVar4 == '\0') {
          lVar11 = *(longlong *)(lVar2 + 0x1290);
        }
        lVar10 = lVar1;
        if (cVar4 == '\0') {
          lVar10 = *(longlong *)(lVar2 + 0x1290);
        }
        fVar12 = *(float *)(lVar11 + 4 + (longlong)iVar8 * 0x20) -
                 *(float *)((longlong)iVar9 * 0x20 + 4 + lVar10);
        fVar13 = *(float *)(lVar11 + (longlong)iVar8 * 0x20) -
                 *(float *)((longlong)iVar9 * 0x20 + lVar10);
        unaff_XMM6_Da = unaff_XMM6_Da + SQRT(fVar12 * fVar12 + fVar13 * fVar13);
        if (fVar14 < unaff_XMM6_Da) break;
        iVar8 = iVar8 + 1;
      }
    }
  }
  else {
    if ((*(uint *)(in_R10 + 0x209c) >> 0xb & 1) != 0) goto LAB_1805d3fbf;
    iVar8 = *(int *)(in_R10 + 0x14b8);
    if (((((iVar8 == -1) || (*(int *)(in_R10 + 0x1b6c) <= iVar8)) ||
         ((*(int *)(((longlong)iVar8 + 0x65) * 0x3c + in_R10) != *(int *)(unaff_RBP + 0x10) ||
          (*(int *)((longlong)iVar8 * 0x3c + 0x17e4 + in_R10) == 0)))) ||
        ((in_R11B != '\0' && (pcVar7 = (char *)FUN_1805b7540(), *pcVar7 != '\0')))) ||
       ((unaff_DIL != '\0' && (-1 < *(int *)(*(longlong *)*unaff_RBX + 0x564)))))
    goto LAB_1805d3fbf;
    fVar14 = 0.0;
    unaff_XMM6_Da = *(float *)((longlong)*(int *)(*unaff_RBX + 0x14b8) * 0x3c + 0x17e0 + *unaff_RBX)
    ;
LAB_1805d3fa3:
    bVar3 = unaff_XMM6_Da < fVar14;
    fVar14 = unaff_XMM6_Da;
    if ((bVar3) && (unaff_XMM6_Da <= in_stack_000000e0)) goto LAB_1805d3fbf;
  }
  *(float *)((longlong)unaff_RBX + 0x9c) = fVar14 / unaff_XMM11_Da;
LAB_1805d3fbf:
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x10;
  return;
}






// 函数: void FUN_1805d3fc7(void)
void FUN_1805d3fc7(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10;
  return;
}






// 函数: void FUN_1805d3fdb(void)
void FUN_1805d3fdb(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10;
  return;
}






// 函数: void FUN_1805d4040(longlong *param_1)
void FUN_1805d4040(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  float fStack_b0;
  float fStack_ac;
  int iStack_a8;
  uint64_t uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  
  plVar6 = (longlong *)*param_1;
  lVar1 = *plVar6;
  if ((plVar6[0x41e] == 0) ||
     ((1 < (int)plVar6[0x295] - 5U &&
      (((*(byte *)((longlong)plVar6 + 0x209c) & 1) == 0 || ((*(byte *)(plVar6 + 0x413) & 1) == 0))))
     )) {
    if ((*(uint *)(param_1 + 1) & 0x200) == 0) {
      func_0x0001805d4cd0();
    }
    lVar4 = param_1[0x1c];
    lVar5 = *(longlong *)(lVar4 + 0x9d8);
    lVar7 = *(longlong *)(lVar4 + 0x20);
    lStack_88 = lVar5;
    if ((lVar5 == 0) || (cVar2 = FUN_18038d0a0(lVar5), lStack_88 = lVar5, cVar2 == '\0')) {
      lVar5 = 0;
    }
    uStack_98 = *(uint64_t *)(*(longlong *)(lVar4 + 0x8d8) + 0x18);
    fStack_80 = *(float *)(lVar7 + 0xc);
    fStack_7c = *(float *)(lVar7 + 0x10);
    fStack_78 = *(float *)(lVar7 + 0x14);
    uStack_74 = *(int32_t *)(lVar7 + 0x18);
    uStack_70 = *(int32_t *)(lVar7 + 0xb0);
    uStack_6c = *(int32_t *)(lVar7 + 0xb4);
    uStack_68 = *(int32_t *)(lVar7 + 0xb8);
    uStack_64 = *(int32_t *)(lVar7 + 0xbc);
    iStack_58 = 3;
    lStack_90 = lVar5;
    fStack_60 = fStack_80;
    fStack_5c = fStack_7c;
    pfVar3 = (float *)FUN_1805b6cc0(param_1);
    lVar4 = *param_1;
    fVar8 = *(float *)(lVar4 + 0x1740);
    fVar9 = fVar8 * pfVar3[1] + fStack_7c;
    fVar8 = fVar8 * *pfVar3 + fStack_80;
    if ((fStack_80 != fVar8) || (fStack_7c != fVar9)) {
      iStack_58 = 0;
      fStack_80 = fVar8;
      fStack_7c = fVar9;
    }
    lVar5 = *(longlong *)(lVar1 + 0x9d8);
    lVar7 = *(longlong *)(lVar1 + 0x20);
    lStack_d8 = lVar5;
    if ((lVar5 == 0) || (cVar2 = FUN_18038d0a0(lVar5), lStack_d8 = lVar5, cVar2 == '\0')) {
      lVar5 = 0;
    }
    uStack_e8 = *(uint64_t *)(*(longlong *)(lVar1 + 0x8d8) + 0x18);
    fStack_b0 = *(float *)(lVar7 + 0xc);
    fStack_ac = *(float *)(lVar7 + 0x10);
    fStack_c8 = *(float *)(lVar7 + 0x14);
    uStack_c4 = *(int32_t *)(lVar7 + 0x18);
    uStack_c0 = *(uint64_t *)(lVar7 + 0xb0);
    uStack_b8 = *(uint64_t *)(lVar7 + 0xb8);
    iStack_a8 = 3;
    fVar8 = *(float *)(lVar4 + 0x1740);
    fVar9 = fVar8 * *(float *)(lVar7 + 0x24) + fStack_b0;
    fVar8 = fVar8 * *(float *)(lVar7 + 0x28) + fStack_ac;
    if ((fStack_b0 != fVar9) || (fStack_d0 = fStack_b0, fStack_cc = fStack_ac, fStack_ac != fVar8))
    {
      iStack_a8 = 0;
      fStack_d0 = fVar9;
      fStack_cc = fVar8;
    }
    lStack_e0 = lVar5;
    FUN_180487c70(&uStack_98,0);
    FUN_180487c70(&uStack_e8,0);
    FUN_180487c70(&uStack_98,3);
    fVar9 = fStack_7c;
    fVar8 = fStack_80;
    fVar11 = fStack_78;
    if (iStack_58 < 3) {
      fVar11 = -NAN;
    }
    FUN_180487c70(&uStack_e8,3);
    fVar10 = -NAN;
    if (2 < iStack_a8) {
      fVar10 = fStack_c8;
    }
    fVar8 = (fStack_d0 - fVar8) * (fStack_d0 - fVar8) + (fStack_cc - fVar9) * (fStack_cc - fVar9) +
            (fVar10 - fVar11) * (fVar10 - fVar11);
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x9d8);
    lVar5 = *(longlong *)(lVar1 + 0x20);
    lStack_d8 = lVar4;
    if ((lVar4 == 0) || (cVar2 = FUN_18038d0a0(lVar4), lStack_d8 = lVar4, cVar2 == '\0')) {
      lVar4 = 0;
    }
    uStack_e8 = *(uint64_t *)(*(longlong *)(lVar1 + 0x8d8) + 0x18);
    fStack_b0 = *(float *)(lVar5 + 0xc);
    fStack_ac = *(float *)(lVar5 + 0x10);
    fStack_c8 = *(float *)(lVar5 + 0x14);
    uStack_c4 = *(int32_t *)(lVar5 + 0x18);
    uStack_c0 = *(uint64_t *)(lVar5 + 0xb0);
    uStack_b8 = *(uint64_t *)(lVar5 + 0xb8);
    iStack_a8 = 3;
    fVar8 = *(float *)(plVar6 + 0x2e8) * *(float *)(lVar5 + 0x24) + fStack_b0;
    fVar9 = *(float *)(plVar6 + 0x2e8) * *(float *)(lVar5 + 0x28) + fStack_ac;
    if ((fStack_b0 != fVar8) || (fStack_d0 = fStack_b0, fStack_cc = fStack_ac, fStack_ac != fVar9))
    {
      iStack_a8 = 0;
      fStack_d0 = fVar8;
      fStack_cc = fVar9;
    }
    lStack_e0 = lVar4;
    FUN_180487c70(&uStack_e8,3);
    if (iStack_a8 < 3) {
      fStack_c8 = -NAN;
    }
    lVar4 = *param_1;
    fStack_d0 = fStack_d0 - *(float *)(lVar4 + 0x20f8);
    fStack_cc = fStack_cc - *(float *)(lVar4 + 0x20fc);
    fVar8 = (fStack_c8 + *(float *)(*(longlong *)(lVar1 + 0x6d8) + 0x908)) -
            *(float *)(lVar4 + 0x2100);
    fVar8 = fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fVar8 * fVar8;
  }
  *(float *)((longlong)param_1 + 0xb4) = SQRT(fVar8);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x40;
  return;
}






// 函数: void FUN_1805d41c4(void)
void FUN_1805d41c4(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool in_ZF;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (in_ZF) {
    func_0x0001805d4cd0();
  }
  lVar12 = unaff_RBX[0x1c];
  lVar10 = *(longlong *)(lVar12 + 0x9d8);
  lVar13 = *(longlong *)(lVar12 + 0x20);
  lVar11 = lVar10;
  if ((lVar10 == 0) || (cVar8 = FUN_18038d0a0(lVar10), lVar11 = lVar10, cVar8 == '\0')) {
    lVar10 = 0;
  }
  *(uint64_t *)(unaff_RBP + -0x39) = *(uint64_t *)(*(longlong *)(lVar12 + 0x8d8) + 0x18);
  uVar2 = *(int32_t *)(lVar13 + 0x10);
  uVar3 = *(int32_t *)(lVar13 + 0x14);
  uVar4 = *(int32_t *)(lVar13 + 0x18);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(lVar13 + 0xc);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar2;
  *(int32_t *)(unaff_RBP + -0x19) = uVar3;
  *(int32_t *)(unaff_RBP + -0x15) = uVar4;
  uVar2 = *(int32_t *)(lVar13 + 0xb0);
  uVar3 = *(int32_t *)(lVar13 + 0xb4);
  uVar4 = *(int32_t *)(lVar13 + 0xb8);
  uVar5 = *(int32_t *)(lVar13 + 0xbc);
  *(longlong *)(unaff_RBP + -0x31) = lVar10;
  *(longlong *)(unaff_RBP + -0x29) = lVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar2;
  *(int32_t *)(unaff_RBP + -0xd) = uVar3;
  *(int32_t *)(unaff_RBP + -9) = uVar4;
  *(int32_t *)(unaff_RBP + -5) = uVar5;
  *(uint64_t *)(unaff_RBP + -1) = *(uint64_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + 7) = 3;
  pfVar9 = (float *)FUN_1805b6cc0();
  lVar12 = *unaff_RBX;
  fVar15 = *(float *)(lVar12 + 0x1740);
  fVar17 = fVar15 * pfVar9[1] + *(float *)(unaff_RBP + -0x1d);
  fVar15 = fVar15 * *pfVar9 + *(float *)(unaff_RBP + -0x21);
  *(float *)(unaff_RBP + 0x6b) = fVar17;
  *(float *)(unaff_RBP + 0x67) = fVar15;
  if ((*(float *)(unaff_RBP + -0x21) != fVar15) || (*(float *)(unaff_RBP + -0x1d) != fVar17)) {
    *(uint64_t *)(unaff_RBP + -0x21) = *(uint64_t *)(unaff_RBP + 0x67);
    *(int32_t *)(unaff_RBP + 7) = 0;
  }
  lVar10 = *(longlong *)(unaff_RSI + 0x9d8);
  lVar13 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar10 != 0) {
    FUN_18038d0a0(lVar10);
  }
  uVar1 = *(uint64_t *)(*(longlong *)(unaff_RSI + 0x8d8) + 0x18);
  fVar17 = *(float *)(lVar13 + 0xc);
  fVar16 = *(float *)(lVar13 + 0x10);
  uVar2 = *(int32_t *)(lVar13 + 0x14);
  uVar3 = *(int32_t *)(lVar13 + 0x18);
  *(float *)(unaff_RBP + -0x71) = fVar17;
  *(float *)(unaff_RBP + -0x6d) = fVar16;
  *(int32_t *)(unaff_RBP + -0x69) = uVar2;
  *(int32_t *)(unaff_RBP + -0x65) = uVar3;
  uVar6 = *(uint64_t *)(lVar13 + 0xb0);
  uVar7 = *(uint64_t *)(lVar13 + 0xb8);
  *(longlong *)(unaff_RBP + -0x79) = lVar10;
  *(uint64_t *)(unaff_RBP + -0x61) = uVar6;
  *(uint64_t *)(unaff_RBP + -0x59) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x71);
  *(int32_t *)(unaff_RBP + -0x49) = 3;
  fVar15 = *(float *)(lVar12 + 0x1740);
  fVar14 = fVar15 * *(float *)(lVar13 + 0x24) + fVar17;
  fVar15 = fVar15 * *(float *)(lVar13 + 0x28) + fVar16;
  *(float *)(unaff_RBP + 0x67) = fVar14;
  *(float *)(unaff_RBP + 0x6b) = fVar15;
  if ((fVar17 != fVar14) || (fVar16 != fVar15)) {
    *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + 0x67);
    *(int32_t *)(unaff_RBP + -0x49) = 0;
  }
  FUN_180487c70(unaff_RBP + -0x39,0,fVar15,fVar16,uVar1);
  FUN_180487c70(&stack0x00000020,0);
  FUN_180487c70(unaff_RBP + -0x39,3);
  fVar15 = -NAN;
  if (*(int *)(unaff_RBP + 7) < 3) {
    fVar17 = -NAN;
  }
  else {
    fVar17 = *(float *)(unaff_RBP + -0x19);
  }
  fVar16 = *(float *)(unaff_RBP + -0x21);
  fVar14 = *(float *)(unaff_RBP + -0x1d);
  FUN_180487c70(&stack0x00000020,3);
  if (2 < *(int *)(unaff_RBP + -0x49)) {
    fVar15 = *(float *)(unaff_RBP + -0x69);
  }
  fVar14 = *(float *)(unaff_RBP + -0x6d) - fVar14;
  fVar16 = *(float *)(unaff_RBP + -0x71) - fVar16;
  *(float *)((longlong)unaff_RBX + 0xb4) =
       SQRT(fVar16 * fVar16 + fVar14 * fVar14 + (fVar15 - fVar17) * (fVar15 - fVar17));
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x40;
  return;
}






// 函数: void FUN_1805d440a(uint64_t param_1,float param_2)
void FUN_1805d440a(uint64_t param_1,float param_2)

{
  longlong unaff_RBX;
  
  *(float *)(unaff_RBX + 0xb4) = SQRT(param_2);
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d4440(longlong *param_1)
void FUN_1805d4440(longlong *param_1)

{
  int8_t uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  int32_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auStack_98 [128];
  
  plVar14 = (longlong *)*param_1;
  uVar11 = *(uint *)(param_1 + 1);
  lVar8 = *plVar14;
  if ((uVar11 & 0x20) == 0) {
    uVar11 = uVar11 | 0x20;
    lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x8f8) + 0x9e8);
    param_1[0x14] = lVar5;
    *(uint *)(param_1 + 1) = uVar11;
  }
  else {
    lVar5 = param_1[0x14];
  }
  if ((lVar5 == 0) ||
     ((*(byte *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd0)) >> 1
      & 1) == 0)) {
    *(int8_t *)((longlong)param_1 + 0xce) = 0;
    if ((uVar11 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
      plVar14 = (longlong *)*param_1;
    }
    lVar5 = param_1[0x1c];
    if ((plVar14[0x41e] != 0) &&
       (((int)plVar14[0x295] - 5U < 2 ||
        (((*(byte *)((longlong)plVar14 + 0x209c) & 1) != 0 &&
         ((*(byte *)(plVar14 + 0x413) & 1) != 0)))))) {
      uVar11 = *(uint *)(param_1 + 1);
      if ((uVar11 & 0x10) == 0) {
        FUN_1805d3770(param_1);
        plVar14 = (longlong *)*param_1;
        uVar11 = *(uint *)(param_1 + 1);
      }
      fVar20 = *(float *)(plVar14 + 0x28a);
      fVar18 = *(float *)((longlong)param_1 + 0x9c);
      if ((uVar11 >> 8 & 1) == 0) {
        FUN_1805d4b40(param_1);
      }
      fVar19 = *(float *)(param_1 + 0x1b);
      uVar17 = 0;
      if ((fVar19 + fVar20 * 0.8 + 0.2 <= fVar18) ||
         (pfVar6 = (float *)FUN_1805b6a70(param_1), *pfVar6 <= 0.0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      uVar11 = *(uint *)(param_1 + 1);
      *(int8_t *)((longlong)param_1 + 0xcc) = uVar1;
      if ((uVar11 & 2) == 0) {
        FUN_1805d3550(param_1);
        uVar11 = *(uint *)(param_1 + 1);
      }
      fVar20 = *(float *)((longlong)param_1 + 100);
      if ((uVar11 >> 0x19 & 1) == 0) {
        uVar11 = uVar11 | 0x2000000;
        fVar15 = *(float *)(*(longlong *)*param_1 + 0x7dc);
        *(float *)((longlong)param_1 + 0xac) = fVar15;
        *(uint *)(param_1 + 1) = uVar11;
      }
      else {
        fVar15 = *(float *)((longlong)param_1 + 0xac);
      }
      if (*(int *)(lVar8 + 0x1fc) == 1) {
        if ((uVar11 >> 8 & 1) == 0) {
          FUN_1805d4b40(param_1);
          uVar11 = *(uint *)(param_1 + 1);
        }
        fVar19 = *(float *)((longlong)param_1 + 0xd4);
      }
      if ((fVar20 < fVar15) || (fVar18 < fVar19)) {
        *(int8_t *)((longlong)param_1 + 0xcd) = 1;
      }
      else if (*(char *)((longlong)param_1 + 0xcc) == '\0') {
        *(int8_t *)((longlong)param_1 + 0xcd) = 0;
      }
      else {
        if ((uVar11 & 1) == 0) {
          FUN_1805d3210(param_1);
        }
        *(bool *)((longlong)param_1 + 0xcd) =
             (fVar20 - (*(float *)(*(longlong *)(lVar8 + 0x20) + 0x28) *
                        *(float *)((longlong)param_1 + 0x5c) +
                       *(float *)(*(longlong *)(lVar8 + 0x20) + 0x24) * *(float *)(param_1 + 0xb)) *
                       fVar19) - fVar15 <= 0.0;
      }
      goto FUN_1805d4b08;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x568) != 1)) {
      *(int16_t *)((longlong)param_1 + 0xcc) = 0;
      uVar17 = 0;
      goto FUN_1805d4b08;
    }
    pfVar6 = (float *)FUN_1805b6e50(param_1);
    lVar13 = *param_1;
    fVar20 = *pfVar6;
    bVar10 = (byte)((uint)*(int32_t *)(lVar8 + 0x564) >> 0x1f) ^ 1;
    cVar2 = func_0x0001805b7cd0(lVar13);
    uVar17 = 0;
    if (cVar2 == '\0') {
      fVar18 = *(float *)(lVar13 + 0x1450) * 0.8 + 0.2;
    }
    else {
      fVar18 = 0.0;
    }
    pfVar6 = (float *)FUN_1805b7480(param_1);
    fVar19 = *pfVar6;
    pfVar6 = (float *)FUN_1805b6920(param_1);
    lVar13 = *(longlong *)(lVar8 + 0x20);
    pfVar7 = (float *)FUN_1805b6cc0(param_1);
    fVar15 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0xc) -
             *(float *)(*(longlong *)(lVar5 + 0x20) + 0xc);
    fVar16 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0x10) -
             *(float *)(*(longlong *)(lVar5 + 0x20) + 0x10);
    fVar21 = (*pfVar6 * *(float *)(lVar13 + 0x24) + pfVar6[1] * *(float *)(lVar13 + 0x28)) -
             (pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7);
    fVar16 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    pfVar6 = (float *)func_0x0001805b7300(param_1);
    fVar15 = *pfVar6;
    if ((fVar15 <= fVar16) || (pfVar6 = (float *)FUN_1805b69b0(param_1), 1.5 <= ABS(*pfVar6))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((fVar20 < fVar19 + fVar18) || (bVar3)) {
      if ((bVar10 == 0) ||
         ((pfVar6 = (float *)FUN_1805b6a70(param_1), 0.0 < *pfVar6 ||
          (fVar18 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0x8c) * 0.25,
          pfVar6 = (float *)(*(longlong *)(lVar8 + 0x20) + 0x234),
          *pfVar6 <= fVar18 && fVar18 != *pfVar6)))) {
        uVar1 = 1;
      }
      else {
        pfVar6 = (float *)FUN_1805b6a70(param_1);
        if (-0.70710677 < *pfVar6) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar8 + 0x20) + 0x34));
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
    fVar18 = -0.70710677;
    *(int8_t *)((longlong)param_1 + 0xcc) = uVar1;
    if (*(int *)(lVar8 + 0x1fc) == 1) {
      if ((*(uint *)(param_1 + 1) & 0x100) == 0) {
        FUN_1805d4b40(param_1);
      }
      fVar19 = *(float *)((longlong)param_1 + 0xd4);
    }
    if ((bVar3) || (fVar20 < fVar19)) {
      bVar3 = true;
    }
    else {
      if (*(char *)((longlong)param_1 + 0xcc) != '\0') {
        if (bVar10 == 0) {
          fVar18 = 0.5;
        }
        pfVar6 = (float *)FUN_1805b6a70(param_1);
        if (fVar18 < *pfVar6) {
          bVar3 = (fVar16 - fVar19 * fVar21) - fVar15 <= 0.0;
          goto LAB_1805d49c4;
        }
      }
      bVar3 = false;
    }
LAB_1805d49c4:
    *(bool *)((longlong)param_1 + 0xcd) = bVar3;
    if (((*(uint *)(lVar5 + 0x56c) & 0x4000) != 0) &&
       (((lVar8 = FUN_1805b7500(param_1), lVar8 == 0 ||
         ((0 < *(int *)(lVar8 + 0x30) &&
          (((uVar9 = *(ulonglong *)
                      ((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar8 + 0xd0))
            , (uVar9 >> 9 & 1) == 0 || (0 < *(short *)(lVar8 + 8))) && ((uVar9 >> 1 & 1) == 0))))))
        && (pfVar6 = (float *)FUN_1805b6b40(param_1), 0.0 < *pfVar6)))) {
      pfVar6 = (float *)FUN_1805b7580(param_1);
      fVar18 = *pfVar6;
      if (((lVar8 == 0) ||
          ((*(byte *)((longlong)
                      *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 +
                              *(longlong *)(lVar8 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
           == 0)) && (*(longlong *)(lVar5 + 0x280) != 0)) {
        lVar8 = FUN_1805d8cb0(lVar5 + 0x28,auStack_98);
        fVar20 = *(float *)(lVar8 + 4);
      }
      if ((fVar16 < fVar18) || ((fVar16 - fVar20 * fVar21) - fVar18 <= 0.0)) {
        uVar17 = 0x3f800000;
      }
    }
    goto FUN_1805d4b08;
  }
  lVar5 = FUN_1805a0610(lVar8 + 0x28,1);
  if (lVar5 == 0) {
LAB_1805d4589:
    uVar1 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x590);
    iVar4 = FUN_18053a410(&system_data_5f30,*(int32_t *)(lVar8 + 0xac),*(int32_t *)(lVar5 + 0x1c)
                         );
    uVar9 = 0;
    uVar11 = 0;
    iVar4 = *(int *)(_DAT_180c95f68 + (longlong)iVar4 * 4);
    uVar12 = uVar9;
    if (iVar4 != -1) {
      uVar12 = *(ulonglong *)(_DAT_180c95f88 + (longlong)iVar4 * 8);
    }
    if (*(longlong *)(lVar8 + 0x24a8) != 0) {
      uVar11 = (uint)*(uint64_t *)(*(longlong *)(lVar8 + 0x24a8) + 0x1d0);
    }
    if ((char)*(uint64_t *)(lVar8 + 0x24b8) != '\0') {
      uVar11 = 0;
    }
    if ((uint)*(byte *)(uVar12 + 0x1d0) < ((uVar11 | (uint)*(uint64_t *)(lVar8 + 0x24b8)) & 0xff))
    goto LAB_1805d4589;
    if (*(longlong *)(lVar8 + 0x2460) != 0) {
      uVar9 = *(ulonglong *)(*(longlong *)(lVar8 + 0x2460) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar8 + 0x2470) | uVar9) & 0x2000000000) != 0) goto LAB_1805d4589;
    uVar1 = 1;
  }
  *(int8_t *)((longlong)param_1 + 0xce) = uVar1;
  uVar17 = 0;
  *(int16_t *)((longlong)param_1 + 0xcc) = 0;
FUN_1805d4b08:
  *(int32_t *)(param_1 + 0x1a) = uVar17;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





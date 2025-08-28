#include "TaleWorlds.Native.Split.h"

// 99_part_09_part029.c - 5 个函数

// 函数: void FUN_1805cb7f0(longlong *param_1)
void FUN_1805cb7f0(longlong *param_1)

{
  float fVar1;
  int32_t uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  uint uVar12;
  int32_t extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uStackX_8;
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  int8_t auStack_78 [96];
  
  uVar12 = *(uint *)(param_1 + 2);
  if ((uVar12 & 0x20) == 0) {
    uVar12 = uVar12 | 0x20;
    plVar11 = *(longlong **)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = (longlong)plVar11;
    *(uint *)(param_1 + 2) = uVar12;
  }
  else {
    plVar11 = (longlong *)param_1[0x15];
  }
  uVar3 = *(ulonglong *)((longlong)(int)plVar11[0x1e] * 0xa0 + 0x50 + plVar11[0x1a]);
  if ((((uVar3 & 2) != 0) && ((uVar3 & 0x1100) == 0)) &&
     ((*plVar11 == 0 || (*(short *)(*plVar11 + 8) == 0)))) {
    iVar5 = (int)param_1[0x295];
    if ((((iVar5 - 2U & 0xfffffff9) == 0) && (iVar5 != 8)) ||
       ((iVar5 == 0 &&
        (((int)param_1[0x264] == 0 &&
         (fVar15 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc) - *(float *)(param_1 + 0x3b),
         fVar13 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10) -
                  *(float *)((longlong)param_1 + 0x1dc),
         fVar15 * fVar15 + fVar13 * fVar13 <
         *(float *)(param_1 + 0x41) * *(float *)(param_1 + 0x41) * 1.44)))))) {
      param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8);
      *(int32_t *)((longlong)param_1 + 0x178c) = 4;
    }
    goto LAB_1805cbf5f;
  }
  if ((uVar12 >> 9 & 1) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  lVar6 = param_1[0x1d];
  if (lVar6 == 0) {
LAB_1805cb95a:
    if ((param_1[0x41e] == 0) ||
       ((1 < (int)param_1[0x295] - 5U &&
        (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 ||
         ((*(byte *)(param_1 + 0x413) & 1) == 0)))))) goto LAB_1805cbf5f;
  }
  else {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
      lVar6 = param_1[0x1d];
    }
    if (*(int *)(lVar6 + 0x568) != 1) goto LAB_1805cb95a;
  }
  if (((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0) &&
     (lVar6 = func_0x0001805b7270(param_1 + 1), lVar6 != 0)) {
    *(int32_t *)((longlong)param_1 + 0x178c) = 9;
  }
  lVar6 = *param_1;
  if ((*(longlong **)(lVar6 + 0x628) == plVar11) && (*(int *)(lVar6 + 0x644) == -1)) {
    iVar5 = *(int *)(lVar6 + 0x638);
  }
  else {
    auStackX_10[0] = 0xffffffff;
    uStackX_8 = CONCAT44(uStackX_8._4_4_,0xffffffff);
    auStackX_18[0] = 0xffffffff;
    FUN_18050e440(lVar6,plVar11,&uStackX_8,auStackX_18,auStackX_10,auStackX_20,0xffffffff);
    iVar5 = (int)uStackX_8;
  }
  if (((int)param_1[0x42c] != 1) &&
     ((0 < iVar5 ||
      ((((*(uint *)((longlong)(int)plVar11[0x1e] * 0xa0 + 0x50 + plVar11[0x1a]) >> 8 & 1) == 0 &&
        (*plVar11 != 0)) && (0 < *(short *)(*plVar11 + 8))))))) {
    uVar12 = *(uint *)(param_1 + 2);
    if ((uVar12 >> 0xc & 1) == 0) {
      FUN_1805d4df0(param_1 + 1);
      uVar12 = *(uint *)(param_1 + 2);
    }
    fVar13 = *(float *)(param_1 + 0x22);
    if ((uVar12 >> 0xc & 1) == 0) {
      FUN_1805d4df0(param_1 + 1);
    }
    fVar15 = 0.0;
    if ((int)param_1[0x295] == 0) {
      fVar15 = *(float *)((longlong)param_1 + 0x1dc) -
               *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
      fVar14 = *(float *)(param_1 + 0x3b) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
      fVar15 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
    }
    if ((*(float *)((longlong)param_1 + 0x114) <= fVar13 &&
         fVar13 != *(float *)((longlong)param_1 + 0x114)) &&
       (fVar13 = *(float *)(*param_1 + 0x2d4),
       uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
       uVar12 = uVar12 >> 0x11 ^ uVar12, uVar12 = uVar12 << 5 ^ uVar12,
       *(uint *)(param_1 + 0x272) = uVar12, (float)(uVar12 - 1) * 2.3283064e-10 < fVar13)) {
      cVar4 = func_0x0001805b7bd0(param_1);
      if (cVar4 == '\0') {
        uVar7 = FUN_1805b7970(extraout_XMM0_Da,auStack_78);
        if ((char)param_1[0x438] == '\0') {
          uVar2 = *(int32_t *)((longlong)param_1 + 0x14b4);
        }
        else {
          uVar2 = *(int32_t *)((longlong)param_1 + 0x21c4);
        }
        iVar5 = FUN_1805bf5a0(param_1,uVar2,uVar7);
      }
      else {
        if ((*(uint *)(param_1 + 2) & 0x2000) == 0) {
          FUN_1805d4fe0(param_1 + 1);
        }
        iVar5 = (int)param_1[0x23];
      }
      *(int *)(param_1 + 0x2f2) = iVar5;
      if (fVar15 < *(float *)(*(longlong *)(*param_1 + 0x20) + 0x8c) * 4.0) {
        if (iVar5 == 3) {
          if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                           param_1[0x2e9]) * 1e-05) {
            pcVar8 = (char *)FUN_1805b7420(param_1 + 1);
            if (*pcVar8 == '\0') {
              if (((*(int *)((longlong)param_1 + 0x178c) != 2) &&
                  ((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0)) &&
                 ((cVar4 = func_0x0001805b7d30(param_1), cVar4 != '\0' ||
                  (cVar4 = func_0x0001805b7cd0(param_1), cVar4 != '\0')))) {
                *(int32_t *)(param_1 + 0x2f1) = 0;
                param_1[0x2ed] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) +
                     -0x8000000000000000;
                fVar13 = *(float *)((longlong)param_1 + 0x21a4);
                fVar15 = *(float *)(*param_1 + 0x2d4);
                *(float *)((longlong)param_1 + 0x21a4) = *(float *)(*param_1 + 0x324) * 0.1;
                param_1[0x2e0] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2e1] * 8) -
                     (longlong)(((-2.0 / fVar15) * *(float *)(param_1 + 0x28d) - fVar13) * 100000.0)
                ;
              }
            }
            else {
              *(int32_t *)((longlong)param_1 + 0x178c) = 2;
              lVar6 = FUN_1805a0610(*param_1 + 0x28,1);
              if (lVar6 != 0) {
                lVar9 = FUN_18053a5a0(&DAT_180c95f30,
                                      *(int32_t *)(*(longlong *)(*param_1 + 0x590) + 0xac),
                                      *(int32_t *)(lVar6 + 0x1c));
                lVar6 = *param_1;
                fVar15 = 1.0;
                fVar13 = *(float *)(lVar9 + 0x188);
                lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x8f8) + 0x9e8);
                if (lVar9 != 0) {
                  fVar15 = (float)*(int *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x68 +
                                          *(longlong *)(lVar9 + 0xd0)) * 0.01;
                }
                fVar14 = *(float *)(lVar6 + 0x3ac);
                fVar1 = *(float *)(lVar6 + 0x3c8);
                uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
                uVar12 = uVar12 >> 0x11 ^ uVar12;
                uVar12 = uVar12 << 5 ^ uVar12;
                *(uint *)(param_1 + 0x272) = uVar12;
                param_1[0x2e9] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                     (longlong)
                     ((fVar13 / (fVar14 * fVar15) + fVar1 + 0.25 +
                      (float)(uVar12 - 1) * 5.820766e-11) * -100000.0);
              }
            }
          }
        }
        else if (((iVar5 - 1U & 0xfffffffc) == 0) && (iVar5 != 3)) {
          if (((1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                             param_1[0x2e9]) * 1e-05) &&
              (cVar4 = func_0x000180522f60(*param_1), cVar4 == '\0')) &&
             ((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0)) {
            FUN_1805be810(param_1,&uStackX_8);
            if ((int)uStackX_8 == -1) {
              puVar10 = (ulonglong *)FUN_1805bed80(param_1,&uStackX_8);
              uStackX_8 = *puVar10;
            }
            uVar3 = uStackX_8;
            if (-1 < (int)uStackX_8) {
              if ((char)param_1[0x438] == '\0') {
                iVar5 = *(int *)((longlong)param_1 + 0x14b4);
              }
              else {
                iVar5 = *(int *)((longlong)param_1 + 0x21c4);
              }
              if (((int)uStackX_8 != iVar5) &&
                 (FUN_1805d1c80(param_1,&uStackX_8), (int)param_1[0x295] == 2)) {
                FUN_1805d9040(param_1 + 0x2f,uVar3 & 0xffffffff);
              }
            }
          }
        }
        else if (iVar5 == 5) {
          *(int32_t *)((longlong)param_1 + 0x178c) = 5;
        }
      }
    }
  }
  if ((((*(int *)((longlong)param_1 + 0x178c) != 2) && ((*(byte *)(param_1 + 0x269) & 2) != 0)) &&
      (cVar4 = func_0x0001805b7d30(param_1), cVar4 == '\0')) &&
     (pcVar8 = (char *)FUN_1805b7230(param_1 + 1), *pcVar8 != '\0')) {
    func_0x0001805d89b0(param_1,0x4000);
  }
LAB_1805cbf5f:
  cVar4 = func_0x0001805b7d30(param_1);
  if (cVar4 == '\0') {
    FUN_1805caef0(param_1);
  }
  return;
}






// 函数: void FUN_1805cb802(longlong param_1,uint64_t param_2,uint param_3)
void FUN_1805cb802(longlong param_1,uint64_t param_2,uint param_3)

{
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint64_t unaff_RBX;
  longlong *plVar11;
  uint64_t unaff_RSI;
  longlong *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t uVar12;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int iStack00000000000000c0;
  int32_t uStack00000000000000c4;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  if ((param_3 & 0x20) == 0) {
    param_3 = param_3 | 0x20;
    plVar11 = *(longlong **)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(longlong **)(param_1 + 0xa8) = plVar11;
    *(uint *)(param_1 + 0x10) = param_3;
  }
  else {
    plVar11 = *(longlong **)(param_1 + 0xa8);
  }
  uVar2 = *(ulonglong *)((longlong)(int)plVar11[0x1e] * 0xa0 + 0x50 + plVar11[0x1a]);
  if ((((uVar2 & 2) != 0) && ((uVar2 & 0x1100) == 0)) &&
     ((*plVar11 == 0 || (*(short *)(*plVar11 + 8) == 0)))) {
    iVar4 = (int)unaff_RDI[0x295];
    if ((((iVar4 - 2U & 0xfffffff9) == 0) && (iVar4 != 8)) ||
       ((iVar4 == 0 &&
        (((int)unaff_RDI[0x264] == 0 &&
         (fVar15 = *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0xc) - *(float *)(unaff_RDI + 0x3b)
         , fVar13 = *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x10) -
                    *(float *)((longlong)unaff_RDI + 0x1dc),
         fVar15 * fVar15 + fVar13 * fVar13 <
         *(float *)(unaff_RDI + 0x41) * *(float *)(unaff_RDI + 0x41) * 1.44)))))) {
      unaff_RDI[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8);
      *(int32_t *)((longlong)unaff_RDI + 0x178c) = 4;
    }
    goto LAB_1805cbf5f;
  }
  if ((param_3 >> 9 & 1) == 0) {
    func_0x0001805d4cd0(unaff_RDI + 1);
  }
  lVar5 = unaff_RDI[0x1d];
  if (lVar5 == 0) {
LAB_1805cb95a:
    if ((unaff_RDI[0x41e] == 0) ||
       ((1 < (int)unaff_RDI[0x295] - 5U &&
        (((*(byte *)((longlong)unaff_RDI + 0x209c) & 1) == 0 ||
         ((*(byte *)(unaff_RDI + 0x413) & 1) == 0)))))) goto LAB_1805cbf5f;
  }
  else {
    if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RDI + 1);
      lVar5 = unaff_RDI[0x1d];
    }
    if (*(int *)(lVar5 + 0x568) != 1) goto LAB_1805cb95a;
  }
  if (((*(uint *)((longlong)unaff_RDI + 0x209c) >> 2 & 1) != 0) &&
     (lVar5 = func_0x0001805b7270(unaff_RDI + 1), lVar5 != 0)) {
    *(int32_t *)((longlong)unaff_RDI + 0x178c) = 9;
  }
  lVar5 = *unaff_RDI;
  if ((*(longlong **)(lVar5 + 0x628) == plVar11) && (*(int *)(lVar5 + 0x644) == -1)) {
    iVar4 = *(int *)(lVar5 + 0x638);
  }
  else {
    in_stack_000000c8 = 0xffffffff;
    _iStack00000000000000c0 = CONCAT44(uStack00000000000000c4,0xffffffff);
    in_stack_000000d0 = 0xffffffff;
    FUN_18050e440(lVar5,plVar11,&stack0x000000c0,&stack0x000000d0,&stack0x000000c8);
    iVar4 = iStack00000000000000c0;
  }
  if (((int)unaff_RDI[0x42c] != 1) &&
     ((0 < iVar4 ||
      ((((*(uint *)((longlong)(int)plVar11[0x1e] * 0xa0 + 0x50 + plVar11[0x1a]) >> 8 & 1) == 0 &&
        (*plVar11 != 0)) && (0 < *(short *)(*plVar11 + 8))))))) {
    uVar10 = *(uint *)(unaff_RDI + 2);
    in_stack_00000080 = unaff_XMM7_Da;
    in_stack_00000088 = unaff_XMM7_Dc;
    in_stack_00000090 = unaff_XMM6_Da;
    in_stack_00000098 = unaff_XMM6_Dc;
    if ((uVar10 >> 0xc & 1) == 0) {
      FUN_1805d4df0(unaff_RDI + 1);
      uVar10 = *(uint *)(unaff_RDI + 2);
    }
    fVar13 = *(float *)(unaff_RDI + 0x22);
    if ((uVar10 >> 0xc & 1) == 0) {
      FUN_1805d4df0(unaff_RDI + 1);
    }
    fVar15 = 0.0;
    if ((int)unaff_RDI[0x295] == 0) {
      fVar15 = *(float *)((longlong)unaff_RDI + 0x1dc) -
               *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x10);
      fVar14 = *(float *)(unaff_RDI + 0x3b) - *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0xc);
      fVar15 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
    }
    in_stack_00000070 = unaff_XMM8_Da;
    in_stack_00000078 = unaff_XMM8_Dc;
    if ((*(float *)((longlong)unaff_RDI + 0x114) <= fVar13 &&
         fVar13 != *(float *)((longlong)unaff_RDI + 0x114)) &&
       (fVar13 = *(float *)(*unaff_RDI + 0x2d4),
       uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272),
       uVar10 = uVar10 >> 0x11 ^ uVar10, uVar10 = uVar10 << 5 ^ uVar10,
       *(uint *)(unaff_RDI + 0x272) = uVar10, (float)(uVar10 - 1) * 2.3283064e-10 < fVar13)) {
      cVar3 = func_0x0001805b7bd0();
      if (cVar3 == '\0') {
        uVar6 = FUN_1805b7970(extraout_XMM0_Da,&stack0x00000040);
        if ((char)unaff_RDI[0x438] == '\0') {
          uVar12 = *(int32_t *)((longlong)unaff_RDI + 0x14b4);
        }
        else {
          uVar12 = *(int32_t *)((longlong)unaff_RDI + 0x21c4);
        }
        iVar4 = FUN_1805bf5a0(extraout_XMM0_Da_00,uVar12,uVar6);
      }
      else {
        if ((*(uint *)(unaff_RDI + 2) & 0x2000) == 0) {
          FUN_1805d4fe0(unaff_RDI + 1);
        }
        iVar4 = (int)unaff_RDI[0x23];
      }
      *(int *)(unaff_RDI + 0x2f2) = iVar4;
      if (fVar15 < *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x8c) * 4.0) {
        if (iVar4 == 3) {
          if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                           unaff_RDI[0x2e9]) * 1e-05) {
            pcVar7 = (char *)FUN_1805b7420(unaff_RDI + 1);
            if (*pcVar7 == '\0') {
              if (((*(int *)((longlong)unaff_RDI + 0x178c) != 2) &&
                  ((*(uint *)((longlong)unaff_RDI + 0x209c) >> 2 & 1) != 0)) &&
                 ((cVar3 = func_0x0001805b7d30(), cVar3 != '\0' ||
                  (cVar3 = func_0x0001805b7cd0(), cVar3 != '\0')))) {
                *(int32_t *)(unaff_RDI + 0x2f1) = 0;
                unaff_RDI[0x2ed] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ee] * 8) +
                     -0x8000000000000000;
                fVar13 = *(float *)((longlong)unaff_RDI + 0x21a4);
                fVar15 = *(float *)(*unaff_RDI + 0x2d4);
                *(float *)((longlong)unaff_RDI + 0x21a4) = *(float *)(*unaff_RDI + 0x324) * 0.1;
                unaff_RDI[0x2e0] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2e1] * 8) -
                     (longlong)
                     (((-2.0 / fVar15) * *(float *)(unaff_RDI + 0x28d) - fVar13) * 100000.0);
              }
            }
            else {
              *(int32_t *)((longlong)unaff_RDI + 0x178c) = 2;
              lVar5 = FUN_1805a0610(*unaff_RDI + 0x28,1);
              if (lVar5 != 0) {
                lVar8 = FUN_18053a5a0(&DAT_180c95f30,
                                      *(int32_t *)(*(longlong *)(*unaff_RDI + 0x590) + 0xac),
                                      *(int32_t *)(lVar5 + 0x1c));
                lVar5 = *unaff_RDI;
                fVar15 = 1.0;
                fVar13 = *(float *)(lVar8 + 0x188);
                lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x8f8) + 0x9e8);
                if (lVar8 != 0) {
                  fVar15 = (float)*(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x68 +
                                          *(longlong *)(lVar8 + 0xd0)) * 0.01;
                }
                fVar14 = *(float *)(lVar5 + 0x3ac);
                fVar1 = *(float *)(lVar5 + 0x3c8);
                uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
                uVar10 = uVar10 >> 0x11 ^ uVar10;
                uVar10 = uVar10 << 5 ^ uVar10;
                *(uint *)(unaff_RDI + 0x272) = uVar10;
                unaff_RDI[0x2e9] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                     (longlong)
                     ((fVar13 / (fVar14 * fVar15) + fVar1 + 0.25 +
                      (float)(uVar10 - 1) * 5.820766e-11) * -100000.0);
              }
            }
          }
        }
        else if (((iVar4 - 1U & 0xfffffffc) == 0) && (iVar4 != 3)) {
          if (((1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                             unaff_RDI[0x2e9]) * 1e-05) &&
              (cVar3 = func_0x000180522f60(*unaff_RDI), cVar3 == '\0')) &&
             ((*(uint *)((longlong)unaff_RDI + 0x209c) >> 0xb & 1) == 0)) {
            uVar12 = FUN_1805be810(extraout_XMM0_Da_01,&stack0x000000c0);
            if ((int)_iStack00000000000000c0 == -1) {
              puVar9 = (ulonglong *)FUN_1805bed80(uVar12,&stack0x000000c0);
              _iStack00000000000000c0 = *puVar9;
              uVar12 = extraout_XMM0_Da_02;
            }
            uVar2 = _iStack00000000000000c0;
            if (-1 < (int)_iStack00000000000000c0) {
              if ((char)unaff_RDI[0x438] == '\0') {
                iVar4 = *(int *)((longlong)unaff_RDI + 0x14b4);
              }
              else {
                iVar4 = *(int *)((longlong)unaff_RDI + 0x21c4);
              }
              if (((int)_iStack00000000000000c0 != iVar4) &&
                 (FUN_1805d1c80(uVar12,&stack0x000000c0), (int)unaff_RDI[0x295] == 2)) {
                FUN_1805d9040(unaff_RDI + 0x2f,uVar2 & 0xffffffff);
              }
            }
          }
        }
        else if (iVar4 == 5) {
          *(int32_t *)((longlong)unaff_RDI + 0x178c) = 5;
        }
      }
    }
  }
  if ((((*(int *)((longlong)unaff_RDI + 0x178c) != 2) && ((*(byte *)(unaff_RDI + 0x269) & 2) != 0))
      && (cVar3 = func_0x0001805b7d30(), cVar3 == '\0')) &&
     (pcVar7 = (char *)FUN_1805b7230(unaff_RDI + 1), *pcVar7 != '\0')) {
    func_0x0001805d89b0(extraout_XMM0_Da_03,0x4000);
  }
LAB_1805cbf5f:
  cVar3 = func_0x0001805b7d30();
  if (cVar3 == '\0') {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805cba86(void)
void FUN_1805cba86(void)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar4;
  uint in_EAX;
  int iVar5;
  uint64_t uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t uVar12;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  float fVar13;
  float fVar14;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  ulonglong in_stack_000000c0;
  
  if ((in_EAX >> 0xc & 1) == 0) {
    FUN_1805d4df0(unaff_RDI + 1);
    in_EAX = *(uint *)(unaff_RDI + 2);
  }
  fVar1 = *(float *)(unaff_RDI + 0x22);
  if ((in_EAX >> 0xc & 1) == 0) {
    FUN_1805d4df0(unaff_RDI + 1);
  }
  fVar14 = 0.0;
  if ((int)unaff_RDI[0x295] == 0) {
    fVar14 = *(float *)((longlong)unaff_RDI + 0x1dc) -
             *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x10);
    fVar13 = *(float *)(unaff_RDI + 0x3b) - *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0xc);
    fVar14 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
  }
  if (*(float *)((longlong)unaff_RDI + 0x114) <= fVar1 &&
      fVar1 != *(float *)((longlong)unaff_RDI + 0x114)) {
    fVar1 = *(float *)(*unaff_RDI + 0x2d4);
    uVar11 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
    uVar11 = uVar11 >> 0x11 ^ uVar11;
    uVar11 = uVar11 << 5 ^ uVar11;
    *(uint *)(unaff_RDI + 0x272) = uVar11;
    if ((float)(uVar11 - 1) * 2.3283064e-10 < fVar1) {
      cVar4 = func_0x0001805b7bd0();
      if (cVar4 == '\0') {
        uVar6 = FUN_1805b7970(extraout_XMM0_Da,&stack0x00000040);
        if ((char)unaff_RDI[0x438] == '\0') {
          uVar12 = *(int32_t *)((longlong)unaff_RDI + 0x14b4);
        }
        else {
          uVar12 = *(int32_t *)((longlong)unaff_RDI + 0x21c4);
        }
        iVar5 = FUN_1805bf5a0(extraout_XMM0_Da_00,uVar12,uVar6);
      }
      else {
        if ((*(uint *)(unaff_RDI + 2) & 0x2000) == 0) {
          FUN_1805d4fe0(unaff_RDI + 1);
        }
        iVar5 = (int)unaff_RDI[0x23];
      }
      *(int *)(unaff_RDI + 0x2f2) = iVar5;
      if (fVar14 < *(float *)(*(longlong *)(*unaff_RDI + 0x20) + 0x8c) * 4.0) {
        if (iVar5 == 3) {
          if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                           unaff_RDI[0x2e9]) * 1e-05) {
            pcVar7 = (char *)FUN_1805b7420(unaff_RDI + 1);
            if (*pcVar7 == '\0') {
              if ((*(int *)((longlong)unaff_RDI + 0x178c) != 2) &&
                 ((*(uint *)((longlong)unaff_RDI + 0x209c) >> 2 & 1) != 0)) {
                cVar4 = func_0x0001805b7d30();
                if (cVar4 == '\0') {
                  cVar4 = func_0x0001805b7cd0();
                  if (cVar4 == '\0') goto LAB_1805cbf10;
                }
                *(int32_t *)(unaff_RDI + 0x2f1) = 0;
                unaff_RDI[0x2ed] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ee] * 8) +
                     -0x8000000000000000;
                fVar1 = *(float *)((longlong)unaff_RDI + 0x21a4);
                fVar14 = *(float *)(*unaff_RDI + 0x2d4);
                *(float *)((longlong)unaff_RDI + 0x21a4) = *(float *)(*unaff_RDI + 0x324) * 0.1;
                unaff_RDI[0x2e0] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2e1] * 8) -
                     (longlong)
                     (((-2.0 / fVar14) * *(float *)(unaff_RDI + 0x28d) - fVar1) * 100000.0);
              }
            }
            else {
              *(int32_t *)((longlong)unaff_RDI + 0x178c) = 2;
              lVar8 = FUN_1805a0610(*unaff_RDI + 0x28,1);
              if (lVar8 != 0) {
                lVar9 = FUN_18053a5a0(&DAT_180c95f30,
                                      *(int32_t *)(*(longlong *)(*unaff_RDI + 0x590) + 0xac),
                                      *(int32_t *)(lVar8 + 0x1c));
                lVar8 = *unaff_RDI;
                fVar14 = 1.0;
                fVar1 = *(float *)(lVar9 + 0x188);
                lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x8f8) + 0x9e8);
                if (lVar9 != 0) {
                  fVar14 = (float)*(int *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x68 +
                                          *(longlong *)(lVar9 + 0xd0)) * 0.01;
                }
                fVar13 = *(float *)(lVar8 + 0x3ac);
                fVar2 = *(float *)(lVar8 + 0x3c8);
                uVar11 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
                uVar11 = uVar11 >> 0x11 ^ uVar11;
                uVar11 = uVar11 << 5 ^ uVar11;
                *(uint *)(unaff_RDI + 0x272) = uVar11;
                unaff_RDI[0x2e9] =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                     (longlong)
                     ((fVar1 / (fVar13 * fVar14) + fVar2 + 0.25 + (float)(uVar11 - 1) * 5.820766e-11
                      ) * -100000.0);
              }
            }
          }
        }
        else if (((iVar5 - 1U & 0xfffffffc) == 0) && (iVar5 != 3)) {
          if (1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
                           unaff_RDI[0x2e9]) * 1e-05) {
            cVar4 = func_0x000180522f60(*unaff_RDI);
            if ((cVar4 == '\0') && ((*(uint *)((longlong)unaff_RDI + 0x209c) >> 0xb & 1) == 0)) {
              uVar12 = FUN_1805be810(extraout_XMM0_Da_01,&stack0x000000c0);
              if ((int)in_stack_000000c0 == -1) {
                puVar10 = (ulonglong *)FUN_1805bed80(uVar12,&stack0x000000c0);
                in_stack_000000c0 = *puVar10;
                uVar12 = extraout_XMM0_Da_02;
              }
              uVar3 = in_stack_000000c0;
              if (-1 < (int)in_stack_000000c0) {
                if ((char)unaff_RDI[0x438] == '\0') {
                  iVar5 = *(int *)((longlong)unaff_RDI + 0x14b4);
                }
                else {
                  iVar5 = *(int *)((longlong)unaff_RDI + 0x21c4);
                }
                if ((int)in_stack_000000c0 != iVar5) {
                  FUN_1805d1c80(uVar12,&stack0x000000c0);
                  if ((int)unaff_RDI[0x295] == 2) {
                    FUN_1805d9040(unaff_RDI + 0x2f,uVar3 & 0xffffffff);
                  }
                }
              }
            }
          }
        }
        else if (iVar5 == 5) {
          *(int32_t *)((longlong)unaff_RDI + 0x178c) = 5;
        }
      }
    }
  }
LAB_1805cbf10:
  if ((*(int *)((longlong)unaff_RDI + 0x178c) != 2) && ((*(byte *)(unaff_RDI + 0x269) & 2) != 0)) {
    cVar4 = func_0x0001805b7d30();
    if (cVar4 == '\0') {
      pcVar7 = (char *)FUN_1805b7230(unaff_RDI + 1);
      if (*pcVar7 != '\0') {
        func_0x0001805d89b0(extraout_XMM0_Da_03,0x4000);
      }
    }
  }
  cVar4 = func_0x0001805b7d30();
  if (cVar4 == '\0') {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805cbf26(void)
void FUN_1805cbf26(void)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RDI;
  
  if ((*(int *)(unaff_RDI + 0x178c) != 2) && ((*(byte *)(unaff_RDI + 0x1348) & 2) != 0)) {
    cVar2 = func_0x0001805b7d30();
    if (cVar2 == '\0') {
      pcVar1 = (char *)FUN_1805b7230(unaff_RDI + 8);
      if (*pcVar1 != '\0') {
        func_0x0001805d89b0();
      }
    }
  }
  cVar2 = func_0x0001805b7d30();
  if (cVar2 == '\0') {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805cbf7b(void)
void FUN_1805cbf7b(void)

{
  FUN_1805caef0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





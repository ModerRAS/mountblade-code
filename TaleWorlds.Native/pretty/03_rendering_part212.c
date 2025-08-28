#include "TaleWorlds.Native.Split.h"
// 03_rendering_part212.c - 4 个函数
// 函数: void function_38df30(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t *param_5,
void function_38df30(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t *param_5,
                  float param_6,char param_7)
{
  ushort *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  int64_t lVar16;
  ushort uVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t stack_special_x_8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  cVar7 = param_7;
  stack_special_x_8._4_4_ = 0.0;
  fVar27 = 0.0;
  uVar2 = *param_5;
  iVar14 = -1;
  stack_special_x_8 = 0;
  param_5 = (uint64_t *)0x0;
  iVar13 = -1;
  if (param_3 < param_4) {
    cVar15 = *(char *)(param_2 + 0x1024);
    fStack_d4 = (float)((uint64_t)uVar2 >> 0x20);
    fStack_d8 = (float)uVar2;
    fVar18 = 0.0;
    fVar19 = 0.0;
    iVar12 = param_3;
    do {
      lVar10 = (int64_t)param_3 * 0x20;
      lVar9 = param_2;
      if (cVar15 == '\0') {
        lVar9 = *(int64_t *)(param_2 + 0x1000);
      }
      if (param_3 < param_4 + -1) {
        puVar3 = *(uint64_t **)(lVar9 + 8 + lVar10);
        pfVar4 = (float *)*puVar3;
        pfVar5 = (float *)puVar3[1];
        fStack_e0 = *pfVar4 - fStack_d8;
        fStack_dc = pfVar4[1] - fStack_d4;
        fVar23 = *pfVar5 - fStack_d8;
        fVar24 = pfVar5[1] - fStack_d4;
        if (((fStack_e0 != 0.0) || (fStack_dc != 0.0)) && ((fVar23 != 0.0 || (fVar24 != 0.0)))) {
          if ((*(char *)(pfVar4 + 3) != '\0') || (*(char *)(pfVar5 + 3) != '\0')) {
            fVar21 = fStack_e0 - fVar23;
            fVar26 = fStack_dc - fVar24;
            fVar22 = fVar21 * fVar21 + fVar26 * fVar26;
            auVar20 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar19 = auVar20._0_4_;
            fVar18 = param_6;
            if (param_6 <= 0.4) {
              fVar18 = 0.4;
            }
            fVar25 = fVar19 * 0.5 * (3.0 - fVar22 * fVar19 * fVar19);
            fVar22 = fVar25 * fVar22 * 0.4;
            if (fVar18 <= fVar22) {
              fVar22 = fVar18;
            }
            if (*(char *)(pfVar4 + 3) != '\0') {
              fStack_e0 = fStack_e0 - fVar22 * fVar25 * fVar21;
              fStack_dc = fStack_dc - fVar22 * fVar26 * fVar25;
            }
            fVar18 = param_5._4_4_;
            fVar19 = (float)stack_special_x_8;
            if (*(char *)(pfVar5 + 3) != '\0') {
              fVar24 = fVar24 + fVar22 * fVar26 * fVar25;
              fVar23 = fVar22 * fVar25 * fVar21 + fVar23;
            }
          }
          fVar22 = fVar23;
          fVar26 = stack_special_x_8._4_4_;
          fVar21 = fVar24;
          if (fVar24 * fStack_e0 - fVar23 * fStack_dc < 0.0) {
            fVar22 = fStack_e0;
            fVar21 = fStack_dc;
            fStack_e0 = fVar23;
            fStack_dc = fVar24;
          }
          goto LAB_18038e204;
        }
        iVar12 = iVar12 + 1;
      }
      else {
        fStack_e0 = *(float *)(lVar9 + lVar10) - fStack_d8;
        fStack_dc = *(float *)(lVar9 + 4 + lVar10) - fStack_d4;
        fVar22 = fStack_e0;
        fVar26 = stack_special_x_8._4_4_;
        fVar21 = fStack_dc;
LAB_18038e204:
        uVar17 = 0x8000;
        if (param_3 == iVar12) {
          stack_special_x_8 = CONCAT44(fVar21,fVar22);
          param_5 = (uint64_t *)CONCAT44(fStack_dc,fStack_e0);
          fVar27 = fStack_e0;
          iVar13 = param_3;
          iVar14 = param_3;
        }
        else {
          if (fStack_dc * fVar19 - fStack_e0 * fVar26 <= 0.0) {
            uVar17 = 0x8000;
            if (0.0 <= fVar21 * fVar27 - fVar18 * fVar22) {
              if (fVar21 * fVar19 - fVar22 * fVar26 < 0.0) {
                stack_special_x_8 = CONCAT44(fVar21,fVar22);
                iVar14 = param_3;
              }
              if (0.0 < fStack_dc * fVar27 - fStack_e0 * fVar18) {
                param_5 = (uint64_t *)CONCAT44(fStack_dc,fStack_e0);
                fVar27 = fStack_e0;
                iVar13 = param_3;
              }
              if (cVar7 != '\0') {
                lVar16 = *(int64_t *)(lVar9 + 8 + lVar10);
                if (lVar16 == 0) {
                  lVar9 = *(int64_t *)(lVar9 + 0x10 + lVar10);
                  uVar17 = 0x8000;
                }
                else {
                  uVar17 = 0x8000;
                  cVar8 = SystemFunction_00018038b3c0();
                  if (cVar8 != '\0') goto LAB_18038e2ee;
                  lVar9 = *(int64_t *)(lVar16 + 0x18);
                }
                if ((lVar9 != 0) && (cVar8 = SystemFunction_00018038b3c0(), cVar8 != '\0'))
                goto LAB_18038e2ee;
              }
              goto LAB_18038e391;
            }
LAB_18038e2ee:
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pfVar4 = (float *)&param_5;
          iVar11 = iVar13;
          if (bVar6) {
            iVar11 = iVar14;
            pfVar4 = (float *)&stack_special_x_8;
          }
          lVar10 = (int64_t)iVar11 * 0x20;
          lVar9 = param_2;
          if (cVar15 == '\0') {
            lVar9 = *(int64_t *)(param_2 + 0x1000);
          }
          *(uint64_t *)(lVar10 + lVar9) = CONCAT44(fStack_d4 + pfVar4[1],fStack_d8 + *pfVar4);
          lVar9 = param_2;
          if (*(char *)(param_2 + 0x1024) == '\0') {
            lVar9 = *(int64_t *)(param_2 + 0x1000);
          }
          puVar1 = (ushort *)(lVar10 + 0x18 + lVar9);
          *puVar1 = *puVar1 | uVar17;
          cVar15 = *(char *)(param_2 + 0x1024);
          lVar9 = param_2;
          if (cVar15 == '\0') {
            lVar9 = *(int64_t *)(param_2 + 0x1000);
          }
          fStack_d4 = (float)((uint64_t)*(uint64_t *)(lVar10 + lVar9) >> 0x20);
          fStack_d8 = (float)*(uint64_t *)(lVar10 + lVar9);
          if (iVar11 + 1 != param_4 + -1) {
            param_3 = iVar11;
            iVar12 = iVar11 + 1;
          }
        }
      }
LAB_18038e391:
      param_3 = param_3 + 1;
      fVar18 = param_5._4_4_;
      fVar19 = (float)stack_special_x_8;
    } while (param_3 < param_4);
  }
  return;
}
// 函数: void function_38dfa7(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t param_5,
void function_38dfa7(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t param_5,
                  uint64_t param_6)
{
  ushort *puVar1;
  char cVar2;
  uint64_t *puVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int unaff_EBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  char cVar11;
  uint64_t unaff_RDI;
  int64_t lVar12;
  int64_t in_R10;
  ushort uVar13;
  int64_t in_R11;
  uint64_t unaff_R12;
  int unaff_R13D;
  int unaff_R14D;
  uint64_t unaff_R15;
  float fVar14;
  int8_t auVar15 [16];
  float in_XMM4_Da;
  float fVar16;
  float in_XMM5_Da;
  float fVar17;
  float unaff_XMM8_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM10_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM15_Da;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  cVar11 = *(char *)(param_2 + 0x1024);
  *(uint64_t *)(in_R11 + 0x18) = unaff_R12;
  cVar2 = *(char *)(unaff_RBP + 0x7f);
  *(uint64_t *)(in_R11 + 0x20) = unaff_R15;
  do {
    lVar9 = (int64_t)param_3 * 0x20;
    lVar8 = in_R10;
    if (cVar11 == '\0') {
      lVar8 = *(int64_t *)(in_R10 + 0x1000);
    }
    if (param_3 < param_4 + -1) {
      puVar3 = *(uint64_t **)(lVar8 + 8 + lVar9);
      pfVar4 = (float *)*puVar3;
      pfVar5 = (float *)puVar3[1];
      param_5._0_4_ = *pfVar4 - (float)param_6;
      param_5._4_4_ = pfVar4[1] - param_6._4_4_;
      fVar18 = *pfVar5 - (float)param_6;
      fVar19 = pfVar5[1] - param_6._4_4_;
      if ((((float)param_5 != unaff_XMM10_Da) || (param_5._4_4_ != unaff_XMM10_Da)) &&
         ((fVar18 != unaff_XMM10_Da || (fVar19 != unaff_XMM10_Da)))) {
        if ((*(char *)(pfVar4 + 3) != '\0') || (*(char *)(pfVar5 + 3) != '\0')) {
          fVar16 = (float)param_5 - fVar18;
          fVar22 = param_5._4_4_ - fVar19;
          fVar17 = fVar16 * fVar16 + fVar22 * fVar22;
          auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
          fVar21 = auVar15._0_4_;
          fVar14 = *(float *)(unaff_RBP + 0x77);
          if (fVar14 <= 0.4) {
            fVar14 = 0.4;
          }
          fVar20 = fVar21 * 0.5 * (3.0 - fVar17 * fVar21 * fVar21);
          fVar21 = fVar20 * fVar17 * 0.4;
          if (fVar14 <= fVar21) {
            fVar21 = fVar14;
          }
          if (*(char *)(pfVar4 + 3) != '\0') {
            param_5._0_4_ = (float)param_5 - fVar21 * fVar20 * fVar16;
            param_5._4_4_ = param_5._4_4_ - fVar21 * fVar22 * fVar20;
          }
          in_XMM4_Da = *(float *)(unaff_RBP + 0x73);
          in_XMM5_Da = *(float *)(unaff_RBP + 0x4f);
          if (*(char *)(pfVar5 + 3) != '\0') {
            fVar19 = fVar19 + fVar21 * fVar22 * fVar20;
            fVar18 = fVar21 * fVar20 * fVar16 + fVar18;
          }
        }
        if (unaff_XMM10_Da <= fVar19 * (float)param_5 - fVar18 * param_5._4_4_) {
          unaff_XMM8_Da = *(float *)(unaff_RBP + 0x53);
          fVar21 = fVar18;
          fVar14 = fVar19;
        }
        else {
          unaff_XMM8_Da = *(float *)(unaff_RBP + 0x53);
          fVar21 = (float)param_5;
          fVar14 = param_5._4_4_;
          param_5._0_4_ = fVar18;
          param_5._4_4_ = fVar19;
        }
        goto LAB_18038e204;
      }
      unaff_EBX = unaff_EBX + 1;
    }
    else {
      fVar21 = *(float *)(lVar8 + lVar9) - (float)param_6;
      fVar14 = *(float *)(lVar8 + 4 + lVar9) - param_6._4_4_;
      param_5._0_4_ = fVar21;
      param_5._4_4_ = fVar14;
LAB_18038e204:
      uVar13 = 0x8000;
      if (param_3 == unaff_EBX) {
        *(uint64_t *)(unaff_RBP + 0x4f) = CONCAT44(fVar14,fVar21);
        *(uint64_t *)(unaff_RBP + 0x6f) = CONCAT44(param_5._4_4_,(float)param_5);
        unaff_XMM15_Da = *(float *)(unaff_RBP + 0x6f);
        unaff_R14D = param_3;
        unaff_ESI = param_3;
      }
      else {
        if (param_5._4_4_ * in_XMM5_Da - (float)param_5 * unaff_XMM8_Da <= unaff_XMM10_Da) {
          uVar13 = 0x8000;
          if (unaff_XMM10_Da <= fVar14 * unaff_XMM15_Da - in_XMM4_Da * fVar21) {
            if (fVar14 * in_XMM5_Da - fVar21 * unaff_XMM8_Da < unaff_XMM10_Da) {
              *(uint64_t *)(unaff_RBP + 0x4f) = CONCAT44(fVar14,fVar21);
              unaff_ESI = param_3;
            }
            if (unaff_XMM10_Da < param_5._4_4_ * unaff_XMM15_Da - (float)param_5 * in_XMM4_Da) {
              *(uint64_t *)(unaff_RBP + 0x6f) = CONCAT44(param_5._4_4_,(float)param_5);
              unaff_XMM15_Da = *(float *)(unaff_RBP + 0x6f);
              unaff_R14D = param_3;
            }
            if (cVar2 != '\0') {
              lVar12 = *(int64_t *)(lVar8 + 8 + lVar9);
              if (lVar12 == 0) {
                lVar8 = *(int64_t *)(lVar8 + 0x10 + lVar9);
                uVar13 = 0x8000;
              }
              else {
                uVar13 = 0x8000;
                cVar7 = SystemFunction_00018038b3c0();
                if (cVar7 != '\0') goto LAB_18038e2ee;
                lVar8 = *(int64_t *)(lVar12 + 0x18);
              }
              if ((lVar8 != 0) && (cVar7 = SystemFunction_00018038b3c0(), cVar7 != '\0'))
              goto LAB_18038e2ee;
            }
            goto LAB_18038e391;
          }
LAB_18038e2ee:
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pfVar4 = (float *)(unaff_RBP + 0x6f);
        iVar10 = unaff_R14D;
        if (bVar6) {
          iVar10 = unaff_ESI;
          pfVar4 = (float *)(unaff_RBP + 0x4f);
        }
        lVar9 = (int64_t)iVar10 * 0x20;
        lVar8 = in_R10;
        if (cVar11 == '\0') {
          lVar8 = *(int64_t *)(in_R10 + 0x1000);
        }
        *(uint64_t *)(lVar9 + lVar8) = CONCAT44(param_6._4_4_ + pfVar4[1],(float)param_6 + *pfVar4)
        ;
        lVar8 = in_R10;
        if (*(char *)(in_R10 + 0x1024) == '\0') {
          lVar8 = *(int64_t *)(in_R10 + 0x1000);
        }
        puVar1 = (ushort *)(lVar9 + 0x18 + lVar8);
        *puVar1 = *puVar1 | uVar13;
        cVar11 = *(char *)(in_R10 + 0x1024);
        lVar8 = in_R10;
        if (cVar11 == '\0') {
          lVar8 = *(int64_t *)(in_R10 + 0x1000);
        }
        param_6._4_4_ = (float)((uint64_t)*(uint64_t *)(lVar9 + lVar8) >> 0x20);
        param_6._0_4_ = (float)*(uint64_t *)(lVar9 + lVar8);
        if (iVar10 + 1 != param_4 + -1) {
          unaff_EBX = iVar10 + 1;
          param_3 = iVar10;
        }
      }
    }
LAB_18038e391:
    in_XMM4_Da = *(float *)(unaff_RBP + 0x73);
    param_3 = param_3 + 1;
    in_XMM5_Da = *(float *)(unaff_RBP + 0x4f);
    unaff_XMM8_Da = *(float *)(unaff_RBP + 0x53);
    if (unaff_R13D <= param_3) {
      return;
    }
  } while( true );
}
// 函数: void function_38e3ff(void)
void function_38e3ff(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x00018038e6f7)
// 函数: void function_38e430(uint64_t param_1,int param_2,int64_t param_3,int64_t param_4,float *param_5,
void function_38e430(uint64_t param_1,int param_2,int64_t param_3,int64_t param_4,float *param_5,
                  float *param_6,int64_t param_7)
{
  int64_t *plVar1;
  int32_t *puVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  char cVar9;
  ushort uVar10;
  int64_t *plVar11;
  ushort uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  uint64_t *puVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  bVar5 = SystemCore_PerformanceMonitor(param_3,param_5);
  bVar20 = bVar5;
  cVar6 = SystemCore_PerformanceMonitor(param_4,param_6);
  plVar1 = (int64_t *)(param_7 + 0x1000);
  if (*(char *)(param_7 + 0x1024) == '\0') {
    *(int64_t *)(param_7 + 0x1008) = *plVar1;
    *(int8_t *)(param_7 + 0x1024) = 1;
  }
  *(int32_t *)(param_7 + 0x1020) = 0;
  lVar23 = param_4;
  if (param_4 != param_3) {
    do {
      iVar7 = SystemFunction_000180396660(param_7);
      bVar20 = bVar5;
      if (0x3ff < iVar7) break;
      local_var_f8 = 0;
      local_var_f0 = 0;
      local_var_e8 = 0;
      local_var_e0 = 0;
      if (*(char *)(param_7 + 0x1024) == '\0') {
LAB_18038e527:
        function_396dd0(plVar1,&local_var_f8);
      }
      else {
        if (0x80 < *(int *)(param_7 + 0x1020) + 1) {
          function_396b10(param_7);
          goto LAB_18038e527;
        }
        lVar13 = (int64_t)*(int *)(param_7 + 0x1020) * 0x20;
        puVar2 = (int32_t *)(lVar13 + param_7);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar21 = (uint64_t *)(lVar13 + 0x10 + param_7);
        *puVar21 = 0;
        puVar21[1] = 0;
        *(int *)(param_7 + 0x1020) = *(int *)(param_7 + 0x1020) + 1;
      }
      lVar23 = *(int64_t *)(lVar23 + (int64_t)param_2 * 8);
    } while (lVar23 != param_3);
  }
  if (bVar20 == 0) {
    if (*(char *)(param_7 + 0x1024) == '\0') {
      iVar7 = (int)(*(int64_t *)(param_7 + 0x1008) - *plVar1 >> 5);
    }
    else {
      iVar7 = *(int *)(param_7 + 0x1020);
    }
    if (iVar7 < 0x400) {
      function_396750(param_7);
    }
  }
  cVar9 = *(char *)(param_7 + 0x1024);
  if (cVar9 == '\0') {
    iVar7 = (int)(*(int64_t *)(param_7 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar7 = *(int *)(param_7 + 0x1020);
  }
  if (iVar7 < 0x400) {
    function_396750(param_7);
    cVar9 = *(char *)(param_7 + 0x1024);
  }
  if (cVar9 == '\0') {
    iVar7 = (int)(*(int64_t *)(param_7 + 0x1008) - *plVar1 >> 5);
    cVar9 = '\0';
  }
  else {
    iVar7 = *(int *)(param_7 + 0x1020);
  }
  iVar7 = iVar7 + -2;
  if (cVar6 != '\0') {
    if (cVar9 == '\0') {
      iVar19 = (int)(*(int64_t *)(param_7 + 0x1008) - *plVar1 >> 5);
      cVar9 = '\0';
    }
    else {
      iVar19 = *(int *)(param_7 + 0x1020);
    }
    lVar13 = (int64_t)iVar19 * 0x20;
    lVar23 = param_7;
    if (cVar9 == '\0') {
      lVar23 = *plVar1;
    }
    *(uint64_t *)(lVar23 + -0x18 + lVar13) = 0;
    *(int64_t *)(lVar23 + -0x10 + lVar13) = param_4;
    uVar10 = *(ushort *)(param_4 + 0x124) & 0x7fff;
    uVar12 = uVar10 | 0x8000;
    if (-1 < *(short *)(lVar23 + -8 + lVar13)) {
      uVar12 = uVar10;
    }
    *(ushort *)(lVar23 + -8 + lVar13) = uVar12;
    *(uint64_t *)(lVar23 + -0x20 + lVar13) = *(uint64_t *)param_6;
    *(ushort *)(lVar23 + -8 + lVar13) = uVar12 | 0x8000;
    goto LAB_18038e99b;
  }
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_f8 = *(uint64_t *)param_6;
  local_var_e0 = 0x8000;
  if (cVar9 == '\0') {
LAB_18038e730:
    function_396dd0(plVar1,&local_var_f8);
  }
  else {
    if (0x80 < *(int *)(param_7 + 0x1020) + 1) {
      function_396b10(param_7);
      goto LAB_18038e730;
    }
    lVar23 = (int64_t)*(int *)(param_7 + 0x1020) * 0x20;
    puVar21 = (uint64_t *)(lVar23 + param_7);
    *puVar21 = local_var_f8;
    puVar21[1] = 0;
    puVar21 = (uint64_t *)(lVar23 + 0x10 + param_7);
    *puVar21 = 0;
    puVar21[1] = 0x8000;
    *(int *)(param_7 + 0x1020) = *(int *)(param_7 + 0x1020) + 1;
  }
  bVar20 = *(byte *)(param_4 + 0xa8);
  iVar19 = 0;
  uVar24 = (uint)bVar20;
  if (bVar20 != 0) {
    puVar21 = (uint64_t *)(param_4 + 0x80);
    lVar23 = 0;
    fVar31 = *param_6 - *(float *)(param_4 + 0xe8);
    iVar17 = 1;
    fVar32 = param_6[1] - *(float *)(param_4 + 0xec);
    do {
      pfVar3 = *(float **)(param_4 + 0x80 + (int64_t)(iVar17 % (int)uVar24) * 8);
      fVar26 = pfVar3[1];
      fVar28 = ((float *)*puVar21)[1];
      fVar25 = *(float *)*puVar21;
      fVar29 = fVar26 - fVar28;
      fVar30 = *pfVar3 - fVar25;
      fVar27 = fVar32 * fVar30;
      if (((fVar28 - fVar26) * fVar31 + fVar27 <= 0.0001) &&
         (fVar27 = fVar31 * fVar29 - fVar27, fVar27 != 0.0)) {
        fVar25 = fVar25 - *(float *)(param_4 + 0xe8);
        fVar27 = 1.0 / fVar27;
        fVar28 = fVar28 - *(float *)(param_4 + 0xec);
        fVar26 = (fVar25 * fVar32 - fVar28 * fVar31) * fVar27;
        fVar27 = (fVar25 * fVar29 - fVar28 * fVar30) * fVar27;
        if ((-0.001 <= fVar27) && (((fVar27 <= 1.001 && (-0.001 <= fVar26)) && (fVar26 <= 1.001))))
        {
          fVar28 = fVar26;
          if (fVar27 <= fVar26) {
            fVar28 = fVar27;
          }
          if (fVar28 <= 1.0) {
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            if (0.0 <= fVar26) {
              if (iVar19 != -1) goto LAB_18038e922;
              break;
            }
          }
        }
      }
      iVar19 = iVar19 + 1;
      iVar17 = iVar17 + 1;
      lVar23 = lVar23 + 1;
      puVar21 = puVar21 + 1;
    } while (lVar23 < (int)uVar24);
  }
  iVar17 = 0;
  iVar19 = 0;
  if (uVar24 != 0) {
    puVar21 = (uint64_t *)(param_4 + 0x80);
    lVar23 = 0;
    iVar18 = 1;
    do {
      pfVar3 = *(float **)(param_4 + 0x80 + (int64_t)(iVar18 % (int)uVar24) * 8);
      pfVar4 = (float *)*puVar21;
      iVar19 = iVar17;
      if ((*pfVar3 - *pfVar4) * (param_6[1] - pfVar4[1]) -
          (pfVar3[1] - pfVar4[1]) * (*param_6 - *pfVar4) < 0.0) break;
      iVar17 = iVar17 + 1;
      iVar18 = iVar18 + 1;
      lVar23 = lVar23 + 1;
      puVar21 = puVar21 + 1;
      iVar19 = 0;
    } while (lVar23 < (int64_t)(uint64_t)bVar20);
  }
LAB_18038e922:
  if (*(char *)(param_7 + 0x1024) == '\0') {
    iVar17 = (int)(*(int64_t *)(param_7 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar17 = *(int *)(param_7 + 0x1020);
  }
  lVar13 = ((int64_t)iVar17 + -2) * 0x20;
  lVar23 = param_7;
  if (*(char *)(param_7 + 0x1024) == '\0') {
    lVar23 = *plVar1;
  }
  *(uint64_t *)(lVar23 + 8 + lVar13) = *(uint64_t *)(param_4 + 0x60 + (int64_t)iVar19 * 8);
  *(int64_t *)(lVar23 + 0x10 + lVar13) = param_4;
  *(ushort *)(lVar23 + 0x18 + lVar13) = *(ushort *)(param_4 + 0x124) & 0x7fff;
LAB_18038e99b:
  uVar22 = 0;
  if (bVar5 == 0) {
    bVar20 = *(byte *)(param_3 + 0xa8);
    uVar24 = (uint)bVar20;
    if (bVar20 != 0) {
      puVar21 = (uint64_t *)(param_3 + 0x80);
      fVar31 = *param_5 - *(float *)(param_3 + 0xe8);
      iVar19 = 1;
      fVar32 = param_5[1] - *(float *)(param_3 + 0xec);
      uVar14 = uVar22;
      do {
        pfVar3 = *(float **)(param_3 + 0x80 + (int64_t)(iVar19 % (int)uVar24) * 8);
        fVar26 = pfVar3[1];
        fVar28 = ((float *)*puVar21)[1];
        fVar25 = *(float *)*puVar21;
        fVar29 = fVar26 - fVar28;
        fVar30 = *pfVar3 - fVar25;
        fVar27 = fVar32 * fVar30;
        if (((fVar28 - fVar26) * fVar31 + fVar27 <= 0.0001) &&
           (fVar27 = fVar31 * fVar29 - fVar27, fVar27 != 0.0)) {
          fVar25 = fVar25 - *(float *)(param_3 + 0xe8);
          fVar27 = 1.0 / fVar27;
          fVar28 = fVar28 - *(float *)(param_3 + 0xec);
          fVar26 = (fVar25 * fVar32 - fVar28 * fVar31) * fVar27;
          fVar27 = (fVar25 * fVar29 - fVar28 * fVar30) * fVar27;
          if (((-0.001 <= fVar27) && ((fVar27 <= 1.001 && (-0.001 <= fVar26)))) && (fVar26 <= 1.001)
             ) {
            fVar28 = fVar26;
            if (fVar27 <= fVar26) {
              fVar28 = fVar27;
            }
            if (fVar28 <= 1.0) {
              if (fVar26 <= fVar27) {
                fVar26 = fVar27;
              }
              if (0.0 <= fVar26) {
                if ((int)uVar22 != -1) goto LAB_18038eb8f;
                break;
              }
            }
          }
        }
        uVar22 = (uint64_t)((int)uVar22 + 1);
        iVar19 = iVar19 + 1;
        uVar14 = uVar14 + 1;
        puVar21 = puVar21 + 1;
      } while ((int64_t)uVar14 < (int64_t)(int)uVar24);
    }
    uVar14 = 0;
    iVar19 = 0;
    if (uVar24 != 0) {
      puVar21 = (uint64_t *)(param_3 + 0x80);
      iVar19 = 1;
      uVar15 = uVar14;
      uVar8 = uVar14;
      do {
        pfVar3 = *(float **)(param_3 + 0x80 + (int64_t)(iVar19 % (int)uVar24) * 8);
        pfVar4 = (float *)*puVar21;
        uVar22 = uVar8;
        if ((param_5[1] - pfVar4[1]) * (*pfVar3 - *pfVar4) -
            (pfVar3[1] - pfVar4[1]) * (*param_5 - *pfVar4) <= 0.0) break;
        uVar8 = (uint64_t)((int)uVar8 + 1);
        iVar19 = iVar19 + 1;
        uVar15 = uVar15 + 1;
        puVar21 = puVar21 + 1;
        uVar22 = uVar14;
      } while ((int64_t)uVar15 < (int64_t)(uint64_t)bVar20);
LAB_18038eb8f:
      iVar19 = (int)uVar22;
    }
    lVar23 = param_7;
    if (*(char *)(param_7 + 0x1024) == '\0') {
      lVar23 = *plVar1;
    }
    *(uint64_t *)(lVar23 + 8) = *(uint64_t *)(param_3 + 0x60 + (int64_t)iVar19 * 8);
    *(uint64_t *)(lVar23 + 0x10) = 0;
    *(int16_t *)(lVar23 + 0x18) = 0;
  }
  if ((int)(bVar5 ^ 1) <= iVar7) {
    lVar23 = (int64_t)param_2;
    lVar13 = (int64_t)iVar7 << 5;
    uVar22 = (uint64_t)((iVar7 - (bVar5 ^ 1)) + 1);
    do {
      uVar15 = 0;
      uVar14 = uVar15;
      if (*(byte *)(param_4 + 0xa8) != 0) {
        plVar11 = (int64_t *)(param_4 + 0xb0);
        uVar8 = uVar15;
        do {
          if (*plVar11 == *(int64_t *)(param_4 + lVar23 * 8)) {
            uVar14 = *(uint64_t *)(param_4 + 0x60 + uVar8 * 8);
            if (uVar14 != 0) goto LAB_18038ed75;
            break;
          }
          uVar8 = uVar8 + 1;
          plVar11 = plVar11 + 1;
        } while ((int64_t)uVar8 < (int64_t)(uint64_t)*(byte *)(param_4 + 0xa8));
      }
      if ((*(byte *)(param_4 + 0x139) & 4) == 0) {
        plVar11 = *(int64_t **)(param_4 + 0xf8);
        uVar8 = (uint64_t)((int64_t)*(int64_t **)(param_4 + 0x100) + (7 - (int64_t)plVar11)) >>
                3;
        if (*(int64_t **)(param_4 + 0x100) < plVar11) {
          uVar8 = uVar15;
        }
        if (uVar8 != 0) {
          do {
            if (*plVar11 == *(int64_t *)(param_4 + lVar23 * 8)) {
              uVar14 = *(uint64_t *)(*plVar11 + 0x118);
            }
            plVar11 = plVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar8);
          goto LAB_18038ecd0;
        }
LAB_18038ecd9:
        lVar16 = 0;
        bVar20 = *(byte *)(param_3 + 0xa8);
        uVar14 = *(uint64_t *)(param_4 + 0x60);
        if (bVar20 != 0) {
          puVar21 = (uint64_t *)(param_3 + 0x80);
          iVar7 = 1;
          do {
            pfVar3 = *(float **)(param_3 + 0x80 + (int64_t)(iVar7 % (int)(uint)bVar20) * 8);
            pfVar4 = (float *)*puVar21;
            if ((*pfVar3 - *pfVar4) * (param_5[1] - pfVar4[1]) -
                (pfVar3[1] - pfVar4[1]) * (*param_5 - *pfVar4) <= 0.0) {
              uVar14 = *(uint64_t *)(param_4 + 0x60 + lVar16 * 8);
              break;
            }
            iVar7 = iVar7 + 1;
            lVar16 = lVar16 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar16 < (int64_t)(uint64_t)bVar20);
        }
      }
      else {
        uVar14 = *(uint64_t *)(param_4 + 0x118);
LAB_18038ecd0:
        if (uVar14 == 0) goto LAB_18038ecd9;
      }
LAB_18038ed75:
      lVar16 = param_7;
      if (*(char *)(param_7 + 0x1024) == '\0') {
        lVar16 = *plVar1;
      }
      plVar11 = (int64_t *)(param_4 + lVar23 * 8);
      *(uint64_t *)(lVar13 + 8 + lVar16) = uVar14;
      *(int64_t *)(lVar13 + 0x10 + lVar16) = *plVar11;
      *(ushort *)(lVar13 + 0x18 + lVar16) = *(ushort *)(*plVar11 + 0x124) & 0x7fff;
      lVar13 = lVar13 + -0x20;
      param_4 = *plVar11;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018038e6f7)
#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part313.c - 4 个函数

// 函数: void FUN_18083aa08(void)
void FUN_18083aa08(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018083abbd)

undefined8 FUN_18083aa20(longlong *param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  longlong lVar20;
  int iVar21;
  undefined1 auVar23 [64];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar22 [32];
  
  uVar11 = 0;
  uVar7 = *(int *)(*(longlong *)(*param_1 + 0x20) + (longlong)(int)param_1[5] * 4) / 2;
  if (param_3 != (int *)0x0) {
    iVar17 = *(int *)(param_2 + 0x38) * *param_3;
    iVar21 = 1;
    uVar18 = uVar11;
    if (1 < *(int *)(param_2 + 0x34)) {
      lVar20 = 1;
      uVar18 = 0;
      do {
        lVar10 = (longlong)*(char *)(*(longlong *)(param_2 + 0x18) + lVar20);
        if ((param_3[lVar10] & 0x7fffU) == param_3[lVar10]) {
          iVar14 = (param_3[lVar10] & 0x7fffU) * *(int *)(param_2 + 0x38);
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x10) + lVar10 * 2);
          iVar15 = iVar14 - iVar17;
          uVar18 = (uint)uVar2;
          iVar6 = (iVar15 * 0x100000) / (int)(uVar18 - uVar11);
          uVar13 = (uint)uVar2;
          if ((int)uVar7 <= (int)(uint)uVar2) {
            uVar13 = uVar7;
          }
          iVar9 = iVar6 * 8;
          auVar3 = vpinsrd_avx((undefined1  [16])0x0,iVar6,1);
          iVar15 = (iVar15 >> 0x1f & 0xff800U) + 0x400 + iVar17 * 0x100000;
          pauVar19 = (undefined1 (*) [32])(param_4 + (longlong)(int)uVar11 * 4);
          auVar4 = vpinsrd_avx(ZEXT416((uint)(iVar6 * 4)),iVar6 * 5,1);
          auVar4 = vpinsrd_avx(auVar4,iVar6 * 6,2);
          auVar4 = vpinsrd_avx(auVar4,iVar6 * 7,3);
          auVar3 = vpinsrd_avx(auVar3,iVar6 * 2,2);
          auVar3 = vpinsrd_avx(auVar3,iVar6 * 3,3);
          iVar17 = (int)(uVar13 - uVar11) >> 3;
          auVar24._4_4_ = iVar15;
          auVar24._0_4_ = iVar15;
          auVar24._8_4_ = iVar15;
          auVar24._12_4_ = iVar15;
          auVar24._16_4_ = iVar15;
          auVar24._20_4_ = iVar15;
          auVar24._24_4_ = iVar15;
          auVar24._28_4_ = iVar15;
          auVar22._16_16_ = auVar4;
          auVar22._0_16_ = auVar3;
          auVar25._4_4_ = iVar9;
          auVar25._0_4_ = iVar9;
          auVar25._8_4_ = iVar9;
          auVar25._12_4_ = iVar9;
          auVar25._16_4_ = iVar9;
          auVar25._20_4_ = iVar9;
          auVar25._24_4_ = iVar9;
          auVar25._28_4_ = iVar9;
          auVar5 = vpaddd_avx2(auVar22,auVar24);
          iVar15 = auVar5._0_4_;
          for (; iVar17 != 0; iVar17 = iVar17 + -1) {
            vpsrad_avx2(auVar5,0x14);
            auVar22 = vpcmpeqb_avx2(auVar22,auVar22);
            auVar5 = vpaddd_avx2(auVar5,auVar25);
            iVar15 = auVar5._0_4_;
            auVar24 = vgatherdps(auVar24,auVar22);
            auVar23._0_4_ = auVar24._0_4_ * *(float *)*pauVar19;
            auVar23._4_4_ = auVar24._4_4_ * *(float *)(*pauVar19 + 4);
            auVar23._8_4_ = auVar24._8_4_ * *(float *)(*pauVar19 + 8);
            auVar23._12_4_ = auVar24._12_4_ * *(float *)(*pauVar19 + 0xc);
            auVar23._16_4_ = auVar24._16_4_ * *(float *)(*pauVar19 + 0x10);
            auVar23._20_4_ = auVar24._20_4_ * *(float *)(*pauVar19 + 0x14);
            auVar23._28_36_ = SUB6436(ZEXT3264((undefined1  [32])0x0),0x1c);
            auVar23._24_4_ = auVar24._24_4_ * *(float *)(*pauVar19 + 0x18);
            auVar22 = auVar23._0_32_;
            *pauVar19 = auVar22;
            pauVar19 = pauVar19 + 1;
          }
          for (uVar13 = uVar13 - uVar11 & 7; iVar17 = iVar14, uVar11 = uVar18, uVar13 != 0;
              uVar13 = uVar13 - 1) {
            lVar10 = (longlong)iVar15;
            iVar15 = iVar15 + iVar6;
            *(float *)*pauVar19 =
                 *(float *)(&UNK_180980dc0 + (lVar10 >> 0x14) * 4) * *(float *)*pauVar19;
            pauVar19 = (undefined1 (*) [32])(*pauVar19 + 4);
          }
        }
        iVar21 = iVar21 + 1;
        lVar20 = lVar20 + 1;
      } while (iVar21 < *(int *)(param_2 + 0x34));
    }
    lVar20 = (longlong)(int)uVar18;
    lVar10 = (longlong)(int)uVar7;
    if (lVar20 < lVar10) {
      if (3 < lVar10 - lVar20) {
        lVar16 = (longlong)iVar17;
        lVar1 = lVar20 * 4;
        lVar12 = ((lVar10 - lVar20) - 4U >> 2) + 1;
        lVar20 = lVar20 + lVar12 * 4;
        pfVar8 = (float *)(param_4 + 8 + lVar1);
        do {
          pfVar8[-2] = *(float *)(&UNK_180980dc0 + lVar16 * 4) * pfVar8[-2];
          pfVar8[-1] = *(float *)(&UNK_180980dc0 + lVar16 * 4) * pfVar8[-1];
          *pfVar8 = *(float *)(&UNK_180980dc0 + lVar16 * 4) * *pfVar8;
          pfVar8[1] = pfVar8[1] * *(float *)(&UNK_180980dc0 + lVar16 * 4);
          lVar12 = lVar12 + -1;
          pfVar8 = pfVar8 + 4;
        } while (lVar12 != 0);
      }
      if (lVar20 < lVar10) {
        do {
          *(float *)(param_4 + lVar20 * 4) =
               *(float *)(&UNK_180980dc0 + (longlong)iVar17 * 4) * *(float *)(param_4 + lVar20 * 4);
          lVar20 = lVar20 + 1;
        } while (lVar20 < lVar10);
      }
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  memset(param_4,0,(longlong)(int)uVar7 * 4);
}



// WARNING: Removing unreachable block (ram,0x00018083abbd)

undefined8 FUN_18083aa68(undefined8 param_1,uint param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  int iVar6;
  uint in_EAX;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int in_R10D;
  undefined *in_R11;
  undefined1 (*pauVar16) [32];
  longlong lVar17;
  longlong unaff_R13;
  longlong unaff_R14;
  int iVar18;
  undefined1 auVar20 [64];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  uint in_stack_00000060;
  longlong in_stack_00000070;
  undefined1 auVar19 [32];
  
  iVar18 = 1;
  if (1 < *(int *)(unaff_R13 + 0x34)) {
    lVar17 = 1;
    do {
      lVar10 = (longlong)*(char *)(*(longlong *)(unaff_R13 + 0x18) + lVar17);
      uVar12 = *(uint *)(param_3 + lVar10 * 4) & 0x7fff;
      if (uVar12 == *(uint *)(param_3 + lVar10 * 4)) {
        iVar13 = uVar12 * *(int *)(unaff_R13 + 0x38);
        uVar2 = *(ushort *)(*(longlong *)(unaff_R13 + 0x10) + lVar10 * 2);
        iVar14 = iVar13 - in_R10D;
        param_2 = (uint)uVar2;
        iVar6 = (iVar14 * 0x100000) / (int)(param_2 - param_4);
        uVar12 = (uint)uVar2;
        if ((int)in_stack_00000060 <= (int)(uint)uVar2) {
          uVar12 = in_stack_00000060;
        }
        iVar9 = iVar6 * 8;
        auVar3 = vpinsrd_avx((undefined1  [16])0x0,iVar6,1);
        iVar14 = (iVar14 >> 0x1f & 0xff800U) + 0x400 + in_R10D * 0x100000;
        pauVar16 = (undefined1 (*) [32])(unaff_R14 + (longlong)(int)param_4 * 4);
        auVar4 = vpinsrd_avx(ZEXT416((uint)(iVar6 * 4)),iVar6 * 5,1);
        auVar4 = vpinsrd_avx(auVar4,iVar6 * 6,2);
        auVar4 = vpinsrd_avx(auVar4,iVar6 * 7,3);
        auVar3 = vpinsrd_avx(auVar3,iVar6 * 2,2);
        auVar3 = vpinsrd_avx(auVar3,iVar6 * 3,3);
        iVar7 = (int)(uVar12 - param_4) >> 3;
        auVar21._4_4_ = iVar14;
        auVar21._0_4_ = iVar14;
        auVar21._8_4_ = iVar14;
        auVar21._12_4_ = iVar14;
        auVar21._16_4_ = iVar14;
        auVar21._20_4_ = iVar14;
        auVar21._24_4_ = iVar14;
        auVar21._28_4_ = iVar14;
        auVar19._16_16_ = auVar4;
        auVar19._0_16_ = auVar3;
        auVar22._4_4_ = iVar9;
        auVar22._0_4_ = iVar9;
        auVar22._8_4_ = iVar9;
        auVar22._12_4_ = iVar9;
        auVar22._16_4_ = iVar9;
        auVar22._20_4_ = iVar9;
        auVar22._24_4_ = iVar9;
        auVar22._28_4_ = iVar9;
        auVar5 = vpaddd_avx2(auVar19,auVar21);
        iVar14 = auVar5._0_4_;
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          vpsrad_avx2(auVar5,0x14);
          auVar19 = vpcmpeqb_avx2(auVar19,auVar19);
          auVar5 = vpaddd_avx2(auVar5,auVar22);
          iVar14 = auVar5._0_4_;
          auVar21 = vgatherdps(auVar21,auVar19);
          auVar20._0_4_ = auVar21._0_4_ * *(float *)*pauVar16;
          auVar20._4_4_ = auVar21._4_4_ * *(float *)(*pauVar16 + 4);
          auVar20._8_4_ = auVar21._8_4_ * *(float *)(*pauVar16 + 8);
          auVar20._12_4_ = auVar21._12_4_ * *(float *)(*pauVar16 + 0xc);
          auVar20._16_4_ = auVar21._16_4_ * *(float *)(*pauVar16 + 0x10);
          auVar20._20_4_ = auVar21._20_4_ * *(float *)(*pauVar16 + 0x14);
          auVar20._28_36_ = SUB6436(ZEXT3264((undefined1  [32])0x0),0x1c);
          auVar20._24_4_ = auVar21._24_4_ * *(float *)(*pauVar16 + 0x18);
          auVar19 = auVar20._0_32_;
          *pauVar16 = auVar19;
          pauVar16 = pauVar16 + 1;
        }
        for (uVar12 = uVar12 - param_4 & 7; param_3 = in_stack_00000070, in_R10D = iVar13,
            param_4 = param_2, uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar10 = (longlong)iVar14;
          iVar14 = iVar14 + iVar6;
          *(float *)*pauVar16 =
               *(float *)(&UNK_180980dc0 + (lVar10 >> 0x14) * 4) * *(float *)*pauVar16;
          pauVar16 = (undefined1 (*) [32])(*pauVar16 + 4);
        }
      }
      iVar18 = iVar18 + 1;
      lVar17 = lVar17 + 1;
    } while (iVar18 < *(int *)(unaff_R13 + 0x34));
    in_R11 = &UNK_180980dc0;
    in_EAX = in_stack_00000060;
  }
  lVar17 = (longlong)(int)param_2;
  lVar10 = (longlong)(int)in_EAX;
  if (lVar17 < lVar10) {
    if (3 < lVar10 - lVar17) {
      lVar15 = (longlong)in_R10D;
      lVar1 = lVar17 * 4;
      lVar11 = ((lVar10 - lVar17) - 4U >> 2) + 1;
      lVar17 = lVar17 + lVar11 * 4;
      pfVar8 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar8[-2] = *(float *)(in_R11 + lVar15 * 4) * pfVar8[-2];
        pfVar8[-1] = *(float *)(in_R11 + lVar15 * 4) * pfVar8[-1];
        *pfVar8 = *(float *)(in_R11 + lVar15 * 4) * *pfVar8;
        pfVar8[1] = pfVar8[1] * *(float *)(in_R11 + lVar15 * 4);
        lVar11 = lVar11 + -1;
        pfVar8 = pfVar8 + 4;
      } while (lVar11 != 0);
    }
    if (lVar17 < lVar10) {
      do {
        *(float *)(unaff_R14 + lVar17 * 4) =
             *(float *)(in_R11 + (longlong)in_R10D * 4) * *(float *)(unaff_R14 + lVar17 * 4);
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar10);
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018083abbd)

undefined8 FUN_18083aa7d(undefined8 param_1,uint param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int in_R10D;
  undefined1 (*pauVar17) [32];
  ulonglong uVar18;
  longlong unaff_R13;
  longlong unaff_R14;
  uint unaff_R15D;
  undefined1 auVar20 [64];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  uint in_stack_00000060;
  longlong in_stack_00000070;
  undefined1 auVar19 [32];
  
  uVar18 = (ulonglong)unaff_R15D;
  do {
    lVar10 = (longlong)*(char *)(*(longlong *)(unaff_R13 + 0x18) + uVar18);
    uVar12 = *(uint *)(param_3 + lVar10 * 4) & 0x7fff;
    if (uVar12 == *(uint *)(param_3 + lVar10 * 4)) {
      iVar13 = uVar12 * *(int *)(unaff_R13 + 0x38);
      uVar2 = *(ushort *)(*(longlong *)(unaff_R13 + 0x10) + lVar10 * 2);
      iVar14 = iVar13 - in_R10D;
      param_2 = (uint)uVar2;
      iVar6 = (iVar14 * 0x100000) / (int)(param_2 - param_4);
      uVar12 = (uint)uVar2;
      if ((int)in_stack_00000060 <= (int)(uint)uVar2) {
        uVar12 = in_stack_00000060;
      }
      iVar9 = iVar6 * 8;
      auVar3 = vpinsrd_avx((undefined1  [16])0x0,iVar6,1);
      iVar14 = (iVar14 >> 0x1f & 0xff800U) + 0x400 + in_R10D * 0x100000;
      pauVar17 = (undefined1 (*) [32])(unaff_R14 + (longlong)(int)param_4 * 4);
      auVar4 = vpinsrd_avx(ZEXT416((uint)(iVar6 * 4)),iVar6 * 5,1);
      auVar4 = vpinsrd_avx(auVar4,iVar6 * 6,2);
      auVar4 = vpinsrd_avx(auVar4,iVar6 * 7,3);
      auVar3 = vpinsrd_avx(auVar3,iVar6 * 2,2);
      auVar3 = vpinsrd_avx(auVar3,iVar6 * 3,3);
      iVar7 = (int)(uVar12 - param_4) >> 3;
      auVar21._4_4_ = iVar14;
      auVar21._0_4_ = iVar14;
      auVar21._8_4_ = iVar14;
      auVar21._12_4_ = iVar14;
      auVar21._16_4_ = iVar14;
      auVar21._20_4_ = iVar14;
      auVar21._24_4_ = iVar14;
      auVar21._28_4_ = iVar14;
      auVar19._16_16_ = auVar4;
      auVar19._0_16_ = auVar3;
      auVar22._4_4_ = iVar9;
      auVar22._0_4_ = iVar9;
      auVar22._8_4_ = iVar9;
      auVar22._12_4_ = iVar9;
      auVar22._16_4_ = iVar9;
      auVar22._20_4_ = iVar9;
      auVar22._24_4_ = iVar9;
      auVar22._28_4_ = iVar9;
      auVar5 = vpaddd_avx2(auVar19,auVar21);
      iVar14 = auVar5._0_4_;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        vpsrad_avx2(auVar5,0x14);
        auVar19 = vpcmpeqb_avx2(auVar19,auVar19);
        auVar5 = vpaddd_avx2(auVar5,auVar22);
        iVar14 = auVar5._0_4_;
        auVar21 = vgatherdps(auVar21,auVar19);
        auVar20._0_4_ = auVar21._0_4_ * *(float *)*pauVar17;
        auVar20._4_4_ = auVar21._4_4_ * *(float *)(*pauVar17 + 4);
        auVar20._8_4_ = auVar21._8_4_ * *(float *)(*pauVar17 + 8);
        auVar20._12_4_ = auVar21._12_4_ * *(float *)(*pauVar17 + 0xc);
        auVar20._16_4_ = auVar21._16_4_ * *(float *)(*pauVar17 + 0x10);
        auVar20._20_4_ = auVar21._20_4_ * *(float *)(*pauVar17 + 0x14);
        auVar20._28_36_ = SUB6436(ZEXT3264((undefined1  [32])0x0),0x1c);
        auVar20._24_4_ = auVar21._24_4_ * *(float *)(*pauVar17 + 0x18);
        auVar19 = auVar20._0_32_;
        *pauVar17 = auVar19;
        pauVar17 = pauVar17 + 1;
      }
      for (uVar12 = uVar12 - param_4 & 7; param_3 = in_stack_00000070, in_R10D = iVar13,
          param_4 = param_2, uVar12 != 0; uVar12 = uVar12 - 1) {
        lVar10 = (longlong)iVar14;
        iVar14 = iVar14 + iVar6;
        *(float *)*pauVar17 =
             *(float *)(&UNK_180980dc0 + (lVar10 >> 0x14) * 4) * *(float *)*pauVar17;
        pauVar17 = (undefined1 (*) [32])(*pauVar17 + 4);
      }
    }
    unaff_R15D = unaff_R15D + 1;
    uVar18 = uVar18 + 1;
  } while ((int)unaff_R15D < *(int *)(unaff_R13 + 0x34));
  lVar10 = (longlong)(int)param_2;
  lVar16 = (longlong)(int)in_stack_00000060;
  if (lVar10 < lVar16) {
    if (3 < lVar16 - lVar10) {
      lVar15 = (longlong)in_R10D;
      lVar1 = lVar10 * 4;
      lVar11 = ((lVar16 - lVar10) - 4U >> 2) + 1;
      lVar10 = lVar10 + lVar11 * 4;
      pfVar8 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar8[-2] = *(float *)(&UNK_180980dc0 + lVar15 * 4) * pfVar8[-2];
        pfVar8[-1] = *(float *)(&UNK_180980dc0 + lVar15 * 4) * pfVar8[-1];
        *pfVar8 = *(float *)(&UNK_180980dc0 + lVar15 * 4) * *pfVar8;
        pfVar8[1] = pfVar8[1] * *(float *)(&UNK_180980dc0 + lVar15 * 4);
        lVar11 = lVar11 + -1;
        pfVar8 = pfVar8 + 4;
      } while (lVar11 != 0);
    }
    if (lVar10 < lVar16) {
      do {
        *(float *)(unaff_R14 + lVar10 * 4) =
             *(float *)(&UNK_180980dc0 + (longlong)in_R10D * 4) * *(float *)(unaff_R14 + lVar10 * 4)
        ;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar16);
    }
  }
  return 1;
}



undefined8 FUN_18083ac31(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int in_EAX;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int in_R10D;
  longlong in_R11;
  longlong unaff_R14;
  
  lVar3 = (longlong)param_2;
  lVar6 = (longlong)in_EAX;
  if (lVar3 < lVar6) {
    if (3 < lVar6 - lVar3) {
      lVar5 = (longlong)in_R10D;
      lVar1 = lVar3 * 4;
      lVar4 = ((lVar6 - lVar3) - 4U >> 2) + 1;
      lVar3 = lVar3 + lVar4 * 4;
      pfVar2 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar2[-2] = *(float *)(in_R11 + lVar5 * 4) * pfVar2[-2];
        pfVar2[-1] = *(float *)(in_R11 + lVar5 * 4) * pfVar2[-1];
        *pfVar2 = *(float *)(in_R11 + lVar5 * 4) * *pfVar2;
        pfVar2[1] = pfVar2[1] * *(float *)(in_R11 + lVar5 * 4);
        lVar4 = lVar4 + -1;
        pfVar2 = pfVar2 + 4;
      } while (lVar4 != 0);
    }
    if (lVar3 < lVar6) {
      do {
        *(float *)(unaff_R14 + lVar3 * 4) =
             *(float *)(in_R11 + (longlong)in_R10D * 4) * *(float *)(unaff_R14 + lVar3 * 4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar6);
    }
  }
  return 1;
}



undefined8 FUN_18083ac45(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  int in_R10D;
  longlong in_R11;
  longlong unaff_R14;
  
  if (3 < param_4 - param_1) {
    lVar4 = (longlong)in_R10D;
    lVar1 = param_1 * 4;
    lVar3 = ((param_4 - param_1) - 4U >> 2) + 1;
    param_1 = param_1 + lVar3 * 4;
    pfVar2 = (float *)(unaff_R14 + 8 + lVar1);
    do {
      pfVar2[-2] = *(float *)(in_R11 + lVar4 * 4) * pfVar2[-2];
      pfVar2[-1] = *(float *)(in_R11 + lVar4 * 4) * pfVar2[-1];
      *pfVar2 = *(float *)(in_R11 + lVar4 * 4) * *pfVar2;
      pfVar2[1] = pfVar2[1] * *(float *)(in_R11 + lVar4 * 4);
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 4;
    } while (lVar3 != 0);
  }
  if (param_1 < param_4) {
    do {
      *(float *)(unaff_R14 + param_1 * 4) =
           *(float *)(in_R11 + (longlong)in_R10D * 4) * *(float *)(unaff_R14 + param_1 * 4);
      param_1 = param_1 + 1;
    } while (param_1 < param_4);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083ad10(int param_1,undefined8 param_2)
void FUN_18083ad10(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong auStack_98 [2];
  undefined8 uStack_88;
  ulonglong uStack_80;
  
  uStack_80 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uVar1 = 0x100;
  if (param_1 != 0) {
    uVar1 = 0x800;
  }
  uVar2 = 3;
  if (param_1 != 0) {
    uVar2 = 6;
  }
  auStack_98[0] = (ulonglong)(uVar1 >> 1);
  uStack_88 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(auStack_98[0] * 4 + 0x20,param_2,uVar2,0xffffffffffffff0);
}



// WARNING: Removing unreachable block (ram,0x00018083b0e0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083b050(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
void FUN_18083b050(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined1 (*param_5) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  undefined1 in_ZMM0 [64];
  undefined1 auVar10 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  auVar7 = _DAT_180981460;
  auVar6 = _DAT_180981440;
  lVar9 = (longlong)param_3 * 4 - (longlong)param_5;
  pauVar8 = (undefined1 (*) [32])(*param_5 + ((longlong)param_3 >> 1) * 4);
  do {
    auVar1 = *(undefined1 (*) [32])(lVar9 + param_1 + (longlong)param_5);
    auVar3 = vpcmpeqb_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    pauVar8 = pauVar8 + -1;
    auVar11 = vgatherdpd(in_ZMM3._0_32_,auVar3);
    auVar3 = vshufps_avx(auVar11,auVar11,0xfa);
    auVar10 = vpcmpeqb_avx2(auVar3,auVar3);
    auVar11 = vshufps_avx(auVar11,auVar11,0x50);
    auVar13._0_4_ = auVar3._0_4_ * 1.0 + auVar11._0_4_;
    auVar13._4_4_ = auVar3._4_4_ * -1.0 + auVar11._4_4_;
    auVar13._8_4_ = auVar3._8_4_ * -1.0 + auVar11._8_4_;
    auVar13._12_4_ = auVar3._12_4_ * 1.0 + auVar11._12_4_;
    auVar13._16_4_ = auVar3._16_4_ * 1.0 + auVar11._16_4_;
    auVar13._20_4_ = auVar3._20_4_ * -1.0 + auVar11._20_4_;
    auVar13._24_4_ = auVar3._24_4_ * -1.0 + auVar11._24_4_;
    auVar13._28_4_ = in_ZMM2._28_4_ + auVar11._28_4_;
    auVar3 = vshufps_avx(auVar1,auVar1,0xeb);
    auVar10 = vgatherdpd(auVar11,auVar10);
    auVar11 = vshufps_avx(auVar10,auVar10,0xfa);
    auVar10 = vshufps_avx(auVar10,auVar10,0x50);
    auVar14._0_4_ = auVar11._0_4_ * 1.0 + auVar10._0_4_;
    auVar14._4_4_ = auVar11._4_4_ * -1.0 + auVar10._4_4_;
    auVar14._8_4_ = auVar11._8_4_ * -1.0 + auVar10._8_4_;
    auVar14._12_4_ = auVar11._12_4_ * 1.0 + auVar10._12_4_;
    auVar14._16_4_ = auVar11._16_4_ * 1.0 + auVar10._16_4_;
    auVar14._20_4_ = auVar11._20_4_ * -1.0 + auVar10._20_4_;
    auVar14._24_4_ = auVar11._24_4_ * -1.0 + auVar10._24_4_;
    auVar14._28_4_ = in_ZMM2._28_4_ + auVar10._28_4_;
    auVar11 = vshufps_avx(auVar1,auVar1,0x44);
    auVar10 = vperm2f128_avx(auVar11,auVar3,0x20);
    auVar2 = vperm2f128_avx(auVar11,auVar3,0x31);
    auVar3 = vshufps_avx(auVar13,auVar13,0xa0);
    auVar12._0_4_ = auVar10._0_4_ * auVar3._0_4_;
    auVar12._4_4_ = auVar10._4_4_ * auVar3._4_4_;
    auVar12._8_4_ = auVar10._8_4_ * auVar3._8_4_;
    auVar12._12_4_ = auVar10._12_4_ * auVar3._12_4_;
    auVar12._16_4_ = auVar10._16_4_ * auVar3._16_4_;
    auVar12._20_4_ = auVar10._20_4_ * auVar3._20_4_;
    auVar12._24_4_ = auVar10._24_4_ * auVar3._24_4_;
    auVar12._28_4_ = 0;
    auVar3 = vshufps_avx(auVar12,auVar12,0xee);
    auVar11 = vshufps_avx(auVar14,auVar14,0xa0);
    auVar10._4_4_ = auVar2._4_4_ * auVar11._4_4_;
    auVar10._0_4_ = auVar2._0_4_ * auVar11._0_4_;
    auVar10._8_4_ = auVar2._8_4_ * auVar11._8_4_;
    auVar10._12_4_ = auVar2._12_4_ * auVar11._12_4_;
    auVar10._16_4_ = auVar2._16_4_ * auVar11._16_4_;
    auVar10._20_4_ = auVar2._20_4_ * auVar11._20_4_;
    auVar10._24_4_ = auVar2._24_4_ * auVar11._24_4_;
    auVar10._28_4_ = auVar1._28_4_;
    auVar11 = vpermilps_avx(auVar12,auVar6);
    auVar1 = vaddsubps_avx(auVar11,auVar3);
    auVar3._4_4_ = auVar1._4_4_ * -1.0;
    auVar3._0_4_ = auVar1._0_4_ * -1.0;
    auVar3._8_4_ = auVar1._8_4_ * -1.0;
    auVar3._12_4_ = auVar1._12_4_ * 1.0;
    auVar3._16_4_ = auVar1._16_4_ * -1.0;
    auVar3._20_4_ = auVar1._20_4_ * -1.0;
    auVar3._24_4_ = auVar1._24_4_ * -1.0;
    auVar3._28_4_ = 0;
    auVar1 = vshufps_avx(auVar13,auVar13,0xdd);
    auVar2._4_4_ = auVar1._4_4_ * 0.5;
    auVar2._0_4_ = auVar1._0_4_ * 0.5;
    auVar2._8_4_ = auVar1._8_4_ * -0.5;
    auVar2._12_4_ = auVar1._12_4_ * 0.5;
    auVar2._16_4_ = auVar1._16_4_ * 0.5;
    auVar2._20_4_ = auVar1._20_4_ * 0.5;
    auVar2._24_4_ = auVar1._24_4_ * -0.5;
    auVar2._28_4_ = auVar11._28_4_;
    auVar1 = vsubps_avx(auVar2,auVar3);
    auVar11 = vpermps_avx2(auVar7,auVar1);
    auVar3 = vpermilps_avx(auVar10,auVar6);
    auVar1 = vshufps_avx(auVar10,auVar10,0xee);
    auVar1 = vaddsubps_avx(auVar3,auVar1);
    auVar4._4_4_ = auVar1._4_4_ * -1.0;
    auVar4._0_4_ = auVar1._0_4_ * -1.0;
    auVar4._8_4_ = auVar1._8_4_ * -1.0;
    auVar4._12_4_ = auVar1._12_4_ * 1.0;
    auVar4._16_4_ = auVar1._16_4_ * -1.0;
    auVar4._20_4_ = auVar1._20_4_ * -1.0;
    auVar4._24_4_ = auVar1._24_4_ * -1.0;
    auVar4._28_4_ = 0;
    in_ZMM3 = ZEXT3264(auVar4);
    auVar1 = vshufps_avx(auVar14,auVar14,0xdd);
    in_ZMM2 = ZEXT3264(auVar1);
    auVar5._4_4_ = auVar1._4_4_ * 0.5;
    auVar5._0_4_ = auVar1._0_4_ * 0.5;
    auVar5._8_4_ = auVar1._8_4_ * -0.5;
    auVar5._12_4_ = auVar1._12_4_ * 0.5;
    auVar5._16_4_ = auVar1._16_4_ * 0.5;
    auVar5._20_4_ = auVar1._20_4_ * 0.5;
    auVar5._24_4_ = auVar1._24_4_ * -0.5;
    auVar5._28_4_ = auVar3._28_4_;
    auVar1 = vsubps_avx(auVar5,auVar4);
    auVar3 = vpermps_avx2(auVar7,auVar1);
    auVar1 = vperm2f128_avx(auVar11,auVar3,0x20);
    in_ZMM0 = ZEXT3264(auVar1);
    *param_5 = auVar1;
    param_5 = param_5 + 1;
    auVar1 = vperm2f128_avx(auVar11,auVar3,0x13);
    *pauVar8 = auVar1;
  } while (param_5 < pauVar8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083b1f0(undefined8 param_1,undefined1 (*param_2) [32],int param_3,int param_4)
void FUN_18083b1f0(undefined8 param_1,undefined1 (*param_2) [32],int param_3,int param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  ulonglong uVar20;
  int iVar21;
  undefined1 in_ZMM0 [64];
  float in_register_0000125c;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 in_ZMM4 [64];
  uint uStackX_8;
  
  param_3 = param_3 + -1;
  uStackX_8 = 0;
  if (0 < param_3) {
    uVar18 = 1;
    do {
      auVar13 = _DAT_1809815e0;
      if (0 < (int)uVar18) {
        iVar21 = 4 << (uStackX_8 & 0x1f);
        lVar16 = (longlong)param_4 >> ((longlong)(int)uStackX_8 & 0x3fU);
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,iVar21 * 3,0);
        auVar2 = vpinsrd_avx(auVar2,iVar21 * 2,1);
        lVar17 = lVar16 >> 1;
        vpinsrd_avx(auVar2,iVar21,2);
        uVar20 = (ulonglong)uVar18;
        pauVar15 = param_2;
        do {
          pauVar14 = (undefined1 (*) [32])(pauVar15[-1] + lVar17 * 4);
          pauVar19 = (undefined1 (*) [32])((longlong)pauVar14 + (lVar16 - lVar17) * 4);
          do {
            auVar1 = *pauVar19;
            auVar4 = vsubps_avx(auVar1,*pauVar14);
            auVar5 = vpcmpeqb_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
            auVar23 = vgatherdpd(in_ZMM4._0_32_,auVar5);
            in_ZMM4 = ZEXT3264(auVar23);
            fVar6 = *(float *)(*pauVar14 + 4);
            fVar7 = *(float *)(*pauVar14 + 8);
            fVar8 = *(float *)(*pauVar14 + 0xc);
            fVar9 = *(float *)(*pauVar14 + 0x10);
            fVar10 = *(float *)(*pauVar14 + 0x14);
            fVar11 = *(float *)(*pauVar14 + 0x18);
            fVar12 = *(float *)(*pauVar14 + 0x1c);
            *(float *)*pauVar19 = auVar1._0_4_ + *(float *)*pauVar14;
            *(float *)(*pauVar19 + 4) = auVar1._4_4_ + fVar6;
            *(float *)(*pauVar19 + 8) = auVar1._8_4_ + fVar7;
            *(float *)(*pauVar19 + 0xc) = auVar1._12_4_ + fVar8;
            *(float *)(*pauVar19 + 0x10) = auVar1._16_4_ + fVar9;
            *(float *)(*pauVar19 + 0x14) = auVar1._20_4_ + fVar10;
            *(float *)(*pauVar19 + 0x18) = auVar1._24_4_ + fVar11;
            *(float *)(*pauVar19 + 0x1c) = auVar1._28_4_ + fVar12;
            auVar5 = vshufps_avx(auVar4,auVar4,0xa0);
            auVar3 = vshufps_avx(auVar23,auVar23,0xb1);
            in_ZMM0 = ZEXT3264(auVar3);
            auVar4 = vshufps_avx(auVar4,auVar4,0xf5);
            auVar22._0_4_ =
                 auVar5._0_4_ * auVar23._0_4_ * auVar13._0_4_ + auVar4._0_4_ * auVar3._0_4_;
            auVar22._4_4_ =
                 auVar5._4_4_ * auVar23._4_4_ * auVar13._4_4_ + auVar4._4_4_ * auVar3._4_4_;
            auVar22._8_4_ =
                 auVar5._8_4_ * auVar23._8_4_ * auVar13._8_4_ + auVar4._8_4_ * auVar3._8_4_;
            auVar22._12_4_ =
                 auVar5._12_4_ * auVar23._12_4_ * auVar13._12_4_ + auVar4._12_4_ * auVar3._12_4_;
            auVar22._16_4_ =
                 auVar5._16_4_ * auVar23._16_4_ * auVar13._16_4_ + auVar4._16_4_ * auVar3._16_4_;
            auVar22._20_4_ =
                 auVar5._20_4_ * auVar23._20_4_ * auVar13._20_4_ + auVar4._20_4_ * auVar3._20_4_;
            auVar22._24_4_ =
                 auVar5._24_4_ * auVar23._24_4_ * auVar13._24_4_ + auVar4._24_4_ * auVar3._24_4_;
            auVar22._28_4_ = auVar1._28_4_ + in_register_0000125c;
            *pauVar14 = auVar22;
            pauVar14 = pauVar14 + -1;
            pauVar19 = pauVar19 + -1;
          } while (pauVar15 <= pauVar14);
          pauVar15 = (undefined1 (*) [32])
                     (*pauVar15 + ((longlong)param_4 >> ((longlong)(int)uStackX_8 & 0x3fU)) * 4);
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      uStackX_8 = uStackX_8 + 1;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  if (0 < param_4) {
    uVar20 = (ulonglong)((param_4 - 1U >> 5) + 1);
    do {
      FUN_18083b4a0(param_2);
      param_2 = param_2 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




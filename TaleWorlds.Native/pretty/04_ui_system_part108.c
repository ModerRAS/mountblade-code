#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part108.c - 4 个函数

// 函数: void FUN_180730040(int64_t param_1,int param_2,int *param_3,char *param_4,int16_t *param_5,
void FUN_180730040(int64_t param_1,int param_2,int *param_3,char *param_4,int16_t *param_5,
                  int64_t param_6,short *param_7,short *param_8,short *param_9,int param_10,
                  int param_11,short param_12,int param_13,int param_14,int param_15,int param_16,
                  int param_17,int param_18,int param_19)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  uint64_t *puVar4;
  char cVar5;
  uint64_t uVar6;
  int16_t uVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  short sVar15;
  int iVar16;
  int64_t lVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int *piStackX_18;
  char *pcStackX_20;
  int *piStack_80;
  int64_t lStack_78;
  int *piStack_70;
  
  lStack_78 = (int64_t)param_17;
  lVar14 = (int64_t)param_18;
  piVar21 = (int *)(param_1 + 0xf3c);
  piStack_80 = (int *)(param_1 +
                      ((int64_t)((*(int *)(param_1 + 0x10f0) - param_10) + 1) + 0x140) * 4);
  piStack_70 = (int *)(param_6 + (int64_t)((*(int *)(param_1 + 0x10ec) - param_10) + 2) * 4);
  if (0 < lStack_78) {
    iVar12 = *(int *)(param_1 + 0x10f4);
    piStackX_18 = param_3;
    pcStackX_20 = param_4;
    do {
      *(int *)(param_1 + 0x10f4) = iVar12 * 0xbb38435 + 0x3619636b;
      iVar12 = (int)((uint64_t)((int64_t)*param_7 * (int64_t)*piVar21) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-2] * (int64_t)param_7[2]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-4] * (int64_t)param_7[4]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-6] * (int64_t)param_7[6]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-9] * (int64_t)param_7[9]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-8] * (int64_t)param_7[8]) >> 0x10) +
               (param_19 >> 1) +
               (int)((uint64_t)((int64_t)piVar21[-7] * (int64_t)param_7[7]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-5] * (int64_t)param_7[5]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-3] * (int64_t)param_7[3]) >> 0x10) +
               (int)((uint64_t)((int64_t)piVar21[-1] * (int64_t)param_7[1]) >> 0x10);
      if (param_19 == 0x10) {
        iVar12 = (int)((uint64_t)((int64_t)piVar21[-0xb] * (int64_t)param_7[0xb]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piVar21[-0xd] * (int64_t)param_7[0xd]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piVar21[-0xf] * (int64_t)param_7[0xf]) >> 0x10) +
                 iVar12 + (int)((uint64_t)((int64_t)piVar21[-0xe] * (int64_t)param_7[0xe]) >>
                               0x10) +
                 (int)((uint64_t)((int64_t)piVar21[-0xc] * (int64_t)param_7[0xc]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piVar21[-10] * (int64_t)param_7[10]) >> 0x10);
      }
      if (param_2 == 2) {
        iVar20 = (int)((uint64_t)((int64_t)*piStack_70 * (int64_t)*param_8) >> 0x10) + 2 +
                 (int)((uint64_t)((int64_t)piStack_70[-4] * (int64_t)param_8[4]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piStack_70[-3] * (int64_t)param_8[3]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piStack_70[-2] * (int64_t)param_8[2]) >> 0x10) +
                 (int)((uint64_t)((int64_t)piStack_70[-1] * (int64_t)param_8[1]) >> 0x10);
        piStack_70 = piStack_70 + 1;
      }
      else {
        iVar20 = 0;
      }
      lVar17 = 2;
      iVar19 = *(int *)(param_1 + 0x1080);
      *(int *)(param_1 + 0x1080) = *(int *)(param_1 + 0x10e4);
      iVar16 = (int)((uint64_t)((int64_t)*param_9 * (int64_t)*(int *)(param_1 + 0x10e4)) >> 0x10)
               + (param_18 >> 1);
      if (2 < lVar14) {
        do {
          iVar13 = *(int *)(param_1 + 0x107c + lVar17 * 4);
          *(int *)(param_1 + 0x107c + lVar17 * 4) = iVar19;
          sVar15 = param_9[lVar17 + -1];
          lVar9 = (int64_t)iVar19;
          iVar19 = *(int *)(param_1 + 0x1080 + lVar17 * 4);
          *(int *)(param_1 + 0x1080 + lVar17 * 4) = iVar13;
          psVar3 = param_9 + lVar17;
          lVar17 = lVar17 + 2;
          iVar16 = iVar16 + (int)((uint64_t)(sVar15 * lVar9) >> 0x10) +
                   (int)((uint64_t)((int64_t)*psVar3 * (int64_t)iVar13) >> 0x10);
        } while (lVar17 < lVar14);
      }
      *(int *)(param_1 + 0x107c + lVar14 * 4) = iVar19;
      iVar19 = (int)((uint64_t)((int64_t)*(int *)(param_1 + 0x10e0) * (int64_t)param_12) >> 0x10)
               + (int)((uint64_t)((int64_t)param_9[lVar14 + -1] * (int64_t)iVar19) >> 0x10) * 2 +
               iVar16 * 2;
      iVar13 = (int)((uint64_t)
                     ((int64_t)*(int *)(param_1 + 0x4fc + (int64_t)*(int *)(param_1 + 0x10f0) * 4)
                     * (int64_t)(short)param_13) >> 0x10) +
               (int)((uint64_t)
                     ((int64_t)*(int *)(param_1 + 0x10e0) * ((int64_t)param_13 >> 0x10)) >> 0x10);
      iVar16 = (iVar12 * 4 - iVar13) - iVar19;
      if (param_10 < 1) {
        iVar16 = iVar16 >> 1;
      }
      else {
        piVar1 = piStack_80 + -1;
        piVar2 = piStack_80 + -2;
        iVar10 = *piStack_80;
        piStack_80 = piStack_80 + 1;
        iVar16 = (iVar16 * 2 -
                 ((int)((uint64_t)((int64_t)(*piVar2 + iVar10) * (int64_t)(short)param_11) >>
                       0x10) * 2 +
                 (int)((uint64_t)((int64_t)*piVar1 * ((int64_t)param_11 >> 0x10)) >> 0x10) * 2))
                 + iVar20 >> 2;
      }
      iVar16 = iVar16 + 1 >> 1;
      iVar10 = *piStackX_18 - iVar16;
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar10 = iVar16 - *piStackX_18;
      }
      if (iVar10 < 0x7801) {
        if (iVar10 < -0x7c00) {
          iVar10 = -0x7c00;
        }
      }
      else {
        iVar10 = 0x7800;
      }
      iVar16 = iVar10 - param_16;
      if (param_15 < 0x801) {
LAB_1807304e5:
        iVar16 = iVar16 >> 10;
        if (iVar16 < 1) {
          if (iVar16 == 0) {
LAB_18073051b:
            iVar16 = param_16;
            sVar15 = (short)(param_16 + 0x3b0);
            iVar8 = param_16 + 0x3b0;
            sVar18 = (short)param_16;
          }
          else {
            if (iVar16 == -1) goto LAB_180730534;
            iVar16 = param_16 + 0x50 + iVar16 * 0x400;
            sVar18 = -(short)iVar16;
            iVar8 = iVar16 + 0x400;
            sVar15 = -(short)iVar8;
          }
        }
        else {
          iVar16 = param_16 + -0x50 + iVar16 * 0x400;
          sVar15 = (short)(iVar16 + 0x400);
          iVar8 = iVar16 + 0x400;
          sVar18 = (short)iVar16;
        }
      }
      else {
        iVar8 = param_15;
        if (param_15 < 0) {
          iVar8 = param_15 + 1;
        }
        iVar8 = (iVar8 >> 1) + -0x200;
        if (iVar8 < iVar16) {
          iVar8 = -iVar8;
LAB_1807304e2:
          iVar16 = iVar16 + iVar8;
          goto LAB_1807304e5;
        }
        if (iVar16 < -iVar8) goto LAB_1807304e2;
        if (-1 < iVar16) goto LAB_18073051b;
LAB_180730534:
        iVar16 = param_16 + -0x3b0;
        sVar18 = -(short)iVar16;
        sVar15 = (short)param_16;
        iVar8 = param_16;
      }
      iVar11 = (int)(short)((short)iVar10 - (short)iVar16);
      iVar10 = (int)(short)((short)iVar10 - (short)iVar8);
      if ((int)sVar18 * (int)(short)param_15 + iVar11 * iVar11 <=
          (int)sVar15 * (int)(short)param_15 + iVar10 * iVar10) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 * 0x10;
      *pcStackX_20 = (char)((iVar8 >> 9) + 1 >> 1);
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar16 = iVar8 * -0x10;
      }
      iVar16 = iVar16 + iVar20 * 2;
      iVar20 = iVar12 * 0x10 + iVar16;
      iVar12 = ((int)((uint64_t)((int64_t)iVar20 * (int64_t)(param_14 >> 6)) >> 0x10) >> 7) + 1
               >> 1;
      if (iVar12 < 0x8000) {
        uVar7 = (int16_t)iVar12;
        if (iVar12 < -0x8000) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      piVar21 = piVar21 + 1;
      *param_5 = uVar7;
      param_5 = param_5 + 1;
      *piVar21 = iVar20;
      iVar12 = *piStackX_18;
      piStackX_18 = piStackX_18 + 1;
      iVar20 = iVar20 + iVar12 * -0x10;
      *(int *)(param_1 + 0x10e4) = iVar20;
      iVar20 = iVar20 + iVar19 * -4;
      *(int *)(param_1 + 0x10e0) = iVar20;
      *(int *)(param_1 + 0x500 + (int64_t)*(int *)(param_1 + 0x10f0) * 4) = iVar20 + iVar13 * -4;
      *(int *)(param_6 + (int64_t)*(int *)(param_1 + 0x10ec) * 4) = iVar16 * 2;
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + 1;
      *(int *)(param_1 + 0x10ec) = *(int *)(param_1 + 0x10ec) + 1;
      cVar5 = *pcStackX_20;
      pcStackX_20 = pcStackX_20 + 1;
      *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + (int)cVar5;
      lStack_78 = lStack_78 + -1;
      iVar12 = *(int *)(param_1 + 0x10f4);
    } while (lStack_78 != 0);
  }
  lVar14 = (int64_t)param_17;
  puVar4 = (uint64_t *)(param_1 + 0xf00 + lVar14 * 4);
  uVar6 = puVar4[1];
  *(uint64_t *)(param_1 + 0xf00) = *puVar4;
  *(uint64_t *)(param_1 + 0xf08) = uVar6;
  puVar4 = (uint64_t *)(param_1 + 0xf10 + lVar14 * 4);
  uVar6 = puVar4[1];
  *(uint64_t *)(param_1 + 0xf10) = *puVar4;
  *(uint64_t *)(param_1 + 0xf18) = uVar6;
  puVar4 = (uint64_t *)(param_1 + 0xf20 + lVar14 * 4);
  uVar6 = puVar4[1];
  *(uint64_t *)(param_1 + 0xf20) = *puVar4;
  *(uint64_t *)(param_1 + 0xf28) = uVar6;
  puVar4 = (uint64_t *)(param_1 + 0xf30 + lVar14 * 4);
  uVar6 = puVar4[1];
  *(uint64_t *)(param_1 + 0xf30) = *puVar4;
  *(uint64_t *)(param_1 + 0xf38) = uVar6;
  return;
}





// 函数: void FUN_1807300e4(int param_1,int param_2,int64_t param_3,int *param_4)
void FUN_1807300e4(int param_1,int param_2,int64_t param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  uint64_t *puVar4;
  char cVar5;
  uint64_t uVar6;
  short in_AX;
  int16_t uVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_EBP;
  int iVar13;
  short sVar14;
  int iVar15;
  int64_t lVar16;
  int64_t in_R10;
  short sVar17;
  int iVar18;
  int64_t in_R11;
  int64_t unaff_R12;
  int unaff_R13D;
  int iVar19;
  int *unaff_R15;
  int *piStackX_8;
  int64_t lStackX_10;
  int *piStackX_18;
  int in_stack_00000098;
  int *in_stack_000000a0;
  char *in_stack_000000a8;
  int16_t *in_stack_000000b0;
  int64_t in_stack_000000b8;
  short *in_stack_000000c0;
  short *in_stack_000000c8;
  short *in_stack_000000d0;
  int in_stack_000000d8;
  int in_stack_000000e0;
  short in_stack_000000e8;
  int in_stack_00000100;
  int in_stack_00000108;
  int in_stack_00000110;
  int in_stack_00000120;
  
  lStackX_10 = param_3;
  do {
    *(int *)(in_R10 + 0x10f4) = param_2 * 0xbb38435 + 0x3619636b;
    iVar12 = (int)((uint64_t)((int64_t)*in_stack_000000c0 * (int64_t)*unaff_R15) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-2] * (int64_t)in_stack_000000c0[2]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-4] * (int64_t)in_stack_000000c0[4]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-6] * (int64_t)in_stack_000000c0[6]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-9] * (int64_t)in_stack_000000c0[9]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-8] * (int64_t)in_stack_000000c0[8]) >> 0x10) +
             (in_stack_00000120 >> 1) +
             (int)((uint64_t)((int64_t)unaff_R15[-7] * (int64_t)in_stack_000000c0[7]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-5] * (int64_t)in_stack_000000c0[5]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-3] * (int64_t)in_stack_000000c0[3]) >> 0x10) +
             (int)((uint64_t)((int64_t)unaff_R15[-1] * (int64_t)in_stack_000000c0[1]) >> 0x10);
    if (in_stack_00000120 == 0x10) {
      iVar12 = (int)((uint64_t)((int64_t)unaff_R15[-0xb] * (int64_t)in_stack_000000c0[0xb]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)unaff_R15[-0xd] * (int64_t)in_stack_000000c0[0xd]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)unaff_R15[-0xf] * (int64_t)in_stack_000000c0[0xf]) >>
                    0x10) + iVar12 +
               (int)((uint64_t)((int64_t)unaff_R15[-0xe] * (int64_t)in_stack_000000c0[0xe]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)unaff_R15[-0xc] * (int64_t)in_stack_000000c0[0xc]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)unaff_R15[-10] * (int64_t)in_stack_000000c0[10]) >> 0x10
                    );
    }
    if (unaff_R13D == 2) {
      iVar19 = (int)((uint64_t)((int64_t)*param_4 * (int64_t)*in_stack_000000c8) >> 0x10) + 2 +
               (int)((uint64_t)((int64_t)param_4[-4] * (int64_t)in_stack_000000c8[4]) >> 0x10) +
               (int)((uint64_t)((int64_t)param_4[-3] * (int64_t)in_stack_000000c8[3]) >> 0x10) +
               (int)((uint64_t)((int64_t)param_4[-2] * (int64_t)in_stack_000000c8[2]) >> 0x10) +
               (int)((uint64_t)((int64_t)param_4[-1] * (int64_t)in_stack_000000c8[1]) >> 0x10);
      piStackX_18 = param_4 + 1;
    }
    else {
      iVar19 = 0;
    }
    lVar16 = 2;
    iVar18 = *(int *)(in_R10 + 0x1080);
    *(int *)(in_R10 + 0x1080) = *(int *)(in_R10 + 0x10e4);
    iVar15 = (int)((uint64_t)((int64_t)*in_stack_000000d0 * (int64_t)*(int *)(in_R10 + 0x10e4))
                  >> 0x10) + (unaff_EBP >> 1);
    if (2 < unaff_R12) {
      do {
        iVar13 = *(int *)(in_R10 + 0x107c + lVar16 * 4);
        *(int *)(in_R10 + 0x107c + lVar16 * 4) = iVar18;
        sVar14 = in_stack_000000d0[lVar16 + -1];
        lVar9 = (int64_t)iVar18;
        iVar18 = *(int *)(in_R10 + 0x1080 + lVar16 * 4);
        *(int *)(in_R10 + 0x1080 + lVar16 * 4) = iVar13;
        psVar3 = in_stack_000000d0 + lVar16;
        lVar16 = lVar16 + 2;
        iVar15 = iVar15 + (int)((uint64_t)(sVar14 * lVar9) >> 0x10) +
                 (int)((uint64_t)((int64_t)*psVar3 * (int64_t)iVar13) >> 0x10);
      } while (lVar16 < unaff_R12);
    }
    *(int *)(in_R10 + 0x107c + unaff_R12 * 4) = iVar18;
    iVar18 = (int)((uint64_t)((int64_t)*(int *)(in_R10 + 0x10e0) * (int64_t)in_stack_000000e8) >>
                  0x10) +
             (int)((uint64_t)((int64_t)in_stack_000000d0[unaff_R12 + -1] * (int64_t)iVar18) >>
                  0x10) * 2 + iVar15 * 2;
    iVar13 = (int)((uint64_t)
                   ((int64_t)*(int *)(in_R10 + 0x4fc + (int64_t)*(int *)(in_R10 + 0x10f0) * 4) *
                   (int64_t)in_AX) >> 0x10) +
             (int)((uint64_t)((int64_t)*(int *)(in_R10 + 0x10e0) * (in_R11 >> 0x10)) >> 0x10);
    iVar15 = (iVar12 * 4 - iVar13) - iVar18;
    if (in_stack_000000d8 < 1) {
      iVar15 = iVar15 >> 1;
    }
    else {
      piVar1 = piStackX_8 + -1;
      piVar2 = piStackX_8 + -2;
      iVar10 = *piStackX_8;
      piStackX_8 = piStackX_8 + 1;
      iVar15 = (iVar15 * 2 -
               ((int)((uint64_t)((int64_t)(*piVar2 + iVar10) * (int64_t)(short)in_stack_000000e0)
                     >> 0x10) * 2 +
               (int)((uint64_t)((int64_t)*piVar1 * ((int64_t)in_stack_000000e0 >> 0x10)) >> 0x10)
               * 2)) + iVar19 >> 2;
    }
    iVar15 = iVar15 + 1 >> 1;
    iVar10 = *in_stack_000000a0 - iVar15;
    if (*(int *)(in_R10 + 0x10f4) < 0) {
      iVar10 = iVar15 - *in_stack_000000a0;
    }
    if (iVar10 < 0x7801) {
      if (iVar10 < -0x7c00) {
        iVar10 = -0x7c00;
      }
    }
    else {
      iVar10 = 0x7800;
    }
    iVar15 = iVar10 - in_stack_00000108;
    if (in_stack_00000100 < 0x801) {
LAB_1807304e5:
      iVar15 = iVar15 >> 10;
      if (iVar15 < 1) {
        if (iVar15 == 0) {
LAB_18073051b:
          iVar15 = in_stack_00000108;
          sVar14 = (short)(in_stack_00000108 + 0x3b0);
          iVar8 = in_stack_00000108 + 0x3b0;
          sVar17 = (short)in_stack_00000108;
        }
        else {
          if (iVar15 == -1) goto LAB_180730534;
          iVar15 = in_stack_00000108 + 0x50 + iVar15 * 0x400;
          sVar17 = -(short)iVar15;
          iVar8 = iVar15 + 0x400;
          sVar14 = -(short)iVar8;
        }
      }
      else {
        iVar15 = in_stack_00000108 + -0x50 + iVar15 * 0x400;
        sVar14 = (short)(iVar15 + 0x400);
        iVar8 = iVar15 + 0x400;
        sVar17 = (short)iVar15;
      }
    }
    else {
      iVar8 = in_stack_00000100;
      if (in_stack_00000100 < 0) {
        iVar8 = in_stack_00000100 + 1;
      }
      iVar8 = (iVar8 >> 1) + -0x200;
      if (iVar8 < iVar15) {
        iVar8 = -iVar8;
LAB_1807304e2:
        iVar15 = iVar15 + iVar8;
        goto LAB_1807304e5;
      }
      if (iVar15 < -iVar8) goto LAB_1807304e2;
      if (-1 < iVar15) goto LAB_18073051b;
LAB_180730534:
      iVar15 = in_stack_00000108 + -0x3b0;
      sVar17 = -(short)iVar15;
      sVar14 = (short)in_stack_00000108;
      iVar8 = in_stack_00000108;
    }
    iVar11 = (int)(short)((short)iVar10 - (short)iVar15);
    iVar10 = (int)(short)((short)iVar10 - (short)iVar8);
    if ((int)sVar17 * (int)(short)in_stack_00000100 + iVar11 * iVar11 <=
        (int)sVar14 * (int)(short)in_stack_00000100 + iVar10 * iVar10) {
      iVar8 = iVar15;
    }
    iVar15 = iVar8 * 0x10;
    *in_stack_000000a8 = (char)((iVar8 >> 9) + 1 >> 1);
    if (*(int *)(in_R10 + 0x10f4) < 0) {
      iVar15 = iVar8 * -0x10;
    }
    iVar15 = iVar15 + iVar19 * 2;
    iVar19 = iVar12 * 0x10 + iVar15;
    iVar12 = ((int)((uint64_t)((int64_t)iVar19 * (int64_t)param_1) >> 0x10) >> 7) + 1 >> 1;
    if (iVar12 < 0x8000) {
      uVar7 = (int16_t)iVar12;
      if (iVar12 < -0x8000) {
        uVar7 = 0x8000;
      }
    }
    else {
      uVar7 = 0x7fff;
    }
    unaff_R15 = unaff_R15 + 1;
    *in_stack_000000b0 = uVar7;
    in_stack_000000b0 = in_stack_000000b0 + 1;
    *unaff_R15 = iVar19;
    iVar12 = *in_stack_000000a0;
    in_stack_000000a0 = in_stack_000000a0 + 1;
    iVar19 = iVar19 + iVar12 * -0x10;
    *(int *)(in_R10 + 0x10e4) = iVar19;
    iVar19 = iVar19 + iVar18 * -4;
    *(int *)(in_R10 + 0x10e0) = iVar19;
    *(int *)(in_R10 + 0x500 + (int64_t)*(int *)(in_R10 + 0x10f0) * 4) = iVar19 + iVar13 * -4;
    *(int *)(in_stack_000000b8 + (int64_t)*(int *)(in_R10 + 0x10ec) * 4) = iVar15 * 2;
    *(int *)(in_R10 + 0x10f0) = *(int *)(in_R10 + 0x10f0) + 1;
    *(int *)(in_R10 + 0x10ec) = *(int *)(in_R10 + 0x10ec) + 1;
    cVar5 = *in_stack_000000a8;
    in_stack_000000a8 = in_stack_000000a8 + 1;
    *(int *)(in_R10 + 0x10f4) = *(int *)(in_R10 + 0x10f4) + (int)cVar5;
    lStackX_10 = lStackX_10 + -1;
    param_2 = *(int *)(in_R10 + 0x10f4);
    param_4 = piStackX_18;
    unaff_R13D = in_stack_00000098;
    if (lStackX_10 == 0) {
      lVar16 = (int64_t)in_stack_00000110;
      puVar4 = (uint64_t *)(in_R10 + 0xf00 + lVar16 * 4);
      uVar6 = puVar4[1];
      *(uint64_t *)(in_R10 + 0xf00) = *puVar4;
      *(uint64_t *)(in_R10 + 0xf08) = uVar6;
      puVar4 = (uint64_t *)(in_R10 + 0xf10 + lVar16 * 4);
      uVar6 = puVar4[1];
      *(uint64_t *)(in_R10 + 0xf10) = *puVar4;
      *(uint64_t *)(in_R10 + 0xf18) = uVar6;
      puVar4 = (uint64_t *)(in_R10 + 0xf20 + lVar16 * 4);
      uVar6 = puVar4[1];
      *(uint64_t *)(in_R10 + 0xf20) = *puVar4;
      *(uint64_t *)(in_R10 + 0xf28) = uVar6;
      puVar4 = (uint64_t *)(in_R10 + 0xf30 + lVar16 * 4);
      uVar6 = puVar4[1];
      *(uint64_t *)(in_R10 + 0xf30) = *puVar4;
      *(uint64_t *)(in_R10 + 0xf38) = uVar6;
      return;
    }
  } while( true );
}





// 函数: void FUN_1807306f5(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1807306f5(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t in_R10;
  
  puVar1 = (uint64_t *)(in_R10 + 0xf00 + param_3 * 4);
  uVar2 = puVar1[1];
  *(uint64_t *)(in_R10 + 0xf00) = *puVar1;
  *(uint64_t *)(in_R10 + 0xf08) = uVar2;
  puVar1 = (uint64_t *)(in_R10 + 0xf10 + param_3 * 4);
  uVar2 = puVar1[1];
  *(uint64_t *)(in_R10 + 0xf10) = *puVar1;
  *(uint64_t *)(in_R10 + 0xf18) = uVar2;
  puVar1 = (uint64_t *)(in_R10 + 0xf20 + param_3 * 4);
  uVar2 = puVar1[1];
  *(uint64_t *)(in_R10 + 0xf20) = *puVar1;
  *(uint64_t *)(in_R10 + 0xf28) = uVar2;
  puVar1 = (uint64_t *)(in_R10 + 0xf30 + param_3 * 4);
  uVar2 = puVar1[1];
  *(uint64_t *)(in_R10 + 0xf30) = *puVar1;
  *(uint64_t *)(in_R10 + 0xf38) = uVar2;
  return;
}





// 函数: void FUN_180730750(int64_t param_1,int64_t param_2,short *param_3,int32_t *param_4,
void FUN_180730750(int64_t param_1,int64_t param_2,short *param_3,int32_t *param_4,
                  int64_t param_5,int64_t param_6,int param_7,short param_8,int64_t param_9,
                  int64_t param_10,int param_11)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int32_t *puVar14;
  int iVar15;
  short *psVar16;
  
  iVar9 = *(int *)((int64_t)param_7 * 4 + param_10);
  puVar6 = (uint *)(param_9 + (int64_t)param_7 * 4);
  uVar5 = 1;
  if (1 < (int)*puVar6) {
    uVar5 = *puVar6;
  }
  uVar2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if (uVar2 == 0) {
    iVar13 = 0x20;
  }
  else {
    iVar13 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar13 = 0x1f - iVar13;
  }
  iVar15 = uVar5 << ((byte)(iVar13 + -1) & 0x1f);
  lVar11 = 0x1fffffff / (int64_t)(iVar15 >> 0x10);
  iVar3 = (int)lVar11;
  iVar8 = 0xe - (iVar13 + -1);
  iVar13 = (int)((uint64_t)
                 ((int64_t)
                  ((int)((uint64_t)((int64_t)iVar15 * (int64_t)(short)lVar11) >> 0x10) * -8) *
                 (int64_t)iVar3) >> 0x10) + iVar3 * 0x10000;
  if (iVar8 < 1) {
    bVar7 = -(byte)iVar8;
    iVar3 = -0x80000000 >> (bVar7 & 0x1f);
    iVar8 = 0x7fffffff >> (bVar7 & 0x1f);
    if (iVar8 < iVar3) {
      iVar15 = iVar3;
      if (iVar3 < iVar13) {
LAB_180730857:
        iVar13 = iVar15 << (bVar7 & 0x1f);
      }
      else {
        if (iVar13 < iVar8) {
          iVar13 = iVar8;
        }
        iVar13 = iVar13 << (bVar7 & 0x1f);
      }
    }
    else {
      if (iVar13 <= iVar8) {
        iVar15 = iVar13;
        if (iVar13 < iVar3) {
          iVar15 = iVar3;
        }
        goto LAB_180730857;
      }
      iVar13 = iVar8 << (bVar7 & 0x1f);
    }
  }
  else if (iVar8 < 0x20) {
    iVar13 = iVar13 >> ((byte)iVar8 & 0x1f);
  }
  else {
    iVar13 = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x11e8)) {
    do {
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 1;
      *param_4 = (int)((uint64_t)((int64_t)sVar1 * (int64_t)((iVar13 >> 4) + 1 >> 1)) >> 0x10);
      param_4 = param_4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x11e8));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_7 == 0) {
      iVar13 = (int)((uint64_t)((int64_t)iVar13 * (int64_t)param_8) >> 0x10) << 2;
    }
    iVar3 = (*(int *)(param_2 + 0x10ec) - iVar9) + -2;
    if (iVar3 < *(int *)(param_2 + 0x10ec)) {
      psVar16 = (short *)(param_5 + (int64_t)iVar3 * 2);
      puVar14 = (int32_t *)(param_6 + (int64_t)iVar3 * 4);
      do {
        sVar1 = *psVar16;
        psVar16 = psVar16 + 1;
        iVar3 = iVar3 + 1;
        *puVar14 = (int)((uint64_t)((int64_t)sVar1 * (int64_t)iVar13) >> 0x10);
        puVar14 = puVar14 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar5 = *(uint *)(param_2 + 0x10f8);
  uVar2 = *puVar6;
  if (uVar2 == uVar5) {
    return;
  }
  uVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if (uVar4 == 0) {
    iVar13 = 0x20;
  }
  else {
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar13 = 0x1f - iVar13;
  }
  iVar3 = uVar5 << ((byte)(iVar13 + -1) & 0x1f);
  uVar5 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  if (uVar5 == 0) {
    iVar8 = 0x20;
  }
  else {
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar8 = 0x1f - iVar8;
  }
  iVar12 = uVar2 << ((byte)(iVar8 + -1) & 0x1f);
  lVar11 = (int64_t)(short)(0x1fffffff / (int64_t)(iVar12 >> 0x10));
  iVar15 = (int)((uint64_t)(iVar3 * lVar11) >> 0x10);
  iVar15 = iVar15 + (int)((uint64_t)
                          ((iVar3 + (int)((uint64_t)((int64_t)iVar15 * (int64_t)iVar12) >> 0x20)
                                    * -8) * lVar11) >> 0x10);
  iVar13 = ((iVar13 + -1) - (iVar8 + -1)) + 0xd;
  if (iVar13 < 0) {
    bVar7 = -(byte)iVar13;
    iVar3 = -0x80000000 >> (bVar7 & 0x1f);
    iVar13 = 0x7fffffff >> (bVar7 & 0x1f);
    if (iVar13 < iVar3) {
      iVar8 = iVar3;
      if (iVar15 <= iVar3) {
        if (iVar15 < iVar13) {
          iVar15 = iVar13;
        }
        iVar15 = iVar15 << (bVar7 & 0x1f);
        goto LAB_1807309fc;
      }
    }
    else {
      if (iVar13 < iVar15) {
        iVar15 = iVar13 << (bVar7 & 0x1f);
        goto LAB_1807309fc;
      }
      iVar8 = iVar15;
      if (iVar15 < iVar3) {
        iVar8 = iVar3;
      }
    }
    iVar15 = iVar8 << (bVar7 & 0x1f);
  }
  else if (iVar13 < 0x20) {
    iVar15 = iVar15 >> ((byte)iVar13 & 0x1f);
  }
  else {
    iVar15 = 0;
  }
LAB_1807309fc:
  iVar13 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11ec);
  lVar11 = (int64_t)iVar15;
  if (iVar13 < *(int *)(param_2 + 0x10f0)) {
    piVar10 = (int *)(param_2 + ((int64_t)iVar13 + 0x140) * 4);
    do {
      iVar13 = iVar13 + 1;
      *piVar10 = (int)((uint64_t)(*piVar10 * lVar11) >> 0x10);
      piVar10 = piVar10 + 1;
    } while (iVar13 < *(int *)(param_2 + 0x10f0));
  }
  if (((param_11 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
     (iVar9 = (*(int *)(param_2 + 0x10ec) - iVar9) + -2, iVar9 < *(int *)(param_2 + 0x10ec))) {
    piVar10 = (int *)(param_6 + (int64_t)iVar9 * 4);
    do {
      iVar9 = iVar9 + 1;
      *piVar10 = (int)((uint64_t)(*piVar10 * lVar11) >> 0x10);
      piVar10 = piVar10 + 1;
    } while (iVar9 < *(int *)(param_2 + 0x10ec));
  }
  *(int *)(param_2 + 0x10e0) = (int)((uint64_t)(*(int *)(param_2 + 0x10e0) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10e4) = (int)((uint64_t)(*(int *)(param_2 + 0x10e4) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf00) = (int)((uint64_t)(*(int *)(param_2 + 0xf00) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf04) = (int)((uint64_t)(*(int *)(param_2 + 0xf04) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf08) = (int)((uint64_t)(*(int *)(param_2 + 0xf08) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf0c) = (int)((uint64_t)(*(int *)(param_2 + 0xf0c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf10) = (int)((uint64_t)(*(int *)(param_2 + 0xf10) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf14) = (int)((uint64_t)(*(int *)(param_2 + 0xf14) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf18) = (int)((uint64_t)(*(int *)(param_2 + 0xf18) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf1c) = (int)((uint64_t)(*(int *)(param_2 + 0xf1c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf20) = (int)((uint64_t)(*(int *)(param_2 + 0xf20) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf24) = (int)((uint64_t)(*(int *)(param_2 + 0xf24) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf28) = (int)((uint64_t)(*(int *)(param_2 + 0xf28) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf2c) = (int)((uint64_t)(*(int *)(param_2 + 0xf2c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf30) = (int)((uint64_t)(*(int *)(param_2 + 0xf30) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf34) = (int)((uint64_t)(*(int *)(param_2 + 0xf34) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf38) = (int)((uint64_t)(*(int *)(param_2 + 0xf38) * lVar11) >> 0x10);
  *(int *)(param_2 + 0xf3c) = (int)((uint64_t)(*(int *)(param_2 + 0xf3c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1080) = (int)((uint64_t)(*(int *)(param_2 + 0x1080) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1084) = (int)((uint64_t)(*(int *)(param_2 + 0x1084) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1088) = (int)((uint64_t)(*(int *)(param_2 + 0x1088) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x108c) = (int)((uint64_t)(*(int *)(param_2 + 0x108c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1090) = (int)((uint64_t)(*(int *)(param_2 + 0x1090) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1094) = (int)((uint64_t)(*(int *)(param_2 + 0x1094) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x1098) = (int)((uint64_t)(*(int *)(param_2 + 0x1098) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x109c) = (int)((uint64_t)(*(int *)(param_2 + 0x109c) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10a0) = (int)((uint64_t)(*(int *)(param_2 + 0x10a0) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10a4) = (int)((uint64_t)(*(int *)(param_2 + 0x10a4) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10a8) = (int)((uint64_t)(*(int *)(param_2 + 0x10a8) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10ac) = (int)((uint64_t)(*(int *)(param_2 + 0x10ac) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10b0) = (int)((uint64_t)(*(int *)(param_2 + 0x10b0) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10b4) = (int)((uint64_t)(*(int *)(param_2 + 0x10b4) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10b8) = (int)((uint64_t)(*(int *)(param_2 + 0x10b8) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10bc) = (int)((uint64_t)(*(int *)(param_2 + 0x10bc) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10c0) = (int)((uint64_t)(*(int *)(param_2 + 0x10c0) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10c4) = (int)((uint64_t)(*(int *)(param_2 + 0x10c4) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10c8) = (int)((uint64_t)(*(int *)(param_2 + 0x10c8) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10cc) = (int)((uint64_t)(*(int *)(param_2 + 0x10cc) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10d0) = (int)((uint64_t)(*(int *)(param_2 + 0x10d0) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10d4) = (int)((uint64_t)(*(int *)(param_2 + 0x10d4) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10d8) = (int)((uint64_t)(*(int *)(param_2 + 0x10d8) * lVar11) >> 0x10);
  *(int *)(param_2 + 0x10dc) = (int)((uint64_t)(*(int *)(param_2 + 0x10dc) * lVar11) >> 0x10);
  *(uint *)(param_2 + 0x10f8) = *puVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




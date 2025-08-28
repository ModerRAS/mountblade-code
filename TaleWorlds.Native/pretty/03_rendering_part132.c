#include "TaleWorlds.Native.Split.h"

// 03_rendering_part132.c - 6 个函数

// 函数: void FUN_1803472a9(uint64_t param_1,uint64_t param_2,float param_3,float *param_4,float param_5,
void FUN_1803472a9(uint64_t param_1,uint64_t param_2,float param_3,float *param_4,float param_5,
                  uint64_t param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong unaff_RBP;
  float *in_R10;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_XMM3_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_retaddr;
  float unaff_retaddr_00;
  float fStackX_8;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_20;
  float fStackX_24;
  
  fVar4 = param_4[0x20];
  fVar20 = (param_4[0x24] - fVar4) * param_4[0x2d] + fVar4;
  if (fVar20 <= (float)param_6) {
    fVar4 = param_4[0x14];
    fVar5 = param_4[0x15];
    fVar8 = param_4[0x16];
    fVar6 = param_4[0x10];
    fVar7 = param_4[0x11];
    fVar1 = param_4[0x12];
    fVar2 = param_4[0x18];
    fVar10 = param_4[0x19];
    fVar3 = param_4[0x1a];
    fVar25 = ((float)param_6 - fVar20) / (param_4[0x24] - fVar20);
    fVar16 = unaff_retaddr_00 * fVar4 + unaff_retaddr * fVar6 + fStackX_8 * fVar2;
    fVar18 = unaff_retaddr_00 * fVar5 + unaff_retaddr * fVar7 + fStackX_8 * fVar10;
    fVar19 = unaff_retaddr_00 * fVar8 + unaff_retaddr * fVar1 + fStackX_8 * fVar3;
    fVar13 = in_XMM3_Da * fVar4 + fStackX_10 * fVar6 + fStackX_18 * fVar2;
    fVar14 = in_XMM3_Da * fVar5 + fStackX_10 * fVar7 + fStackX_18 * fVar10;
    fVar15 = in_XMM3_Da * fVar8 + fStackX_10 * fVar1 + fStackX_18 * fVar3;
    fVar9 = param_3 * fVar4 + fStackX_20 * fVar6 + param_5 * fVar2;
    fVar11 = param_3 * fVar5 + fStackX_20 * fVar7 + param_5 * fVar10;
    fVar12 = param_3 * fVar8 + fStackX_20 * fVar1 + param_5 * fVar3;
    fVar6 = param_6._4_4_ * fVar4 + (float)param_6 * fVar6 + param_7 * fVar2;
    fVar7 = param_6._4_4_ * fVar5 + (float)param_6 * fVar7 + param_7 * fVar10;
    fVar8 = param_6._4_4_ * fVar8 + (float)param_6 * fVar1 + param_7 * fVar3;
    fVar4 = param_4[0x1c];
    fVar20 = param_4[0x1d];
    fVar5 = param_4[0x1e];
  }
  else {
    fVar5 = param_4[4];
    fVar8 = param_4[5];
    fVar1 = param_4[6];
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar2 = param_4[2];
    fVar10 = param_4[8];
    fVar3 = param_4[9];
    fVar17 = param_4[10];
    fVar16 = unaff_retaddr_00 * fVar5 + unaff_retaddr * fVar6 + fStackX_8 * fVar10;
    fVar18 = unaff_retaddr_00 * fVar8 + unaff_retaddr * fVar7 + fStackX_8 * fVar3;
    fVar19 = unaff_retaddr_00 * fVar1 + unaff_retaddr * fVar2 + fStackX_8 * fVar17;
    fVar25 = (fVar20 - (float)param_6) / (fVar20 - fVar4);
    fVar13 = in_XMM3_Da * fVar5 + fStackX_10 * fVar6 + fStackX_18 * fVar10;
    fVar14 = in_XMM3_Da * fVar8 + fStackX_10 * fVar7 + fStackX_18 * fVar3;
    fVar15 = in_XMM3_Da * fVar1 + fStackX_10 * fVar2 + fStackX_18 * fVar17;
    fVar9 = param_3 * fVar5 + fStackX_20 * fVar6 + param_5 * fVar10;
    fVar11 = param_3 * fVar8 + fStackX_20 * fVar7 + param_5 * fVar3;
    fVar12 = param_3 * fVar1 + fStackX_20 * fVar2 + param_5 * fVar17;
    fVar6 = param_6._4_4_ * fVar5 + (float)param_6 * fVar6 + param_7 * fVar10;
    fVar7 = param_6._4_4_ * fVar8 + (float)param_6 * fVar7 + param_7 * fVar3;
    fVar8 = param_6._4_4_ * fVar1 + (float)param_6 * fVar2 + param_7 * fVar17;
    fVar4 = param_4[0xc];
    fVar20 = param_4[0xd];
    fVar5 = param_4[0xe];
  }
  fVar10 = 1.0 - fVar25;
  fVar19 = fVar19 * fVar25 + fStackX_8 * fVar10;
  fVar21 = fVar13 * fVar25 + fStackX_10 * fVar10;
  fVar17 = fVar16 * fVar25 + unaff_retaddr * fVar10;
  fVar24 = fVar10 * (float)param_6 + (fVar6 + fVar4) * fVar25;
  fVar22 = (fVar7 + fVar20) * fVar25 + param_6._4_4_ * fVar10;
  fVar13 = fVar18 * fVar25 + unaff_retaddr_00 * fVar10;
  fVar4 = *(float *)(unaff_RBP + -0x80);
  fVar20 = *(float *)(unaff_RBP + -0x7c);
  fVar6 = *(float *)(unaff_RBP + -0x78);
  fVar7 = *(float *)(unaff_RBP + -0x74);
  fVar23 = (fVar8 + fVar5) * fVar25 + param_7 * fVar10;
  fVar14 = fVar14 * fVar25 + fStackX_14 * fVar10;
  fVar16 = fVar15 * fVar25 + fStackX_18 * fVar10;
  fVar18 = fVar9 * fVar25 + fStackX_20 * fVar10;
  fVar15 = fVar11 * fVar25 + fStackX_24 * fVar10;
  fVar5 = *(float *)(unaff_RBP + -0x60);
  fVar8 = *(float *)(unaff_RBP + -0x5c);
  fVar1 = *(float *)(unaff_RBP + -0x58);
  fVar2 = *(float *)(unaff_RBP + -0x54);
  fVar12 = fVar12 * fVar25 + param_5 * fVar10;
  fVar10 = *(float *)(unaff_RBP + -0x70);
  fVar3 = *(float *)(unaff_RBP + -0x6c);
  fVar9 = *(float *)(unaff_RBP + -0x68);
  fVar11 = *(float *)(unaff_RBP + -100);
  *in_R10 = fVar13 * fVar4 + fVar17 * fVar10 + fVar19 * fVar5;
  in_R10[1] = fVar13 * fVar20 + fVar17 * fVar3 + fVar19 * fVar8;
  in_R10[2] = fVar13 * fVar6 + fVar17 * fVar9 + fVar19 * fVar1;
  in_R10[3] = fVar13 * fVar7 + fVar17 * fVar11 + fVar19 * fVar2;
  in_R10[4] = fVar14 * fVar4 + fVar21 * fVar10 + fVar16 * fVar5;
  in_R10[5] = fVar14 * fVar20 + fVar21 * fVar3 + fVar16 * fVar8;
  in_R10[6] = fVar14 * fVar6 + fVar21 * fVar9 + fVar16 * fVar1;
  in_R10[7] = fVar14 * fVar7 + fVar21 * fVar11 + fVar16 * fVar2;
  in_R10[8] = fVar15 * fVar4 + fVar18 * fVar10 + fVar12 * fVar5;
  in_R10[9] = fVar15 * fVar20 + fVar18 * fVar3 + fVar12 * fVar8;
  in_R10[10] = fVar15 * fVar6 + fVar18 * fVar9 + fVar12 * fVar1;
  in_R10[0xb] = fVar15 * fVar7 + fVar18 * fVar11 + fVar12 * fVar2;
  fVar12 = *(float *)(unaff_RBP + -0x4c);
  fVar13 = *(float *)(unaff_RBP + -0x48);
  fVar14 = *(float *)(unaff_RBP + -0x44);
  in_R10[0xc] = fVar22 * fVar4 + fVar24 * fVar10 + fVar23 * fVar5 + *(float *)(unaff_RBP + -0x50);
  in_R10[0xd] = fVar22 * fVar20 + fVar24 * fVar3 + fVar23 * fVar8 + fVar12;
  in_R10[0xe] = fVar22 * fVar6 + fVar24 * fVar9 + fVar23 * fVar1 + fVar13;
  in_R10[0xf] = fVar22 * fVar7 + fVar24 * fVar11 + fVar23 * fVar2 + fVar14;
  return;
}





// 函数: void FUN_180347722(void)
void FUN_180347722(void)

{
  return;
}





// 函数: void FUN_180347740(longlong param_1,float *param_2,float *param_3,float *param_4)
void FUN_180347740(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x40);
  iVar5 = (int)(*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 4);
  lVar7 = (longlong)iVar5;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x28);
      pfVar1 = (float *)(lVar4 + lVar6);
      fVar8 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar12 = param_2[0x20];
      fVar15 = param_2[0x42] * fVar18 + param_2[0x3e] * fVar8 + param_2[0x46] * fVar14 +
               param_2[0x4a];
      fVar17 = param_2[0x43] * fVar18 + param_2[0x3f] * fVar8 + param_2[0x47] * fVar14 +
               param_2[0x4b];
      fVar18 = param_2[0x44] * fVar18 + param_2[0x40] * fVar8 + param_2[0x48] * fVar14 +
               param_2[0x4c];
      fVar8 = (param_2[0x24] - fVar12) * param_2[0x2d] + fVar12;
      if (fVar8 <= fVar15) {
        fVar14 = (fVar15 - fVar8) / (param_2[0x24] - fVar8);
        fVar12 = 1.0 - fVar14;
        fVar16 = fVar15 * fVar12 +
                 (param_2[0x14] * fVar17 + param_2[0x10] * fVar15 + param_2[0x18] * fVar18 +
                 param_2[0x1c]) * fVar14;
        fVar8 = (param_2[0x16] * fVar17 + param_2[0x12] * fVar15 + param_2[0x1a] * fVar18 +
                param_2[0x1e]) * fVar14 + fVar12 * fVar18;
        fVar12 = (param_2[0x15] * fVar17 + param_2[0x11] * fVar15 + param_2[0x19] * fVar18 +
                 param_2[0x1d]) * fVar14 + fVar12 * fVar17;
      }
      else {
        fVar14 = (fVar8 - fVar15) / (fVar8 - fVar12);
        fVar12 = 1.0 - fVar14;
        fVar16 = fVar15 * fVar12 +
                 (param_2[4] * fVar17 + *param_2 * fVar15 + param_2[8] * fVar18 + param_2[0xc]) *
                 fVar14;
        fVar8 = (param_2[6] * fVar17 + param_2[2] * fVar15 + param_2[10] * fVar18 + param_2[0xe]) *
                fVar14 + fVar12 * fVar18;
        fVar12 = (param_2[5] * fVar17 + param_2[1] * fVar15 + param_2[9] * fVar18 + param_2[0xd]) *
                 fVar14 + fVar12 * fVar17;
      }
      fVar18 = param_2[0x51];
      fVar13 = fVar12 * param_2[0x52] + fVar16 * param_2[0x4e] + fVar8 * param_2[0x56] +
               param_2[0x5a];
      fVar14 = param_2[0x55];
      fVar15 = param_2[0x59];
      fVar11 = fVar16 * param_2[0x4f] + fVar12 * param_2[0x53] + fVar8 * param_2[0x57] +
               param_2[0x5b];
      fVar17 = fVar13;
      if (*param_3 <= fVar13) {
        fVar17 = *param_3;
      }
      fVar10 = fVar16 * param_2[0x50] + fVar12 * param_2[0x54] + fVar8 * param_2[0x58] +
               param_2[0x5c];
      fVar9 = fVar11;
      if (param_3[1] <= fVar11) {
        fVar9 = param_3[1];
      }
      fVar2 = param_2[0x5d];
      *param_3 = fVar17;
      fVar17 = fVar10;
      if (param_3[2] <= fVar10) {
        fVar17 = param_3[2];
      }
      param_3[1] = fVar9;
      param_3[2] = fVar17;
      fVar17 = fVar13;
      if (fVar13 <= *param_4) {
        fVar17 = *param_4;
      }
      fVar9 = param_4[1];
      if (param_4[1] <= fVar11) {
        fVar9 = fVar11;
      }
      *param_4 = fVar17;
      fVar17 = param_4[2];
      if (param_4[2] <= fVar10) {
        fVar17 = fVar10;
      }
      param_4[1] = fVar9;
      param_4[2] = fVar17;
      pfVar1 = (float *)(lVar4 + lVar6);
      *pfVar1 = fVar13;
      pfVar1[1] = fVar11;
      pfVar1[2] = fVar10;
      pfVar1[3] = fVar16 * fVar18 + fVar12 * fVar14 + fVar8 * fVar15 + fVar2;
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}





// 函数: void FUN_180347766(longlong param_1,float *param_2,float *param_3,float *param_4)
void FUN_180347766(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_R10;
  float fVar5;
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
  
  lVar4 = 0;
  do {
    lVar3 = *(longlong *)(param_1 + 0x28);
    pfVar1 = (float *)(lVar3 + lVar4);
    fVar5 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar11 = pfVar1[2];
    fVar9 = param_2[0x20];
    fVar12 = param_2[0x42] * fVar15 + param_2[0x3e] * fVar5 + param_2[0x46] * fVar11 + param_2[0x4a]
    ;
    fVar14 = param_2[0x43] * fVar15 + param_2[0x3f] * fVar5 + param_2[0x47] * fVar11 + param_2[0x4b]
    ;
    fVar15 = param_2[0x44] * fVar15 + param_2[0x40] * fVar5 + param_2[0x48] * fVar11 + param_2[0x4c]
    ;
    fVar5 = (param_2[0x24] - fVar9) * param_2[0x2d] + fVar9;
    if (fVar5 <= fVar12) {
      fVar11 = (fVar12 - fVar5) / (param_2[0x24] - fVar5);
      fVar9 = 1.0 - fVar11;
      fVar13 = fVar12 * fVar9 +
               (param_2[0x14] * fVar14 + param_2[0x10] * fVar12 + param_2[0x18] * fVar15 +
               param_2[0x1c]) * fVar11;
      fVar5 = (param_2[0x16] * fVar14 + param_2[0x12] * fVar12 + param_2[0x1a] * fVar15 +
              param_2[0x1e]) * fVar11 + fVar9 * fVar15;
      fVar9 = (param_2[0x15] * fVar14 + param_2[0x11] * fVar12 + param_2[0x19] * fVar15 +
              param_2[0x1d]) * fVar11 + fVar9 * fVar14;
    }
    else {
      fVar11 = (fVar5 - fVar12) / (fVar5 - fVar9);
      fVar9 = 1.0 - fVar11;
      fVar13 = fVar12 * fVar9 +
               (param_2[4] * fVar14 + *param_2 * fVar12 + param_2[8] * fVar15 + param_2[0xc]) *
               fVar11;
      fVar5 = (param_2[6] * fVar14 + param_2[2] * fVar12 + param_2[10] * fVar15 + param_2[0xe]) *
              fVar11 + fVar9 * fVar15;
      fVar9 = (param_2[5] * fVar14 + param_2[1] * fVar12 + param_2[9] * fVar15 + param_2[0xd]) *
              fVar11 + fVar9 * fVar14;
    }
    fVar15 = param_2[0x51];
    fVar10 = fVar9 * param_2[0x52] + fVar13 * param_2[0x4e] + fVar5 * param_2[0x56] + param_2[0x5a];
    fVar11 = param_2[0x55];
    fVar12 = param_2[0x59];
    fVar8 = fVar13 * param_2[0x4f] + fVar9 * param_2[0x53] + fVar5 * param_2[0x57] + param_2[0x5b];
    fVar14 = fVar10;
    if (*param_3 <= fVar10) {
      fVar14 = *param_3;
    }
    fVar7 = fVar13 * param_2[0x50] + fVar9 * param_2[0x54] + fVar5 * param_2[0x58] + param_2[0x5c];
    fVar6 = fVar8;
    if (param_3[1] <= fVar8) {
      fVar6 = param_3[1];
    }
    fVar2 = param_2[0x5d];
    *param_3 = fVar14;
    fVar14 = fVar7;
    if (param_3[2] <= fVar7) {
      fVar14 = param_3[2];
    }
    param_3[1] = fVar6;
    param_3[2] = fVar14;
    fVar14 = fVar10;
    if (fVar10 <= *param_4) {
      fVar14 = *param_4;
    }
    fVar6 = param_4[1];
    if (param_4[1] <= fVar8) {
      fVar6 = fVar8;
    }
    *param_4 = fVar14;
    fVar14 = param_4[2];
    if (param_4[2] <= fVar7) {
      fVar14 = fVar7;
    }
    param_4[1] = fVar6;
    param_4[2] = fVar14;
    pfVar1 = (float *)(lVar3 + lVar4);
    *pfVar1 = fVar10;
    pfVar1[1] = fVar8;
    pfVar1[2] = fVar7;
    pfVar1[3] = fVar13 * fVar15 + fVar9 * fVar11 + fVar5 * fVar12 + fVar2;
    lVar4 = lVar4 + 0x10;
    in_R10 = in_R10 + -1;
  } while (in_R10 != 0);
  return;
}





// 函数: void FUN_180347aa1(void)
void FUN_180347aa1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180347ab0(longlong param_1,longlong *param_2)
void FUN_180347ab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iStackX_18;
  
  lVar6 = 0;
  iStackX_18 = 0;
  lVar3 = *(longlong *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) - lVar3 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(lVar3 + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (longlong *)0x0;
      if ((plVar1[0x22] != 0) && ((*(byte *)(plVar1 + 0x5d) & 0xb) == 0xb)) {
        plVar4 = (longlong *)param_2[1];
        if (plVar4 < (longlong *)param_2[2]) {
          param_2[1] = (longlong)(plVar4 + 1);
          *plVar4 = (longlong)plVar1;
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        else {
          plVar5 = (longlong *)*param_2;
          lVar3 = (longlong)plVar4 - (longlong)plVar5 >> 3;
          if (lVar3 == 0) {
            lVar3 = 1;
LAB_180347b86:
            plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8);
            plVar4 = (longlong *)param_2[1];
            plVar5 = (longlong *)*param_2;
            plVar7 = plVar2;
          }
          else {
            lVar3 = lVar3 * 2;
            plVar7 = plVar2;
            if (lVar3 != 0) goto LAB_180347b86;
          }
          for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
            *plVar2 = *plVar5;
            *plVar5 = 0;
            plVar2 = plVar2 + 1;
          }
          *plVar2 = (longlong)plVar1;
          (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar4 = (longlong *)param_2[1];
          plVar5 = (longlong *)*param_2;
          if (plVar5 != plVar4) {
            do {
              if ((longlong *)*plVar5 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar5 + 0x38))();
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar4);
            plVar5 = (longlong *)*param_2;
          }
          if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar5);
          }
          *param_2 = (longlong)plVar7;
          param_2[1] = (longlong)(plVar2 + 1);
          param_2[2] = (longlong)(plVar7 + lVar3);
        }
      }
      FUN_180347ab0(plVar1,param_2);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      iStackX_18 = iStackX_18 + 1;
      lVar6 = lVar6 + 8;
      lVar3 = *(longlong *)(param_1 + 0x1c0);
    } while ((ulonglong)(longlong)iStackX_18 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - lVar3 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




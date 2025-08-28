#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part079.c - 4 个函数

// 函数: void FUN_180712340(int64_t param_1,int64_t param_2,uint param_3,uint param_4,int param_5,
void FUN_180712340(int64_t param_1,int64_t param_2,uint param_3,uint param_4,int param_5,
                  float param_6,float param_7,int param_8,int param_9,int64_t param_10,int param_11
                  )

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
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
  float fVar26;
  float fVar27;
  
  if ((param_6 == 0.0) && (param_7 == 0.0)) {
    if (param_2 != param_1) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc53. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      memmove(param_7,param_6,(int64_t)param_5 << 2);
      return;
    }
  }
  else {
    lVar7 = (int64_t)param_8;
    uVar1 = 0xf;
    if (0xf < (int)param_3) {
      uVar1 = param_3;
    }
    uVar12 = 0xf;
    if (0xf < (int)param_4) {
      uVar12 = (uint64_t)param_4;
    }
    lVar13 = (int64_t)param_9;
    uVar11 = (uint)uVar12;
    fVar19 = param_6 * *(float *)(&unknown_var_8408_ptr + lVar7 * 0xc);
    fVar17 = *(float *)(param_2 + (int64_t)(int)(1 - uVar11) * 4);
    fVar26 = param_6 * *(float *)(&unknown_var_8400_ptr + lVar7 * 0xc);
    fVar27 = param_6 * *(float *)(&unknown_var_8404_ptr + lVar7 * 0xc);
    fVar21 = param_7 * *(float *)(&unknown_var_8400_ptr + lVar13 * 0xc);
    fVar22 = param_7 * *(float *)(&unknown_var_8404_ptr + lVar13 * 0xc);
    fVar23 = param_7 * *(float *)(&unknown_var_8408_ptr + lVar13 * 0xc);
    lVar7 = 0;
    iVar9 = 0;
    fVar14 = *(float *)(param_2 + (int64_t)(int)uVar11 * -4);
    fVar18 = *(float *)(param_2 + (int64_t)(int)~uVar11 * 4);
    fVar25 = *(float *)(param_2 + (int64_t)(int)(-2 - uVar11) * 4);
    if (((param_6 == param_7) && (uVar1 == uVar11)) && (param_8 == param_9)) {
      param_11 = 0;
    }
    if (3 < (int64_t)param_11) {
      lVar5 = (int64_t)(int)uVar1;
      lVar10 = lVar5 - (int)uVar11;
      lVar13 = lVar5 * 4 + 8;
      lVar2 = (lVar5 * 4 + 0xc) - param_2;
      pfVar8 = (float *)(param_2 - lVar13);
      lVar3 = (lVar5 * 4 + 0x10) - param_2;
      lVar4 = (lVar5 * 4 + 0x14) - param_2;
      lVar13 = lVar13 - param_2;
      lVar6 = ((int64_t)param_11 - 4U >> 2) + 1;
      iVar9 = (int)lVar6 * 4;
      lVar7 = lVar6 * 4;
      fVar15 = fVar18;
      fVar16 = fVar14;
      fVar20 = fVar17;
      fVar24 = fVar25;
      do {
        fVar17 = *(float *)((int64_t)pfVar8 + lVar13 + param_10);
        fVar25 = pfVar8[lVar10 + 4];
        fVar17 = fVar17 * fVar17;
        fVar14 = 1.0 - fVar17;
        *(float *)((int64_t)pfVar8 + lVar13 + param_1) =
             fVar14 * fVar26 * pfVar8[2] + pfVar8[lVar5 + 2] +
             (pfVar8[1] + pfVar8[3]) * fVar14 * fVar27 + (*pfVar8 + pfVar8[4]) * fVar14 * fVar19 +
             fVar17 * fVar21 * fVar16 + fVar17 * fVar22 * (fVar15 + fVar20) +
             (fVar25 + fVar24) * fVar17 * fVar23;
        fVar17 = *(float *)((int64_t)pfVar8 + lVar2 + param_10);
        fVar18 = pfVar8[lVar10 + 5];
        fVar17 = fVar17 * fVar17;
        fVar14 = 1.0 - fVar17;
        *(float *)((int64_t)pfVar8 + lVar2 + param_1) =
             fVar14 * fVar26 * pfVar8[3] + pfVar8[lVar5 + 3] +
             (pfVar8[4] + pfVar8[2]) * fVar14 * fVar27 + (pfVar8[1] + pfVar8[5]) * fVar14 * fVar19 +
             fVar17 * fVar21 * fVar20 + fVar17 * fVar22 * (fVar16 + fVar25) +
             (fVar18 + fVar15) * fVar17 * fVar23;
        fVar17 = *(float *)((int64_t)pfVar8 + lVar3 + param_10);
        fVar14 = pfVar8[lVar10 + 6];
        fVar17 = fVar17 * fVar17;
        fVar15 = 1.0 - fVar17;
        *(float *)((int64_t)pfVar8 + lVar3 + param_1) =
             fVar15 * fVar26 * pfVar8[4] + pfVar8[lVar5 + 4] +
             (pfVar8[5] + pfVar8[3]) * fVar15 * fVar27 + (pfVar8[6] + pfVar8[2]) * fVar15 * fVar19 +
             fVar17 * fVar21 * fVar25 + fVar17 * fVar22 * (fVar20 + fVar18) +
             (fVar14 + fVar16) * fVar17 * fVar23;
        fVar15 = *(float *)((int64_t)pfVar8 + lVar4 + param_10);
        fVar17 = pfVar8[lVar10 + 7];
        fVar15 = fVar15 * fVar15;
        fVar16 = 1.0 - fVar15;
        *(float *)((int64_t)pfVar8 + lVar4 + param_1) =
             fVar16 * fVar26 * pfVar8[5] + pfVar8[lVar5 + 5] +
             (pfVar8[6] + pfVar8[4]) * fVar16 * fVar27 + (pfVar8[7] + pfVar8[3]) * fVar16 * fVar19 +
             fVar15 * fVar21 * fVar18 + fVar15 * fVar22 * (fVar25 + fVar14) +
             (fVar17 + fVar20) * fVar15 * fVar23;
        pfVar8 = pfVar8 + 4;
        lVar6 = lVar6 + -1;
        fVar15 = fVar18;
        fVar16 = fVar14;
        fVar20 = fVar17;
        fVar24 = fVar25;
      } while (lVar6 != 0);
      uVar12 = (uint64_t)(int)uVar11;
    }
    lVar13 = (int64_t)param_11;
    if (lVar7 < lVar13) {
      lVar2 = (int64_t)(int)uVar1;
      lVar3 = lVar13 - lVar7;
      pfVar8 = (float *)(param_2 + ((lVar7 - lVar2) + -1) * 4);
      lVar7 = lVar2 * 4 - param_2;
      iVar9 = iVar9 + (int)lVar3;
      do {
        fVar20 = fVar18;
        fVar18 = *(float *)(param_10 + lVar7 + 4 + (int64_t)pfVar8);
        fVar15 = pfVar8[(lVar2 - (int)uVar11) + 3];
        fVar18 = fVar18 * fVar18;
        fVar16 = 1.0 - fVar18;
        *(float *)(lVar7 + param_1 + 4 + (int64_t)pfVar8) =
             fVar16 * fVar26 * pfVar8[1] + pfVar8[lVar2 + 1] +
             (pfVar8[2] + *pfVar8) * fVar16 * fVar27 + (pfVar8[3] + pfVar8[-1]) * fVar16 * fVar19 +
             fVar18 * fVar21 * fVar14 + fVar18 * fVar22 * (fVar20 + fVar17) +
             (fVar15 + fVar25) * fVar18 * fVar23;
        pfVar8 = pfVar8 + 1;
        lVar3 = lVar3 + -1;
        fVar18 = fVar14;
        fVar14 = fVar17;
        fVar17 = fVar15;
        fVar25 = fVar20;
      } while (lVar3 != 0);
    }
    if (param_7 == 0.0) {
      if (param_2 != param_1) {
                    // WARNING: Subroutine does not return
        memmove(param_1 + lVar13 * 4,param_2 + lVar13 * 4,(int64_t)(param_5 - param_11) << 2);
      }
    }
    else {
      FUN_180707200(param_1 + (int64_t)iVar9 * 4,param_2 + (int64_t)iVar9 * 4,uVar12,
                    param_5 - iVar9,fVar21,fVar22,fVar23);
    }
  }
  return;
}





// 函数: void FUN_1807123a8(float param_1,int64_t param_2,uint param_3,uint param_4)
void FUN_1807123a8(float param_1,int64_t param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t in_R10;
  int64_t in_R11;
  float in_XMM1_Da;
  float fVar12;
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
  int iStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  int64_t in_stack_000001a0;
  int64_t in_stack_000001a8;
  int in_stack_000001c0;
  float fStack00000000000001c8;
  float in_stack_000001d0;
  int in_stack_000001e0;
  int64_t in_stack_000001e8;
  int in_stack_000001f0;
  
  uStack0000000000000048 = param_3;
  if ((int)param_3 < (int)in_EAX) {
    uStack0000000000000048 = in_EAX;
  }
  uVar10 = (uint64_t)param_3;
  if ((int)param_3 < (int)param_4) {
    uVar10 = (uint64_t)param_4;
  }
  lVar11 = (int64_t)in_stack_000001e0;
  uStack0000000000000044 = (uint)uVar10;
  fStack00000000000001c8 = in_XMM1_Da * *(float *)(&unknown_var_8408_ptr + param_2 * 0xc);
  fVar15 = *(float *)(in_R10 + (int64_t)(int)(1 - uStack0000000000000044) * 4);
  fVar23 = in_XMM1_Da * *(float *)(&unknown_var_8400_ptr + param_2 * 0xc);
  fVar24 = in_XMM1_Da * *(float *)(&unknown_var_8404_ptr + param_2 * 0xc);
  fVar18 = param_1 * *(float *)(&unknown_var_8400_ptr + lVar11 * 0xc);
  fVar19 = param_1 * *(float *)(&unknown_var_8404_ptr + lVar11 * 0xc);
  fVar20 = param_1 * *(float *)(&unknown_var_8408_ptr + lVar11 * 0xc);
  lVar11 = 0;
  iVar8 = 0;
  fVar12 = *(float *)(in_R10 + (int64_t)(int)uStack0000000000000044 * -4);
  fVar16 = *(float *)(in_R10 + (int64_t)(int)~uStack0000000000000044 * 4);
  fVar22 = *(float *)(in_R10 + (int64_t)(int)(-2 - uStack0000000000000044) * 4);
  iStack0000000000000040 = in_stack_000001f0;
  if (((in_XMM1_Da == param_1) && (uStack0000000000000048 == uStack0000000000000044)) &&
     ((int)param_2 == in_stack_000001e0)) {
    iStack0000000000000040 = 0;
  }
  if (3 < (int64_t)iStack0000000000000040) {
    lVar5 = (int64_t)(int)uStack0000000000000048;
    lVar9 = lVar5 - (int)uStack0000000000000044;
    lVar4 = lVar5 * 4 + 8;
    lVar1 = (lVar5 * 4 + 0xc) - in_R10;
    pfVar7 = (float *)(in_R10 - lVar4);
    lVar2 = (lVar5 * 4 + 0x10) - in_R10;
    lVar3 = (lVar5 * 4 + 0x14) - in_R10;
    lVar4 = lVar4 - in_R10;
    lVar6 = ((int64_t)iStack0000000000000040 - 4U >> 2) + 1;
    iVar8 = (int)lVar6 * 4;
    lVar11 = lVar6 * 4;
    fVar13 = fVar16;
    fVar14 = fVar12;
    fVar17 = fVar15;
    fVar21 = fVar22;
    do {
      fVar15 = *(float *)((int64_t)pfVar7 + lVar4 + in_stack_000001e8);
      fVar22 = pfVar7[lVar9 + 4];
      fVar15 = fVar15 * fVar15;
      fVar12 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar4 + in_R11) =
           fVar12 * fVar23 * pfVar7[2] + pfVar7[lVar5 + 2] +
           (pfVar7[1] + pfVar7[3]) * fVar12 * fVar24 +
           (*pfVar7 + pfVar7[4]) * fVar12 * fStack00000000000001c8 + fVar15 * fVar18 * fVar14 +
           fVar15 * fVar19 * (fVar13 + fVar17) + (fVar22 + fVar21) * fVar15 * fVar20;
      fVar15 = *(float *)((int64_t)pfVar7 + lVar1 + in_stack_000001e8);
      fVar16 = pfVar7[lVar9 + 5];
      fVar15 = fVar15 * fVar15;
      fVar12 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar1 + in_R11) =
           fVar12 * fVar23 * pfVar7[3] + pfVar7[lVar5 + 3] +
           (pfVar7[4] + pfVar7[2]) * fVar12 * fVar24 +
           (pfVar7[1] + pfVar7[5]) * fVar12 * fStack00000000000001c8 + fVar15 * fVar18 * fVar17 +
           fVar15 * fVar19 * (fVar14 + fVar22) + (fVar16 + fVar13) * fVar15 * fVar20;
      fVar15 = *(float *)((int64_t)pfVar7 + lVar2 + in_stack_000001e8);
      fVar12 = pfVar7[lVar9 + 6];
      fVar15 = fVar15 * fVar15;
      fVar13 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar2 + in_R11) =
           fVar13 * fVar23 * pfVar7[4] + pfVar7[lVar5 + 4] +
           (pfVar7[5] + pfVar7[3]) * fVar13 * fVar24 +
           (pfVar7[6] + pfVar7[2]) * fVar13 * fStack00000000000001c8 + fVar15 * fVar18 * fVar22 +
           fVar15 * fVar19 * (fVar17 + fVar16) + (fVar12 + fVar14) * fVar15 * fVar20;
      fVar13 = *(float *)((int64_t)pfVar7 + lVar3 + in_stack_000001e8);
      fVar15 = pfVar7[lVar9 + 7];
      fVar13 = fVar13 * fVar13;
      fVar14 = 1.0 - fVar13;
      *(float *)((int64_t)pfVar7 + lVar3 + in_R11) =
           fVar14 * fVar23 * pfVar7[5] + pfVar7[lVar5 + 5] +
           (pfVar7[6] + pfVar7[4]) * fVar14 * fVar24 +
           (pfVar7[7] + pfVar7[3]) * fVar14 * fStack00000000000001c8 + fVar13 * fVar18 * fVar16 +
           fVar13 * fVar19 * (fVar22 + fVar12) + (fVar15 + fVar17) * fVar13 * fVar20;
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
      fVar13 = fVar16;
      fVar14 = fVar12;
      fVar17 = fVar15;
      fVar21 = fVar22;
    } while (lVar6 != 0);
    uVar10 = (uint64_t)(int)uStack0000000000000044;
    in_R10 = in_stack_000001a8;
    in_R11 = in_stack_000001a0;
  }
  lVar4 = (int64_t)iStack0000000000000040;
  if (lVar11 < lVar4) {
    lVar1 = (int64_t)(int)uStack0000000000000048;
    lVar2 = lVar4 - lVar11;
    pfVar7 = (float *)(in_R10 + ((lVar11 - lVar1) + -1) * 4);
    lVar11 = lVar1 * 4 - in_R10;
    iVar8 = iVar8 + (int)lVar2;
    do {
      fVar17 = fVar16;
      fVar16 = *(float *)(in_stack_000001e8 + lVar11 + 4 + (int64_t)pfVar7);
      fVar13 = pfVar7[(lVar1 - (int)uStack0000000000000044) + 3];
      fVar16 = fVar16 * fVar16;
      fVar14 = 1.0 - fVar16;
      *(float *)(lVar11 + in_R11 + 4 + (int64_t)pfVar7) =
           fVar14 * fVar23 * pfVar7[1] + pfVar7[lVar1 + 1] + (pfVar7[2] + *pfVar7) * fVar14 * fVar24
           + (pfVar7[3] + pfVar7[-1]) * fVar14 * fStack00000000000001c8 + fVar16 * fVar18 * fVar12 +
           fVar16 * fVar19 * (fVar17 + fVar15) + (fVar13 + fVar22) * fVar16 * fVar20;
      pfVar7 = pfVar7 + 1;
      lVar2 = lVar2 + -1;
      fVar16 = fVar12;
      fVar12 = fVar15;
      fVar15 = fVar13;
      fVar22 = fVar17;
    } while (lVar2 != 0);
  }
  if (in_stack_000001d0 == 0.0) {
    if (in_R10 != in_R11) {
                    // WARNING: Subroutine does not return
      memmove(in_R11 + lVar4 * 4,in_R10 + lVar4 * 4,
              (int64_t)(in_stack_000001c0 - iStack0000000000000040) << 2);
    }
  }
  else {
    FUN_180707200(in_R11 + (int64_t)iVar8 * 4,in_R10 + (int64_t)iVar8 * 4,uVar10,
                  in_stack_000001c0 - iVar8,fVar18);
  }
  return;
}





// 函数: void FUN_1807123c2(float param_1,float param_2,uint param_3,uint param_4)
void FUN_1807123c2(float param_1,float param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_RDX;
  float *pfVar7;
  int iVar8;
  int64_t unaff_RBX;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t in_R10;
  int64_t in_R11;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float fVar12;
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
  int iStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  int64_t in_stack_000001a0;
  int64_t in_stack_000001a8;
  int in_stack_000001c0;
  float fStack00000000000001c8;
  float in_stack_000001d0;
  int in_stack_000001e0;
  int64_t in_stack_000001e8;
  int in_stack_000001f0;
  
  uStack0000000000000048 = param_3;
  if (!in_ZF && in_OF == in_SF) {
    uStack0000000000000048 = in_EAX;
  }
  uVar10 = (uint64_t)param_3;
  if ((int)param_3 < (int)param_4) {
    uVar10 = (uint64_t)param_4;
  }
  lVar11 = (int64_t)in_stack_000001e0;
  uStack0000000000000044 = (uint)uVar10;
  fStack00000000000001c8 = param_2 * *(float *)(unaff_RBX + 8 + in_RDX * 0xc);
  fVar15 = *(float *)(in_R10 + (int64_t)(int)(1 - uStack0000000000000044) * 4);
  fVar23 = param_2 * *(float *)(unaff_RBX + in_RDX * 0xc);
  fVar24 = param_2 * *(float *)(unaff_RBX + 4 + in_RDX * 0xc);
  fVar18 = param_1 * *(float *)(unaff_RBX + lVar11 * 0xc);
  fVar19 = param_1 * *(float *)(unaff_RBX + 4 + lVar11 * 0xc);
  fVar20 = param_1 * *(float *)(unaff_RBX + 8 + lVar11 * 0xc);
  lVar11 = 0;
  iVar8 = 0;
  fVar12 = *(float *)(in_R10 + (int64_t)(int)uStack0000000000000044 * -4);
  fVar16 = *(float *)(in_R10 + (int64_t)(int)~uStack0000000000000044 * 4);
  fVar22 = *(float *)(in_R10 + (int64_t)(int)(-2 - uStack0000000000000044) * 4);
  iStack0000000000000040 = in_stack_000001f0;
  if (((param_2 == param_1) && (uStack0000000000000048 == uStack0000000000000044)) &&
     ((int)in_RDX == in_stack_000001e0)) {
    iStack0000000000000040 = 0;
  }
  if (3 < (int64_t)iStack0000000000000040) {
    lVar5 = (int64_t)(int)uStack0000000000000048;
    lVar9 = lVar5 - (int)uStack0000000000000044;
    lVar4 = lVar5 * 4 + 8;
    lVar1 = (lVar5 * 4 + 0xc) - in_R10;
    pfVar7 = (float *)(in_R10 - lVar4);
    lVar2 = (lVar5 * 4 + 0x10) - in_R10;
    lVar3 = (lVar5 * 4 + 0x14) - in_R10;
    lVar4 = lVar4 - in_R10;
    lVar6 = ((int64_t)iStack0000000000000040 - 4U >> 2) + 1;
    iVar8 = (int)lVar6 * 4;
    lVar11 = lVar6 * 4;
    fVar13 = fVar16;
    fVar14 = fVar12;
    fVar17 = fVar15;
    fVar21 = fVar22;
    do {
      fVar15 = *(float *)((int64_t)pfVar7 + lVar4 + in_stack_000001e8);
      fVar22 = pfVar7[lVar9 + 4];
      fVar15 = fVar15 * fVar15;
      fVar12 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar4 + in_R11) =
           fVar12 * fVar23 * pfVar7[2] + pfVar7[lVar5 + 2] +
           (pfVar7[1] + pfVar7[3]) * fVar12 * fVar24 +
           (*pfVar7 + pfVar7[4]) * fVar12 * fStack00000000000001c8 + fVar15 * fVar18 * fVar14 +
           fVar15 * fVar19 * (fVar13 + fVar17) + (fVar22 + fVar21) * fVar15 * fVar20;
      fVar15 = *(float *)((int64_t)pfVar7 + lVar1 + in_stack_000001e8);
      fVar16 = pfVar7[lVar9 + 5];
      fVar15 = fVar15 * fVar15;
      fVar12 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar1 + in_R11) =
           fVar12 * fVar23 * pfVar7[3] + pfVar7[lVar5 + 3] +
           (pfVar7[4] + pfVar7[2]) * fVar12 * fVar24 +
           (pfVar7[1] + pfVar7[5]) * fVar12 * fStack00000000000001c8 + fVar15 * fVar18 * fVar17 +
           fVar15 * fVar19 * (fVar14 + fVar22) + (fVar16 + fVar13) * fVar15 * fVar20;
      fVar15 = *(float *)((int64_t)pfVar7 + lVar2 + in_stack_000001e8);
      fVar12 = pfVar7[lVar9 + 6];
      fVar15 = fVar15 * fVar15;
      fVar13 = 1.0 - fVar15;
      *(float *)((int64_t)pfVar7 + lVar2 + in_R11) =
           fVar13 * fVar23 * pfVar7[4] + pfVar7[lVar5 + 4] +
           (pfVar7[5] + pfVar7[3]) * fVar13 * fVar24 +
           (pfVar7[6] + pfVar7[2]) * fVar13 * fStack00000000000001c8 + fVar15 * fVar18 * fVar22 +
           fVar15 * fVar19 * (fVar17 + fVar16) + (fVar12 + fVar14) * fVar15 * fVar20;
      fVar13 = *(float *)((int64_t)pfVar7 + lVar3 + in_stack_000001e8);
      fVar15 = pfVar7[lVar9 + 7];
      fVar13 = fVar13 * fVar13;
      fVar14 = 1.0 - fVar13;
      *(float *)((int64_t)pfVar7 + lVar3 + in_R11) =
           fVar14 * fVar23 * pfVar7[5] + pfVar7[lVar5 + 5] +
           (pfVar7[6] + pfVar7[4]) * fVar14 * fVar24 +
           (pfVar7[7] + pfVar7[3]) * fVar14 * fStack00000000000001c8 + fVar13 * fVar18 * fVar16 +
           fVar13 * fVar19 * (fVar22 + fVar12) + (fVar15 + fVar17) * fVar13 * fVar20;
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
      fVar13 = fVar16;
      fVar14 = fVar12;
      fVar17 = fVar15;
      fVar21 = fVar22;
    } while (lVar6 != 0);
    uVar10 = (uint64_t)(int)uStack0000000000000044;
    in_R10 = in_stack_000001a8;
    in_R11 = in_stack_000001a0;
  }
  lVar4 = (int64_t)iStack0000000000000040;
  if (lVar11 < lVar4) {
    lVar1 = (int64_t)(int)uStack0000000000000048;
    lVar2 = lVar4 - lVar11;
    pfVar7 = (float *)(in_R10 + ((lVar11 - lVar1) + -1) * 4);
    lVar11 = lVar1 * 4 - in_R10;
    iVar8 = iVar8 + (int)lVar2;
    do {
      fVar17 = fVar16;
      fVar16 = *(float *)(in_stack_000001e8 + lVar11 + 4 + (int64_t)pfVar7);
      fVar13 = pfVar7[(lVar1 - (int)uStack0000000000000044) + 3];
      fVar16 = fVar16 * fVar16;
      fVar14 = 1.0 - fVar16;
      *(float *)(lVar11 + in_R11 + 4 + (int64_t)pfVar7) =
           fVar14 * fVar23 * pfVar7[1] + pfVar7[lVar1 + 1] + (pfVar7[2] + *pfVar7) * fVar14 * fVar24
           + (pfVar7[3] + pfVar7[-1]) * fVar14 * fStack00000000000001c8 + fVar16 * fVar18 * fVar12 +
           fVar16 * fVar19 * (fVar17 + fVar15) + (fVar13 + fVar22) * fVar16 * fVar20;
      pfVar7 = pfVar7 + 1;
      lVar2 = lVar2 + -1;
      fVar16 = fVar12;
      fVar12 = fVar15;
      fVar15 = fVar13;
      fVar22 = fVar17;
    } while (lVar2 != 0);
  }
  if (in_stack_000001d0 == 0.0) {
    if (in_R10 != in_R11) {
                    // WARNING: Subroutine does not return
      memmove(in_R11 + lVar4 * 4,in_R10 + lVar4 * 4,
              (int64_t)(in_stack_000001c0 - iStack0000000000000040) << 2);
    }
  }
  else {
    FUN_180707200(in_R11 + (int64_t)iVar8 * 4,in_R10 + (int64_t)iVar8 * 4,uVar10,
                  in_stack_000001c0 - iVar8,fVar18);
  }
  return;
}





// 函数: void FUN_180712526(float param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void FUN_180712526(float param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  int unaff_EBX;
  int64_t lVar8;
  int unaff_ESI;
  int unaff_EDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int iStack0000000000000040;
  int iStack0000000000000044;
  int in_stack_00000048;
  int64_t in_stack_000001a0;
  int64_t in_stack_000001a8;
  int in_stack_000001c0;
  float in_stack_000001c8;
  float in_stack_000001d0;
  int64_t in_stack_000001e8;
  
  if (3 < param_4) {
    lVar5 = (int64_t)unaff_EDI;
    lVar8 = lVar5 - unaff_R15;
    lVar4 = lVar5 * 4 + 8;
    lVar1 = (lVar5 * 4 + 0xc) - in_R10;
    pfVar7 = (float *)(in_R10 - lVar4);
    lVar2 = (lVar5 * 4 + 0x10) - in_R10;
    lVar3 = (lVar5 * 4 + 0x14) - in_R10;
    lVar4 = lVar4 - in_R10;
    lVar6 = (param_4 - 4U >> 2) + 1;
    unaff_EBX = (int)lVar6 * 4;
    unaff_R12 = lVar6 * 4;
    fVar13 = unaff_XMM7_Da;
    fVar9 = unaff_XMM8_Da;
    fVar10 = unaff_XMM9_Da;
    fVar12 = unaff_XMM13_Da;
    do {
      fVar11 = *(float *)((int64_t)pfVar7 + lVar4 + unaff_R14);
      unaff_XMM13_Da = pfVar7[lVar8 + 4];
      fVar11 = fVar11 * fVar11;
      param_1 = param_1 - fVar11;
      *(float *)((int64_t)pfVar7 + lVar4 + in_R11) =
           param_1 * unaff_XMM14_Da * pfVar7[2] + pfVar7[lVar5 + 2] +
           (pfVar7[1] + pfVar7[3]) * param_1 * unaff_XMM15_Da +
           (*pfVar7 + pfVar7[4]) * param_1 * in_stack_000001c8 + fVar11 * unaff_XMM10_Da * fVar9 +
           fVar11 * unaff_XMM11_Da * (fVar13 + fVar10) +
           (unaff_XMM13_Da + fVar12) * fVar11 * unaff_XMM12_Da;
      fVar12 = *(float *)((int64_t)pfVar7 + lVar1 + unaff_R14);
      unaff_XMM7_Da = pfVar7[lVar8 + 5];
      fVar12 = fVar12 * fVar12;
      fVar11 = 1.0 - fVar12;
      *(float *)((int64_t)pfVar7 + lVar1 + in_R11) =
           fVar11 * unaff_XMM14_Da * pfVar7[3] + pfVar7[lVar5 + 3] +
           (pfVar7[4] + pfVar7[2]) * fVar11 * unaff_XMM15_Da +
           (pfVar7[1] + pfVar7[5]) * fVar11 * in_stack_000001c8 + fVar12 * unaff_XMM10_Da * fVar10 +
           fVar12 * unaff_XMM11_Da * (fVar9 + unaff_XMM13_Da) +
           (unaff_XMM7_Da + fVar13) * fVar12 * unaff_XMM12_Da;
      fVar13 = *(float *)((int64_t)pfVar7 + lVar2 + unaff_R14);
      unaff_XMM8_Da = pfVar7[lVar8 + 6];
      fVar13 = fVar13 * fVar13;
      fVar12 = 1.0 - fVar13;
      *(float *)((int64_t)pfVar7 + lVar2 + in_R11) =
           fVar12 * unaff_XMM14_Da * pfVar7[4] + pfVar7[lVar5 + 4] +
           (pfVar7[5] + pfVar7[3]) * fVar12 * unaff_XMM15_Da +
           (pfVar7[6] + pfVar7[2]) * fVar12 * in_stack_000001c8 +
           fVar13 * unaff_XMM10_Da * unaff_XMM13_Da +
           fVar13 * unaff_XMM11_Da * (fVar10 + unaff_XMM7_Da) +
           (unaff_XMM8_Da + fVar9) * fVar13 * unaff_XMM12_Da;
      fVar13 = *(float *)((int64_t)pfVar7 + lVar3 + unaff_R14);
      unaff_XMM9_Da = pfVar7[lVar8 + 7];
      fVar13 = fVar13 * fVar13;
      fVar9 = 1.0 - fVar13;
      param_1 = 1.0;
      *(float *)((int64_t)pfVar7 + lVar3 + in_R11) =
           fVar9 * unaff_XMM14_Da * pfVar7[5] + pfVar7[lVar5 + 5] +
           (pfVar7[6] + pfVar7[4]) * fVar9 * unaff_XMM15_Da +
           (pfVar7[7] + pfVar7[3]) * fVar9 * in_stack_000001c8 +
           fVar13 * unaff_XMM10_Da * unaff_XMM7_Da +
           fVar13 * unaff_XMM11_Da * (unaff_XMM13_Da + unaff_XMM8_Da) +
           (unaff_XMM9_Da + fVar10) * fVar13 * unaff_XMM12_Da;
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
      fVar13 = unaff_XMM7_Da;
      fVar9 = unaff_XMM8_Da;
      fVar10 = unaff_XMM9_Da;
      fVar12 = unaff_XMM13_Da;
    } while (lVar6 != 0);
    param_3 = (int64_t)iStack0000000000000044;
    param_4 = (int64_t)iStack0000000000000040;
    in_R10 = in_stack_000001a8;
    in_R11 = in_stack_000001a0;
    unaff_R14 = in_stack_000001e8;
    unaff_R15 = param_3;
    unaff_XMM6_Da = in_stack_000001c8;
    unaff_EDI = in_stack_00000048;
    unaff_ESI = iStack0000000000000040;
  }
  if (unaff_R12 < param_4) {
    lVar1 = (int64_t)unaff_EDI;
    lVar2 = param_4 - unaff_R12;
    pfVar7 = (float *)(in_R10 + ((unaff_R12 - lVar1) + -1) * 4);
    lVar4 = lVar1 * 4 - in_R10;
    unaff_EBX = unaff_EBX + (int)lVar2;
    do {
      fVar12 = unaff_XMM7_Da;
      fVar13 = *(float *)(unaff_R14 + lVar4 + 4 + (int64_t)pfVar7);
      fVar9 = pfVar7[(lVar1 - unaff_R15) + 3];
      fVar13 = fVar13 * fVar13;
      fVar10 = param_1 - fVar13;
      param_1 = 1.0;
      *(float *)(lVar4 + in_R11 + 4 + (int64_t)pfVar7) =
           fVar10 * unaff_XMM14_Da * pfVar7[1] + pfVar7[lVar1 + 1] +
           (pfVar7[2] + *pfVar7) * fVar10 * unaff_XMM15_Da +
           (pfVar7[3] + pfVar7[-1]) * fVar10 * unaff_XMM6_Da +
           fVar13 * unaff_XMM10_Da * unaff_XMM8_Da +
           fVar13 * unaff_XMM11_Da * (fVar12 + unaff_XMM9_Da) +
           (fVar9 + unaff_XMM13_Da) * fVar13 * unaff_XMM12_Da;
      pfVar7 = pfVar7 + 1;
      lVar2 = lVar2 + -1;
      unaff_XMM7_Da = unaff_XMM8_Da;
      unaff_XMM8_Da = unaff_XMM9_Da;
      unaff_XMM9_Da = fVar9;
      unaff_XMM13_Da = fVar12;
    } while (lVar2 != 0);
  }
  if (in_stack_000001d0 == 0.0) {
    if (in_R10 != in_R11) {
                    // WARNING: Subroutine does not return
      memmove(in_R11 + param_4 * 4,in_R10 + param_4 * 4,
              (int64_t)(in_stack_000001c0 - unaff_ESI) << 2);
    }
  }
  else {
    FUN_180707200(in_R11 + (int64_t)unaff_EBX * 4,in_R10 + (int64_t)unaff_EBX * 4,param_3,
                  in_stack_000001c0 - unaff_EBX);
  }
  return;
}






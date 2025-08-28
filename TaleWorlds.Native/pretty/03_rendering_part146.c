#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part146.c - 7 个函数

// 函数: void FUN_18035a8e0(longlong param_1,longlong param_2)
void FUN_18035a8e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint64_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auStack_268 [32];
  longlong *plStack_248;
  uint64_t uStack_238;
  uint uStack_230;
  uint uStack_22c;
  uint64_t uStack_228;
  float fStack_220;
  float fStack_21c;
  longlong lStack_218;
  longlong lStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  longlong alStack_1a8 [3];
  int32_t uStack_190;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  longlong alStack_160 [3];
  int32_t uStack_148;
  longlong alStack_138 [3];
  int32_t uStack_120;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  ulonglong uStack_e8;
  
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
  uStack_1f8 = *(uint64_t *)(param_2 + 0x10);
  uStack_1f0 = *(uint64_t *)(param_2 + 0x18);
  uStack_1d8 = *(uint64_t *)(param_2 + 0x20);
  uStack_1d0 = *(uint64_t *)(param_2 + 0x28);
  uStack_1c8 = *(uint64_t *)(param_2 + 0x40);
  uStack_1c0 = *(uint64_t *)(param_2 + 0x48);
  uStack_1e8 = *(uint64_t *)(param_2 + 0x50);
  uStack_1e0 = *(uint64_t *)(param_2 + 0x58);
  fVar19 = (float)*(double *)(param_1 + 0xa8) * *(float *)(param_2 + 0x80);
  fVar18 = (float)*(double *)(param_1 + 0xa8) * *(float *)(param_2 + 0x84);
  uVar5 = (uint)(longlong)(*(float *)(param_2 + 0x6c) * 256.0);
  uVar12 = 0xff;
  if (uVar5 < 0xff) {
    uVar12 = uVar5;
  }
  uVar9 = (uint)(longlong)(*(float *)(param_2 + 0x60) * 256.0);
  uVar5 = 0xff;
  if (uVar9 < 0xff) {
    uVar5 = uVar9;
  }
  uVar10 = (uint)(longlong)(*(float *)(param_2 + 100) * 256.0);
  uVar9 = 0xff;
  if (uVar10 < 0xff) {
    uVar9 = uVar10;
  }
  uVar10 = (uint)(longlong)(*(float *)(param_2 + 0x68) * 256.0);
  uStack_230 = 0xff;
  if (uVar10 < 0xff) {
    uStack_230 = uVar10;
  }
  uStack_230 = ((uVar12 << 8 | uVar5) << 8 | uVar9) << 8 | uStack_230;
  uVar5 = (uint)(longlong)(*(float *)(param_2 + 0x7c) * 256.0);
  uVar12 = 0xff;
  if (uVar5 < 0xff) {
    uVar12 = uVar5;
  }
  uVar9 = (uint)(longlong)(*(float *)(param_2 + 0x70) * 256.0);
  uVar5 = 0xff;
  if (uVar9 < 0xff) {
    uVar5 = uVar9;
  }
  uVar10 = (uint)(longlong)(*(float *)(param_2 + 0x74) * 256.0);
  uVar9 = 0xff;
  if (uVar10 < 0xff) {
    uVar9 = uVar10;
  }
  uVar10 = (uint)(longlong)(*(float *)(param_2 + 0x78) * 256.0);
  uStack_22c = 0xff;
  if (uVar10 < 0xff) {
    uStack_22c = uVar10;
  }
  uStack_22c = ((uVar12 << 8 | uVar5) << 8 | uVar9) << 8 | uStack_22c;
  uVar14 = *(uint64_t *)(param_2 + 0x88);
  fStack_220 = (float)*(double *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xcc) == '\0') {
    uStack_228 = (longlong *)CONCAT44(fVar19,fStack_220);
    uStack_238 = (longlong *)((ulonglong)(uint)fVar19 << 0x20);
    fStack_21c = fVar18;
    uVar6 = FUN_180235000(uVar14,&uStack_1f8);
    uVar7 = FUN_180235000(uVar14,&uStack_1d8);
    uVar8 = FUN_180235000(uVar14,&uStack_1e8);
    lStack_218 = 0;
    lStack_210 = 0x7f7fffff3f800000;
    plStack_248 = &lStack_218;
    uVar6 = FUN_1802350e0(uVar14,uVar6,&uStack_238,&uStack_230);
    plStack_248 = &lStack_218;
    uVar7 = FUN_1802350e0(uVar14,uVar7,&uStack_228,&uStack_230);
    plStack_248 = &lStack_218;
    uVar8 = FUN_1802350e0(uVar14,uVar8,&fStack_220,&uStack_22c);
    FUN_180235410(uVar14,uVar6,uVar7,uVar8);
    uVar14 = *(uint64_t *)(param_2 + 0x88);
    fStack_220 = 0.0;
    uStack_228 = (longlong *)CONCAT44(fVar18,(float)*(double *)(param_1 + 0xb0));
    uStack_238 = (longlong *)((ulonglong)(uint)fVar19 << 0x20);
    fStack_21c = fVar18;
    uVar6 = FUN_180235000(uVar14,&uStack_1f8);
    uVar7 = FUN_180235000(uVar14,&uStack_1e8);
    uVar8 = FUN_180235000(uVar14,&uStack_1c8);
    lStack_218 = 0;
    lStack_210 = 0x7f7fffff3f800000;
    plStack_248 = &lStack_218;
    uVar6 = FUN_1802350e0(uVar14,uVar6,&uStack_238,&uStack_230);
    puVar13 = &uStack_22c;
  }
  else {
    uStack_238 = (longlong *)(ulonglong)(uint)fVar19;
    uStack_228 = (longlong *)CONCAT44(fStack_220,fVar19);
    fStack_21c = 0.0;
    fStack_220 = fVar18;
    uVar6 = FUN_180235000(uVar14,&uStack_1e8);
    uVar7 = FUN_180235000(uVar14,&uStack_1f8);
    uVar8 = FUN_180235000(uVar14,&uStack_1d8);
    lStack_218 = 0;
    lStack_210 = 0x7f7fffff3f800000;
    plStack_248 = &lStack_218;
    uVar6 = FUN_1802350e0(uVar14,uVar6,&fStack_220,&uStack_22c);
    plStack_248 = &lStack_218;
    uVar7 = FUN_1802350e0(uVar14,uVar7,&uStack_228,&uStack_230);
    plStack_248 = &lStack_218;
    uVar8 = FUN_1802350e0(uVar14,uVar8,&uStack_238,&uStack_230);
    FUN_180235410(uVar14,uVar6,uVar7,uVar8);
    uVar14 = *(uint64_t *)(param_2 + 0x88);
    fStack_21c = 0.0;
    uStack_228 = (longlong *)CONCAT44((float)*(double *)(param_1 + 0xb0),fVar19);
    uStack_238 = (longlong *)CONCAT44((float)*(double *)(param_1 + 0xb0),fVar18);
    fStack_220 = fVar18;
    uVar6 = FUN_180235000(uVar14,&uStack_1c8);
    uVar7 = FUN_180235000(uVar14,&uStack_1f8);
    uVar8 = FUN_180235000(uVar14,&uStack_1e8);
    lStack_218 = 0;
    lStack_210 = 0x7f7fffff3f800000;
    plStack_248 = &lStack_218;
    uVar6 = FUN_1802350e0(uVar14,uVar6,&uStack_238,&uStack_22c);
    puVar13 = &uStack_230;
  }
  plStack_248 = &lStack_218;
  uVar7 = FUN_1802350e0(uVar14,uVar7,&uStack_228,puVar13);
  plStack_248 = &lStack_218;
  uVar8 = FUN_1802350e0(uVar14,uVar8,&fStack_220,&uStack_22c);
  FUN_180235410(uVar14,uVar6,uVar7,uVar8);
  uVar4 = uStack_1c8;
  uVar3 = uStack_1d8;
  uVar14 = uStack_1e8;
  fVar18 = *(float *)(param_1 + 0x128);
  if (*(float *)(param_1 + 0x128) <= (float)uStack_1f8) {
    fVar18 = (float)uStack_1f8;
  }
  fVar19 = *(float *)(param_1 + 300);
  if (*(float *)(param_1 + 300) <= uStack_1f8._4_4_) {
    fVar19 = uStack_1f8._4_4_;
  }
  fVar15 = (float)uStack_1f0;
  if ((float)uStack_1f0 <= *(float *)(param_1 + 0x130)) {
    fVar15 = *(float *)(param_1 + 0x130);
  }
  fVar20 = *(float *)(param_1 + 0x138);
  if ((float)uStack_1f8 <= *(float *)(param_1 + 0x138)) {
    fVar20 = (float)uStack_1f8;
  }
  fVar21 = *(float *)(param_1 + 0x13c);
  if (uStack_1f8._4_4_ <= *(float *)(param_1 + 0x13c)) {
    fVar21 = uStack_1f8._4_4_;
  }
  fVar17 = (float)uStack_1f0;
  if (*(float *)(param_1 + 0x140) <= (float)uStack_1f0) {
    fVar17 = *(float *)(param_1 + 0x140);
  }
  if (fVar18 <= (float)uStack_1d8) {
    fVar18 = (float)uStack_1d8;
  }
  if (fVar19 <= uStack_1d8._4_4_) {
    fVar19 = uStack_1d8._4_4_;
  }
  fVar16 = (float)uStack_1d0;
  if ((float)uStack_1d0 <= fVar15) {
    fVar16 = fVar15;
  }
  if ((float)uStack_1d8 <= fVar20) {
    fVar20 = (float)uStack_1d8;
  }
  if (uStack_1d8._4_4_ <= fVar21) {
    fVar21 = uStack_1d8._4_4_;
  }
  if ((float)uStack_1d0 <= fVar17) {
    fVar17 = (float)uStack_1d0;
  }
  if (fVar18 <= (float)uStack_1e8) {
    fVar18 = (float)uStack_1e8;
  }
  if (fVar19 <= uStack_1e8._4_4_) {
    fVar19 = uStack_1e8._4_4_;
  }
  if (fVar16 <= (float)uStack_1e0) {
    fVar16 = (float)uStack_1e0;
  }
  if ((float)uStack_1e8 <= fVar20) {
    fVar20 = (float)uStack_1e8;
  }
  if (uStack_1e8._4_4_ <= fVar21) {
    fVar21 = uStack_1e8._4_4_;
  }
  if ((float)uStack_1e0 <= fVar17) {
    fVar17 = (float)uStack_1e0;
  }
  if (fVar18 <= (float)uStack_1c8) {
    fVar18 = (float)uStack_1c8;
  }
  *(float *)(param_1 + 0x128) = fVar18;
  if (fVar19 <= uStack_1c8._4_4_) {
    fVar19 = uStack_1c8._4_4_;
  }
  *(float *)(param_1 + 300) = fVar19;
  if (fVar16 <= (float)uStack_1c0) {
    fVar16 = (float)uStack_1c0;
  }
  *(float *)(param_1 + 0x130) = fVar16;
  if ((float)uStack_1c8 <= fVar20) {
    fVar20 = (float)uStack_1c8;
  }
  *(float *)(param_1 + 0x138) = fVar20;
  if (uStack_1c8._4_4_ <= fVar21) {
    fVar21 = uStack_1c8._4_4_;
  }
  *(float *)(param_1 + 0x13c) = fVar21;
  fVar18 = (float)uStack_1c0;
  if (fVar17 <= (float)uStack_1c0) {
    fVar18 = fVar17;
  }
  *(float *)(param_1 + 0x140) = fVar18;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 3;
  uStack_238 = (longlong *)uStack_1f8;
  FUN_18005ea90(&lStack_218,&uStack_238);
  uStack_238 = (longlong *)uVar3;
  FUN_18005ea90(&lStack_218,&uStack_238);
  uStack_238 = (longlong *)uVar4;
  FUN_18005ea90(&lStack_218,&uStack_238);
  uStack_238 = (longlong *)uVar14;
  FUN_18005ea90(&lStack_218,&uStack_238);
  lVar2 = lStack_218;
  uStack_238 = alStack_138;
  alStack_138[0] = 0;
  alStack_138[1] = 0;
  alStack_138[2] = 0;
  uStack_120 = 3;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lVar11 = lStack_210 - lStack_218;
  FUN_180640330(lStack_218);
  FUN_18063efb0(alStack_138,&lStack_218,lVar11 >> 3 & 0xffffffff,0);
  uStack_228 = alStack_1a8;
  alStack_1a8[0] = 0;
  alStack_1a8[1] = 0;
  alStack_1a8[2] = 0;
  uStack_190 = 3;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_238 = alStack_160;
  alStack_160[0] = 0;
  alStack_160[1] = 0;
  alStack_160[2] = 0;
  uStack_148 = 3;
  FUN_18035b1b0(alStack_1a8,alStack_138);
  FUN_1800863a0(alStack_160,&uStack_1f8);
  FUN_1800863a0(alStack_160,&uStack_1d8);
  FUN_1800863a0(alStack_160,&uStack_1c8);
  FUN_1800863a0(alStack_160,&uStack_1e8);
  lVar11 = *(longlong *)(param_2 + 0x90);
  uVar1 = *(ulonglong *)(lVar11 + 8);
  if (uVar1 < *(ulonglong *)(lVar11 + 0x10)) {
    *(ulonglong *)(lVar11 + 8) = uVar1 + 0x68;
    FUN_18035cb30(uVar1);
  }
  else {
    FUN_18035cbe0(lVar11,alStack_1a8);
  }
  uStack_238 = alStack_160;
  if (alStack_160[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_238 = alStack_1a8;
  if (alStack_1a8[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_238 = alStack_138;
  if (alStack_138[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_268);
}





// 函数: void FUN_18035b160(ulonglong *param_1)
void FUN_18035b160(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18035b1b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar7 = lVar2 - lVar1;
    uVar6 = lVar7 >> 3;
    if ((ulonglong)(param_1[2] - lVar4 >> 3) < uVar6) {
      if (uVar6 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
      }
      if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar1,lVar7);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar1 = lVar4 + uVar6 * 8;
      *param_1 = lVar4;
      param_1[1] = lVar1;
      param_1[2] = lVar1;
    }
    else {
      lVar3 = param_1[1];
      uVar5 = lVar3 - lVar4 >> 3;
      if (uVar5 < uVar6) {
        lVar7 = uVar5 * 8 + lVar1;
        if (lVar1 != lVar7) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar1);
        }
        if (lVar7 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar7,lVar2 - lVar7);
        }
        param_1[1] = lVar3;
      }
      else {
        if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar1,lVar7);
        }
        param_1[1] = lVar4;
      }
    }
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int32_t *)((longlong)param_1 + 0x24) = *(int32_t *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(int32_t *)((longlong)param_1 + 0x2c) = *(int32_t *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035b1cd(longlong param_1,longlong *param_2)
void FUN_18035b1cd(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RBX;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong lVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar6 = lVar2 - lVar1;
  uVar5 = lVar6 >> 3;
  if ((ulonglong)(in_RAX - param_1 >> 3) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 8,(char)unaff_RBX[3]);
    }
    if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar1,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar3 + uVar5 * 8;
    *unaff_RBX = lVar3;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar4 = lVar3 - param_1 >> 3;
    if (uVar4 < uVar5) {
      lVar6 = uVar4 * 8 + lVar1;
      if (lVar1 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar1);
      }
      if (lVar6 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar6,lVar2 - lVar6);
      }
      unaff_RBX[1] = lVar3;
    }
    else {
      if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar1,lVar6);
      }
      unaff_RBX[1] = param_1;
    }
  }
  *(int32_t *)(unaff_RBX + 4) = *(int32_t *)(unaff_RDI + 0x20);
  *(int32_t *)((longlong)unaff_RBX + 0x24) = *(int32_t *)(unaff_RDI + 0x24);
  *(int32_t *)(unaff_RBX + 5) = *(int32_t *)(unaff_RDI + 0x28);
  *(int32_t *)((longlong)unaff_RBX + 0x2c) = *(int32_t *)(unaff_RDI + 0x2c);
  unaff_RBX[6] = *(longlong *)(unaff_RDI + 0x30);
  unaff_RBX[7] = *(longlong *)(unaff_RDI + 0x38);
  unaff_RBX[8] = *(longlong *)(unaff_RDI + 0x40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035b201(void)
void FUN_18035b201(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP * 8,(char)unaff_RBX[3]);
  }
  if (unaff_RSI != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_RBP * 8;
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar1;
  unaff_RBX[2] = lVar1;
  *(int32_t *)(unaff_RBX + 4) = *(int32_t *)(unaff_RDI + 0x20);
  *(int32_t *)((longlong)unaff_RBX + 0x24) = *(int32_t *)(unaff_RDI + 0x24);
  *(int32_t *)(unaff_RBX + 5) = *(int32_t *)(unaff_RDI + 0x28);
  *(int32_t *)((longlong)unaff_RBX + 0x2c) = *(int32_t *)(unaff_RDI + 0x2c);
  unaff_RBX[6] = *(longlong *)(unaff_RDI + 0x30);
  unaff_RBX[7] = *(longlong *)(unaff_RDI + 0x38);
  unaff_RBX[8] = *(longlong *)(unaff_RDI + 0x40);
  return;
}





// 函数: void FUN_18035b262(longlong param_1)
void FUN_18035b262(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 3;
  if (uVar3 < unaff_RBP) {
    lVar1 = uVar3 * 8 + unaff_RSI;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_R14) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_R14 - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_R14) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  *(int32_t *)(unaff_RBX + 0x20) = *(int32_t *)(unaff_RDI + 0x20);
  *(int32_t *)(unaff_RBX + 0x24) = *(int32_t *)(unaff_RDI + 0x24);
  *(int32_t *)(unaff_RBX + 0x28) = *(int32_t *)(unaff_RDI + 0x28);
  *(int32_t *)(unaff_RBX + 0x2c) = *(int32_t *)(unaff_RDI + 0x2c);
  *(uint64_t *)(unaff_RBX + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
  *(uint64_t *)(unaff_RBX + 0x38) = *(uint64_t *)(unaff_RDI + 0x38);
  *(uint64_t *)(unaff_RBX + 0x40) = *(uint64_t *)(unaff_RDI + 0x40);
  return;
}





// 函数: void FUN_18035b2f0(void)
void FUN_18035b2f0(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RBX + 0x20) = *(int32_t *)(unaff_RDI + 0x20);
  *(int32_t *)(unaff_RBX + 0x24) = *(int32_t *)(unaff_RDI + 0x24);
  *(int32_t *)(unaff_RBX + 0x28) = *(int32_t *)(unaff_RDI + 0x28);
  *(int32_t *)(unaff_RBX + 0x2c) = *(int32_t *)(unaff_RDI + 0x2c);
  *(uint64_t *)(unaff_RBX + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
  *(uint64_t *)(unaff_RBX + 0x38) = *(uint64_t *)(unaff_RDI + 0x38);
  *(uint64_t *)(unaff_RBX + 0x40) = *(uint64_t *)(unaff_RDI + 0x40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035b330(longlong param_1)
void FUN_18035b330(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  if (*(longlong *)(param_1 + 0x110) == 0) {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      plStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStackX_8 = *(longlong **)(param_1 + 0x110);
    *(longlong **)(param_1 + 0x110) = plVar4;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    uVar3 = *(uint64_t *)(param_1 + 0x118);
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0x110);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_18 = &plStackX_8;
    FUN_1802edcd0(uVar3,plStackX_8,1);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
  plVar4 = (longlong *)FUN_180275090(uVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  if ((int)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0xd8) -
            *(longlong *)(*(longlong *)(param_1 + 0x108) + 0xd0) >> 3) + -1 < 1) {
    FUN_180276f30(plVar4,(longlong)plVar4 + 0x214,1);
    FUN_1802e9fa0(*(uint64_t *)(param_1 + 0x118),1,1);
    uVar3 = *(uint64_t *)(param_1 + 0x118);
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    pplStackX_18 = &plStackX_8;
    FUN_1802edcd0(uVar3,plStackX_8,1);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    FUN_1802eec60(*(uint64_t *)(param_1 + 0x118));
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (*(short *)(lVar2 + 0x2b0) != *(short *)(lVar2 + 0x2b4)) {
      if (*(char *)(lVar2 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar2);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar2 + 0x28),*(longlong *)(lVar2 + 0x28) + 0xf8,lVar2 + 0x70);
      }
      *(int16_t *)(lVar2 + 0x2b0) = *(int16_t *)(lVar2 + 0x2b4);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_3104_ptr);
  }
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0xd0) + 0x198);
  if (pcVar1 != (code *)&unknown_var_2544_ptr) {
    (*pcVar1)(*(longlong **)(param_1 + 0xd0));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400((float)*(double *)(param_1 + 0xe8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




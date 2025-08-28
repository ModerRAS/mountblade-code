#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part088.c - 5 个函数

// 函数: void FUN_180113940(float *param_1,uint64_t param_2,float *param_3,uint64_t param_4,
void FUN_180113940(float *param_1,uint64_t param_2,float *param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong *plVar1;
  uint *puVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int32_t uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_168 [32];
  float *pfStack_148;
  float *pfStack_140;
  float *pfStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  float *pfStack_120;
  int32_t uStack_118;
  char cStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int32_t uStack_c8;
  ulonglong uStack_88;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uStack_88 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  *(int8_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar4 = *(longlong *)(lVar6 + 0x1af8);
  if (*(char *)(lVar4 + 0xb4) != '\0') goto FUN_18011403f;
  iVar9 = FUN_180121250(param_1,0,
                        *(int32_t *)
                         (*(longlong *)(lVar4 + 0x220) + -4 + (longlong)*(int *)(lVar4 + 0x218) * 4)
                       );
  if (*(int *)(lVar6 + 0x1b2c) == iVar9) {
    *(int *)(lVar6 + 0x1b34) = iVar9;
  }
  if (*(int *)(lVar6 + 0x1b30) == iVar9) {
    *(int8_t *)(lVar6 + 0x1b3f) = 1;
  }
  fStack_e8 = (float)func_0x00018012d6a0();
  pfVar12 = param_1;
  if (param_1 != (float *)0xffffffffffffffff) {
    while (*(char *)pfVar12 != '\0') {
      if (((*(char *)pfVar12 == '#') && (*(char *)((longlong)pfVar12 + 1) == '#')) ||
         (pfVar12 = (float *)((longlong)pfVar12 + 1), pfVar12 == (float *)0xffffffffffffffff))
      break;
    }
  }
  pfVar16 = *(float **)(lVar6 + 0x19f0);
  fVar20 = *(float *)(lVar6 + 0x19f8);
  if (param_1 == pfVar12) {
    fVar19 = 0.0;
  }
  else {
    uStack_130 = 0;
    pfStack_148 = (float *)CONCAT44(pfStack_148._4_4_,0xbf800000);
    pfStack_140 = param_1;
    pfStack_138 = pfVar12;
    FUN_180297340(pfVar16,&fStack_e0,fVar20,0x7f7fffff);
    fVar19 = fStack_e0;
    if (0.0 < fStack_e0) {
      fVar19 = fStack_e0 - fVar20 / *pfVar16;
    }
    fVar19 = (float)(int)(fVar19 + 0.95);
    fVar20 = fStack_dc;
  }
  fStack_100 = *(float *)(lVar4 + 0x100);
  fStack_fc = *(float *)(lVar4 + 0x104);
  fStack_e8 = fStack_e8 + fStack_100;
  fStack_f4 = *(float *)(lVar6 + 0x1660) + *(float *)(lVar6 + 0x1660) + fVar20 + fStack_fc;
  if (fVar19 <= 0.0) {
    fStack_f8 = 0.0;
  }
  else {
    fStack_f8 = fVar19 + *(float *)(lVar6 + 0x1674);
  }
  fStack_f8 = fStack_f8 + fStack_e8;
  fStack_f0 = fStack_100;
  fStack_ec = fStack_fc;
  fStack_e4 = fStack_f4;
  cVar7 = FUN_180124190(&fStack_100,iVar9,&fStack_f0);
  if (cVar7 == '\0') {
    fStack_dc = fStack_f4 - fStack_fc;
    fStack_e0 = fStack_f8 - fStack_100;
    func_0x000180124080(&fStack_e0,*(int32_t *)(lVar6 + 0x1660));
    goto FUN_18011403f;
  }
  cVar7 = FUN_180124460(lVar4,iVar9,1);
  cVar8 = FUN_1801243a0(&fStack_f0,iVar9);
  if ((((cVar7 == '\0') && ((cVar8 == '\0' || (*(char *)(lVar6 + 0x410) == '\0')))) &&
      (*(int *)(lVar6 + 0x1ca4) != iVar9)) &&
     ((*(int *)(lVar6 + 0x1cb0) != iVar9 || (*(int *)(lVar6 + 0x2da0) == iVar9)))) {
LAB_180113c0c:
    if ((*(int *)(lVar6 + 0x1b2c) != iVar9) || (*(int *)(lVar6 + 0x2da0) != iVar9)) {
      fStack_dc = fStack_f4 - fStack_fc;
      fStack_e0 = fStack_f8 - fStack_100;
      func_0x000180124080(&fStack_e0,*(int32_t *)(lVar6 + 0x1660));
      if (*(int *)(lVar6 + 0x1b2c) == iVar9) {
        lVar13 = 9;
      }
      else {
        lVar13 = (ulonglong)(*(int *)(lVar6 + 0x1b18) == iVar9) + 7;
      }
      pfVar12 = (float *)(lVar6 + 0x1628 + (lVar13 + 10) * 0x10);
      fStack_100 = *pfVar12;
      fStack_fc = pfVar12[1];
      fStack_f8 = pfVar12[2];
      fStack_f4 = pfVar12[3] * *(float *)(lVar6 + 0x1628);
      uVar10 = func_0x000180121e20(&fStack_100);
      if (iVar9 == *(int *)(lVar6 + 0x1ca0)) {
        FUN_1801230e0(&fStack_f0,1,lVar6);
      }
      pfStack_148 = (float *)CONCAT44(pfStack_148._4_4_,*(int32_t *)(lVar6 + 0x1664));
      FUN_180122960(CONCAT44(fStack_ec,fStack_f0),CONCAT44(fStack_e4,fStack_e8),uVar10,1);
      pfStack_120 = &fStack_100;
      uStack_118 = 4;
      uStack_128 = 0;
      uStack_130 = CONCAT44(uStack_130._4_4_,0x3f800000);
      pfStack_138 = (float *)&unknown_var_8448_ptr;
      pfStack_140 = (float *)param_5;
      fStack_100 = 3.4028235e+38;
      fStack_fc = 3.4028235e+38;
      fStack_f8 = -3.4028235e+38;
      fStack_f4 = -3.4028235e+38;
      pfStack_148 = (float *)param_4;
      cStack_108 = func_0x000180113830(&fStack_f0,iVar9,4,param_3);
      lVar13 = SYSTEM_DATA_MANAGER_A;
      if (cStack_108 != '\0') {
        plVar1 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
        *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
        puVar2 = (uint *)(*plVar1 + 0x148);
        *puVar2 = *puVar2 | 4;
      }
      lVar15 = 0x1d0;
      if (*(int *)(lVar6 + 0x1b2c) == iVar9) {
        lVar15 = 0x1e0;
      }
      pfVar12 = (float *)(lVar15 + 0x1628 + lVar13);
      fStack_e0 = *pfVar12;
      fStack_dc = pfVar12[1];
      fStack_d8 = pfVar12[2];
      fStack_d4 = pfVar12[3] * *(float *)(lVar13 + 0x1628);
      uVar10 = func_0x000180121e20(&fStack_e0);
      pfStack_140 = (float *)CONCAT44(pfStack_140._4_4_,0xf);
      pfStack_148 = (float *)CONCAT44(pfStack_148._4_4_,*(int32_t *)(lVar6 + 0x1698));
      FUN_180293f50(*(uint64_t *)(lVar4 + 0x2e8),&fStack_100,&fStack_f8,uVar10);
      iVar9 = FUN_180121200(&uStack_c8,0x40,&unknown_var_8448_ptr,(double)*param_3);
      lVar4 = SYSTEM_DATA_MANAGER_A;
      pfVar12 = (float *)((longlong)&uStack_c8 + (longlong)iVar9);
      fStack_e0 = 0.5;
      fStack_dc = 0.5;
      if (pfVar12 == (float *)0x0) {
        pfVar12 = (float *)0xffffffffffffffff;
      }
      pfVar16 = (float *)&uStack_c8;
      if (&uStack_c8 < pfVar12) {
        while (*(char *)pfVar16 != '\0') {
          if (((*(char *)pfVar16 == '#') && (*(char *)((longlong)pfVar16 + 1) == '#')) ||
             (pfVar16 = (float *)((longlong)pfVar16 + 1), pfVar12 <= pfVar16)) break;
        }
      }
      fVar20 = fStack_ec;
      if ((int)pfVar16 != (int)&uStack_c8) {
        pfStack_138 = &fStack_e0;
        uStack_130 = 0;
        pfStack_140 = (float *)0x0;
        pfStack_148 = pfVar16;
        FUN_1801224c0(*(uint64_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStack_f0,
                      &fStack_e8,&uStack_c8);
        fVar20 = fStack_ec;
        lVar13 = SYSTEM_DATA_MANAGER_A;
        if (*(char *)(lVar4 + 0x2e38) != '\0') {
          lVar4 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
          if ((pfVar16 == (float *)0x0) &&
             (pfVar16 = (float *)&uStack_c8, &stack0x00000000 != (int8_t *)0xc7)) {
            do {
              if ((*(char *)pfVar16 == '\0') ||
                 ((*(char *)pfVar16 == '#' && (*(char *)((longlong)pfVar16 + 1) == '#')))) break;
              pfVar16 = (float *)((longlong)pfVar16 + 1);
            } while (pfVar16 != (float *)0xffffffffffffffff);
          }
          fVar3 = *(float *)(lVar4 + 0x138);
          pfVar12 = (float *)&uStack_c8;
          iVar9 = *(int *)(lVar4 + 0x13c);
          *(float *)(lVar4 + 0x138) = fStack_ec;
          iVar11 = *(int *)(lVar13 + 0x2e58);
          bVar5 = fVar3 + 1.0 < fStack_ec;
          iVar18 = iVar9;
          if (iVar9 < iVar11) {
            *(int *)(lVar13 + 0x2e58) = iVar9;
            iVar18 = *(int *)(lVar4 + 0x13c);
            iVar11 = iVar9;
          }
          while( true ) {
            pfVar14 = (float *)memchr(pfVar12,10,(longlong)pfVar16 - (longlong)pfVar12);
            pfVar17 = pfVar16;
            if (pfVar14 != (float *)0x0) {
              pfVar17 = pfVar14;
            }
            if ((pfVar17 != pfVar16) || (pfVar12 != pfVar17)) {
              if ((bVar5) || (pfVar12 != (float *)&uStack_c8)) {
                pfStack_148 = pfVar12;
                FUN_18013c760(&unknown_var_3184_ptr,(iVar18 - iVar11) * 4,&system_buffer_ptr);
              }
              else {
                FUN_18013c760(&unknown_var_3176_ptr,(int)pfVar17 - (int)pfVar12,pfVar12);
              }
            }
            if (pfVar17 == pfVar16) break;
            pfVar12 = (float *)((longlong)pfVar17 + 1);
          }
        }
      }
      if (0.0 < fVar19) {
        FUN_180122320(CONCAT44(fVar20 + *(float *)(lVar6 + 0x1660),
                               fStack_e8 + *(float *)(lVar6 + 0x1674)),param_1,0,1);
      }
      goto FUN_18011403f;
    }
  }
  else {
    func_0x000180123e90(iVar9,lVar4);
    FUN_180123f30();
    FUN_18012d2e0(lVar4);
    *(int32_t *)(lVar6 + 0x1b44) = 0xc;
    if ((cVar7 == '\0') &&
       ((*(char *)(lVar6 + 0x134) == '\0' && (*(int *)(lVar6 + 0x1cb0) != iVar9))))
    goto LAB_180113c0c;
    *(int32_t *)(lVar6 + 0x2da0) = 0;
  }
  *(int *)(lVar4 + 0x3f0) = *(int *)(lVar4 + 0x3f0) + -1;
  *(int *)(lVar4 + 0x3f4) = *(int *)(lVar4 + 0x3f4) + -1;
  pfStack_140 = (float *)&unknown_var_8448_ptr;
  pfStack_148 = param_3;
  FUN_1801141d0(&fStack_f0,iVar9,param_1);
FUN_18011403f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801139a9(longlong param_1,uint64_t param_2)
void FUN_1801139a9(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int32_t *puVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int32_t uVar10;
  int32_t uVar11;
  int iVar12;
  longlong in_RAX;
  char *pcVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  char *pcVar17;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar18;
  uint64_t unaff_R12;
  char *unaff_R13;
  char *pcVar19;
  int iVar20;
  float *unaff_R15;
  int32_t in_XMM0_Da;
  float fVar21;
  float fVar22;
  int32_t extraout_XMM0_Da;
  float fVar23;
  uint64_t in_stack_00000020;
  uint64_t uVar24;
  int32_t uVar25;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  uVar25 = (int32_t)((ulonglong)unaff_R12 >> 0x20);
  iVar9 = FUN_180121250(in_XMM0_Da,param_2,*(int32_t *)(in_RAX + -4 + param_1 * 4));
  if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
    *(int *)(unaff_RSI + 0x1b34) = iVar9;
  }
  if (*(int *)(unaff_RSI + 0x1b30) == iVar9) {
    *(int8_t *)(unaff_RSI + 0x1b3f) = 1;
  }
  fVar21 = (float)func_0x00018012d6a0();
  pcVar13 = unaff_R13;
  if (unaff_R13 != (char *)0xffffffffffffffff) {
    while (*pcVar13 != '\0') {
      if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
         (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar5 = *(float **)(unaff_RSI + 0x19f0);
  fVar23 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_R13 == pcVar13) {
    fVar22 = 0.0;
  }
  else {
    uVar24 = CONCAT44(uVar11,0xbf800000);
    FUN_180297340(pfVar5,unaff_RBP + -0x78,fVar23,0x7f7fffff,uVar24);
    uVar11 = (int32_t)((ulonglong)uVar24 >> 0x20);
    fVar22 = *(float *)(unaff_RBP + -0x78);
    if (0.0 < fVar22) {
      fVar22 = fVar22 - fVar23 / *pfVar5;
    }
    fVar23 = *(float *)(unaff_RBP + -0x74);
    fVar22 = (float)(int)(fVar22 + 0.95);
  }
  in_stack_00000068 = *(float *)(unaff_RDI + 0x100);
  fStack000000000000006c = *(float *)(unaff_RDI + 0x104);
  fVar4 = *(float *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + -0x80) = fVar21 + in_stack_00000068;
  fStack0000000000000074 = fVar4 + fVar4 + fVar23 + fStack000000000000006c;
  *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
  if (fVar22 <= 0.0) {
    in_stack_00000070 = 0.0;
  }
  else {
    in_stack_00000070 = fVar22 + *(float *)(unaff_RSI + 0x1674);
  }
  in_stack_00000070 = in_stack_00000070 + fVar21 + in_stack_00000068;
  in_stack_00000078 = in_stack_00000068;
  fStack000000000000007c = fStack000000000000006c;
  cVar7 = FUN_180124190(&stack0x00000068,iVar9,&stack0x00000078);
  if (cVar7 == '\0') {
    *(float *)(unaff_RBP + -0x74) = fStack0000000000000074 - fStack000000000000006c;
    uVar25 = *(int32_t *)(unaff_RSI + 0x1660);
    *(float *)(unaff_RBP + -0x78) = in_stack_00000070 - in_stack_00000068;
    func_0x000180124080(unaff_RBP + -0x78,uVar25);
    goto LAB_180114015;
  }
  cVar7 = FUN_180124460(extraout_XMM0_Da,iVar9,1);
  cVar8 = FUN_1801243a0(&stack0x00000078,iVar9);
  if ((((cVar7 == '\0') && ((cVar8 == '\0' || (*(char *)(unaff_RSI + 0x410) == '\0')))) &&
      (*(int *)(unaff_RSI + 0x1ca4) != iVar9)) &&
     ((*(int *)(unaff_RSI + 0x1cb0) != iVar9 || (*(int *)(unaff_RSI + 0x2da0) == iVar9)))) {
LAB_180113c0c:
    if ((*(int *)(unaff_RSI + 0x1b2c) != iVar9) || (*(int *)(unaff_RSI + 0x2da0) != iVar9)) {
      *(float *)(unaff_RBP + -0x74) = fStack0000000000000074 - fStack000000000000006c;
      uVar10 = *(int32_t *)(unaff_RSI + 0x1660);
      *(float *)(unaff_RBP + -0x78) = in_stack_00000070 - in_stack_00000068;
      func_0x000180124080(unaff_RBP + -0x78,uVar10);
      if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
        lVar14 = 9;
      }
      else {
        lVar14 = (ulonglong)(*(int *)(unaff_RSI + 0x1b18) == iVar9) + 7;
      }
      puVar3 = (int32_t *)(unaff_RSI + 0x1628 + (lVar14 + 10) * 0x10);
      in_stack_00000068 = (float)*puVar3;
      fStack000000000000006c = (float)puVar3[1];
      in_stack_00000070 = (float)puVar3[2];
      fStack0000000000000074 = (float)puVar3[3] * *(float *)(unaff_RSI + 0x1628);
      uVar10 = func_0x000180121e20(&stack0x00000068);
      if (iVar9 == *(int *)(unaff_RSI + 0x1ca0)) {
        FUN_1801230e0(&stack0x00000078,1);
      }
      FUN_180122960(CONCAT44(fStack000000000000007c,in_stack_00000078),
                    *(uint64_t *)(unaff_RBP + -0x80),uVar10,1,
                    CONCAT44(uVar11,*(int32_t *)(unaff_RSI + 0x1664)));
      in_stack_00000068 = 3.4028235e+38;
      fStack000000000000006c = 3.4028235e+38;
      in_stack_00000070 = -3.4028235e+38;
      fStack0000000000000074 = -3.4028235e+38;
      cVar7 = func_0x000180113830(&stack0x00000078,iVar9,4);
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (cVar7 != '\0') {
        plVar1 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
        *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
        puVar2 = (uint *)(*plVar1 + 0x148);
        *puVar2 = *puVar2 | 4;
      }
      lVar16 = 0x1d0;
      if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
        lVar16 = 0x1e0;
      }
      puVar3 = (int32_t *)(lVar16 + 0x1628 + lVar14);
      uVar11 = puVar3[1];
      uVar10 = puVar3[2];
      fVar21 = (float)puVar3[3];
      *(int32_t *)(unaff_RBP + -0x78) = *puVar3;
      *(int32_t *)(unaff_RBP + -0x74) = uVar11;
      *(int32_t *)(unaff_RBP + -0x70) = uVar10;
      *(float *)(unaff_RBP + -0x6c) = fVar21;
      *(float *)(unaff_RBP + -0x6c) = fVar21 * *(float *)(lVar14 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0x78);
      FUN_180293f50(*(uint64_t *)(unaff_RDI + 0x2e8),&stack0x00000068,&stack0x00000070,uVar11,
                    CONCAT44(uVar25,*(int32_t *)(unaff_RSI + 0x1698)));
      iVar9 = FUN_180121200(unaff_RBP + -0x60,0x40,&unknown_var_8448_ptr,(double)*unaff_R15);
      pcVar13 = (char *)(unaff_RBP + -0x60 + (longlong)iVar9);
      *(int32_t *)(unaff_RBP + -0x78) = 0x3f000000;
      *(int32_t *)(unaff_RBP + -0x74) = 0x3f000000;
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0xffffffffffffffff;
      }
      pcVar18 = (char *)(unaff_RBP + -0x60);
      if ((char *)(unaff_RBP - 0x60U) < pcVar13) {
        while (*pcVar18 != '\0') {
          if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
             (pcVar18 = pcVar18 + 1, pcVar13 <= pcVar18)) break;
        }
      }
      fVar21 = fStack000000000000007c;
      if (((int)pcVar18 != (int)unaff_RBP + -0x60) &&
         (pcVar13 = pcVar18,
         FUN_1801224c0(*(uint64_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),
                       &stack0x00000078,unaff_RBP + -0x80,unaff_RBP + -0x60,pcVar18),
         fVar21 = fStack000000000000007c, lVar16 = SYSTEM_DATA_MANAGER_A,
         *(char *)(lVar14 + 0x2e38) != '\0')) {
        lVar14 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
        if ((pcVar18 == (char *)0x0) && (pcVar18 = (char *)(unaff_RBP + -0x60), unaff_RBP != 0x5f))
        {
          while (*pcVar18 != '\0') {
            if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
               (pcVar18 = pcVar18 + 1, pcVar18 == (char *)0xffffffffffffffff)) break;
          }
        }
        fVar23 = *(float *)(lVar14 + 0x138);
        pcVar17 = (char *)(unaff_RBP + -0x60);
        iVar9 = *(int *)(lVar14 + 0x13c);
        *(float *)(lVar14 + 0x138) = fStack000000000000007c;
        iVar12 = *(int *)(lVar16 + 0x2e58);
        bVar6 = fVar23 + 1.0 < fStack000000000000007c;
        iVar20 = iVar9;
        if (iVar9 < iVar12) {
          *(int *)(lVar16 + 0x2e58) = iVar9;
          iVar20 = *(int *)(lVar14 + 0x13c);
          iVar12 = iVar9;
        }
        while( true ) {
          pcVar15 = (char *)memchr(pcVar17,10,(longlong)pcVar18 - (longlong)pcVar17);
          pcVar19 = pcVar18;
          if (pcVar15 != (char *)0x0) {
            pcVar19 = pcVar15;
          }
          if ((pcVar19 != pcVar18) || (pcVar17 != pcVar19)) {
            iVar9 = (int)pcVar19 - (int)pcVar17;
            if ((bVar6) || (pcVar17 != (char *)(unaff_RBP + -0x60))) {
              FUN_18013c760(&unknown_var_3184_ptr,(iVar20 - iVar12) * 4,&system_buffer_ptr,iVar9,pcVar17);
              pcVar13 = pcVar17;
            }
            else {
              FUN_18013c760(&unknown_var_3176_ptr,iVar9,pcVar17,iVar9,pcVar13);
            }
          }
          if (pcVar19 == pcVar18) break;
          pcVar17 = pcVar19 + 1;
        }
      }
      if (0.0 < fVar22) {
        FUN_180122320(CONCAT44(fVar21 + *(float *)(unaff_RSI + 0x1660),
                               *(float *)(unaff_RBP + -0x80) + *(float *)(unaff_RSI + 0x1674)));
      }
      goto LAB_180114015;
    }
  }
  else {
    func_0x000180123e90(iVar9);
    FUN_180123f30();
    FUN_18012d2e0();
    *(int32_t *)(unaff_RSI + 0x1b44) = 0xc;
    if ((cVar7 == '\0') &&
       ((*(char *)(unaff_RSI + 0x134) == '\0' && (*(int *)(unaff_RSI + 0x1cb0) != iVar9))))
    goto LAB_180113c0c;
    *(int32_t *)(unaff_RSI + 0x2da0) = 0;
  }
  *(int *)(unaff_RDI + 0x3f0) = *(int *)(unaff_RDI + 0x3f0) + -1;
  *(int *)(unaff_RDI + 0x3f4) = *(int *)(unaff_RDI + 0x3f4) + -1;
  FUN_1801141d0(&stack0x00000078,iVar9);
LAB_180114015:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801139c9(void)
void FUN_1801139c9(void)

{
  longlong *plVar1;
  uint *puVar2;
  int32_t *puVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int32_t uVar10;
  int32_t uVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  char *pcVar17;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar18;
  uint64_t unaff_R12;
  char *unaff_R13;
  char *pcVar19;
  int iVar20;
  float *unaff_R15;
  float fVar21;
  float fVar22;
  int32_t extraout_XMM0_Da;
  float fVar23;
  uint64_t in_stack_00000020;
  uint64_t uVar24;
  int32_t uVar25;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  uVar25 = (int32_t)((ulonglong)unaff_R12 >> 0x20);
  iVar9 = FUN_180121250();
  if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
    *(int *)(unaff_RSI + 0x1b34) = iVar9;
  }
  if (*(int *)(unaff_RSI + 0x1b30) == iVar9) {
    *(int8_t *)(unaff_RSI + 0x1b3f) = 1;
  }
  fVar21 = (float)func_0x00018012d6a0();
  pcVar13 = unaff_R13;
  if (unaff_R13 != (char *)0xffffffffffffffff) {
    while (*pcVar13 != '\0') {
      if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
         (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar5 = *(float **)(unaff_RSI + 0x19f0);
  fVar23 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_R13 == pcVar13) {
    fVar22 = 0.0;
  }
  else {
    uVar24 = CONCAT44(uVar11,0xbf800000);
    FUN_180297340(pfVar5,unaff_RBP + -0x78,fVar23,0x7f7fffff,uVar24);
    uVar11 = (int32_t)((ulonglong)uVar24 >> 0x20);
    fVar22 = *(float *)(unaff_RBP + -0x78);
    if (0.0 < fVar22) {
      fVar22 = fVar22 - fVar23 / *pfVar5;
    }
    fVar23 = *(float *)(unaff_RBP + -0x74);
    fVar22 = (float)(int)(fVar22 + 0.95);
  }
  in_stack_00000068 = *(float *)(unaff_RDI + 0x100);
  fStack000000000000006c = *(float *)(unaff_RDI + 0x104);
  fVar4 = *(float *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + -0x80) = fVar21 + in_stack_00000068;
  fStack0000000000000074 = fVar4 + fVar4 + fVar23 + fStack000000000000006c;
  *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
  if (fVar22 <= 0.0) {
    in_stack_00000070 = 0.0;
  }
  else {
    in_stack_00000070 = fVar22 + *(float *)(unaff_RSI + 0x1674);
  }
  in_stack_00000070 = in_stack_00000070 + fVar21 + in_stack_00000068;
  in_stack_00000078 = in_stack_00000068;
  fStack000000000000007c = fStack000000000000006c;
  cVar7 = FUN_180124190(&stack0x00000068,iVar9,&stack0x00000078);
  if (cVar7 == '\0') {
    *(float *)(unaff_RBP + -0x74) = fStack0000000000000074 - fStack000000000000006c;
    uVar25 = *(int32_t *)(unaff_RSI + 0x1660);
    *(float *)(unaff_RBP + -0x78) = in_stack_00000070 - in_stack_00000068;
    func_0x000180124080(unaff_RBP + -0x78,uVar25);
    goto LAB_180114015;
  }
  cVar7 = FUN_180124460(extraout_XMM0_Da,iVar9,1);
  cVar8 = FUN_1801243a0(&stack0x00000078,iVar9);
  if ((((cVar7 == '\0') && ((cVar8 == '\0' || (*(char *)(unaff_RSI + 0x410) == '\0')))) &&
      (*(int *)(unaff_RSI + 0x1ca4) != iVar9)) &&
     ((*(int *)(unaff_RSI + 0x1cb0) != iVar9 || (*(int *)(unaff_RSI + 0x2da0) == iVar9)))) {
LAB_180113c0c:
    if ((*(int *)(unaff_RSI + 0x1b2c) != iVar9) || (*(int *)(unaff_RSI + 0x2da0) != iVar9)) {
      *(float *)(unaff_RBP + -0x74) = fStack0000000000000074 - fStack000000000000006c;
      uVar10 = *(int32_t *)(unaff_RSI + 0x1660);
      *(float *)(unaff_RBP + -0x78) = in_stack_00000070 - in_stack_00000068;
      func_0x000180124080(unaff_RBP + -0x78,uVar10);
      if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
        lVar14 = 9;
      }
      else {
        lVar14 = (ulonglong)(*(int *)(unaff_RSI + 0x1b18) == iVar9) + 7;
      }
      puVar3 = (int32_t *)(unaff_RSI + 0x1628 + (lVar14 + 10) * 0x10);
      in_stack_00000068 = (float)*puVar3;
      fStack000000000000006c = (float)puVar3[1];
      in_stack_00000070 = (float)puVar3[2];
      fStack0000000000000074 = (float)puVar3[3] * *(float *)(unaff_RSI + 0x1628);
      uVar10 = func_0x000180121e20(&stack0x00000068);
      if (iVar9 == *(int *)(unaff_RSI + 0x1ca0)) {
        FUN_1801230e0(&stack0x00000078,1);
      }
      FUN_180122960(CONCAT44(fStack000000000000007c,in_stack_00000078),
                    *(uint64_t *)(unaff_RBP + -0x80),uVar10,1,
                    CONCAT44(uVar11,*(int32_t *)(unaff_RSI + 0x1664)));
      in_stack_00000068 = 3.4028235e+38;
      fStack000000000000006c = 3.4028235e+38;
      in_stack_00000070 = -3.4028235e+38;
      fStack0000000000000074 = -3.4028235e+38;
      cVar7 = func_0x000180113830(&stack0x00000078,iVar9,4);
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (cVar7 != '\0') {
        plVar1 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
        *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
        puVar2 = (uint *)(*plVar1 + 0x148);
        *puVar2 = *puVar2 | 4;
      }
      lVar16 = 0x1d0;
      if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
        lVar16 = 0x1e0;
      }
      puVar3 = (int32_t *)(lVar16 + 0x1628 + lVar14);
      uVar11 = puVar3[1];
      uVar10 = puVar3[2];
      fVar21 = (float)puVar3[3];
      *(int32_t *)(unaff_RBP + -0x78) = *puVar3;
      *(int32_t *)(unaff_RBP + -0x74) = uVar11;
      *(int32_t *)(unaff_RBP + -0x70) = uVar10;
      *(float *)(unaff_RBP + -0x6c) = fVar21;
      *(float *)(unaff_RBP + -0x6c) = fVar21 * *(float *)(lVar14 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0x78);
      FUN_180293f50(*(uint64_t *)(unaff_RDI + 0x2e8),&stack0x00000068,&stack0x00000070,uVar11,
                    CONCAT44(uVar25,*(int32_t *)(unaff_RSI + 0x1698)));
      iVar9 = FUN_180121200(unaff_RBP + -0x60,0x40,&unknown_var_8448_ptr,(double)*unaff_R15);
      pcVar13 = (char *)(unaff_RBP + -0x60 + (longlong)iVar9);
      *(int32_t *)(unaff_RBP + -0x78) = 0x3f000000;
      *(int32_t *)(unaff_RBP + -0x74) = 0x3f000000;
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0xffffffffffffffff;
      }
      pcVar18 = (char *)(unaff_RBP + -0x60);
      if ((char *)(unaff_RBP - 0x60U) < pcVar13) {
        while (*pcVar18 != '\0') {
          if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
             (pcVar18 = pcVar18 + 1, pcVar13 <= pcVar18)) break;
        }
      }
      fVar21 = fStack000000000000007c;
      if (((int)pcVar18 != (int)unaff_RBP + -0x60) &&
         (pcVar13 = pcVar18,
         FUN_1801224c0(*(uint64_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),
                       &stack0x00000078,unaff_RBP + -0x80,unaff_RBP + -0x60,pcVar18),
         fVar21 = fStack000000000000007c, lVar16 = SYSTEM_DATA_MANAGER_A,
         *(char *)(lVar14 + 0x2e38) != '\0')) {
        lVar14 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
        if ((pcVar18 == (char *)0x0) && (pcVar18 = (char *)(unaff_RBP + -0x60), unaff_RBP != 0x5f))
        {
          while (*pcVar18 != '\0') {
            if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
               (pcVar18 = pcVar18 + 1, pcVar18 == (char *)0xffffffffffffffff)) break;
          }
        }
        fVar23 = *(float *)(lVar14 + 0x138);
        pcVar17 = (char *)(unaff_RBP + -0x60);
        iVar9 = *(int *)(lVar14 + 0x13c);
        *(float *)(lVar14 + 0x138) = fStack000000000000007c;
        iVar12 = *(int *)(lVar16 + 0x2e58);
        bVar6 = fVar23 + 1.0 < fStack000000000000007c;
        iVar20 = iVar9;
        if (iVar9 < iVar12) {
          *(int *)(lVar16 + 0x2e58) = iVar9;
          iVar20 = *(int *)(lVar14 + 0x13c);
          iVar12 = iVar9;
        }
        while( true ) {
          pcVar15 = (char *)memchr(pcVar17,10,(longlong)pcVar18 - (longlong)pcVar17);
          pcVar19 = pcVar18;
          if (pcVar15 != (char *)0x0) {
            pcVar19 = pcVar15;
          }
          if ((pcVar19 != pcVar18) || (pcVar17 != pcVar19)) {
            iVar9 = (int)pcVar19 - (int)pcVar17;
            if ((bVar6) || (pcVar17 != (char *)(unaff_RBP + -0x60))) {
              FUN_18013c760(&unknown_var_3184_ptr,(iVar20 - iVar12) * 4,&system_buffer_ptr,iVar9,pcVar17);
              pcVar13 = pcVar17;
            }
            else {
              FUN_18013c760(&unknown_var_3176_ptr,iVar9,pcVar17,iVar9,pcVar13);
            }
          }
          if (pcVar19 == pcVar18) break;
          pcVar17 = pcVar19 + 1;
        }
      }
      if (0.0 < fVar22) {
        FUN_180122320(CONCAT44(fVar21 + *(float *)(unaff_RSI + 0x1660),
                               *(float *)(unaff_RBP + -0x80) + *(float *)(unaff_RSI + 0x1674)));
      }
      goto LAB_180114015;
    }
  }
  else {
    func_0x000180123e90(iVar9);
    FUN_180123f30();
    FUN_18012d2e0();
    *(int32_t *)(unaff_RSI + 0x1b44) = 0xc;
    if ((cVar7 == '\0') &&
       ((*(char *)(unaff_RSI + 0x134) == '\0' && (*(int *)(unaff_RSI + 0x1cb0) != iVar9))))
    goto LAB_180113c0c;
    *(int32_t *)(unaff_RSI + 0x2da0) = 0;
  }
  *(int *)(unaff_RDI + 0x3f0) = *(int *)(unaff_RDI + 0x3f0) + -1;
  *(int *)(unaff_RDI + 0x3f4) = *(int *)(unaff_RDI + 0x3f4) + -1;
  FUN_1801141d0(&stack0x00000078,iVar9);
LAB_180114015:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180113b48(void)
void FUN_180113b48(void)

{
  int32_t uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  
  *(float *)(unaff_RBP + -0x74) = fStack0000000000000074 - fStack000000000000006c;
  uVar1 = *(int32_t *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + -0x78) = fStack0000000000000070 - fStack0000000000000068;
  func_0x000180124080(unaff_RBP + -0x78,uVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18011403f(void)
void FUN_18011403f(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




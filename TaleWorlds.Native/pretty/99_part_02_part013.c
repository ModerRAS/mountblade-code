#include "TaleWorlds.Native.Split.h"

// 99_part_02_part013.c - 3 个函数

// 函数: void FUN_1800f1850(longlong param_1)
void FUN_1800f1850(longlong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  int8_t auStack_288 [28];
  int aiStack_26c [5];
  int iStack_258;
  int iStack_250;
  int iStack_248;
  longlong *plStack_240;
  int8_t uStack_238;
  int32_t uStack_230;
  uint uStack_228;
  int *piStack_220;
  longlong *plStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong lStack_1d8;
  int8_t uStack_1d0;
  uint64_t uStack_1c8;
  void *puStack_1c0;
  int8_t *puStack_1b8;
  int32_t uStack_1b0;
  int8_t auStack_1a8 [32];
  int aiStack_188 [16];
  int aiStack_148 [40];
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  ulonglong uStack_38;
  
  uStack_1c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  uStack_228 = 0;
  lStack_1d8 = param_1 + 0x2b8;
  uStack_1d0 = 0;
  lStack_200 = param_1;
  AcquireSRWLockExclusive(lStack_1d8);
  uStack_1d0 = 1;
  iVar5 = 0;
  aiStack_188[0] = 0;
  aiStack_188[1] = 0;
  aiStack_188[2] = 0;
  aiStack_188[3] = 0;
  aiStack_188[4] = 0;
  aiStack_188[5] = 0;
  aiStack_188[6] = 0;
  aiStack_188[7] = 0;
  aiStack_188[8] = 0;
  aiStack_188[9] = 0;
  aiStack_188[10] = 0;
  aiStack_188[0xb] = 0;
  aiStack_188[0xc] = 0;
  lStack_208 = (longlong)(int)(*(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140) >> 3)
  ;
  if (0 < lStack_208) {
    lStack_210 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(param_1 + 0x140) + lStack_210 * 8);
      if (*pcVar1 != '\0') {
        if (*(longlong *)(pcVar1 + 0x10) == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x10) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x18) == 0) {
          plStack_218 = (longlong *)0x0;
        }
        else {
          plStack_218 = (longlong *)
                        ((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x18) + 0x1c) / 0x18);
        }
        if (*(longlong *)(pcVar1 + 0x40) == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)(((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x40) + 0x1c) >> 2 &
                         0xffffffff) / 3);
        }
        if (*(longlong *)(pcVar1 + 0x20) == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x20) + 0x1c) >> 3);
        }
        if (*(longlong *)(pcVar1 + 8) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 8) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x28) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x28) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x30) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x30) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x38) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x38) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x48) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x48) + 0x1c) >> 2);
        }
        if (*(longlong *)(pcVar1 + 0x50) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x50) + 0x1c) >> 4) &
                  0x3fffffff;
        }
        if (*(longlong *)(pcVar1 + 0x58) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)(*(longlong *)(pcVar1 + 0x58) + 0x1c) >> 2;
        }
        if (*(longlong *)(pcVar1 + 0x60) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar1 + 0x60) + 0x1c) >> 2);
        }
        uVar2 = *(ulonglong *)(pcVar1 + 0x68);
        if (uVar2 != 0) {
          uVar2 = (ulonglong)(longlong)*(int *)(uVar2 + 0x1c) >> 2;
        }
        *(int *)(pcVar1 + 0xe4) = iVar15;
        *(int *)(pcVar1 + 0xb0) = aiStack_188[0];
        *(int *)(pcVar1 + 0xe8) = (int)plStack_218;
        *(int *)(pcVar1 + 0xb4) = aiStack_188[1];
        aiStack_188[1] = aiStack_188[1] + (int)plStack_218;
        aiStack_188[0] = aiStack_188[0] + iVar15;
        *(int *)(pcVar1 + 0xec) = iVar18;
        *(int *)(pcVar1 + 0xb8) = aiStack_188[2];
        *(int *)(pcVar1 + 0xf0) = iVar16;
        *(int *)(pcVar1 + 0xbc) = aiStack_188[3];
        aiStack_188[3] = aiStack_188[3] + iVar16;
        aiStack_188[2] = aiStack_188[2] + iVar18;
        *(int *)(pcVar1 + 0xf4) = iVar9;
        *(int *)(pcVar1 + 0xc0) = aiStack_188[4];
        *(int *)(pcVar1 + 0xf8) = iVar11;
        *(int *)(pcVar1 + 0xc4) = aiStack_188[5];
        aiStack_188[5] = aiStack_188[5] + iVar11;
        aiStack_188[4] = aiStack_188[4] + iVar9;
        *(int *)(pcVar1 + 0xfc) = iVar7;
        *(int *)(pcVar1 + 200) = aiStack_188[6];
        *(int *)(pcVar1 + 0x100) = iVar14;
        *(int *)(pcVar1 + 0xcc) = aiStack_188[7];
        aiStack_188[7] = aiStack_188[7] + iVar14;
        aiStack_188[6] = aiStack_188[6] + iVar7;
        *(int *)(pcVar1 + 0x104) = iVar13;
        *(int *)(pcVar1 + 0xd0) = aiStack_188[8];
        *(uint *)(pcVar1 + 0x108) = uVar6;
        *(int *)(pcVar1 + 0xd4) = aiStack_188[9];
        aiStack_188[9] = aiStack_188[9] + uVar6;
        aiStack_188[8] = aiStack_188[8] + iVar13;
        *(uint *)(pcVar1 + 0x10c) = uVar12;
        *(int *)(pcVar1 + 0xd8) = aiStack_188[10];
        *(int *)(pcVar1 + 0x110) = iVar4;
        *(int *)(pcVar1 + 0xdc) = aiStack_188[0xb];
        aiStack_188[0xb] = aiStack_188[0xb] + iVar4;
        aiStack_188[10] = aiStack_188[10] + uVar12;
        *(int *)(pcVar1 + 0x114) = (int)uVar2;
        *(int *)(pcVar1 + 0xe0) = iVar5;
        iVar5 = iVar5 + (int)uVar2;
        aiStack_188[0xc] = iVar5;
        param_1 = lStack_200;
      }
      lStack_210 = lStack_210 + 1;
    } while (lStack_210 < lStack_208);
  }
  aiStack_148[0] = 4;
  aiStack_148[1] = 0x30;
  aiStack_148[2] = 1;
  aiStack_148[3] = 0x18;
  aiStack_148[4] = 0;
  aiStack_148[5] = 0x41;
  aiStack_148[6] = 0xc;
  aiStack_148[7] = 0x2e;
  aiStack_148[8] = 1;
  aiStack_148[9] = 8;
  aiStack_148[10] = 0;
  aiStack_148[0xb] = 0x41;
  aiStack_148[0xc] = 4;
  aiStack_148[0xd] = 0x1f;
  aiStack_148[0xe] = 1;
  aiStack_148[0xf] = 4;
  aiStack_148[0x10] = 5;
  aiStack_148[0x11] = 1;
  aiStack_148[0x12] = 4;
  aiStack_148[0x13] = 5;
  aiStack_148[0x14] = 1;
  aiStack_148[0x15] = 4;
  aiStack_148[0x16] = 5;
  aiStack_148[0x17] = 1;
  aiStack_148[0x18] = 4;
  aiStack_148[0x19] = 0x1f;
  aiStack_148[0x1a] = 1;
  aiStack_148[0x1b] = 0x10;
  aiStack_148[0x1c] = 0x21;
  aiStack_148[0x1d] = 1;
  aiStack_148[0x1e] = 4;
  aiStack_148[0x1f] = 8;
  aiStack_148[0x20] = 1;
  aiStack_148[0x21] = 4;
  aiStack_148[0x22] = 0x1f;
  aiStack_148[0x23] = 1;
  aiStack_148[0x24] = 4;
  aiStack_148[0x25] = 5;
  aiStack_148[0x26] = 1;
  lVar17 = 0xe4;
  piVar10 = aiStack_148;
  plVar19 = (longlong *)(param_1 + 0x3a8);
  param_1 = (longlong)&uStack_a8 - param_1;
  lStack_1f8 = 0xd;
  lStack_210 = param_1;
  do {
    iVar5 = *(int *)((longlong)aiStack_26c + lVar17);
    piStack_220 = piVar10;
    if (iVar5 == 0) {
      plStack_1e0 = (longlong *)*plVar19;
      *plVar19 = 0;
      if (plStack_1e0 != (longlong *)0x0) {
        (**(code **)(*plStack_1e0 + 0x38))();
        piStack_220 = piVar10;
      }
    }
    else {
      iVar15 = *piVar10;
      FUN_180081480(_DAT_180c8a998,&plStack_218,iVar5 * iVar15);
      plVar3 = plStack_218;
      uStack_228 = uStack_228 | 1;
      lVar8 = 0;
      if (0 < lStack_208) {
        do {
          pcVar1 = *(char **)(*(longlong *)(lStack_200 + 0x140) + lVar8 * 8);
          if (*pcVar1 != '\0') {
            uStack_a8 = *(uint64_t *)(pcVar1 + 0x10);
            uStack_a0 = *(uint64_t *)(pcVar1 + 0x18);
            uStack_98 = *(uint64_t *)(pcVar1 + 0x40);
            uStack_90 = *(uint64_t *)(pcVar1 + 0x20);
            uStack_88 = *(uint64_t *)(pcVar1 + 8);
            uStack_80 = *(uint64_t *)(pcVar1 + 0x28);
            uStack_78 = *(uint64_t *)(pcVar1 + 0x30);
            uStack_70 = *(uint64_t *)(pcVar1 + 0x38);
            uStack_68 = *(uint64_t *)(pcVar1 + 0x48);
            uStack_60 = *(uint64_t *)(pcVar1 + 0x50);
            uStack_58 = *(uint64_t *)(pcVar1 + 0x58);
            uStack_50 = *(uint64_t *)(pcVar1 + 0x60);
            uStack_48 = *(uint64_t *)(pcVar1 + 0x68);
            if (0 < *(int *)(pcVar1 + lVar17)) {
                    // WARNING: Subroutine does not return
              memcpy((longlong)(*(int *)(pcVar1 + lVar17 + -0x34) * iVar15) + plStack_218[2],
                     *(uint64_t *)(*(longlong *)((longlong)plVar19 + param_1 + -0x3a8) + 0x10),
                     (longlong)(*(int *)(pcVar1 + lVar17) * iVar15));
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lStack_208);
        iVar5 = *(int *)((longlong)aiStack_26c + lVar17);
        piVar10 = piStack_220;
      }
      iVar18 = piVar10[1];
      iVar16 = piVar10[2];
      puStack_1c0 = &UNK_18098bc80;
      puStack_1b8 = auStack_1a8;
      auStack_1a8[0] = 0;
      uStack_1b0 = 0x11;
      strcpy_s(auStack_1a8,0x20,&UNK_180a04ae0);
      uStack_230 = 1;
      uStack_238 = 1;
      plStack_240 = plVar3;
      aiStack_26c[3] = 1;
      aiStack_26c[1] = iVar16;
      iStack_258 = iVar18;
      iStack_250 = iVar15;
      iStack_248 = iVar5;
      plVar3 = (longlong *)FUN_1800b0a10();
      lVar8 = *plVar3;
      *plVar3 = 0;
      plStack_1f0 = (longlong *)plVar19[-0x14];
      plVar19[-0x14] = lVar8;
      if (plStack_1f0 != (longlong *)0x0) {
        (**(code **)(*plStack_1f0 + 0x38))();
      }
      if (plStack_1e8 != (longlong *)0x0) {
        (**(code **)(*plStack_1e8 + 0x38))();
      }
      puStack_1c0 = &UNK_18098bcb0;
      uStack_228 = uStack_228 & 0xfffffffe;
      param_1 = lStack_210;
      if (plStack_218 != (longlong *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
        param_1 = lStack_210;
      }
    }
    lVar17 = lVar17 + 4;
    plVar19 = plVar19 + 1;
    piVar10 = piStack_220 + 3;
    lStack_1f8 = lStack_1f8 + -1;
  } while (lStack_1f8 != 0);
  piStack_220 = piVar10;
  ReleaseSRWLockExclusive(lStack_1d8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_288);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f1ff0(longlong param_1)
void FUN_1800f1ff0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
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
  float fVar19;
  float fVar20;
  longlong lVar21;
  uint64_t *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  int32_t uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b0;
  int32_t uStack_1a8;
  longlong *plStack_1a0;
  int8_t uStack_198;
  int32_t uStack_190;
  uint uStack_188;
  longlong *plStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong lStack_168;
  int8_t uStack_160;
  uint64_t uStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  ulonglong uStack_88;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uVar31 = 0;
  uStack_188 = 0;
  lStack_168 = param_1 + 0x2b8;
  uStack_160 = 0;
  AcquireSRWLockExclusive(lStack_168);
  uStack_160 = 1;
  iVar25 = (int)((*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180)) / 0x30);
  plVar32 = (longlong *)(longlong)iVar25;
  uVar26 = uVar31;
  plVar28 = plVar32;
  uVar33 = uVar31;
  plStack_180 = plVar32;
  if (0 < iVar25) {
    do {
      lVar21 = *(longlong *)(param_1 + 0x180);
      if (*(char *)(uVar26 + lVar21) != '\0') {
        *(int *)(uVar26 + 0x28 + lVar21) = (int)uVar33;
        uVar33 = (ulonglong)
                 (uint)((int)uVar33 +
                       (int)((*(longlong *)(uVar26 + 0x10 + lVar21) -
                             *(longlong *)(uVar26 + 8 + lVar21)) / 0x128));
      }
      uVar8 = _DAT_180c8a998;
      plVar28 = (longlong *)((longlong)plVar28 + -1);
      uVar26 = uVar26 + 0x30;
    } while (plVar28 != (longlong *)0x0);
    iVar25 = (int)uVar33;
    plStack_178 = (longlong *)CONCAT44(plStack_178._4_4_,iVar25);
    if (0 < iVar25) {
      iVar25 = iVar25 << 6;
      puStack_148 = &UNK_1809fcc58;
      puStack_140 = auStack_130;
      auStack_130[0] = 0;
      uStack_138 = 0x1c;
      uVar34 = strcpy_s(auStack_130,0x40,&DAT_1809ffc60);
      FUN_1802037e0(uVar34,iVar25,&puStack_148);
      puStack_148 = &UNK_18098bcb0;
      lVar21 = FUN_18062b1e0(_DAT_180c8ed18,iVar25,0x10,3);
      FUN_1800f7e80(uVar8,&plStack_180);
      plStack_1a0 = plStack_180;
      plStack_180[2] = lVar21;
      *(int *)(plStack_180 + 3) = iVar25;
      *(int *)((longlong)plStack_180 + 0x1c) = iVar25;
      *(int8_t *)(plStack_180 + 4) = 0;
      uStack_188 = 1;
      lVar21 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x180);
        if (*(char *)(lVar21 + lVar5) != '\0') {
          iVar25 = (int)((*(longlong *)(lVar21 + 0x10 + lVar5) - *(longlong *)(lVar21 + 8 + lVar5))
                        / 0x128);
          lVar30 = (longlong)iVar25;
          if (0 < iVar25) {
            lVar27 = 0;
            lVar29 = (longlong)(int)uVar31 << 6;
            do {
              lVar6 = *(longlong *)(lVar21 + 8 + lVar5);
              lVar7 = plStack_180[2];
              fVar37 = 0.0;
              fVar36 = 0.0;
              if (*(int *)(lVar27 + lVar6) != -1) {
                fVar37 = *(float *)(lVar27 + 8 + lVar6);
              }
              if (*(int *)(lVar27 + 0x58 + lVar6) != -1) {
                fVar36 = *(float *)(lVar27 + 0x60 + lVar6);
              }
              if (*(int *)(lVar27 + 4 + lVar6) != -1) {
                fVar37 = fVar37 + *(float *)(lVar27 + 0xc + lVar6);
              }
              if (*(int *)(lVar27 + 0x5c + lVar6) != -1) {
                fVar36 = fVar36 + *(float *)(lVar27 + 100 + lVar6);
              }
              pfVar1 = (float *)(lVar27 + 0xc4 + lVar6);
              fVar9 = *pfVar1;
              fVar10 = pfVar1[1];
              fVar11 = pfVar1[2];
              pfVar1 = (float *)(lVar27 + 0xd4 + lVar6);
              fVar12 = *pfVar1;
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              pfVar1 = (float *)(lVar27 + 0xe4 + lVar6);
              fVar15 = *pfVar1;
              fVar16 = pfVar1[1];
              fVar17 = pfVar1[2];
              pfVar1 = (float *)(lVar27 + 0xf4 + lVar6);
              fVar18 = *pfVar1;
              fVar19 = pfVar1[1];
              fVar20 = pfVar1[2];
              fVar2 = *(float *)(lVar27 + 0xb8 + lVar6);
              fVar3 = *(float *)(lVar27 + 0xbc + lVar6);
              fVar4 = *(float *)(lVar27 + 0xb4 + lVar6);
              fVar35 = fVar4 + *(float *)(lVar27 + 0xb0 + lVar6);
              *(float *)(lVar29 + lVar7) = fVar4 * fVar9 + fVar2 * fVar12 + fVar3 * fVar15 + fVar18;
              *(float *)(lVar29 + 4 + lVar7) =
                   fVar4 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16 + fVar19;
              *(float *)(lVar29 + 8 + lVar7) =
                   fVar4 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17 + fVar20;
              *(int32_t *)(lVar29 + 0xc + lVar7) = *(int32_t *)(lVar27 + 0x10 + lVar6);
              *(float *)(lVar29 + 0x10 + lVar7) =
                   fVar35 * fVar9 + fVar2 * fVar12 + fVar3 * fVar15 + fVar18;
              *(float *)(lVar29 + 0x14 + lVar7) =
                   fVar35 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16 + fVar19;
              *(float *)(lVar29 + 0x18 + lVar7) =
                   fVar35 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17 + fVar20;
              *(int32_t *)(lVar29 + 0x1c + lVar7) = *(int32_t *)(lVar27 + 0x68 + lVar6);
              iVar23 = 0;
              if (0 < *(int *)(lVar27 + lVar6)) {
                iVar23 = *(int *)(lVar27 + lVar6);
              }
              *(int *)(lVar29 + 0x20 + lVar7) = iVar23;
              iVar23 = *(int *)(lVar27 + 4 + lVar6);
              iVar24 = 0;
              if (0 < iVar23) {
                iVar24 = iVar23;
              }
              *(int *)(lVar29 + 0x24 + lVar7) = iVar24;
              iVar23 = *(int *)(lVar27 + 0x58 + lVar6);
              iVar24 = 0;
              if (0 < iVar23) {
                iVar24 = iVar23;
              }
              *(int *)(lVar29 + 0x30 + lVar7) = iVar24;
              iVar23 = *(int *)(lVar27 + 0x5c + lVar6);
              iVar24 = 0;
              if (0 < iVar23) {
                iVar24 = iVar23;
              }
              *(int *)(lVar29 + 0x34 + lVar7) = iVar24;
              if (fVar37 == 0.0) {
                *(uint64_t *)(lVar29 + 0x28 + lVar7) = 0;
              }
              else {
                *(float *)(lVar29 + 0x28 + lVar7) = (1.0 / fVar37) * *(float *)(lVar27 + 8 + lVar6);
                *(float *)(lVar29 + 0x2c + lVar7) =
                     (1.0 / fVar37) * *(float *)(lVar27 + 0xc + lVar6);
              }
              if (fVar36 == 0.0) {
                *(uint64_t *)(lVar29 + 0x38 + lVar7) = 0;
              }
              else {
                *(float *)(lVar29 + 0x38 + lVar7) =
                     (1.0 / fVar36) * *(float *)(lVar27 + 0x60 + lVar6);
                *(float *)(lVar29 + 0x3c + lVar7) =
                     (1.0 / fVar36) * *(float *)(lVar27 + 100 + lVar6);
              }
              lVar29 = lVar29 + 0x40;
              lVar27 = lVar27 + 0x128;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
          uVar31 = (ulonglong)(uint)((int)uVar31 + iVar25);
        }
        lVar21 = lVar21 + 0x30;
        plVar32 = (longlong *)((longlong)plVar32 + -1);
      } while (plVar32 != (longlong *)0x0);
      puStack_e8 = &UNK_1809fcc58;
      puStack_e0 = auStack_d0;
      auStack_d0[0] = 0;
      uStack_d8 = 0x15;
      uVar34 = strcpy_s(auStack_d0,0x40,&UNK_180a04ac8);
      uStack_190 = 1;
      uStack_198 = 1;
      uStack_1a8 = plStack_178._0_4_;
      uStack_1b0 = 0x40;
      uStack_1b8 = 0;
      uStack_1c0 = 1;
      uStack_1c8 = 0x41;
      puVar22 = (uint64_t *)FUN_1800b0a10(uVar34,&plStack_170,0xffffffff,&puStack_e8);
      uVar8 = *puVar22;
      *puVar22 = 0;
      plStack_178 = *(longlong **)(param_1 + 0x370);
      *(uint64_t *)(param_1 + 0x370) = uVar8;
      if (plStack_178 != (longlong *)0x0) {
        (**(code **)(*plStack_178 + 0x38))();
      }
      if (plStack_170 != (longlong *)0x0) {
        (**(code **)(*plStack_170 + 0x38))();
      }
      puStack_e8 = &UNK_18098bcb0;
      uStack_188 = uStack_188 & 0xfffffffe;
      if (plStack_180 != (longlong *)0x0) {
        (**(code **)(*plStack_180 + 0x38))();
      }
      goto LAB_1800f2551;
    }
  }
  plStack_170 = *(longlong **)(param_1 + 0x370);
  *(uint64_t *)(param_1 + 0x370) = 0;
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
LAB_1800f2551:
  ReleaseSRWLockExclusive(lStack_168);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f25a0(longlong param_1)
void FUN_1800f25a0(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int iVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int8_t auStack_148 [32];
  int32_t uStack_128;
  int32_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_110;
  int iStack_108;
  longlong *plStack_100;
  int8_t uStack_f8;
  int32_t uStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  int8_t uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [32];
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  lVar1 = param_1 + 0x2b8;
  uStack_b8 = 0;
  lStack_c0 = lVar1;
  AcquireSRWLockExclusive(lVar1);
  uStack_b8 = 1;
  uVar7 = 0;
  iVar5 = (int)(*(longlong *)(param_1 + 0x168) - *(longlong *)(param_1 + 0x160) >> 3);
  uVar8 = uVar7;
  uVar9 = uVar7;
  uVar11 = uVar7;
  if (0 < iVar5) {
    do {
      pcVar2 = *(char **)(*(longlong *)(param_1 + 0x160) + uVar8 * 8);
      if (*pcVar2 != '\0') {
        iVar10 = (int)uVar11;
        *(int *)(pcVar2 + 0x28) = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
        uVar9 = (ulonglong)
                (uint)((int)uVar9 +
                      (int)((ulonglong)(longlong)*(int *)(*(longlong *)(pcVar2 + 8) + 0x1c) >> 1));
        uVar11 = (ulonglong)
                 (uint)(iVar10 + (int)((ulonglong)
                                       (longlong)*(int *)(*(longlong *)(pcVar2 + 0x10) + 0x1c) >> 2)
                       );
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar5);
    if (0 < (int)uVar9) {
      FUN_180081350();
      FUN_1800f6ce0();
      plVar4 = plStack_d8;
      do {
        pcVar2 = *(char **)(*(longlong *)(param_1 + 0x160) + uVar7 * 8);
        if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
          memcpy(plStack_d8[2] + (longlong)(*(int *)(pcVar2 + 0x28) * 3) * 2,
                 *(uint64_t *)(*(longlong *)(pcVar2 + 8) + 0x10),
                 (longlong)*(int *)(*(longlong *)(pcVar2 + 8) + 0x1c));
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar5);
      puStack_a8 = &UNK_18098bc80;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = 0x1c;
      strcpy_s(auStack_90,0x20,&UNK_180a04b18);
      uStack_f0 = 1;
      uStack_f8 = 1;
      plStack_100 = plVar4;
      uStack_110 = 2;
      uStack_118 = 0x2c;
      uStack_120 = 1;
      uStack_128 = 1;
      iStack_108 = (int)uVar9;
      puVar6 = (uint64_t *)FUN_1800b0a10();
      uVar3 = *puVar6;
      *puVar6 = 0;
      plStack_d0 = *(longlong **)(param_1 + 0x378);
      *(uint64_t *)(param_1 + 0x378) = uVar3;
      if (plStack_d0 != (longlong *)0x0) {
        (**(code **)(*plStack_d0 + 0x38))();
      }
      if (plStack_c8 != (longlong *)0x0) {
        (**(code **)(*plStack_c8 + 0x38))();
      }
      plVar4 = plStack_e0;
      puStack_a8 = &UNK_18098bcb0;
      puStack_70 = &UNK_18098bc80;
      puStack_68 = auStack_58;
      auStack_58[0] = 0;
      uStack_60 = 0x1c;
      strcpy_s(auStack_58,0x20,&UNK_180a04af8);
      uStack_f0 = 1;
      uStack_f8 = 1;
      plStack_100 = plVar4;
      uStack_110 = 4;
      uStack_118 = 0x1f;
      uStack_120 = 1;
      uStack_128 = 1;
      iStack_108 = (int)uVar11;
      puVar6 = (uint64_t *)FUN_1800b0a10();
      uVar3 = *puVar6;
      *puVar6 = 0;
      plStack_d0 = *(longlong **)(param_1 + 0x380);
      *(uint64_t *)(param_1 + 0x380) = uVar3;
      if (plStack_d0 != (longlong *)0x0) {
        (**(code **)(*plStack_d0 + 0x38))();
      }
      if (plStack_e8 != (longlong *)0x0) {
        (**(code **)(*plStack_e8 + 0x38))();
      }
      puStack_70 = &UNK_18098bcb0;
      if (plStack_e0 != (longlong *)0x0) {
        (**(code **)(*plStack_e0 + 0x38))();
      }
      if (plStack_d8 != (longlong *)0x0) {
        (**(code **)(*plStack_d8 + 0x38))();
      }
      goto LAB_1800f2907;
    }
  }
  plStack_e8 = *(longlong **)(param_1 + 0x378);
  *(uint64_t *)(param_1 + 0x378) = 0;
  if (plStack_e8 != (longlong *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  plStack_e8 = *(longlong **)(param_1 + 0x380);
  *(uint64_t *)(param_1 + 0x380) = 0;
  if (plStack_e8 != (longlong *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
LAB_1800f2907:
  ReleaseSRWLockExclusive(lVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





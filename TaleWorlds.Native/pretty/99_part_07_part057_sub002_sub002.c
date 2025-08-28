#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part057_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804d2a45(void)
void FUN_1804d2a45(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2a50(int64_t param_1,int64_t param_2,int param_3,uint param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int64_t lVar15;
  uint uVar16;
  int64_t lVar17;
  int iVar18;
  int64_t lVar19;
  float *pfVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auVar27 [16];
  float fVar28;
  int8_t auVar29 [16];
  float fVar30;
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  float fVar34;
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  
  if ((*(int64_t *)(system_main_module_state + 0x3d8) != 0) &&
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 1)) {
    return true;
  }
  lVar15 = *(int64_t *)(param_1 + 11000);
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 8) + (int64_t)param_3 * 8);
  uVar16 = *(uint *)(param_1 + 0x2b18);
  lVar17 = (int64_t)((int)param_4 >> 10);
  lVar19 = (int64_t)(int)(uVar16 & param_4) * 0xd8;
  lVar3 = *(int64_t *)(lVar15 + lVar17 * 8);
  if (*(char *)(lVar19 + 0x10 + lVar3) == '\0') {
    bVar21 = false;
  }
  else {
    if (*(int *)(lVar2 + 0x178) == 0) {
      *(int8_t *)(lVar19 + 0x90 + lVar3) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_4) * 0xd8 + 0x91 +
       *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar17 * 8)) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_4) * 0xd8 + 0x92 +
       *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar17 * 8)) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_4) * 0xd8 + 0x93 +
       *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar17 * 8)) = 1;
      lVar15 = *(int64_t *)(param_1 + 11000);
      uVar16 = *(uint *)(param_1 + 0x2b18);
    }
    fVar34 = 0.0;
    if ((*(uint *)(lVar2 + 4) & 0x100000) != 0) {
      fVar34 = *(float *)(lVar2 + 0x174) * 0.2;
    }
    uVar16 = *(uint *)((int64_t)(int)(uVar16 & param_4) * 0xd8 + 0x20 +
                      *(int64_t *)(lVar15 + lVar17 * 8));
    pfVar20 = (float *)(*(int64_t *)
                         (*(int64_t *)(param_1 + 0x4e0) + (int64_t)((int)uVar16 >> 10) * 8) +
                       (int64_t)(int)(*(uint *)(param_1 + 0x500) & uVar16) * 0xc0);
    pcVar4 = *(code **)(**(int64_t **)(param_2 + 0x3580) + 0xb8);
    if (pcVar4 == (code *)&unknown_var_128_ptr) {
      lVar15 = (*(int64_t **)(param_2 + 0x3580))[0xda];
    }
    else {
      lVar15 = (*pcVar4)();
    }
    iVar14 = FUN_1801b8ce0(lVar15 + 0x2998,lVar2 + 0x30,pfVar20 + 2,0,0,fVar34,1,
                           *(byte *)(lVar2 + 0x1bd8) >> 1 & 1);
    iVar18 = iVar14;
    if (iVar14 != 0) {
      iVar1 = *(int *)(lVar2 + 0x178);
      if (((-1 < iVar1) &&
          (iVar18 = 0,
          *(char *)((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_4) * 0xd8 +
                    *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar17 * 8) + 0x90 +
                   (int64_t)iVar1) != '\0')) && (iVar18 = iVar14, -1 < iVar1)) {
        fVar28 = *(float *)(lVar2 + 0x110);
        fVar5 = *(float *)(lVar2 + 0x114);
        fVar6 = *(float *)(lVar2 + 0x118);
        fVar7 = *(float *)(lVar2 + 0x11c);
        lVar15 = 2;
        fVar8 = *(float *)(lVar2 + 0x100);
        fVar9 = *(float *)(lVar2 + 0x104);
        fVar10 = *(float *)(lVar2 + 0x108);
        fVar11 = *(float *)(lVar2 + 0xf0);
        fVar12 = *(float *)(lVar2 + 0xf4);
        fVar13 = *(float *)(lVar2 + 0xf8);
        fVar34 = *(float *)(lVar2 + 0x120);
        fVar25 = *(float *)(lVar2 + 0x124);
        fVar26 = *(float *)(lVar2 + 0x128);
        auVar27 = system_system_memory;
        auVar29 = system_system_memory;
        do {
          fVar30 = pfVar20[0xe] - fVar34;
          fVar22 = pfVar20[0xf] - fVar25;
          fVar24 = pfVar20[0x10] - fVar26;
          fVar23 = pfVar20[0x13] - fVar25;
          auVar31._0_8_ =
               CONCAT44(fVar30 * fVar8 + fVar22 * fVar9 + fVar24 * fVar10,
                        fVar30 * fVar11 + fVar22 * fVar12 + fVar24 * fVar13);
          auVar31._8_4_ = fVar30 * fVar28 + fVar22 * fVar5 + fVar24 * fVar6;
          auVar31._12_4_ = fVar30 * fVar7 + fVar22 * fVar7 + fVar24 * fVar7;
          fVar24 = pfVar20[0x14] - fVar26;
          auVar36._8_4_ = auVar31._8_4_;
          auVar36._0_8_ = auVar31._0_8_;
          auVar36._12_4_ = auVar31._12_4_;
          auVar32 = maxps(auVar31,auVar27);
          auVar27 = minps(auVar36,auVar29);
          fVar30 = pfVar20[0x12] - fVar34;
          fVar22 = pfVar20[0x17] - fVar25;
          auVar35._0_8_ =
               CONCAT44(fVar30 * fVar8 + fVar23 * fVar9 + fVar24 * fVar10,
                        fVar30 * fVar11 + fVar23 * fVar12 + fVar24 * fVar13);
          auVar35._8_4_ = fVar30 * fVar28 + fVar23 * fVar5 + fVar24 * fVar6;
          auVar35._12_4_ = fVar30 * fVar7 + fVar23 * fVar7 + fVar24 * fVar7;
          fVar24 = pfVar20[0x18] - fVar26;
          auVar29._8_4_ = auVar35._8_4_;
          auVar29._0_8_ = auVar35._0_8_;
          auVar29._12_4_ = auVar35._12_4_;
          auVar36 = maxps(auVar35,auVar32);
          auVar29 = minps(auVar29,auVar27);
          fVar30 = pfVar20[0x16] - fVar34;
          fVar23 = pfVar20[0x1b] - fVar25;
          auVar33._0_8_ =
               CONCAT44(fVar30 * fVar8 + fVar22 * fVar9 + fVar24 * fVar10,
                        fVar30 * fVar11 + fVar22 * fVar12 + fVar24 * fVar13);
          auVar33._8_4_ = fVar30 * fVar28 + fVar22 * fVar5 + fVar24 * fVar6;
          auVar33._12_4_ = fVar30 * fVar7 + fVar22 * fVar7 + fVar24 * fVar7;
          fVar22 = pfVar20[0x1c] - fVar26;
          auVar27._8_4_ = auVar33._8_4_;
          auVar27._0_8_ = auVar33._0_8_;
          auVar27._12_4_ = auVar33._12_4_;
          auVar27 = minps(auVar27,auVar29);
          fVar24 = pfVar20[0x1a] - fVar34;
          auVar36 = maxps(auVar33,auVar36);
          auVar32._0_8_ =
               CONCAT44(fVar24 * fVar8 + fVar23 * fVar9 + fVar22 * fVar10,
                        fVar24 * fVar11 + fVar23 * fVar12 + fVar22 * fVar13);
          auVar32._8_4_ = fVar24 * fVar28 + fVar23 * fVar5 + fVar22 * fVar6;
          auVar32._12_4_ = fVar24 * fVar7 + fVar23 * fVar7 + fVar22 * fVar7;
          auVar37._8_4_ = auVar32._8_4_;
          auVar37._0_8_ = auVar32._0_8_;
          auVar37._12_4_ = auVar32._12_4_;
          auVar29 = minps(auVar37,auVar27);
          auVar27 = maxps(auVar32,auVar36);
          lVar15 = lVar15 + -1;
          pfVar20 = pfVar20 + 0x10;
        } while (lVar15 != 0);
        fVar26 = *(float *)(lVar2 + 0x994c) * 0.8;
        fVar28 = *(float *)(lVar2 + 0x993c) * 0.8;
        fVar34 = *(float *)(lVar2 + 0x9950) * 0.8;
        fVar25 = *(float *)(lVar2 + 0x9940) * 0.8;
        fStack_a8 = auVar29._0_4_;
        if (fVar28 <= fStack_a8 && fStack_a8 <= fVar26) {
          fStack_a4 = auVar29._4_4_;
          if (fStack_a4 <= fVar34 && fVar25 <= fStack_a4) {
            fStack_98 = auVar27._0_4_;
            if (fStack_98 <= fVar26 && fVar28 <= fStack_98) {
              fStack_94 = auVar27._4_4_;
              if (fStack_94 <= fVar34 && fVar25 <= fStack_94) {
                for (lVar15 = (int64_t)(iVar1 + 1); lVar15 < 4; lVar15 = lVar15 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
                  *(int8_t *)
                   ((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_4) * 0xd8 +
                    *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar17 * 8) + 0x90 + lVar15) = 0;
                }
              }
            }
          }
        }
      }
    }
    bVar21 = iVar18 != 0;
  }
  return bVar21;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2a94(int64_t param_1,int64_t param_2,uint64_t param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int64_t in_RAX;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t unaff_RBX;
  int64_t lVar16;
  int iVar17;
  int64_t lVar18;
  int64_t in_R10;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auVar27 [16];
  float fVar28;
  int8_t auVar29 [16];
  float fVar30;
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  lVar15 = *(int64_t *)(in_RAX + param_1 * 8);
  uVar14 = *(uint *)(unaff_RBX + 0x2b18);
  lVar16 = (int64_t)((int)param_4 >> 10);
  lVar18 = (int64_t)(int)(uVar14 & param_4) * 0xd8;
  lVar13 = *(int64_t *)(param_2 + lVar16 * 8);
  if (*(char *)(lVar18 + 0x10 + lVar13) == '\0') {
    bVar20 = false;
  }
  else {
    if (*(int *)(lVar15 + 0x178) == 0) {
      *(int8_t *)(lVar18 + 0x90 + lVar13) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(unaff_RBX + 0x2b18) & param_4) * 0xd8 + 0x91 +
       *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + lVar16 * 8)) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(unaff_RBX + 0x2b18) & param_4) * 0xd8 + 0x92 +
       *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + lVar16 * 8)) = 1;
      *(int8_t *)
       ((int64_t)(int)(*(uint *)(unaff_RBX + 0x2b18) & param_4) * 0xd8 + 0x93 +
       *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + lVar16 * 8)) = 1;
      param_2 = *(int64_t *)(unaff_RBX + 11000);
      uVar14 = *(uint *)(unaff_RBX + 0x2b18);
    }
    uVar14 = *(uint *)((int64_t)(int)(uVar14 & param_4) * 0xd8 + 0x20 +
                      *(int64_t *)(param_2 + lVar16 * 8));
    pfVar19 = (float *)(*(int64_t *)
                         (*(int64_t *)(unaff_RBX + 0x4e0) + (int64_t)((int)uVar14 >> 10) * 8) +
                       (int64_t)(int)(*(uint *)(unaff_RBX + 0x500) & uVar14) * 0xc0);
    pcVar2 = *(code **)(**(int64_t **)(in_R10 + 0x3580) + 0xb8);
    if (pcVar2 == (code *)&unknown_var_128_ptr) {
      lVar13 = (*(int64_t **)(in_R10 + 0x3580))[0xda];
    }
    else {
      lVar13 = (*pcVar2)();
    }
    iVar12 = FUN_1801b8ce0(lVar13 + 0x2998,lVar15 + 0x30,pfVar19 + 2,0,0);
    iVar17 = iVar12;
    if (iVar12 != 0) {
      iVar1 = *(int *)(lVar15 + 0x178);
      if (((-1 < iVar1) &&
          (iVar17 = 0,
          *(char *)((int64_t)(int)(*(uint *)(unaff_RBX + 0x2b18) & param_4) * 0xd8 +
                    *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + lVar16 * 8) + 0x90 +
                   (int64_t)iVar1) != '\0')) && (iVar17 = iVar12, -1 < iVar1)) {
        fVar28 = *(float *)(lVar15 + 0x110);
        fVar3 = *(float *)(lVar15 + 0x114);
        fVar4 = *(float *)(lVar15 + 0x118);
        fVar5 = *(float *)(lVar15 + 0x11c);
        lVar13 = 2;
        fVar6 = *(float *)(lVar15 + 0x100);
        fVar7 = *(float *)(lVar15 + 0x104);
        fVar8 = *(float *)(lVar15 + 0x108);
        fVar9 = *(float *)(lVar15 + 0xf0);
        fVar10 = *(float *)(lVar15 + 0xf4);
        fVar11 = *(float *)(lVar15 + 0xf8);
        fVar24 = *(float *)(lVar15 + 0x120);
        fVar25 = *(float *)(lVar15 + 0x124);
        fVar26 = *(float *)(lVar15 + 0x128);
        auVar27 = system_system_memory;
        auVar29 = system_system_memory;
        do {
          fVar30 = pfVar19[0xe] - fVar24;
          fVar21 = pfVar19[0xf] - fVar25;
          fVar23 = pfVar19[0x10] - fVar26;
          fVar22 = pfVar19[0x13] - fVar25;
          auVar31._0_8_ =
               CONCAT44(fVar30 * fVar6 + fVar21 * fVar7 + fVar23 * fVar8,
                        fVar30 * fVar9 + fVar21 * fVar10 + fVar23 * fVar11);
          auVar31._8_4_ = fVar30 * fVar28 + fVar21 * fVar3 + fVar23 * fVar4;
          auVar31._12_4_ = fVar30 * fVar5 + fVar21 * fVar5 + fVar23 * fVar5;
          fVar23 = pfVar19[0x14] - fVar26;
          auVar35._8_4_ = auVar31._8_4_;
          auVar35._0_8_ = auVar31._0_8_;
          auVar35._12_4_ = auVar31._12_4_;
          auVar32 = maxps(auVar31,auVar27);
          auVar27 = minps(auVar35,auVar29);
          fVar30 = pfVar19[0x12] - fVar24;
          fVar21 = pfVar19[0x17] - fVar25;
          auVar34._0_8_ =
               CONCAT44(fVar30 * fVar6 + fVar22 * fVar7 + fVar23 * fVar8,
                        fVar30 * fVar9 + fVar22 * fVar10 + fVar23 * fVar11);
          auVar34._8_4_ = fVar30 * fVar28 + fVar22 * fVar3 + fVar23 * fVar4;
          auVar34._12_4_ = fVar30 * fVar5 + fVar22 * fVar5 + fVar23 * fVar5;
          fVar23 = pfVar19[0x18] - fVar26;
          auVar29._8_4_ = auVar34._8_4_;
          auVar29._0_8_ = auVar34._0_8_;
          auVar29._12_4_ = auVar34._12_4_;
          auVar35 = maxps(auVar34,auVar32);
          auVar29 = minps(auVar29,auVar27);
          fVar30 = pfVar19[0x16] - fVar24;
          fVar22 = pfVar19[0x1b] - fVar25;
          auVar33._0_8_ =
               CONCAT44(fVar30 * fVar6 + fVar21 * fVar7 + fVar23 * fVar8,
                        fVar30 * fVar9 + fVar21 * fVar10 + fVar23 * fVar11);
          auVar33._8_4_ = fVar30 * fVar28 + fVar21 * fVar3 + fVar23 * fVar4;
          auVar33._12_4_ = fVar30 * fVar5 + fVar21 * fVar5 + fVar23 * fVar5;
          fVar21 = pfVar19[0x1c] - fVar26;
          auVar27._8_4_ = auVar33._8_4_;
          auVar27._0_8_ = auVar33._0_8_;
          auVar27._12_4_ = auVar33._12_4_;
          auVar27 = minps(auVar27,auVar29);
          fVar23 = pfVar19[0x1a] - fVar24;
          auVar35 = maxps(auVar33,auVar35);
          auVar32._0_8_ =
               CONCAT44(fVar23 * fVar6 + fVar22 * fVar7 + fVar21 * fVar8,
                        fVar23 * fVar9 + fVar22 * fVar10 + fVar21 * fVar11);
          auVar32._8_4_ = fVar23 * fVar28 + fVar22 * fVar3 + fVar21 * fVar4;
          auVar32._12_4_ = fVar23 * fVar5 + fVar22 * fVar5 + fVar21 * fVar5;
          auVar36._8_4_ = auVar32._8_4_;
          auVar36._0_8_ = auVar32._0_8_;
          auVar36._12_4_ = auVar32._12_4_;
          auVar29 = minps(auVar36,auVar27);
          auVar27 = maxps(auVar32,auVar35);
          lVar13 = lVar13 + -1;
          pfVar19 = pfVar19 + 0x10;
        } while (lVar13 != 0);
        fVar26 = *(float *)(lVar15 + 0x994c) * 0.8;
        fVar28 = *(float *)(lVar15 + 0x993c) * 0.8;
        fVar24 = *(float *)(lVar15 + 0x9950) * 0.8;
        fVar25 = *(float *)(lVar15 + 0x9940) * 0.8;
        fStack0000000000000040 = auVar29._0_4_;
        if (((fVar28 <= fStack0000000000000040 && fStack0000000000000040 <= fVar26) &&
            (fStack0000000000000044 = auVar29._4_4_,
            fStack0000000000000044 <= fVar24 && fVar25 <= fStack0000000000000044)) &&
           ((fStack0000000000000050 = auVar27._0_4_,
            fStack0000000000000050 <= fVar26 && fVar28 <= fStack0000000000000050 &&
            (fStack0000000000000054 = auVar27._4_4_,
            fStack0000000000000054 <= fVar24 && fVar25 <= fStack0000000000000054)))) {
          for (lVar15 = (int64_t)(iVar1 + 1); lVar15 < 4; lVar15 = lVar15 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
            *(int8_t *)
             ((int64_t)(int)(*(uint *)(unaff_RBX + 0x2b18) & param_4) * 0xd8 +
              *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + lVar16 * 8) + 0x90 + lVar15) = 0;
          }
        }
      }
    }
    bVar20 = iVar17 != 0;
  }
  return bVar20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2ae7(int param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int64_t in_RAX;
  int64_t lVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar15;
  int64_t unaff_RDI;
  int64_t in_R10;
  uint64_t unaff_R14;
  float *pfVar16;
  bool in_ZF;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  int8_t auVar25 [16];
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  if (in_ZF) {
    *(int8_t *)(param_3 + 0x90 + in_RAX) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x91 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x92 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x93 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    param_2 = *(int64_t *)(unaff_RBX + 11000);
    param_1 = *(int *)(unaff_RBX + 0x2b18);
  }
  uVar1 = *(uint *)(((int64_t)param_1 & unaff_R14) * 0xd8 + 0x20 +
                   *(int64_t *)(param_2 + unaff_RBP * 8));
  pfVar16 = (float *)(*(int64_t *)
                       (*(int64_t *)(unaff_RBX + 0x4e0) + (int64_t)((int)uVar1 >> 10) * 8) +
                     (int64_t)(int)(*(uint *)(unaff_RBX + 0x500) & uVar1) * 0xc0);
  pcVar3 = *(code **)(**(int64_t **)(in_R10 + 0x3580) + 0xb8);
  if (pcVar3 == (code *)&unknown_var_128_ptr) {
    lVar14 = (*(int64_t **)(in_R10 + 0x3580))[0xda];
  }
  else {
    lVar14 = (*pcVar3)();
  }
  iVar13 = FUN_1801b8ce0(lVar14 + 0x2998,unaff_RDI + 0x30,pfVar16 + 2,0,0);
  iVar15 = iVar13;
  if (iVar13 != 0) {
    iVar2 = *(int *)(unaff_RDI + 0x178);
    if (((-1 < iVar2) &&
        (iVar15 = 0,
        *(char *)(((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
                  *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 +
                 (int64_t)iVar2) != '\0')) && (iVar15 = iVar13, -1 < iVar2)) {
      fVar24 = *(float *)(unaff_RDI + 0x110);
      fVar4 = *(float *)(unaff_RDI + 0x114);
      fVar5 = *(float *)(unaff_RDI + 0x118);
      fVar6 = *(float *)(unaff_RDI + 0x11c);
      lVar14 = 2;
      fVar7 = *(float *)(unaff_RDI + 0x100);
      fVar8 = *(float *)(unaff_RDI + 0x104);
      fVar9 = *(float *)(unaff_RDI + 0x108);
      fVar10 = *(float *)(unaff_RDI + 0xf0);
      fVar11 = *(float *)(unaff_RDI + 0xf4);
      fVar12 = *(float *)(unaff_RDI + 0xf8);
      fVar20 = *(float *)(unaff_RDI + 0x120);
      fVar21 = *(float *)(unaff_RDI + 0x124);
      fVar22 = *(float *)(unaff_RDI + 0x128);
      auVar23 = system_system_memory;
      auVar25 = system_system_memory;
      do {
        fVar26 = pfVar16[0xe] - fVar20;
        fVar17 = pfVar16[0xf] - fVar21;
        fVar19 = pfVar16[0x10] - fVar22;
        fVar18 = pfVar16[0x13] - fVar21;
        auVar27._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar17 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar17 * fVar11 + fVar19 * fVar12);
        auVar27._8_4_ = fVar26 * fVar24 + fVar17 * fVar4 + fVar19 * fVar5;
        auVar27._12_4_ = fVar26 * fVar6 + fVar17 * fVar6 + fVar19 * fVar6;
        fVar19 = pfVar16[0x14] - fVar22;
        auVar31._8_4_ = auVar27._8_4_;
        auVar31._0_8_ = auVar27._0_8_;
        auVar31._12_4_ = auVar27._12_4_;
        auVar28 = maxps(auVar27,auVar23);
        auVar23 = minps(auVar31,auVar25);
        fVar26 = pfVar16[0x12] - fVar20;
        fVar17 = pfVar16[0x17] - fVar21;
        auVar30._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar18 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar18 * fVar11 + fVar19 * fVar12);
        auVar30._8_4_ = fVar26 * fVar24 + fVar18 * fVar4 + fVar19 * fVar5;
        auVar30._12_4_ = fVar26 * fVar6 + fVar18 * fVar6 + fVar19 * fVar6;
        fVar19 = pfVar16[0x18] - fVar22;
        auVar25._8_4_ = auVar30._8_4_;
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = auVar30._12_4_;
        auVar31 = maxps(auVar30,auVar28);
        auVar25 = minps(auVar25,auVar23);
        fVar26 = pfVar16[0x16] - fVar20;
        fVar18 = pfVar16[0x1b] - fVar21;
        auVar29._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar17 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar17 * fVar11 + fVar19 * fVar12);
        auVar29._8_4_ = fVar26 * fVar24 + fVar17 * fVar4 + fVar19 * fVar5;
        auVar29._12_4_ = fVar26 * fVar6 + fVar17 * fVar6 + fVar19 * fVar6;
        fVar17 = pfVar16[0x1c] - fVar22;
        auVar23._8_4_ = auVar29._8_4_;
        auVar23._0_8_ = auVar29._0_8_;
        auVar23._12_4_ = auVar29._12_4_;
        auVar23 = minps(auVar23,auVar25);
        fVar19 = pfVar16[0x1a] - fVar20;
        auVar31 = maxps(auVar29,auVar31);
        auVar28._0_8_ =
             CONCAT44(fVar19 * fVar7 + fVar18 * fVar8 + fVar17 * fVar9,
                      fVar19 * fVar10 + fVar18 * fVar11 + fVar17 * fVar12);
        auVar28._8_4_ = fVar19 * fVar24 + fVar18 * fVar4 + fVar17 * fVar5;
        auVar28._12_4_ = fVar19 * fVar6 + fVar18 * fVar6 + fVar17 * fVar6;
        auVar32._8_4_ = auVar28._8_4_;
        auVar32._0_8_ = auVar28._0_8_;
        auVar32._12_4_ = auVar28._12_4_;
        auVar25 = minps(auVar32,auVar23);
        auVar23 = maxps(auVar28,auVar31);
        lVar14 = lVar14 + -1;
        pfVar16 = pfVar16 + 0x10;
      } while (lVar14 != 0);
      fVar22 = *(float *)(unaff_RDI + 0x994c) * 0.8;
      fVar24 = *(float *)(unaff_RDI + 0x993c) * 0.8;
      fVar20 = *(float *)(unaff_RDI + 0x9950) * 0.8;
      fVar21 = *(float *)(unaff_RDI + 0x9940) * 0.8;
      fStack0000000000000040 = auVar25._0_4_;
      if (((fVar24 <= fStack0000000000000040 && fStack0000000000000040 <= fVar22) &&
          (fStack0000000000000044 = auVar25._4_4_,
          fStack0000000000000044 <= fVar20 && fVar21 <= fStack0000000000000044)) &&
         ((fStack0000000000000050 = auVar23._0_4_,
          fStack0000000000000050 <= fVar22 && fVar24 <= fStack0000000000000050 &&
          (fStack0000000000000054 = auVar23._4_4_,
          fStack0000000000000054 <= fVar20 && fVar21 <= fStack0000000000000054)))) {
        for (lVar14 = (int64_t)(iVar2 + 1); lVar14 < 4; lVar14 = lVar14 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
          *(int8_t *)
           (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
            *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 + lVar14) = 0;
        }
      }
    }
  }
  return iVar15 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2aef(int param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int64_t in_RAX;
  int64_t lVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar15;
  int64_t unaff_RDI;
  int64_t in_R10;
  uint64_t unaff_R14;
  float *pfVar16;
  bool in_ZF;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  int8_t auVar25 [16];
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  if (in_ZF) {
    *(int8_t *)(param_3 + 0x90 + in_RAX) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x91 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x92 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    *(int8_t *)
     (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 + 0x93 +
     *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8)) = 1;
    param_2 = *(int64_t *)(unaff_RBX + 11000);
    param_1 = *(int *)(unaff_RBX + 0x2b18);
  }
  uVar1 = *(uint *)(((int64_t)param_1 & unaff_R14) * 0xd8 + 0x20 +
                   *(int64_t *)(param_2 + unaff_RBP * 8));
  pfVar16 = (float *)(*(int64_t *)
                       (*(int64_t *)(unaff_RBX + 0x4e0) + (int64_t)((int)uVar1 >> 10) * 8) +
                     (int64_t)(int)(*(uint *)(unaff_RBX + 0x500) & uVar1) * 0xc0);
  pcVar3 = *(code **)(**(int64_t **)(in_R10 + 0x3580) + 0xb8);
  if (pcVar3 == (code *)&unknown_var_128_ptr) {
    lVar14 = (*(int64_t **)(in_R10 + 0x3580))[0xda];
  }
  else {
    lVar14 = (*pcVar3)();
  }
  iVar13 = FUN_1801b8ce0(lVar14 + 0x2998,unaff_RDI + 0x30,pfVar16 + 2,0,0);
  iVar15 = iVar13;
  if (iVar13 != 0) {
    iVar2 = *(int *)(unaff_RDI + 0x178);
    if (((-1 < iVar2) &&
        (iVar15 = 0,
        *(char *)(((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
                  *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 +
                 (int64_t)iVar2) != '\0')) && (iVar15 = iVar13, -1 < iVar2)) {
      fVar24 = *(float *)(unaff_RDI + 0x110);
      fVar4 = *(float *)(unaff_RDI + 0x114);
      fVar5 = *(float *)(unaff_RDI + 0x118);
      fVar6 = *(float *)(unaff_RDI + 0x11c);
      lVar14 = 2;
      fVar7 = *(float *)(unaff_RDI + 0x100);
      fVar8 = *(float *)(unaff_RDI + 0x104);
      fVar9 = *(float *)(unaff_RDI + 0x108);
      fVar10 = *(float *)(unaff_RDI + 0xf0);
      fVar11 = *(float *)(unaff_RDI + 0xf4);
      fVar12 = *(float *)(unaff_RDI + 0xf8);
      fVar20 = *(float *)(unaff_RDI + 0x120);
      fVar21 = *(float *)(unaff_RDI + 0x124);
      fVar22 = *(float *)(unaff_RDI + 0x128);
      auVar23 = system_system_memory;
      auVar25 = system_system_memory;
      do {
        fVar26 = pfVar16[0xe] - fVar20;
        fVar17 = pfVar16[0xf] - fVar21;
        fVar19 = pfVar16[0x10] - fVar22;
        fVar18 = pfVar16[0x13] - fVar21;
        auVar27._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar17 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar17 * fVar11 + fVar19 * fVar12);
        auVar27._8_4_ = fVar26 * fVar24 + fVar17 * fVar4 + fVar19 * fVar5;
        auVar27._12_4_ = fVar26 * fVar6 + fVar17 * fVar6 + fVar19 * fVar6;
        fVar19 = pfVar16[0x14] - fVar22;
        auVar31._8_4_ = auVar27._8_4_;
        auVar31._0_8_ = auVar27._0_8_;
        auVar31._12_4_ = auVar27._12_4_;
        auVar28 = maxps(auVar27,auVar23);
        auVar23 = minps(auVar31,auVar25);
        fVar26 = pfVar16[0x12] - fVar20;
        fVar17 = pfVar16[0x17] - fVar21;
        auVar30._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar18 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar18 * fVar11 + fVar19 * fVar12);
        auVar30._8_4_ = fVar26 * fVar24 + fVar18 * fVar4 + fVar19 * fVar5;
        auVar30._12_4_ = fVar26 * fVar6 + fVar18 * fVar6 + fVar19 * fVar6;
        fVar19 = pfVar16[0x18] - fVar22;
        auVar25._8_4_ = auVar30._8_4_;
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = auVar30._12_4_;
        auVar31 = maxps(auVar30,auVar28);
        auVar25 = minps(auVar25,auVar23);
        fVar26 = pfVar16[0x16] - fVar20;
        fVar18 = pfVar16[0x1b] - fVar21;
        auVar29._0_8_ =
             CONCAT44(fVar26 * fVar7 + fVar17 * fVar8 + fVar19 * fVar9,
                      fVar26 * fVar10 + fVar17 * fVar11 + fVar19 * fVar12);
        auVar29._8_4_ = fVar26 * fVar24 + fVar17 * fVar4 + fVar19 * fVar5;
        auVar29._12_4_ = fVar26 * fVar6 + fVar17 * fVar6 + fVar19 * fVar6;
        fVar17 = pfVar16[0x1c] - fVar22;
        auVar23._8_4_ = auVar29._8_4_;
        auVar23._0_8_ = auVar29._0_8_;
        auVar23._12_4_ = auVar29._12_4_;
        auVar23 = minps(auVar23,auVar25);
        fVar19 = pfVar16[0x1a] - fVar20;
        auVar31 = maxps(auVar29,auVar31);
        auVar28._0_8_ =
             CONCAT44(fVar19 * fVar7 + fVar18 * fVar8 + fVar17 * fVar9,
                      fVar19 * fVar10 + fVar18 * fVar11 + fVar17 * fVar12);
        auVar28._8_4_ = fVar19 * fVar24 + fVar18 * fVar4 + fVar17 * fVar5;
        auVar28._12_4_ = fVar19 * fVar6 + fVar18 * fVar6 + fVar17 * fVar6;
        auVar32._8_4_ = auVar28._8_4_;
        auVar32._0_8_ = auVar28._0_8_;
        auVar32._12_4_ = auVar28._12_4_;
        auVar25 = minps(auVar32,auVar23);
        auVar23 = maxps(auVar28,auVar31);
        lVar14 = lVar14 + -1;
        pfVar16 = pfVar16 + 0x10;
      } while (lVar14 != 0);
      fVar22 = *(float *)(unaff_RDI + 0x994c) * 0.8;
      fVar24 = *(float *)(unaff_RDI + 0x993c) * 0.8;
      fVar20 = *(float *)(unaff_RDI + 0x9950) * 0.8;
      fVar21 = *(float *)(unaff_RDI + 0x9940) * 0.8;
      fStack0000000000000040 = auVar25._0_4_;
      if (((fVar24 <= fStack0000000000000040 && fStack0000000000000040 <= fVar22) &&
          (fStack0000000000000044 = auVar25._4_4_,
          fStack0000000000000044 <= fVar20 && fVar21 <= fStack0000000000000044)) &&
         ((fStack0000000000000050 = auVar23._0_4_,
          fStack0000000000000050 <= fVar22 && fVar24 <= fStack0000000000000050 &&
          (fStack0000000000000054 = auVar23._4_4_,
          fStack0000000000000054 <= fVar20 && fVar21 <= fStack0000000000000054)))) {
        for (lVar14 = (int64_t)(iVar2 + 1); lVar14 < 4; lVar14 = lVar14 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
          *(int8_t *)
           (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
            *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 + lVar14) = 0;
        }
      }
    }
  }
  return iVar15 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2c61(void)

{
  float *pfVar1;
  int iVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar14;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int in_R9D;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  int8_t auVar24 [16];
  float fVar25;
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  iVar2 = *(int *)(unaff_RDI + 0x178);
  iVar14 = in_R9D;
  if (((-1 < iVar2) &&
      (iVar14 = (int)unaff_RSI,
      *(char *)(((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
                *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 +
               (int64_t)iVar2) != (char)unaff_RSI)) && (iVar14 = in_R9D, -1 < iVar2)) {
    fVar23 = *(float *)(unaff_RDI + 0x110);
    fVar4 = *(float *)(unaff_RDI + 0x114);
    fVar5 = *(float *)(unaff_RDI + 0x118);
    fVar6 = *(float *)(unaff_RDI + 0x11c);
    pfVar15 = (float *)(unaff_R15 + 0x40);
    lVar13 = 2;
    fVar7 = *(float *)(unaff_RDI + 0x100);
    fVar8 = *(float *)(unaff_RDI + 0x104);
    fVar9 = *(float *)(unaff_RDI + 0x108);
    fVar10 = *(float *)(unaff_RDI + 0xf0);
    fVar11 = *(float *)(unaff_RDI + 0xf4);
    fVar12 = *(float *)(unaff_RDI + 0xf8);
    fVar19 = *(float *)(unaff_RDI + 0x120);
    fVar20 = *(float *)(unaff_RDI + 0x124);
    fVar21 = *(float *)(unaff_RDI + 0x128);
    auVar22 = system_system_memory;
    auVar24 = system_system_memory;
    do {
      fVar25 = pfVar15[-2] - fVar19;
      fVar16 = pfVar15[-1] - fVar20;
      fVar18 = *pfVar15 - fVar21;
      fVar17 = pfVar15[3] - fVar20;
      auVar26._0_8_ =
           CONCAT44(fVar25 * fVar7 + fVar16 * fVar8 + fVar18 * fVar9,
                    fVar25 * fVar10 + fVar16 * fVar11 + fVar18 * fVar12);
      auVar26._8_4_ = fVar25 * fVar23 + fVar16 * fVar4 + fVar18 * fVar5;
      auVar26._12_4_ = fVar25 * fVar6 + fVar16 * fVar6 + fVar18 * fVar6;
      fVar18 = pfVar15[4] - fVar21;
      auVar30._8_4_ = auVar26._8_4_;
      auVar30._0_8_ = auVar26._0_8_;
      auVar30._12_4_ = auVar26._12_4_;
      auVar27 = maxps(auVar26,auVar22);
      auVar22 = minps(auVar30,auVar24);
      fVar25 = pfVar15[2] - fVar19;
      fVar16 = pfVar15[7] - fVar20;
      auVar29._0_8_ =
           CONCAT44(fVar25 * fVar7 + fVar17 * fVar8 + fVar18 * fVar9,
                    fVar25 * fVar10 + fVar17 * fVar11 + fVar18 * fVar12);
      auVar29._8_4_ = fVar25 * fVar23 + fVar17 * fVar4 + fVar18 * fVar5;
      auVar29._12_4_ = fVar25 * fVar6 + fVar17 * fVar6 + fVar18 * fVar6;
      fVar18 = pfVar15[8] - fVar21;
      auVar24._8_4_ = auVar29._8_4_;
      auVar24._0_8_ = auVar29._0_8_;
      auVar24._12_4_ = auVar29._12_4_;
      auVar30 = maxps(auVar29,auVar27);
      auVar24 = minps(auVar24,auVar22);
      fVar25 = pfVar15[6] - fVar19;
      fVar17 = pfVar15[0xb] - fVar20;
      auVar28._0_8_ =
           CONCAT44(fVar25 * fVar7 + fVar16 * fVar8 + fVar18 * fVar9,
                    fVar25 * fVar10 + fVar16 * fVar11 + fVar18 * fVar12);
      auVar28._8_4_ = fVar25 * fVar23 + fVar16 * fVar4 + fVar18 * fVar5;
      auVar28._12_4_ = fVar25 * fVar6 + fVar16 * fVar6 + fVar18 * fVar6;
      fVar16 = pfVar15[0xc] - fVar21;
      auVar22._8_4_ = auVar28._8_4_;
      auVar22._0_8_ = auVar28._0_8_;
      auVar22._12_4_ = auVar28._12_4_;
      auVar22 = minps(auVar22,auVar24);
      pfVar1 = pfVar15 + 10;
      pfVar15 = pfVar15 + 0x10;
      fVar18 = *pfVar1 - fVar19;
      auVar30 = maxps(auVar28,auVar30);
      auVar27._0_8_ =
           CONCAT44(fVar18 * fVar7 + fVar17 * fVar8 + fVar16 * fVar9,
                    fVar18 * fVar10 + fVar17 * fVar11 + fVar16 * fVar12);
      auVar27._8_4_ = fVar18 * fVar23 + fVar17 * fVar4 + fVar16 * fVar5;
      auVar27._12_4_ = fVar18 * fVar6 + fVar17 * fVar6 + fVar16 * fVar6;
      auVar31._8_4_ = auVar27._8_4_;
      auVar31._0_8_ = auVar27._0_8_;
      auVar31._12_4_ = auVar27._12_4_;
      auVar24 = minps(auVar31,auVar22);
      auVar22 = maxps(auVar27,auVar30);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar3 = (uint8_t)((uint64_t)unaff_RSI >> 8);
    fVar21 = *(float *)(unaff_RDI + 0x994c) * 0.8;
    fVar23 = *(float *)(unaff_RDI + 0x993c) * 0.8;
    fVar19 = *(float *)(unaff_RDI + 0x9950) * 0.8;
    fVar20 = *(float *)(unaff_RDI + 0x9940) * 0.8;
    fStack0000000000000040 = auVar24._0_4_;
    if (((((uint)CONCAT71(uVar3,fVar23 <= fStack0000000000000040) &
          (uint)CONCAT71(uVar3,fStack0000000000000040 <= fVar21)) != 0) &&
        (fStack0000000000000044 = auVar24._4_4_,
        ((uint)CONCAT71(uVar3,fStack0000000000000044 <= fVar19) &
        (uint)CONCAT71(uVar3,fVar20 <= fStack0000000000000044)) != 0)) &&
       ((fStack0000000000000050 = auVar22._0_4_,
        ((uint)CONCAT71(uVar3,fStack0000000000000050 <= fVar21) &
        (uint)CONCAT71(uVar3,fVar23 <= fStack0000000000000050)) != 0 &&
        (fStack0000000000000054 = auVar22._4_4_,
        ((uint)CONCAT71(uVar3,fStack0000000000000054 <= fVar19) &
        (uint)CONCAT71(uVar3,fVar20 <= fStack0000000000000054)) != 0)))) {
      for (lVar13 = (int64_t)(iVar2 + 1); lVar13 < 4; lVar13 = lVar13 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
        *(int8_t *)
         (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
          *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 + lVar13) = 0;
      }
    }
  }
  return iVar14 != 0;
}



uint64_t FUN_1804d2ccd(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  float *pfVar1;
  uint8_t uVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  int64_t in_RAX;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  float *unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_XMM0_Dc;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  int8_t in_XMM4 [16];
  int8_t auVar20 [16];
  float fVar21;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t unaff_XMM6 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  fVar8 = (float)param_1;
  fVar19 = *(float *)(unaff_RDI + 0xf0);
  fVar4 = *(float *)(unaff_RDI + 0xf4);
  fVar5 = *(float *)(unaff_RDI + 0xf8);
  fVar14 = *(float *)(unaff_RDI + 0x120);
  fVar16 = *(float *)(unaff_RDI + 0x124);
  fVar17 = *(float *)(unaff_RDI + 0x128);
  do {
    fVar21 = unaff_R15[-2] - fVar14;
    fVar9 = unaff_R15[-1] - fVar16;
    fVar13 = *unaff_R15 - fVar17;
    fVar10 = unaff_R15[3] - fVar16;
    auVar22._0_8_ =
         CONCAT44(fVar21 * fVar8 + fVar9 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar21 * fVar19 + fVar9 * fVar4 + fVar13 * fVar5);
    auVar22._8_4_ = fVar21 * fVar12 + fVar9 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar22._12_4_ = fVar21 * in_XMM1_Dd + fVar9 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar13 = unaff_R15[4] - fVar17;
    auVar18._8_4_ = auVar22._8_4_;
    auVar18._0_8_ = auVar22._0_8_;
    auVar18._12_4_ = auVar22._12_4_;
    auVar23 = maxps(auVar22,in_XMM4);
    auVar18 = minps(auVar18,unaff_XMM6);
    fVar21 = unaff_R15[2] - fVar14;
    fVar9 = unaff_R15[7] - fVar16;
    auVar25._0_8_ =
         CONCAT44(fVar21 * fVar8 + fVar10 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar21 * fVar19 + fVar10 * fVar4 + fVar13 * fVar5);
    auVar25._8_4_ = fVar21 * fVar12 + fVar10 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar25._12_4_ = fVar21 * in_XMM1_Dd + fVar10 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar13 = unaff_R15[8] - fVar17;
    auVar20._8_4_ = auVar25._8_4_;
    auVar20._0_8_ = auVar25._0_8_;
    auVar20._12_4_ = auVar25._12_4_;
    auVar26 = maxps(auVar25,auVar23);
    auVar18 = minps(auVar20,auVar18);
    fVar21 = unaff_R15[6] - fVar14;
    fVar10 = unaff_R15[0xb] - fVar16;
    auVar24._0_8_ =
         CONCAT44(fVar21 * fVar8 + fVar9 * fVar11 + fVar13 * in_XMM0_Dc,
                  fVar21 * fVar19 + fVar9 * fVar4 + fVar13 * fVar5);
    auVar24._8_4_ = fVar21 * fVar12 + fVar9 * fVar15 + fVar13 * in_XMM1_Dc;
    auVar24._12_4_ = fVar21 * in_XMM1_Dd + fVar9 * in_XMM1_Dd + fVar13 * in_XMM1_Dd;
    fVar9 = unaff_R15[0xc] - fVar17;
    auVar23._8_4_ = auVar24._8_4_;
    auVar23._0_8_ = auVar24._0_8_;
    auVar23._12_4_ = auVar24._12_4_;
    auVar18 = minps(auVar23,auVar18);
    pfVar1 = unaff_R15 + 10;
    unaff_R15 = unaff_R15 + 0x10;
    fVar13 = *pfVar1 - fVar14;
    auVar23 = maxps(auVar24,auVar26);
    auVar26._0_8_ =
         CONCAT44(fVar13 * fVar8 + fVar10 * fVar11 + fVar9 * in_XMM0_Dc,
                  fVar13 * fVar19 + fVar10 * fVar4 + fVar9 * fVar5);
    auVar26._8_4_ = fVar13 * fVar12 + fVar10 * fVar15 + fVar9 * in_XMM1_Dc;
    auVar26._12_4_ = fVar13 * in_XMM1_Dd + fVar10 * in_XMM1_Dd + fVar9 * in_XMM1_Dd;
    auVar27._8_4_ = auVar26._8_4_;
    auVar27._0_8_ = auVar26._0_8_;
    auVar27._12_4_ = auVar26._12_4_;
    unaff_XMM6 = minps(auVar27,auVar18);
    in_XMM4 = maxps(auVar26,auVar23);
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  uVar2 = (uint8_t)((uint64_t)unaff_RSI >> 8);
  fVar17 = *(float *)(unaff_RDI + 0x994c) * 0.8;
  fVar19 = *(float *)(unaff_RDI + 0x993c) * 0.8;
  fVar14 = *(float *)(unaff_RDI + 0x9950) * 0.8;
  fVar16 = *(float *)(unaff_RDI + 0x9940) * 0.8;
  fStack0000000000000040 = unaff_XMM6._0_4_;
  uVar3 = CONCAT71(uVar2,fVar19 <= fStack0000000000000040);
  uVar6 = uVar3 & 0xffffffff;
  if (((uint)uVar3 & (uint)CONCAT71(uVar2,fStack0000000000000040 <= fVar17)) != 0) {
    fStack0000000000000044 = unaff_XMM6._4_4_;
    uVar3 = CONCAT71(uVar2,fStack0000000000000044 <= fVar14);
    uVar6 = uVar3 & 0xffffffff;
    if (((uint)uVar3 & (uint)CONCAT71(uVar2,fVar16 <= fStack0000000000000044)) != 0) {
      fStack0000000000000050 = in_XMM4._0_4_;
      uVar3 = CONCAT71(uVar2,fStack0000000000000050 <= fVar17);
      uVar6 = uVar3 & 0xffffffff;
      if (((uint)uVar3 & (uint)CONCAT71(uVar2,fVar19 <= fStack0000000000000050)) != 0) {
        fStack0000000000000054 = in_XMM4._4_4_;
        uVar3 = CONCAT71(uVar2,fVar16 <= fStack0000000000000054);
        uVar6 = uVar3 & 0xffffffff;
        if (((uint)CONCAT71(uVar2,fStack0000000000000054 <= fVar14) & (uint)uVar3) != 0) {
          uVar6 = (uint64_t)(param_3 + 1U);
          for (lVar7 = (int64_t)(int)(param_3 + 1U); lVar7 < 4; lVar7 = lVar7 + 1) {
            uVar6 = *(uint64_t *)(unaff_RBX + 11000);
            *(int8_t *)
             (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
              *(int64_t *)(uVar6 + unaff_RBP * 8) + 0x90 + lVar7) = 0;
          }
        }
      }
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),param_4 != 0);
}



uint64_t FUN_1804d2ef8(uint64_t param_1,float param_2,float param_3,float param_4)

{
  uint8_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int in_R8D;
  int in_R9D;
  uint64_t unaff_R14;
  float in_XMM4_Da;
  uint64_t in_stack_00000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  uVar1 = (uint8_t)((uint64_t)unaff_RSI >> 8);
  uVar2 = CONCAT71(uVar1,in_stack_00000040._4_4_ <= param_2);
  uVar3 = uVar2 & 0xffffffff;
  if (((((uint)uVar2 & (uint)CONCAT71(uVar1,param_3 <= in_stack_00000040._4_4_)) != 0) &&
      (uVar2 = CONCAT71(uVar1,fStack0000000000000050 <= param_4), uVar3 = uVar2 & 0xffffffff,
      ((uint)uVar2 & (uint)CONCAT71(uVar1,in_XMM4_Da <= fStack0000000000000050)) != 0)) &&
     (uVar2 = CONCAT71(uVar1,param_3 <= fStack0000000000000054), uVar3 = uVar2 & 0xffffffff,
     ((uint)CONCAT71(uVar1,fStack0000000000000054 <= param_2) & (uint)uVar2) != 0)) {
    uVar3 = (uint64_t)(in_R8D + 1U);
    for (lVar4 = (int64_t)(int)(in_R8D + 1U); lVar4 < 4; lVar4 = lVar4 + 1) {
      uVar3 = *(uint64_t *)(unaff_RBX + 11000);
      *(int8_t *)
       (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
        *(int64_t *)(uVar3 + unaff_RBP * 8) + 0x90 + lVar4) = 0;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),in_R9D != 0);
}



int8_t FUN_1804d2f9f(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804d2fc2(uint64_t param_1,code *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int64_t lVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar14;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  float *pfVar15;
  int64_t unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  int8_t auVar24 [16];
  float fVar25;
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  lVar13 = (*param_2)();
  iVar12 = FUN_1801b8ce0(lVar13 + 0x2998,unaff_RDI + 0x30,unaff_R15 + 8,0,0);
  iVar14 = iVar12;
  if (iVar12 != 0) {
    iVar2 = *(int *)(unaff_RDI + 0x178);
    if (((-1 < iVar2) &&
        (iVar14 = 0,
        *(char *)(((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
                  *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 +
                 (int64_t)iVar2) != '\0')) && (iVar14 = iVar12, -1 < iVar2)) {
      fVar23 = *(float *)(unaff_RDI + 0x110);
      fVar3 = *(float *)(unaff_RDI + 0x114);
      fVar4 = *(float *)(unaff_RDI + 0x118);
      fVar5 = *(float *)(unaff_RDI + 0x11c);
      pfVar15 = (float *)(unaff_R15 + 0x40);
      lVar13 = 2;
      fVar6 = *(float *)(unaff_RDI + 0x100);
      fVar7 = *(float *)(unaff_RDI + 0x104);
      fVar8 = *(float *)(unaff_RDI + 0x108);
      fVar9 = *(float *)(unaff_RDI + 0xf0);
      fVar10 = *(float *)(unaff_RDI + 0xf4);
      fVar11 = *(float *)(unaff_RDI + 0xf8);
      fVar19 = *(float *)(unaff_RDI + 0x120);
      fVar20 = *(float *)(unaff_RDI + 0x124);
      fVar21 = *(float *)(unaff_RDI + 0x128);
      auVar22 = system_system_memory;
      auVar24 = system_system_memory;
      do {
        fVar25 = pfVar15[-2] - fVar19;
        fVar16 = pfVar15[-1] - fVar20;
        fVar18 = *pfVar15 - fVar21;
        fVar17 = pfVar15[3] - fVar20;
        auVar26._0_8_ =
             CONCAT44(fVar25 * fVar6 + fVar16 * fVar7 + fVar18 * fVar8,
                      fVar25 * fVar9 + fVar16 * fVar10 + fVar18 * fVar11);
        auVar26._8_4_ = fVar25 * fVar23 + fVar16 * fVar3 + fVar18 * fVar4;
        auVar26._12_4_ = fVar25 * fVar5 + fVar16 * fVar5 + fVar18 * fVar5;
        fVar18 = pfVar15[4] - fVar21;
        auVar30._8_4_ = auVar26._8_4_;
        auVar30._0_8_ = auVar26._0_8_;
        auVar30._12_4_ = auVar26._12_4_;
        auVar27 = maxps(auVar26,auVar22);
        auVar22 = minps(auVar30,auVar24);
        fVar25 = pfVar15[2] - fVar19;
        fVar16 = pfVar15[7] - fVar20;
        auVar29._0_8_ =
             CONCAT44(fVar25 * fVar6 + fVar17 * fVar7 + fVar18 * fVar8,
                      fVar25 * fVar9 + fVar17 * fVar10 + fVar18 * fVar11);
        auVar29._8_4_ = fVar25 * fVar23 + fVar17 * fVar3 + fVar18 * fVar4;
        auVar29._12_4_ = fVar25 * fVar5 + fVar17 * fVar5 + fVar18 * fVar5;
        fVar18 = pfVar15[8] - fVar21;
        auVar24._8_4_ = auVar29._8_4_;
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = auVar29._12_4_;
        auVar30 = maxps(auVar29,auVar27);
        auVar24 = minps(auVar24,auVar22);
        fVar25 = pfVar15[6] - fVar19;
        fVar17 = pfVar15[0xb] - fVar20;
        auVar28._0_8_ =
             CONCAT44(fVar25 * fVar6 + fVar16 * fVar7 + fVar18 * fVar8,
                      fVar25 * fVar9 + fVar16 * fVar10 + fVar18 * fVar11);
        auVar28._8_4_ = fVar25 * fVar23 + fVar16 * fVar3 + fVar18 * fVar4;
        auVar28._12_4_ = fVar25 * fVar5 + fVar16 * fVar5 + fVar18 * fVar5;
        fVar16 = pfVar15[0xc] - fVar21;
        auVar22._8_4_ = auVar28._8_4_;
        auVar22._0_8_ = auVar28._0_8_;
        auVar22._12_4_ = auVar28._12_4_;
        auVar22 = minps(auVar22,auVar24);
        pfVar1 = pfVar15 + 10;
        pfVar15 = pfVar15 + 0x10;
        fVar18 = *pfVar1 - fVar19;
        auVar30 = maxps(auVar28,auVar30);
        auVar27._0_8_ =
             CONCAT44(fVar18 * fVar6 + fVar17 * fVar7 + fVar16 * fVar8,
                      fVar18 * fVar9 + fVar17 * fVar10 + fVar16 * fVar11);
        auVar27._8_4_ = fVar18 * fVar23 + fVar17 * fVar3 + fVar16 * fVar4;
        auVar27._12_4_ = fVar18 * fVar5 + fVar17 * fVar5 + fVar16 * fVar5;
        auVar31._8_4_ = auVar27._8_4_;
        auVar31._0_8_ = auVar27._0_8_;
        auVar31._12_4_ = auVar27._12_4_;
        auVar24 = minps(auVar31,auVar22);
        auVar22 = maxps(auVar27,auVar30);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar21 = *(float *)(unaff_RDI + 0x994c) * 0.8;
      fVar23 = *(float *)(unaff_RDI + 0x993c) * 0.8;
      fVar19 = *(float *)(unaff_RDI + 0x9950) * 0.8;
      fVar20 = *(float *)(unaff_RDI + 0x9940) * 0.8;
      fStack0000000000000040 = auVar24._0_4_;
      if (fVar23 <= fStack0000000000000040 && fStack0000000000000040 <= fVar21) {
        fStack0000000000000044 = auVar24._4_4_;
        if (fStack0000000000000044 <= fVar19 && fVar20 <= fStack0000000000000044) {
          fStack0000000000000050 = auVar22._0_4_;
          if (fStack0000000000000050 <= fVar21 && fVar23 <= fStack0000000000000050) {
            fStack0000000000000054 = auVar22._4_4_;
            if (fStack0000000000000054 <= fVar19 && fVar20 <= fStack0000000000000054) {
              for (lVar13 = (int64_t)(iVar2 + 1); lVar13 < 4; lVar13 = lVar13 + 1) {
                    // WARNING: Read-only address (ram,0x000180a400e0) is written
                    // WARNING: Read-only address (ram,0x000180a40110) is written
                *(int8_t *)
                 (((int64_t)*(int *)(unaff_RBX + 0x2b18) & unaff_R14) * 0xd8 +
                  *(int64_t *)(*(int64_t *)(unaff_RBX + 11000) + unaff_RBP * 8) + 0x90 + lVar13) =
                     0;
              }
            }
          }
        }
      }
    }
  }
  return iVar14 != 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address







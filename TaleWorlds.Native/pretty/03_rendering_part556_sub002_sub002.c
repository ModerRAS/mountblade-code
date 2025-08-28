#include "TaleWorlds.Native.Split.h"

// 03_rendering_part556_sub002_sub002.c - 1 个函数

// 函数: void FUN_180573874(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180573874(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  float *pfVar2;
  int32_t *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int32_t uVar7;
  char cVar8;
  int8_t uVar9;
  int8_t uVar10;
  int8_t uVar11;
  bool bVar12;
  bool bVar13;
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
  int32_t uVar25;
  int32_t uVar26;
  int iVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  int in_EAX;
  int iVar31;
  int iVar32;
  int *piVar33;
  int64_t lVar34;
  uint uVar35;
  int iVar36;
  char *pcVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  char *pcVar40;
  int64_t lVar41;
  uint64_t uVar42;
  uint64_t *puVar43;
  int64_t lVar44;
  int8_t *puVar45;
  int *unaff_RBP;
  int64_t lVar46;
  uint64_t uVar47;
  float *pfVar48;
  char *pcVar49;
  int64_t lVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  int64_t lVar54;
  uint64_t uVar55;
  char cVar56;
  int iVar57;
  int64_t in_R10;
  int64_t lVar58;
  uint64_t uVar59;
  int64_t unaff_R13;
  int64_t lVar60;
  int64_t unaff_R14;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  int8_t auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float unaff_XMM11_Da;
  float fVar75;
  float fVar76;
  uint64_t in_stack_00000060;
  char cStack0000000000000069;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  if (in_EAX == (int)unaff_R14) {
    cVar8 = *(char *)(unaff_R13 + 0xa8b4);
    FUN_18022a890(param_4,cVar8,*(uint64_t *)(in_R10 + 0x208));
    puVar43 = (uint64_t *)(*(int64_t *)(unaff_RBP + -0xc) + ((int64_t)cVar8 + 0x40) * 0x10);
    in_stack_00000070 = *puVar43;
    in_stack_00000078 = puVar43[1];
    if (*(float *)(unaff_R13 + 0xa830) < 0.0) {
      fVar76 = -1.0;
    }
    else {
      fVar76 = 1.0;
    }
    fVar61 = (float)atan2f(*(int32_t *)(unaff_R13 + 0x2560),
                           *(float *)(unaff_R13 + 0x2558) - *(float *)(unaff_R13 + 0x2550));
    if (1.5707964 <= fVar61) {
      fVar61 = 1.5707964;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar76 * fVar61);
  }
  fVar76 = *(float *)(unaff_R13 + 0x94);
  fVar61 = *(float *)(unaff_R13 + 0x90);
  fVar73 = 0.0;
  fVar75 = 0.0;
  unaff_RBP[-0xf] = 0;
  unaff_RBP[-0x11] = 0;
  bVar13 = fVar76 * fVar76 + fVar61 * fVar61 < 0.010000001;
  bVar12 = *(float *)(unaff_R13 + 0x25b8) == 0.0;
  lVar46 = 0;
  fVar76 = *(float *)(unaff_R13 + 0x95b0);
  iVar31 = 0;
  fVar61 = 0.0;
  unaff_RBP[0x14] = *(int *)(unaff_R13 + 0x95d4);
  unaff_RBP[0x40] = 0;
  unaff_RBP[0x41] = 0;
  unaff_RBP[0x42] = 0;
  unaff_RBP[0x43] = 0;
  unaff_RBP[0x2e] = 0;
  unaff_RBP[0x2f] = 0;
  unaff_RBP[0x48] = 0;
  unaff_RBP[0x49] = 0;
  unaff_RBP[0x4a] = 0;
  unaff_RBP[0x4b] = 0;
  unaff_RBP[0x30] = 0;
  unaff_RBP[0x31] = 0;
  unaff_RBP[0x44] = 0;
  unaff_RBP[0x45] = 0;
  unaff_RBP[0x46] = 0;
  unaff_RBP[0x47] = 0;
  unaff_RBP[0x32] = 0;
  unaff_RBP[0x33] = 0;
  unaff_RBP[0x4c] = 0;
  unaff_RBP[0x4d] = 0;
  unaff_RBP[0x4e] = 0;
  unaff_RBP[0x4f] = 0;
  unaff_RBP[0x34] = 0;
  unaff_RBP[0x35] = 0;
  unaff_RBP[-0x1d] = (int)fVar76;
  unaff_RBP[-0xe] = 0;
  unaff_RBP[-0xd] = 0;
  unaff_RBP[0x26] = 0;
  unaff_RBP[0x27] = 0;
  unaff_RBP[0x28] = 0;
  unaff_RBP[0x29] = 0;
  unaff_RBP[0x2a] = 0;
  unaff_RBP[0x2b] = 0;
  unaff_RBP[0x2c] = 0;
  unaff_RBP[0x2d] = 0;
  *unaff_RBP = 0;
  if (0 < *(int *)(unaff_R13 + 0x34c0)) {
    unaff_RBP[6] = 0;
    unaff_RBP[7] = 0;
    cStack0000000000000069 = in_stack_00000060._5_1_;
    do {
      fVar61 = 0.0;
      lVar46 = unaff_R13 + 0x34c8 + lVar46 * 0x1358;
      *(int64_t *)(unaff_RBP + -6) = lVar46;
      if (((0.0 < *(float *)(lVar46 + 4)) &&
          (*(float *)(lVar46 + 0x1270) <= 1e+30 && *(float *)(lVar46 + 0x1270) != 1e+30)) &&
         (*(float *)(lVar46 + 0x12d4) <= 1e+30 && *(float *)(lVar46 + 0x12d4) != 1e+30)) {
        cVar8 = *(char *)(lVar46 + 0x133e);
        fVar75 = *(float *)(lVar46 + 0x1338);
        if (cVar8 == '\0') {
          fVar73 = 0.0;
        }
        else {
          fVar73 = fVar75 * 0.05;
        }
        fVar63 = *(float *)(lVar46 + 0x1328);
        fVar64 = *(float *)(lVar46 + 0x1334);
        if (fVar73 + fVar63 < fVar64) {
          fVar73 = fVar64 - fVar63;
        }
        else {
          fVar73 = *(float *)(lVar46 + 0x1330);
        }
        if (0.0 < fVar75) {
          fVar73 = fVar73 / fVar75;
        }
        unaff_RBP[-0x1c] = (int)fVar73;
        fVar73 = fVar61;
        if (cVar8 != '\0') {
          fVar73 = fVar75 * 0.05;
        }
        in_stack_00000060._4_1_ = fVar64 <= fVar73 + fVar63;
        fVar75 = *(float *)(lVar46 + 0x1350);
        *(char *)(unaff_RBP + -0x1e) = in_stack_00000060._4_1_;
        if (*(char *)(lVar46 + 0x1356) == '\0') {
          fVar73 = 0.0;
        }
        else {
          fVar73 = fVar75 * 0.05;
        }
        fVar63 = *(float *)(lVar46 + 0x1340);
        fVar64 = *(float *)(lVar46 + 0x134c);
        if (fVar73 + fVar63 < fVar64) {
          fVar73 = fVar64 - fVar63;
        }
        else {
          fVar73 = *(float *)(lVar46 + 0x1348);
        }
        if (0.0 < fVar75) {
          fVar73 = fVar73 / fVar75;
        }
        if (*(char *)(lVar46 + 0x1356) != '\0') {
          fVar61 = fVar75 * 0.05;
        }
        puVar43 = &stack0x00000070;
        cStack0000000000000069 = fVar64 <= fVar61 + fVar63;
        *(char *)((int64_t)unaff_RBP + -0x77) = cStack0000000000000069;
        lVar50 = unaff_R14;
        do {
          func_0x00018005d390(puVar43);
          puVar43 = puVar43 + 1;
          lVar50 = lVar50 + -1;
        } while (lVar50 != 0);
        piVar33 = unaff_RBP + 0x18;
        do {
          func_0x00018005d390(piVar33);
          piVar33 = piVar33 + 2;
          unaff_R14 = unaff_R14 + -1;
        } while (unaff_R14 != 0);
        lVar50 = 0;
        *(int **)(unaff_RBP + -0x20) = unaff_RBP + 0x148;
        pcVar37 = (char *)(*(int64_t *)(unaff_RBP + -0x18) + 0xa8b5);
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *(char **)(unaff_RBP + -8) = pcVar37;
        pfVar52 = (float *)(lVar46 + 0x1268);
        unaff_RBP[-0x16] = 0;
        unaff_RBP[-0x15] = 0;
        fVar76 = 1.0 - fVar76;
        unaff_RBP[-10] = 2;
        unaff_RBP[-9] = 0;
        piVar33 = unaff_RBP + 4;
        lVar46 = lVar50;
        do {
          cVar8 = pcVar37[-1];
          cVar56 = *pcVar37;
          uVar55 = *(uint64_t *)(unaff_RBP + -0xc);
          *(uint64_t *)((int64_t)unaff_RBP + lVar50 + 0x20) = *(uint64_t *)(pfVar52 + 2);
          FUN_18022a890(uVar55,cVar8,*(uint64_t *)(*(int64_t *)(unaff_RBP + -0x14) + 0x208));
          lVar60 = *(int64_t *)(unaff_RBP + -0xc);
          pfVar48 = (float *)(lVar60 + ((int64_t)cVar8 + 0x40) * 0x10);
          fVar14 = *pfVar48;
          fVar15 = pfVar48[1];
          fVar16 = pfVar48[2];
          pfVar48 = *(float **)(unaff_RBP + 0x36);
          fVar61 = *pfVar48;
          fVar75 = pfVar48[1];
          fVar63 = pfVar48[2];
          FUN_18022a890(lVar60,cVar56,*(uint64_t *)(*(int64_t *)(unaff_RBP + -0x14) + 0x208));
          fVar64 = pfVar52[-2];
          fVar70 = pfVar52[-1];
          fVar72 = (float)unaff_RBP[-0x1d];
          lVar44 = *(int64_t *)(unaff_RBP + -0x16);
          fVar5 = *pfVar52;
          pfVar48 = (float *)(lVar60 + ((int64_t)cVar56 + 0x40) * 0x10);
          pfVar51 = *(float **)(unaff_RBP + 0x36);
          fVar67 = *pfVar48 - *pfVar51;
          fVar68 = pfVar48[1] - pfVar51[1];
          fVar74 = pfVar48[2] - pfVar51[2];
          fVar6 = *(float *)(*(int64_t *)(unaff_RBP + -6) + 4);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x100) =
               (fVar14 - fVar61) * fVar6 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x100);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x124) =
               fVar6 * fVar68 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x124);
          unaff_RBP[0x39] = (int)(fVar70 - fVar68);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x104) =
               (fVar15 - fVar75) * fVar6 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x104);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x108) =
               (fVar16 - fVar63) * fVar6 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x108);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x120) =
               fVar6 * fVar67 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x120);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x128) =
               fVar6 * fVar74 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x128);
          unaff_RBP[0x38] = (int)(fVar64 - fVar67);
          *(uint64_t *)((int64_t)unaff_RBP + lVar44 + 0x60) = *(uint64_t *)(unaff_RBP + 0x38);
          lVar60 = *(int64_t *)(unaff_RBP + -2);
          unaff_RBP[0x57] = 0x7f7fffff;
          fVar75 = *(float *)(lVar60 + 0x80);
          fVar63 = *(float *)(lVar60 + 0x84);
          fVar14 = *(float *)(lVar60 + 0x88);
          fVar15 = *(float *)(lVar60 + 0x8c);
          fVar16 = *(float *)(lVar60 + 0x70);
          fVar17 = *(float *)(lVar60 + 0x74);
          fVar18 = *(float *)(lVar60 + 0x78);
          fVar19 = *(float *)(lVar60 + 0x7c);
          fVar20 = *(float *)(lVar60 + 0x90);
          fVar21 = *(float *)(lVar60 + 0x94);
          fVar22 = *(float *)(lVar60 + 0x98);
          fVar23 = *(float *)(lVar60 + 0x9c);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0xb8) =
               (fVar67 * fVar72 + fVar76 * fVar64) * fVar6 +
               *(float *)((int64_t)unaff_RBP + lVar50 + 0xb8);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0xbc) =
               (fVar68 * fVar72 + fVar76 * fVar70) * fVar6 +
               *(float *)((int64_t)unaff_RBP + lVar50 + 0xbc);
          fVar62 = *(float *)(lVar60 + 0xa0);
          fVar65 = *(float *)(lVar60 + 0xa4);
          fVar24 = *(float *)(lVar60 + 0xa8);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0xc0) =
               (fVar74 * fVar72 + fVar76 * fVar5) * fVar6 +
               *(float *)((int64_t)unaff_RBP + lVar50 + 0xc0);
          fVar61 = (float)unaff_RBP[-0x1d];
          fVar71 = (fVar67 * fVar16 + fVar68 * fVar75 + fVar74 * fVar20 + fVar62) * fVar61;
          fVar69 = (fVar67 * fVar17 + fVar68 * fVar63 + fVar74 * fVar21 + fVar65) * fVar61;
          fVar62 = fVar76 * *(float *)((int64_t)unaff_RBP + lVar50 + 0x20) + fVar71;
          fVar72 = (float)unaff_RBP[0x57];
          fVar65 = fVar76 * *(float *)((int64_t)unaff_RBP + lVar50 + 0x24) + fVar69;
          fVar61 = fVar76 * *(float *)((int64_t)unaff_RBP + lVar50 + 0x28) +
                   (fVar67 * fVar18 + fVar68 * fVar14 + fVar74 * fVar22 + fVar24) * fVar61;
          uVar7 = *(int32_t *)(lVar60 + 0xa8);
          pfVar48 = (float *)((int64_t)unaff_RBP + lVar50 + 0x20);
          *pfVar48 = fVar62;
          pfVar48[1] = fVar65;
          pfVar48[2] = fVar61;
          pfVar48[3] = fVar72;
          unaff_RBP[0x54] = (int)fVar62;
          unaff_RBP[0x55] = (int)fVar65;
          unaff_RBP[0x56] = (int)fVar61;
          unaff_RBP[0x57] = (int)fVar72;
          *(int32_t *)((int64_t)unaff_RBP + lVar50 + 0x28) = uVar7;
          fVar61 = *(float *)(lVar60 + 0xa4);
          fVar72 = *(float *)(lVar60 + 0xa8);
          fVar62 = *(float *)(lVar60 + 0xac);
          unaff_RBP[0x50] =
               (int)(fVar64 * fVar16 + fVar70 * fVar75 + fVar5 * fVar20 + *(float *)(lVar60 + 0xa0))
          ;
          unaff_RBP[0x51] = (int)(fVar64 * fVar17 + fVar70 * fVar63 + fVar5 * fVar21 + fVar61);
          unaff_RBP[0x52] = (int)(fVar64 * fVar18 + fVar70 * fVar14 + fVar5 * fVar22 + fVar72);
          unaff_RBP[0x53] = (int)(fVar64 * fVar19 + fVar70 * fVar15 + fVar5 * fVar23 + fVar62);
          *(uint64_t *)((int64_t)&stack0x00000070 + lVar44) = *(uint64_t *)(unaff_RBP + 0x50);
          fVar61 = *(float *)((int64_t)&stack0x00000070 + lVar44 + 4);
          unaff_RBP[0x3a] = (int)(fVar76 * *(float *)((int64_t)&stack0x00000070 + lVar44) + fVar71)
          ;
          unaff_RBP[0x3b] = (int)(fVar76 * fVar61 + fVar69);
          fVar61 = *(float *)((int64_t)unaff_RBP + lVar50 + 0x98);
          *(uint64_t *)((int64_t)&stack0x00000070 + lVar44) = *(uint64_t *)(unaff_RBP + 0x3a);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x98) = fVar6 * fVar64 + fVar61;
          *(float *)((int64_t)unaff_RBP + lVar50 + 0x9c) =
               fVar6 * fVar70 + *(float *)((int64_t)unaff_RBP + lVar50 + 0x9c);
          *(float *)((int64_t)unaff_RBP + lVar50 + 0xa0) =
               fVar6 * fVar5 + *(float *)((int64_t)unaff_RBP + lVar50 + 0xa0);
          if ((bVar13) && (bVar12)) {
            uVar7 = *(int32_t *)(lVar60 + 0xa4);
            uVar25 = *(int32_t *)(lVar60 + 0xa8);
            uVar26 = *(int32_t *)(lVar60 + 0xac);
            uVar55 = 0;
            puVar3 = (int32_t *)((int64_t)unaff_RBP + lVar50 + 0x78);
            *puVar3 = *(int32_t *)(lVar60 + 0xa0);
            puVar3[1] = uVar7;
            puVar3[2] = uVar25;
            puVar3[3] = uVar26;
          }
          else {
            fVar61 = pfVar52[9];
            fVar75 = pfVar52[10];
            fVar63 = pfVar52[0xb];
            pfVar48 = (float *)((int64_t)unaff_RBP + lVar50 + 0x78);
            *pfVar48 = pfVar52[8];
            pfVar48[1] = fVar61;
            pfVar48[2] = fVar75;
            pfVar48[3] = fVar63;
            if (*(float *)((int64_t)unaff_RBP + lVar50 + 0x80) == 1e+30) {
              *(int32_t *)((int64_t)unaff_RBP + lVar50 + 0x80) = uVar7;
            }
            if (*(float *)((int64_t)unaff_RBP + lVar50 + 0x78) == 1e+30) {
              *(uint64_t *)((int64_t)unaff_RBP + lVar50 + 0x78) = *(uint64_t *)(lVar60 + 0xa0);
            }
            uVar55 = 1;
          }
          lVar60 = *(int64_t *)(unaff_RBP + -0x20);
          lVar44 = *(int64_t *)(unaff_RBP + -4);
          iVar31 = FUN_180579c90(*(uint64_t *)(unaff_RBP + 0x16),
                                 *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x2520),
                                 (int64_t)unaff_RBP + lVar46 + 0x78,uVar55,unaff_RBP[-0x12]);
          lVar58 = *(int64_t *)(unaff_RBP + -8);
          *(int64_t *)(unaff_RBP + -0x16) = *(int64_t *)(unaff_RBP + -0x16) + 8;
          *piVar33 = iVar31;
          pcVar37 = (char *)(lVar58 + 0x1f0);
          fVar70 = pfVar52[4];
          fVar72 = pfVar52[5];
          fVar63 = pfVar52[4];
          fVar64 = pfVar52[5];
          lVar46 = lVar46 + 0x10;
          fVar61 = *(float *)((int64_t)unaff_RBP + lVar50 + 0x28);
          piVar33 = piVar33 + 1;
          unaff_RBP[0x13] = 0x7f7fffff;
          lVar50 = lVar50 + 0x10;
          fVar75 = (float)unaff_RBP[0x13];
          *(int64_t *)(unaff_RBP + -0x20) = lVar60 + 0x20;
          *(int64_t *)(unaff_RBP + -4) = lVar44 + 0x700;
          *(char **)(unaff_RBP + -8) = pcVar37;
          pfVar52[4] = fVar63;
          pfVar52[5] = fVar64;
          pfVar52[6] = fVar61;
          pfVar52[7] = fVar75;
          pfVar52 = pfVar52 + 0x19;
          plVar1 = (int64_t *)(unaff_RBP + -10);
          *plVar1 = *plVar1 + -1;
          unaff_RBP[0x10] = (int)fVar70;
          unaff_RBP[0x11] = (int)fVar72;
          unaff_RBP[0x12] = (int)fVar61;
          unaff_RBP[0x13] = (int)fVar75;
        } while (*plVar1 != 0);
        if ((!bVar13) || (!bVar12)) {
          fVar76 = (float)unaff_RBP[-0x1c];
          uVar42 = 0;
          unaff_RBP[-0x20] = 0;
          unaff_RBP[-0x1f] = 0;
          uVar47 = uVar42;
          do {
            uVar39 = 0;
            iVar31 = (int)uVar47;
            uVar47 = 1 - uVar42;
            if (fVar76 <= fVar73) {
              uVar47 = uVar42;
            }
            piVar33 = unaff_RBP + 0x24;
            iVar32 = 1 - iVar31;
            if (fVar76 <= fVar73) {
              iVar32 = iVar31;
            }
            if (iVar31 != 0) {
              piVar33 = unaff_RBP + 0xe;
            }
            lVar46 = *(int64_t *)(unaff_RBP + -6);
            lVar50 = uVar47 * 100;
            fVar61 = (float)piVar33[uVar47 * -4];
            cVar8 = *(char *)(lVar50 + 0x1298 + lVar46);
            if (cVar8 == '\0') {
              fVar75 = (float)unaff_RBP[8];
              fVar63 = (float)unaff_RBP[9];
            }
            else {
              fVar75 = *(float *)(lVar50 + 0x1278 + lVar46);
              fVar63 = *(float *)(lVar50 + 0x127c + lVar46);
            }
            fVar63 = *(float *)((int64_t)&stack0x00000070 + uVar47 * 8 + 4) - fVar63;
            if (fVar63 * fVar63 +
                (*(float *)(&stack0x00000070 + uVar47) - fVar75) *
                (*(float *)(&stack0x00000070 + uVar47) - fVar75) <= 0.010000001) {
              if (cVar8 != '\0') {
                piVar4 = (int *)(lVar50 + 0x1278 + lVar46);
                iVar57 = piVar4[1];
                iVar36 = piVar4[2];
                iVar27 = piVar4[3];
                piVar33 = unaff_RBP + uVar47 * 4 + 8;
                *piVar33 = *piVar4;
                piVar33[1] = iVar57;
                piVar33[2] = iVar36;
                piVar33[3] = iVar27;
                iVar32 = FUN_180579c90(*(uint64_t *)(unaff_RBP + 0x16),
                                       *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x2520),
                                       unaff_RBP + (int64_t)iVar32 * 4 + 0x1e,
                                       CONCAT71((int7)((uint64_t)
                                                       (unaff_RBP + (int64_t)iVar32 * 0x20 + 0x58)
                                                      >> 8),1),unaff_RBP[-0x12]);
                uVar55 = *(uint64_t *)(unaff_RBP + uVar47 * 4 + 8);
                uVar28 = *(uint64_t *)(unaff_RBP + uVar47 * 4 + 8 + 2);
                unaff_RBP[uVar47 + 4] = iVar32;
                puVar43 = (uint64_t *)(lVar50 + 0x1278 + lVar46);
                *puVar43 = uVar55;
                puVar43[1] = uVar28;
              }
            }
            else {
              pfVar52 = (float *)(unaff_RBP + uVar47 * 0x20 + 0x108);
              piVar33 = unaff_RBP + uVar47 + 4;
              uVar42 = uVar39;
              if (fVar61 != *pfVar52) {
                uVar39 = 1;
                uVar42 = 1;
                iVar57 = -1;
                if (0.0 < fVar61 - *pfVar52) {
                  iVar57 = 1;
                }
                if (1 < *piVar33) {
                  do {
                    if ((fVar61 - pfVar52[uVar42]) * (float)iVar57 <= 0.0) break;
                    uVar35 = (int)uVar39 + 1;
                    uVar39 = (uint64_t)uVar35;
                    uVar42 = uVar42 + 1;
                  } while ((int)uVar35 < *piVar33);
                }
              }
              if ((*(byte *)(*(int64_t *)(unaff_RBP + -0x18) + 0x3424) & 8) == 0) {
                fVar75 = 0.6;
              }
              else {
                fVar75 = 0.4;
              }
              iVar57 = *piVar33;
              if ((int)uVar39 < iVar57) {
                pcVar37 = (char *)((int64_t)unaff_RBP + uVar42 + uVar47 * 0x20 + 0x520);
                pfVar52 = pfVar52 + uVar42;
                fVar63 = -1e+30;
                do {
                  iVar36 = (int)uVar39;
                  fVar64 = fVar63;
                  if (*pcVar37 != '\0') {
                    fVar70 = *pfVar52;
                    if (fVar75 < ABS(fVar70 - fVar61)) {
                      if (0.0 < fVar70 - fVar61) {
                        iVar36 = iVar36 + 1;
                        goto LAB_180574636;
                      }
                      fVar64 = fVar70;
                      if ((fVar63 != -1e+30) && (fVar64 = fVar63, 0.15 < ABS(fVar63 - fVar70)))
                      goto LAB_180574636;
                    }
                  }
                  uVar39 = (uint64_t)(iVar36 + 1U);
                  pcVar37 = pcVar37 + 1;
                  pfVar52 = pfVar52 + 1;
                  fVar63 = fVar64;
                } while ((int)(iVar36 + 1U) < iVar57);
                iVar36 = iVar57;
                if (fVar64 != -1e+30) {
LAB_180574636:
                  fVar61 = (float)unaff_RBP[uVar47 * 4 + 0x1f];
                  fVar70 = (float)unaff_RBP[uVar47 * 4 + 8] - (float)unaff_RBP[uVar47 * 4 + 0x1e];
                  fVar72 = (float)unaff_RBP[uVar47 * 4 + 9] - fVar61;
                  lVar46 = (int64_t)iVar36 + uVar47 * 0x20;
                  fVar75 = fVar72 * fVar72 + fVar70 * fVar70;
                  auVar66 = rsqrtss(ZEXT416((uint)fVar75),ZEXT416((uint)fVar75));
                  fVar63 = auVar66._0_4_;
                  fVar64 = 0.0001;
                  fVar63 = fVar63 * 0.5 * (3.0 - fVar75 * fVar63 * fVar63);
                  fVar75 = (float)unaff_RBP[lVar46 + 0x107];
                  if ((float)unaff_RBP[uVar47 * 4 + 10] <= fVar75 &&
                      fVar75 != (float)unaff_RBP[uVar47 * 4 + 10]) {
                    fVar64 = -0.0001;
                  }
                  fVar5 = (float)unaff_RBP[lVar46 + 199];
                  unaff_RBP[uVar47 * 4 + 10] = (int)fVar75;
                  unaff_RBP[0x3c] =
                       (int)((fVar64 + fVar5) * fVar70 * fVar63 +
                            (float)unaff_RBP[uVar47 * 4 + 0x1e]);
                  unaff_RBP[0x3d] = (int)((fVar64 + fVar5) * fVar72 * fVar63 + fVar61);
                  *(uint64_t *)(unaff_RBP + uVar47 * 4 + 8) = *(uint64_t *)(unaff_RBP + 0x3c);
                  iVar32 = FUN_180579c90(*(uint64_t *)(unaff_RBP + 0x16),
                                         *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x2520),
                                         unaff_RBP + (int64_t)iVar32 * 4 + 0x1e,
                                         CONCAT71((int7)((uint64_t)
                                                         (unaff_RBP + (int64_t)iVar32 * 0x20 + 0x58
                                                         ) >> 8),1),unaff_RBP[-0x12]);
                  uVar55 = *(uint64_t *)(unaff_RBP + uVar47 * 4 + 8);
                  uVar28 = *(uint64_t *)(unaff_RBP + uVar47 * 4 + 8 + 2);
                  *piVar33 = iVar32;
                  lVar46 = *(int64_t *)(unaff_RBP + -6);
                  puVar43 = (uint64_t *)(lVar50 + 0x1278 + lVar46);
                  *puVar43 = uVar55;
                  puVar43[1] = uVar28;
                  *(int8_t *)(lVar50 + 0x1298 + lVar46) = 1;
                  goto LAB_1805748b6;
                }
              }
              *(int8_t *)(lVar50 + 0x1298 + *(int64_t *)(unaff_RBP + -6)) = 0;
            }
LAB_1805748b6:
            uVar47 = (uint64_t)(iVar31 + 1U);
            uVar42 = *(int64_t *)(unaff_RBP + -0x20) + 1;
            *(uint64_t *)(unaff_RBP + -0x20) = uVar42;
          } while ((int)(iVar31 + 1U) < 2);
        }
        lVar46 = 0;
        fVar76 = (float)unaff_RBP[-0xf];
        unaff_RBP[-0x16] = 0;
        unaff_RBP[-0x15] = 0;
        lVar50 = *(int64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x2520);
        fVar61 = *(float *)(*(int64_t *)(unaff_RBP + -2) + 0xa8);
        unaff_RBP[-0x20] = 0;
        unaff_RBP[-0x1f] = 0;
        *(int **)(unaff_RBP + -8) = unaff_RBP + -0x1e;
        fVar73 = *(float *)(lVar50 + 0x3c);
        lVar60 = *(int64_t *)(unaff_RBP + -6);
        *(int64_t *)(unaff_RBP + -0x1c) = *(int64_t *)(unaff_RBP + -0x18) + 0xa9c8;
        unaff_RBP[-10] = 0;
        unaff_RBP[-9] = 0;
        *(uint64_t *)(unaff_RBP + -4) = ~(uint64_t)(unaff_RBP + 0x148);
        unaff_RBP[0x3e] = 0;
        unaff_RBP[0x3f] = 0;
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0;
        unaff_RBP[0x50] = 2;
        unaff_RBP[0x51] = 0;
        lVar41 = lVar46;
        lVar54 = lVar46;
        lVar44 = lVar46;
        lVar58 = lVar46;
        do {
          uVar42 = 1;
          fVar63 = *(float *)((int64_t)&stack0x00000070 + lVar41 + 4) -
                   *(float *)((int64_t)unaff_RBP + lVar54 + 0x7c);
          pfVar48 = (float *)((int64_t)unaff_RBP + lVar46 + 0x160);
          fVar64 = *(float *)((int64_t)&stack0x00000070 + lVar41) -
                   *(float *)((int64_t)unaff_RBP + lVar54 + 0x78);
          fVar75 = *(float *)((int64_t)unaff_RBP + lVar54 + 0x28);
          iVar31 = *(int *)((int64_t)unaff_RBP + lVar44 + 0x10);
          pfVar52 = (float *)((int64_t)unaff_RBP + lVar46 + 0x164);
          uVar35 = 1;
          fVar64 = SQRT(fVar63 * fVar63 + fVar64 * fVar64);
          fVar63 = *pfVar52 - *pfVar48;
          uVar47 = uVar42;
          if (fVar63 <= 0.0) {
            uVar47 = (uint64_t)((0.0 <= fVar63) - 1);
          }
          iVar32 = (int)uVar47;
          pcVar37 = (char *)((int64_t)unaff_RBP + lVar58 + 0x520);
          pfVar51 = (float *)((int64_t)unaff_RBP + lVar46 + 0x324);
          cVar8 = *pcVar37;
          uVar39 = uVar42;
          cVar56 = cVar8;
          if (*pfVar51 <= fVar64 && fVar64 != *pfVar51) {
            lVar44 = (int64_t)*(int *)((int64_t)unaff_RBP + *(int64_t *)(unaff_RBP + 2) + 0x10);
            uVar38 = uVar42;
            uVar59 = uVar42;
            do {
              iVar32 = (int)uVar47;
              uVar35 = (uint)uVar59;
              uVar39 = uVar38;
              if (lVar44 <= (int64_t)uVar38) break;
              uVar35 = uVar35 + 1;
              uVar59 = (uint64_t)uVar35;
              uVar39 = uVar38 + 1;
              pfVar53 = pfVar52 + 1;
              if ((int64_t)uVar39 < lVar44) {
                if ((pcVar37[uVar39] == '\0') && (pcVar37[uVar38] == '\0')) {
                  cVar56 = '\0';
                }
                else {
                  cVar56 = '\x01';
                }
                if ((*pfVar53 - *pfVar52 != 0.0) && (uVar47 = 0xffffffff, 0.0 < *pfVar53 - *pfVar52)
                   ) {
                  uVar47 = uVar42;
                }
              }
              iVar32 = (int)uVar47;
              pfVar2 = (float *)((int64_t)pfVar53 +
                                (int64_t)unaff_RBP + (lVar46 - (int64_t)pfVar48) + 800);
              uVar38 = uVar39;
              pfVar52 = pfVar53;
            } while (*pfVar2 <= fVar64 && fVar64 != *pfVar2);
            lVar46 = *(int64_t *)(unaff_RBP + -10);
          }
          lVar44 = uVar39 - 1;
          if (*(uint *)((int64_t)unaff_RBP + *(int64_t *)(unaff_RBP + 2) + 0x10) != uVar35) {
            lVar46 = lVar46 + lVar44 * 4;
            fVar75 = *(float *)((int64_t)unaff_RBP + lVar46 + 800);
            fVar75 = ((pfVar48[uVar39] - pfVar48[lVar44]) * (fVar64 - fVar75)) /
                     (*(float *)((int64_t)unaff_RBP + lVar46 + 0x324) - fVar75) + pfVar48[lVar44];
          }
          fVar63 = fVar73;
          if (cVar56 != '\0') {
            fVar63 = *(float *)(lVar50 + 0x20) * 0.5 + fVar73;
          }
          if (fVar63 < ABS(fVar61 - fVar75)) {
LAB_180574cc4:
            lVar44 = *(int64_t *)(unaff_RBP + 2);
            lVar58 = *(int64_t *)(unaff_RBP + -0x16);
            pfVar52 = *(float **)(unaff_RBP + -0x1c);
            pcVar37 = *(char **)(unaff_RBP + -8);
            *(int32_t *)((int64_t)unaff_RBP + lVar44 + -0x68) = 0;
          }
          else {
            if (**(char **)(unaff_RBP + -8) != '\0') {
              fVar63 = fVar73;
              if (cVar8 != '\0') {
                fVar63 = *(float *)(lVar50 + 0x20) * 0.5 + fVar73;
              }
              if (fVar63 < ABS(fVar61 - *(float *)((int64_t)unaff_RBP +
                                                  *(int64_t *)(unaff_RBP + -10) + 0x420)))
              goto LAB_180574cc4;
            }
            fVar63 = *(float *)(lVar50 + 0x20);
            if (1 < iVar31) {
              iVar57 = -3;
              pcVar49 = pcVar37;
              do {
                pcVar49 = pcVar49 + 1;
                iVar36 = 0;
                if (0 < iVar57) {
                  iVar36 = iVar57;
                }
                pcVar40 = pcVar49 + *(int64_t *)(unaff_RBP + -4);
                if (iVar36 <= iVar57 + 3) {
                  pfVar52 = pfVar51 + 0x3f;
                  lVar60 = *(int64_t *)(unaff_RBP + -6);
                  do {
                    fVar64 = *pfVar51 - pfVar52[-0x40];
                    if ((*pcVar49 != '\0') || (fVar70 = fVar73, pcVar40[(int64_t)pcVar37] != '\0'))
                    {
                      fVar70 = fVar63 * 0.5 + fVar73;
                    }
                    fVar70 = fVar70 - fVar63 * 0.1;
                    if (fVar64 < fVar63) {
                      fVar70 = fVar70 - SQRT(fVar63 * fVar63 - fVar64 * fVar64);
                    }
                    if (fVar70 < ABS(pfVar51[0x40] - *pfVar52)) goto LAB_180574cc4;
                    pcVar40 = pcVar40 + -1;
                    pfVar52 = pfVar52 + -1;
                  } while ((int64_t)iVar36 <= (int64_t)pcVar40);
                }
                iVar57 = iVar57 + 1;
                uVar42 = uVar42 + 1;
                pfVar51 = pfVar51 + 1;
              } while ((int64_t)uVar42 < (int64_t)iVar31);
            }
            lVar44 = *(int64_t *)(unaff_RBP + 2);
            lVar58 = *(int64_t *)(unaff_RBP + -0x16);
            pfVar52 = *(float **)(unaff_RBP + -0x1c);
            iVar57 = 0;
            if (!bVar13) {
              iVar57 = iVar32;
            }
            pcVar37 = *(char **)(unaff_RBP + -8);
            *(float *)((int64_t)unaff_RBP + lVar44 + -0x68) = fVar75 - fVar61;
            if ((*pcVar37 == '\0') &&
               (*(char *)((int64_t)unaff_RBP + lVar58 + (int64_t)iVar31 + 0x51f) != '\0')) {
              fVar63 = *pfVar52;
              if (iVar57 < 1) {
                fVar64 = fVar75;
                if ((iVar57 < 0) && (fVar64 = fVar63, fVar75 <= fVar63)) {
                  fVar64 = fVar75;
                }
                *(float *)((int64_t)unaff_RBP + lVar44 + -0x68) = fVar64 - fVar61;
              }
              else {
                if (fVar63 <= fVar75) {
                  fVar63 = fVar75;
                }
                *(float *)((int64_t)unaff_RBP + lVar44 + -0x68) = fVar63 - fVar61;
              }
            }
          }
          lVar34 = 0;
          lVar41 = *(int64_t *)(unaff_RBP + -0x20);
          fVar75 = (float)unaff_RBP[-0x11];
          if (0.0 < (float)unaff_RBP[0x14]) {
            fVar63 = (float)unaff_RBP[0x14] * *(float *)(lVar60 + 4);
            fVar75 = fVar75 + fVar63 * *(float *)((int64_t)unaff_RBP + lVar41 + 100) * 0.075;
            fVar76 = fVar76 + fVar63 * *(float *)((int64_t)unaff_RBP + lVar41 + 0x60) * 0.075;
            unaff_RBP[-0x11] = (int)fVar75;
          }
          lVar54 = *(int64_t *)(unaff_RBP + 0x3e) + 0x10;
          *(int64_t *)(unaff_RBP + -4) = *(int64_t *)(unaff_RBP + -4) + -0x20;
          lVar46 = *(int64_t *)(unaff_RBP + -10) + 0x80;
          lVar58 = lVar58 + 0x20;
          *(int64_t *)(unaff_RBP + 0x3e) = lVar54;
          *(int64_t *)(unaff_RBP + -10) = lVar46;
          lVar44 = lVar44 + 4;
          *(char **)(unaff_RBP + -8) = pcVar37 + 1;
          lVar41 = lVar41 + 8;
          *(int64_t *)(unaff_RBP + -0x16) = lVar58;
          plVar1 = (int64_t *)(unaff_RBP + 0x50);
          *plVar1 = *plVar1 + -1;
          *(float **)(unaff_RBP + -0x1c) = pfVar52 + 0x7c;
          *(int64_t *)(unaff_RBP + 2) = lVar44;
          *(int64_t *)(unaff_RBP + -0x20) = lVar41;
        } while (*plVar1 != 0);
        unaff_XMM11_Da = (float)unaff_RBP[-0x10];
        lVar50 = 4;
        unaff_R13 = *(int64_t *)(unaff_RBP + -0x18);
        fVar61 = (float)unaff_RBP[-0x1a];
        fVar73 = (float)unaff_RBP[-0x19];
        fVar63 = (float)unaff_RBP[0x30] * unaff_XMM11_Da + fVar61;
        unaff_RBP[-0xf] = (int)fVar76;
        fVar76 = (float)unaff_RBP[0x34] * unaff_XMM11_Da + fVar73;
        lVar46 = 0x10;
        if (fVar76 < fVar63) {
          lVar50 = 0;
          lVar46 = lVar34;
        }
        fVar64 = *(float *)((int64_t)unaff_RBP + lVar46 + 0xc0);
        if (fVar76 < fVar63) {
          lVar34 = 4;
        }
        fVar76 = *(float *)((int64_t)unaff_RBP + lVar34 + -0x68);
        if (*(uint *)((int64_t)*(int *)(unaff_R13 + 0x34c0) * 0x1358 + 0x217c + unaff_R13) < 2) {
          fVar63 = 0.5;
        }
        else {
          fVar63 = 0.2;
        }
        if (fVar63 * unaff_XMM11_Da <
            (fVar64 * unaff_XMM11_Da + *(float *)((int64_t)unaff_RBP + lVar50 + -0x68)) - fVar76) {
          *(float *)((int64_t)unaff_RBP + lVar50 + -0x68) =
               (fVar63 - fVar64) * unaff_XMM11_Da + fVar76;
          fVar73 = (float)unaff_RBP[-0x19];
          fVar61 = (float)unaff_RBP[-0x1a];
        }
        unaff_R14 = 2;
        fVar76 = (float)unaff_RBP[-0x1d];
        iVar31 = *unaff_RBP;
        fVar63 = *(float *)(*(int64_t *)(unaff_RBP + -6) + 4);
        unaff_RBP[-0xe] =
             (int)((float)unaff_RBP[-0xe] + fVar61 * *(float *)(*(int64_t *)(unaff_RBP + -6) + 4));
        unaff_RBP[-0xd] = (int)((float)unaff_RBP[-0xd] + fVar73 * fVar63);
      }
      iVar31 = iVar31 + 1;
      lVar46 = *(int64_t *)(unaff_RBP + 6) + 1;
      *unaff_RBP = iVar31;
      *(int64_t *)(unaff_RBP + 6) = lVar46;
    } while (iVar31 < *(int *)(unaff_R13 + 0x34c0));
    fVar73 = (float)unaff_RBP[-0xf];
    fVar61 = (float)unaff_RBP[-0xe];
    param_1 = *(int64_t *)(unaff_RBP + -2);
    param_4 = *(int64_t *)(unaff_RBP + -0xc);
    in_R10 = *(int64_t *)(unaff_RBP + -0x14);
    in_stack_00000060._5_1_ = cStack0000000000000069;
  }
  fVar64 = 1e+30;
  fVar76 = *(float *)(param_1 + 0xa8);
  fVar63 = 5.0;
  if ((in_stack_00000060._4_1_ == '\0') || ((bVar13 && (bVar12)))) {
    fVar70 = 4.0;
  }
  else {
    fVar70 = 5.0;
  }
  if ((char)unaff_RBP[0x19e] == '\0') {
    fVar70 = fVar70 * *(float *)(in_R10 + 0x38);
  }
  else {
    fVar70 = 1e+30;
  }
  fVar61 = (fVar76 + fVar61) - *(float *)(unaff_R13 + 0xa9c8);
  if (fVar70 < ABS(fVar61)) {
    if (fVar61 < 0.0) {
      fVar61 = -1.0;
    }
    else {
      fVar61 = 1.0;
    }
    fVar61 = fVar70 * fVar61;
  }
  fVar70 = (float)unaff_RBP[1];
  fVar61 = ((fVar61 + *(float *)(unaff_R13 + 0xa9c8)) - fVar76) * fVar70;
  if (-1.0 <= fVar61) {
    if (1.0 <= fVar61) {
      fVar61 = 1.0;
    }
  }
  else {
    fVar61 = -1.0;
  }
  fVar72 = *(float *)(unaff_R13 + 0xabb8);
  unaff_RBP[6] = (int)fVar61;
  if ((in_stack_00000060._5_1_ == '\0') || ((bVar13 && (bVar12)))) {
    fVar63 = 4.0;
  }
  if ((char)unaff_RBP[0x19e] == '\0') {
    fVar64 = fVar63 * *(float *)(in_R10 + 0x38);
  }
  fVar63 = (fVar76 + (float)unaff_RBP[-0xd]) - fVar72;
  if (fVar64 < ABS(fVar63)) {
    iVar31 = 1;
    if (fVar63 < 0.0) {
      iVar31 = -1;
    }
    fVar63 = (float)iVar31 * fVar64;
  }
  fVar64 = (float)unaff_RBP[1];
  fVar63 = ((fVar63 + fVar72) - fVar76) * fVar64;
  fVar76 = -1.0;
  if ((-1.0 <= fVar63) && (fVar76 = fVar63, 1.0 <= fVar63)) {
    fVar76 = 1.0;
  }
  fVar63 = *(float *)(param_4 + 0x1020);
  fVar72 = *(float *)(param_4 + 0x1024);
  in_stack_00000070 = *(uint64_t *)(param_4 + 0x1020);
  fVar5 = *(float *)(param_4 + 0x1028);
  uVar7 = *(int32_t *)(param_4 + 0x102c);
  in_stack_00000078 = *(uint64_t *)(param_4 + 0x1028);
  pfVar52 = (float *)(unaff_RBP + 6);
  *(uint64_t *)(param_4 + 0x800) =
       *(uint64_t *)(param_4 + 0x800) | *(uint64_t *)(param_4 + 0x810);
  puVar45 = (int8_t *)(unaff_R13 + 0xa8b5);
  unaff_RBP[0x13] = 0x7f7fffff;
  lVar46 = 0;
  unaff_RBP[7] = (int)fVar76;
  if (fVar61 <= fVar76) {
    fVar76 = fVar61;
  }
  *(float *)(param_4 + 0x1020) = fVar63 + fVar73 * fVar70 * fVar64;
  *(float *)(param_4 + 0x1024) = fVar72 + fVar75 * fVar70 * fVar64;
  *(float *)(param_4 + 0x1028) =
       fVar76 * (1.0 / unaff_XMM11_Da) + fVar5 +
       SQRT(fVar75 * fVar75 + fVar73 * fVar73) * -2.2 * fVar70 * fVar64;
  *(int32_t *)(param_4 + 0x102c) = uVar7;
  *(float *)(in_R10 + 0x180) = fVar76;
  *(float *)(unaff_R13 + 0x2610) = fVar76 + *(float *)(param_1 + 0xa8);
  fVar76 = (float)unaff_RBP[-0x1d];
  fVar61 = 1.0 - fVar76;
  do {
    fVar75 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x104);
    piVar33 = unaff_RBP + 0x80;
    fVar73 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x100);
    lVar50 = 8;
    fVar63 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x108);
    fVar64 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x98);
    fVar70 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x120);
    fVar72 = *pfVar52;
    uVar9 = puVar45[-1];
    uVar10 = *puVar45;
    uVar11 = *(int8_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x2607);
    fVar5 = *(float *)((int64_t)unaff_RBP + lVar46 + 0xa0);
    fVar6 = *(float *)((int64_t)unaff_RBP + lVar46 + 0x128);
    unaff_RBP[0x11] =
         (int)(((*(float *)((int64_t)unaff_RBP + lVar46 + 0x9c) -
                *(float *)((int64_t)unaff_RBP + lVar46 + 0x124)) + fVar75) * fVar61 +
              fVar75 * fVar76);
    unaff_RBP[0x10] = (int)(((fVar64 - fVar70) + fVar73) * fVar61 + fVar73 * fVar76);
    unaff_RBP[0x12] =
         (int)(((fVar5 - fVar6) + fVar63) * fVar61 + fVar63 * fVar76 +
              fVar72 * (1.0 / unaff_XMM11_Da));
    do {
      func_0x000180074f10(piVar33);
      piVar33 = piVar33 + 4;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
    lVar50 = 8;
    do {
      func_0x000180074f10();
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
    uVar55 = *(uint64_t *)(unaff_RBP + 0x10);
    uVar28 = *(uint64_t *)(unaff_RBP + 0x12);
    lVar46 = lVar46 + 0x10;
    puVar45[1] = uVar11;
    uVar29 = *(uint64_t *)(unaff_RBP + 0xc0);
    uVar30 = *(uint64_t *)(unaff_RBP + 0xc2);
    pfVar52 = pfVar52 + 1;
    iVar31 = unaff_RBP[0xc5];
    fVar76 = (float)unaff_RBP[-0x1d];
    *(uint64_t *)(puVar45 + -0x95) = uVar55;
    *(uint64_t *)(puVar45 + -0x8d) = uVar28;
    uVar55 = *(uint64_t *)(unaff_RBP + 0x60);
    uVar28 = *(uint64_t *)(unaff_RBP + 0x62);
    *(uint64_t *)(puVar45 + 0x10b) = uVar29;
    *(uint64_t *)(puVar45 + 0x113) = uVar30;
    puVar45[0x11f] = (char)iVar31;
    uVar29 = *(uint64_t *)(unaff_RBP + 0x5e);
    lVar50 = *(int64_t *)(unaff_RBP + -2);
    *(uint64_t *)(puVar45 + -0x85) = *(uint64_t *)(unaff_RBP + 0x5c);
    *(uint64_t *)(puVar45 + -0x7d) = uVar29;
    uVar29 = *(uint64_t *)(unaff_RBP + 100);
    uVar30 = *(uint64_t *)(unaff_RBP + 0x66);
    *(uint64_t *)(puVar45 + -0x75) = uVar55;
    *(uint64_t *)(puVar45 + -0x6d) = uVar28;
    uVar55 = *(uint64_t *)(unaff_RBP + 0x68);
    uVar28 = *(uint64_t *)(unaff_RBP + 0x6a);
    *(uint64_t *)(puVar45 + -0x65) = uVar29;
    *(uint64_t *)(puVar45 + -0x5d) = uVar30;
    uVar29 = *(uint64_t *)(unaff_RBP + 0x6c);
    uVar30 = *(uint64_t *)(unaff_RBP + 0x6e);
    *(uint64_t *)(puVar45 + -0x55) = uVar55;
    *(uint64_t *)(puVar45 + -0x4d) = uVar28;
    uVar55 = *(uint64_t *)(unaff_RBP + 0x70);
    uVar28 = *(uint64_t *)(unaff_RBP + 0x72);
    *(uint64_t *)(puVar45 + -0x45) = uVar29;
    *(uint64_t *)(puVar45 + -0x3d) = uVar30;
    iVar31 = unaff_RBP[0x74];
    iVar32 = unaff_RBP[0x75];
    iVar57 = unaff_RBP[0x76];
    iVar36 = unaff_RBP[0x77];
    *(uint64_t *)(puVar45 + -0x35) = uVar55;
    *(uint64_t *)(puVar45 + -0x2d) = uVar28;
    uVar55 = *(uint64_t *)(unaff_RBP + 0x78);
    uVar28 = *(uint64_t *)(unaff_RBP + 0x7a);
    *(int *)(puVar45 + -0x25) = iVar31;
    *(int *)(puVar45 + -0x21) = iVar32;
    *(int *)(puVar45 + -0x1d) = iVar57;
    *(int *)(puVar45 + -0x19) = iVar36;
    *(uint64_t *)(puVar45 + -0x15) = uVar55;
    *(uint64_t *)(puVar45 + -0xd) = uVar28;
    *(int32_t *)(puVar45 + -5) = 0;
    puVar45[-1] = uVar9;
    *puVar45 = uVar10;
    *(int32_t *)(puVar45 + 0x11b) = 1;
    *(int32_t *)(puVar45 + 0x123) = 0;
    puVar45[0x13b] = 1;
    *(float *)(puVar45 + 0x113) = fVar72 + *(float *)(lVar50 + 0xa8);
    puVar45 = puVar45 + 0x1f0;
  } while (lVar46 < 0x20);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x158) ^ (uint64_t)&stack0x00000000);
}








#include "TaleWorlds.Native.Split.h"

// 99_part_05_part028.c - 4 个函数

// 函数: void FUN_1802e94a0(longlong param_1,longlong *param_2,ulonglong *param_3,float *param_4)
void FUN_1802e94a0(longlong param_1,longlong *param_2,ulonglong *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  int iStack_1c8;
  longlong lStack_1b8;
  longlong *plStack_198;
  longlong *plStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  int8_t uStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong alStack_108 [3];
  int32_t uStack_f0;
  uint64_t uStack_e8;
  
  uStack_e8 = 0xfffffffffffffffe;
  fVar20 = *param_4;
  fVar22 = param_4[1];
  fVar24 = param_4[2];
  fVar2 = param_4[3];
  fVar21 = param_4[4];
  fVar23 = param_4[5];
  fVar25 = param_4[6];
  fVar55 = param_4[7];
  fVar16 = param_4[8];
  fVar17 = param_4[9];
  fVar18 = param_4[10];
  fVar19 = param_4[0xb];
  fVar26 = *(float *)(param_1 + 0x34);
  fVar27 = *(float *)(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x30);
  fVar56 = fVar1 * fVar20 + fVar26 * fVar21 + fVar27 * fVar16;
  fVar57 = fVar1 * fVar22 + fVar26 * fVar23 + fVar27 * fVar17;
  fVar58 = fVar1 * fVar24 + fVar26 * fVar25 + fVar27 * fVar18;
  fVar59 = fVar1 * fVar2 + fVar26 * fVar55 + fVar27 * fVar19;
  fVar26 = *(float *)(param_1 + 0x44);
  fVar27 = *(float *)(param_1 + 0x48);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar48 = fVar1 * fVar20 + fVar26 * fVar21 + fVar27 * fVar16;
  fVar50 = fVar1 * fVar22 + fVar26 * fVar23 + fVar27 * fVar17;
  fVar52 = fVar1 * fVar24 + fVar26 * fVar25 + fVar27 * fVar18;
  fVar54 = fVar1 * fVar2 + fVar26 * fVar55 + fVar27 * fVar19;
  fVar26 = *(float *)(param_1 + 0x54);
  fVar27 = *(float *)(param_1 + 0x58);
  fVar1 = *(float *)(param_1 + 0x50);
  fVar31 = fVar1 * fVar20 + fVar26 * fVar21 + fVar27 * fVar16;
  fVar33 = fVar1 * fVar22 + fVar26 * fVar23 + fVar27 * fVar17;
  fVar35 = fVar1 * fVar24 + fVar26 * fVar25 + fVar27 * fVar18;
  fVar37 = fVar1 * fVar2 + fVar26 * fVar55 + fVar27 * fVar19;
  fVar26 = *(float *)(param_1 + 100);
  fVar27 = *(float *)(param_1 + 0x68);
  fVar1 = *(float *)(param_1 + 0x60);
  fVar20 = fVar1 * fVar20 + fVar26 * fVar21 + fVar27 * fVar16 + param_4[0xc];
  fVar22 = fVar1 * fVar22 + fVar26 * fVar23 + fVar27 * fVar17 + param_4[0xd];
  fVar24 = fVar1 * fVar24 + fVar26 * fVar25 + fVar27 * fVar18 + param_4[0xe];
  fVar26 = fVar1 * fVar2 + fVar26 * fVar55 + fVar27 * fVar19 + param_4[0xf];
  fStack_128 = fVar48;
  fStack_124 = fVar50;
  fStack_120 = fVar52;
  fStack_11c = fVar54;
  fStack_118 = fVar31;
  fStack_114 = fVar33;
  fStack_110 = fVar35;
  fStack_10c = fVar37;
  if ((*(char *)(param_4 + 0x11) == '\0') || ((*(byte *)(param_1 + 0x2c4) & 2) == 0)) {
    bVar3 = false;
    iStack_1c8 = 0;
    lVar15 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf8) - lVar15 >> 3 != 0) {
      lStack_1b8 = 0;
      do {
        bVar4 = (**(code **)(**(longlong **)(lStack_1b8 + lVar15) + 0x98))();
        if ((((1 << (bVar4 & 0x1f) == 0x81) ||
             (iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) +
                                   0x98))(), iVar14 == 4)) ||
            (iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) +
                                  0x98))(), iVar14 == 1)) ||
           (iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) + 0x98
                                 ))(), iVar14 == 3)) {
          iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) + 0x98))
                             ();
          if (((iVar14 != 4) &&
              (iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) +
                                    0x98))(), iVar14 != 1)) &&
             (iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) +
                                   0x98))(), iVar14 != 7)) {
            iVar14 = (**(code **)(**(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) + 0x98
                                 ))();
            if (iVar14 == 3) {
              plVar13 = *(longlong **)
                         (*(longlong *)(lStack_1b8 + *(longlong *)(param_1 + 0xf0)) + 0x48);
            }
            else {
              plVar13 = *(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0));
            }
            plVar12 = (longlong *)plVar13[7];
            if (plVar12 < (longlong *)plVar13[8]) {
              do {
                if (*(code **)(*plVar13 + 0x158) == (code *)&UNK_18027d980) {
                  pfVar9 = (float *)(plVar13 + 0x66);
                }
                else {
                  pfVar9 = (float *)(**(code **)(*plVar13 + 0x158))(plVar13);
                }
                fVar27 = pfVar9[1];
                fVar1 = pfVar9[2];
                fVar2 = *pfVar9;
                fVar38 = fVar2 * fVar56 + fVar27 * fVar48 + fVar1 * fVar31;
                fVar39 = fVar2 * fVar57 + fVar27 * fVar50 + fVar1 * fVar33;
                fVar40 = fVar2 * fVar58 + fVar27 * fVar52 + fVar1 * fVar35;
                fVar41 = fVar2 * fVar59 + fVar27 * fVar54 + fVar1 * fVar37;
                fVar27 = pfVar9[5];
                fVar1 = pfVar9[6];
                fVar2 = pfVar9[4];
                fVar19 = fVar2 * fVar56 + fVar27 * fVar48 + fVar1 * fVar31;
                fVar32 = fVar2 * fVar57 + fVar27 * fVar50 + fVar1 * fVar33;
                fVar34 = fVar2 * fVar58 + fVar27 * fVar52 + fVar1 * fVar35;
                fVar36 = fVar2 * fVar59 + fVar27 * fVar54 + fVar1 * fVar37;
                fVar27 = pfVar9[9];
                fVar1 = pfVar9[10];
                fVar2 = pfVar9[8];
                fVar55 = fVar2 * fVar56 + fVar27 * fVar48 + fVar1 * fVar31;
                fVar16 = fVar2 * fVar57 + fVar27 * fVar50 + fVar1 * fVar33;
                fVar17 = fVar2 * fVar58 + fVar27 * fVar52 + fVar1 * fVar35;
                fVar18 = fVar2 * fVar59 + fVar27 * fVar54 + fVar1 * fVar37;
                fVar27 = pfVar9[0xd];
                fVar1 = pfVar9[0xe];
                fVar2 = pfVar9[0xc];
                lVar15 = *plVar12;
                fVar21 = *(float *)(lVar15 + 0x124);
                fVar23 = *(float *)(lVar15 + 0x128);
                fVar25 = *(float *)(lVar15 + 0x120);
                fVar42 = fVar25 * fVar38 + fVar21 * fVar19 + fVar23 * fVar55;
                fVar43 = fVar25 * fVar39 + fVar21 * fVar32 + fVar23 * fVar16;
                fVar44 = fVar25 * fVar40 + fVar21 * fVar34 + fVar23 * fVar17;
                fVar45 = fVar25 * fVar41 + fVar21 * fVar36 + fVar23 * fVar18;
                fVar21 = *(float *)(lVar15 + 0x134);
                fVar23 = *(float *)(lVar15 + 0x138);
                fVar25 = *(float *)(lVar15 + 0x130);
                fVar46 = fVar25 * fVar38 + fVar21 * fVar19 + fVar23 * fVar55;
                fVar47 = fVar25 * fVar39 + fVar21 * fVar32 + fVar23 * fVar16;
                fVar49 = fVar25 * fVar40 + fVar21 * fVar34 + fVar23 * fVar17;
                fVar51 = fVar25 * fVar41 + fVar21 * fVar36 + fVar23 * fVar18;
                fVar21 = *(float *)(lVar15 + 0x144);
                fVar23 = *(float *)(lVar15 + 0x148);
                fVar25 = *(float *)(lVar15 + 0x140);
                fVar53 = fVar25 * fVar38 + fVar21 * fVar19 + fVar23 * fVar55;
                fVar28 = fVar25 * fVar39 + fVar21 * fVar32 + fVar23 * fVar16;
                fVar29 = fVar25 * fVar40 + fVar21 * fVar34 + fVar23 * fVar17;
                fVar30 = fVar25 * fVar41 + fVar21 * fVar36 + fVar23 * fVar18;
                fVar21 = *(float *)(lVar15 + 0x154);
                fVar23 = *(float *)(lVar15 + 0x158);
                fVar25 = *(float *)(lVar15 + 0x150);
                fVar55 = fVar25 * fVar38 + fVar21 * fVar19 + fVar23 * fVar55 +
                         fVar2 * fVar56 + fVar27 * fVar48 + fVar1 * fVar31 + fVar20;
                fVar16 = fVar25 * fVar39 + fVar21 * fVar32 + fVar23 * fVar16 +
                         fVar2 * fVar57 + fVar27 * fVar50 + fVar1 * fVar33 + fVar22;
                fVar17 = fVar25 * fVar40 + fVar21 * fVar34 + fVar23 * fVar17 +
                         fVar2 * fVar58 + fVar27 * fVar52 + fVar1 * fVar35 + fVar24;
                fVar27 = fVar25 * fVar41 + fVar21 * fVar36 + fVar23 * fVar18 +
                         fVar2 * fVar59 + fVar27 * fVar54 + fVar1 * fVar37 + fVar26;
                plVar11 = (longlong *)param_2[1];
                if (plVar11 < (longlong *)param_2[2]) {
                  param_2[1] = (longlong)(plVar11 + 1);
                  *plVar11 = lVar15;
                }
                else {
                  plVar8 = (longlong *)*param_2;
                  lVar7 = (longlong)plVar11 - (longlong)plVar8 >> 3;
                  if (lVar7 == 0) {
                    lVar7 = 1;
LAB_1802e998b:
                    plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,(char)param_2[3]);
                    plVar11 = (longlong *)param_2[1];
                    plVar8 = (longlong *)*param_2;
                  }
                  else {
                    lVar7 = lVar7 * 2;
                    if (lVar7 != 0) goto LAB_1802e998b;
                    plVar5 = (longlong *)0x0;
                  }
                  if (plVar8 != plVar11) {
                    // WARNING: Subroutine does not return
                    memmove(plVar5,plVar8,(longlong)plVar11 - (longlong)plVar8);
                  }
                  *plVar5 = lVar15;
                  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *param_2 = (longlong)plVar5;
                  param_2[1] = (longlong)(plVar5 + 1);
                  param_2[2] = (longlong)(plVar5 + lVar7);
                }
                pfVar9 = (float *)param_3[1];
                if (pfVar9 < (float *)param_3[2]) {
                  param_3[1] = (ulonglong)(pfVar9 + 0x10);
                  *pfVar9 = fVar42;
                  pfVar9[1] = fVar43;
                  pfVar9[2] = fVar44;
                  pfVar9[3] = fVar45;
                  pfVar9[4] = fVar46;
                  pfVar9[5] = fVar47;
                  pfVar9[6] = fVar49;
                  pfVar9[7] = fVar51;
                  pfVar9[8] = fVar53;
                  pfVar9[9] = fVar28;
                  pfVar9[10] = fVar29;
                  pfVar9[0xb] = fVar30;
                  pfVar9[0xc] = fVar55;
                  pfVar9[0xd] = fVar16;
                  pfVar9[0xe] = fVar17;
                  pfVar9[0xf] = fVar27;
                }
                else {
                  pfVar10 = (float *)*param_3;
                  lVar15 = (longlong)pfVar9 - (longlong)pfVar10 >> 6;
                  if (lVar15 == 0) {
                    lVar15 = 1;
LAB_1802e9a40:
                    pfVar6 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar15 << 6,(char)param_3[3]);
                    pfVar9 = (float *)param_3[1];
                    pfVar10 = (float *)*param_3;
                  }
                  else {
                    lVar15 = lVar15 * 2;
                    if (lVar15 != 0) goto LAB_1802e9a40;
                    pfVar6 = (float *)0x0;
                  }
                  if (pfVar10 != pfVar9) {
                    // WARNING: Subroutine does not return
                    memmove(pfVar6,pfVar10,(longlong)pfVar9 - (longlong)pfVar10);
                  }
                  *pfVar6 = fVar42;
                  pfVar6[1] = fVar43;
                  pfVar6[2] = fVar44;
                  pfVar6[3] = fVar45;
                  pfVar6[4] = fVar46;
                  pfVar6[5] = fVar47;
                  pfVar6[6] = fVar49;
                  pfVar6[7] = fVar51;
                  pfVar6[8] = fVar53;
                  pfVar6[9] = fVar28;
                  pfVar6[10] = fVar29;
                  pfVar6[0xb] = fVar30;
                  pfVar6[0xc] = fVar55;
                  pfVar6[0xd] = fVar16;
                  pfVar6[0xe] = fVar17;
                  pfVar6[0xf] = fVar27;
                  if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *param_3 = (ulonglong)pfVar6;
                  param_3[1] = (ulonglong)(pfVar6 + 0x10);
                  param_3[2] = (ulonglong)(pfVar6 + lVar15 * 0x10);
                }
                plVar12 = plVar12 + 2;
              } while (plVar12 < (longlong *)plVar13[8]);
            }
          }
        }
        else {
          fStack_138 = param_4[0x10];
          uStack_134 = *(int8_t *)(param_4 + 0x11);
          plVar13 = *(longlong **)(lStack_1b8 + *(longlong *)(param_1 + 0xf0));
          fStack_178 = fVar56;
          fStack_174 = fVar57;
          fStack_170 = fVar58;
          fStack_16c = fVar59;
          fStack_168 = fVar48;
          fStack_164 = fVar50;
          fStack_160 = fVar52;
          fStack_15c = fVar54;
          fStack_158 = fVar31;
          fStack_154 = fVar33;
          fStack_150 = fVar35;
          fStack_14c = fVar37;
          fStack_148 = fVar20;
          fStack_144 = fVar22;
          fStack_140 = fVar24;
          fStack_13c = fVar26;
          (**(code **)(*plVar13 + 0x168))(plVar13,param_2,param_3,&fStack_178);
        }
        iStack_1c8 = iStack_1c8 + 1;
        lStack_1b8 = lStack_1b8 + 8;
        lVar15 = *(longlong *)(param_1 + 0xf0);
      } while ((ulonglong)(longlong)iStack_1c8 <
               (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar15 >> 3));
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  iVar14 = 0;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    lVar15 = 0;
    do {
      fStack_138 = param_4[0x10];
      uStack_134 = *(int8_t *)(param_4 + 0x11);
      fStack_178 = fVar56;
      fStack_174 = fVar57;
      fStack_170 = fVar58;
      fStack_16c = fVar59;
      fStack_168 = fVar48;
      fStack_164 = fVar50;
      fStack_160 = fVar52;
      fStack_15c = fVar54;
      fStack_158 = fVar31;
      fStack_154 = fVar33;
      fStack_150 = fVar35;
      fStack_14c = fVar37;
      fStack_148 = fVar20;
      fStack_144 = fVar22;
      fStack_140 = fVar24;
      fStack_13c = fVar26;
      FUN_1802e94a0(*(uint64_t *)(lVar15 + *(longlong *)(param_1 + 0x1c0)),param_2,param_3,
                    &fStack_178);
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  if ((!bVar3) && (*(longlong *)(param_1 + 0x260) != 0)) {
    plStack_198 = (longlong *)0x0;
    plStack_190 = (longlong *)0x0;
    uStack_188 = 0;
    uStack_180 = 3;
    alStack_108[0] = 0;
    alStack_108[1] = 0;
    alStack_108[2] = 0;
    uStack_f0 = 3;
    FUN_180300290(*(longlong *)(param_1 + 0x260),&plStack_198,alStack_108,param_4[0x10]);
    plVar13 = plStack_198;
    if (plStack_198 < plStack_190) {
      do {
        lVar15 = *plVar13;
        fVar27 = *(float *)(lVar15 + 0x124);
        fVar1 = *(float *)(lVar15 + 0x128);
        fVar2 = *(float *)(lVar15 + 0x120);
        fVar39 = fVar56 * fVar2 + fVar48 * fVar27 + fVar31 * fVar1;
        fVar40 = fVar57 * fVar2 + fVar50 * fVar27 + fVar33 * fVar1;
        fVar41 = fVar58 * fVar2 + fVar52 * fVar27 + fVar35 * fVar1;
        fVar42 = fVar59 * fVar2 + fVar54 * fVar27 + fVar37 * fVar1;
        fVar21 = *(float *)(lVar15 + 0x134);
        fVar23 = *(float *)(lVar15 + 0x138);
        fVar25 = *(float *)(lVar15 + 0x130);
        fVar32 = fVar56 * fVar25 + fVar48 * fVar21 + fVar31 * fVar23;
        fVar34 = fVar57 * fVar25 + fVar50 * fVar21 + fVar33 * fVar23;
        fVar36 = fVar58 * fVar25 + fVar52 * fVar21 + fVar35 * fVar23;
        fVar38 = fVar59 * fVar25 + fVar54 * fVar21 + fVar37 * fVar23;
        fVar55 = *(float *)(lVar15 + 0x144);
        fVar16 = *(float *)(lVar15 + 0x148);
        fVar17 = *(float *)(lVar15 + 0x140);
        fVar33 = fVar56 * fVar17 + fVar48 * fVar55 + fStack_118 * fVar16;
        fVar35 = fVar57 * fVar17 + fVar50 * fVar55 + fStack_114 * fVar16;
        fVar37 = fVar58 * fVar17 + fVar52 * fVar55 + fStack_110 * fVar16;
        fVar48 = fVar59 * fVar17 + fVar54 * fVar55 + fStack_10c * fVar16;
        fVar18 = *(float *)(lVar15 + 0x154);
        fVar19 = *(float *)(lVar15 + 0x158);
        fVar31 = *(float *)(lVar15 + 0x150);
        fVar50 = fVar2 * fVar39 + fVar27 * fVar32 + fVar1 * fVar33;
        fVar52 = fVar2 * fVar40 + fVar27 * fVar34 + fVar1 * fVar35;
        fVar54 = fVar2 * fVar41 + fVar27 * fVar36 + fVar1 * fVar37;
        fVar43 = fVar2 * fVar42 + fVar27 * fVar38 + fVar1 * fVar48;
        fVar44 = fVar25 * fVar39 + fVar21 * fVar32 + fVar23 * fVar33;
        fVar45 = fVar25 * fVar40 + fVar21 * fVar34 + fVar23 * fVar35;
        fVar46 = fVar25 * fVar41 + fVar21 * fVar36 + fVar23 * fVar37;
        fVar47 = fVar25 * fVar42 + fVar21 * fVar38 + fVar23 * fVar48;
        fVar49 = fVar17 * fVar39 + fVar55 * fVar32 + fVar16 * fVar33;
        fVar51 = fVar17 * fVar40 + fVar55 * fVar34 + fVar16 * fVar35;
        fVar53 = fVar17 * fVar41 + fVar55 * fVar36 + fVar16 * fVar37;
        fVar55 = fVar17 * fVar42 + fVar55 * fVar38 + fVar16 * fVar48;
        fVar27 = *(float *)(lVar15 + 0x154);
        fVar1 = *(float *)(lVar15 + 0x158);
        fVar2 = *(float *)(lVar15 + 0x150);
        fVar21 = fVar2 * fVar39 + fVar27 * fVar32 + fVar1 * fVar33 +
                 fVar31 * fVar56 + fVar18 * fStack_128 + fVar19 * fStack_118 + fVar20;
        fVar23 = fVar2 * fVar40 + fVar27 * fVar34 + fVar1 * fVar35 +
                 fVar31 * fVar57 + fVar18 * fStack_124 + fVar19 * fStack_114 + fVar22;
        fVar25 = fVar2 * fVar41 + fVar27 * fVar36 + fVar1 * fVar37 +
                 fVar31 * fVar58 + fVar18 * fStack_120 + fVar19 * fStack_110 + fVar24;
        fVar27 = fVar2 * fVar42 + fVar27 * fVar38 + fVar1 * fVar48 +
                 fVar31 * fVar59 + fVar18 * fStack_11c + fVar19 * fStack_10c + fVar26;
        pfVar9 = (float *)param_3[1];
        if (pfVar9 < (float *)param_3[2]) {
          param_3[1] = (ulonglong)(pfVar9 + 0x10);
          *pfVar9 = fVar50;
          pfVar9[1] = fVar52;
          pfVar9[2] = fVar54;
          pfVar9[3] = fVar43;
          pfVar9[4] = fVar44;
          pfVar9[5] = fVar45;
          pfVar9[6] = fVar46;
          pfVar9[7] = fVar47;
          pfVar9[8] = fVar49;
          pfVar9[9] = fVar51;
          pfVar9[10] = fVar53;
          pfVar9[0xb] = fVar55;
          pfVar9[0xc] = fVar21;
          pfVar9[0xd] = fVar23;
          pfVar9[0xe] = fVar25;
          pfVar9[0xf] = fVar27;
        }
        else {
          pfVar10 = (float *)*param_3;
          lVar7 = (longlong)pfVar9 - (longlong)pfVar10 >> 6;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802e9de5:
            pfVar6 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar7 << 6,(char)param_3[3]);
            pfVar9 = (float *)param_3[1];
            pfVar10 = (float *)*param_3;
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1802e9de5;
            pfVar6 = (float *)0x0;
          }
          if (pfVar10 != pfVar9) {
                    // WARNING: Subroutine does not return
            memmove(pfVar6,pfVar10,(longlong)pfVar9 - (longlong)pfVar10);
          }
          *pfVar6 = fVar50;
          pfVar6[1] = fVar52;
          pfVar6[2] = fVar54;
          pfVar6[3] = fVar43;
          pfVar6[4] = fVar44;
          pfVar6[5] = fVar45;
          pfVar6[6] = fVar46;
          pfVar6[7] = fVar47;
          pfVar6[8] = fVar49;
          pfVar6[9] = fVar51;
          pfVar6[10] = fVar53;
          pfVar6[0xb] = fVar55;
          pfVar6[0xc] = fVar21;
          pfVar6[0xd] = fVar23;
          pfVar6[0xe] = fVar25;
          pfVar6[0xf] = fVar27;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_3 = (ulonglong)pfVar6;
          param_3[1] = (ulonglong)(pfVar6 + 0x10);
          param_3[2] = (ulonglong)(pfVar6 + lVar7 * 0x10);
        }
        plVar12 = (longlong *)param_2[1];
        if (plVar12 < (longlong *)param_2[2]) {
          param_2[1] = (longlong)(plVar12 + 1);
          *plVar12 = lVar15;
        }
        else {
          plVar11 = (longlong *)*param_2;
          lVar7 = (longlong)plVar12 - (longlong)plVar11 >> 3;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802e9e97:
            plVar8 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,(char)param_2[3]);
            plVar12 = (longlong *)param_2[1];
            plVar11 = (longlong *)*param_2;
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1802e9e97;
            plVar8 = (longlong *)0x0;
          }
          if (plVar11 != plVar12) {
                    // WARNING: Subroutine does not return
            memmove(plVar8,plVar11,(longlong)plVar12 - (longlong)plVar11);
          }
          *plVar8 = lVar15;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (longlong)plVar8;
          param_2[1] = (longlong)(plVar8 + 1);
          param_2[2] = (longlong)(plVar8 + lVar7);
        }
        plVar13 = plVar13 + 1;
        fVar31 = fStack_118;
        fVar33 = fStack_114;
        fVar35 = fStack_110;
        fVar37 = fStack_10c;
        fVar48 = fStack_128;
        fVar50 = fStack_124;
        fVar52 = fStack_120;
        fVar54 = fStack_11c;
      } while (plVar13 < plStack_190);
    }
    if (alStack_108[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plStack_198 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}






// 函数: void FUN_1802e9fa0(longlong param_1,char param_2,char param_3,char param_4)
void FUN_1802e9fa0(longlong param_1,char param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  char cStack0000000000000028;
  
  cStack0000000000000028 = *(char *)(param_1 + 0x2e8);
  FUN_1802ed990(param_1,1);
  cVar2 = cStack0000000000000028;
  iVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + lVar3);
      if (((-1 < cVar2) || (plVar1 != (longlong *)0x0)) &&
         ((**(code **)(*plVar1 + 0x1e0))(plVar1,0), *(longlong *)(param_1 + 0x20) != 0)) {
        FUN_1802549d0(plVar1);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      lVar3 = *(longlong *)(param_1 + 0xf0);
    } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  FUN_1800b8500(param_1 + 0xf0);
  FUN_1800b8500(param_1 + 0x1e0);
  puVar6 = *(uint64_t **)(param_1 + 0x1c0);
  if (puVar6 != *(uint64_t **)(param_1 + 0x1c8)) {
    do {
      FUN_1802e9fa0(*puVar6,param_2,param_3,param_4,0);
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(uint64_t **)(param_1 + 0x1c8));
  }
  if (param_4 != '\0') {
    FUN_1802e8db0(param_1);
  }
  if ((*(longlong *)(param_1 + 0x260) != 0) && (FUN_1802fc320(), param_2 != '\0')) {
    FUN_180300650(*(uint64_t *)(param_1 + 0x260),0);
    lVar3 = *(longlong *)(param_1 + 0x260);
    if ((*(longlong *)(lVar3 + 0xd0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x1000) != 0)) {
      FUN_1802fc520(lVar3,0);
      lVar3 = *(longlong *)(param_1 + 0x260);
    }
    FUN_1802fdb10(lVar3,0);
    plVar1 = *(longlong **)(param_1 + 0x260);
    *(uint64_t *)(param_1 + 0x260) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (param_3 != '\0') {
    FUN_1802f0510(param_1,1,2);
  }
  return;
}






// 函数: void FUN_1802ea190(longlong param_1,int8_t param_2)
void FUN_1802ea190(longlong param_1,int8_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x100))(plVar1,param_2);
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  puVar5 = *(uint64_t **)(param_1 + 0x1c0);
  if (puVar5 != *(uint64_t **)(param_1 + 0x1c8)) {
    do {
      FUN_1802ea190(*puVar5,param_2);
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(uint64_t **)(param_1 + 0x1c8));
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      uVar4 = uVar8;
      do {
        puVar5 = *(uint64_t **)(uVar8 + 0xb0 + lVar3);
        if (puVar5 != *(uint64_t **)(uVar8 + 0xb8 + lVar3)) {
          do {
            (**(code **)(*(longlong *)*puVar5 + 0x100))((longlong *)*puVar5,param_2);
            lVar3 = *(longlong *)(lVar2 + 0x18);
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(uint64_t **)(uVar8 + 0xb8 + lVar3));
        }
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
        uVar8 = uVar8 + 0x100;
      } while ((int)uVar6 < (int)*(char *)(lVar2 + 0x20));
    }
    puVar5 = *(uint64_t **)(lVar2 + 0x1a8);
    if (puVar5 < *(uint64_t **)(lVar2 + 0x1b0)) {
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x100))((longlong *)*puVar5,param_2);
        puVar5 = puVar5 + 1;
      } while (puVar5 < *(uint64_t **)(lVar2 + 0x1b0));
    }
  }
  return;
}






// 函数: void FUN_1802ea310(longlong param_1,uint64_t param_2)
void FUN_1802ea310(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x108))(plVar1,param_2);
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    puVar5 = *(uint64_t **)(lVar2 + 0x1a8);
    if (puVar5 < *(uint64_t **)(lVar2 + 0x1b0)) {
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x108))((longlong *)*puVar5,param_2);
        puVar5 = puVar5 + 1;
      } while (puVar5 < *(uint64_t **)(lVar2 + 0x1b0));
    }
    uVar4 = uVar8;
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        puVar5 = *(uint64_t **)(lVar3 + 0xb0 + uVar8);
        if (puVar5 < *(uint64_t **)(lVar3 + 0xb8 + uVar8)) {
          do {
            (**(code **)(*(longlong *)*puVar5 + 0x108))((longlong *)*puVar5,param_2);
            puVar5 = puVar5 + 1;
          } while (puVar5 < *(uint64_t **)(lVar3 + 0xb8 + uVar8));
        }
        uVar6 = (int)uVar4 + 1;
        uVar8 = uVar8 + 0x100;
        uVar4 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)*(char *)(lVar2 + 0x20));
    }
  }
  puVar5 = *(uint64_t **)(param_1 + 0x1c0);
  if (puVar5 < *(uint64_t **)(param_1 + 0x1c8)) {
    do {
      FUN_1802ea310(*puVar5,param_2);
      puVar5 = puVar5 + 1;
    } while (puVar5 < *(uint64_t **)(param_1 + 0x1c8));
  }
  return;
}







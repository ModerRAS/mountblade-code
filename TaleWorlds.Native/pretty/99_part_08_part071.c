#include "TaleWorlds.Native.Split.h"

// 99_part_08_part071.c - 1 个函数

// 函数: void FUN_1805b9990(longlong *param_1,char param_2)
void FUN_1805b9990(longlong *param_1,char param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  float *pfVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  byte *pbVar21;
  ulonglong uVar22;
  int *piVar23;
  ulonglong uVar24;
  uint64_t *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  int32_t *puVar29;
  int iVar30;
  void *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar38;
  int32_t uVar39;
  float fVar40;
  float fVar41;
  int8_t auVar42 [16];
  int iVar43;
  float fVar44;
  uint auStackX_8 [2];
  char cStackX_10;
  uint auStackX_18 [2];
  int iStackX_20;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  int32_t uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int32_t uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  int32_t uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  int32_t uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  int32_t uStack_164;
  float fStack_160;
  uint64_t uStack_158;
  longlong lStack_150;
  int32_t uStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  int8_t auStack_118 [32];
  float fStack_f8;
  ulonglong uVar37;
  
  if ((char)param_1[0x438] == '\0') {
    iStackX_20 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iStackX_20 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if ((int)param_1[0x295] == 9) {
LAB_1805b9a51:
    bVar10 = false;
    iStackX_20 = -1;
  }
  else {
    if ((char)param_1[0x438] == '\0') {
      iVar13 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar13 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (iVar13 < 0) goto LAB_1805b9a51;
    lVar20 = *(longlong *)((longlong)iVar13 * 0xa60 + 0x3778 + param_1[0x291]);
    if (((lVar20 == 0) || (*(char *)(lVar20 + 0x8be) == '\0')) ||
       (*(int *)((longlong)iStackX_20 * 0xa60 + 0x3608 + param_1[0x291]) != 1)) goto LAB_1805b9a51;
    bVar10 = true;
  }
  uVar18 = *(uint *)(param_1 + 2);
  plVar15 = param_1 + 1;
  if ((uVar18 >> 0x1b & 1) == 0) {
    bVar12 = (byte)((uint)*(int32_t *)(*(longlong *)*plVar15 + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)param_1 + 0x11c) = bVar12;
  }
  else {
    bVar12 = *(byte *)((longlong)param_1 + 0x11c);
  }
  lVar20 = *param_1;
  lVar26 = *(longlong *)(lVar20 + 0x20);
  uStack_1c0 = *(int32_t *)(lVar26 + 0xc);
  uStack_1bc = *(int32_t *)(lVar26 + 0x10);
  uStack_1b8 = *(int32_t *)(lVar26 + 0x14);
  uStack_1b4 = *(int32_t *)(lVar26 + 0x18);
  cStackX_10 = param_2;
  if (bVar12 != 0) {
    if (((*(uint *)(lVar20 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar20 + 0x564))) {
      lVar26 = (longlong)*(int *)(lVar20 + 0x564) * 0xa60;
      if (*(int *)(lVar26 + 0x3608 + *(longlong *)(lVar20 + 0x8d8)) == 1) {
        lVar20 = *(longlong *)(lVar20 + 0x8d8) + 0x30a0 + lVar26;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar20 + 0x20) + 0x34));
  }
  cVar11 = false;
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  if ((uVar18 & 0x20) == 0) {
    param_1[0x15] = *(longlong *)(*(longlong *)(*(longlong *)*plVar15 + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 2) = uVar18 | 0x20;
  }
  lVar20 = param_1[0x15];
  if ((((lVar20 != 0) && (0 < *(int *)(lVar20 + 0x30))) &&
      ((uVar22 = *(ulonglong *)
                  ((longlong)*(int *)(lVar20 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar20 + 0xd0)),
       (uVar22 >> 9 & 1) == 0 || (0 < *(short *)(lVar20 + 8))))) && ((uVar22 >> 1 & 1) != 0)) {
    lVar26 = *param_1;
    if ((*(longlong *)(lVar26 + 0x628) == lVar20) && (*(int *)(lVar26 + 0x644) == -1)) {
      uVar18 = *(uint *)(lVar26 + 0x638);
    }
    else {
      auStackX_18[0] = 0xffffffff;
      auStackX_8[0] = 0xffffffff;
      iStack_1d4 = -1;
      FUN_18050e440(lVar26,lVar20,auStackX_8,&iStack_1d4,auStackX_18,&uStack_1c8,0xffffffff);
      uVar18 = auStackX_8[0];
    }
    cVar11 = 0 < (int)uVar18;
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,cVar11);
  }
  puVar31 = &UNK_180a06420;
  if (param_2 != '\0') {
    puVar31 = &UNK_180a06418;
  }
  uVar39 = func_0x000180508000(param_1,&UNK_180a37490,puVar31,cVar11);
  if (cVar11 == '\0') {
    uStack_148 = (int32_t)param_1[5];
    fStack_144 = *(float *)((longlong)param_1 + 0x2c);
    fStack_140 = *(float *)(param_1 + 6);
    uStack_13c = *(int32_t *)((longlong)param_1 + 0x34);
    uStack_158 = param_1[3];
    lStack_150 = param_1[4];
    if (fStack_144 < 0.0) {
      FUN_1805d5a50(plVar15);
      uStack_158 = param_1[3];
      lStack_150 = param_1[4];
      uStack_148 = (int32_t)param_1[5];
      fStack_144 = *(float *)((longlong)param_1 + 0x2c);
      fStack_140 = *(float *)(param_1 + 6);
      uStack_13c = *(int32_t *)((longlong)param_1 + 0x34);
    }
    lVar20 = *(longlong *)(*param_1 + 0x8f8) + 8 +
             (longlong)*(int *)((longlong)param_1 + 0x2154) * 0x1f8;
    if (0 < *(int *)(lVar20 + 0x30)) {
      iStack_1d8 = *(int *)(lVar20 + 0xf0);
      uVar22 = *(ulonglong *)((longlong)iStack_1d8 * 0xa0 + 0x50 + *(longlong *)(lVar20 + 0xd0));
      if ((((uVar22 >> 9 & 1) == 0) || (0 < *(short *)(lVar20 + 8))) && ((uVar22 >> 1 & 1) != 0))
      goto LAB_1805b9d7c;
    }
    iStack_1d8 = 0;
    iVar13 = (int)((*(longlong *)(lVar20 + 0xd8) - *(longlong *)(lVar20 + 0xd0)) / 0xa0);
    if (0 < iVar13) {
      pbVar21 = (byte *)(*(longlong *)(lVar20 + 0xd0) + 0x50);
      lVar26 = 0;
      do {
        if ((*pbVar21 >> 1 & 1) != 0) goto LAB_1805b9d7c;
        iStack_1d8 = iStack_1d8 + 1;
        lVar26 = lVar26 + 1;
        pbVar21 = pbVar21 + 0xa0;
      } while (lVar26 < iVar13);
    }
    iStack_1d8 = -1;
  }
  else {
    iStack_1d8 = *(int *)(lVar20 + 0xf0);
    plVar15 = (longlong *)FUN_1805b7970(uVar39,auStack_118);
    uStack_158 = *plVar15;
    lStack_150 = plVar15[1];
    uStack_148 = (int32_t)plVar15[2];
    fStack_144 = *(float *)((longlong)plVar15 + 0x14);
    fStack_140 = *(float *)(plVar15 + 3);
    uStack_13c = *(int32_t *)((longlong)plVar15 + 0x1c);
  }
LAB_1805b9d7c:
  lVar26 = param_1[0x291];
  iVar13 = *(int *)(lVar26 + 0x52ed94);
  iStack_1d0 = iVar13;
  if (param_2 == '\0') {
    iStack_1d0 = (*(int *)(lVar26 + 0x98d9d4) + 1) * 5;
  }
  lVar38 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar26 + 0x87b790) * 8);
  lVar5 = *(longlong *)(lVar26 + 0x87b788);
  iVar43 = (int)param_1[0x402];
  uVar22 = (ulonglong)iVar43;
  if (iVar43 < 0) {
    sVar3 = *(short *)(lVar26 + 0x52dda0 + uVar22 * 2);
    if (sVar3 == -1) {
      if (iVar43 < iVar13) {
        do {
          if (*(short *)(lVar26 + 0x52dda0 + (longlong)(int)uVar22 * 2) != -1) break;
          uVar18 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar18;
          *(uint *)(param_1 + 0x402) = uVar18;
        } while ((int)uVar18 < *(int *)(lVar26 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x402) = (int)sVar3;
    }
  }
  iStack_1d4 = iVar13;
  FUN_1805279f0(*param_1,&fStack_190,lStack_150,lVar20);
  if ((bVar10) && (0 < *(int *)((longlong)param_1 + 0x200c))) {
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,1);
    if (iStackX_20 == *(int *)((longlong)param_1 + 0x1c4c)) goto LAB_1805b9e67;
  }
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
LAB_1805b9e67:
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x402);
  if ((int)*(uint *)(param_1 + 0x402) < iVar13) {
    iVar43 = uStack_1c8._4_4_;
    iVar30 = iStackX_20;
    iVar14 = (int)uStack_1c8;
    do {
      lVar26 = param_1[0x291] + 0x30a0 + (longlong)(int)uVar22 * 0xa60;
      if (((*(int *)(lVar26 + 0x568) == 1) &&
          (iVar4 = *(int *)(lVar26 + 0x10), iVar4 != *(int *)(*param_1 + 0x10))) &&
         ((*(int *)(lVar26 + 0x560) < 0 && (cVar11 = func_0x000180508270(), cVar11 != '\0')))) {
        bVar10 = false;
        if (iVar4 != iVar30) {
          iVar13 = (int)param_1[0x381];
          lVar32 = (longlong)iVar13;
          iVar19 = 0;
          lVar27 = 0;
          if (0 < iVar13) {
            plVar15 = param_1 + 0x371;
            do {
              if ((int)*plVar15 == iVar4) {
                if (*(float *)((longlong)param_1 + lVar27 * 8 + 0x1b8c) <=
                    (float)(lVar38 - lVar5) * 1e-05) {
                  *(int *)(param_1 + lVar27 + 0x371) = (int)param_1[lVar32 + 0x370];
                  *(int32_t *)((longlong)param_1 + lVar27 * 8 + 0x1b8c) =
                       *(int32_t *)((longlong)param_1 + lVar32 * 8 + 0x1b84);
                  *(int32_t *)(param_1 + lVar32 + 0x370) = 0xffffffff;
                  *(int *)(param_1 + 0x381) = (int)param_1[0x381] + -1;
                }
                else {
                  bVar10 = true;
                }
                break;
              }
              iVar19 = iVar19 + 1;
              lVar27 = lVar27 + 1;
              plVar15 = plVar15 + 1;
            } while (iVar19 < iVar13);
          }
        }
        fVar40 = (float)FUN_1805bcd40(param_1,lVar26,&uStack_1c0,lVar20,(int8_t)auStackX_18[0],
                                      iStack_1d8);
        if (-1e+30 < fVar40) {
          if (iVar4 == iVar30) {
            uVar18 = 0;
            auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,1);
          }
          else {
            uVar18 = (uint)((char)auStackX_8[0] != '\0');
            uVar22 = (ulonglong)uVar18;
            if ((int)uVar18 < *(int *)((longlong)param_1 + 0x200c)) {
              pfVar16 = (float *)((longlong)param_1 + uVar22 * 0x3c + 0x1c50);
              do {
                uVar18 = (uint)uVar22;
                if (*pfVar16 <= fVar40) break;
                uVar18 = uVar18 + 1;
                uVar22 = (ulonglong)uVar18;
                pfVar16 = pfVar16 + 0xf;
              } while ((int)uVar18 < *(int *)((longlong)param_1 + 0x200c));
            }
            iVar30 = iStackX_20;
            if (0xf < (int)uVar18) goto LAB_1805ba3d0;
          }
LAB_1805ba031:
          if (iVar4 == iStackX_20) {
            if (!bVar10) {
LAB_1805ba2c7:
              iVar13 = *(int *)((longlong)param_1 + 0x200c);
              if (iVar13 < 0x10) {
                iVar13 = iVar13 + 1;
                *(int *)((longlong)param_1 + 0x200c) = iVar13;
              }
              lVar27 = (longlong)(int)uVar18;
              lVar32 = (longlong)(iVar13 + -1);
              if (lVar27 < lVar32) {
                puVar25 = (uint64_t *)((longlong)param_1 + lVar32 * 0x3c + 0x1c4c);
                lVar32 = lVar32 - lVar27;
                do {
                  *puVar25 = *(uint64_t *)((longlong)puVar25 + -0x3c);
                  puVar25[1] = *(uint64_t *)((longlong)puVar25 + -0x34);
                  puVar25[2] = *(uint64_t *)((longlong)puVar25 + -0x2c);
                  puVar25[3] = *(uint64_t *)((longlong)puVar25 + -0x24);
                  *(int32_t *)(puVar25 + 4) = *(int32_t *)((longlong)puVar25 + -0x1c);
                  *(int32_t *)((longlong)puVar25 + 0x24) = *(int32_t *)(puVar25 + -3);
                  *(int32_t *)(puVar25 + 5) = *(int32_t *)((longlong)puVar25 + -0x14);
                  *(int32_t *)((longlong)puVar25 + 0x2c) = *(int32_t *)(puVar25 + -2);
                  puVar25[6] = *(uint64_t *)((longlong)puVar25 + -0xc);
                  *(int32_t *)(puVar25 + 7) = *(int32_t *)((longlong)puVar25 + -4);
                  puVar25 = (uint64_t *)((longlong)puVar25 + -0x3c);
                  lVar32 = lVar32 + -1;
                } while (lVar32 != 0);
              }
              lVar27 = lVar27 * 0x3c;
              *(int32_t *)(lVar27 + 0x1c4c + (longlong)param_1) = *(int32_t *)(lVar26 + 0x10);
              *(int32_t *)(lVar27 + 0x1c54 + (longlong)param_1) = 0;
              *(float *)(lVar27 + 0x1c50 + (longlong)param_1) = fVar40;
              *(int32_t *)(lVar27 + 0x1c58 + (longlong)param_1) = 0xf149f2ca;
              *(uint64_t *)(lVar27 + 0x1c80 + (longlong)param_1) = 0x7149f2ca;
              *(int32_t *)(lVar27 + 0x1c5c + (longlong)param_1) = 0;
              iVar30 = iStackX_20;
              goto LAB_1805ba3d0;
            }
          }
          else if (!bVar10) {
            lVar27 = *(longlong *)(lVar26 + 0x6d8);
            lVar32 = *(longlong *)(*param_1 + 0x6d8);
            fStack_180 = *(float *)(lVar32 + 0x8e4);
            fStack_17c = *(float *)(lVar32 + 0x8e8);
            fStack_178 = *(float *)(lVar32 + 0x8ec);
            uStack_174 = *(int32_t *)(lVar32 + 0x8f0);
            fStack_1b0 = *(float *)(lVar27 + 0x8c4) - fStack_180;
            fStack_1ac = *(float *)(lVar27 + 0x8c8) - fStack_17c;
            fVar44 = *(float *)(lVar27 + 0x8cc) - fStack_178;
            fStack_160 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac + fVar44 * fVar44;
            auVar42 = rsqrtss(ZEXT416((uint)fStack_160),ZEXT416((uint)fStack_160));
            fVar41 = auVar42._0_4_;
            fStack_1a8 = fVar41 * 0.5 * (3.0 - fStack_160 * fVar41 * fVar41);
            fStack_1b0 = fStack_1a8 * fStack_1b0;
            fStack_160 = fStack_1a8 * fStack_160;
            fStack_1ac = fStack_1a8 * fStack_1ac;
            fStack_1a8 = fStack_1a8 * fVar44;
            uStack_1a4 = 0x7f7fffff;
            fStack_170 = fStack_1b0;
            fStack_16c = fStack_1ac;
            fStack_168 = fStack_1a8;
            if ((fStack_160 < fStack_140) && (fVar44 < -0.85)) {
              fStack_1a0 = *(float *)(lVar27 + 0x8c4) - fStack_190;
              fStack_19c = *(float *)(lVar27 + 0x8c8) - fStack_18c;
              fStack_198 = *(float *)(lVar27 + 0x8cc) - fStack_188;
              fVar44 = fStack_19c * fStack_19c + fStack_1a0 * fStack_1a0 + fStack_198 * fStack_198;
              auVar42 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
              fVar41 = auVar42._0_4_;
              fStack_160 = fVar41 * 0.5 * (3.0 - fVar44 * fVar41 * fVar41);
              fStack_1a0 = fStack_160 * fStack_1a0;
              fStack_19c = fStack_160 * fStack_19c;
              fStack_198 = fStack_160 * fStack_198;
              fStack_160 = fStack_160 * fVar44;
              fStack_180 = fStack_190;
              fStack_17c = fStack_18c;
              fStack_178 = fStack_188;
              uStack_174 = uStack_184;
              uStack_194 = 0x7f7fffff;
              fStack_170 = fStack_1a0;
              fStack_16c = fStack_19c;
              fStack_168 = fStack_198;
              fStack_f8 = fStack_160;
            }
            uStack_164 = 0x7f7fffff;
            iVar13 = FUN_180619450(param_1 + 0x408,&fStack_180);
            if (iVar13 == 4) goto LAB_1805ba2c7;
          }
          bVar10 = false;
          piVar23 = (int *)((longlong)param_1 + 0x1c0c);
          lVar32 = 0;
          pfVar16 = (float *)(param_1 + 0x382);
          lVar27 = 0;
          do {
            if (bVar10) {
              if (iVar14 < 0) break;
              iVar30 = *piVar23;
              *piVar23 = iVar14;
              iVar13 = piVar23[1];
              piVar23[1] = iVar43;
              iVar43 = iVar13;
              iVar14 = iVar30;
            }
            else if (((int)pfVar16[-1] < 0) || (*pfVar16 <= fVar40)) {
              uVar2 = *(uint64_t *)piVar23;
              bVar10 = true;
              iVar14 = (int)uVar2;
              uStack_1c8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
              iVar43 = uStack_1c8._4_4_;
              uStack_1c8 = uVar2;
            }
            else {
              lVar32 = lVar32 + 1;
              pfVar16 = pfVar16 + 2;
            }
            lVar27 = lVar27 + 1;
            piVar23 = piVar23 + 2;
          } while (lVar27 < 4);
          iVar30 = iStackX_20;
          if (lVar32 < 4) {
            uVar39 = *(int32_t *)(lVar26 + 0x10);
            *(float *)(param_1 + lVar32 + 0x382) = fVar40;
            *(int32_t *)((longlong)param_1 + lVar32 * 8 + 0x1c0c) = uVar39;
          }
        }
        else if (iVar4 == iVar30) {
          uVar18 = 0;
          auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,1);
          goto LAB_1805ba031;
        }
LAB_1805ba3d0:
        iStack_1d0 = iStack_1d0 + -1;
        iVar13 = iStack_1d4;
        param_2 = cStackX_10;
        if (iStack_1d0 == 0) break;
      }
      uVar18 = *(uint *)(param_1 + 0x402);
      uVar22 = (ulonglong)(int)uVar18;
      lVar26 = param_1[0x291];
      sVar3 = *(short *)(lVar26 + 0x52dda0 + uVar22 * 2);
      if (sVar3 == -1) {
        if ((int)uVar18 < *(int *)(lVar26 + 0x52ed94)) {
          do {
            if (*(short *)(lVar26 + 0x52dda0 + (longlong)(int)uVar18 * 2) != -1) break;
            uVar18 = uVar18 + 1;
            uVar22 = (ulonglong)uVar18;
            *(uint *)(param_1 + 0x402) = uVar18;
          } while ((int)uVar18 < *(int *)(lVar26 + 0x52ed94));
        }
      }
      else {
        uVar22 = (ulonglong)(uint)(int)sVar3;
        *(int *)(param_1 + 0x402) = (int)sVar3;
      }
      param_2 = cStackX_10;
    } while ((int)uVar22 < iVar13);
  }
  if (iVar13 <= (int)param_1[0x402]) {
    *(int8_t *)(param_1 + 0x389) = 0;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar12 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)param_1 + 0x11c) = bVar12;
    }
    else {
      bVar12 = *(byte *)((longlong)param_1 + 0x11c);
    }
    if (bVar12 == 0) {
      fVar40 = -600000.0;
    }
    else {
      fVar40 = -220000.0;
    }
    uVar18 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar18 = uVar18 ^ uVar18 >> 0x11;
    uVar18 = uVar18 ^ uVar18 << 5;
    *(uint *)(param_1 + 0x272) = uVar18;
    uVar22 = 0;
    param_1[0x387] =
         *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x388] * 8) -
         (longlong)(((float)(uVar18 - 1) * 2.3283064e-05 + fVar40) - 50000.0);
    uVar24 = uVar22;
    uVar28 = uVar22;
    uVar33 = uVar22;
    uVar35 = uVar22;
    uVar37 = uVar22;
    do {
      uVar34 = (uint)uVar35;
      uVar18 = uVar34;
      if (*(int *)((longlong)param_1 + uVar33 * 8 + 0x1c0c) < 0) break;
      if ((int)uVar24 < *(int *)((longlong)param_1 + 0x200c)) {
        fVar40 = *(float *)(uVar28 * 0x3c + 0x1c50 + (longlong)param_1);
      }
      else {
        fVar40 = 0.0;
      }
      fVar41 = *(float *)(param_1 + uVar33 + 0x382);
      uVar36 = (int)uVar37 + 1;
      uVar37 = (ulonglong)uVar36;
      if (fVar41 <= fVar40) {
        uVar24 = (ulonglong)((int)uVar24 + 1);
      }
      uVar18 = uVar34 + 1;
      if (fVar41 <= fVar40) {
        uVar18 = uVar34;
      }
      uVar35 = (ulonglong)uVar18;
      uVar17 = uVar33 + 1;
      if (fVar41 <= fVar40) {
        uVar17 = uVar33;
      }
      if (fVar41 <= fVar40) {
        uVar28 = uVar28 + 1;
      }
      uVar33 = uVar17;
    } while ((int)uVar36 < 4);
    if (uVar18 != 0) {
      lVar20 = (longlong)(int)uVar18;
      iVar13 = 0x10 - uVar18;
      if ((int)(uVar18 + *(int *)((longlong)param_1 + 0x200c)) < 0x11) {
        iVar13 = *(int *)((longlong)param_1 + 0x200c);
      }
      if (3 < lVar20) {
        lVar38 = (lVar20 - 4U >> 2) + 1;
        uVar22 = lVar38 * 4;
        lVar26 = (longlong)param_1 + (longlong)iVar13 * 0x3c + 0x1c84;
        puVar29 = (int32_t *)((longlong)param_1 + 0x1c0c);
        do {
          uVar39 = puVar29[1];
          *(int32_t *)(lVar26 + -0x38) = *puVar29;
          *(int32_t *)(lVar26 + -0x34) = uVar39;
          *(int32_t *)(lVar26 + -0x30) = 0;
          *(int32_t *)(lVar26 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar26 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar26 + -0x28) = 0;
          uVar39 = puVar29[3];
          *(int32_t *)(lVar26 + 4) = puVar29[2];
          *(int32_t *)(lVar26 + 8) = uVar39;
          *(int32_t *)(lVar26 + 0xc) = 0;
          *(int32_t *)(lVar26 + 0x10) = 0xf149f2ca;
          *(uint64_t *)(lVar26 + 0x38) = 0x7149f2ca;
          *(int32_t *)(lVar26 + 0x14) = 0;
          uVar39 = puVar29[5];
          *(int32_t *)(lVar26 + 0x40) = puVar29[4];
          *(int32_t *)(lVar26 + 0x44) = uVar39;
          *(int32_t *)(lVar26 + 0x48) = 0;
          *(int32_t *)(lVar26 + 0x4c) = 0xf149f2ca;
          *(uint64_t *)(lVar26 + 0x74) = 0x7149f2ca;
          *(int32_t *)(lVar26 + 0x50) = 0;
          uVar39 = puVar29[7];
          *(int32_t *)(lVar26 + 0x7c) = puVar29[6];
          *(int32_t *)(lVar26 + 0x80) = uVar39;
          *(int32_t *)(lVar26 + 0x84) = 0;
          *(int32_t *)(lVar26 + 0x88) = 0xf149f2ca;
          *(uint64_t *)(lVar26 + 0xb0) = 0x7149f2ca;
          *(int32_t *)(lVar26 + 0x8c) = 0;
          lVar38 = lVar38 + -1;
          lVar26 = lVar26 + 0xf0;
          puVar29 = puVar29 + 8;
        } while (lVar38 != 0);
      }
      if ((longlong)uVar22 < lVar20) {
        puVar29 = (int32_t *)((longlong)param_1 + uVar22 * 8 + 0x1c0c);
        lVar20 = lVar20 - uVar22;
        lVar26 = (longlong)param_1 + ((longlong)iVar13 + uVar22) * 0x3c + 0x1c84;
        do {
          puVar1 = puVar29 + 1;
          uVar39 = *puVar29;
          puVar29 = puVar29 + 2;
          *(int32_t *)(lVar26 + -0x34) = *puVar1;
          *(int32_t *)(lVar26 + -0x38) = uVar39;
          *(int32_t *)(lVar26 + -0x30) = 0;
          *(int32_t *)(lVar26 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar26 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar26 + -0x28) = 0;
          lVar20 = lVar20 + -1;
          lVar26 = lVar26 + 0x3c;
        } while (lVar20 != 0);
      }
      *(uint *)((longlong)param_1 + 0x1c2c) = uVar18;
      *(uint *)((longlong)param_1 + 0x200c) = iVar13 + uVar18;
    }
    if ((char)auStackX_8[0] != '\0') {
      plVar15 = (longlong *)((longlong)param_1 + 0x1c4c);
      iVar13 = 1;
      lVar20 = *plVar15;
      lStack_150 = *(longlong *)((longlong)param_1 + 0x1c54);
      uVar39 = *(int32_t *)((longlong)param_1 + 0x1c84);
      uVar6 = *(uint64_t *)((longlong)param_1 + 0x1c5c);
      uVar7 = *(uint64_t *)((longlong)param_1 + 0x1c64);
      lVar26 = (longlong)
               (*(int *)((longlong)param_1 + 0x200c) - *(int *)((longlong)param_1 + 0x1c2c));
      uVar2 = *(uint64_t *)((longlong)param_1 + 0x1c7c);
      uVar8 = *(uint64_t *)((longlong)param_1 + 0x1c6c);
      uVar9 = *(uint64_t *)((longlong)param_1 + 0x1c74);
      if (1 < lVar26) {
        uStack_158._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
        lVar38 = 1;
        if (4 < lVar26) {
          do {
            if (*(float *)(plVar15 + 8) <= uStack_158._4_4_) goto LAB_1805ba95e;
            *plVar15 = *(longlong *)((longlong)plVar15 + 0x3c);
            plVar15[1] = *(longlong *)((longlong)plVar15 + 0x44);
            plVar15[2] = *(longlong *)((longlong)plVar15 + 0x4c);
            plVar15[3] = *(longlong *)((longlong)plVar15 + 0x54);
            *(int32_t *)(plVar15 + 4) = *(int32_t *)((longlong)plVar15 + 0x5c);
            *(int *)((longlong)plVar15 + 0x24) = (int)plVar15[0xc];
            *(int32_t *)(plVar15 + 5) = *(int32_t *)((longlong)plVar15 + 100);
            *(int *)((longlong)plVar15 + 0x2c) = (int)plVar15[0xd];
            plVar15[6] = *(longlong *)((longlong)plVar15 + 0x6c);
            *(int32_t *)(plVar15 + 7) = *(int32_t *)((longlong)plVar15 + 0x74);
            if (*(float *)((longlong)plVar15 + 0x7c) <= uStack_158._4_4_) {
              iVar13 = iVar13 + 1;
              goto LAB_1805ba95e;
            }
            *(longlong *)((longlong)plVar15 + 0x3c) = plVar15[0xf];
            *(longlong *)((longlong)plVar15 + 0x44) = plVar15[0x10];
            *(longlong *)((longlong)plVar15 + 0x4c) = plVar15[0x11];
            *(longlong *)((longlong)plVar15 + 0x54) = plVar15[0x12];
            *(int *)((longlong)plVar15 + 0x5c) = (int)plVar15[0x13];
            *(int32_t *)(plVar15 + 0xc) = *(int32_t *)((longlong)plVar15 + 0x9c);
            *(int *)((longlong)plVar15 + 100) = (int)plVar15[0x14];
            *(int32_t *)(plVar15 + 0xd) = *(int32_t *)((longlong)plVar15 + 0xa4);
            *(longlong *)((longlong)plVar15 + 0x6c) = plVar15[0x15];
            *(int *)((longlong)plVar15 + 0x74) = (int)plVar15[0x16];
            if (*(float *)(plVar15 + 0x17) <= uStack_158._4_4_) {
              iVar13 = iVar13 + 2;
              goto LAB_1805ba95e;
            }
            plVar15[0xf] = *(longlong *)((longlong)plVar15 + 0xb4);
            plVar15[0x10] = *(longlong *)((longlong)plVar15 + 0xbc);
            plVar15[0x11] = *(longlong *)((longlong)plVar15 + 0xc4);
            plVar15[0x12] = *(longlong *)((longlong)plVar15 + 0xcc);
            *(int32_t *)(plVar15 + 0x13) = *(int32_t *)((longlong)plVar15 + 0xd4);
            *(int *)((longlong)plVar15 + 0x9c) = (int)plVar15[0x1b];
            *(int32_t *)(plVar15 + 0x14) = *(int32_t *)((longlong)plVar15 + 0xdc);
            *(int *)((longlong)plVar15 + 0xa4) = (int)plVar15[0x1c];
            plVar15[0x15] = *(longlong *)((longlong)plVar15 + 0xe4);
            *(int32_t *)(plVar15 + 0x16) = *(int32_t *)((longlong)plVar15 + 0xec);
            if (*(float *)((longlong)plVar15 + 0xf4) <= uStack_158._4_4_) {
              iVar13 = iVar13 + 3;
              goto LAB_1805ba95e;
            }
            iVar13 = iVar13 + 4;
            lVar38 = lVar38 + 4;
            *(longlong *)((longlong)plVar15 + 0xb4) = plVar15[0x1e];
            *(longlong *)((longlong)plVar15 + 0xbc) = plVar15[0x1f];
            *(longlong *)((longlong)plVar15 + 0xc4) = plVar15[0x20];
            *(longlong *)((longlong)plVar15 + 0xcc) = plVar15[0x21];
            *(int *)((longlong)plVar15 + 0xd4) = (int)plVar15[0x22];
            *(int32_t *)(plVar15 + 0x1b) = *(int32_t *)((longlong)plVar15 + 0x114);
            *(int *)((longlong)plVar15 + 0xdc) = (int)plVar15[0x23];
            *(int32_t *)(plVar15 + 0x1c) = *(int32_t *)((longlong)plVar15 + 0x11c);
            *(longlong *)((longlong)plVar15 + 0xe4) = plVar15[0x24];
            *(int *)((longlong)plVar15 + 0xec) = (int)plVar15[0x25];
            plVar15 = plVar15 + 0x1e;
          } while (lVar38 < lVar26 + -3);
        }
        if (lVar38 < lVar26) {
          puVar25 = (uint64_t *)((longlong)param_1 + lVar38 * 0x3c + 0x1c4c);
          do {
            if (*(float *)((longlong)puVar25 + 4) <= uStack_158._4_4_) break;
            iVar13 = iVar13 + 1;
            lVar38 = lVar38 + 1;
            *(uint64_t *)((longlong)puVar25 + -0x3c) = *puVar25;
            *(uint64_t *)((longlong)puVar25 + -0x34) = puVar25[1];
            *(uint64_t *)((longlong)puVar25 + -0x2c) = puVar25[2];
            *(uint64_t *)((longlong)puVar25 + -0x24) = puVar25[3];
            *(int32_t *)((longlong)puVar25 + -0x1c) = *(int32_t *)(puVar25 + 4);
            *(int32_t *)(puVar25 + -3) = *(int32_t *)((longlong)puVar25 + 0x24);
            *(int32_t *)((longlong)puVar25 + -0x14) = *(int32_t *)(puVar25 + 5);
            *(int32_t *)(puVar25 + -2) = *(int32_t *)((longlong)puVar25 + 0x2c);
            *(uint64_t *)((longlong)puVar25 + -0xc) = puVar25[6];
            *(int32_t *)((longlong)puVar25 + -4) = *(int32_t *)(puVar25 + 7);
            puVar25 = (uint64_t *)((longlong)puVar25 + 0x3c);
          } while (lVar38 < lVar26);
        }
      }
LAB_1805ba95e:
      uStack_158 = lVar20;
      if (iVar13 != 1) {
        lVar26 = (longlong)iVar13 * 0x3c;
        plVar15 = (longlong *)(lVar26 + 0x1c10 + (longlong)param_1);
        *plVar15 = lVar20;
        plVar15[1] = lStack_150;
        puVar25 = (uint64_t *)(lVar26 + 0x1c20 + (longlong)param_1);
        *puVar25 = uVar6;
        puVar25[1] = uVar7;
        puVar25 = (uint64_t *)(lVar26 + 0x1c30 + (longlong)param_1);
        *puVar25 = uVar8;
        puVar25[1] = uVar9;
        *(uint64_t *)(lVar26 + 0x1c40 + (longlong)param_1) = uVar2;
        *(int32_t *)(lVar26 + 0x1c48 + (longlong)param_1) = uVar39;
      }
    }
    *(int32_t *)((longlong)param_1 + 0x1c0c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c14) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c1c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c24) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c2c) = 0;
  }
  if (param_2 != '\0') {
    FUN_1805beae0(param_1);
  }
  return;
}







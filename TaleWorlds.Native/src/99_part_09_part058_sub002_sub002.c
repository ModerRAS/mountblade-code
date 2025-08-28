#include "TaleWorlds.Native.Split.h"

// 99_part_09_part058_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805dc090(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1805dc090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x34));
}



longlong FUN_1805dc680(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int *piVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStackX_8;
  longlong lStackX_10;
  longlong *plStackX_18;
  longlong lStackX_20;
  double in_stack_fffffffffffffe90;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar28;
  undefined8 uVar27;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  int iStack_e8;
  longlong alStack_d8 [2];
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  longlong lVar22;
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  plVar20 = *(longlong **)(param_1 + 8);
  lVar22 = 0;
  lVar21 = 0;
  lVar4 = *plVar20;
  lStackX_10 = *(longlong *)(lVar4 + 0x20);
  pfVar1 = (float *)(lStackX_10 + 0xc);
  lStackX_20 = *(longlong *)(lVar4 + 0x8d8);
  if ((*(int *)(lVar4 + 0x5f8) == 1) || ((*(uint *)(plVar20 + 0x413) >> 8 & 1) != 0)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  uStackX_8 = CONCAT71(uStackX_8._1_7_,cVar6);
  plStackX_18 = plVar20 + 1;
  uStack_128 = *(undefined8 *)(param_1 + 0x12);
  lStack_120 = *(longlong *)(param_1 + 0x14);
  lStack_118 = *(longlong *)(param_1 + 0x16);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  iStack_e8 = param_1[0x22];
  uStack_110 = *(undefined8 *)(param_1 + 0x18);
  uStack_108 = *(undefined8 *)(param_1 + 0x1a);
  iStack_100 = param_1[0x1c];
  iStack_fc = param_1[0x1d];
  iStack_f8 = param_1[0x1e];
  iStack_f4 = param_1[0x1f];
  if (cVar6 == '\0') {
    if (param_1[5] == 1) {
      FUN_1805ddbc0(param_1,&uStack_128);
    }
    else if ((*(uint *)((longlong)plVar20 + 0x1484) >> 7 & 1) != 0) {
      FUN_1805dd320(param_1,&uStack_128);
    }
  }
  else {
    lVar13 = *(longlong *)(lVar4 + 0x9d8);
    lVar8 = *(longlong *)(lVar4 + 0x20);
    if ((lVar13 == 0) ||
       (cVar6 = FUN_18038d0a0(lVar13,lVar8 + 0xc), lStack_120 = lVar13, cVar6 == '\0')) {
      lStack_120 = lVar22;
    }
    uStack_90 = 0;
    uStack_128 = *(undefined8 *)(*(longlong *)(lVar4 + 0x8d8) + 0x18);
    uStack_110 = *(undefined8 *)(lVar8 + 0xc);
    uStack_108 = *(undefined8 *)(lVar8 + 0x14);
    iStack_100 = *(int *)(lVar8 + 0xb0);
    iStack_fc = *(int *)(lVar8 + 0xb4);
    iStack_f8 = *(int *)(lVar8 + 0xb8);
    iStack_f4 = *(int *)(lVar8 + 0xbc);
    iStack_e8 = 3;
    lStack_118 = lVar13;
    uStack_f0 = uStack_110;
    uStack_c8 = uStack_128;
    uStack_b0 = uStack_110;
    uStack_a8 = uStack_108;
  }
  lVar13 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x9d8);
  alStack_d8[0] = lVar13;
  lVar8 = FUN_180488690(&uStack_128);
  cVar6 = (char)param_1[0x451];
  if (lVar13 == lVar8) {
LAB_1805dc854:
    if (cVar6 != '\0') {
      param_1[0x45e] = 0;
      *(undefined2 *)(param_1 + 0x451) = 0;
    }
  }
  else if (cVar6 == '\0') {
LAB_1805dc83e:
    if (*(int *)(lVar4 + 0x5f8) == 0) {
      cVar6 = (char)param_1[0x451];
      *param_1 = 9;
      goto LAB_1805dc854;
    }
  }
  else {
    lVar8 = FUN_180488690(&uStack_128);
    lVar9 = FUN_180488690(param_1 + 0x12);
    if (lVar8 != lVar9) goto LAB_1805dc83e;
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0x1145) = 1;
  }
  if (((float)uStack_110 != (float)param_1[0x18]) || (uStack_110._4_4_ != (float)param_1[0x19])) {
    *(undefined8 *)(param_1 + 0x12) = uStack_128;
    *(longlong *)(param_1 + 0x14) = lStack_120;
    *(longlong *)(param_1 + 0x16) = lStack_118;
    *(undefined8 *)(param_1 + 0x20) = uStack_f0;
    param_1[0x22] = iStack_e8;
    param_1[0x18] = (int)(float)uStack_110;
    param_1[0x19] = (int)uStack_110._4_4_;
    param_1[0x1a] = (int)uStack_108;
    param_1[0x1b] = uStack_108._4_4_;
    *(ulonglong *)(param_1 + 0x1c) = CONCAT44(iStack_fc,iStack_100);
    *(ulonglong *)(param_1 + 0x1e) = CONCAT44(iStack_f4,iStack_f8);
  }
  if ((char)param_1[0x451] == '\0') {
    iVar7 = *param_1;
    if (iVar7 == 0) {
      lVar8 = FUN_180488690(param_1 + 0x12);
      if ((lVar8 == lVar13) ||
         (lVar8 = *(longlong *)(lStackX_20 + 0x18), lVar13 = alStack_d8[0],
         *(longlong *)(lVar8 + 0x2ee8) - *(longlong *)(lVar8 + 12000) >> 3 == 0)) {
LAB_1805dc9ac:
        iVar7 = *param_1;
        bVar5 = true;
        goto LAB_1805dc9b4;
      }
      fStack_138 = (float)param_1[0x18] - *pfVar1;
      uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 0x1d0);
      lVar9 = *(longlong *)(param_1 + 8);
      fStack_134 = (float)param_1[0x19] - *(float *)(lStackX_10 + 0x10);
      uVar10 = FUN_180488690(param_1 + 0x12);
      lVar13 = alStack_d8[0];
      uVar27 = CONCAT44(uVar28,uVar2);
      in_stack_fffffffffffffe90 =
           (double)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe90 >> 8),1);
      cVar6 = FUN_1803944c0(lVar8 + 0x2a68,alStack_d8[0],uVar10,pfVar1,&fStack_138,
                            in_stack_fffffffffffffe90,uVar27,0,0,lVar9 + 0x2110,0);
      uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
      if (cVar6 != '\0') goto LAB_1805dc9ac;
      *param_1 = 6;
      bVar5 = false;
    }
    else {
      bVar5 = false;
LAB_1805dc9b4:
      if (iVar7 == 0) goto LAB_1805dcab1;
    }
    if (((param_1[5] == 1) &&
        (lVar8 = *(longlong *)((longlong)param_1[0x459] * 0xa60 + 0x30c0 + lStackX_20),
        fVar24 = *pfVar1 - *(float *)(lVar8 + 0xc),
        fVar25 = *(float *)(lStackX_10 + 0x10) - *(float *)(lVar8 + 0x10),
        fVar23 = *(float *)(lStackX_10 + 0x14) - *(float *)(lVar8 + 0x14),
        fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23 < 4.0)) ||
       (lVar8 = FUN_180488690(param_1 + 0x12), lVar8 == lVar13)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    puVar11 = &UNK_180a30c20;
    if (cVar6 != '\0') {
      puVar11 = &UNK_180a30bd8;
    }
    in_stack_fffffffffffffe90 = (double)*(float *)(lStackX_10 + 0x14);
    func_0x000180508000(*(undefined8 *)(param_1 + 8),&UNK_180a37590,*param_1,(double)*pfVar1,
                        (double)*(float *)(lStackX_10 + 0x10),in_stack_fffffffffffffe90,puVar11);
    uVar28 = (undefined4)((ulonglong)puVar11 >> 0x20);
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0x1145) = 1;
    if (cVar6 == '\0') {
      FUN_1805d98c0(param_1);
    }
  }
  else {
    bVar5 = false;
  }
LAB_1805dcab1:
  if (((char)param_1[0x451] == '\0') || (FUN_1805da5f0(param_1), (char)param_1[0x451] == '\0')) {
    if (bVar5) {
LAB_1805dcb34:
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      goto LAB_1805dcb38;
    }
    if ((char)param_1[0x44f] == '\0') {
      iVar7 = (int)(*(longlong *)(param_1 + 0x448) - *(longlong *)(param_1 + 0x446) >> 5);
    }
    else {
      iVar7 = param_1[0x44e];
    }
    if (0 < iVar7) goto LAB_1805dcb34;
    *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xc);
  }
  else {
    piVar12 = param_1 + 0x46;
    if ((char)param_1[0x44f] == '\0') {
      piVar12 = *(int **)(param_1 + 0x446);
    }
    uVar10 = *(undefined8 *)(piVar12 + (longlong)param_1[0x450] * 8);
LAB_1805dcb38:
    *(undefined8 *)(param_1 + 0xf) = uVar10;
  }
  puVar18 = (uint *)(param_1 + 10);
  *puVar18 = *puVar18 & 0xfffffd0f;
  FUN_1805e2950(param_1);
  if ((char)uStackX_8 == '\0') {
    lVar13 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar13 + 0x21c0) == '\0') {
      iVar7 = *(int *)(lVar13 + 0x14b4);
    }
    else {
      iVar7 = *(int *)(lVar13 + 0x21c4);
    }
    lVar8 = lVar22;
    if (((((-1 < iVar7) &&
          (lVar9 = *(longlong *)((longlong)iVar7 * 0xa60 + 0x3778 + *(longlong *)(lVar13 + 0x1488)),
          lVar9 != 0)) &&
         ((*(char *)(lVar9 + 0x8be) != '\0' &&
          ((((lVar8 = lVar21, (*(byte *)(lVar13 + 0x2098) & 2) == 0 &&
             (plVar20 = plStackX_18, lVar13 = func_0x0001805b6e80(plStackX_18), lVar13 != 0)) &&
            (lVar13 = func_0x0001805b6e80(), 0 < *(int *)(lVar13 + 0x30))) &&
           (((*(uint *)((longlong)*(int *)(lVar13 + 0xf0) * 0xa0 + 0x50 +
                       *(longlong *)(lVar13 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar13 + 8)))
           )))))) &&
        (lVar13 = func_0x0001805b6e80(plVar20),
        (*(byte *)((longlong)*(int *)(lVar13 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar13 + 0xd0))
         >> 1 & 1) != 0)) && (cVar6 = func_0x000180522f60(lVar4), cVar6 == '\0')) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x14a8);
      iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x1790);
      if (iVar7 == 0) {
        if (param_1[5] == 0) goto LAB_1805dcce2;
      }
      else if (iVar7 == 2) {
        if (param_1[5] != 0) {
          pfVar15 = (float *)FUN_1805b6980(plVar20);
          pfVar14 = (float *)FUN_180507fc0(plStackX_18);
          if (((*pfVar14 < *pfVar15 || *pfVar14 == *pfVar15) || ((char)param_1[0x451] != '\0')) ||
             (cVar6 = func_0x0001805b68f0(param_1), cVar6 != '\0')) goto LAB_1805dcc6d;
        }
LAB_1805dcce2:
        if ((((*(byte *)(*(longlong *)(param_1 + 8) + 0x2098) & 0x80) != 0) &&
            ((iVar3 - 1U & 0xfffffffc) == 0)) && (iVar3 != 3)) {
          fVar23 = (float)func_0x000180507ac0(puVar18);
          if (fVar23 < *(float *)(*(longlong *)(lVar4 + 0x20) + 0x84)) {
            fVar23 = *(float *)(*(longlong *)(lVar4 + 0x20) + 0x1d0);
            bVar5 = false;
            if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)param_1[0x44] * 8) -
                             *(longlong *)(param_1 + 0x42)) * 1e-05) {
              lVar22 = *(longlong *)(param_1 + 8);
              uVar19 = *(int *)(lVar22 + 0x1390) << 0xd ^ *(uint *)(lVar22 + 0x1390);
              uVar19 = uVar19 ^ uVar19 >> 0x11;
              uVar19 = uVar19 ^ uVar19 << 5;
              *(uint *)(lVar22 + 0x1390) = uVar19;
              lVar22 = *(longlong *)(param_1 + 8);
              uVar17 = *(int *)(lVar22 + 0x1390) << 0xd ^ *(uint *)(lVar22 + 0x1390);
              uVar17 = uVar17 ^ uVar17 >> 0x11;
              uVar17 = uVar17 ^ uVar17 << 5;
              *(uint *)(lVar22 + 0x1390) = uVar17;
              fVar24 = (float)param_1[0x24];
              fVar25 = ((float)(uVar17 - 1) * 2.3283064e-10 - 0.5) * fVar23 * 6.0 +
                       (float)param_1[0x18];
              fVar26 = ((float)(uVar19 - 1) * 2.3283064e-10 - 0.5) * fVar23 * 6.0 +
                       (float)param_1[0x19];
              uStackX_8 = CONCAT44(fVar26,fVar25);
              if (param_1[0x46a] == 0) {
                fVar24 = fVar24 * 1.2;
              }
              fVar25 = *pfVar1 - fVar25;
              fVar26 = *(float *)(lStackX_10 + 0x10) - fVar26;
              if ((fVar24 * fVar24 < fVar25 * fVar25 + fVar26 * fVar26) &&
                 (cVar6 = FUN_18052fef0(lVar4,&uStackX_8,1), cVar6 != '\0')) {
                fVar25 = *(float *)(lStackX_10 + 0x10) - uStackX_8._4_4_;
                if (fVar24 * fVar24 <
                    (*pfVar1 - (float)uStackX_8) * (*pfVar1 - (float)uStackX_8) + fVar25 * fVar25) {
                  lVar4 = *(longlong *)(param_1 + 8);
                  bVar5 = true;
                  uVar17 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
                  uVar17 = uVar17 ^ uVar17 >> 0x11;
                  uVar17 = uVar17 ^ uVar17 << 5;
                  *(uint *)(lVar4 + 0x1390) = uVar17;
                  *(longlong *)(param_1 + 0x42) =
                       *(longlong *)(&DAT_180c8ed30 + (longlong)param_1[0x44] * 8) -
                       (longlong)
                       ((-500000.0 - (float)(uVar17 - 1) * 0.00011641532) *
                       *(float *)(*(longlong *)(param_1 + 8) + 0x1450));
                  *(undefined8 *)(param_1 + 0x45a) = uStackX_8;
                }
              }
            }
            lVar4 = lStackX_10;
            cVar6 = FUN_180488880(param_1 + 0x45a);
            if ((cVar6 != '\0') &&
               ((bVar5 || (fVar24 = *(float *)(lVar4 + 0x10) - (float)param_1[0x45b],
                          (*pfVar1 - (float)param_1[0x45a]) * (*pfVar1 - (float)param_1[0x45a]) +
                          fVar24 * fVar24 < fVar23 * fVar23 * 81.0)))) {
              *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_1 + 0x45a);
              *puVar18 = *puVar18 & 0xfffffd0f;
              return 0;
            }
            goto LAB_1805dd000;
          }
        }
      }
LAB_1805dcc6d:
      if ((*(int *)(*(longlong *)(param_1 + 8) + 0x14a8) == 2) && (param_1[5] == 1)) {
        if (iVar3 - 1U < 2) {
          fVar23 = 0.25;
        }
        else {
          fVar23 = 0.6;
        }
        pfVar15 = (float *)FUN_180507fc0(plStackX_18);
        fVar24 = *pfVar15;
        pfVar15 = (float *)FUN_1805b6980();
        if (*pfVar15 <= fVar23 * fVar24 && fVar23 * fVar24 != *pfVar15) {
          if ((iVar3 - 2U & 0xfffffffd) == 0) {
            bVar5 = true;
            if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)param_1[0x40] * 8) -
                             *(longlong *)(param_1 + 0x3e)) * 1e-05) {
              lVar22 = *(longlong *)(param_1 + 8);
              if (*(int *)(lVar22 + 0x14e4) < 0) {
                fVar23 = *(float *)(lVar22 + 0x21a0) + *(float *)(lVar22 + 0x21a0);
              }
              else {
                fVar23 = (float)*(int *)(lVar22 + 0x1550) * 0.5;
              }
              pfVar15 = (float *)FUN_1805b6920(plStackX_18);
              lVar22 = *(longlong *)(param_1 + 8);
              fVar24 = pfVar15[1];
              fVar25 = *pfVar15;
              uVar17 = *(int *)(lVar22 + 0x1390) << 0xd ^ *(uint *)(lVar22 + 0x1390);
              uVar17 = uVar17 ^ uVar17 >> 0x11;
              uVar17 = uVar17 ^ uVar17 << 5;
              *(uint *)(lVar22 + 0x1390) = uVar17;
              if ((float)(uVar17 - 1) * 2.3283064e-10 <= 0.5) {
                fVar23 = -fVar23;
              }
              uStackX_8 = CONCAT44(*(float *)(lStackX_10 + 0x10) - fVar25 * fVar23,
                                   fVar24 * fVar23 + *pfVar1);
              FUN_18052fef0(lVar4,&uStackX_8,1,0);
              *(undefined8 *)(param_1 + 0xf) = uStackX_8;
              *puVar18 = *puVar18 & 0xfffffd0f;
              lVar4 = *(longlong *)(param_1 + 8);
              uVar17 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
              uVar17 = uVar17 ^ uVar17 >> 0x11;
              uVar17 = uVar17 ^ uVar17 << 5;
              *(uint *)(lVar4 + 0x1390) = uVar17;
              *(longlong *)(param_1 + 0x3e) =
                   *(longlong *)(&DAT_180c8ed30 + (longlong)param_1[0x40] * 8) -
                   (longlong)
                   ((-1e+06 - (float)(uVar17 - 1) * 0.00023283064) *
                   *(float *)(*(longlong *)(param_1 + 8) + 0x1450));
              lVar8 = 0x100;
              goto LAB_1805dd000;
            }
          }
          else {
            bVar5 = false;
          }
          if ((iVar3 == 3) || (bVar5)) goto LAB_1805dcff2;
        }
        else if (((char)param_1[0x451] == '\0') &&
                (cVar6 = func_0x0001805b68f0(param_1), cVar6 == '\0')) {
          lVar13 = *(longlong *)(lStackX_20 + 0x18);
          uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 0x1d0);
          if ((*puVar18 & 2) == 0) {
            *puVar18 = *puVar18 | 2;
            uStackX_8 = CONCAT44((float)param_1[0x19] - (float)param_1[0xc],
                                 (float)param_1[0x18] - (float)param_1[0xb]);
            *(undefined8 *)(param_1 + 0x2a) = uStackX_8;
          }
          uStackX_8 = *(undefined8 *)(param_1 + 0x2a);
          cVar6 = FUN_1803944c0(lVar13 + 0x2a68,
                                *(undefined8 *)(**(longlong **)(param_1 + 8) + 0x9d8),0,pfVar1,
                                &uStackX_8,(ulonglong)in_stack_fffffffffffffe90 & 0xffffffffffffff00
                                ,CONCAT44(uVar28,uVar2),0,0,0,&lStackX_10);
          if ((cVar6 == '\0') && (lStackX_10 != 0)) {
            if ((*puVar18 & 2) == 0) {
              *puVar18 = *puVar18 | 2;
              uStackX_8 = CONCAT44((float)param_1[0x19] - (float)param_1[0xc],
                                   (float)param_1[0x18] - (float)param_1[0xb]);
              *(undefined8 *)(param_1 + 0x2a) = uStackX_8;
            }
            uStackX_8 = *(undefined8 *)(param_1 + 0x2a);
            puVar16 = (undefined8 *)FUN_18038bc40(lStackX_10,alStack_d8,pfVar1,&uStackX_8);
            goto LAB_1805dd005;
          }
        }
      }
    }
  }
  else {
LAB_1805dcff2:
    *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)pfVar1;
    *puVar18 = *puVar18 & 0xfffffd0f;
    lVar8 = lVar21;
  }
LAB_1805dd000:
  puVar16 = (undefined8 *)FUN_1803975b0();
  lVar22 = lVar8;
LAB_1805dd005:
  *(undefined8 *)(param_1 + 0x45a) = *puVar16;
  return lVar22;
}



uint FUN_1805dc7e3(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong *in_RAX;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong unaff_RBP;
  uint *unaff_RDI;
  uint uVar17;
  float *unaff_R12;
  longlong unaff_R14;
  uint unaff_R15D;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM8_Da;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  lVar12 = *(longlong *)(*in_RAX + 0x9d8);
  *(longlong *)(unaff_RBP + -0x40) = lVar12;
  lVar8 = FUN_180488690(&stack0x00000070);
  cVar6 = (char)unaff_R15D;
  if (lVar12 == lVar8) {
    bVar18 = (char)unaff_RDI[0x451] == '\0';
LAB_1805dc854:
    if (!bVar18) {
      unaff_RDI[0x45e] = unaff_R15D;
      *(short *)(unaff_RDI + 0x451) = (short)unaff_R15D;
    }
  }
  else if ((char)unaff_RDI[0x451] == '\0') {
LAB_1805dc83e:
    if (*(uint *)(unaff_R14 + 0x5f8) == unaff_R15D) {
      bVar18 = (char)unaff_RDI[0x451] == cVar6;
      *unaff_RDI = 9;
      goto LAB_1805dc854;
    }
  }
  else {
    lVar8 = FUN_180488690(&stack0x00000070);
    lVar9 = FUN_180488690(unaff_RDI + 0x12);
    if (lVar8 != lVar9) goto LAB_1805dc83e;
    *unaff_RDI = unaff_R15D;
    *(undefined1 *)((longlong)unaff_RDI + 0x1145) = 1;
  }
  if ((*(float *)(unaff_RBP + -0x78) != (float)unaff_RDI[0x18]) ||
     (*(float *)(unaff_RBP + -0x74) != (float)unaff_RDI[0x19])) {
    uVar16 = *(uint *)(unaff_RBP + -0x78);
    uVar17 = *(uint *)(unaff_RBP + -0x74);
    uVar2 = *(uint *)(unaff_RBP + -0x70);
    uVar3 = *(uint *)(unaff_RBP + -0x6c);
    *(undefined8 *)(unaff_RDI + 0x12) = in_stack_00000070;
    uVar10 = *(undefined8 *)(unaff_RBP + -0x68);
    uVar4 = *(undefined8 *)(unaff_RBP + -0x60);
    *(undefined8 *)(unaff_RDI + 0x14) = in_stack_00000078;
    *(undefined8 *)(unaff_RDI + 0x16) = *(undefined8 *)(unaff_RBP + -0x80);
    *(undefined8 *)(unaff_RDI + 0x20) = *(undefined8 *)(unaff_RBP + -0x58);
    unaff_RDI[0x22] = *(uint *)(unaff_RBP + -0x50);
    unaff_RDI[0x18] = uVar16;
    unaff_RDI[0x19] = uVar17;
    unaff_RDI[0x1a] = uVar2;
    unaff_RDI[0x1b] = uVar3;
    *(undefined8 *)(unaff_RDI + 0x1c) = uVar10;
    *(undefined8 *)(unaff_RDI + 0x1e) = uVar4;
  }
  if ((char)unaff_RDI[0x451] == cVar6) {
    uVar16 = *unaff_RDI;
    if (uVar16 == 0) {
      lVar8 = FUN_180488690(unaff_RDI + 0x12);
      if (lVar8 == lVar12) {
LAB_1805dc9ac:
        uVar16 = *unaff_RDI;
        bVar18 = true;
        goto LAB_1805dc9b4;
      }
      lVar8 = *(longlong *)(*(longlong *)(unaff_RBP + 0xb8) + 0x18);
      if (*(longlong *)(lVar8 + 0x2ee8) - *(longlong *)(lVar8 + 12000) >> 3 == 0) {
        lVar12 = *(longlong *)(unaff_RBP + -0x40);
        goto LAB_1805dc9ac;
      }
      uVar10 = FUN_180488690(unaff_RDI + 0x12);
      lVar12 = *(longlong *)(unaff_RBP + -0x40);
      cVar5 = FUN_1803944c0(lVar8 + 0x2a68,lVar12,uVar10);
      if (cVar5 != '\0') goto LAB_1805dc9ac;
      *unaff_RDI = 6;
      bVar18 = false;
    }
    else {
      bVar18 = false;
LAB_1805dc9b4:
      if (uVar16 == 0) goto LAB_1805dcab1;
    }
    if (((unaff_RDI[5] == 1) &&
        (lVar8 = *(longlong *)
                  ((longlong)(int)unaff_RDI[0x459] * 0xa60 + 0x30c0 +
                  *(longlong *)(unaff_RBP + 0xb8)), fVar20 = *unaff_R12 - *(float *)(lVar8 + 0xc),
        fVar21 = *(float *)(*(longlong *)(unaff_RBP + 0xa8) + 0x10) - *(float *)(lVar8 + 0x10),
        fVar19 = *(float *)(*(longlong *)(unaff_RBP + 0xa8) + 0x14) - *(float *)(lVar8 + 0x14),
        fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19 < 4.0)) ||
       (lVar8 = FUN_180488690(unaff_RDI + 0x12), lVar8 == lVar12)) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
    func_0x000180508000(*(undefined8 *)(unaff_RDI + 8),&UNK_180a37590,*unaff_RDI,(double)*unaff_R12,
                        (double)*(float *)(*(longlong *)(unaff_RBP + 0xa8) + 0x10));
    *unaff_RDI = unaff_R15D;
    *(undefined1 *)((longlong)unaff_RDI + 0x1145) = 1;
    if (cVar5 == '\0') {
      FUN_1805d98c0();
    }
  }
  else {
    bVar18 = false;
  }
LAB_1805dcab1:
  if (((char)unaff_RDI[0x451] == '\0') || (FUN_1805da5f0(), (char)unaff_RDI[0x451] == '\0')) {
    if (bVar18) {
LAB_1805dcb34:
      uVar10 = *(undefined8 *)(unaff_RDI + 0x18);
      goto LAB_1805dcb38;
    }
    if ((char)unaff_RDI[0x44f] == cVar6) {
      uVar16 = (uint)(*(longlong *)(unaff_RDI + 0x448) - *(longlong *)(unaff_RDI + 0x446) >> 5);
    }
    else {
      uVar16 = unaff_RDI[0x44e];
    }
    if (0 < (int)uVar16) goto LAB_1805dcb34;
    *(undefined8 *)(unaff_RDI + 0xf) = *(undefined8 *)(*(longlong *)(unaff_R14 + 0x20) + 0xc);
  }
  else {
    puVar11 = unaff_RDI + 0x46;
    if ((char)unaff_RDI[0x44f] == cVar6) {
      puVar11 = *(uint **)(unaff_RDI + 0x446);
    }
    uVar10 = *(undefined8 *)(puVar11 + (longlong)(int)unaff_RDI[0x450] * 8);
LAB_1805dcb38:
    *(undefined8 *)(unaff_RDI + 0xf) = uVar10;
  }
  puVar11 = unaff_RDI + 10;
  *puVar11 = *puVar11 & 0xfffffd0f;
  FUN_1805e2950();
  if (*(char *)(unaff_RBP + 0xa0) == cVar6) {
    lVar12 = *(longlong *)(unaff_RDI + 8);
    if (*(char *)(lVar12 + 0x21c0) == cVar6) {
      iVar7 = *(int *)(lVar12 + 0x14b4);
    }
    else {
      iVar7 = *(int *)(lVar12 + 0x21c4);
    }
    if (((iVar7 < 0) ||
        (lVar8 = *(longlong *)((longlong)iVar7 * 0xa60 + 0x3778 + *(longlong *)(lVar12 + 0x1488)),
        lVar8 == 0)) ||
       ((*(char *)(lVar8 + 0x8be) == cVar6 || ((*(byte *)(lVar12 + 0x2098) & 2) != 0))))
    goto LAB_1805dd000;
    uVar10 = *(undefined8 *)(unaff_RBP + 0xb0);
    lVar12 = func_0x0001805b6e80(uVar10);
    if ((((lVar12 == 0) ||
         (lVar12 = func_0x0001805b6e80(), *(int *)(lVar12 + 0x30) <= (int)unaff_R15D)) ||
        (((*(uint *)((longlong)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar12 + 0xd0))
           >> 9 & 1) != 0 && (*(short *)(lVar12 + 8) <= (short)unaff_R15D)))) ||
       ((lVar12 = func_0x0001805b6e80(uVar10),
        (*(byte *)((longlong)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar12 + 0xd0))
         >> 1 & 1) == 0 || (cVar5 = func_0x000180522f60(), cVar5 != '\0')))) goto LAB_1805dd000;
    iVar7 = *(int *)(*(longlong *)(unaff_RDI + 8) + 0x14a8);
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 8) + 0x1790);
    if (iVar7 == 0) {
      if (unaff_RDI[5] == unaff_R15D) goto LAB_1805dcce2;
    }
    else if (iVar7 == 2) {
      if (unaff_RDI[5] != unaff_R15D) {
        pfVar14 = (float *)FUN_1805b6980(uVar10);
        pfVar13 = (float *)FUN_180507fc0(*(undefined8 *)(unaff_RBP + 0xb0));
        if (((*pfVar13 < *pfVar14 || *pfVar13 == *pfVar14) || ((char)unaff_RDI[0x451] != cVar6)) ||
           (cVar5 = func_0x0001805b68f0(), cVar5 != '\0')) goto LAB_1805dcc6d;
      }
LAB_1805dcce2:
      if ((((*(byte *)(*(longlong *)(unaff_RDI + 8) + 0x2098) & 0x80) != 0) &&
          ((iVar1 - 1U & 0xfffffffc) == 0)) && (iVar1 != 3)) {
        fVar19 = (float)func_0x000180507ac0(puVar11);
        if (fVar19 < *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x84)) {
          fVar19 = *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x1d0);
          bVar18 = false;
          if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x44] * 8) -
                     *(longlong *)(unaff_RDI + 0x42)) * 1e-05 <= unaff_XMM8_Da) {
            lVar12 = *(longlong *)(unaff_RBP + 0xa8);
          }
          else {
            lVar12 = *(longlong *)(unaff_RDI + 8);
            uVar17 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
            uVar17 = uVar17 ^ uVar17 >> 0x11;
            uVar17 = uVar17 ^ uVar17 << 5;
            *(uint *)(lVar12 + 0x1390) = uVar17;
            lVar12 = *(longlong *)(unaff_RDI + 8);
            uVar16 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
            uVar16 = uVar16 ^ uVar16 >> 0x11;
            uVar16 = uVar16 ^ uVar16 << 5;
            *(uint *)(lVar12 + 0x1390) = uVar16;
            fVar20 = (float)unaff_RDI[0x24];
            fVar21 = ((float)(uVar16 - 1) * 2.3283064e-10 - 0.5) * fVar19 * 6.0 +
                     (float)unaff_RDI[0x18];
            fVar22 = ((float)(uVar17 - 1) * 2.3283064e-10 - 0.5) * fVar19 * 6.0 +
                     (float)unaff_RDI[0x19];
            *(float *)(unaff_RBP + 0xa0) = fVar21;
            *(float *)(unaff_RBP + 0xa4) = fVar22;
            if (unaff_RDI[0x46a] == unaff_R15D) {
              fVar20 = fVar20 * 1.2;
            }
            lVar12 = *(longlong *)(unaff_RBP + 0xa8);
            fVar21 = *unaff_R12 - fVar21;
            fVar22 = *(float *)(lVar12 + 0x10) - fVar22;
            fVar21 = fVar21 * fVar21 + fVar22 * fVar22;
            if (fVar20 * fVar20 < fVar21) {
              cVar6 = FUN_18052fef0(fVar21,unaff_RBP + 0xa0,1);
              lVar12 = *(longlong *)(unaff_RBP + 0xa8);
              if ((cVar6 != '\0') &&
                 (fVar21 = *unaff_R12 - *(float *)(unaff_RBP + 0xa0),
                 fVar22 = *(float *)(lVar12 + 0x10) - *(float *)(unaff_RBP + 0xa4),
                 fVar20 * fVar20 < fVar21 * fVar21 + fVar22 * fVar22)) {
                lVar8 = *(longlong *)(unaff_RDI + 8);
                bVar18 = true;
                uVar16 = *(int *)(lVar8 + 0x1390) << 0xd ^ *(uint *)(lVar8 + 0x1390);
                uVar16 = uVar16 ^ uVar16 >> 0x11;
                uVar16 = uVar16 ^ uVar16 << 5;
                *(uint *)(lVar8 + 0x1390) = uVar16;
                uVar10 = *(undefined8 *)(unaff_RBP + 0xa0);
                *(longlong *)(unaff_RDI + 0x42) =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x44] * 8) -
                     (longlong)
                     ((-500000.0 - (float)(uVar16 - 1) * 0.00011641532) *
                     *(float *)(*(longlong *)(unaff_RDI + 8) + 0x1450));
                *(undefined8 *)(unaff_RDI + 0x45a) = uVar10;
              }
            }
          }
          cVar6 = FUN_180488880(unaff_RDI + 0x45a);
          if ((cVar6 != '\0') &&
             ((bVar18 ||
              (fVar20 = *(float *)(lVar12 + 0x10) - (float)unaff_RDI[0x45b],
              (*unaff_R12 - (float)unaff_RDI[0x45a]) * (*unaff_R12 - (float)unaff_RDI[0x45a]) +
              fVar20 * fVar20 < fVar19 * fVar19 * 81.0)))) {
            *(undefined8 *)(unaff_RDI + 0xf) = *(undefined8 *)(unaff_RDI + 0x45a);
            *puVar11 = *puVar11 & 0xfffffd0f;
            goto LAB_1805dd00f;
          }
          goto LAB_1805dd000;
        }
      }
    }
LAB_1805dcc6d:
    if ((*(int *)(*(longlong *)(unaff_RDI + 8) + 0x14a8) != 2) || (unaff_RDI[5] != 1))
    goto LAB_1805dd000;
    if (iVar1 - 1U < 2) {
      fVar19 = 0.25;
    }
    else {
      fVar19 = 0.6;
    }
    pfVar14 = (float *)FUN_180507fc0(*(undefined8 *)(unaff_RBP + 0xb0));
    fVar20 = *pfVar14;
    pfVar14 = (float *)FUN_1805b6980();
    if (*pfVar14 <= fVar19 * fVar20 && fVar19 * fVar20 != *pfVar14) {
      if ((iVar1 - 2U & 0xfffffffd) == 0) {
        bVar18 = true;
        if (unaff_XMM8_Da <
            (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x40] * 8) -
                   *(longlong *)(unaff_RDI + 0x3e)) * 1e-05) {
          lVar12 = *(longlong *)(unaff_RDI + 8);
          if (*(int *)(lVar12 + 0x14e4) < (int)unaff_R15D) {
            fVar19 = *(float *)(lVar12 + 0x21a0) + *(float *)(lVar12 + 0x21a0);
          }
          else {
            fVar19 = (float)*(int *)(lVar12 + 0x1550) * 0.5;
          }
          pfVar14 = (float *)FUN_1805b6920(*(undefined8 *)(unaff_RBP + 0xb0));
          lVar12 = *(longlong *)(unaff_RDI + 8);
          fVar20 = pfVar14[1];
          fVar21 = *pfVar14;
          uVar16 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
          uVar16 = uVar16 ^ uVar16 >> 0x11;
          uVar16 = uVar16 ^ uVar16 << 5;
          *(uint *)(lVar12 + 0x1390) = uVar16;
          if ((float)(uVar16 - 1) * 2.3283064e-10 <= 0.5) {
            fVar19 = -fVar19;
          }
          fVar21 = *(float *)(*(longlong *)(unaff_RBP + 0xa8) + 0x10) - fVar21 * fVar19;
          *(float *)(unaff_RBP + 0xa0) = fVar20 * fVar19 + *unaff_R12;
          *(float *)(unaff_RBP + 0xa4) = fVar21;
          FUN_18052fef0(fVar21,unaff_RBP + 0xa0,1,0);
          unaff_R15D = 0x100;
          *(undefined8 *)(unaff_RDI + 0xf) = *(undefined8 *)(unaff_RBP + 0xa0);
          *puVar11 = *puVar11 & 0xfffffd0f;
          lVar12 = *(longlong *)(unaff_RDI + 8);
          uVar16 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
          uVar16 = uVar16 ^ uVar16 >> 0x11;
          uVar16 = uVar16 ^ uVar16 << 5;
          *(uint *)(lVar12 + 0x1390) = uVar16;
          *(longlong *)(unaff_RDI + 0x3e) =
               *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RDI[0x40] * 8) -
               (longlong)
               ((-1e+06 - (float)(uVar16 - 1) * 0.00023283064) *
               *(float *)(*(longlong *)(unaff_RDI + 8) + 0x1450));
          goto LAB_1805dd000;
        }
      }
      else {
        bVar18 = false;
      }
      if ((iVar1 == 3) || (bVar18)) goto LAB_1805dcff2;
      goto LAB_1805dd000;
    }
    if (((char)unaff_RDI[0x451] != cVar6) || (cVar6 = func_0x0001805b68f0(), cVar6 != '\0'))
    goto LAB_1805dd000;
    lVar12 = *(longlong *)(*(longlong *)(unaff_RBP + 0xb8) + 0x18);
    if ((*puVar11 & 2) == 0) {
      fVar19 = (float)unaff_RDI[0x19];
      fVar20 = (float)unaff_RDI[0xc];
      *puVar11 = *puVar11 | 2;
      *(float *)(unaff_RBP + 0xa0) = (float)unaff_RDI[0x18] - (float)unaff_RDI[0xb];
      *(float *)(unaff_RBP + 0xa4) = fVar19 - fVar20;
      *(undefined8 *)(unaff_RDI + 0x2a) = *(undefined8 *)(unaff_RBP + 0xa0);
    }
    *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RDI + 0x2a);
    cVar6 = FUN_1803944c0(lVar12 + 0x2a68,*(undefined8 *)(**(longlong **)(unaff_RDI + 8) + 0x9d8),0)
    ;
    if ((cVar6 != '\0') || (lVar12 = *(longlong *)(unaff_RBP + 0xa8), lVar12 == 0))
    goto LAB_1805dd000;
    if ((*puVar11 & 2) == 0) {
      fVar19 = (float)unaff_RDI[0x19];
      fVar20 = (float)unaff_RDI[0xc];
      *puVar11 = *puVar11 | 2;
      *(float *)(unaff_RBP + 0xa0) = (float)unaff_RDI[0x18] - (float)unaff_RDI[0xb];
      *(float *)(unaff_RBP + 0xa4) = fVar19 - fVar20;
      *(undefined8 *)(unaff_RDI + 0x2a) = *(undefined8 *)(unaff_RBP + 0xa0);
    }
    *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RDI + 0x2a);
    puVar15 = (undefined8 *)FUN_18038bc40(lVar12,unaff_RBP + -0x40);
  }
  else {
LAB_1805dcff2:
    *(undefined8 *)(unaff_RDI + 0xf) = *(undefined8 *)unaff_R12;
    *puVar11 = *puVar11 & 0xfffffd0f;
LAB_1805dd000:
    puVar15 = (undefined8 *)FUN_1803975b0();
  }
  *(undefined8 *)(unaff_RDI + 0x45a) = *puVar15;
LAB_1805dd00f:
  return unaff_R15D & 0xffff;
}



uint FUN_1805dcb49(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong unaff_RBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint uVar12;
  undefined8 uVar13;
  float *unaff_R12;
  longlong unaff_R14;
  uint unaff_R15D;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  
  FUN_1805e2950();
  cVar5 = (char)unaff_R15D;
  if (*(char *)(unaff_RBP + 0xa0) == cVar5) {
    lVar7 = *(longlong *)(unaff_RDI + 0x20);
    if (*(char *)(lVar7 + 0x21c0) == cVar5) {
      iVar6 = *(int *)(lVar7 + 0x14b4);
    }
    else {
      iVar6 = *(int *)(lVar7 + 0x21c4);
    }
    if ((((iVar6 < 0) ||
         (lVar2 = *(longlong *)((longlong)iVar6 * 0xa60 + 0x3778 + *(longlong *)(lVar7 + 0x1488)),
         lVar2 == 0)) || (*(char *)(lVar2 + 0x8be) == cVar5)) ||
       ((*(byte *)(lVar7 + 0x2098) & 2) != 0)) goto LAB_1805dd000;
    uVar13 = *(undefined8 *)(unaff_RBP + 0xb0);
    lVar7 = func_0x0001805b6e80(uVar13);
    if ((((lVar7 == 0) || (lVar7 = func_0x0001805b6e80(), *(int *)(lVar7 + 0x30) <= (int)unaff_R15D)
         ) || (((*(uint *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 +
                          *(longlong *)(lVar7 + 0xd0)) >> 9 & 1) != 0 &&
               (*(short *)(lVar7 + 8) <= (short)unaff_R15D)))) ||
       ((lVar7 = func_0x0001805b6e80(uVar13),
        (*(byte *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >>
         1 & 1) == 0 || (cVar4 = func_0x000180522f60(), cVar4 != '\0')))) goto LAB_1805dd000;
    iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x14a8);
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x1790);
    if (iVar6 == 0) {
      if (*(uint *)(unaff_RDI + 0x14) == unaff_R15D) goto LAB_1805dcce2;
    }
    else if (iVar6 == 2) {
      if (*(uint *)(unaff_RDI + 0x14) != unaff_R15D) {
        pfVar9 = (float *)FUN_1805b6980(uVar13);
        pfVar8 = (float *)FUN_180507fc0(*(undefined8 *)(unaff_RBP + 0xb0));
        if (((*pfVar8 < *pfVar9 || *pfVar8 == *pfVar9) || (*(char *)(unaff_RDI + 0x1144) != cVar5))
           || (cVar4 = func_0x0001805b68f0(), cVar4 != '\0')) goto LAB_1805dcc6d;
      }
LAB_1805dcce2:
      if ((((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x2098) & 0x80) != 0) &&
          ((iVar1 - 1U & 0xfffffffc) == 0)) && (iVar1 != 3)) {
        fVar17 = (float)func_0x000180507ac0();
        if (fVar17 < *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x84)) {
          fVar17 = *(float *)(*(longlong *)(unaff_R14 + 0x20) + 0x1d0);
          bVar3 = false;
          if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0x110) * 8) -
                     *(longlong *)(unaff_RDI + 0x108)) * 1e-05 <= unaff_XMM8_Da) {
            lVar7 = *(longlong *)(unaff_RBP + 0xa8);
          }
          else {
            lVar7 = *(longlong *)(unaff_RDI + 0x20);
            uVar12 = *(int *)(lVar7 + 0x1390) << 0xd ^ *(uint *)(lVar7 + 0x1390);
            uVar12 = uVar12 ^ uVar12 >> 0x11;
            uVar12 = uVar12 ^ uVar12 << 5;
            *(uint *)(lVar7 + 0x1390) = uVar12;
            lVar7 = *(longlong *)(unaff_RDI + 0x20);
            uVar11 = *(int *)(lVar7 + 0x1390) << 0xd ^ *(uint *)(lVar7 + 0x1390);
            uVar11 = uVar11 ^ uVar11 >> 0x11;
            uVar11 = uVar11 ^ uVar11 << 5;
            *(uint *)(lVar7 + 0x1390) = uVar11;
            fVar16 = *(float *)(unaff_RDI + 0x90);
            fVar14 = ((float)(uVar11 - 1) * 2.3283064e-10 - 0.5) * fVar17 * 6.0 +
                     *(float *)(unaff_RDI + 0x60);
            fVar15 = ((float)(uVar12 - 1) * 2.3283064e-10 - 0.5) * fVar17 * 6.0 +
                     *(float *)(unaff_RDI + 100);
            *(float *)(unaff_RBP + 0xa0) = fVar14;
            *(float *)(unaff_RBP + 0xa4) = fVar15;
            if (*(uint *)(unaff_RDI + 0x11a8) == unaff_R15D) {
              fVar16 = fVar16 * 1.2;
            }
            lVar7 = *(longlong *)(unaff_RBP + 0xa8);
            fVar14 = *unaff_R12 - fVar14;
            fVar15 = *(float *)(lVar7 + 0x10) - fVar15;
            fVar14 = fVar14 * fVar14 + fVar15 * fVar15;
            if (fVar16 * fVar16 < fVar14) {
              cVar5 = FUN_18052fef0(fVar14,unaff_RBP + 0xa0,1);
              lVar7 = *(longlong *)(unaff_RBP + 0xa8);
              if ((cVar5 != '\0') &&
                 (fVar14 = *unaff_R12 - *(float *)(unaff_RBP + 0xa0),
                 fVar15 = *(float *)(lVar7 + 0x10) - *(float *)(unaff_RBP + 0xa4),
                 fVar16 * fVar16 < fVar14 * fVar14 + fVar15 * fVar15)) {
                lVar2 = *(longlong *)(unaff_RDI + 0x20);
                bVar3 = true;
                uVar11 = *(int *)(lVar2 + 0x1390) << 0xd ^ *(uint *)(lVar2 + 0x1390);
                uVar11 = uVar11 ^ uVar11 >> 0x11;
                uVar11 = uVar11 ^ uVar11 << 5;
                *(uint *)(lVar2 + 0x1390) = uVar11;
                uVar13 = *(undefined8 *)(unaff_RBP + 0xa0);
                *(longlong *)(unaff_RDI + 0x108) =
                     *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0x110) * 8) -
                     (longlong)
                     ((-500000.0 - (float)(uVar11 - 1) * 0.00011641532) *
                     *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x1450));
                *(undefined8 *)(unaff_RDI + 0x1168) = uVar13;
              }
            }
          }
          cVar5 = FUN_180488880(unaff_RDI + 0x1168);
          if ((cVar5 != '\0') &&
             ((bVar3 || (fVar14 = *unaff_R12 - *(float *)(unaff_RDI + 0x1168),
                        fVar16 = *(float *)(lVar7 + 0x10) - *(float *)(unaff_RDI + 0x116c),
                        fVar14 * fVar14 + fVar16 * fVar16 < fVar17 * fVar17 * 81.0)))) {
            *(undefined8 *)(unaff_RSI + 5) = *(undefined8 *)(unaff_RDI + 0x1168);
            *unaff_RSI = *unaff_RSI & 0xfffffd0f;
            goto LAB_1805dd00f;
          }
          goto LAB_1805dd000;
        }
      }
    }
LAB_1805dcc6d:
    if ((*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x14a8) != 2) ||
       (*(int *)(unaff_RDI + 0x14) != 1)) goto LAB_1805dd000;
    if (iVar1 - 1U < 2) {
      fVar17 = 0.25;
    }
    else {
      fVar17 = 0.6;
    }
    pfVar9 = (float *)FUN_180507fc0(*(undefined8 *)(unaff_RBP + 0xb0));
    fVar16 = *pfVar9;
    pfVar9 = (float *)FUN_1805b6980();
    if (*pfVar9 <= fVar17 * fVar16 && fVar17 * fVar16 != *pfVar9) {
      if ((iVar1 - 2U & 0xfffffffd) == 0) {
        bVar3 = true;
        if (unaff_XMM8_Da <
            (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0x100) * 8) -
                   *(longlong *)(unaff_RDI + 0xf8)) * 1e-05) {
          lVar7 = *(longlong *)(unaff_RDI + 0x20);
          if (*(int *)(lVar7 + 0x14e4) < (int)unaff_R15D) {
            fVar17 = *(float *)(lVar7 + 0x21a0) + *(float *)(lVar7 + 0x21a0);
          }
          else {
            fVar17 = (float)*(int *)(lVar7 + 0x1550) * 0.5;
          }
          pfVar9 = (float *)FUN_1805b6920(*(undefined8 *)(unaff_RBP + 0xb0));
          lVar7 = *(longlong *)(unaff_RDI + 0x20);
          fVar16 = pfVar9[1];
          fVar14 = *pfVar9;
          uVar11 = *(int *)(lVar7 + 0x1390) << 0xd ^ *(uint *)(lVar7 + 0x1390);
          uVar11 = uVar11 ^ uVar11 >> 0x11;
          uVar11 = uVar11 ^ uVar11 << 5;
          *(uint *)(lVar7 + 0x1390) = uVar11;
          if ((float)(uVar11 - 1) * 2.3283064e-10 <= 0.5) {
            fVar17 = -fVar17;
          }
          fVar14 = *(float *)(*(longlong *)(unaff_RBP + 0xa8) + 0x10) - fVar14 * fVar17;
          *(float *)(unaff_RBP + 0xa0) = fVar16 * fVar17 + *unaff_R12;
          *(float *)(unaff_RBP + 0xa4) = fVar14;
          FUN_18052fef0(fVar14,unaff_RBP + 0xa0,1,0);
          unaff_R15D = 0x100;
          *(undefined8 *)(unaff_RSI + 5) = *(undefined8 *)(unaff_RBP + 0xa0);
          *unaff_RSI = *unaff_RSI & 0xfffffd0f;
          lVar7 = *(longlong *)(unaff_RDI + 0x20);
          uVar11 = *(int *)(lVar7 + 0x1390) << 0xd ^ *(uint *)(lVar7 + 0x1390);
          uVar11 = uVar11 ^ uVar11 >> 0x11;
          uVar11 = uVar11 ^ uVar11 << 5;
          *(uint *)(lVar7 + 0x1390) = uVar11;
          *(longlong *)(unaff_RDI + 0xf8) =
               *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RDI + 0x100) * 8) -
               (longlong)
               ((-1e+06 - (float)(uVar11 - 1) * 0.00023283064) *
               *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x1450));
          goto LAB_1805dd000;
        }
      }
      else {
        bVar3 = false;
      }
      if ((iVar1 == 3) || (bVar3)) goto LAB_1805dcff2;
      goto LAB_1805dd000;
    }
    if ((*(char *)(unaff_RDI + 0x1144) != cVar5) || (cVar5 = func_0x0001805b68f0(), cVar5 != '\0'))
    goto LAB_1805dd000;
    lVar7 = *(longlong *)(*(longlong *)(unaff_RBP + 0xb8) + 0x18);
    if ((*unaff_RSI & 2) == 0) {
      fVar17 = (float)unaff_RSI[0xf];
      fVar16 = (float)unaff_RSI[2];
      *unaff_RSI = *unaff_RSI | 2;
      *(float *)(unaff_RBP + 0xa0) = (float)unaff_RSI[0xe] - (float)unaff_RSI[1];
      *(float *)(unaff_RBP + 0xa4) = fVar17 - fVar16;
      *(undefined8 *)(unaff_RSI + 0x20) = *(undefined8 *)(unaff_RBP + 0xa0);
    }
    *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RSI + 0x20);
    cVar5 = FUN_1803944c0(lVar7 + 0x2a68,*(undefined8 *)(**(longlong **)(unaff_RDI + 0x20) + 0x9d8),
                          0);
    if ((cVar5 != '\0') || (lVar7 = *(longlong *)(unaff_RBP + 0xa8), lVar7 == 0))
    goto LAB_1805dd000;
    if ((*unaff_RSI & 2) == 0) {
      fVar17 = (float)unaff_RSI[0xf];
      fVar16 = (float)unaff_RSI[2];
      *unaff_RSI = *unaff_RSI | 2;
      *(float *)(unaff_RBP + 0xa0) = (float)unaff_RSI[0xe] - (float)unaff_RSI[1];
      *(float *)(unaff_RBP + 0xa4) = fVar17 - fVar16;
      *(undefined8 *)(unaff_RSI + 0x20) = *(undefined8 *)(unaff_RBP + 0xa0);
    }
    *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RSI + 0x20);
    puVar10 = (undefined8 *)FUN_18038bc40(lVar7,unaff_RBP + -0x40);
  }
  else {
LAB_1805dcff2:
    *(undefined8 *)(unaff_RSI + 5) = *(undefined8 *)unaff_R12;
    *unaff_RSI = *unaff_RSI & 0xfffffd0f;
LAB_1805dd000:
    puVar10 = (undefined8 *)FUN_1803975b0();
  }
  *(undefined8 *)(unaff_RDI + 0x1168) = *puVar10;
LAB_1805dd00f:
  return unaff_R15D & 0xffff;
}









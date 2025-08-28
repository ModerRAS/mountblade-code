#include "TaleWorlds.Native.Split.h"

// 03_rendering_part218.c - 1 个函数

// 函数: void FUN_180391a3a(void)
void FUN_180391a3a(void)

{
  byte bVar1;
  float *pfVar2;
  uint64_t *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined7 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong unaff_RBP;
  uint unaff_ESI;
  int iVar18;
  uint64_t *puVar19;
  bool bVar20;
  ulonglong unaff_RDI;
  longlong *plVar21;
  uint64_t *puVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  char in_R11B;
  uint uVar28;
  longlong *plVar30;
  char cVar31;
  int32_t uVar32;
  float fVar33;
  int8_t auVar34 [16];
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
  uint uStackX_24;
  ulonglong in_stack_00000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  ulonglong uVar45;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  longlong lStack0000000000000050;
  uint64_t *puStack0000000000000058;
  longlong lStack0000000000000060;
  ulonglong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000150;
  char cStack0000000000000170;
  ulonglong uVar29;
  
  uVar12 = (uint)unaff_RBP;
  uVar8 = unaff_RBP & 0xffffffff;
  fStack0000000000000048 = 10000.0;
  if (*(byte *)(unaff_RDI + 0xa8) != 0) {
    uStack0000000000000030 = (uint)*(byte *)(unaff_RDI + 0xa8);
    puStack0000000000000058 = (uint64_t *)(unaff_RDI + 0x60);
    uVar11 = unaff_RBP;
    uVar14 = unaff_ESI;
    uStackX_24 = uVar12;
    uVar45 = unaff_RBP;
    uStack000000000000004c = unaff_ESI;
    cStack0000000000000170 = in_R11B;
    uVar24 = unaff_ESI;
    uVar15 = unaff_ESI;
    uStack0000000000000038 = unaff_ESI;
    do {
      uVar13 = (uint)uVar8;
      puVar10 = (uint64_t *)*puStack0000000000000058;
      if (*(char *)(puVar10 + 4) == '\x02') {
        uVar8 = puVar10[2];
        if (uVar8 == unaff_RDI) {
          uVar8 = puVar10[3];
        }
        pfVar2 = (float *)puVar10[1];
        bVar20 = false;
        uVar29 = 0xffffffff;
        uVar28 = 0xffffffff;
        uVar27 = 0xffffffff;
        uVar16 = 0xffffffff;
        fVar40 = 10001.0;
        fVar33 = *(float *)*puVar10;
        fVar37 = ((float *)*puVar10)[1];
        fVar42 = *pfVar2 - fVar33;
        fVar41 = fVar37 - pfVar2[1];
        fVar43 = (fVar33 + *pfVar2) * 0.5;
        fVar44 = (fVar37 + pfVar2[1]) * 0.5;
        fVar33 = fVar42 * fVar42 + fVar41 * fVar41;
        auVar34 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar37 = auVar34._0_4_;
        fVar33 = fVar37 * 0.5 * (3.0 - fVar33 * fVar37 * fVar37);
        fVar41 = fVar41 * fVar33;
        fVar42 = fVar42 * fVar33;
        if (0.0 < (*(float *)(in_stack_00000028 + 0xec) - fVar44) * fVar42 +
                  (*(float *)(in_stack_00000028 + 0xe8) - fVar43) * fVar41) {
          fVar41 = -fVar41;
          fVar42 = -fVar42;
        }
        uVar25 = unaff_RBP & 0xffffffff;
        if (*(byte *)(uVar8 + 0xa8) != 0) {
          puVar19 = (uint64_t *)(uVar8 + 0x60);
          do {
            puVar22 = (uint64_t *)*puVar19;
            if (((*(char *)(puVar22 + 4) == '\x02') && (puVar22 != puVar10)) &&
               ((puVar22[2] == in_stack_00000068 || (puVar22[3] == in_stack_00000068)))) {
              uVar11 = unaff_RBP & 0xffffffff;
              if (*(byte *)(in_stack_00000070 + 0xa8) != 0) {
                puVar22 = (uint64_t *)(in_stack_00000070 + 0x60);
                do {
                  puVar3 = (uint64_t *)*puVar22;
                  if (*(char *)(puVar3 + 4) != '\x02') {
                    pfVar2 = (float *)puVar3[1];
                    fVar33 = *(float *)*puVar3;
                    fVar37 = ((float *)*puVar3)[1];
                    fVar35 = fVar37 - pfVar2[1];
                    fVar36 = *pfVar2 - fVar33;
                    fVar38 = (fVar33 + *pfVar2) * 0.5;
                    fVar39 = (fVar37 + pfVar2[1]) * 0.5;
                    fVar33 = fVar36 * fVar36 + fVar35 * fVar35;
                    auVar34 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
                    fVar37 = auVar34._0_4_;
                    fVar33 = fVar37 * 0.5 * (3.0 - fVar33 * fVar37 * fVar37);
                    fVar36 = fVar33 * fVar36;
                    fVar33 = fVar33 * fVar35;
                    bVar5 = 0.0 < (*(float *)(in_stack_00000070 + 0xec) - fVar39) * fVar36 +
                                  (*(float *)(in_stack_00000070 + 0xe8) - fVar38) * fVar33;
                    if (bVar5) {
                      fVar33 = -fVar33;
                      fVar36 = -fVar36;
                    }
                    if (fVar36 * fVar42 + fVar33 * fVar41 <= -0.3) {
                      fVar38 = fVar38 - fVar43;
                      fVar39 = fVar39 - fVar44;
                      fVar37 = fVar39 * fVar39 + fVar38 * fVar38;
                      auVar34 = rsqrtss(ZEXT416((uint)fVar37),ZEXT416((uint)fVar37));
                      fVar33 = auVar34._0_4_;
                      fVar33 = fVar33 * 0.5 * (3.0 - fVar37 * fVar33 * fVar33);
                      fVar33 = fVar33 * fVar39 * fVar42 + fVar33 * fVar38 * fVar41;
                      if ((0.1 <= fVar33) && (fVar37 = fVar37 / fVar33, fVar37 < fVar40)) {
                        uVar27 = uVar11;
                        uVar29 = uVar25;
                        fVar40 = fVar37;
                        bVar20 = bVar5;
                      }
                    }
                  }
                  uVar14 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar14;
                  puVar22 = puVar22 + 1;
                } while ((int)uVar14 < (int)(uint)*(byte *)(in_stack_00000070 + 0xa8));
              }
            }
            uVar28 = (uint)uVar29;
            uVar16 = (uint)uVar27;
            uVar14 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar14;
            puVar19 = puVar19 + 1;
            uVar11 = uVar45;
            unaff_ESI = uStack000000000000004c;
            uVar13 = uStackX_24;
          } while ((int)uVar14 < (int)(uint)*(byte *)(uVar8 + 0xa8));
        }
        unaff_RDI = in_stack_00000028;
        uVar14 = uVar15;
        in_R11B = cStack0000000000000170;
        uVar24 = uStack0000000000000038;
        if (fVar40 < fStack0000000000000048) {
          uVar11 = uVar8;
          uVar14 = uVar28;
          unaff_ESI = uVar13;
          in_R11B = bVar20;
          uVar45 = uVar8;
          fStack0000000000000048 = fVar40;
          uStack000000000000004c = uVar13;
          cStack0000000000000170 = bVar20;
          uVar24 = uVar16;
          uVar15 = uVar28;
          uStack0000000000000038 = uVar16;
        }
      }
      uStackX_24 = uVar13 + 1;
      uVar8 = (ulonglong)uStackX_24;
      puStack0000000000000058 = puStack0000000000000058 + 1;
    } while ((int)uStackX_24 < (int)uStack0000000000000030);
    if (((((-1 < (int)unaff_ESI) && ((int)unaff_ESI < (int)uStack0000000000000030)) &&
         (-1 < (int)uVar14)) &&
        (((int)uVar14 < (int)(uint)*(byte *)(in_stack_00000068 + 0xa8) && (-1 < (int)uVar24)))) &&
       (((int)uVar24 < (int)(uint)*(byte *)(in_stack_00000070 + 0xa8) && (uVar11 != 0)))) {
      uVar8 = unaff_RBP & 0xffffffff;
      lVar17 = *(longlong *)(unaff_RDI + 0x60 + (longlong)(int)unaff_ESI * 8);
      lVar4 = *(longlong *)(in_stack_00000070 + 0x60 + (longlong)(int)uVar24 * 8);
      bVar1 = *(byte *)(uVar11 + 0xa8);
      lVar26 = *(longlong *)(uVar11 + 0x60 + (longlong)(int)uVar14 * 8);
      lStack0000000000000050 = lVar26;
      lStack0000000000000060 = lVar17;
      if (bVar1 != 0) {
        plVar23 = (longlong *)(uVar11 + 0x60);
        uStackX_24 = uVar12;
        do {
          uVar15 = (uint)uVar8;
          plVar9 = (longlong *)*plVar23;
          if ((plVar9[2] != in_stack_00000028) &&
             (((char)plVar9[4] != '\x02' || (plVar9[3] != in_stack_00000028)))) {
            if (plVar9[2] != in_stack_00000068) {
              if (((char)plVar9[4] != '\x02') || (plVar9[3] != in_stack_00000068)) {
                uVar27 = unaff_RBP & 0xffffffff;
                uVar8 = unaff_RBP;
                do {
                  iVar7 = (int)uVar27;
                  if (*plVar9 == *(longlong *)(lVar17 + uVar8 * 8)) break;
                  uVar27 = (ulonglong)((int)uVar27 + 1);
                  uVar8 = uVar8 + 1;
                  iVar7 = -1;
                } while ((longlong)uVar8 < 2);
                uVar27 = unaff_RBP & 0xffffffff;
                uVar8 = unaff_RBP;
                do {
                  uVar29 = unaff_RBP;
                  iVar18 = (int)uVar27;
                  if (plVar9[1] == *(longlong *)(lVar17 + uVar8 * 8)) break;
                  uVar27 = (ulonglong)((int)uVar27 + 1);
                  uVar8 = uVar8 + 1;
                  iVar18 = iVar7;
                } while ((longlong)uVar8 < 2);
                do {
                  puVar10 = (uint64_t *)plVar9[uVar29];
                  plVar21 = plVar9;
                  uVar8 = unaff_RBP;
                  puStack0000000000000058 = puVar10;
                  do {
                    plVar9 = plVar21;
                    if (puVar10 == *(uint64_t **)(lVar26 + uVar8 * 8)) {
                      bVar20 = in_R11B == '\0';
                      if ((char)plVar21[4] == '\x02') {
                        if (plVar21[2] == uVar11) {
                          plVar21[2] = plVar21[3];
                        }
                        plVar21[3] = unaff_RBP;
                        *(char *)(plVar21 + 4) = (char)unaff_RBP;
                        if (plVar21[2] != unaff_RBP) {
                          *(int8_t *)(plVar21 + 4) = 1;
                        }
                        FUN_18038b160(plVar21[2]);
                      }
                      else {
                        FUN_18038d8f0(in_stack_00000150,plVar21);
                      }
                      uVar6 = (undefined7)(unaff_RBP >> 8);
                      plVar30 = plVar21;
                      if (uVar29 == 0) {
                        if (bVar20) {
                          plVar30 = (longlong *)
                                    ((longlong)(int)CONCAT71(uVar6,iVar18 == 0) * 8 + lVar4);
                        }
                        else {
                          plVar30 = (longlong *)((longlong)iVar18 * 8 + lVar4);
                        }
                      }
                      if (uVar29 == 1) {
                        if (bVar20) {
                          lVar17 = *(longlong *)
                                    (lVar4 + (longlong)(int)CONCAT71(uVar6,iVar18 == 0) * 8);
                        }
                        else {
                          lVar17 = *(longlong *)(lVar4 + (longlong)iVar18 * 8);
                        }
                      }
                      else {
                        lVar17 = plVar21[1];
                      }
                      puVar10 = *(uint64_t **)(in_stack_00000150 + 0x458);
                      uVar11 = unaff_RBP & 0xffffffff;
                      uVar27 = *(longlong *)(in_stack_00000150 + 0x460) - (longlong)puVar10 >> 3;
                      if (uVar27 != 0) {
                        do {
                          plVar9 = (longlong *)*puVar10;
                          if (((*plVar9 == *plVar30) && (plVar9[1] == lVar17)) ||
                             ((*plVar9 == lVar17 && (plVar9[1] == *plVar30)))) {
                            *(int8_t *)(plVar9 + 4) = 2;
                            plVar9[3] = uVar45;
                            *plVar23 = (longlong)plVar9;
                            FUN_18038b160(plVar9[2]);
                            puVar10 = puStack0000000000000058;
                            lVar26 = lStack0000000000000050;
                            uVar11 = uVar45;
                            goto LAB_1803922c3;
                          }
                          uVar15 = (int)uVar11 + 1;
                          uVar11 = (ulonglong)uVar15;
                          puVar10 = puVar10 + 1;
                        } while ((ulonglong)(longlong)(int)uVar15 < uVar27);
                      }
                      if (uVar29 == 1) {
                        if (bVar20) {
                          lVar17 = *(longlong *)
                                    (lVar4 + (longlong)(int)CONCAT71(uVar6,iVar18 == 0) * 8);
                        }
                        else {
                          lVar17 = *(longlong *)(lVar4 + (longlong)iVar18 * 8);
                        }
                      }
                      else {
                        lVar17 = plVar21[1];
                        if (uVar29 == 0) {
                          iVar7 = iVar18;
                          if (bVar20) {
                            iVar7 = (int)CONCAT71(uVar6,iVar18 == 0);
                          }
                          plVar21 = (longlong *)((longlong)iVar7 * 8 + lVar4);
                        }
                      }
                      lVar26 = *plVar21;
                      plVar9 = (longlong *)FUN_18038c180(in_stack_00000150);
                      plVar9[1] = lVar17;
                      *plVar9 = lVar26;
                      *(int8_t *)(plVar9 + 4) = 1;
                      plVar9[2] = uVar45;
                      *plVar23 = (longlong)plVar9;
                      puVar10 = puStack0000000000000058;
                      lVar26 = lStack0000000000000050;
                      uVar11 = uVar45;
                    }
LAB_1803922c3:
                    uVar8 = uVar8 + 1;
                    plVar21 = plVar9;
                    in_R11B = cStack0000000000000170;
                  } while ((longlong)uVar8 < 2);
                  uVar29 = uVar29 + 1;
                  lVar17 = lStack0000000000000060;
                  uVar15 = uStackX_24;
                } while ((longlong)uVar29 < 2);
                goto LAB_180392028;
              }
              plVar9[2] = in_stack_00000068;
            }
            *(int8_t *)(plVar9 + 4) = 1;
            plVar9[3] = unaff_RBP;
            func_0x00018038ac80(plVar9);
            *plVar23 = lVar4;
            *(int8_t *)(lVar4 + 0x20) = 2;
            *(ulonglong *)(lVar4 + 0x18) = uVar11;
          }
LAB_180392028:
          bVar1 = *(byte *)(uVar11 + 0xa8);
          uStackX_24 = uVar15 + 1;
          uVar8 = (ulonglong)uStackX_24;
          plVar23 = plVar23 + 1;
          unaff_RDI = in_stack_00000028;
          in_R11B = cStack0000000000000170;
        } while ((int)uStackX_24 < (int)(uint)bVar1);
      }
      uVar8 = unaff_RBP & 0xffffffff;
      if (bVar1 != 0) {
        plVar23 = (longlong *)(uVar11 + 0x60);
        do {
          lVar17 = *plVar23;
          *(char *)(lVar17 + 0x20) = (char)unaff_RBP;
          cVar31 = *(ulonglong *)(lVar17 + 0x10) != unaff_RBP;
          if ((bool)cVar31) {
            *(int8_t *)(lVar17 + 0x20) = 1;
          }
          if (*(ulonglong *)(lVar17 + 0x18) != unaff_RBP) {
            cVar31 = cVar31 + '\x01';
            *(char *)(lVar17 + 0x20) = cVar31;
          }
          if ((cVar31 == '\x01') && (*(longlong *)(lVar17 + 0x18) != 0)) {
            *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x18);
            *(ulonglong *)(lVar17 + 0x18) = unaff_RBP;
          }
          bVar1 = *(byte *)(uVar11 + 0xa8);
          uVar15 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar15;
          plVar23 = plVar23 + 1;
        } while ((int)uVar15 < (int)(uint)bVar1);
      }
      uVar27 = unaff_RBP & 0xffffffff;
      uVar8 = unaff_RBP;
      if (bVar1 != 0) {
        do {
          plVar23 = *(longlong **)(uVar11 + 0x60 + uVar8 * 8);
          uVar15 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar15;
          uVar29 = unaff_RBP;
          if (uVar15 != bVar1) {
            uVar29 = uVar8 + 1;
          }
          plVar9 = *(longlong **)(uVar11 + 0x60 + uVar29 * 8);
          if ((*plVar23 == *plVar9) || (uVar14 = 0xffffffff, *plVar23 == plVar9[1])) {
            uVar14 = uVar12;
          }
          if ((plVar23[1] == *plVar9) || (plVar23[1] == plVar9[1])) {
            uVar14 = 1;
          }
          uVar11 = unaff_RBP;
          if (uVar14 == 0) {
            uVar11 = 8;
          }
          *(uint64_t *)(uVar45 + 0x80 + uVar8 * 8) = *(uint64_t *)(uVar11 + (longlong)plVar23);
          bVar1 = *(byte *)(uVar45 + 0xa8);
          uVar8 = uVar8 + 1;
          uVar11 = uVar45;
        } while ((int)uVar15 < (int)(uint)bVar1);
      }
      FUN_18038b160(unaff_RDI);
      FUN_18038af00(unaff_RDI);
      uVar15 = uVar12;
      if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
        uVar15 = *(uint *)(*(longlong *)(unaff_RDI + 0xb0) + 0x134);
      }
      if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(unaff_RDI + 0xb8) + 0x134);
      }
      if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(unaff_RDI + 0xc0) + 0x134);
      }
      if (*(longlong *)(unaff_RDI + 200) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(unaff_RDI + 200) + 0x134);
      }
      uVar14 = 0xffffffff;
      if (uVar15 != 0) {
        uVar14 = uVar15;
      }
      *(uint *)(unaff_RDI + 0x134) = uVar14;
      FUN_18038b160(in_stack_00000068);
      FUN_18038af00(in_stack_00000068);
      uVar15 = uVar12;
      if (*(longlong *)(in_stack_00000068 + 0xb0) != 0) {
        uVar15 = *(uint *)(*(longlong *)(in_stack_00000068 + 0xb0) + 0x134);
      }
      if (*(longlong *)(in_stack_00000068 + 0xb8) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(in_stack_00000068 + 0xb8) + 0x134);
      }
      if (*(longlong *)(in_stack_00000068 + 0xc0) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(in_stack_00000068 + 0xc0) + 0x134);
      }
      if (*(longlong *)(in_stack_00000068 + 200) != 0) {
        uVar15 = uVar15 | *(uint *)(*(longlong *)(in_stack_00000068 + 200) + 0x134);
      }
      uVar14 = 0xffffffff;
      if (uVar15 != 0) {
        uVar14 = uVar15;
      }
      *(uint *)(in_stack_00000068 + 0x134) = uVar14;
      FUN_18038b160(in_stack_00000070);
      FUN_18038af00(in_stack_00000070);
      if (*(longlong *)(in_stack_00000070 + 0xb0) != 0) {
        uVar12 = *(uint *)(*(longlong *)(in_stack_00000070 + 0xb0) + 0x134);
      }
      if (*(longlong *)(in_stack_00000070 + 0xb8) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(in_stack_00000070 + 0xb8) + 0x134);
      }
      if (*(longlong *)(in_stack_00000070 + 0xc0) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(in_stack_00000070 + 0xc0) + 0x134);
      }
      if (*(longlong *)(in_stack_00000070 + 200) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(in_stack_00000070 + 200) + 0x134);
      }
      uVar15 = 0xffffffff;
      if (uVar12 != 0) {
        uVar15 = uVar12;
      }
      *(uint *)(in_stack_00000070 + 0x134) = uVar15;
      FUN_18038b160(uVar45);
      uVar32 = FUN_18038af00(uVar45);
      if (*(longlong *)(uVar45 + 0xb0) != 0) {
        unaff_RBP = (ulonglong)*(uint *)(*(longlong *)(uVar45 + 0xb0) + 0x134);
      }
      uVar12 = (uint)unaff_RBP;
      if (*(longlong *)(uVar45 + 0xb8) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(uVar45 + 0xb8) + 0x134);
      }
      if (*(longlong *)(uVar45 + 0xc0) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(uVar45 + 0xc0) + 0x134);
      }
      if (*(longlong *)(uVar45 + 200) != 0) {
        uVar12 = uVar12 | *(uint *)(*(longlong *)(uVar45 + 200) + 0x134);
      }
      uVar15 = 0xffffffff;
      if (uVar12 != 0) {
        uVar15 = uVar12;
      }
      *(uint *)(uVar45 + 0x134) = uVar15;
      uVar32 = FUN_18038ee20(uVar32,in_stack_00000028,0xffffffff);
      uVar32 = FUN_18038ee20(uVar32,in_stack_00000068,0xffffffff);
      uVar32 = FUN_18038ee20(uVar32,in_stack_00000070,0xffffffff);
      uVar32 = FUN_18038ee20(uVar32,uVar45,0xffffffff);
      *(int *)(in_stack_00000150 + 0x530) = *(int *)(in_stack_00000150 + 0x530) + 1;
      uVar32 = FUN_18038ee20(uVar32,in_stack_00000028,*(int32_t *)(in_stack_00000150 + 0x530));
      *(int *)(in_stack_00000150 + 0x530) = *(int *)(in_stack_00000150 + 0x530) + 1;
      FUN_18038ee20(uVar32,in_stack_00000068,*(int32_t *)(in_stack_00000150 + 0x530));
    }
  }
  return;
}






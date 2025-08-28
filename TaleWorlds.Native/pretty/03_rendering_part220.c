#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part220.c - 1 个函数

// 函数: void FUN_180391aa6(uint64_t param_1,uint param_2,uint64_t param_3,int param_4,int64_t param_5,
void FUN_180391aa6(uint64_t param_1,uint param_2,uint64_t param_3,int param_4,int64_t param_5,
                  uint64_t param_6,int param_7,int64_t param_8,uint64_t param_9,
                  uint64_t param_10,uint64_t param_11,uint64_t param_12,int64_t param_13,
                  int64_t param_14)

{
  byte bVar1;
  float *pfVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint8_t uVar6;
  bool bVar7;
  byte in_AL;
  uint64_t uVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int iVar17;
  int iVar18;
  uint64_t *puVar19;
  int64_t unaff_RDI;
  int64_t *plVar20;
  uint64_t *puVar21;
  int64_t *plVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t in_R10;
  uint64_t uVar25;
  char in_R11B;
  int64_t *plVar26;
  int64_t unaff_R14;
  char cVar27;
  int32_t uVar28;
  float fVar29;
  int8_t auVar30 [16];
  float fVar31;
  float in_XMM5_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uStackX_24;
  int64_t in_stack_00000150;
  char in_stack_00000170;
  
  param_6._0_4_ = (uint)in_AL;
  param_11 = (uint64_t *)(unaff_RDI + 0x60);
  do {
    puVar10 = (uint64_t *)*param_11;
    uVar14 = (uint)unaff_RBP;
    lVar24 = in_R10;
    lVar4 = param_8;
    fVar36 = (float)param_9;
    iVar18 = param_9._4_4_;
    uVar8 = param_12;
    cVar27 = in_stack_00000170;
    iVar12 = param_7;
    if (*(char *)(puVar10 + 4) == '\x02') {
      lVar24 = puVar10[2];
      if (lVar24 == unaff_RDI) {
        lVar24 = puVar10[3];
      }
      pfVar2 = (float *)puVar10[1];
      in_R11B = false;
      param_1 = 0xffffffff;
      uVar8 = 0xffffffff;
      param_4 = -1;
      fVar36 = 10001.0;
      fVar29 = *(float *)*puVar10;
      fVar33 = ((float *)*puVar10)[1];
      fVar38 = *pfVar2 - fVar29;
      fVar37 = fVar33 - pfVar2[1];
      fVar39 = (fVar29 + *pfVar2) * 0.5;
      fVar40 = (fVar33 + pfVar2[1]) * 0.5;
      fVar29 = fVar38 * fVar38 + fVar37 * fVar37;
      auVar30 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
      fVar33 = auVar30._0_4_;
      fVar29 = fVar33 * 0.5 * (3.0 - fVar29 * fVar33 * fVar33);
      fVar37 = fVar37 * fVar29;
      fVar38 = fVar38 * fVar29;
      if (in_XMM5_Da <
          (*(float *)(param_5 + 0xec) - fVar40) * fVar38 +
          (*(float *)(param_5 + 0xe8) - fVar39) * fVar37) {
        fVar37 = -fVar37;
        fVar38 = -fVar38;
      }
      uVar15 = unaff_RBP & 0xffffffff;
      iVar17 = unaff_ESI;
      if (*(byte *)(lVar24 + 0xa8) != 0) {
        puVar19 = (uint64_t *)(lVar24 + 0x60);
        do {
          puVar21 = (uint64_t *)*puVar19;
          if (((*(char *)(puVar21 + 4) == '\x02') && (puVar21 != puVar10)) &&
             ((puVar21[2] == param_13 || (puVar21[3] == param_13)))) {
            uVar11 = unaff_RBP & 0xffffffff;
            if (*(byte *)(unaff_R14 + 0xa8) != 0) {
              puVar21 = (uint64_t *)(unaff_R14 + 0x60);
              do {
                puVar3 = (uint64_t *)*puVar21;
                if (*(char *)(puVar3 + 4) != '\x02') {
                  pfVar2 = (float *)puVar3[1];
                  fVar29 = *(float *)*puVar3;
                  fVar33 = ((float *)*puVar3)[1];
                  fVar31 = fVar33 - pfVar2[1];
                  fVar32 = *pfVar2 - fVar29;
                  fVar34 = (fVar29 + *pfVar2) * 0.5;
                  fVar35 = (fVar33 + pfVar2[1]) * 0.5;
                  fVar29 = fVar32 * fVar32 + fVar31 * fVar31;
                  auVar30 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
                  fVar33 = auVar30._0_4_;
                  fVar29 = fVar33 * 0.5 * (3.0 - fVar29 * fVar33 * fVar33);
                  fVar32 = fVar29 * fVar32;
                  fVar29 = fVar29 * fVar31;
                  bVar7 = 0.0 < (*(float *)(unaff_R14 + 0xec) - fVar35) * fVar32 +
                                (*(float *)(unaff_R14 + 0xe8) - fVar34) * fVar29;
                  if (bVar7) {
                    fVar29 = -fVar29;
                    fVar32 = -fVar32;
                  }
                  if (fVar32 * fVar38 + fVar29 * fVar37 <= -0.3) {
                    fVar34 = fVar34 - fVar39;
                    fVar35 = fVar35 - fVar40;
                    fVar33 = fVar35 * fVar35 + fVar34 * fVar34;
                    auVar30 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
                    fVar29 = auVar30._0_4_;
                    fVar29 = fVar29 * 0.5 * (3.0 - fVar33 * fVar29 * fVar29);
                    fVar29 = fVar29 * fVar35 * fVar38 + fVar29 * fVar34 * fVar37;
                    if ((0.1 <= fVar29) && (fVar33 = fVar33 / fVar29, fVar33 < fVar36)) {
                      uVar8 = uVar11;
                      param_1 = uVar15;
                      fVar36 = fVar33;
                      in_R11B = bVar7;
                    }
                  }
                }
                uVar16 = (int)uVar11 + 1;
                uVar11 = (uint64_t)uVar16;
                puVar21 = puVar21 + 1;
              } while ((int)uVar16 < (int)(uint)*(byte *)(unaff_R14 + 0xa8));
            }
          }
          param_4 = (int)uVar8;
          uVar16 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar16;
          puVar19 = puVar19 + 1;
        } while ((int)uVar16 < (int)(uint)*(byte *)(lVar24 + 0xa8));
        in_XMM5_Da = 0.0;
        in_R10 = param_8;
        param_2 = uStackX_24;
        iVar17 = param_9._4_4_;
      }
      unaff_RDI = param_5;
      unaff_ESI = param_2;
      lVar4 = lVar24;
      iVar18 = param_2;
      uVar8 = param_1;
      cVar27 = in_R11B;
      iVar12 = param_4;
      if ((float)param_9 <= fVar36) {
        param_1 = param_12 & 0xffffffff;
        lVar24 = in_R10;
        unaff_ESI = iVar17;
        lVar4 = param_8;
        fVar36 = (float)param_9;
        iVar18 = param_9._4_4_;
        uVar8 = param_12;
        cVar27 = in_stack_00000170;
        param_4 = param_7;
        in_R11B = in_stack_00000170;
        iVar12 = param_7;
      }
    }
    in_stack_00000170 = cVar27;
    param_12 = uVar8;
    param_9._4_4_ = iVar18;
    param_9._0_4_ = fVar36;
    param_8 = lVar4;
    param_2 = param_2 + 1;
    param_11 = param_11 + 1;
    in_R10 = lVar24;
    uStackX_24 = param_2;
    param_7 = iVar12;
  } while ((int)param_2 < (int)(uint)param_6);
  if (((((-1 < unaff_ESI) && (unaff_ESI < (int)(uint)param_6)) &&
       (iVar12 = (int)param_1, -1 < iVar12)) &&
      ((iVar12 < (int)(uint)*(byte *)(param_13 + 0xa8) && (-1 < param_4)))) &&
     ((param_4 < (int)(uint)*(byte *)(param_14 + 0xa8) && (lVar24 != 0)))) {
    uVar8 = unaff_RBP & 0xffffffff;
    lVar4 = *(int64_t *)(unaff_RDI + 0x60 + (int64_t)unaff_ESI * 8);
    lVar5 = *(int64_t *)(param_14 + 0x60 + (int64_t)param_4 * 8);
    bVar1 = *(byte *)(lVar24 + 0xa8);
    lVar23 = *(int64_t *)(lVar24 + 0x60 + (int64_t)iVar12 * 8);
    param_10 = lVar23;
    if (bVar1 != 0) {
      plVar22 = (int64_t *)(lVar24 + 0x60);
      uStackX_24 = uVar14;
      do {
        uVar16 = (uint)uVar8;
        plVar9 = (int64_t *)*plVar22;
        if ((plVar9[2] != param_5) && (((char)plVar9[4] != '\x02' || (plVar9[3] != param_5)))) {
          if (plVar9[2] != param_13) {
            if (((char)plVar9[4] != '\x02') || (plVar9[3] != param_13)) {
              uVar15 = unaff_RBP & 0xffffffff;
              uVar8 = unaff_RBP;
              do {
                iVar12 = (int)uVar15;
                if (*plVar9 == *(int64_t *)(lVar4 + uVar8 * 8)) break;
                uVar15 = (uint64_t)((int)uVar15 + 1);
                uVar8 = uVar8 + 1;
                iVar12 = -1;
              } while ((int64_t)uVar8 < 2);
              uVar15 = unaff_RBP & 0xffffffff;
              uVar8 = unaff_RBP;
              do {
                uVar11 = unaff_RBP;
                iVar18 = (int)uVar15;
                if (plVar9[1] == *(int64_t *)(lVar4 + uVar8 * 8)) break;
                uVar15 = (uint64_t)((int)uVar15 + 1);
                uVar8 = uVar8 + 1;
                iVar18 = iVar12;
              } while ((int64_t)uVar8 < 2);
              do {
                puVar10 = (uint64_t *)plVar9[uVar11];
                plVar20 = plVar9;
                uVar8 = unaff_RBP;
                param_11 = puVar10;
                do {
                  plVar9 = plVar20;
                  if (puVar10 == *(uint64_t **)(lVar23 + uVar8 * 8)) {
                    bVar7 = in_R11B == '\0';
                    if ((char)plVar20[4] == '\x02') {
                      if (plVar20[2] == lVar24) {
                        plVar20[2] = plVar20[3];
                      }
                      plVar20[3] = unaff_RBP;
                      *(char *)(plVar20 + 4) = (char)unaff_RBP;
                      if (plVar20[2] != unaff_RBP) {
                        *(int8_t *)(plVar20 + 4) = 1;
                      }
                      SystemCore_ProcessManager(plVar20[2]);
                    }
                    else {
                      FUN_18038d8f0(in_stack_00000150,plVar20);
                    }
                    uVar6 = (uint8_t)(unaff_RBP >> 8);
                    plVar26 = plVar20;
                    if (uVar11 == 0) {
                      if (bVar7) {
                        plVar26 = (int64_t *)
                                  ((int64_t)(int)CONCAT71(uVar6,iVar18 == 0) * 8 + lVar5);
                      }
                      else {
                        plVar26 = (int64_t *)((int64_t)iVar18 * 8 + lVar5);
                      }
                    }
                    if (uVar11 == 1) {
                      if (bVar7) {
                        lVar24 = *(int64_t *)
                                  (lVar5 + (int64_t)(int)CONCAT71(uVar6,iVar18 == 0) * 8);
                      }
                      else {
                        lVar24 = *(int64_t *)(lVar5 + (int64_t)iVar18 * 8);
                      }
                    }
                    else {
                      lVar24 = plVar20[1];
                    }
                    puVar10 = *(uint64_t **)(in_stack_00000150 + 0x458);
                    uVar15 = unaff_RBP & 0xffffffff;
                    uVar25 = *(int64_t *)(in_stack_00000150 + 0x460) - (int64_t)puVar10 >> 3;
                    if (uVar25 != 0) {
                      do {
                        plVar9 = (int64_t *)*puVar10;
                        if (((*plVar9 == *plVar26) && (plVar9[1] == lVar24)) ||
                           ((*plVar9 == lVar24 && (plVar9[1] == *plVar26)))) {
                          *(int8_t *)(plVar9 + 4) = 2;
                          plVar9[3] = param_8;
                          *plVar22 = (int64_t)plVar9;
                          SystemCore_ProcessManager(plVar9[2]);
                          puVar10 = param_11;
                          lVar23 = param_10;
                          lVar24 = param_8;
                          goto LAB_1803922c3;
                        }
                        uVar16 = (int)uVar15 + 1;
                        uVar15 = (uint64_t)uVar16;
                        puVar10 = puVar10 + 1;
                      } while ((uint64_t)(int64_t)(int)uVar16 < uVar25);
                    }
                    if (uVar11 == 1) {
                      if (bVar7) {
                        lVar24 = *(int64_t *)
                                  (lVar5 + (int64_t)(int)CONCAT71(uVar6,iVar18 == 0) * 8);
                      }
                      else {
                        lVar24 = *(int64_t *)(lVar5 + (int64_t)iVar18 * 8);
                      }
                    }
                    else {
                      lVar24 = plVar20[1];
                      if (uVar11 == 0) {
                        iVar12 = iVar18;
                        if (bVar7) {
                          iVar12 = (int)CONCAT71(uVar6,iVar18 == 0);
                        }
                        plVar20 = (int64_t *)((int64_t)iVar12 * 8 + lVar5);
                      }
                    }
                    lVar23 = *plVar20;
                    plVar9 = (int64_t *)FUN_18038c180(in_stack_00000150);
                    plVar9[1] = lVar24;
                    *plVar9 = lVar23;
                    *(int8_t *)(plVar9 + 4) = 1;
                    plVar9[2] = param_8;
                    *plVar22 = (int64_t)plVar9;
                    puVar10 = param_11;
                    lVar23 = param_10;
                    lVar24 = param_8;
                  }
LAB_1803922c3:
                  uVar8 = uVar8 + 1;
                  plVar20 = plVar9;
                  in_R11B = in_stack_00000170;
                } while ((int64_t)uVar8 < 2);
                uVar11 = uVar11 + 1;
                uVar16 = uStackX_24;
              } while ((int64_t)uVar11 < 2);
              goto LAB_180392028;
            }
            plVar9[2] = param_13;
          }
          *(int8_t *)(plVar9 + 4) = 1;
          plVar9[3] = unaff_RBP;
          func_0x00018038ac80(plVar9);
          *plVar22 = lVar5;
          *(int8_t *)(lVar5 + 0x20) = 2;
          *(int64_t *)(lVar5 + 0x18) = lVar24;
        }
LAB_180392028:
        bVar1 = *(byte *)(lVar24 + 0xa8);
        uStackX_24 = uVar16 + 1;
        uVar8 = (uint64_t)uStackX_24;
        plVar22 = plVar22 + 1;
        unaff_RDI = param_5;
        in_R11B = in_stack_00000170;
      } while ((int)uStackX_24 < (int)(uint)bVar1);
    }
    uVar8 = unaff_RBP & 0xffffffff;
    if (bVar1 != 0) {
      plVar22 = (int64_t *)(lVar24 + 0x60);
      do {
        lVar4 = *plVar22;
        *(char *)(lVar4 + 0x20) = (char)unaff_RBP;
        cVar27 = *(uint64_t *)(lVar4 + 0x10) != unaff_RBP;
        if ((bool)cVar27) {
          *(int8_t *)(lVar4 + 0x20) = 1;
        }
        if (*(uint64_t *)(lVar4 + 0x18) != unaff_RBP) {
          cVar27 = cVar27 + '\x01';
          *(char *)(lVar4 + 0x20) = cVar27;
        }
        if ((cVar27 == '\x01') && (*(int64_t *)(lVar4 + 0x18) != 0)) {
          *(int64_t *)(lVar4 + 0x10) = *(int64_t *)(lVar4 + 0x18);
          *(uint64_t *)(lVar4 + 0x18) = unaff_RBP;
        }
        bVar1 = *(byte *)(lVar24 + 0xa8);
        uVar16 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar16;
        plVar22 = plVar22 + 1;
      } while ((int)uVar16 < (int)(uint)bVar1);
    }
    uVar15 = unaff_RBP & 0xffffffff;
    uVar8 = unaff_RBP;
    if (bVar1 != 0) {
      do {
        plVar22 = *(int64_t **)(lVar24 + 0x60 + uVar8 * 8);
        uVar16 = (int)uVar15 + 1;
        uVar15 = (uint64_t)uVar16;
        uVar11 = unaff_RBP;
        if (uVar16 != bVar1) {
          uVar11 = uVar8 + 1;
        }
        plVar9 = *(int64_t **)(lVar24 + 0x60 + uVar11 * 8);
        if ((*plVar22 == *plVar9) || (uVar13 = 0xffffffff, *plVar22 == plVar9[1])) {
          uVar13 = uVar14;
        }
        if ((plVar22[1] == *plVar9) || (plVar22[1] == plVar9[1])) {
          uVar13 = 1;
        }
        uVar11 = unaff_RBP;
        if (uVar13 == 0) {
          uVar11 = 8;
        }
        *(uint64_t *)(param_8 + 0x80 + uVar8 * 8) = *(uint64_t *)(uVar11 + (int64_t)plVar22);
        bVar1 = *(byte *)(param_8 + 0xa8);
        uVar8 = uVar8 + 1;
        lVar24 = param_8;
      } while ((int)uVar16 < (int)(uint)bVar1);
    }
    SystemCore_ProcessManager(unaff_RDI);
    SystemCore_PerformanceMonitor(unaff_RDI);
    uVar16 = uVar14;
    if (*(int64_t *)(unaff_RDI + 0xb0) != 0) {
      uVar16 = *(uint *)(*(int64_t *)(unaff_RDI + 0xb0) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 0xb8) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(unaff_RDI + 0xb8) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 0xc0) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(unaff_RDI + 0xc0) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 200) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(unaff_RDI + 200) + 0x134);
    }
    uVar13 = 0xffffffff;
    if (uVar16 != 0) {
      uVar13 = uVar16;
    }
    *(uint *)(unaff_RDI + 0x134) = uVar13;
    SystemCore_ProcessManager(param_13);
    SystemCore_PerformanceMonitor(param_13);
    uVar16 = uVar14;
    if (*(int64_t *)(param_13 + 0xb0) != 0) {
      uVar16 = *(uint *)(*(int64_t *)(param_13 + 0xb0) + 0x134);
    }
    if (*(int64_t *)(param_13 + 0xb8) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(param_13 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(param_13 + 0xc0) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(param_13 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(param_13 + 200) != 0) {
      uVar16 = uVar16 | *(uint *)(*(int64_t *)(param_13 + 200) + 0x134);
    }
    uVar13 = 0xffffffff;
    if (uVar16 != 0) {
      uVar13 = uVar16;
    }
    *(uint *)(param_13 + 0x134) = uVar13;
    SystemCore_ProcessManager(param_14);
    SystemCore_PerformanceMonitor(param_14);
    if (*(int64_t *)(param_14 + 0xb0) != 0) {
      uVar14 = *(uint *)(*(int64_t *)(param_14 + 0xb0) + 0x134);
    }
    if (*(int64_t *)(param_14 + 0xb8) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_14 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(param_14 + 0xc0) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_14 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(param_14 + 200) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_14 + 200) + 0x134);
    }
    uVar16 = 0xffffffff;
    if (uVar14 != 0) {
      uVar16 = uVar14;
    }
    *(uint *)(param_14 + 0x134) = uVar16;
    SystemCore_ProcessManager(param_8);
    uVar28 = SystemCore_PerformanceMonitor(param_8);
    if (*(int64_t *)(param_8 + 0xb0) != 0) {
      unaff_RBP = (uint64_t)*(uint *)(*(int64_t *)(param_8 + 0xb0) + 0x134);
    }
    uVar14 = (uint)unaff_RBP;
    if (*(int64_t *)(param_8 + 0xb8) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_8 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(param_8 + 0xc0) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_8 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(param_8 + 200) != 0) {
      uVar14 = uVar14 | *(uint *)(*(int64_t *)(param_8 + 200) + 0x134);
    }
    uVar16 = 0xffffffff;
    if (uVar14 != 0) {
      uVar16 = uVar14;
    }
    *(uint *)(param_8 + 0x134) = uVar16;
    uVar28 = SystemCore_Encoder(uVar28,param_5,0xffffffff);
    uVar28 = SystemCore_Encoder(uVar28,param_13,0xffffffff);
    uVar28 = SystemCore_Encoder(uVar28,param_14,0xffffffff);
    uVar28 = SystemCore_Encoder(uVar28,param_8,0xffffffff);
    *(int *)(in_stack_00000150 + 0x530) = *(int *)(in_stack_00000150 + 0x530) + 1;
    uVar28 = SystemCore_Encoder(uVar28,param_5,*(int32_t *)(in_stack_00000150 + 0x530));
    *(int *)(in_stack_00000150 + 0x530) = *(int *)(in_stack_00000150 + 0x530) + 1;
    SystemCore_Encoder(uVar28,param_13,*(int32_t *)(in_stack_00000150 + 0x530));
  }
  return;
}






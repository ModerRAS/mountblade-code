#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part215.c - 5 个函数

// 函数: void FUN_180390c80(int64_t param_1,int param_2,int param_3)
void FUN_180390c80(int64_t param_1,int param_2,int param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  bool bVar13;
  int64_t *plStackX_8;
  
  puVar7 = *(uint64_t **)(param_1 + 0x478);
  uVar5 = 0;
  uVar6 = 0;
  iVar8 = 0;
  uVar9 = *(int64_t *)(param_1 + 0x480) - (int64_t)puVar7 >> 3;
  if (uVar9 != 0) {
    do {
      uVar1 = *puVar7;
      uVar12 = uVar1;
      if ((param_2 != *(int *)(uVar1 + 0x130)) &&
         (uVar12 = uVar5, param_3 == *(int *)(uVar1 + 0x130))) {
        uVar6 = uVar1;
      }
      if ((uVar12 != 0) && (uVar6 != 0)) break;
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
      uVar5 = uVar12;
    } while ((uint64_t)(int64_t)iVar8 < uVar9);
    if (((uVar12 != 0) && (uVar6 != 0)) && (iVar8 = 0, *(char *)(uVar12 + 0xa8) != '\0')) {
      plStackX_8 = (int64_t *)(uVar12 + 0x60);
      do {
        lVar2 = *plStackX_8;
        if (*(char *)(lVar2 + 0x20) == '\x02') {
          uVar5 = *(uint64_t *)(lVar2 + 0x10);
          if (uVar5 == uVar12) {
            uVar5 = *(uint64_t *)(lVar2 + 0x18);
          }
          iVar10 = 0;
          if (*(char *)(uVar5 + 0xa8) != '\0') {
            plVar11 = (int64_t *)(uVar5 + 0x60);
            do {
              lVar3 = *plVar11;
              if (((*(char *)(lVar3 + 0x20) == '\x02') && (lVar3 != lVar2)) &&
                 ((*(uint64_t *)(lVar3 + 0x10) == uVar6 || (*(uint64_t *)(lVar3 + 0x18) == uVar6))
                 )) {
                *(byte *)(uVar5 + 0x139) = *(byte *)(uVar5 + 0x139) & 0xfe;
                *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
                *(int32_t *)(uVar5 + 0x128) = *(int32_t *)(param_1 + 0x530);
                if (*(uint64_t *)(lVar2 + 0x10) == uVar5) {
                  *(int64_t *)(lVar2 + 0x10) = *(int64_t *)(lVar2 + 0x18);
                }
                if (*(int64_t *)(lVar2 + 0x18) != 0) {
                  *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
                  *(uint64_t *)(lVar2 + 0x18) = 0;
                }
                if (*(uint64_t *)(lVar3 + 0x10) == uVar5) {
                  *(int64_t *)(lVar3 + 0x10) = *(int64_t *)(lVar3 + 0x18);
                }
                if (*(int64_t *)(lVar3 + 0x18) != 0) {
                  *(char *)(lVar3 + 0x20) = *(char *)(lVar3 + 0x20) + -1;
                  *(uint64_t *)(lVar3 + 0x18) = 0;
                }
                FUN_18038b160(uVar12);
                uVar9 = uVar6;
                FUN_18038b160();
                *(int8_t *)(lVar2 + 0x20) = 0;
                uVar9 = uVar9 & 0xffffffffffffff00;
                bVar13 = *(int64_t *)(lVar2 + 0x10) != 0;
                if (bVar13) {
                  *(int8_t *)(lVar2 + 0x20) = 1;
                  uVar9 = 1;
                }
                if (*(int64_t *)(lVar2 + 0x18) == 0) {
                  cVar4 = (char)uVar9;
                }
                else {
                  cVar4 = bVar13 + '\x01';
                  *(char *)(lVar2 + 0x20) = cVar4;
                }
                if ((cVar4 == '\x01') && (*(int64_t *)(lVar2 + 0x18) != 0)) {
                  *(int64_t *)(lVar2 + 0x10) = *(int64_t *)(lVar2 + 0x18);
                  *(uint64_t *)(lVar2 + 0x18) = 0;
                }
                *(int8_t *)(lVar3 + 0x20) = 0;
                uVar9 = uVar9 & 0xffffffffffffff00;
                bVar13 = *(int64_t *)(lVar3 + 0x10) != 0;
                if (bVar13) {
                  *(int8_t *)(lVar3 + 0x20) = 1;
                  uVar9 = 1;
                }
                if (*(int64_t *)(lVar3 + 0x18) == 0) {
                  cVar4 = (char)uVar9;
                }
                else {
                  cVar4 = bVar13 + '\x01';
                  *(char *)(lVar3 + 0x20) = cVar4;
                }
                if ((cVar4 == '\x01') && (*(int64_t *)(lVar3 + 0x18) != 0)) {
                  *(int64_t *)(lVar3 + 0x10) = *(int64_t *)(lVar3 + 0x18);
                  *(uint64_t *)(lVar3 + 0x18) = 0;
                }
                FUN_18038ee20(uVar9,uVar12,0xffffffff);
                FUN_18038ee20();
                *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
                FUN_18038ee20();
                if (*(int *)(uVar6 + 0x128) == -1) {
                  *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
                  FUN_18038ee20();
                }
              }
              iVar10 = iVar10 + 1;
              plVar11 = plVar11 + 1;
            } while (iVar10 < (int)(uint)*(byte *)(uVar5 + 0xa8));
          }
        }
        plStackX_8 = plStackX_8 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(uVar12 + 0xa8));
    }
  }
  return;
}





// 函数: void FUN_180390d17(int param_1)
void FUN_180390d17(int param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RSI;
  int iVar4;
  int64_t *plVar5;
  int64_t unaff_R14;
  int64_t unaff_R15;
  char cVar6;
  int64_t *plStack0000000000000060;
  int in_stack_00000078;
  
  plStack0000000000000060 = (int64_t *)(unaff_R15 + 0x60);
  do {
    lVar1 = *plStack0000000000000060;
    if (*(char *)(lVar1 + 0x20) == '\x02') {
      lVar3 = *(int64_t *)(lVar1 + 0x10);
      if (lVar3 == unaff_R15) {
        lVar3 = *(int64_t *)(lVar1 + 0x18);
      }
      iVar4 = 0;
      if (*(char *)(lVar3 + 0xa8) != '\0') {
        plVar5 = (int64_t *)(lVar3 + 0x60);
        do {
          lVar2 = *plVar5;
          if (((*(char *)(lVar2 + 0x20) == '\x02') && (lVar2 != lVar1)) &&
             ((*(int64_t *)(lVar2 + 0x10) == unaff_RSI ||
              (*(int64_t *)(lVar2 + 0x18) == unaff_RSI)))) {
            *(byte *)(lVar3 + 0x139) = *(byte *)(lVar3 + 0x139) & 0xfe;
            *(int *)(unaff_R14 + 0x530) = *(int *)(unaff_R14 + 0x530) + 1;
            *(int32_t *)(lVar3 + 0x128) = *(int32_t *)(unaff_R14 + 0x530);
            if (*(int64_t *)(lVar1 + 0x10) == lVar3) {
              *(int64_t *)(lVar1 + 0x10) = *(int64_t *)(lVar1 + 0x18);
            }
            if (*(int64_t *)(lVar1 + 0x18) != 0) {
              *(char *)(lVar1 + 0x20) = *(char *)(lVar1 + 0x20) + -1;
              *(uint64_t *)(lVar1 + 0x18) = 0;
            }
            if (*(int64_t *)(lVar2 + 0x10) == lVar3) {
              *(int64_t *)(lVar2 + 0x10) = *(int64_t *)(lVar2 + 0x18);
            }
            if (*(int64_t *)(lVar2 + 0x18) != 0) {
              *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
              *(uint64_t *)(lVar2 + 0x18) = 0;
            }
            FUN_18038b160();
            FUN_18038b160();
            *(int8_t *)(lVar1 + 0x20) = 0;
            cVar6 = *(int64_t *)(lVar1 + 0x10) != 0;
            if ((bool)cVar6) {
              *(int8_t *)(lVar1 + 0x20) = 1;
            }
            if (*(int64_t *)(lVar1 + 0x18) != 0) {
              cVar6 = cVar6 + '\x01';
              *(char *)(lVar1 + 0x20) = cVar6;
            }
            if ((cVar6 == '\x01') && (*(int64_t *)(lVar1 + 0x18) != 0)) {
              *(int64_t *)(lVar1 + 0x10) = *(int64_t *)(lVar1 + 0x18);
              *(uint64_t *)(lVar1 + 0x18) = 0;
            }
            *(int8_t *)(lVar2 + 0x20) = 0;
            cVar6 = *(int64_t *)(lVar2 + 0x10) != 0;
            if ((bool)cVar6) {
              *(int8_t *)(lVar2 + 0x20) = 1;
            }
            if (*(int64_t *)(lVar2 + 0x18) != 0) {
              cVar6 = cVar6 + '\x01';
              *(char *)(lVar2 + 0x20) = cVar6;
            }
            if ((cVar6 == '\x01') && (*(int64_t *)(lVar2 + 0x18) != 0)) {
              *(int64_t *)(lVar2 + 0x10) = *(int64_t *)(lVar2 + 0x18);
              *(uint64_t *)(lVar2 + 0x18) = 0;
            }
            FUN_18038ee20();
            FUN_18038ee20();
            *(int *)(unaff_R14 + 0x530) = *(int *)(unaff_R14 + 0x530) + 1;
            FUN_18038ee20();
            if (*(int *)(unaff_RSI + 0x128) == -1) {
              *(int *)(unaff_R14 + 0x530) = *(int *)(unaff_R14 + 0x530) + 1;
              FUN_18038ee20();
            }
          }
          iVar4 = iVar4 + 1;
          plVar5 = plVar5 + 1;
          param_1 = in_stack_00000078;
        } while (iVar4 < (int)(uint)*(byte *)(lVar3 + 0xa8));
      }
    }
    plStack0000000000000060 = plStack0000000000000060 + 1;
    param_1 = param_1 + 1;
    in_stack_00000078 = param_1;
  } while (param_1 < (int)(uint)*(byte *)(unaff_R15 + 0xa8));
  return;
}





// 函数: void FUN_180390f30(void)
void FUN_180390f30(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180390f40(int64_t param_1,int param_2,int param_3)
void FUN_180390f40(int64_t param_1,int param_2,int param_3)

{
  uint64_t uVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  bool bVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint uVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int iVar21;
  uint64_t uVar22;
  char cVar23;
  uint64_t uVar24;
  float fVar25;
  int8_t auVar26 [16];
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
  
  uVar12 = 0;
  puVar15 = *(uint64_t **)(param_1 + 0x478);
  uVar8 = *(int64_t *)(param_1 + 0x480) - (int64_t)puVar15 >> 3;
  uVar22 = uVar12;
  uVar14 = uVar12;
  uVar19 = uVar12;
  if (uVar8 != 0) {
    do {
      uVar10 = *puVar15;
      uVar13 = uVar10;
      if ((param_2 != *(int *)(uVar10 + 0x130)) &&
         (uVar13 = uVar22, param_3 == *(int *)(uVar10 + 0x130))) {
        uVar14 = uVar10;
      }
      if ((uVar13 != 0) && (uVar14 != 0)) break;
      uVar17 = (int)uVar19 + 1;
      puVar15 = puVar15 + 1;
      uVar22 = uVar13;
      uVar19 = (uint64_t)uVar17;
    } while ((uint64_t)(int64_t)(int)uVar17 < uVar8);
    if ((uVar13 != 0) && (uVar14 != 0)) {
      FUN_180390c80(param_1,param_2,param_3);
      lVar9 = *(int64_t *)(param_1 + 0x478);
      bVar5 = false;
      uVar22 = uVar12;
      uVar19 = uVar12;
      if (*(int64_t *)(param_1 + 0x480) - lVar9 >> 3 != 0) {
        do {
          lVar9 = *(int64_t *)(uVar22 + lVar9);
          if (((*(byte *)(lVar9 + 0x139) & 1) == 0) && (*(byte *)(lVar9 + 0xa8) != 0)) {
            puVar15 = (uint64_t *)(lVar9 + 0x60);
            uVar20 = (uint64_t)*(byte *)(lVar9 + 0xa8);
            uVar8 = uVar12;
            uVar10 = uVar12;
            do {
              uVar1 = *puVar15;
              uVar7 = uVar10;
              if (*(char *)(uVar1 + 0x20) != '\x02') {
                uVar7 = uVar1;
                if (*(uint64_t *)(uVar1 + 0x10) != uVar13) {
                  uVar7 = uVar10;
                }
                if (*(uint64_t *)(uVar1 + 0x10) == uVar14) {
                  uVar8 = uVar1;
                }
              }
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 - 1;
              uVar10 = uVar7;
            } while (uVar20 != 0);
            if ((uVar7 != 0) && (uVar8 != 0)) {
              *(char *)(uVar7 + 0x20) = *(char *)(uVar7 + 0x20) + '\x01';
              *(int64_t *)(uVar7 + 0x18) = lVar9;
              *(char *)(uVar8 + 0x20) = *(char *)(uVar8 + 0x20) + '\x01';
              *(int64_t *)(uVar8 + 0x18) = lVar9;
              *(byte *)(lVar9 + 0x139) = *(byte *)(lVar9 + 0x139) | 1;
              *(int8_t *)(uVar7 + 0x20) = 0;
              cVar23 = *(int64_t *)(uVar7 + 0x10) != 0;
              if ((bool)cVar23) {
                *(int8_t *)(uVar7 + 0x20) = 1;
              }
              if (*(int64_t *)(uVar7 + 0x18) != 0) {
                cVar23 = cVar23 + '\x01';
                *(char *)(uVar7 + 0x20) = cVar23;
              }
              if ((cVar23 == '\x01') && (*(int64_t *)(uVar7 + 0x18) != 0)) {
                *(int64_t *)(uVar7 + 0x10) = *(int64_t *)(uVar7 + 0x18);
                *(uint64_t *)(uVar7 + 0x18) = 0;
              }
              *(int8_t *)(uVar8 + 0x20) = 0;
              cVar23 = *(int64_t *)(uVar8 + 0x10) != 0;
              if ((bool)cVar23) {
                *(int8_t *)(uVar8 + 0x20) = 1;
              }
              if (*(int64_t *)(uVar8 + 0x18) != 0) {
                cVar23 = cVar23 + '\x01';
                *(char *)(uVar8 + 0x20) = cVar23;
              }
              if ((cVar23 == '\x01') && (*(int64_t *)(uVar8 + 0x18) != 0)) {
                *(int64_t *)(uVar8 + 0x10) = *(int64_t *)(uVar8 + 0x18);
                *(uint64_t *)(uVar8 + 0x18) = 0;
              }
              FUN_18038b160(uVar13);
              FUN_18038b160(uVar14);
              uVar24 = FUN_18038b160(lVar9);
              bVar5 = true;
              uVar24 = FUN_18038ee20(uVar24,uVar13,0xffffffff);
              uVar24 = FUN_18038ee20(uVar24,uVar14,0xffffffff);
              *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
              FUN_18038ee20(uVar24,uVar13,*(int32_t *)(param_1 + 0x530));
            }
          }
          lVar9 = *(int64_t *)(param_1 + 0x478);
          uVar17 = (int)uVar19 + 1;
          uVar22 = uVar22 + 8;
          uVar19 = (uint64_t)uVar17;
        } while ((uint64_t)(int64_t)(int)uVar17 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x480) - lVar9 >> 3));
        if (bVar5) {
          return;
        }
      }
      uVar22 = 0xffffffff;
      fVar27 = 10000.0;
      iVar21 = -1;
      fVar6 = 10000.0;
      if (*(byte *)(uVar13 + 0xa8) != 0) {
        puVar11 = (uint64_t *)(uVar13 + 0x60);
        uVar19 = uVar12;
        do {
          puVar16 = (uint64_t *)*puVar11;
          if (*(char *)(puVar16 + 4) != '\x02') {
            pfVar2 = (float *)puVar16[1];
            pfVar3 = (float *)*puVar16;
            fVar32 = *pfVar2 - *pfVar3;
            fVar31 = pfVar3[1] - pfVar2[1];
            fVar35 = (*pfVar2 + *pfVar3) * 0.5;
            fVar36 = (pfVar3[1] + pfVar2[1]) * 0.5;
            fVar25 = fVar32 * fVar32 + fVar31 * fVar31;
            auVar26 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
            fVar29 = auVar26._0_4_;
            fVar25 = fVar29 * 0.5 * (3.0 - fVar25 * fVar29 * fVar29);
            fVar31 = fVar31 * fVar25;
            fVar32 = fVar32 * fVar25;
            if (0.0 < (*(float *)(uVar13 + 0xec) - fVar36) * fVar32 +
                      (*(float *)(uVar13 + 0xe8) - fVar35) * fVar31) {
              fVar31 = -fVar31;
              fVar32 = -fVar32;
            }
            uVar8 = 0xffffffff;
            iVar18 = -1;
            fVar25 = fVar27 + 1.0;
            if (*(byte *)(uVar14 + 0xa8) != 0) {
              puVar16 = (uint64_t *)(uVar14 + 0x60);
              uVar10 = uVar12;
              do {
                puVar4 = (uint64_t *)*puVar16;
                if (*(char *)(puVar4 + 4) != '\x02') {
                  pfVar2 = (float *)puVar4[1];
                  fVar27 = *(float *)*puVar4;
                  fVar29 = ((float *)*puVar4)[1];
                  fVar28 = *pfVar2 - fVar27;
                  fVar33 = (fVar27 + *pfVar2) * 0.5;
                  fVar30 = fVar29 - pfVar2[1];
                  fVar34 = (fVar29 + pfVar2[1]) * 0.5;
                  fVar27 = fVar28 * fVar28 + fVar30 * fVar30;
                  auVar26 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
                  fVar29 = auVar26._0_4_;
                  fVar27 = fVar29 * 0.5 * (3.0 - fVar27 * fVar29 * fVar29);
                  fVar30 = fVar30 * fVar27;
                  fVar28 = fVar28 * fVar27;
                  if (0.0 < (*(float *)(uVar14 + 0xec) - fVar34) * fVar28 +
                            (*(float *)(uVar14 + 0xe8) - fVar33) * fVar30) {
                    fVar30 = -fVar30;
                    fVar28 = -fVar28;
                  }
                  if (fVar28 * fVar32 + fVar30 * fVar31 <= -0.3) {
                    fVar33 = fVar33 - fVar35;
                    fVar34 = fVar34 - fVar36;
                    fVar29 = fVar34 * fVar34 + fVar33 * fVar33;
                    auVar26 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
                    fVar27 = auVar26._0_4_;
                    fVar27 = fVar27 * 0.5 * (3.0 - fVar29 * fVar27 * fVar27);
                    fVar27 = fVar27 * fVar34 * fVar32 + fVar27 * fVar33 * fVar31;
                    if ((0.1 <= fVar27) && (fVar29 = fVar29 / fVar27, fVar29 < fVar25)) {
                      uVar8 = uVar10;
                      fVar25 = fVar29;
                    }
                  }
                }
                iVar18 = (int)uVar8;
                uVar17 = (int)uVar10 + 1;
                uVar10 = (uint64_t)uVar17;
                puVar16 = puVar16 + 1;
                fVar27 = fVar6;
              } while ((int)uVar17 < (int)(uint)*(byte *)(uVar14 + 0xa8));
            }
            if (fVar25 < fVar27) {
              uVar22 = uVar19;
              fVar27 = fVar25;
              iVar21 = iVar18;
              fVar6 = fVar25;
            }
          }
          uVar17 = (int)uVar19 + 1;
          uVar19 = (uint64_t)uVar17;
          puVar11 = puVar11 + 1;
        } while ((int)uVar17 < (int)(uint)*(byte *)(uVar13 + 0xa8));
        if (((int)uVar22 != -1) && (iVar21 != -1)) {
                    // WARNING: Subroutine does not return
          FUN_180062300(system_message_context,&unknown_var_5304_ptr);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180390fe4(uint64_t param_1)
void FUN_180390fe4(uint64_t param_1)

{
  uint64_t uVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  bool bVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t unaff_EBX;
  uint64_t *puVar10;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *puVar11;
  int iVar12;
  uint64_t *puVar13;
  int32_t in_R11D;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t unaff_R13;
  int iVar17;
  uint64_t uVar18;
  uint uVar19;
  char cVar20;
  float fVar21;
  int8_t auVar22 [16];
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
  uint64_t uVar14;
  
  FUN_180390c80(param_1,in_R11D,unaff_EBX);
  lVar8 = *(int64_t *)(unaff_R13 + 0x478);
  bVar5 = false;
  uVar16 = unaff_RBP & 0xffffffff;
  uVar18 = unaff_RBP;
  if (*(int64_t *)(unaff_R13 + 0x480) - lVar8 >> 3 != 0) {
    do {
      lVar8 = *(int64_t *)(uVar18 + lVar8);
      if (((*(byte *)(lVar8 + 0x139) & 1) == 0) && (*(byte *)(lVar8 + 0xa8) != 0)) {
        puVar13 = (uint64_t *)(lVar8 + 0x60);
        uVar15 = (uint64_t)*(byte *)(lVar8 + 0xa8);
        uVar14 = unaff_RBP;
        uVar9 = unaff_RBP;
        do {
          uVar1 = *puVar13;
          uVar7 = uVar9;
          if (*(char *)(uVar1 + 0x20) != '\x02') {
            uVar7 = uVar1;
            if (*(int64_t *)(uVar1 + 0x10) != unaff_RSI) {
              uVar7 = uVar9;
            }
            if (*(int64_t *)(uVar1 + 0x10) == unaff_RDI) {
              uVar14 = uVar1;
            }
          }
          puVar13 = puVar13 + 1;
          uVar15 = uVar15 - 1;
          uVar9 = uVar7;
        } while (uVar15 != 0);
        if ((uVar7 != 0) && (uVar14 != 0)) {
          *(char *)(uVar7 + 0x20) = *(char *)(uVar7 + 0x20) + '\x01';
          *(int64_t *)(uVar7 + 0x18) = lVar8;
          *(char *)(uVar14 + 0x20) = *(char *)(uVar14 + 0x20) + '\x01';
          *(int64_t *)(uVar14 + 0x18) = lVar8;
          *(byte *)(lVar8 + 0x139) = *(byte *)(lVar8 + 0x139) | 1;
          *(char *)(uVar7 + 0x20) = (char)unaff_RBP;
          cVar20 = *(uint64_t *)(uVar7 + 0x10) != unaff_RBP;
          if ((bool)cVar20) {
            *(int8_t *)(uVar7 + 0x20) = 1;
          }
          if (*(uint64_t *)(uVar7 + 0x18) != unaff_RBP) {
            cVar20 = cVar20 + '\x01';
            *(char *)(uVar7 + 0x20) = cVar20;
          }
          if ((cVar20 == '\x01') && (*(int64_t *)(uVar7 + 0x18) != 0)) {
            *(int64_t *)(uVar7 + 0x10) = *(int64_t *)(uVar7 + 0x18);
            *(uint64_t *)(uVar7 + 0x18) = unaff_RBP;
          }
          *(char *)(uVar14 + 0x20) = (char)unaff_RBP;
          cVar20 = *(uint64_t *)(uVar14 + 0x10) != unaff_RBP;
          if ((bool)cVar20) {
            *(int8_t *)(uVar14 + 0x20) = 1;
          }
          if (*(uint64_t *)(uVar14 + 0x18) != unaff_RBP) {
            cVar20 = cVar20 + '\x01';
            *(char *)(uVar14 + 0x20) = cVar20;
          }
          if ((cVar20 == '\x01') && (*(int64_t *)(uVar14 + 0x18) != 0)) {
            *(int64_t *)(uVar14 + 0x10) = *(int64_t *)(uVar14 + 0x18);
            *(uint64_t *)(uVar14 + 0x18) = unaff_RBP;
          }
          FUN_18038b160();
          FUN_18038b160();
          FUN_18038b160(lVar8);
          bVar5 = true;
          FUN_18038ee20();
          FUN_18038ee20();
          *(int *)(unaff_R13 + 0x530) = *(int *)(unaff_R13 + 0x530) + 1;
          FUN_18038ee20();
        }
      }
      lVar8 = *(int64_t *)(unaff_R13 + 0x478);
      uVar19 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar19;
      uVar18 = uVar18 + 8;
    } while ((uint64_t)(int64_t)(int)uVar19 <
             (uint64_t)(*(int64_t *)(unaff_R13 + 0x480) - lVar8 >> 3));
    if (bVar5) {
      return;
    }
  }
  uVar18 = 0xffffffff;
  fVar23 = 10000.0;
  iVar17 = -1;
  fVar6 = 10000.0;
  uVar16 = unaff_RBP & 0xffffffff;
  if (*(byte *)(unaff_RSI + 0xa8) != 0) {
    puVar10 = (uint64_t *)(unaff_RSI + 0x60);
    do {
      puVar11 = (uint64_t *)*puVar10;
      if (*(char *)(puVar11 + 4) != '\x02') {
        pfVar2 = (float *)puVar11[1];
        pfVar3 = (float *)*puVar11;
        fVar28 = *pfVar2 - *pfVar3;
        fVar27 = pfVar3[1] - pfVar2[1];
        fVar31 = (*pfVar2 + *pfVar3) * 0.5;
        fVar32 = (pfVar3[1] + pfVar2[1]) * 0.5;
        fVar21 = fVar28 * fVar28 + fVar27 * fVar27;
        auVar22 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
        fVar25 = auVar22._0_4_;
        fVar21 = fVar25 * 0.5 * (3.0 - fVar21 * fVar25 * fVar25);
        fVar27 = fVar27 * fVar21;
        fVar28 = fVar28 * fVar21;
        if (0.0 < (*(float *)(unaff_RSI + 0xec) - fVar32) * fVar28 +
                  (*(float *)(unaff_RSI + 0xe8) - fVar31) * fVar27) {
          fVar27 = -fVar27;
          fVar28 = -fVar28;
        }
        uVar14 = 0xffffffff;
        iVar12 = -1;
        uVar9 = unaff_RBP & 0xffffffff;
        fVar21 = fVar23 + 1.0;
        if (*(byte *)(unaff_RDI + 0xa8) != 0) {
          puVar11 = (uint64_t *)(unaff_RDI + 0x60);
          do {
            puVar4 = (uint64_t *)*puVar11;
            if (*(char *)(puVar4 + 4) != '\x02') {
              pfVar2 = (float *)puVar4[1];
              fVar23 = *(float *)*puVar4;
              fVar25 = ((float *)*puVar4)[1];
              fVar24 = *pfVar2 - fVar23;
              fVar29 = (fVar23 + *pfVar2) * 0.5;
              fVar26 = fVar25 - pfVar2[1];
              fVar30 = (fVar25 + pfVar2[1]) * 0.5;
              fVar23 = fVar24 * fVar24 + fVar26 * fVar26;
              auVar22 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
              fVar25 = auVar22._0_4_;
              fVar23 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
              fVar26 = fVar26 * fVar23;
              fVar24 = fVar24 * fVar23;
              if (0.0 < (*(float *)(unaff_RDI + 0xec) - fVar30) * fVar24 +
                        (*(float *)(unaff_RDI + 0xe8) - fVar29) * fVar26) {
                fVar26 = -fVar26;
                fVar24 = -fVar24;
              }
              if (fVar24 * fVar28 + fVar26 * fVar27 <= -0.3) {
                fVar29 = fVar29 - fVar31;
                fVar30 = fVar30 - fVar32;
                fVar25 = fVar30 * fVar30 + fVar29 * fVar29;
                auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
                fVar23 = auVar22._0_4_;
                fVar23 = fVar23 * 0.5 * (3.0 - fVar25 * fVar23 * fVar23);
                fVar23 = fVar23 * fVar30 * fVar28 + fVar23 * fVar29 * fVar27;
                if ((0.1 <= fVar23) && (fVar25 = fVar25 / fVar23, fVar25 < fVar21)) {
                  uVar14 = uVar9;
                  fVar21 = fVar25;
                }
              }
            }
            iVar12 = (int)uVar14;
            uVar19 = (int)uVar9 + 1;
            uVar9 = (uint64_t)uVar19;
            puVar11 = puVar11 + 1;
            fVar23 = fVar6;
          } while ((int)uVar19 < (int)(uint)*(byte *)(unaff_RDI + 0xa8));
        }
        if (fVar21 < fVar23) {
          uVar18 = uVar16;
          fVar23 = fVar21;
          iVar17 = iVar12;
          fVar6 = fVar21;
        }
      }
      uVar19 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar19;
      puVar10 = puVar10 + 1;
    } while ((int)uVar19 < (int)(uint)*(byte *)(unaff_RSI + 0xa8));
    if (((int)uVar18 != -1) && (iVar17 != -1)) {
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_5304_ptr);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




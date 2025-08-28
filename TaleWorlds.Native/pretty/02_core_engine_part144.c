#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part144.c - 9 个函数

// 函数: void FUN_1801356a0(longlong param_1)
void FUN_1801356a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  int32_t *puVar4;
  longlong lVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar14;
  longlong lVar15;
  uint64_t *puVar16;
  ulonglong uVar17;
  uint64_t *puVar18;
  ulonglong uVar19;
  uint64_t *puVar20;
  uint64_t *puVar13;
  
  piVar3 = *(int **)(param_1 + 0x2df8);
  if ((*(byte *)(param_1 + 8) & 0x40) == 0) {
    if ((0 < *piVar3) || (0 < piVar3[4])) {
      FUN_18013b490();
      lVar15 = SYSTEM_DATA_MANAGER_A;
      piVar3 = *(int **)(SYSTEM_DATA_MANAGER_A + 0x2df8);
      puVar13 = (uint64_t *)0x0;
      uVar6 = 0;
      puVar8 = puVar13;
      puVar16 = puVar13;
      puVar18 = puVar13;
      puVar20 = puVar13;
      puVar7 = puVar13;
      if (0 < *piVar3) {
        do {
          lVar10 = *(longlong *)((longlong)puVar18 + *(longlong *)(piVar3 + 2) + 8);
          puVar7 = puVar20;
          if (lVar10 != 0) {
            iVar9 = (int)puVar16;
            iVar11 = (int)puVar8;
            if (iVar11 == iVar9) {
              if (iVar9 == 0) {
                uVar6 = 8;
              }
              else {
                uVar6 = iVar9 / 2 + iVar9;
              }
              uVar12 = iVar11 + 1U;
              if ((int)(iVar11 + 1U) < (int)uVar6) {
                uVar12 = uVar6;
              }
              if (iVar9 < (int)uVar12) {
                if (SYSTEM_DATA_MANAGER_A != 0) {
                  *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
                }
                puVar7 = (uint64_t *)
                         func_0x000180120ce0((longlong)(int)uVar12 << 3,SYSTEM_DATA_MANAGER_B);
                if (puVar20 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                  memcpy(puVar7,puVar20,(longlong)iVar11 << 3);
                }
                puVar16 = (uint64_t *)(ulonglong)uVar12;
              }
            }
            puVar7[iVar11] = lVar10;
            puVar8 = (uint64_t *)(ulonglong)(iVar11 + 1);
          }
          uVar6 = (uint)puVar8;
          uVar12 = (int)puVar13 + 1;
          puVar13 = (uint64_t *)(ulonglong)uVar12;
          puVar18 = puVar18 + 2;
          puVar20 = puVar7;
        } while ((int)uVar12 < *piVar3);
      }
      uVar19 = 0;
      uVar17 = uVar19;
      if (0 < *(int *)(lVar15 + 0x2e28)) {
        do {
          iVar11 = *(int *)(*(longlong *)(lVar15 + 0x2e30) + 0x28 + uVar17);
          if ((iVar11 != 0) && (iVar9 = 0, puVar8 = puVar7, 0 < (int)uVar6)) {
            do {
              if (*(int *)*puVar8 == iVar11) {
                *(int32_t *)(*(longlong *)(lVar15 + 0x2e30) + 0x28 + uVar17) = 0;
                break;
              }
              iVar9 = iVar9 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar9 < (int)uVar6);
          }
          uVar12 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar12;
          uVar17 = uVar17 + 0x38;
        } while ((int)uVar12 < *(int *)(lVar15 + 0x2e28));
      }
      if (1 < (int)uVar6) {
        qsort(puVar7,(longlong)(int)uVar6,8,&unknown_var_9408_ptr);
      }
      if (0 < (int)uVar6) {
        uVar17 = (ulonglong)uVar6;
        puVar8 = puVar7;
        do {
          FUN_1801359f0(lVar15,*puVar8,0);
          puVar8 = puVar8 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      lVar15 = *(longlong *)(piVar3 + 2);
      if (lVar15 != 0) {
        piVar3[0] = 0;
        piVar3[1] = 0;
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar15,SYSTEM_DATA_MANAGER_B);
      }
      lVar15 = *(longlong *)(piVar3 + 6);
      if (lVar15 != 0) {
        piVar3[4] = 0;
        piVar3[5] = 0;
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar15,SYSTEM_DATA_MANAGER_B);
      }
      if (puVar7 == (uint64_t *)0x0) {
        return;
      }
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(puVar7,SYSTEM_DATA_MANAGER_B);
    }
  }
  else {
    uVar17 = 0;
    if ((*(char *)(param_1 + 0xc0) != '\0') && (uVar19 = uVar17, uVar14 = uVar17, 0 < *piVar3)) {
      do {
        puVar4 = *(int32_t **)(uVar14 + 8 + *(longlong *)(piVar3 + 2));
        if ((puVar4 != (int32_t *)0x0) &&
           ((*(longlong *)(puVar4 + 2) == 0 && (*(longlong *)(puVar4 + 4) != 0)))) {
          FUN_18013b0f0(*puVar4);
        }
        uVar6 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar6;
        uVar14 = uVar14 + 0x10;
      } while ((int)uVar6 < *piVar3);
    }
    if ((char)piVar3[0xc] != '\0') {
      lVar15 = *(longlong *)(param_1 + 0x2df8);
      FUN_18013ce40(0);
      piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
      if (0 < *piVar1) {
        plVar2 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
        lVar10 = SYSTEM_DATA_MANAGER_A;
        uVar19 = uVar17;
        do {
          lVar5 = *(longlong *)(uVar19 + *plVar2);
          if (*(longlong *)(lVar5 + 0x408) == 0) {
            *(int32_t *)(lVar5 + 0x418) = 0;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar5 + 0x408),lVar5,*(int32_t *)(lVar5 + 0x418));
            lVar10 = SYSTEM_DATA_MANAGER_A;
          }
          *(byte *)(lVar5 + 0x432) = *(byte *)(lVar5 + 0x432) & 0xfc;
          *(int8_t *)(lVar5 + 0xb2) = 0;
          if (*(float *)(lVar10 + 0x2e04) <= 0.0) {
            *(int32_t *)(lVar10 + 0x2e04) = *(int32_t *)(lVar10 + 0x1c);
          }
          uVar6 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar6;
          uVar19 = uVar19 + 8;
        } while ((int)uVar6 < *piVar1);
      }
      FUN_18013b0f0(0);
      FUN_180136210(param_1,*(uint64_t *)(lVar15 + 0x28),*(int32_t *)(lVar15 + 0x20));
      FUN_180136440(param_1);
      *(int8_t *)(piVar3 + 0xc) = 0;
    }
    lVar15 = 0;
    iVar11 = 0;
    if (0 < piVar3[4]) {
      do {
        lVar10 = *(longlong *)(piVar3 + 6);
        if (*(int *)(lVar15 + lVar10) == 2) {
          lVar5 = *(longlong *)(lVar15 + 0x30 + lVar10);
          if (lVar5 == 0) {
            if (*(longlong *)(lVar15 + 0x38 + lVar10) != 0) {
              FUN_180136850(param_1);
            }
          }
          else {
            if (*(longlong *)(lVar5 + 0x408) == 0) {
              *(int32_t *)(lVar5 + 0x418) = 0;
            }
            else {
              FUN_180136d40(*(longlong *)(lVar5 + 0x408),lVar5,0);
            }
            lVar10 = SYSTEM_DATA_MANAGER_A;
            *(byte *)(lVar5 + 0x432) = *(byte *)(lVar5 + 0x432) & 0xfc;
            *(int8_t *)(lVar5 + 0xb2) = 0;
            if (*(float *)(lVar10 + 0x2e04) <= 0.0) {
              *(int32_t *)(lVar10 + 0x2e04) = *(int32_t *)(lVar10 + 0x1c);
            }
          }
        }
        iVar11 = iVar11 + 1;
        lVar15 = lVar15 + 0x40;
      } while (iVar11 < piVar3[4]);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801356dc(longlong param_1)
void FUN_1801356dc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int32_t *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int *unaff_RSI;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  if ((*(char *)(param_1 + 0xc0) != '\0') && (uVar11 = uVar9, uVar8 = uVar9, 0 < *unaff_RSI)) {
    do {
      puVar3 = *(int32_t **)(uVar8 + 8 + *(longlong *)(unaff_RSI + 2));
      if ((puVar3 != (int32_t *)0x0) &&
         ((*(longlong *)(puVar3 + 2) == 0 && (*(longlong *)(puVar3 + 4) != 0)))) {
        FUN_18013b0f0(*puVar3);
      }
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x10;
    } while ((int)uVar6 < *unaff_RSI);
  }
  if ((char)unaff_RSI[0xc] != '\0') {
    FUN_18013ce40(0);
    piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
    if (0 < *piVar1) {
      plVar2 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
      lVar10 = SYSTEM_DATA_MANAGER_A;
      uVar11 = uVar9;
      do {
        lVar4 = *(longlong *)(uVar11 + *plVar2);
        if (*(longlong *)(lVar4 + 0x408) == 0) {
          *(int32_t *)(lVar4 + 0x418) = 0;
        }
        else {
          FUN_180136d40(*(longlong *)(lVar4 + 0x408),lVar4,*(int32_t *)(lVar4 + 0x418));
          lVar10 = SYSTEM_DATA_MANAGER_A;
        }
        *(byte *)(lVar4 + 0x432) = *(byte *)(lVar4 + 0x432) & 0xfc;
        *(int8_t *)(lVar4 + 0xb2) = 0;
        if (*(float *)(lVar10 + 0x2e04) <= 0.0) {
          *(int32_t *)(lVar10 + 0x2e04) = *(int32_t *)(lVar10 + 0x1c);
        }
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
        uVar11 = uVar11 + 8;
      } while ((int)uVar6 < *piVar1);
    }
    FUN_18013b0f0(0);
    FUN_180136210();
    FUN_180136440();
    *(int8_t *)(unaff_RSI + 0xc) = 0;
  }
  lVar10 = 0;
  iVar7 = 0;
  if (0 < unaff_RSI[4]) {
    do {
      lVar4 = *(longlong *)(unaff_RSI + 6);
      if (*(int *)(lVar10 + lVar4) == 2) {
        lVar5 = *(longlong *)(lVar10 + 0x30 + lVar4);
        if (lVar5 == 0) {
          if (*(longlong *)(lVar10 + 0x38 + lVar4) != 0) {
            FUN_180136850();
          }
        }
        else {
          if (*(longlong *)(lVar5 + 0x408) == 0) {
            *(int32_t *)(lVar5 + 0x418) = 0;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar5 + 0x408),lVar5,0);
          }
          lVar4 = SYSTEM_DATA_MANAGER_A;
          *(byte *)(lVar5 + 0x432) = *(byte *)(lVar5 + 0x432) & 0xfc;
          *(int8_t *)(lVar5 + 0xb2) = 0;
          if (*(float *)(lVar4 + 0x2e04) <= 0.0) {
            *(int32_t *)(lVar4 + 0x2e04) = *(int32_t *)(lVar4 + 0x1c);
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 0x40;
    } while (iVar7 < unaff_RSI[4]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180135748(void)
void FUN_180135748(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  uint uVar6;
  int32_t uVar7;
  ulonglong unaff_R14;
  float unaff_XMM6_Da;
  
  FUN_18013ce40(0);
  uVar5 = unaff_R14 & 0xffffffff;
  piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
  if ((int)unaff_R14 < *piVar1) {
    plVar2 = (longlong *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
    lVar4 = SYSTEM_DATA_MANAGER_A;
    do {
      lVar3 = *(longlong *)(unaff_R14 + *plVar2);
      if (*(longlong *)(lVar3 + 0x408) == 0) {
        *(int32_t *)(lVar3 + 0x418) = 0;
      }
      else {
        FUN_180136d40(*(longlong *)(lVar3 + 0x408),lVar3,*(int32_t *)(lVar3 + 0x418));
        lVar4 = SYSTEM_DATA_MANAGER_A;
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfc;
      *(int8_t *)(lVar3 + 0xb2) = 0;
      if (*(float *)(lVar4 + 0x2e04) <= unaff_XMM6_Da) {
        *(int32_t *)(lVar4 + 0x2e04) = *(int32_t *)(lVar4 + 0x1c);
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      unaff_R14 = unaff_R14 + 8;
    } while ((int)uVar6 < *piVar1);
    unaff_R14 = 0;
  }
  FUN_18013b0f0(0);
  FUN_180136210();
  FUN_180136440();
  *(int8_t *)(unaff_RSI + 0x30) = 0;
  uVar7 = (int32_t)unaff_R14;
  uVar5 = unaff_R14 & 0xffffffff;
  if (0 < *(int *)(unaff_RSI + 0x10)) {
    do {
      lVar4 = *(longlong *)(unaff_RSI + 0x18);
      if (*(int *)(unaff_R14 + lVar4) == 2) {
        lVar3 = *(longlong *)(unaff_R14 + 0x30 + lVar4);
        if (lVar3 == 0) {
          if (*(longlong *)(unaff_R14 + 0x38 + lVar4) != 0) {
            FUN_180136850();
          }
        }
        else {
          if (*(longlong *)(lVar3 + 0x408) == 0) {
            *(int32_t *)(lVar3 + 0x418) = uVar7;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar3 + 0x408),lVar3,0);
          }
          lVar4 = SYSTEM_DATA_MANAGER_A;
          *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfc;
          *(int8_t *)(lVar3 + 0xb2) = 0;
          if (*(float *)(lVar4 + 0x2e04) <= unaff_XMM6_Da) {
            *(int32_t *)(lVar4 + 0x2e04) = *(int32_t *)(lVar4 + 0x1c);
          }
        }
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      unaff_R14 = unaff_R14 + 0x40;
    } while ((int)uVar6 < *(int *)(unaff_RSI + 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180135772(uint64_t param_1,longlong param_2)
void FUN_180135772(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int *unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  ulonglong uVar6;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_2 + 0x1aa8);
  do {
    lVar2 = *(longlong *)(unaff_R14 + *plVar1);
    if (*(longlong *)(lVar2 + 0x408) == 0) {
      *(int32_t *)(lVar2 + 0x418) = 0;
    }
    else {
      FUN_180136d40(*(longlong *)(lVar2 + 0x408),lVar2,*(int32_t *)(lVar2 + 0x418));
      param_2 = SYSTEM_DATA_MANAGER_A;
    }
    *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfc;
    *(int8_t *)(lVar2 + 0xb2) = 0;
    if (*(float *)(param_2 + 0x2e04) <= unaff_XMM6_Da) {
      *(int32_t *)(param_2 + 0x2e04) = *(int32_t *)(param_2 + 0x1c);
    }
    unaff_EDI = unaff_EDI + 1;
    unaff_R14 = unaff_R14 + 8;
  } while (unaff_EDI < *unaff_RBP);
  uVar5 = 0;
  FUN_18013b0f0(0);
  FUN_180136210();
  FUN_180136440();
  *(int8_t *)(unaff_RSI + 0x30) = 0;
  uVar6 = uVar5;
  if (0 < *(int *)(unaff_RSI + 0x10)) {
    do {
      lVar2 = *(longlong *)(unaff_RSI + 0x18);
      if (*(int *)(uVar6 + lVar2) == 2) {
        lVar3 = *(longlong *)(uVar6 + 0x30 + lVar2);
        if (lVar3 == 0) {
          if (*(longlong *)(uVar6 + 0x38 + lVar2) != 0) {
            FUN_180136850();
          }
        }
        else {
          if (*(longlong *)(lVar3 + 0x408) == 0) {
            *(int32_t *)(lVar3 + 0x418) = 0;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar3 + 0x408),lVar3,0);
          }
          lVar2 = SYSTEM_DATA_MANAGER_A;
          *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfc;
          *(int8_t *)(lVar3 + 0xb2) = 0;
          if (*(float *)(lVar2 + 0x2e04) <= unaff_XMM6_Da) {
            *(int32_t *)(lVar2 + 0x2e04) = *(int32_t *)(lVar2 + 0x1c);
          }
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x40;
    } while ((int)uVar4 < *(int *)(unaff_RSI + 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801357e9(void)
void FUN_1801357e9(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  int32_t uVar5;
  ulonglong unaff_R14;
  float unaff_XMM6_Da;
  
  FUN_18013b0f0(0);
  FUN_180136210();
  FUN_180136440();
  *(int8_t *)(unaff_RSI + 0x30) = 0;
  uVar5 = (int32_t)unaff_R14;
  uVar4 = unaff_R14 & 0xffffffff;
  if (0 < *(int *)(unaff_RSI + 0x10)) {
    do {
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      if (*(int *)(unaff_R14 + lVar1) == 2) {
        lVar2 = *(longlong *)(unaff_R14 + 0x30 + lVar1);
        if (lVar2 == 0) {
          if (*(longlong *)(unaff_R14 + 0x38 + lVar1) != 0) {
            FUN_180136850();
          }
        }
        else {
          if (*(longlong *)(lVar2 + 0x408) == 0) {
            *(int32_t *)(lVar2 + 0x418) = uVar5;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar2 + 0x408),lVar2,0);
          }
          lVar1 = SYSTEM_DATA_MANAGER_A;
          *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfc;
          *(int8_t *)(lVar2 + 0xb2) = 0;
          if (*(float *)(lVar1 + 0x2e04) <= unaff_XMM6_Da) {
            *(int32_t *)(lVar1 + 0x2e04) = *(int32_t *)(lVar1 + 0x1c);
          }
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      unaff_R14 = unaff_R14 + 0x40;
    } while ((int)uVar3 < *(int *)(unaff_RSI + 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180135811(void)
void FUN_180135811(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  int32_t uVar5;
  ulonglong unaff_R14;
  float unaff_XMM6_Da;
  
  uVar5 = (int32_t)unaff_R14;
  uVar4 = unaff_R14 & 0xffffffff;
  if (0 < *(int *)(unaff_RSI + 0x10)) {
    do {
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      if (*(int *)(unaff_R14 + lVar1) == 2) {
        lVar2 = *(longlong *)(unaff_R14 + 0x30 + lVar1);
        if (lVar2 == 0) {
          if (*(longlong *)(unaff_R14 + 0x38 + lVar1) != 0) {
            FUN_180136850();
          }
        }
        else {
          if (*(longlong *)(lVar2 + 0x408) == 0) {
            *(int32_t *)(lVar2 + 0x418) = uVar5;
          }
          else {
            FUN_180136d40(*(longlong *)(lVar2 + 0x408),lVar2,0);
          }
          lVar1 = SYSTEM_DATA_MANAGER_A;
          *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfc;
          *(int8_t *)(lVar2 + 0xb2) = 0;
          if (*(float *)(lVar1 + 0x2e04) <= unaff_XMM6_Da) {
            *(int32_t *)(lVar1 + 0x2e04) = *(int32_t *)(lVar1 + 0x1c);
          }
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      unaff_R14 = unaff_R14 + 0x40;
    } while ((int)uVar3 < *(int *)(unaff_RSI + 0x10));
  }
  return;
}





// 函数: void FUN_1801358b4(void)
void FUN_1801358b4(void)

{
  return;
}



uint FUN_1801358c0(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = 1;
  iVar1 = **(int **)(param_1 + 0x2df8);
  puVar2 = *(uint **)(*(int **)(param_1 + 0x2df8) + 2);
  while( true ) {
    uVar3 = (longlong)iVar1;
    puVar5 = puVar2;
    if (iVar1 != 0) {
      do {
        uVar4 = uVar3 >> 1;
        if (puVar5[uVar4 * 4] < uVar6) {
          puVar5 = puVar5 + uVar4 * 4 + 4;
          uVar4 = uVar3 + (-1 - uVar4);
        }
        uVar3 = uVar4;
      } while (uVar4 != 0);
    }
    if (((puVar5 == puVar2 + (longlong)iVar1 * 4) || (*puVar5 != uVar6)) ||
       (*(longlong *)(puVar5 + 2) == 0)) break;
    uVar6 = uVar6 + 1;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180135960(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int8_t auStackX_10 [8];
  int8_t *puStackX_18;
  longlong lStackX_20;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    param_2 = FUN_1801358c0();
  }
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  lStackX_20 = func_0x000180120ce0(0xa8,SYSTEM_DATA_MANAGER_B);
  puStackX_18 = auStackX_10;
  if (lStackX_20 == 0) {
    puVar1 = (int32_t *)0x0;
  }
  else {
    puVar1 = (int32_t *)FUN_180136a10(lStackX_20,param_2);
  }
  *(byte *)(puVar1 + 0x28) = *(byte *)(puVar1 + 0x28) | 3;
  FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar1,puVar1,param_4,uVar2);
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801359f0(longlong param_1,uint64_t *param_2,char param_3)
void FUN_1801359f0(longlong param_1,uint64_t *param_2,char param_3)

{
  int *piVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  byte bVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint64_t *puVar15;
  ulonglong uVar16;
  
  uVar6 = *(uint64_t *)(param_1 + 0x2df8);
  if (param_2[0xd] != 0) {
    *(uint64_t *)(param_2[0xd] + 0x410) = 0;
  }
  puVar7 = (int32_t *)param_2[1];
  if (param_3 == '\0') {
    if (puVar7 != (int32_t *)0x0) {
      for (lVar12 = 0x10; lVar12 < 0x20; lVar12 = lVar12 + 8) {
        if (*(uint64_t **)(lVar12 + (longlong)puVar7) == param_2) {
          *(uint64_t *)(lVar12 + param_2[1]) = 0;
        }
      }
    }
  }
  else if (puVar7 != (int32_t *)0x0) {
    puVar15 = *(uint64_t **)(puVar7 + 4);
    if (puVar15 == param_2) {
      puVar15 = *(uint64_t **)(puVar7 + 6);
    }
    puVar8 = *(int32_t **)(puVar7 + 4);
    puVar9 = *(int32_t **)(puVar7 + 6);
    uVar2 = puVar7[0x12];
    uVar3 = puVar7[0x13];
    lVar12 = puVar15[2];
    *(longlong *)(puVar7 + 4) = lVar12;
    lVar10 = puVar15[3];
    *(longlong *)(puVar7 + 6) = lVar10;
    if (lVar12 != 0) {
      *(int32_t **)(lVar12 + 8) = puVar7;
      lVar10 = *(longlong *)(puVar7 + 6);
    }
    if (lVar10 != 0) {
      *(int32_t **)(lVar10 + 8) = puVar7;
    }
    uVar16 = 0;
    puVar7[0x14] = *(int32_t *)(puVar15 + 10);
    *(uint64_t *)(puVar7 + 0x12) = puVar15[9];
    puVar15[3] = 0;
    puVar15[2] = 0;
    if (puVar8 != (int32_t *)0x0) {
      FUN_180136f60(puVar7,puVar8);
      FUN_18013bf60(*puVar8,*puVar7);
    }
    if (puVar9 != (int32_t *)0x0) {
      FUN_180136f60(puVar7,puVar9);
      FUN_18013bf60(*puVar9,*puVar7);
    }
    uVar14 = uVar16;
    if (0 < (int)puVar7[8]) {
      do {
        uVar13 = (int)uVar14 + 1;
        uVar4 = puVar7[0xf];
        lVar12 = *(longlong *)(uVar16 + *(longlong *)(puVar7 + 10));
        *(int32_t *)(lVar12 + 0x40) = puVar7[0xe];
        *(int32_t *)(lVar12 + 0x44) = uVar4;
        uVar4 = puVar7[0x11];
        lVar12 = *(longlong *)(uVar16 + *(longlong *)(puVar7 + 10));
        *(int32_t *)(lVar12 + 0x50) = puVar7[0x10];
        *(int32_t *)(lVar12 + 0x54) = uVar4;
        uVar16 = uVar16 + 8;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)puVar7[8]);
    }
    bVar5 = *(byte *)(puVar7 + 0x28);
    *(byte *)(puVar7 + 0x28) = bVar5 & 0xfc;
    *(uint64_t *)(puVar7 + 0x1c) = puVar15[0xe];
    if (((puVar8 == (int32_t *)0x0) || ((*(byte *)(puVar8 + 0x28) & 0x20) == 0)) &&
       ((puVar9 == (int32_t *)0x0 || ((*(byte *)(puVar9 + 0x28) & 0x20) == 0)))) {
      bVar11 = 0;
    }
    else {
      bVar11 = 0x20;
    }
    bVar11 = bVar5 & 0xdc | bVar11;
    *(byte *)(puVar7 + 0x28) = bVar11;
    bVar5 = *(byte *)(puVar15 + 0x14);
    puVar7[0x12] = uVar2;
    puVar7[0x13] = uVar3;
    *(byte *)(puVar7 + 0x28) = (bVar5 ^ bVar11) & 0x40 ^ bVar11;
    if (puVar8 == (int32_t *)0x0) {
      if (puVar9 == (int32_t *)0x0) {
        return;
      }
      FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar9,0);
      FUN_180136ab0(puVar9);
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(puVar9,SYSTEM_DATA_MANAGER_B);
    }
    FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar8,0);
    FUN_180136ab0(puVar8);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(puVar8,SYSTEM_DATA_MANAGER_B);
  }
  FUN_180122160(uVar6,*(int32_t *)param_2,0,uVar6,0xfffffffffffffffe);
  FUN_18013ea00(param_2[6]);
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar12 = param_2[5];
  if (lVar12 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar12,SYSTEM_DATA_MANAGER_B);
  }
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (param_2 != (uint64_t *)0x0) {
    uVar16 = (ulonglong)param_2 & 0xffffffffffc00000;
    if (uVar16 != 0) {
      lVar12 = uVar16 + 0x80 + ((longlong)param_2 - uVar16 >> 0x10) * 0x50;
      lVar12 = lVar12 - (ulonglong)*(uint *)(lVar12 + 4);
      if ((*(void ***)(uVar16 + 0x70) == &ExceptionList) && (*(char *)(lVar12 + 0xe) == '\0')) {
        *param_2 = *(uint64_t *)(lVar12 + 0x20);
        *(uint64_t **)(lVar12 + 0x20) = param_2;
        piVar1 = (int *)(lVar12 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar16,CONCAT71(0xff000000,*(void ***)(uVar16 + 0x70) == &ExceptionList)
                            ,param_2,uVar16,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136210(longlong param_1,longlong param_2,int param_3)
void FUN_180136210(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  byte *pbVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong lVar8;
  uint64_t uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  short *psVar14;
  int8_t auStack_68 [32];
  byte bStack_48;
  byte abStack_47 [23];
  ulonglong uStack_30;
  
  if (param_3 < 1) {
    return;
  }
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  psVar14 = (short *)(param_2 + 0x12);
  lVar13 = (longlong)param_3;
  do {
    if (*(int *)(psVar14 + -9) != 0) {
      puVar7 = (int32_t *)FUN_180135960();
      if (*(int *)(psVar14 + -7) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_180121fa0(*(uint64_t *)(param_1 + 0x2df8));
      }
      *(longlong *)(puVar7 + 2) = lVar8;
      sVar2 = psVar14[1];
      puVar7[0xe] = (float)(int)*psVar14;
      puVar7[0xf] = (float)(int)sVar2;
      sVar2 = psVar14[3];
      puVar7[0x10] = (float)(int)psVar14[2];
      puVar7[0x11] = (float)(int)sVar2;
      sVar2 = psVar14[5];
      puVar7[0x12] = (float)(int)psVar14[4];
      puVar7[0x13] = (float)(int)sVar2;
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x10) == 0) {
          *(int32_t **)(lVar8 + 0x10) = puVar7;
        }
        else if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x18) == 0)) {
          *(int32_t **)(lVar8 + 0x18) = puVar7;
        }
      }
      puVar7[0x26] = *(int32_t *)(psVar14 + -5);
      puVar7[0x14] = (int)(char)psVar14[-3];
      bVar1 = *(byte *)(puVar7 + 0x28);
      bVar10 = -((char)psVar14[-2] != '\0') & 0x10;
      *(byte *)(puVar7 + 0x28) = bVar10 | bVar1 & 0xef;
      bVar11 = -(*(char *)((longlong)psVar14 + -3) != '\0') & 0x20;
      *(byte *)(puVar7 + 0x28) = bVar11 | bVar10 | bVar1 & 0xcf;
      *(byte *)(puVar7 + 0x28) =
           -((char)psVar14[-1] != '\0') & 0x40U | bVar11 | bVar10 | bVar1 & 0x8f;
      puVar6 = *(int32_t **)(puVar7 + 2);
      puVar4 = puVar7;
      while (puVar3 = puVar6, puVar3 != (int32_t *)0x0) {
        puVar4 = puVar3;
        puVar6 = *(int32_t **)(puVar3 + 2);
      }
      FUN_180121200(&bStack_48,0x14,&unknown_var_2680_ptr,*puVar4);
      uVar12 = 0xffffffff;
      pbVar5 = abStack_47;
      bVar1 = bStack_48;
      while (bVar1 != 0) {
        if (((bVar1 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
          uVar12 = 0xffffffff;
        }
        uVar12 = *(uint *)(&unknown_var_6320_ptr + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar1) * 4) ^
                 uVar12 >> 8;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      }
      uVar9 = FUN_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar12);
      *(uint64_t *)(puVar7 + 0x1a) = uVar9;
    }
    psVar14 = psVar14 + 0x10;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




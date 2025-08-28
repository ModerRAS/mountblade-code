#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part131.c - 3 个函数

// 函数: void FUN_18012faae(uint64_t *param_1,longlong param_2)
void FUN_18012faae(uint64_t *param_1,longlong param_2)

{
  *param_1 = *(uint64_t *)(param_2 + 0x40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18012fbd0(longlong param_1,int32_t *param_2)

{
  float fVar1;
  int iVar2;
  int32_t *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar5 = _DAT_180c8a9b0;
  if ((((param_2[1] & 0x400) != 0) && (puVar3 = *(int32_t **)(param_1 + 0x28), puVar3 != param_2)
      ) && (*(char *)((longlong)param_2 + 0x77) == '\0')) {
    fVar1 = *(float *)(param_1 + 0x40);
    fVar11 = *(float *)(param_1 + 0x44);
    fVar12 = fVar1 + *(float *)(param_1 + 0x48);
    if ((((float)param_2[2] <= fVar1) && ((float)param_2[3] <= fVar11)) &&
       ((fVar12 <= (float)param_2[2] + (float)param_2[4] &&
        ((fVar11 + *(float *)(param_1 + 0x4c) <= (float)param_2[3] + (float)param_2[5] &&
         (cVar6 = func_0x00018012fb90(), cVar6 == '\0')))))) {
      uVar8 = 0;
      uVar7 = uVar8;
      if (0 < *(int *)(lVar5 + 0x1aa0)) {
        iVar2 = *(int *)(lVar5 + 0x1aa0);
        plVar10 = *(longlong **)(lVar5 + 0x1aa8);
        do {
          lVar4 = *plVar10;
          if (lVar4 == param_1) break;
          if (((*(char *)(lVar4 + 0xb0) != (char)uVar7) && (*(char *)(lVar4 + 0xae) != (char)uVar7))
             && ((*(uint *)(lVar4 + 0xc) & 0x1000000) == 0)) {
            lVar4 = *(longlong *)(lVar4 + 0x28);
            fStack_38 = *(float *)(lVar4 + 8);
            fStack_34 = *(float *)(lVar4 + 0xc);
            fStack_30 = fStack_38 + *(float *)(lVar4 + 0x10);
            fStack_2c = fStack_34 + *(float *)(lVar4 + 0x14);
            fStack_3c = fVar11 + *(float *)(param_1 + 0x4c);
            fStack_48 = fVar1;
            fStack_44 = fVar11;
            fStack_40 = fVar12;
            cVar6 = func_0x00018010e5e0(&fStack_38,&fStack_48);
            if (cVar6 != '\0') {
              return 0;
            }
          }
          uVar8 = uVar8 + 1;
          plVar10 = plVar10 + 1;
        } while ((longlong)uVar8 < (longlong)iVar2);
      }
      if ((*(char *)(param_1 + 0xae) != (char)uVar7) &&
         (uVar8 = uVar7, (int)uVar7 < *(int *)(lVar5 + 0x1aa0))) {
        do {
          lVar4 = *(longlong *)(uVar7 + *(longlong *)(lVar5 + 0x1aa8));
          if (*(int32_t **)(lVar4 + 0x28) == puVar3) {
            *(int32_t **)(lVar4 + 0x28) = param_2;
            *(int32_t *)(lVar4 + 0x30) = *param_2;
            *(bool *)(lVar4 + 0xae) = *(longlong *)(param_2 + 0x1e) == lVar4;
          }
          uVar9 = (int)uVar8 + 1;
          uVar7 = uVar7 + 8;
          uVar8 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(lVar5 + 0x1aa0));
      }
      *(int32_t **)(param_1 + 0x28) = param_2;
      *(int32_t *)(param_1 + 0x30) = *param_2;
      *(bool *)(param_1 + 0xae) = *(longlong *)(param_2 + 0x1e) == param_1;
      FUN_18012d230(param_1);
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18012fe00(uint64_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fStack_18;
  float fStack_14;
  
  lVar2 = 0;
  fStack_14 = (float)((ulonglong)param_1 >> 0x20);
  fStack_18 = (float)param_1;
  lVar4 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1c68);
  lVar6 = lVar2;
  if (3 < lVar4) {
    plVar3 = (longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1c70) + 0x10);
    lVar5 = (lVar4 - 4U >> 2) + 1;
    lVar6 = lVar5 * 4;
    do {
      lVar1 = plVar3[-2];
      if (((*(byte *)(lVar1 + 4) & 8) == 0) && (*(char *)(lVar1 + 0x77) == '\0')) {
        if (((*(float *)(lVar1 + 8) <= fStack_18) &&
            (((*(float *)(lVar1 + 0xc) <= fStack_14 &&
              (fStack_18 < *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10))) &&
             (fStack_14 < *(float *)(lVar1 + 0xc) + *(float *)(lVar1 + 0x14))))) &&
           ((lVar2 == 0 || (*(int *)(lVar2 + 0x5c) < *(int *)(lVar1 + 0x5c))))) {
          lVar2 = lVar1;
        }
      }
      lVar1 = plVar3[-1];
      if (((*(byte *)(lVar1 + 4) & 8) == 0) && (*(char *)(lVar1 + 0x77) == '\0')) {
        if ((*(float *)(lVar1 + 8) <= fStack_18) &&
           ((((*(float *)(lVar1 + 0xc) <= fStack_14 &&
              (fStack_18 < *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10))) &&
             (fStack_14 < *(float *)(lVar1 + 0xc) + *(float *)(lVar1 + 0x14))) &&
            ((lVar2 == 0 || (*(int *)(lVar2 + 0x5c) < *(int *)(lVar1 + 0x5c))))))) {
          lVar2 = lVar1;
        }
      }
      lVar1 = *plVar3;
      if (((*(byte *)(lVar1 + 4) & 8) == 0) && (*(char *)(lVar1 + 0x77) == '\0')) {
        if (((*(float *)(lVar1 + 8) <= fStack_18) &&
            (((*(float *)(lVar1 + 0xc) <= fStack_14 &&
              (fStack_18 < *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10))) &&
             (fStack_14 < *(float *)(lVar1 + 0xc) + *(float *)(lVar1 + 0x14))))) &&
           ((lVar2 == 0 || (*(int *)(lVar2 + 0x5c) < *(int *)(lVar1 + 0x5c))))) {
          lVar2 = lVar1;
        }
      }
      lVar1 = plVar3[1];
      if (((*(byte *)(lVar1 + 4) & 8) == 0) && (*(char *)(lVar1 + 0x77) == '\0')) {
        if (((*(float *)(lVar1 + 8) <= fStack_18) &&
            (((*(float *)(lVar1 + 0xc) <= fStack_14 &&
              (fStack_18 < *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10))) &&
             (fStack_14 < *(float *)(lVar1 + 0xc) + *(float *)(lVar1 + 0x14))))) &&
           ((lVar2 == 0 || (*(int *)(lVar2 + 0x5c) < *(int *)(lVar1 + 0x5c))))) {
          lVar2 = lVar1;
        }
      }
      plVar3 = plVar3 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar6 < lVar4) {
    lVar4 = lVar4 - lVar6;
    plVar3 = (longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1c70) + lVar6 * 8);
    do {
      lVar6 = *plVar3;
      if (((*(byte *)(lVar6 + 4) & 8) == 0) && (*(char *)(lVar6 + 0x77) == '\0')) {
        if ((*(float *)(lVar6 + 8) <= fStack_18) &&
           ((((*(float *)(lVar6 + 0xc) <= fStack_14 &&
              (fStack_18 < *(float *)(lVar6 + 8) + *(float *)(lVar6 + 0x10))) &&
             (fStack_14 < *(float *)(lVar6 + 0xc) + *(float *)(lVar6 + 0x14))) &&
            ((lVar2 == 0 || (*(int *)(lVar2 + 0x5c) < *(int *)(lVar6 + 0x5c))))))) {
          lVar2 = lVar6;
        }
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130010(void)
void FUN_180130010(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int8_t uVar6;
  int16_t uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar5 = _DAT_180c8a9b0;
  uVar10 = 0;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (0 < *(int *)(_DAT_180c8a9b0 + 0x1c68)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x1c70) + uVar9 * 8);
      if ((uVar9 == 0) || (*(char *)(lVar2 + 0x76) != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((((*(uint *)(lVar5 + 0x19e8) & 0x400) != 0) && (*(code **)(lVar5 + 0x1588) != (code *)0x0)
          ) && (bVar4)) {
        uVar6 = (**(code **)(lVar5 + 0x1588))(lVar2);
        *(int8_t *)(lVar2 + 0x77) = uVar6;
      }
      uVar17 = (int)uVar12 + 1;
      uVar9 = uVar9 + 1;
      uVar12 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(lVar5 + 0x1c68));
  }
  uStackX_10 = *(uint64_t *)(lVar5 + 0x10);
  uStackX_8 = 0;
  lVar2 = **(longlong **)(lVar5 + 0x1c70);
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) != 0) {
    if (*(char *)(lVar2 + 0x77) == '\0') {
      puVar8 = (uint64_t *)(**(code **)(lVar5 + 0x1560))(&uStackX_8,lVar2);
      uStackX_8 = *puVar8;
    }
    else {
      uStackX_8 = *(uint64_t *)(lVar2 + 8);
    }
  }
  FUN_180130830(0,0x11111111,&uStackX_8,&uStackX_10,0x400);
  *(uint64_t *)(lVar5 + 0x1c78) = 0;
  *(uint64_t *)(lVar5 + 0x1c80) = 0;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (0 < *(int *)(lVar5 + 0x1c68)) {
    do {
      lVar11 = *(longlong *)(uVar12 + *(longlong *)(lVar5 + 0x1c70));
      iVar13 = (int)uVar9;
      *(int *)(lVar11 + 0x50) = iVar13;
      if ((0 < iVar13) && (*(int *)(lVar11 + 0x54) < *(int *)(lVar5 + 0x1a90) + -2)) {
        uVar9 = uVar10;
        if (0 < *(int *)(lVar5 + 0x1aa0)) {
          do {
            lVar2 = *(longlong *)(uVar10 + *(longlong *)(lVar5 + 0x1aa8));
            if (*(longlong *)(lVar2 + 0x28) == lVar11) {
              *(uint64_t *)(lVar2 + 0x28) = 0;
              *(int8_t *)(*(longlong *)(uVar10 + *(longlong *)(lVar5 + 0x1aa8)) + 0xae) = 0;
            }
            uVar17 = (int)uVar9 + 1;
            uVar10 = uVar10 + 8;
            uVar9 = (ulonglong)uVar17;
          } while ((int)uVar17 < *(int *)(lVar5 + 0x1aa0));
        }
        if (lVar11 == *(longlong *)(lVar5 + 0x1c88)) {
          *(uint64_t *)(lVar5 + 0x1c88) = 0;
        }
        lVar11 = (longlong)iVar13 * 8 >> 3;
        lVar2 = *(longlong *)(lVar5 + 0x1c70) + lVar11 * 8;
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar2 + 8,(*(int *)(lVar5 + 0x1c68) - lVar11) * 8 + -8);
      }
      if ((iVar13 == 0) || (*(char *)(lVar11 + 0x76) != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((*(uint *)(lVar5 + 0x19e8) & 0x400) != 0) {
        if ((*(char *)(lVar11 + 0x77) == '\0') && (bVar4)) {
          if (*(char *)(lVar11 + 0x49) != '\0') {
            puVar8 = (uint64_t *)(**(code **)(lVar5 + 0x1560))(&uStackX_8,lVar11);
            uVar1 = *puVar8;
            *(uint64_t *)(lVar11 + 0xd8) = uVar1;
            *(uint64_t *)(lVar11 + 8) = uVar1;
          }
          if (*(char *)(lVar11 + 0x4a) != '\0') {
            puVar8 = (uint64_t *)(**(code **)(lVar5 + 0x1570))(&uStackX_10,lVar11);
            uVar1 = *puVar8;
            *(uint64_t *)(lVar11 + 0xe0) = uVar1;
            *(uint64_t *)(lVar11 + 0x10) = uVar1;
          }
        }
        fStack_78 = *(float *)(lVar11 + 8);
        fStack_74 = *(float *)(lVar11 + 0xc);
        fStack_70 = fStack_78 + *(float *)(lVar11 + 0x10);
        fStack_6c = fStack_74 + *(float *)(lVar11 + 0x14);
        uVar7 = FUN_180130ec0(&fStack_78);
        *(int16_t *)(lVar11 + 0x74) = uVar7;
      }
      *(int32_t *)(lVar11 + 0x6c) = 0x3f800000;
      fVar19 = *(float *)(lVar11 + 8) - *(float *)(lVar11 + 100);
      fVar18 = *(float *)(lVar11 + 0xc) - *(float *)(lVar11 + 0x68);
      if (((*(uint *)(lVar11 + 4) & 0x400) != 0) &&
         (((fVar19 != 0.0 || (fVar18 != 0.0)) &&
          (uVar9 = uVar10, uVar15 = uVar10, 0 < *(int *)(lVar5 + 0x1aa0))))) {
        do {
          lVar16 = *(longlong *)(uVar9 + *(longlong *)(lVar5 + 0x1aa8));
          if ((*(longlong *)(lVar16 + 0x28) == lVar11) || ((*(uint *)(lVar5 + 0x19e8) & 0x400) == 0)
             ) {
            *(float *)(lVar16 + 0x40) = fVar19 + *(float *)(lVar16 + 0x40);
            *(float *)(lVar16 + 0x44) = fVar18 + *(float *)(lVar16 + 0x44);
            *(float *)(lVar16 + 0x228) = fVar19 + *(float *)(lVar16 + 0x228);
            *(float *)(lVar16 + 0x22c) = fVar18 + *(float *)(lVar16 + 0x22c);
            *(float *)(lVar16 + 0x230) = fVar19 + *(float *)(lVar16 + 0x230);
            *(float *)(lVar16 + 0x234) = fVar18 + *(float *)(lVar16 + 0x234);
            *(float *)(lVar16 + 0x238) = fVar19 + *(float *)(lVar16 + 0x238);
            *(float *)(lVar16 + 0x23c) = fVar18 + *(float *)(lVar16 + 0x23c);
            *(float *)(lVar16 + 0x240) = fVar19 + *(float *)(lVar16 + 0x240);
            *(float *)(lVar16 + 0x244) = fVar18 + *(float *)(lVar16 + 0x244);
            *(float *)(lVar16 + 0x248) = fVar19 + *(float *)(lVar16 + 0x248);
            *(float *)(lVar16 + 0x24c) = fVar18 + *(float *)(lVar16 + 0x24c);
            *(float *)(lVar16 + 0x250) = fVar19 + *(float *)(lVar16 + 0x250);
            *(float *)(lVar16 + 0x254) = fVar18 + *(float *)(lVar16 + 0x254);
            *(float *)(lVar16 + 0x100) = fVar19 + *(float *)(lVar16 + 0x100);
            *(float *)(lVar16 + 0x104) = fVar18 + *(float *)(lVar16 + 0x104);
            *(float *)(lVar16 + 0x110) = fVar19 + *(float *)(lVar16 + 0x110);
            *(float *)(lVar16 + 0x114) = fVar18 + *(float *)(lVar16 + 0x114);
            *(float *)(lVar16 + 0x118) = fVar19 + *(float *)(lVar16 + 0x118);
            *(float *)(lVar16 + 0x11c) = fVar18 + *(float *)(lVar16 + 0x11c);
            *(float *)(lVar16 + 0x14c) = fVar19 + *(float *)(lVar16 + 0x14c);
            *(float *)(lVar16 + 0x150) = fVar18 + *(float *)(lVar16 + 0x150);
            *(float *)(lVar16 + 0x154) = fVar19 + *(float *)(lVar16 + 0x154);
            *(float *)(lVar16 + 0x158) = fVar18 + *(float *)(lVar16 + 0x158);
            *(float *)(lVar16 + 0x15c) = fVar19 + *(float *)(lVar16 + 0x15c);
            *(float *)(lVar16 + 0x160) = fVar18 + *(float *)(lVar16 + 0x160);
            *(float *)(lVar16 + 0x164) = fVar19 + *(float *)(lVar16 + 0x164);
            *(float *)(lVar16 + 0x168) = fVar18 + *(float *)(lVar16 + 0x168);
          }
          uVar17 = (int)uVar15 + 1;
          uVar9 = uVar9 + 8;
          uVar15 = (ulonglong)uVar17;
        } while ((int)uVar17 < *(int *)(lVar5 + 0x1aa0));
      }
      if ((*(code **)(lVar5 + 0x15b8) == (code *)0x0) || (!bVar4)) {
        if (*(short *)(lVar11 + 0x74) == -1) {
          fVar18 = *(float *)(lVar11 + 0x18);
          if (fVar18 == 0.0) {
            fVar18 = 1.0;
          }
        }
        else {
          fVar18 = *(float *)(*(longlong *)(lVar5 + 0x1608) + 0x20 +
                             (longlong)*(short *)(lVar11 + 0x74) * 0x24);
        }
      }
      else {
        fVar18 = (float)(**(code **)(lVar5 + 0x15b8))(lVar11);
      }
      fVar19 = *(float *)(lVar11 + 0x18);
      if (((fVar19 != 0.0) && (fVar18 != fVar19)) && ((*(uint *)(lVar5 + 8) & 0x4000) != 0)) {
        if (*(longlong *)(lVar11 + 0x78) == 0) {
          uVar9 = uVar10;
          uVar15 = uVar10;
          lVar16 = _DAT_180c8a9b0;
          if (*(int *)(_DAT_180c8a9b0 + 0x1aa0) != 0) {
            do {
              iVar14 = (int)uVar15;
              lVar3 = *(longlong *)(uVar9 + *(longlong *)(lVar16 + 0x1aa8));
              if (*(longlong *)(lVar3 + 0x28) == lVar11) {
                func_0x000180124d50(lVar3,fVar18 / fVar19);
              }
              uVar9 = uVar9 + 8;
              uVar15 = (ulonglong)(iVar14 + 1U);
            } while (iVar14 + 1U != *(uint *)(lVar16 + 0x1aa0));
          }
        }
        else {
          func_0x000180124d50(*(longlong *)(lVar11 + 0x78),fVar18 / fVar19);
        }
      }
      *(float *)(lVar11 + 0x18) = fVar18;
      uVar9 = (ulonglong)(iVar13 + 1U);
      uVar12 = uVar12 + 8;
    } while ((int)(iVar13 + 1U) < *(int *)(lVar5 + 0x1c68));
  }
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) == 0) {
    *(longlong *)(lVar5 + 0x1c80) = lVar2;
    return;
  }
  if ((*(uint *)(lVar5 + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar9 = FUN_18012fe00(*(uint64_t *)(lVar5 + 0x118));
LAB_180130774:
    uVar12 = uVar9;
    if (uVar9 == 0) goto LAB_18013078e;
    *(ulonglong *)(lVar5 + 0x1c88) = uVar9;
  }
  else {
    uVar9 = uVar10;
    if ((*(int *)(lVar5 + 0x130) != 0) && (0 < *(int *)(_DAT_180c8a9b0 + 0x1c68))) {
      puVar8 = *(uint64_t **)(_DAT_180c8a9b0 + 0x1c70);
      uVar12 = uVar10;
      uVar15 = uVar10;
      do {
        if (*(int *)*puVar8 == *(int *)(lVar5 + 0x130)) {
          uVar9 = (*(uint64_t **)(_DAT_180c8a9b0 + 0x1c70))[(int)uVar15];
          break;
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(_DAT_180c8a9b0 + 0x1c68));
    }
    uVar12 = uVar9;
    if (uVar9 != 0) {
      if ((*(byte *)(uVar9 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar9 = *(ulonglong *)(lVar5 + 0x1c88);
    if (uVar9 == 0) {
      uVar9 = **(ulonglong **)(lVar5 + 0x1c70);
      *(ulonglong *)(lVar5 + 0x1c88) = uVar9;
    }
  }
  if (*(longlong *)(lVar5 + 0x1b78) != 0) {
    uVar9 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1b78) + 0x28);
  }
  *(ulonglong *)(lVar5 + 0x1c80) = uVar9;
  if (*(char *)(lVar5 + 0x1dd0) == '\0') {
    if (*(int *)(lVar5 + 0x1b2c) != 0) {
      do {
        if (*(char *)(_DAT_180c8a9b0 + 0x120 + uVar10) != '\0') {
          return;
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < 5);
    }
  }
  else {
    if (uVar12 != 0) goto LAB_180130808;
    uVar12 = *(ulonglong *)(lVar5 + 0x1c88);
  }
  if (uVar12 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar12 != *(ulonglong *)(lVar5 + 0x1c80)) && ((*(byte *)(uVar12 + 4) & 8) == 0)) {
    *(ulonglong *)(lVar5 + 0x1c80) = uVar12;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130027(void)
void FUN_180130027(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int8_t uVar11;
  int16_t uVar12;
  longlong in_RAX;
  ulonglong *puVar13;
  uint64_t *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong unaff_RBX;
  int iVar18;
  uint64_t unaff_RBP;
  char cVar19;
  int iVar20;
  ulonglong unaff_RSI;
  uint64_t unaff_RDI;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  uint64_t unaff_R14;
  float fVar25;
  float fVar26;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  int32_t in_stack_00000040;
  int32_t in_stack_00000048;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  ulonglong in_stack_000000b0;
  uint64_t in_stack_000000b8;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  iVar20 = (int)unaff_RSI;
  uVar15 = unaff_RSI & 0xffffffff;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  cVar19 = (char)unaff_RSI;
  if (iVar20 < *(int *)(unaff_RBX + 0x1c68)) {
    uVar21 = unaff_RSI & 0xffffffff;
    do {
      lVar2 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1c70) + uVar21 * 8);
      if ((uVar21 == 0) || (*(char *)(lVar2 + 0x76) != cVar19)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((((*(uint *)(unaff_RBX + 0x19e8) & 0x400) != 0) &&
          (*(code **)(unaff_RBX + 0x1588) != (code *)0x0)) && (bVar4)) {
        uVar11 = (**(code **)(unaff_RBX + 0x1588))(lVar2);
        *(int8_t *)(lVar2 + 0x77) = uVar11;
      }
      uVar24 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar24;
      uVar21 = uVar21 + 1;
    } while ((int)uVar24 < *(int *)(unaff_RBX + 0x1c68));
  }
  in_stack_000000b8 = *(uint64_t *)(unaff_RBX + 0x10);
  lVar2 = **(longlong **)(unaff_RBX + 0x1c70);
  in_stack_000000b0 = unaff_RSI;
  if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) != 0) {
    if (*(char *)(lVar2 + 0x77) == cVar19) {
      puVar13 = (ulonglong *)(**(code **)(unaff_RBX + 0x1560))(&stack0x000000b0,lVar2);
      in_stack_000000b0 = *puVar13;
    }
    else {
      in_stack_000000b0 = *(ulonglong *)(lVar2 + 8);
    }
  }
  FUN_180130830(0,0x11111111,&stack0x000000b0,&stack0x000000b8,0x400);
  uVar21 = unaff_RSI & 0xffffffff;
  *(ulonglong *)(unaff_RBX + 0x1c78) = unaff_RSI;
  *(ulonglong *)(unaff_RBX + 0x1c80) = unaff_RSI;
  uVar15 = unaff_RSI;
  uVar5 = unaff_XMM9_Da;
  uVar6 = unaff_XMM9_Dc;
  uVar7 = unaff_XMM7_Da;
  uVar8 = unaff_XMM7_Dc;
  uVar9 = unaff_XMM6_Da;
  uVar10 = unaff_XMM6_Dc;
  if (iVar20 < *(int *)(unaff_RBX + 0x1c68)) {
    do {
      in_stack_00000078 = uVar10;
      in_stack_00000070 = uVar9;
      in_stack_00000068 = uVar8;
      in_stack_00000060 = uVar7;
      in_stack_00000048 = uVar6;
      in_stack_00000040 = uVar5;
      lVar16 = *(longlong *)(uVar15 + *(longlong *)(unaff_RBX + 0x1c70));
      iVar18 = (int)uVar21;
      *(int *)(lVar16 + 0x50) = iVar18;
      if ((0 < iVar18) && (*(int *)(lVar16 + 0x54) < *(int *)(unaff_RBX + 0x1a90) + -2)) {
        uVar21 = unaff_RSI & 0xffffffff;
        uVar15 = unaff_RSI;
        if (iVar20 < *(int *)(unaff_RBX + 0x1aa0)) {
          do {
            lVar2 = *(longlong *)(uVar15 + *(longlong *)(unaff_RBX + 0x1aa8));
            if (*(longlong *)(lVar2 + 0x28) == lVar16) {
              *(ulonglong *)(lVar2 + 0x28) = unaff_RSI;
              *(char *)(*(longlong *)(uVar15 + *(longlong *)(unaff_RBX + 0x1aa8)) + 0xae) = cVar19;
            }
            uVar24 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar24;
            uVar15 = uVar15 + 8;
          } while ((int)uVar24 < *(int *)(unaff_RBX + 0x1aa0));
        }
        if (lVar16 == *(longlong *)(unaff_RBX + 0x1c88)) {
          *(ulonglong *)(unaff_RBX + 0x1c88) = unaff_RSI;
        }
        lVar16 = (longlong)iVar18 * 8 >> 3;
        lVar2 = *(longlong *)(unaff_RBX + 0x1c70) + lVar16 * 8;
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar2 + 8,(*(int *)(unaff_RBX + 0x1c68) - lVar16) * 8 + -8);
      }
      if ((iVar18 == 0) || (*(char *)(lVar16 + 0x76) != cVar19)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) != 0) {
        if ((*(char *)(lVar16 + 0x77) == cVar19) && (bVar4)) {
          if (*(char *)(lVar16 + 0x49) != cVar19) {
            puVar14 = (uint64_t *)(**(code **)(unaff_RBX + 0x1560))(&stack0x000000b0,lVar16);
            uVar1 = *puVar14;
            *(uint64_t *)(lVar16 + 0xd8) = uVar1;
            *(uint64_t *)(lVar16 + 8) = uVar1;
          }
          if (*(char *)(lVar16 + 0x4a) != cVar19) {
            puVar14 = (uint64_t *)(**(code **)(unaff_RBX + 0x1570))(&stack0x000000b8,lVar16);
            uVar1 = *puVar14;
            *(uint64_t *)(lVar16 + 0xe0) = uVar1;
            *(uint64_t *)(lVar16 + 0x10) = uVar1;
          }
        }
        fStack0000000000000030 = *(float *)(lVar16 + 8);
        fStack0000000000000034 = *(float *)(lVar16 + 0xc);
        fStack0000000000000038 = fStack0000000000000030 + *(float *)(lVar16 + 0x10);
        fStack000000000000003c = fStack0000000000000034 + *(float *)(lVar16 + 0x14);
        uVar12 = FUN_180130ec0(&stack0x00000030);
        *(int16_t *)(lVar16 + 0x74) = uVar12;
      }
      *(int32_t *)(lVar16 + 0x6c) = 0x3f800000;
      fVar26 = *(float *)(lVar16 + 8) - *(float *)(lVar16 + 100);
      fVar25 = *(float *)(lVar16 + 0xc) - *(float *)(lVar16 + 0x68);
      if (((*(uint *)(lVar16 + 4) & 0x400) != 0) &&
         (((fVar26 != 0.0 || (fVar25 != 0.0)) &&
          (uVar17 = unaff_RSI & 0xffffffff, uVar21 = unaff_RSI,
          iVar20 < *(int *)(unaff_RBX + 0x1aa0))))) {
        do {
          lVar23 = *(longlong *)(uVar21 + *(longlong *)(unaff_RBX + 0x1aa8));
          if ((*(longlong *)(lVar23 + 0x28) == lVar16) ||
             ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) == 0)) {
            *(float *)(lVar23 + 0x40) = fVar26 + *(float *)(lVar23 + 0x40);
            *(float *)(lVar23 + 0x44) = fVar25 + *(float *)(lVar23 + 0x44);
            *(float *)(lVar23 + 0x228) = fVar26 + *(float *)(lVar23 + 0x228);
            *(float *)(lVar23 + 0x22c) = fVar25 + *(float *)(lVar23 + 0x22c);
            *(float *)(lVar23 + 0x230) = fVar26 + *(float *)(lVar23 + 0x230);
            *(float *)(lVar23 + 0x234) = fVar25 + *(float *)(lVar23 + 0x234);
            *(float *)(lVar23 + 0x238) = fVar26 + *(float *)(lVar23 + 0x238);
            *(float *)(lVar23 + 0x23c) = fVar25 + *(float *)(lVar23 + 0x23c);
            *(float *)(lVar23 + 0x240) = fVar26 + *(float *)(lVar23 + 0x240);
            *(float *)(lVar23 + 0x244) = fVar25 + *(float *)(lVar23 + 0x244);
            *(float *)(lVar23 + 0x248) = fVar26 + *(float *)(lVar23 + 0x248);
            *(float *)(lVar23 + 0x24c) = fVar25 + *(float *)(lVar23 + 0x24c);
            *(float *)(lVar23 + 0x250) = fVar26 + *(float *)(lVar23 + 0x250);
            *(float *)(lVar23 + 0x254) = fVar25 + *(float *)(lVar23 + 0x254);
            *(float *)(lVar23 + 0x100) = fVar26 + *(float *)(lVar23 + 0x100);
            *(float *)(lVar23 + 0x104) = fVar25 + *(float *)(lVar23 + 0x104);
            *(float *)(lVar23 + 0x110) = fVar26 + *(float *)(lVar23 + 0x110);
            *(float *)(lVar23 + 0x114) = fVar25 + *(float *)(lVar23 + 0x114);
            *(float *)(lVar23 + 0x118) = fVar26 + *(float *)(lVar23 + 0x118);
            *(float *)(lVar23 + 0x11c) = fVar25 + *(float *)(lVar23 + 0x11c);
            *(float *)(lVar23 + 0x14c) = fVar26 + *(float *)(lVar23 + 0x14c);
            *(float *)(lVar23 + 0x150) = fVar25 + *(float *)(lVar23 + 0x150);
            *(float *)(lVar23 + 0x154) = fVar26 + *(float *)(lVar23 + 0x154);
            *(float *)(lVar23 + 0x158) = fVar25 + *(float *)(lVar23 + 0x158);
            *(float *)(lVar23 + 0x15c) = fVar26 + *(float *)(lVar23 + 0x15c);
            *(float *)(lVar23 + 0x160) = fVar25 + *(float *)(lVar23 + 0x160);
            *(float *)(lVar23 + 0x164) = fVar26 + *(float *)(lVar23 + 0x164);
            *(float *)(lVar23 + 0x168) = fVar25 + *(float *)(lVar23 + 0x168);
          }
          uVar24 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar24;
          uVar21 = uVar21 + 8;
        } while ((int)uVar24 < *(int *)(unaff_RBX + 0x1aa0));
      }
      if ((*(code **)(unaff_RBX + 0x15b8) == (code *)0x0) || (!bVar4)) {
        if (*(short *)(lVar16 + 0x74) == -1) {
          fVar25 = *(float *)(lVar16 + 0x18);
          if (fVar25 == 0.0) {
            fVar25 = 1.0;
          }
        }
        else {
          fVar25 = *(float *)(*(longlong *)(unaff_RBX + 0x1608) + 0x20 +
                             (longlong)*(short *)(lVar16 + 0x74) * 0x24);
        }
      }
      else {
        fVar25 = (float)(**(code **)(unaff_RBX + 0x15b8))(lVar16);
      }
      fVar26 = *(float *)(lVar16 + 0x18);
      if (((fVar26 != 0.0) && (fVar25 != fVar26)) && ((*(uint *)(unaff_RBX + 8) & 0x4000) != 0)) {
        if (*(longlong *)(lVar16 + 0x78) == 0) {
          uVar17 = unaff_RSI & 0xffffffff;
          uVar21 = unaff_RSI;
          lVar23 = _DAT_180c8a9b0;
          if (*(int *)(_DAT_180c8a9b0 + 0x1aa0) != iVar20) {
            do {
              iVar22 = (int)uVar17;
              lVar3 = *(longlong *)(uVar21 + *(longlong *)(lVar23 + 0x1aa8));
              if (*(longlong *)(lVar3 + 0x28) == lVar16) {
                func_0x000180124d50(lVar3,fVar25 / fVar26);
              }
              uVar17 = (ulonglong)(iVar22 + 1U);
              uVar21 = uVar21 + 8;
            } while (iVar22 + 1U != *(uint *)(lVar23 + 0x1aa0));
          }
        }
        else {
          func_0x000180124d50(*(longlong *)(lVar16 + 0x78),fVar25 / fVar26);
        }
      }
      *(float *)(lVar16 + 0x18) = fVar25;
      uVar21 = (ulonglong)(iVar18 + 1U);
      uVar15 = uVar15 + 8;
      uVar5 = in_stack_00000040;
      uVar6 = in_stack_00000048;
      uVar7 = in_stack_00000060;
      uVar8 = in_stack_00000068;
      uVar9 = in_stack_00000070;
      uVar10 = in_stack_00000078;
    } while ((int)(iVar18 + 1U) < *(int *)(unaff_RBX + 0x1c68));
  }
  if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) == 0) {
    *(longlong *)(unaff_RBX + 0x1c80) = lVar2;
    return;
  }
  if ((*(uint *)(unaff_RBX + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar15 = FUN_18012fe00(*(uint64_t *)(unaff_RBX + 0x118));
LAB_180130774:
    uVar21 = uVar15;
    if (uVar15 == 0) goto LAB_18013078e;
    *(ulonglong *)(unaff_RBX + 0x1c88) = uVar15;
  }
  else {
    uVar15 = unaff_RSI;
    if (*(int *)(unaff_RBX + 0x130) != 0) {
      uVar21 = unaff_RSI & 0xffffffff;
      if (0 < *(int *)(_DAT_180c8a9b0 + 0x1c68)) {
        puVar14 = *(uint64_t **)(_DAT_180c8a9b0 + 0x1c70);
        uVar17 = unaff_RSI;
        do {
          if (*(int *)*puVar14 == *(int *)(unaff_RBX + 0x130)) {
            uVar15 = (*(uint64_t **)(_DAT_180c8a9b0 + 0x1c70))[(int)uVar21];
            break;
          }
          uVar21 = (ulonglong)((int)uVar21 + 1);
          uVar17 = uVar17 + 1;
          puVar14 = puVar14 + 1;
        } while ((longlong)uVar17 < (longlong)*(int *)(_DAT_180c8a9b0 + 0x1c68));
      }
    }
    uVar21 = uVar15;
    if (uVar15 != 0) {
      if ((*(byte *)(uVar15 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar15 = *(ulonglong *)(unaff_RBX + 0x1c88);
    if (uVar15 == 0) {
      uVar15 = **(ulonglong **)(unaff_RBX + 0x1c70);
      *(ulonglong *)(unaff_RBX + 0x1c88) = uVar15;
    }
  }
  if (*(longlong *)(unaff_RBX + 0x1b78) != 0) {
    uVar15 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x1b78) + 0x28);
  }
  *(ulonglong *)(unaff_RBX + 0x1c80) = uVar15;
  if (*(char *)(unaff_RBX + 0x1dd0) == cVar19) {
    if (*(int *)(unaff_RBX + 0x1b2c) != iVar20) {
      do {
        if (*(char *)(_DAT_180c8a9b0 + 0x120 + unaff_RSI) != '\0') {
          return;
        }
        unaff_RSI = unaff_RSI + 1;
      } while ((longlong)unaff_RSI < 5);
    }
  }
  else {
    if (uVar21 != 0) goto LAB_180130808;
    uVar21 = *(ulonglong *)(unaff_RBX + 0x1c88);
  }
  if (uVar21 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar21 != *(ulonglong *)(unaff_RBX + 0x1c80)) && ((*(byte *)(uVar21 + 4) & 8) == 0)) {
    *(ulonglong *)(unaff_RBX + 0x1c80) = uVar21;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




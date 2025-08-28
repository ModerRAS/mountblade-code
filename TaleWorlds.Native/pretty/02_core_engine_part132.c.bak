#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part132.c - 5 个函数

// 函数: void FUN_180130155(void)
void FUN_180130155(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int16_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  int unaff_EBP;
  char cVar10;
  ulonglong unaff_RSI;
  uint uVar12;
  int iVar13;
  uint64_t unaff_R12;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM8_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  int iVar11;
  
  uVar14 = unaff_RSI;
  do {
    lVar2 = *(longlong *)(uVar14 + *(longlong *)(unaff_RBX + 0x1c70));
    *(int *)(lVar2 + 0x50) = unaff_EBP;
    cVar10 = (char)unaff_RSI;
    iVar11 = (int)unaff_RSI;
    if ((0 < unaff_EBP) && (*(int *)(lVar2 + 0x54) < *(int *)(unaff_RBX + 0x1a90) + -2)) {
      uVar7 = unaff_RSI & 0xffffffff;
      uVar14 = unaff_RSI;
      if (iVar11 < *(int *)(unaff_RBX + 0x1aa0)) {
        do {
          lVar8 = *(longlong *)(uVar14 + *(longlong *)(unaff_RBX + 0x1aa8));
          if (*(longlong *)(lVar8 + 0x28) == lVar2) {
            *(ulonglong *)(lVar8 + 0x28) = unaff_RSI;
            *(char *)(*(longlong *)(uVar14 + *(longlong *)(unaff_RBX + 0x1aa8)) + 0xae) = cVar10;
          }
          uVar12 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar12;
          uVar14 = uVar14 + 8;
        } while ((int)uVar12 < *(int *)(unaff_RBX + 0x1aa0));
      }
      if (lVar2 == *(longlong *)(unaff_RBX + 0x1c88)) {
        *(ulonglong *)(unaff_RBX + 0x1c88) = unaff_RSI;
      }
      lVar8 = (longlong)unaff_EBP * 8 >> 3;
      lVar2 = *(longlong *)(unaff_RBX + 0x1c70) + lVar8 * 8;
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar2 + 8,(*(int *)(unaff_RBX + 0x1c68) - lVar8) * 8 + -8);
    }
    if ((unaff_EBP == 0) || (*(char *)(lVar2 + 0x76) != cVar10)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) != 0) {
      if ((*(char *)(lVar2 + 0x77) == cVar10) && (bVar4)) {
        if (*(char *)(lVar2 + 0x49) != cVar10) {
          puVar6 = (uint64_t *)(**(code **)(unaff_RBX + 0x1560))(&stack0x000000b0,lVar2);
          uVar1 = *puVar6;
          *(uint64_t *)(lVar2 + 0xd8) = uVar1;
          *(uint64_t *)(lVar2 + 8) = uVar1;
        }
        if (*(char *)(lVar2 + 0x4a) != cVar10) {
          puVar6 = (uint64_t *)(**(code **)(unaff_RBX + 0x1570))(&stack0x000000b8,lVar2);
          uVar1 = *puVar6;
          *(uint64_t *)(lVar2 + 0xe0) = uVar1;
          *(uint64_t *)(lVar2 + 0x10) = uVar1;
        }
      }
      fStack0000000000000030 = *(float *)(lVar2 + 8);
      fStack0000000000000034 = *(float *)(lVar2 + 0xc);
      fStack0000000000000038 = fStack0000000000000030 + *(float *)(lVar2 + 0x10);
      fStack000000000000003c = fStack0000000000000034 + *(float *)(lVar2 + 0x14);
      uVar5 = FUN_180130ec0(&stack0x00000030);
      *(int16_t *)(lVar2 + 0x74) = uVar5;
    }
    *(int32_t *)(lVar2 + 0x6c) = 0x3f800000;
    fVar16 = *(float *)(lVar2 + 8) - *(float *)(lVar2 + 100);
    fVar15 = *(float *)(lVar2 + 0xc) - *(float *)(lVar2 + 0x68);
    if (((*(uint *)(lVar2 + 4) & 0x400) != 0) &&
       (((fVar16 != unaff_XMM8_Da || (fVar15 != unaff_XMM8_Da)) &&
        (uVar9 = unaff_RSI & 0xffffffff, uVar7 = unaff_RSI, iVar11 < *(int *)(unaff_RBX + 0x1aa0))))
       ) {
      do {
        lVar8 = *(longlong *)(uVar7 + *(longlong *)(unaff_RBX + 0x1aa8));
        if ((*(longlong *)(lVar8 + 0x28) == lVar2) || ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) == 0)
           ) {
          *(float *)(lVar8 + 0x40) = fVar16 + *(float *)(lVar8 + 0x40);
          *(float *)(lVar8 + 0x44) = fVar15 + *(float *)(lVar8 + 0x44);
          *(float *)(lVar8 + 0x228) = fVar16 + *(float *)(lVar8 + 0x228);
          *(float *)(lVar8 + 0x22c) = fVar15 + *(float *)(lVar8 + 0x22c);
          *(float *)(lVar8 + 0x230) = fVar16 + *(float *)(lVar8 + 0x230);
          *(float *)(lVar8 + 0x234) = fVar15 + *(float *)(lVar8 + 0x234);
          *(float *)(lVar8 + 0x238) = fVar16 + *(float *)(lVar8 + 0x238);
          *(float *)(lVar8 + 0x23c) = fVar15 + *(float *)(lVar8 + 0x23c);
          *(float *)(lVar8 + 0x240) = fVar16 + *(float *)(lVar8 + 0x240);
          *(float *)(lVar8 + 0x244) = fVar15 + *(float *)(lVar8 + 0x244);
          *(float *)(lVar8 + 0x248) = fVar16 + *(float *)(lVar8 + 0x248);
          *(float *)(lVar8 + 0x24c) = fVar15 + *(float *)(lVar8 + 0x24c);
          *(float *)(lVar8 + 0x250) = fVar16 + *(float *)(lVar8 + 0x250);
          *(float *)(lVar8 + 0x254) = fVar15 + *(float *)(lVar8 + 0x254);
          *(float *)(lVar8 + 0x100) = fVar16 + *(float *)(lVar8 + 0x100);
          *(float *)(lVar8 + 0x104) = fVar15 + *(float *)(lVar8 + 0x104);
          *(float *)(lVar8 + 0x110) = fVar16 + *(float *)(lVar8 + 0x110);
          *(float *)(lVar8 + 0x114) = fVar15 + *(float *)(lVar8 + 0x114);
          *(float *)(lVar8 + 0x118) = fVar16 + *(float *)(lVar8 + 0x118);
          *(float *)(lVar8 + 0x11c) = fVar15 + *(float *)(lVar8 + 0x11c);
          *(float *)(lVar8 + 0x14c) = fVar16 + *(float *)(lVar8 + 0x14c);
          *(float *)(lVar8 + 0x150) = fVar15 + *(float *)(lVar8 + 0x150);
          *(float *)(lVar8 + 0x154) = fVar16 + *(float *)(lVar8 + 0x154);
          *(float *)(lVar8 + 0x158) = fVar15 + *(float *)(lVar8 + 0x158);
          *(float *)(lVar8 + 0x15c) = fVar16 + *(float *)(lVar8 + 0x15c);
          *(float *)(lVar8 + 0x160) = fVar15 + *(float *)(lVar8 + 0x160);
          *(float *)(lVar8 + 0x164) = fVar16 + *(float *)(lVar8 + 0x164);
          *(float *)(lVar8 + 0x168) = fVar15 + *(float *)(lVar8 + 0x168);
        }
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        uVar7 = uVar7 + 8;
      } while ((int)uVar12 < *(int *)(unaff_RBX + 0x1aa0));
    }
    if ((*(code **)(unaff_RBX + 0x15b8) == (code *)0x0) || (!bVar4)) {
      if (*(short *)(lVar2 + 0x74) == -1) {
        fVar15 = *(float *)(lVar2 + 0x18);
        if (fVar15 == unaff_XMM8_Da) {
          fVar15 = 1.0;
        }
      }
      else {
        fVar15 = *(float *)(*(longlong *)(unaff_RBX + 0x1608) + 0x20 +
                           (longlong)*(short *)(lVar2 + 0x74) * 0x24);
      }
    }
    else {
      fVar15 = (float)(**(code **)(unaff_RBX + 0x15b8))(lVar2);
    }
    fVar16 = *(float *)(lVar2 + 0x18);
    if (((fVar16 != unaff_XMM8_Da) && (fVar15 != fVar16)) &&
       ((*(uint *)(unaff_RBX + 8) & 0x4000) != 0)) {
      if (*(longlong *)(lVar2 + 0x78) == 0) {
        uVar9 = unaff_RSI & 0xffffffff;
        uVar7 = unaff_RSI;
        lVar8 = SYSTEM_DATA_MANAGER_A;
        if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0) != iVar11) {
          do {
            iVar13 = (int)uVar9;
            lVar3 = *(longlong *)(uVar7 + *(longlong *)(lVar8 + 0x1aa8));
            if (*(longlong *)(lVar3 + 0x28) == lVar2) {
              func_0x000180124d50(lVar3,fVar15 / fVar16);
            }
            uVar9 = (ulonglong)(iVar13 + 1U);
            uVar7 = uVar7 + 8;
          } while (iVar13 + 1U != *(uint *)(lVar8 + 0x1aa0));
        }
      }
      else {
        func_0x000180124d50(*(longlong *)(lVar2 + 0x78),fVar15 / fVar16);
      }
    }
    *(float *)(lVar2 + 0x18) = fVar15;
    unaff_EBP = unaff_EBP + 1;
    uVar14 = uVar14 + 8;
  } while (unaff_EBP < *(int *)(unaff_RBX + 0x1c68));
  if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) == 0) {
    *(uint64_t *)(unaff_RBX + 0x1c80) = unaff_R12;
    return;
  }
  if ((*(uint *)(unaff_RBX + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar14 = FUN_18012fe00(*(uint64_t *)(unaff_RBX + 0x118));
LAB_180130774:
    uVar7 = uVar14;
    if (uVar14 == 0) goto LAB_18013078e;
    *(ulonglong *)(unaff_RBX + 0x1c88) = uVar14;
  }
  else {
    uVar14 = unaff_RSI;
    if (*(int *)(unaff_RBX + 0x130) != 0) {
      uVar7 = unaff_RSI & 0xffffffff;
      if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68)) {
        puVar6 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
        uVar9 = unaff_RSI;
        do {
          if (*(int *)*puVar6 == *(int *)(unaff_RBX + 0x130)) {
            uVar14 = (*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[(int)uVar7];
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar9 = uVar9 + 1;
          puVar6 = puVar6 + 1;
        } while ((longlong)uVar9 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68));
      }
    }
    uVar7 = uVar14;
    if (uVar14 != 0) {
      if ((*(byte *)(uVar14 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar14 = *(ulonglong *)(unaff_RBX + 0x1c88);
    if (uVar14 == 0) {
      uVar14 = **(ulonglong **)(unaff_RBX + 0x1c70);
      *(ulonglong *)(unaff_RBX + 0x1c88) = uVar14;
    }
  }
  if (*(longlong *)(unaff_RBX + 0x1b78) != 0) {
    uVar14 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x1b78) + 0x28);
  }
  *(ulonglong *)(unaff_RBX + 0x1c80) = uVar14;
  if (*(char *)(unaff_RBX + 0x1dd0) == cVar10) {
    if (*(int *)(unaff_RBX + 0x1b2c) != iVar11) {
      do {
        if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120 + unaff_RSI) != '\0') {
          return;
        }
        unaff_RSI = unaff_RSI + 1;
      } while ((longlong)unaff_RSI < 5);
    }
  }
  else {
    if (uVar7 != 0) goto LAB_180130808;
    uVar7 = *(ulonglong *)(unaff_RBX + 0x1c88);
  }
  if (uVar7 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar7 != *(ulonglong *)(unaff_RBX + 0x1c80)) && ((*(byte *)(uVar7 + 4) & 8) == 0)) {
    *(ulonglong *)(unaff_RBX + 0x1c80) = uVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801306c9(void)
void FUN_1801306c9(void)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  uint64_t unaff_R12;
  
  if ((*(uint *)(unaff_RBX + 0x19e8) & 0x400) == 0) {
    *(uint64_t *)(unaff_RBX + 0x1c80) = unaff_R12;
    return;
  }
  if ((*(uint *)(unaff_RBX + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar1 = FUN_18012fe00(*(uint64_t *)(unaff_RBX + 0x118));
LAB_180130774:
    uVar3 = uVar1;
    if (uVar1 == 0) goto LAB_18013078e;
    *(ulonglong *)(unaff_RBX + 0x1c88) = uVar1;
  }
  else {
    uVar1 = unaff_RSI;
    if (*(int *)(unaff_RBX + 0x130) != 0) {
      uVar3 = unaff_RSI & 0xffffffff;
      if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68)) {
        puVar2 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
        uVar4 = unaff_RSI;
        do {
          if (*(int *)*puVar2 == *(int *)(unaff_RBX + 0x130)) {
            uVar1 = (*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[(int)uVar3];
            break;
          }
          uVar3 = (ulonglong)((int)uVar3 + 1);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while ((longlong)uVar4 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68));
      }
    }
    uVar3 = uVar1;
    if (uVar1 != 0) {
      if ((*(byte *)(uVar1 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar1 = *(ulonglong *)(unaff_RBX + 0x1c88);
    if (uVar1 == 0) {
      uVar1 = **(ulonglong **)(unaff_RBX + 0x1c70);
      *(ulonglong *)(unaff_RBX + 0x1c88) = uVar1;
    }
  }
  if (*(longlong *)(unaff_RBX + 0x1b78) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x1b78) + 0x28);
  }
  *(ulonglong *)(unaff_RBX + 0x1c80) = uVar1;
  if (*(char *)(unaff_RBX + 0x1dd0) == (char)unaff_RSI) {
    if (*(int *)(unaff_RBX + 0x1b2c) != (int)unaff_RSI) {
      do {
        if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120 + unaff_RSI) != '\0') {
          return;
        }
        unaff_RSI = unaff_RSI + 1;
      } while ((longlong)unaff_RSI < 5);
    }
  }
  else {
    if (uVar3 != 0) goto LAB_180130808;
    uVar3 = *(ulonglong *)(unaff_RBX + 0x1c88);
  }
  if (uVar3 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar3 != *(ulonglong *)(unaff_RBX + 0x1c80)) && ((*(byte *)(uVar3 + 4) & 8) == 0)) {
    *(ulonglong *)(unaff_RBX + 0x1c80) = uVar3;
  }
  return;
}





// 函数: void FUN_1801306f3(void)
void FUN_1801306f3(void)

{
  longlong unaff_RBX;
  uint64_t unaff_R12;
  
  *(uint64_t *)(unaff_RBX + 0x1c80) = unaff_R12;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180130830(longlong param_1,int param_2,uint64_t *param_3,uint64_t *param_4,
                   uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int16_t uVar4;
  int *piVar5;
  int iVar6;
  uint64_t *puVar7;
  float fVar8;
  int *piStackX_8;
  int *piStack_38;
  float fStack_30;
  float fStack_2c;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  if (param_1 != 0) {
    if ((*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b78) != 0) &&
       (*(longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b78) + 0x3a0) == param_1)) {
      param_5 = param_5 | 0xc;
    }
    uVar2 = param_5 | 8;
    if ((*(uint *)(param_1 + 0xc) & 0x40200) != 0x40200) {
      uVar2 = param_5;
    }
    param_5 = uVar2;
    if ((*(uint *)(param_1 + 0xc) & 0x1000) != 0) {
      param_5 = uVar2 | 4;
    }
  }
  iVar6 = 0;
  iVar1 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68);
  if (0 < iVar1) {
    puVar7 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
    do {
      if (*(int *)*puVar7 == param_2) {
        piVar5 = (int *)(*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[iVar6];
        goto LAB_1801308eb;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < iVar1);
  }
  piVar5 = (int *)0x0;
LAB_1801308eb:
  if (piVar5 == (int *)0x0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    piStackX_8 = (int *)func_0x000180120ce0(0xf0,SYSTEM_DATA_MANAGER_B,iVar1,param_4,0xfffffffffffffffe);
    if (piStackX_8 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piStack_38 = piStackX_8;
      piVar5 = (int *)FUN_18011fd90(piStackX_8);
    }
    *piVar5 = param_2;
    piVar5[0x14] = *(int *)(lVar3 + 0x1c68);
    *(uint64_t *)(piVar5 + 0x19) = *param_3;
    *(uint64_t *)(piVar5 + 2) = *param_3;
    *(uint64_t *)(piVar5 + 4) = *param_4;
    piStack_38 = *(int **)(piVar5 + 2);
    fStack_30 = (float)piVar5[2] + (float)piVar5[4];
    fStack_2c = (float)piVar5[3] + (float)piVar5[5];
    piStackX_8 = piVar5;
    uVar4 = FUN_180130ec0(&piStack_38);
    *(int16_t *)(piVar5 + 0x1d) = uVar4;
    FUN_18013d860(lVar3 + 0x1c68,&piStackX_8);
    fVar8 = (float)piVar5[4] + (float)piVar5[2];
    if ((float)piVar5[4] + (float)piVar5[2] <= *(float *)(lVar3 + 0x1a20)) {
      fVar8 = *(float *)(lVar3 + 0x1a20);
    }
    *(float *)(lVar3 + 0x1a20) = fVar8;
    fVar8 = (float)piVar5[5] + (float)piVar5[3];
    if ((float)piVar5[5] + (float)piVar5[3] <= *(float *)(lVar3 + 0x1a24)) {
      fVar8 = *(float *)(lVar3 + 0x1a24);
    }
    *(float *)(lVar3 + 0x1a24) = fVar8;
    if ((short)piVar5[0x1d] != -1) {
      piVar5[6] = *(int *)(*(longlong *)(lVar3 + 0x1608) + 0x20 +
                          (longlong)(short)piVar5[0x1d] * 0x24);
    }
  }
  else {
    if (*(char *)((longlong)piVar5 + 0x49) == '\0') {
      *(uint64_t *)(piVar5 + 2) = *param_3;
    }
    if (*(char *)((longlong)piVar5 + 0x4a) == '\0') {
      *(uint64_t *)(piVar5 + 4) = *param_4;
    }
  }
  *(longlong *)(piVar5 + 0x1e) = param_1;
  piVar5[1] = param_5;
  piVar5[0x15] = *(int *)(lVar3 + 0x1a90);
  if (param_1 != 0) {
    *(int8_t *)(param_1 + 0xae) = 1;
  }
  return piVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130a80(longlong param_1)
void FUN_180130a80(longlong param_1)

{
  uint uVar1;
  int32_t *puVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  float *pfVar10;
  uint64_t *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uStackX_8;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(int32_t *)(param_1 + 0x3c) = 0xffffffff;
  puVar2 = (int32_t *)**(uint64_t **)(lVar5 + 0x1c70);
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) == 0) {
    *(int32_t **)(param_1 + 0x28) = puVar2;
    *(int32_t *)(param_1 + 0x30) = *puVar2;
    *(bool *)(param_1 + 0xae) = *(longlong *)(puVar2 + 0x1e) == param_1;
    return;
  }
  uVar13 = 0;
  *(int8_t *)(param_1 + 0xae) = 0;
  if (((uVar1 & 0x6000000) != 0) && (*(char *)(param_1 + 0xb5) != '\0')) {
    *(uint64_t *)(param_1 + 0x28) = 0;
    *(int32_t *)(param_1 + 0x30) = 0;
  }
  if ((((*(int *)(lVar5 + 0x1bec) == 0) && (*(longlong *)(param_1 + 0x28) == 0)) &&
      ((*(longlong *)(param_1 + 0x398) == 0 ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x28),
       *(longlong *)(param_1 + 0x28) = lVar7, lVar7 == 0)))) && (*(int *)(param_1 + 0x30) != 0)) {
    lVar7 = func_0x00018012fb00();
    *(longlong *)(param_1 + 0x28) = lVar7;
    if (lVar7 == 0) {
      if ((*(float *)(param_1 + 0x34) != 3.4028235e+38) &&
         (*(float *)(param_1 + 0x38) != 3.4028235e+38)) {
        uVar8 = FUN_180130830(param_1,*(int32_t *)(param_1 + 8),(float *)(param_1 + 0x34),
                              param_1 + 0x48,0);
        *(uint64_t *)(param_1 + 0x28) = uVar8;
      }
    }
  }
  if (*(int *)(lVar5 + 0x1bec) != 0) {
    puVar9 = (int32_t *)func_0x00018012fb00(*(int32_t *)(lVar5 + 0x1c3c));
    *(int32_t **)(param_1 + 0x28) = puVar9;
    *(int32_t *)(param_1 + 0x30) = *(int32_t *)(lVar5 + 0x1c3c);
    goto LAB_180130c8e;
  }
  if ((uVar1 & 0x11000000) == 0) {
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar9 = *(int32_t **)(lVar5 + 0x1c80);
      goto LAB_180130c8a;
    }
    cVar6 = func_0x00018012fb90();
    if (cVar6 != '\0') {
      puVar9 = (int32_t *)
               FUN_180130830(extraout_XMM0_Qa,*(int32_t *)(param_1 + 8),param_1 + 0x40,
                             param_1 + 0x48,0);
      *(int32_t **)(param_1 + 0x28) = puVar9;
      goto LAB_180130c8e;
    }
    if ((((*(longlong *)(lVar5 + 0x1b78) != 0) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x1b78) + 0x3a0) == param_1)) &&
        (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) ||
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) == -256000.0)) &&
       (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) ||
        *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) == -256000.0)) {
      if ((*(longlong *)(param_1 + 0x28) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78) == param_1)) {
        uVar8 = FUN_180130830(extraout_XMM0_Qa,*(int32_t *)(param_1 + 8),param_1 + 0x40,
                              param_1 + 0x48,0);
        *(uint64_t *)(param_1 + 0x28) = uVar8;
      }
      puVar9 = *(int32_t **)(param_1 + 0x28);
      goto LAB_180130c8e;
    }
    puVar9 = *(int32_t **)(param_1 + 0x28);
    if (puVar9 != (int32_t *)0x0) {
      if ((param_1 == *(longlong *)(puVar9 + 0x1e)) && (*(int *)(lVar5 + 0x1b2c) == 0)) {
        FUN_18012fbd0(extraout_XMM0_Qa,**(uint64_t **)(lVar5 + 0x1c70));
        puVar9 = *(int32_t **)(param_1 + 0x28);
      }
      goto LAB_180130c8e;
    }
LAB_180130c93:
    *(int32_t **)(param_1 + 0x28) = puVar2;
    puVar9 = puVar2;
  }
  else {
    puVar9 = *(int32_t **)(*(longlong *)(param_1 + 0x398) + 0x28);
LAB_180130c8a:
    *(int32_t **)(param_1 + 0x28) = puVar9;
LAB_180130c8e:
    if (puVar9 == (int32_t *)0x0) goto LAB_180130c93;
  }
  if ((uVar1 & 0x6000000) == 0) {
    if ((((puVar9 == (int32_t *)0x0) || (param_1 == *(longlong *)(puVar9 + 0x1e))) ||
        (*(longlong *)(puVar9 + 0x1e) == 0)) || ((uVar1 >> 0x18 & 1) != 0)) {
      if ((*(int *)(param_1 + 0x3c) < 0) && ((uVar1 >> 0x18 & 1) == 0)) {
        *(int *)(param_1 + 0x3c) = (int)*(short *)(puVar9 + 0x1d);
      }
    }
    else {
      if (((*(byte *)(param_1 + 0x432) & 1) == 0) || ((*(byte *)(param_1 + 0x432) & 2) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((((*(uint *)(param_1 + 0xc) & 0x20000000) == 0) ||
          (*(int *)(lVar5 + 0x1a90) <= (int)puVar9[0x15])) || (!bVar3)) {
        cVar6 = FUN_18012fbd0(param_1,**(uint64_t **)(lVar5 + 0x1c70));
        if (cVar6 == '\0') {
          uVar8 = FUN_180130830(param_1,*(int32_t *)(param_1 + 8),param_1 + 0x40,param_1 + 0x48,4
                               );
          *(uint64_t *)(param_1 + 0x28) = uVar8;
        }
      }
      else {
        *(longlong *)(puVar9 + 0x1e) = param_1;
        **(int32_t **)(param_1 + 0x28) = *(int32_t *)(param_1 + 8);
        *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0x60) = 0;
      }
    }
    goto LAB_180130e8e;
  }
  if ((uVar1 & 0x2000000) == 0) {
    puVar11 = (uint64_t *)
              ((longlong)(*(int *)(lVar5 + 0x1bc0) + -1) * 0x30 + 0x28 +
              *(longlong *)(lVar5 + 0x1bc8));
  }
  else {
    puVar11 = (uint64_t *)(lVar5 + 0x118);
  }
  uVar8 = *puVar11;
  if (((*(char *)(lVar5 + 0x1d06) == '\0') && (*(char *)(lVar5 + 0x1d07) != '\0')) &&
     (*(longlong *)(lVar5 + 0x1c98) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStackX_8._0_4_ = (float)uVar8;
  if (((float)uStackX_8 < -256000.0) ||
     (uStackX_8._4_4_ = (float)((ulonglong)uVar8 >> 0x20), uStackX_8._4_4_ < -256000.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(param_1 + 0xb5) == '\0') && ((uVar1 & 0x2000000) == 0)) {
LAB_180130d35:
    *(int *)(param_1 + 0x3c) = (int)*(short *)(*(longlong *)(param_1 + 0x28) + 0x74);
  }
  else {
    if (bVar3) {
      if (!bVar4) goto LAB_180130d35;
      pfVar10 = (float *)&uStackX_8;
      uStackX_8 = *puVar11;
    }
    else {
      uStackX_8 = uVar8;
      pfVar10 = (float *)func_0x000180131890(&uStackX_8);
    }
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1600)) {
      pfVar12 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x1608);
      uVar15 = uVar13;
      do {
        iVar14 = (int)uVar15;
        if ((((*pfVar12 <= *pfVar10) && (pfVar12[1] <= pfVar10[1])) &&
            (*pfVar10 < *pfVar12 + pfVar12[2])) && (pfVar10[1] < pfVar12[1] + pfVar12[3]))
        goto LAB_180130dd5;
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar13 = uVar13 + 1;
        pfVar12 = pfVar12 + 9;
      } while ((longlong)uVar13 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1600));
    }
    iVar14 = -1;
LAB_180130dd5:
    *(int *)(param_1 + 0x3c) = iVar14;
  }
LAB_180130e8e:
  *(bool *)(param_1 + 0xae) = param_1 == *(longlong *)(*(int32_t **)(param_1 + 0x28) + 0x1e);
  *(int32_t *)(param_1 + 0x30) = **(int32_t **)(param_1 + 0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130ae3(uint64_t param_1)
void FUN_180130ae3(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint64_t uVar6;
  float *pfVar7;
  longlong in_RCX;
  uint64_t *puVar8;
  float *pfVar9;
  longlong unaff_RBX;
  uint unaff_EBP;
  int iVar10;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  longlong unaff_RDI;
  longlong unaff_R14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  *(int8_t *)(in_RCX + 0xae) = 0;
  cVar4 = (char)unaff_RSI;
  iVar10 = (int)unaff_RSI;
  if (((unaff_EBP & 0x6000000) != 0) && (*(char *)(in_RCX + 0xb5) != cVar4)) {
    *(ulonglong *)(in_RCX + 0x28) = unaff_RSI;
    *(int *)(in_RCX + 0x30) = iVar10;
  }
  if ((((*(int *)(unaff_RDI + 0x1bec) == iVar10) && (*(longlong *)(in_RCX + 0x28) == 0)) &&
      ((*(longlong *)(in_RCX + 0x398) == 0 ||
       (lVar5 = *(longlong *)(*(longlong *)(in_RCX + 0x398) + 0x28),
       *(longlong *)(in_RCX + 0x28) = lVar5, lVar5 == 0)))) && (*(int *)(in_RCX + 0x30) != 0)) {
    lVar5 = func_0x00018012fb00();
    *(longlong *)(unaff_RBX + 0x28) = lVar5;
    param_1 = extraout_XMM0_Qa;
    if (lVar5 == 0) {
      param_1 = 0x7f7fffff;
      if ((*(float *)(unaff_RBX + 0x34) != 3.4028235e+38) &&
         (*(float *)(unaff_RBX + 0x38) != 3.4028235e+38)) {
        uVar6 = FUN_180130830(0x7f7fffff,*(int32_t *)(unaff_RBX + 8),(float *)(unaff_RBX + 0x34),
                              unaff_RBX + 0x48);
        *(uint64_t *)(unaff_RBX + 0x28) = uVar6;
        param_1 = extraout_XMM0_Qa_00;
      }
    }
  }
  if (*(int *)(unaff_RDI + 0x1bec) != iVar10) {
    lVar5 = func_0x00018012fb00(*(int32_t *)(unaff_RDI + 0x1c3c));
    *(longlong *)(unaff_RBX + 0x28) = lVar5;
    *(int32_t *)(unaff_RBX + 0x30) = *(int32_t *)(unaff_RDI + 0x1c3c);
    param_1 = extraout_XMM0_Qa_01;
    goto LAB_180130c8e;
  }
  if ((unaff_EBP & 0x11000000) == 0) {
    if ((unaff_EBP >> 0x19 & 1) != 0) {
      lVar5 = *(longlong *)(unaff_RDI + 0x1c80);
      goto LAB_180130c8a;
    }
    cVar3 = func_0x00018012fb90();
    if (cVar3 != '\0') {
      lVar5 = FUN_180130830(extraout_XMM0_Qa_02,*(int32_t *)(unaff_RBX + 8),unaff_RBX + 0x40,
                            unaff_RBX + 0x48);
      *(longlong *)(unaff_RBX + 0x28) = lVar5;
      param_1 = extraout_XMM0_Qa_03;
      goto LAB_180130c8e;
    }
    param_1 = extraout_XMM0_Qa_02;
    if ((((*(longlong *)(unaff_RDI + 0x1b78) != 0) &&
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x1b78) + 0x3a0) == unaff_RBX)) &&
        (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) ||
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) == -256000.0)) &&
       (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) ||
        *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) == -256000.0)) {
      if ((*(longlong *)(unaff_RBX + 0x28) != 0) &&
         (*(longlong *)(*(longlong *)(unaff_RBX + 0x28) + 0x78) == unaff_RBX)) {
        uVar6 = FUN_180130830(extraout_XMM0_Qa_02,*(int32_t *)(unaff_RBX + 8),unaff_RBX + 0x40,
                              unaff_RBX + 0x48);
        *(uint64_t *)(unaff_RBX + 0x28) = uVar6;
        param_1 = extraout_XMM0_Qa_04;
      }
      lVar5 = *(longlong *)(unaff_RBX + 0x28);
      goto LAB_180130c8e;
    }
    lVar5 = *(longlong *)(unaff_RBX + 0x28);
    if (lVar5 != 0) {
      if ((unaff_RBX == *(longlong *)(lVar5 + 0x78)) && (*(int *)(unaff_RDI + 0x1b2c) == iVar10)) {
        param_1 = FUN_18012fbd0(extraout_XMM0_Qa_02,**(uint64_t **)(unaff_RDI + 0x1c70));
        lVar5 = *(longlong *)(unaff_RBX + 0x28);
      }
      goto LAB_180130c8e;
    }
LAB_180130c93:
    *(longlong *)(unaff_RBX + 0x28) = unaff_R14;
    lVar5 = unaff_R14;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(unaff_RBX + 0x398) + 0x28);
LAB_180130c8a:
    *(longlong *)(unaff_RBX + 0x28) = lVar5;
LAB_180130c8e:
    if (lVar5 == 0) goto LAB_180130c93;
  }
  if ((unaff_EBP & 0x6000000) == 0) {
    if ((((lVar5 == 0) || (unaff_RBX == *(longlong *)(lVar5 + 0x78))) ||
        (*(longlong *)(lVar5 + 0x78) == 0)) || ((unaff_EBP >> 0x18 & 1) != 0)) {
      if ((*(int *)(unaff_RBX + 0x3c) < iVar10) && ((unaff_EBP >> 0x18 & 1) == 0)) {
        *(int *)(unaff_RBX + 0x3c) = (int)*(short *)(lVar5 + 0x74);
      }
    }
    else {
      if (((*(byte *)(unaff_RBX + 0x432) & 1) == 0) || ((*(byte *)(unaff_RBX + 0x432) & 2) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((((*(uint *)(unaff_RBX + 0xc) & 0x20000000) == 0) ||
          (*(int *)(unaff_RDI + 0x1a90) <= *(int *)(lVar5 + 0x54))) || (!bVar1)) {
        cVar4 = FUN_18012fbd0(param_1,**(uint64_t **)(unaff_RDI + 0x1c70));
        if (cVar4 == '\0') {
          uVar6 = FUN_180130830(extraout_XMM0_Qa_05,*(int32_t *)(unaff_RBX + 8),unaff_RBX + 0x40,
                                unaff_RBX + 0x48,4);
          *(uint64_t *)(unaff_RBX + 0x28) = uVar6;
        }
      }
      else {
        *(longlong *)(lVar5 + 0x78) = unaff_RBX;
        **(int32_t **)(unaff_RBX + 0x28) = *(int32_t *)(unaff_RBX + 8);
        *(int *)(*(longlong *)(unaff_RBX + 0x28) + 0x60) = iVar10;
      }
    }
    goto LAB_180130e8e;
  }
  if ((unaff_EBP & 0x2000000) == 0) {
    puVar8 = (uint64_t *)
             ((longlong)(*(int *)(unaff_RDI + 0x1bc0) + -1) * 0x30 + 0x28 +
             *(longlong *)(unaff_RDI + 0x1bc8));
  }
  else {
    puVar8 = (uint64_t *)(unaff_RDI + 0x118);
  }
  uVar6 = *puVar8;
  if (((*(char *)(unaff_RDI + 0x1d06) == cVar4) && (*(char *)(unaff_RDI + 0x1d07) != cVar4)) &&
     (*(ulonglong *)(unaff_RDI + 0x1c98) != unaff_RSI)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  fStack0000000000000060 = (float)uVar6;
  if ((fStack0000000000000060 < -256000.0) ||
     (fStack0000000000000064 = (float)((ulonglong)uVar6 >> 0x20), fStack0000000000000064 < -256000.0
     )) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(unaff_RBX + 0xb5) == cVar4) && ((unaff_EBP & 0x2000000) == 0)) {
LAB_180130d35:
    *(int *)(unaff_RBX + 0x3c) = (int)*(short *)(*(longlong *)(unaff_RBX + 0x28) + 0x74);
  }
  else {
    if (bVar1) {
      if (!bVar2) goto LAB_180130d35;
      pfVar7 = &stack0x00000060;
      _fStack0000000000000060 = *puVar8;
    }
    else {
      _fStack0000000000000060 = uVar6;
      pfVar7 = (float *)func_0x000180131890(&stack0x00000060);
    }
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1600)) {
      pfVar9 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x1608);
      uVar11 = unaff_RSI;
      do {
        iVar10 = (int)uVar11;
        if ((((*pfVar9 <= *pfVar7) && (pfVar9[1] <= pfVar7[1])) && (*pfVar7 < *pfVar9 + pfVar9[2]))
           && (pfVar7[1] < pfVar9[1] + pfVar9[3])) goto LAB_180130dd5;
        uVar11 = (ulonglong)(iVar10 + 1);
        unaff_RSI = unaff_RSI + 1;
        pfVar9 = pfVar9 + 9;
      } while ((longlong)unaff_RSI < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1600));
    }
    iVar10 = -1;
LAB_180130dd5:
    *(int *)(unaff_RBX + 0x3c) = iVar10;
  }
LAB_180130e8e:
  *(bool *)(unaff_RBX + 0xae) =
       unaff_RBX == *(longlong *)(*(int32_t **)(unaff_RBX + 0x28) + 0x1e);
  *(int32_t *)(unaff_RBX + 0x30) = **(int32_t **)(unaff_RBX + 0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




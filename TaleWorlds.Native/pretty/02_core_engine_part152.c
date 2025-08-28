#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part152.c - 11 个函数

// 函数: void FUN_18013b5f5(void)
void FUN_18013b5f5(void)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int64_t lVar4;
  int16_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int *piVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t *unaff_RBX;
  char cVar11;
  int iVar12;
  uint64_t unaff_RBP;
  uint64_t uVar13;
  int64_t unaff_RDI;
  byte bVar14;
  int64_t unaff_R14;
  uint64_t extraout_XMM0_Qa;
  int8_t *in_stack_00000058;
  char in_stack_00000060;
  
  lVar7 = unaff_RBX[0x81];
  iVar12 = (int)unaff_RBP;
  cVar11 = (char)unaff_RBP;
  if ((*(int *)(unaff_RBX + 0x83) != iVar12) && (lVar7 == 0)) {
    lVar7 = FUN_180121fa0(*(uint64_t *)(unaff_RDI + 0x2df8),*(int32_t *)(unaff_RBX + 0x83));
    if (lVar7 == 0) {
      lVar7 = FUN_180135960(extraout_XMM0_Qa,*(int32_t *)(unaff_RBX + 0x83));
      if (in_stack_00000060 != cVar11) {
        *(int32_t *)(lVar7 + 0x88) = *(int32_t *)(unaff_RDI + 0x1a90);
      }
    }
    else if (*(uint64_t *)(lVar7 + 0x10) != unaff_RBP) {
      if (unaff_RBX[0x81] == unaff_RBP) {
        *(int *)(unaff_RBX + 0x83) = iVar12;
        *(int8_t *)((int64_t)unaff_RBX + 0xb2) = 0;
      }
      else {
        FUN_180136d40(unaff_RBX[0x81]);
        unaff_RDI = SYSTEM_DATA_MANAGER_A;
        *(char *)((int64_t)unaff_RBX + 0xb2) = cVar11;
      }
      goto LAB_18013b83c;
    }
    FUN_180136b10(lVar7);
    unaff_RDI = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) = unaff_RBX[8];
    *(uint64_t *)(unaff_RDI + 0x1bfc) = unaff_RBP;
    *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
    *(int8_t *)(unaff_RDI + 0x1c14) = 1;
    *(uint64_t *)(unaff_RDI + 0x1c04) = unaff_RBX[10];
    *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
    *(char *)(unaff_R14 + 0x1c14) = cVar11;
  }
  if (((*(byte *)(lVar7 + 0xa0) & 0x20) == 0) || ((*(byte *)(lVar7 + 4) & 8) == 0)) {
    if (*(int *)(lVar7 + 0x88) < *(int *)(unaff_R14 + 0x1a90)) {
      lVar10 = *(int64_t *)(lVar7 + 8);
      while (lVar4 = lVar10, lVar4 != 0) {
        lVar7 = lVar4;
        lVar10 = *(int64_t *)(lVar4 + 8);
      }
      if (*(int *)(unaff_R14 + 0x1a90) <= *(int *)(lVar7 + 0x88)) {
        *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      lVar10 = *(int64_t *)(lVar7 + 0x68);
      if (lVar10 == 0) {
LAB_18013b872:
        *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(lVar10 + 0xbc) <= *(short *)((int64_t)unaff_RBX + 0xbc)) {
        if (lVar10 != 0) {
          *(uint64_t *)(unaff_RDI + 0x1bf4) = *(uint64_t *)(lVar7 + 0x38);
          *(uint64_t *)(unaff_RDI + 0x1bfc) = unaff_RBP;
          *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
          *(int8_t *)(unaff_RDI + 0x1c14) = 1;
          *(uint64_t *)(unaff_RDI + 0x1c04) = *(uint64_t *)(lVar7 + 0x40);
          *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
          *(char *)(unaff_R14 + 0x1c14) = cVar11;
          bVar3 = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
          bVar14 = bVar3 | 1;
          *(byte *)((int64_t)unaff_RBX + 0x432) = bVar14;
          if ((*(byte *)(lVar7 + 4) & 1) != 0) {
            return;
          }
          lVar10 = *(int64_t *)(lVar7 + 0x30);
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0x1c) == *(int *)(unaff_RBX + 1))) {
            bVar14 = bVar3 | 3;
            *(byte *)((int64_t)unaff_RBX + 0x432) = bVar14;
            lVar10 = *(int64_t *)(lVar7 + 0x30);
          }
          if ((((bVar14 & 2) == 0) && (lVar10 != 0)) &&
             (*(int *)(lVar10 + 0x18) == *(int *)(unaff_RBX + 1))) {
            *(int32_t *)((int64_t)unaff_RBX + 0xdc) = 2;
          }
          uVar1 = *(uint *)((int64_t)unaff_RBX + 0xc);
          *(uint *)((int64_t)unaff_RBX + 0xc) = uVar1 | 0x1010002;
          uVar9 = uVar1 & 0xfffffffe | 0x1010002;
          if ((*(byte *)(lVar7 + 0xa0) & 0x40) != 0) {
            uVar9 = uVar1 | 0x1010003;
          }
          *(uint *)((int64_t)unaff_RBX + 0xc) = uVar9;
          if (*(uint64_t *)(lVar7 + 0x30) != unaff_RBP) {
            piVar2 = *(int **)(unaff_RBX[0x81] + 0x30);
            if (((piVar2 != (int *)0x0) && (*(int *)(unaff_RBX + 1) != 0)) && (0 < *piVar2)) {
              piVar8 = *(int **)(piVar2 + 2);
              uVar13 = unaff_RBP;
              do {
                iVar12 = (int)uVar13;
                if (*piVar8 == *(int *)(unaff_RBX + 1)) {
                  if (*(int **)(piVar2 + 2) + (int64_t)iVar12 * 10 != (int *)0x0) {
                    uVar5 = (int16_t)(((int64_t)iVar12 * 0x28) / 0x28);
                    goto LAB_18013b999;
                  }
                  break;
                }
                uVar13 = (uint64_t)(iVar12 + 1);
                unaff_RBP = unaff_RBP + 1;
                piVar8 = piVar8 + 10;
              } while ((int64_t)unaff_RBP < (int64_t)*piVar2);
            }
            uVar5 = 0xffff;
LAB_18013b999:
            *(int16_t *)(unaff_RBX + 0x86) = uVar5;
          }
          if ((((*(byte *)(lVar7 + 0xa1) & 2) != 0) ||
              (*(int *)(lVar7 + 0x9c) == *(int *)(unaff_RBX + 1))) &&
             (in_stack_00000058 != (int8_t *)0x0)) {
            *in_stack_00000058 = 0;
          }
          uVar6 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
          *(int32_t *)(unaff_RBX + 0x11) = uVar6;
          return;
        }
        goto LAB_18013b872;
      }
    }
  }
  if (unaff_RBX[0x81] == 0) {
    *(int *)(unaff_RBX + 0x83) = iVar12;
  }
  else {
    FUN_180136d40();
    unaff_RDI = SYSTEM_DATA_MANAGER_A;
  }
  *(char *)((int64_t)unaff_RBX + 0xb2) = cVar11;
LAB_18013b83c:
  *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfc;
  if (0.0 < *(float *)(unaff_RDI + 0x2e04)) {
    return;
  }
  *(int32_t *)(unaff_RDI + 0x2e04) = *(int32_t *)(unaff_RDI + 0x1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b670(int64_t param_1)
void FUN_18013b670(int64_t param_1)

{
  uint uVar1;
  int *piVar2;
  int64_t lVar3;
  byte bVar4;
  int16_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int *piVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *unaff_RBX;
  int iVar12;
  uint64_t uVar13;
  int64_t unaff_RDI;
  byte bVar14;
  int64_t unaff_R14;
  uint64_t extraout_XMM0_Qa;
  int8_t *in_stack_00000058;
  char cStack0000000000000060;
  
  bVar4 = (byte)(*(uint *)(param_1 + 0xc) >> 0x15) & 1;
  cStack0000000000000060 = '\0';
  if (((*(uint *)(unaff_RDI + 0x1bd0) != 0) &&
      ((*(uint *)(unaff_RBX + 0x1c) & *(uint *)(unaff_RDI + 0x1bd0)) != 0)) &&
     (*(char *)(unaff_RDI + 0x1c14) != '\0')) {
    bVar4 = 1;
  }
  *(int8_t *)(unaff_RDI + 0x1c14) = 0;
  if (bVar4 != 0) {
    if (unaff_RBX[0x81] == 0) {
      *(int32_t *)(unaff_RBX + 0x83) = 0;
    }
    else {
      FUN_180136d40();
      unaff_RDI = SYSTEM_DATA_MANAGER_A;
    }
    *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfc;
    *(int8_t *)((int64_t)unaff_RBX + 0xb2) = 0;
    if (0.0 < *(float *)(unaff_RDI + 0x2e04)) {
      return;
    }
    *(int32_t *)(unaff_RDI + 0x2e04) = *(int32_t *)(unaff_RDI + 0x1c);
    return;
  }
  uVar10 = 0;
  lVar7 = unaff_RBX[0x81];
  if ((*(int *)(unaff_RBX + 0x83) != 0) && (lVar7 == 0)) {
    lVar7 = FUN_180121fa0(*(uint64_t *)(unaff_RDI + 0x2df8),*(int32_t *)(unaff_RBX + 0x83));
    if (lVar7 == 0) {
      lVar7 = FUN_180135960(extraout_XMM0_Qa,*(int32_t *)(unaff_RBX + 0x83));
      if (cStack0000000000000060 != '\0') {
        *(int32_t *)(lVar7 + 0x88) = *(int32_t *)(unaff_RDI + 0x1a90);
      }
    }
    else if (*(int64_t *)(lVar7 + 0x10) != 0) {
      if (unaff_RBX[0x81] == 0) {
        *(int32_t *)(unaff_RBX + 0x83) = 0;
        *(int8_t *)((int64_t)unaff_RBX + 0xb2) = 0;
      }
      else {
        FUN_180136d40(unaff_RBX[0x81]);
        unaff_RDI = SYSTEM_DATA_MANAGER_A;
        *(int8_t *)((int64_t)unaff_RBX + 0xb2) = 0;
      }
      goto LAB_18013b83c;
    }
    FUN_180136b10(lVar7);
    unaff_RDI = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) = unaff_RBX[8];
    *(uint64_t *)(unaff_RDI + 0x1bfc) = 0;
    *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
    *(int8_t *)(unaff_RDI + 0x1c14) = 1;
    *(uint64_t *)(unaff_RDI + 0x1c04) = unaff_RBX[10];
    *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
    *(int8_t *)(unaff_R14 + 0x1c14) = 0;
  }
  if (((*(byte *)(lVar7 + 0xa0) & 0x20) == 0) || ((*(byte *)(lVar7 + 4) & 8) == 0)) {
    if (*(int *)(lVar7 + 0x88) < *(int *)(unaff_R14 + 0x1a90)) {
      lVar11 = *(int64_t *)(lVar7 + 8);
      while (lVar3 = lVar11, lVar3 != 0) {
        lVar7 = lVar3;
        lVar11 = *(int64_t *)(lVar3 + 8);
      }
      if (*(int *)(unaff_R14 + 0x1a90) <= *(int *)(lVar7 + 0x88)) {
        *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      lVar11 = *(int64_t *)(lVar7 + 0x68);
      if (lVar11 == 0) {
LAB_18013b872:
        *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(lVar11 + 0xbc) <= *(short *)((int64_t)unaff_RBX + 0xbc)) {
        if (lVar11 != 0) {
          *(uint64_t *)(unaff_RDI + 0x1bf4) = *(uint64_t *)(lVar7 + 0x38);
          *(uint64_t *)(unaff_RDI + 0x1bfc) = 0;
          *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
          *(int8_t *)(unaff_RDI + 0x1c14) = 1;
          *(uint64_t *)(unaff_RDI + 0x1c04) = *(uint64_t *)(lVar7 + 0x40);
          *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
          *(int8_t *)(unaff_R14 + 0x1c14) = 0;
          bVar4 = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
          bVar14 = bVar4 | 1;
          *(byte *)((int64_t)unaff_RBX + 0x432) = bVar14;
          if ((*(byte *)(lVar7 + 4) & 1) != 0) {
            return;
          }
          lVar11 = *(int64_t *)(lVar7 + 0x30);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x1c) == *(int *)(unaff_RBX + 1))) {
            bVar14 = bVar4 | 3;
            *(byte *)((int64_t)unaff_RBX + 0x432) = bVar14;
            lVar11 = *(int64_t *)(lVar7 + 0x30);
          }
          if ((((bVar14 & 2) == 0) && (lVar11 != 0)) &&
             (*(int *)(lVar11 + 0x18) == *(int *)(unaff_RBX + 1))) {
            *(int32_t *)((int64_t)unaff_RBX + 0xdc) = 2;
          }
          uVar1 = *(uint *)((int64_t)unaff_RBX + 0xc);
          *(uint *)((int64_t)unaff_RBX + 0xc) = uVar1 | 0x1010002;
          uVar9 = uVar1 & 0xfffffffe | 0x1010002;
          if ((*(byte *)(lVar7 + 0xa0) & 0x40) != 0) {
            uVar9 = uVar1 | 0x1010003;
          }
          *(uint *)((int64_t)unaff_RBX + 0xc) = uVar9;
          if (*(int64_t *)(lVar7 + 0x30) != 0) {
            piVar2 = *(int **)(unaff_RBX[0x81] + 0x30);
            if (((piVar2 != (int *)0x0) && (*(int *)(unaff_RBX + 1) != 0)) && (0 < *piVar2)) {
              piVar8 = *(int **)(piVar2 + 2);
              uVar13 = uVar10;
              do {
                iVar12 = (int)uVar13;
                if (*piVar8 == *(int *)(unaff_RBX + 1)) {
                  if (*(int **)(piVar2 + 2) + (int64_t)iVar12 * 10 != (int *)0x0) {
                    uVar5 = (int16_t)(((int64_t)iVar12 * 0x28) / 0x28);
                    goto LAB_18013b999;
                  }
                  break;
                }
                uVar13 = (uint64_t)(iVar12 + 1);
                uVar10 = uVar10 + 1;
                piVar8 = piVar8 + 10;
              } while ((int64_t)uVar10 < (int64_t)*piVar2);
            }
            uVar5 = 0xffff;
LAB_18013b999:
            *(int16_t *)(unaff_RBX + 0x86) = uVar5;
          }
          if ((((*(byte *)(lVar7 + 0xa1) & 2) != 0) ||
              (*(int *)(lVar7 + 0x9c) == *(int *)(unaff_RBX + 1))) &&
             (in_stack_00000058 != (int8_t *)0x0)) {
            *in_stack_00000058 = 0;
          }
          uVar6 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
          *(int32_t *)(unaff_RBX + 0x11) = uVar6;
          return;
        }
        goto LAB_18013b872;
      }
    }
  }
  if (unaff_RBX[0x81] == 0) {
    *(int32_t *)(unaff_RBX + 0x83) = 0;
  }
  else {
    FUN_180136d40();
    unaff_RDI = SYSTEM_DATA_MANAGER_A;
  }
  *(int8_t *)((int64_t)unaff_RBX + 0xb2) = 0;
LAB_18013b83c:
  *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfc;
  if (0.0 < *(float *)(unaff_RDI + 0x2e04)) {
    return;
  }
  *(int32_t *)(unaff_RDI + 0x2e04) = *(int32_t *)(unaff_RDI + 0x1c);
  return;
}





// 函数: void FUN_18013b704(void)
void FUN_18013b704(void)

{
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RBX + 0x418) = unaff_EBP;
  *(int8_t *)(unaff_RBX + 0xb2) = 0;
  *(byte *)(unaff_RBX + 0x432) = *(byte *)(unaff_RBX + 0x432) & 0xfc;
  if (*(float *)(unaff_RDI + 0x2e04) <= 0.0) {
    *(int32_t *)(unaff_RDI + 0x2e04) = *(int32_t *)(unaff_RDI + 0x1c);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b7f6(void)
void FUN_18013b7f6(void)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int16_t uVar4;
  int32_t uVar5;
  int *piVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t *unaff_RBX;
  int iVar9;
  uint64_t unaff_RBP;
  uint64_t uVar10;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  byte bVar11;
  int64_t unaff_R14;
  int8_t *in_stack_00000058;
  
  lVar8 = *(int64_t *)(unaff_RSI + 0x68);
  if (lVar8 != 0) {
    if (*(short *)((int64_t)unaff_RBX + 0xbc) < *(short *)(lVar8 + 0xbc)) {
      if (unaff_RBX[0x81] == 0) {
        *(int *)(unaff_RBX + 0x83) = (int)unaff_RBP;
      }
      else {
        FUN_180136d40();
        unaff_RDI = SYSTEM_DATA_MANAGER_A;
      }
      *(char *)((int64_t)unaff_RBX + 0xb2) = (char)unaff_RBP;
      *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfc;
      if (*(float *)(unaff_RDI + 0x2e04) <= 0.0) {
        *(int32_t *)(unaff_RDI + 0x2e04) = *(int32_t *)(unaff_RDI + 0x1c);
        return;
      }
    }
    else {
      if (lVar8 == 0) goto LAB_18013b872;
      *(uint64_t *)(unaff_RDI + 0x1bf4) = *(uint64_t *)(unaff_RSI + 0x38);
      *(uint64_t *)(unaff_RDI + 0x1bfc) = unaff_RBP;
      *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
      *(int8_t *)(unaff_RDI + 0x1c14) = 1;
      *(uint64_t *)(unaff_RDI + 0x1c04) = *(uint64_t *)(unaff_RSI + 0x40);
      *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
      *(char *)(unaff_R14 + 0x1c14) = (char)unaff_RBP;
      bVar3 = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
      bVar11 = bVar3 | 1;
      *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
      if ((*(byte *)(unaff_RSI + 4) & 1) == 0) {
        lVar8 = *(int64_t *)(unaff_RSI + 0x30);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x1c) == *(int *)(unaff_RBX + 1))) {
          bVar11 = bVar3 | 3;
          *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
          lVar8 = *(int64_t *)(unaff_RSI + 0x30);
        }
        if ((((bVar11 & 2) == 0) && (lVar8 != 0)) &&
           (*(int *)(lVar8 + 0x18) == *(int *)(unaff_RBX + 1))) {
          *(int32_t *)((int64_t)unaff_RBX + 0xdc) = 2;
        }
        uVar1 = *(uint *)((int64_t)unaff_RBX + 0xc);
        *(uint *)((int64_t)unaff_RBX + 0xc) = uVar1 | 0x1010002;
        uVar7 = uVar1 & 0xfffffffe | 0x1010002;
        if ((*(byte *)(unaff_RSI + 0xa0) & 0x40) != 0) {
          uVar7 = uVar1 | 0x1010003;
        }
        *(uint *)((int64_t)unaff_RBX + 0xc) = uVar7;
        if (*(uint64_t *)(unaff_RSI + 0x30) != unaff_RBP) {
          piVar2 = *(int **)(unaff_RBX[0x81] + 0x30);
          if (((piVar2 != (int *)0x0) && (*(int *)(unaff_RBX + 1) != 0)) && (0 < *piVar2)) {
            piVar6 = *(int **)(piVar2 + 2);
            uVar10 = unaff_RBP;
            do {
              iVar9 = (int)uVar10;
              if (*piVar6 == *(int *)(unaff_RBX + 1)) {
                if (*(int **)(piVar2 + 2) + (int64_t)iVar9 * 10 != (int *)0x0) {
                  uVar4 = (int16_t)(((int64_t)iVar9 * 0x28) / 0x28);
                  goto LAB_18013b999;
                }
                break;
              }
              uVar10 = (uint64_t)(iVar9 + 1);
              unaff_RBP = unaff_RBP + 1;
              piVar6 = piVar6 + 10;
            } while ((int64_t)unaff_RBP < (int64_t)*piVar2);
          }
          uVar4 = 0xffff;
LAB_18013b999:
          *(int16_t *)(unaff_RBX + 0x86) = uVar4;
        }
        if ((((*(byte *)(unaff_RSI + 0xa1) & 2) != 0) ||
            (*(int *)(unaff_RSI + 0x9c) == *(int *)(unaff_RBX + 1))) &&
           (in_stack_00000058 != (int8_t *)0x0)) {
          *in_stack_00000058 = 0;
        }
        uVar5 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
        *(int32_t *)(unaff_RBX + 0x11) = uVar5;
      }
    }
    return;
  }
LAB_18013b872:
  *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
  return;
}





// 函数: void FUN_18013b86d(int64_t param_1)
void FUN_18013b86d(int64_t param_1)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int16_t uVar4;
  int32_t uVar5;
  int *piVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t *unaff_RBX;
  int iVar9;
  uint64_t unaff_RBP;
  uint64_t uVar10;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  byte bVar11;
  int64_t unaff_R14;
  int8_t *in_stack_00000058;
  
  if (param_1 == 0) {
    *(byte *)((int64_t)unaff_RBX + 0x432) = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
    return;
  }
  *(uint64_t *)(unaff_RDI + 0x1bf4) = *(uint64_t *)(unaff_RSI + 0x38);
  *(uint64_t *)(unaff_RDI + 0x1bfc) = unaff_RBP;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c04) = *(uint64_t *)(unaff_RSI + 0x40);
  *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
  *(char *)(unaff_R14 + 0x1c14) = (char)unaff_RBP;
  bVar3 = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
  bVar11 = bVar3 | 1;
  *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
  if ((*(byte *)(unaff_RSI + 4) & 1) == 0) {
    lVar8 = *(int64_t *)(unaff_RSI + 0x30);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x1c) == *(int *)(unaff_RBX + 1))) {
      bVar11 = bVar3 | 3;
      *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
      lVar8 = *(int64_t *)(unaff_RSI + 0x30);
    }
    if ((((bVar11 & 2) == 0) && (lVar8 != 0)) && (*(int *)(lVar8 + 0x18) == *(int *)(unaff_RBX + 1))
       ) {
      *(int32_t *)((int64_t)unaff_RBX + 0xdc) = 2;
    }
    uVar1 = *(uint *)((int64_t)unaff_RBX + 0xc);
    *(uint *)((int64_t)unaff_RBX + 0xc) = uVar1 | 0x1010002;
    uVar7 = uVar1 & 0xfffffffe | 0x1010002;
    if ((*(byte *)(unaff_RSI + 0xa0) & 0x40) != 0) {
      uVar7 = uVar1 | 0x1010003;
    }
    *(uint *)((int64_t)unaff_RBX + 0xc) = uVar7;
    if (*(uint64_t *)(unaff_RSI + 0x30) != unaff_RBP) {
      piVar2 = *(int **)(unaff_RBX[0x81] + 0x30);
      if (((piVar2 != (int *)0x0) && (*(int *)(unaff_RBX + 1) != 0)) && (0 < *piVar2)) {
        piVar6 = *(int **)(piVar2 + 2);
        uVar10 = unaff_RBP;
        do {
          iVar9 = (int)uVar10;
          if (*piVar6 == *(int *)(unaff_RBX + 1)) {
            if (*(int **)(piVar2 + 2) + (int64_t)iVar9 * 10 != (int *)0x0) {
              uVar4 = (int16_t)(((int64_t)iVar9 * 0x28) / 0x28);
              goto LAB_18013b999;
            }
            break;
          }
          uVar10 = (uint64_t)(iVar9 + 1);
          unaff_RBP = unaff_RBP + 1;
          piVar6 = piVar6 + 10;
        } while ((int64_t)unaff_RBP < (int64_t)*piVar2);
      }
      uVar4 = 0xffff;
LAB_18013b999:
      *(int16_t *)(unaff_RBX + 0x86) = uVar4;
    }
    if ((((*(byte *)(unaff_RSI + 0xa1) & 2) != 0) ||
        (*(int *)(unaff_RSI + 0x9c) == *(int *)(unaff_RBX + 1))) &&
       (in_stack_00000058 != (int8_t *)0x0)) {
      *in_stack_00000058 = 0;
    }
    uVar5 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
    *(int32_t *)(unaff_RBX + 0x11) = uVar5;
  }
  return;
}





// 函数: void FUN_18013b88a(void)
void FUN_18013b88a(void)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int16_t uVar4;
  int32_t uVar5;
  int *piVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t *unaff_RBX;
  int iVar9;
  uint64_t unaff_RBP;
  uint64_t uVar10;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  byte bVar11;
  int64_t unaff_R14;
  int8_t *in_stack_00000058;
  
  *(uint64_t *)(unaff_RDI + 0x1bf4) = *(uint64_t *)(unaff_RSI + 0x38);
  *(uint64_t *)(unaff_RDI + 0x1bfc) = unaff_RBP;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c04) = *(uint64_t *)(unaff_RSI + 0x40);
  *(int32_t *)(unaff_RDI + 0x1bd4) = 1;
  *(char *)(unaff_R14 + 0x1c14) = (char)unaff_RBP;
  bVar3 = *(byte *)((int64_t)unaff_RBX + 0x432) & 0xfd;
  bVar11 = bVar3 | 1;
  *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
  if ((*(byte *)(unaff_RSI + 4) & 1) == 0) {
    lVar8 = *(int64_t *)(unaff_RSI + 0x30);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x1c) == *(int *)(unaff_RBX + 1))) {
      bVar11 = bVar3 | 3;
      *(byte *)((int64_t)unaff_RBX + 0x432) = bVar11;
      lVar8 = *(int64_t *)(unaff_RSI + 0x30);
    }
    if ((((bVar11 & 2) == 0) && (lVar8 != 0)) && (*(int *)(lVar8 + 0x18) == *(int *)(unaff_RBX + 1))
       ) {
      *(int32_t *)((int64_t)unaff_RBX + 0xdc) = 2;
    }
    uVar1 = *(uint *)((int64_t)unaff_RBX + 0xc);
    *(uint *)((int64_t)unaff_RBX + 0xc) = uVar1 | 0x1010002;
    uVar7 = uVar1 & 0xfffffffe | 0x1010002;
    if ((*(byte *)(unaff_RSI + 0xa0) & 0x40) != 0) {
      uVar7 = uVar1 | 0x1010003;
    }
    *(uint *)((int64_t)unaff_RBX + 0xc) = uVar7;
    if (*(uint64_t *)(unaff_RSI + 0x30) != unaff_RBP) {
      piVar2 = *(int **)(unaff_RBX[0x81] + 0x30);
      if (((piVar2 != (int *)0x0) && (*(int *)(unaff_RBX + 1) != 0)) && (0 < *piVar2)) {
        piVar6 = *(int **)(piVar2 + 2);
        uVar10 = unaff_RBP;
        do {
          iVar9 = (int)uVar10;
          if (*piVar6 == *(int *)(unaff_RBX + 1)) {
            if (*(int **)(piVar2 + 2) + (int64_t)iVar9 * 10 != (int *)0x0) {
              uVar4 = (int16_t)(((int64_t)iVar9 * 0x28) / 0x28);
              goto LAB_18013b999;
            }
            break;
          }
          uVar10 = (uint64_t)(iVar9 + 1);
          unaff_RBP = unaff_RBP + 1;
          piVar6 = piVar6 + 10;
        } while ((int64_t)unaff_RBP < (int64_t)*piVar2);
      }
      uVar4 = 0xffff;
LAB_18013b999:
      *(int16_t *)(unaff_RBX + 0x86) = uVar4;
    }
    if ((((*(byte *)(unaff_RSI + 0xa1) & 2) != 0) ||
        (*(int *)(unaff_RSI + 0x9c) == *(int *)(unaff_RBX + 1))) &&
       (in_stack_00000058 != (int8_t *)0x0)) {
      *in_stack_00000058 = 0;
    }
    uVar5 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
    *(int32_t *)(unaff_RBX + 0x11) = uVar5;
  }
  return;
}





// 函数: void FUN_18013b9df(void)
void FUN_18013b9df(void)

{
  return;
}





// 函数: void FUN_18013b9eb(void)
void FUN_18013b9eb(void)

{
  int16_t uVar1;
  int32_t uVar2;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t in_R9;
  int8_t *in_stack_00000058;
  
  if ((int64_t)unaff_EBP * 0x28 + in_R9 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (int16_t)(((int64_t)unaff_EBP * 0x28) / 0x28);
  }
  *(int16_t *)(unaff_RBX + 0x86) = uVar1;
  if ((((*(byte *)(unaff_RSI + 0xa1) & 2) != 0) ||
      (*(int *)(unaff_RSI + 0x9c) == *(int *)(unaff_RBX + 1))) &&
     (in_stack_00000058 != (int8_t *)0x0)) {
    *in_stack_00000058 = 0;
  }
  uVar2 = SystemCore_EventHandler(*(uint64_t *)(unaff_RBX[0x81] + 0x68),*unaff_RBX);
  *(int32_t *)(unaff_RBX + 0x11) = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013ba30(int64_t param_1)
void FUN_18013ba30(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int32_t extraout_XMM0_Da;
  int64_t alStackX_8 [4];
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(param_1 + 0x144) = *(int32_t *)(param_1 + 0x84);
  alStackX_8[0] = *(int64_t *)(param_1 + 0x3a0);
  if (*(char *)(lVar1 + 0xc1) == '\0') {
    if (*(float *)(lVar1 + 0x1b48) < 0.0) {
      return;
    }
    if (*(float *)(lVar1 + 0x1b4c) < 0.0) {
      return;
    }
    if (*(float *)(alStackX_8[0] + 0x50) <= *(float *)(lVar1 + 0x1b48)) {
      return;
    }
    if (*(float *)(lVar1 + 0x1660) + *(float *)(lVar1 + 0x1660) + *(float *)(lVar1 + 0x19f8) <=
        *(float *)(lVar1 + 0x1b4c)) {
      return;
    }
  }
  cVar2 = FUN_180135160();
  if (cVar2 != '\0') {
    FUN_180135260(extraout_XMM0_Da,alStackX_8);
    lVar1 = SYSTEM_DATA_MANAGER_A;
    if ((*(byte *)(SYSTEM_DATA_MANAGER_A + 0x1dd4) & 1) == 0) {
      HighFreq_CacheSystem1();
    }
    if (*(int *)(lVar1 + 0x1df4) == -1) {
      FUN_180135090();
    }
    *(int8_t *)(lVar1 + 0x1dd1) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013baa6(void)
void FUN_18013baa6(void)

{
  int64_t lVar1;
  
  FUN_180135260();
  lVar1 = SYSTEM_DATA_MANAGER_A;
  if ((*(byte *)(SYSTEM_DATA_MANAGER_A + 0x1dd4) & 1) == 0) {
    HighFreq_CacheSystem1();
  }
  if (*(int *)(lVar1 + 0x1df4) == -1) {
    FUN_180135090();
  }
  *(int8_t *)(lVar1 + 0x1dd1) = 0;
  return;
}





// 函数: void FUN_18013badf(void)
void FUN_18013badf(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




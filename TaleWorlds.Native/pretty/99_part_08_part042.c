#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part042.c - 8 个函数

// 函数: void FUN_1805a2d30(int64_t param_1,int param_2,int64_t param_3)
void FUN_1805a2d30(int64_t param_1,int param_2,int64_t param_3)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int64_t *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint uVar12;
  int32_t uVar14;
  int iVar15;
  int iVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int8_t uVar19;
  int32_t uVar20;
  uint64_t unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint64_t uVar13;
  
  fVar24 = system_system_memory;
  lVar8 = *(int64_t *)(param_1 + 0x108);
  if (param_2 == 1) {
    uVar12 = *(uint *)(lVar8 + 0x56c) >> 0xe & 1;
    uVar13 = (uint64_t)uVar12;
    cVar6 = FUN_1805a3ab0();
    cVar7 = FUN_1805a6e00(param_1,uVar13,cVar6);
    if (cVar7 == '\0') {
      return;
    }
    uVar14 = 2;
    if ((cVar7 == '\x03') && (cVar7 = '\x03', *(float *)(param_1 + 0x44) <= 0.0)) {
      cVar7 = '\x02';
    }
    plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
    fVar24 = *(float *)((int64_t)*(short *)(plVar11[uVar13 * 9 + 0x48c] + 0x7e) * 0x68 + 0x28 +
                       system_system_memory);
    if (((plVar11[uVar13 * 9 + 0x48d] != 0) &&
        (fVar21 = *(float *)((int64_t)plVar11 + uVar13 * 0x48 + 0x248c), 0.0 < fVar21)) &&
       (sVar2 = *(short *)(plVar11[uVar13 * 9 + 0x48d] + 0x7e),
       *(short *)(plVar11[uVar13 * 9 + 0x48c] + 0x7e) != sVar2)) {
      fVar24 = fVar24 + (*(float *)((int64_t)sVar2 * 0x68 + 0x28 + system_system_memory) - fVar24) *
                        fVar21;
    }
    fVar21 = (float)(**(code **)(*plVar11 + 0x90))(plVar11,uVar13);
    if (((cVar7 != '\x03') || (cVar6 != '\0')) || (fVar21 <= fVar24)) {
      fVar24 = 1.0;
      lVar8 = *(int64_t *)(param_1 + 0x108);
    }
    else {
      lVar8 = *(int64_t *)(param_1 + 0x108);
      lVar17 = *(int64_t *)(*(int64_t *)(lVar8 + 0x590) + 0xf8 + (uint64_t)uVar12 * 0x11b0);
      fVar24 = (fVar24 - *(float *)(lVar17 + 0x30)) / (fVar21 - *(float *)(lVar17 + 0x30));
    }
    lVar17 = 0;
    if ((*(uint *)(lVar8 + 0x56c) & 0x4000) != 0) {
      lVar17 = *(int64_t *)(*(int64_t *)(lVar8 + 0x8f8) + 0x9e8);
    }
    if (lVar17 == 0) {
      uVar20 = 0xffffffff;
    }
    else {
      uVar20 = *(int32_t *)(*(int64_t *)(lVar8 + 0x8f8) + 0x9e0);
    }
    if ((lVar17 != 0) && (0 < *(int *)(lVar17 + 0x30))) {
      lVar9 = (int64_t)*(int *)(lVar17 + 0xf0) * 0xa0;
      if (((*(uint *)(lVar9 + 0x50 + *(int64_t *)(lVar17 + 0xd0)) >> 9 & 1) == 0) ||
         (0 < *(short *)(lVar17 + 8))) {
        if ((*(int64_t *)(param_1 + 600) == 0) ||
           ((*(uint *)(lVar9 + 0x58 + *(int64_t *)(lVar17 + 0xd0)) & 0x80000) != 0)) {
          uVar12 = 1;
        }
        else {
          uVar12 = *(uint *)(*(int64_t *)(param_1 + 600) + 0x104);
        }
        goto LAB_1805a2f49;
      }
    }
    uVar12 = (uint)(1 < *(int *)(param_1 + 0x48) - 2U);
LAB_1805a2f49:
    if ((lVar17 != 0) && (0 < *(int *)(lVar17 + 0x30))) {
      lVar9 = *(int64_t *)(lVar17 + 0xd0);
      lVar10 = (int64_t)*(int *)(lVar17 + 0xf0) * 0xa0;
      if (((*(uint *)(lVar10 + 0x50 + lVar9) >> 9 & 1) == 0) || (0 < *(short *)(lVar17 + 8))) {
        if (uVar12 == 0) {
          uVar14 = *(int32_t *)(lVar10 + 0x9c + lVar9);
        }
        else {
          uVar14 = *(int32_t *)(lVar10 + 0x98 + lVar9);
        }
      }
    }
    uVar13 = (uint64_t)(*(uint *)(lVar8 + 0x56c) >> 0xe & 1);
    fVar22 = (float)(**(code **)(**(int64_t **)(lVar8 + 0x590) + 0x90))
                              (*(int64_t **)(lVar8 + 0x590),uVar13);
    lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x130) + 0x590);
    sVar2 = *(short *)(*(int64_t *)(lVar8 + 0x2460 + uVar13 * 0x48) + 0x7e);
    lVar17 = *(int64_t *)(lVar8 + 0x2468 + uVar13 * 0x48);
    lVar9 = (int64_t)sVar2 * 0x68;
    fVar21 = *(float *)(lVar9 + 0x28 + system_system_memory);
    fVar23 = *(float *)(lVar9 + 0x24 + system_system_memory);
    if (((lVar17 != 0) && (fVar1 = *(float *)(lVar8 + 0x248c + uVar13 * 0x48), 0.0 < fVar1)) &&
       (sVar3 = *(short *)(lVar17 + 0x7e), sVar2 != sVar3)) {
      lVar8 = (int64_t)sVar3 * 0x68;
      fVar21 = fVar21 + (*(float *)(lVar8 + 0x28 + system_system_memory) - fVar21) * fVar1;
      fVar23 = fVar23 + (*(float *)(lVar8 + 0x24 + system_system_memory) - fVar23) * fVar1;
    }
    fVar23 = (fVar22 - fVar23) / (fVar21 - fVar23);
    fVar21 = 0.0;
    if ((0.0 <= fVar23) && (fVar21 = fVar23, 1.0 <= fVar23)) {
      fVar21 = 1.0;
    }
    *(uint64_t *)(param_3 + 0x20) = *(uint64_t *)(param_1 + 0x108);
    *(bool *)(param_3 + 0x40) = cVar6 != '\0';
    *(int32_t *)(param_3 + 0x44) = uVar14;
    *(float *)(param_3 + 0x2c) = fVar24;
    *(float *)(param_3 + 0x30) = fVar21;
    *(int32_t *)(param_3 + 0x28) = uVar20;
    *(int32_t *)(param_3 + 0x34) = 0;
    *(uint *)(param_3 + 0x38) = uVar12;
    *(int32_t *)(param_3 + 0x3c) = 1;
    *(char *)(param_3 + 0x41) = cVar7;
    *(int8_t *)(param_3 + 0x48) = 0;
    FUN_1804ed6a0(*(uint64_t *)(param_1 + 0x100),param_1,param_3);
    return;
  }
  plVar4 = *(int64_t **)(lVar8 + 0x590);
  iVar16 = 0;
  lVar17 = 0;
  plVar11 = plVar4 + 0x48a;
  do {
    if (((int)*plVar11 != -1) &&
       (iVar5 = iVar16, *(int *)((int64_t)(int)*plVar11 * 0x68 + 0x58 + system_system_memory) - 0x1cU < 4
       )) break;
    iVar16 = iVar16 + 1;
    lVar17 = lVar17 + 1;
    plVar11 = plVar11 + 9;
    iVar5 = -1;
  } while (lVar17 < 2);
  if ((((*(int *)(lVar8 + 0x568) != 1) || ((int)plVar4[0x493] == -1)) ||
      (*(int *)((int64_t)(int)plVar4[0x493] * 0x68 + 0x58 + system_system_memory) != 0x20)) ||
     (fVar21 = (float)(**(code **)(*plVar4 + 0xa0))(plVar4,1), fVar21 <= fVar24)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  cVar6 = FUN_1805a6e00(param_1,iVar5,uVar18);
  if (cVar6 != '\x03') {
    return;
  }
  lVar17 = 3;
  lVar8 = *(int64_t *)(param_1 + 0x108);
  iVar16 = *(int *)(*(int64_t *)(lVar8 + 0x590) + 0x2450 + (int64_t)iVar5 * 0x48);
  if (iVar16 == -1) {
    iVar15 = 0;
  }
  else {
    lVar17 = (int64_t)iVar16 * 0x68;
    iVar15 = *(int *)(lVar17 + 0x58 + system_system_memory);
  }
  uVar14 = 0xffffffff;
  if (iVar15 == 0x1f) {
    lVar17 = *(int64_t *)(lVar8 + 0x8f8);
    lVar8 = *(int64_t *)(lVar17 + 0x9f0);
    if (lVar8 != 0) {
      lVar9 = (int64_t)*(int *)(lVar8 + 0xf0) * 0xa0;
      if (((*(uint *)(lVar9 + 0x50 + *(int64_t *)(lVar8 + 0xd0)) >> 0x1c & 1) != 0) &&
         (-1 < *(int *)(lVar9 + 100 + *(int64_t *)(lVar8 + 0xd0)))) {
        uVar14 = *(int32_t *)(lVar17 + 0x9e4);
        goto LAB_1805a4045;
      }
    }
    lVar8 = *(int64_t *)(lVar17 + 0x9e8);
    uVar14 = *(int32_t *)(lVar17 + 0x9e0);
  }
  else {
    lVar8 = FUN_1805346e0((int64_t)iVar16,lVar8,lVar17,param_3,unaff_R15);
  }
LAB_1805a4045:
  uVar19 = 3;
  if (*(float *)(param_1 + 0x44) <= 0.0) {
    uVar19 = 2;
  }
  if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x30))) {
    lVar17 = (int64_t)*(int *)(lVar8 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar17 + 0x50 + *(int64_t *)(lVar8 + 0xd0)) >> 9 & 1) == 0) ||
       (0 < *(short *)(lVar8 + 8))) {
      if ((*(int64_t *)(param_1 + 600) == 0) ||
         ((*(uint *)(lVar17 + 0x58 + *(int64_t *)(lVar8 + 0xd0)) & 0x80000) != 0)) {
        lVar8 = *(int64_t *)(param_1 + 0x108);
        uVar12 = 1;
      }
      else {
        uVar12 = *(uint *)(*(int64_t *)(param_1 + 600) + 0x104);
        lVar8 = *(int64_t *)(param_1 + 0x108);
      }
      goto LAB_1805a40f5;
    }
  }
  lVar8 = *(int64_t *)(param_1 + 0x108);
  if (lVar8 == 0) {
    uVar12 = 1;
    lVar8 = 0;
  }
  else {
    uVar12 = (uint)(1 < *(int *)(param_1 + 0x48) - 2U);
  }
LAB_1805a40f5:
  *(int64_t *)(param_3 + 0x20) = lVar8;
  *(int32_t *)(param_3 + 0x28) = uVar14;
  *(int32_t *)(param_3 + 0x2c) = 0x3f800000;
  *(int32_t *)(param_3 + 0x30) = 0x3f000000;
  *(uint *)(param_3 + 0x34) = (iVar15 == 0x1f) + 1;
  *(uint *)(param_3 + 0x38) = uVar12;
  *(int *)(param_3 + 0x3c) = iVar5;
  *(int8_t *)(param_3 + 0x40) = 0;
  *(int8_t *)(param_3 + 0x41) = uVar19;
  *(int32_t *)(param_3 + 0x44) = 2;
  *(int8_t *)(param_3 + 0x48) = 1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(*(uint64_t *)(param_1 + 0x100),param_1,param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a2d57(uint64_t param_1,uint param_2)
void FUN_1805a2d57(uint64_t param_1,uint param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t in_R11;
  uint uVar12;
  int32_t uVar13;
  int32_t extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t uStack00000000000000a8;
  
  param_2 = *(uint *)(in_R11 + 0x56c) >> 0xe & param_2;
  uVar11 = (uint64_t)param_2;
  cVar5 = FUN_1805a3ab0();
  cVar6 = FUN_1805a6e00(extraout_XMM0_Da,uVar11,cVar5);
  if (cVar6 == '\0') {
    return;
  }
  uStack00000000000000a8 = 2;
  if ((cVar6 == '\x03') && (cVar6 = '\x03', *(float *)(unaff_RSI + 0x44) <= 0.0)) {
    cVar6 = '\x02';
  }
  plVar4 = *(int64_t **)(*(int64_t *)(unaff_RSI + 0x108) + 0x590);
  fVar17 = *(float *)((int64_t)*(short *)(plVar4[uVar11 * 9 + 0x48c] + 0x7e) * 0x68 + 0x28 +
                     system_system_memory);
  if (((plVar4[uVar11 * 9 + 0x48d] != 0) &&
      (fVar14 = *(float *)((int64_t)plVar4 + uVar11 * 0x48 + 0x248c), 0.0 < fVar14)) &&
     (sVar2 = *(short *)(plVar4[uVar11 * 9 + 0x48d] + 0x7e),
     *(short *)(plVar4[uVar11 * 9 + 0x48c] + 0x7e) != sVar2)) {
    fVar17 = fVar17 + (*(float *)((int64_t)sVar2 * 0x68 + 0x28 + system_system_memory) - fVar17) * fVar14
    ;
  }
  fVar14 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,uVar11);
  if (((cVar6 != '\x03') || (cVar5 != '\0')) || (fVar14 <= fVar17)) {
    fVar17 = 1.0;
    lVar8 = *(int64_t *)(unaff_RSI + 0x108);
  }
  else {
    lVar8 = *(int64_t *)(unaff_RSI + 0x108);
    lVar7 = *(int64_t *)(*(int64_t *)(lVar8 + 0x590) + 0xf8 + (uint64_t)param_2 * 0x11b0);
    fVar17 = (fVar17 - *(float *)(lVar7 + 0x30)) / (fVar14 - *(float *)(lVar7 + 0x30));
  }
  lVar7 = 0;
  if ((*(uint *)(lVar8 + 0x56c) & 0x4000) != 0) {
    lVar7 = *(int64_t *)(*(int64_t *)(lVar8 + 0x8f8) + 0x9e8);
  }
  if (lVar7 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(int32_t *)(*(int64_t *)(lVar8 + 0x8f8) + 0x9e0);
  }
  if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x30))) {
    lVar9 = (int64_t)*(int *)(lVar7 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar9 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) >> 9 & 1) == 0) ||
       (0 < *(short *)(lVar7 + 8))) {
      if ((*(int64_t *)(unaff_RSI + 600) == 0) ||
         ((*(uint *)(lVar9 + 0x58 + *(int64_t *)(lVar7 + 0xd0)) & 0x80000) != 0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = *(uint *)(*(int64_t *)(unaff_RSI + 600) + 0x104);
      }
      goto LAB_1805a2f49;
    }
  }
  uVar12 = (uint)(1 < *(int *)(unaff_RSI + 0x48) - 2U);
LAB_1805a2f49:
  if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x30))) {
    lVar9 = *(int64_t *)(lVar7 + 0xd0);
    lVar10 = (int64_t)*(int *)(lVar7 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar10 + 0x50 + lVar9) >> 9 & 1) == 0) || (0 < *(short *)(lVar7 + 8))) {
      if (uVar12 == 0) {
        uStack00000000000000a8 = *(int32_t *)(lVar10 + 0x9c + lVar9);
      }
      else {
        uStack00000000000000a8 = *(int32_t *)(lVar10 + 0x98 + lVar9);
      }
    }
  }
  uVar11 = (uint64_t)(*(uint *)(lVar8 + 0x56c) >> 0xe & 1);
  fVar15 = (float)(**(code **)(**(int64_t **)(lVar8 + 0x590) + 0x90))
                            (*(int64_t **)(lVar8 + 0x590),uVar11);
  lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x130) + 0x590);
  sVar2 = *(short *)(*(int64_t *)(lVar8 + 0x2460 + uVar11 * 0x48) + 0x7e);
  lVar7 = *(int64_t *)(lVar8 + 0x2468 + uVar11 * 0x48);
  lVar9 = (int64_t)sVar2 * 0x68;
  fVar14 = *(float *)(lVar9 + 0x28 + system_system_memory);
  fVar16 = *(float *)(lVar9 + 0x24 + system_system_memory);
  if (((lVar7 != 0) && (fVar1 = *(float *)(lVar8 + 0x248c + uVar11 * 0x48), 0.0 < fVar1)) &&
     (sVar3 = *(short *)(lVar7 + 0x7e), sVar2 != sVar3)) {
    lVar8 = (int64_t)sVar3 * 0x68;
    fVar14 = fVar14 + (*(float *)(lVar8 + 0x28 + system_system_memory) - fVar14) * fVar1;
    fVar16 = fVar16 + (*(float *)(lVar8 + 0x24 + system_system_memory) - fVar16) * fVar1;
  }
  fVar16 = (fVar15 - fVar16) / (fVar14 - fVar16);
  fVar14 = 0.0;
  if ((0.0 <= fVar16) && (fVar14 = fVar16, 1.0 <= fVar16)) {
    fVar14 = 1.0;
  }
  *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RSI + 0x108);
  *(bool *)(unaff_RBP + 0x40) = cVar5 != '\0';
  *(int32_t *)(unaff_RBP + 0x44) = uStack00000000000000a8;
  *(float *)(unaff_RBP + 0x2c) = fVar17;
  *(float *)(unaff_RBP + 0x30) = fVar14;
  *(int32_t *)(unaff_RBP + 0x28) = uVar13;
  *(int32_t *)(unaff_RBP + 0x34) = 0;
  *(uint *)(unaff_RBP + 0x38) = uVar12;
  *(int32_t *)(unaff_RBP + 0x3c) = 1;
  *(char *)(unaff_RBP + 0x41) = cVar6;
  *(int8_t *)(unaff_RBP + 0x48) = 0;
  FUN_1804ed6a0(*(uint64_t *)(unaff_RSI + 0x100));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a2d9a(void)
void FUN_1805a2d9a(void)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t unaff_RBX;
  uint64_t uVar9;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar10;
  char unaff_R14B;
  char unaff_R15B;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char in_stack_00000098;
  int32_t uStack00000000000000a8;
  
  uStack00000000000000a8 = 2;
  if ((unaff_R14B == '\x03') && (unaff_R14B = '\x03', *(float *)(unaff_RSI + 0x44) <= 0.0)) {
    unaff_R14B = '\x02';
  }
  plVar4 = *(int64_t **)(*(int64_t *)(unaff_RSI + 0x108) + 0x590);
  fVar15 = *(float *)((int64_t)*(short *)(plVar4[unaff_RBX * 9 + 0x48c] + 0x7e) * 0x68 + 0x28 +
                     system_system_memory);
  if (((plVar4[unaff_RBX * 9 + 0x48d] != 0) &&
      (fVar12 = *(float *)((int64_t)plVar4 + unaff_RBX * 0x48 + 0x248c), 0.0 < fVar12)) &&
     (sVar2 = *(short *)(plVar4[unaff_RBX * 9 + 0x48d] + 0x7e),
     *(short *)(plVar4[unaff_RBX * 9 + 0x48c] + 0x7e) != sVar2)) {
    fVar15 = fVar15 + (*(float *)((int64_t)sVar2 * 0x68 + 0x28 + system_system_memory) - fVar15) * fVar12
    ;
  }
  fVar12 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,unaff_RBX & 0xffffffff);
  if (((unaff_R14B != '\x03') || (unaff_R15B != '\0')) || (fVar12 <= fVar15)) {
    fVar15 = 1.0;
    lVar6 = *(int64_t *)(unaff_RSI + 0x108);
  }
  else {
    lVar6 = *(int64_t *)(unaff_RSI + 0x108);
    lVar5 = *(int64_t *)(*(int64_t *)(lVar6 + 0x590) + 0xf8 + (unaff_RBX & 0xffffffff) * 0x11b0);
    fVar15 = (fVar15 - *(float *)(lVar5 + 0x30)) / (fVar12 - *(float *)(lVar5 + 0x30));
  }
  lVar5 = 0;
  if ((*(uint *)(lVar6 + 0x56c) & 0x4000) != 0) {
    lVar5 = *(int64_t *)(*(int64_t *)(lVar6 + 0x8f8) + 0x9e8);
  }
  if (lVar5 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(int32_t *)(*(int64_t *)(lVar6 + 0x8f8) + 0x9e0);
  }
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x30))) {
    lVar7 = (int64_t)*(int *)(lVar5 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar7 + 0x50 + *(int64_t *)(lVar5 + 0xd0)) >> 9 & 1) == 0) ||
       (0 < *(short *)(lVar5 + 8))) {
      if ((*(int64_t *)(unaff_RSI + 600) == 0) ||
         ((*(uint *)(lVar7 + 0x58 + *(int64_t *)(lVar5 + 0xd0)) & 0x80000) != 0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = *(uint *)(*(int64_t *)(unaff_RSI + 600) + 0x104);
      }
      goto LAB_1805a2f49;
    }
  }
  uVar10 = (uint)(1 < *(int *)(unaff_RSI + 0x48) - 2U);
LAB_1805a2f49:
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x30))) {
    lVar7 = *(int64_t *)(lVar5 + 0xd0);
    lVar8 = (int64_t)*(int *)(lVar5 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar8 + 0x50 + lVar7) >> 9 & 1) == 0) || (0 < *(short *)(lVar5 + 8))) {
      if (uVar10 == 0) {
        uStack00000000000000a8 = *(int32_t *)(lVar8 + 0x9c + lVar7);
      }
      else {
        uStack00000000000000a8 = *(int32_t *)(lVar8 + 0x98 + lVar7);
      }
    }
  }
  uVar9 = (uint64_t)(*(uint *)(lVar6 + 0x56c) >> 0xe & 1);
  fVar13 = (float)(**(code **)(**(int64_t **)(lVar6 + 0x590) + 0x90))
                            (*(int64_t **)(lVar6 + 0x590),uVar9);
  lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x130) + 0x590);
  sVar2 = *(short *)(*(int64_t *)(lVar6 + 0x2460 + uVar9 * 0x48) + 0x7e);
  lVar5 = *(int64_t *)(lVar6 + 0x2468 + uVar9 * 0x48);
  lVar7 = (int64_t)sVar2 * 0x68;
  fVar12 = *(float *)(lVar7 + 0x28 + system_system_memory);
  fVar14 = *(float *)(lVar7 + 0x24 + system_system_memory);
  if (((lVar5 != 0) && (fVar1 = *(float *)(lVar6 + 0x248c + uVar9 * 0x48), 0.0 < fVar1)) &&
     (sVar3 = *(short *)(lVar5 + 0x7e), sVar2 != sVar3)) {
    lVar6 = (int64_t)sVar3 * 0x68;
    fVar12 = fVar12 + (*(float *)(lVar6 + 0x28 + system_system_memory) - fVar12) * fVar1;
    fVar14 = fVar14 + (*(float *)(lVar6 + 0x24 + system_system_memory) - fVar14) * fVar1;
  }
  fVar14 = (fVar13 - fVar14) / (fVar12 - fVar14);
  fVar12 = 0.0;
  if ((0.0 <= fVar14) && (fVar12 = fVar14, 1.0 <= fVar14)) {
    fVar12 = 1.0;
  }
  *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RSI + 0x108);
  *(bool *)(unaff_RBP + 0x40) = in_stack_00000098 != '\0';
  *(int32_t *)(unaff_RBP + 0x44) = uStack00000000000000a8;
  *(float *)(unaff_RBP + 0x2c) = fVar15;
  *(float *)(unaff_RBP + 0x30) = fVar12;
  *(int32_t *)(unaff_RBP + 0x28) = uVar11;
  *(int32_t *)(unaff_RBP + 0x34) = 0;
  *(uint *)(unaff_RBP + 0x38) = uVar10;
  *(int32_t *)(unaff_RBP + 0x3c) = 1;
  *(char *)(unaff_RBP + 0x41) = unaff_R14B;
  *(int8_t *)(unaff_RBP + 0x48) = 0;
  FUN_1804ed6a0(*(uint64_t *)(unaff_RSI + 0x100));
  return;
}






// 函数: void FUN_1805a30dc(void)
void FUN_1805a30dc(void)

{
  return;
}






// 函数: void FUN_1805a30e9(void)
void FUN_1805a30e9(void)

{
  return;
}






// 函数: void FUN_1805a31d0(int64_t param_1)
void FUN_1805a31d0(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int8_t uVar11;
  char cVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  int8_t auStack_b8 [176];
  
  if ((*(uint *)(*(int64_t *)(param_1 + 0x108) + 0x56c) & 0x4000) == 0) {
    *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
    *(int32_t *)(param_1 + 200) = 0xf149f2ca;
    *(int8_t *)(param_1 + 0xd8) = 0xff;
    return;
  }
  uVar11 = FUN_1805a3ab0();
  cVar12 = FUN_1805a6e00(param_1,1,uVar11);
  if (cVar12 != '\0') {
    uVar11 = FUN_180527720(*(uint64_t *)(param_1 + 0x108),1);
    *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_1 + 0x98);
    *(uint64_t *)(param_1 + 0x60) = *(uint64_t *)(param_1 + 0xa0);
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0xa8);
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0xb0);
    *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_1 + 0xb8);
    *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_1 + 0xbc);
    *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_1 + 0xc0);
    *(int32_t *)(param_1 + 0x84) = *(int32_t *)(param_1 + 0xc4);
    *(int32_t *)(param_1 + 0x88) = *(int32_t *)(param_1 + 200);
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_1 + 0xcc);
    *(int32_t *)(param_1 + 0x90) = *(int32_t *)(param_1 + 0xd0);
    *(int32_t *)(param_1 + 0x94) = *(int32_t *)(param_1 + 0xd4);
    lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
    lVar13 = FUN_180534d00(*(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658),auStack_b8,uVar11
                          );
    FUN_18063b5f0(&fStack_128);
    fVar1 = *(float *)(lVar5 + 0x70);
    fVar2 = *(float *)(lVar5 + 0x80);
    fVar3 = *(float *)(lVar5 + 0x84);
    fVar4 = *(float *)(lVar5 + 0x74);
    fStack_f0 = *(float *)(lVar5 + 0x98);
    fStack_d0 = fStack_f0 * fStack_100;
    fVar17 = fVar1 * *(float *)(lVar13 + 0x10) + fVar2 * *(float *)(lVar13 + 0x14) +
             *(float *)(lVar5 + 0xa0);
    fVar15 = fStack_f0 * *(float *)(lVar13 + 0x18) + *(float *)(lVar5 + 0xa8);
    fVar16 = fVar4 * *(float *)(lVar13 + 0x10) + fVar3 * *(float *)(lVar13 + 0x14) +
             *(float *)(lVar5 + 0xa4);
    fStack_d8 = fVar1 * fStack_108 + fVar2 * fStack_104;
    fStack_d4 = fVar4 * fStack_108 + fVar3 * fStack_104;
    uStack_bc = 0x7f7fffff;
    fStack_e0 = fStack_f0 * fStack_110;
    fStack_e8 = fVar1 * fStack_118 + fVar2 * fStack_114;
    fStack_f8 = fVar1 * fStack_128 + fVar2 * fStack_124;
    fStack_e4 = fVar4 * fStack_118 + fVar3 * fStack_114;
    fStack_f0 = fStack_f0 * fStack_120;
    fStack_f4 = fVar4 * fStack_128 + fVar3 * fStack_124;
    uStack_cc = 0x7f7fffff;
    uStack_ec = 0x7f7fffff;
    uStack_dc = 0x7f7fffff;
    fStack_c8 = fVar17;
    fStack_c4 = fVar16;
    fStack_c0 = fVar15;
    puVar14 = (uint64_t *)
              FUN_180535610(&fStack_f8,&fStack_128,
                            *(int32_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8) + 0x8c0),
                            fStack_e4,fVar17,fVar15);
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    uVar9 = puVar14[4];
    uVar10 = puVar14[5];
    *(uint64_t *)(param_1 + 0x98) = *puVar14;
    *(uint64_t *)(param_1 + 0xa0) = uVar6;
    *(uint64_t *)(param_1 + 0xa8) = uVar7;
    *(uint64_t *)(param_1 + 0xb0) = uVar8;
    *(uint64_t *)(param_1 + 0xb8) = uVar9;
    *(uint64_t *)(param_1 + 0xc0) = uVar10;
    *(float *)(param_1 + 200) = fVar17;
    *(float *)(param_1 + 0xcc) = fVar16;
    *(float *)(param_1 + 0xd0) = fVar15;
    *(int32_t *)(param_1 + 0xd4) = 0x7f7fffff;
    *(int8_t *)(param_1 + 0xd8) = uVar11;
    return;
  }
  *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
  *(int32_t *)(param_1 + 200) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0xd8) = 0xff;
  return;
}






// 函数: void FUN_1805a31fc(void)
void FUN_1805a31fc(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int8_t uVar13;
  char cVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t uStack000000000000002c;
  int32_t uStack000000000000003c;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  int32_t in_stack_00000120;
  int32_t in_stack_00000128;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  
  uVar13 = FUN_1805a3ab0();
  cVar14 = FUN_1805a6e00(extraout_XMM0_Da,1,uVar13);
  if (cVar14 != '\0') {
    uVar13 = FUN_180527720(*(uint64_t *)(unaff_RDI + 0x108),1);
    *(uint64_t *)(unaff_RDI + 0x58) = *(uint64_t *)(unaff_RDI + 0x98);
    *(uint64_t *)(unaff_RDI + 0x60) = *(uint64_t *)(unaff_RDI + 0xa0);
    *(uint64_t *)(unaff_RDI + 0x68) = *(uint64_t *)(unaff_RDI + 0xa8);
    *(uint64_t *)(unaff_RDI + 0x70) = *(uint64_t *)(unaff_RDI + 0xb0);
    *(int32_t *)(unaff_RDI + 0x78) = *(int32_t *)(unaff_RDI + 0xb8);
    *(int32_t *)(unaff_RDI + 0x7c) = *(int32_t *)(unaff_RDI + 0xbc);
    *(int32_t *)(unaff_RDI + 0x80) = *(int32_t *)(unaff_RDI + 0xc0);
    *(int32_t *)(unaff_RDI + 0x84) = *(int32_t *)(unaff_RDI + 0xc4);
    *(int32_t *)(unaff_RDI + 0x88) = *(int32_t *)(unaff_RDI + 200);
    *(int32_t *)(unaff_RDI + 0x8c) = *(int32_t *)(unaff_RDI + 0xcc);
    *(int32_t *)(unaff_RDI + 0x90) = *(int32_t *)(unaff_RDI + 0xd0);
    *(int32_t *)(unaff_RDI + 0x94) = *(int32_t *)(unaff_RDI + 0xd4);
    lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x108) + 0x6d8) + 0x8a8);
    lVar15 = FUN_180534d00(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x108) + 0x658),
                           unaff_RBP + -0x40,uVar13);
    FUN_18063b5f0(&stack0x00000050);
    fVar1 = *(float *)(lVar7 + 0x70);
    fVar2 = *(float *)(lVar7 + 0x80);
    fVar3 = *(float *)(lVar7 + 0x84);
    fVar4 = *(float *)(lVar7 + 0x74);
    fVar5 = *(float *)(lVar7 + 0x98);
    uStack000000000000004c = 0x7f7fffff;
    fVar20 = fVar1 * *(float *)(lVar15 + 0x10) + fVar2 * *(float *)(lVar15 + 0x14) +
             *(float *)(lVar7 + 0xa0);
    fVar17 = fVar5 * *(float *)(lVar15 + 0x18) + *(float *)(lVar7 + 0xa8);
    fVar18 = fVar4 * *(float *)(lVar15 + 0x10) + fVar3 * *(float *)(lVar15 + 0x14) +
             *(float *)(lVar7 + 0xa4);
    *(float *)(unaff_RBP + -0x50) = fVar20;
    *(float *)(unaff_RBP + -0x4c) = fVar18;
    *(float *)(unaff_RBP + -0x48) = fVar17;
    *(int32_t *)(unaff_RBP + -0x44) = 0x7f7fffff;
    uStack000000000000003c = 0x7f7fffff;
    uStack000000000000002c = 0x7f7fffff;
    fVar19 = fVar4 * fStack0000000000000060 + fVar3 * fStack0000000000000064;
    uVar6 = *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x108) + 0x6d8) + 0x8c0);
    *(float *)(unaff_RBP + -0x60) = fVar1 * fStack0000000000000070 + fVar2 * fStack0000000000000074;
    *(float *)(unaff_RBP + -0x5c) = fVar4 * fStack0000000000000070 + fVar3 * fStack0000000000000074;
    *(float *)(unaff_RBP + -0x58) = fVar5 * in_stack_00000078;
    *(int32_t *)(unaff_RBP + -0x54) = 0x7f7fffff;
    *(float *)(unaff_RBP + -0x80) = fVar1 * fStack0000000000000050 + fVar2 * fStack0000000000000054;
    *(float *)(unaff_RBP + -0x7c) = fVar4 * fStack0000000000000050 + fVar3 * fStack0000000000000054;
    *(float *)(unaff_RBP + -0x78) = fVar5 * in_stack_00000058;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    *(float *)(unaff_RBP + -0x70) = fVar1 * fStack0000000000000060 + fVar2 * fStack0000000000000064;
    *(float *)(unaff_RBP + -0x6c) = fVar19;
    *(float *)(unaff_RBP + -0x68) = fVar5 * in_stack_00000068;
    *(int32_t *)(unaff_RBP + -100) = 0x7f7fffff;
    puVar16 = (uint64_t *)FUN_180535610(unaff_RBP + -0x80,&stack0x00000050,uVar6,fVar19,fVar20);
    uVar8 = puVar16[1];
    uVar9 = puVar16[2];
    uVar10 = puVar16[3];
    uVar11 = puVar16[4];
    uVar12 = puVar16[5];
    *(uint64_t *)(unaff_RDI + 0x98) = *puVar16;
    *(uint64_t *)(unaff_RDI + 0xa0) = uVar8;
    *(uint64_t *)(unaff_RDI + 0xa8) = uVar9;
    *(uint64_t *)(unaff_RDI + 0xb0) = uVar10;
    *(uint64_t *)(unaff_RDI + 0xb8) = uVar11;
    *(uint64_t *)(unaff_RDI + 0xc0) = uVar12;
    *(float *)(unaff_RDI + 200) = fVar20;
    *(float *)(unaff_RDI + 0xcc) = fVar18;
    *(float *)(unaff_RDI + 0xd0) = fVar17;
    *(int32_t *)(unaff_RDI + 0xd4) = 0x7f7fffff;
    *(int8_t *)(unaff_RDI + 0xd8) = uVar13;
    return;
  }
  *(int32_t *)(unaff_RDI + 0x88) = 0xf149f2ca;
  *(int32_t *)(unaff_RDI + 200) = 0xf149f2ca;
  *(int8_t *)(unaff_RDI + 0xd8) = 0xff;
  return;
}






// 函数: void FUN_1805a358c(void)
void FUN_1805a358c(void)

{
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x88) = 0xf149f2ca;
  *(int32_t *)(unaff_RDI + 200) = 0xf149f2ca;
  *(int8_t *)(unaff_RDI + 0xd8) = 0xff;
  return;
}







#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part211.c - 7 个函数

// 函数: void FUN_18038d8ce(void)
void FUN_18038d8ce(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18038d8f0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  uint64_t in_RAX;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  uint64_t uVar18;
  uint uVar19;
  int iVar21;
  int64_t lVar22;
  uint64_t uVar20;
  
  if (param_2 == 0) {
    in_RAX = *(int64_t *)(param_1 + 0x460) - *(int64_t *)(param_1 + 0x458) >> 3;
LAB_18038d918:
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(char *)(param_2 + 0x20) != '\x02') ||
     (lVar1 = *(int64_t *)(param_2 + 0x10), *(char *)(lVar1 + 0xa8) != '\x03')) goto LAB_18038d918;
  lVar2 = *(int64_t *)(param_2 + 0x18);
  plVar17 = (int64_t *)(param_2 + 0x18);
  if (*(char *)(lVar2 + 0xa8) != '\x03') goto LAB_18038d918;
  uVar20 = 0;
  lVar22 = 0x68;
  iVar21 = -1;
  iVar15 = -1;
  uVar18 = uVar20;
  do {
    plVar16 = (int64_t *)(lVar1 + -8 + lVar22);
    iVar14 = (int)uVar18;
    lVar22 = lVar22 + 0x18;
    iVar10 = iVar14;
    if (*plVar16 != param_2) {
      iVar10 = iVar21;
    }
    iVar9 = iVar14 + 1;
    if (*(int64_t *)(lVar1 + -0x18 + lVar22) != param_2) {
      iVar9 = iVar10;
    }
    iVar21 = iVar14 + 2;
    if (*(int64_t *)(lVar1 + -0x10 + lVar22) != param_2) {
      iVar21 = iVar9;
    }
    iVar10 = iVar14;
    if (*(int64_t *)(lVar2 + -0x20 + lVar22) != param_2) {
      iVar10 = iVar15;
    }
    iVar9 = iVar14 + 1;
    if (*(int64_t *)(lVar2 + -0x18 + lVar22) != param_2) {
      iVar9 = iVar10;
    }
    iVar15 = iVar14 + 2;
    if (*(int64_t *)(lVar2 + -0x10 + lVar22) != param_2) {
      iVar15 = iVar9;
    }
    uVar18 = (uint64_t)(iVar14 + 3U);
  } while ((int)(iVar14 + 3U) < 3);
  iVar14 = iVar21 + 1;
  iVar21 = iVar21 + 2;
  lVar11 = (int64_t)
           (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                     (int)(((int64_t)iVar14 / 3 + ((int64_t)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  lVar22 = *(int64_t *)(lVar1 + 0x60 + lVar11 * 8);
  uVar3 = *(uint64_t *)(lVar1 + 0x80 + lVar11 * 8);
  iVar14 = iVar15 + 1;
  lVar12 = (int64_t)
           (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                     (int)(((int64_t)iVar14 / 3 + ((int64_t)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  lVar11 = *(int64_t *)(lVar2 + 0x60 + lVar12 * 8);
  uVar4 = *(uint64_t *)(lVar2 + 0x80 + lVar12 * 8);
  lVar12 = (int64_t)
           (iVar21 + (iVar21 / 3 + (iVar21 >> 0x1f) +
                     (int)(((int64_t)iVar21 / 3 + ((int64_t)iVar21 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  uVar5 = *(uint64_t *)(lVar1 + 0x80 + lVar12 * 8);
  lVar12 = *(int64_t *)(lVar1 + 0x60 + lVar12 * 8);
  iVar15 = iVar15 + 2;
  lVar13 = (int64_t)
           (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                     (int)(((int64_t)iVar15 / 3 + ((int64_t)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  lVar6 = *(int64_t *)(lVar2 + 0x60);
  lVar7 = *(int64_t *)(lVar2 + 0x60 + lVar13 * 8);
  uVar8 = *(uint64_t *)(lVar2 + 0x80 + lVar13 * 8);
  if ((lVar6 != param_2) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == lVar2) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038daa3:
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
      *(uint64_t *)(lVar6 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == lVar2) goto LAB_18038daa3;
    *(uint64_t *)(lVar2 + 0x60) = 0;
  }
  lVar6 = *(int64_t *)(lVar1 + 0x60);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == lVar1) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038dacd:
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
      *(uint64_t *)(lVar6 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == lVar1) goto LAB_18038dacd;
    *(uint64_t *)(lVar1 + 0x60) = 0;
  }
  lVar6 = *(int64_t *)(lVar2 + 0x68);
  if ((lVar6 != param_2) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == lVar2) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038dafc:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == lVar2) goto LAB_18038dafc;
    *(uint64_t *)(lVar2 + 0x68) = 0;
  }
  lVar6 = *(int64_t *)(lVar1 + 0x68);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == lVar1) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038db26:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == lVar1) goto LAB_18038db26;
    *(uint64_t *)(lVar1 + 0x68) = 0;
  }
  lVar6 = *(int64_t *)(lVar2 + 0x70);
  if ((lVar6 != param_2) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == lVar2) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038db55:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == lVar2) goto LAB_18038db55;
    *(uint64_t *)(lVar2 + 0x70) = 0;
  }
  lVar2 = *(int64_t *)(lVar1 + 0x70);
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038db7f:
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038db7f;
    *(uint64_t *)(lVar1 + 0x70) = 0;
  }
  (**(code **)(param_1 + 0x540))
            (*(uint64_t *)(param_1 + 0x538),*(uint64_t *)(param_1 + 0x528),lVar1);
  *(int8_t *)(lVar1 + 0xa8) = 4;
  lVar2 = *(int64_t *)(lVar1 + 0x60);
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dbc7:
      *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
      *(uint64_t *)(lVar2 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dbc7;
    *(uint64_t *)(lVar1 + 0x60) = 0;
  }
  if (((lVar22 != 0) &&
      (*(int64_t *)(lVar1 + 0x60) = lVar22, *(int64_t *)(lVar22 + 0x10) != lVar1)) &&
     (*(int64_t *)(lVar22 + 0x18) != lVar1)) {
    *(int64_t *)(lVar22 + 0x10 + (uint64_t)*(byte *)(lVar22 + 0x20) * 8) = lVar1;
    *(char *)(lVar22 + 0x20) = *(char *)(lVar22 + 0x20) + '\x01';
  }
  *(uint64_t *)(lVar1 + 0x80) = uVar3;
  lVar2 = *(int64_t *)(lVar1 + 0x68);
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dc23:
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dc23;
    *(uint64_t *)(lVar1 + 0x68) = 0;
  }
  if (((lVar12 != 0) &&
      (*(int64_t *)(lVar1 + 0x68) = lVar12, *(int64_t *)(lVar12 + 0x10) != lVar1)) &&
     (*(int64_t *)(lVar12 + 0x18) != lVar1)) {
    *(int64_t *)(lVar12 + 0x10 + (uint64_t)*(byte *)(lVar12 + 0x20) * 8) = lVar1;
    *(char *)(lVar12 + 0x20) = *(char *)(lVar12 + 0x20) + '\x01';
  }
  *(uint64_t *)(lVar1 + 0x88) = uVar5;
  lVar2 = *(int64_t *)(lVar1 + 0x70);
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dc7f:
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dc7f;
    *(uint64_t *)(lVar1 + 0x70) = 0;
  }
  if (((lVar11 != 0) &&
      (*(int64_t *)(lVar1 + 0x70) = lVar11, *(int64_t *)(lVar11 + 0x10) != lVar1)) &&
     (*(int64_t *)(lVar11 + 0x18) != lVar1)) {
    *(int64_t *)(lVar11 + 0x10 + (uint64_t)*(byte *)(lVar11 + 0x20) * 8) = lVar1;
    *(char *)(lVar11 + 0x20) = *(char *)(lVar11 + 0x20) + '\x01';
  }
  *(uint64_t *)(lVar1 + 0x90) = uVar4;
  lVar2 = *(int64_t *)(lVar1 + 0x78);
  if (lVar2 == 0) goto LAB_18038dcef;
  if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
    *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dce4:
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
  }
  else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dce4;
  *(uint64_t *)(lVar1 + 0x78) = 0;
LAB_18038dcef:
  if (((lVar7 != 0) && (*(int64_t *)(lVar1 + 0x78) = lVar7, *(int64_t *)(lVar7 + 0x10) != lVar1))
     && (*(int64_t *)(lVar7 + 0x18) != lVar1)) {
    *(int64_t *)(lVar7 + 0x10 + (uint64_t)*(byte *)(lVar7 + 0x20) * 8) = lVar1;
    *(char *)(lVar7 + 0x20) = *(char *)(lVar7 + 0x20) + '\x01';
  }
  *(uint64_t *)(lVar1 + 0x98) = uVar8;
  (**(code **)(param_1 + 0x550))
            (*(uint64_t *)(param_1 + 0x548),*(uint64_t *)(param_1 + 0x528),lVar1);
  iVar21 = 1;
  do {
    lVar1 = *plVar17;
    if (lVar1 != 0) {
      if ((uint64_t)*(byte *)(lVar1 + 0xa8) != 0) {
        plVar16 = (int64_t *)(lVar1 + 0x60);
        uVar18 = uVar20;
        do {
          lVar2 = *plVar16;
          if (lVar2 == param_2) {
            if (lVar2 != 0) {
              if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
                *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dd91:
                *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
                *(uint64_t *)(lVar2 + 0x18) = 0;
              }
              else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dd91;
              *(uint64_t *)(lVar1 + 0x60 + uVar18 * 8) = 0;
            }
            break;
          }
          uVar18 = uVar18 + 1;
          plVar16 = plVar16 + 1;
        } while ((int64_t)uVar18 < (int64_t)(uint64_t)*(byte *)(lVar1 + 0xa8));
      }
      FUN_18038cf30(param_1,lVar1);
      FUN_18038aae0(param_1,lVar1);
    }
    plVar17 = plVar17 + -1;
    iVar21 = iVar21 + -1;
  } while (-1 < iVar21);
  plVar17 = *(int64_t **)(param_1 + 0x458);
  uVar18 = *(int64_t *)(param_1 + 0x460) - (int64_t)plVar17 >> 3;
  if (uVar18 != 0) {
    do {
      if (param_2 == *plVar17) break;
      uVar19 = (int)uVar20 + 1;
      uVar20 = (uint64_t)uVar19;
      plVar17 = plVar17 + 1;
    } while ((uint64_t)(int64_t)(int)uVar19 < uVar18);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038d94a(void)
void FUN_18038d94a(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar14;
  int64_t in_R9;
  int64_t lVar15;
  int64_t *unaff_R15;
  uint64_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uVar13;
  
  uVar13 = 0;
  lVar15 = 0x68;
  iVar14 = -1;
  iVar9 = -1;
  uVar11 = uVar13;
  do {
    plVar10 = (int64_t *)(unaff_RBX + -8 + lVar15);
    iVar8 = (int)uVar11;
    lVar15 = lVar15 + 0x18;
    iVar4 = iVar8;
    if (*plVar10 != unaff_RSI) {
      iVar4 = iVar14;
    }
    iVar3 = iVar8 + 1;
    if (*(int64_t *)(unaff_RBX + -0x18 + lVar15) != unaff_RSI) {
      iVar3 = iVar4;
    }
    iVar14 = iVar8 + 2;
    if (*(int64_t *)(unaff_RBX + -0x10 + lVar15) != unaff_RSI) {
      iVar14 = iVar3;
    }
    iVar4 = iVar8;
    if (*(int64_t *)(in_R9 + -0x20 + lVar15) != unaff_RSI) {
      iVar4 = iVar9;
    }
    iVar3 = iVar8 + 1;
    if (*(int64_t *)(in_R9 + -0x18 + lVar15) != unaff_RSI) {
      iVar3 = iVar4;
    }
    iVar9 = iVar8 + 2;
    if (*(int64_t *)(in_R9 + -0x10 + lVar15) != unaff_RSI) {
      iVar9 = iVar3;
    }
    uVar11 = (uint64_t)(iVar8 + 3U);
  } while ((int)(iVar8 + 3U) < 3);
  iVar8 = iVar14 + 1;
  iVar14 = iVar14 + 2;
  lVar5 = (int64_t)
          (iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                   (int)(((int64_t)iVar8 / 3 + ((int64_t)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3);
  lVar15 = *(int64_t *)(unaff_RBX + 0x60 + lVar5 * 8);
  uStack0000000000000028 = *(uint64_t *)(unaff_RBX + 0x80 + lVar5 * 8);
  iVar8 = iVar9 + 1;
  lVar6 = (int64_t)
          (iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                   (int)(((int64_t)iVar8 / 3 + ((int64_t)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3);
  lVar5 = *(int64_t *)(in_R9 + 0x60 + lVar6 * 8);
  uStack0000000000000040 = *(uint64_t *)(in_R9 + 0x80 + lVar6 * 8);
  lVar6 = (int64_t)
          (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                    (int)(((int64_t)iVar14 / 3 + ((int64_t)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3);
  uStack0000000000000038 = *(uint64_t *)(unaff_RBX + 0x80 + lVar6 * 8);
  lStack0000000000000030 = *(int64_t *)(unaff_RBX + 0x60 + lVar6 * 8);
  iVar9 = iVar9 + 2;
  lVar7 = (int64_t)
          (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                   (int)(((int64_t)iVar9 / 3 + ((int64_t)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3);
  lVar6 = *(int64_t *)(in_R9 + 0x60);
  lVar1 = *(int64_t *)(in_R9 + 0x60 + lVar7 * 8);
  uVar2 = *(uint64_t *)(in_R9 + 0x80 + lVar7 * 8);
  if ((lVar6 != unaff_RSI) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == in_R9) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038daa3:
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
      *(uint64_t *)(lVar6 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == in_R9) goto LAB_18038daa3;
    *(uint64_t *)(in_R9 + 0x60) = 0;
  }
  lVar6 = *(int64_t *)(unaff_RBX + 0x60);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038dacd:
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
      *(uint64_t *)(lVar6 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == unaff_RBX) goto LAB_18038dacd;
    *(uint64_t *)(unaff_RBX + 0x60) = 0;
  }
  lVar6 = *(int64_t *)(in_R9 + 0x68);
  if ((lVar6 != unaff_RSI) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == in_R9) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038dafc:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == in_R9) goto LAB_18038dafc;
    *(uint64_t *)(in_R9 + 0x68) = 0;
  }
  lVar6 = *(int64_t *)(unaff_RBX + 0x68);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038db26:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == unaff_RBX) goto LAB_18038db26;
    *(uint64_t *)(unaff_RBX + 0x68) = 0;
  }
  lVar6 = *(int64_t *)(in_R9 + 0x70);
  if ((lVar6 != unaff_RSI) && (lVar6 != 0)) {
    if (*(int64_t *)(lVar6 + 0x10) == in_R9) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038db55:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == in_R9) goto LAB_18038db55;
    *(uint64_t *)(in_R9 + 0x70) = 0;
  }
  lVar6 = *(int64_t *)(unaff_RBX + 0x70);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038db7f:
      *(uint64_t *)(lVar6 + 0x18) = 0;
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == unaff_RBX) goto LAB_18038db7f;
    *(uint64_t *)(unaff_RBX + 0x70) = 0;
  }
  (**(code **)(unaff_RBP + 0x540))
            (*(uint64_t *)(unaff_RBP + 0x538),*(uint64_t *)(unaff_RBP + 0x528));
  *(int8_t *)(unaff_RBX + 0xa8) = 4;
  lVar6 = *(int64_t *)(unaff_RBX + 0x60);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar6 + 0x10) = *(uint64_t *)(lVar6 + 0x18);
LAB_18038dbc7:
      *(char *)(lVar6 + 0x20) = *(char *)(lVar6 + 0x20) + -1;
      *(uint64_t *)(lVar6 + 0x18) = 0;
    }
    else if (*(int64_t *)(lVar6 + 0x18) == unaff_RBX) goto LAB_18038dbc7;
    *(uint64_t *)(unaff_RBX + 0x60) = 0;
  }
  if (((lVar15 != 0) &&
      (*(int64_t *)(unaff_RBX + 0x60) = lVar15, *(int64_t *)(lVar15 + 0x10) != unaff_RBX)) &&
     (*(int64_t *)(lVar15 + 0x18) != unaff_RBX)) {
    *(int64_t *)(lVar15 + 0x10 + (uint64_t)*(byte *)(lVar15 + 0x20) * 8) = unaff_RBX;
    *(char *)(lVar15 + 0x20) = *(char *)(lVar15 + 0x20) + '\x01';
  }
  *(uint64_t *)(unaff_RBX + 0x80) = uStack0000000000000028;
  lVar15 = *(int64_t *)(unaff_RBX + 0x68);
  if (lVar15 != 0) {
    if (*(int64_t *)(lVar15 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar15 + 0x10) = *(uint64_t *)(lVar15 + 0x18);
LAB_18038dc23:
      *(uint64_t *)(lVar15 + 0x18) = 0;
      *(char *)(lVar15 + 0x20) = *(char *)(lVar15 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar15 + 0x18) == unaff_RBX) goto LAB_18038dc23;
    *(uint64_t *)(unaff_RBX + 0x68) = 0;
  }
  if (((lStack0000000000000030 != 0) &&
      (*(int64_t *)(unaff_RBX + 0x68) = lStack0000000000000030,
      *(int64_t *)(lStack0000000000000030 + 0x10) != unaff_RBX)) &&
     (*(int64_t *)(lStack0000000000000030 + 0x18) != unaff_RBX)) {
    *(int64_t *)
     (lStack0000000000000030 + 0x10 + (uint64_t)*(byte *)(lStack0000000000000030 + 0x20) * 8) =
         unaff_RBX;
    *(char *)(lStack0000000000000030 + 0x20) = *(char *)(lStack0000000000000030 + 0x20) + '\x01';
  }
  *(uint64_t *)(unaff_RBX + 0x88) = uStack0000000000000038;
  lVar15 = *(int64_t *)(unaff_RBX + 0x70);
  if (lVar15 != 0) {
    if (*(int64_t *)(lVar15 + 0x10) == unaff_RBX) {
      *(uint64_t *)(lVar15 + 0x10) = *(uint64_t *)(lVar15 + 0x18);
LAB_18038dc7f:
      *(uint64_t *)(lVar15 + 0x18) = 0;
      *(char *)(lVar15 + 0x20) = *(char *)(lVar15 + 0x20) + -1;
    }
    else if (*(int64_t *)(lVar15 + 0x18) == unaff_RBX) goto LAB_18038dc7f;
    *(uint64_t *)(unaff_RBX + 0x70) = 0;
  }
  if (((lVar5 != 0) &&
      (*(int64_t *)(unaff_RBX + 0x70) = lVar5, *(int64_t *)(lVar5 + 0x10) != unaff_RBX)) &&
     (*(int64_t *)(lVar5 + 0x18) != unaff_RBX)) {
    *(int64_t *)(lVar5 + 0x10 + (uint64_t)*(byte *)(lVar5 + 0x20) * 8) = unaff_RBX;
    *(char *)(lVar5 + 0x20) = *(char *)(lVar5 + 0x20) + '\x01';
  }
  *(uint64_t *)(unaff_RBX + 0x90) = uStack0000000000000040;
  lVar15 = *(int64_t *)(unaff_RBX + 0x78);
  if (lVar15 == 0) goto LAB_18038dcef;
  if (*(int64_t *)(lVar15 + 0x10) == unaff_RBX) {
    *(uint64_t *)(lVar15 + 0x10) = *(uint64_t *)(lVar15 + 0x18);
LAB_18038dce4:
    *(uint64_t *)(lVar15 + 0x18) = 0;
    *(char *)(lVar15 + 0x20) = *(char *)(lVar15 + 0x20) + -1;
  }
  else if (*(int64_t *)(lVar15 + 0x18) == unaff_RBX) goto LAB_18038dce4;
  *(uint64_t *)(unaff_RBX + 0x78) = 0;
LAB_18038dcef:
  if (((lVar1 != 0) &&
      (*(int64_t *)(unaff_RBX + 0x78) = lVar1, *(int64_t *)(lVar1 + 0x10) != unaff_RBX)) &&
     (*(int64_t *)(lVar1 + 0x18) != unaff_RBX)) {
    *(int64_t *)(lVar1 + 0x10 + (uint64_t)*(byte *)(lVar1 + 0x20) * 8) = unaff_RBX;
    *(char *)(lVar1 + 0x20) = *(char *)(lVar1 + 0x20) + '\x01';
  }
  *(uint64_t *)(unaff_RBX + 0x98) = uVar2;
  (**(code **)(unaff_RBP + 0x550))
            (*(uint64_t *)(unaff_RBP + 0x548),*(uint64_t *)(unaff_RBP + 0x528));
  iVar14 = 1;
  do {
    lVar15 = *unaff_R15;
    if (lVar15 != 0) {
      if ((uint64_t)*(byte *)(lVar15 + 0xa8) != 0) {
        plVar10 = (int64_t *)(lVar15 + 0x60);
        uVar11 = uVar13;
        do {
          lVar5 = *plVar10;
          if (lVar5 == unaff_RSI) {
            if (lVar5 != 0) {
              if (*(int64_t *)(lVar5 + 0x10) == lVar15) {
                *(uint64_t *)(lVar5 + 0x10) = *(uint64_t *)(lVar5 + 0x18);
LAB_18038dd91:
                *(char *)(lVar5 + 0x20) = *(char *)(lVar5 + 0x20) + -1;
                *(uint64_t *)(lVar5 + 0x18) = 0;
              }
              else if (*(int64_t *)(lVar5 + 0x18) == lVar15) goto LAB_18038dd91;
              *(uint64_t *)(lVar15 + 0x60 + uVar11 * 8) = 0;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          plVar10 = plVar10 + 1;
        } while ((int64_t)uVar11 < (int64_t)(uint64_t)*(byte *)(lVar15 + 0xa8));
      }
      FUN_18038cf30();
      FUN_18038aae0();
    }
    unaff_R15 = unaff_R15 + -1;
    iVar14 = iVar14 + -1;
  } while (-1 < iVar14);
  plVar10 = *(int64_t **)(unaff_RBP + 0x458);
  uVar11 = *(int64_t *)(unaff_RBP + 0x460) - (int64_t)plVar10 >> 3;
  if (uVar11 != 0) {
    do {
      if (unaff_RSI == *plVar10) break;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar12;
      plVar10 = plVar10 + 1;
    } while ((uint64_t)(int64_t)(int)uVar12 < uVar11);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038dcce(int64_t param_1)
void FUN_18038dcce(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int32_t unaff_0000003c;
  uint64_t unaff_R13;
  int iVar5;
  int64_t unaff_R14;
  uint64_t uVar6;
  int64_t *unaff_R15;
  
  if (*(int64_t *)(param_1 + 0x10) == unaff_RBX) {
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_1 + 0x18);
  }
  else if (*(int64_t *)(param_1 + 0x18) != unaff_RBX) goto LAB_18038dceb;
  *(uint64_t *)(param_1 + 0x18) = CONCAT44(unaff_0000003c,unaff_EDI);
  *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + -1;
LAB_18038dceb:
  *(uint64_t *)(unaff_RBX + 0x78) = CONCAT44(unaff_0000003c,unaff_EDI);
  if (((unaff_R14 != 0) &&
      (*(int64_t *)(unaff_RBX + 0x78) = unaff_R14, *(int64_t *)(unaff_R14 + 0x10) != unaff_RBX))
     && (*(int64_t *)(unaff_R14 + 0x18) != unaff_RBX)) {
    *(int64_t *)(unaff_R14 + 0x10 + (uint64_t)*(byte *)(unaff_R14 + 0x20) * 8) = unaff_RBX;
    *(char *)(unaff_R14 + 0x20) = *(char *)(unaff_R14 + 0x20) + '\x01';
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_R13;
  (**(code **)(unaff_RBP + 0x550))
            (*(uint64_t *)(unaff_RBP + 0x548),*(uint64_t *)(unaff_RBP + 0x528));
  iVar5 = 1;
  do {
    lVar1 = *unaff_R15;
    if (lVar1 != 0) {
      lVar4 = CONCAT44(unaff_0000003c,unaff_EDI);
      if ((uint64_t)*(byte *)(lVar1 + 0xa8) != 0) {
        plVar3 = (int64_t *)(lVar1 + 0x60);
        do {
          lVar2 = *plVar3;
          if (lVar2 == unaff_RSI) {
            if (lVar2 != 0) {
              if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
                *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dd91:
                *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
                *(uint64_t *)(lVar2 + 0x18) = CONCAT44(unaff_0000003c,unaff_EDI);
              }
              else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dd91;
              *(uint64_t *)(lVar1 + 0x60 + lVar4 * 8) = CONCAT44(unaff_0000003c,unaff_EDI);
            }
            break;
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < (int64_t)(uint64_t)*(byte *)(lVar1 + 0xa8));
      }
      FUN_18038cf30();
      FUN_18038aae0();
    }
    unaff_R15 = unaff_R15 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  plVar3 = *(int64_t **)(unaff_RBP + 0x458);
  uVar6 = *(int64_t *)(unaff_RBP + 0x460) - (int64_t)plVar3 >> 3;
  if (uVar6 != 0) {
    do {
      if (unaff_RSI == *plVar3) break;
      unaff_EDI = unaff_EDI + 1;
      plVar3 = plVar3 + 1;
    } while ((uint64_t)(int64_t)unaff_EDI < uVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038dd40(void)
void FUN_18038dd40(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int32_t unaff_0000003c;
  int unaff_R14D;
  uint64_t uVar5;
  int64_t *unaff_R15;
  
  do {
    lVar1 = *unaff_R15;
    if (lVar1 != 0) {
      lVar4 = CONCAT44(unaff_0000003c,unaff_EDI);
      if ((uint64_t)*(byte *)(lVar1 + 0xa8) != 0) {
        plVar3 = (int64_t *)(lVar1 + 0x60);
        do {
          lVar2 = *plVar3;
          if (lVar2 == unaff_RSI) {
            if (lVar2 != 0) {
              if (*(int64_t *)(lVar2 + 0x10) == lVar1) {
                *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038dd91:
                *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
                *(uint64_t *)(lVar2 + 0x18) = CONCAT44(unaff_0000003c,unaff_EDI);
              }
              else if (*(int64_t *)(lVar2 + 0x18) == lVar1) goto LAB_18038dd91;
              *(uint64_t *)(lVar1 + 0x60 + lVar4 * 8) = CONCAT44(unaff_0000003c,unaff_EDI);
            }
            break;
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < (int64_t)(uint64_t)*(byte *)(lVar1 + 0xa8));
      }
      FUN_18038cf30();
      FUN_18038aae0();
    }
    unaff_R15 = unaff_R15 + -1;
    unaff_R14D = unaff_R14D + -1;
  } while (-1 < unaff_R14D);
  plVar3 = *(int64_t **)(unaff_RBP + 0x458);
  uVar5 = *(int64_t *)(unaff_RBP + 0x460) - (int64_t)plVar3 >> 3;
  if (uVar5 != 0) {
    do {
      if (unaff_RSI == *plVar3) break;
      unaff_EDI = unaff_EDI + 1;
      plVar3 = plVar3 + 1;
    } while ((uint64_t)(int64_t)unaff_EDI < uVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_5352_ptr);
}





// 函数: void FUN_18038de80(int64_t param_1,int param_2)
void FUN_18038de80(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  lVar1 = param_1 + (int64_t)param_2 * 4;
  if (0x7ffffffb < *(int *)(lVar1 + 0x558)) {
    iVar3 = 0;
    if (*(int64_t *)(param_1 + 0x480) - *(int64_t *)(param_1 + 0x478) >> 3 != 0) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 8;
        iVar3 = iVar3 + 1;
        *(int32_t *)
         ((int64_t)param_2 * 4 + 0x40 + *(int64_t *)(*(int64_t *)(param_1 + 0x478) + -8 + lVar2))
             = 0;
      } while ((uint64_t)(int64_t)iVar3 <
               (uint64_t)(*(int64_t *)(param_1 + 0x480) - *(int64_t *)(param_1 + 0x478) >> 3));
    }
    *(int32_t *)(lVar1 + 0x558) = 3;
    return;
  }
  *(int *)(lVar1 + 0x558) = *(int *)(lVar1 + 0x558) + 3;
  return;
}





// 函数: void FUN_18038deaa(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18038deaa(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t in_RAX;
  int64_t lVar1;
  int iVar2;
  int64_t in_R10;
  
  iVar2 = 0;
  if (in_RAX >> 3 != 0) {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 8;
      iVar2 = iVar2 + 1;
      *(int32_t *)
       (param_1 * 4 + 0x40 + *(int64_t *)(*(int64_t *)(param_3 + 0x478) + -8 + lVar1)) = 0;
    } while ((uint64_t)(int64_t)iVar2 <
             (uint64_t)(*(int64_t *)(param_3 + 0x480) - *(int64_t *)(param_3 + 0x478) >> 3));
  }
  *(int32_t *)(in_R10 + 0x558) = 3;
  return;
}





// 函数: void FUN_18038df14(void)
void FUN_18038df14(void)

{
  int in_EAX;
  int64_t in_R10;
  
  *(int *)(in_R10 + 0x558) = in_EAX + 3;
  return;
}






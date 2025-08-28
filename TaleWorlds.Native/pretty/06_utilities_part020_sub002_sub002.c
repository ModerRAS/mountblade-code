#include "TaleWorlds.Native.Split.h"

// 06_utilities_part020_sub002_sub002.c - 1 个函数

// 函数: void FUN_18089c61e(void)
void FUN_18089c61e(void)

{
  return;
}



uint64_t FUN_18089c630(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_88;
  uint uStack_84;
  int8_t auStack_80 [32];
  int8_t auStack_60 [40];
  uint64_t uVar6;
  
  uVar5 = 1;
  uVar3 = FUN_1808ddc20(param_2,auStack_60,1,0x4d524150);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_1808ddc20(param_2,auStack_80,0,0x424d5250);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_180899360(param_2,param_1 + 0x10);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar4 = 4;
  uVar6 = 0;
  uVar8 = 0;
  uVar3 = uVar6;
  if (0x6f < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar3 = SystemThreadProcessor(*param_2,param_1 + 0x34,4);
    }
    else {
      uVar3 = 0x1c;
    }
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar9 = uVar8;
  if (*(uint *)(param_2 + 8) < 0x70) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      uVar9 = 0x1c;
      goto LAB_18089c78f;
    }
    plVar1 = (int64_t *)*param_2;
    if (*plVar1 == 0) {
      uVar9 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089c743:
      uVar9 = FUN_180769ed0(*plVar1,auStackX_18,1,1,0);
    }
    else {
      auStackX_20[0] = 0;
      uVar9 = func_0x00018076a7d0(*plVar1,auStackX_20);
      if (uVar9 == 0) {
        if ((uint64_t)auStackX_20[0] + 1 <= (uint64_t)plVar1[2]) goto LAB_18089c743;
        uVar9 = 0x11;
      }
    }
    if (uVar9 == 0) {
      auStackX_20[0] = (uint)((char)auStackX_18[0] != '\0');
      uStack_88 = (uint)((char)auStackX_18[0] == '\0');
      uVar9 = 0;
    }
    else {
      auStackX_20[0] = 0;
      uStack_88 = 1;
      if (uVar9 == 0) {
        uVar9 = uVar8;
      }
    }
  }
  else {
LAB_18089c78f:
    uStack_88 = 1;
    auStackX_20[0] = 0;
  }
  if (uVar9 != 0) {
    return (uint64_t)uVar9;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_18[0] = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,auStackX_18);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar3 = 0x11;
        goto LAB_18089c808;
      }
    }
    uVar3 = FUN_180769ed0(*plVar1,&uStack_84,1,4,0);
  }
LAB_18089c808:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  switch(uStack_84) {
  case 0:
    uVar4 = 0;
    break;
  case 1:
    uVar4 = 1;
    break;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 3;
    break;
  case 4:
    break;
  case 5:
    uVar4 = 5;
    break;
  case 6:
    uVar4 = 6;
    break;
  case 7:
    uVar4 = 7;
    break;
  case 8:
    uVar4 = 8;
    break;
  case 9:
    uVar4 = 9;
    break;
  default:
    uVar3 = 0xd;
    goto LAB_18089c878;
  }
  *(int32_t *)(param_1 + 0x30) = uVar4;
  uVar3 = uVar6;
LAB_18089c878:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808a2740(*param_2,param_1 + 0x50);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x38);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x3c);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x4c);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x40);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x44);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = uVar6;
  if (*(uint *)(param_2 + 8) < 0x70) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      uVar3 = 0x1c;
      goto LAB_18089c9ee;
    }
    plVar1 = (int64_t *)*param_2;
    if (*plVar1 == 0) {
      uVar2 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089c9a8:
      uVar2 = FUN_180769ed0(*plVar1,auStackX_18,1,1,0);
    }
    else {
      uStack_84 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&uStack_84);
      if (uVar2 == 0) {
        if ((uint64_t)uStack_84 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089c9a8;
        uVar2 = 0x11;
      }
    }
    uVar9 = 0;
    if (uVar2 == 0) {
      uVar9 = (uint)((char)auStackX_18[0] != '\0');
      uVar7 = (uint)((char)auStackX_18[0] == '\0');
      uVar3 = 0;
    }
    else {
      uVar7 = 1;
      uVar3 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        uVar3 = uVar6;
      }
    }
  }
  else {
LAB_18089c9ee:
    uVar7 = 1;
    uVar9 = uVar8;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if ((*(uint *)(param_2 + 8) < 0x60) && (uVar3 = func_0x0001808de610(param_2), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar3 = uVar6;
  if (0x51 < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar3 = FUN_1808995c0(*param_2,param_1 + 0x48);
    }
    else {
      uVar3 = 0x1c;
    }
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = uVar6;
  if ((int)param_2[8] - 0x52U < 0x1e) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar1 = (int64_t *)*param_2;
      if (*plVar1 == 0) {
        uVar2 = 0x1c;
      }
      else if (plVar1[2] == 0) {
LAB_18089ca9c:
        uVar2 = FUN_180769ed0(*plVar1,auStackX_18,1,1,0);
      }
      else {
        uStack_84 = 0;
        uVar2 = func_0x00018076a7d0(*plVar1,&uStack_84);
        if (uVar2 == 0) {
          if ((uint64_t)uStack_84 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089ca9c;
          uVar2 = 0x11;
        }
      }
      uVar8 = 0;
      uVar5 = 1;
      if (uVar2 == 0) {
        uVar8 = (uint)((char)auStackX_18[0] != '\0');
        uVar5 = (uint)((char)auStackX_18[0] == '\0');
      }
      uVar3 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        uVar3 = uVar6;
      }
    }
    else {
      uVar3 = 0x1c;
    }
  }
  if ((int)uVar3 == 0) {
    uVar2 = *(uint *)(param_2 + 8);
    if (uVar2 < 0x70) {
      *(uint *)(param_1 + 0x34) =
           (((auStackX_20[0] | *(uint *)(param_1 + 0x34)) & ~uStack_88 | uVar9 * 2) & ~(uVar7 * 2) |
           uVar8 * 4) & ~(uVar5 * 4);
      uVar2 = *(uint *)(param_2 + 8);
    }
    if ((uVar2 < 0x87) && ((*(uint *)(param_1 + 0x34) >> 3 & 1) != 0)) {
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - 1.0;
      uVar2 = *(uint *)(param_2 + 8);
    }
    if (uVar2 < 0x8b) {
LAB_18089cbf6:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,auStack_80);
    }
    auStackX_20[0] = 0;
    uVar3 = FUN_1808afe30(*param_2,auStackX_20);
    uVar5 = auStackX_20[0];
    if ((int)uVar3 == 0) {
      uVar8 = auStackX_20[0] & 1;
      uVar9 = auStackX_20[0] >> 1;
      uVar3 = FUN_1808af8b0(param_1 + 0x60,uVar9);
      if ((int)uVar3 == 0) {
        auStackX_18[0] = 0;
        uVar3 = uVar6;
        if (uVar5 >> 1 != 0) {
          do {
            uVar3 = FUN_1808dde10(param_2,uVar3);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar3 = FUN_1808a2740(*param_2,(int64_t)(int)uVar6 * 0x10 +
                                             *(int64_t *)(param_1 + 0x60));
            }
            else {
              uVar3 = 0x1c;
            }
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808de0e0(param_2,auStackX_18);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar5;
            auStackX_18[0] = auStackX_18[0] & -uVar8;
            uVar3 = (uint64_t)auStackX_18[0];
          } while ((int)uVar5 < (int)uVar9);
        }
        goto LAB_18089cbf6;
      }
    }
  }
  return uVar3;
}



uint64_t FUN_18089c69d(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int in_EAX;
  uint uVar3;
  uint64_t uVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  int64_t unaff_R13;
  uint unaff_R14D;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar9;
  float extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t uVar10;
  float extraout_XMM0_Da_09;
  uint64_t uVar7;
  
  uVar5 = in_EAX + 4;
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = uVar7;
  if (0x6f < *(uint *)(unaff_RBX + 8)) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar4 = SystemThreadProcessor(*unaff_RBX,unaff_R13 + 0x34,(uint64_t)uVar5);
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar8 = uVar6;
  if (*(uint *)(unaff_RBX + 8) < 0x70) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      uVar8 = 0x1c;
      goto LAB_18089c78f;
    }
    plVar1 = (int64_t *)*unaff_RBX;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar8 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089c743:
      uVar8 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D,0);
    }
    else {
      *(int32_t *)(unaff_RBP + 0x7f) = 0;
      uVar8 = func_0x00018076a7d0(lVar2,unaff_RBP + 0x7f);
      if (uVar8 == 0) {
        if ((uint64_t)*(uint *)(unaff_RBP + 0x7f) + 1 <= (uint64_t)plVar1[2]) goto LAB_18089c743;
        uVar8 = 0x11;
      }
    }
    if (uVar8 == 0) {
      *(uint *)(unaff_RBP + 0x7f) = (uint)(*(char *)(unaff_RBP + 0x77) != '\0');
      *(uint *)(unaff_RBP + -0x29) = (uint)(*(char *)(unaff_RBP + 0x77) == '\0');
      uVar8 = 0;
    }
    else {
      *(int32_t *)(unaff_RBP + 0x7f) = 0;
      *(uint *)(unaff_RBP + -0x29) = unaff_R14D;
      if (uVar8 == 0) {
        uVar8 = uVar6;
      }
    }
  }
  else {
LAB_18089c78f:
    *(uint *)(unaff_RBP + -0x29) = unaff_R14D;
    *(int32_t *)(unaff_RBP + 0x7f) = 0;
  }
  if (uVar8 != 0) {
    return (uint64_t)uVar8;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar4 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      *(int32_t *)(unaff_RBP + 0x77) = 0;
      uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + 0x77);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + 0x77) + (uint64_t)uVar5) {
        uVar4 = 0x11;
        goto LAB_18089c808;
      }
    }
    uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + -0x25,unaff_R14D,uVar5,0);
  }
LAB_18089c808:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  switch(*(int32_t *)(unaff_RBP + -0x25)) {
  case 0:
    uVar5 = 0;
    break;
  case 1:
    uVar5 = unaff_R14D;
    break;
  case 2:
    uVar5 = 2;
    break;
  case 3:
    uVar5 = 3;
    break;
  case 4:
    break;
  case 5:
    uVar5 = 5;
    break;
  case 6:
    uVar5 = 6;
    break;
  case 7:
    uVar5 = 7;
    break;
  case 8:
    uVar5 = 8;
    break;
  case 9:
    uVar5 = 9;
    break;
  default:
    uVar4 = 0xd;
    goto LAB_18089c878;
  }
  *(uint *)(unaff_R13 + 0x30) = uVar5;
  uVar4 = uVar7;
LAB_18089c878:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808a2740(*unaff_RBX,unaff_R13 + 0x50);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x38);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x3c);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x4c);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x40);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x44);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = uVar7;
  fVar9 = extraout_XMM0_Da;
  uVar5 = uVar6;
  uVar8 = unaff_R14D;
  if (*(uint *)(unaff_RBX + 8) < 0x70) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      plVar1 = (int64_t *)*unaff_RBX;
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar1[2] == 0) {
LAB_18089c9a8:
        uVar3 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D,0);
        fVar9 = extraout_XMM0_Da_01;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x25) = 0;
        uVar3 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
        fVar9 = extraout_XMM0_Da_00;
        if (uVar3 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2])
          goto LAB_18089c9a8;
          uVar3 = 0x11;
        }
      }
      uVar5 = 0;
      if (uVar3 == 0) {
        uVar4 = 0;
        uVar5 = (uint)(*(char *)(unaff_RBP + 0x77) != '\0');
        uVar8 = (uint)(*(char *)(unaff_RBP + 0x77) == '\0');
      }
      else {
        uVar4 = (uint64_t)uVar3;
        if (uVar3 == 0) {
          uVar4 = uVar7;
        }
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((*(uint *)(unaff_RBX + 8) < 0x60) &&
     (uVar4 = func_0x0001808de610(), fVar9 = extraout_XMM0_Da_02, (int)uVar4 != 0)) {
    return uVar4;
  }
  uVar4 = uVar7;
  if (0x51 < *(uint *)(unaff_RBX + 8)) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar4 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x48);
      fVar9 = extraout_XMM0_Da_03;
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = uVar7;
  if (0x1d < (int)unaff_RBX[8] - 0x52U) goto LAB_18089cad8;
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    uVar4 = 0x1c;
    goto LAB_18089cad8;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar3 = 0x1c;
  }
  else if (plVar1[2] == 0) {
LAB_18089ca9c:
    uVar3 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D,0);
    fVar9 = extraout_XMM0_Da_05;
  }
  else {
    *(int32_t *)(unaff_RBP + -0x25) = 0;
    uVar3 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
    fVar9 = extraout_XMM0_Da_04;
    if (uVar3 == 0) {
      if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2]) goto LAB_18089ca9c;
      uVar3 = 0x11;
    }
  }
  uVar6 = 0;
  if (uVar3 == 0) {
    uVar6 = (uint)(*(char *)(unaff_RBP + 0x77) != '\0');
    unaff_R14D = (uint)(*(char *)(unaff_RBP + 0x77) == '\0');
  }
  uVar4 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar4 = uVar7;
  }
LAB_18089cad8:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar3 = *(uint *)(unaff_RBX + 8);
  if (uVar3 < 0x70) {
    *(uint *)(unaff_R13 + 0x34) =
         (((*(uint *)(unaff_RBP + 0x7f) | *(uint *)(unaff_R13 + 0x34)) &
           ~*(uint *)(unaff_RBP + -0x29) | uVar5 * 2) & ~(uVar8 * 2) | uVar6 * 4) &
         ~(unaff_R14D * 4);
    uVar3 = *(uint *)(unaff_RBX + 8);
  }
  if ((uVar3 < 0x87) && ((*(uint *)(unaff_R13 + 0x34) >> 3 & 1) != 0)) {
    fVar9 = *(float *)(unaff_R13 + 0x3c) - 1.0;
    *(float *)(unaff_R13 + 0x3c) = fVar9;
    uVar3 = *(uint *)(unaff_RBX + 8);
  }
  if (0x8a < uVar3) {
    lVar2 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + 0x7f) = 0;
    uVar4 = FUN_1808afe30(lVar2,unaff_RBP + 0x7f);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar5 = *(uint *)(unaff_RBP + 0x7f);
    uVar4 = FUN_1808af8b0(unaff_R13 + 0x60,uVar5 >> 1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(int32_t *)(unaff_RBP + 0x77) = 0;
    uVar4 = uVar7;
    fVar9 = extraout_XMM0_Da_06;
    if (uVar5 >> 1 != 0) {
      do {
        uVar4 = FUN_1808dde10(fVar9,uVar4);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar4 = FUN_1808a2740(*unaff_RBX,
                                (int64_t)(int)uVar7 * 0x10 + *(int64_t *)(unaff_R13 + 0x60));
          uVar10 = extraout_XMM0_Da_08;
        }
        else {
          uVar4 = 0x1c;
          uVar10 = extraout_XMM0_Da_07;
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808de0e0(uVar10,unaff_RBP + 0x77);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        uVar8 = *(uint *)(unaff_RBP + 0x77) & -(uVar5 & 1);
        uVar4 = (uint64_t)uVar8;
        *(uint *)(unaff_RBP + 0x77) = uVar8;
        fVar9 = extraout_XMM0_Da_09;
      } while ((int)uVar6 < (int)(uVar5 >> 1));
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(fVar9,unaff_RBP + -0x21);
}



uint64_t FUN_18089c86d(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint uVar8;
  uint uVar9;
  uint64_t unaff_RDI;
  int iVar10;
  int64_t unaff_R13;
  int unaff_R14D;
  int iVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar12;
  float extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t uVar13;
  float extraout_XMM0_Da_09;
  
  *(int32_t *)(unaff_R13 + 0x30) = 10;
  if ((int)unaff_RDI != 0) {
    return unaff_RDI & 0xffffffff;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808a2740(*unaff_RBX,unaff_R13 + 0x50);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x38);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x3c);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x4c);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x40);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x44);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar3 = (uint8_t)(unaff_RDI >> 8);
  iVar7 = 0;
  fVar12 = extraout_XMM0_Da;
  iVar11 = iVar7;
  iVar10 = unaff_R14D;
  if (*(uint *)(unaff_RBX + 8) < 0x70) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      plVar1 = (int64_t *)*unaff_RBX;
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        uVar4 = 0x1c;
      }
      else if (plVar1[2] == unaff_RDI) {
LAB_18089c9a8:
        uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
        fVar12 = extraout_XMM0_Da_01;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x25) = 0;
        uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
        fVar12 = extraout_XMM0_Da_00;
        if (uVar4 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2])
          goto LAB_18089c9a8;
          uVar4 = 0x11;
        }
      }
      if (uVar4 == 0) {
        uVar5 = unaff_RDI & 0xffffffff;
        iVar11 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
        iVar10 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
      }
      else {
        uVar5 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          uVar5 = unaff_RDI & 0xffffffff;
        }
      }
    }
    else {
      uVar5 = 0x1c;
    }
  }
  else {
    uVar5 = unaff_RDI & 0xffffffff;
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(uint *)(unaff_RBX + 8) < 0x60) &&
     (uVar5 = func_0x0001808de610(), fVar12 = extraout_XMM0_Da_02, (int)uVar5 != 0)) {
    return uVar5;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x52) {
    uVar5 = unaff_RDI & 0xffffffff;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x48);
    fVar12 = extraout_XMM0_Da_03;
  }
  else {
    uVar5 = 0x1c;
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (0x1d < (int)unaff_RBX[8] - 0x52U) {
    uVar5 = unaff_RDI & 0xffffffff;
    goto LAB_18089cad8;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    uVar5 = 0x1c;
    goto LAB_18089cad8;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar4 = 0x1c;
  }
  else if (plVar1[2] == unaff_RDI) {
LAB_18089ca9c:
    uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
    fVar12 = extraout_XMM0_Da_05;
  }
  else {
    *(int32_t *)(unaff_RBP + -0x25) = 0;
    uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
    fVar12 = extraout_XMM0_Da_04;
    if (uVar4 == 0) {
      if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2]) goto LAB_18089ca9c;
      uVar4 = 0x11;
    }
  }
  if (uVar4 == 0) {
    iVar7 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
    unaff_R14D = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
  }
  uVar5 = (uint64_t)uVar4;
  if (uVar4 == 0) {
    uVar5 = unaff_RDI & 0xffffffff;
  }
LAB_18089cad8:
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar4 = *(uint *)(unaff_RBX + 8);
  if (uVar4 < 0x70) {
    *(uint *)(unaff_R13 + 0x34) =
         (((*(uint *)(unaff_RBP + 0x7f) | *(uint *)(unaff_R13 + 0x34)) &
           ~*(uint *)(unaff_RBP + -0x29) | iVar11 * 2) & ~(iVar10 * 2) | iVar7 * 4) &
         ~(unaff_R14D * 4);
    uVar4 = *(uint *)(unaff_RBX + 8);
  }
  if ((uVar4 < 0x87) && ((*(uint *)(unaff_R13 + 0x34) >> 3 & 1) != 0)) {
    fVar12 = *(float *)(unaff_R13 + 0x3c) - 1.0;
    *(float *)(unaff_R13 + 0x3c) = fVar12;
    uVar4 = *(uint *)(unaff_RBX + 8);
  }
  if (0x8a < uVar4) {
    lVar2 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + 0x7f) = 0;
    uVar5 = FUN_1808afe30(lVar2,unaff_RBP + 0x7f);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar4 = *(uint *)(unaff_RBP + 0x7f);
    uVar5 = FUN_1808af8b0(unaff_R13 + 0x60,uVar4 >> 1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(int32_t *)(unaff_RBP + 0x77) = 0;
    uVar5 = unaff_RDI & 0xffffffff;
    fVar12 = extraout_XMM0_Da_06;
    if (uVar4 >> 1 != 0) {
      do {
        uVar6 = FUN_1808dde10(fVar12,unaff_RDI & 0xffffffff);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar6 = FUN_1808a2740(*unaff_RBX,
                                (int64_t)(int)uVar5 * 0x10 + *(int64_t *)(unaff_R13 + 0x60));
          uVar13 = extraout_XMM0_Da_08;
        }
        else {
          uVar6 = 0x1c;
          uVar13 = extraout_XMM0_Da_07;
        }
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar6 = FUN_1808de0e0(uVar13,unaff_RBP + 0x77);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar8 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar8;
        uVar9 = *(uint *)(unaff_RBP + 0x77) & -(uVar4 & 1);
        unaff_RDI = (uint64_t)uVar9;
        *(uint *)(unaff_RBP + 0x77) = uVar9;
        fVar12 = extraout_XMM0_Da_09;
      } while ((int)uVar8 < (int)(uVar4 >> 1));
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(fVar12,unaff_RBP + -0x21);
}



uint64_t FUN_18089c872(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  uint uVar8;
  uint uVar9;
  uint64_t unaff_RDI;
  int iVar10;
  int64_t unaff_R13;
  int unaff_R14D;
  int iVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar12;
  float extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t uVar13;
  float extraout_XMM0_Da_09;
  
  *(int32_t *)(unaff_R13 + 0x30) = unaff_ESI;
  if ((int)unaff_RDI != 0) {
    return unaff_RDI & 0xffffffff;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808a2740(*unaff_RBX,unaff_R13 + 0x50);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x38);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x3c);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x4c);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x40);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x44);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar3 = (uint8_t)(unaff_RDI >> 8);
  iVar7 = 0;
  fVar12 = extraout_XMM0_Da;
  iVar11 = iVar7;
  iVar10 = unaff_R14D;
  if (*(uint *)(unaff_RBX + 8) < 0x70) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      plVar1 = (int64_t *)*unaff_RBX;
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        uVar4 = 0x1c;
      }
      else if (plVar1[2] == unaff_RDI) {
LAB_18089c9a8:
        uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
        fVar12 = extraout_XMM0_Da_01;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x25) = 0;
        uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
        fVar12 = extraout_XMM0_Da_00;
        if (uVar4 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2])
          goto LAB_18089c9a8;
          uVar4 = 0x11;
        }
      }
      if (uVar4 == 0) {
        uVar5 = unaff_RDI & 0xffffffff;
        iVar11 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
        iVar10 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
      }
      else {
        uVar5 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          uVar5 = unaff_RDI & 0xffffffff;
        }
      }
    }
    else {
      uVar5 = 0x1c;
    }
  }
  else {
    uVar5 = unaff_RDI & 0xffffffff;
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(uint *)(unaff_RBX + 8) < 0x60) &&
     (uVar5 = func_0x0001808de610(), fVar12 = extraout_XMM0_Da_02, (int)uVar5 != 0)) {
    return uVar5;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x52) {
    uVar5 = unaff_RDI & 0xffffffff;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar5 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x48);
    fVar12 = extraout_XMM0_Da_03;
  }
  else {
    uVar5 = 0x1c;
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (0x1d < (int)unaff_RBX[8] - 0x52U) {
    uVar5 = unaff_RDI & 0xffffffff;
    goto LAB_18089cad8;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    uVar5 = 0x1c;
    goto LAB_18089cad8;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar4 = 0x1c;
  }
  else if (plVar1[2] == unaff_RDI) {
LAB_18089ca9c:
    uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
    fVar12 = extraout_XMM0_Da_05;
  }
  else {
    *(int32_t *)(unaff_RBP + -0x25) = 0;
    uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
    fVar12 = extraout_XMM0_Da_04;
    if (uVar4 == 0) {
      if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2]) goto LAB_18089ca9c;
      uVar4 = 0x11;
    }
  }
  if (uVar4 == 0) {
    iVar7 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
    unaff_R14D = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
  }
  uVar5 = (uint64_t)uVar4;
  if (uVar4 == 0) {
    uVar5 = unaff_RDI & 0xffffffff;
  }
LAB_18089cad8:
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar4 = *(uint *)(unaff_RBX + 8);
  if (uVar4 < 0x70) {
    *(uint *)(unaff_R13 + 0x34) =
         (((*(uint *)(unaff_RBP + 0x7f) | *(uint *)(unaff_R13 + 0x34)) &
           ~*(uint *)(unaff_RBP + -0x29) | iVar11 * 2) & ~(iVar10 * 2) | iVar7 * 4) &
         ~(unaff_R14D * 4);
    uVar4 = *(uint *)(unaff_RBX + 8);
  }
  if ((uVar4 < 0x87) && ((*(uint *)(unaff_R13 + 0x34) >> 3 & 1) != 0)) {
    fVar12 = *(float *)(unaff_R13 + 0x3c) - 1.0;
    *(float *)(unaff_R13 + 0x3c) = fVar12;
    uVar4 = *(uint *)(unaff_RBX + 8);
  }
  if (0x8a < uVar4) {
    lVar2 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + 0x7f) = 0;
    uVar5 = FUN_1808afe30(lVar2,unaff_RBP + 0x7f);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar4 = *(uint *)(unaff_RBP + 0x7f);
    uVar5 = FUN_1808af8b0(unaff_R13 + 0x60,uVar4 >> 1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(int32_t *)(unaff_RBP + 0x77) = 0;
    uVar5 = unaff_RDI & 0xffffffff;
    fVar12 = extraout_XMM0_Da_06;
    if (uVar4 >> 1 != 0) {
      do {
        uVar6 = FUN_1808dde10(fVar12,unaff_RDI & 0xffffffff);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar6 = FUN_1808a2740(*unaff_RBX,
                                (int64_t)(int)uVar5 * 0x10 + *(int64_t *)(unaff_R13 + 0x60));
          uVar13 = extraout_XMM0_Da_08;
        }
        else {
          uVar6 = 0x1c;
          uVar13 = extraout_XMM0_Da_07;
        }
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar6 = FUN_1808de0e0(uVar13,unaff_RBP + 0x77);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar8 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar8;
        uVar9 = *(uint *)(unaff_RBP + 0x77) & -(uVar4 & 1);
        unaff_RDI = (uint64_t)uVar9;
        *(uint *)(unaff_RBP + 0x77) = uVar9;
        fVar12 = extraout_XMM0_Da_09;
      } while ((int)uVar8 < (int)(uVar4 >> 1));
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(fVar12,unaff_RBP + -0x21);
}



uint64_t FUN_18089c94a(float param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint64_t unaff_RDI;
  int iVar11;
  int64_t unaff_R13;
  int unaff_R14D;
  int iVar12;
  bool in_CF;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar13;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t uVar14;
  float extraout_XMM0_Da_08;
  
  iVar9 = (int)unaff_RDI;
  uVar3 = (uint8_t)(unaff_RDI >> 8);
  iVar12 = iVar9;
  iVar11 = unaff_R14D;
  if (in_CF) {
    if (*(int *)(unaff_RBX[1] + 0x18) == iVar9) {
      plVar1 = (int64_t *)*unaff_RBX;
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        uVar4 = 0x1c;
      }
      else if (plVar1[2] == unaff_RDI) {
LAB_18089c9a8:
        uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
        param_1 = extraout_XMM0_Da_00;
      }
      else {
        *(int *)(unaff_RBP + -0x25) = iVar9;
        uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
        param_1 = extraout_XMM0_Da;
        if (uVar4 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2])
          goto LAB_18089c9a8;
          uVar4 = 0x11;
        }
      }
      if (uVar4 == 0) {
        uVar6 = unaff_RDI & 0xffffffff;
        iVar12 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
        iVar11 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
      }
      else {
        uVar6 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          uVar6 = unaff_RDI & 0xffffffff;
        }
      }
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else {
    uVar6 = unaff_RDI & 0xffffffff;
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((*(uint *)(unaff_RBX + 8) < 0x60) &&
     (uVar6 = func_0x0001808de610(), param_1 = extraout_XMM0_Da_01, (int)uVar6 != 0)) {
    return uVar6;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x52) {
    uVar6 = unaff_RDI & 0xffffffff;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == iVar9) {
    uVar6 = FUN_1808995c0(*unaff_RBX,unaff_R13 + 0x48);
    param_1 = extraout_XMM0_Da_02;
  }
  else {
    uVar6 = 0x1c;
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  iVar7 = iVar9;
  if ((int)unaff_RBX[8] - 0x52U < 0x1e) {
    if (*(int *)(unaff_RBX[1] + 0x18) == iVar9) {
      plVar1 = (int64_t *)*unaff_RBX;
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        uVar4 = 0x1c;
      }
      else if (plVar1[2] == unaff_RDI) {
LAB_18089ca9c:
        uVar4 = FUN_180769ed0(*plVar1,unaff_RBP + 0x77,unaff_R14D,unaff_R14D);
        param_1 = extraout_XMM0_Da_04;
      }
      else {
        *(int *)(unaff_RBP + -0x25) = iVar9;
        uVar4 = func_0x00018076a7d0(lVar2,unaff_RBP + -0x25);
        param_1 = extraout_XMM0_Da_03;
        if (uVar4 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x25) + 1 <= (uint64_t)plVar1[2])
          goto LAB_18089ca9c;
          uVar4 = 0x11;
        }
      }
      if (uVar4 == 0) {
        iVar7 = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) != '\0');
        unaff_R14D = (int)CONCAT71(uVar3,*(char *)(unaff_RBP + 0x77) == '\0');
      }
      uVar6 = (uint64_t)uVar4;
      if (uVar4 == 0) {
        uVar6 = unaff_RDI & 0xffffffff;
      }
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else {
    uVar6 = unaff_RDI & 0xffffffff;
  }
  if ((int)uVar6 == 0) {
    uVar4 = *(uint *)(unaff_RBX + 8);
    if (uVar4 < 0x70) {
      *(uint *)(unaff_R13 + 0x34) =
           (((*(uint *)(unaff_RBP + 0x7f) | *(uint *)(unaff_R13 + 0x34)) &
             ~*(uint *)(unaff_RBP + -0x29) | iVar12 * 2) & ~(iVar11 * 2) | iVar7 * 4) &
           ~(unaff_R14D * 4);
      uVar4 = *(uint *)(unaff_RBX + 8);
    }
    if ((uVar4 < 0x87) && ((*(uint *)(unaff_R13 + 0x34) >> 3 & 1) != 0)) {
      param_1 = *(float *)(unaff_R13 + 0x3c) - 1.0;
      *(float *)(unaff_R13 + 0x3c) = param_1;
      uVar4 = *(uint *)(unaff_RBX + 8);
    }
    if (uVar4 < 0x8b) {
LAB_18089cbf6:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_1,unaff_RBP + -0x21);
    }
    lVar2 = *unaff_RBX;
    *(int *)(unaff_RBP + 0x7f) = iVar9;
    uVar6 = FUN_1808afe30(lVar2,unaff_RBP + 0x7f);
    if ((int)uVar6 == 0) {
      uVar4 = *(uint *)(unaff_RBP + 0x7f);
      uVar6 = FUN_1808af8b0(unaff_R13 + 0x60,uVar4 >> 1);
      if ((int)uVar6 == 0) {
        *(int *)(unaff_RBP + 0x77) = iVar9;
        uVar6 = unaff_RDI & 0xffffffff;
        param_1 = extraout_XMM0_Da_05;
        fVar13 = extraout_XMM0_Da_05;
        if (uVar4 >> 1 != 0) {
          do {
            uVar5 = FUN_1808dde10(fVar13,unaff_RDI & 0xffffffff);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = FUN_1808a2740(*unaff_RBX,
                                    (int64_t)(int)uVar6 * 0x10 + *(int64_t *)(unaff_R13 + 0x60));
              uVar14 = extraout_XMM0_Da_07;
            }
            else {
              uVar5 = 0x1c;
              uVar14 = extraout_XMM0_Da_06;
            }
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            uVar5 = FUN_1808de0e0(uVar14,unaff_RBP + 0x77);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            uVar8 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar8;
            uVar10 = *(uint *)(unaff_RBP + 0x77) & -(uVar4 & 1);
            unaff_RDI = (uint64_t)uVar10;
            *(uint *)(unaff_RBP + 0x77) = uVar10;
            param_1 = extraout_XMM0_Da_08;
            fVar13 = extraout_XMM0_Da_08;
          } while ((int)uVar8 < (int)(uVar4 >> 1));
        }
        goto LAB_18089cbf6;
      }
    }
  }
  return uVar6;
}








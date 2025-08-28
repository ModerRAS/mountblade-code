/* 函数别名定义: MathStatisticsProcessor */
#define MathStatisticsProcessor MathStatisticsProcessor
#include "CoreSystem_AuthenticationHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part017.c - 9 个函数
// 函数: void UtilitiesSystem_5d7f0(int64_t param_1,int64_t param_2)
void UtilitiesSystem_5d7f0(int64_t param_1,int64_t param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  fVar9 = *(float *)(param_1 + 0x2c);
  fVar12 = (3.0 - (fVar9 + fVar9)) * fVar9 * fVar9;
  fVar9 = 1.0 - fVar12;
  if (*(int *)(param_1 + 0x10) == 1) {
    UtilitiesSystem_60070(*(int64_t *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    UtilitiesSystem_5ffa0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    UtilitiesSystem_60070(*(int64_t *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    UtilitiesSystem_5ffa0((int64_t)*(int *)(param_1 + 0x14) * 0x30 + *(int64_t *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  iVar5 = 0;
  if (0.0 < fVar9) {
    if (*(int *)(param_1 + 0x14) == 5) {
      fVar10 = *(float *)(param_1 + 0x3c);
      if (fVar10 < 1.0) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        fVar3 = *(float *)(param_1 + 0x30);
        puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0xf0);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065da24;
          }
          if (0.001 < (1.0 - fVar10) * fVar9 * fVar11) {
            MemoryManager_Optimizer(*puVar6,param_2);
          }
LAB_18065da24:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
        fVar10 = *(float *)(param_1 + 0x3c);
      }
      if (0.0 < fVar10) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0x120);
        fVar3 = *(float *)(param_1 + 0x30);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065dae7;
          }
          if (0.001 < fVar10 * fVar9 * fVar11) {
            MemoryManager_Optimizer(*puVar6,param_2);
          }
LAB_18065dae7:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
      }
    }
    else {
      UtilitiesSystem_5fdb0((int64_t)*(int *)(param_1 + 0x14) * 0x30 + *(int64_t *)(param_1 + 0xc78),
                    param_2);
    }
  }
  if (*(int *)(param_1 + 0x10) == 5) {
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar10 = -1.0;
    if (fVar9 < 1.0) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar8 = (1.0 - fVar9) * fVar12;
      puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0xf0);
      fVar11 = (1.0 - fVar1) - fVar2;
      fVar9 = -1.0;
      do {
        switch(iVar5) {
        case 0:
          fVar7 = fVar11 * fVar3 * fVar8;
          break;
        case 1:
          fVar7 = (1.0 - fVar3) * fVar11 * fVar8;
          break;
        case 2:
          fVar7 = fVar8 * fVar1;
          break;
        case 3:
          fVar7 = fVar8 * fVar2;
          break;
        default:
          fVar7 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar9 < fVar7)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar9 = fVar7;
        }
        if (0.001 < fVar7) {
          MemoryManager_Optimizer(*puVar6,param_2);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
      fVar9 = *(float *)(param_1 + 0x3c);
    }
    iVar5 = 0;
    if (0.0 < fVar9) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0x120);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar9 = fVar9 * fVar12;
      fVar12 = (1.0 - fVar1) - fVar2;
      do {
        switch(iVar5) {
        case 0:
          fVar8 = fVar12 * fVar3 * fVar9;
          break;
        case 1:
          fVar8 = (1.0 - fVar3) * fVar12 * fVar9;
          break;
        case 2:
          fVar8 = fVar9 * fVar1;
          break;
        case 3:
          fVar8 = fVar9 * fVar2;
          break;
        default:
          fVar8 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar10 < fVar8)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar10 = fVar8;
        }
        if (0.001 < fVar8) {
          MemoryManager_Optimizer(*puVar6,param_2);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
    }
  }
  else {
    UtilitiesSystem_5fdb0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78),param_2
                 );
  }
  if (*(int64_t *)(param_2 + 0x808) != 0) {
    Function_6dad80dd(param_2);
  }
  return;
}
// 函数: void UtilitiesSystem_5d804(int64_t param_1,float param_2)
void UtilitiesSystem_5d804(int64_t param_1,float param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int iVar4;
  int iVar5;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t *puVar6;
  uint64_t unaff_R15;
  float fVar7;
  int32_t unaff_XMM6_Da;
  float fVar8;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar9;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float fVar10;
  float fVar11;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar12;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM15_Dd;
  fVar12 = (3.0 - (param_2 + param_2)) * param_2 * param_2;
  fVar9 = 1.0 - fVar12;
  if (*(int *)(param_1 + 0x10) == 1) {
    UtilitiesSystem_60070(*(int64_t *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    UtilitiesSystem_5ffa0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    UtilitiesSystem_60070(*(int64_t *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    UtilitiesSystem_5ffa0((int64_t)*(int *)(param_1 + 0x14) * 0x30 + *(int64_t *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  iVar5 = 0;
  if (0.0 < fVar9) {
    if (*(int *)(param_1 + 0x14) == 5) {
      fVar10 = *(float *)(param_1 + 0x3c);
      if (fVar10 < 1.0) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        fVar3 = *(float *)(param_1 + 0x30);
        puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0xf0);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065da24;
          }
          if (0.001 < (1.0 - fVar10) * fVar9 * fVar11) {
            MemoryManager_Optimizer(*puVar6);
          }
LAB_18065da24:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
        fVar10 = *(float *)(param_1 + 0x3c);
      }
      if (0.0 < fVar10) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0x120);
        fVar3 = *(float *)(param_1 + 0x30);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065dae7;
          }
          if (0.001 < fVar10 * fVar9 * fVar11) {
            MemoryManager_Optimizer(*puVar6);
          }
LAB_18065dae7:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
      }
    }
    else {
      UtilitiesSystem_5fdb0((int64_t)*(int *)(param_1 + 0x14) * 0x30 + *(int64_t *)(param_1 + 0xc78));
    }
  }
  if (*(int *)(param_1 + 0x10) == 5) {
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar10 = -1.0;
    if (fVar9 < 1.0) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar8 = (1.0 - fVar9) * fVar12;
      puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0xf0);
      fVar11 = (1.0 - fVar1) - fVar2;
      fVar9 = -1.0;
      do {
        switch(iVar5) {
        case 0:
          fVar7 = fVar11 * fVar3 * fVar8;
          break;
        case 1:
          fVar7 = (1.0 - fVar3) * fVar11 * fVar8;
          break;
        case 2:
          fVar7 = fVar8 * fVar1;
          break;
        case 3:
          fVar7 = fVar8 * fVar2;
          break;
        default:
          fVar7 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar9 < fVar7)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar9 = fVar7;
        }
        if (0.001 < fVar7) {
          MemoryManager_Optimizer(*puVar6);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
      fVar9 = *(float *)(param_1 + 0x3c);
    }
    iVar5 = 0;
    if (0.0 < fVar9) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xc78) + 0x120);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar9 = fVar9 * fVar12;
      fVar12 = (1.0 - fVar1) - fVar2;
      do {
        switch(iVar5) {
        case 0:
          fVar8 = fVar12 * fVar3 * fVar9;
          break;
        case 1:
          fVar8 = (1.0 - fVar3) * fVar12 * fVar9;
          break;
        case 2:
          fVar8 = fVar9 * fVar1;
          break;
        case 3:
          fVar8 = fVar9 * fVar2;
          break;
        default:
          fVar8 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar10 < fVar8)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar10 = fVar8;
        }
        if (0.001 < fVar8) {
          MemoryManager_Optimizer(*puVar6);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
    }
  }
  else {
    UtilitiesSystem_5fdb0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78));
  }
  if (*(int64_t *)(unaff_R12 + 0x808) != 0) {
    Function_6dad80dd();
  }
  return;
}
// 函数: void UtilitiesSystem_5d902(int32_t param_1)
void UtilitiesSystem_5d902(int32_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int64_t unaff_RBX;
  uint uVar4;
  uint uVar5;
  int64_t unaff_R12;
  uint64_t *puVar6;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uVar5 = 0;
  if (0.0 < unaff_XMM7_Da) {
    if (*(int *)(unaff_RBX + 0x14) == 5) {
      fVar8 = *(float *)(unaff_RBX + 0x3c);
      if (fVar8 < unaff_XMM12_Da) {
        param_1 = 0x3f800000;
        uVar4 = uVar5;
        do {
          if (uVar4 < 6) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)*(uint *)(unaff_R15 + 0x65ded4 + (int64_t)(int)uVar4 * 4) +
                         unaff_R15);
// WARNING: Could not recover jumptable at 0x00018065d9d3. Too many branches
// WARNING: Treating indirect jump as call
            (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 6);
        fVar8 = *(float *)(unaff_RBX + 0x3c);
        unaff_XMM12_Da = 1.0;
      }
      uVar4 = uVar5;
      if (0.0 < fVar8) {
        do {
          if (uVar4 < 6) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)*(uint *)(unaff_R15 + 0x65deec + (int64_t)(int)uVar4 * 4) +
                         unaff_R15);
// WARNING: Could not recover jumptable at 0x00018065da9b. Too many branches
// WARNING: Treating indirect jump as call
            (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 6);
      }
    }
    else {
      param_1 = UtilitiesSystem_5fdb0((int64_t)*(int *)(unaff_RBX + 0x14) * 0x30 +
                              *(int64_t *)(unaff_RBX + 0xc78));
    }
  }
  if (*(int *)(unaff_RBX + 0x10) == 5) {
    fVar8 = *(float *)(unaff_RBX + 0x3c);
    fVar10 = -1.0;
    if (fVar8 < unaff_XMM12_Da) {
      fVar1 = *(float *)(unaff_RBX + 0x34);
      fVar2 = *(float *)(unaff_RBX + 0x38);
      fVar3 = *(float *)(unaff_RBX + 0x30);
      fVar9 = (1.0 - fVar8) * unaff_XMM15_Da;
      puVar6 = (uint64_t *)(*(int64_t *)(unaff_RBX + 0xc78) + 0xf0);
      fVar11 = (1.0 - fVar1) - fVar2;
      fVar8 = -1.0;
      do {
        switch(uVar5) {
        case 0:
          fVar7 = fVar11 * fVar3 * fVar9;
          break;
        case 1:
          fVar7 = (1.0 - fVar3) * fVar11 * fVar9;
          break;
        case 2:
          fVar7 = fVar9 * fVar1;
          break;
        case 3:
          fVar7 = fVar9 * fVar2;
          break;
        default:
          fVar7 = 0.0;
        }
        if (((uint *)(unaff_RBX + 0xc84) != (uint *)0x0) && (fVar8 < fVar7)) {
          *(uint *)(unaff_RBX + 0xc84) = uVar5;
          fVar8 = fVar7;
        }
        if (0.001 < fVar7) {
          MemoryManager_Optimizer(*puVar6);
        }
        param_1 = 0x3f800000;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)uVar5 < 6);
      fVar8 = *(float *)(unaff_RBX + 0x3c);
      unaff_R15 = 0x180000000;
      unaff_XMM14_Da = 0.001;
    }
    uVar5 = 0;
    if (0.0 < fVar8) {
      puVar6 = (uint64_t *)(*(int64_t *)(unaff_RBX + 0xc78) + 0x120);
      do {
        if (uVar5 < 6) {
// WARNING: Could not recover jumptable at 0x00018065dd17. Too many branches
// WARNING: Treating indirect jump as call
          (*(code *)((uint64_t)*(uint *)(unaff_R15 + 0x65df1c + (int64_t)(int)uVar5 * 4) +
                    unaff_R15))(0x3f800000);
          return;
        }
        if (((uint *)(unaff_RBX + 0xc84) != (uint *)0x0) && (fVar10 < 0.0)) {
          fVar10 = 0.0;
          *(uint *)(unaff_RBX + 0xc84) = uVar5;
        }
        if (unaff_XMM14_Da < 0.0) {
          MemoryManager_Optimizer(*puVar6);
        }
        param_1 = 0x3f800000;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)uVar5 < 6);
    }
  }
  else {
    param_1 = UtilitiesSystem_5fdb0((int64_t)*(int *)(unaff_RBX + 0x10) * 0x30 +
                            *(int64_t *)(unaff_RBX + 0xc78));
  }
  if (*(int64_t *)(unaff_R12 + 0x808) != 0) {
    Function_6dad80dd(param_1);
  }
  return;
}
// 函数: void UtilitiesSystem_5dec1(void)
void UtilitiesSystem_5dec1(void)
{
  Function_6dad80dd();
  return;
}
// 函数: void UtilitiesSystem_5df80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
void UtilitiesSystem_5df80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  float param_5,float param_6)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  fVar6 = 1.0;
  fVar5 = 1.0;
  fVar7 = 1.0;
  fVar8 = 1.0;
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  param_1[3] = param_4[3];
  param_1[4] = param_4[4];
  param_1[5] = param_4[5];
  param_1[6] = param_4[6];
  param_1[7] = param_4[7];
  param_1[8] = param_4[8];
  param_1[9] = param_4[9];
  param_1[10] = param_4[10];
  param_1[0xb] = param_4[0xb];
  param_1[0xc] = param_4[0xc];
  param_1[0xd] = param_4[0xd];
  param_1[0xe] = param_4[0xe];
  param_1[0xf] = param_4[0xf];
  param_1[0x10] = param_4[0x10];
  param_1[0x11] = param_4[0x11];
  lVar1 = MathStatisticsProcessor0();
  fVar9 = *(float *)(lVar1 + 8) / (param_6 * *(float *)(param_1[3] + 0x188));
  lVar1 = MathStatisticsProcessor0(param_1[4]);
  fVar10 = *(float *)(lVar1 + 8) / (param_6 * *(float *)(param_1[4] + 0x188));
  lVar1 = MathStatisticsProcessor0(param_1[1]);
  fVar4 = *(float *)(lVar1 + 8) / *(float *)(param_1[1] + 0x188);
  lVar1 = MathStatisticsProcessor0(param_1[2]);
  param_5 = param_5 * *(float *)(param_1[2] + 0x188);
  fVar2 = fVar10;
  if (fVar9 <= fVar10) {
    fVar2 = fVar9;
  }
  fVar3 = *(float *)(lVar1 + 8) / param_5;
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar2 < fVar9) {
    fVar6 = fVar2 / fVar9;
  }
  if (fVar2 < fVar10) {
    fVar8 = fVar2 / fVar10;
  }
  if (fVar2 < fVar4) {
    fVar7 = fVar2 / fVar4;
  }
  if (fVar2 < fVar3) {
    fVar5 = (param_5 * fVar2) / *(float *)(lVar1 + 8);
  }
  lVar1 = MathStatisticsProcessor0(param_1[3]);
  *(float *)(param_1 + 0x12) = (fVar6 * *(float *)(lVar1 + 8)) / *(float *)(param_1[3] + 0x188);
  lVar1 = MathStatisticsProcessor0(param_1[4]);
  *(float *)((int64_t)param_1 + 0x94) =
       (fVar8 * *(float *)(lVar1 + 8)) / *(float *)(param_1[4] + 0x188);
  lVar1 = MathStatisticsProcessor0(param_1[1]);
  *(float *)((int64_t)param_1 + 0x9c) =
       (fVar7 * *(float *)(lVar1 + 8)) / *(float *)(param_1[1] + 0x188);
  lVar1 = MathStatisticsProcessor0(param_1[2]);
  *(float *)(param_1 + 0x13) = (fVar5 * *(float *)(lVar1 + 8)) / *(float *)(param_1[2] + 0x188);
  return;
}
// 函数: void UtilitiesSystem_5e200(void)
void UtilitiesSystem_5e200(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void UtilitiesSystem_5e276(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void UtilitiesSystem_5e276(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t *plVar2;
  int8_t *puVar3;
  int64_t lVar4;
  float *pfVar5;
  uint64_t uVar6;
  float fVar7;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  int64_t lStack0000000000000048;
  uint64_t local_buffer_58;
  fVar7 = **(float **)(unaff_RBP + 0x10d0);
  fVar7 = ((fVar7 * 6.0 - 15.0) * fVar7 + 10.0) * fVar7 * fVar7 * fVar7 +
          (*(float **)(unaff_RBP + 0x10d0))[9];
  lStack0000000000000048 = param_1;
  local_buffer_58 = param_4;
  if ((1e-06 < fVar7) && (*(int64_t *)(param_3 + 0x810) != 0)) {
    puVar3 = &local_buffer_00000060;
    uVar6 = unaff_RDI & 0xffffffff;
    do {
      Function_3e2a2a4f(puVar3);
      puVar3 = puVar3 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar4 = unaff_RBP + 0x780;
    do {
      Function_3e2a2a4f(lVar4);
      lVar4 = lVar4 + 0x10;
      unaff_RDI = unaff_RDI - 1;
    } while (unaff_RDI != 0);
// WARNING: Subroutine does not return
    memset(&local_buffer_00000060,0,0x1050);
  }
  if (fVar7 < 1.0) {
    puVar3 = &local_buffer_00000060;
    uVar6 = unaff_RDI;
    do {
      Function_3e2a2a4f(puVar3);
      puVar3 = puVar3 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar4 = unaff_RBP + 0x780;
    do {
      Function_3e2a2a4f(lVar4);
      lVar4 = lVar4 + 0x10;
      unaff_RDI = unaff_RDI - 1;
    } while (unaff_RDI != 0);
// WARNING: Subroutine does not return
    memset(&local_buffer_00000060,0,0x1050);
  }
  iVar1 = 10;
  pfVar5 = *(float **)(unaff_RBP + 0x10d0);
  plVar2 = (int64_t *)(param_1 + 0x50);
  do {
    pfVar5 = pfVar5 + 1;
    if ((*plVar2 != 0) && (unaff_XMM15_Da < unaff_XMM12_Da * *pfVar5)) {
      MemoryManager_Optimizer(*plVar2,param_4);
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0x12);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xfb0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_5e9a5(void)
void UtilitiesSystem_5e9a5(void)
{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int iVar6;
  char cVar7;
  byte bVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *pfVar9;
  int64_t *plVar10;
  char cVar11;
  uint64_t uVar12;
  char unaff_R12B;
  int64_t unaff_R13;
  int64_t lVar13;
  bool in_ZF;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t in_XMM2 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  uint unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar25;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  float fStack000000000000003c;
  int64_t local_var_40;
  int64_t local_var_48;
  int64_t local_buffer_50;
  uint64_t local_buffer_58;
  fVar25 = unaff_XMM10_Da * unaff_XMM12_Da;
  if (!in_ZF) {
    cVar11 = *(char *)(unaff_RBP + 4000);
    uVar12 = 0;
    if ('\0' < cVar11) {
      do {
        cVar7 = (char)uVar12;
        if ((*(uint64_t *)(unaff_RBP + 0x770) >> (uVar12 & 0x3f) & 1) != 0) {
          pfVar9 = (float *)(unaff_RBP + 0x780 + (int64_t)cVar7 * 0x10);
          fVar22 = *pfVar9;
          fVar15 = pfVar9[1];
          fVar20 = pfVar9[2];
          fVar2 = pfVar9[3];
          fVar19 = fVar2 * fVar2 + fVar22 * fVar22;
          fVar21 = fVar20 * fVar20 + fVar15 * fVar15;
          fVar23 = fVar19 + fVar15 * fVar15 + fVar20 * fVar20;
          fVar24 = fVar21 + fVar22 * fVar22 + fVar2 * fVar2;
          auVar4._4_4_ = fVar19 + fVar21 + 1.1754944e-38;
          auVar4._0_4_ = fVar21 + fVar19 + 1.1754944e-38;
          auVar4._8_4_ = fVar23 + 1.1754944e-38;
          auVar4._12_4_ = fVar24 + 1.1754944e-38;
          in_XMM2 = rsqrtps(in_XMM2,auVar4);
          fVar14 = in_XMM2._0_4_;
          fVar16 = in_XMM2._4_4_;
          fVar17 = in_XMM2._8_4_;
          fVar18 = in_XMM2._12_4_;
          pfVar9 = (float *)(unaff_RBP + 0x780 + (int64_t)cVar7 * 0x10);
          *pfVar9 = (3.0 - fVar14 * fVar14 * (fVar21 + fVar19)) * fVar14 * 0.5 * fVar22;
          pfVar9[1] = (3.0 - fVar16 * fVar16 * (fVar19 + fVar21)) * fVar16 * 0.5 * fVar15;
          pfVar9[2] = (3.0 - fVar17 * fVar17 * fVar23) * fVar17 * 0.5 * fVar20;
          pfVar9[3] = (3.0 - fVar18 * fVar18 * fVar24) * fVar18 * 0.5 * fVar2;
          cVar11 = *(char *)(unaff_RBP + 4000);
        }
        uVar12 = (uint64_t)(byte)(cVar7 + 1U);
      } while ((char)(cVar7 + 1U) < cVar11);
    }
    if (unaff_R12B != '\0') {
      pfVar3 = *(float **)(unaff_RBP + 0x10d8);
      pfVar9 = (float *)(unaff_R13 + 4);
      lVar13 = 0;
      do {
        bVar8 = *(byte *)(local_var_40 + lVar13);
        if ((*(uint64_t *)(unaff_RBP + 0x770) >> ((uint64_t)bVar8 & 0x3f) & 1) != 0) {
          SystemErrorHandler(&local_buffer_00000060);
          fVar22 = pfVar3[1];
          fVar15 = *pfVar3;
          pfVar1 = (float *)(unaff_RBP + 0x360 + (int64_t)(char)bVar8 * 0x10);
          fVar2 = pfVar1[2];
          fVar20 = *(float *)((int64_t)(char)bVar8 * 0x1b0 + 0x38 +
                             *(int64_t *)(unaff_RSI + 0x140));
          fVar21 = (fVar15 * *pfVar1 + fVar22 * pfVar1[1]) * pfVar9[0x16];
          fVar19 = fVar15 * pfVar1[1] - fVar22 * *pfVar1;
          pfVar9[-1] = (fVar15 * fVar21 - fVar22 * fVar19) * unaff_XMM10_Da + pfVar9[-1];
          *pfVar9 = (fVar15 * fVar19 + fVar22 * fVar21) * unaff_XMM10_Da + *pfVar9;
          pfVar9[1] = ((fVar2 - fVar20) * (pfVar9[0x16] + 1.0) * 0.5 + fVar20) * unaff_XMM10_Da +
                      pfVar9[1];
        }
        lVar13 = lVar13 + 1;
        pfVar9 = pfVar9 + 0x19;
        unaff_RBX = local_buffer_50;
      } while (lVar13 < 2);
    }
  }
  fVar22 = *(float *)(unaff_R13 + 0xc0);
  bVar8 = 0;
  fVar15 = *(float *)(unaff_R13 + 0x5c);
  fStack000000000000003c = *(float *)(unaff_RBX + 0x102c);
  fVar20 = *(float *)(unaff_RBP + 0xf88);
  fVar2 = *(float *)(unaff_RBP + 0xf80);
  *(uint64_t *)(unaff_RBX + 0x800) =
       *(uint64_t *)(unaff_RBX + 0x800) | *(uint64_t *)(unaff_RBX + 0x810);
  fVar19 = *(float *)(unaff_RBP + 0xf84);
  *(float *)(unaff_RBX + 0x1020) = fVar2 * fVar25 + *(float *)(unaff_RBX + 0x1020);
  *(float *)(unaff_RBX + 0x1024) = *(float *)(unaff_RBX + 0x1024) + fVar19 * fVar25;
  *(float *)(unaff_RBX + 0x1028) =
       (fVar20 * fVar25 + *(float *)(unaff_RBX + 0x1028)) -
       (0.5 - (fVar22 + fVar15) * 0.25) * fVar20 * fVar25;
  *(float *)(unaff_RBX + 0x102c) = fStack000000000000003c;
  if ('\0' < *(char *)(unaff_RBX + 0x1040)) {
    do {
      if ((*(uint64_t *)(unaff_RBX + 0x810) >> ((uint64_t)bVar8 & 0x3f) & 1) != 0) {
        uVar12 = (uint64_t)(char)bVar8;
        pfVar9 = (float *)(unaff_RBP + 0x780 + uVar12 * 0x10);
        fVar22 = *pfVar9;
        fVar15 = pfVar9[1];
        fVar20 = pfVar9[2];
        fStack000000000000003c = pfVar9[3];
        pfVar9 = (float *)(unaff_RBX + (uVar12 + 0x82) * 0x10);
        fVar2 = pfVar9[1];
        fVar19 = pfVar9[2];
        fVar21 = pfVar9[3];
        fVar14 = *pfVar9 * fVar22;
        fVar16 = fVar2 * fVar15;
        fVar17 = fVar19 * fVar20;
        fVar18 = fVar21 * fStack000000000000003c;
        fVar23 = fVar18 + fVar14;
        fVar24 = fVar17 + fVar16;
        auVar5._4_4_ = fVar23 + fVar24;
        auVar5._0_4_ = fVar24 + fVar23;
        auVar5._8_4_ = fVar23 + fVar16 + fVar17;
        auVar5._12_4_ = fVar24 + fVar14 + fVar18;
        iVar6 = movmskps((char)bVar8 * 2,auVar5);
        if (iVar6 != 0) {
          fVar22 = (float)((uint)fVar22 ^ unaff_XMM9_Da);
          fVar15 = (float)((uint)fVar15 ^ unaff_XMM9_Da);
          fVar20 = (float)((uint)fVar20 ^ unaff_XMM9_Da);
          fStack000000000000003c = (float)((uint)fStack000000000000003c ^ unaff_XMM9_Da);
        }
        pfVar3 = (float *)(unaff_RBX + (uVar12 + 0x82) * 0x10);
        *pfVar3 = *pfVar9 + fVar25 * fVar22;
        pfVar3[1] = fVar2 + fVar25 * fVar15;
        pfVar3[2] = fVar19 + fVar25 * fVar20;
        pfVar3[3] = fVar21 + fVar25 * fStack000000000000003c;
        *(uint64_t *)(unaff_RBX + 0x800) =
             *(uint64_t *)(unaff_RBX + 0x800) |
             *(uint64_t *)(uVar12 * 0x1b0 + 0xe8 + *(int64_t *)(unaff_RSI + 0x140));
        *(uint64_t *)(unaff_RBX + 0x808) =
             *(uint64_t *)(unaff_RBX + 0x808) | 1L << (uVar12 & 0x3f);
      }
      bVar8 = bVar8 + 1;
    } while ((char)bVar8 < *(char *)(unaff_RBX + 0x1040));
  }
  fVar25 = *(float *)(unaff_RBP + 0x1108);
  iVar6 = 10;
  pfVar9 = *(float **)(unaff_RBP + 0x10d0);
  plVar10 = (int64_t *)(local_var_48 + 0x50);
  do {
    pfVar9 = pfVar9 + 1;
    if ((*plVar10 != 0) && (unaff_XMM15_Da < fVar25 * *pfVar9)) {
      MemoryManager_Optimizer(*plVar10,local_buffer_58);
    }
    iVar6 = iVar6 + 1;
    plVar10 = plVar10 + 1;
  } while (iVar6 < 0x12);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xfb0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_5ed75(void)
void UtilitiesSystem_5ed75(void)
{
  int iVar1;
  int64_t unaff_RBP;
  int64_t *plVar2;
  float *pfVar3;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  int64_t local_var_48;
  uint64_t local_buffer_58;
  iVar1 = 10;
  pfVar3 = *(float **)(unaff_RBP + 0x10d0);
  plVar2 = (int64_t *)(local_var_48 + 0x50);
  do {
    pfVar3 = pfVar3 + 1;
    if ((*plVar2 != 0) && (unaff_XMM15_Da < unaff_XMM12_Da * *pfVar3)) {
      MemoryManager_Optimizer(*plVar2,local_buffer_58);
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0x12);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xfb0) ^ (uint64_t)&local_buffer_00000000);
}
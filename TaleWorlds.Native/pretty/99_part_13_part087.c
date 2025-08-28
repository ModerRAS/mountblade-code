#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part087.c - 6 个函数

// 函数: void FUN_1808e5800(int64_t *param_1,int64_t param_2,int param_3,int32_t param_4)
void FUN_1808e5800(int64_t *param_1,int64_t param_2,int param_3,int32_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t auStack_a8 [32];
  int8_t auStack_88 [40];
  uint64_t uStack_60;
  
  uStack_60 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  lVar13 = (int64_t)(int)param_1[4];
  plVar1 = param_1 + 0x13;
  uVar11 = 1;
  uVar8 = (int)*(uint *)((int64_t)param_1 + 0x24) >> 0x1f;
  if (((int)param_1[4] + 1 <= (int)((*(uint *)((int64_t)param_1 + 0x24) ^ uVar8) - uVar8)) ||
     (iVar4 = FUN_180882dd0(param_1 + 3), iVar4 == 0)) {
    lVar12 = param_1[3];
    *(uint64_t *)(lVar12 + lVar13 * 0x28) = 0;
    *(uint64_t *)(lVar12 + 8 + lVar13 * 0x28) = 0;
    *(uint64_t *)(lVar12 + 0x10 + lVar13 * 0x28) = 0;
    *(uint64_t *)(lVar12 + 0x18 + lVar13 * 0x28) = 0;
    *(uint64_t *)(lVar12 + 0x20 + lVar13 * 0x28) = 0;
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    puVar6 = system_system_config;
    if (plVar1 != (int64_t *)0x0) {
      puVar6 = (uint64_t *)(param_1[3] + lVar13 * 0x28);
      *plVar1 = (int64_t)puVar6;
    }
    iVar4 = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6 = (uint64_t *)*plVar1;
    uVar2 = *(uint64_t *)(param_2 + 0x18);
    *puVar6 = *(uint64_t *)(param_2 + 0x10);
    puVar6[1] = uVar2;
    if ((((*(int *)(param_2 + 0x60) == 0) && (*(int *)(param_2 + 100) == 0)) &&
        (*(int *)(param_2 + 0x68) == 0)) && (*(int *)(param_2 + 0x6c) == 0)) {
      uVar11 = 0;
      uVar8 = 0xfffffffe;
    }
    else {
      uVar8 = 0xffffffff;
    }
    *(uint *)(*plVar1 + 0x10) = (uVar11 | *(uint *)(*plVar1 + 0x10)) & uVar8;
    *(int *)(*plVar1 + 0x18) = param_3;
    *(int32_t *)(*plVar1 + 0x14) = param_4;
    if (param_3 != 0) {
      *(int *)(*plVar1 + 0x1c) = (int)param_1[6];
      uVar8 = (int)*(uint *)((int64_t)param_1 + 0x34) >> 0x1f;
      param_3 = (int)param_1[6] + param_3;
      iVar5 = (*(uint *)((int64_t)param_1 + 0x34) ^ uVar8) - uVar8;
      if (iVar5 < param_3) {
        iVar9 = (int)((float)iVar5 * 1.5);
        iVar5 = param_3;
        if (param_3 <= iVar9) {
          iVar5 = iVar9;
        }
        iVar7 = iVar4;
        if ((-1 < iVar5) && (iVar7 = iVar9, iVar9 < param_3)) {
          iVar7 = param_3;
        }
        iVar5 = FUN_180882c70(param_1 + 5,iVar7);
        if (iVar5 != 0) goto FUN_1808e5a7a;
      }
      iVar5 = *(int *)(param_2 + 0x88);
      *(int *)(*plVar1 + 0x20) = iVar5;
      *(int *)(*plVar1 + 0x24) = (int)param_1[8];
      iVar9 = FUN_1808e5270(param_1 + 7,(int)param_1[8] + iVar5);
      if ((iVar9 == 0) && (0 < iVar5)) {
        do {
          lVar12 = (int64_t)iVar4 * 0x10 + *(int64_t *)(param_2 + 0x80);
          lVar13 = (**(code **)(**(int64_t **)(*param_1 + 800) + 0x270))
                             (*(int64_t **)(*param_1 + 800),lVar12,1);
          if (lVar13 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar12,auStack_88);
          }
          uVar2 = *(uint64_t *)(lVar13 + 0x38);
          uVar3 = *(uint64_t *)(lVar13 + 0x40);
          uVar8 = (int)*(uint *)((int64_t)param_1 + 0x44) >> 0x1f;
          iVar7 = (int)param_1[8] + 1;
          iVar9 = (*(uint *)((int64_t)param_1 + 0x44) ^ uVar8) - uVar8;
          if (iVar9 < iVar7) {
            iVar10 = (int)((float)iVar9 * 1.5);
            iVar9 = iVar7;
            if (iVar7 <= iVar10) {
              iVar9 = iVar10;
            }
            if (iVar9 < 4) {
              iVar10 = 4;
            }
            else if (iVar10 < iVar7) {
              iVar10 = iVar7;
            }
            iVar9 = FUN_180748010(param_1 + 7,iVar10);
            if (iVar9 != 0) break;
          }
          puVar6 = (uint64_t *)((int64_t)(int)param_1[8] * 0x10 + param_1[7]);
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          *(int *)(param_1 + 8) = (int)param_1[8] + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
  }
FUN_1808e5a7a:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_60 ^ (uint64_t)auStack_a8);
}






// 函数: void FUN_1808e591e(uint param_1)
void FUN_1808e591e(uint param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  uint64_t *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  int64_t lVar10;
  int32_t unaff_R12D;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  float unaff_XMM7_Da;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  *(uint *)(in_RAX + 0x10) = (unaff_EDI | *(uint *)(in_RAX + 0x10)) & param_1;
  *(int *)(*unaff_RBX + 0x18) = unaff_EBP;
  *(int32_t *)(*unaff_RBX + 0x14) = unaff_R12D;
  if (unaff_EBP != 0) {
    *(int *)(*unaff_RBX + 0x1c) = (int)unaff_R15[6];
    uVar7 = (int)*(uint *)((int64_t)unaff_R15 + 0x34) >> 0x1f;
    iVar6 = (int)unaff_R15[6] + unaff_EBP;
    iVar3 = (*(uint *)((int64_t)unaff_R15 + 0x34) ^ uVar7) - uVar7;
    if (iVar3 < iVar6) {
      iVar8 = (int)((float)iVar3 * unaff_XMM7_Da);
      iVar3 = iVar6;
      if (iVar6 <= iVar8) {
        iVar3 = iVar8;
      }
      iVar9 = unaff_ESI;
      if ((-1 < iVar3) && (iVar9 = iVar8, iVar8 < iVar6)) {
        iVar9 = iVar6;
      }
      iVar3 = FUN_180882c70(unaff_R15 + 5,iVar9);
      if (iVar3 != 0) goto LAB_1808e5a75;
    }
    iVar3 = *(int *)(unaff_R14 + 0x88);
    *(int *)(*unaff_RBX + 0x20) = iVar3;
    *(int *)(*unaff_RBX + 0x24) = (int)unaff_R15[8];
    iVar6 = FUN_1808e5270(unaff_R15 + 7,(int)unaff_R15[8] + iVar3);
    if ((iVar6 == 0) && (0 < iVar3)) {
      do {
        lVar10 = (int64_t)unaff_ESI * 0x10 + *(int64_t *)(unaff_R14 + 0x80);
        lVar4 = (**(code **)(**(int64_t **)(*unaff_R15 + 800) + 0x270))
                          (*(int64_t **)(*unaff_R15 + 800),lVar10,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar10,auStackX_20);
        }
        uVar1 = *(uint64_t *)(lVar4 + 0x38);
        uVar2 = *(uint64_t *)(lVar4 + 0x40);
        uVar7 = (int)*(uint *)((int64_t)unaff_R15 + 0x44) >> 0x1f;
        iVar8 = (int)unaff_R15[8] + 1;
        iVar6 = (*(uint *)((int64_t)unaff_R15 + 0x44) ^ uVar7) - uVar7;
        if (iVar6 < iVar8) {
          iVar9 = (int)((float)iVar6 * unaff_XMM7_Da);
          iVar6 = iVar8;
          if (iVar8 <= iVar9) {
            iVar6 = iVar9;
          }
          if (iVar6 < 4) {
            iVar9 = 4;
          }
          else if (iVar9 < iVar8) {
            iVar9 = iVar8;
          }
          iVar6 = FUN_180748010(unaff_R15 + 7,iVar9);
          if (iVar6 != 0) break;
        }
        puVar5 = (uint64_t *)((int64_t)(int)unaff_R15[8] * 0x10 + unaff_R15[7]);
        *puVar5 = uVar1;
        puVar5[1] = uVar2;
        *(int *)(unaff_R15 + 8) = (int)unaff_R15[8] + 1;
        unaff_ESI = unaff_ESI + 1;
      } while (unaff_ESI < iVar3);
    }
  }
LAB_1808e5a75:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808e5a7a(void)
void FUN_1808e5a7a(void)

{
  uint64_t in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e5ab0(int64_t param_1,int64_t param_2,int8_t *param_3)
void FUN_1808e5ab0(int64_t param_1,int64_t param_2,int8_t *param_3)

{
  int64_t lVar1;
  int8_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int *piVar7;
  int64_t *plVar8;
  int8_t auStack_98 [32];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  plVar8 = *(int64_t **)(*(int64_t *)(param_1 + 0x28) + 800);
  lVar4 = (**(code **)(*plVar8 + 0x330))(plVar8,param_2 + 0x50,1);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2 + 0x50,auStack_68);
  }
  plVar8 = (int64_t *)0x0;
  if (((((*(int *)(param_2 + 0x40) != 0) || (*(int *)(param_2 + 0x44) != 0)) ||
       (*(int *)(param_2 + 0x48) != 0)) || (plVar5 = plVar8, *(int *)(param_2 + 0x4c) != 0)) &&
     (plVar5 = *(int64_t **)(*(int64_t *)(param_1 + 0x28) + 800),
     plVar5 = (int64_t *)(**(code **)(*plVar5 + 0x340))(plVar5,param_2 + 0x40,1),
     plVar5 == (int64_t *)0x0)) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2 + 0x40,auStack_68);
  }
  if ((lVar4 == 0) || (plVar5 == (int64_t *)0x0)) {
LAB_1808e5c82:
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar4 + 200) == -1) {
      uStack_78 = *(uint *)(plVar5 + 2);
      uStack_74 = *(uint *)((int64_t)plVar5 + 0x14);
      uStack_70 = *(uint *)(plVar5 + 3);
      uStack_6c = *(uint *)((int64_t)plVar5 + 0x1c);
      lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x90);
      lVar1 = *(int64_t *)(lVar4 + 0x130);
      if (lVar1 != 0) {
        SystemMemoryAllocator(lVar1);
      }
      if (((*(int *)(lVar4 + 0x15c) != 0) && (*(int *)(lVar4 + 0x140) != 0)) &&
         (iVar3 = *(int *)(*(int64_t *)(lVar4 + 0x138) +
                          (int64_t)
                          (int)((uStack_74 ^ uStack_78 ^ uStack_6c ^ uStack_70) &
                               *(int *)(lVar4 + 0x140) - 1U) * 4), iVar3 != -1)) {
        do {
          plVar5 = (int64_t *)((int64_t)iVar3 * 0x20 + *(int64_t *)(lVar4 + 0x148));
          if ((*plVar5 == CONCAT44(uStack_74,uStack_78)) &&
             (plVar5[1] == CONCAT44(uStack_6c,uStack_70))) {
            plVar5 = (int64_t *)plVar5[3];
            if (plVar5 != (int64_t *)0x0) goto LAB_1808e5caf;
            break;
          }
          iVar3 = (int)plVar5[2];
        } while (iVar3 != -1);
      }
      plVar5 = plVar8;
      if (((*(int *)(lVar4 + 300) != 0) && (*(int *)(lVar4 + 0x110) != 0)) &&
         (iVar3 = *(int *)(*(int64_t *)(lVar4 + 0x108) +
                          (int64_t)
                          (int)((uStack_74 ^ uStack_78 ^ uStack_6c ^ uStack_70) &
                               *(int *)(lVar4 + 0x110) - 1U) * 4), iVar3 != -1)) {
        do {
          plVar6 = (int64_t *)((int64_t)iVar3 * 0x20 + *(int64_t *)(lVar4 + 0x118));
          if ((*plVar6 == CONCAT44(uStack_74,uStack_78)) &&
             (plVar6[1] == CONCAT44(uStack_6c,uStack_70))) {
            plVar5 = (int64_t *)plVar6[3];
            break;
          }
          iVar3 = (int)plVar6[2];
        } while (iVar3 != -1);
      }
      if (plVar5 == (int64_t *)0x0) {
        if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
          SystemMemoryManager(lVar1);
        }
      }
      else {
LAB_1808e5caf:
        if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
           (iVar3 = *(int *)(*plVar5 + -4 + (int64_t)(int)plVar5[1] * 4), iVar3 != -1)) {
          do {
            piVar7 = (int *)((int64_t)iVar3 * 0x10 + plVar5[2]);
            if (*piVar7 == -1) {
              plVar8 = *(int64_t **)(piVar7 + 2);
              break;
            }
            iVar3 = piVar7[1];
            plVar8 = (int64_t *)0x0;
          } while (iVar3 != -1);
        }
        if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
          SystemMemoryManager(lVar1);
        }
        if (plVar8 != (int64_t *)0x0) {
          uStack_78 = *(uint *)(param_2 + 0x10);
          uStack_74 = *(uint *)(param_2 + 0x14);
          uStack_70 = *(uint *)(param_2 + 0x18);
          uStack_6c = *(uint *)(param_2 + 0x1c);
          iVar3 = FUN_1808e42a0(param_1,plVar8,&uStack_78);
          if (iVar3 != 0) goto LAB_1808e5c89;
        }
      }
      goto LAB_1808e5c82;
    }
    uVar2 = 1;
  }
  *param_3 = uVar2;
LAB_1808e5c89:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e5d30(void)
void FUN_1808e5d30(void)

{
  int8_t auStack_158 [64];
  int8_t auStack_118 [224];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
                    // WARNING: Subroutine does not return
  memset(auStack_118,0,0xd8);
}






// 函数: void FUN_1808e5eb0(uint64_t param_1)
void FUN_1808e5eb0(uint64_t param_1)

{
  int iVar1;
  int64_t alStackX_10 [3];
  
  iVar1 = FUN_180740cd0(param_1,alStackX_10);
  if (iVar1 == 0) {
    iVar1 = FUN_18073cdf0(*(uint64_t *)(alStackX_10[0] + 8),param_1);
    if (iVar1 == 0) {
      FUN_180740d90(param_1);
    }
  }
  return;
}







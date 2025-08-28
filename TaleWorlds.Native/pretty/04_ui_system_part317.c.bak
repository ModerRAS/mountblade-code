#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part317.c - 8 个函数

// 函数: void FUN_18083c86c(void)
void FUN_18083c86c(void)

{
  return;
}



int32_t * FUN_18083c870(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  int32_t *puVar5;
  uint uVar6;
  int *piVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint *puVar13;
  uint64_t uVar7;
  
  iVar10 = 1;
  uVar11 = 0;
  puVar5 = (int32_t *)FUN_1807c4170(param_1,1,0x714);
  lVar1 = *(int64_t *)(param_2 + 0x20);
  if (puVar5 == (int32_t *)0x0) {
    return (int32_t *)0x0;
  }
  uVar2 = FUN_18082d7f0(param_3,0x18);
  *puVar5 = uVar2;
  uVar2 = FUN_18082d7f0(param_3,0x18);
  puVar5[1] = uVar2;
  iVar3 = FUN_18082d7f0(param_3,0x18);
  puVar5[2] = iVar3 + 1;
  iVar3 = FUN_18082d7f0(param_3,6);
  puVar5[3] = iVar3 + 1;
  iVar3 = FUN_18082d7f0(param_3,8);
  puVar5[4] = iVar3;
  if (-1 < iVar3) {
    uVar6 = 0;
    if (0 < (int)puVar5[3]) {
      puVar13 = puVar5 + 5;
      uVar9 = uVar11;
      uVar12 = uVar11;
      do {
        uVar4 = FUN_18082d7f0(param_3,3);
        iVar3 = FUN_18082d7f0(param_3,1);
        if (iVar3 < 0) goto LAB_18083ca29;
        if (iVar3 != 0) {
          iVar3 = FUN_18082d7f0(param_3,5);
          if (iVar3 < 0) goto LAB_18083ca29;
          uVar4 = uVar4 | iVar3 * 8;
        }
        *puVar13 = uVar4;
        uVar7 = uVar11;
        uVar6 = 0;
        for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
          uVar6 = (int)uVar7 + (uVar4 & 1);
          uVar7 = (uint64_t)uVar6;
        }
        uVar6 = (int)uVar12 + uVar6;
        uVar12 = (uint64_t)uVar6;
        uVar4 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar4;
        puVar13 = puVar13 + 1;
      } while ((int)uVar4 < (int)puVar5[3]);
    }
    if (0 < (int)uVar6) {
      piVar8 = puVar5 + 0x45;
      uVar9 = uVar11;
      do {
        iVar3 = FUN_18082d7f0(param_3,8);
        if (iVar3 < 0) goto LAB_18083ca29;
        *piVar8 = iVar3;
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 1;
      } while ((int64_t)uVar9 < (int64_t)(int)uVar6);
    }
    if ((int)puVar5[4] < *(int *)(lVar1 + 0x18)) {
      if (0 < (int)uVar6) {
        piVar8 = puVar5 + 0x45;
        do {
          if ((*(int *)(lVar1 + 0x18) <= *piVar8) ||
             (*(int *)(*(int64_t *)(lVar1 + 0xb20 + (int64_t)*piVar8 * 8) + 0x10) == 0))
          goto LAB_18083ca29;
          uVar11 = uVar11 + 1;
          piVar8 = piVar8 + 1;
        } while ((int64_t)uVar11 < (int64_t)(int)uVar6);
      }
      piVar8 = *(int **)(lVar1 + 0xb20 + (int64_t)(int)puVar5[4] * 8);
      iVar3 = *piVar8;
      if (iVar3 < 1) {
        return puVar5;
      }
      while (iVar10 = iVar10 * puVar5[3], iVar10 <= piVar8[1]) {
        iVar3 = iVar3 + -1;
        if (iVar3 < 1) {
          return puVar5;
        }
      }
    }
  }
LAB_18083ca29:
                    // WARNING: Subroutine does not return
  memset(puVar5,0,0x714);
}



int64_t * FUN_18083ca60(uint64_t param_1,int64_t *param_2,int64_t param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int64_t lVar20;
  
  plVar6 = (int64_t *)FUN_1807c4170(param_1,1,0x48);
  uVar18 = 0;
  lVar9 = *(int64_t *)(*param_2 + 0x20);
  if (plVar6 != (int64_t *)0x0) {
    *plVar6 = param_3;
    uVar1 = *(int32_t *)(param_3 + 0xc);
    *(int32_t *)(plVar6 + 1) = uVar1;
    plVar6[2] = *(int64_t *)(lVar9 + 0x1320);
    puVar13 = (uint *)(*(int64_t *)(lVar9 + 0x1320) + (int64_t)*(int *)(param_3 + 0x10) * 0x48);
    plVar6[3] = (int64_t)puVar13;
    uVar2 = *puVar13;
    lVar7 = FUN_1807c4170(param_1,uVar1,8);
    plVar6[4] = lVar7;
    if (lVar7 != 0) {
      iVar17 = 0;
      if (0 < (int)plVar6[1]) {
        lVar20 = 0;
        lVar7 = 0;
        puVar13 = (uint *)(param_3 + 0x14);
        do {
          uVar4 = 1;
          uVar3 = *puVar13;
          uVar11 = 0;
          if (uVar3 != 0) {
            do {
              uVar11 = uVar11 + 1;
              uVar3 = uVar3 >> 1;
            } while (uVar3 != 0);
            if (uVar11 != 0) {
              uVar3 = uVar11;
              if ((int)uVar11 <= (int)uVar18) {
                uVar3 = uVar18;
              }
              uVar18 = uVar3;
              uVar8 = FUN_1807c4170(param_1,uVar11,8);
              *(uint64_t *)(lVar7 + plVar6[4]) = uVar8;
              if (*(int64_t *)(lVar7 + plVar6[4]) == 0) {
                return (int64_t *)0x0;
              }
              if (0 < (int)uVar11) {
                lVar14 = 0;
                uVar15 = (uint64_t)uVar11;
                piVar16 = (int *)(param_3 + 0x114 + lVar20 * 4);
                do {
                  if ((*puVar13 & uVar4) != 0) {
                    iVar19 = *piVar16;
                    lVar20 = lVar20 + 1;
                    piVar16 = piVar16 + 1;
                    *(int64_t *)(lVar14 + *(int64_t *)(lVar7 + plVar6[4])) =
                         *(int64_t *)(lVar9 + 0x1320) + (int64_t)iVar19 * 0x48;
                  }
                  uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
                  lVar14 = lVar14 + 8;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
            }
          }
          iVar17 = iVar17 + 1;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar17 < (int)plVar6[1]);
      }
      iVar17 = 1;
      *(int32_t *)(plVar6 + 5) = 1;
      if (0 < (int)uVar2) {
        uVar15 = (uint64_t)uVar2;
        do {
          iVar17 = iVar17 * (int)plVar6[1];
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        *(int *)(plVar6 + 5) = iVar17;
      }
      *(uint *)((int64_t)plVar6 + 0xc) = uVar18;
      lVar9 = FUN_1807c4200(param_1,iVar17 * 8);
      plVar6[6] = lVar9;
      if (lVar9 != 0) {
        iVar17 = (int)plVar6[5];
        iVar19 = 0;
        if (iVar17 < 1) {
          return plVar6;
        }
        lVar9 = 0;
        while( true ) {
          iVar17 = iVar17 / (int)plVar6[1];
          uVar8 = FUN_1807c4200(param_1,uVar2 * 4);
          *(uint64_t *)(lVar9 + plVar6[6]) = uVar8;
          if (*(int64_t *)(lVar9 + plVar6[6]) == 0) break;
          lVar7 = 0;
          iVar12 = iVar19;
          if (0 < (int64_t)(int)uVar2) {
            do {
              iVar5 = iVar12 / iVar17;
              iVar10 = iVar5 * iVar17;
              iVar17 = iVar17 / (int)plVar6[1];
              iVar12 = iVar12 - iVar10;
              *(int *)(*(int64_t *)(lVar9 + plVar6[6]) + lVar7 * 4) = iVar5;
              lVar7 = lVar7 + 1;
            } while (lVar7 < (int)uVar2);
          }
          iVar17 = (int)plVar6[5];
          iVar19 = iVar19 + 1;
          lVar9 = lVar9 + 8;
          if (iVar17 <= iVar19) {
            return plVar6;
          }
        }
      }
    }
  }
  return (int64_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18083ccd0(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4,
             int64_t param_5,int param_6)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int aiStack_78 [3];
  int iStack_6c;
  uint64_t *puStack_68;
  int64_t lStack_58;
  int *piStack_40;
  uint64_t *puStack_38;
  uint64_t uStack_30;
  
  uVar2 = 0;
  puVar4 = param_4;
  uVar5 = uVar2;
  if (0 < (int64_t)param_6) {
    do {
      if (*(int *)(param_5 + uVar2 * 4) != 0) {
        uVar5 = (uint64_t)((int)uVar5 + 1);
        *puVar4 = param_4[uVar2];
        puVar4 = puVar4 + 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int64_t)uVar2 < (int64_t)param_6);
    if ((int)uVar5 != 0) {
      uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_78;
      piStack_40 = (int *)*param_3;
      iVar3 = *(int *)(param_2 + 0x34) >> 1;
      iStack_6c = piStack_40[2];
      iVar1 = piStack_40[1];
      if (iVar3 <= piStack_40[1]) {
        iVar1 = iVar3;
      }
      puStack_68 = param_3;
      lStack_58 = param_2;
      puStack_38 = param_4;
      if (iVar1 - *piStack_40 < 1) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(GET_SECURITY_COOKIE());
      }
      aiStack_78[0] = (iVar1 - *piStack_40) / iStack_6c;
                    // WARNING: Subroutine does not return
      FUN_1808fd200((int64_t)(int)uVar5 * 8,
                    (int64_t)(aiStack_78[0] + -1 + *(int *)param_3[3]) %
                    (int64_t)*(int *)param_3[3] & 0xffffffff);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18083ccea(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int iVar4;
  uint64_t *puVar5;
  uint in_R11D;
  int64_t in_stack_00000060;
  code *pcStack0000000000000068;
  
  uVar3 = (uint64_t)in_R11D;
  puVar5 = param_4;
  do {
    if (*(int *)(in_stack_00000060 + uVar3 * 4) != 0) {
      in_R11D = in_R11D + 1;
      *puVar5 = param_4[uVar3];
      puVar5 = puVar5 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int64_t)uVar3 < unaff_RBX);
  if (in_R11D != 0) {
    pcStack0000000000000068 = FUN_18082ed00;
    piVar1 = (int *)*param_3;
    iVar4 = *(int *)(param_2 + 0x34) >> 1;
    iVar2 = piVar1[1];
    if (iVar4 <= piVar1[1]) {
      iVar2 = iVar4;
    }
    if (0 < iVar2 - *piVar1) {
                    // WARNING: Subroutine does not return
      FUN_1808fd200((int64_t)(int)in_R11D * 8,
                    (int64_t)((iVar2 - *piVar1) / piVar1[2] + -1 + *(int *)param_3[3]) %
                    (int64_t)*(int *)param_3[3] & 0xffffffff);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(GET_SECURITY_COOKIE());
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083cd26(uint64_t param_1,int64_t param_2,uint64_t *param_3)
void FUN_18083cd26(uint64_t param_1,int64_t param_2,uint64_t *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_R11D;
  uint64_t uStack0000000000000040;
  uint64_t in_stack_00000048;
  code *pcStack0000000000000068;
  
  pcStack0000000000000068 = FUN_18082ed00;
  uStack0000000000000040 = in_stack_00000048;
  piVar1 = (int *)*param_3;
  iVar3 = *(int *)(param_2 + 0x34) >> 1;
  iVar2 = piVar1[1];
  if (iVar3 <= piVar1[1]) {
    iVar2 = iVar3;
  }
  if (0 < iVar2 - *piVar1) {
                    // WARNING: Subroutine does not return
    FUN_1808fd200((int64_t)in_R11D * 8,
                  (int64_t)((iVar2 - *piVar1) / piVar1[2] + -1 + *(int *)param_3[3]) %
                  (int64_t)*(int *)param_3[3] & 0xffffffff);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18083cd60(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4,
             int64_t param_5,int param_6)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int aiStack_78 [3];
  int iStack_6c;
  uint64_t *puStack_68;
  int64_t lStack_58;
  int *piStack_40;
  uint64_t *puStack_38;
  uint64_t uStack_30;
  
  uVar2 = 0;
  puVar4 = param_4;
  uVar5 = uVar2;
  if (0 < (int64_t)param_6) {
    do {
      if (*(int *)(param_5 + uVar2 * 4) != 0) {
        uVar5 = (uint64_t)((int)uVar5 + 1);
        *puVar4 = param_4[uVar2];
        puVar4 = puVar4 + 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int64_t)uVar2 < (int64_t)param_6);
    if ((int)uVar5 != 0) {
      uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_78;
      piStack_40 = (int *)*param_3;
      iVar3 = *(int *)(param_2 + 0x34) >> 1;
      iStack_6c = piStack_40[2];
      iVar1 = piStack_40[1];
      if (iVar3 <= piStack_40[1]) {
        iVar1 = iVar3;
      }
      puStack_68 = param_3;
      lStack_58 = param_2;
      puStack_38 = param_4;
      if (iVar1 - *piStack_40 < 1) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(GET_SECURITY_COOKIE());
      }
      aiStack_78[0] = (iVar1 - *piStack_40) / iStack_6c;
                    // WARNING: Subroutine does not return
      FUN_1808fd200((int64_t)(int)uVar5 * 8,
                    (int64_t)(aiStack_78[0] + -1 + *(int *)param_3[3]) %
                    (int64_t)*(int *)param_3[3] & 0xffffffff);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18083cd7a(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int iVar4;
  uint64_t *puVar5;
  uint in_R11D;
  int64_t in_stack_00000060;
  code *pcStack0000000000000068;
  
  uVar3 = (uint64_t)in_R11D;
  puVar5 = param_4;
  do {
    if (*(int *)(in_stack_00000060 + uVar3 * 4) != 0) {
      in_R11D = in_R11D + 1;
      *puVar5 = param_4[uVar3];
      puVar5 = puVar5 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int64_t)uVar3 < unaff_RBX);
  if (in_R11D != 0) {
    pcStack0000000000000068 = FUN_18082e800;
    piVar1 = (int *)*param_3;
    iVar4 = *(int *)(param_2 + 0x34) >> 1;
    iVar2 = piVar1[1];
    if (iVar4 <= piVar1[1]) {
      iVar2 = iVar4;
    }
    if (0 < iVar2 - *piVar1) {
                    // WARNING: Subroutine does not return
      FUN_1808fd200((int64_t)(int)in_R11D * 8,
                    (int64_t)((iVar2 - *piVar1) / piVar1[2] + -1 + *(int *)param_3[3]) %
                    (int64_t)*(int *)param_3[3] & 0xffffffff);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(GET_SECURITY_COOKIE());
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083cdb6(uint64_t param_1,int64_t param_2,uint64_t *param_3)
void FUN_18083cdb6(uint64_t param_1,int64_t param_2,uint64_t *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_R11D;
  uint64_t uStack0000000000000040;
  uint64_t in_stack_00000048;
  code *pcStack0000000000000068;
  
  pcStack0000000000000068 = FUN_18082e800;
  uStack0000000000000040 = in_stack_00000048;
  piVar1 = (int *)*param_3;
  iVar3 = *(int *)(param_2 + 0x34) >> 1;
  iVar2 = piVar1[1];
  if (iVar3 <= piVar1[1]) {
    iVar2 = iVar3;
  }
  if (0 < iVar2 - *piVar1) {
                    // WARNING: Subroutine does not return
    FUN_1808fd200((int64_t)in_R11D * 8,
                  (int64_t)((iVar2 - *piVar1) / piVar1[2] + -1 + *(int *)param_3[3]) %
                  (int64_t)*(int *)param_3[3] & 0xffffffff);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}



uint64_t
FUN_18083cdf0(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
             int64_t param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t lStackX_18;
  
  piVar3 = (int *)*param_3;
  iVar1 = piVar3[2];
  iVar11 = (int)(*(int *)(param_2 + 0x34) * param_6) >> 1;
  iVar2 = *(int *)param_3[3];
  iVar13 = piVar3[1];
  if (iVar11 <= piVar3[1]) {
    iVar13 = iVar11;
  }
  if (0 < iVar13 - *piVar3) {
    iVar13 = (iVar13 - *piVar3) / iVar1;
    plVar6 = (int64_t *)FUN_180831260(param_1,param_2,(iVar2 + -1 + iVar13) / iVar2 << 3);
    if (plVar6 == (int64_t *)0x0) {
      return 0xffffffff;
    }
    uVar10 = (uint64_t)(int)param_6;
    uVar8 = 0;
    if (0 < (int)param_6) {
      lVar7 = 0;
      do {
        if (*(int *)(param_5 + lVar7 * 4) != 0) break;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int64_t)uVar10);
    }
    if ((uVar8 != param_6) && (uVar8 = 0, 0 < *(int *)((int64_t)param_3 + 0xc))) {
      lStackX_18 = 0;
      do {
        iVar11 = 0;
        plVar12 = plVar6;
        if (0 < iVar13) {
          do {
            if (uVar8 == 0) {
              iVar4 = FUN_18082e7c0(param_3[3],param_2 + 8);
              if (iVar4 == -1) {
                return 0;
              }
              lVar7 = *(int64_t *)(param_3[6] + (int64_t)iVar4 * 8);
              *plVar12 = lVar7;
              if (lVar7 == 0) {
                return 0;
              }
              uVar10 = (uint64_t)param_6;
            }
            lVar7 = 0;
            if (0 < (int64_t)iVar2) {
              iVar4 = iVar11 * iVar1;
              do {
                if (iVar13 <= iVar11) break;
                lVar9 = (int64_t)*(int *)(*plVar12 + lVar7 * 4);
                if (((((uint)piVar3[lVar9 + 5] >> (uVar8 & 0x1f) & 1) != 0) &&
                    (lVar9 = *(int64_t *)(lStackX_18 + *(int64_t *)(param_3[4] + lVar9 * 8)),
                    lVar9 != 0)) &&
                   (iVar5 = FUN_18082f0a0(lVar9,param_4,*piVar3 + iVar4,uVar10,param_2 + 8,iVar1),
                   iVar5 == -1)) {
                  return 0;
                }
                lVar7 = lVar7 + 1;
                uVar10 = (uint64_t)param_6;
                iVar11 = iVar11 + 1;
                iVar4 = iVar4 + iVar1;
              } while (lVar7 < iVar2);
            }
            uVar10 = (uint64_t)param_6;
            plVar12 = plVar12 + 1;
          } while (iVar11 < iVar13);
        }
        lStackX_18 = lStackX_18 + 8;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)((int64_t)param_3 + 0xc));
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083d030(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
void FUN_18083d030(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  int aiStack_78 [3];
  int iStack_6c;
  uint64_t *puStack_68;
  int64_t lStack_58;
  int *piStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_78;
  piStack_40 = (int *)*param_3;
  iVar2 = *(int *)(param_2 + 0x34) >> 1;
  iStack_6c = piStack_40[2];
  iVar1 = piStack_40[1];
  if (iVar2 <= piStack_40[1]) {
    iVar1 = iVar2;
  }
  puStack_68 = param_3;
  lStack_58 = param_2;
  uStack_38 = param_4;
  if (0 < iVar1 - *piStack_40) {
    aiStack_78[0] = (iVar1 - *piStack_40) / iStack_6c;
                    // WARNING: Subroutine does not return
    FUN_1808fd200((int64_t)param_5 * 8,
                  (int64_t)(aiStack_78[0] + -1 + *(int *)param_3[3]) % (int64_t)*(int *)param_3[3]
                  & 0xffffffff);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}





// 函数: void FUN_18083d320(uint64_t param_1,int64_t param_2)
void FUN_18083d320(uint64_t param_1,int64_t param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,0xc88);
  }
  return;
}



uint64_t FUN_18083d360(uint64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_1807c4170(param_1,1,0xc88);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,0xc88);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083d5d0(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18083d5d0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  int64_t lStack_60;
  uint64_t uStack_50;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)&lStack_88;
  lStack_80 = **(int64_t **)(param_2 + 0x50);
  lStack_70 = (*(int64_t **)(param_2 + 0x50))[0xe];
  lStack_60 = *(int64_t *)(lStack_80 + 0x20);
  uStack_68 = *(int32_t *)(lStack_60 + (int64_t)*(int *)(param_2 + 0x2c) * 4);
  *(int32_t *)(param_2 + 0x34) = uStack_68;
  lStack_88 = param_2;
  uStack_78 = param_3;
  uStack_50 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18083dc20(int *param_1,float *param_2,int64_t param_3)
void FUN_18083dc20(int *param_1,float *param_2,int64_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  int64_t lVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  float *pfVar13;
  int64_t lVar14;
  float *pfVar15;
  float *pfVar16;
  int64_t lVar17;
  
  lVar17 = (int64_t)*param_1 >> 2;
  lVar14 = (int64_t)(*param_1 >> 1);
  lVar4 = lVar17 * 4;
  pfVar7 = (float *)(*(int64_t *)(param_1 + 2) + lVar4);
  pfVar10 = (float *)(param_3 + (lVar17 + lVar14) * 4);
  pfVar8 = param_2 + lVar14 + -7;
  pfVar11 = pfVar10;
  do {
    pfVar11[-4] = -(pfVar8[2] * pfVar7[3]) - *pfVar8 * pfVar7[2];
    pfVar11[-3] = *pfVar8 * pfVar7[3] - pfVar8[2] * pfVar7[2];
    pfVar11[-2] = -(pfVar7[1] * pfVar8[6]) - pfVar8[4] * *pfVar7;
    pfVar13 = pfVar7 + 1;
    fVar5 = *pfVar7;
    pfVar7 = pfVar7 + 4;
    pfVar16 = pfVar8 + 4;
    pfVar1 = pfVar8 + 6;
    pfVar8 = pfVar8 + -8;
    pfVar11[-1] = *pfVar13 * *pfVar16 - fVar5 * *pfVar1;
    pfVar11 = pfVar11 + -4;
  } while (param_2 <= pfVar8);
  pfVar8 = param_2 + lVar14 + -8;
  pfVar11 = (float *)(*(int64_t *)(param_1 + 2) + lVar4);
  pfVar7 = pfVar10;
  do {
    pfVar16 = pfVar11 + -4;
    *pfVar7 = pfVar8[4] * pfVar11[-1] + pfVar11[-2] * pfVar8[6];
    pfVar7[1] = pfVar8[4] * pfVar11[-2] - pfVar11[-1] * pfVar8[6];
    pfVar7[2] = *pfVar8 * pfVar11[-3] + pfVar8[2] * *pfVar16;
    fVar5 = *pfVar8;
    pfVar13 = pfVar8 + 2;
    pfVar8 = pfVar8 + -8;
    pfVar7[3] = fVar5 * *pfVar16 - pfVar11[-3] * *pfVar13;
    pfVar7 = pfVar7 + 4;
    pfVar11 = pfVar16;
  } while (param_2 <= pfVar8);
  pfVar8 = (float *)(param_3 + lVar14 * 4);
  FUN_18083e510(param_1,pfVar8);
  FUN_18083e340(param_1,param_3);
  pfVar11 = (float *)(*(int64_t *)(param_1 + 2) + lVar14 * 4);
  pfVar7 = (float *)(param_3 + 0xc);
  pfVar13 = pfVar10;
  pfVar16 = pfVar10;
  do {
    pfVar15 = pfVar13 + -4;
    pfVar13[-1] = pfVar11[1] * pfVar7[-3] - pfVar7[-2] * *pfVar11;
    *pfVar16 = -(pfVar11[1] * pfVar7[-2] + pfVar7[-3] * *pfVar11);
    pfVar13[-2] = pfVar11[3] * pfVar7[-1] - *pfVar7 * pfVar11[2];
    pfVar16[1] = -(*pfVar7 * pfVar11[3] + pfVar11[2] * pfVar7[-1]);
    pfVar13[-3] = pfVar11[5] * pfVar7[1] - pfVar11[4] * pfVar7[2];
    pfVar16[2] = -(pfVar11[5] * pfVar7[2] + pfVar11[4] * pfVar7[1]);
    *pfVar15 = pfVar7[3] * pfVar11[7] - pfVar11[6] * pfVar7[4];
    pfVar13 = pfVar11 + 6;
    pfVar1 = pfVar11 + 7;
    pfVar11 = pfVar11 + 8;
    pfVar2 = pfVar7 + 5;
    pfVar16[3] = -(*pfVar13 * pfVar7[3] + pfVar7[4] * *pfVar1);
    pfVar16 = pfVar16 + 4;
    pfVar7 = pfVar7 + 8;
    pfVar13 = pfVar15;
  } while (pfVar2 < pfVar15);
  lVar14 = (int64_t)pfVar10 + (lVar17 * -4 - param_3);
  puVar9 = (uint *)(param_3 + 8 + lVar17 * 4);
  puVar12 = (uint *)(param_3 + 8 + lVar4);
  pfVar11 = pfVar10;
  do {
    uVar6 = *(uint *)(lVar14 + -0xc + (int64_t)puVar9);
    puVar3 = puVar9 + -4;
    puVar9[-3] = uVar6;
    pfVar7 = (float *)(puVar12 + 2);
    puVar12[-2] = uVar6 ^ 0x80000000;
    pfVar11 = pfVar11 + -4;
    uVar6 = *(uint *)(lVar14 + (int64_t)puVar3);
    *puVar3 = uVar6;
    puVar12[-1] = uVar6 ^ 0x80000000;
    uVar6 = *(uint *)(lVar14 + -4 + (int64_t)puVar3);
    puVar9[-5] = uVar6;
    *puVar12 = uVar6 ^ 0x80000000;
    fVar5 = *pfVar11;
    puVar9[-6] = (uint)fVar5;
    puVar12[1] = (uint)-fVar5;
    puVar9 = puVar3;
    puVar12 = puVar12 + 4;
    pfVar13 = pfVar10;
  } while (pfVar7 < pfVar11);
  do {
    pfVar11 = pfVar10 + -4;
    *pfVar11 = pfVar13[3];
    pfVar10[-3] = pfVar13[2];
    pfVar10[-2] = pfVar13[1];
    pfVar10[-1] = *pfVar13;
    pfVar10 = pfVar11;
    pfVar13 = pfVar13 + 4;
  } while (pfVar8 < pfVar11);
  return;
}





// 函数: void FUN_18083dff0(uint64_t param_1,uint64_t *param_2)
void FUN_18083dff0(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0();
    }
    if (param_2[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



uint64_t FUN_18083e040(uint64_t param_1,int *param_2,int param_3)

{
  char cVar1;
  int8_t auVar2 [12];
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  float fVar19;
  int8_t auVar14 [16];
  int8_t auVar17 [16];
  int32_t uVar18;
  
  iVar3 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
  piVar7 = (int *)FUN_1807c4200(param_1,iVar3 * 4);
  lVar8 = FUN_1807c4200(param_1,(iVar3 + param_3) * 4);
  fVar19 = (float)param_3;
  uVar4 = logf();
  auVar14._8_8_ = extraout_XMM0_Qb;
  auVar14._0_8_ = extraout_XMM0_Qa;
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = (float)extraout_XMM0_Qa * 1.442695 + 0.5;
  iVar10 = (int)auVar15._0_4_;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar15._0_4_)) {
    uVar18 = (int32_t)((uint64_t)extraout_XMM0_Qa >> 0x20);
    auVar17._0_8_ = auVar15._0_8_;
    auVar17._8_4_ = uVar18;
    auVar17._12_4_ = uVar18;
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._4_4_ = auVar15._0_4_;
    auVar16._0_4_ = auVar15._0_4_;
    uVar5 = movmskps(uVar4,auVar16);
    iVar10 = iVar10 - (uVar5 & 1);
    auVar15 = ZEXT416((uint)(float)iVar10);
  }
  param_2[1] = (int)auVar15._0_4_;
  if ((piVar7 == (int *)0x0) || (lVar8 == 0)) {
    uVar9 = 0xffffff75;
  }
  else {
    *param_2 = param_3;
    *(int64_t *)(param_2 + 2) = lVar8;
    *(int **)(param_2 + 4) = piVar7;
    if (0 < iVar3) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(iVar10,(3.1415927 / fVar19) * 0.0);
    }
    iVar3 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
    if (0 < iVar3) {
      auVar2._4_8_ = SUB128(ZEXT812(0x40000000),4);
      auVar2._0_4_ = (3.1415927 / fVar19) * 2.0;
                    // WARNING: Subroutine does not return
      FUN_1808fd400(iVar10,auVar2._0_8_);
    }
    cVar1 = (char)(int)auVar15._0_4_;
    uVar13 = 0;
    uVar5 = 1 << (cVar1 - 2U & 0x1f);
    if (0 < iVar3) {
      do {
        uVar12 = 0;
        uVar11 = 0;
        uVar6 = uVar5;
        while (uVar6 != 0) {
          if ((uVar13 & uVar6) != 0) {
            uVar12 = uVar12 | 1 << (uVar11 & 0x1f);
          }
          uVar11 = uVar11 + 1;
          uVar6 = (int)uVar5 >> ((byte)uVar11 & 0x1f);
        }
        piVar7[1] = uVar12;
        uVar13 = uVar13 + 1;
        *piVar7 = (~uVar12 & (1 << (cVar1 - 1U & 0x1f)) - 1U) - 1;
        piVar7 = piVar7 + 2;
      } while ((int)uVar13 < iVar3);
    }
    uVar9 = 0;
    param_2[6] = (int)(4.0 / fVar19);
  }
  return uVar9;
}



uint64_t FUN_18083e119(uint64_t param_1)

{
  int8_t auVar1 [12];
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  int *unaff_RDI;
  uint uVar7;
  int *unaff_R12;
  char unaff_R13B;
  uint64_t unaff_R14;
  int unaff_R15D;
  float unaff_XMM11_Da;
  
  *unaff_R12 = unaff_ESI;
  *(uint64_t *)(unaff_R12 + 2) = unaff_R14;
  *(int **)(unaff_R12 + 4) = unaff_RDI;
  if (0 < unaff_R15D) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(param_1,(3.1415927 / unaff_XMM11_Da) * 0.0);
  }
  iVar2 = (int)(unaff_ESI + (unaff_ESI >> 0x1f & 7U)) >> 3;
  if (0 < iVar2) {
    auVar1._4_8_ = SUB128(ZEXT812(0x40000000),4);
    auVar1._0_4_ = (3.1415927 / unaff_XMM11_Da) * 2.0;
                    // WARNING: Subroutine does not return
    FUN_1808fd400(param_1,auVar1._0_8_);
  }
  uVar7 = 0;
  uVar6 = 1 << (unaff_R13B - 2U & 0x1f);
  if (0 < iVar2) {
    do {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = uVar6;
      while (uVar3 != 0) {
        if ((uVar7 & uVar3) != 0) {
          uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
        }
        uVar4 = uVar4 + 1;
        uVar3 = (int)uVar6 >> ((byte)uVar4 & 0x1f);
      }
      unaff_RDI[1] = uVar5;
      uVar7 = uVar7 + 1;
      *unaff_RDI = (~uVar5 & (1 << (unaff_R13B - 1U & 0x1f)) - 1U) - 1;
      unaff_RDI = unaff_RDI + 2;
    } while ((int)uVar7 < iVar2);
  }
  unaff_R12[6] = (int)(4.0 / unaff_XMM11_Da);
  return 0;
}






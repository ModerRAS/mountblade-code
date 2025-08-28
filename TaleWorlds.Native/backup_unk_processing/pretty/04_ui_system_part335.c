#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part335.c - 3 个函数

// 函数: void FUN_18085019a(void)
void FUN_18085019a(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808501b0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  bool bVar17;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint64_t uStack_58;
  int iStack_50;
  int32_t uStack_4c;
  int iStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int iStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_180768360();
  }
  do {
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      FUN_180768360();
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      iVar11 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)param_1[6];
      do {
        if (*piVar7 != -1) {
          iVar11 = ((int *)param_1[6])[iVar11];
          goto LAB_18085024c;
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != (int)param_1[7]);
    }
    iVar11 = -1;
LAB_18085024c:
    lVar8 = param_1[5];
    puVar13 = (uint *)((longlong)iVar11 * 0x20 + param_1[8]);
    uStack_68 = *puVar13;
    uStack_64 = puVar13[1];
    uStack_60 = puVar13[2];
    uStack_5c = puVar13[3];
    bVar17 = lVar8 == 0;
    if (bVar17) {
      lVar8 = 0;
    }
    else {
      FUN_180768360();
    }
    uVar4 = uStack_5c;
    uVar5 = uStack_60;
    uVar1 = uStack_68;
    lVar10 = CONCAT44(uStack_5c,uStack_60);
    lVar3 = CONCAT44(uStack_64,uStack_68);
    if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar12 = *(int *)(*param_1 +
                         (longlong)
                         (int)((uStack_68 ^ uStack_64 ^ uStack_60 ^ uStack_5c) &
                              (int)param_1[1] - 1U) * 4), iVar12 != -1)) {
      do {
        plVar6 = (longlong *)((longlong)iVar12 * 0x20 + param_1[2]);
        if ((*plVar6 == lVar3) && (plVar6[1] == lVar10)) {
          lVar9 = plVar6[3];
          goto LAB_1808502f3;
        }
        iVar12 = (int)plVar6[2];
      } while (iVar12 != -1);
    }
    lVar9 = 0;
LAB_1808502f3:
    if (!bVar17) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    if (lVar9 != 0) {
      plVar6 = *(longlong **)((longlong)iVar11 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar6[1] == 0) goto LAB_180850347;
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)*plVar6;
      goto LAB_180850330;
    }
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      FUN_180768360();
    }
    if ((int)param_1[7] != 0) {
      lVar9 = (longlong)(int)((uVar1 ^ uStack_64 ^ uVar5 ^ uVar4) & (int)param_1[7] - 1U);
      plVar6 = (longlong *)(param_1[6] + lVar9 * 4);
      iVar11 = *(int *)(param_1[6] + lVar9 * 4);
      if (iVar11 != -1) {
        do {
          plVar16 = (longlong *)((longlong)iVar11 * 0x20 + param_1[8]);
          if ((*plVar16 == lVar3) && (plVar16[1] == lVar10)) {
            iVar11 = FUN_180852bb0(param_1,&uStack_68,plVar16 + 3);
            if (iVar11 == 0) {
              lVar3 = *plVar6;
              lVar10 = (longlong)(int)lVar3 * 0x20 + param_1[8];
              *(uint64_t *)(lVar10 + 0x18) = 0;
              *(int *)plVar6 = *(int *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x10) = (int)param_1[10];
              *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar3;
            }
            goto LAB_1808505e7;
          }
          iVar11 = (int)plVar16[2];
          plVar6 = plVar16 + 2;
        } while (iVar11 != -1);
      }
    }
    iVar11 = 0x1c;
LAB_1808505e7:
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
  } while (iVar11 == 0);
LAB_180850643:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return iVar11;
joined_r0x00018085040e:
  uStack_58 = plVar16;
  if (iVar11 == -1) goto LAB_180850347;
  puVar13 = (uint *)((longlong)iVar11 * 0x10 + plVar6[2]);
  if ((int)plVar6[1] == 0) {
LAB_18085046c:
    iVar11 = 0x1c;
    goto LAB_180850643;
  }
  uVar1 = *puVar13;
  lVar8 = (longlong)(int)((int)plVar6[1] - 1U & uVar1);
  puVar14 = (uint *)(*plVar6 + lVar8 * 4);
  uVar5 = *(uint *)(*plVar6 + lVar8 * 4);
  if (uVar5 == 0xffffffff) goto LAB_18085046c;
  while (puVar15 = (uint *)((longlong)(int)uVar5 * 0x10 + plVar6[2]), *puVar15 != uVar1) {
    uVar5 = puVar15[1];
    puVar14 = puVar15 + 1;
    if (uVar5 == 0xffffffff) goto LAB_18085046c;
  }
  iVar11 = FUN_1807d28c0(lVar9,puVar13,puVar15 + 2);
  if (iVar11 != 0) goto LAB_180850643;
  uVar1 = *puVar14;
  lVar8 = (longlong)(int)uVar1 * 0x10 + plVar6[2];
  uStack_4c = 0xffffffff;
  *(uint64_t *)(lVar8 + 8) = 0;
  *puVar14 = *(uint *)(lVar8 + 4);
  *(int *)(lVar8 + 4) = (int)plVar6[4];
  *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + -1;
  *(uint *)(plVar6 + 4) = uVar1;
  if ((int)plVar6[1] != 0) {
    iStack_50 = 0;
    lVar8 = 0;
    piVar7 = (int *)*plVar6;
    do {
      if (*piVar7 != -1) {
        iVar11 = ((int *)*plVar6)[iStack_50];
        goto LAB_1808504f5;
      }
      iStack_50 = iStack_50 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar8 != (int)plVar6[1]);
  }
  iStack_50 = -1;
  iVar11 = -1;
LAB_1808504f5:
  uStack_30 = CONCAT44(uStack_44,iVar11);
  uStack_58._0_4_ = SUB84(plVar6,0);
  uStack_58._4_4_ = (int32_t)((ulonglong)plVar6 >> 0x20);
  uStack_34 = 0xffffffff;
  plVar16 = plVar6;
  iStack_48 = iVar11;
  uStack_40 = (int32_t)uStack_58;
  uStack_3c = uStack_58._4_4_;
  iStack_38 = iStack_50;
  goto joined_r0x00018085040e;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar8 = lVar8 + 1;
    piVar7 = piVar7 + 1;
    if (lVar8 == (int)plVar6[1]) break;
LAB_180850330:
    if (*piVar7 != -1) {
      iVar11 = ((int *)*plVar6)[iVar11];
      plVar16 = uStack_58;
      goto joined_r0x00018085040e;
    }
  }
LAB_180850347:
  FUN_1808bb9e0(plVar6);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_180984cd0,0x193,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808501c0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong in_RAX;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint64_t unaff_RBX;
  uint *puVar13;
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  uint *puVar14;
  longlong *plVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar16;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int iStack0000000000000048;
  int32_t uStack000000000000004c;
  int iStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int iStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  if (unaff_RSI != 0) {
    FUN_180768360();
  }
  do {
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      FUN_180768360();
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      iVar10 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)param_1[6];
      do {
        if (*piVar6 != -1) {
          iVar10 = ((int *)param_1[6])[iVar10];
          goto LAB_18085024c;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar7 != (int)param_1[7]);
    }
    iVar10 = -1;
LAB_18085024c:
    lVar7 = param_1[5];
    puVar12 = (uint *)((longlong)iVar10 * 0x20 + param_1[8]);
    uStack0000000000000030 = *puVar12;
    uStack0000000000000034 = puVar12[1];
    uStack0000000000000038 = puVar12[2];
    uStack000000000000003c = puVar12[3];
    bVar16 = lVar7 == 0;
    if (bVar16) {
      lVar7 = 0;
    }
    else {
      FUN_180768360();
    }
    uVar3 = uStack000000000000003c;
    uVar4 = uStack0000000000000038;
    uVar1 = uStack0000000000000030;
    lVar9 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    lVar2 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar11 = *(int *)(*param_1 +
                         (longlong)
                         (int)((uStack0000000000000030 ^ uStack0000000000000034 ^
                                uStack0000000000000038 ^ uStack000000000000003c) &
                              (int)param_1[1] - 1U) * 4), iVar11 != -1)) {
      do {
        plVar5 = (longlong *)((longlong)iVar11 * 0x20 + param_1[2]);
        if ((*plVar5 == lVar2) && (plVar5[1] == lVar9)) {
          lVar8 = plVar5[3];
          goto LAB_1808502f3;
        }
        iVar11 = (int)plVar5[2];
      } while (iVar11 != -1);
    }
    lVar8 = 0;
LAB_1808502f3:
    if (!bVar16) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
    if (lVar8 != 0) {
      plVar5 = *(longlong **)((longlong)iVar10 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar5[1] == 0) goto LAB_180850347;
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)*plVar5;
      goto LAB_180850330;
    }
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      FUN_180768360();
    }
    if ((int)param_1[7] != 0) {
      lVar8 = (longlong)
              (int)((uVar1 ^ uStack0000000000000034 ^ uVar4 ^ uVar3) & (int)param_1[7] - 1U);
      plVar5 = (longlong *)(param_1[6] + lVar8 * 4);
      iVar10 = *(int *)(param_1[6] + lVar8 * 4);
      if (iVar10 != -1) {
        do {
          plVar15 = (longlong *)((longlong)iVar10 * 0x20 + param_1[8]);
          if ((*plVar15 == lVar2) && (plVar15[1] == lVar9)) {
            iVar10 = FUN_180852bb0(param_1,&stack0x00000030,plVar15 + 3);
            if (iVar10 == 0) {
              lVar2 = *plVar5;
              lVar9 = (longlong)(int)lVar2 * 0x20 + param_1[8];
              *(uint64_t *)(lVar9 + 0x18) = 0;
              *(int *)plVar5 = *(int *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x10) = (int)param_1[10];
              *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar2;
            }
            goto LAB_1808505e7;
          }
          iVar10 = (int)plVar15[2];
          plVar5 = plVar15 + 2;
        } while (iVar10 != -1);
      }
    }
    iVar10 = 0x1c;
LAB_1808505e7:
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
  } while (iVar10 == 0);
LAB_180850643:
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(unaff_RSI);
  }
  return iVar10;
joined_r0x00018085040e:
  _uStack0000000000000040 = plVar15;
  if (iVar10 == -1) goto LAB_180850347;
  puVar12 = (uint *)((longlong)iVar10 * 0x10 + plVar5[2]);
  if ((int)plVar5[1] == 0) {
LAB_18085046c:
    iVar10 = 0x1c;
    goto LAB_180850643;
  }
  uVar1 = *puVar12;
  lVar7 = (longlong)(int)((int)plVar5[1] - 1U & uVar1);
  puVar13 = (uint *)(*plVar5 + lVar7 * 4);
  uVar4 = *(uint *)(*plVar5 + lVar7 * 4);
  if (uVar4 == 0xffffffff) goto LAB_18085046c;
  while (puVar14 = (uint *)((longlong)(int)uVar4 * 0x10 + plVar5[2]), *puVar14 != uVar1) {
    uVar4 = puVar14[1];
    puVar13 = puVar14 + 1;
    if (uVar4 == 0xffffffff) goto LAB_18085046c;
  }
  iVar10 = FUN_1807d28c0(lVar8,puVar12,puVar14 + 2);
  if (iVar10 != 0) goto LAB_180850643;
  uVar1 = *puVar13;
  lVar7 = (longlong)(int)uVar1 * 0x10 + plVar5[2];
  uStack000000000000004c = 0xffffffff;
  *(uint64_t *)(lVar7 + 8) = 0;
  *puVar13 = *(uint *)(lVar7 + 4);
  *(int *)(lVar7 + 4) = (int)plVar5[4];
  *(int *)((longlong)plVar5 + 0x24) = *(int *)((longlong)plVar5 + 0x24) + -1;
  *(uint *)(plVar5 + 4) = uVar1;
  if ((int)plVar5[1] != 0) {
    iStack0000000000000048 = 0;
    lVar7 = 0;
    piVar6 = (int *)*plVar5;
    do {
      if (*piVar6 != -1) {
        iVar10 = ((int *)*plVar5)[iStack0000000000000048];
        goto LAB_1808504f5;
      }
      iStack0000000000000048 = iStack0000000000000048 + 1;
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar7 != (int)plVar5[1]);
  }
  iStack0000000000000048 = -1;
  iVar10 = -1;
LAB_1808504f5:
  in_stack_00000068 = CONCAT44(uStack0000000000000054,iVar10);
  uStack0000000000000040 = SUB84(plVar5,0);
  uStack0000000000000044 = (int32_t)((ulonglong)plVar5 >> 0x20);
  uStack0000000000000064 = 0xffffffff;
  plVar15 = plVar5;
  iStack0000000000000050 = iVar10;
  uStack0000000000000058 = uStack0000000000000040;
  uStack000000000000005c = uStack0000000000000044;
  iStack0000000000000060 = iStack0000000000000048;
  goto joined_r0x00018085040e;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar7 = lVar7 + 1;
    piVar6 = piVar6 + 1;
    if (lVar7 == (int)plVar5[1]) break;
LAB_180850330:
    if (*piVar6 != -1) {
      iVar10 = ((int *)*plVar5)[iVar10];
      plVar15 = _uStack0000000000000040;
      goto joined_r0x00018085040e;
    }
  }
LAB_180850347:
  FUN_1808bb9e0(plVar5);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180984cd0,0x193,1);
}





// 函数: void FUN_18085067a(void)
void FUN_18085067a(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180850690(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  bool bVar17;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint64_t uStack_58;
  int iStack_50;
  int32_t uStack_4c;
  int iStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int iStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_180768360();
  }
  do {
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      FUN_180768360();
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      iVar11 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)param_1[6];
      do {
        if (*piVar7 != -1) {
          iVar11 = ((int *)param_1[6])[iVar11];
          goto LAB_18085072c;
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != (int)param_1[7]);
    }
    iVar11 = -1;
LAB_18085072c:
    lVar8 = param_1[5];
    puVar13 = (uint *)((longlong)iVar11 * 0x20 + param_1[8]);
    uStack_68 = *puVar13;
    uStack_64 = puVar13[1];
    uStack_60 = puVar13[2];
    uStack_5c = puVar13[3];
    bVar17 = lVar8 == 0;
    if (bVar17) {
      lVar8 = 0;
    }
    else {
      FUN_180768360();
    }
    uVar4 = uStack_5c;
    uVar5 = uStack_60;
    uVar1 = uStack_68;
    lVar10 = CONCAT44(uStack_5c,uStack_60);
    lVar3 = CONCAT44(uStack_64,uStack_68);
    if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar12 = *(int *)(*param_1 +
                         (longlong)
                         (int)((uStack_68 ^ uStack_64 ^ uStack_60 ^ uStack_5c) &
                              (int)param_1[1] - 1U) * 4), iVar12 != -1)) {
      do {
        plVar6 = (longlong *)((longlong)iVar12 * 0x20 + param_1[2]);
        if ((*plVar6 == lVar3) && (plVar6[1] == lVar10)) {
          lVar9 = plVar6[3];
          goto LAB_1808507d3;
        }
        iVar12 = (int)plVar6[2];
      } while (iVar12 != -1);
    }
    lVar9 = 0;
LAB_1808507d3:
    if (!bVar17) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    if (lVar9 != 0) {
      plVar6 = *(longlong **)((longlong)iVar11 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar6[1] == 0) goto LAB_180850827;
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)*plVar6;
      goto LAB_180850810;
    }
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      FUN_180768360();
    }
    if ((int)param_1[7] != 0) {
      lVar9 = (longlong)(int)((uVar1 ^ uStack_64 ^ uVar5 ^ uVar4) & (int)param_1[7] - 1U);
      plVar6 = (longlong *)(param_1[6] + lVar9 * 4);
      iVar11 = *(int *)(param_1[6] + lVar9 * 4);
      if (iVar11 != -1) {
        do {
          plVar16 = (longlong *)((longlong)iVar11 * 0x20 + param_1[8]);
          if ((*plVar16 == lVar3) && (plVar16[1] == lVar10)) {
            iVar11 = FUN_180852bb0(param_1,&uStack_68,plVar16 + 3);
            if (iVar11 == 0) {
              lVar3 = *plVar6;
              lVar10 = (longlong)(int)lVar3 * 0x20 + param_1[8];
              *(uint64_t *)(lVar10 + 0x18) = 0;
              *(int *)plVar6 = *(int *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x10) = (int)param_1[10];
              *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar3;
            }
            goto LAB_180850ac7;
          }
          iVar11 = (int)plVar16[2];
          plVar6 = plVar16 + 2;
        } while (iVar11 != -1);
      }
    }
    iVar11 = 0x1c;
LAB_180850ac7:
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
  } while (iVar11 == 0);
LAB_180850b23:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return iVar11;
joined_r0x0001808508ee:
  uStack_58 = plVar16;
  if (iVar11 == -1) goto LAB_180850827;
  puVar13 = (uint *)((longlong)iVar11 * 0x10 + plVar6[2]);
  if ((int)plVar6[1] == 0) {
LAB_18085094c:
    iVar11 = 0x1c;
    goto LAB_180850b23;
  }
  uVar1 = *puVar13;
  lVar8 = (longlong)(int)((int)plVar6[1] - 1U & uVar1);
  puVar14 = (uint *)(*plVar6 + lVar8 * 4);
  uVar5 = *(uint *)(*plVar6 + lVar8 * 4);
  if (uVar5 == 0xffffffff) goto LAB_18085094c;
  while (puVar15 = (uint *)((longlong)(int)uVar5 * 0x10 + plVar6[2]), *puVar15 != uVar1) {
    uVar5 = puVar15[1];
    puVar14 = puVar15 + 1;
    if (uVar5 == 0xffffffff) goto LAB_18085094c;
  }
  iVar11 = FUN_1807d28c0(lVar9,puVar13,puVar15 + 2);
  if (iVar11 != 0) goto LAB_180850b23;
  uVar1 = *puVar14;
  lVar8 = (longlong)(int)uVar1 * 0x10 + plVar6[2];
  uStack_4c = 0xffffffff;
  *(uint64_t *)(lVar8 + 8) = 0;
  *puVar14 = *(uint *)(lVar8 + 4);
  *(int *)(lVar8 + 4) = (int)plVar6[4];
  *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + -1;
  *(uint *)(plVar6 + 4) = uVar1;
  if ((int)plVar6[1] != 0) {
    iStack_50 = 0;
    lVar8 = 0;
    piVar7 = (int *)*plVar6;
    do {
      if (*piVar7 != -1) {
        iVar11 = ((int *)*plVar6)[iStack_50];
        goto LAB_1808509d5;
      }
      iStack_50 = iStack_50 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar8 != (int)plVar6[1]);
  }
  iStack_50 = -1;
  iVar11 = -1;
LAB_1808509d5:
  uStack_30 = CONCAT44(uStack_44,iVar11);
  uStack_58._0_4_ = SUB84(plVar6,0);
  uStack_58._4_4_ = (int32_t)((ulonglong)plVar6 >> 0x20);
  uStack_34 = 0xffffffff;
  plVar16 = plVar6;
  iStack_48 = iVar11;
  uStack_40 = (int32_t)uStack_58;
  uStack_3c = uStack_58._4_4_;
  iStack_38 = iStack_50;
  goto joined_r0x0001808508ee;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar8 = lVar8 + 1;
    piVar7 = piVar7 + 1;
    if (lVar8 == (int)plVar6[1]) break;
LAB_180850810:
    if (*piVar7 != -1) {
      iVar11 = ((int *)*plVar6)[iVar11];
      plVar16 = uStack_58;
      goto joined_r0x0001808508ee;
    }
  }
LAB_180850827:
  FUN_1808bbe80(plVar6);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_180984cd0,0x193,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808506a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong in_RAX;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint64_t unaff_RBX;
  uint *puVar13;
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  uint *puVar14;
  longlong *plVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar16;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int iStack0000000000000048;
  int32_t uStack000000000000004c;
  int iStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int iStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  if (unaff_RSI != 0) {
    FUN_180768360();
  }
  do {
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      FUN_180768360();
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      iVar10 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)param_1[6];
      do {
        if (*piVar6 != -1) {
          iVar10 = ((int *)param_1[6])[iVar10];
          goto LAB_18085072c;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar7 != (int)param_1[7]);
    }
    iVar10 = -1;
LAB_18085072c:
    lVar7 = param_1[5];
    puVar12 = (uint *)((longlong)iVar10 * 0x20 + param_1[8]);
    uStack0000000000000030 = *puVar12;
    uStack0000000000000034 = puVar12[1];
    uStack0000000000000038 = puVar12[2];
    uStack000000000000003c = puVar12[3];
    bVar16 = lVar7 == 0;
    if (bVar16) {
      lVar7 = 0;
    }
    else {
      FUN_180768360();
    }
    uVar3 = uStack000000000000003c;
    uVar4 = uStack0000000000000038;
    uVar1 = uStack0000000000000030;
    lVar9 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    lVar2 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar11 = *(int *)(*param_1 +
                         (longlong)
                         (int)((uStack0000000000000030 ^ uStack0000000000000034 ^
                                uStack0000000000000038 ^ uStack000000000000003c) &
                              (int)param_1[1] - 1U) * 4), iVar11 != -1)) {
      do {
        plVar5 = (longlong *)((longlong)iVar11 * 0x20 + param_1[2]);
        if ((*plVar5 == lVar2) && (plVar5[1] == lVar9)) {
          lVar8 = plVar5[3];
          goto LAB_1808507d3;
        }
        iVar11 = (int)plVar5[2];
      } while (iVar11 != -1);
    }
    lVar8 = 0;
LAB_1808507d3:
    if (!bVar16) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
    if (lVar8 != 0) {
      plVar5 = *(longlong **)((longlong)iVar10 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar5[1] == 0) goto LAB_180850827;
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)*plVar5;
      goto LAB_180850810;
    }
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      FUN_180768360();
    }
    if ((int)param_1[7] != 0) {
      lVar8 = (longlong)
              (int)((uVar1 ^ uStack0000000000000034 ^ uVar4 ^ uVar3) & (int)param_1[7] - 1U);
      plVar5 = (longlong *)(param_1[6] + lVar8 * 4);
      iVar10 = *(int *)(param_1[6] + lVar8 * 4);
      if (iVar10 != -1) {
        do {
          plVar15 = (longlong *)((longlong)iVar10 * 0x20 + param_1[8]);
          if ((*plVar15 == lVar2) && (plVar15[1] == lVar9)) {
            iVar10 = FUN_180852bb0(param_1,&stack0x00000030,plVar15 + 3);
            if (iVar10 == 0) {
              lVar2 = *plVar5;
              lVar9 = (longlong)(int)lVar2 * 0x20 + param_1[8];
              *(uint64_t *)(lVar9 + 0x18) = 0;
              *(int *)plVar5 = *(int *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x10) = (int)param_1[10];
              *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar2;
            }
            goto LAB_180850ac7;
          }
          iVar10 = (int)plVar15[2];
          plVar5 = plVar15 + 2;
        } while (iVar10 != -1);
      }
    }
    iVar10 = 0x1c;
LAB_180850ac7:
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
  } while (iVar10 == 0);
LAB_180850b23:
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(unaff_RSI);
  }
  return iVar10;
joined_r0x0001808508ee:
  _uStack0000000000000040 = plVar15;
  if (iVar10 == -1) goto LAB_180850827;
  puVar12 = (uint *)((longlong)iVar10 * 0x10 + plVar5[2]);
  if ((int)plVar5[1] == 0) {
LAB_18085094c:
    iVar10 = 0x1c;
    goto LAB_180850b23;
  }
  uVar1 = *puVar12;
  lVar7 = (longlong)(int)((int)plVar5[1] - 1U & uVar1);
  puVar13 = (uint *)(*plVar5 + lVar7 * 4);
  uVar4 = *(uint *)(*plVar5 + lVar7 * 4);
  if (uVar4 == 0xffffffff) goto LAB_18085094c;
  while (puVar14 = (uint *)((longlong)(int)uVar4 * 0x10 + plVar5[2]), *puVar14 != uVar1) {
    uVar4 = puVar14[1];
    puVar13 = puVar14 + 1;
    if (uVar4 == 0xffffffff) goto LAB_18085094c;
  }
  iVar10 = FUN_1807d28c0(lVar8,puVar12,puVar14 + 2);
  if (iVar10 != 0) goto LAB_180850b23;
  uVar1 = *puVar13;
  lVar7 = (longlong)(int)uVar1 * 0x10 + plVar5[2];
  uStack000000000000004c = 0xffffffff;
  *(uint64_t *)(lVar7 + 8) = 0;
  *puVar13 = *(uint *)(lVar7 + 4);
  *(int *)(lVar7 + 4) = (int)plVar5[4];
  *(int *)((longlong)plVar5 + 0x24) = *(int *)((longlong)plVar5 + 0x24) + -1;
  *(uint *)(plVar5 + 4) = uVar1;
  if ((int)plVar5[1] != 0) {
    iStack0000000000000048 = 0;
    lVar7 = 0;
    piVar6 = (int *)*plVar5;
    do {
      if (*piVar6 != -1) {
        iVar10 = ((int *)*plVar5)[iStack0000000000000048];
        goto LAB_1808509d5;
      }
      iStack0000000000000048 = iStack0000000000000048 + 1;
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar7 != (int)plVar5[1]);
  }
  iStack0000000000000048 = -1;
  iVar10 = -1;
LAB_1808509d5:
  in_stack_00000068 = CONCAT44(uStack0000000000000054,iVar10);
  uStack0000000000000040 = SUB84(plVar5,0);
  uStack0000000000000044 = (int32_t)((ulonglong)plVar5 >> 0x20);
  uStack0000000000000064 = 0xffffffff;
  plVar15 = plVar5;
  iStack0000000000000050 = iVar10;
  uStack0000000000000058 = uStack0000000000000040;
  uStack000000000000005c = uStack0000000000000044;
  iStack0000000000000060 = iStack0000000000000048;
  goto joined_r0x0001808508ee;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar7 = lVar7 + 1;
    piVar6 = piVar6 + 1;
    if (lVar7 == (int)plVar5[1]) break;
LAB_180850810:
    if (*piVar6 != -1) {
      iVar10 = ((int *)*plVar5)[iVar10];
      plVar15 = _uStack0000000000000040;
      goto joined_r0x0001808508ee;
    }
  }
LAB_180850827:
  FUN_1808bbe80(plVar5);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180984cd0,0x193,1);
}





// 函数: void FUN_180850b5a(void)
void FUN_180850b5a(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




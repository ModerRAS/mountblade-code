#include "TaleWorlds.Native.Split.h"

// 99_part_13_part067.c - 2 个函数

// 函数: void FUN_1808d6650(uint64_t *param_1,uint64_t *param_2,longlong param_3)
void FUN_1808d6650(uint64_t *param_1,uint64_t *param_2,longlong param_3)

{
  int32_t uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int8_t auStack_108 [32];
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  int8_t auStack_78 [40];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  lVar5 = param_1[6];
  puStack_90 = param_2;
  puStack_88 = param_1;
  if (lVar5 != 0) {
    lVar10 = lVar5 + 0x10;
    lVar5 = (**(code **)(*(longlong *)*param_2 + 0x270))((longlong *)*param_2,lVar10,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar10,auStack_78);
    }
    param_1[6] = lVar5;
  }
  plVar16 = (longlong *)0x0;
  iVar4 = 0;
  if (lVar5 != 0) {
    plVar11 = param_2 + 0x9c;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar11 = plVar16;
    }
    if (plVar11 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar11 + 0x24) != 0) && ((int)plVar11[1] != 0)) &&
         (iVar3 = *(int *)(*plVar11 +
                          (longlong)
                          (int)((*(uint *)(lVar5 + 0x1c) ^ *(uint *)(lVar5 + 0x18) ^
                                 *(uint *)(lVar5 + 0x14) ^ *(uint *)(lVar5 + 0x10)) &
                               (int)plVar11[1] - 1U) * 4), iVar3 != -1)) {
        lVar10 = plVar11[2];
        do {
          lVar6 = (longlong)iVar3;
          if ((*(longlong *)(lVar10 + lVar6 * 0x18) == *(longlong *)(lVar5 + 0x10)) &&
             (*(longlong *)(lVar10 + (lVar6 * 3 + 1) * 8) == *(longlong *)(lVar5 + 0x18)))
          goto LAB_1808d675b;
          iVar3 = *(int *)(lVar10 + (lVar6 * 3 + 2) * 8);
        } while (iVar3 != -1);
      }
      iVar3 = -1;
LAB_1808d675b:
      if (iVar3 != -1) {
        plVar11 = param_1 + 8;
        plVar7 = (longlong *)(param_1[8] + -0x18);
        if (param_1[8] == 0) {
          plVar7 = plVar16;
        }
        plVar8 = plVar7 + 3;
        if (plVar7 == (longlong *)0x0) {
          plVar8 = plVar16;
        }
joined_r0x0001808d678c:
        do {
          if (plVar8 == plVar11) {
            lVar5 = param_1[6];
            plVar7 = *(longlong **)(lVar5 + 0x28);
            goto LAB_1808d68bb;
          }
          plVar7 = (longlong *)(*plVar8 + -0x18);
          if (*plVar8 == 0) {
            plVar7 = plVar16;
          }
          plVar9 = plVar7 + 3;
          if (plVar7 == (longlong *)0x0) {
            plVar9 = plVar16;
          }
          lVar5 = plVar8[2];
          iVar3 = *(int *)(param_1[6] + 0x30);
          plVar8 = plVar9;
          if (0 < iVar3) {
            lVar10 = *(longlong *)(param_1[6] + 0x28);
            plVar7 = plVar16;
            do {
              iVar12 = (int)plVar7;
              if ((*(longlong *)(lVar10 + (longlong)iVar12 * 0x10) == *(longlong *)(lVar5 + 0x10))
                 && (*(longlong *)(lVar10 + 8 + (longlong)iVar12 * 0x10) ==
                     *(longlong *)(lVar5 + 0x18))) goto joined_r0x0001808d678c;
              plVar7 = (longlong *)(ulonglong)(iVar12 + 1U);
            } while ((int)(iVar12 + 1U) < iVar3);
          }
          plVar7 = (longlong *)(*plVar11 + -0x18);
          if (*plVar11 == 0) {
            plVar7 = plVar16;
          }
          plVar9 = plVar16;
          if (plVar7 != (longlong *)0x0) {
            plVar9 = plVar7 + 3;
          }
          while (plVar9 != plVar11) {
            plVar7 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = (longlong *)0x28;
            }
            if ((*(longlong *)(*plVar7 + 0x10) == *(longlong *)(lVar5 + 0x10)) &&
               (*(longlong *)(*plVar7 + 0x18) == *(longlong *)(lVar5 + 0x18))) {
              plVar7 = plVar9 + -3;
              if (plVar9 == (longlong *)0x0) {
                plVar7 = plVar16;
              }
              if (plVar9 != plVar11) {
                *(longlong *)plVar9[1] = *plVar9;
                *(longlong *)(*plVar9 + 8) = plVar9[1];
                plVar9[1] = (longlong)plVar9;
                *plVar9 = (longlong)plVar9;
              }
              iVar3 = func_0x0001808bef20(*(uint64_t *)(param_3 + 8),plVar7);
              if (iVar3 != 0) goto FUN_1808d6c72;
              break;
            }
            if (plVar9 == plVar11) break;
            plVar7 = (longlong *)(*plVar9 + -0x18);
            if (*plVar9 == 0) {
              plVar7 = plVar16;
            }
            plVar9 = plVar16;
            if (plVar7 != (longlong *)0x0) {
              plVar9 = plVar7 + 3;
            }
          }
        } while( true );
      }
    }
  }
LAB_1808d6a20:
  plVar11 = param_1 + 7;
  lVar5 = *(longlong *)(param_1[7] + 0x18);
  cVar2 = func_0x0001808d57d0(param_2,lVar5);
  if (cVar2 != '\0') {
    lVar10 = lVar5;
    if ((lVar5 != 0) &&
       (lVar10 = (**(code **)(*(longlong *)*param_2 + 0x278))((longlong *)*param_2,lVar5 + 0x10,1),
       lStack_98 = lVar10, lVar10 == 0)) {
      uStack_a0 = (uint)*(byte *)(lVar5 + 0x1f);
      uStack_a8 = (uint)*(byte *)(lVar5 + 0x1e);
      uStack_b0 = (uint)*(byte *)(lVar5 + 0x1d);
      uStack_b8 = (uint)*(byte *)(lVar5 + 0x1c);
      uStack_c0 = (uint)*(byte *)(lVar5 + 0x1b);
      uStack_c8 = (uint)*(byte *)(lVar5 + 0x1a);
      uStack_d0 = (uint)*(byte *)(lVar5 + 0x19);
      uStack_d8 = (uint)*(byte *)(lVar5 + 0x18);
      uStack_e0 = (uint)*(ushort *)(lVar5 + 0x16);
      uStack_e8 = (uint)*(ushort *)(lVar5 + 0x14);
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_78,0x27,&UNK_180958180,*(int32_t *)(lVar5 + 0x10));
    }
    if (((*(byte *)(lVar10 + 0x34) ^ *(byte *)(lVar5 + 0x34)) & 1) != 0) {
      lVar5 = *plVar11;
      uVar1 = *(int32_t *)(lVar5 + 0x28);
      if ((*(uint *)((longlong)param_1 + 0x2c) >> 1 & 1) != 0) {
        plVar7 = param_1 + 1;
        *(longlong *)param_1[2] = *plVar7;
        *(uint64_t *)(*plVar7 + 8) = param_1[2];
        param_1[2] = plVar7;
        *plVar7 = (longlong)plVar7;
        lVar5 = *plVar11;
      }
      if (((*(int *)(lVar5 + 0x30) != -1) && (iVar3 = func_0x0001808b8390(param_3), iVar3 != 0)) ||
         (iVar3 = FUN_1808b88a0(param_3,lVar10,plVar11), iVar3 != 0)) goto FUN_1808d6c72;
      if ((*(uint *)((longlong)param_1 + 0x2c) >> 1 & 1) != 0) {
        lVar5 = *plVar11;
        plVar7 = param_1 + 1;
        if (param_1 == (uint64_t *)0x0) {
          plVar7 = plVar16;
        }
        if (plVar7 == (longlong *)0x0) {
LAB_1808d6bd1:
          iVar4 = 0x1c;
        }
        else {
          plVar8 = (longlong *)*plVar7;
          plVar9 = plVar16;
          if (plVar8 != plVar7) {
            do {
              plVar8 = (longlong *)*plVar8;
              uVar13 = (int)plVar9 + 1;
              plVar9 = (longlong *)(ulonglong)uVar13;
            } while (plVar8 != plVar7);
            if (uVar13 != 0) goto LAB_1808d6bd1;
          }
          plVar7[1] = *(longlong *)(lVar5 + 0x60);
          *plVar7 = lVar5 + 0x58;
          *(longlong **)(lVar5 + 0x60) = plVar7;
          *(longlong **)plVar7[1] = plVar7;
        }
        if (iVar4 != 0) goto FUN_1808d6c72;
      }
      iVar4 = (**(code **)*param_1)(param_1,*plVar11,uVar1,*(int32_t *)(*plVar11 + 0x28));
      if (iVar4 != 0) goto FUN_1808d6c72;
    }
  }
  plVar11 = (longlong *)(param_1[8] + -0x18);
  if (param_1[8] == 0) {
    plVar11 = plVar16;
  }
  plVar7 = plVar16;
  if (plVar11 != (longlong *)0x0) {
    plVar7 = plVar11 + 3;
  }
  while (plVar7 != param_1 + 8) {
    plVar11 = plVar7 + -3;
    if (plVar7 == (longlong *)0x0) {
      plVar11 = plVar16;
    }
    iVar4 = FUN_1808c6890(plVar11,param_2,param_3);
    if ((iVar4 != 0) || (plVar7 == param_1 + 8)) break;
    plVar11 = (longlong *)(*plVar7 + -0x18);
    if (*plVar7 == 0) {
      plVar11 = plVar16;
    }
    plVar7 = plVar16;
    if (plVar11 != (longlong *)0x0) {
      plVar7 = plVar11 + 3;
    }
  }
FUN_1808d6c72:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_108);
LAB_1808d68bb:
  param_2 = puStack_90;
  if ((plVar7 < *(longlong **)(lVar5 + 0x28)) ||
     (*(longlong **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x30) * 2 <= plVar7))
  goto LAB_1808d6a20;
  plVar8 = (longlong *)(*plVar11 + -0x18);
  if (*plVar11 == 0) {
    plVar8 = plVar16;
  }
  plVar9 = plVar16;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8 + 3;
  }
  while (plVar9 != plVar11) {
    plVar8 = plVar9 + 2;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = (longlong *)0x28;
    }
    if ((*(longlong *)(*plVar8 + 0x10) == *plVar7) && (*(longlong *)(*plVar8 + 0x18) == plVar7[1]))
    {
      plVar8 = plVar9 + -3;
      if (plVar9 == (longlong *)0x0) {
        plVar8 = plVar16;
      }
      if (plVar8 != (longlong *)0x0) goto LAB_1808d6a08;
      break;
    }
    if (plVar9 == plVar11) break;
    plVar8 = (longlong *)(*plVar9 + -0x18);
    if (*plVar9 == 0) {
      plVar8 = plVar16;
    }
    plVar9 = plVar16;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8 + 3;
    }
  }
  lStack_98 = 0;
  iVar3 = FUN_1808b6c30(param_3,plVar7,0,&lStack_98);
  if (iVar3 != 0) goto FUN_1808d6c72;
  if ((param_1[10] == 0) || (2 < *(int *)(param_1[10] + 0x2e4))) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  iVar3 = FUN_1808c6c00(lStack_98,uVar14);
  if ((iVar3 != 0) ||
     (iVar3 = FUN_1808c6c60(lStack_98,*(int32_t *)(param_1[7] + 0x28),0), iVar3 != 0))
  goto FUN_1808d6c72;
  plVar8 = (longlong *)(lStack_98 + 0x18);
  if (lStack_98 == 0) {
    plVar8 = plVar16;
  }
  if (plVar8 == (longlong *)0x0) goto FUN_1808d6c72;
  plVar9 = (longlong *)*plVar8;
  plVar15 = plVar16;
  if (plVar9 != plVar8) {
    do {
      plVar9 = (longlong *)*plVar9;
      uVar13 = (int)plVar15 + 1;
      plVar15 = (longlong *)(ulonglong)uVar13;
    } while (plVar9 != plVar8);
    if (uVar13 != 0) goto FUN_1808d6c72;
  }
  plVar8[1] = param_1[9];
  *plVar8 = (longlong)plVar11;
  param_1[9] = plVar8;
  *(longlong **)plVar8[1] = plVar8;
LAB_1808d6a08:
  plVar7 = plVar7 + 2;
  goto LAB_1808d68bb;
}






// 函数: void FUN_1808d6a27(uint64_t param_1)
void FUN_1808d6a27(uint64_t param_1)

{
  char cVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int unaff_EBX;
  int32_t unaff_0000001c;
  uint64_t *unaff_RBP;
  longlong *plVar6;
  uint64_t *unaff_R14;
  ulonglong in_stack_000000b8;
  
  plVar6 = unaff_RBP + 7;
  lVar5 = *(longlong *)(in_RAX + 0x18);
  cVar1 = func_0x0001808d57d0(param_1,lVar5);
  if (cVar1 != '\0') {
    lVar3 = lVar5;
    if ((lVar5 != 0) &&
       (lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x278))
                          ((longlong *)*unaff_R14,lVar5 + 0x10,1), lVar3 == 0)) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(&stack0x00000090,0x27,&UNK_180958180,*(int32_t *)(lVar5 + 0x10),
                    *(int16_t *)(lVar5 + 0x14));
    }
    if (((*(byte *)(lVar3 + 0x34) ^ *(byte *)(lVar5 + 0x34)) & 1) != 0) {
      lVar5 = *plVar6;
      if ((*(uint *)((longlong)unaff_RBP + 0x2c) >> 1 & 1) != 0) {
        plVar4 = unaff_RBP + 1;
        *(longlong *)unaff_RBP[2] = *plVar4;
        *(uint64_t *)(*plVar4 + 8) = unaff_RBP[2];
        unaff_RBP[2] = plVar4;
        *plVar4 = (longlong)plVar4;
        lVar5 = *plVar6;
      }
      if (((*(int *)(lVar5 + 0x30) != -1) && (iVar2 = func_0x0001808b8390(), iVar2 != 0)) ||
         (iVar2 = FUN_1808b88a0(), iVar2 != 0)) goto LAB_1808d6c62;
      if ((*(uint *)((longlong)unaff_RBP + 0x2c) >> 1 & 1) != 0) {
        lVar5 = *plVar6;
        plVar6 = unaff_RBP + 1;
        if (unaff_RBP == (uint64_t *)0x0) {
          plVar6 = (longlong *)CONCAT44(unaff_0000001c,unaff_EBX);
        }
        if (plVar6 == (longlong *)0x0) {
LAB_1808d6bd1:
          iVar2 = 0x1c;
        }
        else {
          plVar4 = (longlong *)*plVar6;
          iVar2 = unaff_EBX;
          if (plVar4 != plVar6) {
            do {
              plVar4 = (longlong *)*plVar4;
              iVar2 = iVar2 + 1;
            } while (plVar4 != plVar6);
            if (iVar2 != 0) goto LAB_1808d6bd1;
          }
          plVar6[1] = *(longlong *)(lVar5 + 0x60);
          *plVar6 = lVar5 + 0x58;
          *(longlong **)(lVar5 + 0x60) = plVar6;
          *(longlong **)plVar6[1] = plVar6;
          iVar2 = unaff_EBX;
        }
        if (iVar2 != 0) goto LAB_1808d6c62;
      }
      iVar2 = (**(code **)*unaff_RBP)();
      if (iVar2 != 0) goto LAB_1808d6c62;
    }
  }
  lVar5 = unaff_RBP[8] + -0x18;
  if (unaff_RBP[8] == 0) {
    lVar5 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  if (lVar5 == 0) {
    plVar6 = (longlong *)CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    plVar6 = (longlong *)(lVar5 + 0x18);
  }
  while (((plVar6 != unaff_RBP + 8 && (iVar2 = FUN_1808c6890(), iVar2 == 0)) &&
         (plVar6 != unaff_RBP + 8))) {
    lVar5 = *plVar6 + -0x18;
    if (*plVar6 == 0) {
      lVar5 = CONCAT44(unaff_0000001c,unaff_EBX);
    }
    if (lVar5 == 0) {
      plVar6 = (longlong *)CONCAT44(unaff_0000001c,unaff_EBX);
    }
    else {
      plVar6 = (longlong *)(lVar5 + 0x18);
    }
  }
LAB_1808d6c62:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b8 ^ (ulonglong)&stack0x00000000);
}







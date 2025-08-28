#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part033.c - 5 个函数

// 函数: void FUN_18085ca30(longlong param_1,ulonglong param_2)
void FUN_18085ca30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  uint64_t ****ppppuVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int32_t *puVar11;
  uint *puVar12;
  uint64_t uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint64_t ****ppppuVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint64_t *****pppppuVar24;
  uint uVar25;
  int8_t auStack_b8 [32];
  longlong lStack_98;
  uint64_t ***pppuStack_88;
  uint uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  uint uStack_74;
  uint64_t ****ppppuStack_60;
  uint64_t ****ppppuStack_58;
  int iStack_50;
  int iStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x2e4) < 3) goto LAB_18085d424;
  FUN_18084da10();
  if ((*(byte *)(param_1 + 0x128) & 8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
      iVar8 = *(int *)(param_1 + 0x34);
      lVar14 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x1c);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76);
      }
    }
    if (1 < iVar8 - 4U) goto LAB_18085d424;
    puVar11 = (int32_t *)FUN_18084da10();
    *(int32_t *)(param_1 + 0x148) = *puVar11;
    if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
      uVar3 = *(int32_t *)(param_1 + 0x30);
      lVar14 = *(longlong *)(param_1 + 0x38);
    }
    else {
      uVar3 = *(int32_t *)(*(longlong *)(param_1 + 0x78) + 0x18);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    lStack_98 = 0;
    iVar8 = FUN_18085bc30(param_1,uVar3,0,0);
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76);
      }
    }
    if (iVar8 != 0) goto LAB_18085d424;
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
      iStack_50 = *(int *)(param_1 + 0x30);
      lVar14 = *(longlong *)(param_1 + 0x38);
    }
    else {
      iStack_50 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x18);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    ppppuStack_60 = &ppppuStack_60;
    ppppuVar18 = (uint64_t ****)(*(longlong *)(param_1 + 0x110) + 0x58);
    ppppuStack_58 = &ppppuStack_60;
    uStack_48 = 0;
    uStack_40 = 0;
    ppppuVar6 = (uint64_t ****)*ppppuVar18;
    uStack_80 = (uint)ppppuVar6;
    uStack_7c = (int32_t)((ulonglong)ppppuVar6 >> 0x20);
    for (; ((ppppuVar6 != ppppuVar18 && (*(int *)(ppppuVar6 + 2) != iStack_50)) &&
           (ppppuVar6 != ppppuVar18)); ppppuVar6 = (uint64_t ****)*ppppuVar6) {
    }
    pppuStack_88 = ppppuVar18;
    FUN_1808b0fb0(&uStack_48);
    *ppppuStack_58 = ppppuStack_60;
    ppppuStack_60[1] = ppppuStack_58;
    ppppuStack_58 = &ppppuStack_60;
    ppppuStack_60 = &ppppuStack_60;
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76);
      }
    }
    if ((ppppuVar6 == ppppuVar18) ||
       (((*(int *)(ppppuVar6 + 4) != 0 && (cVar7 = FUN_1808b0820(ppppuVar6 + 3), cVar7 == '\0')) &&
        (iVar8 = FUN_1808552c0(param_1), iVar8 != 0)))) goto LAB_18085d424;
  }
  iVar8 = -1;
  if (*(char *)(param_1 + 0x13c) == '\0') {
    iVar9 = (int)param_2;
    uVar16 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar16 != 48000) {
      iVar9 = (int)((param_2 * 48000) / (ulonglong)uVar16);
    }
    uVar20 = iVar9 - *(int *)(param_1 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar21 = uVar20;
    if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
      if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x10)) {
        uVar22 = *(ulonglong *)(param_1 + 0x10) - *(ulonglong *)(param_1 + 0x28);
        if ((longlong)uVar22 < 1) {
          uVar22 = 0;
        }
        else {
          if (uVar16 != 48000) {
            uVar22 = (longlong)(uVar22 * 48000) / (longlong)(ulonglong)uVar16;
          }
          if (0xffffffff < (longlong)uVar22) {
            uVar22 = 0xffffffff;
          }
        }
        iVar9 = -1;
        uVar16 = 0xffffffff;
        if ((uVar22 & 0xffffffff) + (ulonglong)*(uint *)(param_1 + 0x30) < 0x100000000) {
          uVar16 = (int)uVar22 + *(uint *)(param_1 + 0x30);
        }
        if ((ulonglong)uVar16 + (ulonglong)*(uint *)(param_1 + 0x108) < 0x100000000) {
          iVar9 = uVar16 + *(uint *)(param_1 + 0x108);
        }
        if ((*(int *)(param_1 + 8) - iVar9 < 0) &&
           (uVar21 = 0xffffffff, (ulonglong)uVar20 + 1 < 0x100000000)) {
          uVar21 = uVar20 + 1;
        }
      }
    }
    puVar12 = (uint *)FUN_18084da10();
    if (uVar21 != *puVar12) {
      uVar13 = FUN_18084da10();
      iVar9 = FUN_180857e50(param_1,uVar13,*(int32_t *)(param_1 + 0xc),uVar21);
      if (iVar9 != 0) goto LAB_18085d424;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  plVar15 = (longlong *)*plVar1;
  if ((plVar15 != plVar1) && ((ulonglong)plVar15[2] <= param_2)) {
    if (*(int *)((longlong)plVar15 + 0x1c) == 0) {
      iVar9 = *(int *)(plVar15 + 4);
      lVar14 = (longlong)iVar9;
      if ((-1 < iVar9) && (iVar9 < *(int *)(*(longlong *)(param_1 + 0x110) + 0x80))) {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x78);
        uVar16 = *(uint *)(lVar17 + 0x20 + lVar14 * 0x28);
        if (uVar16 == *(uint *)(plVar15 + 3)) {
          if (*(int *)(lVar17 + 0x18 + lVar14 * 0x28) < 1) {
            pppuStack_88 = (uint64_t ***)&system_buffer_ptr;
          }
          else {
            pppuStack_88 = *(uint64_t ****)(lVar17 + 0x10 + lVar14 * 0x28);
          }
          lVar17 = *(longlong *)(param_1 + 0x160);
          pppppuVar24 = (uint64_t *****)&pppuStack_88;
          uStack_80 = uVar16 / 0x30;
          uVar13 = 0x800;
LAB_18085ceec:
          iVar9 = FUN_18085ffc0(lVar17,uVar13,pppppuVar24);
          if (iVar9 != 0) goto LAB_18085d424;
        }
      }
    }
    else if (*(int *)((longlong)plVar15 + 0x1c) == 1) {
      iVar9 = *(int *)(plVar15 + 4);
      if ((-1 < iVar9) && (lVar14 = *(longlong *)(param_1 + 0x110), iVar9 < *(int *)(lVar14 + 0x90))
         ) {
        lVar17 = *(longlong *)(param_1 + 0x160);
        lVar23 = (longlong)iVar9 * 0x20 + *(longlong *)(lVar14 + 0x88);
        iStack_50 = *(int *)((longlong)plVar15 + 0x24) / *(int *)(lVar23 + 0x10) + 1;
        iStack_4c = *(int *)((longlong)plVar15 + 0x24) % *(int *)(lVar23 + 0x10) + 1;
        uStack_48 = CONCAT44(*(int32_t *)(lVar23 + 0x1c),*(uint *)(plVar15 + 3) / 0x30);
        uStack_40 = *(int32_t *)(lVar23 + 0x10);
        uStack_3c = *(int32_t *)(lVar23 + 0x14);
        if (*(longlong *)(lVar17 + 0x350) == 0) {
          pppppuVar24 = (uint64_t *****)&iStack_50;
          uVar13 = 0x1000;
        }
        else {
          ppppuStack_60 = *(uint64_t *****)(lVar14 + 0x10);
          ppppuStack_58 = *(uint64_t *****)(lVar14 + 0x18);
          pppppuVar24 = &ppppuStack_60;
          uVar13 = 0x40000;
        }
        goto LAB_18085ceec;
      }
    }
    if (plVar15 != plVar1) {
      lStack_98 = CONCAT71(lStack_98._1_7_,1);
      *(longlong *)plVar15[1] = *plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      *(longlong **)plVar15[1] = plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar15,&unknown_var_1696_ptr,0xe1);
    }
  }
  plVar15 = *(longlong **)(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x70);
  if ((plVar15 != plVar1) && ((ulonglong)plVar15[2] <= param_2)) {
    if (((*(int *)(param_1 + 0x34) - 4U < 2) &&
        (iVar9 = FUN_180857b70(param_1,param_1 + 0x28), iVar9 != 0)) ||
       ((FUN_1808c6d60(param_1 + 0x28,plVar15 + 2), *(int *)(param_1 + 0x34) - 4U < 2 &&
        (iVar9 = FUN_180855e40(param_1,param_1 + 0x28), iVar9 != 0)))) goto LAB_18085d424;
    if (plVar15 != plVar1) {
      *(longlong *)plVar15[1] = *plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      lVar14 = plVar15[4];
      if (lVar14 != 0) {
        piVar2 = (int *)(lVar14 + 0x10);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76);
        }
      }
      lStack_98 = CONCAT71(lStack_98._1_7_,1);
      *(longlong *)plVar15[1] = *plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar15,&unknown_var_1696_ptr,0xe1);
    }
  }
  if ((*(ulonglong *)(param_1 + 0x40) != 0) && (*(ulonglong *)(param_1 + 0x40) <= param_2)) {
    pppuStack_88 = (uint64_t ****)0x0;
    puVar11 = (int32_t *)FUN_18084da10();
    uStack_80 = *puVar11;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    FUN_1808c6d60(param_1 + 0x40,&pppuStack_88);
    lVar14 = CONCAT44(uStack_74,uStack_78);
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76);
      }
    }
    puVar12 = (uint *)FUN_18084da10();
    uStack_7c = 0;
    uStack_78 = 0;
    pppuStack_88 = (uint64_t ****)0x0;
    uStack_80 = *puVar12;
    *(int32_t *)(param_1 + 0x58) = 0;
    *(int32_t *)(param_1 + 0x5c) = 0;
    *(uint *)(param_1 + 0x60) = uStack_80;
    *(int32_t *)(param_1 + 100) = 0;
    *(ulonglong *)(param_1 + 0x68) = (ulonglong)uStack_74 << 0x20;
  }
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_1 + 0x30);
  puVar11 = (int32_t *)FUN_18084da10();
  uVar22 = *(ulonglong *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x24) = *puVar11;
  iVar9 = *(int *)(param_1 + 0x34);
  if (param_2 < uVar22) {
    if (iVar9 - 4U < 2) {
      if (**(longlong **)(param_1 + 0x38) == 0) {
        plVar15 = (longlong *)FUN_18084da10();
      }
      else {
        plVar15 = *(longlong **)(param_1 + 0x38) + 1;
      }
      *(int *)(param_1 + 0x24) = (int)*plVar15;
    }
  }
  else if ((iVar9 == 0) || (iVar9 == 3)) {
    uVar16 = *(uint *)(param_1 + 0x30);
    if (1 < iVar9 - 4U) {
      uVar22 = param_2 - uVar22;
      if ((longlong)uVar22 < 1) {
        uVar22 = 0;
      }
      else {
        uVar21 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar21 != 48000) {
          uVar22 = (longlong)(uVar22 * 48000) / (longlong)(ulonglong)uVar21;
        }
        if (0xffffffff < (longlong)uVar22) {
          uVar22 = 0xffffffff;
        }
      }
      if (0xffffffff < (uVar22 & 0xffffffff) + (ulonglong)uVar16) {
        *(int32_t *)(param_1 + 0x20) = 0xffffffff;
        goto LAB_18085d2fd;
      }
      uVar16 = uVar16 + (int)uVar22;
    }
    *(uint *)(param_1 + 0x20) = uVar16;
  }
  else if (iVar9 - 4U < 2) {
    plVar15 = *(longlong **)(param_1 + 0x38);
    if (plVar15 == (longlong *)0x0) goto LAB_18085d424;
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      iVar9 = *(int *)(lVar14 + 0xa0);
      iVar4 = *(int *)(lVar14 + 0xa8);
      uVar22 = param_2 - uVar22;
      if ((longlong)uVar22 < 1) {
        uVar22 = 0;
      }
      else {
        uVar16 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar16 != 48000) {
          uVar22 = (longlong)(uVar22 * 48000) / (longlong)(ulonglong)uVar16;
        }
        if (0xffffffff < (longlong)uVar22) {
          uVar22 = 0xffffffff;
        }
      }
      uVar19 = 0xffffffff;
      if ((uVar22 & 0xffffffff) + (ulonglong)*(uint *)(plVar15 + 1) < 0x100000000) {
        uVar19 = (ulonglong)(*(uint *)(plVar15 + 1) + (int)uVar22);
      }
      uVar16 = (uint)uVar19;
      *(uint *)(param_1 + 0x24) = uVar16;
      if ((uint)(iVar9 - iVar4) <= uVar16) {
        uVar21 = *(uint *)(param_1 + 0x150);
        uVar20 = *(uint *)(param_1 + 0x148);
        uVar5 = *(uint *)(param_1 + 0x158);
        uVar25 = uVar21 + uVar16;
        uVar22 = uVar19 + uVar21;
        uVar10 = uVar25;
        if (0xffffffff < uVar22) {
          uVar10 = 0xffffffff;
        }
        if (uVar20 < uVar10) {
          if (uVar19 + uVar5 < 0x100000000) {
            uVar22 = (ulonglong)(uVar16 + uVar5);
          }
          else {
            uVar22 = 0xffffffff;
          }
          if (uVar22 + uVar21 < 0x100000000) {
            iVar8 = (int)uVar22 + uVar21;
          }
          *(uint *)(param_1 + 0x20) = iVar8 - uVar20;
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x15c);
          if (uVar5 < uVar16) {
            if (0xffffffff < uVar22) {
              uVar25 = 0xffffffff;
            }
            uVar16 = uVar16 - (uVar20 - uVar25) % (uVar16 - uVar5);
          }
          *(uint *)(param_1 + 0x20) = uVar16;
        }
      }
    }
  }
LAB_18085d2fd:
  *(ulonglong *)(param_1 + 0x10) = param_2;
  uVar16 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
  if (uVar16 != 48000) {
    param_2 = (param_2 * 48000) / (ulonglong)uVar16;
  }
  *(ulonglong *)(param_1 + 0x18) = param_2;
  iVar8 = FUN_180859a50(param_1);
  if (iVar8 == 0) {
    lVar14 = *(longlong *)(param_1 + 0x28);
    uVar16 = *(uint *)(param_1 + 0x30);
    puVar12 = (uint *)FUN_180857df0();
    uVar21 = *puVar12;
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar21 < uVar16) {
      uVar22 = (ulonglong)(uVar16 - uVar21);
      if (uVar20 != 48000) {
        uVar22 = (uVar22 * uVar20) / 48000;
      }
      uVar22 = -(uVar22 & 0xffffffff);
    }
    else {
      uVar22 = (ulonglong)(uVar21 - uVar16);
      if (uVar20 != 48000) {
        uVar22 = (uVar22 * uVar20) / 48000;
      }
      uVar22 = uVar22 & 0xffffffff;
    }
    lVar14 = uVar22 + lVar14;
    for (plVar15 = *(longlong **)(param_1 + 0x78); plVar15 != plVar1;
        plVar15 = (longlong *)plVar15[1]) {
      if (*(int *)((longlong)plVar15 + 0x1c) - 4U < 2) {
        lStack_98 = lVar14;
        iVar8 = FUN_180859ba0(param_1,plVar15[4],*(int32_t *)(plVar15[4] + 8),plVar15[2]);
        if (iVar8 != 0) goto LAB_18085d424;
        lVar14 = plVar15[2];
      }
      if (plVar15 == plVar1) break;
    }
    if (*(int *)(param_1 + 0x34) - 4U < 2) {
      lStack_98 = lVar14;
      FUN_180859ba0(param_1,*(uint64_t *)(param_1 + 0x38),*(int32_t *)(param_1 + 0x24),
                    *(uint64_t *)(param_1 + 0x28));
    }
  }
LAB_18085d424:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}



uint64_t FUN_18085d460(uint64_t param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_3[1]) {
    do {
      plVar1 = (longlong *)(*param_3 + (longlong)iVar4 * 0x18);
      iVar2 = 0;
      if (0 < (int)param_2[1]) {
        do {
          if ((*(longlong *)(*param_2 + (longlong)iVar2 * 0x18) == *plVar1) &&
             (*(longlong *)(*param_2 + 8 + (longlong)iVar2 * 0x18) == plVar1[1]))
          goto LAB_18085d4e7;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_2[1]);
      }
      iVar2 = -1;
LAB_18085d4e7:
      if (iVar2 == -1) {
        uVar3 = FUN_1808542a0(param_1,plVar1,(int)plVar1[2],*(int32_t *)((longlong)plVar1 + 0x14)
                              ,param_4);
      }
      else if (param_4 == '\0') {
        uVar3 = FUN_18085a550(param_1,plVar1,
                              *(int32_t *)(*param_2 + (longlong)iVar2 * 0x18 + 0x10),
                              *(int32_t *)(*param_2 + 0x14 + (longlong)iVar2 * 0x18),
                              (int)plVar1[2],*(int32_t *)((longlong)plVar1 + 0x14));
      }
      else {
        uVar3 = FUN_180859f30();
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3[1]);
  }
  return 0;
}



uint64_t FUN_18085d570(longlong param_1,longlong *param_2,longlong *param_3,int8_t param_4)

{
  longlong *plVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_3[1]) {
    do {
      plVar1 = (longlong *)(*param_3 + (longlong)iVar4 * 0x18);
      if (0 < (int)param_2[1]) {
        iVar2 = 0;
        do {
          if ((*(longlong *)(*param_2 + (longlong)iVar2 * 0x18) == *plVar1) &&
             (*(longlong *)(*param_2 + 8 + (longlong)iVar2 * 0x18) == plVar1[1]))
          goto LAB_18085d61f;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_2[1]);
      }
      uVar3 = FUN_1808c7170();
      uVar3 = FUN_18085ed00(*(uint64_t *)(param_1 + 0x160),plVar1,uVar3,param_4,0,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
LAB_18085d61f:
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3[1]);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18085d650(longlong param_1,int8_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint64_t uVar3;
  longlong lVar4;
  int8_t uVar5;
  uint uStackX_8;
  int iStackX_c;
  uint auStack_38 [2];
  longlong lStack_30;
  longlong lStack_28;
  
  uVar5 = 1;
  uStackX_8 = *(uint *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
      plVar1 = (longlong *)(param_1 + 0x70);
      if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
        lVar4 = *(longlong *)(param_1 + 0x38);
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
      }
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
      }
      piVar2 = (int *)(lVar4 + 0x10);
      *piVar2 = *piVar2 + -1;
      uStackX_8 = *(uint *)(lVar4 + 0xc);
      if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&unknown_var_2208_ptr,0x76,1);
      }
    }
    else {
      uStackX_8 = 0xffffffff;
      if ((ulonglong)*(uint *)(param_1 + 0x150) + (ulonglong)*(uint *)(param_1 + 0x158) <
          0x100000000) {
        uStackX_8 = *(uint *)(param_1 + 0x158) + *(uint *)(param_1 + 0x150);
      }
    }
  }
  if (uStackX_8 <= *(uint *)(param_1 + 0x10c)) {
    auStack_38[0] = 0;
    lStack_30 = 0;
    lStack_28 = 0;
    do {
      iStackX_c = -1;
      if ((ulonglong)*(uint *)(param_1 + 0x10c) + 1 < 0x100000000) {
        iStackX_c = *(uint *)(param_1 + 0x10c) + 1;
      }
      uVar3 = FUN_180856570(param_1,&uStackX_8,1,auStack_38,0,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (lStack_30 != 0) break;
      if (lStack_28 == 0) goto LAB_18085d78f;
      lVar4 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lStack_28 + 0x20);
      uStackX_8 = *(uint *)(lVar4 + 0x20);
    } while (auStack_38[0] < uStackX_8);
    uVar5 = 0;
  }
LAB_18085d78f:
  *param_2 = uVar5;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085d7f0(longlong *param_1,uint64_t param_2,int32_t param_3)
void FUN_18085d7f0(longlong *param_1,uint64_t param_2,int32_t param_3)

{
  *(longlong *)param_1[1] = *param_1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
  *(longlong **)param_1[1] = param_1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,1);
}



uint64_t *
FUN_18085d860(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             longlong param_5,uint64_t param_6,int32_t param_7,uint64_t param_8,
             uint64_t param_9)

{
  uint64_t *puVar1;
  int32_t uVar2;
  
  *(int8_t *)((longlong)param_1 + 0x5d) = *(int8_t *)(param_5 + 0x781);
  puVar1 = param_1 + 0xc;
  *(int32_t *)(param_1 + 0xb) = 0xffffffff;
  *(int8_t *)((longlong)param_1 + 0x5c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  *puVar1 = puVar1;
  param_1[0xd] = puVar1;
  puVar1 = param_1 + 0xe;
  *puVar1 = puVar1;
  param_1[0xf] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &unknown_var_2520_ptr;
  param_1[1] = &unknown_var_2560_ptr;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x16] = param_9;
  puVar1 = param_1 + 0x17;
  param_1[0x12] = param_4;
  param_1[0x13] = param_5;
  *(int32_t *)(param_1 + 0x14) = param_7;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  *puVar1 = puVar1;
  param_1[0x18] = puVar1;
  FUN_180854040(param_1 + 0x19,param_3,param_4,param_7,param_5,param_1);
  param_1[0x49] = 0;
  puVar1 = param_1 + 0x48;
  *puVar1 = puVar1;
  param_1[0x49] = puVar1;
  puVar1 = param_1 + 0x4a;
  param_1[0x4b] = 0;
  *puVar1 = puVar1;
  param_1[0x4b] = puVar1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar2 = *(int32_t *)(param_5 + 0x774);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(int32_t *)(param_1 + 0x53) = uVar2;
  puVar1 = param_1 + 0x54;
  *(int32_t *)((longlong)param_1 + 0x29c) = 2;
  param_1[0x55] = 0;
  *puVar1 = puVar1;
  param_1[0x55] = puVar1;
  param_1[0x57] = param_8;
  param_1[0x56] = 0;
  param_1[0x58] = param_4;
  param_1[0x59] = param_5;
  param_1[0x5a] = 0;
  *(int32_t *)(param_1 + 0x5b) = 0;
  *(int32_t *)((longlong)param_1 + 0x2dc) = param_7;
  *(int32_t *)(param_1 + 0x5c) = 0xffffffff;
  *(uint64_t *)((longlong)param_1 + 0x2e4) = 0;
  *(int32_t *)((longlong)param_1 + 0x2ec) = 0;
  *(int32_t *)(param_1 + 0x5e) = 0xbf800000;
  puVar1 = param_1 + 0x6b;
  *(int32_t *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x5f) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x304) = 0;
  *(int32_t *)((longlong)param_1 + 0x30c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x62) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x314) = 0xbf800000;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  func_0x0001808b62c0(puVar1,param_7,param_5,param_4,param_1);
  func_0x0001808c92a0(param_1 + 0x6f,param_4,param_5,param_1,puVar1,0,0);
  func_0x0001808c92a0(param_1 + 0x7f,param_4,param_5,param_1,puVar1,0,0);
  param_1[0x8f] = 0;
  puVar1 = param_1 + 0x92;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  *puVar1 = puVar1;
  param_1[0x93] = puVar1;
  puVar1 = param_1 + 0x94;
  param_1[0x95] = 0;
  *puVar1 = puVar1;
  param_1[0x95] = puVar1;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  if (param_1[0x15] == 0) {
    param_1[0x15] = param_1;
  }
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 0x20;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180747f3f)
// WARNING: Removing unreachable block (ram,0x000180747f54)
// WARNING: Removing unreachable block (ram,0x000180747f8a)
// WARNING: Removing unreachable block (ram,0x000180747f92)
// WARNING: Removing unreachable block (ram,0x000180747fef)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18085dbf0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (longlong)iVar1 * 8,0,(longlong)-iVar1 << 3);
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085dca0(longlong *param_1)
void FUN_18085dca0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    lVar2 = (longlong)(int)-uVar3;
    if (0 < lVar2) {
      lVar1 = (longlong)(int)uVar3 * 0x38 + 0x1c + *param_1;
      do {
        *(uint64_t *)(lVar1 + -0x1c) = 0;
        *(uint64_t *)(lVar1 + -0x14) = 0;
        *(uint64_t *)(lVar1 + -0xc) = 0;
        *(uint64_t *)(lVar1 + -4) = 0;
        *(uint64_t *)(lVar1 + 4) = 0;
        *(int32_t *)(lVar1 + 0xc) = 0;
        *(uint64_t *)(lVar1 + 0x14) = 0;
        lVar1 = lVar1 + 0x38;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    lVar2 = *param_1 + 0x10;
    do {
      FUN_180840270(lVar2);
      lVar2 = lVar2 + 0x38;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar3) - uVar3)) {
    FUN_180861ce0(param_1,0);
  }
  return;
}





// 函数: void FUN_18085dd4b(longlong param_1)
void FUN_18085dd4b(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int32_t unaff_EBP;
  longlong *unaff_RDI;
  
  lVar2 = *unaff_RDI + 0x10;
  do {
    FUN_180840270(lVar2);
    lVar2 = lVar2 + 0x38;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar1 = (int)*(uint *)((longlong)unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 1) = unaff_EBP;
  if (0 < (int)((*(uint *)((longlong)unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    FUN_180861ce0();
  }
  return;
}





// 函数: void FUN_18085dd7c(void)
void FUN_18085dd7c(void)

{
  uint uVar1;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  
  uVar1 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    FUN_180861ce0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




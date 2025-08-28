/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part033.c - 5 个函数
// 函数: void function_85ca30(int64_t param_1,uint64_t param_2)
void function_85ca30(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
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
  int64_t lVar14;
  int64_t *plVar15;
  uint uVar16;
  int64_t lVar17;
  uint64_t ****ppppuVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t *****pppppuVar24;
  uint uVar25;
  int8_t stack_array_b8 [32];
  int64_t lStack_98;
  uint64_t ***ppplocal_var_88;
  uint local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  uint local_var_74;
  uint64_t ****pppplocal_var_60;
  uint64_t ****pppplocal_var_58;
  int iStack_50;
  int iStack_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(int *)(*(int64_t *)(param_1 + 0x160) + 0x2e4) < 3) goto LAB_18085d424;
  MemoryCacheController0();
  if ((*(byte *)(param_1 + 0x128) & 8) != 0) {
    plVar1 = (int64_t *)(param_1 + 0x70);
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      iVar8 = *(int *)(param_1 + 0x34);
      lVar14 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      iVar8 = *(int *)(*(int64_t *)(param_1 + 0x78) + 0x1c);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
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
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76);
      }
    }
    if (1 < iVar8 - 4U) goto LAB_18085d424;
    puVar11 = (int32_t *)MemoryCacheController0();
    *(int32_t *)(param_1 + 0x148) = *puVar11;
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      uVar3 = *(int32_t *)(param_1 + 0x30);
      lVar14 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      uVar3 = *(int32_t *)(*(int64_t *)(param_1 + 0x78) + 0x18);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    lStack_98 = 0;
    iVar8 = function_85bc30(param_1,uVar3,0,0);
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76);
      }
    }
    if (iVar8 != 0) goto LAB_18085d424;
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    plVar1 = (int64_t *)(param_1 + 0x70);
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      iStack_50 = *(int *)(param_1 + 0x30);
      lVar14 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      iStack_50 = *(int *)(*(int64_t *)(param_1 + 0x78) + 0x18);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    pppplocal_var_60 = &pppplocal_var_60;
    ppppuVar18 = (uint64_t ****)(*(int64_t *)(param_1 + 0x110) + 0x58);
    pppplocal_var_58 = &pppplocal_var_60;
    local_var_48 = 0;
    local_var_40 = 0;
    ppppuVar6 = (uint64_t ****)*ppppuVar18;
    local_var_80 = (uint)ppppuVar6;
    local_var_7c = (int32_t)((uint64_t)ppppuVar6 >> 0x20);
    for (; ((ppppuVar6 != ppppuVar18 && (*(int *)(ppppuVar6 + 2) != iStack_50)) &&
           (ppppuVar6 != ppppuVar18)); ppppuVar6 = (uint64_t ****)*ppppuVar6) {
    }
    ppplocal_var_88 = ppppuVar18;
    RenderingSystem_ShaderManager0(&local_var_48);
    *pppplocal_var_58 = pppplocal_var_60;
    pppplocal_var_60[1] = pppplocal_var_58;
    pppplocal_var_58 = &pppplocal_var_60;
    pppplocal_var_60 = &pppplocal_var_60;
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76);
      }
    }
    if ((ppppuVar6 == ppppuVar18) ||
       (((*(int *)(ppppuVar6 + 4) != 0 && (cVar7 = function_8b0820(ppppuVar6 + 3), cVar7 == '\0')) &&
        (iVar8 = function_8552c0(param_1), iVar8 != 0)))) goto LAB_18085d424;
  }
  iVar8 = -1;
  if (*(char *)(param_1 + 0x13c) == '\0') {
    iVar9 = (int)param_2;
    uVar16 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar16 != 48000) {
      iVar9 = (int)((param_2 * 48000) / (uint64_t)uVar16);
    }
    uVar20 = iVar9 - *(int *)(param_1 + 0x18);
    plVar1 = (int64_t *)(param_1 + 0x70);
    uVar21 = uVar20;
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      if (*(uint64_t *)(param_1 + 0x28) < *(uint64_t *)(param_1 + 0x10)) {
        uVar22 = *(uint64_t *)(param_1 + 0x10) - *(uint64_t *)(param_1 + 0x28);
        if ((int64_t)uVar22 < 1) {
          uVar22 = 0;
        }
        else {
          if (uVar16 != 48000) {
            uVar22 = (int64_t)(uVar22 * 48000) / (int64_t)(uint64_t)uVar16;
          }
          if (0xffffffff < (int64_t)uVar22) {
            uVar22 = 0xffffffff;
          }
        }
        iVar9 = -1;
        uVar16 = 0xffffffff;
        if ((uVar22 & 0xffffffff) + (uint64_t)*(uint *)(param_1 + 0x30) < 0x100000000) {
          uVar16 = (int)uVar22 + *(uint *)(param_1 + 0x30);
        }
        if ((uint64_t)uVar16 + (uint64_t)*(uint *)(param_1 + 0x108) < 0x100000000) {
          iVar9 = uVar16 + *(uint *)(param_1 + 0x108);
        }
        if ((*(int *)(param_1 + 8) - iVar9 < 0) &&
           (uVar21 = 0xffffffff, (uint64_t)uVar20 + 1 < 0x100000000)) {
          uVar21 = uVar20 + 1;
        }
      }
    }
    puVar12 = (uint *)MemoryCacheController0();
    if (uVar21 != *puVar12) {
      uVar13 = MemoryCacheController0();
      iVar9 = function_857e50(param_1,uVar13,*(int32_t *)(param_1 + 0xc),uVar21);
      if (iVar9 != 0) goto LAB_18085d424;
    }
  }
  plVar1 = (int64_t *)(param_1 + 0x80);
  plVar15 = (int64_t *)*plVar1;
  if ((plVar15 != plVar1) && ((uint64_t)plVar15[2] <= param_2)) {
    if (*(int *)((int64_t)plVar15 + 0x1c) == 0) {
      iVar9 = *(int *)(plVar15 + 4);
      lVar14 = (int64_t)iVar9;
      if ((-1 < iVar9) && (iVar9 < *(int *)(*(int64_t *)(param_1 + 0x110) + 0x80))) {
        lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x78);
        uVar16 = *(uint *)(lVar17 + 0x20 + lVar14 * 0x28);
        if (uVar16 == *(uint *)(plVar15 + 3)) {
          if (*(int *)(lVar17 + 0x18 + lVar14 * 0x28) < 1) {
            ppplocal_var_88 = (uint64_t ***)&system_buffer_ptr;
          }
          else {
            ppplocal_var_88 = *(uint64_t ****)(lVar17 + 0x10 + lVar14 * 0x28);
          }
          lVar17 = *(int64_t *)(param_1 + 0x160);
          pppppuVar24 = (uint64_t *****)&ppplocal_var_88;
          local_var_80 = uVar16 / 0x30;
          uVar13 = 0x800;
LAB_18085ceec:
          iVar9 = function_85ffc0(lVar17,uVar13,pppppuVar24);
          if (iVar9 != 0) goto LAB_18085d424;
        }
      }
    }
    else if (*(int *)((int64_t)plVar15 + 0x1c) == 1) {
      iVar9 = *(int *)(plVar15 + 4);
      if ((-1 < iVar9) && (lVar14 = *(int64_t *)(param_1 + 0x110), iVar9 < *(int *)(lVar14 + 0x90))
         ) {
        lVar17 = *(int64_t *)(param_1 + 0x160);
        lVar23 = (int64_t)iVar9 * 0x20 + *(int64_t *)(lVar14 + 0x88);
        iStack_50 = *(int *)((int64_t)plVar15 + 0x24) / *(int *)(lVar23 + 0x10) + 1;
        iStack_4c = *(int *)((int64_t)plVar15 + 0x24) % *(int *)(lVar23 + 0x10) + 1;
        local_var_48 = CONCAT44(*(int32_t *)(lVar23 + 0x1c),*(uint *)(plVar15 + 3) / 0x30);
        local_var_40 = *(int32_t *)(lVar23 + 0x10);
        local_var_3c = *(int32_t *)(lVar23 + 0x14);
        if (*(int64_t *)(lVar17 + 0x350) == 0) {
          pppppuVar24 = (uint64_t *****)&iStack_50;
          uVar13 = 0x1000;
        }
        else {
          pppplocal_var_60 = *(uint64_t *****)(lVar14 + 0x10);
          pppplocal_var_58 = *(uint64_t *****)(lVar14 + 0x18);
          pppppuVar24 = &pppplocal_var_60;
          uVar13 = 0x40000;
        }
        goto LAB_18085ceec;
      }
    }
    if (plVar15 != plVar1) {
      lStack_98 = CONCAT71(lStack_98._1_7_,1);
      *(int64_t *)plVar15[1] = *plVar15;
      *(int64_t *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (int64_t)plVar15;
      *plVar15 = (int64_t)plVar15;
      *(int64_t **)plVar15[1] = plVar15;
      *(int64_t *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (int64_t)plVar15;
      *plVar15 = (int64_t)plVar15;
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar15,&ui_system_data_1696_ptr,0xe1);
    }
  }
  plVar15 = *(int64_t **)(param_1 + 0x70);
  plVar1 = (int64_t *)(param_1 + 0x70);
  if ((plVar15 != plVar1) && ((uint64_t)plVar15[2] <= param_2)) {
    if (((*(int *)(param_1 + 0x34) - 4U < 2) &&
        (iVar9 = function_857b70(param_1,param_1 + 0x28), iVar9 != 0)) ||
       ((function_8c6d60(param_1 + 0x28,plVar15 + 2), *(int *)(param_1 + 0x34) - 4U < 2 &&
        (iVar9 = function_855e40(param_1,param_1 + 0x28), iVar9 != 0)))) goto LAB_18085d424;
    if (plVar15 != plVar1) {
      *(int64_t *)plVar15[1] = *plVar15;
      *(int64_t *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (int64_t)plVar15;
      *plVar15 = (int64_t)plVar15;
      lVar14 = plVar15[4];
      if (lVar14 != 0) {
        piVar2 = (int *)(lVar14 + 0x10);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          lStack_98 = CONCAT71(lStack_98._1_7_,1);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76);
        }
      }
      lStack_98 = CONCAT71(lStack_98._1_7_,1);
      *(int64_t *)plVar15[1] = *plVar15;
      *(int64_t *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (int64_t)plVar15;
      *plVar15 = (int64_t)plVar15;
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar15,&ui_system_data_1696_ptr,0xe1);
    }
  }
  if ((*(uint64_t *)(param_1 + 0x40) != 0) && (*(uint64_t *)(param_1 + 0x40) <= param_2)) {
    ppplocal_var_88 = (uint64_t ****)0x0;
    puVar11 = (int32_t *)MemoryCacheController0();
    local_var_80 = *puVar11;
    local_var_7c = 0;
    local_var_78 = 0;
    local_var_74 = 0;
    function_8c6d60(param_1 + 0x40,&ppplocal_var_88);
    lVar14 = CONCAT44(local_var_74,local_var_78);
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        lStack_98 = CONCAT71(lStack_98._1_7_,1);
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76);
      }
    }
    puVar12 = (uint *)MemoryCacheController0();
    local_var_7c = 0;
    local_var_78 = 0;
    ppplocal_var_88 = (uint64_t ****)0x0;
    local_var_80 = *puVar12;
    *(int32_t *)(param_1 + 0x58) = 0;
    *(int32_t *)(param_1 + 0x5c) = 0;
    *(uint *)(param_1 + 0x60) = local_var_80;
    *(int32_t *)(param_1 + 100) = 0;
    *(uint64_t *)(param_1 + 0x68) = (uint64_t)local_var_74 << 0x20;
  }
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_1 + 0x30);
  puVar11 = (int32_t *)MemoryCacheController0();
  uVar22 = *(uint64_t *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x24) = *puVar11;
  iVar9 = *(int *)(param_1 + 0x34);
  if (param_2 < uVar22) {
    if (iVar9 - 4U < 2) {
      if (**(int64_t **)(param_1 + 0x38) == 0) {
        plVar15 = (int64_t *)MemoryCacheController0();
      }
      else {
        plVar15 = *(int64_t **)(param_1 + 0x38) + 1;
      }
      *(int *)(param_1 + 0x24) = (int)*plVar15;
    }
  }
  else if ((iVar9 == 0) || (iVar9 == 3)) {
    uVar16 = *(uint *)(param_1 + 0x30);
    if (1 < iVar9 - 4U) {
      uVar22 = param_2 - uVar22;
      if ((int64_t)uVar22 < 1) {
        uVar22 = 0;
      }
      else {
        uVar21 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar21 != 48000) {
          uVar22 = (int64_t)(uVar22 * 48000) / (int64_t)(uint64_t)uVar21;
        }
        if (0xffffffff < (int64_t)uVar22) {
          uVar22 = 0xffffffff;
        }
      }
      if (0xffffffff < (uVar22 & 0xffffffff) + (uint64_t)uVar16) {
        *(int32_t *)(param_1 + 0x20) = 0xffffffff;
        goto LAB_18085d2fd;
      }
      uVar16 = uVar16 + (int)uVar22;
    }
    *(uint *)(param_1 + 0x20) = uVar16;
  }
  else if (iVar9 - 4U < 2) {
    plVar15 = *(int64_t **)(param_1 + 0x38);
    if (plVar15 == (int64_t *)0x0) goto LAB_18085d424;
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      iVar9 = *(int *)(lVar14 + 0xa0);
      iVar4 = *(int *)(lVar14 + 0xa8);
      uVar22 = param_2 - uVar22;
      if ((int64_t)uVar22 < 1) {
        uVar22 = 0;
      }
      else {
        uVar16 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar16 != 48000) {
          uVar22 = (int64_t)(uVar22 * 48000) / (int64_t)(uint64_t)uVar16;
        }
        if (0xffffffff < (int64_t)uVar22) {
          uVar22 = 0xffffffff;
        }
      }
      uVar19 = 0xffffffff;
      if ((uVar22 & 0xffffffff) + (uint64_t)*(uint *)(plVar15 + 1) < 0x100000000) {
        uVar19 = (uint64_t)(*(uint *)(plVar15 + 1) + (int)uVar22);
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
            uVar22 = (uint64_t)(uVar16 + uVar5);
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
  *(uint64_t *)(param_1 + 0x10) = param_2;
  uVar16 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
  if (uVar16 != 48000) {
    param_2 = (param_2 * 48000) / (uint64_t)uVar16;
  }
  *(uint64_t *)(param_1 + 0x18) = param_2;
  iVar8 = function_859a50(param_1);
  if (iVar8 == 0) {
    lVar14 = *(int64_t *)(param_1 + 0x28);
    uVar16 = *(uint *)(param_1 + 0x30);
    puVar12 = (uint *)function_857df0();
    uVar21 = *puVar12;
    uVar20 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar21 < uVar16) {
      uVar22 = (uint64_t)(uVar16 - uVar21);
      if (uVar20 != 48000) {
        uVar22 = (uVar22 * uVar20) / 48000;
      }
      uVar22 = -(uVar22 & 0xffffffff);
    }
    else {
      uVar22 = (uint64_t)(uVar21 - uVar16);
      if (uVar20 != 48000) {
        uVar22 = (uVar22 * uVar20) / 48000;
      }
      uVar22 = uVar22 & 0xffffffff;
    }
    lVar14 = uVar22 + lVar14;
    for (plVar15 = *(int64_t **)(param_1 + 0x78); plVar15 != plVar1;
        plVar15 = (int64_t *)plVar15[1]) {
      if (*(int *)((int64_t)plVar15 + 0x1c) - 4U < 2) {
        lStack_98 = lVar14;
        iVar8 = function_859ba0(param_1,plVar15[4],*(int32_t *)(plVar15[4] + 8),plVar15[2]);
        if (iVar8 != 0) goto LAB_18085d424;
        lVar14 = plVar15[2];
      }
      if (plVar15 == plVar1) break;
    }
    if (*(int *)(param_1 + 0x34) - 4U < 2) {
      lStack_98 = lVar14;
      function_859ba0(param_1,*(uint64_t *)(param_1 + 0x38),*(int32_t *)(param_1 + 0x24),
                    *(uint64_t *)(param_1 + 0x28));
    }
  }
LAB_18085d424:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_b8);
}
uint64_t function_85d460(uint64_t param_1,int64_t *param_2,int64_t *param_3,char param_4)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  iVar4 = 0;
  if (0 < (int)param_3[1]) {
    do {
      plVar1 = (int64_t *)(*param_3 + (int64_t)iVar4 * 0x18);
      iVar2 = 0;
      if (0 < (int)param_2[1]) {
        do {
          if ((*(int64_t *)(*param_2 + (int64_t)iVar2 * 0x18) == *plVar1) &&
             (*(int64_t *)(*param_2 + 8 + (int64_t)iVar2 * 0x18) == plVar1[1]))
          goto LAB_18085d4e7;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_2[1]);
      }
      iVar2 = -1;
LAB_18085d4e7:
      if (iVar2 == -1) {
        uVar3 = function_8542a0(param_1,plVar1,(int)plVar1[2],*(int32_t *)((int64_t)plVar1 + 0x14)
                              ,param_4);
      }
      else if (param_4 == '\0') {
        uVar3 = function_85a550(param_1,plVar1,
                              *(int32_t *)(*param_2 + (int64_t)iVar2 * 0x18 + 0x10),
                              *(int32_t *)(*param_2 + 0x14 + (int64_t)iVar2 * 0x18),
                              (int)plVar1[2],*(int32_t *)((int64_t)plVar1 + 0x14));
      }
      else {
        uVar3 = function_859f30();
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3[1]);
  }
  return 0;
}
uint64_t function_85d570(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  iVar4 = 0;
  if (0 < (int)param_3[1]) {
    do {
      plVar1 = (int64_t *)(*param_3 + (int64_t)iVar4 * 0x18);
      if (0 < (int)param_2[1]) {
        iVar2 = 0;
        do {
          if ((*(int64_t *)(*param_2 + (int64_t)iVar2 * 0x18) == *plVar1) &&
             (*(int64_t *)(*param_2 + 8 + (int64_t)iVar2 * 0x18) == plVar1[1]))
          goto LAB_18085d61f;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_2[1]);
      }
      uVar3 = function_8c7170();
      uVar3 = function_85ed00(*(uint64_t *)(param_1 + 0x160),plVar1,uVar3,param_4,0,0,1);
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
uint64_t function_85d650(int64_t param_1,int8_t *param_2)
{
  int64_t *plVar1;
  int *piVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t uVar5;
  uint stack_special_x_8;
  int iStackX_c;
  uint stack_array_38 [2];
  int64_t lStack_30;
  int64_t lStack_28;
  uVar5 = 1;
  stack_special_x_8 = *(uint *)(param_1 + 8);
  if (*(int64_t *)(param_1 + 0x140) != 0) {
    if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
      plVar1 = (int64_t *)(param_1 + 0x70);
      if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
        lVar4 = *(int64_t *)(param_1 + 0x38);
      }
      else {
        lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
      }
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
      }
      piVar2 = (int *)(lVar4 + 0x10);
      *piVar2 = *piVar2 + -1;
      stack_special_x_8 = *(uint *)(lVar4 + 0xc);
      if (*piVar2 == 0) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&rendering_buffer_2208_ptr,0x76,1);
      }
    }
    else {
      stack_special_x_8 = 0xffffffff;
      if ((uint64_t)*(uint *)(param_1 + 0x150) + (uint64_t)*(uint *)(param_1 + 0x158) <
          0x100000000) {
        stack_special_x_8 = *(uint *)(param_1 + 0x158) + *(uint *)(param_1 + 0x150);
      }
    }
  }
  if (stack_special_x_8 <= *(uint *)(param_1 + 0x10c)) {
    stack_array_38[0] = 0;
    lStack_30 = 0;
    lStack_28 = 0;
    do {
      iStackX_c = -1;
      if ((uint64_t)*(uint *)(param_1 + 0x10c) + 1 < 0x100000000) {
        iStackX_c = *(uint *)(param_1 + 0x10c) + 1;
      }
      uVar3 = function_856570(param_1,&stack_special_x_8,1,stack_array_38,0,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (lStack_30 != 0) break;
      if (lStack_28 == 0) goto LAB_18085d78f;
      lVar4 = Function_5b093f0f(*(uint64_t *)(param_1 + 0x110),lStack_28 + 0x20);
      stack_special_x_8 = *(uint *)(lVar4 + 0x20);
    } while (stack_array_38[0] < stack_special_x_8);
    uVar5 = 0;
  }
LAB_18085d78f:
  *param_2 = uVar5;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_85d7f0(int64_t *param_1,uint64_t param_2,int32_t param_3)
void function_85d7f0(int64_t *param_1,uint64_t param_2,int32_t param_3)
{
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  *(int64_t **)param_1[1] = param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,1);
}
uint64_t *
function_85d860(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int64_t param_5,uint64_t param_6,int32_t param_7,uint64_t param_8,
             uint64_t param_9)
{
  uint64_t *puVar1;
  int32_t uVar2;
  *(int8_t *)((int64_t)param_1 + 0x5d) = *(int8_t *)(param_5 + 0x781);
  puVar1 = param_1 + 0xc;
  *(int32_t *)(param_1 + 0xb) = 0xffffffff;
  *(int8_t *)((int64_t)param_1 + 0x5c) = 0;
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
  *param_1 = &rendering_buffer_2520_ptr;
  param_1[1] = &rendering_buffer_2560_ptr;
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
  function_854040(param_1 + 0x19,param_3,param_4,param_7,param_5,param_1);
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
  *(int32_t *)((int64_t)param_1 + 0x29c) = 2;
  param_1[0x55] = 0;
  *puVar1 = puVar1;
  param_1[0x55] = puVar1;
  param_1[0x57] = param_8;
  param_1[0x56] = 0;
  param_1[0x58] = param_4;
  param_1[0x59] = param_5;
  param_1[0x5a] = 0;
  *(int32_t *)(param_1 + 0x5b) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2dc) = param_7;
  *(int32_t *)(param_1 + 0x5c) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x2e4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0;
  *(int32_t *)(param_1 + 0x5e) = 0xbf800000;
  puVar1 = param_1 + 0x6b;
  *(int32_t *)((int64_t)param_1 + 0x2f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x5f) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x304) = 0;
  *(int32_t *)((int64_t)param_1 + 0x30c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x62) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x314) = 0xbf800000;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  Function_3e350c63(puVar1,param_7,param_5,param_4,param_1);
  Function_4c2be7d8(param_1 + 0x6f,param_4,param_5,param_1,puVar1,0,0);
  Function_4c2be7d8(param_1 + 0x7f,param_4,param_5,param_1,puVar1,0,0);
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
uint SystemController(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
// WARNING: Subroutine does not return
    memset(*param_1 + (int64_t)iVar1 * 8,0,(int64_t)-iVar1 << 3);
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_85dca0(int64_t *param_1)
void function_85dca0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = (uint64_t)uVar3;
  if ((int)uVar3 < 0) {
    lVar2 = (int64_t)(int)-uVar3;
    if (0 < lVar2) {
      lVar1 = (int64_t)(int)uVar3 * 0x38 + 0x1c + *param_1;
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
      SystemCore_MemoryManager(lVar2);
      lVar2 = lVar2 + 0x38;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3)) {
    function_861ce0(param_1,0);
  }
  return;
}
// 函数: void function_85dd4b(int64_t param_1)
void function_85dd4b(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  lVar2 = *unaff_RDI + 0x10;
  do {
    SystemCore_MemoryManager(lVar2);
    lVar2 = lVar2 + 0x38;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar1 = (int)*(uint *)((int64_t)unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 1) = unaff_EBP;
  if (0 < (int)((*(uint *)((int64_t)unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    function_861ce0();
  }
  return;
}
// 函数: void function_85dd7c(void)
void function_85dd7c(void)
{
  uint uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  uVar1 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    function_861ce0();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part046.c - 1 个函数

// 函数: void FUN_1808c3dad(void)
void FUN_1808c3dad(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2f) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3de0(int64_t *param_1,int32_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int *piVar12;
  uint64_t *puVar13;
  uint64_t *puStackX_8;
  uint64_t uStackX_18;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar1 = param_1[5];
  uStackX_18 = param_3;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  plVar6 = (int64_t *)func_0x000180851be0(param_1 + 6,param_2);
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)func_0x000180851be0(param_1,param_2);
  }
  puVar13 = (uint64_t *)0x0;
  if (plVar6 == (int64_t *)0x0) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
  }
  else {
    puVar7 = puVar13;
    if (((*(int *)((int64_t)plVar6 + 0x24) != 0) && ((int)plVar6[1] != 0)) &&
       (iVar11 = *(int *)(*plVar6 + -4 + (int64_t)(int)plVar6[1] * 4), iVar11 != -1)) {
      lVar10 = plVar6[2];
      do {
        lVar9 = (int64_t)iVar11;
        if (*(int *)(lVar10 + lVar9 * 0x10) == -1) {
          puVar7 = *(uint64_t **)(lVar10 + 8 + lVar9 * 0x10);
          break;
        }
        iVar11 = *(int *)(lVar10 + 4 + lVar9 * 0x10);
      } while (iVar11 != -1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
    if (puVar7 != (uint64_t *)0x0) {
      return 0x1f;
    }
  }
  plVar6 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar6 = param_1;
  }
  lVar1 = plVar6[5];
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  puVar7 = (uint64_t *)func_0x000180851be0(plVar6,param_2);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  bVar5 = false;
  puVar8 = puVar13;
  if (puVar7 == (uint64_t *)0x0) {
    puVar8 = (uint64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124,0,0,1);
    if (puVar8 == (uint64_t *)0x0) {
      iVar11 = 0x26;
      puVar8 = puVar13;
      goto LAB_1808c40b1;
    }
    *puVar8 = 0;
    puVar8[1] = 0;
    bVar5 = true;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(int32_t *)(puVar8 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar8 + 0x24) = 0;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(int32_t *)(puVar8 + 5) = *param_2;
    *(int32_t *)((int64_t)puVar8 + 0x2c) = uVar2;
    *(int32_t *)(puVar8 + 6) = uVar3;
    *(int32_t *)((int64_t)puVar8 + 0x34) = uVar4;
    puVar7 = puVar8;
  }
  puStackX_8 = (uint64_t *)CONCAT44(puStackX_8._4_4_,0xffffffff);
  iVar11 = FUN_1807d28c0(puVar7,&puStackX_8,&uStackX_18);
  if (iVar11 != 0) goto LAB_1808c40b1;
  if (!bVar5) {
    return 0;
  }
  uStack_38 = *(uint *)(puVar7 + 5);
  uStack_34 = *(uint *)((int64_t)puVar7 + 0x2c);
  uStack_30 = *(uint *)(puVar7 + 6);
  uStack_2c = *(uint *)((int64_t)puVar7 + 0x34);
  lVar1 = plVar6[5];
  puStackX_8 = puVar7;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  iVar11 = FUN_180851a40(plVar6);
  if (iVar11 == 0) {
    if ((int)plVar6[1] != 0) {
      lVar10 = (int64_t)
               (int)((uStack_38 ^ uStack_34 ^ uStack_30 ^ uStack_2c) & (int)plVar6[1] - 1U);
      piVar12 = (int *)(*plVar6 + lVar10 * 4);
      iVar11 = *(int *)(*plVar6 + lVar10 * 4);
      if (iVar11 != -1) {
        lVar10 = plVar6[2];
        do {
          lVar9 = (int64_t)iVar11 * 0x20;
          if ((*(int64_t *)(lVar9 + lVar10) == CONCAT44(uStack_34,uStack_38)) &&
             (*(int64_t *)(lVar9 + 8 + lVar10) == CONCAT44(uStack_2c,uStack_30)))
          goto FUN_1808c4080;
          piVar12 = (int *)(lVar10 + 0x10 + lVar9);
          iVar11 = *piVar12;
        } while (iVar11 != -1);
      }
      iVar11 = FUN_18084e8f0(plVar6,&uStack_38,&puStackX_8,piVar12);
      if (iVar11 == 0) goto LAB_1808c4051;
      goto LAB_1808c404d;
    }
FUN_1808c4080:
    iVar11 = 0x1c;
  }
  else {
LAB_1808c404d:
    if (iVar11 == 0) {
LAB_1808c4051:
      if (lVar1 == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  if (iVar11 == 0) {
    return 0;
  }
  puStackX_8 = (uint64_t *)CONCAT44(puStackX_8._4_4_,0xffffffff);
  func_0x0001807d2ed0(puVar7,&puStackX_8);
LAB_1808c40b1:
  if (puVar8 == (uint64_t *)0x0) {
    return iVar11;
  }
  FUN_1808bbe80(puVar8);
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar8,&rendering_buffer_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3e53(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *unaff_RDI;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int64_t *in_stack_00000080;
  
  if (in_ZF || in_OF != in_SF) {
    unaff_R14 = unaff_RDI;
  }
  lVar1 = unaff_R14[5];
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  plVar6 = (int64_t *)func_0x000180851be0(unaff_R14);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808c40b1;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar2;
    *(int32_t *)(plVar7 + 6) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar4;
    plVar6 = plVar7;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000080,&stack0x00000090);
  if (iVar10 != 0) goto LAB_1808c40b1;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 5);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x2c);
  uStack0000000000000048 = *(uint *)(plVar6 + 6);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar1 = unaff_R14[5];
  in_stack_00000080 = plVar6;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  iVar10 = FUN_180851a40(unaff_R14);
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack0000000000000048 ^
                    uStack000000000000004c) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808c4080;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x00000080,piVar11);
      if (iVar10 == 0) goto LAB_1808c4051;
      goto LAB_1808c404d;
    }
FUN_1808c4080:
    iVar10 = 0x1c;
  }
  else {
LAB_1808c404d:
    if (iVar10 == 0) {
LAB_1808c4051:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  func_0x0001807d2ed0(plVar6,&stack0x00000080);
LAB_1808c40b1:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bbe80(plVar7);
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3e75(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t lVar9;
  int iVar10;
  int64_t *unaff_RDI;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int64_t *in_stack_00000080;
  
  iVar12 = (int)unaff_R12;
  lVar9 = unaff_R12;
  if (((*(int *)((int64_t)param_3 + 0x24) != iVar12) && ((int)param_3[1] != 0)) &&
     (iVar10 = *(int *)(*param_3 + -4 + (int64_t)(int)param_3[1] * 4), iVar10 != -1)) {
    lVar8 = param_3[2];
    do {
      lVar5 = (int64_t)iVar10;
      if (*(int *)(lVar8 + lVar5 * 0x10) == -1) {
        lVar9 = *(int64_t *)(lVar8 + 8 + lVar5 * 0x10);
        break;
      }
      iVar10 = *(int *)(lVar8 + 4 + lVar5 * 0x10);
    } while (iVar10 != -1);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager();
  }
  if (lVar9 != 0) {
    return 0x1f;
  }
  if ((int)unaff_RDI[0xc] <= iVar12) {
    unaff_R14 = unaff_RDI;
  }
  lVar9 = unaff_R14[5];
  if (lVar9 != 0) {
    SystemStateManager(lVar9);
  }
  plVar6 = (int64_t *)func_0x000180851be0(unaff_R14);
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar9);
  }
  bVar4 = false;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808c40b1;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar4 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar1 = unaff_R15[1];
    uVar2 = unaff_R15[2];
    uVar3 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar1;
    *(int32_t *)(plVar7 + 6) = uVar2;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar3;
    plVar6 = plVar7;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000080,&stack0x00000090);
  if (iVar10 != 0) goto LAB_1808c40b1;
  if (!bVar4) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 5);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x2c);
  uStack0000000000000048 = *(uint *)(plVar6 + 6);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar9 = unaff_R14[5];
  in_stack_00000080 = plVar6;
  if (lVar9 != 0) {
    SystemStateManager(lVar9);
  }
  iVar10 = FUN_180851a40(unaff_R14);
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar8 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack0000000000000048 ^
                    uStack000000000000004c) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar8 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar8 * 4);
      if (iVar10 != -1) {
        lVar8 = unaff_R14[2];
        do {
          lVar5 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar5 + lVar8) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar5 + 8 + lVar8) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808c4080;
          piVar11 = (int *)(lVar8 + 0x10 + lVar5);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x00000080,piVar11);
      if (iVar10 == 0) goto LAB_1808c4051;
      goto LAB_1808c404d;
    }
FUN_1808c4080:
    iVar10 = 0x1c;
  }
  else {
LAB_1808c404d:
    if (iVar10 == 0) {
LAB_1808c4051:
      if (lVar9 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar9);
    }
  }
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar9);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  func_0x0001807d2ed0(plVar6,&stack0x00000080);
LAB_1808c40b1:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bbe80(plVar7);
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x0001808c3ef1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3edb(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int64_t *in_stack_00000080;
  
  plVar6 = (int64_t *)func_0x000180851be0();
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808c40b1;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar2;
    *(int32_t *)(plVar7 + 6) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar4;
    plVar6 = plVar7;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000080,&stack0x00000090);
  if (iVar10 != 0) goto LAB_1808c40b1;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 5);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x2c);
  uStack0000000000000048 = *(uint *)(plVar6 + 6);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar1 = unaff_R14[5];
  in_stack_00000080 = plVar6;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  iVar10 = FUN_180851a40();
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack0000000000000048 ^
                    uStack000000000000004c) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808c4080;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(extraout_XMM0_Da,&stack0x00000040,&stack0x00000080,piVar11);
      if (iVar10 == 0) goto LAB_1808c4051;
      goto LAB_1808c404d;
    }
FUN_1808c4080:
    iVar10 = 0x1c;
  }
  else {
LAB_1808c404d:
    if (iVar10 == 0) {
LAB_1808c4051:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_00000080 = (int64_t *)CONCAT44(in_stack_00000080._4_4_,0xffffffff);
  func_0x0001807d2ed0(plVar6,&stack0x00000080);
LAB_1808c40b1:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bbe80(plVar7);
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}







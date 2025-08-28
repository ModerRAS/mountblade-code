#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part084_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808a33b0(void)
void FUN_1808a33b0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808a33c0(int64_t *param_1,int32_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t *puVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int32_t auStackX_20 [2];
  uint64_t in_stack_ffffffffffffff48;
  int32_t *puStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t *puStack_80;
  int iStack_78;
  uint uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int8_t auStack_60 [40];
  
  uVar8 = (uint)((uint64_t)in_stack_ffffffffffffff48 >> 0x20);
  if (*param_3 != 0) {
    return (uint64_t *)0x1c;
  }
  puVar9 = (uint64_t *)FUN_1808ddc20(param_1,auStack_60,0,param_2);
  if ((int)puVar9 != 0) {
    return puVar9;
  }
  uVar7 = *(uint *)(param_1 + 8);
  uStack_74 = uVar7;
  puVar10 = (int32_t *)SystemCoreProcessor();
  uStack_90 = *puVar10;
  uStack_8c = puVar10[1];
  uStack_88 = puVar10[2];
  uStack_84 = puVar10[3];
  puVar10 = (int32_t *)SystemCoreProcessor();
  puVar9 = (uint64_t *)0x0;
  uStack_70 = *puVar10;
  uStack_6c = puVar10[1];
  uStack_68 = puVar10[2];
  uStack_64 = puVar10[3];
  if ((0x54 < uVar7) && (puVar11 = (uint64_t *)FUN_1808dde10(param_1,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  lVar1 = *param_1;
  uVar6 = SystemErrorHandler(lVar1,&uStack_90,4);
  puVar11 = (uint64_t *)(uint64_t)uVar6;
  if (uVar6 == 0) {
    uVar6 = SystemErrorHandler(lVar1,&uStack_8c,2);
    puVar11 = (uint64_t *)(uint64_t)uVar6;
    if (uVar6 == 0) {
      uVar6 = SystemErrorHandler(lVar1,(int64_t)&uStack_8c + 2,2);
      puVar11 = (uint64_t *)(uint64_t)uVar6;
      if (uVar6 == 0) {
        uVar6 = SystemErrorHandler(lVar1,&uStack_88,8);
        puVar11 = (uint64_t *)(uint64_t)uVar6;
      }
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = (uint64_t *)FUN_180899360(param_1,&uStack_70);
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  plVar2 = (int64_t *)*param_1;
  if (*plVar2 == 0) {
    puVar11 = (uint64_t *)0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      puStack_98 = (int32_t *)((uint64_t)puStack_98 & 0xffffffff00000000);
      puVar11 = (uint64_t *)func_0x00018076a7d0(*plVar2,&puStack_98);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((uint64_t)plVar2[2] < ((uint64_t)puStack_98 & 0xffffffff) + 4) {
        puVar11 = (uint64_t *)0x11;
        goto LAB_1808a3569;
      }
    }
    uVar8 = 0;
    puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar2,auStackX_20,1,4,0);
  }
LAB_1808a3569:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  plVar2 = (int64_t *)*param_1;
  if (*plVar2 == 0) {
    puVar11 = (uint64_t *)0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      puStack_98 = (int32_t *)((uint64_t)puStack_98 & 0xffffffff00000000);
      puVar11 = (uint64_t *)func_0x00018076a7d0(*plVar2,&puStack_98);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((uint64_t)plVar2[2] < ((uint64_t)puStack_98 & 0xffffffff) + 4) {
        puVar11 = (uint64_t *)0x11;
        goto LAB_1808a35d8;
      }
    }
    uVar8 = 0;
    puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar2,&iStack_78,1,4,0);
  }
LAB_1808a35d8:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = puVar9;
  uVar6 = 0;
  if (0x54 < *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_1;
      if (*plVar2 == 0) {
        puVar11 = (uint64_t *)0x1c;
      }
      else {
        if (plVar2[2] != 0) {
          puStack_98 = (int32_t *)((uint64_t)puStack_98 & 0xffffffff00000000);
          puVar11 = (uint64_t *)func_0x00018076a7d0(*plVar2,&puStack_98);
          if ((int)puVar11 != 0) {
            return puVar11;
          }
          if ((uint64_t)plVar2[2] < ((uint64_t)puStack_98 & 0xffffffff) + 4) {
            puVar11 = (uint64_t *)0x11;
            goto LAB_1808a3652;
          }
        }
        uVar8 = 0;
        puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar2,&puStack_80,1,4,0);
      }
LAB_1808a3652:
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      puVar11 = (uint64_t *)0xd;
      uVar6 = (uint)puStack_80;
      if ((uint)puStack_80 < 3) {
        puVar11 = puVar9;
      }
    }
    else {
      puVar11 = (uint64_t *)0x1c;
      uVar6 = 0;
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if ((0x54 < uVar7) && (puVar11 = (uint64_t *)FUN_1808de0e0(param_1,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  puVar11 = (uint64_t *)0x0;
  if (uVar7 < 0x55) {
    uVar7 = FUN_1808dde10(param_1,0);
    puVar13 = (uint64_t *)(uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_1808a3889;
  }
  if (iStack_78 == 0) {
    puVar12 = (uint64_t *)
              SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&unknown_var_688_ptr,0x98a,
                            (uint64_t)uVar8 << 0x20,0,1);
    if (puVar12 == (uint64_t *)0x0) {
      puVar13 = (uint64_t *)0x26;
      puVar9 = puVar11;
      goto LAB_1808a3889;
    }
    func_0x0001808b0260(puVar12,0x13,&uStack_90);
    *puVar12 = &unknown_var_472_ptr;
    *(int32_t *)(puVar12 + 6) = uStack_70;
    *(int32_t *)((int64_t)puVar12 + 0x34) = uStack_6c;
    *(int32_t *)(puVar12 + 7) = uStack_68;
    *(int32_t *)((int64_t)puVar12 + 0x3c) = uStack_64;
    *puVar12 = &unknown_var_592_ptr;
    *(int32_t *)(puVar12 + 8) = auStackX_20[0];
    *(uint *)((int64_t)puVar12 + 0x44) = uVar6;
    *(int32_t *)(puVar12 + 9) = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    *(int32_t *)(puVar12 + 0x12) = 0;
    uVar8 = FUN_18089aa40(puVar12,param_1);
joined_r0x0001808a3b38:
    puVar13 = (uint64_t *)(uint64_t)uVar8;
joined_r0x0001808a3a67:
    puVar9 = puVar12;
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  else {
    if (iStack_78 == 1) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_688_ptr,0x992,
                              (uint64_t)uVar8 << 0x20,0,1);
      if (puVar12 == (uint64_t *)0x0) {
        puVar13 = (uint64_t *)0x26;
        puVar9 = puVar11;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &unknown_var_472_ptr;
      *(int32_t *)(puVar12 + 6) = uStack_70;
      *(int32_t *)((int64_t)puVar12 + 0x34) = uStack_6c;
      *(int32_t *)(puVar12 + 7) = uStack_68;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uStack_64;
      *(uint *)((int64_t)puVar12 + 0x44) = uVar6;
      puVar9 = (uint64_t *)((int64_t)puVar12 + 0x54);
      *(int32_t *)(puVar12 + 8) = auStackX_20[0];
      *(int32_t *)puVar9 = 0;
      *(int32_t *)(puVar12 + 9) = 1;
      *puVar12 = &unknown_var_552_ptr;
      *(int32_t *)(puVar12 + 10) = 0;
      *(int32_t *)(puVar12 + 0xb) = 0;
      if (*(uint *)(param_1 + 8) < 0x55) {
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar8 = SystemConfigManager(*param_1,puVar12 + 10);
          puVar13 = (uint64_t *)(uint64_t)uVar8;
          if (uVar8 == 0) {
            if (*(int *)(param_1[1] + 0x18) == 0) goto LAB_1808a3a53;
            puVar13 = (uint64_t *)0x1c;
          }
        }
        else {
          puVar13 = (uint64_t *)0x1c;
        }
      }
      else {
        puVar9 = puVar12 + 0xb;
        if (*(int *)(param_1[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar8 = SystemConfigManager(*param_1,puVar9);
          puVar13 = (uint64_t *)(uint64_t)uVar8;
          if (uVar8 == 0) goto LAB_1808a385d;
        }
        else {
          puVar13 = (uint64_t *)0x1c;
        }
      }
      uVar8 = (uint)puVar13;
      goto joined_r0x0001808a3a67;
    }
    if (iStack_78 == 2) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x80,&unknown_var_688_ptr,0x99a,
                              (uint64_t)uVar8 << 0x20,0,1);
      if (puVar12 == (uint64_t *)0x0) {
        puVar13 = (uint64_t *)0x26;
        puVar9 = puVar11;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &unknown_var_472_ptr;
      *(int32_t *)(puVar12 + 6) = uStack_70;
      *(int32_t *)((int64_t)puVar12 + 0x34) = uStack_6c;
      *(int32_t *)(puVar12 + 7) = uStack_68;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uStack_64;
      *(int32_t *)(puVar12 + 8) = auStackX_20[0];
      *(uint *)((int64_t)puVar12 + 0x44) = uVar6;
      *(int32_t *)(puVar12 + 9) = 2;
      *puVar12 = &unknown_var_512_ptr;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar10 = (int32_t *)SystemCoreProcessor();
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(int32_t *)(puVar12 + 0xc) = *puVar10;
      *(int32_t *)((int64_t)puVar12 + 100) = uVar3;
      *(int32_t *)(puVar12 + 0xd) = uVar4;
      *(int32_t *)((int64_t)puVar12 + 0x6c) = uVar5;
      puVar12[0xe] = 0;
      *(int32_t *)(puVar12 + 0xf) = 0;
      *(int8_t *)((int64_t)puVar12 + 0x7c) = 0;
      uVar8 = FUN_18089b460(puVar12,param_1);
      goto joined_r0x0001808a3b38;
    }
    puVar12 = puVar9;
    if (iStack_78 == 3) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_688_ptr,0x9a2,
                              (uint64_t)uVar8 << 0x20,0,1);
      if (puVar12 == (uint64_t *)0x0) {
        puVar13 = (uint64_t *)0x26;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &unknown_var_472_ptr;
      *(int32_t *)(puVar12 + 6) = uStack_70;
      *(int32_t *)((int64_t)puVar12 + 0x34) = uStack_6c;
      *(int32_t *)(puVar12 + 7) = uStack_68;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uStack_64;
      *puVar12 = &unknown_var_632_ptr;
      puStack_80 = puVar12 + 0xc;
      *(uint *)((int64_t)puVar12 + 0x44) = uVar6;
      *(int32_t *)(puVar12 + 0xb) = 0;
      *(int32_t *)puStack_80 = 0;
      *(int32_t *)((int64_t)puVar12 + 0x54) = 0;
      *(int32_t *)(puVar12 + 8) = auStackX_20[0];
      puStack_98 = (int32_t *)((int64_t)puVar12 + 100);
      *(int32_t *)((int64_t)puVar12 + 0x5c) = 0;
      *puStack_98 = 0;
      *(int32_t *)(puVar12 + 9) = 3;
      *(int32_t *)(puVar12 + 10) = 7;
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar8 = SystemErrorHandler(*param_1,puVar12 + 10,4);
        puVar13 = (uint64_t *)(uint64_t)uVar8;
        if (uVar8 == 0) {
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar8 = SystemErrorHandler(*param_1,(int32_t *)((int64_t)puVar12 + 0x54),4);
            puVar13 = (uint64_t *)(uint64_t)uVar8;
            if (uVar8 == 0) {
              if (*(int *)(param_1[1] + 0x18) == 0) {
                uVar8 = SystemConfigManager(*param_1,puVar12 + 0xb);
                puVar13 = (uint64_t *)(uint64_t)uVar8;
                if (uVar8 == 0) {
                  if (*(int *)(param_1[1] + 0x18) == 0) {
                    uVar8 = SystemConfigManager(*param_1,(int32_t *)((int64_t)puVar12 + 0x5c));
                    puVar13 = (uint64_t *)(uint64_t)uVar8;
                    if (uVar8 == 0) {
                      if (*(int *)(param_1[1] + 0x18) == 0) {
                        uVar8 = SystemConfigManager(*param_1,puStack_80);
                        puVar13 = (uint64_t *)(uint64_t)uVar8;
                        if (uVar8 == 0) {
                          if (*(int *)(param_1[1] + 0x18) == 0) {
                            uVar8 = SystemConfigManager(*param_1,puStack_98);
                            puVar13 = (uint64_t *)(uint64_t)uVar8;
                            if (uVar8 == 0) goto LAB_1808a385d;
                          }
                          else {
                            puVar13 = (uint64_t *)0x1c;
                          }
                        }
                      }
                      else {
                        puVar13 = (uint64_t *)0x1c;
                      }
                    }
                  }
                  else {
                    puVar13 = (uint64_t *)0x1c;
                  }
                }
              }
              else {
                puVar13 = (uint64_t *)0x1c;
              }
            }
          }
          else {
            puVar13 = (uint64_t *)0x1c;
          }
        }
      }
      else {
        puVar13 = (uint64_t *)0x1c;
      }
      uVar8 = (uint)puVar13;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (uStack_74 < 0x55) {
    uVar8 = FUN_1808de0e0(param_1,0);
    puVar13 = (uint64_t *)(uint64_t)uVar8;
    puVar9 = puVar12;
    if (uVar8 != 0) {
LAB_1808a3889:
      if (puVar9 == (uint64_t *)0x0) {
        return puVar13;
      }
      (**(code **)*puVar9)(puVar9,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar9,&unknown_var_2144_ptr,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,auStack_60);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808a340d(void)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint uVar8;
  uint uVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t unaff_RBP;
  uint64_t *puVar14;
  int64_t *unaff_R14;
  uint uVar15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t uVar16;
  int32_t extraout_XMM0_Da_18;
  int32_t extraout_XMM0_Da_19;
  int32_t extraout_XMM0_Da_20;
  int32_t extraout_XMM0_Da_21;
  int32_t extraout_XMM0_Da_22;
  uint64_t in_stack_00000020;
  uint uVar17;
  
  uVar17 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
  uVar9 = *(uint *)(unaff_R14 + 8);
  *(uint *)(unaff_RBP + -0x15) = uVar9;
  puVar10 = (int32_t *)SystemCoreProcessor();
  uVar16 = puVar10[1];
  uVar2 = puVar10[2];
  uVar5 = puVar10[3];
  *(int32_t *)(unaff_RBP + -0x31) = *puVar10;
  *(int32_t *)(unaff_RBP + -0x2d) = uVar16;
  *(int32_t *)(unaff_RBP + -0x29) = uVar2;
  *(int32_t *)(unaff_RBP + -0x25) = uVar5;
  puVar10 = (int32_t *)SystemCoreProcessor();
  puVar13 = (uint64_t *)0x0;
  uVar15 = 0;
  uVar16 = *puVar10;
  uVar2 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(int32_t *)(unaff_RBP + -0x11) = uVar16;
  *(int32_t *)(unaff_RBP + -0xd) = uVar2;
  *(int32_t *)(unaff_RBP + -9) = uVar5;
  *(int32_t *)(unaff_RBP + -5) = uVar6;
  if ((0x54 < uVar9) && (puVar11 = (uint64_t *)FUN_1808dde10(uVar16,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  lVar3 = *unaff_R14;
  uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x31,4);
  puVar11 = (uint64_t *)(uint64_t)uVar8;
  uVar16 = extraout_XMM0_Da;
  if (uVar8 == 0) {
    uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x2d,2);
    puVar11 = (uint64_t *)(uint64_t)uVar8;
    uVar16 = extraout_XMM0_Da_00;
    if (uVar8 == 0) {
      uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x2b,2);
      puVar11 = (uint64_t *)(uint64_t)uVar8;
      uVar16 = extraout_XMM0_Da_01;
      if (uVar8 == 0) {
        uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x29,8);
        puVar11 = (uint64_t *)(uint64_t)uVar8;
        uVar16 = extraout_XMM0_Da_02;
      }
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = (uint64_t *)FUN_180899360(uVar16,unaff_RBP + -0x11);
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  plVar4 = (int64_t *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    puVar11 = (uint64_t *)0x1c;
    uVar16 = extraout_XMM0_Da_03;
  }
  else {
    if (plVar4[2] != 0) {
      *(int32_t *)(unaff_RBP + -0x39) = 0;
      puVar11 = (uint64_t *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
        puVar11 = (uint64_t *)0x11;
        uVar16 = extraout_XMM0_Da_04;
        goto LAB_1808a3569;
      }
    }
    uVar17 = 0;
    puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar4,unaff_RBP + 0x7f,1,4,0);
    uVar16 = extraout_XMM0_Da_05;
  }
LAB_1808a3569:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (uint64_t *)0x1c;
  }
  plVar4 = (int64_t *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    puVar11 = (uint64_t *)0x1c;
  }
  else {
    if (plVar4[2] != 0) {
      *(int32_t *)(unaff_RBP + -0x39) = 0;
      puVar11 = (uint64_t *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
        puVar11 = (uint64_t *)0x11;
        uVar16 = extraout_XMM0_Da_06;
        goto LAB_1808a35d8;
      }
    }
    uVar17 = 0;
    puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar4,unaff_RBP + -0x19,1,4,0);
    uVar16 = extraout_XMM0_Da_07;
  }
LAB_1808a35d8:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = puVar13;
  if (0x54 < *(uint *)(unaff_R14 + 8)) {
    if (*(int *)(unaff_R14[1] + 0x18) == 0) {
      plVar4 = (int64_t *)*unaff_R14;
      lVar3 = *plVar4;
      if (lVar3 == 0) {
        puVar11 = (uint64_t *)0x1c;
      }
      else {
        if (plVar4[2] != 0) {
          *(int32_t *)(unaff_RBP + -0x39) = 0;
          puVar11 = (uint64_t *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
          if ((int)puVar11 != 0) {
            return puVar11;
          }
          if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
            puVar11 = (uint64_t *)0x11;
            uVar16 = extraout_XMM0_Da_08;
            goto LAB_1808a3652;
          }
        }
        uVar17 = 0;
        puVar11 = (uint64_t *)SystemDataAnalyzer(*plVar4,unaff_RBP + -0x21,1,4,0);
        uVar16 = extraout_XMM0_Da_09;
      }
LAB_1808a3652:
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      uVar15 = *(uint *)(unaff_RBP + -0x21);
      puVar11 = (uint64_t *)0xd;
      if (uVar15 < 3) {
        puVar11 = puVar13;
      }
    }
    else {
      puVar11 = (uint64_t *)0x1c;
      uVar15 = 0;
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if ((0x54 < uVar9) &&
     (puVar11 = (uint64_t *)FUN_1808de0e0(uVar16,0), uVar16 = extraout_XMM0_Da_10,
     (int)puVar11 != 0)) {
    return puVar11;
  }
  puVar11 = (uint64_t *)0x0;
  if (uVar9 < 0x55) {
    uVar9 = FUN_1808dde10(uVar16,0);
    puVar14 = (uint64_t *)(uint64_t)uVar9;
    uVar16 = extraout_XMM0_Da_11;
    if (uVar9 != 0) goto LAB_1808a3889;
  }
  iVar1 = *(int *)(unaff_RBP + -0x19);
  if (iVar1 == 0) {
    puVar12 = (uint64_t *)
              SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&unknown_var_688_ptr,0x98a,
                            (uint64_t)uVar17 << 0x20);
    if (puVar12 == (uint64_t *)0x0) {
      puVar14 = (uint64_t *)0x26;
      puVar13 = puVar11;
      goto LAB_1808a3889;
    }
    uVar16 = *(int32_t *)(unaff_RBP + 0x7f);
    func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
    *puVar12 = &unknown_var_472_ptr;
    uVar2 = *(int32_t *)(unaff_RBP + -0xd);
    uVar5 = *(int32_t *)(unaff_RBP + -9);
    uVar6 = *(int32_t *)(unaff_RBP + -5);
    *(int32_t *)(puVar12 + 6) = *(int32_t *)(unaff_RBP + -0x11);
    *(int32_t *)((int64_t)puVar12 + 0x34) = uVar2;
    *(int32_t *)(puVar12 + 7) = uVar5;
    *(int32_t *)((int64_t)puVar12 + 0x3c) = uVar6;
    *puVar12 = &unknown_var_592_ptr;
    *(int32_t *)(puVar12 + 8) = uVar16;
    *(uint *)((int64_t)puVar12 + 0x44) = uVar15;
    *(int32_t *)(puVar12 + 9) = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    *(int32_t *)(puVar12 + 0x12) = 0;
    uVar9 = FUN_18089aa40(puVar12);
    uVar16 = extraout_XMM0_Da_22;
joined_r0x0001808a3b38:
    puVar14 = (uint64_t *)(uint64_t)uVar9;
joined_r0x0001808a3a67:
    puVar13 = puVar12;
    if (uVar9 != 0) goto LAB_1808a3889;
  }
  else {
    if (iVar1 == 1) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_688_ptr,0x992,
                              (uint64_t)uVar17 << 0x20);
      if (puVar12 == (uint64_t *)0x0) {
        puVar14 = (uint64_t *)0x26;
        puVar13 = puVar11;
        goto LAB_1808a3889;
      }
      uVar2 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &unknown_var_472_ptr;
      uVar16 = *(int32_t *)(unaff_RBP + -0x11);
      uVar5 = *(int32_t *)(unaff_RBP + -0xd);
      uVar6 = *(int32_t *)(unaff_RBP + -9);
      uVar7 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar12 + 6) = uVar16;
      *(int32_t *)((int64_t)puVar12 + 0x34) = uVar5;
      *(int32_t *)(puVar12 + 7) = uVar6;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uVar7;
      *(uint *)((int64_t)puVar12 + 0x44) = uVar15;
      puVar13 = (uint64_t *)((int64_t)puVar12 + 0x54);
      *(int32_t *)(puVar12 + 8) = uVar2;
      *(int32_t *)puVar13 = 0;
      *(int32_t *)(puVar12 + 9) = 1;
      *puVar12 = &unknown_var_552_ptr;
      *(int32_t *)(puVar12 + 10) = 0;
      *(int32_t *)(puVar12 + 0xb) = 0;
      if (*(uint *)(unaff_R14 + 8) < 0x55) {
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar9 = SystemConfigManager(*unaff_R14,puVar12 + 10);
          puVar14 = (uint64_t *)(uint64_t)uVar9;
          uVar16 = extraout_XMM0_Da_20;
          if (uVar9 == 0) {
            if (*(int *)(unaff_R14[1] + 0x18) == 0) goto LAB_1808a3a53;
            puVar14 = (uint64_t *)0x1c;
          }
        }
        else {
          puVar14 = (uint64_t *)0x1c;
        }
      }
      else {
        puVar13 = puVar12 + 0xb;
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar9 = SystemConfigManager(*unaff_R14,puVar13);
          puVar14 = (uint64_t *)(uint64_t)uVar9;
          uVar16 = extraout_XMM0_Da_21;
          if (uVar9 == 0) goto LAB_1808a385d;
        }
        else {
          puVar14 = (uint64_t *)0x1c;
        }
      }
      uVar9 = (uint)puVar14;
      goto joined_r0x0001808a3a67;
    }
    if (iVar1 == 2) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x80,&unknown_var_688_ptr,0x99a,
                              (uint64_t)uVar17 << 0x20);
      if (puVar12 == (uint64_t *)0x0) {
        puVar14 = (uint64_t *)0x26;
        puVar13 = puVar11;
        goto LAB_1808a3889;
      }
      uVar16 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &unknown_var_472_ptr;
      uVar2 = *(int32_t *)(unaff_RBP + -0xd);
      uVar5 = *(int32_t *)(unaff_RBP + -9);
      uVar6 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar12 + 6) = *(int32_t *)(unaff_RBP + -0x11);
      *(int32_t *)((int64_t)puVar12 + 0x34) = uVar2;
      *(int32_t *)(puVar12 + 7) = uVar5;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uVar6;
      *(int32_t *)(puVar12 + 8) = uVar16;
      *(uint *)((int64_t)puVar12 + 0x44) = uVar15;
      *(int32_t *)(puVar12 + 9) = 2;
      *puVar12 = &unknown_var_512_ptr;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar10 = (int32_t *)SystemCoreProcessor();
      uVar16 = puVar10[1];
      uVar2 = puVar10[2];
      uVar5 = puVar10[3];
      *(int32_t *)(puVar12 + 0xc) = *puVar10;
      *(int32_t *)((int64_t)puVar12 + 100) = uVar16;
      *(int32_t *)(puVar12 + 0xd) = uVar2;
      *(int32_t *)((int64_t)puVar12 + 0x6c) = uVar5;
      puVar12[0xe] = 0;
      *(int32_t *)(puVar12 + 0xf) = 0;
      *(int8_t *)((int64_t)puVar12 + 0x7c) = 0;
      uVar9 = FUN_18089b460(puVar12);
      uVar16 = extraout_XMM0_Da_19;
      goto joined_r0x0001808a3b38;
    }
    puVar12 = puVar13;
    if (iVar1 == 3) {
      puVar12 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_688_ptr,0x9a2,
                              (uint64_t)uVar17 << 0x20);
      if (puVar12 == (uint64_t *)0x0) {
        puVar14 = (uint64_t *)0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &unknown_var_472_ptr;
      uVar16 = *(int32_t *)(unaff_RBP + -0x11);
      uVar5 = *(int32_t *)(unaff_RBP + -0xd);
      uVar6 = *(int32_t *)(unaff_RBP + -9);
      uVar7 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar12 + 6) = uVar16;
      *(int32_t *)((int64_t)puVar12 + 0x34) = uVar5;
      *(int32_t *)(puVar12 + 7) = uVar6;
      *(int32_t *)((int64_t)puVar12 + 0x3c) = uVar7;
      *puVar12 = &unknown_var_632_ptr;
      *(uint *)((int64_t)puVar12 + 0x44) = uVar15;
      *(int32_t *)(puVar12 + 0xb) = 0;
      *(int32_t *)(puVar12 + 0xc) = 0;
      *(int32_t *)((int64_t)puVar12 + 0x54) = 0;
      *(int32_t *)(puVar12 + 8) = uVar2;
      *(uint64_t **)(unaff_RBP + -0x21) = puVar12 + 0xc;
      *(int32_t *)((int64_t)puVar12 + 0x5c) = 0;
      *(int32_t *)((int64_t)puVar12 + 100) = 0;
      *(int32_t *)(puVar12 + 9) = 3;
      *(int32_t *)(puVar12 + 10) = 7;
      *(int32_t **)(unaff_RBP + -0x39) = (int32_t *)((int64_t)puVar12 + 100);
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar9 = SystemErrorHandler(*unaff_R14,puVar12 + 10,4);
        puVar14 = (uint64_t *)(uint64_t)uVar9;
        uVar16 = extraout_XMM0_Da_12;
        if (uVar9 == 0) {
          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
            uVar9 = SystemErrorHandler(*unaff_R14,(int32_t *)((int64_t)puVar12 + 0x54),4);
            puVar14 = (uint64_t *)(uint64_t)uVar9;
            uVar16 = extraout_XMM0_Da_13;
            if (uVar9 == 0) {
              if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                uVar9 = SystemConfigManager(*unaff_R14,puVar12 + 0xb);
                puVar14 = (uint64_t *)(uint64_t)uVar9;
                uVar16 = extraout_XMM0_Da_14;
                if (uVar9 == 0) {
                  if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                    uVar9 = SystemConfigManager(*unaff_R14,(int32_t *)((int64_t)puVar12 + 0x5c));
                    puVar14 = (uint64_t *)(uint64_t)uVar9;
                    uVar16 = extraout_XMM0_Da_15;
                    if (uVar9 == 0) {
                      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                        uVar9 = SystemConfigManager(*unaff_R14,*(uint64_t *)(unaff_RBP + -0x21));
                        puVar14 = (uint64_t *)(uint64_t)uVar9;
                        uVar16 = extraout_XMM0_Da_16;
                        if (uVar9 == 0) {
                          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                            uVar9 = SystemConfigManager(*unaff_R14,*(uint64_t *)(unaff_RBP + -0x39));
                            puVar14 = (uint64_t *)(uint64_t)uVar9;
                            uVar16 = extraout_XMM0_Da_17;
                            if (uVar9 == 0) goto LAB_1808a385d;
                          }
                          else {
                            puVar14 = (uint64_t *)0x1c;
                          }
                        }
                      }
                      else {
                        puVar14 = (uint64_t *)0x1c;
                      }
                    }
                  }
                  else {
                    puVar14 = (uint64_t *)0x1c;
                  }
                }
              }
              else {
                puVar14 = (uint64_t *)0x1c;
              }
            }
          }
          else {
            puVar14 = (uint64_t *)0x1c;
          }
        }
      }
      else {
        puVar14 = (uint64_t *)0x1c;
      }
      uVar9 = (uint)puVar14;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (*(uint *)(unaff_RBP + -0x15) < 0x55) {
    uVar9 = FUN_1808de0e0(uVar16,0);
    puVar14 = (uint64_t *)(uint64_t)uVar9;
    puVar13 = puVar12;
    uVar16 = extraout_XMM0_Da_18;
    if (uVar9 != 0) {
LAB_1808a3889:
      if (puVar13 == (uint64_t *)0x0) {
        return puVar14;
      }
      (**(code **)*puVar13)(puVar13,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar13,&unknown_var_2144_ptr,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(uVar16,unaff_RBP + -1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a3465(void)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint uVar8;
  int64_t in_RAX;
  uint64_t uVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  int *piVar12;
  int64_t unaff_RBP;
  uint unaff_EDI;
  int iVar13;
  uint64_t *unaff_R13;
  int64_t *unaff_R14;
  uint unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t uVar14;
  int32_t extraout_XMM0_Da_18;
  int32_t extraout_XMM0_Da_19;
  int32_t extraout_XMM0_Da_20;
  int32_t extraout_XMM0_Da_21;
  int32_t extraout_XMM0_Da_22;
  
  iVar13 = (int)unaff_R13;
  if (*(int *)(in_RAX + 0x18) != iVar13) {
    return 0x1c;
  }
  lVar3 = *unaff_R14;
  uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x31,4);
  uVar9 = (uint64_t)uVar8;
  uVar14 = extraout_XMM0_Da;
  if (uVar8 == 0) {
    uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x2d,2);
    uVar9 = (uint64_t)uVar8;
    uVar14 = extraout_XMM0_Da_00;
    if (uVar8 == 0) {
      uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x2b,2);
      uVar9 = (uint64_t)uVar8;
      uVar14 = extraout_XMM0_Da_01;
      if (uVar8 == 0) {
        uVar8 = SystemErrorHandler(lVar3,unaff_RBP + -0x29,8);
        uVar9 = (uint64_t)uVar8;
        uVar14 = extraout_XMM0_Da_02;
      }
    }
  }
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  uVar9 = FUN_180899360(uVar14,unaff_RBP + -0x11);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != iVar13) {
    return 0x1c;
  }
  plVar4 = (int64_t *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    uVar9 = 0x1c;
    uVar14 = extraout_XMM0_Da_03;
  }
  else {
    if ((uint64_t *)plVar4[2] != unaff_R13) {
      *(int *)(unaff_RBP + -0x39) = iVar13;
      uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
        uVar9 = 0x11;
        uVar14 = extraout_XMM0_Da_04;
        goto LAB_1808a3569;
      }
    }
    uVar9 = SystemDataAnalyzer(*plVar4,unaff_RBP + 0x7f,1);
    uVar14 = extraout_XMM0_Da_05;
  }
LAB_1808a3569:
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != iVar13) {
    return 0x1c;
  }
  plVar4 = (int64_t *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    uVar9 = 0x1c;
  }
  else {
    if ((uint64_t *)plVar4[2] != unaff_R13) {
      *(int *)(unaff_RBP + -0x39) = iVar13;
      uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
        uVar9 = 0x11;
        uVar14 = extraout_XMM0_Da_06;
        goto LAB_1808a35d8;
      }
    }
    uVar9 = SystemDataAnalyzer(*plVar4,unaff_RBP + -0x19,1);
    uVar14 = extraout_XMM0_Da_07;
  }
LAB_1808a35d8:
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(uint *)(unaff_R14 + 8) < 0x55) {
    uVar9 = (uint64_t)unaff_R13 & 0xffffffff;
  }
  else if (*(int *)(unaff_R14[1] + 0x18) == iVar13) {
    plVar4 = (int64_t *)*unaff_R14;
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      uVar9 = 0x1c;
    }
    else {
      if ((uint64_t *)plVar4[2] != unaff_R13) {
        *(int *)(unaff_RBP + -0x39) = iVar13;
        uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        if ((uint64_t)plVar4[2] < (uint64_t)*(uint *)(unaff_RBP + -0x39) + 4) {
          uVar9 = 0x11;
          uVar14 = extraout_XMM0_Da_08;
          goto LAB_1808a3652;
        }
      }
      uVar9 = SystemDataAnalyzer(*plVar4,unaff_RBP + -0x21,1);
      uVar14 = extraout_XMM0_Da_09;
    }
LAB_1808a3652:
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    unaff_R15D = *(uint *)(unaff_RBP + -0x21);
    uVar9 = 0xd;
    if (unaff_R15D < 3) {
      uVar9 = (uint64_t)unaff_R13 & 0xffffffff;
    }
  }
  else {
    uVar9 = 0x1c;
  }
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((0x54 < unaff_EDI) &&
     (uVar9 = FUN_1808de0e0(uVar14,0), uVar14 = extraout_XMM0_Da_10, (int)uVar9 != 0)) {
    return uVar9;
  }
  if (unaff_EDI < 0x55) {
    uVar8 = FUN_1808dde10(uVar14,0);
    uVar9 = (uint64_t)uVar8;
    uVar14 = extraout_XMM0_Da_11;
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  iVar1 = *(int *)(unaff_RBP + -0x19);
  if (iVar1 == 0) {
    puVar10 = (uint64_t *)
              SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&unknown_var_688_ptr,0x98a,
                            (uint64_t)unaff_R13 & 0xffffffff);
    if (puVar10 == (uint64_t *)0x0) {
      uVar9 = 0x26;
      goto LAB_1808a3889;
    }
    uVar14 = *(int32_t *)(unaff_RBP + 0x7f);
    func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
    *puVar10 = &unknown_var_472_ptr;
    uVar2 = *(int32_t *)(unaff_RBP + -0xd);
    uVar5 = *(int32_t *)(unaff_RBP + -9);
    uVar6 = *(int32_t *)(unaff_RBP + -5);
    *(int32_t *)(puVar10 + 6) = *(int32_t *)(unaff_RBP + -0x11);
    *(int32_t *)((int64_t)puVar10 + 0x34) = uVar2;
    *(int32_t *)(puVar10 + 7) = uVar5;
    *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar6;
    *puVar10 = &unknown_var_592_ptr;
    *(int32_t *)(puVar10 + 8) = uVar14;
    *(uint *)((int64_t)puVar10 + 0x44) = unaff_R15D;
    *(int *)(puVar10 + 9) = iVar13;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    *(int32_t *)(puVar10 + 0x12) = 0;
    uVar8 = FUN_18089aa40(puVar10);
    uVar14 = extraout_XMM0_Da_22;
joined_r0x0001808a3b38:
    uVar9 = (uint64_t)uVar8;
    unaff_R13 = puVar10;
joined_r0x0001808a3a67:
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  else {
    if (iVar1 == 1) {
      puVar10 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_688_ptr,0x992,
                              (uint64_t)unaff_R13 & 0xffffffff);
      if (puVar10 == (uint64_t *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &unknown_var_472_ptr;
      uVar14 = *(int32_t *)(unaff_RBP + -0x11);
      uVar5 = *(int32_t *)(unaff_RBP + -0xd);
      uVar6 = *(int32_t *)(unaff_RBP + -9);
      uVar7 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar10 + 6) = uVar14;
      *(int32_t *)((int64_t)puVar10 + 0x34) = uVar5;
      *(int32_t *)(puVar10 + 7) = uVar6;
      *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar7;
      *(uint *)((int64_t)puVar10 + 0x44) = unaff_R15D;
      piVar12 = (int *)((int64_t)puVar10 + 0x54);
      *(int32_t *)(puVar10 + 8) = uVar2;
      *piVar12 = iVar13;
      *(int32_t *)(puVar10 + 9) = 1;
      *puVar10 = &unknown_var_552_ptr;
      *(int *)(puVar10 + 10) = iVar13;
      *(int *)(puVar10 + 0xb) = iVar13;
      unaff_R13 = puVar10;
      if (*(uint *)(unaff_R14 + 8) < 0x55) {
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar8 = SystemConfigManager(*unaff_R14,puVar10 + 10);
          uVar9 = (uint64_t)uVar8;
          uVar14 = extraout_XMM0_Da_20;
          if (uVar8 == 0) {
            if (*(int *)(unaff_R14[1] + 0x18) == iVar13) goto LAB_1808a3a53;
            uVar9 = 0x1c;
          }
        }
        else {
          uVar9 = 0x1c;
        }
      }
      else {
        piVar12 = (int *)(puVar10 + 0xb);
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar8 = SystemConfigManager(*unaff_R14,piVar12);
          uVar9 = (uint64_t)uVar8;
          uVar14 = extraout_XMM0_Da_21;
          if (uVar8 == 0) goto LAB_1808a385d;
        }
        else {
          uVar9 = 0x1c;
        }
      }
      uVar8 = (uint)uVar9;
      goto joined_r0x0001808a3a67;
    }
    if (iVar1 == 2) {
      puVar10 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x80,&unknown_var_688_ptr,0x99a,
                              (uint64_t)unaff_R13 & 0xffffffff);
      if (puVar10 == (uint64_t *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar14 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &unknown_var_472_ptr;
      uVar2 = *(int32_t *)(unaff_RBP + -0xd);
      uVar5 = *(int32_t *)(unaff_RBP + -9);
      uVar6 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar10 + 6) = *(int32_t *)(unaff_RBP + -0x11);
      *(int32_t *)((int64_t)puVar10 + 0x34) = uVar2;
      *(int32_t *)(puVar10 + 7) = uVar5;
      *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar6;
      *(int32_t *)(puVar10 + 8) = uVar14;
      *(uint *)((int64_t)puVar10 + 0x44) = unaff_R15D;
      *(int32_t *)(puVar10 + 9) = 2;
      *puVar10 = &unknown_var_512_ptr;
      puVar10[10] = unaff_R13;
      puVar10[0xb] = unaff_R13;
      puVar11 = (int32_t *)SystemCoreProcessor();
      uVar14 = puVar11[1];
      uVar2 = puVar11[2];
      uVar5 = puVar11[3];
      *(int32_t *)(puVar10 + 0xc) = *puVar11;
      *(int32_t *)((int64_t)puVar10 + 100) = uVar14;
      *(int32_t *)(puVar10 + 0xd) = uVar2;
      *(int32_t *)((int64_t)puVar10 + 0x6c) = uVar5;
      puVar10[0xe] = unaff_R13;
      *(int *)(puVar10 + 0xf) = iVar13;
      *(char *)((int64_t)puVar10 + 0x7c) = (char)unaff_R13;
      uVar8 = FUN_18089b460(puVar10);
      uVar14 = extraout_XMM0_Da_19;
      goto joined_r0x0001808a3b38;
    }
    if (iVar1 == 3) {
      puVar10 = (uint64_t *)
                SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_688_ptr,0x9a2,
                              (uint64_t)unaff_R13 & 0xffffffff);
      if (puVar10 == (uint64_t *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(int32_t *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &unknown_var_472_ptr;
      uVar14 = *(int32_t *)(unaff_RBP + -0x11);
      uVar5 = *(int32_t *)(unaff_RBP + -0xd);
      uVar6 = *(int32_t *)(unaff_RBP + -9);
      uVar7 = *(int32_t *)(unaff_RBP + -5);
      *(int32_t *)(puVar10 + 6) = uVar14;
      *(int32_t *)((int64_t)puVar10 + 0x34) = uVar5;
      *(int32_t *)(puVar10 + 7) = uVar6;
      *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar7;
      *puVar10 = &unknown_var_632_ptr;
      *(uint *)((int64_t)puVar10 + 0x44) = unaff_R15D;
      *(int *)(puVar10 + 0xb) = iVar13;
      *(int32_t *)(puVar10 + 0xc) = 0;
      *(int *)((int64_t)puVar10 + 0x54) = iVar13;
      *(int32_t *)(puVar10 + 8) = uVar2;
      *(uint64_t **)(unaff_RBP + -0x21) = puVar10 + 0xc;
      *(int32_t *)((int64_t)puVar10 + 0x5c) = 0;
      *(int32_t *)((int64_t)puVar10 + 100) = 0;
      *(int32_t *)(puVar10 + 9) = 3;
      *(int32_t *)(puVar10 + 10) = 7;
      *(int32_t **)(unaff_RBP + -0x39) = (int32_t *)((int64_t)puVar10 + 100);
      unaff_R13 = puVar10;
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar8 = SystemErrorHandler(*unaff_R14,puVar10 + 10,4);
        uVar9 = (uint64_t)uVar8;
        uVar14 = extraout_XMM0_Da_12;
        if (uVar8 == 0) {
          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
            uVar8 = SystemErrorHandler(*unaff_R14,(int *)((int64_t)puVar10 + 0x54),4);
            uVar9 = (uint64_t)uVar8;
            uVar14 = extraout_XMM0_Da_13;
            if (uVar8 == 0) {
              if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                uVar8 = SystemConfigManager(*unaff_R14,puVar10 + 0xb);
                uVar9 = (uint64_t)uVar8;
                uVar14 = extraout_XMM0_Da_14;
                if (uVar8 == 0) {
                  if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                    uVar8 = SystemConfigManager(*unaff_R14,(int32_t *)((int64_t)puVar10 + 0x5c));
                    uVar9 = (uint64_t)uVar8;
                    uVar14 = extraout_XMM0_Da_15;
                    if (uVar8 == 0) {
                      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                        uVar8 = SystemConfigManager(*unaff_R14,*(uint64_t *)(unaff_RBP + -0x21));
                        uVar9 = (uint64_t)uVar8;
                        uVar14 = extraout_XMM0_Da_16;
                        if (uVar8 == 0) {
                          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                            uVar8 = SystemConfigManager(*unaff_R14,*(uint64_t *)(unaff_RBP + -0x39));
                            uVar9 = (uint64_t)uVar8;
                            uVar14 = extraout_XMM0_Da_17;
                            if (uVar8 == 0) goto LAB_1808a385d;
                          }
                          else {
                            uVar9 = 0x1c;
                          }
                        }
                      }
                      else {
                        uVar9 = 0x1c;
                      }
                    }
                  }
                  else {
                    uVar9 = 0x1c;
                  }
                }
              }
              else {
                uVar9 = 0x1c;
              }
            }
          }
          else {
            uVar9 = 0x1c;
          }
        }
      }
      else {
        uVar9 = 0x1c;
      }
      uVar8 = (uint)uVar9;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (*(uint *)(unaff_RBP + -0x15) < 0x55) {
    uVar8 = FUN_1808de0e0(uVar14,0);
    uVar9 = (uint64_t)uVar8;
    uVar14 = extraout_XMM0_Da_18;
    if (uVar8 != 0) {
LAB_1808a3889:
      if (unaff_R13 == (uint64_t *)0x0) {
        return uVar9;
      }
      (**(code **)*unaff_R13)(unaff_R13,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_R13,&unknown_var_2144_ptr,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(uVar14,unaff_RBP + -1);
}









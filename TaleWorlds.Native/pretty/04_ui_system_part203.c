#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part203.c - 1 个函数

// 函数: void FUN_180787908(void)
void FUN_180787908(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180787940(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t *param_4,
             int64_t *param_5)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int aiStackX_8 [2];
  int *piVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int32_t uStack_b8;
  int8_t uStack_b4;
  uint64_t uStack_a8;
  void *puStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int *piStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if (*(code **)(param_1 + 0x3a8) == (code *)0x0) {
    return 0x44;
  }
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x6c0);
  for (plVar3 = (int64_t *)*plVar1; plVar3 != plVar1; plVar3 = (int64_t *)*plVar3) {
    if (((int)plVar3[4] == (int)param_2) && (plVar3[3] == param_3)) goto LAB_180787df9;
  }
  piVar7 = &iStack_e4;
  uVar2 = (**(code **)(param_1 + 0x3a8))
                    (param_1 + 8,param_2,param_3,&uStack_d8,piVar7,aiStackX_8,&uStack_d4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar9 = (uint64_t)piVar7 & 0xffffffff00000000;
  plVar3 = (int64_t *)
           SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&processed_var_9968_ptr,0x52b,uVar9);
  if (plVar3 == (int64_t *)0x0) {
LAB_180787e12:
    uVar2 = 0x26;
  }
  else {
    *plVar3 = (int64_t)plVar3;
    plVar3[1] = (int64_t)plVar3;
    puVar4 = (uint64_t *)FUN_1807ef190();
    uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
    uStack_a8 = *puVar4;
    uStack_98 = puVar4[2];
    uStack_90 = puVar4[3];
    uStack_88 = puVar4[4];
    uStack_80 = puVar4[5];
    uStack_78 = puVar4[6];
    uStack_70 = puVar4[7];
    puStack_a0 = &processed_var_80_ptr;
    uVar2 = FUN_180742e00(*(uint64_t *)(param_1 + 0x48),&uStack_a8,0,plVar3 + 2,uVar8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = func_0x000180762af0(plVar3[2],0,aiStackX_8[0]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    switch(aiStackX_8[0]) {
    case 1:
      uVar2 = 2;
      break;
    case 2:
      uVar2 = 3;
      break;
    default:
      uVar2 = 1;
      break;
    case 4:
      uVar2 = 4;
      break;
    case 5:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 6;
      break;
    case 8:
      uVar2 = 7;
      break;
    case 0xc:
      uVar2 = 8;
    }
    uVar2 = FUN_1807621f0(plVar3[2],0,aiStackX_8[0],uVar2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack_d0 = 0;
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x116e0);
    uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,0,&uStack_d0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack_c8 = 0;
    uVar9 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    uVar2 = FUN_180759220(uStack_d0,plVar3[2],&uStack_c8,0,uVar9,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar2 = FUN_180765c40(uStack_c8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(*(int64_t *)(param_1 + 0x48) + 0x6d0) != iStack_e4) {
      iStack_e8 = (int)uVar2;
      uVar2 = func_0x000180746360(*(int64_t *)(param_1 + 0x48),&iStack_e8,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iStack_c0 = iStack_e8;
      iStack_bc = aiStackX_8[0];
      uStack_b4 = 1;
      uStack_b8 = 5;
      puVar4 = (uint64_t *)func_0x0001807e5100();
      uVar9 = uVar9 & 0xffffffff00000000;
      uStack_68 = *puVar4;
      uStack_60 = puVar4[1];
      uStack_58 = puVar4[2];
      uStack_50 = puVar4[3];
      uStack_40 = puVar4[5];
      uStack_38 = puVar4[6];
      uStack_30 = puVar4[7];
      piStack_48 = &iStack_c0;
      lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x2d8,&processed_var_9968_ptr,0x55d,uVar9
                           );
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_1807e4c10(lVar5);
      }
      plVar3[10] = lVar5;
      if (lVar5 == 0) goto LAB_180787e12;
      *(uint64_t *)(lVar5 + 0xa8) = *(uint64_t *)(param_1 + 0x48);
      *(int64_t *)(plVar3[10] + 0xd8) = *(int64_t *)(param_1 + 0x48) + 0x11848;
      *(int32_t *)(plVar3[10] + 0xe0) = *(int32_t *)(*(int64_t *)(param_1 + 0x48) + 0x116b8);
      uVar2 = FUN_18075a230(plVar3[10],&uStack_68);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(int32_t *)(plVar3[10] + 0x2b8) = 0xffffffff;
      *(code **)(plVar3[10] + 0x298) = FUN_1807868e0;
      *(int64_t **)(plVar3[10] + 0x1e8) = plVar3;
      *(float *)(plVar3[10] + 0x230) = (float)iStack_e4;
      uVar2 = (**(code **)(*(int64_t *)plVar3[10] + 0x38))();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*(int64_t *)plVar3[10] + 0x28))((int64_t *)plVar3[10],0,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_180762070(plVar3[10],1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      LOCK();
      *(uint *)(plVar3[10] + 100) = *(uint *)(plVar3[10] + 100) | 0x200;
      UNLOCK();
      *(int8_t *)(plVar3 + 0xb) = 1;
    }
    if (*(int *)(param_1 + 0x33c) == 1) {
      iStack_dc = 0;
      iStack_e0 = 0;
      uVar2 = func_0x000180746360(*(uint64_t *)(param_1 + 0x48),&iStack_e0,&iStack_dc);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar6 = iStack_e0 * iStack_dc * aiStackX_8[0] * 4;
      *(int *)(plVar3 + 9) = iVar6;
      lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar6,&processed_var_9968_ptr,0x587,
                            uVar9 & 0xffffffff00000000);
      plVar3[7] = lVar5;
      if (lVar5 == 0) goto LAB_180787e12;
      *(int16_t *)((int64_t)plVar3 + 0x59) = 0x101;
    }
    else {
      FUN_1807ef0f0(plVar3[2]);
    }
    uVar2 = FUN_180762070(plVar3[2],1);
    if ((int)uVar2 == 0) {
      plVar3[3] = param_3;
      *(int *)(plVar3 + 4) = (int)param_2;
      *(int32_t *)((int64_t)plVar3 + 0x24) = uStack_d8;
      *(int32_t *)((int64_t)plVar3 + 0x2c) = uStack_d4;
      *(int *)(plVar3 + 6) = aiStackX_8[0];
      lVar5 = *(int64_t *)(param_1 + 0x48);
      plVar3[1] = *(int64_t *)(lVar5 + 0x6c8);
      *plVar3 = lVar5 + 0x6c0;
      *(int64_t **)(lVar5 + 0x6c8) = plVar3;
      *(int64_t **)plVar3[1] = plVar3;
LAB_180787df9:
      *(int *)(plVar3 + 5) = (int)plVar3[5] + 1;
      *param_5 = plVar3[2];
      *param_4 = *(int32_t *)((int64_t)plVar3 + 0x24);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180787983(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  code *in_R10;
  int32_t *unaff_R13;
  int unaff_R14D;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lStack0000000000000028;
  int64_t lStack0000000000000030;
  int iStack0000000000000040;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  int32_t in_stack_00000050;
  
  for (plVar5 = *(int64_t **)(in_RAX + 0x6c0); plVar5 != (int64_t *)(in_RAX + 0x6c0);
      plVar5 = (int64_t *)*plVar5) {
    if (((int)plVar5[4] == unaff_R14D) && (plVar5[3] == unaff_RSI)) goto LAB_180787df9;
  }
  lStack0000000000000030 = unaff_RBP + -0x7d;
  lStack0000000000000028 = unaff_RBP + 0x5f;
  uVar10 = (int64_t)&stack0x00000040 + 4;
  uVar4 = (*in_R10)(param_1 + 8,param_2,param_3,&stack0x00000050,uVar10);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar10 = uVar10 & 0xffffffff00000000;
  plVar5 = (int64_t *)
           SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&processed_var_9968_ptr,0x52b,uVar10);
  if (plVar5 == (int64_t *)0x0) {
LAB_180787e12:
    uVar4 = 0x26;
  }
  else {
    *plVar5 = (int64_t)plVar5;
    plVar5[1] = (int64_t)plVar5;
    puVar6 = (uint64_t *)FUN_1807ef190();
    uVar4 = *(uint64_t *)(unaff_RDI + 0x48);
    uVar9 = CONCAT71((int7)(uVar10 >> 8),1);
    uVar2 = puVar6[1];
    *(uint64_t *)(unaff_RBP + -0x51) = *puVar6;
    *(uint64_t *)(unaff_RBP + -0x49) = uVar2;
    uVar2 = puVar6[3];
    *(uint64_t *)(unaff_RBP + -0x41) = puVar6[2];
    *(uint64_t *)(unaff_RBP + -0x39) = uVar2;
    uVar2 = puVar6[5];
    *(uint64_t *)(unaff_RBP + -0x31) = puVar6[4];
    *(uint64_t *)(unaff_RBP + -0x29) = uVar2;
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    *(void **)(unaff_RBP + -0x49) = &processed_var_80_ptr;
    *(uint64_t *)(unaff_RBP + -0x21) = uVar2;
    *(uint64_t *)(unaff_RBP + -0x19) = uVar3;
    uVar4 = FUN_180742e00(uVar4,unaff_RBP + -0x51,0,plVar5 + 2,uVar9);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = func_0x000180762af0(plVar5[2],0,*(int32_t *)(unaff_RBP + 0x5f));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    switch(*(int32_t *)(unaff_RBP + 0x5f)) {
    case 1:
      uVar4 = 2;
      break;
    case 2:
      uVar4 = 3;
      break;
    default:
      uVar4 = 1;
      break;
    case 4:
      uVar4 = 4;
      break;
    case 5:
      uVar4 = 5;
      break;
    case 6:
      uVar4 = 6;
      break;
    case 8:
      uVar4 = 7;
      break;
    case 0xc:
      uVar4 = 8;
    }
    uVar4 = FUN_1807621f0(plVar5[2],0,*(int32_t *)(unaff_RBP + 0x5f),uVar4);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar7 = *(int64_t *)(unaff_RDI + 0x48);
    *(uint64_t *)(unaff_RBP + -0x79) = 0;
    plVar1 = *(int64_t **)(lVar7 + 0x116e0);
    uVar4 = (**(code **)(*plVar1 + 0x120))(plVar1,0,unaff_RBP + -0x79);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(uint64_t *)(unaff_RBP + -0x71) = 0;
    lStack0000000000000028 = 0;
    uVar10 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    uVar4 = FUN_180759220(*(uint64_t *)(unaff_RBP + -0x79),plVar5[2],unaff_RBP + -0x71,0,uVar10);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar4 = FUN_180765c40(*(uint64_t *)(unaff_RBP + -0x71));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (*(int *)(*(int64_t *)(unaff_RDI + 0x48) + 0x6d0) != iStack0000000000000044) {
      iStack0000000000000040 = (int)uVar4;
      uVar4 = func_0x000180746360(*(int64_t *)(unaff_RDI + 0x48),&stack0x00000040,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(int *)(unaff_RBP + -0x69) = iStack0000000000000040;
      *(int32_t *)(unaff_RBP + -0x65) = *(int32_t *)(unaff_RBP + 0x5f);
      *(int8_t *)(unaff_RBP + -0x5d) = 1;
      *(int32_t *)(unaff_RBP + -0x61) = 5;
      puVar6 = (uint64_t *)func_0x0001807e5100();
      lVar7 = SYSTEM_MAIN_CONTROL_BLOCK;
      uVar10 = uVar10 & 0xffffffff00000000;
      uVar4 = puVar6[1];
      *(uint64_t *)(unaff_RBP + -0x11) = *puVar6;
      *(uint64_t *)(unaff_RBP + -9) = uVar4;
      uVar4 = puVar6[3];
      *(uint64_t *)(unaff_RBP + -1) = puVar6[2];
      *(uint64_t *)(unaff_RBP + 7) = uVar4;
      uVar4 = puVar6[5];
      *(uint64_t *)(unaff_RBP + 0xf) = puVar6[4];
      *(uint64_t *)(unaff_RBP + 0x17) = uVar4;
      uVar4 = puVar6[6];
      uVar2 = puVar6[7];
      *(int64_t *)(unaff_RBP + 0xf) = unaff_RBP + -0x69;
      *(uint64_t *)(unaff_RBP + 0x1f) = uVar4;
      *(uint64_t *)(unaff_RBP + 0x27) = uVar2;
      lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(lVar7 + 0x1a0),0x2d8,&processed_var_9968_ptr,0x55d,uVar10);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1807e4c10(lVar7);
      }
      plVar5[10] = lVar7;
      if (lVar7 == 0) goto LAB_180787e12;
      *(uint64_t *)(lVar7 + 0xa8) = *(uint64_t *)(unaff_RDI + 0x48);
      *(int64_t *)(plVar5[10] + 0xd8) = *(int64_t *)(unaff_RDI + 0x48) + 0x11848;
      *(int32_t *)(plVar5[10] + 0xe0) =
           *(int32_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x116b8);
      uVar4 = FUN_18075a230(plVar5[10],unaff_RBP + -0x11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(int32_t *)(plVar5[10] + 0x2b8) = 0xffffffff;
      *(code **)(plVar5[10] + 0x298) = FUN_1807868e0;
      *(int64_t **)(plVar5[10] + 0x1e8) = plVar5;
      *(float *)(plVar5[10] + 0x230) = (float)iStack0000000000000044;
      uVar4 = (**(code **)(*(int64_t *)plVar5[10] + 0x38))();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = (**(code **)(*(int64_t *)plVar5[10] + 0x28))((int64_t *)plVar5[10],0,0,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_180762070(plVar5[10],1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      LOCK();
      *(uint *)(plVar5[10] + 100) = *(uint *)(plVar5[10] + 100) | 0x200;
      UNLOCK();
      *(int8_t *)(plVar5 + 0xb) = 1;
    }
    if (*(int *)(unaff_RDI + 0x33c) == 1) {
      iStack000000000000004c = 0;
      iStack0000000000000048 = 0;
      uVar4 = func_0x000180746360(*(uint64_t *)(unaff_RDI + 0x48),&stack0x00000048,
                                  (int64_t)&stack0x00000048 + 4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar8 = iStack0000000000000048 * iStack000000000000004c * *(int *)(unaff_RBP + 0x5f) * 4;
      *(int *)(plVar5 + 9) = iVar8;
      lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar8,&processed_var_9968_ptr,0x587,
                            uVar10 & 0xffffffff00000000);
      plVar5[7] = lVar7;
      if (lVar7 == 0) goto LAB_180787e12;
      *(int16_t *)((int64_t)plVar5 + 0x59) = 0x101;
    }
    else {
      FUN_1807ef0f0(plVar5[2]);
    }
    uVar4 = FUN_180762070(plVar5[2],1);
    if ((int)uVar4 == 0) {
      plVar5[3] = unaff_RSI;
      *(int *)(plVar5 + 4) = unaff_R14D;
      *(int32_t *)((int64_t)plVar5 + 0x24) = in_stack_00000050;
      *(int32_t *)((int64_t)plVar5 + 0x2c) = *(int32_t *)(unaff_RBP + -0x7d);
      *(int32_t *)(plVar5 + 6) = *(int32_t *)(unaff_RBP + 0x5f);
      lVar7 = *(int64_t *)(unaff_RDI + 0x48);
      plVar5[1] = *(int64_t *)(lVar7 + 0x6c8);
      *plVar5 = lVar7 + 0x6c0;
      *(int64_t **)(lVar7 + 0x6c8) = plVar5;
      *(int64_t **)plVar5[1] = plVar5;
LAB_180787df9:
      *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
      **(int64_t **)(unaff_RBP + 0x7f) = plVar5[2];
      *unaff_R13 = *(int32_t *)((int64_t)plVar5 + 0x24);
      uVar4 = 0;
    }
  }
  return uVar4;
}



// WARNING: Instruction at (ram,0x000180787ee7) overlaps instruction at (ram,0x000180787ee5)
// 
// WARNING: Control flow encountered bad instruction data

int FUN_180787e40(int64_t param_1,int32_t param_2,int64_t *param_3,int64_t *param_4)

{
  byte *pbVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  code *pcVar4;
  byte bVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t *puVar8;
  int iVar9;
  int64_t in_RAX;
  char cVar10;
  char cVar11;
  char cVar12;
  int64_t *unaff_RBX;
  uint8_t uVar13;
  int8_t *puVar14;
  int64_t *unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar16;
  code *in_R10;
  int32_t unaff_R12D;
  int64_t *unaff_R14;
  char unaff_R15B;
  bool in_PF;
  int8_t auStack_50 [48];
  int8_t *puVar15;
  
  lVar16 = 0xc700787a;
  puVar8 = (int8_t *)register0x00000020;
  if (in_PF) {
    pbVar1 = (byte *)(in_RAX + -0x77);
    *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
code_r0x000180787eb3:
    register0x00000020 = (BADSPACEBASE *)puVar8;
    *(uint64_t *)((int64_t)register0x00000020 + 0x20) = *(uint64_t *)(unaff_RSI + 0x11670);
    *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787ecf;
    (*in_R10)(unaff_RSI,0x20,0);
LAB_180787ecf:
    param_1 = *unaff_RBX;
    if (param_1 != 0) {
LAB_180787ed7:
      cVar11 = *(char *)((int64_t)unaff_RBX + 0xc);
      goto LAB_180787edb;
    }
  }
  else {
    cVar12 = (char)((uint)param_2 >> 8);
    uVar13 = (uint8_t)((uint64_t)unaff_RBX >> 0x10);
    cVar10 = (char)unaff_RBX;
    cVar11 = (char)((uint64_t)unaff_RBX >> 8) + cVar12;
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) == 0) goto code_r0x000180787eb3;
    cVar11 = cVar11 + (byte)param_1;
    if ((POPCOUNT(cVar11) & 1U) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    cVar11 = cVar11 + (char)param_2;
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) == 0) {
      *(byte *)(param_1 + -1) = *(byte *)(param_1 + -1) & (byte)in_RAX;
      pbVar1 = (byte *)(in_RAX + -0x75);
      bVar5 = (byte)param_1 & 7;
      *pbVar1 = *pbVar1 >> bVar5 | *pbVar1 << 8 - bVar5;
      register0x00000020 = (BADSPACEBASE *)(unaff_RBP + 1);
      unaff_RBP = (int64_t *)*unaff_RBP;
      goto LAB_180787ecf;
    }
    cVar11 = cVar11 + cVar10;
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) == 0) goto LAB_180787ecf;
    cVar11 = cVar11 + cVar12;
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) == 0) goto LAB_180787ecf;
    cVar11 = cVar11 + (char)((uint64_t)in_RAX >> 8);
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) == 0) goto LAB_180787ed7;
    cVar11 = cVar11 + cVar12;
    unaff_RBX = (int64_t *)CONCAT62(uVar13,CONCAT11(cVar11,cVar10));
    if ((POPCOUNT(cVar11) & 1U) != 0) {
      if ((POPCOUNT(cVar11 + cVar12) & 1U) != 0) {
        cVar12 = cVar11 + cVar12 + cVar12;
        if ((POPCOUNT(cVar12) & 1U) == 0) {
          unaff_RSI = (uint64_t)((int)unaff_RSI + 1);
        }
        else if ((POPCOUNT(cVar12 + (char)((uint64_t)param_1 >> 8)) & 1U) != 0) {
          *(char *)(in_RAX + 0x53) = *(char *)(in_RAX + 0x53) + (byte)in_RAX;
          puVar14 = auStack_50;
          puVar15 = auStack_50;
          unaff_RSI = *(uint64_t *)(param_1 + 0x48);
          in_R10 = *(code **)(unaff_RSI + 0x11838);
          unaff_R15B = '\0';
          unaff_RBX = param_3;
          register0x00000020 = (BADSPACEBASE *)auStack_50;
          lVar16 = param_1;
          unaff_R14 = param_4;
          unaff_R12D = param_2;
          if ((in_R10 != (code *)0x0) &&
             (register0x00000020 = (BADSPACEBASE *)puVar15, puVar8 = puVar14,
             (*(byte *)(unaff_RSI + 0x11840) & 0x20) != 0)) goto code_r0x000180787eb3;
          goto LAB_180787ecf;
        }
      }
      goto LAB_180787ee9;
    }
LAB_180787edb:
    if (cVar11 == '\0') {
      lVar6 = unaff_RBX[1];
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787ee5;
      func_0x000180743c20(param_1,(int)lVar6);
      *(int8_t *)((int64_t)unaff_RBX + 0xc) = 1;
    }
  }
LAB_180787ee9:
  if (unaff_RSI != 0) {
    *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787efb;
    func_0x000180743c20(unaff_RSI,2);
    unaff_R15B = '\x01';
  }
  uVar2 = *(uint64_t *)(lVar16 + 0x48);
  *(int64_t **)((int64_t)register0x00000020 + 0x68) = unaff_RBP;
  *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787f0e;
  iVar9 = FUN_180743160(uVar2,0);
  if (iVar9 == 0) {
    lVar6 = *unaff_R14;
    if ((lVar6 != 0) && (*(char *)((int64_t)unaff_R14 + 0xc) == '\0')) {
      lVar7 = unaff_R14[1];
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787f2f;
      func_0x000180743c20(lVar6,(int)lVar7);
      *(int8_t *)((int64_t)unaff_R14 + 0xc) = 1;
    }
    *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787f3e;
    FUN_1807864f0(lVar16,0);
    *(int32_t *)(*(int64_t *)(lVar16 + 0x48) + 0x116e8) = *(int32_t *)(lVar16 + 0x318);
    lVar6 = *(int64_t *)(*(int64_t *)(lVar16 + 0x48) + 0x107b8);
    if (*(int *)(lVar6 + 0x30) == 0) {
      *(int *)(lVar16 + 0x318) = *(int *)(lVar16 + 0x318) + 1;
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787fd1;
      iVar9 = FUN_180760790(lVar6,unaff_R12D);
      *(int32_t *)(lVar6 + 0x34) = 0;
    }
    else {
      plVar3 = *(int64_t **)(*(int64_t *)(lVar16 + 0x48) + 0x116e0);
      pcVar4 = *(code **)(*plVar3 + 0x120);
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787f76;
      iVar9 = (*pcVar4)(plVar3,0,(int8_t *)((int64_t)register0x00000020 + 0x60));
      if (iVar9 != 0) goto LAB_180788061;
      uVar2 = *(uint64_t *)((int64_t)register0x00000020 + 0x60);
      *(int32_t *)(lVar6 + 0xc) = 0;
      *(int32_t *)(lVar6 + 0x30) = 0;
      *(int32_t *)(lVar6 + 0x34) = 1;
      *(int *)(lVar16 + 0x318) = *(int *)(lVar16 + 0x318) + 1;
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787fb3;
      iVar9 = FUN_180760c90(lVar6,uVar2,unaff_R12D);
    }
    if ((unaff_RSI != 0) && (unaff_R15B != '\0')) {
                    // WARNING: Subroutine does not return
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180787ff4;
      SystemCoreHandler(unaff_RSI,2);
    }
    if (iVar9 == 0) {
      uVar2 = *(uint64_t *)(lVar16 + 0x48);
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180788001;
      iVar9 = FUN_180749940(uVar2);
      if (iVar9 == 0) {
        uVar2 = *(uint64_t *)(lVar16 + 0x48);
        *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x18078801b;
        FUN_180744ae0(uVar2,0x100001,0,0);
        lVar6 = *(int64_t *)(lVar16 + 0x48);
        pcVar4 = *(code **)(lVar6 + 0x11838);
        if ((pcVar4 != (code *)0x0) && ((*(uint *)(lVar6 + 0x11840) & 0x100) != 0)) {
          *(uint64_t *)((int64_t)register0x00000020 + 0x20) = *(uint64_t *)(lVar6 + 0x11670);
          *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180788051;
          (*pcVar4)(lVar6,0x100,0,0);
        }
        *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x18078805e;
        FUN_1807864f0(lVar16,2);
        iVar9 = 0;
      }
    }
  }
LAB_180788061:
  if ((unaff_R15B != '\0') && (unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
    *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x180788091;
    SystemCoreHandler(unaff_RSI,2);
  }
  return iVar9;
}



int FUN_180787e70(int64_t param_1,int32_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  bool bVar5;
  uint64_t uStackX_8;
  
  lVar1 = *(int64_t *)(param_1 + 0x48);
  if ((*(code **)(lVar1 + 0x11838) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11840) & 0x20) != 0)) {
    (**(code **)(lVar1 + 0x11838))(lVar1,0x20,0,0,*(uint64_t *)(lVar1 + 0x11670));
  }
  if ((*param_3 != 0) && (*(char *)((int64_t)param_3 + 0xc) == '\0')) {
    func_0x000180743c20(*param_3,(int)param_3[1]);
    *(int8_t *)((int64_t)param_3 + 0xc) = 1;
  }
  bVar5 = lVar1 != 0;
  if (bVar5) {
    func_0x000180743c20(lVar1,2);
  }
  iVar4 = FUN_180743160(*(uint64_t *)(param_1 + 0x48),0);
  if (iVar4 == 0) {
    if ((*param_4 != 0) && (*(char *)((int64_t)param_4 + 0xc) == '\0')) {
      func_0x000180743c20(*param_4,(int)param_4[1]);
      *(int8_t *)((int64_t)param_4 + 0xc) = 1;
    }
    FUN_1807864f0(param_1,0);
    *(int32_t *)(*(int64_t *)(param_1 + 0x48) + 0x116e8) = *(int32_t *)(param_1 + 0x318);
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x107b8);
    if (*(int *)(lVar2 + 0x30) == 0) {
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
      iVar4 = FUN_180760790(lVar2,param_2);
      *(int32_t *)(lVar2 + 0x34) = 0;
    }
    else {
      plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x116e0);
      iVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0,&uStackX_8);
      if (iVar4 != 0) goto LAB_180788061;
      *(int32_t *)(lVar2 + 0xc) = 0;
      *(int32_t *)(lVar2 + 0x30) = 0;
      *(int32_t *)(lVar2 + 0x34) = 1;
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
      iVar4 = FUN_180760c90(lVar2,uStackX_8,param_2);
    }
    if ((lVar1 != 0) && (bVar5)) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,2);
    }
    if (iVar4 == 0) {
      iVar4 = FUN_180749940(*(uint64_t *)(param_1 + 0x48));
      if (iVar4 == 0) {
        FUN_180744ae0(*(uint64_t *)(param_1 + 0x48),0x100001,0,0);
        lVar2 = *(int64_t *)(param_1 + 0x48);
        if ((*(code **)(lVar2 + 0x11838) != (code *)0x0) &&
           ((*(uint *)(lVar2 + 0x11840) & 0x100) != 0)) {
          (**(code **)(lVar2 + 0x11838))(lVar2,0x100,0,0,*(uint64_t *)(lVar2 + 0x11670));
        }
        FUN_1807864f0(param_1,2);
        iVar4 = 0;
      }
    }
  }
LAB_180788061:
  if ((bVar5) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar1,2);
  }
  return iVar4;
}



int FUN_180787e7e(int64_t param_1,int32_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  bool bVar4;
  uint64_t in_stack_00000060;
  
  if ((*(code **)(unaff_RSI + 0x11838) != (code *)0x0) &&
     ((*(byte *)(unaff_RSI + 0x11840) & 0x20) != 0)) {
    (**(code **)(unaff_RSI + 0x11838))();
  }
  if ((*unaff_RBX != 0) && (*(char *)((int64_t)unaff_RBX + 0xc) == '\0')) {
    func_0x000180743c20(*unaff_RBX,(int)unaff_RBX[1]);
    *(int8_t *)((int64_t)unaff_RBX + 0xc) = 1;
  }
  bVar4 = unaff_RSI != 0;
  if (bVar4) {
    func_0x000180743c20();
  }
  iVar3 = FUN_180743160(*(uint64_t *)(param_1 + 0x48),0);
  if (iVar3 == 0) {
    if ((*param_4 != 0) && (*(char *)((int64_t)param_4 + 0xc) == '\0')) {
      func_0x000180743c20(*param_4,(int)param_4[1]);
      *(int8_t *)((int64_t)param_4 + 0xc) = 1;
    }
    FUN_1807864f0(param_1,0);
    *(int32_t *)(*(int64_t *)(param_1 + 0x48) + 0x116e8) = *(int32_t *)(param_1 + 0x318);
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x107b8);
    if (*(int *)(lVar1 + 0x30) == 0) {
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
      iVar3 = FUN_180760790(lVar1,param_2);
      *(int32_t *)(lVar1 + 0x34) = 0;
    }
    else {
      plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x116e0);
      iVar3 = (**(code **)(*plVar2 + 0x120))(plVar2,0,&stack0x00000060);
      if (iVar3 != 0) goto LAB_180788061;
      *(int32_t *)(lVar1 + 0xc) = 0;
      *(int32_t *)(lVar1 + 0x30) = 0;
      *(int32_t *)(lVar1 + 0x34) = 1;
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
      iVar3 = FUN_180760c90(lVar1,in_stack_00000060,param_2);
    }
    if ((unaff_RSI != 0) && (bVar4)) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler();
    }
    if (iVar3 == 0) {
      iVar3 = FUN_180749940(*(uint64_t *)(param_1 + 0x48));
      if (iVar3 == 0) {
        FUN_180744ae0(*(uint64_t *)(param_1 + 0x48),0x100001,0,0);
        lVar1 = *(int64_t *)(param_1 + 0x48);
        if ((*(code **)(lVar1 + 0x11838) != (code *)0x0) &&
           ((*(uint *)(lVar1 + 0x11840) & 0x100) != 0)) {
          (**(code **)(lVar1 + 0x11838))(lVar1,0x100,0,0,*(uint64_t *)(lVar1 + 0x11670));
        }
        FUN_1807864f0(param_1,2);
        iVar3 = 0;
      }
    }
  }
LAB_180788061:
  if ((bVar4) && (unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return iVar3;
}



int32_t FUN_18078807f(void)

{
  int32_t unaff_EBX;
  int64_t unaff_RSI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return unaff_EBX;
}






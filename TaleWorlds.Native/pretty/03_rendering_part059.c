#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part059.c - 12 个函数

// 函数: void FUN_18029aa23(void)
void FUN_18029aa23(void)

{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  
  *(uint64_t *)(unaff_R13 + 0x18) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R12 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R12 * 8) = unaff_R13;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R13;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



uint64_t * FUN_18029aa70(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  
  *param_1 = &processed_var_928_ptr;
  param_1[0x2ef] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  puVar3 = param_1 + 0x364;
  lVar2 = 0x10;
  do {
    func_0x000180074f10(puVar3);
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x381] = 0;
  param_1[0x3be] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3c0] = 0;
  FUN_18029c700(param_1 + 0xfe4);
  param_1[0x1049] = 0;
  param_1[0x104c] = 0;
  param_1[0x1048] = 0;
  param_1[0x1047] = 0;
  param_1[0x104f] = 0xffffffffffffffff;
  param_1[0x1053] = 0xffffffffffffffff;
  param_1[0x1050] = 0xffffffffffffffff;
  param_1[0x1051] = 0xffffffffffffffff;
  param_1[0x1052] = 0xffffffffffffffff;
  param_1[0x1054] = 0xffffffffffffffff;
  *(int8_t *)(param_1 + 0x104e) = 9;
  param_1[0x107e] = 0;
  param_1[0x1076] = 0xffffffffdeadfeee;
  param_1[0x1077] = 0;
  param_1[0x106f] = 0xffffffffdeadfeee;
  param_1[0x1078] = 0;
  param_1[0x1070] = 0xffffffffdeadfeee;
  param_1[0x1079] = 0;
  param_1[0x1071] = 0xffffffffdeadfeee;
  param_1[0x107a] = 0;
  param_1[0x1072] = 0xffffffffdeadfeee;
  param_1[0x107b] = 0;
  param_1[0x1073] = 0xffffffffdeadfeee;
  param_1[0x107c] = 0;
  param_1[0x1074] = 0xffffffffdeadfeee;
  param_1[0x107d] = 0;
  param_1[0x1075] = 0xffffffffdeadfeee;
  *(int32_t *)(param_1 + 0x1011) = 0;
  param_1[0x1016] = 0;
  param_1[0x1017] = 0;
  param_1[0x1018] = 0;
  param_1[0x1019] = 0;
  param_1[0x101a] = 0;
  plVar1 = (int64_t *)param_1[0x1049];
  param_1[0x1049] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



uint64_t *
FUN_18029ac70(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_928_ptr;
  if ((int64_t *)param_1[0x1049] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1049] + 0x38))();
  }
  FUN_18029c460(param_1 + 0xfe4);
  if ((param_2 & 1) != 0) {
    free(param_1,0x8400,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18029ace0(uint64_t *param_1)
void FUN_18029ace0(uint64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  *param_1 = &processed_var_928_ptr;
  if ((int64_t *)param_1[0x1049] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1049] + 0x38))();
  }
  uVar5 = 0;
  plVar1 = param_1 + 0x1012;
  lVar3 = *plVar1;
  if (param_1[0x1013] - lVar3 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(uVar5 * 8 + lVar3);
      if (puVar2 != (uint64_t *)0x0) {
        if ((int64_t *)puVar2[0xd] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xd] + 0x10))();
          puVar2[0xd] = 0;
        }
        if ((int64_t *)puVar2[0xe] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xe] + 0x10))();
          puVar2[0xe] = 0;
        }
        if ((int64_t *)puVar2[0xf] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xf] + 0x10))();
          puVar2[0xf] = 0;
        }
        if ((int64_t *)puVar2[0x10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0x10] + 0x10))();
          puVar2[0x10] = 0;
        }
        if ((int64_t *)puVar2[0x11] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0x11] + 0x10))();
          puVar2[0x11] = 0;
        }
        *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar2);
      }
      *(uint64_t *)(uVar5 * 8 + *plVar1) = 0;
      uVar5 = (uint64_t)((int)uVar5 + 1);
      lVar3 = *plVar1;
    } while (uVar5 < (uint64_t)(param_1[0x1013] - lVar3 >> 3));
  }
  param_1[0x1013] = lVar3;
  puVar2 = (uint64_t *)param_1[0x1043];
  if (puVar2 != (uint64_t *)0x0) {
    FUN_1800f74f0(param_1 + 0x1041,*puVar2);
    puVar2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  FUN_180058370(param_1 + 0x103b,param_1[0x103d]);
  FUN_180058370(param_1 + 0x1035,param_1[0x1037]);
  FUN_180058370(param_1 + 0x102f,param_1[0x1031]);
  SystemDataValidator(param_1 + 0x101b,0x20,5,FUN_180046860);
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  SystemDataValidator(param_1 + 0xffd,0x20,5,FUN_180046860);
  lVar3 = param_1[0xffa];
  for (lVar4 = param_1[0xff9]; lVar4 != lVar3; lVar4 = lVar4 + 0x40) {
    FUN_180152b00(lVar4);
  }
  if (param_1[0xff9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18029ad30(int64_t *param_1,int param_2,int64_t *param_3)
void FUN_18029ad30(int64_t *param_1,int param_2,int64_t *param_3)

{
  if ((param_3 != (int64_t *)0x0) && (*param_3 != 0)) {
    (**(code **)(*param_1 + 0x70))(param_1,*param_3,1);
    param_1[(int64_t)param_2 + 0x1077] = (int64_t)param_3;
    return;
  }
  param_1[(int64_t)param_2 + 0x1077] = (int64_t)param_3;
  return;
}





// 函数: void FUN_18029ada0(int64_t *param_1,int64_t *param_2,int param_3)
void FUN_18029ada0(int64_t *param_1,int64_t *param_2,int param_3)

{
  int64_t lVar1;
  
  if ((param_2 != (int64_t *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
    if (param_3 == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,lVar1,2);
      param_1[0x107e] = (int64_t)param_2;
      return;
    }
    if (param_3 == 1) {
      (**(code **)(*param_1 + 0x70))(param_1,lVar1,4);
      param_1[0x107e] = (int64_t)param_2;
      return;
    }
  }
  param_1[0x107e] = (int64_t)param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ae20(int64_t *param_1)
void FUN_18029ae20(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  uint64_t uStackX_8;
  
  iVar4 = 0;
  param_1[0x1048] = 0;
  param_1[0x1047] = 0;
  iVar3 = iVar4;
  do {
    (**(code **)(*param_1 + 0xb0))(param_1,iVar3,iVar3,0x33);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  if ((void *)*param_1 == &rendering_buffer_2024_ptr) {
    plVar2 = param_1 + 0x1147;
    plVar5 = param_1 + 0x1087;
    do {
      uStackX_8 = 0;
      (**(code **)(*(int64_t *)param_1[0x1080] + 200))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x1f8))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x1d8))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0xf8))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x40))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x218))
                ((int64_t *)param_1[0x1080],iVar4,1,&uStackX_8);
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
      iVar4 = iVar4 + 1;
      *(int32_t *)(plVar2 + -0x40) = 0xffffffff;
      *(int32_t *)plVar2 = 0xffffffff;
      plVar2 = (int64_t *)((int64_t)plVar2 + 4);
    } while (iVar4 < 0x80);
  }
  else {
    (**(code **)((void *)*param_1 + 0x58))(param_1);
  }
  (**(code **)(*param_1 + 0x110))(param_1,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  (**(code **)(*param_1 + 0x110))(param_1,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  (**(code **)(*param_1 + 0x110))(param_1,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  (**(code **)(*param_1 + 0x110))(param_1,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  (**(code **)(*param_1 + 0x110))(param_1,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  (**(code **)(*param_1 + 0x110))(param_1,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  (**(code **)(*param_1 + 0x110))(param_1,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*param_1 + 0x110))(param_1,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*param_1 + 0x110))(param_1,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  lVar1 = SYSTEM_STATE_MANAGER;
  fVar8 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(param_1 + 0x2a4) = fVar8;
  *(float *)((int64_t)param_1 + 0x1524) = 1.0 / fVar8;
  *(float *)((int64_t)param_1 + 0x1d54) = *(float *)(lVar1 + 0x2060) * 0.01;
  *(float *)(param_1 + 0x2a5) = *(float *)(lVar1 + 0x1110) * 0.005 - 0.25;
  fVar8 = *(float *)(lVar1 + 0x1180);
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x2f4) = fVar8;
  fVar8 = *(float *)(lVar1 + 0x11f0);
  fVar6 = 0.0;
  if ((0.0 <= fVar8) && (fVar6 = fVar8, 1.0 <= fVar8)) {
    fVar6 = 1.0;
  }
  *(float *)((int64_t)param_1 + 0x17a4) = fVar6;
  uVar7 = powf(0x40000000,*(int32_t *)(lVar1 + 0x1260));
  *(int32_t *)(param_1 + 0x2f7) = uVar7;
  param_1[0x1077] = 0;
  param_1[0x1078] = 0;
  param_1[0x1079] = 0;
  param_1[0x107a] = 0;
  param_1[0x107b] = 0;
  param_1[0x107c] = 0;
  param_1[0x107d] = 0;
  param_1[0x107e] = 0;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x128))(param_1,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ae29(int64_t *param_1)
void FUN_18029ae29(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  
  param_1[0x1048] = unaff_RBP;
  uVar4 = unaff_RBP & 0xffffffff;
  param_1[0x1047] = unaff_RBP;
  do {
    (**(code **)(*param_1 + 0xb0))(param_1,uVar4,uVar4,0x33);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (uint64_t)uVar3;
  } while ((int)uVar3 < 9);
  if ((void *)*param_1 == &rendering_buffer_2024_ptr) {
    uVar4 = unaff_RBP & 0xffffffff;
    plVar2 = param_1 + 0x1147;
    puVar5 = (uint64_t *)(param_1 + 0x1087);
    in_stack_00000048 = unaff_RSI;
    do {
      in_stack_00000040 = unaff_RBP;
      (**(code **)(*(int64_t *)param_1[0x1080] + 200))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x1f8))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x1d8))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0xf8))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x40))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      (**(code **)(*(int64_t *)param_1[0x1080] + 0x218))
                ((int64_t *)param_1[0x1080],uVar4,1,&stack0x00000040);
      *puVar5 = unaff_RBP;
      puVar5 = puVar5 + 1;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      *(int32_t *)(plVar2 + -0x40) = 0xffffffff;
      *(int32_t *)plVar2 = 0xffffffff;
      plVar2 = (int64_t *)((int64_t)plVar2 + 4);
    } while ((int)uVar3 < 0x80);
  }
  else {
    (**(code **)((void *)*param_1 + 0x58))(param_1);
  }
  (**(code **)(*param_1 + 0x110))(param_1,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  (**(code **)(*param_1 + 0x110))(param_1,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  (**(code **)(*param_1 + 0x110))(param_1,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  (**(code **)(*param_1 + 0x110))(param_1,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  (**(code **)(*param_1 + 0x110))(param_1,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  (**(code **)(*param_1 + 0x110))(param_1,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  (**(code **)(*param_1 + 0x110))(param_1,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*param_1 + 0x110))(param_1,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*param_1 + 0x110))(param_1,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  lVar1 = SYSTEM_STATE_MANAGER;
  fVar8 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(param_1 + 0x2a4) = fVar8;
  *(float *)((int64_t)param_1 + 0x1524) = 1.0 / fVar8;
  *(float *)((int64_t)param_1 + 0x1d54) = *(float *)(lVar1 + 0x2060) * 0.01;
  *(float *)(param_1 + 0x2a5) = *(float *)(lVar1 + 0x1110) * 0.005 - 0.25;
  fVar8 = *(float *)(lVar1 + 0x1180);
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x2f4) = fVar8;
  fVar8 = *(float *)(lVar1 + 0x11f0);
  fVar6 = 0.0;
  if ((0.0 <= fVar8) && (fVar6 = fVar8, 1.0 <= fVar8)) {
    fVar6 = 1.0;
  }
  *(float *)((int64_t)param_1 + 0x17a4) = fVar6;
  uVar7 = powf(0x40000000,*(int32_t *)(lVar1 + 0x1260));
  *(int32_t *)(param_1 + 0x2f7) = uVar7;
  param_1[0x1077] = unaff_RBP;
  param_1[0x1078] = unaff_RBP;
  param_1[0x1079] = unaff_RBP;
  param_1[0x107a] = unaff_RBP;
  param_1[0x107b] = unaff_RBP;
  param_1[0x107c] = unaff_RBP;
  param_1[0x107d] = unaff_RBP;
  param_1[0x107e] = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x128))(param_1,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ae76(void)
void FUN_18029ae76(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t unaff_RBP;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = unaff_RBP & 0xffffffff;
  plVar2 = unaff_RBX + 0x1147;
  puVar5 = (uint64_t *)(unaff_RBX + 0x1087);
  do {
    (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 200))
              ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 0x1f8))
              ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 0x1d8))
              ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 0xf8))
              ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 0x40))
              ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    uVar6 = (**(code **)(*(int64_t *)unaff_RBX[0x1080] + 0x218))
                      ((int64_t *)unaff_RBX[0x1080],uVar4,1,&stack0x00000040);
    *puVar5 = unaff_RBP;
    puVar5 = puVar5 + 1;
    uVar3 = (int)uVar4 + 1;
    uVar4 = (uint64_t)uVar3;
    *(int32_t *)(plVar2 + -0x40) = 0xffffffff;
    *(int32_t *)plVar2 = 0xffffffff;
    plVar2 = (int64_t *)((int64_t)plVar2 + 4);
  } while ((int)uVar3 < 0x80);
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  uVar6 = (**(code **)(*unaff_RBX + 0x110))(uVar6,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*unaff_RBX + 0x110))(uVar6,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  lVar1 = SYSTEM_STATE_MANAGER;
  fVar8 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(unaff_RBX + 0x2a4) = fVar8;
  *(float *)((int64_t)unaff_RBX + 0x1524) = 1.0 / fVar8;
  *(float *)((int64_t)unaff_RBX + 0x1d54) = *(float *)(lVar1 + 0x2060) * 0.01;
  *(float *)(unaff_RBX + 0x2a5) = *(float *)(lVar1 + 0x1110) * 0.005 - 0.25;
  fVar8 = *(float *)(lVar1 + 0x1180);
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(unaff_RBX + 0x2f4) = fVar8;
  fVar8 = *(float *)(lVar1 + 0x11f0);
  fVar7 = 0.0;
  if ((0.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
    fVar7 = 1.0;
  }
  *(float *)((int64_t)unaff_RBX + 0x17a4) = fVar7;
  uVar6 = powf(0x40000000,*(int32_t *)(lVar1 + 0x1260));
  *(int32_t *)(unaff_RBX + 0x2f7) = uVar6;
  unaff_RBX[0x1077] = unaff_RBP;
  unaff_RBX[0x1078] = unaff_RBP;
  unaff_RBX[0x1079] = unaff_RBP;
  unaff_RBX[0x107a] = unaff_RBP;
  unaff_RBX[0x107b] = unaff_RBP;
  unaff_RBX[0x107c] = unaff_RBP;
  unaff_RBX[0x107d] = unaff_RBP;
  unaff_RBX[0x107e] = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*unaff_RBX + 0x128))(uVar6,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029af73(int32_t param_1)
void FUN_18029af73(int32_t param_1)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(param_1,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70))
  ;
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  uVar2 = (**(code **)(*unaff_RBX + 0x110))(uVar2,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*unaff_RBX + 0x110))(uVar2,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  lVar1 = SYSTEM_STATE_MANAGER;
  fVar4 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(unaff_RBX + 0x2a4) = fVar4;
  *(float *)((int64_t)unaff_RBX + 0x1524) = 1.0 / fVar4;
  *(float *)((int64_t)unaff_RBX + 0x1d54) = *(float *)(lVar1 + 0x2060) * 0.01;
  *(float *)(unaff_RBX + 0x2a5) = *(float *)(lVar1 + 0x1110) * 0.005 - 0.25;
  fVar4 = *(float *)(lVar1 + 0x1180);
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(unaff_RBX + 0x2f4) = fVar4;
  fVar4 = *(float *)(lVar1 + 0x11f0);
  fVar3 = 0.0;
  if ((0.0 <= fVar4) && (fVar3 = fVar4, 1.0 <= fVar4)) {
    fVar3 = 1.0;
  }
  *(float *)((int64_t)unaff_RBX + 0x17a4) = fVar3;
  uVar2 = powf(0x40000000,*(int32_t *)(lVar1 + 0x1260));
  *(int32_t *)(unaff_RBX + 0x2f7) = uVar2;
  unaff_RBX[0x1077] = unaff_RBP;
  unaff_RBX[0x1078] = unaff_RBP;
  unaff_RBX[0x1079] = unaff_RBP;
  unaff_RBX[0x107a] = unaff_RBP;
  unaff_RBX[0x107b] = unaff_RBP;
  unaff_RBX[0x107c] = unaff_RBP;
  unaff_RBX[0x107d] = unaff_RBP;
  unaff_RBX[0x107e] = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*unaff_RBX + 0x128))(uVar2,7);
  return;
}





// 函数: void FUN_18029b126(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_18029b126(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  int64_t in_RAX;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t uVar2;
  
  *(int32_t *)(unaff_RBX + 0x2f4) = 0;
  fVar1 = *(float *)(in_RAX + 0x11f0);
  if ((param_3 <= fVar1) && (param_3 = fVar1, param_4 <= fVar1)) {
    param_3 = param_4;
  }
  *(float *)((int64_t)unaff_RBX + 0x17a4) = param_3;
  uVar2 = powf(0x40000000,*(int32_t *)(in_RAX + 0x1260));
  *(int32_t *)(unaff_RBX + 0x2f7) = uVar2;
  unaff_RBX[0x1077] = unaff_RBP;
  unaff_RBX[0x1078] = unaff_RBP;
  unaff_RBX[0x1079] = unaff_RBP;
  unaff_RBX[0x107a] = unaff_RBP;
  unaff_RBX[0x107b] = unaff_RBP;
  unaff_RBX[0x107c] = unaff_RBP;
  unaff_RBX[0x107d] = unaff_RBP;
  unaff_RBX[0x107e] = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*unaff_RBX + 0x128))(uVar2,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029b1c0(uint64_t param_1,code *param_2)
void FUN_18029b1c0(uint64_t param_1,code *param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  float fVar2;
  int32_t uVar3;
  float fVar4;
  
  uVar3 = (*param_2)();
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  uVar3 = (**(code **)(*unaff_RBX + 0x110))(uVar3,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*unaff_RBX + 0x110))(uVar3,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  lVar1 = SYSTEM_STATE_MANAGER;
  fVar4 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(unaff_RBX + 0x2a4) = fVar4;
  *(float *)((int64_t)unaff_RBX + 0x1524) = 1.0 / fVar4;
  *(float *)((int64_t)unaff_RBX + 0x1d54) = *(float *)(lVar1 + 0x2060) * 0.01;
  *(float *)(unaff_RBX + 0x2a5) = *(float *)(lVar1 + 0x1110) * 0.005 - 0.25;
  fVar4 = *(float *)(lVar1 + 0x1180);
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(unaff_RBX + 0x2f4) = fVar4;
  fVar4 = *(float *)(lVar1 + 0x11f0);
  fVar2 = 0.0;
  if ((0.0 <= fVar4) && (fVar2 = fVar4, 1.0 <= fVar4)) {
    fVar2 = 1.0;
  }
  *(float *)((int64_t)unaff_RBX + 0x17a4) = fVar2;
  uVar3 = powf(0x40000000,*(int32_t *)(lVar1 + 0x1260));
  *(int32_t *)(unaff_RBX + 0x2f7) = uVar3;
  unaff_RBX[0x1077] = unaff_RBP;
  unaff_RBX[0x1078] = unaff_RBP;
  unaff_RBX[0x1079] = unaff_RBP;
  unaff_RBX[0x107a] = unaff_RBP;
  unaff_RBX[0x107b] = unaff_RBP;
  unaff_RBX[0x107c] = unaff_RBP;
  unaff_RBX[0x107d] = unaff_RBP;
  unaff_RBX[0x107e] = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*unaff_RBX + 0x128))(uVar3,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029b1d0(int64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4,
void FUN_18029b1d0(int64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4,
                  int32_t param_5,byte param_6)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void **ppuVar5;
  int8_t auStack_178 [32];
  int32_t uStack_158;
  byte bStack_150;
  void **ppuStack_148;
  void ***pppuStack_140;
  uint64_t uStack_138;
  void **ppuStack_130;
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [128];
  int32_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint uStack_78;
  int64_t *plStack_68;
  uint64_t uStack_48;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 == iVar1) {
    bStack_150 = param_6;
    uStack_158 = param_5;
    (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4[2]);
  }
  else {
    ppuStack_148 = &puStack_128;
    puStack_128 = &memory_allocator_3432_ptr;
    puStack_120 = auStack_110;
    uStack_118 = 0;
    auStack_110[0] = 0;
    uStack_90 = 8;
    uStack_7c = param_5;
    uStack_78 = (uint)param_6;
    uStack_88 = param_2;
    uStack_80 = param_3;
    plStack_68 = param_4;
    if (*(code **)(*param_4 + 0x28) == (code *)&memory_allocator_3248_ptr) {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*param_4 + 0x28))(param_4);
    }
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppuVar5 = (void **)FUN_18005ce30(uVar4,&puStack_128);
    ppuStack_130 = ppuVar5;
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x28))(ppuVar5);
    }
    lVar2 = system_context_ptr;
    pppuStack_140 = &ppuStack_148;
    ppuStack_148 = ppuVar5;
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x28))(ppuVar5);
    }
    FUN_18005e370(lVar2,&ppuStack_148);
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x38))(ppuVar5);
    }
    pppuStack_140 = (void ***)&puStack_128;
    puStack_128 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029b390(int64_t *param_1,uint64_t param_2,int64_t *param_3)
void FUN_18029b390(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void **ppuVar5;
  int8_t auStack_148 [32];
  void **ppuStack_128;
  void ***pppuStack_120;
  uint64_t uStack_118;
  void **ppuStack_110;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_68;
  int64_t *plStack_60;
  int32_t uStack_58;
  uint64_t uStack_28;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 == iVar1) {
    (**(code **)(*param_1 + 0x1e8))
              (param_1,param_2,param_3[2],*(int32_t *)((int64_t)param_3 + 0x1c));
  }
  else {
    ppuStack_128 = &puStack_108;
    puStack_108 = &memory_allocator_3432_ptr;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    uStack_70 = 9;
    uStack_58 = *(int32_t *)((int64_t)param_3 + 0x1c);
    uStack_68 = param_2;
    plStack_60 = param_3;
    if (*(code **)(*param_3 + 0x28) == (code *)&memory_allocator_3248_ptr) {
      LOCK();
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*param_3 + 0x28))(param_3);
    }
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppuVar5 = (void **)FUN_18005ce30(uVar4,&puStack_108);
    ppuStack_110 = ppuVar5;
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x28))(ppuVar5);
    }
    lVar2 = system_context_ptr;
    pppuStack_120 = &ppuStack_128;
    ppuStack_128 = ppuVar5;
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x28))(ppuVar5);
    }
    FUN_18005e370(lVar2,&ppuStack_128);
    if (ppuVar5 != (void **)0x0) {
      (**(code **)(*ppuVar5 + 0x38))(ppuVar5);
    }
    pppuStack_120 = (void ***)&puStack_108;
    puStack_108 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




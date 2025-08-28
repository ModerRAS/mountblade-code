/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part138.c - 10 个函数

// 函数: void FUN_18074a970(int64_t param_1,int param_2,uint64_t *param_3)
void FUN_18074a970(int64_t param_1,int param_2,uint64_t *param_3)

{
  float fVar1;
  uint uVar2;
  uint64_t *puVar3;
  char *pcVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int8_t auStack_88 [32];
  int iStack_68;
  char acStack_58 [16];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  puVar7 = (uint64_t *)0x0;
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x1193c) = *(int32_t *)(*(int64_t *)(param_1 + 0x670) + 0x54);
    param_3 = (uint64_t *)(uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x670) + 0x58);
  }
  else if (param_2 == 1) {
    *(int32_t *)(param_1 + 0x1193c) = 1;
  }
  else {
    *(int *)(param_1 + 0x1193c) = param_2;
    param_3 = puVar7;
    if (param_2 < 0x3e9) {
      if (param_2 == 1000) {
LAB_18074a9ef:
        param_3 = (uint64_t *)0x2;
      }
      else {
        switch(param_2) {
        case 2:
          param_3 = (uint64_t *)0x1;
          break;
        case 3:
          goto LAB_18074a9ef;
        case 4:
          param_3 = (uint64_t *)0x4;
          break;
        case 5:
          param_3 = (uint64_t *)0x5;
          break;
        case 6:
          param_3 = (uint64_t *)0x6;
          break;
        case 7:
          param_3 = (uint64_t *)&system_data_0008;
          break;
        case 8:
          param_3 = (uint64_t *)0xc;
        }
      }
    }
  }
  *(int *)(param_1 + 0x6d4) = (int)param_3;
  switch(*(int32_t *)(param_1 + 0x1193c)) {
  case 2:
    uVar5 = 0;
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    goto code_r0x00018074aefb;
  case 3:
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7);
    uVar11 = 0x3f000000;
    uVar12 = 0x3f5db3d7;
    uVar5 = 1;
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    break;
  case 4:
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf3504f3,0x3f3504f3);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,1,0x3f3504f3,0x3f3504f3);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,4,0xbf3504f3,0xbf3504f3);
    uVar12 = 0xbf3504f3;
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    uVar11 = 0x3f3504f3;
    uVar5 = 5;
    break;
  case 5:
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,1,0x3f000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,2,0,0x3f800000);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,4,0xbf708fb2,0xbeaf1d47);
    uVar11 = 0x3f708fb2;
    uVar12 = 0xbeaf1d47;
    uVar5 = 5;
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    break;
  case 6:
    if ((*(int *)(*(int64_t *)(param_1 + 0x670) + 0x54) == 6) &&
       ((*(byte *)(*(int64_t *)(param_1 + 0x670) + 0x60) & 0xc0) != 0)) {
      uVar11 = 0xc0278d36;
    }
    else {
      uVar11 = 0xbff5be0c;
    }
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,1,0x3f000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,2,0,0x3f800000);
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    func_0x000180748f00(param_1,3,0,0x3f800000);
                    // WARNING: Subroutine does not return
    AdvancedSystemController(uVar11);
  case 7:
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,1,0x3f000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,2,0,0x3f800000);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,3,0,0x3f800000);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,4,0xbf800000,0xb33bbd2e);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,5,0x3f800000,0xb33bbd2e);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,6,0xbf000001,0xbf5db3d7);
    uVar11 = 0x3f000001;
    uVar12 = 0xbf5db3d7;
    uVar5 = 7;
    iStack_68 = CONCAT31(iStack_68._1_3_,1);
    break;
  case 8:
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,1,0x3f000000,0x3f5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,2,0,0x3f800000);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,3,0,0x3f800000);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,4,0xbf800000,0xb33bbd2e);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,5,0x3f800000,0xb33bbd2e);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,6,0xbf000001,0xbf5db3d7);
    iStack_68._0_1_ = 1;
    func_0x000180748f00(param_1,7,0x3f000001,0xbf5db3d7);
    iStack_68._0_1_ = 0;
    func_0x000180748f00(param_1,8,0,0x3f800000);
    iStack_68._0_1_ = 0;
    func_0x000180748f00(param_1,9,0,0x3f800000);
    iStack_68._0_1_ = 0;
    func_0x000180748f00(param_1,10,0,0x3f800000);
    iStack_68 = (uint)iStack_68._1_3_ << 8;
    uVar5 = 0xb;
code_r0x00018074aefb:
    uVar12 = 0x3f800000;
    uVar11 = 0;
    break;
  default:
    goto FUN_18074af10;
  }
  func_0x000180748f00(param_1,uVar5,uVar11,uVar12);
FUN_18074af10:
  if (*(int64_t **)(param_1 + 0x10f78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10f78) + 8))();
    *(uint64_t *)(param_1 + 0x10f78) = 0;
  }
  if (*(int *)(param_1 + 0x6d4) != *(int *)(*(int64_t *)(param_1 + 0x670) + 0x58)) {
    puVar6 = puVar7;
    if (((*(int *)(*(int64_t *)(param_1 + 0x670) + 0x54) == 3) &&
        (*(int *)(param_1 + 0x1193c) == 6)) && ((*(uint *)(param_1 + 0x78) & 0x80000) != 0)) {
      iStack_68 = 0;
      puVar3 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x120,&processed_var_8784_ptr,0x92);
      if (puVar3 != (uint64_t *)0x0) {
        puVar3[6] = 0;
        puVar6 = puVar3 + 4;
        puVar3[5] = puVar6;
        *puVar6 = puVar6;
        puVar6 = puVar3 + 7;
        puVar3[8] = puVar6;
        *puVar6 = puVar6;
        puVar3[9] = 0;
        puVar3[0xb] = 0;
        *(int32_t *)(puVar3 + 10) = 0;
        puVar3[0xd] = 0;
        *(int32_t *)(puVar3 + 0xc) = 0;
        puVar3[0x17] = 0;
        *(int32_t *)(puVar3 + 0x16) = 0;
        puVar3[3] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        *puVar3 = &processed_var_8760_ptr;
        puVar6 = puVar3;
      }
    }
    else {
      iStack_68 = 0;
      puVar3 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&processed_var_8784_ptr);
      if (puVar3 != (uint64_t *)0x0) {
        *puVar3 = &processed_var_8552_ptr;
        puVar6 = puVar3 + 4;
        puVar3[5] = puVar6;
        *puVar6 = puVar6;
        puVar3[6] = 0;
        puVar6 = puVar3 + 7;
        puVar3[8] = puVar6;
        *puVar6 = puVar6;
        puVar3[9] = 0;
        puVar3[0xb] = 0;
        *(int32_t *)(puVar3 + 10) = 0;
        puVar3[0xd] = 0;
        *(int32_t *)(puVar3 + 0xc) = 0;
        puVar3[0x17] = 0;
        *(int32_t *)(puVar3 + 0x16) = 0;
        puVar3[3] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar6 = puVar3;
      }
    }
    *(uint64_t **)(param_1 + 0x10f78) = puVar6;
    if (puVar6 == (uint64_t *)0x0) goto LAB_18074b1a5;
  }
  if (*(int *)(param_1 + 0x1193c) != 1) {
    puVar6 = (uint64_t *)(param_1 + 0x11b80);
    acStack_58[0] = '\0';
    acStack_58[1] = '\0';
    acStack_58[2] = '\0';
    acStack_58[3] = '\0';
    acStack_58[4] = '\0';
    acStack_58[5] = '\0';
    acStack_58[6] = '\0';
    acStack_58[7] = '\0';
    *puVar6 = 0;
    *(uint64_t *)(param_1 + 0x11b88) = 0;
    *(uint64_t *)(param_1 + 0x11b90) = 0;
    *(uint64_t *)(param_1 + 0x11b98) = 0;
    *(uint64_t *)(param_1 + 0x11ba0) = 0;
    *(uint64_t *)(param_1 + 0x11ba8) = 0;
    *(uint64_t *)(param_1 + 0x11bb0) = 0;
    *(uint64_t *)(param_1 + 0x11bb8) = 0;
    *(uint64_t *)(param_1 + 0x11bc0) = 0;
    *(uint64_t *)(param_1 + 0x11bc8) = 0;
    *(uint64_t *)(param_1 + 0x11bd0) = 0;
    *(uint64_t *)(param_1 + 0x11bd8) = 0;
    uVar2 = *(uint *)(param_1 + 0x6d4);
    acStack_58[8] = '\0';
    acStack_58[9] = '\0';
    acStack_58[10] = '\0';
    acStack_58[0xb] = '\0';
    FUN_180749f70(param_1);
    if (0 < (int)uVar2) {
      uVar9 = (uint64_t)uVar2;
      do {
        fVar10 = 16.0;
        pcVar4 = (char *)(param_1 + 0x11968);
        puVar3 = puVar7;
        uVar8 = (uint64_t)uVar2;
        do {
          if (((*(int *)(pcVar4 + -0x28) != 3) && (*pcVar4 != '\0')) &&
             ((fVar1 = *(float *)(pcVar4 + -8), fVar1 < fVar10 &&
              (acStack_58[*(int *)(pcVar4 + -0x28)] == '\0')))) {
            *puVar6 = (int8_t *)(param_1 + 72000 + (int64_t)puVar3);
            fVar10 = fVar1;
          }
          puVar3 = puVar3 + 6;
          pcVar4 = pcVar4 + 0x30;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((int *)*puVar6 != (int *)0x0) {
          acStack_58[*(int *)*puVar6] = '\x01';
        }
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_18074a5f0(param_1);
  }
LAB_18074b1a5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_18074aa3b(void)
void FUN_18074aa3b(void)

{
  int in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  int64_t in_R9;
  
  UNRECOVERED_JUMPTABLE =
       (code *)((uint64_t)*(uint *)(in_R9 + 0x74b1e0 + (int64_t)in_EAX * 4) + in_R9);
                    // WARNING: Could not recover jumptable at 0x00018074aa52. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}





// 函数: void FUN_18074abb0(int32_t param_1)
void FUN_18074abb0(int32_t param_1)

{
  int64_t in_RAX;
  int32_t uVar1;
  int32_t uVar2;
  
  if ((*(int *)(in_RAX + 0x54) == 6) && ((*(byte *)(in_RAX + 0x60) & 0xc0) != 0)) {
    uVar2 = 0xc0278d36;
  }
  else {
    uVar2 = 0xbff5be0c;
  }
  uVar1 = func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7,1);
  uVar1 = func_0x000180748f00(uVar1,1,0x3f000000,0x3f5db3d7,1);
  uVar1 = func_0x000180748f00(uVar1,2,0,0x3f800000,1);
  func_0x000180748f00(uVar1,3,0,0x3f800000,1);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18074acbd(int32_t param_1)
void FUN_18074acbd(int32_t param_1)

{
  uint64_t *puVar1;
  float fVar2;
  uint uVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int32_t unaff_0000002c;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t uVar10;
  float fVar11;
  uint64_t in_stack_00000030;
  int32_t in_stack_00000038;
  uint64_t in_stack_00000040;
  
  uVar10 = func_0x000180748f00(param_1,0,0xbf000000,0x3f5db3d7,1);
  uVar10 = func_0x000180748f00(uVar10,1,0x3f000000,0x3f5db3d7,1);
  uVar10 = func_0x000180748f00(uVar10,2,0,0x3f800000,1);
  uVar10 = func_0x000180748f00(uVar10,3,0,0x3f800000,1);
  uVar10 = func_0x000180748f00(uVar10,4,0xbf800000,0xb33bbd2e,1);
  uVar10 = func_0x000180748f00(uVar10,5,0x3f800000,0xb33bbd2e,1);
  uVar10 = func_0x000180748f00(uVar10,6,0xbf000001,0xbf5db3d7,1);
  func_0x000180748f00(uVar10,7,0x3f000001,0xbf5db3d7,1);
  if (*(int64_t **)(unaff_RBX + 0x10f78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(unaff_RBX + 0x10f78) + 8))();
    *(uint64_t *)(unaff_RBX + 0x10f78) = CONCAT44(unaff_0000002c,unaff_EBP);
  }
  if (*(int *)(unaff_RBX + 0x6d4) != *(int *)(*(int64_t *)(unaff_RBX + 0x670) + 0x58)) {
    if (((*(int *)(*(int64_t *)(unaff_RBX + 0x670) + 0x54) == 3) &&
        (*(int *)(unaff_RBX + 0x1193c) == 6)) && ((*(uint *)(unaff_RBX + 0x78) & 0x80000) != 0)) {
      puVar4 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x120,&processed_var_8784_ptr,0x92);
      if (puVar4 == (uint64_t *)0x0) {
LAB_18074b06d:
        puVar4 = (uint64_t *)CONCAT44(unaff_0000002c,unaff_EBP);
      }
      else {
        puVar4[6] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar1 = puVar4 + 4;
        puVar4[5] = puVar1;
        *puVar1 = puVar1;
        puVar1 = puVar4 + 7;
        puVar4[8] = puVar1;
        *puVar1 = puVar1;
        puVar4[9] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xb] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 10) = unaff_EBP;
        puVar4[0xd] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 0xc) = unaff_EBP;
        puVar4[0x17] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 0x16) = unaff_EBP;
        puVar4[3] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xe] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xf] = CONCAT44(unaff_0000002c,unaff_EBP);
        *puVar4 = &processed_var_8760_ptr;
      }
    }
    else {
      puVar4 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&processed_var_8784_ptr);
      if (puVar4 == (uint64_t *)0x0) goto LAB_18074b06d;
      *puVar4 = &processed_var_8552_ptr;
      puVar1 = puVar4 + 4;
      puVar4[5] = puVar1;
      *puVar1 = puVar1;
      puVar4[6] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar1 = puVar4 + 7;
      puVar4[8] = puVar1;
      *puVar1 = puVar1;
      puVar4[9] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xb] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 10) = unaff_EBP;
      puVar4[0xd] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 0xc) = unaff_EBP;
      puVar4[0x17] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 0x16) = unaff_EBP;
      puVar4[3] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xe] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xf] = CONCAT44(unaff_0000002c,unaff_EBP);
    }
    *(uint64_t **)(unaff_RBX + 0x10f78) = puVar4;
    if (puVar4 == (uint64_t *)0x0) goto LAB_18074b1a5;
  }
  if (*(int *)(unaff_RBX + 0x1193c) != 1) {
    plVar7 = (int64_t *)(unaff_RBX + 0x11b80);
    in_stack_00000030 = 0;
    *plVar7 = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b88) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b90) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b98) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11ba0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11ba8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bb0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bb8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bc0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bc8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bd0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bd8) = CONCAT44(unaff_0000002c,unaff_EBP);
    uVar3 = *(uint *)(unaff_RBX + 0x6d4);
    in_stack_00000038 = 0;
    FUN_180749f70();
    if (0 < (int)uVar3) {
      uVar9 = (uint64_t)uVar3;
      do {
        fVar11 = 16.0;
        pcVar5 = (char *)(unaff_RBX + 0x11968);
        lVar6 = CONCAT44(unaff_0000002c,unaff_EBP);
        uVar8 = (uint64_t)uVar3;
        do {
          if (((*(int *)(pcVar5 + -0x28) != 3) && (*pcVar5 != (char)unaff_EBP)) &&
             ((fVar2 = *(float *)(pcVar5 + -8), fVar2 < fVar11 &&
              (*(char *)((int64_t)&stack0x00000030 + (int64_t)*(int *)(pcVar5 + -0x28)) ==
               (char)unaff_EBP)))) {
            *plVar7 = unaff_RBX + 72000 + lVar6;
            fVar11 = fVar2;
          }
          lVar6 = lVar6 + 0x30;
          pcVar5 = pcVar5 + 0x30;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((int *)*plVar7 != (int *)0x0) {
          *(int8_t *)((int64_t)&stack0x00000030 + (int64_t)*(int *)*plVar7) = 1;
        }
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_18074a5f0();
  }
LAB_18074b1a5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18074af10(void)
void FUN_18074af10(void)

{
  uint64_t *puVar1;
  float fVar2;
  uint uVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int32_t unaff_0000002c;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  uint64_t in_stack_00000030;
  int32_t in_stack_00000038;
  uint64_t in_stack_00000040;
  
  if (*(int64_t **)(unaff_RBX + 0x10f78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(unaff_RBX + 0x10f78) + 8))();
    *(uint64_t *)(unaff_RBX + 0x10f78) = CONCAT44(unaff_0000002c,unaff_EBP);
  }
  if (*(int *)(unaff_RBX + 0x6d4) != *(int *)(*(int64_t *)(unaff_RBX + 0x670) + 0x58)) {
    if (((*(int *)(*(int64_t *)(unaff_RBX + 0x670) + 0x54) == 3) &&
        (*(int *)(unaff_RBX + 0x1193c) == 6)) && ((*(uint *)(unaff_RBX + 0x78) & 0x80000) != 0)) {
      puVar4 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x120,&processed_var_8784_ptr,0x92);
      if (puVar4 == (uint64_t *)0x0) {
LAB_18074b06d:
        puVar4 = (uint64_t *)CONCAT44(unaff_0000002c,unaff_EBP);
      }
      else {
        puVar4[6] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar1 = puVar4 + 4;
        puVar4[5] = puVar1;
        *puVar1 = puVar1;
        puVar1 = puVar4 + 7;
        puVar4[8] = puVar1;
        *puVar1 = puVar1;
        puVar4[9] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xb] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 10) = unaff_EBP;
        puVar4[0xd] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 0xc) = unaff_EBP;
        puVar4[0x17] = CONCAT44(unaff_0000002c,unaff_EBP);
        *(int32_t *)(puVar4 + 0x16) = unaff_EBP;
        puVar4[3] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xe] = CONCAT44(unaff_0000002c,unaff_EBP);
        puVar4[0xf] = CONCAT44(unaff_0000002c,unaff_EBP);
        *puVar4 = &processed_var_8760_ptr;
      }
    }
    else {
      puVar4 = (uint64_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&processed_var_8784_ptr);
      if (puVar4 == (uint64_t *)0x0) goto LAB_18074b06d;
      *puVar4 = &processed_var_8552_ptr;
      puVar1 = puVar4 + 4;
      puVar4[5] = puVar1;
      *puVar1 = puVar1;
      puVar4[6] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar1 = puVar4 + 7;
      puVar4[8] = puVar1;
      *puVar1 = puVar1;
      puVar4[9] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xb] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 10) = unaff_EBP;
      puVar4[0xd] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 0xc) = unaff_EBP;
      puVar4[0x17] = CONCAT44(unaff_0000002c,unaff_EBP);
      *(int32_t *)(puVar4 + 0x16) = unaff_EBP;
      puVar4[3] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xe] = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar4[0xf] = CONCAT44(unaff_0000002c,unaff_EBP);
    }
    *(uint64_t **)(unaff_RBX + 0x10f78) = puVar4;
    if (puVar4 == (uint64_t *)0x0) goto LAB_18074b1a5;
  }
  if (*(int *)(unaff_RBX + 0x1193c) != 1) {
    plVar7 = (int64_t *)(unaff_RBX + 0x11b80);
    in_stack_00000030 = 0;
    *plVar7 = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b88) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b90) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11b98) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11ba0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11ba8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bb0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bb8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bc0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bc8) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bd0) = CONCAT44(unaff_0000002c,unaff_EBP);
    *(uint64_t *)(unaff_RBX + 0x11bd8) = CONCAT44(unaff_0000002c,unaff_EBP);
    uVar3 = *(uint *)(unaff_RBX + 0x6d4);
    in_stack_00000038 = 0;
    FUN_180749f70();
    if (0 < (int)uVar3) {
      uVar9 = (uint64_t)uVar3;
      do {
        fVar10 = 16.0;
        pcVar5 = (char *)(unaff_RBX + 0x11968);
        lVar6 = CONCAT44(unaff_0000002c,unaff_EBP);
        uVar8 = (uint64_t)uVar3;
        do {
          if (((*(int *)(pcVar5 + -0x28) != 3) && (*pcVar5 != (char)unaff_EBP)) &&
             ((fVar2 = *(float *)(pcVar5 + -8), fVar2 < fVar10 &&
              (*(char *)((int64_t)&stack0x00000030 + (int64_t)*(int *)(pcVar5 + -0x28)) ==
               (char)unaff_EBP)))) {
            *plVar7 = unaff_RBX + 72000 + lVar6;
            fVar10 = fVar2;
          }
          lVar6 = lVar6 + 0x30;
          pcVar5 = pcVar5 + 0x30;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((int *)*plVar7 != (int *)0x0) {
          *(int8_t *)((int64_t)&stack0x00000030 + (int64_t)*(int *)*plVar7) = 1;
        }
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_18074a5f0();
  }
LAB_18074b1a5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18074b093(void)
void FUN_18074b093(void)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint8_t unaff_00000029;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  uint64_t in_stack_00000040;
  
  plVar5 = (int64_t *)(unaff_RBX + 0x11b80);
  *plVar5 = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11b88) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11b90) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11b98) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11ba0) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11ba8) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bb0) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bb8) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bc0) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bc8) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bd0) = CONCAT71(unaff_00000029,unaff_BPL);
  *(uint64_t *)(unaff_RBX + 0x11bd8) = CONCAT71(unaff_00000029,unaff_BPL);
  uVar2 = *(uint *)(unaff_RBX + 0x6d4);
  FUN_180749f70();
  if (0 < (int)uVar2) {
    uVar7 = (uint64_t)uVar2;
    do {
      fVar8 = 16.0;
      pcVar3 = (char *)(unaff_RBX + 0x11968);
      lVar4 = CONCAT71(unaff_00000029,unaff_BPL);
      uVar6 = (uint64_t)uVar2;
      do {
        if ((((*(int *)(pcVar3 + -0x28) != 3) && (*pcVar3 != unaff_BPL)) &&
            (fVar1 = *(float *)(pcVar3 + -8), fVar1 < fVar8)) &&
           ((&stack0x00000030)[*(int *)(pcVar3 + -0x28)] == unaff_BPL)) {
          *plVar5 = unaff_RBX + 72000 + lVar4;
          fVar8 = fVar1;
        }
        lVar4 = lVar4 + 0x30;
        pcVar3 = pcVar3 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if ((int *)*plVar5 != (int *)0x0) {
        (&stack0x00000030)[*(int *)*plVar5] = 1;
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_18074a5f0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18074b1a3(void)
void FUN_18074b1a3(void)

{
  uint64_t in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18074b200(int64_t param_1)
void FUN_18074b200(int64_t param_1)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  int8_t auStack_48 [32];
  char acStack_28 [16];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  if (*(int *)(param_1 + 0x1193c) != 1) {
    plVar5 = (int64_t *)(param_1 + 0x11b80);
    *plVar5 = 0;
    *(uint64_t *)(param_1 + 0x11b88) = 0;
    *(uint64_t *)(param_1 + 0x11b90) = 0;
    *(uint64_t *)(param_1 + 0x11b98) = 0;
    *(uint64_t *)(param_1 + 0x11ba0) = 0;
    *(uint64_t *)(param_1 + 0x11ba8) = 0;
    *(uint64_t *)(param_1 + 0x11bb0) = 0;
    *(uint64_t *)(param_1 + 0x11bb8) = 0;
    *(uint64_t *)(param_1 + 0x11bc0) = 0;
    *(uint64_t *)(param_1 + 0x11bc8) = 0;
    *(uint64_t *)(param_1 + 0x11bd0) = 0;
    *(uint64_t *)(param_1 + 0x11bd8) = 0;
    uVar2 = *(uint *)(param_1 + 0x6d4);
    acStack_28[0] = '\0';
    acStack_28[1] = '\0';
    acStack_28[2] = '\0';
    acStack_28[3] = '\0';
    acStack_28[4] = '\0';
    acStack_28[5] = '\0';
    acStack_28[6] = '\0';
    acStack_28[7] = '\0';
    acStack_28[8] = '\0';
    acStack_28[9] = '\0';
    acStack_28[10] = '\0';
    acStack_28[0xb] = '\0';
    FUN_180749f70();
    if (0 < (int)uVar2) {
      uVar7 = (uint64_t)uVar2;
      do {
        fVar8 = 16.0;
        pcVar3 = (char *)(param_1 + 0x11968);
        lVar4 = 0;
        uVar6 = (uint64_t)uVar2;
        do {
          if ((((*(int *)(pcVar3 + -0x28) != 3) && (*pcVar3 != '\0')) &&
              (fVar1 = *(float *)(pcVar3 + -8), fVar1 < fVar8)) &&
             (acStack_28[*(int *)(pcVar3 + -0x28)] == '\0')) {
            *plVar5 = param_1 + 72000 + lVar4;
            fVar8 = fVar1;
          }
          lVar4 = lVar4 + 0x30;
          pcVar3 = pcVar3 + 0x30;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if ((int *)*plVar5 != (int *)0x0) {
          acStack_28[*(int *)*plVar5] = '\x01';
        }
        plVar5 = plVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_18074a5f0(param_1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_48);
}





// 函数: void FUN_18074b225(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18074b225(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  
  plVar5 = (int64_t *)(param_1 + 0x11b80);
  *plVar5 = 0;
  *(uint64_t *)(param_1 + 0x11b88) = 0;
  *(uint64_t *)(param_1 + 0x11b90) = 0;
  *(uint64_t *)(param_1 + 0x11b98) = 0;
  *(uint64_t *)(param_1 + 0x11ba0) = 0;
  *(uint64_t *)(param_1 + 0x11ba8) = 0;
  *(uint64_t *)(param_1 + 0x11bb0) = 0;
  *(uint64_t *)(param_1 + 0x11bb8) = 0;
  *(uint64_t *)(param_1 + 0x11bc0) = 0;
  *(uint64_t *)(param_1 + 0x11bc8) = 0;
  *(uint64_t *)(param_1 + 0x11bd0) = 0;
  *(uint64_t *)(param_1 + 0x11bd8) = 0;
  uVar2 = *(uint *)(param_1 + 0x6d4);
  param_5._0_4_ = 0;
  FUN_180749f70(param_1,param_2,param_3,param_4,0);
  if (0 < (int)uVar2) {
    uVar7 = (uint64_t)uVar2;
    do {
      fVar8 = 16.0;
      pcVar3 = (char *)(unaff_RBX + 0x11968);
      lVar4 = 0;
      uVar6 = (uint64_t)uVar2;
      do {
        if ((((*(int *)(pcVar3 + -0x28) != 3) && (*pcVar3 != '\0')) &&
            (fVar1 = *(float *)(pcVar3 + -8), fVar1 < fVar8)) &&
           ((&stack0x00000020)[*(int *)(pcVar3 + -0x28)] == '\0')) {
          *plVar5 = unaff_RBX + 72000 + lVar4;
          fVar8 = fVar1;
        }
        lVar4 = lVar4 + 0x30;
        pcVar3 = pcVar3 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if ((int *)*plVar5 != (int *)0x0) {
        (&stack0x00000020)[*(int *)*plVar5] = 1;
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_18074a5f0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(param_6 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18074b342(void)
void FUN_18074b342(void)

{
  uint64_t in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000030 ^ (uint64_t)&stack0x00000000);
}






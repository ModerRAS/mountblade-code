/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part051.c - 15 个函数

// 函数: void FUN_1808c8d10(int64_t param_1,int64_t param_2)
void FUN_1808c8d10(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *plVar7;
  int iVar8;
  int8_t auStack_68 [32];
  int64_t *plStack_48;
  int8_t auStack_40 [40];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  plVar1 = (int64_t *)(param_2 + 0xdc);
  if ((((*(int *)plVar1 == 0) && (*(int *)(param_2 + 0xe0) == 0)) && (*(int *)(param_2 + 0xe4) == 0)
      ) && (*(int *)(param_2 + 0xe8) == 0)) goto LAB_1808c8f09;
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 1) {
    lVar5 = FUN_1808c7560(*(uint64_t *)(param_1 + 8),plVar1);
    if (lVar5 == 0) goto LAB_1808c8f09;
  }
  else {
    if (iVar4 == 2) {
      puVar3 = *(uint64_t **)(param_1 + 0x18);
      plVar2 = (int64_t *)*puVar3;
      plVar7 = plVar2;
      while( true ) {
        if ((plVar7 < plVar2) || (iVar4 = (int)puVar3[1], plVar2 + iVar4 <= plVar7))
        goto LAB_1808c8f09;
        lVar5 = *plVar7;
        if ((*(int64_t *)(lVar5 + 0x10) == *plVar1) &&
           (*(int64_t *)(lVar5 + 0x18) == *(int64_t *)(param_2 + 0xe4))) break;
        plVar7 = plVar7 + 1;
      }
      iVar6 = (int)((int64_t)plVar7 - (int64_t)plVar2 >> 3);
      if ((-1 < iVar6) && (iVar6 < iVar4)) {
        iVar8 = (iVar4 - iVar6) + -1;
        if (0 < iVar8) {
                    // WARNING: Subroutine does not return
          memmove(plVar2 + iVar6,plVar2 + iVar6 + 1,(int64_t)iVar8 << 3);
        }
        *(int *)(puVar3 + 1) = iVar4 + -1;
        FUN_1808ed480(lVar5,0);
      }
      goto LAB_1808c8f09;
    }
    if (iVar4 != 3) goto LAB_1808c8f09;
    plVar2 = (int64_t *)**(uint64_t **)(param_1 + 0x18);
    for (plVar7 = plVar2;
        (plVar2 <= plVar7 && (plVar7 < plVar2 + (int)(*(uint64_t **)(param_1 + 0x18))[1]));
        plVar7 = plVar7 + 1) {
      if ((*(int64_t *)(*plVar7 + 0x10) == *plVar1) &&
         (*(int64_t *)(*plVar7 + 0x18) == *(int64_t *)(param_2 + 0xe4))) goto LAB_1808c8f09;
    }
    lVar5 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x120))
                      (*(int64_t **)(param_1 + 8),plVar1,CONCAT71((int7)((uint64_t)plVar7 >> 8),1)
                      );
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(plVar1,auStack_40);
    }
  }
  if (*(int *)(lVar5 + 0x28) == 2) {
    *(int8_t *)(param_1 + 0x50) = 1;
  }
  else {
    plStack_48 = (int64_t *)0x0;
    iVar4 = FUN_1808bf8e0(*(uint64_t *)(param_1 + 0x10),plVar1,&plStack_48);
    plVar1 = plStack_48;
    if ((((iVar4 == 0) && (plStack_48 != (int64_t *)0x0)) &&
        (iVar4 = func_0x0001808ec7e0(plStack_48), iVar4 == 0)) &&
       (iVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,0), iVar4 == 0)) {
      FUN_180853260(*(uint64_t *)(param_1 + 0x18),&plStack_48);
    }
  }
LAB_1808c8f09:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c8f30(uint64_t *param_1,int64_t *param_2)
void FUN_1808c8f30(uint64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int8_t auStack_d8 [32];
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  int32_t uStack_68;
  ushort uStack_64;
  ushort uStack_62;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_68);
    lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x128))((int64_t *)*param_1,&uStack_68,1);
    if (lVar2 == 0) {
      uStack_70 = (uint)bStack_59;
      uStack_78 = (uint)bStack_5a;
      uStack_80 = (uint)bStack_5b;
      uStack_88 = (uint)bStack_5c;
      uStack_90 = (uint)bStack_5d;
      uStack_98 = (uint)bStack_5e;
      uStack_a0 = (uint)bStack_5f;
      uStack_a8 = (uint)bStack_60;
      uStack_b0 = (uint)uStack_62;
      uStack_b8 = (uint)uStack_64;
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_58,0x27,&processed_var_8960_ptr,uStack_68);
    }
    *param_2 = lVar2;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_1808c8f67(void)
void FUN_1808c8f67(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t *unaff_R14;
  int32_t uStack0000000000000070;
  int16_t uStack0000000000000074;
  int8_t in_stack_00000078;
  uint64_t in_stack_000000a8;
  
  (**(code **)(in_RAX + 0x30))();
  lVar1 = (**(code **)(*(int64_t *)*unaff_RBX + 0x128))((int64_t *)*unaff_RBX,&stack0x00000070,1);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(&stack0x00000080,0x27,&processed_var_8960_ptr,uStack0000000000000070,uStack0000000000000074
                 );
  }
  *unaff_R14 = lVar1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c8fec(void)
void FUN_1808c8fec(void)

{
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint64_t in_stack_00000070;
  byte in_stack_00000078;
  
  uStack0000000000000030 = (uint)in_stack_00000078;
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  SystemDataValidator();
}






// 函数: void FUN_1808c9040(void)
void FUN_1808c9040(void)

{
  uint64_t *unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_000000a8;
  
  *unaff_R14 = unaff_R15;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c904b(void)
void FUN_1808c904b(void)

{
  uint64_t in_stack_000000a8;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



uint64_t *
FUN_1808c9180(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
             int64_t param_5,uint64_t param_6,int64_t param_7,uint64_t param_8,
             uint64_t param_9,uint64_t param_10)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar2 = *(uint64_t *)(param_5 + 0x4c0);
  uVar1 = *(int32_t *)(param_5 + 0x774);
  uVar3 = (**(code **)(*(int64_t *)(param_7 + 8) + 0x30))(param_7 + 8);
  func_0x0001808c9600(param_1,uVar3,uVar1,uVar2,param_8,param_9);
  *param_1 = &processed_var_5304_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  param_1[0x1d] = param_2;
  param_1[0x22] = param_6;
  param_1[0x1e] = param_7;
  param_1[0x1f] = param_3;
  param_1[0x20] = param_4;
  param_1[0x21] = param_5;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_10;
  *(uint64_t **)(param_3 + 0x350) = param_1;
  return param_1;
}



uint64_t *
FUN_1808c9310(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
             int32_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
             uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
             int32_t param_13)

{
  uint64_t *puVar1;
  
  func_0x0001808c9600(param_1,param_6,*(int32_t *)(param_3 + 0x774),
                      *(uint64_t *)(param_3 + 0x4c0),param_7,param_12);
  *param_1 = &processed_var_4944_ptr;
  param_1[0x1d] = param_3;
  param_1[0x11] = &ui_system_data_1912_ptr;
  param_1[0x1e] = param_4;
  func_0x0001808b62c0(param_1 + 0x1f,param_5,param_3,param_10,param_11);
  param_1[0x23] = param_3;
  puVar1 = param_1 + 0x24;
  param_1[0x25] = 0;
  *puVar1 = puVar1;
  param_1[0x25] = puVar1;
  param_1[0x2c] = param_1 + 0x1f;
  param_1[0x2d] = param_4;
  param_1[0x2e] = param_11;
  param_1[0x2f] = param_10;
  param_1[0x30] = param_8;
  param_1[0x31] = 0;
  *(int8_t *)(param_1 + 0x32) = 0;
  *(int8_t *)((int64_t)param_1 + 0x191) = *(int8_t *)(param_3 + 0x781);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x34] = param_9;
  param_1[0x33] = param_2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1d4) = param_13;
  *(int32_t *)(param_1 + 0x3a) = 2;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(int16_t *)((int64_t)param_1 + 0x1dc) = 0;
  *(int8_t *)((int64_t)param_1 + 0x1de) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x3f800000;
  param_1[0x42] = 0x3f800000;
  return param_1;
}



uint64_t *
FUN_1808c9550(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
             uint64_t param_5,uint64_t param_6)

{
  func_0x0001808c9600(param_1,param_3,*(int32_t *)(param_4 + 0x774),
                      *(uint64_t *)(param_4 + 0x4c0),param_5,param_6);
  *param_1 = &processed_var_4616_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  param_1[0x1d] = param_2;
  *(int32_t *)(param_1 + 0x1f) = 0;
  param_1[0x1e] = param_4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x114) = 2;
  param_1[0x24] = 0;
  return param_1;
}



uint64_t *
FUN_1808c9700(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  func_0x0001808c9600(param_1,param_3,*(int32_t *)(param_5 + 0x774),
                      *(uint64_t *)(param_5 + 0x4c0),param_7,param_8);
  *param_1 = &processed_var_4016_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  param_1[0x1d] = param_6;
  param_1[0x1e] = param_2;
  param_1[0x20] = param_4;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2d] = param_5;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x29) = 0;
  return param_1;
}






// 函数: void FUN_1808c9820(uint64_t *param_1)
void FUN_1808c9820(uint64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = &memory_allocator_3416_ptr;
  func_0x00018085deb0(param_1 + 0xf);
  FUN_1808b1a30(param_1);
  plVar1 = param_1 + 4;
  *(int64_t *)param_1[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c98b0(uint64_t *param_1)
void FUN_1808c98b0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  plVar4 = (int64_t *)0x0;
  *param_1 = &processed_var_4944_ptr;
  plVar1 = param_1 + 0x24;
  param_1[0x11] = &ui_system_data_1912_ptr;
  plVar2 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar2 = plVar4;
  }
  plVar3 = plVar4;
  if (plVar2 != (int64_t *)0x0) {
    plVar3 = plVar2 + 4;
  }
  if (plVar3 != plVar1) {
    plVar2 = plVar3 + -4;
    if (plVar3 == (int64_t *)0x0) {
      plVar2 = plVar4;
    }
    if (plVar3 != plVar1) {
      *(int64_t *)plVar3[1] = *plVar3;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&processed_var_5904_ptr,0xf41,1);
    }
  }
  FUN_18073f710(param_1[0x1e]);
  func_0x00018084e310(plVar1);
  plVar1 = param_1 + 0x12;
  *param_1 = &memory_allocator_3688_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)param_1[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *param_1 = &memory_allocator_3416_ptr;
  func_0x00018085deb0(param_1 + 0xf);
  FUN_1808b1a30(param_1);
  plVar1 = param_1 + 4;
  *(int64_t *)param_1[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c990e(void)
void FUN_1808c990e(void)

{
  int64_t *unaff_RBX;
  int64_t *unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *plVar1;
  uint64_t *unaff_R14;
  
  plVar1 = unaff_RBX + -4;
  if (unaff_RBX == (int64_t *)0x0) {
    plVar1 = unaff_RBP;
  }
  if (unaff_RBX != unaff_RSI) {
    *(int64_t *)unaff_RBX[1] = *unaff_RBX;
    *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
    unaff_RBX[1] = (int64_t)unaff_RBX;
    *unaff_RBX = (int64_t)unaff_RBX;
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&processed_var_5904_ptr,0xf41,1);
  }
  FUN_18073f710(unaff_R14[0x1e]);
  func_0x00018084e310();
  plVar1 = unaff_R14 + 0x12;
  *unaff_R14 = &memory_allocator_3688_ptr;
  unaff_R14[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)unaff_R14[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[0x13];
  unaff_R14[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)unaff_R14[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[0x13];
  unaff_R14[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *unaff_R14 = &memory_allocator_3416_ptr;
  func_0x00018085deb0(unaff_R14 + 0xf);
  FUN_1808b1a30();
  plVar1 = unaff_R14 + 4;
  *(int64_t *)unaff_R14[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[5];
  unaff_R14[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)unaff_R14[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[5];
  unaff_R14[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  return;
}






// 函数: void FUN_1808c99a5(void)
void FUN_1808c99a5(void)

{
  int64_t *plVar1;
  uint64_t *unaff_R14;
  
  FUN_18073f710(unaff_R14[0x1e]);
  func_0x00018084e310();
  plVar1 = unaff_R14 + 0x12;
  *unaff_R14 = &memory_allocator_3688_ptr;
  unaff_R14[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)unaff_R14[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[0x13];
  unaff_R14[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)unaff_R14[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[0x13];
  unaff_R14[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *unaff_R14 = &memory_allocator_3416_ptr;
  func_0x00018085deb0(unaff_R14 + 0xf);
  FUN_1808b1a30();
  plVar1 = unaff_R14 + 4;
  *(int64_t *)unaff_R14[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[5];
  unaff_R14[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)unaff_R14[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[5];
  unaff_R14[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  return;
}



uint64_t FUN_1808c9a50(uint64_t param_1,uint64_t param_2)

{
  FUN_1808c9820();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}



uint64_t FUN_1808c9a90(uint64_t param_1,uint64_t param_2)

{
  FUN_1808c9820();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint64_t * FUN_1808c9ad0(uint64_t *param_1,uint param_2)

{
  int64_t *plVar1;
  int iVar2;
  
  *param_1 = &processed_var_5304_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  if (param_1[0x1f] != 0) {
    *(uint64_t *)(param_1[0x1f] + 0x350) = 0;
    iVar2 = FUN_180863820(param_1[0x1f],2);
    if (iVar2 == 0) {
      FUN_18085fb30(param_1[0x1f]);
    }
  }
  plVar1 = param_1 + 0x12;
  *param_1 = &memory_allocator_3688_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)param_1[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808c9820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x130);
  }
  return param_1;
}



uint64_t FUN_1808c9bb0(uint64_t param_1,uint64_t param_2)

{
  FUN_1808c9820();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}



uint64_t FUN_1808c9bf0(uint64_t param_1,uint64_t param_2)

{
  FUN_1808c98b0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x218);
  }
  return param_1;
}



uint64_t * FUN_1808c9c30(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  plVar1 = param_1 + 0x12;
  *param_1 = &memory_allocator_3688_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)param_1[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808c9820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x128);
  }
  return param_1;
}



uint64_t * FUN_1808c9cc0(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  plVar1 = param_1 + 0x12;
  *param_1 = &memory_allocator_3688_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)param_1[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808c9820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



uint64_t * FUN_1808c9d50(uint64_t *param_1,uint param_2)

{
  int64_t *plVar1;
  int iVar2;
  void *puVar3;
  
  param_1[0x11] = &ui_system_data_1912_ptr;
  puVar3 = &processed_var_4016_ptr;
  *param_1 = &processed_var_4016_ptr;
  if ((*(uint *)((int64_t)param_1 + 0x134) >> 3 & 1) != 0) {
    *(uint *)((int64_t)param_1 + 0x134) = *(uint *)((int64_t)param_1 + 0x134) & 0xfffffff7;
    FUN_18085ffc0(*(uint64_t *)(param_1[10] + 0x18),0x4000,param_1[0x2a]);
    puVar3 = (void *)*param_1;
  }
  *(int32_t *)(param_1 + 9) = 5;
  iVar2 = (**(code **)(puVar3 + 0x90))(param_1);
  if (iVar2 == 0) {
    (**(code **)(*(int64_t *)param_1[0x20] + 0x30))((int64_t *)param_1[0x20],param_1[0x21]);
  }
  FUN_1807d3160(param_1 + 0x2e);
  plVar1 = param_1 + 0x12;
  *param_1 = &memory_allocator_3688_ptr;
  param_1[0x11] = &ui_system_data_1912_ptr;
  *(int64_t *)param_1[0x13] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[0x13] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808c9820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x180);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c9e60(int64_t *param_1)
void FUN_1808c9e60(int64_t *param_1)

{
  int iVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_158 [32];
  int iStack_138;
  int iStack_128;
  int iStack_124;
  int aiStack_120 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iStack_128 = 2;
  iVar1 = (**(code **)(*param_1 + 0x130))(param_1,&iStack_128);
  if (iVar1 == 0) {
    if (param_1[0x15] == 0) {
      iVar1 = *(int *)(param_1[0x16] + 0x38);
    }
    else {
      iVar1 = *(int *)(param_1[0x15] + 0xc0);
    }
    iVar2 = FUN_18073a9e0(param_1[0x14],iStack_128,&iStack_124);
    if ((iVar2 == 0) && (iVar2 = FUN_18073a9e0(param_1[0x14],iVar1,aiStack_120), iVar2 == 0)) {
      if ((iStack_128 == iVar1) || ((iStack_124 < 1 || (aiStack_120[0] < 1)))) {
        iStack_138 = iStack_124;
        (**(code **)(*param_1 + 0x138))(param_1,0);
      }
      else {
        if (aiStack_120[0] * iStack_124 < 0x41) {
          puVar3 = auStack_118;
        }
        else {
          iStack_138 = iVar2;
          puVar3 = (int8_t *)
                   SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                 aiStack_120[0] * iStack_124 * 4,&processed_var_5904_ptr,0x180);
          if (puVar3 == (int8_t *)0x0) goto FUN_1808ca018;
        }
        iStack_138 = 0;
        iVar1 = FUN_180739df0(param_1[0x14],iStack_128,iVar1,puVar3);
        if (iVar1 == 0) {
          iStack_138 = iStack_124;
          iVar1 = (**(code **)(*param_1 + 0x138))(param_1,puVar3,aiStack_120[0]);
          if ((iVar1 == 0) && (puVar3 != auStack_118)) {
            iStack_138 = CONCAT31(iStack_138._1_3_,1);
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_5904_ptr,0x18c);
          }
        }
      }
    }
  }
FUN_1808ca018:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c9ea3(void)
void FUN_1808c9ea3(void)

{
  int iVar1;
  int iVar2;
  int64_t in_RAX;
  int8_t *puVar3;
  int64_t *unaff_RBX;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int in_stack_00000038;
  uint64_t in_stack_00000140;
  
  if (in_RAX == 0) {
    iVar2 = *(int *)(unaff_RBX[0x16] + 0x38);
  }
  else {
    iVar2 = *(int *)(in_RAX + 0xc0);
  }
  iVar1 = FUN_18073a9e0(unaff_RBX[0x14],iStack0000000000000030,(int64_t)&stack0x00000030 + 4);
  if ((iVar1 == 0) && (iVar1 = FUN_18073a9e0(unaff_RBX[0x14],iVar2,&stack0x00000038), iVar1 == 0)) {
    if ((iStack0000000000000030 == iVar2) ||
       ((iStack0000000000000034 < 1 || (in_stack_00000038 < 1)))) {
      (**(code **)(*unaff_RBX + 0x138))();
    }
    else {
      if (in_stack_00000038 * iStack0000000000000034 < 0x41) {
        puVar3 = &stack0x00000040;
      }
      else {
        puVar3 = (int8_t *)
                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                               in_stack_00000038 * iStack0000000000000034 * 4,&processed_var_5904_ptr,0x180,0
                              );
        if (puVar3 == (int8_t *)0x0) goto FUN_1808ca010;
      }
      iVar2 = FUN_180739df0(unaff_RBX[0x14],iStack0000000000000030,iVar2,puVar3,0);
      if (((iVar2 == 0) && (iVar2 = (**(code **)(*unaff_RBX + 0x138))(), iVar2 == 0)) &&
         (puVar3 != &stack0x00000040)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_5904_ptr,0x18c,1);
      }
    }
  }
FUN_1808ca010:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c9f08(uint64_t param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_1808c9f08(uint64_t param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  uint64_t param_6)

{
  int iVar1;
  int8_t *puVar2;
  int64_t *unaff_RBX;
  int unaff_ESI;
  uint64_t in_stack_00000140;
  
  if ((((int)param_2 == unaff_ESI) || (param_4 < 1)) || (param_3 < 1)) {
    (**(code **)(*unaff_RBX + 0x138))();
  }
  else {
    if (param_3 * param_4 < 0x41) {
      puVar2 = &stack0x00000040;
    }
    else {
      puVar2 = (int8_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3 * param_4 * 4,
                             &processed_var_5904_ptr,0x180);
      if (puVar2 == (int8_t *)0x0) goto LAB_1808ca008;
      param_2 = param_6 & 0xffffffff;
    }
    iVar1 = FUN_180739df0(unaff_RBX[0x14],param_2,unaff_ESI,puVar2,0);
    if (((iVar1 == 0) && (iVar1 = (**(code **)(*unaff_RBX + 0x138))(), iVar1 == 0)) &&
       (puVar2 != &stack0x00000040)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5904_ptr,0x18c,1);
    }
  }
LAB_1808ca008:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808ca010(void)
void FUN_1808ca010(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808ca018(void)
void FUN_1808ca018(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808ca040(int64_t param_1)

{
  uint64_t uVar1;
  
  if ((*(int64_t *)(param_1 + 0xf8) != 0) && ((*(uint *)(param_1 + 0x134) >> 2 & 1) != 0)) {
    uVar1 = FUN_18073d3c0(*(int64_t *)(param_1 + 0xf8),*(uint64_t *)(param_1 + 0x110),0);
    if (0x1e < (uint)uVar1) {
      return uVar1;
    }
    if ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) == 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t
FUN_1808ca090(int64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,uint64_t param_5)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = *(uint64_t *)(param_1 + 0x30);
  if (param_4 < *(uint64_t *)(param_1 + 0x38)) {
    param_4 = *(uint64_t *)(param_1 + 0x38);
  }
  if ((uVar3 < param_4) || (param_5 != 0)) {
    uVar3 = param_4 + 0x40;
    if (param_4 + 0x40 < param_5) {
      uVar3 = param_5;
    }
    uVar2 = FUN_18073d3c0(param_2,uVar3);
    uVar1 = (uint)uVar2;
  }
  else if ((*(char *)(param_1 + 0xc1) == '\0') || (param_3 == 0.0)) {
    uVar2 = FUN_18073c160(param_2,param_4,param_3);
    uVar1 = (uint)uVar2;
  }
  else {
    uVar2 = FUN_18073c160(param_2,param_4);
    if (0x1e < (uint)uVar2) {
      return uVar2;
    }
    if ((0x40000009U >> ((uint)uVar2 & 0x1f) & 1) == 0) {
      return uVar2;
    }
    uVar2 = FUN_18073c160(param_2,uVar3 + 0x40,param_3);
    uVar1 = (uint)uVar2;
  }
  if ((uVar1 < 0x1f) && ((0x40000009U >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ca1c0(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  uVar2 = UtilitiesSystem_MathCalculator(*(uint64_t *)(param_1 + 0xf0),param_1 + 0x1c0,param_1 + 0x38);
  if (((uint)uVar2 < 0x1f) && ((0x40000009U >> ((uint)uVar2 & 0x1f) & 1) != 0)) {
    plVar5 = (int64_t *)(param_1 + 0x120);
    plVar4 = (int64_t *)0x0;
    plVar3 = (int64_t *)(*plVar5 + -0x20);
    if (*plVar5 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 4;
    }
    while (plVar1 != plVar5) {
      plVar3 = plVar1 + -4;
      if (plVar1 == (int64_t *)0x0) {
        plVar3 = plVar4;
      }
      uVar2 = (**(code **)(*plVar3 + 0x80))();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (plVar1 == plVar5) break;
      plVar3 = (int64_t *)(*plVar1 + -0x20);
      if (*plVar1 == 0) {
        plVar3 = plVar4;
      }
      plVar1 = plVar4;
      if (plVar3 != (int64_t *)0x0) {
        plVar1 = plVar3 + 4;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ca1fe(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *unaff_RDI;
  
  plVar4 = (int64_t *)0x0;
  plVar3 = (int64_t *)(*unaff_RDI + -0x20);
  if (*unaff_RDI == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar1 = plVar3 + 4;
  }
  while( true ) {
    if (plVar1 == unaff_RDI) {
      return 0;
    }
    plVar3 = plVar1 + -4;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    uVar2 = (**(code **)(*plVar3 + 0x80))();
    if ((int)uVar2 != 0) break;
    if (plVar1 == unaff_RDI) {
      return 0;
    }
    plVar3 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 4;
    }
  }
  return uVar2;
}







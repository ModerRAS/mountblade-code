#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part124.c - 30 个函数

// 函数: void FUN_18073e95d(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void FUN_18073e95d(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t *in_stack_00000040;
  int64_t lStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000160;
  uint64_t in_stack_000001e0;
  uint64_t in_stack_000001e8;
  uint64_t in_stack_000001f0;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  lStack0000000000000048 = 0;
  uStack0000000000000050 = param_1;
  iVar1 = FUN_180752c80(param_1,&stack0x00000040,&stack0x00000048);
  if (iVar1 == 0) {
    if (((int)in_stack_00000040[0x22] == 0) || ((int)in_stack_00000040[0x22] == 7)) {
      iVar1 = (**(code **)(*in_stack_00000040 + 0x28))
                        (in_stack_00000040,param_2,param_3,param_4,in_stack_000001e0);
      if (iVar1 == 0) goto FUN_18073eb6d;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000060,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(&stack0x00000060 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&stack0x00000060 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&stack0x00000060 + iVar2,0x100 - iVar2,in_stack_000001e0);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(&stack0x00000060 + iVar2,0x100 - iVar2,in_stack_000001e8);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(&stack0x00000060 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001f0);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,uStack0000000000000050,&processed_var_6856_ptr,&stack0x00000060);
  }
FUN_18073eb6d:
  if (lStack0000000000000048 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000048,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073ea1b(void)
void FUN_18073ea1b(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  uint64_t in_stack_00000050;
  
  iVar1 = func_0x00018074b800(&stack0x00000060,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000060 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074ba80(&stack0x00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074ba80(&stack0x00000060 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5,in_stack_00000050,&processed_var_6856_ptr,&stack0x00000060);
}





// 函数: void FUN_18073eb6d(void)
void FUN_18073eb6d(void)

{
  int64_t in_stack_00000048;
  uint64_t in_stack_00000160;
  
  if (in_stack_00000048 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000048,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073eba7(uint64_t param_1)
void FUN_18073eba7(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ebd0(uint64_t param_1)
void FUN_18073ebd0(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t *aplStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar2 = FUN_180752c80(param_1,aplStack_128,0);
  if (iVar2 == 0) {
    lVar1 = aplStack_128[0][0x1b];
    if (lVar1 == 0) {
      iVar2 = 0x1c;
    }
    else {
      iVar2 = FUN_180743c40(lVar1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*aplStack_128[0] + 0x18))(aplStack_128[0],1);
        SystemDataProcessor(lVar1);
      }
      if (iVar2 == 0) goto LAB_18073ec81;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar2,5,param_1,&processed_var_6840_ptr);
  }
LAB_18073ec81:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ecb0(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18073ecb0(uint64_t param_1,int32_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t *plStack_158;
  int64_t lStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_150 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_158,&lStack_150);
  if (iVar1 == 0) {
    if (((int)plStack_158[0x22] == 0) || ((int)plStack_158[0x22] == 7)) {
      iVar1 = (**(code **)(*plStack_158 + 0x38))(plStack_158,param_2,param_3);
      if (iVar1 == 0) goto FUN_18073eddb;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b830(auStack_148,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6888_ptr);
  }
FUN_18073eddb:
  if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_150,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073eccd(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073eccd(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int64_t lStack0000000000000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  lStack0000000000000038 = 0;
  iVar1 = FUN_180752c80(param_1,&param_6,&stack0x00000038);
  if (iVar1 == 0) {
    if (((int)param_6[0x22] == 0) || ((int)param_6[0x22] == 7)) {
      iVar1 = (**(code **)(*param_6 + 0x38))(param_6,param_2,param_3);
      if (iVar1 == 0) goto FUN_18073eddb;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b830(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6888_ptr,&stack0x00000040);
  }
FUN_18073eddb:
  if (lStack0000000000000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073ed53(void)
void FUN_18073ed53(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b830(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5);
}





// 函数: void FUN_18073eddb(void)
void FUN_18073eddb(void)

{
  int64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000038,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073edfd(uint64_t param_1)
void FUN_18073edfd(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ee30(uint64_t param_1,int32_t param_2)
void FUN_18073ee30(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t *plStack_128;
  int64_t lStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_120 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_128,&lStack_120);
  if (iVar1 == 0) {
    if (((int)plStack_128[0x22] == 0) || ((int)plStack_128[0x22] == 7)) {
      iVar1 = (**(code **)(*plStack_128 + 0x118))(plStack_128,param_2);
      if (iVar1 == 0) goto LAB_18073eef2;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b800(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_7056_ptr);
  }
LAB_18073eef2:
  if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_120,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18073ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t *plStack_158;
  int64_t lStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_150 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_158,&lStack_150);
  if (iVar1 == 0) {
    if (((int)plStack_158[0x22] == 0) || ((int)plStack_158[0x22] == 7)) {
      puStack_168 = (int8_t *)CONCAT44(puStack_168._4_4_,param_5);
      iVar1 = (**(code **)(*plStack_158 + 0x30))(plStack_158,param_2,param_3,param_4);
      if (iVar1 == 0) goto FUN_18073f0d1;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_148,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6872_ptr);
  }
FUN_18073f0d1:
  if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_150,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ef4d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18073ef4d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5,int64_t *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_00000020;
  int32_t uVar4;
  int64_t lStack0000000000000038;
  uint64_t in_stack_00000140;
  int32_t in_stack_000001b0;
  
  uVar4 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lStack0000000000000038 = 0;
  iVar1 = FUN_180752c80(param_1,&param_6,&stack0x00000038);
  if (iVar1 == 0) {
    if (((int)param_6[0x22] == 0) || ((int)param_6[0x22] == 7)) {
      iVar1 = (**(code **)(*param_6 + 0x30))
                        (param_6,param_2,param_3,param_4,CONCAT44(uVar4,in_stack_000001b0));
      if (iVar1 == 0) goto FUN_18073f0d1;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001b0
                       );
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6872_ptr,&stack0x00000040);
  }
FUN_18073f0d1:
  if (lStack0000000000000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073efed(void)
void FUN_18073efed(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5);
}





// 函数: void FUN_18073f0d1(void)
void FUN_18073f0d1(void)

{
  int64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000038,0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073f103(uint64_t param_1)
void FUN_18073f103(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f130(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void FUN_18073f130(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180752f00(uStack_140,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_18073f20b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074be90(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7136_ptr);
  }
LAB_18073f20b:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f240(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073f240(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807533d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073f32d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7280_ptr);
  }
FUN_18073f32d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f25d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073f25d(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180754f10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807533d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073f32d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7280_ptr,&stack0x00000040);
  }
FUN_18073f32d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073f2b5(void)
void FUN_18073f2b5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,3);
}





// 函数: void FUN_18073f32d(void)
void FUN_18073f32d(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073f34f(void)
void FUN_18073f34f(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f370(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073f370(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807534d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073f45d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7192_ptr);
  }
FUN_18073f45d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f38d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073f38d(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180754f10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807534d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073f45d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7192_ptr,&stack0x00000040);
  }
FUN_18073f45d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073f3e5(void)
void FUN_18073f3e5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,3);
}





// 函数: void FUN_18073f45d(void)
void FUN_18073f45d(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073f47f(void)
void FUN_18073f47f(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f4a0(uint64_t param_1,uint64_t param_2)
void FUN_18073f4a0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753560(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073f53a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7248_ptr);
  }
LAB_18073f53a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f570(uint64_t param_1,uint64_t param_2)
void FUN_18073f570(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753580(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073f60a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7160_ptr);
  }
LAB_18073f60a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f640(uint64_t param_1,uint64_t param_2)
void FUN_18073f640(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753600(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073f6da;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7216_ptr);
  }
LAB_18073f6da:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




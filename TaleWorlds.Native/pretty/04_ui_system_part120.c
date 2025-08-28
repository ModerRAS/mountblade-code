#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part120.c - 32 个函数

// 函数: void FUN_18073b310(uint64_t param_1,int32_t param_2)
void FUN_18073b310(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_180748290(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073b3a8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5912_ptr);
  }
LAB_18073b3a8:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b3e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18073b3e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_1807483a0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073b4cf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = DataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5224_ptr);
  }
FUN_18073b4cf:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b3fd(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18073b3fd(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1807483a0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073b4cf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5224_ptr,&stack0x00000040);
  }
FUN_18073b4cf:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073b457(void)
void FUN_18073b457(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074ba80(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_18073b4cf(void)
void FUN_18073b4cf(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073b4f1(void)
void FUN_18073b4f1(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b520(uint64_t param_1)
void FUN_18073b520(uint64_t param_1)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    if (lStack_128 == 0) {
LAB_18073b573:
      lStack_128 = 0;
    }
    else {
      iVar1 = SystemDataProcessor();
      if (iVar1 == 0) goto LAB_18073b573;
    }
    iVar1 = FUN_180748500(uStack_120);
    if (iVar1 == 0) goto LAB_18073b5be;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4712_ptr);
  }
LAB_18073b5be:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b5f0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073b5f0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_198 [32];
  int8_t *puStack_178;
  uint64_t uStack_170;
  int64_t lStack_168;
  uint64_t uStack_160;
  int8_t auStack_158 [256];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  lStack_168 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_160,&lStack_168);
  if (iVar1 == 0) {
    uStack_170 = param_6;
    puStack_178 = (int8_t *)param_5;
    iVar1 = FUN_1807485c0(uStack_160,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073b7af;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_158,0x100,param_2);
    iVar3 = DataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bd40(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_6);
    puStack_178 = auStack_158;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5336_ptr);
  }
FUN_18073b7af:
  if (lStack_168 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b60d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073b60d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

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
  uint64_t in_stack_00000140;
  uint64_t in_stack_000001c0;
  uint64_t in_stack_000001c8;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  param_6 = 0;
  iVar1 = FUN_180749e60(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_1807485c0(param_7,param_2,param_3,param_4,in_stack_000001c0);
    if (iVar1 == 0) goto FUN_18073b7af;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,in_stack_000001c0);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bd40(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001c8);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5336_ptr,&stack0x00000040);
  }
FUN_18073b7af:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073b695(void)
void FUN_18073b695(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bd40(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_18073b7af(void)
void FUN_18073b7af(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073b7e9(void)
void FUN_18073b7e9(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b810(uint64_t param_1,int32_t param_2)
void FUN_18073b810(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748b20(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073b8a8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5304_ptr);
  }
LAB_18073b8a8:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b8e0(uint64_t param_1,uint64_t param_2)
void FUN_18073b8e0(uint64_t param_1,uint64_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_180748b40(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073b97a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5000_ptr);
  }
LAB_18073b97a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b9b0(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_18073b9b0(uint64_t param_1,uint64_t param_2,int32_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748d40(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ba9f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = DataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5064_ptr);
  }
FUN_18073ba9f:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073b9cd(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_18073b9cd(uint64_t param_1,uint64_t param_2,int32_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748d40(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ba9f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5064_ptr,&stack0x00000040);
  }
FUN_18073ba9f:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073ba27(void)
void FUN_18073ba27(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_18073ba9f(void)
void FUN_18073ba9f(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073bac1(void)
void FUN_18073bac1(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073baf0(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18073baf0(uint64_t param_1,int32_t param_2,int32_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748d70(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073bbdd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_138,0x100,param_2);
    iVar3 = DataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4936_ptr);
  }
FUN_18073bbdd:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073bb0d(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18073bb0d(uint64_t param_1,int32_t param_2,int32_t param_3)

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
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748d70(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073bbdd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4936_ptr,&stack0x00000040);
  }
FUN_18073bbdd:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073bb65(void)
void FUN_18073bb65(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_18073bbdd(void)
void FUN_18073bbdd(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073bbff(void)
void FUN_18073bbff(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073bc20(uint64_t param_1,int32_t param_2)
void FUN_18073bc20(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_180748dd0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073bcb8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4824_ptr);
  }
LAB_18073bcb8:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073bcf0(uint64_t param_1,int32_t param_2)
void FUN_18073bcf0(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_180748ea0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073bd88;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4728_ptr);
  }
LAB_18073bd88:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073bdc0(uint64_t param_1,int32_t param_2)
void FUN_18073bdc0(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180748ee0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073be58;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4872_ptr);
  }
LAB_18073be58:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073be90(uint64_t param_1,int32_t param_2)
void FUN_18073be90(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_1807498f0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073bf28;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b800(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5088_ptr);
  }
LAB_18073bf28:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073bf60(uint64_t param_1)
void FUN_18073bf60(uint64_t param_1)

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
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_18078c0a0(uStack_120);
    if (iVar1 == 0) goto LAB_18073bfe2;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5264_ptr);
  }
LAB_18073bfe2:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c020(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073c020(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t lStack_148;
  int64_t *plStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_148 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x110))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c111;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = DataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6680_ptr);
  }
FUN_18073c111:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c03d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073c03d(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  int64_t *in_stack_00000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_stack_00000038 + 0x110))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c111;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = DataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6680_ptr,&stack0x00000040);
  }
FUN_18073c111:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c099(void)
void FUN_18073c099(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}






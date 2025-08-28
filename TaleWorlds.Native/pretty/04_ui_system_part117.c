#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part117.c - 35 个函数

// 函数: void FUN_180738e7f(void)
void FUN_180738e7f(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180738ea1(void)
void FUN_180738ea1(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180738ed0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180738ed0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
    iVar1 = FUN_180745640(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180738fbf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5592_ptr);
  }
FUN_180738fbf:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180738eed(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180738eed(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
    iVar1 = FUN_180745640(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180738fbf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5592_ptr,&stack0x00000040);
  }
FUN_180738fbf:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180738f47(void)
void FUN_180738f47(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_180738fbf(void)
void FUN_180738fbf(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180738fe1(void)
void FUN_180738fe1(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739010(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739010(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = FUN_1807456c0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807390fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5160_ptr);
  }
FUN_1807390fd:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073902d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073902d(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = FUN_1807456c0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807390fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5160_ptr,&stack0x00000040);
  }
FUN_1807390fd:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180739085(void)
void FUN_180739085(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_1807390fd(void)
void FUN_1807390fd(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073911f(void)
void FUN_18073911f(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739140(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739140(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = FUN_180745760(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073922d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5616_ptr);
  }
FUN_18073922d:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073915d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073915d(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = FUN_180745760(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073922d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5616_ptr,&stack0x00000040);
  }
FUN_18073922d:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807391b5(void)
void FUN_1807391b5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_18073922d(void)
void FUN_18073922d(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073924f(void)
void FUN_18073924f(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_180739270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int iVar1;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  uint64_t uStack_160;
  uint64_t auStack_158 [2];
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  iVar1 = FUN_180749e60(param_1,auStack_158,0);
  if (iVar1 == 0) {
    puStack_168 = (int8_t *)param_5;
    iVar1 = FUN_180745870(auStack_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180739325;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    uStack_160 = param_5;
    puStack_168 = (int8_t *)param_4;
    FUN_180738b40(auStack_148,0x100,param_2,param_3);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5568_ptr);
  }
LAB_180739325:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739350(uint64_t param_1,uint64_t param_2)
void FUN_180739350(uint64_t param_1,uint64_t param_2)

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
    iVar1 = FUN_180745f70(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_1807393ea;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5816_ptr);
  }
LAB_1807393ea:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739420(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180739420(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
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
    iVar1 = func_0x000180745fd0(uStack_160,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_1807395df;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_158,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(auStack_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bd40(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_6);
    puStack_178 = auStack_158;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5368_ptr);
  }
FUN_1807395df:
  if (lStack_168 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073943d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073943d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
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
    iVar1 = func_0x000180745fd0(param_7,param_2,param_3,param_4,in_stack_000001c0);
    if (iVar1 == 0) goto FUN_1807395df;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bd40(&stack0x00000040 + iVar2,0x100 - iVar2,in_stack_000001c0);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bd40(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001c8);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5368_ptr,&stack0x00000040);
  }
FUN_1807395df:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807394c5(void)
void FUN_1807394c5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bd40(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bd40(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_1807395df(void)
void FUN_1807395df(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180739619(void)
void FUN_180739619(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739640(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180739640(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807460a0(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_180739773;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(auStack_148,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bac0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bac0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5280_ptr);
  }
FUN_180739773:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073965d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073965d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  param_6 = 0;
  iVar1 = FUN_180749e60(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807460a0(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_180739773;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bac0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bac0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5280_ptr,&stack0x00000040);
  }
FUN_180739773:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807396c5(void)
void FUN_1807396c5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074bac0(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bac0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bac0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_180739773(void)
void FUN_180739773(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073979d(void)
void FUN_18073979d(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807397c0(uint64_t param_1,uint64_t param_2)
void FUN_1807397c0(uint64_t param_1,uint64_t param_2)

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
    iVar1 = FUN_1807460d0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073985a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5032_ptr);
  }
LAB_18073985a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739890(uint64_t param_1,uint64_t param_2)
void FUN_180739890(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  uint64_t auStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar1 = FUN_180749e60(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = FUN_180746180(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5520_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739950(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180739950(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t auStack_148 [2];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  iVar1 = FUN_180749e60(param_1,auStack_148,0);
  if (((iVar1 != 0) || (iVar1 = FUN_180746320(auStack_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074b930(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_5488_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_1807399b2(void)
void FUN_1807399b2(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074b930(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}





// 函数: void FUN_180739a2a(void)
void FUN_180739a2a(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739a50(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180739a50(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
    iVar1 = func_0x000180746360(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739b3f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&unknown_var_4968_ptr);
  }
FUN_180739b3f:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




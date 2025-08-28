#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part118.c - 35 个函数

// 函数: void FUN_180739a6d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180739a6d(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  longlong lStack0000000000000030;
  uint64_t in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x000180746360(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739b3f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_4968_ptr,&stack0x00000040);
  }
FUN_180739b3f:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739ac7(void)
void FUN_180739ac7(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_180739b3f(void)
void FUN_180739b3f(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739b61(void)
void FUN_180739b61(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739b90(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739b90(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180746390(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739c7d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5192_ptr);
  }
FUN_180739c7d:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739bad(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739bad(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  longlong lStack0000000000000030;
  uint64_t in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180746390(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739c7d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5192_ptr,&stack0x00000040);
  }
FUN_180739c7d:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739c05(void)
void FUN_180739c05(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_180739c7d(void)
void FUN_180739c7d(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739c9f(void)
void FUN_180739c9f(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739cc0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739cc0(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_1807463d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739dad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5712_ptr);
  }
FUN_180739dad:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739cdd(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180739cdd(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  longlong lStack0000000000000030;
  uint64_t in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1807463d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180739dad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5712_ptr,&stack0x00000040);
  }
FUN_180739dad:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739d35(void)
void FUN_180739d35(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_180739dad(void)
void FUN_180739dad(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180739dcf(void)
void FUN_180739dcf(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739df0(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void FUN_180739df0(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  int iVar1;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    puStack_158 = (int8_t *)CONCAT44(puStack_158._4_4_,param_5);
    iVar1 = FUN_18074a420(uStack_140,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180739e8e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_158 = auStack_138;
    auStack_138[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5432_ptr);
  }
LAB_180739e8e:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739ec0(uint64_t param_1,uint64_t param_2)
void FUN_180739ec0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  longlong lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180746440(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_180739f5a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_4848_ptr);
  }
LAB_180739f5a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180739f90(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
void FUN_180739f90(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  int iVar1;
  int8_t auStack_1c8 [32];
  int8_t *puStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  longlong lStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int8_t auStack_158 [256];
  ulonglong uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  lStack_178 = 0;
  uStack_168 = param_1;
  iVar1 = FUN_180749e60(param_1,&uStack_170,&lStack_178);
  if (iVar1 == 0) {
    uStack_190 = param_8;
    uStack_198 = param_7;
    uStack_1a0 = param_6;
    puStack_1a8 = (int8_t *)param_5;
    iVar1 = FUN_180746460(uStack_170,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_18073a089;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    uStack_188 = param_8;
    uStack_190 = param_7;
    uStack_198 = param_6;
    uStack_1a0 = param_5;
    puStack_1a8 = (int8_t *)CONCAT44(puStack_1a8._4_4_,param_4);
    FUN_1807389f0(auStack_158,0x100,param_2,param_3);
    puStack_1a8 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,uStack_168,&unknown_var_4800_ptr);
  }
LAB_18073a089:
  if (lStack_178 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a0c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18073a0c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  uint64_t auStack_158 [2];
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  iVar1 = FUN_180749e60(param_1,auStack_158,0);
  if (((iVar1 != 0) ||
      (iVar1 = func_0x000180746640(auStack_158[0],param_2,param_3,param_4), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074bdb0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bdb0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bdb0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5544_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}





// 函数: void FUN_18073a12e(void)
void FUN_18073a12e(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074bdb0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bdb0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bdb0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_18073a1dc(void)
void FUN_18073a1dc(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a200(uint64_t param_1,uint64_t param_2)
void FUN_18073a200(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  uint64_t auStack_128 [2];
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  iVar1 = FUN_180749e60(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x0001807466b0(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5744_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a2c0(uint64_t param_1,uint64_t param_2)
void FUN_18073a2c0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  longlong lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_1807466e0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073a35a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_4776_ptr);
  }
LAB_18073a35a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a390(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073a390(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180746780(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073a47d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5112_ptr);
  }
FUN_18073a47d:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a3ad(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073a3ad(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  longlong lStack0000000000000030;
  uint64_t in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180746780(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073a47d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5112_ptr,&stack0x00000040);
  }
FUN_18073a47d:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073a405(void)
void FUN_18073a405(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_18073a47d(void)
void FUN_18073a47d(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073a49f(void)
void FUN_18073a49f(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a4c0(uint64_t param_1,uint64_t param_2)
void FUN_18073a4c0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  longlong lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_180746840(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073a55a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_4752_ptr);
  }
LAB_18073a55a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a590(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void FUN_18073a590(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  longlong lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = func_0x000180746880(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073a6c1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5136_ptr);
  }
FUN_18073a6c1:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a5ad(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073a5ad(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  param_6 = 0;
  iVar1 = FUN_180749e60(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = func_0x000180746880(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073a6c1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5136_ptr,&stack0x00000040);
  }
FUN_18073a6c1:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073a613(void)
void FUN_18073a613(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074ba80(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,1);
}





// 函数: void FUN_18073a6c1(void)
void FUN_18073a6c1(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073a6eb(void)
void FUN_18073a6eb(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a710(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073a710(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_1807468d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073a7fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5856_ptr);
  }
FUN_18073a7fd:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073a72d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073a72d(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  longlong lStack0000000000000030;
  uint64_t in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1807468d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073a7fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,1,param_1,&unknown_var_5856_ptr,&stack0x00000040);
  }
FUN_18073a7fd:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}






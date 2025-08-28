#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part125.c - 35 个函数

// 函数: void FUN_18073f710(uint64_t param_1)
void FUN_18073f710(uint64_t param_1)

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
    iVar1 = func_0x000180753860(uStack_120);
    if (iVar1 == 0) goto LAB_18073f792;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,3,param_1,&unknown_var_7112_ptr);
  }
LAB_18073f792:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f8b0(uint64_t param_1,uint64_t *param_2)
void FUN_18073f8b0(uint64_t param_1,uint64_t *param_2)

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
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756200(uStack_120,param_2);
  }
  else if (param_2 != (uint64_t *)0x0) {
    *param_2 = 0;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7464_ptr);
  }
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f990(uint64_t param_1,int32_t *param_2)
void FUN_18073f990(uint64_t param_1,int32_t *param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756330(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fa2f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7520_ptr);
  }
LAB_18073fa2f:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fa70(uint64_t param_1,int32_t *param_2,int32_t param_3)
void FUN_18073fa70(uint64_t param_1,int32_t *param_2,int32_t param_3)

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
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  lStack_148 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180756450(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073fb64;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7384_ptr);
  }
FUN_18073fb64:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fa8d(uint64_t param_1,int32_t *param_2,int32_t param_3)
void FUN_18073fa8d(uint64_t param_1,int32_t *param_2,int32_t param_3)

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
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  lStack0000000000000030 = 0;
  iVar1 = FUN_180758ed0(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180756450(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073fb64;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7384_ptr,&stack0x00000040);
  }
FUN_18073fb64:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073faec(void)
void FUN_18073faec(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,2);
}





// 函数: void FUN_18073fb64(void)
void FUN_18073fb64(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073fb86(void)
void FUN_18073fb86(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fbb0(uint64_t param_1,int8_t *param_2)
void FUN_18073fbb0(uint64_t param_1,int8_t *param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (param_2 != (int8_t *)0x0) {
    *param_2 = 0;
  }
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x1f0))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fc56;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7440_ptr);
  }
LAB_18073fc56:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fc90(uint64_t param_1,uint64_t param_2)
void FUN_18073fc90(uint64_t param_1,uint64_t param_2)

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
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756fe0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fd2a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7408_ptr);
  }
LAB_18073fd2a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fd60(uint64_t param_1,int32_t param_2)
void FUN_18073fd60(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180757530(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fdf8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7496_ptr);
  }
LAB_18073fdf8:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fe30(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18073fe30(uint64_t param_1,int32_t param_2,int32_t param_3)

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
  iVar1 = FUN_180758ed0(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180757ed0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ff1d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7360_ptr);
  }
FUN_18073ff1d:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fe4d(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18073fe4d(uint64_t param_1,int32_t param_2,int32_t param_3)

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
  iVar1 = FUN_180758ed0(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180757ed0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ff1d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7360_ptr,&stack0x00000040);
  }
FUN_18073ff1d:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073fea5(void)
void FUN_18073fea5(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,2);
}





// 函数: void FUN_18073ff1d(void)
void FUN_18073ff1d(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073ff3f(void)
void FUN_18073ff3f(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ff60(uint64_t param_1,int32_t param_2)
void FUN_18073ff60(uint64_t param_1,int32_t param_2)

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
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807580b0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&unknown_var_7336_ptr);
  }
LAB_18073fff8:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740030(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_180740030(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  uint64_t uStack_160;
  int64_t lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    uStack_160 = 0;
    puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,1);
    iVar1 = FUN_180759220(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740150;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7584_ptr);
  }
LAB_180740150:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740190(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180740190(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_18075dbf0(uStack_140,param_2,param_3,4);
    if (iVar1 == 0) goto FUN_180740283;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7600_ptr);
  }
FUN_180740283:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807401ad(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1807401ad(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_18075dbf0(in_stack_00000038,param_2,param_3,4);
    if (iVar1 == 0) goto FUN_180740283;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7600_ptr,&stack0x00000040);
  }
FUN_180740283:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18074020b(void)
void FUN_18074020b(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180740283(void)
void FUN_180740283(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807402a5(void)
void FUN_1807402a5(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807402d0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1807402d0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e4f0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807403bf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_8016_ptr);
  }
FUN_1807403bf:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807402ed(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1807402ed(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e4f0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807403bf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_8016_ptr,&stack0x00000040);
  }
FUN_1807403bf:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180740347(void)
void FUN_180740347(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074ba80(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_1807403bf(void)
void FUN_1807403bf(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807403e1(void)
void FUN_1807403e1(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740410(uint64_t param_1,uint64_t param_2)
void FUN_180740410(uint64_t param_1,uint64_t param_2)

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
  iVar1 = FUN_180763070(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e640(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_1807404aa;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7928_ptr);
  }
LAB_1807404aa:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807404e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1807404e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_18075e9c0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807405cf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7992_ptr);
  }
FUN_1807405cf:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807404fd(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1807404fd(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_18075e9c0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807405cf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7992_ptr,&stack0x00000040);
  }
FUN_1807405cf:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180740557(void)
void FUN_180740557(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_1807405cf(void)
void FUN_1807405cf(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807405f1(void)
void FUN_1807405f1(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740620(uint64_t param_1,uint64_t param_2)
void FUN_180740620(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  uint64_t auStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar1 = FUN_180763070(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x00018075ecb0(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7864_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



